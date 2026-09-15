// Lean compiler output
// Module: Lean.Compiler.LCNF.ToMono
// Imports: public import Lean.Compiler.ImplementedByAttr public import Lean.Compiler.LCNF.InferType public import Lean.Compiler.NoncomputableAttr public import Lean.Compiler.LCNF.MonoTypes import Init.While
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
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_anyExpr;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toMonoType(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_isTypeFormerType(lean_object*);
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_FVarIdHashSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_isErased(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedLetValue_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
lean_object* l_Lean_Compiler_getImplementedBy_x3f(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_ctorAppToMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_ctorAppToMono___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__7 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__8 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__9 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__9_value;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__10;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Quot"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mk"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(255, 113, 137, 82, 82, 132, 58, 248)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lcInv"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(91, 127, 250, 116, 111, 99, 160, 200)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__3_value),LEAN_SCALAR_PTR_LITERAL(246, 129, 23, 78, 51, 209, 87, 155)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(51, 81, 163, 94, 71, 156, 90, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "succ"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__8_value),LEAN_SCALAR_PTR_LITERAL(93, 165, 73, 246, 125, 40, 156, 223)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.Compiler.LCNF.ToMono"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.LetValue.toMono"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__11_value;
static const lean_string_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__12_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__13;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__14_value)}};
static const lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Lean.Compiler.LCNF.mkFieldParamsForComputedFields"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object*);
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateFunImp"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "expected inductive type"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Lean.Compiler.LCNF.Code.toMono"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_Code_toMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__5;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__5_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "add"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(210, 189, 86, 121, 130, 22, 242, 236)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "UInt8"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__8_value),LEAN_SCALAR_PTR_LITERAL(144, 254, 64, 72, 7, 99, 197, 218)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt16"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__10_value),LEAN_SCALAR_PTR_LITERAL(6, 214, 154, 233, 192, 74, 99, 135)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__11_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt32"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__12_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__12_value),LEAN_SCALAR_PTR_LITERAL(98, 192, 58, 241, 186, 14, 255, 186)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__13_value;
static const lean_string_object l_Lean_Compiler_LCNF_Code_toMono___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "UInt64"};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__14_value),LEAN_SCALAR_PTR_LITERAL(58, 113, 45, 150, 103, 228, 0, 41)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__15_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__16_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "ByteArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 14, 5, 86, 33, 2, 113, 205)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__17_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "FloatArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 8, 149, 159, 140, 65, 145, 29)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__18 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__18_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "String"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__19 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__19_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Float"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__20 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__20_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Float32"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__21 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__21_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Thunk"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 24, 139, 128, 157, 117, 211, 220)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__22 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__22_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Task"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Code_toMono___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 131, 95, 48, 7, 243, 177, 18)}};
static const lean_object* l_Lean_Compiler_LCNF_Code_toMono___closed__23 = (const lean_object*)&l_Lean_Compiler_LCNF_Code_toMono___closed__23_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "assertion violation: c.alts.size == 1\n  "};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Lean.Compiler.LCNF.trivialStructToMono"};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "assertion violation: ctorName == info.ctorName\n  "};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__3;
static const lean_string_object l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "assertion violation: info.fieldIdx < ps.size\n  "};
static const lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_trivialStructToMono___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_impl"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__3_value),LEAN_SCALAR_PTR_LITERAL(130, 78, 106, 49, 240, 167, 66, 80)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "expected constructor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object*, uint8_t, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.casesTaskToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "get"};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(189, 131, 95, 48, 7, 243, 177, 18)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(19, 166, 147, 197, 228, 63, 159, 146)}};
static const lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesThunkToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(85, 24, 139, 128, 157, 117, 211, 220)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(27, 110, 84, 99, 226, 14, 63, 127)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "PUnit"};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(23, 153, 158, 141, 176, 162, 235, 153)}};
static const lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "Lean.Compiler.LCNF.casesFloat32ToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "toModel"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(246, 232, 182, 48, 64, 193, 160, 231)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(100, 9, 102, 51, 239, 149, 150, 6)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesFloatToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(56, 69, 114, 85, 163, 177, 220, 67)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(34, 196, 85, 139, 247, 89, 238, 57)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Lean.Compiler.LCNF.casesStringToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "toByteArray"};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(6, 130, 56, 8, 41, 104, 134, 43)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(162, 189, 23, 98, 222, 233, 190, 57)}};
static const lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "Lean.Compiler.LCNF.casesFloatArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "data"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(159, 8, 149, 159, 140, 65, 145, 29)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(81, 91, 150, 235, 33, 239, 26, 16)}};
static const lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Compiler.LCNF.casesByteArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(16, 14, 5, 86, 33, 2, 113, 205)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(106, 177, 159, 83, 171, 235, 26, 160)}};
static const lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.Compiler.LCNF.casesArrayToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toList"};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(236, 208, 194, 233, 254, 64, 157, 114)}};
static const lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "Lean.Compiler.LCNF.casesUIntToMono"};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2;
static const lean_string_object l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "toBitVec"};
static const lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(64, 77, 91, 107, 150, 196, 51, 157)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "intZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(175, 223, 173, 123, 47, 34, 50, 67)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(192, 66, 133, 102, 95, 170, 134, 92)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "isNeg"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(104, 77, 119, 5, 20, 206, 20, 211)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Bool"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7;
static const lean_string_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decLt"};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(168, 105, 33, 134, 172, 206, 181, 195)}};
static const lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "negSucc"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 236, 205, 0, 179, 53, 99, 201)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natAbs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__2_value),LEAN_SCALAR_PTR_LITERAL(255, 186, 174, 182, 213, 167, 94, 168)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__9_value),LEAN_SCALAR_PTR_LITERAL(117, 151, 161, 190, 111, 237, 188, 218)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "abs"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__4_value),LEAN_SCALAR_PTR_LITERAL(11, 180, 28, 55, 197, 20, 206, 35)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__3_value),LEAN_SCALAR_PTR_LITERAL(167, 166, 239, 19, 130, 98, 40, 185)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "sub"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__7_value),LEAN_SCALAR_PTR_LITERAL(9, 137, 41, 185, 216, 152, 145, 196)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(250, 44, 198, 216, 184, 195, 199, 178)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__0_value),LEAN_SCALAR_PTR_LITERAL(22, 245, 194, 28, 184, 9, 113, 128)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__6_value),LEAN_SCALAR_PTR_LITERAL(147, 155, 141, 233, 87, 0, 52, 207)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isZero"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(65, 194, 46, 57, 180, 54, 219, 130)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "decEq"};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_LetValue_toMono___closed__5_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(13, 188, 70, 193, 211, 173, 121, 176)}};
static const lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Code_toMono___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_toMono___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_toMono___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_toMono___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_toMono___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_toMono___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_toMono___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_toMono___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "toMono"};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toMono___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 72, 84, 185, 246, 162, 165, 228)}};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_toMono___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 8, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__0_value),LEAN_SCALAR_PTR_LITERAL(0, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_toMono___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__3_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_toMono = (const lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_toMono___closed__1_value),LEAN_SCALAR_PTR_LITERAL(209, 219, 170, 209, 222, 12, 94, 82)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ToMono"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(206, 213, 106, 42, 86, 241, 124, 56)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(247, 243, 51, 59, 0, 163, 178, 192)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 36, 50, 250, 127, 60, 38, 40)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(88, 144, 253, 182, 89, 128, 119, 217)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 161, 241, 253, 80, 60, 193, 46)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(104, 59, 249, 219, 158, 31, 128, 205)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(25, 27, 53, 217, 235, 25, 86, 66)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(252, 41, 14, 40, 231, 191, 209, 206)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(166, 25, 250, 149, 42, 149, 98, 101)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(111, 16, 206, 127, 24, 211, 135, 93)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(120, 134, 59, 125, 71, 39, 210, 179)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1770774466) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(203, 42, 10, 85, 186, 109, 216, 155)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(48, 197, 191, 160, 255, 168, 81, 88)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(52, 210, 128, 230, 105, 208, 140, 127)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(141, 169, 189, 240, 156, 89, 230, 119)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object* v_param_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v_fvarId_7_; lean_object* v_type_8_; lean_object* v___y_10_; lean_object* v___y_11_; lean_object* v___y_12_; uint8_t v___x_25_; 
v_fvarId_7_ = lean_ctor_get(v_param_1_, 0);
v_type_8_ = lean_ctor_get(v_param_1_, 2);
lean_inc_ref(v_type_8_);
v___x_25_ = l_Lean_Compiler_LCNF_isTypeFormerType(v_type_8_);
if (v___x_25_ == 0)
{
v___y_10_ = v___y_3_;
v___y_11_ = v___y_4_;
v___y_12_ = v___y_5_;
goto v___jp_9_;
}
else
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = lean_st_ref_take(v___y_2_);
lean_inc(v_fvarId_7_);
v___x_27_ = l_Lean_FVarIdHashSet_insert(v___x_26_, v_fvarId_7_);
v___x_28_ = lean_st_ref_put(v___y_2_, v___x_27_);
v___y_10_ = v___y_3_;
v___y_11_ = v___y_4_;
v___y_12_ = v___y_5_;
goto v___jp_9_;
}
v___jp_9_:
{
lean_object* v___x_13_; 
lean_inc_ref(v_type_8_);
v___x_13_ = l_Lean_Compiler_LCNF_toMonoType(v_type_8_, v___y_11_, v___y_12_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; uint8_t v___x_15_; lean_object* v___x_16_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v___x_13_, 1);
v___x_15_ = 0;
v___x_16_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v___x_15_, v_param_1_, v_a_14_, v___y_10_);
return v___x_16_;
}
else
{
lean_object* v_a_17_; lean_object* v___x_19_; uint8_t v_isShared_20_; uint8_t v_isSharedCheck_24_; 
lean_dec_ref(v_param_1_);
v_a_17_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_24_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_24_ == 0)
{
v___x_19_ = v___x_13_;
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
else
{
lean_inc(v_a_17_);
lean_dec(v___x_13_);
v___x_19_ = lean_box(0);
v_isShared_20_ = v_isSharedCheck_24_;
goto v_resetjp_18_;
}
v_resetjp_18_:
{
lean_object* v___x_22_; 
if (v_isShared_20_ == 0)
{
v___x_22_ = v___x_19_;
goto v_reusejp_21_;
}
else
{
lean_object* v_reuseFailAlloc_23_; 
v_reuseFailAlloc_23_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_23_, 0, v_a_17_);
v___x_22_ = v_reuseFailAlloc_23_;
goto v_reusejp_21_;
}
v_reusejp_21_:
{
return v___x_22_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object* v_param_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_29_, v___y_30_, v___y_31_, v___y_32_, v___y_33_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
lean_dec(v___y_31_);
lean_dec(v___y_30_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object* v_param_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_36_, v___y_37_, v___y_39_, v___y_40_, v___y_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object* v_param_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Compiler_LCNF_Param_toMono(v_param_44_, v___y_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object* v_arg_52_, lean_object* v___y_53_){
_start:
{
if (lean_obj_tag(v_arg_52_) == 1)
{
lean_object* v_fvarId_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v_fvarId_55_ = lean_ctor_get(v_arg_52_, 0);
v___x_56_ = lean_st_ref_get(v___y_53_);
v___x_57_ = l_Lean_FVarIdHashSet_contains(v___x_56_, v_fvarId_55_);
lean_dec(v___x_56_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; 
v___x_58_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_58_, 0, v_arg_52_);
return v___x_58_;
}
else
{
lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_66_; 
v_isSharedCheck_66_ = !lean_is_exclusive(v_arg_52_);
if (v_isSharedCheck_66_ == 0)
{
lean_object* v_unused_67_; 
v_unused_67_ = lean_ctor_get(v_arg_52_, 0);
lean_dec(v_unused_67_);
v___x_60_ = v_arg_52_;
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
else
{
lean_dec(v_arg_52_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_66_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_64_; 
v___x_62_ = lean_box(0);
if (v_isShared_61_ == 0)
{
lean_ctor_set_tag(v___x_60_, 0);
lean_ctor_set(v___x_60_, 0, v___x_62_);
v___x_64_ = v___x_60_;
goto v_reusejp_63_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_62_);
v___x_64_ = v_reuseFailAlloc_65_;
goto v_reusejp_63_;
}
v_reusejp_63_:
{
return v___x_64_;
}
}
}
}
else
{
lean_object* v___x_68_; lean_object* v___x_69_; 
lean_dec(v_arg_52_);
v___x_68_ = lean_box(0);
v___x_69_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_69_, 0, v___x_68_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object* v_arg_70_, lean_object* v___y_71_, lean_object* v___y_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_Compiler_LCNF_argToMono___redArg(v_arg_70_, v___y_71_);
lean_dec(v___y_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object* v_arg_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_){
_start:
{
if (lean_obj_tag(v_arg_74_) == 1)
{
lean_object* v_fvarId_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v_fvarId_81_ = lean_ctor_get(v_arg_74_, 0);
v___x_82_ = lean_st_ref_get(v___y_75_);
v___x_83_ = l_Lean_FVarIdHashSet_contains(v___x_82_, v_fvarId_81_);
lean_dec(v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_84_, 0, v_arg_74_);
return v___x_84_;
}
else
{
lean_object* v___x_86_; uint8_t v_isShared_87_; uint8_t v_isSharedCheck_92_; 
v_isSharedCheck_92_ = !lean_is_exclusive(v_arg_74_);
if (v_isSharedCheck_92_ == 0)
{
lean_object* v_unused_93_; 
v_unused_93_ = lean_ctor_get(v_arg_74_, 0);
lean_dec(v_unused_93_);
v___x_86_ = v_arg_74_;
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
else
{
lean_dec(v_arg_74_);
v___x_86_ = lean_box(0);
v_isShared_87_ = v_isSharedCheck_92_;
goto v_resetjp_85_;
}
v_resetjp_85_:
{
lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_88_ = lean_box(0);
if (v_isShared_87_ == 0)
{
lean_ctor_set_tag(v___x_86_, 0);
lean_ctor_set(v___x_86_, 0, v___x_88_);
v___x_90_ = v___x_86_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
else
{
lean_object* v___x_94_; lean_object* v___x_95_; 
lean_dec(v_arg_74_);
v___x_94_ = lean_box(0);
v___x_95_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
return v___x_95_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object* v_arg_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Compiler_LCNF_argToMono(v_arg_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, v___y_101_);
lean_dec(v___y_101_);
lean_dec_ref(v___y_100_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
return v_res_103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(lean_object* v_as_104_, size_t v_sz_105_, size_t v_i_106_, lean_object* v_b_107_, lean_object* v___y_108_){
_start:
{
uint8_t v___x_110_; 
v___x_110_ = lean_usize_dec_lt(v_i_106_, v_sz_105_);
if (v___x_110_ == 0)
{
lean_object* v___x_111_; 
v___x_111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_111_, 0, v_b_107_);
return v___x_111_;
}
else
{
lean_object* v_fst_112_; lean_object* v_snd_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_153_; 
v_fst_112_ = lean_ctor_get(v_b_107_, 0);
v_snd_113_ = lean_ctor_get(v_b_107_, 1);
v_isSharedCheck_153_ = !lean_is_exclusive(v_b_107_);
if (v_isSharedCheck_153_ == 0)
{
v___x_115_ = v_b_107_;
v_isShared_116_ = v_isSharedCheck_153_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_snd_113_);
lean_inc(v_fst_112_);
lean_dec(v_b_107_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_153_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v_monoArg_118_; lean_object* v_remainingType_119_; lean_object* v_a_127_; lean_object* v___y_129_; 
v_a_127_ = lean_array_uget_borrowed(v_as_104_, v_i_106_);
if (lean_obj_tag(v_fst_112_) == 1)
{
lean_object* v_val_136_; lean_object* v___x_138_; uint8_t v_isShared_139_; uint8_t v_isSharedCheck_152_; 
v_val_136_ = lean_ctor_get(v_fst_112_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v_fst_112_);
if (v_isSharedCheck_152_ == 0)
{
v___x_138_ = v_fst_112_;
v_isShared_139_ = v_isSharedCheck_152_;
goto v_resetjp_137_;
}
else
{
lean_inc(v_val_136_);
lean_dec(v_fst_112_);
v___x_138_ = lean_box(0);
v_isShared_139_ = v_isSharedCheck_152_;
goto v_resetjp_137_;
}
v_resetjp_137_:
{
if (lean_obj_tag(v_val_136_) == 7)
{
lean_object* v_binderType_140_; lean_object* v_body_141_; lean_object* v___x_143_; 
v_binderType_140_ = lean_ctor_get(v_val_136_, 1);
lean_inc_ref(v_binderType_140_);
v_body_141_ = lean_ctor_get(v_val_136_, 2);
lean_inc_ref(v_body_141_);
lean_dec_ref_known(v_val_136_, 3);
if (v_isShared_139_ == 0)
{
lean_ctor_set(v___x_138_, 0, v_body_141_);
v___x_143_ = v___x_138_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_body_141_);
v___x_143_ = v_reuseFailAlloc_151_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
uint8_t v___x_144_; 
v___x_144_ = l_Lean_Expr_isErased(v_binderType_140_);
lean_dec_ref(v_binderType_140_);
if (v___x_144_ == 0)
{
if (lean_obj_tag(v_a_127_) == 1)
{
lean_object* v_fvarId_145_; lean_object* v___x_146_; uint8_t v___x_147_; 
v_fvarId_145_ = lean_ctor_get(v_a_127_, 0);
v___x_146_ = lean_st_ref_get(v___y_108_);
v___x_147_ = l_Lean_FVarIdHashSet_contains(v___x_146_, v_fvarId_145_);
lean_dec(v___x_146_);
if (v___x_147_ == 0)
{
lean_inc_ref(v_a_127_);
v_monoArg_118_ = v_a_127_;
v_remainingType_119_ = v___x_143_;
goto v___jp_117_;
}
else
{
lean_object* v___x_148_; 
v___x_148_ = lean_box(0);
v_monoArg_118_ = v___x_148_;
v_remainingType_119_ = v___x_143_;
goto v___jp_117_;
}
}
else
{
lean_object* v___x_149_; 
v___x_149_ = lean_box(0);
v_monoArg_118_ = v___x_149_;
v_remainingType_119_ = v___x_143_;
goto v___jp_117_;
}
}
else
{
lean_object* v___x_150_; 
v___x_150_ = lean_box(0);
v_monoArg_118_ = v___x_150_;
v_remainingType_119_ = v___x_143_;
goto v___jp_117_;
}
}
}
else
{
lean_del_object(v___x_138_);
lean_dec(v_val_136_);
v___y_129_ = v___y_108_;
goto v___jp_128_;
}
}
}
else
{
lean_dec(v_fst_112_);
v___y_129_ = v___y_108_;
goto v___jp_128_;
}
v___jp_117_:
{
lean_object* v___x_120_; lean_object* v___x_122_; 
v___x_120_ = lean_array_push(v_snd_113_, v_monoArg_118_);
if (v_isShared_116_ == 0)
{
lean_ctor_set(v___x_115_, 1, v___x_120_);
lean_ctor_set(v___x_115_, 0, v_remainingType_119_);
v___x_122_ = v___x_115_;
goto v_reusejp_121_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_remainingType_119_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___x_120_);
v___x_122_ = v_reuseFailAlloc_126_;
goto v_reusejp_121_;
}
v_reusejp_121_:
{
size_t v___x_123_; size_t v___x_124_; 
v___x_123_ = ((size_t)1ULL);
v___x_124_ = lean_usize_add(v_i_106_, v___x_123_);
v_i_106_ = v___x_124_;
v_b_107_ = v___x_122_;
goto _start;
}
}
v___jp_128_:
{
lean_object* v___x_130_; 
v___x_130_ = lean_box(0);
if (lean_obj_tag(v_a_127_) == 1)
{
lean_object* v_fvarId_131_; lean_object* v___x_132_; uint8_t v___x_133_; 
v_fvarId_131_ = lean_ctor_get(v_a_127_, 0);
v___x_132_ = lean_st_ref_get(v___y_129_);
v___x_133_ = l_Lean_FVarIdHashSet_contains(v___x_132_, v_fvarId_131_);
lean_dec(v___x_132_);
if (v___x_133_ == 0)
{
lean_inc_ref(v_a_127_);
v_monoArg_118_ = v_a_127_;
v_remainingType_119_ = v___x_130_;
goto v___jp_117_;
}
else
{
lean_object* v___x_134_; 
v___x_134_ = lean_box(0);
v_monoArg_118_ = v___x_134_;
v_remainingType_119_ = v___x_130_;
goto v___jp_117_;
}
}
else
{
lean_object* v___x_135_; 
v___x_135_ = lean_box(0);
v_monoArg_118_ = v___x_135_;
v_remainingType_119_ = v___x_130_;
goto v___jp_117_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg___boxed(lean_object* v_as_154_, lean_object* v_sz_155_, lean_object* v_i_156_, lean_object* v_b_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
size_t v_sz_boxed_160_; size_t v_i_boxed_161_; lean_object* v_res_162_; 
v_sz_boxed_160_ = lean_unbox_usize(v_sz_155_);
lean_dec(v_sz_155_);
v_i_boxed_161_ = lean_unbox_usize(v_i_156_);
lean_dec(v_i_156_);
v_res_162_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_as_154_, v_sz_boxed_160_, v_i_boxed_161_, v_b_157_, v___y_158_);
lean_dec(v___y_158_);
lean_dec_ref(v_as_154_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object* v_args_163_, lean_object* v_type_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_remainingType_171_; lean_object* v___x_172_; lean_object* v_result_173_; lean_object* v___x_174_; size_t v_sz_175_; size_t v___x_176_; lean_object* v___x_177_; 
v_remainingType_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_remainingType_171_, 0, v_type_164_);
v___x_172_ = lean_array_get_size(v_args_163_);
v_result_173_ = lean_mk_empty_array_with_capacity(v___x_172_);
v___x_174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_174_, 0, v_remainingType_171_);
lean_ctor_set(v___x_174_, 1, v_result_173_);
v_sz_175_ = lean_array_size(v_args_163_);
v___x_176_ = ((size_t)0ULL);
v___x_177_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_args_163_, v_sz_175_, v___x_176_, v___x_174_, v___y_165_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_186_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_186_ == 0)
{
v___x_180_ = v___x_177_;
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_177_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_186_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
lean_object* v_snd_182_; lean_object* v___x_184_; 
v_snd_182_ = lean_ctor_get(v_a_178_, 1);
lean_inc(v_snd_182_);
lean_dec(v_a_178_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v_snd_182_);
v___x_184_ = v___x_180_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_snd_182_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
}
else
{
lean_object* v_a_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_194_; 
v_a_187_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_194_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_194_ == 0)
{
v___x_189_ = v___x_177_;
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_a_187_);
lean_dec(v___x_177_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_194_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_192_; 
if (v_isShared_190_ == 0)
{
v___x_192_ = v___x_189_;
goto v_reusejp_191_;
}
else
{
lean_object* v_reuseFailAlloc_193_; 
v_reuseFailAlloc_193_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_193_, 0, v_a_187_);
v___x_192_ = v_reuseFailAlloc_193_;
goto v_reusejp_191_;
}
v_reusejp_191_:
{
return v___x_192_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object* v_args_195_, lean_object* v_type_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_195_, v_type_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_, v___y_201_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec(v___y_199_);
lean_dec_ref(v___y_198_);
lean_dec(v___y_197_);
lean_dec_ref(v_args_195_);
return v_res_203_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(lean_object* v_as_204_, size_t v_sz_205_, size_t v_i_206_, lean_object* v_b_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; 
v___x_214_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_as_204_, v_sz_205_, v_i_206_, v_b_207_, v___y_208_);
return v___x_214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___boxed(lean_object* v_as_215_, lean_object* v_sz_216_, lean_object* v_i_217_, lean_object* v_b_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_, lean_object* v___y_224_){
_start:
{
size_t v_sz_boxed_225_; size_t v_i_boxed_226_; lean_object* v_res_227_; 
v_sz_boxed_225_ = lean_unbox_usize(v_sz_216_);
lean_dec(v_sz_216_);
v_i_boxed_226_ = lean_unbox_usize(v_i_217_);
lean_dec(v_i_217_);
v_res_227_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0(v_as_215_, v_sz_boxed_225_, v_i_boxed_226_, v_b_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_, v___y_223_);
lean_dec(v___y_223_);
lean_dec_ref(v___y_222_);
lean_dec(v___y_221_);
lean_dec_ref(v___y_220_);
lean_dec(v___y_219_);
lean_dec_ref(v_as_215_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(lean_object* v_a_228_, lean_object* v_b_229_){
_start:
{
lean_object* v_array_230_; lean_object* v_start_231_; lean_object* v_stop_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_245_; 
v_array_230_ = lean_ctor_get(v_a_228_, 0);
v_start_231_ = lean_ctor_get(v_a_228_, 1);
v_stop_232_ = lean_ctor_get(v_a_228_, 2);
v_isSharedCheck_245_ = !lean_is_exclusive(v_a_228_);
if (v_isSharedCheck_245_ == 0)
{
v___x_234_ = v_a_228_;
v_isShared_235_ = v_isSharedCheck_245_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_stop_232_);
lean_inc(v_start_231_);
lean_inc(v_array_230_);
lean_dec(v_a_228_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_245_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
uint8_t v___x_236_; 
v___x_236_ = lean_nat_dec_lt(v_start_231_, v_stop_232_);
if (v___x_236_ == 0)
{
lean_del_object(v___x_234_);
lean_dec(v_stop_232_);
lean_dec(v_start_231_);
lean_dec_ref(v_array_230_);
return v_b_229_;
}
else
{
lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_240_; 
v___x_237_ = lean_unsigned_to_nat(1u);
v___x_238_ = lean_nat_add(v_start_231_, v___x_237_);
lean_inc_ref(v_array_230_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 1, v___x_238_);
v___x_240_ = v___x_234_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_array_230_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v___x_238_);
lean_ctor_set(v_reuseFailAlloc_244_, 2, v_stop_232_);
v___x_240_ = v_reuseFailAlloc_244_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
lean_object* v___x_241_; lean_object* v___x_242_; 
v___x_241_ = lean_array_fget(v_array_230_, v_start_231_);
lean_dec(v_start_231_);
lean_dec_ref(v_array_230_);
v___x_242_ = lean_array_push(v_b_229_, v___x_241_);
v_a_228_ = v___x_240_;
v_b_229_ = v___x_242_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(size_t v_sz_246_, size_t v_i_247_, lean_object* v_bs_248_, lean_object* v___y_249_){
_start:
{
uint8_t v___x_251_; 
v___x_251_ = lean_usize_dec_lt(v_i_247_, v_sz_246_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; 
v___x_252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_252_, 0, v_bs_248_);
return v___x_252_;
}
else
{
lean_object* v_v_253_; lean_object* v___x_254_; lean_object* v_bs_x27_255_; lean_object* v_a_257_; 
v_v_253_ = lean_array_uget(v_bs_248_, v_i_247_);
v___x_254_ = lean_unsigned_to_nat(0u);
v_bs_x27_255_ = lean_array_uset(v_bs_248_, v_i_247_, v___x_254_);
if (lean_obj_tag(v_v_253_) == 1)
{
lean_object* v_fvarId_262_; lean_object* v___x_263_; uint8_t v___x_264_; 
v_fvarId_262_ = lean_ctor_get(v_v_253_, 0);
v___x_263_ = lean_st_ref_get(v___y_249_);
v___x_264_ = l_Lean_FVarIdHashSet_contains(v___x_263_, v_fvarId_262_);
lean_dec(v___x_263_);
if (v___x_264_ == 0)
{
v_a_257_ = v_v_253_;
goto v___jp_256_;
}
else
{
lean_object* v___x_265_; 
lean_dec_ref_known(v_v_253_, 1);
v___x_265_ = lean_box(0);
v_a_257_ = v___x_265_;
goto v___jp_256_;
}
}
else
{
lean_object* v___x_266_; 
lean_dec(v_v_253_);
v___x_266_ = lean_box(0);
v_a_257_ = v___x_266_;
goto v___jp_256_;
}
v___jp_256_:
{
size_t v___x_258_; size_t v___x_259_; lean_object* v___x_260_; 
v___x_258_ = ((size_t)1ULL);
v___x_259_ = lean_usize_add(v_i_247_, v___x_258_);
v___x_260_ = lean_array_uset(v_bs_x27_255_, v_i_247_, v_a_257_);
v_i_247_ = v___x_259_;
v_bs_248_ = v___x_260_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg___boxed(lean_object* v_sz_267_, lean_object* v_i_268_, lean_object* v_bs_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
size_t v_sz_boxed_272_; size_t v_i_boxed_273_; lean_object* v_res_274_; 
v_sz_boxed_272_ = lean_unbox_usize(v_sz_267_);
lean_dec(v_sz_267_);
v_i_boxed_273_ = lean_unbox_usize(v_i_268_);
lean_dec(v_i_268_);
v_res_274_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_boxed_272_, v_i_boxed_273_, v_bs_269_, v___y_270_);
lean_dec(v___y_270_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object* v_ctorInfo_277_, lean_object* v_args_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v_toConstantVal_285_; lean_object* v_numParams_286_; lean_object* v___x_287_; lean_object* v_argsNewParams_288_; lean_object* v_lower_290_; lean_object* v_upper_291_; lean_object* v___x_326_; lean_object* v___x_327_; uint8_t v___x_328_; 
v_toConstantVal_285_ = lean_ctor_get(v_ctorInfo_277_, 0);
lean_inc_ref(v_toConstantVal_285_);
v_numParams_286_ = lean_ctor_get(v_ctorInfo_277_, 3);
lean_inc_n(v_numParams_286_, 2);
lean_dec_ref(v_ctorInfo_277_);
v___x_287_ = lean_box(0);
v_argsNewParams_288_ = lean_mk_array(v_numParams_286_, v___x_287_);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_array_get_size(v_args_278_);
v___x_328_ = lean_nat_dec_le(v_numParams_286_, v___x_326_);
if (v___x_328_ == 0)
{
v_lower_290_ = v_numParams_286_;
v_upper_291_ = v___x_327_;
goto v___jp_289_;
}
else
{
lean_dec(v_numParams_286_);
v_lower_290_ = v___x_326_;
v_upper_291_ = v___x_327_;
goto v___jp_289_;
}
v___jp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; size_t v_sz_295_; size_t v___x_296_; lean_object* v___x_297_; 
v___x_292_ = l_Array_toSubarray___redArg(v_args_278_, v_lower_290_, v_upper_291_);
v___x_293_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_294_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v___x_292_, v___x_293_);
v_sz_295_ = lean_array_size(v___x_294_);
v___x_296_ = ((size_t)0ULL);
v___x_297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_295_, v___x_296_, v___x_294_, v___y_279_);
if (lean_obj_tag(v___x_297_) == 0)
{
lean_object* v_a_298_; lean_object* v___x_300_; uint8_t v_isShared_301_; uint8_t v_isSharedCheck_317_; 
v_a_298_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_317_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_317_ == 0)
{
v___x_300_ = v___x_297_;
v_isShared_301_ = v_isSharedCheck_317_;
goto v_resetjp_299_;
}
else
{
lean_inc(v_a_298_);
lean_dec(v___x_297_);
v___x_300_ = lean_box(0);
v_isShared_301_ = v_isSharedCheck_317_;
goto v_resetjp_299_;
}
v_resetjp_299_:
{
lean_object* v_name_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_314_; 
v_name_302_ = lean_ctor_get(v_toConstantVal_285_, 0);
v_isSharedCheck_314_ = !lean_is_exclusive(v_toConstantVal_285_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; lean_object* v_unused_316_; 
v_unused_315_ = lean_ctor_get(v_toConstantVal_285_, 2);
lean_dec(v_unused_315_);
v_unused_316_ = lean_ctor_get(v_toConstantVal_285_, 1);
lean_dec(v_unused_316_);
v___x_304_ = v_toConstantVal_285_;
v_isShared_305_ = v_isSharedCheck_314_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_name_302_);
lean_dec(v_toConstantVal_285_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_314_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_309_; 
v___x_306_ = l_Array_append___redArg(v_argsNewParams_288_, v_a_298_);
lean_dec(v_a_298_);
v___x_307_ = lean_box(0);
if (v_isShared_305_ == 0)
{
lean_ctor_set_tag(v___x_304_, 3);
lean_ctor_set(v___x_304_, 2, v___x_306_);
lean_ctor_set(v___x_304_, 1, v___x_307_);
v___x_309_ = v___x_304_;
goto v_reusejp_308_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v_name_302_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___x_307_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v___x_306_);
v___x_309_ = v_reuseFailAlloc_313_;
goto v_reusejp_308_;
}
v_reusejp_308_:
{
lean_object* v___x_311_; 
if (v_isShared_301_ == 0)
{
lean_ctor_set(v___x_300_, 0, v___x_309_);
v___x_311_ = v___x_300_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_309_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
}
else
{
lean_object* v_a_318_; lean_object* v___x_320_; uint8_t v_isShared_321_; uint8_t v_isSharedCheck_325_; 
lean_dec_ref(v_argsNewParams_288_);
lean_dec_ref(v_toConstantVal_285_);
v_a_318_ = lean_ctor_get(v___x_297_, 0);
v_isSharedCheck_325_ = !lean_is_exclusive(v___x_297_);
if (v_isSharedCheck_325_ == 0)
{
v___x_320_ = v___x_297_;
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
else
{
lean_inc(v_a_318_);
lean_dec(v___x_297_);
v___x_320_ = lean_box(0);
v_isShared_321_ = v_isSharedCheck_325_;
goto v_resetjp_319_;
}
v_resetjp_319_:
{
lean_object* v___x_323_; 
if (v_isShared_321_ == 0)
{
v___x_323_ = v___x_320_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_324_; 
v_reuseFailAlloc_324_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_324_, 0, v_a_318_);
v___x_323_ = v_reuseFailAlloc_324_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
return v___x_323_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object* v_ctorInfo_329_, lean_object* v_args_330_, lean_object* v___y_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_ctorInfo_329_, v_args_330_, v___y_331_, v___y_332_, v___y_333_, v___y_334_, v___y_335_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec(v___y_333_);
lean_dec_ref(v___y_332_);
lean_dec(v___y_331_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0(lean_object* v_inst_338_, lean_object* v_R_339_, lean_object* v_a_340_, lean_object* v_b_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = l___private_Init_WFExtrinsicFix_0__WellFounded_opaqueFix_u2082___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__0___redArg(v_a_340_, v_b_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(size_t v_sz_343_, size_t v_i_344_, lean_object* v_bs_345_, lean_object* v___y_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
lean_object* v___x_352_; 
v___x_352_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_343_, v_i_344_, v_bs_345_, v___y_346_);
return v___x_352_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___boxed(lean_object* v_sz_353_, lean_object* v_i_354_, lean_object* v_bs_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_, lean_object* v___y_361_){
_start:
{
size_t v_sz_boxed_362_; size_t v_i_boxed_363_; lean_object* v_res_364_; 
v_sz_boxed_362_ = lean_unbox_usize(v_sz_353_);
lean_dec(v_sz_353_);
v_i_boxed_363_ = lean_unbox_usize(v_i_354_);
lean_dec(v_i_354_);
v_res_364_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1(v_sz_boxed_362_, v_i_boxed_363_, v_bs_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_, v___y_360_);
lean_dec(v___y_360_);
lean_dec_ref(v___y_359_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
return v_res_364_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__10(void){
_start:
{
lean_object* v___x_375_; 
v___x_375_ = l_Lean_Compiler_LCNF_instInhabitedLetValue_default___redArg();
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object* v_msg_376_, lean_object* v___y_377_, lean_object* v___y_378_, lean_object* v___y_379_, lean_object* v___y_380_, lean_object* v___y_381_){
_start:
{
lean_object* v___f_383_; lean_object* v___f_384_; lean_object* v___f_385_; lean_object* v___f_386_; lean_object* v___f_387_; lean_object* v___f_388_; lean_object* v___f_389_; lean_object* v___f_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v_toApplicative_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_457_; 
v___f_383_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0));
v___f_384_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_385_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
v___f_386_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_387_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
v___f_388_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_388_, 0, v___f_387_);
lean_closure_set(v___f_388_, 1, v___f_386_);
v___f_389_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_389_, 0, v___f_386_);
v___f_390_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5));
v___x_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_391_, 0, v___f_383_);
lean_ctor_set(v___x_391_, 1, v___f_384_);
v___x_392_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_392_, 0, v___x_391_);
lean_ctor_set(v___x_392_, 1, v___f_385_);
lean_ctor_set(v___x_392_, 2, v___f_388_);
lean_ctor_set(v___x_392_, 3, v___f_389_);
lean_ctor_set(v___x_392_, 4, v___f_390_);
v___x_393_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_392_);
lean_ctor_set(v___x_393_, 1, v___f_386_);
v___x_394_ = l_StateRefT_x27_instMonad___redArg(v___x_393_);
v_toApplicative_395_ = lean_ctor_get(v___x_394_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_394_);
if (v_isSharedCheck_457_ == 0)
{
lean_object* v_unused_458_; 
v_unused_458_ = lean_ctor_get(v___x_394_, 1);
lean_dec(v_unused_458_);
v___x_397_ = v___x_394_;
v_isShared_398_ = v_isSharedCheck_457_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_toApplicative_395_);
lean_dec(v___x_394_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_457_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v_toFunctor_399_; lean_object* v_toSeq_400_; lean_object* v_toSeqLeft_401_; lean_object* v_toSeqRight_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_455_; 
v_toFunctor_399_ = lean_ctor_get(v_toApplicative_395_, 0);
v_toSeq_400_ = lean_ctor_get(v_toApplicative_395_, 2);
v_toSeqLeft_401_ = lean_ctor_get(v_toApplicative_395_, 3);
v_toSeqRight_402_ = lean_ctor_get(v_toApplicative_395_, 4);
v_isSharedCheck_455_ = !lean_is_exclusive(v_toApplicative_395_);
if (v_isSharedCheck_455_ == 0)
{
lean_object* v_unused_456_; 
v_unused_456_ = lean_ctor_get(v_toApplicative_395_, 1);
lean_dec(v_unused_456_);
v___x_404_ = v_toApplicative_395_;
v_isShared_405_ = v_isSharedCheck_455_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_toSeqRight_402_);
lean_inc(v_toSeqLeft_401_);
lean_inc(v_toSeq_400_);
lean_inc(v_toFunctor_399_);
lean_dec(v_toApplicative_395_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_455_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___f_406_; lean_object* v___f_407_; lean_object* v___f_408_; lean_object* v___f_409_; lean_object* v___x_410_; lean_object* v___f_411_; lean_object* v___f_412_; lean_object* v___f_413_; lean_object* v___x_415_; 
v___f_406_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__6));
v___f_407_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__7));
lean_inc_ref(v_toFunctor_399_);
v___f_408_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_408_, 0, v_toFunctor_399_);
v___f_409_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_409_, 0, v_toFunctor_399_);
v___x_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_410_, 0, v___f_408_);
lean_ctor_set(v___x_410_, 1, v___f_409_);
v___f_411_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_411_, 0, v_toSeqRight_402_);
v___f_412_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_412_, 0, v_toSeqLeft_401_);
v___f_413_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_413_, 0, v_toSeq_400_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 4, v___f_411_);
lean_ctor_set(v___x_404_, 3, v___f_412_);
lean_ctor_set(v___x_404_, 2, v___f_413_);
lean_ctor_set(v___x_404_, 1, v___f_406_);
lean_ctor_set(v___x_404_, 0, v___x_410_);
v___x_415_ = v___x_404_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_454_; 
v_reuseFailAlloc_454_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_454_, 0, v___x_410_);
lean_ctor_set(v_reuseFailAlloc_454_, 1, v___f_406_);
lean_ctor_set(v_reuseFailAlloc_454_, 2, v___f_413_);
lean_ctor_set(v_reuseFailAlloc_454_, 3, v___f_412_);
lean_ctor_set(v_reuseFailAlloc_454_, 4, v___f_411_);
v___x_415_ = v_reuseFailAlloc_454_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
lean_object* v___x_417_; 
if (v_isShared_398_ == 0)
{
lean_ctor_set(v___x_397_, 1, v___f_407_);
lean_ctor_set(v___x_397_, 0, v___x_415_);
v___x_417_ = v___x_397_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v___x_415_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v___f_407_);
v___x_417_ = v_reuseFailAlloc_453_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
lean_object* v___x_418_; lean_object* v_toApplicative_419_; lean_object* v___x_421_; uint8_t v_isShared_422_; uint8_t v_isSharedCheck_451_; 
v___x_418_ = l_StateRefT_x27_instMonad___redArg(v___x_417_);
v_toApplicative_419_ = lean_ctor_get(v___x_418_, 0);
v_isSharedCheck_451_ = !lean_is_exclusive(v___x_418_);
if (v_isSharedCheck_451_ == 0)
{
lean_object* v_unused_452_; 
v_unused_452_ = lean_ctor_get(v___x_418_, 1);
lean_dec(v_unused_452_);
v___x_421_ = v___x_418_;
v_isShared_422_ = v_isSharedCheck_451_;
goto v_resetjp_420_;
}
else
{
lean_inc(v_toApplicative_419_);
lean_dec(v___x_418_);
v___x_421_ = lean_box(0);
v_isShared_422_ = v_isSharedCheck_451_;
goto v_resetjp_420_;
}
v_resetjp_420_:
{
lean_object* v_toFunctor_423_; lean_object* v_toSeq_424_; lean_object* v_toSeqLeft_425_; lean_object* v_toSeqRight_426_; lean_object* v___x_428_; uint8_t v_isShared_429_; uint8_t v_isSharedCheck_449_; 
v_toFunctor_423_ = lean_ctor_get(v_toApplicative_419_, 0);
v_toSeq_424_ = lean_ctor_get(v_toApplicative_419_, 2);
v_toSeqLeft_425_ = lean_ctor_get(v_toApplicative_419_, 3);
v_toSeqRight_426_ = lean_ctor_get(v_toApplicative_419_, 4);
v_isSharedCheck_449_ = !lean_is_exclusive(v_toApplicative_419_);
if (v_isSharedCheck_449_ == 0)
{
lean_object* v_unused_450_; 
v_unused_450_ = lean_ctor_get(v_toApplicative_419_, 1);
lean_dec(v_unused_450_);
v___x_428_ = v_toApplicative_419_;
v_isShared_429_ = v_isSharedCheck_449_;
goto v_resetjp_427_;
}
else
{
lean_inc(v_toSeqRight_426_);
lean_inc(v_toSeqLeft_425_);
lean_inc(v_toSeq_424_);
lean_inc(v_toFunctor_423_);
lean_dec(v_toApplicative_419_);
v___x_428_ = lean_box(0);
v_isShared_429_ = v_isSharedCheck_449_;
goto v_resetjp_427_;
}
v_resetjp_427_:
{
lean_object* v___f_430_; lean_object* v___f_431_; lean_object* v___f_432_; lean_object* v___f_433_; lean_object* v___x_434_; lean_object* v___f_435_; lean_object* v___f_436_; lean_object* v___f_437_; lean_object* v___x_439_; 
v___f_430_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__8));
v___f_431_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__9));
lean_inc_ref(v_toFunctor_423_);
v___f_432_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_432_, 0, v_toFunctor_423_);
v___f_433_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_433_, 0, v_toFunctor_423_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___f_432_);
lean_ctor_set(v___x_434_, 1, v___f_433_);
v___f_435_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_435_, 0, v_toSeqRight_426_);
v___f_436_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_436_, 0, v_toSeqLeft_425_);
v___f_437_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_437_, 0, v_toSeq_424_);
if (v_isShared_429_ == 0)
{
lean_ctor_set(v___x_428_, 4, v___f_435_);
lean_ctor_set(v___x_428_, 3, v___f_436_);
lean_ctor_set(v___x_428_, 2, v___f_437_);
lean_ctor_set(v___x_428_, 1, v___f_430_);
lean_ctor_set(v___x_428_, 0, v___x_434_);
v___x_439_ = v___x_428_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_448_; 
v_reuseFailAlloc_448_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_448_, 0, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_448_, 1, v___f_430_);
lean_ctor_set(v_reuseFailAlloc_448_, 2, v___f_437_);
lean_ctor_set(v_reuseFailAlloc_448_, 3, v___f_436_);
lean_ctor_set(v_reuseFailAlloc_448_, 4, v___f_435_);
v___x_439_ = v_reuseFailAlloc_448_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
lean_object* v___x_441_; 
if (v_isShared_422_ == 0)
{
lean_ctor_set(v___x_421_, 1, v___f_431_);
lean_ctor_set(v___x_421_, 0, v___x_439_);
v___x_441_ = v___x_421_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_439_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v___f_431_);
v___x_441_ = v_reuseFailAlloc_447_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_7256__overap_445_; lean_object* v___x_446_; 
v___x_442_ = l_StateRefT_x27_instMonad___redArg(v___x_441_);
v___x_443_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__10, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__10_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__10);
v___x_444_ = l_instInhabitedOfMonad___redArg(v___x_442_, v___x_443_);
v___x_7256__overap_445_ = lean_panic_fn_borrowed(v___x_444_, v_msg_376_);
lean_dec(v___x_444_);
lean_inc(v___y_381_);
lean_inc_ref(v___y_380_);
lean_inc(v___y_379_);
lean_inc_ref(v___y_378_);
lean_inc(v___y_377_);
v___x_446_ = lean_apply_6(v___x_7256__overap_445_, v___y_377_, v___y_378_, v___y_379_, v___y_380_, v___y_381_, lean_box(0));
return v___x_446_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object* v_msg_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v_msg_459_, v___y_460_, v___y_461_, v___y_462_, v___y_463_, v___y_464_);
lean_dec(v___y_464_);
lean_dec_ref(v___y_463_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object* v_upperBound_467_, lean_object* v_args_468_, lean_object* v_a_469_, lean_object* v_b_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_a_474_; uint8_t v___x_479_; 
v___x_479_ = lean_nat_dec_lt(v_a_469_, v_upperBound_467_);
if (v___x_479_ == 0)
{
lean_object* v___x_480_; 
lean_dec(v_a_469_);
v___x_480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_480_, 0, v_b_470_);
return v___x_480_;
}
else
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lean_box(0);
v___x_482_ = lean_array_get_borrowed(v___x_481_, v_args_468_, v_a_469_);
if (lean_obj_tag(v___x_482_) == 1)
{
lean_object* v_fvarId_483_; lean_object* v___x_484_; uint8_t v___x_485_; 
v_fvarId_483_ = lean_ctor_get(v___x_482_, 0);
v___x_484_ = lean_st_ref_get(v___y_471_);
v___x_485_ = l_Lean_FVarIdHashSet_contains(v___x_484_, v_fvarId_483_);
lean_dec(v___x_484_);
if (v___x_485_ == 0)
{
lean_inc_ref(v___x_482_);
v_a_474_ = v___x_482_;
goto v___jp_473_;
}
else
{
v_a_474_ = v___x_481_;
goto v___jp_473_;
}
}
else
{
v_a_474_ = v___x_481_;
goto v___jp_473_;
}
}
v___jp_473_:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = lean_array_push(v_b_470_, v_a_474_);
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_nat_add(v_a_469_, v___x_476_);
lean_dec(v_a_469_);
v_a_469_ = v___x_477_;
v_b_470_ = v___x_475_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object* v_upperBound_486_, lean_object* v_args_487_, lean_object* v_a_488_, lean_object* v_b_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
lean_object* v_res_492_; 
v_res_492_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_486_, v_args_487_, v_a_488_, v_b_489_, v___y_490_);
lean_dec(v___y_490_);
lean_dec_ref(v_args_487_);
lean_dec(v_upperBound_486_);
return v_res_492_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13(void){
_start:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; 
v___x_514_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_515_ = lean_unsigned_to_nat(6u);
v___x_516_ = lean_unsigned_to_nat(83u);
v___x_517_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__11));
v___x_518_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_519_ = l_mkPanicMessageWithDecl(v___x_518_, v___x_517_, v___x_516_, v___x_515_, v___x_514_);
return v___x_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object* v_e_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
switch(lean_obj_tag(v_e_524_))
{
case 2:
{
lean_object* v_typeName_531_; lean_object* v_idx_532_; lean_object* v_struct_533_; lean_object* v___x_534_; uint8_t v___x_535_; 
v_typeName_531_ = lean_ctor_get(v_e_524_, 0);
v_idx_532_ = lean_ctor_get(v_e_524_, 1);
v_struct_533_ = lean_ctor_get(v_e_524_, 2);
v___x_534_ = lean_st_ref_get(v___y_525_);
v___x_535_ = l_Lean_FVarIdHashSet_contains(v___x_534_, v_struct_533_);
lean_dec(v___x_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_536_; 
lean_inc(v_typeName_531_);
v___x_536_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_531_, v___y_528_, v___y_529_);
if (lean_obj_tag(v___x_536_) == 0)
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_556_; 
v_a_537_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_556_ == 0)
{
v___x_539_ = v___x_536_;
v_isShared_540_ = v_isSharedCheck_556_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_536_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_556_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
if (lean_obj_tag(v_a_537_) == 1)
{
lean_object* v_val_541_; lean_object* v_fieldIdx_542_; uint8_t v___x_543_; 
lean_inc(v_struct_533_);
lean_inc(v_idx_532_);
lean_dec_ref_known(v_e_524_, 3);
v_val_541_ = lean_ctor_get(v_a_537_, 0);
lean_inc(v_val_541_);
lean_dec_ref_known(v_a_537_, 1);
v_fieldIdx_542_ = lean_ctor_get(v_val_541_, 2);
lean_inc(v_fieldIdx_542_);
lean_dec(v_val_541_);
v___x_543_ = lean_nat_dec_eq(v_fieldIdx_542_, v_idx_532_);
lean_dec(v_idx_532_);
lean_dec(v_fieldIdx_542_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; lean_object* v___x_546_; 
lean_dec(v_struct_533_);
v___x_544_ = lean_box(1);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v___x_544_);
v___x_546_ = v___x_539_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v___x_544_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
else
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_551_; 
v___x_548_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_549_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_549_, 0, v_struct_533_);
lean_ctor_set(v___x_549_, 1, v___x_548_);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v___x_549_);
v___x_551_ = v___x_539_;
goto v_reusejp_550_;
}
else
{
lean_object* v_reuseFailAlloc_552_; 
v_reuseFailAlloc_552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_552_, 0, v___x_549_);
v___x_551_ = v_reuseFailAlloc_552_;
goto v_reusejp_550_;
}
v_reusejp_550_:
{
return v___x_551_;
}
}
}
else
{
lean_object* v___x_554_; 
lean_dec(v_a_537_);
if (v_isShared_540_ == 0)
{
lean_ctor_set(v___x_539_, 0, v_e_524_);
v___x_554_ = v___x_539_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_e_524_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref_known(v_e_524_, 3);
v_a_557_ = lean_ctor_get(v___x_536_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_536_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_536_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_536_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
else
{
lean_object* v___x_565_; lean_object* v___x_566_; 
lean_dec_ref_known(v_e_524_, 3);
v___x_565_ = lean_box(1);
v___x_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_566_, 0, v___x_565_);
return v___x_566_;
}
}
case 3:
{
lean_object* v_declName_567_; lean_object* v_args_568_; lean_object* v___x_570_; uint8_t v_isShared_571_; uint8_t v_isSharedCheck_690_; 
v_declName_567_ = lean_ctor_get(v_e_524_, 0);
v_args_568_ = lean_ctor_get(v_e_524_, 2);
v_isSharedCheck_690_ = !lean_is_exclusive(v_e_524_);
if (v_isSharedCheck_690_ == 0)
{
lean_object* v_unused_691_; 
v_unused_691_ = lean_ctor_get(v_e_524_, 1);
lean_dec(v_unused_691_);
v___x_570_ = v_e_524_;
v_isShared_571_ = v_isSharedCheck_690_;
goto v_resetjp_569_;
}
else
{
lean_inc(v_args_568_);
lean_inc(v_declName_567_);
lean_dec(v_e_524_);
v___x_570_ = lean_box(0);
v_isShared_571_ = v_isSharedCheck_690_;
goto v_resetjp_569_;
}
v_resetjp_569_:
{
lean_object* v_args_573_; lean_object* v___y_580_; lean_object* v___y_581_; lean_object* v___y_582_; lean_object* v___y_583_; lean_object* v___y_584_; lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_620_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__2));
v___x_621_ = lean_name_eq(v_declName_567_, v___x_620_);
if (v___x_621_ == 0)
{
lean_object* v___x_622_; uint8_t v___x_623_; 
v___x_622_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__4));
v___x_623_ = lean_name_eq(v_declName_567_, v___x_622_);
if (v___x_623_ == 0)
{
lean_object* v___x_624_; uint8_t v___x_625_; 
v___x_624_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__7));
v___x_625_ = lean_name_eq(v_declName_567_, v___x_624_);
if (v___x_625_ == 0)
{
lean_object* v___x_626_; uint8_t v___x_627_; 
v___x_626_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_627_ = lean_name_eq(v_declName_567_, v___x_626_);
if (v___x_627_ == 0)
{
lean_object* v___x_628_; lean_object* v_env_629_; lean_object* v___x_630_; 
v___x_628_ = lean_st_ref_get(v___y_529_);
v_env_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc_ref(v_env_629_);
lean_dec(v___x_628_);
lean_inc(v_declName_567_);
v___x_630_ = l_Lean_Environment_find_x3f(v_env_629_, v_declName_567_, v___x_627_);
if (lean_obj_tag(v___x_630_) == 1)
{
lean_object* v_val_631_; 
v_val_631_ = lean_ctor_get(v___x_630_, 0);
lean_inc(v_val_631_);
lean_dec_ref_known(v___x_630_, 1);
if (lean_obj_tag(v_val_631_) == 6)
{
lean_object* v_val_632_; lean_object* v_induct_633_; lean_object* v_numParams_634_; lean_object* v___x_635_; 
lean_del_object(v___x_570_);
lean_dec(v_declName_567_);
v_val_632_ = lean_ctor_get(v_val_631_, 0);
lean_inc_ref(v_val_632_);
lean_dec_ref_known(v_val_631_, 1);
v_induct_633_ = lean_ctor_get(v_val_632_, 1);
v_numParams_634_ = lean_ctor_get(v_val_632_, 3);
lean_inc(v_induct_633_);
v___x_635_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_induct_633_, v___y_528_, v___y_529_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
lean_inc(v_a_636_);
lean_dec_ref_known(v___x_635_, 1);
if (lean_obj_tag(v_a_636_) == 1)
{
lean_object* v_val_637_; lean_object* v_fieldIdx_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
lean_inc(v_numParams_634_);
lean_dec_ref(v_val_632_);
v_val_637_ = lean_ctor_get(v_a_636_, 0);
lean_inc(v_val_637_);
lean_dec_ref_known(v_a_636_, 1);
v_fieldIdx_638_ = lean_ctor_get(v_val_637_, 2);
lean_inc(v_fieldIdx_638_);
lean_dec(v_val_637_);
v___x_639_ = lean_box(0);
v___x_640_ = lean_nat_add(v_numParams_634_, v_fieldIdx_638_);
lean_dec(v_fieldIdx_638_);
lean_dec(v_numParams_634_);
v___x_641_ = lean_array_get(v___x_639_, v_args_568_, v___x_640_);
lean_dec(v___x_640_);
lean_dec_ref(v_args_568_);
v___x_642_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_641_);
lean_dec(v___x_641_);
v_e_524_ = v___x_642_;
goto _start;
}
else
{
lean_object* v___x_644_; 
lean_dec(v_a_636_);
v___x_644_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_val_632_, v_args_568_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
return v___x_644_;
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
lean_dec_ref(v_val_632_);
lean_dec_ref(v_args_568_);
v_a_645_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_635_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_635_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
else
{
lean_dec(v_val_631_);
v___y_580_ = v___y_525_;
v___y_581_ = v___y_526_;
v___y_582_ = v___y_527_;
v___y_583_ = v___y_528_;
v___y_584_ = v___y_529_;
goto v___jp_579_;
}
}
else
{
lean_dec(v___x_630_);
v___y_580_ = v___y_525_;
v___y_581_ = v___y_526_;
v___y_582_ = v___y_527_;
v___y_583_ = v___y_528_;
v___y_584_ = v___y_529_;
goto v___jp_579_;
}
}
else
{
lean_object* v___x_653_; lean_object* v___x_654_; 
lean_del_object(v___x_570_);
lean_dec_ref(v_args_568_);
lean_dec(v_declName_567_);
v___x_653_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__13, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13);
v___x_654_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v___x_653_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_);
return v___x_654_;
}
}
else
{
lean_object* v___x_655_; lean_object* v___x_656_; 
lean_del_object(v___x_570_);
lean_dec_ref(v_args_568_);
lean_dec(v_declName_567_);
v___x_655_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_656_, 0, v___x_655_);
return v___x_656_;
}
}
else
{
lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; 
lean_del_object(v___x_570_);
lean_dec(v_declName_567_);
v___x_657_ = lean_box(0);
v___x_658_ = lean_unsigned_to_nat(2u);
v___x_659_ = lean_array_get_borrowed(v___x_657_, v_args_568_, v___x_658_);
if (lean_obj_tag(v___x_659_) == 1)
{
lean_object* v_fvarId_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v_extraArgs_664_; lean_object* v___x_665_; 
v_fvarId_660_ = lean_ctor_get(v___x_659_, 0);
lean_inc(v_fvarId_660_);
v___x_661_ = lean_array_get_size(v_args_568_);
v___x_662_ = lean_unsigned_to_nat(3u);
v___x_663_ = lean_nat_sub(v___x_661_, v___x_662_);
v_extraArgs_664_ = lean_mk_empty_array_with_capacity(v___x_663_);
lean_dec(v___x_663_);
v___x_665_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v___x_661_, v_args_568_, v___x_662_, v_extraArgs_664_, v___y_525_);
lean_dec_ref(v_args_568_);
if (lean_obj_tag(v___x_665_) == 0)
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_674_; 
v_a_666_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_674_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_674_ == 0)
{
v___x_668_ = v___x_665_;
v_isShared_669_ = v_isSharedCheck_674_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_665_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_674_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_670_; lean_object* v___x_672_; 
v___x_670_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_670_, 0, v_fvarId_660_);
lean_ctor_set(v___x_670_, 1, v_a_666_);
if (v_isShared_669_ == 0)
{
lean_ctor_set(v___x_668_, 0, v___x_670_);
v___x_672_ = v___x_668_;
goto v_reusejp_671_;
}
else
{
lean_object* v_reuseFailAlloc_673_; 
v_reuseFailAlloc_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_673_, 0, v___x_670_);
v___x_672_ = v_reuseFailAlloc_673_;
goto v_reusejp_671_;
}
v_reusejp_671_:
{
return v___x_672_;
}
}
}
else
{
lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_682_; 
lean_dec(v_fvarId_660_);
v_a_675_ = lean_ctor_get(v___x_665_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_665_);
if (v_isSharedCheck_682_ == 0)
{
v___x_677_ = v___x_665_;
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_665_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_682_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_680_; 
if (v_isShared_678_ == 0)
{
v___x_680_ = v___x_677_;
goto v_reusejp_679_;
}
else
{
lean_object* v_reuseFailAlloc_681_; 
v_reuseFailAlloc_681_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_681_, 0, v_a_675_);
v___x_680_ = v_reuseFailAlloc_681_;
goto v_reusejp_679_;
}
v_reusejp_679_:
{
return v___x_680_;
}
}
}
}
else
{
lean_object* v___x_683_; lean_object* v___x_684_; 
lean_dec_ref(v_args_568_);
v___x_683_ = lean_box(1);
v___x_684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_684_, 0, v___x_683_);
return v___x_684_;
}
}
}
else
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
lean_del_object(v___x_570_);
lean_dec(v_declName_567_);
v___x_685_ = lean_box(0);
v___x_686_ = lean_unsigned_to_nat(2u);
v___x_687_ = lean_array_get(v___x_685_, v_args_568_, v___x_686_);
lean_dec_ref(v_args_568_);
v___x_688_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_687_);
lean_dec(v___x_687_);
v___x_689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_689_, 0, v___x_688_);
return v___x_689_;
}
v___jp_572_:
{
lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_574_ = lean_box(0);
if (v_isShared_571_ == 0)
{
lean_ctor_set(v___x_570_, 2, v_args_573_);
lean_ctor_set(v___x_570_, 1, v___x_574_);
v___x_576_ = v___x_570_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_declName_567_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_578_, 2, v_args_573_);
v___x_576_ = v_reuseFailAlloc_578_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_577_; 
v___x_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_577_, 0, v___x_576_);
return v___x_577_;
}
}
v___jp_579_:
{
lean_object* v___x_585_; 
lean_inc(v_declName_567_);
v___x_585_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_567_, v___y_584_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
if (lean_obj_tag(v_a_586_) == 1)
{
lean_object* v_val_587_; lean_object* v_toSignature_588_; lean_object* v_type_589_; lean_object* v___x_590_; 
v_val_587_ = lean_ctor_get(v_a_586_, 0);
lean_inc(v_val_587_);
lean_dec_ref_known(v_a_586_, 1);
v_toSignature_588_ = lean_ctor_get(v_val_587_, 0);
lean_inc_ref(v_toSignature_588_);
lean_dec(v_val_587_);
v_type_589_ = lean_ctor_get(v_toSignature_588_, 2);
lean_inc_ref(v_type_589_);
lean_dec_ref(v_toSignature_588_);
v___x_590_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_568_, v_type_589_, v___y_580_, v___y_581_, v___y_582_, v___y_583_, v___y_584_);
lean_dec_ref(v_args_568_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
v_args_573_ = v_a_591_;
goto v___jp_572_;
}
else
{
lean_object* v_a_592_; lean_object* v___x_594_; uint8_t v_isShared_595_; uint8_t v_isSharedCheck_599_; 
lean_del_object(v___x_570_);
lean_dec(v_declName_567_);
v_a_592_ = lean_ctor_get(v___x_590_, 0);
v_isSharedCheck_599_ = !lean_is_exclusive(v___x_590_);
if (v_isSharedCheck_599_ == 0)
{
v___x_594_ = v___x_590_;
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
else
{
lean_inc(v_a_592_);
lean_dec(v___x_590_);
v___x_594_ = lean_box(0);
v_isShared_595_ = v_isSharedCheck_599_;
goto v_resetjp_593_;
}
v_resetjp_593_:
{
lean_object* v___x_597_; 
if (v_isShared_595_ == 0)
{
v___x_597_ = v___x_594_;
goto v_reusejp_596_;
}
else
{
lean_object* v_reuseFailAlloc_598_; 
v_reuseFailAlloc_598_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_598_, 0, v_a_592_);
v___x_597_ = v_reuseFailAlloc_598_;
goto v_reusejp_596_;
}
v_reusejp_596_:
{
return v___x_597_;
}
}
}
}
else
{
size_t v_sz_600_; size_t v___x_601_; lean_object* v___x_602_; 
lean_dec(v_a_586_);
v_sz_600_ = lean_array_size(v_args_568_);
v___x_601_ = ((size_t)0ULL);
v___x_602_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_600_, v___x_601_, v_args_568_, v___y_580_);
if (lean_obj_tag(v___x_602_) == 0)
{
lean_object* v_a_603_; 
v_a_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_602_, 1);
v_args_573_ = v_a_603_;
goto v___jp_572_;
}
else
{
lean_object* v_a_604_; lean_object* v___x_606_; uint8_t v_isShared_607_; uint8_t v_isSharedCheck_611_; 
lean_del_object(v___x_570_);
lean_dec(v_declName_567_);
v_a_604_ = lean_ctor_get(v___x_602_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_602_);
if (v_isSharedCheck_611_ == 0)
{
v___x_606_ = v___x_602_;
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
else
{
lean_inc(v_a_604_);
lean_dec(v___x_602_);
v___x_606_ = lean_box(0);
v_isShared_607_ = v_isSharedCheck_611_;
goto v_resetjp_605_;
}
v_resetjp_605_:
{
lean_object* v___x_609_; 
if (v_isShared_607_ == 0)
{
v___x_609_ = v___x_606_;
goto v_reusejp_608_;
}
else
{
lean_object* v_reuseFailAlloc_610_; 
v_reuseFailAlloc_610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_610_, 0, v_a_604_);
v___x_609_ = v_reuseFailAlloc_610_;
goto v_reusejp_608_;
}
v_reusejp_608_:
{
return v___x_609_;
}
}
}
}
}
else
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
lean_del_object(v___x_570_);
lean_dec_ref(v_args_568_);
lean_dec(v_declName_567_);
v_a_612_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_585_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_585_);
v___x_614_ = lean_box(0);
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
v_resetjp_613_:
{
lean_object* v___x_617_; 
if (v_isShared_615_ == 0)
{
v___x_617_ = v___x_614_;
goto v_reusejp_616_;
}
else
{
lean_object* v_reuseFailAlloc_618_; 
v_reuseFailAlloc_618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_618_, 0, v_a_612_);
v___x_617_ = v_reuseFailAlloc_618_;
goto v_reusejp_616_;
}
v_reusejp_616_:
{
return v___x_617_;
}
}
}
}
}
}
case 4:
{
lean_object* v_fvarId_692_; lean_object* v_args_693_; lean_object* v___x_695_; uint8_t v_isShared_696_; uint8_t v_isSharedCheck_723_; 
v_fvarId_692_ = lean_ctor_get(v_e_524_, 0);
v_args_693_ = lean_ctor_get(v_e_524_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v_e_524_);
if (v_isSharedCheck_723_ == 0)
{
v___x_695_ = v_e_524_;
v_isShared_696_ = v_isSharedCheck_723_;
goto v_resetjp_694_;
}
else
{
lean_inc(v_args_693_);
lean_inc(v_fvarId_692_);
lean_dec(v_e_524_);
v___x_695_ = lean_box(0);
v_isShared_696_ = v_isSharedCheck_723_;
goto v_resetjp_694_;
}
v_resetjp_694_:
{
lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_697_ = lean_st_ref_get(v___y_525_);
v___x_698_ = l_Lean_FVarIdHashSet_contains(v___x_697_, v_fvarId_692_);
lean_dec(v___x_697_);
if (v___x_698_ == 0)
{
size_t v_sz_699_; size_t v___x_700_; lean_object* v___x_701_; 
v_sz_699_ = lean_array_size(v_args_693_);
v___x_700_ = ((size_t)0ULL);
v___x_701_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_699_, v___x_700_, v_args_693_, v___y_525_);
if (lean_obj_tag(v___x_701_) == 0)
{
lean_object* v_a_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_712_; 
v_a_702_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_712_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_712_ == 0)
{
v___x_704_ = v___x_701_;
v_isShared_705_ = v_isSharedCheck_712_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_a_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_712_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_707_; 
if (v_isShared_696_ == 0)
{
lean_ctor_set(v___x_695_, 1, v_a_702_);
v___x_707_ = v___x_695_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v_fvarId_692_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_a_702_);
v___x_707_ = v_reuseFailAlloc_711_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
lean_object* v___x_709_; 
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 0, v___x_707_);
v___x_709_ = v___x_704_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
lean_del_object(v___x_695_);
lean_dec(v_fvarId_692_);
v_a_713_ = lean_ctor_get(v___x_701_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_701_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_701_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_701_);
v___x_715_ = lean_box(0);
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
v_resetjp_714_:
{
lean_object* v___x_718_; 
if (v_isShared_716_ == 0)
{
v___x_718_ = v___x_715_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_a_713_);
v___x_718_ = v_reuseFailAlloc_719_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
return v___x_718_;
}
}
}
}
else
{
lean_object* v___x_721_; lean_object* v___x_722_; 
lean_del_object(v___x_695_);
lean_dec_ref(v_args_693_);
lean_dec(v_fvarId_692_);
v___x_721_ = lean_box(1);
v___x_722_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_722_, 0, v___x_721_);
return v___x_722_;
}
}
}
default: 
{
lean_object* v___x_724_; 
v___x_724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_724_, 0, v_e_524_);
return v___x_724_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object* v_e_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_){
_start:
{
lean_object* v_res_732_; 
v_res_732_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_e_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_, v___y_730_);
lean_dec(v___y_730_);
lean_dec_ref(v___y_729_);
lean_dec(v___y_728_);
lean_dec_ref(v___y_727_);
lean_dec(v___y_726_);
return v_res_732_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object* v_upperBound_733_, lean_object* v_args_734_, lean_object* v_inst_735_, lean_object* v_R_736_, lean_object* v_a_737_, lean_object* v_b_738_, lean_object* v_c_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v___x_746_; 
v___x_746_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_733_, v_args_734_, v_a_737_, v_b_738_, v___y_740_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object* v_upperBound_747_, lean_object* v_args_748_, lean_object* v_inst_749_, lean_object* v_R_750_, lean_object* v_a_751_, lean_object* v_b_752_, lean_object* v_c_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(v_upperBound_747_, v_args_748_, v_inst_749_, v_R_750_, v_a_751_, v_b_752_, v_c_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec_ref(v___y_755_);
lean_dec(v___y_754_);
lean_dec_ref(v_args_748_);
lean_dec(v_upperBound_747_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object* v_decl_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_type_768_; lean_object* v_value_769_; lean_object* v___x_770_; 
v_type_768_ = lean_ctor_get(v_decl_761_, 2);
v_value_769_ = lean_ctor_get(v_decl_761_, 3);
lean_inc_ref(v_type_768_);
v___x_770_ = l_Lean_Compiler_LCNF_toMonoType(v_type_768_, v___y_765_, v___y_766_);
if (lean_obj_tag(v___x_770_) == 0)
{
lean_object* v_a_771_; lean_object* v___x_772_; 
v_a_771_ = lean_ctor_get(v___x_770_, 0);
lean_inc(v_a_771_);
lean_dec_ref_known(v___x_770_, 1);
lean_inc(v_value_769_);
v___x_772_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_value_769_, v___y_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
if (lean_obj_tag(v___x_772_) == 0)
{
lean_object* v_a_773_; uint8_t v___x_774_; lean_object* v___x_775_; 
v_a_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_a_773_);
lean_dec_ref_known(v___x_772_, 1);
v___x_774_ = 0;
v___x_775_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_774_, v_decl_761_, v_a_771_, v_a_773_, v___y_764_);
return v___x_775_;
}
else
{
lean_object* v_a_776_; lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_783_; 
lean_dec(v_a_771_);
lean_dec_ref(v_decl_761_);
v_a_776_ = lean_ctor_get(v___x_772_, 0);
v_isSharedCheck_783_ = !lean_is_exclusive(v___x_772_);
if (v_isSharedCheck_783_ == 0)
{
v___x_778_ = v___x_772_;
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
else
{
lean_inc(v_a_776_);
lean_dec(v___x_772_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_783_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_781_; 
if (v_isShared_779_ == 0)
{
v___x_781_ = v___x_778_;
goto v_reusejp_780_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v_a_776_);
v___x_781_ = v_reuseFailAlloc_782_;
goto v_reusejp_780_;
}
v_reusejp_780_:
{
return v___x_781_;
}
}
}
}
else
{
lean_object* v_a_784_; lean_object* v___x_786_; uint8_t v_isShared_787_; uint8_t v_isSharedCheck_791_; 
lean_dec_ref(v_decl_761_);
v_a_784_ = lean_ctor_get(v___x_770_, 0);
v_isSharedCheck_791_ = !lean_is_exclusive(v___x_770_);
if (v_isSharedCheck_791_ == 0)
{
v___x_786_ = v___x_770_;
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
else
{
lean_inc(v_a_784_);
lean_dec(v___x_770_);
v___x_786_ = lean_box(0);
v_isShared_787_ = v_isSharedCheck_791_;
goto v_resetjp_785_;
}
v_resetjp_785_:
{
lean_object* v___x_789_; 
if (v_isShared_787_ == 0)
{
v___x_789_ = v___x_786_;
goto v_reusejp_788_;
}
else
{
lean_object* v_reuseFailAlloc_790_; 
v_reuseFailAlloc_790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_790_, 0, v_a_784_);
v___x_789_ = v_reuseFailAlloc_790_;
goto v_reusejp_788_;
}
v_reusejp_788_:
{
return v___x_789_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object* v_decl_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_, lean_object* v___y_798_){
_start:
{
lean_object* v_res_799_; 
v_res_799_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_, v___y_797_);
lean_dec(v___y_797_);
lean_dec_ref(v___y_796_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
return v_res_799_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object* v_msg_800_, lean_object* v___y_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_){
_start:
{
lean_object* v___f_807_; lean_object* v___f_808_; lean_object* v___f_809_; lean_object* v___f_810_; lean_object* v___f_811_; lean_object* v___f_812_; lean_object* v___f_813_; lean_object* v___f_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v_toApplicative_819_; lean_object* v___x_821_; uint8_t v_isShared_822_; uint8_t v_isSharedCheck_881_; 
v___f_807_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0));
v___f_808_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_809_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
v___f_810_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_811_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
v___f_812_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_812_, 0, v___f_811_);
lean_closure_set(v___f_812_, 1, v___f_810_);
v___f_813_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_813_, 0, v___f_810_);
v___f_814_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5));
v___x_815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_815_, 0, v___f_807_);
lean_ctor_set(v___x_815_, 1, v___f_808_);
v___x_816_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
lean_ctor_set(v___x_816_, 1, v___f_809_);
lean_ctor_set(v___x_816_, 2, v___f_812_);
lean_ctor_set(v___x_816_, 3, v___f_813_);
lean_ctor_set(v___x_816_, 4, v___f_814_);
v___x_817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_817_, 0, v___x_816_);
lean_ctor_set(v___x_817_, 1, v___f_810_);
v___x_818_ = l_StateRefT_x27_instMonad___redArg(v___x_817_);
v_toApplicative_819_ = lean_ctor_get(v___x_818_, 0);
v_isSharedCheck_881_ = !lean_is_exclusive(v___x_818_);
if (v_isSharedCheck_881_ == 0)
{
lean_object* v_unused_882_; 
v_unused_882_ = lean_ctor_get(v___x_818_, 1);
lean_dec(v_unused_882_);
v___x_821_ = v___x_818_;
v_isShared_822_ = v_isSharedCheck_881_;
goto v_resetjp_820_;
}
else
{
lean_inc(v_toApplicative_819_);
lean_dec(v___x_818_);
v___x_821_ = lean_box(0);
v_isShared_822_ = v_isSharedCheck_881_;
goto v_resetjp_820_;
}
v_resetjp_820_:
{
lean_object* v_toFunctor_823_; lean_object* v_toSeq_824_; lean_object* v_toSeqLeft_825_; lean_object* v_toSeqRight_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_879_; 
v_toFunctor_823_ = lean_ctor_get(v_toApplicative_819_, 0);
v_toSeq_824_ = lean_ctor_get(v_toApplicative_819_, 2);
v_toSeqLeft_825_ = lean_ctor_get(v_toApplicative_819_, 3);
v_toSeqRight_826_ = lean_ctor_get(v_toApplicative_819_, 4);
v_isSharedCheck_879_ = !lean_is_exclusive(v_toApplicative_819_);
if (v_isSharedCheck_879_ == 0)
{
lean_object* v_unused_880_; 
v_unused_880_ = lean_ctor_get(v_toApplicative_819_, 1);
lean_dec(v_unused_880_);
v___x_828_ = v_toApplicative_819_;
v_isShared_829_ = v_isSharedCheck_879_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_toSeqRight_826_);
lean_inc(v_toSeqLeft_825_);
lean_inc(v_toSeq_824_);
lean_inc(v_toFunctor_823_);
lean_dec(v_toApplicative_819_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_879_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v___f_830_; lean_object* v___f_831_; lean_object* v___f_832_; lean_object* v___f_833_; lean_object* v___x_834_; lean_object* v___f_835_; lean_object* v___f_836_; lean_object* v___f_837_; lean_object* v___x_839_; 
v___f_830_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__6));
v___f_831_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__7));
lean_inc_ref(v_toFunctor_823_);
v___f_832_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_832_, 0, v_toFunctor_823_);
v___f_833_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_833_, 0, v_toFunctor_823_);
v___x_834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_834_, 0, v___f_832_);
lean_ctor_set(v___x_834_, 1, v___f_833_);
v___f_835_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_835_, 0, v_toSeqRight_826_);
v___f_836_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_836_, 0, v_toSeqLeft_825_);
v___f_837_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_837_, 0, v_toSeq_824_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 4, v___f_835_);
lean_ctor_set(v___x_828_, 3, v___f_836_);
lean_ctor_set(v___x_828_, 2, v___f_837_);
lean_ctor_set(v___x_828_, 1, v___f_830_);
lean_ctor_set(v___x_828_, 0, v___x_834_);
v___x_839_ = v___x_828_;
goto v_reusejp_838_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v___x_834_);
lean_ctor_set(v_reuseFailAlloc_878_, 1, v___f_830_);
lean_ctor_set(v_reuseFailAlloc_878_, 2, v___f_837_);
lean_ctor_set(v_reuseFailAlloc_878_, 3, v___f_836_);
lean_ctor_set(v_reuseFailAlloc_878_, 4, v___f_835_);
v___x_839_ = v_reuseFailAlloc_878_;
goto v_reusejp_838_;
}
v_reusejp_838_:
{
lean_object* v___x_841_; 
if (v_isShared_822_ == 0)
{
lean_ctor_set(v___x_821_, 1, v___f_831_);
lean_ctor_set(v___x_821_, 0, v___x_839_);
v___x_841_ = v___x_821_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_877_; 
v_reuseFailAlloc_877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_877_, 0, v___x_839_);
lean_ctor_set(v_reuseFailAlloc_877_, 1, v___f_831_);
v___x_841_ = v_reuseFailAlloc_877_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
lean_object* v___x_842_; lean_object* v_toApplicative_843_; lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_875_; 
v___x_842_ = l_StateRefT_x27_instMonad___redArg(v___x_841_);
v_toApplicative_843_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_875_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_875_ == 0)
{
lean_object* v_unused_876_; 
v_unused_876_ = lean_ctor_get(v___x_842_, 1);
lean_dec(v_unused_876_);
v___x_845_ = v___x_842_;
v_isShared_846_ = v_isSharedCheck_875_;
goto v_resetjp_844_;
}
else
{
lean_inc(v_toApplicative_843_);
lean_dec(v___x_842_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_875_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v_toFunctor_847_; lean_object* v_toSeq_848_; lean_object* v_toSeqLeft_849_; lean_object* v_toSeqRight_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_873_; 
v_toFunctor_847_ = lean_ctor_get(v_toApplicative_843_, 0);
v_toSeq_848_ = lean_ctor_get(v_toApplicative_843_, 2);
v_toSeqLeft_849_ = lean_ctor_get(v_toApplicative_843_, 3);
v_toSeqRight_850_ = lean_ctor_get(v_toApplicative_843_, 4);
v_isSharedCheck_873_ = !lean_is_exclusive(v_toApplicative_843_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; 
v_unused_874_ = lean_ctor_get(v_toApplicative_843_, 1);
lean_dec(v_unused_874_);
v___x_852_ = v_toApplicative_843_;
v_isShared_853_ = v_isSharedCheck_873_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_toSeqRight_850_);
lean_inc(v_toSeqLeft_849_);
lean_inc(v_toSeq_848_);
lean_inc(v_toFunctor_847_);
lean_dec(v_toApplicative_843_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_873_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___f_854_; lean_object* v___f_855_; lean_object* v___f_856_; lean_object* v___f_857_; lean_object* v___x_858_; lean_object* v___f_859_; lean_object* v___f_860_; lean_object* v___f_861_; lean_object* v___x_863_; 
v___f_854_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__8));
v___f_855_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__9));
lean_inc_ref(v_toFunctor_847_);
v___f_856_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_856_, 0, v_toFunctor_847_);
v___f_857_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_857_, 0, v_toFunctor_847_);
v___x_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_858_, 0, v___f_856_);
lean_ctor_set(v___x_858_, 1, v___f_857_);
v___f_859_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_859_, 0, v_toSeqRight_850_);
v___f_860_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_860_, 0, v_toSeqLeft_849_);
v___f_861_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_861_, 0, v_toSeq_848_);
if (v_isShared_853_ == 0)
{
lean_ctor_set(v___x_852_, 4, v___f_859_);
lean_ctor_set(v___x_852_, 3, v___f_860_);
lean_ctor_set(v___x_852_, 2, v___f_861_);
lean_ctor_set(v___x_852_, 1, v___f_854_);
lean_ctor_set(v___x_852_, 0, v___x_858_);
v___x_863_ = v___x_852_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_858_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v___f_854_);
lean_ctor_set(v_reuseFailAlloc_872_, 2, v___f_861_);
lean_ctor_set(v_reuseFailAlloc_872_, 3, v___f_860_);
lean_ctor_set(v_reuseFailAlloc_872_, 4, v___f_859_);
v___x_863_ = v_reuseFailAlloc_872_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v___x_865_; 
if (v_isShared_846_ == 0)
{
lean_ctor_set(v___x_845_, 1, v___f_855_);
lean_ctor_set(v___x_845_, 0, v___x_863_);
v___x_865_ = v___x_845_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_871_; 
v_reuseFailAlloc_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_871_, 0, v___x_863_);
lean_ctor_set(v_reuseFailAlloc_871_, 1, v___f_855_);
v___x_865_ = v_reuseFailAlloc_871_;
goto v_reusejp_864_;
}
v_reusejp_864_:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_5282__overap_869_; lean_object* v___x_870_; 
v___x_866_ = l_StateRefT_x27_instMonad___redArg(v___x_865_);
v___x_867_ = lean_box(0);
v___x_868_ = l_instInhabitedOfMonad___redArg(v___x_866_, v___x_867_);
v___x_5282__overap_869_ = lean_panic_fn_borrowed(v___x_868_, v_msg_800_);
lean_dec(v___x_868_);
lean_inc(v___y_805_);
lean_inc_ref(v___y_804_);
lean_inc(v___y_803_);
lean_inc_ref(v___y_802_);
lean_inc(v___y_801_);
v___x_870_ = lean_apply_6(v___x_5282__overap_869_, v___y_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_, lean_box(0));
return v___x_870_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object* v_msg_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_, lean_object* v___y_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v_msg_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, v___y_888_);
lean_dec(v___y_888_);
lean_dec_ref(v___y_887_);
lean_dec(v___y_886_);
lean_dec_ref(v___y_885_);
lean_dec(v___y_884_);
return v_res_890_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_892_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_893_ = lean_unsigned_to_nat(11u);
v___x_894_ = lean_unsigned_to_nat(124u);
v___x_895_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_896_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_897_ = l_mkPanicMessageWithDecl(v___x_896_, v___x_895_, v___x_894_, v___x_893_, v___x_892_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object* v_upperBound_898_, lean_object* v_a_899_, lean_object* v_b_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
lean_object* v_a_908_; uint8_t v___x_912_; 
v___x_912_ = lean_nat_dec_lt(v_a_899_, v_upperBound_898_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
lean_dec(v_a_899_);
v___x_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_913_, 0, v_b_900_);
return v___x_913_;
}
else
{
if (lean_obj_tag(v_b_900_) == 7)
{
lean_object* v_body_914_; 
v_body_914_ = lean_ctor_get(v_b_900_, 2);
lean_inc_ref(v_body_914_);
lean_dec_ref_known(v_b_900_, 3);
v_a_908_ = v_body_914_;
goto v___jp_907_;
}
else
{
lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_915_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1);
v___x_916_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_915_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
if (lean_obj_tag(v___x_916_) == 0)
{
lean_dec_ref_known(v___x_916_, 1);
v_a_908_ = v_b_900_;
goto v___jp_907_;
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec_ref(v_b_900_);
lean_dec(v_a_899_);
v_a_917_ = lean_ctor_get(v___x_916_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_916_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_916_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_916_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
}
v___jp_907_:
{
lean_object* v___x_909_; lean_object* v___x_910_; 
v___x_909_ = lean_unsigned_to_nat(1u);
v___x_910_ = lean_nat_add(v_a_899_, v___x_909_);
lean_dec(v_a_899_);
v_a_899_ = v___x_910_;
v_b_900_ = v_a_908_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object* v_upperBound_925_, lean_object* v_a_926_, lean_object* v_b_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
lean_object* v_res_934_; 
v_res_934_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_925_, v_a_926_, v_b_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_);
lean_dec(v___y_932_);
lean_dec_ref(v___y_931_);
lean_dec(v___y_930_);
lean_dec_ref(v___y_929_);
lean_dec(v___y_928_);
lean_dec(v_upperBound_925_);
return v_res_934_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; 
v___x_935_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_936_ = lean_unsigned_to_nat(11u);
v___x_937_ = lean_unsigned_to_nat(132u);
v___x_938_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_939_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_940_ = l_mkPanicMessageWithDecl(v___x_939_, v___x_938_, v___x_937_, v___x_936_, v___x_935_);
return v___x_940_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object* v_upperBound_941_, lean_object* v_a_942_, lean_object* v_b_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v_a_951_; uint8_t v___x_955_; 
v___x_955_ = lean_nat_dec_lt(v_a_942_, v_upperBound_941_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; 
lean_dec(v_a_942_);
v___x_956_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_956_, 0, v_b_943_);
return v___x_956_;
}
else
{
lean_object* v_fst_957_; 
v_fst_957_ = lean_ctor_get(v_b_943_, 0);
lean_inc(v_fst_957_);
if (lean_obj_tag(v_fst_957_) == 7)
{
lean_object* v_snd_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_991_; 
v_snd_958_ = lean_ctor_get(v_b_943_, 1);
v_isSharedCheck_991_ = !lean_is_exclusive(v_b_943_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; 
v_unused_992_ = lean_ctor_get(v_b_943_, 0);
lean_dec(v_unused_992_);
v___x_960_ = v_b_943_;
v_isShared_961_ = v_isSharedCheck_991_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_snd_958_);
lean_dec(v_b_943_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_991_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v_binderName_962_; lean_object* v_binderType_963_; lean_object* v_body_964_; lean_object* v___x_965_; 
v_binderName_962_ = lean_ctor_get(v_fst_957_, 0);
lean_inc(v_binderName_962_);
v_binderType_963_ = lean_ctor_get(v_fst_957_, 1);
lean_inc_ref(v_binderType_963_);
v_body_964_ = lean_ctor_get(v_fst_957_, 2);
lean_inc_ref(v_body_964_);
lean_dec_ref_known(v_fst_957_, 3);
v___x_965_ = l_Lean_Compiler_LCNF_toMonoType(v_binderType_963_, v___y_947_, v___y_948_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; uint8_t v___x_967_; uint8_t v___x_968_; lean_object* v___x_969_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_a_966_);
lean_dec_ref_known(v___x_965_, 1);
v___x_967_ = 0;
v___x_968_ = 0;
v___x_969_ = l_Lean_Compiler_LCNF_mkParam(v___x_967_, v_binderName_962_, v_a_966_, v___x_968_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_971_; lean_object* v___x_973_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_971_ = lean_array_push(v_snd_958_, v_a_970_);
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 1, v___x_971_);
lean_ctor_set(v___x_960_, 0, v_body_964_);
v___x_973_ = v___x_960_;
goto v_reusejp_972_;
}
else
{
lean_object* v_reuseFailAlloc_974_; 
v_reuseFailAlloc_974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_974_, 0, v_body_964_);
lean_ctor_set(v_reuseFailAlloc_974_, 1, v___x_971_);
v___x_973_ = v_reuseFailAlloc_974_;
goto v_reusejp_972_;
}
v_reusejp_972_:
{
v_a_951_ = v___x_973_;
goto v___jp_950_;
}
}
else
{
lean_object* v_a_975_; lean_object* v___x_977_; uint8_t v_isShared_978_; uint8_t v_isSharedCheck_982_; 
lean_dec_ref(v_body_964_);
lean_del_object(v___x_960_);
lean_dec(v_snd_958_);
lean_dec(v_a_942_);
v_a_975_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_982_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_982_ == 0)
{
v___x_977_ = v___x_969_;
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
else
{
lean_inc(v_a_975_);
lean_dec(v___x_969_);
v___x_977_ = lean_box(0);
v_isShared_978_ = v_isSharedCheck_982_;
goto v_resetjp_976_;
}
v_resetjp_976_:
{
lean_object* v___x_980_; 
if (v_isShared_978_ == 0)
{
v___x_980_ = v___x_977_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_975_);
v___x_980_ = v_reuseFailAlloc_981_;
goto v_reusejp_979_;
}
v_reusejp_979_:
{
return v___x_980_;
}
}
}
}
else
{
lean_object* v_a_983_; lean_object* v___x_985_; uint8_t v_isShared_986_; uint8_t v_isSharedCheck_990_; 
lean_dec_ref(v_body_964_);
lean_dec(v_binderName_962_);
lean_del_object(v___x_960_);
lean_dec(v_snd_958_);
lean_dec(v_a_942_);
v_a_983_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_990_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_990_ == 0)
{
v___x_985_ = v___x_965_;
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
else
{
lean_inc(v_a_983_);
lean_dec(v___x_965_);
v___x_985_ = lean_box(0);
v_isShared_986_ = v_isSharedCheck_990_;
goto v_resetjp_984_;
}
v_resetjp_984_:
{
lean_object* v___x_988_; 
if (v_isShared_986_ == 0)
{
v___x_988_ = v___x_985_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_989_; 
v_reuseFailAlloc_989_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_989_, 0, v_a_983_);
v___x_988_ = v_reuseFailAlloc_989_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
return v___x_988_;
}
}
}
}
}
else
{
lean_object* v_snd_993_; lean_object* v___x_995_; uint8_t v_isShared_996_; uint8_t v_isSharedCheck_1010_; 
v_snd_993_ = lean_ctor_get(v_b_943_, 1);
v_isSharedCheck_1010_ = !lean_is_exclusive(v_b_943_);
if (v_isSharedCheck_1010_ == 0)
{
lean_object* v_unused_1011_; 
v_unused_1011_ = lean_ctor_get(v_b_943_, 0);
lean_dec(v_unused_1011_);
v___x_995_ = v_b_943_;
v_isShared_996_ = v_isSharedCheck_1010_;
goto v_resetjp_994_;
}
else
{
lean_inc(v_snd_993_);
lean_dec(v_b_943_);
v___x_995_ = lean_box(0);
v_isShared_996_ = v_isSharedCheck_1010_;
goto v_resetjp_994_;
}
v_resetjp_994_:
{
lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_997_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0);
v___x_998_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_997_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_);
if (lean_obj_tag(v___x_998_) == 0)
{
lean_object* v___x_1000_; 
lean_dec_ref_known(v___x_998_, 1);
if (v_isShared_996_ == 0)
{
v___x_1000_ = v___x_995_;
goto v_reusejp_999_;
}
else
{
lean_object* v_reuseFailAlloc_1001_; 
v_reuseFailAlloc_1001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1001_, 0, v_fst_957_);
lean_ctor_set(v_reuseFailAlloc_1001_, 1, v_snd_993_);
v___x_1000_ = v_reuseFailAlloc_1001_;
goto v_reusejp_999_;
}
v_reusejp_999_:
{
v_a_951_ = v___x_1000_;
goto v___jp_950_;
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_del_object(v___x_995_);
lean_dec(v_snd_993_);
lean_dec(v_fst_957_);
lean_dec(v_a_942_);
v_a_1002_ = lean_ctor_get(v___x_998_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_998_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_998_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_998_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
}
v___jp_950_:
{
lean_object* v___x_952_; lean_object* v___x_953_; 
v___x_952_ = lean_unsigned_to_nat(1u);
v___x_953_ = lean_nat_add(v_a_942_, v___x_952_);
lean_dec(v_a_942_);
v_a_942_ = v___x_953_;
v_b_943_ = v_a_951_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object* v_upperBound_1012_, lean_object* v_a_1013_, lean_object* v_b_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_, lean_object* v___y_1019_, lean_object* v___y_1020_){
_start:
{
lean_object* v_res_1021_; 
v_res_1021_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1012_, v_a_1013_, v_b_1014_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_, v___y_1019_);
lean_dec(v___y_1019_);
lean_dec_ref(v___y_1018_);
lean_dec(v___y_1017_);
lean_dec_ref(v___y_1016_);
lean_dec(v___y_1015_);
lean_dec(v_upperBound_1012_);
return v_res_1021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object* v_ctorType_1022_, lean_object* v_numParams_1023_, lean_object* v_numNewFields_1024_, lean_object* v_oldFields_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; 
v___x_1032_ = lean_unsigned_to_nat(0u);
v___x_1033_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_numParams_1023_, v___x_1032_, v_ctorType_1022_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref_known(v___x_1033_, 1);
v___x_1035_ = lean_array_get_size(v_oldFields_1025_);
v___x_1036_ = lean_nat_add(v___x_1035_, v_numNewFields_1024_);
v___x_1037_ = lean_mk_empty_array_with_capacity(v___x_1036_);
lean_dec(v___x_1036_);
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v_a_1034_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_numNewFields_1024_, v___x_1032_, v___x_1038_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_);
if (lean_obj_tag(v___x_1039_) == 0)
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1049_; 
v_a_1040_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1049_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1049_ == 0)
{
v___x_1042_ = v___x_1039_;
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1039_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1049_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v_snd_1044_; lean_object* v___x_1045_; lean_object* v___x_1047_; 
v_snd_1044_ = lean_ctor_get(v_a_1040_, 1);
lean_inc(v_snd_1044_);
lean_dec(v_a_1040_);
v___x_1045_ = l_Array_append___redArg(v_snd_1044_, v_oldFields_1025_);
if (v_isShared_1043_ == 0)
{
lean_ctor_set(v___x_1042_, 0, v___x_1045_);
v___x_1047_ = v___x_1042_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
}
else
{
lean_object* v_a_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1057_; 
v_a_1050_ = lean_ctor_get(v___x_1039_, 0);
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1039_);
if (v_isSharedCheck_1057_ == 0)
{
v___x_1052_ = v___x_1039_;
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_a_1050_);
lean_dec(v___x_1039_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1057_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___x_1055_; 
if (v_isShared_1053_ == 0)
{
v___x_1055_ = v___x_1052_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v_a_1050_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
}
else
{
lean_object* v_a_1058_; lean_object* v___x_1060_; uint8_t v_isShared_1061_; uint8_t v_isSharedCheck_1065_; 
v_a_1058_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1065_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1065_ == 0)
{
v___x_1060_ = v___x_1033_;
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
else
{
lean_inc(v_a_1058_);
lean_dec(v___x_1033_);
v___x_1060_ = lean_box(0);
v_isShared_1061_ = v_isSharedCheck_1065_;
goto v_resetjp_1059_;
}
v_resetjp_1059_:
{
lean_object* v___x_1063_; 
if (v_isShared_1061_ == 0)
{
v___x_1063_ = v___x_1060_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v_a_1058_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object* v_ctorType_1066_, lean_object* v_numParams_1067_, lean_object* v_numNewFields_1068_, lean_object* v_oldFields_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_ctorType_1066_, v_numParams_1067_, v_numNewFields_1068_, v_oldFields_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v_oldFields_1069_);
lean_dec(v_numNewFields_1068_);
lean_dec(v_numParams_1067_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object* v_upperBound_1077_, lean_object* v_inst_1078_, lean_object* v_R_1079_, lean_object* v_a_1080_, lean_object* v_b_1081_, lean_object* v_c_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_){
_start:
{
lean_object* v___x_1089_; 
v___x_1089_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1077_, v_a_1080_, v_b_1081_, v___y_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_);
return v___x_1089_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object* v_upperBound_1090_, lean_object* v_inst_1091_, lean_object* v_R_1092_, lean_object* v_a_1093_, lean_object* v_b_1094_, lean_object* v_c_1095_, lean_object* v___y_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(v_upperBound_1090_, v_inst_1091_, v_R_1092_, v_a_1093_, v_b_1094_, v_c_1095_, v___y_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1099_);
lean_dec(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1096_);
lean_dec(v_upperBound_1090_);
return v_res_1102_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object* v_upperBound_1103_, lean_object* v_inst_1104_, lean_object* v_R_1105_, lean_object* v_a_1106_, lean_object* v_b_1107_, lean_object* v_c_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1103_, v_a_1106_, v_b_1107_, v___y_1109_, v___y_1110_, v___y_1111_, v___y_1112_, v___y_1113_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object* v_upperBound_1116_, lean_object* v_inst_1117_, lean_object* v_R_1118_, lean_object* v_a_1119_, lean_object* v_b_1120_, lean_object* v_c_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(v_upperBound_1116_, v_inst_1117_, v_R_1118_, v_a_1119_, v_b_1120_, v_c_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec(v___y_1124_);
lean_dec_ref(v___y_1123_);
lean_dec(v___y_1122_);
lean_dec(v_upperBound_1116_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t v_sz_1129_, size_t v_i_1130_, lean_object* v_bs_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_){
_start:
{
uint8_t v___x_1137_; 
v___x_1137_ = lean_usize_dec_lt(v_i_1130_, v_sz_1129_);
if (v___x_1137_ == 0)
{
lean_object* v___x_1138_; 
v___x_1138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1138_, 0, v_bs_1131_);
return v___x_1138_;
}
else
{
lean_object* v_v_1139_; lean_object* v___x_1140_; lean_object* v_bs_x27_1141_; lean_object* v___x_1142_; 
v_v_1139_ = lean_array_uget(v_bs_1131_, v_i_1130_);
v___x_1140_ = lean_unsigned_to_nat(0u);
v_bs_x27_1141_ = lean_array_uset(v_bs_1131_, v_i_1130_, v___x_1140_);
v___x_1142_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_v_1139_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
if (lean_obj_tag(v___x_1142_) == 0)
{
lean_object* v_a_1143_; size_t v___x_1144_; size_t v___x_1145_; lean_object* v___x_1146_; 
v_a_1143_ = lean_ctor_get(v___x_1142_, 0);
lean_inc(v_a_1143_);
lean_dec_ref_known(v___x_1142_, 1);
v___x_1144_ = ((size_t)1ULL);
v___x_1145_ = lean_usize_add(v_i_1130_, v___x_1144_);
v___x_1146_ = lean_array_uset(v_bs_x27_1141_, v_i_1130_, v_a_1143_);
v_i_1130_ = v___x_1145_;
v_bs_1131_ = v___x_1146_;
goto _start;
}
else
{
lean_object* v_a_1148_; lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
lean_dec_ref(v_bs_x27_1141_);
v_a_1148_ = lean_ctor_get(v___x_1142_, 0);
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1142_);
if (v_isSharedCheck_1155_ == 0)
{
v___x_1150_ = v___x_1142_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_inc(v_a_1148_);
lean_dec(v___x_1142_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v_a_1148_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object* v_sz_1156_, lean_object* v_i_1157_, lean_object* v_bs_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_){
_start:
{
size_t v_sz_boxed_1164_; size_t v_i_boxed_1165_; lean_object* v_res_1166_; 
v_sz_boxed_1164_ = lean_unbox_usize(v_sz_1156_);
lean_dec(v_sz_1156_);
v_i_boxed_1165_ = lean_unbox_usize(v_i_1157_);
lean_dec(v_i_1157_);
v_res_1166_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_boxed_1164_, v_i_boxed_1165_, v_bs_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec(v___y_1159_);
return v_res_1166_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object* v_msg_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___f_1177_; lean_object* v___f_1178_; lean_object* v___f_1179_; lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___f_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v_toApplicative_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1249_; 
v___f_1175_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0));
v___f_1176_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1177_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
v___f_1178_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1179_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
v___f_1180_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1180_, 0, v___f_1179_);
lean_closure_set(v___f_1180_, 1, v___f_1178_);
v___f_1181_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1181_, 0, v___f_1178_);
v___f_1182_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5));
v___x_1183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1183_, 0, v___f_1175_);
lean_ctor_set(v___x_1183_, 1, v___f_1176_);
v___x_1184_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1184_, 0, v___x_1183_);
lean_ctor_set(v___x_1184_, 1, v___f_1177_);
lean_ctor_set(v___x_1184_, 2, v___f_1180_);
lean_ctor_set(v___x_1184_, 3, v___f_1181_);
lean_ctor_set(v___x_1184_, 4, v___f_1182_);
v___x_1185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1185_, 0, v___x_1184_);
lean_ctor_set(v___x_1185_, 1, v___f_1178_);
v___x_1186_ = l_StateRefT_x27_instMonad___redArg(v___x_1185_);
v_toApplicative_1187_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1249_ == 0)
{
lean_object* v_unused_1250_; 
v_unused_1250_ = lean_ctor_get(v___x_1186_, 1);
lean_dec(v_unused_1250_);
v___x_1189_ = v___x_1186_;
v_isShared_1190_ = v_isSharedCheck_1249_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_toApplicative_1187_);
lean_dec(v___x_1186_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1249_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v_toFunctor_1191_; lean_object* v_toSeq_1192_; lean_object* v_toSeqLeft_1193_; lean_object* v_toSeqRight_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1247_; 
v_toFunctor_1191_ = lean_ctor_get(v_toApplicative_1187_, 0);
v_toSeq_1192_ = lean_ctor_get(v_toApplicative_1187_, 2);
v_toSeqLeft_1193_ = lean_ctor_get(v_toApplicative_1187_, 3);
v_toSeqRight_1194_ = lean_ctor_get(v_toApplicative_1187_, 4);
v_isSharedCheck_1247_ = !lean_is_exclusive(v_toApplicative_1187_);
if (v_isSharedCheck_1247_ == 0)
{
lean_object* v_unused_1248_; 
v_unused_1248_ = lean_ctor_get(v_toApplicative_1187_, 1);
lean_dec(v_unused_1248_);
v___x_1196_ = v_toApplicative_1187_;
v_isShared_1197_ = v_isSharedCheck_1247_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_toSeqRight_1194_);
lean_inc(v_toSeqLeft_1193_);
lean_inc(v_toSeq_1192_);
lean_inc(v_toFunctor_1191_);
lean_dec(v_toApplicative_1187_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1247_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___f_1198_; lean_object* v___f_1199_; lean_object* v___f_1200_; lean_object* v___f_1201_; lean_object* v___x_1202_; lean_object* v___f_1203_; lean_object* v___f_1204_; lean_object* v___f_1205_; lean_object* v___x_1207_; 
v___f_1198_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__6));
v___f_1199_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1191_);
v___f_1200_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1200_, 0, v_toFunctor_1191_);
v___f_1201_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1201_, 0, v_toFunctor_1191_);
v___x_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___f_1200_);
lean_ctor_set(v___x_1202_, 1, v___f_1201_);
v___f_1203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1203_, 0, v_toSeqRight_1194_);
v___f_1204_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1204_, 0, v_toSeqLeft_1193_);
v___f_1205_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1205_, 0, v_toSeq_1192_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 4, v___f_1203_);
lean_ctor_set(v___x_1196_, 3, v___f_1204_);
lean_ctor_set(v___x_1196_, 2, v___f_1205_);
lean_ctor_set(v___x_1196_, 1, v___f_1198_);
lean_ctor_set(v___x_1196_, 0, v___x_1202_);
v___x_1207_ = v___x_1196_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1246_; 
v_reuseFailAlloc_1246_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1246_, 0, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1246_, 1, v___f_1198_);
lean_ctor_set(v_reuseFailAlloc_1246_, 2, v___f_1205_);
lean_ctor_set(v_reuseFailAlloc_1246_, 3, v___f_1204_);
lean_ctor_set(v_reuseFailAlloc_1246_, 4, v___f_1203_);
v___x_1207_ = v_reuseFailAlloc_1246_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1209_; 
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 1, v___f_1199_);
lean_ctor_set(v___x_1189_, 0, v___x_1207_);
v___x_1209_ = v___x_1189_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1245_; 
v_reuseFailAlloc_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1245_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1245_, 1, v___f_1199_);
v___x_1209_ = v_reuseFailAlloc_1245_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; lean_object* v_toApplicative_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1243_; 
v___x_1210_ = l_StateRefT_x27_instMonad___redArg(v___x_1209_);
v_toApplicative_1211_ = lean_ctor_get(v___x_1210_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v___x_1210_);
if (v_isSharedCheck_1243_ == 0)
{
lean_object* v_unused_1244_; 
v_unused_1244_ = lean_ctor_get(v___x_1210_, 1);
lean_dec(v_unused_1244_);
v___x_1213_ = v___x_1210_;
v_isShared_1214_ = v_isSharedCheck_1243_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_toApplicative_1211_);
lean_dec(v___x_1210_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1243_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v_toFunctor_1215_; lean_object* v_toSeq_1216_; lean_object* v_toSeqLeft_1217_; lean_object* v_toSeqRight_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1241_; 
v_toFunctor_1215_ = lean_ctor_get(v_toApplicative_1211_, 0);
v_toSeq_1216_ = lean_ctor_get(v_toApplicative_1211_, 2);
v_toSeqLeft_1217_ = lean_ctor_get(v_toApplicative_1211_, 3);
v_toSeqRight_1218_ = lean_ctor_get(v_toApplicative_1211_, 4);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_toApplicative_1211_);
if (v_isSharedCheck_1241_ == 0)
{
lean_object* v_unused_1242_; 
v_unused_1242_ = lean_ctor_get(v_toApplicative_1211_, 1);
lean_dec(v_unused_1242_);
v___x_1220_ = v_toApplicative_1211_;
v_isShared_1221_ = v_isSharedCheck_1241_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_toSeqRight_1218_);
lean_inc(v_toSeqLeft_1217_);
lean_inc(v_toSeq_1216_);
lean_inc(v_toFunctor_1215_);
lean_dec(v_toApplicative_1211_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1241_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___f_1222_; lean_object* v___f_1223_; lean_object* v___f_1224_; lean_object* v___f_1225_; lean_object* v___x_1226_; lean_object* v___f_1227_; lean_object* v___f_1228_; lean_object* v___f_1229_; lean_object* v___x_1231_; 
v___f_1222_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__8));
v___f_1223_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__9));
lean_inc_ref(v_toFunctor_1215_);
v___f_1224_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1224_, 0, v_toFunctor_1215_);
v___f_1225_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1225_, 0, v_toFunctor_1215_);
v___x_1226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1226_, 0, v___f_1224_);
lean_ctor_set(v___x_1226_, 1, v___f_1225_);
v___f_1227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1227_, 0, v_toSeqRight_1218_);
v___f_1228_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1228_, 0, v_toSeqLeft_1217_);
v___f_1229_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1229_, 0, v_toSeq_1216_);
if (v_isShared_1221_ == 0)
{
lean_ctor_set(v___x_1220_, 4, v___f_1227_);
lean_ctor_set(v___x_1220_, 3, v___f_1228_);
lean_ctor_set(v___x_1220_, 2, v___f_1229_);
lean_ctor_set(v___x_1220_, 1, v___f_1222_);
lean_ctor_set(v___x_1220_, 0, v___x_1226_);
v___x_1231_ = v___x_1220_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1226_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v___f_1222_);
lean_ctor_set(v_reuseFailAlloc_1240_, 2, v___f_1229_);
lean_ctor_set(v_reuseFailAlloc_1240_, 3, v___f_1228_);
lean_ctor_set(v_reuseFailAlloc_1240_, 4, v___f_1227_);
v___x_1231_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
lean_object* v___x_1233_; 
if (v_isShared_1214_ == 0)
{
lean_ctor_set(v___x_1213_, 1, v___f_1223_);
lean_ctor_set(v___x_1213_, 0, v___x_1231_);
v___x_1233_ = v___x_1213_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v___f_1223_);
v___x_1233_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_31925__overap_1237_; lean_object* v___x_1238_; 
v___x_1234_ = l_StateRefT_x27_instMonad___redArg(v___x_1233_);
v___x_1235_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1236_ = l_instInhabitedOfMonad___redArg(v___x_1234_, v___x_1235_);
v___x_31925__overap_1237_ = lean_panic_fn_borrowed(v___x_1236_, v_msg_1168_);
lean_dec(v___x_1236_);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc(v___y_1169_);
v___x_1238_ = lean_apply_6(v___x_31925__overap_1237_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, lean_box(0));
return v___x_1238_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object* v_msg_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
lean_object* v_res_1258_; 
v_res_1258_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v_msg_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
lean_dec(v___y_1254_);
lean_dec_ref(v___y_1253_);
lean_dec(v___y_1252_);
return v_res_1258_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object* v_msg_1259_){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1261_ = lean_panic_fn_borrowed(v___x_1260_, v_msg_1259_);
return v___x_1261_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1262_; 
v___x_1262_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_1262_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(lean_object* v_msg_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
lean_object* v___f_1270_; lean_object* v___f_1271_; lean_object* v___f_1272_; lean_object* v___f_1273_; lean_object* v___f_1274_; lean_object* v___f_1275_; lean_object* v___f_1276_; lean_object* v___f_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v_toApplicative_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1344_; 
v___f_1270_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0));
v___f_1271_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1272_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
v___f_1273_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1274_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
v___f_1275_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1275_, 0, v___f_1274_);
lean_closure_set(v___f_1275_, 1, v___f_1273_);
v___f_1276_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1276_, 0, v___f_1273_);
v___f_1277_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5));
v___x_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1278_, 0, v___f_1270_);
lean_ctor_set(v___x_1278_, 1, v___f_1271_);
v___x_1279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
lean_ctor_set(v___x_1279_, 1, v___f_1272_);
lean_ctor_set(v___x_1279_, 2, v___f_1275_);
lean_ctor_set(v___x_1279_, 3, v___f_1276_);
lean_ctor_set(v___x_1279_, 4, v___f_1277_);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1279_);
lean_ctor_set(v___x_1280_, 1, v___f_1273_);
v___x_1281_ = l_StateRefT_x27_instMonad___redArg(v___x_1280_);
v_toApplicative_1282_ = lean_ctor_get(v___x_1281_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1281_);
if (v_isSharedCheck_1344_ == 0)
{
lean_object* v_unused_1345_; 
v_unused_1345_ = lean_ctor_get(v___x_1281_, 1);
lean_dec(v_unused_1345_);
v___x_1284_ = v___x_1281_;
v_isShared_1285_ = v_isSharedCheck_1344_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_toApplicative_1282_);
lean_dec(v___x_1281_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1344_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v_toFunctor_1286_; lean_object* v_toSeq_1287_; lean_object* v_toSeqLeft_1288_; lean_object* v_toSeqRight_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1342_; 
v_toFunctor_1286_ = lean_ctor_get(v_toApplicative_1282_, 0);
v_toSeq_1287_ = lean_ctor_get(v_toApplicative_1282_, 2);
v_toSeqLeft_1288_ = lean_ctor_get(v_toApplicative_1282_, 3);
v_toSeqRight_1289_ = lean_ctor_get(v_toApplicative_1282_, 4);
v_isSharedCheck_1342_ = !lean_is_exclusive(v_toApplicative_1282_);
if (v_isSharedCheck_1342_ == 0)
{
lean_object* v_unused_1343_; 
v_unused_1343_ = lean_ctor_get(v_toApplicative_1282_, 1);
lean_dec(v_unused_1343_);
v___x_1291_ = v_toApplicative_1282_;
v_isShared_1292_ = v_isSharedCheck_1342_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_toSeqRight_1289_);
lean_inc(v_toSeqLeft_1288_);
lean_inc(v_toSeq_1287_);
lean_inc(v_toFunctor_1286_);
lean_dec(v_toApplicative_1282_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1342_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___f_1293_; lean_object* v___f_1294_; lean_object* v___f_1295_; lean_object* v___f_1296_; lean_object* v___x_1297_; lean_object* v___f_1298_; lean_object* v___f_1299_; lean_object* v___f_1300_; lean_object* v___x_1302_; 
v___f_1293_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__6));
v___f_1294_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__7));
lean_inc_ref(v_toFunctor_1286_);
v___f_1295_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1295_, 0, v_toFunctor_1286_);
v___f_1296_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1296_, 0, v_toFunctor_1286_);
v___x_1297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1297_, 0, v___f_1295_);
lean_ctor_set(v___x_1297_, 1, v___f_1296_);
v___f_1298_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1298_, 0, v_toSeqRight_1289_);
v___f_1299_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1299_, 0, v_toSeqLeft_1288_);
v___f_1300_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1300_, 0, v_toSeq_1287_);
if (v_isShared_1292_ == 0)
{
lean_ctor_set(v___x_1291_, 4, v___f_1298_);
lean_ctor_set(v___x_1291_, 3, v___f_1299_);
lean_ctor_set(v___x_1291_, 2, v___f_1300_);
lean_ctor_set(v___x_1291_, 1, v___f_1293_);
lean_ctor_set(v___x_1291_, 0, v___x_1297_);
v___x_1302_ = v___x_1291_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v___x_1297_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v___f_1293_);
lean_ctor_set(v_reuseFailAlloc_1341_, 2, v___f_1300_);
lean_ctor_set(v_reuseFailAlloc_1341_, 3, v___f_1299_);
lean_ctor_set(v_reuseFailAlloc_1341_, 4, v___f_1298_);
v___x_1302_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
lean_object* v___x_1304_; 
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 1, v___f_1294_);
lean_ctor_set(v___x_1284_, 0, v___x_1302_);
v___x_1304_ = v___x_1284_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___f_1294_);
v___x_1304_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
lean_object* v___x_1305_; lean_object* v_toApplicative_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1338_; 
v___x_1305_ = l_StateRefT_x27_instMonad___redArg(v___x_1304_);
v_toApplicative_1306_ = lean_ctor_get(v___x_1305_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1305_);
if (v_isSharedCheck_1338_ == 0)
{
lean_object* v_unused_1339_; 
v_unused_1339_ = lean_ctor_get(v___x_1305_, 1);
lean_dec(v_unused_1339_);
v___x_1308_ = v___x_1305_;
v_isShared_1309_ = v_isSharedCheck_1338_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_toApplicative_1306_);
lean_dec(v___x_1305_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1338_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_toFunctor_1310_; lean_object* v_toSeq_1311_; lean_object* v_toSeqLeft_1312_; lean_object* v_toSeqRight_1313_; lean_object* v___x_1315_; uint8_t v_isShared_1316_; uint8_t v_isSharedCheck_1336_; 
v_toFunctor_1310_ = lean_ctor_get(v_toApplicative_1306_, 0);
v_toSeq_1311_ = lean_ctor_get(v_toApplicative_1306_, 2);
v_toSeqLeft_1312_ = lean_ctor_get(v_toApplicative_1306_, 3);
v_toSeqRight_1313_ = lean_ctor_get(v_toApplicative_1306_, 4);
v_isSharedCheck_1336_ = !lean_is_exclusive(v_toApplicative_1306_);
if (v_isSharedCheck_1336_ == 0)
{
lean_object* v_unused_1337_; 
v_unused_1337_ = lean_ctor_get(v_toApplicative_1306_, 1);
lean_dec(v_unused_1337_);
v___x_1315_ = v_toApplicative_1306_;
v_isShared_1316_ = v_isSharedCheck_1336_;
goto v_resetjp_1314_;
}
else
{
lean_inc(v_toSeqRight_1313_);
lean_inc(v_toSeqLeft_1312_);
lean_inc(v_toSeq_1311_);
lean_inc(v_toFunctor_1310_);
lean_dec(v_toApplicative_1306_);
v___x_1315_ = lean_box(0);
v_isShared_1316_ = v_isSharedCheck_1336_;
goto v_resetjp_1314_;
}
v_resetjp_1314_:
{
lean_object* v___f_1317_; lean_object* v___f_1318_; lean_object* v___f_1319_; lean_object* v___f_1320_; lean_object* v___x_1321_; lean_object* v___f_1322_; lean_object* v___f_1323_; lean_object* v___f_1324_; lean_object* v___x_1326_; 
v___f_1317_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__8));
v___f_1318_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__9));
lean_inc_ref(v_toFunctor_1310_);
v___f_1319_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1319_, 0, v_toFunctor_1310_);
v___f_1320_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1320_, 0, v_toFunctor_1310_);
v___x_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1321_, 0, v___f_1319_);
lean_ctor_set(v___x_1321_, 1, v___f_1320_);
v___f_1322_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1322_, 0, v_toSeqRight_1313_);
v___f_1323_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1323_, 0, v_toSeqLeft_1312_);
v___f_1324_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1324_, 0, v_toSeq_1311_);
if (v_isShared_1316_ == 0)
{
lean_ctor_set(v___x_1315_, 4, v___f_1322_);
lean_ctor_set(v___x_1315_, 3, v___f_1323_);
lean_ctor_set(v___x_1315_, 2, v___f_1324_);
lean_ctor_set(v___x_1315_, 1, v___f_1317_);
lean_ctor_set(v___x_1315_, 0, v___x_1321_);
v___x_1326_ = v___x_1315_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1335_; 
v_reuseFailAlloc_1335_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1335_, 0, v___x_1321_);
lean_ctor_set(v_reuseFailAlloc_1335_, 1, v___f_1317_);
lean_ctor_set(v_reuseFailAlloc_1335_, 2, v___f_1324_);
lean_ctor_set(v_reuseFailAlloc_1335_, 3, v___f_1323_);
lean_ctor_set(v_reuseFailAlloc_1335_, 4, v___f_1322_);
v___x_1326_ = v_reuseFailAlloc_1335_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1328_; 
if (v_isShared_1309_ == 0)
{
lean_ctor_set(v___x_1308_, 1, v___f_1318_);
lean_ctor_set(v___x_1308_, 0, v___x_1326_);
v___x_1328_ = v___x_1308_;
goto v_reusejp_1327_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1326_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v___f_1318_);
v___x_1328_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1327_;
}
v_reusejp_1327_:
{
lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_31940__overap_1332_; lean_object* v___x_1333_; 
v___x_1329_ = l_StateRefT_x27_instMonad___redArg(v___x_1328_);
v___x_1330_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1331_ = l_instInhabitedOfMonad___redArg(v___x_1329_, v___x_1330_);
v___x_31940__overap_1332_ = lean_panic_fn_borrowed(v___x_1331_, v_msg_1263_);
lean_dec(v___x_1331_);
lean_inc(v___y_1268_);
lean_inc_ref(v___y_1267_);
lean_inc(v___y_1266_);
lean_inc_ref(v___y_1265_);
lean_inc(v___y_1264_);
v___x_1333_ = lean_apply_6(v___x_31940__overap_1332_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_, v___y_1268_, lean_box(0));
return v___x_1333_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object* v_msg_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v_res_1353_; 
v_res_1353_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v_msg_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_, v___y_1351_);
lean_dec(v___y_1351_);
lean_dec_ref(v___y_1350_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1347_);
return v_res_1353_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2(void){
_start:
{
lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1356_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1357_ = lean_unsigned_to_nat(9u);
v___x_1358_ = lean_unsigned_to_nat(650u);
v___x_1359_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__1));
v___x_1360_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__0));
v___x_1361_ = l_mkPanicMessageWithDecl(v___x_1360_, v___x_1359_, v___x_1358_, v___x_1357_, v___x_1356_);
return v___x_1361_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4(void){
_start:
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; 
v___x_1364_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__3));
v___x_1365_ = lean_unsigned_to_nat(66u);
v___x_1366_ = lean_unsigned_to_nat(363u);
v___x_1367_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1368_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1369_ = l_mkPanicMessageWithDecl(v___x_1368_, v___x_1367_, v___x_1366_, v___x_1365_, v___x_1364_);
return v___x_1369_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5(void){
_start:
{
lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; 
v___x_1370_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1371_ = lean_unsigned_to_nat(27u);
v___x_1372_ = lean_unsigned_to_nat(319u);
v___x_1373_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1374_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1375_ = l_mkPanicMessageWithDecl(v___x_1374_, v___x_1373_, v___x_1372_, v___x_1371_, v___x_1370_);
return v___x_1375_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1(void){
_start:
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1430_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1431_ = lean_unsigned_to_nat(2u);
v___x_1432_ = lean_unsigned_to_nat(302u);
v___x_1433_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1434_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1435_ = l_mkPanicMessageWithDecl(v___x_1434_, v___x_1433_, v___x_1432_, v___x_1431_, v___x_1430_);
return v___x_1435_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3(void){
_start:
{
lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1437_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__2));
v___x_1438_ = lean_unsigned_to_nat(2u);
v___x_1439_ = lean_unsigned_to_nat(304u);
v___x_1440_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1441_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1442_ = l_mkPanicMessageWithDecl(v___x_1441_, v___x_1440_, v___x_1439_, v___x_1438_, v___x_1437_);
return v___x_1442_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5(void){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1444_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__4));
v___x_1445_ = lean_unsigned_to_nat(2u);
v___x_1446_ = lean_unsigned_to_nat(305u);
v___x_1447_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1448_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1449_ = l_mkPanicMessageWithDecl(v___x_1448_, v___x_1447_, v___x_1446_, v___x_1445_, v___x_1444_);
return v___x_1449_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1450_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6(void){
_start:
{
lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1451_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1452_ = lean_unsigned_to_nat(41u);
v___x_1453_ = lean_unsigned_to_nat(303u);
v___x_1454_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1455_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1456_ = l_mkPanicMessageWithDecl(v___x_1455_, v___x_1454_, v___x_1453_, v___x_1452_, v___x_1451_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object* v_info_1457_, lean_object* v_c_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_discr_1465_; lean_object* v_alts_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1544_; 
v_discr_1465_ = lean_ctor_get(v_c_1458_, 2);
v_alts_1466_ = lean_ctor_get(v_c_1458_, 3);
v_isSharedCheck_1544_ = !lean_is_exclusive(v_c_1458_);
if (v_isSharedCheck_1544_ == 0)
{
lean_object* v_unused_1545_; lean_object* v_unused_1546_; 
v_unused_1545_ = lean_ctor_get(v_c_1458_, 1);
lean_dec(v_unused_1545_);
v_unused_1546_ = lean_ctor_get(v_c_1458_, 0);
lean_dec(v_unused_1546_);
v___x_1468_ = v_c_1458_;
v_isShared_1469_ = v_isSharedCheck_1544_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_alts_1466_);
lean_inc(v_discr_1465_);
lean_dec(v_c_1458_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1544_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v___x_1471_; uint8_t v___x_1472_; 
v___x_1470_ = lean_array_get_size(v_alts_1466_);
v___x_1471_ = lean_unsigned_to_nat(1u);
v___x_1472_ = lean_nat_dec_eq(v___x_1470_, v___x_1471_);
if (v___x_1472_ == 0)
{
lean_object* v___x_1473_; lean_object* v___x_1474_; 
lean_del_object(v___x_1468_);
lean_dec_ref(v_alts_1466_);
lean_dec(v_discr_1465_);
v___x_1473_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__1, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1);
v___x_1474_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1473_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1474_;
}
else
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1475_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1476_ = lean_unsigned_to_nat(0u);
v___x_1477_ = lean_array_get(v___x_1475_, v_alts_1466_, v___x_1476_);
lean_dec_ref(v_alts_1466_);
if (lean_obj_tag(v___x_1477_) == 0)
{
lean_object* v_ctorName_1478_; lean_object* v_params_1479_; lean_object* v_code_1480_; lean_object* v_ctorName_1481_; lean_object* v_fieldIdx_1482_; uint8_t v___x_1483_; 
v_ctorName_1478_ = lean_ctor_get(v___x_1477_, 0);
lean_inc(v_ctorName_1478_);
v_params_1479_ = lean_ctor_get(v___x_1477_, 1);
lean_inc_ref(v_params_1479_);
v_code_1480_ = lean_ctor_get(v___x_1477_, 2);
lean_inc_ref(v_code_1480_);
lean_dec_ref_known(v___x_1477_, 3);
v_ctorName_1481_ = lean_ctor_get(v_info_1457_, 0);
v_fieldIdx_1482_ = lean_ctor_get(v_info_1457_, 2);
v___x_1483_ = lean_name_eq(v_ctorName_1478_, v_ctorName_1481_);
lean_dec(v_ctorName_1478_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; lean_object* v___x_1485_; 
lean_dec_ref(v_code_1480_);
lean_dec_ref(v_params_1479_);
lean_del_object(v___x_1468_);
lean_dec(v_discr_1465_);
v___x_1484_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__3, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3);
v___x_1485_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1484_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1485_;
}
else
{
lean_object* v___x_1486_; uint8_t v___x_1487_; 
v___x_1486_ = lean_array_get_size(v_params_1479_);
v___x_1487_ = lean_nat_dec_lt(v_fieldIdx_1482_, v___x_1486_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
lean_dec_ref(v_code_1480_);
lean_dec_ref(v_params_1479_);
lean_del_object(v___x_1468_);
lean_dec(v_discr_1465_);
v___x_1488_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__5, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5);
v___x_1489_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1488_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1489_;
}
else
{
uint8_t v___x_1490_; lean_object* v___x_1491_; lean_object* v_p_1492_; lean_object* v___x_1493_; 
v___x_1490_ = 0;
v___x_1491_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v_p_1492_ = lean_array_get(v___x_1491_, v_params_1479_, v_fieldIdx_1482_);
v___x_1493_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1490_, v_params_1479_, v___y_1461_);
lean_dec_ref(v_params_1479_);
if (lean_obj_tag(v___x_1493_) == 0)
{
lean_object* v_fvarId_1494_; lean_object* v_binderName_1495_; lean_object* v_type_1496_; lean_object* v___x_1497_; 
lean_dec_ref_known(v___x_1493_, 1);
v_fvarId_1494_ = lean_ctor_get(v_p_1492_, 0);
lean_inc(v_fvarId_1494_);
v_binderName_1495_ = lean_ctor_get(v_p_1492_, 1);
lean_inc(v_binderName_1495_);
v_type_1496_ = lean_ctor_get(v_p_1492_, 2);
lean_inc_ref(v_type_1496_);
lean_dec(v_p_1492_);
v___x_1497_ = l_Lean_Compiler_LCNF_toMonoType(v_type_1496_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1497_) == 0)
{
lean_object* v_a_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
v_a_1498_ = lean_ctor_get(v___x_1497_, 0);
lean_inc(v_a_1498_);
lean_dec_ref_known(v___x_1497_, 1);
v___x_1499_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_1500_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1500_, 0, v_discr_1465_);
lean_ctor_set(v___x_1500_, 1, v___x_1499_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set(v___x_1468_, 3, v___x_1500_);
lean_ctor_set(v___x_1468_, 2, v_a_1498_);
lean_ctor_set(v___x_1468_, 1, v_binderName_1495_);
lean_ctor_set(v___x_1468_, 0, v_fvarId_1494_);
v___x_1502_ = v___x_1468_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1525_; 
v_reuseFailAlloc_1525_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1525_, 0, v_fvarId_1494_);
lean_ctor_set(v_reuseFailAlloc_1525_, 1, v_binderName_1495_);
lean_ctor_set(v_reuseFailAlloc_1525_, 2, v_a_1498_);
lean_ctor_set(v_reuseFailAlloc_1525_, 3, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1525_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1503_; lean_object* v_lctx_1504_; lean_object* v_nextIdx_1505_; lean_object* v___x_1507_; uint8_t v_isShared_1508_; uint8_t v_isSharedCheck_1524_; 
v___x_1503_ = lean_st_ref_take(v___y_1461_);
v_lctx_1504_ = lean_ctor_get(v___x_1503_, 0);
v_nextIdx_1505_ = lean_ctor_get(v___x_1503_, 1);
v_isSharedCheck_1524_ = !lean_is_exclusive(v___x_1503_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1507_ = v___x_1503_;
v_isShared_1508_ = v_isSharedCheck_1524_;
goto v_resetjp_1506_;
}
else
{
lean_inc(v_nextIdx_1505_);
lean_inc(v_lctx_1504_);
lean_dec(v___x_1503_);
v___x_1507_ = lean_box(0);
v_isShared_1508_ = v_isSharedCheck_1524_;
goto v_resetjp_1506_;
}
v_resetjp_1506_:
{
lean_object* v___x_1509_; lean_object* v___x_1511_; 
lean_inc_ref(v___x_1502_);
v___x_1509_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1490_, v_lctx_1504_, v___x_1502_);
if (v_isShared_1508_ == 0)
{
lean_ctor_set(v___x_1507_, 0, v___x_1509_);
v___x_1511_ = v___x_1507_;
goto v_reusejp_1510_;
}
else
{
lean_object* v_reuseFailAlloc_1523_; 
v_reuseFailAlloc_1523_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1523_, 0, v___x_1509_);
lean_ctor_set(v_reuseFailAlloc_1523_, 1, v_nextIdx_1505_);
v___x_1511_ = v_reuseFailAlloc_1523_;
goto v_reusejp_1510_;
}
v_reusejp_1510_:
{
lean_object* v___x_1512_; lean_object* v___x_1513_; 
v___x_1512_ = lean_st_ref_put(v___y_1461_, v___x_1511_);
v___x_1513_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1480_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
if (lean_obj_tag(v___x_1513_) == 0)
{
lean_object* v_a_1514_; lean_object* v___x_1516_; uint8_t v_isShared_1517_; uint8_t v_isSharedCheck_1522_; 
v_a_1514_ = lean_ctor_get(v___x_1513_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v___x_1513_);
if (v_isSharedCheck_1522_ == 0)
{
v___x_1516_ = v___x_1513_;
v_isShared_1517_ = v_isSharedCheck_1522_;
goto v_resetjp_1515_;
}
else
{
lean_inc(v_a_1514_);
lean_dec(v___x_1513_);
v___x_1516_ = lean_box(0);
v_isShared_1517_ = v_isSharedCheck_1522_;
goto v_resetjp_1515_;
}
v_resetjp_1515_:
{
lean_object* v___x_1518_; lean_object* v___x_1520_; 
v___x_1518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1518_, 0, v___x_1502_);
lean_ctor_set(v___x_1518_, 1, v_a_1514_);
if (v_isShared_1517_ == 0)
{
lean_ctor_set(v___x_1516_, 0, v___x_1518_);
v___x_1520_ = v___x_1516_;
goto v_reusejp_1519_;
}
else
{
lean_object* v_reuseFailAlloc_1521_; 
v_reuseFailAlloc_1521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1521_, 0, v___x_1518_);
v___x_1520_ = v_reuseFailAlloc_1521_;
goto v_reusejp_1519_;
}
v_reusejp_1519_:
{
return v___x_1520_;
}
}
}
else
{
lean_dec_ref(v___x_1502_);
return v___x_1513_;
}
}
}
}
}
else
{
lean_object* v_a_1526_; lean_object* v___x_1528_; uint8_t v_isShared_1529_; uint8_t v_isSharedCheck_1533_; 
lean_dec(v_binderName_1495_);
lean_dec(v_fvarId_1494_);
lean_dec_ref(v_code_1480_);
lean_del_object(v___x_1468_);
lean_dec(v_discr_1465_);
v_a_1526_ = lean_ctor_get(v___x_1497_, 0);
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1497_);
if (v_isSharedCheck_1533_ == 0)
{
v___x_1528_ = v___x_1497_;
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
else
{
lean_inc(v_a_1526_);
lean_dec(v___x_1497_);
v___x_1528_ = lean_box(0);
v_isShared_1529_ = v_isSharedCheck_1533_;
goto v_resetjp_1527_;
}
v_resetjp_1527_:
{
lean_object* v___x_1531_; 
if (v_isShared_1529_ == 0)
{
v___x_1531_ = v___x_1528_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v_a_1526_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
}
else
{
lean_object* v_a_1534_; lean_object* v___x_1536_; uint8_t v_isShared_1537_; uint8_t v_isSharedCheck_1541_; 
lean_dec(v_p_1492_);
lean_dec_ref(v_code_1480_);
lean_del_object(v___x_1468_);
lean_dec(v_discr_1465_);
v_a_1534_ = lean_ctor_get(v___x_1493_, 0);
v_isSharedCheck_1541_ = !lean_is_exclusive(v___x_1493_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1536_ = v___x_1493_;
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
else
{
lean_inc(v_a_1534_);
lean_dec(v___x_1493_);
v___x_1536_ = lean_box(0);
v_isShared_1537_ = v_isSharedCheck_1541_;
goto v_resetjp_1535_;
}
v_resetjp_1535_:
{
lean_object* v___x_1539_; 
if (v_isShared_1537_ == 0)
{
v___x_1539_ = v___x_1536_;
goto v_reusejp_1538_;
}
else
{
lean_object* v_reuseFailAlloc_1540_; 
v_reuseFailAlloc_1540_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1540_, 0, v_a_1534_);
v___x_1539_ = v_reuseFailAlloc_1540_;
goto v_reusejp_1538_;
}
v_reusejp_1538_:
{
return v___x_1539_;
}
}
}
}
}
}
else
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
lean_dec(v___x_1477_);
lean_del_object(v___x_1468_);
lean_dec(v_discr_1465_);
v___x_1542_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__6, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6);
v___x_1543_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1542_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_);
return v___x_1543_;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2(void){
_start:
{
lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1551_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1));
v___x_1552_ = lean_unsigned_to_nat(70u);
v___x_1553_ = lean_unsigned_to_nat(373u);
v___x_1554_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1555_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1556_ = l_mkPanicMessageWithDecl(v___x_1555_, v___x_1554_, v___x_1553_, v___x_1552_, v___x_1551_);
return v___x_1556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object* v___x_1557_, uint8_t v___x_1558_, size_t v_sz_1559_, size_t v_i_1560_, lean_object* v_bs_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_){
_start:
{
uint8_t v___x_1568_; 
v___x_1568_ = lean_usize_dec_lt(v_i_1560_, v_sz_1559_);
if (v___x_1568_ == 0)
{
lean_object* v___x_1569_; 
lean_dec_ref(v___x_1557_);
v___x_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1569_, 0, v_bs_1561_);
return v___x_1569_;
}
else
{
lean_object* v_v_1570_; lean_object* v___x_1571_; lean_object* v_bs_x27_1572_; lean_object* v_a_1574_; lean_object* v___y_1580_; lean_object* v___y_1581_; lean_object* v___y_1582_; lean_object* v___y_1583_; lean_object* v___y_1584_; 
v_v_1570_ = lean_array_uget(v_bs_1561_, v_i_1560_);
v___x_1571_ = lean_unsigned_to_nat(0u);
v_bs_x27_1572_ = lean_array_uset(v_bs_1561_, v_i_1560_, v___x_1571_);
if (lean_obj_tag(v_v_1570_) == 0)
{
lean_object* v_ctorName_1596_; lean_object* v_params_1597_; lean_object* v_code_1598_; lean_object* v___x_1600_; uint8_t v_isShared_1601_; uint8_t v_isSharedCheck_1636_; 
v_ctorName_1596_ = lean_ctor_get(v_v_1570_, 0);
v_params_1597_ = lean_ctor_get(v_v_1570_, 1);
v_code_1598_ = lean_ctor_get(v_v_1570_, 2);
v_isSharedCheck_1636_ = !lean_is_exclusive(v_v_1570_);
if (v_isSharedCheck_1636_ == 0)
{
v___x_1600_ = v_v_1570_;
v_isShared_1601_ = v_isSharedCheck_1636_;
goto v_resetjp_1599_;
}
else
{
lean_inc(v_code_1598_);
lean_inc(v_params_1597_);
lean_inc(v_ctorName_1596_);
lean_dec(v_v_1570_);
v___x_1600_ = lean_box(0);
v_isShared_1601_ = v_isSharedCheck_1636_;
goto v_resetjp_1599_;
}
v_resetjp_1599_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; 
v___x_1602_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4));
v___x_1603_ = l_Lean_Name_append(v_ctorName_1596_, v___x_1602_);
lean_inc(v___x_1603_);
lean_inc_ref(v___x_1557_);
v___x_1604_ = l_Lean_Environment_find_x3f(v___x_1557_, v___x_1603_, v___x_1558_);
if (lean_obj_tag(v___x_1604_) == 1)
{
lean_object* v_val_1605_; 
v_val_1605_ = lean_ctor_get(v___x_1604_, 0);
lean_inc(v_val_1605_);
lean_dec_ref_known(v___x_1604_, 1);
if (lean_obj_tag(v_val_1605_) == 6)
{
lean_object* v_val_1606_; lean_object* v_toConstantVal_1607_; lean_object* v_numParams_1608_; lean_object* v_numFields_1609_; lean_object* v_type_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; 
v_val_1606_ = lean_ctor_get(v_val_1605_, 0);
lean_inc_ref(v_val_1606_);
lean_dec_ref_known(v_val_1605_, 1);
v_toConstantVal_1607_ = lean_ctor_get(v_val_1606_, 0);
lean_inc_ref(v_toConstantVal_1607_);
v_numParams_1608_ = lean_ctor_get(v_val_1606_, 3);
lean_inc(v_numParams_1608_);
v_numFields_1609_ = lean_ctor_get(v_val_1606_, 4);
lean_inc(v_numFields_1609_);
lean_dec_ref(v_val_1606_);
v_type_1610_ = lean_ctor_get(v_toConstantVal_1607_, 2);
lean_inc_ref(v_type_1610_);
lean_dec_ref(v_toConstantVal_1607_);
v___x_1611_ = lean_array_get_size(v_params_1597_);
v___x_1612_ = lean_nat_sub(v_numFields_1609_, v___x_1611_);
lean_dec(v_numFields_1609_);
v___x_1613_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_type_1610_, v_numParams_1608_, v___x_1612_, v_params_1597_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec_ref(v_params_1597_);
lean_dec(v___x_1612_);
lean_dec(v_numParams_1608_);
if (lean_obj_tag(v___x_1613_) == 0)
{
lean_object* v_a_1614_; lean_object* v___x_1615_; 
v_a_1614_ = lean_ctor_get(v___x_1613_, 0);
lean_inc(v_a_1614_);
lean_dec_ref_known(v___x_1613_, 1);
v___x_1615_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1598_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
if (lean_obj_tag(v___x_1615_) == 0)
{
lean_object* v_a_1616_; lean_object* v___x_1618_; 
v_a_1616_ = lean_ctor_get(v___x_1615_, 0);
lean_inc(v_a_1616_);
lean_dec_ref_known(v___x_1615_, 1);
if (v_isShared_1601_ == 0)
{
lean_ctor_set(v___x_1600_, 2, v_a_1616_);
lean_ctor_set(v___x_1600_, 1, v_a_1614_);
lean_ctor_set(v___x_1600_, 0, v___x_1603_);
v___x_1618_ = v___x_1600_;
goto v_reusejp_1617_;
}
else
{
lean_object* v_reuseFailAlloc_1619_; 
v_reuseFailAlloc_1619_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1619_, 0, v___x_1603_);
lean_ctor_set(v_reuseFailAlloc_1619_, 1, v_a_1614_);
lean_ctor_set(v_reuseFailAlloc_1619_, 2, v_a_1616_);
v___x_1618_ = v_reuseFailAlloc_1619_;
goto v_reusejp_1617_;
}
v_reusejp_1617_:
{
v_a_1574_ = v___x_1618_;
goto v___jp_1573_;
}
}
else
{
lean_object* v_a_1620_; lean_object* v___x_1622_; uint8_t v_isShared_1623_; uint8_t v_isSharedCheck_1627_; 
lean_dec(v_a_1614_);
lean_dec(v___x_1603_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_bs_x27_1572_);
lean_dec_ref(v___x_1557_);
v_a_1620_ = lean_ctor_get(v___x_1615_, 0);
v_isSharedCheck_1627_ = !lean_is_exclusive(v___x_1615_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1622_ = v___x_1615_;
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
else
{
lean_inc(v_a_1620_);
lean_dec(v___x_1615_);
v___x_1622_ = lean_box(0);
v_isShared_1623_ = v_isSharedCheck_1627_;
goto v_resetjp_1621_;
}
v_resetjp_1621_:
{
lean_object* v___x_1625_; 
if (v_isShared_1623_ == 0)
{
v___x_1625_ = v___x_1622_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v_a_1620_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
}
}
else
{
lean_object* v_a_1628_; lean_object* v___x_1630_; uint8_t v_isShared_1631_; uint8_t v_isSharedCheck_1635_; 
lean_dec(v___x_1603_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_code_1598_);
lean_dec_ref(v_bs_x27_1572_);
lean_dec_ref(v___x_1557_);
v_a_1628_ = lean_ctor_get(v___x_1613_, 0);
v_isSharedCheck_1635_ = !lean_is_exclusive(v___x_1613_);
if (v_isSharedCheck_1635_ == 0)
{
v___x_1630_ = v___x_1613_;
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
else
{
lean_inc(v_a_1628_);
lean_dec(v___x_1613_);
v___x_1630_ = lean_box(0);
v_isShared_1631_ = v_isSharedCheck_1635_;
goto v_resetjp_1629_;
}
v_resetjp_1629_:
{
lean_object* v___x_1633_; 
if (v_isShared_1631_ == 0)
{
v___x_1633_ = v___x_1630_;
goto v_reusejp_1632_;
}
else
{
lean_object* v_reuseFailAlloc_1634_; 
v_reuseFailAlloc_1634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1634_, 0, v_a_1628_);
v___x_1633_ = v_reuseFailAlloc_1634_;
goto v_reusejp_1632_;
}
v_reusejp_1632_:
{
return v___x_1633_;
}
}
}
}
else
{
lean_dec(v_val_1605_);
lean_dec(v___x_1603_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_code_1598_);
lean_dec_ref(v_params_1597_);
v___y_1580_ = v___y_1562_;
v___y_1581_ = v___y_1563_;
v___y_1582_ = v___y_1564_;
v___y_1583_ = v___y_1565_;
v___y_1584_ = v___y_1566_;
goto v___jp_1579_;
}
}
else
{
lean_dec(v___x_1604_);
lean_dec(v___x_1603_);
lean_del_object(v___x_1600_);
lean_dec_ref(v_code_1598_);
lean_dec_ref(v_params_1597_);
v___y_1580_ = v___y_1562_;
v___y_1581_ = v___y_1563_;
v___y_1582_ = v___y_1564_;
v___y_1583_ = v___y_1565_;
v___y_1584_ = v___y_1566_;
goto v___jp_1579_;
}
}
}
else
{
lean_object* v_code_1637_; lean_object* v___x_1638_; 
v_code_1637_ = lean_ctor_get(v_v_1570_, 0);
lean_inc_ref(v_code_1637_);
v___x_1638_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1637_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
if (lean_obj_tag(v___x_1638_) == 0)
{
lean_object* v_a_1639_; lean_object* v___x_1640_; 
v_a_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_a_1639_);
lean_dec_ref_known(v___x_1638_, 1);
v___x_1640_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_1570_, v_a_1639_);
v_a_1574_ = v___x_1640_;
goto v___jp_1573_;
}
else
{
lean_object* v_a_1641_; lean_object* v___x_1643_; uint8_t v_isShared_1644_; uint8_t v_isSharedCheck_1648_; 
lean_dec_ref_known(v_v_1570_, 1);
lean_dec_ref(v_bs_x27_1572_);
lean_dec_ref(v___x_1557_);
v_a_1641_ = lean_ctor_get(v___x_1638_, 0);
v_isSharedCheck_1648_ = !lean_is_exclusive(v___x_1638_);
if (v_isSharedCheck_1648_ == 0)
{
v___x_1643_ = v___x_1638_;
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
else
{
lean_inc(v_a_1641_);
lean_dec(v___x_1638_);
v___x_1643_ = lean_box(0);
v_isShared_1644_ = v_isSharedCheck_1648_;
goto v_resetjp_1642_;
}
v_resetjp_1642_:
{
lean_object* v___x_1646_; 
if (v_isShared_1644_ == 0)
{
v___x_1646_ = v___x_1643_;
goto v_reusejp_1645_;
}
else
{
lean_object* v_reuseFailAlloc_1647_; 
v_reuseFailAlloc_1647_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1647_, 0, v_a_1641_);
v___x_1646_ = v_reuseFailAlloc_1647_;
goto v_reusejp_1645_;
}
v_reusejp_1645_:
{
return v___x_1646_;
}
}
}
}
v___jp_1573_:
{
size_t v___x_1575_; size_t v___x_1576_; lean_object* v___x_1577_; 
v___x_1575_ = ((size_t)1ULL);
v___x_1576_ = lean_usize_add(v_i_1560_, v___x_1575_);
v___x_1577_ = lean_array_uset(v_bs_x27_1572_, v_i_1560_, v_a_1574_);
v_i_1560_ = v___x_1576_;
v_bs_1561_ = v___x_1577_;
goto _start;
}
v___jp_1579_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; 
v___x_1585_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2);
v___x_1586_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v___x_1585_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_, v___y_1584_);
if (lean_obj_tag(v___x_1586_) == 0)
{
lean_object* v_a_1587_; 
v_a_1587_ = lean_ctor_get(v___x_1586_, 0);
lean_inc(v_a_1587_);
lean_dec_ref_known(v___x_1586_, 1);
v_a_1574_ = v_a_1587_;
goto v___jp_1573_;
}
else
{
lean_object* v_a_1588_; lean_object* v___x_1590_; uint8_t v_isShared_1591_; uint8_t v_isSharedCheck_1595_; 
lean_dec_ref(v_bs_x27_1572_);
lean_dec_ref(v___x_1557_);
v_a_1588_ = lean_ctor_get(v___x_1586_, 0);
v_isSharedCheck_1595_ = !lean_is_exclusive(v___x_1586_);
if (v_isSharedCheck_1595_ == 0)
{
v___x_1590_ = v___x_1586_;
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
else
{
lean_inc(v_a_1588_);
lean_dec(v___x_1586_);
v___x_1590_ = lean_box(0);
v_isShared_1591_ = v_isSharedCheck_1595_;
goto v_resetjp_1589_;
}
v_resetjp_1589_:
{
lean_object* v___x_1593_; 
if (v_isShared_1591_ == 0)
{
v___x_1593_ = v___x_1590_;
goto v_reusejp_1592_;
}
else
{
lean_object* v_reuseFailAlloc_1594_; 
v_reuseFailAlloc_1594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1594_, 0, v_a_1588_);
v___x_1593_ = v_reuseFailAlloc_1594_;
goto v_reusejp_1592_;
}
v_reusejp_1592_:
{
return v___x_1593_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(size_t v_sz_1649_, size_t v_i_1650_, lean_object* v_bs_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
uint8_t v___x_1658_; 
v___x_1658_ = lean_usize_dec_lt(v_i_1650_, v_sz_1649_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; 
v___x_1659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1659_, 0, v_bs_1651_);
return v___x_1659_;
}
else
{
lean_object* v_v_1660_; lean_object* v___x_1661_; lean_object* v_bs_x27_1662_; lean_object* v_a_1664_; 
v_v_1660_ = lean_array_uget(v_bs_1651_, v_i_1650_);
v___x_1661_ = lean_unsigned_to_nat(0u);
v_bs_x27_1662_ = lean_array_uset(v_bs_1651_, v_i_1650_, v___x_1661_);
if (lean_obj_tag(v_v_1660_) == 0)
{
lean_object* v_params_1669_; lean_object* v_code_1670_; uint8_t v___x_1671_; size_t v_sz_1672_; size_t v___x_1673_; lean_object* v___x_1674_; 
v_params_1669_ = lean_ctor_get(v_v_1660_, 1);
v_code_1670_ = lean_ctor_get(v_v_1660_, 2);
v___x_1671_ = 0;
v_sz_1672_ = lean_array_size(v_params_1669_);
v___x_1673_ = ((size_t)0ULL);
lean_inc_ref(v_params_1669_);
v___x_1674_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_1672_, v___x_1673_, v_params_1669_, v___y_1652_, v___y_1654_, v___y_1655_, v___y_1656_);
if (lean_obj_tag(v___x_1674_) == 0)
{
lean_object* v_a_1675_; lean_object* v___x_1676_; 
v_a_1675_ = lean_ctor_get(v___x_1674_, 0);
lean_inc(v_a_1675_);
lean_dec_ref_known(v___x_1674_, 1);
lean_inc_ref(v_code_1670_);
v___x_1676_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1670_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
if (lean_obj_tag(v___x_1676_) == 0)
{
lean_object* v_a_1677_; lean_object* v___x_1678_; 
v_a_1677_ = lean_ctor_get(v___x_1676_, 0);
lean_inc(v_a_1677_);
lean_dec_ref_known(v___x_1676_, 1);
v___x_1678_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v___x_1671_, v_v_1660_, v_a_1675_, v_a_1677_);
v_a_1664_ = v___x_1678_;
goto v___jp_1663_;
}
else
{
lean_object* v_a_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1686_; 
lean_dec(v_a_1675_);
lean_dec_ref_known(v_v_1660_, 3);
lean_dec_ref(v_bs_x27_1662_);
v_a_1679_ = lean_ctor_get(v___x_1676_, 0);
v_isSharedCheck_1686_ = !lean_is_exclusive(v___x_1676_);
if (v_isSharedCheck_1686_ == 0)
{
v___x_1681_ = v___x_1676_;
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_a_1679_);
lean_dec(v___x_1676_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1686_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v___x_1684_; 
if (v_isShared_1682_ == 0)
{
v___x_1684_ = v___x_1681_;
goto v_reusejp_1683_;
}
else
{
lean_object* v_reuseFailAlloc_1685_; 
v_reuseFailAlloc_1685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1685_, 0, v_a_1679_);
v___x_1684_ = v_reuseFailAlloc_1685_;
goto v_reusejp_1683_;
}
v_reusejp_1683_:
{
return v___x_1684_;
}
}
}
}
else
{
lean_dec_ref_known(v_v_1660_, 3);
lean_dec_ref(v_bs_x27_1662_);
return v___x_1674_;
}
}
else
{
lean_object* v_code_1687_; lean_object* v___x_1688_; 
v_code_1687_ = lean_ctor_get(v_v_1660_, 0);
lean_inc_ref(v_code_1687_);
v___x_1688_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1687_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
if (lean_obj_tag(v___x_1688_) == 0)
{
lean_object* v_a_1689_; lean_object* v___x_1690_; 
v_a_1689_ = lean_ctor_get(v___x_1688_, 0);
lean_inc(v_a_1689_);
lean_dec_ref_known(v___x_1688_, 1);
v___x_1690_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_1660_, v_a_1689_);
v_a_1664_ = v___x_1690_;
goto v___jp_1663_;
}
else
{
lean_object* v_a_1691_; lean_object* v___x_1693_; uint8_t v_isShared_1694_; uint8_t v_isSharedCheck_1698_; 
lean_dec_ref_known(v_v_1660_, 1);
lean_dec_ref(v_bs_x27_1662_);
v_a_1691_ = lean_ctor_get(v___x_1688_, 0);
v_isSharedCheck_1698_ = !lean_is_exclusive(v___x_1688_);
if (v_isSharedCheck_1698_ == 0)
{
v___x_1693_ = v___x_1688_;
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
else
{
lean_inc(v_a_1691_);
lean_dec(v___x_1688_);
v___x_1693_ = lean_box(0);
v_isShared_1694_ = v_isSharedCheck_1698_;
goto v_resetjp_1692_;
}
v_resetjp_1692_:
{
lean_object* v___x_1696_; 
if (v_isShared_1694_ == 0)
{
v___x_1696_ = v___x_1693_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_a_1691_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
}
}
v___jp_1663_:
{
size_t v___x_1665_; size_t v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = ((size_t)1ULL);
v___x_1666_ = lean_usize_add(v_i_1650_, v___x_1665_);
v___x_1667_ = lean_array_uset(v_bs_x27_1662_, v_i_1650_, v_a_1664_);
v_i_1650_ = v___x_1666_;
v_bs_1651_ = v___x_1667_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; 
v___x_1700_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1701_ = lean_unsigned_to_nat(2u);
v___x_1702_ = lean_unsigned_to_nat(291u);
v___x_1703_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1704_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1705_ = l_mkPanicMessageWithDecl(v___x_1704_, v___x_1703_, v___x_1702_, v___x_1701_, v___x_1700_);
return v___x_1705_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1710_ = lean_box(0);
v___x_1711_ = lean_unsigned_to_nat(2u);
v___x_1712_ = lean_mk_empty_array_with_capacity(v___x_1711_);
v___x_1713_ = lean_array_push(v___x_1712_, v___x_1710_);
return v___x_1713_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1714_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1715_ = lean_unsigned_to_nat(34u);
v___x_1716_ = lean_unsigned_to_nat(292u);
v___x_1717_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1718_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1719_ = l_mkPanicMessageWithDecl(v___x_1718_, v___x_1717_, v___x_1716_, v___x_1715_, v___x_1714_);
return v___x_1719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object* v_c_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_discr_1727_; lean_object* v_alts_1728_; lean_object* v___x_1730_; uint8_t v_isShared_1731_; uint8_t v_isSharedCheck_1797_; 
v_discr_1727_ = lean_ctor_get(v_c_1720_, 2);
v_alts_1728_ = lean_ctor_get(v_c_1720_, 3);
v_isSharedCheck_1797_ = !lean_is_exclusive(v_c_1720_);
if (v_isSharedCheck_1797_ == 0)
{
lean_object* v_unused_1798_; lean_object* v_unused_1799_; 
v_unused_1798_ = lean_ctor_get(v_c_1720_, 1);
lean_dec(v_unused_1798_);
v_unused_1799_ = lean_ctor_get(v_c_1720_, 0);
lean_dec(v_unused_1799_);
v___x_1730_ = v_c_1720_;
v_isShared_1731_ = v_isSharedCheck_1797_;
goto v_resetjp_1729_;
}
else
{
lean_inc(v_alts_1728_);
lean_inc(v_discr_1727_);
lean_dec(v_c_1720_);
v___x_1730_ = lean_box(0);
v_isShared_1731_ = v_isSharedCheck_1797_;
goto v_resetjp_1729_;
}
v_resetjp_1729_:
{
lean_object* v___x_1732_; lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1732_ = lean_array_get_size(v_alts_1728_);
v___x_1733_ = lean_unsigned_to_nat(1u);
v___x_1734_ = lean_nat_dec_eq(v___x_1732_, v___x_1733_);
if (v___x_1734_ == 0)
{
lean_object* v___x_1735_; lean_object* v___x_1736_; 
lean_del_object(v___x_1730_);
lean_dec_ref(v_alts_1728_);
lean_dec(v_discr_1727_);
v___x_1735_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1);
v___x_1736_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1735_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
return v___x_1736_;
}
else
{
lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; 
v___x_1737_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1738_ = lean_unsigned_to_nat(0u);
v___x_1739_ = lean_array_get(v___x_1737_, v_alts_1728_, v___x_1738_);
lean_dec_ref(v_alts_1728_);
if (lean_obj_tag(v___x_1739_) == 0)
{
lean_object* v_params_1740_; lean_object* v_code_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1793_; 
v_params_1740_ = lean_ctor_get(v___x_1739_, 1);
v_code_1741_ = lean_ctor_get(v___x_1739_, 2);
v_isSharedCheck_1793_ = !lean_is_exclusive(v___x_1739_);
if (v_isSharedCheck_1793_ == 0)
{
lean_object* v_unused_1794_; 
v_unused_1794_ = lean_ctor_get(v___x_1739_, 0);
lean_dec(v_unused_1794_);
v___x_1743_ = v___x_1739_;
v_isShared_1744_ = v_isSharedCheck_1793_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_code_1741_);
lean_inc(v_params_1740_);
lean_dec(v___x_1739_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1793_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
uint8_t v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1745_ = 0;
v___x_1746_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1747_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1745_, v_params_1740_, v___y_1723_);
if (lean_obj_tag(v___x_1747_) == 0)
{
lean_object* v___x_1748_; lean_object* v_fvarId_1749_; lean_object* v_binderName_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1758_; 
lean_dec_ref_known(v___x_1747_, 1);
v___x_1748_ = lean_array_get(v___x_1746_, v_params_1740_, v___x_1738_);
lean_dec_ref(v_params_1740_);
v_fvarId_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_fvarId_1749_);
v_binderName_1750_ = lean_ctor_get(v___x_1748_, 1);
lean_inc(v_binderName_1750_);
lean_dec(v___x_1748_);
v___x_1751_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1752_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4));
v___x_1753_ = lean_box(0);
v___x_1754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1754_, 0, v_discr_1727_);
v___x_1755_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_1756_ = lean_array_push(v___x_1755_, v___x_1754_);
if (v_isShared_1744_ == 0)
{
lean_ctor_set_tag(v___x_1743_, 3);
lean_ctor_set(v___x_1743_, 2, v___x_1756_);
lean_ctor_set(v___x_1743_, 1, v___x_1753_);
lean_ctor_set(v___x_1743_, 0, v___x_1752_);
v___x_1758_ = v___x_1743_;
goto v_reusejp_1757_;
}
else
{
lean_object* v_reuseFailAlloc_1784_; 
v_reuseFailAlloc_1784_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1784_, 0, v___x_1752_);
lean_ctor_set(v_reuseFailAlloc_1784_, 1, v___x_1753_);
lean_ctor_set(v_reuseFailAlloc_1784_, 2, v___x_1756_);
v___x_1758_ = v_reuseFailAlloc_1784_;
goto v_reusejp_1757_;
}
v_reusejp_1757_:
{
lean_object* v___x_1760_; 
if (v_isShared_1731_ == 0)
{
lean_ctor_set(v___x_1730_, 3, v___x_1758_);
lean_ctor_set(v___x_1730_, 2, v___x_1751_);
lean_ctor_set(v___x_1730_, 1, v_binderName_1750_);
lean_ctor_set(v___x_1730_, 0, v_fvarId_1749_);
v___x_1760_ = v___x_1730_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_fvarId_1749_);
lean_ctor_set(v_reuseFailAlloc_1783_, 1, v_binderName_1750_);
lean_ctor_set(v_reuseFailAlloc_1783_, 2, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1783_, 3, v___x_1758_);
v___x_1760_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
lean_object* v___x_1761_; lean_object* v_lctx_1762_; lean_object* v_nextIdx_1763_; lean_object* v___x_1765_; uint8_t v_isShared_1766_; uint8_t v_isSharedCheck_1782_; 
v___x_1761_ = lean_st_ref_take(v___y_1723_);
v_lctx_1762_ = lean_ctor_get(v___x_1761_, 0);
v_nextIdx_1763_ = lean_ctor_get(v___x_1761_, 1);
v_isSharedCheck_1782_ = !lean_is_exclusive(v___x_1761_);
if (v_isSharedCheck_1782_ == 0)
{
v___x_1765_ = v___x_1761_;
v_isShared_1766_ = v_isSharedCheck_1782_;
goto v_resetjp_1764_;
}
else
{
lean_inc(v_nextIdx_1763_);
lean_inc(v_lctx_1762_);
lean_dec(v___x_1761_);
v___x_1765_ = lean_box(0);
v_isShared_1766_ = v_isSharedCheck_1782_;
goto v_resetjp_1764_;
}
v_resetjp_1764_:
{
lean_object* v___x_1767_; lean_object* v___x_1769_; 
lean_inc_ref(v___x_1760_);
v___x_1767_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1745_, v_lctx_1762_, v___x_1760_);
if (v_isShared_1766_ == 0)
{
lean_ctor_set(v___x_1765_, 0, v___x_1767_);
v___x_1769_ = v___x_1765_;
goto v_reusejp_1768_;
}
else
{
lean_object* v_reuseFailAlloc_1781_; 
v_reuseFailAlloc_1781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1781_, 0, v___x_1767_);
lean_ctor_set(v_reuseFailAlloc_1781_, 1, v_nextIdx_1763_);
v___x_1769_ = v_reuseFailAlloc_1781_;
goto v_reusejp_1768_;
}
v_reusejp_1768_:
{
lean_object* v___x_1770_; lean_object* v___x_1771_; 
v___x_1770_ = lean_st_ref_put(v___y_1723_, v___x_1769_);
v___x_1771_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1741_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
if (lean_obj_tag(v___x_1771_) == 0)
{
lean_object* v_a_1772_; lean_object* v___x_1774_; uint8_t v_isShared_1775_; uint8_t v_isSharedCheck_1780_; 
v_a_1772_ = lean_ctor_get(v___x_1771_, 0);
v_isSharedCheck_1780_ = !lean_is_exclusive(v___x_1771_);
if (v_isSharedCheck_1780_ == 0)
{
v___x_1774_ = v___x_1771_;
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
else
{
lean_inc(v_a_1772_);
lean_dec(v___x_1771_);
v___x_1774_ = lean_box(0);
v_isShared_1775_ = v_isSharedCheck_1780_;
goto v_resetjp_1773_;
}
v_resetjp_1773_:
{
lean_object* v___x_1776_; lean_object* v___x_1778_; 
v___x_1776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1776_, 0, v___x_1760_);
lean_ctor_set(v___x_1776_, 1, v_a_1772_);
if (v_isShared_1775_ == 0)
{
lean_ctor_set(v___x_1774_, 0, v___x_1776_);
v___x_1778_ = v___x_1774_;
goto v_reusejp_1777_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1776_);
v___x_1778_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1777_;
}
v_reusejp_1777_:
{
return v___x_1778_;
}
}
}
else
{
lean_dec_ref(v___x_1760_);
return v___x_1771_;
}
}
}
}
}
}
else
{
lean_object* v_a_1785_; lean_object* v___x_1787_; uint8_t v_isShared_1788_; uint8_t v_isSharedCheck_1792_; 
lean_del_object(v___x_1743_);
lean_dec_ref(v_code_1741_);
lean_dec_ref(v_params_1740_);
lean_del_object(v___x_1730_);
lean_dec(v_discr_1727_);
v_a_1785_ = lean_ctor_get(v___x_1747_, 0);
v_isSharedCheck_1792_ = !lean_is_exclusive(v___x_1747_);
if (v_isSharedCheck_1792_ == 0)
{
v___x_1787_ = v___x_1747_;
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
else
{
lean_inc(v_a_1785_);
lean_dec(v___x_1747_);
v___x_1787_ = lean_box(0);
v_isShared_1788_ = v_isSharedCheck_1792_;
goto v_resetjp_1786_;
}
v_resetjp_1786_:
{
lean_object* v___x_1790_; 
if (v_isShared_1788_ == 0)
{
v___x_1790_ = v___x_1787_;
goto v_reusejp_1789_;
}
else
{
lean_object* v_reuseFailAlloc_1791_; 
v_reuseFailAlloc_1791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1791_, 0, v_a_1785_);
v___x_1790_ = v_reuseFailAlloc_1791_;
goto v_reusejp_1789_;
}
v_reusejp_1789_:
{
return v___x_1790_;
}
}
}
}
}
else
{
lean_object* v___x_1795_; lean_object* v___x_1796_; 
lean_dec(v___x_1739_);
lean_del_object(v___x_1730_);
lean_dec(v_discr_1727_);
v___x_1795_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5);
v___x_1796_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1795_, v___y_1721_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
return v___x_1796_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1801_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1802_ = lean_unsigned_to_nat(2u);
v___x_1803_ = lean_unsigned_to_nat(271u);
v___x_1804_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_1805_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1806_ = l_mkPanicMessageWithDecl(v___x_1805_, v___x_1804_, v___x_1803_, v___x_1802_, v___x_1801_);
return v___x_1806_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = lean_box(0);
v___x_1814_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7));
v___x_1815_ = l_Lean_Expr_const___override(v___x_1814_, v___x_1813_);
return v___x_1815_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9(void){
_start:
{
lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1816_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1817_ = lean_unsigned_to_nat(34u);
v___x_1818_ = lean_unsigned_to_nat(272u);
v___x_1819_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_1820_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1821_ = l_mkPanicMessageWithDecl(v___x_1820_, v___x_1819_, v___x_1818_, v___x_1817_, v___x_1816_);
return v___x_1821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object* v_c_1822_, lean_object* v___y_1823_, lean_object* v___y_1824_, lean_object* v___y_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_){
_start:
{
lean_object* v_discr_1829_; lean_object* v_alts_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; uint8_t v___x_1833_; 
v_discr_1829_ = lean_ctor_get(v_c_1822_, 2);
v_alts_1830_ = lean_ctor_get(v_c_1822_, 3);
v___x_1831_ = lean_array_get_size(v_alts_1830_);
v___x_1832_ = lean_unsigned_to_nat(1u);
v___x_1833_ = lean_nat_dec_eq(v___x_1831_, v___x_1832_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; lean_object* v___x_1835_; 
v___x_1834_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1);
v___x_1835_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1834_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1836_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1837_ = lean_unsigned_to_nat(0u);
v___x_1838_ = lean_array_get(v___x_1836_, v_alts_1830_, v___x_1837_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_params_1839_; lean_object* v_code_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1938_; 
v_params_1839_ = lean_ctor_get(v___x_1838_, 1);
v_code_1840_ = lean_ctor_get(v___x_1838_, 2);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1938_ == 0)
{
lean_object* v_unused_1939_; 
v_unused_1939_ = lean_ctor_get(v___x_1838_, 0);
lean_dec(v_unused_1939_);
v___x_1842_ = v___x_1838_;
v_isShared_1843_ = v_isSharedCheck_1938_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_code_1840_);
lean_inc(v_params_1839_);
lean_dec(v___x_1838_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1938_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
uint8_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1844_ = 0;
v___x_1845_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1846_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1844_, v_params_1839_, v___y_1825_);
if (lean_obj_tag(v___x_1846_) == 0)
{
lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1854_; 
lean_dec_ref_known(v___x_1846_, 1);
v___x_1847_ = lean_array_get(v___x_1845_, v_params_1839_, v___x_1837_);
lean_dec_ref(v_params_1839_);
v___x_1848_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3));
v___x_1849_ = lean_box(0);
lean_inc(v_discr_1829_);
v___x_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1850_, 0, v_discr_1829_);
v___x_1851_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_1852_ = lean_array_push(v___x_1851_, v___x_1850_);
if (v_isShared_1843_ == 0)
{
lean_ctor_set_tag(v___x_1842_, 3);
lean_ctor_set(v___x_1842_, 2, v___x_1852_);
lean_ctor_set(v___x_1842_, 1, v___x_1849_);
lean_ctor_set(v___x_1842_, 0, v___x_1848_);
v___x_1854_ = v___x_1842_;
goto v_reusejp_1853_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v___x_1848_);
lean_ctor_set(v_reuseFailAlloc_1929_, 1, v___x_1849_);
lean_ctor_set(v_reuseFailAlloc_1929_, 2, v___x_1852_);
v___x_1854_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1853_;
}
v_reusejp_1853_:
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
v___x_1855_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_1856_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_1855_, v___y_1825_);
if (lean_obj_tag(v___x_1856_) == 0)
{
lean_object* v_a_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; 
v_a_1857_ = lean_ctor_get(v___x_1856_, 0);
lean_inc(v_a_1857_);
lean_dec_ref_known(v___x_1856_, 1);
v___x_1858_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1859_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1844_, v_a_1857_, v___x_1858_, v___x_1854_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
if (lean_obj_tag(v___x_1859_) == 0)
{
lean_object* v_a_1860_; lean_object* v___x_1861_; uint8_t v___x_1862_; lean_object* v___x_1863_; 
v_a_1860_ = lean_ctor_get(v___x_1859_, 0);
lean_inc(v_a_1860_);
lean_dec_ref_known(v___x_1859_, 1);
v___x_1861_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8);
v___x_1862_ = 0;
v___x_1863_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_1844_, v___x_1861_, v___x_1862_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
if (lean_obj_tag(v___x_1863_) == 0)
{
lean_object* v_a_1864_; lean_object* v___x_1865_; 
v_a_1864_ = lean_ctor_get(v___x_1863_, 0);
lean_inc(v_a_1864_);
lean_dec_ref_known(v___x_1863_, 1);
v___x_1865_ = l_Lean_mkArrow(v___x_1861_, v___x_1858_, v___y_1826_, v___y_1827_);
if (lean_obj_tag(v___x_1865_) == 0)
{
lean_object* v_a_1866_; lean_object* v_fvarId_1867_; lean_object* v_binderName_1868_; lean_object* v_fvarId_1869_; lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; lean_object* v___x_1874_; lean_object* v___x_1875_; lean_object* v_lctx_1876_; lean_object* v_nextIdx_1877_; lean_object* v___x_1879_; uint8_t v_isShared_1880_; uint8_t v_isSharedCheck_1896_; 
v_a_1866_ = lean_ctor_get(v___x_1865_, 0);
lean_inc(v_a_1866_);
lean_dec_ref_known(v___x_1865_, 1);
v_fvarId_1867_ = lean_ctor_get(v___x_1847_, 0);
lean_inc(v_fvarId_1867_);
v_binderName_1868_ = lean_ctor_get(v___x_1847_, 1);
lean_inc(v_binderName_1868_);
lean_dec(v___x_1847_);
v_fvarId_1869_ = lean_ctor_get(v_a_1860_, 0);
v___x_1870_ = lean_mk_empty_array_with_capacity(v___x_1832_);
v___x_1871_ = lean_array_push(v___x_1870_, v_a_1864_);
lean_inc(v_fvarId_1869_);
v___x_1872_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1872_, 0, v_fvarId_1869_);
v___x_1873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1873_, 0, v_a_1860_);
lean_ctor_set(v___x_1873_, 1, v___x_1872_);
v___x_1874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1874_, 0, v_fvarId_1867_);
lean_ctor_set(v___x_1874_, 1, v_binderName_1868_);
lean_ctor_set(v___x_1874_, 2, v___x_1871_);
lean_ctor_set(v___x_1874_, 3, v_a_1866_);
lean_ctor_set(v___x_1874_, 4, v___x_1873_);
v___x_1875_ = lean_st_ref_take(v___y_1825_);
v_lctx_1876_ = lean_ctor_get(v___x_1875_, 0);
v_nextIdx_1877_ = lean_ctor_get(v___x_1875_, 1);
v_isSharedCheck_1896_ = !lean_is_exclusive(v___x_1875_);
if (v_isSharedCheck_1896_ == 0)
{
v___x_1879_ = v___x_1875_;
v_isShared_1880_ = v_isSharedCheck_1896_;
goto v_resetjp_1878_;
}
else
{
lean_inc(v_nextIdx_1877_);
lean_inc(v_lctx_1876_);
lean_dec(v___x_1875_);
v___x_1879_ = lean_box(0);
v_isShared_1880_ = v_isSharedCheck_1896_;
goto v_resetjp_1878_;
}
v_resetjp_1878_:
{
lean_object* v___x_1881_; lean_object* v___x_1883_; 
lean_inc_ref(v___x_1874_);
v___x_1881_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v___x_1844_, v_lctx_1876_, v___x_1874_);
if (v_isShared_1880_ == 0)
{
lean_ctor_set(v___x_1879_, 0, v___x_1881_);
v___x_1883_ = v___x_1879_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1895_; 
v_reuseFailAlloc_1895_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1895_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1895_, 1, v_nextIdx_1877_);
v___x_1883_ = v_reuseFailAlloc_1895_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
lean_object* v___x_1884_; lean_object* v___x_1885_; 
v___x_1884_ = lean_st_ref_put(v___y_1825_, v___x_1883_);
v___x_1885_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1840_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
if (lean_obj_tag(v___x_1885_) == 0)
{
lean_object* v_a_1886_; lean_object* v___x_1888_; uint8_t v_isShared_1889_; uint8_t v_isSharedCheck_1894_; 
v_a_1886_ = lean_ctor_get(v___x_1885_, 0);
v_isSharedCheck_1894_ = !lean_is_exclusive(v___x_1885_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1888_ = v___x_1885_;
v_isShared_1889_ = v_isSharedCheck_1894_;
goto v_resetjp_1887_;
}
else
{
lean_inc(v_a_1886_);
lean_dec(v___x_1885_);
v___x_1888_ = lean_box(0);
v_isShared_1889_ = v_isSharedCheck_1894_;
goto v_resetjp_1887_;
}
v_resetjp_1887_:
{
lean_object* v___x_1890_; lean_object* v___x_1892_; 
v___x_1890_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1890_, 0, v___x_1874_);
lean_ctor_set(v___x_1890_, 1, v_a_1886_);
if (v_isShared_1889_ == 0)
{
lean_ctor_set(v___x_1888_, 0, v___x_1890_);
v___x_1892_ = v___x_1888_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
else
{
lean_dec_ref_known(v___x_1874_, 5);
return v___x_1885_;
}
}
}
}
else
{
lean_object* v_a_1897_; lean_object* v___x_1899_; uint8_t v_isShared_1900_; uint8_t v_isSharedCheck_1904_; 
lean_dec(v_a_1864_);
lean_dec(v_a_1860_);
lean_dec(v___x_1847_);
lean_dec_ref(v_code_1840_);
v_a_1897_ = lean_ctor_get(v___x_1865_, 0);
v_isSharedCheck_1904_ = !lean_is_exclusive(v___x_1865_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1899_ = v___x_1865_;
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
else
{
lean_inc(v_a_1897_);
lean_dec(v___x_1865_);
v___x_1899_ = lean_box(0);
v_isShared_1900_ = v_isSharedCheck_1904_;
goto v_resetjp_1898_;
}
v_resetjp_1898_:
{
lean_object* v___x_1902_; 
if (v_isShared_1900_ == 0)
{
v___x_1902_ = v___x_1899_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v_a_1897_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
else
{
lean_object* v_a_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1912_; 
lean_dec(v_a_1860_);
lean_dec(v___x_1847_);
lean_dec_ref(v_code_1840_);
v_a_1905_ = lean_ctor_get(v___x_1863_, 0);
v_isSharedCheck_1912_ = !lean_is_exclusive(v___x_1863_);
if (v_isSharedCheck_1912_ == 0)
{
v___x_1907_ = v___x_1863_;
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_a_1905_);
lean_dec(v___x_1863_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1912_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1910_; 
if (v_isShared_1908_ == 0)
{
v___x_1910_ = v___x_1907_;
goto v_reusejp_1909_;
}
else
{
lean_object* v_reuseFailAlloc_1911_; 
v_reuseFailAlloc_1911_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1911_, 0, v_a_1905_);
v___x_1910_ = v_reuseFailAlloc_1911_;
goto v_reusejp_1909_;
}
v_reusejp_1909_:
{
return v___x_1910_;
}
}
}
}
else
{
lean_object* v_a_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1920_; 
lean_dec(v___x_1847_);
lean_dec_ref(v_code_1840_);
v_a_1913_ = lean_ctor_get(v___x_1859_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1859_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1915_ = v___x_1859_;
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_a_1913_);
lean_dec(v___x_1859_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1920_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1918_; 
if (v_isShared_1916_ == 0)
{
v___x_1918_ = v___x_1915_;
goto v_reusejp_1917_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_a_1913_);
v___x_1918_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1917_;
}
v_reusejp_1917_:
{
return v___x_1918_;
}
}
}
}
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1928_; 
lean_dec_ref(v___x_1854_);
lean_dec(v___x_1847_);
lean_dec_ref(v_code_1840_);
v_a_1921_ = lean_ctor_get(v___x_1856_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1856_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1923_ = v___x_1856_;
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1856_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1926_; 
if (v_isShared_1924_ == 0)
{
v___x_1926_ = v___x_1923_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1921_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_del_object(v___x_1842_);
lean_dec_ref(v_code_1840_);
lean_dec_ref(v_params_1839_);
v_a_1930_ = lean_ctor_get(v___x_1846_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1846_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1846_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1846_);
v___x_1932_ = lean_box(0);
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
v_resetjp_1931_:
{
lean_object* v___x_1935_; 
if (v_isShared_1933_ == 0)
{
v___x_1935_ = v___x_1932_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v_a_1930_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
}
}
}
else
{
lean_object* v___x_1940_; lean_object* v___x_1941_; 
lean_dec(v___x_1838_);
v___x_1940_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9);
v___x_1941_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1940_, v___y_1823_, v___y_1824_, v___y_1825_, v___y_1826_, v___y_1827_);
return v___x_1941_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; 
v___x_1943_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1944_ = lean_unsigned_to_nat(2u);
v___x_1945_ = lean_unsigned_to_nat(260u);
v___x_1946_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_1947_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1948_ = l_mkPanicMessageWithDecl(v___x_1947_, v___x_1946_, v___x_1945_, v___x_1944_, v___x_1943_);
return v___x_1948_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1953_; lean_object* v___x_1954_; lean_object* v___x_1955_; lean_object* v___x_1956_; lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1953_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1954_ = lean_unsigned_to_nat(34u);
v___x_1955_ = lean_unsigned_to_nat(261u);
v___x_1956_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_1957_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1958_ = l_mkPanicMessageWithDecl(v___x_1957_, v___x_1956_, v___x_1955_, v___x_1954_, v___x_1953_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(lean_object* v_c_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_){
_start:
{
lean_object* v_discr_1966_; lean_object* v_alts_1967_; lean_object* v___x_1969_; uint8_t v_isShared_1970_; uint8_t v_isSharedCheck_2036_; 
v_discr_1966_ = lean_ctor_get(v_c_1959_, 2);
v_alts_1967_ = lean_ctor_get(v_c_1959_, 3);
v_isSharedCheck_2036_ = !lean_is_exclusive(v_c_1959_);
if (v_isSharedCheck_2036_ == 0)
{
lean_object* v_unused_2037_; lean_object* v_unused_2038_; 
v_unused_2037_ = lean_ctor_get(v_c_1959_, 1);
lean_dec(v_unused_2037_);
v_unused_2038_ = lean_ctor_get(v_c_1959_, 0);
lean_dec(v_unused_2038_);
v___x_1969_ = v_c_1959_;
v_isShared_1970_ = v_isSharedCheck_2036_;
goto v_resetjp_1968_;
}
else
{
lean_inc(v_alts_1967_);
lean_inc(v_discr_1966_);
lean_dec(v_c_1959_);
v___x_1969_ = lean_box(0);
v_isShared_1970_ = v_isSharedCheck_2036_;
goto v_resetjp_1968_;
}
v_resetjp_1968_:
{
lean_object* v___x_1971_; lean_object* v___x_1972_; uint8_t v___x_1973_; 
v___x_1971_ = lean_array_get_size(v_alts_1967_);
v___x_1972_ = lean_unsigned_to_nat(1u);
v___x_1973_ = lean_nat_dec_eq(v___x_1971_, v___x_1972_);
if (v___x_1973_ == 0)
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
lean_del_object(v___x_1969_);
lean_dec_ref(v_alts_1967_);
lean_dec(v_discr_1966_);
v___x_1974_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1);
v___x_1975_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1974_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
return v___x_1975_;
}
else
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1977_ = lean_unsigned_to_nat(0u);
v___x_1978_ = lean_array_get(v___x_1976_, v_alts_1967_, v___x_1977_);
lean_dec_ref(v_alts_1967_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_object* v_params_1979_; lean_object* v_code_1980_; lean_object* v___x_1982_; uint8_t v_isShared_1983_; uint8_t v_isSharedCheck_2032_; 
v_params_1979_ = lean_ctor_get(v___x_1978_, 1);
v_code_1980_ = lean_ctor_get(v___x_1978_, 2);
v_isSharedCheck_2032_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2032_ == 0)
{
lean_object* v_unused_2033_; 
v_unused_2033_ = lean_ctor_get(v___x_1978_, 0);
lean_dec(v_unused_2033_);
v___x_1982_ = v___x_1978_;
v_isShared_1983_ = v_isSharedCheck_2032_;
goto v_resetjp_1981_;
}
else
{
lean_inc(v_code_1980_);
lean_inc(v_params_1979_);
lean_dec(v___x_1978_);
v___x_1982_ = lean_box(0);
v_isShared_1983_ = v_isSharedCheck_2032_;
goto v_resetjp_1981_;
}
v_resetjp_1981_:
{
uint8_t v___x_1984_; lean_object* v___x_1985_; lean_object* v___x_1986_; 
v___x_1984_ = 0;
v___x_1985_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1986_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1984_, v_params_1979_, v___y_1962_);
if (lean_obj_tag(v___x_1986_) == 0)
{
lean_object* v___x_1987_; lean_object* v_fvarId_1988_; lean_object* v_binderName_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1997_; 
lean_dec_ref_known(v___x_1986_, 1);
v___x_1987_ = lean_array_get(v___x_1985_, v_params_1979_, v___x_1977_);
lean_dec_ref(v_params_1979_);
v_fvarId_1988_ = lean_ctor_get(v___x_1987_, 0);
lean_inc(v_fvarId_1988_);
v_binderName_1989_ = lean_ctor_get(v___x_1987_, 1);
lean_inc(v_binderName_1989_);
lean_dec(v___x_1987_);
v___x_1990_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1991_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4));
v___x_1992_ = lean_box(0);
v___x_1993_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1993_, 0, v_discr_1966_);
v___x_1994_ = lean_mk_empty_array_with_capacity(v___x_1972_);
v___x_1995_ = lean_array_push(v___x_1994_, v___x_1993_);
if (v_isShared_1983_ == 0)
{
lean_ctor_set_tag(v___x_1982_, 3);
lean_ctor_set(v___x_1982_, 2, v___x_1995_);
lean_ctor_set(v___x_1982_, 1, v___x_1992_);
lean_ctor_set(v___x_1982_, 0, v___x_1991_);
v___x_1997_ = v___x_1982_;
goto v_reusejp_1996_;
}
else
{
lean_object* v_reuseFailAlloc_2023_; 
v_reuseFailAlloc_2023_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2023_, 0, v___x_1991_);
lean_ctor_set(v_reuseFailAlloc_2023_, 1, v___x_1992_);
lean_ctor_set(v_reuseFailAlloc_2023_, 2, v___x_1995_);
v___x_1997_ = v_reuseFailAlloc_2023_;
goto v_reusejp_1996_;
}
v_reusejp_1996_:
{
lean_object* v___x_1999_; 
if (v_isShared_1970_ == 0)
{
lean_ctor_set(v___x_1969_, 3, v___x_1997_);
lean_ctor_set(v___x_1969_, 2, v___x_1990_);
lean_ctor_set(v___x_1969_, 1, v_binderName_1989_);
lean_ctor_set(v___x_1969_, 0, v_fvarId_1988_);
v___x_1999_ = v___x_1969_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_fvarId_1988_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v_binderName_1989_);
lean_ctor_set(v_reuseFailAlloc_2022_, 2, v___x_1990_);
lean_ctor_set(v_reuseFailAlloc_2022_, 3, v___x_1997_);
v___x_1999_ = v_reuseFailAlloc_2022_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
lean_object* v___x_2000_; lean_object* v_lctx_2001_; lean_object* v_nextIdx_2002_; lean_object* v___x_2004_; uint8_t v_isShared_2005_; uint8_t v_isSharedCheck_2021_; 
v___x_2000_ = lean_st_ref_take(v___y_1962_);
v_lctx_2001_ = lean_ctor_get(v___x_2000_, 0);
v_nextIdx_2002_ = lean_ctor_get(v___x_2000_, 1);
v_isSharedCheck_2021_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2021_ == 0)
{
v___x_2004_ = v___x_2000_;
v_isShared_2005_ = v_isSharedCheck_2021_;
goto v_resetjp_2003_;
}
else
{
lean_inc(v_nextIdx_2002_);
lean_inc(v_lctx_2001_);
lean_dec(v___x_2000_);
v___x_2004_ = lean_box(0);
v_isShared_2005_ = v_isSharedCheck_2021_;
goto v_resetjp_2003_;
}
v_resetjp_2003_:
{
lean_object* v___x_2006_; lean_object* v___x_2008_; 
lean_inc_ref(v___x_1999_);
v___x_2006_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1984_, v_lctx_2001_, v___x_1999_);
if (v_isShared_2005_ == 0)
{
lean_ctor_set(v___x_2004_, 0, v___x_2006_);
v___x_2008_ = v___x_2004_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v___x_2006_);
lean_ctor_set(v_reuseFailAlloc_2020_, 1, v_nextIdx_2002_);
v___x_2008_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
lean_object* v___x_2009_; lean_object* v___x_2010_; 
v___x_2009_ = lean_st_ref_put(v___y_1962_, v___x_2008_);
v___x_2010_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1980_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
if (lean_obj_tag(v___x_2010_) == 0)
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2019_; 
v_a_2011_ = lean_ctor_get(v___x_2010_, 0);
v_isSharedCheck_2019_ = !lean_is_exclusive(v___x_2010_);
if (v_isSharedCheck_2019_ == 0)
{
v___x_2013_ = v___x_2010_;
v_isShared_2014_ = v_isSharedCheck_2019_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2010_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2019_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2015_; lean_object* v___x_2017_; 
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___x_1999_);
lean_ctor_set(v___x_2015_, 1, v_a_2011_);
if (v_isShared_2014_ == 0)
{
lean_ctor_set(v___x_2013_, 0, v___x_2015_);
v___x_2017_ = v___x_2013_;
goto v_reusejp_2016_;
}
else
{
lean_object* v_reuseFailAlloc_2018_; 
v_reuseFailAlloc_2018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2018_, 0, v___x_2015_);
v___x_2017_ = v_reuseFailAlloc_2018_;
goto v_reusejp_2016_;
}
v_reusejp_2016_:
{
return v___x_2017_;
}
}
}
else
{
lean_dec_ref(v___x_1999_);
return v___x_2010_;
}
}
}
}
}
}
else
{
lean_object* v_a_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2031_; 
lean_del_object(v___x_1982_);
lean_dec_ref(v_code_1980_);
lean_dec_ref(v_params_1979_);
lean_del_object(v___x_1969_);
lean_dec(v_discr_1966_);
v_a_2024_ = lean_ctor_get(v___x_1986_, 0);
v_isSharedCheck_2031_ = !lean_is_exclusive(v___x_1986_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2026_ = v___x_1986_;
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
else
{
lean_inc(v_a_2024_);
lean_dec(v___x_1986_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2031_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
lean_object* v___x_2029_; 
if (v_isShared_2027_ == 0)
{
v___x_2029_ = v___x_2026_;
goto v_reusejp_2028_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v_a_2024_);
v___x_2029_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2028_;
}
v_reusejp_2028_:
{
return v___x_2029_;
}
}
}
}
}
else
{
lean_object* v___x_2034_; lean_object* v___x_2035_; 
lean_dec(v___x_1978_);
lean_del_object(v___x_1969_);
lean_dec(v_discr_1966_);
v___x_2034_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5);
v___x_2035_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2034_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_);
return v___x_2035_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; 
v___x_2040_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2041_ = lean_unsigned_to_nat(2u);
v___x_2042_ = lean_unsigned_to_nat(249u);
v___x_2043_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_2044_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2045_ = l_mkPanicMessageWithDecl(v___x_2044_, v___x_2043_, v___x_2042_, v___x_2041_, v___x_2040_);
return v___x_2045_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v___x_2049_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2050_ = lean_unsigned_to_nat(34u);
v___x_2051_ = lean_unsigned_to_nat(250u);
v___x_2052_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_2053_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2054_ = l_mkPanicMessageWithDecl(v___x_2053_, v___x_2052_, v___x_2051_, v___x_2050_, v___x_2049_);
return v___x_2054_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg(lean_object* v_c_2055_, lean_object* v___y_2056_, lean_object* v___y_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_){
_start:
{
lean_object* v_discr_2062_; lean_object* v_alts_2063_; lean_object* v___x_2065_; uint8_t v_isShared_2066_; uint8_t v_isSharedCheck_2132_; 
v_discr_2062_ = lean_ctor_get(v_c_2055_, 2);
v_alts_2063_ = lean_ctor_get(v_c_2055_, 3);
v_isSharedCheck_2132_ = !lean_is_exclusive(v_c_2055_);
if (v_isSharedCheck_2132_ == 0)
{
lean_object* v_unused_2133_; lean_object* v_unused_2134_; 
v_unused_2133_ = lean_ctor_get(v_c_2055_, 1);
lean_dec(v_unused_2133_);
v_unused_2134_ = lean_ctor_get(v_c_2055_, 0);
lean_dec(v_unused_2134_);
v___x_2065_ = v_c_2055_;
v_isShared_2066_ = v_isSharedCheck_2132_;
goto v_resetjp_2064_;
}
else
{
lean_inc(v_alts_2063_);
lean_inc(v_discr_2062_);
lean_dec(v_c_2055_);
v___x_2065_ = lean_box(0);
v_isShared_2066_ = v_isSharedCheck_2132_;
goto v_resetjp_2064_;
}
v_resetjp_2064_:
{
lean_object* v___x_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; 
v___x_2067_ = lean_array_get_size(v_alts_2063_);
v___x_2068_ = lean_unsigned_to_nat(1u);
v___x_2069_ = lean_nat_dec_eq(v___x_2067_, v___x_2068_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; lean_object* v___x_2071_; 
lean_del_object(v___x_2065_);
lean_dec_ref(v_alts_2063_);
lean_dec(v_discr_2062_);
v___x_2070_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1);
v___x_2071_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2070_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
return v___x_2071_;
}
else
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; 
v___x_2072_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2073_ = lean_unsigned_to_nat(0u);
v___x_2074_ = lean_array_get(v___x_2072_, v_alts_2063_, v___x_2073_);
lean_dec_ref(v_alts_2063_);
if (lean_obj_tag(v___x_2074_) == 0)
{
lean_object* v_params_2075_; lean_object* v_code_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2128_; 
v_params_2075_ = lean_ctor_get(v___x_2074_, 1);
v_code_2076_ = lean_ctor_get(v___x_2074_, 2);
v_isSharedCheck_2128_ = !lean_is_exclusive(v___x_2074_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; 
v_unused_2129_ = lean_ctor_get(v___x_2074_, 0);
lean_dec(v_unused_2129_);
v___x_2078_ = v___x_2074_;
v_isShared_2079_ = v_isSharedCheck_2128_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_code_2076_);
lean_inc(v_params_2075_);
lean_dec(v___x_2074_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2128_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
uint8_t v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2080_ = 0;
v___x_2081_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2082_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2080_, v_params_2075_, v___y_2058_);
if (lean_obj_tag(v___x_2082_) == 0)
{
lean_object* v___x_2083_; lean_object* v_fvarId_2084_; lean_object* v_binderName_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2093_; 
lean_dec_ref_known(v___x_2082_, 1);
v___x_2083_ = lean_array_get(v___x_2081_, v_params_2075_, v___x_2073_);
lean_dec_ref(v_params_2075_);
v_fvarId_2084_ = lean_ctor_get(v___x_2083_, 0);
lean_inc(v_fvarId_2084_);
v_binderName_2085_ = lean_ctor_get(v___x_2083_, 1);
lean_inc(v_binderName_2085_);
lean_dec(v___x_2083_);
v___x_2086_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2087_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3));
v___x_2088_ = lean_box(0);
v___x_2089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2089_, 0, v_discr_2062_);
v___x_2090_ = lean_mk_empty_array_with_capacity(v___x_2068_);
v___x_2091_ = lean_array_push(v___x_2090_, v___x_2089_);
if (v_isShared_2079_ == 0)
{
lean_ctor_set_tag(v___x_2078_, 3);
lean_ctor_set(v___x_2078_, 2, v___x_2091_);
lean_ctor_set(v___x_2078_, 1, v___x_2088_);
lean_ctor_set(v___x_2078_, 0, v___x_2087_);
v___x_2093_ = v___x_2078_;
goto v_reusejp_2092_;
}
else
{
lean_object* v_reuseFailAlloc_2119_; 
v_reuseFailAlloc_2119_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2119_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2119_, 1, v___x_2088_);
lean_ctor_set(v_reuseFailAlloc_2119_, 2, v___x_2091_);
v___x_2093_ = v_reuseFailAlloc_2119_;
goto v_reusejp_2092_;
}
v_reusejp_2092_:
{
lean_object* v___x_2095_; 
if (v_isShared_2066_ == 0)
{
lean_ctor_set(v___x_2065_, 3, v___x_2093_);
lean_ctor_set(v___x_2065_, 2, v___x_2086_);
lean_ctor_set(v___x_2065_, 1, v_binderName_2085_);
lean_ctor_set(v___x_2065_, 0, v_fvarId_2084_);
v___x_2095_ = v___x_2065_;
goto v_reusejp_2094_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v_fvarId_2084_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_binderName_2085_);
lean_ctor_set(v_reuseFailAlloc_2118_, 2, v___x_2086_);
lean_ctor_set(v_reuseFailAlloc_2118_, 3, v___x_2093_);
v___x_2095_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2094_;
}
v_reusejp_2094_:
{
lean_object* v___x_2096_; lean_object* v_lctx_2097_; lean_object* v_nextIdx_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2117_; 
v___x_2096_ = lean_st_ref_take(v___y_2058_);
v_lctx_2097_ = lean_ctor_get(v___x_2096_, 0);
v_nextIdx_2098_ = lean_ctor_get(v___x_2096_, 1);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___x_2096_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2100_ = v___x_2096_;
v_isShared_2101_ = v_isSharedCheck_2117_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_nextIdx_2098_);
lean_inc(v_lctx_2097_);
lean_dec(v___x_2096_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2117_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2102_; lean_object* v___x_2104_; 
lean_inc_ref(v___x_2095_);
v___x_2102_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2080_, v_lctx_2097_, v___x_2095_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 0, v___x_2102_);
v___x_2104_ = v___x_2100_;
goto v_reusejp_2103_;
}
else
{
lean_object* v_reuseFailAlloc_2116_; 
v_reuseFailAlloc_2116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2116_, 0, v___x_2102_);
lean_ctor_set(v_reuseFailAlloc_2116_, 1, v_nextIdx_2098_);
v___x_2104_ = v_reuseFailAlloc_2116_;
goto v_reusejp_2103_;
}
v_reusejp_2103_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2105_ = lean_st_ref_put(v___y_2058_, v___x_2104_);
v___x_2106_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2076_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
if (lean_obj_tag(v___x_2106_) == 0)
{
lean_object* v_a_2107_; lean_object* v___x_2109_; uint8_t v_isShared_2110_; uint8_t v_isSharedCheck_2115_; 
v_a_2107_ = lean_ctor_get(v___x_2106_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2106_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2109_ = v___x_2106_;
v_isShared_2110_ = v_isSharedCheck_2115_;
goto v_resetjp_2108_;
}
else
{
lean_inc(v_a_2107_);
lean_dec(v___x_2106_);
v___x_2109_ = lean_box(0);
v_isShared_2110_ = v_isSharedCheck_2115_;
goto v_resetjp_2108_;
}
v_resetjp_2108_:
{
lean_object* v___x_2111_; lean_object* v___x_2113_; 
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2095_);
lean_ctor_set(v___x_2111_, 1, v_a_2107_);
if (v_isShared_2110_ == 0)
{
lean_ctor_set(v___x_2109_, 0, v___x_2111_);
v___x_2113_ = v___x_2109_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v___x_2111_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
else
{
lean_dec_ref(v___x_2095_);
return v___x_2106_;
}
}
}
}
}
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_del_object(v___x_2078_);
lean_dec_ref(v_code_2076_);
lean_dec_ref(v_params_2075_);
lean_del_object(v___x_2065_);
lean_dec(v_discr_2062_);
v_a_2120_ = lean_ctor_get(v___x_2082_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2082_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2082_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2082_);
v___x_2122_ = lean_box(0);
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
v_resetjp_2121_:
{
lean_object* v___x_2125_; 
if (v_isShared_2123_ == 0)
{
v___x_2125_ = v___x_2122_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v_a_2120_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
}
}
}
else
{
lean_object* v___x_2130_; lean_object* v___x_2131_; 
lean_dec(v___x_2074_);
lean_del_object(v___x_2065_);
lean_dec(v_discr_2062_);
v___x_2130_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4);
v___x_2131_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2130_, v___y_2056_, v___y_2057_, v___y_2058_, v___y_2059_, v___y_2060_);
return v___x_2131_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2136_; lean_object* v___x_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2136_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2137_ = lean_unsigned_to_nat(2u);
v___x_2138_ = lean_unsigned_to_nat(238u);
v___x_2139_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2140_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2141_ = l_mkPanicMessageWithDecl(v___x_2140_, v___x_2139_, v___x_2138_, v___x_2137_, v___x_2136_);
return v___x_2141_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
v___x_2146_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2147_ = lean_unsigned_to_nat(34u);
v___x_2148_ = lean_unsigned_to_nat(239u);
v___x_2149_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2150_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2151_ = l_mkPanicMessageWithDecl(v___x_2150_, v___x_2149_, v___x_2148_, v___x_2147_, v___x_2146_);
return v___x_2151_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object* v_c_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_){
_start:
{
lean_object* v_discr_2159_; lean_object* v_alts_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2229_; 
v_discr_2159_ = lean_ctor_get(v_c_2152_, 2);
v_alts_2160_ = lean_ctor_get(v_c_2152_, 3);
v_isSharedCheck_2229_ = !lean_is_exclusive(v_c_2152_);
if (v_isSharedCheck_2229_ == 0)
{
lean_object* v_unused_2230_; lean_object* v_unused_2231_; 
v_unused_2230_ = lean_ctor_get(v_c_2152_, 1);
lean_dec(v_unused_2230_);
v_unused_2231_ = lean_ctor_get(v_c_2152_, 0);
lean_dec(v_unused_2231_);
v___x_2162_ = v_c_2152_;
v_isShared_2163_ = v_isSharedCheck_2229_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_alts_2160_);
lean_inc(v_discr_2159_);
lean_dec(v_c_2152_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2229_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
lean_object* v___x_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; 
v___x_2164_ = lean_array_get_size(v_alts_2160_);
v___x_2165_ = lean_unsigned_to_nat(1u);
v___x_2166_ = lean_nat_dec_eq(v___x_2164_, v___x_2165_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; lean_object* v___x_2168_; 
lean_del_object(v___x_2162_);
lean_dec_ref(v_alts_2160_);
lean_dec(v_discr_2159_);
v___x_2167_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1);
v___x_2168_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2167_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
return v___x_2168_;
}
else
{
lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; 
v___x_2169_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2170_ = lean_unsigned_to_nat(0u);
v___x_2171_ = lean_array_get(v___x_2169_, v_alts_2160_, v___x_2170_);
lean_dec_ref(v_alts_2160_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_params_2172_; lean_object* v_code_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2225_; 
v_params_2172_ = lean_ctor_get(v___x_2171_, 1);
v_code_2173_ = lean_ctor_get(v___x_2171_, 2);
v_isSharedCheck_2225_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2225_ == 0)
{
lean_object* v_unused_2226_; 
v_unused_2226_ = lean_ctor_get(v___x_2171_, 0);
lean_dec(v_unused_2226_);
v___x_2175_ = v___x_2171_;
v_isShared_2176_ = v_isSharedCheck_2225_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_code_2173_);
lean_inc(v_params_2172_);
lean_dec(v___x_2171_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2225_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
uint8_t v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2177_ = 0;
v___x_2178_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2179_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2177_, v_params_2172_, v___y_2155_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_object* v___x_2180_; lean_object* v_fvarId_2181_; lean_object* v_binderName_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; lean_object* v___x_2190_; 
lean_dec_ref_known(v___x_2179_, 1);
v___x_2180_ = lean_array_get(v___x_2178_, v_params_2172_, v___x_2170_);
lean_dec_ref(v_params_2172_);
v_fvarId_2181_ = lean_ctor_get(v___x_2180_, 0);
lean_inc(v_fvarId_2181_);
v_binderName_2182_ = lean_ctor_get(v___x_2180_, 1);
lean_inc(v_binderName_2182_);
lean_dec(v___x_2180_);
v___x_2183_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2184_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4));
v___x_2185_ = lean_box(0);
v___x_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2186_, 0, v_discr_2159_);
v___x_2187_ = lean_mk_empty_array_with_capacity(v___x_2165_);
v___x_2188_ = lean_array_push(v___x_2187_, v___x_2186_);
if (v_isShared_2176_ == 0)
{
lean_ctor_set_tag(v___x_2175_, 3);
lean_ctor_set(v___x_2175_, 2, v___x_2188_);
lean_ctor_set(v___x_2175_, 1, v___x_2185_);
lean_ctor_set(v___x_2175_, 0, v___x_2184_);
v___x_2190_ = v___x_2175_;
goto v_reusejp_2189_;
}
else
{
lean_object* v_reuseFailAlloc_2216_; 
v_reuseFailAlloc_2216_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2216_, 0, v___x_2184_);
lean_ctor_set(v_reuseFailAlloc_2216_, 1, v___x_2185_);
lean_ctor_set(v_reuseFailAlloc_2216_, 2, v___x_2188_);
v___x_2190_ = v_reuseFailAlloc_2216_;
goto v_reusejp_2189_;
}
v_reusejp_2189_:
{
lean_object* v___x_2192_; 
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 3, v___x_2190_);
lean_ctor_set(v___x_2162_, 2, v___x_2183_);
lean_ctor_set(v___x_2162_, 1, v_binderName_2182_);
lean_ctor_set(v___x_2162_, 0, v_fvarId_2181_);
v___x_2192_ = v___x_2162_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2215_; 
v_reuseFailAlloc_2215_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2215_, 0, v_fvarId_2181_);
lean_ctor_set(v_reuseFailAlloc_2215_, 1, v_binderName_2182_);
lean_ctor_set(v_reuseFailAlloc_2215_, 2, v___x_2183_);
lean_ctor_set(v_reuseFailAlloc_2215_, 3, v___x_2190_);
v___x_2192_ = v_reuseFailAlloc_2215_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2193_; lean_object* v_lctx_2194_; lean_object* v_nextIdx_2195_; lean_object* v___x_2197_; uint8_t v_isShared_2198_; uint8_t v_isSharedCheck_2214_; 
v___x_2193_ = lean_st_ref_take(v___y_2155_);
v_lctx_2194_ = lean_ctor_get(v___x_2193_, 0);
v_nextIdx_2195_ = lean_ctor_get(v___x_2193_, 1);
v_isSharedCheck_2214_ = !lean_is_exclusive(v___x_2193_);
if (v_isSharedCheck_2214_ == 0)
{
v___x_2197_ = v___x_2193_;
v_isShared_2198_ = v_isSharedCheck_2214_;
goto v_resetjp_2196_;
}
else
{
lean_inc(v_nextIdx_2195_);
lean_inc(v_lctx_2194_);
lean_dec(v___x_2193_);
v___x_2197_ = lean_box(0);
v_isShared_2198_ = v_isSharedCheck_2214_;
goto v_resetjp_2196_;
}
v_resetjp_2196_:
{
lean_object* v___x_2199_; lean_object* v___x_2201_; 
lean_inc_ref(v___x_2192_);
v___x_2199_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2177_, v_lctx_2194_, v___x_2192_);
if (v_isShared_2198_ == 0)
{
lean_ctor_set(v___x_2197_, 0, v___x_2199_);
v___x_2201_ = v___x_2197_;
goto v_reusejp_2200_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v___x_2199_);
lean_ctor_set(v_reuseFailAlloc_2213_, 1, v_nextIdx_2195_);
v___x_2201_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2200_;
}
v_reusejp_2200_:
{
lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2202_ = lean_st_ref_put(v___y_2155_, v___x_2201_);
v___x_2203_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2173_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
if (lean_obj_tag(v___x_2203_) == 0)
{
lean_object* v_a_2204_; lean_object* v___x_2206_; uint8_t v_isShared_2207_; uint8_t v_isSharedCheck_2212_; 
v_a_2204_ = lean_ctor_get(v___x_2203_, 0);
v_isSharedCheck_2212_ = !lean_is_exclusive(v___x_2203_);
if (v_isSharedCheck_2212_ == 0)
{
v___x_2206_ = v___x_2203_;
v_isShared_2207_ = v_isSharedCheck_2212_;
goto v_resetjp_2205_;
}
else
{
lean_inc(v_a_2204_);
lean_dec(v___x_2203_);
v___x_2206_ = lean_box(0);
v_isShared_2207_ = v_isSharedCheck_2212_;
goto v_resetjp_2205_;
}
v_resetjp_2205_:
{
lean_object* v___x_2208_; lean_object* v___x_2210_; 
v___x_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2192_);
lean_ctor_set(v___x_2208_, 1, v_a_2204_);
if (v_isShared_2207_ == 0)
{
lean_ctor_set(v___x_2206_, 0, v___x_2208_);
v___x_2210_ = v___x_2206_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v___x_2208_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
return v___x_2210_;
}
}
}
else
{
lean_dec_ref(v___x_2192_);
return v___x_2203_;
}
}
}
}
}
}
else
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2224_; 
lean_del_object(v___x_2175_);
lean_dec_ref(v_code_2173_);
lean_dec_ref(v_params_2172_);
lean_del_object(v___x_2162_);
lean_dec(v_discr_2159_);
v_a_2217_ = lean_ctor_get(v___x_2179_, 0);
v_isSharedCheck_2224_ = !lean_is_exclusive(v___x_2179_);
if (v_isSharedCheck_2224_ == 0)
{
v___x_2219_ = v___x_2179_;
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2179_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2224_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2222_; 
if (v_isShared_2220_ == 0)
{
v___x_2222_ = v___x_2219_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v_a_2217_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
}
}
}
else
{
lean_object* v___x_2227_; lean_object* v___x_2228_; 
lean_dec(v___x_2171_);
lean_del_object(v___x_2162_);
lean_dec(v_discr_2159_);
v___x_2227_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5);
v___x_2228_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2227_, v___y_2153_, v___y_2154_, v___y_2155_, v___y_2156_, v___y_2157_);
return v___x_2228_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v___x_2233_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2234_ = lean_unsigned_to_nat(2u);
v___x_2235_ = lean_unsigned_to_nat(227u);
v___x_2236_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2237_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2238_ = l_mkPanicMessageWithDecl(v___x_2237_, v___x_2236_, v___x_2235_, v___x_2234_, v___x_2233_);
return v___x_2238_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; 
v___x_2243_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2244_ = lean_unsigned_to_nat(34u);
v___x_2245_ = lean_unsigned_to_nat(228u);
v___x_2246_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2247_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2248_ = l_mkPanicMessageWithDecl(v___x_2247_, v___x_2246_, v___x_2245_, v___x_2244_, v___x_2243_);
return v___x_2248_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object* v_c_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v_discr_2256_; lean_object* v_alts_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2326_; 
v_discr_2256_ = lean_ctor_get(v_c_2249_, 2);
v_alts_2257_ = lean_ctor_get(v_c_2249_, 3);
v_isSharedCheck_2326_ = !lean_is_exclusive(v_c_2249_);
if (v_isSharedCheck_2326_ == 0)
{
lean_object* v_unused_2327_; lean_object* v_unused_2328_; 
v_unused_2327_ = lean_ctor_get(v_c_2249_, 1);
lean_dec(v_unused_2327_);
v_unused_2328_ = lean_ctor_get(v_c_2249_, 0);
lean_dec(v_unused_2328_);
v___x_2259_ = v_c_2249_;
v_isShared_2260_ = v_isSharedCheck_2326_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_alts_2257_);
lean_inc(v_discr_2256_);
lean_dec(v_c_2249_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2326_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2261_; lean_object* v___x_2262_; uint8_t v___x_2263_; 
v___x_2261_ = lean_array_get_size(v_alts_2257_);
v___x_2262_ = lean_unsigned_to_nat(1u);
v___x_2263_ = lean_nat_dec_eq(v___x_2261_, v___x_2262_);
if (v___x_2263_ == 0)
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
lean_del_object(v___x_2259_);
lean_dec_ref(v_alts_2257_);
lean_dec(v_discr_2256_);
v___x_2264_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1);
v___x_2265_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2264_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
return v___x_2265_;
}
else
{
lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2266_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2267_ = lean_unsigned_to_nat(0u);
v___x_2268_ = lean_array_get(v___x_2266_, v_alts_2257_, v___x_2267_);
lean_dec_ref(v_alts_2257_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_params_2269_; lean_object* v_code_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2322_; 
v_params_2269_ = lean_ctor_get(v___x_2268_, 1);
v_code_2270_ = lean_ctor_get(v___x_2268_, 2);
v_isSharedCheck_2322_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2322_ == 0)
{
lean_object* v_unused_2323_; 
v_unused_2323_ = lean_ctor_get(v___x_2268_, 0);
lean_dec(v_unused_2323_);
v___x_2272_ = v___x_2268_;
v_isShared_2273_ = v_isSharedCheck_2322_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_code_2270_);
lean_inc(v_params_2269_);
lean_dec(v___x_2268_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2322_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
uint8_t v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; 
v___x_2274_ = 0;
v___x_2275_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2276_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2274_, v_params_2269_, v___y_2252_);
if (lean_obj_tag(v___x_2276_) == 0)
{
lean_object* v___x_2277_; lean_object* v_fvarId_2278_; lean_object* v_binderName_2279_; lean_object* v___x_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; lean_object* v___x_2287_; 
lean_dec_ref_known(v___x_2276_, 1);
v___x_2277_ = lean_array_get(v___x_2275_, v_params_2269_, v___x_2267_);
lean_dec_ref(v_params_2269_);
v_fvarId_2278_ = lean_ctor_get(v___x_2277_, 0);
lean_inc(v_fvarId_2278_);
v_binderName_2279_ = lean_ctor_get(v___x_2277_, 1);
lean_inc(v_binderName_2279_);
lean_dec(v___x_2277_);
v___x_2280_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2281_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3));
v___x_2282_ = lean_box(0);
v___x_2283_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2283_, 0, v_discr_2256_);
v___x_2284_ = lean_mk_empty_array_with_capacity(v___x_2262_);
v___x_2285_ = lean_array_push(v___x_2284_, v___x_2283_);
if (v_isShared_2273_ == 0)
{
lean_ctor_set_tag(v___x_2272_, 3);
lean_ctor_set(v___x_2272_, 2, v___x_2285_);
lean_ctor_set(v___x_2272_, 1, v___x_2282_);
lean_ctor_set(v___x_2272_, 0, v___x_2281_);
v___x_2287_ = v___x_2272_;
goto v_reusejp_2286_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v___x_2281_);
lean_ctor_set(v_reuseFailAlloc_2313_, 1, v___x_2282_);
lean_ctor_set(v_reuseFailAlloc_2313_, 2, v___x_2285_);
v___x_2287_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2286_;
}
v_reusejp_2286_:
{
lean_object* v___x_2289_; 
if (v_isShared_2260_ == 0)
{
lean_ctor_set(v___x_2259_, 3, v___x_2287_);
lean_ctor_set(v___x_2259_, 2, v___x_2280_);
lean_ctor_set(v___x_2259_, 1, v_binderName_2279_);
lean_ctor_set(v___x_2259_, 0, v_fvarId_2278_);
v___x_2289_ = v___x_2259_;
goto v_reusejp_2288_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_fvarId_2278_);
lean_ctor_set(v_reuseFailAlloc_2312_, 1, v_binderName_2279_);
lean_ctor_set(v_reuseFailAlloc_2312_, 2, v___x_2280_);
lean_ctor_set(v_reuseFailAlloc_2312_, 3, v___x_2287_);
v___x_2289_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2288_;
}
v_reusejp_2288_:
{
lean_object* v___x_2290_; lean_object* v_lctx_2291_; lean_object* v_nextIdx_2292_; lean_object* v___x_2294_; uint8_t v_isShared_2295_; uint8_t v_isSharedCheck_2311_; 
v___x_2290_ = lean_st_ref_take(v___y_2252_);
v_lctx_2291_ = lean_ctor_get(v___x_2290_, 0);
v_nextIdx_2292_ = lean_ctor_get(v___x_2290_, 1);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2290_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2294_ = v___x_2290_;
v_isShared_2295_ = v_isSharedCheck_2311_;
goto v_resetjp_2293_;
}
else
{
lean_inc(v_nextIdx_2292_);
lean_inc(v_lctx_2291_);
lean_dec(v___x_2290_);
v___x_2294_ = lean_box(0);
v_isShared_2295_ = v_isSharedCheck_2311_;
goto v_resetjp_2293_;
}
v_resetjp_2293_:
{
lean_object* v___x_2296_; lean_object* v___x_2298_; 
lean_inc_ref(v___x_2289_);
v___x_2296_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2274_, v_lctx_2291_, v___x_2289_);
if (v_isShared_2295_ == 0)
{
lean_ctor_set(v___x_2294_, 0, v___x_2296_);
v___x_2298_ = v___x_2294_;
goto v_reusejp_2297_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v___x_2296_);
lean_ctor_set(v_reuseFailAlloc_2310_, 1, v_nextIdx_2292_);
v___x_2298_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2297_;
}
v_reusejp_2297_:
{
lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2299_ = lean_st_ref_put(v___y_2252_, v___x_2298_);
v___x_2300_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2270_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
if (lean_obj_tag(v___x_2300_) == 0)
{
lean_object* v_a_2301_; lean_object* v___x_2303_; uint8_t v_isShared_2304_; uint8_t v_isSharedCheck_2309_; 
v_a_2301_ = lean_ctor_get(v___x_2300_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2300_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2303_ = v___x_2300_;
v_isShared_2304_ = v_isSharedCheck_2309_;
goto v_resetjp_2302_;
}
else
{
lean_inc(v_a_2301_);
lean_dec(v___x_2300_);
v___x_2303_ = lean_box(0);
v_isShared_2304_ = v_isSharedCheck_2309_;
goto v_resetjp_2302_;
}
v_resetjp_2302_:
{
lean_object* v___x_2305_; lean_object* v___x_2307_; 
v___x_2305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2305_, 0, v___x_2289_);
lean_ctor_set(v___x_2305_, 1, v_a_2301_);
if (v_isShared_2304_ == 0)
{
lean_ctor_set(v___x_2303_, 0, v___x_2305_);
v___x_2307_ = v___x_2303_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v___x_2305_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
else
{
lean_dec_ref(v___x_2289_);
return v___x_2300_;
}
}
}
}
}
}
else
{
lean_object* v_a_2314_; lean_object* v___x_2316_; uint8_t v_isShared_2317_; uint8_t v_isSharedCheck_2321_; 
lean_del_object(v___x_2272_);
lean_dec_ref(v_code_2270_);
lean_dec_ref(v_params_2269_);
lean_del_object(v___x_2259_);
lean_dec(v_discr_2256_);
v_a_2314_ = lean_ctor_get(v___x_2276_, 0);
v_isSharedCheck_2321_ = !lean_is_exclusive(v___x_2276_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2316_ = v___x_2276_;
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
else
{
lean_inc(v_a_2314_);
lean_dec(v___x_2276_);
v___x_2316_ = lean_box(0);
v_isShared_2317_ = v_isSharedCheck_2321_;
goto v_resetjp_2315_;
}
v_resetjp_2315_:
{
lean_object* v___x_2319_; 
if (v_isShared_2317_ == 0)
{
v___x_2319_ = v___x_2316_;
goto v_reusejp_2318_;
}
else
{
lean_object* v_reuseFailAlloc_2320_; 
v_reuseFailAlloc_2320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2320_, 0, v_a_2314_);
v___x_2319_ = v_reuseFailAlloc_2320_;
goto v_reusejp_2318_;
}
v_reusejp_2318_:
{
return v___x_2319_;
}
}
}
}
}
else
{
lean_object* v___x_2324_; lean_object* v___x_2325_; 
lean_dec(v___x_2268_);
lean_del_object(v___x_2259_);
lean_dec(v_discr_2256_);
v___x_2324_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4);
v___x_2325_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2324_, v___y_2250_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
return v___x_2325_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; 
v___x_2330_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2331_ = lean_unsigned_to_nat(2u);
v___x_2332_ = lean_unsigned_to_nat(215u);
v___x_2333_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2334_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2335_ = l_mkPanicMessageWithDecl(v___x_2334_, v___x_2333_, v___x_2332_, v___x_2331_, v___x_2330_);
return v___x_2335_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v___x_2339_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2340_ = lean_unsigned_to_nat(34u);
v___x_2341_ = lean_unsigned_to_nat(216u);
v___x_2342_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2343_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2344_ = l_mkPanicMessageWithDecl(v___x_2343_, v___x_2342_, v___x_2341_, v___x_2340_, v___x_2339_);
return v___x_2344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object* v_c_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v_discr_2352_; lean_object* v_alts_2353_; lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2422_; 
v_discr_2352_ = lean_ctor_get(v_c_2345_, 2);
v_alts_2353_ = lean_ctor_get(v_c_2345_, 3);
v_isSharedCheck_2422_ = !lean_is_exclusive(v_c_2345_);
if (v_isSharedCheck_2422_ == 0)
{
lean_object* v_unused_2423_; lean_object* v_unused_2424_; 
v_unused_2423_ = lean_ctor_get(v_c_2345_, 1);
lean_dec(v_unused_2423_);
v_unused_2424_ = lean_ctor_get(v_c_2345_, 0);
lean_dec(v_unused_2424_);
v___x_2355_ = v_c_2345_;
v_isShared_2356_ = v_isSharedCheck_2422_;
goto v_resetjp_2354_;
}
else
{
lean_inc(v_alts_2353_);
lean_inc(v_discr_2352_);
lean_dec(v_c_2345_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2422_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v___x_2357_; lean_object* v___x_2358_; uint8_t v___x_2359_; 
v___x_2357_ = lean_array_get_size(v_alts_2353_);
v___x_2358_ = lean_unsigned_to_nat(1u);
v___x_2359_ = lean_nat_dec_eq(v___x_2357_, v___x_2358_);
if (v___x_2359_ == 0)
{
lean_object* v___x_2360_; lean_object* v___x_2361_; 
lean_del_object(v___x_2355_);
lean_dec_ref(v_alts_2353_);
lean_dec(v_discr_2352_);
v___x_2360_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1);
v___x_2361_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2360_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
return v___x_2361_;
}
else
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; 
v___x_2362_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2363_ = lean_unsigned_to_nat(0u);
v___x_2364_ = lean_array_get(v___x_2362_, v_alts_2353_, v___x_2363_);
lean_dec_ref(v_alts_2353_);
if (lean_obj_tag(v___x_2364_) == 0)
{
lean_object* v_params_2365_; lean_object* v_code_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2418_; 
v_params_2365_ = lean_ctor_get(v___x_2364_, 1);
v_code_2366_ = lean_ctor_get(v___x_2364_, 2);
v_isSharedCheck_2418_ = !lean_is_exclusive(v___x_2364_);
if (v_isSharedCheck_2418_ == 0)
{
lean_object* v_unused_2419_; 
v_unused_2419_ = lean_ctor_get(v___x_2364_, 0);
lean_dec(v_unused_2419_);
v___x_2368_ = v___x_2364_;
v_isShared_2369_ = v_isSharedCheck_2418_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_code_2366_);
lean_inc(v_params_2365_);
lean_dec(v___x_2364_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2418_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
uint8_t v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; 
v___x_2370_ = 0;
v___x_2371_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2372_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2370_, v_params_2365_, v___y_2348_);
if (lean_obj_tag(v___x_2372_) == 0)
{
lean_object* v___x_2373_; lean_object* v_fvarId_2374_; lean_object* v_binderName_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2383_; 
lean_dec_ref_known(v___x_2372_, 1);
v___x_2373_ = lean_array_get(v___x_2371_, v_params_2365_, v___x_2363_);
lean_dec_ref(v_params_2365_);
v_fvarId_2374_ = lean_ctor_get(v___x_2373_, 0);
lean_inc(v_fvarId_2374_);
v_binderName_2375_ = lean_ctor_get(v___x_2373_, 1);
lean_inc(v_binderName_2375_);
lean_dec(v___x_2373_);
v___x_2376_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2377_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4));
v___x_2378_ = lean_box(0);
v___x_2379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2379_, 0, v_discr_2352_);
v___x_2380_ = lean_mk_empty_array_with_capacity(v___x_2358_);
v___x_2381_ = lean_array_push(v___x_2380_, v___x_2379_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set_tag(v___x_2368_, 3);
lean_ctor_set(v___x_2368_, 2, v___x_2381_);
lean_ctor_set(v___x_2368_, 1, v___x_2378_);
lean_ctor_set(v___x_2368_, 0, v___x_2377_);
v___x_2383_ = v___x_2368_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v___x_2377_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v___x_2378_);
lean_ctor_set(v_reuseFailAlloc_2409_, 2, v___x_2381_);
v___x_2383_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
lean_object* v___x_2385_; 
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 3, v___x_2383_);
lean_ctor_set(v___x_2355_, 2, v___x_2376_);
lean_ctor_set(v___x_2355_, 1, v_binderName_2375_);
lean_ctor_set(v___x_2355_, 0, v_fvarId_2374_);
v___x_2385_ = v___x_2355_;
goto v_reusejp_2384_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v_fvarId_2374_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v_binderName_2375_);
lean_ctor_set(v_reuseFailAlloc_2408_, 2, v___x_2376_);
lean_ctor_set(v_reuseFailAlloc_2408_, 3, v___x_2383_);
v___x_2385_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2384_;
}
v_reusejp_2384_:
{
lean_object* v___x_2386_; lean_object* v_lctx_2387_; lean_object* v_nextIdx_2388_; lean_object* v___x_2390_; uint8_t v_isShared_2391_; uint8_t v_isSharedCheck_2407_; 
v___x_2386_ = lean_st_ref_take(v___y_2348_);
v_lctx_2387_ = lean_ctor_get(v___x_2386_, 0);
v_nextIdx_2388_ = lean_ctor_get(v___x_2386_, 1);
v_isSharedCheck_2407_ = !lean_is_exclusive(v___x_2386_);
if (v_isSharedCheck_2407_ == 0)
{
v___x_2390_ = v___x_2386_;
v_isShared_2391_ = v_isSharedCheck_2407_;
goto v_resetjp_2389_;
}
else
{
lean_inc(v_nextIdx_2388_);
lean_inc(v_lctx_2387_);
lean_dec(v___x_2386_);
v___x_2390_ = lean_box(0);
v_isShared_2391_ = v_isSharedCheck_2407_;
goto v_resetjp_2389_;
}
v_resetjp_2389_:
{
lean_object* v___x_2392_; lean_object* v___x_2394_; 
lean_inc_ref(v___x_2385_);
v___x_2392_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2370_, v_lctx_2387_, v___x_2385_);
if (v_isShared_2391_ == 0)
{
lean_ctor_set(v___x_2390_, 0, v___x_2392_);
v___x_2394_ = v___x_2390_;
goto v_reusejp_2393_;
}
else
{
lean_object* v_reuseFailAlloc_2406_; 
v_reuseFailAlloc_2406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2406_, 0, v___x_2392_);
lean_ctor_set(v_reuseFailAlloc_2406_, 1, v_nextIdx_2388_);
v___x_2394_ = v_reuseFailAlloc_2406_;
goto v_reusejp_2393_;
}
v_reusejp_2393_:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = lean_st_ref_put(v___y_2348_, v___x_2394_);
v___x_2396_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2366_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
if (lean_obj_tag(v___x_2396_) == 0)
{
lean_object* v_a_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2405_; 
v_a_2397_ = lean_ctor_get(v___x_2396_, 0);
v_isSharedCheck_2405_ = !lean_is_exclusive(v___x_2396_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2399_ = v___x_2396_;
v_isShared_2400_ = v_isSharedCheck_2405_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_a_2397_);
lean_dec(v___x_2396_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2405_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; lean_object* v___x_2403_; 
v___x_2401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2401_, 0, v___x_2385_);
lean_ctor_set(v___x_2401_, 1, v_a_2397_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 0, v___x_2401_);
v___x_2403_ = v___x_2399_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2401_);
v___x_2403_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
return v___x_2403_;
}
}
}
else
{
lean_dec_ref(v___x_2385_);
return v___x_2396_;
}
}
}
}
}
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
lean_del_object(v___x_2368_);
lean_dec_ref(v_code_2366_);
lean_dec_ref(v_params_2365_);
lean_del_object(v___x_2355_);
lean_dec(v_discr_2352_);
v_a_2410_ = lean_ctor_get(v___x_2372_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2372_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2372_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2372_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
}
else
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
lean_dec(v___x_2364_);
lean_del_object(v___x_2355_);
lean_dec(v_discr_2352_);
v___x_2420_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5);
v___x_2421_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2420_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
return v___x_2421_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; 
v___x_2426_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2427_ = lean_unsigned_to_nat(2u);
v___x_2428_ = lean_unsigned_to_nat(203u);
v___x_2429_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2430_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2431_ = l_mkPanicMessageWithDecl(v___x_2430_, v___x_2429_, v___x_2428_, v___x_2427_, v___x_2426_);
return v___x_2431_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; 
v___x_2436_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2437_ = lean_unsigned_to_nat(34u);
v___x_2438_ = lean_unsigned_to_nat(204u);
v___x_2439_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2440_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2441_ = l_mkPanicMessageWithDecl(v___x_2440_, v___x_2439_, v___x_2438_, v___x_2437_, v___x_2436_);
return v___x_2441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object* v_c_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_, lean_object* v___y_2445_, lean_object* v___y_2446_, lean_object* v___y_2447_){
_start:
{
lean_object* v_discr_2449_; lean_object* v_alts_2450_; lean_object* v___x_2452_; uint8_t v_isShared_2453_; uint8_t v_isSharedCheck_2519_; 
v_discr_2449_ = lean_ctor_get(v_c_2442_, 2);
v_alts_2450_ = lean_ctor_get(v_c_2442_, 3);
v_isSharedCheck_2519_ = !lean_is_exclusive(v_c_2442_);
if (v_isSharedCheck_2519_ == 0)
{
lean_object* v_unused_2520_; lean_object* v_unused_2521_; 
v_unused_2520_ = lean_ctor_get(v_c_2442_, 1);
lean_dec(v_unused_2520_);
v_unused_2521_ = lean_ctor_get(v_c_2442_, 0);
lean_dec(v_unused_2521_);
v___x_2452_ = v_c_2442_;
v_isShared_2453_ = v_isSharedCheck_2519_;
goto v_resetjp_2451_;
}
else
{
lean_inc(v_alts_2450_);
lean_inc(v_discr_2449_);
lean_dec(v_c_2442_);
v___x_2452_ = lean_box(0);
v_isShared_2453_ = v_isSharedCheck_2519_;
goto v_resetjp_2451_;
}
v_resetjp_2451_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; uint8_t v___x_2456_; 
v___x_2454_ = lean_array_get_size(v_alts_2450_);
v___x_2455_ = lean_unsigned_to_nat(1u);
v___x_2456_ = lean_nat_dec_eq(v___x_2454_, v___x_2455_);
if (v___x_2456_ == 0)
{
lean_object* v___x_2457_; lean_object* v___x_2458_; 
lean_del_object(v___x_2452_);
lean_dec_ref(v_alts_2450_);
lean_dec(v_discr_2449_);
v___x_2457_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1);
v___x_2458_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2457_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2458_;
}
else
{
lean_object* v___x_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; 
v___x_2459_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2460_ = lean_unsigned_to_nat(0u);
v___x_2461_ = lean_array_get(v___x_2459_, v_alts_2450_, v___x_2460_);
lean_dec_ref(v_alts_2450_);
if (lean_obj_tag(v___x_2461_) == 0)
{
lean_object* v_params_2462_; lean_object* v_code_2463_; lean_object* v___x_2465_; uint8_t v_isShared_2466_; uint8_t v_isSharedCheck_2515_; 
v_params_2462_ = lean_ctor_get(v___x_2461_, 1);
v_code_2463_ = lean_ctor_get(v___x_2461_, 2);
v_isSharedCheck_2515_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2515_ == 0)
{
lean_object* v_unused_2516_; 
v_unused_2516_ = lean_ctor_get(v___x_2461_, 0);
lean_dec(v_unused_2516_);
v___x_2465_ = v___x_2461_;
v_isShared_2466_ = v_isSharedCheck_2515_;
goto v_resetjp_2464_;
}
else
{
lean_inc(v_code_2463_);
lean_inc(v_params_2462_);
lean_dec(v___x_2461_);
v___x_2465_ = lean_box(0);
v_isShared_2466_ = v_isSharedCheck_2515_;
goto v_resetjp_2464_;
}
v_resetjp_2464_:
{
uint8_t v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; 
v___x_2467_ = 0;
v___x_2468_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2469_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2467_, v_params_2462_, v___y_2445_);
if (lean_obj_tag(v___x_2469_) == 0)
{
lean_object* v___x_2470_; lean_object* v_fvarId_2471_; lean_object* v_binderName_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2480_; 
lean_dec_ref_known(v___x_2469_, 1);
v___x_2470_ = lean_array_get(v___x_2468_, v_params_2462_, v___x_2460_);
lean_dec_ref(v_params_2462_);
v_fvarId_2471_ = lean_ctor_get(v___x_2470_, 0);
lean_inc(v_fvarId_2471_);
v_binderName_2472_ = lean_ctor_get(v___x_2470_, 1);
lean_inc(v_binderName_2472_);
lean_dec(v___x_2470_);
v___x_2473_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2474_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4));
v___x_2475_ = lean_box(0);
v___x_2476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2476_, 0, v_discr_2449_);
v___x_2477_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2478_ = lean_array_push(v___x_2477_, v___x_2476_);
if (v_isShared_2466_ == 0)
{
lean_ctor_set_tag(v___x_2465_, 3);
lean_ctor_set(v___x_2465_, 2, v___x_2478_);
lean_ctor_set(v___x_2465_, 1, v___x_2475_);
lean_ctor_set(v___x_2465_, 0, v___x_2474_);
v___x_2480_ = v___x_2465_;
goto v_reusejp_2479_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v___x_2474_);
lean_ctor_set(v_reuseFailAlloc_2506_, 1, v___x_2475_);
lean_ctor_set(v_reuseFailAlloc_2506_, 2, v___x_2478_);
v___x_2480_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2479_;
}
v_reusejp_2479_:
{
lean_object* v___x_2482_; 
if (v_isShared_2453_ == 0)
{
lean_ctor_set(v___x_2452_, 3, v___x_2480_);
lean_ctor_set(v___x_2452_, 2, v___x_2473_);
lean_ctor_set(v___x_2452_, 1, v_binderName_2472_);
lean_ctor_set(v___x_2452_, 0, v_fvarId_2471_);
v___x_2482_ = v___x_2452_;
goto v_reusejp_2481_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v_fvarId_2471_);
lean_ctor_set(v_reuseFailAlloc_2505_, 1, v_binderName_2472_);
lean_ctor_set(v_reuseFailAlloc_2505_, 2, v___x_2473_);
lean_ctor_set(v_reuseFailAlloc_2505_, 3, v___x_2480_);
v___x_2482_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2481_;
}
v_reusejp_2481_:
{
lean_object* v___x_2483_; lean_object* v_lctx_2484_; lean_object* v_nextIdx_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2504_; 
v___x_2483_ = lean_st_ref_take(v___y_2445_);
v_lctx_2484_ = lean_ctor_get(v___x_2483_, 0);
v_nextIdx_2485_ = lean_ctor_get(v___x_2483_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v___x_2483_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2487_ = v___x_2483_;
v_isShared_2488_ = v_isSharedCheck_2504_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_nextIdx_2485_);
lean_inc(v_lctx_2484_);
lean_dec(v___x_2483_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2504_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2489_; lean_object* v___x_2491_; 
lean_inc_ref(v___x_2482_);
v___x_2489_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2467_, v_lctx_2484_, v___x_2482_);
if (v_isShared_2488_ == 0)
{
lean_ctor_set(v___x_2487_, 0, v___x_2489_);
v___x_2491_ = v___x_2487_;
goto v_reusejp_2490_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2489_);
lean_ctor_set(v_reuseFailAlloc_2503_, 1, v_nextIdx_2485_);
v___x_2491_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2490_;
}
v_reusejp_2490_:
{
lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2492_ = lean_st_ref_put(v___y_2445_, v___x_2491_);
v___x_2493_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2463_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
if (lean_obj_tag(v___x_2493_) == 0)
{
lean_object* v_a_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2502_; 
v_a_2494_ = lean_ctor_get(v___x_2493_, 0);
v_isSharedCheck_2502_ = !lean_is_exclusive(v___x_2493_);
if (v_isSharedCheck_2502_ == 0)
{
v___x_2496_ = v___x_2493_;
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_a_2494_);
lean_dec(v___x_2493_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2502_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___x_2498_; lean_object* v___x_2500_; 
v___x_2498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2482_);
lean_ctor_set(v___x_2498_, 1, v_a_2494_);
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 0, v___x_2498_);
v___x_2500_ = v___x_2496_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
}
else
{
lean_dec_ref(v___x_2482_);
return v___x_2493_;
}
}
}
}
}
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_del_object(v___x_2465_);
lean_dec_ref(v_code_2463_);
lean_dec_ref(v_params_2462_);
lean_del_object(v___x_2452_);
lean_dec(v_discr_2449_);
v_a_2507_ = lean_ctor_get(v___x_2469_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2469_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2469_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2469_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
}
else
{
lean_object* v___x_2517_; lean_object* v___x_2518_; 
lean_dec(v___x_2461_);
lean_del_object(v___x_2452_);
lean_dec(v_discr_2449_);
v___x_2517_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6);
v___x_2518_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2517_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_);
return v___x_2518_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
v___x_2523_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2524_ = lean_unsigned_to_nat(2u);
v___x_2525_ = lean_unsigned_to_nat(192u);
v___x_2526_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2527_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2528_ = l_mkPanicMessageWithDecl(v___x_2527_, v___x_2526_, v___x_2525_, v___x_2524_, v___x_2523_);
return v___x_2528_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; 
v___x_2530_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2531_ = lean_unsigned_to_nat(34u);
v___x_2532_ = lean_unsigned_to_nat(193u);
v___x_2533_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2534_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2535_ = l_mkPanicMessageWithDecl(v___x_2534_, v___x_2533_, v___x_2532_, v___x_2531_, v___x_2530_);
return v___x_2535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object* v_c_2536_, lean_object* v_uintName_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_, lean_object* v___y_2542_){
_start:
{
lean_object* v_discr_2544_; lean_object* v_alts_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2615_; 
v_discr_2544_ = lean_ctor_get(v_c_2536_, 2);
v_alts_2545_ = lean_ctor_get(v_c_2536_, 3);
v_isSharedCheck_2615_ = !lean_is_exclusive(v_c_2536_);
if (v_isSharedCheck_2615_ == 0)
{
lean_object* v_unused_2616_; lean_object* v_unused_2617_; 
v_unused_2616_ = lean_ctor_get(v_c_2536_, 1);
lean_dec(v_unused_2616_);
v_unused_2617_ = lean_ctor_get(v_c_2536_, 0);
lean_dec(v_unused_2617_);
v___x_2547_ = v_c_2536_;
v_isShared_2548_ = v_isSharedCheck_2615_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_alts_2545_);
lean_inc(v_discr_2544_);
lean_dec(v_c_2536_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2615_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___x_2549_ = lean_array_get_size(v_alts_2545_);
v___x_2550_ = lean_unsigned_to_nat(1u);
v___x_2551_ = lean_nat_dec_eq(v___x_2549_, v___x_2550_);
if (v___x_2551_ == 0)
{
lean_object* v___x_2552_; lean_object* v___x_2553_; 
lean_del_object(v___x_2547_);
lean_dec_ref(v_alts_2545_);
lean_dec(v_discr_2544_);
lean_dec(v_uintName_2537_);
v___x_2552_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2);
v___x_2553_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2552_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
return v___x_2553_;
}
else
{
lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2556_; 
v___x_2554_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2555_ = lean_unsigned_to_nat(0u);
v___x_2556_ = lean_array_get(v___x_2554_, v_alts_2545_, v___x_2555_);
lean_dec_ref(v_alts_2545_);
if (lean_obj_tag(v___x_2556_) == 0)
{
lean_object* v_params_2557_; lean_object* v_code_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2611_; 
v_params_2557_ = lean_ctor_get(v___x_2556_, 1);
v_code_2558_ = lean_ctor_get(v___x_2556_, 2);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2556_);
if (v_isSharedCheck_2611_ == 0)
{
lean_object* v_unused_2612_; 
v_unused_2612_ = lean_ctor_get(v___x_2556_, 0);
lean_dec(v_unused_2612_);
v___x_2560_ = v___x_2556_;
v_isShared_2561_ = v_isSharedCheck_2611_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_code_2558_);
lean_inc(v_params_2557_);
lean_dec(v___x_2556_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2611_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
uint8_t v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2562_ = 0;
v___x_2563_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2564_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2562_, v_params_2557_, v___y_2540_);
if (lean_obj_tag(v___x_2564_) == 0)
{
lean_object* v___x_2565_; lean_object* v_fvarId_2566_; lean_object* v_binderName_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2576_; 
lean_dec_ref_known(v___x_2564_, 1);
v___x_2565_ = lean_array_get(v___x_2563_, v_params_2557_, v___x_2555_);
lean_dec_ref(v_params_2557_);
v_fvarId_2566_ = lean_ctor_get(v___x_2565_, 0);
lean_inc(v_fvarId_2566_);
v_binderName_2567_ = lean_ctor_get(v___x_2565_, 1);
lean_inc(v_binderName_2567_);
lean_dec(v___x_2565_);
v___x_2568_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2569_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4));
v___x_2570_ = l_Lean_Name_str___override(v_uintName_2537_, v___x_2569_);
v___x_2571_ = lean_box(0);
v___x_2572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2572_, 0, v_discr_2544_);
v___x_2573_ = lean_mk_empty_array_with_capacity(v___x_2550_);
v___x_2574_ = lean_array_push(v___x_2573_, v___x_2572_);
if (v_isShared_2561_ == 0)
{
lean_ctor_set_tag(v___x_2560_, 3);
lean_ctor_set(v___x_2560_, 2, v___x_2574_);
lean_ctor_set(v___x_2560_, 1, v___x_2571_);
lean_ctor_set(v___x_2560_, 0, v___x_2570_);
v___x_2576_ = v___x_2560_;
goto v_reusejp_2575_;
}
else
{
lean_object* v_reuseFailAlloc_2602_; 
v_reuseFailAlloc_2602_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2602_, 0, v___x_2570_);
lean_ctor_set(v_reuseFailAlloc_2602_, 1, v___x_2571_);
lean_ctor_set(v_reuseFailAlloc_2602_, 2, v___x_2574_);
v___x_2576_ = v_reuseFailAlloc_2602_;
goto v_reusejp_2575_;
}
v_reusejp_2575_:
{
lean_object* v___x_2578_; 
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 3, v___x_2576_);
lean_ctor_set(v___x_2547_, 2, v___x_2568_);
lean_ctor_set(v___x_2547_, 1, v_binderName_2567_);
lean_ctor_set(v___x_2547_, 0, v_fvarId_2566_);
v___x_2578_ = v___x_2547_;
goto v_reusejp_2577_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_fvarId_2566_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v_binderName_2567_);
lean_ctor_set(v_reuseFailAlloc_2601_, 2, v___x_2568_);
lean_ctor_set(v_reuseFailAlloc_2601_, 3, v___x_2576_);
v___x_2578_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2577_;
}
v_reusejp_2577_:
{
lean_object* v___x_2579_; lean_object* v_lctx_2580_; lean_object* v_nextIdx_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2600_; 
v___x_2579_ = lean_st_ref_take(v___y_2540_);
v_lctx_2580_ = lean_ctor_get(v___x_2579_, 0);
v_nextIdx_2581_ = lean_ctor_get(v___x_2579_, 1);
v_isSharedCheck_2600_ = !lean_is_exclusive(v___x_2579_);
if (v_isSharedCheck_2600_ == 0)
{
v___x_2583_ = v___x_2579_;
v_isShared_2584_ = v_isSharedCheck_2600_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_nextIdx_2581_);
lean_inc(v_lctx_2580_);
lean_dec(v___x_2579_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2600_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2585_; lean_object* v___x_2587_; 
lean_inc_ref(v___x_2578_);
v___x_2585_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2562_, v_lctx_2580_, v___x_2578_);
if (v_isShared_2584_ == 0)
{
lean_ctor_set(v___x_2583_, 0, v___x_2585_);
v___x_2587_ = v___x_2583_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2599_; 
v_reuseFailAlloc_2599_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2599_, 0, v___x_2585_);
lean_ctor_set(v_reuseFailAlloc_2599_, 1, v_nextIdx_2581_);
v___x_2587_ = v_reuseFailAlloc_2599_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
lean_object* v___x_2588_; lean_object* v___x_2589_; 
v___x_2588_ = lean_st_ref_put(v___y_2540_, v___x_2587_);
v___x_2589_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2558_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
if (lean_obj_tag(v___x_2589_) == 0)
{
lean_object* v_a_2590_; lean_object* v___x_2592_; uint8_t v_isShared_2593_; uint8_t v_isSharedCheck_2598_; 
v_a_2590_ = lean_ctor_get(v___x_2589_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2589_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2592_ = v___x_2589_;
v_isShared_2593_ = v_isSharedCheck_2598_;
goto v_resetjp_2591_;
}
else
{
lean_inc(v_a_2590_);
lean_dec(v___x_2589_);
v___x_2592_ = lean_box(0);
v_isShared_2593_ = v_isSharedCheck_2598_;
goto v_resetjp_2591_;
}
v_resetjp_2591_:
{
lean_object* v___x_2594_; lean_object* v___x_2596_; 
v___x_2594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2578_);
lean_ctor_set(v___x_2594_, 1, v_a_2590_);
if (v_isShared_2593_ == 0)
{
lean_ctor_set(v___x_2592_, 0, v___x_2594_);
v___x_2596_ = v___x_2592_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2594_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
else
{
lean_dec_ref(v___x_2578_);
return v___x_2589_;
}
}
}
}
}
}
else
{
lean_object* v_a_2603_; lean_object* v___x_2605_; uint8_t v_isShared_2606_; uint8_t v_isSharedCheck_2610_; 
lean_del_object(v___x_2560_);
lean_dec_ref(v_code_2558_);
lean_dec_ref(v_params_2557_);
lean_del_object(v___x_2547_);
lean_dec(v_discr_2544_);
lean_dec(v_uintName_2537_);
v_a_2603_ = lean_ctor_get(v___x_2564_, 0);
v_isSharedCheck_2610_ = !lean_is_exclusive(v___x_2564_);
if (v_isSharedCheck_2610_ == 0)
{
v___x_2605_ = v___x_2564_;
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
else
{
lean_inc(v_a_2603_);
lean_dec(v___x_2564_);
v___x_2605_ = lean_box(0);
v_isShared_2606_ = v_isSharedCheck_2610_;
goto v_resetjp_2604_;
}
v_resetjp_2604_:
{
lean_object* v___x_2608_; 
if (v_isShared_2606_ == 0)
{
v___x_2608_ = v___x_2605_;
goto v_reusejp_2607_;
}
else
{
lean_object* v_reuseFailAlloc_2609_; 
v_reuseFailAlloc_2609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2609_, 0, v_a_2603_);
v___x_2608_ = v_reuseFailAlloc_2609_;
goto v_reusejp_2607_;
}
v_reusejp_2607_:
{
return v___x_2608_;
}
}
}
}
}
else
{
lean_object* v___x_2613_; lean_object* v___x_2614_; 
lean_dec(v___x_2556_);
lean_del_object(v___x_2547_);
lean_dec(v_discr_2544_);
lean_dec(v_uintName_2537_);
v___x_2613_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5);
v___x_2614_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2613_, v___y_2538_, v___y_2539_, v___y_2540_, v___y_2541_, v___y_2542_);
return v___x_2614_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; 
v___x_2618_ = lean_box(0);
v___x_2619_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_2620_ = l_Lean_mkConst(v___x_2619_, v___x_2618_);
return v___x_2620_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; 
v___x_2627_ = lean_box(0);
v___x_2628_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_2629_ = l_Lean_mkConst(v___x_2628_, v___x_2627_);
return v___x_2629_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7(void){
_start:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; 
v___x_2640_ = lean_box(0);
v___x_2641_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_2642_ = l_Lean_mkConst(v___x_2641_, v___x_2640_);
return v___x_2642_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(lean_object* v___x_2675_, size_t v_sz_2676_, size_t v_i_2677_, lean_object* v_bs_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_){
_start:
{
uint8_t v___x_2685_; 
v___x_2685_ = lean_usize_dec_lt(v_i_2677_, v_sz_2676_);
if (v___x_2685_ == 0)
{
lean_object* v___x_2686_; 
lean_dec(v___x_2675_);
v___x_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2686_, 0, v_bs_2678_);
return v___x_2686_;
}
else
{
lean_object* v_v_2687_; lean_object* v___x_2688_; lean_object* v_bs_x27_2689_; lean_object* v_a_2691_; 
v_v_2687_ = lean_array_uget(v_bs_2678_, v_i_2677_);
v___x_2688_ = lean_unsigned_to_nat(0u);
v_bs_x27_2689_ = lean_array_uset(v_bs_2678_, v_i_2677_, v___x_2688_);
if (lean_obj_tag(v_v_2687_) == 0)
{
lean_object* v_ctorName_2696_; lean_object* v_params_2697_; lean_object* v_code_2698_; lean_object* v___x_2700_; uint8_t v_isShared_2701_; uint8_t v_isSharedCheck_2825_; 
v_ctorName_2696_ = lean_ctor_get(v_v_2687_, 0);
v_params_2697_ = lean_ctor_get(v_v_2687_, 1);
v_code_2698_ = lean_ctor_get(v_v_2687_, 2);
v_isSharedCheck_2825_ = !lean_is_exclusive(v_v_2687_);
if (v_isSharedCheck_2825_ == 0)
{
v___x_2700_ = v_v_2687_;
v_isShared_2701_ = v_isSharedCheck_2825_;
goto v_resetjp_2699_;
}
else
{
lean_inc(v_code_2698_);
lean_inc(v_params_2697_);
lean_inc(v_ctorName_2696_);
lean_dec(v_v_2687_);
v___x_2700_ = lean_box(0);
v_isShared_2701_ = v_isSharedCheck_2825_;
goto v_resetjp_2699_;
}
v_resetjp_2699_:
{
uint8_t v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; 
v___x_2702_ = 0;
v___x_2703_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2704_ = lean_box(0);
v___x_2705_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2706_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2702_, v_params_2697_, v___y_2681_);
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v___x_2707_; lean_object* v___x_2708_; uint8_t v___x_2709_; 
lean_dec_ref_known(v___x_2706_, 1);
v___x_2707_ = lean_array_get(v___x_2703_, v_params_2697_, v___x_2688_);
lean_dec_ref(v_params_2697_);
v___x_2708_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1));
v___x_2709_ = lean_name_eq(v_ctorName_2696_, v___x_2708_);
lean_dec(v_ctorName_2696_);
if (v___x_2709_ == 0)
{
lean_object* v_fvarId_2710_; lean_object* v_binderName_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v_lctx_2719_; lean_object* v_nextIdx_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2745_; 
v_fvarId_2710_ = lean_ctor_get(v___x_2707_, 0);
lean_inc(v_fvarId_2710_);
v_binderName_2711_ = lean_ctor_get(v___x_2707_, 1);
lean_inc(v_binderName_2711_);
lean_dec(v___x_2707_);
v___x_2712_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2713_ = lean_unsigned_to_nat(1u);
v___x_2714_ = lean_mk_empty_array_with_capacity(v___x_2713_);
lean_inc(v___x_2675_);
v___x_2715_ = lean_array_push(v___x_2714_, v___x_2675_);
v___x_2716_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2712_);
lean_ctor_set(v___x_2716_, 1, v___x_2704_);
lean_ctor_set(v___x_2716_, 2, v___x_2715_);
v___x_2717_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2717_, 0, v_fvarId_2710_);
lean_ctor_set(v___x_2717_, 1, v_binderName_2711_);
lean_ctor_set(v___x_2717_, 2, v___x_2705_);
lean_ctor_set(v___x_2717_, 3, v___x_2716_);
v___x_2718_ = lean_st_ref_take(v___y_2681_);
v_lctx_2719_ = lean_ctor_get(v___x_2718_, 0);
v_nextIdx_2720_ = lean_ctor_get(v___x_2718_, 1);
v_isSharedCheck_2745_ = !lean_is_exclusive(v___x_2718_);
if (v_isSharedCheck_2745_ == 0)
{
v___x_2722_ = v___x_2718_;
v_isShared_2723_ = v_isSharedCheck_2745_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_nextIdx_2720_);
lean_inc(v_lctx_2719_);
lean_dec(v___x_2718_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2745_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___x_2724_; lean_object* v___x_2726_; 
lean_inc_ref(v___x_2717_);
v___x_2724_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2702_, v_lctx_2719_, v___x_2717_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 0, v___x_2724_);
v___x_2726_ = v___x_2722_;
goto v_reusejp_2725_;
}
else
{
lean_object* v_reuseFailAlloc_2744_; 
v_reuseFailAlloc_2744_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2744_, 0, v___x_2724_);
lean_ctor_set(v_reuseFailAlloc_2744_, 1, v_nextIdx_2720_);
v___x_2726_ = v_reuseFailAlloc_2744_;
goto v_reusejp_2725_;
}
v_reusejp_2725_:
{
lean_object* v___x_2727_; lean_object* v___x_2728_; 
v___x_2727_ = lean_st_ref_put(v___y_2681_, v___x_2726_);
v___x_2728_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2698_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
if (lean_obj_tag(v___x_2728_) == 0)
{
lean_object* v_a_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v___x_2732_; lean_object* v___x_2734_; 
v_a_2729_ = lean_ctor_get(v___x_2728_, 0);
lean_inc(v_a_2729_);
lean_dec_ref_known(v___x_2728_, 1);
v___x_2730_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_2731_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2732_, 0, v___x_2717_);
lean_ctor_set(v___x_2732_, 1, v_a_2729_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 2, v___x_2732_);
lean_ctor_set(v___x_2700_, 1, v___x_2731_);
lean_ctor_set(v___x_2700_, 0, v___x_2730_);
v___x_2734_ = v___x_2700_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2735_; 
v_reuseFailAlloc_2735_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2735_, 0, v___x_2730_);
lean_ctor_set(v_reuseFailAlloc_2735_, 1, v___x_2731_);
lean_ctor_set(v_reuseFailAlloc_2735_, 2, v___x_2732_);
v___x_2734_ = v_reuseFailAlloc_2735_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
v_a_2691_ = v___x_2734_;
goto v___jp_2690_;
}
}
else
{
lean_object* v_a_2736_; lean_object* v___x_2738_; uint8_t v_isShared_2739_; uint8_t v_isSharedCheck_2743_; 
lean_dec_ref_known(v___x_2717_, 4);
lean_del_object(v___x_2700_);
lean_dec_ref(v_bs_x27_2689_);
lean_dec(v___x_2675_);
v_a_2736_ = lean_ctor_get(v___x_2728_, 0);
v_isSharedCheck_2743_ = !lean_is_exclusive(v___x_2728_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2738_ = v___x_2728_;
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
else
{
lean_inc(v_a_2736_);
lean_dec(v___x_2728_);
v___x_2738_ = lean_box(0);
v_isShared_2739_ = v_isSharedCheck_2743_;
goto v_resetjp_2737_;
}
v_resetjp_2737_:
{
lean_object* v___x_2741_; 
if (v_isShared_2739_ == 0)
{
v___x_2741_ = v___x_2738_;
goto v_reusejp_2740_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v_a_2736_);
v___x_2741_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2740_;
}
v_reusejp_2740_:
{
return v___x_2741_;
}
}
}
}
}
}
else
{
lean_object* v___x_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2746_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5));
v___x_2747_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2748_ = lean_unsigned_to_nat(1u);
v___x_2749_ = lean_mk_empty_array_with_capacity(v___x_2748_);
lean_inc(v___x_2675_);
v___x_2750_ = lean_array_push(v___x_2749_, v___x_2675_);
v___x_2751_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2751_, 0, v___x_2747_);
lean_ctor_set(v___x_2751_, 1, v___x_2704_);
lean_ctor_set(v___x_2751_, 2, v___x_2750_);
v___x_2752_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2702_, v___x_2746_, v___x_2705_, v___x_2751_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
if (lean_obj_tag(v___x_2752_) == 0)
{
lean_object* v_a_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; 
v_a_2753_ = lean_ctor_get(v___x_2752_, 0);
lean_inc(v_a_2753_);
lean_dec_ref_known(v___x_2752_, 1);
v___x_2754_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_2755_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_2756_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2702_, v___x_2754_, v___x_2705_, v___x_2755_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
if (lean_obj_tag(v___x_2756_) == 0)
{
lean_object* v_a_2757_; lean_object* v_fvarId_2758_; lean_object* v_binderName_2759_; lean_object* v_fvarId_2760_; lean_object* v_fvarId_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v_lctx_2772_; lean_object* v_nextIdx_2773_; lean_object* v___x_2775_; uint8_t v_isShared_2776_; uint8_t v_isSharedCheck_2800_; 
v_a_2757_ = lean_ctor_get(v___x_2756_, 0);
lean_inc(v_a_2757_);
lean_dec_ref_known(v___x_2756_, 1);
v_fvarId_2758_ = lean_ctor_get(v___x_2707_, 0);
lean_inc(v_fvarId_2758_);
v_binderName_2759_ = lean_ctor_get(v___x_2707_, 1);
lean_inc(v_binderName_2759_);
lean_dec(v___x_2707_);
v_fvarId_2760_ = lean_ctor_get(v_a_2753_, 0);
v_fvarId_2761_ = lean_ctor_get(v_a_2757_, 0);
v___x_2762_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_2760_);
v___x_2763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2763_, 0, v_fvarId_2760_);
lean_inc(v_fvarId_2761_);
v___x_2764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2764_, 0, v_fvarId_2761_);
v___x_2765_ = lean_unsigned_to_nat(2u);
v___x_2766_ = lean_mk_empty_array_with_capacity(v___x_2765_);
v___x_2767_ = lean_array_push(v___x_2766_, v___x_2763_);
v___x_2768_ = lean_array_push(v___x_2767_, v___x_2764_);
v___x_2769_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2769_, 0, v___x_2762_);
lean_ctor_set(v___x_2769_, 1, v___x_2704_);
lean_ctor_set(v___x_2769_, 2, v___x_2768_);
v___x_2770_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2770_, 0, v_fvarId_2758_);
lean_ctor_set(v___x_2770_, 1, v_binderName_2759_);
lean_ctor_set(v___x_2770_, 2, v___x_2705_);
lean_ctor_set(v___x_2770_, 3, v___x_2769_);
v___x_2771_ = lean_st_ref_take(v___y_2681_);
v_lctx_2772_ = lean_ctor_get(v___x_2771_, 0);
v_nextIdx_2773_ = lean_ctor_get(v___x_2771_, 1);
v_isSharedCheck_2800_ = !lean_is_exclusive(v___x_2771_);
if (v_isSharedCheck_2800_ == 0)
{
v___x_2775_ = v___x_2771_;
v_isShared_2776_ = v_isSharedCheck_2800_;
goto v_resetjp_2774_;
}
else
{
lean_inc(v_nextIdx_2773_);
lean_inc(v_lctx_2772_);
lean_dec(v___x_2771_);
v___x_2775_ = lean_box(0);
v_isShared_2776_ = v_isSharedCheck_2800_;
goto v_resetjp_2774_;
}
v_resetjp_2774_:
{
lean_object* v___x_2777_; lean_object* v___x_2779_; 
lean_inc_ref(v___x_2770_);
v___x_2777_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2702_, v_lctx_2772_, v___x_2770_);
if (v_isShared_2776_ == 0)
{
lean_ctor_set(v___x_2775_, 0, v___x_2777_);
v___x_2779_ = v___x_2775_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2799_; 
v_reuseFailAlloc_2799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2799_, 0, v___x_2777_);
lean_ctor_set(v_reuseFailAlloc_2799_, 1, v_nextIdx_2773_);
v___x_2779_ = v_reuseFailAlloc_2799_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2780_ = lean_st_ref_put(v___y_2681_, v___x_2779_);
v___x_2781_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2698_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
if (lean_obj_tag(v___x_2781_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2789_; 
v_a_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v___x_2781_, 1);
v___x_2783_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_2784_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2785_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2785_, 0, v___x_2770_);
lean_ctor_set(v___x_2785_, 1, v_a_2782_);
v___x_2786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2786_, 0, v_a_2757_);
lean_ctor_set(v___x_2786_, 1, v___x_2785_);
v___x_2787_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2787_, 0, v_a_2753_);
lean_ctor_set(v___x_2787_, 1, v___x_2786_);
if (v_isShared_2701_ == 0)
{
lean_ctor_set(v___x_2700_, 2, v___x_2787_);
lean_ctor_set(v___x_2700_, 1, v___x_2784_);
lean_ctor_set(v___x_2700_, 0, v___x_2783_);
v___x_2789_ = v___x_2700_;
goto v_reusejp_2788_;
}
else
{
lean_object* v_reuseFailAlloc_2790_; 
v_reuseFailAlloc_2790_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2790_, 0, v___x_2783_);
lean_ctor_set(v_reuseFailAlloc_2790_, 1, v___x_2784_);
lean_ctor_set(v_reuseFailAlloc_2790_, 2, v___x_2787_);
v___x_2789_ = v_reuseFailAlloc_2790_;
goto v_reusejp_2788_;
}
v_reusejp_2788_:
{
v_a_2691_ = v___x_2789_;
goto v___jp_2690_;
}
}
else
{
lean_object* v_a_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2798_; 
lean_dec_ref_known(v___x_2770_, 4);
lean_dec(v_a_2757_);
lean_dec(v_a_2753_);
lean_del_object(v___x_2700_);
lean_dec_ref(v_bs_x27_2689_);
lean_dec(v___x_2675_);
v_a_2791_ = lean_ctor_get(v___x_2781_, 0);
v_isSharedCheck_2798_ = !lean_is_exclusive(v___x_2781_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2793_ = v___x_2781_;
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_a_2791_);
lean_dec(v___x_2781_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2798_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v___x_2796_; 
if (v_isShared_2794_ == 0)
{
v___x_2796_ = v___x_2793_;
goto v_reusejp_2795_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v_a_2791_);
v___x_2796_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2795_;
}
v_reusejp_2795_:
{
return v___x_2796_;
}
}
}
}
}
}
else
{
lean_object* v_a_2801_; lean_object* v___x_2803_; uint8_t v_isShared_2804_; uint8_t v_isSharedCheck_2808_; 
lean_dec(v_a_2753_);
lean_dec(v___x_2707_);
lean_del_object(v___x_2700_);
lean_dec_ref(v_code_2698_);
lean_dec_ref(v_bs_x27_2689_);
lean_dec(v___x_2675_);
v_a_2801_ = lean_ctor_get(v___x_2756_, 0);
v_isSharedCheck_2808_ = !lean_is_exclusive(v___x_2756_);
if (v_isSharedCheck_2808_ == 0)
{
v___x_2803_ = v___x_2756_;
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
else
{
lean_inc(v_a_2801_);
lean_dec(v___x_2756_);
v___x_2803_ = lean_box(0);
v_isShared_2804_ = v_isSharedCheck_2808_;
goto v_resetjp_2802_;
}
v_resetjp_2802_:
{
lean_object* v___x_2806_; 
if (v_isShared_2804_ == 0)
{
v___x_2806_ = v___x_2803_;
goto v_reusejp_2805_;
}
else
{
lean_object* v_reuseFailAlloc_2807_; 
v_reuseFailAlloc_2807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2807_, 0, v_a_2801_);
v___x_2806_ = v_reuseFailAlloc_2807_;
goto v_reusejp_2805_;
}
v_reusejp_2805_:
{
return v___x_2806_;
}
}
}
}
else
{
lean_object* v_a_2809_; lean_object* v___x_2811_; uint8_t v_isShared_2812_; uint8_t v_isSharedCheck_2816_; 
lean_dec(v___x_2707_);
lean_del_object(v___x_2700_);
lean_dec_ref(v_code_2698_);
lean_dec_ref(v_bs_x27_2689_);
lean_dec(v___x_2675_);
v_a_2809_ = lean_ctor_get(v___x_2752_, 0);
v_isSharedCheck_2816_ = !lean_is_exclusive(v___x_2752_);
if (v_isSharedCheck_2816_ == 0)
{
v___x_2811_ = v___x_2752_;
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
else
{
lean_inc(v_a_2809_);
lean_dec(v___x_2752_);
v___x_2811_ = lean_box(0);
v_isShared_2812_ = v_isSharedCheck_2816_;
goto v_resetjp_2810_;
}
v_resetjp_2810_:
{
lean_object* v___x_2814_; 
if (v_isShared_2812_ == 0)
{
v___x_2814_ = v___x_2811_;
goto v_reusejp_2813_;
}
else
{
lean_object* v_reuseFailAlloc_2815_; 
v_reuseFailAlloc_2815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2815_, 0, v_a_2809_);
v___x_2814_ = v_reuseFailAlloc_2815_;
goto v_reusejp_2813_;
}
v_reusejp_2813_:
{
return v___x_2814_;
}
}
}
}
}
else
{
lean_object* v_a_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2824_; 
lean_del_object(v___x_2700_);
lean_dec_ref(v_code_2698_);
lean_dec_ref(v_params_2697_);
lean_dec(v_ctorName_2696_);
lean_dec_ref(v_bs_x27_2689_);
lean_dec(v___x_2675_);
v_a_2817_ = lean_ctor_get(v___x_2706_, 0);
v_isSharedCheck_2824_ = !lean_is_exclusive(v___x_2706_);
if (v_isSharedCheck_2824_ == 0)
{
v___x_2819_ = v___x_2706_;
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
else
{
lean_inc(v_a_2817_);
lean_dec(v___x_2706_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2824_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2822_; 
if (v_isShared_2820_ == 0)
{
v___x_2822_ = v___x_2819_;
goto v_reusejp_2821_;
}
else
{
lean_object* v_reuseFailAlloc_2823_; 
v_reuseFailAlloc_2823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2823_, 0, v_a_2817_);
v___x_2822_ = v_reuseFailAlloc_2823_;
goto v_reusejp_2821_;
}
v_reusejp_2821_:
{
return v___x_2822_;
}
}
}
}
}
else
{
lean_object* v_code_2826_; lean_object* v___x_2827_; 
v_code_2826_ = lean_ctor_get(v_v_2687_, 0);
lean_inc_ref(v_code_2826_);
v___x_2827_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2826_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_);
if (lean_obj_tag(v___x_2827_) == 0)
{
lean_object* v_a_2828_; lean_object* v___x_2829_; 
v_a_2828_ = lean_ctor_get(v___x_2827_, 0);
lean_inc(v_a_2828_);
lean_dec_ref_known(v___x_2827_, 1);
v___x_2829_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_2687_, v_a_2828_);
v_a_2691_ = v___x_2829_;
goto v___jp_2690_;
}
else
{
lean_object* v_a_2830_; lean_object* v___x_2832_; uint8_t v_isShared_2833_; uint8_t v_isSharedCheck_2837_; 
lean_dec_ref_known(v_v_2687_, 1);
lean_dec_ref(v_bs_x27_2689_);
lean_dec(v___x_2675_);
v_a_2830_ = lean_ctor_get(v___x_2827_, 0);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2837_ == 0)
{
v___x_2832_ = v___x_2827_;
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
else
{
lean_inc(v_a_2830_);
lean_dec(v___x_2827_);
v___x_2832_ = lean_box(0);
v_isShared_2833_ = v_isSharedCheck_2837_;
goto v_resetjp_2831_;
}
v_resetjp_2831_:
{
lean_object* v___x_2835_; 
if (v_isShared_2833_ == 0)
{
v___x_2835_ = v___x_2832_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v_a_2830_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
}
v___jp_2690_:
{
size_t v___x_2692_; size_t v___x_2693_; lean_object* v___x_2694_; 
v___x_2692_ = ((size_t)1ULL);
v___x_2693_ = lean_usize_add(v_i_2677_, v___x_2692_);
v___x_2694_ = lean_array_uset(v_bs_x27_2689_, v_i_2677_, v_a_2691_);
v_i_2677_ = v___x_2693_;
v_bs_2678_ = v___x_2694_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object* v_c_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_){
_start:
{
lean_object* v_resultType_2845_; lean_object* v_discr_2846_; lean_object* v_alts_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2944_; 
v_resultType_2845_ = lean_ctor_get(v_c_2838_, 1);
v_discr_2846_ = lean_ctor_get(v_c_2838_, 2);
v_alts_2847_ = lean_ctor_get(v_c_2838_, 3);
v_isSharedCheck_2944_ = !lean_is_exclusive(v_c_2838_);
if (v_isSharedCheck_2944_ == 0)
{
lean_object* v_unused_2945_; 
v_unused_2945_ = lean_ctor_get(v_c_2838_, 0);
lean_dec(v_unused_2945_);
v___x_2849_ = v_c_2838_;
v_isShared_2850_ = v_isSharedCheck_2944_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_alts_2847_);
lean_inc(v_discr_2846_);
lean_inc(v_resultType_2845_);
lean_dec(v_c_2838_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2944_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
uint8_t v___x_2851_; lean_object* v___x_2852_; 
v___x_2851_ = 0;
v___x_2852_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_2845_, v___y_2842_, v___y_2843_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; lean_object* v___x_2858_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
lean_inc(v_a_2853_);
lean_dec_ref_known(v___x_2852_, 1);
v___x_2854_ = lean_box(0);
v___x_2855_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2856_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1));
v___x_2857_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_2858_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2851_, v___x_2856_, v___x_2855_, v___x_2857_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
if (lean_obj_tag(v___x_2858_) == 0)
{
lean_object* v_a_2859_; lean_object* v_fvarId_2860_; lean_object* v___x_2861_; lean_object* v___x_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v_a_2859_ = lean_ctor_get(v___x_2858_, 0);
lean_inc(v_a_2859_);
lean_dec_ref_known(v___x_2858_, 1);
v_fvarId_2860_ = lean_ctor_get(v_a_2859_, 0);
v___x_2861_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5));
v___x_2862_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6);
v___x_2863_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8));
lean_inc(v_fvarId_2860_);
v___x_2864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2864_, 0, v_fvarId_2860_);
v___x_2865_ = lean_unsigned_to_nat(1u);
v___x_2866_ = lean_mk_empty_array_with_capacity(v___x_2865_);
v___x_2867_ = lean_array_push(v___x_2866_, v___x_2864_);
v___x_2868_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2868_, 0, v___x_2863_);
lean_ctor_set(v___x_2868_, 1, v___x_2854_);
lean_ctor_set(v___x_2868_, 2, v___x_2867_);
v___x_2869_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2851_, v___x_2861_, v___x_2862_, v___x_2868_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
if (lean_obj_tag(v___x_2869_) == 0)
{
lean_object* v_a_2870_; lean_object* v_fvarId_2871_; lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v___x_2882_; lean_object* v___x_2883_; 
v_a_2870_ = lean_ctor_get(v___x_2869_, 0);
lean_inc(v_a_2870_);
lean_dec_ref_known(v___x_2869_, 1);
v_fvarId_2871_ = lean_ctor_get(v_a_2870_, 0);
v___x_2872_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10));
v___x_2873_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_2874_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_2875_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12));
v___x_2876_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2876_, 0, v_discr_2846_);
lean_inc(v_fvarId_2871_);
v___x_2877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2877_, 0, v_fvarId_2871_);
v___x_2878_ = lean_unsigned_to_nat(2u);
v___x_2879_ = lean_mk_empty_array_with_capacity(v___x_2878_);
lean_inc_ref(v___x_2876_);
v___x_2880_ = lean_array_push(v___x_2879_, v___x_2876_);
v___x_2881_ = lean_array_push(v___x_2880_, v___x_2877_);
v___x_2882_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2882_, 0, v___x_2875_);
lean_ctor_set(v___x_2882_, 1, v___x_2854_);
lean_ctor_set(v___x_2882_, 2, v___x_2881_);
v___x_2883_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2851_, v___x_2872_, v___x_2874_, v___x_2882_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
if (lean_obj_tag(v___x_2883_) == 0)
{
lean_object* v_a_2884_; size_t v_sz_2885_; size_t v___x_2886_; lean_object* v___x_2887_; 
v_a_2884_ = lean_ctor_get(v___x_2883_, 0);
lean_inc(v_a_2884_);
lean_dec_ref_known(v___x_2883_, 1);
v_sz_2885_ = lean_array_size(v_alts_2847_);
v___x_2886_ = ((size_t)0ULL);
v___x_2887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(v___x_2876_, v_sz_2885_, v___x_2886_, v_alts_2847_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_);
if (lean_obj_tag(v___x_2887_) == 0)
{
lean_object* v_a_2888_; lean_object* v___x_2890_; uint8_t v_isShared_2891_; uint8_t v_isSharedCheck_2903_; 
v_a_2888_ = lean_ctor_get(v___x_2887_, 0);
v_isSharedCheck_2903_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2903_ == 0)
{
v___x_2890_ = v___x_2887_;
v_isShared_2891_ = v_isSharedCheck_2903_;
goto v_resetjp_2889_;
}
else
{
lean_inc(v_a_2888_);
lean_dec(v___x_2887_);
v___x_2890_ = lean_box(0);
v_isShared_2891_ = v_isSharedCheck_2903_;
goto v_resetjp_2889_;
}
v_resetjp_2889_:
{
lean_object* v_fvarId_2892_; lean_object* v___x_2894_; 
v_fvarId_2892_ = lean_ctor_get(v_a_2884_, 0);
lean_inc(v_fvarId_2892_);
if (v_isShared_2850_ == 0)
{
lean_ctor_set(v___x_2849_, 3, v_a_2888_);
lean_ctor_set(v___x_2849_, 2, v_fvarId_2892_);
lean_ctor_set(v___x_2849_, 1, v_a_2853_);
lean_ctor_set(v___x_2849_, 0, v___x_2873_);
v___x_2894_ = v___x_2849_;
goto v_reusejp_2893_;
}
else
{
lean_object* v_reuseFailAlloc_2902_; 
v_reuseFailAlloc_2902_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2902_, 0, v___x_2873_);
lean_ctor_set(v_reuseFailAlloc_2902_, 1, v_a_2853_);
lean_ctor_set(v_reuseFailAlloc_2902_, 2, v_fvarId_2892_);
lean_ctor_set(v_reuseFailAlloc_2902_, 3, v_a_2888_);
v___x_2894_ = v_reuseFailAlloc_2902_;
goto v_reusejp_2893_;
}
v_reusejp_2893_:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v___x_2898_; lean_object* v___x_2900_; 
v___x_2895_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2894_);
v___x_2896_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2896_, 0, v_a_2884_);
lean_ctor_set(v___x_2896_, 1, v___x_2895_);
v___x_2897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2897_, 0, v_a_2870_);
lean_ctor_set(v___x_2897_, 1, v___x_2896_);
v___x_2898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2898_, 0, v_a_2859_);
lean_ctor_set(v___x_2898_, 1, v___x_2897_);
if (v_isShared_2891_ == 0)
{
lean_ctor_set(v___x_2890_, 0, v___x_2898_);
v___x_2900_ = v___x_2890_;
goto v_reusejp_2899_;
}
else
{
lean_object* v_reuseFailAlloc_2901_; 
v_reuseFailAlloc_2901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2901_, 0, v___x_2898_);
v___x_2900_ = v_reuseFailAlloc_2901_;
goto v_reusejp_2899_;
}
v_reusejp_2899_:
{
return v___x_2900_;
}
}
}
}
else
{
lean_object* v_a_2904_; lean_object* v___x_2906_; uint8_t v_isShared_2907_; uint8_t v_isSharedCheck_2911_; 
lean_dec(v_a_2884_);
lean_dec(v_a_2870_);
lean_dec(v_a_2859_);
lean_dec(v_a_2853_);
lean_del_object(v___x_2849_);
v_a_2904_ = lean_ctor_get(v___x_2887_, 0);
v_isSharedCheck_2911_ = !lean_is_exclusive(v___x_2887_);
if (v_isSharedCheck_2911_ == 0)
{
v___x_2906_ = v___x_2887_;
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
else
{
lean_inc(v_a_2904_);
lean_dec(v___x_2887_);
v___x_2906_ = lean_box(0);
v_isShared_2907_ = v_isSharedCheck_2911_;
goto v_resetjp_2905_;
}
v_resetjp_2905_:
{
lean_object* v___x_2909_; 
if (v_isShared_2907_ == 0)
{
v___x_2909_ = v___x_2906_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v_a_2904_);
v___x_2909_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
return v___x_2909_;
}
}
}
}
else
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2919_; 
lean_dec_ref_known(v___x_2876_, 1);
lean_dec(v_a_2870_);
lean_dec(v_a_2859_);
lean_dec(v_a_2853_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_alts_2847_);
v_a_2912_ = lean_ctor_get(v___x_2883_, 0);
v_isSharedCheck_2919_ = !lean_is_exclusive(v___x_2883_);
if (v_isSharedCheck_2919_ == 0)
{
v___x_2914_ = v___x_2883_;
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2883_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2919_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2917_; 
if (v_isShared_2915_ == 0)
{
v___x_2917_ = v___x_2914_;
goto v_reusejp_2916_;
}
else
{
lean_object* v_reuseFailAlloc_2918_; 
v_reuseFailAlloc_2918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2918_, 0, v_a_2912_);
v___x_2917_ = v_reuseFailAlloc_2918_;
goto v_reusejp_2916_;
}
v_reusejp_2916_:
{
return v___x_2917_;
}
}
}
}
else
{
lean_object* v_a_2920_; lean_object* v___x_2922_; uint8_t v_isShared_2923_; uint8_t v_isSharedCheck_2927_; 
lean_dec(v_a_2859_);
lean_dec(v_a_2853_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_alts_2847_);
lean_dec(v_discr_2846_);
v_a_2920_ = lean_ctor_get(v___x_2869_, 0);
v_isSharedCheck_2927_ = !lean_is_exclusive(v___x_2869_);
if (v_isSharedCheck_2927_ == 0)
{
v___x_2922_ = v___x_2869_;
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
else
{
lean_inc(v_a_2920_);
lean_dec(v___x_2869_);
v___x_2922_ = lean_box(0);
v_isShared_2923_ = v_isSharedCheck_2927_;
goto v_resetjp_2921_;
}
v_resetjp_2921_:
{
lean_object* v___x_2925_; 
if (v_isShared_2923_ == 0)
{
v___x_2925_ = v___x_2922_;
goto v_reusejp_2924_;
}
else
{
lean_object* v_reuseFailAlloc_2926_; 
v_reuseFailAlloc_2926_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2926_, 0, v_a_2920_);
v___x_2925_ = v_reuseFailAlloc_2926_;
goto v_reusejp_2924_;
}
v_reusejp_2924_:
{
return v___x_2925_;
}
}
}
}
else
{
lean_object* v_a_2928_; lean_object* v___x_2930_; uint8_t v_isShared_2931_; uint8_t v_isSharedCheck_2935_; 
lean_dec(v_a_2853_);
lean_del_object(v___x_2849_);
lean_dec_ref(v_alts_2847_);
lean_dec(v_discr_2846_);
v_a_2928_ = lean_ctor_get(v___x_2858_, 0);
v_isSharedCheck_2935_ = !lean_is_exclusive(v___x_2858_);
if (v_isSharedCheck_2935_ == 0)
{
v___x_2930_ = v___x_2858_;
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
else
{
lean_inc(v_a_2928_);
lean_dec(v___x_2858_);
v___x_2930_ = lean_box(0);
v_isShared_2931_ = v_isSharedCheck_2935_;
goto v_resetjp_2929_;
}
v_resetjp_2929_:
{
lean_object* v___x_2933_; 
if (v_isShared_2931_ == 0)
{
v___x_2933_ = v___x_2930_;
goto v_reusejp_2932_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_a_2928_);
v___x_2933_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2932_;
}
v_reusejp_2932_:
{
return v___x_2933_;
}
}
}
}
else
{
lean_object* v_a_2936_; lean_object* v___x_2938_; uint8_t v_isShared_2939_; uint8_t v_isSharedCheck_2943_; 
lean_del_object(v___x_2849_);
lean_dec_ref(v_alts_2847_);
lean_dec(v_discr_2846_);
v_a_2936_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2943_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2938_ = v___x_2852_;
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
else
{
lean_inc(v_a_2936_);
lean_dec(v___x_2852_);
v___x_2938_ = lean_box(0);
v_isShared_2939_ = v_isSharedCheck_2943_;
goto v_resetjp_2937_;
}
v_resetjp_2937_:
{
lean_object* v___x_2941_; 
if (v_isShared_2939_ == 0)
{
v___x_2941_ = v___x_2938_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v_a_2936_);
v___x_2941_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
return v___x_2941_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(lean_object* v___x_2955_, size_t v_sz_2956_, size_t v_i_2957_, lean_object* v_bs_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_){
_start:
{
uint8_t v___x_2965_; 
v___x_2965_ = lean_usize_dec_lt(v_i_2957_, v_sz_2956_);
if (v___x_2965_ == 0)
{
lean_object* v___x_2966_; 
lean_dec(v___x_2955_);
v___x_2966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2966_, 0, v_bs_2958_);
return v___x_2966_;
}
else
{
lean_object* v_v_2967_; lean_object* v___x_2968_; lean_object* v_bs_x27_2969_; lean_object* v_a_2971_; 
v_v_2967_ = lean_array_uget(v_bs_2958_, v_i_2957_);
v___x_2968_ = lean_unsigned_to_nat(0u);
v_bs_x27_2969_ = lean_array_uset(v_bs_2958_, v_i_2957_, v___x_2968_);
if (lean_obj_tag(v_v_2967_) == 0)
{
lean_object* v_ctorName_2976_; lean_object* v_params_2977_; lean_object* v_code_2978_; lean_object* v___x_2980_; uint8_t v_isShared_2981_; uint8_t v_isSharedCheck_3065_; 
v_ctorName_2976_ = lean_ctor_get(v_v_2967_, 0);
v_params_2977_ = lean_ctor_get(v_v_2967_, 1);
v_code_2978_ = lean_ctor_get(v_v_2967_, 2);
v_isSharedCheck_3065_ = !lean_is_exclusive(v_v_2967_);
if (v_isSharedCheck_3065_ == 0)
{
v___x_2980_ = v_v_2967_;
v_isShared_2981_ = v_isSharedCheck_3065_;
goto v_resetjp_2979_;
}
else
{
lean_inc(v_code_2978_);
lean_inc(v_params_2977_);
lean_inc(v_ctorName_2976_);
lean_dec(v_v_2967_);
v___x_2980_ = lean_box(0);
v_isShared_2981_ = v_isSharedCheck_3065_;
goto v_resetjp_2979_;
}
v_resetjp_2979_:
{
uint8_t v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2982_ = 0;
v___x_2983_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2984_ = lean_box(0);
v___x_2985_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2986_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2982_, v_params_2977_, v___y_2961_);
if (lean_obj_tag(v___x_2986_) == 0)
{
lean_object* v___x_2987_; uint8_t v___x_2988_; 
lean_dec_ref_known(v___x_2986_, 1);
v___x_2987_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_2988_ = lean_name_eq(v_ctorName_2976_, v___x_2987_);
lean_dec(v_ctorName_2976_);
if (v___x_2988_ == 0)
{
lean_object* v___x_2989_; 
lean_dec_ref(v_params_2977_);
v___x_2989_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2978_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_2989_) == 0)
{
lean_object* v_a_2990_; lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2994_; 
v_a_2990_ = lean_ctor_get(v___x_2989_, 0);
lean_inc(v_a_2990_);
lean_dec_ref_known(v___x_2989_, 1);
v___x_2991_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_2992_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 2, v_a_2990_);
lean_ctor_set(v___x_2980_, 1, v___x_2992_);
lean_ctor_set(v___x_2980_, 0, v___x_2991_);
v___x_2994_ = v___x_2980_;
goto v_reusejp_2993_;
}
else
{
lean_object* v_reuseFailAlloc_2995_; 
v_reuseFailAlloc_2995_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2995_, 0, v___x_2991_);
lean_ctor_set(v_reuseFailAlloc_2995_, 1, v___x_2992_);
lean_ctor_set(v_reuseFailAlloc_2995_, 2, v_a_2990_);
v___x_2994_ = v_reuseFailAlloc_2995_;
goto v_reusejp_2993_;
}
v_reusejp_2993_:
{
v_a_2971_ = v___x_2994_;
goto v___jp_2970_;
}
}
else
{
lean_object* v_a_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3003_; 
lean_del_object(v___x_2980_);
lean_dec_ref(v_bs_x27_2969_);
lean_dec(v___x_2955_);
v_a_2996_ = lean_ctor_get(v___x_2989_, 0);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2989_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2998_ = v___x_2989_;
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_a_2996_);
lean_dec(v___x_2989_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3003_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3001_; 
if (v_isShared_2999_ == 0)
{
v___x_3001_ = v___x_2998_;
goto v_reusejp_3000_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v_a_2996_);
v___x_3001_ = v_reuseFailAlloc_3002_;
goto v_reusejp_3000_;
}
v_reusejp_3000_:
{
return v___x_3001_;
}
}
}
}
else
{
lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; 
v___x_3004_ = lean_array_get(v___x_2983_, v_params_2977_, v___x_2968_);
lean_dec_ref(v_params_2977_);
v___x_3005_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_3006_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_3007_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2982_, v___x_3005_, v___x_2985_, v___x_3006_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_3007_) == 0)
{
lean_object* v_a_3008_; lean_object* v_fvarId_3009_; lean_object* v_binderName_3010_; lean_object* v_fvarId_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v_lctx_3021_; lean_object* v_nextIdx_3022_; lean_object* v___x_3024_; uint8_t v_isShared_3025_; uint8_t v_isSharedCheck_3048_; 
v_a_3008_ = lean_ctor_get(v___x_3007_, 0);
lean_inc(v_a_3008_);
lean_dec_ref_known(v___x_3007_, 1);
v_fvarId_3009_ = lean_ctor_get(v___x_3004_, 0);
lean_inc(v_fvarId_3009_);
v_binderName_3010_ = lean_ctor_get(v___x_3004_, 1);
lean_inc(v_binderName_3010_);
lean_dec(v___x_3004_);
v_fvarId_3011_ = lean_ctor_get(v_a_3008_, 0);
v___x_3012_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_3011_);
v___x_3013_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3013_, 0, v_fvarId_3011_);
v___x_3014_ = lean_unsigned_to_nat(2u);
v___x_3015_ = lean_mk_empty_array_with_capacity(v___x_3014_);
lean_inc(v___x_2955_);
v___x_3016_ = lean_array_push(v___x_3015_, v___x_2955_);
v___x_3017_ = lean_array_push(v___x_3016_, v___x_3013_);
v___x_3018_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3018_, 0, v___x_3012_);
lean_ctor_set(v___x_3018_, 1, v___x_2984_);
lean_ctor_set(v___x_3018_, 2, v___x_3017_);
v___x_3019_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3019_, 0, v_fvarId_3009_);
lean_ctor_set(v___x_3019_, 1, v_binderName_3010_);
lean_ctor_set(v___x_3019_, 2, v___x_2985_);
lean_ctor_set(v___x_3019_, 3, v___x_3018_);
v___x_3020_ = lean_st_ref_take(v___y_2961_);
v_lctx_3021_ = lean_ctor_get(v___x_3020_, 0);
v_nextIdx_3022_ = lean_ctor_get(v___x_3020_, 1);
v_isSharedCheck_3048_ = !lean_is_exclusive(v___x_3020_);
if (v_isSharedCheck_3048_ == 0)
{
v___x_3024_ = v___x_3020_;
v_isShared_3025_ = v_isSharedCheck_3048_;
goto v_resetjp_3023_;
}
else
{
lean_inc(v_nextIdx_3022_);
lean_inc(v_lctx_3021_);
lean_dec(v___x_3020_);
v___x_3024_ = lean_box(0);
v_isShared_3025_ = v_isSharedCheck_3048_;
goto v_resetjp_3023_;
}
v_resetjp_3023_:
{
lean_object* v___x_3026_; lean_object* v___x_3028_; 
lean_inc_ref(v___x_3019_);
v___x_3026_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2982_, v_lctx_3021_, v___x_3019_);
if (v_isShared_3025_ == 0)
{
lean_ctor_set(v___x_3024_, 0, v___x_3026_);
v___x_3028_ = v___x_3024_;
goto v_reusejp_3027_;
}
else
{
lean_object* v_reuseFailAlloc_3047_; 
v_reuseFailAlloc_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3047_, 0, v___x_3026_);
lean_ctor_set(v_reuseFailAlloc_3047_, 1, v_nextIdx_3022_);
v___x_3028_ = v_reuseFailAlloc_3047_;
goto v_reusejp_3027_;
}
v_reusejp_3027_:
{
lean_object* v___x_3029_; lean_object* v___x_3030_; 
v___x_3029_ = lean_st_ref_put(v___y_2961_, v___x_3028_);
v___x_3030_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2978_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_3030_) == 0)
{
lean_object* v_a_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3037_; 
v_a_3031_ = lean_ctor_get(v___x_3030_, 0);
lean_inc(v_a_3031_);
lean_dec_ref_known(v___x_3030_, 1);
v___x_3032_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_3033_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_3034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3034_, 0, v___x_3019_);
lean_ctor_set(v___x_3034_, 1, v_a_3031_);
v___x_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3035_, 0, v_a_3008_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
if (v_isShared_2981_ == 0)
{
lean_ctor_set(v___x_2980_, 2, v___x_3035_);
lean_ctor_set(v___x_2980_, 1, v___x_3033_);
lean_ctor_set(v___x_2980_, 0, v___x_3032_);
v___x_3037_ = v___x_2980_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3038_; 
v_reuseFailAlloc_3038_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3038_, 0, v___x_3032_);
lean_ctor_set(v_reuseFailAlloc_3038_, 1, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3038_, 2, v___x_3035_);
v___x_3037_ = v_reuseFailAlloc_3038_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
v_a_2971_ = v___x_3037_;
goto v___jp_2970_;
}
}
else
{
lean_object* v_a_3039_; lean_object* v___x_3041_; uint8_t v_isShared_3042_; uint8_t v_isSharedCheck_3046_; 
lean_dec_ref_known(v___x_3019_, 4);
lean_dec(v_a_3008_);
lean_del_object(v___x_2980_);
lean_dec_ref(v_bs_x27_2969_);
lean_dec(v___x_2955_);
v_a_3039_ = lean_ctor_get(v___x_3030_, 0);
v_isSharedCheck_3046_ = !lean_is_exclusive(v___x_3030_);
if (v_isSharedCheck_3046_ == 0)
{
v___x_3041_ = v___x_3030_;
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
else
{
lean_inc(v_a_3039_);
lean_dec(v___x_3030_);
v___x_3041_ = lean_box(0);
v_isShared_3042_ = v_isSharedCheck_3046_;
goto v_resetjp_3040_;
}
v_resetjp_3040_:
{
lean_object* v___x_3044_; 
if (v_isShared_3042_ == 0)
{
v___x_3044_ = v___x_3041_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_a_3039_);
v___x_3044_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
return v___x_3044_;
}
}
}
}
}
}
else
{
lean_object* v_a_3049_; lean_object* v___x_3051_; uint8_t v_isShared_3052_; uint8_t v_isSharedCheck_3056_; 
lean_dec(v___x_3004_);
lean_del_object(v___x_2980_);
lean_dec_ref(v_code_2978_);
lean_dec_ref(v_bs_x27_2969_);
lean_dec(v___x_2955_);
v_a_3049_ = lean_ctor_get(v___x_3007_, 0);
v_isSharedCheck_3056_ = !lean_is_exclusive(v___x_3007_);
if (v_isSharedCheck_3056_ == 0)
{
v___x_3051_ = v___x_3007_;
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
else
{
lean_inc(v_a_3049_);
lean_dec(v___x_3007_);
v___x_3051_ = lean_box(0);
v_isShared_3052_ = v_isSharedCheck_3056_;
goto v_resetjp_3050_;
}
v_resetjp_3050_:
{
lean_object* v___x_3054_; 
if (v_isShared_3052_ == 0)
{
v___x_3054_ = v___x_3051_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3055_; 
v_reuseFailAlloc_3055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3055_, 0, v_a_3049_);
v___x_3054_ = v_reuseFailAlloc_3055_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
return v___x_3054_;
}
}
}
}
}
else
{
lean_object* v_a_3057_; lean_object* v___x_3059_; uint8_t v_isShared_3060_; uint8_t v_isSharedCheck_3064_; 
lean_del_object(v___x_2980_);
lean_dec_ref(v_code_2978_);
lean_dec_ref(v_params_2977_);
lean_dec(v_ctorName_2976_);
lean_dec_ref(v_bs_x27_2969_);
lean_dec(v___x_2955_);
v_a_3057_ = lean_ctor_get(v___x_2986_, 0);
v_isSharedCheck_3064_ = !lean_is_exclusive(v___x_2986_);
if (v_isSharedCheck_3064_ == 0)
{
v___x_3059_ = v___x_2986_;
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
else
{
lean_inc(v_a_3057_);
lean_dec(v___x_2986_);
v___x_3059_ = lean_box(0);
v_isShared_3060_ = v_isSharedCheck_3064_;
goto v_resetjp_3058_;
}
v_resetjp_3058_:
{
lean_object* v___x_3062_; 
if (v_isShared_3060_ == 0)
{
v___x_3062_ = v___x_3059_;
goto v_reusejp_3061_;
}
else
{
lean_object* v_reuseFailAlloc_3063_; 
v_reuseFailAlloc_3063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3063_, 0, v_a_3057_);
v___x_3062_ = v_reuseFailAlloc_3063_;
goto v_reusejp_3061_;
}
v_reusejp_3061_:
{
return v___x_3062_;
}
}
}
}
}
else
{
lean_object* v_code_3066_; lean_object* v___x_3067_; 
v_code_3066_ = lean_ctor_get(v_v_2967_, 0);
lean_inc_ref(v_code_3066_);
v___x_3067_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3066_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; lean_object* v___x_3069_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3067_, 1);
v___x_3069_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_2967_, v_a_3068_);
v_a_2971_ = v___x_3069_;
goto v___jp_2970_;
}
else
{
lean_object* v_a_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3077_; 
lean_dec_ref_known(v_v_2967_, 1);
lean_dec_ref(v_bs_x27_2969_);
lean_dec(v___x_2955_);
v_a_3070_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3077_ == 0)
{
v___x_3072_ = v___x_3067_;
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_a_3070_);
lean_dec(v___x_3067_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3077_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v___x_3075_; 
if (v_isShared_3073_ == 0)
{
v___x_3075_ = v___x_3072_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v_a_3070_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
}
v___jp_2970_:
{
size_t v___x_2972_; size_t v___x_2973_; lean_object* v___x_2974_; 
v___x_2972_ = ((size_t)1ULL);
v___x_2973_ = lean_usize_add(v_i_2957_, v___x_2972_);
v___x_2974_ = lean_array_uset(v_bs_x27_2969_, v_i_2957_, v_a_2971_);
v_i_2957_ = v___x_2973_;
v_bs_2958_ = v___x_2974_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object* v_c_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_){
_start:
{
lean_object* v_resultType_3085_; lean_object* v_discr_3086_; lean_object* v_alts_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3164_; 
v_resultType_3085_ = lean_ctor_get(v_c_3078_, 1);
v_discr_3086_ = lean_ctor_get(v_c_3078_, 2);
v_alts_3087_ = lean_ctor_get(v_c_3078_, 3);
v_isSharedCheck_3164_ = !lean_is_exclusive(v_c_3078_);
if (v_isSharedCheck_3164_ == 0)
{
lean_object* v_unused_3165_; 
v_unused_3165_ = lean_ctor_get(v_c_3078_, 0);
lean_dec(v_unused_3165_);
v___x_3089_ = v_c_3078_;
v_isShared_3090_ = v_isSharedCheck_3164_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_alts_3087_);
lean_inc(v_discr_3086_);
lean_inc(v_resultType_3085_);
lean_dec(v_c_3078_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3164_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
uint8_t v___x_3091_; lean_object* v___x_3092_; 
v___x_3091_ = 0;
v___x_3092_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3085_, v___y_3082_, v___y_3083_);
if (lean_obj_tag(v___x_3092_) == 0)
{
lean_object* v_a_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; 
v_a_3093_ = lean_ctor_get(v___x_3092_, 0);
lean_inc(v_a_3093_);
lean_dec_ref_known(v___x_3092_, 1);
v___x_3094_ = lean_box(0);
v___x_3095_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3096_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2));
v___x_3097_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_3098_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3091_, v___x_3096_, v___x_3095_, v___x_3097_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
if (lean_obj_tag(v___x_3098_) == 0)
{
lean_object* v_a_3099_; lean_object* v_fvarId_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; 
v_a_3099_ = lean_ctor_get(v___x_3098_, 0);
lean_inc(v_a_3099_);
lean_dec_ref_known(v___x_3098_, 1);
v_fvarId_3100_ = lean_ctor_get(v_a_3099_, 0);
v___x_3101_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4));
v___x_3102_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_3103_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_3104_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9));
v___x_3105_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3105_, 0, v_discr_3086_);
lean_inc(v_fvarId_3100_);
v___x_3106_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3106_, 0, v_fvarId_3100_);
v___x_3107_ = lean_unsigned_to_nat(2u);
v___x_3108_ = lean_mk_empty_array_with_capacity(v___x_3107_);
lean_inc_ref(v___x_3105_);
v___x_3109_ = lean_array_push(v___x_3108_, v___x_3105_);
v___x_3110_ = lean_array_push(v___x_3109_, v___x_3106_);
v___x_3111_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3111_, 0, v___x_3104_);
lean_ctor_set(v___x_3111_, 1, v___x_3094_);
lean_ctor_set(v___x_3111_, 2, v___x_3110_);
v___x_3112_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3091_, v___x_3101_, v___x_3103_, v___x_3111_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
if (lean_obj_tag(v___x_3112_) == 0)
{
lean_object* v_a_3113_; size_t v_sz_3114_; size_t v___x_3115_; lean_object* v___x_3116_; 
v_a_3113_ = lean_ctor_get(v___x_3112_, 0);
lean_inc(v_a_3113_);
lean_dec_ref_known(v___x_3112_, 1);
v_sz_3114_ = lean_array_size(v_alts_3087_);
v___x_3115_ = ((size_t)0ULL);
v___x_3116_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(v___x_3105_, v_sz_3114_, v___x_3115_, v_alts_3087_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_, v___y_3083_);
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3131_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3119_ = v___x_3116_;
v_isShared_3120_ = v_isSharedCheck_3131_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3116_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3131_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v_fvarId_3121_; lean_object* v___x_3123_; 
v_fvarId_3121_ = lean_ctor_get(v_a_3113_, 0);
lean_inc(v_fvarId_3121_);
if (v_isShared_3090_ == 0)
{
lean_ctor_set(v___x_3089_, 3, v_a_3117_);
lean_ctor_set(v___x_3089_, 2, v_fvarId_3121_);
lean_ctor_set(v___x_3089_, 1, v_a_3093_);
lean_ctor_set(v___x_3089_, 0, v___x_3102_);
v___x_3123_ = v___x_3089_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v___x_3102_);
lean_ctor_set(v_reuseFailAlloc_3130_, 1, v_a_3093_);
lean_ctor_set(v_reuseFailAlloc_3130_, 2, v_fvarId_3121_);
lean_ctor_set(v_reuseFailAlloc_3130_, 3, v_a_3117_);
v___x_3123_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3128_; 
v___x_3124_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3123_);
v___x_3125_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3125_, 0, v_a_3113_);
lean_ctor_set(v___x_3125_, 1, v___x_3124_);
v___x_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3126_, 0, v_a_3099_);
lean_ctor_set(v___x_3126_, 1, v___x_3125_);
if (v_isShared_3120_ == 0)
{
lean_ctor_set(v___x_3119_, 0, v___x_3126_);
v___x_3128_ = v___x_3119_;
goto v_reusejp_3127_;
}
else
{
lean_object* v_reuseFailAlloc_3129_; 
v_reuseFailAlloc_3129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3129_, 0, v___x_3126_);
v___x_3128_ = v_reuseFailAlloc_3129_;
goto v_reusejp_3127_;
}
v_reusejp_3127_:
{
return v___x_3128_;
}
}
}
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
lean_dec(v_a_3113_);
lean_dec(v_a_3099_);
lean_dec(v_a_3093_);
lean_del_object(v___x_3089_);
v_a_3132_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3116_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3116_);
v___x_3134_ = lean_box(0);
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
v_resetjp_3133_:
{
lean_object* v___x_3137_; 
if (v_isShared_3135_ == 0)
{
v___x_3137_ = v___x_3134_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3138_; 
v_reuseFailAlloc_3138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3138_, 0, v_a_3132_);
v___x_3137_ = v_reuseFailAlloc_3138_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
return v___x_3137_;
}
}
}
}
else
{
lean_object* v_a_3140_; lean_object* v___x_3142_; uint8_t v_isShared_3143_; uint8_t v_isSharedCheck_3147_; 
lean_dec_ref_known(v___x_3105_, 1);
lean_dec(v_a_3099_);
lean_dec(v_a_3093_);
lean_del_object(v___x_3089_);
lean_dec_ref(v_alts_3087_);
v_a_3140_ = lean_ctor_get(v___x_3112_, 0);
v_isSharedCheck_3147_ = !lean_is_exclusive(v___x_3112_);
if (v_isSharedCheck_3147_ == 0)
{
v___x_3142_ = v___x_3112_;
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
else
{
lean_inc(v_a_3140_);
lean_dec(v___x_3112_);
v___x_3142_ = lean_box(0);
v_isShared_3143_ = v_isSharedCheck_3147_;
goto v_resetjp_3141_;
}
v_resetjp_3141_:
{
lean_object* v___x_3145_; 
if (v_isShared_3143_ == 0)
{
v___x_3145_ = v___x_3142_;
goto v_reusejp_3144_;
}
else
{
lean_object* v_reuseFailAlloc_3146_; 
v_reuseFailAlloc_3146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3146_, 0, v_a_3140_);
v___x_3145_ = v_reuseFailAlloc_3146_;
goto v_reusejp_3144_;
}
v_reusejp_3144_:
{
return v___x_3145_;
}
}
}
}
else
{
lean_object* v_a_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3155_; 
lean_dec(v_a_3093_);
lean_del_object(v___x_3089_);
lean_dec_ref(v_alts_3087_);
lean_dec(v_discr_3086_);
v_a_3148_ = lean_ctor_get(v___x_3098_, 0);
v_isSharedCheck_3155_ = !lean_is_exclusive(v___x_3098_);
if (v_isSharedCheck_3155_ == 0)
{
v___x_3150_ = v___x_3098_;
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_a_3148_);
lean_dec(v___x_3098_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3155_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v___x_3153_; 
if (v_isShared_3151_ == 0)
{
v___x_3153_ = v___x_3150_;
goto v_reusejp_3152_;
}
else
{
lean_object* v_reuseFailAlloc_3154_; 
v_reuseFailAlloc_3154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3154_, 0, v_a_3148_);
v___x_3153_ = v_reuseFailAlloc_3154_;
goto v_reusejp_3152_;
}
v_reusejp_3152_:
{
return v___x_3153_;
}
}
}
}
else
{
lean_object* v_a_3156_; lean_object* v___x_3158_; uint8_t v_isShared_3159_; uint8_t v_isSharedCheck_3163_; 
lean_del_object(v___x_3089_);
lean_dec_ref(v_alts_3087_);
lean_dec(v_discr_3086_);
v_a_3156_ = lean_ctor_get(v___x_3092_, 0);
v_isSharedCheck_3163_ = !lean_is_exclusive(v___x_3092_);
if (v_isSharedCheck_3163_ == 0)
{
v___x_3158_ = v___x_3092_;
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
else
{
lean_inc(v_a_3156_);
lean_dec(v___x_3092_);
v___x_3158_ = lean_box(0);
v_isShared_3159_ = v_isSharedCheck_3163_;
goto v_resetjp_3157_;
}
v_resetjp_3157_:
{
lean_object* v___x_3161_; 
if (v_isShared_3159_ == 0)
{
v___x_3161_ = v___x_3158_;
goto v_reusejp_3160_;
}
else
{
lean_object* v_reuseFailAlloc_3162_; 
v_reuseFailAlloc_3162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3162_, 0, v_a_3156_);
v___x_3161_ = v_reuseFailAlloc_3162_;
goto v_reusejp_3160_;
}
v_reusejp_3160_:
{
return v___x_3161_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object* v_code_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_, lean_object* v___y_3171_){
_start:
{
lean_object* v_decl_3174_; lean_object* v_k_3175_; lean_object* v___y_3176_; lean_object* v___y_3177_; lean_object* v___y_3178_; lean_object* v___y_3179_; lean_object* v___y_3180_; lean_object* v___y_3283_; lean_object* v___y_3284_; lean_object* v___y_3285_; lean_object* v___y_3286_; lean_object* v___y_3287_; 
switch(lean_obj_tag(v_code_3166_))
{
case 0:
{
lean_object* v_decl_3290_; lean_object* v_k_3291_; lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___y_3295_; lean_object* v___y_3296_; lean_object* v___y_3297_; lean_object* v_value_3347_; 
v_decl_3290_ = lean_ctor_get(v_code_3166_, 0);
v_k_3291_ = lean_ctor_get(v_code_3166_, 1);
v_value_3347_ = lean_ctor_get(v_decl_3290_, 3);
lean_inc(v_value_3347_);
if (lean_obj_tag(v_value_3347_) == 3)
{
lean_object* v_declName_3348_; 
v_declName_3348_ = lean_ctor_get(v_value_3347_, 0);
lean_inc(v_declName_3348_);
if (lean_obj_tag(v_declName_3348_) == 1)
{
lean_object* v_pre_3349_; 
v_pre_3349_ = lean_ctor_get(v_declName_3348_, 0);
lean_inc(v_pre_3349_);
if (lean_obj_tag(v_pre_3349_) == 1)
{
lean_object* v_pre_3350_; 
v_pre_3350_ = lean_ctor_get(v_pre_3349_, 0);
if (lean_obj_tag(v_pre_3350_) == 0)
{
lean_object* v_type_3351_; lean_object* v_args_3352_; lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3422_; 
v_type_3351_ = lean_ctor_get(v_decl_3290_, 2);
v_args_3352_ = lean_ctor_get(v_value_3347_, 2);
v_isSharedCheck_3422_ = !lean_is_exclusive(v_value_3347_);
if (v_isSharedCheck_3422_ == 0)
{
lean_object* v_unused_3423_; lean_object* v_unused_3424_; 
v_unused_3423_ = lean_ctor_get(v_value_3347_, 1);
lean_dec(v_unused_3423_);
v_unused_3424_ = lean_ctor_get(v_value_3347_, 0);
lean_dec(v_unused_3424_);
v___x_3354_ = v_value_3347_;
v_isShared_3355_ = v_isSharedCheck_3422_;
goto v_resetjp_3353_;
}
else
{
lean_inc(v_args_3352_);
lean_dec(v_value_3347_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3422_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v_str_3356_; lean_object* v_str_3357_; lean_object* v___x_3358_; uint8_t v___x_3359_; 
v_str_3356_ = lean_ctor_get(v_declName_3348_, 1);
lean_inc_ref(v_str_3356_);
lean_dec_ref_known(v_declName_3348_, 2);
v_str_3357_ = lean_ctor_get(v_pre_3349_, 1);
lean_inc_ref(v_str_3357_);
lean_dec_ref_known(v_pre_3349_, 2);
v___x_3358_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__5));
v___x_3359_ = lean_string_dec_eq(v_str_3357_, v___x_3358_);
lean_dec_ref(v_str_3357_);
if (v___x_3359_ == 0)
{
lean_dec_ref(v_str_3356_);
lean_del_object(v___x_3354_);
lean_dec_ref(v_args_3352_);
v___y_3293_ = v___y_3167_;
v___y_3294_ = v___y_3168_;
v___y_3295_ = v___y_3169_;
v___y_3296_ = v___y_3170_;
v___y_3297_ = v___y_3171_;
goto v___jp_3292_;
}
else
{
lean_object* v___x_3360_; uint8_t v___x_3361_; 
v___x_3360_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__8));
v___x_3361_ = lean_string_dec_eq(v_str_3356_, v___x_3360_);
lean_dec_ref(v_str_3356_);
if (v___x_3361_ == 0)
{
lean_del_object(v___x_3354_);
lean_dec_ref(v_args_3352_);
v___y_3293_ = v___y_3167_;
v___y_3294_ = v___y_3168_;
v___y_3295_ = v___y_3169_;
v___y_3296_ = v___y_3170_;
v___y_3297_ = v___y_3171_;
goto v___jp_3292_;
}
else
{
lean_object* v___x_3363_; uint8_t v_isShared_3364_; uint8_t v_isSharedCheck_3419_; 
lean_inc_ref(v_type_3351_);
lean_inc_ref(v_k_3291_);
lean_inc_ref(v_decl_3290_);
v_isSharedCheck_3419_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3419_ == 0)
{
lean_object* v_unused_3420_; lean_object* v_unused_3421_; 
v_unused_3420_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3420_);
v_unused_3421_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3421_);
v___x_3363_ = v_code_3166_;
v_isShared_3364_ = v_isSharedCheck_3419_;
goto v_resetjp_3362_;
}
else
{
lean_dec(v_code_3166_);
v___x_3363_ = lean_box(0);
v_isShared_3364_ = v_isSharedCheck_3419_;
goto v_resetjp_3362_;
}
v_resetjp_3362_:
{
lean_object* v___x_3365_; lean_object* v___x_3366_; uint8_t v___x_3367_; 
v___x_3365_ = lean_array_get_size(v_args_3352_);
v___x_3366_ = lean_unsigned_to_nat(1u);
v___x_3367_ = lean_nat_dec_eq(v___x_3365_, v___x_3366_);
if (v___x_3367_ == 0)
{
lean_object* v___x_3368_; lean_object* v___x_3369_; 
lean_del_object(v___x_3363_);
lean_del_object(v___x_3354_);
lean_dec_ref(v_args_3352_);
lean_dec_ref(v_type_3351_);
lean_dec_ref(v_k_3291_);
lean_dec_ref(v_decl_3290_);
v___x_3368_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__5, &l_Lean_Compiler_LCNF_Code_toMono___closed__5_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5);
v___x_3369_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3368_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3369_;
}
else
{
lean_object* v___x_3370_; lean_object* v___x_3371_; uint8_t v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v___x_3370_ = lean_unsigned_to_nat(0u);
v___x_3371_ = lean_array_fget(v_args_3352_, v___x_3370_);
lean_dec_ref(v_args_3352_);
v___x_3372_ = 0;
v___x_3373_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_3374_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_3375_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_3372_, v___x_3373_, v___x_3374_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3375_) == 0)
{
lean_object* v_a_3376_; lean_object* v_fvarId_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; lean_object* v___x_3386_; 
v_a_3376_ = lean_ctor_get(v___x_3375_, 0);
lean_inc(v_a_3376_);
lean_dec_ref_known(v___x_3375_, 1);
v_fvarId_3377_ = lean_ctor_get(v_a_3376_, 0);
v___x_3378_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__7));
v___x_3379_ = lean_box(0);
lean_inc(v_fvarId_3377_);
v___x_3380_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3380_, 0, v_fvarId_3377_);
v___x_3381_ = lean_unsigned_to_nat(2u);
v___x_3382_ = lean_mk_empty_array_with_capacity(v___x_3381_);
v___x_3383_ = lean_array_push(v___x_3382_, v___x_3371_);
v___x_3384_ = lean_array_push(v___x_3383_, v___x_3380_);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 2, v___x_3384_);
lean_ctor_set(v___x_3354_, 1, v___x_3379_);
lean_ctor_set(v___x_3354_, 0, v___x_3378_);
v___x_3386_ = v___x_3354_;
goto v_reusejp_3385_;
}
else
{
lean_object* v_reuseFailAlloc_3410_; 
v_reuseFailAlloc_3410_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3410_, 0, v___x_3378_);
lean_ctor_set(v_reuseFailAlloc_3410_, 1, v___x_3379_);
lean_ctor_set(v_reuseFailAlloc_3410_, 2, v___x_3384_);
v___x_3386_ = v_reuseFailAlloc_3410_;
goto v_reusejp_3385_;
}
v_reusejp_3385_:
{
lean_object* v___x_3387_; 
v___x_3387_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_3372_, v_decl_3290_, v_type_3351_, v___x_3386_, v___y_3169_);
if (lean_obj_tag(v___x_3387_) == 0)
{
lean_object* v_a_3388_; lean_object* v___x_3389_; 
v_a_3388_ = lean_ctor_get(v___x_3387_, 0);
lean_inc(v_a_3388_);
lean_dec_ref_known(v___x_3387_, 1);
v___x_3389_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3291_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3389_) == 0)
{
lean_object* v_a_3390_; lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3401_; 
v_a_3390_ = lean_ctor_get(v___x_3389_, 0);
v_isSharedCheck_3401_ = !lean_is_exclusive(v___x_3389_);
if (v_isSharedCheck_3401_ == 0)
{
v___x_3392_ = v___x_3389_;
v_isShared_3393_ = v_isSharedCheck_3401_;
goto v_resetjp_3391_;
}
else
{
lean_inc(v_a_3390_);
lean_dec(v___x_3389_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3401_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3364_ == 0)
{
lean_ctor_set(v___x_3363_, 1, v_a_3390_);
lean_ctor_set(v___x_3363_, 0, v_a_3388_);
v___x_3395_ = v___x_3363_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3400_; 
v_reuseFailAlloc_3400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3400_, 0, v_a_3388_);
lean_ctor_set(v_reuseFailAlloc_3400_, 1, v_a_3390_);
v___x_3395_ = v_reuseFailAlloc_3400_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
lean_object* v___x_3396_; lean_object* v___x_3398_; 
v___x_3396_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3396_, 0, v_a_3376_);
lean_ctor_set(v___x_3396_, 1, v___x_3395_);
if (v_isShared_3393_ == 0)
{
lean_ctor_set(v___x_3392_, 0, v___x_3396_);
v___x_3398_ = v___x_3392_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v___x_3396_);
v___x_3398_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
return v___x_3398_;
}
}
}
}
else
{
lean_dec(v_a_3388_);
lean_dec(v_a_3376_);
lean_del_object(v___x_3363_);
return v___x_3389_;
}
}
else
{
lean_object* v_a_3402_; lean_object* v___x_3404_; uint8_t v_isShared_3405_; uint8_t v_isSharedCheck_3409_; 
lean_dec(v_a_3376_);
lean_del_object(v___x_3363_);
lean_dec_ref(v_k_3291_);
v_a_3402_ = lean_ctor_get(v___x_3387_, 0);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3387_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3404_ = v___x_3387_;
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
else
{
lean_inc(v_a_3402_);
lean_dec(v___x_3387_);
v___x_3404_ = lean_box(0);
v_isShared_3405_ = v_isSharedCheck_3409_;
goto v_resetjp_3403_;
}
v_resetjp_3403_:
{
lean_object* v___x_3407_; 
if (v_isShared_3405_ == 0)
{
v___x_3407_ = v___x_3404_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v_a_3402_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec(v___x_3371_);
lean_del_object(v___x_3363_);
lean_del_object(v___x_3354_);
lean_dec_ref(v_type_3351_);
lean_dec_ref(v_k_3291_);
lean_dec_ref(v_decl_3290_);
v_a_3411_ = lean_ctor_get(v___x_3375_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3375_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3375_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3375_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
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
lean_dec_ref_known(v_pre_3349_, 2);
lean_dec_ref_known(v_declName_3348_, 2);
lean_dec_ref_known(v_value_3347_, 3);
v___y_3293_ = v___y_3167_;
v___y_3294_ = v___y_3168_;
v___y_3295_ = v___y_3169_;
v___y_3296_ = v___y_3170_;
v___y_3297_ = v___y_3171_;
goto v___jp_3292_;
}
}
else
{
lean_dec(v_pre_3349_);
lean_dec_ref_known(v_declName_3348_, 2);
lean_dec_ref_known(v_value_3347_, 3);
v___y_3293_ = v___y_3167_;
v___y_3294_ = v___y_3168_;
v___y_3295_ = v___y_3169_;
v___y_3296_ = v___y_3170_;
v___y_3297_ = v___y_3171_;
goto v___jp_3292_;
}
}
else
{
lean_dec_ref_known(v_value_3347_, 3);
lean_dec(v_declName_3348_);
v___y_3293_ = v___y_3167_;
v___y_3294_ = v___y_3168_;
v___y_3295_ = v___y_3169_;
v___y_3296_ = v___y_3170_;
v___y_3297_ = v___y_3171_;
goto v___jp_3292_;
}
}
else
{
lean_dec(v_value_3347_);
v___y_3293_ = v___y_3167_;
v___y_3294_ = v___y_3168_;
v___y_3295_ = v___y_3169_;
v___y_3296_ = v___y_3170_;
v___y_3297_ = v___y_3171_;
goto v___jp_3292_;
}
v___jp_3292_:
{
lean_object* v___x_3298_; 
lean_inc_ref(v_decl_3290_);
v___x_3298_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_3290_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
if (lean_obj_tag(v___x_3298_) == 0)
{
lean_object* v_a_3299_; lean_object* v___x_3300_; 
v_a_3299_ = lean_ctor_get(v___x_3298_, 0);
lean_inc(v_a_3299_);
lean_dec_ref_known(v___x_3298_, 1);
lean_inc_ref(v_k_3291_);
v___x_3300_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3291_, v___y_3293_, v___y_3294_, v___y_3295_, v___y_3296_, v___y_3297_);
if (lean_obj_tag(v___x_3300_) == 0)
{
lean_object* v_a_3301_; lean_object* v___x_3303_; uint8_t v_isShared_3304_; uint8_t v_isSharedCheck_3338_; 
v_a_3301_ = lean_ctor_get(v___x_3300_, 0);
v_isSharedCheck_3338_ = !lean_is_exclusive(v___x_3300_);
if (v_isSharedCheck_3338_ == 0)
{
v___x_3303_ = v___x_3300_;
v_isShared_3304_ = v_isSharedCheck_3338_;
goto v_resetjp_3302_;
}
else
{
lean_inc(v_a_3301_);
lean_dec(v___x_3300_);
v___x_3303_ = lean_box(0);
v_isShared_3304_ = v_isSharedCheck_3338_;
goto v_resetjp_3302_;
}
v_resetjp_3302_:
{
size_t v___x_3305_; size_t v___x_3306_; uint8_t v___x_3307_; 
v___x_3305_ = lean_ptr_addr(v_k_3291_);
v___x_3306_ = lean_ptr_addr(v_a_3301_);
v___x_3307_ = lean_usize_dec_eq(v___x_3305_, v___x_3306_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3317_; 
v_isSharedCheck_3317_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3317_ == 0)
{
lean_object* v_unused_3318_; lean_object* v_unused_3319_; 
v_unused_3318_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3318_);
v_unused_3319_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3319_);
v___x_3309_ = v_code_3166_;
v_isShared_3310_ = v_isSharedCheck_3317_;
goto v_resetjp_3308_;
}
else
{
lean_dec(v_code_3166_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3317_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v___x_3312_; 
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 1, v_a_3301_);
lean_ctor_set(v___x_3309_, 0, v_a_3299_);
v___x_3312_ = v___x_3309_;
goto v_reusejp_3311_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v_a_3299_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v_a_3301_);
v___x_3312_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3311_;
}
v_reusejp_3311_:
{
lean_object* v___x_3314_; 
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 0, v___x_3312_);
v___x_3314_ = v___x_3303_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v___x_3312_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
}
}
else
{
size_t v___x_3320_; size_t v___x_3321_; uint8_t v___x_3322_; 
v___x_3320_ = lean_ptr_addr(v_decl_3290_);
v___x_3321_ = lean_ptr_addr(v_a_3299_);
v___x_3322_ = lean_usize_dec_eq(v___x_3320_, v___x_3321_);
if (v___x_3322_ == 0)
{
lean_object* v___x_3324_; uint8_t v_isShared_3325_; uint8_t v_isSharedCheck_3332_; 
v_isSharedCheck_3332_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3332_ == 0)
{
lean_object* v_unused_3333_; lean_object* v_unused_3334_; 
v_unused_3333_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3333_);
v_unused_3334_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3334_);
v___x_3324_ = v_code_3166_;
v_isShared_3325_ = v_isSharedCheck_3332_;
goto v_resetjp_3323_;
}
else
{
lean_dec(v_code_3166_);
v___x_3324_ = lean_box(0);
v_isShared_3325_ = v_isSharedCheck_3332_;
goto v_resetjp_3323_;
}
v_resetjp_3323_:
{
lean_object* v___x_3327_; 
if (v_isShared_3325_ == 0)
{
lean_ctor_set(v___x_3324_, 1, v_a_3301_);
lean_ctor_set(v___x_3324_, 0, v_a_3299_);
v___x_3327_ = v___x_3324_;
goto v_reusejp_3326_;
}
else
{
lean_object* v_reuseFailAlloc_3331_; 
v_reuseFailAlloc_3331_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3331_, 0, v_a_3299_);
lean_ctor_set(v_reuseFailAlloc_3331_, 1, v_a_3301_);
v___x_3327_ = v_reuseFailAlloc_3331_;
goto v_reusejp_3326_;
}
v_reusejp_3326_:
{
lean_object* v___x_3329_; 
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 0, v___x_3327_);
v___x_3329_ = v___x_3303_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v___x_3327_);
v___x_3329_ = v_reuseFailAlloc_3330_;
goto v_reusejp_3328_;
}
v_reusejp_3328_:
{
return v___x_3329_;
}
}
}
}
else
{
lean_object* v___x_3336_; 
lean_dec(v_a_3301_);
lean_dec(v_a_3299_);
if (v_isShared_3304_ == 0)
{
lean_ctor_set(v___x_3303_, 0, v_code_3166_);
v___x_3336_ = v___x_3303_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v_code_3166_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
return v___x_3336_;
}
}
}
}
}
else
{
lean_dec(v_a_3299_);
lean_dec_ref_known(v_code_3166_, 2);
return v___x_3300_;
}
}
else
{
lean_object* v_a_3339_; lean_object* v___x_3341_; uint8_t v_isShared_3342_; uint8_t v_isSharedCheck_3346_; 
lean_dec_ref_known(v_code_3166_, 2);
v_a_3339_ = lean_ctor_get(v___x_3298_, 0);
v_isSharedCheck_3346_ = !lean_is_exclusive(v___x_3298_);
if (v_isSharedCheck_3346_ == 0)
{
v___x_3341_ = v___x_3298_;
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
else
{
lean_inc(v_a_3339_);
lean_dec(v___x_3298_);
v___x_3341_ = lean_box(0);
v_isShared_3342_ = v_isSharedCheck_3346_;
goto v_resetjp_3340_;
}
v_resetjp_3340_:
{
lean_object* v___x_3344_; 
if (v_isShared_3342_ == 0)
{
v___x_3344_ = v___x_3341_;
goto v_reusejp_3343_;
}
else
{
lean_object* v_reuseFailAlloc_3345_; 
v_reuseFailAlloc_3345_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3345_, 0, v_a_3339_);
v___x_3344_ = v_reuseFailAlloc_3345_;
goto v_reusejp_3343_;
}
v_reusejp_3343_:
{
return v___x_3344_;
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_3425_; lean_object* v_args_3426_; size_t v_sz_3427_; size_t v___x_3428_; lean_object* v___x_3429_; 
v_fvarId_3425_ = lean_ctor_get(v_code_3166_, 0);
v_args_3426_ = lean_ctor_get(v_code_3166_, 1);
v_sz_3427_ = lean_array_size(v_args_3426_);
v___x_3428_ = ((size_t)0ULL);
lean_inc_ref(v_args_3426_);
v___x_3429_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_3427_, v___x_3428_, v_args_3426_, v___y_3167_);
if (lean_obj_tag(v___x_3429_) == 0)
{
lean_object* v_a_3430_; lean_object* v___x_3432_; uint8_t v_isShared_3433_; uint8_t v_isSharedCheck_3455_; 
v_a_3430_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3455_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3455_ == 0)
{
v___x_3432_ = v___x_3429_;
v_isShared_3433_ = v_isSharedCheck_3455_;
goto v_resetjp_3431_;
}
else
{
lean_inc(v_a_3430_);
lean_dec(v___x_3429_);
v___x_3432_ = lean_box(0);
v_isShared_3433_ = v_isSharedCheck_3455_;
goto v_resetjp_3431_;
}
v_resetjp_3431_:
{
uint8_t v___y_3435_; uint8_t v___x_3451_; 
v___x_3451_ = l_Lean_instBEqFVarId_beq(v_fvarId_3425_, v_fvarId_3425_);
if (v___x_3451_ == 0)
{
v___y_3435_ = v___x_3451_;
goto v___jp_3434_;
}
else
{
size_t v___x_3452_; size_t v___x_3453_; uint8_t v___x_3454_; 
v___x_3452_ = lean_ptr_addr(v_args_3426_);
v___x_3453_ = lean_ptr_addr(v_a_3430_);
v___x_3454_ = lean_usize_dec_eq(v___x_3452_, v___x_3453_);
v___y_3435_ = v___x_3454_;
goto v___jp_3434_;
}
v___jp_3434_:
{
if (v___y_3435_ == 0)
{
lean_object* v___x_3437_; uint8_t v_isShared_3438_; uint8_t v_isSharedCheck_3445_; 
lean_inc(v_fvarId_3425_);
v_isSharedCheck_3445_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3445_ == 0)
{
lean_object* v_unused_3446_; lean_object* v_unused_3447_; 
v_unused_3446_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3446_);
v_unused_3447_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3447_);
v___x_3437_ = v_code_3166_;
v_isShared_3438_ = v_isSharedCheck_3445_;
goto v_resetjp_3436_;
}
else
{
lean_dec(v_code_3166_);
v___x_3437_ = lean_box(0);
v_isShared_3438_ = v_isSharedCheck_3445_;
goto v_resetjp_3436_;
}
v_resetjp_3436_:
{
lean_object* v___x_3440_; 
if (v_isShared_3438_ == 0)
{
lean_ctor_set(v___x_3437_, 1, v_a_3430_);
v___x_3440_ = v___x_3437_;
goto v_reusejp_3439_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_fvarId_3425_);
lean_ctor_set(v_reuseFailAlloc_3444_, 1, v_a_3430_);
v___x_3440_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3439_;
}
v_reusejp_3439_:
{
lean_object* v___x_3442_; 
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v___x_3440_);
v___x_3442_ = v___x_3432_;
goto v_reusejp_3441_;
}
else
{
lean_object* v_reuseFailAlloc_3443_; 
v_reuseFailAlloc_3443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3443_, 0, v___x_3440_);
v___x_3442_ = v_reuseFailAlloc_3443_;
goto v_reusejp_3441_;
}
v_reusejp_3441_:
{
return v___x_3442_;
}
}
}
}
else
{
lean_object* v___x_3449_; 
lean_dec(v_a_3430_);
if (v_isShared_3433_ == 0)
{
lean_ctor_set(v___x_3432_, 0, v_code_3166_);
v___x_3449_ = v___x_3432_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v_code_3166_);
v___x_3449_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
return v___x_3449_;
}
}
}
}
}
else
{
lean_object* v_a_3456_; lean_object* v___x_3458_; uint8_t v_isShared_3459_; uint8_t v_isSharedCheck_3463_; 
lean_dec_ref_known(v_code_3166_, 2);
v_a_3456_ = lean_ctor_get(v___x_3429_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3429_);
if (v_isSharedCheck_3463_ == 0)
{
v___x_3458_ = v___x_3429_;
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
else
{
lean_inc(v_a_3456_);
lean_dec(v___x_3429_);
v___x_3458_ = lean_box(0);
v_isShared_3459_ = v_isSharedCheck_3463_;
goto v_resetjp_3457_;
}
v_resetjp_3457_:
{
lean_object* v___x_3461_; 
if (v_isShared_3459_ == 0)
{
v___x_3461_ = v___x_3458_;
goto v_reusejp_3460_;
}
else
{
lean_object* v_reuseFailAlloc_3462_; 
v_reuseFailAlloc_3462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3462_, 0, v_a_3456_);
v___x_3461_ = v_reuseFailAlloc_3462_;
goto v_reusejp_3460_;
}
v_reusejp_3460_:
{
return v___x_3461_;
}
}
}
}
case 4:
{
lean_object* v_cases_3464_; lean_object* v_typeName_3465_; lean_object* v_resultType_3466_; lean_object* v_discr_3467_; lean_object* v_alts_3468_; lean_object* v___x_3469_; uint8_t v___x_3470_; 
v_cases_3464_ = lean_ctor_get(v_code_3166_, 0);
lean_inc_ref(v_cases_3464_);
v_typeName_3465_ = lean_ctor_get(v_cases_3464_, 0);
v_resultType_3466_ = lean_ctor_get(v_cases_3464_, 1);
v_discr_3467_ = lean_ctor_get(v_cases_3464_, 2);
v_alts_3468_ = lean_ctor_get(v_cases_3464_, 3);
v___x_3469_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_3470_ = lean_name_eq(v_typeName_3465_, v___x_3469_);
if (v___x_3470_ == 0)
{
lean_object* v___x_3471_; uint8_t v___x_3472_; 
v___x_3471_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_3472_ = lean_name_eq(v_typeName_3465_, v___x_3471_);
if (v___x_3472_ == 0)
{
lean_object* v___x_3473_; uint8_t v___x_3474_; 
v___x_3473_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__9));
v___x_3474_ = lean_name_eq(v_typeName_3465_, v___x_3473_);
if (v___x_3474_ == 0)
{
lean_object* v___x_3475_; uint8_t v___x_3476_; 
v___x_3475_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__11));
v___x_3476_ = lean_name_eq(v_typeName_3465_, v___x_3475_);
if (v___x_3476_ == 0)
{
lean_object* v___x_3477_; uint8_t v___x_3478_; 
v___x_3477_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__13));
v___x_3478_ = lean_name_eq(v_typeName_3465_, v___x_3477_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3479_; uint8_t v___x_3480_; 
v___x_3479_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__15));
v___x_3480_ = lean_name_eq(v_typeName_3465_, v___x_3479_);
if (v___x_3480_ == 0)
{
lean_object* v___x_3481_; uint8_t v___x_3482_; 
v___x_3481_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__16));
v___x_3482_ = lean_name_eq(v_typeName_3465_, v___x_3481_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; uint8_t v___x_3484_; 
v___x_3483_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__17));
v___x_3484_ = lean_name_eq(v_typeName_3465_, v___x_3483_);
if (v___x_3484_ == 0)
{
lean_object* v___x_3485_; uint8_t v___x_3486_; 
v___x_3485_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__18));
v___x_3486_ = lean_name_eq(v_typeName_3465_, v___x_3485_);
if (v___x_3486_ == 0)
{
lean_object* v___x_3487_; uint8_t v___x_3488_; 
v___x_3487_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__19));
v___x_3488_ = lean_name_eq(v_typeName_3465_, v___x_3487_);
if (v___x_3488_ == 0)
{
lean_object* v___x_3489_; uint8_t v___x_3490_; 
v___x_3489_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__20));
v___x_3490_ = lean_name_eq(v_typeName_3465_, v___x_3489_);
if (v___x_3490_ == 0)
{
lean_object* v___x_3491_; uint8_t v___x_3492_; 
v___x_3491_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__21));
v___x_3492_ = lean_name_eq(v_typeName_3465_, v___x_3491_);
if (v___x_3492_ == 0)
{
lean_object* v___x_3493_; uint8_t v___x_3494_; 
v___x_3493_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__22));
v___x_3494_ = lean_name_eq(v_typeName_3465_, v___x_3493_);
if (v___x_3494_ == 0)
{
lean_object* v___x_3495_; uint8_t v___x_3496_; 
v___x_3495_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__23));
v___x_3496_ = lean_name_eq(v_typeName_3465_, v___x_3495_);
if (v___x_3496_ == 0)
{
lean_object* v___x_3497_; 
lean_inc(v_typeName_3465_);
v___x_3497_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_3465_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3497_) == 0)
{
lean_object* v_a_3498_; 
v_a_3498_ = lean_ctor_get(v___x_3497_, 0);
lean_inc(v_a_3498_);
lean_dec_ref_known(v___x_3497_, 1);
if (lean_obj_tag(v_a_3498_) == 1)
{
lean_object* v_val_3499_; lean_object* v___x_3500_; 
lean_dec_ref_known(v_code_3166_, 1);
v_val_3499_ = lean_ctor_get(v_a_3498_, 0);
lean_inc(v_val_3499_);
lean_dec_ref_known(v_a_3498_, 1);
v___x_3500_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_val_3499_, v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec(v_val_3499_);
return v___x_3500_;
}
else
{
lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3591_; 
lean_inc_ref(v_alts_3468_);
lean_inc(v_discr_3467_);
lean_inc_ref(v_resultType_3466_);
lean_inc(v_typeName_3465_);
lean_dec(v_a_3498_);
v_isSharedCheck_3591_ = !lean_is_exclusive(v_cases_3464_);
if (v_isSharedCheck_3591_ == 0)
{
lean_object* v_unused_3592_; lean_object* v_unused_3593_; lean_object* v_unused_3594_; lean_object* v_unused_3595_; 
v_unused_3592_ = lean_ctor_get(v_cases_3464_, 3);
lean_dec(v_unused_3592_);
v_unused_3593_ = lean_ctor_get(v_cases_3464_, 2);
lean_dec(v_unused_3593_);
v_unused_3594_ = lean_ctor_get(v_cases_3464_, 1);
lean_dec(v_unused_3594_);
v_unused_3595_ = lean_ctor_get(v_cases_3464_, 0);
lean_dec(v_unused_3595_);
v___x_3502_ = v_cases_3464_;
v_isShared_3503_ = v_isSharedCheck_3591_;
goto v_resetjp_3501_;
}
else
{
lean_dec(v_cases_3464_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3591_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3504_; 
lean_inc_ref(v_resultType_3466_);
v___x_3504_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3466_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3582_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3582_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3582_ == 0)
{
v___x_3507_ = v___x_3504_;
v_isShared_3508_ = v_isSharedCheck_3582_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3504_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3582_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
lean_object* v___x_3509_; lean_object* v_env_3510_; lean_object* v___x_3537_; 
v___x_3509_ = lean_st_ref_get(v___y_3171_);
v_env_3510_ = lean_ctor_get(v___x_3509_, 0);
lean_inc_ref_n(v_env_3510_, 2);
lean_dec(v___x_3509_);
lean_inc(v_typeName_3465_);
v___x_3537_ = l_Lean_Environment_find_x3f(v_env_3510_, v_typeName_3465_, v___x_3496_);
if (lean_obj_tag(v___x_3537_) == 1)
{
lean_object* v_val_3538_; 
v_val_3538_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_val_3538_);
lean_dec_ref_known(v___x_3537_, 1);
if (lean_obj_tag(v_val_3538_) == 5)
{
lean_object* v_val_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3581_; 
v_val_3539_ = lean_ctor_get(v_val_3538_, 0);
v_isSharedCheck_3581_ = !lean_is_exclusive(v_val_3538_);
if (v_isSharedCheck_3581_ == 0)
{
v___x_3541_ = v_val_3538_;
v_isShared_3542_ = v_isSharedCheck_3581_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_val_3539_);
lean_dec(v_val_3538_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3581_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v_toConstantVal_3543_; lean_object* v_name_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v_toConstantVal_3543_ = lean_ctor_get(v_val_3539_, 0);
lean_inc_ref(v_toConstantVal_3543_);
lean_dec_ref(v_val_3539_);
v_name_3544_ = lean_ctor_get(v_toConstantVal_3543_, 0);
lean_inc(v_name_3544_);
lean_dec_ref(v_toConstantVal_3543_);
v___x_3545_ = l_Lean_mkCasesOnName(v_name_3544_);
lean_inc_ref(v_env_3510_);
v___x_3546_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_3510_, v___x_3545_);
if (lean_obj_tag(v___x_3546_) == 0)
{
if (v___x_3496_ == 0)
{
size_t v_sz_3547_; size_t v___x_3548_; lean_object* v___x_3549_; 
lean_dec_ref(v_env_3510_);
lean_del_object(v___x_3502_);
v_sz_3547_ = lean_array_size(v_alts_3468_);
v___x_3548_ = ((size_t)0ULL);
lean_inc_ref(v_alts_3468_);
v___x_3549_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_sz_3547_, v___x_3548_, v_alts_3468_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v_a_3550_; lean_object* v___x_3552_; uint8_t v_isShared_3553_; uint8_t v_isSharedCheck_3572_; 
v_a_3550_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3572_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3572_ == 0)
{
v___x_3552_ = v___x_3549_;
v_isShared_3553_ = v_isSharedCheck_3572_;
goto v_resetjp_3551_;
}
else
{
lean_inc(v_a_3550_);
lean_dec(v___x_3549_);
v___x_3552_ = lean_box(0);
v_isShared_3553_ = v_isSharedCheck_3572_;
goto v_resetjp_3551_;
}
v_resetjp_3551_:
{
size_t v___x_3562_; size_t v___x_3563_; uint8_t v___x_3564_; 
v___x_3562_ = lean_ptr_addr(v_alts_3468_);
lean_dec_ref(v_alts_3468_);
v___x_3563_ = lean_ptr_addr(v_a_3550_);
v___x_3564_ = lean_usize_dec_eq(v___x_3562_, v___x_3563_);
if (v___x_3564_ == 0)
{
lean_del_object(v___x_3507_);
lean_dec_ref(v_resultType_3466_);
lean_dec_ref_known(v_code_3166_, 1);
goto v___jp_3554_;
}
else
{
size_t v___x_3565_; size_t v___x_3566_; uint8_t v___x_3567_; 
v___x_3565_ = lean_ptr_addr(v_resultType_3466_);
lean_dec_ref(v_resultType_3466_);
v___x_3566_ = lean_ptr_addr(v_a_3505_);
v___x_3567_ = lean_usize_dec_eq(v___x_3565_, v___x_3566_);
if (v___x_3567_ == 0)
{
lean_del_object(v___x_3507_);
lean_dec_ref_known(v_code_3166_, 1);
goto v___jp_3554_;
}
else
{
uint8_t v___x_3568_; 
v___x_3568_ = l_Lean_instBEqFVarId_beq(v_discr_3467_, v_discr_3467_);
if (v___x_3568_ == 0)
{
lean_del_object(v___x_3507_);
lean_dec_ref_known(v_code_3166_, 1);
goto v___jp_3554_;
}
else
{
lean_object* v___x_3570_; 
lean_del_object(v___x_3552_);
lean_dec(v_a_3550_);
lean_del_object(v___x_3541_);
lean_dec(v_a_3505_);
lean_dec(v_discr_3467_);
lean_dec(v_typeName_3465_);
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 0, v_code_3166_);
v___x_3570_ = v___x_3507_;
goto v_reusejp_3569_;
}
else
{
lean_object* v_reuseFailAlloc_3571_; 
v_reuseFailAlloc_3571_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3571_, 0, v_code_3166_);
v___x_3570_ = v_reuseFailAlloc_3571_;
goto v_reusejp_3569_;
}
v_reusejp_3569_:
{
return v___x_3570_;
}
}
}
}
v___jp_3554_:
{
lean_object* v___x_3555_; lean_object* v___x_3557_; 
v___x_3555_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3555_, 0, v_typeName_3465_);
lean_ctor_set(v___x_3555_, 1, v_a_3505_);
lean_ctor_set(v___x_3555_, 2, v_discr_3467_);
lean_ctor_set(v___x_3555_, 3, v_a_3550_);
if (v_isShared_3542_ == 0)
{
lean_ctor_set_tag(v___x_3541_, 4);
lean_ctor_set(v___x_3541_, 0, v___x_3555_);
v___x_3557_ = v___x_3541_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3561_; 
v_reuseFailAlloc_3561_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3561_, 0, v___x_3555_);
v___x_3557_ = v_reuseFailAlloc_3561_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
lean_object* v___x_3559_; 
if (v_isShared_3553_ == 0)
{
lean_ctor_set(v___x_3552_, 0, v___x_3557_);
v___x_3559_ = v___x_3552_;
goto v_reusejp_3558_;
}
else
{
lean_object* v_reuseFailAlloc_3560_; 
v_reuseFailAlloc_3560_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3560_, 0, v___x_3557_);
v___x_3559_ = v_reuseFailAlloc_3560_;
goto v_reusejp_3558_;
}
v_reusejp_3558_:
{
return v___x_3559_;
}
}
}
}
}
else
{
lean_object* v_a_3573_; lean_object* v___x_3575_; uint8_t v_isShared_3576_; uint8_t v_isSharedCheck_3580_; 
lean_del_object(v___x_3541_);
lean_del_object(v___x_3507_);
lean_dec(v_a_3505_);
lean_dec_ref(v_alts_3468_);
lean_dec(v_discr_3467_);
lean_dec_ref(v_resultType_3466_);
lean_dec(v_typeName_3465_);
lean_dec_ref_known(v_code_3166_, 1);
v_a_3573_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3580_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3580_ == 0)
{
v___x_3575_ = v___x_3549_;
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
else
{
lean_inc(v_a_3573_);
lean_dec(v___x_3549_);
v___x_3575_ = lean_box(0);
v_isShared_3576_ = v_isSharedCheck_3580_;
goto v_resetjp_3574_;
}
v_resetjp_3574_:
{
lean_object* v___x_3578_; 
if (v_isShared_3576_ == 0)
{
v___x_3578_ = v___x_3575_;
goto v_reusejp_3577_;
}
else
{
lean_object* v_reuseFailAlloc_3579_; 
v_reuseFailAlloc_3579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3579_, 0, v_a_3573_);
v___x_3578_ = v_reuseFailAlloc_3579_;
goto v_reusejp_3577_;
}
v_reusejp_3577_:
{
return v___x_3578_;
}
}
}
}
else
{
lean_del_object(v___x_3541_);
lean_del_object(v___x_3507_);
lean_dec_ref(v_resultType_3466_);
lean_dec_ref_known(v_code_3166_, 1);
goto v___jp_3511_;
}
}
else
{
lean_dec_ref_known(v___x_3546_, 1);
lean_del_object(v___x_3541_);
lean_del_object(v___x_3507_);
lean_dec_ref(v_resultType_3466_);
lean_dec_ref_known(v_code_3166_, 1);
goto v___jp_3511_;
}
}
}
else
{
lean_dec(v_val_3538_);
lean_dec_ref(v_env_3510_);
lean_del_object(v___x_3507_);
lean_dec(v_a_3505_);
lean_del_object(v___x_3502_);
lean_dec_ref(v_alts_3468_);
lean_dec(v_discr_3467_);
lean_dec_ref(v_resultType_3466_);
lean_dec(v_typeName_3465_);
lean_dec_ref_known(v_code_3166_, 1);
v___y_3283_ = v___y_3167_;
v___y_3284_ = v___y_3168_;
v___y_3285_ = v___y_3169_;
v___y_3286_ = v___y_3170_;
v___y_3287_ = v___y_3171_;
goto v___jp_3282_;
}
}
else
{
lean_dec(v___x_3537_);
lean_dec_ref(v_env_3510_);
lean_del_object(v___x_3507_);
lean_dec(v_a_3505_);
lean_del_object(v___x_3502_);
lean_dec_ref(v_alts_3468_);
lean_dec(v_discr_3467_);
lean_dec_ref(v_resultType_3466_);
lean_dec(v_typeName_3465_);
lean_dec_ref_known(v_code_3166_, 1);
v___y_3283_ = v___y_3167_;
v___y_3284_ = v___y_3168_;
v___y_3285_ = v___y_3169_;
v___y_3286_ = v___y_3170_;
v___y_3287_ = v___y_3171_;
goto v___jp_3282_;
}
v___jp_3511_:
{
lean_object* v___x_3512_; lean_object* v___x_3513_; size_t v_sz_3514_; size_t v___x_3515_; lean_object* v___x_3516_; 
v___x_3512_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4));
v___x_3513_ = l_Lean_Name_append(v_typeName_3465_, v___x_3512_);
v_sz_3514_ = lean_array_size(v_alts_3468_);
v___x_3515_ = ((size_t)0ULL);
v___x_3516_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v_env_3510_, v___x_3496_, v_sz_3514_, v___x_3515_, v_alts_3468_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3528_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3519_ = v___x_3516_;
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3516_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
lean_object* v___x_3522_; 
if (v_isShared_3503_ == 0)
{
lean_ctor_set(v___x_3502_, 3, v_a_3517_);
lean_ctor_set(v___x_3502_, 1, v_a_3505_);
lean_ctor_set(v___x_3502_, 0, v___x_3513_);
v___x_3522_ = v___x_3502_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v___x_3513_);
lean_ctor_set(v_reuseFailAlloc_3527_, 1, v_a_3505_);
lean_ctor_set(v_reuseFailAlloc_3527_, 2, v_discr_3467_);
lean_ctor_set(v_reuseFailAlloc_3527_, 3, v_a_3517_);
v___x_3522_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
lean_object* v___x_3523_; lean_object* v___x_3525_; 
v___x_3523_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3522_);
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 0, v___x_3523_);
v___x_3525_ = v___x_3519_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v___x_3523_);
v___x_3525_ = v_reuseFailAlloc_3526_;
goto v_reusejp_3524_;
}
v_reusejp_3524_:
{
return v___x_3525_;
}
}
}
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
lean_dec(v___x_3513_);
lean_dec(v_a_3505_);
lean_del_object(v___x_3502_);
lean_dec(v_discr_3467_);
v_a_3529_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3516_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3516_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
}
}
}
else
{
lean_object* v_a_3583_; lean_object* v___x_3585_; uint8_t v_isShared_3586_; uint8_t v_isSharedCheck_3590_; 
lean_del_object(v___x_3502_);
lean_dec_ref(v_alts_3468_);
lean_dec(v_discr_3467_);
lean_dec_ref(v_resultType_3466_);
lean_dec(v_typeName_3465_);
lean_dec_ref_known(v_code_3166_, 1);
v_a_3583_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3590_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3590_ == 0)
{
v___x_3585_ = v___x_3504_;
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
else
{
lean_inc(v_a_3583_);
lean_dec(v___x_3504_);
v___x_3585_ = lean_box(0);
v_isShared_3586_ = v_isSharedCheck_3590_;
goto v_resetjp_3584_;
}
v_resetjp_3584_:
{
lean_object* v___x_3588_; 
if (v_isShared_3586_ == 0)
{
v___x_3588_ = v___x_3585_;
goto v_reusejp_3587_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3583_);
v___x_3588_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3587_;
}
v_reusejp_3587_:
{
return v___x_3588_;
}
}
}
}
}
}
else
{
lean_object* v_a_3596_; lean_object* v___x_3598_; uint8_t v_isShared_3599_; uint8_t v_isSharedCheck_3603_; 
lean_dec_ref_known(v_code_3166_, 1);
lean_dec_ref(v_cases_3464_);
v_a_3596_ = lean_ctor_get(v___x_3497_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3497_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3598_ = v___x_3497_;
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
else
{
lean_inc(v_a_3596_);
lean_dec(v___x_3497_);
v___x_3598_ = lean_box(0);
v_isShared_3599_ = v_isSharedCheck_3603_;
goto v_resetjp_3597_;
}
v_resetjp_3597_:
{
lean_object* v___x_3601_; 
if (v_isShared_3599_ == 0)
{
v___x_3601_ = v___x_3598_;
goto v_reusejp_3600_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3596_);
v___x_3601_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3600_;
}
v_reusejp_3600_:
{
return v___x_3601_;
}
}
}
}
else
{
lean_object* v___x_3604_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3604_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3604_;
}
}
else
{
lean_object* v___x_3605_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3605_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
lean_dec_ref(v_cases_3464_);
return v___x_3605_;
}
}
else
{
lean_object* v___x_3606_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3606_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3606_;
}
}
else
{
lean_object* v___x_3607_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3607_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3607_;
}
}
else
{
lean_object* v___x_3608_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3608_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3608_;
}
}
else
{
lean_object* v___x_3609_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3609_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3609_;
}
}
else
{
lean_object* v___x_3610_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3610_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3610_;
}
}
else
{
lean_object* v___x_3611_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3611_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3611_;
}
}
else
{
lean_object* v___x_3612_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3612_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3464_, v___x_3479_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3612_;
}
}
else
{
lean_object* v___x_3613_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3613_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3464_, v___x_3477_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3613_;
}
}
else
{
lean_object* v___x_3614_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3614_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3464_, v___x_3475_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3614_;
}
}
else
{
lean_object* v___x_3615_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3615_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3464_, v___x_3473_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3615_;
}
}
else
{
lean_object* v___x_3616_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3616_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3616_;
}
}
else
{
lean_object* v___x_3617_; 
lean_dec_ref_known(v_code_3166_, 1);
v___x_3617_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_cases_3464_, v___y_3167_, v___y_3168_, v___y_3169_, v___y_3170_, v___y_3171_);
return v___x_3617_;
}
}
case 5:
{
lean_object* v___x_3618_; 
v___x_3618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3618_, 0, v_code_3166_);
return v___x_3618_;
}
case 6:
{
lean_object* v_type_3619_; lean_object* v___x_3621_; uint8_t v_isShared_3622_; uint8_t v_isSharedCheck_3643_; 
v_type_3619_ = lean_ctor_get(v_code_3166_, 0);
v_isSharedCheck_3643_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3643_ == 0)
{
v___x_3621_ = v_code_3166_;
v_isShared_3622_ = v_isSharedCheck_3643_;
goto v_resetjp_3620_;
}
else
{
lean_inc(v_type_3619_);
lean_dec(v_code_3166_);
v___x_3621_ = lean_box(0);
v_isShared_3622_ = v_isSharedCheck_3643_;
goto v_resetjp_3620_;
}
v_resetjp_3620_:
{
lean_object* v___x_3623_; 
v___x_3623_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3619_, v___y_3170_, v___y_3171_);
if (lean_obj_tag(v___x_3623_) == 0)
{
lean_object* v_a_3624_; lean_object* v___x_3626_; uint8_t v_isShared_3627_; uint8_t v_isSharedCheck_3634_; 
v_a_3624_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3634_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3634_ == 0)
{
v___x_3626_ = v___x_3623_;
v_isShared_3627_ = v_isSharedCheck_3634_;
goto v_resetjp_3625_;
}
else
{
lean_inc(v_a_3624_);
lean_dec(v___x_3623_);
v___x_3626_ = lean_box(0);
v_isShared_3627_ = v_isSharedCheck_3634_;
goto v_resetjp_3625_;
}
v_resetjp_3625_:
{
lean_object* v___x_3629_; 
if (v_isShared_3622_ == 0)
{
lean_ctor_set(v___x_3621_, 0, v_a_3624_);
v___x_3629_ = v___x_3621_;
goto v_reusejp_3628_;
}
else
{
lean_object* v_reuseFailAlloc_3633_; 
v_reuseFailAlloc_3633_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3633_, 0, v_a_3624_);
v___x_3629_ = v_reuseFailAlloc_3633_;
goto v_reusejp_3628_;
}
v_reusejp_3628_:
{
lean_object* v___x_3631_; 
if (v_isShared_3627_ == 0)
{
lean_ctor_set(v___x_3626_, 0, v___x_3629_);
v___x_3631_ = v___x_3626_;
goto v_reusejp_3630_;
}
else
{
lean_object* v_reuseFailAlloc_3632_; 
v_reuseFailAlloc_3632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3632_, 0, v___x_3629_);
v___x_3631_ = v_reuseFailAlloc_3632_;
goto v_reusejp_3630_;
}
v_reusejp_3630_:
{
return v___x_3631_;
}
}
}
}
else
{
lean_object* v_a_3635_; lean_object* v___x_3637_; uint8_t v_isShared_3638_; uint8_t v_isSharedCheck_3642_; 
lean_del_object(v___x_3621_);
v_a_3635_ = lean_ctor_get(v___x_3623_, 0);
v_isSharedCheck_3642_ = !lean_is_exclusive(v___x_3623_);
if (v_isSharedCheck_3642_ == 0)
{
v___x_3637_ = v___x_3623_;
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
else
{
lean_inc(v_a_3635_);
lean_dec(v___x_3623_);
v___x_3637_ = lean_box(0);
v_isShared_3638_ = v_isSharedCheck_3642_;
goto v_resetjp_3636_;
}
v_resetjp_3636_:
{
lean_object* v___x_3640_; 
if (v_isShared_3638_ == 0)
{
v___x_3640_ = v___x_3637_;
goto v_reusejp_3639_;
}
else
{
lean_object* v_reuseFailAlloc_3641_; 
v_reuseFailAlloc_3641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3641_, 0, v_a_3635_);
v___x_3640_ = v_reuseFailAlloc_3641_;
goto v_reusejp_3639_;
}
v_reusejp_3639_:
{
return v___x_3640_;
}
}
}
}
}
default: 
{
lean_object* v_decl_3644_; lean_object* v_k_3645_; 
v_decl_3644_ = lean_ctor_get(v_code_3166_, 0);
v_k_3645_ = lean_ctor_get(v_code_3166_, 1);
lean_inc_ref(v_k_3645_);
lean_inc_ref(v_decl_3644_);
v_decl_3174_ = v_decl_3644_;
v_k_3175_ = v_k_3645_;
v___y_3176_ = v___y_3167_;
v___y_3177_ = v___y_3168_;
v___y_3178_ = v___y_3169_;
v___y_3179_ = v___y_3170_;
v___y_3180_ = v___y_3171_;
goto v___jp_3173_;
}
}
v___jp_3173_:
{
lean_object* v___x_3181_; 
v___x_3181_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3174_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_);
if (lean_obj_tag(v___x_3181_) == 0)
{
lean_object* v_a_3182_; lean_object* v___x_3183_; 
v_a_3182_ = lean_ctor_get(v___x_3181_, 0);
lean_inc(v_a_3182_);
lean_dec_ref_known(v___x_3181_, 1);
v___x_3183_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_);
if (lean_obj_tag(v___x_3183_) == 0)
{
switch(lean_obj_tag(v_code_3166_))
{
case 1:
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3223_; 
v_a_3184_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3223_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3223_ == 0)
{
v___x_3186_ = v___x_3183_;
v_isShared_3187_ = v_isSharedCheck_3223_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___x_3183_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3223_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v_decl_3188_; lean_object* v_k_3189_; size_t v___x_3190_; size_t v___x_3191_; uint8_t v___x_3192_; 
v_decl_3188_ = lean_ctor_get(v_code_3166_, 0);
v_k_3189_ = lean_ctor_get(v_code_3166_, 1);
v___x_3190_ = lean_ptr_addr(v_k_3189_);
v___x_3191_ = lean_ptr_addr(v_a_3184_);
v___x_3192_ = lean_usize_dec_eq(v___x_3190_, v___x_3191_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3202_; 
v_isSharedCheck_3202_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3202_ == 0)
{
lean_object* v_unused_3203_; lean_object* v_unused_3204_; 
v_unused_3203_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3203_);
v_unused_3204_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3204_);
v___x_3194_ = v_code_3166_;
v_isShared_3195_ = v_isSharedCheck_3202_;
goto v_resetjp_3193_;
}
else
{
lean_dec(v_code_3166_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3202_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___x_3197_; 
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 1, v_a_3184_);
lean_ctor_set(v___x_3194_, 0, v_a_3182_);
v___x_3197_ = v___x_3194_;
goto v_reusejp_3196_;
}
else
{
lean_object* v_reuseFailAlloc_3201_; 
v_reuseFailAlloc_3201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3201_, 0, v_a_3182_);
lean_ctor_set(v_reuseFailAlloc_3201_, 1, v_a_3184_);
v___x_3197_ = v_reuseFailAlloc_3201_;
goto v_reusejp_3196_;
}
v_reusejp_3196_:
{
lean_object* v___x_3199_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 0, v___x_3197_);
v___x_3199_ = v___x_3186_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v___x_3197_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
else
{
size_t v___x_3205_; size_t v___x_3206_; uint8_t v___x_3207_; 
v___x_3205_ = lean_ptr_addr(v_decl_3188_);
v___x_3206_ = lean_ptr_addr(v_a_3182_);
v___x_3207_ = lean_usize_dec_eq(v___x_3205_, v___x_3206_);
if (v___x_3207_ == 0)
{
lean_object* v___x_3209_; uint8_t v_isShared_3210_; uint8_t v_isSharedCheck_3217_; 
v_isSharedCheck_3217_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3217_ == 0)
{
lean_object* v_unused_3218_; lean_object* v_unused_3219_; 
v_unused_3218_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3218_);
v_unused_3219_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3219_);
v___x_3209_ = v_code_3166_;
v_isShared_3210_ = v_isSharedCheck_3217_;
goto v_resetjp_3208_;
}
else
{
lean_dec(v_code_3166_);
v___x_3209_ = lean_box(0);
v_isShared_3210_ = v_isSharedCheck_3217_;
goto v_resetjp_3208_;
}
v_resetjp_3208_:
{
lean_object* v___x_3212_; 
if (v_isShared_3210_ == 0)
{
lean_ctor_set(v___x_3209_, 1, v_a_3184_);
lean_ctor_set(v___x_3209_, 0, v_a_3182_);
v___x_3212_ = v___x_3209_;
goto v_reusejp_3211_;
}
else
{
lean_object* v_reuseFailAlloc_3216_; 
v_reuseFailAlloc_3216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3216_, 0, v_a_3182_);
lean_ctor_set(v_reuseFailAlloc_3216_, 1, v_a_3184_);
v___x_3212_ = v_reuseFailAlloc_3216_;
goto v_reusejp_3211_;
}
v_reusejp_3211_:
{
lean_object* v___x_3214_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 0, v___x_3212_);
v___x_3214_ = v___x_3186_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3215_; 
v_reuseFailAlloc_3215_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3215_, 0, v___x_3212_);
v___x_3214_ = v_reuseFailAlloc_3215_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
return v___x_3214_;
}
}
}
}
else
{
lean_object* v___x_3221_; 
lean_dec(v_a_3184_);
lean_dec(v_a_3182_);
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 0, v_code_3166_);
v___x_3221_ = v___x_3186_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_code_3166_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
return v___x_3221_;
}
}
}
}
}
case 2:
{
lean_object* v_a_3224_; lean_object* v___x_3226_; uint8_t v_isShared_3227_; uint8_t v_isSharedCheck_3263_; 
v_a_3224_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3263_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3263_ == 0)
{
v___x_3226_ = v___x_3183_;
v_isShared_3227_ = v_isSharedCheck_3263_;
goto v_resetjp_3225_;
}
else
{
lean_inc(v_a_3224_);
lean_dec(v___x_3183_);
v___x_3226_ = lean_box(0);
v_isShared_3227_ = v_isSharedCheck_3263_;
goto v_resetjp_3225_;
}
v_resetjp_3225_:
{
lean_object* v_decl_3228_; lean_object* v_k_3229_; size_t v___x_3230_; size_t v___x_3231_; uint8_t v___x_3232_; 
v_decl_3228_ = lean_ctor_get(v_code_3166_, 0);
v_k_3229_ = lean_ctor_get(v_code_3166_, 1);
v___x_3230_ = lean_ptr_addr(v_k_3229_);
v___x_3231_ = lean_ptr_addr(v_a_3224_);
v___x_3232_ = lean_usize_dec_eq(v___x_3230_, v___x_3231_);
if (v___x_3232_ == 0)
{
lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3242_; 
v_isSharedCheck_3242_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3242_ == 0)
{
lean_object* v_unused_3243_; lean_object* v_unused_3244_; 
v_unused_3243_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3243_);
v_unused_3244_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3244_);
v___x_3234_ = v_code_3166_;
v_isShared_3235_ = v_isSharedCheck_3242_;
goto v_resetjp_3233_;
}
else
{
lean_dec(v_code_3166_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3242_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v___x_3237_; 
if (v_isShared_3235_ == 0)
{
lean_ctor_set(v___x_3234_, 1, v_a_3224_);
lean_ctor_set(v___x_3234_, 0, v_a_3182_);
v___x_3237_ = v___x_3234_;
goto v_reusejp_3236_;
}
else
{
lean_object* v_reuseFailAlloc_3241_; 
v_reuseFailAlloc_3241_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3241_, 0, v_a_3182_);
lean_ctor_set(v_reuseFailAlloc_3241_, 1, v_a_3224_);
v___x_3237_ = v_reuseFailAlloc_3241_;
goto v_reusejp_3236_;
}
v_reusejp_3236_:
{
lean_object* v___x_3239_; 
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v___x_3237_);
v___x_3239_ = v___x_3226_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v___x_3237_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
else
{
size_t v___x_3245_; size_t v___x_3246_; uint8_t v___x_3247_; 
v___x_3245_ = lean_ptr_addr(v_decl_3228_);
v___x_3246_ = lean_ptr_addr(v_a_3182_);
v___x_3247_ = lean_usize_dec_eq(v___x_3245_, v___x_3246_);
if (v___x_3247_ == 0)
{
lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3257_; 
v_isSharedCheck_3257_ = !lean_is_exclusive(v_code_3166_);
if (v_isSharedCheck_3257_ == 0)
{
lean_object* v_unused_3258_; lean_object* v_unused_3259_; 
v_unused_3258_ = lean_ctor_get(v_code_3166_, 1);
lean_dec(v_unused_3258_);
v_unused_3259_ = lean_ctor_get(v_code_3166_, 0);
lean_dec(v_unused_3259_);
v___x_3249_ = v_code_3166_;
v_isShared_3250_ = v_isSharedCheck_3257_;
goto v_resetjp_3248_;
}
else
{
lean_dec(v_code_3166_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3257_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v___x_3252_; 
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 1, v_a_3224_);
lean_ctor_set(v___x_3249_, 0, v_a_3182_);
v___x_3252_ = v___x_3249_;
goto v_reusejp_3251_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_a_3182_);
lean_ctor_set(v_reuseFailAlloc_3256_, 1, v_a_3224_);
v___x_3252_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3251_;
}
v_reusejp_3251_:
{
lean_object* v___x_3254_; 
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v___x_3252_);
v___x_3254_ = v___x_3226_;
goto v_reusejp_3253_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v___x_3252_);
v___x_3254_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3253_;
}
v_reusejp_3253_:
{
return v___x_3254_;
}
}
}
}
else
{
lean_object* v___x_3261_; 
lean_dec(v_a_3224_);
lean_dec(v_a_3182_);
if (v_isShared_3227_ == 0)
{
lean_ctor_set(v___x_3226_, 0, v_code_3166_);
v___x_3261_ = v___x_3226_;
goto v_reusejp_3260_;
}
else
{
lean_object* v_reuseFailAlloc_3262_; 
v_reuseFailAlloc_3262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3262_, 0, v_code_3166_);
v___x_3261_ = v_reuseFailAlloc_3262_;
goto v_reusejp_3260_;
}
v_reusejp_3260_:
{
return v___x_3261_;
}
}
}
}
}
default: 
{
lean_object* v___x_3265_; uint8_t v_isShared_3266_; uint8_t v_isSharedCheck_3272_; 
lean_dec(v_a_3182_);
lean_dec_ref(v_code_3166_);
v_isSharedCheck_3272_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3272_ == 0)
{
lean_object* v_unused_3273_; 
v_unused_3273_ = lean_ctor_get(v___x_3183_, 0);
lean_dec(v_unused_3273_);
v___x_3265_ = v___x_3183_;
v_isShared_3266_ = v_isSharedCheck_3272_;
goto v_resetjp_3264_;
}
else
{
lean_dec(v___x_3183_);
v___x_3265_ = lean_box(0);
v_isShared_3266_ = v_isSharedCheck_3272_;
goto v_resetjp_3264_;
}
v_resetjp_3264_:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v___x_3270_; 
v___x_3267_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__2, &l_Lean_Compiler_LCNF_Code_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2);
v___x_3268_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(v___x_3267_);
if (v_isShared_3266_ == 0)
{
lean_ctor_set(v___x_3265_, 0, v___x_3268_);
v___x_3270_ = v___x_3265_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v___x_3268_);
v___x_3270_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
return v___x_3270_;
}
}
}
}
}
else
{
lean_dec(v_a_3182_);
lean_dec_ref(v_code_3166_);
return v___x_3183_;
}
}
else
{
lean_object* v_a_3274_; lean_object* v___x_3276_; uint8_t v_isShared_3277_; uint8_t v_isSharedCheck_3281_; 
lean_dec_ref(v_k_3175_);
lean_dec_ref(v_code_3166_);
v_a_3274_ = lean_ctor_get(v___x_3181_, 0);
v_isSharedCheck_3281_ = !lean_is_exclusive(v___x_3181_);
if (v_isSharedCheck_3281_ == 0)
{
v___x_3276_ = v___x_3181_;
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
else
{
lean_inc(v_a_3274_);
lean_dec(v___x_3181_);
v___x_3276_ = lean_box(0);
v_isShared_3277_ = v_isSharedCheck_3281_;
goto v_resetjp_3275_;
}
v_resetjp_3275_:
{
lean_object* v___x_3279_; 
if (v_isShared_3277_ == 0)
{
v___x_3279_ = v___x_3276_;
goto v_reusejp_3278_;
}
else
{
lean_object* v_reuseFailAlloc_3280_; 
v_reuseFailAlloc_3280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3280_, 0, v_a_3274_);
v___x_3279_ = v_reuseFailAlloc_3280_;
goto v_reusejp_3278_;
}
v_reusejp_3278_:
{
return v___x_3279_;
}
}
}
}
v___jp_3282_:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__4, &l_Lean_Compiler_LCNF_Code_toMono___closed__4_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4);
v___x_3289_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3288_, v___y_3283_, v___y_3284_, v___y_3285_, v___y_3286_, v___y_3287_);
return v___x_3289_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object* v_decl_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_, lean_object* v___y_3651_){
_start:
{
lean_object* v_params_3653_; lean_object* v_type_3654_; lean_object* v_value_3655_; uint8_t v___x_3656_; lean_object* v___x_3657_; 
v_params_3653_ = lean_ctor_get(v_decl_3646_, 2);
v_type_3654_ = lean_ctor_get(v_decl_3646_, 3);
v_value_3655_ = lean_ctor_get(v_decl_3646_, 4);
v___x_3656_ = 0;
lean_inc_ref(v_type_3654_);
v___x_3657_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3654_, v___y_3650_, v___y_3651_);
if (lean_obj_tag(v___x_3657_) == 0)
{
lean_object* v_a_3658_; size_t v_sz_3659_; size_t v___x_3660_; lean_object* v___x_3661_; 
v_a_3658_ = lean_ctor_get(v___x_3657_, 0);
lean_inc(v_a_3658_);
lean_dec_ref_known(v___x_3657_, 1);
v_sz_3659_ = lean_array_size(v_params_3653_);
v___x_3660_ = ((size_t)0ULL);
lean_inc_ref(v_params_3653_);
v___x_3661_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_3659_, v___x_3660_, v_params_3653_, v___y_3647_, v___y_3649_, v___y_3650_, v___y_3651_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3663_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
lean_inc(v_a_3662_);
lean_dec_ref_known(v___x_3661_, 1);
lean_inc_ref(v_value_3655_);
v___x_3663_ = l_Lean_Compiler_LCNF_Code_toMono(v_value_3655_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, v___y_3651_);
if (lean_obj_tag(v___x_3663_) == 0)
{
lean_object* v_a_3664_; lean_object* v___x_3665_; 
v_a_3664_ = lean_ctor_get(v___x_3663_, 0);
lean_inc(v_a_3664_);
lean_dec_ref_known(v___x_3663_, 1);
v___x_3665_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3656_, v_decl_3646_, v_a_3658_, v_a_3662_, v_a_3664_, v___y_3649_);
return v___x_3665_;
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
lean_dec(v_a_3662_);
lean_dec(v_a_3658_);
lean_dec_ref(v_decl_3646_);
v_a_3666_ = lean_ctor_get(v___x_3663_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3663_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3663_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3663_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
else
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3681_; 
lean_dec(v_a_3658_);
lean_dec_ref(v_decl_3646_);
v_a_3674_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3681_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3676_ = v___x_3661_;
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3661_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3681_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
lean_object* v___x_3679_; 
if (v_isShared_3677_ == 0)
{
v___x_3679_ = v___x_3676_;
goto v_reusejp_3678_;
}
else
{
lean_object* v_reuseFailAlloc_3680_; 
v_reuseFailAlloc_3680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3680_, 0, v_a_3674_);
v___x_3679_ = v_reuseFailAlloc_3680_;
goto v_reusejp_3678_;
}
v_reusejp_3678_:
{
return v___x_3679_;
}
}
}
}
else
{
lean_object* v_a_3682_; lean_object* v___x_3684_; uint8_t v_isShared_3685_; uint8_t v_isSharedCheck_3689_; 
lean_dec_ref(v_decl_3646_);
v_a_3682_ = lean_ctor_get(v___x_3657_, 0);
v_isSharedCheck_3689_ = !lean_is_exclusive(v___x_3657_);
if (v_isSharedCheck_3689_ == 0)
{
v___x_3684_ = v___x_3657_;
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
else
{
lean_inc(v_a_3682_);
lean_dec(v___x_3657_);
v___x_3684_ = lean_box(0);
v_isShared_3685_ = v_isSharedCheck_3689_;
goto v_resetjp_3683_;
}
v_resetjp_3683_:
{
lean_object* v___x_3687_; 
if (v_isShared_3685_ == 0)
{
v___x_3687_ = v___x_3684_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v_a_3682_);
v___x_3687_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
return v___x_3687_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object* v_decl_3690_, lean_object* v___y_3691_, lean_object* v___y_3692_, lean_object* v___y_3693_, lean_object* v___y_3694_, lean_object* v___y_3695_, lean_object* v___y_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3690_, v___y_3691_, v___y_3692_, v___y_3693_, v___y_3694_, v___y_3695_);
lean_dec(v___y_3695_);
lean_dec_ref(v___y_3694_);
lean_dec(v___y_3693_);
lean_dec_ref(v___y_3692_);
lean_dec(v___y_3691_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object* v_sz_3698_, lean_object* v_i_3699_, lean_object* v_bs_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_, lean_object* v___y_3705_, lean_object* v___y_3706_){
_start:
{
size_t v_sz_boxed_3707_; size_t v_i_boxed_3708_; lean_object* v_res_3709_; 
v_sz_boxed_3707_ = lean_unbox_usize(v_sz_3698_);
lean_dec(v_sz_3698_);
v_i_boxed_3708_ = lean_unbox_usize(v_i_3699_);
lean_dec(v_i_3699_);
v_res_3709_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_sz_boxed_3707_, v_i_boxed_3708_, v_bs_3700_, v___y_3701_, v___y_3702_, v___y_3703_, v___y_3704_, v___y_3705_);
lean_dec(v___y_3705_);
lean_dec_ref(v___y_3704_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec(v___y_3701_);
return v_res_3709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object* v_c_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_, lean_object* v___y_3716_){
_start:
{
lean_object* v_res_3717_; 
v_res_3717_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_3710_, v___y_3711_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
lean_dec(v___y_3715_);
lean_dec_ref(v___y_3714_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
lean_dec(v___y_3711_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object* v_c_3718_, lean_object* v_uintName_3719_, lean_object* v___y_3720_, lean_object* v___y_3721_, lean_object* v___y_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_){
_start:
{
lean_object* v_res_3726_; 
v_res_3726_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_3718_, v_uintName_3719_, v___y_3720_, v___y_3721_, v___y_3722_, v___y_3723_, v___y_3724_);
lean_dec(v___y_3724_);
lean_dec_ref(v___y_3723_);
lean_dec(v___y_3722_);
lean_dec_ref(v___y_3721_);
lean_dec(v___y_3720_);
return v_res_3726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object* v_c_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_, lean_object* v___y_3733_){
_start:
{
lean_object* v_res_3734_; 
v_res_3734_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
lean_dec(v___y_3732_);
lean_dec_ref(v___y_3731_);
lean_dec(v___y_3730_);
lean_dec_ref(v___y_3729_);
lean_dec(v___y_3728_);
return v_res_3734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___boxed(lean_object* v_c_3735_, lean_object* v___y_3736_, lean_object* v___y_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
lean_object* v_res_3742_; 
v_res_3742_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_3735_, v___y_3736_, v___y_3737_, v___y_3738_, v___y_3739_, v___y_3740_);
lean_dec(v___y_3740_);
lean_dec_ref(v___y_3739_);
lean_dec(v___y_3738_);
lean_dec_ref(v___y_3737_);
lean_dec(v___y_3736_);
return v_res_3742_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object* v_c_3743_, lean_object* v___y_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_){
_start:
{
lean_object* v_res_3750_; 
v_res_3750_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_3743_, v___y_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_);
lean_dec(v___y_3748_);
lean_dec_ref(v___y_3747_);
lean_dec(v___y_3746_);
lean_dec_ref(v___y_3745_);
lean_dec(v___y_3744_);
return v_res_3750_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___boxed(lean_object* v_c_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_, lean_object* v___y_3756_, lean_object* v___y_3757_){
_start:
{
lean_object* v_res_3758_; 
v_res_3758_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_3751_, v___y_3752_, v___y_3753_, v___y_3754_, v___y_3755_, v___y_3756_);
lean_dec(v___y_3756_);
lean_dec_ref(v___y_3755_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
lean_dec(v___y_3752_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object* v_c_3759_, lean_object* v___y_3760_, lean_object* v___y_3761_, lean_object* v___y_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_){
_start:
{
lean_object* v_res_3766_; 
v_res_3766_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_3759_, v___y_3760_, v___y_3761_, v___y_3762_, v___y_3763_, v___y_3764_);
lean_dec(v___y_3764_);
lean_dec_ref(v___y_3763_);
lean_dec(v___y_3762_);
lean_dec_ref(v___y_3761_);
lean_dec(v___y_3760_);
return v_res_3766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object* v___x_3767_, lean_object* v___x_3768_, lean_object* v_sz_3769_, lean_object* v_i_3770_, lean_object* v_bs_3771_, lean_object* v___y_3772_, lean_object* v___y_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_){
_start:
{
uint8_t v___x_35698__boxed_3778_; size_t v_sz_boxed_3779_; size_t v_i_boxed_3780_; lean_object* v_res_3781_; 
v___x_35698__boxed_3778_ = lean_unbox(v___x_3768_);
v_sz_boxed_3779_ = lean_unbox_usize(v_sz_3769_);
lean_dec(v_sz_3769_);
v_i_boxed_3780_ = lean_unbox_usize(v_i_3770_);
lean_dec(v_i_3770_);
v_res_3781_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v___x_3767_, v___x_35698__boxed_3778_, v_sz_boxed_3779_, v_i_boxed_3780_, v_bs_3771_, v___y_3772_, v___y_3773_, v___y_3774_, v___y_3775_, v___y_3776_);
lean_dec(v___y_3776_);
lean_dec_ref(v___y_3775_);
lean_dec(v___y_3774_);
lean_dec_ref(v___y_3773_);
lean_dec(v___y_3772_);
return v_res_3781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object* v_c_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_, lean_object* v___y_3785_, lean_object* v___y_3786_, lean_object* v___y_3787_, lean_object* v___y_3788_){
_start:
{
lean_object* v_res_3789_; 
v_res_3789_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_3782_, v___y_3783_, v___y_3784_, v___y_3785_, v___y_3786_, v___y_3787_);
lean_dec(v___y_3787_);
lean_dec_ref(v___y_3786_);
lean_dec(v___y_3785_);
lean_dec_ref(v___y_3784_);
lean_dec(v___y_3783_);
return v_res_3789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object* v_c_3790_, lean_object* v___y_3791_, lean_object* v___y_3792_, lean_object* v___y_3793_, lean_object* v___y_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_){
_start:
{
lean_object* v_res_3797_; 
v_res_3797_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_3790_, v___y_3791_, v___y_3792_, v___y_3793_, v___y_3794_, v___y_3795_);
lean_dec(v___y_3795_);
lean_dec_ref(v___y_3794_);
lean_dec(v___y_3793_);
lean_dec_ref(v___y_3792_);
lean_dec(v___y_3791_);
return v_res_3797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object* v_c_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_){
_start:
{
lean_object* v_res_3805_; 
v_res_3805_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_);
lean_dec(v___y_3803_);
lean_dec_ref(v___y_3802_);
lean_dec(v___y_3801_);
lean_dec_ref(v___y_3800_);
lean_dec(v___y_3799_);
return v_res_3805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object* v_info_3806_, lean_object* v_c_3807_, lean_object* v___y_3808_, lean_object* v___y_3809_, lean_object* v___y_3810_, lean_object* v___y_3811_, lean_object* v___y_3812_, lean_object* v___y_3813_){
_start:
{
lean_object* v_res_3814_; 
v_res_3814_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_info_3806_, v_c_3807_, v___y_3808_, v___y_3809_, v___y_3810_, v___y_3811_, v___y_3812_);
lean_dec(v___y_3812_);
lean_dec_ref(v___y_3811_);
lean_dec(v___y_3810_);
lean_dec_ref(v___y_3809_);
lean_dec(v___y_3808_);
lean_dec_ref(v_info_3806_);
return v_res_3814_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed(lean_object* v___x_3815_, lean_object* v_sz_3816_, lean_object* v_i_3817_, lean_object* v_bs_3818_, lean_object* v___y_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_){
_start:
{
size_t v_sz_boxed_3825_; size_t v_i_boxed_3826_; lean_object* v_res_3827_; 
v_sz_boxed_3825_ = lean_unbox_usize(v_sz_3816_);
lean_dec(v_sz_3816_);
v_i_boxed_3826_ = lean_unbox_usize(v_i_3817_);
lean_dec(v_i_3817_);
v_res_3827_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(v___x_3815_, v_sz_boxed_3825_, v_i_boxed_3826_, v_bs_3818_, v___y_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_);
lean_dec(v___y_3823_);
lean_dec_ref(v___y_3822_);
lean_dec(v___y_3821_);
lean_dec_ref(v___y_3820_);
lean_dec(v___y_3819_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object* v_c_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_){
_start:
{
lean_object* v_res_3835_; 
v_res_3835_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_3828_, v___y_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
lean_dec(v___y_3829_);
lean_dec_ref(v_c_3828_);
return v_res_3835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed(lean_object* v___x_3836_, lean_object* v_sz_3837_, lean_object* v_i_3838_, lean_object* v_bs_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_){
_start:
{
size_t v_sz_boxed_3846_; size_t v_i_boxed_3847_; lean_object* v_res_3848_; 
v_sz_boxed_3846_ = lean_unbox_usize(v_sz_3837_);
lean_dec(v_sz_3837_);
v_i_boxed_3847_ = lean_unbox_usize(v_i_3838_);
lean_dec(v_i_3838_);
v_res_3848_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(v___x_3836_, v_sz_boxed_3846_, v_i_boxed_3847_, v_bs_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
lean_dec(v___y_3844_);
lean_dec_ref(v___y_3843_);
lean_dec(v___y_3842_);
lean_dec_ref(v___y_3841_);
lean_dec(v___y_3840_);
return v_res_3848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object* v_code_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_){
_start:
{
lean_object* v_res_3856_; 
v_res_3856_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_);
lean_dec(v___y_3854_);
lean_dec_ref(v___y_3853_);
lean_dec(v___y_3852_);
lean_dec_ref(v___y_3851_);
lean_dec(v___y_3850_);
return v_res_3856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object* v_c_3857_, lean_object* v_x_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v___x_3865_; 
v___x_3865_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_3857_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_, v___y_3863_);
return v___x_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object* v_c_3866_, lean_object* v_x_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_, lean_object* v___y_3870_, lean_object* v___y_3871_, lean_object* v___y_3872_, lean_object* v___y_3873_){
_start:
{
lean_object* v_res_3874_; 
v_res_3874_ = l_Lean_Compiler_LCNF_casesTaskToMono(v_c_3866_, v_x_3867_, v___y_3868_, v___y_3869_, v___y_3870_, v___y_3871_, v___y_3872_);
lean_dec(v___y_3872_);
lean_dec_ref(v___y_3871_);
lean_dec(v___y_3870_);
lean_dec_ref(v___y_3869_);
lean_dec(v___y_3868_);
return v_res_3874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object* v_c_3875_, lean_object* v_x_3876_, lean_object* v___y_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_){
_start:
{
lean_object* v___x_3883_; 
v___x_3883_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_3875_, v___y_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_);
return v___x_3883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object* v_c_3884_, lean_object* v_x_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_, lean_object* v___y_3889_, lean_object* v___y_3890_, lean_object* v___y_3891_){
_start:
{
lean_object* v_res_3892_; 
v_res_3892_ = l_Lean_Compiler_LCNF_casesThunkToMono(v_c_3884_, v_x_3885_, v___y_3886_, v___y_3887_, v___y_3888_, v___y_3889_, v___y_3890_);
lean_dec(v___y_3890_);
lean_dec_ref(v___y_3889_);
lean_dec(v___y_3888_);
lean_dec_ref(v___y_3887_);
lean_dec(v___y_3886_);
lean_dec_ref(v_c_3884_);
return v_res_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono(lean_object* v_c_3893_, lean_object* v_x_3894_, lean_object* v___y_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_){
_start:
{
lean_object* v___x_3901_; 
v___x_3901_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_3893_, v___y_3895_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_);
return v___x_3901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___boxed(lean_object* v_c_3902_, lean_object* v_x_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_, lean_object* v___y_3907_, lean_object* v___y_3908_, lean_object* v___y_3909_){
_start:
{
lean_object* v_res_3910_; 
v_res_3910_ = l_Lean_Compiler_LCNF_casesFloat32ToMono(v_c_3902_, v_x_3903_, v___y_3904_, v___y_3905_, v___y_3906_, v___y_3907_, v___y_3908_);
lean_dec(v___y_3908_);
lean_dec_ref(v___y_3907_);
lean_dec(v___y_3906_);
lean_dec_ref(v___y_3905_);
lean_dec(v___y_3904_);
return v_res_3910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono(lean_object* v_c_3911_, lean_object* v_x_3912_, lean_object* v___y_3913_, lean_object* v___y_3914_, lean_object* v___y_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_){
_start:
{
lean_object* v___x_3919_; 
v___x_3919_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_3911_, v___y_3913_, v___y_3914_, v___y_3915_, v___y_3916_, v___y_3917_);
return v___x_3919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___boxed(lean_object* v_c_3920_, lean_object* v_x_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_){
_start:
{
lean_object* v_res_3928_; 
v_res_3928_ = l_Lean_Compiler_LCNF_casesFloatToMono(v_c_3920_, v_x_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_, v___y_3926_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
lean_dec(v___y_3924_);
lean_dec_ref(v___y_3923_);
lean_dec(v___y_3922_);
return v_res_3928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object* v_c_3929_, lean_object* v_x_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_, lean_object* v___y_3934_, lean_object* v___y_3935_){
_start:
{
lean_object* v___x_3937_; 
v___x_3937_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_3929_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_);
return v___x_3937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object* v_c_3938_, lean_object* v_x_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v_res_3946_; 
v_res_3946_ = l_Lean_Compiler_LCNF_casesStringToMono(v_c_3938_, v_x_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_);
lean_dec(v___y_3944_);
lean_dec_ref(v___y_3943_);
lean_dec(v___y_3942_);
lean_dec_ref(v___y_3941_);
lean_dec(v___y_3940_);
return v_res_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object* v_c_3947_, lean_object* v_x_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_){
_start:
{
lean_object* v___x_3955_; 
v___x_3955_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_3947_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_);
return v___x_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object* v_c_3956_, lean_object* v_x_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_, lean_object* v___y_3963_){
_start:
{
lean_object* v_res_3964_; 
v_res_3964_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono(v_c_3956_, v_x_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_, v___y_3962_);
lean_dec(v___y_3962_);
lean_dec_ref(v___y_3961_);
lean_dec(v___y_3960_);
lean_dec_ref(v___y_3959_);
lean_dec(v___y_3958_);
return v_res_3964_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object* v_c_3965_, lean_object* v_x_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_){
_start:
{
lean_object* v___x_3973_; 
v___x_3973_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_3965_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_);
return v___x_3973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object* v_c_3974_, lean_object* v_x_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_){
_start:
{
lean_object* v_res_3982_; 
v_res_3982_ = l_Lean_Compiler_LCNF_casesByteArrayToMono(v_c_3974_, v_x_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_);
lean_dec(v___y_3980_);
lean_dec_ref(v___y_3979_);
lean_dec(v___y_3978_);
lean_dec_ref(v___y_3977_);
lean_dec(v___y_3976_);
return v_res_3982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object* v_c_3983_, lean_object* v_x_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_){
_start:
{
lean_object* v___x_3991_; 
v___x_3991_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_3983_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_, v___y_3989_);
return v___x_3991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object* v_c_3992_, lean_object* v_x_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_){
_start:
{
lean_object* v_res_4000_; 
v_res_4000_ = l_Lean_Compiler_LCNF_casesArrayToMono(v_c_3992_, v_x_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_, v___y_3998_);
lean_dec(v___y_3998_);
lean_dec_ref(v___y_3997_);
lean_dec(v___y_3996_);
lean_dec_ref(v___y_3995_);
lean_dec(v___y_3994_);
return v_res_4000_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object* v_c_4001_, lean_object* v_uintName_4002_, lean_object* v_x_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_){
_start:
{
lean_object* v___x_4010_; 
v___x_4010_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_4001_, v_uintName_4002_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_);
return v___x_4010_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object* v_c_4011_, lean_object* v_uintName_4012_, lean_object* v_x_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v_res_4020_; 
v_res_4020_ = l_Lean_Compiler_LCNF_casesUIntToMono(v_c_4011_, v_uintName_4012_, v_x_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
lean_dec(v___y_4016_);
lean_dec_ref(v___y_4015_);
lean_dec(v___y_4014_);
return v_res_4020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object* v_c_4021_, lean_object* v_x_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_){
_start:
{
lean_object* v___x_4029_; 
v___x_4029_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_4021_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_);
return v___x_4029_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object* v_c_4030_, lean_object* v_x_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_){
_start:
{
lean_object* v_res_4038_; 
v_res_4038_ = l_Lean_Compiler_LCNF_casesIntToMono(v_c_4030_, v_x_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
lean_dec_ref(v___y_4033_);
lean_dec(v___y_4032_);
return v_res_4038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object* v_c_4039_, lean_object* v_x_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
lean_object* v___x_4047_; 
v___x_4047_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_4039_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_, v___y_4045_);
return v___x_4047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object* v_c_4048_, lean_object* v_x_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_){
_start:
{
lean_object* v_res_4056_; 
v_res_4056_ = l_Lean_Compiler_LCNF_casesNatToMono(v_c_4048_, v_x_4049_, v___y_4050_, v___y_4051_, v___y_4052_, v___y_4053_, v___y_4054_);
lean_dec(v___y_4054_);
lean_dec_ref(v___y_4053_);
lean_dec(v___y_4052_);
lean_dec_ref(v___y_4051_);
lean_dec(v___y_4050_);
return v_res_4056_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t v_sz_4057_, size_t v_i_4058_, lean_object* v_bs_4059_, lean_object* v___y_4060_, lean_object* v___y_4061_, lean_object* v___y_4062_, lean_object* v___y_4063_, lean_object* v___y_4064_){
_start:
{
lean_object* v___x_4066_; 
v___x_4066_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4057_, v_i_4058_, v_bs_4059_, v___y_4060_, v___y_4062_, v___y_4063_, v___y_4064_);
return v___x_4066_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object* v_sz_4067_, lean_object* v_i_4068_, lean_object* v_bs_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
size_t v_sz_boxed_4076_; size_t v_i_boxed_4077_; lean_object* v_res_4078_; 
v_sz_boxed_4076_ = lean_unbox_usize(v_sz_4067_);
lean_dec(v_sz_4067_);
v_i_boxed_4077_ = lean_unbox_usize(v_i_4068_);
lean_dec(v_i_4068_);
v_res_4078_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(v_sz_boxed_4076_, v_i_boxed_4077_, v_bs_4069_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
lean_dec(v___y_4070_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object* v_f_4079_, lean_object* v_v_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_){
_start:
{
if (lean_obj_tag(v_v_4080_) == 0)
{
lean_object* v_code_4087_; lean_object* v___x_4089_; uint8_t v_isShared_4090_; uint8_t v_isSharedCheck_4111_; 
v_code_4087_ = lean_ctor_get(v_v_4080_, 0);
v_isSharedCheck_4111_ = !lean_is_exclusive(v_v_4080_);
if (v_isSharedCheck_4111_ == 0)
{
v___x_4089_ = v_v_4080_;
v_isShared_4090_ = v_isSharedCheck_4111_;
goto v_resetjp_4088_;
}
else
{
lean_inc(v_code_4087_);
lean_dec(v_v_4080_);
v___x_4089_ = lean_box(0);
v_isShared_4090_ = v_isSharedCheck_4111_;
goto v_resetjp_4088_;
}
v_resetjp_4088_:
{
lean_object* v___x_4091_; 
lean_inc(v___y_4085_);
lean_inc_ref(v___y_4084_);
lean_inc(v___y_4083_);
lean_inc_ref(v___y_4082_);
lean_inc(v___y_4081_);
v___x_4091_ = lean_apply_7(v_f_4079_, v_code_4087_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, lean_box(0));
if (lean_obj_tag(v___x_4091_) == 0)
{
lean_object* v_a_4092_; lean_object* v___x_4094_; uint8_t v_isShared_4095_; uint8_t v_isSharedCheck_4102_; 
v_a_4092_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4102_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4102_ == 0)
{
v___x_4094_ = v___x_4091_;
v_isShared_4095_ = v_isSharedCheck_4102_;
goto v_resetjp_4093_;
}
else
{
lean_inc(v_a_4092_);
lean_dec(v___x_4091_);
v___x_4094_ = lean_box(0);
v_isShared_4095_ = v_isSharedCheck_4102_;
goto v_resetjp_4093_;
}
v_resetjp_4093_:
{
lean_object* v___x_4097_; 
if (v_isShared_4090_ == 0)
{
lean_ctor_set(v___x_4089_, 0, v_a_4092_);
v___x_4097_ = v___x_4089_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4101_; 
v_reuseFailAlloc_4101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4101_, 0, v_a_4092_);
v___x_4097_ = v_reuseFailAlloc_4101_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
lean_object* v___x_4099_; 
if (v_isShared_4095_ == 0)
{
lean_ctor_set(v___x_4094_, 0, v___x_4097_);
v___x_4099_ = v___x_4094_;
goto v_reusejp_4098_;
}
else
{
lean_object* v_reuseFailAlloc_4100_; 
v_reuseFailAlloc_4100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4100_, 0, v___x_4097_);
v___x_4099_ = v_reuseFailAlloc_4100_;
goto v_reusejp_4098_;
}
v_reusejp_4098_:
{
return v___x_4099_;
}
}
}
}
else
{
lean_object* v_a_4103_; lean_object* v___x_4105_; uint8_t v_isShared_4106_; uint8_t v_isSharedCheck_4110_; 
lean_del_object(v___x_4089_);
v_a_4103_ = lean_ctor_get(v___x_4091_, 0);
v_isSharedCheck_4110_ = !lean_is_exclusive(v___x_4091_);
if (v_isSharedCheck_4110_ == 0)
{
v___x_4105_ = v___x_4091_;
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
else
{
lean_inc(v_a_4103_);
lean_dec(v___x_4091_);
v___x_4105_ = lean_box(0);
v_isShared_4106_ = v_isSharedCheck_4110_;
goto v_resetjp_4104_;
}
v_resetjp_4104_:
{
lean_object* v___x_4108_; 
if (v_isShared_4106_ == 0)
{
v___x_4108_ = v___x_4105_;
goto v_reusejp_4107_;
}
else
{
lean_object* v_reuseFailAlloc_4109_; 
v_reuseFailAlloc_4109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4109_, 0, v_a_4103_);
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
}
else
{
lean_object* v___x_4112_; 
lean_dec_ref(v_f_4079_);
v___x_4112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4112_, 0, v_v_4080_);
return v___x_4112_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object* v_f_4113_, lean_object* v_v_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_){
_start:
{
lean_object* v_res_4121_; 
v_res_4121_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4113_, v_v_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
lean_dec(v___y_4119_);
lean_dec_ref(v___y_4118_);
lean_dec(v___y_4117_);
lean_dec_ref(v___y_4116_);
lean_dec(v___y_4115_);
return v_res_4121_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t v_pu_4122_, lean_object* v_f_4123_, lean_object* v_v_4124_, lean_object* v___y_4125_, lean_object* v___y_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_){
_start:
{
lean_object* v___x_4131_; 
v___x_4131_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4123_, v_v_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_);
return v___x_4131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object* v_pu_4132_, lean_object* v_f_4133_, lean_object* v_v_4134_, lean_object* v___y_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_){
_start:
{
uint8_t v_pu_boxed_4141_; lean_object* v_res_4142_; 
v_pu_boxed_4141_ = lean_unbox(v_pu_4132_);
v_res_4142_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(v_pu_boxed_4141_, v_f_4133_, v_v_4134_, v___y_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec(v___y_4137_);
lean_dec_ref(v___y_4136_);
lean_dec(v___y_4135_);
return v_res_4142_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object* v_decl_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_, lean_object* v___y_4147_, lean_object* v___y_4148_, lean_object* v___y_4149_){
_start:
{
lean_object* v_toSignature_4151_; lean_object* v_value_4152_; uint8_t v_recursive_4153_; lean_object* v_inlineAttr_x3f_4154_; lean_object* v___x_4156_; uint8_t v_isShared_4157_; uint8_t v_isSharedCheck_4224_; 
v_toSignature_4151_ = lean_ctor_get(v_decl_4144_, 0);
v_value_4152_ = lean_ctor_get(v_decl_4144_, 1);
v_recursive_4153_ = lean_ctor_get_uint8(v_decl_4144_, sizeof(void*)*3);
v_inlineAttr_x3f_4154_ = lean_ctor_get(v_decl_4144_, 2);
v_isSharedCheck_4224_ = !lean_is_exclusive(v_decl_4144_);
if (v_isSharedCheck_4224_ == 0)
{
v___x_4156_ = v_decl_4144_;
v_isShared_4157_ = v_isSharedCheck_4224_;
goto v_resetjp_4155_;
}
else
{
lean_inc(v_inlineAttr_x3f_4154_);
lean_inc(v_value_4152_);
lean_inc(v_toSignature_4151_);
lean_dec(v_decl_4144_);
v___x_4156_ = lean_box(0);
v_isShared_4157_ = v_isSharedCheck_4224_;
goto v_resetjp_4155_;
}
v_resetjp_4155_:
{
lean_object* v_name_4158_; lean_object* v_type_4159_; lean_object* v_params_4160_; uint8_t v_safe_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4222_; 
v_name_4158_ = lean_ctor_get(v_toSignature_4151_, 0);
v_type_4159_ = lean_ctor_get(v_toSignature_4151_, 2);
v_params_4160_ = lean_ctor_get(v_toSignature_4151_, 3);
v_safe_4161_ = lean_ctor_get_uint8(v_toSignature_4151_, sizeof(void*)*4);
v_isSharedCheck_4222_ = !lean_is_exclusive(v_toSignature_4151_);
if (v_isSharedCheck_4222_ == 0)
{
lean_object* v_unused_4223_; 
v_unused_4223_ = lean_ctor_get(v_toSignature_4151_, 1);
lean_dec(v_unused_4223_);
v___x_4163_ = v_toSignature_4151_;
v_isShared_4164_ = v_isSharedCheck_4222_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_params_4160_);
lean_inc(v_type_4159_);
lean_inc(v_name_4158_);
lean_dec(v_toSignature_4151_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4222_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___f_4165_; lean_object* v___x_4166_; 
v___f_4165_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0));
v___x_4166_ = l_Lean_Compiler_LCNF_toMonoType(v_type_4159_, v___y_4148_, v___y_4149_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_object* v_a_4167_; size_t v_sz_4168_; size_t v___x_4169_; lean_object* v___x_4170_; 
v_a_4167_ = lean_ctor_get(v___x_4166_, 0);
lean_inc(v_a_4167_);
lean_dec_ref_known(v___x_4166_, 1);
v_sz_4168_ = lean_array_size(v_params_4160_);
v___x_4169_ = ((size_t)0ULL);
v___x_4170_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4168_, v___x_4169_, v_params_4160_, v___y_4145_, v___y_4147_, v___y_4148_, v___y_4149_);
if (lean_obj_tag(v___x_4170_) == 0)
{
lean_object* v_a_4171_; lean_object* v___x_4172_; 
v_a_4171_ = lean_ctor_get(v___x_4170_, 0);
lean_inc(v_a_4171_);
lean_dec_ref_known(v___x_4170_, 1);
v___x_4172_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v___f_4165_, v_value_4152_, v___y_4145_, v___y_4146_, v___y_4147_, v___y_4148_, v___y_4149_);
if (lean_obj_tag(v___x_4172_) == 0)
{
lean_object* v_a_4173_; lean_object* v___x_4174_; lean_object* v___x_4176_; 
v_a_4173_ = lean_ctor_get(v___x_4172_, 0);
lean_inc(v_a_4173_);
lean_dec_ref_known(v___x_4172_, 1);
v___x_4174_ = lean_box(0);
if (v_isShared_4164_ == 0)
{
lean_ctor_set(v___x_4163_, 3, v_a_4171_);
lean_ctor_set(v___x_4163_, 2, v_a_4167_);
lean_ctor_set(v___x_4163_, 1, v___x_4174_);
v___x_4176_ = v___x_4163_;
goto v_reusejp_4175_;
}
else
{
lean_object* v_reuseFailAlloc_4197_; 
v_reuseFailAlloc_4197_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4197_, 0, v_name_4158_);
lean_ctor_set(v_reuseFailAlloc_4197_, 1, v___x_4174_);
lean_ctor_set(v_reuseFailAlloc_4197_, 2, v_a_4167_);
lean_ctor_set(v_reuseFailAlloc_4197_, 3, v_a_4171_);
lean_ctor_set_uint8(v_reuseFailAlloc_4197_, sizeof(void*)*4, v_safe_4161_);
v___x_4176_ = v_reuseFailAlloc_4197_;
goto v_reusejp_4175_;
}
v_reusejp_4175_:
{
lean_object* v___x_4178_; 
if (v_isShared_4157_ == 0)
{
lean_ctor_set(v___x_4156_, 1, v_a_4173_);
lean_ctor_set(v___x_4156_, 0, v___x_4176_);
v___x_4178_ = v___x_4156_;
goto v_reusejp_4177_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v___x_4176_);
lean_ctor_set(v_reuseFailAlloc_4196_, 1, v_a_4173_);
lean_ctor_set(v_reuseFailAlloc_4196_, 2, v_inlineAttr_x3f_4154_);
lean_ctor_set_uint8(v_reuseFailAlloc_4196_, sizeof(void*)*3, v_recursive_4153_);
v___x_4178_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4177_;
}
v_reusejp_4177_:
{
lean_object* v___x_4179_; 
lean_inc_ref(v___x_4178_);
v___x_4179_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_4178_, v___y_4149_);
if (lean_obj_tag(v___x_4179_) == 0)
{
lean_object* v___x_4181_; uint8_t v_isShared_4182_; uint8_t v_isSharedCheck_4186_; 
v_isSharedCheck_4186_ = !lean_is_exclusive(v___x_4179_);
if (v_isSharedCheck_4186_ == 0)
{
lean_object* v_unused_4187_; 
v_unused_4187_ = lean_ctor_get(v___x_4179_, 0);
lean_dec(v_unused_4187_);
v___x_4181_ = v___x_4179_;
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
else
{
lean_dec(v___x_4179_);
v___x_4181_ = lean_box(0);
v_isShared_4182_ = v_isSharedCheck_4186_;
goto v_resetjp_4180_;
}
v_resetjp_4180_:
{
lean_object* v___x_4184_; 
if (v_isShared_4182_ == 0)
{
lean_ctor_set(v___x_4181_, 0, v___x_4178_);
v___x_4184_ = v___x_4181_;
goto v_reusejp_4183_;
}
else
{
lean_object* v_reuseFailAlloc_4185_; 
v_reuseFailAlloc_4185_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4185_, 0, v___x_4178_);
v___x_4184_ = v_reuseFailAlloc_4185_;
goto v_reusejp_4183_;
}
v_reusejp_4183_:
{
return v___x_4184_;
}
}
}
else
{
lean_object* v_a_4188_; lean_object* v___x_4190_; uint8_t v_isShared_4191_; uint8_t v_isSharedCheck_4195_; 
lean_dec_ref(v___x_4178_);
v_a_4188_ = lean_ctor_get(v___x_4179_, 0);
v_isSharedCheck_4195_ = !lean_is_exclusive(v___x_4179_);
if (v_isSharedCheck_4195_ == 0)
{
v___x_4190_ = v___x_4179_;
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
else
{
lean_inc(v_a_4188_);
lean_dec(v___x_4179_);
v___x_4190_ = lean_box(0);
v_isShared_4191_ = v_isSharedCheck_4195_;
goto v_resetjp_4189_;
}
v_resetjp_4189_:
{
lean_object* v___x_4193_; 
if (v_isShared_4191_ == 0)
{
v___x_4193_ = v___x_4190_;
goto v_reusejp_4192_;
}
else
{
lean_object* v_reuseFailAlloc_4194_; 
v_reuseFailAlloc_4194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4194_, 0, v_a_4188_);
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
}
}
else
{
lean_object* v_a_4198_; lean_object* v___x_4200_; uint8_t v_isShared_4201_; uint8_t v_isSharedCheck_4205_; 
lean_dec(v_a_4171_);
lean_dec(v_a_4167_);
lean_del_object(v___x_4163_);
lean_dec(v_name_4158_);
lean_del_object(v___x_4156_);
lean_dec(v_inlineAttr_x3f_4154_);
v_a_4198_ = lean_ctor_get(v___x_4172_, 0);
v_isSharedCheck_4205_ = !lean_is_exclusive(v___x_4172_);
if (v_isSharedCheck_4205_ == 0)
{
v___x_4200_ = v___x_4172_;
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
else
{
lean_inc(v_a_4198_);
lean_dec(v___x_4172_);
v___x_4200_ = lean_box(0);
v_isShared_4201_ = v_isSharedCheck_4205_;
goto v_resetjp_4199_;
}
v_resetjp_4199_:
{
lean_object* v___x_4203_; 
if (v_isShared_4201_ == 0)
{
v___x_4203_ = v___x_4200_;
goto v_reusejp_4202_;
}
else
{
lean_object* v_reuseFailAlloc_4204_; 
v_reuseFailAlloc_4204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4204_, 0, v_a_4198_);
v___x_4203_ = v_reuseFailAlloc_4204_;
goto v_reusejp_4202_;
}
v_reusejp_4202_:
{
return v___x_4203_;
}
}
}
}
else
{
lean_object* v_a_4206_; lean_object* v___x_4208_; uint8_t v_isShared_4209_; uint8_t v_isSharedCheck_4213_; 
lean_dec(v_a_4167_);
lean_del_object(v___x_4163_);
lean_dec(v_name_4158_);
lean_del_object(v___x_4156_);
lean_dec(v_inlineAttr_x3f_4154_);
lean_dec_ref(v_value_4152_);
v_a_4206_ = lean_ctor_get(v___x_4170_, 0);
v_isSharedCheck_4213_ = !lean_is_exclusive(v___x_4170_);
if (v_isSharedCheck_4213_ == 0)
{
v___x_4208_ = v___x_4170_;
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
else
{
lean_inc(v_a_4206_);
lean_dec(v___x_4170_);
v___x_4208_ = lean_box(0);
v_isShared_4209_ = v_isSharedCheck_4213_;
goto v_resetjp_4207_;
}
v_resetjp_4207_:
{
lean_object* v___x_4211_; 
if (v_isShared_4209_ == 0)
{
v___x_4211_ = v___x_4208_;
goto v_reusejp_4210_;
}
else
{
lean_object* v_reuseFailAlloc_4212_; 
v_reuseFailAlloc_4212_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4212_, 0, v_a_4206_);
v___x_4211_ = v_reuseFailAlloc_4212_;
goto v_reusejp_4210_;
}
v_reusejp_4210_:
{
return v___x_4211_;
}
}
}
}
else
{
lean_object* v_a_4214_; lean_object* v___x_4216_; uint8_t v_isShared_4217_; uint8_t v_isSharedCheck_4221_; 
lean_del_object(v___x_4163_);
lean_dec_ref(v_params_4160_);
lean_dec(v_name_4158_);
lean_del_object(v___x_4156_);
lean_dec(v_inlineAttr_x3f_4154_);
lean_dec_ref(v_value_4152_);
v_a_4214_ = lean_ctor_get(v___x_4166_, 0);
v_isSharedCheck_4221_ = !lean_is_exclusive(v___x_4166_);
if (v_isSharedCheck_4221_ == 0)
{
v___x_4216_ = v___x_4166_;
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
else
{
lean_inc(v_a_4214_);
lean_dec(v___x_4166_);
v___x_4216_ = lean_box(0);
v_isShared_4217_ = v_isSharedCheck_4221_;
goto v_resetjp_4215_;
}
v_resetjp_4215_:
{
lean_object* v___x_4219_; 
if (v_isShared_4217_ == 0)
{
v___x_4219_ = v___x_4216_;
goto v_reusejp_4218_;
}
else
{
lean_object* v_reuseFailAlloc_4220_; 
v_reuseFailAlloc_4220_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4220_, 0, v_a_4214_);
v___x_4219_ = v_reuseFailAlloc_4220_;
goto v_reusejp_4218_;
}
v_reusejp_4218_:
{
return v___x_4219_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object* v_decl_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_){
_start:
{
lean_object* v_res_4232_; 
v_res_4232_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_);
lean_dec(v___y_4230_);
lean_dec_ref(v___y_4229_);
lean_dec(v___y_4228_);
lean_dec_ref(v___y_4227_);
lean_dec(v___y_4226_);
return v_res_4232_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__0(void){
_start:
{
lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; 
v___x_4233_ = lean_box(0);
v___x_4234_ = lean_unsigned_to_nat(16u);
v___x_4235_ = lean_mk_array(v___x_4234_, v___x_4233_);
return v___x_4235_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__1(void){
_start:
{
lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; 
v___x_4236_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_toMono___closed__0, &l_Lean_Compiler_LCNF_Decl_toMono___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__0);
v___x_4237_ = lean_unsigned_to_nat(0u);
v___x_4238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___x_4237_);
lean_ctor_set(v___x_4238_, 1, v___x_4236_);
return v___x_4238_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object* v_decl_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_, lean_object* v___y_4243_){
_start:
{
lean_object* v___x_4245_; lean_object* v___x_4246_; lean_object* v___x_4247_; 
v___x_4245_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_toMono___closed__1, &l_Lean_Compiler_LCNF_Decl_toMono___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__1);
v___x_4246_ = lean_st_mk_ref(v___x_4245_);
v___x_4247_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4239_, v___x_4246_, v___y_4240_, v___y_4241_, v___y_4242_, v___y_4243_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4256_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4256_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4256_ == 0)
{
v___x_4250_ = v___x_4247_;
v_isShared_4251_ = v_isSharedCheck_4256_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_a_4248_);
lean_dec(v___x_4247_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4256_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v___x_4252_; lean_object* v___x_4254_; 
v___x_4252_ = lean_st_ref_get(v___x_4246_);
lean_dec(v___x_4246_);
lean_dec(v___x_4252_);
if (v_isShared_4251_ == 0)
{
v___x_4254_ = v___x_4250_;
goto v_reusejp_4253_;
}
else
{
lean_object* v_reuseFailAlloc_4255_; 
v_reuseFailAlloc_4255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4255_, 0, v_a_4248_);
v___x_4254_ = v_reuseFailAlloc_4255_;
goto v_reusejp_4253_;
}
v_reusejp_4253_:
{
return v___x_4254_;
}
}
}
else
{
lean_dec(v___x_4246_);
return v___x_4247_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object* v_decl_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_, lean_object* v___y_4262_){
_start:
{
lean_object* v_res_4263_; 
v_res_4263_ = l_Lean_Compiler_LCNF_Decl_toMono(v_decl_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_);
lean_dec(v___y_4261_);
lean_dec_ref(v___y_4260_);
lean_dec(v___y_4259_);
lean_dec_ref(v___y_4258_);
return v_res_4263_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t v_sz_4264_, size_t v_i_4265_, lean_object* v_bs_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_){
_start:
{
uint8_t v___x_4272_; 
v___x_4272_ = lean_usize_dec_lt(v_i_4265_, v_sz_4264_);
if (v___x_4272_ == 0)
{
lean_object* v___x_4273_; 
v___x_4273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4273_, 0, v_bs_4266_);
return v___x_4273_;
}
else
{
lean_object* v_v_4274_; lean_object* v___x_4275_; lean_object* v_bs_x27_4276_; lean_object* v___x_4277_; 
v_v_4274_ = lean_array_uget(v_bs_4266_, v_i_4265_);
v___x_4275_ = lean_unsigned_to_nat(0u);
v_bs_x27_4276_ = lean_array_uset(v_bs_4266_, v_i_4265_, v___x_4275_);
v___x_4277_ = l_Lean_Compiler_LCNF_Decl_toMono(v_v_4274_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_);
if (lean_obj_tag(v___x_4277_) == 0)
{
lean_object* v_a_4278_; size_t v___x_4279_; size_t v___x_4280_; lean_object* v___x_4281_; 
v_a_4278_ = lean_ctor_get(v___x_4277_, 0);
lean_inc(v_a_4278_);
lean_dec_ref_known(v___x_4277_, 1);
v___x_4279_ = ((size_t)1ULL);
v___x_4280_ = lean_usize_add(v_i_4265_, v___x_4279_);
v___x_4281_ = lean_array_uset(v_bs_x27_4276_, v_i_4265_, v_a_4278_);
v_i_4265_ = v___x_4280_;
v_bs_4266_ = v___x_4281_;
goto _start;
}
else
{
lean_object* v_a_4283_; lean_object* v___x_4285_; uint8_t v_isShared_4286_; uint8_t v_isSharedCheck_4290_; 
lean_dec_ref(v_bs_x27_4276_);
v_a_4283_ = lean_ctor_get(v___x_4277_, 0);
v_isSharedCheck_4290_ = !lean_is_exclusive(v___x_4277_);
if (v_isSharedCheck_4290_ == 0)
{
v___x_4285_ = v___x_4277_;
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
else
{
lean_inc(v_a_4283_);
lean_dec(v___x_4277_);
v___x_4285_ = lean_box(0);
v_isShared_4286_ = v_isSharedCheck_4290_;
goto v_resetjp_4284_;
}
v_resetjp_4284_:
{
lean_object* v___x_4288_; 
if (v_isShared_4286_ == 0)
{
v___x_4288_ = v___x_4285_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v_a_4283_);
v___x_4288_ = v_reuseFailAlloc_4289_;
goto v_reusejp_4287_;
}
v_reusejp_4287_:
{
return v___x_4288_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object* v_sz_4291_, lean_object* v_i_4292_, lean_object* v_bs_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_){
_start:
{
size_t v_sz_boxed_4299_; size_t v_i_boxed_4300_; lean_object* v_res_4301_; 
v_sz_boxed_4299_ = lean_unbox_usize(v_sz_4291_);
lean_dec(v_sz_4291_);
v_i_boxed_4300_ = lean_unbox_usize(v_i_4292_);
lean_dec(v_i_4292_);
v_res_4301_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_boxed_4299_, v_i_boxed_4300_, v_bs_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_);
lean_dec(v___y_4297_);
lean_dec_ref(v___y_4296_);
lean_dec(v___y_4295_);
lean_dec_ref(v___y_4294_);
return v_res_4301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object* v_x_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
size_t v_sz_4308_; size_t v___x_4309_; lean_object* v___x_4310_; 
v_sz_4308_ = lean_array_size(v_x_4302_);
v___x_4309_ = ((size_t)0ULL);
v___x_4310_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_4308_, v___x_4309_, v_x_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
return v___x_4310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object* v_x_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_){
_start:
{
lean_object* v_res_4317_; 
v_res_4317_ = l_Lean_Compiler_LCNF_toMono___lam__0(v_x_4311_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_);
lean_dec(v___y_4315_);
lean_dec_ref(v___y_4314_);
lean_dec(v___y_4313_);
lean_dec_ref(v___y_4312_);
return v_res_4317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4400_; uint8_t v___x_4401_; lean_object* v___x_4402_; lean_object* v___x_4403_; 
v___x_4400_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4401_ = 1;
v___x_4402_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4403_ = l_Lean_registerTraceClass(v___x_4400_, v___x_4401_, v___x_4402_);
return v___x_4403_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2____boxed(lean_object* v___y_4404_){
_start:
{
lean_object* v_res_4405_; 
v_res_4405_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
return v_res_4405_;
}
}
lean_object* runtime_initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_ImplementedByAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
lean_object* initialize_Lean_Compiler_NoncomputableAttr(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_MonoTypes(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ToMono(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_ImplementedByAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_NoncomputableAttr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_MonoTypes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ToMono(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ToMono(builtin);
}
#ifdef __cplusplus
}
#endif
