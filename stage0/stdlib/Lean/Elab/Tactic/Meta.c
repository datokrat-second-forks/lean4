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
lean_object* l_instMonadEIO___redArg();
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
static lean_once_cell_t l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4_value;
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
uint8_t v___x_5380__boxed_43_; lean_object* v_res_44_; 
v___x_5380__boxed_43_ = lean_unbox(v___x_35_);
v_res_44_ = l_Lean_Elab_runTactic___lam__1(v___x_34_, v___x_5380__boxed_43_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, v___y_41_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
lean_dec(v___y_39_);
lean_dec_ref(v___y_38_);
lean_dec(v___y_37_);
lean_dec_ref(v___y_36_);
return v_res_44_;
}
}
static lean_object* _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_instMonadEIO___redArg();
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(lean_object* v_msg_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v_toApplicative_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_119_; 
v___x_56_ = lean_obj_once(&l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__0);
v___x_57_ = l_StateRefT_x27_instMonad___redArg(v___x_56_);
v_toApplicative_58_ = lean_ctor_get(v___x_57_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___x_57_);
if (v_isSharedCheck_119_ == 0)
{
lean_object* v_unused_120_; 
v_unused_120_ = lean_ctor_get(v___x_57_, 1);
lean_dec(v_unused_120_);
v___x_60_ = v___x_57_;
v_isShared_61_ = v_isSharedCheck_119_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_toApplicative_58_);
lean_dec(v___x_57_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_119_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v_toFunctor_62_; lean_object* v_toSeq_63_; lean_object* v_toSeqLeft_64_; lean_object* v_toSeqRight_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_117_; 
v_toFunctor_62_ = lean_ctor_get(v_toApplicative_58_, 0);
v_toSeq_63_ = lean_ctor_get(v_toApplicative_58_, 2);
v_toSeqLeft_64_ = lean_ctor_get(v_toApplicative_58_, 3);
v_toSeqRight_65_ = lean_ctor_get(v_toApplicative_58_, 4);
v_isSharedCheck_117_ = !lean_is_exclusive(v_toApplicative_58_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; 
v_unused_118_ = lean_ctor_get(v_toApplicative_58_, 1);
lean_dec(v_unused_118_);
v___x_67_ = v_toApplicative_58_;
v_isShared_68_ = v_isSharedCheck_117_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_toSeqRight_65_);
lean_inc(v_toSeqLeft_64_);
lean_inc(v_toSeq_63_);
lean_inc(v_toFunctor_62_);
lean_dec(v_toApplicative_58_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_117_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___f_69_; lean_object* v___f_70_; lean_object* v___f_71_; lean_object* v___f_72_; lean_object* v___x_73_; lean_object* v___f_74_; lean_object* v___f_75_; lean_object* v___f_76_; lean_object* v___x_78_; 
v___f_69_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__1));
v___f_70_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__2));
lean_inc_ref(v_toFunctor_62_);
v___f_71_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_71_, 0, v_toFunctor_62_);
v___f_72_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_72_, 0, v_toFunctor_62_);
v___x_73_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_73_, 0, v___f_71_);
lean_ctor_set(v___x_73_, 1, v___f_72_);
v___f_74_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_74_, 0, v_toSeqRight_65_);
v___f_75_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_75_, 0, v_toSeqLeft_64_);
v___f_76_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_76_, 0, v_toSeq_63_);
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 4, v___f_74_);
lean_ctor_set(v___x_67_, 3, v___f_75_);
lean_ctor_set(v___x_67_, 2, v___f_76_);
lean_ctor_set(v___x_67_, 1, v___f_69_);
lean_ctor_set(v___x_67_, 0, v___x_73_);
v___x_78_ = v___x_67_;
goto v_reusejp_77_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v___x_73_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v___f_69_);
lean_ctor_set(v_reuseFailAlloc_116_, 2, v___f_76_);
lean_ctor_set(v_reuseFailAlloc_116_, 3, v___f_75_);
lean_ctor_set(v_reuseFailAlloc_116_, 4, v___f_74_);
v___x_78_ = v_reuseFailAlloc_116_;
goto v_reusejp_77_;
}
v_reusejp_77_:
{
lean_object* v___x_80_; 
if (v_isShared_61_ == 0)
{
lean_ctor_set(v___x_60_, 1, v___f_70_);
lean_ctor_set(v___x_60_, 0, v___x_78_);
v___x_80_ = v___x_60_;
goto v_reusejp_79_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_78_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v___f_70_);
v___x_80_ = v_reuseFailAlloc_115_;
goto v_reusejp_79_;
}
v_reusejp_79_:
{
lean_object* v___x_81_; lean_object* v_toApplicative_82_; lean_object* v___x_84_; uint8_t v_isShared_85_; uint8_t v_isSharedCheck_113_; 
v___x_81_ = l_StateRefT_x27_instMonad___redArg(v___x_80_);
v_toApplicative_82_ = lean_ctor_get(v___x_81_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_81_);
if (v_isSharedCheck_113_ == 0)
{
lean_object* v_unused_114_; 
v_unused_114_ = lean_ctor_get(v___x_81_, 1);
lean_dec(v_unused_114_);
v___x_84_ = v___x_81_;
v_isShared_85_ = v_isSharedCheck_113_;
goto v_resetjp_83_;
}
else
{
lean_inc(v_toApplicative_82_);
lean_dec(v___x_81_);
v___x_84_ = lean_box(0);
v_isShared_85_ = v_isSharedCheck_113_;
goto v_resetjp_83_;
}
v_resetjp_83_:
{
lean_object* v_toFunctor_86_; lean_object* v_toSeq_87_; lean_object* v_toSeqLeft_88_; lean_object* v_toSeqRight_89_; lean_object* v___x_91_; uint8_t v_isShared_92_; uint8_t v_isSharedCheck_111_; 
v_toFunctor_86_ = lean_ctor_get(v_toApplicative_82_, 0);
v_toSeq_87_ = lean_ctor_get(v_toApplicative_82_, 2);
v_toSeqLeft_88_ = lean_ctor_get(v_toApplicative_82_, 3);
v_toSeqRight_89_ = lean_ctor_get(v_toApplicative_82_, 4);
v_isSharedCheck_111_ = !lean_is_exclusive(v_toApplicative_82_);
if (v_isSharedCheck_111_ == 0)
{
lean_object* v_unused_112_; 
v_unused_112_ = lean_ctor_get(v_toApplicative_82_, 1);
lean_dec(v_unused_112_);
v___x_91_ = v_toApplicative_82_;
v_isShared_92_ = v_isSharedCheck_111_;
goto v_resetjp_90_;
}
else
{
lean_inc(v_toSeqRight_89_);
lean_inc(v_toSeqLeft_88_);
lean_inc(v_toSeq_87_);
lean_inc(v_toFunctor_86_);
lean_dec(v_toApplicative_82_);
v___x_91_ = lean_box(0);
v_isShared_92_ = v_isSharedCheck_111_;
goto v_resetjp_90_;
}
v_resetjp_90_:
{
lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___f_95_; lean_object* v___f_96_; lean_object* v___x_97_; lean_object* v___f_98_; lean_object* v___f_99_; lean_object* v___f_100_; lean_object* v___x_102_; 
v___f_93_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__3));
v___f_94_ = ((lean_object*)(l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___closed__4));
lean_inc_ref(v_toFunctor_86_);
v___f_95_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_95_, 0, v_toFunctor_86_);
v___f_96_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_96_, 0, v_toFunctor_86_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___f_95_);
lean_ctor_set(v___x_97_, 1, v___f_96_);
v___f_98_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_98_, 0, v_toSeqRight_89_);
v___f_99_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_99_, 0, v_toSeqLeft_88_);
v___f_100_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_100_, 0, v_toSeq_87_);
if (v_isShared_92_ == 0)
{
lean_ctor_set(v___x_91_, 4, v___f_98_);
lean_ctor_set(v___x_91_, 3, v___f_99_);
lean_ctor_set(v___x_91_, 2, v___f_100_);
lean_ctor_set(v___x_91_, 1, v___f_93_);
lean_ctor_set(v___x_91_, 0, v___x_97_);
v___x_102_ = v___x_91_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_110_; 
v_reuseFailAlloc_110_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_110_, 0, v___x_97_);
lean_ctor_set(v_reuseFailAlloc_110_, 1, v___f_93_);
lean_ctor_set(v_reuseFailAlloc_110_, 2, v___f_100_);
lean_ctor_set(v_reuseFailAlloc_110_, 3, v___f_99_);
lean_ctor_set(v_reuseFailAlloc_110_, 4, v___f_98_);
v___x_102_ = v_reuseFailAlloc_110_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
lean_object* v___x_104_; 
if (v_isShared_85_ == 0)
{
lean_ctor_set(v___x_84_, 1, v___f_94_);
lean_ctor_set(v___x_84_, 0, v___x_102_);
v___x_104_ = v___x_84_;
goto v_reusejp_103_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v___x_102_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___f_94_);
v___x_104_ = v_reuseFailAlloc_109_;
goto v_reusejp_103_;
}
v_reusejp_103_:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_3140__overap_107_; lean_object* v___x_108_; 
v___x_105_ = l_Lean_instInhabitedLocalContext_default;
v___x_106_ = l_instInhabitedOfMonad___redArg(v___x_104_, v___x_105_);
v___x_3140__overap_107_ = lean_panic_fn_borrowed(v___x_106_, v_msg_50_);
lean_dec(v___x_106_);
lean_inc(v___y_54_);
lean_inc_ref(v___y_53_);
lean_inc(v___y_52_);
lean_inc_ref(v___y_51_);
v___x_108_ = lean_apply_5(v___x_3140__overap_107_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, lean_box(0));
return v___x_108_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(v_msg_121_, v___y_122_, v___y_123_, v___y_124_, v___y_125_);
lean_dec(v___y_125_);
lean_dec_ref(v___y_124_);
lean_dec(v___y_123_);
lean_dec_ref(v___y_122_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(lean_object* v_e_128_, lean_object* v___y_129_){
_start:
{
uint8_t v___x_131_; 
v___x_131_ = l_Lean_Expr_hasMVar(v_e_128_);
if (v___x_131_ == 0)
{
lean_object* v___x_132_; 
v___x_132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_132_, 0, v_e_128_);
return v___x_132_;
}
else
{
lean_object* v___x_133_; lean_object* v_mctx_134_; lean_object* v___x_135_; lean_object* v_fst_136_; lean_object* v_snd_137_; lean_object* v___x_138_; lean_object* v_cache_139_; lean_object* v_zetaDeltaFVarIds_140_; lean_object* v_postponed_141_; lean_object* v_diag_142_; lean_object* v___x_144_; uint8_t v_isShared_145_; uint8_t v_isSharedCheck_151_; 
v___x_133_ = lean_st_ref_get(v___y_129_);
v_mctx_134_ = lean_ctor_get(v___x_133_, 0);
lean_inc_ref(v_mctx_134_);
lean_dec(v___x_133_);
v___x_135_ = l_Lean_instantiateMVarsCore(v_mctx_134_, v_e_128_);
v_fst_136_ = lean_ctor_get(v___x_135_, 0);
lean_inc(v_fst_136_);
v_snd_137_ = lean_ctor_get(v___x_135_, 1);
lean_inc(v_snd_137_);
lean_dec_ref(v___x_135_);
v___x_138_ = lean_st_ref_take(v___y_129_);
v_cache_139_ = lean_ctor_get(v___x_138_, 1);
v_zetaDeltaFVarIds_140_ = lean_ctor_get(v___x_138_, 2);
v_postponed_141_ = lean_ctor_get(v___x_138_, 3);
v_diag_142_ = lean_ctor_get(v___x_138_, 4);
v_isSharedCheck_151_ = !lean_is_exclusive(v___x_138_);
if (v_isSharedCheck_151_ == 0)
{
lean_object* v_unused_152_; 
v_unused_152_ = lean_ctor_get(v___x_138_, 0);
lean_dec(v_unused_152_);
v___x_144_ = v___x_138_;
v_isShared_145_ = v_isSharedCheck_151_;
goto v_resetjp_143_;
}
else
{
lean_inc(v_diag_142_);
lean_inc(v_postponed_141_);
lean_inc(v_zetaDeltaFVarIds_140_);
lean_inc(v_cache_139_);
lean_dec(v___x_138_);
v___x_144_ = lean_box(0);
v_isShared_145_ = v_isSharedCheck_151_;
goto v_resetjp_143_;
}
v_resetjp_143_:
{
lean_object* v___x_147_; 
if (v_isShared_145_ == 0)
{
lean_ctor_set(v___x_144_, 0, v_snd_137_);
v___x_147_ = v___x_144_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v_snd_137_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_cache_139_);
lean_ctor_set(v_reuseFailAlloc_150_, 2, v_zetaDeltaFVarIds_140_);
lean_ctor_set(v_reuseFailAlloc_150_, 3, v_postponed_141_);
lean_ctor_set(v_reuseFailAlloc_150_, 4, v_diag_142_);
v___x_147_ = v_reuseFailAlloc_150_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_st_ref_put(v___y_129_, v___x_147_);
v___x_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_149_, 0, v_fst_136_);
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg___boxed(lean_object* v_e_153_, lean_object* v___y_154_, lean_object* v___y_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_e_153_, v___y_154_);
lean_dec(v___y_154_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(lean_object* v_auxDeclToFullName_161_, lean_object* v_as_162_, size_t v_i_163_, size_t v_stop_164_, lean_object* v_b_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v_a_172_; uint8_t v___x_176_; 
v___x_176_ = lean_usize_dec_eq(v_i_163_, v_stop_164_);
if (v___x_176_ == 0)
{
lean_object* v___x_177_; 
v___x_177_ = lean_array_uget_borrowed(v_as_162_, v_i_163_);
if (lean_obj_tag(v___x_177_) == 0)
{
v_a_172_ = v_b_165_;
goto v___jp_171_;
}
else
{
lean_object* v_val_178_; 
v_val_178_ = lean_ctor_get(v___x_177_, 0);
if (lean_obj_tag(v_val_178_) == 0)
{
uint8_t v_kind_179_; 
v_kind_179_ = lean_ctor_get_uint8(v_val_178_, sizeof(void*)*4 + 1);
if (v_kind_179_ == 2)
{
lean_object* v_fvarId_180_; lean_object* v_userName_181_; lean_object* v_type_182_; lean_object* v___x_183_; 
v_fvarId_180_ = lean_ctor_get(v_val_178_, 1);
v_userName_181_ = lean_ctor_get(v_val_178_, 2);
v_type_182_ = lean_ctor_get(v_val_178_, 3);
lean_inc_ref(v_type_182_);
v___x_183_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_182_, v___y_167_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v_a_184_; lean_object* v___x_185_; 
v_a_184_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_a_184_);
lean_dec_ref_known(v___x_183_, 1);
v___x_185_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_auxDeclToFullName_161_, v_fvarId_180_);
if (lean_obj_tag(v___x_185_) == 1)
{
lean_object* v_val_186_; lean_object* v___x_187_; 
v_val_186_ = lean_ctor_get(v___x_185_, 0);
lean_inc(v_val_186_);
lean_dec_ref_known(v___x_185_, 1);
lean_inc(v_userName_181_);
lean_inc(v_fvarId_180_);
v___x_187_ = l_Lean_LocalContext_mkAuxDecl(v_b_165_, v_fvarId_180_, v_userName_181_, v_a_184_, v_val_186_);
v_a_172_ = v___x_187_;
goto v___jp_171_;
}
else
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; uint8_t v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; 
lean_dec(v___x_185_);
lean_dec(v_a_184_);
lean_dec_ref(v_b_165_);
v___x_188_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__0));
v___x_189_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__1));
v___x_190_ = lean_unsigned_to_nat(660u);
v___x_191_ = lean_unsigned_to_nat(12u);
v___x_192_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__2));
v___x_193_ = 1;
lean_inc(v_userName_181_);
v___x_194_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_userName_181_, v___x_193_);
v___x_195_ = lean_string_append(v___x_192_, v___x_194_);
lean_dec_ref(v___x_194_);
v___x_196_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___closed__3));
v___x_197_ = lean_string_append(v___x_195_, v___x_196_);
v___x_198_ = l_mkPanicMessageWithDecl(v___x_188_, v___x_189_, v___x_190_, v___x_191_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = l_panic___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__1(v___x_198_, v___y_166_, v___y_167_, v___y_168_, v___y_169_);
if (lean_obj_tag(v___x_199_) == 0)
{
lean_object* v_a_200_; 
v_a_200_ = lean_ctor_get(v___x_199_, 0);
lean_inc(v_a_200_);
lean_dec_ref_known(v___x_199_, 1);
v_a_172_ = v_a_200_;
goto v___jp_171_;
}
else
{
return v___x_199_;
}
}
}
else
{
lean_object* v_a_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_208_; 
lean_dec_ref(v_b_165_);
v_a_201_ = lean_ctor_get(v___x_183_, 0);
v_isSharedCheck_208_ = !lean_is_exclusive(v___x_183_);
if (v_isSharedCheck_208_ == 0)
{
v___x_203_ = v___x_183_;
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_a_201_);
lean_dec(v___x_183_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_208_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_206_; 
if (v_isShared_204_ == 0)
{
v___x_206_ = v___x_203_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_207_; 
v_reuseFailAlloc_207_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_207_, 0, v_a_201_);
v___x_206_ = v_reuseFailAlloc_207_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
return v___x_206_;
}
}
}
}
else
{
lean_object* v_fvarId_209_; lean_object* v_userName_210_; lean_object* v_type_211_; uint8_t v_bi_212_; lean_object* v___x_213_; 
v_fvarId_209_ = lean_ctor_get(v_val_178_, 1);
v_userName_210_ = lean_ctor_get(v_val_178_, 2);
v_type_211_ = lean_ctor_get(v_val_178_, 3);
v_bi_212_ = lean_ctor_get_uint8(v_val_178_, sizeof(void*)*4);
lean_inc_ref(v_type_211_);
v___x_213_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_211_, v___y_167_);
if (lean_obj_tag(v___x_213_) == 0)
{
lean_object* v_a_214_; lean_object* v___x_215_; 
v_a_214_ = lean_ctor_get(v___x_213_, 0);
lean_inc(v_a_214_);
lean_dec_ref_known(v___x_213_, 1);
lean_inc(v_userName_210_);
lean_inc(v_fvarId_209_);
v___x_215_ = l_Lean_LocalContext_mkLocalDecl(v_b_165_, v_fvarId_209_, v_userName_210_, v_a_214_, v_bi_212_, v_kind_179_);
v_a_172_ = v___x_215_;
goto v___jp_171_;
}
else
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_223_; 
lean_dec_ref(v_b_165_);
v_a_216_ = lean_ctor_get(v___x_213_, 0);
v_isSharedCheck_223_ = !lean_is_exclusive(v___x_213_);
if (v_isSharedCheck_223_ == 0)
{
v___x_218_ = v___x_213_;
v_isShared_219_ = v_isSharedCheck_223_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_213_);
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
}
else
{
lean_object* v_fvarId_224_; lean_object* v_userName_225_; lean_object* v_type_226_; lean_object* v_value_227_; uint8_t v_nondep_228_; uint8_t v_kind_229_; lean_object* v___x_230_; 
v_fvarId_224_ = lean_ctor_get(v_val_178_, 1);
v_userName_225_ = lean_ctor_get(v_val_178_, 2);
v_type_226_ = lean_ctor_get(v_val_178_, 3);
v_value_227_ = lean_ctor_get(v_val_178_, 4);
v_nondep_228_ = lean_ctor_get_uint8(v_val_178_, sizeof(void*)*5);
v_kind_229_ = lean_ctor_get_uint8(v_val_178_, sizeof(void*)*5 + 1);
lean_inc_ref(v_type_226_);
v___x_230_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_226_, v___y_167_);
if (lean_obj_tag(v___x_230_) == 0)
{
lean_object* v_a_231_; lean_object* v___x_232_; 
v_a_231_ = lean_ctor_get(v___x_230_, 0);
lean_inc(v_a_231_);
lean_dec_ref_known(v___x_230_, 1);
lean_inc_ref(v_value_227_);
v___x_232_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_value_227_, v___y_167_);
if (lean_obj_tag(v___x_232_) == 0)
{
lean_object* v_a_233_; lean_object* v___x_234_; 
v_a_233_ = lean_ctor_get(v___x_232_, 0);
lean_inc(v_a_233_);
lean_dec_ref_known(v___x_232_, 1);
lean_inc(v_userName_225_);
lean_inc(v_fvarId_224_);
v___x_234_ = l_Lean_LocalContext_mkLetDecl(v_b_165_, v_fvarId_224_, v_userName_225_, v_a_231_, v_a_233_, v_nondep_228_, v_kind_229_);
v_a_172_ = v___x_234_;
goto v___jp_171_;
}
else
{
lean_object* v_a_235_; lean_object* v___x_237_; uint8_t v_isShared_238_; uint8_t v_isSharedCheck_242_; 
lean_dec(v_a_231_);
lean_dec_ref(v_b_165_);
v_a_235_ = lean_ctor_get(v___x_232_, 0);
v_isSharedCheck_242_ = !lean_is_exclusive(v___x_232_);
if (v_isSharedCheck_242_ == 0)
{
v___x_237_ = v___x_232_;
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
else
{
lean_inc(v_a_235_);
lean_dec(v___x_232_);
v___x_237_ = lean_box(0);
v_isShared_238_ = v_isSharedCheck_242_;
goto v_resetjp_236_;
}
v_resetjp_236_:
{
lean_object* v___x_240_; 
if (v_isShared_238_ == 0)
{
v___x_240_ = v___x_237_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_235_);
v___x_240_ = v_reuseFailAlloc_241_;
goto v_reusejp_239_;
}
v_reusejp_239_:
{
return v___x_240_;
}
}
}
}
else
{
lean_object* v_a_243_; lean_object* v___x_245_; uint8_t v_isShared_246_; uint8_t v_isSharedCheck_250_; 
lean_dec_ref(v_b_165_);
v_a_243_ = lean_ctor_get(v___x_230_, 0);
v_isSharedCheck_250_ = !lean_is_exclusive(v___x_230_);
if (v_isSharedCheck_250_ == 0)
{
v___x_245_ = v___x_230_;
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
else
{
lean_inc(v_a_243_);
lean_dec(v___x_230_);
v___x_245_ = lean_box(0);
v_isShared_246_ = v_isSharedCheck_250_;
goto v_resetjp_244_;
}
v_resetjp_244_:
{
lean_object* v___x_248_; 
if (v_isShared_246_ == 0)
{
v___x_248_ = v___x_245_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_a_243_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
}
}
}
}
else
{
lean_object* v___x_251_; 
v___x_251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_251_, 0, v_b_165_);
return v___x_251_;
}
v___jp_171_:
{
size_t v___x_173_; size_t v___x_174_; 
v___x_173_ = ((size_t)1ULL);
v___x_174_ = lean_usize_add(v_i_163_, v___x_173_);
v_i_163_ = v___x_174_;
v_b_165_ = v_a_172_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7___boxed(lean_object* v_auxDeclToFullName_252_, lean_object* v_as_253_, lean_object* v_i_254_, lean_object* v_stop_255_, lean_object* v_b_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_, lean_object* v___y_261_){
_start:
{
size_t v_i_boxed_262_; size_t v_stop_boxed_263_; lean_object* v_res_264_; 
v_i_boxed_262_ = lean_unbox_usize(v_i_254_);
lean_dec(v_i_254_);
v_stop_boxed_263_ = lean_unbox_usize(v_stop_255_);
lean_dec(v_stop_255_);
v_res_264_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_252_, v_as_253_, v_i_boxed_262_, v_stop_boxed_263_, v_b_256_, v___y_257_, v___y_258_, v___y_259_, v___y_260_);
lean_dec(v___y_260_);
lean_dec_ref(v___y_259_);
lean_dec(v___y_258_);
lean_dec_ref(v___y_257_);
lean_dec_ref(v_as_253_);
lean_dec(v_auxDeclToFullName_252_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(lean_object* v_auxDeclToFullName_265_, lean_object* v_x_266_, lean_object* v_x_267_, lean_object* v___y_268_, lean_object* v___y_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
if (lean_obj_tag(v_x_266_) == 0)
{
lean_object* v_cs_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_286_; 
v_cs_273_ = lean_ctor_get(v_x_266_, 0);
v_isSharedCheck_286_ = !lean_is_exclusive(v_x_266_);
if (v_isSharedCheck_286_ == 0)
{
v___x_275_ = v_x_266_;
v_isShared_276_ = v_isSharedCheck_286_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_cs_273_);
lean_dec(v_x_266_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_286_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; lean_object* v___x_278_; uint8_t v___x_279_; 
v___x_277_ = lean_unsigned_to_nat(0u);
v___x_278_ = lean_array_get_size(v_cs_273_);
v___x_279_ = lean_nat_dec_lt(v___x_277_, v___x_278_);
if (v___x_279_ == 0)
{
lean_object* v___x_281_; 
lean_dec_ref(v_cs_273_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 0, v_x_267_);
v___x_281_ = v___x_275_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v_x_267_);
v___x_281_ = v_reuseFailAlloc_282_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
return v___x_281_;
}
}
else
{
size_t v___x_283_; size_t v___x_284_; lean_object* v___x_285_; 
lean_del_object(v___x_275_);
v___x_283_ = ((size_t)0ULL);
v___x_284_ = lean_usize_of_nat(v___x_278_);
v___x_285_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(v_auxDeclToFullName_265_, v_cs_273_, v___x_283_, v___x_284_, v_x_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
lean_dec_ref(v_cs_273_);
return v___x_285_;
}
}
}
else
{
lean_object* v_vs_287_; lean_object* v___x_289_; uint8_t v_isShared_290_; uint8_t v_isSharedCheck_300_; 
v_vs_287_ = lean_ctor_get(v_x_266_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v_x_266_);
if (v_isSharedCheck_300_ == 0)
{
v___x_289_ = v_x_266_;
v_isShared_290_ = v_isSharedCheck_300_;
goto v_resetjp_288_;
}
else
{
lean_inc(v_vs_287_);
lean_dec(v_x_266_);
v___x_289_ = lean_box(0);
v_isShared_290_ = v_isSharedCheck_300_;
goto v_resetjp_288_;
}
v_resetjp_288_:
{
lean_object* v___x_291_; lean_object* v___x_292_; uint8_t v___x_293_; 
v___x_291_ = lean_unsigned_to_nat(0u);
v___x_292_ = lean_array_get_size(v_vs_287_);
v___x_293_ = lean_nat_dec_lt(v___x_291_, v___x_292_);
if (v___x_293_ == 0)
{
lean_object* v___x_295_; 
lean_dec_ref(v_vs_287_);
if (v_isShared_290_ == 0)
{
lean_ctor_set_tag(v___x_289_, 0);
lean_ctor_set(v___x_289_, 0, v_x_267_);
v___x_295_ = v___x_289_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_x_267_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
else
{
size_t v___x_297_; size_t v___x_298_; lean_object* v___x_299_; 
lean_del_object(v___x_289_);
v___x_297_ = ((size_t)0ULL);
v___x_298_ = lean_usize_of_nat(v___x_292_);
v___x_299_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_265_, v_vs_287_, v___x_297_, v___x_298_, v_x_267_, v___y_268_, v___y_269_, v___y_270_, v___y_271_);
lean_dec_ref(v_vs_287_);
return v___x_299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(lean_object* v_auxDeclToFullName_301_, lean_object* v_as_302_, size_t v_i_303_, size_t v_stop_304_, lean_object* v_b_305_, lean_object* v___y_306_, lean_object* v___y_307_, lean_object* v___y_308_, lean_object* v___y_309_){
_start:
{
uint8_t v___x_311_; 
v___x_311_ = lean_usize_dec_eq(v_i_303_, v_stop_304_);
if (v___x_311_ == 0)
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lean_array_uget_borrowed(v_as_302_, v_i_303_);
lean_inc(v___x_312_);
v___x_313_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(v_auxDeclToFullName_301_, v___x_312_, v_b_305_, v___y_306_, v___y_307_, v___y_308_, v___y_309_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; size_t v___x_315_; size_t v___x_316_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v___x_313_, 1);
v___x_315_ = ((size_t)1ULL);
v___x_316_ = lean_usize_add(v_i_303_, v___x_315_);
v_i_303_ = v___x_316_;
v_b_305_ = v_a_314_;
goto _start;
}
else
{
return v___x_313_;
}
}
else
{
lean_object* v___x_318_; 
v___x_318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_318_, 0, v_b_305_);
return v___x_318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8___boxed(lean_object* v_auxDeclToFullName_319_, lean_object* v_as_320_, lean_object* v_i_321_, lean_object* v_stop_322_, lean_object* v_b_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
size_t v_i_boxed_329_; size_t v_stop_boxed_330_; lean_object* v_res_331_; 
v_i_boxed_329_ = lean_unbox_usize(v_i_321_);
lean_dec(v_i_321_);
v_stop_boxed_330_ = lean_unbox_usize(v_stop_322_);
lean_dec(v_stop_322_);
v_res_331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(v_auxDeclToFullName_319_, v_as_320_, v_i_boxed_329_, v_stop_boxed_330_, v_b_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
lean_dec_ref(v_as_320_);
lean_dec(v_auxDeclToFullName_319_);
return v_res_331_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8___boxed(lean_object* v_auxDeclToFullName_332_, lean_object* v_x_333_, lean_object* v_x_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_, lean_object* v___y_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(v_auxDeclToFullName_332_, v_x_333_, v_x_334_, v___y_335_, v___y_336_, v___y_337_, v___y_338_);
lean_dec(v___y_338_);
lean_dec_ref(v___y_337_);
lean_dec(v___y_336_);
lean_dec_ref(v___y_335_);
lean_dec(v_auxDeclToFullName_332_);
return v_res_340_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0(void){
_start:
{
lean_object* v___x_341_; 
v___x_341_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(lean_object* v_auxDeclToFullName_342_, lean_object* v_x_343_, size_t v_x_344_, size_t v_x_345_, lean_object* v_x_346_, lean_object* v___y_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_){
_start:
{
if (lean_obj_tag(v_x_343_) == 0)
{
lean_object* v_cs_352_; lean_object* v___x_353_; size_t v___x_354_; lean_object* v_j_355_; lean_object* v___x_356_; size_t v___x_357_; size_t v___x_358_; size_t v___x_359_; size_t v___x_360_; size_t v___x_361_; size_t v___x_362_; lean_object* v___x_363_; 
v_cs_352_ = lean_ctor_get(v_x_343_, 0);
lean_inc_ref(v_cs_352_);
lean_dec_ref_known(v_x_343_, 1);
v___x_353_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___closed__0);
v___x_354_ = lean_usize_shift_right(v_x_344_, v_x_345_);
v_j_355_ = lean_usize_to_nat(v___x_354_);
v___x_356_ = lean_array_get_borrowed(v___x_353_, v_cs_352_, v_j_355_);
v___x_357_ = ((size_t)1ULL);
v___x_358_ = lean_usize_shift_left(v___x_357_, v_x_345_);
v___x_359_ = lean_usize_sub(v___x_358_, v___x_357_);
v___x_360_ = lean_usize_land(v_x_344_, v___x_359_);
v___x_361_ = ((size_t)5ULL);
v___x_362_ = lean_usize_sub(v_x_345_, v___x_361_);
lean_inc(v___x_356_);
v___x_363_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(v_auxDeclToFullName_342_, v___x_356_, v___x_360_, v___x_362_, v_x_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
if (lean_obj_tag(v___x_363_) == 0)
{
lean_object* v_a_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; 
v_a_364_ = lean_ctor_get(v___x_363_, 0);
lean_inc(v_a_364_);
v___x_365_ = lean_unsigned_to_nat(1u);
v___x_366_ = lean_nat_add(v_j_355_, v___x_365_);
lean_dec(v_j_355_);
v___x_367_ = lean_array_get_size(v_cs_352_);
v___x_368_ = lean_nat_dec_lt(v___x_366_, v___x_367_);
if (v___x_368_ == 0)
{
lean_dec(v___x_366_);
lean_dec(v_a_364_);
lean_dec_ref(v_cs_352_);
return v___x_363_;
}
else
{
size_t v___x_369_; size_t v___x_370_; lean_object* v___x_371_; 
lean_dec_ref_known(v___x_363_, 1);
v___x_369_ = lean_usize_of_nat(v___x_366_);
lean_dec(v___x_366_);
v___x_370_ = lean_usize_of_nat(v___x_367_);
v___x_371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6_spec__8(v_auxDeclToFullName_342_, v_cs_352_, v___x_369_, v___x_370_, v_a_364_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
lean_dec_ref(v_cs_352_);
return v___x_371_;
}
}
else
{
lean_dec(v_j_355_);
lean_dec_ref(v_cs_352_);
return v___x_363_;
}
}
else
{
lean_object* v_vs_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_385_; 
v_vs_372_ = lean_ctor_get(v_x_343_, 0);
v_isSharedCheck_385_ = !lean_is_exclusive(v_x_343_);
if (v_isSharedCheck_385_ == 0)
{
v___x_374_ = v_x_343_;
v_isShared_375_ = v_isSharedCheck_385_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_vs_372_);
lean_dec(v_x_343_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_385_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_376_; lean_object* v___x_377_; uint8_t v___x_378_; 
v___x_376_ = lean_usize_to_nat(v_x_344_);
v___x_377_ = lean_array_get_size(v_vs_372_);
v___x_378_ = lean_nat_dec_lt(v___x_376_, v___x_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_380_; 
lean_dec(v___x_376_);
lean_dec_ref(v_vs_372_);
if (v_isShared_375_ == 0)
{
lean_ctor_set_tag(v___x_374_, 0);
lean_ctor_set(v___x_374_, 0, v_x_346_);
v___x_380_ = v___x_374_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v_x_346_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
else
{
size_t v___x_382_; size_t v___x_383_; lean_object* v___x_384_; 
lean_del_object(v___x_374_);
v___x_382_ = lean_usize_of_nat(v___x_376_);
lean_dec(v___x_376_);
v___x_383_ = lean_usize_of_nat(v___x_377_);
v___x_384_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_342_, v_vs_372_, v___x_382_, v___x_383_, v_x_346_, v___y_347_, v___y_348_, v___y_349_, v___y_350_);
lean_dec_ref(v_vs_372_);
return v___x_384_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6___boxed(lean_object* v_auxDeclToFullName_386_, lean_object* v_x_387_, lean_object* v_x_388_, lean_object* v_x_389_, lean_object* v_x_390_, lean_object* v___y_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_){
_start:
{
size_t v_x_5889__boxed_396_; size_t v_x_5890__boxed_397_; lean_object* v_res_398_; 
v_x_5889__boxed_396_ = lean_unbox_usize(v_x_388_);
lean_dec(v_x_388_);
v_x_5890__boxed_397_ = lean_unbox_usize(v_x_389_);
lean_dec(v_x_389_);
v_res_398_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(v_auxDeclToFullName_386_, v_x_387_, v_x_5889__boxed_396_, v_x_5890__boxed_397_, v_x_390_, v___y_391_, v___y_392_, v___y_393_, v___y_394_);
lean_dec(v___y_394_);
lean_dec_ref(v___y_393_);
lean_dec(v___y_392_);
lean_dec_ref(v___y_391_);
lean_dec(v_auxDeclToFullName_386_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4(lean_object* v_auxDeclToFullName_399_, lean_object* v_t_400_, lean_object* v_init_401_, lean_object* v_start_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_, lean_object* v___y_406_){
_start:
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = lean_unsigned_to_nat(0u);
v___x_409_ = lean_nat_dec_eq(v_start_402_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v_root_410_; lean_object* v_tail_411_; size_t v_shift_412_; lean_object* v_tailOff_413_; uint8_t v___x_414_; 
v_root_410_ = lean_ctor_get(v_t_400_, 0);
lean_inc_ref(v_root_410_);
v_tail_411_ = lean_ctor_get(v_t_400_, 1);
lean_inc_ref(v_tail_411_);
v_shift_412_ = lean_ctor_get_usize(v_t_400_, 4);
v_tailOff_413_ = lean_ctor_get(v_t_400_, 3);
lean_inc(v_tailOff_413_);
lean_dec_ref(v_t_400_);
v___x_414_ = lean_nat_dec_le(v_tailOff_413_, v_start_402_);
if (v___x_414_ == 0)
{
size_t v___x_415_; lean_object* v___x_416_; 
lean_dec(v_tailOff_413_);
v___x_415_ = lean_usize_of_nat(v_start_402_);
v___x_416_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__6(v_auxDeclToFullName_399_, v_root_410_, v___x_415_, v_shift_412_, v_init_401_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_416_) == 0)
{
lean_object* v_a_417_; lean_object* v___x_418_; uint8_t v___x_419_; 
v_a_417_ = lean_ctor_get(v___x_416_, 0);
lean_inc(v_a_417_);
v___x_418_ = lean_array_get_size(v_tail_411_);
v___x_419_ = lean_nat_dec_lt(v___x_408_, v___x_418_);
if (v___x_419_ == 0)
{
lean_dec(v_a_417_);
lean_dec_ref(v_tail_411_);
return v___x_416_;
}
else
{
size_t v___x_420_; size_t v___x_421_; lean_object* v___x_422_; 
lean_dec_ref_known(v___x_416_, 1);
v___x_420_ = ((size_t)0ULL);
v___x_421_ = lean_usize_of_nat(v___x_418_);
v___x_422_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_399_, v_tail_411_, v___x_420_, v___x_421_, v_a_417_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec_ref(v_tail_411_);
return v___x_422_;
}
}
else
{
lean_dec_ref(v_tail_411_);
return v___x_416_;
}
}
else
{
lean_object* v___x_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
lean_dec_ref(v_root_410_);
v___x_423_ = lean_nat_sub(v_start_402_, v_tailOff_413_);
lean_dec(v_tailOff_413_);
v___x_424_ = lean_array_get_size(v_tail_411_);
v___x_425_ = lean_nat_dec_lt(v___x_423_, v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; 
lean_dec(v___x_423_);
lean_dec_ref(v_tail_411_);
v___x_426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_426_, 0, v_init_401_);
return v___x_426_;
}
else
{
size_t v___x_427_; size_t v___x_428_; lean_object* v___x_429_; 
v___x_427_ = lean_usize_of_nat(v___x_423_);
lean_dec(v___x_423_);
v___x_428_ = lean_usize_of_nat(v___x_424_);
v___x_429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_399_, v_tail_411_, v___x_427_, v___x_428_, v_init_401_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec_ref(v_tail_411_);
return v___x_429_;
}
}
}
else
{
lean_object* v_root_430_; lean_object* v_tail_431_; lean_object* v___x_432_; 
v_root_430_ = lean_ctor_get(v_t_400_, 0);
lean_inc_ref(v_root_430_);
v_tail_431_ = lean_ctor_get(v_t_400_, 1);
lean_inc_ref(v_tail_431_);
lean_dec_ref(v_t_400_);
v___x_432_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__8(v_auxDeclToFullName_399_, v_root_430_, v_init_401_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
if (lean_obj_tag(v___x_432_) == 0)
{
lean_object* v_a_433_; lean_object* v___x_434_; uint8_t v___x_435_; 
v_a_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_a_433_);
v___x_434_ = lean_array_get_size(v_tail_431_);
v___x_435_ = lean_nat_dec_lt(v___x_408_, v___x_434_);
if (v___x_435_ == 0)
{
lean_dec(v_a_433_);
lean_dec_ref(v_tail_431_);
return v___x_432_;
}
else
{
size_t v___x_436_; size_t v___x_437_; lean_object* v___x_438_; 
lean_dec_ref_known(v___x_432_, 1);
v___x_436_ = ((size_t)0ULL);
v___x_437_ = lean_usize_of_nat(v___x_434_);
v___x_438_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4_spec__7(v_auxDeclToFullName_399_, v_tail_431_, v___x_436_, v___x_437_, v_a_433_, v___y_403_, v___y_404_, v___y_405_, v___y_406_);
lean_dec_ref(v_tail_431_);
return v___x_438_;
}
}
else
{
lean_dec_ref(v_tail_431_);
return v___x_432_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_auxDeclToFullName_439_, lean_object* v_t_440_, lean_object* v_init_441_, lean_object* v_start_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_, lean_object* v___y_446_, lean_object* v___y_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4(v_auxDeclToFullName_439_, v_t_440_, v_init_441_, v_start_442_, v___y_443_, v___y_444_, v___y_445_, v___y_446_);
lean_dec(v___y_446_);
lean_dec_ref(v___y_445_);
lean_dec(v___y_444_);
lean_dec_ref(v___y_443_);
lean_dec(v_start_442_);
lean_dec(v_auxDeclToFullName_439_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(lean_object* v_auxDeclToFullName_449_, lean_object* v_lctx_450_, lean_object* v_init_451_, lean_object* v_start_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_decls_458_; lean_object* v___x_459_; 
v_decls_458_ = lean_ctor_get(v_lctx_450_, 1);
lean_inc_ref(v_decls_458_);
lean_dec_ref(v_lctx_450_);
v___x_459_ = l_Lean_PersistentArray_foldlM___at___00Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2_spec__4(v_auxDeclToFullName_449_, v_decls_458_, v_init_451_, v_start_452_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
return v___x_459_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2___boxed(lean_object* v_auxDeclToFullName_460_, lean_object* v_lctx_461_, lean_object* v_init_462_, lean_object* v_start_463_, lean_object* v___y_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(v_auxDeclToFullName_460_, v_lctx_461_, v_init_462_, v_start_463_, v___y_464_, v___y_465_, v___y_466_, v___y_467_);
lean_dec(v___y_467_);
lean_dec_ref(v___y_466_);
lean_dec(v___y_465_);
lean_dec_ref(v___y_464_);
lean_dec(v_start_463_);
lean_dec(v_auxDeclToFullName_460_);
return v_res_469_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_470_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__0);
v___x_472_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_472_, 0, v___x_471_);
return v___x_472_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_473_ = lean_unsigned_to_nat(32u);
v___x_474_ = lean_mk_empty_array_with_capacity(v___x_473_);
v___x_475_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
return v___x_475_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; 
v___x_476_ = ((size_t)5ULL);
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = lean_unsigned_to_nat(32u);
v___x_479_ = lean_mk_empty_array_with_capacity(v___x_478_);
v___x_480_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__2);
v___x_481_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_481_, 0, v___x_480_);
lean_ctor_set(v___x_481_, 1, v___x_479_);
lean_ctor_set(v___x_481_, 2, v___x_477_);
lean_ctor_set(v___x_481_, 3, v___x_477_);
lean_ctor_set_usize(v___x_481_, 4, v___x_476_);
return v___x_481_;
}
}
static lean_object* _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_482_ = lean_box(1);
v___x_483_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__3);
v___x_484_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__1);
v___x_485_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_485_, 0, v___x_484_);
lean_ctor_set(v___x_485_, 1, v___x_483_);
lean_ctor_set(v___x_485_, 2, v___x_482_);
return v___x_485_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(lean_object* v_lctx_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v_auxDeclToFullName_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_auxDeclToFullName_492_ = lean_ctor_get(v_lctx_486_, 2);
lean_inc(v_auxDeclToFullName_492_);
v___x_493_ = lean_unsigned_to_nat(0u);
v___x_494_ = lean_obj_once(&l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4, &l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4_once, _init_l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___closed__4);
v___x_495_ = l_Lean_LocalContext_foldlM___at___00Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0_spec__2(v_auxDeclToFullName_492_, v_lctx_486_, v___x_494_, v___x_493_, v___y_487_, v___y_488_, v___y_489_, v___y_490_);
lean_dec(v_auxDeclToFullName_492_);
return v___x_495_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0___boxed(lean_object* v_lctx_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(v_lctx_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11___redArg(lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_, lean_object* v_x_506_){
_start:
{
lean_object* v_ks_507_; lean_object* v_vs_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_532_; 
v_ks_507_ = lean_ctor_get(v_x_503_, 0);
v_vs_508_ = lean_ctor_get(v_x_503_, 1);
v_isSharedCheck_532_ = !lean_is_exclusive(v_x_503_);
if (v_isSharedCheck_532_ == 0)
{
v___x_510_ = v_x_503_;
v_isShared_511_ = v_isSharedCheck_532_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_vs_508_);
lean_inc(v_ks_507_);
lean_dec(v_x_503_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_532_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = lean_array_get_size(v_ks_507_);
v___x_513_ = lean_nat_dec_lt(v_x_504_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_517_; 
lean_dec(v_x_504_);
v___x_514_ = lean_array_push(v_ks_507_, v_x_505_);
v___x_515_ = lean_array_push(v_vs_508_, v_x_506_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 1, v___x_515_);
lean_ctor_set(v___x_510_, 0, v___x_514_);
v___x_517_ = v___x_510_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v___x_514_);
lean_ctor_set(v_reuseFailAlloc_518_, 1, v___x_515_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
else
{
lean_object* v_k_x27_519_; uint8_t v___x_520_; 
v_k_x27_519_ = lean_array_fget_borrowed(v_ks_507_, v_x_504_);
v___x_520_ = l_Lean_instBEqMVarId_beq(v_x_505_, v_k_x27_519_);
if (v___x_520_ == 0)
{
lean_object* v___x_522_; 
if (v_isShared_511_ == 0)
{
v___x_522_ = v___x_510_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v_ks_507_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v_vs_508_);
v___x_522_ = v_reuseFailAlloc_526_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
lean_object* v___x_523_; lean_object* v___x_524_; 
v___x_523_ = lean_unsigned_to_nat(1u);
v___x_524_ = lean_nat_add(v_x_504_, v___x_523_);
lean_dec(v_x_504_);
v_x_503_ = v___x_522_;
v_x_504_ = v___x_524_;
goto _start;
}
}
else
{
lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_530_; 
v___x_527_ = lean_array_fset(v_ks_507_, v_x_504_, v_x_505_);
v___x_528_ = lean_array_fset(v_vs_508_, v_x_504_, v_x_506_);
lean_dec(v_x_504_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 1, v___x_528_);
lean_ctor_set(v___x_510_, 0, v___x_527_);
v___x_530_ = v___x_510_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_527_);
lean_ctor_set(v_reuseFailAlloc_531_, 1, v___x_528_);
v___x_530_ = v_reuseFailAlloc_531_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
return v___x_530_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7___redArg(lean_object* v_n_533_, lean_object* v_k_534_, lean_object* v_v_535_){
_start:
{
lean_object* v___x_536_; lean_object* v___x_537_; 
v___x_536_ = lean_unsigned_to_nat(0u);
v___x_537_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11___redArg(v_n_533_, v___x_536_, v_k_534_, v_v_535_);
return v___x_537_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(lean_object* v_x_539_, size_t v_x_540_, size_t v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_){
_start:
{
if (lean_obj_tag(v_x_539_) == 0)
{
lean_object* v_es_544_; size_t v___x_545_; size_t v___x_546_; lean_object* v_j_547_; lean_object* v___x_548_; uint8_t v___x_549_; 
v_es_544_ = lean_ctor_get(v_x_539_, 0);
v___x_545_ = ((size_t)31ULL);
v___x_546_ = lean_usize_land(v_x_540_, v___x_545_);
v_j_547_ = lean_usize_to_nat(v___x_546_);
v___x_548_ = lean_array_get_size(v_es_544_);
v___x_549_ = lean_nat_dec_lt(v_j_547_, v___x_548_);
if (v___x_549_ == 0)
{
lean_dec(v_j_547_);
lean_dec(v_x_543_);
lean_dec(v_x_542_);
return v_x_539_;
}
else
{
lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_588_; 
lean_inc_ref(v_es_544_);
v_isSharedCheck_588_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_588_ == 0)
{
lean_object* v_unused_589_; 
v_unused_589_ = lean_ctor_get(v_x_539_, 0);
lean_dec(v_unused_589_);
v___x_551_ = v_x_539_;
v_isShared_552_ = v_isSharedCheck_588_;
goto v_resetjp_550_;
}
else
{
lean_dec(v_x_539_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_588_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v_v_553_; lean_object* v___x_554_; lean_object* v_xs_x27_555_; lean_object* v___y_557_; 
v_v_553_ = lean_array_fget(v_es_544_, v_j_547_);
v___x_554_ = lean_box(0);
v_xs_x27_555_ = lean_array_fset(v_es_544_, v_j_547_, v___x_554_);
switch(lean_obj_tag(v_v_553_))
{
case 0:
{
lean_object* v_key_562_; lean_object* v_val_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_573_; 
v_key_562_ = lean_ctor_get(v_v_553_, 0);
v_val_563_ = lean_ctor_get(v_v_553_, 1);
v_isSharedCheck_573_ = !lean_is_exclusive(v_v_553_);
if (v_isSharedCheck_573_ == 0)
{
v___x_565_ = v_v_553_;
v_isShared_566_ = v_isSharedCheck_573_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_val_563_);
lean_inc(v_key_562_);
lean_dec(v_v_553_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_573_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
uint8_t v___x_567_; 
v___x_567_ = l_Lean_instBEqMVarId_beq(v_x_542_, v_key_562_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_569_; 
lean_del_object(v___x_565_);
v___x_568_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_562_, v_val_563_, v_x_542_, v_x_543_);
v___x_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
v___y_557_ = v___x_569_;
goto v___jp_556_;
}
else
{
lean_object* v___x_571_; 
lean_dec(v_val_563_);
lean_dec(v_key_562_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 1, v_x_543_);
lean_ctor_set(v___x_565_, 0, v_x_542_);
v___x_571_ = v___x_565_;
goto v_reusejp_570_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v_x_542_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_x_543_);
v___x_571_ = v_reuseFailAlloc_572_;
goto v_reusejp_570_;
}
v_reusejp_570_:
{
v___y_557_ = v___x_571_;
goto v___jp_556_;
}
}
}
}
case 1:
{
lean_object* v_node_574_; lean_object* v___x_576_; uint8_t v_isShared_577_; uint8_t v_isSharedCheck_586_; 
v_node_574_ = lean_ctor_get(v_v_553_, 0);
v_isSharedCheck_586_ = !lean_is_exclusive(v_v_553_);
if (v_isSharedCheck_586_ == 0)
{
v___x_576_ = v_v_553_;
v_isShared_577_ = v_isSharedCheck_586_;
goto v_resetjp_575_;
}
else
{
lean_inc(v_node_574_);
lean_dec(v_v_553_);
v___x_576_ = lean_box(0);
v_isShared_577_ = v_isSharedCheck_586_;
goto v_resetjp_575_;
}
v_resetjp_575_:
{
size_t v___x_578_; size_t v___x_579_; size_t v___x_580_; size_t v___x_581_; lean_object* v___x_582_; lean_object* v___x_584_; 
v___x_578_ = ((size_t)5ULL);
v___x_579_ = lean_usize_shift_right(v_x_540_, v___x_578_);
v___x_580_ = ((size_t)1ULL);
v___x_581_ = lean_usize_add(v_x_541_, v___x_580_);
v___x_582_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_node_574_, v___x_579_, v___x_581_, v_x_542_, v_x_543_);
if (v_isShared_577_ == 0)
{
lean_ctor_set(v___x_576_, 0, v___x_582_);
v___x_584_ = v___x_576_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_585_; 
v_reuseFailAlloc_585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_585_, 0, v___x_582_);
v___x_584_ = v_reuseFailAlloc_585_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
v___y_557_ = v___x_584_;
goto v___jp_556_;
}
}
}
default: 
{
lean_object* v___x_587_; 
v___x_587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_587_, 0, v_x_542_);
lean_ctor_set(v___x_587_, 1, v_x_543_);
v___y_557_ = v___x_587_;
goto v___jp_556_;
}
}
v___jp_556_:
{
lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_558_ = lean_array_fset(v_xs_x27_555_, v_j_547_, v___y_557_);
lean_dec(v_j_547_);
if (v_isShared_552_ == 0)
{
lean_ctor_set(v___x_551_, 0, v___x_558_);
v___x_560_ = v___x_551_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_561_; 
v_reuseFailAlloc_561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_561_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_561_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
return v___x_560_;
}
}
}
}
}
else
{
lean_object* v_ks_590_; lean_object* v_vs_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_609_; 
v_ks_590_ = lean_ctor_get(v_x_539_, 0);
v_vs_591_ = lean_ctor_get(v_x_539_, 1);
v_isSharedCheck_609_ = !lean_is_exclusive(v_x_539_);
if (v_isSharedCheck_609_ == 0)
{
v___x_593_ = v_x_539_;
v_isShared_594_ = v_isSharedCheck_609_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_vs_591_);
lean_inc(v_ks_590_);
lean_dec(v_x_539_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_609_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_ks_590_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v_vs_591_);
v___x_596_ = v_reuseFailAlloc_608_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v_newNode_597_; size_t v___x_598_; uint8_t v___x_599_; 
v_newNode_597_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7___redArg(v___x_596_, v_x_542_, v_x_543_);
v___x_598_ = ((size_t)7ULL);
v___x_599_ = lean_usize_dec_le(v___x_598_, v_x_541_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_600_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_597_);
v___x_601_ = lean_unsigned_to_nat(4u);
v___x_602_ = lean_nat_dec_lt(v___x_600_, v___x_601_);
lean_dec(v___x_600_);
if (v___x_602_ == 0)
{
lean_object* v_ks_603_; lean_object* v_vs_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; 
v_ks_603_ = lean_ctor_get(v_newNode_597_, 0);
lean_inc_ref(v_ks_603_);
v_vs_604_ = lean_ctor_get(v_newNode_597_, 1);
lean_inc_ref(v_vs_604_);
lean_dec_ref(v_newNode_597_);
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___closed__0);
v___x_607_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(v_x_541_, v_ks_603_, v_vs_604_, v___x_605_, v___x_606_);
lean_dec_ref(v_vs_604_);
lean_dec_ref(v_ks_603_);
return v___x_607_;
}
else
{
return v_newNode_597_;
}
}
else
{
return v_newNode_597_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(size_t v_depth_610_, lean_object* v_keys_611_, lean_object* v_vals_612_, lean_object* v_i_613_, lean_object* v_entries_614_){
_start:
{
lean_object* v___x_615_; uint8_t v___x_616_; 
v___x_615_ = lean_array_get_size(v_keys_611_);
v___x_616_ = lean_nat_dec_lt(v_i_613_, v___x_615_);
if (v___x_616_ == 0)
{
lean_dec(v_i_613_);
return v_entries_614_;
}
else
{
lean_object* v_k_617_; lean_object* v_v_618_; uint64_t v___x_619_; size_t v_h_620_; size_t v___x_621_; lean_object* v___x_622_; size_t v___x_623_; size_t v___x_624_; size_t v___x_625_; size_t v_h_626_; lean_object* v___x_627_; lean_object* v___x_628_; 
v_k_617_ = lean_array_fget_borrowed(v_keys_611_, v_i_613_);
v_v_618_ = lean_array_fget_borrowed(v_vals_612_, v_i_613_);
v___x_619_ = l_Lean_instHashableMVarId_hash(v_k_617_);
v_h_620_ = lean_uint64_to_usize(v___x_619_);
v___x_621_ = ((size_t)5ULL);
v___x_622_ = lean_unsigned_to_nat(1u);
v___x_623_ = ((size_t)1ULL);
v___x_624_ = lean_usize_sub(v_depth_610_, v___x_623_);
v___x_625_ = lean_usize_mul(v___x_621_, v___x_624_);
v_h_626_ = lean_usize_shift_right(v_h_620_, v___x_625_);
v___x_627_ = lean_nat_add(v_i_613_, v___x_622_);
lean_dec(v_i_613_);
lean_inc(v_v_618_);
lean_inc(v_k_617_);
v___x_628_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_entries_614_, v_h_626_, v_depth_610_, v_k_617_, v_v_618_);
v_i_613_ = v___x_627_;
v_entries_614_ = v___x_628_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg___boxed(lean_object* v_depth_630_, lean_object* v_keys_631_, lean_object* v_vals_632_, lean_object* v_i_633_, lean_object* v_entries_634_){
_start:
{
size_t v_depth_boxed_635_; lean_object* v_res_636_; 
v_depth_boxed_635_ = lean_unbox_usize(v_depth_630_);
lean_dec(v_depth_630_);
v_res_636_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(v_depth_boxed_635_, v_keys_631_, v_vals_632_, v_i_633_, v_entries_634_);
lean_dec_ref(v_vals_632_);
lean_dec_ref(v_keys_631_);
return v_res_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_x_637_, lean_object* v_x_638_, lean_object* v_x_639_, lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
size_t v_x_6215__boxed_642_; size_t v_x_6216__boxed_643_; lean_object* v_res_644_; 
v_x_6215__boxed_642_ = lean_unbox_usize(v_x_638_);
lean_dec(v_x_638_);
v_x_6216__boxed_643_ = lean_unbox_usize(v_x_639_);
lean_dec(v_x_639_);
v_res_644_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_x_637_, v_x_6215__boxed_642_, v_x_6216__boxed_643_, v_x_640_, v_x_641_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
uint64_t v___x_648_; size_t v___x_649_; size_t v___x_650_; lean_object* v___x_651_; 
v___x_648_ = l_Lean_instHashableMVarId_hash(v_x_646_);
v___x_649_ = lean_uint64_to_usize(v___x_648_);
v___x_650_ = ((size_t)1ULL);
v___x_651_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_x_645_, v___x_649_, v___x_650_, v_x_646_, v_x_647_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(lean_object* v_mvarId_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_){
_start:
{
lean_object* v___x_658_; lean_object* v_mctx_659_; lean_object* v_mvarDecl_660_; lean_object* v_userName_661_; lean_object* v_lctx_662_; lean_object* v_type_663_; lean_object* v_depth_664_; lean_object* v_localInstances_665_; uint8_t v_kind_666_; lean_object* v_numScopeArgs_667_; lean_object* v_index_668_; lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_732_; 
v___x_658_ = lean_st_ref_get(v___y_654_);
v_mctx_659_ = lean_ctor_get(v___x_658_, 0);
lean_inc_ref(v_mctx_659_);
lean_dec(v___x_658_);
lean_inc(v_mvarId_652_);
v_mvarDecl_660_ = l_Lean_MetavarContext_getDecl(v_mctx_659_, v_mvarId_652_);
lean_dec_ref(v_mctx_659_);
v_userName_661_ = lean_ctor_get(v_mvarDecl_660_, 0);
v_lctx_662_ = lean_ctor_get(v_mvarDecl_660_, 1);
v_type_663_ = lean_ctor_get(v_mvarDecl_660_, 2);
v_depth_664_ = lean_ctor_get(v_mvarDecl_660_, 3);
v_localInstances_665_ = lean_ctor_get(v_mvarDecl_660_, 4);
v_kind_666_ = lean_ctor_get_uint8(v_mvarDecl_660_, sizeof(void*)*7);
v_numScopeArgs_667_ = lean_ctor_get(v_mvarDecl_660_, 5);
v_index_668_ = lean_ctor_get(v_mvarDecl_660_, 6);
v_isSharedCheck_732_ = !lean_is_exclusive(v_mvarDecl_660_);
if (v_isSharedCheck_732_ == 0)
{
v___x_670_ = v_mvarDecl_660_;
v_isShared_671_ = v_isSharedCheck_732_;
goto v_resetjp_669_;
}
else
{
lean_inc(v_index_668_);
lean_inc(v_numScopeArgs_667_);
lean_inc(v_localInstances_665_);
lean_inc(v_depth_664_);
lean_inc(v_type_663_);
lean_inc(v_lctx_662_);
lean_inc(v_userName_661_);
lean_dec(v_mvarDecl_660_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_732_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; 
v___x_672_ = l_Lean_instantiateLCtxMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__0(v_lctx_662_, v___y_653_, v___y_654_, v___y_655_, v___y_656_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_674_; lean_object* v_a_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_723_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_type_663_, v___y_654_);
v_a_675_ = lean_ctor_get(v___x_674_, 0);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_674_);
if (v_isSharedCheck_723_ == 0)
{
v___x_677_ = v___x_674_;
v_isShared_678_ = v_isSharedCheck_723_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_a_675_);
lean_dec(v___x_674_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_723_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v_fst_681_; lean_object* v_snd_682_; lean_object* v___x_683_; lean_object* v_mctx_684_; lean_object* v_cache_685_; lean_object* v_zetaDeltaFVarIds_686_; lean_object* v_postponed_687_; lean_object* v_diag_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_722_; 
v___x_679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_679_, 0, v_a_673_);
lean_ctor_set(v___x_679_, 1, v_a_675_);
v___x_680_ = lean_sharecommon_quick(v___x_679_);
lean_dec_ref_known(v___x_679_, 2);
v_fst_681_ = lean_ctor_get(v___x_680_, 0);
lean_inc(v_fst_681_);
v_snd_682_ = lean_ctor_get(v___x_680_, 1);
lean_inc(v_snd_682_);
lean_dec(v___x_680_);
v___x_683_ = lean_st_ref_take(v___y_654_);
v_mctx_684_ = lean_ctor_get(v___x_683_, 0);
v_cache_685_ = lean_ctor_get(v___x_683_, 1);
v_zetaDeltaFVarIds_686_ = lean_ctor_get(v___x_683_, 2);
v_postponed_687_ = lean_ctor_get(v___x_683_, 3);
v_diag_688_ = lean_ctor_get(v___x_683_, 4);
v_isSharedCheck_722_ = !lean_is_exclusive(v___x_683_);
if (v_isSharedCheck_722_ == 0)
{
v___x_690_ = v___x_683_;
v_isShared_691_ = v_isSharedCheck_722_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_diag_688_);
lean_inc(v_postponed_687_);
lean_inc(v_zetaDeltaFVarIds_686_);
lean_inc(v_cache_685_);
lean_inc(v_mctx_684_);
lean_dec(v___x_683_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_722_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_depth_692_; lean_object* v_levelAssignDepth_693_; lean_object* v_lmvarCounter_694_; lean_object* v_mvarCounter_695_; lean_object* v_lDecls_696_; lean_object* v_decls_697_; lean_object* v_userNames_698_; lean_object* v_lAssignment_699_; lean_object* v_eAssignment_700_; lean_object* v_dAssignment_701_; lean_object* v_instanceTypedMVars_702_; lean_object* v___x_704_; uint8_t v_isShared_705_; uint8_t v_isSharedCheck_721_; 
v_depth_692_ = lean_ctor_get(v_mctx_684_, 0);
v_levelAssignDepth_693_ = lean_ctor_get(v_mctx_684_, 1);
v_lmvarCounter_694_ = lean_ctor_get(v_mctx_684_, 2);
v_mvarCounter_695_ = lean_ctor_get(v_mctx_684_, 3);
v_lDecls_696_ = lean_ctor_get(v_mctx_684_, 4);
v_decls_697_ = lean_ctor_get(v_mctx_684_, 5);
v_userNames_698_ = lean_ctor_get(v_mctx_684_, 6);
v_lAssignment_699_ = lean_ctor_get(v_mctx_684_, 7);
v_eAssignment_700_ = lean_ctor_get(v_mctx_684_, 8);
v_dAssignment_701_ = lean_ctor_get(v_mctx_684_, 9);
v_instanceTypedMVars_702_ = lean_ctor_get(v_mctx_684_, 10);
v_isSharedCheck_721_ = !lean_is_exclusive(v_mctx_684_);
if (v_isSharedCheck_721_ == 0)
{
v___x_704_ = v_mctx_684_;
v_isShared_705_ = v_isSharedCheck_721_;
goto v_resetjp_703_;
}
else
{
lean_inc(v_instanceTypedMVars_702_);
lean_inc(v_dAssignment_701_);
lean_inc(v_eAssignment_700_);
lean_inc(v_lAssignment_699_);
lean_inc(v_userNames_698_);
lean_inc(v_decls_697_);
lean_inc(v_lDecls_696_);
lean_inc(v_mvarCounter_695_);
lean_inc(v_lmvarCounter_694_);
lean_inc(v_levelAssignDepth_693_);
lean_inc(v_depth_692_);
lean_dec(v_mctx_684_);
v___x_704_ = lean_box(0);
v_isShared_705_ = v_isSharedCheck_721_;
goto v_resetjp_703_;
}
v_resetjp_703_:
{
lean_object* v___x_706_; lean_object* v___x_708_; 
v___x_706_ = lean_box(0);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 2, v_snd_682_);
lean_ctor_set(v___x_670_, 1, v_fst_681_);
v___x_708_ = v___x_670_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_720_; 
v_reuseFailAlloc_720_ = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(v_reuseFailAlloc_720_, 0, v_userName_661_);
lean_ctor_set(v_reuseFailAlloc_720_, 1, v_fst_681_);
lean_ctor_set(v_reuseFailAlloc_720_, 2, v_snd_682_);
lean_ctor_set(v_reuseFailAlloc_720_, 3, v_depth_664_);
lean_ctor_set(v_reuseFailAlloc_720_, 4, v_localInstances_665_);
lean_ctor_set(v_reuseFailAlloc_720_, 5, v_numScopeArgs_667_);
lean_ctor_set(v_reuseFailAlloc_720_, 6, v_index_668_);
lean_ctor_set_uint8(v_reuseFailAlloc_720_, sizeof(void*)*7, v_kind_666_);
v___x_708_ = v_reuseFailAlloc_720_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_709_; lean_object* v___x_711_; 
v___x_709_ = l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(v_decls_697_, v_mvarId_652_, v___x_708_);
if (v_isShared_705_ == 0)
{
lean_ctor_set(v___x_704_, 5, v___x_709_);
v___x_711_ = v___x_704_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_719_; 
v_reuseFailAlloc_719_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_719_, 0, v_depth_692_);
lean_ctor_set(v_reuseFailAlloc_719_, 1, v_levelAssignDepth_693_);
lean_ctor_set(v_reuseFailAlloc_719_, 2, v_lmvarCounter_694_);
lean_ctor_set(v_reuseFailAlloc_719_, 3, v_mvarCounter_695_);
lean_ctor_set(v_reuseFailAlloc_719_, 4, v_lDecls_696_);
lean_ctor_set(v_reuseFailAlloc_719_, 5, v___x_709_);
lean_ctor_set(v_reuseFailAlloc_719_, 6, v_userNames_698_);
lean_ctor_set(v_reuseFailAlloc_719_, 7, v_lAssignment_699_);
lean_ctor_set(v_reuseFailAlloc_719_, 8, v_eAssignment_700_);
lean_ctor_set(v_reuseFailAlloc_719_, 9, v_dAssignment_701_);
lean_ctor_set(v_reuseFailAlloc_719_, 10, v_instanceTypedMVars_702_);
v___x_711_ = v_reuseFailAlloc_719_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
lean_object* v___x_713_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v___x_711_);
v___x_713_ = v___x_690_;
goto v_reusejp_712_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_711_);
lean_ctor_set(v_reuseFailAlloc_718_, 1, v_cache_685_);
lean_ctor_set(v_reuseFailAlloc_718_, 2, v_zetaDeltaFVarIds_686_);
lean_ctor_set(v_reuseFailAlloc_718_, 3, v_postponed_687_);
lean_ctor_set(v_reuseFailAlloc_718_, 4, v_diag_688_);
v___x_713_ = v_reuseFailAlloc_718_;
goto v_reusejp_712_;
}
v_reusejp_712_:
{
lean_object* v___x_714_; lean_object* v___x_716_; 
v___x_714_ = lean_st_ref_put(v___y_654_, v___x_713_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_706_);
v___x_716_ = v___x_677_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_706_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
return v___x_716_;
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
lean_object* v_a_724_; lean_object* v___x_726_; uint8_t v_isShared_727_; uint8_t v_isSharedCheck_731_; 
lean_del_object(v___x_670_);
lean_dec(v_index_668_);
lean_dec(v_numScopeArgs_667_);
lean_dec_ref(v_localInstances_665_);
lean_dec(v_depth_664_);
lean_dec_ref(v_type_663_);
lean_dec(v_userName_661_);
lean_dec(v_mvarId_652_);
v_a_724_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_731_ == 0)
{
v___x_726_ = v___x_672_;
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
else
{
lean_inc(v_a_724_);
lean_dec(v___x_672_);
v___x_726_ = lean_box(0);
v_isShared_727_ = v_isSharedCheck_731_;
goto v_resetjp_725_;
}
v_resetjp_725_:
{
lean_object* v___x_729_; 
if (v_isShared_727_ == 0)
{
v___x_729_ = v___x_726_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v_a_724_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
return v___x_729_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0___boxed(lean_object* v_mvarId_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(v_mvarId_733_, v___y_734_, v___y_735_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_dec_ref(v___y_736_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic(lean_object* v_mvarId_740_, lean_object* v_tacticCode_741_, lean_object* v_ctx_742_, lean_object* v_s_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v___f_749_; lean_object* v___x_750_; 
v___f_749_ = lean_alloc_closure((void*)(l_Lean_Elab_runTactic___lam__0___boxed), 10, 1);
lean_closure_set(v___f_749_, 0, v_tacticCode_741_);
lean_inc(v_mvarId_740_);
v___x_750_ = l_Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0(v_mvarId_740_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v___x_751_; uint8_t v___x_752_; lean_object* v___x_753_; lean_object* v___f_754_; lean_object* v___x_755_; 
lean_dec_ref_known(v___x_750_, 1);
v___x_751_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_run___boxed), 9, 2);
lean_closure_set(v___x_751_, 0, v_mvarId_740_);
lean_closure_set(v___x_751_, 1, v___f_749_);
v___x_752_ = 1;
v___x_753_ = lean_box(v___x_752_);
v___f_754_ = lean_alloc_closure((void*)(l_Lean_Elab_runTactic___lam__1___boxed), 9, 2);
lean_closure_set(v___f_754_, 0, v___x_751_);
lean_closure_set(v___f_754_, 1, v___x_753_);
v___x_755_ = l_Lean_Elab_Term_TermElabM_run___redArg(v___f_754_, v_ctx_742_, v_s_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
return v___x_755_;
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec_ref(v___f_749_);
lean_dec_ref(v_s_743_);
lean_dec_ref(v_ctx_742_);
lean_dec(v_mvarId_740_);
v_a_756_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_750_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_750_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_runTactic___boxed(lean_object* v_mvarId_764_, lean_object* v_tacticCode_765_, lean_object* v_ctx_766_, lean_object* v_s_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_, lean_object* v___y_771_, lean_object* v___y_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lean_Elab_runTactic(v_mvarId_764_, v_tacticCode_765_, v_ctx_766_, v_s_767_, v___y_768_, v___y_769_, v___y_770_, v___y_771_);
lean_dec(v___y_771_);
lean_dec_ref(v___y_770_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(lean_object* v_e_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_){
_start:
{
lean_object* v___x_780_; 
v___x_780_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___redArg(v_e_774_, v___y_776_);
return v___x_780_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1___boxed(lean_object* v_e_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_, lean_object* v___y_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l_Lean_instantiateMVars___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__1(v_e_781_, v___y_782_, v___y_783_, v___y_784_, v___y_785_);
lean_dec(v___y_785_);
lean_dec_ref(v___y_784_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2(lean_object* v_00_u03b2_788_, lean_object* v_x_789_, lean_object* v_x_790_, lean_object* v_x_791_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2___redArg(v_x_789_, v_x_790_, v_x_791_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_793_, lean_object* v_x_794_, size_t v_x_795_, size_t v_x_796_, lean_object* v_x_797_, lean_object* v_x_798_){
_start:
{
lean_object* v___x_799_; 
v___x_799_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___redArg(v_x_794_, v_x_795_, v_x_796_, v_x_797_, v_x_798_);
return v___x_799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_800_, lean_object* v_x_801_, lean_object* v_x_802_, lean_object* v_x_803_, lean_object* v_x_804_, lean_object* v_x_805_){
_start:
{
size_t v_x_6566__boxed_806_; size_t v_x_6567__boxed_807_; lean_object* v_res_808_; 
v_x_6566__boxed_806_ = lean_unbox_usize(v_x_802_);
lean_dec(v_x_802_);
v_x_6567__boxed_807_ = lean_unbox_usize(v_x_803_);
lean_dec(v_x_803_);
v_res_808_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5(v_00_u03b2_800_, v_x_801_, v_x_6566__boxed_806_, v_x_6567__boxed_807_, v_x_804_, v_x_805_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7(lean_object* v_00_u03b2_809_, lean_object* v_n_810_, lean_object* v_k_811_, lean_object* v_v_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7___redArg(v_n_810_, v_k_811_, v_v_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8(lean_object* v_00_u03b2_814_, size_t v_depth_815_, lean_object* v_keys_816_, lean_object* v_vals_817_, lean_object* v_heq_818_, lean_object* v_i_819_, lean_object* v_entries_820_){
_start:
{
lean_object* v___x_821_; 
v___x_821_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___redArg(v_depth_815_, v_keys_816_, v_vals_817_, v_i_819_, v_entries_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8___boxed(lean_object* v_00_u03b2_822_, lean_object* v_depth_823_, lean_object* v_keys_824_, lean_object* v_vals_825_, lean_object* v_heq_826_, lean_object* v_i_827_, lean_object* v_entries_828_){
_start:
{
size_t v_depth_boxed_829_; lean_object* v_res_830_; 
v_depth_boxed_829_ = lean_unbox_usize(v_depth_823_);
lean_dec(v_depth_823_);
v_res_830_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__8(v_00_u03b2_822_, v_depth_boxed_829_, v_keys_824_, v_vals_825_, v_heq_826_, v_i_827_, v_entries_828_);
lean_dec_ref(v_vals_825_);
lean_dec_ref(v_keys_824_);
return v_res_830_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11(lean_object* v_00_u03b2_831_, lean_object* v_x_832_, lean_object* v_x_833_, lean_object* v_x_834_, lean_object* v_x_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_instantiateMVarDeclMVars___at___00Lean_Elab_runTactic_spec__0_spec__2_spec__5_spec__7_spec__11___redArg(v_x_832_, v_x_833_, v_x_834_, v_x_835_);
return v___x_836_;
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
