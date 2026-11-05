// Lean compiler output
// Module: Lean.DocString.Syntax
// Imports: public import Lean.Parser.Term.Basic public import Lean.DocString.Types meta import Lean.Parser.Term.Basic
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
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* l_Lean_Parser_satisfyFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nodeWithAntiquot(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Parser_takeWhile1Fn(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Parser_instBEqError_beq(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkErrorAt(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_rawFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_tokenWithAntiquot(lean_object*);
lean_object* l_Lean_Parser_atomic(lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
lean_object* l_Lean_Parser_SyntaxStack_back(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_ident;
extern lean_object* l_Lean_Parser_numLit;
extern lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_Parser_node(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_skip;
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l_Lean_Parser_withAntiquotFn(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Syntax_isLit_x3f(lean_object*, lean_object*);
lean_object* l_instDecidableEqChar___boxed(lean_object*, lean_object*);
lean_object* l_instBEqOfDecidableEq___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
uint8_t l_List_elem___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Data_Trie_insert___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_pushNone;
lean_object* l_Lean_Parser_checkLinebreakBefore(lean_object*);
lean_object* l_Lean_Parser_checkColEq(lean_object*);
extern lean_object* l_Lean_Parser_Term_structInstField;
lean_object* l_Lean_Parser_withAntiquotSpliceAndSuffix(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkColGe(lean_object*);
lean_object* l_Lean_Parser_sepBy(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_withPosition(lean_object*);
lean_object* l_Lean_Parser_Term_structInstFields(lean_object*);
lean_object* l_Lean_Parser_adaptUncacheableContextFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
uint8_t l_Lean_Parser_InputContext_atEnd(lean_object*, lean_object*);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_next_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ParserState_mkEOIError(lean_object*, lean_object*);
lean_object* l_Lean_Parser_satisfyFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_notFollowedBy(lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Syntax_getAtomVal(lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t lean_string_memcmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__0_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_versoText___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "versoText"};
static const lean_object* l_Lean_Doc_Parser_versoText___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__0_value;
static const lean_string_object l_Lean_Doc_Parser_versoText___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Doc_Parser_versoText___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_versoText___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l_Lean_Doc_Parser_versoText___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value;
static const lean_string_object l_Lean_Doc_Parser_versoText___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Doc_Parser_versoText___lam__0___closed__3 = (const lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoText___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoText___lam__0___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoText___lam__0___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__4_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoText___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__4_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 255, 240, 17, 75, 250, 253, 95)}};
static const lean_object* l_Lean_Doc_Parser_versoText___lam__0___closed__4 = (const lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoText___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoText___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__2___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoText___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoText___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoText___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoText___closed__0_value;
static const lean_closure_object l_Lean_Doc_Parser_versoText___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoText___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoText___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoText___closed__1_value;
static const lean_closure_object l_Lean_Doc_Parser_versoText___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoText___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoText___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_versoText___closed__2_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoText___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__1_value),((lean_object*)&l_Lean_Doc_Parser_versoText___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Doc_Parser_versoText___closed__3 = (const lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoText___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoText___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoText___closed__4 = (const lean_object*)&l_Lean_Doc_Parser_versoText___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoText = (const lean_object*)&l_Lean_Doc_Parser_versoText___closed__4_value;
static const lean_string_object l_Lean_Doc_Parser_versoRef___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "versoRef"};
static const lean_object* l_Lean_Doc_Parser_versoRef___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoRef___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoRef___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(50, 44, 27, 25, 170, 146, 153, 245)}};
static const lean_object* l_Lean_Doc_Parser_versoRef___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoRef___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoRef___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoRef___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoRef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoRef___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoRef___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoRef___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoRef___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoRef___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoRef___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoRef___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoRef = (const lean_object*)&l_Lean_Doc_Parser_versoRef___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "versoLinkUrl"};
static const lean_object* l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 188, 54, 130, 131, 60, 251, 148)}};
static const lean_object* l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoLinkUrl___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoLinkUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoLinkUrl___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoLinkUrl___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoLinkUrl___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoLinkUrl = (const lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "versoLinkRefUrl"};
static const lean_object* l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 57, 106, 22, 121, 78, 15, 41)}};
static const lean_object* l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoLinkRefUrl___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoLinkRefUrl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoLinkRefUrl___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoLinkRefUrl___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoLinkRefUrl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoLinkRefUrl___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoLinkRefUrl = (const lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "versoImageAlt"};
static const lean_object* l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(83, 180, 119, 241, 128, 95, 219, 17)}};
static const lean_object* l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoImageAlt___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoImageAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoImageAlt___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoImageAlt___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoImageAlt___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoImageAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoImageAlt___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoImageAlt___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoImageAlt___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoImageAlt = (const lean_object*)&l_Lean_Doc_Parser_versoImageAlt___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_versoCode___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "versoCode"};
static const lean_object* l_Lean_Doc_Parser_versoCode___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoCode___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoCode___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(27, 134, 52, 97, 245, 192, 23, 73)}};
static const lean_object* l_Lean_Doc_Parser_versoCode___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoCode___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoCode___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoCode___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoCode___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoCode___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoCode___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoCode___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoCode___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoCode___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoCode = (const lean_object*)&l_Lean_Doc_Parser_versoCode___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "versoCodeLine"};
static const lean_object* l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(58, 193, 253, 137, 135, 225, 29, 137)}};
static const lean_object* l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoCodeLine___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoCodeLine___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoCodeLine___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoCodeLine___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeLine___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeLine___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoCodeLine___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoCodeLine___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeLine___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoCodeLine = (const lean_object*)&l_Lean_Doc_Parser_versoCodeLine___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "versoCodeBlock"};
static const lean_object* l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 196, 91, 225, 102, 151, 154, 53)}};
static const lean_object* l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoCodeBlock___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_versoCodeBlock___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_versoCodeBlock___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_versoCodeBlock___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_versoCodeBlock___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_versoCodeBlock___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_versoCodeBlock = (const lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoTextKind = (const lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__4_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoRefKind = (const lean_object*)&l_Lean_Doc_Parser_versoRef___lam__0___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoLinkUrlKind = (const lean_object*)&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoLinkRefUrlKind = (const lean_object*)&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoImageAltKind = (const lean_object*)&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoCodeKind = (const lean_object*)&l_Lean_Doc_Parser_versoCode___lam__0___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoCodeLineKind = (const lean_object*)&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_versoCodeBlockKind = (const lean_object*)&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_parseFailureKind___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "parseFailure"};
static const lean_object* l_Lean_Doc_parseFailureKind___closed__0 = (const lean_object*)&l_Lean_Doc_parseFailureKind___closed__0_value;
static const lean_ctor_object l_Lean_Doc_parseFailureKind___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_parseFailureKind___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_parseFailureKind___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_parseFailureKind___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_parseFailureKind___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_parseFailureKind___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_parseFailureKind___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_parseFailureKind___closed__0_value),LEAN_SCALAR_PTR_LITERAL(7, 2, 249, 136, 81, 124, 239, 75)}};
static const lean_object* l_Lean_Doc_parseFailureKind___closed__1 = (const lean_object*)&l_Lean_Doc_parseFailureKind___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_parseFailureKind = (const lean_object*)&l_Lean_Doc_parseFailureKind___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Doc_longestBacktickRun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Doc_longestBacktickRun___closed__0 = (const lean_object*)&l_Lean_Doc_longestBacktickRun___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_longestBacktickRun(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_longestBacktickRun___boxed(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Doc_versoCodeBoundarySpaces___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l_Lean_Doc_versoCodeBoundarySpaces___closed__0 = (const lean_object*)&l_Lean_Doc_versoCodeBoundarySpaces___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Doc_versoCodeBoundarySpaces(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_versoCodeBoundarySpaces___boxed(lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoLinkUrl___closed__0___boxed__const__1;
static lean_once_cell_t l_Lean_Doc_escapeVersoLinkUrl___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_escapeVersoLinkUrl___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoLinkUrl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoLinkUrl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoImageAlt___closed__0___boxed__const__1;
static lean_once_cell_t l_Lean_Doc_escapeVersoImageAlt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_escapeVersoImageAlt___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoImageAlt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoImageAlt___boxed(lean_object*);
static lean_once_cell_t l_Lean_TSyntax_getVersoText___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TSyntax_getVersoText___closed__0;
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoText(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoText___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoTextSource(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoTextSource___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoRefName(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoRefName___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkUrl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkUrl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkRefUrl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkRefUrl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoImageAlt(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoImageAlt___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLine(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLine___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLines(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLines___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_getVersoCode_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_getVersoCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCode(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCode___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlockLines(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlockLines___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlock(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlock___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoText_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoText_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoRefName_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoRefName_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkUrl_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkUrl_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkRefUrl_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkRefUrl_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoImageAlt_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoImageAlt_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeLine_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeLine_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCode_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCode_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeBlock_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeBlock_view___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ArgVal.str"};
static const lean_object* l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__0_value;
static const lean_string_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ArgVal"};
static const lean_object* l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "str"};
static const lean_object* l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(41, 57, 249, 217, 203, 152, 202, 12)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(165, 66, 72, 255, 161, 123, 180, 197)}};
static const lean_object* l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_ArgVal_str___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_ArgVal_str___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_ArgVal_str___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_ArgVal_str___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_str___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_str___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_ArgVal_str___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_str___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_ArgVal_str = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_str___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ArgVal.ident"};
static const lean_object* l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__0_value;
static const lean_string_object l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(41, 57, 249, 217, 203, 152, 202, 12)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(46, 191, 138, 67, 72, 90, 15, 127)}};
static const lean_object* l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_ArgVal_ident___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_ArgVal_ident___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_ArgVal_ident___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_ArgVal_ident___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_ident___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_ArgVal_ident___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_ArgVal_ident = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_ident___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ArgVal.num"};
static const lean_object* l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__0_value;
static const lean_string_object l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(41, 57, 249, 217, 203, 152, 202, 12)}};
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(233, 188, 228, 197, 246, 25, 189, 153)}};
static const lean_object* l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_ArgVal_num___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_ArgVal_num___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_ArgVal_num___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_ArgVal_num___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_num___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_ArgVal_num___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_ArgVal_num___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_ArgVal_num___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_num___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_ArgVal_num = (const lean_object*)&l_Lean_Doc_Parser_ArgVal_num___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_argVal___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "argVal"};
static const lean_object* l_Lean_Doc_Parser_argVal___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_argVal___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_argVal___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_argVal___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_argVal___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_argVal___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_argVal___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_argVal___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_argVal___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_argVal___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(169, 119, 50, 194, 18, 139, 234, 159)}};
static const lean_object* l_Lean_Doc_Parser_argVal___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_argVal___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_argVal___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_argVal___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_argVal___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_argVal___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_argVal___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_argVal___lam__0___closed__4;
static lean_once_cell_t l_Lean_Doc_Parser_argVal___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_argVal___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_argVal___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_argVal___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_argVal___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_argVal___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_argVal___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_argVal___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_argVal___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_argVal___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_argVal___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_argVal = (const lean_object*)&l_Lean_Doc_Parser_argVal___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_Arg_anon___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "anon"};
static const lean_object* l_Lean_Doc_Parser_Arg_anon___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__0_value;
static const lean_string_object l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Arg"};
static const lean_object* l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(66, 217, 102, 251, 143, 78, 17, 105)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 126, 223, 228, 215, 141, 22, 177)}};
static const lean_object* l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_anon___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_anon___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_anon___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Arg_anon___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_Arg_anon___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Arg_anon___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_anon___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_anon___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Arg_anon___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Arg_anon___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_anon___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Arg_anon = (const lean_object*)&l_Lean_Doc_Parser_Arg_anon___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Anonymous positional argument"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "named"};
static const lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(66, 217, 102, 251, 143, 78, 17, 105)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(195, 213, 136, 95, 26, 15, 91, 243)}};
static const lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__3;
static const lean_string_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__4 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__5;
static const lean_string_object l_Lean_Doc_Parser_Arg_named___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__6 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__7;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__8;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__9;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__10;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__11;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named___lam__0___closed__12;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_named___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Arg_named___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_Arg_named___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Arg_named___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Arg_named___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Arg_named___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Arg_named = (const lean_object*)&l_Lean_Doc_Parser_Arg_named___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Named argument"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "named_no_paren"};
static const lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(66, 217, 102, 251, 143, 78, 17, 105)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 130, 4, 13, 153, 240, 131, 1)}};
static const lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Arg_named__no__paren___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_Arg_named__no__paren___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_named__no__paren___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Arg_named__no__paren = (const lean_object*)&l_Lean_Doc_Parser_Arg_named__no__paren___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named__no__paren___regBuiltin_Lean_Doc_Parser_Arg_named__no__paren_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named__no__paren___regBuiltin_Lean_Doc_Parser_Arg_named__no__paren_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "flag_on"};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(66, 217, 102, 251, 143, 78, 17, 105)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(199, 11, 92, 179, 92, 210, 69, 32)}};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "+"};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__4;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Arg_flag__on___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_Arg_flag__on___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Arg_flag__on___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__on___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__on___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Arg_flag__on = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__on___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Boolean flag, turned on"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "flag_off"};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(66, 217, 102, 251, 143, 78, 17, 105)}};
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 14, 2, 143, 165, 169, 65, 229)}};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "-"};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__4;
static lean_once_cell_t l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Arg_flag__off___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_Arg_flag__off___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Arg_flag__off___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Arg_flag__off___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Arg_flag__off___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Arg_flag__off = (const lean_object*)&l_Lean_Doc_Parser_Arg_flag__off___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Boolean flag, turned off"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_arg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arg"};
static const lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_arg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_arg___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_arg___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_arg___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_arg___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_arg___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_arg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_arg___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_arg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 92, 75, 80, 50, 63, 75, 21)}};
static const lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_arg___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_arg___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_arg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_arg___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__4;
static lean_once_cell_t l_Lean_Doc_Parser_arg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__5;
static lean_once_cell_t l_Lean_Doc_Parser_arg___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__6;
static lean_once_cell_t l_Lean_Doc_Parser_arg___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__7;
static lean_once_cell_t l_Lean_Doc_Parser_arg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_arg___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_arg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_arg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_arg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_arg___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_arg___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_arg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_arg___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_arg___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_arg___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_arg = (const lean_object*)&l_Lean_Doc_Parser_arg___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "url"};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__0_value;
static const lean_string_object l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "LinkTarget"};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 244, 114, 61, 113, 148, 117, 178)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 222, 147, 211, 241, 202, 7, 251)}};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__4;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__5;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_LinkTarget_url___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_LinkTarget_url___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_LinkTarget_url___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_url___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_url___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_LinkTarget_url = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "A URL target, written explicitly. Use square brackets for a named target."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(13, 244, 114, 61, 113, 148, 117, 178)}};
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value_aux_3),((lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 54, 241, 38, 78, 206, 156, 5)}};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__3;
static const lean_string_object l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__4 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__5;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__6;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__7;
static lean_once_cell_t l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__8;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_LinkTarget_ref___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_LinkTarget_ref___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_LinkTarget_ref___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_LinkTarget_ref___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_LinkTarget_ref___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_LinkTarget_ref = (const lean_object*)&l_Lean_Doc_Parser_LinkTarget_ref___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "A named reference to a URL defined elsewhere. Use parentheses to write the URL here."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1___boxed(lean_object*);
static const lean_string_object l_Lean_Doc_Parser_linkTarget___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "linkTarget"};
static const lean_object* l_Lean_Doc_Parser_linkTarget___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_linkTarget___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_linkTarget___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(134, 252, 192, 153, 19, 197, 24, 81)}};
static const lean_object* l_Lean_Doc_Parser_linkTarget___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_linkTarget___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_linkTarget___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_linkTarget___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_linkTarget___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_linkTarget___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_linkTarget___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_linkTarget___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_linkTarget___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_linkTarget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_linkTarget___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_linkTarget___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_linkTarget___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_linkTarget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_linkTarget___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_linkTarget___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_linkTarget___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_linkTarget = (const lean_object*)&l_Lean_Doc_Parser_linkTarget___closed__1_value;
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__0(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__1(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__0(uint32_t, uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "one or more '"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1(uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "'*', '-', or '+'"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__0_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__3, .m_arity = 5, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__1_value),((lean_object*)&l_Lean_Doc_Parser_versoText___closed__2_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__1_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___closed__2_value;
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__0___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__1(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "'.' or ')'"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "'0'-'9'"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "a number followed by '.' or ')'"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__0_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__1_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__1_value)} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__2_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__0_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__2_value)} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__3 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__3_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__3, .m_arity = 5, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__1_value),((lean_object*)&l_Lean_Doc_Parser_versoText___closed__2_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__3_value)} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__4 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__4_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__4_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__5 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__5_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___closed__5_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "%%%"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0(lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "metadataContents"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "structInstFields"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(0, 82, 141, 43, 62, 171, 163, 69)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__4;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__5 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__5_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__6;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sepBy"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__7 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__7_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(196, 56, 254, 223, 11, 70, 55, 147)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__8 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__8_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "*"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__9 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__9_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__10;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__11;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "irrelevant"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__12 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__12_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__13;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__14;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__15;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "line break"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__16 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__16_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__17;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__18;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__19;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__20;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__21;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__22;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__23;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__24;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__0_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__1_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___closed__2_value;
static const lean_string_object l_Lean_Doc_Parser_headerMarker___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "headerMarker"};
static const lean_object* l_Lean_Doc_Parser_headerMarker___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_headerMarker___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_headerMarker___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(79, 163, 210, 90, 152, 248, 144, 166)}};
static const lean_object* l_Lean_Doc_Parser_headerMarker___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_headerMarker___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_headerMarker___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_headerMarker___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_headerMarker___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_headerMarker___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_headerMarker___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_headerMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_headerMarker___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_headerMarker___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_headerMarker___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_headerMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_headerMarker___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_headerMarker___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_headerMarker___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_headerMarker = (const lean_object*)&l_Lean_Doc_Parser_headerMarker___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_listMarker___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "listMarker"};
static const lean_object* l_Lean_Doc_Parser_listMarker___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_listMarker___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_listMarker___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 134, 18, 7, 181, 33, 85, 37)}};
static const lean_object* l_Lean_Doc_Parser_listMarker___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_listMarker___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_listMarker___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_listMarker___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_listMarker___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_listMarker___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_listMarker___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_listMarker___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_listMarker___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_listMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_listMarker___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_listMarker___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_listMarker___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_listMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_listMarker___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_listMarker___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_listMarker___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_listMarker = (const lean_object*)&l_Lean_Doc_Parser_listMarker___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___closed__1_value;
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__0(uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__0___boxed(lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__0_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__1;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "':'"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__0_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3, .m_arity = 5, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__1_value),((lean_object*)&l_Lean_Doc_Parser_versoText___closed__2_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__0_value)} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__1_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__2_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___closed__2_value;
static const lean_string_object l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "emphDelimiter"};
static const lean_object* l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(14, 57, 61, 189, 31, 180, 10, 101)}};
static const lean_object* l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_emphDelimiter___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_emphDelimiter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_emphDelimiter___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_emphDelimiter___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_emphDelimiter___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_emphDelimiter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_emphDelimiter___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_emphDelimiter___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_emphDelimiter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_emphDelimiter = (const lean_object*)&l_Lean_Doc_Parser_emphDelimiter___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "boldDelimiter"};
static const lean_object* l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(187, 9, 73, 54, 22, 222, 115, 214)}};
static const lean_object* l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_boldDelimiter___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_boldDelimiter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_boldDelimiter___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_boldDelimiter___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_boldDelimiter___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_boldDelimiter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_boldDelimiter___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_boldDelimiter___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_boldDelimiter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_boldDelimiter = (const lean_object*)&l_Lean_Doc_Parser_boldDelimiter___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "codeDelimiter"};
static const lean_object* l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 116, 135, 82, 225, 37, 203, 104)}};
static const lean_object* l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_codeDelimiter___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_codeDelimiter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_codeDelimiter___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_codeDelimiter___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_codeDelimiter___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_codeDelimiter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_codeDelimiter___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_codeDelimiter___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_codeDelimiter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_codeDelimiter = (const lean_object*)&l_Lean_Doc_Parser_codeDelimiter___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "codeBlockFence"};
static const lean_object* l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 154, 39, 84, 226, 168, 56, 199)}};
static const lean_object* l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_codeBlockFence___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_codeBlockFence___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_codeBlockFence___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_codeBlockFence___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_codeBlockFence___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_codeBlockFence___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_codeBlockFence___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_codeBlockFence___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_codeBlockFence___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_codeBlockFence = (const lean_object*)&l_Lean_Doc_Parser_codeBlockFence___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "inlineMathMarker"};
static const lean_object* l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(102, 9, 108, 134, 130, 7, 90, 114)}};
static const lean_object* l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "$"};
static const lean_object* l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_inlineMathMarker___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_inlineMathMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_inlineMathMarker___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_inlineMathMarker___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_inlineMathMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_inlineMathMarker___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_inlineMathMarker = (const lean_object*)&l_Lean_Doc_Parser_inlineMathMarker___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "displayMathMarker"};
static const lean_object* l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(191, 18, 116, 40, 86, 165, 207, 150)}};
static const lean_object* l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "$$"};
static const lean_object* l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__2 = (const lean_object*)&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_displayMathMarker___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_displayMathMarker___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_displayMathMarker___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_displayMathMarker___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_displayMathMarker___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_displayMathMarker___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_displayMathMarker___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_displayMathMarker___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_displayMathMarker___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_displayMathMarker = (const lean_object*)&l_Lean_Doc_Parser_displayMathMarker___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "directiveDelimiter"};
static const lean_object* l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(190, 28, 38, 38, 72, 11, 173, 25)}};
static const lean_object* l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_directiveDelimiter___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_directiveDelimiter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_directiveDelimiter___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_directiveDelimiter___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_directiveDelimiter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_directiveDelimiter___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_directiveDelimiter = (const lean_object*)&l_Lean_Doc_Parser_directiveDelimiter___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_runLength(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_runLength___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths_spec__0(uint32_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "' to close what '"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "' opened"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "code"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Inline"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(232, 30, 73, 79, 76, 254, 8, 196)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__1_value),((lean_object*)&l_Lean_Doc_Parser_versoText___closed__2_value)} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "linebreak"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(175, 150, 35, 119, 78, 160, 253, 84)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "image"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(63, 170, 102, 209, 119, 14, 254, 233)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "!["};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__6;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__7;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "footnote"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(44, 121, 147, 210, 143, 103, 0, 217)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "[^"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__5;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "inline_math"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 236, 9, 179, 133, 206, 252, 7)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "display_math"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 39, 73, 53, 10, 24, 181, 77)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 133, 107, 199, 31, 216, 160, 200)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__1___boxed(lean_object*);
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__0_value;
static const lean_closure_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "bold"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__2_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(162, 21, 54, 220, 135, 144, 211, 134)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__0_value),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___boxed__const__1;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__0;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "emph"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 215, 18, 85, 144, 91, 153, 50)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___boxed__const__1;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__2;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "link"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(250, 237, 8, 103, 58, 149, 183, 251)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__3;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__4 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__4_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__4_value),LEAN_SCALAR_PTR_LITERAL(8, 108, 76, 164, 130, 208, 234, 146)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__6;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__7;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "role"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__1_value),LEAN_SCALAR_PTR_LITERAL(42, 167, 130, 205, 218, 188, 181, 74)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(163, 233, 178, 241, 96, 238, 218, 92)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__5 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__5_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__7 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__7_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__8 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__8_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__9;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__10;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__11;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Inline_text___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Inline_text___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Inline_text;
static const lean_closure_object l_Lean_Doc_Parser_Inline_emph___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Inline_emph___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Inline_emph___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Inline_emph___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Inline_emph___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Inline_emph___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Inline_emph___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Inline_emph = (const lean_object*)&l_Lean_Doc_Parser_Inline_emph___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 120, .m_capacity = 120, .m_length = 119, .m_data = "Emphasis, often rendered as italics.\n\nEmphasis may be nested by using longer sequences of `_` for the outer delimiters."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Inline_bold___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Inline_bold___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Inline_bold___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Inline_bold___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Inline_bold___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Inline_bold___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Inline_bold___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Inline_bold = (const lean_object*)&l_Lean_Doc_Parser_Inline_bold___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 163, .m_capacity = 163, .m_length = 162, .m_data = "Bold emphasis.\n\nA single `*` suffices to make text bold. Use `_` for emphasis.\n\nBold text may be nested by using longer sequences of `*` for the outer delimiters."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1___boxed(lean_object*);
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Inline_code = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 447, .m_capacity = 447, .m_length = 446, .m_data = "Literal code.\n\nCode may begin with any non-zero number of backticks. It must be terminated with the same number,\nand it may not contain a sequence of backticks that is at least as long as its starting or ending\ndelimiters.\n\nIf the first and last characters are space, and it contains at least one non-space character, then\nthe resulting string has a single space stripped from each end. Thus, ``` `` `x `` ``` represents\n``\"`x\"``, not ``\" `x \"``."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Inline_inline__math;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Inline mathematical notation (equivalent to LaTeX's `$` notation)"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Inline_display__math;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Display-mode mathematical notation"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Inline_link___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Inline_link___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Inline_link___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Inline_link___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Inline_link___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Inline_link___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Inline_link___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Inline_link = (const lean_object*)&l_Lean_Doc_Parser_Inline_link___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 125, .m_capacity = 125, .m_length = 124, .m_data = "A link. The link's target may either be a concrete URL (written in parentheses) or a named URL\n(written in square brackets)."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Inline_image___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Inline_image___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Inline_image;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 220, .m_capacity = 220, .m_length = 219, .m_data = "An image, with alternate text and a URL.\n\nThe alternate text is a plain string, rather than Verso markup.\n\nThe image URL may either be a concrete URL (written in parentheses) or a named URL (written in\nsquare brackets)."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Inline_footnote___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Inline_footnote___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Inline_footnote;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 92, .m_capacity = 92, .m_length = 91, .m_data = "A footnote use site.\n\nFootnotes must be defined elsewhere using the `[^NAME]: TEXT` syntax."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Inline_linebreak___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Inline_linebreak___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Inline_linebreak;
static const lean_closure_object l_Lean_Doc_Parser_Inline_role___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Inline_role___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Inline_role___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Inline_role___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Inline_role___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Inline_role___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Inline_role___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Inline_role = (const lean_object*)&l_Lean_Doc_Parser_Inline_role___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 763, .m_capacity = 763, .m_length = 762, .m_data = "A _role_ is an extension to the Verso document language in an inline position.\n\nText is given a role using the following syntax: `{NAME ARGS*}[CONTENT]`. The `NAME` is an\nidentifier that determines which role is being used, akin to a function name. Each of the `ARGS` may\nhave the following forms:\n* A value, which is a string literal, natural number, or identifier\n* A named argument, of the form `(NAME := VALUE)`\n* A flag, of the form `+NAME` or `-NAME`\n\nThe `CONTENT` is a sequence of inline content. If there is only one piece of content and it has\nbeginning and ending delimiters (e.g. code literals, links, or images, but not ordinary text), then\nthe `[` and `]` may be omitted. In particular, `` {NAME ARGS*}`x` `` is equivalent to\n``{NAME ARGS*}[`x`]``."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_inline___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_inline___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_inline___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_inline___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_inline___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_inline___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_inline___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_inline = (const lean_object*)&l_Lean_Doc_Parser_inline___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "para"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Block"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(10, 167, 213, 66, 92, 160, 222, 146)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "command"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(11, 232, 253, 29, 141, 75, 139, 21)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "metadata_block"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(99, 125, 116, 48, 167, 45, 110, 42)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "link_ref"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 199, 233, 128, 119, 237, 18, 215)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "]:"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__5;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__6;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "footnote_ref"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(97, 53, 29, 246, 154, 171, 121, 154)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__5;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "header"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(242, 176, 128, 73, 36, 235, 244, 141)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "codeblock"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 32, 43, 99, 217, 167, 97, 87)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__5;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__6;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dl"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 15, 76, 66, 114, 120, 124, 74)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "DescItem.item"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "item"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__2_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "DescItem"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(99, 70, 30, 3, 105, 156, 130, 115)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(37, 193, 144, 210, 183, 212, 114, 89)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4_value),((lean_object*)&l_Lean_Doc_Parser_inline___closed__0_value)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__3 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__3_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__5;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ul"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(144, 45, 1, 212, 241, 159, 201, 84)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "ListItem.item"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__0_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ListItem"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__1_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(154, 153, 101, 209, 126, 16, 11, 208)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__2_value),LEAN_SCALAR_PTR_LITERAL(200, 123, 16, 134, 76, 179, 171, 228)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ol"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(222, 199, 227, 191, 40, 60, 185, 243)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "blockquote"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(130, 145, 178, 243, 42, 6, 105, 104)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ">"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__2 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__2_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__0;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "directive"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__0_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__1_value),LEAN_SCALAR_PTR_LITERAL(205, 190, 169, 215, 54, 10, 232, 8)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value_aux_3),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 234, 1, 42, 159, 198, 19, 176)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "block"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__5 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__5_value;
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value_aux_2),((lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__5_value),LEAN_SCALAR_PTR_LITERAL(183, 72, 202, 40, 103, 170, 246, 9)}};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6_value;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__7;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__9;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__8;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__10;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__4;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__11;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__3;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__12;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__2;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__13;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__1;
static lean_once_cell_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__14;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_ListItem_item___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_listMarker___closed__1_value)} };
static const lean_object* l_Lean_Doc_Parser_ListItem_item___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_ListItem_item___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_ListItem_item___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_ListItem_item___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_ListItem_item___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_ListItem_item___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_ListItem_item = (const lean_object*)&l_Lean_Doc_Parser_ListItem_item___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "A list item"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_DescItem_item___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_DescItem_item___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_DescItem_item___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_DescItem_item___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_DescItem_item___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_DescItem_item___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_DescItem_item___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_DescItem_item = (const lean_object*)&l_Lean_Doc_Parser_DescItem_item___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "A description of an item"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Block_para___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Block_para___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Block_para;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Paragraph"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Block_ul___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Block_ul___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Block_ul___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Block_ul___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Block_ul___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Block_ul___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Block_ul___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Block_ul = (const lean_object*)&l_Lean_Doc_Parser_Block_ul___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Unordered List"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Block_ol___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Block_ol___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Block_ol___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Block_ol___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Block_ol___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Block_ol___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Block_ol___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Block_ol = (const lean_object*)&l_Lean_Doc_Parser_Block_ol___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Ordered list"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Block_dl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Block_dl___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Block_dl___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Block_dl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Block_dl___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Block_dl___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Block_dl___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Block_dl = (const lean_object*)&l_Lean_Doc_Parser_Block_dl___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Description list"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Block_blockquote___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Block_blockquote___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Block_blockquote___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Block_blockquote___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Block_blockquote___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Block_blockquote___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Block_blockquote___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Block_blockquote = (const lean_object*)&l_Lean_Doc_Parser_Block_blockquote___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 91, .m_capacity = 91, .m_length = 90, .m_data = "A quotation, which contains a sequence of blocks that are at least as indented as the `>`."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Block_codeblock___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Block_codeblock___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Block_codeblock;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1332, .m_capacity = 1332, .m_length = 1331, .m_data = "A code block that contains literal code. The contents of a code block are not written in Verso\nsyntax.\n\nCode blocks have the following syntax:\n````\n```(NAME ARGS*)\?\nCONTENT\n```\n````\n\n`CONTENT` is a literal string. If the `CONTENT` contains a sequence of three or more backticks, then\nthe opening and closing ` ``` ` (called _fences_) must have more backticks than the longest\nsequence in `CONTENT`. Additionally, the opening and closing fences must have the same number of\nbackticks.\n\nIf `NAME` and `ARGS` are not provided, then the code block represents literal text. If provided, the\n`NAME` is an identifier that selects an interpretation of the block. Unlike Markdown, this name is\nnot necessarily the language in which the code is written, though many custom code blocks are, in\npractice, named after the language that they contain. `NAME` is more akin to a function name that\ndetermines the interpretation of the code block's contents. Each of the `ARGS` may have the\nfollowing forms:\n* A value, which is a string literal, natural number, or identifier\n* A named argument, of the form `(NAME := VALUE)`\n* A flag, of the form `+NAME` or `-NAME`\n\nThe `CONTENT` is interpreted according to the indentation of the fences. If the fences are indented\n`n` spaces, then `n` spaces are removed from the start of each line of `CONTENT`."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_Block_directive___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_Block_directive___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_Block_directive___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_Block_directive___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_Block_directive___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_Block_directive___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_Block_directive___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_Block_directive = (const lean_object*)&l_Lean_Doc_Parser_Block_directive___closed__1_value;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 730, .m_capacity = 730, .m_length = 729, .m_data = "A _directive_, which is an extension to the Verso language in block position. The contents of a\ndirective are written in Verso syntax.\n\nDirectives have the following syntax:\n```\n:::NAME ARGS*\nCONTENT*\n:::\n```\n\nThe `NAME` is an identifier that determines which directive is being used, akin to a function name.\nEach of the `ARGS` may have the following forms:\n* A value, which is a string literal, natural number, or identifier\n* A named argument, of the form `(NAME := VALUE)`\n* A flag, of the form `+NAME` or `-NAME`\n\nThe `CONTENT` is a sequence of block content. Directives may be nested by using more colons in\nthe outer directive. For example:\n```\n::::outer +flag (arg := 5)\nA paragraph.\n:::inner \"label\"\n* 1\n* 2\n:::\n::::\n```"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Block_header___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Block_header___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Block_header;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 202, .m_capacity = 202, .m_length = 201, .m_data = "A header\n\nHeaders must be correctly nested to form a tree structure. The first header in a document must\nstart with `#`, and subsequent headers must have at most one more `#` than the preceding header."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Block_link__ref___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Block_link__ref___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Block_link__ref;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "A named URL that can be used in links and images."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Block_footnote__ref___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Block_footnote__ref___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Block_footnote__ref;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A footnote definition."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Block_metadata__block___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Block_metadata__block___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Block_metadata__block;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Metadata for the preceding header."};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1___boxed(lean_object*);
static lean_once_cell_t l_Lean_Doc_Parser_Block_command___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_Block_command___closed__0;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Block_command;
static const lean_string_object l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 390, .m_capacity = 390, .m_length = 389, .m_data = "A block-level command, which invokes an extension during documentation processing.\n\nThe `NAME` is an identifier that determines which command is being used, akin to a function name.\nEach of the `ARGS` may have the following forms:\n* A value, which is a string literal, natural number, or identifier\n* A named argument, of the form `(NAME := VALUE)`\n* A flag, of the form `+NAME` or `-NAME`"};
static const lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1___closed__0 = (const lean_object*)&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1();
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_block___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_block___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_block___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_block___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_block___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_block___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_block___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_block = (const lean_object*)&l_Lean_Doc_Parser_block___closed__1_value;
static const lean_string_object l_Lean_Doc_Parser_document___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "document"};
static const lean_object* l_Lean_Doc_Parser_document___lam__0___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_document___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_document___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Doc_Parser_document___lam__0___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_document___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(78, 12, 7, 185, 212, 110, 129, 118)}};
static const lean_ctor_object l_Lean_Doc_Parser_document___lam__0___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_document___lam__0___closed__1_value_aux_1),((lean_object*)&l_Lean_Doc_Parser_versoText___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(191, 226, 227, 15, 42, 238, 219, 32)}};
static const lean_ctor_object l_Lean_Doc_Parser_document___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_document___lam__0___closed__1_value_aux_2),((lean_object*)&l_Lean_Doc_Parser_document___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(234, 113, 152, 229, 184, 253, 250, 127)}};
static const lean_object* l_Lean_Doc_Parser_document___lam__0___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_document___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Doc_Parser_document___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_document___lam__0___closed__2;
static lean_once_cell_t l_Lean_Doc_Parser_document___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_document___lam__0___closed__3;
static lean_once_cell_t l_Lean_Doc_Parser_document___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_Parser_document___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document___lam__0(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_Parser_document___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_Parser_document___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_Parser_document___closed__0 = (const lean_object*)&l_Lean_Doc_Parser_document___closed__0_value;
static const lean_ctor_object l_Lean_Doc_Parser_document___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_Parser_versoText___closed__3_value),((lean_object*)&l_Lean_Doc_Parser_document___closed__0_value)}};
static const lean_object* l_Lean_Doc_Parser_document___closed__1 = (const lean_object*)&l_Lean_Doc_Parser_document___closed__1_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_Parser_document = (const lean_object*)&l_Lean_Doc_Parser_document___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_TSyntax_getVersoBlocks_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_TSyntax_getVersoBlocks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoBlocks(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoBlocks___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoDelimiter(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoDelimiter___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDocument_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDocument_view___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDelimiter_view(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDelimiter_view___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_instCoeVersoDocumentTSyntaxArrayConsSyntaxNodeKindMkStr4Nil___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_getVersoBlocks___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instCoeVersoDocumentTSyntaxArrayConsSyntaxNodeKindMkStr4Nil___closed__0 = (const lean_object*)&l_Lean_Doc_instCoeVersoDocumentTSyntaxArrayConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeVersoDocumentTSyntaxArrayConsSyntaxNodeKindMkStr4Nil = (const lean_object*)&l_Lean_Doc_instCoeVersoDocumentTSyntaxArrayConsSyntaxNodeKindMkStr4Nil___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___lam__0___boxed(lean_object*);
static const lean_closure_object l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__1 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__2 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__3 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__4 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__5 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__6 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__7 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__8 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__9 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__10 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__11 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__12 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__13 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__14 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__15 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__16 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__17 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__18 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__19 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__20 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__21 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean__22 = (const lean_object*)&l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___lam__0(lean_object* v_p_1_, lean_object* v_c_2_, lean_object* v_s_3_){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v_fn_6_; lean_object* v___x_7_; 
v___x_4_ = lean_box(0);
v___x_5_ = lean_apply_1(v_p_1_, v___x_4_);
v_fn_6_ = lean_ctor_get(v___x_5_, 1);
lean_inc_ref(v_fn_6_);
lean_dec_ref(v___x_5_);
v___x_7_ = lean_apply_2(v_fn_6_, v_c_2_, v_s_3_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse(lean_object* v_p_12_){
_start:
{
lean_object* v___f_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___f_13_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___lam__0), 3, 1);
lean_closure_set(v___f_13_, 0, v_p_12_);
v___x_14_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_onFirstUse___closed__1));
v___x_15_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_15_, 0, v___x_14_);
lean_ctor_set(v___x_15_, 1, v___f_13_);
return v___x_15_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoText___lam__0___closed__5(void){
_start:
{
uint8_t v___x_25_; uint8_t v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; 
v___x_25_ = 0;
v___x_26_ = 1;
v___x_27_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___lam__0___closed__4));
v___x_28_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___lam__0___closed__0));
v___x_29_ = l_Lean_Parser_mkAntiquot(v___x_28_, v___x_27_, v___x_26_, v___x_25_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__0(lean_object* v_c_30_, lean_object* v_s_31_){
_start:
{
lean_object* v___x_32_; lean_object* v_fn_33_; lean_object* v___x_34_; 
v___x_32_ = lean_obj_once(&l_Lean_Doc_Parser_versoText___lam__0___closed__5, &l_Lean_Doc_Parser_versoText___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_versoText___lam__0___closed__5);
v_fn_33_ = lean_ctor_get(v___x_32_, 1);
lean_inc_ref(v_fn_33_);
v___x_34_ = lean_apply_2(v_fn_33_, v_c_30_, v_s_31_);
return v___x_34_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__1(lean_object* v___y_35_){
_start:
{
lean_inc(v___y_35_);
return v___y_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__1___boxed(lean_object* v___y_36_){
_start:
{
lean_object* v_res_37_; 
v_res_37_ = l_Lean_Doc_Parser_versoText___lam__1(v___y_36_);
lean_dec(v___y_36_);
return v_res_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__2(lean_object* v___y_38_){
_start:
{
lean_inc_ref(v___y_38_);
return v___y_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoText___lam__2___boxed(lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l_Lean_Doc_Parser_versoText___lam__2(v___y_39_);
lean_dec_ref(v___y_39_);
return v_res_40_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoRef___lam__0___closed__2(void){
_start:
{
uint8_t v___x_58_; uint8_t v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_58_ = 0;
v___x_59_ = 1;
v___x_60_ = ((lean_object*)(l_Lean_Doc_Parser_versoRef___lam__0___closed__1));
v___x_61_ = ((lean_object*)(l_Lean_Doc_Parser_versoRef___lam__0___closed__0));
v___x_62_ = l_Lean_Parser_mkAntiquot(v___x_61_, v___x_60_, v___x_59_, v___x_58_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoRef___lam__0(lean_object* v_c_63_, lean_object* v_s_64_){
_start:
{
lean_object* v___x_65_; lean_object* v_fn_66_; lean_object* v___x_67_; 
v___x_65_ = lean_obj_once(&l_Lean_Doc_Parser_versoRef___lam__0___closed__2, &l_Lean_Doc_Parser_versoRef___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_versoRef___lam__0___closed__2);
v_fn_66_ = lean_ctor_get(v___x_65_, 1);
lean_inc_ref(v_fn_66_);
v___x_67_ = lean_apply_2(v_fn_66_, v_c_63_, v_s_64_);
return v___x_67_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__2(void){
_start:
{
uint8_t v___x_79_; uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_79_ = 0;
v___x_80_ = 1;
v___x_81_ = ((lean_object*)(l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__1));
v___x_82_ = ((lean_object*)(l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__0));
v___x_83_ = l_Lean_Parser_mkAntiquot(v___x_82_, v___x_81_, v___x_80_, v___x_79_);
return v___x_83_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoLinkUrl___lam__0(lean_object* v_c_84_, lean_object* v_s_85_){
_start:
{
lean_object* v___x_86_; lean_object* v_fn_87_; lean_object* v___x_88_; 
v___x_86_ = lean_obj_once(&l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__2, &l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_versoLinkUrl___lam__0___closed__2);
v_fn_87_ = lean_ctor_get(v___x_86_, 1);
lean_inc_ref(v_fn_87_);
v___x_88_ = lean_apply_2(v_fn_87_, v_c_84_, v_s_85_);
return v___x_88_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__2(void){
_start:
{
uint8_t v___x_100_; uint8_t v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_100_ = 0;
v___x_101_ = 1;
v___x_102_ = ((lean_object*)(l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__1));
v___x_103_ = ((lean_object*)(l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__0));
v___x_104_ = l_Lean_Parser_mkAntiquot(v___x_103_, v___x_102_, v___x_101_, v___x_100_);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoLinkRefUrl___lam__0(lean_object* v_c_105_, lean_object* v_s_106_){
_start:
{
lean_object* v___x_107_; lean_object* v_fn_108_; lean_object* v___x_109_; 
v___x_107_ = lean_obj_once(&l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__2, &l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_versoLinkRefUrl___lam__0___closed__2);
v_fn_108_ = lean_ctor_get(v___x_107_, 1);
lean_inc_ref(v_fn_108_);
v___x_109_ = lean_apply_2(v_fn_108_, v_c_105_, v_s_106_);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__2(void){
_start:
{
uint8_t v___x_121_; uint8_t v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_121_ = 0;
v___x_122_ = 1;
v___x_123_ = ((lean_object*)(l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__1));
v___x_124_ = ((lean_object*)(l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__0));
v___x_125_ = l_Lean_Parser_mkAntiquot(v___x_124_, v___x_123_, v___x_122_, v___x_121_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoImageAlt___lam__0(lean_object* v_c_126_, lean_object* v_s_127_){
_start:
{
lean_object* v___x_128_; lean_object* v_fn_129_; lean_object* v___x_130_; 
v___x_128_ = lean_obj_once(&l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__2, &l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_versoImageAlt___lam__0___closed__2);
v_fn_129_ = lean_ctor_get(v___x_128_, 1);
lean_inc_ref(v_fn_129_);
v___x_130_ = lean_apply_2(v_fn_129_, v_c_126_, v_s_127_);
return v___x_130_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoCode___lam__0___closed__2(void){
_start:
{
uint8_t v___x_142_; uint8_t v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_142_ = 0;
v___x_143_ = 1;
v___x_144_ = ((lean_object*)(l_Lean_Doc_Parser_versoCode___lam__0___closed__1));
v___x_145_ = ((lean_object*)(l_Lean_Doc_Parser_versoCode___lam__0___closed__0));
v___x_146_ = l_Lean_Parser_mkAntiquot(v___x_145_, v___x_144_, v___x_143_, v___x_142_);
return v___x_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoCode___lam__0(lean_object* v_c_147_, lean_object* v_s_148_){
_start:
{
lean_object* v___x_149_; lean_object* v_fn_150_; lean_object* v___x_151_; 
v___x_149_ = lean_obj_once(&l_Lean_Doc_Parser_versoCode___lam__0___closed__2, &l_Lean_Doc_Parser_versoCode___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_versoCode___lam__0___closed__2);
v_fn_150_ = lean_ctor_get(v___x_149_, 1);
lean_inc_ref(v_fn_150_);
v___x_151_ = lean_apply_2(v_fn_150_, v_c_147_, v_s_148_);
return v___x_151_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__2(void){
_start:
{
uint8_t v___x_163_; uint8_t v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
v___x_163_ = 0;
v___x_164_ = 1;
v___x_165_ = ((lean_object*)(l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__1));
v___x_166_ = ((lean_object*)(l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__0));
v___x_167_ = l_Lean_Parser_mkAntiquot(v___x_166_, v___x_165_, v___x_164_, v___x_163_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoCodeLine___lam__0(lean_object* v_c_168_, lean_object* v_s_169_){
_start:
{
lean_object* v___x_170_; lean_object* v_fn_171_; lean_object* v___x_172_; 
v___x_170_ = lean_obj_once(&l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__2, &l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_versoCodeLine___lam__0___closed__2);
v_fn_171_ = lean_ctor_get(v___x_170_, 1);
lean_inc_ref(v_fn_171_);
v___x_172_ = lean_apply_2(v_fn_171_, v_c_168_, v_s_169_);
return v___x_172_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__2(void){
_start:
{
uint8_t v___x_184_; uint8_t v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_184_ = 0;
v___x_185_ = 1;
v___x_186_ = ((lean_object*)(l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__1));
v___x_187_ = ((lean_object*)(l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__0));
v___x_188_ = l_Lean_Parser_mkAntiquot(v___x_187_, v___x_186_, v___x_185_, v___x_184_);
return v___x_188_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_versoCodeBlock___lam__0(lean_object* v_c_189_, lean_object* v_s_190_){
_start:
{
lean_object* v___x_191_; lean_object* v_fn_192_; lean_object* v___x_193_; 
v___x_191_ = lean_obj_once(&l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__2, &l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_versoCodeBlock___lam__0___closed__2);
v_fn_192_ = lean_ctor_get(v___x_191_, 1);
lean_inc_ref(v_fn_192_);
v___x_193_ = lean_apply_2(v_fn_192_, v_c_189_, v_s_190_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___redArg(lean_object* v___x_214_, lean_object* v_str_215_, lean_object* v_a_216_, lean_object* v_b_217_){
_start:
{
uint8_t v_decide_218_; 
v_decide_218_ = lean_nat_dec_eq(v_a_216_, v___x_214_);
if (v_decide_218_ == 0)
{
lean_object* v_fst_219_; lean_object* v_snd_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_244_; 
v_fst_219_ = lean_ctor_get(v_b_217_, 0);
v_snd_220_ = lean_ctor_get(v_b_217_, 1);
v_isSharedCheck_244_ = !lean_is_exclusive(v_b_217_);
if (v_isSharedCheck_244_ == 0)
{
v___x_222_ = v_b_217_;
v_isShared_223_ = v_isSharedCheck_244_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_snd_220_);
lean_inc(v_fst_219_);
lean_dec(v_b_217_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_244_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
uint32_t v___x_224_; lean_object* v___x_225_; uint32_t v___x_226_; uint8_t v___x_227_; 
v___x_224_ = lean_string_utf8_get_fast(v_str_215_, v_a_216_);
v___x_225_ = lean_string_utf8_next_fast(v_str_215_, v_a_216_);
lean_dec(v_a_216_);
v___x_226_ = 96;
v___x_227_ = lean_uint32_dec_eq(v___x_224_, v___x_226_);
if (v___x_227_ == 0)
{
lean_object* v_best_228_; lean_object* v___x_230_; 
lean_dec(v_snd_220_);
v_best_228_ = lean_unsigned_to_nat(0u);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 1, v_best_228_);
v___x_230_ = v___x_222_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_232_; 
v_reuseFailAlloc_232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_232_, 0, v_fst_219_);
lean_ctor_set(v_reuseFailAlloc_232_, 1, v_best_228_);
v___x_230_ = v_reuseFailAlloc_232_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
v_a_216_ = v___x_225_;
v_b_217_ = v___x_230_;
goto _start;
}
}
else
{
lean_object* v___x_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v___x_233_ = lean_unsigned_to_nat(1u);
v___x_234_ = lean_nat_add(v_snd_220_, v___x_233_);
lean_dec(v_snd_220_);
v___x_235_ = lean_nat_dec_lt(v_fst_219_, v___x_234_);
if (v___x_235_ == 0)
{
lean_object* v___x_237_; 
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 1, v___x_234_);
v___x_237_ = v___x_222_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v_fst_219_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_234_);
v___x_237_ = v_reuseFailAlloc_239_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
v_a_216_ = v___x_225_;
v_b_217_ = v___x_237_;
goto _start;
}
}
else
{
lean_object* v___x_241_; 
lean_dec(v_fst_219_);
lean_inc(v___x_234_);
if (v_isShared_223_ == 0)
{
lean_ctor_set(v___x_222_, 1, v___x_234_);
lean_ctor_set(v___x_222_, 0, v___x_234_);
v___x_241_ = v___x_222_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v___x_234_);
lean_ctor_set(v_reuseFailAlloc_243_, 1, v___x_234_);
v___x_241_ = v_reuseFailAlloc_243_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
v_a_216_ = v___x_225_;
v_b_217_ = v___x_241_;
goto _start;
}
}
}
}
}
else
{
lean_dec(v_a_216_);
return v_b_217_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___redArg___boxed(lean_object* v___x_245_, lean_object* v_str_246_, lean_object* v_a_247_, lean_object* v_b_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___redArg(v___x_245_, v_str_246_, v_a_247_, v_b_248_);
lean_dec_ref(v_str_246_);
lean_dec(v___x_245_);
return v_res_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_longestBacktickRun(lean_object* v_str_252_){
_start:
{
lean_object* v_best_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v_fst_257_; 
v_best_253_ = lean_unsigned_to_nat(0u);
v___x_254_ = ((lean_object*)(l_Lean_Doc_longestBacktickRun___closed__0));
v___x_255_ = lean_string_utf8_byte_size(v_str_252_);
v___x_256_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___redArg(v___x_255_, v_str_252_, v_best_253_, v___x_254_);
v_fst_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_fst_257_);
lean_dec_ref(v___x_256_);
return v_fst_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_longestBacktickRun___boxed(lean_object* v_str_258_){
_start:
{
lean_object* v_res_259_; 
v_res_259_ = l_Lean_Doc_longestBacktickRun(v_str_258_);
lean_dec_ref(v_str_258_);
return v_res_259_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0(lean_object* v___x_260_, lean_object* v___x_261_, lean_object* v_str_262_, lean_object* v_inst_263_, lean_object* v_R_264_, lean_object* v_a_265_, lean_object* v_b_266_, lean_object* v_c_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___redArg(v___x_261_, v_str_262_, v_a_265_, v_b_266_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0___boxed(lean_object* v___x_269_, lean_object* v___x_270_, lean_object* v_str_271_, lean_object* v_inst_272_, lean_object* v_R_273_, lean_object* v_a_274_, lean_object* v_b_275_, lean_object* v_c_276_){
_start:
{
lean_object* v_res_277_; 
v_res_277_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Doc_longestBacktickRun_spec__0(v___x_269_, v___x_270_, v_str_271_, v_inst_272_, v_R_273_, v_a_274_, v_b_275_, v_c_276_);
lean_dec_ref(v_str_271_);
lean_dec(v___x_270_);
lean_dec_ref(v___x_269_);
return v_res_277_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___redArg(lean_object* v_s_278_, uint8_t v___x_279_, lean_object* v_a_280_, uint8_t v_b_281_){
_start:
{
lean_object* v_str_282_; lean_object* v_startInclusive_283_; lean_object* v_endExclusive_284_; lean_object* v___x_285_; uint8_t v_decide_286_; 
v_str_282_ = lean_ctor_get(v_s_278_, 0);
v_startInclusive_283_ = lean_ctor_get(v_s_278_, 1);
v_endExclusive_284_ = lean_ctor_get(v_s_278_, 2);
v___x_285_ = lean_nat_sub(v_endExclusive_284_, v_startInclusive_283_);
v_decide_286_ = lean_nat_dec_eq(v_a_280_, v___x_285_);
lean_dec(v___x_285_);
if (v_decide_286_ == 0)
{
lean_object* v___x_287_; uint32_t v___x_292_; uint32_t v___x_293_; uint8_t v___x_294_; 
v___x_287_ = lean_nat_add(v_startInclusive_283_, v_a_280_);
lean_dec(v_a_280_);
v___x_292_ = lean_string_utf8_get_fast(v_str_282_, v___x_287_);
v___x_293_ = 32;
v___x_294_ = lean_uint32_dec_eq(v___x_292_, v___x_293_);
if (v___x_294_ == 0)
{
if (v___x_279_ == 0)
{
goto v___jp_288_;
}
else
{
lean_dec(v___x_287_);
return v___x_279_;
}
}
else
{
goto v___jp_288_;
}
v___jp_288_:
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_string_utf8_next_fast(v_str_282_, v___x_287_);
lean_dec(v___x_287_);
v___x_290_ = lean_nat_sub(v___x_289_, v_startInclusive_283_);
v_a_280_ = v___x_290_;
v_b_281_ = v_decide_286_;
goto _start;
}
}
else
{
lean_dec(v_a_280_);
return v_b_281_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___redArg___boxed(lean_object* v_s_295_, lean_object* v___x_296_, lean_object* v_a_297_, lean_object* v_b_298_){
_start:
{
uint8_t v___x_968__boxed_299_; uint8_t v_b_boxed_300_; uint8_t v_res_301_; lean_object* v_r_302_; 
v___x_968__boxed_299_ = lean_unbox(v___x_296_);
v_b_boxed_300_ = lean_unbox(v_b_298_);
v_res_301_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___redArg(v_s_295_, v___x_968__boxed_299_, v_a_297_, v_b_boxed_300_);
lean_dec_ref(v_s_295_);
v_r_302_ = lean_box(v_res_301_);
return v_r_302_;
}
}
LEAN_EXPORT uint8_t l_String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0(uint8_t v___x_303_, lean_object* v_s_304_){
_start:
{
lean_object* v_searcher_305_; uint8_t v___x_306_; uint8_t v___x_307_; 
v_searcher_305_ = lean_unsigned_to_nat(0u);
v___x_306_ = 0;
v___x_307_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___redArg(v_s_304_, v___x_303_, v_searcher_305_, v___x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0___boxed(lean_object* v___x_308_, lean_object* v_s_309_){
_start:
{
uint8_t v___x_991__boxed_310_; uint8_t v_res_311_; lean_object* v_r_312_; 
v___x_991__boxed_310_ = lean_unbox(v___x_308_);
v_res_311_ = l_String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0(v___x_991__boxed_310_, v_s_309_);
lean_dec_ref(v_s_309_);
v_r_312_ = lean_box(v_res_311_);
return v_r_312_;
}
}
LEAN_EXPORT uint8_t l_Lean_Doc_versoCodeBoundarySpaces(lean_object* v_str_314_){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; uint8_t v___x_317_; 
v___x_315_ = lean_string_utf8_byte_size(v_str_314_);
v___x_316_ = lean_unsigned_to_nat(1u);
v___x_317_ = lean_nat_dec_le(v___x_316_, v___x_315_);
if (v___x_317_ == 0)
{
lean_dec_ref(v_str_314_);
return v___x_317_;
}
else
{
lean_object* v___x_318_; lean_object* v___x_319_; uint8_t v___x_320_; 
v___x_318_ = ((lean_object*)(l_Lean_Doc_versoCodeBoundarySpaces___closed__0));
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = lean_string_memcmp(v_str_314_, v___x_318_, v___x_319_, v___x_319_, v___x_316_);
if (v___x_320_ == 0)
{
lean_dec_ref(v_str_314_);
return v___x_320_;
}
else
{
lean_object* v___x_321_; uint8_t v___x_322_; 
v___x_321_ = lean_nat_sub(v___x_315_, v___x_316_);
v___x_322_ = lean_string_memcmp(v_str_314_, v___x_318_, v___x_321_, v___x_319_, v___x_316_);
lean_dec(v___x_321_);
if (v___x_322_ == 0)
{
lean_dec_ref(v_str_314_);
return v___x_322_;
}
else
{
lean_object* v___x_323_; uint8_t v___x_324_; 
v___x_323_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_323_, 0, v_str_314_);
lean_ctor_set(v___x_323_, 1, v___x_319_);
lean_ctor_set(v___x_323_, 2, v___x_315_);
v___x_324_ = l_String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0(v___x_322_, v___x_323_);
lean_dec_ref_known(v___x_323_, 3);
return v___x_324_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_versoCodeBoundarySpaces___boxed(lean_object* v_str_325_){
_start:
{
uint8_t v_res_326_; lean_object* v_r_327_; 
v_res_326_ = l_Lean_Doc_versoCodeBoundarySpaces(v_str_325_);
v_r_327_ = lean_box(v_res_326_);
return v_r_327_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0(lean_object* v_s_328_, uint8_t v___x_329_, lean_object* v_inst_330_, lean_object* v_R_331_, lean_object* v_a_332_, uint8_t v_b_333_, lean_object* v_c_334_){
_start:
{
uint8_t v___x_335_; 
v___x_335_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___redArg(v_s_328_, v___x_329_, v_a_332_, v_b_333_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0___boxed(lean_object* v_s_336_, lean_object* v___x_337_, lean_object* v_inst_338_, lean_object* v_R_339_, lean_object* v_a_340_, lean_object* v_b_341_, lean_object* v_c_342_){
_start:
{
uint8_t v___x_1021__boxed_343_; uint8_t v_b_boxed_344_; uint8_t v_res_345_; lean_object* v_r_346_; 
v___x_1021__boxed_343_ = lean_unbox(v___x_337_);
v_b_boxed_344_ = lean_unbox(v_b_341_);
v_res_345_ = l_WellFounded_opaqueFix_u2083___at___00String_Slice_contains___at___00Lean_Doc_versoCodeBoundarySpaces_spec__0_spec__0(v_s_336_, v___x_1021__boxed_343_, v_inst_338_, v_R_339_, v_a_340_, v_b_boxed_344_, v_c_342_);
lean_dec_ref(v_s_336_);
v_r_346_ = lean_box(v_res_345_);
return v_r_346_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___redArg(lean_object* v_str_347_, lean_object* v_a_348_){
_start:
{
lean_object* v_fst_349_; lean_object* v_snd_350_; lean_object* v___x_352_; uint8_t v_isShared_353_; uint8_t v_isSharedCheck_380_; 
v_fst_349_ = lean_ctor_get(v_a_348_, 0);
v_snd_350_ = lean_ctor_get(v_a_348_, 1);
v_isSharedCheck_380_ = !lean_is_exclusive(v_a_348_);
if (v_isSharedCheck_380_ == 0)
{
v___x_352_ = v_a_348_;
v_isShared_353_ = v_isSharedCheck_380_;
goto v_resetjp_351_;
}
else
{
lean_inc(v_snd_350_);
lean_inc(v_fst_349_);
lean_dec(v_a_348_);
v___x_352_ = lean_box(0);
v_isShared_353_ = v_isSharedCheck_380_;
goto v_resetjp_351_;
}
v_resetjp_351_:
{
lean_object* v___x_354_; uint8_t v_decide_355_; 
v___x_354_ = lean_string_utf8_byte_size(v_str_347_);
v_decide_355_ = lean_nat_dec_eq(v_snd_350_, v___x_354_);
if (v_decide_355_ == 0)
{
uint32_t v___x_356_; lean_object* v___x_357_; uint32_t v___x_358_; uint8_t v___x_359_; 
v___x_356_ = lean_string_utf8_get_fast(v_str_347_, v_snd_350_);
v___x_357_ = lean_string_utf8_next_fast(v_str_347_, v_snd_350_);
lean_dec(v_snd_350_);
v___x_358_ = 92;
v___x_359_ = lean_uint32_dec_eq(v___x_356_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_362_; 
v___x_360_ = lean_string_push(v_fst_349_, v___x_356_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 1, v___x_357_);
lean_ctor_set(v___x_352_, 0, v___x_360_);
v___x_362_ = v___x_352_;
goto v_reusejp_361_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_360_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v___x_357_);
v___x_362_ = v_reuseFailAlloc_364_;
goto v_reusejp_361_;
}
v_reusejp_361_:
{
v_a_348_ = v___x_362_;
goto _start;
}
}
else
{
uint8_t v_decide_365_; 
v_decide_365_ = lean_nat_dec_eq(v___x_357_, v___x_354_);
if (v_decide_365_ == 0)
{
uint32_t v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_370_; 
v___x_366_ = lean_string_utf8_get_fast(v_str_347_, v___x_357_);
v___x_367_ = lean_string_push(v_fst_349_, v___x_366_);
v___x_368_ = lean_string_utf8_next_fast(v_str_347_, v___x_357_);
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 1, v___x_368_);
lean_ctor_set(v___x_352_, 0, v___x_367_);
v___x_370_ = v___x_352_;
goto v_reusejp_369_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_367_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v___x_368_);
v___x_370_ = v_reuseFailAlloc_372_;
goto v_reusejp_369_;
}
v_reusejp_369_:
{
v_a_348_ = v___x_370_;
goto _start;
}
}
else
{
lean_object* v___x_374_; 
if (v_isShared_353_ == 0)
{
lean_ctor_set(v___x_352_, 1, v___x_357_);
v___x_374_ = v___x_352_;
goto v_reusejp_373_;
}
else
{
lean_object* v_reuseFailAlloc_376_; 
v_reuseFailAlloc_376_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_376_, 0, v_fst_349_);
lean_ctor_set(v_reuseFailAlloc_376_, 1, v___x_357_);
v___x_374_ = v_reuseFailAlloc_376_;
goto v_reusejp_373_;
}
v_reusejp_373_:
{
v_a_348_ = v___x_374_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_378_; 
if (v_isShared_353_ == 0)
{
v___x_378_ = v___x_352_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_fst_349_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v_snd_350_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___redArg___boxed(lean_object* v_str_381_, lean_object* v_a_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___redArg(v_str_381_, v_a_382_);
lean_dec_ref(v_str_381_);
return v_res_383_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso(lean_object* v_str_388_){
_start:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v_fst_391_; 
v___x_389_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__1));
v___x_390_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___redArg(v_str_388_, v___x_389_);
v_fst_391_ = lean_ctor_get(v___x_390_, 0);
lean_inc(v_fst_391_);
lean_dec_ref(v___x_390_);
return v_fst_391_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___boxed(lean_object* v_str_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso(v_str_392_);
lean_dec_ref(v_str_392_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0(lean_object* v_str_394_, lean_object* v_inst_395_, lean_object* v_a_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___redArg(v_str_394_, v_a_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0___boxed(lean_object* v_str_398_, lean_object* v_inst_399_, lean_object* v_a_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso_spec__0(v_str_398_, v_inst_399_, v_a_400_);
lean_dec_ref(v_str_398_);
return v_res_401_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_402_; lean_object* v___f_403_; 
v___x_402_ = lean_alloc_closure((void*)(l_instDecidableEqChar___boxed), 2, 0);
v___f_403_ = lean_alloc_closure((void*)(l_instBEqOfDecidableEq___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_403_, 0, v___x_402_);
return v___f_403_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg(lean_object* v_delimiters_404_, lean_object* v___x_405_, lean_object* v_value_406_, lean_object* v_a_407_, lean_object* v_b_408_){
_start:
{
uint8_t v_decide_409_; 
v_decide_409_ = lean_nat_dec_eq(v_a_407_, v___x_405_);
if (v_decide_409_ == 0)
{
uint32_t v___x_410_; lean_object* v___x_411_; uint32_t v___x_412_; uint8_t v___x_417_; 
v___x_410_ = lean_string_utf8_get_fast(v_value_406_, v_a_407_);
v___x_411_ = lean_string_utf8_next_fast(v_value_406_, v_a_407_);
lean_dec(v_a_407_);
v___x_412_ = 92;
v___x_417_ = lean_uint32_dec_eq(v___x_410_, v___x_412_);
if (v___x_417_ == 0)
{
lean_object* v___f_418_; lean_object* v___x_419_; uint8_t v___x_420_; 
v___f_418_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___closed__0);
v___x_419_ = lean_box_uint32(v___x_410_);
lean_inc(v_delimiters_404_);
v___x_420_ = l_List_elem___redArg(v___f_418_, v___x_419_, v_delimiters_404_);
if (v___x_420_ == 0)
{
lean_object* v___x_421_; 
v___x_421_ = lean_string_push(v_b_408_, v___x_410_);
v_a_407_ = v___x_411_;
v_b_408_ = v___x_421_;
goto _start;
}
else
{
goto v___jp_413_;
}
}
else
{
goto v___jp_413_;
}
v___jp_413_:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_string_push(v_b_408_, v___x_412_);
v___x_415_ = lean_string_push(v___x_414_, v___x_410_);
v_a_407_ = v___x_411_;
v_b_408_ = v___x_415_;
goto _start;
}
}
else
{
lean_dec(v_a_407_);
lean_dec(v_delimiters_404_);
return v_b_408_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg___boxed(lean_object* v_delimiters_423_, lean_object* v___x_424_, lean_object* v_value_425_, lean_object* v_a_426_, lean_object* v_b_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg(v_delimiters_423_, v___x_424_, v_value_425_, v_a_426_, v_b_427_);
lean_dec_ref(v_value_425_);
lean_dec(v___x_424_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited(lean_object* v_delimiters_429_, lean_object* v_value_430_){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_431_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
v___x_432_ = lean_string_utf8_byte_size(v_value_430_);
v___x_433_ = lean_unsigned_to_nat(0u);
v___x_434_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg(v_delimiters_429_, v___x_432_, v_value_430_, v___x_433_, v___x_431_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited___boxed(lean_object* v_delimiters_435_, lean_object* v_value_436_){
_start:
{
lean_object* v_res_437_; 
v_res_437_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited(v_delimiters_435_, v_value_436_);
lean_dec_ref(v_value_436_);
return v_res_437_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0(lean_object* v_delimiters_438_, lean_object* v___x_439_, lean_object* v___x_440_, lean_object* v_value_441_, lean_object* v_inst_442_, lean_object* v_R_443_, lean_object* v_a_444_, lean_object* v_b_445_, lean_object* v_c_446_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___redArg(v_delimiters_438_, v___x_440_, v_value_441_, v_a_444_, v_b_445_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0___boxed(lean_object* v_delimiters_448_, lean_object* v___x_449_, lean_object* v___x_450_, lean_object* v_value_451_, lean_object* v_inst_452_, lean_object* v_R_453_, lean_object* v_a_454_, lean_object* v_b_455_, lean_object* v_c_456_){
_start:
{
lean_object* v_res_457_; 
v_res_457_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited_spec__0(v_delimiters_448_, v___x_449_, v___x_450_, v_value_451_, v_inst_452_, v_R_453_, v_a_454_, v_b_455_, v_c_456_);
lean_dec_ref(v_value_451_);
lean_dec(v___x_450_);
lean_dec_ref(v___x_449_);
return v_res_457_;
}
}
static lean_object* _init_l_Lean_Doc_escapeVersoLinkUrl___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_458_; lean_object* v___x_459_; 
v___x_458_ = 41;
v___x_459_ = lean_box_uint32(v___x_458_);
return v___x_459_;
}
}
static lean_object* _init_l_Lean_Doc_escapeVersoLinkUrl___closed__0(void){
_start:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_460_ = lean_box(0);
v___x_461_ = l_Lean_Doc_escapeVersoLinkUrl___closed__0___boxed__const__1;
v___x_462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_462_, 0, v___x_461_);
lean_ctor_set(v___x_462_, 1, v___x_460_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoLinkUrl(lean_object* v_value_463_){
_start:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_obj_once(&l_Lean_Doc_escapeVersoLinkUrl___closed__0, &l_Lean_Doc_escapeVersoLinkUrl___closed__0_once, _init_l_Lean_Doc_escapeVersoLinkUrl___closed__0);
v___x_465_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited(v___x_464_, v_value_463_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoLinkUrl___boxed(lean_object* v_value_466_){
_start:
{
lean_object* v_res_467_; 
v_res_467_ = l_Lean_Doc_escapeVersoLinkUrl(v_value_466_);
lean_dec_ref(v_value_466_);
return v_res_467_;
}
}
static lean_object* _init_l_Lean_Doc_escapeVersoImageAlt___closed__0___boxed__const__1(void){
_start:
{
uint32_t v___x_468_; lean_object* v___x_469_; 
v___x_468_ = 93;
v___x_469_ = lean_box_uint32(v___x_468_);
return v___x_469_;
}
}
static lean_object* _init_l_Lean_Doc_escapeVersoImageAlt___closed__0(void){
_start:
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_470_ = lean_box(0);
v___x_471_ = l_Lean_Doc_escapeVersoImageAlt___closed__0___boxed__const__1;
v___x_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
lean_ctor_set(v___x_472_, 1, v___x_470_);
return v___x_472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoImageAlt(lean_object* v_value_473_){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = lean_obj_once(&l_Lean_Doc_escapeVersoImageAlt___closed__0, &l_Lean_Doc_escapeVersoImageAlt___closed__0_once, _init_l_Lean_Doc_escapeVersoImageAlt___closed__0);
v___x_475_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_escapeVersoDelimited(v___x_474_, v_value_473_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_escapeVersoImageAlt___boxed(lean_object* v_value_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_Doc_escapeVersoImageAlt(v_value_476_);
lean_dec_ref(v_value_476_);
return v_res_477_;
}
}
static lean_object* _init_l_Lean_TSyntax_getVersoText___closed__0(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; 
v___x_478_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
v___x_479_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso(v___x_478_);
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoText(lean_object* v_s_480_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = ((lean_object*)(l_Lean_Doc_versoTextKind));
v___x_482_ = l_Lean_Syntax_isLit_x3f(v___x_481_, v_s_480_);
if (lean_obj_tag(v___x_482_) == 0)
{
lean_object* v___x_483_; 
v___x_483_ = lean_obj_once(&l_Lean_TSyntax_getVersoText___closed__0, &l_Lean_TSyntax_getVersoText___closed__0_once, _init_l_Lean_TSyntax_getVersoText___closed__0);
return v___x_483_;
}
else
{
lean_object* v_val_484_; lean_object* v___x_485_; 
v_val_484_ = lean_ctor_get(v___x_482_, 0);
lean_inc(v_val_484_);
lean_dec_ref_known(v___x_482_, 1);
v___x_485_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso(v_val_484_);
lean_dec(v_val_484_);
return v___x_485_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoText___boxed(lean_object* v_s_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_TSyntax_getVersoText(v_s_486_);
lean_dec(v_s_486_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoTextSource(lean_object* v_s_488_){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = ((lean_object*)(l_Lean_Doc_versoTextKind));
v___x_490_ = l_Lean_Syntax_isLit_x3f(v___x_489_, v_s_488_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v___x_491_; 
v___x_491_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
return v___x_491_;
}
else
{
lean_object* v_val_492_; 
v_val_492_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_val_492_);
lean_dec_ref_known(v___x_490_, 1);
return v_val_492_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoTextSource___boxed(lean_object* v_s_493_){
_start:
{
lean_object* v_res_494_; 
v_res_494_ = l_Lean_TSyntax_getVersoTextSource(v_s_493_);
lean_dec(v_s_493_);
return v_res_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoRefName(lean_object* v_s_495_){
_start:
{
lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_496_ = ((lean_object*)(l_Lean_Doc_versoRefKind));
v___x_497_ = l_Lean_Syntax_isLit_x3f(v___x_496_, v_s_495_);
if (lean_obj_tag(v___x_497_) == 0)
{
lean_object* v___x_498_; 
v___x_498_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
return v___x_498_;
}
else
{
lean_object* v_val_499_; 
v_val_499_ = lean_ctor_get(v___x_497_, 0);
lean_inc(v_val_499_);
lean_dec_ref_known(v___x_497_, 1);
return v_val_499_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoRefName___boxed(lean_object* v_s_500_){
_start:
{
lean_object* v_res_501_; 
v_res_501_ = l_Lean_TSyntax_getVersoRefName(v_s_500_);
lean_dec(v_s_500_);
return v_res_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkUrl(lean_object* v_s_502_){
_start:
{
lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_503_ = ((lean_object*)(l_Lean_Doc_versoLinkUrlKind));
v___x_504_ = l_Lean_Syntax_isLit_x3f(v___x_503_, v_s_502_);
if (lean_obj_tag(v___x_504_) == 0)
{
lean_object* v___x_505_; 
v___x_505_ = lean_obj_once(&l_Lean_TSyntax_getVersoText___closed__0, &l_Lean_TSyntax_getVersoText___closed__0_once, _init_l_Lean_TSyntax_getVersoText___closed__0);
return v___x_505_;
}
else
{
lean_object* v_val_506_; lean_object* v___x_507_; 
v_val_506_ = lean_ctor_get(v___x_504_, 0);
lean_inc(v_val_506_);
lean_dec_ref_known(v___x_504_, 1);
v___x_507_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso(v_val_506_);
lean_dec(v_val_506_);
return v___x_507_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkUrl___boxed(lean_object* v_s_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Lean_TSyntax_getVersoLinkUrl(v_s_508_);
lean_dec(v_s_508_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkRefUrl(lean_object* v_s_510_){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = ((lean_object*)(l_Lean_Doc_versoLinkRefUrlKind));
v___x_512_ = l_Lean_Syntax_isLit_x3f(v___x_511_, v_s_510_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v___x_513_; 
v___x_513_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
return v___x_513_;
}
else
{
lean_object* v_val_514_; 
v_val_514_ = lean_ctor_get(v___x_512_, 0);
lean_inc(v_val_514_);
lean_dec_ref_known(v___x_512_, 1);
return v_val_514_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoLinkRefUrl___boxed(lean_object* v_s_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_TSyntax_getVersoLinkRefUrl(v_s_515_);
lean_dec(v_s_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoImageAlt(lean_object* v_s_517_){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_518_ = ((lean_object*)(l_Lean_Doc_versoImageAltKind));
v___x_519_ = l_Lean_Syntax_isLit_x3f(v___x_518_, v_s_517_);
if (lean_obj_tag(v___x_519_) == 0)
{
lean_object* v___x_520_; 
v___x_520_ = lean_obj_once(&l_Lean_TSyntax_getVersoText___closed__0, &l_Lean_TSyntax_getVersoText___closed__0_once, _init_l_Lean_TSyntax_getVersoText___closed__0);
return v___x_520_;
}
else
{
lean_object* v_val_521_; lean_object* v___x_522_; 
v_val_521_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_val_521_);
lean_dec_ref_known(v___x_519_, 1);
v___x_522_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso(v_val_521_);
lean_dec(v_val_521_);
return v___x_522_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoImageAlt___boxed(lean_object* v_s_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l_Lean_TSyntax_getVersoImageAlt(v_s_523_);
lean_dec(v_s_523_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLine(lean_object* v_s_525_){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = ((lean_object*)(l_Lean_Doc_versoCodeLineKind));
v___x_527_ = l_Lean_Syntax_isLit_x3f(v___x_526_, v_s_525_);
if (lean_obj_tag(v___x_527_) == 0)
{
lean_object* v___x_528_; 
v___x_528_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
return v___x_528_;
}
else
{
lean_object* v_val_529_; 
v_val_529_ = lean_ctor_get(v___x_527_, 0);
lean_inc(v_val_529_);
lean_dec_ref_known(v___x_527_, 1);
return v_val_529_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLine___boxed(lean_object* v_s_530_){
_start:
{
lean_object* v_res_531_; 
v_res_531_ = l_Lean_TSyntax_getVersoCodeLine(v_s_530_);
lean_dec(v_s_530_);
return v_res_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLines(lean_object* v_s_532_){
_start:
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_533_ = lean_unsigned_to_nat(0u);
v___x_534_ = l_Lean_Syntax_getArg(v_s_532_, v___x_533_);
v___x_535_ = l_Lean_Syntax_getArgs(v___x_534_);
lean_dec(v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeLines___boxed(lean_object* v_s_536_){
_start:
{
lean_object* v_res_537_; 
v_res_537_ = l_Lean_TSyntax_getVersoCodeLines(v_s_536_);
lean_dec(v_s_536_);
return v_res_537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_getVersoCode_spec__0(lean_object* v_as_538_, size_t v_sz_539_, size_t v_i_540_, lean_object* v_b_541_){
_start:
{
uint8_t v___x_542_; 
v___x_542_ = lean_usize_dec_lt(v_i_540_, v_sz_539_);
if (v___x_542_ == 0)
{
return v_b_541_;
}
else
{
lean_object* v_a_543_; lean_object* v___x_544_; lean_object* v___x_545_; size_t v___x_546_; size_t v___x_547_; 
v_a_543_ = lean_array_uget_borrowed(v_as_538_, v_i_540_);
v___x_544_ = l_Lean_TSyntax_getVersoCodeLine(v_a_543_);
v___x_545_ = lean_string_append(v_b_541_, v___x_544_);
lean_dec_ref(v___x_544_);
v___x_546_ = ((size_t)1ULL);
v___x_547_ = lean_usize_add(v_i_540_, v___x_546_);
v_i_540_ = v___x_547_;
v_b_541_ = v___x_545_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_getVersoCode_spec__0___boxed(lean_object* v_as_549_, lean_object* v_sz_550_, lean_object* v_i_551_, lean_object* v_b_552_){
_start:
{
size_t v_sz_boxed_553_; size_t v_i_boxed_554_; lean_object* v_res_555_; 
v_sz_boxed_553_ = lean_unbox_usize(v_sz_550_);
lean_dec(v_sz_550_);
v_i_boxed_554_ = lean_unbox_usize(v_i_551_);
lean_dec(v_i_551_);
v_res_555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_getVersoCode_spec__0(v_as_549_, v_sz_boxed_553_, v_i_boxed_554_, v_b_552_);
lean_dec_ref(v_as_549_);
return v_res_555_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCode(lean_object* v_s_556_){
_start:
{
lean_object* v_str_557_; lean_object* v___x_558_; size_t v_sz_559_; size_t v___x_560_; lean_object* v___x_561_; 
v_str_557_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
v___x_558_ = l_Lean_TSyntax_getVersoCodeLines(v_s_556_);
v_sz_559_ = lean_array_size(v___x_558_);
v___x_560_ = ((size_t)0ULL);
v___x_561_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_getVersoCode_spec__0(v___x_558_, v_sz_559_, v___x_560_, v_str_557_);
lean_dec_ref(v___x_558_);
return v___x_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCode___boxed(lean_object* v_s_562_){
_start:
{
lean_object* v_res_563_; 
v_res_563_ = l_Lean_TSyntax_getVersoCode(v_s_562_);
lean_dec(v_s_562_);
return v_res_563_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlockLines(lean_object* v_s_564_){
_start:
{
lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_565_ = lean_unsigned_to_nat(0u);
v___x_566_ = l_Lean_Syntax_getArg(v_s_564_, v___x_565_);
v___x_567_ = l_Lean_Syntax_getArgs(v___x_566_);
lean_dec(v___x_566_);
return v___x_567_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlockLines___boxed(lean_object* v_s_568_){
_start:
{
lean_object* v_res_569_; 
v_res_569_ = l_Lean_TSyntax_getVersoCodeBlockLines(v_s_568_);
lean_dec(v_s_568_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlock(lean_object* v_s_570_){
_start:
{
lean_object* v_out_571_; lean_object* v___x_572_; size_t v_sz_573_; size_t v___x_574_; lean_object* v___x_575_; 
v_out_571_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
v___x_572_ = l_Lean_TSyntax_getVersoCodeBlockLines(v_s_570_);
v_sz_573_ = lean_array_size(v___x_572_);
v___x_574_ = ((size_t)0ULL);
v___x_575_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_TSyntax_getVersoCode_spec__0(v___x_572_, v_sz_573_, v___x_574_, v_out_571_);
lean_dec_ref(v___x_572_);
return v___x_575_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoCodeBlock___boxed(lean_object* v_s_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lean_TSyntax_getVersoCodeBlock(v_s_576_);
lean_dec(v_s_576_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoText_view(lean_object* v_s_578_){
_start:
{
lean_object* v___x_579_; 
v___x_579_ = l_Lean_TSyntax_getVersoText(v_s_578_);
return v___x_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoText_view___boxed(lean_object* v_s_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_Doc_VersoText_view(v_s_580_);
lean_dec(v_s_580_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoRefName_view(lean_object* v_s_582_){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = l_Lean_TSyntax_getVersoRefName(v_s_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoRefName_view___boxed(lean_object* v_s_584_){
_start:
{
lean_object* v_res_585_; 
v_res_585_ = l_Lean_Doc_VersoRefName_view(v_s_584_);
lean_dec(v_s_584_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkUrl_view(lean_object* v_s_586_){
_start:
{
lean_object* v___x_587_; 
v___x_587_ = l_Lean_TSyntax_getVersoLinkUrl(v_s_586_);
return v___x_587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkUrl_view___boxed(lean_object* v_s_588_){
_start:
{
lean_object* v_res_589_; 
v_res_589_ = l_Lean_Doc_VersoLinkUrl_view(v_s_588_);
lean_dec(v_s_588_);
return v_res_589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkRefUrl_view(lean_object* v_s_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Lean_TSyntax_getVersoLinkRefUrl(v_s_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoLinkRefUrl_view___boxed(lean_object* v_s_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_Doc_VersoLinkRefUrl_view(v_s_592_);
lean_dec(v_s_592_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoImageAlt_view(lean_object* v_s_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Lean_TSyntax_getVersoImageAlt(v_s_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoImageAlt_view___boxed(lean_object* v_s_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_Doc_VersoImageAlt_view(v_s_596_);
lean_dec(v_s_596_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeLine_view(lean_object* v_s_598_){
_start:
{
lean_object* v___x_599_; 
v___x_599_ = l_Lean_TSyntax_getVersoCodeLine(v_s_598_);
return v___x_599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeLine_view___boxed(lean_object* v_s_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lean_Doc_VersoCodeLine_view(v_s_600_);
lean_dec(v_s_600_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCode_view(lean_object* v_s_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_TSyntax_getVersoCode(v_s_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCode_view___boxed(lean_object* v_s_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = l_Lean_Doc_VersoCode_view(v_s_604_);
lean_dec(v_s_604_);
return v_res_605_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeBlock_view(lean_object* v_s_606_){
_start:
{
lean_object* v___x_607_; 
v___x_607_ = l_Lean_TSyntax_getVersoCodeBlock(v_s_606_);
return v___x_607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoCodeBlock_view___boxed(lean_object* v_s_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Lean_Doc_VersoCodeBlock_view(v_s_608_);
lean_dec(v_s_608_);
return v_res_609_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__4(void){
_start:
{
uint8_t v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_619_ = 0;
v___x_620_ = l_Lean_Parser_strLit;
v___x_621_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__3));
v___x_622_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__0));
v___x_623_ = l_Lean_Parser_nodeWithAntiquot(v___x_622_, v___x_621_, v___x_620_, v___x_619_);
return v___x_623_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_ArgVal_str___lam__0(lean_object* v_c_624_, lean_object* v_s_625_){
_start:
{
lean_object* v___x_626_; lean_object* v_fn_627_; lean_object* v___x_628_; 
v___x_626_ = lean_obj_once(&l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__4, &l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_ArgVal_str___lam__0___closed__4);
v_fn_627_ = lean_ctor_get(v___x_626_, 1);
lean_inc_ref(v_fn_627_);
v___x_628_ = lean_apply_2(v_fn_627_, v_c_624_, v_s_625_);
return v___x_628_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__3(void){
_start:
{
uint8_t v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_642_ = 0;
v___x_643_ = l_Lean_Parser_ident;
v___x_644_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__2));
v___x_645_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__0));
v___x_646_ = l_Lean_Parser_nodeWithAntiquot(v___x_645_, v___x_644_, v___x_643_, v___x_642_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_ArgVal_ident___lam__0(lean_object* v_c_647_, lean_object* v_s_648_){
_start:
{
lean_object* v___x_649_; lean_object* v_fn_650_; lean_object* v___x_651_; 
v___x_649_ = lean_obj_once(&l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__3, &l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_ArgVal_ident___lam__0___closed__3);
v_fn_650_ = lean_ctor_get(v___x_649_, 1);
lean_inc_ref(v_fn_650_);
v___x_651_ = lean_apply_2(v_fn_650_, v_c_647_, v_s_648_);
return v___x_651_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__3(void){
_start:
{
uint8_t v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_665_ = 0;
v___x_666_ = l_Lean_Parser_numLit;
v___x_667_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__2));
v___x_668_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__0));
v___x_669_ = l_Lean_Parser_nodeWithAntiquot(v___x_668_, v___x_667_, v___x_666_, v___x_665_);
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_ArgVal_num___lam__0(lean_object* v_c_670_, lean_object* v_s_671_){
_start:
{
lean_object* v___x_672_; lean_object* v_fn_673_; lean_object* v___x_674_; 
v___x_672_ = lean_obj_once(&l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__3, &l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_ArgVal_num___lam__0___closed__3);
v_fn_673_ = lean_ctor_get(v___x_672_, 1);
lean_inc_ref(v_fn_673_);
v___x_674_ = lean_apply_2(v_fn_673_, v_c_670_, v_s_671_);
return v___x_674_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_argVal___lam__0___closed__2(void){
_start:
{
uint8_t v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_686_ = 1;
v___x_687_ = ((lean_object*)(l_Lean_Doc_Parser_argVal___lam__0___closed__1));
v___x_688_ = ((lean_object*)(l_Lean_Doc_Parser_argVal___lam__0___closed__0));
v___x_689_ = l_Lean_Parser_mkAntiquot(v___x_688_, v___x_687_, v___x_686_, v___x_686_);
return v___x_689_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_argVal___lam__0___closed__3(void){
_start:
{
lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_690_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_num));
v___x_691_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_ident));
v___x_692_ = l_Lean_Parser_orelse(v___x_691_, v___x_690_);
return v___x_692_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_argVal___lam__0___closed__4(void){
_start:
{
lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
v___x_693_ = lean_obj_once(&l_Lean_Doc_Parser_argVal___lam__0___closed__3, &l_Lean_Doc_Parser_argVal___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_argVal___lam__0___closed__3);
v___x_694_ = ((lean_object*)(l_Lean_Doc_Parser_ArgVal_str));
v___x_695_ = l_Lean_Parser_orelse(v___x_694_, v___x_693_);
return v___x_695_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_argVal___lam__0___closed__5(void){
_start:
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = lean_obj_once(&l_Lean_Doc_Parser_argVal___lam__0___closed__4, &l_Lean_Doc_Parser_argVal___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_argVal___lam__0___closed__4);
v___x_697_ = lean_obj_once(&l_Lean_Doc_Parser_argVal___lam__0___closed__2, &l_Lean_Doc_Parser_argVal___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_argVal___lam__0___closed__2);
v___x_698_ = l_Lean_Parser_withAntiquot(v___x_697_, v___x_696_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_argVal___lam__0(lean_object* v_c_699_, lean_object* v_s_700_){
_start:
{
lean_object* v___x_701_; lean_object* v_fn_702_; lean_object* v___x_703_; 
v___x_701_ = lean_obj_once(&l_Lean_Doc_Parser_argVal___lam__0___closed__5, &l_Lean_Doc_Parser_argVal___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_argVal___lam__0___closed__5);
v_fn_702_ = lean_ctor_get(v___x_701_, 1);
lean_inc_ref(v_fn_702_);
v___x_703_ = lean_apply_2(v_fn_702_, v_c_699_, v_s_700_);
return v___x_703_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_anon___lam__0___closed__3(void){
_start:
{
uint8_t v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_717_ = 0;
v___x_718_ = ((lean_object*)(l_Lean_Doc_Parser_argVal));
v___x_719_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2));
v___x_720_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_anon___lam__0___closed__0));
v___x_721_ = l_Lean_Parser_nodeWithAntiquot(v___x_720_, v___x_719_, v___x_718_, v___x_717_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_anon___lam__0(lean_object* v_c_722_, lean_object* v_s_723_){
_start:
{
lean_object* v___x_724_; lean_object* v_fn_725_; lean_object* v___x_726_; 
v___x_724_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_anon___lam__0___closed__3, &l_Lean_Doc_Parser_Arg_anon___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_Arg_anon___lam__0___closed__3);
v_fn_725_ = lean_ctor_get(v___x_724_, 1);
lean_inc_ref(v_fn_725_);
v___x_726_ = lean_apply_2(v_fn_725_, v_c_722_, v_s_723_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1(){
_start:
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_734_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_anon___lam__0___closed__2));
v___x_735_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1___closed__0));
v___x_736_ = l_Lean_addBuiltinDocString(v___x_734_, v___x_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1___boxed(lean_object* v_a_737_){
_start:
{
lean_object* v_res_738_; 
v_res_738_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1();
return v_res_738_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__3(void){
_start:
{
lean_object* v___x_747_; lean_object* v___x_748_; 
v___x_747_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named___lam__0___closed__2));
v___x_748_ = l_Lean_Parser_symbol(v___x_747_);
return v___x_748_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__5(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named___lam__0___closed__4));
v___x_751_ = l_Lean_Parser_symbol(v___x_750_);
return v___x_751_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__7(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named___lam__0___closed__6));
v___x_754_ = l_Lean_Parser_symbol(v___x_753_);
return v___x_754_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__8(void){
_start:
{
lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; 
v___x_755_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__7, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__7_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__7);
v___x_756_ = ((lean_object*)(l_Lean_Doc_Parser_argVal));
v___x_757_ = l_Lean_Parser_andthen(v___x_756_, v___x_755_);
return v___x_757_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__9(void){
_start:
{
lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; 
v___x_758_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__8, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__8_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__8);
v___x_759_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__5, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__5);
v___x_760_ = l_Lean_Parser_andthen(v___x_759_, v___x_758_);
return v___x_760_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__10(void){
_start:
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; 
v___x_761_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__9, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__9_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__9);
v___x_762_ = l_Lean_Parser_ident;
v___x_763_ = l_Lean_Parser_andthen(v___x_762_, v___x_761_);
return v___x_763_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__11(void){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v___x_764_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__10, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__10_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__10);
v___x_765_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__3, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__3);
v___x_766_ = l_Lean_Parser_andthen(v___x_765_, v___x_764_);
return v___x_766_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__12(void){
_start:
{
uint8_t v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_767_ = 0;
v___x_768_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__11, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__11_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__11);
v___x_769_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named___lam__0___closed__1));
v___x_770_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named___lam__0___closed__0));
v___x_771_ = l_Lean_Parser_nodeWithAntiquot(v___x_770_, v___x_769_, v___x_768_, v___x_767_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_named___lam__0(lean_object* v_c_772_, lean_object* v_s_773_){
_start:
{
lean_object* v___x_774_; lean_object* v_fn_775_; lean_object* v___x_776_; 
v___x_774_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__12, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__12_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__12);
v_fn_775_ = lean_ctor_get(v___x_774_, 1);
lean_inc_ref(v_fn_775_);
v___x_776_ = lean_apply_2(v_fn_775_, v_c_772_, v_s_773_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1(){
_start:
{
lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v___x_784_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named___lam__0___closed__1));
v___x_785_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1___closed__0));
v___x_786_ = l_Lean_addBuiltinDocString(v___x_784_, v___x_785_);
return v___x_786_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1___boxed(lean_object* v_a_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1();
return v_res_788_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__2(void){
_start:
{
lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_796_ = ((lean_object*)(l_Lean_Doc_Parser_argVal));
v___x_797_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__5, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__5);
v___x_798_ = l_Lean_Parser_andthen(v___x_797_, v___x_796_);
return v___x_798_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__3(void){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_799_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__2, &l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__2);
v___x_800_ = l_Lean_Parser_ident;
v___x_801_ = l_Lean_Parser_andthen(v___x_800_, v___x_799_);
return v___x_801_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__4(void){
_start:
{
uint8_t v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v___x_802_ = 0;
v___x_803_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__3, &l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__3);
v___x_804_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1));
v___x_805_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__0));
v___x_806_ = l_Lean_Parser_nodeWithAntiquot(v___x_805_, v___x_804_, v___x_803_, v___x_802_);
return v___x_806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_named__no__paren___lam__0(lean_object* v_c_807_, lean_object* v_s_808_){
_start:
{
lean_object* v___x_809_; lean_object* v_fn_810_; lean_object* v___x_811_; 
v___x_809_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__4, &l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__4);
v_fn_810_ = lean_ctor_get(v___x_809_, 1);
lean_inc_ref(v_fn_810_);
v___x_811_ = lean_apply_2(v_fn_810_, v_c_807_, v_s_808_);
return v___x_811_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named__no__paren___regBuiltin_Lean_Doc_Parser_Arg_named__no__paren_docString__1(){
_start:
{
lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; 
v___x_818_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named__no__paren___lam__0___closed__1));
v___x_819_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1___closed__0));
v___x_820_ = l_Lean_addBuiltinDocString(v___x_818_, v___x_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named__no__paren___regBuiltin_Lean_Doc_Parser_Arg_named__no__paren_docString__1___boxed(lean_object* v_a_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named__no__paren___regBuiltin_Lean_Doc_Parser_Arg_named__no__paren_docString__1();
return v_res_822_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__3(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_831_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__2));
v___x_832_ = l_Lean_Parser_symbol(v___x_831_);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__4(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; 
v___x_833_ = l_Lean_Parser_ident;
v___x_834_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__3, &l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__3);
v___x_835_ = l_Lean_Parser_andthen(v___x_834_, v___x_833_);
return v___x_835_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__5(void){
_start:
{
uint8_t v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_836_ = 0;
v___x_837_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__4, &l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__4);
v___x_838_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1));
v___x_839_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__0));
v___x_840_ = l_Lean_Parser_nodeWithAntiquot(v___x_839_, v___x_838_, v___x_837_, v___x_836_);
return v___x_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_flag__on___lam__0(lean_object* v_c_841_, lean_object* v_s_842_){
_start:
{
lean_object* v___x_843_; lean_object* v_fn_844_; lean_object* v___x_845_; 
v___x_843_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__5, &l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__5);
v_fn_844_ = lean_ctor_get(v___x_843_, 1);
lean_inc_ref(v_fn_844_);
v___x_845_ = lean_apply_2(v_fn_844_, v_c_841_, v_s_842_);
return v___x_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1(){
_start:
{
lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_853_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__on___lam__0___closed__1));
v___x_854_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1___closed__0));
v___x_855_ = l_Lean_addBuiltinDocString(v___x_853_, v___x_854_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1___boxed(lean_object* v_a_856_){
_start:
{
lean_object* v_res_857_; 
v_res_857_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1();
return v_res_857_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__3(void){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; 
v___x_866_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__2));
v___x_867_ = l_Lean_Parser_symbol(v___x_866_);
return v___x_867_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__4(void){
_start:
{
lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_868_ = l_Lean_Parser_ident;
v___x_869_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__3, &l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__3);
v___x_870_ = l_Lean_Parser_andthen(v___x_869_, v___x_868_);
return v___x_870_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__5(void){
_start:
{
uint8_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___x_871_ = 0;
v___x_872_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__4, &l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__4);
v___x_873_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1));
v___x_874_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__0));
v___x_875_ = l_Lean_Parser_nodeWithAntiquot(v___x_874_, v___x_873_, v___x_872_, v___x_871_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_Arg_flag__off___lam__0(lean_object* v_c_876_, lean_object* v_s_877_){
_start:
{
lean_object* v___x_878_; lean_object* v_fn_879_; lean_object* v___x_880_; 
v___x_878_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__5, &l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__5);
v_fn_879_ = lean_ctor_get(v___x_878_, 1);
lean_inc_ref(v_fn_879_);
v___x_880_ = lean_apply_2(v_fn_879_, v_c_876_, v_s_877_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1(){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
v___x_888_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__off___lam__0___closed__1));
v___x_889_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1___closed__0));
v___x_890_ = l_Lean_addBuiltinDocString(v___x_888_, v___x_889_);
return v___x_890_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1___boxed(lean_object* v_a_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1();
return v_res_892_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_arg___lam__0___closed__2(void){
_start:
{
uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_899_ = 1;
v___x_900_ = ((lean_object*)(l_Lean_Doc_Parser_arg___lam__0___closed__1));
v___x_901_ = ((lean_object*)(l_Lean_Doc_Parser_arg___lam__0___closed__0));
v___x_902_ = l_Lean_Parser_mkAntiquot(v___x_901_, v___x_900_, v___x_899_, v___x_899_);
return v___x_902_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_arg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; 
v___x_903_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named__no__paren));
v___x_904_ = l_Lean_Parser_atomic(v___x_903_);
return v___x_904_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_arg___lam__0___closed__4(void){
_start:
{
lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; 
v___x_905_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_anon));
v___x_906_ = lean_obj_once(&l_Lean_Doc_Parser_arg___lam__0___closed__3, &l_Lean_Doc_Parser_arg___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_arg___lam__0___closed__3);
v___x_907_ = l_Lean_Parser_orelse(v___x_906_, v___x_905_);
return v___x_907_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_arg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_908_ = lean_obj_once(&l_Lean_Doc_Parser_arg___lam__0___closed__4, &l_Lean_Doc_Parser_arg___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_arg___lam__0___closed__4);
v___x_909_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__off));
v___x_910_ = l_Lean_Parser_orelse(v___x_909_, v___x_908_);
return v___x_910_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_arg___lam__0___closed__6(void){
_start:
{
lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; 
v___x_911_ = lean_obj_once(&l_Lean_Doc_Parser_arg___lam__0___closed__5, &l_Lean_Doc_Parser_arg___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_arg___lam__0___closed__5);
v___x_912_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_flag__on));
v___x_913_ = l_Lean_Parser_orelse(v___x_912_, v___x_911_);
return v___x_913_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_arg___lam__0___closed__7(void){
_start:
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_914_ = lean_obj_once(&l_Lean_Doc_Parser_arg___lam__0___closed__6, &l_Lean_Doc_Parser_arg___lam__0___closed__6_once, _init_l_Lean_Doc_Parser_arg___lam__0___closed__6);
v___x_915_ = ((lean_object*)(l_Lean_Doc_Parser_Arg_named));
v___x_916_ = l_Lean_Parser_orelse(v___x_915_, v___x_914_);
return v___x_916_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_arg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_917_ = lean_obj_once(&l_Lean_Doc_Parser_arg___lam__0___closed__7, &l_Lean_Doc_Parser_arg___lam__0___closed__7_once, _init_l_Lean_Doc_Parser_arg___lam__0___closed__7);
v___x_918_ = lean_obj_once(&l_Lean_Doc_Parser_arg___lam__0___closed__2, &l_Lean_Doc_Parser_arg___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_arg___lam__0___closed__2);
v___x_919_ = l_Lean_Parser_withAntiquot(v___x_918_, v___x_917_);
return v___x_919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_arg___lam__0(lean_object* v_c_920_, lean_object* v_s_921_){
_start:
{
lean_object* v___x_922_; lean_object* v_fn_923_; lean_object* v___x_924_; 
v___x_922_ = lean_obj_once(&l_Lean_Doc_Parser_arg___lam__0___closed__8, &l_Lean_Doc_Parser_arg___lam__0___closed__8_once, _init_l_Lean_Doc_Parser_arg___lam__0___closed__8);
v_fn_923_ = lean_ctor_get(v___x_922_, 1);
lean_inc_ref(v_fn_923_);
v___x_924_ = lean_apply_2(v_fn_923_, v_c_920_, v_s_921_);
return v___x_924_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__3(void){
_start:
{
lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_938_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__7, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__7_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__7);
v___x_939_ = ((lean_object*)(l_Lean_Doc_Parser_versoLinkUrl));
v___x_940_ = l_Lean_Parser_andthen(v___x_939_, v___x_938_);
return v___x_940_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__4(void){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_941_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__3, &l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__3);
v___x_942_ = lean_obj_once(&l_Lean_Doc_Parser_Arg_named___lam__0___closed__3, &l_Lean_Doc_Parser_Arg_named___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_Arg_named___lam__0___closed__3);
v___x_943_ = l_Lean_Parser_andthen(v___x_942_, v___x_941_);
return v___x_943_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__5(void){
_start:
{
uint8_t v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; 
v___x_944_ = 0;
v___x_945_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__4, &l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__4);
v___x_946_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2));
v___x_947_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__0));
v___x_948_ = l_Lean_Parser_nodeWithAntiquot(v___x_947_, v___x_946_, v___x_945_, v___x_944_);
return v___x_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_LinkTarget_url___lam__0(lean_object* v_c_949_, lean_object* v_s_950_){
_start:
{
lean_object* v___x_951_; lean_object* v_fn_952_; lean_object* v___x_953_; 
v___x_951_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__5, &l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__5);
v_fn_952_ = lean_ctor_get(v___x_951_, 1);
lean_inc_ref(v_fn_952_);
v___x_953_ = lean_apply_2(v_fn_952_, v_c_949_, v_s_950_);
return v___x_953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1(){
_start:
{
lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_961_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_url___lam__0___closed__2));
v___x_962_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1___closed__0));
v___x_963_ = l_Lean_addBuiltinDocString(v___x_961_, v___x_962_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1___boxed(lean_object* v_a_964_){
_start:
{
lean_object* v_res_965_; 
v_res_965_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1();
return v_res_965_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__3(void){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; 
v___x_974_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__2));
v___x_975_ = l_Lean_Parser_symbol(v___x_974_);
return v___x_975_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__5(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_977_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__4));
v___x_978_ = l_Lean_Parser_symbol(v___x_977_);
return v___x_978_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__6(void){
_start:
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; 
v___x_979_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__5, &l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__5_once, _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__5);
v___x_980_ = ((lean_object*)(l_Lean_Doc_Parser_versoRef));
v___x_981_ = l_Lean_Parser_andthen(v___x_980_, v___x_979_);
return v___x_981_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__7(void){
_start:
{
lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_982_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__6, &l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__6_once, _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__6);
v___x_983_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__3, &l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__3);
v___x_984_ = l_Lean_Parser_andthen(v___x_983_, v___x_982_);
return v___x_984_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__8(void){
_start:
{
uint8_t v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; 
v___x_985_ = 0;
v___x_986_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__7, &l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__7_once, _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__7);
v___x_987_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1));
v___x_988_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__0));
v___x_989_ = l_Lean_Parser_nodeWithAntiquot(v___x_988_, v___x_987_, v___x_986_, v___x_985_);
return v___x_989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_LinkTarget_ref___lam__0(lean_object* v_c_990_, lean_object* v_s_991_){
_start:
{
lean_object* v___x_992_; lean_object* v_fn_993_; lean_object* v___x_994_; 
v___x_992_ = lean_obj_once(&l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__8, &l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__8_once, _init_l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__8);
v_fn_993_ = lean_ctor_get(v___x_992_, 1);
lean_inc_ref(v_fn_993_);
v___x_994_ = lean_apply_2(v_fn_993_, v_c_990_, v_s_991_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1(){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1002_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__1));
v___x_1003_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1___closed__0));
v___x_1004_ = l_Lean_addBuiltinDocString(v___x_1002_, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1___boxed(lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1();
return v_res_1006_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_linkTarget___lam__0___closed__2(void){
_start:
{
uint8_t v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; 
v___x_1013_ = 1;
v___x_1014_ = ((lean_object*)(l_Lean_Doc_Parser_linkTarget___lam__0___closed__1));
v___x_1015_ = ((lean_object*)(l_Lean_Doc_Parser_linkTarget___lam__0___closed__0));
v___x_1016_ = l_Lean_Parser_mkAntiquot(v___x_1015_, v___x_1014_, v___x_1013_, v___x_1013_);
return v___x_1016_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_linkTarget___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v___x_1019_; 
v___x_1017_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref));
v___x_1018_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_url));
v___x_1019_ = l_Lean_Parser_orelse(v___x_1018_, v___x_1017_);
return v___x_1019_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_linkTarget___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1020_ = lean_obj_once(&l_Lean_Doc_Parser_linkTarget___lam__0___closed__3, &l_Lean_Doc_Parser_linkTarget___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_linkTarget___lam__0___closed__3);
v___x_1021_ = lean_obj_once(&l_Lean_Doc_Parser_linkTarget___lam__0___closed__2, &l_Lean_Doc_Parser_linkTarget___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_linkTarget___lam__0___closed__2);
v___x_1022_ = l_Lean_Parser_withAntiquot(v___x_1021_, v___x_1020_);
return v___x_1022_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_linkTarget___lam__0(lean_object* v_c_1023_, lean_object* v_s_1024_){
_start:
{
lean_object* v___x_1025_; lean_object* v_fn_1026_; lean_object* v___x_1027_; 
v___x_1025_ = lean_obj_once(&l_Lean_Doc_Parser_linkTarget___lam__0___closed__4, &l_Lean_Doc_Parser_linkTarget___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_linkTarget___lam__0___closed__4);
v_fn_1026_ = lean_ctor_get(v___x_1025_, 1);
lean_inc_ref(v_fn_1026_);
v___x_1027_ = lean_apply_2(v_fn_1026_, v_c_1023_, v_s_1024_);
return v___x_1027_;
}
}
LEAN_EXPORT uint8_t l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(lean_object* v_x_1033_, lean_object* v_x_1034_){
_start:
{
if (lean_obj_tag(v_x_1033_) == 0)
{
if (lean_obj_tag(v_x_1034_) == 0)
{
uint8_t v___x_1035_; 
v___x_1035_ = 1;
return v___x_1035_;
}
else
{
uint8_t v___x_1036_; 
v___x_1036_ = 0;
return v___x_1036_;
}
}
else
{
if (lean_obj_tag(v_x_1034_) == 0)
{
uint8_t v___x_1037_; 
v___x_1037_ = 0;
return v___x_1037_;
}
else
{
lean_object* v_val_1038_; lean_object* v_val_1039_; uint8_t v___x_1040_; 
v_val_1038_ = lean_ctor_get(v_x_1033_, 0);
v_val_1039_ = lean_ctor_get(v_x_1034_, 0);
v___x_1040_ = l_Lean_Parser_instBEqError_beq(v_val_1038_, v_val_1039_);
return v___x_1040_;
}
}
}
}
LEAN_EXPORT lean_object* l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1___boxed(lean_object* v_x_1041_, lean_object* v_x_1042_){
_start:
{
uint8_t v_res_1043_; lean_object* v_r_1044_; 
v_res_1043_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(v_x_1041_, v_x_1042_);
lean_dec(v_x_1042_);
lean_dec(v_x_1041_);
v_r_1044_ = lean_box(v_res_1043_);
return v_r_1044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__0(lean_object* v_x_1045_, lean_object* v_st_1046_){
_start:
{
lean_inc_ref(v_st_1046_);
return v_st_1046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__0___boxed(lean_object* v_x_1047_, lean_object* v_st_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__0(v_x_1047_, v_st_1048_);
lean_dec_ref(v_st_1048_);
lean_dec_ref(v_x_1047_);
return v_res_1049_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__0(uint32_t v___x_1050_, uint32_t v_x_1051_){
_start:
{
uint8_t v___x_1052_; 
v___x_1052_ = lean_uint32_dec_eq(v_x_1051_, v___x_1050_);
return v___x_1052_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__0___boxed(lean_object* v___x_1053_, lean_object* v_x_1054_){
_start:
{
uint32_t v___x_577__boxed_1055_; uint32_t v_x_578__boxed_1056_; uint8_t v_res_1057_; lean_object* v_r_1058_; 
v___x_577__boxed_1055_ = lean_unbox_uint32(v___x_1053_);
lean_dec(v___x_1053_);
v_x_578__boxed_1056_ = lean_unbox_uint32(v_x_1054_);
lean_dec(v_x_1054_);
v_res_1057_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__0(v___x_577__boxed_1055_, v_x_578__boxed_1056_);
v_r_1058_ = lean_box(v_res_1057_);
return v_r_1058_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__2(lean_object* v_b_1059_, lean_object* v___f_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v___x_1063_; 
v___x_1063_ = l_Lean_Parser_andthenFn(v_b_1059_, v___f_1060_, v___y_1061_, v___y_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__1(uint32_t v___x_1064_, lean_object* v___f_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1068_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
v___x_1069_ = lean_string_push(v___x_1068_, v___x_1064_);
v___x_1070_ = l_Lean_Parser_satisfyFn(v___f_1065_, v___x_1069_, v___y_1066_, v___y_1067_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__1___boxed(lean_object* v___x_1071_, lean_object* v___f_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
uint32_t v___x_594__boxed_1075_; lean_object* v_res_1076_; 
v___x_594__boxed_1075_ = lean_unbox_uint32(v___x_1071_);
lean_dec(v___x_1071_);
v_res_1076_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__1(v___x_594__boxed_1075_, v___f_1072_, v___y_1073_, v___y_1074_);
lean_dec_ref(v___y_1073_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg(lean_object* v___x_1077_, lean_object* v_s_1078_, lean_object* v_a_1079_, lean_object* v_b_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
uint8_t v_decide_1083_; 
v_decide_1083_ = lean_nat_dec_eq(v_a_1079_, v___x_1077_);
if (v_decide_1083_ == 0)
{
uint32_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___f_1086_; lean_object* v___x_1087_; lean_object* v___f_1088_; lean_object* v___f_1089_; lean_object* v___x_1090_; 
v___x_1084_ = lean_string_utf8_get_fast(v_s_1078_, v_a_1079_);
v___x_1085_ = lean_box_uint32(v___x_1084_);
v___f_1086_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1086_, 0, v___x_1085_);
v___x_1087_ = lean_box_uint32(v___x_1084_);
v___f_1088_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1088_, 0, v___x_1087_);
lean_closure_set(v___f_1088_, 1, v___f_1086_);
v___f_1089_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___lam__2), 4, 2);
lean_closure_set(v___f_1089_, 0, v_b_1080_);
lean_closure_set(v___f_1089_, 1, v___f_1088_);
v___x_1090_ = lean_string_utf8_next_fast(v_s_1078_, v_a_1079_);
lean_dec(v_a_1079_);
v_a_1079_ = v___x_1090_;
v_b_1080_ = v___f_1089_;
goto _start;
}
else
{
lean_object* v___x_1092_; 
lean_dec(v_a_1079_);
v___x_1092_ = lean_apply_2(v_b_1080_, v___y_1081_, v___y_1082_);
return v___x_1092_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg___boxed(lean_object* v___x_1093_, lean_object* v_s_1094_, lean_object* v_a_1095_, lean_object* v_b_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_){
_start:
{
lean_object* v_res_1099_; 
v_res_1099_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg(v___x_1093_, v_s_1094_, v_a_1095_, v_b_1096_, v___y_1097_, v___y_1098_);
lean_dec_ref(v_s_1094_);
lean_dec(v___x_1093_);
return v_res_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1(lean_object* v_s_1101_, lean_object* v___f_1102_, lean_object* v_c_1103_, lean_object* v_st_1104_){
_start:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v_st_x27_1107_; lean_object* v_errorMsg_1108_; lean_object* v___x_1109_; uint8_t v___x_1110_; 
v___x_1105_ = lean_string_utf8_byte_size(v_s_1101_);
v___x_1106_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_st_1104_);
v_st_x27_1107_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg(v___x_1105_, v_s_1101_, v___x_1106_, v___f_1102_, v_c_1103_, v_st_1104_);
v_errorMsg_1108_ = lean_ctor_get(v_st_x27_1107_, 4);
v___x_1109_ = lean_box(0);
v___x_1110_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(v_errorMsg_1108_, v___x_1109_);
if (v___x_1110_ == 0)
{
lean_object* v_pos_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v_pos_1111_ = lean_ctor_get(v_st_1104_, 2);
lean_inc(v_pos_1111_);
lean_dec_ref(v_st_1104_);
v___x_1112_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___closed__0));
v___x_1113_ = lean_string_append(v___x_1112_, v_s_1101_);
v___x_1114_ = lean_string_append(v___x_1113_, v___x_1112_);
v___x_1115_ = l_Lean_Parser_ParserState_mkErrorAt(v_st_x27_1107_, v___x_1114_, v_pos_1111_, v___x_1109_);
return v___x_1115_;
}
else
{
lean_dec_ref(v_st_1104_);
return v_st_x27_1107_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___boxed(lean_object* v_s_1116_, lean_object* v___f_1117_, lean_object* v_c_1118_, lean_object* v_st_1119_){
_start:
{
lean_object* v_res_1120_; 
v_res_1120_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1(v_s_1116_, v___f_1117_, v_c_1118_, v_st_1119_);
lean_dec_ref(v_s_1116_);
return v_res_1120_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(lean_object* v_s_1122_){
_start:
{
lean_object* v___f_1123_; lean_object* v___f_1124_; lean_object* v___x_1125_; uint8_t v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___f_1123_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___closed__0));
v___f_1124_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1124_, 0, v_s_1122_);
lean_closure_set(v___f_1124_, 1, v___f_1123_);
v___x_1125_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_1126_ = 1;
v___x_1127_ = lean_box(v___x_1126_);
v___x_1128_ = lean_alloc_closure((void*)(l_Lean_Parser_rawFn___boxed), 4, 2);
lean_closure_set(v___x_1128_, 0, v___f_1124_);
lean_closure_set(v___x_1128_, 1, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1125_);
lean_ctor_set(v___x_1129_, 1, v___x_1128_);
v___x_1130_ = l_Lean_Parser_tokenWithAntiquot(v___x_1129_);
return v___x_1130_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0(lean_object* v___x_1131_, lean_object* v___x_1132_, lean_object* v_s_1133_, lean_object* v_inst_1134_, lean_object* v_R_1135_, lean_object* v_a_1136_, lean_object* v_b_1137_, lean_object* v_c_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
lean_object* v___x_1141_; 
v___x_1141_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___redArg(v___x_1132_, v_s_1133_, v_a_1136_, v_b_1137_, v___y_1139_, v___y_1140_);
return v___x_1141_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0___boxed(lean_object* v___x_1142_, lean_object* v___x_1143_, lean_object* v_s_1144_, lean_object* v_inst_1145_, lean_object* v_R_1146_, lean_object* v_a_1147_, lean_object* v_b_1148_, lean_object* v_c_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__0(v___x_1142_, v___x_1143_, v_s_1144_, v_inst_1145_, v_R_1146_, v_a_1147_, v_b_1148_, v_c_1149_, v___y_1150_, v___y_1151_);
lean_dec_ref(v_s_1144_);
lean_dec(v___x_1143_);
lean_dec_ref(v___x_1142_);
return v_res_1152_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__0(uint32_t v_ch_1153_, uint32_t v_x_1154_){
_start:
{
uint8_t v___x_1155_; 
v___x_1155_ = lean_uint32_dec_eq(v_x_1154_, v_ch_1153_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__0___boxed(lean_object* v_ch_1156_, lean_object* v_x_1157_){
_start:
{
uint32_t v_ch_boxed_1158_; uint32_t v_x_149__boxed_1159_; uint8_t v_res_1160_; lean_object* v_r_1161_; 
v_ch_boxed_1158_ = lean_unbox_uint32(v_ch_1156_);
lean_dec(v_ch_1156_);
v_x_149__boxed_1159_ = lean_unbox_uint32(v_x_1157_);
lean_dec(v_x_1157_);
v_res_1160_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__0(v_ch_boxed_1158_, v_x_149__boxed_1159_);
v_r_1161_ = lean_box(v_res_1160_);
return v_r_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1(uint32_t v_ch_1163_, lean_object* v___f_1164_, lean_object* v_c_1165_, lean_object* v_st_1166_){
_start:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v_st_x27_1172_; lean_object* v_errorMsg_1173_; lean_object* v___x_1174_; uint8_t v___x_1175_; 
v___x_1167_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___closed__0));
v___x_1168_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
v___x_1169_ = lean_string_push(v___x_1168_, v_ch_1163_);
v___x_1170_ = lean_string_append(v___x_1167_, v___x_1169_);
v___x_1171_ = lean_string_append(v___x_1170_, v___x_1167_);
lean_inc_ref(v_st_1166_);
v_st_x27_1172_ = l_Lean_Parser_takeWhile1Fn(v___f_1164_, v___x_1171_, v_c_1165_, v_st_1166_);
v_errorMsg_1173_ = lean_ctor_get(v_st_x27_1172_, 4);
v___x_1174_ = lean_box(0);
v___x_1175_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(v_errorMsg_1173_, v___x_1174_);
if (v___x_1175_ == 0)
{
lean_object* v_pos_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v_pos_1176_ = lean_ctor_get(v_st_1166_, 2);
lean_inc(v_pos_1176_);
lean_dec_ref(v_st_1166_);
v___x_1177_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1___closed__0));
v___x_1178_ = lean_string_append(v___x_1177_, v___x_1169_);
lean_dec_ref(v___x_1169_);
v___x_1179_ = lean_string_append(v___x_1178_, v___x_1167_);
v___x_1180_ = l_Lean_Parser_ParserState_mkErrorAt(v_st_x27_1172_, v___x_1179_, v_pos_1176_, v___x_1174_);
return v___x_1180_;
}
else
{
lean_dec_ref(v___x_1169_);
lean_dec_ref(v_st_1166_);
return v_st_x27_1172_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1___boxed(lean_object* v_ch_1181_, lean_object* v___f_1182_, lean_object* v_c_1183_, lean_object* v_st_1184_){
_start:
{
uint32_t v_ch_boxed_1185_; lean_object* v_res_1186_; 
v_ch_boxed_1185_ = lean_unbox_uint32(v_ch_1181_);
lean_dec(v_ch_1181_);
v_res_1186_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1(v_ch_boxed_1185_, v___f_1182_, v_c_1183_, v_st_1184_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(uint32_t v_ch_1187_){
_start:
{
lean_object* v___x_1188_; lean_object* v___f_1189_; lean_object* v___x_1190_; lean_object* v___f_1191_; lean_object* v___x_1192_; uint8_t v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; 
v___x_1188_ = lean_box_uint32(v_ch_1187_);
v___f_1189_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1189_, 0, v___x_1188_);
v___x_1190_ = lean_box_uint32(v_ch_1187_);
v___f_1191_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___lam__1___boxed), 4, 2);
lean_closure_set(v___f_1191_, 0, v___x_1190_);
lean_closure_set(v___f_1191_, 1, v___f_1189_);
v___x_1192_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_1193_ = 1;
v___x_1194_ = lean_box(v___x_1193_);
v___x_1195_ = lean_alloc_closure((void*)(l_Lean_Parser_rawFn___boxed), 4, 2);
lean_closure_set(v___x_1195_, 0, v___f_1191_);
lean_closure_set(v___x_1195_, 1, v___x_1194_);
v___x_1196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1196_, 0, v___x_1192_);
lean_ctor_set(v___x_1196_, 1, v___x_1195_);
v___x_1197_ = l_Lean_Parser_tokenWithAntiquot(v___x_1196_);
return v___x_1197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun___boxed(lean_object* v_ch_1198_){
_start:
{
uint32_t v_ch_boxed_1199_; lean_object* v_res_1200_; 
v_ch_boxed_1199_ = lean_unbox_uint32(v_ch_1198_);
lean_dec(v_ch_1198_);
v_res_1200_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(v_ch_boxed_1199_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0(lean_object* v_c_1202_, lean_object* v_s_1203_){
_start:
{
lean_object* v_toInputContext_1204_; lean_object* v_pos_1205_; uint8_t v___x_1206_; 
v_toInputContext_1204_ = lean_ctor_get(v_c_1202_, 0);
v_pos_1205_ = lean_ctor_get(v_s_1203_, 2);
v___x_1206_ = l_Lean_Parser_InputContext_atEnd(v_toInputContext_1204_, v_pos_1205_);
if (v___x_1206_ == 0)
{
lean_object* v_inputString_1207_; uint32_t v_ch_1208_; uint32_t v___x_1209_; uint8_t v___x_1210_; 
lean_inc(v_pos_1205_);
v_inputString_1207_ = lean_ctor_get(v_toInputContext_1204_, 0);
v_ch_1208_ = lean_string_utf8_get_fast(v_inputString_1207_, v_pos_1205_);
v___x_1209_ = 42;
v___x_1210_ = lean_uint32_dec_eq(v_ch_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
uint32_t v___x_1211_; uint8_t v___x_1212_; 
v___x_1211_ = 45;
v___x_1212_ = lean_uint32_dec_eq(v_ch_1208_, v___x_1211_);
if (v___x_1212_ == 0)
{
uint32_t v___x_1213_; uint8_t v___x_1214_; 
v___x_1213_ = 43;
v___x_1214_ = lean_uint32_dec_eq(v_ch_1208_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v___x_1215_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0___closed__0));
v___x_1216_ = lean_box(0);
v___x_1217_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_1203_, v___x_1215_, v_pos_1205_, v___x_1216_);
return v___x_1217_;
}
else
{
lean_object* v___x_1218_; 
v___x_1218_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1203_, v_c_1202_, v_pos_1205_);
lean_dec(v_pos_1205_);
return v___x_1218_;
}
}
else
{
lean_object* v___x_1219_; 
v___x_1219_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1203_, v_c_1202_, v_pos_1205_);
lean_dec(v_pos_1205_);
return v___x_1219_;
}
}
else
{
lean_object* v___x_1220_; 
v___x_1220_ = l_Lean_Parser_ParserState_next_x27___redArg(v_s_1203_, v_c_1202_, v_pos_1205_);
lean_dec(v_pos_1205_);
return v___x_1220_;
}
}
else
{
lean_object* v___x_1221_; lean_object* v___x_1222_; 
v___x_1221_ = lean_box(0);
v___x_1222_ = l_Lean_Parser_ParserState_mkEOIError(v_s_1203_, v___x_1221_);
return v___x_1222_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0___boxed(lean_object* v_c_1223_, lean_object* v_s_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__0(v_c_1223_, v_s_1224_);
lean_dec_ref(v_c_1223_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom___lam__3(lean_object* v___f_1226_, lean_object* v___f_1227_, lean_object* v___f_1228_, lean_object* v_c_1229_, lean_object* v_s_1230_){
_start:
{
lean_object* v___x_1231_; lean_object* v___x_1232_; uint8_t v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v_fn_1238_; lean_object* v___x_1239_; 
v___x_1231_ = lean_box(1);
v___x_1232_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1232_, 0, v___f_1226_);
lean_ctor_set(v___x_1232_, 1, v___f_1227_);
lean_ctor_set(v___x_1232_, 2, v___x_1231_);
v___x_1233_ = 1;
v___x_1234_ = lean_box(v___x_1233_);
v___x_1235_ = lean_alloc_closure((void*)(l_Lean_Parser_rawFn___boxed), 4, 2);
lean_closure_set(v___x_1235_, 0, v___f_1228_);
lean_closure_set(v___x_1235_, 1, v___x_1234_);
v___x_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1236_, 0, v___x_1232_);
lean_ctor_set(v___x_1236_, 1, v___x_1235_);
v___x_1237_ = l_Lean_Parser_tokenWithAntiquot(v___x_1236_);
v_fn_1238_ = lean_ctor_get(v___x_1237_, 1);
lean_inc_ref(v_fn_1238_);
lean_dec_ref(v___x_1237_);
v___x_1239_ = lean_apply_2(v_fn_1238_, v_c_1229_, v_s_1230_);
return v___x_1239_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__0(uint32_t v_x_1249_){
_start:
{
uint32_t v___x_1250_; uint8_t v___x_1251_; 
v___x_1250_ = 48;
v___x_1251_ = lean_uint32_dec_le(v___x_1250_, v_x_1249_);
if (v___x_1251_ == 0)
{
return v___x_1251_;
}
else
{
uint32_t v___x_1252_; uint8_t v___x_1253_; 
v___x_1252_ = 57;
v___x_1253_ = lean_uint32_dec_le(v_x_1249_, v___x_1252_);
return v___x_1253_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__0___boxed(lean_object* v_x_1254_){
_start:
{
uint32_t v_x_326__boxed_1255_; uint8_t v_res_1256_; lean_object* v_r_1257_; 
v_x_326__boxed_1255_ = lean_unbox_uint32(v_x_1254_);
lean_dec(v_x_1254_);
v_res_1256_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__0(v_x_326__boxed_1255_);
v_r_1257_ = lean_box(v_res_1256_);
return v_r_1257_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__1(uint32_t v_c_1258_){
_start:
{
uint32_t v___x_1259_; uint8_t v___x_1260_; 
v___x_1259_ = 46;
v___x_1260_ = lean_uint32_dec_eq(v_c_1258_, v___x_1259_);
if (v___x_1260_ == 0)
{
uint32_t v___x_1261_; uint8_t v___x_1262_; 
v___x_1261_ = 41;
v___x_1262_ = lean_uint32_dec_eq(v_c_1258_, v___x_1261_);
return v___x_1262_;
}
else
{
return v___x_1260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__1___boxed(lean_object* v_c_1263_){
_start:
{
uint32_t v_c_boxed_1264_; uint8_t v_res_1265_; lean_object* v_r_1266_; 
v_c_boxed_1264_ = lean_unbox_uint32(v_c_1263_);
lean_dec(v_c_1263_);
v_res_1265_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__1(v_c_boxed_1264_);
v_r_1266_ = lean_box(v_res_1265_);
return v_r_1266_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2(lean_object* v___f_1268_, lean_object* v___y_1269_, lean_object* v___y_1270_){
_start:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; 
v___x_1271_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2___closed__0));
v___x_1272_ = l_Lean_Parser_satisfyFn(v___f_1268_, v___x_1271_, v___y_1269_, v___y_1270_);
return v___x_1272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2___boxed(lean_object* v___f_1273_, lean_object* v___y_1274_, lean_object* v___y_1275_){
_start:
{
lean_object* v_res_1276_; 
v_res_1276_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__2(v___f_1273_, v___y_1274_, v___y_1275_);
lean_dec_ref(v___y_1274_);
return v_res_1276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3(lean_object* v___f_1279_, lean_object* v___f_1280_, lean_object* v_c_1281_, lean_object* v_s_1282_){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v_s_x27_1285_; lean_object* v_errorMsg_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v___x_1283_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__0));
v___x_1284_ = lean_alloc_closure((void*)(l_Lean_Parser_takeWhile1Fn), 4, 2);
lean_closure_set(v___x_1284_, 0, v___f_1279_);
lean_closure_set(v___x_1284_, 1, v___x_1283_);
lean_inc_ref(v_s_1282_);
v_s_x27_1285_ = l_Lean_Parser_andthenFn(v___x_1284_, v___f_1280_, v_c_1281_, v_s_1282_);
v_errorMsg_1286_ = lean_ctor_get(v_s_x27_1285_, 4);
v___x_1287_ = lean_box(0);
v___x_1288_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(v_errorMsg_1286_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v_pos_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; 
v_pos_1289_ = lean_ctor_get(v_s_1282_, 2);
lean_inc(v_pos_1289_);
lean_dec_ref(v_s_1282_);
v___x_1290_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom___lam__3___closed__1));
v___x_1291_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_x27_1285_, v___x_1290_, v_pos_1289_, v___x_1287_);
return v___x_1291_;
}
else
{
lean_dec_ref(v_s_1282_);
return v_s_x27_1285_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0(lean_object* v_c_1308_){
_start:
{
lean_object* v_toInputContext_1309_; lean_object* v_toParserModuleContext_1310_; lean_object* v_toCacheableParserContext_1311_; lean_object* v_tokens_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1321_; 
v_toInputContext_1309_ = lean_ctor_get(v_c_1308_, 0);
v_toParserModuleContext_1310_ = lean_ctor_get(v_c_1308_, 1);
v_toCacheableParserContext_1311_ = lean_ctor_get(v_c_1308_, 2);
v_tokens_1312_ = lean_ctor_get(v_c_1308_, 3);
v_isSharedCheck_1321_ = !lean_is_exclusive(v_c_1308_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1314_ = v_c_1308_;
v_isShared_1315_ = v_isSharedCheck_1321_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_tokens_1312_);
lean_inc(v_toCacheableParserContext_1311_);
lean_inc(v_toParserModuleContext_1310_);
lean_inc(v_toInputContext_1309_);
lean_dec(v_c_1308_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1321_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1319_; 
v___x_1316_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0___closed__0));
v___x_1317_ = l_Lean_Data_Trie_insert___redArg(v_tokens_1312_, v___x_1316_, v___x_1316_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set(v___x_1314_, 3, v___x_1317_);
v___x_1319_ = v___x_1314_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_toInputContext_1309_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_toParserModuleContext_1310_);
lean_ctor_set(v_reuseFailAlloc_1320_, 2, v_toCacheableParserContext_1311_);
lean_ctor_set(v_reuseFailAlloc_1320_, 3, v___x_1317_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__4(void){
_start:
{
uint8_t v___x_1330_; uint8_t v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; 
v___x_1330_ = 0;
v___x_1331_ = 1;
v___x_1332_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__3));
v___x_1333_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__0));
v___x_1334_ = l_Lean_Parser_mkAntiquot(v___x_1333_, v___x_1332_, v___x_1331_, v___x_1330_);
return v___x_1334_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1336_; lean_object* v___x_1337_; 
v___x_1336_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__5));
v___x_1337_ = l_Lean_Parser_symbol(v___x_1336_);
return v___x_1337_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__10(void){
_start:
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
v___x_1342_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__9));
v___x_1343_ = l_Lean_Parser_symbol(v___x_1342_);
return v___x_1343_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__11(void){
_start:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v_p_1347_; 
v___x_1344_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__10, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__10_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__10);
v___x_1345_ = l_Lean_Parser_Term_structInstField;
v___x_1346_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__8));
v_p_1347_ = l_Lean_Parser_withAntiquotSpliceAndSuffix(v___x_1346_, v___x_1345_, v___x_1344_);
return v_p_1347_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__13(void){
_start:
{
lean_object* v___x_1349_; lean_object* v___x_1350_; 
v___x_1349_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__12));
v___x_1350_ = l_Lean_Parser_checkColGe(v___x_1349_);
return v___x_1350_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__14(void){
_start:
{
lean_object* v_p_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v_p_1351_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__11, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__11_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__11);
v___x_1352_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__13, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__13_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__13);
v___x_1353_ = l_Lean_Parser_andthen(v___x_1352_, v_p_1351_);
return v___x_1353_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__15(void){
_start:
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
v___x_1354_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__12));
v___x_1355_ = l_Lean_Parser_checkColEq(v___x_1354_);
return v___x_1355_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__17(void){
_start:
{
lean_object* v___x_1357_; lean_object* v___x_1358_; 
v___x_1357_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__16));
v___x_1358_ = l_Lean_Parser_checkLinebreakBefore(v___x_1357_);
return v___x_1358_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__18(void){
_start:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1359_ = l_Lean_Parser_pushNone;
v___x_1360_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__17, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__17_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__17);
v___x_1361_ = l_Lean_Parser_andthen(v___x_1360_, v___x_1359_);
return v___x_1361_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__19(void){
_start:
{
lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; 
v___x_1362_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__18, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__18_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__18);
v___x_1363_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__15, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__15_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__15);
v___x_1364_ = l_Lean_Parser_andthen(v___x_1363_, v___x_1362_);
return v___x_1364_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__20(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1365_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__19, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__19_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__19);
v___x_1366_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__6);
v___x_1367_ = l_Lean_Parser_orelse(v___x_1366_, v___x_1365_);
return v___x_1367_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__21(void){
_start:
{
uint8_t v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; 
v___x_1368_ = 1;
v___x_1369_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__20, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__20_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__20);
v___x_1370_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__5));
v___x_1371_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__14, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__14_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__14);
v___x_1372_ = l_Lean_Parser_sepBy(v___x_1371_, v___x_1370_, v___x_1369_, v___x_1368_);
return v___x_1372_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__22(void){
_start:
{
lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1373_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__21, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__21_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__21);
v___x_1374_ = l_Lean_Parser_withPosition(v___x_1373_);
return v___x_1374_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__23(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__22, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__22_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__22);
v___x_1376_ = l_Lean_Parser_Term_structInstFields(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__24(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; 
v___x_1377_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__23, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__23_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__23);
v___x_1378_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__4);
v___x_1379_ = l_Lean_Parser_withAntiquot(v___x_1378_, v___x_1377_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1(lean_object* v___f_1380_, lean_object* v_c_1381_, lean_object* v_s_1382_){
_start:
{
lean_object* v___x_1383_; lean_object* v_fn_1384_; lean_object* v___x_1385_; 
v___x_1383_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__24, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__24_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__1___closed__24);
v_fn_1384_ = lean_ctor_get(v___x_1383_, 1);
lean_inc_ref(v_fn_1384_);
v___x_1385_ = l_Lean_Parser_adaptUncacheableContextFn(v___f_1380_, v_fn_1384_, v_c_1381_, v_s_1382_);
return v___x_1385_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_headerMarker___lam__0___closed__2(void){
_start:
{
uint32_t v___x_1399_; lean_object* v___x_1400_; 
v___x_1399_ = 35;
v___x_1400_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(v___x_1399_);
return v___x_1400_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_headerMarker___lam__0___closed__3(void){
_start:
{
uint8_t v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; 
v___x_1401_ = 0;
v___x_1402_ = lean_obj_once(&l_Lean_Doc_Parser_headerMarker___lam__0___closed__2, &l_Lean_Doc_Parser_headerMarker___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_headerMarker___lam__0___closed__2);
v___x_1403_ = ((lean_object*)(l_Lean_Doc_Parser_headerMarker___lam__0___closed__1));
v___x_1404_ = ((lean_object*)(l_Lean_Doc_Parser_headerMarker___lam__0___closed__0));
v___x_1405_ = l_Lean_Parser_nodeWithAntiquot(v___x_1404_, v___x_1403_, v___x_1402_, v___x_1401_);
return v___x_1405_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_headerMarker___lam__0(lean_object* v_c_1406_, lean_object* v_s_1407_){
_start:
{
lean_object* v___x_1408_; lean_object* v_fn_1409_; lean_object* v___x_1410_; 
v___x_1408_ = lean_obj_once(&l_Lean_Doc_Parser_headerMarker___lam__0___closed__3, &l_Lean_Doc_Parser_headerMarker___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_headerMarker___lam__0___closed__3);
v_fn_1409_ = lean_ctor_get(v___x_1408_, 1);
lean_inc_ref(v_fn_1409_);
v___x_1410_ = lean_apply_2(v_fn_1409_, v_c_1406_, v_s_1407_);
return v___x_1410_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_listMarker___lam__0___closed__2(void){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1422_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom));
v___x_1423_ = l_Lean_Parser_atomic(v___x_1422_);
return v___x_1423_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_listMarker___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; 
v___x_1424_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom));
v___x_1425_ = lean_obj_once(&l_Lean_Doc_Parser_listMarker___lam__0___closed__2, &l_Lean_Doc_Parser_listMarker___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_listMarker___lam__0___closed__2);
v___x_1426_ = l_Lean_Parser_orelse(v___x_1425_, v___x_1424_);
return v___x_1426_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_listMarker___lam__0___closed__4(void){
_start:
{
uint8_t v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; 
v___x_1427_ = 0;
v___x_1428_ = lean_obj_once(&l_Lean_Doc_Parser_listMarker___lam__0___closed__3, &l_Lean_Doc_Parser_listMarker___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_listMarker___lam__0___closed__3);
v___x_1429_ = ((lean_object*)(l_Lean_Doc_Parser_listMarker___lam__0___closed__1));
v___x_1430_ = ((lean_object*)(l_Lean_Doc_Parser_listMarker___lam__0___closed__0));
v___x_1431_ = l_Lean_Parser_nodeWithAntiquot(v___x_1430_, v___x_1429_, v___x_1428_, v___x_1427_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_listMarker___lam__0(lean_object* v_c_1432_, lean_object* v_s_1433_){
_start:
{
lean_object* v___x_1434_; lean_object* v_fn_1435_; lean_object* v___x_1436_; 
v___x_1434_ = lean_obj_once(&l_Lean_Doc_Parser_listMarker___lam__0___closed__4, &l_Lean_Doc_Parser_listMarker___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_listMarker___lam__0___closed__4);
v_fn_1435_ = lean_ctor_get(v___x_1434_, 1);
lean_inc_ref(v_fn_1435_);
v___x_1436_ = lean_apply_2(v_fn_1435_, v_c_1432_, v_s_1433_);
return v___x_1436_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0___closed__0(void){
_start:
{
uint8_t v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
v___x_1442_ = 0;
v___x_1443_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_bulletAtom));
v___x_1444_ = ((lean_object*)(l_Lean_Doc_Parser_listMarker___lam__0___closed__1));
v___x_1445_ = ((lean_object*)(l_Lean_Doc_Parser_listMarker___lam__0___closed__0));
v___x_1446_ = l_Lean_Parser_nodeWithAntiquot(v___x_1445_, v___x_1444_, v___x_1443_, v___x_1442_);
return v___x_1446_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0(lean_object* v_c_1447_, lean_object* v_s_1448_){
_start:
{
lean_object* v___x_1449_; lean_object* v_fn_1450_; lean_object* v___x_1451_; 
v___x_1449_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0___closed__0, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0___closed__0_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker___lam__0___closed__0);
v_fn_1450_ = lean_ctor_get(v___x_1449_, 1);
lean_inc_ref(v_fn_1450_);
v___x_1451_ = lean_apply_2(v_fn_1450_, v_c_1447_, v_s_1448_);
return v___x_1451_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0___closed__0(void){
_start:
{
uint8_t v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1457_ = 0;
v___x_1458_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_numberAtom));
v___x_1459_ = ((lean_object*)(l_Lean_Doc_Parser_listMarker___lam__0___closed__1));
v___x_1460_ = ((lean_object*)(l_Lean_Doc_Parser_listMarker___lam__0___closed__0));
v___x_1461_ = l_Lean_Parser_nodeWithAntiquot(v___x_1460_, v___x_1459_, v___x_1458_, v___x_1457_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0(lean_object* v_c_1462_, lean_object* v_s_1463_){
_start:
{
lean_object* v___x_1464_; lean_object* v_fn_1465_; lean_object* v___x_1466_; 
v___x_1464_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0___closed__0, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0___closed__0_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker___lam__0___closed__0);
v_fn_1465_ = lean_ctor_get(v___x_1464_, 1);
lean_inc_ref(v_fn_1465_);
v___x_1466_ = lean_apply_2(v_fn_1465_, v_c_1462_, v_s_1463_);
return v___x_1466_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__0(uint32_t v_x_1472_){
_start:
{
uint32_t v___x_1473_; uint8_t v___x_1474_; 
v___x_1473_ = 58;
v___x_1474_ = lean_uint32_dec_eq(v_x_1472_, v___x_1473_);
return v___x_1474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__0___boxed(lean_object* v_x_1475_){
_start:
{
uint32_t v_x_136__boxed_1476_; uint8_t v_res_1477_; lean_object* v_r_1478_; 
v_x_136__boxed_1476_ = lean_unbox_uint32(v_x_1475_);
lean_dec(v_x_1475_);
v_res_1477_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__0(v_x_136__boxed_1476_);
v_r_1478_ = lean_box(v_res_1477_);
return v_r_1478_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; 
v___x_1480_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__0));
v___x_1481_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_1480_);
return v___x_1481_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3(lean_object* v___f_1483_, lean_object* v___f_1484_, lean_object* v___f_1485_, lean_object* v_c_1486_, lean_object* v_s_1487_){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v_fn_1497_; lean_object* v___x_1498_; 
v___x_1488_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__1, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__1_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__1);
v___x_1489_ = lean_box(1);
v___x_1490_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1490_, 0, v___f_1483_);
lean_ctor_set(v___x_1490_, 1, v___f_1484_);
lean_ctor_set(v___x_1490_, 2, v___x_1489_);
v___x_1491_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker___lam__3___closed__2));
v___x_1492_ = lean_alloc_closure((void*)(l_Lean_Parser_satisfyFn___boxed), 4, 2);
lean_closure_set(v___x_1492_, 0, v___f_1485_);
lean_closure_set(v___x_1492_, 1, v___x_1491_);
v___x_1493_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1490_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = l_Lean_Parser_notFollowedBy(v___x_1493_, v___x_1491_);
v___x_1495_ = l_Lean_Parser_andthen(v___x_1488_, v___x_1494_);
v___x_1496_ = l_Lean_Parser_atomic(v___x_1495_);
v_fn_1497_ = lean_ctor_get(v___x_1496_, 1);
lean_inc_ref(v_fn_1497_);
lean_dec_ref(v___x_1496_);
v___x_1498_ = lean_apply_2(v_fn_1497_, v_c_1486_, v_s_1487_);
return v___x_1498_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__2(void){
_start:
{
uint32_t v___x_1514_; lean_object* v___x_1515_; 
v___x_1514_ = 95;
v___x_1515_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(v___x_1514_);
return v___x_1515_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__3(void){
_start:
{
uint8_t v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1516_ = 0;
v___x_1517_ = lean_obj_once(&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__2, &l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__2);
v___x_1518_ = ((lean_object*)(l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__1));
v___x_1519_ = ((lean_object*)(l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__0));
v___x_1520_ = l_Lean_Parser_nodeWithAntiquot(v___x_1519_, v___x_1518_, v___x_1517_, v___x_1516_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_emphDelimiter___lam__0(lean_object* v_c_1521_, lean_object* v_s_1522_){
_start:
{
lean_object* v___x_1523_; lean_object* v_fn_1524_; lean_object* v___x_1525_; 
v___x_1523_ = lean_obj_once(&l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__3, &l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_emphDelimiter___lam__0___closed__3);
v_fn_1524_ = lean_ctor_get(v___x_1523_, 1);
lean_inc_ref(v_fn_1524_);
v___x_1525_ = lean_apply_2(v_fn_1524_, v_c_1521_, v_s_1522_);
return v___x_1525_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__2(void){
_start:
{
uint32_t v___x_1537_; lean_object* v___x_1538_; 
v___x_1537_ = 42;
v___x_1538_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(v___x_1537_);
return v___x_1538_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__3(void){
_start:
{
uint8_t v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1539_ = 0;
v___x_1540_ = lean_obj_once(&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__2, &l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__2);
v___x_1541_ = ((lean_object*)(l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__1));
v___x_1542_ = ((lean_object*)(l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__0));
v___x_1543_ = l_Lean_Parser_nodeWithAntiquot(v___x_1542_, v___x_1541_, v___x_1540_, v___x_1539_);
return v___x_1543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_boldDelimiter___lam__0(lean_object* v_c_1544_, lean_object* v_s_1545_){
_start:
{
lean_object* v___x_1546_; lean_object* v_fn_1547_; lean_object* v___x_1548_; 
v___x_1546_ = lean_obj_once(&l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__3, &l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_boldDelimiter___lam__0___closed__3);
v_fn_1547_ = lean_ctor_get(v___x_1546_, 1);
lean_inc_ref(v_fn_1547_);
v___x_1548_ = lean_apply_2(v_fn_1547_, v_c_1544_, v_s_1545_);
return v___x_1548_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2(void){
_start:
{
uint32_t v___x_1560_; lean_object* v___x_1561_; 
v___x_1560_ = 96;
v___x_1561_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(v___x_1560_);
return v___x_1561_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__3(void){
_start:
{
uint8_t v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; 
v___x_1562_ = 0;
v___x_1563_ = lean_obj_once(&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2, &l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2);
v___x_1564_ = ((lean_object*)(l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__1));
v___x_1565_ = ((lean_object*)(l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__0));
v___x_1566_ = l_Lean_Parser_nodeWithAntiquot(v___x_1565_, v___x_1564_, v___x_1563_, v___x_1562_);
return v___x_1566_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_codeDelimiter___lam__0(lean_object* v_c_1567_, lean_object* v_s_1568_){
_start:
{
lean_object* v___x_1569_; lean_object* v_fn_1570_; lean_object* v___x_1571_; 
v___x_1569_ = lean_obj_once(&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__3, &l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__3);
v_fn_1570_ = lean_ctor_get(v___x_1569_, 1);
lean_inc_ref(v_fn_1570_);
v___x_1571_ = lean_apply_2(v_fn_1570_, v_c_1567_, v_s_1568_);
return v___x_1571_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__2(void){
_start:
{
uint8_t v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1583_ = 0;
v___x_1584_ = lean_obj_once(&l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2, &l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_codeDelimiter___lam__0___closed__2);
v___x_1585_ = ((lean_object*)(l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__1));
v___x_1586_ = ((lean_object*)(l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__0));
v___x_1587_ = l_Lean_Parser_nodeWithAntiquot(v___x_1586_, v___x_1585_, v___x_1584_, v___x_1583_);
return v___x_1587_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_codeBlockFence___lam__0(lean_object* v_c_1588_, lean_object* v_s_1589_){
_start:
{
lean_object* v___x_1590_; lean_object* v_fn_1591_; lean_object* v___x_1592_; 
v___x_1590_ = lean_obj_once(&l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__2, &l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_codeBlockFence___lam__0___closed__2);
v_fn_1591_ = lean_ctor_get(v___x_1590_, 1);
lean_inc_ref(v_fn_1591_);
v___x_1592_ = lean_apply_2(v_fn_1591_, v_c_1588_, v_s_1589_);
return v___x_1592_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1605_; lean_object* v___x_1606_; 
v___x_1605_ = ((lean_object*)(l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__2));
v___x_1606_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_1605_);
return v___x_1606_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__4(void){
_start:
{
uint8_t v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1607_ = 0;
v___x_1608_ = lean_obj_once(&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__3, &l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__3);
v___x_1609_ = ((lean_object*)(l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__1));
v___x_1610_ = ((lean_object*)(l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__0));
v___x_1611_ = l_Lean_Parser_nodeWithAntiquot(v___x_1610_, v___x_1609_, v___x_1608_, v___x_1607_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_inlineMathMarker___lam__0(lean_object* v_c_1612_, lean_object* v_s_1613_){
_start:
{
lean_object* v___x_1614_; lean_object* v_fn_1615_; lean_object* v___x_1616_; 
v___x_1614_ = lean_obj_once(&l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__4, &l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_inlineMathMarker___lam__0___closed__4);
v_fn_1615_ = lean_ctor_get(v___x_1614_, 1);
lean_inc_ref(v_fn_1615_);
v___x_1616_ = lean_apply_2(v_fn_1615_, v_c_1612_, v_s_1613_);
return v___x_1616_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1629_; lean_object* v___x_1630_; 
v___x_1629_ = ((lean_object*)(l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__2));
v___x_1630_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_1629_);
return v___x_1630_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__4(void){
_start:
{
uint8_t v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1631_ = 0;
v___x_1632_ = lean_obj_once(&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__3, &l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__3);
v___x_1633_ = ((lean_object*)(l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__1));
v___x_1634_ = ((lean_object*)(l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__0));
v___x_1635_ = l_Lean_Parser_nodeWithAntiquot(v___x_1634_, v___x_1633_, v___x_1632_, v___x_1631_);
return v___x_1635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_displayMathMarker___lam__0(lean_object* v_c_1636_, lean_object* v_s_1637_){
_start:
{
lean_object* v___x_1638_; lean_object* v_fn_1639_; lean_object* v___x_1640_; 
v___x_1638_ = lean_obj_once(&l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__4, &l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_displayMathMarker___lam__0___closed__4);
v_fn_1639_ = lean_ctor_get(v___x_1638_, 1);
lean_inc_ref(v_fn_1639_);
v___x_1640_ = lean_apply_2(v_fn_1639_, v_c_1636_, v_s_1637_);
return v___x_1640_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__2(void){
_start:
{
uint32_t v___x_1652_; lean_object* v___x_1653_; 
v___x_1652_ = 58;
v___x_1653_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(v___x_1652_);
return v___x_1653_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__3(void){
_start:
{
uint8_t v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v___x_1654_ = 0;
v___x_1655_ = lean_obj_once(&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__2, &l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__2);
v___x_1656_ = ((lean_object*)(l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__1));
v___x_1657_ = ((lean_object*)(l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__0));
v___x_1658_ = l_Lean_Parser_nodeWithAntiquot(v___x_1657_, v___x_1656_, v___x_1655_, v___x_1654_);
return v___x_1658_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_directiveDelimiter___lam__0(lean_object* v_c_1659_, lean_object* v_s_1660_){
_start:
{
lean_object* v___x_1661_; lean_object* v_fn_1662_; lean_object* v___x_1663_; 
v___x_1661_ = lean_obj_once(&l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__3, &l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_directiveDelimiter___lam__0___closed__3);
v_fn_1662_ = lean_ctor_get(v___x_1661_, 1);
lean_inc_ref(v_fn_1662_);
v___x_1663_ = lean_apply_2(v_fn_1662_, v_c_1659_, v_s_1660_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_runLength(lean_object* v_x_1669_){
_start:
{
if (lean_obj_tag(v_x_1669_) == 1)
{
lean_object* v_args_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; uint8_t v___x_1673_; 
v_args_1670_ = lean_ctor_get(v_x_1669_, 2);
v___x_1671_ = lean_array_get_size(v_args_1670_);
v___x_1672_ = lean_unsigned_to_nat(1u);
v___x_1673_ = lean_nat_dec_eq(v___x_1671_, v___x_1672_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
v___x_1674_ = lean_box(0);
return v___x_1674_;
}
else
{
lean_object* v___x_1675_; lean_object* v___x_1676_; 
v___x_1675_ = lean_unsigned_to_nat(0u);
v___x_1676_ = lean_array_fget_borrowed(v_args_1670_, v___x_1675_);
if (lean_obj_tag(v___x_1676_) == 2)
{
lean_object* v_val_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v_val_1677_ = lean_ctor_get(v___x_1676_, 1);
v___x_1678_ = lean_string_length(v_val_1677_);
v___x_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
return v___x_1679_;
}
else
{
lean_object* v___x_1680_; 
v___x_1680_ = lean_box(0);
return v___x_1680_;
}
}
}
else
{
lean_object* v___x_1681_; 
v___x_1681_ = lean_box(0);
return v___x_1681_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_runLength___boxed(lean_object* v_x_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_runLength(v_x_1682_);
lean_dec(v_x_1682_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths_spec__0(uint32_t v_ch_1684_, lean_object* v_x_1685_, lean_object* v_x_1686_){
_start:
{
lean_object* v_zero_1687_; uint8_t v_isZero_1688_; 
v_zero_1687_ = lean_unsigned_to_nat(0u);
v_isZero_1688_ = lean_nat_dec_eq(v_x_1685_, v_zero_1687_);
if (v_isZero_1688_ == 1)
{
lean_dec(v_x_1685_);
return v_x_1686_;
}
else
{
lean_object* v_one_1689_; lean_object* v_n_1690_; lean_object* v___x_1691_; 
v_one_1689_ = lean_unsigned_to_nat(1u);
v_n_1690_ = lean_nat_sub(v_x_1685_, v_one_1689_);
lean_dec(v_x_1685_);
v___x_1691_ = lean_string_push(v_x_1686_, v_ch_1684_);
v_x_1685_ = v_n_1690_;
v_x_1686_ = v___x_1691_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths_spec__0___boxed(lean_object* v_ch_1693_, lean_object* v_x_1694_, lean_object* v_x_1695_){
_start:
{
uint32_t v_ch_boxed_1696_; lean_object* v_res_1697_; 
v_ch_boxed_1696_ = lean_unbox_uint32(v_ch_1693_);
lean_dec(v_ch_1693_);
v_res_1697_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths_spec__0(v_ch_boxed_1696_, v_x_1694_, v_x_1695_);
return v_res_1697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths(lean_object* v_delim_1700_, uint32_t v_ch_1701_, lean_object* v_contents_1702_, lean_object* v_c_1703_, lean_object* v_s_1704_){
_start:
{
lean_object* v_fn_1705_; lean_object* v_s_1706_; lean_object* v_stxStack_1707_; lean_object* v_errorMsg_1708_; lean_object* v___x_1709_; uint8_t v___x_1710_; 
v_fn_1705_ = lean_ctor_get(v_delim_1700_, 1);
lean_inc_ref_n(v_fn_1705_, 2);
lean_dec_ref(v_delim_1700_);
lean_inc_ref(v_c_1703_);
v_s_1706_ = lean_apply_2(v_fn_1705_, v_c_1703_, v_s_1704_);
v_stxStack_1707_ = lean_ctor_get(v_s_1706_, 0);
lean_inc_ref(v_stxStack_1707_);
v_errorMsg_1708_ = lean_ctor_get(v_s_1706_, 4);
lean_inc(v_errorMsg_1708_);
v___x_1709_ = lean_box(0);
v___x_1710_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(v_errorMsg_1708_, v___x_1709_);
lean_dec(v_errorMsg_1708_);
if (v___x_1710_ == 0)
{
lean_dec_ref(v_stxStack_1707_);
lean_dec_ref(v_fn_1705_);
lean_dec_ref(v_c_1703_);
lean_dec_ref(v_contents_1702_);
return v_s_1706_;
}
else
{
lean_object* v_fn_1711_; lean_object* v_s_1712_; lean_object* v_pos_1713_; lean_object* v_errorMsg_1714_; uint8_t v___x_1715_; 
v_fn_1711_ = lean_ctor_get(v_contents_1702_, 1);
lean_inc_ref(v_fn_1711_);
lean_dec_ref(v_contents_1702_);
lean_inc_ref(v_c_1703_);
v_s_1712_ = lean_apply_2(v_fn_1711_, v_c_1703_, v_s_1706_);
v_pos_1713_ = lean_ctor_get(v_s_1712_, 2);
lean_inc(v_pos_1713_);
v_errorMsg_1714_ = lean_ctor_get(v_s_1712_, 4);
lean_inc(v_errorMsg_1714_);
v___x_1715_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(v_errorMsg_1714_, v___x_1709_);
lean_dec(v_errorMsg_1714_);
if (v___x_1715_ == 0)
{
lean_dec(v_pos_1713_);
lean_dec_ref(v_stxStack_1707_);
lean_dec_ref(v_fn_1705_);
lean_dec_ref(v_c_1703_);
return v_s_1712_;
}
else
{
lean_object* v_s_1716_; lean_object* v_stxStack_1717_; lean_object* v_errorMsg_1718_; uint8_t v___x_1719_; 
v_s_1716_ = lean_apply_2(v_fn_1705_, v_c_1703_, v_s_1712_);
v_stxStack_1717_ = lean_ctor_get(v_s_1716_, 0);
lean_inc_ref(v_stxStack_1717_);
v_errorMsg_1718_ = lean_ctor_get(v_s_1716_, 4);
lean_inc(v_errorMsg_1718_);
v___x_1719_ = l_instBEqOption_beq___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf_spec__1(v_errorMsg_1718_, v___x_1709_);
lean_dec(v_errorMsg_1718_);
if (v___x_1719_ == 0)
{
lean_dec_ref(v_stxStack_1717_);
lean_dec(v_pos_1713_);
lean_dec_ref(v_stxStack_1707_);
return v_s_1716_;
}
else
{
lean_object* v_opener_1720_; lean_object* v___x_1721_; 
v_opener_1720_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1707_);
lean_dec_ref(v_stxStack_1707_);
v___x_1721_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_runLength(v_opener_1720_);
lean_dec(v_opener_1720_);
if (lean_obj_tag(v___x_1721_) == 1)
{
lean_object* v_val_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; 
v_val_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc(v_val_1722_);
lean_dec_ref_known(v___x_1721_, 1);
v___x_1723_ = l_Lean_Parser_SyntaxStack_back(v_stxStack_1717_);
lean_dec_ref(v_stxStack_1717_);
v___x_1724_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_runLength(v___x_1723_);
lean_dec(v___x_1723_);
if (lean_obj_tag(v___x_1724_) == 1)
{
lean_object* v_val_1725_; uint8_t v___x_1726_; 
v_val_1725_ = lean_ctor_get(v___x_1724_, 0);
lean_inc(v_val_1725_);
lean_dec_ref_known(v___x_1724_, 1);
v___x_1726_ = lean_nat_dec_eq(v_val_1722_, v_val_1725_);
lean_dec(v_val_1725_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1727_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf___lam__1___closed__0));
v___x_1728_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_unescapeVerso___closed__0));
v___x_1729_ = l___private_Init_Data_Nat_Basic_0__Nat_repeatTR_loop___at___00__private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths_spec__0(v_ch_1701_, v_val_1722_, v___x_1728_);
v___x_1730_ = lean_string_append(v___x_1727_, v___x_1729_);
v___x_1731_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__0));
v___x_1732_ = lean_string_append(v___x_1730_, v___x_1731_);
v___x_1733_ = lean_string_append(v___x_1732_, v___x_1729_);
lean_dec_ref(v___x_1729_);
v___x_1734_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___closed__1));
v___x_1735_ = lean_string_append(v___x_1733_, v___x_1734_);
v___x_1736_ = l_Lean_Parser_ParserState_mkErrorAt(v_s_1716_, v___x_1735_, v_pos_1713_, v___x_1709_);
return v___x_1736_;
}
else
{
lean_dec(v_val_1722_);
lean_dec(v_pos_1713_);
return v_s_1716_;
}
}
else
{
lean_dec(v___x_1724_);
lean_dec(v_val_1722_);
lean_dec(v_pos_1713_);
return v_s_1716_;
}
}
else
{
lean_dec(v___x_1721_);
lean_dec_ref(v_stxStack_1717_);
lean_dec(v_pos_1713_);
return v_s_1716_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___boxed(lean_object* v_delim_1737_, lean_object* v_ch_1738_, lean_object* v_contents_1739_, lean_object* v_c_1740_, lean_object* v_s_1741_){
_start:
{
uint32_t v_ch_boxed_1742_; lean_object* v_res_1743_; 
v_ch_boxed_1742_ = lean_unbox_uint32(v_ch_1738_);
lean_dec(v_ch_1738_);
v_res_1743_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths(v_delim_1737_, v_ch_boxed_1742_, v_contents_1739_, v_c_1740_, v_s_1741_);
return v_res_1743_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3___boxed__const__1(void){
_start:
{
uint32_t v___x_1752_; lean_object* v___x_1753_; 
v___x_1752_ = 96;
v___x_1753_ = lean_box_uint32(v___x_1752_);
return v___x_1753_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3(void){
_start:
{
lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; 
v___x_1754_ = ((lean_object*)(l_Lean_Doc_Parser_versoCode));
v___x_1755_ = ((lean_object*)(l_Lean_Doc_Parser_codeDelimiter));
v___x_1756_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3___boxed__const__1;
v___x_1757_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___boxed), 5, 3);
lean_closure_set(v___x_1757_, 0, v___x_1755_);
lean_closure_set(v___x_1757_, 1, v___x_1756_);
lean_closure_set(v___x_1757_, 2, v___x_1754_);
return v___x_1757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2(lean_object* v___f_1758_, lean_object* v___f_1759_, lean_object* v_c_1760_, lean_object* v_s_1761_){
_start:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v___x_1767_; uint8_t v___x_1768_; lean_object* v___x_1769_; lean_object* v_fn_1770_; lean_object* v___x_1771_; 
v___x_1762_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__0));
v___x_1763_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2));
v___x_1764_ = lean_box(1);
v___x_1765_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1765_, 0, v___f_1758_);
lean_ctor_set(v___x_1765_, 1, v___f_1759_);
lean_ctor_set(v___x_1765_, 2, v___x_1764_);
v___x_1766_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3);
v___x_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1767_, 0, v___x_1765_);
lean_ctor_set(v___x_1767_, 1, v___x_1766_);
v___x_1768_ = 0;
v___x_1769_ = l_Lean_Parser_nodeWithAntiquot(v___x_1762_, v___x_1763_, v___x_1767_, v___x_1768_);
v_fn_1770_ = lean_ctor_get(v___x_1769_, 1);
lean_inc_ref(v_fn_1770_);
lean_dec_ref(v___x_1769_);
v___x_1771_ = lean_apply_2(v_fn_1770_, v_c_1760_, v_s_1761_);
return v___x_1771_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__2(void){
_start:
{
uint32_t v___x_1786_; lean_object* v___x_1787_; 
v___x_1786_ = 10;
v___x_1787_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_charRun(v___x_1786_);
return v___x_1787_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__3(void){
_start:
{
uint8_t v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; 
v___x_1788_ = 0;
v___x_1789_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__2);
v___x_1790_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__1));
v___x_1791_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__0));
v___x_1792_ = l_Lean_Parser_nodeWithAntiquot(v___x_1791_, v___x_1790_, v___x_1789_, v___x_1788_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot(lean_object* v_a_1793_, lean_object* v_a_1794_){
_start:
{
lean_object* v___x_1795_; lean_object* v_fn_1796_; lean_object* v___x_1797_; 
v___x_1795_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot___closed__3);
v_fn_1796_ = lean_ctor_get(v___x_1795_, 1);
lean_inc_ref(v_fn_1796_);
v___x_1797_ = lean_apply_2(v_fn_1796_, v_a_1793_, v_a_1794_);
return v___x_1797_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__3(void){
_start:
{
lean_object* v___x_1806_; lean_object* v___x_1807_; 
v___x_1806_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__2));
v___x_1807_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_1806_);
return v___x_1807_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4(void){
_start:
{
lean_object* v___x_1808_; lean_object* v___x_1809_; 
v___x_1808_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__4));
v___x_1809_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_1808_);
return v___x_1809_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1810_ = ((lean_object*)(l_Lean_Doc_Parser_linkTarget));
v___x_1811_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4);
v___x_1812_ = l_Lean_Parser_andthen(v___x_1811_, v___x_1810_);
return v___x_1812_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__6(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5);
v___x_1814_ = ((lean_object*)(l_Lean_Doc_Parser_versoImageAlt));
v___x_1815_ = l_Lean_Parser_andthen(v___x_1814_, v___x_1813_);
return v___x_1815_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__7(void){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1816_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__6);
v___x_1817_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__3);
v___x_1818_ = l_Lean_Parser_andthen(v___x_1817_, v___x_1816_);
return v___x_1818_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__8(void){
_start:
{
uint8_t v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; 
v___x_1819_ = 0;
v___x_1820_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__7, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__7_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__7);
v___x_1821_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1));
v___x_1822_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__0));
v___x_1823_ = l_Lean_Parser_nodeWithAntiquot(v___x_1822_, v___x_1821_, v___x_1820_, v___x_1819_);
return v___x_1823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot(lean_object* v_a_1824_, lean_object* v_a_1825_){
_start:
{
lean_object* v___x_1826_; lean_object* v_fn_1827_; lean_object* v___x_1828_; 
v___x_1826_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__8, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__8_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__8);
v_fn_1827_ = lean_ctor_get(v___x_1826_, 1);
lean_inc_ref(v_fn_1827_);
v___x_1828_ = lean_apply_2(v_fn_1827_, v_a_1824_, v_a_1825_);
return v___x_1828_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3(void){
_start:
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__2));
v___x_1838_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_1837_);
return v___x_1838_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__4(void){
_start:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1839_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4);
v___x_1840_ = ((lean_object*)(l_Lean_Doc_Parser_versoRef));
v___x_1841_ = l_Lean_Parser_andthen(v___x_1840_, v___x_1839_);
return v___x_1841_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__5(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__4);
v___x_1843_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3);
v___x_1844_ = l_Lean_Parser_andthen(v___x_1843_, v___x_1842_);
return v___x_1844_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__6(void){
_start:
{
uint8_t v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; 
v___x_1845_ = 0;
v___x_1846_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__5);
v___x_1847_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1));
v___x_1848_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__0));
v___x_1849_ = l_Lean_Parser_nodeWithAntiquot(v___x_1848_, v___x_1847_, v___x_1846_, v___x_1845_);
return v___x_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot(lean_object* v_a_1850_, lean_object* v_a_1851_){
_start:
{
lean_object* v___x_1852_; lean_object* v_fn_1853_; lean_object* v___x_1854_; 
v___x_1852_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__6);
v_fn_1853_ = lean_ctor_get(v___x_1852_, 1);
lean_inc_ref(v_fn_1853_);
v___x_1854_ = lean_apply_2(v_fn_1853_, v_a_1850_, v_a_1851_);
return v___x_1854_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__2(void){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
v___x_1862_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode));
v___x_1863_ = ((lean_object*)(l_Lean_Doc_Parser_inlineMathMarker));
v___x_1864_ = l_Lean_Parser_andthen(v___x_1863_, v___x_1862_);
return v___x_1864_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__3(void){
_start:
{
uint8_t v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1867_; lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1865_ = 0;
v___x_1866_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__2);
v___x_1867_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1));
v___x_1868_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__0));
v___x_1869_ = l_Lean_Parser_nodeWithAntiquot(v___x_1868_, v___x_1867_, v___x_1866_, v___x_1865_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot(lean_object* v_a_1870_, lean_object* v_a_1871_){
_start:
{
lean_object* v___x_1872_; lean_object* v_fn_1873_; lean_object* v___x_1874_; 
v___x_1872_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__3);
v_fn_1873_ = lean_ctor_get(v___x_1872_, 1);
lean_inc_ref(v_fn_1873_);
v___x_1874_ = lean_apply_2(v_fn_1873_, v_a_1870_, v_a_1871_);
return v___x_1874_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__2(void){
_start:
{
lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; 
v___x_1882_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode));
v___x_1883_ = ((lean_object*)(l_Lean_Doc_Parser_displayMathMarker));
v___x_1884_ = l_Lean_Parser_andthen(v___x_1883_, v___x_1882_);
return v___x_1884_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__3(void){
_start:
{
uint8_t v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; 
v___x_1885_ = 0;
v___x_1886_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__2);
v___x_1887_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1));
v___x_1888_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__0));
v___x_1889_ = l_Lean_Parser_nodeWithAntiquot(v___x_1888_, v___x_1887_, v___x_1886_, v___x_1885_);
return v___x_1889_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot(lean_object* v_a_1890_, lean_object* v_a_1891_){
_start:
{
lean_object* v___x_1892_; lean_object* v_fn_1893_; lean_object* v___x_1894_; 
v___x_1892_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__3);
v_fn_1893_ = lean_ctor_get(v___x_1892_, 1);
lean_inc_ref(v_fn_1893_);
v___x_1894_ = lean_apply_2(v_fn_1893_, v_a_1890_, v_a_1891_);
return v___x_1894_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0(void){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1895_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot), 2, 0);
v___x_1896_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_1897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1897_, 0, v___x_1896_);
lean_ctor_set(v___x_1897_, 1, v___x_1895_);
return v___x_1897_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__1(void){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0);
v___x_1899_ = l_Lean_Parser_atomic(v___x_1898_);
return v___x_1899_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2(void){
_start:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; 
v___x_1900_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot), 2, 0);
v___x_1901_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_1902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1902_, 0, v___x_1901_);
lean_ctor_set(v___x_1902_, 1, v___x_1900_);
return v___x_1902_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__3(void){
_start:
{
lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1903_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2);
v___x_1904_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__1, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__1_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__1);
v___x_1905_ = l_Lean_Parser_orelse(v___x_1904_, v___x_1903_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot(lean_object* v_a_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v___x_1908_; lean_object* v_fn_1909_; lean_object* v___x_1910_; 
v___x_1908_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__3);
v_fn_1909_ = lean_ctor_get(v___x_1908_, 1);
lean_inc_ref(v_fn_1909_);
v___x_1910_ = lean_apply_2(v_fn_1909_, v_a_1906_, v_a_1907_);
return v___x_1910_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__2(void){
_start:
{
uint8_t v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1918_ = 0;
v___x_1919_ = ((lean_object*)(l_Lean_Doc_Parser_versoText));
v___x_1920_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__1));
v___x_1921_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__0));
v___x_1922_ = l_Lean_Parser_nodeWithAntiquot(v___x_1921_, v___x_1920_, v___x_1919_, v___x_1918_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot(lean_object* v_a_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v___x_1925_; lean_object* v_fn_1926_; lean_object* v___x_1927_; 
v___x_1925_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot___closed__2);
v_fn_1926_ = lean_ctor_get(v___x_1925_, 1);
lean_inc_ref(v_fn_1926_);
v___x_1927_ = lean_apply_2(v_fn_1926_, v_a_1923_, v_a_1924_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__0(lean_object* v___y_1928_){
_start:
{
lean_inc(v___y_1928_);
return v___y_1928_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__0___boxed(lean_object* v___y_1929_){
_start:
{
lean_object* v_res_1930_; 
v_res_1930_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__0(v___y_1929_);
lean_dec(v___y_1929_);
return v_res_1930_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__1(lean_object* v___y_1931_){
_start:
{
lean_inc_ref(v___y_1931_);
return v___y_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__1___boxed(lean_object* v___y_1932_){
_start:
{
lean_object* v_res_1933_; 
v_res_1933_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___lam__1(v___y_1932_);
lean_dec_ref(v___y_1932_);
return v_res_1933_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___boxed__const__1(void){
_start:
{
uint32_t v___x_1947_; lean_object* v___x_1948_; 
v___x_1947_ = 42;
v___x_1948_ = lean_box_uint32(v___x_1947_);
return v___x_1948_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__0(void){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1949_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot), 2, 0);
v___x_1950_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_1951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1950_);
lean_ctor_set(v___x_1951_, 1, v___x_1949_);
return v___x_1951_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___boxed__const__1(void){
_start:
{
uint32_t v___x_1959_; lean_object* v___x_1960_; 
v___x_1959_ = 95;
v___x_1960_ = lean_box_uint32(v___x_1959_);
return v___x_1960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot(lean_object* v_a_1961_, lean_object* v_a_1962_){
_start:
{
lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; uint8_t v___x_1974_; lean_object* v___x_1975_; lean_object* v_fn_1976_; lean_object* v___x_1977_; 
v___x_1963_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__0));
v___x_1964_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1));
v___x_1965_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_1966_ = ((lean_object*)(l_Lean_Doc_Parser_emphDelimiter));
v___x_1967_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot), 2, 0);
v___x_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1965_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = l_Lean_Parser_atomic(v___x_1968_);
v___x_1970_ = l_Lean_Parser_many(v___x_1969_);
v___x_1971_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___boxed__const__1;
v___x_1972_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___boxed), 5, 3);
lean_closure_set(v___x_1972_, 0, v___x_1966_);
lean_closure_set(v___x_1972_, 1, v___x_1971_);
lean_closure_set(v___x_1972_, 2, v___x_1970_);
v___x_1973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1973_, 0, v___x_1965_);
lean_ctor_set(v___x_1973_, 1, v___x_1972_);
v___x_1974_ = 0;
v___x_1975_ = l_Lean_Parser_nodeWithAntiquot(v___x_1963_, v___x_1964_, v___x_1973_, v___x_1974_);
v_fn_1976_ = lean_ctor_get(v___x_1975_, 1);
lean_inc_ref(v_fn_1976_);
lean_dec_ref(v___x_1975_);
v___x_1977_ = lean_apply_2(v_fn_1976_, v_a_1961_, v_a_1962_);
return v___x_1977_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__1(void){
_start:
{
lean_object* v___x_1978_; lean_object* v___x_1979_; lean_object* v___x_1980_; 
v___x_1978_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot), 2, 0);
v___x_1979_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_1980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1980_, 0, v___x_1979_);
lean_ctor_set(v___x_1980_, 1, v___x_1978_);
return v___x_1980_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__2(void){
_start:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1983_; 
v___x_1981_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot), 2, 0);
v___x_1982_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_1983_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1983_, 0, v___x_1982_);
lean_ctor_set(v___x_1983_, 1, v___x_1981_);
return v___x_1983_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = ((lean_object*)(l_Lean_Doc_Parser_LinkTarget_ref___lam__0___closed__2));
v___x_1992_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot(lean_object* v_a_1993_, lean_object* v_a_1994_){
_start:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; uint8_t v___x_2006_; lean_object* v___x_2007_; lean_object* v_fn_2008_; lean_object* v___x_2009_; 
v___x_1995_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__0));
v___x_1996_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1));
v___x_1997_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2);
v___x_1998_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_1999_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot), 2, 0);
v___x_2000_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2000_, 0, v___x_1998_);
lean_ctor_set(v___x_2000_, 1, v___x_1999_);
v___x_2001_ = l_Lean_Parser_atomic(v___x_2000_);
v___x_2002_ = l_Lean_Parser_many(v___x_2001_);
v___x_2003_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__5);
v___x_2004_ = l_Lean_Parser_andthen(v___x_2002_, v___x_2003_);
v___x_2005_ = l_Lean_Parser_andthen(v___x_1997_, v___x_2004_);
v___x_2006_ = 0;
v___x_2007_ = l_Lean_Parser_nodeWithAntiquot(v___x_1995_, v___x_1996_, v___x_2005_, v___x_2006_);
v_fn_2008_ = lean_ctor_get(v___x_2007_, 1);
lean_inc_ref(v_fn_2008_);
lean_dec_ref(v___x_2007_);
v___x_2009_ = lean_apply_2(v_fn_2008_, v_a_1993_, v_a_1994_);
return v___x_2009_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__3(void){
_start:
{
lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; 
v___x_2010_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot), 2, 0);
v___x_2011_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2011_);
lean_ctor_set(v___x_2012_, 1, v___x_2010_);
return v___x_2012_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__6(void){
_start:
{
uint8_t v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2019_ = 1;
v___x_2020_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__5));
v___x_2021_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__4));
v___x_2022_ = l_Lean_Parser_mkAntiquot(v___x_2021_, v___x_2020_, v___x_2019_, v___x_2019_);
return v___x_2022_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__7(void){
_start:
{
lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2023_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot), 2, 0);
v___x_2024_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
lean_ctor_set(v___x_2025_, 1, v___x_2023_);
return v___x_2025_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3(void){
_start:
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
v___x_2034_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__2));
v___x_2035_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_2034_);
return v___x_2035_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4(void){
_start:
{
lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2036_ = ((lean_object*)(l_Lean_Doc_Parser_arg));
v___x_2037_ = l_Lean_Parser_many(v___x_2036_);
return v___x_2037_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6(void){
_start:
{
lean_object* v___x_2039_; lean_object* v___x_2040_; 
v___x_2039_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__5));
v___x_2040_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_2039_);
return v___x_2040_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__9(void){
_start:
{
lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v___x_2044_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2);
v___x_2045_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__8));
v___x_2046_ = l_Lean_Parser_node(v___x_2045_, v___x_2044_);
return v___x_2046_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__10(void){
_start:
{
lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2047_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__4);
v___x_2048_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__8));
v___x_2049_ = l_Lean_Parser_node(v___x_2048_, v___x_2047_);
return v___x_2049_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__11(void){
_start:
{
lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; 
v___x_2050_ = l_Lean_Parser_skip;
v___x_2051_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__8));
v___x_2052_ = l_Lean_Parser_node(v___x_2051_, v___x_2050_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot(lean_object* v_a_2053_, lean_object* v_a_2054_){
_start:
{
lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; uint8_t v___x_2079_; lean_object* v___x_2080_; lean_object* v_fn_2081_; lean_object* v___x_2082_; 
v___x_2055_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__0));
v___x_2056_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1));
v___x_2057_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3);
v___x_2058_ = l_Lean_Parser_ident;
v___x_2059_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4);
v___x_2060_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6);
v___x_2061_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__9, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__9_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__9);
v___x_2062_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2063_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot), 2, 0);
v___x_2064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2064_, 0, v___x_2062_);
lean_ctor_set(v___x_2064_, 1, v___x_2063_);
v___x_2065_ = l_Lean_Parser_atomic(v___x_2064_);
lean_inc_ref(v___x_2065_);
v___x_2066_ = l_Lean_Parser_many(v___x_2065_);
v___x_2067_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__10, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__10_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__10);
v___x_2068_ = l_Lean_Parser_andthen(v___x_2066_, v___x_2067_);
v___x_2069_ = l_Lean_Parser_andthen(v___x_2061_, v___x_2068_);
v___x_2070_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__11, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__11_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__11);
v___x_2071_ = l_Lean_Parser_many1(v___x_2065_);
v___x_2072_ = l_Lean_Parser_andthen(v___x_2071_, v___x_2070_);
v___x_2073_ = l_Lean_Parser_andthen(v___x_2070_, v___x_2072_);
v___x_2074_ = l_Lean_Parser_orelse(v___x_2069_, v___x_2073_);
v___x_2075_ = l_Lean_Parser_andthen(v___x_2060_, v___x_2074_);
v___x_2076_ = l_Lean_Parser_andthen(v___x_2059_, v___x_2075_);
v___x_2077_ = l_Lean_Parser_andthen(v___x_2058_, v___x_2076_);
v___x_2078_ = l_Lean_Parser_andthen(v___x_2057_, v___x_2077_);
v___x_2079_ = 0;
v___x_2080_ = l_Lean_Parser_nodeWithAntiquot(v___x_2055_, v___x_2056_, v___x_2078_, v___x_2079_);
v_fn_2081_ = lean_ctor_get(v___x_2080_, 1);
lean_inc_ref(v_fn_2081_);
lean_dec_ref(v___x_2080_);
v___x_2082_ = lean_apply_2(v_fn_2081_, v_a_2053_, v_a_2054_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot(lean_object* v_c_2083_, lean_object* v_s_2084_){
_start:
{
lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v_fn_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; lean_object* v_alts_2110_; lean_object* v_fn_2111_; uint8_t v___x_2112_; lean_object* v___x_2113_; 
v___x_2085_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2086_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__0, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__0_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__0);
v___x_2087_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot), 2, 0);
v___x_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2085_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot), 2, 0);
v___x_2090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2090_, 0, v___x_2085_);
lean_ctor_set(v___x_2090_, 1, v___x_2089_);
v___x_2091_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__1, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__1_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__1);
v___x_2092_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__2);
v___x_2093_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot), 2, 0);
v___x_2094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2094_, 0, v___x_2085_);
lean_ctor_set(v___x_2094_, 1, v___x_2093_);
v___x_2095_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__3);
v___x_2096_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__6);
v_fn_2097_ = lean_ctor_get(v___x_2096_, 1);
v___x_2098_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__7, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__7_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot___closed__7);
v___x_2099_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode));
v___x_2100_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot), 2, 0);
v___x_2101_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2101_, 0, v___x_2085_);
lean_ctor_set(v___x_2101_, 1, v___x_2100_);
v___x_2102_ = l_Lean_Parser_orelse(v___x_2098_, v___x_2101_);
v___x_2103_ = l_Lean_Parser_orelse(v___x_2095_, v___x_2102_);
v___x_2104_ = l_Lean_Parser_orelse(v___x_2094_, v___x_2103_);
v___x_2105_ = l_Lean_Parser_orelse(v___x_2092_, v___x_2104_);
v___x_2106_ = l_Lean_Parser_orelse(v___x_2091_, v___x_2105_);
v___x_2107_ = l_Lean_Parser_orelse(v___x_2099_, v___x_2106_);
v___x_2108_ = l_Lean_Parser_orelse(v___x_2090_, v___x_2107_);
v___x_2109_ = l_Lean_Parser_orelse(v___x_2088_, v___x_2108_);
v_alts_2110_ = l_Lean_Parser_orelse(v___x_2086_, v___x_2109_);
v_fn_2111_ = lean_ctor_get(v_alts_2110_, 1);
lean_inc_ref(v_fn_2111_);
lean_dec_ref(v_alts_2110_);
v___x_2112_ = 0;
lean_inc_ref(v_fn_2097_);
v___x_2113_ = l_Lean_Parser_withAntiquotFn(v_fn_2097_, v_fn_2111_, v___x_2112_, v_c_2083_, v_s_2084_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot(lean_object* v_a_2114_, lean_object* v_a_2115_){
_start:
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; uint8_t v___x_2127_; lean_object* v___x_2128_; lean_object* v_fn_2129_; lean_object* v___x_2130_; 
v___x_2116_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__2));
v___x_2117_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3));
v___x_2118_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2119_ = ((lean_object*)(l_Lean_Doc_Parser_boldDelimiter));
v___x_2120_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineQuot), 2, 0);
v___x_2121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2118_);
lean_ctor_set(v___x_2121_, 1, v___x_2120_);
v___x_2122_ = l_Lean_Parser_atomic(v___x_2121_);
v___x_2123_ = l_Lean_Parser_many(v___x_2122_);
v___x_2124_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___boxed__const__1;
v___x_2125_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_matchingDelimiterLengths___boxed), 5, 3);
lean_closure_set(v___x_2125_, 0, v___x_2119_);
lean_closure_set(v___x_2125_, 1, v___x_2124_);
lean_closure_set(v___x_2125_, 2, v___x_2123_);
v___x_2126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2118_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
v___x_2127_ = 0;
v___x_2128_ = l_Lean_Parser_nodeWithAntiquot(v___x_2116_, v___x_2117_, v___x_2126_, v___x_2127_);
v_fn_2129_ = lean_ctor_get(v___x_2128_, 1);
lean_inc_ref(v_fn_2129_);
lean_dec_ref(v___x_2128_);
v___x_2130_ = lean_apply_2(v_fn_2129_, v_a_2114_, v_a_2115_);
return v___x_2130_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_text___closed__0(void){
_start:
{
lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; 
v___x_2131_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_textQuot), 2, 0);
v___x_2132_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2132_);
lean_ctor_set(v___x_2133_, 1, v___x_2131_);
return v___x_2133_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_text(void){
_start:
{
lean_object* v___x_2134_; 
v___x_2134_ = lean_obj_once(&l_Lean_Doc_Parser_Inline_text___closed__0, &l_Lean_Doc_Parser_Inline_text___closed__0_once, _init_l_Lean_Doc_Parser_Inline_text___closed__0);
return v___x_2134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1(){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2142_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___closed__1));
v___x_2143_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1___closed__0));
v___x_2144_ = l_Lean_addBuiltinDocString(v___x_2142_, v___x_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1___boxed(lean_object* v_a_2145_){
_start:
{
lean_object* v_res_2146_; 
v_res_2146_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1();
return v_res_2146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1(){
_start:
{
lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; 
v___x_2154_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__3));
v___x_2155_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1___closed__0));
v___x_2156_ = l_Lean_addBuiltinDocString(v___x_2154_, v___x_2155_);
return v___x_2156_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1___boxed(lean_object* v_a_2157_){
_start:
{
lean_object* v_res_2158_; 
v_res_2158_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1();
return v_res_2158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1(){
_start:
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; 
v___x_2162_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__2));
v___x_2163_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1___closed__0));
v___x_2164_ = l_Lean_addBuiltinDocString(v___x_2162_, v___x_2163_);
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1___boxed(lean_object* v_a_2165_){
_start:
{
lean_object* v_res_2166_; 
v_res_2166_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1();
return v_res_2166_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_inline__math(void){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__2);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1(){
_start:
{
lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___x_2170_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineMathQuot___closed__1));
v___x_2171_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1___closed__0));
v___x_2172_ = l_Lean_addBuiltinDocString(v___x_2170_, v___x_2171_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1___boxed(lean_object* v_a_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1();
return v_res_2174_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_display__math(void){
_start:
{
lean_object* v___x_2175_; 
v___x_2175_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_mathQuot___closed__0);
return v___x_2175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1(){
_start:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; 
v___x_2178_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_displayMathQuot___closed__1));
v___x_2179_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1___closed__0));
v___x_2180_ = l_Lean_addBuiltinDocString(v___x_2178_, v___x_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1___boxed(lean_object* v_a_2181_){
_start:
{
lean_object* v_res_2182_; 
v_res_2182_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1();
return v_res_2182_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1(){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; 
v___x_2190_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__1));
v___x_2191_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1___closed__0));
v___x_2192_ = l_Lean_addBuiltinDocString(v___x_2190_, v___x_2191_);
return v___x_2192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1___boxed(lean_object* v_a_2193_){
_start:
{
lean_object* v_res_2194_; 
v_res_2194_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1();
return v_res_2194_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_image___closed__0(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v___x_2195_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot), 2, 0);
v___x_2196_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2197_, 0, v___x_2196_);
lean_ctor_set(v___x_2197_, 1, v___x_2195_);
return v___x_2197_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_image(void){
_start:
{
lean_object* v___x_2198_; 
v___x_2198_ = lean_obj_once(&l_Lean_Doc_Parser_Inline_image___closed__0, &l_Lean_Doc_Parser_Inline_image___closed__0_once, _init_l_Lean_Doc_Parser_Inline_image___closed__0);
return v___x_2198_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1(){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2201_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_imageQuot___closed__1));
v___x_2202_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1___closed__0));
v___x_2203_ = l_Lean_addBuiltinDocString(v___x_2201_, v___x_2202_);
return v___x_2203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1___boxed(lean_object* v_a_2204_){
_start:
{
lean_object* v_res_2205_; 
v_res_2205_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1();
return v_res_2205_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_footnote___closed__0(void){
_start:
{
lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2206_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot), 2, 0);
v___x_2207_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2207_);
lean_ctor_set(v___x_2208_, 1, v___x_2206_);
return v___x_2208_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_footnote(void){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = lean_obj_once(&l_Lean_Doc_Parser_Inline_footnote___closed__0, &l_Lean_Doc_Parser_Inline_footnote___closed__0_once, _init_l_Lean_Doc_Parser_Inline_footnote___closed__0);
return v___x_2209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1(){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v___x_2212_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__1));
v___x_2213_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1___closed__0));
v___x_2214_ = l_Lean_addBuiltinDocString(v___x_2212_, v___x_2213_);
return v___x_2214_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1___boxed(lean_object* v_a_2215_){
_start:
{
lean_object* v_res_2216_; 
v_res_2216_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1();
return v_res_2216_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_linebreak___closed__0(void){
_start:
{
lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2217_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linebreakQuot), 2, 0);
v___x_2218_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2219_, 0, v___x_2218_);
lean_ctor_set(v___x_2219_, 1, v___x_2217_);
return v___x_2219_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Inline_linebreak(void){
_start:
{
lean_object* v___x_2220_; 
v___x_2220_ = lean_obj_once(&l_Lean_Doc_Parser_Inline_linebreak___closed__0, &l_Lean_Doc_Parser_Inline_linebreak___closed__0_once, _init_l_Lean_Doc_Parser_Inline_linebreak___closed__0);
return v___x_2220_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1(){
_start:
{
lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v___x_2228_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__1));
v___x_2229_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1___closed__0));
v___x_2230_ = l_Lean_addBuiltinDocString(v___x_2228_, v___x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1___boxed(lean_object* v_a_2231_){
_start:
{
lean_object* v_res_2232_; 
v_res_2232_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1();
return v_res_2232_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3(void){
_start:
{
lean_object* v___x_2246_; lean_object* v___x_2247_; 
v___x_2246_ = ((lean_object*)(l_Lean_Doc_Parser_inline___closed__1));
v___x_2247_ = l_Lean_Parser_atomic(v___x_2246_);
return v___x_2247_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4(void){
_start:
{
lean_object* v___x_2248_; lean_object* v___x_2249_; 
v___x_2248_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3);
v___x_2249_ = l_Lean_Parser_many1(v___x_2248_);
return v___x_2249_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__5(void){
_start:
{
uint8_t v___x_2250_; lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2254_; 
v___x_2250_ = 0;
v___x_2251_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4);
v___x_2252_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2));
v___x_2253_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__0));
v___x_2254_ = l_Lean_Parser_nodeWithAntiquot(v___x_2253_, v___x_2252_, v___x_2251_, v___x_2250_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot(lean_object* v_a_2255_, lean_object* v_a_2256_){
_start:
{
lean_object* v___x_2257_; lean_object* v_fn_2258_; lean_object* v___x_2259_; 
v___x_2257_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__5);
v_fn_2258_ = lean_ctor_get(v___x_2257_, 1);
lean_inc_ref(v_fn_2258_);
v___x_2259_ = lean_apply_2(v_fn_2258_, v_a_2255_, v_a_2256_);
return v___x_2259_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__2(void){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2267_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__6);
v___x_2268_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4);
v___x_2269_ = l_Lean_Parser_andthen(v___x_2268_, v___x_2267_);
return v___x_2269_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__3(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; 
v___x_2270_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__2);
v___x_2271_ = l_Lean_Parser_ident;
v___x_2272_ = l_Lean_Parser_andthen(v___x_2271_, v___x_2270_);
return v___x_2272_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__4(void){
_start:
{
lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; 
v___x_2273_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__3);
v___x_2274_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__3);
v___x_2275_ = l_Lean_Parser_andthen(v___x_2274_, v___x_2273_);
return v___x_2275_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__5(void){
_start:
{
uint8_t v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
v___x_2276_ = 0;
v___x_2277_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__4);
v___x_2278_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1));
v___x_2279_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__0));
v___x_2280_ = l_Lean_Parser_nodeWithAntiquot(v___x_2279_, v___x_2278_, v___x_2277_, v___x_2276_);
return v___x_2280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot(lean_object* v_a_2281_, lean_object* v_a_2282_){
_start:
{
lean_object* v___x_2283_; lean_object* v_fn_2284_; lean_object* v___x_2285_; 
v___x_2283_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__5);
v_fn_2284_ = lean_ctor_get(v___x_2283_, 1);
lean_inc_ref(v_fn_2284_);
v___x_2285_ = lean_apply_2(v_fn_2284_, v_a_2281_, v_a_2282_);
return v___x_2285_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2(void){
_start:
{
lean_object* v___x_2293_; lean_object* v___x_2294_; 
v___x_2293_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit___lam__0___closed__0));
v___x_2294_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_2293_);
return v___x_2294_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__3(void){
_start:
{
lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; 
v___x_2295_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2);
v___x_2296_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataContentsLit));
v___x_2297_ = l_Lean_Parser_andthen(v___x_2296_, v___x_2295_);
return v___x_2297_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__4(void){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2298_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__3);
v___x_2299_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__2);
v___x_2300_ = l_Lean_Parser_andthen(v___x_2299_, v___x_2298_);
return v___x_2300_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__5(void){
_start:
{
uint8_t v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; 
v___x_2301_ = 0;
v___x_2302_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__4);
v___x_2303_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1));
v___x_2304_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__0));
v___x_2305_ = l_Lean_Parser_nodeWithAntiquot(v___x_2304_, v___x_2303_, v___x_2302_, v___x_2301_);
return v___x_2305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot(lean_object* v_a_2306_, lean_object* v_a_2307_){
_start:
{
lean_object* v___x_2308_; lean_object* v_fn_2309_; lean_object* v___x_2310_; 
v___x_2308_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__5);
v_fn_2309_ = lean_ctor_get(v___x_2308_, 1);
lean_inc_ref(v_fn_2309_);
v___x_2310_ = lean_apply_2(v_fn_2309_, v_a_2306_, v_a_2307_);
return v___x_2310_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3(void){
_start:
{
lean_object* v___x_2319_; lean_object* v___x_2320_; 
v___x_2319_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__2));
v___x_2320_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_2319_);
return v___x_2320_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__4(void){
_start:
{
lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; 
v___x_2321_ = ((lean_object*)(l_Lean_Doc_Parser_versoLinkRefUrl));
v___x_2322_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3);
v___x_2323_ = l_Lean_Parser_andthen(v___x_2322_, v___x_2321_);
return v___x_2323_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__5(void){
_start:
{
lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2324_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__4);
v___x_2325_ = ((lean_object*)(l_Lean_Doc_Parser_versoRef));
v___x_2326_ = l_Lean_Parser_andthen(v___x_2325_, v___x_2324_);
return v___x_2326_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__6(void){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; 
v___x_2327_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__5);
v___x_2328_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkQuot___closed__2);
v___x_2329_ = l_Lean_Parser_andthen(v___x_2328_, v___x_2327_);
return v___x_2329_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__7(void){
_start:
{
uint8_t v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; 
v___x_2330_ = 0;
v___x_2331_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__6);
v___x_2332_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1));
v___x_2333_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__0));
v___x_2334_ = l_Lean_Parser_nodeWithAntiquot(v___x_2333_, v___x_2332_, v___x_2331_, v___x_2330_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot(lean_object* v_a_2335_, lean_object* v_a_2336_){
_start:
{
lean_object* v___x_2337_; lean_object* v_fn_2338_; lean_object* v___x_2339_; 
v___x_2337_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__7, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__7_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__7);
v_fn_2338_ = lean_ctor_get(v___x_2337_, 1);
lean_inc_ref(v_fn_2338_);
v___x_2339_ = lean_apply_2(v_fn_2338_, v_a_2335_, v_a_2336_);
return v___x_2339_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__2(void){
_start:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__3);
v___x_2348_ = l_Lean_Parser_many(v___x_2347_);
return v___x_2348_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__3(void){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2349_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__2);
v___x_2350_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__3);
v___x_2351_ = l_Lean_Parser_andthen(v___x_2350_, v___x_2349_);
return v___x_2351_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__4(void){
_start:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v___x_2354_; 
v___x_2352_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__3);
v___x_2353_ = ((lean_object*)(l_Lean_Doc_Parser_versoRef));
v___x_2354_ = l_Lean_Parser_andthen(v___x_2353_, v___x_2352_);
return v___x_2354_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__5(void){
_start:
{
lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; 
v___x_2355_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__4);
v___x_2356_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteQuot___closed__3);
v___x_2357_ = l_Lean_Parser_andthen(v___x_2356_, v___x_2355_);
return v___x_2357_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__6(void){
_start:
{
uint8_t v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v___x_2358_ = 0;
v___x_2359_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__5);
v___x_2360_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1));
v___x_2361_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__0));
v___x_2362_ = l_Lean_Parser_nodeWithAntiquot(v___x_2361_, v___x_2360_, v___x_2359_, v___x_2358_);
return v___x_2362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot(lean_object* v_a_2363_, lean_object* v_a_2364_){
_start:
{
lean_object* v___x_2365_; lean_object* v_fn_2366_; lean_object* v___x_2367_; 
v___x_2365_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__6);
v_fn_2366_ = lean_ctor_get(v___x_2365_, 1);
lean_inc_ref(v_fn_2366_);
v___x_2367_ = lean_apply_2(v_fn_2366_, v_a_2363_, v_a_2364_);
return v___x_2367_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__2(void){
_start:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; 
v___x_2375_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__4);
v___x_2376_ = ((lean_object*)(l_Lean_Doc_Parser_headerMarker));
v___x_2377_ = l_Lean_Parser_andthen(v___x_2376_, v___x_2375_);
return v___x_2377_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__3(void){
_start:
{
uint8_t v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v___x_2378_ = 0;
v___x_2379_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__2);
v___x_2380_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1));
v___x_2381_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__0));
v___x_2382_ = l_Lean_Parser_nodeWithAntiquot(v___x_2381_, v___x_2380_, v___x_2379_, v___x_2378_);
return v___x_2382_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot(lean_object* v_a_2383_, lean_object* v_a_2384_){
_start:
{
lean_object* v___x_2385_; lean_object* v_fn_2386_; lean_object* v___x_2387_; 
v___x_2385_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__3);
v_fn_2386_ = lean_ctor_get(v___x_2385_, 1);
lean_inc_ref(v_fn_2386_);
v___x_2387_ = lean_apply_2(v_fn_2386_, v_a_2383_, v_a_2384_);
return v___x_2387_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__2(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; 
v___x_2395_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4);
v___x_2396_ = l_Lean_Parser_ident;
v___x_2397_ = l_Lean_Parser_andthen(v___x_2396_, v___x_2395_);
return v___x_2397_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__3(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2398_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__2);
v___x_2399_ = l_Lean_Parser_optional(v___x_2398_);
return v___x_2399_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__4(void){
_start:
{
lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2400_ = ((lean_object*)(l_Lean_Doc_Parser_codeBlockFence));
v___x_2401_ = ((lean_object*)(l_Lean_Doc_Parser_versoCodeBlock));
v___x_2402_ = l_Lean_Parser_andthen(v___x_2401_, v___x_2400_);
return v___x_2402_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__5(void){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__4);
v___x_2404_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__3);
v___x_2405_ = l_Lean_Parser_andthen(v___x_2404_, v___x_2403_);
return v___x_2405_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__6(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2406_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__5);
v___x_2407_ = ((lean_object*)(l_Lean_Doc_Parser_codeBlockFence));
v___x_2408_ = l_Lean_Parser_andthen(v___x_2407_, v___x_2406_);
return v___x_2408_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__7(void){
_start:
{
uint8_t v___x_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; 
v___x_2409_ = 0;
v___x_2410_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__6, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__6_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__6);
v___x_2411_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1));
v___x_2412_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__0));
v___x_2413_ = l_Lean_Parser_nodeWithAntiquot(v___x_2412_, v___x_2411_, v___x_2410_, v___x_2409_);
return v___x_2413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot(lean_object* v_a_2414_, lean_object* v_a_2415_){
_start:
{
lean_object* v___x_2416_; lean_object* v_fn_2417_; lean_object* v___x_2418_; 
v___x_2416_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__7, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__7_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__7);
v_fn_2417_ = lean_ctor_get(v___x_2416_, 1);
lean_inc_ref(v_fn_2417_);
v___x_2418_ = lean_apply_2(v_fn_2417_, v_a_2414_, v_a_2415_);
return v___x_2418_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__4(void){
_start:
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
v___x_2438_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__3));
v___x_2439_ = l_Lean_Parser_atomic(v___x_2438_);
return v___x_2439_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__5(void){
_start:
{
lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2440_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__4);
v___x_2441_ = l_Lean_Parser_many(v___x_2440_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot(lean_object* v_marker_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; uint8_t v___x_2468_; lean_object* v___x_2469_; lean_object* v_fn_2470_; lean_object* v___x_2471_; 
v___x_2460_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__0));
v___x_2461_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3));
v___x_2462_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2463_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot), 2, 0);
v___x_2464_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2462_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = l_Lean_Parser_atomic(v___x_2464_);
v___x_2466_ = l_Lean_Parser_many(v___x_2465_);
v___x_2467_ = l_Lean_Parser_andthen(v_marker_2457_, v___x_2466_);
v___x_2468_ = 0;
v___x_2469_ = l_Lean_Parser_nodeWithAntiquot(v___x_2460_, v___x_2461_, v___x_2467_, v___x_2468_);
v_fn_2470_ = lean_ctor_get(v___x_2469_, 1);
lean_inc_ref(v_fn_2470_);
lean_dec_ref(v___x_2469_);
v___x_2471_ = lean_apply_2(v_fn_2470_, v_a_2458_, v_a_2459_);
return v___x_2471_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot(lean_object* v_a_2472_, lean_object* v_a_2473_){
_start:
{
lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; uint8_t v___x_2482_; lean_object* v___x_2483_; lean_object* v_fn_2484_; lean_object* v___x_2485_; 
v___x_2474_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__0));
v___x_2475_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1));
v___x_2476_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2477_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_unorderedListMarker));
v___x_2478_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot), 3, 1);
lean_closure_set(v___x_2478_, 0, v___x_2477_);
v___x_2479_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2479_, 0, v___x_2476_);
lean_ctor_set(v___x_2479_, 1, v___x_2478_);
v___x_2480_ = l_Lean_Parser_atomic(v___x_2479_);
v___x_2481_ = l_Lean_Parser_many1(v___x_2480_);
v___x_2482_ = 0;
v___x_2483_ = l_Lean_Parser_nodeWithAntiquot(v___x_2474_, v___x_2475_, v___x_2481_, v___x_2482_);
v_fn_2484_ = lean_ctor_get(v___x_2483_, 1);
lean_inc_ref(v_fn_2484_);
lean_dec_ref(v___x_2483_);
v___x_2485_ = lean_apply_2(v_fn_2484_, v_a_2472_, v_a_2473_);
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot(lean_object* v_a_2493_, lean_object* v_a_2494_){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; uint8_t v___x_2503_; lean_object* v___x_2504_; lean_object* v_fn_2505_; lean_object* v___x_2506_; 
v___x_2495_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__0));
v___x_2496_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1));
v___x_2497_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2498_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_orderedListMarker));
v___x_2499_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot), 3, 1);
lean_closure_set(v___x_2499_, 0, v___x_2498_);
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2497_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
v___x_2501_ = l_Lean_Parser_atomic(v___x_2500_);
v___x_2502_ = l_Lean_Parser_many1(v___x_2501_);
v___x_2503_ = 0;
v___x_2504_ = l_Lean_Parser_nodeWithAntiquot(v___x_2495_, v___x_2496_, v___x_2502_, v___x_2503_);
v_fn_2505_ = lean_ctor_get(v___x_2504_, 1);
lean_inc_ref(v_fn_2505_);
lean_dec_ref(v___x_2504_);
v___x_2506_ = lean_apply_2(v_fn_2505_, v_a_2493_, v_a_2494_);
return v___x_2506_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__3(void){
_start:
{
lean_object* v___x_2515_; lean_object* v___x_2516_; 
v___x_2515_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__2));
v___x_2516_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_atomOf(v___x_2515_);
return v___x_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot(lean_object* v_a_2517_, lean_object* v_a_2518_){
_start:
{
lean_object* v___x_2519_; lean_object* v___x_2520_; lean_object* v___x_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; uint8_t v___x_2528_; lean_object* v___x_2529_; lean_object* v_fn_2530_; lean_object* v___x_2531_; 
v___x_2519_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__0));
v___x_2520_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1));
v___x_2521_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__3);
v___x_2522_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2523_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot), 2, 0);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___x_2522_);
lean_ctor_set(v___x_2524_, 1, v___x_2523_);
v___x_2525_ = l_Lean_Parser_atomic(v___x_2524_);
v___x_2526_ = l_Lean_Parser_many(v___x_2525_);
v___x_2527_ = l_Lean_Parser_andthen(v___x_2521_, v___x_2526_);
v___x_2528_ = 0;
v___x_2529_ = l_Lean_Parser_nodeWithAntiquot(v___x_2519_, v___x_2520_, v___x_2527_, v___x_2528_);
v_fn_2530_ = lean_ctor_get(v___x_2529_, 1);
lean_inc_ref(v_fn_2530_);
lean_dec_ref(v___x_2529_);
v___x_2531_ = lean_apply_2(v_fn_2530_, v_a_2517_, v_a_2518_);
return v___x_2531_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__0(void){
_start:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; 
v___x_2532_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot), 2, 0);
v___x_2533_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2534_, 0, v___x_2533_);
lean_ctor_set(v___x_2534_, 1, v___x_2532_);
return v___x_2534_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot(lean_object* v_a_2542_, lean_object* v_a_2543_){
_start:
{
lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; uint8_t v___x_2558_; lean_object* v___x_2559_; lean_object* v_fn_2560_; lean_object* v___x_2561_; 
v___x_2544_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__0));
v___x_2545_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1));
v___x_2546_ = ((lean_object*)(l_Lean_Doc_Parser_directiveDelimiter));
v___x_2547_ = l_Lean_Parser_ident;
v___x_2548_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_roleQuot___closed__4);
v___x_2549_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2550_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot), 2, 0);
v___x_2551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2551_, 0, v___x_2549_);
lean_ctor_set(v___x_2551_, 1, v___x_2550_);
v___x_2552_ = l_Lean_Parser_atomic(v___x_2551_);
v___x_2553_ = l_Lean_Parser_many(v___x_2552_);
v___x_2554_ = l_Lean_Parser_andthen(v___x_2553_, v___x_2546_);
v___x_2555_ = l_Lean_Parser_andthen(v___x_2548_, v___x_2554_);
v___x_2556_ = l_Lean_Parser_andthen(v___x_2547_, v___x_2555_);
v___x_2557_ = l_Lean_Parser_andthen(v___x_2546_, v___x_2556_);
v___x_2558_ = 0;
v___x_2559_ = l_Lean_Parser_nodeWithAntiquot(v___x_2544_, v___x_2545_, v___x_2557_, v___x_2558_);
v_fn_2560_ = lean_ctor_get(v___x_2559_, 1);
lean_inc_ref(v_fn_2560_);
lean_dec_ref(v___x_2559_);
v___x_2561_ = lean_apply_2(v_fn_2560_, v_a_2542_, v_a_2543_);
return v___x_2561_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__7(void){
_start:
{
uint8_t v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2568_ = 1;
v___x_2569_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__6));
v___x_2570_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__5));
v___x_2571_ = l_Lean_Parser_mkAntiquot(v___x_2570_, v___x_2569_, v___x_2568_, v___x_2568_);
return v___x_2571_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__9(void){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2572_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot), 2, 0);
v___x_2573_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
lean_ctor_set(v___x_2574_, 1, v___x_2572_);
return v___x_2574_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__8(void){
_start:
{
lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; 
v___x_2575_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot), 2, 0);
v___x_2576_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2577_, 0, v___x_2576_);
lean_ctor_set(v___x_2577_, 1, v___x_2575_);
return v___x_2577_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__10(void){
_start:
{
lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; 
v___x_2578_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__9, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__9_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__9);
v___x_2579_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__8, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__8_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__8);
v___x_2580_ = l_Lean_Parser_orelse(v___x_2579_, v___x_2578_);
return v___x_2580_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__4(void){
_start:
{
lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; 
v___x_2581_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot), 2, 0);
v___x_2582_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2582_);
lean_ctor_set(v___x_2583_, 1, v___x_2581_);
return v___x_2583_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__11(void){
_start:
{
lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2584_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__10, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__10_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__10);
v___x_2585_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__4, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__4_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__4);
v___x_2586_ = l_Lean_Parser_orelse(v___x_2585_, v___x_2584_);
return v___x_2586_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__3(void){
_start:
{
lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2587_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot), 2, 0);
v___x_2588_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2589_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
lean_ctor_set(v___x_2589_, 1, v___x_2587_);
return v___x_2589_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__12(void){
_start:
{
lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; 
v___x_2590_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__11, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__11_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__11);
v___x_2591_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__3, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__3_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__3);
v___x_2592_ = l_Lean_Parser_orelse(v___x_2591_, v___x_2590_);
return v___x_2592_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__2(void){
_start:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; 
v___x_2593_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot), 2, 0);
v___x_2594_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2595_, 0, v___x_2594_);
lean_ctor_set(v___x_2595_, 1, v___x_2593_);
return v___x_2595_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__13(void){
_start:
{
lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; 
v___x_2596_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__12, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__12_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__12);
v___x_2597_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__2, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__2_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__2);
v___x_2598_ = l_Lean_Parser_orelse(v___x_2597_, v___x_2596_);
return v___x_2598_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__1(void){
_start:
{
lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; 
v___x_2599_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot), 2, 0);
v___x_2600_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2600_);
lean_ctor_set(v___x_2601_, 1, v___x_2599_);
return v___x_2601_;
}
}
static lean_object* _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__14(void){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; 
v___x_2602_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__13, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__13_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__13);
v___x_2603_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__1, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__1_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__1);
v___x_2604_ = l_Lean_Parser_orelse(v___x_2603_, v___x_2602_);
return v___x_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot(lean_object* v_c_2605_, lean_object* v_s_2606_){
_start:
{
lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v_fn_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v_alts_2627_; lean_object* v_fn_2628_; uint8_t v___x_2629_; lean_object* v___x_2630_; 
v___x_2607_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2608_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot), 2, 0);
v___x_2609_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2607_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
v___x_2610_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot), 2, 0);
v___x_2611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2607_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
v___x_2612_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot), 2, 0);
v___x_2613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2607_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot), 2, 0);
v___x_2615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2607_);
lean_ctor_set(v___x_2615_, 1, v___x_2614_);
v___x_2616_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__0, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__0_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__0);
v___x_2617_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot), 2, 0);
v___x_2618_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2607_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__7, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__7_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__7);
v_fn_2620_ = lean_ctor_get(v___x_2619_, 1);
v___x_2621_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__14, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__14_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot___closed__14);
v___x_2622_ = l_Lean_Parser_orelse(v___x_2618_, v___x_2621_);
v___x_2623_ = l_Lean_Parser_orelse(v___x_2616_, v___x_2622_);
v___x_2624_ = l_Lean_Parser_orelse(v___x_2615_, v___x_2623_);
v___x_2625_ = l_Lean_Parser_orelse(v___x_2613_, v___x_2624_);
v___x_2626_ = l_Lean_Parser_orelse(v___x_2611_, v___x_2625_);
v_alts_2627_ = l_Lean_Parser_orelse(v___x_2609_, v___x_2626_);
v_fn_2628_ = lean_ctor_get(v_alts_2627_, 1);
lean_inc_ref(v_fn_2628_);
lean_dec_ref(v_alts_2627_);
v___x_2629_ = 0;
lean_inc_ref(v_fn_2620_);
v___x_2630_ = l_Lean_Parser_withAntiquotFn(v_fn_2620_, v_fn_2628_, v___x_2629_, v_c_2605_, v_s_2606_);
return v___x_2630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot(lean_object* v_a_2631_, lean_object* v_a_2632_){
_start:
{
lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; uint8_t v___x_2644_; lean_object* v___x_2645_; lean_object* v_fn_2646_; lean_object* v___x_2647_; 
v___x_2633_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__0));
v___x_2634_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2));
v___x_2635_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemMarker));
v___x_2636_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2637_ = lean_obj_once(&l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__5, &l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__5_once, _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__5);
v___x_2638_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockQuot), 2, 0);
v___x_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2636_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = l_Lean_Parser_atomic(v___x_2639_);
v___x_2641_ = l_Lean_Parser_many(v___x_2640_);
v___x_2642_ = l_Lean_Parser_andthen(v___x_2637_, v___x_2641_);
v___x_2643_ = l_Lean_Parser_andthen(v___x_2635_, v___x_2642_);
v___x_2644_ = 0;
v___x_2645_ = l_Lean_Parser_nodeWithAntiquot(v___x_2633_, v___x_2634_, v___x_2643_, v___x_2644_);
v_fn_2646_ = lean_ctor_get(v___x_2645_, 1);
lean_inc_ref(v_fn_2646_);
lean_dec_ref(v___x_2645_);
v___x_2647_ = lean_apply_2(v_fn_2646_, v_a_2631_, v_a_2632_);
return v___x_2647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot(lean_object* v_a_2648_, lean_object* v_a_2649_){
_start:
{
lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; uint8_t v___x_2657_; lean_object* v___x_2658_; lean_object* v_fn_2659_; lean_object* v___x_2660_; 
v___x_2650_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__0));
v___x_2651_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1));
v___x_2652_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___closed__4));
v___x_2653_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot), 2, 0);
v___x_2654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2652_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = l_Lean_Parser_atomic(v___x_2654_);
v___x_2656_ = l_Lean_Parser_many1(v___x_2655_);
v___x_2657_ = 0;
v___x_2658_ = l_Lean_Parser_nodeWithAntiquot(v___x_2650_, v___x_2651_, v___x_2656_, v___x_2657_);
v_fn_2659_ = lean_ctor_get(v___x_2658_, 1);
lean_inc_ref(v_fn_2659_);
lean_dec_ref(v___x_2658_);
v___x_2660_ = lean_apply_2(v_fn_2659_, v_a_2648_, v_a_2649_);
return v___x_2660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1(){
_start:
{
lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
v___x_2669_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_listItemQuot___closed__3));
v___x_2670_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1___closed__0));
v___x_2671_ = l_Lean_addBuiltinDocString(v___x_2669_, v___x_2670_);
return v___x_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1___boxed(lean_object* v_a_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1();
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1(){
_start:
{
lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2681_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_descItemQuot___closed__2));
v___x_2682_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1___closed__0));
v___x_2683_ = l_Lean_addBuiltinDocString(v___x_2681_, v___x_2682_);
return v___x_2683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1___boxed(lean_object* v_a_2684_){
_start:
{
lean_object* v_res_2685_; 
v_res_2685_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1();
return v_res_2685_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_para___closed__0(void){
_start:
{
lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; 
v___x_2686_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot), 2, 0);
v___x_2687_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2688_, 0, v___x_2687_);
lean_ctor_set(v___x_2688_, 1, v___x_2686_);
return v___x_2688_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_para(void){
_start:
{
lean_object* v___x_2689_; 
v___x_2689_ = lean_obj_once(&l_Lean_Doc_Parser_Block_para___closed__0, &l_Lean_Doc_Parser_Block_para___closed__0_once, _init_l_Lean_Doc_Parser_Block_para___closed__0);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1(){
_start:
{
lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; 
v___x_2692_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_paraQuot___closed__2));
v___x_2693_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1___closed__0));
v___x_2694_ = l_Lean_addBuiltinDocString(v___x_2692_, v___x_2693_);
return v___x_2694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1___boxed(lean_object* v_a_2695_){
_start:
{
lean_object* v_res_2696_; 
v_res_2696_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1();
return v_res_2696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1(){
_start:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2704_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ulQuot___closed__1));
v___x_2705_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1___closed__0));
v___x_2706_ = l_Lean_addBuiltinDocString(v___x_2704_, v___x_2705_);
return v___x_2706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1___boxed(lean_object* v_a_2707_){
_start:
{
lean_object* v_res_2708_; 
v_res_2708_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1();
return v_res_2708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1(){
_start:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; 
v___x_2716_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_olQuot___closed__1));
v___x_2717_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1___closed__0));
v___x_2718_ = l_Lean_addBuiltinDocString(v___x_2716_, v___x_2717_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1___boxed(lean_object* v_a_2719_){
_start:
{
lean_object* v_res_2720_; 
v_res_2720_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1();
return v_res_2720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1(){
_start:
{
lean_object* v___x_2728_; lean_object* v___x_2729_; lean_object* v___x_2730_; 
v___x_2728_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_dlQuot___closed__1));
v___x_2729_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1___closed__0));
v___x_2730_ = l_Lean_addBuiltinDocString(v___x_2728_, v___x_2729_);
return v___x_2730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1___boxed(lean_object* v_a_2731_){
_start:
{
lean_object* v_res_2732_; 
v_res_2732_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1();
return v_res_2732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1(){
_start:
{
lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v___x_2740_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_blockquoteQuot___closed__1));
v___x_2741_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1___closed__0));
v___x_2742_ = l_Lean_addBuiltinDocString(v___x_2740_, v___x_2741_);
return v___x_2742_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1___boxed(lean_object* v_a_2743_){
_start:
{
lean_object* v_res_2744_; 
v_res_2744_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1();
return v_res_2744_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_codeblock___closed__0(void){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2745_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot), 2, 0);
v___x_2746_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2746_);
lean_ctor_set(v___x_2747_, 1, v___x_2745_);
return v___x_2747_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_codeblock(void){
_start:
{
lean_object* v___x_2748_; 
v___x_2748_ = lean_obj_once(&l_Lean_Doc_Parser_Block_codeblock___closed__0, &l_Lean_Doc_Parser_Block_codeblock___closed__0_once, _init_l_Lean_Doc_Parser_Block_codeblock___closed__0);
return v___x_2748_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1(){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; lean_object* v___x_2753_; 
v___x_2751_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_codeblockQuot___closed__1));
v___x_2752_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1___closed__0));
v___x_2753_ = l_Lean_addBuiltinDocString(v___x_2751_, v___x_2752_);
return v___x_2753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1___boxed(lean_object* v_a_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1();
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1(){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; 
v___x_2763_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_directiveQuot___closed__1));
v___x_2764_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1___closed__0));
v___x_2765_ = l_Lean_addBuiltinDocString(v___x_2763_, v___x_2764_);
return v___x_2765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1___boxed(lean_object* v_a_2766_){
_start:
{
lean_object* v_res_2767_; 
v_res_2767_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1();
return v_res_2767_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_header___closed__0(void){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; 
v___x_2768_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot), 2, 0);
v___x_2769_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2770_, 0, v___x_2769_);
lean_ctor_set(v___x_2770_, 1, v___x_2768_);
return v___x_2770_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_header(void){
_start:
{
lean_object* v___x_2771_; 
v___x_2771_ = lean_obj_once(&l_Lean_Doc_Parser_Block_header___closed__0, &l_Lean_Doc_Parser_Block_header___closed__0_once, _init_l_Lean_Doc_Parser_Block_header___closed__0);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1(){
_start:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2774_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_headerQuot___closed__1));
v___x_2775_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1___closed__0));
v___x_2776_ = l_Lean_addBuiltinDocString(v___x_2774_, v___x_2775_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1___boxed(lean_object* v_a_2777_){
_start:
{
lean_object* v_res_2778_; 
v_res_2778_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1();
return v_res_2778_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_link__ref___closed__0(void){
_start:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2779_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot), 2, 0);
v___x_2780_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2781_, 0, v___x_2780_);
lean_ctor_set(v___x_2781_, 1, v___x_2779_);
return v___x_2781_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_link__ref(void){
_start:
{
lean_object* v___x_2782_; 
v___x_2782_ = lean_obj_once(&l_Lean_Doc_Parser_Block_link__ref___closed__0, &l_Lean_Doc_Parser_Block_link__ref___closed__0_once, _init_l_Lean_Doc_Parser_Block_link__ref___closed__0);
return v___x_2782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1(){
_start:
{
lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; 
v___x_2785_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_linkRefQuot___closed__1));
v___x_2786_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1___closed__0));
v___x_2787_ = l_Lean_addBuiltinDocString(v___x_2785_, v___x_2786_);
return v___x_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1___boxed(lean_object* v_a_2788_){
_start:
{
lean_object* v_res_2789_; 
v_res_2789_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1();
return v_res_2789_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_footnote__ref___closed__0(void){
_start:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; 
v___x_2790_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot), 2, 0);
v___x_2791_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2792_, 0, v___x_2791_);
lean_ctor_set(v___x_2792_, 1, v___x_2790_);
return v___x_2792_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_footnote__ref(void){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = lean_obj_once(&l_Lean_Doc_Parser_Block_footnote__ref___closed__0, &l_Lean_Doc_Parser_Block_footnote__ref___closed__0_once, _init_l_Lean_Doc_Parser_Block_footnote__ref___closed__0);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1(){
_start:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v___x_2796_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_footnoteRefQuot___closed__1));
v___x_2797_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1___closed__0));
v___x_2798_ = l_Lean_addBuiltinDocString(v___x_2796_, v___x_2797_);
return v___x_2798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1___boxed(lean_object* v_a_2799_){
_start:
{
lean_object* v_res_2800_; 
v_res_2800_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1();
return v_res_2800_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_metadata__block___closed__0(void){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v___x_2803_; 
v___x_2801_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot), 2, 0);
v___x_2802_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2803_, 0, v___x_2802_);
lean_ctor_set(v___x_2803_, 1, v___x_2801_);
return v___x_2803_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_metadata__block(void){
_start:
{
lean_object* v___x_2804_; 
v___x_2804_ = lean_obj_once(&l_Lean_Doc_Parser_Block_metadata__block___closed__0, &l_Lean_Doc_Parser_Block_metadata__block___closed__0_once, _init_l_Lean_Doc_Parser_Block_metadata__block___closed__0);
return v___x_2804_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1(){
_start:
{
lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; 
v___x_2807_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_metadataQuot___closed__1));
v___x_2808_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1___closed__0));
v___x_2809_ = l_Lean_addBuiltinDocString(v___x_2807_, v___x_2808_);
return v___x_2809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1___boxed(lean_object* v_a_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1();
return v_res_2811_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_command___closed__0(void){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2812_ = lean_alloc_closure((void*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot), 2, 0);
v___x_2813_ = ((lean_object*)(l_Lean_Doc_Parser_versoText___closed__3));
v___x_2814_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2814_, 0, v___x_2813_);
lean_ctor_set(v___x_2814_, 1, v___x_2812_);
return v___x_2814_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_Block_command(void){
_start:
{
lean_object* v___x_2815_; 
v___x_2815_ = lean_obj_once(&l_Lean_Doc_Parser_Block_command___closed__0, &l_Lean_Doc_Parser_Block_command___closed__0_once, _init_l_Lean_Doc_Parser_Block_command___closed__0);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1(){
_start:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; 
v___x_2818_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_commandQuot___closed__1));
v___x_2819_ = ((lean_object*)(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1___closed__0));
v___x_2820_ = l_Lean_addBuiltinDocString(v___x_2818_, v___x_2819_);
return v___x_2820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1___boxed(lean_object* v_a_2821_){
_start:
{
lean_object* v_res_2822_; 
v_res_2822_ = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1();
return v_res_2822_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_document___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2834_; lean_object* v___x_2835_; 
v___x_2834_ = ((lean_object*)(l_Lean_Doc_Parser_block));
v___x_2835_ = l_Lean_Parser_atomic(v___x_2834_);
return v___x_2835_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_document___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2836_; lean_object* v___x_2837_; 
v___x_2836_ = lean_obj_once(&l_Lean_Doc_Parser_document___lam__0___closed__2, &l_Lean_Doc_Parser_document___lam__0___closed__2_once, _init_l_Lean_Doc_Parser_document___lam__0___closed__2);
v___x_2837_ = l_Lean_Parser_many(v___x_2836_);
return v___x_2837_;
}
}
static lean_object* _init_l_Lean_Doc_Parser_document___lam__0___closed__4(void){
_start:
{
uint8_t v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; 
v___x_2838_ = 0;
v___x_2839_ = lean_obj_once(&l_Lean_Doc_Parser_document___lam__0___closed__3, &l_Lean_Doc_Parser_document___lam__0___closed__3_once, _init_l_Lean_Doc_Parser_document___lam__0___closed__3);
v___x_2840_ = ((lean_object*)(l_Lean_Doc_Parser_document___lam__0___closed__1));
v___x_2841_ = ((lean_object*)(l_Lean_Doc_Parser_document___lam__0___closed__0));
v___x_2842_ = l_Lean_Parser_nodeWithAntiquot(v___x_2841_, v___x_2840_, v___x_2839_, v___x_2838_);
return v___x_2842_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_Parser_document___lam__0(lean_object* v_c_2843_, lean_object* v_s_2844_){
_start:
{
lean_object* v___x_2845_; lean_object* v_fn_2846_; lean_object* v___x_2847_; 
v___x_2845_ = lean_obj_once(&l_Lean_Doc_Parser_document___lam__0___closed__4, &l_Lean_Doc_Parser_document___lam__0___closed__4_once, _init_l_Lean_Doc_Parser_document___lam__0___closed__4);
v_fn_2846_ = lean_ctor_get(v___x_2845_, 1);
lean_inc_ref(v_fn_2846_);
v___x_2847_ = lean_apply_2(v_fn_2846_, v_c_2843_, v_s_2844_);
return v___x_2847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_TSyntax_getVersoBlocks_spec__0(size_t v_sz_2853_, size_t v_i_2854_, lean_object* v_bs_2855_){
_start:
{
uint8_t v___x_2856_; 
v___x_2856_ = lean_usize_dec_lt(v_i_2854_, v_sz_2853_);
if (v___x_2856_ == 0)
{
return v_bs_2855_;
}
else
{
lean_object* v_v_2857_; lean_object* v___x_2858_; lean_object* v_bs_x27_2859_; size_t v___x_2860_; size_t v___x_2861_; lean_object* v___x_2862_; 
v_v_2857_ = lean_array_uget(v_bs_2855_, v_i_2854_);
v___x_2858_ = lean_unsigned_to_nat(0u);
v_bs_x27_2859_ = lean_array_uset(v_bs_2855_, v_i_2854_, v___x_2858_);
v___x_2860_ = ((size_t)1ULL);
v___x_2861_ = lean_usize_add(v_i_2854_, v___x_2860_);
v___x_2862_ = lean_array_uset(v_bs_x27_2859_, v_i_2854_, v_v_2857_);
v_i_2854_ = v___x_2861_;
v_bs_2855_ = v___x_2862_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_TSyntax_getVersoBlocks_spec__0___boxed(lean_object* v_sz_2864_, lean_object* v_i_2865_, lean_object* v_bs_2866_){
_start:
{
size_t v_sz_boxed_2867_; size_t v_i_boxed_2868_; lean_object* v_res_2869_; 
v_sz_boxed_2867_ = lean_unbox_usize(v_sz_2864_);
lean_dec(v_sz_2864_);
v_i_boxed_2868_ = lean_unbox_usize(v_i_2865_);
lean_dec(v_i_2865_);
v_res_2869_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_TSyntax_getVersoBlocks_spec__0(v_sz_boxed_2867_, v_i_boxed_2868_, v_bs_2866_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoBlocks(lean_object* v_doc_2870_){
_start:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; size_t v_sz_2874_; size_t v___x_2875_; lean_object* v___x_2876_; 
v___x_2871_ = lean_unsigned_to_nat(0u);
v___x_2872_ = l_Lean_Syntax_getArg(v_doc_2870_, v___x_2871_);
v___x_2873_ = l_Lean_Syntax_getArgs(v___x_2872_);
lean_dec(v___x_2872_);
v_sz_2874_ = lean_array_size(v___x_2873_);
v___x_2875_ = ((size_t)0ULL);
v___x_2876_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_TSyntax_getVersoBlocks_spec__0(v_sz_2874_, v___x_2875_, v___x_2873_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoBlocks___boxed(lean_object* v_doc_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_TSyntax_getVersoBlocks(v_doc_2877_);
lean_dec(v_doc_2877_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoDelimiter(lean_object* v_delim_2879_){
_start:
{
lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; 
v___x_2880_ = lean_unsigned_to_nat(0u);
v___x_2881_ = l_Lean_Syntax_getArg(v_delim_2879_, v___x_2880_);
v___x_2882_ = l_Lean_Syntax_getAtomVal(v___x_2881_);
lean_dec(v___x_2881_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l_Lean_TSyntax_getVersoDelimiter___boxed(lean_object* v_delim_2883_){
_start:
{
lean_object* v_res_2884_; 
v_res_2884_ = l_Lean_TSyntax_getVersoDelimiter(v_delim_2883_);
lean_dec(v_delim_2883_);
return v_res_2884_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDocument_view(lean_object* v_doc_2885_){
_start:
{
lean_object* v___x_2886_; 
v___x_2886_ = l_Lean_TSyntax_getVersoBlocks(v_doc_2885_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDocument_view___boxed(lean_object* v_doc_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = l_Lean_Doc_VersoDocument_view(v_doc_2887_);
lean_dec(v_doc_2887_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDelimiter_view(lean_object* v_delim_2889_){
_start:
{
lean_object* v___x_2890_; 
v___x_2890_ = l_Lean_TSyntax_getVersoDelimiter(v_delim_2889_);
return v___x_2890_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_VersoDelimiter_view___boxed(lean_object* v_delim_2891_){
_start:
{
lean_object* v_res_2892_; 
v_res_2892_ = l_Lean_Doc_VersoDelimiter_view(v_delim_2891_);
lean_dec(v_delim_2891_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___lam__0(lean_object* v_s_2895_){
_start:
{
lean_inc(v_s_2895_);
return v_s_2895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___lam__0___boxed(lean_object* v_s_2896_){
_start:
{
lean_object* v_res_2897_; 
v_res_2897_ = l_Lean_Doc_instCoeTSyntaxConsSyntaxNodeKindMkStr5NilMkStr4__lean___lam__0(v_s_2896_);
lean_dec(v_s_2896_);
return v_res_2897_;
}
}
lean_object* runtime_initialize_Lean_Parser_Term_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_DocString_Types(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_DocString_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Term_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_escapeVersoLinkUrl___closed__0___boxed__const__1 = _init_l_Lean_Doc_escapeVersoLinkUrl___closed__0___boxed__const__1();
lean_mark_persistent(l_Lean_Doc_escapeVersoLinkUrl___closed__0___boxed__const__1);
l_Lean_Doc_escapeVersoImageAlt___closed__0___boxed__const__1 = _init_l_Lean_Doc_escapeVersoImageAlt___closed__0___boxed__const__1();
lean_mark_persistent(l_Lean_Doc_escapeVersoImageAlt___closed__0___boxed__const__1);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_anon___regBuiltin_Lean_Doc_Parser_Arg_anon_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named___regBuiltin_Lean_Doc_Parser_Arg_named_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_named__no__paren___regBuiltin_Lean_Doc_Parser_Arg_named__no__paren_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__on___regBuiltin_Lean_Doc_Parser_Arg_flag__on_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Arg_flag__off___regBuiltin_Lean_Doc_Parser_Arg_flag__off_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_url___regBuiltin_Lean_Doc_Parser_LinkTarget_url_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_LinkTarget_ref___regBuiltin_Lean_Doc_Parser_LinkTarget_ref_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3___boxed__const__1 = _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_inlineCode___lam__2___closed__3___boxed__const__1);
l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___boxed__const__1 = _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_boldQuot___boxed__const__1);
l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___boxed__const__1 = _init_l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___boxed__const__1();
lean_mark_persistent(l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_emphQuot___boxed__const__1);
l_Lean_Doc_Parser_Inline_text = _init_l_Lean_Doc_Parser_Inline_text();
lean_mark_persistent(l_Lean_Doc_Parser_Inline_text);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_emph___regBuiltin_Lean_Doc_Parser_Inline_emph_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_bold___regBuiltin_Lean_Doc_Parser_Inline_bold_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_code___regBuiltin_Lean_Doc_Parser_Inline_code_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Inline_inline__math = _init_l_Lean_Doc_Parser_Inline_inline__math();
lean_mark_persistent(l_Lean_Doc_Parser_Inline_inline__math);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_inline__math___regBuiltin_Lean_Doc_Parser_Inline_inline__math_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Inline_display__math = _init_l_Lean_Doc_Parser_Inline_display__math();
lean_mark_persistent(l_Lean_Doc_Parser_Inline_display__math);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_display__math___regBuiltin_Lean_Doc_Parser_Inline_display__math_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_link___regBuiltin_Lean_Doc_Parser_Inline_link_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Inline_image = _init_l_Lean_Doc_Parser_Inline_image();
lean_mark_persistent(l_Lean_Doc_Parser_Inline_image);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_image___regBuiltin_Lean_Doc_Parser_Inline_image_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Inline_footnote = _init_l_Lean_Doc_Parser_Inline_footnote();
lean_mark_persistent(l_Lean_Doc_Parser_Inline_footnote);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_footnote___regBuiltin_Lean_Doc_Parser_Inline_footnote_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Inline_linebreak = _init_l_Lean_Doc_Parser_Inline_linebreak();
lean_mark_persistent(l_Lean_Doc_Parser_Inline_linebreak);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Inline_role___regBuiltin_Lean_Doc_Parser_Inline_role_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_ListItem_item___regBuiltin_Lean_Doc_Parser_ListItem_item_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_DescItem_item___regBuiltin_Lean_Doc_Parser_DescItem_item_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Block_para = _init_l_Lean_Doc_Parser_Block_para();
lean_mark_persistent(l_Lean_Doc_Parser_Block_para);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_para___regBuiltin_Lean_Doc_Parser_Block_para_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ul___regBuiltin_Lean_Doc_Parser_Block_ul_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_ol___regBuiltin_Lean_Doc_Parser_Block_ol_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_dl___regBuiltin_Lean_Doc_Parser_Block_dl_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_blockquote___regBuiltin_Lean_Doc_Parser_Block_blockquote_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Block_codeblock = _init_l_Lean_Doc_Parser_Block_codeblock();
lean_mark_persistent(l_Lean_Doc_Parser_Block_codeblock);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_codeblock___regBuiltin_Lean_Doc_Parser_Block_codeblock_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_directive___regBuiltin_Lean_Doc_Parser_Block_directive_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Block_header = _init_l_Lean_Doc_Parser_Block_header();
lean_mark_persistent(l_Lean_Doc_Parser_Block_header);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_header___regBuiltin_Lean_Doc_Parser_Block_header_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Block_link__ref = _init_l_Lean_Doc_Parser_Block_link__ref();
lean_mark_persistent(l_Lean_Doc_Parser_Block_link__ref);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_link__ref___regBuiltin_Lean_Doc_Parser_Block_link__ref_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Block_footnote__ref = _init_l_Lean_Doc_Parser_Block_footnote__ref();
lean_mark_persistent(l_Lean_Doc_Parser_Block_footnote__ref);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_footnote__ref___regBuiltin_Lean_Doc_Parser_Block_footnote__ref_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Block_metadata__block = _init_l_Lean_Doc_Parser_Block_metadata__block();
lean_mark_persistent(l_Lean_Doc_Parser_Block_metadata__block);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_metadata__block___regBuiltin_Lean_Doc_Parser_Block_metadata__block_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Doc_Parser_Block_command = _init_l_Lean_Doc_Parser_Block_command();
lean_mark_persistent(l_Lean_Doc_Parser_Block_command);
res = l___private_Lean_DocString_Syntax_0__Lean_Doc_Parser_Block_command___regBuiltin_Lean_Doc_Parser_Block_command_docString__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Term_Basic(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_DocString_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Term_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Term_Basic(uint8_t builtin);
lean_object* initialize_Lean_DocString_Types(uint8_t builtin);
lean_object* initialize_Lean_Parser_Term_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_DocString_Syntax(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Term_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_DocString_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Term_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_DocString_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_DocString_Syntax(builtin);
}
#ifdef __cplusplus
}
#endif
