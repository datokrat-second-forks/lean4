// Lean compiler output
// Module: Lean.LibrarySuggestions.SymbolFrequency
// Imports: public import Lean.Meta.Basic import Lean.LibrarySuggestions.Basic
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
extern lean_object* l_Lean_firstFrontendMacroScope;
extern lean_object* l_Lean_Options_empty;
extern lean_object* l_Lean_instInhabitedFileMap_default;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_st_ref_swap(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_constants(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_mkPtrSet___redArg(lean_object*);
lean_object* l___private_Lean_LibrarySuggestions_Basic_0__Lean_Expr_FoldRelevantConstantsImpl_fold_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_LibrarySuggestions_isDeniedPremise(lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_wasOriginallyTheorem(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_instMonadEnvMetaM;
lean_object* l_instMonadFinallyEIO___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadFinallyStateRefT_x27___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_tryFinally___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withoutExporting___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_MetaM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Lean_Core_CoreM_run_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_EIO_toBaseIO___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_unsafeBaseIO___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__0;
static lean_once_cell_t l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__1;
static lean_once_cell_t l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2;
static lean_once_cell_t l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__3;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__0 = (const lean_object*)&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__0_value;
static const lean_closure_object l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__1___boxed, .m_arity = 8, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__0_value)} };
static const lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__1 = (const lean_object*)&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_224017424____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_224017424____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_localSymbolFrequencyMapRef;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequency(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequency___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___lam__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__0;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__1;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__2 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__3 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__4 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__5 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadFinallyEIO___aux__1___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__6 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadFinallyStateRefT_x27___aux__1___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__6_value)} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__7 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__7_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_tryFinally___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__7_value)} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__8 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__8_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadFinallyStateRefT_x27___aux__1___boxed, .m_arity = 9, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__8_value)} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__9 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__9_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_tryFinally___redArg___lam__1, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__9_value)} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__10 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__10_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__11 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__11_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__12;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__13;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__14;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__16;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__18;
static const lean_array_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__19 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__19_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__20;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__21;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__22;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__23;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__24;
static const lean_string_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "symbolFrequency"};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__25 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__25_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__26;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__27;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__28;
static const lean_string_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "_uniq"};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__29 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__29_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__29_value),LEAN_SCALAR_PTR_LITERAL(237, 141, 162, 170, 202, 74, 55, 55)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__30 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__30_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__30_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__31 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__31_value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__32 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__32_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__33;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__34;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__35_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__35;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__36_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__36;
static const lean_string_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.LibrarySuggestions.SymbolFrequency"};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__37 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__37_value;
static const lean_string_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "_private.Lean.LibrarySuggestions.SymbolFrequency.0.Lean.Environment.unsafeRunMetaM"};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__38 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__38_value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__0_value;
static lean_once_cell_t l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3(lean_object*);
static const lean_array_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*);
static const lean_string_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "symbol frequency extension"};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(10, 33, 51, 182, 202, 68, 104, 66)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_array_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__7_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__8_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__9_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_2997076389____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_2997076389____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyMapRef;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instZeroNameMapNat;
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__1(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__0 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__0_value;
static const lean_closure_object l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__1, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__0_value)} };
static const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__1 = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__1_value;
LEAN_EXPORT const lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat = (const lean_object*)&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__0(lean_object* v_i_x3f_1_){
_start:
{
lean_object* v___y_3_; 
if (lean_obj_tag(v_i_x3f_1_) == 0)
{
lean_object* v___x_7_; 
v___x_7_ = lean_unsigned_to_nat(0u);
v___y_3_ = v___x_7_;
goto v___jp_2_;
}
else
{
lean_object* v_val_8_; 
v_val_8_ = lean_ctor_get(v_i_x3f_1_, 0);
v___y_3_ = v_val_8_;
goto v___jp_2_;
}
v___jp_2_:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_unsigned_to_nat(1u);
v___x_5_ = lean_nat_add(v___y_3_, v___x_4_);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__0___boxed(lean_object* v_i_x3f_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__0(v_i_x3f_9_);
lean_dec(v_i_x3f_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__1(lean_object* v___f_11_, lean_object* v_n_x27_12_, lean_object* v_acc_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_19_ = l_Std_DTreeMap_Internal_Impl_Const_alter___at___00Lean_NameMap_alter_spec__0___redArg(v___f_11_, v_n_x27_12_, v_acc_13_);
v___x_20_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_20_, 0, v___x_19_);
return v___x_20_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__1___boxed(lean_object* v___f_21_, lean_object* v_n_x27_22_, lean_object* v_acc_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__1(v___f_21_, v_n_x27_22_, v_acc_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
return v_res_29_;
}
}
static lean_object* _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__0(void){
_start:
{
lean_object* v___x_30_; lean_object* v___x_31_; 
v___x_30_ = lean_unsigned_to_nat(64u);
v___x_31_ = l_Lean_mkPtrSet___redArg(v___x_30_);
return v___x_31_;
}
}
static lean_object* _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__1(void){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; 
v___x_32_ = lean_box(0);
v___x_33_ = lean_unsigned_to_nat(16u);
v___x_34_ = lean_mk_array(v___x_33_, v___x_32_);
return v___x_34_;
}
}
static lean_object* _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2(void){
_start:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_35_ = lean_obj_once(&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__1, &l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__1_once, _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__1);
v___x_36_ = lean_unsigned_to_nat(0u);
v___x_37_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_35_);
return v___x_37_;
}
}
static lean_object* _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__3(void){
_start:
{
lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_38_ = lean_obj_once(&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2, &l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2_once, _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2);
v___x_39_ = lean_obj_once(&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__0, &l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__0_once, _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__0);
v___x_40_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_40_, 0, v___x_39_);
lean_ctor_set(v___x_40_, 1, v___x_38_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2(lean_object* v___f_41_, lean_object* v_env_42_, lean_object* v_acc_43_, lean_object* v_m_44_, lean_object* v_ci_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_){
_start:
{
uint8_t v___y_52_; uint8_t v___x_74_; uint8_t v___x_75_; 
v___x_74_ = 0;
lean_inc(v_m_44_);
lean_inc_ref(v_env_42_);
v___x_75_ = l_Lean_LibrarySuggestions_isDeniedPremise(v_env_42_, v_m_44_, v___x_74_);
if (v___x_75_ == 0)
{
uint8_t v___x_76_; 
v___x_76_ = l_Lean_wasOriginallyTheorem(v_env_42_, v_m_44_);
if (v___x_76_ == 0)
{
lean_object* v___x_77_; 
lean_dec_ref(v___f_41_);
v___x_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_77_, 0, v_acc_43_);
return v___x_77_;
}
else
{
v___y_52_ = v___x_75_;
goto v___jp_51_;
}
}
else
{
lean_dec(v_m_44_);
lean_dec_ref(v_env_42_);
v___y_52_ = v___x_75_;
goto v___jp_51_;
}
v___jp_51_:
{
if (v___y_52_ == 0)
{
lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_53_ = l_Lean_ConstantInfo_type(v_ci_45_);
v___x_54_ = lean_obj_once(&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__3, &l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__3_once, _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__3);
v___x_55_ = l___private_Lean_LibrarySuggestions_Basic_0__Lean_Expr_FoldRelevantConstantsImpl_fold_visit(lean_box(0), v___f_41_, v___x_53_, v_acc_43_, v___x_54_, v___y_46_, v___y_47_, v___y_48_, v___y_49_);
if (lean_obj_tag(v___x_55_) == 0)
{
lean_object* v_a_56_; lean_object* v___x_58_; uint8_t v_isShared_59_; uint8_t v_isSharedCheck_64_; 
v_a_56_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_64_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_64_ == 0)
{
v___x_58_ = v___x_55_;
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
else
{
lean_inc(v_a_56_);
lean_dec(v___x_55_);
v___x_58_ = lean_box(0);
v_isShared_59_ = v_isSharedCheck_64_;
goto v_resetjp_57_;
}
v_resetjp_57_:
{
lean_object* v_fst_60_; lean_object* v___x_62_; 
v_fst_60_ = lean_ctor_get(v_a_56_, 0);
lean_inc(v_fst_60_);
lean_dec(v_a_56_);
if (v_isShared_59_ == 0)
{
lean_ctor_set(v___x_58_, 0, v_fst_60_);
v___x_62_ = v___x_58_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_fst_60_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
else
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_72_; 
v_a_65_ = lean_ctor_get(v___x_55_, 0);
v_isSharedCheck_72_ = !lean_is_exclusive(v___x_55_);
if (v_isSharedCheck_72_ == 0)
{
v___x_67_ = v___x_55_;
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_55_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_72_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
lean_object* v___x_70_; 
if (v_isShared_68_ == 0)
{
v___x_70_ = v___x_67_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_71_; 
v_reuseFailAlloc_71_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_71_, 0, v_a_65_);
v___x_70_ = v_reuseFailAlloc_71_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
return v___x_70_;
}
}
}
}
else
{
lean_object* v___x_73_; 
lean_dec_ref(v___f_41_);
v___x_73_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_73_, 0, v_acc_43_);
return v___x_73_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___boxed(lean_object* v___f_78_, lean_object* v_env_79_, lean_object* v_acc_80_, lean_object* v_m_81_, lean_object* v_ci_82_, lean_object* v___y_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v_res_88_; 
v_res_88_ = l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2(v___f_78_, v_env_79_, v_acc_80_, v_m_81_, v_ci_82_, v___y_83_, v___y_84_, v___y_85_, v___y_86_);
lean_dec(v___y_86_);
lean_dec_ref(v___y_85_);
lean_dec(v___y_84_);
lean_dec_ref(v___y_83_);
lean_dec_ref(v_ci_82_);
return v_res_88_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___redArg(lean_object* v_f_89_, lean_object* v_keys_90_, lean_object* v_vals_91_, lean_object* v_i_92_, lean_object* v_acc_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_){
_start:
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = lean_array_get_size(v_keys_90_);
v___x_100_ = lean_nat_dec_lt(v_i_92_, v___x_99_);
if (v___x_100_ == 0)
{
lean_object* v___x_101_; 
lean_dec(v_i_92_);
lean_dec_ref(v_f_89_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v_acc_93_);
return v___x_101_;
}
else
{
lean_object* v_k_102_; lean_object* v_v_103_; lean_object* v___x_104_; 
v_k_102_ = lean_array_fget_borrowed(v_keys_90_, v_i_92_);
v_v_103_ = lean_array_fget_borrowed(v_vals_91_, v_i_92_);
lean_inc_ref(v_f_89_);
lean_inc(v___y_97_);
lean_inc_ref(v___y_96_);
lean_inc(v___y_95_);
lean_inc_ref(v___y_94_);
lean_inc(v_v_103_);
lean_inc(v_k_102_);
v___x_104_ = lean_apply_8(v_f_89_, v_acc_93_, v_k_102_, v_v_103_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, lean_box(0));
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v_a_105_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_a_105_);
lean_dec_ref_known(v___x_104_, 1);
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_add(v_i_92_, v___x_106_);
lean_dec(v_i_92_);
v_i_92_ = v___x_107_;
v_acc_93_ = v_a_105_;
goto _start;
}
else
{
lean_dec(v_i_92_);
lean_dec_ref(v_f_89_);
return v___x_104_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_109_, lean_object* v_keys_110_, lean_object* v_vals_111_, lean_object* v_i_112_, lean_object* v_acc_113_, lean_object* v___y_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_, lean_object* v___y_118_){
_start:
{
lean_object* v_res_119_; 
v_res_119_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___redArg(v_f_109_, v_keys_110_, v_vals_111_, v_i_112_, v_acc_113_, v___y_114_, v___y_115_, v___y_116_, v___y_117_);
lean_dec(v___y_117_);
lean_dec_ref(v___y_116_);
lean_dec(v___y_115_);
lean_dec_ref(v___y_114_);
lean_dec_ref(v_vals_111_);
lean_dec_ref(v_keys_110_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___redArg(lean_object* v_f_120_, lean_object* v_as_121_, size_t v_i_122_, size_t v_stop_123_, lean_object* v_b_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_, lean_object* v___y_128_){
_start:
{
lean_object* v_a_131_; lean_object* v___y_136_; uint8_t v___x_138_; 
v___x_138_ = lean_usize_dec_eq(v_i_122_, v_stop_123_);
if (v___x_138_ == 0)
{
lean_object* v___x_139_; 
v___x_139_ = lean_array_uget_borrowed(v_as_121_, v_i_122_);
switch(lean_obj_tag(v___x_139_))
{
case 0:
{
lean_object* v_key_140_; lean_object* v_val_141_; lean_object* v___x_142_; 
v_key_140_ = lean_ctor_get(v___x_139_, 0);
v_val_141_ = lean_ctor_get(v___x_139_, 1);
lean_inc_ref(v_f_120_);
lean_inc(v___y_128_);
lean_inc_ref(v___y_127_);
lean_inc(v___y_126_);
lean_inc_ref(v___y_125_);
lean_inc(v_val_141_);
lean_inc(v_key_140_);
v___x_142_ = lean_apply_8(v_f_120_, v_b_124_, v_key_140_, v_val_141_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, lean_box(0));
v___y_136_ = v___x_142_;
goto v___jp_135_;
}
case 1:
{
lean_object* v_node_143_; lean_object* v___x_144_; 
v_node_143_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_node_143_);
lean_inc_ref(v_f_120_);
v___x_144_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(v_f_120_, v_node_143_, v_b_124_, v___y_125_, v___y_126_, v___y_127_, v___y_128_);
v___y_136_ = v___x_144_;
goto v___jp_135_;
}
default: 
{
v_a_131_ = v_b_124_;
goto v___jp_130_;
}
}
}
else
{
lean_object* v___x_145_; 
lean_dec_ref(v_f_120_);
v___x_145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_145_, 0, v_b_124_);
return v___x_145_;
}
v___jp_130_:
{
size_t v___x_132_; size_t v___x_133_; 
v___x_132_ = ((size_t)1ULL);
v___x_133_ = lean_usize_add(v_i_122_, v___x_132_);
v_i_122_ = v___x_133_;
v_b_124_ = v_a_131_;
goto _start;
}
v___jp_135_:
{
if (lean_obj_tag(v___y_136_) == 0)
{
lean_object* v_a_137_; 
v_a_137_ = lean_ctor_get(v___y_136_, 0);
lean_inc(v_a_137_);
lean_dec_ref_known(v___y_136_, 1);
v_a_131_ = v_a_137_;
goto v___jp_130_;
}
else
{
lean_dec_ref(v_f_120_);
return v___y_136_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(lean_object* v_f_146_, lean_object* v_x_147_, lean_object* v_x_148_, lean_object* v___y_149_, lean_object* v___y_150_, lean_object* v___y_151_, lean_object* v___y_152_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v_es_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_167_; 
v_es_154_ = lean_ctor_get(v_x_147_, 0);
v_isSharedCheck_167_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_167_ == 0)
{
v___x_156_ = v_x_147_;
v_isShared_157_ = v_isSharedCheck_167_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_es_154_);
lean_dec(v_x_147_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_167_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_158_; lean_object* v___x_159_; uint8_t v___x_160_; 
v___x_158_ = lean_unsigned_to_nat(0u);
v___x_159_ = lean_array_get_size(v_es_154_);
v___x_160_ = lean_nat_dec_lt(v___x_158_, v___x_159_);
if (v___x_160_ == 0)
{
lean_object* v___x_162_; 
lean_dec_ref(v_es_154_);
lean_dec_ref(v_f_146_);
if (v_isShared_157_ == 0)
{
lean_ctor_set(v___x_156_, 0, v_x_148_);
v___x_162_ = v___x_156_;
goto v_reusejp_161_;
}
else
{
lean_object* v_reuseFailAlloc_163_; 
v_reuseFailAlloc_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_163_, 0, v_x_148_);
v___x_162_ = v_reuseFailAlloc_163_;
goto v_reusejp_161_;
}
v_reusejp_161_:
{
return v___x_162_;
}
}
else
{
size_t v___x_164_; size_t v___x_165_; lean_object* v___x_166_; 
lean_del_object(v___x_156_);
v___x_164_ = ((size_t)0ULL);
v___x_165_ = lean_usize_of_nat(v___x_159_);
v___x_166_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___redArg(v_f_146_, v_es_154_, v___x_164_, v___x_165_, v_x_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec_ref(v_es_154_);
return v___x_166_;
}
}
}
else
{
lean_object* v_ks_168_; lean_object* v_vs_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v_ks_168_ = lean_ctor_get(v_x_147_, 0);
lean_inc_ref(v_ks_168_);
v_vs_169_ = lean_ctor_get(v_x_147_, 1);
lean_inc_ref(v_vs_169_);
lean_dec_ref_known(v_x_147_, 2);
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___redArg(v_f_146_, v_ks_168_, v_vs_169_, v___x_170_, v_x_148_, v___y_149_, v___y_150_, v___y_151_, v___y_152_);
lean_dec_ref(v_vs_169_);
lean_dec_ref(v_ks_168_);
return v___x_171_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg___boxed(lean_object* v_f_172_, lean_object* v_x_173_, lean_object* v_x_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(v_f_172_, v_x_173_, v_x_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_181_, lean_object* v_as_182_, lean_object* v_i_183_, lean_object* v_stop_184_, lean_object* v_b_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_){
_start:
{
size_t v_i_boxed_191_; size_t v_stop_boxed_192_; lean_object* v_res_193_; 
v_i_boxed_191_ = lean_unbox_usize(v_i_183_);
lean_dec(v_i_183_);
v_stop_boxed_192_ = lean_unbox_usize(v_stop_184_);
lean_dec(v_stop_184_);
v_res_193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___redArg(v_f_181_, v_as_182_, v_i_boxed_191_, v_stop_boxed_192_, v_b_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
lean_dec(v___y_187_);
lean_dec_ref(v___y_186_);
lean_dec_ref(v_as_182_);
return v_res_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap(lean_object* v_a_197_, lean_object* v_a_198_, lean_object* v_a_199_, lean_object* v_a_200_){
_start:
{
lean_object* v___f_202_; lean_object* v___x_203_; lean_object* v_env_204_; lean_object* v___x_205_; lean_object* v_map_u2082_206_; lean_object* v___f_207_; lean_object* v___x_208_; lean_object* v___x_209_; 
v___f_202_ = ((lean_object*)(l_Lean_LibrarySuggestions_localSymbolFrequencyMap___closed__1));
v___x_203_ = lean_st_ref_get(v_a_200_);
v_env_204_ = lean_ctor_get(v___x_203_, 0);
lean_inc_ref_n(v_env_204_, 2);
lean_dec(v___x_203_);
v___x_205_ = l_Lean_Environment_constants(v_env_204_);
v_map_u2082_206_ = lean_ctor_get(v___x_205_, 1);
lean_inc_ref(v_map_u2082_206_);
lean_dec_ref(v___x_205_);
v___f_207_ = lean_alloc_closure((void*)(l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___boxed), 10, 2);
lean_closure_set(v___f_207_, 0, v___f_202_);
lean_closure_set(v___f_207_, 1, v_env_204_);
v___x_208_ = lean_box(1);
v___x_209_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(v___f_207_, v_map_u2082_206_, v___x_208_, v_a_197_, v_a_198_, v_a_199_, v_a_200_);
return v___x_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequencyMap___boxed(lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_, lean_object* v_a_214_){
_start:
{
lean_object* v_res_215_; 
v_res_215_ = l_Lean_LibrarySuggestions_localSymbolFrequencyMap(v_a_210_, v_a_211_, v_a_212_, v_a_213_);
lean_dec(v_a_213_);
lean_dec_ref(v_a_212_);
lean_dec(v_a_211_);
lean_dec_ref(v_a_210_);
return v_res_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0___redArg(lean_object* v_map_216_, lean_object* v_f_217_, lean_object* v_init_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_){
_start:
{
lean_object* v___x_224_; 
v___x_224_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(v_f_217_, v_map_216_, v_init_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
return v___x_224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0___redArg___boxed(lean_object* v_map_225_, lean_object* v_f_226_, lean_object* v_init_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
lean_object* v_res_233_; 
v_res_233_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0___redArg(v_map_225_, v_f_226_, v_init_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
return v_res_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0(lean_object* v_00_u03c3_234_, lean_object* v_00_u03b2_235_, lean_object* v_map_236_, lean_object* v_f_237_, lean_object* v_init_238_, lean_object* v___y_239_, lean_object* v___y_240_, lean_object* v___y_241_, lean_object* v___y_242_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(v_f_237_, v_map_236_, v_init_238_, v___y_239_, v___y_240_, v___y_241_, v___y_242_);
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0___boxed(lean_object* v_00_u03c3_245_, lean_object* v_00_u03b2_246_, lean_object* v_map_247_, lean_object* v_f_248_, lean_object* v_init_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_){
_start:
{
lean_object* v_res_255_; 
v_res_255_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0(v_00_u03c3_245_, v_00_u03b2_246_, v_map_247_, v_f_248_, v_init_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_);
lean_dec(v___y_253_);
lean_dec_ref(v___y_252_);
lean_dec(v___y_251_);
lean_dec_ref(v___y_250_);
return v_res_255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0(lean_object* v_00_u03c3_256_, lean_object* v_00_u03b1_257_, lean_object* v_00_u03b2_258_, lean_object* v_f_259_, lean_object* v_x_260_, lean_object* v_x_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___redArg(v_f_259_, v_x_260_, v_x_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0___boxed(lean_object* v_00_u03c3_268_, lean_object* v_00_u03b1_269_, lean_object* v_00_u03b2_270_, lean_object* v_f_271_, lean_object* v_x_272_, lean_object* v_x_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0(v_00_u03c3_268_, v_00_u03b1_269_, v_00_u03b2_270_, v_f_271_, v_x_272_, v_x_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_280_, lean_object* v_00_u03b2_281_, lean_object* v_00_u03c3_282_, lean_object* v_f_283_, lean_object* v_as_284_, size_t v_i_285_, size_t v_stop_286_, lean_object* v_b_287_, lean_object* v___y_288_, lean_object* v___y_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___redArg(v_f_283_, v_as_284_, v_i_285_, v_stop_286_, v_b_287_, v___y_288_, v___y_289_, v___y_290_, v___y_291_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_294_, lean_object* v_00_u03b2_295_, lean_object* v_00_u03c3_296_, lean_object* v_f_297_, lean_object* v_as_298_, lean_object* v_i_299_, lean_object* v_stop_300_, lean_object* v_b_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
size_t v_i_boxed_307_; size_t v_stop_boxed_308_; lean_object* v_res_309_; 
v_i_boxed_307_ = lean_unbox_usize(v_i_299_);
lean_dec(v_i_299_);
v_stop_boxed_308_ = lean_unbox_usize(v_stop_300_);
lean_dec(v_stop_300_);
v_res_309_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__1(v_00_u03b1_294_, v_00_u03b2_295_, v_00_u03c3_296_, v_f_297_, v_as_298_, v_i_boxed_307_, v_stop_boxed_308_, v_b_301_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
lean_dec_ref(v_as_298_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2(lean_object* v_00_u03c3_310_, lean_object* v_00_u03b1_311_, lean_object* v_00_u03b2_312_, lean_object* v_f_313_, lean_object* v_keys_314_, lean_object* v_vals_315_, lean_object* v_heq_316_, lean_object* v_i_317_, lean_object* v_acc_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_, lean_object* v___y_322_){
_start:
{
lean_object* v___x_324_; 
v___x_324_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___redArg(v_f_313_, v_keys_314_, v_vals_315_, v_i_317_, v_acc_318_, v___y_319_, v___y_320_, v___y_321_, v___y_322_);
return v___x_324_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03c3_325_, lean_object* v_00_u03b1_326_, lean_object* v_00_u03b2_327_, lean_object* v_f_328_, lean_object* v_keys_329_, lean_object* v_vals_330_, lean_object* v_heq_331_, lean_object* v_i_332_, lean_object* v_acc_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
lean_object* v_res_339_; 
v_res_339_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_LibrarySuggestions_localSymbolFrequencyMap_spec__0_spec__0_spec__2(v_00_u03c3_325_, v_00_u03b1_326_, v_00_u03b2_327_, v_f_328_, v_keys_329_, v_vals_330_, v_heq_331_, v_i_332_, v_acc_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_);
lean_dec(v___y_337_);
lean_dec_ref(v___y_336_);
lean_dec(v___y_335_);
lean_dec_ref(v___y_334_);
lean_dec_ref(v_vals_330_);
lean_dec_ref(v_keys_329_);
return v_res_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_224017424____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_341_; lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_341_ = lean_box(0);
v___x_342_ = lean_st_mk_ref(v___x_341_);
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_224017424____hygCtx___hyg_2____boxed(lean_object* v_a_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_224017424____hygCtx___hyg_2_();
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap(lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_){
_start:
{
lean_object* v___x_351_; lean_object* v___x_352_; 
v___x_351_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_localSymbolFrequencyMapRef;
v___x_352_ = lean_st_ref_get(v___x_351_);
if (lean_obj_tag(v___x_352_) == 0)
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_LibrarySuggestions_localSymbolFrequencyMap(v_a_346_, v_a_347_, v_a_348_, v_a_349_);
if (lean_obj_tag(v___x_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_363_; 
v_a_354_ = lean_ctor_get(v___x_353_, 0);
v_isSharedCheck_363_ = !lean_is_exclusive(v___x_353_);
if (v_isSharedCheck_363_ == 0)
{
v___x_356_ = v___x_353_;
v_isShared_357_ = v_isSharedCheck_363_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v___x_353_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_363_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
lean_inc(v_a_354_);
v___x_358_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_358_, 0, v_a_354_);
v___x_359_ = lean_st_ref_swap(v___x_351_, v___x_358_);
lean_dec(v___x_359_);
if (v_isShared_357_ == 0)
{
v___x_361_ = v___x_356_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_362_; 
v_reuseFailAlloc_362_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_362_, 0, v_a_354_);
v___x_361_ = v_reuseFailAlloc_362_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
return v___x_361_;
}
}
}
else
{
return v___x_353_;
}
}
else
{
lean_object* v_val_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
v_val_364_ = lean_ctor_get(v___x_352_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_352_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_352_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_val_364_);
lean_dec(v___x_352_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
lean_ctor_set_tag(v___x_366_, 0);
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_val_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap___boxed(lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap(v_a_372_, v_a_373_, v_a_374_, v_a_375_);
lean_dec(v_a_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_a_373_);
lean_dec_ref(v_a_372_);
return v_res_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequency(lean_object* v_n_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_){
_start:
{
lean_object* v___x_384_; 
v___x_384_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap(v_a_379_, v_a_380_, v_a_381_, v_a_382_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; lean_object* v___x_387_; uint8_t v_isShared_388_; uint8_t v_isSharedCheck_394_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_394_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_394_ == 0)
{
v___x_387_ = v___x_384_;
v_isShared_388_ = v_isSharedCheck_394_;
goto v_resetjp_386_;
}
else
{
lean_inc(v_a_385_);
lean_dec(v___x_384_);
v___x_387_ = lean_box(0);
v_isShared_388_ = v_isSharedCheck_394_;
goto v_resetjp_386_;
}
v_resetjp_386_:
{
lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_392_; 
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_a_385_, v_n_378_, v___x_389_);
lean_dec(v_a_385_);
if (v_isShared_388_ == 0)
{
lean_ctor_set(v___x_387_, 0, v___x_390_);
v___x_392_ = v___x_387_;
goto v_reusejp_391_;
}
else
{
lean_object* v_reuseFailAlloc_393_; 
v_reuseFailAlloc_393_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_393_, 0, v___x_390_);
v___x_392_ = v_reuseFailAlloc_393_;
goto v_reusejp_391_;
}
v_reusejp_391_:
{
return v___x_392_;
}
}
}
else
{
lean_object* v_a_395_; lean_object* v___x_397_; uint8_t v_isShared_398_; uint8_t v_isSharedCheck_402_; 
v_a_395_ = lean_ctor_get(v___x_384_, 0);
v_isSharedCheck_402_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_402_ == 0)
{
v___x_397_ = v___x_384_;
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
else
{
lean_inc(v_a_395_);
lean_dec(v___x_384_);
v___x_397_ = lean_box(0);
v_isShared_398_ = v_isSharedCheck_402_;
goto v_resetjp_396_;
}
v_resetjp_396_:
{
lean_object* v___x_400_; 
if (v_isShared_398_ == 0)
{
v___x_400_ = v___x_397_;
goto v_reusejp_399_;
}
else
{
lean_object* v_reuseFailAlloc_401_; 
v_reuseFailAlloc_401_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_401_, 0, v_a_395_);
v___x_400_ = v_reuseFailAlloc_401_;
goto v_reusejp_399_;
}
v_reusejp_399_:
{
return v___x_400_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_localSymbolFrequency___boxed(lean_object* v_n_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_, lean_object* v_a_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_LibrarySuggestions_localSymbolFrequency(v_n_403_, v_a_404_, v_a_405_, v_a_406_, v_a_407_);
lean_dec(v_a_407_);
lean_dec_ref(v_a_406_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_n_403_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___lam__0(lean_object* v___x_410_){
_start:
{
lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_412_ = l_Lean_MessageData_toString(v___x_410_);
v___x_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_413_, 0, v___x_412_);
return v___x_413_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___lam__0___boxed(lean_object* v___x_414_, lean_object* v___y_415_){
_start:
{
lean_object* v_res_416_; 
v_res_416_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___lam__0(v___x_414_);
return v_res_416_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__0(void){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_instMonadEIO___redArg();
return v___x_417_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__1(void){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; 
v___x_418_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__0, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__0_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__0);
v___x_419_ = l_StateRefT_x27_instMonad___redArg(v___x_418_);
return v___x_419_;
}
}
static uint64_t _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__12(void){
_start:
{
lean_object* v___x_439_; uint64_t v___x_440_; 
v___x_439_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__11));
v___x_440_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_439_);
return v___x_440_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__13(void){
_start:
{
uint64_t v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v___x_441_ = lean_uint64_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__12, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__12_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__12);
v___x_442_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__11));
v___x_443_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_443_, 0, v___x_442_);
lean_ctor_set_uint64(v___x_443_, sizeof(void*)*1, v___x_441_);
return v___x_443_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__14(void){
_start:
{
lean_object* v___x_444_; 
v___x_444_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_444_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; 
v___x_445_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__14, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__14_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__14);
v___x_446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
return v___x_446_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__16(void){
_start:
{
lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; 
v___x_447_ = lean_unsigned_to_nat(32u);
v___x_448_ = lean_mk_empty_array_with_capacity(v___x_447_);
v___x_449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_449_, 0, v___x_448_);
return v___x_449_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17(void){
_start:
{
size_t v___x_450_; lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_450_ = ((size_t)5ULL);
v___x_451_ = lean_unsigned_to_nat(0u);
v___x_452_ = lean_unsigned_to_nat(32u);
v___x_453_ = lean_mk_empty_array_with_capacity(v___x_452_);
v___x_454_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__16, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__16_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__16);
v___x_455_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_453_);
lean_ctor_set(v___x_455_, 2, v___x_451_);
lean_ctor_set(v___x_455_, 3, v___x_451_);
lean_ctor_set_usize(v___x_455_, 4, v___x_450_);
return v___x_455_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__18(void){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_456_ = lean_box(1);
v___x_457_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17);
v___x_458_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15);
v___x_459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
lean_ctor_set(v___x_459_, 1, v___x_457_);
lean_ctor_set(v___x_459_, 2, v___x_456_);
return v___x_459_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__20(void){
_start:
{
uint8_t v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; 
v___x_462_ = 1;
v___x_463_ = lean_unsigned_to_nat(0u);
v___x_464_ = lean_box(0);
v___x_465_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__19));
v___x_466_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__18, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__18_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__18);
v___x_467_ = lean_box(1);
v___x_468_ = 0;
v___x_469_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__13, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__13_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__13);
v___x_470_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_470_, 0, v___x_469_);
lean_ctor_set(v___x_470_, 1, v___x_467_);
lean_ctor_set(v___x_470_, 2, v___x_466_);
lean_ctor_set(v___x_470_, 3, v___x_465_);
lean_ctor_set(v___x_470_, 4, v___x_464_);
lean_ctor_set(v___x_470_, 5, v___x_463_);
lean_ctor_set(v___x_470_, 6, v___x_464_);
lean_ctor_set_uint8(v___x_470_, sizeof(void*)*7, v___x_468_);
lean_ctor_set_uint8(v___x_470_, sizeof(void*)*7 + 1, v___x_468_);
lean_ctor_set_uint8(v___x_470_, sizeof(void*)*7 + 2, v___x_468_);
lean_ctor_set_uint8(v___x_470_, sizeof(void*)*7 + 3, v___x_462_);
return v___x_470_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__21(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_471_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15);
v___x_472_ = lean_unsigned_to_nat(0u);
v___x_473_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_473_, 0, v___x_472_);
lean_ctor_set(v___x_473_, 1, v___x_472_);
lean_ctor_set(v___x_473_, 2, v___x_472_);
lean_ctor_set(v___x_473_, 3, v___x_472_);
lean_ctor_set(v___x_473_, 4, v___x_471_);
lean_ctor_set(v___x_473_, 5, v___x_471_);
lean_ctor_set(v___x_473_, 6, v___x_471_);
lean_ctor_set(v___x_473_, 7, v___x_471_);
lean_ctor_set(v___x_473_, 8, v___x_471_);
lean_ctor_set(v___x_473_, 9, v___x_471_);
lean_ctor_set(v___x_473_, 10, v___x_471_);
return v___x_473_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__22(void){
_start:
{
lean_object* v___x_474_; lean_object* v___x_475_; 
v___x_474_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15);
v___x_475_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_475_, 0, v___x_474_);
lean_ctor_set(v___x_475_, 1, v___x_474_);
lean_ctor_set(v___x_475_, 2, v___x_474_);
lean_ctor_set(v___x_475_, 3, v___x_474_);
lean_ctor_set(v___x_475_, 4, v___x_474_);
lean_ctor_set(v___x_475_, 5, v___x_474_);
return v___x_475_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__23(void){
_start:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15);
v___x_477_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
lean_ctor_set(v___x_477_, 1, v___x_476_);
lean_ctor_set(v___x_477_, 2, v___x_476_);
lean_ctor_set(v___x_477_, 3, v___x_476_);
lean_ctor_set(v___x_477_, 4, v___x_476_);
return v___x_477_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__24(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v___x_478_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__23, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__23_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__23);
v___x_479_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17);
v___x_480_ = lean_box(1);
v___x_481_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__22, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__22_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__22);
v___x_482_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__21, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__21_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__21);
v___x_483_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_483_, 0, v___x_482_);
lean_ctor_set(v___x_483_, 1, v___x_481_);
lean_ctor_set(v___x_483_, 2, v___x_480_);
lean_ctor_set(v___x_483_, 3, v___x_479_);
lean_ctor_set(v___x_483_, 4, v___x_478_);
return v___x_483_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__26(void){
_start:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_485_ = lean_obj_once(&l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2, &l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2_once, _init_l_Lean_LibrarySuggestions_localSymbolFrequencyMap___lam__2___closed__2);
v___x_486_ = lean_box(0);
v___x_487_ = l_Lean_firstFrontendMacroScope;
v___x_488_ = lean_unsigned_to_nat(0u);
v___x_489_ = lean_box(0);
v___x_490_ = lean_box(0);
v___x_491_ = lean_unsigned_to_nat(1000u);
v___x_492_ = l_Lean_Options_empty;
v___x_493_ = l_Lean_instInhabitedFileMap_default;
v___x_494_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__25));
v___x_495_ = lean_alloc_ctor(0, 12, 0);
lean_ctor_set(v___x_495_, 0, v___x_494_);
lean_ctor_set(v___x_495_, 1, v___x_493_);
lean_ctor_set(v___x_495_, 2, v___x_492_);
lean_ctor_set(v___x_495_, 3, v___x_491_);
lean_ctor_set(v___x_495_, 4, v___x_490_);
lean_ctor_set(v___x_495_, 5, v___x_489_);
lean_ctor_set(v___x_495_, 6, v___x_488_);
lean_ctor_set(v___x_495_, 7, v___x_488_);
lean_ctor_set(v___x_495_, 8, v___x_490_);
lean_ctor_set(v___x_495_, 9, v___x_487_);
lean_ctor_set(v___x_495_, 10, v___x_486_);
lean_ctor_set(v___x_495_, 11, v___x_485_);
return v___x_495_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__27(void){
_start:
{
uint8_t v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_496_ = 0;
v___x_497_ = lean_box(0);
v___x_498_ = lean_unsigned_to_nat(0u);
v___x_499_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__26, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__26_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__26);
v___x_500_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_498_);
lean_ctor_set(v___x_500_, 2, v___x_497_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*3, v___x_496_);
lean_ctor_set_uint8(v___x_500_, sizeof(void*)*3 + 1, v___x_496_);
return v___x_500_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__28(void){
_start:
{
lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; 
v___x_501_ = lean_unsigned_to_nat(1u);
v___x_502_ = l_Lean_firstFrontendMacroScope;
v___x_503_ = lean_nat_add(v___x_502_, v___x_501_);
return v___x_503_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__33(void){
_start:
{
lean_object* v___x_514_; uint64_t v___x_515_; lean_object* v___x_516_; 
v___x_514_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17);
v___x_515_ = 0ULL;
v___x_516_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_516_, 0, v___x_514_);
lean_ctor_set_uint64(v___x_516_, sizeof(void*)*1, v___x_515_);
return v___x_516_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__34(void){
_start:
{
lean_object* v___x_517_; lean_object* v___x_518_; 
v___x_517_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15);
v___x_518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_518_, 0, v___x_517_);
lean_ctor_set(v___x_518_, 1, v___x_517_);
return v___x_518_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__35(void){
_start:
{
lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; 
v___x_519_ = l_Lean_NameSet_empty;
v___x_520_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17);
v___x_521_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_521_, 0, v___x_520_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
lean_ctor_set(v___x_521_, 2, v___x_519_);
return v___x_521_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__36(void){
_start:
{
lean_object* v___x_522_; lean_object* v___x_523_; uint8_t v___x_524_; lean_object* v___x_525_; 
v___x_522_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__17);
v___x_523_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__15);
v___x_524_ = 1;
v___x_525_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_525_, 0, v___x_523_);
lean_ctor_set(v___x_525_, 1, v___x_523_);
lean_ctor_set(v___x_525_, 2, v___x_522_);
lean_ctor_set_uint8(v___x_525_, sizeof(void*)*3, v___x_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(lean_object* v_inst_528_, lean_object* v_env_529_, lean_object* v_x_530_){
_start:
{
lean_object* v___x_531_; lean_object* v_toApplicative_532_; lean_object* v_toFunctor_533_; lean_object* v_toSeq_534_; lean_object* v_toSeqLeft_535_; lean_object* v_toSeqRight_536_; lean_object* v___f_537_; lean_object* v___f_538_; lean_object* v___f_539_; lean_object* v___f_540_; lean_object* v___x_541_; lean_object* v___f_542_; lean_object* v___f_543_; lean_object* v___f_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v_toApplicative_548_; lean_object* v___x_550_; uint8_t v_isShared_551_; uint8_t v_isSharedCheck_612_; 
v___x_531_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__1, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__1_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__1);
v_toApplicative_532_ = lean_ctor_get(v___x_531_, 0);
v_toFunctor_533_ = lean_ctor_get(v_toApplicative_532_, 0);
v_toSeq_534_ = lean_ctor_get(v_toApplicative_532_, 2);
v_toSeqLeft_535_ = lean_ctor_get(v_toApplicative_532_, 3);
v_toSeqRight_536_ = lean_ctor_get(v_toApplicative_532_, 4);
v___f_537_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__2));
v___f_538_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_533_, 2);
v___f_539_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_539_, 0, v_toFunctor_533_);
v___f_540_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_540_, 0, v_toFunctor_533_);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v___f_539_);
lean_ctor_set(v___x_541_, 1, v___f_540_);
lean_inc(v_toSeqRight_536_);
v___f_542_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_542_, 0, v_toSeqRight_536_);
lean_inc(v_toSeqLeft_535_);
v___f_543_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_543_, 0, v_toSeqLeft_535_);
lean_inc(v_toSeq_534_);
v___f_544_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_544_, 0, v_toSeq_534_);
v___x_545_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_545_, 0, v___x_541_);
lean_ctor_set(v___x_545_, 1, v___f_537_);
lean_ctor_set(v___x_545_, 2, v___f_544_);
lean_ctor_set(v___x_545_, 3, v___f_543_);
lean_ctor_set(v___x_545_, 4, v___f_542_);
v___x_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
lean_ctor_set(v___x_546_, 1, v___f_538_);
v___x_547_ = l_StateRefT_x27_instMonad___redArg(v___x_546_);
v_toApplicative_548_ = lean_ctor_get(v___x_547_, 0);
v_isSharedCheck_612_ = !lean_is_exclusive(v___x_547_);
if (v_isSharedCheck_612_ == 0)
{
lean_object* v_unused_613_; 
v_unused_613_ = lean_ctor_get(v___x_547_, 1);
lean_dec(v_unused_613_);
v___x_550_ = v___x_547_;
v_isShared_551_ = v_isSharedCheck_612_;
goto v_resetjp_549_;
}
else
{
lean_inc(v_toApplicative_548_);
lean_dec(v___x_547_);
v___x_550_ = lean_box(0);
v_isShared_551_ = v_isSharedCheck_612_;
goto v_resetjp_549_;
}
v_resetjp_549_:
{
lean_object* v_toFunctor_552_; lean_object* v_toSeq_553_; lean_object* v_toSeqLeft_554_; lean_object* v_toSeqRight_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_610_; 
v_toFunctor_552_ = lean_ctor_get(v_toApplicative_548_, 0);
v_toSeq_553_ = lean_ctor_get(v_toApplicative_548_, 2);
v_toSeqLeft_554_ = lean_ctor_get(v_toApplicative_548_, 3);
v_toSeqRight_555_ = lean_ctor_get(v_toApplicative_548_, 4);
v_isSharedCheck_610_ = !lean_is_exclusive(v_toApplicative_548_);
if (v_isSharedCheck_610_ == 0)
{
lean_object* v_unused_611_; 
v_unused_611_ = lean_ctor_get(v_toApplicative_548_, 1);
lean_dec(v_unused_611_);
v___x_557_ = v_toApplicative_548_;
v_isShared_558_ = v_isSharedCheck_610_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_toSeqRight_555_);
lean_inc(v_toSeqLeft_554_);
lean_inc(v_toSeq_553_);
lean_inc(v_toFunctor_552_);
lean_dec(v_toApplicative_548_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_610_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___f_559_; lean_object* v___f_560_; lean_object* v___f_561_; lean_object* v___f_562_; lean_object* v___x_563_; lean_object* v___f_564_; lean_object* v___f_565_; lean_object* v___f_566_; lean_object* v___x_568_; 
v___f_559_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__4));
v___f_560_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__5));
lean_inc_ref(v_toFunctor_552_);
v___f_561_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_561_, 0, v_toFunctor_552_);
v___f_562_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_562_, 0, v_toFunctor_552_);
v___x_563_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_563_, 0, v___f_561_);
lean_ctor_set(v___x_563_, 1, v___f_562_);
v___f_564_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_564_, 0, v_toSeqRight_555_);
v___f_565_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_565_, 0, v_toSeqLeft_554_);
v___f_566_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_566_, 0, v_toSeq_553_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 4, v___f_564_);
lean_ctor_set(v___x_557_, 3, v___f_565_);
lean_ctor_set(v___x_557_, 2, v___f_566_);
lean_ctor_set(v___x_557_, 1, v___f_559_);
lean_ctor_set(v___x_557_, 0, v___x_563_);
v___x_568_ = v___x_557_;
goto v_reusejp_567_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v___x_563_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v___f_559_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v___f_566_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v___f_565_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v___f_564_);
v___x_568_ = v_reuseFailAlloc_609_;
goto v_reusejp_567_;
}
v_reusejp_567_:
{
lean_object* v___x_570_; 
if (v_isShared_551_ == 0)
{
lean_ctor_set(v___x_550_, 1, v___f_560_);
lean_ctor_set(v___x_550_, 0, v___x_568_);
v___x_570_ = v___x_550_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_608_, 1, v___f_560_);
v___x_570_ = v_reuseFailAlloc_608_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; lean_object* v___f_572_; uint8_t v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v___x_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
v___x_571_ = l_Lean_Meta_instMonadEnvMetaM;
v___f_572_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__10));
v___x_573_ = 1;
v___x_574_ = l_Lean_withoutExporting___redArg(v___x_570_, v___x_571_, v___f_572_, v_x_530_, v___x_573_);
v___x_575_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__19));
v___x_576_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__20, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__20_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__20);
v___x_577_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__24, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__24_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__24);
v___x_578_ = lean_alloc_closure((void*)(l_Lean_Meta_MetaM_run_x27___boxed), 7, 4);
lean_closure_set(v___x_578_, 0, lean_box(0));
lean_closure_set(v___x_578_, 1, v___x_574_);
lean_closure_set(v___x_578_, 2, v___x_576_);
lean_closure_set(v___x_578_, 3, v___x_577_);
v___x_579_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__27, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__27_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__27);
v___x_580_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__28, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__28_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__28);
v___x_581_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__31));
v___x_582_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__32));
v___x_583_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__33, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__33_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__33);
v___x_584_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__34, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__34_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__34);
v___x_585_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__35, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__35_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__35);
v___x_586_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__36, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__36_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__36);
v___x_587_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_587_, 0, v_env_529_);
lean_ctor_set(v___x_587_, 1, v___x_580_);
lean_ctor_set(v___x_587_, 2, v___x_581_);
lean_ctor_set(v___x_587_, 3, v___x_582_);
lean_ctor_set(v___x_587_, 4, v___x_583_);
lean_ctor_set(v___x_587_, 5, v___x_584_);
lean_ctor_set(v___x_587_, 6, v___x_585_);
lean_ctor_set(v___x_587_, 7, v___x_586_);
lean_ctor_set(v___x_587_, 8, v___x_575_);
v___x_588_ = lean_alloc_closure((void*)(l_Lean_Core_CoreM_run_x27___boxed), 5, 4);
lean_closure_set(v___x_588_, 0, lean_box(0));
lean_closure_set(v___x_588_, 1, v___x_578_);
lean_closure_set(v___x_588_, 2, v___x_579_);
lean_closure_set(v___x_588_, 3, v___x_587_);
v___x_589_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_589_, 0, lean_box(0));
lean_closure_set(v___x_589_, 1, lean_box(0));
lean_closure_set(v___x_589_, 2, v___x_588_);
v___x_590_ = l_unsafeBaseIO___redArg(v___x_589_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___y_597_; lean_object* v___x_600_; lean_object* v___f_601_; lean_object* v___x_602_; lean_object* v___x_603_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
v___x_592_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__37));
v___x_593_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___closed__38));
v___x_594_ = lean_unsigned_to_nat(75u);
v___x_595_ = lean_unsigned_to_nat(24u);
v___x_600_ = l_Lean_Exception_toMessageData(v_a_591_);
v___f_601_ = lean_alloc_closure((void*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_601_, 0, v___x_600_);
v___x_602_ = lean_alloc_closure((void*)(l_EIO_toBaseIO___boxed), 4, 3);
lean_closure_set(v___x_602_, 0, lean_box(0));
lean_closure_set(v___x_602_, 1, lean_box(0));
lean_closure_set(v___x_602_, 2, v___f_601_);
v___x_603_ = l_unsafeBaseIO___redArg(v___x_602_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v_a_604_; lean_object* v___x_605_; 
v_a_604_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_603_, 1);
v___x_605_ = lean_io_error_to_string(v_a_604_);
v___y_597_ = v___x_605_;
goto v___jp_596_;
}
else
{
lean_object* v_a_606_; 
v_a_606_ = lean_ctor_get(v___x_603_, 0);
lean_inc(v_a_606_);
lean_dec_ref_known(v___x_603_, 1);
v___y_597_ = v_a_606_;
goto v___jp_596_;
}
v___jp_596_:
{
lean_object* v___x_598_; lean_object* v___x_599_; 
v___x_598_ = l_mkPanicMessageWithDecl(v___x_592_, v___x_593_, v___x_594_, v___x_595_, v___y_597_);
lean_dec_ref(v___y_597_);
v___x_599_ = l_panic___redArg(v_inst_528_, v___x_598_);
return v___x_599_;
}
}
else
{
lean_object* v_a_607_; 
v_a_607_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_607_);
lean_dec_ref_known(v___x_590_, 1);
return v_a_607_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg___boxed(lean_object* v_inst_614_, lean_object* v_env_615_, lean_object* v_x_616_){
_start:
{
lean_object* v_res_617_; 
v_res_617_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(v_inst_614_, v_env_615_, v_x_616_);
lean_dec(v_inst_614_);
return v_res_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM(lean_object* v_00_u03b1_618_, lean_object* v_inst_619_, lean_object* v_env_620_, lean_object* v_x_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(v_inst_619_, v_env_620_, v_x_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___boxed(lean_object* v_00_u03b1_623_, lean_object* v_inst_624_, lean_object* v_env_625_, lean_object* v_x_626_){
_start:
{
lean_object* v_res_627_; 
v_res_627_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM(v_00_u03b1_623_, v_inst_624_, v_env_625_, v_x_626_);
lean_dec(v_inst_624_);
return v_res_627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___lam__0(lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_){
_start:
{
lean_object* v___x_633_; 
v___x_633_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap(v___y_628_, v___y_629_, v___y_630_, v___y_631_);
if (lean_obj_tag(v___x_633_) == 0)
{
lean_object* v_a_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_644_; 
v_a_634_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_644_ == 0)
{
v___x_636_ = v___x_633_;
v_isShared_637_ = v_isSharedCheck_644_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_a_634_);
lean_dec(v___x_633_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_644_;
goto v_resetjp_635_;
}
v_resetjp_635_:
{
lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___x_638_ = lean_unsigned_to_nat(1u);
v___x_639_ = lean_mk_empty_array_with_capacity(v___x_638_);
v___x_640_ = lean_array_push(v___x_639_, v_a_634_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_640_);
v___x_642_ = v___x_636_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
v_a_645_ = lean_ctor_get(v___x_633_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_633_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_633_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_633_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___lam__0___boxed(lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___lam__0(v___y_653_, v___y_654_, v___y_655_, v___y_656_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
return v_res_658_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1(void){
_start:
{
lean_object* v___x_660_; 
v___x_660_ = l_Array_instInhabited___redArg();
return v___x_660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3(lean_object* v_env_661_){
_start:
{
lean_object* v___f_662_; lean_object* v___x_663_; lean_object* v_ents_664_; lean_object* v___x_665_; 
v___f_662_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__0));
v___x_663_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1);
v_ents_664_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(v___x_663_, v_env_661_, v___f_662_);
lean_inc_n(v_ents_664_, 2);
v___x_665_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_665_, 0, v_ents_664_);
lean_ctor_set(v___x_665_, 1, v_ents_664_);
lean_ctor_set(v___x_665_, 2, v_ents_664_);
return v___x_665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object* v_x_668_){
_start:
{
lean_object* v___x_669_; 
v___x_669_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0___closed__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_));
return v___x_669_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v_x_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__0_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(v_x_670_);
lean_dec_ref(v_x_670_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object* v_x_675_){
_start:
{
lean_object* v___x_676_; 
v___x_676_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1___closed__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_));
return v___x_676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v_x_677_){
_start:
{
lean_object* v_res_678_; 
v_res_678_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__1_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(v_x_677_);
lean_dec_ref(v_x_677_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_cachedLocalSymbolFrequencyMap(v___y_679_, v___y_680_, v___y_681_, v___y_682_);
if (lean_obj_tag(v___x_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_695_; 
v_a_685_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_695_ == 0)
{
v___x_687_ = v___x_684_;
v_isShared_688_ = v_isSharedCheck_695_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_684_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_695_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_693_; 
v___x_689_ = lean_unsigned_to_nat(1u);
v___x_690_ = lean_mk_empty_array_with_capacity(v___x_689_);
v___x_691_ = lean_array_push(v___x_690_, v_a_685_);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v___x_691_);
v___x_693_ = v___x_687_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v___x_691_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
v_a_696_ = lean_ctor_get(v___x_684_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_684_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_684_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_684_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_){
_start:
{
lean_object* v_res_709_; 
v_res_709_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__2_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(v___y_704_, v___y_705_, v___y_706_, v___y_707_);
lean_dec(v___y_707_);
lean_dec_ref(v___y_706_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
return v_res_709_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object* v___f_710_, lean_object* v_env_711_, lean_object* v_x_712_){
_start:
{
lean_object* v___x_713_; lean_object* v_ents_714_; lean_object* v___x_715_; 
v___x_713_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1);
v_ents_714_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_Environment_unsafeRunMetaM___redArg(v___x_713_, v_env_711_, v___f_710_);
lean_inc_n(v_ents_714_, 2);
v___x_715_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_715_, 0, v_ents_714_);
lean_ctor_set(v___x_715_, 1, v_ents_714_);
lean_ctor_set(v___x_715_, 2, v_ents_714_);
return v___x_715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v___f_716_, lean_object* v_env_717_, lean_object* v_x_718_){
_start:
{
lean_object* v_res_719_; 
v_res_719_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__3_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(v___f_716_, v_env_717_, v_x_718_);
lean_dec_ref(v_x_718_);
return v_res_719_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object* v_a_720_, uint8_t v_a_721_){
_start:
{
lean_internal_panic_unreachable();
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
uint8_t v_a_211__boxed_724_; lean_object* v_res_725_; 
v_a_211__boxed_724_ = lean_unbox(v_a_723_);
v_res_725_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__4_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(v_a_722_, v_a_211__boxed_724_);
lean_dec_ref(v_a_722_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object* v_mapss_726_, lean_object* v_x_727_){
_start:
{
lean_object* v___x_729_; 
v___x_729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_729_, 0, v_mapss_726_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v_mapss_730_, lean_object* v_x_731_, lean_object* v___y_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__5_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(v_mapss_730_, v_x_731_);
lean_dec_ref(v_x_731_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(lean_object* v___x_734_){
_start:
{
lean_object* v___x_736_; 
v___x_736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_736_, 0, v___x_734_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v___x_737_, lean_object* v___y_738_){
_start:
{
lean_object* v_res_739_; 
v_res_739_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___lam__6_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(v___x_737_);
return v_res_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_766_ = ((lean_object*)(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn___closed__10_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_));
v___x_767_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_766_);
return v___x_767_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2____boxed(lean_object* v_a_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_();
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_2997076389____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v___x_771_ = lean_box(0);
v___x_772_ = lean_st_mk_ref(v___x_771_);
v___x_773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_773_, 0, v___x_772_);
return v___x_773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_2997076389____hygCtx___hyg_2____boxed(lean_object* v_a_774_){
_start:
{
lean_object* v_res_775_; 
v_res_775_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_2997076389____hygCtx___hyg_2_();
return v_res_775_;
}
}
static lean_object* _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instZeroNameMapNat(void){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = lean_box(1);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__0(lean_object* v_x_x27_777_, lean_object* v_n_778_, lean_object* v_c_779_){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; 
v___x_780_ = lean_unsigned_to_nat(0u);
v___x_781_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_x_x27_777_, v_n_778_, v___x_780_);
v___x_782_ = lean_nat_add(v___x_781_, v_c_779_);
lean_dec(v___x_781_);
v___x_783_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_778_, v___x_782_, v_x_x27_777_);
return v___x_783_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__0___boxed(lean_object* v_x_x27_784_, lean_object* v_n_785_, lean_object* v_c_786_){
_start:
{
lean_object* v_res_787_; 
v_res_787_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__0(v_x_x27_784_, v_n_785_, v_c_786_);
lean_dec(v_c_786_);
return v_res_787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instAddNameMapNat___lam__1(lean_object* v___f_788_, lean_object* v_x_789_, lean_object* v_y_790_){
_start:
{
lean_object* v___x_791_; 
v___x_791_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_788_, v_x_789_, v_y_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___lam__0(lean_object* v_x_x27_796_, lean_object* v_n_797_, lean_object* v_c_798_){
_start:
{
lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_799_ = lean_unsigned_to_nat(0u);
v___x_800_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_x_x27_796_, v_n_797_, v___x_799_);
v___x_801_ = lean_nat_add(v___x_800_, v_c_798_);
lean_dec(v___x_800_);
v___x_802_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_n_797_, v___x_801_, v_x_x27_796_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___lam__0___boxed(lean_object* v_x_x27_803_, lean_object* v_n_804_, lean_object* v_c_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___lam__0(v_x_x27_803_, v_n_804_, v_c_805_);
lean_dec(v_c_805_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0(lean_object* v_as_808_, size_t v_i_809_, size_t v_stop_810_, lean_object* v_b_811_){
_start:
{
uint8_t v___x_812_; 
v___x_812_ = lean_usize_dec_eq(v_i_809_, v_stop_810_);
if (v___x_812_ == 0)
{
lean_object* v___f_813_; lean_object* v___x_814_; lean_object* v___x_815_; size_t v___x_816_; size_t v___x_817_; 
v___f_813_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___closed__0));
v___x_814_ = lean_array_uget_borrowed(v_as_808_, v_i_809_);
lean_inc(v___x_814_);
v___x_815_ = l_Std_DTreeMap_Internal_Impl_foldlM___at___00Std_DTreeMap_Internal_Impl_foldl___at___00Lean_NameMap_foldl_spec__0_spec__0___redArg(v___f_813_, v_b_811_, v___x_814_);
v___x_816_ = ((size_t)1ULL);
v___x_817_ = lean_usize_add(v_i_809_, v___x_816_);
v_i_809_ = v___x_817_;
v_b_811_ = v___x_815_;
goto _start;
}
else
{
return v_b_811_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0___boxed(lean_object* v_as_819_, lean_object* v_i_820_, lean_object* v_stop_821_, lean_object* v_b_822_){
_start:
{
size_t v_i_boxed_823_; size_t v_stop_boxed_824_; lean_object* v_res_825_; 
v_i_boxed_823_ = lean_unbox_usize(v_i_820_);
lean_dec(v_i_820_);
v_stop_boxed_824_ = lean_unbox_usize(v_stop_821_);
lean_dec(v_stop_821_);
v_res_825_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0(v_as_819_, v_i_boxed_823_, v_stop_boxed_824_, v_b_822_);
lean_dec_ref(v_as_819_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__1(lean_object* v_as_826_, size_t v_i_827_, size_t v_stop_828_, lean_object* v_b_829_){
_start:
{
lean_object* v___y_831_; uint8_t v___x_835_; 
v___x_835_ = lean_usize_dec_eq(v_i_827_, v_stop_828_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_836_ = lean_array_uget_borrowed(v_as_826_, v_i_827_);
v___x_837_ = lean_unsigned_to_nat(0u);
v___x_838_ = lean_array_get_size(v___x_836_);
v___x_839_ = lean_nat_dec_lt(v___x_837_, v___x_838_);
if (v___x_839_ == 0)
{
v___y_831_ = v_b_829_;
goto v___jp_830_;
}
else
{
uint8_t v___x_840_; 
v___x_840_ = lean_nat_dec_le(v___x_838_, v___x_838_);
if (v___x_840_ == 0)
{
if (v___x_839_ == 0)
{
v___y_831_ = v_b_829_;
goto v___jp_830_;
}
else
{
size_t v___x_841_; size_t v___x_842_; lean_object* v___x_843_; 
v___x_841_ = ((size_t)0ULL);
v___x_842_ = lean_usize_of_nat(v___x_838_);
v___x_843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0(v___x_836_, v___x_841_, v___x_842_, v_b_829_);
v___y_831_ = v___x_843_;
goto v___jp_830_;
}
}
else
{
size_t v___x_844_; size_t v___x_845_; lean_object* v___x_846_; 
v___x_844_ = ((size_t)0ULL);
v___x_845_ = lean_usize_of_nat(v___x_838_);
v___x_846_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__0(v___x_836_, v___x_844_, v___x_845_, v_b_829_);
v___y_831_ = v___x_846_;
goto v___jp_830_;
}
}
}
else
{
return v_b_829_;
}
v___jp_830_:
{
size_t v___x_832_; size_t v___x_833_; 
v___x_832_ = ((size_t)1ULL);
v___x_833_ = lean_usize_add(v_i_827_, v___x_832_);
v_i_827_ = v___x_833_;
v_b_829_ = v___y_831_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__1___boxed(lean_object* v_as_847_, lean_object* v_i_848_, lean_object* v_stop_849_, lean_object* v_b_850_){
_start:
{
size_t v_i_boxed_851_; size_t v_stop_boxed_852_; lean_object* v_res_853_; 
v_i_boxed_851_ = lean_unbox_usize(v_i_848_);
lean_dec(v_i_848_);
v_stop_boxed_852_ = lean_unbox_usize(v_stop_849_);
lean_dec(v_stop_849_);
v_res_853_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__1(v_as_847_, v_i_boxed_851_, v_stop_boxed_852_, v_b_850_);
lean_dec_ref(v_as_847_);
return v_res_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg(lean_object* v_a_854_){
_start:
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_856_ = lean_obj_once(&l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1, &l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1_once, _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt_unsafe__3___closed__1);
v___x_857_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyMapRef;
v___x_858_ = lean_st_ref_get(v___x_857_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v___x_859_; lean_object* v___y_861_; lean_object* v_env_865_; lean_object* v___x_866_; lean_object* v_toEnvExtension_867_; lean_object* v_asyncMode_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; uint8_t v___x_874_; 
v___x_859_ = lean_st_ref_get(v_a_854_);
v_env_865_ = lean_ctor_get(v___x_859_, 0);
lean_inc_ref(v_env_865_);
lean_dec(v___x_859_);
v___x_866_ = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt;
v_toEnvExtension_867_ = lean_ctor_get(v___x_866_, 0);
v_asyncMode_868_ = lean_ctor_get(v_toEnvExtension_867_, 2);
v___x_869_ = lean_box(0);
v___x_870_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_856_, v___x_866_, v_env_865_, v_asyncMode_868_, v___x_869_);
v___x_871_ = lean_box(1);
v___x_872_ = lean_unsigned_to_nat(0u);
v___x_873_ = lean_array_get_size(v___x_870_);
v___x_874_ = lean_nat_dec_lt(v___x_872_, v___x_873_);
if (v___x_874_ == 0)
{
lean_dec(v___x_870_);
v___y_861_ = v___x_871_;
goto v___jp_860_;
}
else
{
uint8_t v___x_875_; 
v___x_875_ = lean_nat_dec_le(v___x_873_, v___x_873_);
if (v___x_875_ == 0)
{
if (v___x_874_ == 0)
{
lean_dec(v___x_870_);
v___y_861_ = v___x_871_;
goto v___jp_860_;
}
else
{
size_t v___x_876_; size_t v___x_877_; lean_object* v___x_878_; 
v___x_876_ = ((size_t)0ULL);
v___x_877_ = lean_usize_of_nat(v___x_873_);
v___x_878_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__1(v___x_870_, v___x_876_, v___x_877_, v___x_871_);
lean_dec(v___x_870_);
v___y_861_ = v___x_878_;
goto v___jp_860_;
}
}
else
{
size_t v___x_879_; size_t v___x_880_; lean_object* v___x_881_; 
v___x_879_ = ((size_t)0ULL);
v___x_880_ = lean_usize_of_nat(v___x_873_);
v___x_881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_LibrarySuggestions_symbolFrequencyMap_spec__1(v___x_870_, v___x_879_, v___x_880_, v___x_871_);
lean_dec(v___x_870_);
v___y_861_ = v___x_881_;
goto v___jp_860_;
}
}
v___jp_860_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
lean_inc(v___y_861_);
v___x_862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_862_, 0, v___y_861_);
v___x_863_ = lean_st_ref_swap(v___x_857_, v___x_862_);
lean_dec(v___x_863_);
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v___y_861_);
return v___x_864_;
}
}
else
{
lean_object* v_val_882_; lean_object* v___x_884_; uint8_t v_isShared_885_; uint8_t v_isSharedCheck_889_; 
v_val_882_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_889_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_889_ == 0)
{
v___x_884_ = v___x_858_;
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
else
{
lean_inc(v_val_882_);
lean_dec(v___x_858_);
v___x_884_ = lean_box(0);
v_isShared_885_ = v_isSharedCheck_889_;
goto v_resetjp_883_;
}
v_resetjp_883_:
{
lean_object* v___x_887_; 
if (v_isShared_885_ == 0)
{
lean_ctor_set_tag(v___x_884_, 0);
v___x_887_ = v___x_884_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_val_882_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
return v___x_887_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg___boxed(lean_object* v_a_890_, lean_object* v_a_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg(v_a_890_);
lean_dec(v_a_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap(lean_object* v_a_893_, lean_object* v_a_894_){
_start:
{
lean_object* v___x_896_; 
v___x_896_ = l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg(v_a_894_);
return v___x_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequencyMap___boxed(lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_){
_start:
{
lean_object* v_res_900_; 
v_res_900_ = l_Lean_LibrarySuggestions_symbolFrequencyMap(v_a_897_, v_a_898_);
lean_dec(v_a_898_);
lean_dec_ref(v_a_897_);
return v_res_900_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency___redArg(lean_object* v_n_901_, lean_object* v_a_902_){
_start:
{
lean_object* v___x_904_; lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_914_; 
v___x_904_ = l_Lean_LibrarySuggestions_symbolFrequencyMap___redArg(v_a_902_);
v_a_905_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_914_ == 0)
{
v___x_907_ = v___x_904_;
v_isShared_908_ = v_isSharedCheck_914_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_904_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_914_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_909_ = lean_unsigned_to_nat(0u);
v___x_910_ = l_Std_DTreeMap_Internal_Impl_Const_getD___at___00Lean_NameMap_getD_spec__0___redArg(v_a_905_, v_n_901_, v___x_909_);
lean_dec(v_a_905_);
if (v_isShared_908_ == 0)
{
lean_ctor_set(v___x_907_, 0, v___x_910_);
v___x_912_ = v___x_907_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_910_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency___redArg___boxed(lean_object* v_n_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
lean_object* v_res_918_; 
v_res_918_ = l_Lean_LibrarySuggestions_symbolFrequency___redArg(v_n_915_, v_a_916_);
lean_dec(v_a_916_);
lean_dec(v_n_915_);
return v_res_918_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency(lean_object* v_n_919_, lean_object* v_a_920_, lean_object* v_a_921_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l_Lean_LibrarySuggestions_symbolFrequency___redArg(v_n_919_, v_a_921_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_LibrarySuggestions_symbolFrequency___boxed(lean_object* v_n_924_, lean_object* v_a_925_, lean_object* v_a_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Lean_LibrarySuggestions_symbolFrequency(v_n_924_, v_a_925_, v_a_926_);
lean_dec(v_a_926_);
lean_dec_ref(v_a_925_);
lean_dec(v_n_924_);
return v_res_928_;
}
}
lean_object* runtime_initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_LibrarySuggestions_SymbolFrequency(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_224017424____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_localSymbolFrequencyMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_localSymbolFrequencyMapRef);
lean_dec_ref(res);
res = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_3575993952____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyExt);
lean_dec_ref(res);
res = l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_initFn_00___x40_Lean_LibrarySuggestions_SymbolFrequency_2997076389____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyMapRef = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_symbolFrequencyMapRef);
lean_dec_ref(res);
l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instZeroNameMapNat = _init_l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instZeroNameMapNat();
lean_mark_persistent(l___private_Lean_LibrarySuggestions_SymbolFrequency_0__Lean_LibrarySuggestions_instZeroNameMapNat);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_LibrarySuggestions_SymbolFrequency(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Basic(uint8_t builtin);
lean_object* initialize_Lean_LibrarySuggestions_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_LibrarySuggestions_SymbolFrequency(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_LibrarySuggestions_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_LibrarySuggestions_SymbolFrequency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_LibrarySuggestions_SymbolFrequency(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_LibrarySuggestions_SymbolFrequency(builtin);
}
#ifdef __cplusplus
}
#endif
