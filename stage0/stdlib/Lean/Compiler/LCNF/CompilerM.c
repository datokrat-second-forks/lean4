// Lean compiler output
// Module: Lean.Compiler.LCNF.CompilerM
// Imports: public import Lean.Compiler.LCNF.LCtx public import Lean.Compiler.LCNF.ConfigOptions
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
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_erasedExpr;
lean_object* l_Lean_Expr_fvar___override(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_headBeta(lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(uint8_t, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(uint8_t, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addParam(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_toConfigOptions(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseParam(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseLetDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseFunDecl(uint8_t, lean_object*, lean_object*, uint8_t);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedConfigOptions_default;
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_read___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseCode(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_eraseParams(uint8_t, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instInhabitedPhase_default;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instInhabitedPhase;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_ofNat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ofNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instDecidableEqPhase(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instDecidableEqPhase___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toPurity___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedState;
static lean_once_cell_t l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_value)} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_value)} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__5_value),((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__6_value),((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__3_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__12_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__13_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__14_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instMonadCompilerM___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM = (const lean_object*)&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getType___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "unknown free variable "};
static const lean_object* l_Lean_Compiler_LCNF_getType___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getType___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getType___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getType___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "unknown parameter "};
static const lean_object* l_Lean_Compiler_LCNF_getParam___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getParam___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getParam___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getParam___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getLetDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "unknown let-declaration "};
static const lean_object* l_Lean_Compiler_LCNF_getLetDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getLetDecl___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getLetDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getLetDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getFunDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "unknown local function "};
static const lean_object* l_Lean_Compiler_LCNF_getFunDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getFunDecl___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getFunDecl___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getFunDecl___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go_spec__1(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "_private.Lean.Compiler.LCNF.CompilerM.0.Lean.Compiler.LCNF.normExprImp.go"};
static const lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.Compiler.LCNF.CompilerM"};
static const lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instInhabitedNormFVarResult = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedNormFVarResult_default___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_addSubst___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_addSubst___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_addSubst___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_addSubst___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_y"};
static const lean_object* l_Lean_Compiler_LCNF_mkParam___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkParam___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 112, 10, 137, 239, 103, 163, 90)}};
static const lean_object* l_Lean_Compiler_LCNF_mkParam___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkParam___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkLetDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_x"};
static const lean_object* l_Lean_Compiler_LCNF_mkLetDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkLetDecl___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkLetDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkLetDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(181, 1, 28, 251, 11, 9, 217, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_mkLetDecl___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkLetDecl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkFunDecl___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_f"};
static const lean_object* l_Lean_Compiler_LCNF_mkFunDecl___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkFunDecl___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkFunDecl___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkFunDecl___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 65, 185, 154, 193, 83, 240, 170)}};
static const lean_object* l_Lean_Compiler_LCNF_mkFunDecl___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkFunDecl___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM(uint8_t, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0(uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_jp"};
static const lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(89, 69, 15, 56, 172, 246, 212, 179)}};
static const lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Data.PersistentHashMap"};
static const lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.PersistentHashMap.find!"};
static const lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "key is not in the map"};
static const lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx(uint8_t v_x_1_){
_start:
{
switch(v_x_1_)
{
case 0:
{
lean_object* v___x_2_; 
v___x_2_ = lean_unsigned_to_nat(0u);
return v___x_2_;
}
case 1:
{
lean_object* v___x_3_; 
v___x_3_ = lean_unsigned_to_nat(1u);
return v___x_3_;
}
default: 
{
lean_object* v___x_4_; 
v___x_4_ = lean_unsigned_to_nat(2u);
return v___x_4_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorIdx___boxed(lean_object* v_x_5_){
_start:
{
uint8_t v_x_boxed_6_; lean_object* v_res_7_; 
v_x_boxed_6_ = lean_unbox(v_x_5_);
v_res_7_ = l_Lean_Compiler_LCNF_Phase_ctorIdx(v_x_boxed_6_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg(lean_object* v_k_8_){
_start:
{
lean_inc(v_k_8_);
return v_k_8_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___redArg___boxed(lean_object* v_k_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_Compiler_LCNF_Phase_ctorElim___redArg(v_k_9_);
lean_dec(v_k_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim(lean_object* v_motive_11_, lean_object* v_ctorIdx_12_, uint8_t v_t_13_, lean_object* v_h_14_, lean_object* v_k_15_){
_start:
{
lean_inc(v_k_15_);
return v_k_15_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ctorElim___boxed(lean_object* v_motive_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
uint8_t v_t_boxed_21_; lean_object* v_res_22_; 
v_t_boxed_21_ = lean_unbox(v_t_18_);
v_res_22_ = l_Lean_Compiler_LCNF_Phase_ctorElim(v_motive_16_, v_ctorIdx_17_, v_t_boxed_21_, v_h_19_, v_k_20_);
lean_dec(v_k_20_);
lean_dec(v_ctorIdx_17_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg(lean_object* v_base_23_){
_start:
{
lean_inc(v_base_23_);
return v_base_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___redArg___boxed(lean_object* v_base_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_Compiler_LCNF_Phase_base_elim___redArg(v_base_24_);
lean_dec(v_base_24_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim(lean_object* v_motive_26_, uint8_t v_t_27_, lean_object* v_h_28_, lean_object* v_base_29_){
_start:
{
lean_inc(v_base_29_);
return v_base_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_base_elim___boxed(lean_object* v_motive_30_, lean_object* v_t_31_, lean_object* v_h_32_, lean_object* v_base_33_){
_start:
{
uint8_t v_t_boxed_34_; lean_object* v_res_35_; 
v_t_boxed_34_ = lean_unbox(v_t_31_);
v_res_35_ = l_Lean_Compiler_LCNF_Phase_base_elim(v_motive_30_, v_t_boxed_34_, v_h_32_, v_base_33_);
lean_dec(v_base_33_);
return v_res_35_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg(lean_object* v_mono_36_){
_start:
{
lean_inc(v_mono_36_);
return v_mono_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___redArg___boxed(lean_object* v_mono_37_){
_start:
{
lean_object* v_res_38_; 
v_res_38_ = l_Lean_Compiler_LCNF_Phase_mono_elim___redArg(v_mono_37_);
lean_dec(v_mono_37_);
return v_res_38_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim(lean_object* v_motive_39_, uint8_t v_t_40_, lean_object* v_h_41_, lean_object* v_mono_42_){
_start:
{
lean_inc(v_mono_42_);
return v_mono_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_mono_elim___boxed(lean_object* v_motive_43_, lean_object* v_t_44_, lean_object* v_h_45_, lean_object* v_mono_46_){
_start:
{
uint8_t v_t_boxed_47_; lean_object* v_res_48_; 
v_t_boxed_47_ = lean_unbox(v_t_44_);
v_res_48_ = l_Lean_Compiler_LCNF_Phase_mono_elim(v_motive_43_, v_t_boxed_47_, v_h_45_, v_mono_46_);
lean_dec(v_mono_46_);
return v_res_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg(lean_object* v_impure_49_){
_start:
{
lean_inc(v_impure_49_);
return v_impure_49_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___redArg___boxed(lean_object* v_impure_50_){
_start:
{
lean_object* v_res_51_; 
v_res_51_ = l_Lean_Compiler_LCNF_Phase_impure_elim___redArg(v_impure_50_);
lean_dec(v_impure_50_);
return v_res_51_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim(lean_object* v_motive_52_, uint8_t v_t_53_, lean_object* v_h_54_, lean_object* v_impure_55_){
_start:
{
lean_inc(v_impure_55_);
return v_impure_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_impure_elim___boxed(lean_object* v_motive_56_, lean_object* v_t_57_, lean_object* v_h_58_, lean_object* v_impure_59_){
_start:
{
uint8_t v_t_boxed_60_; lean_object* v_res_61_; 
v_t_boxed_60_ = lean_unbox(v_t_57_);
v_res_61_ = l_Lean_Compiler_LCNF_Phase_impure_elim(v_motive_56_, v_t_boxed_60_, v_h_58_, v_impure_59_);
lean_dec(v_impure_59_);
return v_res_61_;
}
}
static uint8_t _init_l_Lean_Compiler_LCNF_instInhabitedPhase_default(void){
_start:
{
uint8_t v___x_62_; 
v___x_62_ = 0;
return v___x_62_;
}
}
static uint8_t _init_l_Lean_Compiler_LCNF_instInhabitedPhase(void){
_start:
{
uint8_t v___x_63_; 
v___x_63_ = 0;
return v___x_63_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_ofNat(lean_object* v_n_64_){
_start:
{
lean_object* v___x_65_; uint8_t v___x_66_; 
v___x_65_ = lean_unsigned_to_nat(0u);
v___x_66_ = lean_nat_dec_le(v_n_64_, v___x_65_);
if (v___x_66_ == 0)
{
lean_object* v___x_67_; uint8_t v___x_68_; 
v___x_67_ = lean_unsigned_to_nat(1u);
v___x_68_ = lean_nat_dec_le(v_n_64_, v___x_67_);
if (v___x_68_ == 0)
{
uint8_t v___x_69_; 
v___x_69_ = 2;
return v___x_69_;
}
else
{
uint8_t v___x_70_; 
v___x_70_ = 1;
return v___x_70_;
}
}
else
{
uint8_t v___x_71_; 
v___x_71_ = 0;
return v___x_71_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_ofNat___boxed(lean_object* v_n_72_){
_start:
{
uint8_t v_res_73_; lean_object* v_r_74_; 
v_res_73_ = l_Lean_Compiler_LCNF_Phase_ofNat(v_n_72_);
lean_dec(v_n_72_);
v_r_74_ = lean_box(v_res_73_);
return v_r_74_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_instDecidableEqPhase(uint8_t v_x_75_, uint8_t v_y_76_){
_start:
{
lean_object* v___x_77_; lean_object* v___x_78_; uint8_t v___x_79_; 
v___x_77_ = l_Lean_Compiler_LCNF_Phase_ctorIdx(v_x_75_);
v___x_78_ = l_Lean_Compiler_LCNF_Phase_ctorIdx(v_y_76_);
v___x_79_ = lean_nat_dec_eq(v___x_77_, v___x_78_);
lean_dec(v___x_78_);
lean_dec(v___x_77_);
return v___x_79_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instDecidableEqPhase___boxed(lean_object* v_x_80_, lean_object* v_y_81_){
_start:
{
uint8_t v_x_20__boxed_82_; uint8_t v_y_21__boxed_83_; uint8_t v_res_84_; lean_object* v_r_85_; 
v_x_20__boxed_82_ = lean_unbox(v_x_80_);
v_y_21__boxed_83_ = lean_unbox(v_y_81_);
v_res_84_ = l_Lean_Compiler_LCNF_instDecidableEqPhase(v_x_20__boxed_82_, v_y_21__boxed_83_);
v_r_85_ = lean_box(v_res_84_);
return v_r_85_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t v_x_86_){
_start:
{
if (v_x_86_ == 2)
{
uint8_t v___x_87_; 
v___x_87_ = 1;
return v___x_87_;
}
else
{
uint8_t v___x_88_; 
v___x_88_ = 0;
return v___x_88_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Phase_toPurity___boxed(lean_object* v_x_89_){
_start:
{
uint8_t v_x_23__boxed_90_; uint8_t v_res_91_; lean_object* v_r_92_; 
v_x_23__boxed_90_ = lean_unbox(v_x_89_);
v_res_91_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_x_23__boxed_90_);
v_r_92_ = lean_box(v_res_91_);
return v_r_92_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_box(0);
v___x_94_ = lean_unsigned_to_nat(16u);
v___x_95_ = lean_mk_array(v___x_94_, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__0);
v___x_97_ = lean_unsigned_to_nat(0u);
v___x_98_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
lean_ctor_set(v___x_98_, 1, v___x_96_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__1);
v___x_100_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
lean_ctor_set(v___x_100_, 1, v___x_99_);
lean_ctor_set(v___x_100_, 2, v___x_99_);
lean_ctor_set(v___x_100_, 3, v___x_99_);
lean_ctor_set(v___x_100_, 4, v___x_99_);
lean_ctor_set(v___x_100_, 5, v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_unsigned_to_nat(1u);
v___x_102_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__2);
v___x_103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_103_, 0, v___x_102_);
lean_ctor_set(v___x_103_, 1, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default(void){
_start:
{
lean_object* v___x_104_; 
v___x_104_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default___closed__3);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState(void){
_start:
{
lean_object* v___x_105_; 
v___x_105_ = l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default;
return v___x_105_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0(void){
_start:
{
lean_object* v___x_106_; uint8_t v___x_107_; lean_object* v___x_108_; 
v___x_106_ = l_Lean_Compiler_LCNF_instInhabitedConfigOptions_default;
v___x_107_ = 0;
v___x_108_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_108_, 0, v___x_106_);
lean_ctor_set_uint8(v___x_108_, sizeof(void*)*1, v___x_107_);
return v___x_108_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default(void){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0, &l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0_once, _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default___closed__0);
return v___x_109_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext(void){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default;
return v___x_110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0(lean_object* v_00_u03b1_111_, lean_object* v___y_112_, lean_object* v___y_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_118_, 0, v___y_112_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object* v_00_u03b1_119_, lean_object* v___y_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0(v_00_u03b1_119_, v___y_120_, v___y_121_, v___y_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1(lean_object* v_00_u03b1_127_, lean_object* v_00_u03b2_128_, lean_object* v___y_129_, lean_object* v___y_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_){
_start:
{
lean_object* v___x_136_; 
lean_inc(v___y_134_);
lean_inc_ref(v___y_133_);
lean_inc(v___y_132_);
lean_inc_ref(v___y_131_);
v___x_136_ = lean_apply_5(v___y_129_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, lean_box(0));
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v_a_137_; lean_object* v___x_138_; 
v_a_137_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_a_137_);
lean_dec_ref_known(v___x_136_, 1);
lean_inc(v___y_134_);
lean_inc_ref(v___y_133_);
lean_inc(v___y_132_);
lean_inc_ref(v___y_131_);
v___x_138_ = lean_apply_6(v___y_130_, v_a_137_, v___y_131_, v___y_132_, v___y_133_, v___y_134_, lean_box(0));
return v___x_138_;
}
else
{
lean_object* v_a_139_; lean_object* v___x_141_; uint8_t v_isShared_142_; uint8_t v_isSharedCheck_146_; 
lean_dec_ref(v___y_130_);
v_a_139_ = lean_ctor_get(v___x_136_, 0);
v_isSharedCheck_146_ = !lean_is_exclusive(v___x_136_);
if (v_isSharedCheck_146_ == 0)
{
v___x_141_ = v___x_136_;
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
else
{
lean_inc(v_a_139_);
lean_dec(v___x_136_);
v___x_141_ = lean_box(0);
v_isShared_142_ = v_isSharedCheck_146_;
goto v_resetjp_140_;
}
v_resetjp_140_:
{
lean_object* v___x_144_; 
if (v_isShared_142_ == 0)
{
v___x_144_ = v___x_141_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_145_; 
v_reuseFailAlloc_145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_145_, 0, v_a_139_);
v___x_144_ = v_reuseFailAlloc_145_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
return v___x_144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object* v_00_u03b1_147_, lean_object* v_00_u03b2_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1(v_00_u03b1_147_, v_00_u03b2_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_, v___y_153_, v___y_154_);
lean_dec(v___y_154_);
lean_dec_ref(v___y_153_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
return v_res_156_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11(void){
_start:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__10));
v___x_181_ = l_StateRefT_x27_instMonad___redArg(v___x_180_);
return v___x_181_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadCompilerM(void){
_start:
{
lean_object* v___x_186_; lean_object* v_toApplicative_187_; lean_object* v_toFunctor_188_; lean_object* v_toSeq_189_; lean_object* v_toSeqLeft_190_; lean_object* v_toSeqRight_191_; lean_object* v___f_192_; lean_object* v___f_193_; lean_object* v___f_194_; lean_object* v___f_195_; lean_object* v___x_196_; lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v_toApplicative_203_; lean_object* v___x_205_; uint8_t v_isShared_206_; uint8_t v_isSharedCheck_230_; 
v___x_186_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11);
v_toApplicative_187_ = lean_ctor_get(v___x_186_, 0);
v_toFunctor_188_ = lean_ctor_get(v_toApplicative_187_, 0);
v_toSeq_189_ = lean_ctor_get(v_toApplicative_187_, 2);
v_toSeqLeft_190_ = lean_ctor_get(v_toApplicative_187_, 3);
v_toSeqRight_191_ = lean_ctor_get(v_toApplicative_187_, 4);
v___f_192_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__12));
v___f_193_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__13));
lean_inc_ref_n(v_toFunctor_188_, 2);
v___f_194_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_194_, 0, v_toFunctor_188_);
v___f_195_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_195_, 0, v_toFunctor_188_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___f_194_);
lean_ctor_set(v___x_196_, 1, v___f_195_);
lean_inc(v_toSeqRight_191_);
v___f_197_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_197_, 0, v_toSeqRight_191_);
lean_inc(v_toSeqLeft_190_);
v___f_198_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_198_, 0, v_toSeqLeft_190_);
lean_inc(v_toSeq_189_);
v___f_199_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_199_, 0, v_toSeq_189_);
v___x_200_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_200_, 0, v___x_196_);
lean_ctor_set(v___x_200_, 1, v___f_192_);
lean_ctor_set(v___x_200_, 2, v___f_199_);
lean_ctor_set(v___x_200_, 3, v___f_198_);
lean_ctor_set(v___x_200_, 4, v___f_197_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v___x_200_);
lean_ctor_set(v___x_201_, 1, v___f_193_);
v___x_202_ = l_StateRefT_x27_instMonad___redArg(v___x_201_);
v_toApplicative_203_ = lean_ctor_get(v___x_202_, 0);
v_isSharedCheck_230_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_230_ == 0)
{
lean_object* v_unused_231_; 
v_unused_231_ = lean_ctor_get(v___x_202_, 1);
lean_dec(v_unused_231_);
v___x_205_ = v___x_202_;
v_isShared_206_ = v_isSharedCheck_230_;
goto v_resetjp_204_;
}
else
{
lean_inc(v_toApplicative_203_);
lean_dec(v___x_202_);
v___x_205_ = lean_box(0);
v_isShared_206_ = v_isSharedCheck_230_;
goto v_resetjp_204_;
}
v_resetjp_204_:
{
lean_object* v_toFunctor_207_; lean_object* v_toSeq_208_; lean_object* v_toSeqLeft_209_; lean_object* v_toSeqRight_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_228_; 
v_toFunctor_207_ = lean_ctor_get(v_toApplicative_203_, 0);
v_toSeq_208_ = lean_ctor_get(v_toApplicative_203_, 2);
v_toSeqLeft_209_ = lean_ctor_get(v_toApplicative_203_, 3);
v_toSeqRight_210_ = lean_ctor_get(v_toApplicative_203_, 4);
v_isSharedCheck_228_ = !lean_is_exclusive(v_toApplicative_203_);
if (v_isSharedCheck_228_ == 0)
{
lean_object* v_unused_229_; 
v_unused_229_ = lean_ctor_get(v_toApplicative_203_, 1);
lean_dec(v_unused_229_);
v___x_212_ = v_toApplicative_203_;
v_isShared_213_ = v_isSharedCheck_228_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_toSeqRight_210_);
lean_inc(v_toSeqLeft_209_);
lean_inc(v_toSeq_208_);
lean_inc(v_toFunctor_207_);
lean_dec(v_toApplicative_203_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_228_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___f_214_; lean_object* v___f_215_; lean_object* v___f_216_; lean_object* v___f_217_; lean_object* v___x_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___x_223_; 
v___f_214_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__14));
v___f_215_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__15));
lean_inc_ref(v_toFunctor_207_);
v___f_216_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_216_, 0, v_toFunctor_207_);
v___f_217_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_217_, 0, v_toFunctor_207_);
v___x_218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_218_, 0, v___f_216_);
lean_ctor_set(v___x_218_, 1, v___f_217_);
v___f_219_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_219_, 0, v_toSeqRight_210_);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_220_, 0, v_toSeqLeft_209_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_221_, 0, v_toSeq_208_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 4, v___f_219_);
lean_ctor_set(v___x_212_, 3, v___f_220_);
lean_ctor_set(v___x_212_, 2, v___f_221_);
lean_ctor_set(v___x_212_, 1, v___f_214_);
lean_ctor_set(v___x_212_, 0, v___x_218_);
v___x_223_ = v___x_212_;
goto v_reusejp_222_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v___x_218_);
lean_ctor_set(v_reuseFailAlloc_227_, 1, v___f_214_);
lean_ctor_set(v_reuseFailAlloc_227_, 2, v___f_221_);
lean_ctor_set(v_reuseFailAlloc_227_, 3, v___f_220_);
lean_ctor_set(v_reuseFailAlloc_227_, 4, v___f_219_);
v___x_223_ = v_reuseFailAlloc_227_;
goto v_reusejp_222_;
}
v_reusejp_222_:
{
lean_object* v___x_225_; 
if (v_isShared_206_ == 0)
{
lean_ctor_set(v___x_205_, 1, v___f_215_);
lean_ctor_set(v___x_205_, 0, v___x_223_);
v___x_225_ = v___x_205_;
goto v_reusejp_224_;
}
else
{
lean_object* v_reuseFailAlloc_226_; 
v_reuseFailAlloc_226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_226_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_226_, 1, v___f_215_);
v___x_225_ = v_reuseFailAlloc_226_;
goto v_reusejp_224_;
}
v_reusejp_224_:
{
return v___x_225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg(uint8_t v_phase_232_, lean_object* v_x_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_){
_start:
{
lean_object* v_config_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v_config_239_ = lean_ctor_get(v___y_234_, 0);
lean_inc_ref(v_config_239_);
v___x_240_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_240_, 0, v_config_239_);
lean_ctor_set_uint8(v___x_240_, sizeof(void*)*1, v_phase_232_);
lean_inc(v___y_237_);
lean_inc_ref(v___y_236_);
lean_inc(v___y_235_);
v___x_241_ = lean_apply_5(v_x_233_, v___x_240_, v___y_235_, v___y_236_, v___y_237_, lean_box(0));
return v___x_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___redArg___boxed(lean_object* v_phase_242_, lean_object* v_x_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_, lean_object* v___y_247_, lean_object* v___y_248_){
_start:
{
uint8_t v_phase_boxed_249_; lean_object* v_res_250_; 
v_phase_boxed_249_ = lean_unbox(v_phase_242_);
v_res_250_ = l_Lean_Compiler_LCNF_withPhase___redArg(v_phase_boxed_249_, v_x_243_, v___y_244_, v___y_245_, v___y_246_, v___y_247_);
lean_dec(v___y_247_);
lean_dec_ref(v___y_246_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase(lean_object* v_00_u03b1_251_, uint8_t v_phase_252_, lean_object* v_x_253_, lean_object* v___y_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_){
_start:
{
lean_object* v_config_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_config_259_ = lean_ctor_get(v___y_254_, 0);
lean_inc_ref(v_config_259_);
v___x_260_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_260_, 0, v_config_259_);
lean_ctor_set_uint8(v___x_260_, sizeof(void*)*1, v_phase_252_);
lean_inc(v___y_257_);
lean_inc_ref(v___y_256_);
lean_inc(v___y_255_);
v___x_261_ = lean_apply_5(v_x_253_, v___x_260_, v___y_255_, v___y_256_, v___y_257_, lean_box(0));
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withPhase___boxed(lean_object* v_00_u03b1_262_, lean_object* v_phase_263_, lean_object* v_x_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_, lean_object* v___y_268_, lean_object* v___y_269_){
_start:
{
uint8_t v_phase_boxed_270_; lean_object* v_res_271_; 
v_phase_boxed_270_ = lean_unbox(v_phase_263_);
v_res_271_ = l_Lean_Compiler_LCNF_withPhase(v_00_u03b1_262_, v_phase_boxed_270_, v_x_264_, v___y_265_, v___y_266_, v___y_267_, v___y_268_);
lean_dec(v___y_268_);
lean_dec_ref(v___y_267_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object* v___y_272_){
_start:
{
uint8_t v_phase_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v_phase_274_ = lean_ctor_get_uint8(v___y_272_, sizeof(void*)*1);
v___x_275_ = lean_box(v_phase_274_);
v___x_276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_276_, 0, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___redArg___boxed(lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_277_);
lean_dec_ref(v___y_277_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase(lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_){
_start:
{
lean_object* v___x_285_; 
v___x_285_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_280_);
return v___x_285_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPhase___boxed(lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_){
_start:
{
lean_object* v_res_291_; 
v_res_291_ = l_Lean_Compiler_LCNF_getPhase(v___y_286_, v___y_287_, v___y_288_, v___y_289_);
lean_dec(v___y_289_);
lean_dec_ref(v___y_288_);
lean_dec(v___y_287_);
lean_dec_ref(v___y_286_);
return v_res_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object* v___y_292_){
_start:
{
lean_object* v___x_294_; lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_305_; 
v___x_294_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_292_);
v_a_295_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_305_ == 0)
{
v___x_297_ = v___x_294_;
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_294_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
uint8_t v___x_299_; uint8_t v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_299_ = lean_unbox(v_a_295_);
lean_dec(v_a_295_);
v___x_300_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_299_);
v___x_301_ = lean_box(v___x_300_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_301_);
v___x_303_ = v___x_297_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___redArg___boxed(lean_object* v___y_306_, lean_object* v___y_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_306_);
lean_dec_ref(v___y_306_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity(lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_, lean_object* v___y_312_){
_start:
{
lean_object* v___x_314_; 
v___x_314_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_309_);
return v___x_314_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getPurity___boxed(lean_object* v___y_315_, lean_object* v___y_316_, lean_object* v___y_317_, lean_object* v___y_318_, lean_object* v___y_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Lean_Compiler_LCNF_getPurity(v___y_315_, v___y_316_, v___y_317_, v___y_318_);
lean_dec(v___y_318_);
lean_dec_ref(v___y_317_);
lean_dec(v___y_316_);
lean_dec_ref(v___y_315_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg(lean_object* v___y_321_){
_start:
{
lean_object* v___x_323_; lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_339_; 
v___x_323_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_321_);
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_339_ == 0)
{
v___x_326_ = v___x_323_;
v_isShared_327_ = v_isSharedCheck_339_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_339_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
uint8_t v___x_328_; 
v___x_328_ = lean_unbox(v_a_324_);
lean_dec(v_a_324_);
if (v___x_328_ == 0)
{
uint8_t v___x_329_; lean_object* v___x_330_; lean_object* v___x_332_; 
v___x_329_ = 1;
v___x_330_ = lean_box(v___x_329_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 0, v___x_330_);
v___x_332_ = v___x_326_;
goto v_reusejp_331_;
}
else
{
lean_object* v_reuseFailAlloc_333_; 
v_reuseFailAlloc_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_333_, 0, v___x_330_);
v___x_332_ = v_reuseFailAlloc_333_;
goto v_reusejp_331_;
}
v_reusejp_331_:
{
return v___x_332_;
}
}
else
{
uint8_t v___x_334_; lean_object* v___x_335_; lean_object* v___x_337_; 
v___x_334_ = 0;
v___x_335_ = lean_box(v___x_334_);
if (v_isShared_327_ == 0)
{
lean_ctor_set(v___x_326_, 0, v___x_335_);
v___x_337_ = v___x_326_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_335_);
v___x_337_ = v_reuseFailAlloc_338_;
goto v_reusejp_336_;
}
v_reusejp_336_:
{
return v___x_337_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___redArg___boxed(lean_object* v___y_340_, lean_object* v___y_341_){
_start:
{
lean_object* v_res_342_; 
v_res_342_ = l_Lean_Compiler_LCNF_inBasePhase___redArg(v___y_340_);
lean_dec_ref(v___y_340_);
return v_res_342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase(lean_object* v___y_343_, lean_object* v___y_344_, lean_object* v___y_345_, lean_object* v___y_346_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = l_Lean_Compiler_LCNF_inBasePhase___redArg(v___y_343_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_inBasePhase___boxed(lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_){
_start:
{
lean_object* v_res_354_; 
v_res_354_ = l_Lean_Compiler_LCNF_inBasePhase(v___y_349_, v___y_350_, v___y_351_, v___y_352_);
lean_dec(v___y_352_);
lean_dec_ref(v___y_351_);
lean_dec(v___y_350_);
lean_dec_ref(v___y_349_);
return v_res_354_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0(void){
_start:
{
lean_object* v___x_355_; 
v___x_355_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_355_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1(void){
_start:
{
lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_356_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0);
v___x_357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
return v___x_357_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; 
v___x_358_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__1);
v___x_359_ = lean_unsigned_to_nat(0u);
v___x_360_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_360_, 0, v___x_359_);
lean_ctor_set(v___x_360_, 1, v___x_359_);
lean_ctor_set(v___x_360_, 2, v___x_359_);
lean_ctor_set(v___x_360_, 3, v___x_359_);
lean_ctor_set(v___x_360_, 4, v___x_358_);
lean_ctor_set(v___x_360_, 5, v___x_358_);
lean_ctor_set(v___x_360_, 6, v___x_358_);
lean_ctor_set(v___x_360_, 7, v___x_358_);
lean_ctor_set(v___x_360_, 8, v___x_358_);
lean_ctor_set(v___x_360_, 9, v___x_358_);
lean_ctor_set(v___x_360_, 10, v___x_358_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0(lean_object* v_msgData_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
lean_object* v___x_367_; lean_object* v_env_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_367_ = lean_st_ref_get(v___y_365_);
v_env_368_ = lean_ctor_get(v___x_367_, 0);
lean_inc_ref(v_env_368_);
lean_dec(v___x_367_);
v___x_369_ = lean_st_ref_get(v___y_363_);
v___x_370_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_362_);
if (lean_obj_tag(v___x_370_) == 0)
{
lean_object* v_toCold_371_; lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_393_; 
v_toCold_371_ = lean_ctor_get(v___y_364_, 0);
v_a_372_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_393_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_393_ == 0)
{
v___x_374_ = v___x_370_;
v_isShared_375_ = v_isSharedCheck_393_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_370_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_393_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v_lctx_376_; lean_object* v___x_378_; uint8_t v_isShared_379_; uint8_t v_isSharedCheck_391_; 
v_lctx_376_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_391_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_391_ == 0)
{
lean_object* v_unused_392_; 
v_unused_392_ = lean_ctor_get(v___x_369_, 1);
lean_dec(v_unused_392_);
v___x_378_ = v___x_369_;
v_isShared_379_ = v_isSharedCheck_391_;
goto v_resetjp_377_;
}
else
{
lean_inc(v_lctx_376_);
lean_dec(v___x_369_);
v___x_378_ = lean_box(0);
v_isShared_379_ = v_isSharedCheck_391_;
goto v_resetjp_377_;
}
v_resetjp_377_:
{
lean_object* v_options_380_; uint8_t v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v_options_380_ = lean_ctor_get(v_toCold_371_, 2);
v___x_381_ = lean_unbox(v_a_372_);
lean_dec(v_a_372_);
v___x_382_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_376_, v___x_381_);
lean_dec_ref(v_lctx_376_);
v___x_383_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2);
lean_inc_ref(v_options_380_);
v___x_384_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_384_, 0, v_env_368_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
lean_ctor_set(v___x_384_, 2, v___x_382_);
lean_ctor_set(v___x_384_, 3, v_options_380_);
if (v_isShared_379_ == 0)
{
lean_ctor_set_tag(v___x_378_, 3);
lean_ctor_set(v___x_378_, 1, v_msgData_361_);
lean_ctor_set(v___x_378_, 0, v___x_384_);
v___x_386_ = v___x_378_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v___x_384_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_msgData_361_);
v___x_386_ = v_reuseFailAlloc_390_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
lean_object* v___x_388_; 
if (v_isShared_375_ == 0)
{
lean_ctor_set(v___x_374_, 0, v___x_386_);
v___x_388_ = v___x_374_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
}
}
}
else
{
lean_object* v_a_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_401_; 
lean_dec(v___x_369_);
lean_dec_ref(v_env_368_);
lean_dec_ref(v_msgData_361_);
v_a_394_ = lean_ctor_get(v___x_370_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_370_);
if (v_isSharedCheck_401_ == 0)
{
v___x_396_ = v___x_370_;
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_a_394_);
lean_dec(v___x_370_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_401_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_399_; 
if (v_isShared_397_ == 0)
{
v___x_399_ = v___x_396_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v_a_394_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object* v_msgData_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_, lean_object* v___y_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0(v_msgData_402_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec(v___y_406_);
lean_dec_ref(v___y_405_);
lean_dec(v___y_404_);
lean_dec_ref(v___y_403_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(lean_object* v_msg_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_toCold_417_; lean_object* v_ref_418_; lean_object* v___x_419_; lean_object* v_env_420_; lean_object* v___x_421_; lean_object* v___x_422_; 
v_toCold_417_ = lean_ctor_get(v___y_414_, 0);
v_ref_418_ = lean_ctor_get(v___y_414_, 2);
v___x_419_ = lean_st_ref_get(v___y_415_);
v_env_420_ = lean_ctor_get(v___x_419_, 0);
lean_inc_ref(v_env_420_);
lean_dec(v___x_419_);
v___x_421_ = lean_st_ref_get(v___y_413_);
v___x_422_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_412_);
if (lean_obj_tag(v___x_422_) == 0)
{
lean_object* v_a_423_; lean_object* v___x_425_; uint8_t v_isShared_426_; uint8_t v_isSharedCheck_445_; 
v_a_423_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_445_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_445_ == 0)
{
v___x_425_ = v___x_422_;
v_isShared_426_ = v_isSharedCheck_445_;
goto v_resetjp_424_;
}
else
{
lean_inc(v_a_423_);
lean_dec(v___x_422_);
v___x_425_ = lean_box(0);
v_isShared_426_ = v_isSharedCheck_445_;
goto v_resetjp_424_;
}
v_resetjp_424_:
{
lean_object* v_lctx_427_; lean_object* v___x_429_; uint8_t v_isShared_430_; uint8_t v_isSharedCheck_443_; 
v_lctx_427_ = lean_ctor_get(v___x_421_, 0);
v_isSharedCheck_443_ = !lean_is_exclusive(v___x_421_);
if (v_isSharedCheck_443_ == 0)
{
lean_object* v_unused_444_; 
v_unused_444_ = lean_ctor_get(v___x_421_, 1);
lean_dec(v_unused_444_);
v___x_429_ = v___x_421_;
v_isShared_430_ = v_isSharedCheck_443_;
goto v_resetjp_428_;
}
else
{
lean_inc(v_lctx_427_);
lean_dec(v___x_421_);
v___x_429_ = lean_box(0);
v_isShared_430_ = v_isSharedCheck_443_;
goto v_resetjp_428_;
}
v_resetjp_428_:
{
lean_object* v_options_431_; uint8_t v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_437_; 
v_options_431_ = lean_ctor_get(v_toCold_417_, 2);
v___x_432_ = lean_unbox(v_a_423_);
lean_dec(v_a_423_);
v___x_433_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_427_, v___x_432_);
lean_dec_ref(v_lctx_427_);
v___x_434_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__2);
lean_inc_ref(v_options_431_);
v___x_435_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_435_, 0, v_env_420_);
lean_ctor_set(v___x_435_, 1, v___x_434_);
lean_ctor_set(v___x_435_, 2, v___x_433_);
lean_ctor_set(v___x_435_, 3, v_options_431_);
if (v_isShared_430_ == 0)
{
lean_ctor_set_tag(v___x_429_, 3);
lean_ctor_set(v___x_429_, 1, v_msg_411_);
lean_ctor_set(v___x_429_, 0, v___x_435_);
v___x_437_ = v___x_429_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_442_; 
v_reuseFailAlloc_442_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_442_, 0, v___x_435_);
lean_ctor_set(v_reuseFailAlloc_442_, 1, v_msg_411_);
v___x_437_ = v_reuseFailAlloc_442_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v___x_438_; lean_object* v___x_440_; 
lean_inc(v_ref_418_);
v___x_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_438_, 0, v_ref_418_);
lean_ctor_set(v___x_438_, 1, v___x_437_);
if (v_isShared_426_ == 0)
{
lean_ctor_set_tag(v___x_425_, 1);
lean_ctor_set(v___x_425_, 0, v___x_438_);
v___x_440_ = v___x_425_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v___x_438_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
}
else
{
lean_object* v_a_446_; lean_object* v___x_448_; uint8_t v_isShared_449_; uint8_t v_isSharedCheck_453_; 
lean_dec(v___x_421_);
lean_dec_ref(v_env_420_);
lean_dec_ref(v_msg_411_);
v_a_446_ = lean_ctor_get(v___x_422_, 0);
v_isSharedCheck_453_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_453_ == 0)
{
v___x_448_ = v___x_422_;
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
else
{
lean_inc(v_a_446_);
lean_dec(v___x_422_);
v___x_448_ = lean_box(0);
v_isShared_449_ = v_isSharedCheck_453_;
goto v_resetjp_447_;
}
v_resetjp_447_:
{
lean_object* v___x_451_; 
if (v_isShared_449_ == 0)
{
v___x_451_ = v___x_448_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v_a_446_);
v___x_451_ = v_reuseFailAlloc_452_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
return v___x_451_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg___boxed(lean_object* v_msg_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_){
_start:
{
lean_object* v_res_460_; 
v_res_460_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v_msg_454_, v___y_455_, v___y_456_, v___y_457_, v___y_458_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1(lean_object* v_00_u03b1_461_, lean_object* v_msg_462_, lean_object* v___y_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_){
_start:
{
lean_object* v___x_468_; 
v___x_468_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v_msg_462_, v___y_463_, v___y_464_, v___y_465_, v___y_466_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___boxed(lean_object* v_00_u03b1_469_, lean_object* v_msg_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_){
_start:
{
lean_object* v_res_476_; 
v_res_476_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1(v_00_u03b1_469_, v_msg_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
return v_res_476_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(lean_object* v_a_477_, lean_object* v_x_478_){
_start:
{
if (lean_obj_tag(v_x_478_) == 0)
{
lean_object* v___x_479_; 
v___x_479_ = lean_box(0);
return v___x_479_;
}
else
{
lean_object* v_key_480_; lean_object* v_value_481_; lean_object* v_tail_482_; uint8_t v___x_483_; 
v_key_480_ = lean_ctor_get(v_x_478_, 0);
v_value_481_ = lean_ctor_get(v_x_478_, 1);
v_tail_482_ = lean_ctor_get(v_x_478_, 2);
v___x_483_ = l_Lean_instBEqFVarId_beq(v_key_480_, v_a_477_);
if (v___x_483_ == 0)
{
v_x_478_ = v_tail_482_;
goto _start;
}
else
{
lean_object* v___x_485_; 
lean_inc(v_value_481_);
v___x_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_485_, 0, v_value_481_);
return v___x_485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg___boxed(lean_object* v_a_486_, lean_object* v_x_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(v_a_486_, v_x_487_);
lean_dec(v_x_487_);
lean_dec(v_a_486_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(lean_object* v_m_489_, lean_object* v_a_490_){
_start:
{
lean_object* v_buckets_491_; lean_object* v___x_492_; uint64_t v___x_493_; uint64_t v___x_494_; uint64_t v___x_495_; uint64_t v_fold_496_; uint64_t v___x_497_; uint64_t v___x_498_; uint64_t v___x_499_; size_t v___x_500_; size_t v___x_501_; size_t v___x_502_; size_t v___x_503_; size_t v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v_buckets_491_ = lean_ctor_get(v_m_489_, 1);
v___x_492_ = lean_array_get_size(v_buckets_491_);
v___x_493_ = l_Lean_instHashableFVarId_hash(v_a_490_);
v___x_494_ = 32ULL;
v___x_495_ = lean_uint64_shift_right(v___x_493_, v___x_494_);
v_fold_496_ = lean_uint64_xor(v___x_493_, v___x_495_);
v___x_497_ = 16ULL;
v___x_498_ = lean_uint64_shift_right(v_fold_496_, v___x_497_);
v___x_499_ = lean_uint64_xor(v_fold_496_, v___x_498_);
v___x_500_ = lean_uint64_to_usize(v___x_499_);
v___x_501_ = lean_usize_of_nat(v___x_492_);
v___x_502_ = ((size_t)1ULL);
v___x_503_ = lean_usize_sub(v___x_501_, v___x_502_);
v___x_504_ = lean_usize_land(v___x_500_, v___x_503_);
v___x_505_ = lean_array_uget_borrowed(v_buckets_491_, v___x_504_);
v___x_506_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(v_a_490_, v___x_505_);
return v___x_506_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg___boxed(lean_object* v_m_507_, lean_object* v_a_508_){
_start:
{
lean_object* v_res_509_; 
v_res_509_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_m_507_, v_a_508_);
lean_dec(v_a_508_);
lean_dec_ref(v_m_507_);
return v_res_509_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getType___closed__1(void){
_start:
{
lean_object* v___x_511_; lean_object* v___x_512_; 
v___x_511_ = ((lean_object*)(l_Lean_Compiler_LCNF_getType___closed__0));
v___x_512_ = l_Lean_stringToMessageData(v___x_511_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType(lean_object* v_fvarId_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_){
_start:
{
lean_object* v___x_519_; lean_object* v_lctx_520_; lean_object* v___x_522_; uint8_t v_isShared_523_; uint8_t v_isSharedCheck_585_; 
v___x_519_ = lean_st_ref_get(v___y_515_);
v_lctx_520_ = lean_ctor_get(v___x_519_, 0);
v_isSharedCheck_585_ = !lean_is_exclusive(v___x_519_);
if (v_isSharedCheck_585_ == 0)
{
lean_object* v_unused_586_; 
v_unused_586_ = lean_ctor_get(v___x_519_, 1);
lean_dec(v_unused_586_);
v___x_522_ = v___x_519_;
v_isShared_523_ = v_isSharedCheck_585_;
goto v_resetjp_521_;
}
else
{
lean_inc(v_lctx_520_);
lean_dec(v___x_519_);
v___x_522_ = lean_box(0);
v_isShared_523_ = v_isSharedCheck_585_;
goto v_resetjp_521_;
}
v_resetjp_521_:
{
lean_object* v___x_524_; 
v___x_524_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_514_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_576_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_576_ == 0)
{
v___x_527_ = v___x_524_;
v_isShared_528_ = v_isSharedCheck_576_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_524_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_576_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___y_530_; lean_object* v___y_544_; lean_object* v___y_559_; uint8_t v___x_573_; 
v___x_573_ = lean_unbox(v_a_525_);
if (v___x_573_ == 0)
{
lean_object* v_letDeclsPure_574_; 
v_letDeclsPure_574_ = lean_ctor_get(v_lctx_520_, 2);
lean_inc_ref(v_letDeclsPure_574_);
v___y_559_ = v_letDeclsPure_574_;
goto v___jp_558_;
}
else
{
lean_object* v_letDeclsImpure_575_; 
v_letDeclsImpure_575_ = lean_ctor_get(v_lctx_520_, 3);
lean_inc_ref(v_letDeclsImpure_575_);
v___y_559_ = v_letDeclsImpure_575_;
goto v___jp_558_;
}
v___jp_529_:
{
lean_object* v___x_531_; 
v___x_531_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_530_, v_fvarId_513_);
lean_dec_ref(v___y_530_);
if (lean_obj_tag(v___x_531_) == 1)
{
lean_object* v_val_532_; lean_object* v_type_533_; lean_object* v___x_535_; 
lean_del_object(v___x_522_);
lean_dec(v_fvarId_513_);
v_val_532_ = lean_ctor_get(v___x_531_, 0);
lean_inc(v_val_532_);
lean_dec_ref_known(v___x_531_, 1);
v_type_533_ = lean_ctor_get(v_val_532_, 3);
lean_inc_ref(v_type_533_);
lean_dec(v_val_532_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v_type_533_);
v___x_535_ = v___x_527_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_536_; 
v_reuseFailAlloc_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_536_, 0, v_type_533_);
v___x_535_ = v_reuseFailAlloc_536_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
return v___x_535_;
}
}
else
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_540_; 
lean_dec(v___x_531_);
lean_del_object(v___x_527_);
v___x_537_ = lean_obj_once(&l_Lean_Compiler_LCNF_getType___closed__1, &l_Lean_Compiler_LCNF_getType___closed__1_once, _init_l_Lean_Compiler_LCNF_getType___closed__1);
v___x_538_ = l_Lean_MessageData_ofName(v_fvarId_513_);
if (v_isShared_523_ == 0)
{
lean_ctor_set_tag(v___x_522_, 7);
lean_ctor_set(v___x_522_, 1, v___x_538_);
lean_ctor_set(v___x_522_, 0, v___x_537_);
v___x_540_ = v___x_522_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_542_; 
v_reuseFailAlloc_542_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_542_, 0, v___x_537_);
lean_ctor_set(v_reuseFailAlloc_542_, 1, v___x_538_);
v___x_540_ = v_reuseFailAlloc_542_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
lean_object* v___x_541_; 
v___x_541_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_540_, v___y_514_, v___y_515_, v___y_516_, v___y_517_);
return v___x_541_;
}
}
}
v___jp_543_:
{
lean_object* v___x_545_; 
v___x_545_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_544_, v_fvarId_513_);
lean_dec_ref(v___y_544_);
if (lean_obj_tag(v___x_545_) == 1)
{
lean_object* v_val_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_554_; 
lean_del_object(v___x_527_);
lean_dec(v_a_525_);
lean_del_object(v___x_522_);
lean_dec_ref(v_lctx_520_);
lean_dec(v_fvarId_513_);
v_val_546_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_554_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_554_ == 0)
{
v___x_548_ = v___x_545_;
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_val_546_);
lean_dec(v___x_545_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_554_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v_type_550_; lean_object* v___x_552_; 
v_type_550_ = lean_ctor_get(v_val_546_, 2);
lean_inc_ref(v_type_550_);
lean_dec(v_val_546_);
if (v_isShared_549_ == 0)
{
lean_ctor_set_tag(v___x_548_, 0);
lean_ctor_set(v___x_548_, 0, v_type_550_);
v___x_552_ = v___x_548_;
goto v_reusejp_551_;
}
else
{
lean_object* v_reuseFailAlloc_553_; 
v_reuseFailAlloc_553_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_553_, 0, v_type_550_);
v___x_552_ = v_reuseFailAlloc_553_;
goto v_reusejp_551_;
}
v_reusejp_551_:
{
return v___x_552_;
}
}
}
else
{
uint8_t v___x_555_; 
lean_dec(v___x_545_);
v___x_555_ = lean_unbox(v_a_525_);
lean_dec(v_a_525_);
if (v___x_555_ == 0)
{
lean_object* v_funDeclsPure_556_; 
v_funDeclsPure_556_ = lean_ctor_get(v_lctx_520_, 4);
lean_inc_ref(v_funDeclsPure_556_);
lean_dec_ref(v_lctx_520_);
v___y_530_ = v_funDeclsPure_556_;
goto v___jp_529_;
}
else
{
lean_object* v_funDeclsImpure_557_; 
v_funDeclsImpure_557_ = lean_ctor_get(v_lctx_520_, 5);
lean_inc_ref(v_funDeclsImpure_557_);
lean_dec_ref(v_lctx_520_);
v___y_530_ = v_funDeclsImpure_557_;
goto v___jp_529_;
}
}
}
v___jp_558_:
{
lean_object* v___x_560_; 
v___x_560_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_559_, v_fvarId_513_);
lean_dec_ref(v___y_559_);
if (lean_obj_tag(v___x_560_) == 1)
{
lean_object* v_val_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_569_; 
lean_del_object(v___x_527_);
lean_dec(v_a_525_);
lean_del_object(v___x_522_);
lean_dec_ref(v_lctx_520_);
lean_dec(v_fvarId_513_);
v_val_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_569_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_569_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_569_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_val_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_569_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
lean_object* v_type_565_; lean_object* v___x_567_; 
v_type_565_ = lean_ctor_get(v_val_561_, 2);
lean_inc_ref(v_type_565_);
lean_dec(v_val_561_);
if (v_isShared_564_ == 0)
{
lean_ctor_set_tag(v___x_563_, 0);
lean_ctor_set(v___x_563_, 0, v_type_565_);
v___x_567_ = v___x_563_;
goto v_reusejp_566_;
}
else
{
lean_object* v_reuseFailAlloc_568_; 
v_reuseFailAlloc_568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_568_, 0, v_type_565_);
v___x_567_ = v_reuseFailAlloc_568_;
goto v_reusejp_566_;
}
v_reusejp_566_:
{
return v___x_567_;
}
}
}
else
{
uint8_t v___x_570_; 
lean_dec(v___x_560_);
v___x_570_ = lean_unbox(v_a_525_);
if (v___x_570_ == 0)
{
lean_object* v_paramsPure_571_; 
v_paramsPure_571_ = lean_ctor_get(v_lctx_520_, 0);
lean_inc_ref(v_paramsPure_571_);
v___y_544_ = v_paramsPure_571_;
goto v___jp_543_;
}
else
{
lean_object* v_paramsImpure_572_; 
v_paramsImpure_572_ = lean_ctor_get(v_lctx_520_, 1);
lean_inc_ref(v_paramsImpure_572_);
v___y_544_ = v_paramsImpure_572_;
goto v___jp_543_;
}
}
}
}
}
else
{
lean_object* v_a_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_584_; 
lean_del_object(v___x_522_);
lean_dec_ref(v_lctx_520_);
lean_dec(v_fvarId_513_);
v_a_577_ = lean_ctor_get(v___x_524_, 0);
v_isSharedCheck_584_ = !lean_is_exclusive(v___x_524_);
if (v_isSharedCheck_584_ == 0)
{
v___x_579_ = v___x_524_;
v_isShared_580_ = v_isSharedCheck_584_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_a_577_);
lean_dec(v___x_524_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getType___boxed(lean_object* v_fvarId_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_){
_start:
{
lean_object* v_res_593_; 
v_res_593_ = l_Lean_Compiler_LCNF_getType(v_fvarId_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_);
lean_dec(v___y_591_);
lean_dec_ref(v___y_590_);
lean_dec(v___y_589_);
lean_dec_ref(v___y_588_);
return v_res_593_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0(lean_object* v_00_u03b2_594_, lean_object* v_m_595_, lean_object* v_a_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_m_595_, v_a_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___boxed(lean_object* v_00_u03b2_598_, lean_object* v_m_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0(v_00_u03b2_598_, v_m_599_, v_a_600_);
lean_dec(v_a_600_);
lean_dec_ref(v_m_599_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0(lean_object* v_00_u03b2_602_, lean_object* v_a_603_, lean_object* v_x_604_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___redArg(v_a_603_, v_x_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0___boxed(lean_object* v_00_u03b2_606_, lean_object* v_a_607_, lean_object* v_x_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0_spec__0(v_00_u03b2_606_, v_a_607_, v_x_608_);
lean_dec(v_x_608_);
lean_dec(v_a_607_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName(lean_object* v_fvarId_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_){
_start:
{
lean_object* v___x_616_; lean_object* v_lctx_617_; lean_object* v___x_619_; uint8_t v_isShared_620_; uint8_t v_isSharedCheck_682_; 
v___x_616_ = lean_st_ref_get(v___y_612_);
v_lctx_617_ = lean_ctor_get(v___x_616_, 0);
v_isSharedCheck_682_ = !lean_is_exclusive(v___x_616_);
if (v_isSharedCheck_682_ == 0)
{
lean_object* v_unused_683_; 
v_unused_683_ = lean_ctor_get(v___x_616_, 1);
lean_dec(v_unused_683_);
v___x_619_ = v___x_616_;
v_isShared_620_ = v_isSharedCheck_682_;
goto v_resetjp_618_;
}
else
{
lean_inc(v_lctx_617_);
lean_dec(v___x_616_);
v___x_619_ = lean_box(0);
v_isShared_620_ = v_isSharedCheck_682_;
goto v_resetjp_618_;
}
v_resetjp_618_:
{
lean_object* v___x_621_; 
v___x_621_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_611_);
if (lean_obj_tag(v___x_621_) == 0)
{
lean_object* v_a_622_; lean_object* v___x_624_; uint8_t v_isShared_625_; uint8_t v_isSharedCheck_673_; 
v_a_622_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_673_ == 0)
{
v___x_624_ = v___x_621_;
v_isShared_625_ = v_isSharedCheck_673_;
goto v_resetjp_623_;
}
else
{
lean_inc(v_a_622_);
lean_dec(v___x_621_);
v___x_624_ = lean_box(0);
v_isShared_625_ = v_isSharedCheck_673_;
goto v_resetjp_623_;
}
v_resetjp_623_:
{
lean_object* v___y_627_; lean_object* v___y_641_; lean_object* v___y_656_; uint8_t v___x_670_; 
v___x_670_ = lean_unbox(v_a_622_);
if (v___x_670_ == 0)
{
lean_object* v_letDeclsPure_671_; 
v_letDeclsPure_671_ = lean_ctor_get(v_lctx_617_, 2);
lean_inc_ref(v_letDeclsPure_671_);
v___y_656_ = v_letDeclsPure_671_;
goto v___jp_655_;
}
else
{
lean_object* v_letDeclsImpure_672_; 
v_letDeclsImpure_672_ = lean_ctor_get(v_lctx_617_, 3);
lean_inc_ref(v_letDeclsImpure_672_);
v___y_656_ = v_letDeclsImpure_672_;
goto v___jp_655_;
}
v___jp_626_:
{
lean_object* v___x_628_; 
v___x_628_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_627_, v_fvarId_610_);
lean_dec_ref(v___y_627_);
if (lean_obj_tag(v___x_628_) == 1)
{
lean_object* v_val_629_; lean_object* v_binderName_630_; lean_object* v___x_632_; 
lean_del_object(v___x_619_);
lean_dec(v_fvarId_610_);
v_val_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_val_629_);
lean_dec_ref_known(v___x_628_, 1);
v_binderName_630_ = lean_ctor_get(v_val_629_, 1);
lean_inc(v_binderName_630_);
lean_dec(v_val_629_);
if (v_isShared_625_ == 0)
{
lean_ctor_set(v___x_624_, 0, v_binderName_630_);
v___x_632_ = v___x_624_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_binderName_630_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
else
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_637_; 
lean_dec(v___x_628_);
lean_del_object(v___x_624_);
v___x_634_ = lean_obj_once(&l_Lean_Compiler_LCNF_getType___closed__1, &l_Lean_Compiler_LCNF_getType___closed__1_once, _init_l_Lean_Compiler_LCNF_getType___closed__1);
v___x_635_ = l_Lean_MessageData_ofName(v_fvarId_610_);
if (v_isShared_620_ == 0)
{
lean_ctor_set_tag(v___x_619_, 7);
lean_ctor_set(v___x_619_, 1, v___x_635_);
lean_ctor_set(v___x_619_, 0, v___x_634_);
v___x_637_ = v___x_619_;
goto v_reusejp_636_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_634_);
lean_ctor_set(v_reuseFailAlloc_639_, 1, v___x_635_);
v___x_637_ = v_reuseFailAlloc_639_;
goto v_reusejp_636_;
}
v_reusejp_636_:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_637_, v___y_611_, v___y_612_, v___y_613_, v___y_614_);
return v___x_638_;
}
}
}
v___jp_640_:
{
lean_object* v___x_642_; 
v___x_642_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_641_, v_fvarId_610_);
lean_dec_ref(v___y_641_);
if (lean_obj_tag(v___x_642_) == 1)
{
lean_object* v_val_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_651_; 
lean_del_object(v___x_624_);
lean_dec(v_a_622_);
lean_del_object(v___x_619_);
lean_dec_ref(v_lctx_617_);
lean_dec(v_fvarId_610_);
v_val_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_651_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_651_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_val_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_651_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v_binderName_647_; lean_object* v___x_649_; 
v_binderName_647_ = lean_ctor_get(v_val_643_, 1);
lean_inc(v_binderName_647_);
lean_dec(v_val_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set_tag(v___x_645_, 0);
lean_ctor_set(v___x_645_, 0, v_binderName_647_);
v___x_649_ = v___x_645_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_650_; 
v_reuseFailAlloc_650_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_650_, 0, v_binderName_647_);
v___x_649_ = v_reuseFailAlloc_650_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
return v___x_649_;
}
}
}
else
{
uint8_t v___x_652_; 
lean_dec(v___x_642_);
v___x_652_ = lean_unbox(v_a_622_);
lean_dec(v_a_622_);
if (v___x_652_ == 0)
{
lean_object* v_funDeclsPure_653_; 
v_funDeclsPure_653_ = lean_ctor_get(v_lctx_617_, 4);
lean_inc_ref(v_funDeclsPure_653_);
lean_dec_ref(v_lctx_617_);
v___y_627_ = v_funDeclsPure_653_;
goto v___jp_626_;
}
else
{
lean_object* v_funDeclsImpure_654_; 
v_funDeclsImpure_654_ = lean_ctor_get(v_lctx_617_, 5);
lean_inc_ref(v_funDeclsImpure_654_);
lean_dec_ref(v_lctx_617_);
v___y_627_ = v_funDeclsImpure_654_;
goto v___jp_626_;
}
}
}
v___jp_655_:
{
lean_object* v___x_657_; 
v___x_657_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_656_, v_fvarId_610_);
lean_dec_ref(v___y_656_);
if (lean_obj_tag(v___x_657_) == 1)
{
lean_object* v_val_658_; lean_object* v___x_660_; uint8_t v_isShared_661_; uint8_t v_isSharedCheck_666_; 
lean_del_object(v___x_624_);
lean_dec(v_a_622_);
lean_del_object(v___x_619_);
lean_dec_ref(v_lctx_617_);
lean_dec(v_fvarId_610_);
v_val_658_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_666_ == 0)
{
v___x_660_ = v___x_657_;
v_isShared_661_ = v_isSharedCheck_666_;
goto v_resetjp_659_;
}
else
{
lean_inc(v_val_658_);
lean_dec(v___x_657_);
v___x_660_ = lean_box(0);
v_isShared_661_ = v_isSharedCheck_666_;
goto v_resetjp_659_;
}
v_resetjp_659_:
{
lean_object* v_binderName_662_; lean_object* v___x_664_; 
v_binderName_662_ = lean_ctor_get(v_val_658_, 1);
lean_inc(v_binderName_662_);
lean_dec(v_val_658_);
if (v_isShared_661_ == 0)
{
lean_ctor_set_tag(v___x_660_, 0);
lean_ctor_set(v___x_660_, 0, v_binderName_662_);
v___x_664_ = v___x_660_;
goto v_reusejp_663_;
}
else
{
lean_object* v_reuseFailAlloc_665_; 
v_reuseFailAlloc_665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_665_, 0, v_binderName_662_);
v___x_664_ = v_reuseFailAlloc_665_;
goto v_reusejp_663_;
}
v_reusejp_663_:
{
return v___x_664_;
}
}
}
else
{
uint8_t v___x_667_; 
lean_dec(v___x_657_);
v___x_667_ = lean_unbox(v_a_622_);
if (v___x_667_ == 0)
{
lean_object* v_paramsPure_668_; 
v_paramsPure_668_ = lean_ctor_get(v_lctx_617_, 0);
lean_inc_ref(v_paramsPure_668_);
v___y_641_ = v_paramsPure_668_;
goto v___jp_640_;
}
else
{
lean_object* v_paramsImpure_669_; 
v_paramsImpure_669_ = lean_ctor_get(v_lctx_617_, 1);
lean_inc_ref(v_paramsImpure_669_);
v___y_641_ = v_paramsImpure_669_;
goto v___jp_640_;
}
}
}
}
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_del_object(v___x_619_);
lean_dec_ref(v_lctx_617_);
lean_dec(v_fvarId_610_);
v_a_674_ = lean_ctor_get(v___x_621_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_621_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_621_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_621_);
v___x_676_ = lean_box(0);
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
v_resetjp_675_:
{
lean_object* v___x_679_; 
if (v_isShared_677_ == 0)
{
v___x_679_ = v___x_676_;
goto v_reusejp_678_;
}
else
{
lean_object* v_reuseFailAlloc_680_; 
v_reuseFailAlloc_680_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_680_, 0, v_a_674_);
v___x_679_ = v_reuseFailAlloc_680_;
goto v_reusejp_678_;
}
v_reusejp_678_:
{
return v___x_679_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBinderName___boxed(lean_object* v_fvarId_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_){
_start:
{
lean_object* v_res_690_; 
v_res_690_ = l_Lean_Compiler_LCNF_getBinderName(v_fvarId_684_, v___y_685_, v___y_686_, v___y_687_, v___y_688_);
lean_dec(v___y_688_);
lean_dec_ref(v___y_687_);
lean_dec(v___y_686_);
lean_dec_ref(v___y_685_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg(uint8_t v_pu_691_, lean_object* v_fvarId_692_, lean_object* v___y_693_){
_start:
{
lean_object* v___x_695_; lean_object* v___y_697_; 
v___x_695_ = lean_st_ref_get(v___y_693_);
if (v_pu_691_ == 0)
{
lean_object* v_lctx_700_; lean_object* v_paramsPure_701_; 
v_lctx_700_ = lean_ctor_get(v___x_695_, 0);
lean_inc_ref(v_lctx_700_);
lean_dec(v___x_695_);
v_paramsPure_701_ = lean_ctor_get(v_lctx_700_, 0);
lean_inc_ref(v_paramsPure_701_);
lean_dec_ref(v_lctx_700_);
v___y_697_ = v_paramsPure_701_;
goto v___jp_696_;
}
else
{
lean_object* v_lctx_702_; lean_object* v_paramsImpure_703_; 
v_lctx_702_ = lean_ctor_get(v___x_695_, 0);
lean_inc_ref(v_lctx_702_);
lean_dec(v___x_695_);
v_paramsImpure_703_ = lean_ctor_get(v_lctx_702_, 1);
lean_inc_ref(v_paramsImpure_703_);
lean_dec_ref(v_lctx_702_);
v___y_697_ = v_paramsImpure_703_;
goto v___jp_696_;
}
v___jp_696_:
{
lean_object* v___x_698_; lean_object* v___x_699_; 
v___x_698_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_697_, v_fvarId_692_);
lean_dec_ref(v___y_697_);
v___x_699_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_699_, 0, v___x_698_);
return v___x_699_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___redArg___boxed(lean_object* v_pu_704_, lean_object* v_fvarId_705_, lean_object* v___y_706_, lean_object* v___y_707_){
_start:
{
uint8_t v_pu_boxed_708_; lean_object* v_res_709_; 
v_pu_boxed_708_ = lean_unbox(v_pu_704_);
v_res_709_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v_pu_boxed_708_, v_fvarId_705_, v___y_706_);
lean_dec(v___y_706_);
lean_dec(v_fvarId_705_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f(uint8_t v_pu_710_, lean_object* v_fvarId_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v___x_717_; 
v___x_717_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v_pu_710_, v_fvarId_711_, v___y_713_);
return v___x_717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findParam_x3f___boxed(lean_object* v_pu_718_, lean_object* v_fvarId_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
uint8_t v_pu_boxed_725_; lean_object* v_res_726_; 
v_pu_boxed_725_ = lean_unbox(v_pu_718_);
v_res_726_ = l_Lean_Compiler_LCNF_findParam_x3f(v_pu_boxed_725_, v_fvarId_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec(v_fvarId_719_);
return v_res_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(uint8_t v_pu_727_, lean_object* v_fvarId_728_, lean_object* v___y_729_){
_start:
{
lean_object* v___x_731_; lean_object* v___y_733_; 
v___x_731_ = lean_st_ref_get(v___y_729_);
if (v_pu_727_ == 0)
{
lean_object* v_lctx_736_; lean_object* v_letDeclsPure_737_; 
v_lctx_736_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_lctx_736_);
lean_dec(v___x_731_);
v_letDeclsPure_737_ = lean_ctor_get(v_lctx_736_, 2);
lean_inc_ref(v_letDeclsPure_737_);
lean_dec_ref(v_lctx_736_);
v___y_733_ = v_letDeclsPure_737_;
goto v___jp_732_;
}
else
{
lean_object* v_lctx_738_; lean_object* v_letDeclsImpure_739_; 
v_lctx_738_ = lean_ctor_get(v___x_731_, 0);
lean_inc_ref(v_lctx_738_);
lean_dec(v___x_731_);
v_letDeclsImpure_739_ = lean_ctor_get(v_lctx_738_, 3);
lean_inc_ref(v_letDeclsImpure_739_);
lean_dec_ref(v_lctx_738_);
v___y_733_ = v_letDeclsImpure_739_;
goto v___jp_732_;
}
v___jp_732_:
{
lean_object* v___x_734_; lean_object* v___x_735_; 
v___x_734_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_733_, v_fvarId_728_);
lean_dec_ref(v___y_733_);
v___x_735_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_735_, 0, v___x_734_);
return v___x_735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg___boxed(lean_object* v_pu_740_, lean_object* v_fvarId_741_, lean_object* v___y_742_, lean_object* v___y_743_){
_start:
{
uint8_t v_pu_boxed_744_; lean_object* v_res_745_; 
v_pu_boxed_744_ = lean_unbox(v_pu_740_);
v_res_745_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_boxed_744_, v_fvarId_741_, v___y_742_);
lean_dec(v___y_742_);
lean_dec(v_fvarId_741_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f(uint8_t v_pu_746_, lean_object* v_fvarId_747_, lean_object* v___y_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_){
_start:
{
lean_object* v___x_753_; 
v___x_753_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_746_, v_fvarId_747_, v___y_749_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetDecl_x3f___boxed(lean_object* v_pu_754_, lean_object* v_fvarId_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_){
_start:
{
uint8_t v_pu_boxed_761_; lean_object* v_res_762_; 
v_pu_boxed_761_ = lean_unbox(v_pu_754_);
v_res_762_ = l_Lean_Compiler_LCNF_findLetDecl_x3f(v_pu_boxed_761_, v_fvarId_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v_fvarId_755_);
return v_res_762_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t v_pu_763_, lean_object* v_fvarId_764_, lean_object* v___y_765_){
_start:
{
lean_object* v___x_767_; lean_object* v___y_769_; 
v___x_767_ = lean_st_ref_get(v___y_765_);
if (v_pu_763_ == 0)
{
lean_object* v_lctx_772_; lean_object* v_funDeclsPure_773_; 
v_lctx_772_ = lean_ctor_get(v___x_767_, 0);
lean_inc_ref(v_lctx_772_);
lean_dec(v___x_767_);
v_funDeclsPure_773_ = lean_ctor_get(v_lctx_772_, 4);
lean_inc_ref(v_funDeclsPure_773_);
lean_dec_ref(v_lctx_772_);
v___y_769_ = v_funDeclsPure_773_;
goto v___jp_768_;
}
else
{
lean_object* v_lctx_774_; lean_object* v_funDeclsImpure_775_; 
v_lctx_774_ = lean_ctor_get(v___x_767_, 0);
lean_inc_ref(v_lctx_774_);
lean_dec(v___x_767_);
v_funDeclsImpure_775_ = lean_ctor_get(v_lctx_774_, 5);
lean_inc_ref(v_funDeclsImpure_775_);
lean_dec_ref(v_lctx_774_);
v___y_769_ = v_funDeclsImpure_775_;
goto v___jp_768_;
}
v___jp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; 
v___x_770_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v___y_769_, v_fvarId_764_);
lean_dec_ref(v___y_769_);
v___x_771_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_771_, 0, v___x_770_);
return v___x_771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg___boxed(lean_object* v_pu_776_, lean_object* v_fvarId_777_, lean_object* v___y_778_, lean_object* v___y_779_){
_start:
{
uint8_t v_pu_boxed_780_; lean_object* v_res_781_; 
v_pu_boxed_780_ = lean_unbox(v_pu_776_);
v_res_781_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v_pu_boxed_780_, v_fvarId_777_, v___y_778_);
lean_dec(v___y_778_);
lean_dec(v_fvarId_777_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f(uint8_t v_pu_782_, lean_object* v_fvarId_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v___x_789_; 
v___x_789_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v_pu_782_, v_fvarId_783_, v___y_785_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___boxed(lean_object* v_pu_790_, lean_object* v_fvarId_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_){
_start:
{
uint8_t v_pu_boxed_797_; lean_object* v_res_798_; 
v_pu_boxed_797_ = lean_unbox(v_pu_790_);
v_res_798_ = l_Lean_Compiler_LCNF_findFunDecl_x3f(v_pu_boxed_797_, v_fvarId_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_);
lean_dec(v___y_795_);
lean_dec_ref(v___y_794_);
lean_dec(v___y_793_);
lean_dec_ref(v___y_792_);
lean_dec(v_fvarId_791_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(uint8_t v_pu_799_, lean_object* v_fvarId_800_, lean_object* v___y_801_){
_start:
{
lean_object* v___x_803_; lean_object* v_a_804_; lean_object* v___x_806_; uint8_t v_isShared_807_; uint8_t v_isSharedCheck_824_; 
v___x_803_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_799_, v_fvarId_800_, v___y_801_);
v_a_804_ = lean_ctor_get(v___x_803_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v___x_803_);
if (v_isSharedCheck_824_ == 0)
{
v___x_806_ = v___x_803_;
v_isShared_807_ = v_isSharedCheck_824_;
goto v_resetjp_805_;
}
else
{
lean_inc(v_a_804_);
lean_dec(v___x_803_);
v___x_806_ = lean_box(0);
v_isShared_807_ = v_isSharedCheck_824_;
goto v_resetjp_805_;
}
v_resetjp_805_:
{
if (lean_obj_tag(v_a_804_) == 1)
{
lean_object* v_val_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_819_; 
v_val_808_ = lean_ctor_get(v_a_804_, 0);
v_isSharedCheck_819_ = !lean_is_exclusive(v_a_804_);
if (v_isSharedCheck_819_ == 0)
{
v___x_810_ = v_a_804_;
v_isShared_811_ = v_isSharedCheck_819_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_val_808_);
lean_dec(v_a_804_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_819_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v_value_812_; lean_object* v___x_814_; 
v_value_812_ = lean_ctor_get(v_val_808_, 3);
lean_inc(v_value_812_);
lean_dec(v_val_808_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 0, v_value_812_);
v___x_814_ = v___x_810_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_818_; 
v_reuseFailAlloc_818_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_818_, 0, v_value_812_);
v___x_814_ = v_reuseFailAlloc_818_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
lean_object* v___x_816_; 
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_814_);
v___x_816_ = v___x_806_;
goto v_reusejp_815_;
}
else
{
lean_object* v_reuseFailAlloc_817_; 
v_reuseFailAlloc_817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_817_, 0, v___x_814_);
v___x_816_ = v_reuseFailAlloc_817_;
goto v_reusejp_815_;
}
v_reusejp_815_:
{
return v___x_816_;
}
}
}
}
else
{
lean_object* v___x_820_; lean_object* v___x_822_; 
lean_dec(v_a_804_);
v___x_820_ = lean_box(0);
if (v_isShared_807_ == 0)
{
lean_ctor_set(v___x_806_, 0, v___x_820_);
v___x_822_ = v___x_806_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
return v___x_822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___redArg___boxed(lean_object* v_pu_825_, lean_object* v_fvarId_826_, lean_object* v___y_827_, lean_object* v___y_828_){
_start:
{
uint8_t v_pu_boxed_829_; lean_object* v_res_830_; 
v_pu_boxed_829_ = lean_unbox(v_pu_825_);
v_res_830_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v_pu_boxed_829_, v_fvarId_826_, v___y_827_);
lean_dec(v___y_827_);
lean_dec(v_fvarId_826_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f(uint8_t v_pu_831_, lean_object* v_fvarId_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v___x_838_; 
v___x_838_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v_pu_831_, v_fvarId_832_, v___y_834_);
return v___x_838_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findLetValue_x3f___boxed(lean_object* v_pu_839_, lean_object* v_fvarId_840_, lean_object* v___y_841_, lean_object* v___y_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_){
_start:
{
uint8_t v_pu_boxed_846_; lean_object* v_res_847_; 
v_pu_boxed_846_ = lean_unbox(v_pu_839_);
v_res_847_ = l_Lean_Compiler_LCNF_findLetValue_x3f(v_pu_boxed_846_, v_fvarId_840_, v___y_841_, v___y_842_, v___y_843_, v___y_844_);
lean_dec(v___y_844_);
lean_dec_ref(v___y_843_);
lean_dec(v___y_842_);
lean_dec_ref(v___y_841_);
lean_dec(v_fvarId_840_);
return v_res_847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg(lean_object* v_fvarId_848_, lean_object* v___y_849_, lean_object* v___y_850_){
_start:
{
uint8_t v___x_856_; lean_object* v___x_857_; 
v___x_856_ = 0;
v___x_857_ = l_Lean_Compiler_LCNF_findLetValue_x3f___redArg(v___x_856_, v_fvarId_848_, v___y_849_);
if (lean_obj_tag(v___x_857_) == 0)
{
lean_object* v_a_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_885_; 
v_a_858_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_885_ == 0)
{
v___x_860_ = v___x_857_;
v_isShared_861_ = v_isSharedCheck_885_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_a_858_);
lean_dec(v___x_857_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_885_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
if (lean_obj_tag(v_a_858_) == 1)
{
lean_object* v_val_862_; 
v_val_862_ = lean_ctor_get(v_a_858_, 0);
lean_inc(v_val_862_);
lean_dec_ref_known(v_a_858_, 1);
if (lean_obj_tag(v_val_862_) == 3)
{
lean_object* v_declName_863_; lean_object* v___x_864_; lean_object* v_env_871_; uint8_t v___x_872_; lean_object* v___x_873_; 
v_declName_863_ = lean_ctor_get(v_val_862_, 0);
lean_inc(v_declName_863_);
lean_dec_ref_known(v_val_862_, 3);
v___x_864_ = lean_st_ref_get(v___y_850_);
v_env_871_ = lean_ctor_get(v___x_864_, 0);
lean_inc_ref(v_env_871_);
lean_dec(v___x_864_);
v___x_872_ = 0;
v___x_873_ = l_Lean_Environment_find_x3f(v_env_871_, v_declName_863_, v___x_872_);
if (lean_obj_tag(v___x_873_) == 1)
{
lean_object* v_val_874_; 
v_val_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_val_874_);
lean_dec_ref_known(v___x_873_, 1);
if (lean_obj_tag(v_val_874_) == 6)
{
lean_object* v___x_876_; uint8_t v_isShared_877_; uint8_t v_isSharedCheck_883_; 
lean_del_object(v___x_860_);
v_isSharedCheck_883_ = !lean_is_exclusive(v_val_874_);
if (v_isSharedCheck_883_ == 0)
{
lean_object* v_unused_884_; 
v_unused_884_ = lean_ctor_get(v_val_874_, 0);
lean_dec(v_unused_884_);
v___x_876_ = v_val_874_;
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
else
{
lean_dec(v_val_874_);
v___x_876_ = lean_box(0);
v_isShared_877_ = v_isSharedCheck_883_;
goto v_resetjp_875_;
}
v_resetjp_875_:
{
uint8_t v___x_878_; lean_object* v___x_879_; lean_object* v___x_881_; 
v___x_878_ = 1;
v___x_879_ = lean_box(v___x_878_);
if (v_isShared_877_ == 0)
{
lean_ctor_set_tag(v___x_876_, 0);
lean_ctor_set(v___x_876_, 0, v___x_879_);
v___x_881_ = v___x_876_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
return v___x_881_;
}
}
}
else
{
lean_dec(v_val_874_);
goto v___jp_865_;
}
}
else
{
lean_dec(v___x_873_);
goto v___jp_865_;
}
v___jp_865_:
{
uint8_t v___x_866_; lean_object* v___x_867_; lean_object* v___x_869_; 
v___x_866_ = 0;
v___x_867_ = lean_box(v___x_866_);
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 0, v___x_867_);
v___x_869_ = v___x_860_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v___x_867_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
else
{
lean_dec(v_val_862_);
lean_del_object(v___x_860_);
goto v___jp_852_;
}
}
else
{
lean_del_object(v___x_860_);
lean_dec(v_a_858_);
goto v___jp_852_;
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
v_a_886_ = lean_ctor_get(v___x_857_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_857_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_857_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_857_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
v___jp_852_:
{
uint8_t v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___x_853_ = 0;
v___x_854_ = lean_box(v___x_853_);
v___x_855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
return v___x_855_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___redArg___boxed(lean_object* v_fvarId_894_, lean_object* v___y_895_, lean_object* v___y_896_, lean_object* v___y_897_){
_start:
{
lean_object* v_res_898_; 
v_res_898_ = l_Lean_Compiler_LCNF_isConstructorApp___redArg(v_fvarId_894_, v___y_895_, v___y_896_);
lean_dec(v___y_896_);
lean_dec(v___y_895_);
lean_dec(v_fvarId_894_);
return v_res_898_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp(lean_object* v_fvarId_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_){
_start:
{
lean_object* v___x_905_; 
v___x_905_ = l_Lean_Compiler_LCNF_isConstructorApp___redArg(v_fvarId_899_, v___y_901_, v___y_903_);
return v___x_905_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isConstructorApp___boxed(lean_object* v_fvarId_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_Compiler_LCNF_isConstructorApp(v_fvarId_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_);
lean_dec(v___y_910_);
lean_dec_ref(v___y_909_);
lean_dec(v___y_908_);
lean_dec_ref(v___y_907_);
lean_dec(v_fvarId_906_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(lean_object* v_arg_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
if (lean_obj_tag(v_arg_913_) == 1)
{
lean_object* v_fvarId_917_; lean_object* v___x_918_; 
v_fvarId_917_ = lean_ctor_get(v_arg_913_, 0);
v___x_918_ = l_Lean_Compiler_LCNF_isConstructorApp___redArg(v_fvarId_917_, v___y_914_, v___y_915_);
return v___x_918_;
}
else
{
uint8_t v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; 
v___x_919_ = 0;
v___x_920_ = lean_box(v___x_919_);
v___x_921_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_921_, 0, v___x_920_);
return v___x_921_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg___boxed(lean_object* v_arg_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(v_arg_922_, v___y_923_, v___y_924_);
lean_dec(v___y_924_);
lean_dec(v___y_923_);
lean_dec(v_arg_922_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp(uint8_t v_pu_927_, lean_object* v_arg_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_){
_start:
{
lean_object* v___x_934_; 
v___x_934_ = l_Lean_Compiler_LCNF_Arg_isConstructorApp___redArg(v_arg_928_, v___y_930_, v___y_932_);
return v___x_934_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_isConstructorApp___boxed(lean_object* v_pu_935_, lean_object* v_arg_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
uint8_t v_pu_boxed_942_; lean_object* v_res_943_; 
v_pu_boxed_942_ = lean_unbox(v_pu_935_);
v_res_943_ = l_Lean_Compiler_LCNF_Arg_isConstructorApp(v_pu_boxed_942_, v_arg_936_, v___y_937_, v___y_938_, v___y_939_, v___y_940_);
lean_dec(v___y_940_);
lean_dec_ref(v___y_939_);
lean_dec(v___y_938_);
lean_dec_ref(v___y_937_);
lean_dec(v_arg_936_);
return v_res_943_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getParam___closed__1(void){
_start:
{
lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_945_ = ((lean_object*)(l_Lean_Compiler_LCNF_getParam___closed__0));
v___x_946_ = l_Lean_stringToMessageData(v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam(uint8_t v_pu_947_, lean_object* v_fvarId_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
lean_object* v___x_954_; lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_967_; 
v___x_954_ = l_Lean_Compiler_LCNF_findParam_x3f___redArg(v_pu_947_, v_fvarId_948_, v___y_950_);
v_a_955_ = lean_ctor_get(v___x_954_, 0);
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_954_);
if (v_isSharedCheck_967_ == 0)
{
v___x_957_ = v___x_954_;
v_isShared_958_ = v_isSharedCheck_967_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_954_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_967_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
if (lean_obj_tag(v_a_955_) == 1)
{
lean_object* v_val_959_; lean_object* v___x_961_; 
lean_dec(v_fvarId_948_);
v_val_959_ = lean_ctor_get(v_a_955_, 0);
lean_inc(v_val_959_);
lean_dec_ref_known(v_a_955_, 1);
if (v_isShared_958_ == 0)
{
lean_ctor_set(v___x_957_, 0, v_val_959_);
v___x_961_ = v___x_957_;
goto v_reusejp_960_;
}
else
{
lean_object* v_reuseFailAlloc_962_; 
v_reuseFailAlloc_962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_962_, 0, v_val_959_);
v___x_961_ = v_reuseFailAlloc_962_;
goto v_reusejp_960_;
}
v_reusejp_960_:
{
return v___x_961_;
}
}
else
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; 
lean_del_object(v___x_957_);
lean_dec(v_a_955_);
v___x_963_ = lean_obj_once(&l_Lean_Compiler_LCNF_getParam___closed__1, &l_Lean_Compiler_LCNF_getParam___closed__1_once, _init_l_Lean_Compiler_LCNF_getParam___closed__1);
v___x_964_ = l_Lean_MessageData_ofName(v_fvarId_948_);
v___x_965_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_965_, 0, v___x_963_);
lean_ctor_set(v___x_965_, 1, v___x_964_);
v___x_966_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_965_, v___y_949_, v___y_950_, v___y_951_, v___y_952_);
return v___x_966_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getParam___boxed(lean_object* v_pu_968_, lean_object* v_fvarId_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
uint8_t v_pu_boxed_975_; lean_object* v_res_976_; 
v_pu_boxed_975_ = lean_unbox(v_pu_968_);
v_res_976_ = l_Lean_Compiler_LCNF_getParam(v_pu_boxed_975_, v_fvarId_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
return v_res_976_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getLetDecl___closed__1(void){
_start:
{
lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_978_ = ((lean_object*)(l_Lean_Compiler_LCNF_getLetDecl___closed__0));
v___x_979_ = l_Lean_stringToMessageData(v___x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl(uint8_t v_pu_980_, lean_object* v_fvarId_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v___x_987_; lean_object* v_a_988_; lean_object* v___x_990_; uint8_t v_isShared_991_; uint8_t v_isSharedCheck_1000_; 
v___x_987_ = l_Lean_Compiler_LCNF_findLetDecl_x3f___redArg(v_pu_980_, v_fvarId_981_, v___y_983_);
v_a_988_ = lean_ctor_get(v___x_987_, 0);
v_isSharedCheck_1000_ = !lean_is_exclusive(v___x_987_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_990_ = v___x_987_;
v_isShared_991_ = v_isSharedCheck_1000_;
goto v_resetjp_989_;
}
else
{
lean_inc(v_a_988_);
lean_dec(v___x_987_);
v___x_990_ = lean_box(0);
v_isShared_991_ = v_isSharedCheck_1000_;
goto v_resetjp_989_;
}
v_resetjp_989_:
{
if (lean_obj_tag(v_a_988_) == 1)
{
lean_object* v_val_992_; lean_object* v___x_994_; 
lean_dec(v_fvarId_981_);
v_val_992_ = lean_ctor_get(v_a_988_, 0);
lean_inc(v_val_992_);
lean_dec_ref_known(v_a_988_, 1);
if (v_isShared_991_ == 0)
{
lean_ctor_set(v___x_990_, 0, v_val_992_);
v___x_994_ = v___x_990_;
goto v_reusejp_993_;
}
else
{
lean_object* v_reuseFailAlloc_995_; 
v_reuseFailAlloc_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_995_, 0, v_val_992_);
v___x_994_ = v_reuseFailAlloc_995_;
goto v_reusejp_993_;
}
v_reusejp_993_:
{
return v___x_994_;
}
}
else
{
lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
lean_del_object(v___x_990_);
lean_dec(v_a_988_);
v___x_996_ = lean_obj_once(&l_Lean_Compiler_LCNF_getLetDecl___closed__1, &l_Lean_Compiler_LCNF_getLetDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_getLetDecl___closed__1);
v___x_997_ = l_Lean_MessageData_ofName(v_fvarId_981_);
v___x_998_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_998_, 0, v___x_996_);
lean_ctor_set(v___x_998_, 1, v___x_997_);
v___x_999_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_998_, v___y_982_, v___y_983_, v___y_984_, v___y_985_);
return v___x_999_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLetDecl___boxed(lean_object* v_pu_1001_, lean_object* v_fvarId_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_, lean_object* v___y_1006_, lean_object* v___y_1007_){
_start:
{
uint8_t v_pu_boxed_1008_; lean_object* v_res_1009_; 
v_pu_boxed_1008_ = lean_unbox(v_pu_1001_);
v_res_1009_ = l_Lean_Compiler_LCNF_getLetDecl(v_pu_boxed_1008_, v_fvarId_1002_, v___y_1003_, v___y_1004_, v___y_1005_, v___y_1006_);
lean_dec(v___y_1006_);
lean_dec_ref(v___y_1005_);
lean_dec(v___y_1004_);
lean_dec_ref(v___y_1003_);
return v_res_1009_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getFunDecl___closed__1(void){
_start:
{
lean_object* v___x_1011_; lean_object* v___x_1012_; 
v___x_1011_ = ((lean_object*)(l_Lean_Compiler_LCNF_getFunDecl___closed__0));
v___x_1012_ = l_Lean_stringToMessageData(v___x_1011_);
return v___x_1012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t v_pu_1013_, lean_object* v_fvarId_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_, lean_object* v___y_1018_){
_start:
{
lean_object* v___x_1020_; lean_object* v_a_1021_; lean_object* v___x_1023_; uint8_t v_isShared_1024_; uint8_t v_isSharedCheck_1033_; 
v___x_1020_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v_pu_1013_, v_fvarId_1014_, v___y_1016_);
v_a_1021_ = lean_ctor_get(v___x_1020_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_1020_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1023_ = v___x_1020_;
v_isShared_1024_ = v_isSharedCheck_1033_;
goto v_resetjp_1022_;
}
else
{
lean_inc(v_a_1021_);
lean_dec(v___x_1020_);
v___x_1023_ = lean_box(0);
v_isShared_1024_ = v_isSharedCheck_1033_;
goto v_resetjp_1022_;
}
v_resetjp_1022_:
{
if (lean_obj_tag(v_a_1021_) == 1)
{
lean_object* v_val_1025_; lean_object* v___x_1027_; 
lean_dec(v_fvarId_1014_);
v_val_1025_ = lean_ctor_get(v_a_1021_, 0);
lean_inc(v_val_1025_);
lean_dec_ref_known(v_a_1021_, 1);
if (v_isShared_1024_ == 0)
{
lean_ctor_set(v___x_1023_, 0, v_val_1025_);
v___x_1027_ = v___x_1023_;
goto v_reusejp_1026_;
}
else
{
lean_object* v_reuseFailAlloc_1028_; 
v_reuseFailAlloc_1028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1028_, 0, v_val_1025_);
v___x_1027_ = v_reuseFailAlloc_1028_;
goto v_reusejp_1026_;
}
v_reusejp_1026_:
{
return v___x_1027_;
}
}
else
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_del_object(v___x_1023_);
lean_dec(v_a_1021_);
v___x_1029_ = lean_obj_once(&l_Lean_Compiler_LCNF_getFunDecl___closed__1, &l_Lean_Compiler_LCNF_getFunDecl___closed__1_once, _init_l_Lean_Compiler_LCNF_getFunDecl___closed__1);
v___x_1030_ = l_Lean_MessageData_ofName(v_fvarId_1014_);
v___x_1031_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1031_, 0, v___x_1029_);
lean_ctor_set(v___x_1031_, 1, v___x_1030_);
v___x_1032_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getType_spec__1___redArg(v___x_1031_, v___y_1015_, v___y_1016_, v___y_1017_, v___y_1018_);
return v___x_1032_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getFunDecl___boxed(lean_object* v_pu_1034_, lean_object* v_fvarId_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_){
_start:
{
uint8_t v_pu_boxed_1041_; lean_object* v_res_1042_; 
v_pu_boxed_1041_ = lean_unbox(v_pu_1034_);
v_res_1042_ = l_Lean_Compiler_LCNF_getFunDecl(v_pu_boxed_1041_, v_fvarId_1035_, v___y_1036_, v___y_1037_, v___y_1038_, v___y_1039_);
lean_dec(v___y_1039_);
lean_dec_ref(v___y_1038_);
lean_dec(v___y_1037_);
lean_dec_ref(v___y_1036_);
return v_res_1042_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg(lean_object* v_f_1043_, lean_object* v___y_1044_){
_start:
{
lean_object* v___x_1046_; lean_object* v_lctx_1047_; lean_object* v_nextIdx_1048_; lean_object* v___x_1050_; uint8_t v_isShared_1051_; uint8_t v_isSharedCheck_1059_; 
v___x_1046_ = lean_st_ref_take(v___y_1044_);
v_lctx_1047_ = lean_ctor_get(v___x_1046_, 0);
v_nextIdx_1048_ = lean_ctor_get(v___x_1046_, 1);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1046_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1050_ = v___x_1046_;
v_isShared_1051_ = v_isSharedCheck_1059_;
goto v_resetjp_1049_;
}
else
{
lean_inc(v_nextIdx_1048_);
lean_inc(v_lctx_1047_);
lean_dec(v___x_1046_);
v___x_1050_ = lean_box(0);
v_isShared_1051_ = v_isSharedCheck_1059_;
goto v_resetjp_1049_;
}
v_resetjp_1049_:
{
lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1055_; 
v___x_1052_ = lean_box(0);
v___x_1053_ = lean_apply_1(v_f_1043_, v_lctx_1047_);
if (v_isShared_1051_ == 0)
{
lean_ctor_set(v___x_1050_, 0, v___x_1053_);
v___x_1055_ = v___x_1050_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1053_);
lean_ctor_set(v_reuseFailAlloc_1058_, 1, v_nextIdx_1048_);
v___x_1055_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
lean_object* v___x_1056_; lean_object* v___x_1057_; 
v___x_1056_ = lean_st_ref_put(v___y_1044_, v___x_1055_);
v___x_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1057_, 0, v___x_1052_);
return v___x_1057_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___redArg___boxed(lean_object* v_f_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_Compiler_LCNF_modifyLCtx___redArg(v_f_1060_, v___y_1061_);
lean_dec(v___y_1061_);
return v_res_1063_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx(lean_object* v_f_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_, lean_object* v___y_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v___x_1070_; lean_object* v_lctx_1071_; lean_object* v_nextIdx_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1083_; 
v___x_1070_ = lean_st_ref_take(v___y_1066_);
v_lctx_1071_ = lean_ctor_get(v___x_1070_, 0);
v_nextIdx_1072_ = lean_ctor_get(v___x_1070_, 1);
v_isSharedCheck_1083_ = !lean_is_exclusive(v___x_1070_);
if (v_isSharedCheck_1083_ == 0)
{
v___x_1074_ = v___x_1070_;
v_isShared_1075_ = v_isSharedCheck_1083_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_nextIdx_1072_);
lean_inc(v_lctx_1071_);
lean_dec(v___x_1070_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1083_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1079_; 
v___x_1076_ = lean_box(0);
v___x_1077_ = lean_apply_1(v_f_1064_, v_lctx_1071_);
if (v_isShared_1075_ == 0)
{
lean_ctor_set(v___x_1074_, 0, v___x_1077_);
v___x_1079_ = v___x_1074_;
goto v_reusejp_1078_;
}
else
{
lean_object* v_reuseFailAlloc_1082_; 
v_reuseFailAlloc_1082_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1082_, 0, v___x_1077_);
lean_ctor_set(v_reuseFailAlloc_1082_, 1, v_nextIdx_1072_);
v___x_1079_ = v_reuseFailAlloc_1082_;
goto v_reusejp_1078_;
}
v_reusejp_1078_:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_st_ref_put(v___y_1066_, v___x_1079_);
v___x_1081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1081_, 0, v___x_1076_);
return v___x_1081_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_modifyLCtx___boxed(lean_object* v_f_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_Lean_Compiler_LCNF_modifyLCtx(v_f_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t v_pu_1091_, lean_object* v_decl_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v___x_1095_; lean_object* v_lctx_1096_; lean_object* v_nextIdx_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1108_; 
v___x_1095_ = lean_st_ref_take(v___y_1093_);
v_lctx_1096_ = lean_ctor_get(v___x_1095_, 0);
v_nextIdx_1097_ = lean_ctor_get(v___x_1095_, 1);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1099_ = v___x_1095_;
v_isShared_1100_ = v_isSharedCheck_1108_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_nextIdx_1097_);
lean_inc(v_lctx_1096_);
lean_dec(v___x_1095_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1108_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1104_; 
v___x_1101_ = lean_box(0);
v___x_1102_ = l_Lean_Compiler_LCNF_LCtx_eraseLetDecl(v_pu_1091_, v_lctx_1096_, v_decl_1092_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1102_);
v___x_1104_ = v___x_1099_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v___x_1102_);
lean_ctor_set(v_reuseFailAlloc_1107_, 1, v_nextIdx_1097_);
v___x_1104_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; 
v___x_1105_ = lean_st_ref_put(v___y_1093_, v___x_1104_);
v___x_1106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1101_);
return v___x_1106_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg___boxed(lean_object* v_pu_1109_, lean_object* v_decl_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
uint8_t v_pu_boxed_1113_; lean_object* v_res_1114_; 
v_pu_boxed_1113_ = lean_unbox(v_pu_1109_);
v_res_1114_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v_pu_boxed_1113_, v_decl_1110_, v___y_1111_);
lean_dec(v___y_1111_);
lean_dec_ref(v_decl_1110_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl(uint8_t v_pu_1115_, lean_object* v_decl_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_, lean_object* v___y_1120_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v_pu_1115_, v_decl_1116_, v___y_1118_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___boxed(lean_object* v_pu_1123_, lean_object* v_decl_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_){
_start:
{
uint8_t v_pu_boxed_1130_; lean_object* v_res_1131_; 
v_pu_boxed_1130_ = lean_unbox(v_pu_1123_);
v_res_1131_ = l_Lean_Compiler_LCNF_eraseLetDecl(v_pu_boxed_1130_, v_decl_1124_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_);
lean_dec(v___y_1128_);
lean_dec_ref(v___y_1127_);
lean_dec(v___y_1126_);
lean_dec_ref(v___y_1125_);
lean_dec_ref(v_decl_1124_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg(uint8_t v_pu_1132_, lean_object* v_decl_1133_, uint8_t v_recursive_1134_, lean_object* v___y_1135_){
_start:
{
lean_object* v___x_1137_; lean_object* v_lctx_1138_; lean_object* v_nextIdx_1139_; lean_object* v___x_1141_; uint8_t v_isShared_1142_; uint8_t v_isSharedCheck_1150_; 
v___x_1137_ = lean_st_ref_take(v___y_1135_);
v_lctx_1138_ = lean_ctor_get(v___x_1137_, 0);
v_nextIdx_1139_ = lean_ctor_get(v___x_1137_, 1);
v_isSharedCheck_1150_ = !lean_is_exclusive(v___x_1137_);
if (v_isSharedCheck_1150_ == 0)
{
v___x_1141_ = v___x_1137_;
v_isShared_1142_ = v_isSharedCheck_1150_;
goto v_resetjp_1140_;
}
else
{
lean_inc(v_nextIdx_1139_);
lean_inc(v_lctx_1138_);
lean_dec(v___x_1137_);
v___x_1141_ = lean_box(0);
v_isShared_1142_ = v_isSharedCheck_1150_;
goto v_resetjp_1140_;
}
v_resetjp_1140_:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1146_; 
v___x_1143_ = lean_box(0);
v___x_1144_ = l_Lean_Compiler_LCNF_LCtx_eraseFunDecl(v_pu_1132_, v_lctx_1138_, v_decl_1133_, v_recursive_1134_);
if (v_isShared_1142_ == 0)
{
lean_ctor_set(v___x_1141_, 0, v___x_1144_);
v___x_1146_ = v___x_1141_;
goto v_reusejp_1145_;
}
else
{
lean_object* v_reuseFailAlloc_1149_; 
v_reuseFailAlloc_1149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1149_, 0, v___x_1144_);
lean_ctor_set(v_reuseFailAlloc_1149_, 1, v_nextIdx_1139_);
v___x_1146_ = v_reuseFailAlloc_1149_;
goto v_reusejp_1145_;
}
v_reusejp_1145_:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; 
v___x_1147_ = lean_st_ref_put(v___y_1135_, v___x_1146_);
v___x_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1148_, 0, v___x_1143_);
return v___x_1148_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___redArg___boxed(lean_object* v_pu_1151_, lean_object* v_decl_1152_, lean_object* v_recursive_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
uint8_t v_pu_boxed_1156_; uint8_t v_recursive_boxed_1157_; lean_object* v_res_1158_; 
v_pu_boxed_1156_ = lean_unbox(v_pu_1151_);
v_recursive_boxed_1157_ = lean_unbox(v_recursive_1153_);
v_res_1158_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_boxed_1156_, v_decl_1152_, v_recursive_boxed_1157_, v___y_1154_);
lean_dec(v___y_1154_);
lean_dec_ref(v_decl_1152_);
return v_res_1158_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl(uint8_t v_pu_1159_, lean_object* v_decl_1160_, uint8_t v_recursive_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_){
_start:
{
lean_object* v___x_1167_; 
v___x_1167_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_1159_, v_decl_1160_, v_recursive_1161_, v___y_1163_);
return v___x_1167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseFunDecl___boxed(lean_object* v_pu_1168_, lean_object* v_decl_1169_, lean_object* v_recursive_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_, lean_object* v___y_1174_, lean_object* v___y_1175_){
_start:
{
uint8_t v_pu_boxed_1176_; uint8_t v_recursive_boxed_1177_; lean_object* v_res_1178_; 
v_pu_boxed_1176_ = lean_unbox(v_pu_1168_);
v_recursive_boxed_1177_ = lean_unbox(v_recursive_1170_);
v_res_1178_ = l_Lean_Compiler_LCNF_eraseFunDecl(v_pu_boxed_1176_, v_decl_1169_, v_recursive_boxed_1177_, v___y_1171_, v___y_1172_, v___y_1173_, v___y_1174_);
lean_dec(v___y_1174_);
lean_dec_ref(v___y_1173_);
lean_dec(v___y_1172_);
lean_dec_ref(v___y_1171_);
lean_dec_ref(v_decl_1169_);
return v_res_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg(uint8_t v_pu_1179_, lean_object* v_code_1180_, lean_object* v___y_1181_){
_start:
{
lean_object* v___x_1183_; lean_object* v_lctx_1184_; lean_object* v_nextIdx_1185_; lean_object* v___x_1187_; uint8_t v_isShared_1188_; uint8_t v_isSharedCheck_1196_; 
v___x_1183_ = lean_st_ref_take(v___y_1181_);
v_lctx_1184_ = lean_ctor_get(v___x_1183_, 0);
v_nextIdx_1185_ = lean_ctor_get(v___x_1183_, 1);
v_isSharedCheck_1196_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1187_ = v___x_1183_;
v_isShared_1188_ = v_isSharedCheck_1196_;
goto v_resetjp_1186_;
}
else
{
lean_inc(v_nextIdx_1185_);
lean_inc(v_lctx_1184_);
lean_dec(v___x_1183_);
v___x_1187_ = lean_box(0);
v_isShared_1188_ = v_isSharedCheck_1196_;
goto v_resetjp_1186_;
}
v_resetjp_1186_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1192_; 
v___x_1189_ = lean_box(0);
v___x_1190_ = l_Lean_Compiler_LCNF_LCtx_eraseCode(v_pu_1179_, v_code_1180_, v_lctx_1184_);
if (v_isShared_1188_ == 0)
{
lean_ctor_set(v___x_1187_, 0, v___x_1190_);
v___x_1192_ = v___x_1187_;
goto v_reusejp_1191_;
}
else
{
lean_object* v_reuseFailAlloc_1195_; 
v_reuseFailAlloc_1195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1195_, 0, v___x_1190_);
lean_ctor_set(v_reuseFailAlloc_1195_, 1, v_nextIdx_1185_);
v___x_1192_ = v_reuseFailAlloc_1195_;
goto v_reusejp_1191_;
}
v_reusejp_1191_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; 
v___x_1193_ = lean_st_ref_put(v___y_1181_, v___x_1192_);
v___x_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1194_, 0, v___x_1189_);
return v___x_1194_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___redArg___boxed(lean_object* v_pu_1197_, lean_object* v_code_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
uint8_t v_pu_boxed_1201_; lean_object* v_res_1202_; 
v_pu_boxed_1201_ = lean_unbox(v_pu_1197_);
v_res_1202_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v_pu_boxed_1201_, v_code_1198_, v___y_1199_);
lean_dec(v___y_1199_);
lean_dec_ref(v_code_1198_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode(uint8_t v_pu_1203_, lean_object* v_code_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_){
_start:
{
lean_object* v___x_1210_; 
v___x_1210_ = l_Lean_Compiler_LCNF_eraseCode___redArg(v_pu_1203_, v_code_1204_, v___y_1206_);
return v___x_1210_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCode___boxed(lean_object* v_pu_1211_, lean_object* v_code_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_){
_start:
{
uint8_t v_pu_boxed_1218_; lean_object* v_res_1219_; 
v_pu_boxed_1218_ = lean_unbox(v_pu_1211_);
v_res_1219_ = l_Lean_Compiler_LCNF_eraseCode(v_pu_boxed_1218_, v_code_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_);
lean_dec(v___y_1216_);
lean_dec_ref(v___y_1215_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec_ref(v_code_1212_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t v_pu_1220_, lean_object* v_param_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v___x_1224_; lean_object* v_lctx_1225_; lean_object* v_nextIdx_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1237_; 
v___x_1224_ = lean_st_ref_take(v___y_1222_);
v_lctx_1225_ = lean_ctor_get(v___x_1224_, 0);
v_nextIdx_1226_ = lean_ctor_get(v___x_1224_, 1);
v_isSharedCheck_1237_ = !lean_is_exclusive(v___x_1224_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1228_ = v___x_1224_;
v_isShared_1229_ = v_isSharedCheck_1237_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_nextIdx_1226_);
lean_inc(v_lctx_1225_);
lean_dec(v___x_1224_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1237_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1233_; 
v___x_1230_ = lean_box(0);
v___x_1231_ = l_Lean_Compiler_LCNF_LCtx_eraseParam(v_pu_1220_, v_lctx_1225_, v_param_1221_);
if (v_isShared_1229_ == 0)
{
lean_ctor_set(v___x_1228_, 0, v___x_1231_);
v___x_1233_ = v___x_1228_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1236_; 
v_reuseFailAlloc_1236_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1236_, 0, v___x_1231_);
lean_ctor_set(v_reuseFailAlloc_1236_, 1, v_nextIdx_1226_);
v___x_1233_ = v_reuseFailAlloc_1236_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
lean_object* v___x_1234_; lean_object* v___x_1235_; 
v___x_1234_ = lean_st_ref_put(v___y_1222_, v___x_1233_);
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v___x_1230_);
return v___x_1235_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg___boxed(lean_object* v_pu_1238_, lean_object* v_param_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
uint8_t v_pu_boxed_1242_; lean_object* v_res_1243_; 
v_pu_boxed_1242_ = lean_unbox(v_pu_1238_);
v_res_1243_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v_pu_boxed_1242_, v_param_1239_, v___y_1240_);
lean_dec(v___y_1240_);
lean_dec_ref(v_param_1239_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam(uint8_t v_pu_1244_, lean_object* v_param_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v_pu_1244_, v_param_1245_, v___y_1247_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParam___boxed(lean_object* v_pu_1252_, lean_object* v_param_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_){
_start:
{
uint8_t v_pu_boxed_1259_; lean_object* v_res_1260_; 
v_pu_boxed_1259_ = lean_unbox(v_pu_1252_);
v_res_1260_ = l_Lean_Compiler_LCNF_eraseParam(v_pu_boxed_1259_, v_param_1253_, v___y_1254_, v___y_1255_, v___y_1256_, v___y_1257_);
lean_dec(v___y_1257_);
lean_dec_ref(v___y_1256_);
lean_dec(v___y_1255_);
lean_dec_ref(v___y_1254_);
lean_dec_ref(v_param_1253_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg(uint8_t v_pu_1261_, lean_object* v_params_1262_, lean_object* v___y_1263_){
_start:
{
lean_object* v___x_1265_; lean_object* v_lctx_1266_; lean_object* v_nextIdx_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1278_; 
v___x_1265_ = lean_st_ref_take(v___y_1263_);
v_lctx_1266_ = lean_ctor_get(v___x_1265_, 0);
v_nextIdx_1267_ = lean_ctor_get(v___x_1265_, 1);
v_isSharedCheck_1278_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1269_ = v___x_1265_;
v_isShared_1270_ = v_isSharedCheck_1278_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_nextIdx_1267_);
lean_inc(v_lctx_1266_);
lean_dec(v___x_1265_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1278_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1274_; 
v___x_1271_ = lean_box(0);
v___x_1272_ = l_Lean_Compiler_LCNF_LCtx_eraseParams(v_pu_1261_, v_lctx_1266_, v_params_1262_);
if (v_isShared_1270_ == 0)
{
lean_ctor_set(v___x_1269_, 0, v___x_1272_);
v___x_1274_ = v___x_1269_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1272_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_nextIdx_1267_);
v___x_1274_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = lean_st_ref_put(v___y_1263_, v___x_1274_);
v___x_1276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1276_, 0, v___x_1271_);
return v___x_1276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___redArg___boxed(lean_object* v_pu_1279_, lean_object* v_params_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_){
_start:
{
uint8_t v_pu_boxed_1283_; lean_object* v_res_1284_; 
v_pu_boxed_1283_ = lean_unbox(v_pu_1279_);
v_res_1284_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v_pu_boxed_1283_, v_params_1280_, v___y_1281_);
lean_dec(v___y_1281_);
lean_dec_ref(v_params_1280_);
return v_res_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams(uint8_t v_pu_1285_, lean_object* v_params_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_){
_start:
{
lean_object* v___x_1292_; 
v___x_1292_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v_pu_1285_, v_params_1286_, v___y_1288_);
return v___x_1292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseParams___boxed(lean_object* v_pu_1293_, lean_object* v_params_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_){
_start:
{
uint8_t v_pu_boxed_1300_; lean_object* v_res_1301_; 
v_pu_boxed_1300_ = lean_unbox(v_pu_1293_);
v_res_1301_ = l_Lean_Compiler_LCNF_eraseParams(v_pu_boxed_1300_, v_params_1294_, v___y_1295_, v___y_1296_, v___y_1297_, v___y_1298_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
lean_dec_ref(v_params_1294_);
return v_res_1301_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(uint8_t v_pu_1302_, lean_object* v_decl_1303_, lean_object* v___y_1304_){
_start:
{
switch(lean_obj_tag(v_decl_1303_))
{
case 0:
{
lean_object* v_decl_1306_; lean_object* v___x_1307_; 
v_decl_1306_ = lean_ctor_get(v_decl_1303_, 0);
v___x_1307_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v_pu_1302_, v_decl_1306_, v___y_1304_);
return v___x_1307_;
}
case 1:
{
lean_object* v_decl_1308_; uint8_t v___x_1309_; lean_object* v___x_1310_; 
v_decl_1308_ = lean_ctor_get(v_decl_1303_, 0);
v___x_1309_ = 1;
v___x_1310_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_1302_, v_decl_1308_, v___x_1309_, v___y_1304_);
return v___x_1310_;
}
case 2:
{
lean_object* v_decl_1311_; uint8_t v___x_1312_; lean_object* v___x_1313_; 
v_decl_1311_ = lean_ctor_get(v_decl_1303_, 0);
v___x_1312_ = 1;
v___x_1313_ = l_Lean_Compiler_LCNF_eraseFunDecl___redArg(v_pu_1302_, v_decl_1311_, v___x_1312_, v___y_1304_);
return v___x_1313_;
}
default: 
{
lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1314_ = lean_box(0);
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1314_);
return v___x_1315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___redArg___boxed(lean_object* v_pu_1316_, lean_object* v_decl_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
uint8_t v_pu_boxed_1320_; lean_object* v_res_1321_; 
v_pu_boxed_1320_ = lean_unbox(v_pu_1316_);
v_res_1321_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v_pu_boxed_1320_, v_decl_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v_decl_1317_);
return v_res_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl(uint8_t v_pu_1322_, lean_object* v_decl_1323_, lean_object* v___y_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_){
_start:
{
lean_object* v___x_1329_; 
v___x_1329_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v_pu_1322_, v_decl_1323_, v___y_1325_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecl___boxed(lean_object* v_pu_1330_, lean_object* v_decl_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_){
_start:
{
uint8_t v_pu_boxed_1337_; lean_object* v_res_1338_; 
v_pu_boxed_1337_ = lean_unbox(v_pu_1330_);
v_res_1338_ = l_Lean_Compiler_LCNF_eraseCodeDecl(v_pu_boxed_1337_, v_decl_1331_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_);
lean_dec(v___y_1335_);
lean_dec_ref(v___y_1334_);
lean_dec(v___y_1333_);
lean_dec_ref(v___y_1332_);
lean_dec_ref(v_decl_1331_);
return v_res_1338_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(uint8_t v_pu_1339_, lean_object* v_as_1340_, size_t v_i_1341_, size_t v_stop_1342_, lean_object* v_b_1343_, lean_object* v___y_1344_){
_start:
{
uint8_t v___x_1346_; 
v___x_1346_ = lean_usize_dec_eq(v_i_1341_, v_stop_1342_);
if (v___x_1346_ == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1347_ = lean_array_uget_borrowed(v_as_1340_, v_i_1341_);
v___x_1348_ = l_Lean_Compiler_LCNF_eraseCodeDecl___redArg(v_pu_1339_, v___x_1347_, v___y_1344_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; size_t v___x_1350_; size_t v___x_1351_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v___x_1350_ = ((size_t)1ULL);
v___x_1351_ = lean_usize_add(v_i_1341_, v___x_1350_);
v_i_1341_ = v___x_1351_;
v_b_1343_ = v_a_1349_;
goto _start;
}
else
{
return v___x_1348_;
}
}
else
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v_b_1343_);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg___boxed(lean_object* v_pu_1354_, lean_object* v_as_1355_, lean_object* v_i_1356_, lean_object* v_stop_1357_, lean_object* v_b_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_){
_start:
{
uint8_t v_pu_boxed_1361_; size_t v_i_boxed_1362_; size_t v_stop_boxed_1363_; lean_object* v_res_1364_; 
v_pu_boxed_1361_ = lean_unbox(v_pu_1354_);
v_i_boxed_1362_ = lean_unbox_usize(v_i_1356_);
lean_dec(v_i_1356_);
v_stop_boxed_1363_ = lean_unbox_usize(v_stop_1357_);
lean_dec(v_stop_1357_);
v_res_1364_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_boxed_1361_, v_as_1355_, v_i_boxed_1362_, v_stop_boxed_1363_, v_b_1358_, v___y_1359_);
lean_dec(v___y_1359_);
lean_dec_ref(v_as_1355_);
return v_res_1364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls(uint8_t v_pu_1365_, lean_object* v_decls_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; uint8_t v___x_1375_; 
v___x_1372_ = lean_unsigned_to_nat(0u);
v___x_1373_ = lean_array_get_size(v_decls_1366_);
v___x_1374_ = lean_box(0);
v___x_1375_ = lean_nat_dec_lt(v___x_1372_, v___x_1373_);
if (v___x_1375_ == 0)
{
lean_object* v___x_1376_; 
v___x_1376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1376_, 0, v___x_1374_);
return v___x_1376_;
}
else
{
uint8_t v___x_1377_; 
v___x_1377_ = lean_nat_dec_le(v___x_1373_, v___x_1373_);
if (v___x_1377_ == 0)
{
if (v___x_1375_ == 0)
{
lean_object* v___x_1378_; 
v___x_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1378_, 0, v___x_1374_);
return v___x_1378_;
}
else
{
size_t v___x_1379_; size_t v___x_1380_; lean_object* v___x_1381_; 
v___x_1379_ = ((size_t)0ULL);
v___x_1380_ = lean_usize_of_nat(v___x_1373_);
v___x_1381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_1365_, v_decls_1366_, v___x_1379_, v___x_1380_, v___x_1374_, v___y_1368_);
return v___x_1381_;
}
}
else
{
size_t v___x_1382_; size_t v___x_1383_; lean_object* v___x_1384_; 
v___x_1382_ = ((size_t)0ULL);
v___x_1383_ = lean_usize_of_nat(v___x_1373_);
v___x_1384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_1365_, v_decls_1366_, v___x_1382_, v___x_1383_, v___x_1374_, v___y_1368_);
return v___x_1384_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseCodeDecls___boxed(lean_object* v_pu_1385_, lean_object* v_decls_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_){
_start:
{
uint8_t v_pu_boxed_1392_; lean_object* v_res_1393_; 
v_pu_boxed_1392_ = lean_unbox(v_pu_1385_);
v_res_1393_ = l_Lean_Compiler_LCNF_eraseCodeDecls(v_pu_boxed_1392_, v_decls_1386_, v___y_1387_, v___y_1388_, v___y_1389_, v___y_1390_);
lean_dec(v___y_1390_);
lean_dec_ref(v___y_1389_);
lean_dec(v___y_1388_);
lean_dec_ref(v___y_1387_);
lean_dec_ref(v_decls_1386_);
return v_res_1393_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0(uint8_t v_pu_1394_, lean_object* v_as_1395_, size_t v_i_1396_, size_t v_stop_1397_, lean_object* v_b_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v___x_1404_; 
v___x_1404_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___redArg(v_pu_1394_, v_as_1395_, v_i_1396_, v_stop_1397_, v_b_1398_, v___y_1400_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0___boxed(lean_object* v_pu_1405_, lean_object* v_as_1406_, lean_object* v_i_1407_, lean_object* v_stop_1408_, lean_object* v_b_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_){
_start:
{
uint8_t v_pu_boxed_1415_; size_t v_i_boxed_1416_; size_t v_stop_boxed_1417_; lean_object* v_res_1418_; 
v_pu_boxed_1415_ = lean_unbox(v_pu_1405_);
v_i_boxed_1416_ = lean_unbox_usize(v_i_1407_);
lean_dec(v_i_1407_);
v_stop_boxed_1417_ = lean_unbox_usize(v_stop_1408_);
lean_dec(v_stop_1408_);
v_res_1418_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_eraseCodeDecls_spec__0(v_pu_boxed_1415_, v_as_1406_, v_i_boxed_1416_, v_stop_boxed_1417_, v_b_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_);
lean_dec(v___y_1413_);
lean_dec_ref(v___y_1412_);
lean_dec(v___y_1411_);
lean_dec_ref(v___y_1410_);
lean_dec_ref(v_as_1406_);
return v_res_1418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(lean_object* v_f_1419_, lean_object* v_v_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
if (lean_obj_tag(v_v_1420_) == 0)
{
lean_object* v_code_1426_; lean_object* v___x_1427_; 
v_code_1426_ = lean_ctor_get(v_v_1420_, 0);
lean_inc_ref(v_code_1426_);
lean_dec_ref_known(v_v_1420_, 1);
lean_inc(v___y_1424_);
lean_inc_ref(v___y_1423_);
lean_inc(v___y_1422_);
lean_inc_ref(v___y_1421_);
v___x_1427_ = lean_apply_6(v_f_1419_, v_code_1426_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_, lean_box(0));
return v___x_1427_;
}
else
{
lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1435_; 
lean_dec_ref(v_f_1419_);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_v_1420_);
if (v_isSharedCheck_1435_ == 0)
{
lean_object* v_unused_1436_; 
v_unused_1436_ = lean_ctor_get(v_v_1420_, 0);
lean_dec(v_unused_1436_);
v___x_1429_ = v_v_1420_;
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
else
{
lean_dec(v_v_1420_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1435_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1431_; lean_object* v___x_1433_; 
v___x_1431_ = lean_box(0);
if (v_isShared_1430_ == 0)
{
lean_ctor_set_tag(v___x_1429_, 0);
lean_ctor_set(v___x_1429_, 0, v___x_1431_);
v___x_1433_ = v___x_1429_;
goto v_reusejp_1432_;
}
else
{
lean_object* v_reuseFailAlloc_1434_; 
v_reuseFailAlloc_1434_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1434_, 0, v___x_1431_);
v___x_1433_ = v_reuseFailAlloc_1434_;
goto v_reusejp_1432_;
}
v_reusejp_1432_:
{
return v___x_1433_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg___boxed(lean_object* v_f_1437_, lean_object* v_v_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_){
_start:
{
lean_object* v_res_1444_; 
v_res_1444_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(v_f_1437_, v_v_1438_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
lean_dec(v___y_1442_);
lean_dec_ref(v___y_1441_);
lean_dec(v___y_1440_);
lean_dec_ref(v___y_1439_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0(uint8_t v_pu_1445_, lean_object* v_f_1446_, lean_object* v_v_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
lean_object* v___x_1453_; 
v___x_1453_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(v_f_1446_, v_v_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
return v___x_1453_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___boxed(lean_object* v_pu_1454_, lean_object* v_f_1455_, lean_object* v_v_1456_, lean_object* v___y_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_){
_start:
{
uint8_t v_pu_boxed_1462_; lean_object* v_res_1463_; 
v_pu_boxed_1462_ = lean_unbox(v_pu_1454_);
v_res_1463_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0(v_pu_boxed_1462_, v_f_1455_, v_v_1456_, v___y_1457_, v___y_1458_, v___y_1459_, v___y_1460_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec(v___y_1458_);
lean_dec_ref(v___y_1457_);
return v_res_1463_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl(uint8_t v_pu_1464_, lean_object* v_decl_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_){
_start:
{
lean_object* v_toSignature_1471_; lean_object* v_value_1472_; lean_object* v_params_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; 
v_toSignature_1471_ = lean_ctor_get(v_decl_1465_, 0);
lean_inc_ref(v_toSignature_1471_);
v_value_1472_ = lean_ctor_get(v_decl_1465_, 1);
lean_inc_ref(v_value_1472_);
lean_dec_ref(v_decl_1465_);
v_params_1473_ = lean_ctor_get(v_toSignature_1471_, 3);
lean_inc_ref(v_params_1473_);
lean_dec_ref(v_toSignature_1471_);
v___x_1474_ = l_Lean_Compiler_LCNF_eraseParams___redArg(v_pu_1464_, v_params_1473_, v___y_1467_);
lean_dec_ref(v_params_1473_);
lean_dec_ref(v___x_1474_);
v___x_1475_ = lean_box(v_pu_1464_);
v___x_1476_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_eraseCode___boxed), 7, 1);
lean_closure_set(v___x_1476_, 0, v___x_1475_);
v___x_1477_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_eraseDecl_spec__0___redArg(v___x_1476_, v_value_1472_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_eraseDecl___boxed(lean_object* v_pu_1478_, lean_object* v_decl_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
uint8_t v_pu_boxed_1485_; lean_object* v_res_1486_; 
v_pu_boxed_1485_ = lean_unbox(v_pu_1478_);
v_res_1486_ = l_Lean_Compiler_LCNF_eraseDecl(v_pu_boxed_1485_, v_decl_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
return v_res_1486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase(uint8_t v_pu_1487_, lean_object* v_decl_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lean_Compiler_LCNF_eraseDecl(v_pu_1487_, v_decl_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_erase___boxed(lean_object* v_pu_1495_, lean_object* v_decl_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_){
_start:
{
uint8_t v_pu_boxed_1502_; lean_object* v_res_1503_; 
v_pu_boxed_1502_ = lean_unbox(v_pu_1495_);
v_res_1503_ = l_Lean_Compiler_LCNF_Decl_erase(v_pu_boxed_1502_, v_decl_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec_ref(v___y_1497_);
return v_res_1503_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go_spec__1(lean_object* v_msg_1504_){
_start:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; 
v___x_1505_ = l_Lean_instInhabitedExpr;
v___x_1506_ = lean_panic_fn_borrowed(v___x_1505_, v_msg_1504_);
return v___x_1506_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3(void){
_start:
{
lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; 
v___x_1510_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__2));
v___x_1511_ = lean_unsigned_to_nat(20u);
v___x_1512_ = lean_unsigned_to_nat(215u);
v___x_1513_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__1));
v___x_1514_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__0));
v___x_1515_ = l_mkPanicMessageWithDecl(v___x_1514_, v___x_1513_, v___x_1512_, v___x_1511_, v___x_1510_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(uint8_t v_pu_1516_, lean_object* v_s_1517_, uint8_t v_translator_1518_, lean_object* v_e_1519_){
_start:
{
uint8_t v___x_1520_; 
v___x_1520_ = l_Lean_Expr_hasFVar(v_e_1519_);
if (v___x_1520_ == 0)
{
return v_e_1519_;
}
else
{
switch(lean_obj_tag(v_e_1519_))
{
case 1:
{
lean_object* v_fvarId_1521_; lean_object* v___x_1522_; 
v_fvarId_1521_ = lean_ctor_get(v_e_1519_, 0);
v___x_1522_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_s_1517_, v_fvarId_1521_);
if (lean_obj_tag(v___x_1522_) == 0)
{
return v_e_1519_;
}
else
{
lean_object* v_val_1523_; 
lean_dec_ref_known(v_e_1519_, 1);
v_val_1523_ = lean_ctor_get(v___x_1522_, 0);
lean_inc(v_val_1523_);
lean_dec_ref_known(v___x_1522_, 1);
switch(lean_obj_tag(v_val_1523_))
{
case 0:
{
lean_object* v___x_1524_; 
v___x_1524_ = l_Lean_Compiler_LCNF_erasedExpr;
return v___x_1524_;
}
case 1:
{
if (v_translator_1518_ == 0)
{
lean_object* v_fvarId_1525_; lean_object* v___x_1526_; 
v_fvarId_1525_ = lean_ctor_get(v_val_1523_, 0);
lean_inc(v_fvarId_1525_);
lean_dec_ref_known(v_val_1523_, 1);
v___x_1526_ = l_Lean_Expr_fvar___override(v_fvarId_1525_);
v_e_1519_ = v___x_1526_;
goto _start;
}
else
{
lean_object* v_fvarId_1528_; lean_object* v___x_1529_; 
v_fvarId_1528_ = lean_ctor_get(v_val_1523_, 0);
lean_inc(v_fvarId_1528_);
lean_dec_ref_known(v_val_1523_, 1);
v___x_1529_ = l_Lean_Expr_fvar___override(v_fvarId_1528_);
return v___x_1529_;
}
}
default: 
{
if (v_translator_1518_ == 0)
{
lean_object* v_expr_1530_; 
v_expr_1530_ = lean_ctor_get(v_val_1523_, 0);
lean_inc_ref(v_expr_1530_);
lean_dec_ref_known(v_val_1523_, 1);
v_e_1519_ = v_expr_1530_;
goto _start;
}
else
{
lean_object* v_expr_1532_; 
v_expr_1532_ = lean_ctor_get(v_val_1523_, 0);
lean_inc_ref(v_expr_1532_);
lean_dec_ref_known(v_val_1523_, 1);
return v_expr_1532_;
}
}
}
}
}
case 5:
{
lean_object* v_fn_1533_; lean_object* v_arg_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; size_t v___x_1537_; size_t v___x_1538_; uint8_t v___x_1539_; 
v_fn_1533_ = lean_ctor_get(v_e_1519_, 0);
v_arg_1534_ = lean_ctor_get(v_e_1519_, 1);
lean_inc_ref(v_fn_1533_);
v___x_1535_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(v_pu_1516_, v_s_1517_, v_translator_1518_, v_fn_1533_);
lean_inc_ref(v_arg_1534_);
v___x_1536_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1516_, v_s_1517_, v_translator_1518_, v_arg_1534_);
v___x_1537_ = lean_ptr_addr(v_fn_1533_);
v___x_1538_ = lean_ptr_addr(v___x_1535_);
v___x_1539_ = lean_usize_dec_eq(v___x_1537_, v___x_1538_);
if (v___x_1539_ == 0)
{
lean_object* v___x_1540_; lean_object* v___x_1541_; 
lean_dec_ref_known(v_e_1519_, 2);
v___x_1540_ = l_Lean_Expr_app___override(v___x_1535_, v___x_1536_);
v___x_1541_ = l_Lean_Expr_headBeta(v___x_1540_);
return v___x_1541_;
}
else
{
size_t v___x_1542_; size_t v___x_1543_; uint8_t v___x_1544_; 
v___x_1542_ = lean_ptr_addr(v_arg_1534_);
v___x_1543_ = lean_ptr_addr(v___x_1536_);
v___x_1544_ = lean_usize_dec_eq(v___x_1542_, v___x_1543_);
if (v___x_1544_ == 0)
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
lean_dec_ref_known(v_e_1519_, 2);
v___x_1545_ = l_Lean_Expr_app___override(v___x_1535_, v___x_1536_);
v___x_1546_ = l_Lean_Expr_headBeta(v___x_1545_);
return v___x_1546_;
}
else
{
lean_object* v___x_1547_; 
lean_dec_ref(v___x_1536_);
lean_dec_ref(v___x_1535_);
v___x_1547_ = l_Lean_Expr_headBeta(v_e_1519_);
return v___x_1547_;
}
}
}
case 6:
{
lean_object* v_binderName_1548_; lean_object* v_binderType_1549_; lean_object* v_body_1550_; uint8_t v_binderInfo_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; size_t v___x_1554_; size_t v___x_1555_; uint8_t v___x_1556_; 
v_binderName_1548_ = lean_ctor_get(v_e_1519_, 0);
v_binderType_1549_ = lean_ctor_get(v_e_1519_, 1);
v_body_1550_ = lean_ctor_get(v_e_1519_, 2);
v_binderInfo_1551_ = lean_ctor_get_uint8(v_e_1519_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1549_);
v___x_1552_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1516_, v_s_1517_, v_translator_1518_, v_binderType_1549_);
lean_inc_ref(v_body_1550_);
v___x_1553_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1516_, v_s_1517_, v_translator_1518_, v_body_1550_);
v___x_1554_ = lean_ptr_addr(v_binderType_1549_);
v___x_1555_ = lean_ptr_addr(v___x_1552_);
v___x_1556_ = lean_usize_dec_eq(v___x_1554_, v___x_1555_);
if (v___x_1556_ == 0)
{
lean_object* v___x_1557_; 
lean_inc(v_binderName_1548_);
lean_dec_ref_known(v_e_1519_, 3);
v___x_1557_ = l_Lean_Expr_lam___override(v_binderName_1548_, v___x_1552_, v___x_1553_, v_binderInfo_1551_);
return v___x_1557_;
}
else
{
size_t v___x_1558_; size_t v___x_1559_; uint8_t v___x_1560_; 
v___x_1558_ = lean_ptr_addr(v_body_1550_);
v___x_1559_ = lean_ptr_addr(v___x_1553_);
v___x_1560_ = lean_usize_dec_eq(v___x_1558_, v___x_1559_);
if (v___x_1560_ == 0)
{
lean_object* v___x_1561_; 
lean_inc(v_binderName_1548_);
lean_dec_ref_known(v_e_1519_, 3);
v___x_1561_ = l_Lean_Expr_lam___override(v_binderName_1548_, v___x_1552_, v___x_1553_, v_binderInfo_1551_);
return v___x_1561_;
}
else
{
uint8_t v___x_1562_; 
v___x_1562_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1551_, v_binderInfo_1551_);
if (v___x_1562_ == 0)
{
lean_object* v___x_1563_; 
lean_inc(v_binderName_1548_);
lean_dec_ref_known(v_e_1519_, 3);
v___x_1563_ = l_Lean_Expr_lam___override(v_binderName_1548_, v___x_1552_, v___x_1553_, v_binderInfo_1551_);
return v___x_1563_;
}
else
{
lean_dec_ref(v___x_1553_);
lean_dec_ref(v___x_1552_);
return v_e_1519_;
}
}
}
}
case 7:
{
lean_object* v_binderName_1564_; lean_object* v_binderType_1565_; lean_object* v_body_1566_; uint8_t v_binderInfo_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; size_t v___x_1570_; size_t v___x_1571_; uint8_t v___x_1572_; 
v_binderName_1564_ = lean_ctor_get(v_e_1519_, 0);
v_binderType_1565_ = lean_ctor_get(v_e_1519_, 1);
v_body_1566_ = lean_ctor_get(v_e_1519_, 2);
v_binderInfo_1567_ = lean_ctor_get_uint8(v_e_1519_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_1565_);
v___x_1568_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1516_, v_s_1517_, v_translator_1518_, v_binderType_1565_);
lean_inc_ref(v_body_1566_);
v___x_1569_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1516_, v_s_1517_, v_translator_1518_, v_body_1566_);
v___x_1570_ = lean_ptr_addr(v_binderType_1565_);
v___x_1571_ = lean_ptr_addr(v___x_1568_);
v___x_1572_ = lean_usize_dec_eq(v___x_1570_, v___x_1571_);
if (v___x_1572_ == 0)
{
lean_object* v___x_1573_; 
lean_inc(v_binderName_1564_);
lean_dec_ref_known(v_e_1519_, 3);
v___x_1573_ = l_Lean_Expr_forallE___override(v_binderName_1564_, v___x_1568_, v___x_1569_, v_binderInfo_1567_);
return v___x_1573_;
}
else
{
size_t v___x_1574_; size_t v___x_1575_; uint8_t v___x_1576_; 
v___x_1574_ = lean_ptr_addr(v_body_1566_);
v___x_1575_ = lean_ptr_addr(v___x_1569_);
v___x_1576_ = lean_usize_dec_eq(v___x_1574_, v___x_1575_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; 
lean_inc(v_binderName_1564_);
lean_dec_ref_known(v_e_1519_, 3);
v___x_1577_ = l_Lean_Expr_forallE___override(v_binderName_1564_, v___x_1568_, v___x_1569_, v_binderInfo_1567_);
return v___x_1577_;
}
else
{
uint8_t v___x_1578_; 
v___x_1578_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1567_, v_binderInfo_1567_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; 
lean_inc(v_binderName_1564_);
lean_dec_ref_known(v_e_1519_, 3);
v___x_1579_ = l_Lean_Expr_forallE___override(v_binderName_1564_, v___x_1568_, v___x_1569_, v_binderInfo_1567_);
return v___x_1579_;
}
else
{
lean_dec_ref(v___x_1569_);
lean_dec_ref(v___x_1568_);
return v_e_1519_;
}
}
}
}
case 8:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; 
lean_dec_ref_known(v_e_1519_, 4);
v___x_1580_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3, &l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___closed__3);
v___x_1581_ = l_panic___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go_spec__1(v___x_1580_);
return v___x_1581_;
}
case 10:
{
lean_object* v_data_1582_; lean_object* v_expr_1583_; lean_object* v___x_1584_; size_t v___x_1585_; size_t v___x_1586_; uint8_t v___x_1587_; 
v_data_1582_ = lean_ctor_get(v_e_1519_, 0);
v_expr_1583_ = lean_ctor_get(v_e_1519_, 1);
lean_inc_ref(v_expr_1583_);
v___x_1584_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1516_, v_s_1517_, v_translator_1518_, v_expr_1583_);
v___x_1585_ = lean_ptr_addr(v_expr_1583_);
v___x_1586_ = lean_ptr_addr(v___x_1584_);
v___x_1587_ = lean_usize_dec_eq(v___x_1585_, v___x_1586_);
if (v___x_1587_ == 0)
{
lean_object* v___x_1588_; 
lean_inc(v_data_1582_);
lean_dec_ref_known(v_e_1519_, 2);
v___x_1588_ = l_Lean_Expr_mdata___override(v_data_1582_, v___x_1584_);
return v___x_1588_;
}
else
{
lean_dec_ref(v___x_1584_);
return v_e_1519_;
}
}
case 11:
{
lean_object* v_typeName_1589_; lean_object* v_idx_1590_; lean_object* v_struct_1591_; lean_object* v___x_1592_; size_t v___x_1593_; size_t v___x_1594_; uint8_t v___x_1595_; 
v_typeName_1589_ = lean_ctor_get(v_e_1519_, 0);
v_idx_1590_ = lean_ctor_get(v_e_1519_, 1);
v_struct_1591_ = lean_ctor_get(v_e_1519_, 2);
lean_inc_ref(v_struct_1591_);
v___x_1592_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1516_, v_s_1517_, v_translator_1518_, v_struct_1591_);
v___x_1593_ = lean_ptr_addr(v_struct_1591_);
v___x_1594_ = lean_ptr_addr(v___x_1592_);
v___x_1595_ = lean_usize_dec_eq(v___x_1593_, v___x_1594_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; 
lean_inc(v_idx_1590_);
lean_inc(v_typeName_1589_);
lean_dec_ref_known(v_e_1519_, 3);
v___x_1596_ = l_Lean_Expr_proj___override(v_typeName_1589_, v_idx_1590_, v___x_1592_);
return v___x_1596_;
}
else
{
lean_dec_ref(v___x_1592_);
return v_e_1519_;
}
}
default: 
{
return v_e_1519_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(uint8_t v_pu_1597_, lean_object* v_s_1598_, uint8_t v_translator_1599_, lean_object* v_e_1600_){
_start:
{
if (lean_obj_tag(v_e_1600_) == 5)
{
lean_object* v_fn_1601_; lean_object* v_arg_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; size_t v___x_1605_; size_t v___x_1606_; uint8_t v___x_1607_; 
v_fn_1601_ = lean_ctor_get(v_e_1600_, 0);
v_arg_1602_ = lean_ctor_get(v_e_1600_, 1);
lean_inc_ref(v_fn_1601_);
v___x_1603_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(v_pu_1597_, v_s_1598_, v_translator_1599_, v_fn_1601_);
lean_inc_ref(v_arg_1602_);
v___x_1604_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1597_, v_s_1598_, v_translator_1599_, v_arg_1602_);
v___x_1605_ = lean_ptr_addr(v_fn_1601_);
v___x_1606_ = lean_ptr_addr(v___x_1603_);
v___x_1607_ = lean_usize_dec_eq(v___x_1605_, v___x_1606_);
if (v___x_1607_ == 0)
{
lean_object* v___x_1608_; 
lean_dec_ref_known(v_e_1600_, 2);
v___x_1608_ = l_Lean_Expr_app___override(v___x_1603_, v___x_1604_);
return v___x_1608_;
}
else
{
size_t v___x_1609_; size_t v___x_1610_; uint8_t v___x_1611_; 
v___x_1609_ = lean_ptr_addr(v_arg_1602_);
v___x_1610_ = lean_ptr_addr(v___x_1604_);
v___x_1611_ = lean_usize_dec_eq(v___x_1609_, v___x_1610_);
if (v___x_1611_ == 0)
{
lean_object* v___x_1612_; 
lean_dec_ref_known(v_e_1600_, 2);
v___x_1612_ = l_Lean_Expr_app___override(v___x_1603_, v___x_1604_);
return v___x_1612_;
}
else
{
lean_dec_ref(v___x_1604_);
lean_dec_ref(v___x_1603_);
return v_e_1600_;
}
}
}
else
{
lean_object* v___x_1613_; 
v___x_1613_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1597_, v_s_1598_, v_translator_1599_, v_e_1600_);
return v___x_1613_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp___boxed(lean_object* v_pu_1614_, lean_object* v_s_1615_, lean_object* v_translator_1616_, lean_object* v_e_1617_){
_start:
{
uint8_t v_pu_boxed_1618_; uint8_t v_translator_boxed_1619_; lean_object* v_res_1620_; 
v_pu_boxed_1618_ = lean_unbox(v_pu_1614_);
v_translator_boxed_1619_ = lean_unbox(v_translator_1616_);
v_res_1620_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_goApp(v_pu_boxed_1618_, v_s_1615_, v_translator_boxed_1619_, v_e_1617_);
lean_dec_ref(v_s_1615_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go___boxed(lean_object* v_pu_1621_, lean_object* v_s_1622_, lean_object* v_translator_1623_, lean_object* v_e_1624_){
_start:
{
uint8_t v_pu_boxed_1625_; uint8_t v_translator_boxed_1626_; lean_object* v_res_1627_; 
v_pu_boxed_1625_ = lean_unbox(v_pu_1621_);
v_translator_boxed_1626_ = lean_unbox(v_translator_1623_);
v_res_1627_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_boxed_1625_, v_s_1622_, v_translator_boxed_1626_, v_e_1624_);
lean_dec_ref(v_s_1622_);
return v_res_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp(uint8_t v_pu_1628_, lean_object* v_s_1629_, lean_object* v_e_1630_, uint8_t v_translator_1631_){
_start:
{
lean_object* v___x_1632_; 
v___x_1632_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1628_, v_s_1629_, v_translator_1631_, v_e_1630_);
return v___x_1632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp___boxed(lean_object* v_pu_1633_, lean_object* v_s_1634_, lean_object* v_e_1635_, lean_object* v_translator_1636_){
_start:
{
uint8_t v_pu_boxed_1637_; uint8_t v_translator_boxed_1638_; lean_object* v_res_1639_; 
v_pu_boxed_1637_ = lean_unbox(v_pu_1633_);
v_translator_boxed_1638_ = lean_unbox(v_translator_1636_);
v_res_1639_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp(v_pu_boxed_1637_, v_s_1634_, v_e_1635_, v_translator_boxed_1638_);
lean_dec_ref(v_s_1634_);
return v_res_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx(lean_object* v_x_1640_){
_start:
{
if (lean_obj_tag(v_x_1640_) == 0)
{
lean_object* v___x_1641_; 
v___x_1641_ = lean_unsigned_to_nat(0u);
return v___x_1641_;
}
else
{
lean_object* v___x_1642_; 
v___x_1642_ = lean_unsigned_to_nat(1u);
return v___x_1642_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx___boxed(lean_object* v_x_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorIdx(v_x_1643_);
lean_dec(v_x_1643_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(lean_object* v_t_1645_, lean_object* v_k_1646_){
_start:
{
if (lean_obj_tag(v_t_1645_) == 0)
{
lean_object* v_fvarId_1647_; lean_object* v___x_1648_; 
v_fvarId_1647_ = lean_ctor_get(v_t_1645_, 0);
lean_inc(v_fvarId_1647_);
lean_dec_ref_known(v_t_1645_, 1);
v___x_1648_ = lean_apply_1(v_k_1646_, v_fvarId_1647_);
return v___x_1648_;
}
else
{
return v_k_1646_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim(lean_object* v_motive_1649_, lean_object* v_ctorIdx_1650_, lean_object* v_t_1651_, lean_object* v_h_1652_, lean_object* v_k_1653_){
_start:
{
lean_object* v___x_1654_; 
v___x_1654_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1651_, v_k_1653_);
return v___x_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___boxed(lean_object* v_motive_1655_, lean_object* v_ctorIdx_1656_, lean_object* v_t_1657_, lean_object* v_h_1658_, lean_object* v_k_1659_){
_start:
{
lean_object* v_res_1660_; 
v_res_1660_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim(v_motive_1655_, v_ctorIdx_1656_, v_t_1657_, v_h_1658_, v_k_1659_);
lean_dec(v_ctorIdx_1656_);
return v_res_1660_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim___redArg(lean_object* v_t_1661_, lean_object* v_fvar_1662_){
_start:
{
lean_object* v___x_1663_; 
v___x_1663_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1661_, v_fvar_1662_);
return v___x_1663_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_fvar_elim(lean_object* v_motive_1664_, lean_object* v_t_1665_, lean_object* v_h_1666_, lean_object* v_fvar_1667_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1665_, v_fvar_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim___redArg(lean_object* v_t_1669_, lean_object* v_erased_1670_){
_start:
{
lean_object* v___x_1671_; 
v___x_1671_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1669_, v_erased_1670_);
return v___x_1671_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_NormFVarResult_erased_elim(lean_object* v_motive_1672_, lean_object* v_t_1673_, lean_object* v_h_1674_, lean_object* v_erased_1675_){
_start:
{
lean_object* v___x_1676_; 
v___x_1676_ = l_Lean_Compiler_LCNF_NormFVarResult_ctorElim___redArg(v_t_1673_, v_erased_1675_);
return v___x_1676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg(lean_object* v_s_1681_, lean_object* v_fvarId_1682_, uint8_t v_translator_1683_){
_start:
{
lean_object* v___x_1684_; 
v___x_1684_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_s_1681_, v_fvarId_1682_);
if (lean_obj_tag(v___x_1684_) == 0)
{
lean_object* v___x_1685_; 
v___x_1685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1685_, 0, v_fvarId_1682_);
return v___x_1685_;
}
else
{
lean_object* v_val_1686_; 
lean_dec(v_fvarId_1682_);
v_val_1686_ = lean_ctor_get(v___x_1684_, 0);
lean_inc(v_val_1686_);
lean_dec_ref_known(v___x_1684_, 1);
if (lean_obj_tag(v_val_1686_) == 1)
{
if (v_translator_1683_ == 0)
{
lean_object* v_fvarId_1687_; 
v_fvarId_1687_ = lean_ctor_get(v_val_1686_, 0);
lean_inc(v_fvarId_1687_);
lean_dec_ref_known(v_val_1686_, 1);
v_fvarId_1682_ = v_fvarId_1687_;
goto _start;
}
else
{
lean_object* v_fvarId_1689_; lean_object* v___x_1691_; uint8_t v_isShared_1692_; uint8_t v_isSharedCheck_1696_; 
v_fvarId_1689_ = lean_ctor_get(v_val_1686_, 0);
v_isSharedCheck_1696_ = !lean_is_exclusive(v_val_1686_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1691_ = v_val_1686_;
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
else
{
lean_inc(v_fvarId_1689_);
lean_dec(v_val_1686_);
v___x_1691_ = lean_box(0);
v_isShared_1692_ = v_isSharedCheck_1696_;
goto v_resetjp_1690_;
}
v_resetjp_1690_:
{
lean_object* v___x_1694_; 
if (v_isShared_1692_ == 0)
{
lean_ctor_set_tag(v___x_1691_, 0);
v___x_1694_ = v___x_1691_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_fvarId_1689_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
else
{
lean_object* v___x_1697_; 
lean_dec(v_val_1686_);
v___x_1697_ = lean_box(1);
return v___x_1697_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___redArg___boxed(lean_object* v_s_1698_, lean_object* v_fvarId_1699_, lean_object* v_translator_1700_){
_start:
{
uint8_t v_translator_boxed_1701_; lean_object* v_res_1702_; 
v_translator_boxed_1701_ = lean_unbox(v_translator_1700_);
v_res_1702_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1698_, v_fvarId_1699_, v_translator_boxed_1701_);
lean_dec_ref(v_s_1698_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp(uint8_t v_pu_1703_, lean_object* v_s_1704_, lean_object* v_fvarId_1705_, uint8_t v_translator_1706_){
_start:
{
lean_object* v___x_1707_; 
v___x_1707_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1704_, v_fvarId_1705_, v_translator_1706_);
return v___x_1707_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVarImp___boxed(lean_object* v_pu_1708_, lean_object* v_s_1709_, lean_object* v_fvarId_1710_, lean_object* v_translator_1711_){
_start:
{
uint8_t v_pu_boxed_1712_; uint8_t v_translator_boxed_1713_; lean_object* v_res_1714_; 
v_pu_boxed_1712_ = lean_unbox(v_pu_1708_);
v_translator_boxed_1713_ = lean_unbox(v_translator_1711_);
v_res_1714_ = l_Lean_Compiler_LCNF_normFVarImp(v_pu_boxed_1712_, v_s_1709_, v_fvarId_1710_, v_translator_boxed_1713_);
lean_dec_ref(v_s_1709_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(uint8_t v_pu_1715_, lean_object* v_s_1716_, lean_object* v_arg_1717_, uint8_t v_translator_1718_){
_start:
{
switch(lean_obj_tag(v_arg_1717_))
{
case 0:
{
return v_arg_1717_;
}
case 1:
{
lean_object* v_fvarId_1719_; lean_object* v___x_1720_; 
v_fvarId_1719_ = lean_ctor_get(v_arg_1717_, 0);
v___x_1720_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Compiler_LCNF_getType_spec__0___redArg(v_s_1716_, v_fvarId_1719_);
if (lean_obj_tag(v___x_1720_) == 0)
{
return v_arg_1717_;
}
else
{
lean_object* v_val_1721_; 
lean_dec_ref_known(v_arg_1717_, 1);
v_val_1721_ = lean_ctor_get(v___x_1720_, 0);
lean_inc(v_val_1721_);
lean_dec_ref_known(v___x_1720_, 1);
switch(lean_obj_tag(v_val_1721_))
{
case 0:
{
lean_object* v___x_1722_; 
v___x_1722_ = lean_box(0);
return v___x_1722_;
}
case 1:
{
lean_object* v_fvarId_1723_; lean_object* v___x_1725_; uint8_t v_isShared_1726_; uint8_t v_isSharedCheck_1731_; 
v_fvarId_1723_ = lean_ctor_get(v_val_1721_, 0);
v_isSharedCheck_1731_ = !lean_is_exclusive(v_val_1721_);
if (v_isSharedCheck_1731_ == 0)
{
v___x_1725_ = v_val_1721_;
v_isShared_1726_ = v_isSharedCheck_1731_;
goto v_resetjp_1724_;
}
else
{
lean_inc(v_fvarId_1723_);
lean_dec(v_val_1721_);
v___x_1725_ = lean_box(0);
v_isShared_1726_ = v_isSharedCheck_1731_;
goto v_resetjp_1724_;
}
v_resetjp_1724_:
{
lean_object* v___x_1728_; 
if (v_isShared_1726_ == 0)
{
v___x_1728_ = v___x_1725_;
goto v_reusejp_1727_;
}
else
{
lean_object* v_reuseFailAlloc_1730_; 
v_reuseFailAlloc_1730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1730_, 0, v_fvarId_1723_);
v___x_1728_ = v_reuseFailAlloc_1730_;
goto v_reusejp_1727_;
}
v_reusejp_1727_:
{
if (v_translator_1718_ == 0)
{
v_arg_1717_ = v___x_1728_;
goto _start;
}
else
{
return v___x_1728_;
}
}
}
}
default: 
{
lean_object* v_expr_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
v_expr_1732_ = lean_ctor_get(v_val_1721_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v_val_1721_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v_val_1721_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_expr_1732_);
lean_dec(v_val_1721_);
v___x_1734_ = lean_box(0);
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
v_resetjp_1733_:
{
lean_object* v___x_1737_; 
if (v_isShared_1735_ == 0)
{
v___x_1737_ = v___x_1734_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1738_; 
v_reuseFailAlloc_1738_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_expr_1732_);
v___x_1737_ = v_reuseFailAlloc_1738_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
return v___x_1737_;
}
}
}
}
}
}
default: 
{
lean_object* v_expr_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; 
v_expr_1740_ = lean_ctor_get(v_arg_1717_, 0);
lean_inc_ref(v_expr_1740_);
v___x_1741_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_1715_, v_s_1716_, v_translator_1718_, v_expr_1740_);
v___x_1742_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(v_pu_1715_, v_arg_1717_, v___x_1741_);
return v___x_1742_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp___boxed(lean_object* v_pu_1743_, lean_object* v_s_1744_, lean_object* v_arg_1745_, lean_object* v_translator_1746_){
_start:
{
uint8_t v_pu_boxed_1747_; uint8_t v_translator_boxed_1748_; lean_object* v_res_1749_; 
v_pu_boxed_1747_ = lean_unbox(v_pu_1743_);
v_translator_boxed_1748_ = lean_unbox(v_translator_1746_);
v_res_1749_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_boxed_1747_, v_s_1744_, v_arg_1745_, v_translator_boxed_1748_);
lean_dec_ref(v_s_1744_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(uint8_t v_pu_1750_, lean_object* v_s_1751_, uint8_t v_translator_1752_, lean_object* v_i_1753_, lean_object* v_as_1754_){
_start:
{
lean_object* v___x_1755_; uint8_t v___x_1756_; 
v___x_1755_ = lean_array_get_size(v_as_1754_);
v___x_1756_ = lean_nat_dec_lt(v_i_1753_, v___x_1755_);
if (v___x_1756_ == 0)
{
lean_dec(v_i_1753_);
return v_as_1754_;
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1758_; size_t v___x_1759_; size_t v___x_1760_; uint8_t v___x_1761_; 
v_a_1757_ = lean_array_fget_borrowed(v_as_1754_, v_i_1753_);
lean_inc(v_a_1757_);
v___x_1758_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_1750_, v_s_1751_, v_a_1757_, v_translator_1752_);
v___x_1759_ = lean_ptr_addr(v_a_1757_);
v___x_1760_ = lean_ptr_addr(v___x_1758_);
v___x_1761_ = lean_usize_dec_eq(v___x_1759_, v___x_1760_);
if (v___x_1761_ == 0)
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; 
v___x_1762_ = lean_unsigned_to_nat(1u);
v___x_1763_ = lean_nat_add(v_i_1753_, v___x_1762_);
v___x_1764_ = lean_array_fset(v_as_1754_, v_i_1753_, v___x_1758_);
lean_dec(v_i_1753_);
v_i_1753_ = v___x_1763_;
v_as_1754_ = v___x_1764_;
goto _start;
}
else
{
lean_object* v___x_1766_; lean_object* v___x_1767_; 
lean_dec(v___x_1758_);
v___x_1766_ = lean_unsigned_to_nat(1u);
v___x_1767_ = lean_nat_add(v_i_1753_, v___x_1766_);
lean_dec(v_i_1753_);
v_i_1753_ = v___x_1767_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0___boxed(lean_object* v_pu_1769_, lean_object* v_s_1770_, lean_object* v_translator_1771_, lean_object* v_i_1772_, lean_object* v_as_1773_){
_start:
{
uint8_t v_pu_boxed_1774_; uint8_t v_translator_boxed_1775_; lean_object* v_res_1776_; 
v_pu_boxed_1774_ = lean_unbox(v_pu_1769_);
v_translator_boxed_1775_ = lean_unbox(v_translator_1771_);
v_res_1776_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(v_pu_boxed_1774_, v_s_1770_, v_translator_boxed_1775_, v_i_1772_, v_as_1773_);
lean_dec_ref(v_s_1770_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(uint8_t v_pu_1777_, lean_object* v_s_1778_, lean_object* v_args_1779_, uint8_t v_translator_1780_){
_start:
{
lean_object* v___x_1781_; lean_object* v___x_1782_; 
v___x_1781_ = lean_unsigned_to_nat(0u);
v___x_1782_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp_spec__0(v_pu_1777_, v_s_1778_, v_translator_1780_, v___x_1781_, v_args_1779_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp___boxed(lean_object* v_pu_1783_, lean_object* v_s_1784_, lean_object* v_args_1785_, lean_object* v_translator_1786_){
_start:
{
uint8_t v_pu_boxed_1787_; uint8_t v_translator_boxed_1788_; lean_object* v_res_1789_; 
v_pu_boxed_1787_ = lean_unbox(v_pu_1783_);
v_translator_boxed_1788_ = lean_unbox(v_translator_1786_);
v_res_1789_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_boxed_1787_, v_s_1784_, v_args_1785_, v_translator_boxed_1788_);
lean_dec_ref(v_s_1784_);
return v_res_1789_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(uint8_t v_pu_1790_, lean_object* v_s_1791_, lean_object* v_e_1792_, uint8_t v_translator_1793_){
_start:
{
lean_object* v_fvarId_1795_; lean_object* v_args_1801_; 
switch(lean_obj_tag(v_e_1792_))
{
case 2:
{
lean_object* v_struct_1804_; lean_object* v___x_1805_; 
v_struct_1804_ = lean_ctor_get(v_e_1792_, 2);
lean_inc(v_struct_1804_);
v___x_1805_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_struct_1804_, v_translator_1793_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_fvarId_1806_; lean_object* v___x_1807_; 
v_fvarId_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_fvarId_1806_);
lean_dec_ref_known(v___x_1805_, 1);
v___x_1807_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1790_, v_e_1792_, v_fvarId_1806_);
return v___x_1807_;
}
else
{
lean_object* v___x_1808_; 
lean_dec_ref_known(v_e_1792_, 3);
v___x_1808_ = lean_box(1);
return v___x_1808_;
}
}
case 3:
{
lean_object* v_args_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; 
v_args_1809_ = lean_ctor_get(v_e_1792_, 2);
lean_inc_ref(v_args_1809_);
v___x_1810_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1790_, v_s_1791_, v_args_1809_, v_translator_1793_);
v___x_1811_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_1792_, v___x_1810_);
return v___x_1811_;
}
case 4:
{
lean_object* v_fvarId_1812_; lean_object* v_args_1813_; lean_object* v___x_1814_; 
v_fvarId_1812_ = lean_ctor_get(v_e_1792_, 0);
v_args_1813_ = lean_ctor_get(v_e_1792_, 1);
lean_inc(v_fvarId_1812_);
v___x_1814_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_fvarId_1812_, v_translator_1793_);
if (lean_obj_tag(v___x_1814_) == 0)
{
lean_object* v_fvarId_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v_fvarId_1815_ = lean_ctor_get(v___x_1814_, 0);
lean_inc(v_fvarId_1815_);
lean_dec_ref_known(v___x_1814_, 1);
lean_inc_ref(v_args_1813_);
v___x_1816_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1790_, v_s_1791_, v_args_1813_, v_translator_1793_);
v___x_1817_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(v_e_1792_, v_fvarId_1815_, v___x_1816_);
lean_dec_ref_known(v_e_1792_, 2);
return v___x_1817_;
}
else
{
lean_object* v___x_1818_; 
lean_dec_ref_known(v_e_1792_, 2);
v___x_1818_ = lean_box(1);
return v___x_1818_;
}
}
case 5:
{
lean_object* v_args_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v_args_1819_ = lean_ctor_get(v_e_1792_, 1);
lean_inc_ref(v_args_1819_);
v___x_1820_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1790_, v_s_1791_, v_args_1819_, v_translator_1793_);
v___x_1821_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_1792_, v___x_1820_);
return v___x_1821_;
}
case 6:
{
lean_object* v_var_1822_; 
v_var_1822_ = lean_ctor_get(v_e_1792_, 1);
lean_inc(v_var_1822_);
v_fvarId_1795_ = v_var_1822_;
goto v___jp_1794_;
}
case 7:
{
lean_object* v_var_1823_; 
v_var_1823_ = lean_ctor_get(v_e_1792_, 1);
lean_inc(v_var_1823_);
v_fvarId_1795_ = v_var_1823_;
goto v___jp_1794_;
}
case 8:
{
lean_object* v_var_1824_; lean_object* v___x_1825_; 
v_var_1824_ = lean_ctor_get(v_e_1792_, 2);
lean_inc(v_var_1824_);
v___x_1825_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_var_1824_, v_translator_1793_);
if (lean_obj_tag(v___x_1825_) == 0)
{
lean_object* v_fvarId_1826_; lean_object* v___x_1827_; 
v_fvarId_1826_ = lean_ctor_get(v___x_1825_, 0);
lean_inc(v_fvarId_1826_);
lean_dec_ref_known(v___x_1825_, 1);
v___x_1827_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1790_, v_e_1792_, v_fvarId_1826_);
return v___x_1827_;
}
else
{
lean_object* v___x_1828_; 
lean_dec_ref_known(v_e_1792_, 3);
v___x_1828_ = lean_box(1);
return v___x_1828_;
}
}
case 9:
{
lean_object* v_args_1829_; 
v_args_1829_ = lean_ctor_get(v_e_1792_, 1);
lean_inc_ref(v_args_1829_);
v_args_1801_ = v_args_1829_;
goto v___jp_1800_;
}
case 10:
{
lean_object* v_args_1830_; 
v_args_1830_ = lean_ctor_get(v_e_1792_, 1);
lean_inc_ref(v_args_1830_);
v_args_1801_ = v_args_1830_;
goto v___jp_1800_;
}
case 11:
{
lean_object* v_n_1831_; lean_object* v_var_1832_; lean_object* v___x_1833_; 
v_n_1831_ = lean_ctor_get(v_e_1792_, 0);
lean_inc(v_n_1831_);
v_var_1832_ = lean_ctor_get(v_e_1792_, 1);
lean_inc(v_var_1832_);
v___x_1833_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_var_1832_, v_translator_1793_);
if (lean_obj_tag(v___x_1833_) == 0)
{
lean_object* v_fvarId_1834_; lean_object* v___x_1835_; 
v_fvarId_1834_ = lean_ctor_get(v___x_1833_, 0);
lean_inc(v_fvarId_1834_);
lean_dec_ref_known(v___x_1833_, 1);
v___x_1835_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(v_e_1792_, v_n_1831_, v_fvarId_1834_);
return v___x_1835_;
}
else
{
lean_object* v___x_1836_; 
lean_dec_ref_known(v_e_1792_, 2);
lean_dec(v_n_1831_);
v___x_1836_ = lean_box(1);
return v___x_1836_;
}
}
case 12:
{
lean_object* v_var_1837_; lean_object* v_i_1838_; uint8_t v_updateHeader_1839_; lean_object* v_args_1840_; lean_object* v___x_1841_; 
v_var_1837_ = lean_ctor_get(v_e_1792_, 0);
v_i_1838_ = lean_ctor_get(v_e_1792_, 1);
lean_inc_ref(v_i_1838_);
v_updateHeader_1839_ = lean_ctor_get_uint8(v_e_1792_, sizeof(void*)*3);
v_args_1840_ = lean_ctor_get(v_e_1792_, 2);
lean_inc(v_var_1837_);
v___x_1841_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_var_1837_, v_translator_1793_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_fvarId_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v_fvarId_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_fvarId_1842_);
lean_dec_ref_known(v___x_1841_, 1);
lean_inc_ref(v_args_1840_);
v___x_1843_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1790_, v_s_1791_, v_args_1840_, v_translator_1793_);
v___x_1844_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(v_e_1792_, v_fvarId_1842_, v_i_1838_, v_updateHeader_1839_, v___x_1843_);
return v___x_1844_;
}
else
{
lean_object* v___x_1845_; 
lean_dec_ref(v_i_1838_);
lean_dec_ref_known(v_e_1792_, 3);
v___x_1845_ = lean_box(1);
return v___x_1845_;
}
}
case 13:
{
lean_object* v_ty_1846_; lean_object* v_fvarId_1847_; lean_object* v___x_1848_; 
v_ty_1846_ = lean_ctor_get(v_e_1792_, 0);
lean_inc_ref(v_ty_1846_);
v_fvarId_1847_ = lean_ctor_get(v_e_1792_, 1);
lean_inc(v_fvarId_1847_);
v___x_1848_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_fvarId_1847_, v_translator_1793_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_fvarId_1849_; lean_object* v___x_1850_; 
v_fvarId_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_fvarId_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v___x_1850_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(v_e_1792_, v_ty_1846_, v_fvarId_1849_);
return v___x_1850_;
}
else
{
lean_object* v___x_1851_; 
lean_dec_ref(v_ty_1846_);
lean_dec_ref_known(v_e_1792_, 2);
v___x_1851_ = lean_box(1);
return v___x_1851_;
}
}
case 14:
{
lean_object* v_fvarId_1852_; lean_object* v___x_1853_; 
v_fvarId_1852_ = lean_ctor_get(v_e_1792_, 0);
lean_inc(v_fvarId_1852_);
v___x_1853_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_fvarId_1852_, v_translator_1793_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_fvarId_1854_; lean_object* v___x_1855_; 
v_fvarId_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_fvarId_1854_);
lean_dec_ref_known(v___x_1853_, 1);
v___x_1855_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(v_e_1792_, v_fvarId_1854_);
return v___x_1855_;
}
else
{
lean_object* v___x_1856_; 
lean_dec_ref_known(v_e_1792_, 1);
v___x_1856_ = lean_box(1);
return v___x_1856_;
}
}
case 15:
{
lean_object* v_fvarId_1857_; lean_object* v___x_1858_; 
v_fvarId_1857_ = lean_ctor_get(v_e_1792_, 0);
lean_inc(v_fvarId_1857_);
v___x_1858_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_fvarId_1857_, v_translator_1793_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_object* v_fvarId_1859_; lean_object* v___x_1860_; 
v_fvarId_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_fvarId_1859_);
lean_dec_ref_known(v___x_1858_, 1);
v___x_1860_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(v_e_1792_, v_fvarId_1859_);
return v___x_1860_;
}
else
{
lean_object* v___x_1861_; 
lean_dec_ref_known(v_e_1792_, 1);
v___x_1861_ = lean_box(1);
return v___x_1861_;
}
}
default: 
{
return v_e_1792_;
}
}
v___jp_1794_:
{
lean_object* v___x_1796_; 
v___x_1796_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_s_1791_, v_fvarId_1795_, v_translator_1793_);
if (lean_obj_tag(v___x_1796_) == 0)
{
lean_object* v_fvarId_1797_; lean_object* v___x_1798_; 
v_fvarId_1797_ = lean_ctor_get(v___x_1796_, 0);
lean_inc(v_fvarId_1797_);
lean_dec_ref_known(v___x_1796_, 1);
v___x_1798_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_1790_, v_e_1792_, v_fvarId_1797_);
return v___x_1798_;
}
else
{
lean_object* v___x_1799_; 
lean_dec(v_e_1792_);
v___x_1799_ = lean_box(1);
return v___x_1799_;
}
}
v___jp_1800_:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1802_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_1790_, v_s_1791_, v_args_1801_, v_translator_1793_);
v___x_1803_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_1792_, v___x_1802_);
return v___x_1803_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp___boxed(lean_object* v_pu_1862_, lean_object* v_s_1863_, lean_object* v_e_1864_, lean_object* v_translator_1865_){
_start:
{
uint8_t v_pu_boxed_1866_; uint8_t v_translator_boxed_1867_; lean_object* v_res_1868_; 
v_pu_boxed_1866_ = lean_unbox(v_pu_1862_);
v_translator_boxed_1867_ = lean_unbox(v_translator_1865_);
v_res_1868_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_boxed_1866_, v_s_1863_, v_e_1864_, v_translator_boxed_1867_);
lean_dec_ref(v_s_1863_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___redArg(lean_object* v_inst_1869_, lean_object* v_inst_1870_){
_start:
{
lean_object* v___x_1871_; 
v___x_1871_ = lean_apply_2(v_inst_1869_, lean_box(0), v_inst_1870_);
return v___x_1871_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift(uint8_t v_pu_1872_, uint8_t v_t_1873_, lean_object* v_m_1874_, lean_object* v_n_1875_, lean_object* v_inst_1876_, lean_object* v_inst_1877_){
_start:
{
lean_object* v___x_1878_; 
v___x_1878_ = lean_apply_2(v_inst_1876_, lean_box(0), v_inst_1877_);
return v___x_1878_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift___boxed(lean_object* v_pu_1879_, lean_object* v_t_1880_, lean_object* v_m_1881_, lean_object* v_n_1882_, lean_object* v_inst_1883_, lean_object* v_inst_1884_){
_start:
{
uint8_t v_pu_boxed_1885_; uint8_t v_t_boxed_1886_; lean_object* v_res_1887_; 
v_pu_boxed_1885_ = lean_unbox(v_pu_1879_);
v_t_boxed_1886_ = lean_unbox(v_t_1880_);
v_res_1887_ = l_Lean_Compiler_LCNF_instMonadFVarSubstOfMonadLift(v_pu_boxed_1885_, v_t_boxed_1886_, v_m_1881_, v_n_1882_, v_inst_1883_, v_inst_1884_);
return v_res_1887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0(lean_object* v_inst_1888_, lean_object* v_inst_1889_, lean_object* v_f_1890_){
_start:
{
lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1891_ = lean_apply_1(v_inst_1888_, v_f_1890_);
v___x_1892_ = lean_apply_2(v_inst_1889_, lean_box(0), v___x_1891_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg(lean_object* v_inst_1893_, lean_object* v_inst_1894_){
_start:
{
lean_object* v___f_1895_; 
v___f_1895_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1895_, 0, v_inst_1894_);
lean_closure_set(v___f_1895_, 1, v_inst_1893_);
return v___f_1895_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift(uint8_t v_pu_1896_, lean_object* v_m_1897_, lean_object* v_n_1898_, lean_object* v_inst_1899_, lean_object* v_inst_1900_){
_start:
{
lean_object* v___f_1901_; 
v___f_1901_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1901_, 0, v_inst_1900_);
lean_closure_set(v___f_1901_, 1, v_inst_1899_);
return v___f_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift___boxed(lean_object* v_pu_1902_, lean_object* v_m_1903_, lean_object* v_n_1904_, lean_object* v_inst_1905_, lean_object* v_inst_1906_){
_start:
{
uint8_t v_pu_boxed_1907_; lean_object* v_res_1908_; 
v_pu_boxed_1907_ = lean_unbox(v_pu_1902_);
v_res_1908_ = l_Lean_Compiler_LCNF_instMonadFVarSubstStateOfMonadLift(v_pu_boxed_1907_, v_m_1903_, v_n_1904_, v_inst_1905_, v_inst_1906_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg___lam__0(lean_object* v___x_1909_, lean_object* v___x_1910_, lean_object* v_fvarId_1911_, lean_object* v_arg_1912_, lean_object* v_s_1913_){
_start:
{
lean_object* v___x_1914_; 
v___x_1914_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_1909_, v___x_1910_, v_s_1913_, v_fvarId_1911_, v_arg_1912_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___redArg(lean_object* v_inst_1917_, lean_object* v_fvarId_1918_, lean_object* v_arg_1919_){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___f_1922_; lean_object* v___x_1923_; 
v___x_1920_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__0));
v___x_1921_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__1));
v___f_1922_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1922_, 0, v___x_1920_);
lean_closure_set(v___f_1922_, 1, v___x_1921_);
lean_closure_set(v___f_1922_, 2, v_fvarId_1918_);
lean_closure_set(v___f_1922_, 3, v_arg_1919_);
v___x_1923_ = lean_apply_1(v_inst_1917_, v___f_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst(lean_object* v_m_1924_, uint8_t v_pu_1925_, lean_object* v_inst_1926_, lean_object* v_fvarId_1927_, lean_object* v_arg_1928_){
_start:
{
lean_object* v___x_1929_; lean_object* v___x_1930_; lean_object* v___f_1931_; lean_object* v___x_1932_; 
v___x_1929_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__0));
v___x_1930_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__1));
v___f_1931_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1931_, 0, v___x_1929_);
lean_closure_set(v___f_1931_, 1, v___x_1930_);
lean_closure_set(v___f_1931_, 2, v_fvarId_1927_);
lean_closure_set(v___f_1931_, 3, v_arg_1928_);
v___x_1932_ = lean_apply_1(v_inst_1926_, v___f_1931_);
return v___x_1932_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addSubst___boxed(lean_object* v_m_1933_, lean_object* v_pu_1934_, lean_object* v_inst_1935_, lean_object* v_fvarId_1936_, lean_object* v_arg_1937_){
_start:
{
uint8_t v_pu_boxed_1938_; lean_object* v_res_1939_; 
v_pu_boxed_1938_ = lean_unbox(v_pu_1934_);
v_res_1939_ = l_Lean_Compiler_LCNF_addSubst(v_m_1933_, v_pu_boxed_1938_, v_inst_1935_, v_fvarId_1936_, v_arg_1937_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0(lean_object* v_fvarId_x27_1940_, lean_object* v___x_1941_, lean_object* v___x_1942_, lean_object* v_fvarId_1943_, lean_object* v_s_1944_){
_start:
{
lean_object* v___x_1945_; lean_object* v___x_1946_; 
v___x_1945_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1945_, 0, v_fvarId_x27_1940_);
v___x_1946_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_1941_, v___x_1942_, v_s_1944_, v_fvarId_1943_, v___x_1945_);
return v___x_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___redArg(lean_object* v_inst_1947_, lean_object* v_fvarId_1948_, lean_object* v_fvarId_x27_1949_){
_start:
{
lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___f_1952_; lean_object* v___x_1953_; 
v___x_1950_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__0));
v___x_1951_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__1));
v___f_1952_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1952_, 0, v_fvarId_x27_1949_);
lean_closure_set(v___f_1952_, 1, v___x_1950_);
lean_closure_set(v___f_1952_, 2, v___x_1951_);
lean_closure_set(v___f_1952_, 3, v_fvarId_1948_);
v___x_1953_ = lean_apply_1(v_inst_1947_, v___f_1952_);
return v___x_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst(lean_object* v_m_1954_, uint8_t v_ph_1955_, lean_object* v_inst_1956_, lean_object* v_fvarId_1957_, lean_object* v_fvarId_x27_1958_){
_start:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___f_1961_; lean_object* v___x_1962_; 
v___x_1959_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__0));
v___x_1960_ = ((lean_object*)(l_Lean_Compiler_LCNF_addSubst___redArg___closed__1));
v___f_1961_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_addFVarSubst___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1961_, 0, v_fvarId_x27_1958_);
lean_closure_set(v___f_1961_, 1, v___x_1959_);
lean_closure_set(v___f_1961_, 2, v___x_1960_);
lean_closure_set(v___f_1961_, 3, v_fvarId_1957_);
v___x_1962_ = lean_apply_1(v_inst_1956_, v___f_1961_);
return v___x_1962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_addFVarSubst___boxed(lean_object* v_m_1963_, lean_object* v_ph_1964_, lean_object* v_inst_1965_, lean_object* v_fvarId_1966_, lean_object* v_fvarId_x27_1967_){
_start:
{
uint8_t v_ph_boxed_1968_; lean_object* v_res_1969_; 
v_ph_boxed_1968_ = lean_unbox(v_ph_1964_);
v_res_1969_ = l_Lean_Compiler_LCNF_addFVarSubst(v_m_1963_, v_ph_boxed_1968_, v_inst_1965_, v_fvarId_1966_, v_fvarId_x27_1967_);
return v_res_1969_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0(lean_object* v_fvarId_1970_, uint8_t v_t_1971_, lean_object* v_toPure_1972_, lean_object* v_____do__lift_1973_){
_start:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1974_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v_____do__lift_1973_, v_fvarId_1970_, v_t_1971_);
v___x_1975_ = lean_apply_2(v_toPure_1972_, lean_box(0), v___x_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed(lean_object* v_fvarId_1976_, lean_object* v_t_1977_, lean_object* v_toPure_1978_, lean_object* v_____do__lift_1979_){
_start:
{
uint8_t v_t_boxed_1980_; lean_object* v_res_1981_; 
v_t_boxed_1980_ = lean_unbox(v_t_1977_);
v_res_1981_ = l_Lean_Compiler_LCNF_normFVar___redArg___lam__0(v_fvarId_1976_, v_t_boxed_1980_, v_toPure_1978_, v_____do__lift_1979_);
lean_dec_ref(v_____do__lift_1979_);
return v_res_1981_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg(uint8_t v_t_1982_, lean_object* v_inst_1983_, lean_object* v_inst_1984_, lean_object* v_fvarId_1985_){
_start:
{
lean_object* v_toApplicative_1986_; lean_object* v_toBind_1987_; lean_object* v_toPure_1988_; lean_object* v___x_1989_; lean_object* v___f_1990_; lean_object* v___x_1991_; 
v_toApplicative_1986_ = lean_ctor_get(v_inst_1984_, 0);
lean_inc_ref(v_toApplicative_1986_);
v_toBind_1987_ = lean_ctor_get(v_inst_1984_, 1);
lean_inc(v_toBind_1987_);
lean_dec_ref(v_inst_1984_);
v_toPure_1988_ = lean_ctor_get(v_toApplicative_1986_, 1);
lean_inc(v_toPure_1988_);
lean_dec_ref(v_toApplicative_1986_);
v___x_1989_ = lean_box(v_t_1982_);
v___f_1990_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_1990_, 0, v_fvarId_1985_);
lean_closure_set(v___f_1990_, 1, v___x_1989_);
lean_closure_set(v___f_1990_, 2, v_toPure_1988_);
v___x_1991_ = lean_apply_4(v_toBind_1987_, lean_box(0), lean_box(0), v_inst_1983_, v___f_1990_);
return v___x_1991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___redArg___boxed(lean_object* v_t_1992_, lean_object* v_inst_1993_, lean_object* v_inst_1994_, lean_object* v_fvarId_1995_){
_start:
{
uint8_t v_t_boxed_1996_; lean_object* v_res_1997_; 
v_t_boxed_1996_ = lean_unbox(v_t_1992_);
v_res_1997_ = l_Lean_Compiler_LCNF_normFVar___redArg(v_t_boxed_1996_, v_inst_1993_, v_inst_1994_, v_fvarId_1995_);
return v_res_1997_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar(lean_object* v_m_1998_, uint8_t v_pu_1999_, uint8_t v_t_2000_, lean_object* v_inst_2001_, lean_object* v_inst_2002_, lean_object* v_fvarId_2003_){
_start:
{
lean_object* v_toApplicative_2004_; lean_object* v_toBind_2005_; lean_object* v_toPure_2006_; lean_object* v___x_2007_; lean_object* v___f_2008_; lean_object* v___x_2009_; 
v_toApplicative_2004_ = lean_ctor_get(v_inst_2002_, 0);
lean_inc_ref(v_toApplicative_2004_);
v_toBind_2005_ = lean_ctor_get(v_inst_2002_, 1);
lean_inc(v_toBind_2005_);
lean_dec_ref(v_inst_2002_);
v_toPure_2006_ = lean_ctor_get(v_toApplicative_2004_, 1);
lean_inc(v_toPure_2006_);
lean_dec_ref(v_toApplicative_2004_);
v___x_2007_ = lean_box(v_t_2000_);
v___f_2008_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFVar___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_2008_, 0, v_fvarId_2003_);
lean_closure_set(v___f_2008_, 1, v___x_2007_);
lean_closure_set(v___f_2008_, 2, v_toPure_2006_);
v___x_2009_ = lean_apply_4(v_toBind_2005_, lean_box(0), lean_box(0), v_inst_2001_, v___f_2008_);
return v___x_2009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFVar___boxed(lean_object* v_m_2010_, lean_object* v_pu_2011_, lean_object* v_t_2012_, lean_object* v_inst_2013_, lean_object* v_inst_2014_, lean_object* v_fvarId_2015_){
_start:
{
uint8_t v_pu_boxed_2016_; uint8_t v_t_boxed_2017_; lean_object* v_res_2018_; 
v_pu_boxed_2016_ = lean_unbox(v_pu_2011_);
v_t_boxed_2017_ = lean_unbox(v_t_2012_);
v_res_2018_ = l_Lean_Compiler_LCNF_normFVar(v_m_2010_, v_pu_boxed_2016_, v_t_boxed_2017_, v_inst_2013_, v_inst_2014_, v_fvarId_2015_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0(uint8_t v_pu_2019_, uint8_t v_t_2020_, lean_object* v_e_2021_, lean_object* v_toPure_2022_, lean_object* v_____do__lift_2023_){
_start:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2024_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_2019_, v_____do__lift_2023_, v_t_2020_, v_e_2021_);
v___x_2025_ = lean_apply_2(v_toPure_2022_, lean_box(0), v___x_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed(lean_object* v_pu_2026_, lean_object* v_t_2027_, lean_object* v_e_2028_, lean_object* v_toPure_2029_, lean_object* v_____do__lift_2030_){
_start:
{
uint8_t v_pu_boxed_2031_; uint8_t v_t_boxed_2032_; lean_object* v_res_2033_; 
v_pu_boxed_2031_ = lean_unbox(v_pu_2026_);
v_t_boxed_2032_ = lean_unbox(v_t_2027_);
v_res_2033_ = l_Lean_Compiler_LCNF_normExpr___redArg___lam__0(v_pu_boxed_2031_, v_t_boxed_2032_, v_e_2028_, v_toPure_2029_, v_____do__lift_2030_);
lean_dec_ref(v_____do__lift_2030_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg(uint8_t v_pu_2034_, uint8_t v_t_2035_, lean_object* v_inst_2036_, lean_object* v_inst_2037_, lean_object* v_e_2038_){
_start:
{
lean_object* v_toApplicative_2039_; lean_object* v_toBind_2040_; lean_object* v_toPure_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___f_2044_; lean_object* v___x_2045_; 
v_toApplicative_2039_ = lean_ctor_get(v_inst_2037_, 0);
lean_inc_ref(v_toApplicative_2039_);
v_toBind_2040_ = lean_ctor_get(v_inst_2037_, 1);
lean_inc(v_toBind_2040_);
lean_dec_ref(v_inst_2037_);
v_toPure_2041_ = lean_ctor_get(v_toApplicative_2039_, 1);
lean_inc(v_toPure_2041_);
lean_dec_ref(v_toApplicative_2039_);
v___x_2042_ = lean_box(v_pu_2034_);
v___x_2043_ = lean_box(v_t_2035_);
v___f_2044_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2044_, 0, v___x_2042_);
lean_closure_set(v___f_2044_, 1, v___x_2043_);
lean_closure_set(v___f_2044_, 2, v_e_2038_);
lean_closure_set(v___f_2044_, 3, v_toPure_2041_);
v___x_2045_ = lean_apply_4(v_toBind_2040_, lean_box(0), lean_box(0), v_inst_2036_, v___f_2044_);
return v___x_2045_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___redArg___boxed(lean_object* v_pu_2046_, lean_object* v_t_2047_, lean_object* v_inst_2048_, lean_object* v_inst_2049_, lean_object* v_e_2050_){
_start:
{
uint8_t v_pu_boxed_2051_; uint8_t v_t_boxed_2052_; lean_object* v_res_2053_; 
v_pu_boxed_2051_ = lean_unbox(v_pu_2046_);
v_t_boxed_2052_ = lean_unbox(v_t_2047_);
v_res_2053_ = l_Lean_Compiler_LCNF_normExpr___redArg(v_pu_boxed_2051_, v_t_boxed_2052_, v_inst_2048_, v_inst_2049_, v_e_2050_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr(lean_object* v_m_2054_, uint8_t v_pu_2055_, uint8_t v_t_2056_, lean_object* v_inst_2057_, lean_object* v_inst_2058_, lean_object* v_e_2059_){
_start:
{
lean_object* v_toApplicative_2060_; lean_object* v_toBind_2061_; lean_object* v_toPure_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___f_2065_; lean_object* v___x_2066_; 
v_toApplicative_2060_ = lean_ctor_get(v_inst_2058_, 0);
lean_inc_ref(v_toApplicative_2060_);
v_toBind_2061_ = lean_ctor_get(v_inst_2058_, 1);
lean_inc(v_toBind_2061_);
lean_dec_ref(v_inst_2058_);
v_toPure_2062_ = lean_ctor_get(v_toApplicative_2060_, 1);
lean_inc(v_toPure_2062_);
lean_dec_ref(v_toApplicative_2060_);
v___x_2063_ = lean_box(v_pu_2055_);
v___x_2064_ = lean_box(v_t_2056_);
v___f_2065_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normExpr___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2065_, 0, v___x_2063_);
lean_closure_set(v___f_2065_, 1, v___x_2064_);
lean_closure_set(v___f_2065_, 2, v_e_2059_);
lean_closure_set(v___f_2065_, 3, v_toPure_2062_);
v___x_2066_ = lean_apply_4(v_toBind_2061_, lean_box(0), lean_box(0), v_inst_2057_, v___f_2065_);
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExpr___boxed(lean_object* v_m_2067_, lean_object* v_pu_2068_, lean_object* v_t_2069_, lean_object* v_inst_2070_, lean_object* v_inst_2071_, lean_object* v_e_2072_){
_start:
{
uint8_t v_pu_boxed_2073_; uint8_t v_t_boxed_2074_; lean_object* v_res_2075_; 
v_pu_boxed_2073_ = lean_unbox(v_pu_2068_);
v_t_boxed_2074_ = lean_unbox(v_t_2069_);
v_res_2075_ = l_Lean_Compiler_LCNF_normExpr(v_m_2067_, v_pu_boxed_2073_, v_t_boxed_2074_, v_inst_2070_, v_inst_2071_, v_e_2072_);
return v_res_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0(uint8_t v_pu_2076_, lean_object* v_arg_2077_, uint8_t v_t_2078_, lean_object* v_toPure_2079_, lean_object* v_____do__lift_2080_){
_start:
{
lean_object* v___x_2081_; lean_object* v___x_2082_; 
v___x_2081_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_2076_, v_____do__lift_2080_, v_arg_2077_, v_t_2078_);
v___x_2082_ = lean_apply_2(v_toPure_2079_, lean_box(0), v___x_2081_);
return v___x_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed(lean_object* v_pu_2083_, lean_object* v_arg_2084_, lean_object* v_t_2085_, lean_object* v_toPure_2086_, lean_object* v_____do__lift_2087_){
_start:
{
uint8_t v_pu_boxed_2088_; uint8_t v_t_boxed_2089_; lean_object* v_res_2090_; 
v_pu_boxed_2088_ = lean_unbox(v_pu_2083_);
v_t_boxed_2089_ = lean_unbox(v_t_2085_);
v_res_2090_ = l_Lean_Compiler_LCNF_normArg___redArg___lam__0(v_pu_boxed_2088_, v_arg_2084_, v_t_boxed_2089_, v_toPure_2086_, v_____do__lift_2087_);
lean_dec_ref(v_____do__lift_2087_);
return v_res_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg(uint8_t v_pu_2091_, uint8_t v_t_2092_, lean_object* v_inst_2093_, lean_object* v_inst_2094_, lean_object* v_arg_2095_){
_start:
{
lean_object* v_toApplicative_2096_; lean_object* v_toBind_2097_; lean_object* v_toPure_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___f_2101_; lean_object* v___x_2102_; 
v_toApplicative_2096_ = lean_ctor_get(v_inst_2094_, 0);
lean_inc_ref(v_toApplicative_2096_);
v_toBind_2097_ = lean_ctor_get(v_inst_2094_, 1);
lean_inc(v_toBind_2097_);
lean_dec_ref(v_inst_2094_);
v_toPure_2098_ = lean_ctor_get(v_toApplicative_2096_, 1);
lean_inc(v_toPure_2098_);
lean_dec_ref(v_toApplicative_2096_);
v___x_2099_ = lean_box(v_pu_2091_);
v___x_2100_ = lean_box(v_t_2092_);
v___f_2101_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2101_, 0, v___x_2099_);
lean_closure_set(v___f_2101_, 1, v_arg_2095_);
lean_closure_set(v___f_2101_, 2, v___x_2100_);
lean_closure_set(v___f_2101_, 3, v_toPure_2098_);
v___x_2102_ = lean_apply_4(v_toBind_2097_, lean_box(0), lean_box(0), v_inst_2093_, v___f_2101_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___redArg___boxed(lean_object* v_pu_2103_, lean_object* v_t_2104_, lean_object* v_inst_2105_, lean_object* v_inst_2106_, lean_object* v_arg_2107_){
_start:
{
uint8_t v_pu_boxed_2108_; uint8_t v_t_boxed_2109_; lean_object* v_res_2110_; 
v_pu_boxed_2108_ = lean_unbox(v_pu_2103_);
v_t_boxed_2109_ = lean_unbox(v_t_2104_);
v_res_2110_ = l_Lean_Compiler_LCNF_normArg___redArg(v_pu_boxed_2108_, v_t_boxed_2109_, v_inst_2105_, v_inst_2106_, v_arg_2107_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg(lean_object* v_m_2111_, uint8_t v_pu_2112_, uint8_t v_t_2113_, lean_object* v_inst_2114_, lean_object* v_inst_2115_, lean_object* v_arg_2116_){
_start:
{
lean_object* v_toApplicative_2117_; lean_object* v_toBind_2118_; lean_object* v_toPure_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___f_2122_; lean_object* v___x_2123_; 
v_toApplicative_2117_ = lean_ctor_get(v_inst_2115_, 0);
lean_inc_ref(v_toApplicative_2117_);
v_toBind_2118_ = lean_ctor_get(v_inst_2115_, 1);
lean_inc(v_toBind_2118_);
lean_dec_ref(v_inst_2115_);
v_toPure_2119_ = lean_ctor_get(v_toApplicative_2117_, 1);
lean_inc(v_toPure_2119_);
lean_dec_ref(v_toApplicative_2117_);
v___x_2120_ = lean_box(v_pu_2112_);
v___x_2121_ = lean_box(v_t_2113_);
v___f_2122_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normArg___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2122_, 0, v___x_2120_);
lean_closure_set(v___f_2122_, 1, v_arg_2116_);
lean_closure_set(v___f_2122_, 2, v___x_2121_);
lean_closure_set(v___f_2122_, 3, v_toPure_2119_);
v___x_2123_ = lean_apply_4(v_toBind_2118_, lean_box(0), lean_box(0), v_inst_2114_, v___f_2122_);
return v___x_2123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArg___boxed(lean_object* v_m_2124_, lean_object* v_pu_2125_, lean_object* v_t_2126_, lean_object* v_inst_2127_, lean_object* v_inst_2128_, lean_object* v_arg_2129_){
_start:
{
uint8_t v_pu_boxed_2130_; uint8_t v_t_boxed_2131_; lean_object* v_res_2132_; 
v_pu_boxed_2130_ = lean_unbox(v_pu_2125_);
v_t_boxed_2131_ = lean_unbox(v_t_2126_);
v_res_2132_ = l_Lean_Compiler_LCNF_normArg(v_m_2124_, v_pu_boxed_2130_, v_t_boxed_2131_, v_inst_2127_, v_inst_2128_, v_arg_2129_);
return v_res_2132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0(uint8_t v_pu_2133_, lean_object* v_e_2134_, uint8_t v_t_2135_, lean_object* v_toPure_2136_, lean_object* v_____do__lift_2137_){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_2133_, v_____do__lift_2137_, v_e_2134_, v_t_2135_);
v___x_2139_ = lean_apply_2(v_toPure_2136_, lean_box(0), v___x_2138_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed(lean_object* v_pu_2140_, lean_object* v_e_2141_, lean_object* v_t_2142_, lean_object* v_toPure_2143_, lean_object* v_____do__lift_2144_){
_start:
{
uint8_t v_pu_boxed_2145_; uint8_t v_t_boxed_2146_; lean_object* v_res_2147_; 
v_pu_boxed_2145_ = lean_unbox(v_pu_2140_);
v_t_boxed_2146_ = lean_unbox(v_t_2142_);
v_res_2147_ = l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0(v_pu_boxed_2145_, v_e_2141_, v_t_boxed_2146_, v_toPure_2143_, v_____do__lift_2144_);
lean_dec_ref(v_____do__lift_2144_);
return v_res_2147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg(uint8_t v_pu_2148_, uint8_t v_t_2149_, lean_object* v_inst_2150_, lean_object* v_inst_2151_, lean_object* v_e_2152_){
_start:
{
lean_object* v_toApplicative_2153_; lean_object* v_toBind_2154_; lean_object* v_toPure_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___f_2158_; lean_object* v___x_2159_; 
v_toApplicative_2153_ = lean_ctor_get(v_inst_2151_, 0);
lean_inc_ref(v_toApplicative_2153_);
v_toBind_2154_ = lean_ctor_get(v_inst_2151_, 1);
lean_inc(v_toBind_2154_);
lean_dec_ref(v_inst_2151_);
v_toPure_2155_ = lean_ctor_get(v_toApplicative_2153_, 1);
lean_inc(v_toPure_2155_);
lean_dec_ref(v_toApplicative_2153_);
v___x_2156_ = lean_box(v_pu_2148_);
v___x_2157_ = lean_box(v_t_2149_);
v___f_2158_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2158_, 0, v___x_2156_);
lean_closure_set(v___f_2158_, 1, v_e_2152_);
lean_closure_set(v___f_2158_, 2, v___x_2157_);
lean_closure_set(v___f_2158_, 3, v_toPure_2155_);
v___x_2159_ = lean_apply_4(v_toBind_2154_, lean_box(0), lean_box(0), v_inst_2150_, v___f_2158_);
return v___x_2159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___redArg___boxed(lean_object* v_pu_2160_, lean_object* v_t_2161_, lean_object* v_inst_2162_, lean_object* v_inst_2163_, lean_object* v_e_2164_){
_start:
{
uint8_t v_pu_boxed_2165_; uint8_t v_t_boxed_2166_; lean_object* v_res_2167_; 
v_pu_boxed_2165_ = lean_unbox(v_pu_2160_);
v_t_boxed_2166_ = lean_unbox(v_t_2161_);
v_res_2167_ = l_Lean_Compiler_LCNF_normLetValue___redArg(v_pu_boxed_2165_, v_t_boxed_2166_, v_inst_2162_, v_inst_2163_, v_e_2164_);
return v_res_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue(lean_object* v_m_2168_, uint8_t v_pu_2169_, uint8_t v_t_2170_, lean_object* v_inst_2171_, lean_object* v_inst_2172_, lean_object* v_e_2173_){
_start:
{
lean_object* v_toApplicative_2174_; lean_object* v_toBind_2175_; lean_object* v_toPure_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___f_2179_; lean_object* v___x_2180_; 
v_toApplicative_2174_ = lean_ctor_get(v_inst_2172_, 0);
lean_inc_ref(v_toApplicative_2174_);
v_toBind_2175_ = lean_ctor_get(v_inst_2172_, 1);
lean_inc(v_toBind_2175_);
lean_dec_ref(v_inst_2172_);
v_toPure_2176_ = lean_ctor_get(v_toApplicative_2174_, 1);
lean_inc(v_toPure_2176_);
lean_dec_ref(v_toApplicative_2174_);
v___x_2177_ = lean_box(v_pu_2169_);
v___x_2178_ = lean_box(v_t_2170_);
v___f_2179_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetValue___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2179_, 0, v___x_2177_);
lean_closure_set(v___f_2179_, 1, v_e_2173_);
lean_closure_set(v___f_2179_, 2, v___x_2178_);
lean_closure_set(v___f_2179_, 3, v_toPure_2176_);
v___x_2180_ = lean_apply_4(v_toBind_2175_, lean_box(0), lean_box(0), v_inst_2171_, v___f_2179_);
return v___x_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetValue___boxed(lean_object* v_m_2181_, lean_object* v_pu_2182_, lean_object* v_t_2183_, lean_object* v_inst_2184_, lean_object* v_inst_2185_, lean_object* v_e_2186_){
_start:
{
uint8_t v_pu_boxed_2187_; uint8_t v_t_boxed_2188_; lean_object* v_res_2189_; 
v_pu_boxed_2187_ = lean_unbox(v_pu_2182_);
v_t_boxed_2188_ = lean_unbox(v_t_2183_);
v_res_2189_ = l_Lean_Compiler_LCNF_normLetValue(v_m_2181_, v_pu_boxed_2187_, v_t_boxed_2188_, v_inst_2184_, v_inst_2185_, v_e_2186_);
return v_res_2189_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore(uint8_t v_pu_2190_, lean_object* v_s_2191_, lean_object* v_e_2192_, uint8_t v_translator_2193_){
_start:
{
lean_object* v___x_2194_; 
v___x_2194_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_2190_, v_s_2191_, v_translator_2193_, v_e_2192_);
return v___x_2194_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normExprCore___boxed(lean_object* v_pu_2195_, lean_object* v_s_2196_, lean_object* v_e_2197_, lean_object* v_translator_2198_){
_start:
{
uint8_t v_pu_boxed_2199_; uint8_t v_translator_boxed_2200_; lean_object* v_res_2201_; 
v_pu_boxed_2199_ = lean_unbox(v_pu_2195_);
v_translator_boxed_2200_ = lean_unbox(v_translator_2198_);
v_res_2201_ = l_Lean_Compiler_LCNF_normExprCore(v_pu_boxed_2199_, v_s_2196_, v_e_2197_, v_translator_boxed_2200_);
lean_dec_ref(v_s_2196_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0(uint8_t v_pu_2202_, lean_object* v_args_2203_, uint8_t v_t_2204_, lean_object* v_toPure_2205_, lean_object* v_____do__lift_2206_){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2207_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_2202_, v_____do__lift_2206_, v_args_2203_, v_t_2204_);
v___x_2208_ = lean_apply_2(v_toPure_2205_, lean_box(0), v___x_2207_);
return v___x_2208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___lam__0___boxed(lean_object* v_pu_2209_, lean_object* v_args_2210_, lean_object* v_t_2211_, lean_object* v_toPure_2212_, lean_object* v_____do__lift_2213_){
_start:
{
uint8_t v_pu_boxed_2214_; uint8_t v_t_boxed_2215_; lean_object* v_res_2216_; 
v_pu_boxed_2214_ = lean_unbox(v_pu_2209_);
v_t_boxed_2215_ = lean_unbox(v_t_2211_);
v_res_2216_ = l_Lean_Compiler_LCNF_normArgs___redArg___lam__0(v_pu_boxed_2214_, v_args_2210_, v_t_boxed_2215_, v_toPure_2212_, v_____do__lift_2213_);
lean_dec_ref(v_____do__lift_2213_);
return v_res_2216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg(uint8_t v_pu_2217_, uint8_t v_t_2218_, lean_object* v_inst_2219_, lean_object* v_inst_2220_, lean_object* v_args_2221_){
_start:
{
lean_object* v_toApplicative_2222_; lean_object* v_toBind_2223_; lean_object* v_toPure_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___f_2227_; lean_object* v___x_2228_; 
v_toApplicative_2222_ = lean_ctor_get(v_inst_2220_, 0);
lean_inc_ref(v_toApplicative_2222_);
v_toBind_2223_ = lean_ctor_get(v_inst_2220_, 1);
lean_inc(v_toBind_2223_);
lean_dec_ref(v_inst_2220_);
v_toPure_2224_ = lean_ctor_get(v_toApplicative_2222_, 1);
lean_inc(v_toPure_2224_);
lean_dec_ref(v_toApplicative_2222_);
v___x_2225_ = lean_box(v_pu_2217_);
v___x_2226_ = lean_box(v_t_2218_);
v___f_2227_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normArgs___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2227_, 0, v___x_2225_);
lean_closure_set(v___f_2227_, 1, v_args_2221_);
lean_closure_set(v___f_2227_, 2, v___x_2226_);
lean_closure_set(v___f_2227_, 3, v_toPure_2224_);
v___x_2228_ = lean_apply_4(v_toBind_2223_, lean_box(0), lean_box(0), v_inst_2219_, v___f_2227_);
return v___x_2228_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___redArg___boxed(lean_object* v_pu_2229_, lean_object* v_t_2230_, lean_object* v_inst_2231_, lean_object* v_inst_2232_, lean_object* v_args_2233_){
_start:
{
uint8_t v_pu_boxed_2234_; uint8_t v_t_boxed_2235_; lean_object* v_res_2236_; 
v_pu_boxed_2234_ = lean_unbox(v_pu_2229_);
v_t_boxed_2235_ = lean_unbox(v_t_2230_);
v_res_2236_ = l_Lean_Compiler_LCNF_normArgs___redArg(v_pu_boxed_2234_, v_t_boxed_2235_, v_inst_2231_, v_inst_2232_, v_args_2233_);
return v_res_2236_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs(lean_object* v_m_2237_, uint8_t v_pu_2238_, uint8_t v_t_2239_, lean_object* v_inst_2240_, lean_object* v_inst_2241_, lean_object* v_args_2242_){
_start:
{
lean_object* v___x_2243_; 
v___x_2243_ = l_Lean_Compiler_LCNF_normArgs___redArg(v_pu_2238_, v_t_2239_, v_inst_2240_, v_inst_2241_, v_args_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___boxed(lean_object* v_m_2244_, lean_object* v_pu_2245_, lean_object* v_t_2246_, lean_object* v_inst_2247_, lean_object* v_inst_2248_, lean_object* v_args_2249_){
_start:
{
uint8_t v_pu_boxed_2250_; uint8_t v_t_boxed_2251_; lean_object* v_res_2252_; 
v_pu_boxed_2250_ = lean_unbox(v_pu_2245_);
v_t_boxed_2251_ = lean_unbox(v_t_2246_);
v_res_2252_ = l_Lean_Compiler_LCNF_normArgs(v_m_2244_, v_pu_boxed_2250_, v_t_boxed_2251_, v_inst_2247_, v_inst_2248_, v_args_2249_);
return v_res_2252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(lean_object* v_binderName_2253_, lean_object* v___y_2254_){
_start:
{
lean_object* v___x_2256_; lean_object* v_nextIdx_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v_lctx_2260_; lean_object* v_nextIdx_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2272_; 
v___x_2256_ = lean_st_ref_get(v___y_2254_);
v_nextIdx_2257_ = lean_ctor_get(v___x_2256_, 1);
lean_inc(v_nextIdx_2257_);
lean_dec(v___x_2256_);
v___x_2258_ = l_Lean_Name_num___override(v_binderName_2253_, v_nextIdx_2257_);
v___x_2259_ = lean_st_ref_take(v___y_2254_);
v_lctx_2260_ = lean_ctor_get(v___x_2259_, 0);
v_nextIdx_2261_ = lean_ctor_get(v___x_2259_, 1);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2259_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2263_ = v___x_2259_;
v_isShared_2264_ = v_isSharedCheck_2272_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_nextIdx_2261_);
lean_inc(v_lctx_2260_);
lean_dec(v___x_2259_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2272_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2268_; 
v___x_2265_ = lean_unsigned_to_nat(1u);
v___x_2266_ = lean_nat_add(v_nextIdx_2261_, v___x_2265_);
lean_dec(v_nextIdx_2261_);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 1, v___x_2266_);
v___x_2268_ = v___x_2263_;
goto v_reusejp_2267_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_lctx_2260_);
lean_ctor_set(v_reuseFailAlloc_2271_, 1, v___x_2266_);
v___x_2268_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2267_;
}
v_reusejp_2267_:
{
lean_object* v___x_2269_; lean_object* v___x_2270_; 
v___x_2269_ = lean_st_ref_put(v___y_2254_, v___x_2268_);
v___x_2270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2258_);
return v___x_2270_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___redArg___boxed(lean_object* v_binderName_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_){
_start:
{
lean_object* v_res_2276_; 
v_res_2276_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_binderName_2273_, v___y_2274_);
lean_dec(v___y_2274_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName(lean_object* v_binderName_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_binderName_2277_, v___y_2279_);
return v___x_2283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshBinderName___boxed(lean_object* v_binderName_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_){
_start:
{
lean_object* v_res_2290_; 
v_res_2290_ = l_Lean_Compiler_LCNF_mkFreshBinderName(v_binderName_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_);
lean_dec(v___y_2288_);
lean_dec_ref(v___y_2287_);
lean_dec(v___y_2286_);
lean_dec_ref(v___y_2285_);
return v_res_2290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(lean_object* v_binderName_2291_, lean_object* v_baseName_2292_, lean_object* v___y_2293_){
_start:
{
uint8_t v___x_2295_; 
v___x_2295_ = l_Lean_Name_isAnonymous(v_binderName_2291_);
if (v___x_2295_ == 0)
{
lean_object* v___x_2296_; 
lean_dec(v_baseName_2292_);
v___x_2296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2296_, 0, v_binderName_2291_);
return v___x_2296_;
}
else
{
lean_object* v___x_2297_; 
lean_dec(v_binderName_2291_);
v___x_2297_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v_baseName_2292_, v___y_2293_);
return v___x_2297_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg___boxed(lean_object* v_binderName_2298_, lean_object* v_baseName_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_){
_start:
{
lean_object* v_res_2302_; 
v_res_2302_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2298_, v_baseName_2299_, v___y_2300_);
lean_dec(v___y_2300_);
return v_res_2302_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous(lean_object* v_binderName_2303_, lean_object* v_baseName_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v___x_2310_; 
v___x_2310_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2303_, v_baseName_2304_, v___y_2306_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ensureNotAnonymous___boxed(lean_object* v_binderName_2311_, lean_object* v_baseName_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_){
_start:
{
lean_object* v_res_2318_; 
v_res_2318_ = l_Lean_Compiler_LCNF_ensureNotAnonymous(v_binderName_2311_, v_baseName_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
return v_res_2318_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(lean_object* v___y_2319_){
_start:
{
lean_object* v___x_2321_; lean_object* v_ngen_2322_; lean_object* v_namePrefix_2323_; lean_object* v_idx_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2353_; 
v___x_2321_ = lean_st_ref_get(v___y_2319_);
v_ngen_2322_ = lean_ctor_get(v___x_2321_, 2);
lean_inc_ref(v_ngen_2322_);
lean_dec(v___x_2321_);
v_namePrefix_2323_ = lean_ctor_get(v_ngen_2322_, 0);
v_idx_2324_ = lean_ctor_get(v_ngen_2322_, 1);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_ngen_2322_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2326_ = v_ngen_2322_;
v_isShared_2327_ = v_isSharedCheck_2353_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_idx_2324_);
lean_inc(v_namePrefix_2323_);
lean_dec(v_ngen_2322_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2353_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v_r_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2332_; 
lean_inc(v_idx_2324_);
lean_inc(v_namePrefix_2323_);
v_r_2328_ = l_Lean_Name_num___override(v_namePrefix_2323_, v_idx_2324_);
v___x_2329_ = lean_unsigned_to_nat(1u);
v___x_2330_ = lean_nat_add(v_idx_2324_, v___x_2329_);
lean_dec(v_idx_2324_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set(v___x_2326_, 1, v___x_2330_);
v___x_2332_ = v___x_2326_;
goto v_reusejp_2331_;
}
else
{
lean_object* v_reuseFailAlloc_2352_; 
v_reuseFailAlloc_2352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2352_, 0, v_namePrefix_2323_);
lean_ctor_set(v_reuseFailAlloc_2352_, 1, v___x_2330_);
v___x_2332_ = v_reuseFailAlloc_2352_;
goto v_reusejp_2331_;
}
v_reusejp_2331_:
{
lean_object* v___x_2333_; lean_object* v_env_2334_; lean_object* v_nextMacroScope_2335_; lean_object* v_auxDeclNGen_2336_; lean_object* v_traceState_2337_; lean_object* v_cache_2338_; lean_object* v_messages_2339_; lean_object* v_infoState_2340_; lean_object* v_snapshotTasks_2341_; lean_object* v___x_2343_; uint8_t v_isShared_2344_; uint8_t v_isSharedCheck_2350_; 
v___x_2333_ = lean_st_ref_take(v___y_2319_);
v_env_2334_ = lean_ctor_get(v___x_2333_, 0);
v_nextMacroScope_2335_ = lean_ctor_get(v___x_2333_, 1);
v_auxDeclNGen_2336_ = lean_ctor_get(v___x_2333_, 3);
v_traceState_2337_ = lean_ctor_get(v___x_2333_, 4);
v_cache_2338_ = lean_ctor_get(v___x_2333_, 5);
v_messages_2339_ = lean_ctor_get(v___x_2333_, 6);
v_infoState_2340_ = lean_ctor_get(v___x_2333_, 7);
v_snapshotTasks_2341_ = lean_ctor_get(v___x_2333_, 8);
v_isSharedCheck_2350_ = !lean_is_exclusive(v___x_2333_);
if (v_isSharedCheck_2350_ == 0)
{
lean_object* v_unused_2351_; 
v_unused_2351_ = lean_ctor_get(v___x_2333_, 2);
lean_dec(v_unused_2351_);
v___x_2343_ = v___x_2333_;
v_isShared_2344_ = v_isSharedCheck_2350_;
goto v_resetjp_2342_;
}
else
{
lean_inc(v_snapshotTasks_2341_);
lean_inc(v_infoState_2340_);
lean_inc(v_messages_2339_);
lean_inc(v_cache_2338_);
lean_inc(v_traceState_2337_);
lean_inc(v_auxDeclNGen_2336_);
lean_inc(v_nextMacroScope_2335_);
lean_inc(v_env_2334_);
lean_dec(v___x_2333_);
v___x_2343_ = lean_box(0);
v_isShared_2344_ = v_isSharedCheck_2350_;
goto v_resetjp_2342_;
}
v_resetjp_2342_:
{
lean_object* v___x_2346_; 
if (v_isShared_2344_ == 0)
{
lean_ctor_set(v___x_2343_, 2, v___x_2332_);
v___x_2346_ = v___x_2343_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2349_; 
v_reuseFailAlloc_2349_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2349_, 0, v_env_2334_);
lean_ctor_set(v_reuseFailAlloc_2349_, 1, v_nextMacroScope_2335_);
lean_ctor_set(v_reuseFailAlloc_2349_, 2, v___x_2332_);
lean_ctor_set(v_reuseFailAlloc_2349_, 3, v_auxDeclNGen_2336_);
lean_ctor_set(v_reuseFailAlloc_2349_, 4, v_traceState_2337_);
lean_ctor_set(v_reuseFailAlloc_2349_, 5, v_cache_2338_);
lean_ctor_set(v_reuseFailAlloc_2349_, 6, v_messages_2339_);
lean_ctor_set(v_reuseFailAlloc_2349_, 7, v_infoState_2340_);
lean_ctor_set(v_reuseFailAlloc_2349_, 8, v_snapshotTasks_2341_);
v___x_2346_ = v_reuseFailAlloc_2349_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_st_ref_put(v___y_2319_, v___x_2346_);
v___x_2348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2348_, 0, v_r_2328_);
return v___x_2348_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg___boxed(lean_object* v___y_2354_, lean_object* v___y_2355_){
_start:
{
lean_object* v_res_2356_; 
v_res_2356_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(v___y_2354_);
lean_dec(v___y_2354_);
return v_res_2356_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v___x_2362_; lean_object* v_a_2363_; lean_object* v___x_2365_; uint8_t v_isShared_2366_; uint8_t v_isSharedCheck_2370_; 
v___x_2362_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(v___y_2360_);
v_a_2363_ = lean_ctor_get(v___x_2362_, 0);
v_isSharedCheck_2370_ = !lean_is_exclusive(v___x_2362_);
if (v_isSharedCheck_2370_ == 0)
{
v___x_2365_ = v___x_2362_;
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
else
{
lean_inc(v_a_2363_);
lean_dec(v___x_2362_);
v___x_2365_ = lean_box(0);
v_isShared_2366_ = v_isSharedCheck_2370_;
goto v_resetjp_2364_;
}
v_resetjp_2364_:
{
lean_object* v___x_2368_; 
if (v_isShared_2366_ == 0)
{
v___x_2368_ = v___x_2365_;
goto v_reusejp_2367_;
}
else
{
lean_object* v_reuseFailAlloc_2369_; 
v_reuseFailAlloc_2369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2369_, 0, v_a_2363_);
v___x_2368_ = v_reuseFailAlloc_2369_;
goto v_reusejp_2367_;
}
v_reusejp_2367_:
{
return v___x_2368_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0___boxed(lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_){
_start:
{
lean_object* v_res_2376_; 
v_res_2376_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v___y_2371_, v___y_2372_, v___y_2373_, v___y_2374_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec(v___y_2372_);
lean_dec_ref(v___y_2371_);
return v_res_2376_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam(uint8_t v_pu_2380_, lean_object* v_binderName_2381_, lean_object* v_type_2382_, uint8_t v_borrow_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_){
_start:
{
lean_object* v___x_2389_; 
v___x_2389_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_);
if (lean_obj_tag(v___x_2389_) == 0)
{
lean_object* v_a_2390_; lean_object* v___x_2391_; lean_object* v___x_2392_; lean_object* v_a_2393_; lean_object* v___x_2395_; uint8_t v_isShared_2396_; uint8_t v_isSharedCheck_2413_; 
v_a_2390_ = lean_ctor_get(v___x_2389_, 0);
lean_inc(v_a_2390_);
lean_dec_ref_known(v___x_2389_, 1);
v___x_2391_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkParam___closed__1));
v___x_2392_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2381_, v___x_2391_, v___y_2385_);
v_a_2393_ = lean_ctor_get(v___x_2392_, 0);
v_isSharedCheck_2413_ = !lean_is_exclusive(v___x_2392_);
if (v_isSharedCheck_2413_ == 0)
{
v___x_2395_ = v___x_2392_;
v_isShared_2396_ = v_isSharedCheck_2413_;
goto v_resetjp_2394_;
}
else
{
lean_inc(v_a_2393_);
lean_dec(v___x_2392_);
v___x_2395_ = lean_box(0);
v_isShared_2396_ = v_isSharedCheck_2413_;
goto v_resetjp_2394_;
}
v_resetjp_2394_:
{
lean_object* v___x_2397_; lean_object* v___x_2398_; lean_object* v_lctx_2399_; lean_object* v_nextIdx_2400_; lean_object* v___x_2402_; uint8_t v_isShared_2403_; uint8_t v_isSharedCheck_2412_; 
v___x_2397_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_2397_, 0, v_a_2390_);
lean_ctor_set(v___x_2397_, 1, v_a_2393_);
lean_ctor_set(v___x_2397_, 2, v_type_2382_);
lean_ctor_set_uint8(v___x_2397_, sizeof(void*)*3, v_borrow_2383_);
v___x_2398_ = lean_st_ref_take(v___y_2385_);
v_lctx_2399_ = lean_ctor_get(v___x_2398_, 0);
v_nextIdx_2400_ = lean_ctor_get(v___x_2398_, 1);
v_isSharedCheck_2412_ = !lean_is_exclusive(v___x_2398_);
if (v_isSharedCheck_2412_ == 0)
{
v___x_2402_ = v___x_2398_;
v_isShared_2403_ = v_isSharedCheck_2412_;
goto v_resetjp_2401_;
}
else
{
lean_inc(v_nextIdx_2400_);
lean_inc(v_lctx_2399_);
lean_dec(v___x_2398_);
v___x_2402_ = lean_box(0);
v_isShared_2403_ = v_isSharedCheck_2412_;
goto v_resetjp_2401_;
}
v_resetjp_2401_:
{
lean_object* v___x_2404_; lean_object* v___x_2406_; 
lean_inc_ref(v___x_2397_);
v___x_2404_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_2380_, v_lctx_2399_, v___x_2397_);
if (v_isShared_2403_ == 0)
{
lean_ctor_set(v___x_2402_, 0, v___x_2404_);
v___x_2406_ = v___x_2402_;
goto v_reusejp_2405_;
}
else
{
lean_object* v_reuseFailAlloc_2411_; 
v_reuseFailAlloc_2411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2411_, 0, v___x_2404_);
lean_ctor_set(v_reuseFailAlloc_2411_, 1, v_nextIdx_2400_);
v___x_2406_ = v_reuseFailAlloc_2411_;
goto v_reusejp_2405_;
}
v_reusejp_2405_:
{
lean_object* v___x_2407_; lean_object* v___x_2409_; 
v___x_2407_ = lean_st_ref_put(v___y_2385_, v___x_2406_);
if (v_isShared_2396_ == 0)
{
lean_ctor_set(v___x_2395_, 0, v___x_2397_);
v___x_2409_ = v___x_2395_;
goto v_reusejp_2408_;
}
else
{
lean_object* v_reuseFailAlloc_2410_; 
v_reuseFailAlloc_2410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2410_, 0, v___x_2397_);
v___x_2409_ = v_reuseFailAlloc_2410_;
goto v_reusejp_2408_;
}
v_reusejp_2408_:
{
return v___x_2409_;
}
}
}
}
}
else
{
lean_object* v_a_2414_; lean_object* v___x_2416_; uint8_t v_isShared_2417_; uint8_t v_isSharedCheck_2421_; 
lean_dec_ref(v_type_2382_);
lean_dec(v_binderName_2381_);
v_a_2414_ = lean_ctor_get(v___x_2389_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2389_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2416_ = v___x_2389_;
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
else
{
lean_inc(v_a_2414_);
lean_dec(v___x_2389_);
v___x_2416_ = lean_box(0);
v_isShared_2417_ = v_isSharedCheck_2421_;
goto v_resetjp_2415_;
}
v_resetjp_2415_:
{
lean_object* v___x_2419_; 
if (v_isShared_2417_ == 0)
{
v___x_2419_ = v___x_2416_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_a_2414_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
return v___x_2419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkParam___boxed(lean_object* v_pu_2422_, lean_object* v_binderName_2423_, lean_object* v_type_2424_, lean_object* v_borrow_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_){
_start:
{
uint8_t v_pu_boxed_2431_; uint8_t v_borrow_boxed_2432_; lean_object* v_res_2433_; 
v_pu_boxed_2431_ = lean_unbox(v_pu_2422_);
v_borrow_boxed_2432_ = lean_unbox(v_borrow_2425_);
v_res_2433_ = l_Lean_Compiler_LCNF_mkParam(v_pu_boxed_2431_, v_binderName_2423_, v_type_2424_, v_borrow_boxed_2432_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_);
lean_dec(v___y_2429_);
lean_dec_ref(v___y_2428_);
lean_dec(v___y_2427_);
lean_dec_ref(v___y_2426_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0(lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_){
_start:
{
lean_object* v___x_2439_; 
v___x_2439_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___redArg(v___y_2437_);
return v___x_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0___boxed(lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0_spec__0(v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl(uint8_t v_pu_2449_, lean_object* v_binderName_2450_, lean_object* v_type_2451_, lean_object* v_value_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v___x_2458_; 
v___x_2458_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v___y_2453_, v___y_2454_, v___y_2455_, v___y_2456_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2482_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
lean_inc(v_a_2459_);
lean_dec_ref_known(v___x_2458_, 1);
v___x_2460_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkLetDecl___closed__1));
v___x_2461_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2450_, v___x_2460_, v___y_2454_);
v_a_2462_ = lean_ctor_get(v___x_2461_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2461_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2464_ = v___x_2461_;
v_isShared_2465_ = v_isSharedCheck_2482_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2461_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2482_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v_lctx_2468_; lean_object* v_nextIdx_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2481_; 
v___x_2466_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2466_, 0, v_a_2459_);
lean_ctor_set(v___x_2466_, 1, v_a_2462_);
lean_ctor_set(v___x_2466_, 2, v_type_2451_);
lean_ctor_set(v___x_2466_, 3, v_value_2452_);
v___x_2467_ = lean_st_ref_take(v___y_2454_);
v_lctx_2468_ = lean_ctor_get(v___x_2467_, 0);
v_nextIdx_2469_ = lean_ctor_get(v___x_2467_, 1);
v_isSharedCheck_2481_ = !lean_is_exclusive(v___x_2467_);
if (v_isSharedCheck_2481_ == 0)
{
v___x_2471_ = v___x_2467_;
v_isShared_2472_ = v_isSharedCheck_2481_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_nextIdx_2469_);
lean_inc(v_lctx_2468_);
lean_dec(v___x_2467_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2481_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2473_; lean_object* v___x_2475_; 
lean_inc_ref(v___x_2466_);
v___x_2473_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v_pu_2449_, v_lctx_2468_, v___x_2466_);
if (v_isShared_2472_ == 0)
{
lean_ctor_set(v___x_2471_, 0, v___x_2473_);
v___x_2475_ = v___x_2471_;
goto v_reusejp_2474_;
}
else
{
lean_object* v_reuseFailAlloc_2480_; 
v_reuseFailAlloc_2480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2480_, 0, v___x_2473_);
lean_ctor_set(v_reuseFailAlloc_2480_, 1, v_nextIdx_2469_);
v___x_2475_ = v_reuseFailAlloc_2480_;
goto v_reusejp_2474_;
}
v_reusejp_2474_:
{
lean_object* v___x_2476_; lean_object* v___x_2478_; 
v___x_2476_ = lean_st_ref_put(v___y_2454_, v___x_2475_);
if (v_isShared_2465_ == 0)
{
lean_ctor_set(v___x_2464_, 0, v___x_2466_);
v___x_2478_ = v___x_2464_;
goto v_reusejp_2477_;
}
else
{
lean_object* v_reuseFailAlloc_2479_; 
v_reuseFailAlloc_2479_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2479_, 0, v___x_2466_);
v___x_2478_ = v_reuseFailAlloc_2479_;
goto v_reusejp_2477_;
}
v_reusejp_2477_:
{
return v___x_2478_;
}
}
}
}
}
else
{
lean_object* v_a_2483_; lean_object* v___x_2485_; uint8_t v_isShared_2486_; uint8_t v_isSharedCheck_2490_; 
lean_dec(v_value_2452_);
lean_dec_ref(v_type_2451_);
lean_dec(v_binderName_2450_);
v_a_2483_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2490_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2490_ == 0)
{
v___x_2485_ = v___x_2458_;
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
else
{
lean_inc(v_a_2483_);
lean_dec(v___x_2458_);
v___x_2485_ = lean_box(0);
v_isShared_2486_ = v_isSharedCheck_2490_;
goto v_resetjp_2484_;
}
v_resetjp_2484_:
{
lean_object* v___x_2488_; 
if (v_isShared_2486_ == 0)
{
v___x_2488_ = v___x_2485_;
goto v_reusejp_2487_;
}
else
{
lean_object* v_reuseFailAlloc_2489_; 
v_reuseFailAlloc_2489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2489_, 0, v_a_2483_);
v___x_2488_ = v_reuseFailAlloc_2489_;
goto v_reusejp_2487_;
}
v_reusejp_2487_:
{
return v___x_2488_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDecl___boxed(lean_object* v_pu_2491_, lean_object* v_binderName_2492_, lean_object* v_type_2493_, lean_object* v_value_2494_, lean_object* v___y_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_){
_start:
{
uint8_t v_pu_boxed_2500_; lean_object* v_res_2501_; 
v_pu_boxed_2500_ = lean_unbox(v_pu_2491_);
v_res_2501_ = l_Lean_Compiler_LCNF_mkLetDecl(v_pu_boxed_2500_, v_binderName_2492_, v_type_2493_, v_value_2494_, v___y_2495_, v___y_2496_, v___y_2497_, v___y_2498_);
lean_dec(v___y_2498_);
lean_dec_ref(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec_ref(v___y_2495_);
return v_res_2501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl(uint8_t v_pu_2505_, lean_object* v_binderName_2506_, lean_object* v_type_2507_, lean_object* v_params_2508_, lean_object* v_value_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Lean_mkFreshFVarId___at___00Lean_Compiler_LCNF_mkParam_spec__0(v___y_2510_, v___y_2511_, v___y_2512_, v___y_2513_);
if (lean_obj_tag(v___x_2515_) == 0)
{
lean_object* v_a_2516_; lean_object* v___x_2517_; lean_object* v___x_2518_; lean_object* v_a_2519_; lean_object* v___x_2521_; uint8_t v_isShared_2522_; uint8_t v_isSharedCheck_2539_; 
v_a_2516_ = lean_ctor_get(v___x_2515_, 0);
lean_inc(v_a_2516_);
lean_dec_ref_known(v___x_2515_, 1);
v___x_2517_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkFunDecl___closed__1));
v___x_2518_ = l_Lean_Compiler_LCNF_ensureNotAnonymous___redArg(v_binderName_2506_, v___x_2517_, v___y_2511_);
v_a_2519_ = lean_ctor_get(v___x_2518_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2518_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2521_ = v___x_2518_;
v_isShared_2522_ = v_isSharedCheck_2539_;
goto v_resetjp_2520_;
}
else
{
lean_inc(v_a_2519_);
lean_dec(v___x_2518_);
v___x_2521_ = lean_box(0);
v_isShared_2522_ = v_isSharedCheck_2539_;
goto v_resetjp_2520_;
}
v_resetjp_2520_:
{
lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v_lctx_2525_; lean_object* v_nextIdx_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2538_; 
v___x_2523_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2523_, 0, v_a_2516_);
lean_ctor_set(v___x_2523_, 1, v_a_2519_);
lean_ctor_set(v___x_2523_, 2, v_params_2508_);
lean_ctor_set(v___x_2523_, 3, v_type_2507_);
lean_ctor_set(v___x_2523_, 4, v_value_2509_);
v___x_2524_ = lean_st_ref_take(v___y_2511_);
v_lctx_2525_ = lean_ctor_get(v___x_2524_, 0);
v_nextIdx_2526_ = lean_ctor_get(v___x_2524_, 1);
v_isSharedCheck_2538_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2528_ = v___x_2524_;
v_isShared_2529_ = v_isSharedCheck_2538_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_nextIdx_2526_);
lean_inc(v_lctx_2525_);
lean_dec(v___x_2524_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2538_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2530_; lean_object* v___x_2532_; 
lean_inc_ref(v___x_2523_);
v___x_2530_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v_pu_2505_, v_lctx_2525_, v___x_2523_);
if (v_isShared_2529_ == 0)
{
lean_ctor_set(v___x_2528_, 0, v___x_2530_);
v___x_2532_ = v___x_2528_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v___x_2530_);
lean_ctor_set(v_reuseFailAlloc_2537_, 1, v_nextIdx_2526_);
v___x_2532_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
lean_object* v___x_2533_; lean_object* v___x_2535_; 
v___x_2533_ = lean_st_ref_put(v___y_2511_, v___x_2532_);
if (v_isShared_2522_ == 0)
{
lean_ctor_set(v___x_2521_, 0, v___x_2523_);
v___x_2535_ = v___x_2521_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v___x_2523_);
v___x_2535_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
return v___x_2535_;
}
}
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec_ref(v_value_2509_);
lean_dec_ref(v_params_2508_);
lean_dec_ref(v_type_2507_);
lean_dec(v_binderName_2506_);
v_a_2540_ = lean_ctor_get(v___x_2515_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2515_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2515_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2515_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFunDecl___boxed(lean_object* v_pu_2548_, lean_object* v_binderName_2549_, lean_object* v_type_2550_, lean_object* v_params_2551_, lean_object* v_value_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
uint8_t v_pu_boxed_2558_; lean_object* v_res_2559_; 
v_pu_boxed_2558_ = lean_unbox(v_pu_2548_);
v_res_2559_ = l_Lean_Compiler_LCNF_mkFunDecl(v_pu_boxed_2558_, v_binderName_2549_, v_type_2550_, v_params_2551_, v_value_2552_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_);
lean_dec(v___y_2556_);
lean_dec_ref(v___y_2555_);
lean_dec(v___y_2554_);
lean_dec_ref(v___y_2553_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased(uint8_t v_pu_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v_a_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; 
v___x_2566_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkLetDecl___closed__1));
v___x_2567_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_2566_, v___y_2562_);
v_a_2568_ = lean_ctor_get(v___x_2567_, 0);
lean_inc(v_a_2568_);
lean_dec_ref(v___x_2567_);
v___x_2569_ = l_Lean_Compiler_LCNF_erasedExpr;
v___x_2570_ = lean_box(1);
v___x_2571_ = l_Lean_Compiler_LCNF_mkLetDecl(v_pu_2560_, v_a_2568_, v___x_2569_, v___x_2570_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
return v___x_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkLetDeclErased___boxed(lean_object* v_pu_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_, lean_object* v___y_2577_){
_start:
{
uint8_t v_pu_boxed_2578_; lean_object* v_res_2579_; 
v_pu_boxed_2578_ = lean_unbox(v_pu_2572_);
v_res_2579_ = l_Lean_Compiler_LCNF_mkLetDeclErased(v_pu_boxed_2578_, v___y_2573_, v___y_2574_, v___y_2575_, v___y_2576_);
lean_dec(v___y_2576_);
lean_dec_ref(v___y_2575_);
lean_dec(v___y_2574_);
lean_dec_ref(v___y_2573_);
return v_res_2579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased(uint8_t v_pu_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_){
_start:
{
lean_object* v___x_2586_; 
v___x_2586_ = l_Lean_Compiler_LCNF_mkLetDeclErased(v_pu_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2586_) == 0)
{
lean_object* v_a_2587_; lean_object* v___x_2589_; uint8_t v_isShared_2590_; uint8_t v_isSharedCheck_2597_; 
v_a_2587_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2597_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2597_ == 0)
{
v___x_2589_ = v___x_2586_;
v_isShared_2590_ = v_isSharedCheck_2597_;
goto v_resetjp_2588_;
}
else
{
lean_inc(v_a_2587_);
lean_dec(v___x_2586_);
v___x_2589_ = lean_box(0);
v_isShared_2590_ = v_isSharedCheck_2597_;
goto v_resetjp_2588_;
}
v_resetjp_2588_:
{
lean_object* v_fvarId_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2595_; 
v_fvarId_2591_ = lean_ctor_get(v_a_2587_, 0);
lean_inc(v_fvarId_2591_);
v___x_2592_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v___x_2592_, 0, v_fvarId_2591_);
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v_a_2587_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
if (v_isShared_2590_ == 0)
{
lean_ctor_set(v___x_2589_, 0, v___x_2593_);
v___x_2595_ = v___x_2589_;
goto v_reusejp_2594_;
}
else
{
lean_object* v_reuseFailAlloc_2596_; 
v_reuseFailAlloc_2596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2596_, 0, v___x_2593_);
v___x_2595_ = v_reuseFailAlloc_2596_;
goto v_reusejp_2594_;
}
v_reusejp_2594_:
{
return v___x_2595_;
}
}
}
else
{
lean_object* v_a_2598_; lean_object* v___x_2600_; uint8_t v_isShared_2601_; uint8_t v_isSharedCheck_2605_; 
v_a_2598_ = lean_ctor_get(v___x_2586_, 0);
v_isSharedCheck_2605_ = !lean_is_exclusive(v___x_2586_);
if (v_isSharedCheck_2605_ == 0)
{
v___x_2600_ = v___x_2586_;
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
else
{
lean_inc(v_a_2598_);
lean_dec(v___x_2586_);
v___x_2600_ = lean_box(0);
v_isShared_2601_ = v_isSharedCheck_2605_;
goto v_resetjp_2599_;
}
v_resetjp_2599_:
{
lean_object* v___x_2603_; 
if (v_isShared_2601_ == 0)
{
v___x_2603_ = v___x_2600_;
goto v_reusejp_2602_;
}
else
{
lean_object* v_reuseFailAlloc_2604_; 
v_reuseFailAlloc_2604_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2604_, 0, v_a_2598_);
v___x_2603_ = v_reuseFailAlloc_2604_;
goto v_reusejp_2602_;
}
v_reusejp_2602_:
{
return v___x_2603_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkReturnErased___boxed(lean_object* v_pu_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
uint8_t v_pu_boxed_2612_; lean_object* v_res_2613_; 
v_pu_boxed_2612_ = lean_unbox(v_pu_2606_);
v_res_2613_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_boxed_2612_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_);
lean_dec(v___y_2610_);
lean_dec_ref(v___y_2609_);
lean_dec(v___y_2608_);
lean_dec_ref(v___y_2607_);
return v_res_2613_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(uint8_t v_pu_2614_, lean_object* v_p_2615_, lean_object* v_type_2616_, lean_object* v___y_2617_){
_start:
{
lean_object* v_fvarId_2619_; lean_object* v_binderName_2620_; lean_object* v_type_2621_; uint8_t v_borrow_2622_; size_t v___x_2623_; size_t v___x_2624_; uint8_t v___x_2625_; 
v_fvarId_2619_ = lean_ctor_get(v_p_2615_, 0);
v_binderName_2620_ = lean_ctor_get(v_p_2615_, 1);
v_type_2621_ = lean_ctor_get(v_p_2615_, 2);
v_borrow_2622_ = lean_ctor_get_uint8(v_p_2615_, sizeof(void*)*3);
v___x_2623_ = lean_ptr_addr(v_type_2616_);
v___x_2624_ = lean_ptr_addr(v_type_2621_);
v___x_2625_ = lean_usize_dec_eq(v___x_2623_, v___x_2624_);
if (v___x_2625_ == 0)
{
lean_object* v___x_2627_; uint8_t v_isShared_2628_; uint8_t v_isSharedCheck_2645_; 
lean_inc(v_binderName_2620_);
lean_inc(v_fvarId_2619_);
v_isSharedCheck_2645_ = !lean_is_exclusive(v_p_2615_);
if (v_isSharedCheck_2645_ == 0)
{
lean_object* v_unused_2646_; lean_object* v_unused_2647_; lean_object* v_unused_2648_; 
v_unused_2646_ = lean_ctor_get(v_p_2615_, 2);
lean_dec(v_unused_2646_);
v_unused_2647_ = lean_ctor_get(v_p_2615_, 1);
lean_dec(v_unused_2647_);
v_unused_2648_ = lean_ctor_get(v_p_2615_, 0);
lean_dec(v_unused_2648_);
v___x_2627_ = v_p_2615_;
v_isShared_2628_ = v_isSharedCheck_2645_;
goto v_resetjp_2626_;
}
else
{
lean_dec(v_p_2615_);
v___x_2627_ = lean_box(0);
v_isShared_2628_ = v_isSharedCheck_2645_;
goto v_resetjp_2626_;
}
v_resetjp_2626_:
{
lean_object* v_p_2630_; 
if (v_isShared_2628_ == 0)
{
lean_ctor_set(v___x_2627_, 2, v_type_2616_);
v_p_2630_ = v___x_2627_;
goto v_reusejp_2629_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_fvarId_2619_);
lean_ctor_set(v_reuseFailAlloc_2644_, 1, v_binderName_2620_);
lean_ctor_set(v_reuseFailAlloc_2644_, 2, v_type_2616_);
lean_ctor_set_uint8(v_reuseFailAlloc_2644_, sizeof(void*)*3, v_borrow_2622_);
v_p_2630_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2629_;
}
v_reusejp_2629_:
{
lean_object* v___x_2631_; lean_object* v_lctx_2632_; lean_object* v_nextIdx_2633_; lean_object* v___x_2635_; uint8_t v_isShared_2636_; uint8_t v_isSharedCheck_2643_; 
v___x_2631_ = lean_st_ref_take(v___y_2617_);
v_lctx_2632_ = lean_ctor_get(v___x_2631_, 0);
v_nextIdx_2633_ = lean_ctor_get(v___x_2631_, 1);
v_isSharedCheck_2643_ = !lean_is_exclusive(v___x_2631_);
if (v_isSharedCheck_2643_ == 0)
{
v___x_2635_ = v___x_2631_;
v_isShared_2636_ = v_isSharedCheck_2643_;
goto v_resetjp_2634_;
}
else
{
lean_inc(v_nextIdx_2633_);
lean_inc(v_lctx_2632_);
lean_dec(v___x_2631_);
v___x_2635_ = lean_box(0);
v_isShared_2636_ = v_isSharedCheck_2643_;
goto v_resetjp_2634_;
}
v_resetjp_2634_:
{
lean_object* v___x_2637_; lean_object* v___x_2639_; 
lean_inc_ref(v_p_2630_);
v___x_2637_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_2614_, v_lctx_2632_, v_p_2630_);
if (v_isShared_2636_ == 0)
{
lean_ctor_set(v___x_2635_, 0, v___x_2637_);
v___x_2639_ = v___x_2635_;
goto v_reusejp_2638_;
}
else
{
lean_object* v_reuseFailAlloc_2642_; 
v_reuseFailAlloc_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2642_, 0, v___x_2637_);
lean_ctor_set(v_reuseFailAlloc_2642_, 1, v_nextIdx_2633_);
v___x_2639_ = v_reuseFailAlloc_2642_;
goto v_reusejp_2638_;
}
v_reusejp_2638_:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2640_ = lean_st_ref_put(v___y_2617_, v___x_2639_);
v___x_2641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2641_, 0, v_p_2630_);
return v___x_2641_;
}
}
}
}
}
else
{
lean_object* v___x_2649_; 
lean_dec_ref(v_type_2616_);
v___x_2649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2649_, 0, v_p_2615_);
return v___x_2649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg___boxed(lean_object* v_pu_2650_, lean_object* v_p_2651_, lean_object* v_type_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
uint8_t v_pu_boxed_2655_; lean_object* v_res_2656_; 
v_pu_boxed_2655_ = lean_unbox(v_pu_2650_);
v_res_2656_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_boxed_2655_, v_p_2651_, v_type_2652_, v___y_2653_);
lean_dec(v___y_2653_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp(uint8_t v_pu_2657_, lean_object* v_p_2658_, lean_object* v_type_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_){
_start:
{
lean_object* v___x_2665_; 
v___x_2665_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_2657_, v_p_2658_, v_type_2659_, v___y_2661_);
return v___x_2665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed(lean_object* v_pu_2666_, lean_object* v_p_2667_, lean_object* v_type_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
uint8_t v_pu_boxed_2674_; lean_object* v_res_2675_; 
v_pu_boxed_2674_ = lean_unbox(v_pu_2666_);
v_res_2675_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp(v_pu_boxed_2674_, v_p_2667_, v_type_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_);
lean_dec(v___y_2672_);
lean_dec_ref(v___y_2671_);
lean_dec(v___y_2670_);
lean_dec_ref(v___y_2669_);
return v_res_2675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(uint8_t v_pu_2676_, lean_object* v_p_2677_, uint8_t v_borrow_2678_, lean_object* v___y_2679_){
_start:
{
lean_object* v_fvarId_2681_; lean_object* v_binderName_2682_; lean_object* v_type_2683_; uint8_t v_borrow_2684_; 
v_fvarId_2681_ = lean_ctor_get(v_p_2677_, 0);
v_binderName_2682_ = lean_ctor_get(v_p_2677_, 1);
v_type_2683_ = lean_ctor_get(v_p_2677_, 2);
v_borrow_2684_ = lean_ctor_get_uint8(v_p_2677_, sizeof(void*)*3);
if (v_borrow_2684_ == 0)
{
if (v_borrow_2678_ == 0)
{
lean_object* v___x_2700_; 
v___x_2700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2700_, 0, v_p_2677_);
return v___x_2700_;
}
else
{
lean_inc_ref(v_type_2683_);
lean_inc(v_binderName_2682_);
lean_inc(v_fvarId_2681_);
lean_dec_ref(v_p_2677_);
goto v___jp_2685_;
}
}
else
{
if (v_borrow_2678_ == 0)
{
lean_inc_ref(v_type_2683_);
lean_inc(v_binderName_2682_);
lean_inc(v_fvarId_2681_);
lean_dec_ref(v_p_2677_);
goto v___jp_2685_;
}
else
{
lean_object* v___x_2701_; 
v___x_2701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2701_, 0, v_p_2677_);
return v___x_2701_;
}
}
v___jp_2685_:
{
lean_object* v_p_2686_; lean_object* v___x_2687_; lean_object* v_lctx_2688_; lean_object* v_nextIdx_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2699_; 
v_p_2686_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_p_2686_, 0, v_fvarId_2681_);
lean_ctor_set(v_p_2686_, 1, v_binderName_2682_);
lean_ctor_set(v_p_2686_, 2, v_type_2683_);
lean_ctor_set_uint8(v_p_2686_, sizeof(void*)*3, v_borrow_2678_);
v___x_2687_ = lean_st_ref_take(v___y_2679_);
v_lctx_2688_ = lean_ctor_get(v___x_2687_, 0);
v_nextIdx_2689_ = lean_ctor_get(v___x_2687_, 1);
v_isSharedCheck_2699_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2699_ == 0)
{
v___x_2691_ = v___x_2687_;
v_isShared_2692_ = v_isSharedCheck_2699_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_nextIdx_2689_);
lean_inc(v_lctx_2688_);
lean_dec(v___x_2687_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2699_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v___x_2693_; lean_object* v___x_2695_; 
lean_inc_ref(v_p_2686_);
v___x_2693_ = l_Lean_Compiler_LCNF_LCtx_addParam(v_pu_2676_, v_lctx_2688_, v_p_2686_);
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 0, v___x_2693_);
v___x_2695_ = v___x_2691_;
goto v_reusejp_2694_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2693_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v_nextIdx_2689_);
v___x_2695_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2694_;
}
v_reusejp_2694_:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; 
v___x_2696_ = lean_st_ref_put(v___y_2679_, v___x_2695_);
v___x_2697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2697_, 0, v_p_2686_);
return v___x_2697_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg___boxed(lean_object* v_pu_2702_, lean_object* v_p_2703_, lean_object* v_borrow_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
uint8_t v_pu_boxed_2707_; uint8_t v_borrow_boxed_2708_; lean_object* v_res_2709_; 
v_pu_boxed_2707_ = lean_unbox(v_pu_2702_);
v_borrow_boxed_2708_ = lean_unbox(v_borrow_2704_);
v_res_2709_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(v_pu_boxed_2707_, v_p_2703_, v_borrow_boxed_2708_, v___y_2705_);
lean_dec(v___y_2705_);
return v_res_2709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp(uint8_t v_pu_2710_, lean_object* v_p_2711_, uint8_t v_borrow_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_){
_start:
{
lean_object* v___x_2718_; 
v___x_2718_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___redArg(v_pu_2710_, v_p_2711_, v_borrow_2712_, v___y_2714_);
return v___x_2718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp___boxed(lean_object* v_pu_2719_, lean_object* v_p_2720_, lean_object* v_borrow_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_, lean_object* v___y_2726_){
_start:
{
uint8_t v_pu_boxed_2727_; uint8_t v_borrow_boxed_2728_; lean_object* v_res_2729_; 
v_pu_boxed_2727_ = lean_unbox(v_pu_2719_);
v_borrow_boxed_2728_ = lean_unbox(v_borrow_2721_);
v_res_2729_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamBorrowImp(v_pu_boxed_2727_, v_p_2720_, v_borrow_boxed_2728_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
lean_dec(v___y_2725_);
lean_dec_ref(v___y_2724_);
lean_dec(v___y_2723_);
lean_dec_ref(v___y_2722_);
return v_res_2729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(uint8_t v_pu_2730_, lean_object* v_decl_2731_, lean_object* v_type_2732_, lean_object* v_value_2733_, lean_object* v___y_2734_){
_start:
{
lean_object* v_fvarId_2736_; lean_object* v_binderName_2737_; lean_object* v_type_2738_; lean_object* v_value_2739_; size_t v___x_2755_; size_t v___x_2756_; uint8_t v___x_2757_; 
v_fvarId_2736_ = lean_ctor_get(v_decl_2731_, 0);
v_binderName_2737_ = lean_ctor_get(v_decl_2731_, 1);
v_type_2738_ = lean_ctor_get(v_decl_2731_, 2);
v_value_2739_ = lean_ctor_get(v_decl_2731_, 3);
v___x_2755_ = lean_ptr_addr(v_type_2732_);
v___x_2756_ = lean_ptr_addr(v_type_2738_);
v___x_2757_ = lean_usize_dec_eq(v___x_2755_, v___x_2756_);
if (v___x_2757_ == 0)
{
lean_inc(v_binderName_2737_);
lean_inc(v_fvarId_2736_);
lean_dec_ref(v_decl_2731_);
goto v___jp_2740_;
}
else
{
size_t v___x_2758_; size_t v___x_2759_; uint8_t v___x_2760_; 
v___x_2758_ = lean_ptr_addr(v_value_2733_);
v___x_2759_ = lean_ptr_addr(v_value_2739_);
v___x_2760_ = lean_usize_dec_eq(v___x_2758_, v___x_2759_);
if (v___x_2760_ == 0)
{
lean_inc(v_binderName_2737_);
lean_inc(v_fvarId_2736_);
lean_dec_ref(v_decl_2731_);
goto v___jp_2740_;
}
else
{
lean_object* v___x_2761_; 
lean_dec(v_value_2733_);
lean_dec_ref(v_type_2732_);
v___x_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2761_, 0, v_decl_2731_);
return v___x_2761_;
}
}
v___jp_2740_:
{
lean_object* v_decl_2741_; lean_object* v___x_2742_; lean_object* v_lctx_2743_; lean_object* v_nextIdx_2744_; lean_object* v___x_2746_; uint8_t v_isShared_2747_; uint8_t v_isSharedCheck_2754_; 
v_decl_2741_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_decl_2741_, 0, v_fvarId_2736_);
lean_ctor_set(v_decl_2741_, 1, v_binderName_2737_);
lean_ctor_set(v_decl_2741_, 2, v_type_2732_);
lean_ctor_set(v_decl_2741_, 3, v_value_2733_);
v___x_2742_ = lean_st_ref_take(v___y_2734_);
v_lctx_2743_ = lean_ctor_get(v___x_2742_, 0);
v_nextIdx_2744_ = lean_ctor_get(v___x_2742_, 1);
v_isSharedCheck_2754_ = !lean_is_exclusive(v___x_2742_);
if (v_isSharedCheck_2754_ == 0)
{
v___x_2746_ = v___x_2742_;
v_isShared_2747_ = v_isSharedCheck_2754_;
goto v_resetjp_2745_;
}
else
{
lean_inc(v_nextIdx_2744_);
lean_inc(v_lctx_2743_);
lean_dec(v___x_2742_);
v___x_2746_ = lean_box(0);
v_isShared_2747_ = v_isSharedCheck_2754_;
goto v_resetjp_2745_;
}
v_resetjp_2745_:
{
lean_object* v___x_2748_; lean_object* v___x_2750_; 
lean_inc_ref(v_decl_2741_);
v___x_2748_ = l_Lean_Compiler_LCNF_LCtx_addLetDecl(v_pu_2730_, v_lctx_2743_, v_decl_2741_);
if (v_isShared_2747_ == 0)
{
lean_ctor_set(v___x_2746_, 0, v___x_2748_);
v___x_2750_ = v___x_2746_;
goto v_reusejp_2749_;
}
else
{
lean_object* v_reuseFailAlloc_2753_; 
v_reuseFailAlloc_2753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2753_, 0, v___x_2748_);
lean_ctor_set(v_reuseFailAlloc_2753_, 1, v_nextIdx_2744_);
v___x_2750_ = v_reuseFailAlloc_2753_;
goto v_reusejp_2749_;
}
v_reusejp_2749_:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = lean_st_ref_put(v___y_2734_, v___x_2750_);
v___x_2752_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2752_, 0, v_decl_2741_);
return v___x_2752_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg___boxed(lean_object* v_pu_2762_, lean_object* v_decl_2763_, lean_object* v_type_2764_, lean_object* v_value_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_){
_start:
{
uint8_t v_pu_boxed_2768_; lean_object* v_res_2769_; 
v_pu_boxed_2768_ = lean_unbox(v_pu_2762_);
v_res_2769_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_boxed_2768_, v_decl_2763_, v_type_2764_, v_value_2765_, v___y_2766_);
lean_dec(v___y_2766_);
return v_res_2769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp(uint8_t v_pu_2770_, lean_object* v_decl_2771_, lean_object* v_type_2772_, lean_object* v_value_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_){
_start:
{
lean_object* v___x_2779_; 
v___x_2779_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_2770_, v_decl_2771_, v_type_2772_, v_value_2773_, v___y_2775_);
return v___x_2779_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed(lean_object* v_pu_2780_, lean_object* v_decl_2781_, lean_object* v_type_2782_, lean_object* v_value_2783_, lean_object* v___y_2784_, lean_object* v___y_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_){
_start:
{
uint8_t v_pu_boxed_2789_; lean_object* v_res_2790_; 
v_pu_boxed_2789_ = lean_unbox(v_pu_2780_);
v_res_2790_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp(v_pu_boxed_2789_, v_decl_2781_, v_type_2782_, v_value_2783_, v___y_2784_, v___y_2785_, v___y_2786_, v___y_2787_);
lean_dec(v___y_2787_);
lean_dec_ref(v___y_2786_);
lean_dec(v___y_2785_);
lean_dec_ref(v___y_2784_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t v_pu_2791_, lean_object* v_decl_2792_, lean_object* v_value_2793_, lean_object* v___y_2794_){
_start:
{
lean_object* v_type_2796_; lean_object* v___x_2797_; 
v_type_2796_ = lean_ctor_get(v_decl_2792_, 2);
lean_inc_ref(v_type_2796_);
v___x_2797_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_2791_, v_decl_2792_, v_type_2796_, v_value_2793_, v___y_2794_);
return v___x_2797_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg___boxed(lean_object* v_pu_2798_, lean_object* v_decl_2799_, lean_object* v_value_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
uint8_t v_pu_boxed_2803_; lean_object* v_res_2804_; 
v_pu_boxed_2803_ = lean_unbox(v_pu_2798_);
v_res_2804_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v_pu_boxed_2803_, v_decl_2799_, v_value_2800_, v___y_2801_);
lean_dec(v___y_2801_);
return v_res_2804_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue(uint8_t v_pu_2805_, lean_object* v_decl_2806_, lean_object* v_value_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_){
_start:
{
lean_object* v___x_2813_; 
v___x_2813_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v_pu_2805_, v_decl_2806_, v_value_2807_, v___y_2809_);
return v___x_2813_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___boxed(lean_object* v_pu_2814_, lean_object* v_decl_2815_, lean_object* v_value_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_){
_start:
{
uint8_t v_pu_boxed_2822_; lean_object* v_res_2823_; 
v_pu_boxed_2822_ = lean_unbox(v_pu_2814_);
v_res_2823_ = l_Lean_Compiler_LCNF_LetDecl_updateValue(v_pu_boxed_2822_, v_decl_2815_, v_value_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_);
lean_dec(v___y_2820_);
lean_dec_ref(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
return v_res_2823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t v_pu_2824_, lean_object* v_decl_2825_, lean_object* v_type_2826_, lean_object* v_params_2827_, lean_object* v_value_2828_, lean_object* v___y_2829_){
_start:
{
lean_object* v_fvarId_2831_; lean_object* v_binderName_2832_; lean_object* v_params_2833_; lean_object* v_type_2834_; lean_object* v_value_2835_; size_t v___x_2851_; size_t v___x_2852_; uint8_t v___x_2853_; 
v_fvarId_2831_ = lean_ctor_get(v_decl_2825_, 0);
v_binderName_2832_ = lean_ctor_get(v_decl_2825_, 1);
v_params_2833_ = lean_ctor_get(v_decl_2825_, 2);
v_type_2834_ = lean_ctor_get(v_decl_2825_, 3);
v_value_2835_ = lean_ctor_get(v_decl_2825_, 4);
v___x_2851_ = lean_ptr_addr(v_type_2826_);
v___x_2852_ = lean_ptr_addr(v_type_2834_);
v___x_2853_ = lean_usize_dec_eq(v___x_2851_, v___x_2852_);
if (v___x_2853_ == 0)
{
lean_inc(v_binderName_2832_);
lean_inc(v_fvarId_2831_);
lean_dec_ref(v_decl_2825_);
goto v___jp_2836_;
}
else
{
size_t v___x_2854_; size_t v___x_2855_; uint8_t v___x_2856_; 
v___x_2854_ = lean_ptr_addr(v_params_2827_);
v___x_2855_ = lean_ptr_addr(v_params_2833_);
v___x_2856_ = lean_usize_dec_eq(v___x_2854_, v___x_2855_);
if (v___x_2856_ == 0)
{
lean_inc(v_binderName_2832_);
lean_inc(v_fvarId_2831_);
lean_dec_ref(v_decl_2825_);
goto v___jp_2836_;
}
else
{
size_t v___x_2857_; size_t v___x_2858_; uint8_t v___x_2859_; 
v___x_2857_ = lean_ptr_addr(v_value_2828_);
v___x_2858_ = lean_ptr_addr(v_value_2835_);
v___x_2859_ = lean_usize_dec_eq(v___x_2857_, v___x_2858_);
if (v___x_2859_ == 0)
{
lean_inc(v_binderName_2832_);
lean_inc(v_fvarId_2831_);
lean_dec_ref(v_decl_2825_);
goto v___jp_2836_;
}
else
{
lean_object* v___x_2860_; 
lean_dec_ref(v_value_2828_);
lean_dec_ref(v_params_2827_);
lean_dec_ref(v_type_2826_);
v___x_2860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2860_, 0, v_decl_2825_);
return v___x_2860_;
}
}
}
v___jp_2836_:
{
lean_object* v_decl_2837_; lean_object* v___x_2838_; lean_object* v_lctx_2839_; lean_object* v_nextIdx_2840_; lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2850_; 
v_decl_2837_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_decl_2837_, 0, v_fvarId_2831_);
lean_ctor_set(v_decl_2837_, 1, v_binderName_2832_);
lean_ctor_set(v_decl_2837_, 2, v_params_2827_);
lean_ctor_set(v_decl_2837_, 3, v_type_2826_);
lean_ctor_set(v_decl_2837_, 4, v_value_2828_);
v___x_2838_ = lean_st_ref_take(v___y_2829_);
v_lctx_2839_ = lean_ctor_get(v___x_2838_, 0);
v_nextIdx_2840_ = lean_ctor_get(v___x_2838_, 1);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2838_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2842_ = v___x_2838_;
v_isShared_2843_ = v_isSharedCheck_2850_;
goto v_resetjp_2841_;
}
else
{
lean_inc(v_nextIdx_2840_);
lean_inc(v_lctx_2839_);
lean_dec(v___x_2838_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2850_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2844_; lean_object* v___x_2846_; 
lean_inc_ref(v_decl_2837_);
v___x_2844_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v_pu_2824_, v_lctx_2839_, v_decl_2837_);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v___x_2844_);
v___x_2846_ = v___x_2842_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2849_; 
v_reuseFailAlloc_2849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2849_, 0, v___x_2844_);
lean_ctor_set(v_reuseFailAlloc_2849_, 1, v_nextIdx_2840_);
v___x_2846_ = v_reuseFailAlloc_2849_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
lean_object* v___x_2847_; lean_object* v___x_2848_; 
v___x_2847_ = lean_st_ref_put(v___y_2829_, v___x_2846_);
v___x_2848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2848_, 0, v_decl_2837_);
return v___x_2848_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg___boxed(lean_object* v_pu_2861_, lean_object* v_decl_2862_, lean_object* v_type_2863_, lean_object* v_params_2864_, lean_object* v_value_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_){
_start:
{
uint8_t v_pu_boxed_2868_; lean_object* v_res_2869_; 
v_pu_boxed_2868_ = lean_unbox(v_pu_2861_);
v_res_2869_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_boxed_2868_, v_decl_2862_, v_type_2863_, v_params_2864_, v_value_2865_, v___y_2866_);
lean_dec(v___y_2866_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(uint8_t v_pu_2870_, lean_object* v_decl_2871_, lean_object* v_type_2872_, lean_object* v_params_2873_, lean_object* v_value_2874_, lean_object* v___y_2875_, lean_object* v___y_2876_, lean_object* v___y_2877_, lean_object* v___y_2878_){
_start:
{
lean_object* v___x_2880_; 
v___x_2880_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2870_, v_decl_2871_, v_type_2872_, v_params_2873_, v_value_2874_, v___y_2876_);
return v___x_2880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___boxed(lean_object* v_pu_2881_, lean_object* v_decl_2882_, lean_object* v_type_2883_, lean_object* v_params_2884_, lean_object* v_value_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_){
_start:
{
uint8_t v_pu_boxed_2891_; lean_object* v_res_2892_; 
v_pu_boxed_2891_ = lean_unbox(v_pu_2881_);
v_res_2892_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp(v_pu_boxed_2891_, v_decl_2882_, v_type_2883_, v_params_2884_, v_value_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_);
lean_dec(v___y_2889_);
lean_dec_ref(v___y_2888_);
lean_dec(v___y_2887_);
lean_dec_ref(v___y_2886_);
return v_res_2892_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg(uint8_t v_pu_2893_, lean_object* v_decl_2894_, lean_object* v_type_2895_, lean_object* v_value_2896_, lean_object* v___y_2897_){
_start:
{
lean_object* v_params_2899_; lean_object* v___x_2900_; 
v_params_2899_ = lean_ctor_get(v_decl_2894_, 2);
lean_inc_ref(v_params_2899_);
v___x_2900_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2893_, v_decl_2894_, v_type_2895_, v_params_2899_, v_value_2896_, v___y_2897_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg___boxed(lean_object* v_pu_2901_, lean_object* v_decl_2902_, lean_object* v_type_2903_, lean_object* v_value_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
uint8_t v_pu_boxed_2907_; lean_object* v_res_2908_; 
v_pu_boxed_2907_ = lean_unbox(v_pu_2901_);
v_res_2908_ = l_Lean_Compiler_LCNF_FunDecl_update_x27___redArg(v_pu_boxed_2907_, v_decl_2902_, v_type_2903_, v_value_2904_, v___y_2905_);
lean_dec(v___y_2905_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27(uint8_t v_pu_2909_, lean_object* v_decl_2910_, lean_object* v_type_2911_, lean_object* v_value_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_){
_start:
{
lean_object* v_params_2918_; lean_object* v___x_2919_; 
v_params_2918_ = lean_ctor_get(v_decl_2910_, 2);
lean_inc_ref(v_params_2918_);
v___x_2919_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2909_, v_decl_2910_, v_type_2911_, v_params_2918_, v_value_2912_, v___y_2914_);
return v___x_2919_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_update_x27___boxed(lean_object* v_pu_2920_, lean_object* v_decl_2921_, lean_object* v_type_2922_, lean_object* v_value_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_, lean_object* v___y_2928_){
_start:
{
uint8_t v_pu_boxed_2929_; lean_object* v_res_2930_; 
v_pu_boxed_2929_ = lean_unbox(v_pu_2920_);
v_res_2930_ = l_Lean_Compiler_LCNF_FunDecl_update_x27(v_pu_boxed_2929_, v_decl_2921_, v_type_2922_, v_value_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
lean_dec(v___y_2927_);
lean_dec_ref(v___y_2926_);
lean_dec(v___y_2925_);
lean_dec_ref(v___y_2924_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg(uint8_t v_pu_2931_, lean_object* v_decl_2932_, lean_object* v_value_2933_, lean_object* v___y_2934_){
_start:
{
lean_object* v_params_2936_; lean_object* v_type_2937_; lean_object* v___x_2938_; 
v_params_2936_ = lean_ctor_get(v_decl_2932_, 2);
lean_inc_ref(v_params_2936_);
v_type_2937_ = lean_ctor_get(v_decl_2932_, 3);
lean_inc_ref(v_type_2937_);
v___x_2938_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2931_, v_decl_2932_, v_type_2937_, v_params_2936_, v_value_2933_, v___y_2934_);
return v___x_2938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg___boxed(lean_object* v_pu_2939_, lean_object* v_decl_2940_, lean_object* v_value_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_){
_start:
{
uint8_t v_pu_boxed_2944_; lean_object* v_res_2945_; 
v_pu_boxed_2944_ = lean_unbox(v_pu_2939_);
v_res_2945_ = l_Lean_Compiler_LCNF_FunDecl_updateValue___redArg(v_pu_boxed_2944_, v_decl_2940_, v_value_2941_, v___y_2942_);
lean_dec(v___y_2942_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue(uint8_t v_pu_2946_, lean_object* v_decl_2947_, lean_object* v_value_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_){
_start:
{
lean_object* v_params_2954_; lean_object* v_type_2955_; lean_object* v___x_2956_; 
v_params_2954_ = lean_ctor_get(v_decl_2947_, 2);
lean_inc_ref(v_params_2954_);
v_type_2955_ = lean_ctor_get(v_decl_2947_, 3);
lean_inc_ref(v_type_2955_);
v___x_2956_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_2946_, v_decl_2947_, v_type_2955_, v_params_2954_, v_value_2948_, v___y_2950_);
return v___x_2956_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_FunDecl_updateValue___boxed(lean_object* v_pu_2957_, lean_object* v_decl_2958_, lean_object* v_value_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
uint8_t v_pu_boxed_2965_; lean_object* v_res_2966_; 
v_pu_boxed_2965_ = lean_unbox(v_pu_2957_);
v_res_2966_ = l_Lean_Compiler_LCNF_FunDecl_updateValue(v_pu_boxed_2965_, v_decl_2958_, v_value_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0(uint8_t v_pu_2967_, lean_object* v_p_2968_, lean_object* v_inst_2969_, lean_object* v_____do__lift_2970_){
_start:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; 
v___x_2971_ = lean_box(v_pu_2967_);
v___x_2972_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___boxed), 8, 3);
lean_closure_set(v___x_2972_, 0, v___x_2971_);
lean_closure_set(v___x_2972_, 1, v_p_2968_);
lean_closure_set(v___x_2972_, 2, v_____do__lift_2970_);
v___x_2973_ = lean_apply_2(v_inst_2969_, lean_box(0), v___x_2972_);
return v___x_2973_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed(lean_object* v_pu_2974_, lean_object* v_p_2975_, lean_object* v_inst_2976_, lean_object* v_____do__lift_2977_){
_start:
{
uint8_t v_pu_boxed_2978_; lean_object* v_res_2979_; 
v_pu_boxed_2978_ = lean_unbox(v_pu_2974_);
v_res_2979_ = l_Lean_Compiler_LCNF_normParam___redArg___lam__0(v_pu_boxed_2978_, v_p_2975_, v_inst_2976_, v_____do__lift_2977_);
return v_res_2979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1(uint8_t v_pu_2980_, uint8_t v_t_2981_, lean_object* v_type_2982_, lean_object* v_toPure_2983_, lean_object* v_____do__lift_2984_){
_start:
{
lean_object* v___x_2985_; lean_object* v___x_2986_; 
v___x_2985_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_2980_, v_____do__lift_2984_, v_t_2981_, v_type_2982_);
v___x_2986_ = lean_apply_2(v_toPure_2983_, lean_box(0), v___x_2985_);
return v___x_2986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed(lean_object* v_pu_2987_, lean_object* v_t_2988_, lean_object* v_type_2989_, lean_object* v_toPure_2990_, lean_object* v_____do__lift_2991_){
_start:
{
uint8_t v_pu_boxed_2992_; uint8_t v_t_boxed_2993_; lean_object* v_res_2994_; 
v_pu_boxed_2992_ = lean_unbox(v_pu_2987_);
v_t_boxed_2993_ = lean_unbox(v_t_2988_);
v_res_2994_ = l_Lean_Compiler_LCNF_normParam___redArg___lam__1(v_pu_boxed_2992_, v_t_boxed_2993_, v_type_2989_, v_toPure_2990_, v_____do__lift_2991_);
lean_dec_ref(v_____do__lift_2991_);
return v_res_2994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg(uint8_t v_pu_2995_, uint8_t v_t_2996_, lean_object* v_inst_2997_, lean_object* v_inst_2998_, lean_object* v_inst_2999_, lean_object* v_p_3000_){
_start:
{
lean_object* v_toApplicative_3001_; lean_object* v_toBind_3002_; lean_object* v_type_3003_; lean_object* v_toPure_3004_; lean_object* v___x_3005_; lean_object* v___f_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___f_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; 
v_toApplicative_3001_ = lean_ctor_get(v_inst_2998_, 0);
lean_inc_ref(v_toApplicative_3001_);
v_toBind_3002_ = lean_ctor_get(v_inst_2998_, 1);
lean_inc_n(v_toBind_3002_, 2);
lean_dec_ref(v_inst_2998_);
v_type_3003_ = lean_ctor_get(v_p_3000_, 2);
lean_inc_ref(v_type_3003_);
v_toPure_3004_ = lean_ctor_get(v_toApplicative_3001_, 1);
lean_inc(v_toPure_3004_);
lean_dec_ref(v_toApplicative_3001_);
v___x_3005_ = lean_box(v_pu_2995_);
v___f_3006_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3006_, 0, v___x_3005_);
lean_closure_set(v___f_3006_, 1, v_p_3000_);
lean_closure_set(v___f_3006_, 2, v_inst_2997_);
v___x_3007_ = lean_box(v_pu_2995_);
v___x_3008_ = lean_box(v_t_2996_);
v___f_3009_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3009_, 0, v___x_3007_);
lean_closure_set(v___f_3009_, 1, v___x_3008_);
lean_closure_set(v___f_3009_, 2, v_type_3003_);
lean_closure_set(v___f_3009_, 3, v_toPure_3004_);
v___x_3010_ = lean_apply_4(v_toBind_3002_, lean_box(0), lean_box(0), v_inst_2999_, v___f_3009_);
v___x_3011_ = lean_apply_4(v_toBind_3002_, lean_box(0), lean_box(0), v___x_3010_, v___f_3006_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___redArg___boxed(lean_object* v_pu_3012_, lean_object* v_t_3013_, lean_object* v_inst_3014_, lean_object* v_inst_3015_, lean_object* v_inst_3016_, lean_object* v_p_3017_){
_start:
{
uint8_t v_pu_boxed_3018_; uint8_t v_t_boxed_3019_; lean_object* v_res_3020_; 
v_pu_boxed_3018_ = lean_unbox(v_pu_3012_);
v_t_boxed_3019_ = lean_unbox(v_t_3013_);
v_res_3020_ = l_Lean_Compiler_LCNF_normParam___redArg(v_pu_boxed_3018_, v_t_boxed_3019_, v_inst_3014_, v_inst_3015_, v_inst_3016_, v_p_3017_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam(lean_object* v_m_3021_, uint8_t v_pu_3022_, uint8_t v_t_3023_, lean_object* v_inst_3024_, lean_object* v_inst_3025_, lean_object* v_inst_3026_, lean_object* v_p_3027_){
_start:
{
lean_object* v_toApplicative_3028_; lean_object* v_toBind_3029_; lean_object* v_type_3030_; lean_object* v_toPure_3031_; lean_object* v___x_3032_; lean_object* v___f_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___f_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; 
v_toApplicative_3028_ = lean_ctor_get(v_inst_3025_, 0);
lean_inc_ref(v_toApplicative_3028_);
v_toBind_3029_ = lean_ctor_get(v_inst_3025_, 1);
lean_inc_n(v_toBind_3029_, 2);
lean_dec_ref(v_inst_3025_);
v_type_3030_ = lean_ctor_get(v_p_3027_, 2);
lean_inc_ref(v_type_3030_);
v_toPure_3031_ = lean_ctor_get(v_toApplicative_3028_, 1);
lean_inc(v_toPure_3031_);
lean_dec_ref(v_toApplicative_3028_);
v___x_3032_ = lean_box(v_pu_3022_);
v___f_3033_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_3033_, 0, v___x_3032_);
lean_closure_set(v___f_3033_, 1, v_p_3027_);
lean_closure_set(v___f_3033_, 2, v_inst_3024_);
v___x_3034_ = lean_box(v_pu_3022_);
v___x_3035_ = lean_box(v_t_3023_);
v___f_3036_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3036_, 0, v___x_3034_);
lean_closure_set(v___f_3036_, 1, v___x_3035_);
lean_closure_set(v___f_3036_, 2, v_type_3030_);
lean_closure_set(v___f_3036_, 3, v_toPure_3031_);
v___x_3037_ = lean_apply_4(v_toBind_3029_, lean_box(0), lean_box(0), v_inst_3026_, v___f_3036_);
v___x_3038_ = lean_apply_4(v_toBind_3029_, lean_box(0), lean_box(0), v___x_3037_, v___f_3033_);
return v___x_3038_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParam___boxed(lean_object* v_m_3039_, lean_object* v_pu_3040_, lean_object* v_t_3041_, lean_object* v_inst_3042_, lean_object* v_inst_3043_, lean_object* v_inst_3044_, lean_object* v_p_3045_){
_start:
{
uint8_t v_pu_boxed_3046_; uint8_t v_t_boxed_3047_; lean_object* v_res_3048_; 
v_pu_boxed_3046_ = lean_unbox(v_pu_3040_);
v_t_boxed_3047_ = lean_unbox(v_t_3041_);
v_res_3048_ = l_Lean_Compiler_LCNF_normParam(v_m_3039_, v_pu_boxed_3046_, v_t_boxed_3047_, v_inst_3042_, v_inst_3043_, v_inst_3044_, v_p_3045_);
return v_res_3048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg(uint8_t v_pu_3049_, uint8_t v_t_3050_, lean_object* v_inst_3051_, lean_object* v_inst_3052_, lean_object* v_inst_3053_, lean_object* v_ps_3054_){
_start:
{
lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3055_ = lean_box(v_pu_3049_);
v___x_3056_ = lean_box(v_t_3050_);
lean_inc_ref(v_inst_3052_);
v___x_3057_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___boxed), 7, 6);
lean_closure_set(v___x_3057_, 0, lean_box(0));
lean_closure_set(v___x_3057_, 1, v___x_3055_);
lean_closure_set(v___x_3057_, 2, v___x_3056_);
lean_closure_set(v___x_3057_, 3, v_inst_3051_);
lean_closure_set(v___x_3057_, 4, v_inst_3052_);
lean_closure_set(v___x_3057_, 5, v_inst_3053_);
v___x_3058_ = lean_unsigned_to_nat(0u);
v___x_3059_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go(lean_box(0), lean_box(0), v_inst_3052_, v___x_3057_, v___x_3058_, v_ps_3054_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___redArg___boxed(lean_object* v_pu_3060_, lean_object* v_t_3061_, lean_object* v_inst_3062_, lean_object* v_inst_3063_, lean_object* v_inst_3064_, lean_object* v_ps_3065_){
_start:
{
uint8_t v_pu_boxed_3066_; uint8_t v_t_boxed_3067_; lean_object* v_res_3068_; 
v_pu_boxed_3066_ = lean_unbox(v_pu_3060_);
v_t_boxed_3067_ = lean_unbox(v_t_3061_);
v_res_3068_ = l_Lean_Compiler_LCNF_normParams___redArg(v_pu_boxed_3066_, v_t_boxed_3067_, v_inst_3062_, v_inst_3063_, v_inst_3064_, v_ps_3065_);
return v_res_3068_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams(lean_object* v_m_3069_, uint8_t v_pu_3070_, uint8_t v_t_3071_, lean_object* v_inst_3072_, lean_object* v_inst_3073_, lean_object* v_inst_3074_, lean_object* v_ps_3075_){
_start:
{
lean_object* v___x_3076_; 
v___x_3076_ = l_Lean_Compiler_LCNF_normParams___redArg(v_pu_3070_, v_t_3071_, v_inst_3072_, v_inst_3073_, v_inst_3074_, v_ps_3075_);
return v___x_3076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___boxed(lean_object* v_m_3077_, lean_object* v_pu_3078_, lean_object* v_t_3079_, lean_object* v_inst_3080_, lean_object* v_inst_3081_, lean_object* v_inst_3082_, lean_object* v_ps_3083_){
_start:
{
uint8_t v_pu_boxed_3084_; uint8_t v_t_boxed_3085_; lean_object* v_res_3086_; 
v_pu_boxed_3084_ = lean_unbox(v_pu_3078_);
v_t_boxed_3085_ = lean_unbox(v_t_3079_);
v_res_3086_ = l_Lean_Compiler_LCNF_normParams(v_m_3077_, v_pu_boxed_3084_, v_t_boxed_3085_, v_inst_3080_, v_inst_3081_, v_inst_3082_, v_ps_3083_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0(uint8_t v_pu_3087_, lean_object* v_decl_3088_, lean_object* v_____do__lift_3089_, lean_object* v_inst_3090_, lean_object* v_____do__lift_3091_){
_start:
{
lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; 
v___x_3092_ = lean_box(v_pu_3087_);
v___x_3093_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___boxed), 9, 4);
lean_closure_set(v___x_3093_, 0, v___x_3092_);
lean_closure_set(v___x_3093_, 1, v_decl_3088_);
lean_closure_set(v___x_3093_, 2, v_____do__lift_3089_);
lean_closure_set(v___x_3093_, 3, v_____do__lift_3091_);
v___x_3094_ = lean_apply_2(v_inst_3090_, lean_box(0), v___x_3093_);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0___boxed(lean_object* v_pu_3095_, lean_object* v_decl_3096_, lean_object* v_____do__lift_3097_, lean_object* v_inst_3098_, lean_object* v_____do__lift_3099_){
_start:
{
uint8_t v_pu_boxed_3100_; lean_object* v_res_3101_; 
v_pu_boxed_3100_ = lean_unbox(v_pu_3095_);
v_res_3101_ = l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0(v_pu_boxed_3100_, v_decl_3096_, v_____do__lift_3097_, v_inst_3098_, v_____do__lift_3099_);
return v_res_3101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1(uint8_t v_pu_3102_, lean_object* v_value_3103_, uint8_t v_t_3104_, lean_object* v_toPure_3105_, lean_object* v_____do__lift_3106_){
_start:
{
lean_object* v___x_3107_; lean_object* v___x_3108_; 
v___x_3107_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_3102_, v_____do__lift_3106_, v_value_3103_, v_t_3104_);
v___x_3108_ = lean_apply_2(v_toPure_3105_, lean_box(0), v___x_3107_);
return v___x_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1___boxed(lean_object* v_pu_3109_, lean_object* v_value_3110_, lean_object* v_t_3111_, lean_object* v_toPure_3112_, lean_object* v_____do__lift_3113_){
_start:
{
uint8_t v_pu_boxed_3114_; uint8_t v_t_boxed_3115_; lean_object* v_res_3116_; 
v_pu_boxed_3114_ = lean_unbox(v_pu_3109_);
v_t_boxed_3115_ = lean_unbox(v_t_3111_);
v_res_3116_ = l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1(v_pu_boxed_3114_, v_value_3110_, v_t_boxed_3115_, v_toPure_3112_, v_____do__lift_3113_);
lean_dec_ref(v_____do__lift_3113_);
return v_res_3116_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2(uint8_t v_pu_3117_, lean_object* v_decl_3118_, lean_object* v_inst_3119_, lean_object* v_value_3120_, uint8_t v_t_3121_, lean_object* v_toPure_3122_, lean_object* v_toBind_3123_, lean_object* v_inst_3124_, lean_object* v_____do__lift_3125_){
_start:
{
lean_object* v___x_3126_; lean_object* v___f_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___f_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; 
v___x_3126_ = lean_box(v_pu_3117_);
v___f_3127_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_3127_, 0, v___x_3126_);
lean_closure_set(v___f_3127_, 1, v_decl_3118_);
lean_closure_set(v___f_3127_, 2, v_____do__lift_3125_);
lean_closure_set(v___f_3127_, 3, v_inst_3119_);
v___x_3128_ = lean_box(v_pu_3117_);
v___x_3129_ = lean_box(v_t_3121_);
v___f_3130_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3130_, 0, v___x_3128_);
lean_closure_set(v___f_3130_, 1, v_value_3120_);
lean_closure_set(v___f_3130_, 2, v___x_3129_);
lean_closure_set(v___f_3130_, 3, v_toPure_3122_);
lean_inc(v_toBind_3123_);
v___x_3131_ = lean_apply_4(v_toBind_3123_, lean_box(0), lean_box(0), v_inst_3124_, v___f_3130_);
v___x_3132_ = lean_apply_4(v_toBind_3123_, lean_box(0), lean_box(0), v___x_3131_, v___f_3127_);
return v___x_3132_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2___boxed(lean_object* v_pu_3133_, lean_object* v_decl_3134_, lean_object* v_inst_3135_, lean_object* v_value_3136_, lean_object* v_t_3137_, lean_object* v_toPure_3138_, lean_object* v_toBind_3139_, lean_object* v_inst_3140_, lean_object* v_____do__lift_3141_){
_start:
{
uint8_t v_pu_boxed_3142_; uint8_t v_t_boxed_3143_; lean_object* v_res_3144_; 
v_pu_boxed_3142_ = lean_unbox(v_pu_3133_);
v_t_boxed_3143_ = lean_unbox(v_t_3137_);
v_res_3144_ = l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2(v_pu_boxed_3142_, v_decl_3134_, v_inst_3135_, v_value_3136_, v_t_boxed_3143_, v_toPure_3138_, v_toBind_3139_, v_inst_3140_, v_____do__lift_3141_);
return v_res_3144_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg(uint8_t v_pu_3145_, uint8_t v_t_3146_, lean_object* v_inst_3147_, lean_object* v_inst_3148_, lean_object* v_inst_3149_, lean_object* v_decl_3150_){
_start:
{
lean_object* v_toApplicative_3151_; lean_object* v_toBind_3152_; lean_object* v_type_3153_; lean_object* v_value_3154_; lean_object* v_toPure_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; lean_object* v___f_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___f_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; 
v_toApplicative_3151_ = lean_ctor_get(v_inst_3148_, 0);
lean_inc_ref(v_toApplicative_3151_);
v_toBind_3152_ = lean_ctor_get(v_inst_3148_, 1);
lean_inc_n(v_toBind_3152_, 3);
lean_dec_ref(v_inst_3148_);
v_type_3153_ = lean_ctor_get(v_decl_3150_, 2);
lean_inc_ref(v_type_3153_);
v_value_3154_ = lean_ctor_get(v_decl_3150_, 3);
lean_inc(v_value_3154_);
v_toPure_3155_ = lean_ctor_get(v_toApplicative_3151_, 1);
lean_inc_n(v_toPure_3155_, 2);
lean_dec_ref(v_toApplicative_3151_);
v___x_3156_ = lean_box(v_pu_3145_);
v___x_3157_ = lean_box(v_t_3146_);
lean_inc(v_inst_3149_);
v___f_3158_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normLetDecl___redArg___lam__2___boxed), 9, 8);
lean_closure_set(v___f_3158_, 0, v___x_3156_);
lean_closure_set(v___f_3158_, 1, v_decl_3150_);
lean_closure_set(v___f_3158_, 2, v_inst_3147_);
lean_closure_set(v___f_3158_, 3, v_value_3154_);
lean_closure_set(v___f_3158_, 4, v___x_3157_);
lean_closure_set(v___f_3158_, 5, v_toPure_3155_);
lean_closure_set(v___f_3158_, 6, v_toBind_3152_);
lean_closure_set(v___f_3158_, 7, v_inst_3149_);
v___x_3159_ = lean_box(v_pu_3145_);
v___x_3160_ = lean_box(v_t_3146_);
v___f_3161_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normParam___redArg___lam__1___boxed), 5, 4);
lean_closure_set(v___f_3161_, 0, v___x_3159_);
lean_closure_set(v___f_3161_, 1, v___x_3160_);
lean_closure_set(v___f_3161_, 2, v_type_3153_);
lean_closure_set(v___f_3161_, 3, v_toPure_3155_);
v___x_3162_ = lean_apply_4(v_toBind_3152_, lean_box(0), lean_box(0), v_inst_3149_, v___f_3161_);
v___x_3163_ = lean_apply_4(v_toBind_3152_, lean_box(0), lean_box(0), v___x_3162_, v___f_3158_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___redArg___boxed(lean_object* v_pu_3164_, lean_object* v_t_3165_, lean_object* v_inst_3166_, lean_object* v_inst_3167_, lean_object* v_inst_3168_, lean_object* v_decl_3169_){
_start:
{
uint8_t v_pu_boxed_3170_; uint8_t v_t_boxed_3171_; lean_object* v_res_3172_; 
v_pu_boxed_3170_ = lean_unbox(v_pu_3164_);
v_t_boxed_3171_ = lean_unbox(v_t_3165_);
v_res_3172_ = l_Lean_Compiler_LCNF_normLetDecl___redArg(v_pu_boxed_3170_, v_t_boxed_3171_, v_inst_3166_, v_inst_3167_, v_inst_3168_, v_decl_3169_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl(lean_object* v_m_3173_, uint8_t v_pu_3174_, uint8_t v_t_3175_, lean_object* v_inst_3176_, lean_object* v_inst_3177_, lean_object* v_inst_3178_, lean_object* v_decl_3179_){
_start:
{
lean_object* v___x_3180_; 
v___x_3180_ = l_Lean_Compiler_LCNF_normLetDecl___redArg(v_pu_3174_, v_t_3175_, v_inst_3176_, v_inst_3177_, v_inst_3178_, v_decl_3179_);
return v___x_3180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___boxed(lean_object* v_m_3181_, lean_object* v_pu_3182_, lean_object* v_t_3183_, lean_object* v_inst_3184_, lean_object* v_inst_3185_, lean_object* v_inst_3186_, lean_object* v_decl_3187_){
_start:
{
uint8_t v_pu_boxed_3188_; uint8_t v_t_boxed_3189_; lean_object* v_res_3190_; 
v_pu_boxed_3188_ = lean_unbox(v_pu_3182_);
v_t_boxed_3189_ = lean_unbox(v_t_3183_);
v_res_3190_ = l_Lean_Compiler_LCNF_normLetDecl(v_m_3181_, v_pu_boxed_3188_, v_t_boxed_3189_, v_inst_3184_, v_inst_3185_, v_inst_3186_, v_decl_3187_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___redArg(){
_start:
{
lean_object* v___x_3192_; lean_object* v_toApplicative_3193_; lean_object* v_toFunctor_3194_; lean_object* v_toSeq_3195_; lean_object* v_toSeqLeft_3196_; lean_object* v_toSeqRight_3197_; lean_object* v___f_3198_; lean_object* v___f_3199_; lean_object* v___f_3200_; lean_object* v___f_3201_; lean_object* v___x_3202_; lean_object* v___f_3203_; lean_object* v___f_3204_; lean_object* v___f_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; lean_object* v_toApplicative_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3237_; 
v___x_3192_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11, &l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11_once, _init_l_Lean_Compiler_LCNF_instMonadCompilerM___closed__11);
v_toApplicative_3193_ = lean_ctor_get(v___x_3192_, 0);
v_toFunctor_3194_ = lean_ctor_get(v_toApplicative_3193_, 0);
v_toSeq_3195_ = lean_ctor_get(v_toApplicative_3193_, 2);
v_toSeqLeft_3196_ = lean_ctor_get(v_toApplicative_3193_, 3);
v_toSeqRight_3197_ = lean_ctor_get(v_toApplicative_3193_, 4);
v___f_3198_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__12));
v___f_3199_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__13));
lean_inc_ref_n(v_toFunctor_3194_, 2);
v___f_3200_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3200_, 0, v_toFunctor_3194_);
v___f_3201_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3201_, 0, v_toFunctor_3194_);
v___x_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___f_3200_);
lean_ctor_set(v___x_3202_, 1, v___f_3201_);
lean_inc(v_toSeqRight_3197_);
v___f_3203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3203_, 0, v_toSeqRight_3197_);
lean_inc(v_toSeqLeft_3196_);
v___f_3204_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3204_, 0, v_toSeqLeft_3196_);
lean_inc(v_toSeq_3195_);
v___f_3205_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3205_, 0, v_toSeq_3195_);
v___x_3206_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3202_);
lean_ctor_set(v___x_3206_, 1, v___f_3198_);
lean_ctor_set(v___x_3206_, 2, v___f_3205_);
lean_ctor_set(v___x_3206_, 3, v___f_3204_);
lean_ctor_set(v___x_3206_, 4, v___f_3203_);
v___x_3207_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3207_, 0, v___x_3206_);
lean_ctor_set(v___x_3207_, 1, v___f_3199_);
v___x_3208_ = l_StateRefT_x27_instMonad___redArg(v___x_3207_);
v_toApplicative_3209_ = lean_ctor_get(v___x_3208_, 0);
v_isSharedCheck_3237_ = !lean_is_exclusive(v___x_3208_);
if (v_isSharedCheck_3237_ == 0)
{
lean_object* v_unused_3238_; 
v_unused_3238_ = lean_ctor_get(v___x_3208_, 1);
lean_dec(v_unused_3238_);
v___x_3211_ = v___x_3208_;
v_isShared_3212_ = v_isSharedCheck_3237_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_toApplicative_3209_);
lean_dec(v___x_3208_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3237_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v_toFunctor_3213_; lean_object* v_toSeq_3214_; lean_object* v_toSeqLeft_3215_; lean_object* v_toSeqRight_3216_; lean_object* v___x_3218_; uint8_t v_isShared_3219_; uint8_t v_isSharedCheck_3235_; 
v_toFunctor_3213_ = lean_ctor_get(v_toApplicative_3209_, 0);
v_toSeq_3214_ = lean_ctor_get(v_toApplicative_3209_, 2);
v_toSeqLeft_3215_ = lean_ctor_get(v_toApplicative_3209_, 3);
v_toSeqRight_3216_ = lean_ctor_get(v_toApplicative_3209_, 4);
v_isSharedCheck_3235_ = !lean_is_exclusive(v_toApplicative_3209_);
if (v_isSharedCheck_3235_ == 0)
{
lean_object* v_unused_3236_; 
v_unused_3236_ = lean_ctor_get(v_toApplicative_3209_, 1);
lean_dec(v_unused_3236_);
v___x_3218_ = v_toApplicative_3209_;
v_isShared_3219_ = v_isSharedCheck_3235_;
goto v_resetjp_3217_;
}
else
{
lean_inc(v_toSeqRight_3216_);
lean_inc(v_toSeqLeft_3215_);
lean_inc(v_toSeq_3214_);
lean_inc(v_toFunctor_3213_);
lean_dec(v_toApplicative_3209_);
v___x_3218_ = lean_box(0);
v_isShared_3219_ = v_isSharedCheck_3235_;
goto v_resetjp_3217_;
}
v_resetjp_3217_:
{
lean_object* v___f_3220_; lean_object* v___f_3221_; lean_object* v___f_3222_; lean_object* v___f_3223_; lean_object* v___x_3224_; lean_object* v___f_3225_; lean_object* v___f_3226_; lean_object* v___f_3227_; lean_object* v___x_3229_; 
v___f_3220_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__14));
v___f_3221_ = ((lean_object*)(l_Lean_Compiler_LCNF_instMonadCompilerM___closed__15));
lean_inc_ref(v_toFunctor_3213_);
v___f_3222_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3222_, 0, v_toFunctor_3213_);
v___f_3223_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3223_, 0, v_toFunctor_3213_);
v___x_3224_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3224_, 0, v___f_3222_);
lean_ctor_set(v___x_3224_, 1, v___f_3223_);
v___f_3225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3225_, 0, v_toSeqRight_3216_);
v___f_3226_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3226_, 0, v_toSeqLeft_3215_);
v___f_3227_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3227_, 0, v_toSeq_3214_);
if (v_isShared_3219_ == 0)
{
lean_ctor_set(v___x_3218_, 4, v___f_3225_);
lean_ctor_set(v___x_3218_, 3, v___f_3226_);
lean_ctor_set(v___x_3218_, 2, v___f_3227_);
lean_ctor_set(v___x_3218_, 1, v___f_3220_);
lean_ctor_set(v___x_3218_, 0, v___x_3224_);
v___x_3229_ = v___x_3218_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v___x_3224_);
lean_ctor_set(v_reuseFailAlloc_3234_, 1, v___f_3220_);
lean_ctor_set(v_reuseFailAlloc_3234_, 2, v___f_3227_);
lean_ctor_set(v_reuseFailAlloc_3234_, 3, v___f_3226_);
lean_ctor_set(v_reuseFailAlloc_3234_, 4, v___f_3225_);
v___x_3229_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
lean_object* v___x_3231_; 
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 1, v___f_3221_);
lean_ctor_set(v___x_3211_, 0, v___x_3229_);
v___x_3231_ = v___x_3211_;
goto v_reusejp_3230_;
}
else
{
lean_object* v_reuseFailAlloc_3233_; 
v_reuseFailAlloc_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3233_, 0, v___x_3229_);
lean_ctor_set(v_reuseFailAlloc_3233_, 1, v___f_3221_);
v___x_3231_ = v_reuseFailAlloc_3233_;
goto v_reusejp_3230_;
}
v_reusejp_3230_:
{
lean_object* v___x_3232_; 
v___x_3232_ = lean_alloc_closure((void*)(l_ReaderT_read___boxed), 4, 3);
lean_closure_set(v___x_3232_, 0, lean_box(0));
lean_closure_set(v___x_3232_, 1, lean_box(0));
lean_closure_set(v___x_3232_, 2, v___x_3231_);
return v___x_3232_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___redArg___boxed(lean_object* v___dummy_3239_){
_start:
{
lean_object* v_res_3240_; 
v_res_3240_ = l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___redArg();
return v_res_3240_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___closed__0(void){
_start:
{
lean_object* v___x_3241_; 
v___x_3241_ = l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___redArg();
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM(uint8_t v_pu_3242_, uint8_t v_t_3243_){
_start:
{
lean_object* v___x_3244_; 
v___x_3244_ = lean_obj_once(&l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___closed__0, &l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___closed__0_once, _init_l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___closed__0);
return v___x_3244_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM___boxed(lean_object* v_pu_3245_, lean_object* v_t_3246_){
_start:
{
uint8_t v_pu_boxed_3247_; uint8_t v_t_boxed_3248_; lean_object* v_res_3249_; 
v_pu_boxed_3247_ = lean_unbox(v_pu_3245_);
v_t_boxed_3248_ = lean_unbox(v_t_3246_);
v_res_3249_ = l_Lean_Compiler_LCNF_instMonadFVarSubstNormalizerM(v_pu_boxed_3247_, v_t_boxed_3248_);
return v_res_3249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg(uint8_t v_pu_3250_, lean_object* v_inst_3251_, lean_object* v_result_3252_, lean_object* v_x_3253_){
_start:
{
if (lean_obj_tag(v_result_3252_) == 0)
{
lean_object* v_fvarId_3254_; lean_object* v___x_3255_; 
lean_dec(v_inst_3251_);
v_fvarId_3254_ = lean_ctor_get(v_result_3252_, 0);
lean_inc(v_fvarId_3254_);
lean_dec_ref_known(v_result_3252_, 1);
v___x_3255_ = lean_apply_1(v_x_3253_, v_fvarId_3254_);
return v___x_3255_;
}
else
{
lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
lean_dec(v_x_3253_);
v___x_3256_ = lean_box(v_pu_3250_);
v___x_3257_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkReturnErased___boxed), 6, 1);
lean_closure_set(v___x_3257_, 0, v___x_3256_);
v___x_3258_ = lean_apply_2(v_inst_3251_, lean_box(0), v___x_3257_);
return v___x_3258_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___redArg___boxed(lean_object* v_pu_3259_, lean_object* v_inst_3260_, lean_object* v_result_3261_, lean_object* v_x_3262_){
_start:
{
uint8_t v_pu_boxed_3263_; lean_object* v_res_3264_; 
v_pu_boxed_3263_ = lean_unbox(v_pu_3259_);
v_res_3264_ = l_Lean_Compiler_LCNF_withNormFVarResult___redArg(v_pu_boxed_3263_, v_inst_3260_, v_result_3261_, v_x_3262_);
return v_res_3264_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult(lean_object* v_m_3265_, uint8_t v_pu_3266_, lean_object* v_inst_3267_, lean_object* v_inst_3268_, lean_object* v_result_3269_, lean_object* v_x_3270_){
_start:
{
if (lean_obj_tag(v_result_3269_) == 0)
{
lean_object* v_fvarId_3271_; lean_object* v___x_3272_; 
lean_dec(v_inst_3267_);
v_fvarId_3271_ = lean_ctor_get(v_result_3269_, 0);
lean_inc(v_fvarId_3271_);
lean_dec_ref_known(v_result_3269_, 1);
v___x_3272_ = lean_apply_1(v_x_3270_, v_fvarId_3271_);
return v___x_3272_;
}
else
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; 
lean_dec(v_x_3270_);
v___x_3273_ = lean_box(v_pu_3266_);
v___x_3274_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkReturnErased___boxed), 6, 1);
lean_closure_set(v___x_3274_, 0, v___x_3273_);
v___x_3275_ = lean_apply_2(v_inst_3267_, lean_box(0), v___x_3274_);
return v___x_3275_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_withNormFVarResult___boxed(lean_object* v_m_3276_, lean_object* v_pu_3277_, lean_object* v_inst_3278_, lean_object* v_inst_3279_, lean_object* v_result_3280_, lean_object* v_x_3281_){
_start:
{
uint8_t v_pu_boxed_3282_; lean_object* v_res_3283_; 
v_pu_boxed_3282_ = lean_unbox(v_pu_3277_);
v_res_3283_ = l_Lean_Compiler_LCNF_withNormFVarResult(v_m_3276_, v_pu_boxed_3282_, v_inst_3278_, v_inst_3279_, v_result_3280_, v_x_3281_);
lean_dec_ref(v_inst_3279_);
return v_res_3283_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(uint8_t v_pu_3284_, uint8_t v_t_3285_, lean_object* v_args_3286_, lean_object* v___y_3287_){
_start:
{
lean_object* v___x_3289_; lean_object* v___x_3290_; 
v___x_3289_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgsImp(v_pu_3284_, v___y_3287_, v_args_3286_, v_t_3285_);
v___x_3290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3290_, 0, v___x_3289_);
return v___x_3290_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg___boxed(lean_object* v_pu_3291_, lean_object* v_t_3292_, lean_object* v_args_3293_, lean_object* v___y_3294_, lean_object* v___y_3295_){
_start:
{
uint8_t v_pu_boxed_3296_; uint8_t v_t_boxed_3297_; lean_object* v_res_3298_; 
v_pu_boxed_3296_ = lean_unbox(v_pu_3291_);
v_t_boxed_3297_ = lean_unbox(v_t_3292_);
v_res_3298_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(v_pu_boxed_3296_, v_t_boxed_3297_, v_args_3293_, v___y_3294_);
lean_dec_ref(v___y_3294_);
return v_res_3298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(uint8_t v_pu_3299_, uint8_t v_t_3300_, lean_object* v_i_3301_, lean_object* v_as_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_){
_start:
{
lean_object* v___x_3306_; uint8_t v___x_3307_; 
v___x_3306_ = lean_array_get_size(v_as_3302_);
v___x_3307_ = lean_nat_dec_lt(v_i_3301_, v___x_3306_);
if (v___x_3307_ == 0)
{
lean_object* v___x_3308_; 
lean_dec(v_i_3301_);
v___x_3308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3308_, 0, v_as_3302_);
return v___x_3308_;
}
else
{
lean_object* v_a_3309_; lean_object* v_type_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; 
v_a_3309_ = lean_array_fget_borrowed(v_as_3302_, v_i_3301_);
v_type_3310_ = lean_ctor_get(v_a_3309_, 2);
lean_inc_ref(v_type_3310_);
v___x_3311_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3299_, v___y_3303_, v_t_3300_, v_type_3310_);
lean_inc(v_a_3309_);
v___x_3312_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateParamImp___redArg(v_pu_3299_, v_a_3309_, v___x_3311_, v___y_3304_);
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_a_3313_; size_t v___x_3314_; size_t v___x_3315_; uint8_t v___x_3316_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v___x_3312_, 1);
v___x_3314_ = lean_ptr_addr(v_a_3309_);
v___x_3315_ = lean_ptr_addr(v_a_3313_);
v___x_3316_ = lean_usize_dec_eq(v___x_3314_, v___x_3315_);
if (v___x_3316_ == 0)
{
lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; 
v___x_3317_ = lean_unsigned_to_nat(1u);
v___x_3318_ = lean_nat_add(v_i_3301_, v___x_3317_);
v___x_3319_ = lean_array_fset(v_as_3302_, v_i_3301_, v_a_3313_);
lean_dec(v_i_3301_);
v_i_3301_ = v___x_3318_;
v_as_3302_ = v___x_3319_;
goto _start;
}
else
{
lean_object* v___x_3321_; lean_object* v___x_3322_; 
lean_dec(v_a_3313_);
v___x_3321_ = lean_unsigned_to_nat(1u);
v___x_3322_ = lean_nat_add(v_i_3301_, v___x_3321_);
lean_dec(v_i_3301_);
v_i_3301_ = v___x_3322_;
goto _start;
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3331_; 
lean_dec_ref(v_as_3302_);
lean_dec(v_i_3301_);
v_a_3324_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3331_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3331_ == 0)
{
v___x_3326_ = v___x_3312_;
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3312_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3331_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v___x_3329_; 
if (v_isShared_3327_ == 0)
{
v___x_3329_ = v___x_3326_;
goto v_reusejp_3328_;
}
else
{
lean_object* v_reuseFailAlloc_3330_; 
v_reuseFailAlloc_3330_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3330_, 0, v_a_3324_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg___boxed(lean_object* v_pu_3332_, lean_object* v_t_3333_, lean_object* v_i_3334_, lean_object* v_as_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_){
_start:
{
uint8_t v_pu_boxed_3339_; uint8_t v_t_boxed_3340_; lean_object* v_res_3341_; 
v_pu_boxed_3339_ = lean_unbox(v_pu_3332_);
v_t_boxed_3340_ = lean_unbox(v_t_3333_);
v_res_3341_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(v_pu_boxed_3339_, v_t_boxed_3340_, v_i_3334_, v_as_3335_, v___y_3336_, v___y_3337_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
return v_res_3341_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(uint8_t v_pu_3342_, uint8_t v_t_3343_, lean_object* v_ps_3344_, lean_object* v___y_3345_, lean_object* v___y_3346_, lean_object* v___y_3347_, lean_object* v___y_3348_, lean_object* v___y_3349_){
_start:
{
lean_object* v___x_3351_; lean_object* v___x_3352_; 
v___x_3351_ = lean_unsigned_to_nat(0u);
v___x_3352_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(v_pu_3342_, v_t_3343_, v___x_3351_, v_ps_3344_, v___y_3345_, v___y_3347_);
return v___x_3352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg___boxed(lean_object* v_pu_3353_, lean_object* v_t_3354_, lean_object* v_ps_3355_, lean_object* v___y_3356_, lean_object* v___y_3357_, lean_object* v___y_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_){
_start:
{
uint8_t v_pu_boxed_3362_; uint8_t v_t_boxed_3363_; lean_object* v_res_3364_; 
v_pu_boxed_3362_ = lean_unbox(v_pu_3353_);
v_t_boxed_3363_ = lean_unbox(v_t_3354_);
v_res_3364_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_boxed_3362_, v_t_boxed_3363_, v_ps_3355_, v___y_3356_, v___y_3357_, v___y_3358_, v___y_3359_, v___y_3360_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec(v___y_3358_);
lean_dec_ref(v___y_3357_);
lean_dec_ref(v___y_3356_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(uint8_t v_pu_3365_, uint8_t v_t_3366_, lean_object* v_decl_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_){
_start:
{
lean_object* v_type_3371_; lean_object* v_value_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; 
v_type_3371_ = lean_ctor_get(v_decl_3367_, 2);
v_value_3372_ = lean_ctor_get(v_decl_3367_, 3);
lean_inc_ref(v_type_3371_);
v___x_3373_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3365_, v___y_3368_, v_t_3366_, v_type_3371_);
lean_inc(v_value_3372_);
v___x_3374_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normLetValueImp(v_pu_3365_, v___y_3368_, v_value_3372_, v_t_3366_);
v___x_3375_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateLetDeclImp___redArg(v_pu_3365_, v_decl_3367_, v___x_3373_, v___x_3374_, v___y_3369_);
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg___boxed(lean_object* v_pu_3376_, lean_object* v_t_3377_, lean_object* v_decl_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_){
_start:
{
uint8_t v_pu_boxed_3382_; uint8_t v_t_boxed_3383_; lean_object* v_res_3384_; 
v_pu_boxed_3382_ = lean_unbox(v_pu_3376_);
v_t_boxed_3383_ = lean_unbox(v_t_3377_);
v_res_3384_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(v_pu_boxed_3382_, v_t_boxed_3383_, v_decl_3378_, v___y_3379_, v___y_3380_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(uint8_t v_pu_3385_, uint8_t v_t_3386_, lean_object* v_i_3387_, lean_object* v_as_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v___x_3395_; uint8_t v___x_3396_; 
v___x_3395_ = lean_array_get_size(v_as_3388_);
v___x_3396_ = lean_nat_dec_lt(v_i_3387_, v___x_3395_);
if (v___x_3396_ == 0)
{
lean_object* v___x_3397_; 
lean_dec(v_i_3387_);
v___x_3397_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3397_, 0, v_as_3388_);
return v___x_3397_;
}
else
{
lean_object* v_a_3398_; lean_object* v_a_3400_; 
v_a_3398_ = lean_array_fget_borrowed(v_as_3388_, v_i_3387_);
switch(lean_obj_tag(v_a_3398_))
{
case 0:
{
lean_object* v_params_3411_; lean_object* v_code_3412_; lean_object* v___x_3413_; 
v_params_3411_ = lean_ctor_get(v_a_3398_, 1);
v_code_3412_ = lean_ctor_get(v_a_3398_, 2);
lean_inc_ref(v_params_3411_);
v___x_3413_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_3385_, v_t_3386_, v_params_3411_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
if (lean_obj_tag(v___x_3413_) == 0)
{
lean_object* v_a_3414_; lean_object* v___x_3415_; 
v_a_3414_ = lean_ctor_get(v___x_3413_, 0);
lean_inc(v_a_3414_);
lean_dec_ref_known(v___x_3413_, 1);
lean_inc_ref(v_code_3412_);
v___x_3415_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3385_, v_t_3386_, v_code_3412_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
if (lean_obj_tag(v___x_3415_) == 0)
{
lean_object* v_a_3416_; lean_object* v___x_3417_; 
v_a_3416_ = lean_ctor_get(v___x_3415_, 0);
lean_inc(v_a_3416_);
lean_dec_ref_known(v___x_3415_, 1);
lean_inc_ref(v_a_3398_);
v___x_3417_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltImp(v_pu_3385_, v_a_3398_, v_a_3414_, v_a_3416_);
v_a_3400_ = v___x_3417_;
goto v___jp_3399_;
}
else
{
lean_object* v_a_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3425_; 
lean_dec(v_a_3414_);
lean_dec_ref(v_as_3388_);
lean_dec(v_i_3387_);
v_a_3418_ = lean_ctor_get(v___x_3415_, 0);
v_isSharedCheck_3425_ = !lean_is_exclusive(v___x_3415_);
if (v_isSharedCheck_3425_ == 0)
{
v___x_3420_ = v___x_3415_;
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_a_3418_);
lean_dec(v___x_3415_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3425_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3423_; 
if (v_isShared_3421_ == 0)
{
v___x_3423_ = v___x_3420_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3424_; 
v_reuseFailAlloc_3424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3424_, 0, v_a_3418_);
v___x_3423_ = v_reuseFailAlloc_3424_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
return v___x_3423_;
}
}
}
}
else
{
lean_object* v_a_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3433_; 
lean_dec_ref(v_as_3388_);
lean_dec(v_i_3387_);
v_a_3426_ = lean_ctor_get(v___x_3413_, 0);
v_isSharedCheck_3433_ = !lean_is_exclusive(v___x_3413_);
if (v_isSharedCheck_3433_ == 0)
{
v___x_3428_ = v___x_3413_;
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_a_3426_);
lean_dec(v___x_3413_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3433_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v___x_3431_; 
if (v_isShared_3429_ == 0)
{
v___x_3431_ = v___x_3428_;
goto v_reusejp_3430_;
}
else
{
lean_object* v_reuseFailAlloc_3432_; 
v_reuseFailAlloc_3432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3432_, 0, v_a_3426_);
v___x_3431_ = v_reuseFailAlloc_3432_;
goto v_reusejp_3430_;
}
v_reusejp_3430_:
{
return v___x_3431_;
}
}
}
}
case 1:
{
lean_object* v_code_3434_; lean_object* v___x_3435_; 
v_code_3434_ = lean_ctor_get(v_a_3398_, 1);
lean_inc_ref(v_code_3434_);
v___x_3435_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3385_, v_t_3386_, v_code_3434_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
if (lean_obj_tag(v___x_3435_) == 0)
{
lean_object* v_a_3436_; lean_object* v___x_3437_; 
v_a_3436_ = lean_ctor_get(v___x_3435_, 0);
lean_inc(v_a_3436_);
lean_dec_ref_known(v___x_3435_, 1);
lean_inc_ref(v_a_3398_);
v___x_3437_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_3398_, v_a_3436_);
v_a_3400_ = v___x_3437_;
goto v___jp_3399_;
}
else
{
lean_object* v_a_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3445_; 
lean_dec_ref(v_as_3388_);
lean_dec(v_i_3387_);
v_a_3438_ = lean_ctor_get(v___x_3435_, 0);
v_isSharedCheck_3445_ = !lean_is_exclusive(v___x_3435_);
if (v_isSharedCheck_3445_ == 0)
{
v___x_3440_ = v___x_3435_;
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_a_3438_);
lean_dec(v___x_3435_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3445_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3444_; 
v_reuseFailAlloc_3444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3444_, 0, v_a_3438_);
v___x_3443_ = v_reuseFailAlloc_3444_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
return v___x_3443_;
}
}
}
}
default: 
{
lean_object* v_code_3446_; lean_object* v___x_3447_; 
v_code_3446_ = lean_ctor_get(v_a_3398_, 0);
lean_inc_ref(v_code_3446_);
v___x_3447_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3385_, v_t_3386_, v_code_3446_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
if (lean_obj_tag(v___x_3447_) == 0)
{
lean_object* v_a_3448_; lean_object* v___x_3449_; 
v_a_3448_ = lean_ctor_get(v___x_3447_, 0);
lean_inc(v_a_3448_);
lean_dec_ref_known(v___x_3447_, 1);
lean_inc_ref(v_a_3398_);
v___x_3449_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_a_3398_, v_a_3448_);
v_a_3400_ = v___x_3449_;
goto v___jp_3399_;
}
else
{
lean_object* v_a_3450_; lean_object* v___x_3452_; uint8_t v_isShared_3453_; uint8_t v_isSharedCheck_3457_; 
lean_dec_ref(v_as_3388_);
lean_dec(v_i_3387_);
v_a_3450_ = lean_ctor_get(v___x_3447_, 0);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3447_);
if (v_isSharedCheck_3457_ == 0)
{
v___x_3452_ = v___x_3447_;
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
else
{
lean_inc(v_a_3450_);
lean_dec(v___x_3447_);
v___x_3452_ = lean_box(0);
v_isShared_3453_ = v_isSharedCheck_3457_;
goto v_resetjp_3451_;
}
v_resetjp_3451_:
{
lean_object* v___x_3455_; 
if (v_isShared_3453_ == 0)
{
v___x_3455_ = v___x_3452_;
goto v_reusejp_3454_;
}
else
{
lean_object* v_reuseFailAlloc_3456_; 
v_reuseFailAlloc_3456_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3456_, 0, v_a_3450_);
v___x_3455_ = v_reuseFailAlloc_3456_;
goto v_reusejp_3454_;
}
v_reusejp_3454_:
{
return v___x_3455_;
}
}
}
}
}
v___jp_3399_:
{
size_t v___x_3401_; size_t v___x_3402_; uint8_t v___x_3403_; 
v___x_3401_ = lean_ptr_addr(v_a_3398_);
v___x_3402_ = lean_ptr_addr(v_a_3400_);
v___x_3403_ = lean_usize_dec_eq(v___x_3401_, v___x_3402_);
if (v___x_3403_ == 0)
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3404_ = lean_unsigned_to_nat(1u);
v___x_3405_ = lean_nat_add(v_i_3387_, v___x_3404_);
v___x_3406_ = lean_array_fset(v_as_3388_, v_i_3387_, v_a_3400_);
lean_dec(v_i_3387_);
v_i_3387_ = v___x_3405_;
v_as_3388_ = v___x_3406_;
goto _start;
}
else
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
lean_dec_ref(v_a_3400_);
v___x_3408_ = lean_unsigned_to_nat(1u);
v___x_3409_ = lean_nat_add(v_i_3387_, v___x_3408_);
lean_dec(v_i_3387_);
v_i_3387_ = v___x_3409_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp(uint8_t v_pu_3458_, uint8_t v_t_3459_, lean_object* v_code_3460_, lean_object* v___y_3461_, lean_object* v___y_3462_, lean_object* v___y_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_){
_start:
{
switch(lean_obj_tag(v_code_3460_))
{
case 0:
{
lean_object* v_decl_3467_; lean_object* v_k_3468_; lean_object* v___x_3469_; 
v_decl_3467_ = lean_ctor_get(v_code_3460_, 0);
v_k_3468_ = lean_ctor_get(v_code_3460_, 1);
lean_inc_ref(v_decl_3467_);
v___x_3469_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(v_pu_3458_, v_t_3459_, v_decl_3467_, v___y_3461_, v___y_3463_);
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_object* v_a_3470_; lean_object* v___x_3471_; 
v_a_3470_ = lean_ctor_get(v___x_3469_, 0);
lean_inc(v_a_3470_);
lean_dec_ref_known(v___x_3469_, 1);
lean_inc_ref(v_k_3468_);
v___x_3471_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_3468_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3471_) == 0)
{
lean_object* v_a_3472_; lean_object* v___x_3474_; uint8_t v_isShared_3475_; uint8_t v_isSharedCheck_3509_; 
v_a_3472_ = lean_ctor_get(v___x_3471_, 0);
v_isSharedCheck_3509_ = !lean_is_exclusive(v___x_3471_);
if (v_isSharedCheck_3509_ == 0)
{
v___x_3474_ = v___x_3471_;
v_isShared_3475_ = v_isSharedCheck_3509_;
goto v_resetjp_3473_;
}
else
{
lean_inc(v_a_3472_);
lean_dec(v___x_3471_);
v___x_3474_ = lean_box(0);
v_isShared_3475_ = v_isSharedCheck_3509_;
goto v_resetjp_3473_;
}
v_resetjp_3473_:
{
size_t v___x_3476_; size_t v___x_3477_; uint8_t v___x_3478_; 
v___x_3476_ = lean_ptr_addr(v_k_3468_);
v___x_3477_ = lean_ptr_addr(v_a_3472_);
v___x_3478_ = lean_usize_dec_eq(v___x_3476_, v___x_3477_);
if (v___x_3478_ == 0)
{
lean_object* v___x_3480_; uint8_t v_isShared_3481_; uint8_t v_isSharedCheck_3488_; 
v_isSharedCheck_3488_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3488_ == 0)
{
lean_object* v_unused_3489_; lean_object* v_unused_3490_; 
v_unused_3489_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3489_);
v_unused_3490_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3490_);
v___x_3480_ = v_code_3460_;
v_isShared_3481_ = v_isSharedCheck_3488_;
goto v_resetjp_3479_;
}
else
{
lean_dec(v_code_3460_);
v___x_3480_ = lean_box(0);
v_isShared_3481_ = v_isSharedCheck_3488_;
goto v_resetjp_3479_;
}
v_resetjp_3479_:
{
lean_object* v___x_3483_; 
if (v_isShared_3481_ == 0)
{
lean_ctor_set(v___x_3480_, 1, v_a_3472_);
lean_ctor_set(v___x_3480_, 0, v_a_3470_);
v___x_3483_ = v___x_3480_;
goto v_reusejp_3482_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_a_3470_);
lean_ctor_set(v_reuseFailAlloc_3487_, 1, v_a_3472_);
v___x_3483_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3482_;
}
v_reusejp_3482_:
{
lean_object* v___x_3485_; 
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3483_);
v___x_3485_ = v___x_3474_;
goto v_reusejp_3484_;
}
else
{
lean_object* v_reuseFailAlloc_3486_; 
v_reuseFailAlloc_3486_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3486_, 0, v___x_3483_);
v___x_3485_ = v_reuseFailAlloc_3486_;
goto v_reusejp_3484_;
}
v_reusejp_3484_:
{
return v___x_3485_;
}
}
}
}
else
{
size_t v___x_3491_; size_t v___x_3492_; uint8_t v___x_3493_; 
v___x_3491_ = lean_ptr_addr(v_decl_3467_);
v___x_3492_ = lean_ptr_addr(v_a_3470_);
v___x_3493_ = lean_usize_dec_eq(v___x_3491_, v___x_3492_);
if (v___x_3493_ == 0)
{
lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3503_; 
v_isSharedCheck_3503_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3503_ == 0)
{
lean_object* v_unused_3504_; lean_object* v_unused_3505_; 
v_unused_3504_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3504_);
v_unused_3505_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3505_);
v___x_3495_ = v_code_3460_;
v_isShared_3496_ = v_isSharedCheck_3503_;
goto v_resetjp_3494_;
}
else
{
lean_dec(v_code_3460_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3503_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
lean_ctor_set(v___x_3495_, 1, v_a_3472_);
lean_ctor_set(v___x_3495_, 0, v_a_3470_);
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3502_; 
v_reuseFailAlloc_3502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3502_, 0, v_a_3470_);
lean_ctor_set(v_reuseFailAlloc_3502_, 1, v_a_3472_);
v___x_3498_ = v_reuseFailAlloc_3502_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
lean_object* v___x_3500_; 
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v___x_3498_);
v___x_3500_ = v___x_3474_;
goto v_reusejp_3499_;
}
else
{
lean_object* v_reuseFailAlloc_3501_; 
v_reuseFailAlloc_3501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3501_, 0, v___x_3498_);
v___x_3500_ = v_reuseFailAlloc_3501_;
goto v_reusejp_3499_;
}
v_reusejp_3499_:
{
return v___x_3500_;
}
}
}
}
else
{
lean_object* v___x_3507_; 
lean_dec(v_a_3472_);
lean_dec(v_a_3470_);
if (v_isShared_3475_ == 0)
{
lean_ctor_set(v___x_3474_, 0, v_code_3460_);
v___x_3507_ = v___x_3474_;
goto v_reusejp_3506_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_code_3460_);
v___x_3507_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3506_;
}
v_reusejp_3506_:
{
return v___x_3507_;
}
}
}
}
}
else
{
lean_dec(v_a_3470_);
lean_dec_ref_known(v_code_3460_, 2);
return v___x_3471_;
}
}
else
{
lean_object* v_a_3510_; lean_object* v___x_3512_; uint8_t v_isShared_3513_; uint8_t v_isSharedCheck_3517_; 
lean_dec_ref_known(v_code_3460_, 2);
v_a_3510_ = lean_ctor_get(v___x_3469_, 0);
v_isSharedCheck_3517_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3517_ == 0)
{
v___x_3512_ = v___x_3469_;
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
else
{
lean_inc(v_a_3510_);
lean_dec(v___x_3469_);
v___x_3512_ = lean_box(0);
v_isShared_3513_ = v_isSharedCheck_3517_;
goto v_resetjp_3511_;
}
v_resetjp_3511_:
{
lean_object* v___x_3515_; 
if (v_isShared_3513_ == 0)
{
v___x_3515_ = v___x_3512_;
goto v_reusejp_3514_;
}
else
{
lean_object* v_reuseFailAlloc_3516_; 
v_reuseFailAlloc_3516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3516_, 0, v_a_3510_);
v___x_3515_ = v_reuseFailAlloc_3516_;
goto v_reusejp_3514_;
}
v_reusejp_3514_:
{
return v___x_3515_;
}
}
}
}
case 1:
{
lean_object* v_decl_3518_; lean_object* v_k_3519_; lean_object* v___x_3520_; 
v_decl_3518_ = lean_ctor_get(v_code_3460_, 0);
v_k_3519_ = lean_ctor_get(v_code_3460_, 1);
lean_inc_ref(v_decl_3518_);
v___x_3520_ = l_Lean_Compiler_LCNF_normFunDeclImp(v_pu_3458_, v_t_3459_, v_decl_3518_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v_a_3521_; lean_object* v___x_3522_; 
v_a_3521_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3521_);
lean_dec_ref_known(v___x_3520_, 1);
lean_inc_ref(v_k_3519_);
v___x_3522_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_3519_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3522_) == 0)
{
lean_object* v_a_3523_; lean_object* v___x_3525_; uint8_t v_isShared_3526_; uint8_t v_isSharedCheck_3560_; 
v_a_3523_ = lean_ctor_get(v___x_3522_, 0);
v_isSharedCheck_3560_ = !lean_is_exclusive(v___x_3522_);
if (v_isSharedCheck_3560_ == 0)
{
v___x_3525_ = v___x_3522_;
v_isShared_3526_ = v_isSharedCheck_3560_;
goto v_resetjp_3524_;
}
else
{
lean_inc(v_a_3523_);
lean_dec(v___x_3522_);
v___x_3525_ = lean_box(0);
v_isShared_3526_ = v_isSharedCheck_3560_;
goto v_resetjp_3524_;
}
v_resetjp_3524_:
{
size_t v___x_3527_; size_t v___x_3528_; uint8_t v___x_3529_; 
v___x_3527_ = lean_ptr_addr(v_k_3519_);
v___x_3528_ = lean_ptr_addr(v_a_3523_);
v___x_3529_ = lean_usize_dec_eq(v___x_3527_, v___x_3528_);
if (v___x_3529_ == 0)
{
lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3539_; 
v_isSharedCheck_3539_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3539_ == 0)
{
lean_object* v_unused_3540_; lean_object* v_unused_3541_; 
v_unused_3540_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3540_);
v_unused_3541_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3541_);
v___x_3531_ = v_code_3460_;
v_isShared_3532_ = v_isSharedCheck_3539_;
goto v_resetjp_3530_;
}
else
{
lean_dec(v_code_3460_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3539_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
lean_ctor_set(v___x_3531_, 1, v_a_3523_);
lean_ctor_set(v___x_3531_, 0, v_a_3521_);
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3538_; 
v_reuseFailAlloc_3538_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3538_, 0, v_a_3521_);
lean_ctor_set(v_reuseFailAlloc_3538_, 1, v_a_3523_);
v___x_3534_ = v_reuseFailAlloc_3538_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
lean_object* v___x_3536_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v___x_3534_);
v___x_3536_ = v___x_3525_;
goto v_reusejp_3535_;
}
else
{
lean_object* v_reuseFailAlloc_3537_; 
v_reuseFailAlloc_3537_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3537_, 0, v___x_3534_);
v___x_3536_ = v_reuseFailAlloc_3537_;
goto v_reusejp_3535_;
}
v_reusejp_3535_:
{
return v___x_3536_;
}
}
}
}
else
{
size_t v___x_3542_; size_t v___x_3543_; uint8_t v___x_3544_; 
v___x_3542_ = lean_ptr_addr(v_decl_3518_);
v___x_3543_ = lean_ptr_addr(v_a_3521_);
v___x_3544_ = lean_usize_dec_eq(v___x_3542_, v___x_3543_);
if (v___x_3544_ == 0)
{
lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3554_; 
v_isSharedCheck_3554_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3554_ == 0)
{
lean_object* v_unused_3555_; lean_object* v_unused_3556_; 
v_unused_3555_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3555_);
v_unused_3556_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3556_);
v___x_3546_ = v_code_3460_;
v_isShared_3547_ = v_isSharedCheck_3554_;
goto v_resetjp_3545_;
}
else
{
lean_dec(v_code_3460_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3554_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3549_; 
if (v_isShared_3547_ == 0)
{
lean_ctor_set(v___x_3546_, 1, v_a_3523_);
lean_ctor_set(v___x_3546_, 0, v_a_3521_);
v___x_3549_ = v___x_3546_;
goto v_reusejp_3548_;
}
else
{
lean_object* v_reuseFailAlloc_3553_; 
v_reuseFailAlloc_3553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3553_, 0, v_a_3521_);
lean_ctor_set(v_reuseFailAlloc_3553_, 1, v_a_3523_);
v___x_3549_ = v_reuseFailAlloc_3553_;
goto v_reusejp_3548_;
}
v_reusejp_3548_:
{
lean_object* v___x_3551_; 
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v___x_3549_);
v___x_3551_ = v___x_3525_;
goto v_reusejp_3550_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3549_);
v___x_3551_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3550_;
}
v_reusejp_3550_:
{
return v___x_3551_;
}
}
}
}
else
{
lean_object* v___x_3558_; 
lean_dec(v_a_3523_);
lean_dec(v_a_3521_);
if (v_isShared_3526_ == 0)
{
lean_ctor_set(v___x_3525_, 0, v_code_3460_);
v___x_3558_ = v___x_3525_;
goto v_reusejp_3557_;
}
else
{
lean_object* v_reuseFailAlloc_3559_; 
v_reuseFailAlloc_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3559_, 0, v_code_3460_);
v___x_3558_ = v_reuseFailAlloc_3559_;
goto v_reusejp_3557_;
}
v_reusejp_3557_:
{
return v___x_3558_;
}
}
}
}
}
else
{
lean_dec(v_a_3521_);
lean_dec_ref_known(v_code_3460_, 2);
return v___x_3522_;
}
}
else
{
lean_object* v_a_3561_; lean_object* v___x_3563_; uint8_t v_isShared_3564_; uint8_t v_isSharedCheck_3568_; 
lean_dec_ref_known(v_code_3460_, 2);
v_a_3561_ = lean_ctor_get(v___x_3520_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v___x_3520_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3563_ = v___x_3520_;
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
else
{
lean_inc(v_a_3561_);
lean_dec(v___x_3520_);
v___x_3563_ = lean_box(0);
v_isShared_3564_ = v_isSharedCheck_3568_;
goto v_resetjp_3562_;
}
v_resetjp_3562_:
{
lean_object* v___x_3566_; 
if (v_isShared_3564_ == 0)
{
v___x_3566_ = v___x_3563_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v_a_3561_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
}
case 2:
{
lean_object* v_decl_3569_; lean_object* v_k_3570_; lean_object* v___x_3571_; 
v_decl_3569_ = lean_ctor_get(v_code_3460_, 0);
v_k_3570_ = lean_ctor_get(v_code_3460_, 1);
lean_inc_ref(v_decl_3569_);
v___x_3571_ = l_Lean_Compiler_LCNF_normFunDeclImp(v_pu_3458_, v_t_3459_, v_decl_3569_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3571_) == 0)
{
lean_object* v_a_3572_; lean_object* v___x_3573_; 
v_a_3572_ = lean_ctor_get(v___x_3571_, 0);
lean_inc(v_a_3572_);
lean_dec_ref_known(v___x_3571_, 1);
lean_inc_ref(v_k_3570_);
v___x_3573_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_3570_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3573_) == 0)
{
lean_object* v_a_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3611_; 
v_a_3574_ = lean_ctor_get(v___x_3573_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3573_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3576_ = v___x_3573_;
v_isShared_3577_ = v_isSharedCheck_3611_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_a_3574_);
lean_dec(v___x_3573_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3611_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
size_t v___x_3578_; size_t v___x_3579_; uint8_t v___x_3580_; 
v___x_3578_ = lean_ptr_addr(v_k_3570_);
v___x_3579_ = lean_ptr_addr(v_a_3574_);
v___x_3580_ = lean_usize_dec_eq(v___x_3578_, v___x_3579_);
if (v___x_3580_ == 0)
{
lean_object* v___x_3582_; uint8_t v_isShared_3583_; uint8_t v_isSharedCheck_3590_; 
v_isSharedCheck_3590_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3590_ == 0)
{
lean_object* v_unused_3591_; lean_object* v_unused_3592_; 
v_unused_3591_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3591_);
v_unused_3592_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3592_);
v___x_3582_ = v_code_3460_;
v_isShared_3583_ = v_isSharedCheck_3590_;
goto v_resetjp_3581_;
}
else
{
lean_dec(v_code_3460_);
v___x_3582_ = lean_box(0);
v_isShared_3583_ = v_isSharedCheck_3590_;
goto v_resetjp_3581_;
}
v_resetjp_3581_:
{
lean_object* v___x_3585_; 
if (v_isShared_3583_ == 0)
{
lean_ctor_set(v___x_3582_, 1, v_a_3574_);
lean_ctor_set(v___x_3582_, 0, v_a_3572_);
v___x_3585_ = v___x_3582_;
goto v_reusejp_3584_;
}
else
{
lean_object* v_reuseFailAlloc_3589_; 
v_reuseFailAlloc_3589_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3589_, 0, v_a_3572_);
lean_ctor_set(v_reuseFailAlloc_3589_, 1, v_a_3574_);
v___x_3585_ = v_reuseFailAlloc_3589_;
goto v_reusejp_3584_;
}
v_reusejp_3584_:
{
lean_object* v___x_3587_; 
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v___x_3585_);
v___x_3587_ = v___x_3576_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3588_; 
v_reuseFailAlloc_3588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3588_, 0, v___x_3585_);
v___x_3587_ = v_reuseFailAlloc_3588_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
return v___x_3587_;
}
}
}
}
else
{
size_t v___x_3593_; size_t v___x_3594_; uint8_t v___x_3595_; 
v___x_3593_ = lean_ptr_addr(v_decl_3569_);
v___x_3594_ = lean_ptr_addr(v_a_3572_);
v___x_3595_ = lean_usize_dec_eq(v___x_3593_, v___x_3594_);
if (v___x_3595_ == 0)
{
lean_object* v___x_3597_; uint8_t v_isShared_3598_; uint8_t v_isSharedCheck_3605_; 
v_isSharedCheck_3605_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3605_ == 0)
{
lean_object* v_unused_3606_; lean_object* v_unused_3607_; 
v_unused_3606_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3606_);
v_unused_3607_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3607_);
v___x_3597_ = v_code_3460_;
v_isShared_3598_ = v_isSharedCheck_3605_;
goto v_resetjp_3596_;
}
else
{
lean_dec(v_code_3460_);
v___x_3597_ = lean_box(0);
v_isShared_3598_ = v_isSharedCheck_3605_;
goto v_resetjp_3596_;
}
v_resetjp_3596_:
{
lean_object* v___x_3600_; 
if (v_isShared_3598_ == 0)
{
lean_ctor_set(v___x_3597_, 1, v_a_3574_);
lean_ctor_set(v___x_3597_, 0, v_a_3572_);
v___x_3600_ = v___x_3597_;
goto v_reusejp_3599_;
}
else
{
lean_object* v_reuseFailAlloc_3604_; 
v_reuseFailAlloc_3604_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3604_, 0, v_a_3572_);
lean_ctor_set(v_reuseFailAlloc_3604_, 1, v_a_3574_);
v___x_3600_ = v_reuseFailAlloc_3604_;
goto v_reusejp_3599_;
}
v_reusejp_3599_:
{
lean_object* v___x_3602_; 
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v___x_3600_);
v___x_3602_ = v___x_3576_;
goto v_reusejp_3601_;
}
else
{
lean_object* v_reuseFailAlloc_3603_; 
v_reuseFailAlloc_3603_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3603_, 0, v___x_3600_);
v___x_3602_ = v_reuseFailAlloc_3603_;
goto v_reusejp_3601_;
}
v_reusejp_3601_:
{
return v___x_3602_;
}
}
}
}
else
{
lean_object* v___x_3609_; 
lean_dec(v_a_3574_);
lean_dec(v_a_3572_);
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v_code_3460_);
v___x_3609_ = v___x_3576_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v_code_3460_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
}
}
else
{
lean_dec(v_a_3572_);
lean_dec_ref_known(v_code_3460_, 2);
return v___x_3573_;
}
}
else
{
lean_object* v_a_3612_; lean_object* v___x_3614_; uint8_t v_isShared_3615_; uint8_t v_isSharedCheck_3619_; 
lean_dec_ref_known(v_code_3460_, 2);
v_a_3612_ = lean_ctor_get(v___x_3571_, 0);
v_isSharedCheck_3619_ = !lean_is_exclusive(v___x_3571_);
if (v_isSharedCheck_3619_ == 0)
{
v___x_3614_ = v___x_3571_;
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
else
{
lean_inc(v_a_3612_);
lean_dec(v___x_3571_);
v___x_3614_ = lean_box(0);
v_isShared_3615_ = v_isSharedCheck_3619_;
goto v_resetjp_3613_;
}
v_resetjp_3613_:
{
lean_object* v___x_3617_; 
if (v_isShared_3615_ == 0)
{
v___x_3617_ = v___x_3614_;
goto v_reusejp_3616_;
}
else
{
lean_object* v_reuseFailAlloc_3618_; 
v_reuseFailAlloc_3618_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3618_, 0, v_a_3612_);
v___x_3617_ = v_reuseFailAlloc_3618_;
goto v_reusejp_3616_;
}
v_reusejp_3616_:
{
return v___x_3617_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_3620_; lean_object* v_args_3621_; lean_object* v___x_3622_; 
v_fvarId_3620_ = lean_ctor_get(v_code_3460_, 0);
v_args_3621_ = lean_ctor_get(v_code_3460_, 1);
lean_inc(v_fvarId_3620_);
v___x_3622_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_3620_, v_t_3459_);
if (lean_obj_tag(v___x_3622_) == 0)
{
lean_object* v_fvarId_3623_; lean_object* v___x_3624_; 
v_fvarId_3623_ = lean_ctor_get(v___x_3622_, 0);
lean_inc(v_fvarId_3623_);
lean_dec_ref_known(v___x_3622_, 1);
lean_inc_ref(v_args_3621_);
v___x_3624_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(v_pu_3458_, v_t_3459_, v_args_3621_, v___y_3461_);
if (lean_obj_tag(v___x_3624_) == 0)
{
lean_object* v_a_3625_; lean_object* v___x_3627_; uint8_t v_isShared_3628_; uint8_t v_isSharedCheck_3650_; 
v_a_3625_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3650_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3650_ == 0)
{
v___x_3627_ = v___x_3624_;
v_isShared_3628_ = v_isSharedCheck_3650_;
goto v_resetjp_3626_;
}
else
{
lean_inc(v_a_3625_);
lean_dec(v___x_3624_);
v___x_3627_ = lean_box(0);
v_isShared_3628_ = v_isSharedCheck_3650_;
goto v_resetjp_3626_;
}
v_resetjp_3626_:
{
uint8_t v___y_3630_; uint8_t v___x_3646_; 
v___x_3646_ = l_Lean_instBEqFVarId_beq(v_fvarId_3620_, v_fvarId_3623_);
if (v___x_3646_ == 0)
{
v___y_3630_ = v___x_3646_;
goto v___jp_3629_;
}
else
{
size_t v___x_3647_; size_t v___x_3648_; uint8_t v___x_3649_; 
v___x_3647_ = lean_ptr_addr(v_args_3621_);
v___x_3648_ = lean_ptr_addr(v_a_3625_);
v___x_3649_ = lean_usize_dec_eq(v___x_3647_, v___x_3648_);
v___y_3630_ = v___x_3649_;
goto v___jp_3629_;
}
v___jp_3629_:
{
if (v___y_3630_ == 0)
{
lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3640_; 
v_isSharedCheck_3640_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3640_ == 0)
{
lean_object* v_unused_3641_; lean_object* v_unused_3642_; 
v_unused_3641_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3641_);
v_unused_3642_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3642_);
v___x_3632_ = v_code_3460_;
v_isShared_3633_ = v_isSharedCheck_3640_;
goto v_resetjp_3631_;
}
else
{
lean_dec(v_code_3460_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3640_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v___x_3635_; 
if (v_isShared_3633_ == 0)
{
lean_ctor_set(v___x_3632_, 1, v_a_3625_);
lean_ctor_set(v___x_3632_, 0, v_fvarId_3623_);
v___x_3635_ = v___x_3632_;
goto v_reusejp_3634_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_fvarId_3623_);
lean_ctor_set(v_reuseFailAlloc_3639_, 1, v_a_3625_);
v___x_3635_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3634_;
}
v_reusejp_3634_:
{
lean_object* v___x_3637_; 
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 0, v___x_3635_);
v___x_3637_ = v___x_3627_;
goto v_reusejp_3636_;
}
else
{
lean_object* v_reuseFailAlloc_3638_; 
v_reuseFailAlloc_3638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3638_, 0, v___x_3635_);
v___x_3637_ = v_reuseFailAlloc_3638_;
goto v_reusejp_3636_;
}
v_reusejp_3636_:
{
return v___x_3637_;
}
}
}
}
else
{
lean_object* v___x_3644_; 
lean_dec(v_a_3625_);
lean_dec(v_fvarId_3623_);
if (v_isShared_3628_ == 0)
{
lean_ctor_set(v___x_3627_, 0, v_code_3460_);
v___x_3644_ = v___x_3627_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3645_; 
v_reuseFailAlloc_3645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3645_, 0, v_code_3460_);
v___x_3644_ = v_reuseFailAlloc_3645_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
return v___x_3644_;
}
}
}
}
}
else
{
lean_object* v_a_3651_; lean_object* v___x_3653_; uint8_t v_isShared_3654_; uint8_t v_isSharedCheck_3658_; 
lean_dec(v_fvarId_3623_);
lean_dec_ref_known(v_code_3460_, 2);
v_a_3651_ = lean_ctor_get(v___x_3624_, 0);
v_isSharedCheck_3658_ = !lean_is_exclusive(v___x_3624_);
if (v_isSharedCheck_3658_ == 0)
{
v___x_3653_ = v___x_3624_;
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
else
{
lean_inc(v_a_3651_);
lean_dec(v___x_3624_);
v___x_3653_ = lean_box(0);
v_isShared_3654_ = v_isSharedCheck_3658_;
goto v_resetjp_3652_;
}
v_resetjp_3652_:
{
lean_object* v___x_3656_; 
if (v_isShared_3654_ == 0)
{
v___x_3656_ = v___x_3653_;
goto v_reusejp_3655_;
}
else
{
lean_object* v_reuseFailAlloc_3657_; 
v_reuseFailAlloc_3657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3657_, 0, v_a_3651_);
v___x_3656_ = v_reuseFailAlloc_3657_;
goto v_reusejp_3655_;
}
v_reusejp_3655_:
{
return v___x_3656_;
}
}
}
}
else
{
lean_object* v___x_3659_; 
lean_dec_ref_known(v_code_3460_, 2);
v___x_3659_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_3659_;
}
}
case 4:
{
lean_object* v_cases_3660_; lean_object* v_typeName_3661_; lean_object* v_resultType_3662_; lean_object* v_discr_3663_; lean_object* v_alts_3664_; lean_object* v___x_3666_; uint8_t v_isShared_3667_; uint8_t v_isSharedCheck_3709_; 
v_cases_3660_ = lean_ctor_get(v_code_3460_, 0);
lean_inc_ref(v_cases_3660_);
v_typeName_3661_ = lean_ctor_get(v_cases_3660_, 0);
v_resultType_3662_ = lean_ctor_get(v_cases_3660_, 1);
v_discr_3663_ = lean_ctor_get(v_cases_3660_, 2);
v_alts_3664_ = lean_ctor_get(v_cases_3660_, 3);
v_isSharedCheck_3709_ = !lean_is_exclusive(v_cases_3660_);
if (v_isSharedCheck_3709_ == 0)
{
v___x_3666_ = v_cases_3660_;
v_isShared_3667_ = v_isSharedCheck_3709_;
goto v_resetjp_3665_;
}
else
{
lean_inc(v_alts_3664_);
lean_inc(v_discr_3663_);
lean_inc(v_resultType_3662_);
lean_inc(v_typeName_3661_);
lean_dec(v_cases_3660_);
v___x_3666_ = lean_box(0);
v_isShared_3667_ = v_isSharedCheck_3709_;
goto v_resetjp_3665_;
}
v_resetjp_3665_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; 
lean_inc_ref(v_resultType_3662_);
v___x_3668_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3458_, v___y_3461_, v_t_3459_, v_resultType_3662_);
lean_inc(v_discr_3663_);
v___x_3669_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_discr_3663_, v_t_3459_);
if (lean_obj_tag(v___x_3669_) == 0)
{
lean_object* v_fvarId_3670_; lean_object* v___x_3672_; uint8_t v_isShared_3673_; uint8_t v_isSharedCheck_3707_; 
v_fvarId_3670_ = lean_ctor_get(v___x_3669_, 0);
v_isSharedCheck_3707_ = !lean_is_exclusive(v___x_3669_);
if (v_isSharedCheck_3707_ == 0)
{
v___x_3672_ = v___x_3669_;
v_isShared_3673_ = v_isSharedCheck_3707_;
goto v_resetjp_3671_;
}
else
{
lean_inc(v_fvarId_3670_);
lean_dec(v___x_3669_);
v___x_3672_ = lean_box(0);
v_isShared_3673_ = v_isSharedCheck_3707_;
goto v_resetjp_3671_;
}
v_resetjp_3671_:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; 
v___x_3674_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_3664_);
v___x_3675_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(v_pu_3458_, v_t_3459_, v___x_3674_, v_alts_3664_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3675_) == 0)
{
lean_object* v_a_3676_; lean_object* v___x_3678_; uint8_t v_isShared_3679_; uint8_t v_isSharedCheck_3698_; 
v_a_3676_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3698_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3698_ == 0)
{
v___x_3678_ = v___x_3675_;
v_isShared_3679_ = v_isSharedCheck_3698_;
goto v_resetjp_3677_;
}
else
{
lean_inc(v_a_3676_);
lean_dec(v___x_3675_);
v___x_3678_ = lean_box(0);
v_isShared_3679_ = v_isSharedCheck_3698_;
goto v_resetjp_3677_;
}
v_resetjp_3677_:
{
size_t v___x_3690_; size_t v___x_3691_; uint8_t v___x_3692_; 
v___x_3690_ = lean_ptr_addr(v_alts_3664_);
lean_dec_ref(v_alts_3664_);
v___x_3691_ = lean_ptr_addr(v_a_3676_);
v___x_3692_ = lean_usize_dec_eq(v___x_3690_, v___x_3691_);
if (v___x_3692_ == 0)
{
lean_dec(v_discr_3663_);
lean_dec_ref(v_resultType_3662_);
lean_dec_ref_known(v_code_3460_, 1);
goto v___jp_3680_;
}
else
{
size_t v___x_3693_; size_t v___x_3694_; uint8_t v___x_3695_; 
v___x_3693_ = lean_ptr_addr(v_resultType_3662_);
lean_dec_ref(v_resultType_3662_);
v___x_3694_ = lean_ptr_addr(v___x_3668_);
v___x_3695_ = lean_usize_dec_eq(v___x_3693_, v___x_3694_);
if (v___x_3695_ == 0)
{
lean_dec(v_discr_3663_);
lean_dec_ref_known(v_code_3460_, 1);
goto v___jp_3680_;
}
else
{
uint8_t v___x_3696_; 
v___x_3696_ = l_Lean_instBEqFVarId_beq(v_discr_3663_, v_fvarId_3670_);
lean_dec(v_discr_3663_);
if (v___x_3696_ == 0)
{
lean_dec_ref_known(v_code_3460_, 1);
goto v___jp_3680_;
}
else
{
lean_object* v___x_3697_; 
lean_del_object(v___x_3678_);
lean_dec(v_a_3676_);
lean_del_object(v___x_3672_);
lean_dec(v_fvarId_3670_);
lean_dec_ref(v___x_3668_);
lean_del_object(v___x_3666_);
lean_dec(v_typeName_3661_);
v___x_3697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3697_, 0, v_code_3460_);
return v___x_3697_;
}
}
}
v___jp_3680_:
{
lean_object* v___x_3682_; 
if (v_isShared_3667_ == 0)
{
lean_ctor_set(v___x_3666_, 3, v_a_3676_);
lean_ctor_set(v___x_3666_, 2, v_fvarId_3670_);
lean_ctor_set(v___x_3666_, 1, v___x_3668_);
v___x_3682_ = v___x_3666_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3689_; 
v_reuseFailAlloc_3689_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3689_, 0, v_typeName_3661_);
lean_ctor_set(v_reuseFailAlloc_3689_, 1, v___x_3668_);
lean_ctor_set(v_reuseFailAlloc_3689_, 2, v_fvarId_3670_);
lean_ctor_set(v_reuseFailAlloc_3689_, 3, v_a_3676_);
v___x_3682_ = v_reuseFailAlloc_3689_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
lean_object* v___x_3684_; 
if (v_isShared_3673_ == 0)
{
lean_ctor_set_tag(v___x_3672_, 4);
lean_ctor_set(v___x_3672_, 0, v___x_3682_);
v___x_3684_ = v___x_3672_;
goto v_reusejp_3683_;
}
else
{
lean_object* v_reuseFailAlloc_3688_; 
v_reuseFailAlloc_3688_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3688_, 0, v___x_3682_);
v___x_3684_ = v_reuseFailAlloc_3688_;
goto v_reusejp_3683_;
}
v_reusejp_3683_:
{
lean_object* v___x_3686_; 
if (v_isShared_3679_ == 0)
{
lean_ctor_set(v___x_3678_, 0, v___x_3684_);
v___x_3686_ = v___x_3678_;
goto v_reusejp_3685_;
}
else
{
lean_object* v_reuseFailAlloc_3687_; 
v_reuseFailAlloc_3687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3687_, 0, v___x_3684_);
v___x_3686_ = v_reuseFailAlloc_3687_;
goto v_reusejp_3685_;
}
v_reusejp_3685_:
{
return v___x_3686_;
}
}
}
}
}
}
else
{
lean_object* v_a_3699_; lean_object* v___x_3701_; uint8_t v_isShared_3702_; uint8_t v_isSharedCheck_3706_; 
lean_del_object(v___x_3672_);
lean_dec(v_fvarId_3670_);
lean_dec_ref(v___x_3668_);
lean_del_object(v___x_3666_);
lean_dec_ref(v_alts_3664_);
lean_dec(v_discr_3663_);
lean_dec_ref(v_resultType_3662_);
lean_dec(v_typeName_3661_);
lean_dec_ref_known(v_code_3460_, 1);
v_a_3699_ = lean_ctor_get(v___x_3675_, 0);
v_isSharedCheck_3706_ = !lean_is_exclusive(v___x_3675_);
if (v_isSharedCheck_3706_ == 0)
{
v___x_3701_ = v___x_3675_;
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
else
{
lean_inc(v_a_3699_);
lean_dec(v___x_3675_);
v___x_3701_ = lean_box(0);
v_isShared_3702_ = v_isSharedCheck_3706_;
goto v_resetjp_3700_;
}
v_resetjp_3700_:
{
lean_object* v___x_3704_; 
if (v_isShared_3702_ == 0)
{
v___x_3704_ = v___x_3701_;
goto v_reusejp_3703_;
}
else
{
lean_object* v_reuseFailAlloc_3705_; 
v_reuseFailAlloc_3705_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3705_, 0, v_a_3699_);
v___x_3704_ = v_reuseFailAlloc_3705_;
goto v_reusejp_3703_;
}
v_reusejp_3703_:
{
return v___x_3704_;
}
}
}
}
}
else
{
lean_object* v___x_3708_; 
lean_dec_ref(v___x_3668_);
lean_del_object(v___x_3666_);
lean_dec_ref(v_alts_3664_);
lean_dec(v_discr_3663_);
lean_dec_ref(v_resultType_3662_);
lean_dec(v_typeName_3661_);
lean_dec_ref_known(v_code_3460_, 1);
v___x_3708_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_3708_;
}
}
}
case 5:
{
lean_object* v_fvarId_3710_; lean_object* v___x_3711_; 
v_fvarId_3710_ = lean_ctor_get(v_code_3460_, 0);
lean_inc(v_fvarId_3710_);
v___x_3711_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_3710_, v_t_3459_);
if (lean_obj_tag(v___x_3711_) == 0)
{
lean_object* v_fvarId_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3731_; 
v_fvarId_3712_ = lean_ctor_get(v___x_3711_, 0);
v_isSharedCheck_3731_ = !lean_is_exclusive(v___x_3711_);
if (v_isSharedCheck_3731_ == 0)
{
v___x_3714_ = v___x_3711_;
v_isShared_3715_ = v_isSharedCheck_3731_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_fvarId_3712_);
lean_dec(v___x_3711_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3731_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
uint8_t v___x_3716_; 
v___x_3716_ = l_Lean_instBEqFVarId_beq(v_fvarId_3710_, v_fvarId_3712_);
if (v___x_3716_ == 0)
{
lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3726_; 
v_isSharedCheck_3726_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3726_ == 0)
{
lean_object* v_unused_3727_; 
v_unused_3727_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3727_);
v___x_3718_ = v_code_3460_;
v_isShared_3719_ = v_isSharedCheck_3726_;
goto v_resetjp_3717_;
}
else
{
lean_dec(v_code_3460_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3726_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v___x_3721_; 
if (v_isShared_3719_ == 0)
{
lean_ctor_set(v___x_3718_, 0, v_fvarId_3712_);
v___x_3721_ = v___x_3718_;
goto v_reusejp_3720_;
}
else
{
lean_object* v_reuseFailAlloc_3725_; 
v_reuseFailAlloc_3725_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3725_, 0, v_fvarId_3712_);
v___x_3721_ = v_reuseFailAlloc_3725_;
goto v_reusejp_3720_;
}
v_reusejp_3720_:
{
lean_object* v___x_3723_; 
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 0, v___x_3721_);
v___x_3723_ = v___x_3714_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
}
else
{
lean_object* v___x_3729_; 
lean_dec(v_fvarId_3712_);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 0, v_code_3460_);
v___x_3729_ = v___x_3714_;
goto v_reusejp_3728_;
}
else
{
lean_object* v_reuseFailAlloc_3730_; 
v_reuseFailAlloc_3730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3730_, 0, v_code_3460_);
v___x_3729_ = v_reuseFailAlloc_3730_;
goto v_reusejp_3728_;
}
v_reusejp_3728_:
{
return v___x_3729_;
}
}
}
}
else
{
lean_object* v___x_3732_; 
lean_dec_ref_known(v_code_3460_, 1);
v___x_3732_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_3732_;
}
}
case 6:
{
lean_object* v_type_3733_; lean_object* v___x_3734_; size_t v___x_3735_; size_t v___x_3736_; uint8_t v___x_3737_; 
v_type_3733_ = lean_ctor_get(v_code_3460_, 0);
lean_inc_ref(v_type_3733_);
v___x_3734_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3458_, v___y_3461_, v_t_3459_, v_type_3733_);
v___x_3735_ = lean_ptr_addr(v_type_3733_);
v___x_3736_ = lean_ptr_addr(v___x_3734_);
v___x_3737_ = lean_usize_dec_eq(v___x_3735_, v___x_3736_);
if (v___x_3737_ == 0)
{
lean_object* v___x_3739_; uint8_t v_isShared_3740_; uint8_t v_isSharedCheck_3745_; 
v_isSharedCheck_3745_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3745_ == 0)
{
lean_object* v_unused_3746_; 
v_unused_3746_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3746_);
v___x_3739_ = v_code_3460_;
v_isShared_3740_ = v_isSharedCheck_3745_;
goto v_resetjp_3738_;
}
else
{
lean_dec(v_code_3460_);
v___x_3739_ = lean_box(0);
v_isShared_3740_ = v_isSharedCheck_3745_;
goto v_resetjp_3738_;
}
v_resetjp_3738_:
{
lean_object* v___x_3742_; 
if (v_isShared_3740_ == 0)
{
lean_ctor_set(v___x_3739_, 0, v___x_3734_);
v___x_3742_ = v___x_3739_;
goto v_reusejp_3741_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(6, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v___x_3734_);
v___x_3742_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3741_;
}
v_reusejp_3741_:
{
lean_object* v___x_3743_; 
v___x_3743_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3742_);
return v___x_3743_;
}
}
}
else
{
lean_object* v___x_3747_; 
lean_dec_ref(v___x_3734_);
v___x_3747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3747_, 0, v_code_3460_);
return v___x_3747_;
}
}
case 7:
{
lean_object* v_fvarId_3748_; lean_object* v_i_3749_; lean_object* v_y_3750_; lean_object* v_k_3751_; lean_object* v___x_3752_; 
v_fvarId_3748_ = lean_ctor_get(v_code_3460_, 0);
v_i_3749_ = lean_ctor_get(v_code_3460_, 1);
v_y_3750_ = lean_ctor_get(v_code_3460_, 2);
v_k_3751_ = lean_ctor_get(v_code_3460_, 3);
lean_inc(v_fvarId_3748_);
v___x_3752_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_3748_, v_t_3459_);
if (lean_obj_tag(v___x_3752_) == 0)
{
lean_object* v_fvarId_3753_; lean_object* v___x_3754_; lean_object* v___x_3755_; 
v_fvarId_3753_ = lean_ctor_get(v___x_3752_, 0);
lean_inc(v_fvarId_3753_);
lean_dec_ref_known(v___x_3752_, 1);
lean_inc(v_y_3750_);
v___x_3754_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normArgImp(v_pu_3458_, v___y_3461_, v_y_3750_, v_t_3459_);
lean_inc_ref(v_k_3751_);
v___x_3755_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_3751_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3755_) == 0)
{
lean_object* v_a_3756_; lean_object* v___x_3758_; uint8_t v_isShared_3759_; uint8_t v_isSharedCheck_3829_; 
v_a_3756_ = lean_ctor_get(v___x_3755_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3755_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3758_ = v___x_3755_;
v_isShared_3759_ = v_isSharedCheck_3829_;
goto v_resetjp_3757_;
}
else
{
lean_inc(v_a_3756_);
lean_dec(v___x_3755_);
v___x_3758_ = lean_box(0);
v_isShared_3759_ = v_isSharedCheck_3829_;
goto v_resetjp_3757_;
}
v_resetjp_3757_:
{
size_t v___x_3760_; size_t v___x_3761_; uint8_t v___x_3762_; 
v___x_3760_ = lean_ptr_addr(v_fvarId_3748_);
v___x_3761_ = lean_ptr_addr(v_fvarId_3753_);
v___x_3762_ = lean_usize_dec_eq(v___x_3760_, v___x_3761_);
if (v___x_3762_ == 0)
{
lean_object* v___x_3764_; uint8_t v_isShared_3765_; uint8_t v_isSharedCheck_3772_; 
lean_inc(v_i_3749_);
v_isSharedCheck_3772_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3772_ == 0)
{
lean_object* v_unused_3773_; lean_object* v_unused_3774_; lean_object* v_unused_3775_; lean_object* v_unused_3776_; 
v_unused_3773_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3773_);
v_unused_3774_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3774_);
v_unused_3775_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3775_);
v_unused_3776_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3776_);
v___x_3764_ = v_code_3460_;
v_isShared_3765_ = v_isSharedCheck_3772_;
goto v_resetjp_3763_;
}
else
{
lean_dec(v_code_3460_);
v___x_3764_ = lean_box(0);
v_isShared_3765_ = v_isSharedCheck_3772_;
goto v_resetjp_3763_;
}
v_resetjp_3763_:
{
lean_object* v___x_3767_; 
if (v_isShared_3765_ == 0)
{
lean_ctor_set(v___x_3764_, 3, v_a_3756_);
lean_ctor_set(v___x_3764_, 2, v___x_3754_);
lean_ctor_set(v___x_3764_, 0, v_fvarId_3753_);
v___x_3767_ = v___x_3764_;
goto v_reusejp_3766_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_fvarId_3753_);
lean_ctor_set(v_reuseFailAlloc_3771_, 1, v_i_3749_);
lean_ctor_set(v_reuseFailAlloc_3771_, 2, v___x_3754_);
lean_ctor_set(v_reuseFailAlloc_3771_, 3, v_a_3756_);
v___x_3767_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3766_;
}
v_reusejp_3766_:
{
lean_object* v___x_3769_; 
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 0, v___x_3767_);
v___x_3769_ = v___x_3758_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3767_);
v___x_3769_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
return v___x_3769_;
}
}
}
}
else
{
uint8_t v___x_3777_; 
v___x_3777_ = lean_nat_dec_eq(v_i_3749_, v_i_3749_);
if (v___x_3777_ == 0)
{
lean_object* v___x_3779_; uint8_t v_isShared_3780_; uint8_t v_isSharedCheck_3787_; 
lean_inc(v_i_3749_);
v_isSharedCheck_3787_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3787_ == 0)
{
lean_object* v_unused_3788_; lean_object* v_unused_3789_; lean_object* v_unused_3790_; lean_object* v_unused_3791_; 
v_unused_3788_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3788_);
v_unused_3789_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3789_);
v_unused_3790_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3790_);
v_unused_3791_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3791_);
v___x_3779_ = v_code_3460_;
v_isShared_3780_ = v_isSharedCheck_3787_;
goto v_resetjp_3778_;
}
else
{
lean_dec(v_code_3460_);
v___x_3779_ = lean_box(0);
v_isShared_3780_ = v_isSharedCheck_3787_;
goto v_resetjp_3778_;
}
v_resetjp_3778_:
{
lean_object* v___x_3782_; 
if (v_isShared_3780_ == 0)
{
lean_ctor_set(v___x_3779_, 3, v_a_3756_);
lean_ctor_set(v___x_3779_, 2, v___x_3754_);
lean_ctor_set(v___x_3779_, 0, v_fvarId_3753_);
v___x_3782_ = v___x_3779_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3786_; 
v_reuseFailAlloc_3786_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3786_, 0, v_fvarId_3753_);
lean_ctor_set(v_reuseFailAlloc_3786_, 1, v_i_3749_);
lean_ctor_set(v_reuseFailAlloc_3786_, 2, v___x_3754_);
lean_ctor_set(v_reuseFailAlloc_3786_, 3, v_a_3756_);
v___x_3782_ = v_reuseFailAlloc_3786_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
lean_object* v___x_3784_; 
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 0, v___x_3782_);
v___x_3784_ = v___x_3758_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v___x_3782_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
}
}
else
{
size_t v___x_3792_; size_t v___x_3793_; uint8_t v___x_3794_; 
v___x_3792_ = lean_ptr_addr(v_y_3750_);
v___x_3793_ = lean_ptr_addr(v___x_3754_);
v___x_3794_ = lean_usize_dec_eq(v___x_3792_, v___x_3793_);
if (v___x_3794_ == 0)
{
lean_object* v___x_3796_; uint8_t v_isShared_3797_; uint8_t v_isSharedCheck_3804_; 
lean_inc(v_i_3749_);
v_isSharedCheck_3804_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3804_ == 0)
{
lean_object* v_unused_3805_; lean_object* v_unused_3806_; lean_object* v_unused_3807_; lean_object* v_unused_3808_; 
v_unused_3805_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3805_);
v_unused_3806_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3806_);
v_unused_3807_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3807_);
v_unused_3808_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3808_);
v___x_3796_ = v_code_3460_;
v_isShared_3797_ = v_isSharedCheck_3804_;
goto v_resetjp_3795_;
}
else
{
lean_dec(v_code_3460_);
v___x_3796_ = lean_box(0);
v_isShared_3797_ = v_isSharedCheck_3804_;
goto v_resetjp_3795_;
}
v_resetjp_3795_:
{
lean_object* v___x_3799_; 
if (v_isShared_3797_ == 0)
{
lean_ctor_set(v___x_3796_, 3, v_a_3756_);
lean_ctor_set(v___x_3796_, 2, v___x_3754_);
lean_ctor_set(v___x_3796_, 0, v_fvarId_3753_);
v___x_3799_ = v___x_3796_;
goto v_reusejp_3798_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_fvarId_3753_);
lean_ctor_set(v_reuseFailAlloc_3803_, 1, v_i_3749_);
lean_ctor_set(v_reuseFailAlloc_3803_, 2, v___x_3754_);
lean_ctor_set(v_reuseFailAlloc_3803_, 3, v_a_3756_);
v___x_3799_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3798_;
}
v_reusejp_3798_:
{
lean_object* v___x_3801_; 
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 0, v___x_3799_);
v___x_3801_ = v___x_3758_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3802_; 
v_reuseFailAlloc_3802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3802_, 0, v___x_3799_);
v___x_3801_ = v_reuseFailAlloc_3802_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
return v___x_3801_;
}
}
}
}
else
{
size_t v___x_3809_; size_t v___x_3810_; uint8_t v___x_3811_; 
v___x_3809_ = lean_ptr_addr(v_k_3751_);
v___x_3810_ = lean_ptr_addr(v_a_3756_);
v___x_3811_ = lean_usize_dec_eq(v___x_3809_, v___x_3810_);
if (v___x_3811_ == 0)
{
lean_object* v___x_3813_; uint8_t v_isShared_3814_; uint8_t v_isSharedCheck_3821_; 
lean_inc(v_i_3749_);
v_isSharedCheck_3821_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3821_ == 0)
{
lean_object* v_unused_3822_; lean_object* v_unused_3823_; lean_object* v_unused_3824_; lean_object* v_unused_3825_; 
v_unused_3822_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3822_);
v_unused_3823_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3823_);
v_unused_3824_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3824_);
v_unused_3825_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3825_);
v___x_3813_ = v_code_3460_;
v_isShared_3814_ = v_isSharedCheck_3821_;
goto v_resetjp_3812_;
}
else
{
lean_dec(v_code_3460_);
v___x_3813_ = lean_box(0);
v_isShared_3814_ = v_isSharedCheck_3821_;
goto v_resetjp_3812_;
}
v_resetjp_3812_:
{
lean_object* v___x_3816_; 
if (v_isShared_3814_ == 0)
{
lean_ctor_set(v___x_3813_, 3, v_a_3756_);
lean_ctor_set(v___x_3813_, 2, v___x_3754_);
lean_ctor_set(v___x_3813_, 0, v_fvarId_3753_);
v___x_3816_ = v___x_3813_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_fvarId_3753_);
lean_ctor_set(v_reuseFailAlloc_3820_, 1, v_i_3749_);
lean_ctor_set(v_reuseFailAlloc_3820_, 2, v___x_3754_);
lean_ctor_set(v_reuseFailAlloc_3820_, 3, v_a_3756_);
v___x_3816_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
lean_object* v___x_3818_; 
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 0, v___x_3816_);
v___x_3818_ = v___x_3758_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3819_; 
v_reuseFailAlloc_3819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3819_, 0, v___x_3816_);
v___x_3818_ = v_reuseFailAlloc_3819_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
return v___x_3818_;
}
}
}
}
else
{
lean_object* v___x_3827_; 
lean_dec(v_a_3756_);
lean_dec(v___x_3754_);
lean_dec(v_fvarId_3753_);
if (v_isShared_3759_ == 0)
{
lean_ctor_set(v___x_3758_, 0, v_code_3460_);
v___x_3827_ = v___x_3758_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_code_3460_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
}
}
}
else
{
lean_dec(v___x_3754_);
lean_dec(v_fvarId_3753_);
lean_dec_ref_known(v_code_3460_, 4);
return v___x_3755_;
}
}
else
{
lean_object* v___x_3830_; 
lean_dec_ref_known(v_code_3460_, 4);
v___x_3830_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_3830_;
}
}
case 8:
{
lean_object* v_fvarId_3831_; lean_object* v_i_3832_; lean_object* v_y_3833_; lean_object* v_k_3834_; lean_object* v___x_3835_; 
v_fvarId_3831_ = lean_ctor_get(v_code_3460_, 0);
v_i_3832_ = lean_ctor_get(v_code_3460_, 1);
v_y_3833_ = lean_ctor_get(v_code_3460_, 2);
v_k_3834_ = lean_ctor_get(v_code_3460_, 3);
lean_inc(v_fvarId_3831_);
v___x_3835_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_3831_, v_t_3459_);
if (lean_obj_tag(v___x_3835_) == 0)
{
lean_object* v_fvarId_3836_; lean_object* v___x_3837_; 
v_fvarId_3836_ = lean_ctor_get(v___x_3835_, 0);
lean_inc(v_fvarId_3836_);
lean_dec_ref_known(v___x_3835_, 1);
lean_inc(v_y_3833_);
v___x_3837_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_y_3833_, v_t_3459_);
if (lean_obj_tag(v___x_3837_) == 0)
{
lean_object* v_fvarId_3838_; lean_object* v___x_3839_; 
v_fvarId_3838_ = lean_ctor_get(v___x_3837_, 0);
lean_inc(v_fvarId_3838_);
lean_dec_ref_known(v___x_3837_, 1);
lean_inc_ref(v_k_3834_);
v___x_3839_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_3834_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3839_) == 0)
{
lean_object* v_a_3840_; lean_object* v___x_3842_; uint8_t v_isShared_3843_; uint8_t v_isSharedCheck_3913_; 
v_a_3840_ = lean_ctor_get(v___x_3839_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3839_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3842_ = v___x_3839_;
v_isShared_3843_ = v_isSharedCheck_3913_;
goto v_resetjp_3841_;
}
else
{
lean_inc(v_a_3840_);
lean_dec(v___x_3839_);
v___x_3842_ = lean_box(0);
v_isShared_3843_ = v_isSharedCheck_3913_;
goto v_resetjp_3841_;
}
v_resetjp_3841_:
{
size_t v___x_3844_; size_t v___x_3845_; uint8_t v___x_3846_; 
v___x_3844_ = lean_ptr_addr(v_fvarId_3831_);
v___x_3845_ = lean_ptr_addr(v_fvarId_3836_);
v___x_3846_ = lean_usize_dec_eq(v___x_3844_, v___x_3845_);
if (v___x_3846_ == 0)
{
lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3856_; 
lean_inc(v_i_3832_);
v_isSharedCheck_3856_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3856_ == 0)
{
lean_object* v_unused_3857_; lean_object* v_unused_3858_; lean_object* v_unused_3859_; lean_object* v_unused_3860_; 
v_unused_3857_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3857_);
v_unused_3858_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3858_);
v_unused_3859_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3859_);
v_unused_3860_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3860_);
v___x_3848_ = v_code_3460_;
v_isShared_3849_ = v_isSharedCheck_3856_;
goto v_resetjp_3847_;
}
else
{
lean_dec(v_code_3460_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3856_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v___x_3851_; 
if (v_isShared_3849_ == 0)
{
lean_ctor_set(v___x_3848_, 3, v_a_3840_);
lean_ctor_set(v___x_3848_, 2, v_fvarId_3838_);
lean_ctor_set(v___x_3848_, 0, v_fvarId_3836_);
v___x_3851_ = v___x_3848_;
goto v_reusejp_3850_;
}
else
{
lean_object* v_reuseFailAlloc_3855_; 
v_reuseFailAlloc_3855_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3855_, 0, v_fvarId_3836_);
lean_ctor_set(v_reuseFailAlloc_3855_, 1, v_i_3832_);
lean_ctor_set(v_reuseFailAlloc_3855_, 2, v_fvarId_3838_);
lean_ctor_set(v_reuseFailAlloc_3855_, 3, v_a_3840_);
v___x_3851_ = v_reuseFailAlloc_3855_;
goto v_reusejp_3850_;
}
v_reusejp_3850_:
{
lean_object* v___x_3853_; 
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 0, v___x_3851_);
v___x_3853_ = v___x_3842_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v___x_3851_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
else
{
uint8_t v___x_3861_; 
v___x_3861_ = lean_nat_dec_eq(v_i_3832_, v_i_3832_);
if (v___x_3861_ == 0)
{
lean_object* v___x_3863_; uint8_t v_isShared_3864_; uint8_t v_isSharedCheck_3871_; 
lean_inc(v_i_3832_);
v_isSharedCheck_3871_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3871_ == 0)
{
lean_object* v_unused_3872_; lean_object* v_unused_3873_; lean_object* v_unused_3874_; lean_object* v_unused_3875_; 
v_unused_3872_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3872_);
v_unused_3873_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3873_);
v_unused_3874_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3874_);
v_unused_3875_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3875_);
v___x_3863_ = v_code_3460_;
v_isShared_3864_ = v_isSharedCheck_3871_;
goto v_resetjp_3862_;
}
else
{
lean_dec(v_code_3460_);
v___x_3863_ = lean_box(0);
v_isShared_3864_ = v_isSharedCheck_3871_;
goto v_resetjp_3862_;
}
v_resetjp_3862_:
{
lean_object* v___x_3866_; 
if (v_isShared_3864_ == 0)
{
lean_ctor_set(v___x_3863_, 3, v_a_3840_);
lean_ctor_set(v___x_3863_, 2, v_fvarId_3838_);
lean_ctor_set(v___x_3863_, 0, v_fvarId_3836_);
v___x_3866_ = v___x_3863_;
goto v_reusejp_3865_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_fvarId_3836_);
lean_ctor_set(v_reuseFailAlloc_3870_, 1, v_i_3832_);
lean_ctor_set(v_reuseFailAlloc_3870_, 2, v_fvarId_3838_);
lean_ctor_set(v_reuseFailAlloc_3870_, 3, v_a_3840_);
v___x_3866_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3865_;
}
v_reusejp_3865_:
{
lean_object* v___x_3868_; 
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 0, v___x_3866_);
v___x_3868_ = v___x_3842_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v___x_3866_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
else
{
size_t v___x_3876_; size_t v___x_3877_; uint8_t v___x_3878_; 
v___x_3876_ = lean_ptr_addr(v_y_3833_);
v___x_3877_ = lean_ptr_addr(v_fvarId_3838_);
v___x_3878_ = lean_usize_dec_eq(v___x_3876_, v___x_3877_);
if (v___x_3878_ == 0)
{
lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3888_; 
lean_inc(v_i_3832_);
v_isSharedCheck_3888_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3888_ == 0)
{
lean_object* v_unused_3889_; lean_object* v_unused_3890_; lean_object* v_unused_3891_; lean_object* v_unused_3892_; 
v_unused_3889_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3889_);
v_unused_3890_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3890_);
v_unused_3891_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3891_);
v_unused_3892_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3892_);
v___x_3880_ = v_code_3460_;
v_isShared_3881_ = v_isSharedCheck_3888_;
goto v_resetjp_3879_;
}
else
{
lean_dec(v_code_3460_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3888_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
lean_object* v___x_3883_; 
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 3, v_a_3840_);
lean_ctor_set(v___x_3880_, 2, v_fvarId_3838_);
lean_ctor_set(v___x_3880_, 0, v_fvarId_3836_);
v___x_3883_ = v___x_3880_;
goto v_reusejp_3882_;
}
else
{
lean_object* v_reuseFailAlloc_3887_; 
v_reuseFailAlloc_3887_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3887_, 0, v_fvarId_3836_);
lean_ctor_set(v_reuseFailAlloc_3887_, 1, v_i_3832_);
lean_ctor_set(v_reuseFailAlloc_3887_, 2, v_fvarId_3838_);
lean_ctor_set(v_reuseFailAlloc_3887_, 3, v_a_3840_);
v___x_3883_ = v_reuseFailAlloc_3887_;
goto v_reusejp_3882_;
}
v_reusejp_3882_:
{
lean_object* v___x_3885_; 
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 0, v___x_3883_);
v___x_3885_ = v___x_3842_;
goto v_reusejp_3884_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v___x_3883_);
v___x_3885_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3884_;
}
v_reusejp_3884_:
{
return v___x_3885_;
}
}
}
}
else
{
size_t v___x_3893_; size_t v___x_3894_; uint8_t v___x_3895_; 
v___x_3893_ = lean_ptr_addr(v_k_3834_);
v___x_3894_ = lean_ptr_addr(v_a_3840_);
v___x_3895_ = lean_usize_dec_eq(v___x_3893_, v___x_3894_);
if (v___x_3895_ == 0)
{
lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3905_; 
lean_inc(v_i_3832_);
v_isSharedCheck_3905_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3905_ == 0)
{
lean_object* v_unused_3906_; lean_object* v_unused_3907_; lean_object* v_unused_3908_; lean_object* v_unused_3909_; 
v_unused_3906_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3906_);
v_unused_3907_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3907_);
v_unused_3908_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3908_);
v_unused_3909_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3909_);
v___x_3897_ = v_code_3460_;
v_isShared_3898_ = v_isSharedCheck_3905_;
goto v_resetjp_3896_;
}
else
{
lean_dec(v_code_3460_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3905_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3900_; 
if (v_isShared_3898_ == 0)
{
lean_ctor_set(v___x_3897_, 3, v_a_3840_);
lean_ctor_set(v___x_3897_, 2, v_fvarId_3838_);
lean_ctor_set(v___x_3897_, 0, v_fvarId_3836_);
v___x_3900_ = v___x_3897_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_fvarId_3836_);
lean_ctor_set(v_reuseFailAlloc_3904_, 1, v_i_3832_);
lean_ctor_set(v_reuseFailAlloc_3904_, 2, v_fvarId_3838_);
lean_ctor_set(v_reuseFailAlloc_3904_, 3, v_a_3840_);
v___x_3900_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
lean_object* v___x_3902_; 
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 0, v___x_3900_);
v___x_3902_ = v___x_3842_;
goto v_reusejp_3901_;
}
else
{
lean_object* v_reuseFailAlloc_3903_; 
v_reuseFailAlloc_3903_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3903_, 0, v___x_3900_);
v___x_3902_ = v_reuseFailAlloc_3903_;
goto v_reusejp_3901_;
}
v_reusejp_3901_:
{
return v___x_3902_;
}
}
}
}
else
{
lean_object* v___x_3911_; 
lean_dec(v_a_3840_);
lean_dec(v_fvarId_3838_);
lean_dec(v_fvarId_3836_);
if (v_isShared_3843_ == 0)
{
lean_ctor_set(v___x_3842_, 0, v_code_3460_);
v___x_3911_ = v___x_3842_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_code_3460_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_3838_);
lean_dec(v_fvarId_3836_);
lean_dec_ref_known(v_code_3460_, 4);
return v___x_3839_;
}
}
else
{
lean_object* v___x_3914_; 
lean_dec(v_fvarId_3836_);
lean_dec_ref_known(v_code_3460_, 4);
v___x_3914_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_3914_;
}
}
else
{
lean_object* v___x_3915_; 
lean_dec_ref_known(v_code_3460_, 4);
v___x_3915_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_3915_;
}
}
case 9:
{
lean_object* v_fvarId_3916_; lean_object* v_i_3917_; lean_object* v_offset_3918_; lean_object* v_y_3919_; lean_object* v_ty_3920_; lean_object* v_k_3921_; lean_object* v___x_3922_; 
v_fvarId_3916_ = lean_ctor_get(v_code_3460_, 0);
v_i_3917_ = lean_ctor_get(v_code_3460_, 1);
v_offset_3918_ = lean_ctor_get(v_code_3460_, 2);
v_y_3919_ = lean_ctor_get(v_code_3460_, 3);
v_ty_3920_ = lean_ctor_get(v_code_3460_, 4);
v_k_3921_ = lean_ctor_get(v_code_3460_, 5);
lean_inc(v_fvarId_3916_);
v___x_3922_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_3916_, v_t_3459_);
if (lean_obj_tag(v___x_3922_) == 0)
{
lean_object* v_fvarId_3923_; lean_object* v___x_3924_; 
v_fvarId_3923_ = lean_ctor_get(v___x_3922_, 0);
lean_inc(v_fvarId_3923_);
lean_dec_ref_known(v___x_3922_, 1);
lean_inc(v_y_3919_);
v___x_3924_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_y_3919_, v_t_3459_);
if (lean_obj_tag(v___x_3924_) == 0)
{
lean_object* v_fvarId_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; 
v_fvarId_3925_ = lean_ctor_get(v___x_3924_, 0);
lean_inc(v_fvarId_3925_);
lean_dec_ref_known(v___x_3924_, 1);
lean_inc_ref(v_ty_3920_);
v___x_3926_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_3458_, v___y_3461_, v_t_3459_, v_ty_3920_);
lean_inc_ref(v_k_3921_);
v___x_3927_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_3921_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_3927_) == 0)
{
lean_object* v_a_3928_; lean_object* v___x_3930_; uint8_t v_isShared_3931_; uint8_t v_isSharedCheck_4045_; 
v_a_3928_ = lean_ctor_get(v___x_3927_, 0);
v_isSharedCheck_4045_ = !lean_is_exclusive(v___x_3927_);
if (v_isSharedCheck_4045_ == 0)
{
v___x_3930_ = v___x_3927_;
v_isShared_3931_ = v_isSharedCheck_4045_;
goto v_resetjp_3929_;
}
else
{
lean_inc(v_a_3928_);
lean_dec(v___x_3927_);
v___x_3930_ = lean_box(0);
v_isShared_3931_ = v_isSharedCheck_4045_;
goto v_resetjp_3929_;
}
v_resetjp_3929_:
{
size_t v___x_3932_; size_t v___x_3933_; uint8_t v___x_3934_; 
v___x_3932_ = lean_ptr_addr(v_fvarId_3916_);
v___x_3933_ = lean_ptr_addr(v_fvarId_3923_);
v___x_3934_ = lean_usize_dec_eq(v___x_3932_, v___x_3933_);
if (v___x_3934_ == 0)
{
lean_object* v___x_3936_; uint8_t v_isShared_3937_; uint8_t v_isSharedCheck_3944_; 
lean_inc(v_offset_3918_);
lean_inc(v_i_3917_);
v_isSharedCheck_3944_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3944_ == 0)
{
lean_object* v_unused_3945_; lean_object* v_unused_3946_; lean_object* v_unused_3947_; lean_object* v_unused_3948_; lean_object* v_unused_3949_; lean_object* v_unused_3950_; 
v_unused_3945_ = lean_ctor_get(v_code_3460_, 5);
lean_dec(v_unused_3945_);
v_unused_3946_ = lean_ctor_get(v_code_3460_, 4);
lean_dec(v_unused_3946_);
v_unused_3947_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3947_);
v_unused_3948_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3948_);
v_unused_3949_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3949_);
v_unused_3950_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3950_);
v___x_3936_ = v_code_3460_;
v_isShared_3937_ = v_isSharedCheck_3944_;
goto v_resetjp_3935_;
}
else
{
lean_dec(v_code_3460_);
v___x_3936_ = lean_box(0);
v_isShared_3937_ = v_isSharedCheck_3944_;
goto v_resetjp_3935_;
}
v_resetjp_3935_:
{
lean_object* v___x_3939_; 
if (v_isShared_3937_ == 0)
{
lean_ctor_set(v___x_3936_, 5, v_a_3928_);
lean_ctor_set(v___x_3936_, 4, v___x_3926_);
lean_ctor_set(v___x_3936_, 3, v_fvarId_3925_);
lean_ctor_set(v___x_3936_, 0, v_fvarId_3923_);
v___x_3939_ = v___x_3936_;
goto v_reusejp_3938_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_fvarId_3923_);
lean_ctor_set(v_reuseFailAlloc_3943_, 1, v_i_3917_);
lean_ctor_set(v_reuseFailAlloc_3943_, 2, v_offset_3918_);
lean_ctor_set(v_reuseFailAlloc_3943_, 3, v_fvarId_3925_);
lean_ctor_set(v_reuseFailAlloc_3943_, 4, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_3943_, 5, v_a_3928_);
v___x_3939_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3938_;
}
v_reusejp_3938_:
{
lean_object* v___x_3941_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v___x_3939_);
v___x_3941_ = v___x_3930_;
goto v_reusejp_3940_;
}
else
{
lean_object* v_reuseFailAlloc_3942_; 
v_reuseFailAlloc_3942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3942_, 0, v___x_3939_);
v___x_3941_ = v_reuseFailAlloc_3942_;
goto v_reusejp_3940_;
}
v_reusejp_3940_:
{
return v___x_3941_;
}
}
}
}
else
{
uint8_t v___x_3951_; 
v___x_3951_ = lean_nat_dec_eq(v_i_3917_, v_i_3917_);
if (v___x_3951_ == 0)
{
lean_object* v___x_3953_; uint8_t v_isShared_3954_; uint8_t v_isSharedCheck_3961_; 
lean_inc(v_offset_3918_);
lean_inc(v_i_3917_);
v_isSharedCheck_3961_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3961_ == 0)
{
lean_object* v_unused_3962_; lean_object* v_unused_3963_; lean_object* v_unused_3964_; lean_object* v_unused_3965_; lean_object* v_unused_3966_; lean_object* v_unused_3967_; 
v_unused_3962_ = lean_ctor_get(v_code_3460_, 5);
lean_dec(v_unused_3962_);
v_unused_3963_ = lean_ctor_get(v_code_3460_, 4);
lean_dec(v_unused_3963_);
v_unused_3964_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3964_);
v_unused_3965_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3965_);
v_unused_3966_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3966_);
v_unused_3967_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3967_);
v___x_3953_ = v_code_3460_;
v_isShared_3954_ = v_isSharedCheck_3961_;
goto v_resetjp_3952_;
}
else
{
lean_dec(v_code_3460_);
v___x_3953_ = lean_box(0);
v_isShared_3954_ = v_isSharedCheck_3961_;
goto v_resetjp_3952_;
}
v_resetjp_3952_:
{
lean_object* v___x_3956_; 
if (v_isShared_3954_ == 0)
{
lean_ctor_set(v___x_3953_, 5, v_a_3928_);
lean_ctor_set(v___x_3953_, 4, v___x_3926_);
lean_ctor_set(v___x_3953_, 3, v_fvarId_3925_);
lean_ctor_set(v___x_3953_, 0, v_fvarId_3923_);
v___x_3956_ = v___x_3953_;
goto v_reusejp_3955_;
}
else
{
lean_object* v_reuseFailAlloc_3960_; 
v_reuseFailAlloc_3960_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3960_, 0, v_fvarId_3923_);
lean_ctor_set(v_reuseFailAlloc_3960_, 1, v_i_3917_);
lean_ctor_set(v_reuseFailAlloc_3960_, 2, v_offset_3918_);
lean_ctor_set(v_reuseFailAlloc_3960_, 3, v_fvarId_3925_);
lean_ctor_set(v_reuseFailAlloc_3960_, 4, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_3960_, 5, v_a_3928_);
v___x_3956_ = v_reuseFailAlloc_3960_;
goto v_reusejp_3955_;
}
v_reusejp_3955_:
{
lean_object* v___x_3958_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v___x_3956_);
v___x_3958_ = v___x_3930_;
goto v_reusejp_3957_;
}
else
{
lean_object* v_reuseFailAlloc_3959_; 
v_reuseFailAlloc_3959_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3959_, 0, v___x_3956_);
v___x_3958_ = v_reuseFailAlloc_3959_;
goto v_reusejp_3957_;
}
v_reusejp_3957_:
{
return v___x_3958_;
}
}
}
}
else
{
uint8_t v___x_3968_; 
v___x_3968_ = lean_nat_dec_eq(v_offset_3918_, v_offset_3918_);
if (v___x_3968_ == 0)
{
lean_object* v___x_3970_; uint8_t v_isShared_3971_; uint8_t v_isSharedCheck_3978_; 
lean_inc(v_offset_3918_);
lean_inc(v_i_3917_);
v_isSharedCheck_3978_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3978_ == 0)
{
lean_object* v_unused_3979_; lean_object* v_unused_3980_; lean_object* v_unused_3981_; lean_object* v_unused_3982_; lean_object* v_unused_3983_; lean_object* v_unused_3984_; 
v_unused_3979_ = lean_ctor_get(v_code_3460_, 5);
lean_dec(v_unused_3979_);
v_unused_3980_ = lean_ctor_get(v_code_3460_, 4);
lean_dec(v_unused_3980_);
v_unused_3981_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_3981_);
v_unused_3982_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_3982_);
v_unused_3983_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_3983_);
v_unused_3984_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_3984_);
v___x_3970_ = v_code_3460_;
v_isShared_3971_ = v_isSharedCheck_3978_;
goto v_resetjp_3969_;
}
else
{
lean_dec(v_code_3460_);
v___x_3970_ = lean_box(0);
v_isShared_3971_ = v_isSharedCheck_3978_;
goto v_resetjp_3969_;
}
v_resetjp_3969_:
{
lean_object* v___x_3973_; 
if (v_isShared_3971_ == 0)
{
lean_ctor_set(v___x_3970_, 5, v_a_3928_);
lean_ctor_set(v___x_3970_, 4, v___x_3926_);
lean_ctor_set(v___x_3970_, 3, v_fvarId_3925_);
lean_ctor_set(v___x_3970_, 0, v_fvarId_3923_);
v___x_3973_ = v___x_3970_;
goto v_reusejp_3972_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_fvarId_3923_);
lean_ctor_set(v_reuseFailAlloc_3977_, 1, v_i_3917_);
lean_ctor_set(v_reuseFailAlloc_3977_, 2, v_offset_3918_);
lean_ctor_set(v_reuseFailAlloc_3977_, 3, v_fvarId_3925_);
lean_ctor_set(v_reuseFailAlloc_3977_, 4, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_3977_, 5, v_a_3928_);
v___x_3973_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3972_;
}
v_reusejp_3972_:
{
lean_object* v___x_3975_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v___x_3973_);
v___x_3975_ = v___x_3930_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v___x_3973_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
return v___x_3975_;
}
}
}
}
else
{
size_t v___x_3985_; size_t v___x_3986_; uint8_t v___x_3987_; 
v___x_3985_ = lean_ptr_addr(v_y_3919_);
v___x_3986_ = lean_ptr_addr(v_fvarId_3925_);
v___x_3987_ = lean_usize_dec_eq(v___x_3985_, v___x_3986_);
if (v___x_3987_ == 0)
{
lean_object* v___x_3989_; uint8_t v_isShared_3990_; uint8_t v_isSharedCheck_3997_; 
lean_inc(v_offset_3918_);
lean_inc(v_i_3917_);
v_isSharedCheck_3997_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_3997_ == 0)
{
lean_object* v_unused_3998_; lean_object* v_unused_3999_; lean_object* v_unused_4000_; lean_object* v_unused_4001_; lean_object* v_unused_4002_; lean_object* v_unused_4003_; 
v_unused_3998_ = lean_ctor_get(v_code_3460_, 5);
lean_dec(v_unused_3998_);
v_unused_3999_ = lean_ctor_get(v_code_3460_, 4);
lean_dec(v_unused_3999_);
v_unused_4000_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_4000_);
v_unused_4001_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4001_);
v_unused_4002_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4002_);
v_unused_4003_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4003_);
v___x_3989_ = v_code_3460_;
v_isShared_3990_ = v_isSharedCheck_3997_;
goto v_resetjp_3988_;
}
else
{
lean_dec(v_code_3460_);
v___x_3989_ = lean_box(0);
v_isShared_3990_ = v_isSharedCheck_3997_;
goto v_resetjp_3988_;
}
v_resetjp_3988_:
{
lean_object* v___x_3992_; 
if (v_isShared_3990_ == 0)
{
lean_ctor_set(v___x_3989_, 5, v_a_3928_);
lean_ctor_set(v___x_3989_, 4, v___x_3926_);
lean_ctor_set(v___x_3989_, 3, v_fvarId_3925_);
lean_ctor_set(v___x_3989_, 0, v_fvarId_3923_);
v___x_3992_ = v___x_3989_;
goto v_reusejp_3991_;
}
else
{
lean_object* v_reuseFailAlloc_3996_; 
v_reuseFailAlloc_3996_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_3996_, 0, v_fvarId_3923_);
lean_ctor_set(v_reuseFailAlloc_3996_, 1, v_i_3917_);
lean_ctor_set(v_reuseFailAlloc_3996_, 2, v_offset_3918_);
lean_ctor_set(v_reuseFailAlloc_3996_, 3, v_fvarId_3925_);
lean_ctor_set(v_reuseFailAlloc_3996_, 4, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_3996_, 5, v_a_3928_);
v___x_3992_ = v_reuseFailAlloc_3996_;
goto v_reusejp_3991_;
}
v_reusejp_3991_:
{
lean_object* v___x_3994_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v___x_3992_);
v___x_3994_ = v___x_3930_;
goto v_reusejp_3993_;
}
else
{
lean_object* v_reuseFailAlloc_3995_; 
v_reuseFailAlloc_3995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3995_, 0, v___x_3992_);
v___x_3994_ = v_reuseFailAlloc_3995_;
goto v_reusejp_3993_;
}
v_reusejp_3993_:
{
return v___x_3994_;
}
}
}
}
else
{
size_t v___x_4004_; size_t v___x_4005_; uint8_t v___x_4006_; 
v___x_4004_ = lean_ptr_addr(v_ty_3920_);
v___x_4005_ = lean_ptr_addr(v___x_3926_);
v___x_4006_ = lean_usize_dec_eq(v___x_4004_, v___x_4005_);
if (v___x_4006_ == 0)
{
lean_object* v___x_4008_; uint8_t v_isShared_4009_; uint8_t v_isSharedCheck_4016_; 
lean_inc(v_offset_3918_);
lean_inc(v_i_3917_);
v_isSharedCheck_4016_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4016_ == 0)
{
lean_object* v_unused_4017_; lean_object* v_unused_4018_; lean_object* v_unused_4019_; lean_object* v_unused_4020_; lean_object* v_unused_4021_; lean_object* v_unused_4022_; 
v_unused_4017_ = lean_ctor_get(v_code_3460_, 5);
lean_dec(v_unused_4017_);
v_unused_4018_ = lean_ctor_get(v_code_3460_, 4);
lean_dec(v_unused_4018_);
v_unused_4019_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_4019_);
v_unused_4020_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4020_);
v_unused_4021_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4021_);
v_unused_4022_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4022_);
v___x_4008_ = v_code_3460_;
v_isShared_4009_ = v_isSharedCheck_4016_;
goto v_resetjp_4007_;
}
else
{
lean_dec(v_code_3460_);
v___x_4008_ = lean_box(0);
v_isShared_4009_ = v_isSharedCheck_4016_;
goto v_resetjp_4007_;
}
v_resetjp_4007_:
{
lean_object* v___x_4011_; 
if (v_isShared_4009_ == 0)
{
lean_ctor_set(v___x_4008_, 5, v_a_3928_);
lean_ctor_set(v___x_4008_, 4, v___x_3926_);
lean_ctor_set(v___x_4008_, 3, v_fvarId_3925_);
lean_ctor_set(v___x_4008_, 0, v_fvarId_3923_);
v___x_4011_ = v___x_4008_;
goto v_reusejp_4010_;
}
else
{
lean_object* v_reuseFailAlloc_4015_; 
v_reuseFailAlloc_4015_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_4015_, 0, v_fvarId_3923_);
lean_ctor_set(v_reuseFailAlloc_4015_, 1, v_i_3917_);
lean_ctor_set(v_reuseFailAlloc_4015_, 2, v_offset_3918_);
lean_ctor_set(v_reuseFailAlloc_4015_, 3, v_fvarId_3925_);
lean_ctor_set(v_reuseFailAlloc_4015_, 4, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_4015_, 5, v_a_3928_);
v___x_4011_ = v_reuseFailAlloc_4015_;
goto v_reusejp_4010_;
}
v_reusejp_4010_:
{
lean_object* v___x_4013_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v___x_4011_);
v___x_4013_ = v___x_3930_;
goto v_reusejp_4012_;
}
else
{
lean_object* v_reuseFailAlloc_4014_; 
v_reuseFailAlloc_4014_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4014_, 0, v___x_4011_);
v___x_4013_ = v_reuseFailAlloc_4014_;
goto v_reusejp_4012_;
}
v_reusejp_4012_:
{
return v___x_4013_;
}
}
}
}
else
{
size_t v___x_4023_; size_t v___x_4024_; uint8_t v___x_4025_; 
v___x_4023_ = lean_ptr_addr(v_k_3921_);
v___x_4024_ = lean_ptr_addr(v_a_3928_);
v___x_4025_ = lean_usize_dec_eq(v___x_4023_, v___x_4024_);
if (v___x_4025_ == 0)
{
lean_object* v___x_4027_; uint8_t v_isShared_4028_; uint8_t v_isSharedCheck_4035_; 
lean_inc(v_offset_3918_);
lean_inc(v_i_3917_);
v_isSharedCheck_4035_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4035_ == 0)
{
lean_object* v_unused_4036_; lean_object* v_unused_4037_; lean_object* v_unused_4038_; lean_object* v_unused_4039_; lean_object* v_unused_4040_; lean_object* v_unused_4041_; 
v_unused_4036_ = lean_ctor_get(v_code_3460_, 5);
lean_dec(v_unused_4036_);
v_unused_4037_ = lean_ctor_get(v_code_3460_, 4);
lean_dec(v_unused_4037_);
v_unused_4038_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_4038_);
v_unused_4039_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4039_);
v_unused_4040_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4040_);
v_unused_4041_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4041_);
v___x_4027_ = v_code_3460_;
v_isShared_4028_ = v_isSharedCheck_4035_;
goto v_resetjp_4026_;
}
else
{
lean_dec(v_code_3460_);
v___x_4027_ = lean_box(0);
v_isShared_4028_ = v_isSharedCheck_4035_;
goto v_resetjp_4026_;
}
v_resetjp_4026_:
{
lean_object* v___x_4030_; 
if (v_isShared_4028_ == 0)
{
lean_ctor_set(v___x_4027_, 5, v_a_3928_);
lean_ctor_set(v___x_4027_, 4, v___x_3926_);
lean_ctor_set(v___x_4027_, 3, v_fvarId_3925_);
lean_ctor_set(v___x_4027_, 0, v_fvarId_3923_);
v___x_4030_ = v___x_4027_;
goto v_reusejp_4029_;
}
else
{
lean_object* v_reuseFailAlloc_4034_; 
v_reuseFailAlloc_4034_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_4034_, 0, v_fvarId_3923_);
lean_ctor_set(v_reuseFailAlloc_4034_, 1, v_i_3917_);
lean_ctor_set(v_reuseFailAlloc_4034_, 2, v_offset_3918_);
lean_ctor_set(v_reuseFailAlloc_4034_, 3, v_fvarId_3925_);
lean_ctor_set(v_reuseFailAlloc_4034_, 4, v___x_3926_);
lean_ctor_set(v_reuseFailAlloc_4034_, 5, v_a_3928_);
v___x_4030_ = v_reuseFailAlloc_4034_;
goto v_reusejp_4029_;
}
v_reusejp_4029_:
{
lean_object* v___x_4032_; 
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v___x_4030_);
v___x_4032_ = v___x_3930_;
goto v_reusejp_4031_;
}
else
{
lean_object* v_reuseFailAlloc_4033_; 
v_reuseFailAlloc_4033_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4033_, 0, v___x_4030_);
v___x_4032_ = v_reuseFailAlloc_4033_;
goto v_reusejp_4031_;
}
v_reusejp_4031_:
{
return v___x_4032_;
}
}
}
}
else
{
lean_object* v___x_4043_; 
lean_dec(v_a_3928_);
lean_dec_ref(v___x_3926_);
lean_dec(v_fvarId_3925_);
lean_dec(v_fvarId_3923_);
if (v_isShared_3931_ == 0)
{
lean_ctor_set(v___x_3930_, 0, v_code_3460_);
v___x_4043_ = v___x_3930_;
goto v_reusejp_4042_;
}
else
{
lean_object* v_reuseFailAlloc_4044_; 
v_reuseFailAlloc_4044_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4044_, 0, v_code_3460_);
v___x_4043_ = v_reuseFailAlloc_4044_;
goto v_reusejp_4042_;
}
v_reusejp_4042_:
{
return v___x_4043_;
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
lean_dec_ref(v___x_3926_);
lean_dec(v_fvarId_3925_);
lean_dec(v_fvarId_3923_);
lean_dec_ref_known(v_code_3460_, 6);
return v___x_3927_;
}
}
else
{
lean_object* v___x_4046_; 
lean_dec(v_fvarId_3923_);
lean_dec_ref_known(v_code_3460_, 6);
v___x_4046_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_4046_;
}
}
else
{
lean_object* v___x_4047_; 
lean_dec_ref_known(v_code_3460_, 6);
v___x_4047_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_4047_;
}
}
case 10:
{
lean_object* v_fvarId_4048_; lean_object* v_cidx_4049_; lean_object* v_k_4050_; lean_object* v___x_4051_; 
v_fvarId_4048_ = lean_ctor_get(v_code_3460_, 0);
v_cidx_4049_ = lean_ctor_get(v_code_3460_, 1);
v_k_4050_ = lean_ctor_get(v_code_3460_, 2);
lean_inc(v_fvarId_4048_);
v___x_4051_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_4048_, v_t_3459_);
if (lean_obj_tag(v___x_4051_) == 0)
{
lean_object* v_fvarId_4052_; lean_object* v___x_4053_; 
v_fvarId_4052_ = lean_ctor_get(v___x_4051_, 0);
lean_inc(v_fvarId_4052_);
lean_dec_ref_known(v___x_4051_, 1);
lean_inc_ref(v_k_4050_);
v___x_4053_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_4050_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4054_; lean_object* v___x_4056_; uint8_t v_isShared_4057_; uint8_t v_isSharedCheck_4107_; 
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4107_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4107_ == 0)
{
v___x_4056_ = v___x_4053_;
v_isShared_4057_ = v_isSharedCheck_4107_;
goto v_resetjp_4055_;
}
else
{
lean_inc(v_a_4054_);
lean_dec(v___x_4053_);
v___x_4056_ = lean_box(0);
v_isShared_4057_ = v_isSharedCheck_4107_;
goto v_resetjp_4055_;
}
v_resetjp_4055_:
{
size_t v___x_4058_; size_t v___x_4059_; uint8_t v___x_4060_; 
v___x_4058_ = lean_ptr_addr(v_fvarId_4048_);
v___x_4059_ = lean_ptr_addr(v_fvarId_4052_);
v___x_4060_ = lean_usize_dec_eq(v___x_4058_, v___x_4059_);
if (v___x_4060_ == 0)
{
lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4070_; 
lean_inc(v_cidx_4049_);
v_isSharedCheck_4070_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4070_ == 0)
{
lean_object* v_unused_4071_; lean_object* v_unused_4072_; lean_object* v_unused_4073_; 
v_unused_4071_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4071_);
v_unused_4072_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4072_);
v_unused_4073_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4073_);
v___x_4062_ = v_code_3460_;
v_isShared_4063_ = v_isSharedCheck_4070_;
goto v_resetjp_4061_;
}
else
{
lean_dec(v_code_3460_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4070_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4065_; 
if (v_isShared_4063_ == 0)
{
lean_ctor_set(v___x_4062_, 2, v_a_4054_);
lean_ctor_set(v___x_4062_, 0, v_fvarId_4052_);
v___x_4065_ = v___x_4062_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4069_; 
v_reuseFailAlloc_4069_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4069_, 0, v_fvarId_4052_);
lean_ctor_set(v_reuseFailAlloc_4069_, 1, v_cidx_4049_);
lean_ctor_set(v_reuseFailAlloc_4069_, 2, v_a_4054_);
v___x_4065_ = v_reuseFailAlloc_4069_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
lean_object* v___x_4067_; 
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 0, v___x_4065_);
v___x_4067_ = v___x_4056_;
goto v_reusejp_4066_;
}
else
{
lean_object* v_reuseFailAlloc_4068_; 
v_reuseFailAlloc_4068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4068_, 0, v___x_4065_);
v___x_4067_ = v_reuseFailAlloc_4068_;
goto v_reusejp_4066_;
}
v_reusejp_4066_:
{
return v___x_4067_;
}
}
}
}
else
{
uint8_t v___x_4074_; 
v___x_4074_ = lean_nat_dec_eq(v_cidx_4049_, v_cidx_4049_);
if (v___x_4074_ == 0)
{
lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4084_; 
lean_inc(v_cidx_4049_);
v_isSharedCheck_4084_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4084_ == 0)
{
lean_object* v_unused_4085_; lean_object* v_unused_4086_; lean_object* v_unused_4087_; 
v_unused_4085_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4085_);
v_unused_4086_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4086_);
v_unused_4087_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4087_);
v___x_4076_ = v_code_3460_;
v_isShared_4077_ = v_isSharedCheck_4084_;
goto v_resetjp_4075_;
}
else
{
lean_dec(v_code_3460_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4084_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v___x_4079_; 
if (v_isShared_4077_ == 0)
{
lean_ctor_set(v___x_4076_, 2, v_a_4054_);
lean_ctor_set(v___x_4076_, 0, v_fvarId_4052_);
v___x_4079_ = v___x_4076_;
goto v_reusejp_4078_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v_fvarId_4052_);
lean_ctor_set(v_reuseFailAlloc_4083_, 1, v_cidx_4049_);
lean_ctor_set(v_reuseFailAlloc_4083_, 2, v_a_4054_);
v___x_4079_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4078_;
}
v_reusejp_4078_:
{
lean_object* v___x_4081_; 
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 0, v___x_4079_);
v___x_4081_ = v___x_4056_;
goto v_reusejp_4080_;
}
else
{
lean_object* v_reuseFailAlloc_4082_; 
v_reuseFailAlloc_4082_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4082_, 0, v___x_4079_);
v___x_4081_ = v_reuseFailAlloc_4082_;
goto v_reusejp_4080_;
}
v_reusejp_4080_:
{
return v___x_4081_;
}
}
}
}
else
{
size_t v___x_4088_; size_t v___x_4089_; uint8_t v___x_4090_; 
v___x_4088_ = lean_ptr_addr(v_k_4050_);
v___x_4089_ = lean_ptr_addr(v_a_4054_);
v___x_4090_ = lean_usize_dec_eq(v___x_4088_, v___x_4089_);
if (v___x_4090_ == 0)
{
lean_object* v___x_4092_; uint8_t v_isShared_4093_; uint8_t v_isSharedCheck_4100_; 
lean_inc(v_cidx_4049_);
v_isSharedCheck_4100_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4100_ == 0)
{
lean_object* v_unused_4101_; lean_object* v_unused_4102_; lean_object* v_unused_4103_; 
v_unused_4101_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4101_);
v_unused_4102_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4102_);
v_unused_4103_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4103_);
v___x_4092_ = v_code_3460_;
v_isShared_4093_ = v_isSharedCheck_4100_;
goto v_resetjp_4091_;
}
else
{
lean_dec(v_code_3460_);
v___x_4092_ = lean_box(0);
v_isShared_4093_ = v_isSharedCheck_4100_;
goto v_resetjp_4091_;
}
v_resetjp_4091_:
{
lean_object* v___x_4095_; 
if (v_isShared_4093_ == 0)
{
lean_ctor_set(v___x_4092_, 2, v_a_4054_);
lean_ctor_set(v___x_4092_, 0, v_fvarId_4052_);
v___x_4095_ = v___x_4092_;
goto v_reusejp_4094_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(10, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_fvarId_4052_);
lean_ctor_set(v_reuseFailAlloc_4099_, 1, v_cidx_4049_);
lean_ctor_set(v_reuseFailAlloc_4099_, 2, v_a_4054_);
v___x_4095_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4094_;
}
v_reusejp_4094_:
{
lean_object* v___x_4097_; 
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 0, v___x_4095_);
v___x_4097_ = v___x_4056_;
goto v_reusejp_4096_;
}
else
{
lean_object* v_reuseFailAlloc_4098_; 
v_reuseFailAlloc_4098_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4098_, 0, v___x_4095_);
v___x_4097_ = v_reuseFailAlloc_4098_;
goto v_reusejp_4096_;
}
v_reusejp_4096_:
{
return v___x_4097_;
}
}
}
}
else
{
lean_object* v___x_4105_; 
lean_dec(v_a_4054_);
lean_dec(v_fvarId_4052_);
if (v_isShared_4057_ == 0)
{
lean_ctor_set(v___x_4056_, 0, v_code_3460_);
v___x_4105_ = v___x_4056_;
goto v_reusejp_4104_;
}
else
{
lean_object* v_reuseFailAlloc_4106_; 
v_reuseFailAlloc_4106_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4106_, 0, v_code_3460_);
v___x_4105_ = v_reuseFailAlloc_4106_;
goto v_reusejp_4104_;
}
v_reusejp_4104_:
{
return v___x_4105_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_4052_);
lean_dec_ref_known(v_code_3460_, 3);
return v___x_4053_;
}
}
else
{
lean_object* v___x_4108_; 
lean_dec_ref_known(v_code_3460_, 3);
v___x_4108_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_4108_;
}
}
case 11:
{
lean_object* v_fvarId_4109_; lean_object* v_n_4110_; uint8_t v_check_4111_; uint8_t v_persistent_4112_; lean_object* v_k_4113_; lean_object* v___x_4114_; 
v_fvarId_4109_ = lean_ctor_get(v_code_3460_, 0);
v_n_4110_ = lean_ctor_get(v_code_3460_, 1);
v_check_4111_ = lean_ctor_get_uint8(v_code_3460_, sizeof(void*)*3);
v_persistent_4112_ = lean_ctor_get_uint8(v_code_3460_, sizeof(void*)*3 + 1);
v_k_4113_ = lean_ctor_get(v_code_3460_, 2);
lean_inc(v_fvarId_4109_);
v___x_4114_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_4109_, v_t_3459_);
if (lean_obj_tag(v___x_4114_) == 0)
{
lean_object* v_fvarId_4115_; lean_object* v___x_4116_; 
v_fvarId_4115_ = lean_ctor_get(v___x_4114_, 0);
lean_inc(v_fvarId_4115_);
lean_dec_ref_known(v___x_4114_, 1);
lean_inc_ref(v_k_4113_);
v___x_4116_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_4113_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_4116_) == 0)
{
lean_object* v_a_4117_; lean_object* v___x_4119_; uint8_t v_isShared_4120_; uint8_t v_isSharedCheck_4170_; 
v_a_4117_ = lean_ctor_get(v___x_4116_, 0);
v_isSharedCheck_4170_ = !lean_is_exclusive(v___x_4116_);
if (v_isSharedCheck_4170_ == 0)
{
v___x_4119_ = v___x_4116_;
v_isShared_4120_ = v_isSharedCheck_4170_;
goto v_resetjp_4118_;
}
else
{
lean_inc(v_a_4117_);
lean_dec(v___x_4116_);
v___x_4119_ = lean_box(0);
v_isShared_4120_ = v_isSharedCheck_4170_;
goto v_resetjp_4118_;
}
v_resetjp_4118_:
{
size_t v___x_4121_; size_t v___x_4122_; uint8_t v___x_4123_; 
v___x_4121_ = lean_ptr_addr(v_fvarId_4109_);
v___x_4122_ = lean_ptr_addr(v_fvarId_4115_);
v___x_4123_ = lean_usize_dec_eq(v___x_4121_, v___x_4122_);
if (v___x_4123_ == 0)
{
lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4133_; 
lean_inc(v_n_4110_);
v_isSharedCheck_4133_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4133_ == 0)
{
lean_object* v_unused_4134_; lean_object* v_unused_4135_; lean_object* v_unused_4136_; 
v_unused_4134_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4134_);
v_unused_4135_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4135_);
v_unused_4136_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4136_);
v___x_4125_ = v_code_3460_;
v_isShared_4126_ = v_isSharedCheck_4133_;
goto v_resetjp_4124_;
}
else
{
lean_dec(v_code_3460_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4133_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4128_; 
if (v_isShared_4126_ == 0)
{
lean_ctor_set(v___x_4125_, 2, v_a_4117_);
lean_ctor_set(v___x_4125_, 0, v_fvarId_4115_);
v___x_4128_ = v___x_4125_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v_fvarId_4115_);
lean_ctor_set(v_reuseFailAlloc_4132_, 1, v_n_4110_);
lean_ctor_set(v_reuseFailAlloc_4132_, 2, v_a_4117_);
lean_ctor_set_uint8(v_reuseFailAlloc_4132_, sizeof(void*)*3, v_check_4111_);
lean_ctor_set_uint8(v_reuseFailAlloc_4132_, sizeof(void*)*3 + 1, v_persistent_4112_);
v___x_4128_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
lean_object* v___x_4130_; 
if (v_isShared_4120_ == 0)
{
lean_ctor_set(v___x_4119_, 0, v___x_4128_);
v___x_4130_ = v___x_4119_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v___x_4128_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
}
else
{
uint8_t v___x_4137_; 
v___x_4137_ = lean_nat_dec_eq(v_n_4110_, v_n_4110_);
if (v___x_4137_ == 0)
{
lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4147_; 
lean_inc(v_n_4110_);
v_isSharedCheck_4147_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4147_ == 0)
{
lean_object* v_unused_4148_; lean_object* v_unused_4149_; lean_object* v_unused_4150_; 
v_unused_4148_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4148_);
v_unused_4149_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4149_);
v_unused_4150_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4150_);
v___x_4139_ = v_code_3460_;
v_isShared_4140_ = v_isSharedCheck_4147_;
goto v_resetjp_4138_;
}
else
{
lean_dec(v_code_3460_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4147_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
lean_ctor_set(v___x_4139_, 2, v_a_4117_);
lean_ctor_set(v___x_4139_, 0, v_fvarId_4115_);
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_fvarId_4115_);
lean_ctor_set(v_reuseFailAlloc_4146_, 1, v_n_4110_);
lean_ctor_set(v_reuseFailAlloc_4146_, 2, v_a_4117_);
lean_ctor_set_uint8(v_reuseFailAlloc_4146_, sizeof(void*)*3, v_check_4111_);
lean_ctor_set_uint8(v_reuseFailAlloc_4146_, sizeof(void*)*3 + 1, v_persistent_4112_);
v___x_4142_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
lean_object* v___x_4144_; 
if (v_isShared_4120_ == 0)
{
lean_ctor_set(v___x_4119_, 0, v___x_4142_);
v___x_4144_ = v___x_4119_;
goto v_reusejp_4143_;
}
else
{
lean_object* v_reuseFailAlloc_4145_; 
v_reuseFailAlloc_4145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4145_, 0, v___x_4142_);
v___x_4144_ = v_reuseFailAlloc_4145_;
goto v_reusejp_4143_;
}
v_reusejp_4143_:
{
return v___x_4144_;
}
}
}
}
else
{
size_t v___x_4151_; size_t v___x_4152_; uint8_t v___x_4153_; 
v___x_4151_ = lean_ptr_addr(v_k_4113_);
v___x_4152_ = lean_ptr_addr(v_a_4117_);
v___x_4153_ = lean_usize_dec_eq(v___x_4151_, v___x_4152_);
if (v___x_4153_ == 0)
{
lean_object* v___x_4155_; uint8_t v_isShared_4156_; uint8_t v_isSharedCheck_4163_; 
lean_inc(v_n_4110_);
v_isSharedCheck_4163_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4163_ == 0)
{
lean_object* v_unused_4164_; lean_object* v_unused_4165_; lean_object* v_unused_4166_; 
v_unused_4164_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4164_);
v_unused_4165_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4165_);
v_unused_4166_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4166_);
v___x_4155_ = v_code_3460_;
v_isShared_4156_ = v_isSharedCheck_4163_;
goto v_resetjp_4154_;
}
else
{
lean_dec(v_code_3460_);
v___x_4155_ = lean_box(0);
v_isShared_4156_ = v_isSharedCheck_4163_;
goto v_resetjp_4154_;
}
v_resetjp_4154_:
{
lean_object* v___x_4158_; 
if (v_isShared_4156_ == 0)
{
lean_ctor_set(v___x_4155_, 2, v_a_4117_);
lean_ctor_set(v___x_4155_, 0, v_fvarId_4115_);
v___x_4158_ = v___x_4155_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v_fvarId_4115_);
lean_ctor_set(v_reuseFailAlloc_4162_, 1, v_n_4110_);
lean_ctor_set(v_reuseFailAlloc_4162_, 2, v_a_4117_);
lean_ctor_set_uint8(v_reuseFailAlloc_4162_, sizeof(void*)*3, v_check_4111_);
lean_ctor_set_uint8(v_reuseFailAlloc_4162_, sizeof(void*)*3 + 1, v_persistent_4112_);
v___x_4158_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
lean_object* v___x_4160_; 
if (v_isShared_4120_ == 0)
{
lean_ctor_set(v___x_4119_, 0, v___x_4158_);
v___x_4160_ = v___x_4119_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v___x_4158_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
}
}
else
{
lean_object* v___x_4168_; 
lean_dec(v_a_4117_);
lean_dec(v_fvarId_4115_);
if (v_isShared_4120_ == 0)
{
lean_ctor_set(v___x_4119_, 0, v_code_3460_);
v___x_4168_ = v___x_4119_;
goto v_reusejp_4167_;
}
else
{
lean_object* v_reuseFailAlloc_4169_; 
v_reuseFailAlloc_4169_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4169_, 0, v_code_3460_);
v___x_4168_ = v_reuseFailAlloc_4169_;
goto v_reusejp_4167_;
}
v_reusejp_4167_:
{
return v___x_4168_;
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_4115_);
lean_dec_ref_known(v_code_3460_, 3);
return v___x_4116_;
}
}
else
{
lean_object* v___x_4171_; 
lean_dec_ref_known(v_code_3460_, 3);
v___x_4171_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_4171_;
}
}
case 12:
{
lean_object* v_fvarId_4172_; lean_object* v_n_4173_; uint8_t v_check_4174_; uint8_t v_persistent_4175_; lean_object* v_objs_x3f_4176_; lean_object* v_k_4177_; lean_object* v___x_4178_; 
v_fvarId_4172_ = lean_ctor_get(v_code_3460_, 0);
v_n_4173_ = lean_ctor_get(v_code_3460_, 1);
v_check_4174_ = lean_ctor_get_uint8(v_code_3460_, sizeof(void*)*4);
v_persistent_4175_ = lean_ctor_get_uint8(v_code_3460_, sizeof(void*)*4 + 1);
v_objs_x3f_4176_ = lean_ctor_get(v_code_3460_, 2);
v_k_4177_ = lean_ctor_get(v_code_3460_, 3);
lean_inc(v_fvarId_4172_);
v___x_4178_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_4172_, v_t_3459_);
if (lean_obj_tag(v___x_4178_) == 0)
{
lean_object* v_fvarId_4179_; lean_object* v___x_4180_; 
v_fvarId_4179_ = lean_ctor_get(v___x_4178_, 0);
lean_inc(v_fvarId_4179_);
lean_dec_ref_known(v___x_4178_, 1);
lean_inc_ref(v_k_4177_);
v___x_4180_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_4177_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_4180_) == 0)
{
lean_object* v_a_4181_; lean_object* v___x_4183_; uint8_t v_isShared_4184_; uint8_t v_isSharedCheck_4253_; 
v_a_4181_ = lean_ctor_get(v___x_4180_, 0);
v_isSharedCheck_4253_ = !lean_is_exclusive(v___x_4180_);
if (v_isSharedCheck_4253_ == 0)
{
v___x_4183_ = v___x_4180_;
v_isShared_4184_ = v_isSharedCheck_4253_;
goto v_resetjp_4182_;
}
else
{
lean_inc(v_a_4181_);
lean_dec(v___x_4180_);
v___x_4183_ = lean_box(0);
v_isShared_4184_ = v_isSharedCheck_4253_;
goto v_resetjp_4182_;
}
v_resetjp_4182_:
{
size_t v___x_4185_; size_t v___x_4186_; uint8_t v___x_4187_; 
v___x_4185_ = lean_ptr_addr(v_fvarId_4172_);
v___x_4186_ = lean_ptr_addr(v_fvarId_4179_);
v___x_4187_ = lean_usize_dec_eq(v___x_4185_, v___x_4186_);
if (v___x_4187_ == 0)
{
lean_object* v___x_4189_; uint8_t v_isShared_4190_; uint8_t v_isSharedCheck_4197_; 
lean_inc(v_objs_x3f_4176_);
lean_inc(v_n_4173_);
v_isSharedCheck_4197_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4197_ == 0)
{
lean_object* v_unused_4198_; lean_object* v_unused_4199_; lean_object* v_unused_4200_; lean_object* v_unused_4201_; 
v_unused_4198_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_4198_);
v_unused_4199_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4199_);
v_unused_4200_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4200_);
v_unused_4201_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4201_);
v___x_4189_ = v_code_3460_;
v_isShared_4190_ = v_isSharedCheck_4197_;
goto v_resetjp_4188_;
}
else
{
lean_dec(v_code_3460_);
v___x_4189_ = lean_box(0);
v_isShared_4190_ = v_isSharedCheck_4197_;
goto v_resetjp_4188_;
}
v_resetjp_4188_:
{
lean_object* v___x_4192_; 
if (v_isShared_4190_ == 0)
{
lean_ctor_set(v___x_4189_, 3, v_a_4181_);
lean_ctor_set(v___x_4189_, 0, v_fvarId_4179_);
v___x_4192_ = v___x_4189_;
goto v_reusejp_4191_;
}
else
{
lean_object* v_reuseFailAlloc_4196_; 
v_reuseFailAlloc_4196_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_4196_, 0, v_fvarId_4179_);
lean_ctor_set(v_reuseFailAlloc_4196_, 1, v_n_4173_);
lean_ctor_set(v_reuseFailAlloc_4196_, 2, v_objs_x3f_4176_);
lean_ctor_set(v_reuseFailAlloc_4196_, 3, v_a_4181_);
lean_ctor_set_uint8(v_reuseFailAlloc_4196_, sizeof(void*)*4, v_check_4174_);
lean_ctor_set_uint8(v_reuseFailAlloc_4196_, sizeof(void*)*4 + 1, v_persistent_4175_);
v___x_4192_ = v_reuseFailAlloc_4196_;
goto v_reusejp_4191_;
}
v_reusejp_4191_:
{
lean_object* v___x_4194_; 
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v___x_4192_);
v___x_4194_ = v___x_4183_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4192_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
else
{
uint8_t v___x_4202_; 
v___x_4202_ = lean_nat_dec_eq(v_n_4173_, v_n_4173_);
if (v___x_4202_ == 0)
{
lean_object* v___x_4204_; uint8_t v_isShared_4205_; uint8_t v_isSharedCheck_4212_; 
lean_inc(v_objs_x3f_4176_);
lean_inc(v_n_4173_);
v_isSharedCheck_4212_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4212_ == 0)
{
lean_object* v_unused_4213_; lean_object* v_unused_4214_; lean_object* v_unused_4215_; lean_object* v_unused_4216_; 
v_unused_4213_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_4213_);
v_unused_4214_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4214_);
v_unused_4215_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4215_);
v_unused_4216_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4216_);
v___x_4204_ = v_code_3460_;
v_isShared_4205_ = v_isSharedCheck_4212_;
goto v_resetjp_4203_;
}
else
{
lean_dec(v_code_3460_);
v___x_4204_ = lean_box(0);
v_isShared_4205_ = v_isSharedCheck_4212_;
goto v_resetjp_4203_;
}
v_resetjp_4203_:
{
lean_object* v___x_4207_; 
if (v_isShared_4205_ == 0)
{
lean_ctor_set(v___x_4204_, 3, v_a_4181_);
lean_ctor_set(v___x_4204_, 0, v_fvarId_4179_);
v___x_4207_ = v___x_4204_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4211_; 
v_reuseFailAlloc_4211_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_4211_, 0, v_fvarId_4179_);
lean_ctor_set(v_reuseFailAlloc_4211_, 1, v_n_4173_);
lean_ctor_set(v_reuseFailAlloc_4211_, 2, v_objs_x3f_4176_);
lean_ctor_set(v_reuseFailAlloc_4211_, 3, v_a_4181_);
lean_ctor_set_uint8(v_reuseFailAlloc_4211_, sizeof(void*)*4, v_check_4174_);
lean_ctor_set_uint8(v_reuseFailAlloc_4211_, sizeof(void*)*4 + 1, v_persistent_4175_);
v___x_4207_ = v_reuseFailAlloc_4211_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
lean_object* v___x_4209_; 
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v___x_4207_);
v___x_4209_ = v___x_4183_;
goto v_reusejp_4208_;
}
else
{
lean_object* v_reuseFailAlloc_4210_; 
v_reuseFailAlloc_4210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4210_, 0, v___x_4207_);
v___x_4209_ = v_reuseFailAlloc_4210_;
goto v_reusejp_4208_;
}
v_reusejp_4208_:
{
return v___x_4209_;
}
}
}
}
else
{
size_t v___x_4217_; uint8_t v___x_4218_; 
v___x_4217_ = lean_ptr_addr(v_objs_x3f_4176_);
v___x_4218_ = lean_usize_dec_eq(v___x_4217_, v___x_4217_);
if (v___x_4218_ == 0)
{
lean_object* v___x_4220_; uint8_t v_isShared_4221_; uint8_t v_isSharedCheck_4228_; 
lean_inc(v_objs_x3f_4176_);
lean_inc(v_n_4173_);
v_isSharedCheck_4228_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4228_ == 0)
{
lean_object* v_unused_4229_; lean_object* v_unused_4230_; lean_object* v_unused_4231_; lean_object* v_unused_4232_; 
v_unused_4229_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_4229_);
v_unused_4230_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4230_);
v_unused_4231_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4231_);
v_unused_4232_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4232_);
v___x_4220_ = v_code_3460_;
v_isShared_4221_ = v_isSharedCheck_4228_;
goto v_resetjp_4219_;
}
else
{
lean_dec(v_code_3460_);
v___x_4220_ = lean_box(0);
v_isShared_4221_ = v_isSharedCheck_4228_;
goto v_resetjp_4219_;
}
v_resetjp_4219_:
{
lean_object* v___x_4223_; 
if (v_isShared_4221_ == 0)
{
lean_ctor_set(v___x_4220_, 3, v_a_4181_);
lean_ctor_set(v___x_4220_, 0, v_fvarId_4179_);
v___x_4223_ = v___x_4220_;
goto v_reusejp_4222_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_fvarId_4179_);
lean_ctor_set(v_reuseFailAlloc_4227_, 1, v_n_4173_);
lean_ctor_set(v_reuseFailAlloc_4227_, 2, v_objs_x3f_4176_);
lean_ctor_set(v_reuseFailAlloc_4227_, 3, v_a_4181_);
lean_ctor_set_uint8(v_reuseFailAlloc_4227_, sizeof(void*)*4, v_check_4174_);
lean_ctor_set_uint8(v_reuseFailAlloc_4227_, sizeof(void*)*4 + 1, v_persistent_4175_);
v___x_4223_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4222_;
}
v_reusejp_4222_:
{
lean_object* v___x_4225_; 
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v___x_4223_);
v___x_4225_ = v___x_4183_;
goto v_reusejp_4224_;
}
else
{
lean_object* v_reuseFailAlloc_4226_; 
v_reuseFailAlloc_4226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4226_, 0, v___x_4223_);
v___x_4225_ = v_reuseFailAlloc_4226_;
goto v_reusejp_4224_;
}
v_reusejp_4224_:
{
return v___x_4225_;
}
}
}
}
else
{
size_t v___x_4233_; size_t v___x_4234_; uint8_t v___x_4235_; 
v___x_4233_ = lean_ptr_addr(v_k_4177_);
v___x_4234_ = lean_ptr_addr(v_a_4181_);
v___x_4235_ = lean_usize_dec_eq(v___x_4233_, v___x_4234_);
if (v___x_4235_ == 0)
{
lean_object* v___x_4237_; uint8_t v_isShared_4238_; uint8_t v_isSharedCheck_4245_; 
lean_inc(v_objs_x3f_4176_);
lean_inc(v_n_4173_);
v_isSharedCheck_4245_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4245_ == 0)
{
lean_object* v_unused_4246_; lean_object* v_unused_4247_; lean_object* v_unused_4248_; lean_object* v_unused_4249_; 
v_unused_4246_ = lean_ctor_get(v_code_3460_, 3);
lean_dec(v_unused_4246_);
v_unused_4247_ = lean_ctor_get(v_code_3460_, 2);
lean_dec(v_unused_4247_);
v_unused_4248_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4248_);
v_unused_4249_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4249_);
v___x_4237_ = v_code_3460_;
v_isShared_4238_ = v_isSharedCheck_4245_;
goto v_resetjp_4236_;
}
else
{
lean_dec(v_code_3460_);
v___x_4237_ = lean_box(0);
v_isShared_4238_ = v_isSharedCheck_4245_;
goto v_resetjp_4236_;
}
v_resetjp_4236_:
{
lean_object* v___x_4240_; 
if (v_isShared_4238_ == 0)
{
lean_ctor_set(v___x_4237_, 3, v_a_4181_);
lean_ctor_set(v___x_4237_, 0, v_fvarId_4179_);
v___x_4240_ = v___x_4237_;
goto v_reusejp_4239_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v_fvarId_4179_);
lean_ctor_set(v_reuseFailAlloc_4244_, 1, v_n_4173_);
lean_ctor_set(v_reuseFailAlloc_4244_, 2, v_objs_x3f_4176_);
lean_ctor_set(v_reuseFailAlloc_4244_, 3, v_a_4181_);
lean_ctor_set_uint8(v_reuseFailAlloc_4244_, sizeof(void*)*4, v_check_4174_);
lean_ctor_set_uint8(v_reuseFailAlloc_4244_, sizeof(void*)*4 + 1, v_persistent_4175_);
v___x_4240_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4239_;
}
v_reusejp_4239_:
{
lean_object* v___x_4242_; 
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v___x_4240_);
v___x_4242_ = v___x_4183_;
goto v_reusejp_4241_;
}
else
{
lean_object* v_reuseFailAlloc_4243_; 
v_reuseFailAlloc_4243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4243_, 0, v___x_4240_);
v___x_4242_ = v_reuseFailAlloc_4243_;
goto v_reusejp_4241_;
}
v_reusejp_4241_:
{
return v___x_4242_;
}
}
}
}
else
{
lean_object* v___x_4251_; 
lean_dec(v_a_4181_);
lean_dec(v_fvarId_4179_);
if (v_isShared_4184_ == 0)
{
lean_ctor_set(v___x_4183_, 0, v_code_3460_);
v___x_4251_ = v___x_4183_;
goto v_reusejp_4250_;
}
else
{
lean_object* v_reuseFailAlloc_4252_; 
v_reuseFailAlloc_4252_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4252_, 0, v_code_3460_);
v___x_4251_ = v_reuseFailAlloc_4252_;
goto v_reusejp_4250_;
}
v_reusejp_4250_:
{
return v___x_4251_;
}
}
}
}
}
}
}
else
{
lean_dec(v_fvarId_4179_);
lean_dec_ref_known(v_code_3460_, 4);
return v___x_4180_;
}
}
else
{
lean_object* v___x_4254_; 
lean_dec_ref_known(v_code_3460_, 4);
v___x_4254_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_4254_;
}
}
default: 
{
lean_object* v_fvarId_4255_; lean_object* v_k_4256_; lean_object* v___x_4257_; 
v_fvarId_4255_ = lean_ctor_get(v_code_3460_, 0);
v_k_4256_ = lean_ctor_get(v_code_3460_, 1);
lean_inc(v_fvarId_4255_);
v___x_4257_ = l_Lean_Compiler_LCNF_normFVarImp___redArg(v___y_3461_, v_fvarId_4255_, v_t_3459_);
if (lean_obj_tag(v___x_4257_) == 0)
{
lean_object* v_fvarId_4258_; lean_object* v___x_4259_; 
v_fvarId_4258_ = lean_ctor_get(v___x_4257_, 0);
lean_inc(v_fvarId_4258_);
lean_dec_ref_known(v___x_4257_, 1);
lean_inc_ref(v_k_4256_);
v___x_4259_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_3458_, v_t_3459_, v_k_4256_, v___y_3461_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
if (lean_obj_tag(v___x_4259_) == 0)
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4297_; 
v_a_4260_ = lean_ctor_get(v___x_4259_, 0);
v_isSharedCheck_4297_ = !lean_is_exclusive(v___x_4259_);
if (v_isSharedCheck_4297_ == 0)
{
v___x_4262_ = v___x_4259_;
v_isShared_4263_ = v_isSharedCheck_4297_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4259_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4297_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
size_t v___x_4264_; size_t v___x_4265_; uint8_t v___x_4266_; 
v___x_4264_ = lean_ptr_addr(v_fvarId_4255_);
v___x_4265_ = lean_ptr_addr(v_fvarId_4258_);
v___x_4266_ = lean_usize_dec_eq(v___x_4264_, v___x_4265_);
if (v___x_4266_ == 0)
{
lean_object* v___x_4268_; uint8_t v_isShared_4269_; uint8_t v_isSharedCheck_4276_; 
v_isSharedCheck_4276_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4276_ == 0)
{
lean_object* v_unused_4277_; lean_object* v_unused_4278_; 
v_unused_4277_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4277_);
v_unused_4278_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4278_);
v___x_4268_ = v_code_3460_;
v_isShared_4269_ = v_isSharedCheck_4276_;
goto v_resetjp_4267_;
}
else
{
lean_dec(v_code_3460_);
v___x_4268_ = lean_box(0);
v_isShared_4269_ = v_isSharedCheck_4276_;
goto v_resetjp_4267_;
}
v_resetjp_4267_:
{
lean_object* v___x_4271_; 
if (v_isShared_4269_ == 0)
{
lean_ctor_set(v___x_4268_, 1, v_a_4260_);
lean_ctor_set(v___x_4268_, 0, v_fvarId_4258_);
v___x_4271_ = v___x_4268_;
goto v_reusejp_4270_;
}
else
{
lean_object* v_reuseFailAlloc_4275_; 
v_reuseFailAlloc_4275_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4275_, 0, v_fvarId_4258_);
lean_ctor_set(v_reuseFailAlloc_4275_, 1, v_a_4260_);
v___x_4271_ = v_reuseFailAlloc_4275_;
goto v_reusejp_4270_;
}
v_reusejp_4270_:
{
lean_object* v___x_4273_; 
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4271_);
v___x_4273_ = v___x_4262_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v___x_4271_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
return v___x_4273_;
}
}
}
}
else
{
size_t v___x_4279_; size_t v___x_4280_; uint8_t v___x_4281_; 
v___x_4279_ = lean_ptr_addr(v_k_4256_);
v___x_4280_ = lean_ptr_addr(v_a_4260_);
v___x_4281_ = lean_usize_dec_eq(v___x_4279_, v___x_4280_);
if (v___x_4281_ == 0)
{
lean_object* v___x_4283_; uint8_t v_isShared_4284_; uint8_t v_isSharedCheck_4291_; 
v_isSharedCheck_4291_ = !lean_is_exclusive(v_code_3460_);
if (v_isSharedCheck_4291_ == 0)
{
lean_object* v_unused_4292_; lean_object* v_unused_4293_; 
v_unused_4292_ = lean_ctor_get(v_code_3460_, 1);
lean_dec(v_unused_4292_);
v_unused_4293_ = lean_ctor_get(v_code_3460_, 0);
lean_dec(v_unused_4293_);
v___x_4283_ = v_code_3460_;
v_isShared_4284_ = v_isSharedCheck_4291_;
goto v_resetjp_4282_;
}
else
{
lean_dec(v_code_3460_);
v___x_4283_ = lean_box(0);
v_isShared_4284_ = v_isSharedCheck_4291_;
goto v_resetjp_4282_;
}
v_resetjp_4282_:
{
lean_object* v___x_4286_; 
if (v_isShared_4284_ == 0)
{
lean_ctor_set(v___x_4283_, 1, v_a_4260_);
lean_ctor_set(v___x_4283_, 0, v_fvarId_4258_);
v___x_4286_ = v___x_4283_;
goto v_reusejp_4285_;
}
else
{
lean_object* v_reuseFailAlloc_4290_; 
v_reuseFailAlloc_4290_ = lean_alloc_ctor(13, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4290_, 0, v_fvarId_4258_);
lean_ctor_set(v_reuseFailAlloc_4290_, 1, v_a_4260_);
v___x_4286_ = v_reuseFailAlloc_4290_;
goto v_reusejp_4285_;
}
v_reusejp_4285_:
{
lean_object* v___x_4288_; 
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v___x_4286_);
v___x_4288_ = v___x_4262_;
goto v_reusejp_4287_;
}
else
{
lean_object* v_reuseFailAlloc_4289_; 
v_reuseFailAlloc_4289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4289_, 0, v___x_4286_);
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
else
{
lean_object* v___x_4295_; 
lean_dec(v_a_4260_);
lean_dec(v_fvarId_4258_);
if (v_isShared_4263_ == 0)
{
lean_ctor_set(v___x_4262_, 0, v_code_3460_);
v___x_4295_ = v___x_4262_;
goto v_reusejp_4294_;
}
else
{
lean_object* v_reuseFailAlloc_4296_; 
v_reuseFailAlloc_4296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4296_, 0, v_code_3460_);
v___x_4295_ = v_reuseFailAlloc_4296_;
goto v_reusejp_4294_;
}
v_reusejp_4294_:
{
return v___x_4295_;
}
}
}
}
}
else
{
lean_dec(v_fvarId_4258_);
lean_dec_ref_known(v_code_3460_, 2);
return v___x_4259_;
}
}
else
{
lean_object* v___x_4298_; 
lean_dec_ref_known(v_code_3460_, 2);
v___x_4298_ = l_Lean_Compiler_LCNF_mkReturnErased(v_pu_3458_, v___y_3462_, v___y_3463_, v___y_3464_, v___y_3465_);
return v___x_4298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp(uint8_t v_pu_4299_, uint8_t v_t_4300_, lean_object* v_decl_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_, lean_object* v___y_4306_){
_start:
{
lean_object* v_params_4308_; lean_object* v_type_4309_; lean_object* v_value_4310_; lean_object* v___x_4311_; lean_object* v___x_4312_; 
v_params_4308_ = lean_ctor_get(v_decl_4301_, 2);
v_type_4309_ = lean_ctor_get(v_decl_4301_, 3);
v_value_4310_ = lean_ctor_get(v_decl_4301_, 4);
lean_inc_ref(v_type_4309_);
v___x_4311_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_4299_, v___y_4302_, v_t_4300_, v_type_4309_);
lean_inc_ref(v_params_4308_);
v___x_4312_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_4299_, v_t_4300_, v_params_4308_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
if (lean_obj_tag(v___x_4312_) == 0)
{
lean_object* v_a_4313_; lean_object* v___x_4314_; 
v_a_4313_ = lean_ctor_get(v___x_4312_, 0);
lean_inc(v_a_4313_);
lean_dec_ref_known(v___x_4312_, 1);
lean_inc_ref(v_value_4310_);
v___x_4314_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_4299_, v_t_4300_, v_value_4310_, v___y_4302_, v___y_4303_, v___y_4304_, v___y_4305_, v___y_4306_);
if (lean_obj_tag(v___x_4314_) == 0)
{
lean_object* v_a_4315_; lean_object* v___x_4316_; 
v_a_4315_ = lean_ctor_get(v___x_4314_, 0);
lean_inc(v_a_4315_);
lean_dec_ref_known(v___x_4314_, 1);
v___x_4316_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v_pu_4299_, v_decl_4301_, v___x_4311_, v_a_4313_, v_a_4315_, v___y_4304_);
return v___x_4316_;
}
else
{
lean_object* v_a_4317_; lean_object* v___x_4319_; uint8_t v_isShared_4320_; uint8_t v_isSharedCheck_4324_; 
lean_dec(v_a_4313_);
lean_dec_ref(v___x_4311_);
lean_dec_ref(v_decl_4301_);
v_a_4317_ = lean_ctor_get(v___x_4314_, 0);
v_isSharedCheck_4324_ = !lean_is_exclusive(v___x_4314_);
if (v_isSharedCheck_4324_ == 0)
{
v___x_4319_ = v___x_4314_;
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
else
{
lean_inc(v_a_4317_);
lean_dec(v___x_4314_);
v___x_4319_ = lean_box(0);
v_isShared_4320_ = v_isSharedCheck_4324_;
goto v_resetjp_4318_;
}
v_resetjp_4318_:
{
lean_object* v___x_4322_; 
if (v_isShared_4320_ == 0)
{
v___x_4322_ = v___x_4319_;
goto v_reusejp_4321_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v_a_4317_);
v___x_4322_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4321_;
}
v_reusejp_4321_:
{
return v___x_4322_;
}
}
}
}
else
{
lean_object* v_a_4325_; lean_object* v___x_4327_; uint8_t v_isShared_4328_; uint8_t v_isSharedCheck_4332_; 
lean_dec_ref(v___x_4311_);
lean_dec_ref(v_decl_4301_);
v_a_4325_ = lean_ctor_get(v___x_4312_, 0);
v_isSharedCheck_4332_ = !lean_is_exclusive(v___x_4312_);
if (v_isSharedCheck_4332_ == 0)
{
v___x_4327_ = v___x_4312_;
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
else
{
lean_inc(v_a_4325_);
lean_dec(v___x_4312_);
v___x_4327_ = lean_box(0);
v_isShared_4328_ = v_isSharedCheck_4332_;
goto v_resetjp_4326_;
}
v_resetjp_4326_:
{
lean_object* v___x_4330_; 
if (v_isShared_4328_ == 0)
{
v___x_4330_ = v___x_4327_;
goto v_reusejp_4329_;
}
else
{
lean_object* v_reuseFailAlloc_4331_; 
v_reuseFailAlloc_4331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4331_, 0, v_a_4325_);
v___x_4330_ = v_reuseFailAlloc_4331_;
goto v_reusejp_4329_;
}
v_reusejp_4329_:
{
return v___x_4330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDeclImp___boxed(lean_object* v_pu_4333_, lean_object* v_t_4334_, lean_object* v_decl_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
uint8_t v_pu_boxed_4342_; uint8_t v_t_boxed_4343_; lean_object* v_res_4344_; 
v_pu_boxed_4342_ = lean_unbox(v_pu_4333_);
v_t_boxed_4343_ = lean_unbox(v_t_4334_);
v_res_4344_ = l_Lean_Compiler_LCNF_normFunDeclImp(v_pu_boxed_4342_, v_t_boxed_4343_, v_decl_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_);
lean_dec(v___y_4340_);
lean_dec_ref(v___y_4339_);
lean_dec(v___y_4338_);
lean_dec_ref(v___y_4337_);
lean_dec_ref(v___y_4336_);
return v_res_4344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4___boxed(lean_object* v_pu_4345_, lean_object* v_t_4346_, lean_object* v_i_4347_, lean_object* v_as_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
uint8_t v_pu_boxed_4355_; uint8_t v_t_boxed_4356_; lean_object* v_res_4357_; 
v_pu_boxed_4355_ = lean_unbox(v_pu_4345_);
v_t_boxed_4356_ = lean_unbox(v_t_4346_);
v_res_4357_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normCodeImp_spec__4(v_pu_boxed_4355_, v_t_boxed_4356_, v_i_4347_, v_as_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_);
lean_dec(v___y_4353_);
lean_dec_ref(v___y_4352_);
lean_dec(v___y_4351_);
lean_dec_ref(v___y_4350_);
lean_dec_ref(v___y_4349_);
return v_res_4357_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCodeImp___boxed(lean_object* v_pu_4358_, lean_object* v_t_4359_, lean_object* v_code_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_){
_start:
{
uint8_t v_pu_boxed_4367_; uint8_t v_t_boxed_4368_; lean_object* v_res_4369_; 
v_pu_boxed_4367_ = lean_unbox(v_pu_4358_);
v_t_boxed_4368_ = lean_unbox(v_t_4359_);
v_res_4369_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_boxed_4367_, v_t_boxed_4368_, v_code_4360_, v___y_4361_, v___y_4362_, v___y_4363_, v___y_4364_, v___y_4365_);
lean_dec(v___y_4365_);
lean_dec_ref(v___y_4364_);
lean_dec(v___y_4363_);
lean_dec_ref(v___y_4362_);
lean_dec_ref(v___y_4361_);
return v_res_4369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2(uint8_t v_pu_4370_, uint8_t v_t_4371_, uint8_t v_pu_4372_, uint8_t v_t_4373_, lean_object* v_decl_4374_, lean_object* v___y_4375_, lean_object* v___y_4376_, lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_){
_start:
{
lean_object* v___x_4381_; 
v___x_4381_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___redArg(v_pu_4372_, v_t_4373_, v_decl_4374_, v___y_4375_, v___y_4377_);
return v___x_4381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2___boxed(lean_object* v_pu_4382_, lean_object* v_t_4383_, lean_object* v_pu_4384_, lean_object* v_t_4385_, lean_object* v_decl_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_, lean_object* v___y_4392_){
_start:
{
uint8_t v_pu_boxed_4393_; uint8_t v_t_boxed_4394_; uint8_t v_pu_boxed_4395_; uint8_t v_t_boxed_4396_; lean_object* v_res_4397_; 
v_pu_boxed_4393_ = lean_unbox(v_pu_4382_);
v_t_boxed_4394_ = lean_unbox(v_t_4383_);
v_pu_boxed_4395_ = lean_unbox(v_pu_4384_);
v_t_boxed_4396_ = lean_unbox(v_t_4385_);
v_res_4397_ = l_Lean_Compiler_LCNF_normLetDecl___at___00Lean_Compiler_LCNF_normCodeImp_spec__2(v_pu_boxed_4393_, v_t_boxed_4394_, v_pu_boxed_4395_, v_t_boxed_4396_, v_decl_4386_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_, v___y_4391_);
lean_dec(v___y_4391_);
lean_dec_ref(v___y_4390_);
lean_dec(v___y_4389_);
lean_dec_ref(v___y_4388_);
lean_dec_ref(v___y_4387_);
return v_res_4397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3(uint8_t v_pu_4398_, uint8_t v_t_4399_, uint8_t v_pu_4400_, uint8_t v_t_4401_, lean_object* v_args_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_){
_start:
{
lean_object* v___x_4409_; 
v___x_4409_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___redArg(v_pu_4400_, v_t_4401_, v_args_4402_, v___y_4403_);
return v___x_4409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3___boxed(lean_object* v_pu_4410_, lean_object* v_t_4411_, lean_object* v_pu_4412_, lean_object* v_t_4413_, lean_object* v_args_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_, lean_object* v___y_4418_, lean_object* v___y_4419_, lean_object* v___y_4420_){
_start:
{
uint8_t v_pu_boxed_4421_; uint8_t v_t_boxed_4422_; uint8_t v_pu_boxed_4423_; uint8_t v_t_boxed_4424_; lean_object* v_res_4425_; 
v_pu_boxed_4421_ = lean_unbox(v_pu_4410_);
v_t_boxed_4422_ = lean_unbox(v_t_4411_);
v_pu_boxed_4423_ = lean_unbox(v_pu_4412_);
v_t_boxed_4424_ = lean_unbox(v_t_4413_);
v_res_4425_ = l_Lean_Compiler_LCNF_normArgs___at___00Lean_Compiler_LCNF_normCodeImp_spec__3(v_pu_boxed_4421_, v_t_boxed_4422_, v_pu_boxed_4423_, v_t_boxed_4424_, v_args_4414_, v___y_4415_, v___y_4416_, v___y_4417_, v___y_4418_, v___y_4419_);
lean_dec(v___y_4419_);
lean_dec_ref(v___y_4418_);
lean_dec(v___y_4417_);
lean_dec_ref(v___y_4416_);
lean_dec_ref(v___y_4415_);
return v_res_4425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0(uint8_t v_pu_4426_, uint8_t v_t_4427_, uint8_t v_pu_4428_, uint8_t v_t_4429_, lean_object* v_ps_4430_, lean_object* v___y_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_){
_start:
{
lean_object* v___x_4437_; 
v___x_4437_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___redArg(v_pu_4428_, v_t_4429_, v_ps_4430_, v___y_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
return v___x_4437_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0___boxed(lean_object* v_pu_4438_, lean_object* v_t_4439_, lean_object* v_pu_4440_, lean_object* v_t_4441_, lean_object* v_ps_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_){
_start:
{
uint8_t v_pu_boxed_4449_; uint8_t v_t_boxed_4450_; uint8_t v_pu_boxed_4451_; uint8_t v_t_boxed_4452_; lean_object* v_res_4453_; 
v_pu_boxed_4449_ = lean_unbox(v_pu_4438_);
v_t_boxed_4450_ = lean_unbox(v_t_4439_);
v_pu_boxed_4451_ = lean_unbox(v_pu_4440_);
v_t_boxed_4452_ = lean_unbox(v_t_4441_);
v_res_4453_ = l_Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0(v_pu_boxed_4449_, v_t_boxed_4450_, v_pu_boxed_4451_, v_t_boxed_4452_, v_ps_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_);
lean_dec(v___y_4447_);
lean_dec_ref(v___y_4446_);
lean_dec(v___y_4445_);
lean_dec_ref(v___y_4444_);
lean_dec_ref(v___y_4443_);
return v_res_4453_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0(uint8_t v_pu_4454_, uint8_t v_t_4455_, lean_object* v_i_4456_, lean_object* v_as_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
lean_object* v___x_4464_; 
v___x_4464_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___redArg(v_pu_4454_, v_t_4455_, v_i_4456_, v_as_4457_, v___y_4458_, v___y_4460_);
return v___x_4464_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0___boxed(lean_object* v_pu_4465_, lean_object* v_t_4466_, lean_object* v_i_4467_, lean_object* v_as_4468_, lean_object* v___y_4469_, lean_object* v___y_4470_, lean_object* v___y_4471_, lean_object* v___y_4472_, lean_object* v___y_4473_, lean_object* v___y_4474_){
_start:
{
uint8_t v_pu_boxed_4475_; uint8_t v_t_boxed_4476_; lean_object* v_res_4477_; 
v_pu_boxed_4475_ = lean_unbox(v_pu_4465_);
v_t_boxed_4476_ = lean_unbox(v_t_4466_);
v_res_4477_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00Lean_Compiler_LCNF_normParams___at___00Lean_Compiler_LCNF_normFunDeclImp_spec__0_spec__0(v_pu_boxed_4475_, v_t_boxed_4476_, v_i_4467_, v_as_4468_, v___y_4469_, v___y_4470_, v___y_4471_, v___y_4472_, v___y_4473_);
lean_dec(v___y_4473_);
lean_dec_ref(v___y_4472_);
lean_dec(v___y_4471_);
lean_dec_ref(v___y_4470_);
lean_dec_ref(v___y_4469_);
return v_res_4477_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0(uint8_t v_pu_4478_, uint8_t v_t_4479_, lean_object* v_decl_4480_, lean_object* v_inst_4481_, lean_object* v_____do__lift_4482_){
_start:
{
lean_object* v___x_4483_; lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; 
v___x_4483_ = lean_box(v_pu_4478_);
v___x_4484_ = lean_box(v_t_4479_);
v___x_4485_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFunDeclImp___boxed), 9, 4);
lean_closure_set(v___x_4485_, 0, v___x_4483_);
lean_closure_set(v___x_4485_, 1, v___x_4484_);
lean_closure_set(v___x_4485_, 2, v_decl_4480_);
lean_closure_set(v___x_4485_, 3, v_____do__lift_4482_);
v___x_4486_ = lean_apply_2(v_inst_4481_, lean_box(0), v___x_4485_);
return v___x_4486_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed(lean_object* v_pu_4487_, lean_object* v_t_4488_, lean_object* v_decl_4489_, lean_object* v_inst_4490_, lean_object* v_____do__lift_4491_){
_start:
{
uint8_t v_pu_boxed_4492_; uint8_t v_t_boxed_4493_; lean_object* v_res_4494_; 
v_pu_boxed_4492_ = lean_unbox(v_pu_4487_);
v_t_boxed_4493_ = lean_unbox(v_t_4488_);
v_res_4494_ = l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0(v_pu_boxed_4492_, v_t_boxed_4493_, v_decl_4489_, v_inst_4490_, v_____do__lift_4491_);
return v_res_4494_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg(uint8_t v_pu_4495_, uint8_t v_t_4496_, lean_object* v_inst_4497_, lean_object* v_inst_4498_, lean_object* v_inst_4499_, lean_object* v_decl_4500_){
_start:
{
lean_object* v_toBind_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___f_4504_; lean_object* v___x_4505_; 
v_toBind_4501_ = lean_ctor_get(v_inst_4498_, 1);
lean_inc(v_toBind_4501_);
lean_dec_ref(v_inst_4498_);
v___x_4502_ = lean_box(v_pu_4495_);
v___x_4503_ = lean_box(v_t_4496_);
v___f_4504_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4504_, 0, v___x_4502_);
lean_closure_set(v___f_4504_, 1, v___x_4503_);
lean_closure_set(v___f_4504_, 2, v_decl_4500_);
lean_closure_set(v___f_4504_, 3, v_inst_4497_);
v___x_4505_ = lean_apply_4(v_toBind_4501_, lean_box(0), lean_box(0), v_inst_4499_, v___f_4504_);
return v___x_4505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___redArg___boxed(lean_object* v_pu_4506_, lean_object* v_t_4507_, lean_object* v_inst_4508_, lean_object* v_inst_4509_, lean_object* v_inst_4510_, lean_object* v_decl_4511_){
_start:
{
uint8_t v_pu_boxed_4512_; uint8_t v_t_boxed_4513_; lean_object* v_res_4514_; 
v_pu_boxed_4512_ = lean_unbox(v_pu_4506_);
v_t_boxed_4513_ = lean_unbox(v_t_4507_);
v_res_4514_ = l_Lean_Compiler_LCNF_normFunDecl___redArg(v_pu_boxed_4512_, v_t_boxed_4513_, v_inst_4508_, v_inst_4509_, v_inst_4510_, v_decl_4511_);
return v_res_4514_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl(lean_object* v_m_4515_, uint8_t v_pu_4516_, uint8_t v_t_4517_, lean_object* v_inst_4518_, lean_object* v_inst_4519_, lean_object* v_inst_4520_, lean_object* v_decl_4521_){
_start:
{
lean_object* v_toBind_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___f_4525_; lean_object* v___x_4526_; 
v_toBind_4522_ = lean_ctor_get(v_inst_4519_, 1);
lean_inc(v_toBind_4522_);
lean_dec_ref(v_inst_4519_);
v___x_4523_ = lean_box(v_pu_4516_);
v___x_4524_ = lean_box(v_t_4517_);
v___f_4525_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normFunDecl___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4525_, 0, v___x_4523_);
lean_closure_set(v___f_4525_, 1, v___x_4524_);
lean_closure_set(v___f_4525_, 2, v_decl_4521_);
lean_closure_set(v___f_4525_, 3, v_inst_4518_);
v___x_4526_ = lean_apply_4(v_toBind_4522_, lean_box(0), lean_box(0), v_inst_4520_, v___f_4525_);
return v___x_4526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normFunDecl___boxed(lean_object* v_m_4527_, lean_object* v_pu_4528_, lean_object* v_t_4529_, lean_object* v_inst_4530_, lean_object* v_inst_4531_, lean_object* v_inst_4532_, lean_object* v_decl_4533_){
_start:
{
uint8_t v_pu_boxed_4534_; uint8_t v_t_boxed_4535_; lean_object* v_res_4536_; 
v_pu_boxed_4534_ = lean_unbox(v_pu_4528_);
v_t_boxed_4535_ = lean_unbox(v_t_4529_);
v_res_4536_ = l_Lean_Compiler_LCNF_normFunDecl(v_m_4527_, v_pu_boxed_4534_, v_t_boxed_4535_, v_inst_4530_, v_inst_4531_, v_inst_4532_, v_decl_4533_);
return v_res_4536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0(uint8_t v_pu_4537_, uint8_t v_t_4538_, lean_object* v_code_4539_, lean_object* v_inst_4540_, lean_object* v_____do__lift_4541_){
_start:
{
lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; 
v___x_4542_ = lean_box(v_pu_4537_);
v___x_4543_ = lean_box(v_t_4538_);
v___x_4544_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normCodeImp___boxed), 9, 4);
lean_closure_set(v___x_4544_, 0, v___x_4542_);
lean_closure_set(v___x_4544_, 1, v___x_4543_);
lean_closure_set(v___x_4544_, 2, v_code_4539_);
lean_closure_set(v___x_4544_, 3, v_____do__lift_4541_);
v___x_4545_ = lean_apply_2(v_inst_4540_, lean_box(0), v___x_4544_);
return v___x_4545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed(lean_object* v_pu_4546_, lean_object* v_t_4547_, lean_object* v_code_4548_, lean_object* v_inst_4549_, lean_object* v_____do__lift_4550_){
_start:
{
uint8_t v_pu_boxed_4551_; uint8_t v_t_boxed_4552_; lean_object* v_res_4553_; 
v_pu_boxed_4551_ = lean_unbox(v_pu_4546_);
v_t_boxed_4552_ = lean_unbox(v_t_4547_);
v_res_4553_ = l_Lean_Compiler_LCNF_normCode___redArg___lam__0(v_pu_boxed_4551_, v_t_boxed_4552_, v_code_4548_, v_inst_4549_, v_____do__lift_4550_);
return v_res_4553_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg(uint8_t v_pu_4554_, uint8_t v_t_4555_, lean_object* v_inst_4556_, lean_object* v_inst_4557_, lean_object* v_inst_4558_, lean_object* v_code_4559_){
_start:
{
lean_object* v_toBind_4560_; lean_object* v___x_4561_; lean_object* v___x_4562_; lean_object* v___f_4563_; lean_object* v___x_4564_; 
v_toBind_4560_ = lean_ctor_get(v_inst_4557_, 1);
lean_inc(v_toBind_4560_);
lean_dec_ref(v_inst_4557_);
v___x_4561_ = lean_box(v_pu_4554_);
v___x_4562_ = lean_box(v_t_4555_);
v___f_4563_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4563_, 0, v___x_4561_);
lean_closure_set(v___f_4563_, 1, v___x_4562_);
lean_closure_set(v___f_4563_, 2, v_code_4559_);
lean_closure_set(v___f_4563_, 3, v_inst_4556_);
v___x_4564_ = lean_apply_4(v_toBind_4560_, lean_box(0), lean_box(0), v_inst_4558_, v___f_4563_);
return v___x_4564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___redArg___boxed(lean_object* v_pu_4565_, lean_object* v_t_4566_, lean_object* v_inst_4567_, lean_object* v_inst_4568_, lean_object* v_inst_4569_, lean_object* v_code_4570_){
_start:
{
uint8_t v_pu_boxed_4571_; uint8_t v_t_boxed_4572_; lean_object* v_res_4573_; 
v_pu_boxed_4571_ = lean_unbox(v_pu_4565_);
v_t_boxed_4572_ = lean_unbox(v_t_4566_);
v_res_4573_ = l_Lean_Compiler_LCNF_normCode___redArg(v_pu_boxed_4571_, v_t_boxed_4572_, v_inst_4567_, v_inst_4568_, v_inst_4569_, v_code_4570_);
return v_res_4573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode(lean_object* v_m_4574_, uint8_t v_pu_4575_, uint8_t v_t_4576_, lean_object* v_inst_4577_, lean_object* v_inst_4578_, lean_object* v_inst_4579_, lean_object* v_code_4580_){
_start:
{
lean_object* v_toBind_4581_; lean_object* v___x_4582_; lean_object* v___x_4583_; lean_object* v___f_4584_; lean_object* v___x_4585_; 
v_toBind_4581_ = lean_ctor_get(v_inst_4578_, 1);
lean_inc(v_toBind_4581_);
lean_dec_ref(v_inst_4578_);
v___x_4582_ = lean_box(v_pu_4575_);
v___x_4583_ = lean_box(v_t_4576_);
v___f_4584_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_normCode___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_4584_, 0, v___x_4582_);
lean_closure_set(v___f_4584_, 1, v___x_4583_);
lean_closure_set(v___f_4584_, 2, v_code_4580_);
lean_closure_set(v___f_4584_, 3, v_inst_4577_);
v___x_4585_ = lean_apply_4(v_toBind_4581_, lean_box(0), lean_box(0), v_inst_4579_, v___f_4584_);
return v___x_4585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_normCode___boxed(lean_object* v_m_4586_, lean_object* v_pu_4587_, lean_object* v_t_4588_, lean_object* v_inst_4589_, lean_object* v_inst_4590_, lean_object* v_inst_4591_, lean_object* v_code_4592_){
_start:
{
uint8_t v_pu_boxed_4593_; uint8_t v_t_boxed_4594_; lean_object* v_res_4595_; 
v_pu_boxed_4593_ = lean_unbox(v_pu_4587_);
v_t_boxed_4594_ = lean_unbox(v_t_4588_);
v_res_4595_ = l_Lean_Compiler_LCNF_normCode(v_m_4586_, v_pu_boxed_4593_, v_t_boxed_4594_, v_inst_4589_, v_inst_4590_, v_inst_4591_, v_code_4592_);
return v_res_4595_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg(uint8_t v_pu_4596_, lean_object* v_e_4597_, lean_object* v_s_4598_, uint8_t v_translator_4599_){
_start:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4601_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_normExprImp_go(v_pu_4596_, v_s_4598_, v_translator_4599_, v_e_4597_);
v___x_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4601_);
return v___x_4602_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___redArg___boxed(lean_object* v_pu_4603_, lean_object* v_e_4604_, lean_object* v_s_4605_, lean_object* v_translator_4606_, lean_object* v___y_4607_){
_start:
{
uint8_t v_pu_boxed_4608_; uint8_t v_translator_boxed_4609_; lean_object* v_res_4610_; 
v_pu_boxed_4608_ = lean_unbox(v_pu_4603_);
v_translator_boxed_4609_ = lean_unbox(v_translator_4606_);
v_res_4610_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v_pu_boxed_4608_, v_e_4604_, v_s_4605_, v_translator_boxed_4609_);
lean_dec_ref(v_s_4605_);
return v_res_4610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars(uint8_t v_pu_4611_, lean_object* v_e_4612_, lean_object* v_s_4613_, uint8_t v_translator_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_){
_start:
{
lean_object* v___x_4620_; 
v___x_4620_ = l_Lean_Compiler_LCNF_replaceExprFVars___redArg(v_pu_4611_, v_e_4612_, v_s_4613_, v_translator_4614_);
return v___x_4620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceExprFVars___boxed(lean_object* v_pu_4621_, lean_object* v_e_4622_, lean_object* v_s_4623_, lean_object* v_translator_4624_, lean_object* v___y_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_){
_start:
{
uint8_t v_pu_boxed_4630_; uint8_t v_translator_boxed_4631_; lean_object* v_res_4632_; 
v_pu_boxed_4630_ = lean_unbox(v_pu_4621_);
v_translator_boxed_4631_ = lean_unbox(v_translator_4624_);
v_res_4632_ = l_Lean_Compiler_LCNF_replaceExprFVars(v_pu_boxed_4630_, v_e_4622_, v_s_4623_, v_translator_boxed_4631_, v___y_4625_, v___y_4626_, v___y_4627_, v___y_4628_);
lean_dec(v___y_4628_);
lean_dec_ref(v___y_4627_);
lean_dec(v___y_4626_);
lean_dec_ref(v___y_4625_);
lean_dec_ref(v_s_4623_);
return v_res_4632_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t v_pu_4633_, lean_object* v_code_4634_, lean_object* v_s_4635_, uint8_t v_translator_4636_, lean_object* v___y_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_){
_start:
{
lean_object* v___x_4642_; 
v___x_4642_ = l_Lean_Compiler_LCNF_normCodeImp(v_pu_4633_, v_translator_4636_, v_code_4634_, v_s_4635_, v___y_4637_, v___y_4638_, v___y_4639_, v___y_4640_);
return v___x_4642_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_replaceFVars___boxed(lean_object* v_pu_4643_, lean_object* v_code_4644_, lean_object* v_s_4645_, lean_object* v_translator_4646_, lean_object* v___y_4647_, lean_object* v___y_4648_, lean_object* v___y_4649_, lean_object* v___y_4650_, lean_object* v___y_4651_){
_start:
{
uint8_t v_pu_boxed_4652_; uint8_t v_translator_boxed_4653_; lean_object* v_res_4654_; 
v_pu_boxed_4652_ = lean_unbox(v_pu_4643_);
v_translator_boxed_4653_ = lean_unbox(v_translator_4646_);
v_res_4654_ = l_Lean_Compiler_LCNF_replaceFVars(v_pu_boxed_4652_, v_code_4644_, v_s_4645_, v_translator_boxed_4653_, v___y_4647_, v___y_4648_, v___y_4649_, v___y_4650_);
lean_dec(v___y_4650_);
lean_dec_ref(v___y_4649_);
lean_dec(v___y_4648_);
lean_dec_ref(v___y_4647_);
lean_dec_ref(v_s_4645_);
return v_res_4654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg(lean_object* v___y_4658_){
_start:
{
lean_object* v___x_4660_; lean_object* v___x_4661_; 
v___x_4660_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkFreshJpName___redArg___closed__1));
v___x_4661_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_4660_, v___y_4658_);
return v___x_4661_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg___boxed(lean_object* v___y_4662_, lean_object* v___y_4663_){
_start:
{
lean_object* v_res_4664_; 
v_res_4664_ = l_Lean_Compiler_LCNF_mkFreshJpName___redArg(v___y_4662_);
lean_dec(v___y_4662_);
return v_res_4664_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName(lean_object* v___y_4665_, lean_object* v___y_4666_, lean_object* v___y_4667_, lean_object* v___y_4668_){
_start:
{
lean_object* v___x_4670_; 
v___x_4670_ = l_Lean_Compiler_LCNF_mkFreshJpName___redArg(v___y_4666_);
return v___x_4670_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___boxed(lean_object* v___y_4671_, lean_object* v___y_4672_, lean_object* v___y_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_){
_start:
{
lean_object* v_res_4676_; 
v_res_4676_ = l_Lean_Compiler_LCNF_mkFreshJpName(v___y_4671_, v___y_4672_, v___y_4673_, v___y_4674_);
lean_dec(v___y_4674_);
lean_dec_ref(v___y_4673_);
lean_dec(v___y_4672_);
lean_dec_ref(v___y_4671_);
return v_res_4676_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t v_pu_4677_, lean_object* v_type_4678_, uint8_t v_borrow_4679_, lean_object* v___y_4680_, lean_object* v___y_4681_, lean_object* v___y_4682_, lean_object* v___y_4683_){
_start:
{
lean_object* v___x_4685_; lean_object* v___x_4686_; lean_object* v_a_4687_; lean_object* v___x_4688_; 
v___x_4685_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkParam___closed__1));
v___x_4686_ = l_Lean_Compiler_LCNF_mkFreshBinderName___redArg(v___x_4685_, v___y_4681_);
v_a_4687_ = lean_ctor_get(v___x_4686_, 0);
lean_inc(v_a_4687_);
lean_dec_ref(v___x_4686_);
v___x_4688_ = l_Lean_Compiler_LCNF_mkParam(v_pu_4677_, v_a_4687_, v_type_4678_, v_borrow_4679_, v___y_4680_, v___y_4681_, v___y_4682_, v___y_4683_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkAuxParam___boxed(lean_object* v_pu_4689_, lean_object* v_type_4690_, lean_object* v_borrow_4691_, lean_object* v___y_4692_, lean_object* v___y_4693_, lean_object* v___y_4694_, lean_object* v___y_4695_, lean_object* v___y_4696_){
_start:
{
uint8_t v_pu_boxed_4697_; uint8_t v_borrow_boxed_4698_; lean_object* v_res_4699_; 
v_pu_boxed_4697_ = lean_unbox(v_pu_4689_);
v_borrow_boxed_4698_ = lean_unbox(v_borrow_4691_);
v_res_4699_ = l_Lean_Compiler_LCNF_mkAuxParam(v_pu_boxed_4697_, v_type_4690_, v_borrow_boxed_4698_, v___y_4692_, v___y_4693_, v___y_4694_, v___y_4695_);
lean_dec(v___y_4695_);
lean_dec_ref(v___y_4694_);
lean_dec(v___y_4693_);
lean_dec_ref(v___y_4692_);
return v_res_4699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg(lean_object* v___y_4700_){
_start:
{
lean_object* v_config_4702_; lean_object* v___x_4703_; 
v_config_4702_ = lean_ctor_get(v___y_4700_, 0);
lean_inc_ref(v_config_4702_);
v___x_4703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4703_, 0, v_config_4702_);
return v___x_4703_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___redArg___boxed(lean_object* v___y_4704_, lean_object* v___y_4705_){
_start:
{
lean_object* v_res_4706_; 
v_res_4706_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_4704_);
lean_dec_ref(v___y_4704_);
return v_res_4706_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig(lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_){
_start:
{
lean_object* v___x_4712_; 
v___x_4712_ = l_Lean_Compiler_LCNF_getConfig___redArg(v___y_4707_);
return v___x_4712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getConfig___boxed(lean_object* v___y_4713_, lean_object* v___y_4714_, lean_object* v___y_4715_, lean_object* v___y_4716_, lean_object* v___y_4717_){
_start:
{
lean_object* v_res_4718_; 
v_res_4718_ = l_Lean_Compiler_LCNF_getConfig(v___y_4713_, v___y_4714_, v___y_4715_, v___y_4716_);
lean_dec(v___y_4716_);
lean_dec_ref(v___y_4715_);
lean_dec(v___y_4714_);
lean_dec_ref(v___y_4713_);
return v_res_4718_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg(lean_object* v_x_4719_, lean_object* v_s_4720_, uint8_t v_phase_4721_, lean_object* v___y_4722_, lean_object* v___y_4723_){
_start:
{
lean_object* v_toCold_4725_; lean_object* v_options_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; 
v_toCold_4725_ = lean_ctor_get(v___y_4722_, 0);
v_options_4726_ = lean_ctor_get(v_toCold_4725_, 2);
v___x_4727_ = l_Lean_Compiler_LCNF_toConfigOptions(v_options_4726_);
v___x_4728_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_4728_, 0, v___x_4727_);
lean_ctor_set_uint8(v___x_4728_, sizeof(void*)*1, v_phase_4721_);
v___x_4729_ = lean_st_mk_ref(v_s_4720_);
lean_inc(v___y_4723_);
lean_inc_ref(v___y_4722_);
lean_inc(v___x_4729_);
v___x_4730_ = lean_apply_5(v_x_4719_, v___x_4728_, v___x_4729_, v___y_4722_, v___y_4723_, lean_box(0));
if (lean_obj_tag(v___x_4730_) == 0)
{
lean_object* v_a_4731_; lean_object* v___x_4733_; uint8_t v_isShared_4734_; uint8_t v_isSharedCheck_4739_; 
v_a_4731_ = lean_ctor_get(v___x_4730_, 0);
v_isSharedCheck_4739_ = !lean_is_exclusive(v___x_4730_);
if (v_isSharedCheck_4739_ == 0)
{
v___x_4733_ = v___x_4730_;
v_isShared_4734_ = v_isSharedCheck_4739_;
goto v_resetjp_4732_;
}
else
{
lean_inc(v_a_4731_);
lean_dec(v___x_4730_);
v___x_4733_ = lean_box(0);
v_isShared_4734_ = v_isSharedCheck_4739_;
goto v_resetjp_4732_;
}
v_resetjp_4732_:
{
lean_object* v___x_4735_; lean_object* v___x_4737_; 
v___x_4735_ = lean_st_ref_get(v___x_4729_);
lean_dec(v___x_4729_);
lean_dec(v___x_4735_);
if (v_isShared_4734_ == 0)
{
v___x_4737_ = v___x_4733_;
goto v_reusejp_4736_;
}
else
{
lean_object* v_reuseFailAlloc_4738_; 
v_reuseFailAlloc_4738_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4738_, 0, v_a_4731_);
v___x_4737_ = v_reuseFailAlloc_4738_;
goto v_reusejp_4736_;
}
v_reusejp_4736_:
{
return v___x_4737_;
}
}
}
else
{
lean_dec(v___x_4729_);
return v___x_4730_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___redArg___boxed(lean_object* v_x_4740_, lean_object* v_s_4741_, lean_object* v_phase_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_){
_start:
{
uint8_t v_phase_boxed_4746_; lean_object* v_res_4747_; 
v_phase_boxed_4746_ = lean_unbox(v_phase_4742_);
v_res_4747_ = l_Lean_Compiler_LCNF_CompilerM_run___redArg(v_x_4740_, v_s_4741_, v_phase_boxed_4746_, v___y_4743_, v___y_4744_);
lean_dec(v___y_4744_);
lean_dec_ref(v___y_4743_);
return v_res_4747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run(lean_object* v_00_u03b1_4748_, lean_object* v_x_4749_, lean_object* v_s_4750_, uint8_t v_phase_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_){
_start:
{
lean_object* v___x_4755_; 
v___x_4755_ = l_Lean_Compiler_LCNF_CompilerM_run___redArg(v_x_4749_, v_s_4750_, v_phase_4751_, v___y_4752_, v___y_4753_);
return v___x_4755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CompilerM_run___boxed(lean_object* v_00_u03b1_4756_, lean_object* v_x_4757_, lean_object* v_s_4758_, lean_object* v_phase_4759_, lean_object* v___y_4760_, lean_object* v___y_4761_, lean_object* v___y_4762_){
_start:
{
uint8_t v_phase_boxed_4763_; lean_object* v_res_4764_; 
v_phase_boxed_4763_ = lean_unbox(v_phase_4759_);
v_res_4764_ = l_Lean_Compiler_LCNF_CompilerM_run(v_00_u03b1_4756_, v_x_4757_, v_s_4758_, v_phase_boxed_4763_, v___y_4760_, v___y_4761_);
lean_dec(v___y_4761_);
lean_dec_ref(v___y_4760_);
return v_res_4764_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_4765_; 
v___x_4765_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_4765_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg(){
_start:
{
lean_object* v___x_4767_; 
v___x_4767_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0, &l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0);
return v___x_4767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___boxed(lean_object* v___dummy_4768_){
_start:
{
lean_object* v_res_4769_; 
v_res_4769_ = l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg();
return v_res_4769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default(lean_object* v_00_u03b1_4770_, lean_object* v_00_u03b2_4771_, lean_object* v_inst_4772_, lean_object* v_inst_4773_){
_start:
{
lean_object* v___x_4774_; 
v___x_4774_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0, &l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0);
return v___x_4774_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___boxed(lean_object* v_00_u03b1_4775_, lean_object* v_00_u03b2_4776_, lean_object* v_inst_4777_, lean_object* v_inst_4778_){
_start:
{
lean_object* v_res_4779_; 
v_res_4779_ = l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default(v_00_u03b1_4775_, v_00_u03b2_4776_, v_inst_4777_, v_inst_4778_);
lean_dec_ref(v_inst_4778_);
lean_dec_ref(v_inst_4777_);
return v_res_4779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___redArg(){
_start:
{
lean_object* v___x_4781_; 
v___x_4781_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0, &l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0);
return v___x_4781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___redArg___boxed(lean_object* v___dummy_4782_){
_start:
{
lean_object* v_res_4783_; 
v_res_4783_ = l_Lean_Compiler_LCNF_instInhabitedCacheExtension___redArg();
return v_res_4783_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension(lean_object* v_a_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_){
_start:
{
lean_object* v___x_4788_; 
v___x_4788_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0, &l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedCacheExtension_default___redArg___closed__0);
return v___x_4788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedCacheExtension___boxed(lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_, lean_object* v_a_4792_){
_start:
{
lean_object* v_res_4793_; 
v_res_4793_ = l_Lean_Compiler_LCNF_instInhabitedCacheExtension(v_a_4789_, v_a_4790_, v_a_4791_, v_a_4792_);
lean_dec_ref(v_a_4792_);
lean_dec_ref(v_a_4791_);
return v_res_4793_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; 
v___x_4797_ = ((lean_object*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__2));
v___x_4798_ = lean_unsigned_to_nat(14u);
v___x_4799_ = lean_unsigned_to_nat(178u);
v___x_4800_ = ((lean_object*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__1));
v___x_4801_ = ((lean_object*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__0));
v___x_4802_ = l_mkPanicMessageWithDecl(v___x_4801_, v___x_4800_, v___x_4799_, v___x_4798_, v___x_4797_);
return v___x_4802_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0(lean_object* v_inst_4803_, lean_object* v_inst_4804_, lean_object* v_snd_4805_, lean_object* v_inst_4806_, lean_object* v_s_4807_, lean_object* v_e_4808_){
_start:
{
lean_object* v_fst_4809_; lean_object* v_snd_4810_; lean_object* v___x_4812_; uint8_t v_isShared_4813_; uint8_t v_isSharedCheck_4825_; 
v_fst_4809_ = lean_ctor_get(v_s_4807_, 0);
v_snd_4810_ = lean_ctor_get(v_s_4807_, 1);
v_isSharedCheck_4825_ = !lean_is_exclusive(v_s_4807_);
if (v_isSharedCheck_4825_ == 0)
{
v___x_4812_ = v_s_4807_;
v_isShared_4813_ = v_isSharedCheck_4825_;
goto v_resetjp_4811_;
}
else
{
lean_inc(v_snd_4810_);
lean_inc(v_fst_4809_);
lean_dec(v_s_4807_);
v___x_4812_ = lean_box(0);
v_isShared_4813_ = v_isSharedCheck_4825_;
goto v_resetjp_4811_;
}
v_resetjp_4811_:
{
lean_object* v___x_4814_; lean_object* v___y_4816_; lean_object* v___x_4821_; 
lean_inc_n(v_e_4808_, 2);
v___x_4814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4814_, 0, v_e_4808_);
lean_ctor_set(v___x_4814_, 1, v_fst_4809_);
lean_inc_ref(v_inst_4804_);
lean_inc_ref(v_inst_4803_);
v___x_4821_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_inst_4803_, v_inst_4804_, v_snd_4805_, v_e_4808_);
if (lean_obj_tag(v___x_4821_) == 0)
{
lean_object* v___x_4822_; lean_object* v___x_4823_; 
v___x_4822_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___closed__3);
v___x_4823_ = l_panic___redArg(v_inst_4806_, v___x_4822_);
v___y_4816_ = v___x_4823_;
goto v___jp_4815_;
}
else
{
lean_object* v_val_4824_; 
v_val_4824_ = lean_ctor_get(v___x_4821_, 0);
lean_inc(v_val_4824_);
lean_dec_ref_known(v___x_4821_, 1);
v___y_4816_ = v_val_4824_;
goto v___jp_4815_;
}
v___jp_4815_:
{
lean_object* v___x_4817_; lean_object* v___x_4819_; 
v___x_4817_ = l_Lean_PersistentHashMap_insert___redArg(v_inst_4803_, v_inst_4804_, v_snd_4810_, v_e_4808_, v___y_4816_);
if (v_isShared_4813_ == 0)
{
lean_ctor_set(v___x_4812_, 1, v___x_4817_);
lean_ctor_set(v___x_4812_, 0, v___x_4814_);
v___x_4819_ = v___x_4812_;
goto v_reusejp_4818_;
}
else
{
lean_object* v_reuseFailAlloc_4820_; 
v_reuseFailAlloc_4820_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4820_, 0, v___x_4814_);
lean_ctor_set(v_reuseFailAlloc_4820_, 1, v___x_4817_);
v___x_4819_ = v_reuseFailAlloc_4820_;
goto v_reusejp_4818_;
}
v_reusejp_4818_:
{
return v___x_4819_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___boxed(lean_object* v_inst_4826_, lean_object* v_inst_4827_, lean_object* v_snd_4828_, lean_object* v_inst_4829_, lean_object* v_s_4830_, lean_object* v_e_4831_){
_start:
{
lean_object* v_res_4832_; 
v_res_4832_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0(v_inst_4826_, v_inst_4827_, v_snd_4828_, v_inst_4829_, v_s_4830_, v_e_4831_);
lean_dec(v_inst_4829_);
lean_dec(v_snd_4828_);
return v_res_4832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1(lean_object* v_inst_4835_, lean_object* v_inst_4836_, lean_object* v_inst_4837_, lean_object* v_oldState_4838_, lean_object* v_newState_4839_, lean_object* v_x_4840_, lean_object* v_s_4841_){
_start:
{
lean_object* v_fst_4842_; lean_object* v_snd_4843_; lean_object* v_fst_4844_; lean_object* v___f_4845_; lean_object* v___x_4846_; lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; lean_object* v_newEntries_4850_; lean_object* v___x_4851_; 
v_fst_4842_ = lean_ctor_get(v_newState_4839_, 0);
lean_inc_n(v_fst_4842_, 2);
v_snd_4843_ = lean_ctor_get(v_newState_4839_, 1);
lean_inc(v_snd_4843_);
lean_dec_ref(v_newState_4839_);
v_fst_4844_ = lean_ctor_get(v_oldState_4838_, 0);
v___f_4845_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__0___boxed), 6, 4);
lean_closure_set(v___f_4845_, 0, v_inst_4835_);
lean_closure_set(v___f_4845_, 1, v_inst_4836_);
lean_closure_set(v___f_4845_, 2, v_snd_4843_);
lean_closure_set(v___f_4845_, 3, v_inst_4837_);
v___x_4846_ = l_List_lengthTR___redArg(v_fst_4842_);
v___x_4847_ = l_List_lengthTR___redArg(v_fst_4844_);
v___x_4848_ = lean_nat_sub(v___x_4846_, v___x_4847_);
lean_dec(v___x_4847_);
lean_dec(v___x_4846_);
v___x_4849_ = ((lean_object*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___closed__0));
v_newEntries_4850_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_fst_4842_, v_fst_4842_, v___x_4848_, v___x_4849_);
lean_dec(v_fst_4842_);
v___x_4851_ = l_List_foldl___redArg(v___f_4845_, v_s_4841_, v_newEntries_4850_);
return v___x_4851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___boxed(lean_object* v_inst_4852_, lean_object* v_inst_4853_, lean_object* v_inst_4854_, lean_object* v_oldState_4855_, lean_object* v_newState_4856_, lean_object* v_x_4857_, lean_object* v_s_4858_){
_start:
{
lean_object* v_res_4859_; 
v_res_4859_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1(v_inst_4852_, v_inst_4853_, v_inst_4854_, v_oldState_4855_, v_newState_4856_, v_x_4857_, v_s_4858_);
lean_dec(v_x_4857_);
lean_dec_ref(v_oldState_4855_);
return v_res_4859_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__2(lean_object* v___x_4860_){
_start:
{
lean_object* v___x_4862_; 
v___x_4862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4862_, 0, v___x_4860_);
return v___x_4862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__2___boxed(lean_object* v___x_4863_, lean_object* v___y_4864_){
_start:
{
lean_object* v_res_4865_; 
v_res_4865_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__2(v___x_4863_);
return v_res_4865_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0(void){
_start:
{
lean_object* v___x_4866_; lean_object* v___x_4867_; 
v___x_4866_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0);
v___x_4867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4867_, 0, v___x_4866_);
return v___x_4867_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1(void){
_start:
{
lean_object* v___x_4868_; lean_object* v___x_4869_; lean_object* v___x_4870_; 
v___x_4868_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__0);
v___x_4869_ = lean_box(0);
v___x_4870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4870_, 0, v___x_4869_);
lean_ctor_set(v___x_4870_, 1, v___x_4868_);
return v___x_4870_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2(void){
_start:
{
lean_object* v___x_4871_; lean_object* v___f_4872_; 
v___x_4871_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__1);
v___f_4872_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__2___boxed), 2, 1);
lean_closure_set(v___f_4872_, 0, v___x_4871_);
return v___f_4872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg(lean_object* v_inst_4873_, lean_object* v_inst_4874_, lean_object* v_inst_4875_){
_start:
{
lean_object* v___f_4877_; lean_object* v___f_4878_; lean_object* v___x_4879_; lean_object* v___x_4880_; lean_object* v___x_4881_; 
v___f_4877_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CacheExtension_register___redArg___lam__1___boxed), 7, 3);
lean_closure_set(v___f_4877_, 0, v_inst_4873_);
lean_closure_set(v___f_4877_, 1, v_inst_4874_);
lean_closure_set(v___f_4877_, 2, v_inst_4875_);
v___f_4878_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2, &l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_CacheExtension_register___redArg___closed__2);
v___x_4879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4879_, 0, v___f_4877_);
v___x_4880_ = lean_box(0);
v___x_4881_ = l_Lean_registerEnvExtension___redArg(v___f_4878_, v___x_4879_, v___x_4880_);
if (lean_obj_tag(v___x_4881_) == 0)
{
lean_object* v_a_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4889_; 
v_a_4882_ = lean_ctor_get(v___x_4881_, 0);
v_isSharedCheck_4889_ = !lean_is_exclusive(v___x_4881_);
if (v_isSharedCheck_4889_ == 0)
{
v___x_4884_ = v___x_4881_;
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_a_4882_);
lean_dec(v___x_4881_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v___x_4887_; 
if (v_isShared_4885_ == 0)
{
v___x_4887_ = v___x_4884_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4888_; 
v_reuseFailAlloc_4888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4888_, 0, v_a_4882_);
v___x_4887_ = v_reuseFailAlloc_4888_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
return v___x_4887_;
}
}
}
else
{
lean_object* v_a_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4897_; 
v_a_4890_ = lean_ctor_get(v___x_4881_, 0);
v_isSharedCheck_4897_ = !lean_is_exclusive(v___x_4881_);
if (v_isSharedCheck_4897_ == 0)
{
v___x_4892_ = v___x_4881_;
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
else
{
lean_inc(v_a_4890_);
lean_dec(v___x_4881_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4895_; 
if (v_isShared_4893_ == 0)
{
v___x_4895_ = v___x_4892_;
goto v_reusejp_4894_;
}
else
{
lean_object* v_reuseFailAlloc_4896_; 
v_reuseFailAlloc_4896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4896_, 0, v_a_4890_);
v___x_4895_ = v_reuseFailAlloc_4896_;
goto v_reusejp_4894_;
}
v_reusejp_4894_:
{
return v___x_4895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___redArg___boxed(lean_object* v_inst_4898_, lean_object* v_inst_4899_, lean_object* v_inst_4900_, lean_object* v___y_4901_){
_start:
{
lean_object* v_res_4902_; 
v_res_4902_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg(v_inst_4898_, v_inst_4899_, v_inst_4900_);
return v_res_4902_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register(lean_object* v_00_u03b1_4903_, lean_object* v_00_u03b2_4904_, lean_object* v_inst_4905_, lean_object* v_inst_4906_, lean_object* v_inst_4907_){
_start:
{
lean_object* v___x_4909_; 
v___x_4909_ = l_Lean_Compiler_LCNF_CacheExtension_register___redArg(v_inst_4905_, v_inst_4906_, v_inst_4907_);
return v___x_4909_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_register___boxed(lean_object* v_00_u03b1_4910_, lean_object* v_00_u03b2_4911_, lean_object* v_inst_4912_, lean_object* v_inst_4913_, lean_object* v_inst_4914_, lean_object* v___y_4915_){
_start:
{
lean_object* v_res_4916_; 
v_res_4916_ = l_Lean_Compiler_LCNF_CacheExtension_register(v_00_u03b1_4910_, v_00_u03b2_4911_, v_inst_4912_, v_inst_4913_, v_inst_4914_);
return v_res_4916_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___lam__0(lean_object* v_a_4917_, lean_object* v_inst_4918_, lean_object* v_inst_4919_, lean_object* v_b_4920_, lean_object* v_x_4921_){
_start:
{
lean_object* v_fst_4922_; lean_object* v_snd_4923_; lean_object* v___x_4925_; uint8_t v_isShared_4926_; uint8_t v_isSharedCheck_4932_; 
v_fst_4922_ = lean_ctor_get(v_x_4921_, 0);
v_snd_4923_ = lean_ctor_get(v_x_4921_, 1);
v_isSharedCheck_4932_ = !lean_is_exclusive(v_x_4921_);
if (v_isSharedCheck_4932_ == 0)
{
v___x_4925_ = v_x_4921_;
v_isShared_4926_ = v_isSharedCheck_4932_;
goto v_resetjp_4924_;
}
else
{
lean_inc(v_snd_4923_);
lean_inc(v_fst_4922_);
lean_dec(v_x_4921_);
v___x_4925_ = lean_box(0);
v_isShared_4926_ = v_isSharedCheck_4932_;
goto v_resetjp_4924_;
}
v_resetjp_4924_:
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4930_; 
lean_inc(v_a_4917_);
v___x_4927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4927_, 0, v_a_4917_);
lean_ctor_set(v___x_4927_, 1, v_fst_4922_);
v___x_4928_ = l_Lean_PersistentHashMap_insert___redArg(v_inst_4918_, v_inst_4919_, v_snd_4923_, v_a_4917_, v_b_4920_);
if (v_isShared_4926_ == 0)
{
lean_ctor_set(v___x_4925_, 1, v___x_4928_);
lean_ctor_set(v___x_4925_, 0, v___x_4927_);
v___x_4930_ = v___x_4925_;
goto v_reusejp_4929_;
}
else
{
lean_object* v_reuseFailAlloc_4931_; 
v_reuseFailAlloc_4931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4931_, 0, v___x_4927_);
lean_ctor_set(v_reuseFailAlloc_4931_, 1, v___x_4928_);
v___x_4930_ = v_reuseFailAlloc_4931_;
goto v_reusejp_4929_;
}
v_reusejp_4929_:
{
return v___x_4930_;
}
}
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0(void){
_start:
{
lean_object* v___x_4933_; lean_object* v___x_4934_; 
v___x_4933_ = lean_obj_once(&l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0, &l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0_once, _init_l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___closed__0);
v___x_4934_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4934_, 0, v___x_4933_);
return v___x_4934_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1(void){
_start:
{
lean_object* v___x_4935_; lean_object* v___x_4936_; 
v___x_4935_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0, &l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__0);
v___x_4936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4936_, 0, v___x_4935_);
lean_ctor_set(v___x_4936_, 1, v___x_4935_);
return v___x_4936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(lean_object* v_inst_4937_, lean_object* v_inst_4938_, lean_object* v_ext_4939_, lean_object* v_a_4940_, lean_object* v_b_4941_, lean_object* v___y_4942_){
_start:
{
lean_object* v___f_4944_; lean_object* v___x_4945_; lean_object* v_env_4946_; lean_object* v_nextMacroScope_4947_; lean_object* v_ngen_4948_; lean_object* v_auxDeclNGen_4949_; lean_object* v_traceState_4950_; lean_object* v_messages_4951_; lean_object* v_infoState_4952_; lean_object* v_snapshotTasks_4953_; lean_object* v___x_4955_; uint8_t v_isShared_4956_; uint8_t v_isSharedCheck_4967_; 
v___f_4944_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___lam__0), 5, 4);
lean_closure_set(v___f_4944_, 0, v_a_4940_);
lean_closure_set(v___f_4944_, 1, v_inst_4937_);
lean_closure_set(v___f_4944_, 2, v_inst_4938_);
lean_closure_set(v___f_4944_, 3, v_b_4941_);
v___x_4945_ = lean_st_ref_take(v___y_4942_);
v_env_4946_ = lean_ctor_get(v___x_4945_, 0);
v_nextMacroScope_4947_ = lean_ctor_get(v___x_4945_, 1);
v_ngen_4948_ = lean_ctor_get(v___x_4945_, 2);
v_auxDeclNGen_4949_ = lean_ctor_get(v___x_4945_, 3);
v_traceState_4950_ = lean_ctor_get(v___x_4945_, 4);
v_messages_4951_ = lean_ctor_get(v___x_4945_, 6);
v_infoState_4952_ = lean_ctor_get(v___x_4945_, 7);
v_snapshotTasks_4953_ = lean_ctor_get(v___x_4945_, 8);
v_isSharedCheck_4967_ = !lean_is_exclusive(v___x_4945_);
if (v_isSharedCheck_4967_ == 0)
{
lean_object* v_unused_4968_; 
v_unused_4968_ = lean_ctor_get(v___x_4945_, 5);
lean_dec(v_unused_4968_);
v___x_4955_ = v___x_4945_;
v_isShared_4956_ = v_isSharedCheck_4967_;
goto v_resetjp_4954_;
}
else
{
lean_inc(v_snapshotTasks_4953_);
lean_inc(v_infoState_4952_);
lean_inc(v_messages_4951_);
lean_inc(v_traceState_4950_);
lean_inc(v_auxDeclNGen_4949_);
lean_inc(v_ngen_4948_);
lean_inc(v_nextMacroScope_4947_);
lean_inc(v_env_4946_);
lean_dec(v___x_4945_);
v___x_4955_ = lean_box(0);
v_isShared_4956_ = v_isSharedCheck_4967_;
goto v_resetjp_4954_;
}
v_resetjp_4954_:
{
lean_object* v_asyncMode_4957_; lean_object* v___x_4958_; lean_object* v___x_4959_; lean_object* v___x_4960_; lean_object* v___x_4961_; lean_object* v___x_4963_; 
v_asyncMode_4957_ = lean_ctor_get(v_ext_4939_, 2);
lean_inc(v_asyncMode_4957_);
v___x_4958_ = lean_box(0);
v___x_4959_ = lean_box(0);
v___x_4960_ = l_Lean_EnvExtension_modifyState___redArg(v_ext_4939_, v_env_4946_, v___f_4944_, v_asyncMode_4957_, v___x_4959_);
lean_dec(v_asyncMode_4957_);
v___x_4961_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1, &l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___closed__1);
if (v_isShared_4956_ == 0)
{
lean_ctor_set(v___x_4955_, 5, v___x_4961_);
lean_ctor_set(v___x_4955_, 0, v___x_4960_);
v___x_4963_ = v___x_4955_;
goto v_reusejp_4962_;
}
else
{
lean_object* v_reuseFailAlloc_4966_; 
v_reuseFailAlloc_4966_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4966_, 0, v___x_4960_);
lean_ctor_set(v_reuseFailAlloc_4966_, 1, v_nextMacroScope_4947_);
lean_ctor_set(v_reuseFailAlloc_4966_, 2, v_ngen_4948_);
lean_ctor_set(v_reuseFailAlloc_4966_, 3, v_auxDeclNGen_4949_);
lean_ctor_set(v_reuseFailAlloc_4966_, 4, v_traceState_4950_);
lean_ctor_set(v_reuseFailAlloc_4966_, 5, v___x_4961_);
lean_ctor_set(v_reuseFailAlloc_4966_, 6, v_messages_4951_);
lean_ctor_set(v_reuseFailAlloc_4966_, 7, v_infoState_4952_);
lean_ctor_set(v_reuseFailAlloc_4966_, 8, v_snapshotTasks_4953_);
v___x_4963_ = v_reuseFailAlloc_4966_;
goto v_reusejp_4962_;
}
v_reusejp_4962_:
{
lean_object* v___x_4964_; lean_object* v___x_4965_; 
v___x_4964_ = lean_st_ref_put(v___y_4942_, v___x_4963_);
v___x_4965_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4965_, 0, v___x_4958_);
return v___x_4965_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___redArg___boxed(lean_object* v_inst_4969_, lean_object* v_inst_4970_, lean_object* v_ext_4971_, lean_object* v_a_4972_, lean_object* v_b_4973_, lean_object* v___y_4974_, lean_object* v___y_4975_){
_start:
{
lean_object* v_res_4976_; 
v_res_4976_ = l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(v_inst_4969_, v_inst_4970_, v_ext_4971_, v_a_4972_, v_b_4973_, v___y_4974_);
lean_dec(v___y_4974_);
return v_res_4976_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert(lean_object* v_00_u03b1_4977_, lean_object* v_00_u03b2_4978_, lean_object* v_inst_4979_, lean_object* v_inst_4980_, lean_object* v_inst_4981_, lean_object* v_ext_4982_, lean_object* v_a_4983_, lean_object* v_b_4984_, lean_object* v___y_4985_, lean_object* v___y_4986_){
_start:
{
lean_object* v___x_4988_; 
v___x_4988_ = l_Lean_Compiler_LCNF_CacheExtension_insert___redArg(v_inst_4979_, v_inst_4980_, v_ext_4982_, v_a_4983_, v_b_4984_, v___y_4986_);
return v___x_4988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_insert___boxed(lean_object* v_00_u03b1_4989_, lean_object* v_00_u03b2_4990_, lean_object* v_inst_4991_, lean_object* v_inst_4992_, lean_object* v_inst_4993_, lean_object* v_ext_4994_, lean_object* v_a_4995_, lean_object* v_b_4996_, lean_object* v___y_4997_, lean_object* v___y_4998_, lean_object* v___y_4999_){
_start:
{
lean_object* v_res_5000_; 
v_res_5000_ = l_Lean_Compiler_LCNF_CacheExtension_insert(v_00_u03b1_4989_, v_00_u03b2_4990_, v_inst_4991_, v_inst_4992_, v_inst_4993_, v_ext_4994_, v_a_4995_, v_b_4996_, v___y_4997_, v___y_4998_);
lean_dec(v___y_4998_);
lean_dec_ref(v___y_4997_);
lean_dec(v_inst_4993_);
return v_res_5000_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_5001_; 
v___x_5001_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_5001_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__1(void){
_start:
{
lean_object* v___x_5002_; lean_object* v___x_5003_; lean_object* v___x_5004_; 
v___x_5002_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__0, &l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__0);
v___x_5003_ = lean_box(0);
v___x_5004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5004_, 0, v___x_5003_);
lean_ctor_set(v___x_5004_, 1, v___x_5002_);
return v___x_5004_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(lean_object* v_inst_5005_, lean_object* v_inst_5006_, lean_object* v_ext_5007_, lean_object* v_a_5008_, lean_object* v___y_5009_){
_start:
{
lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v_env_5013_; lean_object* v_asyncMode_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v_snd_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; 
v___x_5011_ = lean_obj_once(&l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__1, &l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___closed__1);
v___x_5012_ = lean_st_ref_get(v___y_5009_);
v_env_5013_ = lean_ctor_get(v___x_5012_, 0);
lean_inc_ref(v_env_5013_);
lean_dec(v___x_5012_);
v_asyncMode_5014_ = lean_ctor_get(v_ext_5007_, 2);
v___x_5015_ = lean_box(0);
v___x_5016_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_5011_, v_ext_5007_, v_env_5013_, v_asyncMode_5014_, v___x_5015_);
v_snd_5017_ = lean_ctor_get(v___x_5016_, 1);
lean_inc(v_snd_5017_);
lean_dec(v___x_5016_);
v___x_5018_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_inst_5005_, v_inst_5006_, v_snd_5017_, v_a_5008_);
lean_dec(v_snd_5017_);
v___x_5019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5019_, 0, v___x_5018_);
return v___x_5019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg___boxed(lean_object* v_inst_5020_, lean_object* v_inst_5021_, lean_object* v_ext_5022_, lean_object* v_a_5023_, lean_object* v___y_5024_, lean_object* v___y_5025_){
_start:
{
lean_object* v_res_5026_; 
v_res_5026_ = l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(v_inst_5020_, v_inst_5021_, v_ext_5022_, v_a_5023_, v___y_5024_);
lean_dec(v___y_5024_);
lean_dec_ref(v_ext_5022_);
return v_res_5026_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f(lean_object* v_00_u03b1_5027_, lean_object* v_00_u03b2_5028_, lean_object* v_inst_5029_, lean_object* v_inst_5030_, lean_object* v_inst_5031_, lean_object* v_ext_5032_, lean_object* v_a_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_){
_start:
{
lean_object* v___x_5037_; 
v___x_5037_ = l_Lean_Compiler_LCNF_CacheExtension_find_x3f___redArg(v_inst_5029_, v_inst_5030_, v_ext_5032_, v_a_5033_, v___y_5035_);
return v___x_5037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_CacheExtension_find_x3f___boxed(lean_object* v_00_u03b1_5038_, lean_object* v_00_u03b2_5039_, lean_object* v_inst_5040_, lean_object* v_inst_5041_, lean_object* v_inst_5042_, lean_object* v_ext_5043_, lean_object* v_a_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_){
_start:
{
lean_object* v_res_5048_; 
v_res_5048_ = l_Lean_Compiler_LCNF_CacheExtension_find_x3f(v_00_u03b1_5038_, v_00_u03b2_5039_, v_inst_5040_, v_inst_5041_, v_inst_5042_, v_ext_5043_, v_a_5044_, v___y_5045_, v___y_5046_);
lean_dec(v___y_5046_);
lean_dec_ref(v___y_5045_);
lean_dec_ref(v_ext_5043_);
lean_dec(v_inst_5042_);
return v_res_5048_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_LCtx(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ConfigOptions(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_LCtx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ConfigOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instInhabitedPhase_default = _init_l_Lean_Compiler_LCNF_instInhabitedPhase_default();
l_Lean_Compiler_LCNF_instInhabitedPhase = _init_l_Lean_Compiler_LCNF_instInhabitedPhase();
l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedState_default);
l_Lean_Compiler_LCNF_CompilerM_instInhabitedState = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedState();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedState);
l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext_default);
l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext = _init_l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext();
lean_mark_persistent(l_Lean_Compiler_LCNF_CompilerM_instInhabitedContext);
l_Lean_Compiler_LCNF_instMonadCompilerM = _init_l_Lean_Compiler_LCNF_instMonadCompilerM();
lean_mark_persistent(l_Lean_Compiler_LCNF_instMonadCompilerM);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_LCtx(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ConfigOptions(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_LCtx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ConfigOptions(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_CompilerM(builtin);
}
#ifdef __cplusplus
}
#endif
