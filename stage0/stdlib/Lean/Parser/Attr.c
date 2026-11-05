// Lean compiler output
// Module: Lean.Parser.Attr
// Imports: public import Lean.Parser.Extra
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDeclarationRanges(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_strLit;
lean_object* l_Lean_Parser_nonReservedSymbol(lean_object*, uint8_t);
lean_object* l_Lean_Parser_optional(lean_object*);
lean_object* l_Lean_Parser_andthen(lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_skip;
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_pushLine___redArg(lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Parser_numLit;
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_formatterAttribute;
lean_object* l_Lean_Parser_leadingNode_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Parser_categoryParser(lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ident_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_symbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_ppSpace_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_optional_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1(lean_object*);
lean_object* l_Lean_Parser_addBuiltinLeadingParser(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
extern lean_object* l_Lean_PrettyPrinter_parenthesizerAttribute;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_orelse(lean_object*, lean_object*);
lean_object* l_Lean_Parser_many(lean_object*);
extern lean_object* l_Lean_Parser_maxPrec;
lean_object* l_Lean_PrettyPrinter_Parenthesizer_addPrecCheck___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_numLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_strLit_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PrettyPrinter_Formatter_andthen_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many1_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_many_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinParserAttribute(lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Parser_registerBuiltinDynamicParserAttribute(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_checkPrec(lean_object*);
lean_object* l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "builtin_prio_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 62, 206, 117, 66, 228, 175, 129)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Category"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "prio"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(17, 107, 2, 165, 49, 177, 197, 179)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 76, 58, 155, 4, 51, 160, 88)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(91, 65, 23, 56, 30, 174, 149, 234)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__12_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(230, 189, 113, 236, 149, 162, 75, 196)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__13_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(111, 57, 71, 43, 179, 220, 236, 177)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__14_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(202, 92, 158, 115, 76, 147, 54, 64)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__15_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__16_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 246, 167, 225, 21, 233, 106, 254)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__17_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__18_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(250, 97, 220, 102, 149, 211, 249, 136)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__19_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 7, 108, 95, 197, 217, 133, 199)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__20_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(14, 97, 179, 25, 134, 12, 176, 74)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__21_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 94, 63, 146, 254, 93, 55, 154)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1857506627) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(36, 161, 140, 23, 58, 214, 182, 21)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__23_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(139, 142, 31, 72, 26, 190, 190, 177)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__25_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(203, 51, 32, 68, 30, 111, 172, 29)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__27_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(222, 234, 60, 150, 20, 158, 160, 29)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "prio_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__29_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(101, 192, 223, 117, 127, 39, 55, 31)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(122, 247, 65, 238, 243, 154, 137, 247)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "builtin_attr_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__0_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(106, 71, 13, 255, 49, 148, 157, 196)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "attr"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(36, 45, 52, 71, 90, 26, 52, 161)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(6, 185, 156, 91, 160, 100, 34, 125)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__22_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),((lean_object*)(((size_t)(249558774) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(227, 21, 132, 234, 73, 97, 121, 52)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__4_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__24_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(56, 226, 234, 163, 45, 129, 3, 160)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__5_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__26_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(220, 41, 138, 128, 134, 189, 149, 202)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(69, 34, 192, 223, 89, 207, 46, 132)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "attr_parser"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__8_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(165, 118, 202, 56, 176, 36, 29, 40)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(69, 57, 207, 35, 177, 108, 73, 87)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Priority_numPrio___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Priority_numPrio___closed__0;
static lean_once_cell_t l_Lean_Parser_Priority_numPrio___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Priority_numPrio___closed__1;
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Priority"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0_value;
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "numPrio"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(51, 3, 140, 143, 23, 192, 98, 73)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value_aux_2),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(62, 56, 13, 47, 63, 33, 83, 156)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__1_value),((lean_object*)(((size_t)(66) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(30) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__4_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Priority_numPrio_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Priority_numPrio_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Priority_numPrio_formatter___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0;
static const lean_closure_object l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_numLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Parser_Attr_simple___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lean_Parser_Attr_simple___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_simple___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lean_Parser_Attr_simple___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_simple___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_simple___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(113) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__1_value),((lean_object*)(((size_t)(113) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(36) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_Attr_simple_formatter___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_priorityParser_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__3_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formatter"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(142, 229, 191, 246, 47, 244, 239, 84)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ident_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_ppSpace_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_priorityParser_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_simple_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_simple_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "parenthesizer"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_simple___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(194, 123, 213, 83, 58, 188, 82, 100)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_macro___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "macro"};
static const lean_object* l_Lean_Parser_Attr_macro___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_macro___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_object* l_Lean_Parser_Attr_macro___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__2;
static const lean_string_object l_Lean_Parser_Attr_macro___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "macro "};
static const lean_object* l_Lean_Parser_Attr_macro___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_macro___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_macro___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_macro___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__1_value),((lean_object*)(((size_t)(73) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(38) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__4_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_macro_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(28, 38, 245, 236, 190, 18, 200, 255)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_macro_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_macro___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_macro_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_macro_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_macro___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 202, 70, 6, 8, 133, 137, 74)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 178, 73, 41, 185, 64, 194, 161)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_export___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "export"};
static const lean_object* l_Lean_Parser_Attr_export___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_export___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_export___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_object* l_Lean_Parser_Attr_export___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_export___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__2;
static const lean_string_object l_Lean_Parser_Attr_export___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "export "};
static const lean_object* l_Lean_Parser_Attr_export___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_export___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_export___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_export___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(74) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__1_value),((lean_object*)(((size_t)(74) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(39) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__4_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_export_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_export_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_export_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(78, 151, 18, 12, 107, 65, 124, 243)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_export_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_export___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_export_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_export_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_export___closed__0_value),LEAN_SCALAR_PTR_LITERAL(43, 70, 85, 26, 88, 142, 178, 115)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 202, 214, 57, 107, 104, 12, 237)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_recursor___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "recursor"};
static const lean_object* l_Lean_Parser_Attr_recursor___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_recursor___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 29, 106, 40, 200, 118, 31, 85)}};
static const lean_object* l_Lean_Parser_Attr_recursor___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__2;
static const lean_string_object l_Lean_Parser_Attr_recursor___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "recursor "};
static const lean_object* l_Lean_Parser_Attr_recursor___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_recursor___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_recursor___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_recursor___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(101) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__1_value),((lean_object*)(((size_t)(101) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(42) << 1) | 1)),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__4_value),((lean_object*)(((size_t)(35) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_recursor_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 29, 106, 40, 200, 118, 31, 85)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 2, 9, 92, 3, 102, 239, 12)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_recursor_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_recursor___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_recursor_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_recursor___closed__0_value),LEAN_SCALAR_PTR_LITERAL(90, 29, 106, 40, 200, 118, 31, 85)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 47, 55, 250, 244, 14, 194, 236)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_class___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "class"};
static const lean_object* l_Lean_Parser_Attr_class___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_class___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_class___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_object* l_Lean_Parser_Attr_class___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_class___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_class___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_class___closed__6;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(69) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__1_value),((lean_object*)(((size_t)(69) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(43) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__4_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_class_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_class_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_class_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_class_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_class_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_class_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_class_formatter___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 161, 70, 79, 21, 219, 219, 187)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_class_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_class_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_class_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_class___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_class_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_class_parenthesizer___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_class___closed__0_value),LEAN_SCALAR_PTR_LITERAL(149, 14, 146, 125, 144, 1, 65, 64)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 183, 192, 212, 26, 200, 245, 145)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_instance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lean_Parser_Attr_instance___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_instance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_object* l_Lean_Parser_Attr_instance___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_instance___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_instance___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__1_value),((lean_object*)(((size_t)(112) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(44) << 1) | 1)),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__4_value),((lean_object*)(((size_t)(37) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 225, 246, 137, 65, 110, 208, 211)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_instance_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_instance_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(128, 1, 138, 227, 223, 112, 103, 179)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(165, 44, 88, 85, 16, 38, 144, 111)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_default__instance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "default_instance"};
static const lean_object* l_Lean_Parser_Attr_default__instance___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_default__instance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 215, 188, 14, 80, 67, 224, 116)}};
static const lean_object* l_Lean_Parser_Attr_default__instance___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_default__instance___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_default__instance___closed__7;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(138) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__1_value),((lean_object*)(((size_t)(138) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(45) << 1) | 1)),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__4_value),((lean_object*)(((size_t)(43) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_formatter___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 215, 188, 14, 80, 67, 224, 116)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(140, 112, 171, 71, 131, 75, 3, 107)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_instance_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_default__instance___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 215, 188, 14, 80, 67, 224, 116)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(112, 170, 216, 200, 27, 58, 15, 9)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_specialize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "specialize"};
static const lean_object* l_Lean_Parser_Attr_specialize___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_specialize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 28, 50, 2, 100, 118, 84, 52)}};
static const lean_object* l_Lean_Parser_Attr_specialize___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_specialize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_specialize___closed__10;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(134) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__1_value),((lean_object*)(((size_t)(134) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(46) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_specialize_formatter___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 28, 50, 2, 100, 118, 84, 52)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(120, 88, 144, 13, 224, 198, 112, 184)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_specialize_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_specialize___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_specialize_parenthesizer___closed__6_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_specialize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 28, 50, 2, 100, 118, 84, 52)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(132, 146, 129, 38, 159, 182, 72, 140)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implemented_by"};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_implemented__by___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_implemented__by___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_implemented__by___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_implemented__by___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 103, 145, 232, 182, 226, 220, 13)}};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__2;
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "implemented_by "};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__3_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__4;
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__5_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__6;
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "early"};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__7_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__8;
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__9 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__9_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__10;
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__11 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__11_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__12;
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__13 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__13_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__14;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__15;
static const lean_string_object l_Lean_Parser_Attr_implemented__by___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ") "};
static const lean_object* l_Lean_Parser_Attr_implemented__by___closed__16 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__16_value;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__17;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__18;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__19;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__20;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__21;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__22;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__23;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__24;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__25;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__26;
static lean_once_cell_t l_Lean_Parser_Attr_implemented__by___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_implemented__by___closed__27;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 105, .m_capacity = 105, .m_length = 104, .m_data = "`@[implemented_by f]` and `@[implemented_by (early := true) f]` (see `Lean.Compiler.implementedByAttr`)."};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__9_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__5_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__16_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__8_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__7_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__8_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__9 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__9_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__4_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__9_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__10 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__10_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__3_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__10_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__11 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__11_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__11_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__12 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__12_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__12_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__13 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__13_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__13_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__14 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__14_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__14_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__15 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__15_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_formatter___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__15_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_formatter___closed__16 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_formatter___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 103, 145, 232, 182, 226, 220, 13)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 149, 139, 56, 146, 46, 57, 112)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__3_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__7_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__9_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__13_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__5_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__16_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__8_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__7_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__8_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__9 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__9_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__4_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__9_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__10 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__10_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__3_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__10_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__11 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__11_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__11_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__12 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__12_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__12_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__13 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__13_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__13_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__14 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__14_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__14_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__15 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__15_value;
static const lean_closure_object l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__15_value)} };
static const lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__16 = (const lean_object*)&l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__16_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_implemented__by___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 103, 145, 232, 182, 226, 220, 13)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(8, 51, 102, 96, 127, 116, 46, 150)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_externEntry___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "externEntry"};
static const lean_object* l_Lean_Parser_Attr_externEntry___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_externEntry___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 120, 255, 6, 244, 195, 179, 180)}};
static const lean_object* l_Lean_Parser_Attr_externEntry___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__4;
static const lean_string_object l_Lean_Parser_Attr_externEntry___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "inline "};
static const lean_object* l_Lean_Parser_Attr_externEntry___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_externEntry___closed__5_value;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__9;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__10;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__11;
static lean_once_cell_t l_Lean_Parser_Attr_externEntry___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_externEntry___closed__12;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry;
static const lean_string_object l_Lean_Parser_Attr_extern___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "extern"};
static const lean_object* l_Lean_Parser_Attr_extern___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_extern___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 126, 252, 124, 35, 62, 180, 112)}};
static const lean_object* l_Lean_Parser_Attr_extern___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_extern___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(51) << 1) | 1)),((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__1_value),((lean_object*)(((size_t)(93) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(50) << 1) | 1)),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__4_value),((lean_object*)(((size_t)(33) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_formatter___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__4_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_formatter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_formatter___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 120, 255, 6, 244, 195, 179, 180)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(230, 209, 196, 10, 229, 104, 88, 235)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_extern_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_extern_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_extern_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_extern_formatter___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extern_formatter___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_formatter___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 126, 252, 124, 35, 62, 180, 112)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(15, 8, 91, 19, 215, 171, 128, 249)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__5_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_optional_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_strLit_parenthesizer___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__4_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__6_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7_value;
static const lean_closure_object l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__7_value)} };
static const lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8 = (const lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_externEntry___closed__0_value),LEAN_SCALAR_PTR_LITERAL(115, 120, 255, 6, 244, 195, 179, 180)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(202, 76, 95, 57, 63, 140, 230, 190)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_extern_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_extern___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_extern_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_extern_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_nonReservedSymbol_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_extern_parenthesizer___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_extern_parenthesizer___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_extern_parenthesizer___closed__5;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_extern___closed__0_value),LEAN_SCALAR_PTR_LITERAL(174, 126, 252, 124, 35, 62, 180, 112)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 28, 254, 72, 236, 212, 80, 70)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_tactic__alt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_alt"};
static const lean_object* l_Lean_Parser_Attr_tactic__alt___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__alt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_object* l_Lean_Parser_Attr_tactic__alt___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__alt___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__alt___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 208, .m_capacity = 208, .m_length = 207, .m_data = "Declares this tactic to be an alias or alternative form of an existing tactic.\n\nThis has the following effects:\n* The alias relationship is saved\n* The docstring is taken from the original tactic, if present"};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(61) << 1) | 1)),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__1_value),((lean_object*)(((size_t)(34) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(60) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(224, 174, 15, 101, 134, 196, 196, 73)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__alt___closed__0_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 168, 96, 206, 229, 58, 101)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(124, 105, 16, 60, 122, 191, 76, 132)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_tactic__tag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "tactic_tag"};
static const lean_object* l_Lean_Parser_Attr_tactic__tag___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__tag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 70, 119, 85, 147, 120, 119, 38)}};
static const lean_object* l_Lean_Parser_Attr_tactic__tag___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__tag___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__tag___closed__8;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 95, .m_capacity = 95, .m_length = 94, .m_data = "Adds one or more tags to a tactic.\n\nTags should be applied to the canonical names for tactics."};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___boxed(lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(23) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(69) << 1) | 1)),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__0_value),((lean_object*)(((size_t)(23) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__1_value),((lean_object*)(((size_t)(42) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(27) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(68) << 1) | 1)),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__3_value),((lean_object*)(((size_t)(27) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__4_value),((lean_object*)(((size_t)(39) << 1) | 1))}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5_value;
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__2_value),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__5_value)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_formatter___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 70, 119, 85, 147, 120, 119, 38)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 156, 211, 23, 66, 168, 121, 85)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_many1_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__tag___closed__0_value),LEAN_SCALAR_PTR_LITERAL(146, 70, 119, 85, 147, 120, 119, 38)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 101, 40, 71, 142, 150, 231, 238)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___boxed(lean_object*);
static const lean_string_object l_Lean_Parser_Attr_tactic__name___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "tactic_name"};
static const lean_object* l_Lean_Parser_Attr_tactic__name___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value;
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lean_Parser_Attr_tactic__name___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 253, 162, 55, 13, 176, 86, 10)}};
static const lean_object* l_Lean_Parser_Attr_tactic__name___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__2;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__3;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__4;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__5;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__6;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__7;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__8;
static lean_once_cell_t l_Lean_Parser_Attr_tactic__name___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Parser_Attr_tactic__name___closed__9;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 391, .m_capacity = 391, .m_length = 390, .m_data = "Sets the tactic's name.\n\nOrdinarily, tactic names are automatically set to the first token in the tactic's parser. If this\nprocess fails, or if the tactic's name should be multiple tokens (e.g. `let rec`), then this\nattribute can be used to provide a name.\n\nThe tactic's name is used in documentation as well as in completion. Thus, the name should be a\nvalid prefix of the tactic's syntax."};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_formatter___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_formatter___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_orelse_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_formatter___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_formatter___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_formatter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_leadingNode_formatter___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_formatter___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_formatter___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 253, 162, 55, 13, 176, 86, 10)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(20, 115, 32, 33, 176, 74, 73, 63)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___boxed(lean_object*);
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_mkAntiquot_parenthesizer___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_symbol_parenthesizer___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_orelse_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_externEntry_parenthesizer___closed__5_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_simple_parenthesizer___closed__2_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__2_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__1_value),((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__3_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4_value;
static const lean_closure_object l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed, .m_arity = 8, .m_num_fixed = 3, .m_objs = {((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__1_value),((lean_object*)(((size_t)(1024) << 1) | 1)),((lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__4_value)} };
static const lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5 = (const lean_object*)&l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__2_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_1),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__11_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_2),((lean_object*)&l_Lean_Parser_Attr_tactic__name___closed__0_value),LEAN_SCALAR_PTR_LITERAL(121, 253, 162, 55, 13, 176, 86, 10)}};
static const lean_ctor_object l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value_aux_3),((lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 5, 121, 30, 21, 6, 250, 91)}};
static const lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0 = (const lean_object*)&l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11();
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; uint8_t v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_73_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_74_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__6_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_75_ = 2;
v___x_76_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__28_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_77_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_73_, v___x_74_, v___x_75_, v___x_76_);
if (lean_obj_tag(v___x_77_) == 0)
{
lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
lean_dec_ref_known(v___x_77_, 1);
v___x_78_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__30_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_79_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_80_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v___x_78_, v___x_79_, v___x_76_);
return v___x_80_;
}
else
{
return v___x_77_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2____boxed(lean_object* v_a_81_){
_start:
{
lean_object* v_res_82_; 
v_res_82_ = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_();
return v_res_82_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_110_; lean_object* v___x_111_; uint8_t v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_110_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__1_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_111_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__3_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_112_ = 1;
v___x_113_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__7_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_114_ = l_Lean_Parser_registerBuiltinParserAttribute(v___x_110_, v___x_111_, v___x_112_, v___x_113_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
lean_dec_ref_known(v___x_114_, 1);
v___x_115_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__9_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_116_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_117_ = l_Lean_Parser_registerBuiltinDynamicParserAttribute(v___x_115_, v___x_116_, v___x_113_);
return v___x_117_;
}
else
{
return v___x_114_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2____boxed(lean_object* v_a_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_();
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser(lean_object* v_rbp_120_){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_122_ = l_Lean_Parser_categoryParser(v___x_121_, v_rbp_120_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser(lean_object* v_rbp_123_){
_start:
{
lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_124_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_125_ = l_Lean_Parser_categoryParser(v___x_124_, v_rbp_123_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg(lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_131_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_132_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_131_, v_a_126_, v_a_127_, v_a_128_, v_a_129_);
return v___x_132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___redArg___boxed(lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_, lean_object* v_a_137_){
_start:
{
lean_object* v_res_138_; 
v_res_138_ = l_Lean_Parser_priorityParser_formatter___redArg(v_a_133_, v_a_134_, v_a_135_, v_a_136_);
lean_dec(v_a_136_);
lean_dec_ref(v_a_135_);
lean_dec(v_a_134_);
lean_dec_ref(v_a_133_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter(lean_object* v_rbp_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_){
_start:
{
lean_object* v___x_145_; 
v___x_145_ = l_Lean_Parser_priorityParser_formatter___redArg(v_a_140_, v_a_141_, v_a_142_, v_a_143_);
return v___x_145_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_formatter___boxed(lean_object* v_rbp_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_, lean_object* v_a_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_Parser_priorityParser_formatter(v_rbp_146_, v_a_147_, v_a_148_, v_a_149_, v_a_150_);
lean_dec(v_a_150_);
lean_dec_ref(v_a_149_);
lean_dec(v_a_148_);
lean_dec_ref(v_a_147_);
lean_dec(v_rbp_146_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer(lean_object* v_rbp_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_, lean_object* v_a_157_){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_160_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_159_, v_rbp_153_, v_a_154_, v_a_155_, v_a_156_, v_a_157_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_priorityParser_parenthesizer___boxed(lean_object* v_rbp_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l_Lean_Parser_priorityParser_parenthesizer(v_rbp_161_, v_a_162_, v_a_163_, v_a_164_, v_a_165_);
lean_dec(v_a_165_);
lean_dec_ref(v_a_164_);
lean_dec(v_a_163_);
lean_dec_ref(v_a_162_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg(lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_174_ = l_Lean_PrettyPrinter_Formatter_categoryParser_formatter(v___x_173_, v_a_168_, v_a_169_, v_a_170_, v_a_171_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___redArg___boxed(lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Parser_attrParser_formatter___redArg(v_a_175_, v_a_176_, v_a_177_, v_a_178_);
lean_dec(v_a_178_);
lean_dec_ref(v_a_177_);
lean_dec(v_a_176_);
lean_dec_ref(v_a_175_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter(lean_object* v_rbp_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v___x_187_; 
v___x_187_ = l_Lean_Parser_attrParser_formatter___redArg(v_a_182_, v_a_183_, v_a_184_, v_a_185_);
return v___x_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_formatter___boxed(lean_object* v_rbp_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v_a_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l_Lean_Parser_attrParser_formatter(v_rbp_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_rbp_188_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer(lean_object* v_rbp_195_, lean_object* v_a_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_){
_start:
{
lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_201_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_202_ = l_Lean_PrettyPrinter_Parenthesizer_categoryParser_parenthesizer(v___x_201_, v_rbp_195_, v_a_196_, v_a_197_, v_a_198_, v_a_199_);
return v___x_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_attrParser_parenthesizer___boxed(lean_object* v_rbp_203_, lean_object* v_a_204_, lean_object* v_a_205_, lean_object* v_a_206_, lean_object* v_a_207_, lean_object* v_a_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_Parser_attrParser_parenthesizer(v_rbp_203_, v_a_204_, v_a_205_, v_a_206_, v_a_207_);
lean_dec(v_a_207_);
lean_dec_ref(v_a_206_);
lean_dec(v_a_205_);
lean_dec_ref(v_a_204_);
return v_res_209_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio___closed__0(void){
_start:
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = l_Lean_Parser_maxPrec;
v___x_211_ = l_Lean_Parser_checkPrec(v___x_210_);
return v___x_211_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio___closed__1(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_212_ = l_Lean_Parser_numLit;
v___x_213_ = lean_obj_once(&l_Lean_Parser_Priority_numPrio___closed__0, &l_Lean_Parser_Priority_numPrio___closed__0_once, _init_l_Lean_Parser_Priority_numPrio___closed__0);
v___x_214_ = l_Lean_Parser_andthen(v___x_213_, v___x_212_);
return v___x_214_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio(void){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_obj_once(&l_Lean_Parser_Priority_numPrio___closed__1, &l_Lean_Parser_Priority_numPrio___closed__1_once, _init_l_Lean_Parser_Priority_numPrio___closed__1);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1(){
_start:
{
lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_224_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_225_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2));
v___x_226_ = l_Lean_Parser_Priority_numPrio;
v___x_227_ = lean_unsigned_to_nat(1000u);
v___x_228_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_224_, v___x_225_, v___x_226_, v___x_227_);
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___boxed(lean_object* v_a_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1();
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3(){
_start:
{
lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v___x_257_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1___closed__2));
v___x_258_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___closed__6));
v___x_259_ = l_Lean_addBuiltinDeclarationRanges(v___x_257_, v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3___boxed(lean_object* v_a_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3();
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter(lean_object* v_a_263_, lean_object* v_a_264_, lean_object* v_a_265_, lean_object* v_a_266_){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_checkPrec_formatter___boxed), 5, 0);
v___x_269_ = ((lean_object*)(l_Lean_Parser_Priority_numPrio_formatter___closed__0));
v___x_270_ = l_Lean_PrettyPrinter_Formatter_andthen_formatter(v___x_268_, v___x_269_, v_a_263_, v_a_264_, v_a_265_, v_a_266_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_formatter___boxed(lean_object* v_a_271_, lean_object* v_a_272_, lean_object* v_a_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
lean_object* v_res_276_; 
v_res_276_ = l_Lean_Parser_Priority_numPrio_formatter(v_a_271_, v_a_272_, v_a_273_, v_a_274_);
lean_dec(v_a_274_);
lean_dec_ref(v_a_273_);
lean_dec(v_a_272_);
lean_dec_ref(v_a_271_);
return v_res_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0(lean_object* v___x_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_PrettyPrinter_Parenthesizer_addPrecCheck___redArg(v___x_277_, v___y_279_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0___boxed(lean_object* v___x_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0(v___x_284_, v___y_285_, v___y_286_, v___y_287_, v___y_288_);
lean_dec(v___y_288_);
lean_dec_ref(v___y_287_);
lean_dec(v___y_286_);
lean_dec_ref(v___y_285_);
return v_res_290_;
}
}
static lean_object* _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0(void){
_start:
{
lean_object* v___x_291_; lean_object* v___f_292_; 
v___x_291_ = l_Lean_Parser_maxPrec;
v___f_292_ = lean_alloc_closure((void*)(l_Lean_Parser_Priority_numPrio_parenthesizer___lam__0___boxed), 6, 1);
lean_closure_set(v___f_292_, 0, v___x_291_);
return v___f_292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer(lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_, lean_object* v_a_297_){
_start:
{
lean_object* v___f_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___f_299_ = lean_obj_once(&l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0, &l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0_once, _init_l_Lean_Parser_Priority_numPrio_parenthesizer___closed__0);
v___x_300_ = ((lean_object*)(l_Lean_Parser_Priority_numPrio_parenthesizer___closed__1));
v___x_301_ = l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer(v___f_299_, v___x_300_, v_a_294_, v_a_295_, v_a_296_, v_a_297_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Priority_numPrio_parenthesizer___boxed(lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_){
_start:
{
lean_object* v_res_307_; 
v_res_307_ = l_Lean_Parser_Priority_numPrio_parenthesizer(v_a_302_, v_a_303_, v_a_304_, v_a_305_);
lean_dec(v_a_305_);
lean_dec_ref(v_a_304_);
lean_dec(v_a_303_);
lean_dec_ref(v_a_302_);
return v_res_307_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__2(void){
_start:
{
uint8_t v___x_314_; uint8_t v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_314_ = 0;
v___x_315_ = 1;
v___x_316_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_317_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__0));
v___x_318_ = l_Lean_Parser_mkAntiquot(v___x_317_, v___x_316_, v___x_315_, v___x_314_);
return v___x_318_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__3(void){
_start:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_319_ = lean_unsigned_to_nat(0u);
v___x_320_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__31_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_));
v___x_321_ = l_Lean_Parser_categoryParser(v___x_320_, v___x_319_);
return v___x_321_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__4(void){
_start:
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_322_ = l_Lean_Parser_ident;
v___x_323_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__3, &l_Lean_Parser_Attr_simple___closed__3_once, _init_l_Lean_Parser_Attr_simple___closed__3);
v___x_324_ = l_Lean_Parser_orelse(v___x_323_, v___x_322_);
return v___x_324_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__5(void){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_325_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__4, &l_Lean_Parser_Attr_simple___closed__4_once, _init_l_Lean_Parser_Attr_simple___closed__4);
v___x_326_ = l_Lean_Parser_skip;
v___x_327_ = l_Lean_Parser_andthen(v___x_326_, v___x_325_);
return v___x_327_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__6(void){
_start:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__5, &l_Lean_Parser_Attr_simple___closed__5_once, _init_l_Lean_Parser_Attr_simple___closed__5);
v___x_329_ = l_Lean_Parser_optional(v___x_328_);
return v___x_329_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__7(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_330_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__6, &l_Lean_Parser_Attr_simple___closed__6_once, _init_l_Lean_Parser_Attr_simple___closed__6);
v___x_331_ = l_Lean_Parser_ident;
v___x_332_ = l_Lean_Parser_andthen(v___x_331_, v___x_330_);
return v___x_332_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__8(void){
_start:
{
lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_333_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__7, &l_Lean_Parser_Attr_simple___closed__7_once, _init_l_Lean_Parser_Attr_simple___closed__7);
v___x_334_ = lean_unsigned_to_nat(1024u);
v___x_335_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_336_ = l_Lean_Parser_leadingNode(v___x_335_, v___x_334_, v___x_333_);
return v___x_336_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__9(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__8, &l_Lean_Parser_Attr_simple___closed__8_once, _init_l_Lean_Parser_Attr_simple___closed__8);
v___x_338_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__2, &l_Lean_Parser_Attr_simple___closed__2_once, _init_l_Lean_Parser_Attr_simple___closed__2);
v___x_339_ = l_Lean_Parser_withAntiquot(v___x_338_, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple___closed__10(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_340_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__9, &l_Lean_Parser_Attr_simple___closed__9_once, _init_l_Lean_Parser_Attr_simple___closed__9);
v___x_341_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_342_ = l_Lean_Parser_withCache(v___x_341_, v___x_340_);
return v___x_342_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_simple(void){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__10, &l_Lean_Parser_Attr_simple___closed__10_once, _init_l_Lean_Parser_Attr_simple___closed__10);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1(){
_start:
{
lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; 
v___x_345_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_346_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_347_ = l_Lean_Parser_Attr_simple;
v___x_348_ = lean_unsigned_to_nat(1000u);
v___x_349_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_345_, v___x_346_, v___x_347_, v___x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1___boxed(lean_object* v_a_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1();
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3(){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_379_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___closed__6));
v___x_380_ = l_Lean_addBuiltinDeclarationRanges(v___x_378_, v___x_379_);
return v___x_380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3___boxed(lean_object* v_a_381_){
_start:
{
lean_object* v_res_382_; 
v_res_382_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3();
return v_res_382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0(lean_object* v___y_383_, lean_object* v___y_384_, lean_object* v___y_385_, lean_object* v___y_386_){
_start:
{
lean_object* v___x_388_; 
v___x_388_ = l_Lean_PrettyPrinter_Formatter_pushLine___redArg(v___y_384_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___lam__0___boxed(lean_object* v___y_389_, lean_object* v___y_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_){
_start:
{
lean_object* v_res_394_; 
v_res_394_ = l_Lean_Parser_Attr_simple_formatter___lam__0(v___y_389_, v___y_390_, v___y_391_, v___y_392_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v___y_390_);
lean_dec_ref(v___y_389_);
return v_res_394_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter(lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_){
_start:
{
lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_426_ = ((lean_object*)(l_Lean_Parser_Attr_simple_formatter___closed__1));
v___x_427_ = ((lean_object*)(l_Lean_Parser_Attr_simple_formatter___closed__8));
v___x_428_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_426_, v___x_427_, v_a_421_, v_a_422_, v_a_423_, v_a_424_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_formatter___boxed(lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_Parser_Attr_simple_formatter(v_a_429_, v_a_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7(){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_443_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_444_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_445_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___closed__1));
v___x_446_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_simple_formatter___boxed), 5, 0);
v___x_447_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_443_, v___x_444_, v___x_445_, v___x_446_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7___boxed(lean_object* v_a_448_){
_start:
{
lean_object* v_res_449_; 
v_res_449_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7();
return v_res_449_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer(lean_object* v_a_476_, lean_object* v_a_477_, lean_object* v_a_478_, lean_object* v_a_479_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_481_ = ((lean_object*)(l_Lean_Parser_Attr_simple_parenthesizer___closed__0));
v___x_482_ = ((lean_object*)(l_Lean_Parser_Attr_simple_parenthesizer___closed__8));
v___x_483_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_481_, v___x_482_, v_a_476_, v_a_477_, v_a_478_, v_a_479_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_simple_parenthesizer___boxed(lean_object* v_a_484_, lean_object* v_a_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = l_Lean_Parser_Attr_simple_parenthesizer(v_a_484_, v_a_485_, v_a_486_, v_a_487_);
lean_dec(v_a_487_);
lean_dec_ref(v_a_486_);
lean_dec(v_a_485_);
lean_dec_ref(v_a_484_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11(){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; 
v___x_498_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_499_ = ((lean_object*)(l_Lean_Parser_Attr_simple___closed__1));
v___x_500_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___closed__1));
v___x_501_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_simple_parenthesizer___boxed), 5, 0);
v___x_502_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_498_, v___x_499_, v___x_500_, v___x_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11___boxed(lean_object* v_a_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11();
return v_res_504_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__2(void){
_start:
{
uint8_t v___x_511_; uint8_t v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_511_ = 0;
v___x_512_ = 1;
v___x_513_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_514_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__0));
v___x_515_ = l_Lean_Parser_mkAntiquot(v___x_514_, v___x_513_, v___x_512_, v___x_511_);
return v___x_515_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__4(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__3));
v___x_518_ = l_Lean_Parser_symbol(v___x_517_);
return v___x_518_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__5(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_519_ = l_Lean_Parser_ident;
v___x_520_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__4, &l_Lean_Parser_Attr_macro___closed__4_once, _init_l_Lean_Parser_Attr_macro___closed__4);
v___x_521_ = l_Lean_Parser_andthen(v___x_520_, v___x_519_);
return v___x_521_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__6(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; 
v___x_522_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__5, &l_Lean_Parser_Attr_macro___closed__5_once, _init_l_Lean_Parser_Attr_macro___closed__5);
v___x_523_ = lean_unsigned_to_nat(1024u);
v___x_524_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_525_ = l_Lean_Parser_leadingNode(v___x_524_, v___x_523_, v___x_522_);
return v___x_525_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__7(void){
_start:
{
lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; 
v___x_526_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__6, &l_Lean_Parser_Attr_macro___closed__6_once, _init_l_Lean_Parser_Attr_macro___closed__6);
v___x_527_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__2, &l_Lean_Parser_Attr_macro___closed__2_once, _init_l_Lean_Parser_Attr_macro___closed__2);
v___x_528_ = l_Lean_Parser_withAntiquot(v___x_527_, v___x_526_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro___closed__8(void){
_start:
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__7, &l_Lean_Parser_Attr_macro___closed__7_once, _init_l_Lean_Parser_Attr_macro___closed__7);
v___x_530_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_531_ = l_Lean_Parser_withCache(v___x_530_, v___x_529_);
return v___x_531_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_macro(void){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = lean_obj_once(&l_Lean_Parser_Attr_macro___closed__8, &l_Lean_Parser_Attr_macro___closed__8_once, _init_l_Lean_Parser_Attr_macro___closed__8);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1(){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_534_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_535_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_536_ = l_Lean_Parser_Attr_macro;
v___x_537_ = lean_unsigned_to_nat(1000u);
v___x_538_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_534_, v___x_535_, v___x_536_, v___x_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1___boxed(lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1();
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3(){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_567_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_568_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___closed__6));
v___x_569_ = l_Lean_addBuiltinDeclarationRanges(v___x_567_, v___x_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3___boxed(lean_object* v_a_570_){
_start:
{
lean_object* v_res_571_; 
v_res_571_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3();
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter(lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v___x_593_ = ((lean_object*)(l_Lean_Parser_Attr_macro_formatter___closed__0));
v___x_594_ = ((lean_object*)(l_Lean_Parser_Attr_macro_formatter___closed__3));
v___x_595_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_593_, v___x_594_, v_a_588_, v_a_589_, v_a_590_, v_a_591_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_formatter___boxed(lean_object* v_a_596_, lean_object* v_a_597_, lean_object* v_a_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Lean_Parser_Attr_macro_formatter(v_a_596_, v_a_597_, v_a_598_, v_a_599_);
lean_dec(v_a_599_);
lean_dec_ref(v_a_598_);
lean_dec(v_a_597_);
lean_dec_ref(v_a_596_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7(){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v___x_609_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_610_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_611_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___closed__0));
v___x_612_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_macro_formatter___boxed), 5, 0);
v___x_613_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_609_, v___x_610_, v___x_611_, v___x_612_);
return v___x_613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7___boxed(lean_object* v_a_614_){
_start:
{
lean_object* v_res_615_; 
v_res_615_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7();
return v_res_615_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer(lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_){
_start:
{
lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; 
v___x_637_ = ((lean_object*)(l_Lean_Parser_Attr_macro_parenthesizer___closed__0));
v___x_638_ = ((lean_object*)(l_Lean_Parser_Attr_macro_parenthesizer___closed__3));
v___x_639_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_637_, v___x_638_, v_a_632_, v_a_633_, v_a_634_, v_a_635_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_macro_parenthesizer___boxed(lean_object* v_a_640_, lean_object* v_a_641_, lean_object* v_a_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_Parser_Attr_macro_parenthesizer(v_a_640_, v_a_641_, v_a_642_, v_a_643_);
lean_dec(v_a_643_);
lean_dec_ref(v_a_642_);
lean_dec(v_a_641_);
lean_dec_ref(v_a_640_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11(){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_653_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_654_ = ((lean_object*)(l_Lean_Parser_Attr_macro___closed__1));
v___x_655_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___closed__0));
v___x_656_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_macro_parenthesizer___boxed), 5, 0);
v___x_657_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_653_, v___x_654_, v___x_655_, v___x_656_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11___boxed(lean_object* v_a_658_){
_start:
{
lean_object* v_res_659_; 
v_res_659_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11();
return v_res_659_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__2(void){
_start:
{
uint8_t v___x_666_; uint8_t v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_666_ = 0;
v___x_667_ = 1;
v___x_668_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_669_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__0));
v___x_670_ = l_Lean_Parser_mkAntiquot(v___x_669_, v___x_668_, v___x_667_, v___x_666_);
return v___x_670_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__4(void){
_start:
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__3));
v___x_673_ = l_Lean_Parser_symbol(v___x_672_);
return v___x_673_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__5(void){
_start:
{
lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_674_ = l_Lean_Parser_ident;
v___x_675_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__4, &l_Lean_Parser_Attr_export___closed__4_once, _init_l_Lean_Parser_Attr_export___closed__4);
v___x_676_ = l_Lean_Parser_andthen(v___x_675_, v___x_674_);
return v___x_676_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__6(void){
_start:
{
lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_677_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__5, &l_Lean_Parser_Attr_export___closed__5_once, _init_l_Lean_Parser_Attr_export___closed__5);
v___x_678_ = lean_unsigned_to_nat(1024u);
v___x_679_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_680_ = l_Lean_Parser_leadingNode(v___x_679_, v___x_678_, v___x_677_);
return v___x_680_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__7(void){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_681_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__6, &l_Lean_Parser_Attr_export___closed__6_once, _init_l_Lean_Parser_Attr_export___closed__6);
v___x_682_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__2, &l_Lean_Parser_Attr_export___closed__2_once, _init_l_Lean_Parser_Attr_export___closed__2);
v___x_683_ = l_Lean_Parser_withAntiquot(v___x_682_, v___x_681_);
return v___x_683_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export___closed__8(void){
_start:
{
lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_684_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__7, &l_Lean_Parser_Attr_export___closed__7_once, _init_l_Lean_Parser_Attr_export___closed__7);
v___x_685_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_686_ = l_Lean_Parser_withCache(v___x_685_, v___x_684_);
return v___x_686_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_export(void){
_start:
{
lean_object* v___x_687_; 
v___x_687_ = lean_obj_once(&l_Lean_Parser_Attr_export___closed__8, &l_Lean_Parser_Attr_export___closed__8_once, _init_l_Lean_Parser_Attr_export___closed__8);
return v___x_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1(){
_start:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_689_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_690_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_691_ = l_Lean_Parser_Attr_export;
v___x_692_ = lean_unsigned_to_nat(1000u);
v___x_693_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_689_, v___x_690_, v___x_691_, v___x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1___boxed(lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1();
return v_res_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3(){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_722_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_723_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___closed__6));
v___x_724_ = l_Lean_addBuiltinDeclarationRanges(v___x_722_, v___x_723_);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3___boxed(lean_object* v_a_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3();
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter(lean_object* v_a_743_, lean_object* v_a_744_, lean_object* v_a_745_, lean_object* v_a_746_){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_748_ = ((lean_object*)(l_Lean_Parser_Attr_export_formatter___closed__0));
v___x_749_ = ((lean_object*)(l_Lean_Parser_Attr_export_formatter___closed__3));
v___x_750_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_748_, v___x_749_, v_a_743_, v_a_744_, v_a_745_, v_a_746_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_formatter___boxed(lean_object* v_a_751_, lean_object* v_a_752_, lean_object* v_a_753_, lean_object* v_a_754_, lean_object* v_a_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = l_Lean_Parser_Attr_export_formatter(v_a_751_, v_a_752_, v_a_753_, v_a_754_);
lean_dec(v_a_754_);
lean_dec_ref(v_a_753_);
lean_dec(v_a_752_);
lean_dec_ref(v_a_751_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7(){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; 
v___x_764_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_765_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_766_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___closed__0));
v___x_767_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_export_formatter___boxed), 5, 0);
v___x_768_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_764_, v___x_765_, v___x_766_, v___x_767_);
return v___x_768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7___boxed(lean_object* v_a_769_){
_start:
{
lean_object* v_res_770_; 
v_res_770_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7();
return v_res_770_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer(lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_, lean_object* v_a_790_){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; 
v___x_792_ = ((lean_object*)(l_Lean_Parser_Attr_export_parenthesizer___closed__0));
v___x_793_ = ((lean_object*)(l_Lean_Parser_Attr_export_parenthesizer___closed__3));
v___x_794_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_792_, v___x_793_, v_a_787_, v_a_788_, v_a_789_, v_a_790_);
return v___x_794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_export_parenthesizer___boxed(lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Lean_Parser_Attr_export_parenthesizer(v_a_795_, v_a_796_, v_a_797_, v_a_798_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11(){
_start:
{
lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_808_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_809_ = ((lean_object*)(l_Lean_Parser_Attr_export___closed__1));
v___x_810_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___closed__0));
v___x_811_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_export_parenthesizer___boxed), 5, 0);
v___x_812_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_808_, v___x_809_, v___x_810_, v___x_811_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11___boxed(lean_object* v_a_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11();
return v_res_814_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__2(void){
_start:
{
uint8_t v___x_821_; uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_821_ = 0;
v___x_822_ = 1;
v___x_823_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_824_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__0));
v___x_825_ = l_Lean_Parser_mkAntiquot(v___x_824_, v___x_823_, v___x_822_, v___x_821_);
return v___x_825_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__4(void){
_start:
{
uint8_t v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = 0;
v___x_828_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__3));
v___x_829_ = l_Lean_Parser_nonReservedSymbol(v___x_828_, v___x_827_);
return v___x_829_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__5(void){
_start:
{
lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v___x_830_ = l_Lean_Parser_numLit;
v___x_831_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__4, &l_Lean_Parser_Attr_recursor___closed__4_once, _init_l_Lean_Parser_Attr_recursor___closed__4);
v___x_832_ = l_Lean_Parser_andthen(v___x_831_, v___x_830_);
return v___x_832_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__6(void){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_833_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__5, &l_Lean_Parser_Attr_recursor___closed__5_once, _init_l_Lean_Parser_Attr_recursor___closed__5);
v___x_834_ = lean_unsigned_to_nat(1024u);
v___x_835_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_836_ = l_Lean_Parser_leadingNode(v___x_835_, v___x_834_, v___x_833_);
return v___x_836_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__7(void){
_start:
{
lean_object* v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_837_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__6, &l_Lean_Parser_Attr_recursor___closed__6_once, _init_l_Lean_Parser_Attr_recursor___closed__6);
v___x_838_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__2, &l_Lean_Parser_Attr_recursor___closed__2_once, _init_l_Lean_Parser_Attr_recursor___closed__2);
v___x_839_ = l_Lean_Parser_withAntiquot(v___x_838_, v___x_837_);
return v___x_839_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor___closed__8(void){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; 
v___x_840_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__7, &l_Lean_Parser_Attr_recursor___closed__7_once, _init_l_Lean_Parser_Attr_recursor___closed__7);
v___x_841_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_842_ = l_Lean_Parser_withCache(v___x_841_, v___x_840_);
return v___x_842_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_recursor(void){
_start:
{
lean_object* v___x_843_; 
v___x_843_ = lean_obj_once(&l_Lean_Parser_Attr_recursor___closed__8, &l_Lean_Parser_Attr_recursor___closed__8_once, _init_l_Lean_Parser_Attr_recursor___closed__8);
return v___x_843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1(){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; 
v___x_845_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_846_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_847_ = l_Lean_Parser_Attr_recursor;
v___x_848_ = lean_unsigned_to_nat(1000u);
v___x_849_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_845_, v___x_846_, v___x_847_, v___x_848_);
return v___x_849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1___boxed(lean_object* v_a_850_){
_start:
{
lean_object* v_res_851_; 
v_res_851_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1();
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3(){
_start:
{
lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
v___x_878_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_879_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___closed__6));
v___x_880_ = l_Lean_addBuiltinDeclarationRanges(v___x_878_, v___x_879_);
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3___boxed(lean_object* v_a_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3();
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter(lean_object* v_a_901_, lean_object* v_a_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; 
v___x_906_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_formatter___closed__0));
v___x_907_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_formatter___closed__3));
v___x_908_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_906_, v___x_907_, v_a_901_, v_a_902_, v_a_903_, v_a_904_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_formatter___boxed(lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_Parser_Attr_recursor_formatter(v_a_909_, v_a_910_, v_a_911_, v_a_912_);
lean_dec(v_a_912_);
lean_dec_ref(v_a_911_);
lean_dec(v_a_910_);
lean_dec_ref(v_a_909_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7(){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_922_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_923_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_924_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___closed__0));
v___x_925_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_recursor_formatter___boxed), 5, 0);
v___x_926_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_922_, v___x_923_, v___x_924_, v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7___boxed(lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7();
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer(lean_object* v_a_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; lean_object* v___x_954_; 
v___x_952_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_parenthesizer___closed__0));
v___x_953_ = ((lean_object*)(l_Lean_Parser_Attr_recursor_parenthesizer___closed__3));
v___x_954_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_952_, v___x_953_, v_a_947_, v_a_948_, v_a_949_, v_a_950_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_recursor_parenthesizer___boxed(lean_object* v_a_955_, lean_object* v_a_956_, lean_object* v_a_957_, lean_object* v_a_958_, lean_object* v_a_959_){
_start:
{
lean_object* v_res_960_; 
v_res_960_ = l_Lean_Parser_Attr_recursor_parenthesizer(v_a_955_, v_a_956_, v_a_957_, v_a_958_);
lean_dec(v_a_958_);
lean_dec_ref(v_a_957_);
lean_dec(v_a_956_);
lean_dec_ref(v_a_955_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11(){
_start:
{
lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; 
v___x_968_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_969_ = ((lean_object*)(l_Lean_Parser_Attr_recursor___closed__1));
v___x_970_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___closed__0));
v___x_971_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_recursor_parenthesizer___boxed), 5, 0);
v___x_972_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_968_, v___x_969_, v___x_970_, v___x_971_);
return v___x_972_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11___boxed(lean_object* v_a_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11();
return v_res_974_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__2(void){
_start:
{
uint8_t v___x_981_; uint8_t v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; 
v___x_981_ = 0;
v___x_982_ = 1;
v___x_983_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_984_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__0));
v___x_985_ = l_Lean_Parser_mkAntiquot(v___x_984_, v___x_983_, v___x_982_, v___x_981_);
return v___x_985_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__3(void){
_start:
{
lean_object* v___x_986_; lean_object* v___x_987_; 
v___x_986_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__0));
v___x_987_ = l_Lean_Parser_symbol(v___x_986_);
return v___x_987_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__4(void){
_start:
{
lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; 
v___x_988_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__3, &l_Lean_Parser_Attr_class___closed__3_once, _init_l_Lean_Parser_Attr_class___closed__3);
v___x_989_ = lean_unsigned_to_nat(1024u);
v___x_990_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_991_ = l_Lean_Parser_leadingNode(v___x_990_, v___x_989_, v___x_988_);
return v___x_991_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__5(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__4, &l_Lean_Parser_Attr_class___closed__4_once, _init_l_Lean_Parser_Attr_class___closed__4);
v___x_993_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__2, &l_Lean_Parser_Attr_class___closed__2_once, _init_l_Lean_Parser_Attr_class___closed__2);
v___x_994_ = l_Lean_Parser_withAntiquot(v___x_993_, v___x_992_);
return v___x_994_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class___closed__6(void){
_start:
{
lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_995_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__5, &l_Lean_Parser_Attr_class___closed__5_once, _init_l_Lean_Parser_Attr_class___closed__5);
v___x_996_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_997_ = l_Lean_Parser_withCache(v___x_996_, v___x_995_);
return v___x_997_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_class(void){
_start:
{
lean_object* v___x_998_; 
v___x_998_ = lean_obj_once(&l_Lean_Parser_Attr_class___closed__6, &l_Lean_Parser_Attr_class___closed__6_once, _init_l_Lean_Parser_Attr_class___closed__6);
return v___x_998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1(){
_start:
{
lean_object* v___x_1000_; lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1000_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1001_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1002_ = l_Lean_Parser_Attr_class;
v___x_1003_ = lean_unsigned_to_nat(1000u);
v___x_1004_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1000_, v___x_1001_, v___x_1002_, v___x_1003_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1___boxed(lean_object* v_a_1005_){
_start:
{
lean_object* v_res_1006_; 
v_res_1006_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1();
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3(){
_start:
{
lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1033_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1034_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___closed__6));
v___x_1035_ = l_Lean_addBuiltinDeclarationRanges(v___x_1033_, v___x_1034_);
return v___x_1035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3___boxed(lean_object* v_a_1036_){
_start:
{
lean_object* v_res_1037_; 
v_res_1037_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3();
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter(lean_object* v_a_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_, lean_object* v_a_1054_){
_start:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1056_ = ((lean_object*)(l_Lean_Parser_Attr_class_formatter___closed__0));
v___x_1057_ = ((lean_object*)(l_Lean_Parser_Attr_class_formatter___closed__2));
v___x_1058_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1056_, v___x_1057_, v_a_1051_, v_a_1052_, v_a_1053_, v_a_1054_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_formatter___boxed(lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Parser_Attr_class_formatter(v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
lean_dec(v_a_1060_);
lean_dec_ref(v_a_1059_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7(){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; 
v___x_1072_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1073_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1074_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___closed__0));
v___x_1075_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_class_formatter___boxed), 5, 0);
v___x_1076_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1072_, v___x_1073_, v___x_1074_, v___x_1075_);
return v___x_1076_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7___boxed(lean_object* v_a_1077_){
_start:
{
lean_object* v_res_1078_; 
v_res_1078_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7();
return v_res_1078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer(lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = ((lean_object*)(l_Lean_Parser_Attr_class_parenthesizer___closed__0));
v___x_1098_ = ((lean_object*)(l_Lean_Parser_Attr_class_parenthesizer___closed__2));
v___x_1099_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1097_, v___x_1098_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_);
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_class_parenthesizer___boxed(lean_object* v_a_1100_, lean_object* v_a_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_){
_start:
{
lean_object* v_res_1105_; 
v_res_1105_ = l_Lean_Parser_Attr_class_parenthesizer(v_a_1100_, v_a_1101_, v_a_1102_, v_a_1103_);
lean_dec(v_a_1103_);
lean_dec_ref(v_a_1102_);
lean_dec(v_a_1101_);
lean_dec_ref(v_a_1100_);
return v_res_1105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11(){
_start:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v___x_1113_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1114_ = ((lean_object*)(l_Lean_Parser_Attr_class___closed__1));
v___x_1115_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___closed__0));
v___x_1116_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_class_parenthesizer___boxed), 5, 0);
v___x_1117_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1113_, v___x_1114_, v___x_1115_, v___x_1116_);
return v___x_1117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11___boxed(lean_object* v_a_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11();
return v_res_1119_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__2(void){
_start:
{
uint8_t v___x_1126_; uint8_t v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1126_ = 0;
v___x_1127_ = 1;
v___x_1128_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1129_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__0));
v___x_1130_ = l_Lean_Parser_mkAntiquot(v___x_1129_, v___x_1128_, v___x_1127_, v___x_1126_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__3(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; 
v___x_1131_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__0));
v___x_1132_ = l_Lean_Parser_symbol(v___x_1131_);
return v___x_1132_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__4(void){
_start:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1133_ = lean_obj_once(&l_Lean_Parser_Attr_simple___closed__3, &l_Lean_Parser_Attr_simple___closed__3_once, _init_l_Lean_Parser_Attr_simple___closed__3);
v___x_1134_ = l_Lean_Parser_skip;
v___x_1135_ = l_Lean_Parser_andthen(v___x_1134_, v___x_1133_);
return v___x_1135_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__5(void){
_start:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
v___x_1136_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__4, &l_Lean_Parser_Attr_instance___closed__4_once, _init_l_Lean_Parser_Attr_instance___closed__4);
v___x_1137_ = l_Lean_Parser_optional(v___x_1136_);
return v___x_1137_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__6(void){
_start:
{
lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; 
v___x_1138_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__5, &l_Lean_Parser_Attr_instance___closed__5_once, _init_l_Lean_Parser_Attr_instance___closed__5);
v___x_1139_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__3, &l_Lean_Parser_Attr_instance___closed__3_once, _init_l_Lean_Parser_Attr_instance___closed__3);
v___x_1140_ = l_Lean_Parser_andthen(v___x_1139_, v___x_1138_);
return v___x_1140_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__7(void){
_start:
{
lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1141_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__6, &l_Lean_Parser_Attr_instance___closed__6_once, _init_l_Lean_Parser_Attr_instance___closed__6);
v___x_1142_ = lean_unsigned_to_nat(1024u);
v___x_1143_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1144_ = l_Lean_Parser_leadingNode(v___x_1143_, v___x_1142_, v___x_1141_);
return v___x_1144_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__8(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; 
v___x_1145_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__7, &l_Lean_Parser_Attr_instance___closed__7_once, _init_l_Lean_Parser_Attr_instance___closed__7);
v___x_1146_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__2, &l_Lean_Parser_Attr_instance___closed__2_once, _init_l_Lean_Parser_Attr_instance___closed__2);
v___x_1147_ = l_Lean_Parser_withAntiquot(v___x_1146_, v___x_1145_);
return v___x_1147_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance___closed__9(void){
_start:
{
lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1148_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__8, &l_Lean_Parser_Attr_instance___closed__8_once, _init_l_Lean_Parser_Attr_instance___closed__8);
v___x_1149_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1150_ = l_Lean_Parser_withCache(v___x_1149_, v___x_1148_);
return v___x_1150_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_instance(void){
_start:
{
lean_object* v___x_1151_; 
v___x_1151_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__9, &l_Lean_Parser_Attr_instance___closed__9_once, _init_l_Lean_Parser_Attr_instance___closed__9);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1(){
_start:
{
lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1153_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1154_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1155_ = l_Lean_Parser_Attr_instance;
v___x_1156_ = lean_unsigned_to_nat(1000u);
v___x_1157_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1153_, v___x_1154_, v___x_1155_, v___x_1156_);
return v___x_1157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1___boxed(lean_object* v_a_1158_){
_start:
{
lean_object* v_res_1159_; 
v_res_1159_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1();
return v_res_1159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3(){
_start:
{
lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
v___x_1186_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1187_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___closed__6));
v___x_1188_ = l_Lean_addBuiltinDeclarationRanges(v___x_1186_, v___x_1187_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3___boxed(lean_object* v_a_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3();
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter(lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_, lean_object* v_a_1215_){
_start:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1217_ = ((lean_object*)(l_Lean_Parser_Attr_instance_formatter___closed__0));
v___x_1218_ = ((lean_object*)(l_Lean_Parser_Attr_instance_formatter___closed__5));
v___x_1219_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1217_, v___x_1218_, v_a_1212_, v_a_1213_, v_a_1214_, v_a_1215_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_formatter___boxed(lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = l_Lean_Parser_Attr_instance_formatter(v_a_1220_, v_a_1221_, v_a_1222_, v_a_1223_);
lean_dec(v_a_1223_);
lean_dec_ref(v_a_1222_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7(){
_start:
{
lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; 
v___x_1233_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1234_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1235_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___closed__0));
v___x_1236_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_instance_formatter___boxed), 5, 0);
v___x_1237_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1233_, v___x_1234_, v___x_1235_, v___x_1236_);
return v___x_1237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7___boxed(lean_object* v_a_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7();
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer(lean_object* v_a_1261_, lean_object* v_a_1262_, lean_object* v_a_1263_, lean_object* v_a_1264_){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; 
v___x_1266_ = ((lean_object*)(l_Lean_Parser_Attr_instance_parenthesizer___closed__0));
v___x_1267_ = ((lean_object*)(l_Lean_Parser_Attr_instance_parenthesizer___closed__5));
v___x_1268_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1266_, v___x_1267_, v_a_1261_, v_a_1262_, v_a_1263_, v_a_1264_);
return v___x_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_instance_parenthesizer___boxed(lean_object* v_a_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_, lean_object* v_a_1272_, lean_object* v_a_1273_){
_start:
{
lean_object* v_res_1274_; 
v_res_1274_ = l_Lean_Parser_Attr_instance_parenthesizer(v_a_1269_, v_a_1270_, v_a_1271_, v_a_1272_);
lean_dec(v_a_1272_);
lean_dec_ref(v_a_1271_);
lean_dec(v_a_1270_);
lean_dec_ref(v_a_1269_);
return v_res_1274_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11(){
_start:
{
lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; 
v___x_1282_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1283_ = ((lean_object*)(l_Lean_Parser_Attr_instance___closed__1));
v___x_1284_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___closed__0));
v___x_1285_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_instance_parenthesizer___boxed), 5, 0);
v___x_1286_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1282_, v___x_1283_, v___x_1284_, v___x_1285_);
return v___x_1286_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11___boxed(lean_object* v_a_1287_){
_start:
{
lean_object* v_res_1288_; 
v_res_1288_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11();
return v_res_1288_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__2(void){
_start:
{
uint8_t v___x_1295_; uint8_t v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; 
v___x_1295_ = 0;
v___x_1296_ = 1;
v___x_1297_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1298_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__0));
v___x_1299_ = l_Lean_Parser_mkAntiquot(v___x_1298_, v___x_1297_, v___x_1296_, v___x_1295_);
return v___x_1299_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__3(void){
_start:
{
uint8_t v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; 
v___x_1300_ = 0;
v___x_1301_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__0));
v___x_1302_ = l_Lean_Parser_nonReservedSymbol(v___x_1301_, v___x_1300_);
return v___x_1302_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__4(void){
_start:
{
lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1303_ = lean_obj_once(&l_Lean_Parser_Attr_instance___closed__5, &l_Lean_Parser_Attr_instance___closed__5_once, _init_l_Lean_Parser_Attr_instance___closed__5);
v___x_1304_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__3, &l_Lean_Parser_Attr_default__instance___closed__3_once, _init_l_Lean_Parser_Attr_default__instance___closed__3);
v___x_1305_ = l_Lean_Parser_andthen(v___x_1304_, v___x_1303_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__5(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; 
v___x_1306_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__4, &l_Lean_Parser_Attr_default__instance___closed__4_once, _init_l_Lean_Parser_Attr_default__instance___closed__4);
v___x_1307_ = lean_unsigned_to_nat(1024u);
v___x_1308_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1309_ = l_Lean_Parser_leadingNode(v___x_1308_, v___x_1307_, v___x_1306_);
return v___x_1309_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__6(void){
_start:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1310_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__5, &l_Lean_Parser_Attr_default__instance___closed__5_once, _init_l_Lean_Parser_Attr_default__instance___closed__5);
v___x_1311_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__2, &l_Lean_Parser_Attr_default__instance___closed__2_once, _init_l_Lean_Parser_Attr_default__instance___closed__2);
v___x_1312_ = l_Lean_Parser_withAntiquot(v___x_1311_, v___x_1310_);
return v___x_1312_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance___closed__7(void){
_start:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1313_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__6, &l_Lean_Parser_Attr_default__instance___closed__6_once, _init_l_Lean_Parser_Attr_default__instance___closed__6);
v___x_1314_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1315_ = l_Lean_Parser_withCache(v___x_1314_, v___x_1313_);
return v___x_1315_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_default__instance(void){
_start:
{
lean_object* v___x_1316_; 
v___x_1316_ = lean_obj_once(&l_Lean_Parser_Attr_default__instance___closed__7, &l_Lean_Parser_Attr_default__instance___closed__7_once, _init_l_Lean_Parser_Attr_default__instance___closed__7);
return v___x_1316_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1(){
_start:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; 
v___x_1318_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1319_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1320_ = l_Lean_Parser_Attr_default__instance;
v___x_1321_ = lean_unsigned_to_nat(1000u);
v___x_1322_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1318_, v___x_1319_, v___x_1320_, v___x_1321_);
return v___x_1322_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1___boxed(lean_object* v_a_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1();
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3(){
_start:
{
lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1351_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1352_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___closed__6));
v___x_1353_ = l_Lean_addBuiltinDeclarationRanges(v___x_1351_, v___x_1352_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3___boxed(lean_object* v_a_1354_){
_start:
{
lean_object* v_res_1355_; 
v_res_1355_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3();
return v_res_1355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter(lean_object* v_a_1374_, lean_object* v_a_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_){
_start:
{
lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
v___x_1379_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_formatter___closed__0));
v___x_1380_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_formatter___closed__3));
v___x_1381_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1379_, v___x_1380_, v_a_1374_, v_a_1375_, v_a_1376_, v_a_1377_);
return v___x_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_formatter___boxed(lean_object* v_a_1382_, lean_object* v_a_1383_, lean_object* v_a_1384_, lean_object* v_a_1385_, lean_object* v_a_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lean_Parser_Attr_default__instance_formatter(v_a_1382_, v_a_1383_, v_a_1384_, v_a_1385_);
lean_dec(v_a_1385_);
lean_dec_ref(v_a_1384_);
lean_dec(v_a_1383_);
lean_dec_ref(v_a_1382_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7(){
_start:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; 
v___x_1395_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1396_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1397_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___closed__0));
v___x_1398_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_default__instance_formatter___boxed), 5, 0);
v___x_1399_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1395_, v___x_1396_, v___x_1397_, v___x_1398_);
return v___x_1399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7___boxed(lean_object* v_a_1400_){
_start:
{
lean_object* v_res_1401_; 
v_res_1401_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7();
return v_res_1401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer(lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v_a_1422_, lean_object* v_a_1423_){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; 
v___x_1425_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_parenthesizer___closed__0));
v___x_1426_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance_parenthesizer___closed__3));
v___x_1427_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1425_, v___x_1426_, v_a_1420_, v_a_1421_, v_a_1422_, v_a_1423_);
return v___x_1427_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_default__instance_parenthesizer___boxed(lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_, lean_object* v_a_1432_){
_start:
{
lean_object* v_res_1433_; 
v_res_1433_ = l_Lean_Parser_Attr_default__instance_parenthesizer(v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
lean_dec(v_a_1431_);
lean_dec_ref(v_a_1430_);
lean_dec(v_a_1429_);
lean_dec_ref(v_a_1428_);
return v_res_1433_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11(){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; 
v___x_1441_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1442_ = ((lean_object*)(l_Lean_Parser_Attr_default__instance___closed__1));
v___x_1443_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___closed__0));
v___x_1444_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_default__instance_parenthesizer___boxed), 5, 0);
v___x_1445_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1441_, v___x_1442_, v___x_1443_, v___x_1444_);
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11___boxed(lean_object* v_a_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11();
return v_res_1447_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__2(void){
_start:
{
uint8_t v___x_1454_; uint8_t v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; 
v___x_1454_ = 0;
v___x_1455_ = 1;
v___x_1456_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1457_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__0));
v___x_1458_ = l_Lean_Parser_mkAntiquot(v___x_1457_, v___x_1456_, v___x_1455_, v___x_1454_);
return v___x_1458_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__3(void){
_start:
{
uint8_t v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; 
v___x_1459_ = 0;
v___x_1460_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__0));
v___x_1461_ = l_Lean_Parser_nonReservedSymbol(v___x_1460_, v___x_1459_);
return v___x_1461_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__4(void){
_start:
{
lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; 
v___x_1462_ = l_Lean_Parser_numLit;
v___x_1463_ = l_Lean_Parser_ident;
v___x_1464_ = l_Lean_Parser_orelse(v___x_1463_, v___x_1462_);
return v___x_1464_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__5(void){
_start:
{
lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; 
v___x_1465_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__4, &l_Lean_Parser_Attr_specialize___closed__4_once, _init_l_Lean_Parser_Attr_specialize___closed__4);
v___x_1466_ = l_Lean_Parser_skip;
v___x_1467_ = l_Lean_Parser_andthen(v___x_1466_, v___x_1465_);
return v___x_1467_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__6(void){
_start:
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__5, &l_Lean_Parser_Attr_specialize___closed__5_once, _init_l_Lean_Parser_Attr_specialize___closed__5);
v___x_1469_ = l_Lean_Parser_many(v___x_1468_);
return v___x_1469_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__7(void){
_start:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; 
v___x_1470_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__6, &l_Lean_Parser_Attr_specialize___closed__6_once, _init_l_Lean_Parser_Attr_specialize___closed__6);
v___x_1471_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__3, &l_Lean_Parser_Attr_specialize___closed__3_once, _init_l_Lean_Parser_Attr_specialize___closed__3);
v___x_1472_ = l_Lean_Parser_andthen(v___x_1471_, v___x_1470_);
return v___x_1472_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__8(void){
_start:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; 
v___x_1473_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__7, &l_Lean_Parser_Attr_specialize___closed__7_once, _init_l_Lean_Parser_Attr_specialize___closed__7);
v___x_1474_ = lean_unsigned_to_nat(1024u);
v___x_1475_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1476_ = l_Lean_Parser_leadingNode(v___x_1475_, v___x_1474_, v___x_1473_);
return v___x_1476_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__9(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; 
v___x_1477_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__8, &l_Lean_Parser_Attr_specialize___closed__8_once, _init_l_Lean_Parser_Attr_specialize___closed__8);
v___x_1478_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__2, &l_Lean_Parser_Attr_specialize___closed__2_once, _init_l_Lean_Parser_Attr_specialize___closed__2);
v___x_1479_ = l_Lean_Parser_withAntiquot(v___x_1478_, v___x_1477_);
return v___x_1479_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize___closed__10(void){
_start:
{
lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; 
v___x_1480_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__9, &l_Lean_Parser_Attr_specialize___closed__9_once, _init_l_Lean_Parser_Attr_specialize___closed__9);
v___x_1481_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1482_ = l_Lean_Parser_withCache(v___x_1481_, v___x_1480_);
return v___x_1482_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_specialize(void){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = lean_obj_once(&l_Lean_Parser_Attr_specialize___closed__10, &l_Lean_Parser_Attr_specialize___closed__10_once, _init_l_Lean_Parser_Attr_specialize___closed__10);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1(){
_start:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1485_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1486_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1487_ = l_Lean_Parser_Attr_specialize;
v___x_1488_ = lean_unsigned_to_nat(1000u);
v___x_1489_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1485_, v___x_1486_, v___x_1487_, v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1___boxed(lean_object* v_a_1490_){
_start:
{
lean_object* v_res_1491_; 
v_res_1491_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1();
return v_res_1491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3(){
_start:
{
lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; 
v___x_1518_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1519_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___closed__6));
v___x_1520_ = l_Lean_addBuiltinDeclarationRanges(v___x_1518_, v___x_1519_);
return v___x_1520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3___boxed(lean_object* v_a_1521_){
_start:
{
lean_object* v_res_1522_; 
v_res_1522_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3();
return v_res_1522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter(lean_object* v_a_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v_a_1552_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1554_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_formatter___closed__0));
v___x_1555_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_formatter___closed__6));
v___x_1556_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1554_, v___x_1555_, v_a_1549_, v_a_1550_, v_a_1551_, v_a_1552_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_formatter___boxed(lean_object* v_a_1557_, lean_object* v_a_1558_, lean_object* v_a_1559_, lean_object* v_a_1560_, lean_object* v_a_1561_){
_start:
{
lean_object* v_res_1562_; 
v_res_1562_ = l_Lean_Parser_Attr_specialize_formatter(v_a_1557_, v_a_1558_, v_a_1559_, v_a_1560_);
lean_dec(v_a_1560_);
lean_dec_ref(v_a_1559_);
lean_dec(v_a_1558_);
lean_dec_ref(v_a_1557_);
return v_res_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7(){
_start:
{
lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; 
v___x_1570_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1571_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1572_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___closed__0));
v___x_1573_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_specialize_formatter___boxed), 5, 0);
v___x_1574_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1570_, v___x_1571_, v___x_1572_, v___x_1573_);
return v___x_1574_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7___boxed(lean_object* v_a_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7();
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer(lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_){
_start:
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; 
v___x_1608_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_parenthesizer___closed__0));
v___x_1609_ = ((lean_object*)(l_Lean_Parser_Attr_specialize_parenthesizer___closed__6));
v___x_1610_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1608_, v___x_1609_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_);
return v___x_1610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_specialize_parenthesizer___boxed(lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l_Lean_Parser_Attr_specialize_parenthesizer(v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11(){
_start:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1624_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1625_ = ((lean_object*)(l_Lean_Parser_Attr_specialize___closed__1));
v___x_1626_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___closed__0));
v___x_1627_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_specialize_parenthesizer___boxed), 5, 0);
v___x_1628_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1624_, v___x_1625_, v___x_1626_, v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11___boxed(lean_object* v_a_1629_){
_start:
{
lean_object* v_res_1630_; 
v_res_1630_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11();
return v_res_1630_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__2(void){
_start:
{
uint8_t v___x_1637_; uint8_t v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v___x_1637_ = 0;
v___x_1638_ = 1;
v___x_1639_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__1));
v___x_1640_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__0));
v___x_1641_ = l_Lean_Parser_mkAntiquot(v___x_1640_, v___x_1639_, v___x_1638_, v___x_1637_);
return v___x_1641_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__4(void){
_start:
{
uint8_t v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1643_ = 0;
v___x_1644_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__3));
v___x_1645_ = l_Lean_Parser_nonReservedSymbol(v___x_1644_, v___x_1643_);
return v___x_1645_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__6(void){
_start:
{
lean_object* v___x_1647_; lean_object* v___x_1648_; 
v___x_1647_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__5));
v___x_1648_ = l_Lean_Parser_symbol(v___x_1647_);
return v___x_1648_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__8(void){
_start:
{
uint8_t v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1650_ = 0;
v___x_1651_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__7));
v___x_1652_ = l_Lean_Parser_nonReservedSymbol(v___x_1651_, v___x_1650_);
return v___x_1652_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__10(void){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; 
v___x_1654_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__9));
v___x_1655_ = l_Lean_Parser_symbol(v___x_1654_);
return v___x_1655_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__12(void){
_start:
{
uint8_t v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; 
v___x_1657_ = 0;
v___x_1658_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__11));
v___x_1659_ = l_Lean_Parser_nonReservedSymbol(v___x_1658_, v___x_1657_);
return v___x_1659_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__14(void){
_start:
{
uint8_t v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
v___x_1661_ = 0;
v___x_1662_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__13));
v___x_1663_ = l_Lean_Parser_nonReservedSymbol(v___x_1662_, v___x_1661_);
return v___x_1663_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__15(void){
_start:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; 
v___x_1664_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__14, &l_Lean_Parser_Attr_implemented__by___closed__14_once, _init_l_Lean_Parser_Attr_implemented__by___closed__14);
v___x_1665_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__12, &l_Lean_Parser_Attr_implemented__by___closed__12_once, _init_l_Lean_Parser_Attr_implemented__by___closed__12);
v___x_1666_ = l_Lean_Parser_orelse(v___x_1665_, v___x_1664_);
return v___x_1666_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__17(void){
_start:
{
lean_object* v___x_1668_; lean_object* v___x_1669_; 
v___x_1668_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__16));
v___x_1669_ = l_Lean_Parser_symbol(v___x_1668_);
return v___x_1669_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__18(void){
_start:
{
lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; 
v___x_1670_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__17, &l_Lean_Parser_Attr_implemented__by___closed__17_once, _init_l_Lean_Parser_Attr_implemented__by___closed__17);
v___x_1671_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__15, &l_Lean_Parser_Attr_implemented__by___closed__15_once, _init_l_Lean_Parser_Attr_implemented__by___closed__15);
v___x_1672_ = l_Lean_Parser_andthen(v___x_1671_, v___x_1670_);
return v___x_1672_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__19(void){
_start:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1673_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__18, &l_Lean_Parser_Attr_implemented__by___closed__18_once, _init_l_Lean_Parser_Attr_implemented__by___closed__18);
v___x_1674_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__10, &l_Lean_Parser_Attr_implemented__by___closed__10_once, _init_l_Lean_Parser_Attr_implemented__by___closed__10);
v___x_1675_ = l_Lean_Parser_andthen(v___x_1674_, v___x_1673_);
return v___x_1675_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__20(void){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; 
v___x_1676_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__19, &l_Lean_Parser_Attr_implemented__by___closed__19_once, _init_l_Lean_Parser_Attr_implemented__by___closed__19);
v___x_1677_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__8, &l_Lean_Parser_Attr_implemented__by___closed__8_once, _init_l_Lean_Parser_Attr_implemented__by___closed__8);
v___x_1678_ = l_Lean_Parser_andthen(v___x_1677_, v___x_1676_);
return v___x_1678_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__21(void){
_start:
{
lean_object* v___x_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; 
v___x_1679_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__20, &l_Lean_Parser_Attr_implemented__by___closed__20_once, _init_l_Lean_Parser_Attr_implemented__by___closed__20);
v___x_1680_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__6, &l_Lean_Parser_Attr_implemented__by___closed__6_once, _init_l_Lean_Parser_Attr_implemented__by___closed__6);
v___x_1681_ = l_Lean_Parser_andthen(v___x_1680_, v___x_1679_);
return v___x_1681_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__22(void){
_start:
{
lean_object* v___x_1682_; lean_object* v___x_1683_; 
v___x_1682_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__21, &l_Lean_Parser_Attr_implemented__by___closed__21_once, _init_l_Lean_Parser_Attr_implemented__by___closed__21);
v___x_1683_ = l_Lean_Parser_optional(v___x_1682_);
return v___x_1683_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__23(void){
_start:
{
lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v___x_1684_ = l_Lean_Parser_ident;
v___x_1685_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__22, &l_Lean_Parser_Attr_implemented__by___closed__22_once, _init_l_Lean_Parser_Attr_implemented__by___closed__22);
v___x_1686_ = l_Lean_Parser_andthen(v___x_1685_, v___x_1684_);
return v___x_1686_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__24(void){
_start:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1687_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__23, &l_Lean_Parser_Attr_implemented__by___closed__23_once, _init_l_Lean_Parser_Attr_implemented__by___closed__23);
v___x_1688_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__4, &l_Lean_Parser_Attr_implemented__by___closed__4_once, _init_l_Lean_Parser_Attr_implemented__by___closed__4);
v___x_1689_ = l_Lean_Parser_andthen(v___x_1688_, v___x_1687_);
return v___x_1689_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__25(void){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; 
v___x_1690_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__24, &l_Lean_Parser_Attr_implemented__by___closed__24_once, _init_l_Lean_Parser_Attr_implemented__by___closed__24);
v___x_1691_ = lean_unsigned_to_nat(1024u);
v___x_1692_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__1));
v___x_1693_ = l_Lean_Parser_leadingNode(v___x_1692_, v___x_1691_, v___x_1690_);
return v___x_1693_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__26(void){
_start:
{
lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; 
v___x_1694_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__25, &l_Lean_Parser_Attr_implemented__by___closed__25_once, _init_l_Lean_Parser_Attr_implemented__by___closed__25);
v___x_1695_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__2, &l_Lean_Parser_Attr_implemented__by___closed__2_once, _init_l_Lean_Parser_Attr_implemented__by___closed__2);
v___x_1696_ = l_Lean_Parser_withAntiquot(v___x_1695_, v___x_1694_);
return v___x_1696_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by___closed__27(void){
_start:
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1697_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__26, &l_Lean_Parser_Attr_implemented__by___closed__26_once, _init_l_Lean_Parser_Attr_implemented__by___closed__26);
v___x_1698_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__1));
v___x_1699_ = l_Lean_Parser_withCache(v___x_1698_, v___x_1697_);
return v___x_1699_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_implemented__by(void){
_start:
{
lean_object* v___x_1700_; 
v___x_1700_ = lean_obj_once(&l_Lean_Parser_Attr_implemented__by___closed__27, &l_Lean_Parser_Attr_implemented__by___closed__27_once, _init_l_Lean_Parser_Attr_implemented__by___closed__27);
return v___x_1700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by__1(){
_start:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; 
v___x_1702_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1703_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__1));
v___x_1704_ = l_Lean_Parser_Attr_implemented__by;
v___x_1705_ = lean_unsigned_to_nat(1000u);
v___x_1706_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1702_, v___x_1703_, v___x_1704_, v___x_1705_);
return v___x_1706_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by__1___boxed(lean_object* v_a_1707_){
_start:
{
lean_object* v_res_1708_; 
v_res_1708_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by__1();
return v_res_1708_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3(){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1711_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__1));
v___x_1712_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3___closed__0));
v___x_1713_ = l_Lean_addBuiltinDocString(v___x_1711_, v___x_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3___boxed(lean_object* v_a_1714_){
_start:
{
lean_object* v_res_1715_; 
v_res_1715_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3();
return v_res_1715_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_formatter(lean_object* v_a_1772_, lean_object* v_a_1773_, lean_object* v_a_1774_, lean_object* v_a_1775_){
_start:
{
lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1777_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by_formatter___closed__0));
v___x_1778_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by_formatter___closed__16));
v___x_1779_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_1777_, v___x_1778_, v_a_1772_, v_a_1773_, v_a_1774_, v_a_1775_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_formatter___boxed(lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_, lean_object* v_a_1783_, lean_object* v_a_1784_){
_start:
{
lean_object* v_res_1785_; 
v_res_1785_ = l_Lean_Parser_Attr_implemented__by_formatter(v_a_1780_, v_a_1781_, v_a_1782_, v_a_1783_);
lean_dec(v_a_1783_);
lean_dec_ref(v_a_1782_);
lean_dec(v_a_1781_);
lean_dec_ref(v_a_1780_);
return v_res_1785_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7(){
_start:
{
lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; 
v___x_1793_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_1794_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__1));
v___x_1795_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___closed__0));
v___x_1796_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_implemented__by_formatter___boxed), 5, 0);
v___x_1797_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1793_, v___x_1794_, v___x_1795_, v___x_1796_);
return v___x_1797_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7___boxed(lean_object* v_a_1798_){
_start:
{
lean_object* v_res_1799_; 
v_res_1799_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7();
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer(lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_){
_start:
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1861_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__0));
v___x_1862_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by_parenthesizer___closed__16));
v___x_1863_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_1861_, v___x_1862_, v_a_1856_, v_a_1857_, v_a_1858_, v_a_1859_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_implemented__by_parenthesizer___boxed(lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_, lean_object* v_a_1867_, lean_object* v_a_1868_){
_start:
{
lean_object* v_res_1869_; 
v_res_1869_ = l_Lean_Parser_Attr_implemented__by_parenthesizer(v_a_1864_, v_a_1865_, v_a_1866_, v_a_1867_);
lean_dec(v_a_1867_);
lean_dec_ref(v_a_1866_);
lean_dec(v_a_1865_);
lean_dec_ref(v_a_1864_);
return v_res_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11(){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; 
v___x_1877_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_1878_ = ((lean_object*)(l_Lean_Parser_Attr_implemented__by___closed__1));
v___x_1879_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___closed__0));
v___x_1880_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_implemented__by_parenthesizer___boxed), 5, 0);
v___x_1881_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1877_, v___x_1878_, v___x_1879_, v___x_1880_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11___boxed(lean_object* v_a_1882_){
_start:
{
lean_object* v_res_1883_; 
v_res_1883_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11();
return v_res_1883_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__2(void){
_start:
{
uint8_t v___x_1890_; uint8_t v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; 
v___x_1890_ = 0;
v___x_1891_ = 1;
v___x_1892_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1893_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__0));
v___x_1894_ = l_Lean_Parser_mkAntiquot(v___x_1893_, v___x_1892_, v___x_1891_, v___x_1890_);
return v___x_1894_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__3(void){
_start:
{
lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
v___x_1895_ = l_Lean_Parser_skip;
v___x_1896_ = l_Lean_Parser_ident;
v___x_1897_ = l_Lean_Parser_andthen(v___x_1896_, v___x_1895_);
return v___x_1897_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__4(void){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__3, &l_Lean_Parser_Attr_externEntry___closed__3_once, _init_l_Lean_Parser_Attr_externEntry___closed__3);
v___x_1899_ = l_Lean_Parser_optional(v___x_1898_);
return v___x_1899_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__6(void){
_start:
{
uint8_t v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1901_ = 0;
v___x_1902_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__5));
v___x_1903_ = l_Lean_Parser_nonReservedSymbol(v___x_1902_, v___x_1901_);
return v___x_1903_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__7(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__6, &l_Lean_Parser_Attr_externEntry___closed__6_once, _init_l_Lean_Parser_Attr_externEntry___closed__6);
v___x_1905_ = l_Lean_Parser_optional(v___x_1904_);
return v___x_1905_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__8(void){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; 
v___x_1906_ = l_Lean_Parser_strLit;
v___x_1907_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__7, &l_Lean_Parser_Attr_externEntry___closed__7_once, _init_l_Lean_Parser_Attr_externEntry___closed__7);
v___x_1908_ = l_Lean_Parser_andthen(v___x_1907_, v___x_1906_);
return v___x_1908_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__9(void){
_start:
{
lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; 
v___x_1909_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__8, &l_Lean_Parser_Attr_externEntry___closed__8_once, _init_l_Lean_Parser_Attr_externEntry___closed__8);
v___x_1910_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__4, &l_Lean_Parser_Attr_externEntry___closed__4_once, _init_l_Lean_Parser_Attr_externEntry___closed__4);
v___x_1911_ = l_Lean_Parser_andthen(v___x_1910_, v___x_1909_);
return v___x_1911_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__10(void){
_start:
{
lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; 
v___x_1912_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__9, &l_Lean_Parser_Attr_externEntry___closed__9_once, _init_l_Lean_Parser_Attr_externEntry___closed__9);
v___x_1913_ = lean_unsigned_to_nat(1024u);
v___x_1914_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1915_ = l_Lean_Parser_leadingNode(v___x_1914_, v___x_1913_, v___x_1912_);
return v___x_1915_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__11(void){
_start:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; 
v___x_1916_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__10, &l_Lean_Parser_Attr_externEntry___closed__10_once, _init_l_Lean_Parser_Attr_externEntry___closed__10);
v___x_1917_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__2, &l_Lean_Parser_Attr_externEntry___closed__2_once, _init_l_Lean_Parser_Attr_externEntry___closed__2);
v___x_1918_ = l_Lean_Parser_withAntiquot(v___x_1917_, v___x_1916_);
return v___x_1918_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry___closed__12(void){
_start:
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1919_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__11, &l_Lean_Parser_Attr_externEntry___closed__11_once, _init_l_Lean_Parser_Attr_externEntry___closed__11);
v___x_1920_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_1921_ = l_Lean_Parser_withCache(v___x_1920_, v___x_1919_);
return v___x_1921_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_externEntry(void){
_start:
{
lean_object* v___x_1922_; 
v___x_1922_ = lean_obj_once(&l_Lean_Parser_Attr_externEntry___closed__12, &l_Lean_Parser_Attr_externEntry___closed__12_once, _init_l_Lean_Parser_Attr_externEntry___closed__12);
return v___x_1922_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__2(void){
_start:
{
uint8_t v___x_1929_; uint8_t v___x_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1929_ = 0;
v___x_1930_ = 1;
v___x_1931_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1932_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__0));
v___x_1933_ = l_Lean_Parser_mkAntiquot(v___x_1932_, v___x_1931_, v___x_1930_, v___x_1929_);
return v___x_1933_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__3(void){
_start:
{
uint8_t v___x_1934_; lean_object* v___x_1935_; lean_object* v___x_1936_; 
v___x_1934_ = 0;
v___x_1935_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__0));
v___x_1936_ = l_Lean_Parser_nonReservedSymbol(v___x_1935_, v___x_1934_);
return v___x_1936_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__4(void){
_start:
{
lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1937_ = l_Lean_Parser_Attr_externEntry;
v___x_1938_ = l_Lean_Parser_skip;
v___x_1939_ = l_Lean_Parser_andthen(v___x_1938_, v___x_1937_);
return v___x_1939_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__5(void){
_start:
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1940_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__4, &l_Lean_Parser_Attr_extern___closed__4_once, _init_l_Lean_Parser_Attr_extern___closed__4);
v___x_1941_ = l_Lean_Parser_many(v___x_1940_);
return v___x_1941_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__6(void){
_start:
{
lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; 
v___x_1942_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__5, &l_Lean_Parser_Attr_extern___closed__5_once, _init_l_Lean_Parser_Attr_extern___closed__5);
v___x_1943_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__3, &l_Lean_Parser_Attr_extern___closed__3_once, _init_l_Lean_Parser_Attr_extern___closed__3);
v___x_1944_ = l_Lean_Parser_andthen(v___x_1943_, v___x_1942_);
return v___x_1944_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__7(void){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1945_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__6, &l_Lean_Parser_Attr_extern___closed__6_once, _init_l_Lean_Parser_Attr_extern___closed__6);
v___x_1946_ = lean_unsigned_to_nat(1024u);
v___x_1947_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1948_ = l_Lean_Parser_leadingNode(v___x_1947_, v___x_1946_, v___x_1945_);
return v___x_1948_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__8(void){
_start:
{
lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; 
v___x_1949_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__7, &l_Lean_Parser_Attr_extern___closed__7_once, _init_l_Lean_Parser_Attr_extern___closed__7);
v___x_1950_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__2, &l_Lean_Parser_Attr_extern___closed__2_once, _init_l_Lean_Parser_Attr_extern___closed__2);
v___x_1951_ = l_Lean_Parser_withAntiquot(v___x_1950_, v___x_1949_);
return v___x_1951_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern___closed__9(void){
_start:
{
lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v___x_1952_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__8, &l_Lean_Parser_Attr_extern___closed__8_once, _init_l_Lean_Parser_Attr_extern___closed__8);
v___x_1953_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1954_ = l_Lean_Parser_withCache(v___x_1953_, v___x_1952_);
return v___x_1954_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern(void){
_start:
{
lean_object* v___x_1955_; 
v___x_1955_ = lean_obj_once(&l_Lean_Parser_Attr_extern___closed__9, &l_Lean_Parser_Attr_extern___closed__9_once, _init_l_Lean_Parser_Attr_extern___closed__9);
return v___x_1955_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1(){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1957_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_1958_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1959_ = l_Lean_Parser_Attr_extern;
v___x_1960_ = lean_unsigned_to_nat(1000u);
v___x_1961_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_1957_, v___x_1958_, v___x_1959_, v___x_1960_);
return v___x_1961_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1___boxed(lean_object* v_a_1962_){
_start:
{
lean_object* v_res_1963_; 
v_res_1963_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1();
return v_res_1963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3(){
_start:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1990_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_1991_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___closed__6));
v___x_1992_ = l_Lean_addBuiltinDeclarationRanges(v___x_1990_, v___x_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3___boxed(lean_object* v_a_1993_){
_start:
{
lean_object* v_res_1994_; 
v_res_1994_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3();
return v_res_1994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter(lean_object* v_a_2024_, lean_object* v_a_2025_, lean_object* v_a_2026_, lean_object* v_a_2027_){
_start:
{
lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2031_; 
v___x_2029_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_formatter___closed__0));
v___x_2030_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_formatter___closed__8));
v___x_2031_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2029_, v___x_2030_, v_a_2024_, v_a_2025_, v_a_2026_, v_a_2027_);
return v___x_2031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_formatter___boxed(lean_object* v_a_2032_, lean_object* v_a_2033_, lean_object* v_a_2034_, lean_object* v_a_2035_, lean_object* v_a_2036_){
_start:
{
lean_object* v_res_2037_; 
v_res_2037_ = l_Lean_Parser_Attr_externEntry_formatter(v_a_2032_, v_a_2033_, v_a_2034_, v_a_2035_);
lean_dec(v_a_2035_);
lean_dec_ref(v_a_2034_);
lean_dec(v_a_2033_);
lean_dec_ref(v_a_2032_);
return v_res_2037_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7(){
_start:
{
lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; 
v___x_2045_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2046_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_2047_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___closed__0));
v___x_2048_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_formatter___boxed), 5, 0);
v___x_2049_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2045_, v___x_2046_, v___x_2047_, v___x_2048_);
return v___x_2049_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7___boxed(lean_object* v_a_2050_){
_start:
{
lean_object* v_res_2051_; 
v_res_2051_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7();
return v_res_2051_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__2(void){
_start:
{
lean_object* v___x_2063_; lean_object* v___f_2064_; lean_object* v___x_2065_; 
v___x_2063_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_formatter___boxed), 5, 0);
v___f_2064_ = ((lean_object*)(l_Lean_Parser_Attr_simple_formatter___closed__0));
v___x_2065_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2065_, 0, v___f_2064_);
lean_closure_set(v___x_2065_, 1, v___x_2063_);
return v___x_2065_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__3(void){
_start:
{
lean_object* v___x_2066_; lean_object* v___x_2067_; 
v___x_2066_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__2, &l_Lean_Parser_Attr_extern_formatter___closed__2_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__2);
v___x_2067_ = lean_alloc_closure((void*)(l_Lean_Parser_many_formatter___boxed), 6, 1);
lean_closure_set(v___x_2067_, 0, v___x_2066_);
return v___x_2067_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__4(void){
_start:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; 
v___x_2068_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__3, &l_Lean_Parser_Attr_extern_formatter___closed__3_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__3);
v___x_2069_ = ((lean_object*)(l_Lean_Parser_Attr_extern_formatter___closed__1));
v___x_2070_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Formatter_andthen_formatter___boxed), 7, 2);
lean_closure_set(v___x_2070_, 0, v___x_2069_);
lean_closure_set(v___x_2070_, 1, v___x_2068_);
return v___x_2070_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_formatter___closed__5(void){
_start:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2071_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__4, &l_Lean_Parser_Attr_extern_formatter___closed__4_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__4);
v___x_2072_ = lean_unsigned_to_nat(1024u);
v___x_2073_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_2074_ = lean_alloc_closure((void*)(l_Lean_Parser_leadingNode_formatter___boxed), 8, 3);
lean_closure_set(v___x_2074_, 0, v___x_2073_);
lean_closure_set(v___x_2074_, 1, v___x_2072_);
lean_closure_set(v___x_2074_, 2, v___x_2071_);
return v___x_2074_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter(lean_object* v_a_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_, lean_object* v_a_2078_){
_start:
{
lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2080_ = ((lean_object*)(l_Lean_Parser_Attr_extern_formatter___closed__0));
v___x_2081_ = lean_obj_once(&l_Lean_Parser_Attr_extern_formatter___closed__5, &l_Lean_Parser_Attr_extern_formatter___closed__5_once, _init_l_Lean_Parser_Attr_extern_formatter___closed__5);
v___x_2082_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2080_, v___x_2081_, v_a_2075_, v_a_2076_, v_a_2077_, v_a_2078_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_formatter___boxed(lean_object* v_a_2083_, lean_object* v_a_2084_, lean_object* v_a_2085_, lean_object* v_a_2086_, lean_object* v_a_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_Lean_Parser_Attr_extern_formatter(v_a_2083_, v_a_2084_, v_a_2085_, v_a_2086_);
lean_dec(v_a_2086_);
lean_dec_ref(v_a_2085_);
lean_dec(v_a_2084_);
lean_dec_ref(v_a_2083_);
return v_res_2088_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11(){
_start:
{
lean_object* v___x_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2096_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2097_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_2098_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___closed__0));
v___x_2099_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_extern_formatter___boxed), 5, 0);
v___x_2100_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2096_, v___x_2097_, v___x_2098_, v___x_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11___boxed(lean_object* v_a_2101_){
_start:
{
lean_object* v_res_2102_; 
v_res_2102_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11();
return v_res_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer(lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2137_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__0));
v___x_2138_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry_parenthesizer___closed__8));
v___x_2139_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2137_, v___x_2138_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_externEntry_parenthesizer___boxed(lean_object* v_a_2140_, lean_object* v_a_2141_, lean_object* v_a_2142_, lean_object* v_a_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v_res_2145_; 
v_res_2145_ = l_Lean_Parser_Attr_externEntry_parenthesizer(v_a_2140_, v_a_2141_, v_a_2142_, v_a_2143_);
lean_dec(v_a_2143_);
lean_dec_ref(v_a_2142_);
lean_dec(v_a_2141_);
lean_dec_ref(v_a_2140_);
return v_res_2145_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15(){
_start:
{
lean_object* v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; 
v___x_2153_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2154_ = ((lean_object*)(l_Lean_Parser_Attr_externEntry___closed__1));
v___x_2155_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___closed__0));
v___x_2156_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_parenthesizer___boxed), 5, 0);
v___x_2157_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2153_, v___x_2154_, v___x_2155_, v___x_2156_);
return v___x_2157_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15___boxed(lean_object* v_a_2158_){
_start:
{
lean_object* v_res_2159_; 
v_res_2159_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15();
return v_res_2159_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__2(void){
_start:
{
lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; 
v___x_2171_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_externEntry_parenthesizer___boxed), 5, 0);
v___x_2172_ = ((lean_object*)(l_Lean_Parser_Attr_simple_parenthesizer___closed__2));
v___x_2173_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2173_, 0, v___x_2172_);
lean_closure_set(v___x_2173_, 1, v___x_2171_);
return v___x_2173_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__3(void){
_start:
{
lean_object* v___x_2174_; lean_object* v___x_2175_; 
v___x_2174_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__2, &l_Lean_Parser_Attr_extern_parenthesizer___closed__2_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__2);
v___x_2175_ = lean_alloc_closure((void*)(l_Lean_Parser_many_parenthesizer___boxed), 6, 1);
lean_closure_set(v___x_2175_, 0, v___x_2174_);
return v___x_2175_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__4(void){
_start:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2176_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__3, &l_Lean_Parser_Attr_extern_parenthesizer___closed__3_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__3);
v___x_2177_ = ((lean_object*)(l_Lean_Parser_Attr_extern_parenthesizer___closed__1));
v___x_2178_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_andthen_parenthesizer___boxed), 7, 2);
lean_closure_set(v___x_2178_, 0, v___x_2177_);
lean_closure_set(v___x_2178_, 1, v___x_2176_);
return v___x_2178_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__5(void){
_start:
{
lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; 
v___x_2179_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__4, &l_Lean_Parser_Attr_extern_parenthesizer___closed__4_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__4);
v___x_2180_ = lean_unsigned_to_nat(1024u);
v___x_2181_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_2182_ = lean_alloc_closure((void*)(l_Lean_PrettyPrinter_Parenthesizer_leadingNode_parenthesizer___boxed), 8, 3);
lean_closure_set(v___x_2182_, 0, v___x_2181_);
lean_closure_set(v___x_2182_, 1, v___x_2180_);
lean_closure_set(v___x_2182_, 2, v___x_2179_);
return v___x_2182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer(lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_a_2185_, lean_object* v_a_2186_){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; 
v___x_2188_ = ((lean_object*)(l_Lean_Parser_Attr_extern_parenthesizer___closed__0));
v___x_2189_ = lean_obj_once(&l_Lean_Parser_Attr_extern_parenthesizer___closed__5, &l_Lean_Parser_Attr_extern_parenthesizer___closed__5_once, _init_l_Lean_Parser_Attr_extern_parenthesizer___closed__5);
v___x_2190_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2188_, v___x_2189_, v_a_2183_, v_a_2184_, v_a_2185_, v_a_2186_);
return v___x_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_extern_parenthesizer___boxed(lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lean_Parser_Attr_extern_parenthesizer(v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_);
lean_dec(v_a_2194_);
lean_dec_ref(v_a_2193_);
lean_dec(v_a_2192_);
lean_dec_ref(v_a_2191_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19(){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2204_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2205_ = ((lean_object*)(l_Lean_Parser_Attr_extern___closed__1));
v___x_2206_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___closed__0));
v___x_2207_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_extern_parenthesizer___boxed), 5, 0);
v___x_2208_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2204_, v___x_2205_, v___x_2206_, v___x_2207_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19___boxed(lean_object* v_a_2209_){
_start:
{
lean_object* v_res_2210_; 
v_res_2210_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19();
return v_res_2210_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__2(void){
_start:
{
uint8_t v___x_2217_; uint8_t v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; 
v___x_2217_ = 0;
v___x_2218_ = 1;
v___x_2219_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2220_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__0));
v___x_2221_ = l_Lean_Parser_mkAntiquot(v___x_2220_, v___x_2219_, v___x_2218_, v___x_2217_);
return v___x_2221_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__3(void){
_start:
{
lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2222_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__0));
v___x_2223_ = l_Lean_Parser_symbol(v___x_2222_);
return v___x_2223_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__4(void){
_start:
{
lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; 
v___x_2224_ = l_Lean_Parser_ident;
v___x_2225_ = l_Lean_Parser_skip;
v___x_2226_ = l_Lean_Parser_andthen(v___x_2225_, v___x_2224_);
return v___x_2226_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__5(void){
_start:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; 
v___x_2227_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__4, &l_Lean_Parser_Attr_tactic__alt___closed__4_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__4);
v___x_2228_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__3, &l_Lean_Parser_Attr_tactic__alt___closed__3_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__3);
v___x_2229_ = l_Lean_Parser_andthen(v___x_2228_, v___x_2227_);
return v___x_2229_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__6(void){
_start:
{
lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; 
v___x_2230_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__5, &l_Lean_Parser_Attr_tactic__alt___closed__5_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__5);
v___x_2231_ = lean_unsigned_to_nat(1024u);
v___x_2232_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2233_ = l_Lean_Parser_leadingNode(v___x_2232_, v___x_2231_, v___x_2230_);
return v___x_2233_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__7(void){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; 
v___x_2234_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__6, &l_Lean_Parser_Attr_tactic__alt___closed__6_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__6);
v___x_2235_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__2, &l_Lean_Parser_Attr_tactic__alt___closed__2_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__2);
v___x_2236_ = l_Lean_Parser_withAntiquot(v___x_2235_, v___x_2234_);
return v___x_2236_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt___closed__8(void){
_start:
{
lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; 
v___x_2237_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__7, &l_Lean_Parser_Attr_tactic__alt___closed__7_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__7);
v___x_2238_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2239_ = l_Lean_Parser_withCache(v___x_2238_, v___x_2237_);
return v___x_2239_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__alt(void){
_start:
{
lean_object* v___x_2240_; 
v___x_2240_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__8, &l_Lean_Parser_Attr_tactic__alt___closed__8_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__8);
return v___x_2240_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1(){
_start:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; 
v___x_2242_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_2243_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2244_ = l_Lean_Parser_Attr_tactic__alt;
v___x_2245_ = lean_unsigned_to_nat(1000u);
v___x_2246_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_2242_, v___x_2243_, v___x_2244_, v___x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1___boxed(lean_object* v_a_2247_){
_start:
{
lean_object* v_res_2248_; 
v_res_2248_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1();
return v_res_2248_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3(){
_start:
{
lean_object* v___x_2251_; lean_object* v___x_2252_; lean_object* v___x_2253_; 
v___x_2251_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2252_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___closed__0));
v___x_2253_ = l_Lean_addBuiltinDocString(v___x_2251_, v___x_2252_);
return v___x_2253_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3___boxed(lean_object* v_a_2254_){
_start:
{
lean_object* v_res_2255_; 
v_res_2255_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3();
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5(){
_start:
{
lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; 
v___x_2282_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2283_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___closed__6));
v___x_2284_ = l_Lean_addBuiltinDeclarationRanges(v___x_2282_, v___x_2283_);
return v___x_2284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5___boxed(lean_object* v_a_2285_){
_start:
{
lean_object* v_res_2286_; 
v_res_2286_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5();
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter(lean_object* v_a_2306_, lean_object* v_a_2307_, lean_object* v_a_2308_, lean_object* v_a_2309_){
_start:
{
lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; 
v___x_2311_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_formatter___closed__0));
v___x_2312_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_formatter___closed__4));
v___x_2313_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2311_, v___x_2312_, v_a_2306_, v_a_2307_, v_a_2308_, v_a_2309_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_formatter___boxed(lean_object* v_a_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_){
_start:
{
lean_object* v_res_2319_; 
v_res_2319_ = l_Lean_Parser_Attr_tactic__alt_formatter(v_a_2314_, v_a_2315_, v_a_2316_, v_a_2317_);
lean_dec(v_a_2317_);
lean_dec_ref(v_a_2316_);
lean_dec(v_a_2315_);
lean_dec_ref(v_a_2314_);
return v_res_2319_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9(){
_start:
{
lean_object* v___x_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; 
v___x_2327_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2328_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2329_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___closed__0));
v___x_2330_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__alt_formatter___boxed), 5, 0);
v___x_2331_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2327_, v___x_2328_, v___x_2329_, v___x_2330_);
return v___x_2331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9___boxed(lean_object* v_a_2332_){
_start:
{
lean_object* v_res_2333_; 
v_res_2333_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9();
return v_res_2333_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer(lean_object* v_a_2353_, lean_object* v_a_2354_, lean_object* v_a_2355_, lean_object* v_a_2356_){
_start:
{
lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v___x_2358_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__0));
v___x_2359_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt_parenthesizer___closed__4));
v___x_2360_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2358_, v___x_2359_, v_a_2353_, v_a_2354_, v_a_2355_, v_a_2356_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__alt_parenthesizer___boxed(lean_object* v_a_2361_, lean_object* v_a_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_){
_start:
{
lean_object* v_res_2366_; 
v_res_2366_ = l_Lean_Parser_Attr_tactic__alt_parenthesizer(v_a_2361_, v_a_2362_, v_a_2363_, v_a_2364_);
lean_dec(v_a_2364_);
lean_dec_ref(v_a_2363_);
lean_dec(v_a_2362_);
lean_dec_ref(v_a_2361_);
return v_res_2366_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13(){
_start:
{
lean_object* v___x_2374_; lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; 
v___x_2374_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2375_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__alt___closed__1));
v___x_2376_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___closed__0));
v___x_2377_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__alt_parenthesizer___boxed), 5, 0);
v___x_2378_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2374_, v___x_2375_, v___x_2376_, v___x_2377_);
return v___x_2378_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13___boxed(lean_object* v_a_2379_){
_start:
{
lean_object* v_res_2380_; 
v_res_2380_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13();
return v_res_2380_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__2(void){
_start:
{
uint8_t v___x_2387_; uint8_t v___x_2388_; lean_object* v___x_2389_; lean_object* v___x_2390_; lean_object* v___x_2391_; 
v___x_2387_ = 0;
v___x_2388_ = 1;
v___x_2389_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2390_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__0));
v___x_2391_ = l_Lean_Parser_mkAntiquot(v___x_2390_, v___x_2389_, v___x_2388_, v___x_2387_);
return v___x_2391_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__3(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__0));
v___x_2393_ = l_Lean_Parser_symbol(v___x_2392_);
return v___x_2393_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__4(void){
_start:
{
lean_object* v___x_2394_; lean_object* v___x_2395_; 
v___x_2394_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__alt___closed__4, &l_Lean_Parser_Attr_tactic__alt___closed__4_once, _init_l_Lean_Parser_Attr_tactic__alt___closed__4);
v___x_2395_ = l_Lean_Parser_many1(v___x_2394_);
return v___x_2395_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__5(void){
_start:
{
lean_object* v___x_2396_; lean_object* v___x_2397_; lean_object* v___x_2398_; 
v___x_2396_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__4, &l_Lean_Parser_Attr_tactic__tag___closed__4_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__4);
v___x_2397_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__3, &l_Lean_Parser_Attr_tactic__tag___closed__3_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__3);
v___x_2398_ = l_Lean_Parser_andthen(v___x_2397_, v___x_2396_);
return v___x_2398_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__6(void){
_start:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2399_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__5, &l_Lean_Parser_Attr_tactic__tag___closed__5_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__5);
v___x_2400_ = lean_unsigned_to_nat(1024u);
v___x_2401_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2402_ = l_Lean_Parser_leadingNode(v___x_2401_, v___x_2400_, v___x_2399_);
return v___x_2402_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__7(void){
_start:
{
lean_object* v___x_2403_; lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2403_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__6, &l_Lean_Parser_Attr_tactic__tag___closed__6_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__6);
v___x_2404_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__2, &l_Lean_Parser_Attr_tactic__tag___closed__2_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__2);
v___x_2405_ = l_Lean_Parser_withAntiquot(v___x_2404_, v___x_2403_);
return v___x_2405_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag___closed__8(void){
_start:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; lean_object* v___x_2408_; 
v___x_2406_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__7, &l_Lean_Parser_Attr_tactic__tag___closed__7_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__7);
v___x_2407_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2408_ = l_Lean_Parser_withCache(v___x_2407_, v___x_2406_);
return v___x_2408_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__tag(void){
_start:
{
lean_object* v___x_2409_; 
v___x_2409_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__tag___closed__8, &l_Lean_Parser_Attr_tactic__tag___closed__8_once, _init_l_Lean_Parser_Attr_tactic__tag___closed__8);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1(){
_start:
{
lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2411_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_2412_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2413_ = l_Lean_Parser_Attr_tactic__tag;
v___x_2414_ = lean_unsigned_to_nat(1000u);
v___x_2415_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_2411_, v___x_2412_, v___x_2413_, v___x_2414_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1___boxed(lean_object* v_a_2416_){
_start:
{
lean_object* v_res_2417_; 
v_res_2417_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1();
return v_res_2417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3(){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; 
v___x_2420_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2421_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___closed__0));
v___x_2422_ = l_Lean_addBuiltinDocString(v___x_2420_, v___x_2421_);
return v___x_2422_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3___boxed(lean_object* v_a_2423_){
_start:
{
lean_object* v_res_2424_; 
v_res_2424_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3();
return v_res_2424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5(){
_start:
{
lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2451_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2452_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___closed__6));
v___x_2453_ = l_Lean_addBuiltinDeclarationRanges(v___x_2451_, v___x_2452_);
return v___x_2453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5___boxed(lean_object* v_a_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5();
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter(lean_object* v_a_2474_, lean_object* v_a_2475_, lean_object* v_a_2476_, lean_object* v_a_2477_){
_start:
{
lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; 
v___x_2479_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_formatter___closed__0));
v___x_2480_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_formatter___closed__4));
v___x_2481_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2479_, v___x_2480_, v_a_2474_, v_a_2475_, v_a_2476_, v_a_2477_);
return v___x_2481_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_formatter___boxed(lean_object* v_a_2482_, lean_object* v_a_2483_, lean_object* v_a_2484_, lean_object* v_a_2485_, lean_object* v_a_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l_Lean_Parser_Attr_tactic__tag_formatter(v_a_2482_, v_a_2483_, v_a_2484_, v_a_2485_);
lean_dec(v_a_2485_);
lean_dec_ref(v_a_2484_);
lean_dec(v_a_2483_);
lean_dec_ref(v_a_2482_);
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9(){
_start:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; 
v___x_2495_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2496_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2497_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___closed__0));
v___x_2498_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__tag_formatter___boxed), 5, 0);
v___x_2499_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2495_, v___x_2496_, v___x_2497_, v___x_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9___boxed(lean_object* v_a_2500_){
_start:
{
lean_object* v_res_2501_; 
v_res_2501_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9();
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer(lean_object* v_a_2520_, lean_object* v_a_2521_, lean_object* v_a_2522_, lean_object* v_a_2523_){
_start:
{
lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; 
v___x_2525_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__0));
v___x_2526_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag_parenthesizer___closed__4));
v___x_2527_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2525_, v___x_2526_, v_a_2520_, v_a_2521_, v_a_2522_, v_a_2523_);
return v___x_2527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__tag_parenthesizer___boxed(lean_object* v_a_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_){
_start:
{
lean_object* v_res_2533_; 
v_res_2533_ = l_Lean_Parser_Attr_tactic__tag_parenthesizer(v_a_2528_, v_a_2529_, v_a_2530_, v_a_2531_);
lean_dec(v_a_2531_);
lean_dec_ref(v_a_2530_);
lean_dec(v_a_2529_);
lean_dec_ref(v_a_2528_);
return v_res_2533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13(){
_start:
{
lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; 
v___x_2541_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2542_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__tag___closed__1));
v___x_2543_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___closed__0));
v___x_2544_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__tag_parenthesizer___boxed), 5, 0);
v___x_2545_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2541_, v___x_2542_, v___x_2543_, v___x_2544_);
return v___x_2545_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13___boxed(lean_object* v_a_2546_){
_start:
{
lean_object* v_res_2547_; 
v_res_2547_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13();
return v_res_2547_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__2(void){
_start:
{
uint8_t v___x_2554_; uint8_t v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; 
v___x_2554_ = 0;
v___x_2555_ = 1;
v___x_2556_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2557_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__0));
v___x_2558_ = l_Lean_Parser_mkAntiquot(v___x_2557_, v___x_2556_, v___x_2555_, v___x_2554_);
return v___x_2558_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__3(void){
_start:
{
lean_object* v___x_2559_; lean_object* v___x_2560_; 
v___x_2559_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__0));
v___x_2560_ = l_Lean_Parser_symbol(v___x_2559_);
return v___x_2560_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__4(void){
_start:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; 
v___x_2561_ = l_Lean_Parser_strLit;
v___x_2562_ = l_Lean_Parser_ident;
v___x_2563_ = l_Lean_Parser_orelse(v___x_2562_, v___x_2561_);
return v___x_2563_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__5(void){
_start:
{
lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2564_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__4, &l_Lean_Parser_Attr_tactic__name___closed__4_once, _init_l_Lean_Parser_Attr_tactic__name___closed__4);
v___x_2565_ = l_Lean_Parser_skip;
v___x_2566_ = l_Lean_Parser_andthen(v___x_2565_, v___x_2564_);
return v___x_2566_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__6(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2567_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__5, &l_Lean_Parser_Attr_tactic__name___closed__5_once, _init_l_Lean_Parser_Attr_tactic__name___closed__5);
v___x_2568_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__3, &l_Lean_Parser_Attr_tactic__name___closed__3_once, _init_l_Lean_Parser_Attr_tactic__name___closed__3);
v___x_2569_ = l_Lean_Parser_andthen(v___x_2568_, v___x_2567_);
return v___x_2569_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__7(void){
_start:
{
lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; 
v___x_2570_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__6, &l_Lean_Parser_Attr_tactic__name___closed__6_once, _init_l_Lean_Parser_Attr_tactic__name___closed__6);
v___x_2571_ = lean_unsigned_to_nat(1024u);
v___x_2572_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2573_ = l_Lean_Parser_leadingNode(v___x_2572_, v___x_2571_, v___x_2570_);
return v___x_2573_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__8(void){
_start:
{
lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; 
v___x_2574_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__7, &l_Lean_Parser_Attr_tactic__name___closed__7_once, _init_l_Lean_Parser_Attr_tactic__name___closed__7);
v___x_2575_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__2, &l_Lean_Parser_Attr_tactic__name___closed__2_once, _init_l_Lean_Parser_Attr_tactic__name___closed__2);
v___x_2576_ = l_Lean_Parser_withAntiquot(v___x_2575_, v___x_2574_);
return v___x_2576_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name___closed__9(void){
_start:
{
lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2577_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__8, &l_Lean_Parser_Attr_tactic__name___closed__8_once, _init_l_Lean_Parser_Attr_tactic__name___closed__8);
v___x_2578_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2579_ = l_Lean_Parser_withCache(v___x_2578_, v___x_2577_);
return v___x_2579_;
}
}
static lean_object* _init_l_Lean_Parser_Attr_tactic__name(void){
_start:
{
lean_object* v___x_2580_; 
v___x_2580_ = lean_obj_once(&l_Lean_Parser_Attr_tactic__name___closed__9, &l_Lean_Parser_Attr_tactic__name___closed__9_once, _init_l_Lean_Parser_Attr_tactic__name___closed__9);
return v___x_2580_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1(){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; 
v___x_2582_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_initFn___closed__10_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_));
v___x_2583_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2584_ = l_Lean_Parser_Attr_tactic__name;
v___x_2585_ = lean_unsigned_to_nat(1000u);
v___x_2586_ = l_Lean_Parser_addBuiltinLeadingParser(v___x_2582_, v___x_2583_, v___x_2584_, v___x_2585_);
return v___x_2586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1___boxed(lean_object* v_a_2587_){
_start:
{
lean_object* v_res_2588_; 
v_res_2588_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1();
return v_res_2588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3(){
_start:
{
lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; 
v___x_2591_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2592_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___closed__0));
v___x_2593_ = l_Lean_addBuiltinDocString(v___x_2591_, v___x_2592_);
return v___x_2593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3___boxed(lean_object* v_a_2594_){
_start:
{
lean_object* v_res_2595_; 
v_res_2595_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3();
return v_res_2595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter(lean_object* v_a_2618_, lean_object* v_a_2619_, lean_object* v_a_2620_, lean_object* v_a_2621_){
_start:
{
lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; 
v___x_2623_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_formatter___closed__0));
v___x_2624_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_formatter___closed__5));
v___x_2625_ = l_Lean_PrettyPrinter_Formatter_orelse_formatter(v___x_2623_, v___x_2624_, v_a_2618_, v_a_2619_, v_a_2620_, v_a_2621_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_formatter___boxed(lean_object* v_a_2626_, lean_object* v_a_2627_, lean_object* v_a_2628_, lean_object* v_a_2629_, lean_object* v_a_2630_){
_start:
{
lean_object* v_res_2631_; 
v_res_2631_ = l_Lean_Parser_Attr_tactic__name_formatter(v_a_2626_, v_a_2627_, v_a_2628_, v_a_2629_);
lean_dec(v_a_2629_);
lean_dec_ref(v_a_2628_);
lean_dec(v_a_2627_);
lean_dec_ref(v_a_2626_);
return v_res_2631_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7(){
_start:
{
lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
v___x_2639_ = l_Lean_PrettyPrinter_formatterAttribute;
v___x_2640_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2641_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___closed__0));
v___x_2642_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__name_formatter___boxed), 5, 0);
v___x_2643_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2639_, v___x_2640_, v___x_2641_, v___x_2642_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7___boxed(lean_object* v_a_2644_){
_start:
{
lean_object* v_res_2645_; 
v_res_2645_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7();
return v_res_2645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer(lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_){
_start:
{
lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
v___x_2673_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__0));
v___x_2674_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name_parenthesizer___closed__5));
v___x_2675_ = l_Lean_PrettyPrinter_Parenthesizer_withAntiquot_parenthesizer(v___x_2673_, v___x_2674_, v_a_2668_, v_a_2669_, v_a_2670_, v_a_2671_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_Parser_Attr_tactic__name_parenthesizer___boxed(lean_object* v_a_2676_, lean_object* v_a_2677_, lean_object* v_a_2678_, lean_object* v_a_2679_, lean_object* v_a_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l_Lean_Parser_Attr_tactic__name_parenthesizer(v_a_2676_, v_a_2677_, v_a_2678_, v_a_2679_);
lean_dec(v_a_2679_);
lean_dec_ref(v_a_2678_);
lean_dec(v_a_2677_);
lean_dec_ref(v_a_2676_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11(){
_start:
{
lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; 
v___x_2689_ = l_Lean_PrettyPrinter_parenthesizerAttribute;
v___x_2690_ = ((lean_object*)(l_Lean_Parser_Attr_tactic__name___closed__1));
v___x_2691_ = ((lean_object*)(l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___closed__0));
v___x_2692_ = lean_alloc_closure((void*)(l_Lean_Parser_Attr_tactic__name_parenthesizer___boxed), 5, 0);
v___x_2693_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_2689_, v___x_2690_, v___x_2691_, v___x_2692_);
return v___x_2693_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11___boxed(lean_object* v_a_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11();
return v_res_2695_;
}
}
lean_object* runtime_initialize_Lean_Parser_Extra(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Parser_Attr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_1857506627____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_initFn_00___x40_Lean_Parser_Attr_249558774____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Priority_numPrio = _init_l_Lean_Parser_Priority_numPrio();
lean_mark_persistent(l_Lean_Parser_Priority_numPrio);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Priority_numPrio___regBuiltin_Lean_Parser_Priority_numPrio_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_simple = _init_l_Lean_Parser_Attr_simple();
lean_mark_persistent(l_Lean_Parser_Attr_simple);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_simple___regBuiltin_Lean_Parser_Attr_simple_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_macro = _init_l_Lean_Parser_Attr_macro();
lean_mark_persistent(l_Lean_Parser_Attr_macro);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_macro___regBuiltin_Lean_Parser_Attr_macro_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_export = _init_l_Lean_Parser_Attr_export();
lean_mark_persistent(l_Lean_Parser_Attr_export);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_export___regBuiltin_Lean_Parser_Attr_export_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_recursor = _init_l_Lean_Parser_Attr_recursor();
lean_mark_persistent(l_Lean_Parser_Attr_recursor);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_recursor___regBuiltin_Lean_Parser_Attr_recursor_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_class = _init_l_Lean_Parser_Attr_class();
lean_mark_persistent(l_Lean_Parser_Attr_class);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_class___regBuiltin_Lean_Parser_Attr_class_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_instance = _init_l_Lean_Parser_Attr_instance();
lean_mark_persistent(l_Lean_Parser_Attr_instance);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_instance___regBuiltin_Lean_Parser_Attr_instance_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_default__instance = _init_l_Lean_Parser_Attr_default__instance();
lean_mark_persistent(l_Lean_Parser_Attr_default__instance);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_default__instance___regBuiltin_Lean_Parser_Attr_default__instance_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_specialize = _init_l_Lean_Parser_Attr_specialize();
lean_mark_persistent(l_Lean_Parser_Attr_specialize);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_specialize___regBuiltin_Lean_Parser_Attr_specialize_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_implemented__by = _init_l_Lean_Parser_Attr_implemented__by();
lean_mark_persistent(l_Lean_Parser_Attr_implemented__by);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_implemented__by___regBuiltin_Lean_Parser_Attr_implemented__by_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_externEntry = _init_l_Lean_Parser_Attr_externEntry();
lean_mark_persistent(l_Lean_Parser_Attr_externEntry);
l_Lean_Parser_Attr_extern = _init_l_Lean_Parser_Attr_extern();
lean_mark_persistent(l_Lean_Parser_Attr_extern);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_declRange__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_formatter__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_externEntry_parenthesizer__15();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_extern___regBuiltin_Lean_Parser_Attr_extern_parenthesizer__19();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_tactic__alt = _init_l_Lean_Parser_Attr_tactic__alt();
lean_mark_persistent(l_Lean_Parser_Attr_tactic__alt);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__alt___regBuiltin_Lean_Parser_Attr_tactic__alt_parenthesizer__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_tactic__tag = _init_l_Lean_Parser_Attr_tactic__tag();
lean_mark_persistent(l_Lean_Parser_Attr_tactic__tag);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_declRange__5();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_formatter__9();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__tag___regBuiltin_Lean_Parser_Attr_tactic__tag_parenthesizer__13();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Parser_Attr_tactic__name = _init_l_Lean_Parser_Attr_tactic__name();
lean_mark_persistent(l_Lean_Parser_Attr_tactic__name);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_formatter__7();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Parser_Attr_0__Lean_Parser_Attr_tactic__name___regBuiltin_Lean_Parser_Attr_tactic__name_parenthesizer__11();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Parser_Attr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Parser_Extra(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Parser_Attr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Parser_Extra(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Parser_Attr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Parser_Attr(builtin);
}
#ifdef __cplusplus
}
#endif
