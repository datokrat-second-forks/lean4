// Lean compiler output
// Module: Lean.Elab.DocString.Builtin.Scopes
// Imports: public import Lean.Elab.DocString public import Lean.Elab.DocString.Builtin.Parsing
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
lean_object* l_Lean_Parser_whitespace(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_instMonadMacroAdapterTermElabM;
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadLogCoreM;
lean_object* l_Lean_instMonadLogOfMonadLift___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadEnvMetaM;
lean_object* l_Lean_instMonadEnvOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Term_instAddErrorMessageContextTermElabM;
lean_object* l_Lean_TSyntax_getId(lean_object*);
lean_object* l_Lean_Name_eraseMacroScopes(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_throwErrorAt___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofSyntax(lean_object*);
lean_object* l_Lean_Parser_andthenFn(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Doc_parseQuotedStrLit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_TSyntax_getId___boxed(lean_object*);
lean_object* l_Lean_Parser_symbol(lean_object*);
extern lean_object* l_Lean_Parser_ident;
lean_object* l_Lean_Parser_sepBy1(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Parser_leadingNode(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Parser_mkAntiquot(lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Parser_withAntiquot(lean_object*, lean_object*);
lean_object* l_Lean_Parser_withCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__1_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__3_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__4_value),LEAN_SCALAR_PTR_LITERAL(216, 59, 67, 7, 118, 215, 141, 75)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "DocString"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__5_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__6_value),LEAN_SCALAR_PTR_LITERAL(119, 232, 180, 69, 21, 196, 130, 34)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Builtin"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__7_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__8_value),LEAN_SCALAR_PTR_LITERAL(155, 234, 185, 91, 95, 3, 186, 9)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Scopes"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__9_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__10_value),LEAN_SCALAR_PTR_LITERAL(35, 24, 214, 11, 236, 113, 109, 63)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__11_value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(238, 84, 52, 215, 218, 102, 236, 53)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__12_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__2_value),LEAN_SCALAR_PTR_LITERAL(23, 105, 158, 181, 88, 85, 92, 100)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Doc"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__13_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__14_value),LEAN_SCALAR_PTR_LITERAL(211, 73, 171, 246, 62, 78, 89, 194)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15_value;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "imports"};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16_value;
static const lean_ctor_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__15_value),((lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16_value),LEAN_SCALAR_PTR_LITERAL(83, 97, 211, 41, 123, 200, 73, 131)}};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18;
static const lean_string_object l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19 = (const lean_object*)&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19_value;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23;
static lean_once_cell_t l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports;
LEAN_EXPORT lean_object* l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM;
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__4_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__0_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__1_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__8_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__2_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__5_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__6_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__7_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__9_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__3_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__0___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Elab_Term_instMonadTermElabM___lam__1___boxed, .m_arity = 11, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "local"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__36_value),LEAN_SCALAR_PTR_LITERAL(120, 104, 189, 185, 38, 81, 44, 71)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37_value;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Unexpected identifier, expected `local` or a string of imports"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Unexpected number `"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instFromDocArgDocScope___private__1___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TSyntax_getId___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__46_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__47_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__48_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__49_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Parser_whitespace, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52_value;
static const lean_string_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "Expected comma-separated imports list, got `"};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53_value;
static lean_once_cell_t l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__55 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__55_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__56 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__56_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__57 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__57_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__58 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__58_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__59 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__59_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__60 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__60_value;
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__61 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__61_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__55_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__56_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__62 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__62_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__62_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__57_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__58_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__59_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__60_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__63 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__63_value;
static const lean_ctor_object l_Lean_Doc_instFromDocArgDocScope___private__1___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__63_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__61_value)}};
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___closed__64 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__64_value;
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Doc_instFromDocArgDocScope___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Doc_instFromDocArgDocScope___lam__2___boxed, .m_arity = 10, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__44_value),((lean_object*)&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45_value)} };
static const lean_object* l_Lean_Doc_instFromDocArgDocScope___closed__0 = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Doc_instFromDocArgDocScope = (const lean_object*)&l_Lean_Doc_instFromDocArgDocScope___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 0)
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
else
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Doc_DocScope_ctorIdx(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
return v_k_7_;
}
else
{
lean_object* v_mods_8_; lean_object* v___x_9_; 
v_mods_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_mods_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_mods_8_);
return v___x_9_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Doc_DocScope_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim___redArg(lean_object* v_t_22_, lean_object* v_local_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_22_, v_local_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_local_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_local_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_26_, v_local_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim___redArg(lean_object* v_t_30_, lean_object* v_import_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_30_, v_import_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_DocScope_import_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_import_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Doc_DocScope_ctorElim___redArg(v_t_34_, v_import_36_);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18(void){
_start:
{
uint8_t v___x_76_; uint8_t v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v___x_76_ = 0;
v___x_77_ = 1;
v___x_78_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17));
v___x_79_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__16));
v___x_80_ = l_Lean_Parser_mkAntiquot(v___x_79_, v___x_78_, v___x_77_, v___x_76_);
return v___x_80_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20(void){
_start:
{
lean_object* v___x_82_; lean_object* v___x_83_; 
v___x_82_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19));
v___x_83_ = l_Lean_Parser_symbol(v___x_82_);
return v___x_83_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21(void){
_start:
{
uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v___x_84_ = 0;
v___x_85_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__20);
v___x_86_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__19));
v___x_87_ = l_Lean_Parser_ident;
v___x_88_ = l_Lean_Parser_sepBy1(v___x_87_, v___x_86_, v___x_85_, v___x_84_);
return v___x_88_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22(void){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_89_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__21);
v___x_90_ = lean_unsigned_to_nat(1024u);
v___x_91_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17));
v___x_92_ = l_Lean_Parser_leadingNode(v___x_91_, v___x_90_, v___x_89_);
return v___x_92_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__22);
v___x_94_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__18);
v___x_95_ = l_Lean_Parser_withAntiquot(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__23);
v___x_97_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17));
v___x_98_ = l_Lean_Parser_withCache(v___x_97_, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports(void){
_start:
{
lean_object* v___x_99_; 
v___x_99_ = lean_obj_once(&l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24, &l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24_once, _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__24);
return v___x_99_;
}
}
static lean_object* _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM(void){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports;
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__0(lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___x_103_; lean_object* v_fn_104_; lean_object* v___x_105_; 
v___x_103_ = l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports;
v_fn_104_ = lean_ctor_get(v___x_103_, 1);
lean_inc_ref(v_fn_104_);
v___x_105_ = lean_apply_2(v_fn_104_, v___y_101_, v___y_102_);
return v___x_105_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1(lean_object* v___x_106_, lean_object* v___f_107_, lean_object* v___y_108_, lean_object* v___y_109_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Parser_andthenFn(v___x_106_, v___f_107_, v___y_108_, v___y_109_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11(void){
_start:
{
lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_134_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__10));
v___x_135_ = l_StateRefT_x27_instMonad___redArg(v___x_134_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = l_Lean_Core_instMonadLogCoreM;
v___x_145_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19));
v___x_146_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_145_, v___x_144_);
return v___x_146_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21(void){
_start:
{
lean_object* v___x_147_; lean_object* v___f_148_; lean_object* v___x_149_; 
v___x_147_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__20);
v___f_148_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18));
v___x_149_ = l_Lean_instMonadLogOfMonadLift___redArg(v___f_148_, v___x_147_);
return v___x_149_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; 
v___x_150_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__21);
v___x_151_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19));
v___x_152_ = l_Lean_instMonadLogOfMonadLift___redArg(v___x_151_, v___x_150_);
return v___x_152_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23(void){
_start:
{
lean_object* v___x_153_; lean_object* v___f_154_; lean_object* v___x_155_; 
v___x_153_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__22);
v___f_154_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18));
v___x_155_ = l_Lean_instMonadLogOfMonadLift___redArg(v___f_154_, v___x_153_);
return v___x_155_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24(void){
_start:
{
lean_object* v___x_156_; lean_object* v___f_157_; 
v___x_156_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_157_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_157_, 0, v___x_156_);
return v___f_157_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25(void){
_start:
{
lean_object* v___x_158_; lean_object* v___f_159_; 
v___x_158_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_159_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_159_, 0, v___x_158_);
return v___f_159_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26(void){
_start:
{
lean_object* v___f_160_; lean_object* v___f_161_; lean_object* v___x_162_; 
v___f_160_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__25);
v___f_161_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__24);
v___x_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_162_, 0, v___f_161_);
lean_ctor_set(v___x_162_, 1, v___f_160_);
return v___x_162_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27(void){
_start:
{
lean_object* v___x_163_; lean_object* v___f_164_; 
v___x_163_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26);
v___f_164_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_164_, 0, v___x_163_);
return v___f_164_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28(void){
_start:
{
lean_object* v___x_165_; lean_object* v___f_166_; 
v___x_165_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__26);
v___f_166_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_166_, 0, v___x_165_);
return v___f_166_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29(void){
_start:
{
lean_object* v___f_167_; lean_object* v___f_168_; lean_object* v___x_169_; 
v___f_167_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__28);
v___f_168_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__27);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v___f_168_);
lean_ctor_set(v___x_169_, 1, v___f_167_);
return v___x_169_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30(void){
_start:
{
lean_object* v___x_170_; lean_object* v___f_171_; 
v___x_170_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29);
v___f_171_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_171_, 0, v___x_170_);
return v___f_171_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31(void){
_start:
{
lean_object* v___x_172_; lean_object* v___f_173_; 
v___x_172_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__29);
v___f_173_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_173_, 0, v___x_172_);
return v___f_173_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32(void){
_start:
{
lean_object* v___f_174_; lean_object* v___f_175_; lean_object* v___x_176_; 
v___f_174_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__31);
v___f_175_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__30);
v___x_176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_176_, 0, v___f_175_);
lean_ctor_set(v___x_176_, 1, v___f_174_);
return v___x_176_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33(void){
_start:
{
lean_object* v___x_177_; lean_object* v___f_178_; 
v___x_177_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32);
v___f_178_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_178_, 0, v___x_177_);
return v___f_178_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34(void){
_start:
{
lean_object* v___x_179_; lean_object* v___f_180_; 
v___x_179_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__32);
v___f_180_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_180_, 0, v___x_179_);
return v___f_180_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35(void){
_start:
{
lean_object* v___f_181_; lean_object* v___f_182_; lean_object* v___x_183_; 
v___f_181_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__34);
v___f_182_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__33);
v___x_183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_183_, 0, v___f_182_);
lean_ctor_set(v___x_183_, 1, v___f_181_);
return v___x_183_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__38));
v___x_189_ = l_Lean_stringToMessageData(v___x_188_);
return v___x_189_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__40));
v___x_192_ = l_Lean_stringToMessageData(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__42));
v___x_195_ = l_Lean_stringToMessageData(v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54(void){
_start:
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__53));
v___x_213_ = l_Lean_stringToMessageData(v___x_212_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1(lean_object* v_v_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
lean_object* v___x_241_; lean_object* v_toApplicative_242_; lean_object* v_toFunctor_243_; lean_object* v_toSeq_244_; lean_object* v_toSeqLeft_245_; lean_object* v_toSeqRight_246_; lean_object* v___f_247_; lean_object* v___f_248_; lean_object* v___f_249_; lean_object* v___f_250_; lean_object* v___x_251_; lean_object* v___f_252_; lean_object* v___f_253_; lean_object* v___f_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v_toApplicative_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_410_; 
v___x_241_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11);
v_toApplicative_242_ = lean_ctor_get(v___x_241_, 0);
v_toFunctor_243_ = lean_ctor_get(v_toApplicative_242_, 0);
v_toSeq_244_ = lean_ctor_get(v_toApplicative_242_, 2);
v_toSeqLeft_245_ = lean_ctor_get(v_toApplicative_242_, 3);
v_toSeqRight_246_ = lean_ctor_get(v_toApplicative_242_, 4);
v___f_247_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12));
v___f_248_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13));
lean_inc_ref_n(v_toFunctor_243_, 2);
v___f_249_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_249_, 0, v_toFunctor_243_);
v___f_250_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_250_, 0, v_toFunctor_243_);
v___x_251_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_251_, 0, v___f_249_);
lean_ctor_set(v___x_251_, 1, v___f_250_);
lean_inc(v_toSeqRight_246_);
v___f_252_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_252_, 0, v_toSeqRight_246_);
lean_inc(v_toSeqLeft_245_);
v___f_253_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_253_, 0, v_toSeqLeft_245_);
lean_inc(v_toSeq_244_);
v___f_254_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_254_, 0, v_toSeq_244_);
v___x_255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_255_, 0, v___x_251_);
lean_ctor_set(v___x_255_, 1, v___f_247_);
lean_ctor_set(v___x_255_, 2, v___f_254_);
lean_ctor_set(v___x_255_, 3, v___f_253_);
lean_ctor_set(v___x_255_, 4, v___f_252_);
v___x_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_256_, 0, v___x_255_);
lean_ctor_set(v___x_256_, 1, v___f_248_);
v___x_257_ = l_StateRefT_x27_instMonad___redArg(v___x_256_);
v_toApplicative_258_ = lean_ctor_get(v___x_257_, 0);
v_isSharedCheck_410_ = !lean_is_exclusive(v___x_257_);
if (v_isSharedCheck_410_ == 0)
{
lean_object* v_unused_411_; 
v_unused_411_ = lean_ctor_get(v___x_257_, 1);
lean_dec(v_unused_411_);
v___x_260_ = v___x_257_;
v_isShared_261_ = v_isSharedCheck_410_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_toApplicative_258_);
lean_dec(v___x_257_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_410_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v_toFunctor_262_; lean_object* v_toSeq_263_; lean_object* v_toSeqLeft_264_; lean_object* v_toSeqRight_265_; lean_object* v___x_267_; uint8_t v_isShared_268_; uint8_t v_isSharedCheck_408_; 
v_toFunctor_262_ = lean_ctor_get(v_toApplicative_258_, 0);
v_toSeq_263_ = lean_ctor_get(v_toApplicative_258_, 2);
v_toSeqLeft_264_ = lean_ctor_get(v_toApplicative_258_, 3);
v_toSeqRight_265_ = lean_ctor_get(v_toApplicative_258_, 4);
v_isSharedCheck_408_ = !lean_is_exclusive(v_toApplicative_258_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v_toApplicative_258_, 1);
lean_dec(v_unused_409_);
v___x_267_ = v_toApplicative_258_;
v_isShared_268_ = v_isSharedCheck_408_;
goto v_resetjp_266_;
}
else
{
lean_inc(v_toSeqRight_265_);
lean_inc(v_toSeqLeft_264_);
lean_inc(v_toSeq_263_);
lean_inc(v_toFunctor_262_);
lean_dec(v_toApplicative_258_);
v___x_267_ = lean_box(0);
v_isShared_268_ = v_isSharedCheck_408_;
goto v_resetjp_266_;
}
v_resetjp_266_:
{
lean_object* v___f_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___f_272_; lean_object* v___x_273_; lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___f_276_; lean_object* v___x_278_; 
v___f_269_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14));
v___f_270_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15));
lean_inc_ref(v_toFunctor_262_);
v___f_271_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_271_, 0, v_toFunctor_262_);
v___f_272_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_272_, 0, v_toFunctor_262_);
v___x_273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_273_, 0, v___f_271_);
lean_ctor_set(v___x_273_, 1, v___f_272_);
v___f_274_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_274_, 0, v_toSeqRight_265_);
v___f_275_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_275_, 0, v_toSeqLeft_264_);
v___f_276_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_276_, 0, v_toSeq_263_);
if (v_isShared_268_ == 0)
{
lean_ctor_set(v___x_267_, 4, v___f_274_);
lean_ctor_set(v___x_267_, 3, v___f_275_);
lean_ctor_set(v___x_267_, 2, v___f_276_);
lean_ctor_set(v___x_267_, 1, v___f_269_);
lean_ctor_set(v___x_267_, 0, v___x_273_);
v___x_278_ = v___x_267_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_273_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v___f_269_);
lean_ctor_set(v_reuseFailAlloc_407_, 2, v___f_276_);
lean_ctor_set(v_reuseFailAlloc_407_, 3, v___f_275_);
lean_ctor_set(v_reuseFailAlloc_407_, 4, v___f_274_);
v___x_278_ = v_reuseFailAlloc_407_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
lean_object* v___x_280_; 
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 1, v___f_270_);
lean_ctor_set(v___x_260_, 0, v___x_278_);
v___x_280_ = v___x_260_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_406_; 
v_reuseFailAlloc_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_406_, 0, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_406_, 1, v___f_270_);
v___x_280_ = v_reuseFailAlloc_406_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; lean_object* v_toApplicative_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_404_; 
v___x_281_ = l_StateRefT_x27_instMonad___redArg(v___x_280_);
v_toApplicative_282_ = lean_ctor_get(v___x_281_, 0);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_281_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v___x_281_, 1);
lean_dec(v_unused_405_);
v___x_284_ = v___x_281_;
v_isShared_285_ = v_isSharedCheck_404_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_toApplicative_282_);
lean_dec(v___x_281_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_404_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
lean_object* v_toFunctor_286_; lean_object* v_toSeq_287_; lean_object* v_toSeqLeft_288_; lean_object* v_toSeqRight_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_402_; 
v_toFunctor_286_ = lean_ctor_get(v_toApplicative_282_, 0);
v_toSeq_287_ = lean_ctor_get(v_toApplicative_282_, 2);
v_toSeqLeft_288_ = lean_ctor_get(v_toApplicative_282_, 3);
v_toSeqRight_289_ = lean_ctor_get(v_toApplicative_282_, 4);
v_isSharedCheck_402_ = !lean_is_exclusive(v_toApplicative_282_);
if (v_isSharedCheck_402_ == 0)
{
lean_object* v_unused_403_; 
v_unused_403_ = lean_ctor_get(v_toApplicative_282_, 1);
lean_dec(v_unused_403_);
v___x_291_ = v_toApplicative_282_;
v_isShared_292_ = v_isSharedCheck_402_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_toSeqRight_289_);
lean_inc(v_toSeqLeft_288_);
lean_inc(v_toSeq_287_);
lean_inc(v_toFunctor_286_);
lean_dec(v_toApplicative_282_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_402_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___f_293_; lean_object* v___f_294_; lean_object* v___f_295_; lean_object* v___f_296_; lean_object* v___x_297_; lean_object* v___f_298_; lean_object* v___f_299_; lean_object* v___f_300_; lean_object* v___x_302_; 
v___f_293_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16));
v___f_294_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17));
lean_inc_ref(v_toFunctor_286_);
v___f_295_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_295_, 0, v_toFunctor_286_);
v___f_296_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_296_, 0, v_toFunctor_286_);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v___f_295_);
lean_ctor_set(v___x_297_, 1, v___f_296_);
v___f_298_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_298_, 0, v_toSeqRight_289_);
v___f_299_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_299_, 0, v_toSeqLeft_288_);
v___f_300_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_300_, 0, v_toSeq_287_);
if (v_isShared_292_ == 0)
{
lean_ctor_set(v___x_291_, 4, v___f_298_);
lean_ctor_set(v___x_291_, 3, v___f_299_);
lean_ctor_set(v___x_291_, 2, v___f_300_);
lean_ctor_set(v___x_291_, 1, v___f_293_);
lean_ctor_set(v___x_291_, 0, v___x_297_);
v___x_302_ = v___x_291_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v___x_297_);
lean_ctor_set(v_reuseFailAlloc_401_, 1, v___f_293_);
lean_ctor_set(v_reuseFailAlloc_401_, 2, v___f_300_);
lean_ctor_set(v_reuseFailAlloc_401_, 3, v___f_299_);
lean_ctor_set(v_reuseFailAlloc_401_, 4, v___f_298_);
v___x_302_ = v_reuseFailAlloc_401_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
lean_object* v___x_304_; 
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v___f_294_);
lean_ctor_set(v___x_284_, 0, v___x_302_);
v___x_304_ = v___x_284_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_302_);
lean_ctor_set(v_reuseFailAlloc_400_, 1, v___f_294_);
v___x_304_ = v_reuseFailAlloc_400_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
lean_object* v___x_305_; lean_object* v_toMonadQuotation_306_; lean_object* v_toMonadRef_307_; lean_object* v___f_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v_toMonadFileMap_311_; lean_object* v___x_312_; lean_object* v_getEnv_313_; lean_object* v_modifyEnv_314_; lean_object* v___f_315_; lean_object* v___x_316_; lean_object* v___f_317_; lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_305_ = l_Lean_Elab_Term_instMonadMacroAdapterTermElabM;
v_toMonadQuotation_306_ = lean_ctor_get(v___x_305_, 0);
v_toMonadRef_307_ = lean_ctor_get(v_toMonadQuotation_306_, 0);
v___f_308_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18));
v___x_309_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19));
v___x_310_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23);
v_toMonadFileMap_311_ = lean_ctor_get(v___x_310_, 0);
v___x_312_ = l_Lean_Meta_instMonadEnvMetaM;
v_getEnv_313_ = lean_ctor_get(v___x_312_, 0);
v_modifyEnv_314_ = lean_ctor_get(v___x_312_, 1);
lean_inc(v_modifyEnv_314_);
v___f_315_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_315_, 0, v_modifyEnv_314_);
lean_closure_set(v___f_315_, 1, v___x_309_);
lean_inc(v_getEnv_313_);
v___x_316_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_316_, 0, lean_box(0));
lean_closure_set(v___x_316_, 1, lean_box(0));
lean_closure_set(v___x_316_, 2, lean_box(0));
lean_closure_set(v___x_316_, 3, lean_box(0));
lean_closure_set(v___x_316_, 4, v_getEnv_313_);
v___f_317_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_317_, 0, v___f_315_);
lean_closure_set(v___f_317_, 1, v___f_308_);
v___x_318_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_318_, 0, lean_box(0));
lean_closure_set(v___x_318_, 1, v___x_316_);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___f_317_);
v___x_320_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35);
v___x_321_ = l_Lean_Elab_Term_instAddErrorMessageContextTermElabM;
lean_inc_ref(v_toMonadRef_307_);
v___x_322_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_322_, 0, v___x_320_);
lean_ctor_set(v___x_322_, 1, v_toMonadRef_307_);
lean_ctor_set(v___x_322_, 2, v___x_321_);
switch(lean_obj_tag(v_v_233_))
{
case 0:
{
lean_object* v_val_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_338_; 
lean_dec_ref_known(v___x_319_, 2);
v_val_323_ = lean_ctor_get(v_v_233_, 0);
v_isSharedCheck_338_ = !lean_is_exclusive(v_v_233_);
if (v_isSharedCheck_338_ == 0)
{
v___x_325_ = v_v_233_;
v_isShared_326_ = v_isSharedCheck_338_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_val_323_);
lean_dec(v_v_233_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_338_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_327_; lean_object* v_y_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v___x_327_ = l_Lean_TSyntax_getId(v_val_323_);
v_y_328_ = l_Lean_Name_eraseMacroScopes(v___x_327_);
lean_dec(v___x_327_);
v___x_329_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37));
v___x_330_ = lean_name_eq(v_y_328_, v___x_329_);
lean_dec(v_y_328_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; lean_object* v___x_1983__overap_332_; lean_object* v___x_333_; 
lean_del_object(v___x_325_);
v___x_331_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39);
v___x_1983__overap_332_ = l_Lean_throwErrorAt___redArg(v___x_304_, v___x_322_, v_val_323_, v___x_331_);
lean_inc(v___y_239_);
lean_inc_ref(v___y_238_);
lean_inc(v___y_237_);
lean_inc_ref(v___y_236_);
lean_inc(v___y_235_);
lean_inc_ref(v___y_234_);
v___x_333_ = lean_apply_7(v___x_1983__overap_332_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, lean_box(0));
return v___x_333_;
}
else
{
lean_object* v___x_334_; lean_object* v___x_336_; 
lean_dec(v_val_323_);
lean_dec_ref_known(v___x_322_, 3);
lean_dec_ref(v___x_304_);
v___x_334_ = lean_box(0);
if (v_isShared_326_ == 0)
{
lean_ctor_set(v___x_325_, 0, v___x_334_);
v___x_336_ = v___x_325_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v___x_334_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
return v___x_336_;
}
}
}
}
case 1:
{
lean_object* v_val_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_1985__overap_345_; lean_object* v___x_346_; 
lean_dec_ref_known(v___x_319_, 2);
v_val_339_ = lean_ctor_get(v_v_233_, 0);
lean_inc_n(v_val_339_, 2);
lean_dec_ref_known(v_v_233_, 1);
v___x_340_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41);
v___x_341_ = l_Lean_MessageData_ofSyntax(v_val_339_);
v___x_342_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_342_, 0, v___x_340_);
lean_ctor_set(v___x_342_, 1, v___x_341_);
v___x_343_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43);
v___x_344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_1985__overap_345_ = l_Lean_throwErrorAt___redArg(v___x_304_, v___x_322_, v_val_339_, v___x_344_);
lean_inc(v___y_239_);
lean_inc_ref(v___y_238_);
lean_inc(v___y_237_);
lean_inc_ref(v___y_236_);
lean_inc(v___y_235_);
lean_inc_ref(v___y_234_);
v___x_346_ = lean_apply_7(v___x_1985__overap_345_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, lean_box(0));
return v___x_346_;
}
default: 
{
lean_object* v_val_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_399_; 
v_val_347_ = lean_ctor_get(v_v_233_, 0);
v_isSharedCheck_399_ = !lean_is_exclusive(v_v_233_);
if (v_isSharedCheck_399_ == 0)
{
v___x_349_ = v_v_233_;
v_isShared_350_ = v_isSharedCheck_399_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_val_347_);
lean_dec(v_v_233_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_399_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v_toCold_351_; lean_object* v_currRecDepth_352_; lean_object* v_ref_353_; uint8_t v_diag_354_; uint8_t v_suppressElabErrors_355_; lean_object* v___f_356_; lean_object* v___x_357_; lean_object* v___f_358_; lean_object* v_ref_359_; lean_object* v___x_360_; lean_object* v___x_1987__overap_361_; lean_object* v___x_362_; 
v_toCold_351_ = lean_ctor_get(v___y_238_, 0);
v_currRecDepth_352_ = lean_ctor_get(v___y_238_, 1);
v_ref_353_ = lean_ctor_get(v___y_238_, 2);
v_diag_354_ = lean_ctor_get_uint8(v___y_238_, sizeof(void*)*3);
v_suppressElabErrors_355_ = lean_ctor_get_uint8(v___y_238_, sizeof(void*)*3 + 1);
v___f_356_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__45));
v___x_357_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50));
v___f_358_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__52));
v_ref_359_ = l_Lean_replaceRef(v_val_347_, v_ref_353_);
lean_inc(v_currRecDepth_352_);
lean_inc_ref(v_toCold_351_);
v___x_360_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_360_, 0, v_toCold_351_);
lean_ctor_set(v___x_360_, 1, v_currRecDepth_352_);
lean_ctor_set(v___x_360_, 2, v_ref_359_);
lean_ctor_set_uint8(v___x_360_, sizeof(void*)*3, v_diag_354_);
lean_ctor_set_uint8(v___x_360_, sizeof(void*)*3 + 1, v_suppressElabErrors_355_);
lean_inc_ref(v___x_322_);
lean_inc(v_toMonadFileMap_311_);
lean_inc_ref(v___x_304_);
v___x_1987__overap_361_ = l_Lean_Doc_parseQuotedStrLit___redArg(v___x_304_, v_toMonadFileMap_311_, v___x_319_, v___x_322_, v___x_310_, v___x_357_, v___f_358_, v_val_347_);
lean_inc(v___y_239_);
lean_inc(v___y_237_);
lean_inc_ref(v___y_236_);
lean_inc(v___y_235_);
lean_inc_ref(v___y_234_);
v___x_362_ = lean_apply_7(v___x_1987__overap_361_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___x_360_, v___y_239_, lean_box(0));
if (lean_obj_tag(v___x_362_) == 0)
{
lean_object* v_a_363_; lean_object* v___x_365_; uint8_t v_isShared_366_; uint8_t v_isSharedCheck_390_; 
v_a_363_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_390_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_390_ == 0)
{
v___x_365_ = v___x_362_;
v_isShared_366_ = v_isSharedCheck_390_;
goto v_resetjp_364_;
}
else
{
lean_inc(v_a_363_);
lean_dec(v___x_362_);
v___x_365_ = lean_box(0);
v_isShared_366_ = v_isSharedCheck_390_;
goto v_resetjp_364_;
}
v_resetjp_364_:
{
lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_367_ = lean_unsigned_to_nat(0u);
v___x_368_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17));
lean_inc(v_a_363_);
v___x_369_ = l_Lean_Syntax_isOfKind(v_a_363_, v___x_368_);
if (v___x_369_ == 0)
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_1990__overap_375_; lean_object* v___x_376_; 
lean_del_object(v___x_365_);
lean_del_object(v___x_349_);
v___x_370_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54);
lean_inc(v_a_363_);
v___x_371_ = l_Lean_MessageData_ofSyntax(v_a_363_);
v___x_372_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
v___x_373_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43);
v___x_374_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_372_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
v___x_1990__overap_375_ = l_Lean_throwErrorAt___redArg(v___x_304_, v___x_322_, v_a_363_, v___x_374_);
lean_inc(v___y_239_);
lean_inc_ref(v___y_238_);
lean_inc(v___y_237_);
lean_inc_ref(v___y_236_);
lean_inc(v___y_235_);
lean_inc_ref(v___y_234_);
v___x_376_ = lean_apply_7(v___x_1990__overap_375_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_, lean_box(0));
return v___x_376_;
}
else
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; size_t v_sz_381_; size_t v___x_382_; lean_object* v___x_383_; lean_object* v___x_385_; 
lean_dec_ref_known(v___x_322_, 3);
lean_dec_ref(v___x_304_);
v___x_377_ = l_Lean_Syntax_getArg(v_a_363_, v___x_367_);
lean_dec(v_a_363_);
v___x_378_ = l_Lean_Syntax_getArgs(v___x_377_);
lean_dec(v___x_377_);
v___x_379_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___x_378_);
lean_dec_ref(v___x_378_);
v___x_380_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__64));
v_sz_381_ = lean_array_size(v___x_379_);
v___x_382_ = ((size_t)0ULL);
v___x_383_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_380_, v___f_356_, v_sz_381_, v___x_382_, v___x_379_);
if (v_isShared_350_ == 0)
{
lean_ctor_set_tag(v___x_349_, 1);
lean_ctor_set(v___x_349_, 0, v___x_383_);
v___x_385_ = v___x_349_;
goto v_reusejp_384_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_383_);
v___x_385_ = v_reuseFailAlloc_389_;
goto v_reusejp_384_;
}
v_reusejp_384_:
{
lean_object* v___x_387_; 
if (v_isShared_366_ == 0)
{
lean_ctor_set(v___x_365_, 0, v___x_385_);
v___x_387_ = v___x_365_;
goto v_reusejp_386_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_385_);
v___x_387_ = v_reuseFailAlloc_388_;
goto v_reusejp_386_;
}
v_reusejp_386_:
{
return v___x_387_;
}
}
}
}
}
else
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_398_; 
lean_del_object(v___x_349_);
lean_dec_ref_known(v___x_322_, 3);
lean_dec_ref(v___x_304_);
v_a_391_ = lean_ctor_get(v___x_362_, 0);
v_isSharedCheck_398_ = !lean_is_exclusive(v___x_362_);
if (v_isSharedCheck_398_ == 0)
{
v___x_393_ = v___x_362_;
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_362_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_398_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_397_; 
v_reuseFailAlloc_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_397_, 0, v_a_391_);
v___x_396_ = v_reuseFailAlloc_397_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
return v___x_396_;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___private__1___boxed(lean_object* v_v_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l_Lean_Doc_instFromDocArgDocScope___private__1(v_v_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2(lean_object* v___f_421_, lean_object* v___f_422_, lean_object* v_v_423_, lean_object* v___y_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v___x_431_; lean_object* v_toApplicative_432_; lean_object* v_toFunctor_433_; lean_object* v_toSeq_434_; lean_object* v_toSeqLeft_435_; lean_object* v_toSeqRight_436_; lean_object* v___f_437_; lean_object* v___f_438_; lean_object* v___f_439_; lean_object* v___f_440_; lean_object* v___x_441_; lean_object* v___f_442_; lean_object* v___f_443_; lean_object* v___f_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v_toApplicative_448_; lean_object* v___x_450_; uint8_t v_isShared_451_; uint8_t v_isSharedCheck_600_; 
v___x_431_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__11);
v_toApplicative_432_ = lean_ctor_get(v___x_431_, 0);
v_toFunctor_433_ = lean_ctor_get(v_toApplicative_432_, 0);
v_toSeq_434_ = lean_ctor_get(v_toApplicative_432_, 2);
v_toSeqLeft_435_ = lean_ctor_get(v_toApplicative_432_, 3);
v_toSeqRight_436_ = lean_ctor_get(v_toApplicative_432_, 4);
v___f_437_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__12));
v___f_438_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__13));
lean_inc_ref_n(v_toFunctor_433_, 2);
v___f_439_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_439_, 0, v_toFunctor_433_);
v___f_440_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_440_, 0, v_toFunctor_433_);
v___x_441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_441_, 0, v___f_439_);
lean_ctor_set(v___x_441_, 1, v___f_440_);
lean_inc(v_toSeqRight_436_);
v___f_442_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_442_, 0, v_toSeqRight_436_);
lean_inc(v_toSeqLeft_435_);
v___f_443_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_443_, 0, v_toSeqLeft_435_);
lean_inc(v_toSeq_434_);
v___f_444_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_444_, 0, v_toSeq_434_);
v___x_445_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_445_, 0, v___x_441_);
lean_ctor_set(v___x_445_, 1, v___f_437_);
lean_ctor_set(v___x_445_, 2, v___f_444_);
lean_ctor_set(v___x_445_, 3, v___f_443_);
lean_ctor_set(v___x_445_, 4, v___f_442_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
lean_ctor_set(v___x_446_, 1, v___f_438_);
v___x_447_ = l_StateRefT_x27_instMonad___redArg(v___x_446_);
v_toApplicative_448_ = lean_ctor_get(v___x_447_, 0);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_447_);
if (v_isSharedCheck_600_ == 0)
{
lean_object* v_unused_601_; 
v_unused_601_ = lean_ctor_get(v___x_447_, 1);
lean_dec(v_unused_601_);
v___x_450_ = v___x_447_;
v_isShared_451_ = v_isSharedCheck_600_;
goto v_resetjp_449_;
}
else
{
lean_inc(v_toApplicative_448_);
lean_dec(v___x_447_);
v___x_450_ = lean_box(0);
v_isShared_451_ = v_isSharedCheck_600_;
goto v_resetjp_449_;
}
v_resetjp_449_:
{
lean_object* v_toFunctor_452_; lean_object* v_toSeq_453_; lean_object* v_toSeqLeft_454_; lean_object* v_toSeqRight_455_; lean_object* v___x_457_; uint8_t v_isShared_458_; uint8_t v_isSharedCheck_598_; 
v_toFunctor_452_ = lean_ctor_get(v_toApplicative_448_, 0);
v_toSeq_453_ = lean_ctor_get(v_toApplicative_448_, 2);
v_toSeqLeft_454_ = lean_ctor_get(v_toApplicative_448_, 3);
v_toSeqRight_455_ = lean_ctor_get(v_toApplicative_448_, 4);
v_isSharedCheck_598_ = !lean_is_exclusive(v_toApplicative_448_);
if (v_isSharedCheck_598_ == 0)
{
lean_object* v_unused_599_; 
v_unused_599_ = lean_ctor_get(v_toApplicative_448_, 1);
lean_dec(v_unused_599_);
v___x_457_ = v_toApplicative_448_;
v_isShared_458_ = v_isSharedCheck_598_;
goto v_resetjp_456_;
}
else
{
lean_inc(v_toSeqRight_455_);
lean_inc(v_toSeqLeft_454_);
lean_inc(v_toSeq_453_);
lean_inc(v_toFunctor_452_);
lean_dec(v_toApplicative_448_);
v___x_457_ = lean_box(0);
v_isShared_458_ = v_isSharedCheck_598_;
goto v_resetjp_456_;
}
v_resetjp_456_:
{
lean_object* v___f_459_; lean_object* v___f_460_; lean_object* v___f_461_; lean_object* v___f_462_; lean_object* v___x_463_; lean_object* v___f_464_; lean_object* v___f_465_; lean_object* v___f_466_; lean_object* v___x_468_; 
v___f_459_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__14));
v___f_460_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__15));
lean_inc_ref(v_toFunctor_452_);
v___f_461_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_461_, 0, v_toFunctor_452_);
v___f_462_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_462_, 0, v_toFunctor_452_);
v___x_463_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_463_, 0, v___f_461_);
lean_ctor_set(v___x_463_, 1, v___f_462_);
v___f_464_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_464_, 0, v_toSeqRight_455_);
v___f_465_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_465_, 0, v_toSeqLeft_454_);
v___f_466_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_466_, 0, v_toSeq_453_);
if (v_isShared_458_ == 0)
{
lean_ctor_set(v___x_457_, 4, v___f_464_);
lean_ctor_set(v___x_457_, 3, v___f_465_);
lean_ctor_set(v___x_457_, 2, v___f_466_);
lean_ctor_set(v___x_457_, 1, v___f_459_);
lean_ctor_set(v___x_457_, 0, v___x_463_);
v___x_468_ = v___x_457_;
goto v_reusejp_467_;
}
else
{
lean_object* v_reuseFailAlloc_597_; 
v_reuseFailAlloc_597_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_597_, 0, v___x_463_);
lean_ctor_set(v_reuseFailAlloc_597_, 1, v___f_459_);
lean_ctor_set(v_reuseFailAlloc_597_, 2, v___f_466_);
lean_ctor_set(v_reuseFailAlloc_597_, 3, v___f_465_);
lean_ctor_set(v_reuseFailAlloc_597_, 4, v___f_464_);
v___x_468_ = v_reuseFailAlloc_597_;
goto v_reusejp_467_;
}
v_reusejp_467_:
{
lean_object* v___x_470_; 
if (v_isShared_451_ == 0)
{
lean_ctor_set(v___x_450_, 1, v___f_460_);
lean_ctor_set(v___x_450_, 0, v___x_468_);
v___x_470_ = v___x_450_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v___f_460_);
v___x_470_ = v_reuseFailAlloc_596_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
lean_object* v___x_471_; lean_object* v_toApplicative_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_594_; 
v___x_471_ = l_StateRefT_x27_instMonad___redArg(v___x_470_);
v_toApplicative_472_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_594_ == 0)
{
lean_object* v_unused_595_; 
v_unused_595_ = lean_ctor_get(v___x_471_, 1);
lean_dec(v_unused_595_);
v___x_474_ = v___x_471_;
v_isShared_475_ = v_isSharedCheck_594_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_toApplicative_472_);
lean_dec(v___x_471_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_594_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v_toFunctor_476_; lean_object* v_toSeq_477_; lean_object* v_toSeqLeft_478_; lean_object* v_toSeqRight_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_592_; 
v_toFunctor_476_ = lean_ctor_get(v_toApplicative_472_, 0);
v_toSeq_477_ = lean_ctor_get(v_toApplicative_472_, 2);
v_toSeqLeft_478_ = lean_ctor_get(v_toApplicative_472_, 3);
v_toSeqRight_479_ = lean_ctor_get(v_toApplicative_472_, 4);
v_isSharedCheck_592_ = !lean_is_exclusive(v_toApplicative_472_);
if (v_isSharedCheck_592_ == 0)
{
lean_object* v_unused_593_; 
v_unused_593_ = lean_ctor_get(v_toApplicative_472_, 1);
lean_dec(v_unused_593_);
v___x_481_ = v_toApplicative_472_;
v_isShared_482_ = v_isSharedCheck_592_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_toSeqRight_479_);
lean_inc(v_toSeqLeft_478_);
lean_inc(v_toSeq_477_);
lean_inc(v_toFunctor_476_);
lean_dec(v_toApplicative_472_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_592_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___f_483_; lean_object* v___f_484_; lean_object* v___f_485_; lean_object* v___f_486_; lean_object* v___x_487_; lean_object* v___f_488_; lean_object* v___f_489_; lean_object* v___f_490_; lean_object* v___x_492_; 
v___f_483_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__16));
v___f_484_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__17));
lean_inc_ref(v_toFunctor_476_);
v___f_485_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_485_, 0, v_toFunctor_476_);
v___f_486_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_486_, 0, v_toFunctor_476_);
v___x_487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_487_, 0, v___f_485_);
lean_ctor_set(v___x_487_, 1, v___f_486_);
v___f_488_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_488_, 0, v_toSeqRight_479_);
v___f_489_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_489_, 0, v_toSeqLeft_478_);
v___f_490_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_490_, 0, v_toSeq_477_);
if (v_isShared_482_ == 0)
{
lean_ctor_set(v___x_481_, 4, v___f_488_);
lean_ctor_set(v___x_481_, 3, v___f_489_);
lean_ctor_set(v___x_481_, 2, v___f_490_);
lean_ctor_set(v___x_481_, 1, v___f_483_);
lean_ctor_set(v___x_481_, 0, v___x_487_);
v___x_492_ = v___x_481_;
goto v_reusejp_491_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_487_);
lean_ctor_set(v_reuseFailAlloc_591_, 1, v___f_483_);
lean_ctor_set(v_reuseFailAlloc_591_, 2, v___f_490_);
lean_ctor_set(v_reuseFailAlloc_591_, 3, v___f_489_);
lean_ctor_set(v_reuseFailAlloc_591_, 4, v___f_488_);
v___x_492_ = v_reuseFailAlloc_591_;
goto v_reusejp_491_;
}
v_reusejp_491_:
{
lean_object* v___x_494_; 
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 1, v___f_484_);
lean_ctor_set(v___x_474_, 0, v___x_492_);
v___x_494_ = v___x_474_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v___x_492_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v___f_484_);
v___x_494_ = v_reuseFailAlloc_590_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
lean_object* v___x_495_; lean_object* v_toMonadQuotation_496_; lean_object* v_toMonadRef_497_; lean_object* v___f_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v_toMonadFileMap_501_; lean_object* v___x_502_; lean_object* v_getEnv_503_; lean_object* v_modifyEnv_504_; lean_object* v___f_505_; lean_object* v___x_506_; lean_object* v___f_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_495_ = l_Lean_Elab_Term_instMonadMacroAdapterTermElabM;
v_toMonadQuotation_496_ = lean_ctor_get(v___x_495_, 0);
v_toMonadRef_497_ = lean_ctor_get(v_toMonadQuotation_496_, 0);
v___f_498_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__18));
v___x_499_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__19));
v___x_500_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__23);
v_toMonadFileMap_501_ = lean_ctor_get(v___x_500_, 0);
v___x_502_ = l_Lean_Meta_instMonadEnvMetaM;
v_getEnv_503_ = lean_ctor_get(v___x_502_, 0);
v_modifyEnv_504_ = lean_ctor_get(v___x_502_, 1);
lean_inc(v_modifyEnv_504_);
v___f_505_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_505_, 0, v_modifyEnv_504_);
lean_closure_set(v___f_505_, 1, v___x_499_);
lean_inc(v_getEnv_503_);
v___x_506_ = lean_alloc_closure((void*)(l_StateRefT_x27_lift___boxed), 6, 5);
lean_closure_set(v___x_506_, 0, lean_box(0));
lean_closure_set(v___x_506_, 1, lean_box(0));
lean_closure_set(v___x_506_, 2, lean_box(0));
lean_closure_set(v___x_506_, 3, lean_box(0));
lean_closure_set(v___x_506_, 4, v_getEnv_503_);
v___f_507_ = lean_alloc_closure((void*)(l_Lean_instMonadEnvOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_507_, 0, v___f_505_);
lean_closure_set(v___f_507_, 1, v___f_498_);
v___x_508_ = lean_alloc_closure((void*)(l_ReaderT_instMonadLift___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___x_508_, 0, lean_box(0));
lean_closure_set(v___x_508_, 1, v___x_506_);
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v___x_508_);
lean_ctor_set(v___x_509_, 1, v___f_507_);
v___x_510_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__35);
v___x_511_ = l_Lean_Elab_Term_instAddErrorMessageContextTermElabM;
lean_inc_ref(v_toMonadRef_497_);
v___x_512_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_512_, 0, v___x_510_);
lean_ctor_set(v___x_512_, 1, v_toMonadRef_497_);
lean_ctor_set(v___x_512_, 2, v___x_511_);
switch(lean_obj_tag(v_v_423_))
{
case 0:
{
lean_object* v_val_513_; lean_object* v___x_515_; uint8_t v_isShared_516_; uint8_t v_isSharedCheck_528_; 
lean_dec_ref_known(v___x_509_, 2);
lean_dec_ref(v___f_422_);
lean_dec_ref(v___f_421_);
v_val_513_ = lean_ctor_get(v_v_423_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v_v_423_);
if (v_isSharedCheck_528_ == 0)
{
v___x_515_ = v_v_423_;
v_isShared_516_ = v_isSharedCheck_528_;
goto v_resetjp_514_;
}
else
{
lean_inc(v_val_513_);
lean_dec(v_v_423_);
v___x_515_ = lean_box(0);
v_isShared_516_ = v_isSharedCheck_528_;
goto v_resetjp_514_;
}
v_resetjp_514_:
{
lean_object* v___x_517_; lean_object* v_y_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v___x_517_ = l_Lean_TSyntax_getId(v_val_513_);
v_y_518_ = l_Lean_Name_eraseMacroScopes(v___x_517_);
lean_dec(v___x_517_);
v___x_519_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__37));
v___x_520_ = lean_name_eq(v_y_518_, v___x_519_);
lean_dec(v_y_518_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; lean_object* v___x_328__overap_522_; lean_object* v___x_523_; 
lean_del_object(v___x_515_);
v___x_521_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__39);
v___x_328__overap_522_ = l_Lean_throwErrorAt___redArg(v___x_494_, v___x_512_, v_val_513_, v___x_521_);
lean_inc(v___y_429_);
lean_inc_ref(v___y_428_);
lean_inc(v___y_427_);
lean_inc_ref(v___y_426_);
lean_inc(v___y_425_);
lean_inc_ref(v___y_424_);
v___x_523_ = lean_apply_7(v___x_328__overap_522_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, lean_box(0));
return v___x_523_;
}
else
{
lean_object* v___x_524_; lean_object* v___x_526_; 
lean_dec(v_val_513_);
lean_dec_ref_known(v___x_512_, 3);
lean_dec_ref(v___x_494_);
v___x_524_ = lean_box(0);
if (v_isShared_516_ == 0)
{
lean_ctor_set(v___x_515_, 0, v___x_524_);
v___x_526_ = v___x_515_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v___x_524_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
case 1:
{
lean_object* v_val_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_339__overap_535_; lean_object* v___x_536_; 
lean_dec_ref_known(v___x_509_, 2);
lean_dec_ref(v___f_422_);
lean_dec_ref(v___f_421_);
v_val_529_ = lean_ctor_get(v_v_423_, 0);
lean_inc_n(v_val_529_, 2);
lean_dec_ref_known(v_v_423_, 1);
v___x_530_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__41);
v___x_531_ = l_Lean_MessageData_ofSyntax(v_val_529_);
v___x_532_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_532_, 0, v___x_530_);
lean_ctor_set(v___x_532_, 1, v___x_531_);
v___x_533_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43);
v___x_534_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
v___x_339__overap_535_ = l_Lean_throwErrorAt___redArg(v___x_494_, v___x_512_, v_val_529_, v___x_534_);
lean_inc(v___y_429_);
lean_inc_ref(v___y_428_);
lean_inc(v___y_427_);
lean_inc_ref(v___y_426_);
lean_inc(v___y_425_);
lean_inc_ref(v___y_424_);
v___x_536_ = lean_apply_7(v___x_339__overap_535_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, lean_box(0));
return v___x_536_;
}
default: 
{
lean_object* v_val_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_589_; 
v_val_537_ = lean_ctor_get(v_v_423_, 0);
v_isSharedCheck_589_ = !lean_is_exclusive(v_v_423_);
if (v_isSharedCheck_589_ == 0)
{
v___x_539_ = v_v_423_;
v_isShared_540_ = v_isSharedCheck_589_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_val_537_);
lean_dec(v_v_423_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_589_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v_toCold_541_; lean_object* v_currRecDepth_542_; lean_object* v_ref_543_; uint8_t v_diag_544_; uint8_t v_suppressElabErrors_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___f_548_; lean_object* v_ref_549_; lean_object* v___x_550_; lean_object* v___x_349__overap_551_; lean_object* v___x_552_; 
v_toCold_541_ = lean_ctor_get(v___y_428_, 0);
v_currRecDepth_542_ = lean_ctor_get(v___y_428_, 1);
v_ref_543_ = lean_ctor_get(v___y_428_, 2);
v_diag_544_ = lean_ctor_get_uint8(v___y_428_, sizeof(void*)*3);
v_suppressElabErrors_545_ = lean_ctor_get_uint8(v___y_428_, sizeof(void*)*3 + 1);
v___x_546_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__50));
v___x_547_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__51));
v___f_548_ = lean_alloc_closure((void*)(l_Lean_Doc_instFromDocArgDocScope___private__1___lam__1), 4, 2);
lean_closure_set(v___f_548_, 0, v___x_547_);
lean_closure_set(v___f_548_, 1, v___f_421_);
v_ref_549_ = l_Lean_replaceRef(v_val_537_, v_ref_543_);
lean_inc(v_currRecDepth_542_);
lean_inc_ref(v_toCold_541_);
v___x_550_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_550_, 0, v_toCold_541_);
lean_ctor_set(v___x_550_, 1, v_currRecDepth_542_);
lean_ctor_set(v___x_550_, 2, v_ref_549_);
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*3, v_diag_544_);
lean_ctor_set_uint8(v___x_550_, sizeof(void*)*3 + 1, v_suppressElabErrors_545_);
lean_inc_ref(v___x_512_);
lean_inc(v_toMonadFileMap_501_);
lean_inc_ref(v___x_494_);
v___x_349__overap_551_ = l_Lean_Doc_parseQuotedStrLit___redArg(v___x_494_, v_toMonadFileMap_501_, v___x_509_, v___x_512_, v___x_500_, v___x_546_, v___f_548_, v_val_537_);
lean_inc(v___y_429_);
lean_inc(v___y_427_);
lean_inc_ref(v___y_426_);
lean_inc(v___y_425_);
lean_inc_ref(v___y_424_);
v___x_552_ = lean_apply_7(v___x_349__overap_551_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___x_550_, v___y_429_, lean_box(0));
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v_a_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_580_; 
v_a_553_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_580_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_580_ == 0)
{
v___x_555_ = v___x_552_;
v_isShared_556_ = v_isSharedCheck_580_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_a_553_);
lean_dec(v___x_552_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_580_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_557_ = lean_unsigned_to_nat(0u);
v___x_558_ = ((lean_object*)(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports___closed__17));
lean_inc(v_a_553_);
v___x_559_ = l_Lean_Syntax_isOfKind(v_a_553_, v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_380__overap_565_; lean_object* v___x_566_; 
lean_del_object(v___x_555_);
lean_del_object(v___x_539_);
lean_dec_ref(v___f_422_);
v___x_560_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__54);
lean_inc(v_a_553_);
v___x_561_ = l_Lean_MessageData_ofSyntax(v_a_553_);
v___x_562_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_562_, 0, v___x_560_);
lean_ctor_set(v___x_562_, 1, v___x_561_);
v___x_563_ = lean_obj_once(&l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43, &l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43_once, _init_l_Lean_Doc_instFromDocArgDocScope___private__1___closed__43);
v___x_564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_562_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_380__overap_565_ = l_Lean_throwErrorAt___redArg(v___x_494_, v___x_512_, v_a_553_, v___x_564_);
lean_inc(v___y_429_);
lean_inc_ref(v___y_428_);
lean_inc(v___y_427_);
lean_inc_ref(v___y_426_);
lean_inc(v___y_425_);
lean_inc_ref(v___y_424_);
v___x_566_ = lean_apply_7(v___x_380__overap_565_, v___y_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_, v___y_429_, lean_box(0));
return v___x_566_;
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; size_t v_sz_571_; size_t v___x_572_; lean_object* v___x_573_; lean_object* v___x_575_; 
lean_dec_ref_known(v___x_512_, 3);
lean_dec_ref(v___x_494_);
v___x_567_ = l_Lean_Syntax_getArg(v_a_553_, v___x_557_);
lean_dec(v_a_553_);
v___x_568_ = l_Lean_Syntax_getArgs(v___x_567_);
lean_dec(v___x_567_);
v___x_569_ = l_Lean_Syntax_TSepArray_getElems___redArg(v___x_568_);
lean_dec_ref(v___x_568_);
v___x_570_ = ((lean_object*)(l_Lean_Doc_instFromDocArgDocScope___private__1___closed__64));
v_sz_571_ = lean_array_size(v___x_569_);
v___x_572_ = ((size_t)0ULL);
v___x_573_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_570_, v___f_422_, v_sz_571_, v___x_572_, v___x_569_);
if (v_isShared_540_ == 0)
{
lean_ctor_set_tag(v___x_539_, 1);
lean_ctor_set(v___x_539_, 0, v___x_573_);
v___x_575_ = v___x_539_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_579_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
lean_object* v___x_577_; 
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 0, v___x_575_);
v___x_577_ = v___x_555_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v___x_575_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
else
{
lean_object* v_a_581_; lean_object* v___x_583_; uint8_t v_isShared_584_; uint8_t v_isSharedCheck_588_; 
lean_del_object(v___x_539_);
lean_dec_ref_known(v___x_512_, 3);
lean_dec_ref(v___x_494_);
lean_dec_ref(v___f_422_);
v_a_581_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_588_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_588_ == 0)
{
v___x_583_ = v___x_552_;
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
else
{
lean_inc(v_a_581_);
lean_dec(v___x_552_);
v___x_583_ = lean_box(0);
v_isShared_584_ = v_isSharedCheck_588_;
goto v_resetjp_582_;
}
v_resetjp_582_:
{
lean_object* v___x_586_; 
if (v_isShared_584_ == 0)
{
v___x_586_ = v___x_583_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_a_581_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
return v___x_586_;
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
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Doc_instFromDocArgDocScope___lam__2___boxed(lean_object* v___f_602_, lean_object* v___f_603_, lean_object* v_v_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_, lean_object* v___y_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_Doc_instFromDocArgDocScope___lam__2(v___f_602_, v___f_603_, v_v_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_, v___y_610_);
lean_dec(v___y_610_);
lean_dec_ref(v___y_609_);
lean_dec(v___y_608_);
lean_dec_ref(v___y_607_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
return v_res_612_;
}
}
lean_object* runtime_initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_DocString_Builtin_Scopes(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports = _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports();
lean_mark_persistent(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_imports);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_DocString_Builtin_Scopes(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM = _init_l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM();
lean_mark_persistent(l___private_Lean_Elab_DocString_Builtin_Scopes_0__Lean_Doc_importsM);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_DocString(uint8_t builtin);
lean_object* initialize_Lean_Elab_DocString_Builtin_Parsing(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_DocString_Builtin_Scopes(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_DocString(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DocString_Builtin_Parsing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DocString_Builtin_Scopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_DocString_Builtin_Scopes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_DocString_Builtin_Scopes(builtin);
}
#ifdef __cplusplus
}
#endif
