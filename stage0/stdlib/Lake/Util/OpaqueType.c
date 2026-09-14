// Lean compiler output
// Module: Lake.Util.OpaqueType
// Imports: public meta import Lake.Util.Binder public import Init.Prelude
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_String_toRawSubstring_x27(lean_object*);
lean_object* l_Lean_addMacroScope(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_mkApp(lean_object*, lean_object*);
lean_object* l_Array_mkArray1___redArg(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_mkIdentFrom(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Array_mkArray0___redArg();
uint8_t l_Lean_Name_hasMacroScopes(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_extractMacroScopes(lean_object*);
lean_object* l_Lean_MacroScopesView_review(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lake_expandBinders(lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_BinderSyntaxView_mkBinder(lean_object*);
lean_object* l_Lake_BinderSyntaxView_mkArgument(lean_object*);
lean_object* l_Array_unzip___redArg(lean_object*);
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Syntax_getOptional_x3f(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lake"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__0 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nonemptyTypeCmd"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__1 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__1_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__2_value_aux_0),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__1_value),LEAN_SCALAR_PTR_LITERAL(94, 29, 126, 4, 221, 16, 76, 39)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__2 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__2_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__3 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__3_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__3_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__4 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "optional"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__5 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__5_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__5_value),LEAN_SCALAR_PTR_LITERAL(233, 141, 154, 50, 143, 135, 42, 252)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__6 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__6_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "docComment"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__7 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__7_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__7_value),LEAN_SCALAR_PTR_LITERAL(229, 56, 215, 222, 243, 187, 251, 54)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__8 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__8_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__8_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__9 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__9_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__6_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__9_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__10 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__10_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "visibility"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__11 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__11_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__11_value),LEAN_SCALAR_PTR_LITERAL(70, 205, 25, 140, 55, 50, 241, 254)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__12 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__12_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__12_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__13 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__13_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__6_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__13_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__14 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__14_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__10_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__14_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__15 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__15_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "nonempty_type "};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__16 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__16_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__16_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__17 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__17_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__15_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__17_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__18 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__18_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__19 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__19_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__19_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__20 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__20_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__20_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__21 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__18_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__22 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__22_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "many"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__23 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__23_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__23_value),LEAN_SCALAR_PTR_LITERAL(41, 35, 40, 86, 189, 97, 244, 31)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__24 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__24_value;
static const lean_string_object l_Lake_nonemptyTypeCmd___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "binder"};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__25 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__25_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__26_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__26_value_aux_0),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__25_value),LEAN_SCALAR_PTR_LITERAL(90, 139, 132, 2, 118, 46, 191, 226)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__26 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__26_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 8}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__26_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__27 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__27_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__24_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__27_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__28 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__28_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__22_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__28_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__29 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__29_value;
static const lean_ctor_object l_Lake_nonemptyTypeCmd___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__2_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__29_value)}};
static const lean_object* l_Lake_nonemptyTypeCmd___closed__30 = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__30_value;
LEAN_EXPORT const lean_object* l_Lake_nonemptyTypeCmd = (const lean_object*)&l_Lake_nonemptyTypeCmd___closed__30_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nonemptyType"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(lean_object*);
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "instNonempty"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__3(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "structure"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "structureTk"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "optDeclSig"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Type"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "where"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "structCtor"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofRef"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(92, 160, 209, 96, 41, 58, 108, 195)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "::"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "structFields"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "structSimpleBinder"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ref"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(35, 123, 1, 146, 14, 217, 108, 179)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "pipeProj"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "|>."};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(112, 109, 54, 158, 248, 169, 165, 159)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "optDeriving"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "instance"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "attrKind"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "app"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Nonempty"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24_value),LEAN_SCALAR_PTR_LITERAL(142, 191, 110, 220, 210, 100, 152, 183)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declValSimple"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "anonymousCtor"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Classical.choice"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "choice"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__35_value),LEAN_SCALAR_PTR_LITERAL(76, 246, 154, 249, 193, 98, 251, 55)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paren"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "hygienicLParen"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "hygieneInfo"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__40_value),LEAN_SCALAR_PTR_LITERAL(27, 64, 36, 144, 170, 151, 255, 136)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__44_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "property"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46_value),LEAN_SCALAR_PTR_LITERAL(89, 150, 111, 5, 6, 150, 149, 192)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Termination"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "suffix"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value;
static const lean_array_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opaque"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "declId"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value;
static const lean_array_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "declSig"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "typeSpec"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "explicitUniv"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "NonemptyType"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62_value),LEAN_SCALAR_PTR_LITERAL(87, 253, 156, 237, 229, 153, 40, 17)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__66_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__65_value),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__67_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__68 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__68_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ".{"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__69 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__69_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__70 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__70_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__70_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__71 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__71_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "0"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__72 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__72_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__73 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__73_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__74 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__74_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__74_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__75 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__75_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Command"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "declaration"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__79 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__79_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__79_value),LEAN_SCALAR_PTR_LITERAL(157, 246, 223, 221, 242, 35, 238, 117)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "declModifiers"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__81 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__81_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__81_value),LEAN_SCALAR_PTR_LITERAL(0, 165, 146, 53, 36, 89, 7, 202)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_hydrateOpaqueTypeCmd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "hydrateOpaqueTypeCmd"};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__0 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__0_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(111, 69, 182, 10, 108, 181, 149, 180)}};
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__1_value_aux_0),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(131, 247, 39, 29, 239, 7, 87, 22)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__1 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__1_value;
static const lean_string_object l_Lake_hydrateOpaqueTypeCmd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "hydrate_opaque_type "};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__2 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__2_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__2_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__3 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__3_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__14_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__3_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__4 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__4_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__4_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__5 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__5_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__5_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__6 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__6_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__24_value),((lean_object*)&l_Lake_nonemptyTypeCmd___closed__21_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__7 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__7_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&l_Lake_nonemptyTypeCmd___closed__4_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__6_value),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__7_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__8 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__8_value;
static const lean_ctor_object l_Lake_hydrateOpaqueTypeCmd___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__8_value)}};
static const lean_object* l_Lake_hydrateOpaqueTypeCmd___closed__9 = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__9_value;
LEAN_EXPORT const lean_object* l_Lake_hydrateOpaqueTypeCmd = (const lean_object*)&l_Lake_hydrateOpaqueTypeCmd___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implicitBinder"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__0_value),LEAN_SCALAR_PTR_LITERAL(39, 181, 62, 102, 86, 14, 161, 96)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "{"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Coe"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(215, 70, 184, 182, 52, 50, 221, 222)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instBinder"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Inhabited"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(174, 152, 115, 107, 166, 56, 116, 8)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(223, 214, 247, 82, 130, 198, 123, 173)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unsafeMk"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__19_value),LEAN_SCALAR_PTR_LITERAL(17, 66, 223, 134, 53, 49, 169, 208)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instCoeMk"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(188, 43, 242, 158, 192, 163, 123, 89)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__25_value),LEAN_SCALAR_PTR_LITERAL(149, 195, 233, 5, 41, 184, 182, 9)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "unsafeGet"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(172, 192, 107, 19, 95, 77, 28, 221)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instCoeGet"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__31_value),LEAN_SCALAR_PTR_LITERAL(4, 9, 13, 81, 139, 59, 11, 128)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "namespace"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34_value),LEAN_SCALAR_PTR_LITERAL(84, 17, 124, 142, 243, 161, 231, 243)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "attributes"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(66, 184, 196, 169, 25, 125, 40, 35)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "@["};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "attrInstance"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__39_value),LEAN_SCALAR_PTR_LITERAL(241, 75, 242, 110, 47, 5, 20, 104)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22_value),LEAN_SCALAR_PTR_LITERAL(32, 164, 20, 104, 12, 221, 204, 110)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Attr"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "simple"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__42_value),LEAN_SCALAR_PTR_LITERAL(7, 175, 252, 195, 22, 42, 161, 63)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__43_value),LEAN_SCALAR_PTR_LITERAL(107, 67, 254, 234, 65, 174, 209, 53)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "inline"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45_value),LEAN_SCALAR_PTR_LITERAL(92, 198, 166, 26, 13, 231, 61, 113)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__48_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "private"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(213, 248, 16, 228, 25, 227, 72, 143)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "unsafe"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53_value),LEAN_SCALAR_PTR_LITERAL(79, 160, 60, 55, 136, 115, 80, 144)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "definition"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(248, 187, 217, 228, 39, 184, 218, 135)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "def"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55_value),LEAN_SCALAR_PTR_LITERAL(243, 92, 136, 33, 216, 98, 92, 25)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__75_value),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56_value)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(26, 9, 103, 232, 183, 57, 246, 75)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59_value),LEAN_SCALAR_PTR_LITERAL(77, 126, 241, 117, 174, 189, 108, 62)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "arrow"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__64_value),LEAN_SCALAR_PTR_LITERAL(182, 146, 143, 73, 122, 115, 5, 207)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23_value),LEAN_SCALAR_PTR_LITERAL(69, 118, 10, 41, 220, 156, 243, 179)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "→"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78_value),LEAN_SCALAR_PTR_LITERAL(214, 208, 105, 11, 221, 56, 173, 240)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28_value),LEAN_SCALAR_PTR_LITERAL(228, 117, 47, 248, 145, 185, 135, 188)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "unsafeCast"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69_value),LEAN_SCALAR_PTR_LITERAL(190, 168, 242, 108, 36, 6, 114, 127)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__72_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73_value;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value_aux_0),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value_aux_1),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51_value),LEAN_SCALAR_PTR_LITERAL(128, 225, 226, 49, 186, 161, 212, 105)}};
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value_aux_2),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52_value),LEAN_SCALAR_PTR_LITERAL(245, 187, 99, 45, 217, 244, 244, 120)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74_value;
static const lean_string_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "implemented_by"};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value;
static lean_once_cell_t l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76;
static const lean_ctor_object l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75_value),LEAN_SCALAR_PTR_LITERAL(221, 249, 143, 128, 101, 138, 146, 72)}};
static const lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77 = (const lean_object*)&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77_value;
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(lean_object* v_x_70_){
_start:
{
lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_71_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0___closed__0));
v___x_72_ = l_Lean_Name_str___override(v_x_70_, v___x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(lean_object* v_x_74_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1___closed__0));
v___x_76_ = l_Lean_Name_str___override(v_x_74_, v___x_75_);
return v___x_76_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(size_t v_sz_77_, size_t v_i_78_, lean_object* v_bs_79_){
_start:
{
uint8_t v___x_80_; 
v___x_80_ = lean_usize_dec_lt(v_i_78_, v_sz_77_);
if (v___x_80_ == 0)
{
return v_bs_79_;
}
else
{
lean_object* v_v_81_; lean_object* v___x_82_; lean_object* v_bs_x27_83_; size_t v___x_84_; size_t v___x_85_; lean_object* v___x_86_; 
v_v_81_ = lean_array_uget(v_bs_79_, v_i_78_);
v___x_82_ = lean_unsigned_to_nat(0u);
v_bs_x27_83_ = lean_array_uset(v_bs_79_, v_i_78_, v___x_82_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_add(v_i_78_, v___x_84_);
v___x_86_ = lean_array_uset(v_bs_x27_83_, v_i_78_, v_v_81_);
v_i_78_ = v___x_85_;
v_bs_79_ = v___x_86_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1___boxed(lean_object* v_sz_88_, lean_object* v_i_89_, lean_object* v_bs_90_){
_start:
{
size_t v_sz_boxed_91_; size_t v_i_boxed_92_; lean_object* v_res_93_; 
v_sz_boxed_91_ = lean_unbox_usize(v_sz_88_);
lean_dec(v_sz_88_);
v_i_boxed_92_ = lean_unbox_usize(v_i_89_);
lean_dec(v_i_89_);
v_res_93_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(v_sz_boxed_91_, v_i_boxed_92_, v_bs_90_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__3(size_t v_sz_94_, size_t v_i_95_, lean_object* v_bs_96_){
_start:
{
uint8_t v___x_97_; 
v___x_97_ = lean_usize_dec_lt(v_i_95_, v_sz_94_);
if (v___x_97_ == 0)
{
return v_bs_96_;
}
else
{
lean_object* v_v_98_; lean_object* v___x_99_; lean_object* v_bs_x27_100_; size_t v___x_101_; size_t v___x_102_; lean_object* v___x_103_; 
v_v_98_ = lean_array_uget(v_bs_96_, v_i_95_);
v___x_99_ = lean_unsigned_to_nat(0u);
v_bs_x27_100_ = lean_array_uset(v_bs_96_, v_i_95_, v___x_99_);
v___x_101_ = ((size_t)1ULL);
v___x_102_ = lean_usize_add(v_i_95_, v___x_101_);
v___x_103_ = lean_array_uset(v_bs_x27_100_, v_i_95_, v_v_98_);
v_i_95_ = v___x_102_;
v_bs_96_ = v___x_103_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__3___boxed(lean_object* v_sz_105_, lean_object* v_i_106_, lean_object* v_bs_107_){
_start:
{
size_t v_sz_boxed_108_; size_t v_i_boxed_109_; lean_object* v_res_110_; 
v_sz_boxed_108_ = lean_unbox_usize(v_sz_105_);
lean_dec(v_sz_105_);
v_i_boxed_109_ = lean_unbox_usize(v_i_106_);
lean_dec(v_i_106_);
v_res_110_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__3(v_sz_boxed_108_, v_i_boxed_109_, v_bs_107_);
return v_res_110_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(size_t v_sz_111_, size_t v_i_112_, lean_object* v_bs_113_){
_start:
{
uint8_t v___x_114_; 
v___x_114_ = lean_usize_dec_lt(v_i_112_, v_sz_111_);
if (v___x_114_ == 0)
{
return v_bs_113_;
}
else
{
lean_object* v_v_115_; lean_object* v___x_116_; lean_object* v_bs_x27_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; size_t v___x_121_; size_t v___x_122_; lean_object* v___x_123_; 
v_v_115_ = lean_array_uget(v_bs_113_, v_i_112_);
v___x_116_ = lean_unsigned_to_nat(0u);
v_bs_x27_117_ = lean_array_uset(v_bs_113_, v_i_112_, v___x_116_);
lean_inc(v_v_115_);
v___x_118_ = l_Lake_BinderSyntaxView_mkBinder(v_v_115_);
v___x_119_ = l_Lake_BinderSyntaxView_mkArgument(v_v_115_);
v___x_120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_118_);
lean_ctor_set(v___x_120_, 1, v___x_119_);
v___x_121_ = ((size_t)1ULL);
v___x_122_ = lean_usize_add(v_i_112_, v___x_121_);
v___x_123_ = lean_array_uset(v_bs_x27_117_, v_i_112_, v___x_120_);
v_i_112_ = v___x_122_;
v_bs_113_ = v___x_123_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0___boxed(lean_object* v_sz_125_, lean_object* v_i_126_, lean_object* v_bs_127_){
_start:
{
size_t v_sz_boxed_128_; size_t v_i_boxed_129_; lean_object* v_res_130_; 
v_sz_boxed_128_ = lean_unbox_usize(v_sz_125_);
lean_dec(v_sz_125_);
v_i_boxed_129_ = lean_unbox_usize(v_i_126_);
lean_dec(v_i_126_);
v_res_130_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(v_sz_boxed_128_, v_i_boxed_129_, v_bs_127_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__2(size_t v_sz_131_, size_t v_i_132_, lean_object* v_bs_133_){
_start:
{
uint8_t v___x_134_; 
v___x_134_ = lean_usize_dec_lt(v_i_132_, v_sz_131_);
if (v___x_134_ == 0)
{
return v_bs_133_;
}
else
{
lean_object* v_v_135_; lean_object* v___x_136_; lean_object* v_bs_x27_137_; size_t v___x_138_; size_t v___x_139_; lean_object* v___x_140_; 
v_v_135_ = lean_array_uget(v_bs_133_, v_i_132_);
v___x_136_ = lean_unsigned_to_nat(0u);
v_bs_x27_137_ = lean_array_uset(v_bs_133_, v_i_132_, v___x_136_);
v___x_138_ = ((size_t)1ULL);
v___x_139_ = lean_usize_add(v_i_132_, v___x_138_);
v___x_140_ = lean_array_uset(v_bs_x27_137_, v_i_132_, v_v_135_);
v_i_132_ = v___x_139_;
v_bs_133_ = v___x_140_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__2___boxed(lean_object* v_sz_142_, lean_object* v_i_143_, lean_object* v_bs_144_){
_start:
{
size_t v_sz_boxed_145_; size_t v_i_boxed_146_; lean_object* v_res_147_; 
v_sz_boxed_145_ = lean_unbox_usize(v_sz_142_);
lean_dec(v_sz_142_);
v_i_boxed_146_ = lean_unbox_usize(v_i_143_);
lean_dec(v_i_143_);
v_res_147_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__2(v_sz_boxed_145_, v_i_boxed_146_, v_bs_144_);
return v_res_147_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8(void){
_start:
{
lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_156_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__7));
v___x_157_ = l_String_toRawSubstring_x27(v___x_156_);
return v___x_157_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14(void){
_start:
{
lean_object* v___x_164_; lean_object* v___x_165_; 
v___x_164_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__13));
v___x_165_ = l_String_toRawSubstring_x27(v___x_164_);
return v___x_165_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18(void){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3));
v___x_171_ = l_String_toRawSubstring_x27(v___x_170_);
return v___x_171_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25(void){
_start:
{
lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_179_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__24));
v___x_180_ = l_String_toRawSubstring_x27(v___x_179_);
return v___x_180_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33(void){
_start:
{
lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_190_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__32));
v___x_191_ = l_String_toRawSubstring_x27(v___x_190_);
return v___x_191_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43(void){
_start:
{
lean_object* v___x_204_; lean_object* v___x_205_; 
v___x_204_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__42));
v___x_205_ = l_String_toRawSubstring_x27(v___x_204_);
return v___x_205_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; 
v___x_211_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__46));
v___x_212_ = l_String_toRawSubstring_x27(v___x_211_);
return v___x_212_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63(void){
_start:
{
lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_231_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__62));
v___x_232_ = l_String_toRawSubstring_x27(v___x_231_);
return v___x_232_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83(void){
_start:
{
lean_object* v___x_270_; 
v___x_270_ = l_Array_mkArray0___redArg();
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1(lean_object* v_x_271_, lean_object* v_a_272_, lean_object* v___y_273_){
_start:
{
lean_object* v___x_274_; uint8_t v___x_275_; 
v___x_274_ = ((lean_object*)(l_Lake_nonemptyTypeCmd___closed__2));
lean_inc(v_x_271_);
v___x_275_ = l_Lean_Syntax_isOfKind(v_x_271_, v___x_274_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; 
lean_dec(v_x_271_);
v___x_276_ = lean_box(1);
v___x_277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___y_273_);
return v___x_277_;
}
else
{
lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v_id_283_; lean_object* v___y_285_; lean_object* v___y_286_; lean_object* v___y_287_; lean_object* v___y_288_; lean_object* v___y_289_; lean_object* v___y_290_; lean_object* v___y_291_; lean_object* v___y_292_; lean_object* v___y_293_; lean_object* v___y_294_; lean_object* v___y_295_; lean_object* v___y_296_; lean_object* v___y_297_; lean_object* v___y_298_; lean_object* v___y_299_; lean_object* v___y_300_; lean_object* v___y_301_; lean_object* v___y_302_; lean_object* v___y_303_; lean_object* v___y_304_; lean_object* v___y_305_; lean_object* v___y_306_; lean_object* v___y_307_; lean_object* v___y_308_; lean_object* v___y_309_; lean_object* v___y_310_; lean_object* v___y_311_; lean_object* v___y_312_; lean_object* v___y_313_; lean_object* v___y_460_; lean_object* v___y_461_; lean_object* v___y_462_; lean_object* v___y_463_; lean_object* v___y_464_; lean_object* v___y_465_; lean_object* v___y_466_; lean_object* v___y_467_; lean_object* v___y_468_; lean_object* v___y_469_; lean_object* v___y_470_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___y_473_; lean_object* v___y_474_; lean_object* v___y_475_; lean_object* v___y_476_; lean_object* v___y_477_; lean_object* v___y_478_; lean_object* v___y_479_; lean_object* v___y_480_; lean_object* v___y_481_; lean_object* v___y_482_; lean_object* v___y_483_; lean_object* v___y_484_; lean_object* v___y_485_; lean_object* v___y_486_; lean_object* v___y_487_; lean_object* v___y_488_; lean_object* v___y_495_; lean_object* v___y_496_; lean_object* v___y_497_; lean_object* v___y_498_; lean_object* v___y_499_; lean_object* v___y_500_; lean_object* v___y_501_; lean_object* v___y_502_; lean_object* v___y_503_; lean_object* v___y_504_; lean_object* v___y_505_; size_t v___y_506_; lean_object* v___y_507_; lean_object* v___y_508_; lean_object* v___y_509_; lean_object* v___y_510_; lean_object* v___y_511_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; lean_object* v___y_515_; lean_object* v___y_573_; size_t v___y_574_; lean_object* v___y_575_; uint8_t v___y_576_; lean_object* v___y_577_; lean_object* v___y_578_; lean_object* v___y_579_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_600_; size_t v___y_601_; lean_object* v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; lean_object* v___y_605_; lean_object* v___y_606_; lean_object* v___y_607_; lean_object* v___x_626_; lean_object* v___x_627_; lean_object* v_bs_628_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_668_; lean_object* v___x_679_; 
v___x_278_ = lean_unsigned_to_nat(0u);
v___x_279_ = l_Lean_Syntax_getArg(v_x_271_, v___x_278_);
v___x_280_ = lean_unsigned_to_nat(1u);
v___x_281_ = l_Lean_Syntax_getArg(v_x_271_, v___x_280_);
v___x_282_ = lean_unsigned_to_nat(3u);
v_id_283_ = l_Lean_Syntax_getArg(v_x_271_, v___x_282_);
v___x_626_ = lean_unsigned_to_nat(4u);
v___x_627_ = l_Lean_Syntax_getArg(v_x_271_, v___x_626_);
lean_dec(v_x_271_);
v_bs_628_ = l_Lean_Syntax_getArgs(v___x_627_);
lean_dec(v___x_627_);
v___x_679_ = l_Lean_Syntax_getOptional_x3f(v___x_281_);
lean_dec(v___x_281_);
if (lean_obj_tag(v___x_679_) == 0)
{
lean_object* v___x_680_; 
v___x_680_ = lean_box(0);
v___y_668_ = v___x_680_;
goto v___jp_667_;
}
else
{
lean_object* v_val_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
v_val_681_ = lean_ctor_get(v___x_679_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_679_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_679_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_val_681_);
lean_dec(v___x_679_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_val_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
v___y_668_ = v___x_686_;
goto v___jp_667_;
}
}
}
v___jp_284_:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_324_; lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
lean_inc_ref(v___y_309_);
v___x_314_ = l_Array_append___redArg(v___y_309_, v___y_313_);
lean_dec_ref(v___y_313_);
lean_inc_n(v___y_292_, 12);
lean_inc_n(v___y_286_, 61);
v___x_315_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_315_, 0, v___y_286_);
lean_ctor_set(v___x_315_, 1, v___y_292_);
lean_ctor_set(v___x_315_, 2, v___x_314_);
lean_inc_ref(v___x_315_);
lean_inc_n(v___y_302_, 34);
lean_inc_n(v___y_311_, 3);
v___x_316_ = l_Lean_Syntax_node7(v___y_286_, v___y_311_, v___y_288_, v___y_302_, v___x_315_, v___y_302_, v___y_302_, v___y_302_, v___y_302_);
v___x_317_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__0));
lean_inc_ref_n(v___y_299_, 9);
lean_inc_ref_n(v___y_308_, 17);
lean_inc_ref_n(v___y_301_, 18);
v___x_318_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_317_);
v___x_319_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__1));
v___x_320_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_319_);
v___x_321_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_321_, 0, v___y_286_);
lean_ctor_set(v___x_321_, 1, v___x_317_);
v___x_322_ = l_Lean_Syntax_node1(v___y_286_, v___x_320_, v___x_321_);
lean_inc(v_id_283_);
v___x_323_ = lean_array_push(v___y_298_, v_id_283_);
v___x_324_ = lean_array_push(v___x_323_, v___y_294_);
lean_inc(v___y_310_);
lean_inc(v___y_307_);
v___x_325_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_325_, 0, v___y_307_);
lean_ctor_set(v___x_325_, 1, v___y_310_);
lean_ctor_set(v___x_325_, 2, v___x_324_);
v___x_326_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__2));
v___x_327_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_326_);
v___x_328_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__3));
lean_inc_ref_n(v___y_295_, 6);
v___x_329_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_295_, v___x_328_);
v___x_330_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__4));
v___x_331_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_331_, 0, v___y_286_);
lean_ctor_set(v___x_331_, 1, v___x_330_);
v___x_332_ = l_Lean_Syntax_node2(v___y_286_, v___x_329_, v___x_331_, v___y_302_);
lean_inc_n(v___y_305_, 2);
lean_inc_n(v___y_289_, 2);
v___x_333_ = l_Lean_Syntax_node2(v___y_286_, v___y_289_, v___y_305_, v___x_332_);
v___x_334_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_333_);
lean_inc(v___x_327_);
v___x_335_ = l_Lean_Syntax_node2(v___y_286_, v___x_327_, v___y_297_, v___x_334_);
v___x_336_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__5));
v___x_337_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_337_, 0, v___y_286_);
lean_ctor_set(v___x_337_, 1, v___x_336_);
v___x_338_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__6));
v___x_339_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_338_);
v___x_340_ = l_Lean_Syntax_node7(v___y_286_, v___y_311_, v___y_302_, v___y_302_, v___y_302_, v___y_302_, v___y_302_, v___y_302_, v___y_302_);
v___x_341_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__8);
v___x_342_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__9));
lean_inc_n(v___y_291_, 7);
lean_inc_n(v___y_296_, 7);
v___x_343_ = l_Lean_addMacroScope(v___y_296_, v___x_342_, v___y_291_);
lean_inc_n(v___y_306_, 7);
v___x_344_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_344_, 0, v___y_286_);
lean_ctor_set(v___x_344_, 1, v___x_341_);
lean_ctor_set(v___x_344_, 2, v___x_343_);
lean_ctor_set(v___x_344_, 3, v___y_306_);
v___x_345_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__10));
v___x_346_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_346_, 0, v___y_286_);
lean_ctor_set(v___x_346_, 1, v___x_345_);
lean_inc(v___x_340_);
v___x_347_ = l_Lean_Syntax_node4(v___y_286_, v___x_339_, v___x_340_, v___x_344_, v___y_302_, v___x_346_);
v___x_348_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_347_);
v___x_349_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__11));
v___x_350_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_349_);
v___x_351_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__12));
v___x_352_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_351_);
v___x_353_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__14);
v___x_354_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__15));
v___x_355_ = l_Lean_addMacroScope(v___y_296_, v___x_354_, v___y_291_);
v___x_356_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_356_, 0, v___y_286_);
lean_ctor_set(v___x_356_, 1, v___x_353_);
lean_ctor_set(v___x_356_, 2, v___x_355_);
lean_ctor_set(v___x_356_, 3, v___y_306_);
v___x_357_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__16));
v___x_358_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_295_, v___x_357_);
v___x_359_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__17));
v___x_360_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_360_, 0, v___y_286_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
v___x_361_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__18);
v___x_362_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__19));
v___x_363_ = l_Lean_addMacroScope(v___y_296_, v___x_362_, v___y_291_);
v___x_364_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_364_, 0, v___y_286_);
lean_ctor_set(v___x_364_, 1, v___x_361_);
lean_ctor_set(v___x_364_, 2, v___x_363_);
lean_ctor_set(v___x_364_, 3, v___y_306_);
lean_inc_ref(v___x_360_);
lean_inc(v___y_300_);
lean_inc(v___x_358_);
v___x_365_ = l_Lean_Syntax_node5(v___y_286_, v___x_358_, v___y_300_, v___x_360_, v___x_364_, v___y_302_, v___y_302_);
v___x_366_ = l_Lean_Syntax_node2(v___y_286_, v___y_289_, v___y_305_, v___x_365_);
v___x_367_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_366_);
v___x_368_ = l_Lean_Syntax_node2(v___y_286_, v___x_327_, v___y_302_, v___x_367_);
v___x_369_ = l_Lean_Syntax_node4(v___y_286_, v___x_352_, v___x_340_, v___x_356_, v___x_368_, v___y_302_);
v___x_370_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_369_);
v___x_371_ = l_Lean_Syntax_node1(v___y_286_, v___x_350_, v___x_370_);
v___x_372_ = l_Lean_Syntax_node3(v___y_286_, v___y_292_, v___x_337_, v___x_348_, v___x_371_);
v___x_373_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__20));
v___x_374_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_373_);
v___x_375_ = l_Lean_Syntax_node1(v___y_286_, v___x_374_, v___y_302_);
v___x_376_ = l_Lean_Syntax_node6(v___y_286_, v___x_318_, v___x_322_, v___x_325_, v___x_335_, v___y_302_, v___x_372_, v___x_375_);
lean_inc_n(v___y_290_, 2);
v___x_377_ = l_Lean_Syntax_node2(v___y_286_, v___y_290_, v___x_316_, v___x_376_);
v___x_378_ = l_Lean_Syntax_node7(v___y_286_, v___y_311_, v___y_302_, v___y_302_, v___x_315_, v___y_302_, v___y_302_, v___y_302_, v___y_302_);
v___x_379_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21));
v___x_380_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_379_);
v___x_381_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__22));
v___x_382_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_295_, v___x_381_);
v___x_383_ = l_Lean_Syntax_node1(v___y_286_, v___x_382_, v___y_302_);
v___x_384_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_384_, 0, v___y_286_);
lean_ctor_set(v___x_384_, 1, v___x_379_);
v___x_385_ = l_Lean_Syntax_node2(v___y_286_, v___y_310_, v___y_293_, v___y_302_);
v___x_386_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_385_);
v___x_387_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__23));
v___x_388_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_295_, v___x_387_);
v___x_389_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__25);
v___x_390_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__26));
v___x_391_ = l_Lean_addMacroScope(v___y_296_, v___x_390_, v___y_291_);
lean_inc_n(v___y_304_, 2);
v___x_392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_392_, 0, v___x_390_);
lean_ctor_set(v___x_392_, 1, v___y_304_);
v___x_393_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__27));
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_393_);
lean_ctor_set(v___x_394_, 1, v___y_306_);
v___x_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_392_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v___x_396_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_396_, 0, v___y_286_);
lean_ctor_set(v___x_396_, 1, v___x_389_);
lean_ctor_set(v___x_396_, 2, v___x_391_);
lean_ctor_set(v___x_396_, 3, v___x_395_);
v___x_397_ = l_Lean_Syntax_mkApp(v_id_283_, v___y_303_);
v___x_398_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_397_);
lean_inc(v___x_388_);
v___x_399_ = l_Lean_Syntax_node2(v___y_286_, v___x_388_, v___x_396_, v___x_398_);
v___x_400_ = l_Lean_Syntax_node2(v___y_286_, v___y_289_, v___y_305_, v___x_399_);
v___x_401_ = l_Lean_Syntax_node2(v___y_286_, v___y_312_, v___y_302_, v___x_400_);
v___x_402_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__28));
v___x_403_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_299_, v___x_402_);
v___x_404_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29));
v___x_405_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_405_, 0, v___y_286_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30));
v___x_407_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_295_, v___x_406_);
v___x_408_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31));
v___x_409_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_409_, 0, v___y_286_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
v___x_410_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__33);
v___x_411_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__36));
v___x_412_ = l_Lean_addMacroScope(v___y_296_, v___x_411_, v___y_291_);
v___x_413_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_413_, 0, v___x_411_);
lean_ctor_set(v___x_413_, 1, v___y_304_);
v___x_414_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___y_306_);
v___x_415_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_415_, 0, v___y_286_);
lean_ctor_set(v___x_415_, 1, v___x_410_);
lean_ctor_set(v___x_415_, 2, v___x_412_);
lean_ctor_set(v___x_415_, 3, v___x_414_);
v___x_416_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37));
v___x_417_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_295_, v___x_416_);
v___x_418_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38));
v___x_419_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___y_295_, v___x_418_);
v___x_420_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39));
v___x_421_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_421_, 0, v___y_286_);
lean_ctor_set(v___x_421_, 1, v___x_420_);
v___x_422_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41));
v___x_423_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43);
v___x_424_ = lean_box(0);
v___x_425_ = l_Lean_addMacroScope(v___y_296_, v___x_424_, v___y_291_);
v___x_426_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45));
v___x_427_ = l_Lean_Name_mkStr1(v___y_301_);
v___x_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_428_, 0, v___x_427_);
v___x_429_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_429_, 0, v___x_428_);
lean_ctor_set(v___x_429_, 1, v___y_306_);
v___x_430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_426_);
lean_ctor_set(v___x_430_, 1, v___x_429_);
v___x_431_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_431_, 0, v___y_286_);
lean_ctor_set(v___x_431_, 1, v___x_423_);
lean_ctor_set(v___x_431_, 2, v___x_425_);
lean_ctor_set(v___x_431_, 3, v___x_430_);
v___x_432_ = l_Lean_Syntax_node1(v___y_286_, v___x_422_, v___x_431_);
v___x_433_ = l_Lean_Syntax_node2(v___y_286_, v___x_419_, v___x_421_, v___x_432_);
v___x_434_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__47);
v___x_435_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__48));
v___x_436_ = l_Lean_addMacroScope(v___y_296_, v___x_435_, v___y_291_);
v___x_437_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_437_, 0, v___y_286_);
lean_ctor_set(v___x_437_, 1, v___x_434_);
lean_ctor_set(v___x_437_, 2, v___x_436_);
lean_ctor_set(v___x_437_, 3, v___y_306_);
v___x_438_ = l_Lean_Syntax_node5(v___y_286_, v___x_358_, v___y_300_, v___x_360_, v___x_437_, v___y_302_, v___y_302_);
v___x_439_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49));
v___x_440_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_440_, 0, v___y_286_);
lean_ctor_set(v___x_440_, 1, v___x_439_);
v___x_441_ = l_Lean_Syntax_node3(v___y_286_, v___x_417_, v___x_433_, v___x_438_, v___x_440_);
v___x_442_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_441_);
v___x_443_ = l_Lean_Syntax_node2(v___y_286_, v___x_388_, v___x_415_, v___x_442_);
v___x_444_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_443_);
v___x_445_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50));
v___x_446_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_446_, 0, v___y_286_);
lean_ctor_set(v___x_446_, 1, v___x_445_);
lean_inc_ref(v___x_446_);
lean_inc_ref(v___x_409_);
lean_inc(v___x_407_);
v___x_447_ = l_Lean_Syntax_node3(v___y_286_, v___x_407_, v___x_409_, v___x_444_, v___x_446_);
v___x_448_ = l_Lean_Syntax_node1(v___y_286_, v___y_292_, v___x_447_);
v___x_449_ = l_Lean_Syntax_node3(v___y_286_, v___x_407_, v___x_409_, v___x_448_, v___x_446_);
v___x_450_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__51));
v___x_451_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__52));
v___x_452_ = l_Lean_Name_mkStr4(v___y_301_, v___y_308_, v___x_450_, v___x_451_);
v___x_453_ = l_Lean_Syntax_node2(v___y_286_, v___x_452_, v___y_302_, v___y_302_);
v___x_454_ = l_Lean_Syntax_node4(v___y_286_, v___x_403_, v___x_405_, v___x_449_, v___x_453_, v___y_302_);
v___x_455_ = l_Lean_Syntax_node6(v___y_286_, v___x_380_, v___x_383_, v___x_384_, v___y_302_, v___x_386_, v___x_401_, v___x_454_);
v___x_456_ = l_Lean_Syntax_node2(v___y_286_, v___y_290_, v___x_378_, v___x_455_);
v___x_457_ = l_Lean_Syntax_node3(v___y_286_, v___y_292_, v___y_285_, v___x_377_, v___x_456_);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___y_287_);
return v___x_458_;
}
v___jp_459_:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
lean_inc_ref(v___y_483_);
v___x_489_ = l_Array_append___redArg(v___y_483_, v___y_488_);
lean_dec_ref(v___y_488_);
lean_inc(v___y_466_);
lean_inc(v___y_461_);
v___x_490_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_490_, 0, v___y_461_);
lean_ctor_set(v___x_490_, 1, v___y_466_);
lean_ctor_set(v___x_490_, 2, v___x_489_);
if (lean_obj_tag(v___y_467_) == 1)
{
lean_object* v_val_491_; lean_object* v___x_492_; 
v_val_491_ = lean_ctor_get(v___y_467_, 0);
lean_inc(v_val_491_);
lean_dec_ref_known(v___y_467_, 1);
v___x_492_ = l_Array_mkArray1___redArg(v_val_491_);
v___y_285_ = v___y_460_;
v___y_286_ = v___y_461_;
v___y_287_ = v___y_462_;
v___y_288_ = v___x_490_;
v___y_289_ = v___y_464_;
v___y_290_ = v___y_463_;
v___y_291_ = v___y_465_;
v___y_292_ = v___y_466_;
v___y_293_ = v___y_468_;
v___y_294_ = v___y_469_;
v___y_295_ = v___y_471_;
v___y_296_ = v___y_470_;
v___y_297_ = v___y_472_;
v___y_298_ = v___y_473_;
v___y_299_ = v___y_474_;
v___y_300_ = v___y_475_;
v___y_301_ = v___y_476_;
v___y_302_ = v___y_477_;
v___y_303_ = v___y_478_;
v___y_304_ = v___y_479_;
v___y_305_ = v___y_480_;
v___y_306_ = v___y_481_;
v___y_307_ = v___y_482_;
v___y_308_ = v___y_484_;
v___y_309_ = v___y_483_;
v___y_310_ = v___y_486_;
v___y_311_ = v___y_485_;
v___y_312_ = v___y_487_;
v___y_313_ = v___x_492_;
goto v___jp_284_;
}
else
{
lean_object* v___x_493_; 
lean_dec(v___y_467_);
v___x_493_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53));
v___y_285_ = v___y_460_;
v___y_286_ = v___y_461_;
v___y_287_ = v___y_462_;
v___y_288_ = v___x_490_;
v___y_289_ = v___y_464_;
v___y_290_ = v___y_463_;
v___y_291_ = v___y_465_;
v___y_292_ = v___y_466_;
v___y_293_ = v___y_468_;
v___y_294_ = v___y_469_;
v___y_295_ = v___y_471_;
v___y_296_ = v___y_470_;
v___y_297_ = v___y_472_;
v___y_298_ = v___y_473_;
v___y_299_ = v___y_474_;
v___y_300_ = v___y_475_;
v___y_301_ = v___y_476_;
v___y_302_ = v___y_477_;
v___y_303_ = v___y_478_;
v___y_304_ = v___y_479_;
v___y_305_ = v___y_480_;
v___y_306_ = v___y_481_;
v___y_307_ = v___y_482_;
v___y_308_ = v___y_484_;
v___y_309_ = v___y_483_;
v___y_310_ = v___y_486_;
v___y_311_ = v___y_485_;
v___y_312_ = v___y_487_;
v___y_313_ = v___x_493_;
goto v___jp_284_;
}
}
v___jp_494_:
{
lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; size_t v_sz_534_; lean_object* v___x_535_; size_t v_sz_536_; lean_object* v___x_537_; size_t v_sz_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
lean_inc_ref_n(v___y_510_, 2);
v___x_516_ = l_Array_append___redArg(v___y_510_, v___y_515_);
lean_dec_ref(v___y_515_);
lean_inc_n(v___y_508_, 4);
lean_inc_n(v___y_496_, 16);
v___x_517_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_517_, 0, v___y_496_);
lean_ctor_set(v___x_517_, 1, v___y_508_);
lean_ctor_set(v___x_517_, 2, v___x_516_);
lean_inc_n(v___y_501_, 7);
lean_inc(v___y_514_);
v___x_518_ = l_Lean_Syntax_node7(v___y_496_, v___y_514_, v___y_501_, v___y_501_, v___x_517_, v___y_501_, v___y_501_, v___y_501_, v___y_501_);
v___x_519_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54));
lean_inc_ref_n(v___y_499_, 3);
lean_inc_ref_n(v___y_511_, 5);
lean_inc_ref_n(v___y_502_, 5);
v___x_520_ = l_Lean_Name_mkStr4(v___y_502_, v___y_511_, v___y_499_, v___x_519_);
v___x_521_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_521_, 0, v___y_496_);
lean_ctor_set(v___x_521_, 1, v___x_519_);
v___x_522_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__55));
v___x_523_ = l_Lean_Name_mkStr4(v___y_502_, v___y_511_, v___y_499_, v___x_522_);
v___x_524_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__56));
v___x_525_ = lean_box(2);
v___x_526_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_526_, 0, v___x_525_);
lean_ctor_set(v___x_526_, 1, v___y_508_);
lean_ctor_set(v___x_526_, 2, v___x_524_);
v___x_527_ = lean_unsigned_to_nat(2u);
v___x_528_ = lean_mk_empty_array_with_capacity(v___x_527_);
lean_inc_ref(v___x_528_);
v___x_529_ = lean_array_push(v___x_528_, v___y_504_);
lean_inc_ref(v___x_526_);
v___x_530_ = lean_array_push(v___x_529_, v___x_526_);
lean_inc(v___x_523_);
v___x_531_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_531_, 0, v___x_525_);
lean_ctor_set(v___x_531_, 1, v___x_523_);
lean_ctor_set(v___x_531_, 2, v___x_530_);
v___x_532_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57));
v___x_533_ = l_Lean_Name_mkStr4(v___y_502_, v___y_511_, v___y_499_, v___x_532_);
v_sz_534_ = lean_array_size(v___y_513_);
v___x_535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__1(v_sz_534_, v___y_506_, v___y_513_);
v_sz_536_ = lean_array_size(v___x_535_);
v___x_537_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__2(v_sz_536_, v___y_506_, v___x_535_);
v_sz_538_ = lean_array_size(v___x_537_);
v___x_539_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__3(v_sz_538_, v___y_506_, v___x_537_);
v___x_540_ = l_Array_append___redArg(v___y_510_, v___x_539_);
lean_dec_ref(v___x_539_);
v___x_541_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_541_, 0, v___y_496_);
lean_ctor_set(v___x_541_, 1, v___y_508_);
lean_ctor_set(v___x_541_, 2, v___x_540_);
v___x_542_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58));
v___x_543_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__59));
v___x_544_ = l_Lean_Name_mkStr4(v___y_502_, v___y_511_, v___x_542_, v___x_543_);
v___x_545_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60));
v___x_546_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_546_, 0, v___y_496_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
v___x_547_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__61));
v___x_548_ = l_Lean_Name_mkStr4(v___y_502_, v___y_511_, v___x_542_, v___x_547_);
v___x_549_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__63);
v___x_550_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__64));
lean_inc(v___y_503_);
lean_inc(v___y_495_);
v___x_551_ = l_Lean_addMacroScope(v___y_495_, v___x_550_, v___y_503_);
v___x_552_ = lean_box(0);
v___x_553_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__68));
v___x_554_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_554_, 0, v___y_496_);
lean_ctor_set(v___x_554_, 1, v___x_549_);
lean_ctor_set(v___x_554_, 2, v___x_551_);
lean_ctor_set(v___x_554_, 3, v___x_553_);
v___x_555_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__69));
v___x_556_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_556_, 0, v___y_496_);
lean_ctor_set(v___x_556_, 1, v___x_555_);
v___x_557_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__71));
v___x_558_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__72));
v___x_559_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_559_, 0, v___y_496_);
lean_ctor_set(v___x_559_, 1, v___x_558_);
v___x_560_ = l_Lean_Syntax_node1(v___y_496_, v___x_557_, v___x_559_);
v___x_561_ = l_Lean_Syntax_node1(v___y_496_, v___y_508_, v___x_560_);
v___x_562_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__73));
v___x_563_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_563_, 0, v___y_496_);
lean_ctor_set(v___x_563_, 1, v___x_562_);
v___x_564_ = l_Lean_Syntax_node4(v___y_496_, v___x_548_, v___x_554_, v___x_556_, v___x_561_, v___x_563_);
lean_inc_ref(v___x_546_);
lean_inc(v___x_544_);
v___x_565_ = l_Lean_Syntax_node2(v___y_496_, v___x_544_, v___x_546_, v___x_564_);
lean_inc_ref(v___x_541_);
lean_inc(v___x_533_);
v___x_566_ = l_Lean_Syntax_node2(v___y_496_, v___x_533_, v___x_541_, v___x_565_);
v___x_567_ = l_Lean_Syntax_node4(v___y_496_, v___x_520_, v___x_521_, v___x_531_, v___x_566_, v___y_501_);
lean_inc(v___y_500_);
v___x_568_ = l_Lean_Syntax_node2(v___y_496_, v___y_500_, v___x_518_, v___x_567_);
if (lean_obj_tag(v___y_507_) == 1)
{
lean_object* v_val_569_; lean_object* v___x_570_; 
v_val_569_ = lean_ctor_get(v___y_507_, 0);
lean_inc(v_val_569_);
lean_dec_ref_known(v___y_507_, 1);
v___x_570_ = l_Array_mkArray1___redArg(v_val_569_);
v___y_460_ = v___x_568_;
v___y_461_ = v___y_496_;
v___y_462_ = v___y_497_;
v___y_463_ = v___y_500_;
v___y_464_ = v___x_544_;
v___y_465_ = v___y_503_;
v___y_466_ = v___y_508_;
v___y_467_ = v___y_509_;
v___y_468_ = v___y_512_;
v___y_469_ = v___x_526_;
v___y_470_ = v___y_495_;
v___y_471_ = v___x_542_;
v___y_472_ = v___x_541_;
v___y_473_ = v___x_528_;
v___y_474_ = v___y_499_;
v___y_475_ = v___y_498_;
v___y_476_ = v___y_502_;
v___y_477_ = v___y_501_;
v___y_478_ = v___y_505_;
v___y_479_ = v___x_552_;
v___y_480_ = v___x_546_;
v___y_481_ = v___x_552_;
v___y_482_ = v___x_525_;
v___y_483_ = v___y_510_;
v___y_484_ = v___y_511_;
v___y_485_ = v___y_514_;
v___y_486_ = v___x_523_;
v___y_487_ = v___x_533_;
v___y_488_ = v___x_570_;
goto v___jp_459_;
}
else
{
lean_object* v___x_571_; 
lean_dec(v___y_507_);
v___x_571_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53));
v___y_460_ = v___x_568_;
v___y_461_ = v___y_496_;
v___y_462_ = v___y_497_;
v___y_463_ = v___y_500_;
v___y_464_ = v___x_544_;
v___y_465_ = v___y_503_;
v___y_466_ = v___y_508_;
v___y_467_ = v___y_509_;
v___y_468_ = v___y_512_;
v___y_469_ = v___x_526_;
v___y_470_ = v___y_495_;
v___y_471_ = v___x_542_;
v___y_472_ = v___x_541_;
v___y_473_ = v___x_528_;
v___y_474_ = v___y_499_;
v___y_475_ = v___y_498_;
v___y_476_ = v___y_502_;
v___y_477_ = v___y_501_;
v___y_478_ = v___y_505_;
v___y_479_ = v___x_552_;
v___y_480_ = v___x_546_;
v___y_481_ = v___x_552_;
v___y_482_ = v___x_525_;
v___y_483_ = v___y_510_;
v___y_484_ = v___y_511_;
v___y_485_ = v___y_514_;
v___y_486_ = v___x_523_;
v___y_487_ = v___x_533_;
v___y_488_ = v___x_571_;
goto v___jp_459_;
}
}
v___jp_572_:
{
lean_object* v_quotContext_582_; lean_object* v_currMacroScope_583_; lean_object* v_ref_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; 
v_quotContext_582_ = lean_ctor_get(v_a_272_, 1);
v_currMacroScope_583_ = lean_ctor_get(v_a_272_, 2);
v_ref_584_ = lean_ctor_get(v_a_272_, 5);
v___x_585_ = l_Lean_mkIdentFrom(v_id_283_, v___y_581_, v___y_576_);
lean_inc_ref(v___y_573_);
lean_inc(v___y_580_);
v___x_586_ = l_Lean_Syntax_mkApp(v___y_580_, v___y_573_);
v___x_587_ = l_Lean_SourceInfo_fromRef(v_ref_584_, v___y_576_);
v___x_588_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__75));
v___x_589_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76));
v___x_590_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77));
v___x_591_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78));
v___x_592_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80));
v___x_593_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82));
v___x_594_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83);
lean_inc(v___x_587_);
v___x_595_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_595_, 0, v___x_587_);
lean_ctor_set(v___x_595_, 1, v___x_588_);
lean_ctor_set(v___x_595_, 2, v___x_594_);
if (lean_obj_tag(v___y_578_) == 1)
{
lean_object* v_val_596_; lean_object* v___x_597_; 
v_val_596_ = lean_ctor_get(v___y_578_, 0);
lean_inc(v_val_596_);
v___x_597_ = l_Array_mkArray1___redArg(v_val_596_);
v___y_495_ = v_quotContext_582_;
v___y_496_ = v___x_587_;
v___y_497_ = v___y_577_;
v___y_498_ = v___x_586_;
v___y_499_ = v___x_591_;
v___y_500_ = v___x_592_;
v___y_501_ = v___x_595_;
v___y_502_ = v___x_589_;
v___y_503_ = v_currMacroScope_583_;
v___y_504_ = v___y_580_;
v___y_505_ = v___y_573_;
v___y_506_ = v___y_574_;
v___y_507_ = v___y_575_;
v___y_508_ = v___x_588_;
v___y_509_ = v___y_578_;
v___y_510_ = v___x_594_;
v___y_511_ = v___x_590_;
v___y_512_ = v___x_585_;
v___y_513_ = v___y_579_;
v___y_514_ = v___x_593_;
v___y_515_ = v___x_597_;
goto v___jp_494_;
}
else
{
lean_object* v___x_598_; 
v___x_598_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53));
v___y_495_ = v_quotContext_582_;
v___y_496_ = v___x_587_;
v___y_497_ = v___y_577_;
v___y_498_ = v___x_586_;
v___y_499_ = v___x_591_;
v___y_500_ = v___x_592_;
v___y_501_ = v___x_595_;
v___y_502_ = v___x_589_;
v___y_503_ = v_currMacroScope_583_;
v___y_504_ = v___y_580_;
v___y_505_ = v___y_573_;
v___y_506_ = v___y_574_;
v___y_507_ = v___y_575_;
v___y_508_ = v___x_588_;
v___y_509_ = v___y_578_;
v___y_510_ = v___x_594_;
v___y_511_ = v___x_590_;
v___y_512_ = v___x_585_;
v___y_513_ = v___y_579_;
v___y_514_ = v___x_593_;
v___y_515_ = v___x_598_;
goto v___jp_494_;
}
}
v___jp_599_:
{
uint8_t v___x_608_; lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_608_ = 0;
v___x_609_ = l_Lean_mkIdentFrom(v_id_283_, v___y_607_, v___x_608_);
v___x_610_ = l_Lean_Name_hasMacroScopes(v___y_602_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; 
v___x_611_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(v___y_602_);
v___y_573_ = v___y_600_;
v___y_574_ = v___y_601_;
v___y_575_ = v___y_603_;
v___y_576_ = v___x_608_;
v___y_577_ = v___y_604_;
v___y_578_ = v___y_605_;
v___y_579_ = v___y_606_;
v___y_580_ = v___x_609_;
v___y_581_ = v___x_611_;
goto v___jp_572_;
}
else
{
lean_object* v_view_612_; lean_object* v_name_613_; lean_object* v_imported_614_; lean_object* v_ctx_615_; lean_object* v_scopes_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_625_; 
v_view_612_ = l_Lean_extractMacroScopes(v___y_602_);
v_name_613_ = lean_ctor_get(v_view_612_, 0);
v_imported_614_ = lean_ctor_get(v_view_612_, 1);
v_ctx_615_ = lean_ctor_get(v_view_612_, 2);
v_scopes_616_ = lean_ctor_get(v_view_612_, 3);
v_isSharedCheck_625_ = !lean_is_exclusive(v_view_612_);
if (v_isSharedCheck_625_ == 0)
{
v___x_618_ = v_view_612_;
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_scopes_616_);
lean_inc(v_ctx_615_);
lean_inc(v_imported_614_);
lean_inc(v_name_613_);
lean_dec(v_view_612_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_625_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_620_; lean_object* v___x_622_; 
v___x_620_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__1(v_name_613_);
if (v_isShared_619_ == 0)
{
lean_ctor_set(v___x_618_, 0, v___x_620_);
v___x_622_ = v___x_618_;
goto v_reusejp_621_;
}
else
{
lean_object* v_reuseFailAlloc_624_; 
v_reuseFailAlloc_624_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_624_, 0, v___x_620_);
lean_ctor_set(v_reuseFailAlloc_624_, 1, v_imported_614_);
lean_ctor_set(v_reuseFailAlloc_624_, 2, v_ctx_615_);
lean_ctor_set(v_reuseFailAlloc_624_, 3, v_scopes_616_);
v___x_622_ = v_reuseFailAlloc_624_;
goto v_reusejp_621_;
}
v_reusejp_621_:
{
lean_object* v___x_623_; 
v___x_623_ = l_Lean_MacroScopesView_review(v___x_622_);
v___y_573_ = v___y_600_;
v___y_574_ = v___y_601_;
v___y_575_ = v___y_603_;
v___y_576_ = v___x_608_;
v___y_577_ = v___y_604_;
v___y_578_ = v___y_605_;
v___y_579_ = v___y_606_;
v___y_580_ = v___x_609_;
v___y_581_ = v___x_623_;
goto v___jp_572_;
}
}
}
}
v___jp_629_:
{
lean_object* v___x_632_; 
v___x_632_ = l_Lake_expandBinders(v_bs_628_, v_a_272_, v___y_273_);
lean_dec_ref(v_bs_628_);
if (lean_obj_tag(v___x_632_) == 0)
{
lean_object* v_a_633_; lean_object* v_a_634_; size_t v_sz_635_; size_t v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v_fst_639_; lean_object* v_snd_640_; lean_object* v___x_641_; uint8_t v___x_642_; 
v_a_633_ = lean_ctor_get(v___x_632_, 0);
lean_inc(v_a_633_);
v_a_634_ = lean_ctor_get(v___x_632_, 1);
lean_inc(v_a_634_);
lean_dec_ref_known(v___x_632_, 2);
v_sz_635_ = lean_array_size(v_a_633_);
v___x_636_ = ((size_t)0ULL);
v___x_637_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1_spec__0(v_sz_635_, v___x_636_, v_a_633_);
v___x_638_ = l_Array_unzip___redArg(v___x_637_);
lean_dec_ref(v___x_637_);
v_fst_639_ = lean_ctor_get(v___x_638_, 0);
lean_inc(v_fst_639_);
v_snd_640_ = lean_ctor_get(v___x_638_, 1);
lean_inc(v_snd_640_);
lean_dec_ref(v___x_638_);
v___x_641_ = l_Lean_TSyntax_getId(v_id_283_);
v___x_642_ = l_Lean_Name_hasMacroScopes(v___x_641_);
if (v___x_642_ == 0)
{
lean_object* v___x_643_; 
lean_inc(v___x_641_);
v___x_643_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(v___x_641_);
v___y_600_ = v_snd_640_;
v___y_601_ = v___x_636_;
v___y_602_ = v___x_641_;
v___y_603_ = v___y_631_;
v___y_604_ = v_a_634_;
v___y_605_ = v___y_630_;
v___y_606_ = v_fst_639_;
v___y_607_ = v___x_643_;
goto v___jp_599_;
}
else
{
lean_object* v_view_644_; lean_object* v_name_645_; lean_object* v_imported_646_; lean_object* v_ctx_647_; lean_object* v_scopes_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_657_; 
lean_inc(v___x_641_);
v_view_644_ = l_Lean_extractMacroScopes(v___x_641_);
v_name_645_ = lean_ctor_get(v_view_644_, 0);
v_imported_646_ = lean_ctor_get(v_view_644_, 1);
v_ctx_647_ = lean_ctor_get(v_view_644_, 2);
v_scopes_648_ = lean_ctor_get(v_view_644_, 3);
v_isSharedCheck_657_ = !lean_is_exclusive(v_view_644_);
if (v_isSharedCheck_657_ == 0)
{
v___x_650_ = v_view_644_;
v_isShared_651_ = v_isSharedCheck_657_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_scopes_648_);
lean_inc(v_ctx_647_);
lean_inc(v_imported_646_);
lean_inc(v_name_645_);
lean_dec(v_view_644_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_657_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_654_; 
v___x_652_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___lam__0(v_name_645_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 0, v___x_652_);
v___x_654_ = v___x_650_;
goto v_reusejp_653_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_652_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v_imported_646_);
lean_ctor_set(v_reuseFailAlloc_656_, 2, v_ctx_647_);
lean_ctor_set(v_reuseFailAlloc_656_, 3, v_scopes_648_);
v___x_654_ = v_reuseFailAlloc_656_;
goto v_reusejp_653_;
}
v_reusejp_653_:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_MacroScopesView_review(v___x_654_);
v___y_600_ = v_snd_640_;
v___y_601_ = v___x_636_;
v___y_602_ = v___x_641_;
v___y_603_ = v___y_631_;
v___y_604_ = v_a_634_;
v___y_605_ = v___y_630_;
v___y_606_ = v_fst_639_;
v___y_607_ = v___x_655_;
goto v___jp_599_;
}
}
}
}
else
{
lean_object* v_a_658_; lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_666_; 
lean_dec(v___y_631_);
lean_dec(v___y_630_);
lean_dec(v_id_283_);
v_a_658_ = lean_ctor_get(v___x_632_, 0);
v_a_659_ = lean_ctor_get(v___x_632_, 1);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_666_ == 0)
{
v___x_661_ = v___x_632_;
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_inc(v_a_658_);
lean_dec(v___x_632_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_666_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v___x_664_; 
if (v_isShared_662_ == 0)
{
v___x_664_ = v___x_661_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_a_658_);
lean_ctor_set(v_reuseFailAlloc_665_, 1, v_a_659_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
}
v___jp_667_:
{
lean_object* v___x_669_; 
v___x_669_ = l_Lean_Syntax_getOptional_x3f(v___x_279_);
lean_dec(v___x_279_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_object* v___x_670_; 
v___x_670_ = lean_box(0);
v___y_630_ = v___y_668_;
v___y_631_ = v___x_670_;
goto v___jp_629_;
}
else
{
lean_object* v_val_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
v_val_671_ = lean_ctor_get(v___x_669_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_669_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_669_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_val_671_);
lean_dec(v___x_669_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_val_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v___y_630_ = v___y_668_;
v___y_631_ = v___x_676_;
goto v___jp_629_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___boxed(lean_object* v_x_689_, lean_object* v_a_690_, lean_object* v___y_691_){
_start:
{
lean_object* v_res_692_; 
v_res_692_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1(v_x_689_, v_a_690_, v___y_691_);
lean_dec_ref(v_a_690_);
return v_res_692_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(size_t v_sz_724_, size_t v_i_725_, lean_object* v_bs_726_){
_start:
{
uint8_t v___x_727_; 
v___x_727_ = lean_usize_dec_lt(v_i_725_, v_sz_724_);
if (v___x_727_ == 0)
{
return v_bs_726_;
}
else
{
lean_object* v_v_728_; lean_object* v___x_729_; lean_object* v_bs_x27_730_; size_t v___x_731_; size_t v___x_732_; lean_object* v___x_733_; 
v_v_728_ = lean_array_uget(v_bs_726_, v_i_725_);
v___x_729_ = lean_unsigned_to_nat(0u);
v_bs_x27_730_ = lean_array_uset(v_bs_726_, v_i_725_, v___x_729_);
v___x_731_ = ((size_t)1ULL);
v___x_732_ = lean_usize_add(v_i_725_, v___x_731_);
v___x_733_ = lean_array_uset(v_bs_x27_730_, v_i_725_, v_v_728_);
v_i_725_ = v___x_732_;
v_bs_726_ = v___x_733_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0___boxed(lean_object* v_sz_735_, lean_object* v_i_736_, lean_object* v_bs_737_){
_start:
{
size_t v_sz_boxed_738_; size_t v_i_boxed_739_; lean_object* v_res_740_; 
v_sz_boxed_738_ = lean_unbox_usize(v_sz_735_);
lean_dec(v_sz_735_);
v_i_boxed_739_ = lean_unbox_usize(v_i_736_);
lean_dec(v_i_736_);
v_res_740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(v_sz_boxed_738_, v_i_boxed_739_, v_bs_737_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(size_t v_sz_741_, size_t v_i_742_, lean_object* v_bs_743_){
_start:
{
uint8_t v___x_744_; 
v___x_744_ = lean_usize_dec_lt(v_i_742_, v_sz_741_);
if (v___x_744_ == 0)
{
return v_bs_743_;
}
else
{
lean_object* v_v_745_; lean_object* v___x_746_; lean_object* v_bs_x27_747_; size_t v___x_748_; size_t v___x_749_; lean_object* v___x_750_; 
v_v_745_ = lean_array_uget(v_bs_743_, v_i_742_);
v___x_746_ = lean_unsigned_to_nat(0u);
v_bs_x27_747_ = lean_array_uset(v_bs_743_, v_i_742_, v___x_746_);
v___x_748_ = ((size_t)1ULL);
v___x_749_ = lean_usize_add(v_i_742_, v___x_748_);
v___x_750_ = lean_array_uset(v_bs_x27_747_, v_i_742_, v_v_745_);
v_i_742_ = v___x_749_;
v_bs_743_ = v___x_750_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1___boxed(lean_object* v_sz_752_, lean_object* v_i_753_, lean_object* v_bs_754_){
_start:
{
size_t v_sz_boxed_755_; size_t v_i_boxed_756_; lean_object* v_res_757_; 
v_sz_boxed_755_ = lean_unbox_usize(v_sz_752_);
lean_dec(v_sz_752_);
v_i_boxed_756_ = lean_unbox_usize(v_i_753_);
lean_dec(v_i_753_);
v_res_757_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(v_sz_boxed_755_, v_i_boxed_756_, v_bs_754_);
return v_res_757_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(lean_object* v___x_765_, lean_object* v___x_766_, size_t v_sz_767_, size_t v_i_768_, lean_object* v_bs_769_){
_start:
{
uint8_t v___x_770_; 
v___x_770_ = lean_usize_dec_lt(v_i_768_, v_sz_767_);
if (v___x_770_ == 0)
{
lean_dec(v___x_766_);
lean_dec(v___x_765_);
return v_bs_769_;
}
else
{
lean_object* v___x_771_; lean_object* v_v_772_; lean_object* v___x_773_; lean_object* v_bs_x27_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; size_t v___x_782_; size_t v___x_783_; lean_object* v___x_784_; 
v___x_771_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__75));
v_v_772_ = lean_array_uget(v_bs_769_, v_i_768_);
v___x_773_ = lean_unsigned_to_nat(0u);
v_bs_x27_774_ = lean_array_uset(v_bs_769_, v_i_768_, v___x_773_);
v___x_775_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__1));
v___x_776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___closed__2));
lean_inc_n(v___x_765_, 4);
v___x_777_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_765_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
v___x_778_ = l_Lean_Syntax_node1(v___x_765_, v___x_771_, v_v_772_);
v___x_779_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__73));
v___x_780_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_765_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
lean_inc(v___x_766_);
v___x_781_ = l_Lean_Syntax_node4(v___x_765_, v___x_775_, v___x_777_, v___x_778_, v___x_766_, v___x_780_);
v___x_782_ = ((size_t)1ULL);
v___x_783_ = lean_usize_add(v_i_768_, v___x_782_);
v___x_784_ = lean_array_uset(v_bs_x27_774_, v_i_768_, v___x_781_);
v_i_768_ = v___x_783_;
v_bs_769_ = v___x_784_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2___boxed(lean_object* v___x_786_, lean_object* v___x_787_, lean_object* v_sz_788_, lean_object* v_i_789_, lean_object* v_bs_790_){
_start:
{
size_t v_sz_boxed_791_; size_t v_i_boxed_792_; lean_object* v_res_793_; 
v_sz_boxed_791_ = lean_unbox_usize(v_sz_788_);
lean_dec(v_sz_788_);
v_i_boxed_792_ = lean_unbox_usize(v_i_789_);
lean_dec(v_i_789_);
v_res_793_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(v___x_786_, v___x_787_, v_sz_boxed_791_, v_i_boxed_792_, v_bs_790_);
return v_res_793_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1(void){
_start:
{
lean_object* v___x_795_; lean_object* v___x_796_; 
v___x_795_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__0));
v___x_796_ = l_String_toRawSubstring_x27(v___x_795_);
return v___x_796_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7(void){
_start:
{
lean_object* v___x_804_; lean_object* v___x_805_; 
v___x_804_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__6));
v___x_805_ = l_String_toRawSubstring_x27(v___x_804_);
return v___x_805_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11(void){
_start:
{
lean_object* v___x_811_; lean_object* v___x_812_; 
v___x_811_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__10));
v___x_812_ = l_String_toRawSubstring_x27(v___x_811_);
return v___x_812_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18(void){
_start:
{
lean_object* v___x_824_; lean_object* v_mk_825_; 
v___x_824_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__17));
v_mk_825_ = l_Lean_mkIdent(v___x_824_);
return v_mk_825_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21(void){
_start:
{
lean_object* v___x_829_; lean_object* v_unsafeMk_830_; 
v___x_829_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__20));
v_unsafeMk_830_ = l_Lean_mkIdent(v___x_829_);
return v_unsafeMk_830_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24(void){
_start:
{
lean_object* v___x_834_; lean_object* v_instCoeMk_835_; 
v___x_834_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__23));
v_instCoeMk_835_ = l_Lean_mkIdent(v___x_834_);
return v_instCoeMk_835_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27(void){
_start:
{
lean_object* v___x_839_; lean_object* v_get_840_; 
v___x_839_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__26));
v_get_840_ = l_Lean_mkIdent(v___x_839_);
return v_get_840_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30(void){
_start:
{
lean_object* v___x_844_; lean_object* v_unsafeGet_845_; 
v___x_844_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__29));
v_unsafeGet_845_ = l_Lean_mkIdent(v___x_844_);
return v_unsafeGet_845_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33(void){
_start:
{
lean_object* v___x_849_; lean_object* v_instCoeGet_850_; 
v___x_849_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__32));
v_instCoeGet_850_ = l_Lean_mkIdent(v___x_849_);
return v_instCoeGet_850_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46(void){
_start:
{
lean_object* v___x_883_; lean_object* v___x_884_; 
v___x_883_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__45));
v___x_884_ = l_String_toRawSubstring_x27(v___x_883_);
return v___x_884_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60(void){
_start:
{
lean_object* v___x_922_; lean_object* v_unsafeMk_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; 
v___x_922_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59));
v_unsafeMk_923_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21);
v___x_924_ = lean_unsigned_to_nat(2u);
v___x_925_ = lean_mk_empty_array_with_capacity(v___x_924_);
v___x_926_ = lean_array_push(v___x_925_, v_unsafeMk_923_);
v___x_927_ = lean_array_push(v___x_926_, v___x_922_);
return v___x_927_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61(void){
_start:
{
lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_928_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__60);
v___x_929_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58));
v___x_930_ = lean_box(2);
v___x_931_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_931_, 0, v___x_930_);
lean_ctor_set(v___x_931_, 1, v___x_929_);
lean_ctor_set(v___x_931_, 2, v___x_928_);
return v___x_931_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70(void){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; 
v___x_960_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__69));
v___x_961_ = l_String_toRawSubstring_x27(v___x_960_);
return v___x_961_;
}
}
static lean_object* _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76(void){
_start:
{
lean_object* v___x_976_; lean_object* v___x_977_; 
v___x_976_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__75));
v___x_977_ = l_String_toRawSubstring_x27(v___x_976_);
return v___x_977_;
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1(lean_object* v_x_980_, lean_object* v_a_981_, lean_object* v___y_982_){
_start:
{
lean_object* v___x_983_; uint8_t v___x_984_; 
v___x_983_ = ((lean_object*)(l_Lake_hydrateOpaqueTypeCmd___closed__1));
lean_inc(v_x_980_);
v___x_984_ = l_Lean_Syntax_isOfKind(v_x_980_, v___x_983_);
if (v___x_984_ == 0)
{
lean_object* v___x_985_; lean_object* v___x_986_; 
lean_dec(v_x_980_);
v___x_985_ = lean_box(1);
v___x_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v___y_982_);
return v___x_986_;
}
else
{
lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v_args_995_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1002_; lean_object* v___y_1003_; lean_object* v___y_1004_; size_t v___y_1005_; lean_object* v___y_1006_; lean_object* v___y_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v___y_1011_; lean_object* v___y_1012_; lean_object* v___y_1013_; lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v___y_1016_; lean_object* v___y_1017_; lean_object* v___y_1018_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; size_t v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v___y_1031_; lean_object* v___y_1032_; lean_object* v___y_1033_; lean_object* v___y_1034_; lean_object* v___y_1035_; lean_object* v___y_1036_; lean_object* v___y_1037_; lean_object* v___y_1038_; lean_object* v___y_1039_; lean_object* v___y_1040_; lean_object* v___y_1041_; lean_object* v___y_1042_; lean_object* v___y_1043_; lean_object* v___y_1044_; lean_object* v___y_1045_; lean_object* v___y_1046_; lean_object* v___y_1047_; lean_object* v___y_1048_; lean_object* v___y_1207_; lean_object* v___x_1316_; 
v___x_987_ = lean_unsigned_to_nat(0u);
v___x_988_ = l_Lean_Syntax_getArg(v_x_980_, v___x_987_);
v___x_989_ = lean_unsigned_to_nat(2u);
v___x_990_ = l_Lean_Syntax_getArg(v_x_980_, v___x_989_);
v___x_991_ = lean_unsigned_to_nat(3u);
v___x_992_ = l_Lean_Syntax_getArg(v_x_980_, v___x_991_);
v___x_993_ = lean_unsigned_to_nat(4u);
v___x_994_ = l_Lean_Syntax_getArg(v_x_980_, v___x_993_);
lean_dec(v_x_980_);
v_args_995_ = l_Lean_Syntax_getArgs(v___x_994_);
lean_dec(v___x_994_);
v___x_1316_ = l_Lean_Syntax_getOptional_x3f(v___x_988_);
lean_dec(v___x_988_);
if (lean_obj_tag(v___x_1316_) == 0)
{
lean_object* v___x_1317_; 
v___x_1317_ = lean_box(0);
v___y_1207_ = v___x_1317_;
goto v___jp_1206_;
}
else
{
lean_object* v_val_1318_; lean_object* v___x_1320_; uint8_t v_isShared_1321_; uint8_t v_isSharedCheck_1325_; 
v_val_1318_ = lean_ctor_get(v___x_1316_, 0);
v_isSharedCheck_1325_ = !lean_is_exclusive(v___x_1316_);
if (v_isSharedCheck_1325_ == 0)
{
v___x_1320_ = v___x_1316_;
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
else
{
lean_inc(v_val_1318_);
lean_dec(v___x_1316_);
v___x_1320_ = lean_box(0);
v_isShared_1321_ = v_isSharedCheck_1325_;
goto v_resetjp_1319_;
}
v_resetjp_1319_:
{
lean_object* v___x_1323_; 
if (v_isShared_1321_ == 0)
{
v___x_1323_ = v___x_1320_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v_val_1318_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
v___y_1207_ = v___x_1323_;
goto v___jp_1206_;
}
}
}
v___jp_996_:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; size_t v_sz_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; 
lean_inc_ref(v___y_1032_);
v___x_1049_ = l_Array_append___redArg(v___y_1032_, v___y_1048_);
lean_dec_ref(v___y_1048_);
lean_inc_n(v___y_1046_, 18);
lean_inc_n(v___y_1040_, 79);
v___x_1050_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1050_, 0, v___y_1040_);
lean_ctor_set(v___x_1050_, 1, v___y_1046_);
lean_ctor_set(v___x_1050_, 2, v___x_1049_);
lean_inc_ref_n(v___x_1050_, 2);
lean_inc_n(v___y_1033_, 34);
lean_inc_n(v___y_1039_, 2);
v___x_1051_ = l_Lean_Syntax_node7(v___y_1040_, v___y_1039_, v___y_1033_, v___y_1008_, v___x_1050_, v___y_1033_, v___y_1033_, v___y_1033_, v___y_1033_);
v___x_1052_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__54));
lean_inc_ref_n(v___y_1030_, 4);
lean_inc_ref_n(v___y_1029_, 8);
lean_inc_ref_n(v___y_1044_, 9);
v___x_1053_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1030_, v___x_1052_);
v___x_1054_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___y_1040_);
lean_ctor_set(v___x_1054_, 1, v___x_1052_);
lean_inc_n(v___y_1047_, 3);
lean_inc_ref_n(v___y_1021_, 2);
v___x_1055_ = lean_array_push(v___y_1021_, v___y_1047_);
lean_inc_n(v___y_1014_, 3);
v___x_1056_ = lean_array_push(v___x_1055_, v___y_1014_);
lean_inc_n(v___y_1013_, 5);
lean_inc_n(v___y_1015_, 3);
v___x_1057_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1057_, 0, v___y_1015_);
lean_ctor_set(v___x_1057_, 1, v___y_1013_);
lean_ctor_set(v___x_1057_, 2, v___x_1056_);
v___x_1058_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__57));
v___x_1059_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1030_, v___x_1058_);
lean_inc_n(v___x_1059_, 4);
v___x_1060_ = l_Lean_Syntax_node2(v___y_1040_, v___x_1059_, v___y_1033_, v___y_1003_);
lean_inc_ref(v___x_1054_);
lean_inc(v___x_1053_);
v___x_1061_ = l_Lean_Syntax_node4(v___y_1040_, v___x_1053_, v___x_1054_, v___x_1057_, v___x_1060_, v___y_1033_);
lean_inc_n(v___y_1045_, 5);
v___x_1062_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1045_, v___x_1051_, v___x_1061_);
v___x_1063_ = l_Lean_Syntax_node7(v___y_1040_, v___y_1039_, v___y_1033_, v___y_1033_, v___x_1050_, v___y_1033_, v___y_1033_, v___y_1033_, v___y_1033_);
v___x_1064_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__21));
v___x_1065_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1030_, v___x_1064_);
v___x_1066_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___y_1040_);
lean_ctor_set(v___x_1066_, 1, v___x_1064_);
lean_inc(v___y_1031_);
v___x_1067_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1013_, v___y_1031_, v___y_1033_);
v___x_1068_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1067_);
v___x_1069_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__1);
v___x_1070_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__2));
lean_inc_n(v___y_1017_, 3);
lean_inc_n(v___y_998_, 3);
v___x_1071_ = l_Lean_addMacroScope(v___y_998_, v___x_1070_, v___y_1017_);
lean_inc_n(v___y_1035_, 3);
v___x_1072_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1072_, 0, v___x_1070_);
lean_ctor_set(v___x_1072_, 1, v___y_1035_);
v___x_1073_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__3));
lean_inc_n(v___y_1010_, 4);
v___x_1074_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
lean_ctor_set(v___x_1074_, 1, v___y_1010_);
v___x_1075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1075_, 0, v___x_1072_);
lean_ctor_set(v___x_1075_, 1, v___x_1074_);
v___x_1076_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1076_, 0, v___y_1040_);
lean_ctor_set(v___x_1076_, 1, v___x_1069_);
lean_ctor_set(v___x_1076_, 2, v___x_1071_);
lean_ctor_set(v___x_1076_, 3, v___x_1075_);
v___x_1077_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__37));
lean_inc_ref_n(v___y_1006_, 4);
v___x_1078_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1006_, v___x_1077_);
v___x_1079_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__38));
v___x_1080_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1006_, v___x_1079_);
v___x_1081_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__39));
v___x_1082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___y_1040_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__41));
v___x_1084_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__43);
v___x_1085_ = lean_box(0);
v___x_1086_ = l_Lean_addMacroScope(v___y_998_, v___x_1085_, v___y_1017_);
v___x_1087_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__45));
v___x_1088_ = l_Lean_Name_mkStr1(v___y_1044_);
v___x_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1089_, 0, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
lean_ctor_set(v___x_1090_, 1, v___y_1010_);
v___x_1091_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1091_, 0, v___x_1087_);
lean_ctor_set(v___x_1091_, 1, v___x_1090_);
v___x_1092_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1092_, 0, v___y_1040_);
lean_ctor_set(v___x_1092_, 1, v___x_1084_);
lean_ctor_set(v___x_1092_, 2, v___x_1086_);
lean_ctor_set(v___x_1092_, 3, v___x_1091_);
v___x_1093_ = l_Lean_Syntax_node1(v___y_1040_, v___x_1083_, v___x_1092_);
v___x_1094_ = l_Lean_Syntax_node2(v___y_1040_, v___x_1080_, v___x_1082_, v___x_1093_);
v___x_1095_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__49));
v___x_1096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___y_1040_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
lean_inc_ref(v___x_1096_);
lean_inc(v___y_997_);
lean_inc(v___x_1094_);
lean_inc(v___x_1078_);
v___x_1097_ = l_Lean_Syntax_node3(v___y_1040_, v___x_1078_, v___x_1094_, v___y_997_, v___x_1096_);
lean_inc(v___y_1025_);
v___x_1098_ = l_Lean_Syntax_node3(v___y_1040_, v___x_1078_, v___x_1094_, v___y_1025_, v___x_1096_);
lean_inc_n(v___x_1098_, 2);
lean_inc_n(v___x_1097_, 2);
v___x_1099_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1046_, v___x_1097_, v___x_1098_);
lean_inc_ref(v___x_1076_);
lean_inc_n(v___y_1043_, 4);
v___x_1100_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1043_, v___x_1076_, v___x_1099_);
lean_inc_n(v___y_1004_, 3);
lean_inc_n(v___y_1011_, 3);
v___x_1101_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1011_, v___y_1004_, v___x_1100_);
v___x_1102_ = l_Lean_Syntax_node2(v___y_1040_, v___x_1059_, v___y_1033_, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__30));
v___x_1104_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1006_, v___x_1103_);
v___x_1105_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__31));
v___x_1106_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___y_1040_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___y_1047_);
v___x_1108_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__50));
v___x_1109_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___y_1040_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
lean_inc_ref_n(v___x_1109_, 2);
lean_inc_ref_n(v___x_1106_, 2);
lean_inc_n(v___x_1104_, 2);
v___x_1110_ = l_Lean_Syntax_node3(v___y_1040_, v___x_1104_, v___x_1106_, v___x_1107_, v___x_1109_);
lean_inc_n(v___y_1037_, 2);
lean_inc_n(v___y_1023_, 2);
lean_inc_n(v___y_1024_, 2);
v___x_1111_ = l_Lean_Syntax_node4(v___y_1040_, v___y_1024_, v___y_1023_, v___x_1110_, v___y_1037_, v___y_1033_);
lean_inc_ref_n(v___x_1066_, 2);
lean_inc_n(v___y_999_, 3);
lean_inc_n(v___x_1065_, 2);
v___x_1112_ = l_Lean_Syntax_node6(v___y_1040_, v___x_1065_, v___y_999_, v___x_1066_, v___y_1033_, v___x_1068_, v___x_1102_, v___x_1111_);
lean_inc_n(v___x_1063_, 2);
v___x_1113_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1045_, v___x_1063_, v___x_1112_);
lean_inc_n(v___y_1022_, 2);
v___x_1114_ = lean_array_push(v___y_1021_, v___y_1022_);
v___x_1115_ = lean_array_push(v___x_1114_, v___y_1014_);
v___x_1116_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1116_, 0, v___y_1015_);
lean_ctor_set(v___x_1116_, 1, v___y_1013_);
lean_ctor_set(v___x_1116_, 2, v___x_1115_);
v___x_1117_ = l_Lean_Syntax_node3(v___y_1040_, v___y_1007_, v___y_1025_, v___y_1000_, v___y_997_);
v___x_1118_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1011_, v___y_1004_, v___x_1117_);
lean_inc(v___x_1118_);
v___x_1119_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1118_);
v___x_1120_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1009_, v___y_1033_, v___x_1119_);
v___x_1121_ = l_Lean_Syntax_node5(v___y_1040_, v___y_1026_, v___y_1019_, v___x_1116_, v___x_1120_, v___y_1001_, v___y_1033_);
v___x_1122_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1045_, v___y_1042_, v___x_1121_);
v___x_1123_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___y_1022_);
v___x_1124_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1020_, v___y_1036_, v___x_1123_);
v___x_1125_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1002_, v___y_999_, v___x_1124_);
v___x_1126_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1125_);
lean_inc(v___y_1012_);
v___x_1127_ = l_Lean_Syntax_node3(v___y_1040_, v___y_1038_, v___y_1034_, v___x_1126_, v___y_1012_);
v___x_1128_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1127_);
v___x_1129_ = l_Lean_Syntax_node7(v___y_1040_, v___y_1039_, v___y_1033_, v___x_1128_, v___x_1050_, v___y_1033_, v___y_1033_, v___y_1033_, v___y_1033_);
lean_inc_n(v___y_1016_, 2);
v___x_1130_ = lean_array_push(v___y_1021_, v___y_1016_);
v___x_1131_ = lean_array_push(v___x_1130_, v___y_1014_);
v___x_1132_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1132_, 0, v___y_1015_);
lean_ctor_set(v___x_1132_, 1, v___y_1013_);
lean_ctor_set(v___x_1132_, 2, v___x_1131_);
v___x_1133_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__1(v___y_1027_, v___y_1005_, v_args_995_);
v_sz_1134_ = lean_array_size(v___x_1133_);
v___x_1135_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__2(v___y_1040_, v___y_1033_, v_sz_1134_, v___y_1005_, v___x_1133_);
v___x_1136_ = l_Array_append___redArg(v___y_1032_, v___x_1135_);
lean_dec_ref(v___x_1135_);
v___x_1137_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1137_, 0, v___y_1040_);
lean_ctor_set(v___x_1137_, 1, v___y_1046_);
lean_ctor_set(v___x_1137_, 2, v___x_1136_);
v___x_1138_ = l_Lean_Syntax_node2(v___y_1040_, v___x_1059_, v___x_1137_, v___x_1118_);
v___x_1139_ = l_Lean_Syntax_node4(v___y_1040_, v___x_1053_, v___x_1054_, v___x_1132_, v___x_1138_, v___y_1033_);
v___x_1140_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1045_, v___x_1129_, v___x_1139_);
lean_inc(v___y_1018_);
v___x_1141_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1013_, v___y_1018_, v___y_1033_);
v___x_1142_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1141_);
v___x_1143_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1046_, v___x_1098_, v___x_1097_);
v___x_1144_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1043_, v___x_1076_, v___x_1143_);
v___x_1145_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1011_, v___y_1004_, v___x_1144_);
v___x_1146_ = l_Lean_Syntax_node2(v___y_1040_, v___x_1059_, v___y_1033_, v___x_1145_);
v___x_1147_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___y_1016_);
v___x_1148_ = l_Lean_Syntax_node3(v___y_1040_, v___x_1104_, v___x_1106_, v___x_1147_, v___x_1109_);
v___x_1149_ = l_Lean_Syntax_node4(v___y_1040_, v___y_1024_, v___y_1023_, v___x_1148_, v___y_1037_, v___y_1033_);
v___x_1150_ = l_Lean_Syntax_node6(v___y_1040_, v___x_1065_, v___y_999_, v___x_1066_, v___y_1033_, v___x_1142_, v___x_1146_, v___x_1149_);
v___x_1151_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1045_, v___x_1063_, v___x_1150_);
v___x_1152_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__4));
v___x_1153_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1006_, v___x_1152_);
v___x_1154_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__5));
v___x_1155_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___y_1040_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__7);
v___x_1157_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__8));
v___x_1158_ = l_Lean_addMacroScope(v___y_998_, v___x_1157_, v___y_1017_);
v___x_1159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1159_, 0, v___x_1157_);
lean_ctor_set(v___x_1159_, 1, v___y_1035_);
v___x_1160_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__9));
v___x_1161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1161_, 0, v___x_1160_);
lean_ctor_set(v___x_1161_, 1, v___y_1010_);
v___x_1162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1159_);
lean_ctor_set(v___x_1162_, 1, v___x_1161_);
v___x_1163_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1163_, 0, v___y_1040_);
lean_ctor_set(v___x_1163_, 1, v___x_1156_);
lean_ctor_set(v___x_1163_, 2, v___x_1158_);
lean_ctor_set(v___x_1163_, 3, v___x_1162_);
v___x_1164_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1097_);
lean_inc_ref(v___x_1163_);
v___x_1165_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1043_, v___x_1163_, v___x_1164_);
v___x_1166_ = l_Lean_Syntax_node4(v___y_1040_, v___x_1153_, v___x_1155_, v___y_1033_, v___x_1165_, v___y_1012_);
v___x_1167_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1166_);
v___x_1168_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1098_);
v___x_1169_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1043_, v___x_1163_, v___x_1168_);
v___x_1170_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1011_, v___y_1004_, v___x_1169_);
v___x_1171_ = l_Lean_Syntax_node2(v___y_1040_, v___x_1059_, v___x_1167_, v___x_1170_);
v___x_1172_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__11);
v___x_1173_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__12));
v___x_1174_ = l_Lean_addMacroScope(v___y_998_, v___x_1173_, v___y_1017_);
v___x_1175_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__13));
v___x_1176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1176_, 0, v___x_1175_);
lean_ctor_set(v___x_1176_, 1, v___y_1035_);
v___x_1177_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__14));
v___x_1178_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___x_1177_);
lean_ctor_set(v___x_1178_, 1, v___y_1010_);
v___x_1179_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1176_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1180_, 0, v___y_1040_);
lean_ctor_set(v___x_1180_, 1, v___x_1172_);
lean_ctor_set(v___x_1180_, 2, v___x_1174_);
lean_ctor_set(v___x_1180_, 3, v___x_1179_);
v___x_1181_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1180_);
v___x_1182_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1043_, v___y_1047_, v___x_1181_);
v___x_1183_ = l_Lean_Syntax_node1(v___y_1040_, v___y_1046_, v___x_1182_);
v___x_1184_ = l_Lean_Syntax_node3(v___y_1040_, v___x_1104_, v___x_1106_, v___x_1183_, v___x_1109_);
v___x_1185_ = l_Lean_Syntax_node4(v___y_1040_, v___y_1024_, v___y_1023_, v___x_1184_, v___y_1037_, v___y_1033_);
v___x_1186_ = l_Lean_Syntax_node6(v___y_1040_, v___x_1065_, v___y_999_, v___x_1066_, v___y_1033_, v___y_1033_, v___x_1171_, v___x_1185_);
v___x_1187_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1045_, v___x_1063_, v___x_1186_);
v___x_1188_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__15));
v___x_1189_ = l_Lean_Name_mkStr4(v___y_1044_, v___y_1029_, v___y_1030_, v___x_1188_);
v___x_1190_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1190_, 0, v___y_1040_);
lean_ctor_set(v___x_1190_, 1, v___x_1188_);
v___x_1191_ = l_Lean_Syntax_node2(v___y_1040_, v___y_1046_, v___x_990_, v___y_1033_);
v___x_1192_ = l_Lean_Syntax_node2(v___y_1040_, v___x_1189_, v___x_1190_, v___x_1191_);
v___x_1193_ = lean_unsigned_to_nat(9u);
v___x_1194_ = lean_mk_empty_array_with_capacity(v___x_1193_);
v___x_1195_ = lean_array_push(v___x_1194_, v___y_1028_);
v___x_1196_ = lean_array_push(v___x_1195_, v___y_1041_);
v___x_1197_ = lean_array_push(v___x_1196_, v___x_1062_);
v___x_1198_ = lean_array_push(v___x_1197_, v___x_1113_);
v___x_1199_ = lean_array_push(v___x_1198_, v___x_1122_);
v___x_1200_ = lean_array_push(v___x_1199_, v___x_1140_);
v___x_1201_ = lean_array_push(v___x_1200_, v___x_1151_);
v___x_1202_ = lean_array_push(v___x_1201_, v___x_1187_);
v___x_1203_ = lean_array_push(v___x_1202_, v___x_1192_);
v___x_1204_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1204_, 0, v___y_1040_);
lean_ctor_set(v___x_1204_, 1, v___y_1046_);
lean_ctor_set(v___x_1204_, 2, v___x_1203_);
v___x_1205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1204_);
lean_ctor_set(v___x_1205_, 1, v___y_982_);
return v___x_1205_;
}
v___jp_1206_:
{
lean_object* v_quotContext_1208_; lean_object* v_currMacroScope_1209_; lean_object* v_ref_1210_; lean_object* v_mk_1211_; lean_object* v_unsafeMk_1212_; lean_object* v_instCoeMk_1213_; lean_object* v_get_1214_; lean_object* v_unsafeGet_1215_; lean_object* v_instCoeGet_1216_; uint8_t v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v___x_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; size_t v_sz_1277_; size_t v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v_quotContext_1208_ = lean_ctor_get(v_a_981_, 1);
v_currMacroScope_1209_ = lean_ctor_get(v_a_981_, 2);
v_ref_1210_ = lean_ctor_get(v_a_981_, 5);
v_mk_1211_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__18);
v_unsafeMk_1212_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__21);
v_instCoeMk_1213_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__24);
v_get_1214_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__27);
v_unsafeGet_1215_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__30);
v_instCoeGet_1216_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__33);
v___x_1217_ = 0;
v___x_1218_ = l_Lean_SourceInfo_fromRef(v_ref_1210_, v___x_1217_);
v___x_1219_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__75));
v___x_1220_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__76));
v___x_1221_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__77));
v___x_1222_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__78));
v___x_1223_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__34));
v___x_1224_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__35));
lean_inc_n(v___x_1218_, 42);
v___x_1225_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1225_, 0, v___x_1218_);
lean_ctor_set(v___x_1225_, 1, v___x_1223_);
lean_inc_n(v___x_990_, 2);
v___x_1226_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1224_, v___x_1225_, v___x_990_);
v___x_1227_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__80));
v___x_1228_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__82));
v___x_1229_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__83);
v___x_1230_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1218_);
lean_ctor_set(v___x_1230_, 1, v___x_1219_);
lean_ctor_set(v___x_1230_, 2, v___x_1229_);
v___x_1231_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__58));
v___x_1232_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__37));
v___x_1233_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__38));
v___x_1234_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1234_, 0, v___x_1218_);
lean_ctor_set(v___x_1234_, 1, v___x_1233_);
v___x_1235_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__40));
v___x_1236_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__41));
lean_inc_ref_n(v___x_1230_, 11);
v___x_1237_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1236_, v___x_1230_);
v___x_1238_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__44));
v___x_1239_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__46);
v___x_1240_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__47));
lean_inc_n(v_currMacroScope_1209_, 3);
lean_inc_n(v_quotContext_1208_, 3);
v___x_1241_ = l_Lean_addMacroScope(v_quotContext_1208_, v___x_1240_, v_currMacroScope_1209_);
v___x_1242_ = lean_box(0);
v___x_1243_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__49));
v___x_1244_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1244_, 0, v___x_1218_);
lean_ctor_set(v___x_1244_, 1, v___x_1239_);
lean_ctor_set(v___x_1244_, 2, v___x_1241_);
lean_ctor_set(v___x_1244_, 3, v___x_1243_);
v___x_1245_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1238_, v___x_1244_, v___x_1230_);
lean_inc_n(v___x_1237_, 2);
v___x_1246_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1235_, v___x_1237_, v___x_1245_);
v___x_1247_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v___x_1246_);
v___x_1248_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__50));
v___x_1249_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1249_, 0, v___x_1218_);
lean_ctor_set(v___x_1249_, 1, v___x_1248_);
lean_inc_ref_n(v___x_1249_, 2);
lean_inc_ref_n(v___x_1234_, 2);
v___x_1250_ = l_Lean_Syntax_node3(v___x_1218_, v___x_1232_, v___x_1234_, v___x_1247_, v___x_1249_);
v___x_1251_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v___x_1250_);
v___x_1252_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__51));
v___x_1253_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__52));
v___x_1254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1218_);
lean_ctor_set(v___x_1254_, 1, v___x_1252_);
v___x_1255_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1253_, v___x_1254_);
v___x_1256_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v___x_1255_);
v___x_1257_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__53));
v___x_1258_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__54));
v___x_1259_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1218_);
lean_ctor_set(v___x_1259_, 1, v___x_1257_);
v___x_1260_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1258_, v___x_1259_);
v___x_1261_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v___x_1260_);
v___x_1262_ = l_Lean_Syntax_node7(v___x_1218_, v___x_1228_, v___x_1230_, v___x_1251_, v___x_1256_, v___x_1230_, v___x_1230_, v___x_1261_, v___x_1230_);
v___x_1263_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__56));
v___x_1264_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__57));
v___x_1265_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1265_, 0, v___x_1218_);
lean_ctor_set(v___x_1265_, 1, v___x_1264_);
v___x_1266_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__58));
v___x_1267_ = lean_box(2);
v___x_1268_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__59));
v___x_1269_ = lean_mk_empty_array_with_capacity(v___x_989_);
v___x_1270_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__61);
v___x_1271_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__62));
v___x_1272_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__63));
v___x_1273_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__60));
v___x_1274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1274_, 0, v___x_1218_);
lean_ctor_set(v___x_1274_, 1, v___x_1273_);
v___x_1275_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__65));
v___x_1276_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__66));
v_sz_1277_ = lean_array_size(v_args_995_);
v___x_1278_ = ((size_t)0ULL);
lean_inc_ref(v_args_995_);
v___x_1279_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1_spec__0(v_sz_1277_, v___x_1278_, v_args_995_);
v___x_1280_ = l_Array_append___redArg(v___x_1229_, v___x_1279_);
lean_dec_ref(v___x_1279_);
v___x_1281_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1281_, 0, v___x_1218_);
lean_ctor_set(v___x_1281_, 1, v___x_1219_);
lean_ctor_set(v___x_1281_, 2, v___x_1280_);
lean_inc_ref(v___x_1281_);
v___x_1282_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1276_, v___x_992_, v___x_1281_);
v___x_1283_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__67));
v___x_1284_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1284_, 0, v___x_1218_);
lean_ctor_set(v___x_1284_, 1, v___x_1283_);
v___x_1285_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1276_, v___x_990_, v___x_1281_);
lean_inc(v___x_1285_);
lean_inc_ref(v___x_1284_);
lean_inc(v___x_1282_);
v___x_1286_ = l_Lean_Syntax_node3(v___x_1218_, v___x_1275_, v___x_1282_, v___x_1284_, v___x_1285_);
lean_inc_ref(v___x_1274_);
v___x_1287_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1272_, v___x_1274_, v___x_1286_);
lean_inc(v___x_1287_);
v___x_1288_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v___x_1287_);
v___x_1289_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1271_, v___x_1230_, v___x_1288_);
v___x_1290_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__68));
v___x_1291_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__29));
v___x_1292_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1292_, 0, v___x_1218_);
lean_ctor_set(v___x_1292_, 1, v___x_1291_);
v___x_1293_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__70);
v___x_1294_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__71));
v___x_1295_ = l_Lean_addMacroScope(v_quotContext_1208_, v___x_1294_, v_currMacroScope_1209_);
v___x_1296_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__73));
v___x_1297_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1218_);
lean_ctor_set(v___x_1297_, 1, v___x_1293_);
lean_ctor_set(v___x_1297_, 2, v___x_1295_);
lean_ctor_set(v___x_1297_, 3, v___x_1296_);
v___x_1298_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__74));
v___x_1299_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1298_, v___x_1230_, v___x_1230_);
lean_inc(v___x_1299_);
lean_inc_ref(v___x_1292_);
v___x_1300_ = l_Lean_Syntax_node4(v___x_1218_, v___x_1290_, v___x_1292_, v___x_1297_, v___x_1299_, v___x_1230_);
lean_inc(v___x_1300_);
lean_inc_ref(v___x_1265_);
v___x_1301_ = l_Lean_Syntax_node5(v___x_1218_, v___x_1263_, v___x_1265_, v___x_1270_, v___x_1289_, v___x_1300_, v___x_1230_);
lean_inc(v___x_1262_);
v___x_1302_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1227_, v___x_1262_, v___x_1301_);
v___x_1303_ = lean_obj_once(&l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76, &l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76_once, _init_l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__76);
v___x_1304_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___closed__77));
v___x_1305_ = l_Lean_addMacroScope(v_quotContext_1208_, v___x_1304_, v_currMacroScope_1209_);
v___x_1306_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1218_);
lean_ctor_set(v___x_1306_, 1, v___x_1303_);
lean_ctor_set(v___x_1306_, 2, v___x_1305_);
lean_ctor_set(v___x_1306_, 3, v___x_1242_);
v___x_1307_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v_unsafeMk_1212_);
lean_inc_ref(v___x_1306_);
v___x_1308_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1238_, v___x_1306_, v___x_1307_);
v___x_1309_ = l_Lean_Syntax_node2(v___x_1218_, v___x_1235_, v___x_1237_, v___x_1308_);
v___x_1310_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v___x_1309_);
v___x_1311_ = l_Lean_Syntax_node3(v___x_1218_, v___x_1232_, v___x_1234_, v___x_1310_, v___x_1249_);
v___x_1312_ = l_Lean_Syntax_node1(v___x_1218_, v___x_1219_, v___x_1311_);
if (lean_obj_tag(v___y_1207_) == 1)
{
lean_object* v_val_1313_; lean_object* v___x_1314_; 
v_val_1313_ = lean_ctor_get(v___y_1207_, 0);
lean_inc(v_val_1313_);
lean_dec_ref_known(v___y_1207_, 1);
v___x_1314_ = l_Array_mkArray1___redArg(v_val_1313_);
lean_inc(v_currMacroScope_1209_);
lean_inc(v_quotContext_1208_);
v___y_997_ = v___x_1282_;
v___y_998_ = v_quotContext_1208_;
v___y_999_ = v___x_1237_;
v___y_1000_ = v___x_1284_;
v___y_1001_ = v___x_1300_;
v___y_1002_ = v___x_1235_;
v___y_1003_ = v___x_1287_;
v___y_1004_ = v___x_1274_;
v___y_1005_ = v___x_1278_;
v___y_1006_ = v___x_1231_;
v___y_1007_ = v___x_1275_;
v___y_1008_ = v___x_1312_;
v___y_1009_ = v___x_1271_;
v___y_1010_ = v___x_1242_;
v___y_1011_ = v___x_1272_;
v___y_1012_ = v___x_1249_;
v___y_1013_ = v___x_1266_;
v___y_1014_ = v___x_1268_;
v___y_1015_ = v___x_1267_;
v___y_1016_ = v_get_1214_;
v___y_1017_ = v_currMacroScope_1209_;
v___y_1018_ = v_instCoeGet_1216_;
v___y_1019_ = v___x_1265_;
v___y_1020_ = v___x_1238_;
v___y_1021_ = v___x_1269_;
v___y_1022_ = v_unsafeGet_1215_;
v___y_1023_ = v___x_1292_;
v___y_1024_ = v___x_1290_;
v___y_1025_ = v___x_1285_;
v___y_1026_ = v___x_1263_;
v___y_1027_ = v_sz_1277_;
v___y_1028_ = v___x_1226_;
v___y_1029_ = v___x_1221_;
v___y_1030_ = v___x_1222_;
v___y_1031_ = v_instCoeMk_1213_;
v___y_1032_ = v___x_1229_;
v___y_1033_ = v___x_1230_;
v___y_1034_ = v___x_1234_;
v___y_1035_ = v___x_1242_;
v___y_1036_ = v___x_1306_;
v___y_1037_ = v___x_1299_;
v___y_1038_ = v___x_1232_;
v___y_1039_ = v___x_1228_;
v___y_1040_ = v___x_1218_;
v___y_1041_ = v___x_1302_;
v___y_1042_ = v___x_1262_;
v___y_1043_ = v___x_1276_;
v___y_1044_ = v___x_1220_;
v___y_1045_ = v___x_1227_;
v___y_1046_ = v___x_1219_;
v___y_1047_ = v_mk_1211_;
v___y_1048_ = v___x_1314_;
goto v___jp_996_;
}
else
{
lean_object* v___x_1315_; 
lean_dec(v___y_1207_);
v___x_1315_ = ((lean_object*)(l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__nonemptyTypeCmd__1___closed__53));
lean_inc(v_currMacroScope_1209_);
lean_inc(v_quotContext_1208_);
v___y_997_ = v___x_1282_;
v___y_998_ = v_quotContext_1208_;
v___y_999_ = v___x_1237_;
v___y_1000_ = v___x_1284_;
v___y_1001_ = v___x_1300_;
v___y_1002_ = v___x_1235_;
v___y_1003_ = v___x_1287_;
v___y_1004_ = v___x_1274_;
v___y_1005_ = v___x_1278_;
v___y_1006_ = v___x_1231_;
v___y_1007_ = v___x_1275_;
v___y_1008_ = v___x_1312_;
v___y_1009_ = v___x_1271_;
v___y_1010_ = v___x_1242_;
v___y_1011_ = v___x_1272_;
v___y_1012_ = v___x_1249_;
v___y_1013_ = v___x_1266_;
v___y_1014_ = v___x_1268_;
v___y_1015_ = v___x_1267_;
v___y_1016_ = v_get_1214_;
v___y_1017_ = v_currMacroScope_1209_;
v___y_1018_ = v_instCoeGet_1216_;
v___y_1019_ = v___x_1265_;
v___y_1020_ = v___x_1238_;
v___y_1021_ = v___x_1269_;
v___y_1022_ = v_unsafeGet_1215_;
v___y_1023_ = v___x_1292_;
v___y_1024_ = v___x_1290_;
v___y_1025_ = v___x_1285_;
v___y_1026_ = v___x_1263_;
v___y_1027_ = v_sz_1277_;
v___y_1028_ = v___x_1226_;
v___y_1029_ = v___x_1221_;
v___y_1030_ = v___x_1222_;
v___y_1031_ = v_instCoeMk_1213_;
v___y_1032_ = v___x_1229_;
v___y_1033_ = v___x_1230_;
v___y_1034_ = v___x_1234_;
v___y_1035_ = v___x_1242_;
v___y_1036_ = v___x_1306_;
v___y_1037_ = v___x_1299_;
v___y_1038_ = v___x_1232_;
v___y_1039_ = v___x_1228_;
v___y_1040_ = v___x_1218_;
v___y_1041_ = v___x_1302_;
v___y_1042_ = v___x_1262_;
v___y_1043_ = v___x_1276_;
v___y_1044_ = v___x_1220_;
v___y_1045_ = v___x_1227_;
v___y_1046_ = v___x_1219_;
v___y_1047_ = v_mk_1211_;
v___y_1048_ = v___x_1315_;
goto v___jp_996_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1___boxed(lean_object* v_x_1326_, lean_object* v_a_1327_, lean_object* v___y_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = l_Lake___aux__Lake__Util__OpaqueType______macroRules__Lake__hydrateOpaqueTypeCmd__1(v_x_1326_, v_a_1327_, v___y_1328_);
lean_dec_ref(v_a_1327_);
return v_res_1329_;
}
}
lean_object* runtime_initialize_Init_Prelude(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Util_OpaqueType(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lake_Util_Binder(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Util_OpaqueType(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Util_Binder(uint8_t builtin);
lean_object* initialize_Init_Prelude(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Util_OpaqueType(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Util_Binder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Prelude(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Util_OpaqueType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Util_OpaqueType(builtin);
}
#ifdef __cplusplus
}
#endif
