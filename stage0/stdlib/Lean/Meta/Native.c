// Lean compiler output
// Module: Lean.Meta.Native
// Imports: public import Lean.Meta.Basic import Lean.Util.CollectLevelParams import Lean.Elab.DeclarationRange import Lean.Compiler.Options
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getRange_x3f(lean_object*, uint8_t);
lean_object* l_Lean_DeclarationRange_ofStringPositions(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
extern lean_object* l_Lean_declRangeExt;
lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_collectLevelParams(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_DeclNameGenerator_mkUniqueName(lean_object*, lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConst___redArg(lean_object*, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_markMeta(lean_object*, lean_object*);
lean_object* l_Lean_addAndCompile(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Kernel_enableDiag(lean_object*, uint8_t);
extern lean_object* l_Lean_Elab_async;
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isPrefixOf(lean_object*, lean_object*);
extern lean_object* l_Lean_diagnostics;
extern lean_object* l_Lean_Compiler_compiler_relaxedMetaCheck;
uint8_t l_Lean_Kernel_isDiagnosticsEnabled(lean_object*);
extern lean_object* l_Lean_maxRecDepth;
extern lean_object* l_Lean_Compiler_compiler_postponeCompile;
lean_object* l_Lean_Environment_unlockAsync(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_addDecl(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
extern lean_object* l_Lean_Meta_instMonadEnvMetaM;
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instAddMessageContextMetaM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_evalConst___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__4_value),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3_value)} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__0_value),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__8_value),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__2_value),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__5_value),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__6_value),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__7_value)}};
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__9_value),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__3_value)}};
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10_value;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15_value;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__20;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__21;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__22 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__22_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__23 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__23_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__24 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__24_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__25 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__25_value;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__26;
static lean_once_cell_t l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__27;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__28 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__28_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__28_value)} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__29 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__29_value;
static const lean_closure_object l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__29_value)} };
static const lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__30 = (const lean_object*)&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__30_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__0 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__0_value;
static const lean_ctor_object l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__1 = (const lean_object*)&l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Tactic `"};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__1;
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "` failed: Could not evaluate decidable instance. Error: "};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "` failed. Error: "};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__5;
static const lean_string_object l_Lean_Meta_nativeEqTrue___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__7_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__8;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__9;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__10;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__11;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___lam__0___closed__12;
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__0;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__1;
static const lean_array_object l_Lean_Meta_nativeEqTrue___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__2 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__2_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__3;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_native"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__4 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__4_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__4_value),LEAN_SCALAR_PTR_LITERAL(167, 17, 188, 127, 248, 12, 59, 169)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__5 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__5_value;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "decl"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__6 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__6_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__6_value),LEAN_SCALAR_PTR_LITERAL(122, 197, 108, 116, 168, 105, 88, 191)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__7 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__7_value;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ax"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__8 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__8_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__8_value),LEAN_SCALAR_PTR_LITERAL(79, 222, 122, 135, 172, 245, 68, 224)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__9 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__9_value;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__10 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__10_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__10_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__11 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__11_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__12;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__13;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__14;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__15;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__16 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__16_value;
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_nativeEqTrue___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l_Lean_Meta_nativeEqTrue___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__17_value_aux_0),((lean_object*)&l_Lean_Meta_nativeEqTrue___closed__16_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__17 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__17_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__18;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "` failed: Cannot native decide proposition with metavariables:"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__19 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__19_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__20;
static const lean_string_object l_Lean_Meta_nativeEqTrue___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "` failed: Cannot native decide proposition with free variables:"};
static const lean_object* l_Lean_Meta_nativeEqTrue___closed__21 = (const lean_object*)&l_Lean_Meta_nativeEqTrue___closed__21_value;
static lean_once_cell_t l_Lean_Meta_nativeEqTrue___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_nativeEqTrue___closed__22;
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx(lean_object* v_x_1_){
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
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorIdx___boxed(lean_object* v_x_4_){
_start:
{
lean_object* v_res_5_; 
v_res_5_ = l_Lean_Meta_NativeEqTrueResult_ctorIdx(v_x_4_);
lean_dec(v_x_4_);
return v_res_5_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(lean_object* v_t_6_, lean_object* v_k_7_){
_start:
{
if (lean_obj_tag(v_t_6_) == 0)
{
lean_object* v_prf_8_; lean_object* v___x_9_; 
v_prf_8_ = lean_ctor_get(v_t_6_, 0);
lean_inc_ref(v_prf_8_);
lean_dec_ref_known(v_t_6_, 1);
v___x_9_ = lean_apply_1(v_k_7_, v_prf_8_);
return v___x_9_;
}
else
{
return v_k_7_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim(lean_object* v_motive_10_, lean_object* v_ctorIdx_11_, lean_object* v_t_12_, lean_object* v_h_13_, lean_object* v_k_14_){
_start:
{
lean_object* v___x_15_; 
v___x_15_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_12_, v_k_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v_res_21_; 
v_res_21_ = l_Lean_Meta_NativeEqTrueResult_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_18_, v_h_19_, v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim___redArg(lean_object* v_t_22_, lean_object* v_success_23_){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_22_, v_success_23_);
return v___x_24_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_success_elim(lean_object* v_motive_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_success_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_26_, v_success_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim___redArg(lean_object* v_t_30_, lean_object* v_notTrue_31_){
_start:
{
lean_object* v___x_32_; 
v___x_32_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_30_, v_notTrue_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_NativeEqTrueResult_notTrue_elim(lean_object* v_motive_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_notTrue_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_Meta_NativeEqTrueResult_ctorElim___redArg(v_t_34_, v_notTrue_36_);
return v___x_37_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11(void){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__10));
v___x_62_ = l_StateRefT_x27_instMonad___redArg(v___x_61_);
return v___x_62_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16(void){
_start:
{
lean_object* v___x_67_; lean_object* v___f_68_; 
v___x_67_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_68_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_68_, 0, v___x_67_);
return v___f_68_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17(void){
_start:
{
lean_object* v___x_69_; lean_object* v___f_70_; 
v___x_69_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___f_70_ = lean_alloc_closure((void*)(l_StateRefT_x27_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_70_, 0, v___x_69_);
return v___f_70_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18(void){
_start:
{
lean_object* v___f_71_; lean_object* v___f_72_; lean_object* v___x_73_; 
v___f_71_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__17);
v___f_72_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__16);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v___f_72_);
lean_ctor_set(v___x_73_, 1, v___f_71_);
return v___x_73_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19(void){
_start:
{
lean_object* v___x_74_; lean_object* v___f_75_; 
v___x_74_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18);
v___f_75_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_75_, 0, v___x_74_);
return v___f_75_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__20(void){
_start:
{
lean_object* v___x_76_; lean_object* v___f_77_; 
v___x_76_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__18);
v___f_77_ = lean_alloc_closure((void*)(l_ReaderT_instMonadExceptOf___redArg___lam__2___boxed), 5, 1);
lean_closure_set(v___f_77_, 0, v___x_76_);
return v___f_77_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__21(void){
_start:
{
lean_object* v___f_78_; lean_object* v___f_79_; lean_object* v___x_80_; 
v___f_78_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__20, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__20_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__20);
v___f_79_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__19);
v___x_80_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_80_, 0, v___f_79_);
lean_ctor_set(v___x_80_, 1, v___f_78_);
return v___x_80_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__26(void){
_start:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___f_87_; lean_object* v___x_88_; 
v___x_85_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_86_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__25));
v___f_87_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__24));
v___x_88_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_87_, v___x_86_, v___x_85_);
return v___x_88_;
}
}
static lean_object* _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__27(void){
_start:
{
lean_object* v___x_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___x_92_; 
v___x_89_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__26, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__26_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__26);
v___f_90_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__23));
v___f_91_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__22));
v___x_92_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_91_, v___f_90_, v___x_89_);
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(lean_object* v_auxDeclName_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___x_104_; lean_object* v_toApplicative_105_; lean_object* v_toFunctor_106_; lean_object* v_toSeq_107_; lean_object* v_toSeqLeft_108_; lean_object* v_toSeqRight_109_; lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_toApplicative_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_159_; 
v___x_104_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__11);
v_toApplicative_105_ = lean_ctor_get(v___x_104_, 0);
v_toFunctor_106_ = lean_ctor_get(v_toApplicative_105_, 0);
v_toSeq_107_ = lean_ctor_get(v_toApplicative_105_, 2);
v_toSeqLeft_108_ = lean_ctor_get(v_toApplicative_105_, 3);
v_toSeqRight_109_ = lean_ctor_get(v_toApplicative_105_, 4);
v___f_110_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__12));
v___f_111_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__13));
lean_inc_ref_n(v_toFunctor_106_, 2);
v___f_112_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_112_, 0, v_toFunctor_106_);
v___f_113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_113_, 0, v_toFunctor_106_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___f_112_);
lean_ctor_set(v___x_114_, 1, v___f_113_);
lean_inc(v_toSeqRight_109_);
v___f_115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_115_, 0, v_toSeqRight_109_);
lean_inc(v_toSeqLeft_108_);
v___f_116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_116_, 0, v_toSeqLeft_108_);
lean_inc(v_toSeq_107_);
v___f_117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_117_, 0, v_toSeq_107_);
v___x_118_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_118_, 0, v___x_114_);
lean_ctor_set(v___x_118_, 1, v___f_110_);
lean_ctor_set(v___x_118_, 2, v___f_117_);
lean_ctor_set(v___x_118_, 3, v___f_116_);
lean_ctor_set(v___x_118_, 4, v___f_115_);
v___x_119_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_119_, 0, v___x_118_);
lean_ctor_set(v___x_119_, 1, v___f_111_);
v___x_120_ = l_StateRefT_x27_instMonad___redArg(v___x_119_);
v_toApplicative_121_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_159_ == 0)
{
lean_object* v_unused_160_; 
v_unused_160_ = lean_ctor_get(v___x_120_, 1);
lean_dec(v_unused_160_);
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_159_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_toApplicative_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_159_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v_toFunctor_125_; lean_object* v_toSeq_126_; lean_object* v_toSeqLeft_127_; lean_object* v_toSeqRight_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_157_; 
v_toFunctor_125_ = lean_ctor_get(v_toApplicative_121_, 0);
v_toSeq_126_ = lean_ctor_get(v_toApplicative_121_, 2);
v_toSeqLeft_127_ = lean_ctor_get(v_toApplicative_121_, 3);
v_toSeqRight_128_ = lean_ctor_get(v_toApplicative_121_, 4);
v_isSharedCheck_157_ = !lean_is_exclusive(v_toApplicative_121_);
if (v_isSharedCheck_157_ == 0)
{
lean_object* v_unused_158_; 
v_unused_158_ = lean_ctor_get(v_toApplicative_121_, 1);
lean_dec(v_unused_158_);
v___x_130_ = v_toApplicative_121_;
v_isShared_131_ = v_isSharedCheck_157_;
goto v_resetjp_129_;
}
else
{
lean_inc(v_toSeqRight_128_);
lean_inc(v_toSeqLeft_127_);
lean_inc(v_toSeq_126_);
lean_inc(v_toFunctor_125_);
lean_dec(v_toApplicative_121_);
v___x_130_ = lean_box(0);
v_isShared_131_ = v_isSharedCheck_157_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___f_132_; lean_object* v___f_133_; lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___x_136_; lean_object* v___f_137_; lean_object* v___f_138_; lean_object* v___f_139_; lean_object* v___x_141_; 
v___f_132_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__14));
v___f_133_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__15));
lean_inc_ref(v_toFunctor_125_);
v___f_134_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_134_, 0, v_toFunctor_125_);
v___f_135_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_135_, 0, v_toFunctor_125_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___f_134_);
lean_ctor_set(v___x_136_, 1, v___f_135_);
v___f_137_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_137_, 0, v_toSeqRight_128_);
v___f_138_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_138_, 0, v_toSeqLeft_127_);
v___f_139_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_139_, 0, v_toSeq_126_);
if (v_isShared_131_ == 0)
{
lean_ctor_set(v___x_130_, 4, v___f_137_);
lean_ctor_set(v___x_130_, 3, v___f_138_);
lean_ctor_set(v___x_130_, 2, v___f_139_);
lean_ctor_set(v___x_130_, 1, v___f_132_);
lean_ctor_set(v___x_130_, 0, v___x_136_);
v___x_141_ = v___x_130_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_156_; 
v_reuseFailAlloc_156_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_156_, 0, v___x_136_);
lean_ctor_set(v_reuseFailAlloc_156_, 1, v___f_132_);
lean_ctor_set(v_reuseFailAlloc_156_, 2, v___f_139_);
lean_ctor_set(v_reuseFailAlloc_156_, 3, v___f_138_);
lean_ctor_set(v_reuseFailAlloc_156_, 4, v___f_137_);
v___x_141_ = v_reuseFailAlloc_156_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_143_; 
if (v_isShared_124_ == 0)
{
lean_ctor_set(v___x_123_, 1, v___f_133_);
lean_ctor_set(v___x_123_, 0, v___x_141_);
v___x_143_ = v___x_123_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_155_; 
v_reuseFailAlloc_155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_155_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_155_, 1, v___f_133_);
v___x_143_ = v_reuseFailAlloc_155_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v_toMonadRef_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_151_; uint8_t v___x_152_; lean_object* v___x_79__overap_153_; lean_object* v___x_154_; 
v___x_144_ = l_Lean_Meta_instMonadEnvMetaM;
v___x_145_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__21, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__21_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__21);
v___x_146_ = lean_obj_once(&l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__27, &l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__27_once, _init_l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__27);
v_toMonadRef_147_ = lean_ctor_get(v___x_146_, 0);
v___x_148_ = l_Lean_Meta_instAddMessageContextMetaM;
lean_inc_ref(v___x_143_);
v___x_149_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_148_, v___x_143_);
lean_inc_ref(v_toMonadRef_147_);
v___x_150_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_150_, 0, v___x_145_);
lean_ctor_set(v___x_150_, 1, v_toMonadRef_147_);
lean_ctor_set(v___x_150_, 2, v___x_149_);
v___x_151_ = ((lean_object*)(l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___closed__30));
v___x_152_ = 1;
v___x_79__overap_153_ = l_Lean_evalConst___redArg(v___x_143_, v___x_144_, v___x_150_, v___x_151_, v_auxDeclName_98_, v___x_152_);
lean_inc(v___y_102_);
lean_inc_ref(v___y_101_);
lean_inc(v___y_100_);
lean_inc_ref(v___y_99_);
v___x_154_ = lean_apply_5(v___x_79__overap_153_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, lean_box(0));
return v___x_154_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1___boxed(lean_object* v_auxDeclName_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_){
_start:
{
lean_object* v_res_167_; 
v_res_167_ = l___private_Lean_Meta_Native_0__Lean_Meta_nativeEqTrue_unsafe__1(v_auxDeclName_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
lean_dec(v___y_165_);
lean_dec_ref(v___y_164_);
lean_dec(v___y_163_);
lean_dec_ref(v___y_162_);
return v_res_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(lean_object* v_e_168_, lean_object* v___y_169_){
_start:
{
uint8_t v___x_171_; 
v___x_171_ = l_Lean_Expr_hasMVar(v_e_168_);
if (v___x_171_ == 0)
{
lean_object* v___x_172_; 
v___x_172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_172_, 0, v_e_168_);
return v___x_172_;
}
else
{
lean_object* v___x_173_; lean_object* v_mctx_174_; lean_object* v___x_175_; lean_object* v_fst_176_; lean_object* v_snd_177_; lean_object* v___x_178_; lean_object* v_cache_179_; lean_object* v_zetaDeltaFVarIds_180_; lean_object* v_postponed_181_; lean_object* v_diag_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_191_; 
v___x_173_ = lean_st_ref_get(v___y_169_);
v_mctx_174_ = lean_ctor_get(v___x_173_, 0);
lean_inc_ref(v_mctx_174_);
lean_dec(v___x_173_);
v___x_175_ = l_Lean_instantiateMVarsCore(v_mctx_174_, v_e_168_);
v_fst_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_fst_176_);
v_snd_177_ = lean_ctor_get(v___x_175_, 1);
lean_inc(v_snd_177_);
lean_dec_ref(v___x_175_);
v___x_178_ = lean_st_ref_take(v___y_169_);
v_cache_179_ = lean_ctor_get(v___x_178_, 1);
v_zetaDeltaFVarIds_180_ = lean_ctor_get(v___x_178_, 2);
v_postponed_181_ = lean_ctor_get(v___x_178_, 3);
v_diag_182_ = lean_ctor_get(v___x_178_, 4);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_191_ == 0)
{
lean_object* v_unused_192_; 
v_unused_192_ = lean_ctor_get(v___x_178_, 0);
lean_dec(v_unused_192_);
v___x_184_ = v___x_178_;
v_isShared_185_ = v_isSharedCheck_191_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_diag_182_);
lean_inc(v_postponed_181_);
lean_inc(v_zetaDeltaFVarIds_180_);
lean_inc(v_cache_179_);
lean_dec(v___x_178_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_191_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set(v___x_184_, 0, v_snd_177_);
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_snd_177_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_cache_179_);
lean_ctor_set(v_reuseFailAlloc_190_, 2, v_zetaDeltaFVarIds_180_);
lean_ctor_set(v_reuseFailAlloc_190_, 3, v_postponed_181_);
lean_ctor_set(v_reuseFailAlloc_190_, 4, v_diag_182_);
v___x_187_ = v_reuseFailAlloc_190_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = lean_st_ref_put(v___y_169_, v___x_187_);
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v_fst_176_);
return v___x_189_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg___boxed(lean_object* v_e_193_, lean_object* v___y_194_, lean_object* v___y_195_){
_start:
{
lean_object* v_res_196_; 
v_res_196_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_193_, v___y_194_);
lean_dec(v___y_194_);
return v_res_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(lean_object* v_e_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_197_, v___y_199_);
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___boxed(lean_object* v_e_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_){
_start:
{
lean_object* v_res_210_; 
v_res_210_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0(v_e_204_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
lean_dec(v___y_208_);
lean_dec_ref(v___y_207_);
lean_dec(v___y_206_);
lean_dec_ref(v___y_205_);
return v_res_210_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(lean_object* v_kind_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; lean_object* v_auxDeclNGen_215_; lean_object* v___x_216_; lean_object* v_env_217_; lean_object* v___x_218_; lean_object* v_fst_219_; lean_object* v_snd_220_; lean_object* v___x_221_; lean_object* v_env_222_; lean_object* v_nextMacroScope_223_; lean_object* v_ngen_224_; lean_object* v_traceState_225_; lean_object* v_cache_226_; lean_object* v_messages_227_; lean_object* v_infoState_228_; lean_object* v_snapshotTasks_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_238_; 
v___x_214_ = lean_st_ref_get(v___y_212_);
v_auxDeclNGen_215_ = lean_ctor_get(v___x_214_, 3);
lean_inc_ref(v_auxDeclNGen_215_);
lean_dec(v___x_214_);
v___x_216_ = lean_st_ref_get(v___y_212_);
v_env_217_ = lean_ctor_get(v___x_216_, 0);
lean_inc_ref(v_env_217_);
lean_dec(v___x_216_);
v___x_218_ = l_Lean_DeclNameGenerator_mkUniqueName(v_env_217_, v_auxDeclNGen_215_, v_kind_211_);
v_fst_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_fst_219_);
v_snd_220_ = lean_ctor_get(v___x_218_, 1);
lean_inc(v_snd_220_);
lean_dec_ref(v___x_218_);
v___x_221_ = lean_st_ref_take(v___y_212_);
v_env_222_ = lean_ctor_get(v___x_221_, 0);
v_nextMacroScope_223_ = lean_ctor_get(v___x_221_, 1);
v_ngen_224_ = lean_ctor_get(v___x_221_, 2);
v_traceState_225_ = lean_ctor_get(v___x_221_, 4);
v_cache_226_ = lean_ctor_get(v___x_221_, 5);
v_messages_227_ = lean_ctor_get(v___x_221_, 6);
v_infoState_228_ = lean_ctor_get(v___x_221_, 7);
v_snapshotTasks_229_ = lean_ctor_get(v___x_221_, 8);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_221_);
if (v_isSharedCheck_238_ == 0)
{
lean_object* v_unused_239_; 
v_unused_239_ = lean_ctor_get(v___x_221_, 3);
lean_dec(v_unused_239_);
v___x_231_ = v___x_221_;
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_snapshotTasks_229_);
lean_inc(v_infoState_228_);
lean_inc(v_messages_227_);
lean_inc(v_cache_226_);
lean_inc(v_traceState_225_);
lean_inc(v_ngen_224_);
lean_inc(v_nextMacroScope_223_);
lean_inc(v_env_222_);
lean_dec(v___x_221_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_238_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 3, v_snd_220_);
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_env_222_);
lean_ctor_set(v_reuseFailAlloc_237_, 1, v_nextMacroScope_223_);
lean_ctor_set(v_reuseFailAlloc_237_, 2, v_ngen_224_);
lean_ctor_set(v_reuseFailAlloc_237_, 3, v_snd_220_);
lean_ctor_set(v_reuseFailAlloc_237_, 4, v_traceState_225_);
lean_ctor_set(v_reuseFailAlloc_237_, 5, v_cache_226_);
lean_ctor_set(v_reuseFailAlloc_237_, 6, v_messages_227_);
lean_ctor_set(v_reuseFailAlloc_237_, 7, v_infoState_228_);
lean_ctor_set(v_reuseFailAlloc_237_, 8, v_snapshotTasks_229_);
v___x_234_ = v_reuseFailAlloc_237_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_st_ref_put(v___y_212_, v___x_234_);
v___x_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_236_, 0, v_fst_219_);
return v___x_236_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg___boxed(lean_object* v_kind_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v_kind_240_, v___y_241_);
lean_dec(v___y_241_);
return v_res_243_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(lean_object* v_kind_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v_kind_244_, v___y_248_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___boxed(lean_object* v_kind_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_){
_start:
{
lean_object* v_res_257_; 
v_res_257_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1(v_kind_251_, v___y_252_, v___y_253_, v___y_254_, v___y_255_);
lean_dec(v___y_255_);
lean_dec_ref(v___y_254_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
return v_res_257_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(lean_object* v_opts_258_, lean_object* v_opt_259_){
_start:
{
lean_object* v_name_260_; lean_object* v_defValue_261_; lean_object* v_map_262_; lean_object* v___x_263_; 
v_name_260_ = lean_ctor_get(v_opt_259_, 0);
v_defValue_261_ = lean_ctor_get(v_opt_259_, 1);
v_map_262_ = lean_ctor_get(v_opts_258_, 0);
v___x_263_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_262_, v_name_260_);
if (lean_obj_tag(v___x_263_) == 0)
{
uint8_t v___x_264_; 
v___x_264_ = lean_unbox(v_defValue_261_);
return v___x_264_;
}
else
{
lean_object* v_val_265_; 
v_val_265_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_val_265_);
lean_dec_ref_known(v___x_263_, 1);
if (lean_obj_tag(v_val_265_) == 1)
{
uint8_t v_v_266_; 
v_v_266_ = lean_ctor_get_uint8(v_val_265_, 0);
lean_dec_ref_known(v_val_265_, 0);
return v_v_266_;
}
else
{
uint8_t v___x_267_; 
lean_dec(v_val_265_);
v___x_267_ = lean_unbox(v_defValue_261_);
return v___x_267_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5___boxed(lean_object* v_opts_268_, lean_object* v_opt_269_){
_start:
{
uint8_t v_res_270_; lean_object* v_r_271_; 
v_res_270_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v_opts_268_, v_opt_269_);
lean_dec_ref(v_opt_269_);
lean_dec_ref(v_opts_268_);
v_r_271_ = lean_box(v_res_270_);
return v_r_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6(lean_object* v_opts_272_, lean_object* v_opt_273_){
_start:
{
lean_object* v_name_274_; lean_object* v_defValue_275_; lean_object* v_map_276_; lean_object* v___x_277_; 
v_name_274_ = lean_ctor_get(v_opt_273_, 0);
v_defValue_275_ = lean_ctor_get(v_opt_273_, 1);
v_map_276_ = lean_ctor_get(v_opts_272_, 0);
v___x_277_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_276_, v_name_274_);
if (lean_obj_tag(v___x_277_) == 0)
{
lean_inc(v_defValue_275_);
return v_defValue_275_;
}
else
{
lean_object* v_val_278_; 
v_val_278_ = lean_ctor_get(v___x_277_, 0);
lean_inc(v_val_278_);
lean_dec_ref_known(v___x_277_, 1);
if (lean_obj_tag(v_val_278_) == 3)
{
lean_object* v_v_279_; 
v_v_279_ = lean_ctor_get(v_val_278_, 0);
lean_inc(v_v_279_);
lean_dec_ref_known(v_val_278_, 1);
return v_v_279_;
}
else
{
lean_dec(v_val_278_);
lean_inc(v_defValue_275_);
return v_defValue_275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6___boxed(lean_object* v_opts_280_, lean_object* v_opt_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6(v_opts_280_, v_opt_281_);
lean_dec_ref(v_opt_281_);
lean_dec_ref(v_opts_280_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(lean_object* v_msgData_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_){
_start:
{
lean_object* v___x_289_; lean_object* v_env_290_; lean_object* v___x_291_; lean_object* v_toCold_292_; lean_object* v_mctx_293_; lean_object* v_lctx_294_; lean_object* v_options_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_289_ = lean_st_ref_get(v___y_287_);
v_env_290_ = lean_ctor_get(v___x_289_, 0);
lean_inc_ref(v_env_290_);
lean_dec(v___x_289_);
v___x_291_ = lean_st_ref_get(v___y_285_);
v_toCold_292_ = lean_ctor_get(v___y_286_, 0);
v_mctx_293_ = lean_ctor_get(v___x_291_, 0);
lean_inc_ref(v_mctx_293_);
lean_dec(v___x_291_);
v_lctx_294_ = lean_ctor_get(v___y_284_, 2);
v_options_295_ = lean_ctor_get(v_toCold_292_, 2);
lean_inc_ref(v_options_295_);
lean_inc_ref(v_lctx_294_);
v___x_296_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_296_, 0, v_env_290_);
lean_ctor_set(v___x_296_, 1, v_mctx_293_);
lean_ctor_set(v___x_296_, 2, v_lctx_294_);
lean_ctor_set(v___x_296_, 3, v_options_295_);
v___x_297_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v_msgData_283_);
v___x_298_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_298_, 0, v___x_297_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5___boxed(lean_object* v_msgData_299_, lean_object* v___y_300_, lean_object* v___y_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(v_msgData_299_, v___y_300_, v___y_301_, v___y_302_, v___y_303_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec(v___y_301_);
lean_dec_ref(v___y_300_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(lean_object* v_msg_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_, lean_object* v___y_310_){
_start:
{
lean_object* v_ref_312_; lean_object* v___x_313_; lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_322_; 
v_ref_312_ = lean_ctor_get(v___y_309_, 2);
v___x_313_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3_spec__5(v_msg_306_, v___y_307_, v___y_308_, v___y_309_, v___y_310_);
v_a_314_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_322_ == 0)
{
v___x_316_ = v___x_313_;
v_isShared_317_ = v_isSharedCheck_322_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_313_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_322_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; lean_object* v___x_320_; 
lean_inc(v_ref_312_);
v___x_318_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_318_, 0, v_ref_312_);
lean_ctor_set(v___x_318_, 1, v_a_314_);
if (v_isShared_317_ == 0)
{
lean_ctor_set_tag(v___x_316_, 1);
lean_ctor_set(v___x_316_, 0, v___x_318_);
v___x_320_ = v___x_316_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_318_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg___boxed(lean_object* v_msg_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v_msg_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7(lean_object* v_o_333_, lean_object* v_k_334_, uint8_t v_v_335_){
_start:
{
lean_object* v_map_336_; uint8_t v_hasTrace_337_; lean_object* v___x_339_; uint8_t v_isShared_340_; uint8_t v_isSharedCheck_351_; 
v_map_336_ = lean_ctor_get(v_o_333_, 0);
v_hasTrace_337_ = lean_ctor_get_uint8(v_o_333_, sizeof(void*)*1);
v_isSharedCheck_351_ = !lean_is_exclusive(v_o_333_);
if (v_isSharedCheck_351_ == 0)
{
v___x_339_ = v_o_333_;
v_isShared_340_ = v_isSharedCheck_351_;
goto v_resetjp_338_;
}
else
{
lean_inc(v_map_336_);
lean_dec(v_o_333_);
v___x_339_ = lean_box(0);
v_isShared_340_ = v_isSharedCheck_351_;
goto v_resetjp_338_;
}
v_resetjp_338_:
{
lean_object* v___x_341_; lean_object* v___x_342_; 
v___x_341_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_341_, 0, v_v_335_);
lean_inc(v_k_334_);
v___x_342_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_k_334_, v___x_341_, v_map_336_);
if (v_hasTrace_337_ == 0)
{
lean_object* v___x_343_; uint8_t v___x_344_; lean_object* v___x_346_; 
v___x_343_ = ((lean_object*)(l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___closed__1));
v___x_344_ = l_Lean_Name_isPrefixOf(v___x_343_, v_k_334_);
lean_dec(v_k_334_);
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 0, v___x_342_);
v___x_346_ = v___x_339_;
goto v_reusejp_345_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_342_);
v___x_346_ = v_reuseFailAlloc_347_;
goto v_reusejp_345_;
}
v_reusejp_345_:
{
lean_ctor_set_uint8(v___x_346_, sizeof(void*)*1, v___x_344_);
return v___x_346_;
}
}
else
{
lean_object* v___x_349_; 
lean_dec(v_k_334_);
if (v_isShared_340_ == 0)
{
lean_ctor_set(v___x_339_, 0, v___x_342_);
v___x_349_ = v___x_339_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_342_);
lean_ctor_set_uint8(v_reuseFailAlloc_350_, sizeof(void*)*1, v_hasTrace_337_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
return v___x_349_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7___boxed(lean_object* v_o_352_, lean_object* v_k_353_, lean_object* v_v_354_){
_start:
{
uint8_t v_v_boxed_355_; lean_object* v_res_356_; 
v_v_boxed_355_ = lean_unbox(v_v_354_);
v_res_356_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7(v_o_352_, v_k_353_, v_v_boxed_355_);
return v_res_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4(lean_object* v_opts_357_, lean_object* v_opt_358_, uint8_t v_val_359_){
_start:
{
lean_object* v_name_360_; lean_object* v___x_361_; 
v_name_360_ = lean_ctor_get(v_opt_358_, 0);
lean_inc(v_name_360_);
lean_dec_ref(v_opt_358_);
v___x_361_ = l_Lean_Options_set___at___00Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4_spec__7(v_opts_357_, v_name_360_, v_val_359_);
return v___x_361_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4___boxed(lean_object* v_opts_362_, lean_object* v_opt_363_, lean_object* v_val_364_){
_start:
{
uint8_t v_val_boxed_365_; lean_object* v_res_366_; 
v_val_boxed_365_ = lean_unbox(v_val_364_);
v_res_366_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4(v_opts_362_, v_opt_363_, v_val_boxed_365_);
return v_res_366_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; 
v___x_367_ = lean_box(0);
v___x_368_ = l_Lean_Elab_abortCommandExceptionId;
v___x_369_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_369_, 0, v___x_368_);
lean_ctor_set(v___x_369_, 1, v___x_367_);
return v___x_369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___closed__0);
v___x_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg___boxed(lean_object* v___y_373_){
_start:
{
lean_object* v_res_374_; 
v_res_374_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
return v_res_374_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(lean_object* v_x_375_, lean_object* v___y_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_){
_start:
{
if (lean_obj_tag(v_x_375_) == 0)
{
lean_object* v_a_381_; lean_object* v___x_382_; lean_object* v___x_383_; 
v_a_381_ = lean_ctor_get(v_x_375_, 0);
lean_inc(v_a_381_);
lean_dec_ref_known(v_x_375_, 1);
v___x_382_ = l_Lean_stringToMessageData(v_a_381_);
v___x_383_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_382_, v___y_376_, v___y_377_, v___y_378_, v___y_379_);
return v___x_383_;
}
else
{
lean_object* v_a_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_391_; 
v_a_384_ = lean_ctor_get(v_x_375_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v_x_375_);
if (v_isSharedCheck_391_ == 0)
{
v___x_386_ = v_x_375_;
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_a_384_);
lean_dec(v_x_375_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_391_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
lean_object* v___x_389_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set_tag(v___x_386_, 0);
v___x_389_ = v___x_386_;
goto v_reusejp_388_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_a_384_);
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
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg___boxed(lean_object* v_x_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v_res_398_; 
v_res_398_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v_x_392_, v___y_393_, v___y_394_, v___y_395_, v___y_396_);
lean_dec(v___y_396_);
lean_dec_ref(v___y_395_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(lean_object* v_constName_399_, uint8_t v_checkMeta_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
lean_object* v___x_406_; lean_object* v_env_407_; uint8_t v___x_408_; 
v___x_406_ = lean_st_ref_get(v___y_404_);
v_env_407_ = lean_ctor_get(v___x_406_, 0);
lean_inc_ref(v_env_407_);
lean_dec(v___x_406_);
lean_inc(v_constName_399_);
v___x_408_ = lean_has_compile_error(v_env_407_, v_constName_399_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v_toCold_410_; lean_object* v_env_411_; lean_object* v_options_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_409_ = lean_st_ref_get(v___y_404_);
v_toCold_410_ = lean_ctor_get(v___y_403_, 0);
v_env_411_ = lean_ctor_get(v___x_409_, 0);
lean_inc_ref(v_env_411_);
lean_dec(v___x_409_);
v_options_412_ = lean_ctor_get(v_toCold_410_, 2);
v___x_413_ = l_Lean_Environment_evalConst___redArg(v_env_411_, v_options_412_, v_constName_399_, v_checkMeta_400_);
lean_dec(v_constName_399_);
lean_dec_ref(v_env_411_);
v___x_414_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v___x_413_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
return v___x_414_;
}
else
{
lean_object* v___x_415_; 
v___x_415_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
if (lean_obj_tag(v___x_415_) == 0)
{
lean_object* v___x_416_; lean_object* v_toCold_417_; lean_object* v_env_418_; lean_object* v_options_419_; lean_object* v___x_420_; lean_object* v___x_421_; 
lean_dec_ref_known(v___x_415_, 1);
v___x_416_ = lean_st_ref_get(v___y_404_);
v_toCold_417_ = lean_ctor_get(v___y_403_, 0);
v_env_418_ = lean_ctor_get(v___x_416_, 0);
lean_inc_ref(v_env_418_);
lean_dec(v___x_416_);
v_options_419_ = lean_ctor_get(v_toCold_417_, 2);
v___x_420_ = l_Lean_Environment_evalConst___redArg(v_env_418_, v_options_419_, v_constName_399_, v_checkMeta_400_);
lean_dec(v_constName_399_);
lean_dec_ref(v_env_418_);
v___x_421_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v___x_420_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
return v___x_421_;
}
else
{
lean_object* v_a_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_429_; 
lean_dec(v_constName_399_);
v_a_422_ = lean_ctor_get(v___x_415_, 0);
v_isSharedCheck_429_ = !lean_is_exclusive(v___x_415_);
if (v_isSharedCheck_429_ == 0)
{
v___x_424_ = v___x_415_;
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_a_422_);
lean_dec(v___x_415_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_429_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
lean_object* v___x_427_; 
if (v_isShared_425_ == 0)
{
v___x_427_ = v___x_424_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_422_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg___boxed(lean_object* v_constName_430_, lean_object* v_checkMeta_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_, lean_object* v___y_435_, lean_object* v___y_436_){
_start:
{
uint8_t v_checkMeta_boxed_437_; lean_object* v_res_438_; 
v_checkMeta_boxed_437_ = lean_unbox(v_checkMeta_431_);
v_res_438_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(v_constName_430_, v_checkMeta_boxed_437_, v___y_432_, v___y_433_, v___y_434_, v___y_435_);
lean_dec(v___y_435_);
lean_dec_ref(v___y_434_);
lean_dec(v___y_433_);
lean_dec_ref(v___y_432_);
return v_res_438_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1(void){
_start:
{
lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_440_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__0));
v___x_441_ = l_Lean_stringToMessageData(v___x_440_);
return v___x_441_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__3(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__2));
v___x_444_ = l_Lean_stringToMessageData(v___x_443_);
return v___x_444_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__5(void){
_start:
{
lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_446_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__4));
v___x_447_ = l_Lean_stringToMessageData(v___x_446_);
return v___x_447_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_box(0);
v___x_452_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__7));
v___x_453_ = l_Lean_mkConst(v___x_452_, v___x_451_);
return v___x_453_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9(void){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_454_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10(void){
_start:
{
lean_object* v___x_455_; lean_object* v___x_456_; 
v___x_455_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__9, &l_Lean_Meta_nativeEqTrue___lam__0___closed__9_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__9);
v___x_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_456_, 0, v___x_455_);
return v___x_456_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_457_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__10, &l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___x_457_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
return v___x_458_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__10, &l_Lean_Meta_nativeEqTrue___lam__0___closed__10_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__10);
v___x_460_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set(v___x_460_, 1, v___x_459_);
lean_ctor_set(v___x_460_, 2, v___x_459_);
lean_ctor_set(v___x_460_, 3, v___x_459_);
lean_ctor_set(v___x_460_, 4, v___x_459_);
lean_ctor_set(v___x_460_, 5, v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0(lean_object* v_tacticName_461_, lean_object* v___x_462_, lean_object* v___x_463_, lean_object* v___x_464_, lean_object* v_a_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_, lean_object* v___y_469_){
_start:
{
lean_object* v___y_472_; lean_object* v___y_473_; uint8_t v___y_474_; lean_object* v___x_483_; lean_object* v_a_484_; lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_780_; 
v___x_483_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v___x_462_, v___y_469_);
v_a_484_ = lean_ctor_get(v___x_483_, 0);
v_isSharedCheck_780_ = !lean_is_exclusive(v___x_483_);
if (v_isSharedCheck_780_ == 0)
{
v___x_486_ = v___x_483_;
v_isShared_487_ = v_isSharedCheck_780_;
goto v_resetjp_485_;
}
else
{
lean_inc(v_a_484_);
lean_dec(v___x_483_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_780_;
goto v_resetjp_485_;
}
v___jp_471_:
{
if (v___y_474_ == 0)
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; 
lean_dec_ref(v___y_473_);
v___x_475_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_476_ = l_Lean_MessageData_ofName(v_tacticName_461_);
v___x_477_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_475_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
v___x_478_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__3, &l_Lean_Meta_nativeEqTrue___lam__0___closed__3_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__3);
v___x_479_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
v___x_480_ = l_Lean_Exception_toMessageData(v___y_472_);
v___x_481_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_481_, 0, v___x_479_);
lean_ctor_set(v___x_481_, 1, v___x_480_);
v___x_482_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_481_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
lean_dec_ref(v___y_468_);
return v___x_482_;
}
else
{
lean_dec_ref(v___y_472_);
lean_dec_ref(v___y_468_);
lean_dec(v_tacticName_461_);
return v___y_473_;
}
}
v_resetjp_485_:
{
lean_object* v___y_489_; lean_object* v___y_504_; lean_object* v___y_505_; uint8_t v___y_506_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; uint8_t v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_522_; 
v___x_515_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__8, &l_Lean_Meta_nativeEqTrue___lam__0___closed__8_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__8);
lean_inc_n(v_a_484_, 2);
v___x_516_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_516_, 0, v_a_484_);
lean_ctor_set(v___x_516_, 1, v___x_463_);
lean_ctor_set(v___x_516_, 2, v___x_515_);
v___x_517_ = lean_box(1);
v___x_518_ = 1;
v___x_519_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_519_, 0, v_a_484_);
lean_ctor_set(v___x_519_, 1, v___x_464_);
v___x_520_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_520_, 0, v___x_516_);
lean_ctor_set(v___x_520_, 1, v_a_465_);
lean_ctor_set(v___x_520_, 2, v___x_517_);
lean_ctor_set(v___x_520_, 3, v___x_519_);
lean_ctor_set_uint8(v___x_520_, sizeof(void*)*4, v___x_518_);
if (v_isShared_487_ == 0)
{
lean_ctor_set_tag(v___x_486_, 1);
lean_ctor_set(v___x_486_, 0, v___x_520_);
v___x_522_ = v___x_486_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_779_; 
v_reuseFailAlloc_779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_779_, 0, v___x_520_);
v___x_522_ = v_reuseFailAlloc_779_;
goto v_reusejp_521_;
}
v___jp_488_:
{
if (lean_obj_tag(v___y_489_) == 0)
{
uint8_t v___x_490_; lean_object* v___x_491_; 
lean_dec_ref_known(v___y_489_, 1);
v___x_490_ = 1;
v___x_491_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(v_a_484_, v___x_490_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_dec_ref(v___y_468_);
lean_dec(v_tacticName_461_);
return v___x_491_;
}
else
{
lean_object* v_a_492_; uint8_t v___x_493_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
lean_inc(v_a_492_);
v___x_493_ = l_Lean_Exception_isInterrupt(v_a_492_);
if (v___x_493_ == 0)
{
uint8_t v___x_494_; 
lean_inc(v_a_492_);
v___x_494_ = l_Lean_Exception_isRuntime(v_a_492_);
v___y_472_ = v_a_492_;
v___y_473_ = v___x_491_;
v___y_474_ = v___x_494_;
goto v___jp_471_;
}
else
{
v___y_472_ = v_a_492_;
v___y_473_ = v___x_491_;
v___y_474_ = v___x_493_;
goto v___jp_471_;
}
}
}
else
{
lean_object* v_a_495_; lean_object* v___x_497_; uint8_t v_isShared_498_; uint8_t v_isSharedCheck_502_; 
lean_dec(v_a_484_);
lean_dec_ref(v___y_468_);
lean_dec(v_tacticName_461_);
v_a_495_ = lean_ctor_get(v___y_489_, 0);
v_isSharedCheck_502_ = !lean_is_exclusive(v___y_489_);
if (v_isSharedCheck_502_ == 0)
{
v___x_497_ = v___y_489_;
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
else
{
lean_inc(v_a_495_);
lean_dec(v___y_489_);
v___x_497_ = lean_box(0);
v_isShared_498_ = v_isSharedCheck_502_;
goto v_resetjp_496_;
}
v_resetjp_496_:
{
lean_object* v___x_500_; 
if (v_isShared_498_ == 0)
{
v___x_500_ = v___x_497_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v_a_495_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
}
}
v___jp_503_:
{
if (v___y_506_ == 0)
{
lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
lean_dec_ref(v___y_505_);
v___x_507_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
lean_inc(v_tacticName_461_);
v___x_508_ = l_Lean_MessageData_ofName(v_tacticName_461_);
v___x_509_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_509_, 0, v___x_507_);
lean_ctor_set(v___x_509_, 1, v___x_508_);
v___x_510_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__5, &l_Lean_Meta_nativeEqTrue___lam__0___closed__5_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__5);
v___x_511_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set(v___x_511_, 1, v___x_510_);
v___x_512_ = l_Lean_Exception_toMessageData(v___y_504_);
v___x_513_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_513_, 0, v___x_511_);
lean_ctor_set(v___x_513_, 1, v___x_512_);
v___x_514_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_513_, v___y_466_, v___y_467_, v___y_468_, v___y_469_);
v___y_489_ = v___x_514_;
goto v___jp_488_;
}
else
{
lean_dec_ref(v___y_504_);
v___y_489_ = v___y_505_;
goto v___jp_488_;
}
}
v_reusejp_521_:
{
lean_object* v___x_523_; lean_object* v_env_524_; lean_object* v_nextMacroScope_525_; lean_object* v_ngen_526_; lean_object* v_auxDeclNGen_527_; lean_object* v_traceState_528_; lean_object* v_messages_529_; lean_object* v_infoState_530_; lean_object* v_snapshotTasks_531_; lean_object* v___x_533_; uint8_t v_isShared_534_; uint8_t v_isSharedCheck_777_; 
v___x_523_ = lean_st_ref_take(v___y_469_);
v_env_524_ = lean_ctor_get(v___x_523_, 0);
v_nextMacroScope_525_ = lean_ctor_get(v___x_523_, 1);
v_ngen_526_ = lean_ctor_get(v___x_523_, 2);
v_auxDeclNGen_527_ = lean_ctor_get(v___x_523_, 3);
v_traceState_528_ = lean_ctor_get(v___x_523_, 4);
v_messages_529_ = lean_ctor_get(v___x_523_, 6);
v_infoState_530_ = lean_ctor_get(v___x_523_, 7);
v_snapshotTasks_531_ = lean_ctor_get(v___x_523_, 8);
v_isSharedCheck_777_ = !lean_is_exclusive(v___x_523_);
if (v_isSharedCheck_777_ == 0)
{
lean_object* v_unused_778_; 
v_unused_778_ = lean_ctor_get(v___x_523_, 5);
lean_dec(v_unused_778_);
v___x_533_ = v___x_523_;
v_isShared_534_ = v_isSharedCheck_777_;
goto v_resetjp_532_;
}
else
{
lean_inc(v_snapshotTasks_531_);
lean_inc(v_infoState_530_);
lean_inc(v_messages_529_);
lean_inc(v_traceState_528_);
lean_inc(v_auxDeclNGen_527_);
lean_inc(v_ngen_526_);
lean_inc(v_nextMacroScope_525_);
lean_inc(v_env_524_);
lean_dec(v___x_523_);
v___x_533_ = lean_box(0);
v_isShared_534_ = v_isSharedCheck_777_;
goto v_resetjp_532_;
}
v_resetjp_532_:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_538_; 
lean_inc(v_a_484_);
v___x_535_ = l_Lean_markMeta(v_env_524_, v_a_484_);
v___x_536_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__11, &l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11);
if (v_isShared_534_ == 0)
{
lean_ctor_set(v___x_533_, 5, v___x_536_);
lean_ctor_set(v___x_533_, 0, v___x_535_);
v___x_538_ = v___x_533_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_nextMacroScope_525_);
lean_ctor_set(v_reuseFailAlloc_776_, 2, v_ngen_526_);
lean_ctor_set(v_reuseFailAlloc_776_, 3, v_auxDeclNGen_527_);
lean_ctor_set(v_reuseFailAlloc_776_, 4, v_traceState_528_);
lean_ctor_set(v_reuseFailAlloc_776_, 5, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_776_, 6, v_messages_529_);
lean_ctor_set(v_reuseFailAlloc_776_, 7, v_infoState_530_);
lean_ctor_set(v_reuseFailAlloc_776_, 8, v_snapshotTasks_531_);
v___x_538_ = v_reuseFailAlloc_776_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v_mctx_541_; lean_object* v_zetaDeltaFVarIds_542_; lean_object* v_postponed_543_; lean_object* v_diag_544_; lean_object* v___x_546_; uint8_t v_isShared_547_; uint8_t v_isSharedCheck_774_; 
v___x_539_ = lean_st_ref_put(v___y_469_, v___x_538_);
v___x_540_ = lean_st_ref_take(v___y_467_);
v_mctx_541_ = lean_ctor_get(v___x_540_, 0);
v_zetaDeltaFVarIds_542_ = lean_ctor_get(v___x_540_, 2);
v_postponed_543_ = lean_ctor_get(v___x_540_, 3);
v_diag_544_ = lean_ctor_get(v___x_540_, 4);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v___x_540_, 1);
lean_dec(v_unused_775_);
v___x_546_ = v___x_540_;
v_isShared_547_ = v_isSharedCheck_774_;
goto v_resetjp_545_;
}
else
{
lean_inc(v_diag_544_);
lean_inc(v_postponed_543_);
lean_inc(v_zetaDeltaFVarIds_542_);
lean_inc(v_mctx_541_);
lean_dec(v___x_540_);
v___x_546_ = lean_box(0);
v_isShared_547_ = v_isSharedCheck_774_;
goto v_resetjp_545_;
}
v_resetjp_545_:
{
lean_object* v___x_548_; lean_object* v___x_550_; 
v___x_548_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__12, &l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12);
if (v_isShared_547_ == 0)
{
lean_ctor_set(v___x_546_, 1, v___x_548_);
v___x_550_ = v___x_546_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_mctx_541_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v___x_548_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_zetaDeltaFVarIds_542_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v_postponed_543_);
lean_ctor_set(v_reuseFailAlloc_773_, 4, v_diag_544_);
v___x_550_ = v_reuseFailAlloc_773_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
lean_object* v___x_551_; lean_object* v_toCold_552_; lean_object* v_currRecDepth_553_; lean_object* v_ref_554_; uint8_t v_suppressElabErrors_555_; lean_object* v_fileName_556_; lean_object* v_fileMap_557_; lean_object* v_options_558_; lean_object* v_currNamespace_559_; lean_object* v_openDecls_560_; lean_object* v_initHeartbeats_561_; lean_object* v_maxHeartbeats_562_; lean_object* v_quotContext_563_; lean_object* v_currMacroScope_564_; lean_object* v_cancelTk_x3f_565_; lean_object* v_inheritedTraceOptions_566_; lean_object* v___x_568_; uint8_t v_isShared_569_; uint8_t v_isSharedCheck_771_; 
v___x_551_ = lean_st_ref_put(v___y_467_, v___x_550_);
v_toCold_552_ = lean_ctor_get(v___y_468_, 0);
lean_inc_ref(v_toCold_552_);
v_currRecDepth_553_ = lean_ctor_get(v___y_468_, 1);
v_ref_554_ = lean_ctor_get(v___y_468_, 2);
v_suppressElabErrors_555_ = lean_ctor_get_uint8(v___y_468_, sizeof(void*)*3 + 1);
v_fileName_556_ = lean_ctor_get(v_toCold_552_, 0);
v_fileMap_557_ = lean_ctor_get(v_toCold_552_, 1);
v_options_558_ = lean_ctor_get(v_toCold_552_, 2);
v_currNamespace_559_ = lean_ctor_get(v_toCold_552_, 4);
v_openDecls_560_ = lean_ctor_get(v_toCold_552_, 5);
v_initHeartbeats_561_ = lean_ctor_get(v_toCold_552_, 6);
v_maxHeartbeats_562_ = lean_ctor_get(v_toCold_552_, 7);
v_quotContext_563_ = lean_ctor_get(v_toCold_552_, 8);
v_currMacroScope_564_ = lean_ctor_get(v_toCold_552_, 9);
v_cancelTk_x3f_565_ = lean_ctor_get(v_toCold_552_, 10);
v_inheritedTraceOptions_566_ = lean_ctor_get(v_toCold_552_, 11);
v_isSharedCheck_771_ = !lean_is_exclusive(v_toCold_552_);
if (v_isSharedCheck_771_ == 0)
{
lean_object* v_unused_772_; 
v_unused_772_ = lean_ctor_get(v_toCold_552_, 3);
lean_dec(v_unused_772_);
v___x_568_ = v_toCold_552_;
v_isShared_569_ = v_isSharedCheck_771_;
goto v_resetjp_567_;
}
else
{
lean_inc(v_inheritedTraceOptions_566_);
lean_inc(v_cancelTk_x3f_565_);
lean_inc(v_currMacroScope_564_);
lean_inc(v_quotContext_563_);
lean_inc(v_maxHeartbeats_562_);
lean_inc(v_initHeartbeats_561_);
lean_inc(v_openDecls_560_);
lean_inc(v_currNamespace_559_);
lean_inc(v_options_558_);
lean_inc(v_fileMap_557_);
lean_inc(v_fileName_556_);
lean_dec(v_toCold_552_);
v___x_568_ = lean_box(0);
v_isShared_569_ = v_isSharedCheck_771_;
goto v_resetjp_567_;
}
v_resetjp_567_:
{
uint8_t v___x_570_; uint8_t v___x_571_; lean_object* v___y_573_; lean_object* v___y_574_; uint8_t v___y_575_; lean_object* v_fileName_576_; lean_object* v_fileMap_577_; lean_object* v_currNamespace_578_; lean_object* v_openDecls_579_; lean_object* v_initHeartbeats_580_; lean_object* v_maxHeartbeats_581_; lean_object* v_quotContext_582_; lean_object* v_currMacroScope_583_; lean_object* v_cancelTk_x3f_584_; lean_object* v_inheritedTraceOptions_585_; lean_object* v_currRecDepth_586_; lean_object* v_ref_587_; uint8_t v_suppressElabErrors_588_; lean_object* v___y_589_; lean_object* v___y_600_; lean_object* v___y_601_; uint8_t v___y_602_; lean_object* v___y_603_; lean_object* v___y_604_; lean_object* v___y_620_; lean_object* v___y_621_; lean_object* v___y_622_; lean_object* v___y_623_; uint8_t v___y_624_; uint8_t v___y_625_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___y_649_; lean_object* v___y_650_; uint8_t v___y_651_; lean_object* v_fileName_652_; lean_object* v_fileMap_653_; lean_object* v_currNamespace_654_; lean_object* v_openDecls_655_; lean_object* v_initHeartbeats_656_; lean_object* v_maxHeartbeats_657_; lean_object* v_quotContext_658_; lean_object* v_currMacroScope_659_; lean_object* v_cancelTk_x3f_660_; lean_object* v_inheritedTraceOptions_661_; lean_object* v_currRecDepth_662_; lean_object* v_ref_663_; uint8_t v_suppressElabErrors_664_; lean_object* v___y_665_; lean_object* v___y_676_; lean_object* v___y_677_; uint8_t v___y_678_; lean_object* v___y_679_; lean_object* v___y_680_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_698_; uint8_t v___y_699_; lean_object* v___y_700_; uint8_t v___y_701_; uint8_t v___x_721_; lean_object* v_fileName_723_; lean_object* v_fileMap_724_; lean_object* v_currNamespace_725_; lean_object* v_openDecls_726_; lean_object* v_initHeartbeats_727_; lean_object* v_maxHeartbeats_728_; lean_object* v_quotContext_729_; lean_object* v_currMacroScope_730_; lean_object* v_cancelTk_x3f_731_; lean_object* v_inheritedTraceOptions_732_; lean_object* v_currRecDepth_733_; lean_object* v_ref_734_; uint8_t v_suppressElabErrors_735_; lean_object* v___y_736_; lean_object* v___x_747_; uint8_t v___y_749_; lean_object* v_env_769_; uint8_t v___x_770_; 
v___x_570_ = 1;
v___x_571_ = 0;
v___x_645_ = l_Lean_Elab_async;
v___x_646_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4(v_options_558_, v___x_645_, v___x_571_);
v___x_647_ = l_Lean_diagnostics;
v___x_721_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v___x_646_, v___x_647_);
v___x_747_ = lean_st_ref_get(v___y_469_);
v_env_769_ = lean_ctor_get(v___x_747_, 0);
lean_inc_ref(v_env_769_);
lean_dec(v___x_747_);
v___x_770_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_769_);
lean_dec_ref(v_env_769_);
if (v___x_721_ == 0)
{
if (v___x_770_ == 0)
{
lean_inc(v_ref_554_);
lean_inc(v_currRecDepth_553_);
v_fileName_723_ = v_fileName_556_;
v_fileMap_724_ = v_fileMap_557_;
v_currNamespace_725_ = v_currNamespace_559_;
v_openDecls_726_ = v_openDecls_560_;
v_initHeartbeats_727_ = v_initHeartbeats_561_;
v_maxHeartbeats_728_ = v_maxHeartbeats_562_;
v_quotContext_729_ = v_quotContext_563_;
v_currMacroScope_730_ = v_currMacroScope_564_;
v_cancelTk_x3f_731_ = v_cancelTk_x3f_565_;
v_inheritedTraceOptions_732_ = v_inheritedTraceOptions_566_;
v_currRecDepth_733_ = v_currRecDepth_553_;
v_ref_734_ = v_ref_554_;
v_suppressElabErrors_735_ = v_suppressElabErrors_555_;
v___y_736_ = v___y_469_;
goto v___jp_722_;
}
else
{
v___y_749_ = v___x_721_;
goto v___jp_748_;
}
}
else
{
v___y_749_ = v___x_770_;
goto v___jp_748_;
}
v___jp_572_:
{
lean_object* v___x_590_; lean_object* v___x_592_; 
v___x_590_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6(v___y_574_, v___y_573_);
if (v_isShared_569_ == 0)
{
lean_ctor_set(v___x_568_, 11, v_inheritedTraceOptions_585_);
lean_ctor_set(v___x_568_, 10, v_cancelTk_x3f_584_);
lean_ctor_set(v___x_568_, 9, v_currMacroScope_583_);
lean_ctor_set(v___x_568_, 8, v_quotContext_582_);
lean_ctor_set(v___x_568_, 7, v_maxHeartbeats_581_);
lean_ctor_set(v___x_568_, 6, v_initHeartbeats_580_);
lean_ctor_set(v___x_568_, 5, v_openDecls_579_);
lean_ctor_set(v___x_568_, 4, v_currNamespace_578_);
lean_ctor_set(v___x_568_, 3, v___x_590_);
lean_ctor_set(v___x_568_, 2, v___y_574_);
lean_ctor_set(v___x_568_, 1, v_fileMap_577_);
lean_ctor_set(v___x_568_, 0, v_fileName_576_);
v___x_592_ = v___x_568_;
goto v_reusejp_591_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_fileName_576_);
lean_ctor_set(v_reuseFailAlloc_598_, 1, v_fileMap_577_);
lean_ctor_set(v_reuseFailAlloc_598_, 2, v___y_574_);
lean_ctor_set(v_reuseFailAlloc_598_, 3, v___x_590_);
lean_ctor_set(v_reuseFailAlloc_598_, 4, v_currNamespace_578_);
lean_ctor_set(v_reuseFailAlloc_598_, 5, v_openDecls_579_);
lean_ctor_set(v_reuseFailAlloc_598_, 6, v_initHeartbeats_580_);
lean_ctor_set(v_reuseFailAlloc_598_, 7, v_maxHeartbeats_581_);
lean_ctor_set(v_reuseFailAlloc_598_, 8, v_quotContext_582_);
lean_ctor_set(v_reuseFailAlloc_598_, 9, v_currMacroScope_583_);
lean_ctor_set(v_reuseFailAlloc_598_, 10, v_cancelTk_x3f_584_);
lean_ctor_set(v_reuseFailAlloc_598_, 11, v_inheritedTraceOptions_585_);
v___x_592_ = v_reuseFailAlloc_598_;
goto v_reusejp_591_;
}
v_reusejp_591_:
{
lean_object* v___x_593_; lean_object* v___x_594_; 
v___x_593_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_593_, 0, v___x_592_);
lean_ctor_set(v___x_593_, 1, v_currRecDepth_586_);
lean_ctor_set(v___x_593_, 2, v_ref_587_);
lean_ctor_set_uint8(v___x_593_, sizeof(void*)*3, v___y_575_);
lean_ctor_set_uint8(v___x_593_, sizeof(void*)*3 + 1, v_suppressElabErrors_588_);
v___x_594_ = l_Lean_addAndCompile(v___x_522_, v___x_570_, v___x_571_, v___x_593_, v___y_589_);
lean_dec_ref_known(v___x_593_, 3);
if (lean_obj_tag(v___x_594_) == 0)
{
v___y_489_ = v___x_594_;
goto v___jp_488_;
}
else
{
lean_object* v_a_595_; uint8_t v___x_596_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
v___x_596_ = l_Lean_Exception_isInterrupt(v_a_595_);
if (v___x_596_ == 0)
{
uint8_t v___x_597_; 
lean_inc(v_a_595_);
v___x_597_ = l_Lean_Exception_isRuntime(v_a_595_);
v___y_504_ = v_a_595_;
v___y_505_ = v___x_594_;
v___y_506_ = v___x_597_;
goto v___jp_503_;
}
else
{
v___y_504_ = v_a_595_;
v___y_505_ = v___x_594_;
v___y_506_ = v___x_596_;
goto v___jp_503_;
}
}
}
}
v___jp_599_:
{
lean_object* v_toCold_605_; lean_object* v_currRecDepth_606_; lean_object* v_ref_607_; uint8_t v_suppressElabErrors_608_; lean_object* v_fileName_609_; lean_object* v_fileMap_610_; lean_object* v_currNamespace_611_; lean_object* v_openDecls_612_; lean_object* v_initHeartbeats_613_; lean_object* v_maxHeartbeats_614_; lean_object* v_quotContext_615_; lean_object* v_currMacroScope_616_; lean_object* v_cancelTk_x3f_617_; lean_object* v_inheritedTraceOptions_618_; 
v_toCold_605_ = lean_ctor_get(v___y_603_, 0);
lean_inc_ref(v_toCold_605_);
v_currRecDepth_606_ = lean_ctor_get(v___y_603_, 1);
lean_inc(v_currRecDepth_606_);
v_ref_607_ = lean_ctor_get(v___y_603_, 2);
lean_inc(v_ref_607_);
v_suppressElabErrors_608_ = lean_ctor_get_uint8(v___y_603_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_603_);
v_fileName_609_ = lean_ctor_get(v_toCold_605_, 0);
lean_inc_ref(v_fileName_609_);
v_fileMap_610_ = lean_ctor_get(v_toCold_605_, 1);
lean_inc_ref(v_fileMap_610_);
v_currNamespace_611_ = lean_ctor_get(v_toCold_605_, 4);
lean_inc(v_currNamespace_611_);
v_openDecls_612_ = lean_ctor_get(v_toCold_605_, 5);
lean_inc(v_openDecls_612_);
v_initHeartbeats_613_ = lean_ctor_get(v_toCold_605_, 6);
lean_inc(v_initHeartbeats_613_);
v_maxHeartbeats_614_ = lean_ctor_get(v_toCold_605_, 7);
lean_inc(v_maxHeartbeats_614_);
v_quotContext_615_ = lean_ctor_get(v_toCold_605_, 8);
lean_inc(v_quotContext_615_);
v_currMacroScope_616_ = lean_ctor_get(v_toCold_605_, 9);
lean_inc(v_currMacroScope_616_);
v_cancelTk_x3f_617_ = lean_ctor_get(v_toCold_605_, 10);
lean_inc(v_cancelTk_x3f_617_);
v_inheritedTraceOptions_618_ = lean_ctor_get(v_toCold_605_, 11);
lean_inc_ref(v_inheritedTraceOptions_618_);
lean_dec_ref(v_toCold_605_);
v___y_573_ = v___y_600_;
v___y_574_ = v___y_601_;
v___y_575_ = v___y_602_;
v_fileName_576_ = v_fileName_609_;
v_fileMap_577_ = v_fileMap_610_;
v_currNamespace_578_ = v_currNamespace_611_;
v_openDecls_579_ = v_openDecls_612_;
v_initHeartbeats_580_ = v_initHeartbeats_613_;
v_maxHeartbeats_581_ = v_maxHeartbeats_614_;
v_quotContext_582_ = v_quotContext_615_;
v_currMacroScope_583_ = v_currMacroScope_616_;
v_cancelTk_x3f_584_ = v_cancelTk_x3f_617_;
v_inheritedTraceOptions_585_ = v_inheritedTraceOptions_618_;
v_currRecDepth_586_ = v_currRecDepth_606_;
v_ref_587_ = v_ref_607_;
v_suppressElabErrors_588_ = v_suppressElabErrors_608_;
v___y_589_ = v___y_604_;
goto v___jp_572_;
}
v___jp_619_:
{
if (v___y_625_ == 0)
{
lean_object* v___x_626_; lean_object* v_env_627_; lean_object* v_nextMacroScope_628_; lean_object* v_ngen_629_; lean_object* v_auxDeclNGen_630_; lean_object* v_traceState_631_; lean_object* v_messages_632_; lean_object* v_infoState_633_; lean_object* v_snapshotTasks_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_643_; 
v___x_626_ = lean_st_ref_take(v___y_623_);
v_env_627_ = lean_ctor_get(v___x_626_, 0);
v_nextMacroScope_628_ = lean_ctor_get(v___x_626_, 1);
v_ngen_629_ = lean_ctor_get(v___x_626_, 2);
v_auxDeclNGen_630_ = lean_ctor_get(v___x_626_, 3);
v_traceState_631_ = lean_ctor_get(v___x_626_, 4);
v_messages_632_ = lean_ctor_get(v___x_626_, 6);
v_infoState_633_ = lean_ctor_get(v___x_626_, 7);
v_snapshotTasks_634_ = lean_ctor_get(v___x_626_, 8);
v_isSharedCheck_643_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_643_ == 0)
{
lean_object* v_unused_644_; 
v_unused_644_ = lean_ctor_get(v___x_626_, 5);
lean_dec(v_unused_644_);
v___x_636_ = v___x_626_;
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_snapshotTasks_634_);
lean_inc(v_infoState_633_);
lean_inc(v_messages_632_);
lean_inc(v_traceState_631_);
lean_inc(v_auxDeclNGen_630_);
lean_inc(v_ngen_629_);
lean_inc(v_nextMacroScope_628_);
lean_inc(v_env_627_);
lean_dec(v___x_626_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_643_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_640_; 
v___x_638_ = l_Lean_Kernel_enableDiag(v_env_627_, v___y_624_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 5, v___x_536_);
lean_ctor_set(v___x_636_, 0, v___x_638_);
v___x_640_ = v___x_636_;
goto v_reusejp_639_;
}
else
{
lean_object* v_reuseFailAlloc_642_; 
v_reuseFailAlloc_642_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_642_, 0, v___x_638_);
lean_ctor_set(v_reuseFailAlloc_642_, 1, v_nextMacroScope_628_);
lean_ctor_set(v_reuseFailAlloc_642_, 2, v_ngen_629_);
lean_ctor_set(v_reuseFailAlloc_642_, 3, v_auxDeclNGen_630_);
lean_ctor_set(v_reuseFailAlloc_642_, 4, v_traceState_631_);
lean_ctor_set(v_reuseFailAlloc_642_, 5, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_642_, 6, v_messages_632_);
lean_ctor_set(v_reuseFailAlloc_642_, 7, v_infoState_633_);
lean_ctor_set(v_reuseFailAlloc_642_, 8, v_snapshotTasks_634_);
v___x_640_ = v_reuseFailAlloc_642_;
goto v_reusejp_639_;
}
v_reusejp_639_:
{
lean_object* v___x_641_; 
v___x_641_ = lean_st_ref_put(v___y_623_, v___x_640_);
v___y_600_ = v___y_621_;
v___y_601_ = v___y_622_;
v___y_602_ = v___y_624_;
v___y_603_ = v___y_620_;
v___y_604_ = v___y_623_;
goto v___jp_599_;
}
}
}
else
{
v___y_600_ = v___y_621_;
v___y_601_ = v___y_622_;
v___y_602_ = v___y_624_;
v___y_603_ = v___y_620_;
v___y_604_ = v___y_623_;
goto v___jp_599_;
}
}
v___jp_648_:
{
lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; uint8_t v___x_671_; lean_object* v___x_672_; lean_object* v_env_673_; uint8_t v___x_674_; 
v___x_666_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6(v___y_650_, v___y_649_);
lean_inc_ref(v_inheritedTraceOptions_661_);
lean_inc(v_cancelTk_x3f_660_);
lean_inc(v_currMacroScope_659_);
lean_inc(v_quotContext_658_);
lean_inc(v_maxHeartbeats_657_);
lean_inc(v_initHeartbeats_656_);
lean_inc(v_openDecls_655_);
lean_inc(v_currNamespace_654_);
lean_inc_ref(v___y_650_);
lean_inc_ref(v_fileMap_653_);
lean_inc_ref(v_fileName_652_);
v___x_667_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_667_, 0, v_fileName_652_);
lean_ctor_set(v___x_667_, 1, v_fileMap_653_);
lean_ctor_set(v___x_667_, 2, v___y_650_);
lean_ctor_set(v___x_667_, 3, v___x_666_);
lean_ctor_set(v___x_667_, 4, v_currNamespace_654_);
lean_ctor_set(v___x_667_, 5, v_openDecls_655_);
lean_ctor_set(v___x_667_, 6, v_initHeartbeats_656_);
lean_ctor_set(v___x_667_, 7, v_maxHeartbeats_657_);
lean_ctor_set(v___x_667_, 8, v_quotContext_658_);
lean_ctor_set(v___x_667_, 9, v_currMacroScope_659_);
lean_ctor_set(v___x_667_, 10, v_cancelTk_x3f_660_);
lean_ctor_set(v___x_667_, 11, v_inheritedTraceOptions_661_);
lean_inc(v_ref_663_);
lean_inc(v_currRecDepth_662_);
v___x_668_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_668_, 0, v___x_667_);
lean_ctor_set(v___x_668_, 1, v_currRecDepth_662_);
lean_ctor_set(v___x_668_, 2, v_ref_663_);
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*3, v___y_651_);
lean_ctor_set_uint8(v___x_668_, sizeof(void*)*3 + 1, v_suppressElabErrors_664_);
v___x_669_ = l_Lean_Compiler_compiler_relaxedMetaCheck;
v___x_670_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4(v___y_650_, v___x_669_, v___x_570_);
v___x_671_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v___x_670_, v___x_647_);
v___x_672_ = lean_st_ref_get(v___y_665_);
v_env_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc_ref(v_env_673_);
lean_dec(v___x_672_);
v___x_674_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_673_);
lean_dec_ref(v_env_673_);
if (v___x_671_ == 0)
{
if (v___x_674_ == 0)
{
lean_dec_ref_known(v___x_668_, 3);
v___y_573_ = v___y_649_;
v___y_574_ = v___x_670_;
v___y_575_ = v___x_671_;
v_fileName_576_ = v_fileName_652_;
v_fileMap_577_ = v_fileMap_653_;
v_currNamespace_578_ = v_currNamespace_654_;
v_openDecls_579_ = v_openDecls_655_;
v_initHeartbeats_580_ = v_initHeartbeats_656_;
v_maxHeartbeats_581_ = v_maxHeartbeats_657_;
v_quotContext_582_ = v_quotContext_658_;
v_currMacroScope_583_ = v_currMacroScope_659_;
v_cancelTk_x3f_584_ = v_cancelTk_x3f_660_;
v_inheritedTraceOptions_585_ = v_inheritedTraceOptions_661_;
v_currRecDepth_586_ = v_currRecDepth_662_;
v_ref_587_ = v_ref_663_;
v_suppressElabErrors_588_ = v_suppressElabErrors_664_;
v___y_589_ = v___y_665_;
goto v___jp_572_;
}
else
{
lean_dec(v_ref_663_);
lean_dec(v_currRecDepth_662_);
lean_dec_ref(v_inheritedTraceOptions_661_);
lean_dec(v_cancelTk_x3f_660_);
lean_dec(v_currMacroScope_659_);
lean_dec(v_quotContext_658_);
lean_dec(v_maxHeartbeats_657_);
lean_dec(v_initHeartbeats_656_);
lean_dec(v_openDecls_655_);
lean_dec(v_currNamespace_654_);
lean_dec_ref(v_fileMap_653_);
lean_dec_ref(v_fileName_652_);
v___y_620_ = v___x_668_;
v___y_621_ = v___y_649_;
v___y_622_ = v___x_670_;
v___y_623_ = v___y_665_;
v___y_624_ = v___x_671_;
v___y_625_ = v___x_671_;
goto v___jp_619_;
}
}
else
{
lean_dec(v_ref_663_);
lean_dec(v_currRecDepth_662_);
lean_dec_ref(v_inheritedTraceOptions_661_);
lean_dec(v_cancelTk_x3f_660_);
lean_dec(v_currMacroScope_659_);
lean_dec(v_quotContext_658_);
lean_dec(v_maxHeartbeats_657_);
lean_dec(v_initHeartbeats_656_);
lean_dec(v_openDecls_655_);
lean_dec(v_currNamespace_654_);
lean_dec_ref(v_fileMap_653_);
lean_dec_ref(v_fileName_652_);
v___y_620_ = v___x_668_;
v___y_621_ = v___y_649_;
v___y_622_ = v___x_670_;
v___y_623_ = v___y_665_;
v___y_624_ = v___x_671_;
v___y_625_ = v___x_674_;
goto v___jp_619_;
}
}
v___jp_675_:
{
lean_object* v_toCold_681_; lean_object* v_currRecDepth_682_; lean_object* v_ref_683_; uint8_t v_suppressElabErrors_684_; lean_object* v_fileName_685_; lean_object* v_fileMap_686_; lean_object* v_currNamespace_687_; lean_object* v_openDecls_688_; lean_object* v_initHeartbeats_689_; lean_object* v_maxHeartbeats_690_; lean_object* v_quotContext_691_; lean_object* v_currMacroScope_692_; lean_object* v_cancelTk_x3f_693_; lean_object* v_inheritedTraceOptions_694_; 
v_toCold_681_ = lean_ctor_get(v___y_679_, 0);
lean_inc_ref(v_toCold_681_);
v_currRecDepth_682_ = lean_ctor_get(v___y_679_, 1);
lean_inc(v_currRecDepth_682_);
v_ref_683_ = lean_ctor_get(v___y_679_, 2);
lean_inc(v_ref_683_);
v_suppressElabErrors_684_ = lean_ctor_get_uint8(v___y_679_, sizeof(void*)*3 + 1);
lean_dec_ref(v___y_679_);
v_fileName_685_ = lean_ctor_get(v_toCold_681_, 0);
lean_inc_ref(v_fileName_685_);
v_fileMap_686_ = lean_ctor_get(v_toCold_681_, 1);
lean_inc_ref(v_fileMap_686_);
v_currNamespace_687_ = lean_ctor_get(v_toCold_681_, 4);
lean_inc(v_currNamespace_687_);
v_openDecls_688_ = lean_ctor_get(v_toCold_681_, 5);
lean_inc(v_openDecls_688_);
v_initHeartbeats_689_ = lean_ctor_get(v_toCold_681_, 6);
lean_inc(v_initHeartbeats_689_);
v_maxHeartbeats_690_ = lean_ctor_get(v_toCold_681_, 7);
lean_inc(v_maxHeartbeats_690_);
v_quotContext_691_ = lean_ctor_get(v_toCold_681_, 8);
lean_inc(v_quotContext_691_);
v_currMacroScope_692_ = lean_ctor_get(v_toCold_681_, 9);
lean_inc(v_currMacroScope_692_);
v_cancelTk_x3f_693_ = lean_ctor_get(v_toCold_681_, 10);
lean_inc(v_cancelTk_x3f_693_);
v_inheritedTraceOptions_694_ = lean_ctor_get(v_toCold_681_, 11);
lean_inc_ref(v_inheritedTraceOptions_694_);
lean_dec_ref(v_toCold_681_);
v___y_649_ = v___y_676_;
v___y_650_ = v___y_677_;
v___y_651_ = v___y_678_;
v_fileName_652_ = v_fileName_685_;
v_fileMap_653_ = v_fileMap_686_;
v_currNamespace_654_ = v_currNamespace_687_;
v_openDecls_655_ = v_openDecls_688_;
v_initHeartbeats_656_ = v_initHeartbeats_689_;
v_maxHeartbeats_657_ = v_maxHeartbeats_690_;
v_quotContext_658_ = v_quotContext_691_;
v_currMacroScope_659_ = v_currMacroScope_692_;
v_cancelTk_x3f_660_ = v_cancelTk_x3f_693_;
v_inheritedTraceOptions_661_ = v_inheritedTraceOptions_694_;
v_currRecDepth_662_ = v_currRecDepth_682_;
v_ref_663_ = v_ref_683_;
v_suppressElabErrors_664_ = v_suppressElabErrors_684_;
v___y_665_ = v___y_680_;
goto v___jp_648_;
}
v___jp_695_:
{
if (v___y_701_ == 0)
{
lean_object* v___x_702_; lean_object* v_env_703_; lean_object* v_nextMacroScope_704_; lean_object* v_ngen_705_; lean_object* v_auxDeclNGen_706_; lean_object* v_traceState_707_; lean_object* v_messages_708_; lean_object* v_infoState_709_; lean_object* v_snapshotTasks_710_; lean_object* v___x_712_; uint8_t v_isShared_713_; uint8_t v_isSharedCheck_719_; 
v___x_702_ = lean_st_ref_take(v___y_700_);
v_env_703_ = lean_ctor_get(v___x_702_, 0);
v_nextMacroScope_704_ = lean_ctor_get(v___x_702_, 1);
v_ngen_705_ = lean_ctor_get(v___x_702_, 2);
v_auxDeclNGen_706_ = lean_ctor_get(v___x_702_, 3);
v_traceState_707_ = lean_ctor_get(v___x_702_, 4);
v_messages_708_ = lean_ctor_get(v___x_702_, 6);
v_infoState_709_ = lean_ctor_get(v___x_702_, 7);
v_snapshotTasks_710_ = lean_ctor_get(v___x_702_, 8);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_702_);
if (v_isSharedCheck_719_ == 0)
{
lean_object* v_unused_720_; 
v_unused_720_ = lean_ctor_get(v___x_702_, 5);
lean_dec(v_unused_720_);
v___x_712_ = v___x_702_;
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
else
{
lean_inc(v_snapshotTasks_710_);
lean_inc(v_infoState_709_);
lean_inc(v_messages_708_);
lean_inc(v_traceState_707_);
lean_inc(v_auxDeclNGen_706_);
lean_inc(v_ngen_705_);
lean_inc(v_nextMacroScope_704_);
lean_inc(v_env_703_);
lean_dec(v___x_702_);
v___x_712_ = lean_box(0);
v_isShared_713_ = v_isSharedCheck_719_;
goto v_resetjp_711_;
}
v_resetjp_711_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = l_Lean_Kernel_enableDiag(v_env_703_, v___y_699_);
if (v_isShared_713_ == 0)
{
lean_ctor_set(v___x_712_, 5, v___x_536_);
lean_ctor_set(v___x_712_, 0, v___x_714_);
v___x_716_ = v___x_712_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_714_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_nextMacroScope_704_);
lean_ctor_set(v_reuseFailAlloc_718_, 2, v_ngen_705_);
lean_ctor_set(v_reuseFailAlloc_718_, 3, v_auxDeclNGen_706_);
lean_ctor_set(v_reuseFailAlloc_718_, 4, v_traceState_707_);
lean_ctor_set(v_reuseFailAlloc_718_, 5, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_718_, 6, v_messages_708_);
lean_ctor_set(v_reuseFailAlloc_718_, 7, v_infoState_709_);
lean_ctor_set(v_reuseFailAlloc_718_, 8, v_snapshotTasks_710_);
v___x_716_ = v_reuseFailAlloc_718_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
lean_object* v___x_717_; 
v___x_717_ = lean_st_ref_put(v___y_700_, v___x_716_);
v___y_676_ = v___y_697_;
v___y_677_ = v___y_698_;
v___y_678_ = v___y_699_;
v___y_679_ = v___y_696_;
v___y_680_ = v___y_700_;
goto v___jp_675_;
}
}
}
else
{
v___y_676_ = v___y_697_;
v___y_677_ = v___y_698_;
v___y_678_ = v___y_699_;
v___y_679_ = v___y_696_;
v___y_680_ = v___y_700_;
goto v___jp_675_;
}
}
v___jp_722_:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; uint8_t v___x_743_; lean_object* v___x_744_; lean_object* v_env_745_; uint8_t v___x_746_; 
v___x_737_ = l_Lean_maxRecDepth;
v___x_738_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__6(v___x_646_, v___x_737_);
lean_inc_ref(v_inheritedTraceOptions_732_);
lean_inc(v_cancelTk_x3f_731_);
lean_inc(v_currMacroScope_730_);
lean_inc(v_quotContext_729_);
lean_inc(v_maxHeartbeats_728_);
lean_inc(v_initHeartbeats_727_);
lean_inc(v_openDecls_726_);
lean_inc(v_currNamespace_725_);
lean_inc_ref(v___x_646_);
lean_inc_ref(v_fileMap_724_);
lean_inc_ref(v_fileName_723_);
v___x_739_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_739_, 0, v_fileName_723_);
lean_ctor_set(v___x_739_, 1, v_fileMap_724_);
lean_ctor_set(v___x_739_, 2, v___x_646_);
lean_ctor_set(v___x_739_, 3, v___x_738_);
lean_ctor_set(v___x_739_, 4, v_currNamespace_725_);
lean_ctor_set(v___x_739_, 5, v_openDecls_726_);
lean_ctor_set(v___x_739_, 6, v_initHeartbeats_727_);
lean_ctor_set(v___x_739_, 7, v_maxHeartbeats_728_);
lean_ctor_set(v___x_739_, 8, v_quotContext_729_);
lean_ctor_set(v___x_739_, 9, v_currMacroScope_730_);
lean_ctor_set(v___x_739_, 10, v_cancelTk_x3f_731_);
lean_ctor_set(v___x_739_, 11, v_inheritedTraceOptions_732_);
lean_inc(v_ref_734_);
lean_inc(v_currRecDepth_733_);
v___x_740_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_740_, 0, v___x_739_);
lean_ctor_set(v___x_740_, 1, v_currRecDepth_733_);
lean_ctor_set(v___x_740_, 2, v_ref_734_);
lean_ctor_set_uint8(v___x_740_, sizeof(void*)*3, v___x_721_);
lean_ctor_set_uint8(v___x_740_, sizeof(void*)*3 + 1, v_suppressElabErrors_735_);
v___x_741_ = l_Lean_Compiler_compiler_postponeCompile;
v___x_742_ = l_Lean_Option_set___at___00Lean_Meta_nativeEqTrue_spec__4(v___x_646_, v___x_741_, v___x_571_);
v___x_743_ = l_Lean_Option_get___at___00Lean_Meta_nativeEqTrue_spec__5(v___x_742_, v___x_647_);
v___x_744_ = lean_st_ref_get(v___y_736_);
v_env_745_ = lean_ctor_get(v___x_744_, 0);
lean_inc_ref(v_env_745_);
lean_dec(v___x_744_);
v___x_746_ = l_Lean_Kernel_isDiagnosticsEnabled(v_env_745_);
lean_dec_ref(v_env_745_);
if (v___x_743_ == 0)
{
if (v___x_746_ == 0)
{
lean_dec_ref_known(v___x_740_, 3);
v___y_649_ = v___x_737_;
v___y_650_ = v___x_742_;
v___y_651_ = v___x_743_;
v_fileName_652_ = v_fileName_723_;
v_fileMap_653_ = v_fileMap_724_;
v_currNamespace_654_ = v_currNamespace_725_;
v_openDecls_655_ = v_openDecls_726_;
v_initHeartbeats_656_ = v_initHeartbeats_727_;
v_maxHeartbeats_657_ = v_maxHeartbeats_728_;
v_quotContext_658_ = v_quotContext_729_;
v_currMacroScope_659_ = v_currMacroScope_730_;
v_cancelTk_x3f_660_ = v_cancelTk_x3f_731_;
v_inheritedTraceOptions_661_ = v_inheritedTraceOptions_732_;
v_currRecDepth_662_ = v_currRecDepth_733_;
v_ref_663_ = v_ref_734_;
v_suppressElabErrors_664_ = v_suppressElabErrors_735_;
v___y_665_ = v___y_736_;
goto v___jp_648_;
}
else
{
lean_dec(v_ref_734_);
lean_dec(v_currRecDepth_733_);
lean_dec_ref(v_inheritedTraceOptions_732_);
lean_dec(v_cancelTk_x3f_731_);
lean_dec(v_currMacroScope_730_);
lean_dec(v_quotContext_729_);
lean_dec(v_maxHeartbeats_728_);
lean_dec(v_initHeartbeats_727_);
lean_dec(v_openDecls_726_);
lean_dec(v_currNamespace_725_);
lean_dec_ref(v_fileMap_724_);
lean_dec_ref(v_fileName_723_);
v___y_696_ = v___x_740_;
v___y_697_ = v___x_737_;
v___y_698_ = v___x_742_;
v___y_699_ = v___x_743_;
v___y_700_ = v___y_736_;
v___y_701_ = v___x_743_;
goto v___jp_695_;
}
}
else
{
lean_dec(v_ref_734_);
lean_dec(v_currRecDepth_733_);
lean_dec_ref(v_inheritedTraceOptions_732_);
lean_dec(v_cancelTk_x3f_731_);
lean_dec(v_currMacroScope_730_);
lean_dec(v_quotContext_729_);
lean_dec(v_maxHeartbeats_728_);
lean_dec(v_initHeartbeats_727_);
lean_dec(v_openDecls_726_);
lean_dec(v_currNamespace_725_);
lean_dec_ref(v_fileMap_724_);
lean_dec_ref(v_fileName_723_);
v___y_696_ = v___x_740_;
v___y_697_ = v___x_737_;
v___y_698_ = v___x_742_;
v___y_699_ = v___x_743_;
v___y_700_ = v___y_736_;
v___y_701_ = v___x_746_;
goto v___jp_695_;
}
}
v___jp_748_:
{
if (v___y_749_ == 0)
{
lean_object* v___x_750_; lean_object* v_env_751_; lean_object* v_nextMacroScope_752_; lean_object* v_ngen_753_; lean_object* v_auxDeclNGen_754_; lean_object* v_traceState_755_; lean_object* v_messages_756_; lean_object* v_infoState_757_; lean_object* v_snapshotTasks_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_767_; 
v___x_750_ = lean_st_ref_take(v___y_469_);
v_env_751_ = lean_ctor_get(v___x_750_, 0);
v_nextMacroScope_752_ = lean_ctor_get(v___x_750_, 1);
v_ngen_753_ = lean_ctor_get(v___x_750_, 2);
v_auxDeclNGen_754_ = lean_ctor_get(v___x_750_, 3);
v_traceState_755_ = lean_ctor_get(v___x_750_, 4);
v_messages_756_ = lean_ctor_get(v___x_750_, 6);
v_infoState_757_ = lean_ctor_get(v___x_750_, 7);
v_snapshotTasks_758_ = lean_ctor_get(v___x_750_, 8);
v_isSharedCheck_767_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_767_ == 0)
{
lean_object* v_unused_768_; 
v_unused_768_ = lean_ctor_get(v___x_750_, 5);
lean_dec(v_unused_768_);
v___x_760_ = v___x_750_;
v_isShared_761_ = v_isSharedCheck_767_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_snapshotTasks_758_);
lean_inc(v_infoState_757_);
lean_inc(v_messages_756_);
lean_inc(v_traceState_755_);
lean_inc(v_auxDeclNGen_754_);
lean_inc(v_ngen_753_);
lean_inc(v_nextMacroScope_752_);
lean_inc(v_env_751_);
lean_dec(v___x_750_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_767_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_764_; 
v___x_762_ = l_Lean_Kernel_enableDiag(v_env_751_, v___x_721_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 5, v___x_536_);
lean_ctor_set(v___x_760_, 0, v___x_762_);
v___x_764_ = v___x_760_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_766_; 
v_reuseFailAlloc_766_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_766_, 0, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_766_, 1, v_nextMacroScope_752_);
lean_ctor_set(v_reuseFailAlloc_766_, 2, v_ngen_753_);
lean_ctor_set(v_reuseFailAlloc_766_, 3, v_auxDeclNGen_754_);
lean_ctor_set(v_reuseFailAlloc_766_, 4, v_traceState_755_);
lean_ctor_set(v_reuseFailAlloc_766_, 5, v___x_536_);
lean_ctor_set(v_reuseFailAlloc_766_, 6, v_messages_756_);
lean_ctor_set(v_reuseFailAlloc_766_, 7, v_infoState_757_);
lean_ctor_set(v_reuseFailAlloc_766_, 8, v_snapshotTasks_758_);
v___x_764_ = v_reuseFailAlloc_766_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
lean_object* v___x_765_; 
v___x_765_ = lean_st_ref_put(v___y_469_, v___x_764_);
lean_inc(v_ref_554_);
lean_inc(v_currRecDepth_553_);
v_fileName_723_ = v_fileName_556_;
v_fileMap_724_ = v_fileMap_557_;
v_currNamespace_725_ = v_currNamespace_559_;
v_openDecls_726_ = v_openDecls_560_;
v_initHeartbeats_727_ = v_initHeartbeats_561_;
v_maxHeartbeats_728_ = v_maxHeartbeats_562_;
v_quotContext_729_ = v_quotContext_563_;
v_currMacroScope_730_ = v_currMacroScope_564_;
v_cancelTk_x3f_731_ = v_cancelTk_x3f_565_;
v_inheritedTraceOptions_732_ = v_inheritedTraceOptions_566_;
v_currRecDepth_733_ = v_currRecDepth_553_;
v_ref_734_ = v_ref_554_;
v_suppressElabErrors_735_ = v_suppressElabErrors_555_;
v___y_736_ = v___y_469_;
goto v___jp_722_;
}
}
}
else
{
lean_inc(v_ref_554_);
lean_inc(v_currRecDepth_553_);
v_fileName_723_ = v_fileName_556_;
v_fileMap_724_ = v_fileMap_557_;
v_currNamespace_725_ = v_currNamespace_559_;
v_openDecls_726_ = v_openDecls_560_;
v_initHeartbeats_727_ = v_initHeartbeats_561_;
v_maxHeartbeats_728_ = v_maxHeartbeats_562_;
v_quotContext_729_ = v_quotContext_563_;
v_currMacroScope_730_ = v_currMacroScope_564_;
v_cancelTk_x3f_731_ = v_cancelTk_x3f_565_;
v_inheritedTraceOptions_732_ = v_inheritedTraceOptions_566_;
v_currRecDepth_733_ = v_currRecDepth_553_;
v_ref_734_ = v_ref_554_;
v_suppressElabErrors_735_ = v_suppressElabErrors_555_;
v___y_736_ = v___y_469_;
goto v___jp_722_;
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
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___lam__0___boxed(lean_object* v_tacticName_781_, lean_object* v___x_782_, lean_object* v___x_783_, lean_object* v___x_784_, lean_object* v_a_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v_res_791_; 
v_res_791_ = l_Lean_Meta_nativeEqTrue___lam__0(v_tacticName_781_, v___x_782_, v___x_783_, v___x_784_, v_a_785_, v___y_786_, v___y_787_, v___y_788_, v___y_789_);
lean_dec(v___y_789_);
lean_dec(v___y_787_);
lean_dec_ref(v___y_786_);
return v_res_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg(lean_object* v_stx_792_, lean_object* v___y_793_){
_start:
{
uint8_t v___x_795_; lean_object* v___x_796_; 
v___x_795_ = 0;
v___x_796_ = l_Lean_Syntax_getRange_x3f(v_stx_792_, v___x_795_);
if (lean_obj_tag(v___x_796_) == 1)
{
lean_object* v_toCold_797_; lean_object* v_val_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_810_; 
v_toCold_797_ = lean_ctor_get(v___y_793_, 0);
v_val_798_ = lean_ctor_get(v___x_796_, 0);
v_isSharedCheck_810_ = !lean_is_exclusive(v___x_796_);
if (v_isSharedCheck_810_ == 0)
{
v___x_800_ = v___x_796_;
v_isShared_801_ = v_isSharedCheck_810_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_val_798_);
lean_dec(v___x_796_);
v___x_800_ = lean_box(0);
v_isShared_801_ = v_isSharedCheck_810_;
goto v_resetjp_799_;
}
v_resetjp_799_:
{
lean_object* v_fileMap_802_; lean_object* v_start_803_; lean_object* v_stop_804_; lean_object* v___x_805_; lean_object* v___x_807_; 
v_fileMap_802_ = lean_ctor_get(v_toCold_797_, 1);
v_start_803_ = lean_ctor_get(v_val_798_, 0);
lean_inc(v_start_803_);
v_stop_804_ = lean_ctor_get(v_val_798_, 1);
lean_inc(v_stop_804_);
lean_dec(v_val_798_);
lean_inc_ref(v_fileMap_802_);
v___x_805_ = l_Lean_DeclarationRange_ofStringPositions(v_fileMap_802_, v_start_803_, v_stop_804_);
lean_dec(v_stop_804_);
lean_dec(v_start_803_);
if (v_isShared_801_ == 0)
{
lean_ctor_set(v___x_800_, 0, v___x_805_);
v___x_807_ = v___x_800_;
goto v_reusejp_806_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v___x_805_);
v___x_807_ = v_reuseFailAlloc_809_;
goto v_reusejp_806_;
}
v_reusejp_806_:
{
lean_object* v___x_808_; 
v___x_808_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_808_, 0, v___x_807_);
return v___x_808_;
}
}
}
else
{
lean_object* v___x_811_; lean_object* v___x_812_; 
lean_dec(v___x_796_);
v___x_811_ = lean_box(0);
v___x_812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_812_, 0, v___x_811_);
return v___x_812_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg___boxed(lean_object* v_stx_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg(v_stx_813_, v___y_814_);
lean_dec_ref(v___y_814_);
lean_dec(v_stx_813_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(lean_object* v_declName_817_, lean_object* v_declRanges_818_, lean_object* v___y_819_, lean_object* v___y_820_){
_start:
{
uint8_t v___x_822_; 
v___x_822_ = l_Lean_Name_isAnonymous(v_declName_817_);
if (v___x_822_ == 0)
{
lean_object* v___x_823_; lean_object* v_env_824_; lean_object* v_nextMacroScope_825_; lean_object* v_ngen_826_; lean_object* v_auxDeclNGen_827_; lean_object* v_traceState_828_; lean_object* v_messages_829_; lean_object* v_infoState_830_; lean_object* v_snapshotTasks_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_859_; 
v___x_823_ = lean_st_ref_take(v___y_820_);
v_env_824_ = lean_ctor_get(v___x_823_, 0);
v_nextMacroScope_825_ = lean_ctor_get(v___x_823_, 1);
v_ngen_826_ = lean_ctor_get(v___x_823_, 2);
v_auxDeclNGen_827_ = lean_ctor_get(v___x_823_, 3);
v_traceState_828_ = lean_ctor_get(v___x_823_, 4);
v_messages_829_ = lean_ctor_get(v___x_823_, 6);
v_infoState_830_ = lean_ctor_get(v___x_823_, 7);
v_snapshotTasks_831_ = lean_ctor_get(v___x_823_, 8);
v_isSharedCheck_859_ = !lean_is_exclusive(v___x_823_);
if (v_isSharedCheck_859_ == 0)
{
lean_object* v_unused_860_; 
v_unused_860_ = lean_ctor_get(v___x_823_, 5);
lean_dec(v_unused_860_);
v___x_833_ = v___x_823_;
v_isShared_834_ = v_isSharedCheck_859_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_snapshotTasks_831_);
lean_inc(v_infoState_830_);
lean_inc(v_messages_829_);
lean_inc(v_traceState_828_);
lean_inc(v_auxDeclNGen_827_);
lean_inc(v_ngen_826_);
lean_inc(v_nextMacroScope_825_);
lean_inc(v_env_824_);
lean_dec(v___x_823_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_859_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_839_; 
v___x_835_ = l_Lean_declRangeExt;
v___x_836_ = l_Lean_MapDeclarationExtension_insert___redArg(v___x_835_, v_env_824_, v_declName_817_, v_declRanges_818_);
v___x_837_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__11, &l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11);
if (v_isShared_834_ == 0)
{
lean_ctor_set(v___x_833_, 5, v___x_837_);
lean_ctor_set(v___x_833_, 0, v___x_836_);
v___x_839_ = v___x_833_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v___x_836_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_nextMacroScope_825_);
lean_ctor_set(v_reuseFailAlloc_858_, 2, v_ngen_826_);
lean_ctor_set(v_reuseFailAlloc_858_, 3, v_auxDeclNGen_827_);
lean_ctor_set(v_reuseFailAlloc_858_, 4, v_traceState_828_);
lean_ctor_set(v_reuseFailAlloc_858_, 5, v___x_837_);
lean_ctor_set(v_reuseFailAlloc_858_, 6, v_messages_829_);
lean_ctor_set(v_reuseFailAlloc_858_, 7, v_infoState_830_);
lean_ctor_set(v_reuseFailAlloc_858_, 8, v_snapshotTasks_831_);
v___x_839_ = v_reuseFailAlloc_858_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v_mctx_842_; lean_object* v_zetaDeltaFVarIds_843_; lean_object* v_postponed_844_; lean_object* v_diag_845_; lean_object* v___x_847_; uint8_t v_isShared_848_; uint8_t v_isSharedCheck_856_; 
v___x_840_ = lean_st_ref_put(v___y_820_, v___x_839_);
v___x_841_ = lean_st_ref_take(v___y_819_);
v_mctx_842_ = lean_ctor_get(v___x_841_, 0);
v_zetaDeltaFVarIds_843_ = lean_ctor_get(v___x_841_, 2);
v_postponed_844_ = lean_ctor_get(v___x_841_, 3);
v_diag_845_ = lean_ctor_get(v___x_841_, 4);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_841_);
if (v_isSharedCheck_856_ == 0)
{
lean_object* v_unused_857_; 
v_unused_857_ = lean_ctor_get(v___x_841_, 1);
lean_dec(v_unused_857_);
v___x_847_ = v___x_841_;
v_isShared_848_ = v_isSharedCheck_856_;
goto v_resetjp_846_;
}
else
{
lean_inc(v_diag_845_);
lean_inc(v_postponed_844_);
lean_inc(v_zetaDeltaFVarIds_843_);
lean_inc(v_mctx_842_);
lean_dec(v___x_841_);
v___x_847_ = lean_box(0);
v_isShared_848_ = v_isSharedCheck_856_;
goto v_resetjp_846_;
}
v_resetjp_846_:
{
lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_852_; 
v___x_849_ = lean_box(0);
v___x_850_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__12, &l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12);
if (v_isShared_848_ == 0)
{
lean_ctor_set(v___x_847_, 1, v___x_850_);
v___x_852_ = v___x_847_;
goto v_reusejp_851_;
}
else
{
lean_object* v_reuseFailAlloc_855_; 
v_reuseFailAlloc_855_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_855_, 0, v_mctx_842_);
lean_ctor_set(v_reuseFailAlloc_855_, 1, v___x_850_);
lean_ctor_set(v_reuseFailAlloc_855_, 2, v_zetaDeltaFVarIds_843_);
lean_ctor_set(v_reuseFailAlloc_855_, 3, v_postponed_844_);
lean_ctor_set(v_reuseFailAlloc_855_, 4, v_diag_845_);
v___x_852_ = v_reuseFailAlloc_855_;
goto v_reusejp_851_;
}
v_reusejp_851_:
{
lean_object* v___x_853_; lean_object* v___x_854_; 
v___x_853_ = lean_st_ref_put(v___y_819_, v___x_852_);
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v___x_849_);
return v___x_854_;
}
}
}
}
}
else
{
lean_object* v___x_861_; lean_object* v___x_862_; 
lean_dec_ref(v_declRanges_818_);
lean_dec(v_declName_817_);
v___x_861_ = lean_box(0);
v___x_862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_862_, 0, v___x_861_);
return v___x_862_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg___boxed(lean_object* v_declName_863_, lean_object* v_declRanges_864_, lean_object* v___y_865_, lean_object* v___y_866_, lean_object* v___y_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(v_declName_863_, v_declRanges_864_, v___y_865_, v___y_866_);
lean_dec(v___y_866_);
lean_dec(v___y_865_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(lean_object* v_declName_869_, lean_object* v_rangeStx_870_, lean_object* v_selectionRangeStx_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_894_; 
v___x_877_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg(v_rangeStx_870_, v___y_874_);
v_a_878_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_894_ == 0)
{
v___x_880_ = v___x_877_;
v_isShared_881_ = v_isSharedCheck_894_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_877_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_894_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
if (lean_obj_tag(v_a_878_) == 1)
{
lean_object* v_val_882_; lean_object* v_a_884_; lean_object* v___x_887_; lean_object* v_a_888_; 
lean_del_object(v___x_880_);
v_val_882_ = lean_ctor_get(v_a_878_, 0);
lean_inc(v_val_882_);
lean_dec_ref_known(v_a_878_, 1);
v___x_887_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg(v_selectionRangeStx_871_, v___y_874_);
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
lean_dec_ref(v___x_887_);
if (lean_obj_tag(v_a_888_) == 0)
{
lean_inc(v_val_882_);
v_a_884_ = v_val_882_;
goto v___jp_883_;
}
else
{
lean_object* v_val_889_; 
v_val_889_ = lean_ctor_get(v_a_888_, 0);
lean_inc(v_val_889_);
lean_dec_ref_known(v_a_888_, 1);
v_a_884_ = v_val_889_;
goto v___jp_883_;
}
v___jp_883_:
{
lean_object* v___x_885_; lean_object* v___x_886_; 
v___x_885_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_885_, 0, v_val_882_);
lean_ctor_set(v___x_885_, 1, v_a_884_);
v___x_886_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(v_declName_869_, v___x_885_, v___y_873_, v___y_875_);
return v___x_886_;
}
}
else
{
lean_object* v___x_890_; lean_object* v___x_892_; 
lean_dec(v_a_878_);
lean_dec(v_declName_869_);
v___x_890_ = lean_box(0);
if (v_isShared_881_ == 0)
{
lean_ctor_set(v___x_880_, 0, v___x_890_);
v___x_892_ = v___x_880_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v___x_890_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9___boxed(lean_object* v_declName_895_, lean_object* v_rangeStx_896_, lean_object* v_selectionRangeStx_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(v_declName_895_, v_rangeStx_896_, v_selectionRangeStx_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v_selectionRangeStx_897_);
lean_dec(v_rangeStx_896_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__8(lean_object* v_a_904_, lean_object* v_a_905_){
_start:
{
if (lean_obj_tag(v_a_904_) == 0)
{
lean_object* v___x_906_; 
v___x_906_ = l_List_reverse___redArg(v_a_905_);
return v___x_906_;
}
else
{
lean_object* v_head_907_; lean_object* v_tail_908_; lean_object* v___x_910_; uint8_t v_isShared_911_; uint8_t v_isSharedCheck_917_; 
v_head_907_ = lean_ctor_get(v_a_904_, 0);
v_tail_908_ = lean_ctor_get(v_a_904_, 1);
v_isSharedCheck_917_ = !lean_is_exclusive(v_a_904_);
if (v_isSharedCheck_917_ == 0)
{
v___x_910_ = v_a_904_;
v_isShared_911_ = v_isSharedCheck_917_;
goto v_resetjp_909_;
}
else
{
lean_inc(v_tail_908_);
lean_inc(v_head_907_);
lean_dec(v_a_904_);
v___x_910_ = lean_box(0);
v_isShared_911_ = v_isSharedCheck_917_;
goto v_resetjp_909_;
}
v_resetjp_909_:
{
lean_object* v___x_912_; lean_object* v___x_914_; 
v___x_912_ = l_Lean_mkLevelParam(v_head_907_);
if (v_isShared_911_ == 0)
{
lean_ctor_set(v___x_910_, 1, v_a_905_);
lean_ctor_set(v___x_910_, 0, v___x_912_);
v___x_914_ = v___x_910_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v___x_912_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_a_905_);
v___x_914_ = v_reuseFailAlloc_916_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
v_a_904_ = v_tail_908_;
v_a_905_ = v___x_914_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg(lean_object* v_env_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
lean_object* v___x_922_; lean_object* v_nextMacroScope_923_; lean_object* v_ngen_924_; lean_object* v_auxDeclNGen_925_; lean_object* v_traceState_926_; lean_object* v_messages_927_; lean_object* v_infoState_928_; lean_object* v_snapshotTasks_929_; lean_object* v___x_931_; uint8_t v_isShared_932_; uint8_t v_isSharedCheck_955_; 
v___x_922_ = lean_st_ref_take(v___y_920_);
v_nextMacroScope_923_ = lean_ctor_get(v___x_922_, 1);
v_ngen_924_ = lean_ctor_get(v___x_922_, 2);
v_auxDeclNGen_925_ = lean_ctor_get(v___x_922_, 3);
v_traceState_926_ = lean_ctor_get(v___x_922_, 4);
v_messages_927_ = lean_ctor_get(v___x_922_, 6);
v_infoState_928_ = lean_ctor_get(v___x_922_, 7);
v_snapshotTasks_929_ = lean_ctor_get(v___x_922_, 8);
v_isSharedCheck_955_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_955_ == 0)
{
lean_object* v_unused_956_; lean_object* v_unused_957_; 
v_unused_956_ = lean_ctor_get(v___x_922_, 5);
lean_dec(v_unused_956_);
v_unused_957_ = lean_ctor_get(v___x_922_, 0);
lean_dec(v_unused_957_);
v___x_931_ = v___x_922_;
v_isShared_932_ = v_isSharedCheck_955_;
goto v_resetjp_930_;
}
else
{
lean_inc(v_snapshotTasks_929_);
lean_inc(v_infoState_928_);
lean_inc(v_messages_927_);
lean_inc(v_traceState_926_);
lean_inc(v_auxDeclNGen_925_);
lean_inc(v_ngen_924_);
lean_inc(v_nextMacroScope_923_);
lean_dec(v___x_922_);
v___x_931_ = lean_box(0);
v_isShared_932_ = v_isSharedCheck_955_;
goto v_resetjp_930_;
}
v_resetjp_930_:
{
lean_object* v___x_933_; lean_object* v___x_935_; 
v___x_933_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__11, &l_Lean_Meta_nativeEqTrue___lam__0___closed__11_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__11);
if (v_isShared_932_ == 0)
{
lean_ctor_set(v___x_931_, 5, v___x_933_);
lean_ctor_set(v___x_931_, 0, v_env_918_);
v___x_935_ = v___x_931_;
goto v_reusejp_934_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_env_918_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_nextMacroScope_923_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_ngen_924_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v_auxDeclNGen_925_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v_traceState_926_);
lean_ctor_set(v_reuseFailAlloc_954_, 5, v___x_933_);
lean_ctor_set(v_reuseFailAlloc_954_, 6, v_messages_927_);
lean_ctor_set(v_reuseFailAlloc_954_, 7, v_infoState_928_);
lean_ctor_set(v_reuseFailAlloc_954_, 8, v_snapshotTasks_929_);
v___x_935_ = v_reuseFailAlloc_954_;
goto v_reusejp_934_;
}
v_reusejp_934_:
{
lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v_mctx_938_; lean_object* v_zetaDeltaFVarIds_939_; lean_object* v_postponed_940_; lean_object* v_diag_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_952_; 
v___x_936_ = lean_st_ref_put(v___y_920_, v___x_935_);
v___x_937_ = lean_st_ref_take(v___y_919_);
v_mctx_938_ = lean_ctor_get(v___x_937_, 0);
v_zetaDeltaFVarIds_939_ = lean_ctor_get(v___x_937_, 2);
v_postponed_940_ = lean_ctor_get(v___x_937_, 3);
v_diag_941_ = lean_ctor_get(v___x_937_, 4);
v_isSharedCheck_952_ = !lean_is_exclusive(v___x_937_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; 
v_unused_953_ = lean_ctor_get(v___x_937_, 1);
lean_dec(v_unused_953_);
v___x_943_ = v___x_937_;
v_isShared_944_ = v_isSharedCheck_952_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_diag_941_);
lean_inc(v_postponed_940_);
lean_inc(v_zetaDeltaFVarIds_939_);
lean_inc(v_mctx_938_);
lean_dec(v___x_937_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_952_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_945_ = lean_box(0);
v___x_946_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__12, &l_Lean_Meta_nativeEqTrue___lam__0___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__12);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 1, v___x_946_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_mctx_938_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v___x_946_);
lean_ctor_set(v_reuseFailAlloc_951_, 2, v_zetaDeltaFVarIds_939_);
lean_ctor_set(v_reuseFailAlloc_951_, 3, v_postponed_940_);
lean_ctor_set(v_reuseFailAlloc_951_, 4, v_diag_941_);
v___x_948_ = v_reuseFailAlloc_951_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
lean_object* v___x_949_; lean_object* v___x_950_; 
v___x_949_ = lean_st_ref_put(v___y_919_, v___x_948_);
v___x_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_950_, 0, v___x_945_);
return v___x_950_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg___boxed(lean_object* v_env_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
lean_object* v_res_962_; 
v_res_962_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg(v_env_958_, v___y_959_, v___y_960_);
lean_dec(v___y_960_);
lean_dec(v___y_959_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(lean_object* v_env_963_, lean_object* v_x_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_, lean_object* v___y_968_){
_start:
{
lean_object* v___x_970_; lean_object* v_env_971_; lean_object* v_a_973_; lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_970_ = lean_st_ref_get(v___y_968_);
v_env_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc_ref(v_env_971_);
lean_dec(v___x_970_);
v___x_983_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg(v_env_963_, v___y_966_, v___y_968_);
lean_dec_ref(v___x_983_);
lean_inc(v___y_968_);
lean_inc_ref(v___y_967_);
lean_inc(v___y_966_);
lean_inc_ref(v___y_965_);
v___x_984_ = lean_apply_5(v_x_964_, v___y_965_, v___y_966_, v___y_967_, v___y_968_, lean_box(0));
if (lean_obj_tag(v___x_984_) == 0)
{
lean_object* v_a_985_; lean_object* v___x_986_; lean_object* v___x_988_; uint8_t v_isShared_989_; uint8_t v_isSharedCheck_993_; 
v_a_985_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_985_);
lean_dec_ref_known(v___x_984_, 1);
v___x_986_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg(v_env_971_, v___y_966_, v___y_968_);
v_isSharedCheck_993_ = !lean_is_exclusive(v___x_986_);
if (v_isSharedCheck_993_ == 0)
{
lean_object* v_unused_994_; 
v_unused_994_ = lean_ctor_get(v___x_986_, 0);
lean_dec(v_unused_994_);
v___x_988_ = v___x_986_;
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
else
{
lean_dec(v___x_986_);
v___x_988_ = lean_box(0);
v_isShared_989_ = v_isSharedCheck_993_;
goto v_resetjp_987_;
}
v_resetjp_987_:
{
lean_object* v___x_991_; 
if (v_isShared_989_ == 0)
{
lean_ctor_set(v___x_988_, 0, v_a_985_);
v___x_991_ = v___x_988_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v_a_985_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
return v___x_991_;
}
}
}
else
{
lean_object* v_a_995_; 
v_a_995_ = lean_ctor_get(v___x_984_, 0);
lean_inc(v_a_995_);
lean_dec_ref_known(v___x_984_, 1);
v_a_973_ = v_a_995_;
goto v___jp_972_;
}
v___jp_972_:
{
lean_object* v___x_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
v___x_974_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg(v_env_971_, v___y_966_, v___y_968_);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_981_ == 0)
{
lean_object* v_unused_982_; 
v_unused_982_ = lean_ctor_get(v___x_974_, 0);
lean_dec(v_unused_982_);
v___x_976_ = v___x_974_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_dec(v___x_974_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
lean_ctor_set_tag(v___x_976_, 1);
lean_ctor_set(v___x_976_, 0, v_a_973_);
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_973_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg___boxed(lean_object* v_env_996_, lean_object* v_x_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(v_env_996_, v_x_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
return v_res_1003_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__0(void){
_start:
{
lean_object* v___x_1004_; lean_object* v___x_1005_; lean_object* v___x_1006_; 
v___x_1004_ = lean_box(0);
v___x_1005_ = lean_unsigned_to_nat(16u);
v___x_1006_ = lean_mk_array(v___x_1005_, v___x_1004_);
return v___x_1006_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__1(void){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1009_; 
v___x_1007_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__0, &l_Lean_Meta_nativeEqTrue___closed__0_once, _init_l_Lean_Meta_nativeEqTrue___closed__0);
v___x_1008_ = lean_unsigned_to_nat(0u);
v___x_1009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1009_, 0, v___x_1008_);
lean_ctor_set(v___x_1009_, 1, v___x_1007_);
return v___x_1009_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__3(void){
_start:
{
lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v___x_1012_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__2));
v___x_1013_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__1, &l_Lean_Meta_nativeEqTrue___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___closed__1);
v___x_1014_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1014_, 0, v___x_1013_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
lean_ctor_set(v___x_1014_, 2, v___x_1012_);
return v___x_1014_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__12(void){
_start:
{
lean_object* v___x_1027_; lean_object* v___x_1028_; 
v___x_1027_ = lean_unsigned_to_nat(1u);
v___x_1028_ = l_Lean_Level_ofNat(v___x_1027_);
return v___x_1028_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__13(void){
_start:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; 
v___x_1029_ = lean_box(0);
v___x_1030_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__12, &l_Lean_Meta_nativeEqTrue___closed__12_once, _init_l_Lean_Meta_nativeEqTrue___closed__12);
v___x_1031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1030_);
lean_ctor_set(v___x_1031_, 1, v___x_1029_);
return v___x_1031_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__14(void){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__13, &l_Lean_Meta_nativeEqTrue___closed__13_once, _init_l_Lean_Meta_nativeEqTrue___closed__13);
v___x_1033_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__11));
v___x_1034_ = l_Lean_mkConst(v___x_1033_, v___x_1032_);
return v___x_1034_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__15(void){
_start:
{
lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; 
v___x_1035_ = lean_box(0);
v___x_1036_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___lam__0___closed__7));
v___x_1037_ = l_Lean_mkConst(v___x_1036_, v___x_1035_);
return v___x_1037_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__18(void){
_start:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1042_ = lean_box(0);
v___x_1043_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__17));
v___x_1044_ = l_Lean_mkConst(v___x_1043_, v___x_1042_);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__20(void){
_start:
{
lean_object* v___x_1046_; lean_object* v___x_1047_; 
v___x_1046_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__19));
v___x_1047_ = l_Lean_stringToMessageData(v___x_1046_);
return v___x_1047_;
}
}
static lean_object* _init_l_Lean_Meta_nativeEqTrue___closed__22(void){
_start:
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
v___x_1049_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__21));
v___x_1050_ = l_Lean_stringToMessageData(v___x_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue(lean_object* v_tacticName_1051_, lean_object* v_e_1052_, lean_object* v_axiomDeclRange_x3f_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v___y_1060_; lean_object* v___y_1061_; lean_object* v___x_1067_; lean_object* v_a_1068_; lean_object* v___y_1070_; lean_object* v___y_1071_; lean_object* v___y_1072_; lean_object* v___y_1073_; lean_object* v___y_1153_; lean_object* v___y_1154_; lean_object* v___y_1155_; lean_object* v___y_1156_; uint8_t v___x_1174_; 
v___x_1067_ = l_Lean_instantiateMVars___at___00Lean_Meta_nativeEqTrue_spec__0___redArg(v_e_1052_, v___y_1055_);
v_a_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_a_1068_);
lean_dec_ref(v___x_1067_);
v___x_1174_ = l_Lean_Expr_hasFVar(v_a_1068_);
if (v___x_1174_ == 0)
{
v___y_1153_ = v___y_1054_;
v___y_1154_ = v___y_1055_;
v___y_1155_ = v___y_1056_;
v___y_1156_ = v___y_1057_;
goto v___jp_1152_;
}
else
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v_a_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1190_; 
v___x_1175_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_1176_ = l_Lean_MessageData_ofName(v_tacticName_1051_);
v___x_1177_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1175_);
lean_ctor_set(v___x_1177_, 1, v___x_1176_);
v___x_1178_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__22, &l_Lean_Meta_nativeEqTrue___closed__22_once, _init_l_Lean_Meta_nativeEqTrue___closed__22);
v___x_1179_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1179_, 0, v___x_1177_);
lean_ctor_set(v___x_1179_, 1, v___x_1178_);
v___x_1180_ = l_Lean_indentExpr(v_a_1068_);
v___x_1181_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1179_);
lean_ctor_set(v___x_1181_, 1, v___x_1180_);
v___x_1182_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_1181_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
v_a_1183_ = lean_ctor_get(v___x_1182_, 0);
v_isSharedCheck_1190_ = !lean_is_exclusive(v___x_1182_);
if (v_isSharedCheck_1190_ == 0)
{
v___x_1185_ = v___x_1182_;
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_a_1183_);
lean_dec(v___x_1182_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1190_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___x_1188_; 
if (v_isShared_1186_ == 0)
{
v___x_1188_ = v___x_1185_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_a_1183_);
v___x_1188_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
return v___x_1188_;
}
}
}
v___jp_1059_:
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; 
v___x_1062_ = lean_box(0);
v___x_1063_ = l_List_mapTR_loop___at___00Lean_Meta_nativeEqTrue_spec__8(v___y_1061_, v___x_1062_);
v___x_1064_ = l_Lean_mkConst(v___y_1060_, v___x_1063_);
v___x_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
v___x_1066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
return v___x_1066_;
}
v___jp_1069_:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v_params_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1149_; 
v___x_1074_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__3, &l_Lean_Meta_nativeEqTrue___closed__3_once, _init_l_Lean_Meta_nativeEqTrue___closed__3);
lean_inc(v_a_1068_);
v___x_1075_ = l_Lean_collectLevelParams(v___x_1074_, v_a_1068_);
v_params_1076_ = lean_ctor_get(v___x_1075_, 2);
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1149_ == 0)
{
lean_object* v_unused_1150_; lean_object* v_unused_1151_; 
v_unused_1150_ = lean_ctor_get(v___x_1075_, 1);
lean_dec(v_unused_1150_);
v_unused_1151_ = lean_ctor_get(v___x_1075_, 0);
lean_dec(v_unused_1151_);
v___x_1078_ = v___x_1075_;
v_isShared_1079_ = v_isSharedCheck_1149_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_params_1076_);
lean_dec(v___x_1075_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1149_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___f_1086_; lean_object* v___x_1087_; lean_object* v_env_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1080_ = lean_box(0);
v___x_1081_ = lean_array_to_list(v_params_1076_);
v___x_1082_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__5));
lean_inc(v_tacticName_1051_);
v___x_1083_ = l_Lean_Name_append(v___x_1082_, v_tacticName_1051_);
v___x_1084_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__7));
lean_inc(v___x_1083_);
v___x_1085_ = l_Lean_Name_append(v___x_1083_, v___x_1084_);
lean_inc(v_a_1068_);
lean_inc(v___x_1081_);
v___f_1086_ = lean_alloc_closure((void*)(l_Lean_Meta_nativeEqTrue___lam__0___boxed), 10, 5);
lean_closure_set(v___f_1086_, 0, v_tacticName_1051_);
lean_closure_set(v___f_1086_, 1, v___x_1085_);
lean_closure_set(v___f_1086_, 2, v___x_1081_);
lean_closure_set(v___f_1086_, 3, v___x_1080_);
lean_closure_set(v___f_1086_, 4, v_a_1068_);
v___x_1087_ = lean_st_ref_get(v___y_1073_);
v_env_1088_ = lean_ctor_get(v___x_1087_, 0);
lean_inc_ref(v_env_1088_);
lean_dec(v___x_1087_);
v___x_1089_ = l_Lean_Environment_unlockAsync(v_env_1088_);
v___x_1090_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(v___x_1089_, v___f_1086_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1140_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1093_ = v___x_1090_;
v_isShared_1094_ = v_isSharedCheck_1140_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1090_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1140_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
uint8_t v___x_1095_; 
v___x_1095_ = lean_unbox(v_a_1091_);
lean_dec(v_a_1091_);
if (v___x_1095_ == 0)
{
lean_object* v___x_1096_; lean_object* v___x_1098_; 
lean_dec(v___x_1083_);
lean_dec(v___x_1081_);
lean_del_object(v___x_1078_);
lean_dec(v_a_1068_);
v___x_1096_ = lean_box(1);
if (v_isShared_1094_ == 0)
{
lean_ctor_set(v___x_1093_, 0, v___x_1096_);
v___x_1098_ = v___x_1093_;
goto v_reusejp_1097_;
}
else
{
lean_object* v_reuseFailAlloc_1099_; 
v_reuseFailAlloc_1099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1099_, 0, v___x_1096_);
v___x_1098_ = v_reuseFailAlloc_1099_;
goto v_reusejp_1097_;
}
v_reusejp_1097_:
{
return v___x_1098_;
}
}
else
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v_a_1103_; lean_object* v___x_1105_; uint8_t v_isShared_1106_; uint8_t v_isSharedCheck_1139_; 
lean_del_object(v___x_1093_);
v___x_1100_ = ((lean_object*)(l_Lean_Meta_nativeEqTrue___closed__9));
v___x_1101_ = l_Lean_Name_append(v___x_1083_, v___x_1100_);
v___x_1102_ = l_Lean_mkAuxDeclName___at___00Lean_Meta_nativeEqTrue_spec__1___redArg(v___x_1101_, v___y_1073_);
v_a_1103_ = lean_ctor_get(v___x_1102_, 0);
v_isSharedCheck_1139_ = !lean_is_exclusive(v___x_1102_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1105_ = v___x_1102_;
v_isShared_1106_ = v_isSharedCheck_1139_;
goto v_resetjp_1104_;
}
else
{
lean_inc(v_a_1103_);
lean_dec(v___x_1102_);
v___x_1105_ = lean_box(0);
v_isShared_1106_ = v_isSharedCheck_1139_;
goto v_resetjp_1104_;
}
v_resetjp_1104_:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1112_; 
v___x_1107_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__14, &l_Lean_Meta_nativeEqTrue___closed__14_once, _init_l_Lean_Meta_nativeEqTrue___closed__14);
v___x_1108_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__15, &l_Lean_Meta_nativeEqTrue___closed__15_once, _init_l_Lean_Meta_nativeEqTrue___closed__15);
v___x_1109_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__18, &l_Lean_Meta_nativeEqTrue___closed__18_once, _init_l_Lean_Meta_nativeEqTrue___closed__18);
v___x_1110_ = l_Lean_mkApp3(v___x_1107_, v___x_1108_, v_a_1068_, v___x_1109_);
lean_inc(v___x_1081_);
lean_inc(v_a_1103_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 2, v___x_1110_);
lean_ctor_set(v___x_1078_, 1, v___x_1081_);
lean_ctor_set(v___x_1078_, 0, v_a_1103_);
v___x_1112_ = v___x_1078_;
goto v_reusejp_1111_;
}
else
{
lean_object* v_reuseFailAlloc_1138_; 
v_reuseFailAlloc_1138_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1138_, 0, v_a_1103_);
lean_ctor_set(v_reuseFailAlloc_1138_, 1, v___x_1081_);
lean_ctor_set(v_reuseFailAlloc_1138_, 2, v___x_1110_);
v___x_1112_ = v_reuseFailAlloc_1138_;
goto v_reusejp_1111_;
}
v_reusejp_1111_:
{
uint8_t v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1116_; 
v___x_1113_ = 0;
v___x_1114_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1114_, 0, v___x_1112_);
lean_ctor_set_uint8(v___x_1114_, sizeof(void*)*1, v___x_1113_);
if (v_isShared_1106_ == 0)
{
lean_ctor_set(v___x_1105_, 0, v___x_1114_);
v___x_1116_ = v___x_1105_;
goto v_reusejp_1115_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1114_);
v___x_1116_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1115_;
}
v_reusejp_1115_:
{
lean_object* v___x_1117_; 
v___x_1117_ = l_Lean_addDecl(v___x_1116_, v___x_1113_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_dec_ref_known(v___x_1117_, 1);
if (lean_obj_tag(v_axiomDeclRange_x3f_1053_) == 1)
{
lean_object* v_val_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; 
v_val_1118_ = lean_ctor_get(v_axiomDeclRange_x3f_1053_, 0);
v___x_1119_ = lean_box(0);
lean_inc(v_a_1103_);
v___x_1120_ = l_Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9(v_a_1103_, v_val_1118_, v___x_1119_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1120_) == 0)
{
lean_dec_ref_known(v___x_1120_, 1);
v___y_1060_ = v_a_1103_;
v___y_1061_ = v___x_1081_;
goto v___jp_1059_;
}
else
{
lean_object* v_a_1121_; lean_object* v___x_1123_; uint8_t v_isShared_1124_; uint8_t v_isSharedCheck_1128_; 
lean_dec(v_a_1103_);
lean_dec(v___x_1081_);
v_a_1121_ = lean_ctor_get(v___x_1120_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v___x_1120_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1123_ = v___x_1120_;
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
else
{
lean_inc(v_a_1121_);
lean_dec(v___x_1120_);
v___x_1123_ = lean_box(0);
v_isShared_1124_ = v_isSharedCheck_1128_;
goto v_resetjp_1122_;
}
v_resetjp_1122_:
{
lean_object* v___x_1126_; 
if (v_isShared_1124_ == 0)
{
v___x_1126_ = v___x_1123_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1127_; 
v_reuseFailAlloc_1127_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1127_, 0, v_a_1121_);
v___x_1126_ = v_reuseFailAlloc_1127_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
return v___x_1126_;
}
}
}
}
else
{
v___y_1060_ = v_a_1103_;
v___y_1061_ = v___x_1081_;
goto v___jp_1059_;
}
}
else
{
lean_object* v_a_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1136_; 
lean_dec(v_a_1103_);
lean_dec(v___x_1081_);
v_a_1129_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1131_ = v___x_1117_;
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_a_1129_);
lean_dec(v___x_1117_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1136_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1134_; 
if (v_isShared_1132_ == 0)
{
v___x_1134_ = v___x_1131_;
goto v_reusejp_1133_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_a_1129_);
v___x_1134_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1133_;
}
v_reusejp_1133_:
{
return v___x_1134_;
}
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
lean_object* v_a_1141_; lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1148_; 
lean_dec(v___x_1083_);
lean_dec(v___x_1081_);
lean_del_object(v___x_1078_);
lean_dec(v_a_1068_);
v_a_1141_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1143_ = v___x_1090_;
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
else
{
lean_inc(v_a_1141_);
lean_dec(v___x_1090_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1148_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1146_; 
if (v_isShared_1144_ == 0)
{
v___x_1146_ = v___x_1143_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1147_; 
v_reuseFailAlloc_1147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1147_, 0, v_a_1141_);
v___x_1146_ = v_reuseFailAlloc_1147_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
return v___x_1146_;
}
}
}
}
}
v___jp_1152_:
{
uint8_t v___x_1157_; 
v___x_1157_ = l_Lean_Expr_hasMVar(v_a_1068_);
if (v___x_1157_ == 0)
{
v___y_1070_ = v___y_1153_;
v___y_1071_ = v___y_1154_;
v___y_1072_ = v___y_1155_;
v___y_1073_ = v___y_1156_;
goto v___jp_1069_;
}
else
{
lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v_a_1166_; lean_object* v___x_1168_; uint8_t v_isShared_1169_; uint8_t v_isSharedCheck_1173_; 
v___x_1158_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___lam__0___closed__1, &l_Lean_Meta_nativeEqTrue___lam__0___closed__1_once, _init_l_Lean_Meta_nativeEqTrue___lam__0___closed__1);
v___x_1159_ = l_Lean_MessageData_ofName(v_tacticName_1051_);
v___x_1160_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1160_, 0, v___x_1158_);
lean_ctor_set(v___x_1160_, 1, v___x_1159_);
v___x_1161_ = lean_obj_once(&l_Lean_Meta_nativeEqTrue___closed__20, &l_Lean_Meta_nativeEqTrue___closed__20_once, _init_l_Lean_Meta_nativeEqTrue___closed__20);
v___x_1162_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1162_, 0, v___x_1160_);
lean_ctor_set(v___x_1162_, 1, v___x_1161_);
v___x_1163_ = l_Lean_indentExpr(v_a_1068_);
v___x_1164_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1164_, 0, v___x_1162_);
lean_ctor_set(v___x_1164_, 1, v___x_1163_);
v___x_1165_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v___x_1164_, v___y_1153_, v___y_1154_, v___y_1155_, v___y_1156_);
v_a_1166_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1168_ = v___x_1165_;
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
else
{
lean_inc(v_a_1166_);
lean_dec(v___x_1165_);
v___x_1168_ = lean_box(0);
v_isShared_1169_ = v_isSharedCheck_1173_;
goto v_resetjp_1167_;
}
v_resetjp_1167_:
{
lean_object* v___x_1171_; 
if (v_isShared_1169_ == 0)
{
v___x_1171_ = v___x_1168_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v_a_1166_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_nativeEqTrue___boxed(lean_object* v_tacticName_1191_, lean_object* v_e_1192_, lean_object* v_axiomDeclRange_x3f_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_){
_start:
{
lean_object* v_res_1199_; 
v_res_1199_ = l_Lean_Meta_nativeEqTrue(v_tacticName_1191_, v_e_1192_, v_axiomDeclRange_x3f_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1195_);
lean_dec_ref(v___y_1194_);
lean_dec(v_axiomDeclRange_x3f_1193_);
return v_res_1199_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3(lean_object* v_00_u03b1_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_){
_start:
{
lean_object* v___x_1206_; 
v___x_1206_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___redArg();
return v___x_1206_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_){
_start:
{
lean_object* v_res_1213_; 
v_res_1213_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__3(v_00_u03b1_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_);
lean_dec(v___y_1211_);
lean_dec_ref(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec_ref(v___y_1208_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2(lean_object* v_00_u03b1_1214_, lean_object* v_constName_1215_, uint8_t v_checkMeta_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___redArg(v_constName_1215_, v_checkMeta_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2___boxed(lean_object* v_00_u03b1_1223_, lean_object* v_constName_1224_, lean_object* v_checkMeta_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_){
_start:
{
uint8_t v_checkMeta_boxed_1231_; lean_object* v_res_1232_; 
v_checkMeta_boxed_1231_ = lean_unbox(v_checkMeta_1225_);
v_res_1232_ = l_Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2(v_00_u03b1_1223_, v_constName_1224_, v_checkMeta_boxed_1231_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_);
lean_dec(v___y_1229_);
lean_dec_ref(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3(lean_object* v_00_u03b1_1233_, lean_object* v_msg_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v___x_1240_; 
v___x_1240_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___redArg(v_msg_1234_, v___y_1235_, v___y_1236_, v___y_1237_, v___y_1238_);
return v___x_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3___boxed(lean_object* v_00_u03b1_1241_, lean_object* v_msg_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l_Lean_throwError___at___00Lean_Meta_nativeEqTrue_spec__3(v_00_u03b1_1241_, v_msg_1242_, v___y_1243_, v___y_1244_, v___y_1245_, v___y_1246_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
return v_res_1248_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11(lean_object* v_env_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v___x_1255_; 
v___x_1255_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___redArg(v_env_1249_, v___y_1251_, v___y_1253_);
return v___x_1255_;
}
}
LEAN_EXPORT lean_object* l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11___boxed(lean_object* v_env_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_){
_start:
{
lean_object* v_res_1262_; 
v_res_1262_ = l_Lean_setEnv___at___00Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7_spec__11(v_env_1256_, v___y_1257_, v___y_1258_, v___y_1259_, v___y_1260_);
lean_dec(v___y_1260_);
lean_dec_ref(v___y_1259_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
return v_res_1262_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7(lean_object* v_00_u03b1_1263_, lean_object* v_env_1264_, lean_object* v_x_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___redArg(v_env_1264_, v_x_1265_, v___y_1266_, v___y_1267_, v___y_1268_, v___y_1269_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7___boxed(lean_object* v_00_u03b1_1272_, lean_object* v_env_1273_, lean_object* v_x_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v_res_1280_; 
v_res_1280_ = l_Lean_withEnv___at___00Lean_Meta_nativeEqTrue_spec__7(v_00_u03b1_1272_, v_env_1273_, v_x_1274_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_);
lean_dec(v___y_1278_);
lean_dec_ref(v___y_1277_);
lean_dec(v___y_1276_);
lean_dec_ref(v___y_1275_);
return v_res_1280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14(lean_object* v_stx_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_){
_start:
{
lean_object* v___x_1287_; 
v___x_1287_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___redArg(v_stx_1281_, v___y_1284_);
return v___x_1287_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14___boxed(lean_object* v_stx_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l_Lean_Elab_getDeclarationRange_x3f___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__14(v_stx_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v_stx_1288_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15(lean_object* v_declName_1295_, lean_object* v_declRanges_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v___x_1302_; 
v___x_1302_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___redArg(v_declName_1295_, v_declRanges_1296_, v___y_1298_, v___y_1300_);
return v___x_1302_;
}
}
LEAN_EXPORT lean_object* l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15___boxed(lean_object* v_declName_1303_, lean_object* v_declRanges_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_){
_start:
{
lean_object* v_res_1310_; 
v_res_1310_ = l_Lean_addDeclarationRanges___at___00Lean_Elab_addDeclarationRangesFromSyntax___at___00Lean_Meta_nativeEqTrue_spec__9_spec__15(v_declName_1303_, v_declRanges_1304_, v___y_1305_, v___y_1306_, v___y_1307_, v___y_1308_);
lean_dec(v___y_1308_);
lean_dec_ref(v___y_1307_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
return v_res_1310_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(lean_object* v_00_u03b1_1311_, lean_object* v_x_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_){
_start:
{
lean_object* v___x_1318_; 
v___x_1318_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___redArg(v_x_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
return v___x_1318_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2___boxed(lean_object* v_00_u03b1_1319_, lean_object* v_x_1320_, lean_object* v___y_1321_, lean_object* v___y_1322_, lean_object* v___y_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v_res_1326_; 
v_res_1326_ = l_Lean_ofExcept___at___00Lean_evalConst___at___00Lean_Meta_nativeEqTrue_spec__2_spec__2(v_00_u03b1_1319_, v_x_1320_, v___y_1321_, v___y_1322_, v___y_1323_, v___y_1324_);
lean_dec(v___y_1324_);
lean_dec_ref(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v___y_1321_);
return v_res_1326_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_Options(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectLevelParams(uint8_t builtin);
lean_object* initialize_Lean_Elab_DeclarationRange(uint8_t builtin);
lean_object* initialize_Lean_Compiler_Options(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Native(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectLevelParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_DeclarationRange(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_Options(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Native(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Native(builtin);
}
#ifdef __cplusplus
}
#endif
