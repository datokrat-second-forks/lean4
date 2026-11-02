// Lean compiler output
// Module: Lake.Toml.Grammar
// Imports: import Lake.Toml.ParserUtil import Lean.Parser public import Lean.PrettyPrinter.Formatter public import Lean.PrettyPrinter.Parenthesizer
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
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* l_Lean_Parser_takeWhileFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_trailing(lean_object*);
lean_object* l_Lake_Toml_skipFn___boxed(lean_object*, lean_object*);
lean_object* l_Lake_Toml_chAtom(uint32_t, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
lean_object* l_Lake_Toml_chFn(uint32_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t lean_uint32_dec_lt(uint32_t, uint32_t);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_mkUnexpectedCharError(lean_object*, uint32_t, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedErrorAt(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_litWithAntiquot(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkUnexpectedError(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_hexDigitFn(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* l_Lake_Toml_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomicFn(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected(lean_object*, lean_object*);
lean_object* l_Lake_Toml_strFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_lit(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_pushLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_setPos(lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByChar1Fn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByChar1AuxFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lake_Toml_digitPairFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_stackSize(lean_object*);
lean_object* l_Lean_Parser_ParserState_restore(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_isHexDigit___boxed(lean_object*);
lean_object* l_Lake_Toml_isOctDigit___boxed(lean_object*);
lean_object* l_Lake_Toml_isBinDigit___boxed(lean_object*);
lean_object* l_Lake_Toml_dynamicNode(lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeUntilFn(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lake_Toml_recNodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_chAtom_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_recNodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_epsilon_parenthesizer___redArg();
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByLinebreak_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_epsilon_formatter___redArg();
lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkStackTop(lean_object*, lean_object*);
lean_object* l_Lake_Toml_chAtom_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_litWithAntiquot_formatter___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_sepBy1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_setExpected_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_atomic(lean_object*);
lean_object* l_Lean_Parser_atomic_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_recNodeWithAntiquot_formatter(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_Toml_sepByLinebreak_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_sepByNoAntiquot(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
lean_object* l_Lake_Toml_digitFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isControlChar(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isControlChar___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_wsFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_Toml_wsFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_wsFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_wsFn___closed__0 = (const lean_object*)&l_Lake_Toml_wsFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid newline; no LF after CR"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_newlineFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "newline"};
static const lean_object* l_Lake_Toml_newlineFn___closed__0 = (const lean_object*)&l_Lake_Toml_newlineFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_newlineFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_newlineFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_newlineFn___closed__1 = (const lean_object*)&l_Lake_Toml_newlineFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_newlineFn(lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isControlChar___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_commentFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "comment"};
static const lean_object* l_Lake_Toml_commentFn___closed__0 = (const lean_object*)&l_Lake_Toml_commentFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_commentFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_commentFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_commentFn___closed__1 = (const lean_object*)&l_Lake_Toml_commentFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_commentFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_wsNewlineFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingFn(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lake_Toml_isEscapeChar(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_isEscapeChar___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "escape sequence"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "string gap is forbidden here"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "invalid escape sequence"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_wsNewlineFn, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "unterminated basic string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_basicStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "basic string"};
static const lean_object* l_Lake_Toml_basicStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_basicStringFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_basicStringFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_basicStringFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_basicStringFn___closed__1 = (const lean_object*)&l_Lake_Toml_basicStringFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_basicStringFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "unterminated literal string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_literalStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "literal string"};
static const lean_object* l_Lake_Toml_literalStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_literalStringFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_literalStringFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_literalStringFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_literalStringFn___closed__1 = (const lean_object*)&l_Lake_Toml_literalStringFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_literalStringFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "too many quotes"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "unterminated multi-line literal string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "multi-line literal string"};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_mlLiteralStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_mlLiteralStringFn___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))} };
static const lean_object* l_Lake_Toml_mlLiteralStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_mlLiteralStringFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "unterminated multi-line basic string"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "multi-line basic string"};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_mlBasicStringFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_mlBasicStringFn___lam__0, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))} };
static const lean_object* l_Lake_Toml_mlBasicStringFn___closed__0 = (const lean_object*)&l_Lake_Toml_mlBasicStringFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "hour digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "':'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "minute digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "time offset is forbidden here"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn(uint8_t, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "millisecond"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "second digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_timeFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hour"};
static const lean_object* l_Lake_Toml_timeFn___closed__0 = (const lean_object*)&l_Lake_Toml_timeFn___closed__0_value;
static const lean_ctor_object l_Lake_Toml_timeFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_timeFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_timeFn___closed__1 = (const lean_object*)&l_Lake_Toml_timeFn___closed__1_value;
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "month digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'-'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "day digit"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "year digit"};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1 = (const lean_object*)&l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_dateTimeFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "decimal exponent"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn(lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Toml"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "float"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 154, 151, 104, 68, 255, 246, 246)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3_value;
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_skipFn___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decInt"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5_value),LEAN_SCALAR_PTR_LITERAL(146, 5, 249, 175, 125, 238, 54, 100)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "decimal fraction"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailFn(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "decimal integer"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__1_value)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "nf"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "'inf'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "an"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "'nan'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decimalFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "dateTime"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(100, 234, 1, 129, 172, 254, 231, 202)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "date-time"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__3_value)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__0 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__0_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__4_value)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__1 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__1_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unexpected '"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__2 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__2_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__3 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__3_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__4 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__4_value;
static const lean_closure_object l_Lake_Toml_numeralFn___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isHexDigit___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__5 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__5_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "hexadecimal integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__6 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__6_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__7 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__7_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "hexNum"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__8 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__8_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__9_value_aux_1),((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__8_value),LEAN_SCALAR_PTR_LITERAL(93, 174, 95, 211, 123, 63, 171, 252)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__9 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__9_value;
static const lean_closure_object l_Lake_Toml_numeralFn___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isOctDigit___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__10 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__10_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "octal integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__11 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__11_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__12 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__12_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "octNum"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__13 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__13_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__14_value_aux_1),((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__13_value),LEAN_SCALAR_PTR_LITERAL(93, 70, 221, 168, 145, 119, 144, 197)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__14 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__14_value;
static const lean_closure_object l_Lake_Toml_numeralFn___lam__0___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_isBinDigit___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__15 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__15_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "binary integer"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__16 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__16_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__16_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__17 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__17_value;
static const lean_string_object l_Lake_Toml_numeralFn___lam__0___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binNum"};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__18 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__18_value;
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralFn___lam__0___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__19_value_aux_1),((lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__18_value),LEAN_SCALAR_PTR_LITERAL(59, 60, 170, 39, 77, 137, 193, 6)}};
static const lean_object* l_Lake_Toml_numeralFn___lam__0___closed__19 = (const lean_object*)&l_Lake_Toml_numeralFn___lam__0___closed__19_value;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lake_Toml_numeralFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_numeralFn___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_numeralFn___closed__0 = (const lean_object*)&l_Lake_Toml_numeralFn___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_trailingWs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_trailingWs___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs;
static const lean_closure_object l_Lake_Toml_trailingSep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_trailingFn, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_trailingSep___closed__0 = (const lean_object*)&l_Lake_Toml_trailingSep___closed__0_value;
static lean_once_cell_t l_Lake_Toml_trailingSep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_trailingSep___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep;
LEAN_EXPORT uint8_t l_Lake_Toml_unquotedKeyFn___lam__0(uint32_t);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lake_Toml_unquotedKeyFn___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_unquotedKeyFn___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_unquotedKeyFn___closed__0 = (const lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__0_value;
static const lean_string_object l_Lake_Toml_unquotedKeyFn___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "unquoted key"};
static const lean_object* l_Lake_Toml_unquotedKeyFn___closed__1 = (const lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__1_value;
static const lean_ctor_object l_Lake_Toml_unquotedKeyFn___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__1_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_unquotedKeyFn___closed__2 = (const lean_object*)&l_Lake_Toml_unquotedKeyFn___closed__2_value;
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_unquotedKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "unquotedKey"};
static const lean_object* l_Lake_Toml_unquotedKey___closed__0 = (const lean_object*)&l_Lake_Toml_unquotedKey___closed__0_value;
static const lean_ctor_object l_Lake_Toml_unquotedKey___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_unquotedKey___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_unquotedKey___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_unquotedKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_unquotedKey___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_unquotedKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 43, 232, 206, 44, 188, 39, 241)}};
static const lean_object* l_Lake_Toml_unquotedKey___closed__1 = (const lean_object*)&l_Lake_Toml_unquotedKey___closed__1_value;
static lean_once_cell_t l_Lake_Toml_unquotedKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_unquotedKey___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey;
static const lean_string_object l_Lake_Toml_basicString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "basicString"};
static const lean_object* l_Lake_Toml_basicString___closed__0 = (const lean_object*)&l_Lake_Toml_basicString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_basicString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_basicString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_basicString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_basicString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_basicString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_basicString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 34, 208, 112, 75, 114, 213, 233)}};
static const lean_object* l_Lake_Toml_basicString___closed__1 = (const lean_object*)&l_Lake_Toml_basicString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_basicString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_basicString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_basicString;
static const lean_string_object l_Lake_Toml_literalString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "literalString"};
static const lean_object* l_Lake_Toml_literalString___closed__0 = (const lean_object*)&l_Lake_Toml_literalString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_literalString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_literalString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_literalString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_literalString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_literalString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_literalString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 168, 165, 209, 230, 255, 154, 83)}};
static const lean_object* l_Lake_Toml_literalString___closed__1 = (const lean_object*)&l_Lake_Toml_literalString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_literalString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_literalString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_literalString;
static const lean_string_object l_Lake_Toml_mlBasicString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "mlBasicString"};
static const lean_object* l_Lake_Toml_mlBasicString___closed__0 = (const lean_object*)&l_Lake_Toml_mlBasicString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_mlBasicString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_mlBasicString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlBasicString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_mlBasicString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlBasicString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_mlBasicString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 27, 188, 79, 217, 46, 221, 25)}};
static const lean_object* l_Lake_Toml_mlBasicString___closed__1 = (const lean_object*)&l_Lake_Toml_mlBasicString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_mlBasicString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_mlBasicString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicString;
static const lean_string_object l_Lake_Toml_mlLiteralString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "mlLiteralString"};
static const lean_object* l_Lake_Toml_mlLiteralString___closed__0 = (const lean_object*)&l_Lake_Toml_mlLiteralString___closed__0_value;
static const lean_ctor_object l_Lake_Toml_mlLiteralString___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_mlLiteralString___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlLiteralString___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_mlLiteralString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_mlLiteralString___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_mlLiteralString___closed__0_value),LEAN_SCALAR_PTR_LITERAL(249, 215, 18, 247, 52, 33, 2, 54)}};
static const lean_object* l_Lake_Toml_mlLiteralString___closed__1 = (const lean_object*)&l_Lake_Toml_mlLiteralString___closed__1_value;
static lean_once_cell_t l_Lake_Toml_mlLiteralString___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_mlLiteralString___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralString;
static lean_once_cell_t l_Lake_Toml_quotedKey___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_quotedKey___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey;
static const lean_string_object l_Lake_Toml_simpleKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "simpleKey"};
static const lean_object* l_Lake_Toml_simpleKey___closed__0 = (const lean_object*)&l_Lake_Toml_simpleKey___closed__0_value;
static const lean_ctor_object l_Lake_Toml_simpleKey___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_simpleKey___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_simpleKey___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_simpleKey___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_simpleKey___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_simpleKey___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 51, 117, 190, 121, 223, 170, 220)}};
static const lean_object* l_Lake_Toml_simpleKey___closed__1 = (const lean_object*)&l_Lake_Toml_simpleKey___closed__1_value;
static lean_once_cell_t l_Lake_Toml_simpleKey___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey___closed__2;
static lean_once_cell_t l_Lake_Toml_simpleKey___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey;
static const lean_string_object l_Lake_Toml_key___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "key"};
static const lean_object* l_Lake_Toml_key___closed__0 = (const lean_object*)&l_Lake_Toml_key___closed__0_value;
static const lean_ctor_object l_Lake_Toml_key___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_key___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_key___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_key___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 24, 166, 18, 184, 133, 165, 53)}};
static const lean_object* l_Lake_Toml_key___closed__1 = (const lean_object*)&l_Lake_Toml_key___closed__1_value;
static const lean_ctor_object l_Lake_Toml_key___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_key___closed__2 = (const lean_object*)&l_Lake_Toml_key___closed__2_value;
static const lean_string_object l_Lake_Toml_key___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* l_Lake_Toml_key___closed__3 = (const lean_object*)&l_Lake_Toml_key___closed__3_value;
static const lean_string_object l_Lake_Toml_key___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'.'"};
static const lean_object* l_Lake_Toml_key___closed__4 = (const lean_object*)&l_Lake_Toml_key___closed__4_value;
static const lean_ctor_object l_Lake_Toml_key___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_key___closed__4_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_key___closed__5 = (const lean_object*)&l_Lake_Toml_key___closed__5_value;
static lean_once_cell_t l_Lake_Toml_key___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__6;
static lean_once_cell_t l_Lake_Toml_key___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__7;
static lean_once_cell_t l_Lake_Toml_key___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__8;
static lean_once_cell_t l_Lake_Toml_key___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__9;
static lean_once_cell_t l_Lake_Toml_key___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__10;
static lean_once_cell_t l_Lake_Toml_key___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key___closed__11;
LEAN_EXPORT lean_object* l_Lake_Toml_key;
static const lean_string_object l_Lake_Toml_stdTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "stdTable"};
static const lean_object* l_Lake_Toml_stdTable___closed__0 = (const lean_object*)&l_Lake_Toml_stdTable___closed__0_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_stdTable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_stdTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_stdTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(204, 45, 156, 80, 41, 178, 181, 196)}};
static const lean_object* l_Lake_Toml_stdTable___closed__1 = (const lean_object*)&l_Lake_Toml_stdTable___closed__1_value;
static const lean_string_object l_Lake_Toml_stdTable___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "table"};
static const lean_object* l_Lake_Toml_stdTable___closed__2 = (const lean_object*)&l_Lake_Toml_stdTable___closed__2_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_stdTable___closed__3 = (const lean_object*)&l_Lake_Toml_stdTable___closed__3_value;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__4;
static const lean_string_object l_Lake_Toml_stdTable___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'['"};
static const lean_object* l_Lake_Toml_stdTable___closed__5 = (const lean_object*)&l_Lake_Toml_stdTable___closed__5_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_stdTable___closed__6 = (const lean_object*)&l_Lake_Toml_stdTable___closed__6_value;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__7;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__8;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__9;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__10;
static const lean_string_object l_Lake_Toml_stdTable___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "']'"};
static const lean_object* l_Lake_Toml_stdTable___closed__11 = (const lean_object*)&l_Lake_Toml_stdTable___closed__11_value;
static const lean_ctor_object l_Lake_Toml_stdTable___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_stdTable___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_stdTable___closed__12 = (const lean_object*)&l_Lake_Toml_stdTable___closed__12_value;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__13;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__14;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__15;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__16;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__17;
static lean_once_cell_t l_Lake_Toml_stdTable___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable___closed__18;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable;
static const lean_string_object l_Lake_Toml_arrayTable___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "arrayTable"};
static const lean_object* l_Lake_Toml_arrayTable___closed__0 = (const lean_object*)&l_Lake_Toml_arrayTable___closed__0_value;
static const lean_ctor_object l_Lake_Toml_arrayTable___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_arrayTable___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_arrayTable___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_arrayTable___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_arrayTable___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_arrayTable___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 220, 56, 86, 146, 203, 81, 19)}};
static const lean_object* l_Lake_Toml_arrayTable___closed__1 = (const lean_object*)&l_Lake_Toml_arrayTable___closed__1_value;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__2;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__3;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__4;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__5;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__6;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__7;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__8;
static lean_once_cell_t l_Lake_Toml_arrayTable___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable___closed__9;
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable;
static lean_once_cell_t l_Lake_Toml_table___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_table___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_table;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "keyval"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(105, 46, 78, 232, 161, 211, 209, 25)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'='"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expression"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(106, 203, 126, 0, 105, 98, 19, 240)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(lean_object*);
static const lean_string_object l_Lake_Toml_header___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l_Lake_Toml_header___closed__0 = (const lean_object*)&l_Lake_Toml_header___closed__0_value;
static const lean_ctor_object l_Lake_Toml_header___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_header___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_header___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_header___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_header___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_header___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 19, 11, 35, 86, 242, 57, 11)}};
static const lean_object* l_Lake_Toml_header___closed__1 = (const lean_object*)&l_Lake_Toml_header___closed__1_value;
static lean_once_cell_t l_Lake_Toml_header___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_header___closed__2;
LEAN_EXPORT lean_object* l_Lake_Toml_header;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "toml"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(241, 110, 132, 157, 201, 185, 149, 61)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__2_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "line break"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore(lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inlineTable"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 125, 46, 131, 161, 142, 50, 23)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "inline-table"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5_value;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "','"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__6_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8;
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "'}'"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__9_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(lean_object*);
static const lean_string_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "array"};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value_aux_1),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 212, 239, 77, 14, 34, 57, 134)}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1_value;
static const lean_ctor_object l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2_value;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(lean_object*);
static const lean_string_object l_Lake_Toml_string___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "string"};
static const lean_object* l_Lake_Toml_string___closed__0 = (const lean_object*)&l_Lake_Toml_string___closed__0_value;
static const lean_ctor_object l_Lake_Toml_string___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_string___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_string___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_string___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_string___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_string___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 134, 223, 178, 21, 25, 142, 203)}};
static const lean_object* l_Lake_Toml_string___closed__1 = (const lean_object*)&l_Lake_Toml_string___closed__1_value;
static const lean_ctor_object l_Lake_Toml_string___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_string___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_string___closed__2 = (const lean_object*)&l_Lake_Toml_string___closed__2_value;
static lean_once_cell_t l_Lake_Toml_string___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__3;
static lean_once_cell_t l_Lake_Toml_string___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__4;
static lean_once_cell_t l_Lake_Toml_string___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__5;
static lean_once_cell_t l_Lake_Toml_string___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__6;
static lean_once_cell_t l_Lake_Toml_string___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_string___closed__7;
LEAN_EXPORT lean_object* l_Lake_Toml_string;
static const lean_string_object l_Lake_Toml_true___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lake_Toml_true___closed__0 = (const lean_object*)&l_Lake_Toml_true___closed__0_value;
static const lean_ctor_object l_Lake_Toml_true___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_true___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_true___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_true___closed__0_value),LEAN_SCALAR_PTR_LITERAL(94, 186, 129, 3, 94, 77, 39, 82)}};
static const lean_object* l_Lake_Toml_true___closed__1 = (const lean_object*)&l_Lake_Toml_true___closed__1_value;
static const lean_string_object l_Lake_Toml_true___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "'true'"};
static const lean_object* l_Lake_Toml_true___closed__2 = (const lean_object*)&l_Lake_Toml_true___closed__2_value;
static const lean_ctor_object l_Lake_Toml_true___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_true___closed__3 = (const lean_object*)&l_Lake_Toml_true___closed__3_value;
static const lean_closure_object l_Lake_Toml_true___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_strFn, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_Toml_true___closed__0_value),((lean_object*)&l_Lake_Toml_true___closed__3_value)} };
static const lean_object* l_Lake_Toml_true___closed__4 = (const lean_object*)&l_Lake_Toml_true___closed__4_value;
static lean_once_cell_t l_Lake_Toml_true___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_true___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_true;
static const lean_string_object l_Lake_Toml_false___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lake_Toml_false___closed__0 = (const lean_object*)&l_Lake_Toml_false___closed__0_value;
static const lean_ctor_object l_Lake_Toml_false___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_false___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_false___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_false___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 94, 147, 128, 103, 18, 162, 55)}};
static const lean_object* l_Lake_Toml_false___closed__1 = (const lean_object*)&l_Lake_Toml_false___closed__1_value;
static const lean_string_object l_Lake_Toml_false___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "'false'"};
static const lean_object* l_Lake_Toml_false___closed__2 = (const lean_object*)&l_Lake_Toml_false___closed__2_value;
static const lean_ctor_object l_Lake_Toml_false___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__2_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake_Toml_false___closed__3 = (const lean_object*)&l_Lake_Toml_false___closed__3_value;
static const lean_closure_object l_Lake_Toml_false___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lake_Toml_strFn, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lake_Toml_false___closed__0_value),((lean_object*)&l_Lake_Toml_false___closed__3_value)} };
static const lean_object* l_Lake_Toml_false___closed__4 = (const lean_object*)&l_Lake_Toml_false___closed__4_value;
static lean_once_cell_t l_Lake_Toml_false___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_false___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_false;
static const lean_string_object l_Lake_Toml_boolean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "boolean"};
static const lean_object* l_Lake_Toml_boolean___closed__0 = (const lean_object*)&l_Lake_Toml_boolean___closed__0_value;
static const lean_ctor_object l_Lake_Toml_boolean___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_boolean___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_boolean___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_boolean___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_boolean___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_boolean___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 74, 28, 167, 158, 175, 30, 0)}};
static const lean_object* l_Lake_Toml_boolean___closed__1 = (const lean_object*)&l_Lake_Toml_boolean___closed__1_value;
static lean_once_cell_t l_Lake_Toml_boolean___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_boolean___closed__2;
static lean_once_cell_t l_Lake_Toml_boolean___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_boolean___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_boolean;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__0;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__1;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__2;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__3;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__4;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__5;
static const lean_string_object l_Lake_Toml_numeralAntiquot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numeral"};
static const lean_object* l_Lake_Toml_numeralAntiquot___closed__6 = (const lean_object*)&l_Lake_Toml_numeralAntiquot___closed__6_value;
static const lean_ctor_object l_Lake_Toml_numeralAntiquot___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_numeralAntiquot___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralAntiquot___closed__7_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_numeralAntiquot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_numeralAntiquot___closed__7_value_aux_1),((lean_object*)&l_Lake_Toml_numeralAntiquot___closed__6_value),LEAN_SCALAR_PTR_LITERAL(103, 24, 202, 101, 169, 12, 111, 38)}};
static const lean_object* l_Lake_Toml_numeralAntiquot___closed__7 = (const lean_object*)&l_Lake_Toml_numeralAntiquot___closed__7_value;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__8;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__9;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__10;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__11;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__12;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__13;
static lean_once_cell_t l_Lake_Toml_numeralAntiquot___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeralAntiquot___closed__14;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralAntiquot;
static lean_once_cell_t l_Lake_Toml_numeral___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeral___closed__0;
static lean_once_cell_t l_Lake_Toml_numeral___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_numeral___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_numeral;
LEAN_EXPORT uint8_t l_Lake_Toml_numeralOfKind___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lake_Toml_numeralOfKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "illegal numeral kind"};
static const lean_object* l_Lake_Toml_numeralOfKind___closed__0 = (const lean_object*)&l_Lake_Toml_numeralOfKind___closed__0_value;
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind(lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_float___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_float___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_float;
static lean_once_cell_t l_Lake_Toml_decInt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_decInt___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_decInt;
static const lean_string_object l_Lake_Toml_binNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "binary number"};
static const lean_object* l_Lake_Toml_binNum___closed__0 = (const lean_object*)&l_Lake_Toml_binNum___closed__0_value;
static lean_once_cell_t l_Lake_Toml_binNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_binNum___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_binNum;
static const lean_string_object l_Lake_Toml_octNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "octal number"};
static const lean_object* l_Lake_Toml_octNum___closed__0 = (const lean_object*)&l_Lake_Toml_octNum___closed__0_value;
static lean_once_cell_t l_Lake_Toml_octNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_octNum___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_octNum;
static const lean_string_object l_Lake_Toml_hexNum___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "hexadecimal number"};
static const lean_object* l_Lake_Toml_hexNum___closed__0 = (const lean_object*)&l_Lake_Toml_hexNum___closed__0_value;
static lean_once_cell_t l_Lake_Toml_hexNum___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_hexNum___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_hexNum;
static lean_once_cell_t l_Lake_Toml_dateTime___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_dateTime___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_dateTime;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_valCore(lean_object*);
static const lean_string_object l_Lake_Toml_val___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lake_Toml_val___closed__0 = (const lean_object*)&l_Lake_Toml_val___closed__0_value;
static const lean_ctor_object l_Lake_Toml_val___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_Toml_val___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_val___closed__1_value_aux_0),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__1_value),LEAN_SCALAR_PTR_LITERAL(162, 254, 21, 174, 177, 224, 84, 229)}};
static const lean_ctor_object l_Lake_Toml_val___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_Toml_val___closed__1_value_aux_1),((lean_object*)&l_Lake_Toml_val___closed__0_value),LEAN_SCALAR_PTR_LITERAL(209, 33, 214, 61, 136, 139, 92, 226)}};
static const lean_object* l_Lake_Toml_val___closed__1 = (const lean_object*)&l_Lake_Toml_val___closed__1_value;
static const lean_closure_object l_Lake_Toml_val___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lake_Toml_Grammar_0__Lake_Toml_valCore, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lake_Toml_val___closed__2 = (const lean_object*)&l_Lake_Toml_val___closed__2_value;
static lean_once_cell_t l_Lake_Toml_val___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_val___closed__3;
LEAN_EXPORT lean_object* l_Lake_Toml_val;
static lean_once_cell_t l_Lake_Toml_array___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_array___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_array;
static lean_once_cell_t l_Lake_Toml_inlineTable___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_inlineTable___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_inlineTable;
static lean_once_cell_t l_Lake_Toml_keyval___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_keyval___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_keyval;
static lean_once_cell_t l_Lake_Toml_expression___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_expression___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_expression;
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_simpleKey_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey_formatter___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter___closed__0___boxed__const__1;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__0;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__1;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__2;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__3;
static lean_once_cell_t l_Lake_Toml_key_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_formatter___closed__4;
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1;
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__0;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__1;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__2;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__3;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__4;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__5;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__6;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__7;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__8;
static lean_once_cell_t l_Lake_Toml_stdTable_formatter___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_formatter___closed__9;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__0;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__1;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__2;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__3;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__4;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__5;
static lean_once_cell_t l_Lake_Toml_arrayTable_formatter___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_formatter___closed__6;
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_simpleKey_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_simpleKey_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__0;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__1;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__2;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__3;
static lean_once_cell_t l_Lake_Toml_key_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_key_parenthesizer___closed__4;
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__0;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__1;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__2;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__3;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__4;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__5;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__6;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__7;
static lean_once_cell_t l_Lake_Toml_stdTable_parenthesizer___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_stdTable_parenthesizer___closed__8;
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__0;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__1;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__2;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__3;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__4;
static lean_once_cell_t l_Lake_Toml_arrayTable_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_arrayTable_parenthesizer___closed__5;
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0_value),((lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0 = (const lean_object*)&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg();
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lake_Toml_toml___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_toml___closed__0;
static lean_once_cell_t l_Lake_Toml_toml___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake_Toml_toml___closed__1;
LEAN_EXPORT lean_object* l_Lake_Toml_toml;
LEAN_EXPORT uint8_t l_Lake_Toml_isControlChar(uint32_t v_c_1_){
_start:
{
uint32_t v___x_2_; uint8_t v___x_3_; 
v___x_2_ = 127;
v___x_3_ = lean_uint32_dec_eq(v_c_1_, v___x_2_);
if (v___x_3_ == 0)
{
uint32_t v___x_4_; uint8_t v___x_5_; 
v___x_4_ = 32;
v___x_5_ = lean_uint32_dec_lt(v_c_1_, v___x_4_);
if (v___x_5_ == 0)
{
return v___x_5_;
}
else
{
uint32_t v___x_6_; uint8_t v___x_7_; 
v___x_6_ = 9;
v___x_7_ = lean_uint32_dec_eq(v_c_1_, v___x_6_);
if (v___x_7_ == 0)
{
return v___x_5_;
}
else
{
return v___x_3_;
}
}
}
else
{
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isControlChar___boxed(lean_object* v_c_8_){
_start:
{
uint32_t v_c_boxed_9_; uint8_t v_res_10_; lean_object* v_r_11_; 
v_c_boxed_9_ = lean_unbox_uint32(v_c_8_);
lean_dec(v_c_8_);
v_res_10_ = l_Lake_Toml_isControlChar(v_c_boxed_9_);
v_r_11_ = lean_box(v_res_10_);
return v_r_11_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_wsFn___lam__0(uint32_t v_c_12_){
_start:
{
uint32_t v___x_13_; uint8_t v___x_14_; 
v___x_13_ = 32;
v___x_14_ = lean_uint32_dec_eq(v_c_12_, v___x_13_);
if (v___x_14_ == 0)
{
uint32_t v___x_15_; uint8_t v___x_16_; 
v___x_15_ = 9;
v___x_16_ = lean_uint32_dec_eq(v_c_12_, v___x_15_);
return v___x_16_;
}
else
{
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn___lam__0___boxed(lean_object* v_c_17_){
_start:
{
uint32_t v_c_boxed_18_; uint8_t v_res_19_; lean_object* v_r_20_; 
v_c_boxed_18_ = lean_unbox_uint32(v_c_17_);
lean_dec(v_c_17_);
v_res_19_ = l_Lake_Toml_wsFn___lam__0(v_c_boxed_18_);
v_r_20_ = lean_box(v_res_19_);
return v_r_20_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsFn(lean_object* v_a_22_, lean_object* v_a_23_){
_start:
{
lean_object* v___f_24_; lean_object* v___x_25_; 
v___f_24_ = ((lean_object*)(l_Lake_Toml_wsFn___closed__0));
v___x_25_ = l_Lean_Parser_takeWhileFn(v___f_24_, v_a_22_, v_a_23_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(lean_object* v_c_27_, lean_object* v_s_28_){
_start:
{
lean_object* v_toInputContext_29_; lean_object* v_pos_30_; lean_object* v_errMsg_31_; uint8_t v___x_32_; uint8_t v___x_33_; 
v_toInputContext_29_ = lean_ctor_get(v_c_27_, 0);
v_pos_30_ = lean_ctor_get(v_s_28_, 2);
v_errMsg_31_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn___closed__0));
lean_inc(v_pos_30_);
lean_inc_ref(v_toInputContext_29_);
v___x_32_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_29_, v_pos_30_);
v___x_33_ = 1;
if (v___x_32_ == 0)
{
lean_object* v_inputString_34_; uint32_t v_curr_35_; uint32_t v___x_36_; uint8_t v___x_37_; 
v_inputString_34_ = lean_ctor_get(v_toInputContext_29_, 0);
v_curr_35_ = lean_string_utf8_get_fast(v_inputString_34_, v_pos_30_);
v___x_36_ = 10;
v___x_37_ = lean_uint32_dec_eq(v_curr_35_, v___x_36_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; lean_object* v___x_39_; 
lean_dec_ref(v_c_27_);
v___x_38_ = lean_box(0);
v___x_39_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_28_, v_errMsg_31_, v___x_38_, v___x_33_);
return v___x_39_;
}
else
{
lean_object* v___x_40_; 
lean_inc(v_pos_30_);
v___x_40_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_28_, v_c_27_, v_pos_30_);
lean_dec(v_pos_30_);
lean_dec_ref(v_c_27_);
return v___x_40_;
}
}
else
{
lean_object* v___x_41_; lean_object* v___x_42_; 
lean_dec_ref(v_c_27_);
v___x_41_ = lean_box(0);
v___x_42_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_28_, v_errMsg_31_, v___x_41_, v___x_33_);
return v___x_42_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_newlineFn(lean_object* v_c_47_, lean_object* v_s_48_){
_start:
{
lean_object* v_toInputContext_49_; lean_object* v_pos_50_; uint8_t v___x_51_; 
v_toInputContext_49_ = lean_ctor_get(v_c_47_, 0);
v_pos_50_ = lean_ctor_get(v_s_48_, 2);
lean_inc(v_pos_50_);
lean_inc_ref(v_toInputContext_49_);
v___x_51_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_49_, v_pos_50_);
if (v___x_51_ == 0)
{
lean_object* v_inputString_52_; uint32_t v_curr_53_; uint32_t v___x_54_; uint8_t v___x_55_; 
v_inputString_52_ = lean_ctor_get(v_toInputContext_49_, 0);
v_curr_53_ = lean_string_utf8_get_fast(v_inputString_52_, v_pos_50_);
v___x_54_ = 10;
v___x_55_ = lean_uint32_dec_eq(v_curr_53_, v___x_54_);
if (v___x_55_ == 0)
{
uint32_t v___x_56_; uint8_t v___x_57_; 
v___x_56_ = 13;
v___x_57_ = lean_uint32_dec_eq(v_curr_53_, v___x_56_);
if (v___x_57_ == 0)
{
uint8_t v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; 
lean_dec_ref(v_c_47_);
v___x_58_ = 1;
v___x_59_ = ((lean_object*)(l_Lake_Toml_newlineFn___closed__1));
v___x_60_ = l_Lake_Toml_mkUnexpectedCharError(v_s_48_, v_curr_53_, v___x_59_, v___x_58_);
return v___x_60_;
}
else
{
lean_object* v___x_61_; lean_object* v___x_62_; 
lean_inc(v_pos_50_);
v___x_61_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_48_, v_c_47_, v_pos_50_);
lean_dec(v_pos_50_);
v___x_62_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_47_, v___x_61_);
return v___x_62_;
}
}
else
{
lean_object* v___x_63_; 
lean_inc(v_pos_50_);
v___x_63_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_48_, v_c_47_, v_pos_50_);
lean_dec(v_pos_50_);
lean_dec_ref(v_c_47_);
return v___x_63_;
}
}
else
{
lean_object* v___x_64_; lean_object* v___x_65_; 
lean_dec_ref(v_c_47_);
v___x_64_ = ((lean_object*)(l_Lake_Toml_newlineFn___closed__1));
v___x_65_ = l_Lean_Parser_ParserState_mkEOIError(v_s_48_, v___x_64_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn___closed__0));
v___x_70_ = l_Lean_Parser_takeUntilFn(v___x_69_, v_a_67_, v_a_68_);
return v___x_70_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(lean_object* v_x_71_, lean_object* v_x_72_){
_start:
{
if (lean_obj_tag(v_x_71_) == 0)
{
if (lean_obj_tag(v_x_72_) == 0)
{
uint8_t v___x_73_; 
v___x_73_ = 1;
return v___x_73_;
}
else
{
uint8_t v___x_74_; 
v___x_74_ = 0;
return v___x_74_;
}
}
else
{
if (lean_obj_tag(v_x_72_) == 0)
{
uint8_t v___x_75_; 
v___x_75_ = 0;
return v___x_75_;
}
else
{
lean_object* v_val_76_; lean_object* v_val_77_; uint8_t v___x_78_; 
v_val_76_ = lean_ctor_get(v_x_71_, 0);
v_val_77_ = lean_ctor_get(v_x_72_, 0);
v___x_78_ = l_Lean_Parser_instBEqError_beq(v_val_76_, v_val_77_);
return v___x_78_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0___boxed(lean_object* v_x_79_, lean_object* v_x_80_){
_start:
{
uint8_t v_res_81_; lean_object* v_r_82_; 
v_res_81_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_x_79_, v_x_80_);
lean_dec(v_x_80_);
lean_dec(v_x_79_);
v_r_82_ = lean_box(v_res_81_);
return v_r_82_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_commentFn(lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
uint32_t v___x_89_; lean_object* v___x_90_; lean_object* v_s_91_; lean_object* v_errorMsg_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v___x_89_ = 35;
v___x_90_ = ((lean_object*)(l_Lake_Toml_commentFn___closed__1));
lean_inc_ref(v_a_87_);
v_s_91_ = l_Lake_Toml_chFn(v___x_89_, v___x_90_, v_a_87_, v_a_88_);
v_errorMsg_92_ = lean_ctor_get(v_s_91_, 4);
v___x_93_ = lean_box(0);
v___x_94_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_92_, v___x_93_);
if (v___x_94_ == 0)
{
lean_dec_ref(v_a_87_);
return v_s_91_;
}
else
{
lean_object* v___x_95_; 
v___x_95_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(v_a_87_, v_s_91_);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_wsNewlineFn(lean_object* v_c_96_, lean_object* v_s_97_){
_start:
{
lean_object* v_toInputContext_98_; lean_object* v_pos_99_; uint8_t v___x_103_; 
v_toInputContext_98_ = lean_ctor_get(v_c_96_, 0);
v_pos_99_ = lean_ctor_get(v_s_97_, 2);
lean_inc(v_pos_99_);
lean_inc_ref(v_toInputContext_98_);
v___x_103_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_98_, v_pos_99_);
if (v___x_103_ == 0)
{
lean_object* v_inputString_104_; uint32_t v_curr_105_; uint32_t v___x_106_; uint8_t v___x_107_; 
v_inputString_104_ = lean_ctor_get(v_toInputContext_98_, 0);
v_curr_105_ = lean_string_utf8_get_fast(v_inputString_104_, v_pos_99_);
v___x_106_ = 32;
v___x_107_ = lean_uint32_dec_eq(v_curr_105_, v___x_106_);
if (v___x_107_ == 0)
{
uint32_t v___x_108_; uint8_t v___x_109_; 
v___x_108_ = 9;
v___x_109_ = lean_uint32_dec_eq(v_curr_105_, v___x_108_);
if (v___x_109_ == 0)
{
uint32_t v___x_110_; uint8_t v___x_111_; 
v___x_110_ = 10;
v___x_111_ = lean_uint32_dec_eq(v_curr_105_, v___x_110_);
if (v___x_111_ == 0)
{
uint32_t v___x_112_; uint8_t v___x_113_; 
v___x_112_ = 13;
v___x_113_ = lean_uint32_dec_eq(v_curr_105_, v___x_112_);
if (v___x_113_ == 0)
{
lean_dec_ref(v_c_96_);
return v_s_97_;
}
else
{
lean_object* v___x_114_; lean_object* v_s_115_; lean_object* v_errorMsg_116_; lean_object* v___x_117_; uint8_t v___x_118_; 
lean_inc(v_pos_99_);
v___x_114_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_97_, v_c_96_, v_pos_99_);
lean_dec(v_pos_99_);
lean_inc_ref(v_c_96_);
v_s_115_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_96_, v___x_114_);
v_errorMsg_116_ = lean_ctor_get(v_s_115_, 4);
v___x_117_ = lean_box(0);
v___x_118_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_116_, v___x_117_);
if (v___x_118_ == 0)
{
lean_dec_ref(v_c_96_);
return v_s_115_;
}
else
{
v_s_97_ = v_s_115_;
goto _start;
}
}
}
else
{
lean_inc(v_pos_99_);
goto v___jp_100_;
}
}
else
{
lean_inc(v_pos_99_);
goto v___jp_100_;
}
}
else
{
lean_inc(v_pos_99_);
goto v___jp_100_;
}
}
else
{
lean_dec_ref(v_c_96_);
return v_s_97_;
}
v___jp_100_:
{
lean_object* v___x_101_; 
v___x_101_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_97_, v_c_96_, v_pos_99_);
lean_dec(v_pos_99_);
v_s_97_ = v___x_101_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingFn(lean_object* v_c_120_, lean_object* v_s_121_){
_start:
{
lean_object* v_toInputContext_122_; lean_object* v_pos_123_; uint8_t v___x_127_; 
v_toInputContext_122_ = lean_ctor_get(v_c_120_, 0);
v_pos_123_ = lean_ctor_get(v_s_121_, 2);
lean_inc(v_pos_123_);
lean_inc_ref(v_toInputContext_122_);
v___x_127_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_122_, v_pos_123_);
if (v___x_127_ == 0)
{
lean_object* v_inputString_128_; uint32_t v_curr_129_; uint32_t v___x_130_; uint8_t v___x_131_; 
v_inputString_128_ = lean_ctor_get(v_toInputContext_122_, 0);
v_curr_129_ = lean_string_utf8_get_fast(v_inputString_128_, v_pos_123_);
v___x_130_ = 32;
v___x_131_ = lean_uint32_dec_eq(v_curr_129_, v___x_130_);
if (v___x_131_ == 0)
{
uint32_t v___x_132_; uint8_t v___x_133_; 
v___x_132_ = 9;
v___x_133_ = lean_uint32_dec_eq(v_curr_129_, v___x_132_);
if (v___x_133_ == 0)
{
uint32_t v___x_134_; uint8_t v___x_135_; 
v___x_134_ = 10;
v___x_135_ = lean_uint32_dec_eq(v_curr_129_, v___x_134_);
if (v___x_135_ == 0)
{
uint32_t v___x_136_; uint8_t v___x_137_; 
v___x_136_ = 13;
v___x_137_ = lean_uint32_dec_eq(v_curr_129_, v___x_136_);
if (v___x_137_ == 0)
{
uint32_t v___x_138_; uint8_t v___x_139_; 
v___x_138_ = 35;
v___x_139_ = lean_uint32_dec_eq(v_curr_129_, v___x_138_);
if (v___x_139_ == 0)
{
lean_dec_ref(v_c_120_);
return v_s_121_;
}
else
{
lean_object* v___x_140_; lean_object* v_s_141_; lean_object* v_errorMsg_142_; lean_object* v___x_143_; uint8_t v___x_144_; 
lean_inc(v_pos_123_);
v___x_140_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_121_, v_c_120_, v_pos_123_);
lean_dec(v_pos_123_);
lean_inc_ref(v_c_120_);
v_s_141_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_commentBodyFn(v_c_120_, v___x_140_);
v_errorMsg_142_ = lean_ctor_get(v_s_141_, 4);
v___x_143_ = lean_box(0);
v___x_144_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_142_, v___x_143_);
if (v___x_144_ == 0)
{
lean_dec_ref(v_c_120_);
return v_s_141_;
}
else
{
v_s_121_ = v_s_141_;
goto _start;
}
}
}
else
{
lean_object* v___x_146_; lean_object* v_s_147_; lean_object* v_errorMsg_148_; lean_object* v___x_149_; uint8_t v___x_150_; 
lean_inc(v_pos_123_);
v___x_146_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_121_, v_c_120_, v_pos_123_);
lean_dec(v_pos_123_);
lean_inc_ref(v_c_120_);
v_s_147_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_120_, v___x_146_);
v_errorMsg_148_ = lean_ctor_get(v_s_147_, 4);
v___x_149_ = lean_box(0);
v___x_150_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_148_, v___x_149_);
if (v___x_150_ == 0)
{
lean_dec_ref(v_c_120_);
return v_s_147_;
}
else
{
v_s_121_ = v_s_147_;
goto _start;
}
}
}
else
{
lean_inc(v_pos_123_);
goto v___jp_124_;
}
}
else
{
lean_inc(v_pos_123_);
goto v___jp_124_;
}
}
else
{
lean_inc(v_pos_123_);
goto v___jp_124_;
}
}
else
{
lean_dec_ref(v_c_120_);
return v_s_121_;
}
v___jp_124_:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_121_, v_c_120_, v_pos_123_);
lean_dec(v_pos_123_);
v_s_121_ = v___x_125_;
goto _start;
}
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_isEscapeChar(uint32_t v_c_152_){
_start:
{
uint32_t v___x_153_; uint8_t v___x_154_; 
v___x_153_ = 98;
v___x_154_ = lean_uint32_dec_eq(v_c_152_, v___x_153_);
if (v___x_154_ == 0)
{
uint32_t v___x_155_; uint8_t v___x_156_; 
v___x_155_ = 116;
v___x_156_ = lean_uint32_dec_eq(v_c_152_, v___x_155_);
if (v___x_156_ == 0)
{
uint32_t v___x_157_; uint8_t v___x_158_; 
v___x_157_ = 110;
v___x_158_ = lean_uint32_dec_eq(v_c_152_, v___x_157_);
if (v___x_158_ == 0)
{
uint32_t v___x_159_; uint8_t v___x_160_; 
v___x_159_ = 102;
v___x_160_ = lean_uint32_dec_eq(v_c_152_, v___x_159_);
if (v___x_160_ == 0)
{
uint32_t v___x_161_; uint8_t v___x_162_; 
v___x_161_ = 114;
v___x_162_ = lean_uint32_dec_eq(v_c_152_, v___x_161_);
if (v___x_162_ == 0)
{
uint32_t v___x_163_; uint8_t v___x_164_; 
v___x_163_ = 34;
v___x_164_ = lean_uint32_dec_eq(v_c_152_, v___x_163_);
if (v___x_164_ == 0)
{
uint32_t v___x_165_; uint8_t v___x_166_; 
v___x_165_ = 92;
v___x_166_ = lean_uint32_dec_eq(v_c_152_, v___x_165_);
return v___x_166_;
}
else
{
return v___x_164_;
}
}
else
{
return v___x_162_;
}
}
else
{
return v___x_160_;
}
}
else
{
return v___x_158_;
}
}
else
{
return v___x_156_;
}
}
else
{
return v___x_154_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_isEscapeChar___boxed(lean_object* v_c_167_){
_start:
{
uint32_t v_c_boxed_168_; uint8_t v_res_169_; lean_object* v_r_170_; 
v_c_boxed_168_ = lean_unbox_uint32(v_c_167_);
lean_dec(v_c_167_);
v_res_169_ = l_Lake_Toml_isEscapeChar(v_c_boxed_168_);
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__0(lean_object* v___y_171_, lean_object* v___y_172_){
_start:
{
lean_object* v_s_173_; lean_object* v_errorMsg_174_; lean_object* v___x_175_; uint8_t v___x_176_; 
lean_inc_ref(v___y_171_);
v_s_173_ = l_Lake_Toml_wsFn(v___y_171_, v___y_172_);
v_errorMsg_174_ = lean_ctor_get(v_s_173_, 4);
v___x_175_ = lean_box(0);
v___x_176_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_174_, v___x_175_);
if (v___x_176_ == 0)
{
lean_dec_ref(v___y_171_);
return v_s_173_;
}
else
{
lean_object* v_s_177_; lean_object* v_errorMsg_178_; uint8_t v___x_179_; 
lean_inc_ref(v___y_171_);
v_s_177_ = l_Lake_Toml_newlineFn(v___y_171_, v_s_173_);
v_errorMsg_178_ = lean_ctor_get(v_s_177_, 4);
v___x_179_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_178_, v___x_175_);
if (v___x_179_ == 0)
{
lean_dec_ref(v___y_171_);
return v_s_177_;
}
else
{
lean_object* v___x_180_; 
v___x_180_ = l_Lake_Toml_wsNewlineFn(v___y_171_, v_s_177_);
return v___x_180_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___lam__1(lean_object* v___y_181_, lean_object* v___y_182_){
_start:
{
lean_object* v_s_183_; lean_object* v_errorMsg_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
lean_inc_ref(v___y_181_);
v_s_183_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v___y_181_, v___y_182_);
v_errorMsg_184_ = lean_ctor_get(v_s_183_, 4);
v___x_185_ = lean_box(0);
v___x_186_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_dec_ref(v___y_181_);
return v_s_183_;
}
else
{
lean_object* v___x_187_; 
v___x_187_ = l_Lake_Toml_wsNewlineFn(v___y_181_, v_s_183_);
return v___x_187_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(lean_object* v_c_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
lean_object* v_zero_191_; uint8_t v_isZero_192_; 
v_zero_191_ = lean_unsigned_to_nat(0u);
v_isZero_192_ = lean_nat_dec_eq(v_x_189_, v_zero_191_);
if (v_isZero_192_ == 1)
{
lean_dec(v_x_189_);
lean_dec_ref(v_c_188_);
return v_x_190_;
}
else
{
lean_object* v_s_193_; lean_object* v_errorMsg_194_; lean_object* v___x_195_; uint8_t v___x_196_; 
lean_inc_ref(v_c_188_);
v_s_193_ = l_Lean_Parser_hexDigitFn(v_c_188_, v_x_190_);
v_errorMsg_194_ = lean_ctor_get(v_s_193_, 4);
v___x_195_ = lean_box(0);
v___x_196_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_194_, v___x_195_);
if (v___x_196_ == 0)
{
lean_dec(v_x_189_);
lean_dec_ref(v_c_188_);
return v_s_193_;
}
else
{
lean_object* v_one_197_; lean_object* v_n_198_; 
v_one_197_ = lean_unsigned_to_nat(1u);
v_n_198_ = lean_nat_sub(v_x_189_, v_one_197_);
lean_dec(v_x_189_);
v_x_189_ = v_n_198_;
v_x_190_ = v_s_193_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(uint8_t v_stringGap_209_, lean_object* v_c_210_, lean_object* v_s_211_){
_start:
{
lean_object* v_toInputContext_212_; lean_object* v_pos_213_; lean_object* v___x_214_; lean_object* v_expected_215_; uint8_t v___x_216_; 
v_toInputContext_212_ = lean_ctor_get(v_c_210_, 0);
v_pos_213_ = lean_ctor_get(v_s_211_, 2);
v___x_214_ = lean_box(0);
v_expected_215_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__1));
lean_inc(v_pos_213_);
lean_inc_ref(v_toInputContext_212_);
v___x_216_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_212_, v_pos_213_);
if (v___x_216_ == 0)
{
lean_object* v_inputString_217_; uint32_t v_curr_218_; uint8_t v___x_219_; 
v_inputString_217_ = lean_ctor_get(v_toInputContext_212_, 0);
v_curr_218_ = lean_string_utf8_get_fast(v_inputString_217_, v_pos_213_);
v___x_219_ = l_Lake_Toml_isEscapeChar(v_curr_218_);
if (v___x_219_ == 0)
{
uint32_t v___x_220_; uint8_t v___x_221_; 
v___x_220_ = 117;
v___x_221_ = lean_uint32_dec_eq(v_curr_218_, v___x_220_);
if (v___x_221_ == 0)
{
uint32_t v___x_222_; uint8_t v___x_223_; 
v___x_222_ = 85;
v___x_223_ = lean_uint32_dec_eq(v_curr_218_, v___x_222_);
if (v___x_223_ == 0)
{
lean_object* v___f_224_; uint8_t v___x_225_; lean_object* v_p_227_; uint32_t v___x_232_; uint8_t v___x_233_; 
v___f_224_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__2));
v___x_225_ = 1;
v___x_232_ = 32;
v___x_233_ = lean_uint32_dec_eq(v_curr_218_, v___x_232_);
if (v___x_233_ == 0)
{
uint32_t v___x_234_; uint8_t v___x_235_; 
v___x_234_ = 9;
v___x_235_ = lean_uint32_dec_eq(v_curr_218_, v___x_234_);
if (v___x_235_ == 0)
{
uint32_t v___x_236_; uint8_t v___x_237_; 
v___x_236_ = 10;
v___x_237_ = lean_uint32_dec_eq(v_curr_218_, v___x_236_);
if (v___x_237_ == 0)
{
uint32_t v___x_238_; uint8_t v___x_239_; 
v___x_238_ = 13;
v___x_239_ = lean_uint32_dec_eq(v_curr_218_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_240_; lean_object* v___x_241_; 
lean_dec_ref(v_c_210_);
v___x_240_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__4));
v___x_241_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_211_, v___x_240_, v___x_214_, v___x_225_);
return v___x_241_;
}
else
{
lean_object* v___f_242_; 
v___f_242_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__5));
v_p_227_ = v___f_242_;
goto v___jp_226_;
}
}
else
{
lean_object* v___x_243_; 
v___x_243_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__6));
v_p_227_ = v___x_243_;
goto v___jp_226_;
}
}
else
{
v_p_227_ = v___f_224_;
goto v___jp_226_;
}
}
else
{
v_p_227_ = v___f_224_;
goto v___jp_226_;
}
v___jp_226_:
{
if (v_stringGap_209_ == 0)
{
lean_object* v___x_228_; lean_object* v___x_229_; 
lean_dec_ref(v_c_210_);
v___x_228_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___closed__3));
v___x_229_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_211_, v___x_228_, v_expected_215_, v___x_225_);
return v___x_229_;
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_inc(v_pos_213_);
v___x_230_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_211_, v_c_210_, v_pos_213_);
lean_dec(v_pos_213_);
lean_inc_ref(v_p_227_);
v___x_231_ = lean_apply_2(v_p_227_, v_c_210_, v___x_230_);
return v___x_231_;
}
}
}
else
{
lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
lean_inc(v_pos_213_);
v___x_244_ = lean_unsigned_to_nat(8u);
v___x_245_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_211_, v_c_210_, v_pos_213_);
lean_dec(v_pos_213_);
v___x_246_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(v_c_210_, v___x_244_, v___x_245_);
return v___x_246_;
}
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; 
lean_inc(v_pos_213_);
v___x_247_ = lean_unsigned_to_nat(4u);
v___x_248_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_211_, v_c_210_, v_pos_213_);
lean_dec(v_pos_213_);
v___x_249_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00__private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn_spec__0(v_c_210_, v___x_247_, v___x_248_);
return v___x_249_;
}
}
else
{
lean_object* v___x_250_; 
lean_inc(v_pos_213_);
v___x_250_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_211_, v_c_210_, v_pos_213_);
lean_dec(v_pos_213_);
lean_dec_ref(v_c_210_);
return v___x_250_;
}
}
else
{
lean_object* v___x_251_; 
lean_dec_ref(v_c_210_);
v___x_251_ = l_Lean_Parser_ParserState_mkEOIError(v_s_211_, v_expected_215_);
return v___x_251_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn___boxed(lean_object* v_stringGap_252_, lean_object* v_c_253_, lean_object* v_s_254_){
_start:
{
uint8_t v_stringGap_boxed_255_; lean_object* v_res_256_; 
v_stringGap_boxed_255_ = lean_unbox(v_stringGap_252_);
v_res_256_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(v_stringGap_boxed_255_, v_c_253_, v_s_254_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn(lean_object* v_startPos_258_, lean_object* v_c_259_, lean_object* v_s_260_){
_start:
{
lean_object* v_toInputContext_261_; lean_object* v_pos_262_; uint8_t v___x_263_; 
v_toInputContext_261_ = lean_ctor_get(v_c_259_, 0);
v_pos_262_ = lean_ctor_get(v_s_260_, 2);
lean_inc(v_pos_262_);
lean_inc_ref(v_toInputContext_261_);
v___x_263_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_261_, v_pos_262_);
if (v___x_263_ == 0)
{
lean_object* v_inputString_264_; uint32_t v_curr_265_; uint32_t v___x_266_; uint8_t v___x_267_; 
v_inputString_264_ = lean_ctor_get(v_toInputContext_261_, 0);
v_curr_265_ = lean_string_utf8_get_fast(v_inputString_264_, v_pos_262_);
v___x_266_ = 34;
v___x_267_ = lean_uint32_dec_eq(v_curr_265_, v___x_266_);
if (v___x_267_ == 0)
{
uint32_t v___x_268_; uint8_t v___x_269_; 
v___x_268_ = 92;
v___x_269_ = lean_uint32_dec_eq(v_curr_265_, v___x_268_);
if (v___x_269_ == 0)
{
uint8_t v___x_270_; 
v___x_270_ = l_Lake_Toml_isControlChar(v_curr_265_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; 
lean_inc(v_pos_262_);
v___x_271_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_260_, v_c_259_, v_pos_262_);
lean_dec(v_pos_262_);
v_s_260_ = v___x_271_;
goto _start;
}
else
{
lean_object* v___x_273_; lean_object* v___x_274_; 
lean_dec_ref(v_c_259_);
lean_dec(v_startPos_258_);
v___x_273_ = lean_box(0);
v___x_274_ = l_Lake_Toml_mkUnexpectedCharError(v_s_260_, v_curr_265_, v___x_273_, v___x_270_);
return v___x_274_;
}
}
else
{
lean_object* v___x_275_; lean_object* v_s_276_; lean_object* v_errorMsg_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
lean_inc(v_pos_262_);
v___x_275_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_260_, v_c_259_, v_pos_262_);
lean_dec(v_pos_262_);
lean_inc_ref(v_c_259_);
v_s_276_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(v___x_267_, v_c_259_, v___x_275_);
v_errorMsg_277_ = lean_ctor_get(v_s_276_, 4);
v___x_278_ = lean_box(0);
v___x_279_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_277_, v___x_278_);
if (v___x_279_ == 0)
{
lean_dec_ref(v_c_259_);
lean_dec(v_startPos_258_);
return v_s_276_;
}
else
{
v_s_260_ = v_s_276_;
goto _start;
}
}
}
else
{
lean_object* v___x_281_; 
lean_inc(v_pos_262_);
lean_dec(v_startPos_258_);
v___x_281_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_260_, v_c_259_, v_pos_262_);
lean_dec(v_pos_262_);
lean_dec_ref(v_c_259_);
return v___x_281_;
}
}
else
{
lean_object* v___x_282_; lean_object* v___x_283_; 
lean_dec_ref(v_c_259_);
v___x_282_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn___closed__0));
v___x_283_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_260_, v___x_282_, v_startPos_258_);
return v___x_283_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicStringFn(lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_pos_290_; uint32_t v___x_291_; lean_object* v___x_292_; lean_object* v_s_293_; lean_object* v_errorMsg_294_; lean_object* v___x_295_; uint8_t v___x_296_; 
v_pos_290_ = lean_ctor_get(v_a_289_, 2);
lean_inc(v_pos_290_);
v___x_291_ = 34;
v___x_292_ = ((lean_object*)(l_Lake_Toml_basicStringFn___closed__1));
lean_inc_ref(v_a_288_);
v_s_293_ = l_Lake_Toml_chFn(v___x_291_, v___x_292_, v_a_288_, v_a_289_);
v_errorMsg_294_ = lean_ctor_get(v_s_293_, 4);
v___x_295_ = lean_box(0);
v___x_296_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_294_, v___x_295_);
if (v___x_296_ == 0)
{
lean_dec(v_pos_290_);
lean_dec_ref(v_a_288_);
return v_s_293_;
}
else
{
lean_object* v___x_297_; 
v___x_297_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_basicStringAuxFn(v_pos_290_, v_a_288_, v_s_293_);
return v___x_297_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn(lean_object* v_startPos_299_, lean_object* v_c_300_, lean_object* v_s_301_){
_start:
{
lean_object* v_toInputContext_302_; lean_object* v_pos_303_; uint8_t v___x_304_; 
v_toInputContext_302_ = lean_ctor_get(v_c_300_, 0);
v_pos_303_ = lean_ctor_get(v_s_301_, 2);
lean_inc(v_pos_303_);
lean_inc_ref(v_toInputContext_302_);
v___x_304_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_302_, v_pos_303_);
if (v___x_304_ == 0)
{
lean_object* v_inputString_305_; uint32_t v_curr_306_; uint32_t v___x_307_; uint8_t v___x_308_; 
v_inputString_305_ = lean_ctor_get(v_toInputContext_302_, 0);
v_curr_306_ = lean_string_utf8_get_fast(v_inputString_305_, v_pos_303_);
v___x_307_ = 39;
v___x_308_ = lean_uint32_dec_eq(v_curr_306_, v___x_307_);
if (v___x_308_ == 0)
{
uint8_t v___x_309_; 
v___x_309_ = l_Lake_Toml_isControlChar(v_curr_306_);
if (v___x_309_ == 0)
{
lean_object* v___x_310_; 
lean_inc(v_pos_303_);
v___x_310_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_301_, v_c_300_, v_pos_303_);
lean_dec(v_pos_303_);
v_s_301_ = v___x_310_;
goto _start;
}
else
{
lean_object* v___x_312_; lean_object* v___x_313_; 
lean_dec_ref(v_c_300_);
lean_dec(v_startPos_299_);
v___x_312_ = lean_box(0);
v___x_313_ = l_Lake_Toml_mkUnexpectedCharError(v_s_301_, v_curr_306_, v___x_312_, v___x_309_);
return v___x_313_;
}
}
else
{
lean_object* v___x_314_; 
lean_inc(v_pos_303_);
lean_dec(v_startPos_299_);
v___x_314_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_301_, v_c_300_, v_pos_303_);
lean_dec(v_pos_303_);
lean_dec_ref(v_c_300_);
return v___x_314_;
}
}
else
{
lean_object* v___x_315_; lean_object* v___x_316_; 
lean_dec_ref(v_c_300_);
v___x_315_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn___closed__0));
v___x_316_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_301_, v___x_315_, v_startPos_299_);
return v___x_316_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalStringFn(lean_object* v_a_321_, lean_object* v_a_322_){
_start:
{
lean_object* v_pos_323_; uint32_t v___x_324_; lean_object* v___x_325_; lean_object* v_s_326_; lean_object* v_errorMsg_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_pos_323_ = lean_ctor_get(v_a_322_, 2);
lean_inc(v_pos_323_);
v___x_324_ = 39;
v___x_325_ = ((lean_object*)(l_Lake_Toml_literalStringFn___closed__1));
lean_inc_ref(v_a_321_);
v_s_326_ = l_Lake_Toml_chFn(v___x_324_, v___x_325_, v_a_321_, v_a_322_);
v_errorMsg_327_ = lean_ctor_get(v_s_326_, 4);
v___x_328_ = lean_box(0);
v___x_329_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_327_, v___x_328_);
if (v___x_329_ == 0)
{
lean_dec(v_pos_323_);
lean_dec_ref(v_a_321_);
return v_s_326_;
}
else
{
lean_object* v___x_330_; 
v___x_330_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_literalStringAuxFn(v_pos_323_, v_a_321_, v_s_326_);
return v___x_330_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn(lean_object* v_startPos_333_, lean_object* v_quoteDepth_334_, lean_object* v_c_335_, lean_object* v_s_336_){
_start:
{
lean_object* v_toInputContext_337_; lean_object* v_pos_338_; uint8_t v___x_339_; 
v_toInputContext_337_ = lean_ctor_get(v_c_335_, 0);
v_pos_338_ = lean_ctor_get(v_s_336_, 2);
lean_inc(v_pos_338_);
lean_inc_ref(v_toInputContext_337_);
v___x_339_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_337_, v_pos_338_);
if (v___x_339_ == 0)
{
lean_object* v_inputString_340_; uint8_t v___x_341_; uint32_t v_curr_342_; uint32_t v___x_343_; uint8_t v___x_344_; 
v_inputString_340_ = lean_ctor_get(v_toInputContext_337_, 0);
v___x_341_ = 1;
v_curr_342_ = lean_string_utf8_get_fast(v_inputString_340_, v_pos_338_);
v___x_343_ = 39;
v___x_344_ = lean_uint32_dec_eq(v_curr_342_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; uint8_t v___x_346_; 
v___x_345_ = lean_unsigned_to_nat(3u);
v___x_346_ = lean_nat_dec_le(v___x_345_, v_quoteDepth_334_);
lean_dec(v_quoteDepth_334_);
if (v___x_346_ == 0)
{
uint32_t v___x_347_; uint8_t v___x_348_; 
v___x_347_ = 10;
v___x_348_ = lean_uint32_dec_eq(v_curr_342_, v___x_347_);
if (v___x_348_ == 0)
{
uint32_t v___x_349_; uint8_t v___x_350_; 
v___x_349_ = 13;
v___x_350_ = lean_uint32_dec_eq(v_curr_342_, v___x_349_);
if (v___x_350_ == 0)
{
uint8_t v___x_351_; 
v___x_351_ = l_Lake_Toml_isControlChar(v_curr_342_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; lean_object* v___x_353_; 
lean_inc(v_pos_338_);
v___x_352_ = lean_unsigned_to_nat(0u);
v___x_353_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_336_, v_c_335_, v_pos_338_);
lean_dec(v_pos_338_);
v_quoteDepth_334_ = v___x_352_;
v_s_336_ = v___x_353_;
goto _start;
}
else
{
lean_object* v___x_355_; lean_object* v___x_356_; 
lean_dec_ref(v_c_335_);
lean_dec(v_startPos_333_);
v___x_355_ = lean_box(0);
v___x_356_ = l_Lake_Toml_mkUnexpectedCharError(v_s_336_, v_curr_342_, v___x_355_, v___x_341_);
return v___x_356_;
}
}
else
{
lean_object* v___x_357_; lean_object* v_s_358_; lean_object* v_errorMsg_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
lean_inc(v_pos_338_);
v___x_357_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_336_, v_c_335_, v_pos_338_);
lean_dec(v_pos_338_);
lean_inc_ref(v_c_335_);
v_s_358_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_335_, v___x_357_);
v_errorMsg_359_ = lean_ctor_get(v_s_358_, 4);
v___x_360_ = lean_box(0);
v___x_361_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_359_, v___x_360_);
if (v___x_361_ == 0)
{
lean_dec_ref(v_c_335_);
lean_dec(v_startPos_333_);
return v_s_358_;
}
else
{
lean_object* v___x_362_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v_quoteDepth_334_ = v___x_362_;
v_s_336_ = v_s_358_;
goto _start;
}
}
}
else
{
lean_object* v___x_364_; lean_object* v___x_365_; 
lean_inc(v_pos_338_);
v___x_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_336_, v_c_335_, v_pos_338_);
lean_dec(v_pos_338_);
v_quoteDepth_334_ = v___x_364_;
v_s_336_ = v___x_365_;
goto _start;
}
}
else
{
lean_dec_ref(v_c_335_);
lean_dec(v_startPos_333_);
return v_s_336_;
}
}
else
{
lean_object* v_s_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
lean_inc(v_pos_338_);
v_s_367_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_336_, v_c_335_, v_pos_338_);
lean_dec(v_pos_338_);
v___x_368_ = lean_unsigned_to_nat(5u);
v___x_369_ = lean_nat_dec_le(v___x_368_, v_quoteDepth_334_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_370_ = lean_unsigned_to_nat(1u);
v___x_371_ = lean_nat_add(v_quoteDepth_334_, v___x_370_);
lean_dec(v_quoteDepth_334_);
v_quoteDepth_334_ = v___x_371_;
v_s_336_ = v_s_367_;
goto _start;
}
else
{
lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
lean_dec_ref(v_c_335_);
lean_dec(v_quoteDepth_334_);
lean_dec(v_startPos_333_);
v___x_373_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0));
v___x_374_ = lean_box(0);
v___x_375_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_367_, v___x_373_, v___x_374_, v___x_341_);
return v___x_375_;
}
}
}
else
{
lean_object* v___x_376_; uint8_t v___x_377_; 
lean_dec_ref(v_c_335_);
v___x_376_ = lean_unsigned_to_nat(3u);
v___x_377_ = lean_nat_dec_le(v___x_376_, v_quoteDepth_334_);
lean_dec(v_quoteDepth_334_);
if (v___x_377_ == 0)
{
lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_378_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__1));
v___x_379_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_336_, v___x_378_, v_startPos_333_);
return v___x_379_;
}
else
{
lean_dec(v_startPos_333_);
return v_s_336_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0(lean_object* v_c_384_, lean_object* v_x_385_, lean_object* v_x_386_){
_start:
{
lean_object* v_zero_387_; uint8_t v_isZero_388_; 
v_zero_387_ = lean_unsigned_to_nat(0u);
v_isZero_388_ = lean_nat_dec_eq(v_x_385_, v_zero_387_);
if (v_isZero_388_ == 1)
{
lean_dec(v_x_385_);
lean_dec_ref(v_c_384_);
return v_x_386_;
}
else
{
uint32_t v___x_389_; lean_object* v___x_390_; lean_object* v_s_391_; lean_object* v_errorMsg_392_; lean_object* v___x_393_; uint8_t v___x_394_; 
v___x_389_ = 39;
v___x_390_ = ((lean_object*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0___closed__1));
lean_inc_ref(v_c_384_);
v_s_391_ = l_Lake_Toml_chFn(v___x_389_, v___x_390_, v_c_384_, v_x_386_);
v_errorMsg_392_ = lean_ctor_get(v_s_391_, 4);
v___x_393_ = lean_box(0);
v___x_394_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_392_, v___x_393_);
if (v___x_394_ == 0)
{
lean_dec(v_x_385_);
lean_dec_ref(v_c_384_);
return v_s_391_;
}
else
{
lean_object* v_one_395_; lean_object* v_n_396_; 
v_one_395_ = lean_unsigned_to_nat(1u);
v_n_396_ = lean_nat_sub(v_x_385_, v_one_395_);
lean_dec(v_x_385_);
v_x_385_ = v_n_396_;
v_x_386_ = v_s_391_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn___lam__0(lean_object* v___x_398_, lean_object* v___y_399_, lean_object* v___y_400_){
_start:
{
lean_object* v___x_401_; 
v___x_401_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlLiteralStringFn_spec__0(v___y_399_, v___x_398_, v___y_400_);
return v___x_401_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlLiteralStringFn(lean_object* v_a_404_, lean_object* v_a_405_){
_start:
{
lean_object* v_pos_406_; lean_object* v___f_407_; lean_object* v_s_408_; lean_object* v_errorMsg_409_; lean_object* v___x_410_; uint8_t v___x_411_; 
v_pos_406_ = lean_ctor_get(v_a_405_, 2);
lean_inc(v_pos_406_);
v___f_407_ = ((lean_object*)(l_Lake_Toml_mlLiteralStringFn___closed__0));
lean_inc_ref(v_a_404_);
v_s_408_ = l_Lean_Parser_atomicFn(v___f_407_, v_a_404_, v_a_405_);
v_errorMsg_409_ = lean_ctor_get(v_s_408_, 4);
v___x_410_ = lean_box(0);
v___x_411_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_409_, v___x_410_);
if (v___x_411_ == 0)
{
lean_dec(v_pos_406_);
lean_dec_ref(v_a_404_);
return v_s_408_;
}
else
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = lean_unsigned_to_nat(0u);
v___x_413_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn(v_pos_406_, v___x_412_, v_a_404_, v_s_408_);
return v___x_413_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn(lean_object* v_startPos_415_, lean_object* v_quoteDepth_416_, lean_object* v_c_417_, lean_object* v_s_418_){
_start:
{
lean_object* v_toInputContext_419_; lean_object* v_pos_420_; uint8_t v___x_421_; 
v_toInputContext_419_ = lean_ctor_get(v_c_417_, 0);
v_pos_420_ = lean_ctor_get(v_s_418_, 2);
lean_inc(v_pos_420_);
lean_inc_ref(v_toInputContext_419_);
v___x_421_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_419_, v_pos_420_);
if (v___x_421_ == 0)
{
lean_object* v_inputString_422_; uint8_t v___x_423_; uint32_t v_curr_424_; uint32_t v___x_425_; uint8_t v___x_426_; 
v_inputString_422_ = lean_ctor_get(v_toInputContext_419_, 0);
v___x_423_ = 1;
v_curr_424_ = lean_string_utf8_get_fast(v_inputString_422_, v_pos_420_);
v___x_425_ = 34;
v___x_426_ = lean_uint32_dec_eq(v_curr_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_427_ = lean_unsigned_to_nat(3u);
v___x_428_ = lean_nat_dec_le(v___x_427_, v_quoteDepth_416_);
lean_dec(v_quoteDepth_416_);
if (v___x_428_ == 0)
{
uint32_t v___x_429_; uint8_t v___x_430_; 
v___x_429_ = 10;
v___x_430_ = lean_uint32_dec_eq(v_curr_424_, v___x_429_);
if (v___x_430_ == 0)
{
uint32_t v___x_431_; uint8_t v___x_432_; 
v___x_431_ = 13;
v___x_432_ = lean_uint32_dec_eq(v_curr_424_, v___x_431_);
if (v___x_432_ == 0)
{
uint32_t v___x_433_; uint8_t v___x_434_; 
v___x_433_ = 92;
v___x_434_ = lean_uint32_dec_eq(v_curr_424_, v___x_433_);
if (v___x_434_ == 0)
{
uint8_t v___x_435_; 
v___x_435_ = l_Lake_Toml_isControlChar(v_curr_424_);
if (v___x_435_ == 0)
{
lean_object* v___x_436_; lean_object* v___x_437_; 
lean_inc(v_pos_420_);
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_418_, v_c_417_, v_pos_420_);
lean_dec(v_pos_420_);
v_quoteDepth_416_ = v___x_436_;
v_s_418_ = v___x_437_;
goto _start;
}
else
{
lean_object* v___x_439_; lean_object* v___x_440_; 
lean_dec_ref(v_c_417_);
lean_dec(v_startPos_415_);
v___x_439_ = lean_box(0);
v___x_440_ = l_Lake_Toml_mkUnexpectedCharError(v_s_418_, v_curr_424_, v___x_439_, v___x_423_);
return v___x_440_;
}
}
else
{
lean_object* v___x_441_; lean_object* v_s_442_; lean_object* v_errorMsg_443_; lean_object* v___x_444_; uint8_t v___x_445_; 
lean_inc(v_pos_420_);
v___x_441_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_418_, v_c_417_, v_pos_420_);
lean_dec(v_pos_420_);
lean_inc_ref(v_c_417_);
v_s_442_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_escapeSeqFn(v___x_423_, v_c_417_, v___x_441_);
v_errorMsg_443_ = lean_ctor_get(v_s_442_, 4);
v___x_444_ = lean_box(0);
v___x_445_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_443_, v___x_444_);
if (v___x_445_ == 0)
{
lean_dec_ref(v_c_417_);
lean_dec(v_startPos_415_);
return v_s_442_;
}
else
{
lean_object* v___x_446_; 
v___x_446_ = lean_unsigned_to_nat(0u);
v_quoteDepth_416_ = v___x_446_;
v_s_418_ = v_s_442_;
goto _start;
}
}
}
else
{
lean_object* v___x_448_; lean_object* v_s_449_; lean_object* v_errorMsg_450_; lean_object* v___x_451_; uint8_t v___x_452_; 
lean_inc(v_pos_420_);
v___x_448_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_418_, v_c_417_, v_pos_420_);
lean_dec(v_pos_420_);
lean_inc_ref(v_c_417_);
v_s_449_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_crlfAuxFn(v_c_417_, v___x_448_);
v_errorMsg_450_ = lean_ctor_get(v_s_449_, 4);
v___x_451_ = lean_box(0);
v___x_452_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_450_, v___x_451_);
if (v___x_452_ == 0)
{
lean_dec_ref(v_c_417_);
lean_dec(v_startPos_415_);
return v_s_449_;
}
else
{
lean_object* v___x_453_; 
v___x_453_ = lean_unsigned_to_nat(0u);
v_quoteDepth_416_ = v___x_453_;
v_s_418_ = v_s_449_;
goto _start;
}
}
}
else
{
lean_object* v___x_455_; lean_object* v___x_456_; 
lean_inc(v_pos_420_);
v___x_455_ = lean_unsigned_to_nat(0u);
v___x_456_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_418_, v_c_417_, v_pos_420_);
lean_dec(v_pos_420_);
v_quoteDepth_416_ = v___x_455_;
v_s_418_ = v___x_456_;
goto _start;
}
}
else
{
lean_dec_ref(v_c_417_);
lean_dec(v_startPos_415_);
return v_s_418_;
}
}
else
{
lean_object* v_s_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
lean_inc(v_pos_420_);
v_s_458_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_418_, v_c_417_, v_pos_420_);
lean_dec(v_pos_420_);
v___x_459_ = lean_unsigned_to_nat(5u);
v___x_460_ = lean_nat_dec_le(v___x_459_, v_quoteDepth_416_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_461_ = lean_unsigned_to_nat(1u);
v___x_462_ = lean_nat_add(v_quoteDepth_416_, v___x_461_);
lean_dec(v_quoteDepth_416_);
v_quoteDepth_416_ = v___x_462_;
v_s_418_ = v_s_458_;
goto _start;
}
else
{
lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec_ref(v_c_417_);
lean_dec(v_quoteDepth_416_);
lean_dec(v_startPos_415_);
v___x_464_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlLiteralStringAuxFn___closed__0));
v___x_465_ = lean_box(0);
v___x_466_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_458_, v___x_464_, v___x_465_, v___x_423_);
return v___x_466_;
}
}
}
else
{
lean_object* v___x_467_; uint8_t v___x_468_; 
lean_dec_ref(v_c_417_);
v___x_467_ = lean_unsigned_to_nat(3u);
v___x_468_ = lean_nat_dec_le(v___x_467_, v_quoteDepth_416_);
lean_dec(v_quoteDepth_416_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_469_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn___closed__0));
v___x_470_ = l_Lean_Parser_ParserState_mkUnexpectedErrorAt(v_s_418_, v___x_469_, v_startPos_415_);
return v___x_470_;
}
else
{
lean_dec(v_startPos_415_);
return v_s_418_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0(lean_object* v_c_475_, lean_object* v_x_476_, lean_object* v_x_477_){
_start:
{
lean_object* v_zero_478_; uint8_t v_isZero_479_; 
v_zero_478_ = lean_unsigned_to_nat(0u);
v_isZero_479_ = lean_nat_dec_eq(v_x_476_, v_zero_478_);
if (v_isZero_479_ == 1)
{
lean_dec(v_x_476_);
lean_dec_ref(v_c_475_);
return v_x_477_;
}
else
{
uint32_t v___x_480_; lean_object* v___x_481_; lean_object* v_s_482_; lean_object* v_errorMsg_483_; lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_480_ = 34;
v___x_481_ = ((lean_object*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0___closed__1));
lean_inc_ref(v_c_475_);
v_s_482_ = l_Lake_Toml_chFn(v___x_480_, v___x_481_, v_c_475_, v_x_477_);
v_errorMsg_483_ = lean_ctor_get(v_s_482_, 4);
v___x_484_ = lean_box(0);
v___x_485_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_483_, v___x_484_);
if (v___x_485_ == 0)
{
lean_dec(v_x_476_);
lean_dec_ref(v_c_475_);
return v_s_482_;
}
else
{
lean_object* v_one_486_; lean_object* v_n_487_; 
v_one_486_ = lean_unsigned_to_nat(1u);
v_n_487_ = lean_nat_sub(v_x_476_, v_one_486_);
lean_dec(v_x_476_);
v_x_476_ = v_n_487_;
v_x_477_ = v_s_482_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn___lam__0(lean_object* v___x_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_mlBasicStringFn_spec__0(v___y_490_, v___x_489_, v___y_491_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_mlBasicStringFn(lean_object* v_a_495_, lean_object* v_a_496_){
_start:
{
lean_object* v_pos_497_; lean_object* v___f_498_; lean_object* v_s_499_; lean_object* v_errorMsg_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
v_pos_497_ = lean_ctor_get(v_a_496_, 2);
lean_inc(v_pos_497_);
v___f_498_ = ((lean_object*)(l_Lake_Toml_mlBasicStringFn___closed__0));
lean_inc_ref(v_a_495_);
v_s_499_ = l_Lean_Parser_atomicFn(v___f_498_, v_a_495_, v_a_496_);
v_errorMsg_500_ = lean_ctor_get(v_s_499_, 4);
v___x_501_ = lean_box(0);
v___x_502_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_500_, v___x_501_);
if (v___x_502_ == 0)
{
lean_dec(v_pos_497_);
lean_dec_ref(v_a_495_);
return v_s_499_;
}
else
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = lean_unsigned_to_nat(0u);
v___x_504_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_mlBasicStringAuxFn(v_pos_497_, v___x_503_, v_a_495_, v_s_499_);
return v___x_504_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(lean_object* v_a_517_, lean_object* v_a_518_){
_start:
{
lean_object* v___x_519_; lean_object* v_s_520_; lean_object* v_errorMsg_521_; lean_object* v___x_522_; uint8_t v___x_523_; 
v___x_519_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__1));
lean_inc_ref(v_a_517_);
v_s_520_ = l_Lake_Toml_digitPairFn(v___x_519_, v_a_517_, v_a_518_);
v_errorMsg_521_ = lean_ctor_get(v_s_520_, 4);
v___x_522_ = lean_box(0);
v___x_523_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_521_, v___x_522_);
if (v___x_523_ == 0)
{
lean_dec_ref(v_a_517_);
return v_s_520_;
}
else
{
uint32_t v___x_524_; lean_object* v___x_525_; lean_object* v_s_526_; lean_object* v_errorMsg_527_; uint8_t v___x_528_; 
v___x_524_ = 58;
v___x_525_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
lean_inc_ref(v_a_517_);
v_s_526_ = l_Lake_Toml_chFn(v___x_524_, v___x_525_, v_a_517_, v_s_520_);
v_errorMsg_527_ = lean_ctor_get(v_s_526_, 4);
v___x_528_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_527_, v___x_522_);
if (v___x_528_ == 0)
{
lean_dec_ref(v_a_517_);
return v_s_526_;
}
else
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5));
v___x_530_ = l_Lake_Toml_digitPairFn(v___x_529_, v_a_517_, v_s_526_);
return v___x_530_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn(uint8_t v_allowOffset_532_, uint32_t v_curr_533_, lean_object* v_nextPos_534_, lean_object* v_c_535_, lean_object* v_s_536_){
_start:
{
uint32_t v___x_543_; uint8_t v___x_544_; 
v___x_543_ = 90;
v___x_544_ = lean_uint32_dec_eq(v_curr_533_, v___x_543_);
if (v___x_544_ == 0)
{
uint32_t v___x_545_; uint8_t v___x_546_; 
v___x_545_ = 122;
v___x_546_ = lean_uint32_dec_eq(v_curr_533_, v___x_545_);
if (v___x_546_ == 0)
{
uint8_t v___x_547_; uint32_t v___x_554_; uint8_t v___x_555_; 
v___x_547_ = 1;
v___x_554_ = 43;
v___x_555_ = lean_uint32_dec_eq(v_curr_533_, v___x_554_);
if (v___x_555_ == 0)
{
uint32_t v___x_556_; uint8_t v___x_557_; 
v___x_556_ = 45;
v___x_557_ = lean_uint32_dec_eq(v_curr_533_, v___x_556_);
if (v___x_557_ == 0)
{
lean_dec_ref(v_c_535_);
lean_dec(v_nextPos_534_);
return v_s_536_;
}
else
{
goto v___jp_548_;
}
}
else
{
goto v___jp_548_;
}
v___jp_548_:
{
if (v_allowOffset_532_ == 0)
{
lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
lean_dec_ref(v_c_535_);
lean_dec(v_nextPos_534_);
v___x_549_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_550_ = lean_box(0);
v___x_551_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_536_, v___x_549_, v___x_550_, v___x_547_);
return v___x_551_;
}
else
{
lean_object* v___x_552_; lean_object* v___x_553_; 
v___x_552_ = l_Lean_Parser_ParserState_setPos(v_s_536_, v_nextPos_534_);
v___x_553_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(v_c_535_, v___x_552_);
return v___x_553_;
}
}
}
else
{
lean_dec_ref(v_c_535_);
goto v___jp_537_;
}
}
else
{
lean_dec_ref(v_c_535_);
goto v___jp_537_;
}
v___jp_537_:
{
if (v_allowOffset_532_ == 0)
{
uint8_t v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
lean_dec(v_nextPos_534_);
v___x_538_ = 1;
v___x_539_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_540_ = lean_box(0);
v___x_541_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_536_, v___x_539_, v___x_540_, v___x_538_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_Parser_ParserState_setPos(v_s_536_, v_nextPos_534_);
return v___x_542_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___boxed(lean_object* v_allowOffset_558_, lean_object* v_curr_559_, lean_object* v_nextPos_560_, lean_object* v_c_561_, lean_object* v_s_562_){
_start:
{
uint8_t v_allowOffset_boxed_563_; uint32_t v_curr_boxed_564_; lean_object* v_res_565_; 
v_allowOffset_boxed_563_ = lean_unbox(v_allowOffset_558_);
v_curr_boxed_564_ = lean_unbox_uint32(v_curr_559_);
lean_dec(v_curr_559_);
v_res_565_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn(v_allowOffset_boxed_563_, v_curr_boxed_564_, v_nextPos_560_, v_c_561_, v_s_562_);
return v_res_565_;
}
}
LEAN_EXPORT uint8_t l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0(uint32_t v_x_566_){
_start:
{
uint32_t v___x_567_; uint8_t v___x_568_; 
v___x_567_ = 48;
v___x_568_ = lean_uint32_dec_le(v___x_567_, v_x_566_);
if (v___x_568_ == 0)
{
return v___x_568_;
}
else
{
uint32_t v___x_569_; uint8_t v___x_570_; 
v___x_569_ = 57;
v___x_570_ = lean_uint32_dec_le(v_x_566_, v___x_569_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0___boxed(lean_object* v_x_571_){
_start:
{
uint32_t v_x_265__boxed_572_; uint8_t v_res_573_; lean_object* v_r_574_; 
v_x_265__boxed_572_ = lean_unbox_uint32(v_x_571_);
lean_dec(v_x_571_);
v_res_573_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___lam__0(v_x_265__boxed_572_);
v_r_574_ = lean_box(v_res_573_);
return v_r_574_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(uint8_t v_allowOffset_580_, lean_object* v_c_581_, lean_object* v_s_582_){
_start:
{
lean_object* v_toInputContext_583_; lean_object* v_pos_584_; uint8_t v___x_585_; 
v_toInputContext_583_ = lean_ctor_get(v_c_581_, 0);
v_pos_584_ = lean_ctor_get(v_s_582_, 2);
lean_inc(v_pos_584_);
lean_inc_ref(v_toInputContext_583_);
v___x_585_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_583_, v_pos_584_);
if (v___x_585_ == 0)
{
lean_object* v_inputString_586_; uint32_t v_curr_587_; uint32_t v___x_588_; uint8_t v___x_589_; 
v_inputString_586_ = lean_ctor_get(v_toInputContext_583_, 0);
v_curr_587_ = lean_string_utf8_get_fast(v_inputString_586_, v_pos_584_);
v___x_588_ = 46;
v___x_589_ = lean_uint32_dec_eq(v_curr_587_, v___x_588_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; uint32_t v___x_597_; uint8_t v___x_598_; 
v___x_590_ = lean_string_utf8_next_fast(v_inputString_586_, v_pos_584_);
v___x_597_ = 90;
v___x_598_ = lean_uint32_dec_eq(v_curr_587_, v___x_597_);
if (v___x_598_ == 0)
{
uint32_t v___x_599_; uint8_t v___x_600_; 
v___x_599_ = 122;
v___x_600_ = lean_uint32_dec_eq(v_curr_587_, v___x_599_);
if (v___x_600_ == 0)
{
uint8_t v___x_601_; uint32_t v___x_608_; uint8_t v___x_609_; 
v___x_601_ = 1;
v___x_608_ = 43;
v___x_609_ = lean_uint32_dec_eq(v_curr_587_, v___x_608_);
if (v___x_609_ == 0)
{
uint32_t v___x_610_; uint8_t v___x_611_; 
v___x_610_ = 45;
v___x_611_ = lean_uint32_dec_eq(v_curr_587_, v___x_610_);
if (v___x_611_ == 0)
{
lean_dec_ref(v_c_581_);
return v_s_582_;
}
else
{
goto v___jp_602_;
}
}
else
{
goto v___jp_602_;
}
v___jp_602_:
{
if (v_allowOffset_580_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
lean_dec_ref(v_c_581_);
v___x_603_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_604_ = lean_box(0);
v___x_605_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_582_, v___x_603_, v___x_604_, v___x_601_);
return v___x_605_;
}
else
{
lean_object* v___x_606_; lean_object* v___x_607_; 
v___x_606_ = l_Lean_Parser_ParserState_setPos(v_s_582_, v___x_590_);
v___x_607_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(v_c_581_, v___x_606_);
return v___x_607_;
}
}
}
else
{
lean_dec_ref(v_c_581_);
goto v___jp_591_;
}
}
else
{
lean_dec_ref(v_c_581_);
goto v___jp_591_;
}
v___jp_591_:
{
if (v_allowOffset_580_ == 0)
{
uint8_t v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_592_ = 1;
v___x_593_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_594_ = lean_box(0);
v___x_595_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_582_, v___x_593_, v___x_594_, v___x_592_);
return v___x_595_;
}
else
{
lean_object* v___x_596_; 
v___x_596_ = l_Lean_Parser_ParserState_setPos(v_s_582_, v___x_590_);
return v___x_596_;
}
}
}
else
{
lean_object* v___f_612_; lean_object* v_s_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v_s_616_; lean_object* v_pos_617_; lean_object* v_errorMsg_618_; lean_object* v___x_619_; uint8_t v___x_620_; 
lean_inc(v_pos_584_);
v___f_612_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0));
v_s_613_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_582_, v_c_581_, v_pos_584_);
lean_dec(v_pos_584_);
v___x_614_ = lean_box(0);
v___x_615_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__2));
lean_inc_ref(v_c_581_);
v_s_616_ = l_Lake_Toml_takeWhile1Fn(v___f_612_, v___x_615_, v_c_581_, v_s_613_);
v_pos_617_ = lean_ctor_get(v_s_616_, 2);
v_errorMsg_618_ = lean_ctor_get(v_s_616_, 4);
v___x_619_ = lean_box(0);
v___x_620_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_618_, v___x_619_);
if (v___x_620_ == 0)
{
lean_dec_ref(v_c_581_);
return v_s_616_;
}
else
{
uint8_t v___x_621_; 
lean_inc(v_pos_617_);
lean_inc_ref(v_toInputContext_583_);
v___x_621_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_583_, v_pos_617_);
if (v___x_621_ == 0)
{
uint32_t v___x_622_; lean_object* v___x_623_; uint32_t v___x_633_; uint8_t v___x_634_; 
v___x_622_ = lean_string_utf8_get_fast(v_inputString_586_, v_pos_617_);
v___x_623_ = lean_string_utf8_next_fast(v_inputString_586_, v_pos_617_);
v___x_633_ = 90;
v___x_634_ = lean_uint32_dec_eq(v___x_622_, v___x_633_);
if (v___x_634_ == 0)
{
uint32_t v___x_635_; uint8_t v___x_636_; 
v___x_635_ = 122;
v___x_636_ = lean_uint32_dec_eq(v___x_622_, v___x_635_);
if (v___x_636_ == 0)
{
uint32_t v___x_637_; uint8_t v___x_638_; 
v___x_637_ = 43;
v___x_638_ = lean_uint32_dec_eq(v___x_622_, v___x_637_);
if (v___x_638_ == 0)
{
uint32_t v___x_639_; uint8_t v___x_640_; 
v___x_639_ = 45;
v___x_640_ = lean_uint32_dec_eq(v___x_622_, v___x_639_);
if (v___x_640_ == 0)
{
lean_dec_ref(v_c_581_);
return v_s_616_;
}
else
{
goto v___jp_624_;
}
}
else
{
goto v___jp_624_;
}
}
else
{
lean_dec_ref(v_c_581_);
goto v___jp_629_;
}
}
else
{
lean_dec_ref(v_c_581_);
goto v___jp_629_;
}
v___jp_624_:
{
if (v_allowOffset_580_ == 0)
{
lean_object* v___x_625_; lean_object* v___x_626_; 
lean_dec_ref(v_c_581_);
v___x_625_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_626_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_616_, v___x_625_, v___x_614_, v___x_589_);
return v___x_626_;
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; 
v___x_627_ = l_Lean_Parser_ParserState_setPos(v_s_616_, v___x_623_);
v___x_628_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn(v_c_581_, v___x_627_);
return v___x_628_;
}
}
v___jp_629_:
{
if (v_allowOffset_580_ == 0)
{
lean_object* v___x_630_; lean_object* v___x_631_; 
v___x_630_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn_timeOffsetFn___closed__0));
v___x_631_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_616_, v___x_630_, v___x_614_, v___x_589_);
return v___x_631_;
}
else
{
lean_object* v___x_632_; 
v___x_632_ = l_Lean_Parser_ParserState_setPos(v_s_616_, v___x_623_);
return v___x_632_;
}
}
}
else
{
lean_dec_ref(v_c_581_);
return v_s_616_;
}
}
}
}
else
{
lean_dec_ref(v_c_581_);
return v_s_582_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___boxed(lean_object* v_allowOffset_641_, lean_object* v_c_642_, lean_object* v_s_643_){
_start:
{
uint8_t v_allowOffset_boxed_644_; lean_object* v_res_645_; 
v_allowOffset_boxed_644_ = lean_unbox(v_allowOffset_641_);
v_res_645_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(v_allowOffset_boxed_644_, v_c_642_, v_s_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(uint8_t v_allowOffset_650_, lean_object* v_a_651_, lean_object* v_a_652_){
_start:
{
lean_object* v___x_653_; lean_object* v_s_654_; lean_object* v_errorMsg_655_; lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_653_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__5));
lean_inc_ref(v_a_651_);
v_s_654_ = l_Lake_Toml_digitPairFn(v___x_653_, v_a_651_, v_a_652_);
v_errorMsg_655_ = lean_ctor_get(v_s_654_, 4);
v___x_656_ = lean_box(0);
v___x_657_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_655_, v___x_656_);
if (v___x_657_ == 0)
{
lean_dec_ref(v_a_651_);
return v_s_654_;
}
else
{
uint32_t v___x_658_; lean_object* v___x_659_; lean_object* v_s_660_; lean_object* v_errorMsg_661_; uint8_t v___x_662_; 
v___x_658_ = 58;
v___x_659_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
lean_inc_ref(v_a_651_);
v_s_660_ = l_Lake_Toml_chFn(v___x_658_, v___x_659_, v_a_651_, v_s_654_);
v_errorMsg_661_ = lean_ctor_get(v_s_660_, 4);
v___x_662_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_661_, v___x_656_);
if (v___x_662_ == 0)
{
lean_dec_ref(v_a_651_);
return v_s_660_;
}
else
{
lean_object* v___x_663_; lean_object* v_s_664_; lean_object* v_errorMsg_665_; uint8_t v___x_666_; 
v___x_663_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___closed__1));
lean_inc_ref(v_a_651_);
v_s_664_ = l_Lake_Toml_digitPairFn(v___x_663_, v_a_651_, v_s_660_);
v_errorMsg_665_ = lean_ctor_get(v_s_664_, 4);
v___x_666_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_665_, v___x_656_);
if (v___x_666_ == 0)
{
lean_dec_ref(v_a_651_);
return v_s_664_;
}
else
{
lean_object* v___x_667_; 
v___x_667_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn(v_allowOffset_650_, v_a_651_, v_s_664_);
return v___x_667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn___boxed(lean_object* v_allowOffset_668_, lean_object* v_a_669_, lean_object* v_a_670_){
_start:
{
uint8_t v_allowOffset_boxed_671_; lean_object* v_res_672_; 
v_allowOffset_boxed_671_ = lean_unbox(v_allowOffset_668_);
v_res_672_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v_allowOffset_boxed_671_, v_a_669_, v_a_670_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn(uint8_t v_allowOffset_677_, lean_object* v_a_678_, lean_object* v_a_679_){
_start:
{
lean_object* v___x_680_; lean_object* v_s_681_; lean_object* v_errorMsg_682_; lean_object* v___x_683_; uint8_t v___x_684_; 
v___x_680_ = ((lean_object*)(l_Lake_Toml_timeFn___closed__1));
lean_inc_ref(v_a_678_);
v_s_681_ = l_Lake_Toml_digitPairFn(v___x_680_, v_a_678_, v_a_679_);
v_errorMsg_682_ = lean_ctor_get(v_s_681_, 4);
v___x_683_ = lean_box(0);
v___x_684_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_682_, v___x_683_);
if (v___x_684_ == 0)
{
lean_dec_ref(v_a_678_);
return v_s_681_;
}
else
{
uint32_t v___x_685_; lean_object* v___x_686_; lean_object* v_s_687_; lean_object* v_errorMsg_688_; uint8_t v___x_689_; 
v___x_685_ = 58;
v___x_686_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
lean_inc_ref(v_a_678_);
v_s_687_ = l_Lake_Toml_chFn(v___x_685_, v___x_686_, v_a_678_, v_s_681_);
v_errorMsg_688_ = lean_ctor_get(v_s_687_, 4);
v___x_689_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_688_, v___x_683_);
if (v___x_689_ == 0)
{
lean_dec_ref(v_a_678_);
return v_s_687_;
}
else
{
lean_object* v___x_690_; 
v___x_690_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v_allowOffset_677_, v_a_678_, v_s_687_);
return v___x_690_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_timeFn___boxed(lean_object* v_allowOffset_691_, lean_object* v_a_692_, lean_object* v_a_693_){
_start:
{
uint8_t v_allowOffset_boxed_694_; lean_object* v_res_695_; 
v_allowOffset_boxed_694_ = lean_unbox(v_allowOffset_691_);
v_res_695_ = l_Lake_Toml_timeFn(v_allowOffset_boxed_694_, v_a_692_, v_a_693_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn(lean_object* v_c_696_, lean_object* v_s_697_){
_start:
{
lean_object* v_pos_698_; lean_object* v_toInputContext_699_; uint8_t v___x_700_; 
v_pos_698_ = lean_ctor_get(v_s_697_, 2);
v_toInputContext_699_ = lean_ctor_get(v_c_696_, 0);
lean_inc(v_pos_698_);
lean_inc_ref(v_toInputContext_699_);
v___x_700_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_699_, v_pos_698_);
if (v___x_700_ == 0)
{
lean_object* v_inputString_701_; uint8_t v___x_702_; uint32_t v_curr_706_; uint32_t v___x_707_; uint8_t v___x_708_; 
v_inputString_701_ = lean_ctor_get(v_toInputContext_699_, 0);
v___x_702_ = 1;
v_curr_706_ = lean_string_utf8_get_fast(v_inputString_701_, v_pos_698_);
v___x_707_ = 84;
v___x_708_ = lean_uint32_dec_eq(v_curr_706_, v___x_707_);
if (v___x_708_ == 0)
{
uint32_t v___x_709_; uint8_t v___x_710_; 
v___x_709_ = 116;
v___x_710_ = lean_uint32_dec_eq(v_curr_706_, v___x_709_);
if (v___x_710_ == 0)
{
uint32_t v___x_711_; uint8_t v___x_712_; 
v___x_711_ = 32;
v___x_712_ = lean_uint32_dec_eq(v_curr_706_, v___x_711_);
if (v___x_712_ == 0)
{
lean_dec_ref(v_c_696_);
return v_s_697_;
}
else
{
lean_object* v_tPos_713_; lean_object* v___x_714_; lean_object* v_s_715_; lean_object* v_pos_716_; lean_object* v_errorMsg_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
lean_inc(v_pos_698_);
v_tPos_713_ = lean_string_utf8_next_fast(v_inputString_701_, v_pos_698_);
v___x_714_ = l_Lean_Parser_ParserState_setPos(v_s_697_, v_tPos_713_);
v_s_715_ = l_Lake_Toml_timeFn(v___x_702_, v_c_696_, v___x_714_);
v_pos_716_ = lean_ctor_get(v_s_715_, 2);
v_errorMsg_717_ = lean_ctor_get(v_s_715_, 4);
v___x_718_ = lean_box(0);
v___x_719_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_717_, v___x_718_);
if (v___x_719_ == 0)
{
uint8_t v_decide_720_; 
v_decide_720_ = lean_nat_dec_eq(v_pos_716_, v_tPos_713_);
if (v_decide_720_ == 0)
{
lean_dec(v_pos_698_);
return v_s_715_;
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_721_ = l_Lean_Parser_ParserState_stackSize(v_s_715_);
v___x_722_ = lean_unsigned_to_nat(1u);
v___x_723_ = lean_nat_sub(v___x_721_, v___x_722_);
lean_dec(v___x_721_);
v___x_724_ = l_Lean_Parser_ParserState_restore(v_s_715_, v___x_723_, v_pos_698_);
lean_dec(v___x_723_);
return v___x_724_;
}
}
else
{
lean_dec(v_pos_698_);
return v_s_715_;
}
}
}
else
{
lean_inc(v_pos_698_);
goto v___jp_703_;
}
}
else
{
lean_inc(v_pos_698_);
goto v___jp_703_;
}
v___jp_703_:
{
lean_object* v___x_704_; lean_object* v___x_705_; 
v___x_704_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_697_, v_c_696_, v_pos_698_);
lean_dec(v_pos_698_);
v___x_705_ = l_Lake_Toml_timeFn(v___x_702_, v_c_696_, v___x_704_);
return v___x_705_;
}
}
else
{
lean_dec_ref(v_c_696_);
return v_s_697_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(lean_object* v_a_737_, lean_object* v_a_738_){
_start:
{
lean_object* v___x_739_; lean_object* v_s_740_; lean_object* v_errorMsg_741_; lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_739_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__1));
lean_inc_ref(v_a_737_);
v_s_740_ = l_Lake_Toml_digitPairFn(v___x_739_, v_a_737_, v_a_738_);
v_errorMsg_741_ = lean_ctor_get(v_s_740_, 4);
v___x_742_ = lean_box(0);
v___x_743_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_741_, v___x_742_);
if (v___x_743_ == 0)
{
lean_dec_ref(v_a_737_);
return v_s_740_;
}
else
{
uint32_t v___x_744_; lean_object* v___x_745_; lean_object* v_s_746_; lean_object* v_errorMsg_747_; uint8_t v___x_748_; 
v___x_744_ = 45;
v___x_745_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3));
lean_inc_ref(v_a_737_);
v_s_746_ = l_Lake_Toml_chFn(v___x_744_, v___x_745_, v_a_737_, v_s_740_);
v_errorMsg_747_ = lean_ctor_get(v_s_746_, 4);
v___x_748_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_747_, v___x_742_);
if (v___x_748_ == 0)
{
lean_dec_ref(v_a_737_);
return v_s_746_;
}
else
{
lean_object* v___x_749_; lean_object* v_s_750_; lean_object* v_errorMsg_751_; uint8_t v___x_752_; 
v___x_749_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__5));
lean_inc_ref(v_a_737_);
v_s_750_ = l_Lake_Toml_digitPairFn(v___x_749_, v_a_737_, v_s_746_);
v_errorMsg_751_ = lean_ctor_get(v_s_750_, 4);
v___x_752_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_751_, v___x_742_);
if (v___x_752_ == 0)
{
lean_dec_ref(v_a_737_);
return v_s_750_;
}
else
{
lean_object* v___x_753_; 
v___x_753_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_optTimeFn(v_a_737_, v_s_750_);
return v___x_753_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0(lean_object* v_c_758_, lean_object* v_x_759_, lean_object* v_x_760_){
_start:
{
lean_object* v_zero_761_; uint8_t v_isZero_762_; 
v_zero_761_ = lean_unsigned_to_nat(0u);
v_isZero_762_ = lean_nat_dec_eq(v_x_759_, v_zero_761_);
if (v_isZero_762_ == 1)
{
lean_dec(v_x_759_);
lean_dec_ref(v_c_758_);
return v_x_760_;
}
else
{
lean_object* v___x_763_; lean_object* v_s_764_; lean_object* v_errorMsg_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_763_ = ((lean_object*)(l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0___closed__1));
lean_inc_ref(v_c_758_);
v_s_764_ = l_Lake_Toml_digitFn(v___x_763_, v_c_758_, v_x_760_);
v_errorMsg_765_ = lean_ctor_get(v_s_764_, 4);
v___x_766_ = lean_box(0);
v___x_767_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_765_, v___x_766_);
if (v___x_767_ == 0)
{
lean_dec(v_x_759_);
lean_dec_ref(v_c_758_);
return v_s_764_;
}
else
{
lean_object* v_one_768_; lean_object* v_n_769_; 
v_one_768_ = lean_unsigned_to_nat(1u);
v_n_769_ = lean_nat_sub(v_x_759_, v_one_768_);
lean_dec(v_x_759_);
v_x_759_ = v_n_769_;
v_x_760_ = v_s_764_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_dateTimeFn(lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
lean_object* v___x_773_; lean_object* v_s_774_; lean_object* v_errorMsg_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_773_ = lean_unsigned_to_nat(4u);
lean_inc_ref(v_a_771_);
v_s_774_ = l___private_Lake_Toml_ParserUtil_0__Lake_Toml_repeatFn_loop___at___00Lake_Toml_dateTimeFn_spec__0(v_a_771_, v___x_773_, v_a_772_);
v_errorMsg_775_ = lean_ctor_get(v_s_774_, 4);
v___x_776_ = lean_box(0);
v___x_777_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_dec_ref(v_a_771_);
return v_s_774_;
}
else
{
uint32_t v___x_778_; lean_object* v___x_779_; lean_object* v_s_780_; lean_object* v_errorMsg_781_; uint8_t v___x_782_; 
v___x_778_ = 45;
v___x_779_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn___closed__3));
lean_inc_ref(v_a_771_);
v_s_780_ = l_Lake_Toml_chFn(v___x_778_, v___x_779_, v_a_771_, v_s_774_);
v_errorMsg_781_ = lean_ctor_get(v_s_780_, 4);
v___x_782_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_781_, v___x_776_);
if (v___x_782_ == 0)
{
lean_dec_ref(v_a_771_);
return v_s_780_;
}
else
{
lean_object* v___x_783_; 
v___x_783_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(v_a_771_, v_s_780_);
return v___x_783_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(lean_object* v_c_788_, lean_object* v_s_789_){
_start:
{
lean_object* v_toInputContext_790_; lean_object* v_pos_791_; lean_object* v_expected_792_; uint8_t v___x_793_; 
v_toInputContext_790_ = lean_ctor_get(v_c_788_, 0);
v_pos_791_ = lean_ctor_get(v_s_789_, 2);
v_expected_792_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn___closed__1));
lean_inc(v_pos_791_);
lean_inc_ref(v_toInputContext_790_);
v___x_793_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_790_, v_pos_791_);
if (v___x_793_ == 0)
{
lean_object* v_inputString_794_; lean_object* v___f_795_; uint32_t v_curr_800_; uint32_t v___x_801_; uint8_t v___x_802_; 
v_inputString_794_ = lean_ctor_get(v_toInputContext_790_, 0);
v___f_795_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0));
v_curr_800_ = lean_string_utf8_get_fast(v_inputString_794_, v_pos_791_);
v___x_801_ = 45;
v___x_802_ = lean_uint32_dec_eq(v_curr_800_, v___x_801_);
if (v___x_802_ == 0)
{
uint32_t v___x_803_; uint8_t v___x_804_; 
v___x_803_ = 43;
v___x_804_ = lean_uint32_dec_eq(v_curr_800_, v___x_803_);
if (v___x_804_ == 0)
{
uint8_t v___x_805_; uint32_t v___x_806_; uint8_t v___x_807_; 
v___x_805_ = 1;
v___x_806_ = 48;
v___x_807_ = lean_uint32_dec_le(v___x_806_, v_curr_800_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; 
lean_dec_ref(v_c_788_);
v___x_808_ = l_Lake_Toml_mkUnexpectedCharError(v_s_789_, v_curr_800_, v_expected_792_, v___x_805_);
return v___x_808_;
}
else
{
uint32_t v___x_809_; uint8_t v___x_810_; 
v___x_809_ = 57;
v___x_810_ = lean_uint32_dec_le(v_curr_800_, v___x_809_);
if (v___x_810_ == 0)
{
lean_object* v___x_811_; 
lean_dec_ref(v_c_788_);
v___x_811_ = l_Lake_Toml_mkUnexpectedCharError(v_s_789_, v_curr_800_, v_expected_792_, v___x_805_);
return v___x_811_;
}
else
{
lean_object* v_s_812_; uint32_t v___x_813_; lean_object* v___x_814_; 
lean_inc(v_pos_791_);
v_s_812_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_789_, v_c_788_, v_pos_791_);
lean_dec(v_pos_791_);
v___x_813_ = 95;
v___x_814_ = l_Lake_Toml_sepByChar1AuxFn(v___f_795_, v___x_813_, v_expected_792_, v_c_788_, v_s_812_);
return v___x_814_;
}
}
}
else
{
lean_inc(v_pos_791_);
goto v___jp_796_;
}
}
else
{
lean_inc(v_pos_791_);
goto v___jp_796_;
}
v___jp_796_:
{
lean_object* v_s_797_; uint32_t v___x_798_; lean_object* v___x_799_; 
v_s_797_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_789_, v_c_788_, v_pos_791_);
lean_dec(v_pos_791_);
v___x_798_ = 95;
v___x_799_ = l_Lake_Toml_sepByChar1Fn(v___f_795_, v___x_798_, v_expected_792_, v_c_788_, v_s_797_);
return v___x_799_;
}
}
else
{
lean_object* v___x_815_; 
lean_dec_ref(v_c_788_);
v___x_815_ = l_Lean_Parser_ParserState_mkEOIError(v_s_789_, v_expected_792_);
return v___x_815_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn(lean_object* v_c_816_, lean_object* v_s_817_){
_start:
{
lean_object* v_toInputContext_818_; lean_object* v_pos_819_; uint8_t v___x_823_; 
v_toInputContext_818_ = lean_ctor_get(v_c_816_, 0);
v_pos_819_ = lean_ctor_get(v_s_817_, 2);
lean_inc(v_pos_819_);
lean_inc_ref(v_toInputContext_818_);
v___x_823_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_818_, v_pos_819_);
if (v___x_823_ == 0)
{
lean_object* v_inputString_824_; uint32_t v_curr_825_; uint32_t v___x_826_; uint8_t v___x_827_; 
v_inputString_824_ = lean_ctor_get(v_toInputContext_818_, 0);
v_curr_825_ = lean_string_utf8_get_fast(v_inputString_824_, v_pos_819_);
v___x_826_ = 101;
v___x_827_ = lean_uint32_dec_eq(v_curr_825_, v___x_826_);
if (v___x_827_ == 0)
{
uint32_t v___x_828_; uint8_t v___x_829_; 
v___x_828_ = 69;
v___x_829_ = lean_uint32_dec_eq(v_curr_825_, v___x_828_);
if (v___x_829_ == 0)
{
lean_dec_ref(v_c_816_);
return v_s_817_;
}
else
{
lean_inc(v_pos_819_);
goto v___jp_820_;
}
}
else
{
lean_inc(v_pos_819_);
goto v___jp_820_;
}
}
else
{
lean_dec_ref(v_c_816_);
return v_s_817_;
}
v___jp_820_:
{
lean_object* v___x_821_; lean_object* v___x_822_; 
v___x_821_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_817_, v_c_816_, v_pos_819_);
lean_dec(v_pos_819_);
v___x_822_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(v_c_816_, v___x_821_);
return v___x_822_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(lean_object* v_startPos_847_, uint32_t v_curr_848_, lean_object* v_nextPos_849_, lean_object* v_c_850_, lean_object* v_s_851_){
_start:
{
uint32_t v___x_861_; uint8_t v___x_862_; 
v___x_861_ = 46;
v___x_862_ = lean_uint32_dec_eq(v_curr_848_, v___x_861_);
if (v___x_862_ == 0)
{
uint32_t v___x_863_; uint8_t v___x_864_; 
v___x_863_ = 101;
v___x_864_ = lean_uint32_dec_eq(v_curr_848_, v___x_863_);
if (v___x_864_ == 0)
{
uint32_t v___x_865_; uint8_t v___x_866_; 
v___x_865_ = 69;
v___x_866_ = lean_uint32_dec_eq(v_curr_848_, v___x_865_);
if (v___x_866_ == 0)
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; 
lean_dec(v_nextPos_849_);
v___x_867_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_868_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_869_ = l_Lake_Toml_pushLit(v___x_867_, v_startPos_847_, v___x_868_, v_c_850_, v_s_851_);
return v___x_869_;
}
else
{
goto v___jp_852_;
}
}
else
{
goto v___jp_852_;
}
}
else
{
lean_object* v___f_870_; lean_object* v_s_871_; uint32_t v___x_872_; lean_object* v___x_873_; lean_object* v_s_874_; lean_object* v_errorMsg_875_; lean_object* v___x_876_; uint8_t v___x_877_; 
v___f_870_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_timeTailFn___closed__0));
v_s_871_ = l_Lean_Parser_ParserState_setPos(v_s_851_, v_nextPos_849_);
v___x_872_ = 95;
v___x_873_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__8));
lean_inc_ref(v_c_850_);
v_s_874_ = l_Lake_Toml_sepByChar1Fn(v___f_870_, v___x_872_, v___x_873_, v_c_850_, v_s_871_);
v_errorMsg_875_ = lean_ctor_get(v_s_874_, 4);
v___x_876_ = lean_box(0);
v___x_877_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_875_, v___x_876_);
if (v___x_877_ == 0)
{
lean_dec_ref(v_c_850_);
lean_dec(v_startPos_847_);
return v_s_874_;
}
else
{
lean_object* v_s_878_; lean_object* v_errorMsg_879_; uint8_t v___x_880_; 
lean_inc_ref(v_c_850_);
v_s_878_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_optDecExpFn(v_c_850_, v_s_874_);
v_errorMsg_879_ = lean_ctor_get(v_s_878_, 4);
v___x_880_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_879_, v___x_876_);
if (v___x_880_ == 0)
{
lean_dec_ref(v_c_850_);
lean_dec(v_startPos_847_);
return v_s_878_;
}
else
{
lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
v___x_881_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_882_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_883_ = l_Lake_Toml_pushLit(v___x_881_, v_startPos_847_, v___x_882_, v_c_850_, v_s_878_);
return v___x_883_;
}
}
}
v___jp_852_:
{
lean_object* v_s_853_; lean_object* v_s_854_; lean_object* v_errorMsg_855_; lean_object* v___x_856_; uint8_t v___x_857_; 
v_s_853_ = l_Lean_Parser_ParserState_setPos(v_s_851_, v_nextPos_849_);
lean_inc_ref(v_c_850_);
v_s_854_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decExpFn(v_c_850_, v_s_853_);
v_errorMsg_855_ = lean_ctor_get(v_s_854_, 4);
v___x_856_ = lean_box(0);
v___x_857_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_855_, v___x_856_);
if (v___x_857_ == 0)
{
lean_dec_ref(v_c_850_);
lean_dec(v_startPos_847_);
return v_s_854_;
}
else
{
lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; 
v___x_858_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_859_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_860_ = l_Lake_Toml_pushLit(v___x_858_, v_startPos_847_, v___x_859_, v_c_850_, v_s_854_);
return v___x_860_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___boxed(lean_object* v_startPos_884_, lean_object* v_curr_885_, lean_object* v_nextPos_886_, lean_object* v_c_887_, lean_object* v_s_888_){
_start:
{
uint32_t v_curr_boxed_889_; lean_object* v_res_890_; 
v_curr_boxed_889_ = lean_unbox_uint32(v_curr_885_);
lean_dec(v_curr_885_);
v_res_890_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_startPos_884_, v_curr_boxed_889_, v_nextPos_886_, v_c_887_, v_s_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailFn(lean_object* v_startPos_891_, lean_object* v_c_892_, lean_object* v_s_893_){
_start:
{
lean_object* v_toInputContext_894_; lean_object* v_pos_895_; uint8_t v___x_896_; 
v_toInputContext_894_ = lean_ctor_get(v_c_892_, 0);
v_pos_895_ = lean_ctor_get(v_s_893_, 2);
lean_inc(v_pos_895_);
lean_inc_ref(v_toInputContext_894_);
v___x_896_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_894_, v_pos_895_);
if (v___x_896_ == 0)
{
lean_object* v_inputString_897_; uint32_t v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_inputString_897_ = lean_ctor_get(v_toInputContext_894_, 0);
v___x_898_ = lean_string_utf8_get_fast(v_inputString_897_, v_pos_895_);
v___x_899_ = lean_string_utf8_next_fast(v_inputString_897_, v_pos_895_);
v___x_900_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_startPos_891_, v___x_898_, v___x_899_, v_c_892_, v_s_893_);
return v___x_900_;
}
else
{
lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_901_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_902_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_903_ = l_Lake_Toml_pushLit(v___x_901_, v_startPos_891_, v___x_902_, v_c_892_, v_s_893_);
return v___x_903_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(lean_object* v_startPos_911_, lean_object* v_c_912_, lean_object* v_s_913_){
_start:
{
lean_object* v_toInputContext_914_; lean_object* v_pos_915_; uint8_t v___x_916_; 
v_toInputContext_914_ = lean_ctor_get(v_c_912_, 0);
v_pos_915_ = lean_ctor_get(v_s_913_, 2);
lean_inc(v_pos_915_);
lean_inc_ref(v_toInputContext_914_);
v___x_916_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_914_, v_pos_915_);
if (v___x_916_ == 0)
{
lean_object* v_inputString_917_; uint32_t v_curr_918_; uint32_t v___x_922_; uint8_t v___x_923_; 
v_inputString_917_ = lean_ctor_get(v_toInputContext_914_, 0);
v_curr_918_ = lean_string_utf8_get_fast(v_inputString_917_, v_pos_915_);
v___x_922_ = 48;
v___x_923_ = lean_uint32_dec_le(v___x_922_, v_curr_918_);
if (v___x_923_ == 0)
{
goto v___jp_919_;
}
else
{
uint32_t v___x_924_; uint8_t v___x_925_; 
v___x_924_ = 57;
v___x_925_ = lean_uint32_dec_le(v_curr_918_, v___x_924_);
if (v___x_925_ == 0)
{
goto v___jp_919_;
}
else
{
lean_object* v_s_926_; 
lean_inc(v_pos_915_);
v_s_926_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_913_, v_c_912_, v_pos_915_);
lean_dec(v_pos_915_);
v_s_913_ = v_s_926_;
goto _start;
}
}
v___jp_919_:
{
lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_920_ = lean_string_utf8_next_fast(v_inputString_917_, v_pos_915_);
v___x_921_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_911_, v_curr_918_, v___x_920_, v_c_912_, v_s_913_);
return v___x_921_;
}
}
else
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_928_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_929_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_930_ = l_Lake_Toml_pushLit(v___x_928_, v_startPos_911_, v___x_929_, v_c_912_, v_s_913_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn(lean_object* v_startPos_931_, lean_object* v_c_932_, lean_object* v_s_933_){
_start:
{
lean_object* v_pos_934_; lean_object* v_toInputContext_935_; lean_object* v_expected_936_; uint8_t v___x_937_; 
v_pos_934_ = lean_ctor_get(v_s_933_, 2);
v_toInputContext_935_ = lean_ctor_get(v_c_932_, 0);
v_expected_936_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2));
lean_inc(v_pos_934_);
lean_inc_ref(v_toInputContext_935_);
v___x_937_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_935_, v_pos_934_);
if (v___x_937_ == 0)
{
lean_object* v_inputString_938_; uint8_t v___x_939_; uint32_t v_curr_940_; uint32_t v___x_941_; uint8_t v___x_942_; 
v_inputString_938_ = lean_ctor_get(v_toInputContext_935_, 0);
v___x_939_ = 1;
v_curr_940_ = lean_string_utf8_get_fast(v_inputString_938_, v_pos_934_);
v___x_941_ = 48;
v___x_942_ = lean_uint32_dec_le(v___x_941_, v_curr_940_);
if (v___x_942_ == 0)
{
lean_object* v___x_943_; 
lean_dec_ref(v_c_932_);
lean_dec(v_startPos_931_);
v___x_943_ = l_Lake_Toml_mkUnexpectedCharError(v_s_933_, v_curr_940_, v_expected_936_, v___x_939_);
return v___x_943_;
}
else
{
uint32_t v___x_944_; uint8_t v___x_945_; 
v___x_944_ = 57;
v___x_945_ = lean_uint32_dec_le(v_curr_940_, v___x_944_);
if (v___x_945_ == 0)
{
lean_object* v___x_946_; 
lean_dec_ref(v_c_932_);
lean_dec(v_startPos_931_);
v___x_946_ = l_Lake_Toml_mkUnexpectedCharError(v_s_933_, v_curr_940_, v_expected_936_, v___x_939_);
return v___x_946_;
}
else
{
lean_object* v_s_947_; lean_object* v___x_948_; 
lean_inc(v_pos_934_);
v_s_947_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_933_, v_c_932_, v_pos_934_);
lean_dec(v_pos_934_);
v___x_948_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(v_startPos_931_, v_c_932_, v_s_947_);
return v___x_948_;
}
}
}
else
{
lean_object* v___x_949_; 
lean_dec_ref(v_c_932_);
lean_dec(v_startPos_931_);
v___x_949_ = l_Lean_Parser_ParserState_mkEOIError(v_s_933_, v_expected_936_);
return v___x_949_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(lean_object* v_startPos_950_, uint32_t v_curr_951_, lean_object* v_nextPos_952_, lean_object* v_c_953_, lean_object* v_s_954_){
_start:
{
uint32_t v___x_955_; uint8_t v___x_956_; 
v___x_955_ = 95;
v___x_956_ = lean_uint32_dec_eq(v_curr_951_, v___x_955_);
if (v___x_956_ == 0)
{
lean_object* v___x_957_; 
v___x_957_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_startPos_950_, v_curr_951_, v_nextPos_952_, v_c_953_, v_s_954_);
return v___x_957_;
}
else
{
lean_object* v_s_958_; lean_object* v___x_959_; 
v_s_958_ = l_Lean_Parser_ParserState_setPos(v_s_954_, v_nextPos_952_);
v___x_959_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn(v_startPos_950_, v_c_953_, v_s_958_);
return v___x_959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn___boxed(lean_object* v_startPos_960_, lean_object* v_curr_961_, lean_object* v_nextPos_962_, lean_object* v_c_963_, lean_object* v_s_964_){
_start:
{
uint32_t v_curr_boxed_965_; lean_object* v_res_966_; 
v_curr_boxed_965_ = lean_unbox_uint32(v_curr_961_);
lean_dec(v_curr_961_);
v_res_966_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_960_, v_curr_boxed_965_, v_nextPos_962_, v_c_963_, v_s_964_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(lean_object* v_startPos_972_, lean_object* v_a_973_, lean_object* v_a_974_){
_start:
{
lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v_s_977_; lean_object* v_errorMsg_978_; lean_object* v___x_979_; uint8_t v___x_980_; 
v___x_975_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__0));
v___x_976_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn___closed__2));
lean_inc_ref(v_a_973_);
v_s_977_ = l_Lake_Toml_strFn(v___x_975_, v___x_976_, v_a_973_, v_a_974_);
v_errorMsg_978_ = lean_ctor_get(v_s_977_, 4);
v___x_979_ = lean_box(0);
v___x_980_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_978_, v___x_979_);
if (v___x_980_ == 0)
{
lean_dec_ref(v_a_973_);
lean_dec(v_startPos_972_);
return v_s_977_;
}
else
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_981_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_982_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_983_ = l_Lake_Toml_pushLit(v___x_981_, v_startPos_972_, v___x_982_, v_a_973_, v_s_977_);
return v___x_983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(lean_object* v_startPos_989_, lean_object* v_a_990_, lean_object* v_a_991_){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v_s_994_; lean_object* v_errorMsg_995_; lean_object* v___x_996_; uint8_t v___x_997_; 
v___x_992_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__0));
v___x_993_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn___closed__2));
lean_inc_ref(v_a_990_);
v_s_994_ = l_Lake_Toml_strFn(v___x_992_, v___x_993_, v_a_990_, v_a_991_);
v_errorMsg_995_ = lean_ctor_get(v_s_994_, 4);
v___x_996_ = lean_box(0);
v___x_997_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_995_, v___x_996_);
if (v___x_997_ == 0)
{
lean_dec_ref(v_a_990_);
lean_dec(v_startPos_989_);
return v_s_994_;
}
else
{
lean_object* v___x_998_; lean_object* v___x_999_; lean_object* v___x_1000_; 
v___x_998_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_999_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1000_ = l_Lake_Toml_pushLit(v___x_998_, v_startPos_989_, v___x_999_, v_a_990_, v_s_994_);
return v___x_1000_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decimalFn(lean_object* v_startPos_1001_, lean_object* v_c_1002_, lean_object* v_s_1003_){
_start:
{
lean_object* v_toInputContext_1004_; lean_object* v_pos_1005_; lean_object* v_expected_1006_; uint8_t v___x_1007_; 
v_toInputContext_1004_ = lean_ctor_get(v_c_1002_, 0);
v_pos_1005_ = lean_ctor_get(v_s_1003_, 2);
v_expected_1006_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__2));
lean_inc(v_pos_1005_);
lean_inc_ref(v_toInputContext_1004_);
v___x_1007_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1004_, v_pos_1005_);
if (v___x_1007_ == 0)
{
lean_object* v_inputString_1008_; uint32_t v_curr_1009_; uint32_t v___x_1010_; uint8_t v___x_1011_; 
v_inputString_1008_ = lean_ctor_get(v_toInputContext_1004_, 0);
v_curr_1009_ = lean_string_utf8_get_fast(v_inputString_1008_, v_pos_1005_);
v___x_1010_ = 48;
v___x_1011_ = lean_uint32_dec_eq(v_curr_1009_, v___x_1010_);
if (v___x_1011_ == 0)
{
uint8_t v___x_1012_; uint8_t v___x_1023_; 
v___x_1012_ = 1;
v___x_1023_ = lean_uint32_dec_le(v___x_1010_, v_curr_1009_);
if (v___x_1023_ == 0)
{
goto v___jp_1013_;
}
else
{
uint32_t v___x_1024_; uint8_t v___x_1025_; 
v___x_1024_ = 57;
v___x_1025_ = lean_uint32_dec_le(v_curr_1009_, v___x_1024_);
if (v___x_1025_ == 0)
{
goto v___jp_1013_;
}
else
{
lean_object* v___x_1026_; lean_object* v___x_1027_; 
lean_inc(v_pos_1005_);
v___x_1026_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1003_, v_c_1002_, v_pos_1005_);
lean_dec(v_pos_1005_);
v___x_1027_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(v_startPos_1001_, v_c_1002_, v___x_1026_);
return v___x_1027_;
}
}
v___jp_1013_:
{
uint32_t v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = 105;
v___x_1015_ = lean_uint32_dec_eq(v_curr_1009_, v___x_1014_);
if (v___x_1015_ == 0)
{
uint32_t v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = 110;
v___x_1017_ = lean_uint32_dec_eq(v_curr_1009_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_object* v___x_1018_; 
lean_dec_ref(v_c_1002_);
lean_dec(v_startPos_1001_);
v___x_1018_ = l_Lake_Toml_mkUnexpectedCharError(v_s_1003_, v_curr_1009_, v_expected_1006_, v___x_1012_);
return v___x_1018_;
}
else
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
lean_inc(v_pos_1005_);
v___x_1019_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1003_, v_c_1002_, v_pos_1005_);
lean_dec(v_pos_1005_);
v___x_1020_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(v_startPos_1001_, v_c_1002_, v___x_1019_);
return v___x_1020_;
}
}
else
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
lean_inc(v_pos_1005_);
v___x_1021_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1003_, v_c_1002_, v_pos_1005_);
lean_dec(v_pos_1005_);
v___x_1022_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(v_startPos_1001_, v_c_1002_, v___x_1021_);
return v___x_1022_;
}
}
}
else
{
lean_object* v___x_1028_; lean_object* v___x_1029_; 
lean_inc(v_pos_1005_);
v___x_1028_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1003_, v_c_1002_, v_pos_1005_);
lean_dec(v_pos_1005_);
v___x_1029_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailFn(v_startPos_1001_, v_c_1002_, v___x_1028_);
return v___x_1029_;
}
}
else
{
lean_object* v___x_1030_; 
lean_dec_ref(v_c_1002_);
lean_dec(v_startPos_1001_);
v___x_1030_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1003_, v_expected_1006_);
return v___x_1030_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn(lean_object* v_startPos_1046_, lean_object* v_c_1047_, lean_object* v_s_1048_){
_start:
{
lean_object* v_toInputContext_1049_; lean_object* v_pos_1050_; uint8_t v___x_1051_; 
v_toInputContext_1049_ = lean_ctor_get(v_c_1047_, 0);
v_pos_1050_ = lean_ctor_get(v_s_1048_, 2);
lean_inc(v_pos_1050_);
lean_inc_ref(v_toInputContext_1049_);
v___x_1051_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1049_, v_pos_1050_);
if (v___x_1051_ == 0)
{
lean_object* v_inputString_1052_; uint32_t v_curr_1053_; lean_object* v_nextPos_1054_; uint32_t v___x_1055_; uint8_t v___x_1056_; 
v_inputString_1052_ = lean_ctor_get(v_toInputContext_1049_, 0);
v_curr_1053_ = lean_string_utf8_get_fast(v_inputString_1052_, v_pos_1050_);
v_nextPos_1054_ = lean_string_utf8_next_fast(v_inputString_1052_, v_pos_1050_);
v___x_1055_ = 48;
v___x_1056_ = lean_uint32_dec_le(v___x_1055_, v_curr_1053_);
if (v___x_1056_ == 0)
{
lean_object* v___x_1057_; 
v___x_1057_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1053_, v_nextPos_1054_, v_c_1047_, v_s_1048_);
return v___x_1057_;
}
else
{
uint32_t v___x_1058_; uint8_t v___x_1059_; 
v___x_1058_ = 57;
v___x_1059_ = lean_uint32_dec_le(v_curr_1053_, v___x_1058_);
if (v___x_1059_ == 0)
{
lean_object* v___x_1060_; 
v___x_1060_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1053_, v_nextPos_1054_, v_c_1047_, v_s_1048_);
return v___x_1060_;
}
else
{
lean_object* v_s_1061_; lean_object* v_pos_1062_; uint8_t v___x_1063_; 
v_s_1061_ = l_Lean_Parser_ParserState_setPos(v_s_1048_, v_nextPos_1054_);
v_pos_1062_ = lean_ctor_get(v_s_1061_, 2);
lean_inc(v_pos_1062_);
lean_inc_ref(v_toInputContext_1049_);
v___x_1063_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1049_, v_pos_1062_);
if (v___x_1063_ == 0)
{
uint32_t v_curr_1064_; lean_object* v_nextPos_1065_; uint32_t v___x_1066_; uint8_t v___x_1067_; 
v_curr_1064_ = lean_string_utf8_get_fast(v_inputString_1052_, v_pos_1062_);
v_nextPos_1065_ = lean_string_utf8_next_fast(v_inputString_1052_, v_pos_1062_);
v___x_1066_ = 58;
v___x_1067_ = lean_uint32_dec_eq(v_curr_1064_, v___x_1066_);
if (v___x_1067_ == 0)
{
uint8_t v___x_1068_; 
v___x_1068_ = lean_uint32_dec_le(v___x_1055_, v_curr_1064_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; 
v___x_1069_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1064_, v_nextPos_1065_, v_c_1047_, v_s_1061_);
return v___x_1069_;
}
else
{
uint8_t v___x_1070_; 
v___x_1070_ = lean_uint32_dec_le(v_curr_1064_, v___x_1058_);
if (v___x_1070_ == 0)
{
lean_object* v___x_1071_; 
v___x_1071_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1064_, v_nextPos_1065_, v_c_1047_, v_s_1061_);
return v___x_1071_;
}
else
{
lean_object* v_s_1072_; lean_object* v_pos_1073_; uint8_t v___x_1074_; 
v_s_1072_ = l_Lean_Parser_ParserState_setPos(v_s_1061_, v_nextPos_1065_);
v_pos_1073_ = lean_ctor_get(v_s_1072_, 2);
lean_inc(v_pos_1073_);
lean_inc_ref(v_toInputContext_1049_);
v___x_1074_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1049_, v_pos_1073_);
if (v___x_1074_ == 0)
{
uint32_t v_curr_1075_; lean_object* v_nextPos_1076_; uint8_t v___x_1077_; 
v_curr_1075_ = lean_string_utf8_get_fast(v_inputString_1052_, v_pos_1073_);
v_nextPos_1076_ = lean_string_utf8_next_fast(v_inputString_1052_, v_pos_1073_);
v___x_1077_ = lean_uint32_dec_le(v___x_1055_, v_curr_1075_);
if (v___x_1077_ == 0)
{
lean_object* v___x_1078_; 
v___x_1078_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1075_, v_nextPos_1076_, v_c_1047_, v_s_1072_);
return v___x_1078_;
}
else
{
uint8_t v___x_1079_; 
v___x_1079_ = lean_uint32_dec_le(v_curr_1075_, v___x_1058_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; 
v___x_1080_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1075_, v_nextPos_1076_, v_c_1047_, v_s_1072_);
return v___x_1080_;
}
else
{
lean_object* v_s_1081_; uint8_t v___x_1082_; 
v_s_1081_ = l_Lean_Parser_ParserState_setPos(v_s_1072_, v_nextPos_1076_);
lean_inc_ref(v_toInputContext_1049_);
v___x_1082_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1049_, v_nextPos_1076_);
if (v___x_1082_ == 0)
{
lean_object* v_pos_1083_; uint32_t v_curr_1084_; lean_object* v_nextPos_1085_; uint32_t v___x_1086_; uint8_t v___x_1087_; 
v_pos_1083_ = lean_ctor_get(v_s_1081_, 2);
v_curr_1084_ = lean_string_utf8_get_fast(v_inputString_1052_, v_pos_1083_);
v_nextPos_1085_ = lean_string_utf8_next_fast(v_inputString_1052_, v_pos_1083_);
v___x_1086_ = 45;
v___x_1087_ = lean_uint32_dec_eq(v_curr_1084_, v___x_1086_);
if (v___x_1087_ == 0)
{
uint8_t v___x_1088_; 
v___x_1088_ = lean_uint32_dec_le(v___x_1055_, v_curr_1084_);
if (v___x_1088_ == 0)
{
lean_object* v___x_1089_; 
v___x_1089_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1084_, v_nextPos_1085_, v_c_1047_, v_s_1081_);
return v___x_1089_;
}
else
{
uint8_t v___x_1090_; 
v___x_1090_ = lean_uint32_dec_le(v_curr_1084_, v___x_1058_);
if (v___x_1090_ == 0)
{
lean_object* v___x_1091_; 
v___x_1091_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberSepFn(v_startPos_1046_, v_curr_1084_, v_nextPos_1085_, v_c_1047_, v_s_1081_);
return v___x_1091_;
}
else
{
lean_object* v_s_1092_; lean_object* v___x_1093_; 
v_s_1092_ = l_Lean_Parser_ParserState_setPos(v_s_1081_, v_nextPos_1085_);
v___x_1093_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberAuxFn(v_startPos_1046_, v_c_1047_, v_s_1092_);
return v___x_1093_;
}
}
}
else
{
lean_object* v_s_1094_; lean_object* v_s_1095_; lean_object* v_errorMsg_1096_; lean_object* v___x_1097_; uint8_t v___x_1098_; 
v_s_1094_ = l_Lean_Parser_ParserState_setPos(v_s_1081_, v_nextPos_1085_);
lean_inc_ref(v_c_1047_);
v_s_1095_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_dateTimeAuxFn(v_c_1047_, v_s_1094_);
v_errorMsg_1096_ = lean_ctor_get(v_s_1095_, 4);
v___x_1097_ = lean_box(0);
v___x_1098_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1096_, v___x_1097_);
if (v___x_1098_ == 0)
{
lean_dec_ref(v_c_1047_);
lean_dec(v_startPos_1046_);
return v_s_1095_;
}
else
{
lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1099_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1100_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1101_ = l_Lake_Toml_pushLit(v___x_1099_, v_startPos_1046_, v___x_1100_, v_c_1047_, v_s_1095_);
return v___x_1101_;
}
}
}
else
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1102_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1103_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1104_ = l_Lake_Toml_pushLit(v___x_1102_, v_startPos_1046_, v___x_1103_, v_c_1047_, v_s_1081_);
return v___x_1104_;
}
}
}
}
else
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; 
v___x_1105_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1106_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1107_ = l_Lake_Toml_pushLit(v___x_1105_, v_startPos_1046_, v___x_1106_, v_c_1047_, v_s_1072_);
return v___x_1107_;
}
}
}
}
else
{
lean_object* v_s_1108_; lean_object* v_s_1109_; lean_object* v_errorMsg_1110_; lean_object* v___x_1111_; uint8_t v___x_1112_; 
v_s_1108_ = l_Lean_Parser_ParserState_setPos(v_s_1061_, v_nextPos_1065_);
lean_inc_ref(v_c_1047_);
v_s_1109_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v___x_1063_, v_c_1047_, v_s_1108_);
v_errorMsg_1110_ = lean_ctor_get(v_s_1109_, 4);
v___x_1111_ = lean_box(0);
v___x_1112_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1110_, v___x_1111_);
if (v___x_1112_ == 0)
{
lean_dec_ref(v_c_1047_);
lean_dec(v_startPos_1046_);
return v_s_1109_;
}
else
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v___x_1113_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1114_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1115_ = l_Lake_Toml_pushLit(v___x_1113_, v_startPos_1046_, v___x_1114_, v_c_1047_, v_s_1109_);
return v___x_1115_;
}
}
}
else
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1117_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1118_ = l_Lake_Toml_pushLit(v___x_1116_, v_startPos_1046_, v___x_1117_, v_c_1047_, v_s_1061_);
return v___x_1118_;
}
}
}
}
else
{
lean_object* v___x_1119_; lean_object* v___x_1120_; 
lean_dec_ref(v_c_1047_);
lean_dec(v_startPos_1046_);
v___x_1119_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__5));
v___x_1120_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1048_, v___x_1119_);
return v___x_1120_;
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn___lam__0(lean_object* v_c_1158_, lean_object* v_s_1159_){
_start:
{
lean_object* v_pos_1160_; lean_object* v___y_1165_; lean_object* v_errorMsg_1166_; lean_object* v_toInputContext_1172_; lean_object* v_expected_1173_; uint8_t v___x_1174_; 
v_pos_1160_ = lean_ctor_get(v_s_1159_, 2);
v_toInputContext_1172_ = lean_ctor_get(v_c_1158_, 0);
v_expected_1173_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__1));
lean_inc(v_pos_1160_);
lean_inc_ref(v_toInputContext_1172_);
v___x_1174_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1172_, v_pos_1160_);
if (v___x_1174_ == 0)
{
lean_object* v_inputString_1175_; uint32_t v_curr_1176_; uint32_t v___x_1177_; uint8_t v___x_1178_; 
v_inputString_1175_ = lean_ctor_get(v_toInputContext_1172_, 0);
v_curr_1176_ = lean_string_utf8_get_fast(v_inputString_1175_, v_pos_1160_);
v___x_1177_ = 48;
v___x_1178_ = lean_uint32_dec_eq(v_curr_1176_, v___x_1177_);
if (v___x_1178_ == 0)
{
uint8_t v___x_1179_; uint8_t v___x_1200_; 
v___x_1179_ = 1;
v___x_1200_ = lean_uint32_dec_le(v___x_1177_, v_curr_1176_);
if (v___x_1200_ == 0)
{
goto v___jp_1180_;
}
else
{
uint32_t v___x_1201_; uint8_t v___x_1202_; 
v___x_1201_ = 57;
v___x_1202_ = lean_uint32_dec_le(v_curr_1176_, v___x_1201_);
if (v___x_1202_ == 0)
{
goto v___jp_1180_;
}
else
{
lean_object* v___x_1203_; lean_object* v___x_1204_; 
lean_inc(v_pos_1160_);
v___x_1203_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1159_, v_c_1158_, v_pos_1160_);
v___x_1204_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn(v_pos_1160_, v_c_1158_, v___x_1203_);
return v___x_1204_;
}
}
v___jp_1180_:
{
uint32_t v___x_1181_; uint8_t v___x_1182_; 
v___x_1181_ = 43;
v___x_1182_ = lean_uint32_dec_eq(v_curr_1176_, v___x_1181_);
if (v___x_1182_ == 0)
{
uint32_t v___x_1183_; uint8_t v___x_1184_; 
v___x_1183_ = 45;
v___x_1184_ = lean_uint32_dec_eq(v_curr_1176_, v___x_1183_);
if (v___x_1184_ == 0)
{
uint32_t v___x_1185_; uint8_t v___x_1186_; 
v___x_1185_ = 105;
v___x_1186_ = lean_uint32_dec_eq(v_curr_1176_, v___x_1185_);
if (v___x_1186_ == 0)
{
uint32_t v___x_1187_; uint8_t v___x_1188_; 
v___x_1187_ = 110;
v___x_1188_ = lean_uint32_dec_eq(v_curr_1176_, v___x_1187_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
lean_dec_ref(v_c_1158_);
v___x_1189_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__2));
v___x_1190_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__3));
v___x_1191_ = lean_string_push(v___x_1190_, v_curr_1176_);
v___x_1192_ = lean_string_append(v___x_1189_, v___x_1191_);
lean_dec_ref(v___x_1191_);
v___x_1193_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__4));
v___x_1194_ = lean_string_append(v___x_1192_, v___x_1193_);
v___x_1195_ = l_Lean_Parser_ParserState_mkUnexpectedError(v_s_1159_, v___x_1194_, v_expected_1173_, v___x_1179_);
return v___x_1195_;
}
else
{
lean_object* v___x_1196_; lean_object* v___x_1197_; 
lean_inc(v_pos_1160_);
v___x_1196_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1159_, v_c_1158_, v_pos_1160_);
v___x_1197_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_nanAuxFn(v_pos_1160_, v_c_1158_, v___x_1196_);
return v___x_1197_;
}
}
else
{
lean_object* v___x_1198_; lean_object* v___x_1199_; 
lean_inc(v_pos_1160_);
v___x_1198_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1159_, v_c_1158_, v_pos_1160_);
v___x_1199_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_infAuxFn(v_pos_1160_, v_c_1158_, v___x_1198_);
return v___x_1199_;
}
}
else
{
lean_inc(v_pos_1160_);
goto v___jp_1161_;
}
}
else
{
lean_inc(v_pos_1160_);
goto v___jp_1161_;
}
}
}
else
{
lean_object* v_s_1205_; lean_object* v_pos_1206_; uint8_t v___x_1207_; 
lean_inc(v_pos_1160_);
v_s_1205_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1159_, v_c_1158_, v_pos_1160_);
v_pos_1206_ = lean_ctor_get(v_s_1205_, 2);
lean_inc(v_pos_1206_);
lean_inc_ref(v_toInputContext_1172_);
v___x_1207_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1172_, v_pos_1206_);
if (v___x_1207_ == 0)
{
uint32_t v_curr_1208_; uint32_t v___x_1212_; uint8_t v___x_1213_; 
v_curr_1208_ = lean_string_utf8_get_fast(v_inputString_1175_, v_pos_1206_);
v___x_1212_ = 98;
v___x_1213_ = lean_uint32_dec_eq(v_curr_1208_, v___x_1212_);
if (v___x_1213_ == 0)
{
uint32_t v___x_1214_; uint8_t v___x_1215_; 
v___x_1214_ = 111;
v___x_1215_ = lean_uint32_dec_eq(v_curr_1208_, v___x_1214_);
if (v___x_1215_ == 0)
{
uint32_t v___x_1216_; uint8_t v___x_1217_; 
v___x_1216_ = 120;
v___x_1217_ = lean_uint32_dec_eq(v_curr_1208_, v___x_1216_);
if (v___x_1217_ == 0)
{
uint8_t v___x_1218_; 
v___x_1218_ = lean_uint32_dec_le(v___x_1177_, v_curr_1208_);
if (v___x_1218_ == 0)
{
goto v___jp_1209_;
}
else
{
uint32_t v___x_1219_; uint8_t v___x_1220_; 
v___x_1219_ = 57;
v___x_1220_ = lean_uint32_dec_le(v_curr_1208_, v___x_1219_);
if (v___x_1220_ == 0)
{
goto v___jp_1209_;
}
else
{
lean_object* v_s_1221_; uint32_t v___x_1222_; lean_object* v___x_1223_; lean_object* v_s_1224_; lean_object* v_errorMsg_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
lean_inc(v_pos_1206_);
v_s_1221_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1205_, v_c_1158_, v_pos_1206_);
lean_dec(v_pos_1206_);
v___x_1222_ = 58;
v___x_1223_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_hourMinFn___closed__3));
lean_inc_ref(v_c_1158_);
v_s_1224_ = l_Lake_Toml_chFn(v___x_1222_, v___x_1223_, v_c_1158_, v_s_1221_);
v_errorMsg_1225_ = lean_ctor_get(v_s_1224_, 4);
v___x_1226_ = lean_box(0);
v___x_1227_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1225_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_inc(v_errorMsg_1225_);
v___y_1165_ = v_s_1224_;
v_errorMsg_1166_ = v_errorMsg_1225_;
goto v___jp_1164_;
}
else
{
lean_object* v___x_1228_; lean_object* v_errorMsg_1229_; 
lean_inc_ref(v_c_1158_);
v___x_1228_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_timeAuxFn(v___x_1217_, v_c_1158_, v_s_1224_);
v_errorMsg_1229_ = lean_ctor_get(v___x_1228_, 4);
lean_inc(v_errorMsg_1229_);
v___y_1165_ = v___x_1228_;
v_errorMsg_1166_ = v_errorMsg_1229_;
goto v___jp_1164_;
}
}
}
}
else
{
lean_object* v_s_1230_; lean_object* v___x_1231_; uint32_t v___x_1232_; lean_object* v___x_1233_; lean_object* v_s_1234_; lean_object* v_errorMsg_1235_; lean_object* v___x_1236_; uint8_t v___x_1237_; 
lean_inc(v_pos_1206_);
v_s_1230_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1205_, v_c_1158_, v_pos_1206_);
lean_dec(v_pos_1206_);
v___x_1231_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__5));
v___x_1232_ = 95;
v___x_1233_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__7));
lean_inc_ref(v_c_1158_);
v_s_1234_ = l_Lake_Toml_sepByChar1Fn(v___x_1231_, v___x_1232_, v___x_1233_, v_c_1158_, v_s_1230_);
v_errorMsg_1235_ = lean_ctor_get(v_s_1234_, 4);
v___x_1236_ = lean_box(0);
v___x_1237_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1235_, v___x_1236_);
if (v___x_1237_ == 0)
{
lean_dec(v_pos_1160_);
lean_dec_ref(v_c_1158_);
return v_s_1234_;
}
else
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; 
v___x_1238_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__9));
v___x_1239_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1240_ = l_Lake_Toml_pushLit(v___x_1238_, v_pos_1160_, v___x_1239_, v_c_1158_, v_s_1234_);
return v___x_1240_;
}
}
}
else
{
lean_object* v_s_1241_; lean_object* v___x_1242_; uint32_t v___x_1243_; lean_object* v___x_1244_; lean_object* v_s_1245_; lean_object* v_errorMsg_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
lean_inc(v_pos_1206_);
v_s_1241_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1205_, v_c_1158_, v_pos_1206_);
lean_dec(v_pos_1206_);
v___x_1242_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__10));
v___x_1243_ = 95;
v___x_1244_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__12));
lean_inc_ref(v_c_1158_);
v_s_1245_ = l_Lake_Toml_sepByChar1Fn(v___x_1242_, v___x_1243_, v___x_1244_, v_c_1158_, v_s_1241_);
v_errorMsg_1246_ = lean_ctor_get(v_s_1245_, 4);
v___x_1247_ = lean_box(0);
v___x_1248_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1246_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_dec(v_pos_1160_);
lean_dec_ref(v_c_1158_);
return v_s_1245_;
}
else
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__14));
v___x_1250_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1251_ = l_Lake_Toml_pushLit(v___x_1249_, v_pos_1160_, v___x_1250_, v_c_1158_, v_s_1245_);
return v___x_1251_;
}
}
}
else
{
lean_object* v_s_1252_; lean_object* v___x_1253_; uint32_t v___x_1254_; lean_object* v___x_1255_; lean_object* v_s_1256_; lean_object* v_errorMsg_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
lean_inc(v_pos_1206_);
v_s_1252_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1205_, v_c_1158_, v_pos_1206_);
lean_dec(v_pos_1206_);
v___x_1253_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__15));
v___x_1254_ = 95;
v___x_1255_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__17));
lean_inc_ref(v_c_1158_);
v_s_1256_ = l_Lake_Toml_sepByChar1Fn(v___x_1253_, v___x_1254_, v___x_1255_, v_c_1158_, v_s_1252_);
v_errorMsg_1257_ = lean_ctor_get(v_s_1256_, 4);
v___x_1258_ = lean_box(0);
v___x_1259_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v_pos_1160_);
lean_dec_ref(v_c_1158_);
return v_s_1256_;
}
else
{
lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
v___x_1260_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__19));
v___x_1261_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1262_ = l_Lake_Toml_pushLit(v___x_1260_, v_pos_1160_, v___x_1261_, v_c_1158_, v_s_1256_);
return v___x_1262_;
}
}
v___jp_1209_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___x_1210_ = lean_string_utf8_next_fast(v_inputString_1175_, v_pos_1206_);
v___x_1211_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn(v_pos_1160_, v_curr_1208_, v___x_1210_, v_c_1158_, v_s_1205_);
return v___x_1211_;
}
}
else
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
v___x_1263_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1264_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1265_ = l_Lake_Toml_pushLit(v___x_1263_, v_pos_1160_, v___x_1264_, v_c_1158_, v_s_1205_);
return v___x_1265_;
}
}
}
else
{
lean_object* v___x_1266_; 
lean_dec_ref(v_c_1158_);
v___x_1266_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1159_, v_expected_1173_);
return v___x_1266_;
}
v___jp_1161_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1162_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1159_, v_c_1158_, v_pos_1160_);
v___x_1163_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_decimalFn(v_pos_1160_, v_c_1158_, v___x_1162_);
return v___x_1163_;
}
v___jp_1164_:
{
lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1167_ = lean_box(0);
v___x_1168_ = l_instBEqOption_beq___at___00Lake_Toml_commentFn_spec__0(v_errorMsg_1166_, v___x_1167_);
lean_dec(v_errorMsg_1166_);
if (v___x_1168_ == 0)
{
lean_dec(v_pos_1160_);
lean_dec_ref(v_c_1158_);
return v___y_1165_;
}
else
{
lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; 
v___x_1169_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1170_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1171_ = l_Lake_Toml_pushLit(v___x_1169_, v_pos_1160_, v___x_1170_, v_c_1158_, v___y_1165_);
return v___x_1171_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralFn(lean_object* v_a_1268_, lean_object* v_a_1269_){
_start:
{
lean_object* v___f_1270_; lean_object* v___x_1271_; 
v___f_1270_ = ((lean_object*)(l_Lake_Toml_numeralFn___closed__0));
v___x_1271_ = l_Lean_Parser_atomicFn(v___f_1270_, v_a_1268_, v_a_1269_);
return v___x_1271_;
}
}
static lean_object* _init_l_Lake_Toml_trailingWs___closed__0(void){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = lean_alloc_closure((void*)(l_Lake_Toml_wsFn), 2, 0);
v___x_1273_ = l_Lake_Toml_trailing(v___x_1272_);
return v___x_1273_;
}
}
static lean_object* _init_l_Lake_Toml_trailingWs(void){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = lean_obj_once(&l_Lake_Toml_trailingWs___closed__0, &l_Lake_Toml_trailingWs___closed__0_once, _init_l_Lake_Toml_trailingWs___closed__0);
return v___x_1274_;
}
}
static lean_object* _init_l_Lake_Toml_trailingSep___closed__1(void){
_start:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; 
v___x_1276_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1277_ = l_Lake_Toml_trailing(v___x_1276_);
return v___x_1277_;
}
}
static lean_object* _init_l_Lake_Toml_trailingSep(void){
_start:
{
lean_object* v___x_1278_; 
v___x_1278_ = lean_obj_once(&l_Lake_Toml_trailingSep___closed__1, &l_Lake_Toml_trailingSep___closed__1_once, _init_l_Lake_Toml_trailingSep___closed__1);
return v___x_1278_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_unquotedKeyFn___lam__0(uint32_t v_c_1279_){
_start:
{
uint32_t v___x_1295_; uint8_t v___x_1296_; 
v___x_1295_ = 65;
v___x_1296_ = lean_uint32_dec_le(v___x_1295_, v_c_1279_);
if (v___x_1296_ == 0)
{
goto v___jp_1290_;
}
else
{
uint32_t v___x_1297_; uint8_t v___x_1298_; 
v___x_1297_ = 90;
v___x_1298_ = lean_uint32_dec_le(v_c_1279_, v___x_1297_);
if (v___x_1298_ == 0)
{
goto v___jp_1290_;
}
else
{
return v___x_1298_;
}
}
v___jp_1280_:
{
uint32_t v___x_1281_; uint8_t v___x_1282_; 
v___x_1281_ = 95;
v___x_1282_ = lean_uint32_dec_eq(v_c_1279_, v___x_1281_);
if (v___x_1282_ == 0)
{
uint32_t v___x_1283_; uint8_t v___x_1284_; 
v___x_1283_ = 45;
v___x_1284_ = lean_uint32_dec_eq(v_c_1279_, v___x_1283_);
return v___x_1284_;
}
else
{
return v___x_1282_;
}
}
v___jp_1285_:
{
uint32_t v___x_1286_; uint8_t v___x_1287_; 
v___x_1286_ = 48;
v___x_1287_ = lean_uint32_dec_le(v___x_1286_, v_c_1279_);
if (v___x_1287_ == 0)
{
goto v___jp_1280_;
}
else
{
uint32_t v___x_1288_; uint8_t v___x_1289_; 
v___x_1288_ = 57;
v___x_1289_ = lean_uint32_dec_le(v_c_1279_, v___x_1288_);
if (v___x_1289_ == 0)
{
goto v___jp_1280_;
}
else
{
return v___x_1289_;
}
}
}
v___jp_1290_:
{
uint32_t v___x_1291_; uint8_t v___x_1292_; 
v___x_1291_ = 97;
v___x_1292_ = lean_uint32_dec_le(v___x_1291_, v_c_1279_);
if (v___x_1292_ == 0)
{
goto v___jp_1285_;
}
else
{
uint32_t v___x_1293_; uint8_t v___x_1294_; 
v___x_1293_ = 122;
v___x_1294_ = lean_uint32_dec_le(v_c_1279_, v___x_1293_);
if (v___x_1294_ == 0)
{
goto v___jp_1285_;
}
else
{
return v___x_1294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn___lam__0___boxed(lean_object* v_c_1299_){
_start:
{
uint32_t v_c_boxed_1300_; uint8_t v_res_1301_; lean_object* v_r_1302_; 
v_c_boxed_1300_ = lean_unbox_uint32(v_c_1299_);
lean_dec(v_c_1299_);
v_res_1301_ = l_Lake_Toml_unquotedKeyFn___lam__0(v_c_boxed_1300_);
v_r_1302_ = lean_box(v_res_1301_);
return v_r_1302_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKeyFn(lean_object* v_a_1308_, lean_object* v_a_1309_){
_start:
{
lean_object* v___f_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___f_1310_ = ((lean_object*)(l_Lake_Toml_unquotedKeyFn___closed__0));
v___x_1311_ = ((lean_object*)(l_Lake_Toml_unquotedKeyFn___closed__2));
v___x_1312_ = l_Lake_Toml_takeWhile1Fn(v___f_1310_, v___x_1311_, v_a_1308_, v_a_1309_);
return v___x_1312_;
}
}
static lean_object* _init_l_Lake_Toml_unquotedKey___closed__2(void){
_start:
{
uint8_t v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; 
v___x_1318_ = 0;
v___x_1319_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1320_ = lean_alloc_closure((void*)(l_Lake_Toml_unquotedKeyFn), 2, 0);
v___x_1321_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__1));
v___x_1322_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__0));
v___x_1323_ = l_Lake_Toml_litWithAntiquot(v___x_1322_, v___x_1321_, v___x_1320_, v___x_1319_, v___x_1318_);
return v___x_1323_;
}
}
static lean_object* _init_l_Lake_Toml_unquotedKey(void){
_start:
{
lean_object* v___x_1324_; 
v___x_1324_ = lean_obj_once(&l_Lake_Toml_unquotedKey___closed__2, &l_Lake_Toml_unquotedKey___closed__2_once, _init_l_Lake_Toml_unquotedKey___closed__2);
return v___x_1324_;
}
}
static lean_object* _init_l_Lake_Toml_basicString___closed__2(void){
_start:
{
uint8_t v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; 
v___x_1330_ = 0;
v___x_1331_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1332_ = lean_alloc_closure((void*)(l_Lake_Toml_basicStringFn), 2, 0);
v___x_1333_ = ((lean_object*)(l_Lake_Toml_basicString___closed__1));
v___x_1334_ = ((lean_object*)(l_Lake_Toml_basicString___closed__0));
v___x_1335_ = l_Lake_Toml_litWithAntiquot(v___x_1334_, v___x_1333_, v___x_1332_, v___x_1331_, v___x_1330_);
return v___x_1335_;
}
}
static lean_object* _init_l_Lake_Toml_basicString(void){
_start:
{
lean_object* v___x_1336_; 
v___x_1336_ = lean_obj_once(&l_Lake_Toml_basicString___closed__2, &l_Lake_Toml_basicString___closed__2_once, _init_l_Lake_Toml_basicString___closed__2);
return v___x_1336_;
}
}
static lean_object* _init_l_Lake_Toml_literalString___closed__2(void){
_start:
{
uint8_t v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1342_ = 0;
v___x_1343_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1344_ = lean_alloc_closure((void*)(l_Lake_Toml_literalStringFn), 2, 0);
v___x_1345_ = ((lean_object*)(l_Lake_Toml_literalString___closed__1));
v___x_1346_ = ((lean_object*)(l_Lake_Toml_literalString___closed__0));
v___x_1347_ = l_Lake_Toml_litWithAntiquot(v___x_1346_, v___x_1345_, v___x_1344_, v___x_1343_, v___x_1342_);
return v___x_1347_;
}
}
static lean_object* _init_l_Lake_Toml_literalString(void){
_start:
{
lean_object* v___x_1348_; 
v___x_1348_ = lean_obj_once(&l_Lake_Toml_literalString___closed__2, &l_Lake_Toml_literalString___closed__2_once, _init_l_Lake_Toml_literalString___closed__2);
return v___x_1348_;
}
}
static lean_object* _init_l_Lake_Toml_mlBasicString___closed__2(void){
_start:
{
uint8_t v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1354_ = 0;
v___x_1355_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1356_ = lean_alloc_closure((void*)(l_Lake_Toml_mlBasicStringFn), 2, 0);
v___x_1357_ = ((lean_object*)(l_Lake_Toml_mlBasicString___closed__1));
v___x_1358_ = ((lean_object*)(l_Lake_Toml_mlBasicString___closed__0));
v___x_1359_ = l_Lake_Toml_litWithAntiquot(v___x_1358_, v___x_1357_, v___x_1356_, v___x_1355_, v___x_1354_);
return v___x_1359_;
}
}
static lean_object* _init_l_Lake_Toml_mlBasicString(void){
_start:
{
lean_object* v___x_1360_; 
v___x_1360_ = lean_obj_once(&l_Lake_Toml_mlBasicString___closed__2, &l_Lake_Toml_mlBasicString___closed__2_once, _init_l_Lake_Toml_mlBasicString___closed__2);
return v___x_1360_;
}
}
static lean_object* _init_l_Lake_Toml_mlLiteralString___closed__2(void){
_start:
{
uint8_t v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v___x_1366_ = 0;
v___x_1367_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1368_ = lean_alloc_closure((void*)(l_Lake_Toml_mlLiteralStringFn), 2, 0);
v___x_1369_ = ((lean_object*)(l_Lake_Toml_mlLiteralString___closed__1));
v___x_1370_ = ((lean_object*)(l_Lake_Toml_mlLiteralString___closed__0));
v___x_1371_ = l_Lake_Toml_litWithAntiquot(v___x_1370_, v___x_1369_, v___x_1368_, v___x_1367_, v___x_1366_);
return v___x_1371_;
}
}
static lean_object* _init_l_Lake_Toml_mlLiteralString(void){
_start:
{
lean_object* v___x_1372_; 
v___x_1372_ = lean_obj_once(&l_Lake_Toml_mlLiteralString___closed__2, &l_Lake_Toml_mlLiteralString___closed__2_once, _init_l_Lake_Toml_mlLiteralString___closed__2);
return v___x_1372_;
}
}
static lean_object* _init_l_Lake_Toml_quotedKey___closed__0(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1373_ = l_Lake_Toml_literalString;
v___x_1374_ = l_Lake_Toml_basicString;
v___x_1375_ = l_Lean_Parser_orelse(v___x_1374_, v___x_1373_);
return v___x_1375_;
}
}
static lean_object* _init_l_Lake_Toml_quotedKey(void){
_start:
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_obj_once(&l_Lake_Toml_quotedKey___closed__0, &l_Lake_Toml_quotedKey___closed__0_once, _init_l_Lake_Toml_quotedKey___closed__0);
return v___x_1376_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey___closed__2(void){
_start:
{
lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
v___x_1382_ = l_Lake_Toml_quotedKey;
v___x_1383_ = l_Lake_Toml_unquotedKey;
v___x_1384_ = l_Lean_Parser_orelse(v___x_1383_, v___x_1382_);
return v___x_1384_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey___closed__3(void){
_start:
{
uint8_t v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; 
v___x_1385_ = 1;
v___x_1386_ = lean_obj_once(&l_Lake_Toml_simpleKey___closed__2, &l_Lake_Toml_simpleKey___closed__2_once, _init_l_Lake_Toml_simpleKey___closed__2);
v___x_1387_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__1));
v___x_1388_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__0));
v___x_1389_ = l_Lean_Parser_nodeWithAntiquot(v___x_1388_, v___x_1387_, v___x_1386_, v___x_1385_);
return v___x_1389_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey(void){
_start:
{
lean_object* v___x_1390_; 
v___x_1390_ = lean_obj_once(&l_Lake_Toml_simpleKey___closed__3, &l_Lake_Toml_simpleKey___closed__3_once, _init_l_Lake_Toml_simpleKey___closed__3);
return v___x_1390_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__6(void){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; uint32_t v___x_1406_; lean_object* v___x_1407_; 
v___x_1404_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1405_ = ((lean_object*)(l_Lake_Toml_key___closed__5));
v___x_1406_ = 46;
v___x_1407_ = l_Lake_Toml_chAtom(v___x_1406_, v___x_1405_, v___x_1404_);
return v___x_1407_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__7(void){
_start:
{
lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v___x_1408_ = l_Lake_Toml_trailingWs;
v___x_1409_ = lean_obj_once(&l_Lake_Toml_key___closed__6, &l_Lake_Toml_key___closed__6_once, _init_l_Lake_Toml_key___closed__6);
v___x_1410_ = l_Lean_Parser_andthen(v___x_1409_, v___x_1408_);
return v___x_1410_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__8(void){
_start:
{
lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1411_ = lean_obj_once(&l_Lake_Toml_key___closed__7, &l_Lake_Toml_key___closed__7_once, _init_l_Lake_Toml_key___closed__7);
v___x_1412_ = l_Lake_Toml_trailingWs;
v___x_1413_ = l_Lean_Parser_andthen(v___x_1412_, v___x_1411_);
return v___x_1413_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__9(void){
_start:
{
uint8_t v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; 
v___x_1414_ = 0;
v___x_1415_ = lean_obj_once(&l_Lake_Toml_key___closed__8, &l_Lake_Toml_key___closed__8_once, _init_l_Lake_Toml_key___closed__8);
v___x_1416_ = ((lean_object*)(l_Lake_Toml_key___closed__3));
v___x_1417_ = l_Lake_Toml_simpleKey;
v___x_1418_ = l_Lean_Parser_sepBy1(v___x_1417_, v___x_1416_, v___x_1415_, v___x_1414_);
return v___x_1418_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__10(void){
_start:
{
lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1419_ = lean_obj_once(&l_Lake_Toml_key___closed__9, &l_Lake_Toml_key___closed__9_once, _init_l_Lake_Toml_key___closed__9);
v___x_1420_ = ((lean_object*)(l_Lake_Toml_key___closed__2));
v___x_1421_ = l_Lean_Parser_setExpected(v___x_1420_, v___x_1419_);
return v___x_1421_;
}
}
static lean_object* _init_l_Lake_Toml_key___closed__11(void){
_start:
{
uint8_t v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1422_ = 1;
v___x_1423_ = lean_obj_once(&l_Lake_Toml_key___closed__10, &l_Lake_Toml_key___closed__10_once, _init_l_Lake_Toml_key___closed__10);
v___x_1424_ = ((lean_object*)(l_Lake_Toml_key___closed__1));
v___x_1425_ = ((lean_object*)(l_Lake_Toml_key___closed__0));
v___x_1426_ = l_Lean_Parser_nodeWithAntiquot(v___x_1425_, v___x_1424_, v___x_1423_, v___x_1422_);
return v___x_1426_;
}
}
static lean_object* _init_l_Lake_Toml_key(void){
_start:
{
lean_object* v___x_1427_; 
v___x_1427_ = lean_obj_once(&l_Lake_Toml_key___closed__11, &l_Lake_Toml_key___closed__11_once, _init_l_Lake_Toml_key___closed__11);
return v___x_1427_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__4(void){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; uint32_t v___x_1439_; lean_object* v___x_1440_; 
v___x_1437_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1438_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__3));
v___x_1439_ = 91;
v___x_1440_ = l_Lake_Toml_chAtom(v___x_1439_, v___x_1438_, v___x_1437_);
return v___x_1440_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__7(void){
_start:
{
lean_object* v___x_1445_; lean_object* v___x_1446_; uint32_t v___x_1447_; lean_object* v___x_1448_; 
v___x_1445_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1446_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__6));
v___x_1447_ = 91;
v___x_1448_ = l_Lake_Toml_chAtom(v___x_1447_, v___x_1446_, v___x_1445_);
return v___x_1448_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__8(void){
_start:
{
lean_object* v___x_1449_; lean_object* v___x_1450_; lean_object* v___x_1451_; 
v___x_1449_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__5));
v___x_1450_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__7, &l_Lake_Toml_stdTable___closed__7_once, _init_l_Lake_Toml_stdTable___closed__7);
v___x_1451_ = l_Lean_Parser_notFollowedBy(v___x_1450_, v___x_1449_);
return v___x_1451_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__9(void){
_start:
{
lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; 
v___x_1452_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__8, &l_Lake_Toml_stdTable___closed__8_once, _init_l_Lake_Toml_stdTable___closed__8);
v___x_1453_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__4, &l_Lake_Toml_stdTable___closed__4_once, _init_l_Lake_Toml_stdTable___closed__4);
v___x_1454_ = l_Lean_Parser_andthen(v___x_1453_, v___x_1452_);
return v___x_1454_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__10(void){
_start:
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1455_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__9, &l_Lake_Toml_stdTable___closed__9_once, _init_l_Lake_Toml_stdTable___closed__9);
v___x_1456_ = l_Lean_Parser_atomic(v___x_1455_);
return v___x_1456_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__13(void){
_start:
{
lean_object* v___x_1461_; lean_object* v___x_1462_; uint32_t v___x_1463_; lean_object* v___x_1464_; 
v___x_1461_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1462_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__12));
v___x_1463_ = 93;
v___x_1464_ = l_Lake_Toml_chAtom(v___x_1463_, v___x_1462_, v___x_1461_);
return v___x_1464_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__14(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__13, &l_Lake_Toml_stdTable___closed__13_once, _init_l_Lake_Toml_stdTable___closed__13);
v___x_1466_ = l_Lake_Toml_trailingWs;
v___x_1467_ = l_Lean_Parser_andthen(v___x_1466_, v___x_1465_);
return v___x_1467_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__15(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; 
v___x_1468_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__14, &l_Lake_Toml_stdTable___closed__14_once, _init_l_Lake_Toml_stdTable___closed__14);
v___x_1469_ = l_Lake_Toml_key;
v___x_1470_ = l_Lean_Parser_andthen(v___x_1469_, v___x_1468_);
return v___x_1470_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__16(void){
_start:
{
lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; 
v___x_1471_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__15, &l_Lake_Toml_stdTable___closed__15_once, _init_l_Lake_Toml_stdTable___closed__15);
v___x_1472_ = l_Lake_Toml_trailingWs;
v___x_1473_ = l_Lean_Parser_andthen(v___x_1472_, v___x_1471_);
return v___x_1473_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__17(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1474_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__16, &l_Lake_Toml_stdTable___closed__16_once, _init_l_Lake_Toml_stdTable___closed__16);
v___x_1475_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__10, &l_Lake_Toml_stdTable___closed__10_once, _init_l_Lake_Toml_stdTable___closed__10);
v___x_1476_ = l_Lean_Parser_andthen(v___x_1475_, v___x_1474_);
return v___x_1476_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable___closed__18(void){
_start:
{
uint8_t v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1477_ = 0;
v___x_1478_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__17, &l_Lake_Toml_stdTable___closed__17_once, _init_l_Lake_Toml_stdTable___closed__17);
v___x_1479_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__1));
v___x_1480_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__0));
v___x_1481_ = l_Lean_Parser_nodeWithAntiquot(v___x_1480_, v___x_1479_, v___x_1478_, v___x_1477_);
return v___x_1481_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable(void){
_start:
{
lean_object* v___x_1482_; 
v___x_1482_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__18, &l_Lake_Toml_stdTable___closed__18_once, _init_l_Lake_Toml_stdTable___closed__18);
return v___x_1482_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__2(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
v___x_1488_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__7, &l_Lake_Toml_stdTable___closed__7_once, _init_l_Lake_Toml_stdTable___closed__7);
v___x_1489_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__4, &l_Lake_Toml_stdTable___closed__4_once, _init_l_Lake_Toml_stdTable___closed__4);
v___x_1490_ = l_Lean_Parser_andthen(v___x_1489_, v___x_1488_);
return v___x_1490_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__3(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1491_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__2, &l_Lake_Toml_arrayTable___closed__2_once, _init_l_Lake_Toml_arrayTable___closed__2);
v___x_1492_ = l_Lean_Parser_atomic(v___x_1491_);
return v___x_1492_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__4(void){
_start:
{
lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1493_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__13, &l_Lake_Toml_stdTable___closed__13_once, _init_l_Lake_Toml_stdTable___closed__13);
v___x_1494_ = l_Lean_Parser_andthen(v___x_1493_, v___x_1493_);
return v___x_1494_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__5(void){
_start:
{
lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; 
v___x_1495_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__4, &l_Lake_Toml_arrayTable___closed__4_once, _init_l_Lake_Toml_arrayTable___closed__4);
v___x_1496_ = l_Lake_Toml_trailingWs;
v___x_1497_ = l_Lean_Parser_andthen(v___x_1496_, v___x_1495_);
return v___x_1497_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__6(void){
_start:
{
lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1498_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__5, &l_Lake_Toml_arrayTable___closed__5_once, _init_l_Lake_Toml_arrayTable___closed__5);
v___x_1499_ = l_Lake_Toml_key;
v___x_1500_ = l_Lean_Parser_andthen(v___x_1499_, v___x_1498_);
return v___x_1500_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__7(void){
_start:
{
lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; 
v___x_1501_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__6, &l_Lake_Toml_arrayTable___closed__6_once, _init_l_Lake_Toml_arrayTable___closed__6);
v___x_1502_ = l_Lake_Toml_trailingWs;
v___x_1503_ = l_Lean_Parser_andthen(v___x_1502_, v___x_1501_);
return v___x_1503_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__8(void){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1504_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__7, &l_Lake_Toml_arrayTable___closed__7_once, _init_l_Lake_Toml_arrayTable___closed__7);
v___x_1505_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__3, &l_Lake_Toml_arrayTable___closed__3_once, _init_l_Lake_Toml_arrayTable___closed__3);
v___x_1506_ = l_Lean_Parser_andthen(v___x_1505_, v___x_1504_);
return v___x_1506_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable___closed__9(void){
_start:
{
uint8_t v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1507_ = 0;
v___x_1508_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__8, &l_Lake_Toml_arrayTable___closed__8_once, _init_l_Lake_Toml_arrayTable___closed__8);
v___x_1509_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__1));
v___x_1510_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__0));
v___x_1511_ = l_Lean_Parser_nodeWithAntiquot(v___x_1510_, v___x_1509_, v___x_1508_, v___x_1507_);
return v___x_1511_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable(void){
_start:
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_obj_once(&l_Lake_Toml_arrayTable___closed__9, &l_Lake_Toml_arrayTable___closed__9_once, _init_l_Lake_Toml_arrayTable___closed__9);
return v___x_1512_;
}
}
static lean_object* _init_l_Lake_Toml_table___closed__0(void){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1513_ = l_Lake_Toml_arrayTable;
v___x_1514_ = l_Lake_Toml_stdTable;
v___x_1515_ = l_Lean_Parser_orelse(v___x_1514_, v___x_1513_);
return v___x_1515_;
}
}
static lean_object* _init_l_Lake_Toml_table(void){
_start:
{
lean_object* v___x_1516_; 
v___x_1516_ = lean_obj_once(&l_Lake_Toml_table___closed__0, &l_Lake_Toml_table___closed__0_once, _init_l_Lake_Toml_table___closed__0);
return v___x_1516_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4(void){
_start:
{
lean_object* v___x_1526_; lean_object* v___x_1527_; uint32_t v___x_1528_; lean_object* v___x_1529_; 
v___x_1526_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1527_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3));
v___x_1528_ = 61;
v___x_1529_ = l_Lake_Toml_chAtom(v___x_1528_, v___x_1527_, v___x_1526_);
return v___x_1529_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(lean_object* v_val_1530_){
_start:
{
lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; uint8_t v___x_1540_; lean_object* v___x_1541_; 
v___x_1531_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0));
v___x_1532_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1));
v___x_1533_ = l_Lake_Toml_key;
v___x_1534_ = l_Lake_Toml_trailingWs;
v___x_1535_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4, &l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__4);
v___x_1536_ = l_Lean_Parser_andthen(v___x_1534_, v_val_1530_);
v___x_1537_ = l_Lean_Parser_andthen(v___x_1535_, v___x_1536_);
v___x_1538_ = l_Lean_Parser_andthen(v___x_1534_, v___x_1537_);
v___x_1539_ = l_Lean_Parser_andthen(v___x_1533_, v___x_1538_);
v___x_1540_ = 1;
v___x_1541_ = l_Lean_Parser_nodeWithAntiquot(v___x_1531_, v___x_1532_, v___x_1539_, v___x_1540_);
return v___x_1541_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2(void){
_start:
{
uint8_t v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; 
v___x_1547_ = 1;
v___x_1548_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__1));
v___x_1549_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__0));
v___x_1550_ = l_Lean_Parser_mkAntiquot(v___x_1549_, v___x_1548_, v___x_1547_, v___x_1547_);
return v___x_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(lean_object* v_val_1551_){
_start:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1552_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2, &l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore___closed__2);
v___x_1553_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(v_val_1551_);
v___x_1554_ = l_Lake_Toml_table;
v___x_1555_ = l_Lean_Parser_orelse(v___x_1553_, v___x_1554_);
v___x_1556_ = l_Lean_Parser_withAntiquot(v___x_1552_, v___x_1555_);
return v___x_1556_;
}
}
static lean_object* _init_l_Lake_Toml_header___closed__2(void){
_start:
{
uint8_t v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
v___x_1562_ = 0;
v___x_1563_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1564_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1565_ = ((lean_object*)(l_Lake_Toml_header___closed__1));
v___x_1566_ = ((lean_object*)(l_Lake_Toml_header___closed__0));
v___x_1567_ = l_Lake_Toml_litWithAntiquot(v___x_1566_, v___x_1565_, v___x_1564_, v___x_1563_, v___x_1562_);
return v___x_1567_;
}
}
static lean_object* _init_l_Lake_Toml_header(void){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = lean_obj_once(&l_Lake_Toml_header___closed__2, &l_Lake_Toml_header___closed__2_once, _init_l_Lake_Toml_header___closed__2);
return v___x_1568_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5(void){
_start:
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1578_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__4));
v___x_1579_ = l_Lean_Parser_symbol(v___x_1578_);
return v___x_1579_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7(void){
_start:
{
lean_object* v___x_1581_; lean_object* v___x_1582_; 
v___x_1581_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__6));
v___x_1582_ = l_Lean_Parser_checkLinebreakBefore(v___x_1581_);
return v___x_1582_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8(void){
_start:
{
lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; 
v___x_1583_ = l_Lean_Parser_pushNone;
v___x_1584_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7, &l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__7);
v___x_1585_ = l_Lean_Parser_andthen(v___x_1584_, v___x_1583_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore(lean_object* v_val_1586_){
_start:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; uint8_t v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v_p_1596_; lean_object* v___x_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; 
v___x_1587_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0));
v___x_1588_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_1589_ = l_Lake_Toml_header;
v___x_1590_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(v_val_1586_);
v___x_1591_ = l_Lake_Toml_trailingSep;
v___x_1592_ = l_Lean_Parser_andthen(v___x_1590_, v___x_1591_);
v___x_1593_ = 1;
v___x_1594_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__3));
v___x_1595_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5, &l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__5);
v_p_1596_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1594_, v___x_1592_, v___x_1595_);
v___x_1597_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8, &l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__8);
v___x_1598_ = l_Lean_Parser_sepByNoAntiquot(v_p_1596_, v___x_1597_, v___x_1593_);
v___x_1599_ = l_Lean_Parser_andthen(v___x_1589_, v___x_1598_);
v___x_1600_ = l_Lean_Parser_nodeWithAntiquot(v___x_1587_, v___x_1588_, v___x_1599_, v___x_1593_);
return v___x_1600_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4(void){
_start:
{
lean_object* v___x_1610_; lean_object* v___x_1611_; uint32_t v___x_1612_; lean_object* v___x_1613_; 
v___x_1610_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1611_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__3));
v___x_1612_ = 123;
v___x_1613_ = l_Lake_Toml_chAtom(v___x_1612_, v___x_1611_, v___x_1610_);
return v___x_1613_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8(void){
_start:
{
lean_object* v___x_1619_; lean_object* v___x_1620_; uint32_t v___x_1621_; lean_object* v___x_1622_; 
v___x_1619_ = lean_alloc_closure((void*)(l_Lake_Toml_wsFn), 2, 0);
v___x_1620_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7));
v___x_1621_ = 44;
v___x_1622_ = l_Lake_Toml_chAtom(v___x_1621_, v___x_1620_, v___x_1619_);
return v___x_1622_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11(void){
_start:
{
lean_object* v___x_1627_; lean_object* v___x_1628_; uint32_t v___x_1629_; lean_object* v___x_1630_; 
v___x_1627_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1628_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__10));
v___x_1629_ = 125;
v___x_1630_ = l_Lake_Toml_chAtom(v___x_1629_, v___x_1628_, v___x_1627_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(lean_object* v_val_1631_){
_start:
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; uint8_t v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1632_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__0));
v___x_1633_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__1));
v___x_1634_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4, &l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__4);
v___x_1635_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(v_val_1631_);
v___x_1636_ = l_Lake_Toml_trailingWs;
v___x_1637_ = l_Lean_Parser_andthen(v___x_1635_, v___x_1636_);
v___x_1638_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5));
v___x_1639_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8, &l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__8);
v___x_1640_ = 0;
v___x_1641_ = l_Lean_Parser_sepBy(v___x_1637_, v___x_1638_, v___x_1639_, v___x_1640_);
v___x_1642_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11, &l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__11);
v___x_1643_ = l_Lean_Parser_andthen(v___x_1641_, v___x_1642_);
v___x_1644_ = l_Lean_Parser_andthen(v___x_1634_, v___x_1643_);
v___x_1645_ = l_Lean_Parser_nodeWithAntiquot(v___x_1632_, v___x_1633_, v___x_1644_, v___x_1640_);
return v___x_1645_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3(void){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; uint32_t v___x_1656_; lean_object* v___x_1657_; 
v___x_1654_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1655_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__2));
v___x_1656_ = 91;
v___x_1657_ = l_Lake_Toml_chAtom(v___x_1656_, v___x_1655_, v___x_1654_);
return v___x_1657_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4(void){
_start:
{
lean_object* v___x_1658_; lean_object* v___x_1659_; uint32_t v___x_1660_; lean_object* v___x_1661_; 
v___x_1658_ = ((lean_object*)(l_Lake_Toml_trailingSep___closed__0));
v___x_1659_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__7));
v___x_1660_ = 44;
v___x_1661_ = l_Lake_Toml_chAtom(v___x_1660_, v___x_1659_, v___x_1658_);
return v___x_1661_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(lean_object* v_val_1662_){
_start:
{
lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; uint8_t v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; uint8_t v___x_1675_; lean_object* v___x_1676_; 
v___x_1663_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__0));
v___x_1664_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__1));
v___x_1665_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3, &l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__3);
v___x_1666_ = l_Lake_Toml_trailingSep;
v___x_1667_ = l_Lean_Parser_andthen(v_val_1662_, v___x_1666_);
v___x_1668_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore___closed__5));
v___x_1669_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4, &l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore___closed__4);
v___x_1670_ = 1;
v___x_1671_ = l_Lean_Parser_sepBy(v___x_1667_, v___x_1668_, v___x_1669_, v___x_1670_);
v___x_1672_ = lean_obj_once(&l_Lake_Toml_stdTable___closed__13, &l_Lake_Toml_stdTable___closed__13_once, _init_l_Lake_Toml_stdTable___closed__13);
v___x_1673_ = l_Lean_Parser_andthen(v___x_1671_, v___x_1672_);
v___x_1674_ = l_Lean_Parser_andthen(v___x_1665_, v___x_1673_);
v___x_1675_ = 0;
v___x_1676_ = l_Lean_Parser_nodeWithAntiquot(v___x_1663_, v___x_1664_, v___x_1674_, v___x_1675_);
return v___x_1676_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__3(void){
_start:
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1685_ = l_Lake_Toml_literalString;
v___x_1686_ = l_Lake_Toml_mlLiteralString;
v___x_1687_ = l_Lean_Parser_orelse(v___x_1686_, v___x_1685_);
return v___x_1687_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__4(void){
_start:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; 
v___x_1688_ = lean_obj_once(&l_Lake_Toml_string___closed__3, &l_Lake_Toml_string___closed__3_once, _init_l_Lake_Toml_string___closed__3);
v___x_1689_ = l_Lake_Toml_basicString;
v___x_1690_ = l_Lean_Parser_orelse(v___x_1689_, v___x_1688_);
return v___x_1690_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__5(void){
_start:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1691_ = lean_obj_once(&l_Lake_Toml_string___closed__4, &l_Lake_Toml_string___closed__4_once, _init_l_Lake_Toml_string___closed__4);
v___x_1692_ = l_Lake_Toml_mlBasicString;
v___x_1693_ = l_Lean_Parser_orelse(v___x_1692_, v___x_1691_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__6(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = lean_obj_once(&l_Lake_Toml_string___closed__5, &l_Lake_Toml_string___closed__5_once, _init_l_Lake_Toml_string___closed__5);
v___x_1695_ = ((lean_object*)(l_Lake_Toml_string___closed__2));
v___x_1696_ = l_Lean_Parser_setExpected(v___x_1695_, v___x_1694_);
return v___x_1696_;
}
}
static lean_object* _init_l_Lake_Toml_string___closed__7(void){
_start:
{
uint8_t v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; 
v___x_1697_ = 0;
v___x_1698_ = lean_obj_once(&l_Lake_Toml_string___closed__6, &l_Lake_Toml_string___closed__6_once, _init_l_Lake_Toml_string___closed__6);
v___x_1699_ = ((lean_object*)(l_Lake_Toml_string___closed__1));
v___x_1700_ = ((lean_object*)(l_Lake_Toml_string___closed__0));
v___x_1701_ = l_Lean_Parser_nodeWithAntiquot(v___x_1700_, v___x_1699_, v___x_1698_, v___x_1697_);
return v___x_1701_;
}
}
static lean_object* _init_l_Lake_Toml_string(void){
_start:
{
lean_object* v___x_1702_; 
v___x_1702_ = lean_obj_once(&l_Lake_Toml_string___closed__7, &l_Lake_Toml_string___closed__7_once, _init_l_Lake_Toml_string___closed__7);
return v___x_1702_;
}
}
static lean_object* _init_l_Lake_Toml_true___closed__5(void){
_start:
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
v___x_1715_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1716_ = ((lean_object*)(l_Lake_Toml_true___closed__4));
v___x_1717_ = ((lean_object*)(l_Lake_Toml_true___closed__1));
v___x_1718_ = l_Lake_Toml_lit(v___x_1717_, v___x_1716_, v___x_1715_);
return v___x_1718_;
}
}
static lean_object* _init_l_Lake_Toml_true(void){
_start:
{
lean_object* v___x_1719_; 
v___x_1719_ = lean_obj_once(&l_Lake_Toml_true___closed__5, &l_Lake_Toml_true___closed__5_once, _init_l_Lake_Toml_true___closed__5);
return v___x_1719_;
}
}
static lean_object* _init_l_Lake_Toml_false___closed__5(void){
_start:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; 
v___x_1732_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_1733_ = ((lean_object*)(l_Lake_Toml_false___closed__4));
v___x_1734_ = ((lean_object*)(l_Lake_Toml_false___closed__1));
v___x_1735_ = l_Lake_Toml_lit(v___x_1734_, v___x_1733_, v___x_1732_);
return v___x_1735_;
}
}
static lean_object* _init_l_Lake_Toml_false(void){
_start:
{
lean_object* v___x_1736_; 
v___x_1736_ = lean_obj_once(&l_Lake_Toml_false___closed__5, &l_Lake_Toml_false___closed__5_once, _init_l_Lake_Toml_false___closed__5);
return v___x_1736_;
}
}
static lean_object* _init_l_Lake_Toml_boolean___closed__2(void){
_start:
{
lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; 
v___x_1742_ = l_Lake_Toml_false;
v___x_1743_ = l_Lake_Toml_true;
v___x_1744_ = l_Lean_Parser_orelse(v___x_1743_, v___x_1742_);
return v___x_1744_;
}
}
static lean_object* _init_l_Lake_Toml_boolean___closed__3(void){
_start:
{
uint8_t v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1745_ = 0;
v___x_1746_ = lean_obj_once(&l_Lake_Toml_boolean___closed__2, &l_Lake_Toml_boolean___closed__2_once, _init_l_Lake_Toml_boolean___closed__2);
v___x_1747_ = ((lean_object*)(l_Lake_Toml_boolean___closed__1));
v___x_1748_ = ((lean_object*)(l_Lake_Toml_boolean___closed__0));
v___x_1749_ = l_Lean_Parser_nodeWithAntiquot(v___x_1748_, v___x_1747_, v___x_1746_, v___x_1745_);
return v___x_1749_;
}
}
static lean_object* _init_l_Lake_Toml_boolean(void){
_start:
{
lean_object* v___x_1750_; 
v___x_1750_ = lean_obj_once(&l_Lake_Toml_boolean___closed__3, &l_Lake_Toml_boolean___closed__3_once, _init_l_Lake_Toml_boolean___closed__3);
return v___x_1750_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__0(void){
_start:
{
uint8_t v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v___x_1751_ = 0;
v___x_1752_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_1753_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2));
v___x_1754_ = l_Lean_Parser_mkAntiquot(v___x_1753_, v___x_1752_, v___x_1751_, v___x_1751_);
return v___x_1754_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__1(void){
_start:
{
uint8_t v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; 
v___x_1755_ = 0;
v___x_1756_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1757_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__5));
v___x_1758_ = l_Lean_Parser_mkAntiquot(v___x_1757_, v___x_1756_, v___x_1755_, v___x_1755_);
return v___x_1758_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__2(void){
_start:
{
uint8_t v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; 
v___x_1759_ = 0;
v___x_1760_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__19));
v___x_1761_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__18));
v___x_1762_ = l_Lean_Parser_mkAntiquot(v___x_1761_, v___x_1760_, v___x_1759_, v___x_1759_);
return v___x_1762_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__3(void){
_start:
{
uint8_t v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1763_ = 0;
v___x_1764_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__14));
v___x_1765_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__13));
v___x_1766_ = l_Lean_Parser_mkAntiquot(v___x_1765_, v___x_1764_, v___x_1763_, v___x_1763_);
return v___x_1766_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__4(void){
_start:
{
uint8_t v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1767_ = 0;
v___x_1768_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__9));
v___x_1769_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__8));
v___x_1770_ = l_Lean_Parser_mkAntiquot(v___x_1769_, v___x_1768_, v___x_1767_, v___x_1767_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__5(void){
_start:
{
uint8_t v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1771_ = 0;
v___x_1772_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1773_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__0));
v___x_1774_ = l_Lean_Parser_mkAntiquot(v___x_1773_, v___x_1772_, v___x_1771_, v___x_1771_);
return v___x_1774_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__8(void){
_start:
{
uint8_t v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; 
v___x_1780_ = 1;
v___x_1781_ = ((lean_object*)(l_Lake_Toml_numeralAntiquot___closed__7));
v___x_1782_ = ((lean_object*)(l_Lake_Toml_numeralAntiquot___closed__6));
v___x_1783_ = l_Lean_Parser_mkAntiquot(v___x_1782_, v___x_1781_, v___x_1780_, v___x_1780_);
return v___x_1783_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__9(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1784_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__8, &l_Lake_Toml_numeralAntiquot___closed__8_once, _init_l_Lake_Toml_numeralAntiquot___closed__8);
v___x_1785_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__5, &l_Lake_Toml_numeralAntiquot___closed__5_once, _init_l_Lake_Toml_numeralAntiquot___closed__5);
v___x_1786_ = l_Lean_Parser_orelse(v___x_1785_, v___x_1784_);
return v___x_1786_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__10(void){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; 
v___x_1787_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__9, &l_Lake_Toml_numeralAntiquot___closed__9_once, _init_l_Lake_Toml_numeralAntiquot___closed__9);
v___x_1788_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__4, &l_Lake_Toml_numeralAntiquot___closed__4_once, _init_l_Lake_Toml_numeralAntiquot___closed__4);
v___x_1789_ = l_Lean_Parser_orelse(v___x_1788_, v___x_1787_);
return v___x_1789_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__11(void){
_start:
{
lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1790_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__10, &l_Lake_Toml_numeralAntiquot___closed__10_once, _init_l_Lake_Toml_numeralAntiquot___closed__10);
v___x_1791_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__3, &l_Lake_Toml_numeralAntiquot___closed__3_once, _init_l_Lake_Toml_numeralAntiquot___closed__3);
v___x_1792_ = l_Lean_Parser_orelse(v___x_1791_, v___x_1790_);
return v___x_1792_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__12(void){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
v___x_1793_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__11, &l_Lake_Toml_numeralAntiquot___closed__11_once, _init_l_Lake_Toml_numeralAntiquot___closed__11);
v___x_1794_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__2, &l_Lake_Toml_numeralAntiquot___closed__2_once, _init_l_Lake_Toml_numeralAntiquot___closed__2);
v___x_1795_ = l_Lean_Parser_orelse(v___x_1794_, v___x_1793_);
return v___x_1795_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__13(void){
_start:
{
lean_object* v___x_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; 
v___x_1796_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__12, &l_Lake_Toml_numeralAntiquot___closed__12_once, _init_l_Lake_Toml_numeralAntiquot___closed__12);
v___x_1797_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__1, &l_Lake_Toml_numeralAntiquot___closed__1_once, _init_l_Lake_Toml_numeralAntiquot___closed__1);
v___x_1798_ = l_Lean_Parser_orelse(v___x_1797_, v___x_1796_);
return v___x_1798_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot___closed__14(void){
_start:
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1799_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__13, &l_Lake_Toml_numeralAntiquot___closed__13_once, _init_l_Lake_Toml_numeralAntiquot___closed__13);
v___x_1800_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__0, &l_Lake_Toml_numeralAntiquot___closed__0_once, _init_l_Lake_Toml_numeralAntiquot___closed__0);
v___x_1801_ = l_Lean_Parser_orelse(v___x_1800_, v___x_1799_);
return v___x_1801_;
}
}
static lean_object* _init_l_Lake_Toml_numeralAntiquot(void){
_start:
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_obj_once(&l_Lake_Toml_numeralAntiquot___closed__14, &l_Lake_Toml_numeralAntiquot___closed__14_once, _init_l_Lake_Toml_numeralAntiquot___closed__14);
return v___x_1802_;
}
}
static lean_object* _init_l_Lake_Toml_numeral___closed__0(void){
_start:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; 
v___x_1803_ = lean_alloc_closure((void*)(l_Lake_Toml_numeralFn), 2, 0);
v___x_1804_ = l_Lake_Toml_dynamicNode(v___x_1803_);
return v___x_1804_;
}
}
static lean_object* _init_l_Lake_Toml_numeral___closed__1(void){
_start:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1805_ = lean_obj_once(&l_Lake_Toml_numeral___closed__0, &l_Lake_Toml_numeral___closed__0_once, _init_l_Lake_Toml_numeral___closed__0);
v___x_1806_ = l_Lake_Toml_numeralAntiquot;
v___x_1807_ = l_Lean_Parser_withAntiquot(v___x_1806_, v___x_1805_);
return v___x_1807_;
}
}
static lean_object* _init_l_Lake_Toml_numeral(void){
_start:
{
lean_object* v___x_1808_; 
v___x_1808_ = lean_obj_once(&l_Lake_Toml_numeral___closed__1, &l_Lake_Toml_numeral___closed__1_once, _init_l_Lake_Toml_numeral___closed__1);
return v___x_1808_;
}
}
LEAN_EXPORT uint8_t l_Lake_Toml_numeralOfKind___lam__0(lean_object* v_kind_1809_, lean_object* v_x_1810_){
_start:
{
uint8_t v___x_1811_; 
v___x_1811_ = l_Lean_Syntax_isOfKind(v_x_1810_, v_kind_1809_);
return v___x_1811_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind___lam__0___boxed(lean_object* v_kind_1812_, lean_object* v_x_1813_){
_start:
{
uint8_t v_res_1814_; lean_object* v_r_1815_; 
v_res_1814_ = l_Lake_Toml_numeralOfKind___lam__0(v_kind_1812_, v_x_1813_);
lean_dec(v_kind_1812_);
v_r_1815_ = lean_box(v_res_1814_);
return v_r_1815_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_numeralOfKind(lean_object* v_name_1817_, lean_object* v_kind_1818_){
_start:
{
lean_object* v___f_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; 
v___f_1819_ = lean_alloc_closure((void*)(l_Lake_Toml_numeralOfKind___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1819_, 0, v_kind_1818_);
v___x_1820_ = l_Lake_Toml_numeral;
v___x_1821_ = lean_box(0);
v___x_1822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1822_, 0, v_name_1817_);
lean_ctor_set(v___x_1822_, 1, v___x_1821_);
v___x_1823_ = ((lean_object*)(l_Lake_Toml_numeralOfKind___closed__0));
v___x_1824_ = l_Lean_Parser_checkStackTop(v___f_1819_, v___x_1823_);
v___x_1825_ = l_Lean_Parser_setExpected(v___x_1822_, v___x_1824_);
v___x_1826_ = l_Lean_Parser_andthen(v___x_1820_, v___x_1825_);
return v___x_1826_;
}
}
static lean_object* _init_l_Lake_Toml_float___closed__0(void){
_start:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1827_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__3));
v___x_1828_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__2));
v___x_1829_ = l_Lake_Toml_numeralOfKind(v___x_1828_, v___x_1827_);
return v___x_1829_;
}
}
static lean_object* _init_l_Lake_Toml_float(void){
_start:
{
lean_object* v___x_1830_; 
v___x_1830_ = lean_obj_once(&l_Lake_Toml_float___closed__0, &l_Lake_Toml_float___closed__0_once, _init_l_Lake_Toml_float___closed__0);
return v___x_1830_;
}
}
static lean_object* _init_l_Lake_Toml_decInt___closed__0(void){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1831_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__6));
v___x_1832_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberFn___closed__0));
v___x_1833_ = l_Lake_Toml_numeralOfKind(v___x_1832_, v___x_1831_);
return v___x_1833_;
}
}
static lean_object* _init_l_Lake_Toml_decInt(void){
_start:
{
lean_object* v___x_1834_; 
v___x_1834_ = lean_obj_once(&l_Lake_Toml_decInt___closed__0, &l_Lake_Toml_decInt___closed__0_once, _init_l_Lake_Toml_decInt___closed__0);
return v___x_1834_;
}
}
static lean_object* _init_l_Lake_Toml_binNum___closed__1(void){
_start:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1836_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__19));
v___x_1837_ = ((lean_object*)(l_Lake_Toml_binNum___closed__0));
v___x_1838_ = l_Lake_Toml_numeralOfKind(v___x_1837_, v___x_1836_);
return v___x_1838_;
}
}
static lean_object* _init_l_Lake_Toml_binNum(void){
_start:
{
lean_object* v___x_1839_; 
v___x_1839_ = lean_obj_once(&l_Lake_Toml_binNum___closed__1, &l_Lake_Toml_binNum___closed__1_once, _init_l_Lake_Toml_binNum___closed__1);
return v___x_1839_;
}
}
static lean_object* _init_l_Lake_Toml_octNum___closed__1(void){
_start:
{
lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; 
v___x_1841_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__14));
v___x_1842_ = ((lean_object*)(l_Lake_Toml_octNum___closed__0));
v___x_1843_ = l_Lake_Toml_numeralOfKind(v___x_1842_, v___x_1841_);
return v___x_1843_;
}
}
static lean_object* _init_l_Lake_Toml_octNum(void){
_start:
{
lean_object* v___x_1844_; 
v___x_1844_ = lean_obj_once(&l_Lake_Toml_octNum___closed__1, &l_Lake_Toml_octNum___closed__1_once, _init_l_Lake_Toml_octNum___closed__1);
return v___x_1844_;
}
}
static lean_object* _init_l_Lake_Toml_hexNum___closed__1(void){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1846_ = ((lean_object*)(l_Lake_Toml_numeralFn___lam__0___closed__9));
v___x_1847_ = ((lean_object*)(l_Lake_Toml_hexNum___closed__0));
v___x_1848_ = l_Lake_Toml_numeralOfKind(v___x_1847_, v___x_1846_);
return v___x_1848_;
}
}
static lean_object* _init_l_Lake_Toml_hexNum(void){
_start:
{
lean_object* v___x_1849_; 
v___x_1849_ = lean_obj_once(&l_Lake_Toml_hexNum___closed__1, &l_Lake_Toml_hexNum___closed__1_once, _init_l_Lake_Toml_hexNum___closed__1);
return v___x_1849_;
}
}
static lean_object* _init_l_Lake_Toml_dateTime___closed__0(void){
_start:
{
lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; 
v___x_1850_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__1));
v___x_1851_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumeralAuxFn___closed__2));
v___x_1852_ = l_Lake_Toml_numeralOfKind(v___x_1851_, v___x_1850_);
return v___x_1852_;
}
}
static lean_object* _init_l_Lake_Toml_dateTime(void){
_start:
{
lean_object* v___x_1853_; 
v___x_1853_ = lean_obj_once(&l_Lake_Toml_dateTime___closed__0, &l_Lake_Toml_dateTime___closed__0_once, _init_l_Lake_Toml_dateTime___closed__0);
return v___x_1853_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_valCore(lean_object* v_val_1854_){
_start:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1855_ = l_Lake_Toml_string;
v___x_1856_ = l_Lake_Toml_boolean;
v___x_1857_ = l_Lake_Toml_numeral;
lean_inc_ref(v_val_1854_);
v___x_1858_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(v_val_1854_);
v___x_1859_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(v_val_1854_);
v___x_1860_ = l_Lean_Parser_orelse(v___x_1858_, v___x_1859_);
v___x_1861_ = l_Lean_Parser_orelse(v___x_1857_, v___x_1860_);
v___x_1862_ = l_Lean_Parser_orelse(v___x_1856_, v___x_1861_);
v___x_1863_ = l_Lean_Parser_orelse(v___x_1855_, v___x_1862_);
return v___x_1863_;
}
}
static lean_object* _init_l_Lake_Toml_val___closed__3(void){
_start:
{
uint8_t v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; 
v___x_1870_ = 1;
v___x_1871_ = ((lean_object*)(l_Lake_Toml_val___closed__2));
v___x_1872_ = ((lean_object*)(l_Lake_Toml_val___closed__1));
v___x_1873_ = ((lean_object*)(l_Lake_Toml_val___closed__0));
v___x_1874_ = l_Lake_Toml_recNodeWithAntiquot(v___x_1873_, v___x_1872_, v___x_1871_, v___x_1870_);
return v___x_1874_;
}
}
static lean_object* _init_l_Lake_Toml_val(void){
_start:
{
lean_object* v___x_1875_; 
v___x_1875_ = lean_obj_once(&l_Lake_Toml_val___closed__3, &l_Lake_Toml_val___closed__3_once, _init_l_Lake_Toml_val___closed__3);
return v___x_1875_;
}
}
static lean_object* _init_l_Lake_Toml_array___closed__0(void){
_start:
{
lean_object* v___x_1876_; lean_object* v___x_1877_; 
v___x_1876_ = l_Lake_Toml_val;
v___x_1877_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_arrayCore(v___x_1876_);
return v___x_1877_;
}
}
static lean_object* _init_l_Lake_Toml_array(void){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_obj_once(&l_Lake_Toml_array___closed__0, &l_Lake_Toml_array___closed__0_once, _init_l_Lake_Toml_array___closed__0);
return v___x_1878_;
}
}
static lean_object* _init_l_Lake_Toml_inlineTable___closed__0(void){
_start:
{
lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1879_ = l_Lake_Toml_val;
v___x_1880_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_inlineTableCore(v___x_1879_);
return v___x_1880_;
}
}
static lean_object* _init_l_Lake_Toml_inlineTable(void){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = lean_obj_once(&l_Lake_Toml_inlineTable___closed__0, &l_Lake_Toml_inlineTable___closed__0_once, _init_l_Lake_Toml_inlineTable___closed__0);
return v___x_1881_;
}
}
static lean_object* _init_l_Lake_Toml_keyval___closed__0(void){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; 
v___x_1882_ = l_Lake_Toml_val;
v___x_1883_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore(v___x_1882_);
return v___x_1883_;
}
}
static lean_object* _init_l_Lake_Toml_keyval(void){
_start:
{
lean_object* v___x_1884_; 
v___x_1884_ = lean_obj_once(&l_Lake_Toml_keyval___closed__0, &l_Lake_Toml_keyval___closed__0_once, _init_l_Lake_Toml_keyval___closed__0);
return v___x_1884_;
}
}
static lean_object* _init_l_Lake_Toml_expression___closed__0(void){
_start:
{
lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1885_ = l_Lake_Toml_val;
v___x_1886_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore(v___x_1885_);
return v___x_1886_;
}
}
static lean_object* _init_l_Lake_Toml_expression(void){
_start:
{
lean_object* v___x_1887_; 
v___x_1887_ = lean_obj_once(&l_Lake_Toml_expression___closed__0, &l_Lake_Toml_expression___closed__0_once, _init_l_Lake_Toml_expression___closed__0);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter(lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_){
_start:
{
lean_object* v___x_1893_; lean_object* v___x_1894_; uint8_t v___x_1895_; lean_object* v___x_1896_; 
v___x_1893_ = ((lean_object*)(l_Lake_Toml_header___closed__0));
v___x_1894_ = ((lean_object*)(l_Lake_Toml_header___closed__1));
v___x_1895_ = 0;
v___x_1896_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_1893_, v___x_1894_, v___x_1895_, v_a_1888_, v_a_1889_, v_a_1890_, v_a_1891_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_formatter___boxed(lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_){
_start:
{
lean_object* v_res_1902_; 
v_res_1902_ = l_Lake_Toml_header_formatter(v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_);
lean_dec(v_a_1900_);
lean_dec_ref(v_a_1899_);
lean_dec(v_a_1898_);
lean_dec_ref(v_a_1897_);
return v_res_1902_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter(lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; uint8_t v___x_1910_; lean_object* v___x_1911_; 
v___x_1908_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__0));
v___x_1909_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__1));
v___x_1910_ = 0;
v___x_1911_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_1908_, v___x_1909_, v___x_1910_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_);
return v___x_1911_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_formatter___boxed(lean_object* v_a_1912_, lean_object* v_a_1913_, lean_object* v_a_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_){
_start:
{
lean_object* v_res_1917_; 
v_res_1917_ = l_Lake_Toml_unquotedKey_formatter(v_a_1912_, v_a_1913_, v_a_1914_, v_a_1915_);
lean_dec(v_a_1915_);
lean_dec_ref(v_a_1914_);
lean_dec(v_a_1913_);
lean_dec_ref(v_a_1912_);
return v_res_1917_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter(lean_object* v_a_1918_, lean_object* v_a_1919_, lean_object* v_a_1920_, lean_object* v_a_1921_){
_start:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; uint8_t v___x_1925_; lean_object* v___x_1926_; 
v___x_1923_ = ((lean_object*)(l_Lake_Toml_basicString___closed__0));
v___x_1924_ = ((lean_object*)(l_Lake_Toml_basicString___closed__1));
v___x_1925_ = 0;
v___x_1926_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_1923_, v___x_1924_, v___x_1925_, v_a_1918_, v_a_1919_, v_a_1920_, v_a_1921_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_formatter___boxed(lean_object* v_a_1927_, lean_object* v_a_1928_, lean_object* v_a_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lake_Toml_basicString_formatter(v_a_1927_, v_a_1928_, v_a_1929_, v_a_1930_);
lean_dec(v_a_1930_);
lean_dec_ref(v_a_1929_);
lean_dec(v_a_1928_);
lean_dec_ref(v_a_1927_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter(lean_object* v_a_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; uint8_t v___x_1940_; lean_object* v___x_1941_; 
v___x_1938_ = ((lean_object*)(l_Lake_Toml_literalString___closed__0));
v___x_1939_ = ((lean_object*)(l_Lake_Toml_literalString___closed__1));
v___x_1940_ = 0;
v___x_1941_ = l_Lake_Toml_litWithAntiquot_formatter___redArg(v___x_1938_, v___x_1939_, v___x_1940_, v_a_1933_, v_a_1934_, v_a_1935_, v_a_1936_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_formatter___boxed(lean_object* v_a_1942_, lean_object* v_a_1943_, lean_object* v_a_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_){
_start:
{
lean_object* v_res_1947_; 
v_res_1947_ = l_Lake_Toml_literalString_formatter(v_a_1942_, v_a_1943_, v_a_1944_, v_a_1945_);
lean_dec(v_a_1945_);
lean_dec_ref(v_a_1944_);
lean_dec(v_a_1943_);
lean_dec_ref(v_a_1942_);
return v_res_1947_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter(lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_, lean_object* v_a_1951_){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; 
v___x_1953_ = lean_alloc_closure((void*)(l_Lake_Toml_basicString_formatter___boxed), 5, 0);
v___x_1954_ = lean_alloc_closure((void*)(l_Lake_Toml_literalString_formatter___boxed), 5, 0);
v___x_1955_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1953_, v___x_1954_, v_a_1948_, v_a_1949_, v_a_1950_, v_a_1951_);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_formatter___boxed(lean_object* v_a_1956_, lean_object* v_a_1957_, lean_object* v_a_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_){
_start:
{
lean_object* v_res_1961_; 
v_res_1961_ = l_Lake_Toml_quotedKey_formatter(v_a_1956_, v_a_1957_, v_a_1958_, v_a_1959_);
lean_dec(v_a_1959_);
lean_dec_ref(v_a_1958_);
lean_dec(v_a_1957_);
lean_dec_ref(v_a_1956_);
return v_res_1961_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey_formatter___closed__0(void){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; 
v___x_1962_ = lean_alloc_closure((void*)(l_Lake_Toml_quotedKey_formatter___boxed), 5, 0);
v___x_1963_ = lean_alloc_closure((void*)(l_Lake_Toml_unquotedKey_formatter___boxed), 5, 0);
v___x_1964_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_1964_, 0, v___x_1963_);
lean_closure_set(v___x_1964_, 1, v___x_1962_);
return v___x_1964_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter(lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_){
_start:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; uint8_t v___x_1973_; lean_object* v___x_1974_; 
v___x_1970_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__0));
v___x_1971_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__1));
v___x_1972_ = lean_obj_once(&l_Lake_Toml_simpleKey_formatter___closed__0, &l_Lake_Toml_simpleKey_formatter___closed__0_once, _init_l_Lake_Toml_simpleKey_formatter___closed__0);
v___x_1973_ = 1;
v___x_1974_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_1970_, v___x_1971_, v___x_1972_, v___x_1973_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_);
return v___x_1974_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_formatter___boxed(lean_object* v_a_1975_, lean_object* v_a_1976_, lean_object* v_a_1977_, lean_object* v_a_1978_, lean_object* v_a_1979_){
_start:
{
lean_object* v_res_1980_; 
v_res_1980_ = l_Lake_Toml_simpleKey_formatter(v_a_1975_, v_a_1976_, v_a_1977_, v_a_1978_);
lean_dec(v_a_1978_);
lean_dec_ref(v_a_1977_);
lean_dec(v_a_1976_);
lean_dec_ref(v_a_1975_);
return v_res_1980_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg(){
_start:
{
lean_object* v___x_1982_; 
v___x_1982_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1982_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___redArg___boxed(lean_object* v_a_1983_){
_start:
{
lean_object* v_res_1984_; 
v_res_1984_ = l_Lake_Toml_trailingWs_formatter___redArg();
return v_res_1984_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter(lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v_a_1988_){
_start:
{
lean_object* v___x_1990_; 
v___x_1990_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_1990_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_formatter___boxed(lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v_a_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l_Lake_Toml_trailingWs_formatter(v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_);
lean_dec(v_a_1994_);
lean_dec_ref(v_a_1993_);
lean_dec(v_a_1992_);
lean_dec_ref(v_a_1991_);
return v_res_1996_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_1997_; lean_object* v___x_1998_; 
v___x_1997_ = 46;
v___x_1998_ = lean_box_uint32(v___x_1997_);
return v___x_1998_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__0(void){
_start:
{
lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; 
v___x_1999_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2000_ = ((lean_object*)(l_Lake_Toml_key___closed__5));
v___x_2001_ = l_Lake_Toml_key_formatter___closed__0___boxed__const__1;
v___x_2002_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2002_, 0, v___x_2001_);
lean_closure_set(v___x_2002_, 1, v___x_2000_);
lean_closure_set(v___x_2002_, 2, v___x_1999_);
return v___x_2002_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__1(void){
_start:
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; 
v___x_2003_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2004_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__0, &l_Lake_Toml_key_formatter___closed__0_once, _init_l_Lake_Toml_key_formatter___closed__0);
v___x_2005_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2005_, 0, v___x_2004_);
lean_closure_set(v___x_2005_, 1, v___x_2003_);
return v___x_2005_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__2(void){
_start:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2006_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__1, &l_Lake_Toml_key_formatter___closed__1_once, _init_l_Lake_Toml_key_formatter___closed__1);
v___x_2007_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2008_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2008_, 0, v___x_2007_);
lean_closure_set(v___x_2008_, 1, v___x_2006_);
return v___x_2008_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__3(void){
_start:
{
uint8_t v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; 
v___x_2009_ = 0;
v___x_2010_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__2, &l_Lake_Toml_key_formatter___closed__2_once, _init_l_Lake_Toml_key_formatter___closed__2);
v___x_2011_ = ((lean_object*)(l_Lake_Toml_key___closed__3));
v___x_2012_ = lean_alloc_closure((void*)(l_Lake_Toml_simpleKey_formatter___boxed), 5, 0);
v___x_2013_ = lean_box(v___x_2009_);
v___x_2014_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_formatter___boxed), 9, 4);
lean_closure_set(v___x_2014_, 0, v___x_2012_);
lean_closure_set(v___x_2014_, 1, v___x_2011_);
lean_closure_set(v___x_2014_, 2, v___x_2010_);
lean_closure_set(v___x_2014_, 3, v___x_2013_);
return v___x_2014_;
}
}
static lean_object* _init_l_Lake_Toml_key_formatter___closed__4(void){
_start:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; 
v___x_2015_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__3, &l_Lake_Toml_key_formatter___closed__3_once, _init_l_Lake_Toml_key_formatter___closed__3);
v___x_2016_ = ((lean_object*)(l_Lake_Toml_key___closed__2));
v___x_2017_ = lean_alloc_closure((void*)(l_Lean_Parser_setExpected_formatter___boxed), 7, 2);
lean_closure_set(v___x_2017_, 0, v___x_2016_);
lean_closure_set(v___x_2017_, 1, v___x_2015_);
return v___x_2017_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter(lean_object* v_a_2018_, lean_object* v_a_2019_, lean_object* v_a_2020_, lean_object* v_a_2021_){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; uint8_t v___x_2026_; lean_object* v___x_2027_; 
v___x_2023_ = ((lean_object*)(l_Lake_Toml_key___closed__0));
v___x_2024_ = ((lean_object*)(l_Lake_Toml_key___closed__1));
v___x_2025_ = lean_obj_once(&l_Lake_Toml_key_formatter___closed__4, &l_Lake_Toml_key_formatter___closed__4_once, _init_l_Lake_Toml_key_formatter___closed__4);
v___x_2026_ = 1;
v___x_2027_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2023_, v___x_2024_, v___x_2025_, v___x_2026_, v_a_2018_, v_a_2019_, v_a_2020_, v_a_2021_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_formatter___boxed(lean_object* v_a_2028_, lean_object* v_a_2029_, lean_object* v_a_2030_, lean_object* v_a_2031_, lean_object* v_a_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_Lake_Toml_key_formatter(v_a_2028_, v_a_2029_, v_a_2030_, v_a_2031_);
lean_dec(v_a_2031_);
lean_dec_ref(v_a_2030_);
lean_dec(v_a_2029_);
lean_dec_ref(v_a_2028_);
return v_res_2033_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2034_; lean_object* v___x_2035_; 
v___x_2034_ = 61;
v___x_2035_ = lean_box_uint32(v___x_2034_);
return v___x_2035_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0(void){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2036_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2037_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3));
v___x_2038_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1;
v___x_2039_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2039_, 0, v___x_2038_);
lean_closure_set(v___x_2039_, 1, v___x_2037_);
lean_closure_set(v___x_2039_, 2, v___x_2036_);
return v___x_2039_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter(lean_object* v_val_2040_, lean_object* v_a_2041_, lean_object* v_a_2042_, lean_object* v_a_2043_, lean_object* v_a_2044_){
_start:
{
lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; uint8_t v___x_2055_; lean_object* v___x_2056_; 
v___x_2046_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0));
v___x_2047_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1));
v___x_2048_ = lean_alloc_closure((void*)(l_Lake_Toml_key_formatter___boxed), 5, 0);
v___x_2049_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2050_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0, &l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0);
lean_inc_ref(v___x_2049_);
v___x_2051_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2051_, 0, v___x_2049_);
lean_closure_set(v___x_2051_, 1, v_val_2040_);
v___x_2052_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2052_, 0, v___x_2050_);
lean_closure_set(v___x_2052_, 1, v___x_2051_);
v___x_2053_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2053_, 0, v___x_2049_);
lean_closure_set(v___x_2053_, 1, v___x_2052_);
v___x_2054_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2054_, 0, v___x_2048_);
lean_closure_set(v___x_2054_, 1, v___x_2053_);
v___x_2055_ = 1;
v___x_2056_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2046_, v___x_2047_, v___x_2054_, v___x_2055_, v_a_2041_, v_a_2042_, v_a_2043_, v_a_2044_);
return v___x_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___boxed(lean_object* v_val_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_, lean_object* v_a_2061_, lean_object* v_a_2062_){
_start:
{
lean_object* v_res_2063_; 
v_res_2063_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter(v_val_2057_, v_a_2058_, v_a_2059_, v_a_2060_, v_a_2061_);
lean_dec(v_a_2061_);
lean_dec_ref(v_a_2060_);
lean_dec(v_a_2059_);
lean_dec_ref(v_a_2058_);
return v_res_2063_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_2064_; lean_object* v___x_2065_; 
v___x_2064_ = 91;
v___x_2065_ = lean_box_uint32(v___x_2064_);
return v___x_2065_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__0(void){
_start:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2066_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2067_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__3));
v___x_2068_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2069_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2069_, 0, v___x_2068_);
lean_closure_set(v___x_2069_, 1, v___x_2067_);
lean_closure_set(v___x_2069_, 2, v___x_2066_);
return v___x_2069_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__1(void){
_start:
{
lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; 
v___x_2070_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2071_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__6));
v___x_2072_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2073_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2073_, 0, v___x_2072_);
lean_closure_set(v___x_2073_, 1, v___x_2071_);
lean_closure_set(v___x_2073_, 2, v___x_2070_);
return v___x_2073_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__2(void){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__1, &l_Lake_Toml_stdTable_formatter___closed__1_once, _init_l_Lake_Toml_stdTable_formatter___closed__1);
v___x_2075_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_notFollowedBy_formatter___boxed), 6, 1);
lean_closure_set(v___x_2075_, 0, v___x_2074_);
return v___x_2075_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__3(void){
_start:
{
lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; 
v___x_2076_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__2, &l_Lake_Toml_stdTable_formatter___closed__2_once, _init_l_Lake_Toml_stdTable_formatter___closed__2);
v___x_2077_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__0, &l_Lake_Toml_stdTable_formatter___closed__0_once, _init_l_Lake_Toml_stdTable_formatter___closed__0);
v___x_2078_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2078_, 0, v___x_2077_);
lean_closure_set(v___x_2078_, 1, v___x_2076_);
return v___x_2078_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__4(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; 
v___x_2079_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__3, &l_Lake_Toml_stdTable_formatter___closed__3_once, _init_l_Lake_Toml_stdTable_formatter___closed__3);
v___x_2080_ = lean_alloc_closure((void*)(l_Lean_Parser_atomic_formatter___boxed), 6, 1);
lean_closure_set(v___x_2080_, 0, v___x_2079_);
return v___x_2080_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1(void){
_start:
{
uint32_t v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = 93;
v___x_2082_ = lean_box_uint32(v___x_2081_);
return v___x_2082_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__5(void){
_start:
{
lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2083_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2084_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__12));
v___x_2085_ = l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1;
v___x_2086_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_formatter___boxed), 8, 3);
lean_closure_set(v___x_2086_, 0, v___x_2085_);
lean_closure_set(v___x_2086_, 1, v___x_2084_);
lean_closure_set(v___x_2086_, 2, v___x_2083_);
return v___x_2086_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__6(void){
_start:
{
lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; 
v___x_2087_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__5, &l_Lake_Toml_stdTable_formatter___closed__5_once, _init_l_Lake_Toml_stdTable_formatter___closed__5);
v___x_2088_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2089_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2089_, 0, v___x_2088_);
lean_closure_set(v___x_2089_, 1, v___x_2087_);
return v___x_2089_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__7(void){
_start:
{
lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; 
v___x_2090_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__6, &l_Lake_Toml_stdTable_formatter___closed__6_once, _init_l_Lake_Toml_stdTable_formatter___closed__6);
v___x_2091_ = lean_alloc_closure((void*)(l_Lake_Toml_key_formatter___boxed), 5, 0);
v___x_2092_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2092_, 0, v___x_2091_);
lean_closure_set(v___x_2092_, 1, v___x_2090_);
return v___x_2092_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__8(void){
_start:
{
lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v___x_2093_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__7, &l_Lake_Toml_stdTable_formatter___closed__7_once, _init_l_Lake_Toml_stdTable_formatter___closed__7);
v___x_2094_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2095_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2095_, 0, v___x_2094_);
lean_closure_set(v___x_2095_, 1, v___x_2093_);
return v___x_2095_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_formatter___closed__9(void){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; 
v___x_2096_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__8, &l_Lake_Toml_stdTable_formatter___closed__8_once, _init_l_Lake_Toml_stdTable_formatter___closed__8);
v___x_2097_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__4, &l_Lake_Toml_stdTable_formatter___closed__4_once, _init_l_Lake_Toml_stdTable_formatter___closed__4);
v___x_2098_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2098_, 0, v___x_2097_);
lean_closure_set(v___x_2098_, 1, v___x_2096_);
return v___x_2098_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter(lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_){
_start:
{
lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; uint8_t v___x_2107_; lean_object* v___x_2108_; 
v___x_2104_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__0));
v___x_2105_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__1));
v___x_2106_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__9, &l_Lake_Toml_stdTable_formatter___closed__9_once, _init_l_Lake_Toml_stdTable_formatter___closed__9);
v___x_2107_ = 0;
v___x_2108_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2104_, v___x_2105_, v___x_2106_, v___x_2107_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_);
return v___x_2108_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_formatter___boxed(lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_, lean_object* v_a_2113_){
_start:
{
lean_object* v_res_2114_; 
v_res_2114_ = l_Lake_Toml_stdTable_formatter(v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
lean_dec(v_a_2112_);
lean_dec_ref(v_a_2111_);
lean_dec(v_a_2110_);
lean_dec_ref(v_a_2109_);
return v_res_2114_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__0(void){
_start:
{
lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; 
v___x_2115_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__1, &l_Lake_Toml_stdTable_formatter___closed__1_once, _init_l_Lake_Toml_stdTable_formatter___closed__1);
v___x_2116_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__0, &l_Lake_Toml_stdTable_formatter___closed__0_once, _init_l_Lake_Toml_stdTable_formatter___closed__0);
v___x_2117_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2117_, 0, v___x_2116_);
lean_closure_set(v___x_2117_, 1, v___x_2115_);
return v___x_2117_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__1(void){
_start:
{
lean_object* v___x_2118_; lean_object* v___x_2119_; 
v___x_2118_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__0, &l_Lake_Toml_arrayTable_formatter___closed__0_once, _init_l_Lake_Toml_arrayTable_formatter___closed__0);
v___x_2119_ = lean_alloc_closure((void*)(l_Lean_Parser_atomic_formatter___boxed), 6, 1);
lean_closure_set(v___x_2119_, 0, v___x_2118_);
return v___x_2119_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__2(void){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; 
v___x_2120_ = lean_obj_once(&l_Lake_Toml_stdTable_formatter___closed__5, &l_Lake_Toml_stdTable_formatter___closed__5_once, _init_l_Lake_Toml_stdTable_formatter___closed__5);
v___x_2121_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2121_, 0, v___x_2120_);
lean_closure_set(v___x_2121_, 1, v___x_2120_);
return v___x_2121_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__3(void){
_start:
{
lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2122_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__2, &l_Lake_Toml_arrayTable_formatter___closed__2_once, _init_l_Lake_Toml_arrayTable_formatter___closed__2);
v___x_2123_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2124_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2124_, 0, v___x_2123_);
lean_closure_set(v___x_2124_, 1, v___x_2122_);
return v___x_2124_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__4(void){
_start:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2125_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__3, &l_Lake_Toml_arrayTable_formatter___closed__3_once, _init_l_Lake_Toml_arrayTable_formatter___closed__3);
v___x_2126_ = lean_alloc_closure((void*)(l_Lake_Toml_key_formatter___boxed), 5, 0);
v___x_2127_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2127_, 0, v___x_2126_);
lean_closure_set(v___x_2127_, 1, v___x_2125_);
return v___x_2127_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__5(void){
_start:
{
lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; 
v___x_2128_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__4, &l_Lake_Toml_arrayTable_formatter___closed__4_once, _init_l_Lake_Toml_arrayTable_formatter___closed__4);
v___x_2129_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_formatter___boxed), 5, 0);
v___x_2130_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2130_, 0, v___x_2129_);
lean_closure_set(v___x_2130_, 1, v___x_2128_);
return v___x_2130_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_formatter___closed__6(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2131_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__5, &l_Lake_Toml_arrayTable_formatter___closed__5_once, _init_l_Lake_Toml_arrayTable_formatter___closed__5);
v___x_2132_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__1, &l_Lake_Toml_arrayTable_formatter___closed__1_once, _init_l_Lake_Toml_arrayTable_formatter___closed__1);
v___x_2133_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2133_, 0, v___x_2132_);
lean_closure_set(v___x_2133_, 1, v___x_2131_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter(lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; uint8_t v___x_2142_; lean_object* v___x_2143_; 
v___x_2139_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__0));
v___x_2140_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__1));
v___x_2141_ = lean_obj_once(&l_Lake_Toml_arrayTable_formatter___closed__6, &l_Lake_Toml_arrayTable_formatter___closed__6_once, _init_l_Lake_Toml_arrayTable_formatter___closed__6);
v___x_2142_ = 0;
v___x_2143_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2139_, v___x_2140_, v___x_2141_, v___x_2142_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_);
return v___x_2143_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_formatter___boxed(lean_object* v_a_2144_, lean_object* v_a_2145_, lean_object* v_a_2146_, lean_object* v_a_2147_, lean_object* v_a_2148_){
_start:
{
lean_object* v_res_2149_; 
v_res_2149_ = l_Lake_Toml_arrayTable_formatter(v_a_2144_, v_a_2145_, v_a_2146_, v_a_2147_);
lean_dec(v_a_2147_);
lean_dec_ref(v_a_2146_);
lean_dec(v_a_2145_);
lean_dec_ref(v_a_2144_);
return v_res_2149_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter(lean_object* v_a_2150_, lean_object* v_a_2151_, lean_object* v_a_2152_, lean_object* v_a_2153_){
_start:
{
lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2155_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_formatter___boxed), 5, 0);
v___x_2156_ = lean_alloc_closure((void*)(l_Lake_Toml_arrayTable_formatter___boxed), 5, 0);
v___x_2157_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2155_, v___x_2156_, v_a_2150_, v_a_2151_, v_a_2152_, v_a_2153_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_formatter___boxed(lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_a_2160_, lean_object* v_a_2161_, lean_object* v_a_2162_){
_start:
{
lean_object* v_res_2163_; 
v_res_2163_ = l_Lake_Toml_table_formatter(v_a_2158_, v_a_2159_, v_a_2160_, v_a_2161_);
lean_dec(v_a_2161_);
lean_dec_ref(v_a_2160_);
lean_dec(v_a_2159_);
lean_dec_ref(v_a_2158_);
return v_res_2163_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter(lean_object* v_val_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_, lean_object* v_a_2173_, lean_object* v_a_2174_){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2176_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___closed__0));
v___x_2177_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___boxed), 6, 1);
lean_closure_set(v___x_2177_, 0, v_val_2170_);
v___x_2178_ = lean_alloc_closure((void*)(l_Lake_Toml_table_formatter___boxed), 5, 0);
v___x_2179_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed), 7, 2);
lean_closure_set(v___x_2179_, 0, v___x_2177_);
lean_closure_set(v___x_2179_, 1, v___x_2178_);
v___x_2180_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2176_, v___x_2179_, v_a_2171_, v_a_2172_, v_a_2173_, v_a_2174_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___boxed(lean_object* v_val_2181_, lean_object* v_a_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter(v_val_2181_, v_a_2182_, v_a_2183_, v_a_2184_, v_a_2185_);
lean_dec(v_a_2185_);
lean_dec_ref(v_a_2184_);
lean_dec(v_a_2183_);
lean_dec_ref(v_a_2182_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg(){
_start:
{
lean_object* v___x_2189_; 
v___x_2189_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_2189_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___redArg___boxed(lean_object* v_a_2190_){
_start:
{
lean_object* v_res_2191_; 
v_res_2191_ = l_Lake_Toml_trailingSep_formatter___redArg();
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter(lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v___x_2197_; 
v___x_2197_ = l_Lake_Toml_epsilon_formatter___redArg();
return v___x_2197_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_formatter___boxed(lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l_Lake_Toml_trailingSep_formatter(v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_);
lean_dec(v_a_2201_);
lean_dec_ref(v_a_2200_);
lean_dec(v_a_2199_);
lean_dec_ref(v_a_2198_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(lean_object* v_val_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_){
_start:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; uint8_t v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; 
v___x_2210_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0));
v___x_2211_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_2212_ = lean_alloc_closure((void*)(l_Lake_Toml_header_formatter___boxed), 5, 0);
v___x_2213_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_formatter___boxed), 6, 1);
lean_closure_set(v___x_2213_, 0, v_val_2204_);
v___x_2214_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingSep_formatter___boxed), 5, 0);
v___x_2215_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2215_, 0, v___x_2213_);
lean_closure_set(v___x_2215_, 1, v___x_2214_);
v___x_2216_ = 1;
v___x_2217_ = lean_box(v___x_2216_);
v___x_2218_ = lean_alloc_closure((void*)(l_Lake_Toml_sepByLinebreak_formatter___boxed), 7, 2);
lean_closure_set(v___x_2218_, 0, v___x_2215_);
lean_closure_set(v___x_2218_, 1, v___x_2217_);
v___x_2219_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2219_, 0, v___x_2212_);
lean_closure_set(v___x_2219_, 1, v___x_2218_);
v___x_2220_ = l_Lean_Parser_nodeWithAntiquot_formatter(v___x_2210_, v___x_2211_, v___x_2219_, v___x_2216_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter___boxed(lean_object* v_val_2221_, lean_object* v_a_2222_, lean_object* v_a_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
lean_object* v_res_2227_; 
v_res_2227_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(v_val_2221_, v_a_2222_, v_a_2223_, v_a_2224_, v_a_2225_);
lean_dec(v_a_2225_);
lean_dec_ref(v_a_2224_);
lean_dec(v_a_2223_);
lean_dec_ref(v_a_2222_);
return v_res_2227_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter(lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; uint8_t v___x_2236_; lean_object* v___x_2237_; 
v___x_2233_ = ((lean_object*)(l_Lake_Toml_val___closed__0));
v___x_2234_ = ((lean_object*)(l_Lake_Toml_val___closed__1));
v___x_2235_ = ((lean_object*)(l_Lake_Toml_val___closed__2));
v___x_2236_ = 1;
v___x_2237_ = l_Lake_Toml_recNodeWithAntiquot_formatter(v___x_2233_, v___x_2234_, v___x_2235_, v___x_2236_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_formatter___boxed(lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_, lean_object* v_a_2242_){
_start:
{
lean_object* v_res_2243_; 
v_res_2243_ = l_Lake_Toml_val_formatter(v_a_2238_, v_a_2239_, v_a_2240_, v_a_2241_);
lean_dec(v_a_2241_);
lean_dec_ref(v_a_2240_);
lean_dec(v_a_2239_);
lean_dec_ref(v_a_2238_);
return v_res_2243_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter(lean_object* v_a_2244_, lean_object* v_a_2245_, lean_object* v_a_2246_, lean_object* v_a_2247_){
_start:
{
lean_object* v___x_2249_; lean_object* v___x_2250_; 
v___x_2249_ = lean_alloc_closure((void*)(l_Lake_Toml_val_formatter___boxed), 5, 0);
v___x_2250_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_formatter(v___x_2249_, v_a_2244_, v_a_2245_, v_a_2246_, v_a_2247_);
return v___x_2250_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_formatter___boxed(lean_object* v_a_2251_, lean_object* v_a_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v_res_2256_; 
v_res_2256_ = l_Lake_Toml_toml_formatter(v_a_2251_, v_a_2252_, v_a_2253_, v_a_2254_);
lean_dec(v_a_2254_);
lean_dec_ref(v_a_2253_);
lean_dec(v_a_2252_);
lean_dec_ref(v_a_2251_);
return v_res_2256_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer(lean_object* v_a_2257_, lean_object* v_a_2258_, lean_object* v_a_2259_, lean_object* v_a_2260_){
_start:
{
lean_object* v___x_2262_; lean_object* v___x_2263_; uint8_t v___x_2264_; lean_object* v___x_2265_; 
v___x_2262_ = ((lean_object*)(l_Lake_Toml_header___closed__0));
v___x_2263_ = ((lean_object*)(l_Lake_Toml_header___closed__1));
v___x_2264_ = 0;
v___x_2265_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2262_, v___x_2263_, v___x_2264_, v_a_2257_, v_a_2258_, v_a_2259_, v_a_2260_);
return v___x_2265_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_header_parenthesizer___boxed(lean_object* v_a_2266_, lean_object* v_a_2267_, lean_object* v_a_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_){
_start:
{
lean_object* v_res_2271_; 
v_res_2271_ = l_Lake_Toml_header_parenthesizer(v_a_2266_, v_a_2267_, v_a_2268_, v_a_2269_);
lean_dec(v_a_2269_);
lean_dec_ref(v_a_2268_);
lean_dec(v_a_2267_);
lean_dec_ref(v_a_2266_);
return v_res_2271_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer(lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_, lean_object* v_a_2275_){
_start:
{
lean_object* v___x_2277_; lean_object* v___x_2278_; uint8_t v___x_2279_; lean_object* v___x_2280_; 
v___x_2277_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__0));
v___x_2278_ = ((lean_object*)(l_Lake_Toml_unquotedKey___closed__1));
v___x_2279_ = 0;
v___x_2280_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2277_, v___x_2278_, v___x_2279_, v_a_2272_, v_a_2273_, v_a_2274_, v_a_2275_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_unquotedKey_parenthesizer___boxed(lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_, lean_object* v_a_2284_, lean_object* v_a_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l_Lake_Toml_unquotedKey_parenthesizer(v_a_2281_, v_a_2282_, v_a_2283_, v_a_2284_);
lean_dec(v_a_2284_);
lean_dec_ref(v_a_2283_);
lean_dec(v_a_2282_);
lean_dec_ref(v_a_2281_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer(lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_){
_start:
{
lean_object* v___x_2292_; lean_object* v___x_2293_; uint8_t v___x_2294_; lean_object* v___x_2295_; 
v___x_2292_ = ((lean_object*)(l_Lake_Toml_basicString___closed__0));
v___x_2293_ = ((lean_object*)(l_Lake_Toml_basicString___closed__1));
v___x_2294_ = 0;
v___x_2295_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2292_, v___x_2293_, v___x_2294_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
return v___x_2295_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_basicString_parenthesizer___boxed(lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v_a_2299_, lean_object* v_a_2300_){
_start:
{
lean_object* v_res_2301_; 
v_res_2301_ = l_Lake_Toml_basicString_parenthesizer(v_a_2296_, v_a_2297_, v_a_2298_, v_a_2299_);
lean_dec(v_a_2299_);
lean_dec_ref(v_a_2298_);
lean_dec(v_a_2297_);
lean_dec_ref(v_a_2296_);
return v_res_2301_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer(lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; uint8_t v___x_2309_; lean_object* v___x_2310_; 
v___x_2307_ = ((lean_object*)(l_Lake_Toml_literalString___closed__0));
v___x_2308_ = ((lean_object*)(l_Lake_Toml_literalString___closed__1));
v___x_2309_ = 0;
v___x_2310_ = l_Lake_Toml_litWithAntiquot_parenthesizer___redArg(v___x_2307_, v___x_2308_, v___x_2309_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_literalString_parenthesizer___boxed(lean_object* v_a_2311_, lean_object* v_a_2312_, lean_object* v_a_2313_, lean_object* v_a_2314_, lean_object* v_a_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = l_Lake_Toml_literalString_parenthesizer(v_a_2311_, v_a_2312_, v_a_2313_, v_a_2314_);
lean_dec(v_a_2314_);
lean_dec_ref(v_a_2313_);
lean_dec(v_a_2312_);
lean_dec_ref(v_a_2311_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer(lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; 
v___x_2322_ = lean_alloc_closure((void*)(l_Lake_Toml_basicString_parenthesizer___boxed), 5, 0);
v___x_2323_ = lean_alloc_closure((void*)(l_Lake_Toml_literalString_parenthesizer___boxed), 5, 0);
v___x_2324_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_2322_, v___x_2323_, v_a_2317_, v_a_2318_, v_a_2319_, v_a_2320_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_quotedKey_parenthesizer___boxed(lean_object* v_a_2325_, lean_object* v_a_2326_, lean_object* v_a_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_){
_start:
{
lean_object* v_res_2330_; 
v_res_2330_ = l_Lake_Toml_quotedKey_parenthesizer(v_a_2325_, v_a_2326_, v_a_2327_, v_a_2328_);
lean_dec(v_a_2328_);
lean_dec_ref(v_a_2327_);
lean_dec(v_a_2326_);
lean_dec_ref(v_a_2325_);
return v_res_2330_;
}
}
static lean_object* _init_l_Lake_Toml_simpleKey_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; 
v___x_2331_ = lean_alloc_closure((void*)(l_Lake_Toml_quotedKey_parenthesizer___boxed), 5, 0);
v___x_2332_ = lean_alloc_closure((void*)(l_Lake_Toml_unquotedKey_parenthesizer___boxed), 5, 0);
v___x_2333_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2333_, 0, v___x_2332_);
lean_closure_set(v___x_2333_, 1, v___x_2331_);
return v___x_2333_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer(lean_object* v_a_2334_, lean_object* v_a_2335_, lean_object* v_a_2336_, lean_object* v_a_2337_){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; uint8_t v___x_2342_; lean_object* v___x_2343_; 
v___x_2339_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__0));
v___x_2340_ = ((lean_object*)(l_Lake_Toml_simpleKey___closed__1));
v___x_2341_ = lean_obj_once(&l_Lake_Toml_simpleKey_parenthesizer___closed__0, &l_Lake_Toml_simpleKey_parenthesizer___closed__0_once, _init_l_Lake_Toml_simpleKey_parenthesizer___closed__0);
v___x_2342_ = 1;
v___x_2343_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2339_, v___x_2340_, v___x_2341_, v___x_2342_, v_a_2334_, v_a_2335_, v_a_2336_, v_a_2337_);
return v___x_2343_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_simpleKey_parenthesizer___boxed(lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_){
_start:
{
lean_object* v_res_2349_; 
v_res_2349_ = l_Lake_Toml_simpleKey_parenthesizer(v_a_2344_, v_a_2345_, v_a_2346_, v_a_2347_);
lean_dec(v_a_2347_);
lean_dec_ref(v_a_2346_);
lean_dec(v_a_2345_);
lean_dec_ref(v_a_2344_);
return v_res_2349_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg(){
_start:
{
lean_object* v___x_2351_; 
v___x_2351_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2351_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___redArg___boxed(lean_object* v_a_2352_){
_start:
{
lean_object* v_res_2353_; 
v_res_2353_ = l_Lake_Toml_trailingWs_parenthesizer___redArg();
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer(lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_, lean_object* v_a_2357_){
_start:
{
lean_object* v___x_2359_; 
v___x_2359_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingWs_parenthesizer___boxed(lean_object* v_a_2360_, lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v_res_2365_; 
v_res_2365_ = l_Lake_Toml_trailingWs_parenthesizer(v_a_2360_, v_a_2361_, v_a_2362_, v_a_2363_);
lean_dec(v_a_2363_);
lean_dec_ref(v_a_2362_);
lean_dec(v_a_2361_);
lean_dec_ref(v_a_2360_);
return v_res_2365_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; 
v___x_2366_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2367_ = ((lean_object*)(l_Lake_Toml_key___closed__5));
v___x_2368_ = l_Lake_Toml_key_formatter___closed__0___boxed__const__1;
v___x_2369_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2369_, 0, v___x_2368_);
lean_closure_set(v___x_2369_, 1, v___x_2367_);
lean_closure_set(v___x_2369_, 2, v___x_2366_);
return v___x_2369_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2370_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2371_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__0, &l_Lake_Toml_key_parenthesizer___closed__0_once, _init_l_Lake_Toml_key_parenthesizer___closed__0);
v___x_2372_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2372_, 0, v___x_2371_);
lean_closure_set(v___x_2372_, 1, v___x_2370_);
return v___x_2372_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2373_; lean_object* v___x_2374_; lean_object* v___x_2375_; 
v___x_2373_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__1, &l_Lake_Toml_key_parenthesizer___closed__1_once, _init_l_Lake_Toml_key_parenthesizer___closed__1);
v___x_2374_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2375_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2375_, 0, v___x_2374_);
lean_closure_set(v___x_2375_, 1, v___x_2373_);
return v___x_2375_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__3(void){
_start:
{
uint8_t v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; 
v___x_2376_ = 0;
v___x_2377_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__2, &l_Lake_Toml_key_parenthesizer___closed__2_once, _init_l_Lake_Toml_key_parenthesizer___closed__2);
v___x_2378_ = ((lean_object*)(l_Lake_Toml_key___closed__3));
v___x_2379_ = lean_alloc_closure((void*)(l_Lake_Toml_simpleKey_parenthesizer___boxed), 5, 0);
v___x_2380_ = lean_box(v___x_2376_);
v___x_2381_ = lean_alloc_closure((void*)(l_Lean_Parser_sepBy1_parenthesizer___boxed), 9, 4);
lean_closure_set(v___x_2381_, 0, v___x_2379_);
lean_closure_set(v___x_2381_, 1, v___x_2378_);
lean_closure_set(v___x_2381_, 2, v___x_2377_);
lean_closure_set(v___x_2381_, 3, v___x_2380_);
return v___x_2381_;
}
}
static lean_object* _init_l_Lake_Toml_key_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; 
v___x_2382_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__3, &l_Lake_Toml_key_parenthesizer___closed__3_once, _init_l_Lake_Toml_key_parenthesizer___closed__3);
v___x_2383_ = ((lean_object*)(l_Lake_Toml_key___closed__2));
v___x_2384_ = lean_alloc_closure((void*)(l_Lean_Parser_setExpected_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2384_, 0, v___x_2383_);
lean_closure_set(v___x_2384_, 1, v___x_2382_);
return v___x_2384_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer(lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_){
_start:
{
lean_object* v___x_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; uint8_t v___x_2393_; lean_object* v___x_2394_; 
v___x_2390_ = ((lean_object*)(l_Lake_Toml_key___closed__0));
v___x_2391_ = ((lean_object*)(l_Lake_Toml_key___closed__1));
v___x_2392_ = lean_obj_once(&l_Lake_Toml_key_parenthesizer___closed__4, &l_Lake_Toml_key_parenthesizer___closed__4_once, _init_l_Lake_Toml_key_parenthesizer___closed__4);
v___x_2393_ = 1;
v___x_2394_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2390_, v___x_2391_, v___x_2392_, v___x_2393_, v_a_2385_, v_a_2386_, v_a_2387_, v_a_2388_);
return v___x_2394_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_key_parenthesizer___boxed(lean_object* v_a_2395_, lean_object* v_a_2396_, lean_object* v_a_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_){
_start:
{
lean_object* v_res_2400_; 
v_res_2400_ = l_Lake_Toml_key_parenthesizer(v_a_2395_, v_a_2396_, v_a_2397_, v_a_2398_);
lean_dec(v_a_2398_);
lean_dec_ref(v_a_2397_);
lean_dec(v_a_2396_);
lean_dec_ref(v_a_2395_);
return v_res_2400_;
}
}
static lean_object* _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; lean_object* v___x_2404_; 
v___x_2401_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2402_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__3));
v___x_2403_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1;
v___x_2404_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2404_, 0, v___x_2403_);
lean_closure_set(v___x_2404_, 1, v___x_2402_);
lean_closure_set(v___x_2404_, 2, v___x_2401_);
return v___x_2404_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer(lean_object* v_val_2405_, lean_object* v_a_2406_, lean_object* v_a_2407_, lean_object* v_a_2408_, lean_object* v_a_2409_){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; uint8_t v___x_2420_; lean_object* v___x_2421_; 
v___x_2411_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__0));
v___x_2412_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore___closed__1));
v___x_2413_ = lean_alloc_closure((void*)(l_Lake_Toml_key_parenthesizer___boxed), 5, 0);
v___x_2414_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2415_ = lean_obj_once(&l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0, &l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0_once, _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___closed__0);
lean_inc_ref(v___x_2414_);
v___x_2416_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2416_, 0, v___x_2414_);
lean_closure_set(v___x_2416_, 1, v_val_2405_);
v___x_2417_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2417_, 0, v___x_2415_);
lean_closure_set(v___x_2417_, 1, v___x_2416_);
v___x_2418_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2418_, 0, v___x_2414_);
lean_closure_set(v___x_2418_, 1, v___x_2417_);
v___x_2419_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2419_, 0, v___x_2413_);
lean_closure_set(v___x_2419_, 1, v___x_2418_);
v___x_2420_ = 1;
v___x_2421_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2411_, v___x_2412_, v___x_2419_, v___x_2420_, v_a_2406_, v_a_2407_, v_a_2408_, v_a_2409_);
return v___x_2421_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___boxed(lean_object* v_val_2422_, lean_object* v_a_2423_, lean_object* v_a_2424_, lean_object* v_a_2425_, lean_object* v_a_2426_, lean_object* v_a_2427_){
_start:
{
lean_object* v_res_2428_; 
v_res_2428_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer(v_val_2422_, v_a_2423_, v_a_2424_, v_a_2425_, v_a_2426_);
lean_dec(v_a_2426_);
lean_dec_ref(v_a_2425_);
lean_dec(v_a_2424_);
lean_dec_ref(v_a_2423_);
return v_res_2428_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0(lean_object* v___x_2429_, lean_object* v___x_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_){
_start:
{
lean_object* v___x_2436_; 
v___x_2436_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___x_2429_, v___x_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_);
return v___x_2436_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed(lean_object* v___x_2437_, lean_object* v___x_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_){
_start:
{
lean_object* v_res_2444_; 
v_res_2444_ = l_Lake_Toml_stdTable_parenthesizer___lam__0(v___x_2437_, v___x_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_);
lean_dec(v___y_2442_);
lean_dec_ref(v___y_2441_);
lean_dec(v___y_2440_);
lean_dec_ref(v___y_2439_);
return v_res_2444_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2445_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2446_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__3));
v___x_2447_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2448_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2448_, 0, v___x_2447_);
lean_closure_set(v___x_2448_, 1, v___x_2446_);
lean_closure_set(v___x_2448_, 2, v___x_2445_);
return v___x_2448_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; 
v___x_2449_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2450_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__6));
v___x_2451_ = l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1;
v___x_2452_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2452_, 0, v___x_2451_);
lean_closure_set(v___x_2452_, 1, v___x_2450_);
lean_closure_set(v___x_2452_, 2, v___x_2449_);
return v___x_2452_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2453_; lean_object* v___x_2454_; 
v___x_2453_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__1, &l_Lake_Toml_stdTable_parenthesizer___closed__1_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__1);
v___x_2454_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_notFollowedBy_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2454_, 0, v___x_2453_);
return v___x_2454_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___f_2457_; 
v___x_2455_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__2, &l_Lake_Toml_stdTable_parenthesizer___closed__2_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__2);
v___x_2456_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__0, &l_Lake_Toml_stdTable_parenthesizer___closed__0_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__0);
v___f_2457_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2457_, 0, v___x_2456_);
lean_closure_set(v___f_2457_, 1, v___x_2455_);
return v___f_2457_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2458_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_decNumberTailAuxFn___closed__4));
v___x_2459_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__12));
v___x_2460_ = l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1;
v___x_2461_ = lean_alloc_closure((void*)(l_Lake_Toml_chAtom_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2461_, 0, v___x_2460_);
lean_closure_set(v___x_2461_, 1, v___x_2459_);
lean_closure_set(v___x_2461_, 2, v___x_2458_);
return v___x_2461_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; 
v___x_2462_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__4, &l_Lake_Toml_stdTable_parenthesizer___closed__4_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__4);
v___x_2463_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2464_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2464_, 0, v___x_2463_);
lean_closure_set(v___x_2464_, 1, v___x_2462_);
return v___x_2464_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__6(void){
_start:
{
lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; 
v___x_2465_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__5, &l_Lake_Toml_stdTable_parenthesizer___closed__5_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__5);
v___x_2466_ = lean_alloc_closure((void*)(l_Lake_Toml_key_parenthesizer___boxed), 5, 0);
v___x_2467_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2467_, 0, v___x_2466_);
lean_closure_set(v___x_2467_, 1, v___x_2465_);
return v___x_2467_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__7(void){
_start:
{
lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; 
v___x_2468_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__6, &l_Lake_Toml_stdTable_parenthesizer___closed__6_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__6);
v___x_2469_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2470_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2470_, 0, v___x_2469_);
lean_closure_set(v___x_2470_, 1, v___x_2468_);
return v___x_2470_;
}
}
static lean_object* _init_l_Lake_Toml_stdTable_parenthesizer___closed__8(void){
_start:
{
lean_object* v___x_2471_; lean_object* v___f_2472_; lean_object* v___x_2473_; 
v___x_2471_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__7, &l_Lake_Toml_stdTable_parenthesizer___closed__7_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__7);
v___f_2472_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__3, &l_Lake_Toml_stdTable_parenthesizer___closed__3_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__3);
v___x_2473_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2473_, 0, v___f_2472_);
lean_closure_set(v___x_2473_, 1, v___x_2471_);
return v___x_2473_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer(lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; uint8_t v___x_2482_; lean_object* v___x_2483_; 
v___x_2479_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__0));
v___x_2480_ = ((lean_object*)(l_Lake_Toml_stdTable___closed__1));
v___x_2481_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__8, &l_Lake_Toml_stdTable_parenthesizer___closed__8_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__8);
v___x_2482_ = 0;
v___x_2483_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2479_, v___x_2480_, v___x_2481_, v___x_2482_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
return v___x_2483_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_stdTable_parenthesizer___boxed(lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_, lean_object* v_a_2487_, lean_object* v_a_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = l_Lake_Toml_stdTable_parenthesizer(v_a_2484_, v_a_2485_, v_a_2486_, v_a_2487_);
lean_dec(v_a_2487_);
lean_dec_ref(v_a_2486_);
lean_dec(v_a_2485_);
lean_dec_ref(v_a_2484_);
return v_res_2489_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___f_2492_; 
v___x_2490_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__1, &l_Lake_Toml_stdTable_parenthesizer___closed__1_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__1);
v___x_2491_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__0, &l_Lake_Toml_stdTable_parenthesizer___closed__0_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__0);
v___f_2492_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_parenthesizer___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2492_, 0, v___x_2491_);
lean_closure_set(v___f_2492_, 1, v___x_2490_);
return v___f_2492_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__1(void){
_start:
{
lean_object* v___x_2493_; lean_object* v___x_2494_; 
v___x_2493_ = lean_obj_once(&l_Lake_Toml_stdTable_parenthesizer___closed__4, &l_Lake_Toml_stdTable_parenthesizer___closed__4_once, _init_l_Lake_Toml_stdTable_parenthesizer___closed__4);
v___x_2494_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2494_, 0, v___x_2493_);
lean_closure_set(v___x_2494_, 1, v___x_2493_);
return v___x_2494_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; 
v___x_2495_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__1, &l_Lake_Toml_arrayTable_parenthesizer___closed__1_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__1);
v___x_2496_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2497_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2497_, 0, v___x_2496_);
lean_closure_set(v___x_2497_, 1, v___x_2495_);
return v___x_2497_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; 
v___x_2498_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__2, &l_Lake_Toml_arrayTable_parenthesizer___closed__2_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__2);
v___x_2499_ = lean_alloc_closure((void*)(l_Lake_Toml_key_parenthesizer___boxed), 5, 0);
v___x_2500_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2500_, 0, v___x_2499_);
lean_closure_set(v___x_2500_, 1, v___x_2498_);
return v___x_2500_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2501_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__3, &l_Lake_Toml_arrayTable_parenthesizer___closed__3_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__3);
v___x_2502_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingWs_parenthesizer___boxed), 5, 0);
v___x_2503_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2503_, 0, v___x_2502_);
lean_closure_set(v___x_2503_, 1, v___x_2501_);
return v___x_2503_;
}
}
static lean_object* _init_l_Lake_Toml_arrayTable_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_2504_; lean_object* v___f_2505_; lean_object* v___x_2506_; 
v___x_2504_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__4, &l_Lake_Toml_arrayTable_parenthesizer___closed__4_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__4);
v___f_2505_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__0, &l_Lake_Toml_arrayTable_parenthesizer___closed__0_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__0);
v___x_2506_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2506_, 0, v___f_2505_);
lean_closure_set(v___x_2506_, 1, v___x_2504_);
return v___x_2506_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer(lean_object* v_a_2507_, lean_object* v_a_2508_, lean_object* v_a_2509_, lean_object* v_a_2510_){
_start:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; uint8_t v___x_2515_; lean_object* v___x_2516_; 
v___x_2512_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__0));
v___x_2513_ = ((lean_object*)(l_Lake_Toml_arrayTable___closed__1));
v___x_2514_ = lean_obj_once(&l_Lake_Toml_arrayTable_parenthesizer___closed__5, &l_Lake_Toml_arrayTable_parenthesizer___closed__5_once, _init_l_Lake_Toml_arrayTable_parenthesizer___closed__5);
v___x_2515_ = 0;
v___x_2516_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2512_, v___x_2513_, v___x_2514_, v___x_2515_, v_a_2507_, v_a_2508_, v_a_2509_, v_a_2510_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_arrayTable_parenthesizer___boxed(lean_object* v_a_2517_, lean_object* v_a_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_, lean_object* v_a_2521_){
_start:
{
lean_object* v_res_2522_; 
v_res_2522_ = l_Lake_Toml_arrayTable_parenthesizer(v_a_2517_, v_a_2518_, v_a_2519_, v_a_2520_);
lean_dec(v_a_2520_);
lean_dec_ref(v_a_2519_);
lean_dec(v_a_2518_);
lean_dec_ref(v_a_2517_);
return v_res_2522_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer(lean_object* v_a_2523_, lean_object* v_a_2524_, lean_object* v_a_2525_, lean_object* v_a_2526_){
_start:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; 
v___x_2528_ = lean_alloc_closure((void*)(l_Lake_Toml_stdTable_parenthesizer___boxed), 5, 0);
v___x_2529_ = lean_alloc_closure((void*)(l_Lake_Toml_arrayTable_parenthesizer___boxed), 5, 0);
v___x_2530_ = l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer(v___x_2528_, v___x_2529_, v_a_2523_, v_a_2524_, v_a_2525_, v_a_2526_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_table_parenthesizer___boxed(lean_object* v_a_2531_, lean_object* v_a_2532_, lean_object* v_a_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_){
_start:
{
lean_object* v_res_2536_; 
v_res_2536_ = l_Lake_Toml_table_parenthesizer(v_a_2531_, v_a_2532_, v_a_2533_, v_a_2534_);
lean_dec(v_a_2534_);
lean_dec_ref(v_a_2533_);
lean_dec(v_a_2532_);
lean_dec_ref(v_a_2531_);
return v_res_2536_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer(lean_object* v_val_2543_, lean_object* v_a_2544_, lean_object* v_a_2545_, lean_object* v_a_2546_, lean_object* v_a_2547_){
_start:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; 
v___x_2549_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___closed__0));
v___x_2550_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2550_, 0, v_val_2543_);
v___x_2551_ = lean_alloc_closure((void*)(l_Lake_Toml_table_parenthesizer___boxed), 5, 0);
v___x_2552_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2552_, 0, v___x_2550_);
lean_closure_set(v___x_2552_, 1, v___x_2551_);
v___x_2553_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2549_, v___x_2552_, v_a_2544_, v_a_2545_, v_a_2546_, v_a_2547_);
return v___x_2553_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___boxed(lean_object* v_val_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_, lean_object* v_a_2558_, lean_object* v_a_2559_){
_start:
{
lean_object* v_res_2560_; 
v_res_2560_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer(v_val_2554_, v_a_2555_, v_a_2556_, v_a_2557_, v_a_2558_);
lean_dec(v_a_2558_);
lean_dec_ref(v_a_2557_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
return v_res_2560_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg(){
_start:
{
lean_object* v___x_2562_; 
v___x_2562_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2562_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___redArg___boxed(lean_object* v_a_2563_){
_start:
{
lean_object* v_res_2564_; 
v_res_2564_ = l_Lake_Toml_trailingSep_parenthesizer___redArg();
return v_res_2564_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer(lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v___x_2570_; 
v___x_2570_ = l_Lake_Toml_epsilon_parenthesizer___redArg();
return v___x_2570_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_trailingSep_parenthesizer___boxed(lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = l_Lake_Toml_trailingSep_parenthesizer(v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_);
lean_dec(v_a_2574_);
lean_dec_ref(v_a_2573_);
lean_dec(v_a_2572_);
lean_dec_ref(v_a_2571_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(lean_object* v_val_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_){
_start:
{
lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; uint8_t v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2583_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__0));
v___x_2584_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_2585_ = lean_alloc_closure((void*)(l_Lake_Toml_header_parenthesizer___boxed), 5, 0);
v___x_2586_ = lean_alloc_closure((void*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_expressionCore_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2586_, 0, v_val_2577_);
v___x_2587_ = lean_alloc_closure((void*)(l_Lake_Toml_trailingSep_parenthesizer___boxed), 5, 0);
v___x_2588_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2588_, 0, v___x_2586_);
lean_closure_set(v___x_2588_, 1, v___x_2587_);
v___x_2589_ = 1;
v___x_2590_ = lean_box(v___x_2589_);
v___x_2591_ = lean_alloc_closure((void*)(l_Lake_Toml_sepByLinebreak_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2591_, 0, v___x_2588_);
lean_closure_set(v___x_2591_, 1, v___x_2590_);
v___x_2592_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2592_, 0, v___x_2585_);
lean_closure_set(v___x_2592_, 1, v___x_2591_);
v___x_2593_ = l_Lean_Parser_nodeWithAntiquot_parenthesizer(v___x_2583_, v___x_2584_, v___x_2592_, v___x_2589_, v_a_2578_, v_a_2579_, v_a_2580_, v_a_2581_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer___boxed(lean_object* v_val_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_, lean_object* v_a_2597_, lean_object* v_a_2598_, lean_object* v_a_2599_){
_start:
{
lean_object* v_res_2600_; 
v_res_2600_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(v_val_2594_, v_a_2595_, v_a_2596_, v_a_2597_, v_a_2598_);
lean_dec(v_a_2598_);
lean_dec_ref(v_a_2597_);
lean_dec(v_a_2596_);
lean_dec_ref(v_a_2595_);
return v_res_2600_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer(lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_){
_start:
{
lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; lean_object* v___x_2610_; 
v___x_2606_ = ((lean_object*)(l_Lake_Toml_val___closed__0));
v___x_2607_ = ((lean_object*)(l_Lake_Toml_val___closed__1));
v___x_2608_ = ((lean_object*)(l_Lake_Toml_val___closed__2));
v___x_2609_ = 1;
v___x_2610_ = l_Lake_Toml_recNodeWithAntiquot_parenthesizer(v___x_2606_, v___x_2607_, v___x_2608_, v___x_2609_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_val_parenthesizer___boxed(lean_object* v_a_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_){
_start:
{
lean_object* v_res_2616_; 
v_res_2616_ = l_Lake_Toml_val_parenthesizer(v_a_2611_, v_a_2612_, v_a_2613_, v_a_2614_);
lean_dec(v_a_2614_);
lean_dec_ref(v_a_2613_);
lean_dec(v_a_2612_);
lean_dec_ref(v_a_2611_);
return v_res_2616_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer(lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_){
_start:
{
lean_object* v___x_2622_; lean_object* v___x_2623_; 
v___x_2622_ = lean_alloc_closure((void*)(l_Lake_Toml_val_parenthesizer___boxed), 5, 0);
v___x_2623_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore_parenthesizer(v___x_2622_, v_a_2617_, v_a_2618_, v_a_2619_, v_a_2620_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lake_Toml_toml_parenthesizer___boxed(lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_){
_start:
{
lean_object* v_res_2629_; 
v_res_2629_ = l_Lake_Toml_toml_parenthesizer(v_a_2624_, v_a_2625_, v_a_2626_, v_a_2627_);
lean_dec(v_a_2627_);
lean_dec_ref(v_a_2626_);
lean_dec(v_a_2625_);
lean_dec_ref(v_a_2624_);
return v_res_2629_;
}
}
static lean_object* _init_l_Lake_Toml_toml___closed__0(void){
_start:
{
lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2630_ = l_Lake_Toml_val;
v___x_2631_ = l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore(v___x_2630_);
return v___x_2631_;
}
}
static lean_object* _init_l_Lake_Toml_toml___closed__1(void){
_start:
{
lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v___x_2632_ = lean_obj_once(&l_Lake_Toml_toml___closed__0, &l_Lake_Toml_toml___closed__0_once, _init_l_Lake_Toml_toml___closed__0);
v___x_2633_ = ((lean_object*)(l___private_Lake_Toml_Grammar_0__Lake_Toml_tomlCore___closed__1));
v___x_2634_ = l_Lean_Parser_withCache(v___x_2633_, v___x_2632_);
return v___x_2634_;
}
}
static lean_object* _init_l_Lake_Toml_toml(void){
_start:
{
lean_object* v___x_2635_; 
v___x_2635_ = lean_obj_once(&l_Lake_Toml_toml___closed__1, &l_Lake_Toml_toml___closed__1_once, _init_l_Lake_Toml_toml___closed__1);
return v___x_2635_;
}
}
lean_object* runtime_initialize_Lake_Toml_ParserUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Parser(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Toml_Grammar(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lake_Toml_trailingWs = _init_l_Lake_Toml_trailingWs();
lean_mark_persistent(l_Lake_Toml_trailingWs);
l_Lake_Toml_trailingSep = _init_l_Lake_Toml_trailingSep();
lean_mark_persistent(l_Lake_Toml_trailingSep);
l_Lake_Toml_unquotedKey = _init_l_Lake_Toml_unquotedKey();
lean_mark_persistent(l_Lake_Toml_unquotedKey);
l_Lake_Toml_basicString = _init_l_Lake_Toml_basicString();
lean_mark_persistent(l_Lake_Toml_basicString);
l_Lake_Toml_literalString = _init_l_Lake_Toml_literalString();
lean_mark_persistent(l_Lake_Toml_literalString);
l_Lake_Toml_mlBasicString = _init_l_Lake_Toml_mlBasicString();
lean_mark_persistent(l_Lake_Toml_mlBasicString);
l_Lake_Toml_mlLiteralString = _init_l_Lake_Toml_mlLiteralString();
lean_mark_persistent(l_Lake_Toml_mlLiteralString);
l_Lake_Toml_quotedKey = _init_l_Lake_Toml_quotedKey();
lean_mark_persistent(l_Lake_Toml_quotedKey);
l_Lake_Toml_simpleKey = _init_l_Lake_Toml_simpleKey();
lean_mark_persistent(l_Lake_Toml_simpleKey);
l_Lake_Toml_key = _init_l_Lake_Toml_key();
lean_mark_persistent(l_Lake_Toml_key);
l_Lake_Toml_stdTable = _init_l_Lake_Toml_stdTable();
lean_mark_persistent(l_Lake_Toml_stdTable);
l_Lake_Toml_arrayTable = _init_l_Lake_Toml_arrayTable();
lean_mark_persistent(l_Lake_Toml_arrayTable);
l_Lake_Toml_table = _init_l_Lake_Toml_table();
lean_mark_persistent(l_Lake_Toml_table);
l_Lake_Toml_header = _init_l_Lake_Toml_header();
lean_mark_persistent(l_Lake_Toml_header);
l_Lake_Toml_string = _init_l_Lake_Toml_string();
lean_mark_persistent(l_Lake_Toml_string);
l_Lake_Toml_true = _init_l_Lake_Toml_true();
lean_mark_persistent(l_Lake_Toml_true);
l_Lake_Toml_false = _init_l_Lake_Toml_false();
lean_mark_persistent(l_Lake_Toml_false);
l_Lake_Toml_boolean = _init_l_Lake_Toml_boolean();
lean_mark_persistent(l_Lake_Toml_boolean);
l_Lake_Toml_numeralAntiquot = _init_l_Lake_Toml_numeralAntiquot();
lean_mark_persistent(l_Lake_Toml_numeralAntiquot);
l_Lake_Toml_numeral = _init_l_Lake_Toml_numeral();
lean_mark_persistent(l_Lake_Toml_numeral);
l_Lake_Toml_float = _init_l_Lake_Toml_float();
lean_mark_persistent(l_Lake_Toml_float);
l_Lake_Toml_decInt = _init_l_Lake_Toml_decInt();
lean_mark_persistent(l_Lake_Toml_decInt);
l_Lake_Toml_binNum = _init_l_Lake_Toml_binNum();
lean_mark_persistent(l_Lake_Toml_binNum);
l_Lake_Toml_octNum = _init_l_Lake_Toml_octNum();
lean_mark_persistent(l_Lake_Toml_octNum);
l_Lake_Toml_hexNum = _init_l_Lake_Toml_hexNum();
lean_mark_persistent(l_Lake_Toml_hexNum);
l_Lake_Toml_dateTime = _init_l_Lake_Toml_dateTime();
lean_mark_persistent(l_Lake_Toml_dateTime);
l_Lake_Toml_val = _init_l_Lake_Toml_val();
lean_mark_persistent(l_Lake_Toml_val);
l_Lake_Toml_array = _init_l_Lake_Toml_array();
lean_mark_persistent(l_Lake_Toml_array);
l_Lake_Toml_inlineTable = _init_l_Lake_Toml_inlineTable();
lean_mark_persistent(l_Lake_Toml_inlineTable);
l_Lake_Toml_keyval = _init_l_Lake_Toml_keyval();
lean_mark_persistent(l_Lake_Toml_keyval);
l_Lake_Toml_expression = _init_l_Lake_Toml_expression();
lean_mark_persistent(l_Lake_Toml_expression);
l_Lake_Toml_key_formatter___closed__0___boxed__const__1 = _init_l_Lake_Toml_key_formatter___closed__0___boxed__const__1();
lean_mark_persistent(l_Lake_Toml_key_formatter___closed__0___boxed__const__1);
l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1 = _init_l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1();
lean_mark_persistent(l___private_Lake_Toml_Grammar_0__Lake_Toml_keyvalCore_formatter___closed__0___boxed__const__1);
l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1 = _init_l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1();
lean_mark_persistent(l_Lake_Toml_stdTable_formatter___closed__0___boxed__const__1);
l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1 = _init_l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1();
lean_mark_persistent(l_Lake_Toml_stdTable_formatter___closed__5___boxed__const__1);
l_Lake_Toml_toml = _init_l_Lake_Toml_toml();
lean_mark_persistent(l_Lake_Toml_toml);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Toml_Grammar(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Toml_ParserUtil(uint8_t builtin);
lean_object* initialize_Lean_Parser(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Formatter(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter_Parenthesizer(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Toml_Grammar(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Toml_ParserUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Formatter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter_Parenthesizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Toml_Grammar(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Toml_Grammar(builtin);
}
#ifdef __cplusplus
}
#endif
