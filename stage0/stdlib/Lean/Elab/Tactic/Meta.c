// Lean compiler output
// Module: Lean.Elab.Tactic.Meta
// Imports: public import Lean.Elab.SyntheticMVars
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkAuxDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedLocalContext_default;
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Elab_Tactic_evalTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Tactic_pruneSolvedGoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MetavarContext_getDecl(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_sharecommon_quick(lean_object*);
lean_object* l_Lean_Elab_Tactic_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_TermElabM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__8 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__9 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.MetavarContext"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Lean.instantiateLCtxMVars"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Invalid auxiliary declaration found in local context: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = " does not have an associated full name."};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__3_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0(lean_object* v_tacticCode_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Elab_Tactic_evalTactic(v_tacticCode_1_, v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v___x_12_; 
lean_dec_ref_known(v___x_11_, 1);
v___x_12_ = l_Lean_Elab_Tactic_pruneSolvedGoals(v___y_2_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_);
return v___x_12_;
}
else
{
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__0___boxed(lean_object* v_tacticCode_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_){
_start:
{
lean_object* v_res_23_; 
v_res_23_ = l_Lean_Elab_runTactic___lam__0(v_tacticCode_13_, v___y_14_, v___y_15_, v___y_16_, v___y_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec_ref(v___y_18_);
lean_dec(v___y_17_);
lean_dec_ref(v___y_16_);
lean_dec(v___y_15_);
lean_dec_ref(v___y_14_);
return v_res_23_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1(lean_object* v___x_24_, uint8_t v___x_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_){
_start:
{
lean_object* v___x_33_; 
v___x_33_ = l___private_Lean_Elab_SyntheticMVars_0__Lean_Elab_Term_withSynthesizeImp(lean_box(0), v___x_24_, v___x_25_, v___y_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_, v___y_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___lam__1___boxed(lean_object* v___x_34_, lean_object* v___x_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_){
_start:
{
uint8_t v___x_5270__boxed_43_; lean_object* v_res_44_; 
v___x_5270__boxed_43_ = lean_unbox(v___x_35_);
v_res_44_ = l_Lean_Elab_runTactic___lam__1(v___x_34_, v___x_5270__boxed_43_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(lean_object* v_msg_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v___f_61_; lean_object* v___f_62_; lean_object* v___f_63_; lean_object* v___f_64_; lean_object* v___f_65_; lean_object* v___f_66_; lean_object* v___f_67_; lean_object* v___f_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v_toApplicative_73_; lean_object* v___x_75_; uint8_t v_isShared_76_; uint8_t v_isSharedCheck_134_; 
v___f_61_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0));
v___f_62_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1));
v___f_63_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2));
v___f_64_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3));
v___f_65_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4));
v___f_66_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_66_, 0, v___f_65_);
lean_closure_set(v___f_66_, 1, v___f_64_);
v___f_67_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_67_, 0, v___f_64_);
v___f_68_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__5));
v___x_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_69_, 0, v___f_61_);
lean_ctor_set(v___x_69_, 1, v___f_62_);
v___x_70_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_70_, 0, v___x_69_);
lean_ctor_set(v___x_70_, 1, v___f_63_);
lean_ctor_set(v___x_70_, 2, v___f_66_);
lean_ctor_set(v___x_70_, 3, v___f_67_);
lean_ctor_set(v___x_70_, 4, v___f_68_);
v___x_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set(v___x_71_, 1, v___f_64_);
v___x_72_ = l_StateRefT_x27_instMonad___redArg(v___x_71_);
v_toApplicative_73_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_134_ == 0)
{
lean_object* v_unused_135_; 
v_unused_135_ = lean_ctor_get(v___x_72_, 1);
lean_dec(v_unused_135_);
v___x_75_ = v___x_72_;
v_isShared_76_ = v_isSharedCheck_134_;
goto v_resetjp_74_;
}
else
{
lean_inc(v_toApplicative_73_);
lean_dec(v___x_72_);
v___x_75_ = lean_box(0);
v_isShared_76_ = v_isSharedCheck_134_;
goto v_resetjp_74_;
}
v_resetjp_74_:
{
lean_object* v_toFunctor_77_; lean_object* v_toSeq_78_; lean_object* v_toSeqLeft_79_; lean_object* v_toSeqRight_80_; lean_object* v___x_82_; uint8_t v_isShared_83_; uint8_t v_isSharedCheck_132_; 
v_toFunctor_77_ = lean_ctor_get(v_toApplicative_73_, 0);
v_toSeq_78_ = lean_ctor_get(v_toApplicative_73_, 2);
v_toSeqLeft_79_ = lean_ctor_get(v_toApplicative_73_, 3);
v_toSeqRight_80_ = lean_ctor_get(v_toApplicative_73_, 4);
v_isSharedCheck_132_ = !lean_is_exclusive(v_toApplicative_73_);
if (v_isSharedCheck_132_ == 0)
{
lean_object* v_unused_133_; 
v_unused_133_ = lean_ctor_get(v_toApplicative_73_, 1);
lean_dec(v_unused_133_);
v___x_82_ = v_toApplicative_73_;
v_isShared_83_ = v_isSharedCheck_132_;
goto v_resetjp_81_;
}
else
{
lean_inc(v_toSeqRight_80_);
lean_inc(v_toSeqLeft_79_);
lean_inc(v_toSeq_78_);
lean_inc(v_toFunctor_77_);
lean_dec(v_toApplicative_73_);
v___x_82_ = lean_box(0);
v_isShared_83_ = v_isSharedCheck_132_;
goto v_resetjp_81_;
}
v_resetjp_81_:
{
lean_object* v___f_84_; lean_object* v___f_85_; lean_object* v___f_86_; lean_object* v___f_87_; lean_object* v___x_88_; lean_object* v___f_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___x_93_; 
v___f_84_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__6));
v___f_85_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__7));
lean_inc_ref(v_toFunctor_77_);
v___f_86_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_86_, 0, v_toFunctor_77_);
v___f_87_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_87_, 0, v_toFunctor_77_);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___f_86_);
lean_ctor_set(v___x_88_, 1, v___f_87_);
v___f_89_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_89_, 0, v_toSeqRight_80_);
v___f_90_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_90_, 0, v_toSeqLeft_79_);
v___f_91_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_91_, 0, v_toSeq_78_);
if (v_isShared_83_ == 0)
{
lean_ctor_set(v___x_82_, 4, v___f_89_);
lean_ctor_set(v___x_82_, 3, v___f_90_);
lean_ctor_set(v___x_82_, 2, v___f_91_);
lean_ctor_set(v___x_82_, 1, v___f_84_);
lean_ctor_set(v___x_82_, 0, v___x_88_);
v___x_93_ = v___x_82_;
goto v_reusejp_92_;
}
else
{
lean_object* v_reuseFailAlloc_131_; 
v_reuseFailAlloc_131_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_131_, 0, v___x_88_);
lean_ctor_set(v_reuseFailAlloc_131_, 1, v___f_84_);
lean_ctor_set(v_reuseFailAlloc_131_, 2, v___f_91_);
lean_ctor_set(v_reuseFailAlloc_131_, 3, v___f_90_);
lean_ctor_set(v_reuseFailAlloc_131_, 4, v___f_89_);
v___x_93_ = v_reuseFailAlloc_131_;
goto v_reusejp_92_;
}
v_reusejp_92_:
{
lean_object* v___x_95_; 
if (v_isShared_76_ == 0)
{
lean_ctor_set(v___x_75_, 1, v___f_85_);
lean_ctor_set(v___x_75_, 0, v___x_93_);
v___x_95_ = v___x_75_;
goto v_reusejp_94_;
}
else
{
lean_object* v_reuseFailAlloc_130_; 
v_reuseFailAlloc_130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_130_, 0, v___x_93_);
lean_ctor_set(v_reuseFailAlloc_130_, 1, v___f_85_);
v___x_95_ = v_reuseFailAlloc_130_;
goto v_reusejp_94_;
}
v_reusejp_94_:
{
lean_object* v___x_96_; lean_object* v_toApplicative_97_; lean_object* v___x_99_; uint8_t v_isShared_100_; uint8_t v_isSharedCheck_128_; 
v___x_96_ = l_StateRefT_x27_instMonad___redArg(v___x_95_);
v_toApplicative_97_ = lean_ctor_get(v___x_96_, 0);
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_96_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v___x_96_, 1);
lean_dec(v_unused_129_);
v___x_99_ = v___x_96_;
v_isShared_100_ = v_isSharedCheck_128_;
goto v_resetjp_98_;
}
else
{
lean_inc(v_toApplicative_97_);
lean_dec(v___x_96_);
v___x_99_ = lean_box(0);
v_isShared_100_ = v_isSharedCheck_128_;
goto v_resetjp_98_;
}
v_resetjp_98_:
{
lean_object* v_toFunctor_101_; lean_object* v_toSeq_102_; lean_object* v_toSeqLeft_103_; lean_object* v_toSeqRight_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_126_; 
v_toFunctor_101_ = lean_ctor_get(v_toApplicative_97_, 0);
v_toSeq_102_ = lean_ctor_get(v_toApplicative_97_, 2);
v_toSeqLeft_103_ = lean_ctor_get(v_toApplicative_97_, 3);
v_toSeqRight_104_ = lean_ctor_get(v_toApplicative_97_, 4);
v_isSharedCheck_126_ = !lean_is_exclusive(v_toApplicative_97_);
if (v_isSharedCheck_126_ == 0)
{
lean_object* v_unused_127_; 
v_unused_127_ = lean_ctor_get(v_toApplicative_97_, 1);
lean_dec(v_unused_127_);
v___x_106_ = v_toApplicative_97_;
v_isShared_107_ = v_isSharedCheck_126_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_toSeqRight_104_);
lean_inc(v_toSeqLeft_103_);
lean_inc(v_toSeq_102_);
lean_inc(v_toFunctor_101_);
lean_dec(v_toApplicative_97_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_126_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___f_108_; lean_object* v___f_109_; lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___x_112_; lean_object* v___f_113_; lean_object* v___f_114_; lean_object* v___f_115_; lean_object* v___x_117_; 
v___f_108_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__8));
v___f_109_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__9));
lean_inc_ref(v_toFunctor_101_);
v___f_110_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_110_, 0, v_toFunctor_101_);
v___f_111_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_111_, 0, v_toFunctor_101_);
v___x_112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_112_, 0, v___f_110_);
lean_ctor_set(v___x_112_, 1, v___f_111_);
v___f_113_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_113_, 0, v_toSeqRight_104_);
v___f_114_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_114_, 0, v_toSeqLeft_103_);
v___f_115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_115_, 0, v_toSeq_102_);
if (v_isShared_107_ == 0)
{
lean_ctor_set(v___x_106_, 4, v___f_113_);
lean_ctor_set(v___x_106_, 3, v___f_114_);
lean_ctor_set(v___x_106_, 2, v___f_115_);
lean_ctor_set(v___x_106_, 1, v___f_108_);
lean_ctor_set(v___x_106_, 0, v___x_112_);
v___x_117_ = v___x_106_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v___x_112_);
lean_ctor_set(v_reuseFailAlloc_125_, 1, v___f_108_);
lean_ctor_set(v_reuseFailAlloc_125_, 2, v___f_115_);
lean_ctor_set(v_reuseFailAlloc_125_, 3, v___f_114_);
lean_ctor_set(v_reuseFailAlloc_125_, 4, v___f_113_);
v___x_117_ = v_reuseFailAlloc_125_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
lean_object* v___x_119_; 
if (v_isShared_100_ == 0)
{
lean_ctor_set(v___x_99_, 1, v___f_109_);
lean_ctor_set(v___x_99_, 0, v___x_117_);
v___x_119_ = v___x_99_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_124_; 
v_reuseFailAlloc_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_124_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_124_, 1, v___f_109_);
v___x_119_ = v_reuseFailAlloc_124_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_3020__overap_122_; lean_object* v___x_123_; 
v___x_120_ = l_Lean_instInhabitedLocalContext_default;
v___x_121_ = l_instInhabitedOfMonad___redArg(v___x_119_, v___x_120_);
v___x_3020__overap_122_ = lean_panic_fn_borrowed(v___x_121_, v_msg_55_);
lean_dec(v___x_121_);
lean_inc(v___y_59_);
lean_inc_ref(v___y_58_);
lean_inc(v___y_57_);
lean_inc_ref(v___y_56_);
v___x_123_ = lean_apply_5(v___x_3020__overap_122_, v___y_56_, v___y_57_, v___y_58_, v___y_59_, lean_box(0));
return v___x_123_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_136_, lean_object* v___y_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_){
_start:
{
lean_object* v_res_142_; 
v_res_142_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(v_msg_136_, v___y_137_, v___y_138_, v___y_139_, v___y_140_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
lean_dec_ref(v___y_137_);
return v_res_142_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(lean_object* v_e_143_, lean_object* v___y_144_){
_start:
{
uint8_t v___x_146_; 
v___x_146_ = l_Lean_Expr_hasMVar(v_e_143_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; 
v___x_147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_147_, 0, v_e_143_);
return v___x_147_;
}
else
{
lean_object* v___x_148_; lean_object* v_mctx_149_; lean_object* v___x_150_; lean_object* v_fst_151_; lean_object* v_snd_152_; lean_object* v___x_153_; lean_object* v_cache_154_; lean_object* v_zetaDeltaFVarIds_155_; lean_object* v_postponed_156_; lean_object* v_diag_157_; lean_object* v___x_159_; uint8_t v_isShared_160_; uint8_t v_isSharedCheck_166_; 
v___x_148_ = lean_st_ref_get(v___y_144_);
v_mctx_149_ = lean_ctor_get(v___x_148_, 0);
lean_inc_ref(v_mctx_149_);
lean_dec(v___x_148_);
v___x_150_ = l_Lean_instantiateMVarsCore(v_mctx_149_, v_e_143_);
v_fst_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_fst_151_);
v_snd_152_ = lean_ctor_get(v___x_150_, 1);
lean_inc(v_snd_152_);
lean_dec_ref(v___x_150_);
v___x_153_ = lean_st_ref_take(v___y_144_);
v_cache_154_ = lean_ctor_get(v___x_153_, 1);
v_zetaDeltaFVarIds_155_ = lean_ctor_get(v___x_153_, 2);
v_postponed_156_ = lean_ctor_get(v___x_153_, 3);
v_diag_157_ = lean_ctor_get(v___x_153_, 4);
v_isSharedCheck_166_ = !lean_is_exclusive(v___x_153_);
if (v_isSharedCheck_166_ == 0)
{
lean_object* v_unused_167_; 
v_unused_167_ = lean_ctor_get(v___x_153_, 0);
lean_dec(v_unused_167_);
v___x_159_ = v___x_153_;
v_isShared_160_ = v_isSharedCheck_166_;
goto v_resetjp_158_;
}
else
{
lean_inc(v_diag_157_);
lean_inc(v_postponed_156_);
lean_inc(v_zetaDeltaFVarIds_155_);
lean_inc(v_cache_154_);
lean_dec(v___x_153_);
v___x_159_ = lean_box(0);
v_isShared_160_ = v_isSharedCheck_166_;
goto v_resetjp_158_;
}
v_resetjp_158_:
{
lean_object* v___x_162_; 
if (v_isShared_160_ == 0)
{
lean_ctor_set(v___x_159_, 0, v_snd_152_);
v___x_162_ = v___x_159_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_snd_152_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_cache_154_);
lean_ctor_set(v_reuseFailAlloc_165_, 2, v_zetaDeltaFVarIds_155_);
lean_ctor_set(v_reuseFailAlloc_165_, 3, v_postponed_156_);
lean_ctor_set(v_reuseFailAlloc_165_, 4, v_diag_157_);
v___x_162_ = v_reuseFailAlloc_165_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_st_ref_put(v___y_144_, v___x_162_);
v___x_164_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_164_, 0, v_fst_151_);
return v___x_164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg___boxed(lean_object* v_e_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v_res_171_; 
v_res_171_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_e_168_, v___y_169_);
lean_dec(v___y_169_);
return v_res_171_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object* v_auxDeclToFullName_176_, lean_object* v_as_177_, size_t v_i_178_, size_t v_stop_179_, lean_object* v_b_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_){
_start:
{
lean_object* v_a_187_; uint8_t v___x_191_; 
v___x_191_ = lean_usize_dec_eq(v_i_178_, v_stop_179_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; 
v___x_192_ = lean_array_uget_borrowed(v_as_177_, v_i_178_);
if (lean_obj_tag(v___x_192_) == 0)
{
v_a_187_ = v_b_180_;
goto v___jp_186_;
}
else
{
lean_object* v_val_193_; 
v_val_193_ = lean_ctor_get(v___x_192_, 0);
if (lean_obj_tag(v_val_193_) == 0)
{
uint8_t v_kind_194_; 
v_kind_194_ = lean_ctor_get_uint8(v_val_193_, sizeof(void*)*4 + 1);
if (v_kind_194_ == 2)
{
lean_object* v_fvarId_195_; lean_object* v_userName_196_; lean_object* v_type_197_; lean_object* v___x_198_; 
v_fvarId_195_ = lean_ctor_get(v_val_193_, 1);
v_userName_196_ = lean_ctor_get(v_val_193_, 2);
v_type_197_ = lean_ctor_get(v_val_193_, 3);
lean_inc_ref(v_type_197_);
v___x_198_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_197_, v___y_182_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v___x_200_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
lean_inc(v_a_199_);
lean_dec_ref_known(v___x_198_, 1);
v___x_200_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_auxDeclToFullName_176_, v_fvarId_195_);
if (lean_obj_tag(v___x_200_) == 1)
{
lean_object* v_val_201_; lean_object* v___x_202_; 
v_val_201_ = lean_ctor_get(v___x_200_, 0);
lean_inc(v_val_201_);
lean_dec_ref_known(v___x_200_, 1);
lean_inc(v_userName_196_);
lean_inc(v_fvarId_195_);
v___x_202_ = l_Lean_LocalContext_mkAuxDecl(v_b_180_, v_fvarId_195_, v_userName_196_, v_a_199_, v_val_201_);
v_a_187_ = v___x_202_;
goto v___jp_186_;
}
else
{
lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; uint8_t v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
lean_dec(v___x_200_);
lean_dec(v_a_199_);
lean_dec_ref(v_b_180_);
v___x_203_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__0));
v___x_204_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__1));
v___x_205_ = lean_unsigned_to_nat(660u);
v___x_206_ = lean_unsigned_to_nat(12u);
v___x_207_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__2));
v___x_208_ = 1;
lean_inc(v_userName_196_);
v___x_209_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_userName_196_, v___x_208_);
v___x_210_ = lean_string_append(v___x_207_, v___x_209_);
lean_dec_ref(v___x_209_);
v___x_211_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__3));
v___x_212_ = lean_string_append(v___x_210_, v___x_211_);
v___x_213_ = l_mkPanicMessageWithDecl(v___x_203_, v___x_204_, v___x_205_, v___x_206_, v___x_212_);
lean_dec_ref(v___x_212_);
v___x_214_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(v___x_213_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v_a_215_; 
v_a_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc(v_a_215_);
lean_dec_ref_known(v___x_214_, 1);
v_a_187_ = v_a_215_;
goto v___jp_186_;
}
else
{
return v___x_214_;
}
}
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec_ref(v_b_180_);
v_a_216_ = lean_ctor_get(v___x_198_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_198_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_198_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_221_; 
if (v_isShared_219_ == 0)
{
v___x_221_ = v___x_218_;
goto v_reusejp_220_;
}
else
{
lean_object* v_reuseFailAlloc_222_; 
v_reuseFailAlloc_222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_222_, 0, v_a_216_);
v___x_221_ = v_reuseFailAlloc_222_;
goto v_reusejp_220_;
}
v_reusejp_220_:
{
return v___x_221_;
}
}
}
}
else
{
lean_object* v_fvarId_224_; lean_object* v_userName_225_; lean_object* v_type_226_; uint8_t v_bi_227_; lean_object* v___x_228_; 
v_fvarId_224_ = lean_ctor_get(v_val_193_, 1);
v_userName_225_ = lean_ctor_get(v_val_193_, 2);
v_type_226_ = lean_ctor_get(v_val_193_, 3);
v_bi_227_ = lean_ctor_get_uint8(v_val_193_, sizeof(void*)*4);
lean_inc_ref(v_type_226_);
v___x_228_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_226_, v___y_182_);
if (lean_obj_tag(v___x_228_) == 0)
{
lean_object* v_a_229_; lean_object* v___x_230_; 
v_a_229_ = lean_ctor_get(v___x_228_, 0);
lean_inc(v_a_229_);
lean_dec_ref_known(v___x_228_, 1);
lean_inc(v_userName_225_);
lean_inc(v_fvarId_224_);
v___x_230_ = l_Lean_LocalContext_mkLocalDecl(v_b_180_, v_fvarId_224_, v_userName_225_, v_a_229_, v_bi_227_, v_kind_194_);
v_a_187_ = v___x_230_;
goto v___jp_186_;
}
else
{
lean_object* v_a_231_; lean_object* v___x_233_; uint8_t v_isShared_234_; uint8_t v_isSharedCheck_238_; 
lean_dec_ref(v_b_180_);
v_a_231_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_238_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_238_ == 0)
{
v___x_233_ = v___x_228_;
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
else
{
lean_inc(v_a_231_);
lean_dec(v___x_228_);
v___x_233_ = lean_box(0);
v_isShared_234_ = v_isSharedCheck_238_;
goto v_resetjp_232_;
}
v_resetjp_232_:
{
lean_object* v___x_236_; 
if (v_isShared_234_ == 0)
{
v___x_236_ = v___x_233_;
goto v_reusejp_235_;
}
else
{
lean_object* v_reuseFailAlloc_237_; 
v_reuseFailAlloc_237_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_237_, 0, v_a_231_);
v___x_236_ = v_reuseFailAlloc_237_;
goto v_reusejp_235_;
}
v_reusejp_235_:
{
return v___x_236_;
}
}
}
}
}
else
{
lean_object* v_fvarId_239_; lean_object* v_userName_240_; lean_object* v_type_241_; lean_object* v_value_242_; uint8_t v_nondep_243_; uint8_t v_kind_244_; lean_object* v___x_245_; 
v_fvarId_239_ = lean_ctor_get(v_val_193_, 1);
v_userName_240_ = lean_ctor_get(v_val_193_, 2);
v_type_241_ = lean_ctor_get(v_val_193_, 3);
v_value_242_ = lean_ctor_get(v_val_193_, 4);
v_nondep_243_ = lean_ctor_get_uint8(v_val_193_, sizeof(void*)*5);
v_kind_244_ = lean_ctor_get_uint8(v_val_193_, sizeof(void*)*5 + 1);
lean_inc_ref(v_type_241_);
v___x_245_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_241_, v___y_182_);
if (lean_obj_tag(v___x_245_) == 0)
{
lean_object* v_a_246_; lean_object* v___x_247_; 
v_a_246_ = lean_ctor_get(v___x_245_, 0);
lean_inc(v_a_246_);
lean_dec_ref_known(v___x_245_, 1);
lean_inc_ref(v_value_242_);
v___x_247_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_value_242_, v___y_182_);
if (lean_obj_tag(v___x_247_) == 0)
{
lean_object* v_a_248_; lean_object* v___x_249_; 
v_a_248_ = lean_ctor_get(v___x_247_, 0);
lean_inc(v_a_248_);
lean_dec_ref_known(v___x_247_, 1);
lean_inc(v_userName_240_);
lean_inc(v_fvarId_239_);
v___x_249_ = l_Lean_LocalContext_mkLetDecl(v_b_180_, v_fvarId_239_, v_userName_240_, v_a_246_, v_a_248_, v_nondep_243_, v_kind_244_);
v_a_187_ = v___x_249_;
goto v___jp_186_;
}
else
{
lean_object* v_a_250_; lean_object* v___x_252_; uint8_t v_isShared_253_; uint8_t v_isSharedCheck_257_; 
lean_dec(v_a_246_);
lean_dec_ref(v_b_180_);
v_a_250_ = lean_ctor_get(v___x_247_, 0);
v_isSharedCheck_257_ = !lean_is_exclusive(v___x_247_);
if (v_isSharedCheck_257_ == 0)
{
v___x_252_ = v___x_247_;
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
else
{
lean_inc(v_a_250_);
lean_dec(v___x_247_);
v___x_252_ = lean_box(0);
v_isShared_253_ = v_isSharedCheck_257_;
goto v_resetjp_251_;
}
v_resetjp_251_:
{
lean_object* v___x_255_; 
if (v_isShared_253_ == 0)
{
v___x_255_ = v___x_252_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_a_250_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
return v___x_255_;
}
}
}
}
else
{
lean_object* v_a_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_265_; 
lean_dec_ref(v_b_180_);
v_a_258_ = lean_ctor_get(v___x_245_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v___x_245_);
if (v_isSharedCheck_265_ == 0)
{
v___x_260_ = v___x_245_;
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_a_258_);
lean_dec(v___x_245_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_265_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_263_; 
if (v_isShared_261_ == 0)
{
v___x_263_ = v___x_260_;
goto v_reusejp_262_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v_a_258_);
v___x_263_ = v_reuseFailAlloc_264_;
goto v_reusejp_262_;
}
v_reusejp_262_:
{
return v___x_263_;
}
}
}
}
}
}
else
{
lean_object* v___x_266_; 
v___x_266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_266_, 0, v_b_180_);
return v___x_266_;
}
v___jp_186_:
{
size_t v___x_188_; size_t v___x_189_; 
v___x_188_ = ((size_t)1ULL);
v___x_189_ = lean_usize_add(v_i_178_, v___x_188_);
v_i_178_ = v___x_189_;
v_b_180_ = v_a_187_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___boxed(lean_object* v_auxDeclToFullName_267_, lean_object* v_as_268_, lean_object* v_i_269_, lean_object* v_stop_270_, lean_object* v_b_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_){
_start:
{
size_t v_i_boxed_277_; size_t v_stop_boxed_278_; lean_object* v_res_279_; 
v_i_boxed_277_ = lean_unbox_usize(v_i_269_);
lean_dec(v_i_269_);
v_stop_boxed_278_ = lean_unbox_usize(v_stop_270_);
lean_dec(v_stop_270_);
v_res_279_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_267_, v_as_268_, v_i_boxed_277_, v_stop_boxed_278_, v_b_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec_ref(v_as_268_);
lean_dec(v_auxDeclToFullName_267_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_auxDeclToFullName_280_, lean_object* v_x_281_, lean_object* v_x_282_, lean_object* v___y_283_, lean_object* v___y_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
if (lean_obj_tag(v_x_281_) == 0)
{
lean_object* v_cs_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_301_; 
v_cs_288_ = lean_ctor_get(v_x_281_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v_x_281_);
if (v_isSharedCheck_301_ == 0)
{
v___x_290_ = v_x_281_;
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_cs_288_);
lean_dec(v_x_281_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_301_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
lean_object* v___x_292_; lean_object* v___x_293_; uint8_t v___x_294_; 
v___x_292_ = lean_unsigned_to_nat(0u);
v___x_293_ = lean_array_get_size(v_cs_288_);
v___x_294_ = lean_nat_dec_lt(v___x_292_, v___x_293_);
if (v___x_294_ == 0)
{
lean_object* v___x_296_; 
lean_dec_ref(v_cs_288_);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v_x_282_);
v___x_296_ = v___x_290_;
goto v_reusejp_295_;
}
else
{
lean_object* v_reuseFailAlloc_297_; 
v_reuseFailAlloc_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_297_, 0, v_x_282_);
v___x_296_ = v_reuseFailAlloc_297_;
goto v_reusejp_295_;
}
v_reusejp_295_:
{
return v___x_296_;
}
}
else
{
size_t v___x_298_; size_t v___x_299_; lean_object* v___x_300_; 
lean_del_object(v___x_290_);
v___x_298_ = ((size_t)0ULL);
v___x_299_ = lean_usize_of_nat(v___x_293_);
v___x_300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(v_auxDeclToFullName_280_, v_cs_288_, v___x_298_, v___x_299_, v_x_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec_ref(v_cs_288_);
return v___x_300_;
}
}
}
else
{
lean_object* v_vs_302_; lean_object* v___x_304_; uint8_t v_isShared_305_; uint8_t v_isSharedCheck_315_; 
v_vs_302_ = lean_ctor_get(v_x_281_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v_x_281_);
if (v_isSharedCheck_315_ == 0)
{
v___x_304_ = v_x_281_;
v_isShared_305_ = v_isSharedCheck_315_;
goto v_resetjp_303_;
}
else
{
lean_inc(v_vs_302_);
lean_dec(v_x_281_);
v___x_304_ = lean_box(0);
v_isShared_305_ = v_isSharedCheck_315_;
goto v_resetjp_303_;
}
v_resetjp_303_:
{
lean_object* v___x_306_; lean_object* v___x_307_; uint8_t v___x_308_; 
v___x_306_ = lean_unsigned_to_nat(0u);
v___x_307_ = lean_array_get_size(v_vs_302_);
v___x_308_ = lean_nat_dec_lt(v___x_306_, v___x_307_);
if (v___x_308_ == 0)
{
lean_object* v___x_310_; 
lean_dec_ref(v_vs_302_);
if (v_isShared_305_ == 0)
{
lean_ctor_set_tag(v___x_304_, 0);
lean_ctor_set(v___x_304_, 0, v_x_282_);
v___x_310_ = v___x_304_;
goto v_reusejp_309_;
}
else
{
lean_object* v_reuseFailAlloc_311_; 
v_reuseFailAlloc_311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_311_, 0, v_x_282_);
v___x_310_ = v_reuseFailAlloc_311_;
goto v_reusejp_309_;
}
v_reusejp_309_:
{
return v___x_310_;
}
}
else
{
size_t v___x_312_; size_t v___x_313_; lean_object* v___x_314_; 
lean_del_object(v___x_304_);
v___x_312_ = ((size_t)0ULL);
v___x_313_ = lean_usize_of_nat(v___x_307_);
v___x_314_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_280_, v_vs_302_, v___x_312_, v___x_313_, v_x_282_, v___y_283_, v___y_284_, v___y_285_, v___y_286_);
lean_dec_ref(v_vs_302_);
return v___x_314_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(lean_object* v_auxDeclToFullName_316_, lean_object* v_as_317_, size_t v_i_318_, size_t v_stop_319_, lean_object* v_b_320_, lean_object* v___y_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_){
_start:
{
uint8_t v___x_326_; 
v___x_326_ = lean_usize_dec_eq(v_i_318_, v_stop_319_);
if (v___x_326_ == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = lean_array_uget_borrowed(v_as_317_, v_i_318_);
lean_inc(v___x_327_);
v___x_328_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(v_auxDeclToFullName_316_, v___x_327_, v_b_320_, v___y_321_, v___y_322_, v___y_323_, v___y_324_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; size_t v___x_330_; size_t v___x_331_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
lean_inc(v_a_329_);
lean_dec_ref_known(v___x_328_, 1);
v___x_330_ = ((size_t)1ULL);
v___x_331_ = lean_usize_add(v_i_318_, v___x_330_);
v_i_318_ = v___x_331_;
v_b_320_ = v_a_329_;
goto _start;
}
else
{
return v___x_328_;
}
}
else
{
lean_object* v___x_333_; 
v___x_333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_333_, 0, v_b_320_);
return v___x_333_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8___boxed(lean_object* v_auxDeclToFullName_334_, lean_object* v_as_335_, lean_object* v_i_336_, lean_object* v_stop_337_, lean_object* v_b_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
size_t v_i_boxed_344_; size_t v_stop_boxed_345_; lean_object* v_res_346_; 
v_i_boxed_344_ = lean_unbox_usize(v_i_336_);
lean_dec(v_i_336_);
v_stop_boxed_345_ = lean_unbox_usize(v_stop_337_);
lean_dec(v_stop_337_);
v_res_346_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(v_auxDeclToFullName_334_, v_as_335_, v_i_boxed_344_, v_stop_boxed_345_, v_b_338_, v___y_339_, v___y_340_, v___y_341_, v___y_342_);
lean_dec(v___y_342_);
lean_dec_ref(v___y_341_);
lean_dec(v___y_340_);
lean_dec_ref(v___y_339_);
lean_dec_ref(v_as_335_);
lean_dec(v_auxDeclToFullName_334_);
return v_res_346_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object* v_auxDeclToFullName_347_, lean_object* v_x_348_, lean_object* v_x_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(v_auxDeclToFullName_347_, v_x_348_, v_x_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
lean_dec(v_auxDeclToFullName_347_);
return v_res_355_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0(void){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_356_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(lean_object* v_auxDeclToFullName_357_, lean_object* v_x_358_, size_t v_x_359_, size_t v_x_360_, lean_object* v_x_361_, lean_object* v___y_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_){
_start:
{
if (lean_obj_tag(v_x_358_) == 0)
{
lean_object* v_cs_367_; lean_object* v___x_368_; size_t v___x_369_; lean_object* v_j_370_; lean_object* v___x_371_; size_t v___x_372_; size_t v___x_373_; size_t v___x_374_; size_t v___x_375_; size_t v___x_376_; size_t v___x_377_; lean_object* v___x_378_; 
v_cs_367_ = lean_ctor_get(v_x_358_, 0);
lean_inc_ref(v_cs_367_);
lean_dec_ref_known(v_x_358_, 1);
v___x_368_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0);
v___x_369_ = lean_usize_shift_right(v_x_359_, v_x_360_);
v_j_370_ = lean_usize_to_nat(v___x_369_);
v___x_371_ = lean_array_get_borrowed(v___x_368_, v_cs_367_, v_j_370_);
v___x_372_ = ((size_t)1ULL);
v___x_373_ = lean_usize_shift_left(v___x_372_, v_x_360_);
v___x_374_ = lean_usize_sub(v___x_373_, v___x_372_);
v___x_375_ = lean_usize_land(v_x_359_, v___x_374_);
v___x_376_ = ((size_t)5ULL);
v___x_377_ = lean_usize_sub(v_x_360_, v___x_376_);
lean_inc(v___x_371_);
v___x_378_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(v_auxDeclToFullName_357_, v___x_371_, v___x_375_, v___x_377_, v_x_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v_a_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; uint8_t v___x_383_; 
v_a_379_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_a_379_);
v___x_380_ = lean_unsigned_to_nat(1u);
v___x_381_ = lean_nat_add(v_j_370_, v___x_380_);
lean_dec(v_j_370_);
v___x_382_ = lean_array_get_size(v_cs_367_);
v___x_383_ = lean_nat_dec_lt(v___x_381_, v___x_382_);
if (v___x_383_ == 0)
{
lean_dec(v___x_381_);
lean_dec(v_a_379_);
lean_dec_ref(v_cs_367_);
return v___x_378_;
}
else
{
size_t v___x_384_; size_t v___x_385_; lean_object* v___x_386_; 
lean_dec_ref_known(v___x_378_, 1);
v___x_384_ = lean_usize_of_nat(v___x_381_);
lean_dec(v___x_381_);
v___x_385_ = lean_usize_of_nat(v___x_382_);
v___x_386_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(v_auxDeclToFullName_357_, v_cs_367_, v___x_384_, v___x_385_, v_a_379_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
lean_dec_ref(v_cs_367_);
return v___x_386_;
}
}
else
{
lean_dec(v_j_370_);
lean_dec_ref(v_cs_367_);
return v___x_378_;
}
}
else
{
lean_object* v_vs_387_; lean_object* v___x_389_; uint8_t v_isShared_390_; uint8_t v_isSharedCheck_400_; 
v_vs_387_ = lean_ctor_get(v_x_358_, 0);
v_isSharedCheck_400_ = !lean_is_exclusive(v_x_358_);
if (v_isSharedCheck_400_ == 0)
{
v___x_389_ = v_x_358_;
v_isShared_390_ = v_isSharedCheck_400_;
goto v_resetjp_388_;
}
else
{
lean_inc(v_vs_387_);
lean_dec(v_x_358_);
v___x_389_ = lean_box(0);
v_isShared_390_ = v_isSharedCheck_400_;
goto v_resetjp_388_;
}
v_resetjp_388_:
{
lean_object* v___x_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_391_ = lean_usize_to_nat(v_x_359_);
v___x_392_ = lean_array_get_size(v_vs_387_);
v___x_393_ = lean_nat_dec_lt(v___x_391_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_395_; 
lean_dec(v___x_391_);
lean_dec_ref(v_vs_387_);
if (v_isShared_390_ == 0)
{
lean_ctor_set_tag(v___x_389_, 0);
lean_ctor_set(v___x_389_, 0, v_x_361_);
v___x_395_ = v___x_389_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_x_361_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
else
{
size_t v___x_397_; size_t v___x_398_; lean_object* v___x_399_; 
lean_del_object(v___x_389_);
v___x_397_ = lean_usize_of_nat(v___x_391_);
lean_dec(v___x_391_);
v___x_398_ = lean_usize_of_nat(v___x_392_);
v___x_399_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_357_, v_vs_387_, v___x_397_, v___x_398_, v_x_361_, v___y_362_, v___y_363_, v___y_364_, v___y_365_);
lean_dec_ref(v_vs_387_);
return v___x_399_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___boxed(lean_object* v_auxDeclToFullName_401_, lean_object* v_x_402_, lean_object* v_x_403_, lean_object* v_x_404_, lean_object* v_x_405_, lean_object* v___y_406_, lean_object* v___y_407_, lean_object* v___y_408_, lean_object* v___y_409_, lean_object* v___y_410_){
_start:
{
size_t v_x_5814__boxed_411_; size_t v_x_5815__boxed_412_; lean_object* v_res_413_; 
v_x_5814__boxed_411_ = lean_unbox_usize(v_x_403_);
lean_dec(v_x_403_);
v_x_5815__boxed_412_ = lean_unbox_usize(v_x_404_);
lean_dec(v_x_404_);
v_res_413_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(v_auxDeclToFullName_401_, v_x_402_, v_x_5814__boxed_411_, v_x_5815__boxed_412_, v_x_405_, v___y_406_, v___y_407_, v___y_408_, v___y_409_);
lean_dec(v___y_409_);
lean_dec_ref(v___y_408_);
lean_dec(v___y_407_);
lean_dec_ref(v___y_406_);
lean_dec(v_auxDeclToFullName_401_);
return v_res_413_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4(lean_object* v_auxDeclToFullName_414_, lean_object* v_t_415_, lean_object* v_init_416_, lean_object* v_start_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_){
_start:
{
lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_423_ = lean_unsigned_to_nat(0u);
v___x_424_ = lean_nat_dec_eq(v_start_417_, v___x_423_);
if (v___x_424_ == 0)
{
lean_object* v_root_425_; lean_object* v_tail_426_; size_t v_shift_427_; lean_object* v_tailOff_428_; uint8_t v___x_429_; 
v_root_425_ = lean_ctor_get(v_t_415_, 0);
lean_inc_ref(v_root_425_);
v_tail_426_ = lean_ctor_get(v_t_415_, 1);
lean_inc_ref(v_tail_426_);
v_shift_427_ = lean_ctor_get_usize(v_t_415_, 4);
v_tailOff_428_ = lean_ctor_get(v_t_415_, 3);
lean_inc(v_tailOff_428_);
lean_dec_ref(v_t_415_);
v___x_429_ = lean_nat_dec_le(v_tailOff_428_, v_start_417_);
if (v___x_429_ == 0)
{
size_t v___x_430_; lean_object* v___x_431_; 
lean_dec(v_tailOff_428_);
v___x_430_ = lean_usize_of_nat(v_start_417_);
v___x_431_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(v_auxDeclToFullName_414_, v_root_425_, v___x_430_, v_shift_427_, v_init_416_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
v___x_433_ = lean_array_get_size(v_tail_426_);
v___x_434_ = lean_nat_dec_lt(v___x_423_, v___x_433_);
if (v___x_434_ == 0)
{
lean_dec(v_a_432_);
lean_dec_ref(v_tail_426_);
return v___x_431_;
}
else
{
size_t v___x_435_; size_t v___x_436_; lean_object* v___x_437_; 
lean_dec_ref_known(v___x_431_, 1);
v___x_435_ = ((size_t)0ULL);
v___x_436_ = lean_usize_of_nat(v___x_433_);
v___x_437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_414_, v_tail_426_, v___x_435_, v___x_436_, v_a_432_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec_ref(v_tail_426_);
return v___x_437_;
}
}
else
{
lean_dec_ref(v_tail_426_);
return v___x_431_;
}
}
else
{
lean_object* v___x_438_; lean_object* v___x_439_; uint8_t v___x_440_; 
lean_dec_ref(v_root_425_);
v___x_438_ = lean_nat_sub(v_start_417_, v_tailOff_428_);
lean_dec(v_tailOff_428_);
v___x_439_ = lean_array_get_size(v_tail_426_);
v___x_440_ = lean_nat_dec_lt(v___x_438_, v___x_439_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; 
lean_dec(v___x_438_);
lean_dec_ref(v_tail_426_);
v___x_441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_441_, 0, v_init_416_);
return v___x_441_;
}
else
{
size_t v___x_442_; size_t v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_usize_of_nat(v___x_438_);
lean_dec(v___x_438_);
v___x_443_ = lean_usize_of_nat(v___x_439_);
v___x_444_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_414_, v_tail_426_, v___x_442_, v___x_443_, v_init_416_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec_ref(v_tail_426_);
return v___x_444_;
}
}
}
else
{
lean_object* v_root_445_; lean_object* v_tail_446_; lean_object* v___x_447_; 
v_root_445_ = lean_ctor_get(v_t_415_, 0);
lean_inc_ref(v_root_445_);
v_tail_446_ = lean_ctor_get(v_t_415_, 1);
lean_inc_ref(v_tail_446_);
lean_dec_ref(v_t_415_);
v___x_447_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(v_auxDeclToFullName_414_, v_root_445_, v_init_416_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
if (lean_obj_tag(v___x_447_) == 0)
{
lean_object* v_a_448_; lean_object* v___x_449_; uint8_t v___x_450_; 
v_a_448_ = lean_ctor_get(v___x_447_, 0);
lean_inc(v_a_448_);
v___x_449_ = lean_array_get_size(v_tail_446_);
v___x_450_ = lean_nat_dec_lt(v___x_423_, v___x_449_);
if (v___x_450_ == 0)
{
lean_dec(v_a_448_);
lean_dec_ref(v_tail_446_);
return v___x_447_;
}
else
{
size_t v___x_451_; size_t v___x_452_; lean_object* v___x_453_; 
lean_dec_ref_known(v___x_447_, 1);
v___x_451_ = ((size_t)0ULL);
v___x_452_ = lean_usize_of_nat(v___x_449_);
v___x_453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_414_, v_tail_446_, v___x_451_, v___x_452_, v_a_448_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec_ref(v_tail_446_);
return v___x_453_;
}
}
else
{
lean_dec_ref(v_tail_446_);
return v___x_447_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_auxDeclToFullName_454_, lean_object* v_t_455_, lean_object* v_init_456_, lean_object* v_start_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4(v_auxDeclToFullName_454_, v_t_455_, v_init_456_, v_start_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_);
lean_dec(v___y_461_);
lean_dec_ref(v___y_460_);
lean_dec(v___y_459_);
lean_dec_ref(v___y_458_);
lean_dec(v_start_457_);
lean_dec(v_auxDeclToFullName_454_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(lean_object* v_auxDeclToFullName_464_, lean_object* v_lctx_465_, lean_object* v_init_466_, lean_object* v_start_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_){
_start:
{
lean_object* v_decls_473_; lean_object* v___x_474_; 
v_decls_473_ = lean_ctor_get(v_lctx_465_, 1);
lean_inc_ref(v_decls_473_);
lean_dec_ref(v_lctx_465_);
v___x_474_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4(v_auxDeclToFullName_464_, v_decls_473_, v_init_466_, v_start_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_);
return v___x_474_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___boxed(lean_object* v_auxDeclToFullName_475_, lean_object* v_lctx_476_, lean_object* v_init_477_, lean_object* v_start_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
lean_object* v_res_484_; 
v_res_484_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(v_auxDeclToFullName_475_, v_lctx_476_, v_init_477_, v_start_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
lean_dec(v_start_478_);
lean_dec(v_auxDeclToFullName_475_);
return v_res_484_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_485_; 
v___x_485_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_485_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0);
v___x_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_488_ = lean_unsigned_to_nat(32u);
v___x_489_ = lean_mk_empty_array_with_capacity(v___x_488_);
v___x_490_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_490_, 0, v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_491_ = ((size_t)5ULL);
v___x_492_ = lean_unsigned_to_nat(0u);
v___x_493_ = lean_unsigned_to_nat(32u);
v___x_494_ = lean_mk_empty_array_with_capacity(v___x_493_);
v___x_495_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2);
v___x_496_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_496_, 0, v___x_495_);
lean_ctor_set(v___x_496_, 1, v___x_494_);
lean_ctor_set(v___x_496_, 2, v___x_492_);
lean_ctor_set(v___x_496_, 3, v___x_492_);
lean_ctor_set_usize(v___x_496_, 4, v___x_491_);
return v___x_496_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_497_ = lean_box(1);
v___x_498_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3);
v___x_499_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1);
v___x_500_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_498_);
lean_ctor_set(v___x_500_, 2, v___x_497_);
return v___x_500_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(lean_object* v_lctx_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_auxDeclToFullName_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; 
v_auxDeclToFullName_507_ = lean_ctor_get(v_lctx_501_, 2);
lean_inc(v_auxDeclToFullName_507_);
v___x_508_ = lean_unsigned_to_nat(0u);
v___x_509_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4);
v___x_510_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(v_auxDeclToFullName_507_, v_lctx_501_, v___x_509_, v___x_508_, v___y_502_, v___y_503_, v___y_504_, v___y_505_);
lean_dec(v_auxDeclToFullName_507_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___boxed(lean_object* v_lctx_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(v_lctx_511_, v___y_512_, v___y_513_, v___y_514_, v___y_515_);
lean_dec(v___y_515_);
lean_dec_ref(v___y_514_);
lean_dec(v___y_513_);
lean_dec_ref(v___y_512_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11___redArg(lean_object* v_x_518_, lean_object* v_x_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
lean_object* v_ks_522_; lean_object* v_vs_523_; lean_object* v___x_525_; uint8_t v_isShared_526_; uint8_t v_isSharedCheck_547_; 
v_ks_522_ = lean_ctor_get(v_x_518_, 0);
v_vs_523_ = lean_ctor_get(v_x_518_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v_x_518_);
if (v_isSharedCheck_547_ == 0)
{
v___x_525_ = v_x_518_;
v_isShared_526_ = v_isSharedCheck_547_;
goto v_resetjp_524_;
}
else
{
lean_inc(v_vs_523_);
lean_inc(v_ks_522_);
lean_dec(v_x_518_);
v___x_525_ = lean_box(0);
v_isShared_526_ = v_isSharedCheck_547_;
goto v_resetjp_524_;
}
v_resetjp_524_:
{
lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_527_ = lean_array_get_size(v_ks_522_);
v___x_528_ = lean_nat_dec_lt(v_x_519_, v___x_527_);
if (v___x_528_ == 0)
{
lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_532_; 
lean_dec(v_x_519_);
v___x_529_ = lean_array_push(v_ks_522_, v_x_520_);
v___x_530_ = lean_array_push(v_vs_523_, v_x_521_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 1, v___x_530_);
lean_ctor_set(v___x_525_, 0, v___x_529_);
v___x_532_ = v___x_525_;
goto v_reusejp_531_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_529_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v___x_530_);
v___x_532_ = v_reuseFailAlloc_533_;
goto v_reusejp_531_;
}
v_reusejp_531_:
{
return v___x_532_;
}
}
else
{
lean_object* v_k_x27_534_; uint8_t v___x_535_; 
v_k_x27_534_ = lean_array_fget_borrowed(v_ks_522_, v_x_519_);
v___x_535_ = l_Lean_instBEqMVarId_beq(v_x_520_, v_k_x27_534_);
if (v___x_535_ == 0)
{
lean_object* v___x_537_; 
if (v_isShared_526_ == 0)
{
v___x_537_ = v___x_525_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_ks_522_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v_vs_523_);
v___x_537_ = v_reuseFailAlloc_541_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_unsigned_to_nat(1u);
v___x_539_ = lean_nat_add(v_x_519_, v___x_538_);
lean_dec(v_x_519_);
v_x_518_ = v___x_537_;
v_x_519_ = v___x_539_;
goto _start;
}
}
else
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_542_ = lean_array_fset(v_ks_522_, v_x_519_, v_x_520_);
v___x_543_ = lean_array_fset(v_vs_523_, v_x_519_, v_x_521_);
lean_dec(v_x_519_);
if (v_isShared_526_ == 0)
{
lean_ctor_set(v___x_525_, 1, v___x_543_);
lean_ctor_set(v___x_525_, 0, v___x_542_);
v___x_545_ = v___x_525_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_542_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v___x_543_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7___redArg(lean_object* v_n_548_, lean_object* v_k_549_, lean_object* v_v_550_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_unsigned_to_nat(0u);
v___x_552_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11___redArg(v_n_548_, v___x_551_, v_k_549_, v_v_550_);
return v___x_552_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_553_; 
v___x_553_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(lean_object* v_x_554_, size_t v_x_555_, size_t v_x_556_, lean_object* v_x_557_, lean_object* v_x_558_){
_start:
{
if (lean_obj_tag(v_x_554_) == 0)
{
lean_object* v_es_559_; size_t v___x_560_; size_t v___x_561_; lean_object* v_j_562_; lean_object* v___x_563_; uint8_t v___x_564_; 
v_es_559_ = lean_ctor_get(v_x_554_, 0);
v___x_560_ = ((size_t)31ULL);
v___x_561_ = lean_usize_land(v_x_555_, v___x_560_);
v_j_562_ = lean_usize_to_nat(v___x_561_);
v___x_563_ = lean_array_get_size(v_es_559_);
v___x_564_ = lean_nat_dec_lt(v_j_562_, v___x_563_);
if (v___x_564_ == 0)
{
lean_dec(v_j_562_);
lean_dec(v_x_558_);
lean_dec(v_x_557_);
return v_x_554_;
}
else
{
lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_603_; 
lean_inc_ref(v_es_559_);
v_isSharedCheck_603_ = !lean_is_exclusive(v_x_554_);
if (v_isSharedCheck_603_ == 0)
{
lean_object* v_unused_604_; 
v_unused_604_ = lean_ctor_get(v_x_554_, 0);
lean_dec(v_unused_604_);
v___x_566_ = v_x_554_;
v_isShared_567_ = v_isSharedCheck_603_;
goto v_resetjp_565_;
}
else
{
lean_dec(v_x_554_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_603_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v_v_568_; lean_object* v___x_569_; lean_object* v_xs_x27_570_; lean_object* v___y_572_; 
v_v_568_ = lean_array_fget(v_es_559_, v_j_562_);
v___x_569_ = lean_box(0);
v_xs_x27_570_ = lean_array_fset(v_es_559_, v_j_562_, v___x_569_);
switch(lean_obj_tag(v_v_568_))
{
case 0:
{
lean_object* v_key_577_; lean_object* v_val_578_; lean_object* v___x_580_; uint8_t v_isShared_581_; uint8_t v_isSharedCheck_588_; 
v_key_577_ = lean_ctor_get(v_v_568_, 0);
v_val_578_ = lean_ctor_get(v_v_568_, 1);
v_isSharedCheck_588_ = !lean_is_exclusive(v_v_568_);
if (v_isSharedCheck_588_ == 0)
{
v___x_580_ = v_v_568_;
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
else
{
lean_inc(v_val_578_);
lean_inc(v_key_577_);
lean_dec(v_v_568_);
v___x_580_ = lean_box(0);
v_isShared_581_ = v_isSharedCheck_588_;
goto v_resetjp_579_;
}
v_resetjp_579_:
{
uint8_t v___x_582_; 
v___x_582_ = l_Lean_instBEqMVarId_beq(v_x_557_, v_key_577_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; lean_object* v___x_584_; 
lean_del_object(v___x_580_);
v___x_583_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_577_, v_val_578_, v_x_557_, v_x_558_);
v___x_584_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_584_, 0, v___x_583_);
v___y_572_ = v___x_584_;
goto v___jp_571_;
}
else
{
lean_object* v___x_586_; 
lean_dec(v_val_578_);
lean_dec(v_key_577_);
if (v_isShared_581_ == 0)
{
lean_ctor_set(v___x_580_, 1, v_x_558_);
lean_ctor_set(v___x_580_, 0, v_x_557_);
v___x_586_ = v___x_580_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_587_; 
v_reuseFailAlloc_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_587_, 0, v_x_557_);
lean_ctor_set(v_reuseFailAlloc_587_, 1, v_x_558_);
v___x_586_ = v_reuseFailAlloc_587_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
v___y_572_ = v___x_586_;
goto v___jp_571_;
}
}
}
}
case 1:
{
lean_object* v_node_589_; lean_object* v___x_591_; uint8_t v_isShared_592_; uint8_t v_isSharedCheck_601_; 
v_node_589_ = lean_ctor_get(v_v_568_, 0);
v_isSharedCheck_601_ = !lean_is_exclusive(v_v_568_);
if (v_isSharedCheck_601_ == 0)
{
v___x_591_ = v_v_568_;
v_isShared_592_ = v_isSharedCheck_601_;
goto v_resetjp_590_;
}
else
{
lean_inc(v_node_589_);
lean_dec(v_v_568_);
v___x_591_ = lean_box(0);
v_isShared_592_ = v_isSharedCheck_601_;
goto v_resetjp_590_;
}
v_resetjp_590_:
{
size_t v___x_593_; size_t v___x_594_; size_t v___x_595_; size_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_599_; 
v___x_593_ = ((size_t)5ULL);
v___x_594_ = lean_usize_shift_right(v_x_555_, v___x_593_);
v___x_595_ = ((size_t)1ULL);
v___x_596_ = lean_usize_add(v_x_556_, v___x_595_);
v___x_597_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_node_589_, v___x_594_, v___x_596_, v_x_557_, v_x_558_);
if (v_isShared_592_ == 0)
{
lean_ctor_set(v___x_591_, 0, v___x_597_);
v___x_599_ = v___x_591_;
goto v_reusejp_598_;
}
else
{
lean_object* v_reuseFailAlloc_600_; 
v_reuseFailAlloc_600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_600_, 0, v___x_597_);
v___x_599_ = v_reuseFailAlloc_600_;
goto v_reusejp_598_;
}
v_reusejp_598_:
{
v___y_572_ = v___x_599_;
goto v___jp_571_;
}
}
}
default: 
{
lean_object* v___x_602_; 
v___x_602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_602_, 0, v_x_557_);
lean_ctor_set(v___x_602_, 1, v_x_558_);
v___y_572_ = v___x_602_;
goto v___jp_571_;
}
}
v___jp_571_:
{
lean_object* v___x_573_; lean_object* v___x_575_; 
v___x_573_ = lean_array_fset(v_xs_x27_570_, v_j_562_, v___y_572_);
lean_dec(v_j_562_);
if (v_isShared_567_ == 0)
{
lean_ctor_set(v___x_566_, 0, v___x_573_);
v___x_575_ = v___x_566_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_573_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
}
}
else
{
lean_object* v_ks_605_; lean_object* v_vs_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_624_; 
v_ks_605_ = lean_ctor_get(v_x_554_, 0);
v_vs_606_ = lean_ctor_get(v_x_554_, 1);
v_isSharedCheck_624_ = !lean_is_exclusive(v_x_554_);
if (v_isSharedCheck_624_ == 0)
{
v___x_608_ = v_x_554_;
v_isShared_609_ = v_isSharedCheck_624_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_vs_606_);
lean_inc(v_ks_605_);
lean_dec(v_x_554_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_624_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_623_; 
v_reuseFailAlloc_623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_623_, 0, v_ks_605_);
lean_ctor_set(v_reuseFailAlloc_623_, 1, v_vs_606_);
v___x_611_ = v_reuseFailAlloc_623_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
lean_object* v_newNode_612_; size_t v___x_613_; uint8_t v___x_614_; 
v_newNode_612_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7___redArg(v___x_611_, v_x_557_, v_x_558_);
v___x_613_ = ((size_t)7ULL);
v___x_614_ = lean_usize_dec_le(v___x_613_, v_x_556_);
if (v___x_614_ == 0)
{
lean_object* v___x_615_; lean_object* v___x_616_; uint8_t v___x_617_; 
v___x_615_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_612_);
v___x_616_ = lean_unsigned_to_nat(4u);
v___x_617_ = lean_nat_dec_lt(v___x_615_, v___x_616_);
lean_dec(v___x_615_);
if (v___x_617_ == 0)
{
lean_object* v_ks_618_; lean_object* v_vs_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; 
v_ks_618_ = lean_ctor_get(v_newNode_612_, 0);
lean_inc_ref(v_ks_618_);
v_vs_619_ = lean_ctor_get(v_newNode_612_, 1);
lean_inc_ref(v_vs_619_);
lean_dec_ref(v_newNode_612_);
v___x_620_ = lean_unsigned_to_nat(0u);
v___x_621_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0);
v___x_622_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(v_x_556_, v_ks_618_, v_vs_619_, v___x_620_, v___x_621_);
lean_dec_ref(v_vs_619_);
lean_dec_ref(v_ks_618_);
return v___x_622_;
}
else
{
return v_newNode_612_;
}
}
else
{
return v_newNode_612_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(size_t v_depth_625_, lean_object* v_keys_626_, lean_object* v_vals_627_, lean_object* v_i_628_, lean_object* v_entries_629_){
_start:
{
lean_object* v___x_630_; uint8_t v___x_631_; 
v___x_630_ = lean_array_get_size(v_keys_626_);
v___x_631_ = lean_nat_dec_lt(v_i_628_, v___x_630_);
if (v___x_631_ == 0)
{
lean_dec(v_i_628_);
return v_entries_629_;
}
else
{
lean_object* v_k_632_; lean_object* v_v_633_; uint64_t v___x_634_; size_t v_h_635_; size_t v___x_636_; lean_object* v___x_637_; size_t v___x_638_; size_t v___x_639_; size_t v___x_640_; size_t v_h_641_; lean_object* v___x_642_; lean_object* v___x_643_; 
v_k_632_ = lean_array_fget_borrowed(v_keys_626_, v_i_628_);
v_v_633_ = lean_array_fget_borrowed(v_vals_627_, v_i_628_);
v___x_634_ = l_Lean_instHashableMVarId_hash(v_k_632_);
v_h_635_ = lean_uint64_to_usize(v___x_634_);
v___x_636_ = ((size_t)5ULL);
v___x_637_ = lean_unsigned_to_nat(1u);
v___x_638_ = ((size_t)1ULL);
v___x_639_ = lean_usize_sub(v_depth_625_, v___x_638_);
v___x_640_ = lean_usize_mul(v___x_636_, v___x_639_);
v_h_641_ = lean_usize_shift_right(v_h_635_, v___x_640_);
v___x_642_ = lean_nat_add(v_i_628_, v___x_637_);
lean_dec(v_i_628_);
lean_inc(v_v_633_);
lean_inc(v_k_632_);
v___x_643_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_entries_629_, v_h_641_, v_depth_625_, v_k_632_, v_v_633_);
v_i_628_ = v___x_642_;
v_entries_629_ = v___x_643_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_depth_645_, lean_object* v_keys_646_, lean_object* v_vals_647_, lean_object* v_i_648_, lean_object* v_entries_649_){
_start:
{
size_t v_depth_boxed_650_; lean_object* v_res_651_; 
v_depth_boxed_650_ = lean_unbox_usize(v_depth_645_);
lean_dec(v_depth_645_);
v_res_651_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(v_depth_boxed_650_, v_keys_646_, v_vals_647_, v_i_648_, v_entries_649_);
lean_dec_ref(v_vals_647_);
lean_dec_ref(v_keys_646_);
return v_res_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_x_652_, lean_object* v_x_653_, lean_object* v_x_654_, lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
size_t v_x_6140__boxed_657_; size_t v_x_6141__boxed_658_; lean_object* v_res_659_; 
v_x_6140__boxed_657_ = lean_unbox_usize(v_x_653_);
lean_dec(v_x_653_);
v_x_6141__boxed_658_ = lean_unbox_usize(v_x_654_);
lean_dec(v_x_654_);
v_res_659_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_x_652_, v_x_6140__boxed_657_, v_x_6141__boxed_658_, v_x_655_, v_x_656_);
return v_res_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(lean_object* v_x_660_, lean_object* v_x_661_, lean_object* v_x_662_){
_start:
{
uint64_t v___x_663_; size_t v___x_664_; size_t v___x_665_; lean_object* v___x_666_; 
v___x_663_ = l_Lean_instHashableMVarId_hash(v_x_661_);
v___x_664_ = lean_uint64_to_usize(v___x_663_);
v___x_665_ = ((size_t)1ULL);
v___x_666_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_x_660_, v___x_664_, v___x_665_, v_x_661_, v_x_662_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(lean_object* v_mvarId_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_){
_start:
{
lean_object* v___x_673_; lean_object* v_mctx_674_; lean_object* v_mvarDecl_675_; lean_object* v_userName_676_; lean_object* v_lctx_677_; lean_object* v_type_678_; lean_object* v_depth_679_; lean_object* v_localInstances_680_; uint8_t v_kind_681_; lean_object* v_numScopeArgs_682_; lean_object* v_index_683_; lean_object* v___x_685_; uint8_t v_isShared_686_; uint8_t v_isSharedCheck_747_; 
v___x_673_ = lean_st_ref_get(v___y_669_);
v_mctx_674_ = lean_ctor_get(v___x_673_, 0);
lean_inc_ref(v_mctx_674_);
lean_dec(v___x_673_);
lean_inc(v_mvarId_667_);
v_mvarDecl_675_ = l_Lean_MetavarContext_getDecl(v_mctx_674_, v_mvarId_667_);
lean_dec_ref(v_mctx_674_);
v_userName_676_ = lean_ctor_get(v_mvarDecl_675_, 0);
v_lctx_677_ = lean_ctor_get(v_mvarDecl_675_, 1);
v_type_678_ = lean_ctor_get(v_mvarDecl_675_, 2);
v_depth_679_ = lean_ctor_get(v_mvarDecl_675_, 3);
v_localInstances_680_ = lean_ctor_get(v_mvarDecl_675_, 4);
v_kind_681_ = lean_ctor_get_uint8(v_mvarDecl_675_, sizeof(void*)*7);
v_numScopeArgs_682_ = lean_ctor_get(v_mvarDecl_675_, 5);
v_index_683_ = lean_ctor_get(v_mvarDecl_675_, 6);
v_isSharedCheck_747_ = !lean_is_exclusive(v_mvarDecl_675_);
if (v_isSharedCheck_747_ == 0)
{
v___x_685_ = v_mvarDecl_675_;
v_isShared_686_ = v_isSharedCheck_747_;
goto v_resetjp_684_;
}
else
{
lean_inc(v_index_683_);
lean_inc(v_numScopeArgs_682_);
lean_inc(v_localInstances_680_);
lean_inc(v_depth_679_);
lean_inc(v_type_678_);
lean_inc(v_lctx_677_);
lean_inc(v_userName_676_);
lean_dec(v_mvarDecl_675_);
v___x_685_ = lean_box(0);
v_isShared_686_ = v_isSharedCheck_747_;
goto v_resetjp_684_;
}
v_resetjp_684_:
{
lean_object* v___x_687_; 
v___x_687_ = l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(v_lctx_677_, v___y_668_, v___y_669_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_object* v_a_688_; lean_object* v___x_689_; lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_738_; 
v_a_688_ = lean_ctor_get(v___x_687_, 0);
lean_inc(v_a_688_);
lean_dec_ref_known(v___x_687_, 1);
v___x_689_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_678_, v___y_669_);
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_738_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_738_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_738_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; lean_object* v___x_695_; lean_object* v_fst_696_; lean_object* v_snd_697_; lean_object* v___x_698_; lean_object* v_mctx_699_; lean_object* v_cache_700_; lean_object* v_zetaDeltaFVarIds_701_; lean_object* v_postponed_702_; lean_object* v_diag_703_; lean_object* v___x_705_; uint8_t v_isShared_706_; uint8_t v_isSharedCheck_737_; 
v___x_694_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_694_, 0, v_a_688_);
lean_ctor_set(v___x_694_, 1, v_a_690_);
v___x_695_ = lean_sharecommon_quick(v___x_694_);
lean_dec_ref_known(v___x_694_, 2);
v_fst_696_ = lean_ctor_get(v___x_695_, 0);
lean_inc(v_fst_696_);
v_snd_697_ = lean_ctor_get(v___x_695_, 1);
lean_inc(v_snd_697_);
lean_dec(v___x_695_);
v___x_698_ = lean_st_ref_take(v___y_669_);
v_mctx_699_ = lean_ctor_get(v___x_698_, 0);
v_cache_700_ = lean_ctor_get(v___x_698_, 1);
v_zetaDeltaFVarIds_701_ = lean_ctor_get(v___x_698_, 2);
v_postponed_702_ = lean_ctor_get(v___x_698_, 3);
v_diag_703_ = lean_ctor_get(v___x_698_, 4);
v_isSharedCheck_737_ = !lean_is_exclusive(v___x_698_);
if (v_isSharedCheck_737_ == 0)
{
v___x_705_ = v___x_698_;
v_isShared_706_ = v_isSharedCheck_737_;
goto v_resetjp_704_;
}
else
{
lean_inc(v_diag_703_);
lean_inc(v_postponed_702_);
lean_inc(v_zetaDeltaFVarIds_701_);
lean_inc(v_cache_700_);
lean_inc(v_mctx_699_);
lean_dec(v___x_698_);
v___x_705_ = lean_box(0);
v_isShared_706_ = v_isSharedCheck_737_;
goto v_resetjp_704_;
}
v_resetjp_704_:
{
lean_object* v_depth_707_; lean_object* v_levelAssignDepth_708_; lean_object* v_lmvarCounter_709_; lean_object* v_mvarCounter_710_; lean_object* v_lDecls_711_; lean_object* v_decls_712_; lean_object* v_userNames_713_; lean_object* v_lAssignment_714_; lean_object* v_eAssignment_715_; lean_object* v_dAssignment_716_; lean_object* v_instanceTypedMVars_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_736_; 
v_depth_707_ = lean_ctor_get(v_mctx_699_, 0);
v_levelAssignDepth_708_ = lean_ctor_get(v_mctx_699_, 1);
v_lmvarCounter_709_ = lean_ctor_get(v_mctx_699_, 2);
v_mvarCounter_710_ = lean_ctor_get(v_mctx_699_, 3);
v_lDecls_711_ = lean_ctor_get(v_mctx_699_, 4);
v_decls_712_ = lean_ctor_get(v_mctx_699_, 5);
v_userNames_713_ = lean_ctor_get(v_mctx_699_, 6);
v_lAssignment_714_ = lean_ctor_get(v_mctx_699_, 7);
v_eAssignment_715_ = lean_ctor_get(v_mctx_699_, 8);
v_dAssignment_716_ = lean_ctor_get(v_mctx_699_, 9);
v_instanceTypedMVars_717_ = lean_ctor_get(v_mctx_699_, 10);
v_isSharedCheck_736_ = !lean_is_exclusive(v_mctx_699_);
if (v_isSharedCheck_736_ == 0)
{
v___x_719_ = v_mctx_699_;
v_isShared_720_ = v_isSharedCheck_736_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_instanceTypedMVars_717_);
lean_inc(v_dAssignment_716_);
lean_inc(v_eAssignment_715_);
lean_inc(v_lAssignment_714_);
lean_inc(v_userNames_713_);
lean_inc(v_decls_712_);
lean_inc(v_lDecls_711_);
lean_inc(v_mvarCounter_710_);
lean_inc(v_lmvarCounter_709_);
lean_inc(v_levelAssignDepth_708_);
lean_inc(v_depth_707_);
lean_dec(v_mctx_699_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_736_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_721_; lean_object* v___x_723_; 
v___x_721_ = lean_box(0);
if (v_isShared_686_ == 0)
{
lean_ctor_set(v___x_685_, 2, v_snd_697_);
lean_ctor_set(v___x_685_, 1, v_fst_696_);
v___x_723_ = v___x_685_;
goto v_reusejp_722_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_userName_676_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_fst_696_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_snd_697_);
lean_ctor_set(v_reuseFailAlloc_735_, 3, v_depth_679_);
lean_ctor_set(v_reuseFailAlloc_735_, 4, v_localInstances_680_);
lean_ctor_set(v_reuseFailAlloc_735_, 5, v_numScopeArgs_682_);
lean_ctor_set(v_reuseFailAlloc_735_, 6, v_index_683_);
lean_ctor_set_uint8(v_reuseFailAlloc_735_, sizeof(void*)*7, v_kind_681_);
v___x_723_ = v_reuseFailAlloc_735_;
goto v_reusejp_722_;
}
v_reusejp_722_:
{
lean_object* v___x_724_; lean_object* v___x_726_; 
v___x_724_ = l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(v_decls_712_, v_mvarId_667_, v___x_723_);
if (v_isShared_720_ == 0)
{
lean_ctor_set(v___x_719_, 5, v___x_724_);
v___x_726_ = v___x_719_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v_depth_707_);
lean_ctor_set(v_reuseFailAlloc_734_, 1, v_levelAssignDepth_708_);
lean_ctor_set(v_reuseFailAlloc_734_, 2, v_lmvarCounter_709_);
lean_ctor_set(v_reuseFailAlloc_734_, 3, v_mvarCounter_710_);
lean_ctor_set(v_reuseFailAlloc_734_, 4, v_lDecls_711_);
lean_ctor_set(v_reuseFailAlloc_734_, 5, v___x_724_);
lean_ctor_set(v_reuseFailAlloc_734_, 6, v_userNames_713_);
lean_ctor_set(v_reuseFailAlloc_734_, 7, v_lAssignment_714_);
lean_ctor_set(v_reuseFailAlloc_734_, 8, v_eAssignment_715_);
lean_ctor_set(v_reuseFailAlloc_734_, 9, v_dAssignment_716_);
lean_ctor_set(v_reuseFailAlloc_734_, 10, v_instanceTypedMVars_717_);
v___x_726_ = v_reuseFailAlloc_734_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
lean_object* v___x_728_; 
if (v_isShared_706_ == 0)
{
lean_ctor_set(v___x_705_, 0, v___x_726_);
v___x_728_ = v___x_705_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_733_, 1, v_cache_700_);
lean_ctor_set(v_reuseFailAlloc_733_, 2, v_zetaDeltaFVarIds_701_);
lean_ctor_set(v_reuseFailAlloc_733_, 3, v_postponed_702_);
lean_ctor_set(v_reuseFailAlloc_733_, 4, v_diag_703_);
v___x_728_ = v_reuseFailAlloc_733_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; lean_object* v___x_731_; 
v___x_729_ = lean_st_ref_put(v___y_669_, v___x_728_);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 0, v___x_721_);
v___x_731_ = v___x_692_;
goto v_reusejp_730_;
}
else
{
lean_object* v_reuseFailAlloc_732_; 
v_reuseFailAlloc_732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_732_, 0, v___x_721_);
v___x_731_ = v_reuseFailAlloc_732_;
goto v_reusejp_730_;
}
v_reusejp_730_:
{
return v___x_731_;
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
lean_object* v_a_739_; lean_object* v___x_741_; uint8_t v_isShared_742_; uint8_t v_isSharedCheck_746_; 
lean_del_object(v___x_685_);
lean_dec(v_index_683_);
lean_dec(v_numScopeArgs_682_);
lean_dec_ref(v_localInstances_680_);
lean_dec(v_depth_679_);
lean_dec_ref(v_type_678_);
lean_dec(v_userName_676_);
lean_dec(v_mvarId_667_);
v_a_739_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_746_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_746_ == 0)
{
v___x_741_ = v___x_687_;
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
else
{
lean_inc(v_a_739_);
lean_dec(v___x_687_);
v___x_741_ = lean_box(0);
v_isShared_742_ = v_isSharedCheck_746_;
goto v_resetjp_740_;
}
v_resetjp_740_:
{
lean_object* v___x_744_; 
if (v_isShared_742_ == 0)
{
v___x_744_ = v___x_741_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_a_739_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0___boxed(lean_object* v_mvarId_748_, lean_object* v___y_749_, lean_object* v___y_750_, lean_object* v___y_751_, lean_object* v___y_752_, lean_object* v___y_753_){
_start:
{
lean_object* v_res_754_; 
v_res_754_ = l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(v_mvarId_748_, v___y_749_, v___y_750_, v___y_751_, v___y_752_);
lean_dec(v___y_752_);
lean_dec_ref(v___y_751_);
lean_dec(v___y_750_);
lean_dec_ref(v___y_749_);
return v_res_754_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic(lean_object* v_mvarId_755_, lean_object* v_tacticCode_756_, lean_object* v_ctx_757_, lean_object* v_s_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
lean_object* v___f_764_; lean_object* v___x_765_; 
v___f_764_ = lean_alloc_closure((void*)(l_Lean_Elab_runTactic___lam__0___boxed), 10, 1);
lean_closure_set(v___f_764_, 0, v_tacticCode_756_);
lean_inc(v_mvarId_755_);
v___x_765_ = l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(v_mvarId_755_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
if (lean_obj_tag(v___x_765_) == 0)
{
lean_object* v___x_766_; uint8_t v___x_767_; lean_object* v___x_768_; lean_object* v___f_769_; lean_object* v___x_770_; 
lean_dec_ref_known(v___x_765_, 1);
v___x_766_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run___boxed), 9, 2);
lean_closure_set(v___x_766_, 0, v_mvarId_755_);
lean_closure_set(v___x_766_, 1, v___f_764_);
v___x_767_ = 1;
v___x_768_ = lean_box(v___x_767_);
v___f_769_ = lean_alloc_closure((void*)(l_Lean_Elab_runTactic___lam__1___boxed), 9, 2);
lean_closure_set(v___f_769_, 0, v___x_766_);
lean_closure_set(v___f_769_, 1, v___x_768_);
v___x_770_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___f_769_, v_ctx_757_, v_s_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
return v___x_770_;
}
else
{
lean_object* v_a_771_; lean_object* v___x_773_; uint8_t v_isShared_774_; uint8_t v_isSharedCheck_778_; 
lean_dec_ref(v___f_764_);
lean_dec_ref(v_s_758_);
lean_dec_ref(v_ctx_757_);
lean_dec(v_mvarId_755_);
v_a_771_ = lean_ctor_get(v___x_765_, 0);
v_isSharedCheck_778_ = !lean_is_exclusive(v___x_765_);
if (v_isSharedCheck_778_ == 0)
{
v___x_773_ = v___x_765_;
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
else
{
lean_inc(v_a_771_);
lean_dec(v___x_765_);
v___x_773_ = lean_box(0);
v_isShared_774_ = v_isSharedCheck_778_;
goto v_resetjp_772_;
}
v_resetjp_772_:
{
lean_object* v___x_776_; 
if (v_isShared_774_ == 0)
{
v___x_776_ = v___x_773_;
goto v_reusejp_775_;
}
else
{
lean_object* v_reuseFailAlloc_777_; 
v_reuseFailAlloc_777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_777_, 0, v_a_771_);
v___x_776_ = v_reuseFailAlloc_777_;
goto v_reusejp_775_;
}
v_reusejp_775_:
{
return v___x_776_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___boxed(lean_object* v_mvarId_779_, lean_object* v_tacticCode_780_, lean_object* v_ctx_781_, lean_object* v_s_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_){
_start:
{
lean_object* v_res_788_; 
v_res_788_ = l_Lean_Elab_runTactic(v_mvarId_779_, v_tacticCode_780_, v_ctx_781_, v_s_782_, v___y_783_, v___y_784_, v___y_785_, v___y_786_);
lean_dec(v___y_786_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
return v_res_788_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(lean_object* v_e_789_, lean_object* v___y_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_){
_start:
{
lean_object* v___x_795_; 
v___x_795_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_e_789_, v___y_791_);
return v___x_795_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___boxed(lean_object* v_e_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_, lean_object* v___y_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(v_e_796_, v___y_797_, v___y_798_, v___y_799_, v___y_800_);
lean_dec(v___y_800_);
lean_dec_ref(v___y_799_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2(lean_object* v_00_u03b2_803_, lean_object* v_x_804_, lean_object* v_x_805_, lean_object* v_x_806_){
_start:
{
lean_object* v___x_807_; 
v___x_807_ = l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(v_x_804_, v_x_805_, v_x_806_);
return v___x_807_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_808_, lean_object* v_x_809_, size_t v_x_810_, size_t v_x_811_, lean_object* v_x_812_, lean_object* v_x_813_){
_start:
{
lean_object* v___x_814_; 
v___x_814_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_x_809_, v_x_810_, v_x_811_, v_x_812_, v_x_813_);
return v___x_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_815_, lean_object* v_x_816_, lean_object* v_x_817_, lean_object* v_x_818_, lean_object* v_x_819_, lean_object* v_x_820_){
_start:
{
size_t v_x_6491__boxed_821_; size_t v_x_6492__boxed_822_; lean_object* v_res_823_; 
v_x_6491__boxed_821_ = lean_unbox_usize(v_x_817_);
lean_dec(v_x_817_);
v_x_6492__boxed_822_ = lean_unbox_usize(v_x_818_);
lean_dec(v_x_818_);
v_res_823_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5(v_00_u03b2_815_, v_x_816_, v_x_6491__boxed_821_, v_x_6492__boxed_822_, v_x_819_, v_x_820_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_824_, lean_object* v_n_825_, lean_object* v_k_826_, lean_object* v_v_827_){
_start:
{
lean_object* v___x_828_; 
v___x_828_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7___redArg(v_n_825_, v_k_826_, v_v_827_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_829_, size_t v_depth_830_, lean_object* v_keys_831_, lean_object* v_vals_832_, lean_object* v_heq_833_, lean_object* v_i_834_, lean_object* v_entries_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(v_depth_830_, v_keys_831_, v_vals_832_, v_i_834_, v_entries_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_837_, lean_object* v_depth_838_, lean_object* v_keys_839_, lean_object* v_vals_840_, lean_object* v_heq_841_, lean_object* v_i_842_, lean_object* v_entries_843_){
_start:
{
size_t v_depth_boxed_844_; lean_object* v_res_845_; 
v_depth_boxed_844_ = lean_unbox_usize(v_depth_838_);
lean_dec(v_depth_838_);
v_res_845_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8(v_00_u03b2_837_, v_depth_boxed_844_, v_keys_839_, v_vals_840_, v_heq_841_, v_i_842_, v_entries_843_);
lean_dec_ref(v_vals_840_);
lean_dec_ref(v_keys_839_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11(lean_object* v_00_u03b2_846_, lean_object* v_x_847_, lean_object* v_x_848_, lean_object* v_x_849_, lean_object* v_x_850_){
_start:
{
lean_object* v___x_851_; 
v___x_851_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11___redArg(v_x_847_, v_x_848_, v_x_849_, v_x_850_);
return v___x_851_;
}
}
lean_object* runtime_initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Meta(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_SyntheticMVars(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Meta(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_SyntheticMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Meta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Meta(builtin);
}
#ifdef __cplusplus
}
#endif
