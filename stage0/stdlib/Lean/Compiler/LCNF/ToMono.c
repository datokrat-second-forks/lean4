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
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4_value;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg(lean_object* v_param_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v_fvarId_7_; lean_object* v_type_8_; lean_object* v___y_10_; lean_object* v___y_11_; lean_object* v___y_12_; uint8_t v___x_25_; 
v_fvarId_7_ = lean_ctor_get(v_param_1_, 0);
v_type_8_ = lean_ctor_get(v_param_1_, 2);
lean_inc_ref(v_type_8_);
v___x_25_ = l_Lean_Compiler_LCNF_isTypeFormerType(v_type_8_);
if (v___x_25_ == 0)
{
v___y_10_ = v_a_3_;
v___y_11_ = v_a_4_;
v___y_12_ = v_a_5_;
goto v___jp_9_;
}
else
{
lean_object* v___x_26_; lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_26_ = lean_st_ref_take(v_a_2_);
lean_inc(v_fvarId_7_);
v___x_27_ = l_Lean_FVarIdHashSet_insert(v___x_26_, v_fvarId_7_);
v___x_28_ = lean_st_ref_put(v_a_2_, v___x_27_);
v___y_10_ = v_a_3_;
v___y_11_ = v_a_4_;
v___y_12_ = v_a_5_;
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___redArg___boxed(lean_object* v_param_29_, lean_object* v_a_30_, lean_object* v_a_31_, lean_object* v_a_32_, lean_object* v_a_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_29_, v_a_30_, v_a_31_, v_a_32_, v_a_33_);
lean_dec(v_a_33_);
lean_dec_ref(v_a_32_);
lean_dec(v_a_31_);
lean_dec(v_a_30_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono(lean_object* v_param_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_){
_start:
{
lean_object* v___x_43_; 
v___x_43_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_param_36_, v_a_37_, v_a_39_, v_a_40_, v_a_41_);
return v___x_43_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Param_toMono___boxed(lean_object* v_param_44_, lean_object* v_a_45_, lean_object* v_a_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Compiler_LCNF_Param_toMono(v_param_44_, v_a_45_, v_a_46_, v_a_47_, v_a_48_, v_a_49_);
lean_dec(v_a_49_);
lean_dec_ref(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_a_46_);
lean_dec(v_a_45_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg(lean_object* v_arg_52_, lean_object* v_a_53_){
_start:
{
if (lean_obj_tag(v_arg_52_) == 1)
{
lean_object* v_fvarId_55_; lean_object* v___x_56_; uint8_t v___x_57_; 
v_fvarId_55_ = lean_ctor_get(v_arg_52_, 0);
v___x_56_ = lean_st_ref_get(v_a_53_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___redArg___boxed(lean_object* v_arg_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
lean_object* v_res_73_; 
v_res_73_ = l_Lean_Compiler_LCNF_argToMono___redArg(v_arg_70_, v_a_71_);
lean_dec(v_a_71_);
return v_res_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono(lean_object* v_arg_74_, lean_object* v_a_75_, lean_object* v_a_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_){
_start:
{
if (lean_obj_tag(v_arg_74_) == 1)
{
lean_object* v_fvarId_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v_fvarId_81_ = lean_ctor_get(v_arg_74_, 0);
v___x_82_ = lean_st_ref_get(v_a_75_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argToMono___boxed(lean_object* v_arg_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
lean_object* v_res_103_; 
v_res_103_ = l_Lean_Compiler_LCNF_argToMono(v_arg_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_);
lean_dec(v_a_101_);
lean_dec_ref(v_a_100_);
lean_dec(v_a_99_);
lean_dec_ref(v_a_98_);
lean_dec(v_a_97_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType(lean_object* v_args_163_, lean_object* v_type_164_, lean_object* v_a_165_, lean_object* v_a_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_){
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
v___x_177_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_argsToMonoWithFnType_spec__0___redArg(v_args_163_, v_sz_175_, v___x_176_, v___x_174_, v_a_165_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_argsToMonoWithFnType___boxed(lean_object* v_args_195_, lean_object* v_type_196_, lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_, lean_object* v_a_201_, lean_object* v_a_202_){
_start:
{
lean_object* v_res_203_; 
v_res_203_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_195_, v_type_196_, v_a_197_, v_a_198_, v_a_199_, v_a_200_, v_a_201_);
lean_dec(v_a_201_);
lean_dec_ref(v_a_200_);
lean_dec(v_a_199_);
lean_dec_ref(v_a_198_);
lean_dec(v_a_197_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono(lean_object* v_ctorInfo_277_, lean_object* v_args_278_, lean_object* v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_){
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
v___x_297_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_295_, v___x_296_, v___x_294_, v_a_279_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ctorAppToMono___boxed(lean_object* v_ctorInfo_329_, lean_object* v_args_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_ctorInfo_329_, v_args_330_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_);
lean_dec(v_a_335_);
lean_dec_ref(v_a_334_);
lean_dec(v_a_333_);
lean_dec_ref(v_a_332_);
lean_dec(v_a_331_);
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
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0(void){
_start:
{
lean_object* v___x_365_; 
v___x_365_ = l_instMonadEIO___redArg();
return v___x_365_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5(void){
_start:
{
lean_object* v___x_370_; 
v___x_370_ = l_Lean_Compiler_LCNF_instInhabitedLetValue_default___redArg();
return v___x_370_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(lean_object* v_msg_371_, lean_object* v___y_372_, lean_object* v___y_373_, lean_object* v___y_374_, lean_object* v___y_375_, lean_object* v___y_376_){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v_toApplicative_380_; lean_object* v___x_382_; uint8_t v_isShared_383_; uint8_t v_isSharedCheck_442_; 
v___x_378_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_379_ = l_StateRefT_x27_instMonad___redArg(v___x_378_);
v_toApplicative_380_ = lean_ctor_get(v___x_379_, 0);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_379_);
if (v_isSharedCheck_442_ == 0)
{
lean_object* v_unused_443_; 
v_unused_443_ = lean_ctor_get(v___x_379_, 1);
lean_dec(v_unused_443_);
v___x_382_ = v___x_379_;
v_isShared_383_ = v_isSharedCheck_442_;
goto v_resetjp_381_;
}
else
{
lean_inc(v_toApplicative_380_);
lean_dec(v___x_379_);
v___x_382_ = lean_box(0);
v_isShared_383_ = v_isSharedCheck_442_;
goto v_resetjp_381_;
}
v_resetjp_381_:
{
lean_object* v_toFunctor_384_; lean_object* v_toSeq_385_; lean_object* v_toSeqLeft_386_; lean_object* v_toSeqRight_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_440_; 
v_toFunctor_384_ = lean_ctor_get(v_toApplicative_380_, 0);
v_toSeq_385_ = lean_ctor_get(v_toApplicative_380_, 2);
v_toSeqLeft_386_ = lean_ctor_get(v_toApplicative_380_, 3);
v_toSeqRight_387_ = lean_ctor_get(v_toApplicative_380_, 4);
v_isSharedCheck_440_ = !lean_is_exclusive(v_toApplicative_380_);
if (v_isSharedCheck_440_ == 0)
{
lean_object* v_unused_441_; 
v_unused_441_ = lean_ctor_get(v_toApplicative_380_, 1);
lean_dec(v_unused_441_);
v___x_389_ = v_toApplicative_380_;
v_isShared_390_ = v_isSharedCheck_440_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_toSeqRight_387_);
lean_inc(v_toSeqLeft_386_);
lean_inc(v_toSeq_385_);
lean_inc(v_toFunctor_384_);
lean_dec(v_toApplicative_380_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_440_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___f_391_; lean_object* v___f_392_; lean_object* v___f_393_; lean_object* v___f_394_; lean_object* v___x_395_; lean_object* v___f_396_; lean_object* v___f_397_; lean_object* v___f_398_; lean_object* v___x_400_; 
v___f_391_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_392_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_384_);
v___f_393_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_393_, 0, v_toFunctor_384_);
v___f_394_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_394_, 0, v_toFunctor_384_);
v___x_395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_395_, 0, v___f_393_);
lean_ctor_set(v___x_395_, 1, v___f_394_);
v___f_396_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_396_, 0, v_toSeqRight_387_);
v___f_397_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_397_, 0, v_toSeqLeft_386_);
v___f_398_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_398_, 0, v_toSeq_385_);
if (v_isShared_390_ == 0)
{
lean_ctor_set(v___x_389_, 4, v___f_396_);
lean_ctor_set(v___x_389_, 3, v___f_397_);
lean_ctor_set(v___x_389_, 2, v___f_398_);
lean_ctor_set(v___x_389_, 1, v___f_391_);
lean_ctor_set(v___x_389_, 0, v___x_395_);
v___x_400_ = v___x_389_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_439_, 1, v___f_391_);
lean_ctor_set(v_reuseFailAlloc_439_, 2, v___f_398_);
lean_ctor_set(v_reuseFailAlloc_439_, 3, v___f_397_);
lean_ctor_set(v_reuseFailAlloc_439_, 4, v___f_396_);
v___x_400_ = v_reuseFailAlloc_439_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
lean_object* v___x_402_; 
if (v_isShared_383_ == 0)
{
lean_ctor_set(v___x_382_, 1, v___f_392_);
lean_ctor_set(v___x_382_, 0, v___x_400_);
v___x_402_ = v___x_382_;
goto v_reusejp_401_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_400_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v___f_392_);
v___x_402_ = v_reuseFailAlloc_438_;
goto v_reusejp_401_;
}
v_reusejp_401_:
{
lean_object* v___x_403_; lean_object* v_toApplicative_404_; lean_object* v___x_406_; uint8_t v_isShared_407_; uint8_t v_isSharedCheck_436_; 
v___x_403_ = l_StateRefT_x27_instMonad___redArg(v___x_402_);
v_toApplicative_404_ = lean_ctor_get(v___x_403_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v___x_403_);
if (v_isSharedCheck_436_ == 0)
{
lean_object* v_unused_437_; 
v_unused_437_ = lean_ctor_get(v___x_403_, 1);
lean_dec(v_unused_437_);
v___x_406_ = v___x_403_;
v_isShared_407_ = v_isSharedCheck_436_;
goto v_resetjp_405_;
}
else
{
lean_inc(v_toApplicative_404_);
lean_dec(v___x_403_);
v___x_406_ = lean_box(0);
v_isShared_407_ = v_isSharedCheck_436_;
goto v_resetjp_405_;
}
v_resetjp_405_:
{
lean_object* v_toFunctor_408_; lean_object* v_toSeq_409_; lean_object* v_toSeqLeft_410_; lean_object* v_toSeqRight_411_; lean_object* v___x_413_; uint8_t v_isShared_414_; uint8_t v_isSharedCheck_434_; 
v_toFunctor_408_ = lean_ctor_get(v_toApplicative_404_, 0);
v_toSeq_409_ = lean_ctor_get(v_toApplicative_404_, 2);
v_toSeqLeft_410_ = lean_ctor_get(v_toApplicative_404_, 3);
v_toSeqRight_411_ = lean_ctor_get(v_toApplicative_404_, 4);
v_isSharedCheck_434_ = !lean_is_exclusive(v_toApplicative_404_);
if (v_isSharedCheck_434_ == 0)
{
lean_object* v_unused_435_; 
v_unused_435_ = lean_ctor_get(v_toApplicative_404_, 1);
lean_dec(v_unused_435_);
v___x_413_ = v_toApplicative_404_;
v_isShared_414_ = v_isSharedCheck_434_;
goto v_resetjp_412_;
}
else
{
lean_inc(v_toSeqRight_411_);
lean_inc(v_toSeqLeft_410_);
lean_inc(v_toSeq_409_);
lean_inc(v_toFunctor_408_);
lean_dec(v_toApplicative_404_);
v___x_413_ = lean_box(0);
v_isShared_414_ = v_isSharedCheck_434_;
goto v_resetjp_412_;
}
v_resetjp_412_:
{
lean_object* v___f_415_; lean_object* v___f_416_; lean_object* v___f_417_; lean_object* v___f_418_; lean_object* v___x_419_; lean_object* v___f_420_; lean_object* v___f_421_; lean_object* v___f_422_; lean_object* v___x_424_; 
v___f_415_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_416_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_408_);
v___f_417_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_417_, 0, v_toFunctor_408_);
v___f_418_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_418_, 0, v_toFunctor_408_);
v___x_419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_419_, 0, v___f_417_);
lean_ctor_set(v___x_419_, 1, v___f_418_);
v___f_420_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_420_, 0, v_toSeqRight_411_);
v___f_421_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_421_, 0, v_toSeqLeft_410_);
v___f_422_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_422_, 0, v_toSeq_409_);
if (v_isShared_414_ == 0)
{
lean_ctor_set(v___x_413_, 4, v___f_420_);
lean_ctor_set(v___x_413_, 3, v___f_421_);
lean_ctor_set(v___x_413_, 2, v___f_422_);
lean_ctor_set(v___x_413_, 1, v___f_415_);
lean_ctor_set(v___x_413_, 0, v___x_419_);
v___x_424_ = v___x_413_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v___f_415_);
lean_ctor_set(v_reuseFailAlloc_433_, 2, v___f_422_);
lean_ctor_set(v_reuseFailAlloc_433_, 3, v___f_421_);
lean_ctor_set(v_reuseFailAlloc_433_, 4, v___f_420_);
v___x_424_ = v_reuseFailAlloc_433_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_426_; 
if (v_isShared_407_ == 0)
{
lean_ctor_set(v___x_406_, 1, v___f_416_);
lean_ctor_set(v___x_406_, 0, v___x_424_);
v___x_426_ = v___x_406_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v___x_424_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v___f_416_);
v___x_426_ = v_reuseFailAlloc_432_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_6341__overap_430_; lean_object* v___x_431_; 
v___x_427_ = l_StateRefT_x27_instMonad___redArg(v___x_426_);
v___x_428_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__5);
v___x_429_ = l_instInhabitedOfMonad___redArg(v___x_427_, v___x_428_);
v___x_6341__overap_430_ = lean_panic_fn_borrowed(v___x_429_, v_msg_371_);
lean_dec(v___x_429_);
lean_inc(v___y_376_);
lean_inc_ref(v___y_375_);
lean_inc(v___y_374_);
lean_inc_ref(v___y_373_);
lean_inc(v___y_372_);
v___x_431_ = lean_apply_6(v___x_6341__overap_430_, v___y_372_, v___y_373_, v___y_374_, v___y_375_, v___y_376_, lean_box(0));
return v___x_431_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___boxed(lean_object* v_msg_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v_res_451_; 
v_res_451_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v_msg_444_, v___y_445_, v___y_446_, v___y_447_, v___y_448_, v___y_449_);
lean_dec(v___y_449_);
lean_dec_ref(v___y_448_);
lean_dec(v___y_447_);
lean_dec_ref(v___y_446_);
lean_dec(v___y_445_);
return v_res_451_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(lean_object* v_upperBound_452_, lean_object* v_args_453_, lean_object* v_a_454_, lean_object* v_b_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_a_459_; uint8_t v___x_464_; 
v___x_464_ = lean_nat_dec_lt(v_a_454_, v_upperBound_452_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; 
lean_dec(v_a_454_);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v_b_455_);
return v___x_465_;
}
else
{
lean_object* v___x_466_; lean_object* v___x_467_; 
v___x_466_ = lean_box(0);
v___x_467_ = lean_array_get_borrowed(v___x_466_, v_args_453_, v_a_454_);
if (lean_obj_tag(v___x_467_) == 1)
{
lean_object* v_fvarId_468_; lean_object* v___x_469_; uint8_t v___x_470_; 
v_fvarId_468_ = lean_ctor_get(v___x_467_, 0);
v___x_469_ = lean_st_ref_get(v___y_456_);
v___x_470_ = l_Lean_FVarIdHashSet_contains(v___x_469_, v_fvarId_468_);
lean_dec(v___x_469_);
if (v___x_470_ == 0)
{
lean_inc_ref(v___x_467_);
v_a_459_ = v___x_467_;
goto v___jp_458_;
}
else
{
v_a_459_ = v___x_466_;
goto v___jp_458_;
}
}
else
{
v_a_459_ = v___x_466_;
goto v___jp_458_;
}
}
v___jp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_460_ = lean_array_push(v_b_455_, v_a_459_);
v___x_461_ = lean_unsigned_to_nat(1u);
v___x_462_ = lean_nat_add(v_a_454_, v___x_461_);
lean_dec(v_a_454_);
v_a_454_ = v___x_462_;
v_b_455_ = v___x_460_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg___boxed(lean_object* v_upperBound_471_, lean_object* v_args_472_, lean_object* v_a_473_, lean_object* v_b_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_471_, v_args_472_, v_a_473_, v_b_474_, v___y_475_);
lean_dec(v___y_475_);
lean_dec_ref(v_args_472_);
lean_dec(v_upperBound_471_);
return v_res_477_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13(void){
_start:
{
lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; 
v___x_499_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_500_ = lean_unsigned_to_nat(6u);
v___x_501_ = lean_unsigned_to_nat(83u);
v___x_502_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__11));
v___x_503_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_504_ = l_mkPanicMessageWithDecl(v___x_503_, v___x_502_, v___x_501_, v___x_500_, v___x_499_);
return v___x_504_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono(lean_object* v_e_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v_a_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
switch(lean_obj_tag(v_e_509_))
{
case 2:
{
lean_object* v_typeName_516_; lean_object* v_idx_517_; lean_object* v_struct_518_; lean_object* v___x_519_; uint8_t v___x_520_; 
v_typeName_516_ = lean_ctor_get(v_e_509_, 0);
v_idx_517_ = lean_ctor_get(v_e_509_, 1);
v_struct_518_ = lean_ctor_get(v_e_509_, 2);
v___x_519_ = lean_st_ref_get(v_a_510_);
v___x_520_ = l_Lean_FVarIdHashSet_contains(v___x_519_, v_struct_518_);
lean_dec(v___x_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_521_; 
lean_inc(v_typeName_516_);
v___x_521_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_516_, v_a_513_, v_a_514_);
if (lean_obj_tag(v___x_521_) == 0)
{
lean_object* v_a_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_541_; 
v_a_522_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_541_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_541_ == 0)
{
v___x_524_ = v___x_521_;
v_isShared_525_ = v_isSharedCheck_541_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_a_522_);
lean_dec(v___x_521_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_541_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
if (lean_obj_tag(v_a_522_) == 1)
{
lean_object* v_val_526_; lean_object* v_fieldIdx_527_; uint8_t v___x_528_; 
lean_inc(v_struct_518_);
lean_inc(v_idx_517_);
lean_dec_ref_known(v_e_509_, 3);
v_val_526_ = lean_ctor_get(v_a_522_, 0);
lean_inc(v_val_526_);
lean_dec_ref_known(v_a_522_, 1);
v_fieldIdx_527_ = lean_ctor_get(v_val_526_, 2);
lean_inc(v_fieldIdx_527_);
lean_dec(v_val_526_);
v___x_528_ = lean_nat_dec_eq(v_fieldIdx_527_, v_idx_517_);
lean_dec(v_idx_517_);
lean_dec(v_fieldIdx_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; lean_object* v___x_531_; 
lean_dec(v_struct_518_);
v___x_529_ = lean_box(1);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_529_);
v___x_531_ = v___x_524_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_533_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_534_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_534_, 0, v_struct_518_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v___x_534_);
v___x_536_ = v___x_524_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_534_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
else
{
lean_object* v___x_539_; 
lean_dec(v_a_522_);
if (v_isShared_525_ == 0)
{
lean_ctor_set(v___x_524_, 0, v_e_509_);
v___x_539_ = v___x_524_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_540_; 
v_reuseFailAlloc_540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_540_, 0, v_e_509_);
v___x_539_ = v_reuseFailAlloc_540_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
return v___x_539_;
}
}
}
}
else
{
lean_object* v_a_542_; lean_object* v___x_544_; uint8_t v_isShared_545_; uint8_t v_isSharedCheck_549_; 
lean_dec_ref_known(v_e_509_, 3);
v_a_542_ = lean_ctor_get(v___x_521_, 0);
v_isSharedCheck_549_ = !lean_is_exclusive(v___x_521_);
if (v_isSharedCheck_549_ == 0)
{
v___x_544_ = v___x_521_;
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
else
{
lean_inc(v_a_542_);
lean_dec(v___x_521_);
v___x_544_ = lean_box(0);
v_isShared_545_ = v_isSharedCheck_549_;
goto v_resetjp_543_;
}
v_resetjp_543_:
{
lean_object* v___x_547_; 
if (v_isShared_545_ == 0)
{
v___x_547_ = v___x_544_;
goto v_reusejp_546_;
}
else
{
lean_object* v_reuseFailAlloc_548_; 
v_reuseFailAlloc_548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_548_, 0, v_a_542_);
v___x_547_ = v_reuseFailAlloc_548_;
goto v_reusejp_546_;
}
v_reusejp_546_:
{
return v___x_547_;
}
}
}
}
else
{
lean_object* v___x_550_; lean_object* v___x_551_; 
lean_dec_ref_known(v_e_509_, 3);
v___x_550_ = lean_box(1);
v___x_551_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
return v___x_551_;
}
}
case 3:
{
lean_object* v_declName_552_; lean_object* v_args_553_; lean_object* v___x_555_; uint8_t v_isShared_556_; uint8_t v_isSharedCheck_675_; 
v_declName_552_ = lean_ctor_get(v_e_509_, 0);
v_args_553_ = lean_ctor_get(v_e_509_, 2);
v_isSharedCheck_675_ = !lean_is_exclusive(v_e_509_);
if (v_isSharedCheck_675_ == 0)
{
lean_object* v_unused_676_; 
v_unused_676_ = lean_ctor_get(v_e_509_, 1);
lean_dec(v_unused_676_);
v___x_555_ = v_e_509_;
v_isShared_556_ = v_isSharedCheck_675_;
goto v_resetjp_554_;
}
else
{
lean_inc(v_args_553_);
lean_inc(v_declName_552_);
lean_dec(v_e_509_);
v___x_555_ = lean_box(0);
v_isShared_556_ = v_isSharedCheck_675_;
goto v_resetjp_554_;
}
v_resetjp_554_:
{
lean_object* v_args_558_; lean_object* v___y_565_; lean_object* v___y_566_; lean_object* v___y_567_; lean_object* v___y_568_; lean_object* v___y_569_; lean_object* v___x_605_; uint8_t v___x_606_; 
v___x_605_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__2));
v___x_606_ = lean_name_eq(v_declName_552_, v___x_605_);
if (v___x_606_ == 0)
{
lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_607_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__4));
v___x_608_ = lean_name_eq(v_declName_552_, v___x_607_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; uint8_t v___x_610_; 
v___x_609_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__7));
v___x_610_ = lean_name_eq(v_declName_552_, v___x_609_);
if (v___x_610_ == 0)
{
lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_611_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_612_ = lean_name_eq(v_declName_552_, v___x_611_);
if (v___x_612_ == 0)
{
lean_object* v___x_613_; lean_object* v_env_614_; lean_object* v___x_615_; 
v___x_613_ = lean_st_ref_get(v_a_514_);
v_env_614_ = lean_ctor_get(v___x_613_, 0);
lean_inc_ref(v_env_614_);
lean_dec(v___x_613_);
lean_inc(v_declName_552_);
v___x_615_ = l_Lean_Environment_find_x3f(v_env_614_, v_declName_552_, v___x_612_);
if (lean_obj_tag(v___x_615_) == 1)
{
lean_object* v_val_616_; 
v_val_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_val_616_);
lean_dec_ref_known(v___x_615_, 1);
if (lean_obj_tag(v_val_616_) == 6)
{
lean_object* v_val_617_; lean_object* v_induct_618_; lean_object* v_numParams_619_; lean_object* v___x_620_; 
lean_del_object(v___x_555_);
lean_dec(v_declName_552_);
v_val_617_ = lean_ctor_get(v_val_616_, 0);
lean_inc_ref(v_val_617_);
lean_dec_ref_known(v_val_616_, 1);
v_induct_618_ = lean_ctor_get(v_val_617_, 1);
v_numParams_619_ = lean_ctor_get(v_val_617_, 3);
lean_inc(v_induct_618_);
v___x_620_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_induct_618_, v_a_513_, v_a_514_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v_a_621_; 
v_a_621_ = lean_ctor_get(v___x_620_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_620_, 1);
if (lean_obj_tag(v_a_621_) == 1)
{
lean_object* v_val_622_; lean_object* v_fieldIdx_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
lean_inc(v_numParams_619_);
lean_dec_ref(v_val_617_);
v_val_622_ = lean_ctor_get(v_a_621_, 0);
lean_inc(v_val_622_);
lean_dec_ref_known(v_a_621_, 1);
v_fieldIdx_623_ = lean_ctor_get(v_val_622_, 2);
lean_inc(v_fieldIdx_623_);
lean_dec(v_val_622_);
v___x_624_ = lean_box(0);
v___x_625_ = lean_nat_add(v_numParams_619_, v_fieldIdx_623_);
lean_dec(v_fieldIdx_623_);
lean_dec(v_numParams_619_);
v___x_626_ = lean_array_get(v___x_624_, v_args_553_, v___x_625_);
lean_dec(v___x_625_);
lean_dec_ref(v_args_553_);
v___x_627_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_626_);
lean_dec(v___x_626_);
v_e_509_ = v___x_627_;
goto _start;
}
else
{
lean_object* v___x_629_; 
lean_dec(v_a_621_);
v___x_629_ = l_Lean_Compiler_LCNF_ctorAppToMono(v_val_617_, v_args_553_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
return v___x_629_;
}
}
else
{
lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_637_; 
lean_dec_ref(v_val_617_);
lean_dec_ref(v_args_553_);
v_a_630_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_637_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_637_ == 0)
{
v___x_632_ = v___x_620_;
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_620_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_637_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v___x_635_; 
if (v_isShared_633_ == 0)
{
v___x_635_ = v___x_632_;
goto v_reusejp_634_;
}
else
{
lean_object* v_reuseFailAlloc_636_; 
v_reuseFailAlloc_636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_636_, 0, v_a_630_);
v___x_635_ = v_reuseFailAlloc_636_;
goto v_reusejp_634_;
}
v_reusejp_634_:
{
return v___x_635_;
}
}
}
}
else
{
lean_dec(v_val_616_);
v___y_565_ = v_a_510_;
v___y_566_ = v_a_511_;
v___y_567_ = v_a_512_;
v___y_568_ = v_a_513_;
v___y_569_ = v_a_514_;
goto v___jp_564_;
}
}
else
{
lean_dec(v___x_615_);
v___y_565_ = v_a_510_;
v___y_566_ = v_a_511_;
v___y_567_ = v_a_512_;
v___y_568_ = v_a_513_;
v___y_569_ = v_a_514_;
goto v___jp_564_;
}
}
else
{
lean_object* v___x_638_; lean_object* v___x_639_; 
lean_del_object(v___x_555_);
lean_dec_ref(v_args_553_);
lean_dec(v_declName_552_);
v___x_638_ = lean_obj_once(&l_Lean_Compiler_LCNF_LetValue_toMono___closed__13, &l_Lean_Compiler_LCNF_LetValue_toMono___closed__13_once, _init_l_Lean_Compiler_LCNF_LetValue_toMono___closed__13);
v___x_639_ = l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0(v___x_638_, v_a_510_, v_a_511_, v_a_512_, v_a_513_, v_a_514_);
return v___x_639_;
}
}
else
{
lean_object* v___x_640_; lean_object* v___x_641_; 
lean_del_object(v___x_555_);
lean_dec_ref(v_args_553_);
lean_dec(v_declName_552_);
v___x_640_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v___x_640_);
return v___x_641_;
}
}
else
{
lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
lean_del_object(v___x_555_);
lean_dec(v_declName_552_);
v___x_642_ = lean_box(0);
v___x_643_ = lean_unsigned_to_nat(2u);
v___x_644_ = lean_array_get_borrowed(v___x_642_, v_args_553_, v___x_643_);
if (lean_obj_tag(v___x_644_) == 1)
{
lean_object* v_fvarId_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v_extraArgs_649_; lean_object* v___x_650_; 
v_fvarId_645_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_fvarId_645_);
v___x_646_ = lean_array_get_size(v_args_553_);
v___x_647_ = lean_unsigned_to_nat(3u);
v___x_648_ = lean_nat_sub(v___x_646_, v___x_647_);
v_extraArgs_649_ = lean_mk_empty_array_with_capacity(v___x_648_);
lean_dec(v___x_648_);
v___x_650_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v___x_646_, v_args_553_, v___x_647_, v_extraArgs_649_, v_a_510_);
lean_dec_ref(v_args_553_);
if (lean_obj_tag(v___x_650_) == 0)
{
lean_object* v_a_651_; lean_object* v___x_653_; uint8_t v_isShared_654_; uint8_t v_isSharedCheck_659_; 
v_a_651_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_659_ == 0)
{
v___x_653_ = v___x_650_;
v_isShared_654_ = v_isSharedCheck_659_;
goto v_resetjp_652_;
}
else
{
lean_inc(v_a_651_);
lean_dec(v___x_650_);
v___x_653_ = lean_box(0);
v_isShared_654_ = v_isSharedCheck_659_;
goto v_resetjp_652_;
}
v_resetjp_652_:
{
lean_object* v___x_655_; lean_object* v___x_657_; 
v___x_655_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_655_, 0, v_fvarId_645_);
lean_ctor_set(v___x_655_, 1, v_a_651_);
if (v_isShared_654_ == 0)
{
lean_ctor_set(v___x_653_, 0, v___x_655_);
v___x_657_ = v___x_653_;
goto v_reusejp_656_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v___x_655_);
v___x_657_ = v_reuseFailAlloc_658_;
goto v_reusejp_656_;
}
v_reusejp_656_:
{
return v___x_657_;
}
}
}
else
{
lean_object* v_a_660_; lean_object* v___x_662_; uint8_t v_isShared_663_; uint8_t v_isSharedCheck_667_; 
lean_dec(v_fvarId_645_);
v_a_660_ = lean_ctor_get(v___x_650_, 0);
v_isSharedCheck_667_ = !lean_is_exclusive(v___x_650_);
if (v_isSharedCheck_667_ == 0)
{
v___x_662_ = v___x_650_;
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
else
{
lean_inc(v_a_660_);
lean_dec(v___x_650_);
v___x_662_ = lean_box(0);
v_isShared_663_ = v_isSharedCheck_667_;
goto v_resetjp_661_;
}
v_resetjp_661_:
{
lean_object* v___x_665_; 
if (v_isShared_663_ == 0)
{
v___x_665_ = v___x_662_;
goto v_reusejp_664_;
}
else
{
lean_object* v_reuseFailAlloc_666_; 
v_reuseFailAlloc_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_666_, 0, v_a_660_);
v___x_665_ = v_reuseFailAlloc_666_;
goto v_reusejp_664_;
}
v_reusejp_664_:
{
return v___x_665_;
}
}
}
}
else
{
lean_object* v___x_668_; lean_object* v___x_669_; 
lean_dec_ref(v_args_553_);
v___x_668_ = lean_box(1);
v___x_669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_669_, 0, v___x_668_);
return v___x_669_;
}
}
}
else
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; 
lean_del_object(v___x_555_);
lean_dec(v_declName_552_);
v___x_670_ = lean_box(0);
v___x_671_ = lean_unsigned_to_nat(2u);
v___x_672_ = lean_array_get(v___x_670_, v_args_553_, v___x_671_);
lean_dec_ref(v_args_553_);
v___x_673_ = l_Lean_Compiler_LCNF_Arg_toLetValue___redArg(v___x_672_);
lean_dec(v___x_672_);
v___x_674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_674_, 0, v___x_673_);
return v___x_674_;
}
v___jp_557_:
{
lean_object* v___x_559_; lean_object* v___x_561_; 
v___x_559_ = lean_box(0);
if (v_isShared_556_ == 0)
{
lean_ctor_set(v___x_555_, 2, v_args_558_);
lean_ctor_set(v___x_555_, 1, v___x_559_);
v___x_561_ = v___x_555_;
goto v_reusejp_560_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_declName_552_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v___x_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_args_558_);
v___x_561_ = v_reuseFailAlloc_563_;
goto v_reusejp_560_;
}
v_reusejp_560_:
{
lean_object* v___x_562_; 
v___x_562_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_562_, 0, v___x_561_);
return v___x_562_;
}
}
v___jp_564_:
{
lean_object* v___x_570_; 
lean_inc(v_declName_552_);
v___x_570_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_552_, v___y_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_570_, 1);
if (lean_obj_tag(v_a_571_) == 1)
{
lean_object* v_val_572_; lean_object* v_toSignature_573_; lean_object* v_type_574_; lean_object* v___x_575_; 
v_val_572_ = lean_ctor_get(v_a_571_, 0);
lean_inc(v_val_572_);
lean_dec_ref_known(v_a_571_, 1);
v_toSignature_573_ = lean_ctor_get(v_val_572_, 0);
lean_inc_ref(v_toSignature_573_);
lean_dec(v_val_572_);
v_type_574_ = lean_ctor_get(v_toSignature_573_, 2);
lean_inc_ref(v_type_574_);
lean_dec_ref(v_toSignature_573_);
v___x_575_ = l_Lean_Compiler_LCNF_argsToMonoWithFnType(v_args_553_, v_type_574_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_);
lean_dec_ref(v_args_553_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
lean_inc(v_a_576_);
lean_dec_ref_known(v___x_575_, 1);
v_args_558_ = v_a_576_;
goto v___jp_557_;
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_del_object(v___x_555_);
lean_dec(v_declName_552_);
v_a_577_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_575_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_575_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_582_; 
if (v_isShared_580_ == 0)
{
v___x_582_ = v___x_579_;
goto v_reusejp_581_;
}
else
{
lean_object* v_reuseFailAlloc_583_; 
v_reuseFailAlloc_583_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_583_, 0, v_a_577_);
v___x_582_ = v_reuseFailAlloc_583_;
goto v_reusejp_581_;
}
v_reusejp_581_:
{
return v___x_582_;
}
}
}
}
else
{
size_t v_sz_585_; size_t v___x_586_; lean_object* v___x_587_; 
lean_dec(v_a_571_);
v_sz_585_ = lean_array_size(v_args_553_);
v___x_586_ = ((size_t)0ULL);
v___x_587_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_585_, v___x_586_, v_args_553_, v___y_565_);
if (lean_obj_tag(v___x_587_) == 0)
{
lean_object* v_a_588_; 
v_a_588_ = lean_ctor_get(v___x_587_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_587_, 1);
v_args_558_ = v_a_588_;
goto v___jp_557_;
}
else
{
lean_object* v_a_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_596_; 
lean_del_object(v___x_555_);
lean_dec(v_declName_552_);
v_a_589_ = lean_ctor_get(v___x_587_, 0);
v_isSharedCheck_596_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_596_ == 0)
{
v___x_591_ = v___x_587_;
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_a_589_);
lean_dec(v___x_587_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_596_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
lean_object* v___x_594_; 
if (v_isShared_592_ == 0)
{
v___x_594_ = v___x_591_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_595_; 
v_reuseFailAlloc_595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_595_, 0, v_a_589_);
v___x_594_ = v_reuseFailAlloc_595_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
return v___x_594_;
}
}
}
}
}
else
{
lean_object* v_a_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_604_; 
lean_del_object(v___x_555_);
lean_dec_ref(v_args_553_);
lean_dec(v_declName_552_);
v_a_597_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_604_ == 0)
{
v___x_599_ = v___x_570_;
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_a_597_);
lean_dec(v___x_570_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_604_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v_a_597_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
}
}
}
case 4:
{
lean_object* v_fvarId_677_; lean_object* v_args_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_708_; 
v_fvarId_677_ = lean_ctor_get(v_e_509_, 0);
v_args_678_ = lean_ctor_get(v_e_509_, 1);
v_isSharedCheck_708_ = !lean_is_exclusive(v_e_509_);
if (v_isSharedCheck_708_ == 0)
{
v___x_680_ = v_e_509_;
v_isShared_681_ = v_isSharedCheck_708_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_args_678_);
lean_inc(v_fvarId_677_);
lean_dec(v_e_509_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_708_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_682_; uint8_t v___x_683_; 
v___x_682_ = lean_st_ref_get(v_a_510_);
v___x_683_ = l_Lean_FVarIdHashSet_contains(v___x_682_, v_fvarId_677_);
lean_dec(v___x_682_);
if (v___x_683_ == 0)
{
size_t v_sz_684_; size_t v___x_685_; lean_object* v___x_686_; 
v_sz_684_ = lean_array_size(v_args_678_);
v___x_685_ = ((size_t)0ULL);
v___x_686_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_684_, v___x_685_, v_args_678_, v_a_510_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v___x_689_; uint8_t v_isShared_690_; uint8_t v_isSharedCheck_697_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_697_ == 0)
{
v___x_689_ = v___x_686_;
v_isShared_690_ = v_isSharedCheck_697_;
goto v_resetjp_688_;
}
else
{
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_689_ = lean_box(0);
v_isShared_690_ = v_isSharedCheck_697_;
goto v_resetjp_688_;
}
v_resetjp_688_:
{
lean_object* v___x_692_; 
if (v_isShared_681_ == 0)
{
lean_ctor_set(v___x_680_, 1, v_a_687_);
v___x_692_ = v___x_680_;
goto v_reusejp_691_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_fvarId_677_);
lean_ctor_set(v_reuseFailAlloc_696_, 1, v_a_687_);
v___x_692_ = v_reuseFailAlloc_696_;
goto v_reusejp_691_;
}
v_reusejp_691_:
{
lean_object* v___x_694_; 
if (v_isShared_690_ == 0)
{
lean_ctor_set(v___x_689_, 0, v___x_692_);
v___x_694_ = v___x_689_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_692_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_del_object(v___x_680_);
lean_dec(v_fvarId_677_);
v_a_698_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_686_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_686_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; 
lean_del_object(v___x_680_);
lean_dec_ref(v_args_678_);
lean_dec(v_fvarId_677_);
v___x_706_ = lean_box(1);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v___x_706_);
return v___x_707_;
}
}
}
default: 
{
lean_object* v___x_709_; 
v___x_709_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_709_, 0, v_e_509_);
return v___x_709_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_toMono___boxed(lean_object* v_e_710_, lean_object* v_a_711_, lean_object* v_a_712_, lean_object* v_a_713_, lean_object* v_a_714_, lean_object* v_a_715_, lean_object* v_a_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_e_710_, v_a_711_, v_a_712_, v_a_713_, v_a_714_, v_a_715_);
lean_dec(v_a_715_);
lean_dec_ref(v_a_714_);
lean_dec(v_a_713_);
lean_dec_ref(v_a_712_);
lean_dec(v_a_711_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(lean_object* v_upperBound_718_, lean_object* v_args_719_, lean_object* v_inst_720_, lean_object* v_R_721_, lean_object* v_a_722_, lean_object* v_b_723_, lean_object* v_c_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; 
v___x_731_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___redArg(v_upperBound_718_, v_args_719_, v_a_722_, v_b_723_, v___y_725_);
return v___x_731_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1___boxed(lean_object* v_upperBound_732_, lean_object* v_args_733_, lean_object* v_inst_734_, lean_object* v_R_735_, lean_object* v_a_736_, lean_object* v_b_737_, lean_object* v_c_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__1(v_upperBound_732_, v_args_733_, v_inst_734_, v_R_735_, v_a_736_, v_b_737_, v_c_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
lean_dec(v___y_739_);
lean_dec_ref(v_args_733_);
lean_dec(v_upperBound_732_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono(lean_object* v_decl_746_, lean_object* v_a_747_, lean_object* v_a_748_, lean_object* v_a_749_, lean_object* v_a_750_, lean_object* v_a_751_){
_start:
{
lean_object* v_type_753_; lean_object* v_value_754_; lean_object* v___x_755_; 
v_type_753_ = lean_ctor_get(v_decl_746_, 2);
v_value_754_ = lean_ctor_get(v_decl_746_, 3);
lean_inc_ref(v_type_753_);
v___x_755_ = l_Lean_Compiler_LCNF_toMonoType(v_type_753_, v_a_750_, v_a_751_);
if (lean_obj_tag(v___x_755_) == 0)
{
lean_object* v_a_756_; lean_object* v___x_757_; 
v_a_756_ = lean_ctor_get(v___x_755_, 0);
lean_inc(v_a_756_);
lean_dec_ref_known(v___x_755_, 1);
lean_inc(v_value_754_);
v___x_757_ = l_Lean_Compiler_LCNF_LetValue_toMono(v_value_754_, v_a_747_, v_a_748_, v_a_749_, v_a_750_, v_a_751_);
if (lean_obj_tag(v___x_757_) == 0)
{
lean_object* v_a_758_; uint8_t v___x_759_; lean_object* v___x_760_; 
v_a_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_a_758_);
lean_dec_ref_known(v___x_757_, 1);
v___x_759_ = 0;
v___x_760_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_759_, v_decl_746_, v_a_756_, v_a_758_, v_a_749_);
return v___x_760_;
}
else
{
lean_object* v_a_761_; lean_object* v___x_763_; uint8_t v_isShared_764_; uint8_t v_isSharedCheck_768_; 
lean_dec(v_a_756_);
lean_dec_ref(v_decl_746_);
v_a_761_ = lean_ctor_get(v___x_757_, 0);
v_isSharedCheck_768_ = !lean_is_exclusive(v___x_757_);
if (v_isSharedCheck_768_ == 0)
{
v___x_763_ = v___x_757_;
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
else
{
lean_inc(v_a_761_);
lean_dec(v___x_757_);
v___x_763_ = lean_box(0);
v_isShared_764_ = v_isSharedCheck_768_;
goto v_resetjp_762_;
}
v_resetjp_762_:
{
lean_object* v___x_766_; 
if (v_isShared_764_ == 0)
{
v___x_766_ = v___x_763_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_a_761_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
else
{
lean_object* v_a_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_776_; 
lean_dec_ref(v_decl_746_);
v_a_769_ = lean_ctor_get(v___x_755_, 0);
v_isSharedCheck_776_ = !lean_is_exclusive(v___x_755_);
if (v_isSharedCheck_776_ == 0)
{
v___x_771_ = v___x_755_;
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_a_769_);
lean_dec(v___x_755_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_776_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_774_; 
if (v_isShared_772_ == 0)
{
v___x_774_ = v___x_771_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_775_; 
v_reuseFailAlloc_775_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_775_, 0, v_a_769_);
v___x_774_ = v_reuseFailAlloc_775_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
return v___x_774_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_toMono___boxed(lean_object* v_decl_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_, lean_object* v_a_782_, lean_object* v_a_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_777_, v_a_778_, v_a_779_, v_a_780_, v_a_781_, v_a_782_);
lean_dec(v_a_782_);
lean_dec_ref(v_a_781_);
lean_dec(v_a_780_);
lean_dec_ref(v_a_779_);
lean_dec(v_a_778_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(lean_object* v_msg_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v_toApplicative_794_; lean_object* v___x_796_; uint8_t v_isShared_797_; uint8_t v_isSharedCheck_856_; 
v___x_792_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_793_ = l_StateRefT_x27_instMonad___redArg(v___x_792_);
v_toApplicative_794_ = lean_ctor_get(v___x_793_, 0);
v_isSharedCheck_856_ = !lean_is_exclusive(v___x_793_);
if (v_isSharedCheck_856_ == 0)
{
lean_object* v_unused_857_; 
v_unused_857_ = lean_ctor_get(v___x_793_, 1);
lean_dec(v_unused_857_);
v___x_796_ = v___x_793_;
v_isShared_797_ = v_isSharedCheck_856_;
goto v_resetjp_795_;
}
else
{
lean_inc(v_toApplicative_794_);
lean_dec(v___x_793_);
v___x_796_ = lean_box(0);
v_isShared_797_ = v_isSharedCheck_856_;
goto v_resetjp_795_;
}
v_resetjp_795_:
{
lean_object* v_toFunctor_798_; lean_object* v_toSeq_799_; lean_object* v_toSeqLeft_800_; lean_object* v_toSeqRight_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_854_; 
v_toFunctor_798_ = lean_ctor_get(v_toApplicative_794_, 0);
v_toSeq_799_ = lean_ctor_get(v_toApplicative_794_, 2);
v_toSeqLeft_800_ = lean_ctor_get(v_toApplicative_794_, 3);
v_toSeqRight_801_ = lean_ctor_get(v_toApplicative_794_, 4);
v_isSharedCheck_854_ = !lean_is_exclusive(v_toApplicative_794_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; 
v_unused_855_ = lean_ctor_get(v_toApplicative_794_, 1);
lean_dec(v_unused_855_);
v___x_803_ = v_toApplicative_794_;
v_isShared_804_ = v_isSharedCheck_854_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_toSeqRight_801_);
lean_inc(v_toSeqLeft_800_);
lean_inc(v_toSeq_799_);
lean_inc(v_toFunctor_798_);
lean_dec(v_toApplicative_794_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_854_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___f_805_; lean_object* v___f_806_; lean_object* v___f_807_; lean_object* v___f_808_; lean_object* v___x_809_; lean_object* v___f_810_; lean_object* v___f_811_; lean_object* v___f_812_; lean_object* v___x_814_; 
v___f_805_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_806_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_798_);
v___f_807_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_807_, 0, v_toFunctor_798_);
v___f_808_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_808_, 0, v_toFunctor_798_);
v___x_809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_809_, 0, v___f_807_);
lean_ctor_set(v___x_809_, 1, v___f_808_);
v___f_810_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_810_, 0, v_toSeqRight_801_);
v___f_811_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_811_, 0, v_toSeqLeft_800_);
v___f_812_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_812_, 0, v_toSeq_799_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 4, v___f_810_);
lean_ctor_set(v___x_803_, 3, v___f_811_);
lean_ctor_set(v___x_803_, 2, v___f_812_);
lean_ctor_set(v___x_803_, 1, v___f_805_);
lean_ctor_set(v___x_803_, 0, v___x_809_);
v___x_814_ = v___x_803_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v___x_809_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v___f_805_);
lean_ctor_set(v_reuseFailAlloc_853_, 2, v___f_812_);
lean_ctor_set(v_reuseFailAlloc_853_, 3, v___f_811_);
lean_ctor_set(v_reuseFailAlloc_853_, 4, v___f_810_);
v___x_814_ = v_reuseFailAlloc_853_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
lean_object* v___x_816_; 
if (v_isShared_797_ == 0)
{
lean_ctor_set(v___x_796_, 1, v___f_806_);
lean_ctor_set(v___x_796_, 0, v___x_814_);
v___x_816_ = v___x_796_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v___f_806_);
v___x_816_ = v_reuseFailAlloc_852_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
lean_object* v___x_817_; lean_object* v_toApplicative_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_850_; 
v___x_817_ = l_StateRefT_x27_instMonad___redArg(v___x_816_);
v_toApplicative_818_ = lean_ctor_get(v___x_817_, 0);
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_817_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; 
v_unused_851_ = lean_ctor_get(v___x_817_, 1);
lean_dec(v_unused_851_);
v___x_820_ = v___x_817_;
v_isShared_821_ = v_isSharedCheck_850_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_toApplicative_818_);
lean_dec(v___x_817_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_850_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v_toFunctor_822_; lean_object* v_toSeq_823_; lean_object* v_toSeqLeft_824_; lean_object* v_toSeqRight_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_848_; 
v_toFunctor_822_ = lean_ctor_get(v_toApplicative_818_, 0);
v_toSeq_823_ = lean_ctor_get(v_toApplicative_818_, 2);
v_toSeqLeft_824_ = lean_ctor_get(v_toApplicative_818_, 3);
v_toSeqRight_825_ = lean_ctor_get(v_toApplicative_818_, 4);
v_isSharedCheck_848_ = !lean_is_exclusive(v_toApplicative_818_);
if (v_isSharedCheck_848_ == 0)
{
lean_object* v_unused_849_; 
v_unused_849_ = lean_ctor_get(v_toApplicative_818_, 1);
lean_dec(v_unused_849_);
v___x_827_ = v_toApplicative_818_;
v_isShared_828_ = v_isSharedCheck_848_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_toSeqRight_825_);
lean_inc(v_toSeqLeft_824_);
lean_inc(v_toSeq_823_);
lean_inc(v_toFunctor_822_);
lean_dec(v_toApplicative_818_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_848_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___f_829_; lean_object* v___f_830_; lean_object* v___f_831_; lean_object* v___f_832_; lean_object* v___x_833_; lean_object* v___f_834_; lean_object* v___f_835_; lean_object* v___f_836_; lean_object* v___x_838_; 
v___f_829_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_830_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_822_);
v___f_831_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_831_, 0, v_toFunctor_822_);
v___f_832_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_832_, 0, v_toFunctor_822_);
v___x_833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_833_, 0, v___f_831_);
lean_ctor_set(v___x_833_, 1, v___f_832_);
v___f_834_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_834_, 0, v_toSeqRight_825_);
v___f_835_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_835_, 0, v_toSeqLeft_824_);
v___f_836_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_836_, 0, v_toSeq_823_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 4, v___f_834_);
lean_ctor_set(v___x_827_, 3, v___f_835_);
lean_ctor_set(v___x_827_, 2, v___f_836_);
lean_ctor_set(v___x_827_, 1, v___f_829_);
lean_ctor_set(v___x_827_, 0, v___x_833_);
v___x_838_ = v___x_827_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_847_; 
v_reuseFailAlloc_847_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_847_, 0, v___x_833_);
lean_ctor_set(v_reuseFailAlloc_847_, 1, v___f_829_);
lean_ctor_set(v_reuseFailAlloc_847_, 2, v___f_836_);
lean_ctor_set(v_reuseFailAlloc_847_, 3, v___f_835_);
lean_ctor_set(v_reuseFailAlloc_847_, 4, v___f_834_);
v___x_838_ = v_reuseFailAlloc_847_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v___x_840_; 
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 1, v___f_830_);
lean_ctor_set(v___x_820_, 0, v___x_838_);
v___x_840_ = v___x_820_;
goto v_reusejp_839_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v___x_838_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v___f_830_);
v___x_840_ = v_reuseFailAlloc_846_;
goto v_reusejp_839_;
}
v_reusejp_839_:
{
lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_4525__overap_844_; lean_object* v___x_845_; 
v___x_841_ = l_StateRefT_x27_instMonad___redArg(v___x_840_);
v___x_842_ = lean_box(0);
v___x_843_ = l_instInhabitedOfMonad___redArg(v___x_841_, v___x_842_);
v___x_4525__overap_844_ = lean_panic_fn_borrowed(v___x_843_, v_msg_785_);
lean_dec(v___x_843_);
lean_inc(v___y_790_);
lean_inc_ref(v___y_789_);
lean_inc(v___y_788_);
lean_inc_ref(v___y_787_);
lean_inc(v___y_786_);
v___x_845_ = lean_apply_6(v___x_4525__overap_844_, v___y_786_, v___y_787_, v___y_788_, v___y_789_, v___y_790_, lean_box(0));
return v___x_845_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0___boxed(lean_object* v_msg_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v_res_865_; 
v_res_865_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v_msg_858_, v___y_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_);
lean_dec(v___y_863_);
lean_dec_ref(v___y_862_);
lean_dec(v___y_861_);
lean_dec_ref(v___y_860_);
lean_dec(v___y_859_);
return v_res_865_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_867_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_868_ = lean_unsigned_to_nat(11u);
v___x_869_ = lean_unsigned_to_nat(124u);
v___x_870_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_871_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_872_ = l_mkPanicMessageWithDecl(v___x_871_, v___x_870_, v___x_869_, v___x_868_, v___x_867_);
return v___x_872_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(lean_object* v_upperBound_873_, lean_object* v_a_874_, lean_object* v_b_875_, lean_object* v___y_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v_a_883_; uint8_t v___x_887_; 
v___x_887_ = lean_nat_dec_lt(v_a_874_, v_upperBound_873_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; 
lean_dec(v_a_874_);
v___x_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_888_, 0, v_b_875_);
return v___x_888_;
}
else
{
if (lean_obj_tag(v_b_875_) == 7)
{
lean_object* v_body_889_; 
v_body_889_ = lean_ctor_get(v_b_875_, 2);
lean_inc_ref(v_body_889_);
lean_dec_ref_known(v_b_875_, 3);
v_a_883_ = v_body_889_;
goto v___jp_882_;
}
else
{
lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_890_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__1);
v___x_891_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_890_, v___y_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
if (lean_obj_tag(v___x_891_) == 0)
{
lean_dec_ref_known(v___x_891_, 1);
v_a_883_ = v_b_875_;
goto v___jp_882_;
}
else
{
lean_object* v_a_892_; lean_object* v___x_894_; uint8_t v_isShared_895_; uint8_t v_isSharedCheck_899_; 
lean_dec_ref(v_b_875_);
lean_dec(v_a_874_);
v_a_892_ = lean_ctor_get(v___x_891_, 0);
v_isSharedCheck_899_ = !lean_is_exclusive(v___x_891_);
if (v_isSharedCheck_899_ == 0)
{
v___x_894_ = v___x_891_;
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
else
{
lean_inc(v_a_892_);
lean_dec(v___x_891_);
v___x_894_ = lean_box(0);
v_isShared_895_ = v_isSharedCheck_899_;
goto v_resetjp_893_;
}
v_resetjp_893_:
{
lean_object* v___x_897_; 
if (v_isShared_895_ == 0)
{
v___x_897_ = v___x_894_;
goto v_reusejp_896_;
}
else
{
lean_object* v_reuseFailAlloc_898_; 
v_reuseFailAlloc_898_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_898_, 0, v_a_892_);
v___x_897_ = v_reuseFailAlloc_898_;
goto v_reusejp_896_;
}
v_reusejp_896_:
{
return v___x_897_;
}
}
}
}
}
v___jp_882_:
{
lean_object* v___x_884_; lean_object* v___x_885_; 
v___x_884_ = lean_unsigned_to_nat(1u);
v___x_885_ = lean_nat_add(v_a_874_, v___x_884_);
lean_dec(v_a_874_);
v_a_874_ = v___x_885_;
v_b_875_ = v_a_883_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___boxed(lean_object* v_upperBound_900_, lean_object* v_a_901_, lean_object* v_b_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_900_, v_a_901_, v_b_902_, v___y_903_, v___y_904_, v___y_905_, v___y_906_, v___y_907_);
lean_dec(v___y_907_);
lean_dec_ref(v___y_906_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec(v_upperBound_900_);
return v_res_909_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; 
v___x_910_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_911_ = lean_unsigned_to_nat(11u);
v___x_912_ = lean_unsigned_to_nat(132u);
v___x_913_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg___closed__0));
v___x_914_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_915_ = l_mkPanicMessageWithDecl(v___x_914_, v___x_913_, v___x_912_, v___x_911_, v___x_910_);
return v___x_915_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(lean_object* v_upperBound_916_, lean_object* v_a_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_){
_start:
{
lean_object* v_a_926_; uint8_t v___x_930_; 
v___x_930_ = lean_nat_dec_lt(v_a_917_, v_upperBound_916_);
if (v___x_930_ == 0)
{
lean_object* v___x_931_; 
lean_dec(v_a_917_);
v___x_931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_931_, 0, v_b_918_);
return v___x_931_;
}
else
{
lean_object* v_fst_932_; 
v_fst_932_ = lean_ctor_get(v_b_918_, 0);
lean_inc(v_fst_932_);
if (lean_obj_tag(v_fst_932_) == 7)
{
lean_object* v_snd_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_966_; 
v_snd_933_ = lean_ctor_get(v_b_918_, 1);
v_isSharedCheck_966_ = !lean_is_exclusive(v_b_918_);
if (v_isSharedCheck_966_ == 0)
{
lean_object* v_unused_967_; 
v_unused_967_ = lean_ctor_get(v_b_918_, 0);
lean_dec(v_unused_967_);
v___x_935_ = v_b_918_;
v_isShared_936_ = v_isSharedCheck_966_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_snd_933_);
lean_dec(v_b_918_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_966_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v_binderName_937_; lean_object* v_binderType_938_; lean_object* v_body_939_; lean_object* v___x_940_; 
v_binderName_937_ = lean_ctor_get(v_fst_932_, 0);
lean_inc(v_binderName_937_);
v_binderType_938_ = lean_ctor_get(v_fst_932_, 1);
lean_inc_ref(v_binderType_938_);
v_body_939_ = lean_ctor_get(v_fst_932_, 2);
lean_inc_ref(v_body_939_);
lean_dec_ref_known(v_fst_932_, 3);
v___x_940_ = l_Lean_Compiler_LCNF_toMonoType(v_binderType_938_, v___y_922_, v___y_923_);
if (lean_obj_tag(v___x_940_) == 0)
{
lean_object* v_a_941_; uint8_t v___x_942_; uint8_t v___x_943_; lean_object* v___x_944_; 
v_a_941_ = lean_ctor_get(v___x_940_, 0);
lean_inc(v_a_941_);
lean_dec_ref_known(v___x_940_, 1);
v___x_942_ = 0;
v___x_943_ = 0;
v___x_944_ = l_Lean_Compiler_LCNF_mkParam(v___x_942_, v_binderName_937_, v_a_941_, v___x_943_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
if (lean_obj_tag(v___x_944_) == 0)
{
lean_object* v_a_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v_a_945_ = lean_ctor_get(v___x_944_, 0);
lean_inc(v_a_945_);
lean_dec_ref_known(v___x_944_, 1);
v___x_946_ = lean_array_push(v_snd_933_, v_a_945_);
if (v_isShared_936_ == 0)
{
lean_ctor_set(v___x_935_, 1, v___x_946_);
lean_ctor_set(v___x_935_, 0, v_body_939_);
v___x_948_ = v___x_935_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v_body_939_);
lean_ctor_set(v_reuseFailAlloc_949_, 1, v___x_946_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
v_a_926_ = v___x_948_;
goto v___jp_925_;
}
}
else
{
lean_object* v_a_950_; lean_object* v___x_952_; uint8_t v_isShared_953_; uint8_t v_isSharedCheck_957_; 
lean_dec_ref(v_body_939_);
lean_del_object(v___x_935_);
lean_dec(v_snd_933_);
lean_dec(v_a_917_);
v_a_950_ = lean_ctor_get(v___x_944_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_944_);
if (v_isSharedCheck_957_ == 0)
{
v___x_952_ = v___x_944_;
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
else
{
lean_inc(v_a_950_);
lean_dec(v___x_944_);
v___x_952_ = lean_box(0);
v_isShared_953_ = v_isSharedCheck_957_;
goto v_resetjp_951_;
}
v_resetjp_951_:
{
lean_object* v___x_955_; 
if (v_isShared_953_ == 0)
{
v___x_955_ = v___x_952_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v_a_950_);
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
lean_object* v_a_958_; lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
lean_dec_ref(v_body_939_);
lean_dec(v_binderName_937_);
lean_del_object(v___x_935_);
lean_dec(v_snd_933_);
lean_dec(v_a_917_);
v_a_958_ = lean_ctor_get(v___x_940_, 0);
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_940_);
if (v_isSharedCheck_965_ == 0)
{
v___x_960_ = v___x_940_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_inc(v_a_958_);
lean_dec(v___x_940_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v_a_958_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
}
}
else
{
lean_object* v_snd_968_; lean_object* v___x_970_; uint8_t v_isShared_971_; uint8_t v_isSharedCheck_985_; 
v_snd_968_ = lean_ctor_get(v_b_918_, 1);
v_isSharedCheck_985_ = !lean_is_exclusive(v_b_918_);
if (v_isSharedCheck_985_ == 0)
{
lean_object* v_unused_986_; 
v_unused_986_ = lean_ctor_get(v_b_918_, 0);
lean_dec(v_unused_986_);
v___x_970_ = v_b_918_;
v_isShared_971_ = v_isSharedCheck_985_;
goto v_resetjp_969_;
}
else
{
lean_inc(v_snd_968_);
lean_dec(v_b_918_);
v___x_970_ = lean_box(0);
v_isShared_971_ = v_isSharedCheck_985_;
goto v_resetjp_969_;
}
v_resetjp_969_:
{
lean_object* v___x_972_; lean_object* v___x_973_; 
v___x_972_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0, &l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0_once, _init_l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___closed__0);
v___x_973_ = l_panic___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__0(v___x_972_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_);
if (lean_obj_tag(v___x_973_) == 0)
{
lean_object* v___x_975_; 
lean_dec_ref_known(v___x_973_, 1);
if (v_isShared_971_ == 0)
{
v___x_975_ = v___x_970_;
goto v_reusejp_974_;
}
else
{
lean_object* v_reuseFailAlloc_976_; 
v_reuseFailAlloc_976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_976_, 0, v_fst_932_);
lean_ctor_set(v_reuseFailAlloc_976_, 1, v_snd_968_);
v___x_975_ = v_reuseFailAlloc_976_;
goto v_reusejp_974_;
}
v_reusejp_974_:
{
v_a_926_ = v___x_975_;
goto v___jp_925_;
}
}
else
{
lean_object* v_a_977_; lean_object* v___x_979_; uint8_t v_isShared_980_; uint8_t v_isSharedCheck_984_; 
lean_del_object(v___x_970_);
lean_dec(v_snd_968_);
lean_dec(v_fst_932_);
lean_dec(v_a_917_);
v_a_977_ = lean_ctor_get(v___x_973_, 0);
v_isSharedCheck_984_ = !lean_is_exclusive(v___x_973_);
if (v_isSharedCheck_984_ == 0)
{
v___x_979_ = v___x_973_;
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
else
{
lean_inc(v_a_977_);
lean_dec(v___x_973_);
v___x_979_ = lean_box(0);
v_isShared_980_ = v_isSharedCheck_984_;
goto v_resetjp_978_;
}
v_resetjp_978_:
{
lean_object* v___x_982_; 
if (v_isShared_980_ == 0)
{
v___x_982_ = v___x_979_;
goto v_reusejp_981_;
}
else
{
lean_object* v_reuseFailAlloc_983_; 
v_reuseFailAlloc_983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_983_, 0, v_a_977_);
v___x_982_ = v_reuseFailAlloc_983_;
goto v_reusejp_981_;
}
v_reusejp_981_:
{
return v___x_982_;
}
}
}
}
}
}
v___jp_925_:
{
lean_object* v___x_927_; lean_object* v___x_928_; 
v___x_927_ = lean_unsigned_to_nat(1u);
v___x_928_ = lean_nat_add(v_a_917_, v___x_927_);
lean_dec(v_a_917_);
v_a_917_ = v___x_928_;
v_b_918_ = v_a_926_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg___boxed(lean_object* v_upperBound_987_, lean_object* v_a_988_, lean_object* v_b_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_987_, v_a_988_, v_b_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
lean_dec(v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec_ref(v___y_991_);
lean_dec(v___y_990_);
lean_dec(v_upperBound_987_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(lean_object* v_ctorType_997_, lean_object* v_numParams_998_, lean_object* v_numNewFields_999_, lean_object* v_oldFields_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_){
_start:
{
lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1007_ = lean_unsigned_to_nat(0u);
v___x_1008_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_numParams_998_, v___x_1007_, v_ctorType_997_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1010_ = lean_array_get_size(v_oldFields_1000_);
v___x_1011_ = lean_nat_add(v___x_1010_, v_numNewFields_999_);
v___x_1012_ = lean_mk_empty_array_with_capacity(v___x_1011_);
lean_dec(v___x_1011_);
v___x_1013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1013_, 0, v_a_1009_);
lean_ctor_set(v___x_1013_, 1, v___x_1012_);
v___x_1014_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_numNewFields_999_, v___x_1007_, v___x_1013_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_);
if (lean_obj_tag(v___x_1014_) == 0)
{
lean_object* v_a_1015_; lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1024_; 
v_a_1015_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1024_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1024_ == 0)
{
v___x_1017_ = v___x_1014_;
v_isShared_1018_ = v_isSharedCheck_1024_;
goto v_resetjp_1016_;
}
else
{
lean_inc(v_a_1015_);
lean_dec(v___x_1014_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1024_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v_snd_1019_; lean_object* v___x_1020_; lean_object* v___x_1022_; 
v_snd_1019_ = lean_ctor_get(v_a_1015_, 1);
lean_inc(v_snd_1019_);
lean_dec(v_a_1015_);
v___x_1020_ = l_Array_append___redArg(v_snd_1019_, v_oldFields_1000_);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v___x_1020_);
v___x_1022_ = v___x_1017_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v___x_1020_);
v___x_1022_ = v_reuseFailAlloc_1023_;
goto v_reusejp_1021_;
}
v_reusejp_1021_:
{
return v___x_1022_;
}
}
}
else
{
lean_object* v_a_1025_; lean_object* v___x_1027_; uint8_t v_isShared_1028_; uint8_t v_isSharedCheck_1032_; 
v_a_1025_ = lean_ctor_get(v___x_1014_, 0);
v_isSharedCheck_1032_ = !lean_is_exclusive(v___x_1014_);
if (v_isSharedCheck_1032_ == 0)
{
v___x_1027_ = v___x_1014_;
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
else
{
lean_inc(v_a_1025_);
lean_dec(v___x_1014_);
v___x_1027_ = lean_box(0);
v_isShared_1028_ = v_isSharedCheck_1032_;
goto v_resetjp_1026_;
}
v_resetjp_1026_:
{
lean_object* v___x_1030_; 
if (v_isShared_1028_ == 0)
{
v___x_1030_ = v___x_1027_;
goto v_reusejp_1029_;
}
else
{
lean_object* v_reuseFailAlloc_1031_; 
v_reuseFailAlloc_1031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1031_, 0, v_a_1025_);
v___x_1030_ = v_reuseFailAlloc_1031_;
goto v_reusejp_1029_;
}
v_reusejp_1029_:
{
return v___x_1030_;
}
}
}
}
else
{
lean_object* v_a_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1040_; 
v_a_1033_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1040_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1035_ = v___x_1008_;
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_a_1033_);
lean_dec(v___x_1008_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1040_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
lean_object* v___x_1038_; 
if (v_isShared_1036_ == 0)
{
v___x_1038_ = v___x_1035_;
goto v_reusejp_1037_;
}
else
{
lean_object* v_reuseFailAlloc_1039_; 
v_reuseFailAlloc_1039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1039_, 0, v_a_1033_);
v___x_1038_ = v_reuseFailAlloc_1039_;
goto v_reusejp_1037_;
}
v_reusejp_1037_:
{
return v___x_1038_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields___boxed(lean_object* v_ctorType_1041_, lean_object* v_numParams_1042_, lean_object* v_numNewFields_1043_, lean_object* v_oldFields_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_, lean_object* v_a_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_ctorType_1041_, v_numParams_1042_, v_numNewFields_1043_, v_oldFields_1044_, v_a_1045_, v_a_1046_, v_a_1047_, v_a_1048_, v_a_1049_);
lean_dec(v_a_1049_);
lean_dec_ref(v_a_1048_);
lean_dec(v_a_1047_);
lean_dec_ref(v_a_1046_);
lean_dec(v_a_1045_);
lean_dec_ref(v_oldFields_1044_);
lean_dec(v_numNewFields_1043_);
lean_dec(v_numParams_1042_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(lean_object* v_upperBound_1052_, lean_object* v_inst_1053_, lean_object* v_R_1054_, lean_object* v_a_1055_, lean_object* v_b_1056_, lean_object* v_c_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v___x_1064_; 
v___x_1064_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___redArg(v_upperBound_1052_, v_a_1055_, v_b_1056_, v___y_1058_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1___boxed(lean_object* v_upperBound_1065_, lean_object* v_inst_1066_, lean_object* v_R_1067_, lean_object* v_a_1068_, lean_object* v_b_1069_, lean_object* v_c_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v_res_1077_; 
v_res_1077_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__1(v_upperBound_1065_, v_inst_1066_, v_R_1067_, v_a_1068_, v_b_1069_, v_c_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
lean_dec(v_upperBound_1065_);
return v_res_1077_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(lean_object* v_upperBound_1078_, lean_object* v_inst_1079_, lean_object* v_R_1080_, lean_object* v_a_1081_, lean_object* v_b_1082_, lean_object* v_c_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_){
_start:
{
lean_object* v___x_1090_; 
v___x_1090_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___redArg(v_upperBound_1078_, v_a_1081_, v_b_1082_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
return v___x_1090_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2___boxed(lean_object* v_upperBound_1091_, lean_object* v_inst_1092_, lean_object* v_R_1093_, lean_object* v_a_1094_, lean_object* v_b_1095_, lean_object* v_c_1096_, lean_object* v___y_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_WellFounded_opaqueFix_u2083___at___00Lean_Compiler_LCNF_mkFieldParamsForComputedFields_spec__2(v_upperBound_1091_, v_inst_1092_, v_R_1093_, v_a_1094_, v_b_1095_, v_c_1096_, v___y_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
lean_dec(v___y_1097_);
lean_dec(v_upperBound_1091_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(size_t v_sz_1104_, size_t v_i_1105_, lean_object* v_bs_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
uint8_t v___x_1112_; 
v___x_1112_ = lean_usize_dec_lt(v_i_1105_, v_sz_1104_);
if (v___x_1112_ == 0)
{
lean_object* v___x_1113_; 
v___x_1113_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1113_, 0, v_bs_1106_);
return v___x_1113_;
}
else
{
lean_object* v_v_1114_; lean_object* v___x_1115_; lean_object* v_bs_x27_1116_; lean_object* v___x_1117_; 
v_v_1114_ = lean_array_uget(v_bs_1106_, v_i_1105_);
v___x_1115_ = lean_unsigned_to_nat(0u);
v_bs_x27_1116_ = lean_array_uset(v_bs_1106_, v_i_1105_, v___x_1115_);
v___x_1117_ = l_Lean_Compiler_LCNF_Param_toMono___redArg(v_v_1114_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_);
if (lean_obj_tag(v___x_1117_) == 0)
{
lean_object* v_a_1118_; size_t v___x_1119_; size_t v___x_1120_; lean_object* v___x_1121_; 
v_a_1118_ = lean_ctor_get(v___x_1117_, 0);
lean_inc(v_a_1118_);
lean_dec_ref_known(v___x_1117_, 1);
v___x_1119_ = ((size_t)1ULL);
v___x_1120_ = lean_usize_add(v_i_1105_, v___x_1119_);
v___x_1121_ = lean_array_uset(v_bs_x27_1116_, v_i_1105_, v_a_1118_);
v_i_1105_ = v___x_1120_;
v_bs_1106_ = v___x_1121_;
goto _start;
}
else
{
lean_object* v_a_1123_; lean_object* v___x_1125_; uint8_t v_isShared_1126_; uint8_t v_isSharedCheck_1130_; 
lean_dec_ref(v_bs_x27_1116_);
v_a_1123_ = lean_ctor_get(v___x_1117_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1125_ = v___x_1117_;
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
else
{
lean_inc(v_a_1123_);
lean_dec(v___x_1117_);
v___x_1125_ = lean_box(0);
v_isShared_1126_ = v_isSharedCheck_1130_;
goto v_resetjp_1124_;
}
v_resetjp_1124_:
{
lean_object* v___x_1128_; 
if (v_isShared_1126_ == 0)
{
v___x_1128_ = v___x_1125_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v_a_1123_);
v___x_1128_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
return v___x_1128_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg___boxed(lean_object* v_sz_1131_, lean_object* v_i_1132_, lean_object* v_bs_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
size_t v_sz_boxed_1139_; size_t v_i_boxed_1140_; lean_object* v_res_1141_; 
v_sz_boxed_1139_ = lean_unbox_usize(v_sz_1131_);
lean_dec(v_sz_1131_);
v_i_boxed_1140_ = lean_unbox_usize(v_i_1132_);
lean_dec(v_i_1132_);
v_res_1141_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_boxed_1139_, v_i_boxed_1140_, v_bs_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec(v___y_1134_);
return v_res_1141_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0(void){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(lean_object* v_msg_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_, lean_object* v___y_1148_){
_start:
{
lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v_toApplicative_1152_; lean_object* v___x_1154_; uint8_t v_isShared_1155_; uint8_t v_isSharedCheck_1214_; 
v___x_1150_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1151_ = l_StateRefT_x27_instMonad___redArg(v___x_1150_);
v_toApplicative_1152_ = lean_ctor_get(v___x_1151_, 0);
v_isSharedCheck_1214_ = !lean_is_exclusive(v___x_1151_);
if (v_isSharedCheck_1214_ == 0)
{
lean_object* v_unused_1215_; 
v_unused_1215_ = lean_ctor_get(v___x_1151_, 1);
lean_dec(v_unused_1215_);
v___x_1154_ = v___x_1151_;
v_isShared_1155_ = v_isSharedCheck_1214_;
goto v_resetjp_1153_;
}
else
{
lean_inc(v_toApplicative_1152_);
lean_dec(v___x_1151_);
v___x_1154_ = lean_box(0);
v_isShared_1155_ = v_isSharedCheck_1214_;
goto v_resetjp_1153_;
}
v_resetjp_1153_:
{
lean_object* v_toFunctor_1156_; lean_object* v_toSeq_1157_; lean_object* v_toSeqLeft_1158_; lean_object* v_toSeqRight_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1212_; 
v_toFunctor_1156_ = lean_ctor_get(v_toApplicative_1152_, 0);
v_toSeq_1157_ = lean_ctor_get(v_toApplicative_1152_, 2);
v_toSeqLeft_1158_ = lean_ctor_get(v_toApplicative_1152_, 3);
v_toSeqRight_1159_ = lean_ctor_get(v_toApplicative_1152_, 4);
v_isSharedCheck_1212_ = !lean_is_exclusive(v_toApplicative_1152_);
if (v_isSharedCheck_1212_ == 0)
{
lean_object* v_unused_1213_; 
v_unused_1213_ = lean_ctor_get(v_toApplicative_1152_, 1);
lean_dec(v_unused_1213_);
v___x_1161_ = v_toApplicative_1152_;
v_isShared_1162_ = v_isSharedCheck_1212_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_toSeqRight_1159_);
lean_inc(v_toSeqLeft_1158_);
lean_inc(v_toSeq_1157_);
lean_inc(v_toFunctor_1156_);
lean_dec(v_toApplicative_1152_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1212_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___f_1163_; lean_object* v___f_1164_; lean_object* v___f_1165_; lean_object* v___f_1166_; lean_object* v___x_1167_; lean_object* v___f_1168_; lean_object* v___f_1169_; lean_object* v___f_1170_; lean_object* v___x_1172_; 
v___f_1163_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1164_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1156_);
v___f_1165_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1165_, 0, v_toFunctor_1156_);
v___f_1166_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1166_, 0, v_toFunctor_1156_);
v___x_1167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1167_, 0, v___f_1165_);
lean_ctor_set(v___x_1167_, 1, v___f_1166_);
v___f_1168_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1168_, 0, v_toSeqRight_1159_);
v___f_1169_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1169_, 0, v_toSeqLeft_1158_);
v___f_1170_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1170_, 0, v_toSeq_1157_);
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 4, v___f_1168_);
lean_ctor_set(v___x_1161_, 3, v___f_1169_);
lean_ctor_set(v___x_1161_, 2, v___f_1170_);
lean_ctor_set(v___x_1161_, 1, v___f_1163_);
lean_ctor_set(v___x_1161_, 0, v___x_1167_);
v___x_1172_ = v___x_1161_;
goto v_reusejp_1171_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1167_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v___f_1163_);
lean_ctor_set(v_reuseFailAlloc_1211_, 2, v___f_1170_);
lean_ctor_set(v_reuseFailAlloc_1211_, 3, v___f_1169_);
lean_ctor_set(v_reuseFailAlloc_1211_, 4, v___f_1168_);
v___x_1172_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1171_;
}
v_reusejp_1171_:
{
lean_object* v___x_1174_; 
if (v_isShared_1155_ == 0)
{
lean_ctor_set(v___x_1154_, 1, v___f_1164_);
lean_ctor_set(v___x_1154_, 0, v___x_1172_);
v___x_1174_ = v___x_1154_;
goto v_reusejp_1173_;
}
else
{
lean_object* v_reuseFailAlloc_1210_; 
v_reuseFailAlloc_1210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1210_, 0, v___x_1172_);
lean_ctor_set(v_reuseFailAlloc_1210_, 1, v___f_1164_);
v___x_1174_ = v_reuseFailAlloc_1210_;
goto v_reusejp_1173_;
}
v_reusejp_1173_:
{
lean_object* v___x_1175_; lean_object* v_toApplicative_1176_; lean_object* v___x_1178_; uint8_t v_isShared_1179_; uint8_t v_isSharedCheck_1208_; 
v___x_1175_ = l_StateRefT_x27_instMonad___redArg(v___x_1174_);
v_toApplicative_1176_ = lean_ctor_get(v___x_1175_, 0);
v_isSharedCheck_1208_ = !lean_is_exclusive(v___x_1175_);
if (v_isSharedCheck_1208_ == 0)
{
lean_object* v_unused_1209_; 
v_unused_1209_ = lean_ctor_get(v___x_1175_, 1);
lean_dec(v_unused_1209_);
v___x_1178_ = v___x_1175_;
v_isShared_1179_ = v_isSharedCheck_1208_;
goto v_resetjp_1177_;
}
else
{
lean_inc(v_toApplicative_1176_);
lean_dec(v___x_1175_);
v___x_1178_ = lean_box(0);
v_isShared_1179_ = v_isSharedCheck_1208_;
goto v_resetjp_1177_;
}
v_resetjp_1177_:
{
lean_object* v_toFunctor_1180_; lean_object* v_toSeq_1181_; lean_object* v_toSeqLeft_1182_; lean_object* v_toSeqRight_1183_; lean_object* v___x_1185_; uint8_t v_isShared_1186_; uint8_t v_isSharedCheck_1206_; 
v_toFunctor_1180_ = lean_ctor_get(v_toApplicative_1176_, 0);
v_toSeq_1181_ = lean_ctor_get(v_toApplicative_1176_, 2);
v_toSeqLeft_1182_ = lean_ctor_get(v_toApplicative_1176_, 3);
v_toSeqRight_1183_ = lean_ctor_get(v_toApplicative_1176_, 4);
v_isSharedCheck_1206_ = !lean_is_exclusive(v_toApplicative_1176_);
if (v_isSharedCheck_1206_ == 0)
{
lean_object* v_unused_1207_; 
v_unused_1207_ = lean_ctor_get(v_toApplicative_1176_, 1);
lean_dec(v_unused_1207_);
v___x_1185_ = v_toApplicative_1176_;
v_isShared_1186_ = v_isSharedCheck_1206_;
goto v_resetjp_1184_;
}
else
{
lean_inc(v_toSeqRight_1183_);
lean_inc(v_toSeqLeft_1182_);
lean_inc(v_toSeq_1181_);
lean_inc(v_toFunctor_1180_);
lean_dec(v_toApplicative_1176_);
v___x_1185_ = lean_box(0);
v_isShared_1186_ = v_isSharedCheck_1206_;
goto v_resetjp_1184_;
}
v_resetjp_1184_:
{
lean_object* v___f_1187_; lean_object* v___f_1188_; lean_object* v___f_1189_; lean_object* v___f_1190_; lean_object* v___x_1191_; lean_object* v___f_1192_; lean_object* v___f_1193_; lean_object* v___f_1194_; lean_object* v___x_1196_; 
v___f_1187_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1188_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1180_);
v___f_1189_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1189_, 0, v_toFunctor_1180_);
v___f_1190_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1190_, 0, v_toFunctor_1180_);
v___x_1191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1191_, 0, v___f_1189_);
lean_ctor_set(v___x_1191_, 1, v___f_1190_);
v___f_1192_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1192_, 0, v_toSeqRight_1183_);
v___f_1193_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1193_, 0, v_toSeqLeft_1182_);
v___f_1194_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1194_, 0, v_toSeq_1181_);
if (v_isShared_1186_ == 0)
{
lean_ctor_set(v___x_1185_, 4, v___f_1192_);
lean_ctor_set(v___x_1185_, 3, v___f_1193_);
lean_ctor_set(v___x_1185_, 2, v___f_1194_);
lean_ctor_set(v___x_1185_, 1, v___f_1187_);
lean_ctor_set(v___x_1185_, 0, v___x_1191_);
v___x_1196_ = v___x_1185_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1205_; 
v_reuseFailAlloc_1205_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1205_, 0, v___x_1191_);
lean_ctor_set(v_reuseFailAlloc_1205_, 1, v___f_1187_);
lean_ctor_set(v_reuseFailAlloc_1205_, 2, v___f_1194_);
lean_ctor_set(v_reuseFailAlloc_1205_, 3, v___f_1193_);
lean_ctor_set(v_reuseFailAlloc_1205_, 4, v___f_1192_);
v___x_1196_ = v_reuseFailAlloc_1205_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
lean_object* v___x_1198_; 
if (v_isShared_1179_ == 0)
{
lean_ctor_set(v___x_1178_, 1, v___f_1188_);
lean_ctor_set(v___x_1178_, 0, v___x_1196_);
v___x_1198_ = v___x_1178_;
goto v_reusejp_1197_;
}
else
{
lean_object* v_reuseFailAlloc_1204_; 
v_reuseFailAlloc_1204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1204_, 0, v___x_1196_);
lean_ctor_set(v_reuseFailAlloc_1204_, 1, v___f_1188_);
v___x_1198_ = v_reuseFailAlloc_1204_;
goto v_reusejp_1197_;
}
v_reusejp_1197_:
{
lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1201_; lean_object* v___x_30680__overap_1202_; lean_object* v___x_1203_; 
v___x_1199_ = l_StateRefT_x27_instMonad___redArg(v___x_1198_);
v___x_1200_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1201_ = l_instInhabitedOfMonad___redArg(v___x_1199_, v___x_1200_);
v___x_30680__overap_1202_ = lean_panic_fn_borrowed(v___x_1201_, v_msg_1143_);
lean_dec(v___x_1201_);
lean_inc(v___y_1148_);
lean_inc_ref(v___y_1147_);
lean_inc(v___y_1146_);
lean_inc_ref(v___y_1145_);
lean_inc(v___y_1144_);
v___x_1203_ = lean_apply_6(v___x_30680__overap_1202_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_, v___y_1148_, lean_box(0));
return v___x_1203_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___boxed(lean_object* v_msg_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v_msg_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
lean_dec(v___y_1221_);
lean_dec_ref(v___y_1220_);
lean_dec(v___y_1219_);
lean_dec_ref(v___y_1218_);
lean_dec(v___y_1217_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(lean_object* v_msg_1224_){
_start:
{
lean_object* v___x_1225_; lean_object* v___x_1226_; 
v___x_1225_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3___closed__0);
v___x_1226_ = lean_panic_fn_borrowed(v___x_1225_, v_msg_1224_);
return v___x_1226_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0(void){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_Compiler_LCNF_instInhabitedAlt_default__1___redArg();
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(lean_object* v_msg_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v_toApplicative_1237_; lean_object* v___x_1239_; uint8_t v_isShared_1240_; uint8_t v_isSharedCheck_1299_; 
v___x_1235_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0, &l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__0);
v___x_1236_ = l_StateRefT_x27_instMonad___redArg(v___x_1235_);
v_toApplicative_1237_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1299_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1299_ == 0)
{
lean_object* v_unused_1300_; 
v_unused_1300_ = lean_ctor_get(v___x_1236_, 1);
lean_dec(v_unused_1300_);
v___x_1239_ = v___x_1236_;
v_isShared_1240_ = v_isSharedCheck_1299_;
goto v_resetjp_1238_;
}
else
{
lean_inc(v_toApplicative_1237_);
lean_dec(v___x_1236_);
v___x_1239_ = lean_box(0);
v_isShared_1240_ = v_isSharedCheck_1299_;
goto v_resetjp_1238_;
}
v_resetjp_1238_:
{
lean_object* v_toFunctor_1241_; lean_object* v_toSeq_1242_; lean_object* v_toSeqLeft_1243_; lean_object* v_toSeqRight_1244_; lean_object* v___x_1246_; uint8_t v_isShared_1247_; uint8_t v_isSharedCheck_1297_; 
v_toFunctor_1241_ = lean_ctor_get(v_toApplicative_1237_, 0);
v_toSeq_1242_ = lean_ctor_get(v_toApplicative_1237_, 2);
v_toSeqLeft_1243_ = lean_ctor_get(v_toApplicative_1237_, 3);
v_toSeqRight_1244_ = lean_ctor_get(v_toApplicative_1237_, 4);
v_isSharedCheck_1297_ = !lean_is_exclusive(v_toApplicative_1237_);
if (v_isSharedCheck_1297_ == 0)
{
lean_object* v_unused_1298_; 
v_unused_1298_ = lean_ctor_get(v_toApplicative_1237_, 1);
lean_dec(v_unused_1298_);
v___x_1246_ = v_toApplicative_1237_;
v_isShared_1247_ = v_isSharedCheck_1297_;
goto v_resetjp_1245_;
}
else
{
lean_inc(v_toSeqRight_1244_);
lean_inc(v_toSeqLeft_1243_);
lean_inc(v_toSeq_1242_);
lean_inc(v_toFunctor_1241_);
lean_dec(v_toApplicative_1237_);
v___x_1246_ = lean_box(0);
v_isShared_1247_ = v_isSharedCheck_1297_;
goto v_resetjp_1245_;
}
v_resetjp_1245_:
{
lean_object* v___f_1248_; lean_object* v___f_1249_; lean_object* v___f_1250_; lean_object* v___f_1251_; lean_object* v___x_1252_; lean_object* v___f_1253_; lean_object* v___f_1254_; lean_object* v___f_1255_; lean_object* v___x_1257_; 
v___f_1248_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__1));
v___f_1249_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__2));
lean_inc_ref(v_toFunctor_1241_);
v___f_1250_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1250_, 0, v_toFunctor_1241_);
v___f_1251_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1251_, 0, v_toFunctor_1241_);
v___x_1252_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___f_1250_);
lean_ctor_set(v___x_1252_, 1, v___f_1251_);
v___f_1253_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1253_, 0, v_toSeqRight_1244_);
v___f_1254_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1254_, 0, v_toSeqLeft_1243_);
v___f_1255_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1255_, 0, v_toSeq_1242_);
if (v_isShared_1247_ == 0)
{
lean_ctor_set(v___x_1246_, 4, v___f_1253_);
lean_ctor_set(v___x_1246_, 3, v___f_1254_);
lean_ctor_set(v___x_1246_, 2, v___f_1255_);
lean_ctor_set(v___x_1246_, 1, v___f_1248_);
lean_ctor_set(v___x_1246_, 0, v___x_1252_);
v___x_1257_ = v___x_1246_;
goto v_reusejp_1256_;
}
else
{
lean_object* v_reuseFailAlloc_1296_; 
v_reuseFailAlloc_1296_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1296_, 0, v___x_1252_);
lean_ctor_set(v_reuseFailAlloc_1296_, 1, v___f_1248_);
lean_ctor_set(v_reuseFailAlloc_1296_, 2, v___f_1255_);
lean_ctor_set(v_reuseFailAlloc_1296_, 3, v___f_1254_);
lean_ctor_set(v_reuseFailAlloc_1296_, 4, v___f_1253_);
v___x_1257_ = v_reuseFailAlloc_1296_;
goto v_reusejp_1256_;
}
v_reusejp_1256_:
{
lean_object* v___x_1259_; 
if (v_isShared_1240_ == 0)
{
lean_ctor_set(v___x_1239_, 1, v___f_1249_);
lean_ctor_set(v___x_1239_, 0, v___x_1257_);
v___x_1259_ = v___x_1239_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1295_, 1, v___f_1249_);
v___x_1259_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
lean_object* v___x_1260_; lean_object* v_toApplicative_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1293_; 
v___x_1260_ = l_StateRefT_x27_instMonad___redArg(v___x_1259_);
v_toApplicative_1261_ = lean_ctor_get(v___x_1260_, 0);
v_isSharedCheck_1293_ = !lean_is_exclusive(v___x_1260_);
if (v_isSharedCheck_1293_ == 0)
{
lean_object* v_unused_1294_; 
v_unused_1294_ = lean_ctor_get(v___x_1260_, 1);
lean_dec(v_unused_1294_);
v___x_1263_ = v___x_1260_;
v_isShared_1264_ = v_isSharedCheck_1293_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_toApplicative_1261_);
lean_dec(v___x_1260_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1293_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v_toFunctor_1265_; lean_object* v_toSeq_1266_; lean_object* v_toSeqLeft_1267_; lean_object* v_toSeqRight_1268_; lean_object* v___x_1270_; uint8_t v_isShared_1271_; uint8_t v_isSharedCheck_1291_; 
v_toFunctor_1265_ = lean_ctor_get(v_toApplicative_1261_, 0);
v_toSeq_1266_ = lean_ctor_get(v_toApplicative_1261_, 2);
v_toSeqLeft_1267_ = lean_ctor_get(v_toApplicative_1261_, 3);
v_toSeqRight_1268_ = lean_ctor_get(v_toApplicative_1261_, 4);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_toApplicative_1261_);
if (v_isSharedCheck_1291_ == 0)
{
lean_object* v_unused_1292_; 
v_unused_1292_ = lean_ctor_get(v_toApplicative_1261_, 1);
lean_dec(v_unused_1292_);
v___x_1270_ = v_toApplicative_1261_;
v_isShared_1271_ = v_isSharedCheck_1291_;
goto v_resetjp_1269_;
}
else
{
lean_inc(v_toSeqRight_1268_);
lean_inc(v_toSeqLeft_1267_);
lean_inc(v_toSeq_1266_);
lean_inc(v_toFunctor_1265_);
lean_dec(v_toApplicative_1261_);
v___x_1270_ = lean_box(0);
v_isShared_1271_ = v_isSharedCheck_1291_;
goto v_resetjp_1269_;
}
v_resetjp_1269_:
{
lean_object* v___f_1272_; lean_object* v___f_1273_; lean_object* v___f_1274_; lean_object* v___f_1275_; lean_object* v___x_1276_; lean_object* v___f_1277_; lean_object* v___f_1278_; lean_object* v___f_1279_; lean_object* v___x_1281_; 
v___f_1272_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__3));
v___f_1273_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_LetValue_toMono_spec__0___closed__4));
lean_inc_ref(v_toFunctor_1265_);
v___f_1274_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1274_, 0, v_toFunctor_1265_);
v___f_1275_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1275_, 0, v_toFunctor_1265_);
v___x_1276_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1276_, 0, v___f_1274_);
lean_ctor_set(v___x_1276_, 1, v___f_1275_);
v___f_1277_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1277_, 0, v_toSeqRight_1268_);
v___f_1278_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1278_, 0, v_toSeqLeft_1267_);
v___f_1279_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1279_, 0, v_toSeq_1266_);
if (v_isShared_1271_ == 0)
{
lean_ctor_set(v___x_1270_, 4, v___f_1277_);
lean_ctor_set(v___x_1270_, 3, v___f_1278_);
lean_ctor_set(v___x_1270_, 2, v___f_1279_);
lean_ctor_set(v___x_1270_, 1, v___f_1272_);
lean_ctor_set(v___x_1270_, 0, v___x_1276_);
v___x_1281_ = v___x_1270_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v___x_1276_);
lean_ctor_set(v_reuseFailAlloc_1290_, 1, v___f_1272_);
lean_ctor_set(v_reuseFailAlloc_1290_, 2, v___f_1279_);
lean_ctor_set(v_reuseFailAlloc_1290_, 3, v___f_1278_);
lean_ctor_set(v_reuseFailAlloc_1290_, 4, v___f_1277_);
v___x_1281_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
lean_object* v___x_1283_; 
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 1, v___f_1273_);
lean_ctor_set(v___x_1263_, 0, v___x_1281_);
v___x_1283_ = v___x_1263_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1281_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v___f_1273_);
v___x_1283_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_30695__overap_1287_; lean_object* v___x_1288_; 
v___x_1284_ = l_StateRefT_x27_instMonad___redArg(v___x_1283_);
v___x_1285_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1286_ = l_instInhabitedOfMonad___redArg(v___x_1284_, v___x_1285_);
v___x_30695__overap_1287_ = lean_panic_fn_borrowed(v___x_1286_, v_msg_1228_);
lean_dec(v___x_1286_);
lean_inc(v___y_1233_);
lean_inc_ref(v___y_1232_);
lean_inc(v___y_1231_);
lean_inc_ref(v___y_1230_);
lean_inc(v___y_1229_);
v___x_1288_ = lean_apply_6(v___x_30695__overap_1287_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, lean_box(0));
return v___x_1288_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___boxed(lean_object* v_msg_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_, lean_object* v___y_1304_, lean_object* v___y_1305_, lean_object* v___y_1306_, lean_object* v___y_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v_msg_1301_, v___y_1302_, v___y_1303_, v___y_1304_, v___y_1305_, v___y_1306_);
lean_dec(v___y_1306_);
lean_dec_ref(v___y_1305_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
return v_res_1308_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2(void){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; 
v___x_1311_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1312_ = lean_unsigned_to_nat(9u);
v___x_1313_ = lean_unsigned_to_nat(650u);
v___x_1314_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__1));
v___x_1315_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__0));
v___x_1316_ = l_mkPanicMessageWithDecl(v___x_1315_, v___x_1314_, v___x_1313_, v___x_1312_, v___x_1311_);
return v___x_1316_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4(void){
_start:
{
lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; 
v___x_1319_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__3));
v___x_1320_ = lean_unsigned_to_nat(66u);
v___x_1321_ = lean_unsigned_to_nat(363u);
v___x_1322_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1323_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1324_ = l_mkPanicMessageWithDecl(v___x_1323_, v___x_1322_, v___x_1321_, v___x_1320_, v___x_1319_);
return v___x_1324_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5(void){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; 
v___x_1325_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1326_ = lean_unsigned_to_nat(27u);
v___x_1327_ = lean_unsigned_to_nat(319u);
v___x_1328_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1329_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1330_ = l_mkPanicMessageWithDecl(v___x_1329_, v___x_1328_, v___x_1327_, v___x_1326_, v___x_1325_);
return v___x_1330_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1(void){
_start:
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1385_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1386_ = lean_unsigned_to_nat(2u);
v___x_1387_ = lean_unsigned_to_nat(302u);
v___x_1388_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1389_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1390_ = l_mkPanicMessageWithDecl(v___x_1389_, v___x_1388_, v___x_1387_, v___x_1386_, v___x_1385_);
return v___x_1390_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3(void){
_start:
{
lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1392_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__2));
v___x_1393_ = lean_unsigned_to_nat(2u);
v___x_1394_ = lean_unsigned_to_nat(304u);
v___x_1395_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1396_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1397_ = l_mkPanicMessageWithDecl(v___x_1396_, v___x_1395_, v___x_1394_, v___x_1393_, v___x_1392_);
return v___x_1397_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5(void){
_start:
{
lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1399_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__4));
v___x_1400_ = lean_unsigned_to_nat(2u);
v___x_1401_ = lean_unsigned_to_nat(305u);
v___x_1402_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1403_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1404_ = l_mkPanicMessageWithDecl(v___x_1403_, v___x_1402_, v___x_1401_, v___x_1400_, v___x_1399_);
return v___x_1404_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3(void){
_start:
{
lean_object* v___x_1405_; 
v___x_1405_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_1405_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6(void){
_start:
{
lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1406_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1407_ = lean_unsigned_to_nat(41u);
v___x_1408_ = lean_unsigned_to_nat(303u);
v___x_1409_ = ((lean_object*)(l_Lean_Compiler_LCNF_trivialStructToMono___closed__0));
v___x_1410_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1411_ = l_mkPanicMessageWithDecl(v___x_1410_, v___x_1409_, v___x_1408_, v___x_1407_, v___x_1406_);
return v___x_1411_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono(lean_object* v_info_1412_, lean_object* v_c_1413_, lean_object* v_a_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_){
_start:
{
lean_object* v_discr_1420_; lean_object* v_alts_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1499_; 
v_discr_1420_ = lean_ctor_get(v_c_1413_, 2);
v_alts_1421_ = lean_ctor_get(v_c_1413_, 3);
v_isSharedCheck_1499_ = !lean_is_exclusive(v_c_1413_);
if (v_isSharedCheck_1499_ == 0)
{
lean_object* v_unused_1500_; lean_object* v_unused_1501_; 
v_unused_1500_ = lean_ctor_get(v_c_1413_, 1);
lean_dec(v_unused_1500_);
v_unused_1501_ = lean_ctor_get(v_c_1413_, 0);
lean_dec(v_unused_1501_);
v___x_1423_ = v_c_1413_;
v_isShared_1424_ = v_isSharedCheck_1499_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_alts_1421_);
lean_inc(v_discr_1420_);
lean_dec(v_c_1413_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1499_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; uint8_t v___x_1427_; 
v___x_1425_ = lean_array_get_size(v_alts_1421_);
v___x_1426_ = lean_unsigned_to_nat(1u);
v___x_1427_ = lean_nat_dec_eq(v___x_1425_, v___x_1426_);
if (v___x_1427_ == 0)
{
lean_object* v___x_1428_; lean_object* v___x_1429_; 
lean_del_object(v___x_1423_);
lean_dec_ref(v_alts_1421_);
lean_dec(v_discr_1420_);
v___x_1428_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__1, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__1_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__1);
v___x_1429_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1428_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_);
return v___x_1429_;
}
else
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; 
v___x_1430_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1431_ = lean_unsigned_to_nat(0u);
v___x_1432_ = lean_array_get(v___x_1430_, v_alts_1421_, v___x_1431_);
lean_dec_ref(v_alts_1421_);
if (lean_obj_tag(v___x_1432_) == 0)
{
lean_object* v_ctorName_1433_; lean_object* v_params_1434_; lean_object* v_code_1435_; lean_object* v_ctorName_1436_; lean_object* v_fieldIdx_1437_; uint8_t v___x_1438_; 
v_ctorName_1433_ = lean_ctor_get(v___x_1432_, 0);
lean_inc(v_ctorName_1433_);
v_params_1434_ = lean_ctor_get(v___x_1432_, 1);
lean_inc_ref(v_params_1434_);
v_code_1435_ = lean_ctor_get(v___x_1432_, 2);
lean_inc_ref(v_code_1435_);
lean_dec_ref_known(v___x_1432_, 3);
v_ctorName_1436_ = lean_ctor_get(v_info_1412_, 0);
v_fieldIdx_1437_ = lean_ctor_get(v_info_1412_, 2);
v___x_1438_ = lean_name_eq(v_ctorName_1433_, v_ctorName_1436_);
lean_dec(v_ctorName_1433_);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
lean_dec_ref(v_code_1435_);
lean_dec_ref(v_params_1434_);
lean_del_object(v___x_1423_);
lean_dec(v_discr_1420_);
v___x_1439_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__3, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__3_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__3);
v___x_1440_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1439_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_);
return v___x_1440_;
}
else
{
lean_object* v___x_1441_; uint8_t v___x_1442_; 
v___x_1441_ = lean_array_get_size(v_params_1434_);
v___x_1442_ = lean_nat_dec_lt(v_fieldIdx_1437_, v___x_1441_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; lean_object* v___x_1444_; 
lean_dec_ref(v_code_1435_);
lean_dec_ref(v_params_1434_);
lean_del_object(v___x_1423_);
lean_dec(v_discr_1420_);
v___x_1443_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__5, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__5_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__5);
v___x_1444_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1443_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_);
return v___x_1444_;
}
else
{
uint8_t v___x_1445_; lean_object* v___x_1446_; lean_object* v_p_1447_; lean_object* v___x_1448_; 
v___x_1445_ = 0;
v___x_1446_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v_p_1447_ = lean_array_get(v___x_1446_, v_params_1434_, v_fieldIdx_1437_);
v___x_1448_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1445_, v_params_1434_, v_a_1416_);
lean_dec_ref(v_params_1434_);
if (lean_obj_tag(v___x_1448_) == 0)
{
lean_object* v_fvarId_1449_; lean_object* v_binderName_1450_; lean_object* v_type_1451_; lean_object* v___x_1452_; 
lean_dec_ref_known(v___x_1448_, 1);
v_fvarId_1449_ = lean_ctor_get(v_p_1447_, 0);
lean_inc(v_fvarId_1449_);
v_binderName_1450_ = lean_ctor_get(v_p_1447_, 1);
lean_inc(v_binderName_1450_);
v_type_1451_ = lean_ctor_get(v_p_1447_, 2);
lean_inc_ref(v_type_1451_);
lean_dec(v_p_1447_);
v___x_1452_ = l_Lean_Compiler_LCNF_toMonoType(v_type_1451_, v_a_1417_, v_a_1418_);
if (lean_obj_tag(v___x_1452_) == 0)
{
lean_object* v_a_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1457_; 
v_a_1453_ = lean_ctor_get(v___x_1452_, 0);
lean_inc(v_a_1453_);
lean_dec_ref_known(v___x_1452_, 1);
v___x_1454_ = ((lean_object*)(l_Lean_Compiler_LCNF_ctorAppToMono___closed__0));
v___x_1455_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_1455_, 0, v_discr_1420_);
lean_ctor_set(v___x_1455_, 1, v___x_1454_);
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 3, v___x_1455_);
lean_ctor_set(v___x_1423_, 2, v_a_1453_);
lean_ctor_set(v___x_1423_, 1, v_binderName_1450_);
lean_ctor_set(v___x_1423_, 0, v_fvarId_1449_);
v___x_1457_ = v___x_1423_;
goto v_reusejp_1456_;
}
else
{
lean_object* v_reuseFailAlloc_1480_; 
v_reuseFailAlloc_1480_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1480_, 0, v_fvarId_1449_);
lean_ctor_set(v_reuseFailAlloc_1480_, 1, v_binderName_1450_);
lean_ctor_set(v_reuseFailAlloc_1480_, 2, v_a_1453_);
lean_ctor_set(v_reuseFailAlloc_1480_, 3, v___x_1455_);
v___x_1457_ = v_reuseFailAlloc_1480_;
goto v_reusejp_1456_;
}
v_reusejp_1456_:
{
lean_object* v___x_1458_; lean_object* v_lctx_1459_; lean_object* v_nextIdx_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1479_; 
v___x_1458_ = lean_st_ref_take(v_a_1416_);
v_lctx_1459_ = lean_ctor_get(v___x_1458_, 0);
v_nextIdx_1460_ = lean_ctor_get(v___x_1458_, 1);
v_isSharedCheck_1479_ = !lean_is_exclusive(v___x_1458_);
if (v_isSharedCheck_1479_ == 0)
{
v___x_1462_ = v___x_1458_;
v_isShared_1463_ = v_isSharedCheck_1479_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_nextIdx_1460_);
lean_inc(v_lctx_1459_);
lean_dec(v___x_1458_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1479_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1464_; lean_object* v___x_1466_; 
lean_inc_ref(v___x_1457_);
v___x_1464_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1445_, v_lctx_1459_, v___x_1457_);
if (v_isShared_1463_ == 0)
{
lean_ctor_set(v___x_1462_, 0, v___x_1464_);
v___x_1466_ = v___x_1462_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1478_; 
v_reuseFailAlloc_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1478_, 0, v___x_1464_);
lean_ctor_set(v_reuseFailAlloc_1478_, 1, v_nextIdx_1460_);
v___x_1466_ = v_reuseFailAlloc_1478_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
lean_object* v___x_1467_; lean_object* v___x_1468_; 
v___x_1467_ = lean_st_ref_put(v_a_1416_, v___x_1466_);
v___x_1468_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1435_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1477_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1471_ = v___x_1468_;
v_isShared_1472_ = v_isSharedCheck_1477_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1477_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1473_; lean_object* v___x_1475_; 
v___x_1473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1473_, 0, v___x_1457_);
lean_ctor_set(v___x_1473_, 1, v_a_1469_);
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1473_);
v___x_1475_ = v___x_1471_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v___x_1473_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
else
{
lean_dec_ref(v___x_1457_);
return v___x_1468_;
}
}
}
}
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
lean_dec(v_binderName_1450_);
lean_dec(v_fvarId_1449_);
lean_dec_ref(v_code_1435_);
lean_del_object(v___x_1423_);
lean_dec(v_discr_1420_);
v_a_1481_ = lean_ctor_get(v___x_1452_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1452_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1452_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1452_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
else
{
lean_object* v_a_1489_; lean_object* v___x_1491_; uint8_t v_isShared_1492_; uint8_t v_isSharedCheck_1496_; 
lean_dec(v_p_1447_);
lean_dec_ref(v_code_1435_);
lean_del_object(v___x_1423_);
lean_dec(v_discr_1420_);
v_a_1489_ = lean_ctor_get(v___x_1448_, 0);
v_isSharedCheck_1496_ = !lean_is_exclusive(v___x_1448_);
if (v_isSharedCheck_1496_ == 0)
{
v___x_1491_ = v___x_1448_;
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
else
{
lean_inc(v_a_1489_);
lean_dec(v___x_1448_);
v___x_1491_ = lean_box(0);
v_isShared_1492_ = v_isSharedCheck_1496_;
goto v_resetjp_1490_;
}
v_resetjp_1490_:
{
lean_object* v___x_1494_; 
if (v_isShared_1492_ == 0)
{
v___x_1494_ = v___x_1491_;
goto v_reusejp_1493_;
}
else
{
lean_object* v_reuseFailAlloc_1495_; 
v_reuseFailAlloc_1495_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1495_, 0, v_a_1489_);
v___x_1494_ = v_reuseFailAlloc_1495_;
goto v_reusejp_1493_;
}
v_reusejp_1493_:
{
return v___x_1494_;
}
}
}
}
}
}
else
{
lean_object* v___x_1497_; lean_object* v___x_1498_; 
lean_dec(v___x_1432_);
lean_del_object(v___x_1423_);
lean_dec(v_discr_1420_);
v___x_1497_ = lean_obj_once(&l_Lean_Compiler_LCNF_trivialStructToMono___closed__6, &l_Lean_Compiler_LCNF_trivialStructToMono___closed__6_once, _init_l_Lean_Compiler_LCNF_trivialStructToMono___closed__6);
v___x_1498_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1497_, v_a_1414_, v_a_1415_, v_a_1416_, v_a_1417_, v_a_1418_);
return v___x_1498_;
}
}
}
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2(void){
_start:
{
lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1506_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__1));
v___x_1507_ = lean_unsigned_to_nat(70u);
v___x_1508_ = lean_unsigned_to_nat(373u);
v___x_1509_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__0));
v___x_1510_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1511_ = l_mkPanicMessageWithDecl(v___x_1510_, v___x_1509_, v___x_1508_, v___x_1507_, v___x_1506_);
return v___x_1511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(lean_object* v___x_1512_, uint8_t v___x_1513_, size_t v_sz_1514_, size_t v_i_1515_, lean_object* v_bs_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
uint8_t v___x_1523_; 
v___x_1523_ = lean_usize_dec_lt(v_i_1515_, v_sz_1514_);
if (v___x_1523_ == 0)
{
lean_object* v___x_1524_; 
lean_dec_ref(v___x_1512_);
v___x_1524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1524_, 0, v_bs_1516_);
return v___x_1524_;
}
else
{
lean_object* v_v_1525_; lean_object* v___x_1526_; lean_object* v_bs_x27_1527_; lean_object* v_a_1529_; lean_object* v___y_1535_; lean_object* v___y_1536_; lean_object* v___y_1537_; lean_object* v___y_1538_; lean_object* v___y_1539_; 
v_v_1525_ = lean_array_uget(v_bs_1516_, v_i_1515_);
v___x_1526_ = lean_unsigned_to_nat(0u);
v_bs_x27_1527_ = lean_array_uset(v_bs_1516_, v_i_1515_, v___x_1526_);
if (lean_obj_tag(v_v_1525_) == 0)
{
lean_object* v_ctorName_1551_; lean_object* v_params_1552_; lean_object* v_code_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1591_; 
v_ctorName_1551_ = lean_ctor_get(v_v_1525_, 0);
v_params_1552_ = lean_ctor_get(v_v_1525_, 1);
v_code_1553_ = lean_ctor_get(v_v_1525_, 2);
v_isSharedCheck_1591_ = !lean_is_exclusive(v_v_1525_);
if (v_isSharedCheck_1591_ == 0)
{
v___x_1555_ = v_v_1525_;
v_isShared_1556_ = v_isSharedCheck_1591_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_code_1553_);
lean_inc(v_params_1552_);
lean_inc(v_ctorName_1551_);
lean_dec(v_v_1525_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1591_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1557_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4));
v___x_1558_ = l_Lean_Name_append(v_ctorName_1551_, v___x_1557_);
lean_inc(v___x_1558_);
lean_inc_ref(v___x_1512_);
v___x_1559_ = l_Lean_Environment_find_x3f(v___x_1512_, v___x_1558_, v___x_1513_);
if (lean_obj_tag(v___x_1559_) == 1)
{
lean_object* v_val_1560_; 
v_val_1560_ = lean_ctor_get(v___x_1559_, 0);
lean_inc(v_val_1560_);
lean_dec_ref_known(v___x_1559_, 1);
if (lean_obj_tag(v_val_1560_) == 6)
{
lean_object* v_val_1561_; lean_object* v_toConstantVal_1562_; lean_object* v_numParams_1563_; lean_object* v_numFields_1564_; lean_object* v_type_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; 
v_val_1561_ = lean_ctor_get(v_val_1560_, 0);
lean_inc_ref(v_val_1561_);
lean_dec_ref_known(v_val_1560_, 1);
v_toConstantVal_1562_ = lean_ctor_get(v_val_1561_, 0);
lean_inc_ref(v_toConstantVal_1562_);
v_numParams_1563_ = lean_ctor_get(v_val_1561_, 3);
lean_inc(v_numParams_1563_);
v_numFields_1564_ = lean_ctor_get(v_val_1561_, 4);
lean_inc(v_numFields_1564_);
lean_dec_ref(v_val_1561_);
v_type_1565_ = lean_ctor_get(v_toConstantVal_1562_, 2);
lean_inc_ref(v_type_1565_);
lean_dec_ref(v_toConstantVal_1562_);
v___x_1566_ = lean_array_get_size(v_params_1552_);
v___x_1567_ = lean_nat_sub(v_numFields_1564_, v___x_1566_);
lean_dec(v_numFields_1564_);
v___x_1568_ = l_Lean_Compiler_LCNF_mkFieldParamsForComputedFields(v_type_1565_, v_numParams_1563_, v___x_1567_, v_params_1552_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec_ref(v_params_1552_);
lean_dec(v___x_1567_);
lean_dec(v_numParams_1563_);
if (lean_obj_tag(v___x_1568_) == 0)
{
lean_object* v_a_1569_; lean_object* v___x_1570_; 
v_a_1569_ = lean_ctor_get(v___x_1568_, 0);
lean_inc(v_a_1569_);
lean_dec_ref_known(v___x_1568_, 1);
v___x_1570_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1553_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1570_) == 0)
{
lean_object* v_a_1571_; lean_object* v___x_1573_; 
v_a_1571_ = lean_ctor_get(v___x_1570_, 0);
lean_inc(v_a_1571_);
lean_dec_ref_known(v___x_1570_, 1);
if (v_isShared_1556_ == 0)
{
lean_ctor_set(v___x_1555_, 2, v_a_1571_);
lean_ctor_set(v___x_1555_, 1, v_a_1569_);
lean_ctor_set(v___x_1555_, 0, v___x_1558_);
v___x_1573_ = v___x_1555_;
goto v_reusejp_1572_;
}
else
{
lean_object* v_reuseFailAlloc_1574_; 
v_reuseFailAlloc_1574_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1574_, 0, v___x_1558_);
lean_ctor_set(v_reuseFailAlloc_1574_, 1, v_a_1569_);
lean_ctor_set(v_reuseFailAlloc_1574_, 2, v_a_1571_);
v___x_1573_ = v_reuseFailAlloc_1574_;
goto v_reusejp_1572_;
}
v_reusejp_1572_:
{
v_a_1529_ = v___x_1573_;
goto v___jp_1528_;
}
}
else
{
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_dec(v_a_1569_);
lean_dec(v___x_1558_);
lean_del_object(v___x_1555_);
lean_dec_ref(v_bs_x27_1527_);
lean_dec_ref(v___x_1512_);
v_a_1575_ = lean_ctor_get(v___x_1570_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1570_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1570_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1570_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
}
else
{
lean_object* v_a_1583_; lean_object* v___x_1585_; uint8_t v_isShared_1586_; uint8_t v_isSharedCheck_1590_; 
lean_dec(v___x_1558_);
lean_del_object(v___x_1555_);
lean_dec_ref(v_code_1553_);
lean_dec_ref(v_bs_x27_1527_);
lean_dec_ref(v___x_1512_);
v_a_1583_ = lean_ctor_get(v___x_1568_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1568_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1585_ = v___x_1568_;
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
else
{
lean_inc(v_a_1583_);
lean_dec(v___x_1568_);
v___x_1585_ = lean_box(0);
v_isShared_1586_ = v_isSharedCheck_1590_;
goto v_resetjp_1584_;
}
v_resetjp_1584_:
{
lean_object* v___x_1588_; 
if (v_isShared_1586_ == 0)
{
v___x_1588_ = v___x_1585_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v_a_1583_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
}
else
{
lean_dec(v_val_1560_);
lean_dec(v___x_1558_);
lean_del_object(v___x_1555_);
lean_dec_ref(v_code_1553_);
lean_dec_ref(v_params_1552_);
v___y_1535_ = v___y_1517_;
v___y_1536_ = v___y_1518_;
v___y_1537_ = v___y_1519_;
v___y_1538_ = v___y_1520_;
v___y_1539_ = v___y_1521_;
goto v___jp_1534_;
}
}
else
{
lean_dec(v___x_1559_);
lean_dec(v___x_1558_);
lean_del_object(v___x_1555_);
lean_dec_ref(v_code_1553_);
lean_dec_ref(v_params_1552_);
v___y_1535_ = v___y_1517_;
v___y_1536_ = v___y_1518_;
v___y_1537_ = v___y_1519_;
v___y_1538_ = v___y_1520_;
v___y_1539_ = v___y_1521_;
goto v___jp_1534_;
}
}
}
else
{
lean_object* v_code_1592_; lean_object* v___x_1593_; 
v_code_1592_ = lean_ctor_get(v_v_1525_, 0);
lean_inc_ref(v_code_1592_);
v___x_1593_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1592_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; lean_object* v___x_1595_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v___x_1595_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_1525_, v_a_1594_);
v_a_1529_ = v___x_1595_;
goto v___jp_1528_;
}
else
{
lean_object* v_a_1596_; lean_object* v___x_1598_; uint8_t v_isShared_1599_; uint8_t v_isSharedCheck_1603_; 
lean_dec_ref_known(v_v_1525_, 1);
lean_dec_ref(v_bs_x27_1527_);
lean_dec_ref(v___x_1512_);
v_a_1596_ = lean_ctor_get(v___x_1593_, 0);
v_isSharedCheck_1603_ = !lean_is_exclusive(v___x_1593_);
if (v_isSharedCheck_1603_ == 0)
{
v___x_1598_ = v___x_1593_;
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
else
{
lean_inc(v_a_1596_);
lean_dec(v___x_1593_);
v___x_1598_ = lean_box(0);
v_isShared_1599_ = v_isSharedCheck_1603_;
goto v_resetjp_1597_;
}
v_resetjp_1597_:
{
lean_object* v___x_1601_; 
if (v_isShared_1599_ == 0)
{
v___x_1601_ = v___x_1598_;
goto v_reusejp_1600_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_a_1596_);
v___x_1601_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1600_;
}
v_reusejp_1600_:
{
return v___x_1601_;
}
}
}
}
v___jp_1528_:
{
size_t v___x_1530_; size_t v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = ((size_t)1ULL);
v___x_1531_ = lean_usize_add(v_i_1515_, v___x_1530_);
v___x_1532_ = lean_array_uset(v_bs_x27_1527_, v_i_1515_, v_a_1529_);
v_i_1515_ = v___x_1531_;
v_bs_1516_ = v___x_1532_;
goto _start;
}
v___jp_1534_:
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
v___x_1540_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__2);
v___x_1541_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4(v___x_1540_, v___y_1535_, v___y_1536_, v___y_1537_, v___y_1538_, v___y_1539_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v_a_1529_ = v_a_1542_;
goto v___jp_1528_;
}
else
{
lean_object* v_a_1543_; lean_object* v___x_1545_; uint8_t v_isShared_1546_; uint8_t v_isSharedCheck_1550_; 
lean_dec_ref(v_bs_x27_1527_);
lean_dec_ref(v___x_1512_);
v_a_1543_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1550_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1550_ == 0)
{
v___x_1545_ = v___x_1541_;
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
else
{
lean_inc(v_a_1543_);
lean_dec(v___x_1541_);
v___x_1545_ = lean_box(0);
v_isShared_1546_ = v_isSharedCheck_1550_;
goto v_resetjp_1544_;
}
v_resetjp_1544_:
{
lean_object* v___x_1548_; 
if (v_isShared_1546_ == 0)
{
v___x_1548_ = v___x_1545_;
goto v_reusejp_1547_;
}
else
{
lean_object* v_reuseFailAlloc_1549_; 
v_reuseFailAlloc_1549_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1549_, 0, v_a_1543_);
v___x_1548_ = v_reuseFailAlloc_1549_;
goto v_reusejp_1547_;
}
v_reusejp_1547_:
{
return v___x_1548_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(size_t v_sz_1604_, size_t v_i_1605_, lean_object* v_bs_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
uint8_t v___x_1613_; 
v___x_1613_ = lean_usize_dec_lt(v_i_1605_, v_sz_1604_);
if (v___x_1613_ == 0)
{
lean_object* v___x_1614_; 
v___x_1614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1614_, 0, v_bs_1606_);
return v___x_1614_;
}
else
{
lean_object* v_v_1615_; lean_object* v___x_1616_; lean_object* v_bs_x27_1617_; lean_object* v_a_1619_; 
v_v_1615_ = lean_array_uget(v_bs_1606_, v_i_1605_);
v___x_1616_ = lean_unsigned_to_nat(0u);
v_bs_x27_1617_ = lean_array_uset(v_bs_1606_, v_i_1605_, v___x_1616_);
if (lean_obj_tag(v_v_1615_) == 0)
{
lean_object* v_params_1624_; lean_object* v_code_1625_; uint8_t v___x_1626_; size_t v_sz_1627_; size_t v___x_1628_; lean_object* v___x_1629_; 
v_params_1624_ = lean_ctor_get(v_v_1615_, 1);
v_code_1625_ = lean_ctor_get(v_v_1615_, 2);
v___x_1626_ = 0;
v_sz_1627_ = lean_array_size(v_params_1624_);
v___x_1628_ = ((size_t)0ULL);
lean_inc_ref(v_params_1624_);
v___x_1629_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_1627_, v___x_1628_, v_params_1624_, v___y_1607_, v___y_1609_, v___y_1610_, v___y_1611_);
if (lean_obj_tag(v___x_1629_) == 0)
{
lean_object* v_a_1630_; lean_object* v___x_1631_; 
v_a_1630_ = lean_ctor_get(v___x_1629_, 0);
lean_inc(v_a_1630_);
lean_dec_ref_known(v___x_1629_, 1);
lean_inc_ref(v_code_1625_);
v___x_1631_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1625_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
if (lean_obj_tag(v___x_1631_) == 0)
{
lean_object* v_a_1632_; lean_object* v___x_1633_; 
v_a_1632_ = lean_ctor_get(v___x_1631_, 0);
lean_inc(v_a_1632_);
lean_dec_ref_known(v___x_1631_, 1);
v___x_1633_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v___x_1626_, v_v_1615_, v_a_1630_, v_a_1632_);
v_a_1619_ = v___x_1633_;
goto v___jp_1618_;
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
lean_dec(v_a_1630_);
lean_dec_ref_known(v_v_1615_, 3);
lean_dec_ref(v_bs_x27_1617_);
v_a_1634_ = lean_ctor_get(v___x_1631_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1631_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v___x_1631_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1631_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
else
{
lean_dec_ref_known(v_v_1615_, 3);
lean_dec_ref(v_bs_x27_1617_);
return v___x_1629_;
}
}
else
{
lean_object* v_code_1642_; lean_object* v___x_1643_; 
v_code_1642_ = lean_ctor_get(v_v_1615_, 0);
lean_inc_ref(v_code_1642_);
v___x_1643_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1642_, v___y_1607_, v___y_1608_, v___y_1609_, v___y_1610_, v___y_1611_);
if (lean_obj_tag(v___x_1643_) == 0)
{
lean_object* v_a_1644_; lean_object* v___x_1645_; 
v_a_1644_ = lean_ctor_get(v___x_1643_, 0);
lean_inc(v_a_1644_);
lean_dec_ref_known(v___x_1643_, 1);
v___x_1645_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_1615_, v_a_1644_);
v_a_1619_ = v___x_1645_;
goto v___jp_1618_;
}
else
{
lean_object* v_a_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1653_; 
lean_dec_ref_known(v_v_1615_, 1);
lean_dec_ref(v_bs_x27_1617_);
v_a_1646_ = lean_ctor_get(v___x_1643_, 0);
v_isSharedCheck_1653_ = !lean_is_exclusive(v___x_1643_);
if (v_isSharedCheck_1653_ == 0)
{
v___x_1648_ = v___x_1643_;
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_a_1646_);
lean_dec(v___x_1643_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1653_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___x_1651_; 
if (v_isShared_1649_ == 0)
{
v___x_1651_ = v___x_1648_;
goto v_reusejp_1650_;
}
else
{
lean_object* v_reuseFailAlloc_1652_; 
v_reuseFailAlloc_1652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1652_, 0, v_a_1646_);
v___x_1651_ = v_reuseFailAlloc_1652_;
goto v_reusejp_1650_;
}
v_reusejp_1650_:
{
return v___x_1651_;
}
}
}
}
v___jp_1618_:
{
size_t v___x_1620_; size_t v___x_1621_; lean_object* v___x_1622_; 
v___x_1620_ = ((size_t)1ULL);
v___x_1621_ = lean_usize_add(v_i_1605_, v___x_1620_);
v___x_1622_ = lean_array_uset(v_bs_x27_1617_, v_i_1605_, v_a_1619_);
v_i_1605_ = v___x_1621_;
v_bs_1606_ = v___x_1622_;
goto _start;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1655_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1656_ = lean_unsigned_to_nat(2u);
v___x_1657_ = lean_unsigned_to_nat(291u);
v___x_1658_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1659_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1660_ = l_mkPanicMessageWithDecl(v___x_1659_, v___x_1658_, v___x_1657_, v___x_1656_, v___x_1655_);
return v___x_1660_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1665_ = lean_box(0);
v___x_1666_ = lean_unsigned_to_nat(2u);
v___x_1667_ = lean_mk_empty_array_with_capacity(v___x_1666_);
v___x_1668_ = lean_array_push(v___x_1667_, v___x_1665_);
return v___x_1668_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; 
v___x_1669_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1670_ = lean_unsigned_to_nat(34u);
v___x_1671_ = lean_unsigned_to_nat(292u);
v___x_1672_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__0));
v___x_1673_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1674_ = l_mkPanicMessageWithDecl(v___x_1673_, v___x_1672_, v___x_1671_, v___x_1670_, v___x_1669_);
return v___x_1674_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg(lean_object* v_c_1675_, lean_object* v_a_1676_, lean_object* v_a_1677_, lean_object* v_a_1678_, lean_object* v_a_1679_, lean_object* v_a_1680_){
_start:
{
lean_object* v_discr_1682_; lean_object* v_alts_1683_; lean_object* v___x_1685_; uint8_t v_isShared_1686_; uint8_t v_isSharedCheck_1752_; 
v_discr_1682_ = lean_ctor_get(v_c_1675_, 2);
v_alts_1683_ = lean_ctor_get(v_c_1675_, 3);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_c_1675_);
if (v_isSharedCheck_1752_ == 0)
{
lean_object* v_unused_1753_; lean_object* v_unused_1754_; 
v_unused_1753_ = lean_ctor_get(v_c_1675_, 1);
lean_dec(v_unused_1753_);
v_unused_1754_ = lean_ctor_get(v_c_1675_, 0);
lean_dec(v_unused_1754_);
v___x_1685_ = v_c_1675_;
v_isShared_1686_ = v_isSharedCheck_1752_;
goto v_resetjp_1684_;
}
else
{
lean_inc(v_alts_1683_);
lean_inc(v_discr_1682_);
lean_dec(v_c_1675_);
v___x_1685_ = lean_box(0);
v_isShared_1686_ = v_isSharedCheck_1752_;
goto v_resetjp_1684_;
}
v_resetjp_1684_:
{
lean_object* v___x_1687_; lean_object* v___x_1688_; uint8_t v___x_1689_; 
v___x_1687_ = lean_array_get_size(v_alts_1683_);
v___x_1688_ = lean_unsigned_to_nat(1u);
v___x_1689_ = lean_nat_dec_eq(v___x_1687_, v___x_1688_);
if (v___x_1689_ == 0)
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
lean_del_object(v___x_1685_);
lean_dec_ref(v_alts_1683_);
lean_dec(v_discr_1682_);
v___x_1690_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__1);
v___x_1691_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1690_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_);
return v___x_1691_;
}
else
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1692_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1693_ = lean_unsigned_to_nat(0u);
v___x_1694_ = lean_array_get(v___x_1692_, v_alts_1683_, v___x_1693_);
lean_dec_ref(v_alts_1683_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_params_1695_; lean_object* v_code_1696_; lean_object* v___x_1698_; uint8_t v_isShared_1699_; uint8_t v_isSharedCheck_1748_; 
v_params_1695_ = lean_ctor_get(v___x_1694_, 1);
v_code_1696_ = lean_ctor_get(v___x_1694_, 2);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1748_ == 0)
{
lean_object* v_unused_1749_; 
v_unused_1749_ = lean_ctor_get(v___x_1694_, 0);
lean_dec(v_unused_1749_);
v___x_1698_ = v___x_1694_;
v_isShared_1699_ = v_isSharedCheck_1748_;
goto v_resetjp_1697_;
}
else
{
lean_inc(v_code_1696_);
lean_inc(v_params_1695_);
lean_dec(v___x_1694_);
v___x_1698_ = lean_box(0);
v_isShared_1699_ = v_isSharedCheck_1748_;
goto v_resetjp_1697_;
}
v_resetjp_1697_:
{
uint8_t v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
v___x_1700_ = 0;
v___x_1701_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1702_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1700_, v_params_1695_, v_a_1678_);
if (lean_obj_tag(v___x_1702_) == 0)
{
lean_object* v___x_1703_; lean_object* v_fvarId_1704_; lean_object* v_binderName_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1713_; 
lean_dec_ref_known(v___x_1702_, 1);
v___x_1703_ = lean_array_get(v___x_1701_, v_params_1695_, v___x_1693_);
lean_dec_ref(v_params_1695_);
v_fvarId_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_fvarId_1704_);
v_binderName_1705_ = lean_ctor_get(v___x_1703_, 1);
lean_inc(v_binderName_1705_);
lean_dec(v___x_1703_);
v___x_1706_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1707_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__4));
v___x_1708_ = lean_box(0);
v___x_1709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1709_, 0, v_discr_1682_);
v___x_1710_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_1711_ = lean_array_push(v___x_1710_, v___x_1709_);
if (v_isShared_1699_ == 0)
{
lean_ctor_set_tag(v___x_1698_, 3);
lean_ctor_set(v___x_1698_, 2, v___x_1711_);
lean_ctor_set(v___x_1698_, 1, v___x_1708_);
lean_ctor_set(v___x_1698_, 0, v___x_1707_);
v___x_1713_ = v___x_1698_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v___x_1707_);
lean_ctor_set(v_reuseFailAlloc_1739_, 1, v___x_1708_);
lean_ctor_set(v_reuseFailAlloc_1739_, 2, v___x_1711_);
v___x_1713_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1715_; 
if (v_isShared_1686_ == 0)
{
lean_ctor_set(v___x_1685_, 3, v___x_1713_);
lean_ctor_set(v___x_1685_, 2, v___x_1706_);
lean_ctor_set(v___x_1685_, 1, v_binderName_1705_);
lean_ctor_set(v___x_1685_, 0, v_fvarId_1704_);
v___x_1715_ = v___x_1685_;
goto v_reusejp_1714_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_fvarId_1704_);
lean_ctor_set(v_reuseFailAlloc_1738_, 1, v_binderName_1705_);
lean_ctor_set(v_reuseFailAlloc_1738_, 2, v___x_1706_);
lean_ctor_set(v_reuseFailAlloc_1738_, 3, v___x_1713_);
v___x_1715_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1714_;
}
v_reusejp_1714_:
{
lean_object* v___x_1716_; lean_object* v_lctx_1717_; lean_object* v_nextIdx_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1737_; 
v___x_1716_ = lean_st_ref_take(v_a_1678_);
v_lctx_1717_ = lean_ctor_get(v___x_1716_, 0);
v_nextIdx_1718_ = lean_ctor_get(v___x_1716_, 1);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1716_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1720_ = v___x_1716_;
v_isShared_1721_ = v_isSharedCheck_1737_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_nextIdx_1718_);
lean_inc(v_lctx_1717_);
lean_dec(v___x_1716_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1737_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1722_; lean_object* v___x_1724_; 
lean_inc_ref(v___x_1715_);
v___x_1722_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1700_, v_lctx_1717_, v___x_1715_);
if (v_isShared_1721_ == 0)
{
lean_ctor_set(v___x_1720_, 0, v___x_1722_);
v___x_1724_ = v___x_1720_;
goto v_reusejp_1723_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v___x_1722_);
lean_ctor_set(v_reuseFailAlloc_1736_, 1, v_nextIdx_1718_);
v___x_1724_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1723_;
}
v_reusejp_1723_:
{
lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___x_1725_ = lean_st_ref_put(v_a_1678_, v___x_1724_);
v___x_1726_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1696_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_);
if (lean_obj_tag(v___x_1726_) == 0)
{
lean_object* v_a_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1735_; 
v_a_1727_ = lean_ctor_get(v___x_1726_, 0);
v_isSharedCheck_1735_ = !lean_is_exclusive(v___x_1726_);
if (v_isSharedCheck_1735_ == 0)
{
v___x_1729_ = v___x_1726_;
v_isShared_1730_ = v_isSharedCheck_1735_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_a_1727_);
lean_dec(v___x_1726_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1735_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
v___x_1731_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1731_, 0, v___x_1715_);
lean_ctor_set(v___x_1731_, 1, v_a_1727_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 0, v___x_1731_);
v___x_1733_ = v___x_1729_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1734_; 
v_reuseFailAlloc_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1734_, 0, v___x_1731_);
v___x_1733_ = v_reuseFailAlloc_1734_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
return v___x_1733_;
}
}
}
else
{
lean_dec_ref(v___x_1715_);
return v___x_1726_;
}
}
}
}
}
}
else
{
lean_object* v_a_1740_; lean_object* v___x_1742_; uint8_t v_isShared_1743_; uint8_t v_isSharedCheck_1747_; 
lean_del_object(v___x_1698_);
lean_dec_ref(v_code_1696_);
lean_dec_ref(v_params_1695_);
lean_del_object(v___x_1685_);
lean_dec(v_discr_1682_);
v_a_1740_ = lean_ctor_get(v___x_1702_, 0);
v_isSharedCheck_1747_ = !lean_is_exclusive(v___x_1702_);
if (v_isSharedCheck_1747_ == 0)
{
v___x_1742_ = v___x_1702_;
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
else
{
lean_inc(v_a_1740_);
lean_dec(v___x_1702_);
v___x_1742_ = lean_box(0);
v_isShared_1743_ = v_isSharedCheck_1747_;
goto v_resetjp_1741_;
}
v_resetjp_1741_:
{
lean_object* v___x_1745_; 
if (v_isShared_1743_ == 0)
{
v___x_1745_ = v___x_1742_;
goto v_reusejp_1744_;
}
else
{
lean_object* v_reuseFailAlloc_1746_; 
v_reuseFailAlloc_1746_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1746_, 0, v_a_1740_);
v___x_1745_ = v_reuseFailAlloc_1746_;
goto v_reusejp_1744_;
}
v_reusejp_1744_:
{
return v___x_1745_;
}
}
}
}
}
else
{
lean_object* v___x_1750_; lean_object* v___x_1751_; 
lean_dec(v___x_1694_);
lean_del_object(v___x_1685_);
lean_dec(v_discr_1682_);
v___x_1750_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesTaskToMono___redArg___closed__5);
v___x_1751_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1750_, v_a_1676_, v_a_1677_, v_a_1678_, v_a_1679_, v_a_1680_);
return v___x_1751_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1756_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1757_ = lean_unsigned_to_nat(2u);
v___x_1758_ = lean_unsigned_to_nat(271u);
v___x_1759_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_1760_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1761_ = l_mkPanicMessageWithDecl(v___x_1760_, v___x_1759_, v___x_1758_, v___x_1757_, v___x_1756_);
return v___x_1761_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8(void){
_start:
{
lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; 
v___x_1768_ = lean_box(0);
v___x_1769_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__7));
v___x_1770_ = l_Lean_Expr_const___override(v___x_1769_, v___x_1768_);
return v___x_1770_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9(void){
_start:
{
lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; 
v___x_1771_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1772_ = lean_unsigned_to_nat(34u);
v___x_1773_ = lean_unsigned_to_nat(272u);
v___x_1774_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__0));
v___x_1775_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1776_ = l_mkPanicMessageWithDecl(v___x_1775_, v___x_1774_, v___x_1773_, v___x_1772_, v___x_1771_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg(lean_object* v_c_1777_, lean_object* v_a_1778_, lean_object* v_a_1779_, lean_object* v_a_1780_, lean_object* v_a_1781_, lean_object* v_a_1782_){
_start:
{
lean_object* v_discr_1784_; lean_object* v_alts_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; uint8_t v___x_1788_; 
v_discr_1784_ = lean_ctor_get(v_c_1777_, 2);
v_alts_1785_ = lean_ctor_get(v_c_1777_, 3);
v___x_1786_ = lean_array_get_size(v_alts_1785_);
v___x_1787_ = lean_unsigned_to_nat(1u);
v___x_1788_ = lean_nat_dec_eq(v___x_1786_, v___x_1787_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; lean_object* v___x_1790_; 
v___x_1789_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__1);
v___x_1790_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1789_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
return v___x_1790_;
}
else
{
lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v___x_1791_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1792_ = lean_unsigned_to_nat(0u);
v___x_1793_ = lean_array_get(v___x_1791_, v_alts_1785_, v___x_1792_);
if (lean_obj_tag(v___x_1793_) == 0)
{
lean_object* v_params_1794_; lean_object* v_code_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1893_; 
v_params_1794_ = lean_ctor_get(v___x_1793_, 1);
v_code_1795_ = lean_ctor_get(v___x_1793_, 2);
v_isSharedCheck_1893_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1893_ == 0)
{
lean_object* v_unused_1894_; 
v_unused_1894_ = lean_ctor_get(v___x_1793_, 0);
lean_dec(v_unused_1894_);
v___x_1797_ = v___x_1793_;
v_isShared_1798_ = v_isSharedCheck_1893_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_code_1795_);
lean_inc(v_params_1794_);
lean_dec(v___x_1793_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1893_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
uint8_t v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v___x_1799_ = 0;
v___x_1800_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1801_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1799_, v_params_1794_, v_a_1780_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v___x_1802_; lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1809_; 
lean_dec_ref_known(v___x_1801_, 1);
v___x_1802_ = lean_array_get(v___x_1800_, v_params_1794_, v___x_1792_);
lean_dec_ref(v_params_1794_);
v___x_1803_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__3));
v___x_1804_ = lean_box(0);
lean_inc(v_discr_1784_);
v___x_1805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1805_, 0, v_discr_1784_);
v___x_1806_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_1807_ = lean_array_push(v___x_1806_, v___x_1805_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set_tag(v___x_1797_, 3);
lean_ctor_set(v___x_1797_, 2, v___x_1807_);
lean_ctor_set(v___x_1797_, 1, v___x_1804_);
lean_ctor_set(v___x_1797_, 0, v___x_1803_);
v___x_1809_ = v___x_1797_;
goto v_reusejp_1808_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v___x_1803_);
lean_ctor_set(v_reuseFailAlloc_1884_, 1, v___x_1804_);
lean_ctor_set(v_reuseFailAlloc_1884_, 2, v___x_1807_);
v___x_1809_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1808_;
}
v_reusejp_1808_:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; 
v___x_1810_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_1811_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_1810_, v_a_1780_);
if (lean_obj_tag(v___x_1811_) == 0)
{
lean_object* v_a_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; 
v_a_1812_ = lean_ctor_get(v___x_1811_, 0);
lean_inc(v_a_1812_);
lean_dec_ref_known(v___x_1811_, 1);
v___x_1813_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1814_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_1799_, v_a_1812_, v___x_1813_, v___x_1809_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_a_1815_; lean_object* v___x_1816_; uint8_t v___x_1817_; lean_object* v___x_1818_; 
v_a_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_a_1815_);
lean_dec_ref_known(v___x_1814_, 1);
v___x_1816_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__8);
v___x_1817_ = 0;
v___x_1818_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_1799_, v___x_1816_, v___x_1817_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
if (lean_obj_tag(v___x_1818_) == 0)
{
lean_object* v_a_1819_; lean_object* v___x_1820_; 
v_a_1819_ = lean_ctor_get(v___x_1818_, 0);
lean_inc(v_a_1819_);
lean_dec_ref_known(v___x_1818_, 1);
v___x_1820_ = l_Lean_mkArrow(v___x_1816_, v___x_1813_, v_a_1781_, v_a_1782_);
if (lean_obj_tag(v___x_1820_) == 0)
{
lean_object* v_a_1821_; lean_object* v_fvarId_1822_; lean_object* v_binderName_1823_; lean_object* v_fvarId_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v_lctx_1831_; lean_object* v_nextIdx_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1851_; 
v_a_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_a_1821_);
lean_dec_ref_known(v___x_1820_, 1);
v_fvarId_1822_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_fvarId_1822_);
v_binderName_1823_ = lean_ctor_get(v___x_1802_, 1);
lean_inc(v_binderName_1823_);
lean_dec(v___x_1802_);
v_fvarId_1824_ = lean_ctor_get(v_a_1815_, 0);
v___x_1825_ = lean_mk_empty_array_with_capacity(v___x_1787_);
v___x_1826_ = lean_array_push(v___x_1825_, v_a_1819_);
lean_inc(v_fvarId_1824_);
v___x_1827_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_1827_, 0, v_fvarId_1824_);
v___x_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1828_, 0, v_a_1815_);
lean_ctor_set(v___x_1828_, 1, v___x_1827_);
v___x_1829_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1829_, 0, v_fvarId_1822_);
lean_ctor_set(v___x_1829_, 1, v_binderName_1823_);
lean_ctor_set(v___x_1829_, 2, v___x_1826_);
lean_ctor_set(v___x_1829_, 3, v_a_1821_);
lean_ctor_set(v___x_1829_, 4, v___x_1828_);
v___x_1830_ = lean_st_ref_take(v_a_1780_);
v_lctx_1831_ = lean_ctor_get(v___x_1830_, 0);
v_nextIdx_1832_ = lean_ctor_get(v___x_1830_, 1);
v_isSharedCheck_1851_ = !lean_is_exclusive(v___x_1830_);
if (v_isSharedCheck_1851_ == 0)
{
v___x_1834_ = v___x_1830_;
v_isShared_1835_ = v_isSharedCheck_1851_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_nextIdx_1832_);
lean_inc(v_lctx_1831_);
lean_dec(v___x_1830_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1851_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
lean_inc_ref(v___x_1829_);
v___x_1836_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v___x_1799_, v_lctx_1831_, v___x_1829_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1836_);
v___x_1838_ = v___x_1834_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1850_; 
v_reuseFailAlloc_1850_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1850_, 0, v___x_1836_);
lean_ctor_set(v_reuseFailAlloc_1850_, 1, v_nextIdx_1832_);
v___x_1838_ = v_reuseFailAlloc_1850_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
lean_object* v___x_1839_; lean_object* v___x_1840_; 
v___x_1839_ = lean_st_ref_put(v_a_1780_, v___x_1838_);
v___x_1840_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1795_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
if (lean_obj_tag(v___x_1840_) == 0)
{
lean_object* v_a_1841_; lean_object* v___x_1843_; uint8_t v_isShared_1844_; uint8_t v_isSharedCheck_1849_; 
v_a_1841_ = lean_ctor_get(v___x_1840_, 0);
v_isSharedCheck_1849_ = !lean_is_exclusive(v___x_1840_);
if (v_isSharedCheck_1849_ == 0)
{
v___x_1843_ = v___x_1840_;
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
else
{
lean_inc(v_a_1841_);
lean_dec(v___x_1840_);
v___x_1843_ = lean_box(0);
v_isShared_1844_ = v_isSharedCheck_1849_;
goto v_resetjp_1842_;
}
v_resetjp_1842_:
{
lean_object* v___x_1845_; lean_object* v___x_1847_; 
v___x_1845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1829_);
lean_ctor_set(v___x_1845_, 1, v_a_1841_);
if (v_isShared_1844_ == 0)
{
lean_ctor_set(v___x_1843_, 0, v___x_1845_);
v___x_1847_ = v___x_1843_;
goto v_reusejp_1846_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1845_);
v___x_1847_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1846_;
}
v_reusejp_1846_:
{
return v___x_1847_;
}
}
}
else
{
lean_dec_ref_known(v___x_1829_, 5);
return v___x_1840_;
}
}
}
}
else
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
lean_dec(v_a_1819_);
lean_dec(v_a_1815_);
lean_dec(v___x_1802_);
lean_dec_ref(v_code_1795_);
v_a_1852_ = lean_ctor_get(v___x_1820_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1820_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1854_ = v___x_1820_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1820_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_a_1852_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
else
{
lean_object* v_a_1860_; lean_object* v___x_1862_; uint8_t v_isShared_1863_; uint8_t v_isSharedCheck_1867_; 
lean_dec(v_a_1815_);
lean_dec(v___x_1802_);
lean_dec_ref(v_code_1795_);
v_a_1860_ = lean_ctor_get(v___x_1818_, 0);
v_isSharedCheck_1867_ = !lean_is_exclusive(v___x_1818_);
if (v_isSharedCheck_1867_ == 0)
{
v___x_1862_ = v___x_1818_;
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
else
{
lean_inc(v_a_1860_);
lean_dec(v___x_1818_);
v___x_1862_ = lean_box(0);
v_isShared_1863_ = v_isSharedCheck_1867_;
goto v_resetjp_1861_;
}
v_resetjp_1861_:
{
lean_object* v___x_1865_; 
if (v_isShared_1863_ == 0)
{
v___x_1865_ = v___x_1862_;
goto v_reusejp_1864_;
}
else
{
lean_object* v_reuseFailAlloc_1866_; 
v_reuseFailAlloc_1866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1866_, 0, v_a_1860_);
v___x_1865_ = v_reuseFailAlloc_1866_;
goto v_reusejp_1864_;
}
v_reusejp_1864_:
{
return v___x_1865_;
}
}
}
}
else
{
lean_object* v_a_1868_; lean_object* v___x_1870_; uint8_t v_isShared_1871_; uint8_t v_isSharedCheck_1875_; 
lean_dec(v___x_1802_);
lean_dec_ref(v_code_1795_);
v_a_1868_ = lean_ctor_get(v___x_1814_, 0);
v_isSharedCheck_1875_ = !lean_is_exclusive(v___x_1814_);
if (v_isSharedCheck_1875_ == 0)
{
v___x_1870_ = v___x_1814_;
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
else
{
lean_inc(v_a_1868_);
lean_dec(v___x_1814_);
v___x_1870_ = lean_box(0);
v_isShared_1871_ = v_isSharedCheck_1875_;
goto v_resetjp_1869_;
}
v_resetjp_1869_:
{
lean_object* v___x_1873_; 
if (v_isShared_1871_ == 0)
{
v___x_1873_ = v___x_1870_;
goto v_reusejp_1872_;
}
else
{
lean_object* v_reuseFailAlloc_1874_; 
v_reuseFailAlloc_1874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1874_, 0, v_a_1868_);
v___x_1873_ = v_reuseFailAlloc_1874_;
goto v_reusejp_1872_;
}
v_reusejp_1872_:
{
return v___x_1873_;
}
}
}
}
else
{
lean_object* v_a_1876_; lean_object* v___x_1878_; uint8_t v_isShared_1879_; uint8_t v_isSharedCheck_1883_; 
lean_dec_ref(v___x_1809_);
lean_dec(v___x_1802_);
lean_dec_ref(v_code_1795_);
v_a_1876_ = lean_ctor_get(v___x_1811_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1811_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1878_ = v___x_1811_;
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
else
{
lean_inc(v_a_1876_);
lean_dec(v___x_1811_);
v___x_1878_ = lean_box(0);
v_isShared_1879_ = v_isSharedCheck_1883_;
goto v_resetjp_1877_;
}
v_resetjp_1877_:
{
lean_object* v___x_1881_; 
if (v_isShared_1879_ == 0)
{
v___x_1881_ = v___x_1878_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_a_1876_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
}
else
{
lean_object* v_a_1885_; lean_object* v___x_1887_; uint8_t v_isShared_1888_; uint8_t v_isSharedCheck_1892_; 
lean_del_object(v___x_1797_);
lean_dec_ref(v_code_1795_);
lean_dec_ref(v_params_1794_);
v_a_1885_ = lean_ctor_get(v___x_1801_, 0);
v_isSharedCheck_1892_ = !lean_is_exclusive(v___x_1801_);
if (v_isSharedCheck_1892_ == 0)
{
v___x_1887_ = v___x_1801_;
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
else
{
lean_inc(v_a_1885_);
lean_dec(v___x_1801_);
v___x_1887_ = lean_box(0);
v_isShared_1888_ = v_isSharedCheck_1892_;
goto v_resetjp_1886_;
}
v_resetjp_1886_:
{
lean_object* v___x_1890_; 
if (v_isShared_1888_ == 0)
{
v___x_1890_ = v___x_1887_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1891_; 
v_reuseFailAlloc_1891_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1891_, 0, v_a_1885_);
v___x_1890_ = v_reuseFailAlloc_1891_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
return v___x_1890_;
}
}
}
}
}
else
{
lean_object* v___x_1895_; lean_object* v___x_1896_; 
lean_dec(v___x_1793_);
v___x_1895_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9, &l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9_once, _init_l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__9);
v___x_1896_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1895_, v_a_1778_, v_a_1779_, v_a_1780_, v_a_1781_, v_a_1782_);
return v___x_1896_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1898_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1899_ = lean_unsigned_to_nat(2u);
v___x_1900_ = lean_unsigned_to_nat(260u);
v___x_1901_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_1902_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1903_ = l_mkPanicMessageWithDecl(v___x_1902_, v___x_1901_, v___x_1900_, v___x_1899_, v___x_1898_);
return v___x_1903_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; 
v___x_1908_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_1909_ = lean_unsigned_to_nat(34u);
v___x_1910_ = lean_unsigned_to_nat(261u);
v___x_1911_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__0));
v___x_1912_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_1913_ = l_mkPanicMessageWithDecl(v___x_1912_, v___x_1911_, v___x_1910_, v___x_1909_, v___x_1908_);
return v___x_1913_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(lean_object* v_c_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_, lean_object* v_a_1917_, lean_object* v_a_1918_, lean_object* v_a_1919_){
_start:
{
lean_object* v_discr_1921_; lean_object* v_alts_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1991_; 
v_discr_1921_ = lean_ctor_get(v_c_1914_, 2);
v_alts_1922_ = lean_ctor_get(v_c_1914_, 3);
v_isSharedCheck_1991_ = !lean_is_exclusive(v_c_1914_);
if (v_isSharedCheck_1991_ == 0)
{
lean_object* v_unused_1992_; lean_object* v_unused_1993_; 
v_unused_1992_ = lean_ctor_get(v_c_1914_, 1);
lean_dec(v_unused_1992_);
v_unused_1993_ = lean_ctor_get(v_c_1914_, 0);
lean_dec(v_unused_1993_);
v___x_1924_ = v_c_1914_;
v_isShared_1925_ = v_isSharedCheck_1991_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_alts_1922_);
lean_inc(v_discr_1921_);
lean_dec(v_c_1914_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1991_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1926_; lean_object* v___x_1927_; uint8_t v___x_1928_; 
v___x_1926_ = lean_array_get_size(v_alts_1922_);
v___x_1927_ = lean_unsigned_to_nat(1u);
v___x_1928_ = lean_nat_dec_eq(v___x_1926_, v___x_1927_);
if (v___x_1928_ == 0)
{
lean_object* v___x_1929_; lean_object* v___x_1930_; 
lean_del_object(v___x_1924_);
lean_dec_ref(v_alts_1922_);
lean_dec(v_discr_1921_);
v___x_1929_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__1);
v___x_1930_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1929_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_);
return v___x_1930_;
}
else
{
lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v___x_1931_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_1932_ = lean_unsigned_to_nat(0u);
v___x_1933_ = lean_array_get(v___x_1931_, v_alts_1922_, v___x_1932_);
lean_dec_ref(v_alts_1922_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v_params_1934_; lean_object* v_code_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1987_; 
v_params_1934_ = lean_ctor_get(v___x_1933_, 1);
v_code_1935_ = lean_ctor_get(v___x_1933_, 2);
v_isSharedCheck_1987_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1987_ == 0)
{
lean_object* v_unused_1988_; 
v_unused_1988_ = lean_ctor_get(v___x_1933_, 0);
lean_dec(v_unused_1988_);
v___x_1937_ = v___x_1933_;
v_isShared_1938_ = v_isSharedCheck_1987_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_code_1935_);
lean_inc(v_params_1934_);
lean_dec(v___x_1933_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1987_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
uint8_t v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; 
v___x_1939_ = 0;
v___x_1940_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_1941_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_1939_, v_params_1934_, v_a_1917_);
if (lean_obj_tag(v___x_1941_) == 0)
{
lean_object* v___x_1942_; lean_object* v_fvarId_1943_; lean_object* v_binderName_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1952_; 
lean_dec_ref_known(v___x_1941_, 1);
v___x_1942_ = lean_array_get(v___x_1940_, v_params_1934_, v___x_1932_);
lean_dec_ref(v_params_1934_);
v_fvarId_1943_ = lean_ctor_get(v___x_1942_, 0);
lean_inc(v_fvarId_1943_);
v_binderName_1944_ = lean_ctor_get(v___x_1942_, 1);
lean_inc(v_binderName_1944_);
lean_dec(v___x_1942_);
v___x_1945_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_1946_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__4));
v___x_1947_ = lean_box(0);
v___x_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1948_, 0, v_discr_1921_);
v___x_1949_ = lean_mk_empty_array_with_capacity(v___x_1927_);
v___x_1950_ = lean_array_push(v___x_1949_, v___x_1948_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set_tag(v___x_1937_, 3);
lean_ctor_set(v___x_1937_, 2, v___x_1950_);
lean_ctor_set(v___x_1937_, 1, v___x_1947_);
lean_ctor_set(v___x_1937_, 0, v___x_1946_);
v___x_1952_ = v___x_1937_;
goto v_reusejp_1951_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v___x_1946_);
lean_ctor_set(v_reuseFailAlloc_1978_, 1, v___x_1947_);
lean_ctor_set(v_reuseFailAlloc_1978_, 2, v___x_1950_);
v___x_1952_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1951_;
}
v_reusejp_1951_:
{
lean_object* v___x_1954_; 
if (v_isShared_1925_ == 0)
{
lean_ctor_set(v___x_1924_, 3, v___x_1952_);
lean_ctor_set(v___x_1924_, 2, v___x_1945_);
lean_ctor_set(v___x_1924_, 1, v_binderName_1944_);
lean_ctor_set(v___x_1924_, 0, v_fvarId_1943_);
v___x_1954_ = v___x_1924_;
goto v_reusejp_1953_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_fvarId_1943_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v_binderName_1944_);
lean_ctor_set(v_reuseFailAlloc_1977_, 2, v___x_1945_);
lean_ctor_set(v_reuseFailAlloc_1977_, 3, v___x_1952_);
v___x_1954_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1953_;
}
v_reusejp_1953_:
{
lean_object* v___x_1955_; lean_object* v_lctx_1956_; lean_object* v_nextIdx_1957_; lean_object* v___x_1959_; uint8_t v_isShared_1960_; uint8_t v_isSharedCheck_1976_; 
v___x_1955_ = lean_st_ref_take(v_a_1917_);
v_lctx_1956_ = lean_ctor_get(v___x_1955_, 0);
v_nextIdx_1957_ = lean_ctor_get(v___x_1955_, 1);
v_isSharedCheck_1976_ = !lean_is_exclusive(v___x_1955_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1959_ = v___x_1955_;
v_isShared_1960_ = v_isSharedCheck_1976_;
goto v_resetjp_1958_;
}
else
{
lean_inc(v_nextIdx_1957_);
lean_inc(v_lctx_1956_);
lean_dec(v___x_1955_);
v___x_1959_ = lean_box(0);
v_isShared_1960_ = v_isSharedCheck_1976_;
goto v_resetjp_1958_;
}
v_resetjp_1958_:
{
lean_object* v___x_1961_; lean_object* v___x_1963_; 
lean_inc_ref(v___x_1954_);
v___x_1961_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_1939_, v_lctx_1956_, v___x_1954_);
if (v_isShared_1960_ == 0)
{
lean_ctor_set(v___x_1959_, 0, v___x_1961_);
v___x_1963_ = v___x_1959_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v___x_1961_);
lean_ctor_set(v_reuseFailAlloc_1975_, 1, v_nextIdx_1957_);
v___x_1963_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; 
v___x_1964_ = lean_st_ref_put(v_a_1917_, v___x_1963_);
v___x_1965_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_1935_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_);
if (lean_obj_tag(v___x_1965_) == 0)
{
lean_object* v_a_1966_; lean_object* v___x_1968_; uint8_t v_isShared_1969_; uint8_t v_isSharedCheck_1974_; 
v_a_1966_ = lean_ctor_get(v___x_1965_, 0);
v_isSharedCheck_1974_ = !lean_is_exclusive(v___x_1965_);
if (v_isSharedCheck_1974_ == 0)
{
v___x_1968_ = v___x_1965_;
v_isShared_1969_ = v_isSharedCheck_1974_;
goto v_resetjp_1967_;
}
else
{
lean_inc(v_a_1966_);
lean_dec(v___x_1965_);
v___x_1968_ = lean_box(0);
v_isShared_1969_ = v_isSharedCheck_1974_;
goto v_resetjp_1967_;
}
v_resetjp_1967_:
{
lean_object* v___x_1970_; lean_object* v___x_1972_; 
v___x_1970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1954_);
lean_ctor_set(v___x_1970_, 1, v_a_1966_);
if (v_isShared_1969_ == 0)
{
lean_ctor_set(v___x_1968_, 0, v___x_1970_);
v___x_1972_ = v___x_1968_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1973_; 
v_reuseFailAlloc_1973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1973_, 0, v___x_1970_);
v___x_1972_ = v_reuseFailAlloc_1973_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
return v___x_1972_;
}
}
}
else
{
lean_dec_ref(v___x_1954_);
return v___x_1965_;
}
}
}
}
}
}
else
{
lean_object* v_a_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_1986_; 
lean_del_object(v___x_1937_);
lean_dec_ref(v_code_1935_);
lean_dec_ref(v_params_1934_);
lean_del_object(v___x_1924_);
lean_dec(v_discr_1921_);
v_a_1979_ = lean_ctor_get(v___x_1941_, 0);
v_isSharedCheck_1986_ = !lean_is_exclusive(v___x_1941_);
if (v_isSharedCheck_1986_ == 0)
{
v___x_1981_ = v___x_1941_;
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_a_1979_);
lean_dec(v___x_1941_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_1986_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
lean_object* v___x_1984_; 
if (v_isShared_1982_ == 0)
{
v___x_1984_ = v___x_1981_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v_a_1979_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
}
else
{
lean_object* v___x_1989_; lean_object* v___x_1990_; 
lean_dec(v___x_1933_);
lean_del_object(v___x_1924_);
lean_dec(v_discr_1921_);
v___x_1989_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___closed__5);
v___x_1990_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_1989_, v_a_1915_, v_a_1916_, v_a_1917_, v_a_1918_, v_a_1919_);
return v___x_1990_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; 
v___x_1995_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_1996_ = lean_unsigned_to_nat(2u);
v___x_1997_ = lean_unsigned_to_nat(249u);
v___x_1998_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_1999_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2000_ = l_mkPanicMessageWithDecl(v___x_1999_, v___x_1998_, v___x_1997_, v___x_1996_, v___x_1995_);
return v___x_2000_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
v___x_2004_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2005_ = lean_unsigned_to_nat(34u);
v___x_2006_ = lean_unsigned_to_nat(250u);
v___x_2007_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__0));
v___x_2008_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2009_ = l_mkPanicMessageWithDecl(v___x_2008_, v___x_2007_, v___x_2006_, v___x_2005_, v___x_2004_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg(lean_object* v_c_2010_, lean_object* v_a_2011_, lean_object* v_a_2012_, lean_object* v_a_2013_, lean_object* v_a_2014_, lean_object* v_a_2015_){
_start:
{
lean_object* v_discr_2017_; lean_object* v_alts_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2087_; 
v_discr_2017_ = lean_ctor_get(v_c_2010_, 2);
v_alts_2018_ = lean_ctor_get(v_c_2010_, 3);
v_isSharedCheck_2087_ = !lean_is_exclusive(v_c_2010_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; lean_object* v_unused_2089_; 
v_unused_2088_ = lean_ctor_get(v_c_2010_, 1);
lean_dec(v_unused_2088_);
v_unused_2089_ = lean_ctor_get(v_c_2010_, 0);
lean_dec(v_unused_2089_);
v___x_2020_ = v_c_2010_;
v_isShared_2021_ = v_isSharedCheck_2087_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_alts_2018_);
lean_inc(v_discr_2017_);
lean_dec(v_c_2010_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2087_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; uint8_t v___x_2024_; 
v___x_2022_ = lean_array_get_size(v_alts_2018_);
v___x_2023_ = lean_unsigned_to_nat(1u);
v___x_2024_ = lean_nat_dec_eq(v___x_2022_, v___x_2023_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
lean_del_object(v___x_2020_);
lean_dec_ref(v_alts_2018_);
lean_dec(v_discr_2017_);
v___x_2025_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__1);
v___x_2026_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2025_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_);
return v___x_2026_;
}
else
{
lean_object* v___x_2027_; lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2027_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2028_ = lean_unsigned_to_nat(0u);
v___x_2029_ = lean_array_get(v___x_2027_, v_alts_2018_, v___x_2028_);
lean_dec_ref(v_alts_2018_);
if (lean_obj_tag(v___x_2029_) == 0)
{
lean_object* v_params_2030_; lean_object* v_code_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2083_; 
v_params_2030_ = lean_ctor_get(v___x_2029_, 1);
v_code_2031_ = lean_ctor_get(v___x_2029_, 2);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2029_);
if (v_isSharedCheck_2083_ == 0)
{
lean_object* v_unused_2084_; 
v_unused_2084_ = lean_ctor_get(v___x_2029_, 0);
lean_dec(v_unused_2084_);
v___x_2033_ = v___x_2029_;
v_isShared_2034_ = v_isSharedCheck_2083_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_code_2031_);
lean_inc(v_params_2030_);
lean_dec(v___x_2029_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2083_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
uint8_t v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; 
v___x_2035_ = 0;
v___x_2036_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2037_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2035_, v_params_2030_, v_a_2013_);
if (lean_obj_tag(v___x_2037_) == 0)
{
lean_object* v___x_2038_; lean_object* v_fvarId_2039_; lean_object* v_binderName_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2048_; 
lean_dec_ref_known(v___x_2037_, 1);
v___x_2038_ = lean_array_get(v___x_2036_, v_params_2030_, v___x_2028_);
lean_dec_ref(v_params_2030_);
v_fvarId_2039_ = lean_ctor_get(v___x_2038_, 0);
lean_inc(v_fvarId_2039_);
v_binderName_2040_ = lean_ctor_get(v___x_2038_, 1);
lean_inc(v_binderName_2040_);
lean_dec(v___x_2038_);
v___x_2041_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2042_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__3));
v___x_2043_ = lean_box(0);
v___x_2044_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2044_, 0, v_discr_2017_);
v___x_2045_ = lean_mk_empty_array_with_capacity(v___x_2023_);
v___x_2046_ = lean_array_push(v___x_2045_, v___x_2044_);
if (v_isShared_2034_ == 0)
{
lean_ctor_set_tag(v___x_2033_, 3);
lean_ctor_set(v___x_2033_, 2, v___x_2046_);
lean_ctor_set(v___x_2033_, 1, v___x_2043_);
lean_ctor_set(v___x_2033_, 0, v___x_2042_);
v___x_2048_ = v___x_2033_;
goto v_reusejp_2047_;
}
else
{
lean_object* v_reuseFailAlloc_2074_; 
v_reuseFailAlloc_2074_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2074_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2074_, 1, v___x_2043_);
lean_ctor_set(v_reuseFailAlloc_2074_, 2, v___x_2046_);
v___x_2048_ = v_reuseFailAlloc_2074_;
goto v_reusejp_2047_;
}
v_reusejp_2047_:
{
lean_object* v___x_2050_; 
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 3, v___x_2048_);
lean_ctor_set(v___x_2020_, 2, v___x_2041_);
lean_ctor_set(v___x_2020_, 1, v_binderName_2040_);
lean_ctor_set(v___x_2020_, 0, v_fvarId_2039_);
v___x_2050_ = v___x_2020_;
goto v_reusejp_2049_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v_fvarId_2039_);
lean_ctor_set(v_reuseFailAlloc_2073_, 1, v_binderName_2040_);
lean_ctor_set(v_reuseFailAlloc_2073_, 2, v___x_2041_);
lean_ctor_set(v_reuseFailAlloc_2073_, 3, v___x_2048_);
v___x_2050_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2049_;
}
v_reusejp_2049_:
{
lean_object* v___x_2051_; lean_object* v_lctx_2052_; lean_object* v_nextIdx_2053_; lean_object* v___x_2055_; uint8_t v_isShared_2056_; uint8_t v_isSharedCheck_2072_; 
v___x_2051_ = lean_st_ref_take(v_a_2013_);
v_lctx_2052_ = lean_ctor_get(v___x_2051_, 0);
v_nextIdx_2053_ = lean_ctor_get(v___x_2051_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2055_ = v___x_2051_;
v_isShared_2056_ = v_isSharedCheck_2072_;
goto v_resetjp_2054_;
}
else
{
lean_inc(v_nextIdx_2053_);
lean_inc(v_lctx_2052_);
lean_dec(v___x_2051_);
v___x_2055_ = lean_box(0);
v_isShared_2056_ = v_isSharedCheck_2072_;
goto v_resetjp_2054_;
}
v_resetjp_2054_:
{
lean_object* v___x_2057_; lean_object* v___x_2059_; 
lean_inc_ref(v___x_2050_);
v___x_2057_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2035_, v_lctx_2052_, v___x_2050_);
if (v_isShared_2056_ == 0)
{
lean_ctor_set(v___x_2055_, 0, v___x_2057_);
v___x_2059_ = v___x_2055_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2057_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_nextIdx_2053_);
v___x_2059_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
lean_object* v___x_2060_; lean_object* v___x_2061_; 
v___x_2060_ = lean_st_ref_put(v_a_2013_, v___x_2059_);
v___x_2061_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2031_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2070_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2070_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2070_ == 0)
{
v___x_2064_ = v___x_2061_;
v_isShared_2065_ = v_isSharedCheck_2070_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2061_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2070_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
lean_object* v___x_2066_; lean_object* v___x_2068_; 
v___x_2066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2066_, 0, v___x_2050_);
lean_ctor_set(v___x_2066_, 1, v_a_2062_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v___x_2066_);
v___x_2068_ = v___x_2064_;
goto v_reusejp_2067_;
}
else
{
lean_object* v_reuseFailAlloc_2069_; 
v_reuseFailAlloc_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2069_, 0, v___x_2066_);
v___x_2068_ = v_reuseFailAlloc_2069_;
goto v_reusejp_2067_;
}
v_reusejp_2067_:
{
return v___x_2068_;
}
}
}
else
{
lean_dec_ref(v___x_2050_);
return v___x_2061_;
}
}
}
}
}
}
else
{
lean_object* v_a_2075_; lean_object* v___x_2077_; uint8_t v_isShared_2078_; uint8_t v_isSharedCheck_2082_; 
lean_del_object(v___x_2033_);
lean_dec_ref(v_code_2031_);
lean_dec_ref(v_params_2030_);
lean_del_object(v___x_2020_);
lean_dec(v_discr_2017_);
v_a_2075_ = lean_ctor_get(v___x_2037_, 0);
v_isSharedCheck_2082_ = !lean_is_exclusive(v___x_2037_);
if (v_isSharedCheck_2082_ == 0)
{
v___x_2077_ = v___x_2037_;
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
else
{
lean_inc(v_a_2075_);
lean_dec(v___x_2037_);
v___x_2077_ = lean_box(0);
v_isShared_2078_ = v_isSharedCheck_2082_;
goto v_resetjp_2076_;
}
v_resetjp_2076_:
{
lean_object* v___x_2080_; 
if (v_isShared_2078_ == 0)
{
v___x_2080_ = v___x_2077_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2081_; 
v_reuseFailAlloc_2081_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2081_, 0, v_a_2075_);
v___x_2080_ = v_reuseFailAlloc_2081_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
return v___x_2080_;
}
}
}
}
}
else
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
lean_dec(v___x_2029_);
lean_del_object(v___x_2020_);
lean_dec(v_discr_2017_);
v___x_2085_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatToMono___redArg___closed__4);
v___x_2086_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2085_, v_a_2011_, v_a_2012_, v_a_2013_, v_a_2014_, v_a_2015_);
return v___x_2086_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
v___x_2091_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2092_ = lean_unsigned_to_nat(2u);
v___x_2093_ = lean_unsigned_to_nat(238u);
v___x_2094_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2095_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2096_ = l_mkPanicMessageWithDecl(v___x_2095_, v___x_2094_, v___x_2093_, v___x_2092_, v___x_2091_);
return v___x_2096_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; 
v___x_2101_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2102_ = lean_unsigned_to_nat(34u);
v___x_2103_ = lean_unsigned_to_nat(239u);
v___x_2104_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__0));
v___x_2105_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2106_ = l_mkPanicMessageWithDecl(v___x_2105_, v___x_2104_, v___x_2103_, v___x_2102_, v___x_2101_);
return v___x_2106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg(lean_object* v_c_2107_, lean_object* v_a_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_, lean_object* v_a_2111_, lean_object* v_a_2112_){
_start:
{
lean_object* v_discr_2114_; lean_object* v_alts_2115_; lean_object* v___x_2117_; uint8_t v_isShared_2118_; uint8_t v_isSharedCheck_2184_; 
v_discr_2114_ = lean_ctor_get(v_c_2107_, 2);
v_alts_2115_ = lean_ctor_get(v_c_2107_, 3);
v_isSharedCheck_2184_ = !lean_is_exclusive(v_c_2107_);
if (v_isSharedCheck_2184_ == 0)
{
lean_object* v_unused_2185_; lean_object* v_unused_2186_; 
v_unused_2185_ = lean_ctor_get(v_c_2107_, 1);
lean_dec(v_unused_2185_);
v_unused_2186_ = lean_ctor_get(v_c_2107_, 0);
lean_dec(v_unused_2186_);
v___x_2117_ = v_c_2107_;
v_isShared_2118_ = v_isSharedCheck_2184_;
goto v_resetjp_2116_;
}
else
{
lean_inc(v_alts_2115_);
lean_inc(v_discr_2114_);
lean_dec(v_c_2107_);
v___x_2117_ = lean_box(0);
v_isShared_2118_ = v_isSharedCheck_2184_;
goto v_resetjp_2116_;
}
v_resetjp_2116_:
{
lean_object* v___x_2119_; lean_object* v___x_2120_; uint8_t v___x_2121_; 
v___x_2119_ = lean_array_get_size(v_alts_2115_);
v___x_2120_ = lean_unsigned_to_nat(1u);
v___x_2121_ = lean_nat_dec_eq(v___x_2119_, v___x_2120_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2122_; lean_object* v___x_2123_; 
lean_del_object(v___x_2117_);
lean_dec_ref(v_alts_2115_);
lean_dec(v_discr_2114_);
v___x_2122_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__1);
v___x_2123_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2122_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
return v___x_2123_;
}
else
{
lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2124_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2125_ = lean_unsigned_to_nat(0u);
v___x_2126_ = lean_array_get(v___x_2124_, v_alts_2115_, v___x_2125_);
lean_dec_ref(v_alts_2115_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_params_2127_; lean_object* v_code_2128_; lean_object* v___x_2130_; uint8_t v_isShared_2131_; uint8_t v_isSharedCheck_2180_; 
v_params_2127_ = lean_ctor_get(v___x_2126_, 1);
v_code_2128_ = lean_ctor_get(v___x_2126_, 2);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2180_ == 0)
{
lean_object* v_unused_2181_; 
v_unused_2181_ = lean_ctor_get(v___x_2126_, 0);
lean_dec(v_unused_2181_);
v___x_2130_ = v___x_2126_;
v_isShared_2131_ = v_isSharedCheck_2180_;
goto v_resetjp_2129_;
}
else
{
lean_inc(v_code_2128_);
lean_inc(v_params_2127_);
lean_dec(v___x_2126_);
v___x_2130_ = lean_box(0);
v_isShared_2131_ = v_isSharedCheck_2180_;
goto v_resetjp_2129_;
}
v_resetjp_2129_:
{
uint8_t v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v___x_2132_ = 0;
v___x_2133_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2134_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2132_, v_params_2127_, v_a_2110_);
if (lean_obj_tag(v___x_2134_) == 0)
{
lean_object* v___x_2135_; lean_object* v_fvarId_2136_; lean_object* v_binderName_2137_; lean_object* v___x_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2145_; 
lean_dec_ref_known(v___x_2134_, 1);
v___x_2135_ = lean_array_get(v___x_2133_, v_params_2127_, v___x_2125_);
lean_dec_ref(v_params_2127_);
v_fvarId_2136_ = lean_ctor_get(v___x_2135_, 0);
lean_inc(v_fvarId_2136_);
v_binderName_2137_ = lean_ctor_get(v___x_2135_, 1);
lean_inc(v_binderName_2137_);
lean_dec(v___x_2135_);
v___x_2138_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2139_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__4));
v___x_2140_ = lean_box(0);
v___x_2141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2141_, 0, v_discr_2114_);
v___x_2142_ = lean_mk_empty_array_with_capacity(v___x_2120_);
v___x_2143_ = lean_array_push(v___x_2142_, v___x_2141_);
if (v_isShared_2131_ == 0)
{
lean_ctor_set_tag(v___x_2130_, 3);
lean_ctor_set(v___x_2130_, 2, v___x_2143_);
lean_ctor_set(v___x_2130_, 1, v___x_2140_);
lean_ctor_set(v___x_2130_, 0, v___x_2139_);
v___x_2145_ = v___x_2130_;
goto v_reusejp_2144_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2139_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v___x_2140_);
lean_ctor_set(v_reuseFailAlloc_2171_, 2, v___x_2143_);
v___x_2145_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2144_;
}
v_reusejp_2144_:
{
lean_object* v___x_2147_; 
if (v_isShared_2118_ == 0)
{
lean_ctor_set(v___x_2117_, 3, v___x_2145_);
lean_ctor_set(v___x_2117_, 2, v___x_2138_);
lean_ctor_set(v___x_2117_, 1, v_binderName_2137_);
lean_ctor_set(v___x_2117_, 0, v_fvarId_2136_);
v___x_2147_ = v___x_2117_;
goto v_reusejp_2146_;
}
else
{
lean_object* v_reuseFailAlloc_2170_; 
v_reuseFailAlloc_2170_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2170_, 0, v_fvarId_2136_);
lean_ctor_set(v_reuseFailAlloc_2170_, 1, v_binderName_2137_);
lean_ctor_set(v_reuseFailAlloc_2170_, 2, v___x_2138_);
lean_ctor_set(v_reuseFailAlloc_2170_, 3, v___x_2145_);
v___x_2147_ = v_reuseFailAlloc_2170_;
goto v_reusejp_2146_;
}
v_reusejp_2146_:
{
lean_object* v___x_2148_; lean_object* v_lctx_2149_; lean_object* v_nextIdx_2150_; lean_object* v___x_2152_; uint8_t v_isShared_2153_; uint8_t v_isSharedCheck_2169_; 
v___x_2148_ = lean_st_ref_take(v_a_2110_);
v_lctx_2149_ = lean_ctor_get(v___x_2148_, 0);
v_nextIdx_2150_ = lean_ctor_get(v___x_2148_, 1);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2148_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2152_ = v___x_2148_;
v_isShared_2153_ = v_isSharedCheck_2169_;
goto v_resetjp_2151_;
}
else
{
lean_inc(v_nextIdx_2150_);
lean_inc(v_lctx_2149_);
lean_dec(v___x_2148_);
v___x_2152_ = lean_box(0);
v_isShared_2153_ = v_isSharedCheck_2169_;
goto v_resetjp_2151_;
}
v_resetjp_2151_:
{
lean_object* v___x_2154_; lean_object* v___x_2156_; 
lean_inc_ref(v___x_2147_);
v___x_2154_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2132_, v_lctx_2149_, v___x_2147_);
if (v_isShared_2153_ == 0)
{
lean_ctor_set(v___x_2152_, 0, v___x_2154_);
v___x_2156_ = v___x_2152_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2154_);
lean_ctor_set(v_reuseFailAlloc_2168_, 1, v_nextIdx_2150_);
v___x_2156_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lean_st_ref_put(v_a_2110_, v___x_2156_);
v___x_2158_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2128_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; lean_object* v___x_2161_; uint8_t v_isShared_2162_; uint8_t v_isSharedCheck_2167_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
v_isSharedCheck_2167_ = !lean_is_exclusive(v___x_2158_);
if (v_isSharedCheck_2167_ == 0)
{
v___x_2161_ = v___x_2158_;
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
else
{
lean_inc(v_a_2159_);
lean_dec(v___x_2158_);
v___x_2161_ = lean_box(0);
v_isShared_2162_ = v_isSharedCheck_2167_;
goto v_resetjp_2160_;
}
v_resetjp_2160_:
{
lean_object* v___x_2163_; lean_object* v___x_2165_; 
v___x_2163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2147_);
lean_ctor_set(v___x_2163_, 1, v_a_2159_);
if (v_isShared_2162_ == 0)
{
lean_ctor_set(v___x_2161_, 0, v___x_2163_);
v___x_2165_ = v___x_2161_;
goto v_reusejp_2164_;
}
else
{
lean_object* v_reuseFailAlloc_2166_; 
v_reuseFailAlloc_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2166_, 0, v___x_2163_);
v___x_2165_ = v_reuseFailAlloc_2166_;
goto v_reusejp_2164_;
}
v_reusejp_2164_:
{
return v___x_2165_;
}
}
}
else
{
lean_dec_ref(v___x_2147_);
return v___x_2158_;
}
}
}
}
}
}
else
{
lean_object* v_a_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2179_; 
lean_del_object(v___x_2130_);
lean_dec_ref(v_code_2128_);
lean_dec_ref(v_params_2127_);
lean_del_object(v___x_2117_);
lean_dec(v_discr_2114_);
v_a_2172_ = lean_ctor_get(v___x_2134_, 0);
v_isSharedCheck_2179_ = !lean_is_exclusive(v___x_2134_);
if (v_isSharedCheck_2179_ == 0)
{
v___x_2174_ = v___x_2134_;
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_a_2172_);
lean_dec(v___x_2134_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2179_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2177_; 
if (v_isShared_2175_ == 0)
{
v___x_2177_ = v___x_2174_;
goto v_reusejp_2176_;
}
else
{
lean_object* v_reuseFailAlloc_2178_; 
v_reuseFailAlloc_2178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2178_, 0, v_a_2172_);
v___x_2177_ = v_reuseFailAlloc_2178_;
goto v_reusejp_2176_;
}
v_reusejp_2176_:
{
return v___x_2177_;
}
}
}
}
}
else
{
lean_object* v___x_2182_; lean_object* v___x_2183_; 
lean_dec(v___x_2126_);
lean_del_object(v___x_2117_);
lean_dec(v_discr_2114_);
v___x_2182_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesStringToMono___redArg___closed__5);
v___x_2183_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2182_, v_a_2108_, v_a_2109_, v_a_2110_, v_a_2111_, v_a_2112_);
return v___x_2183_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2188_; lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; 
v___x_2188_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2189_ = lean_unsigned_to_nat(2u);
v___x_2190_ = lean_unsigned_to_nat(227u);
v___x_2191_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2192_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2193_ = l_mkPanicMessageWithDecl(v___x_2192_, v___x_2191_, v___x_2190_, v___x_2189_, v___x_2188_);
return v___x_2193_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4(void){
_start:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; 
v___x_2198_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2199_ = lean_unsigned_to_nat(34u);
v___x_2200_ = lean_unsigned_to_nat(228u);
v___x_2201_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__0));
v___x_2202_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2203_ = l_mkPanicMessageWithDecl(v___x_2202_, v___x_2201_, v___x_2200_, v___x_2199_, v___x_2198_);
return v___x_2203_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(lean_object* v_c_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_, lean_object* v_a_2208_, lean_object* v_a_2209_){
_start:
{
lean_object* v_discr_2211_; lean_object* v_alts_2212_; lean_object* v___x_2214_; uint8_t v_isShared_2215_; uint8_t v_isSharedCheck_2281_; 
v_discr_2211_ = lean_ctor_get(v_c_2204_, 2);
v_alts_2212_ = lean_ctor_get(v_c_2204_, 3);
v_isSharedCheck_2281_ = !lean_is_exclusive(v_c_2204_);
if (v_isSharedCheck_2281_ == 0)
{
lean_object* v_unused_2282_; lean_object* v_unused_2283_; 
v_unused_2282_ = lean_ctor_get(v_c_2204_, 1);
lean_dec(v_unused_2282_);
v_unused_2283_ = lean_ctor_get(v_c_2204_, 0);
lean_dec(v_unused_2283_);
v___x_2214_ = v_c_2204_;
v_isShared_2215_ = v_isSharedCheck_2281_;
goto v_resetjp_2213_;
}
else
{
lean_inc(v_alts_2212_);
lean_inc(v_discr_2211_);
lean_dec(v_c_2204_);
v___x_2214_ = lean_box(0);
v_isShared_2215_ = v_isSharedCheck_2281_;
goto v_resetjp_2213_;
}
v_resetjp_2213_:
{
lean_object* v___x_2216_; lean_object* v___x_2217_; uint8_t v___x_2218_; 
v___x_2216_ = lean_array_get_size(v_alts_2212_);
v___x_2217_ = lean_unsigned_to_nat(1u);
v___x_2218_ = lean_nat_dec_eq(v___x_2216_, v___x_2217_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; lean_object* v___x_2220_; 
lean_del_object(v___x_2214_);
lean_dec_ref(v_alts_2212_);
lean_dec(v_discr_2211_);
v___x_2219_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__1);
v___x_2220_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2219_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_, v_a_2209_);
return v___x_2220_;
}
else
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2221_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2222_ = lean_unsigned_to_nat(0u);
v___x_2223_ = lean_array_get(v___x_2221_, v_alts_2212_, v___x_2222_);
lean_dec_ref(v_alts_2212_);
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_object* v_params_2224_; lean_object* v_code_2225_; lean_object* v___x_2227_; uint8_t v_isShared_2228_; uint8_t v_isSharedCheck_2277_; 
v_params_2224_ = lean_ctor_get(v___x_2223_, 1);
v_code_2225_ = lean_ctor_get(v___x_2223_, 2);
v_isSharedCheck_2277_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2277_ == 0)
{
lean_object* v_unused_2278_; 
v_unused_2278_ = lean_ctor_get(v___x_2223_, 0);
lean_dec(v_unused_2278_);
v___x_2227_ = v___x_2223_;
v_isShared_2228_ = v_isSharedCheck_2277_;
goto v_resetjp_2226_;
}
else
{
lean_inc(v_code_2225_);
lean_inc(v_params_2224_);
lean_dec(v___x_2223_);
v___x_2227_ = lean_box(0);
v_isShared_2228_ = v_isSharedCheck_2277_;
goto v_resetjp_2226_;
}
v_resetjp_2226_:
{
uint8_t v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; 
v___x_2229_ = 0;
v___x_2230_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2231_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2229_, v_params_2224_, v_a_2207_);
if (lean_obj_tag(v___x_2231_) == 0)
{
lean_object* v___x_2232_; lean_object* v_fvarId_2233_; lean_object* v_binderName_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; lean_object* v___x_2239_; lean_object* v___x_2240_; lean_object* v___x_2242_; 
lean_dec_ref_known(v___x_2231_, 1);
v___x_2232_ = lean_array_get(v___x_2230_, v_params_2224_, v___x_2222_);
lean_dec_ref(v_params_2224_);
v_fvarId_2233_ = lean_ctor_get(v___x_2232_, 0);
lean_inc(v_fvarId_2233_);
v_binderName_2234_ = lean_ctor_get(v___x_2232_, 1);
lean_inc(v_binderName_2234_);
lean_dec(v___x_2232_);
v___x_2235_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2236_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__3));
v___x_2237_ = lean_box(0);
v___x_2238_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2238_, 0, v_discr_2211_);
v___x_2239_ = lean_mk_empty_array_with_capacity(v___x_2217_);
v___x_2240_ = lean_array_push(v___x_2239_, v___x_2238_);
if (v_isShared_2228_ == 0)
{
lean_ctor_set_tag(v___x_2227_, 3);
lean_ctor_set(v___x_2227_, 2, v___x_2240_);
lean_ctor_set(v___x_2227_, 1, v___x_2237_);
lean_ctor_set(v___x_2227_, 0, v___x_2236_);
v___x_2242_ = v___x_2227_;
goto v_reusejp_2241_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v___x_2236_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v___x_2237_);
lean_ctor_set(v_reuseFailAlloc_2268_, 2, v___x_2240_);
v___x_2242_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2241_;
}
v_reusejp_2241_:
{
lean_object* v___x_2244_; 
if (v_isShared_2215_ == 0)
{
lean_ctor_set(v___x_2214_, 3, v___x_2242_);
lean_ctor_set(v___x_2214_, 2, v___x_2235_);
lean_ctor_set(v___x_2214_, 1, v_binderName_2234_);
lean_ctor_set(v___x_2214_, 0, v_fvarId_2233_);
v___x_2244_ = v___x_2214_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_fvarId_2233_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v_binderName_2234_);
lean_ctor_set(v_reuseFailAlloc_2267_, 2, v___x_2235_);
lean_ctor_set(v_reuseFailAlloc_2267_, 3, v___x_2242_);
v___x_2244_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
lean_object* v___x_2245_; lean_object* v_lctx_2246_; lean_object* v_nextIdx_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2266_; 
v___x_2245_ = lean_st_ref_take(v_a_2207_);
v_lctx_2246_ = lean_ctor_get(v___x_2245_, 0);
v_nextIdx_2247_ = lean_ctor_get(v___x_2245_, 1);
v_isSharedCheck_2266_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2249_ = v___x_2245_;
v_isShared_2250_ = v_isSharedCheck_2266_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_nextIdx_2247_);
lean_inc(v_lctx_2246_);
lean_dec(v___x_2245_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2266_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; lean_object* v___x_2253_; 
lean_inc_ref(v___x_2244_);
v___x_2251_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2229_, v_lctx_2246_, v___x_2244_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 0, v___x_2251_);
v___x_2253_ = v___x_2249_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2265_; 
v_reuseFailAlloc_2265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2265_, 0, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2265_, 1, v_nextIdx_2247_);
v___x_2253_ = v_reuseFailAlloc_2265_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; 
v___x_2254_ = lean_st_ref_put(v_a_2207_, v___x_2253_);
v___x_2255_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2225_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_, v_a_2209_);
if (lean_obj_tag(v___x_2255_) == 0)
{
lean_object* v_a_2256_; lean_object* v___x_2258_; uint8_t v_isShared_2259_; uint8_t v_isSharedCheck_2264_; 
v_a_2256_ = lean_ctor_get(v___x_2255_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2255_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2258_ = v___x_2255_;
v_isShared_2259_ = v_isSharedCheck_2264_;
goto v_resetjp_2257_;
}
else
{
lean_inc(v_a_2256_);
lean_dec(v___x_2255_);
v___x_2258_ = lean_box(0);
v_isShared_2259_ = v_isSharedCheck_2264_;
goto v_resetjp_2257_;
}
v_resetjp_2257_:
{
lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___x_2260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2244_);
lean_ctor_set(v___x_2260_, 1, v_a_2256_);
if (v_isShared_2259_ == 0)
{
lean_ctor_set(v___x_2258_, 0, v___x_2260_);
v___x_2262_ = v___x_2258_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
else
{
lean_dec_ref(v___x_2244_);
return v___x_2255_;
}
}
}
}
}
}
else
{
lean_object* v_a_2269_; lean_object* v___x_2271_; uint8_t v_isShared_2272_; uint8_t v_isSharedCheck_2276_; 
lean_del_object(v___x_2227_);
lean_dec_ref(v_code_2225_);
lean_dec_ref(v_params_2224_);
lean_del_object(v___x_2214_);
lean_dec(v_discr_2211_);
v_a_2269_ = lean_ctor_get(v___x_2231_, 0);
v_isSharedCheck_2276_ = !lean_is_exclusive(v___x_2231_);
if (v_isSharedCheck_2276_ == 0)
{
v___x_2271_ = v___x_2231_;
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
else
{
lean_inc(v_a_2269_);
lean_dec(v___x_2231_);
v___x_2271_ = lean_box(0);
v_isShared_2272_ = v_isSharedCheck_2276_;
goto v_resetjp_2270_;
}
v_resetjp_2270_:
{
lean_object* v___x_2274_; 
if (v_isShared_2272_ == 0)
{
v___x_2274_ = v___x_2271_;
goto v_reusejp_2273_;
}
else
{
lean_object* v_reuseFailAlloc_2275_; 
v_reuseFailAlloc_2275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2275_, 0, v_a_2269_);
v___x_2274_ = v_reuseFailAlloc_2275_;
goto v_reusejp_2273_;
}
v_reusejp_2273_:
{
return v___x_2274_;
}
}
}
}
}
else
{
lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec(v___x_2223_);
lean_del_object(v___x_2214_);
lean_dec(v_discr_2211_);
v___x_2279_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4, &l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___closed__4);
v___x_2280_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2279_, v_a_2205_, v_a_2206_, v_a_2207_, v_a_2208_, v_a_2209_);
return v___x_2280_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; lean_object* v___x_2287_; lean_object* v___x_2288_; lean_object* v___x_2289_; lean_object* v___x_2290_; 
v___x_2285_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2286_ = lean_unsigned_to_nat(2u);
v___x_2287_ = lean_unsigned_to_nat(215u);
v___x_2288_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2289_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2290_ = l_mkPanicMessageWithDecl(v___x_2289_, v___x_2288_, v___x_2287_, v___x_2286_, v___x_2285_);
return v___x_2290_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2294_; lean_object* v___x_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; lean_object* v___x_2299_; 
v___x_2294_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2295_ = lean_unsigned_to_nat(34u);
v___x_2296_ = lean_unsigned_to_nat(216u);
v___x_2297_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__0));
v___x_2298_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2299_ = l_mkPanicMessageWithDecl(v___x_2298_, v___x_2297_, v___x_2296_, v___x_2295_, v___x_2294_);
return v___x_2299_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(lean_object* v_c_2300_, lean_object* v_a_2301_, lean_object* v_a_2302_, lean_object* v_a_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_){
_start:
{
lean_object* v_discr_2307_; lean_object* v_alts_2308_; lean_object* v___x_2310_; uint8_t v_isShared_2311_; uint8_t v_isSharedCheck_2377_; 
v_discr_2307_ = lean_ctor_get(v_c_2300_, 2);
v_alts_2308_ = lean_ctor_get(v_c_2300_, 3);
v_isSharedCheck_2377_ = !lean_is_exclusive(v_c_2300_);
if (v_isSharedCheck_2377_ == 0)
{
lean_object* v_unused_2378_; lean_object* v_unused_2379_; 
v_unused_2378_ = lean_ctor_get(v_c_2300_, 1);
lean_dec(v_unused_2378_);
v_unused_2379_ = lean_ctor_get(v_c_2300_, 0);
lean_dec(v_unused_2379_);
v___x_2310_ = v_c_2300_;
v_isShared_2311_ = v_isSharedCheck_2377_;
goto v_resetjp_2309_;
}
else
{
lean_inc(v_alts_2308_);
lean_inc(v_discr_2307_);
lean_dec(v_c_2300_);
v___x_2310_ = lean_box(0);
v_isShared_2311_ = v_isSharedCheck_2377_;
goto v_resetjp_2309_;
}
v_resetjp_2309_:
{
lean_object* v___x_2312_; lean_object* v___x_2313_; uint8_t v___x_2314_; 
v___x_2312_ = lean_array_get_size(v_alts_2308_);
v___x_2313_ = lean_unsigned_to_nat(1u);
v___x_2314_ = lean_nat_dec_eq(v___x_2312_, v___x_2313_);
if (v___x_2314_ == 0)
{
lean_object* v___x_2315_; lean_object* v___x_2316_; 
lean_del_object(v___x_2310_);
lean_dec_ref(v_alts_2308_);
lean_dec(v_discr_2307_);
v___x_2315_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__1);
v___x_2316_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2315_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_);
return v___x_2316_;
}
else
{
lean_object* v___x_2317_; lean_object* v___x_2318_; lean_object* v___x_2319_; 
v___x_2317_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2318_ = lean_unsigned_to_nat(0u);
v___x_2319_ = lean_array_get(v___x_2317_, v_alts_2308_, v___x_2318_);
lean_dec_ref(v_alts_2308_);
if (lean_obj_tag(v___x_2319_) == 0)
{
lean_object* v_params_2320_; lean_object* v_code_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2373_; 
v_params_2320_ = lean_ctor_get(v___x_2319_, 1);
v_code_2321_ = lean_ctor_get(v___x_2319_, 2);
v_isSharedCheck_2373_ = !lean_is_exclusive(v___x_2319_);
if (v_isSharedCheck_2373_ == 0)
{
lean_object* v_unused_2374_; 
v_unused_2374_ = lean_ctor_get(v___x_2319_, 0);
lean_dec(v_unused_2374_);
v___x_2323_ = v___x_2319_;
v_isShared_2324_ = v_isSharedCheck_2373_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_code_2321_);
lean_inc(v_params_2320_);
lean_dec(v___x_2319_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2373_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
uint8_t v___x_2325_; lean_object* v___x_2326_; lean_object* v___x_2327_; 
v___x_2325_ = 0;
v___x_2326_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2327_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2325_, v_params_2320_, v_a_2303_);
if (lean_obj_tag(v___x_2327_) == 0)
{
lean_object* v___x_2328_; lean_object* v_fvarId_2329_; lean_object* v_binderName_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2338_; 
lean_dec_ref_known(v___x_2327_, 1);
v___x_2328_ = lean_array_get(v___x_2326_, v_params_2320_, v___x_2318_);
lean_dec_ref(v_params_2320_);
v_fvarId_2329_ = lean_ctor_get(v___x_2328_, 0);
lean_inc(v_fvarId_2329_);
v_binderName_2330_ = lean_ctor_get(v___x_2328_, 1);
lean_inc(v_binderName_2330_);
lean_dec(v___x_2328_);
v___x_2331_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2332_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__4));
v___x_2333_ = lean_box(0);
v___x_2334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2334_, 0, v_discr_2307_);
v___x_2335_ = lean_mk_empty_array_with_capacity(v___x_2313_);
v___x_2336_ = lean_array_push(v___x_2335_, v___x_2334_);
if (v_isShared_2324_ == 0)
{
lean_ctor_set_tag(v___x_2323_, 3);
lean_ctor_set(v___x_2323_, 2, v___x_2336_);
lean_ctor_set(v___x_2323_, 1, v___x_2333_);
lean_ctor_set(v___x_2323_, 0, v___x_2332_);
v___x_2338_ = v___x_2323_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v___x_2332_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v___x_2333_);
lean_ctor_set(v_reuseFailAlloc_2364_, 2, v___x_2336_);
v___x_2338_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
lean_object* v___x_2340_; 
if (v_isShared_2311_ == 0)
{
lean_ctor_set(v___x_2310_, 3, v___x_2338_);
lean_ctor_set(v___x_2310_, 2, v___x_2331_);
lean_ctor_set(v___x_2310_, 1, v_binderName_2330_);
lean_ctor_set(v___x_2310_, 0, v_fvarId_2329_);
v___x_2340_ = v___x_2310_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v_fvarId_2329_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v_binderName_2330_);
lean_ctor_set(v_reuseFailAlloc_2363_, 2, v___x_2331_);
lean_ctor_set(v_reuseFailAlloc_2363_, 3, v___x_2338_);
v___x_2340_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
lean_object* v___x_2341_; lean_object* v_lctx_2342_; lean_object* v_nextIdx_2343_; lean_object* v___x_2345_; uint8_t v_isShared_2346_; uint8_t v_isSharedCheck_2362_; 
v___x_2341_ = lean_st_ref_take(v_a_2303_);
v_lctx_2342_ = lean_ctor_get(v___x_2341_, 0);
v_nextIdx_2343_ = lean_ctor_get(v___x_2341_, 1);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2345_ = v___x_2341_;
v_isShared_2346_ = v_isSharedCheck_2362_;
goto v_resetjp_2344_;
}
else
{
lean_inc(v_nextIdx_2343_);
lean_inc(v_lctx_2342_);
lean_dec(v___x_2341_);
v___x_2345_ = lean_box(0);
v_isShared_2346_ = v_isSharedCheck_2362_;
goto v_resetjp_2344_;
}
v_resetjp_2344_:
{
lean_object* v___x_2347_; lean_object* v___x_2349_; 
lean_inc_ref(v___x_2340_);
v___x_2347_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2325_, v_lctx_2342_, v___x_2340_);
if (v_isShared_2346_ == 0)
{
lean_ctor_set(v___x_2345_, 0, v___x_2347_);
v___x_2349_ = v___x_2345_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2347_);
lean_ctor_set(v_reuseFailAlloc_2361_, 1, v_nextIdx_2343_);
v___x_2349_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2350_ = lean_st_ref_put(v_a_2303_, v___x_2349_);
v___x_2351_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2321_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2354_; uint8_t v_isShared_2355_; uint8_t v_isSharedCheck_2360_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2360_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2360_ == 0)
{
v___x_2354_ = v___x_2351_;
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
else
{
lean_inc(v_a_2352_);
lean_dec(v___x_2351_);
v___x_2354_ = lean_box(0);
v_isShared_2355_ = v_isSharedCheck_2360_;
goto v_resetjp_2353_;
}
v_resetjp_2353_:
{
lean_object* v___x_2356_; lean_object* v___x_2358_; 
v___x_2356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2356_, 0, v___x_2340_);
lean_ctor_set(v___x_2356_, 1, v_a_2352_);
if (v_isShared_2355_ == 0)
{
lean_ctor_set(v___x_2354_, 0, v___x_2356_);
v___x_2358_ = v___x_2354_;
goto v_reusejp_2357_;
}
else
{
lean_object* v_reuseFailAlloc_2359_; 
v_reuseFailAlloc_2359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2359_, 0, v___x_2356_);
v___x_2358_ = v_reuseFailAlloc_2359_;
goto v_reusejp_2357_;
}
v_reusejp_2357_:
{
return v___x_2358_;
}
}
}
else
{
lean_dec_ref(v___x_2340_);
return v___x_2351_;
}
}
}
}
}
}
else
{
lean_object* v_a_2365_; lean_object* v___x_2367_; uint8_t v_isShared_2368_; uint8_t v_isSharedCheck_2372_; 
lean_del_object(v___x_2323_);
lean_dec_ref(v_code_2321_);
lean_dec_ref(v_params_2320_);
lean_del_object(v___x_2310_);
lean_dec(v_discr_2307_);
v_a_2365_ = lean_ctor_get(v___x_2327_, 0);
v_isSharedCheck_2372_ = !lean_is_exclusive(v___x_2327_);
if (v_isSharedCheck_2372_ == 0)
{
v___x_2367_ = v___x_2327_;
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
else
{
lean_inc(v_a_2365_);
lean_dec(v___x_2327_);
v___x_2367_ = lean_box(0);
v_isShared_2368_ = v_isSharedCheck_2372_;
goto v_resetjp_2366_;
}
v_resetjp_2366_:
{
lean_object* v___x_2370_; 
if (v_isShared_2368_ == 0)
{
v___x_2370_ = v___x_2367_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2371_; 
v_reuseFailAlloc_2371_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2371_, 0, v_a_2365_);
v___x_2370_ = v_reuseFailAlloc_2371_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
return v___x_2370_;
}
}
}
}
}
else
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
lean_dec(v___x_2319_);
lean_del_object(v___x_2310_);
lean_dec(v_discr_2307_);
v___x_2375_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___closed__5);
v___x_2376_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2375_, v_a_2301_, v_a_2302_, v_a_2303_, v_a_2304_, v_a_2305_);
return v___x_2376_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2381_; lean_object* v___x_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2381_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2382_ = lean_unsigned_to_nat(2u);
v___x_2383_ = lean_unsigned_to_nat(203u);
v___x_2384_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2385_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2386_ = l_mkPanicMessageWithDecl(v___x_2385_, v___x_2384_, v___x_2383_, v___x_2382_, v___x_2381_);
return v___x_2386_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2391_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2392_ = lean_unsigned_to_nat(34u);
v___x_2393_ = lean_unsigned_to_nat(204u);
v___x_2394_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__0));
v___x_2395_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2396_ = l_mkPanicMessageWithDecl(v___x_2395_, v___x_2394_, v___x_2393_, v___x_2392_, v___x_2391_);
return v___x_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg(lean_object* v_c_2397_, lean_object* v_a_2398_, lean_object* v_a_2399_, lean_object* v_a_2400_, lean_object* v_a_2401_, lean_object* v_a_2402_){
_start:
{
lean_object* v_discr_2404_; lean_object* v_alts_2405_; lean_object* v___x_2407_; uint8_t v_isShared_2408_; uint8_t v_isSharedCheck_2474_; 
v_discr_2404_ = lean_ctor_get(v_c_2397_, 2);
v_alts_2405_ = lean_ctor_get(v_c_2397_, 3);
v_isSharedCheck_2474_ = !lean_is_exclusive(v_c_2397_);
if (v_isSharedCheck_2474_ == 0)
{
lean_object* v_unused_2475_; lean_object* v_unused_2476_; 
v_unused_2475_ = lean_ctor_get(v_c_2397_, 1);
lean_dec(v_unused_2475_);
v_unused_2476_ = lean_ctor_get(v_c_2397_, 0);
lean_dec(v_unused_2476_);
v___x_2407_ = v_c_2397_;
v_isShared_2408_ = v_isSharedCheck_2474_;
goto v_resetjp_2406_;
}
else
{
lean_inc(v_alts_2405_);
lean_inc(v_discr_2404_);
lean_dec(v_c_2397_);
v___x_2407_ = lean_box(0);
v_isShared_2408_ = v_isSharedCheck_2474_;
goto v_resetjp_2406_;
}
v_resetjp_2406_:
{
lean_object* v___x_2409_; lean_object* v___x_2410_; uint8_t v___x_2411_; 
v___x_2409_ = lean_array_get_size(v_alts_2405_);
v___x_2410_ = lean_unsigned_to_nat(1u);
v___x_2411_ = lean_nat_dec_eq(v___x_2409_, v___x_2410_);
if (v___x_2411_ == 0)
{
lean_object* v___x_2412_; lean_object* v___x_2413_; 
lean_del_object(v___x_2407_);
lean_dec_ref(v_alts_2405_);
lean_dec(v_discr_2404_);
v___x_2412_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__1);
v___x_2413_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2412_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
return v___x_2413_;
}
else
{
lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; 
v___x_2414_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2415_ = lean_unsigned_to_nat(0u);
v___x_2416_ = lean_array_get(v___x_2414_, v_alts_2405_, v___x_2415_);
lean_dec_ref(v_alts_2405_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v_params_2417_; lean_object* v_code_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2470_; 
v_params_2417_ = lean_ctor_get(v___x_2416_, 1);
v_code_2418_ = lean_ctor_get(v___x_2416_, 2);
v_isSharedCheck_2470_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2470_ == 0)
{
lean_object* v_unused_2471_; 
v_unused_2471_ = lean_ctor_get(v___x_2416_, 0);
lean_dec(v_unused_2471_);
v___x_2420_ = v___x_2416_;
v_isShared_2421_ = v_isSharedCheck_2470_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_code_2418_);
lean_inc(v_params_2417_);
lean_dec(v___x_2416_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2470_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
uint8_t v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; 
v___x_2422_ = 0;
v___x_2423_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2424_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2422_, v_params_2417_, v_a_2400_);
if (lean_obj_tag(v___x_2424_) == 0)
{
lean_object* v___x_2425_; lean_object* v_fvarId_2426_; lean_object* v_binderName_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2435_; 
lean_dec_ref_known(v___x_2424_, 1);
v___x_2425_ = lean_array_get(v___x_2423_, v_params_2417_, v___x_2415_);
lean_dec_ref(v_params_2417_);
v_fvarId_2426_ = lean_ctor_get(v___x_2425_, 0);
lean_inc(v_fvarId_2426_);
v_binderName_2427_ = lean_ctor_get(v___x_2425_, 1);
lean_inc(v_binderName_2427_);
lean_dec(v___x_2425_);
v___x_2428_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2429_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__4));
v___x_2430_ = lean_box(0);
v___x_2431_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2431_, 0, v_discr_2404_);
v___x_2432_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__5);
v___x_2433_ = lean_array_push(v___x_2432_, v___x_2431_);
if (v_isShared_2421_ == 0)
{
lean_ctor_set_tag(v___x_2420_, 3);
lean_ctor_set(v___x_2420_, 2, v___x_2433_);
lean_ctor_set(v___x_2420_, 1, v___x_2430_);
lean_ctor_set(v___x_2420_, 0, v___x_2429_);
v___x_2435_ = v___x_2420_;
goto v_reusejp_2434_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2429_);
lean_ctor_set(v_reuseFailAlloc_2461_, 1, v___x_2430_);
lean_ctor_set(v_reuseFailAlloc_2461_, 2, v___x_2433_);
v___x_2435_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2434_;
}
v_reusejp_2434_:
{
lean_object* v___x_2437_; 
if (v_isShared_2408_ == 0)
{
lean_ctor_set(v___x_2407_, 3, v___x_2435_);
lean_ctor_set(v___x_2407_, 2, v___x_2428_);
lean_ctor_set(v___x_2407_, 1, v_binderName_2427_);
lean_ctor_set(v___x_2407_, 0, v_fvarId_2426_);
v___x_2437_ = v___x_2407_;
goto v_reusejp_2436_;
}
else
{
lean_object* v_reuseFailAlloc_2460_; 
v_reuseFailAlloc_2460_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2460_, 0, v_fvarId_2426_);
lean_ctor_set(v_reuseFailAlloc_2460_, 1, v_binderName_2427_);
lean_ctor_set(v_reuseFailAlloc_2460_, 2, v___x_2428_);
lean_ctor_set(v_reuseFailAlloc_2460_, 3, v___x_2435_);
v___x_2437_ = v_reuseFailAlloc_2460_;
goto v_reusejp_2436_;
}
v_reusejp_2436_:
{
lean_object* v___x_2438_; lean_object* v_lctx_2439_; lean_object* v_nextIdx_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2459_; 
v___x_2438_ = lean_st_ref_take(v_a_2400_);
v_lctx_2439_ = lean_ctor_get(v___x_2438_, 0);
v_nextIdx_2440_ = lean_ctor_get(v___x_2438_, 1);
v_isSharedCheck_2459_ = !lean_is_exclusive(v___x_2438_);
if (v_isSharedCheck_2459_ == 0)
{
v___x_2442_ = v___x_2438_;
v_isShared_2443_ = v_isSharedCheck_2459_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_nextIdx_2440_);
lean_inc(v_lctx_2439_);
lean_dec(v___x_2438_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2459_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2446_; 
lean_inc_ref(v___x_2437_);
v___x_2444_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2422_, v_lctx_2439_, v___x_2437_);
if (v_isShared_2443_ == 0)
{
lean_ctor_set(v___x_2442_, 0, v___x_2444_);
v___x_2446_ = v___x_2442_;
goto v_reusejp_2445_;
}
else
{
lean_object* v_reuseFailAlloc_2458_; 
v_reuseFailAlloc_2458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2458_, 0, v___x_2444_);
lean_ctor_set(v_reuseFailAlloc_2458_, 1, v_nextIdx_2440_);
v___x_2446_ = v_reuseFailAlloc_2458_;
goto v_reusejp_2445_;
}
v_reusejp_2445_:
{
lean_object* v___x_2447_; lean_object* v___x_2448_; 
v___x_2447_ = lean_st_ref_put(v_a_2400_, v___x_2446_);
v___x_2448_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2418_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
if (lean_obj_tag(v___x_2448_) == 0)
{
lean_object* v_a_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2457_; 
v_a_2449_ = lean_ctor_get(v___x_2448_, 0);
v_isSharedCheck_2457_ = !lean_is_exclusive(v___x_2448_);
if (v_isSharedCheck_2457_ == 0)
{
v___x_2451_ = v___x_2448_;
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_a_2449_);
lean_dec(v___x_2448_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2457_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
lean_object* v___x_2453_; lean_object* v___x_2455_; 
v___x_2453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2453_, 0, v___x_2437_);
lean_ctor_set(v___x_2453_, 1, v_a_2449_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2453_);
v___x_2455_ = v___x_2451_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2456_; 
v_reuseFailAlloc_2456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2456_, 0, v___x_2453_);
v___x_2455_ = v_reuseFailAlloc_2456_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
return v___x_2455_;
}
}
}
else
{
lean_dec_ref(v___x_2437_);
return v___x_2448_;
}
}
}
}
}
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
lean_del_object(v___x_2420_);
lean_dec_ref(v_code_2418_);
lean_dec_ref(v_params_2417_);
lean_del_object(v___x_2407_);
lean_dec(v_discr_2404_);
v_a_2462_ = lean_ctor_get(v___x_2424_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2424_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___x_2424_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2424_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
}
else
{
lean_object* v___x_2472_; lean_object* v___x_2473_; 
lean_dec(v___x_2416_);
lean_del_object(v___x_2407_);
lean_dec(v_discr_2404_);
v___x_2472_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesArrayToMono___redArg___closed__6);
v___x_2473_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2472_, v_a_2398_, v_a_2399_, v_a_2400_, v_a_2401_, v_a_2402_);
return v___x_2473_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2(void){
_start:
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
v___x_2478_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__1));
v___x_2479_ = lean_unsigned_to_nat(2u);
v___x_2480_ = lean_unsigned_to_nat(192u);
v___x_2481_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2482_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2483_ = l_mkPanicMessageWithDecl(v___x_2482_, v___x_2481_, v___x_2480_, v___x_2479_, v___x_2478_);
return v___x_2483_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5(void){
_start:
{
lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; 
v___x_2485_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__12));
v___x_2486_ = lean_unsigned_to_nat(34u);
v___x_2487_ = lean_unsigned_to_nat(193u);
v___x_2488_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__0));
v___x_2489_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__10));
v___x_2490_ = l_mkPanicMessageWithDecl(v___x_2489_, v___x_2488_, v___x_2487_, v___x_2486_, v___x_2485_);
return v___x_2490_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg(lean_object* v_c_2491_, lean_object* v_uintName_2492_, lean_object* v_a_2493_, lean_object* v_a_2494_, lean_object* v_a_2495_, lean_object* v_a_2496_, lean_object* v_a_2497_){
_start:
{
lean_object* v_discr_2499_; lean_object* v_alts_2500_; lean_object* v___x_2502_; uint8_t v_isShared_2503_; uint8_t v_isSharedCheck_2570_; 
v_discr_2499_ = lean_ctor_get(v_c_2491_, 2);
v_alts_2500_ = lean_ctor_get(v_c_2491_, 3);
v_isSharedCheck_2570_ = !lean_is_exclusive(v_c_2491_);
if (v_isSharedCheck_2570_ == 0)
{
lean_object* v_unused_2571_; lean_object* v_unused_2572_; 
v_unused_2571_ = lean_ctor_get(v_c_2491_, 1);
lean_dec(v_unused_2571_);
v_unused_2572_ = lean_ctor_get(v_c_2491_, 0);
lean_dec(v_unused_2572_);
v___x_2502_ = v_c_2491_;
v_isShared_2503_ = v_isSharedCheck_2570_;
goto v_resetjp_2501_;
}
else
{
lean_inc(v_alts_2500_);
lean_inc(v_discr_2499_);
lean_dec(v_c_2491_);
v___x_2502_ = lean_box(0);
v_isShared_2503_ = v_isSharedCheck_2570_;
goto v_resetjp_2501_;
}
v_resetjp_2501_:
{
lean_object* v___x_2504_; lean_object* v___x_2505_; uint8_t v___x_2506_; 
v___x_2504_ = lean_array_get_size(v_alts_2500_);
v___x_2505_ = lean_unsigned_to_nat(1u);
v___x_2506_ = lean_nat_dec_eq(v___x_2504_, v___x_2505_);
if (v___x_2506_ == 0)
{
lean_object* v___x_2507_; lean_object* v___x_2508_; 
lean_del_object(v___x_2502_);
lean_dec_ref(v_alts_2500_);
lean_dec(v_discr_2499_);
lean_dec(v_uintName_2492_);
v___x_2507_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__2);
v___x_2508_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2507_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_);
return v___x_2508_;
}
else
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2509_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0, &l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0_once, _init_l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__4___closed__0);
v___x_2510_ = lean_unsigned_to_nat(0u);
v___x_2511_ = lean_array_get(v___x_2509_, v_alts_2500_, v___x_2510_);
lean_dec_ref(v_alts_2500_);
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_object* v_params_2512_; lean_object* v_code_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2566_; 
v_params_2512_ = lean_ctor_get(v___x_2511_, 1);
v_code_2513_ = lean_ctor_get(v___x_2511_, 2);
v_isSharedCheck_2566_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2566_ == 0)
{
lean_object* v_unused_2567_; 
v_unused_2567_ = lean_ctor_get(v___x_2511_, 0);
lean_dec(v_unused_2567_);
v___x_2515_ = v___x_2511_;
v_isShared_2516_ = v_isSharedCheck_2566_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_code_2513_);
lean_inc(v_params_2512_);
lean_dec(v___x_2511_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2566_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
uint8_t v___x_2517_; lean_object* v___x_2518_; lean_object* v___x_2519_; 
v___x_2517_ = 0;
v___x_2518_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2519_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2517_, v_params_2512_, v_a_2495_);
if (lean_obj_tag(v___x_2519_) == 0)
{
lean_object* v___x_2520_; lean_object* v_fvarId_2521_; lean_object* v_binderName_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2531_; 
lean_dec_ref_known(v___x_2519_, 1);
v___x_2520_ = lean_array_get(v___x_2518_, v_params_2512_, v___x_2510_);
lean_dec_ref(v_params_2512_);
v_fvarId_2521_ = lean_ctor_get(v___x_2520_, 0);
lean_inc(v_fvarId_2521_);
v_binderName_2522_ = lean_ctor_get(v___x_2520_, 1);
lean_inc(v_binderName_2522_);
lean_dec(v___x_2520_);
v___x_2523_ = l_Lean_Compiler_LCNF_anyExpr;
v___x_2524_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__4));
v___x_2525_ = l_Lean_Name_str___override(v_uintName_2492_, v___x_2524_);
v___x_2526_ = lean_box(0);
v___x_2527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2527_, 0, v_discr_2499_);
v___x_2528_ = lean_mk_empty_array_with_capacity(v___x_2505_);
v___x_2529_ = lean_array_push(v___x_2528_, v___x_2527_);
if (v_isShared_2516_ == 0)
{
lean_ctor_set_tag(v___x_2515_, 3);
lean_ctor_set(v___x_2515_, 2, v___x_2529_);
lean_ctor_set(v___x_2515_, 1, v___x_2526_);
lean_ctor_set(v___x_2515_, 0, v___x_2525_);
v___x_2531_ = v___x_2515_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2557_; 
v_reuseFailAlloc_2557_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2557_, 0, v___x_2525_);
lean_ctor_set(v_reuseFailAlloc_2557_, 1, v___x_2526_);
lean_ctor_set(v_reuseFailAlloc_2557_, 2, v___x_2529_);
v___x_2531_ = v_reuseFailAlloc_2557_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
lean_object* v___x_2533_; 
if (v_isShared_2503_ == 0)
{
lean_ctor_set(v___x_2502_, 3, v___x_2531_);
lean_ctor_set(v___x_2502_, 2, v___x_2523_);
lean_ctor_set(v___x_2502_, 1, v_binderName_2522_);
lean_ctor_set(v___x_2502_, 0, v_fvarId_2521_);
v___x_2533_ = v___x_2502_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v_fvarId_2521_);
lean_ctor_set(v_reuseFailAlloc_2556_, 1, v_binderName_2522_);
lean_ctor_set(v_reuseFailAlloc_2556_, 2, v___x_2523_);
lean_ctor_set(v_reuseFailAlloc_2556_, 3, v___x_2531_);
v___x_2533_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
lean_object* v___x_2534_; lean_object* v_lctx_2535_; lean_object* v_nextIdx_2536_; lean_object* v___x_2538_; uint8_t v_isShared_2539_; uint8_t v_isSharedCheck_2555_; 
v___x_2534_ = lean_st_ref_take(v_a_2495_);
v_lctx_2535_ = lean_ctor_get(v___x_2534_, 0);
v_nextIdx_2536_ = lean_ctor_get(v___x_2534_, 1);
v_isSharedCheck_2555_ = !lean_is_exclusive(v___x_2534_);
if (v_isSharedCheck_2555_ == 0)
{
v___x_2538_ = v___x_2534_;
v_isShared_2539_ = v_isSharedCheck_2555_;
goto v_resetjp_2537_;
}
else
{
lean_inc(v_nextIdx_2536_);
lean_inc(v_lctx_2535_);
lean_dec(v___x_2534_);
v___x_2538_ = lean_box(0);
v_isShared_2539_ = v_isSharedCheck_2555_;
goto v_resetjp_2537_;
}
v_resetjp_2537_:
{
lean_object* v___x_2540_; lean_object* v___x_2542_; 
lean_inc_ref(v___x_2533_);
v___x_2540_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2517_, v_lctx_2535_, v___x_2533_);
if (v_isShared_2539_ == 0)
{
lean_ctor_set(v___x_2538_, 0, v___x_2540_);
v___x_2542_ = v___x_2538_;
goto v_reusejp_2541_;
}
else
{
lean_object* v_reuseFailAlloc_2554_; 
v_reuseFailAlloc_2554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2554_, 0, v___x_2540_);
lean_ctor_set(v_reuseFailAlloc_2554_, 1, v_nextIdx_2536_);
v___x_2542_ = v_reuseFailAlloc_2554_;
goto v_reusejp_2541_;
}
v_reusejp_2541_:
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
v___x_2543_ = lean_st_ref_put(v_a_2495_, v___x_2542_);
v___x_2544_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2513_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_);
if (lean_obj_tag(v___x_2544_) == 0)
{
lean_object* v_a_2545_; lean_object* v___x_2547_; uint8_t v_isShared_2548_; uint8_t v_isSharedCheck_2553_; 
v_a_2545_ = lean_ctor_get(v___x_2544_, 0);
v_isSharedCheck_2553_ = !lean_is_exclusive(v___x_2544_);
if (v_isSharedCheck_2553_ == 0)
{
v___x_2547_ = v___x_2544_;
v_isShared_2548_ = v_isSharedCheck_2553_;
goto v_resetjp_2546_;
}
else
{
lean_inc(v_a_2545_);
lean_dec(v___x_2544_);
v___x_2547_ = lean_box(0);
v_isShared_2548_ = v_isSharedCheck_2553_;
goto v_resetjp_2546_;
}
v_resetjp_2546_:
{
lean_object* v___x_2549_; lean_object* v___x_2551_; 
v___x_2549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2549_, 0, v___x_2533_);
lean_ctor_set(v___x_2549_, 1, v_a_2545_);
if (v_isShared_2548_ == 0)
{
lean_ctor_set(v___x_2547_, 0, v___x_2549_);
v___x_2551_ = v___x_2547_;
goto v_reusejp_2550_;
}
else
{
lean_object* v_reuseFailAlloc_2552_; 
v_reuseFailAlloc_2552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2552_, 0, v___x_2549_);
v___x_2551_ = v_reuseFailAlloc_2552_;
goto v_reusejp_2550_;
}
v_reusejp_2550_:
{
return v___x_2551_;
}
}
}
else
{
lean_dec_ref(v___x_2533_);
return v___x_2544_;
}
}
}
}
}
}
else
{
lean_object* v_a_2558_; lean_object* v___x_2560_; uint8_t v_isShared_2561_; uint8_t v_isSharedCheck_2565_; 
lean_del_object(v___x_2515_);
lean_dec_ref(v_code_2513_);
lean_dec_ref(v_params_2512_);
lean_del_object(v___x_2502_);
lean_dec(v_discr_2499_);
lean_dec(v_uintName_2492_);
v_a_2558_ = lean_ctor_get(v___x_2519_, 0);
v_isSharedCheck_2565_ = !lean_is_exclusive(v___x_2519_);
if (v_isSharedCheck_2565_ == 0)
{
v___x_2560_ = v___x_2519_;
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
else
{
lean_inc(v_a_2558_);
lean_dec(v___x_2519_);
v___x_2560_ = lean_box(0);
v_isShared_2561_ = v_isSharedCheck_2565_;
goto v_resetjp_2559_;
}
v_resetjp_2559_:
{
lean_object* v___x_2563_; 
if (v_isShared_2561_ == 0)
{
v___x_2563_ = v___x_2560_;
goto v_reusejp_2562_;
}
else
{
lean_object* v_reuseFailAlloc_2564_; 
v_reuseFailAlloc_2564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2564_, 0, v_a_2558_);
v___x_2563_ = v_reuseFailAlloc_2564_;
goto v_reusejp_2562_;
}
v_reusejp_2562_:
{
return v___x_2563_;
}
}
}
}
}
else
{
lean_object* v___x_2568_; lean_object* v___x_2569_; 
lean_dec(v___x_2511_);
lean_del_object(v___x_2502_);
lean_dec(v_discr_2499_);
lean_dec(v_uintName_2492_);
v___x_2568_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__5);
v___x_2569_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_2568_, v_a_2493_, v_a_2494_, v_a_2495_, v_a_2496_, v_a_2497_);
return v___x_2569_;
}
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1(void){
_start:
{
lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2573_ = lean_box(0);
v___x_2574_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_2575_ = l_Lean_mkConst(v___x_2574_, v___x_2573_);
return v___x_2575_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6(void){
_start:
{
lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; 
v___x_2582_ = lean_box(0);
v___x_2583_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_2584_ = l_Lean_mkConst(v___x_2583_, v___x_2582_);
return v___x_2584_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7(void){
_start:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v___x_2595_ = lean_box(0);
v___x_2596_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_2597_ = l_Lean_mkConst(v___x_2596_, v___x_2595_);
return v___x_2597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(lean_object* v___x_2630_, size_t v_sz_2631_, size_t v_i_2632_, lean_object* v_bs_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
uint8_t v___x_2640_; 
v___x_2640_ = lean_usize_dec_lt(v_i_2632_, v_sz_2631_);
if (v___x_2640_ == 0)
{
lean_object* v___x_2641_; 
lean_dec(v___x_2630_);
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v_bs_2633_);
return v___x_2641_;
}
else
{
lean_object* v_v_2642_; lean_object* v___x_2643_; lean_object* v_bs_x27_2644_; lean_object* v_a_2646_; 
v_v_2642_ = lean_array_uget(v_bs_2633_, v_i_2632_);
v___x_2643_ = lean_unsigned_to_nat(0u);
v_bs_x27_2644_ = lean_array_uset(v_bs_2633_, v_i_2632_, v___x_2643_);
if (lean_obj_tag(v_v_2642_) == 0)
{
lean_object* v_ctorName_2651_; lean_object* v_params_2652_; lean_object* v_code_2653_; lean_object* v___x_2655_; uint8_t v_isShared_2656_; uint8_t v_isSharedCheck_2780_; 
v_ctorName_2651_ = lean_ctor_get(v_v_2642_, 0);
v_params_2652_ = lean_ctor_get(v_v_2642_, 1);
v_code_2653_ = lean_ctor_get(v_v_2642_, 2);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_v_2642_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2655_ = v_v_2642_;
v_isShared_2656_ = v_isSharedCheck_2780_;
goto v_resetjp_2654_;
}
else
{
lean_inc(v_code_2653_);
lean_inc(v_params_2652_);
lean_inc(v_ctorName_2651_);
lean_dec(v_v_2642_);
v___x_2655_ = lean_box(0);
v_isShared_2656_ = v_isSharedCheck_2780_;
goto v_resetjp_2654_;
}
v_resetjp_2654_:
{
uint8_t v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; 
v___x_2657_ = 0;
v___x_2658_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2659_ = lean_box(0);
v___x_2660_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2661_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2657_, v_params_2652_, v___y_2636_);
if (lean_obj_tag(v___x_2661_) == 0)
{
lean_object* v___x_2662_; lean_object* v___x_2663_; uint8_t v___x_2664_; 
lean_dec_ref_known(v___x_2661_, 1);
v___x_2662_ = lean_array_get(v___x_2658_, v_params_2652_, v___x_2643_);
lean_dec_ref(v_params_2652_);
v___x_2663_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__1));
v___x_2664_ = lean_name_eq(v_ctorName_2651_, v___x_2663_);
lean_dec(v_ctorName_2651_);
if (v___x_2664_ == 0)
{
lean_object* v_fvarId_2665_; lean_object* v_binderName_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v_lctx_2674_; lean_object* v_nextIdx_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2700_; 
v_fvarId_2665_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_fvarId_2665_);
v_binderName_2666_ = lean_ctor_get(v___x_2662_, 1);
lean_inc(v_binderName_2666_);
lean_dec(v___x_2662_);
v___x_2667_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2668_ = lean_unsigned_to_nat(1u);
v___x_2669_ = lean_mk_empty_array_with_capacity(v___x_2668_);
lean_inc(v___x_2630_);
v___x_2670_ = lean_array_push(v___x_2669_, v___x_2630_);
v___x_2671_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2671_, 0, v___x_2667_);
lean_ctor_set(v___x_2671_, 1, v___x_2659_);
lean_ctor_set(v___x_2671_, 2, v___x_2670_);
v___x_2672_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2672_, 0, v_fvarId_2665_);
lean_ctor_set(v___x_2672_, 1, v_binderName_2666_);
lean_ctor_set(v___x_2672_, 2, v___x_2660_);
lean_ctor_set(v___x_2672_, 3, v___x_2671_);
v___x_2673_ = lean_st_ref_take(v___y_2636_);
v_lctx_2674_ = lean_ctor_get(v___x_2673_, 0);
v_nextIdx_2675_ = lean_ctor_get(v___x_2673_, 1);
v_isSharedCheck_2700_ = !lean_is_exclusive(v___x_2673_);
if (v_isSharedCheck_2700_ == 0)
{
v___x_2677_ = v___x_2673_;
v_isShared_2678_ = v_isSharedCheck_2700_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_nextIdx_2675_);
lean_inc(v_lctx_2674_);
lean_dec(v___x_2673_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2700_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2681_; 
lean_inc_ref(v___x_2672_);
v___x_2679_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2657_, v_lctx_2674_, v___x_2672_);
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 0, v___x_2679_);
v___x_2681_ = v___x_2677_;
goto v_reusejp_2680_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v___x_2679_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v_nextIdx_2675_);
v___x_2681_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2680_;
}
v_reusejp_2680_:
{
lean_object* v___x_2682_; lean_object* v___x_2683_; 
v___x_2682_ = lean_st_ref_put(v___y_2636_, v___x_2681_);
v___x_2683_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2653_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2683_) == 0)
{
lean_object* v_a_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2689_; 
v_a_2684_ = lean_ctor_get(v___x_2683_, 0);
lean_inc(v_a_2684_);
lean_dec_ref_known(v___x_2683_, 1);
v___x_2685_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_2686_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2672_);
lean_ctor_set(v___x_2687_, 1, v_a_2684_);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 2, v___x_2687_);
lean_ctor_set(v___x_2655_, 1, v___x_2686_);
lean_ctor_set(v___x_2655_, 0, v___x_2685_);
v___x_2689_ = v___x_2655_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2690_; 
v_reuseFailAlloc_2690_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2690_, 0, v___x_2685_);
lean_ctor_set(v_reuseFailAlloc_2690_, 1, v___x_2686_);
lean_ctor_set(v_reuseFailAlloc_2690_, 2, v___x_2687_);
v___x_2689_ = v_reuseFailAlloc_2690_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
v_a_2646_ = v___x_2689_;
goto v___jp_2645_;
}
}
else
{
lean_object* v_a_2691_; lean_object* v___x_2693_; uint8_t v_isShared_2694_; uint8_t v_isSharedCheck_2698_; 
lean_dec_ref_known(v___x_2672_, 4);
lean_del_object(v___x_2655_);
lean_dec_ref(v_bs_x27_2644_);
lean_dec(v___x_2630_);
v_a_2691_ = lean_ctor_get(v___x_2683_, 0);
v_isSharedCheck_2698_ = !lean_is_exclusive(v___x_2683_);
if (v_isSharedCheck_2698_ == 0)
{
v___x_2693_ = v___x_2683_;
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
else
{
lean_inc(v_a_2691_);
lean_dec(v___x_2683_);
v___x_2693_ = lean_box(0);
v_isShared_2694_ = v_isSharedCheck_2698_;
goto v_resetjp_2692_;
}
v_resetjp_2692_:
{
lean_object* v___x_2696_; 
if (v_isShared_2694_ == 0)
{
v___x_2696_ = v___x_2693_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2697_; 
v_reuseFailAlloc_2697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2697_, 0, v_a_2691_);
v___x_2696_ = v_reuseFailAlloc_2697_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
return v___x_2696_;
}
}
}
}
}
}
else
{
lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2701_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__5));
v___x_2702_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___closed__3));
v___x_2703_ = lean_unsigned_to_nat(1u);
v___x_2704_ = lean_mk_empty_array_with_capacity(v___x_2703_);
lean_inc(v___x_2630_);
v___x_2705_ = lean_array_push(v___x_2704_, v___x_2630_);
v___x_2706_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2706_, 0, v___x_2702_);
lean_ctor_set(v___x_2706_, 1, v___x_2659_);
lean_ctor_set(v___x_2706_, 2, v___x_2705_);
v___x_2707_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2657_, v___x_2701_, v___x_2660_, v___x_2706_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2707_) == 0)
{
lean_object* v_a_2708_; lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_a_2708_ = lean_ctor_get(v___x_2707_, 0);
lean_inc(v_a_2708_);
lean_dec_ref_known(v___x_2707_, 1);
v___x_2709_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_2710_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_2711_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2657_, v___x_2709_, v___x_2660_, v___x_2710_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2711_) == 0)
{
lean_object* v_a_2712_; lean_object* v_fvarId_2713_; lean_object* v_binderName_2714_; lean_object* v_fvarId_2715_; lean_object* v_fvarId_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v_lctx_2727_; lean_object* v_nextIdx_2728_; lean_object* v___x_2730_; uint8_t v_isShared_2731_; uint8_t v_isSharedCheck_2755_; 
v_a_2712_ = lean_ctor_get(v___x_2711_, 0);
lean_inc(v_a_2712_);
lean_dec_ref_known(v___x_2711_, 1);
v_fvarId_2713_ = lean_ctor_get(v___x_2662_, 0);
lean_inc(v_fvarId_2713_);
v_binderName_2714_ = lean_ctor_get(v___x_2662_, 1);
lean_inc(v_binderName_2714_);
lean_dec(v___x_2662_);
v_fvarId_2715_ = lean_ctor_get(v_a_2708_, 0);
v_fvarId_2716_ = lean_ctor_get(v_a_2712_, 0);
v___x_2717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_2715_);
v___x_2718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2718_, 0, v_fvarId_2715_);
lean_inc(v_fvarId_2716_);
v___x_2719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2719_, 0, v_fvarId_2716_);
v___x_2720_ = lean_unsigned_to_nat(2u);
v___x_2721_ = lean_mk_empty_array_with_capacity(v___x_2720_);
v___x_2722_ = lean_array_push(v___x_2721_, v___x_2718_);
v___x_2723_ = lean_array_push(v___x_2722_, v___x_2719_);
v___x_2724_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2724_, 0, v___x_2717_);
lean_ctor_set(v___x_2724_, 1, v___x_2659_);
lean_ctor_set(v___x_2724_, 2, v___x_2723_);
v___x_2725_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2725_, 0, v_fvarId_2713_);
lean_ctor_set(v___x_2725_, 1, v_binderName_2714_);
lean_ctor_set(v___x_2725_, 2, v___x_2660_);
lean_ctor_set(v___x_2725_, 3, v___x_2724_);
v___x_2726_ = lean_st_ref_take(v___y_2636_);
v_lctx_2727_ = lean_ctor_get(v___x_2726_, 0);
v_nextIdx_2728_ = lean_ctor_get(v___x_2726_, 1);
v_isSharedCheck_2755_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2730_ = v___x_2726_;
v_isShared_2731_ = v_isSharedCheck_2755_;
goto v_resetjp_2729_;
}
else
{
lean_inc(v_nextIdx_2728_);
lean_inc(v_lctx_2727_);
lean_dec(v___x_2726_);
v___x_2730_ = lean_box(0);
v_isShared_2731_ = v_isSharedCheck_2755_;
goto v_resetjp_2729_;
}
v_resetjp_2729_:
{
lean_object* v___x_2732_; lean_object* v___x_2734_; 
lean_inc_ref(v___x_2725_);
v___x_2732_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2657_, v_lctx_2727_, v___x_2725_);
if (v_isShared_2731_ == 0)
{
lean_ctor_set(v___x_2730_, 0, v___x_2732_);
v___x_2734_ = v___x_2730_;
goto v_reusejp_2733_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v___x_2732_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v_nextIdx_2728_);
v___x_2734_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2733_;
}
v_reusejp_2733_:
{
lean_object* v___x_2735_; lean_object* v___x_2736_; 
v___x_2735_ = lean_st_ref_put(v___y_2636_, v___x_2734_);
v___x_2736_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2653_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2736_) == 0)
{
lean_object* v_a_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2744_; 
v_a_2737_ = lean_ctor_get(v___x_2736_, 0);
lean_inc(v_a_2737_);
lean_dec_ref_known(v___x_2736_, 1);
v___x_2738_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_2739_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2740_, 0, v___x_2725_);
lean_ctor_set(v___x_2740_, 1, v_a_2737_);
v___x_2741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2741_, 0, v_a_2712_);
lean_ctor_set(v___x_2741_, 1, v___x_2740_);
v___x_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2742_, 0, v_a_2708_);
lean_ctor_set(v___x_2742_, 1, v___x_2741_);
if (v_isShared_2656_ == 0)
{
lean_ctor_set(v___x_2655_, 2, v___x_2742_);
lean_ctor_set(v___x_2655_, 1, v___x_2739_);
lean_ctor_set(v___x_2655_, 0, v___x_2738_);
v___x_2744_ = v___x_2655_;
goto v_reusejp_2743_;
}
else
{
lean_object* v_reuseFailAlloc_2745_; 
v_reuseFailAlloc_2745_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2745_, 0, v___x_2738_);
lean_ctor_set(v_reuseFailAlloc_2745_, 1, v___x_2739_);
lean_ctor_set(v_reuseFailAlloc_2745_, 2, v___x_2742_);
v___x_2744_ = v_reuseFailAlloc_2745_;
goto v_reusejp_2743_;
}
v_reusejp_2743_:
{
v_a_2646_ = v___x_2744_;
goto v___jp_2645_;
}
}
else
{
lean_object* v_a_2746_; lean_object* v___x_2748_; uint8_t v_isShared_2749_; uint8_t v_isSharedCheck_2753_; 
lean_dec_ref_known(v___x_2725_, 4);
lean_dec(v_a_2712_);
lean_dec(v_a_2708_);
lean_del_object(v___x_2655_);
lean_dec_ref(v_bs_x27_2644_);
lean_dec(v___x_2630_);
v_a_2746_ = lean_ctor_get(v___x_2736_, 0);
v_isSharedCheck_2753_ = !lean_is_exclusive(v___x_2736_);
if (v_isSharedCheck_2753_ == 0)
{
v___x_2748_ = v___x_2736_;
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
else
{
lean_inc(v_a_2746_);
lean_dec(v___x_2736_);
v___x_2748_ = lean_box(0);
v_isShared_2749_ = v_isSharedCheck_2753_;
goto v_resetjp_2747_;
}
v_resetjp_2747_:
{
lean_object* v___x_2751_; 
if (v_isShared_2749_ == 0)
{
v___x_2751_ = v___x_2748_;
goto v_reusejp_2750_;
}
else
{
lean_object* v_reuseFailAlloc_2752_; 
v_reuseFailAlloc_2752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2752_, 0, v_a_2746_);
v___x_2751_ = v_reuseFailAlloc_2752_;
goto v_reusejp_2750_;
}
v_reusejp_2750_:
{
return v___x_2751_;
}
}
}
}
}
}
else
{
lean_object* v_a_2756_; lean_object* v___x_2758_; uint8_t v_isShared_2759_; uint8_t v_isSharedCheck_2763_; 
lean_dec(v_a_2708_);
lean_dec(v___x_2662_);
lean_del_object(v___x_2655_);
lean_dec_ref(v_code_2653_);
lean_dec_ref(v_bs_x27_2644_);
lean_dec(v___x_2630_);
v_a_2756_ = lean_ctor_get(v___x_2711_, 0);
v_isSharedCheck_2763_ = !lean_is_exclusive(v___x_2711_);
if (v_isSharedCheck_2763_ == 0)
{
v___x_2758_ = v___x_2711_;
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
else
{
lean_inc(v_a_2756_);
lean_dec(v___x_2711_);
v___x_2758_ = lean_box(0);
v_isShared_2759_ = v_isSharedCheck_2763_;
goto v_resetjp_2757_;
}
v_resetjp_2757_:
{
lean_object* v___x_2761_; 
if (v_isShared_2759_ == 0)
{
v___x_2761_ = v___x_2758_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_a_2756_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
}
}
else
{
lean_object* v_a_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2771_; 
lean_dec(v___x_2662_);
lean_del_object(v___x_2655_);
lean_dec_ref(v_code_2653_);
lean_dec_ref(v_bs_x27_2644_);
lean_dec(v___x_2630_);
v_a_2764_ = lean_ctor_get(v___x_2707_, 0);
v_isSharedCheck_2771_ = !lean_is_exclusive(v___x_2707_);
if (v_isSharedCheck_2771_ == 0)
{
v___x_2766_ = v___x_2707_;
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_a_2764_);
lean_dec(v___x_2707_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2771_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v___x_2769_; 
if (v_isShared_2767_ == 0)
{
v___x_2769_ = v___x_2766_;
goto v_reusejp_2768_;
}
else
{
lean_object* v_reuseFailAlloc_2770_; 
v_reuseFailAlloc_2770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2770_, 0, v_a_2764_);
v___x_2769_ = v_reuseFailAlloc_2770_;
goto v_reusejp_2768_;
}
v_reusejp_2768_:
{
return v___x_2769_;
}
}
}
}
}
else
{
lean_object* v_a_2772_; lean_object* v___x_2774_; uint8_t v_isShared_2775_; uint8_t v_isSharedCheck_2779_; 
lean_del_object(v___x_2655_);
lean_dec_ref(v_code_2653_);
lean_dec_ref(v_params_2652_);
lean_dec(v_ctorName_2651_);
lean_dec_ref(v_bs_x27_2644_);
lean_dec(v___x_2630_);
v_a_2772_ = lean_ctor_get(v___x_2661_, 0);
v_isSharedCheck_2779_ = !lean_is_exclusive(v___x_2661_);
if (v_isSharedCheck_2779_ == 0)
{
v___x_2774_ = v___x_2661_;
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
else
{
lean_inc(v_a_2772_);
lean_dec(v___x_2661_);
v___x_2774_ = lean_box(0);
v_isShared_2775_ = v_isSharedCheck_2779_;
goto v_resetjp_2773_;
}
v_resetjp_2773_:
{
lean_object* v___x_2777_; 
if (v_isShared_2775_ == 0)
{
v___x_2777_ = v___x_2774_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2778_; 
v_reuseFailAlloc_2778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2778_, 0, v_a_2772_);
v___x_2777_ = v_reuseFailAlloc_2778_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
return v___x_2777_;
}
}
}
}
}
else
{
lean_object* v_code_2781_; lean_object* v___x_2782_; 
v_code_2781_ = lean_ctor_get(v_v_2642_, 0);
lean_inc_ref(v_code_2781_);
v___x_2782_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2781_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_);
if (lean_obj_tag(v___x_2782_) == 0)
{
lean_object* v_a_2783_; lean_object* v___x_2784_; 
v_a_2783_ = lean_ctor_get(v___x_2782_, 0);
lean_inc(v_a_2783_);
lean_dec_ref_known(v___x_2782_, 1);
v___x_2784_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_2642_, v_a_2783_);
v_a_2646_ = v___x_2784_;
goto v___jp_2645_;
}
else
{
lean_object* v_a_2785_; lean_object* v___x_2787_; uint8_t v_isShared_2788_; uint8_t v_isSharedCheck_2792_; 
lean_dec_ref_known(v_v_2642_, 1);
lean_dec_ref(v_bs_x27_2644_);
lean_dec(v___x_2630_);
v_a_2785_ = lean_ctor_get(v___x_2782_, 0);
v_isSharedCheck_2792_ = !lean_is_exclusive(v___x_2782_);
if (v_isSharedCheck_2792_ == 0)
{
v___x_2787_ = v___x_2782_;
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
else
{
lean_inc(v_a_2785_);
lean_dec(v___x_2782_);
v___x_2787_ = lean_box(0);
v_isShared_2788_ = v_isSharedCheck_2792_;
goto v_resetjp_2786_;
}
v_resetjp_2786_:
{
lean_object* v___x_2790_; 
if (v_isShared_2788_ == 0)
{
v___x_2790_ = v___x_2787_;
goto v_reusejp_2789_;
}
else
{
lean_object* v_reuseFailAlloc_2791_; 
v_reuseFailAlloc_2791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2791_, 0, v_a_2785_);
v___x_2790_ = v_reuseFailAlloc_2791_;
goto v_reusejp_2789_;
}
v_reusejp_2789_:
{
return v___x_2790_;
}
}
}
}
v___jp_2645_:
{
size_t v___x_2647_; size_t v___x_2648_; lean_object* v___x_2649_; 
v___x_2647_ = ((size_t)1ULL);
v___x_2648_ = lean_usize_add(v_i_2632_, v___x_2647_);
v___x_2649_ = lean_array_uset(v_bs_x27_2644_, v_i_2632_, v_a_2646_);
v_i_2632_ = v___x_2648_;
v_bs_2633_ = v___x_2649_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg(lean_object* v_c_2793_, lean_object* v_a_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_){
_start:
{
lean_object* v_resultType_2800_; lean_object* v_discr_2801_; lean_object* v_alts_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2899_; 
v_resultType_2800_ = lean_ctor_get(v_c_2793_, 1);
v_discr_2801_ = lean_ctor_get(v_c_2793_, 2);
v_alts_2802_ = lean_ctor_get(v_c_2793_, 3);
v_isSharedCheck_2899_ = !lean_is_exclusive(v_c_2793_);
if (v_isSharedCheck_2899_ == 0)
{
lean_object* v_unused_2900_; 
v_unused_2900_ = lean_ctor_get(v_c_2793_, 0);
lean_dec(v_unused_2900_);
v___x_2804_ = v_c_2793_;
v_isShared_2805_ = v_isSharedCheck_2899_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_alts_2802_);
lean_inc(v_discr_2801_);
lean_inc(v_resultType_2800_);
lean_dec(v_c_2793_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2899_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
uint8_t v___x_2806_; lean_object* v___x_2807_; 
v___x_2806_ = 0;
v___x_2807_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_2800_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2809_ = lean_box(0);
v___x_2810_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2811_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__1));
v___x_2812_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_2813_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2806_, v___x_2811_, v___x_2810_, v___x_2812_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v_fvarId_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
v_fvarId_2815_ = lean_ctor_get(v_a_2814_, 0);
v___x_2816_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__5));
v___x_2817_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6, &l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__6);
v___x_2818_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__8));
lean_inc(v_fvarId_2815_);
v___x_2819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2819_, 0, v_fvarId_2815_);
v___x_2820_ = lean_unsigned_to_nat(1u);
v___x_2821_ = lean_mk_empty_array_with_capacity(v___x_2820_);
v___x_2822_ = lean_array_push(v___x_2821_, v___x_2819_);
v___x_2823_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2823_, 0, v___x_2818_);
lean_ctor_set(v___x_2823_, 1, v___x_2809_);
lean_ctor_set(v___x_2823_, 2, v___x_2822_);
v___x_2824_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2806_, v___x_2816_, v___x_2817_, v___x_2823_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2824_) == 0)
{
lean_object* v_a_2825_; lean_object* v_fvarId_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v_a_2825_ = lean_ctor_get(v___x_2824_, 0);
lean_inc(v_a_2825_);
lean_dec_ref_known(v___x_2824_, 1);
v_fvarId_2826_ = lean_ctor_get(v_a_2825_, 0);
v___x_2827_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__10));
v___x_2828_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_2829_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_2830_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__12));
v___x_2831_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2831_, 0, v_discr_2801_);
lean_inc(v_fvarId_2826_);
v___x_2832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2832_, 0, v_fvarId_2826_);
v___x_2833_ = lean_unsigned_to_nat(2u);
v___x_2834_ = lean_mk_empty_array_with_capacity(v___x_2833_);
lean_inc_ref(v___x_2831_);
v___x_2835_ = lean_array_push(v___x_2834_, v___x_2831_);
v___x_2836_ = lean_array_push(v___x_2835_, v___x_2832_);
v___x_2837_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2830_);
lean_ctor_set(v___x_2837_, 1, v___x_2809_);
lean_ctor_set(v___x_2837_, 2, v___x_2836_);
v___x_2838_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2806_, v___x_2827_, v___x_2829_, v___x_2837_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2838_) == 0)
{
lean_object* v_a_2839_; size_t v_sz_2840_; size_t v___x_2841_; lean_object* v___x_2842_; 
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
lean_inc(v_a_2839_);
lean_dec_ref_known(v___x_2838_, 1);
v_sz_2840_ = lean_array_size(v_alts_2802_);
v___x_2841_ = ((size_t)0ULL);
v___x_2842_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(v___x_2831_, v_sz_2840_, v___x_2841_, v_alts_2802_, v_a_2794_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
if (lean_obj_tag(v___x_2842_) == 0)
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2858_; 
v_a_2843_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2845_ = v___x_2842_;
v_isShared_2846_ = v_isSharedCheck_2858_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2842_);
v___x_2845_ = lean_box(0);
v_isShared_2846_ = v_isSharedCheck_2858_;
goto v_resetjp_2844_;
}
v_resetjp_2844_:
{
lean_object* v_fvarId_2847_; lean_object* v___x_2849_; 
v_fvarId_2847_ = lean_ctor_get(v_a_2839_, 0);
lean_inc(v_fvarId_2847_);
if (v_isShared_2805_ == 0)
{
lean_ctor_set(v___x_2804_, 3, v_a_2843_);
lean_ctor_set(v___x_2804_, 2, v_fvarId_2847_);
lean_ctor_set(v___x_2804_, 1, v_a_2808_);
lean_ctor_set(v___x_2804_, 0, v___x_2828_);
v___x_2849_ = v___x_2804_;
goto v_reusejp_2848_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2828_);
lean_ctor_set(v_reuseFailAlloc_2857_, 1, v_a_2808_);
lean_ctor_set(v_reuseFailAlloc_2857_, 2, v_fvarId_2847_);
lean_ctor_set(v_reuseFailAlloc_2857_, 3, v_a_2843_);
v___x_2849_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2848_;
}
v_reusejp_2848_:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2855_; 
v___x_2850_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2850_, 0, v___x_2849_);
v___x_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2851_, 0, v_a_2839_);
lean_ctor_set(v___x_2851_, 1, v___x_2850_);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v_a_2825_);
lean_ctor_set(v___x_2852_, 1, v___x_2851_);
v___x_2853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2853_, 0, v_a_2814_);
lean_ctor_set(v___x_2853_, 1, v___x_2852_);
if (v_isShared_2846_ == 0)
{
lean_ctor_set(v___x_2845_, 0, v___x_2853_);
v___x_2855_ = v___x_2845_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2856_; 
v_reuseFailAlloc_2856_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2856_, 0, v___x_2853_);
v___x_2855_ = v_reuseFailAlloc_2856_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
return v___x_2855_;
}
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec(v_a_2839_);
lean_dec(v_a_2825_);
lean_dec(v_a_2814_);
lean_dec(v_a_2808_);
lean_del_object(v___x_2804_);
v_a_2859_ = lean_ctor_get(v___x_2842_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2842_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2842_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2842_);
v___x_2861_ = lean_box(0);
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
v_resetjp_2860_:
{
lean_object* v___x_2864_; 
if (v_isShared_2862_ == 0)
{
v___x_2864_ = v___x_2861_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2865_; 
v_reuseFailAlloc_2865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2865_, 0, v_a_2859_);
v___x_2864_ = v_reuseFailAlloc_2865_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
return v___x_2864_;
}
}
}
}
else
{
lean_object* v_a_2867_; lean_object* v___x_2869_; uint8_t v_isShared_2870_; uint8_t v_isSharedCheck_2874_; 
lean_dec_ref_known(v___x_2831_, 1);
lean_dec(v_a_2825_);
lean_dec(v_a_2814_);
lean_dec(v_a_2808_);
lean_del_object(v___x_2804_);
lean_dec_ref(v_alts_2802_);
v_a_2867_ = lean_ctor_get(v___x_2838_, 0);
v_isSharedCheck_2874_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2874_ == 0)
{
v___x_2869_ = v___x_2838_;
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
else
{
lean_inc(v_a_2867_);
lean_dec(v___x_2838_);
v___x_2869_ = lean_box(0);
v_isShared_2870_ = v_isSharedCheck_2874_;
goto v_resetjp_2868_;
}
v_resetjp_2868_:
{
lean_object* v___x_2872_; 
if (v_isShared_2870_ == 0)
{
v___x_2872_ = v___x_2869_;
goto v_reusejp_2871_;
}
else
{
lean_object* v_reuseFailAlloc_2873_; 
v_reuseFailAlloc_2873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2873_, 0, v_a_2867_);
v___x_2872_ = v_reuseFailAlloc_2873_;
goto v_reusejp_2871_;
}
v_reusejp_2871_:
{
return v___x_2872_;
}
}
}
}
else
{
lean_object* v_a_2875_; lean_object* v___x_2877_; uint8_t v_isShared_2878_; uint8_t v_isSharedCheck_2882_; 
lean_dec(v_a_2814_);
lean_dec(v_a_2808_);
lean_del_object(v___x_2804_);
lean_dec_ref(v_alts_2802_);
lean_dec(v_discr_2801_);
v_a_2875_ = lean_ctor_get(v___x_2824_, 0);
v_isSharedCheck_2882_ = !lean_is_exclusive(v___x_2824_);
if (v_isSharedCheck_2882_ == 0)
{
v___x_2877_ = v___x_2824_;
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
else
{
lean_inc(v_a_2875_);
lean_dec(v___x_2824_);
v___x_2877_ = lean_box(0);
v_isShared_2878_ = v_isSharedCheck_2882_;
goto v_resetjp_2876_;
}
v_resetjp_2876_:
{
lean_object* v___x_2880_; 
if (v_isShared_2878_ == 0)
{
v___x_2880_ = v___x_2877_;
goto v_reusejp_2879_;
}
else
{
lean_object* v_reuseFailAlloc_2881_; 
v_reuseFailAlloc_2881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2881_, 0, v_a_2875_);
v___x_2880_ = v_reuseFailAlloc_2881_;
goto v_reusejp_2879_;
}
v_reusejp_2879_:
{
return v___x_2880_;
}
}
}
}
else
{
lean_object* v_a_2883_; lean_object* v___x_2885_; uint8_t v_isShared_2886_; uint8_t v_isSharedCheck_2890_; 
lean_dec(v_a_2808_);
lean_del_object(v___x_2804_);
lean_dec_ref(v_alts_2802_);
lean_dec(v_discr_2801_);
v_a_2883_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2890_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2890_ == 0)
{
v___x_2885_ = v___x_2813_;
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
else
{
lean_inc(v_a_2883_);
lean_dec(v___x_2813_);
v___x_2885_ = lean_box(0);
v_isShared_2886_ = v_isSharedCheck_2890_;
goto v_resetjp_2884_;
}
v_resetjp_2884_:
{
lean_object* v___x_2888_; 
if (v_isShared_2886_ == 0)
{
v___x_2888_ = v___x_2885_;
goto v_reusejp_2887_;
}
else
{
lean_object* v_reuseFailAlloc_2889_; 
v_reuseFailAlloc_2889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2889_, 0, v_a_2883_);
v___x_2888_ = v_reuseFailAlloc_2889_;
goto v_reusejp_2887_;
}
v_reusejp_2887_:
{
return v___x_2888_;
}
}
}
}
else
{
lean_object* v_a_2891_; lean_object* v___x_2893_; uint8_t v_isShared_2894_; uint8_t v_isSharedCheck_2898_; 
lean_del_object(v___x_2804_);
lean_dec_ref(v_alts_2802_);
lean_dec(v_discr_2801_);
v_a_2891_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2898_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2898_ == 0)
{
v___x_2893_ = v___x_2807_;
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
else
{
lean_inc(v_a_2891_);
lean_dec(v___x_2807_);
v___x_2893_ = lean_box(0);
v_isShared_2894_ = v_isSharedCheck_2898_;
goto v_resetjp_2892_;
}
v_resetjp_2892_:
{
lean_object* v___x_2896_; 
if (v_isShared_2894_ == 0)
{
v___x_2896_ = v___x_2893_;
goto v_reusejp_2895_;
}
else
{
lean_object* v_reuseFailAlloc_2897_; 
v_reuseFailAlloc_2897_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2897_, 0, v_a_2891_);
v___x_2896_ = v_reuseFailAlloc_2897_;
goto v_reusejp_2895_;
}
v_reusejp_2895_:
{
return v___x_2896_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(lean_object* v___x_2910_, size_t v_sz_2911_, size_t v_i_2912_, lean_object* v_bs_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_){
_start:
{
uint8_t v___x_2920_; 
v___x_2920_ = lean_usize_dec_lt(v_i_2912_, v_sz_2911_);
if (v___x_2920_ == 0)
{
lean_object* v___x_2921_; 
lean_dec(v___x_2910_);
v___x_2921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2921_, 0, v_bs_2913_);
return v___x_2921_;
}
else
{
lean_object* v_v_2922_; lean_object* v___x_2923_; lean_object* v_bs_x27_2924_; lean_object* v_a_2926_; 
v_v_2922_ = lean_array_uget(v_bs_2913_, v_i_2912_);
v___x_2923_ = lean_unsigned_to_nat(0u);
v_bs_x27_2924_ = lean_array_uset(v_bs_2913_, v_i_2912_, v___x_2923_);
if (lean_obj_tag(v_v_2922_) == 0)
{
lean_object* v_ctorName_2931_; lean_object* v_params_2932_; lean_object* v_code_2933_; lean_object* v___x_2935_; uint8_t v_isShared_2936_; uint8_t v_isSharedCheck_3020_; 
v_ctorName_2931_ = lean_ctor_get(v_v_2922_, 0);
v_params_2932_ = lean_ctor_get(v_v_2922_, 1);
v_code_2933_ = lean_ctor_get(v_v_2922_, 2);
v_isSharedCheck_3020_ = !lean_is_exclusive(v_v_2922_);
if (v_isSharedCheck_3020_ == 0)
{
v___x_2935_ = v_v_2922_;
v_isShared_2936_ = v_isSharedCheck_3020_;
goto v_resetjp_2934_;
}
else
{
lean_inc(v_code_2933_);
lean_inc(v_params_2932_);
lean_inc(v_ctorName_2931_);
lean_dec(v_v_2922_);
v___x_2935_ = lean_box(0);
v_isShared_2936_ = v_isSharedCheck_3020_;
goto v_resetjp_2934_;
}
v_resetjp_2934_:
{
uint8_t v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; 
v___x_2937_ = 0;
v___x_2938_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3, &l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_casesUIntToMono___redArg___closed__3);
v___x_2939_ = lean_box(0);
v___x_2940_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_2941_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v___x_2937_, v_params_2932_, v___y_2916_);
if (lean_obj_tag(v___x_2941_) == 0)
{
lean_object* v___x_2942_; uint8_t v___x_2943_; 
lean_dec_ref_known(v___x_2941_, 1);
v___x_2942_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__9));
v___x_2943_ = lean_name_eq(v_ctorName_2931_, v___x_2942_);
lean_dec(v_ctorName_2931_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; 
lean_dec_ref(v_params_2932_);
v___x_2944_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2933_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_2944_) == 0)
{
lean_object* v_a_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2949_; 
v_a_2945_ = lean_ctor_get(v___x_2944_, 0);
lean_inc(v_a_2945_);
lean_dec_ref_known(v___x_2944_, 1);
v___x_2946_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__1));
v___x_2947_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
if (v_isShared_2936_ == 0)
{
lean_ctor_set(v___x_2935_, 2, v_a_2945_);
lean_ctor_set(v___x_2935_, 1, v___x_2947_);
lean_ctor_set(v___x_2935_, 0, v___x_2946_);
v___x_2949_ = v___x_2935_;
goto v_reusejp_2948_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v___x_2946_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v___x_2947_);
lean_ctor_set(v_reuseFailAlloc_2950_, 2, v_a_2945_);
v___x_2949_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2948_;
}
v_reusejp_2948_:
{
v_a_2926_ = v___x_2949_;
goto v___jp_2925_;
}
}
else
{
lean_object* v_a_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2958_; 
lean_del_object(v___x_2935_);
lean_dec_ref(v_bs_x27_2924_);
lean_dec(v___x_2910_);
v_a_2951_ = lean_ctor_get(v___x_2944_, 0);
v_isSharedCheck_2958_ = !lean_is_exclusive(v___x_2944_);
if (v_isSharedCheck_2958_ == 0)
{
v___x_2953_ = v___x_2944_;
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_a_2951_);
lean_dec(v___x_2944_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2958_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___x_2956_; 
if (v_isShared_2954_ == 0)
{
v___x_2956_ = v___x_2953_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2957_; 
v_reuseFailAlloc_2957_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2957_, 0, v_a_2951_);
v___x_2956_ = v_reuseFailAlloc_2957_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
return v___x_2956_;
}
}
}
}
else
{
lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2959_ = lean_array_get(v___x_2938_, v_params_2932_, v___x_2923_);
lean_dec_ref(v_params_2932_);
v___x_2960_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__4));
v___x_2961_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_2962_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_2937_, v___x_2960_, v___x_2940_, v___x_2961_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_2962_) == 0)
{
lean_object* v_a_2963_; lean_object* v_fvarId_2964_; lean_object* v_binderName_2965_; lean_object* v_fvarId_2966_; lean_object* v___x_2967_; lean_object* v___x_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v_lctx_2976_; lean_object* v_nextIdx_2977_; lean_object* v___x_2979_; uint8_t v_isShared_2980_; uint8_t v_isSharedCheck_3003_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
v_fvarId_2964_ = lean_ctor_get(v___x_2959_, 0);
lean_inc(v_fvarId_2964_);
v_binderName_2965_ = lean_ctor_get(v___x_2959_, 1);
lean_inc(v_binderName_2965_);
lean_dec(v___x_2959_);
v_fvarId_2966_ = lean_ctor_get(v_a_2963_, 0);
v___x_2967_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__8));
lean_inc(v_fvarId_2966_);
v___x_2968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2968_, 0, v_fvarId_2966_);
v___x_2969_ = lean_unsigned_to_nat(2u);
v___x_2970_ = lean_mk_empty_array_with_capacity(v___x_2969_);
lean_inc(v___x_2910_);
v___x_2971_ = lean_array_push(v___x_2970_, v___x_2910_);
v___x_2972_ = lean_array_push(v___x_2971_, v___x_2968_);
v___x_2973_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2973_, 0, v___x_2967_);
lean_ctor_set(v___x_2973_, 1, v___x_2939_);
lean_ctor_set(v___x_2973_, 2, v___x_2972_);
v___x_2974_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2974_, 0, v_fvarId_2964_);
lean_ctor_set(v___x_2974_, 1, v_binderName_2965_);
lean_ctor_set(v___x_2974_, 2, v___x_2940_);
lean_ctor_set(v___x_2974_, 3, v___x_2973_);
v___x_2975_ = lean_st_ref_take(v___y_2916_);
v_lctx_2976_ = lean_ctor_get(v___x_2975_, 0);
v_nextIdx_2977_ = lean_ctor_get(v___x_2975_, 1);
v_isSharedCheck_3003_ = !lean_is_exclusive(v___x_2975_);
if (v_isSharedCheck_3003_ == 0)
{
v___x_2979_ = v___x_2975_;
v_isShared_2980_ = v_isSharedCheck_3003_;
goto v_resetjp_2978_;
}
else
{
lean_inc(v_nextIdx_2977_);
lean_inc(v_lctx_2976_);
lean_dec(v___x_2975_);
v___x_2979_ = lean_box(0);
v_isShared_2980_ = v_isSharedCheck_3003_;
goto v_resetjp_2978_;
}
v_resetjp_2978_:
{
lean_object* v___x_2981_; lean_object* v___x_2983_; 
lean_inc_ref(v___x_2974_);
v___x_2981_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v___x_2937_, v_lctx_2976_, v___x_2974_);
if (v_isShared_2980_ == 0)
{
lean_ctor_set(v___x_2979_, 0, v___x_2981_);
v___x_2983_ = v___x_2979_;
goto v_reusejp_2982_;
}
else
{
lean_object* v_reuseFailAlloc_3002_; 
v_reuseFailAlloc_3002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3002_, 0, v___x_2981_);
lean_ctor_set(v_reuseFailAlloc_3002_, 1, v_nextIdx_2977_);
v___x_2983_ = v_reuseFailAlloc_3002_;
goto v_reusejp_2982_;
}
v_reusejp_2982_:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; 
v___x_2984_ = lean_st_ref_put(v___y_2916_, v___x_2983_);
v___x_2985_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_2933_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_object* v_a_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___x_2992_; 
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
lean_inc(v_a_2986_);
lean_dec_ref_known(v___x_2985_, 1);
v___x_2987_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__10));
v___x_2988_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__2));
v___x_2989_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2989_, 0, v___x_2974_);
lean_ctor_set(v___x_2989_, 1, v_a_2986_);
v___x_2990_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2990_, 0, v_a_2963_);
lean_ctor_set(v___x_2990_, 1, v___x_2989_);
if (v_isShared_2936_ == 0)
{
lean_ctor_set(v___x_2935_, 2, v___x_2990_);
lean_ctor_set(v___x_2935_, 1, v___x_2988_);
lean_ctor_set(v___x_2935_, 0, v___x_2987_);
v___x_2992_ = v___x_2935_;
goto v_reusejp_2991_;
}
else
{
lean_object* v_reuseFailAlloc_2993_; 
v_reuseFailAlloc_2993_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2993_, 0, v___x_2987_);
lean_ctor_set(v_reuseFailAlloc_2993_, 1, v___x_2988_);
lean_ctor_set(v_reuseFailAlloc_2993_, 2, v___x_2990_);
v___x_2992_ = v_reuseFailAlloc_2993_;
goto v_reusejp_2991_;
}
v_reusejp_2991_:
{
v_a_2926_ = v___x_2992_;
goto v___jp_2925_;
}
}
else
{
lean_object* v_a_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3001_; 
lean_dec_ref_known(v___x_2974_, 4);
lean_dec(v_a_2963_);
lean_del_object(v___x_2935_);
lean_dec_ref(v_bs_x27_2924_);
lean_dec(v___x_2910_);
v_a_2994_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_3001_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_3001_ == 0)
{
v___x_2996_ = v___x_2985_;
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_a_2994_);
lean_dec(v___x_2985_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3001_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v___x_2999_; 
if (v_isShared_2997_ == 0)
{
v___x_2999_ = v___x_2996_;
goto v_reusejp_2998_;
}
else
{
lean_object* v_reuseFailAlloc_3000_; 
v_reuseFailAlloc_3000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3000_, 0, v_a_2994_);
v___x_2999_ = v_reuseFailAlloc_3000_;
goto v_reusejp_2998_;
}
v_reusejp_2998_:
{
return v___x_2999_;
}
}
}
}
}
}
else
{
lean_object* v_a_3004_; lean_object* v___x_3006_; uint8_t v_isShared_3007_; uint8_t v_isSharedCheck_3011_; 
lean_dec(v___x_2959_);
lean_del_object(v___x_2935_);
lean_dec_ref(v_code_2933_);
lean_dec_ref(v_bs_x27_2924_);
lean_dec(v___x_2910_);
v_a_3004_ = lean_ctor_get(v___x_2962_, 0);
v_isSharedCheck_3011_ = !lean_is_exclusive(v___x_2962_);
if (v_isSharedCheck_3011_ == 0)
{
v___x_3006_ = v___x_2962_;
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
else
{
lean_inc(v_a_3004_);
lean_dec(v___x_2962_);
v___x_3006_ = lean_box(0);
v_isShared_3007_ = v_isSharedCheck_3011_;
goto v_resetjp_3005_;
}
v_resetjp_3005_:
{
lean_object* v___x_3009_; 
if (v_isShared_3007_ == 0)
{
v___x_3009_ = v___x_3006_;
goto v_reusejp_3008_;
}
else
{
lean_object* v_reuseFailAlloc_3010_; 
v_reuseFailAlloc_3010_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3010_, 0, v_a_3004_);
v___x_3009_ = v_reuseFailAlloc_3010_;
goto v_reusejp_3008_;
}
v_reusejp_3008_:
{
return v___x_3009_;
}
}
}
}
}
else
{
lean_object* v_a_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3019_; 
lean_del_object(v___x_2935_);
lean_dec_ref(v_code_2933_);
lean_dec_ref(v_params_2932_);
lean_dec(v_ctorName_2931_);
lean_dec_ref(v_bs_x27_2924_);
lean_dec(v___x_2910_);
v_a_3012_ = lean_ctor_get(v___x_2941_, 0);
v_isSharedCheck_3019_ = !lean_is_exclusive(v___x_2941_);
if (v_isSharedCheck_3019_ == 0)
{
v___x_3014_ = v___x_2941_;
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_a_3012_);
lean_dec(v___x_2941_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3019_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v___x_3017_; 
if (v_isShared_3015_ == 0)
{
v___x_3017_ = v___x_3014_;
goto v_reusejp_3016_;
}
else
{
lean_object* v_reuseFailAlloc_3018_; 
v_reuseFailAlloc_3018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3018_, 0, v_a_3012_);
v___x_3017_ = v_reuseFailAlloc_3018_;
goto v_reusejp_3016_;
}
v_reusejp_3016_:
{
return v___x_3017_;
}
}
}
}
}
else
{
lean_object* v_code_3021_; lean_object* v___x_3022_; 
v_code_3021_ = lean_ctor_get(v_v_2922_, 0);
lean_inc_ref(v_code_3021_);
v___x_3022_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3021_, v___y_2914_, v___y_2915_, v___y_2916_, v___y_2917_, v___y_2918_);
if (lean_obj_tag(v___x_3022_) == 0)
{
lean_object* v_a_3023_; lean_object* v___x_3024_; 
v_a_3023_ = lean_ctor_get(v___x_3022_, 0);
lean_inc(v_a_3023_);
lean_dec_ref_known(v___x_3022_, 1);
v___x_3024_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_2922_, v_a_3023_);
v_a_2926_ = v___x_3024_;
goto v___jp_2925_;
}
else
{
lean_object* v_a_3025_; lean_object* v___x_3027_; uint8_t v_isShared_3028_; uint8_t v_isSharedCheck_3032_; 
lean_dec_ref_known(v_v_2922_, 1);
lean_dec_ref(v_bs_x27_2924_);
lean_dec(v___x_2910_);
v_a_3025_ = lean_ctor_get(v___x_3022_, 0);
v_isSharedCheck_3032_ = !lean_is_exclusive(v___x_3022_);
if (v_isSharedCheck_3032_ == 0)
{
v___x_3027_ = v___x_3022_;
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
else
{
lean_inc(v_a_3025_);
lean_dec(v___x_3022_);
v___x_3027_ = lean_box(0);
v_isShared_3028_ = v_isSharedCheck_3032_;
goto v_resetjp_3026_;
}
v_resetjp_3026_:
{
lean_object* v___x_3030_; 
if (v_isShared_3028_ == 0)
{
v___x_3030_ = v___x_3027_;
goto v_reusejp_3029_;
}
else
{
lean_object* v_reuseFailAlloc_3031_; 
v_reuseFailAlloc_3031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3031_, 0, v_a_3025_);
v___x_3030_ = v_reuseFailAlloc_3031_;
goto v_reusejp_3029_;
}
v_reusejp_3029_:
{
return v___x_3030_;
}
}
}
}
v___jp_2925_:
{
size_t v___x_2927_; size_t v___x_2928_; lean_object* v___x_2929_; 
v___x_2927_ = ((size_t)1ULL);
v___x_2928_ = lean_usize_add(v_i_2912_, v___x_2927_);
v___x_2929_ = lean_array_uset(v_bs_x27_2924_, v_i_2912_, v_a_2926_);
v_i_2912_ = v___x_2928_;
v_bs_2913_ = v___x_2929_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg(lean_object* v_c_3033_, lean_object* v_a_3034_, lean_object* v_a_3035_, lean_object* v_a_3036_, lean_object* v_a_3037_, lean_object* v_a_3038_){
_start:
{
lean_object* v_resultType_3040_; lean_object* v_discr_3041_; lean_object* v_alts_3042_; lean_object* v___x_3044_; uint8_t v_isShared_3045_; uint8_t v_isSharedCheck_3119_; 
v_resultType_3040_ = lean_ctor_get(v_c_3033_, 1);
v_discr_3041_ = lean_ctor_get(v_c_3033_, 2);
v_alts_3042_ = lean_ctor_get(v_c_3033_, 3);
v_isSharedCheck_3119_ = !lean_is_exclusive(v_c_3033_);
if (v_isSharedCheck_3119_ == 0)
{
lean_object* v_unused_3120_; 
v_unused_3120_ = lean_ctor_get(v_c_3033_, 0);
lean_dec(v_unused_3120_);
v___x_3044_ = v_c_3033_;
v_isShared_3045_ = v_isSharedCheck_3119_;
goto v_resetjp_3043_;
}
else
{
lean_inc(v_alts_3042_);
lean_inc(v_discr_3041_);
lean_inc(v_resultType_3040_);
lean_dec(v_c_3033_);
v___x_3044_ = lean_box(0);
v_isShared_3045_ = v_isSharedCheck_3119_;
goto v_resetjp_3043_;
}
v_resetjp_3043_:
{
uint8_t v___x_3046_; lean_object* v___x_3047_; 
v___x_3046_ = 0;
v___x_3047_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3040_, v_a_3037_, v_a_3038_);
if (lean_obj_tag(v___x_3047_) == 0)
{
lean_object* v_a_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; 
v_a_3048_ = lean_ctor_get(v___x_3047_, 0);
lean_inc(v_a_3048_);
lean_dec_ref_known(v___x_3047_, 1);
v___x_3049_ = lean_box(0);
v___x_3050_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__1);
v___x_3051_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__2));
v___x_3052_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__15));
v___x_3053_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3046_, v___x_3051_, v___x_3050_, v___x_3052_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_);
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v_fvarId_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
lean_inc(v_a_3054_);
lean_dec_ref_known(v___x_3053_, 1);
v_fvarId_3055_ = lean_ctor_get(v_a_3054_, 0);
v___x_3056_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__4));
v___x_3057_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__6));
v___x_3058_ = lean_obj_once(&l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7, &l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__7);
v___x_3059_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__9));
v___x_3060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3060_, 0, v_discr_3041_);
lean_inc(v_fvarId_3055_);
v___x_3061_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3061_, 0, v_fvarId_3055_);
v___x_3062_ = lean_unsigned_to_nat(2u);
v___x_3063_ = lean_mk_empty_array_with_capacity(v___x_3062_);
lean_inc_ref(v___x_3060_);
v___x_3064_ = lean_array_push(v___x_3063_, v___x_3060_);
v___x_3065_ = lean_array_push(v___x_3064_, v___x_3061_);
v___x_3066_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3059_);
lean_ctor_set(v___x_3066_, 1, v___x_3049_);
lean_ctor_set(v___x_3066_, 2, v___x_3065_);
v___x_3067_ = l_Lean_Compiler_LCNF_mkLetDecl(v___x_3046_, v___x_3056_, v___x_3058_, v___x_3066_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_);
if (lean_obj_tag(v___x_3067_) == 0)
{
lean_object* v_a_3068_; size_t v_sz_3069_; size_t v___x_3070_; lean_object* v___x_3071_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3067_, 1);
v_sz_3069_ = lean_array_size(v_alts_3042_);
v___x_3070_ = ((size_t)0ULL);
v___x_3071_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(v___x_3060_, v_sz_3069_, v___x_3070_, v_alts_3042_, v_a_3034_, v_a_3035_, v_a_3036_, v_a_3037_, v_a_3038_);
if (lean_obj_tag(v___x_3071_) == 0)
{
lean_object* v_a_3072_; lean_object* v___x_3074_; uint8_t v_isShared_3075_; uint8_t v_isSharedCheck_3086_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3074_ = v___x_3071_;
v_isShared_3075_ = v_isSharedCheck_3086_;
goto v_resetjp_3073_;
}
else
{
lean_inc(v_a_3072_);
lean_dec(v___x_3071_);
v___x_3074_ = lean_box(0);
v_isShared_3075_ = v_isSharedCheck_3086_;
goto v_resetjp_3073_;
}
v_resetjp_3073_:
{
lean_object* v_fvarId_3076_; lean_object* v___x_3078_; 
v_fvarId_3076_ = lean_ctor_get(v_a_3068_, 0);
lean_inc(v_fvarId_3076_);
if (v_isShared_3045_ == 0)
{
lean_ctor_set(v___x_3044_, 3, v_a_3072_);
lean_ctor_set(v___x_3044_, 2, v_fvarId_3076_);
lean_ctor_set(v___x_3044_, 1, v_a_3048_);
lean_ctor_set(v___x_3044_, 0, v___x_3057_);
v___x_3078_ = v___x_3044_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v___x_3057_);
lean_ctor_set(v_reuseFailAlloc_3085_, 1, v_a_3048_);
lean_ctor_set(v_reuseFailAlloc_3085_, 2, v_fvarId_3076_);
lean_ctor_set(v_reuseFailAlloc_3085_, 3, v_a_3072_);
v___x_3078_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3083_; 
v___x_3079_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3078_);
v___x_3080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3080_, 0, v_a_3068_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
v___x_3081_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3081_, 0, v_a_3054_);
lean_ctor_set(v___x_3081_, 1, v___x_3080_);
if (v_isShared_3075_ == 0)
{
lean_ctor_set(v___x_3074_, 0, v___x_3081_);
v___x_3083_ = v___x_3074_;
goto v_reusejp_3082_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v___x_3081_);
v___x_3083_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3082_;
}
v_reusejp_3082_:
{
return v___x_3083_;
}
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
lean_dec(v_a_3068_);
lean_dec(v_a_3054_);
lean_dec(v_a_3048_);
lean_del_object(v___x_3044_);
v_a_3087_ = lean_ctor_get(v___x_3071_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3071_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3071_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3071_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_dec_ref_known(v___x_3060_, 1);
lean_dec(v_a_3054_);
lean_dec(v_a_3048_);
lean_del_object(v___x_3044_);
lean_dec_ref(v_alts_3042_);
v_a_3095_ = lean_ctor_get(v___x_3067_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3067_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3067_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3067_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
}
}
}
}
else
{
lean_object* v_a_3103_; lean_object* v___x_3105_; uint8_t v_isShared_3106_; uint8_t v_isSharedCheck_3110_; 
lean_dec(v_a_3048_);
lean_del_object(v___x_3044_);
lean_dec_ref(v_alts_3042_);
lean_dec(v_discr_3041_);
v_a_3103_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3110_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3110_ == 0)
{
v___x_3105_ = v___x_3053_;
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
else
{
lean_inc(v_a_3103_);
lean_dec(v___x_3053_);
v___x_3105_ = lean_box(0);
v_isShared_3106_ = v_isSharedCheck_3110_;
goto v_resetjp_3104_;
}
v_resetjp_3104_:
{
lean_object* v___x_3108_; 
if (v_isShared_3106_ == 0)
{
v___x_3108_ = v___x_3105_;
goto v_reusejp_3107_;
}
else
{
lean_object* v_reuseFailAlloc_3109_; 
v_reuseFailAlloc_3109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3109_, 0, v_a_3103_);
v___x_3108_ = v_reuseFailAlloc_3109_;
goto v_reusejp_3107_;
}
v_reusejp_3107_:
{
return v___x_3108_;
}
}
}
}
else
{
lean_object* v_a_3111_; lean_object* v___x_3113_; uint8_t v_isShared_3114_; uint8_t v_isSharedCheck_3118_; 
lean_del_object(v___x_3044_);
lean_dec_ref(v_alts_3042_);
lean_dec(v_discr_3041_);
v_a_3111_ = lean_ctor_get(v___x_3047_, 0);
v_isSharedCheck_3118_ = !lean_is_exclusive(v___x_3047_);
if (v_isSharedCheck_3118_ == 0)
{
v___x_3113_ = v___x_3047_;
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
else
{
lean_inc(v_a_3111_);
lean_dec(v___x_3047_);
v___x_3113_ = lean_box(0);
v_isShared_3114_ = v_isSharedCheck_3118_;
goto v_resetjp_3112_;
}
v_resetjp_3112_:
{
lean_object* v___x_3116_; 
if (v_isShared_3114_ == 0)
{
v___x_3116_ = v___x_3113_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_a_3111_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
return v___x_3116_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono(lean_object* v_code_3121_, lean_object* v_a_3122_, lean_object* v_a_3123_, lean_object* v_a_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
lean_object* v_decl_3129_; lean_object* v_k_3130_; lean_object* v___y_3131_; lean_object* v___y_3132_; lean_object* v___y_3133_; lean_object* v___y_3134_; lean_object* v___y_3135_; lean_object* v___y_3238_; lean_object* v___y_3239_; lean_object* v___y_3240_; lean_object* v___y_3241_; lean_object* v___y_3242_; 
switch(lean_obj_tag(v_code_3121_))
{
case 0:
{
lean_object* v_decl_3245_; lean_object* v_k_3246_; lean_object* v___y_3248_; lean_object* v___y_3249_; lean_object* v___y_3250_; lean_object* v___y_3251_; lean_object* v___y_3252_; lean_object* v_value_3302_; 
v_decl_3245_ = lean_ctor_get(v_code_3121_, 0);
v_k_3246_ = lean_ctor_get(v_code_3121_, 1);
v_value_3302_ = lean_ctor_get(v_decl_3245_, 3);
lean_inc(v_value_3302_);
if (lean_obj_tag(v_value_3302_) == 3)
{
lean_object* v_declName_3303_; 
v_declName_3303_ = lean_ctor_get(v_value_3302_, 0);
lean_inc(v_declName_3303_);
if (lean_obj_tag(v_declName_3303_) == 1)
{
lean_object* v_pre_3304_; 
v_pre_3304_ = lean_ctor_get(v_declName_3303_, 0);
lean_inc(v_pre_3304_);
if (lean_obj_tag(v_pre_3304_) == 1)
{
lean_object* v_pre_3305_; 
v_pre_3305_ = lean_ctor_get(v_pre_3304_, 0);
if (lean_obj_tag(v_pre_3305_) == 0)
{
lean_object* v_type_3306_; lean_object* v_args_3307_; lean_object* v___x_3309_; uint8_t v_isShared_3310_; uint8_t v_isSharedCheck_3377_; 
v_type_3306_ = lean_ctor_get(v_decl_3245_, 2);
v_args_3307_ = lean_ctor_get(v_value_3302_, 2);
v_isSharedCheck_3377_ = !lean_is_exclusive(v_value_3302_);
if (v_isSharedCheck_3377_ == 0)
{
lean_object* v_unused_3378_; lean_object* v_unused_3379_; 
v_unused_3378_ = lean_ctor_get(v_value_3302_, 1);
lean_dec(v_unused_3378_);
v_unused_3379_ = lean_ctor_get(v_value_3302_, 0);
lean_dec(v_unused_3379_);
v___x_3309_ = v_value_3302_;
v_isShared_3310_ = v_isSharedCheck_3377_;
goto v_resetjp_3308_;
}
else
{
lean_inc(v_args_3307_);
lean_dec(v_value_3302_);
v___x_3309_ = lean_box(0);
v_isShared_3310_ = v_isSharedCheck_3377_;
goto v_resetjp_3308_;
}
v_resetjp_3308_:
{
lean_object* v_str_3311_; lean_object* v_str_3312_; lean_object* v___x_3313_; uint8_t v___x_3314_; 
v_str_3311_ = lean_ctor_get(v_declName_3303_, 1);
lean_inc_ref(v_str_3311_);
lean_dec_ref_known(v_declName_3303_, 2);
v_str_3312_ = lean_ctor_get(v_pre_3304_, 1);
lean_inc_ref(v_str_3312_);
lean_dec_ref_known(v_pre_3304_, 2);
v___x_3313_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__5));
v___x_3314_ = lean_string_dec_eq(v_str_3312_, v___x_3313_);
lean_dec_ref(v_str_3312_);
if (v___x_3314_ == 0)
{
lean_dec_ref(v_str_3311_);
lean_del_object(v___x_3309_);
lean_dec_ref(v_args_3307_);
v___y_3248_ = v_a_3122_;
v___y_3249_ = v_a_3123_;
v___y_3250_ = v_a_3124_;
v___y_3251_ = v_a_3125_;
v___y_3252_ = v_a_3126_;
goto v___jp_3247_;
}
else
{
lean_object* v___x_3315_; uint8_t v___x_3316_; 
v___x_3315_ = ((lean_object*)(l_Lean_Compiler_LCNF_LetValue_toMono___closed__8));
v___x_3316_ = lean_string_dec_eq(v_str_3311_, v___x_3315_);
lean_dec_ref(v_str_3311_);
if (v___x_3316_ == 0)
{
lean_del_object(v___x_3309_);
lean_dec_ref(v_args_3307_);
v___y_3248_ = v_a_3122_;
v___y_3249_ = v_a_3123_;
v___y_3250_ = v_a_3124_;
v___y_3251_ = v_a_3125_;
v___y_3252_ = v_a_3126_;
goto v___jp_3247_;
}
else
{
lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3374_; 
lean_inc_ref(v_type_3306_);
lean_inc_ref(v_k_3246_);
lean_inc_ref(v_decl_3245_);
v_isSharedCheck_3374_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3374_ == 0)
{
lean_object* v_unused_3375_; lean_object* v_unused_3376_; 
v_unused_3375_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3375_);
v_unused_3376_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3376_);
v___x_3318_ = v_code_3121_;
v_isShared_3319_ = v_isSharedCheck_3374_;
goto v_resetjp_3317_;
}
else
{
lean_dec(v_code_3121_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3374_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v___x_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v___x_3320_ = lean_array_get_size(v_args_3307_);
v___x_3321_ = lean_unsigned_to_nat(1u);
v___x_3322_ = lean_nat_dec_eq(v___x_3320_, v___x_3321_);
if (v___x_3322_ == 0)
{
lean_object* v___x_3323_; lean_object* v___x_3324_; 
lean_del_object(v___x_3318_);
lean_del_object(v___x_3309_);
lean_dec_ref(v_args_3307_);
lean_dec_ref(v_type_3306_);
lean_dec_ref(v_k_3246_);
lean_dec_ref(v_decl_3245_);
v___x_3323_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__5, &l_Lean_Compiler_LCNF_Code_toMono___closed__5_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__5);
v___x_3324_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3323_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3324_;
}
else
{
lean_object* v___x_3325_; lean_object* v___x_3326_; uint8_t v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; 
v___x_3325_ = lean_unsigned_to_nat(0u);
v___x_3326_ = lean_array_fget(v_args_3307_, v___x_3325_);
lean_dec_ref(v_args_3307_);
v___x_3327_ = 0;
v___x_3328_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___closed__6));
v___x_3329_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesThunkToMono___redArg___closed__5));
v___x_3330_ = l_Lean_Compiler_LCNF_mkAuxLetDecl(v___x_3327_, v___x_3328_, v___x_3329_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3330_) == 0)
{
lean_object* v_a_3331_; lean_object* v_fvarId_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3341_; 
v_a_3331_ = lean_ctor_get(v___x_3330_, 0);
lean_inc(v_a_3331_);
lean_dec_ref_known(v___x_3330_, 1);
v_fvarId_3332_ = lean_ctor_get(v_a_3331_, 0);
v___x_3333_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__7));
v___x_3334_ = lean_box(0);
lean_inc(v_fvarId_3332_);
v___x_3335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3335_, 0, v_fvarId_3332_);
v___x_3336_ = lean_unsigned_to_nat(2u);
v___x_3337_ = lean_mk_empty_array_with_capacity(v___x_3336_);
v___x_3338_ = lean_array_push(v___x_3337_, v___x_3326_);
v___x_3339_ = lean_array_push(v___x_3338_, v___x_3335_);
if (v_isShared_3310_ == 0)
{
lean_ctor_set(v___x_3309_, 2, v___x_3339_);
lean_ctor_set(v___x_3309_, 1, v___x_3334_);
lean_ctor_set(v___x_3309_, 0, v___x_3333_);
v___x_3341_ = v___x_3309_;
goto v_reusejp_3340_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3333_);
lean_ctor_set(v_reuseFailAlloc_3365_, 1, v___x_3334_);
lean_ctor_set(v_reuseFailAlloc_3365_, 2, v___x_3339_);
v___x_3341_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3340_;
}
v_reusejp_3340_:
{
lean_object* v___x_3342_; 
v___x_3342_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v___x_3327_, v_decl_3245_, v_type_3306_, v___x_3341_, v_a_3124_);
if (lean_obj_tag(v___x_3342_) == 0)
{
lean_object* v_a_3343_; lean_object* v___x_3344_; 
v_a_3343_ = lean_ctor_get(v___x_3342_, 0);
lean_inc(v_a_3343_);
lean_dec_ref_known(v___x_3342_, 1);
v___x_3344_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3246_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v_a_3345_; lean_object* v___x_3347_; uint8_t v_isShared_3348_; uint8_t v_isSharedCheck_3356_; 
v_a_3345_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3356_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3356_ == 0)
{
v___x_3347_ = v___x_3344_;
v_isShared_3348_ = v_isSharedCheck_3356_;
goto v_resetjp_3346_;
}
else
{
lean_inc(v_a_3345_);
lean_dec(v___x_3344_);
v___x_3347_ = lean_box(0);
v_isShared_3348_ = v_isSharedCheck_3356_;
goto v_resetjp_3346_;
}
v_resetjp_3346_:
{
lean_object* v___x_3350_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 1, v_a_3345_);
lean_ctor_set(v___x_3318_, 0, v_a_3343_);
v___x_3350_ = v___x_3318_;
goto v_reusejp_3349_;
}
else
{
lean_object* v_reuseFailAlloc_3355_; 
v_reuseFailAlloc_3355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3355_, 0, v_a_3343_);
lean_ctor_set(v_reuseFailAlloc_3355_, 1, v_a_3345_);
v___x_3350_ = v_reuseFailAlloc_3355_;
goto v_reusejp_3349_;
}
v_reusejp_3349_:
{
lean_object* v___x_3351_; lean_object* v___x_3353_; 
v___x_3351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3351_, 0, v_a_3331_);
lean_ctor_set(v___x_3351_, 1, v___x_3350_);
if (v_isShared_3348_ == 0)
{
lean_ctor_set(v___x_3347_, 0, v___x_3351_);
v___x_3353_ = v___x_3347_;
goto v_reusejp_3352_;
}
else
{
lean_object* v_reuseFailAlloc_3354_; 
v_reuseFailAlloc_3354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3354_, 0, v___x_3351_);
v___x_3353_ = v_reuseFailAlloc_3354_;
goto v_reusejp_3352_;
}
v_reusejp_3352_:
{
return v___x_3353_;
}
}
}
}
else
{
lean_dec(v_a_3343_);
lean_dec(v_a_3331_);
lean_del_object(v___x_3318_);
return v___x_3344_;
}
}
else
{
lean_object* v_a_3357_; lean_object* v___x_3359_; uint8_t v_isShared_3360_; uint8_t v_isSharedCheck_3364_; 
lean_dec(v_a_3331_);
lean_del_object(v___x_3318_);
lean_dec_ref(v_k_3246_);
v_a_3357_ = lean_ctor_get(v___x_3342_, 0);
v_isSharedCheck_3364_ = !lean_is_exclusive(v___x_3342_);
if (v_isSharedCheck_3364_ == 0)
{
v___x_3359_ = v___x_3342_;
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
else
{
lean_inc(v_a_3357_);
lean_dec(v___x_3342_);
v___x_3359_ = lean_box(0);
v_isShared_3360_ = v_isSharedCheck_3364_;
goto v_resetjp_3358_;
}
v_resetjp_3358_:
{
lean_object* v___x_3362_; 
if (v_isShared_3360_ == 0)
{
v___x_3362_ = v___x_3359_;
goto v_reusejp_3361_;
}
else
{
lean_object* v_reuseFailAlloc_3363_; 
v_reuseFailAlloc_3363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3363_, 0, v_a_3357_);
v___x_3362_ = v_reuseFailAlloc_3363_;
goto v_reusejp_3361_;
}
v_reusejp_3361_:
{
return v___x_3362_;
}
}
}
}
}
else
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3373_; 
lean_dec(v___x_3326_);
lean_del_object(v___x_3318_);
lean_del_object(v___x_3309_);
lean_dec_ref(v_type_3306_);
lean_dec_ref(v_k_3246_);
lean_dec_ref(v_decl_3245_);
v_a_3366_ = lean_ctor_get(v___x_3330_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___x_3330_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3368_ = v___x_3330_;
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v___x_3330_);
v___x_3368_ = lean_box(0);
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
v_resetjp_3367_:
{
lean_object* v___x_3371_; 
if (v_isShared_3369_ == 0)
{
v___x_3371_ = v___x_3368_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_a_3366_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
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
lean_dec_ref_known(v_pre_3304_, 2);
lean_dec_ref_known(v_declName_3303_, 2);
lean_dec_ref_known(v_value_3302_, 3);
v___y_3248_ = v_a_3122_;
v___y_3249_ = v_a_3123_;
v___y_3250_ = v_a_3124_;
v___y_3251_ = v_a_3125_;
v___y_3252_ = v_a_3126_;
goto v___jp_3247_;
}
}
else
{
lean_dec_ref_known(v_declName_3303_, 2);
lean_dec(v_pre_3304_);
lean_dec_ref_known(v_value_3302_, 3);
v___y_3248_ = v_a_3122_;
v___y_3249_ = v_a_3123_;
v___y_3250_ = v_a_3124_;
v___y_3251_ = v_a_3125_;
v___y_3252_ = v_a_3126_;
goto v___jp_3247_;
}
}
else
{
lean_dec(v_declName_3303_);
lean_dec_ref_known(v_value_3302_, 3);
v___y_3248_ = v_a_3122_;
v___y_3249_ = v_a_3123_;
v___y_3250_ = v_a_3124_;
v___y_3251_ = v_a_3125_;
v___y_3252_ = v_a_3126_;
goto v___jp_3247_;
}
}
else
{
lean_dec(v_value_3302_);
v___y_3248_ = v_a_3122_;
v___y_3249_ = v_a_3123_;
v___y_3250_ = v_a_3124_;
v___y_3251_ = v_a_3125_;
v___y_3252_ = v_a_3126_;
goto v___jp_3247_;
}
v___jp_3247_:
{
lean_object* v___x_3253_; 
lean_inc_ref(v_decl_3245_);
v___x_3253_ = l_Lean_Compiler_LCNF_LetDecl_toMono(v_decl_3245_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_);
if (lean_obj_tag(v___x_3253_) == 0)
{
lean_object* v_a_3254_; lean_object* v___x_3255_; 
v_a_3254_ = lean_ctor_get(v___x_3253_, 0);
lean_inc(v_a_3254_);
lean_dec_ref_known(v___x_3253_, 1);
lean_inc_ref(v_k_3246_);
v___x_3255_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3246_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_);
if (lean_obj_tag(v___x_3255_) == 0)
{
lean_object* v_a_3256_; lean_object* v___x_3258_; uint8_t v_isShared_3259_; uint8_t v_isSharedCheck_3293_; 
v_a_3256_ = lean_ctor_get(v___x_3255_, 0);
v_isSharedCheck_3293_ = !lean_is_exclusive(v___x_3255_);
if (v_isSharedCheck_3293_ == 0)
{
v___x_3258_ = v___x_3255_;
v_isShared_3259_ = v_isSharedCheck_3293_;
goto v_resetjp_3257_;
}
else
{
lean_inc(v_a_3256_);
lean_dec(v___x_3255_);
v___x_3258_ = lean_box(0);
v_isShared_3259_ = v_isSharedCheck_3293_;
goto v_resetjp_3257_;
}
v_resetjp_3257_:
{
size_t v___x_3260_; size_t v___x_3261_; uint8_t v___x_3262_; 
v___x_3260_ = lean_ptr_addr(v_k_3246_);
v___x_3261_ = lean_ptr_addr(v_a_3256_);
v___x_3262_ = lean_usize_dec_eq(v___x_3260_, v___x_3261_);
if (v___x_3262_ == 0)
{
lean_object* v___x_3264_; uint8_t v_isShared_3265_; uint8_t v_isSharedCheck_3272_; 
v_isSharedCheck_3272_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3272_ == 0)
{
lean_object* v_unused_3273_; lean_object* v_unused_3274_; 
v_unused_3273_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3273_);
v_unused_3274_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3274_);
v___x_3264_ = v_code_3121_;
v_isShared_3265_ = v_isSharedCheck_3272_;
goto v_resetjp_3263_;
}
else
{
lean_dec(v_code_3121_);
v___x_3264_ = lean_box(0);
v_isShared_3265_ = v_isSharedCheck_3272_;
goto v_resetjp_3263_;
}
v_resetjp_3263_:
{
lean_object* v___x_3267_; 
if (v_isShared_3265_ == 0)
{
lean_ctor_set(v___x_3264_, 1, v_a_3256_);
lean_ctor_set(v___x_3264_, 0, v_a_3254_);
v___x_3267_ = v___x_3264_;
goto v_reusejp_3266_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v_a_3254_);
lean_ctor_set(v_reuseFailAlloc_3271_, 1, v_a_3256_);
v___x_3267_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3266_;
}
v_reusejp_3266_:
{
lean_object* v___x_3269_; 
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 0, v___x_3267_);
v___x_3269_ = v___x_3258_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3270_; 
v_reuseFailAlloc_3270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3270_, 0, v___x_3267_);
v___x_3269_ = v_reuseFailAlloc_3270_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
return v___x_3269_;
}
}
}
}
else
{
size_t v___x_3275_; size_t v___x_3276_; uint8_t v___x_3277_; 
v___x_3275_ = lean_ptr_addr(v_decl_3245_);
v___x_3276_ = lean_ptr_addr(v_a_3254_);
v___x_3277_ = lean_usize_dec_eq(v___x_3275_, v___x_3276_);
if (v___x_3277_ == 0)
{
lean_object* v___x_3279_; uint8_t v_isShared_3280_; uint8_t v_isSharedCheck_3287_; 
v_isSharedCheck_3287_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3287_ == 0)
{
lean_object* v_unused_3288_; lean_object* v_unused_3289_; 
v_unused_3288_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3288_);
v_unused_3289_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3289_);
v___x_3279_ = v_code_3121_;
v_isShared_3280_ = v_isSharedCheck_3287_;
goto v_resetjp_3278_;
}
else
{
lean_dec(v_code_3121_);
v___x_3279_ = lean_box(0);
v_isShared_3280_ = v_isSharedCheck_3287_;
goto v_resetjp_3278_;
}
v_resetjp_3278_:
{
lean_object* v___x_3282_; 
if (v_isShared_3280_ == 0)
{
lean_ctor_set(v___x_3279_, 1, v_a_3256_);
lean_ctor_set(v___x_3279_, 0, v_a_3254_);
v___x_3282_ = v___x_3279_;
goto v_reusejp_3281_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3254_);
lean_ctor_set(v_reuseFailAlloc_3286_, 1, v_a_3256_);
v___x_3282_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3281_;
}
v_reusejp_3281_:
{
lean_object* v___x_3284_; 
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 0, v___x_3282_);
v___x_3284_ = v___x_3258_;
goto v_reusejp_3283_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v___x_3282_);
v___x_3284_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3283_;
}
v_reusejp_3283_:
{
return v___x_3284_;
}
}
}
}
else
{
lean_object* v___x_3291_; 
lean_dec(v_a_3256_);
lean_dec(v_a_3254_);
if (v_isShared_3259_ == 0)
{
lean_ctor_set(v___x_3258_, 0, v_code_3121_);
v___x_3291_ = v___x_3258_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_code_3121_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
}
}
else
{
lean_dec(v_a_3254_);
lean_dec_ref_known(v_code_3121_, 2);
return v___x_3255_;
}
}
else
{
lean_object* v_a_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3301_; 
lean_dec_ref_known(v_code_3121_, 2);
v_a_3294_ = lean_ctor_get(v___x_3253_, 0);
v_isSharedCheck_3301_ = !lean_is_exclusive(v___x_3253_);
if (v_isSharedCheck_3301_ == 0)
{
v___x_3296_ = v___x_3253_;
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_a_3294_);
lean_dec(v___x_3253_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3301_;
goto v_resetjp_3295_;
}
v_resetjp_3295_:
{
lean_object* v___x_3299_; 
if (v_isShared_3297_ == 0)
{
v___x_3299_ = v___x_3296_;
goto v_reusejp_3298_;
}
else
{
lean_object* v_reuseFailAlloc_3300_; 
v_reuseFailAlloc_3300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3300_, 0, v_a_3294_);
v___x_3299_ = v_reuseFailAlloc_3300_;
goto v_reusejp_3298_;
}
v_reusejp_3298_:
{
return v___x_3299_;
}
}
}
}
}
case 3:
{
lean_object* v_fvarId_3380_; lean_object* v_args_3381_; size_t v_sz_3382_; size_t v___x_3383_; lean_object* v___x_3384_; 
v_fvarId_3380_ = lean_ctor_get(v_code_3121_, 0);
v_args_3381_ = lean_ctor_get(v_code_3121_, 1);
v_sz_3382_ = lean_array_size(v_args_3381_);
v___x_3383_ = ((size_t)0ULL);
lean_inc_ref(v_args_3381_);
v___x_3384_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_ctorAppToMono_spec__1___redArg(v_sz_3382_, v___x_3383_, v_args_3381_, v_a_3122_);
if (lean_obj_tag(v___x_3384_) == 0)
{
lean_object* v_a_3385_; lean_object* v___x_3387_; uint8_t v_isShared_3388_; uint8_t v_isSharedCheck_3410_; 
v_a_3385_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3410_ == 0)
{
v___x_3387_ = v___x_3384_;
v_isShared_3388_ = v_isSharedCheck_3410_;
goto v_resetjp_3386_;
}
else
{
lean_inc(v_a_3385_);
lean_dec(v___x_3384_);
v___x_3387_ = lean_box(0);
v_isShared_3388_ = v_isSharedCheck_3410_;
goto v_resetjp_3386_;
}
v_resetjp_3386_:
{
uint8_t v___y_3390_; uint8_t v___x_3406_; 
v___x_3406_ = l_Lean_instBEqFVarId_beq(v_fvarId_3380_, v_fvarId_3380_);
if (v___x_3406_ == 0)
{
v___y_3390_ = v___x_3406_;
goto v___jp_3389_;
}
else
{
size_t v___x_3407_; size_t v___x_3408_; uint8_t v___x_3409_; 
v___x_3407_ = lean_ptr_addr(v_args_3381_);
v___x_3408_ = lean_ptr_addr(v_a_3385_);
v___x_3409_ = lean_usize_dec_eq(v___x_3407_, v___x_3408_);
v___y_3390_ = v___x_3409_;
goto v___jp_3389_;
}
v___jp_3389_:
{
if (v___y_3390_ == 0)
{
lean_object* v___x_3392_; uint8_t v_isShared_3393_; uint8_t v_isSharedCheck_3400_; 
lean_inc(v_fvarId_3380_);
v_isSharedCheck_3400_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3400_ == 0)
{
lean_object* v_unused_3401_; lean_object* v_unused_3402_; 
v_unused_3401_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3401_);
v_unused_3402_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3402_);
v___x_3392_ = v_code_3121_;
v_isShared_3393_ = v_isSharedCheck_3400_;
goto v_resetjp_3391_;
}
else
{
lean_dec(v_code_3121_);
v___x_3392_ = lean_box(0);
v_isShared_3393_ = v_isSharedCheck_3400_;
goto v_resetjp_3391_;
}
v_resetjp_3391_:
{
lean_object* v___x_3395_; 
if (v_isShared_3393_ == 0)
{
lean_ctor_set(v___x_3392_, 1, v_a_3385_);
v___x_3395_ = v___x_3392_;
goto v_reusejp_3394_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v_fvarId_3380_);
lean_ctor_set(v_reuseFailAlloc_3399_, 1, v_a_3385_);
v___x_3395_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3394_;
}
v_reusejp_3394_:
{
lean_object* v___x_3397_; 
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v___x_3395_);
v___x_3397_ = v___x_3387_;
goto v_reusejp_3396_;
}
else
{
lean_object* v_reuseFailAlloc_3398_; 
v_reuseFailAlloc_3398_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3398_, 0, v___x_3395_);
v___x_3397_ = v_reuseFailAlloc_3398_;
goto v_reusejp_3396_;
}
v_reusejp_3396_:
{
return v___x_3397_;
}
}
}
}
else
{
lean_object* v___x_3404_; 
lean_dec(v_a_3385_);
if (v_isShared_3388_ == 0)
{
lean_ctor_set(v___x_3387_, 0, v_code_3121_);
v___x_3404_ = v___x_3387_;
goto v_reusejp_3403_;
}
else
{
lean_object* v_reuseFailAlloc_3405_; 
v_reuseFailAlloc_3405_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3405_, 0, v_code_3121_);
v___x_3404_ = v_reuseFailAlloc_3405_;
goto v_reusejp_3403_;
}
v_reusejp_3403_:
{
return v___x_3404_;
}
}
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec_ref_known(v_code_3121_, 2);
v_a_3411_ = lean_ctor_get(v___x_3384_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3384_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3384_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3384_);
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
case 4:
{
lean_object* v_cases_3419_; lean_object* v_typeName_3420_; lean_object* v_resultType_3421_; lean_object* v_discr_3422_; lean_object* v_alts_3423_; lean_object* v___x_3424_; uint8_t v___x_3425_; 
v_cases_3419_ = lean_ctor_get(v_code_3121_, 0);
lean_inc_ref(v_cases_3419_);
v_typeName_3420_ = lean_ctor_get(v_cases_3419_, 0);
v_resultType_3421_ = lean_ctor_get(v_cases_3419_, 1);
v_discr_3422_ = lean_ctor_get(v_cases_3419_, 2);
v_alts_3423_ = lean_ctor_get(v_cases_3419_, 3);
v___x_3424_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesNatToMono___redArg___closed__0));
v___x_3425_ = lean_name_eq(v_typeName_3420_, v___x_3424_);
if (v___x_3425_ == 0)
{
lean_object* v___x_3426_; uint8_t v___x_3427_; 
v___x_3426_ = ((lean_object*)(l_Lean_Compiler_LCNF_casesIntToMono___redArg___closed__3));
v___x_3427_ = lean_name_eq(v_typeName_3420_, v___x_3426_);
if (v___x_3427_ == 0)
{
lean_object* v___x_3428_; uint8_t v___x_3429_; 
v___x_3428_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__9));
v___x_3429_ = lean_name_eq(v_typeName_3420_, v___x_3428_);
if (v___x_3429_ == 0)
{
lean_object* v___x_3430_; uint8_t v___x_3431_; 
v___x_3430_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__11));
v___x_3431_ = lean_name_eq(v_typeName_3420_, v___x_3430_);
if (v___x_3431_ == 0)
{
lean_object* v___x_3432_; uint8_t v___x_3433_; 
v___x_3432_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__13));
v___x_3433_ = lean_name_eq(v_typeName_3420_, v___x_3432_);
if (v___x_3433_ == 0)
{
lean_object* v___x_3434_; uint8_t v___x_3435_; 
v___x_3434_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__15));
v___x_3435_ = lean_name_eq(v_typeName_3420_, v___x_3434_);
if (v___x_3435_ == 0)
{
lean_object* v___x_3436_; uint8_t v___x_3437_; 
v___x_3436_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__16));
v___x_3437_ = lean_name_eq(v_typeName_3420_, v___x_3436_);
if (v___x_3437_ == 0)
{
lean_object* v___x_3438_; uint8_t v___x_3439_; 
v___x_3438_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__17));
v___x_3439_ = lean_name_eq(v_typeName_3420_, v___x_3438_);
if (v___x_3439_ == 0)
{
lean_object* v___x_3440_; uint8_t v___x_3441_; 
v___x_3440_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__18));
v___x_3441_ = lean_name_eq(v_typeName_3420_, v___x_3440_);
if (v___x_3441_ == 0)
{
lean_object* v___x_3442_; uint8_t v___x_3443_; 
v___x_3442_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__19));
v___x_3443_ = lean_name_eq(v_typeName_3420_, v___x_3442_);
if (v___x_3443_ == 0)
{
lean_object* v___x_3444_; uint8_t v___x_3445_; 
v___x_3444_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__20));
v___x_3445_ = lean_name_eq(v_typeName_3420_, v___x_3444_);
if (v___x_3445_ == 0)
{
lean_object* v___x_3446_; uint8_t v___x_3447_; 
v___x_3446_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__21));
v___x_3447_ = lean_name_eq(v_typeName_3420_, v___x_3446_);
if (v___x_3447_ == 0)
{
lean_object* v___x_3448_; uint8_t v___x_3449_; 
v___x_3448_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__22));
v___x_3449_ = lean_name_eq(v_typeName_3420_, v___x_3448_);
if (v___x_3449_ == 0)
{
lean_object* v___x_3450_; uint8_t v___x_3451_; 
v___x_3450_ = ((lean_object*)(l_Lean_Compiler_LCNF_Code_toMono___closed__23));
v___x_3451_ = lean_name_eq(v_typeName_3420_, v___x_3450_);
if (v___x_3451_ == 0)
{
lean_object* v___x_3452_; 
lean_inc(v_typeName_3420_);
v___x_3452_ = l_Lean_Compiler_LCNF_hasTrivialStructure_x3f(v_typeName_3420_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3452_) == 0)
{
lean_object* v_a_3453_; 
v_a_3453_ = lean_ctor_get(v___x_3452_, 0);
lean_inc(v_a_3453_);
lean_dec_ref_known(v___x_3452_, 1);
if (lean_obj_tag(v_a_3453_) == 1)
{
lean_object* v_val_3454_; lean_object* v___x_3455_; 
lean_dec_ref_known(v_code_3121_, 1);
v_val_3454_ = lean_ctor_get(v_a_3453_, 0);
lean_inc(v_val_3454_);
lean_dec_ref_known(v_a_3453_, 1);
v___x_3455_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_val_3454_, v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
lean_dec(v_val_3454_);
return v___x_3455_;
}
else
{
lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3546_; 
lean_inc_ref(v_alts_3423_);
lean_inc(v_discr_3422_);
lean_inc_ref(v_resultType_3421_);
lean_inc(v_typeName_3420_);
lean_dec(v_a_3453_);
v_isSharedCheck_3546_ = !lean_is_exclusive(v_cases_3419_);
if (v_isSharedCheck_3546_ == 0)
{
lean_object* v_unused_3547_; lean_object* v_unused_3548_; lean_object* v_unused_3549_; lean_object* v_unused_3550_; 
v_unused_3547_ = lean_ctor_get(v_cases_3419_, 3);
lean_dec(v_unused_3547_);
v_unused_3548_ = lean_ctor_get(v_cases_3419_, 2);
lean_dec(v_unused_3548_);
v_unused_3549_ = lean_ctor_get(v_cases_3419_, 1);
lean_dec(v_unused_3549_);
v_unused_3550_ = lean_ctor_get(v_cases_3419_, 0);
lean_dec(v_unused_3550_);
v___x_3457_ = v_cases_3419_;
v_isShared_3458_ = v_isSharedCheck_3546_;
goto v_resetjp_3456_;
}
else
{
lean_dec(v_cases_3419_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3546_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3459_; 
lean_inc_ref(v_resultType_3421_);
v___x_3459_ = l_Lean_Compiler_LCNF_toMonoType(v_resultType_3421_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3459_) == 0)
{
lean_object* v_a_3460_; lean_object* v___x_3462_; uint8_t v_isShared_3463_; uint8_t v_isSharedCheck_3537_; 
v_a_3460_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3537_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3537_ == 0)
{
v___x_3462_ = v___x_3459_;
v_isShared_3463_ = v_isSharedCheck_3537_;
goto v_resetjp_3461_;
}
else
{
lean_inc(v_a_3460_);
lean_dec(v___x_3459_);
v___x_3462_ = lean_box(0);
v_isShared_3463_ = v_isSharedCheck_3537_;
goto v_resetjp_3461_;
}
v_resetjp_3461_:
{
lean_object* v___x_3464_; lean_object* v_env_3465_; lean_object* v___x_3492_; 
v___x_3464_ = lean_st_ref_get(v_a_3126_);
v_env_3465_ = lean_ctor_get(v___x_3464_, 0);
lean_inc_ref_n(v_env_3465_, 2);
lean_dec(v___x_3464_);
lean_inc(v_typeName_3420_);
v___x_3492_ = l_Lean_Environment_find_x3f(v_env_3465_, v_typeName_3420_, v___x_3451_);
if (lean_obj_tag(v___x_3492_) == 1)
{
lean_object* v_val_3493_; 
v_val_3493_ = lean_ctor_get(v___x_3492_, 0);
lean_inc(v_val_3493_);
lean_dec_ref_known(v___x_3492_, 1);
if (lean_obj_tag(v_val_3493_) == 5)
{
lean_object* v_val_3494_; lean_object* v___x_3496_; uint8_t v_isShared_3497_; uint8_t v_isSharedCheck_3536_; 
v_val_3494_ = lean_ctor_get(v_val_3493_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v_val_3493_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3496_ = v_val_3493_;
v_isShared_3497_ = v_isSharedCheck_3536_;
goto v_resetjp_3495_;
}
else
{
lean_inc(v_val_3494_);
lean_dec(v_val_3493_);
v___x_3496_ = lean_box(0);
v_isShared_3497_ = v_isSharedCheck_3536_;
goto v_resetjp_3495_;
}
v_resetjp_3495_:
{
lean_object* v_toConstantVal_3498_; lean_object* v_name_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; 
v_toConstantVal_3498_ = lean_ctor_get(v_val_3494_, 0);
lean_inc_ref(v_toConstantVal_3498_);
lean_dec_ref(v_val_3494_);
v_name_3499_ = lean_ctor_get(v_toConstantVal_3498_, 0);
lean_inc(v_name_3499_);
lean_dec_ref(v_toConstantVal_3498_);
v___x_3500_ = l_Lean_mkCasesOnName(v_name_3499_);
lean_inc_ref(v_env_3465_);
v___x_3501_ = l_Lean_Compiler_getImplementedBy_x3f(v_env_3465_, v___x_3500_);
if (lean_obj_tag(v___x_3501_) == 0)
{
if (v___x_3451_ == 0)
{
size_t v_sz_3502_; size_t v___x_3503_; lean_object* v___x_3504_; 
lean_dec_ref(v_env_3465_);
lean_del_object(v___x_3457_);
v_sz_3502_ = lean_array_size(v_alts_3423_);
v___x_3503_ = ((size_t)0ULL);
lean_inc_ref(v_alts_3423_);
v___x_3504_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_sz_3502_, v___x_3503_, v_alts_3423_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3504_) == 0)
{
lean_object* v_a_3505_; lean_object* v___x_3507_; uint8_t v_isShared_3508_; uint8_t v_isSharedCheck_3527_; 
v_a_3505_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3527_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3527_ == 0)
{
v___x_3507_ = v___x_3504_;
v_isShared_3508_ = v_isSharedCheck_3527_;
goto v_resetjp_3506_;
}
else
{
lean_inc(v_a_3505_);
lean_dec(v___x_3504_);
v___x_3507_ = lean_box(0);
v_isShared_3508_ = v_isSharedCheck_3527_;
goto v_resetjp_3506_;
}
v_resetjp_3506_:
{
size_t v___x_3517_; size_t v___x_3518_; uint8_t v___x_3519_; 
v___x_3517_ = lean_ptr_addr(v_alts_3423_);
lean_dec_ref(v_alts_3423_);
v___x_3518_ = lean_ptr_addr(v_a_3505_);
v___x_3519_ = lean_usize_dec_eq(v___x_3517_, v___x_3518_);
if (v___x_3519_ == 0)
{
lean_del_object(v___x_3462_);
lean_dec_ref(v_resultType_3421_);
lean_dec_ref_known(v_code_3121_, 1);
goto v___jp_3509_;
}
else
{
size_t v___x_3520_; size_t v___x_3521_; uint8_t v___x_3522_; 
v___x_3520_ = lean_ptr_addr(v_resultType_3421_);
lean_dec_ref(v_resultType_3421_);
v___x_3521_ = lean_ptr_addr(v_a_3460_);
v___x_3522_ = lean_usize_dec_eq(v___x_3520_, v___x_3521_);
if (v___x_3522_ == 0)
{
lean_del_object(v___x_3462_);
lean_dec_ref_known(v_code_3121_, 1);
goto v___jp_3509_;
}
else
{
uint8_t v___x_3523_; 
v___x_3523_ = l_Lean_instBEqFVarId_beq(v_discr_3422_, v_discr_3422_);
if (v___x_3523_ == 0)
{
lean_del_object(v___x_3462_);
lean_dec_ref_known(v_code_3121_, 1);
goto v___jp_3509_;
}
else
{
lean_object* v___x_3525_; 
lean_del_object(v___x_3507_);
lean_dec(v_a_3505_);
lean_del_object(v___x_3496_);
lean_dec(v_a_3460_);
lean_dec(v_discr_3422_);
lean_dec(v_typeName_3420_);
if (v_isShared_3463_ == 0)
{
lean_ctor_set(v___x_3462_, 0, v_code_3121_);
v___x_3525_ = v___x_3462_;
goto v_reusejp_3524_;
}
else
{
lean_object* v_reuseFailAlloc_3526_; 
v_reuseFailAlloc_3526_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3526_, 0, v_code_3121_);
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
v___jp_3509_:
{
lean_object* v___x_3510_; lean_object* v___x_3512_; 
v___x_3510_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_3510_, 0, v_typeName_3420_);
lean_ctor_set(v___x_3510_, 1, v_a_3460_);
lean_ctor_set(v___x_3510_, 2, v_discr_3422_);
lean_ctor_set(v___x_3510_, 3, v_a_3505_);
if (v_isShared_3497_ == 0)
{
lean_ctor_set_tag(v___x_3496_, 4);
lean_ctor_set(v___x_3496_, 0, v___x_3510_);
v___x_3512_ = v___x_3496_;
goto v_reusejp_3511_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v___x_3510_);
v___x_3512_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3511_;
}
v_reusejp_3511_:
{
lean_object* v___x_3514_; 
if (v_isShared_3508_ == 0)
{
lean_ctor_set(v___x_3507_, 0, v___x_3512_);
v___x_3514_ = v___x_3507_;
goto v_reusejp_3513_;
}
else
{
lean_object* v_reuseFailAlloc_3515_; 
v_reuseFailAlloc_3515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3515_, 0, v___x_3512_);
v___x_3514_ = v_reuseFailAlloc_3515_;
goto v_reusejp_3513_;
}
v_reusejp_3513_:
{
return v___x_3514_;
}
}
}
}
}
else
{
lean_object* v_a_3528_; lean_object* v___x_3530_; uint8_t v_isShared_3531_; uint8_t v_isSharedCheck_3535_; 
lean_del_object(v___x_3496_);
lean_del_object(v___x_3462_);
lean_dec(v_a_3460_);
lean_dec_ref(v_alts_3423_);
lean_dec(v_discr_3422_);
lean_dec_ref(v_resultType_3421_);
lean_dec(v_typeName_3420_);
lean_dec_ref_known(v_code_3121_, 1);
v_a_3528_ = lean_ctor_get(v___x_3504_, 0);
v_isSharedCheck_3535_ = !lean_is_exclusive(v___x_3504_);
if (v_isSharedCheck_3535_ == 0)
{
v___x_3530_ = v___x_3504_;
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
else
{
lean_inc(v_a_3528_);
lean_dec(v___x_3504_);
v___x_3530_ = lean_box(0);
v_isShared_3531_ = v_isSharedCheck_3535_;
goto v_resetjp_3529_;
}
v_resetjp_3529_:
{
lean_object* v___x_3533_; 
if (v_isShared_3531_ == 0)
{
v___x_3533_ = v___x_3530_;
goto v_reusejp_3532_;
}
else
{
lean_object* v_reuseFailAlloc_3534_; 
v_reuseFailAlloc_3534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3534_, 0, v_a_3528_);
v___x_3533_ = v_reuseFailAlloc_3534_;
goto v_reusejp_3532_;
}
v_reusejp_3532_:
{
return v___x_3533_;
}
}
}
}
else
{
lean_del_object(v___x_3496_);
lean_del_object(v___x_3462_);
lean_dec_ref(v_resultType_3421_);
lean_dec_ref_known(v_code_3121_, 1);
goto v___jp_3466_;
}
}
else
{
lean_dec_ref_known(v___x_3501_, 1);
lean_del_object(v___x_3496_);
lean_del_object(v___x_3462_);
lean_dec_ref(v_resultType_3421_);
lean_dec_ref_known(v_code_3121_, 1);
goto v___jp_3466_;
}
}
}
else
{
lean_dec(v_val_3493_);
lean_dec_ref(v_env_3465_);
lean_del_object(v___x_3462_);
lean_dec(v_a_3460_);
lean_del_object(v___x_3457_);
lean_dec_ref(v_alts_3423_);
lean_dec(v_discr_3422_);
lean_dec_ref(v_resultType_3421_);
lean_dec(v_typeName_3420_);
lean_dec_ref_known(v_code_3121_, 1);
v___y_3238_ = v_a_3122_;
v___y_3239_ = v_a_3123_;
v___y_3240_ = v_a_3124_;
v___y_3241_ = v_a_3125_;
v___y_3242_ = v_a_3126_;
goto v___jp_3237_;
}
}
else
{
lean_dec(v___x_3492_);
lean_dec_ref(v_env_3465_);
lean_del_object(v___x_3462_);
lean_dec(v_a_3460_);
lean_del_object(v___x_3457_);
lean_dec_ref(v_alts_3423_);
lean_dec(v_discr_3422_);
lean_dec_ref(v_resultType_3421_);
lean_dec(v_typeName_3420_);
lean_dec_ref_known(v_code_3121_, 1);
v___y_3238_ = v_a_3122_;
v___y_3239_ = v_a_3123_;
v___y_3240_ = v_a_3124_;
v___y_3241_ = v_a_3125_;
v___y_3242_ = v_a_3126_;
goto v___jp_3237_;
}
v___jp_3466_:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; size_t v_sz_3469_; size_t v___x_3470_; lean_object* v___x_3471_; 
v___x_3467_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___closed__4));
v___x_3468_ = l_Lean_Name_append(v_typeName_3420_, v___x_3467_);
v_sz_3469_ = lean_array_size(v_alts_3423_);
v___x_3470_ = ((size_t)0ULL);
v___x_3471_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v_env_3465_, v___x_3451_, v_sz_3469_, v___x_3470_, v_alts_3423_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3483_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3474_ = v___x_3471_;
v_isShared_3475_ = v_isSharedCheck_3483_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3471_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3483_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
lean_object* v___x_3477_; 
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 3, v_a_3472_);
lean_ctor_set(v___x_3457_, 1, v_a_3460_);
lean_ctor_set(v___x_3457_, 0, v___x_3468_);
v___x_3477_ = v___x_3457_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v___x_3468_);
lean_ctor_set(v_reuseFailAlloc_3482_, 1, v_a_3460_);
lean_ctor_set(v_reuseFailAlloc_3482_, 2, v_discr_3422_);
lean_ctor_set(v_reuseFailAlloc_3482_, 3, v_a_3472_);
v___x_3477_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
lean_object* v___x_3478_; lean_object* v___x_3480_; 
v___x_3478_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3478_, 0, v___x_3477_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3478_);
v___x_3480_ = v___x_3474_;
goto v_reusejp_3479_;
}
else
{
lean_object* v_reuseFailAlloc_3481_; 
v_reuseFailAlloc_3481_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3481_, 0, v___x_3478_);
v___x_3480_ = v_reuseFailAlloc_3481_;
goto v_reusejp_3479_;
}
v_reusejp_3479_:
{
return v___x_3480_;
}
}
}
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3491_; 
lean_dec(v___x_3468_);
lean_dec(v_a_3460_);
lean_del_object(v___x_3457_);
lean_dec(v_discr_3422_);
v_a_3484_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3486_ = v___x_3471_;
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3471_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
}
}
else
{
lean_object* v_a_3538_; lean_object* v___x_3540_; uint8_t v_isShared_3541_; uint8_t v_isSharedCheck_3545_; 
lean_del_object(v___x_3457_);
lean_dec_ref(v_alts_3423_);
lean_dec(v_discr_3422_);
lean_dec_ref(v_resultType_3421_);
lean_dec(v_typeName_3420_);
lean_dec_ref_known(v_code_3121_, 1);
v_a_3538_ = lean_ctor_get(v___x_3459_, 0);
v_isSharedCheck_3545_ = !lean_is_exclusive(v___x_3459_);
if (v_isSharedCheck_3545_ == 0)
{
v___x_3540_ = v___x_3459_;
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
else
{
lean_inc(v_a_3538_);
lean_dec(v___x_3459_);
v___x_3540_ = lean_box(0);
v_isShared_3541_ = v_isSharedCheck_3545_;
goto v_resetjp_3539_;
}
v_resetjp_3539_:
{
lean_object* v___x_3543_; 
if (v_isShared_3541_ == 0)
{
v___x_3543_ = v___x_3540_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3544_; 
v_reuseFailAlloc_3544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3544_, 0, v_a_3538_);
v___x_3543_ = v_reuseFailAlloc_3544_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
return v___x_3543_;
}
}
}
}
}
}
else
{
lean_object* v_a_3551_; lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3558_; 
lean_dec_ref(v_cases_3419_);
lean_dec_ref_known(v_code_3121_, 1);
v_a_3551_ = lean_ctor_get(v___x_3452_, 0);
v_isSharedCheck_3558_ = !lean_is_exclusive(v___x_3452_);
if (v_isSharedCheck_3558_ == 0)
{
v___x_3553_ = v___x_3452_;
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
else
{
lean_inc(v_a_3551_);
lean_dec(v___x_3452_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3558_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3556_; 
if (v_isShared_3554_ == 0)
{
v___x_3556_ = v___x_3553_;
goto v_reusejp_3555_;
}
else
{
lean_object* v_reuseFailAlloc_3557_; 
v_reuseFailAlloc_3557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3557_, 0, v_a_3551_);
v___x_3556_ = v_reuseFailAlloc_3557_;
goto v_reusejp_3555_;
}
v_reusejp_3555_:
{
return v___x_3556_;
}
}
}
}
else
{
lean_object* v___x_3559_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3559_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3559_;
}
}
else
{
lean_object* v___x_3560_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3560_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
lean_dec_ref(v_cases_3419_);
return v___x_3560_;
}
}
else
{
lean_object* v___x_3561_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3561_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3561_;
}
}
else
{
lean_object* v___x_3562_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3562_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3562_;
}
}
else
{
lean_object* v___x_3563_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3563_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3563_;
}
}
else
{
lean_object* v___x_3564_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3564_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3564_;
}
}
else
{
lean_object* v___x_3565_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3565_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3565_;
}
}
else
{
lean_object* v___x_3566_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3566_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3566_;
}
}
else
{
lean_object* v___x_3567_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3567_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3419_, v___x_3434_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3567_;
}
}
else
{
lean_object* v___x_3568_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3568_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3419_, v___x_3432_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3568_;
}
}
else
{
lean_object* v___x_3569_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3569_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3419_, v___x_3430_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3569_;
}
}
else
{
lean_object* v___x_3570_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3570_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_cases_3419_, v___x_3428_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3570_;
}
}
else
{
lean_object* v___x_3571_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3571_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3571_;
}
}
else
{
lean_object* v___x_3572_; 
lean_dec_ref_known(v_code_3121_, 1);
v___x_3572_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_cases_3419_, v_a_3122_, v_a_3123_, v_a_3124_, v_a_3125_, v_a_3126_);
return v___x_3572_;
}
}
case 5:
{
lean_object* v___x_3573_; 
v___x_3573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3573_, 0, v_code_3121_);
return v___x_3573_;
}
case 6:
{
lean_object* v_type_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3598_; 
v_type_3574_ = lean_ctor_get(v_code_3121_, 0);
v_isSharedCheck_3598_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3598_ == 0)
{
v___x_3576_ = v_code_3121_;
v_isShared_3577_ = v_isSharedCheck_3598_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_type_3574_);
lean_dec(v_code_3121_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3598_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; 
v___x_3578_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3574_, v_a_3125_, v_a_3126_);
if (lean_obj_tag(v___x_3578_) == 0)
{
lean_object* v_a_3579_; lean_object* v___x_3581_; uint8_t v_isShared_3582_; uint8_t v_isSharedCheck_3589_; 
v_a_3579_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3589_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3589_ == 0)
{
v___x_3581_ = v___x_3578_;
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
else
{
lean_inc(v_a_3579_);
lean_dec(v___x_3578_);
v___x_3581_ = lean_box(0);
v_isShared_3582_ = v_isSharedCheck_3589_;
goto v_resetjp_3580_;
}
v_resetjp_3580_:
{
lean_object* v___x_3584_; 
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v_a_3579_);
v___x_3584_ = v___x_3576_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v_a_3579_);
v___x_3584_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
lean_object* v___x_3586_; 
if (v_isShared_3582_ == 0)
{
lean_ctor_set(v___x_3581_, 0, v___x_3584_);
v___x_3586_ = v___x_3581_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3587_; 
v_reuseFailAlloc_3587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3587_, 0, v___x_3584_);
v___x_3586_ = v_reuseFailAlloc_3587_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
return v___x_3586_;
}
}
}
}
else
{
lean_object* v_a_3590_; lean_object* v___x_3592_; uint8_t v_isShared_3593_; uint8_t v_isSharedCheck_3597_; 
lean_del_object(v___x_3576_);
v_a_3590_ = lean_ctor_get(v___x_3578_, 0);
v_isSharedCheck_3597_ = !lean_is_exclusive(v___x_3578_);
if (v_isSharedCheck_3597_ == 0)
{
v___x_3592_ = v___x_3578_;
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
else
{
lean_inc(v_a_3590_);
lean_dec(v___x_3578_);
v___x_3592_ = lean_box(0);
v_isShared_3593_ = v_isSharedCheck_3597_;
goto v_resetjp_3591_;
}
v_resetjp_3591_:
{
lean_object* v___x_3595_; 
if (v_isShared_3593_ == 0)
{
v___x_3595_ = v___x_3592_;
goto v_reusejp_3594_;
}
else
{
lean_object* v_reuseFailAlloc_3596_; 
v_reuseFailAlloc_3596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3596_, 0, v_a_3590_);
v___x_3595_ = v_reuseFailAlloc_3596_;
goto v_reusejp_3594_;
}
v_reusejp_3594_:
{
return v___x_3595_;
}
}
}
}
}
default: 
{
lean_object* v_decl_3599_; lean_object* v_k_3600_; 
v_decl_3599_ = lean_ctor_get(v_code_3121_, 0);
v_k_3600_ = lean_ctor_get(v_code_3121_, 1);
lean_inc_ref(v_k_3600_);
lean_inc_ref(v_decl_3599_);
v_decl_3129_ = v_decl_3599_;
v_k_3130_ = v_k_3600_;
v___y_3131_ = v_a_3122_;
v___y_3132_ = v_a_3123_;
v___y_3133_ = v_a_3124_;
v___y_3134_ = v_a_3125_;
v___y_3135_ = v_a_3126_;
goto v___jp_3128_;
}
}
v___jp_3128_:
{
lean_object* v___x_3136_; 
v___x_3136_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3129_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
if (lean_obj_tag(v___x_3136_) == 0)
{
lean_object* v_a_3137_; lean_object* v___x_3138_; 
v_a_3137_ = lean_ctor_get(v___x_3136_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3136_, 1);
v___x_3138_ = l_Lean_Compiler_LCNF_Code_toMono(v_k_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
if (lean_obj_tag(v___x_3138_) == 0)
{
switch(lean_obj_tag(v_code_3121_))
{
case 1:
{
lean_object* v_a_3139_; lean_object* v___x_3141_; uint8_t v_isShared_3142_; uint8_t v_isSharedCheck_3178_; 
v_a_3139_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3141_ = v___x_3138_;
v_isShared_3142_ = v_isSharedCheck_3178_;
goto v_resetjp_3140_;
}
else
{
lean_inc(v_a_3139_);
lean_dec(v___x_3138_);
v___x_3141_ = lean_box(0);
v_isShared_3142_ = v_isSharedCheck_3178_;
goto v_resetjp_3140_;
}
v_resetjp_3140_:
{
lean_object* v_decl_3143_; lean_object* v_k_3144_; size_t v___x_3145_; size_t v___x_3146_; uint8_t v___x_3147_; 
v_decl_3143_ = lean_ctor_get(v_code_3121_, 0);
v_k_3144_ = lean_ctor_get(v_code_3121_, 1);
v___x_3145_ = lean_ptr_addr(v_k_3144_);
v___x_3146_ = lean_ptr_addr(v_a_3139_);
v___x_3147_ = lean_usize_dec_eq(v___x_3145_, v___x_3146_);
if (v___x_3147_ == 0)
{
lean_object* v___x_3149_; uint8_t v_isShared_3150_; uint8_t v_isSharedCheck_3157_; 
v_isSharedCheck_3157_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3157_ == 0)
{
lean_object* v_unused_3158_; lean_object* v_unused_3159_; 
v_unused_3158_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3158_);
v_unused_3159_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3159_);
v___x_3149_ = v_code_3121_;
v_isShared_3150_ = v_isSharedCheck_3157_;
goto v_resetjp_3148_;
}
else
{
lean_dec(v_code_3121_);
v___x_3149_ = lean_box(0);
v_isShared_3150_ = v_isSharedCheck_3157_;
goto v_resetjp_3148_;
}
v_resetjp_3148_:
{
lean_object* v___x_3152_; 
if (v_isShared_3150_ == 0)
{
lean_ctor_set(v___x_3149_, 1, v_a_3139_);
lean_ctor_set(v___x_3149_, 0, v_a_3137_);
v___x_3152_ = v___x_3149_;
goto v_reusejp_3151_;
}
else
{
lean_object* v_reuseFailAlloc_3156_; 
v_reuseFailAlloc_3156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3156_, 0, v_a_3137_);
lean_ctor_set(v_reuseFailAlloc_3156_, 1, v_a_3139_);
v___x_3152_ = v_reuseFailAlloc_3156_;
goto v_reusejp_3151_;
}
v_reusejp_3151_:
{
lean_object* v___x_3154_; 
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3152_);
v___x_3154_ = v___x_3141_;
goto v_reusejp_3153_;
}
else
{
lean_object* v_reuseFailAlloc_3155_; 
v_reuseFailAlloc_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3155_, 0, v___x_3152_);
v___x_3154_ = v_reuseFailAlloc_3155_;
goto v_reusejp_3153_;
}
v_reusejp_3153_:
{
return v___x_3154_;
}
}
}
}
else
{
size_t v___x_3160_; size_t v___x_3161_; uint8_t v___x_3162_; 
v___x_3160_ = lean_ptr_addr(v_decl_3143_);
v___x_3161_ = lean_ptr_addr(v_a_3137_);
v___x_3162_ = lean_usize_dec_eq(v___x_3160_, v___x_3161_);
if (v___x_3162_ == 0)
{
lean_object* v___x_3164_; uint8_t v_isShared_3165_; uint8_t v_isSharedCheck_3172_; 
v_isSharedCheck_3172_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3172_ == 0)
{
lean_object* v_unused_3173_; lean_object* v_unused_3174_; 
v_unused_3173_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3173_);
v_unused_3174_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3174_);
v___x_3164_ = v_code_3121_;
v_isShared_3165_ = v_isSharedCheck_3172_;
goto v_resetjp_3163_;
}
else
{
lean_dec(v_code_3121_);
v___x_3164_ = lean_box(0);
v_isShared_3165_ = v_isSharedCheck_3172_;
goto v_resetjp_3163_;
}
v_resetjp_3163_:
{
lean_object* v___x_3167_; 
if (v_isShared_3165_ == 0)
{
lean_ctor_set(v___x_3164_, 1, v_a_3139_);
lean_ctor_set(v___x_3164_, 0, v_a_3137_);
v___x_3167_ = v___x_3164_;
goto v_reusejp_3166_;
}
else
{
lean_object* v_reuseFailAlloc_3171_; 
v_reuseFailAlloc_3171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3171_, 0, v_a_3137_);
lean_ctor_set(v_reuseFailAlloc_3171_, 1, v_a_3139_);
v___x_3167_ = v_reuseFailAlloc_3171_;
goto v_reusejp_3166_;
}
v_reusejp_3166_:
{
lean_object* v___x_3169_; 
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v___x_3167_);
v___x_3169_ = v___x_3141_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3170_; 
v_reuseFailAlloc_3170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3170_, 0, v___x_3167_);
v___x_3169_ = v_reuseFailAlloc_3170_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
return v___x_3169_;
}
}
}
}
else
{
lean_object* v___x_3176_; 
lean_dec(v_a_3139_);
lean_dec(v_a_3137_);
if (v_isShared_3142_ == 0)
{
lean_ctor_set(v___x_3141_, 0, v_code_3121_);
v___x_3176_ = v___x_3141_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v_code_3121_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
}
}
}
case 2:
{
lean_object* v_a_3179_; lean_object* v___x_3181_; uint8_t v_isShared_3182_; uint8_t v_isSharedCheck_3218_; 
v_a_3179_ = lean_ctor_get(v___x_3138_, 0);
v_isSharedCheck_3218_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3218_ == 0)
{
v___x_3181_ = v___x_3138_;
v_isShared_3182_ = v_isSharedCheck_3218_;
goto v_resetjp_3180_;
}
else
{
lean_inc(v_a_3179_);
lean_dec(v___x_3138_);
v___x_3181_ = lean_box(0);
v_isShared_3182_ = v_isSharedCheck_3218_;
goto v_resetjp_3180_;
}
v_resetjp_3180_:
{
lean_object* v_decl_3183_; lean_object* v_k_3184_; size_t v___x_3185_; size_t v___x_3186_; uint8_t v___x_3187_; 
v_decl_3183_ = lean_ctor_get(v_code_3121_, 0);
v_k_3184_ = lean_ctor_get(v_code_3121_, 1);
v___x_3185_ = lean_ptr_addr(v_k_3184_);
v___x_3186_ = lean_ptr_addr(v_a_3179_);
v___x_3187_ = lean_usize_dec_eq(v___x_3185_, v___x_3186_);
if (v___x_3187_ == 0)
{
lean_object* v___x_3189_; uint8_t v_isShared_3190_; uint8_t v_isSharedCheck_3197_; 
v_isSharedCheck_3197_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3197_ == 0)
{
lean_object* v_unused_3198_; lean_object* v_unused_3199_; 
v_unused_3198_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3198_);
v_unused_3199_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3199_);
v___x_3189_ = v_code_3121_;
v_isShared_3190_ = v_isSharedCheck_3197_;
goto v_resetjp_3188_;
}
else
{
lean_dec(v_code_3121_);
v___x_3189_ = lean_box(0);
v_isShared_3190_ = v_isSharedCheck_3197_;
goto v_resetjp_3188_;
}
v_resetjp_3188_:
{
lean_object* v___x_3192_; 
if (v_isShared_3190_ == 0)
{
lean_ctor_set(v___x_3189_, 1, v_a_3179_);
lean_ctor_set(v___x_3189_, 0, v_a_3137_);
v___x_3192_ = v___x_3189_;
goto v_reusejp_3191_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_a_3137_);
lean_ctor_set(v_reuseFailAlloc_3196_, 1, v_a_3179_);
v___x_3192_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3191_;
}
v_reusejp_3191_:
{
lean_object* v___x_3194_; 
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 0, v___x_3192_);
v___x_3194_ = v___x_3181_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
}
else
{
size_t v___x_3200_; size_t v___x_3201_; uint8_t v___x_3202_; 
v___x_3200_ = lean_ptr_addr(v_decl_3183_);
v___x_3201_ = lean_ptr_addr(v_a_3137_);
v___x_3202_ = lean_usize_dec_eq(v___x_3200_, v___x_3201_);
if (v___x_3202_ == 0)
{
lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3212_; 
v_isSharedCheck_3212_ = !lean_is_exclusive(v_code_3121_);
if (v_isSharedCheck_3212_ == 0)
{
lean_object* v_unused_3213_; lean_object* v_unused_3214_; 
v_unused_3213_ = lean_ctor_get(v_code_3121_, 1);
lean_dec(v_unused_3213_);
v_unused_3214_ = lean_ctor_get(v_code_3121_, 0);
lean_dec(v_unused_3214_);
v___x_3204_ = v_code_3121_;
v_isShared_3205_ = v_isSharedCheck_3212_;
goto v_resetjp_3203_;
}
else
{
lean_dec(v_code_3121_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3212_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3205_ == 0)
{
lean_ctor_set(v___x_3204_, 1, v_a_3179_);
lean_ctor_set(v___x_3204_, 0, v_a_3137_);
v___x_3207_ = v___x_3204_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3211_; 
v_reuseFailAlloc_3211_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3211_, 0, v_a_3137_);
lean_ctor_set(v_reuseFailAlloc_3211_, 1, v_a_3179_);
v___x_3207_ = v_reuseFailAlloc_3211_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
lean_object* v___x_3209_; 
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 0, v___x_3207_);
v___x_3209_ = v___x_3181_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3207_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
else
{
lean_object* v___x_3216_; 
lean_dec(v_a_3179_);
lean_dec(v_a_3137_);
if (v_isShared_3182_ == 0)
{
lean_ctor_set(v___x_3181_, 0, v_code_3121_);
v___x_3216_ = v___x_3181_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3217_; 
v_reuseFailAlloc_3217_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3217_, 0, v_code_3121_);
v___x_3216_ = v_reuseFailAlloc_3217_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
return v___x_3216_;
}
}
}
}
}
default: 
{
lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3227_; 
lean_dec(v_a_3137_);
lean_dec_ref(v_code_3121_);
v_isSharedCheck_3227_ = !lean_is_exclusive(v___x_3138_);
if (v_isSharedCheck_3227_ == 0)
{
lean_object* v_unused_3228_; 
v_unused_3228_ = lean_ctor_get(v___x_3138_, 0);
lean_dec(v_unused_3228_);
v___x_3220_ = v___x_3138_;
v_isShared_3221_ = v_isSharedCheck_3227_;
goto v_resetjp_3219_;
}
else
{
lean_dec(v___x_3138_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3227_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3225_; 
v___x_3222_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__2, &l_Lean_Compiler_LCNF_Code_toMono___closed__2_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__2);
v___x_3223_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__2(v___x_3222_);
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 0, v___x_3223_);
v___x_3225_ = v___x_3220_;
goto v_reusejp_3224_;
}
else
{
lean_object* v_reuseFailAlloc_3226_; 
v_reuseFailAlloc_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3226_, 0, v___x_3223_);
v___x_3225_ = v_reuseFailAlloc_3226_;
goto v_reusejp_3224_;
}
v_reusejp_3224_:
{
return v___x_3225_;
}
}
}
}
}
else
{
lean_dec(v_a_3137_);
lean_dec_ref(v_code_3121_);
return v___x_3138_;
}
}
else
{
lean_object* v_a_3229_; lean_object* v___x_3231_; uint8_t v_isShared_3232_; uint8_t v_isSharedCheck_3236_; 
lean_dec_ref(v_k_3130_);
lean_dec_ref(v_code_3121_);
v_a_3229_ = lean_ctor_get(v___x_3136_, 0);
v_isSharedCheck_3236_ = !lean_is_exclusive(v___x_3136_);
if (v_isSharedCheck_3236_ == 0)
{
v___x_3231_ = v___x_3136_;
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
else
{
lean_inc(v_a_3229_);
lean_dec(v___x_3136_);
v___x_3231_ = lean_box(0);
v_isShared_3232_ = v_isSharedCheck_3236_;
goto v_resetjp_3230_;
}
v_resetjp_3230_:
{
lean_object* v___x_3234_; 
if (v_isShared_3232_ == 0)
{
v___x_3234_ = v___x_3231_;
goto v_reusejp_3233_;
}
else
{
lean_object* v_reuseFailAlloc_3235_; 
v_reuseFailAlloc_3235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3235_, 0, v_a_3229_);
v___x_3234_ = v_reuseFailAlloc_3235_;
goto v_reusejp_3233_;
}
v_reusejp_3233_:
{
return v___x_3234_;
}
}
}
}
v___jp_3237_:
{
lean_object* v___x_3243_; lean_object* v___x_3244_; 
v___x_3243_ = lean_obj_once(&l_Lean_Compiler_LCNF_Code_toMono___closed__4, &l_Lean_Compiler_LCNF_Code_toMono___closed__4_once, _init_l_Lean_Compiler_LCNF_Code_toMono___closed__4);
v___x_3244_ = l_panic___at___00Lean_Compiler_LCNF_Code_toMono_spec__3(v___x_3243_, v___y_3238_, v___y_3239_, v___y_3240_, v___y_3241_, v___y_3242_);
return v___x_3244_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono(lean_object* v_decl_3601_, lean_object* v_a_3602_, lean_object* v_a_3603_, lean_object* v_a_3604_, lean_object* v_a_3605_, lean_object* v_a_3606_){
_start:
{
lean_object* v_params_3608_; lean_object* v_type_3609_; lean_object* v_value_3610_; uint8_t v___x_3611_; lean_object* v___x_3612_; 
v_params_3608_ = lean_ctor_get(v_decl_3601_, 2);
v_type_3609_ = lean_ctor_get(v_decl_3601_, 3);
v_value_3610_ = lean_ctor_get(v_decl_3601_, 4);
v___x_3611_ = 0;
lean_inc_ref(v_type_3609_);
v___x_3612_ = l_Lean_Compiler_LCNF_toMonoType(v_type_3609_, v_a_3605_, v_a_3606_);
if (lean_obj_tag(v___x_3612_) == 0)
{
lean_object* v_a_3613_; size_t v_sz_3614_; size_t v___x_3615_; lean_object* v___x_3616_; 
v_a_3613_ = lean_ctor_get(v___x_3612_, 0);
lean_inc(v_a_3613_);
lean_dec_ref_known(v___x_3612_, 1);
v_sz_3614_ = lean_array_size(v_params_3608_);
v___x_3615_ = ((size_t)0ULL);
lean_inc_ref(v_params_3608_);
v___x_3616_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_3614_, v___x_3615_, v_params_3608_, v_a_3602_, v_a_3604_, v_a_3605_, v_a_3606_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; lean_object* v___x_3618_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3616_, 1);
lean_inc_ref(v_value_3610_);
v___x_3618_ = l_Lean_Compiler_LCNF_Code_toMono(v_value_3610_, v_a_3602_, v_a_3603_, v_a_3604_, v_a_3605_, v_a_3606_);
if (lean_obj_tag(v___x_3618_) == 0)
{
lean_object* v_a_3619_; lean_object* v___x_3620_; 
v_a_3619_ = lean_ctor_get(v___x_3618_, 0);
lean_inc(v_a_3619_);
lean_dec_ref_known(v___x_3618_, 1);
v___x_3620_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_3611_, v_decl_3601_, v_a_3613_, v_a_3617_, v_a_3619_, v_a_3604_);
return v___x_3620_;
}
else
{
lean_object* v_a_3621_; lean_object* v___x_3623_; uint8_t v_isShared_3624_; uint8_t v_isSharedCheck_3628_; 
lean_dec(v_a_3617_);
lean_dec(v_a_3613_);
lean_dec_ref(v_decl_3601_);
v_a_3621_ = lean_ctor_get(v___x_3618_, 0);
v_isSharedCheck_3628_ = !lean_is_exclusive(v___x_3618_);
if (v_isSharedCheck_3628_ == 0)
{
v___x_3623_ = v___x_3618_;
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
else
{
lean_inc(v_a_3621_);
lean_dec(v___x_3618_);
v___x_3623_ = lean_box(0);
v_isShared_3624_ = v_isSharedCheck_3628_;
goto v_resetjp_3622_;
}
v_resetjp_3622_:
{
lean_object* v___x_3626_; 
if (v_isShared_3624_ == 0)
{
v___x_3626_ = v___x_3623_;
goto v_reusejp_3625_;
}
else
{
lean_object* v_reuseFailAlloc_3627_; 
v_reuseFailAlloc_3627_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3627_, 0, v_a_3621_);
v___x_3626_ = v_reuseFailAlloc_3627_;
goto v_reusejp_3625_;
}
v_reusejp_3625_:
{
return v___x_3626_;
}
}
}
}
else
{
lean_object* v_a_3629_; lean_object* v___x_3631_; uint8_t v_isShared_3632_; uint8_t v_isSharedCheck_3636_; 
lean_dec(v_a_3613_);
lean_dec_ref(v_decl_3601_);
v_a_3629_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3636_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3636_ == 0)
{
v___x_3631_ = v___x_3616_;
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
else
{
lean_inc(v_a_3629_);
lean_dec(v___x_3616_);
v___x_3631_ = lean_box(0);
v_isShared_3632_ = v_isSharedCheck_3636_;
goto v_resetjp_3630_;
}
v_resetjp_3630_:
{
lean_object* v___x_3634_; 
if (v_isShared_3632_ == 0)
{
v___x_3634_ = v___x_3631_;
goto v_reusejp_3633_;
}
else
{
lean_object* v_reuseFailAlloc_3635_; 
v_reuseFailAlloc_3635_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3635_, 0, v_a_3629_);
v___x_3634_ = v_reuseFailAlloc_3635_;
goto v_reusejp_3633_;
}
v_reusejp_3633_:
{
return v___x_3634_;
}
}
}
}
else
{
lean_object* v_a_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3644_; 
lean_dec_ref(v_decl_3601_);
v_a_3637_ = lean_ctor_get(v___x_3612_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3612_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3639_ = v___x_3612_;
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_a_3637_);
lean_dec(v___x_3612_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3644_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3642_; 
if (v_isShared_3640_ == 0)
{
v___x_3642_ = v___x_3639_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_a_3637_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_toMono___boxed(lean_object* v_decl_3645_, lean_object* v_a_3646_, lean_object* v_a_3647_, lean_object* v_a_3648_, lean_object* v_a_3649_, lean_object* v_a_3650_, lean_object* v_a_3651_){
_start:
{
lean_object* v_res_3652_; 
v_res_3652_ = l_Lean_Compiler_LCNF_FunDecl_toMono(v_decl_3645_, v_a_3646_, v_a_3647_, v_a_3648_, v_a_3649_, v_a_3650_);
lean_dec(v_a_3650_);
lean_dec_ref(v_a_3649_);
lean_dec(v_a_3648_);
lean_dec_ref(v_a_3647_);
lean_dec(v_a_3646_);
return v_res_3652_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6___boxed(lean_object* v_sz_3653_, lean_object* v_i_3654_, lean_object* v_bs_3655_, lean_object* v___y_3656_, lean_object* v___y_3657_, lean_object* v___y_3658_, lean_object* v___y_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_){
_start:
{
size_t v_sz_boxed_3662_; size_t v_i_boxed_3663_; lean_object* v_res_3664_; 
v_sz_boxed_3662_ = lean_unbox_usize(v_sz_3653_);
lean_dec(v_sz_3653_);
v_i_boxed_3663_ = lean_unbox_usize(v_i_3654_);
lean_dec(v_i_3654_);
v_res_3664_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__6(v_sz_boxed_3662_, v_i_boxed_3663_, v_bs_3655_, v___y_3656_, v___y_3657_, v___y_3658_, v___y_3659_, v___y_3660_);
lean_dec(v___y_3660_);
lean_dec_ref(v___y_3659_);
lean_dec(v___y_3658_);
lean_dec_ref(v___y_3657_);
lean_dec(v___y_3656_);
return v_res_3664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___redArg___boxed(lean_object* v_c_3665_, lean_object* v_a_3666_, lean_object* v_a_3667_, lean_object* v_a_3668_, lean_object* v_a_3669_, lean_object* v_a_3670_, lean_object* v_a_3671_){
_start:
{
lean_object* v_res_3672_; 
v_res_3672_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_3665_, v_a_3666_, v_a_3667_, v_a_3668_, v_a_3669_, v_a_3670_);
lean_dec(v_a_3670_);
lean_dec_ref(v_a_3669_);
lean_dec(v_a_3668_);
lean_dec_ref(v_a_3667_);
lean_dec(v_a_3666_);
return v_res_3672_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___redArg___boxed(lean_object* v_c_3673_, lean_object* v_uintName_3674_, lean_object* v_a_3675_, lean_object* v_a_3676_, lean_object* v_a_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_){
_start:
{
lean_object* v_res_3681_; 
v_res_3681_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_3673_, v_uintName_3674_, v_a_3675_, v_a_3676_, v_a_3677_, v_a_3678_, v_a_3679_);
lean_dec(v_a_3679_);
lean_dec_ref(v_a_3678_);
lean_dec(v_a_3677_);
lean_dec_ref(v_a_3676_);
lean_dec(v_a_3675_);
return v_res_3681_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg___boxed(lean_object* v_c_3682_, lean_object* v_a_3683_, lean_object* v_a_3684_, lean_object* v_a_3685_, lean_object* v_a_3686_, lean_object* v_a_3687_, lean_object* v_a_3688_){
_start:
{
lean_object* v_res_3689_; 
v_res_3689_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_3682_, v_a_3683_, v_a_3684_, v_a_3685_, v_a_3686_, v_a_3687_);
lean_dec(v_a_3687_);
lean_dec_ref(v_a_3686_);
lean_dec(v_a_3685_);
lean_dec_ref(v_a_3684_);
lean_dec(v_a_3683_);
return v_res_3689_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg___boxed(lean_object* v_c_3690_, lean_object* v_a_3691_, lean_object* v_a_3692_, lean_object* v_a_3693_, lean_object* v_a_3694_, lean_object* v_a_3695_, lean_object* v_a_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_3690_, v_a_3691_, v_a_3692_, v_a_3693_, v_a_3694_, v_a_3695_);
lean_dec(v_a_3695_);
lean_dec_ref(v_a_3694_);
lean_dec(v_a_3693_);
lean_dec_ref(v_a_3692_);
lean_dec(v_a_3691_);
return v_res_3697_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg___boxed(lean_object* v_c_3698_, lean_object* v_a_3699_, lean_object* v_a_3700_, lean_object* v_a_3701_, lean_object* v_a_3702_, lean_object* v_a_3703_, lean_object* v_a_3704_){
_start:
{
lean_object* v_res_3705_; 
v_res_3705_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_3698_, v_a_3699_, v_a_3700_, v_a_3701_, v_a_3702_, v_a_3703_);
lean_dec(v_a_3703_);
lean_dec_ref(v_a_3702_);
lean_dec(v_a_3701_);
lean_dec_ref(v_a_3700_);
lean_dec(v_a_3699_);
return v_res_3705_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___redArg___boxed(lean_object* v_c_3706_, lean_object* v_a_3707_, lean_object* v_a_3708_, lean_object* v_a_3709_, lean_object* v_a_3710_, lean_object* v_a_3711_, lean_object* v_a_3712_){
_start:
{
lean_object* v_res_3713_; 
v_res_3713_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_3706_, v_a_3707_, v_a_3708_, v_a_3709_, v_a_3710_, v_a_3711_);
lean_dec(v_a_3711_);
lean_dec_ref(v_a_3710_);
lean_dec(v_a_3709_);
lean_dec_ref(v_a_3708_);
lean_dec(v_a_3707_);
return v_res_3713_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___redArg___boxed(lean_object* v_c_3714_, lean_object* v_a_3715_, lean_object* v_a_3716_, lean_object* v_a_3717_, lean_object* v_a_3718_, lean_object* v_a_3719_, lean_object* v_a_3720_){
_start:
{
lean_object* v_res_3721_; 
v_res_3721_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_3714_, v_a_3715_, v_a_3716_, v_a_3717_, v_a_3718_, v_a_3719_);
lean_dec(v_a_3719_);
lean_dec_ref(v_a_3718_);
lean_dec(v_a_3717_);
lean_dec_ref(v_a_3716_);
lean_dec(v_a_3715_);
return v_res_3721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5___boxed(lean_object* v___x_3722_, lean_object* v___x_3723_, lean_object* v_sz_3724_, lean_object* v_i_3725_, lean_object* v_bs_3726_, lean_object* v___y_3727_, lean_object* v___y_3728_, lean_object* v___y_3729_, lean_object* v___y_3730_, lean_object* v___y_3731_, lean_object* v___y_3732_){
_start:
{
uint8_t v___x_33912__boxed_3733_; size_t v_sz_boxed_3734_; size_t v_i_boxed_3735_; lean_object* v_res_3736_; 
v___x_33912__boxed_3733_ = lean_unbox(v___x_3723_);
v_sz_boxed_3734_ = lean_unbox_usize(v_sz_3724_);
lean_dec(v_sz_3724_);
v_i_boxed_3735_ = lean_unbox_usize(v_i_3725_);
lean_dec(v_i_3725_);
v_res_3736_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_Code_toMono_spec__5(v___x_3722_, v___x_33912__boxed_3733_, v_sz_boxed_3734_, v_i_boxed_3735_, v_bs_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_);
lean_dec(v___y_3731_);
lean_dec_ref(v___y_3730_);
lean_dec(v___y_3729_);
lean_dec_ref(v___y_3728_);
lean_dec(v___y_3727_);
return v_res_3736_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___redArg___boxed(lean_object* v_c_3737_, lean_object* v_a_3738_, lean_object* v_a_3739_, lean_object* v_a_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_, lean_object* v_a_3743_){
_start:
{
lean_object* v_res_3744_; 
v_res_3744_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_3737_, v_a_3738_, v_a_3739_, v_a_3740_, v_a_3741_, v_a_3742_);
lean_dec(v_a_3742_);
lean_dec_ref(v_a_3741_);
lean_dec(v_a_3740_);
lean_dec_ref(v_a_3739_);
lean_dec(v_a_3738_);
return v_res_3744_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___redArg___boxed(lean_object* v_c_3745_, lean_object* v_a_3746_, lean_object* v_a_3747_, lean_object* v_a_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_){
_start:
{
lean_object* v_res_3752_; 
v_res_3752_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_3745_, v_a_3746_, v_a_3747_, v_a_3748_, v_a_3749_, v_a_3750_);
lean_dec(v_a_3750_);
lean_dec_ref(v_a_3749_);
lean_dec(v_a_3748_);
lean_dec_ref(v_a_3747_);
lean_dec(v_a_3746_);
return v_res_3752_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___redArg___boxed(lean_object* v_c_3753_, lean_object* v_a_3754_, lean_object* v_a_3755_, lean_object* v_a_3756_, lean_object* v_a_3757_, lean_object* v_a_3758_, lean_object* v_a_3759_){
_start:
{
lean_object* v_res_3760_; 
v_res_3760_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_3753_, v_a_3754_, v_a_3755_, v_a_3756_, v_a_3757_, v_a_3758_);
lean_dec(v_a_3758_);
lean_dec_ref(v_a_3757_);
lean_dec(v_a_3756_);
lean_dec_ref(v_a_3755_);
lean_dec(v_a_3754_);
return v_res_3760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_trivialStructToMono___boxed(lean_object* v_info_3761_, lean_object* v_c_3762_, lean_object* v_a_3763_, lean_object* v_a_3764_, lean_object* v_a_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_){
_start:
{
lean_object* v_res_3769_; 
v_res_3769_ = l_Lean_Compiler_LCNF_trivialStructToMono(v_info_3761_, v_c_3762_, v_a_3763_, v_a_3764_, v_a_3765_, v_a_3766_, v_a_3767_);
lean_dec(v_a_3767_);
lean_dec_ref(v_a_3766_);
lean_dec(v_a_3765_);
lean_dec_ref(v_a_3764_);
lean_dec(v_a_3763_);
lean_dec_ref(v_info_3761_);
return v_res_3769_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20___boxed(lean_object* v___x_3770_, lean_object* v_sz_3771_, lean_object* v_i_3772_, lean_object* v_bs_3773_, lean_object* v___y_3774_, lean_object* v___y_3775_, lean_object* v___y_3776_, lean_object* v___y_3777_, lean_object* v___y_3778_, lean_object* v___y_3779_){
_start:
{
size_t v_sz_boxed_3780_; size_t v_i_boxed_3781_; lean_object* v_res_3782_; 
v_sz_boxed_3780_ = lean_unbox_usize(v_sz_3771_);
lean_dec(v_sz_3771_);
v_i_boxed_3781_ = lean_unbox_usize(v_i_3772_);
lean_dec(v_i_3772_);
v_res_3782_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesNatToMono_spec__20(v___x_3770_, v_sz_boxed_3780_, v_i_boxed_3781_, v_bs_3773_, v___y_3774_, v___y_3775_, v___y_3776_, v___y_3777_, v___y_3778_);
lean_dec(v___y_3778_);
lean_dec_ref(v___y_3777_);
lean_dec(v___y_3776_);
lean_dec_ref(v___y_3775_);
lean_dec(v___y_3774_);
return v_res_3782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___redArg___boxed(lean_object* v_c_3783_, lean_object* v_a_3784_, lean_object* v_a_3785_, lean_object* v_a_3786_, lean_object* v_a_3787_, lean_object* v_a_3788_, lean_object* v_a_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_3783_, v_a_3784_, v_a_3785_, v_a_3786_, v_a_3787_, v_a_3788_);
lean_dec(v_a_3788_);
lean_dec_ref(v_a_3787_);
lean_dec(v_a_3786_);
lean_dec_ref(v_a_3785_);
lean_dec(v_a_3784_);
lean_dec_ref(v_c_3783_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18___boxed(lean_object* v___x_3791_, lean_object* v_sz_3792_, lean_object* v_i_3793_, lean_object* v_bs_3794_, lean_object* v___y_3795_, lean_object* v___y_3796_, lean_object* v___y_3797_, lean_object* v___y_3798_, lean_object* v___y_3799_, lean_object* v___y_3800_){
_start:
{
size_t v_sz_boxed_3801_; size_t v_i_boxed_3802_; lean_object* v_res_3803_; 
v_sz_boxed_3801_ = lean_unbox_usize(v_sz_3792_);
lean_dec(v_sz_3792_);
v_i_boxed_3802_ = lean_unbox_usize(v_i_3793_);
lean_dec(v_i_3793_);
v_res_3803_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_casesIntToMono_spec__18(v___x_3791_, v_sz_boxed_3801_, v_i_boxed_3802_, v_bs_3794_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_);
lean_dec(v___y_3799_);
lean_dec_ref(v___y_3798_);
lean_dec(v___y_3797_);
lean_dec_ref(v___y_3796_);
lean_dec(v___y_3795_);
return v_res_3803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Code_toMono___boxed(lean_object* v_code_3804_, lean_object* v_a_3805_, lean_object* v_a_3806_, lean_object* v_a_3807_, lean_object* v_a_3808_, lean_object* v_a_3809_, lean_object* v_a_3810_){
_start:
{
lean_object* v_res_3811_; 
v_res_3811_ = l_Lean_Compiler_LCNF_Code_toMono(v_code_3804_, v_a_3805_, v_a_3806_, v_a_3807_, v_a_3808_, v_a_3809_);
lean_dec(v_a_3809_);
lean_dec_ref(v_a_3808_);
lean_dec(v_a_3807_);
lean_dec_ref(v_a_3806_);
lean_dec(v_a_3805_);
return v_res_3811_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono(lean_object* v_c_3812_, lean_object* v_x_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_){
_start:
{
lean_object* v___x_3820_; 
v___x_3820_ = l_Lean_Compiler_LCNF_casesTaskToMono___redArg(v_c_3812_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
return v___x_3820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesTaskToMono___boxed(lean_object* v_c_3821_, lean_object* v_x_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_, lean_object* v_a_3828_){
_start:
{
lean_object* v_res_3829_; 
v_res_3829_ = l_Lean_Compiler_LCNF_casesTaskToMono(v_c_3821_, v_x_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_);
lean_dec(v_a_3827_);
lean_dec_ref(v_a_3826_);
lean_dec(v_a_3825_);
lean_dec_ref(v_a_3824_);
lean_dec(v_a_3823_);
return v_res_3829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono(lean_object* v_c_3830_, lean_object* v_x_3831_, lean_object* v_a_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_){
_start:
{
lean_object* v___x_3838_; 
v___x_3838_ = l_Lean_Compiler_LCNF_casesThunkToMono___redArg(v_c_3830_, v_a_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_);
return v___x_3838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesThunkToMono___boxed(lean_object* v_c_3839_, lean_object* v_x_3840_, lean_object* v_a_3841_, lean_object* v_a_3842_, lean_object* v_a_3843_, lean_object* v_a_3844_, lean_object* v_a_3845_, lean_object* v_a_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l_Lean_Compiler_LCNF_casesThunkToMono(v_c_3839_, v_x_3840_, v_a_3841_, v_a_3842_, v_a_3843_, v_a_3844_, v_a_3845_);
lean_dec(v_a_3845_);
lean_dec_ref(v_a_3844_);
lean_dec(v_a_3843_);
lean_dec_ref(v_a_3842_);
lean_dec(v_a_3841_);
lean_dec_ref(v_c_3839_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono(lean_object* v_c_3848_, lean_object* v_x_3849_, lean_object* v_a_3850_, lean_object* v_a_3851_, lean_object* v_a_3852_, lean_object* v_a_3853_, lean_object* v_a_3854_){
_start:
{
lean_object* v___x_3856_; 
v___x_3856_ = l_Lean_Compiler_LCNF_casesFloat32ToMono___redArg(v_c_3848_, v_a_3850_, v_a_3851_, v_a_3852_, v_a_3853_, v_a_3854_);
return v___x_3856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloat32ToMono___boxed(lean_object* v_c_3857_, lean_object* v_x_3858_, lean_object* v_a_3859_, lean_object* v_a_3860_, lean_object* v_a_3861_, lean_object* v_a_3862_, lean_object* v_a_3863_, lean_object* v_a_3864_){
_start:
{
lean_object* v_res_3865_; 
v_res_3865_ = l_Lean_Compiler_LCNF_casesFloat32ToMono(v_c_3857_, v_x_3858_, v_a_3859_, v_a_3860_, v_a_3861_, v_a_3862_, v_a_3863_);
lean_dec(v_a_3863_);
lean_dec_ref(v_a_3862_);
lean_dec(v_a_3861_);
lean_dec_ref(v_a_3860_);
lean_dec(v_a_3859_);
return v_res_3865_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono(lean_object* v_c_3866_, lean_object* v_x_3867_, lean_object* v_a_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_){
_start:
{
lean_object* v___x_3874_; 
v___x_3874_ = l_Lean_Compiler_LCNF_casesFloatToMono___redArg(v_c_3866_, v_a_3868_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_);
return v___x_3874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatToMono___boxed(lean_object* v_c_3875_, lean_object* v_x_3876_, lean_object* v_a_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_, lean_object* v_a_3880_, lean_object* v_a_3881_, lean_object* v_a_3882_){
_start:
{
lean_object* v_res_3883_; 
v_res_3883_ = l_Lean_Compiler_LCNF_casesFloatToMono(v_c_3875_, v_x_3876_, v_a_3877_, v_a_3878_, v_a_3879_, v_a_3880_, v_a_3881_);
lean_dec(v_a_3881_);
lean_dec_ref(v_a_3880_);
lean_dec(v_a_3879_);
lean_dec_ref(v_a_3878_);
lean_dec(v_a_3877_);
return v_res_3883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono(lean_object* v_c_3884_, lean_object* v_x_3885_, lean_object* v_a_3886_, lean_object* v_a_3887_, lean_object* v_a_3888_, lean_object* v_a_3889_, lean_object* v_a_3890_){
_start:
{
lean_object* v___x_3892_; 
v___x_3892_ = l_Lean_Compiler_LCNF_casesStringToMono___redArg(v_c_3884_, v_a_3886_, v_a_3887_, v_a_3888_, v_a_3889_, v_a_3890_);
return v___x_3892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesStringToMono___boxed(lean_object* v_c_3893_, lean_object* v_x_3894_, lean_object* v_a_3895_, lean_object* v_a_3896_, lean_object* v_a_3897_, lean_object* v_a_3898_, lean_object* v_a_3899_, lean_object* v_a_3900_){
_start:
{
lean_object* v_res_3901_; 
v_res_3901_ = l_Lean_Compiler_LCNF_casesStringToMono(v_c_3893_, v_x_3894_, v_a_3895_, v_a_3896_, v_a_3897_, v_a_3898_, v_a_3899_);
lean_dec(v_a_3899_);
lean_dec_ref(v_a_3898_);
lean_dec(v_a_3897_);
lean_dec_ref(v_a_3896_);
lean_dec(v_a_3895_);
return v_res_3901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono(lean_object* v_c_3902_, lean_object* v_x_3903_, lean_object* v_a_3904_, lean_object* v_a_3905_, lean_object* v_a_3906_, lean_object* v_a_3907_, lean_object* v_a_3908_){
_start:
{
lean_object* v___x_3910_; 
v___x_3910_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono___redArg(v_c_3902_, v_a_3904_, v_a_3905_, v_a_3906_, v_a_3907_, v_a_3908_);
return v___x_3910_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesFloatArrayToMono___boxed(lean_object* v_c_3911_, lean_object* v_x_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_, lean_object* v_a_3917_, lean_object* v_a_3918_){
_start:
{
lean_object* v_res_3919_; 
v_res_3919_ = l_Lean_Compiler_LCNF_casesFloatArrayToMono(v_c_3911_, v_x_3912_, v_a_3913_, v_a_3914_, v_a_3915_, v_a_3916_, v_a_3917_);
lean_dec(v_a_3917_);
lean_dec_ref(v_a_3916_);
lean_dec(v_a_3915_);
lean_dec_ref(v_a_3914_);
lean_dec(v_a_3913_);
return v_res_3919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono(lean_object* v_c_3920_, lean_object* v_x_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_){
_start:
{
lean_object* v___x_3928_; 
v___x_3928_ = l_Lean_Compiler_LCNF_casesByteArrayToMono___redArg(v_c_3920_, v_a_3922_, v_a_3923_, v_a_3924_, v_a_3925_, v_a_3926_);
return v___x_3928_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesByteArrayToMono___boxed(lean_object* v_c_3929_, lean_object* v_x_3930_, lean_object* v_a_3931_, lean_object* v_a_3932_, lean_object* v_a_3933_, lean_object* v_a_3934_, lean_object* v_a_3935_, lean_object* v_a_3936_){
_start:
{
lean_object* v_res_3937_; 
v_res_3937_ = l_Lean_Compiler_LCNF_casesByteArrayToMono(v_c_3929_, v_x_3930_, v_a_3931_, v_a_3932_, v_a_3933_, v_a_3934_, v_a_3935_);
lean_dec(v_a_3935_);
lean_dec_ref(v_a_3934_);
lean_dec(v_a_3933_);
lean_dec_ref(v_a_3932_);
lean_dec(v_a_3931_);
return v_res_3937_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono(lean_object* v_c_3938_, lean_object* v_x_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_, lean_object* v_a_3943_, lean_object* v_a_3944_){
_start:
{
lean_object* v___x_3946_; 
v___x_3946_ = l_Lean_Compiler_LCNF_casesArrayToMono___redArg(v_c_3938_, v_a_3940_, v_a_3941_, v_a_3942_, v_a_3943_, v_a_3944_);
return v___x_3946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesArrayToMono___boxed(lean_object* v_c_3947_, lean_object* v_x_3948_, lean_object* v_a_3949_, lean_object* v_a_3950_, lean_object* v_a_3951_, lean_object* v_a_3952_, lean_object* v_a_3953_, lean_object* v_a_3954_){
_start:
{
lean_object* v_res_3955_; 
v_res_3955_ = l_Lean_Compiler_LCNF_casesArrayToMono(v_c_3947_, v_x_3948_, v_a_3949_, v_a_3950_, v_a_3951_, v_a_3952_, v_a_3953_);
lean_dec(v_a_3953_);
lean_dec_ref(v_a_3952_);
lean_dec(v_a_3951_);
lean_dec_ref(v_a_3950_);
lean_dec(v_a_3949_);
return v_res_3955_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono(lean_object* v_c_3956_, lean_object* v_uintName_3957_, lean_object* v_x_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_){
_start:
{
lean_object* v___x_3965_; 
v___x_3965_ = l_Lean_Compiler_LCNF_casesUIntToMono___redArg(v_c_3956_, v_uintName_3957_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_);
return v___x_3965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesUIntToMono___boxed(lean_object* v_c_3966_, lean_object* v_uintName_3967_, lean_object* v_x_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_, lean_object* v_a_3973_, lean_object* v_a_3974_){
_start:
{
lean_object* v_res_3975_; 
v_res_3975_ = l_Lean_Compiler_LCNF_casesUIntToMono(v_c_3966_, v_uintName_3967_, v_x_3968_, v_a_3969_, v_a_3970_, v_a_3971_, v_a_3972_, v_a_3973_);
lean_dec(v_a_3973_);
lean_dec_ref(v_a_3972_);
lean_dec(v_a_3971_);
lean_dec_ref(v_a_3970_);
lean_dec(v_a_3969_);
return v_res_3975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono(lean_object* v_c_3976_, lean_object* v_x_3977_, lean_object* v_a_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_){
_start:
{
lean_object* v___x_3984_; 
v___x_3984_ = l_Lean_Compiler_LCNF_casesIntToMono___redArg(v_c_3976_, v_a_3978_, v_a_3979_, v_a_3980_, v_a_3981_, v_a_3982_);
return v___x_3984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesIntToMono___boxed(lean_object* v_c_3985_, lean_object* v_x_3986_, lean_object* v_a_3987_, lean_object* v_a_3988_, lean_object* v_a_3989_, lean_object* v_a_3990_, lean_object* v_a_3991_, lean_object* v_a_3992_){
_start:
{
lean_object* v_res_3993_; 
v_res_3993_ = l_Lean_Compiler_LCNF_casesIntToMono(v_c_3985_, v_x_3986_, v_a_3987_, v_a_3988_, v_a_3989_, v_a_3990_, v_a_3991_);
lean_dec(v_a_3991_);
lean_dec_ref(v_a_3990_);
lean_dec(v_a_3989_);
lean_dec_ref(v_a_3988_);
lean_dec(v_a_3987_);
return v_res_3993_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono(lean_object* v_c_3994_, lean_object* v_x_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_){
_start:
{
lean_object* v___x_4002_; 
v___x_4002_ = l_Lean_Compiler_LCNF_casesNatToMono___redArg(v_c_3994_, v_a_3996_, v_a_3997_, v_a_3998_, v_a_3999_, v_a_4000_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_casesNatToMono___boxed(lean_object* v_c_4003_, lean_object* v_x_4004_, lean_object* v_a_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l_Lean_Compiler_LCNF_casesNatToMono(v_c_4003_, v_x_4004_, v_a_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec(v_a_4005_);
return v_res_4011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(size_t v_sz_4012_, size_t v_i_4013_, lean_object* v_bs_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_){
_start:
{
lean_object* v___x_4021_; 
v___x_4021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4012_, v_i_4013_, v_bs_4014_, v___y_4015_, v___y_4017_, v___y_4018_, v___y_4019_);
return v___x_4021_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___boxed(lean_object* v_sz_4022_, lean_object* v_i_4023_, lean_object* v_bs_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
size_t v_sz_boxed_4031_; size_t v_i_boxed_4032_; lean_object* v_res_4033_; 
v_sz_boxed_4031_ = lean_unbox_usize(v_sz_4022_);
lean_dec(v_sz_4022_);
v_i_boxed_4032_ = lean_unbox_usize(v_i_4023_);
lean_dec(v_i_4023_);
v_res_4033_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0(v_sz_boxed_4031_, v_i_boxed_4032_, v_bs_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec(v___y_4029_);
lean_dec_ref(v___y_4028_);
lean_dec(v___y_4027_);
lean_dec_ref(v___y_4026_);
lean_dec(v___y_4025_);
return v_res_4033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(lean_object* v_f_4034_, lean_object* v_v_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
if (lean_obj_tag(v_v_4035_) == 0)
{
lean_object* v_code_4042_; lean_object* v___x_4044_; uint8_t v_isShared_4045_; uint8_t v_isSharedCheck_4066_; 
v_code_4042_ = lean_ctor_get(v_v_4035_, 0);
v_isSharedCheck_4066_ = !lean_is_exclusive(v_v_4035_);
if (v_isSharedCheck_4066_ == 0)
{
v___x_4044_ = v_v_4035_;
v_isShared_4045_ = v_isSharedCheck_4066_;
goto v_resetjp_4043_;
}
else
{
lean_inc(v_code_4042_);
lean_dec(v_v_4035_);
v___x_4044_ = lean_box(0);
v_isShared_4045_ = v_isSharedCheck_4066_;
goto v_resetjp_4043_;
}
v_resetjp_4043_:
{
lean_object* v___x_4046_; 
lean_inc(v___y_4040_);
lean_inc_ref(v___y_4039_);
lean_inc(v___y_4038_);
lean_inc_ref(v___y_4037_);
lean_inc(v___y_4036_);
v___x_4046_ = lean_apply_7(v_f_4034_, v_code_4042_, v___y_4036_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_, lean_box(0));
if (lean_obj_tag(v___x_4046_) == 0)
{
lean_object* v_a_4047_; lean_object* v___x_4049_; uint8_t v_isShared_4050_; uint8_t v_isSharedCheck_4057_; 
v_a_4047_ = lean_ctor_get(v___x_4046_, 0);
v_isSharedCheck_4057_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4057_ == 0)
{
v___x_4049_ = v___x_4046_;
v_isShared_4050_ = v_isSharedCheck_4057_;
goto v_resetjp_4048_;
}
else
{
lean_inc(v_a_4047_);
lean_dec(v___x_4046_);
v___x_4049_ = lean_box(0);
v_isShared_4050_ = v_isSharedCheck_4057_;
goto v_resetjp_4048_;
}
v_resetjp_4048_:
{
lean_object* v___x_4052_; 
if (v_isShared_4045_ == 0)
{
lean_ctor_set(v___x_4044_, 0, v_a_4047_);
v___x_4052_ = v___x_4044_;
goto v_reusejp_4051_;
}
else
{
lean_object* v_reuseFailAlloc_4056_; 
v_reuseFailAlloc_4056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4056_, 0, v_a_4047_);
v___x_4052_ = v_reuseFailAlloc_4056_;
goto v_reusejp_4051_;
}
v_reusejp_4051_:
{
lean_object* v___x_4054_; 
if (v_isShared_4050_ == 0)
{
lean_ctor_set(v___x_4049_, 0, v___x_4052_);
v___x_4054_ = v___x_4049_;
goto v_reusejp_4053_;
}
else
{
lean_object* v_reuseFailAlloc_4055_; 
v_reuseFailAlloc_4055_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4055_, 0, v___x_4052_);
v___x_4054_ = v_reuseFailAlloc_4055_;
goto v_reusejp_4053_;
}
v_reusejp_4053_:
{
return v___x_4054_;
}
}
}
}
else
{
lean_object* v_a_4058_; lean_object* v___x_4060_; uint8_t v_isShared_4061_; uint8_t v_isSharedCheck_4065_; 
lean_del_object(v___x_4044_);
v_a_4058_ = lean_ctor_get(v___x_4046_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v___x_4046_);
if (v_isSharedCheck_4065_ == 0)
{
v___x_4060_ = v___x_4046_;
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
else
{
lean_inc(v_a_4058_);
lean_dec(v___x_4046_);
v___x_4060_ = lean_box(0);
v_isShared_4061_ = v_isSharedCheck_4065_;
goto v_resetjp_4059_;
}
v_resetjp_4059_:
{
lean_object* v___x_4063_; 
if (v_isShared_4061_ == 0)
{
v___x_4063_ = v___x_4060_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4058_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
return v___x_4063_;
}
}
}
}
}
else
{
lean_object* v___x_4067_; 
lean_dec_ref(v_f_4034_);
v___x_4067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4067_, 0, v_v_4035_);
return v___x_4067_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg___boxed(lean_object* v_f_4068_, lean_object* v_v_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_, lean_object* v___y_4073_, lean_object* v___y_4074_, lean_object* v___y_4075_){
_start:
{
lean_object* v_res_4076_; 
v_res_4076_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4068_, v_v_4069_, v___y_4070_, v___y_4071_, v___y_4072_, v___y_4073_, v___y_4074_);
lean_dec(v___y_4074_);
lean_dec_ref(v___y_4073_);
lean_dec(v___y_4072_);
lean_dec_ref(v___y_4071_);
lean_dec(v___y_4070_);
return v_res_4076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(uint8_t v_pu_4077_, lean_object* v_f_4078_, lean_object* v_v_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_){
_start:
{
lean_object* v___x_4086_; 
v___x_4086_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v_f_4078_, v_v_4079_, v___y_4080_, v___y_4081_, v___y_4082_, v___y_4083_, v___y_4084_);
return v___x_4086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___boxed(lean_object* v_pu_4087_, lean_object* v_f_4088_, lean_object* v_v_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_, lean_object* v___y_4092_, lean_object* v___y_4093_, lean_object* v___y_4094_, lean_object* v___y_4095_){
_start:
{
uint8_t v_pu_boxed_4096_; lean_object* v_res_4097_; 
v_pu_boxed_4096_ = lean_unbox(v_pu_4087_);
v_res_4097_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0(v_pu_boxed_4096_, v_f_4088_, v_v_4089_, v___y_4090_, v___y_4091_, v___y_4092_, v___y_4093_, v___y_4094_);
lean_dec(v___y_4094_);
lean_dec_ref(v___y_4093_);
lean_dec(v___y_4092_);
lean_dec_ref(v___y_4091_);
lean_dec(v___y_4090_);
return v_res_4097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(lean_object* v_decl_4099_, lean_object* v_a_4100_, lean_object* v_a_4101_, lean_object* v_a_4102_, lean_object* v_a_4103_, lean_object* v_a_4104_){
_start:
{
lean_object* v_toSignature_4106_; lean_object* v_value_4107_; uint8_t v_recursive_4108_; lean_object* v_inlineAttr_x3f_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4179_; 
v_toSignature_4106_ = lean_ctor_get(v_decl_4099_, 0);
v_value_4107_ = lean_ctor_get(v_decl_4099_, 1);
v_recursive_4108_ = lean_ctor_get_uint8(v_decl_4099_, sizeof(void*)*3);
v_inlineAttr_x3f_4109_ = lean_ctor_get(v_decl_4099_, 2);
v_isSharedCheck_4179_ = !lean_is_exclusive(v_decl_4099_);
if (v_isSharedCheck_4179_ == 0)
{
v___x_4111_ = v_decl_4099_;
v_isShared_4112_ = v_isSharedCheck_4179_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_inlineAttr_x3f_4109_);
lean_inc(v_value_4107_);
lean_inc(v_toSignature_4106_);
lean_dec(v_decl_4099_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4179_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v_name_4113_; lean_object* v_type_4114_; lean_object* v_params_4115_; uint8_t v_safe_4116_; lean_object* v___x_4118_; uint8_t v_isShared_4119_; uint8_t v_isSharedCheck_4177_; 
v_name_4113_ = lean_ctor_get(v_toSignature_4106_, 0);
v_type_4114_ = lean_ctor_get(v_toSignature_4106_, 2);
v_params_4115_ = lean_ctor_get(v_toSignature_4106_, 3);
v_safe_4116_ = lean_ctor_get_uint8(v_toSignature_4106_, sizeof(void*)*4);
v_isSharedCheck_4177_ = !lean_is_exclusive(v_toSignature_4106_);
if (v_isSharedCheck_4177_ == 0)
{
lean_object* v_unused_4178_; 
v_unused_4178_ = lean_ctor_get(v_toSignature_4106_, 1);
lean_dec(v_unused_4178_);
v___x_4118_ = v_toSignature_4106_;
v_isShared_4119_ = v_isSharedCheck_4177_;
goto v_resetjp_4117_;
}
else
{
lean_inc(v_params_4115_);
lean_inc(v_type_4114_);
lean_inc(v_name_4113_);
lean_dec(v_toSignature_4106_);
v___x_4118_ = lean_box(0);
v_isShared_4119_ = v_isSharedCheck_4177_;
goto v_resetjp_4117_;
}
v_resetjp_4117_:
{
lean_object* v___f_4120_; lean_object* v___x_4121_; 
v___f_4120_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___closed__0));
v___x_4121_ = l_Lean_Compiler_LCNF_toMonoType(v_type_4114_, v_a_4103_, v_a_4104_);
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v_a_4122_; size_t v_sz_4123_; size_t v___x_4124_; lean_object* v___x_4125_; 
v_a_4122_ = lean_ctor_get(v___x_4121_, 0);
lean_inc(v_a_4122_);
lean_dec_ref_known(v___x_4121_, 1);
v_sz_4123_ = lean_array_size(v_params_4115_);
v___x_4124_ = ((size_t)0ULL);
v___x_4125_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_FunDecl_toMono_spec__0___redArg(v_sz_4123_, v___x_4124_, v_params_4115_, v_a_4100_, v_a_4102_, v_a_4103_, v_a_4104_);
if (lean_obj_tag(v___x_4125_) == 0)
{
lean_object* v_a_4126_; lean_object* v___x_4127_; 
v_a_4126_ = lean_ctor_get(v___x_4125_, 0);
lean_inc(v_a_4126_);
lean_dec_ref_known(v___x_4125_, 1);
v___x_4127_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go_spec__0___redArg(v___f_4120_, v_value_4107_, v_a_4100_, v_a_4101_, v_a_4102_, v_a_4103_, v_a_4104_);
if (lean_obj_tag(v___x_4127_) == 0)
{
lean_object* v_a_4128_; lean_object* v___x_4129_; lean_object* v___x_4131_; 
v_a_4128_ = lean_ctor_get(v___x_4127_, 0);
lean_inc(v_a_4128_);
lean_dec_ref_known(v___x_4127_, 1);
v___x_4129_ = lean_box(0);
if (v_isShared_4119_ == 0)
{
lean_ctor_set(v___x_4118_, 3, v_a_4126_);
lean_ctor_set(v___x_4118_, 2, v_a_4122_);
lean_ctor_set(v___x_4118_, 1, v___x_4129_);
v___x_4131_ = v___x_4118_;
goto v_reusejp_4130_;
}
else
{
lean_object* v_reuseFailAlloc_4152_; 
v_reuseFailAlloc_4152_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_4152_, 0, v_name_4113_);
lean_ctor_set(v_reuseFailAlloc_4152_, 1, v___x_4129_);
lean_ctor_set(v_reuseFailAlloc_4152_, 2, v_a_4122_);
lean_ctor_set(v_reuseFailAlloc_4152_, 3, v_a_4126_);
lean_ctor_set_uint8(v_reuseFailAlloc_4152_, sizeof(void*)*4, v_safe_4116_);
v___x_4131_ = v_reuseFailAlloc_4152_;
goto v_reusejp_4130_;
}
v_reusejp_4130_:
{
lean_object* v___x_4133_; 
if (v_isShared_4112_ == 0)
{
lean_ctor_set(v___x_4111_, 1, v_a_4128_);
lean_ctor_set(v___x_4111_, 0, v___x_4131_);
v___x_4133_ = v___x_4111_;
goto v_reusejp_4132_;
}
else
{
lean_object* v_reuseFailAlloc_4151_; 
v_reuseFailAlloc_4151_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4151_, 0, v___x_4131_);
lean_ctor_set(v_reuseFailAlloc_4151_, 1, v_a_4128_);
lean_ctor_set(v_reuseFailAlloc_4151_, 2, v_inlineAttr_x3f_4109_);
lean_ctor_set_uint8(v_reuseFailAlloc_4151_, sizeof(void*)*3, v_recursive_4108_);
v___x_4133_ = v_reuseFailAlloc_4151_;
goto v_reusejp_4132_;
}
v_reusejp_4132_:
{
lean_object* v___x_4134_; 
lean_inc_ref(v___x_4133_);
v___x_4134_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v___x_4133_, v_a_4104_);
if (lean_obj_tag(v___x_4134_) == 0)
{
lean_object* v___x_4136_; uint8_t v_isShared_4137_; uint8_t v_isSharedCheck_4141_; 
v_isSharedCheck_4141_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4141_ == 0)
{
lean_object* v_unused_4142_; 
v_unused_4142_ = lean_ctor_get(v___x_4134_, 0);
lean_dec(v_unused_4142_);
v___x_4136_ = v___x_4134_;
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
else
{
lean_dec(v___x_4134_);
v___x_4136_ = lean_box(0);
v_isShared_4137_ = v_isSharedCheck_4141_;
goto v_resetjp_4135_;
}
v_resetjp_4135_:
{
lean_object* v___x_4139_; 
if (v_isShared_4137_ == 0)
{
lean_ctor_set(v___x_4136_, 0, v___x_4133_);
v___x_4139_ = v___x_4136_;
goto v_reusejp_4138_;
}
else
{
lean_object* v_reuseFailAlloc_4140_; 
v_reuseFailAlloc_4140_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4140_, 0, v___x_4133_);
v___x_4139_ = v_reuseFailAlloc_4140_;
goto v_reusejp_4138_;
}
v_reusejp_4138_:
{
return v___x_4139_;
}
}
}
else
{
lean_object* v_a_4143_; lean_object* v___x_4145_; uint8_t v_isShared_4146_; uint8_t v_isSharedCheck_4150_; 
lean_dec_ref(v___x_4133_);
v_a_4143_ = lean_ctor_get(v___x_4134_, 0);
v_isSharedCheck_4150_ = !lean_is_exclusive(v___x_4134_);
if (v_isSharedCheck_4150_ == 0)
{
v___x_4145_ = v___x_4134_;
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
else
{
lean_inc(v_a_4143_);
lean_dec(v___x_4134_);
v___x_4145_ = lean_box(0);
v_isShared_4146_ = v_isSharedCheck_4150_;
goto v_resetjp_4144_;
}
v_resetjp_4144_:
{
lean_object* v___x_4148_; 
if (v_isShared_4146_ == 0)
{
v___x_4148_ = v___x_4145_;
goto v_reusejp_4147_;
}
else
{
lean_object* v_reuseFailAlloc_4149_; 
v_reuseFailAlloc_4149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4149_, 0, v_a_4143_);
v___x_4148_ = v_reuseFailAlloc_4149_;
goto v_reusejp_4147_;
}
v_reusejp_4147_:
{
return v___x_4148_;
}
}
}
}
}
}
else
{
lean_object* v_a_4153_; lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4160_; 
lean_dec(v_a_4126_);
lean_dec(v_a_4122_);
lean_del_object(v___x_4118_);
lean_dec(v_name_4113_);
lean_del_object(v___x_4111_);
lean_dec(v_inlineAttr_x3f_4109_);
v_a_4153_ = lean_ctor_get(v___x_4127_, 0);
v_isSharedCheck_4160_ = !lean_is_exclusive(v___x_4127_);
if (v_isSharedCheck_4160_ == 0)
{
v___x_4155_ = v___x_4127_;
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
else
{
lean_inc(v_a_4153_);
lean_dec(v___x_4127_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4160_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
if (v_isShared_4156_ == 0)
{
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4159_; 
v_reuseFailAlloc_4159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4159_, 0, v_a_4153_);
v___x_4158_ = v_reuseFailAlloc_4159_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
return v___x_4158_;
}
}
}
}
else
{
lean_object* v_a_4161_; lean_object* v___x_4163_; uint8_t v_isShared_4164_; uint8_t v_isSharedCheck_4168_; 
lean_dec(v_a_4122_);
lean_del_object(v___x_4118_);
lean_dec(v_name_4113_);
lean_del_object(v___x_4111_);
lean_dec(v_inlineAttr_x3f_4109_);
lean_dec_ref(v_value_4107_);
v_a_4161_ = lean_ctor_get(v___x_4125_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4125_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4163_ = v___x_4125_;
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
else
{
lean_inc(v_a_4161_);
lean_dec(v___x_4125_);
v___x_4163_ = lean_box(0);
v_isShared_4164_ = v_isSharedCheck_4168_;
goto v_resetjp_4162_;
}
v_resetjp_4162_:
{
lean_object* v___x_4166_; 
if (v_isShared_4164_ == 0)
{
v___x_4166_ = v___x_4163_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v_a_4161_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
}
}
else
{
lean_object* v_a_4169_; lean_object* v___x_4171_; uint8_t v_isShared_4172_; uint8_t v_isSharedCheck_4176_; 
lean_del_object(v___x_4118_);
lean_dec_ref(v_params_4115_);
lean_dec(v_name_4113_);
lean_del_object(v___x_4111_);
lean_dec(v_inlineAttr_x3f_4109_);
lean_dec_ref(v_value_4107_);
v_a_4169_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4176_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4176_ == 0)
{
v___x_4171_ = v___x_4121_;
v_isShared_4172_ = v_isSharedCheck_4176_;
goto v_resetjp_4170_;
}
else
{
lean_inc(v_a_4169_);
lean_dec(v___x_4121_);
v___x_4171_ = lean_box(0);
v_isShared_4172_ = v_isSharedCheck_4176_;
goto v_resetjp_4170_;
}
v_resetjp_4170_:
{
lean_object* v___x_4174_; 
if (v_isShared_4172_ == 0)
{
v___x_4174_ = v___x_4171_;
goto v_reusejp_4173_;
}
else
{
lean_object* v_reuseFailAlloc_4175_; 
v_reuseFailAlloc_4175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4175_, 0, v_a_4169_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go___boxed(lean_object* v_decl_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_, lean_object* v_a_4185_, lean_object* v_a_4186_){
_start:
{
lean_object* v_res_4187_; 
v_res_4187_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_, v_a_4185_);
lean_dec(v_a_4185_);
lean_dec_ref(v_a_4184_);
lean_dec(v_a_4183_);
lean_dec_ref(v_a_4182_);
lean_dec(v_a_4181_);
return v_res_4187_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__0(void){
_start:
{
lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; 
v___x_4188_ = lean_box(0);
v___x_4189_ = lean_unsigned_to_nat(16u);
v___x_4190_ = lean_mk_array(v___x_4189_, v___x_4188_);
return v___x_4190_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__1(void){
_start:
{
lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; 
v___x_4191_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_toMono___closed__0, &l_Lean_Compiler_LCNF_Decl_toMono___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__0);
v___x_4192_ = lean_unsigned_to_nat(0u);
v___x_4193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4193_, 0, v___x_4192_);
lean_ctor_set(v___x_4193_, 1, v___x_4191_);
return v___x_4193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono(lean_object* v_decl_4194_, lean_object* v_a_4195_, lean_object* v_a_4196_, lean_object* v_a_4197_, lean_object* v_a_4198_){
_start:
{
lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; 
v___x_4200_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_toMono___closed__1, &l_Lean_Compiler_LCNF_Decl_toMono___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_toMono___closed__1);
v___x_4201_ = lean_st_mk_ref(v___x_4200_);
v___x_4202_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_Decl_toMono_go(v_decl_4194_, v___x_4201_, v_a_4195_, v_a_4196_, v_a_4197_, v_a_4198_);
if (lean_obj_tag(v___x_4202_) == 0)
{
lean_object* v_a_4203_; lean_object* v___x_4205_; uint8_t v_isShared_4206_; uint8_t v_isSharedCheck_4211_; 
v_a_4203_ = lean_ctor_get(v___x_4202_, 0);
v_isSharedCheck_4211_ = !lean_is_exclusive(v___x_4202_);
if (v_isSharedCheck_4211_ == 0)
{
v___x_4205_ = v___x_4202_;
v_isShared_4206_ = v_isSharedCheck_4211_;
goto v_resetjp_4204_;
}
else
{
lean_inc(v_a_4203_);
lean_dec(v___x_4202_);
v___x_4205_ = lean_box(0);
v_isShared_4206_ = v_isSharedCheck_4211_;
goto v_resetjp_4204_;
}
v_resetjp_4204_:
{
lean_object* v___x_4207_; lean_object* v___x_4209_; 
v___x_4207_ = lean_st_ref_get(v___x_4201_);
lean_dec(v___x_4201_);
lean_dec(v___x_4207_);
if (v_isShared_4206_ == 0)
{
v___x_4209_ = v___x_4205_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v_a_4203_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
return v___x_4209_;
}
}
}
else
{
lean_dec(v___x_4201_);
return v___x_4202_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_toMono___boxed(lean_object* v_decl_4212_, lean_object* v_a_4213_, lean_object* v_a_4214_, lean_object* v_a_4215_, lean_object* v_a_4216_, lean_object* v_a_4217_){
_start:
{
lean_object* v_res_4218_; 
v_res_4218_ = l_Lean_Compiler_LCNF_Decl_toMono(v_decl_4212_, v_a_4213_, v_a_4214_, v_a_4215_, v_a_4216_);
lean_dec(v_a_4216_);
lean_dec_ref(v_a_4215_);
lean_dec(v_a_4214_);
lean_dec_ref(v_a_4213_);
return v_res_4218_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(size_t v_sz_4219_, size_t v_i_4220_, lean_object* v_bs_4221_, lean_object* v___y_4222_, lean_object* v___y_4223_, lean_object* v___y_4224_, lean_object* v___y_4225_){
_start:
{
uint8_t v___x_4227_; 
v___x_4227_ = lean_usize_dec_lt(v_i_4220_, v_sz_4219_);
if (v___x_4227_ == 0)
{
lean_object* v___x_4228_; 
v___x_4228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4228_, 0, v_bs_4221_);
return v___x_4228_;
}
else
{
lean_object* v_v_4229_; lean_object* v___x_4230_; lean_object* v_bs_x27_4231_; lean_object* v___x_4232_; 
v_v_4229_ = lean_array_uget(v_bs_4221_, v_i_4220_);
v___x_4230_ = lean_unsigned_to_nat(0u);
v_bs_x27_4231_ = lean_array_uset(v_bs_4221_, v_i_4220_, v___x_4230_);
v___x_4232_ = l_Lean_Compiler_LCNF_Decl_toMono(v_v_4229_, v___y_4222_, v___y_4223_, v___y_4224_, v___y_4225_);
if (lean_obj_tag(v___x_4232_) == 0)
{
lean_object* v_a_4233_; size_t v___x_4234_; size_t v___x_4235_; lean_object* v___x_4236_; 
v_a_4233_ = lean_ctor_get(v___x_4232_, 0);
lean_inc(v_a_4233_);
lean_dec_ref_known(v___x_4232_, 1);
v___x_4234_ = ((size_t)1ULL);
v___x_4235_ = lean_usize_add(v_i_4220_, v___x_4234_);
v___x_4236_ = lean_array_uset(v_bs_x27_4231_, v_i_4220_, v_a_4233_);
v_i_4220_ = v___x_4235_;
v_bs_4221_ = v___x_4236_;
goto _start;
}
else
{
lean_object* v_a_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4245_; 
lean_dec_ref(v_bs_x27_4231_);
v_a_4238_ = lean_ctor_get(v___x_4232_, 0);
v_isSharedCheck_4245_ = !lean_is_exclusive(v___x_4232_);
if (v_isSharedCheck_4245_ == 0)
{
v___x_4240_ = v___x_4232_;
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_a_4238_);
lean_dec(v___x_4232_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v___x_4243_; 
if (v_isShared_4241_ == 0)
{
v___x_4243_ = v___x_4240_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v_a_4238_);
v___x_4243_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
return v___x_4243_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0___boxed(lean_object* v_sz_4246_, lean_object* v_i_4247_, lean_object* v_bs_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_){
_start:
{
size_t v_sz_boxed_4254_; size_t v_i_boxed_4255_; lean_object* v_res_4256_; 
v_sz_boxed_4254_ = lean_unbox_usize(v_sz_4246_);
lean_dec(v_sz_4246_);
v_i_boxed_4255_ = lean_unbox_usize(v_i_4247_);
lean_dec(v_i_4247_);
v_res_4256_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_boxed_4254_, v_i_boxed_4255_, v_bs_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_);
lean_dec(v___y_4252_);
lean_dec_ref(v___y_4251_);
lean_dec(v___y_4250_);
lean_dec_ref(v___y_4249_);
return v_res_4256_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0(lean_object* v_x_4257_, lean_object* v___y_4258_, lean_object* v___y_4259_, lean_object* v___y_4260_, lean_object* v___y_4261_){
_start:
{
size_t v_sz_4263_; size_t v___x_4264_; lean_object* v___x_4265_; 
v_sz_4263_ = lean_array_size(v_x_4257_);
v___x_4264_ = ((size_t)0ULL);
v___x_4265_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_toMono_spec__0(v_sz_4263_, v___x_4264_, v_x_4257_, v___y_4258_, v___y_4259_, v___y_4260_, v___y_4261_);
return v___x_4265_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_toMono___lam__0___boxed(lean_object* v_x_4266_, lean_object* v___y_4267_, lean_object* v___y_4268_, lean_object* v___y_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_){
_start:
{
lean_object* v_res_4272_; 
v_res_4272_ = l_Lean_Compiler_LCNF_toMono___lam__0(v_x_4266_, v___y_4267_, v___y_4268_, v___y_4269_, v___y_4270_);
lean_dec(v___y_4270_);
lean_dec_ref(v___y_4269_);
lean_dec(v___y_4268_);
lean_dec_ref(v___y_4267_);
return v_res_4272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4355_; uint8_t v___x_4356_; lean_object* v___x_4357_; lean_object* v___x_4358_; 
v___x_4355_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4356_ = 1;
v___x_4357_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_));
v___x_4358_ = l_Lean_registerTraceClass(v___x_4355_, v___x_4356_, v___x_4357_);
return v___x_4358_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2____boxed(lean_object* v_a_4359_){
_start:
{
lean_object* v_res_4360_; 
v_res_4360_ = l___private_Lean_Compiler_LCNF_ToMono_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ToMono_1770774466____hygCtx___hyg_2_();
return v_res_4360_;
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
