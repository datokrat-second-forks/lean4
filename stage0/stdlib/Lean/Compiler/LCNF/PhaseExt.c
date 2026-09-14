// Lean compiler output
// Module: Lean.Compiler.LCNF.PhaseExt
// Imports: public import Lean.Compiler.LCNF.PassManager public import Lean.Compiler.LCNF.PublicDeclsExt
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
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Compiler_LCNF_instInhabitedSignature_default___redArg();
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
uint8_t l_Lean_Compiler_LCNF_Phase_toPurity(uint8_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Compiler_LCNF_isDeclPublic(lean_object*, lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
lean_object* l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedDecl_default___redArg();
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPhase___redArg(lean_object*);
lean_object* l_Lean_registerEnvExtension___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_EnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_size(lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(uint8_t);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt___boxed(lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_isDeclTransparent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_isDeclTransparent___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_isDeclTransparent___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isDeclTransparent(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isDeclTransparent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0_value;
static const lean_array_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__1_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0;
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedDeclExt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___boxed(lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4_value;
static const lean_array_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16_value;
static const lean_string_object l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___auto__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkDeclExt___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__2___boxed(lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_mkDeclExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkDeclExt___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkDeclExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkDeclExt___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkDeclExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkDeclExt___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__3;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkDeclExt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkDeclExt___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0(lean_object*, uint8_t, uint8_t, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "baseExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(145, 223, 165, 126, 7, 177, 183, 38)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_baseExt;
static const lean_string_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "monoExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(161, 71, 195, 20, 53, 75, 103, 187)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_monoExt;
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed, .m_arity = 6, .m_num_fixed = 2, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_impureExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg();
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedSigExt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt(uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0;
static const lean_closure_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__2_value)} };
static const lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5;
static lean_once_cell_t l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "impureSigExt"};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(68, 195, 72, 11, 109, 136, 143, 118)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(229, 76, 245, 57, 5, 8, 44, 184)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(245, 150, 154, 56, 193, 204, 147, 237)}};
static const lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_impureSigExt;
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveBaseDeclCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveMonoDeclCore(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_save___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_save___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__1;
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_save___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_save___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Decl_save___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Decl_save___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_save___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "Internal compiler error: getDecl\? on impure is unsupported for now"};
static const lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_declOrderExt;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl(lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6_value;
static lean_once_cell_t l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__5(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.PhaseExt"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "Lean.Compiler.LCNF.getImpureDeclIndices"};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "assertion violation: i != 0\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1;
static const lean_string_object l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "assertion violation: map.size == targets.size\n  "};
static const lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2____boxed(lean_object* v___y_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_();
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2____boxed(lean_object* v___y_7_){
_start:
{
lean_object* v_res_8_; 
v_res_8_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_();
return v_res_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_10_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2____boxed(lean_object* v___y_11_){
_start:
{
lean_object* v_res_12_; 
v_res_12_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_();
return v_res_12_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(uint8_t v_x_13_){
_start:
{
switch(v_x_13_)
{
case 0:
{
lean_object* v___x_14_; 
v___x_14_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt;
return v___x_14_;
}
case 1:
{
lean_object* v___x_15_; 
v___x_15_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt;
return v___x_15_;
}
default: 
{
lean_object* v___x_16_; 
v___x_16_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt;
return v___x_16_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt___boxed(lean_object* v_x_17_){
_start:
{
uint8_t v_x_25__boxed_18_; lean_object* v_res_19_; 
v_x_25__boxed_18_ = lean_unbox(v_x_17_);
v_res_19_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(v_x_25__boxed_18_);
return v_res_19_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_isDeclTransparent(lean_object* v_env_23_, uint8_t v_phase_24_, lean_object* v_declName_25_){
_start:
{
lean_object* v___x_26_; uint8_t v_isModule_27_; 
v___x_26_ = l_Lean_Environment_header(v_env_23_);
v_isModule_27_ = lean_ctor_get_uint8(v___x_26_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_26_);
if (v_isModule_27_ == 0)
{
uint8_t v___x_28_; 
lean_dec_ref(v_env_23_);
v___x_28_ = 1;
return v___x_28_;
}
else
{
lean_object* v___x_29_; lean_object* v_asyncMode_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v_snd_34_; uint8_t v___x_35_; 
v___x_29_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(v_phase_24_);
v_asyncMode_30_ = lean_ctor_get(v___x_29_, 2);
lean_inc(v_asyncMode_30_);
v___x_31_ = ((lean_object*)(l_Lean_Compiler_LCNF_isDeclTransparent___closed__0));
v___x_32_ = lean_box(0);
v___x_33_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_31_, v___x_29_, v_env_23_, v_asyncMode_30_, v___x_32_);
lean_dec(v_asyncMode_30_);
lean_dec_ref(v___x_29_);
v_snd_34_ = lean_ctor_get(v___x_33_, 1);
lean_inc(v_snd_34_);
lean_dec(v___x_33_);
v___x_35_ = l_Lean_NameSet_contains(v_snd_34_, v_declName_25_);
lean_dec(v_snd_34_);
return v___x_35_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_isDeclTransparent___boxed(lean_object* v_env_36_, lean_object* v_phase_37_, lean_object* v_declName_38_){
_start:
{
uint8_t v_phase_boxed_39_; uint8_t v_res_40_; lean_object* v_r_41_; 
v_phase_boxed_39_ = lean_unbox(v_phase_37_);
v_res_40_ = l_Lean_Compiler_LCNF_isDeclTransparent(v_env_36_, v_phase_boxed_39_, v_declName_38_);
lean_dec(v_declName_38_);
v_r_41_ = lean_box(v_res_40_);
return v_r_41_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___lam__0(lean_object* v_declName_42_, lean_object* v_s_43_){
_start:
{
lean_object* v_fst_44_; lean_object* v_snd_45_; lean_object* v___x_47_; uint8_t v_isShared_48_; uint8_t v_isSharedCheck_54_; 
v_fst_44_ = lean_ctor_get(v_s_43_, 0);
v_snd_45_ = lean_ctor_get(v_s_43_, 1);
v_isSharedCheck_54_ = !lean_is_exclusive(v_s_43_);
if (v_isSharedCheck_54_ == 0)
{
v___x_47_ = v_s_43_;
v_isShared_48_ = v_isSharedCheck_54_;
goto v_resetjp_46_;
}
else
{
lean_inc(v_snd_45_);
lean_inc(v_fst_44_);
lean_dec(v_s_43_);
v___x_47_ = lean_box(0);
v_isShared_48_ = v_isSharedCheck_54_;
goto v_resetjp_46_;
}
v_resetjp_46_:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_52_; 
lean_inc(v_declName_42_);
v___x_49_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_49_, 0, v_declName_42_);
lean_ctor_set(v___x_49_, 1, v_fst_44_);
v___x_50_ = l_Lean_NameSet_insert(v_snd_45_, v_declName_42_);
if (v_isShared_48_ == 0)
{
lean_ctor_set(v___x_47_, 1, v___x_50_);
lean_ctor_set(v___x_47_, 0, v___x_49_);
v___x_52_ = v___x_47_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_49_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v___x_50_);
v___x_52_ = v_reuseFailAlloc_53_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
return v___x_52_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent(lean_object* v_env_55_, uint8_t v_phase_56_, lean_object* v_declName_57_){
_start:
{
uint8_t v___x_58_; 
lean_inc_ref(v_env_55_);
v___x_58_ = l_Lean_Compiler_LCNF_isDeclTransparent(v_env_55_, v_phase_56_, v_declName_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v_asyncMode_60_; lean_object* v___f_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_59_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_getTransparencyExt(v_phase_56_);
v_asyncMode_60_ = lean_ctor_get(v___x_59_, 2);
lean_inc(v_asyncMode_60_);
v___f_61_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_setDeclTransparent___lam__0), 2, 1);
lean_closure_set(v___f_61_, 0, v_declName_57_);
v___x_62_ = lean_box(0);
v___x_63_ = l_Lean_EnvExtension_modifyState___redArg(v___x_59_, v_env_55_, v___f_61_, v_asyncMode_60_, v___x_62_);
lean_dec(v_asyncMode_60_);
return v___x_63_;
}
else
{
lean_dec(v_declName_57_);
return v_env_55_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_setDeclTransparent___boxed(lean_object* v_env_64_, lean_object* v_phase_65_, lean_object* v_declName_66_){
_start:
{
uint8_t v_phase_boxed_67_; lean_object* v_res_68_; 
v_phase_boxed_67_ = lean_unbox(v_phase_65_);
v_res_68_ = l_Lean_Compiler_LCNF_setDeclTransparent(v_env_64_, v_phase_boxed_67_, v_declName_66_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0(lean_object* v_ps_69_, lean_object* v_x_70_, lean_object* v_v_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = lean_array_push(v_ps_69_, v_v_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0___boxed(lean_object* v_ps_73_, lean_object* v_x_74_, lean_object* v_v_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___lam__0(v_ps_73_, v_x_74_, v_v_75_);
lean_dec(v_x_74_);
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_77_, lean_object* v_keys_78_, lean_object* v_vals_79_, lean_object* v_i_80_, lean_object* v_acc_81_){
_start:
{
lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_82_ = lean_array_get_size(v_keys_78_);
v___x_83_ = lean_nat_dec_lt(v_i_80_, v___x_82_);
if (v___x_83_ == 0)
{
lean_dec(v_i_80_);
lean_dec(v_f_77_);
return v_acc_81_;
}
else
{
lean_object* v_k_84_; lean_object* v_v_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; 
v_k_84_ = lean_array_fget_borrowed(v_keys_78_, v_i_80_);
v_v_85_ = lean_array_fget_borrowed(v_vals_79_, v_i_80_);
lean_inc(v_f_77_);
lean_inc(v_v_85_);
lean_inc(v_k_84_);
v___x_86_ = lean_apply_3(v_f_77_, v_acc_81_, v_k_84_, v_v_85_);
v___x_87_ = lean_unsigned_to_nat(1u);
v___x_88_ = lean_nat_add(v_i_80_, v___x_87_);
lean_dec(v_i_80_);
v_i_80_ = v___x_88_;
v_acc_81_ = v___x_86_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_90_, lean_object* v_keys_91_, lean_object* v_vals_92_, lean_object* v_i_93_, lean_object* v_acc_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(v_f_90_, v_keys_91_, v_vals_92_, v_i_93_, v_acc_94_);
lean_dec_ref(v_vals_92_);
lean_dec_ref(v_keys_91_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_f_96_, lean_object* v_as_97_, size_t v_i_98_, size_t v_stop_99_, lean_object* v_b_100_){
_start:
{
lean_object* v___y_102_; uint8_t v___x_106_; 
v___x_106_ = lean_usize_dec_eq(v_i_98_, v_stop_99_);
if (v___x_106_ == 0)
{
lean_object* v___x_107_; 
v___x_107_ = lean_array_uget_borrowed(v_as_97_, v_i_98_);
switch(lean_obj_tag(v___x_107_))
{
case 0:
{
lean_object* v_key_108_; lean_object* v_val_109_; lean_object* v___x_110_; 
v_key_108_ = lean_ctor_get(v___x_107_, 0);
v_val_109_ = lean_ctor_get(v___x_107_, 1);
lean_inc(v_f_96_);
lean_inc(v_val_109_);
lean_inc(v_key_108_);
v___x_110_ = lean_apply_3(v_f_96_, v_b_100_, v_key_108_, v_val_109_);
v___y_102_ = v___x_110_;
goto v___jp_101_;
}
case 1:
{
lean_object* v_node_111_; lean_object* v___x_112_; 
v_node_111_ = lean_ctor_get(v___x_107_, 0);
lean_inc(v_f_96_);
v___x_112_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_96_, v_node_111_, v_b_100_);
v___y_102_ = v___x_112_;
goto v___jp_101_;
}
default: 
{
v___y_102_ = v_b_100_;
goto v___jp_101_;
}
}
}
else
{
lean_dec(v_f_96_);
return v_b_100_;
}
v___jp_101_:
{
size_t v___x_103_; size_t v___x_104_; 
v___x_103_ = ((size_t)1ULL);
v___x_104_ = lean_usize_add(v_i_98_, v___x_103_);
v_i_98_ = v___x_104_;
v_b_100_ = v___y_102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(lean_object* v_f_113_, lean_object* v_x_114_, lean_object* v_x_115_){
_start:
{
if (lean_obj_tag(v_x_114_) == 0)
{
lean_object* v_es_116_; lean_object* v___x_117_; lean_object* v___x_118_; uint8_t v___x_119_; 
v_es_116_ = lean_ctor_get(v_x_114_, 0);
v___x_117_ = lean_unsigned_to_nat(0u);
v___x_118_ = lean_array_get_size(v_es_116_);
v___x_119_ = lean_nat_dec_lt(v___x_117_, v___x_118_);
if (v___x_119_ == 0)
{
lean_dec(v_f_113_);
return v_x_115_;
}
else
{
size_t v___x_120_; size_t v___x_121_; lean_object* v___x_122_; 
v___x_120_ = ((size_t)0ULL);
v___x_121_ = lean_usize_of_nat(v___x_118_);
v___x_122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(v_f_113_, v_es_116_, v___x_120_, v___x_121_, v_x_115_);
return v___x_122_;
}
}
else
{
lean_object* v_ks_123_; lean_object* v_vs_124_; lean_object* v___x_125_; lean_object* v___x_126_; 
v_ks_123_ = lean_ctor_get(v_x_114_, 0);
v_vs_124_ = lean_ctor_get(v_x_114_, 1);
v___x_125_ = lean_unsigned_to_nat(0u);
v___x_126_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(v_f_113_, v_ks_123_, v_vs_124_, v___x_125_, v_x_115_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_127_, lean_object* v_x_128_, lean_object* v_x_129_){
_start:
{
lean_object* v_res_130_; 
v_res_130_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_127_, v_x_128_, v_x_129_);
lean_dec_ref(v_x_128_);
return v_res_130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_f_131_, lean_object* v_as_132_, lean_object* v_i_133_, lean_object* v_stop_134_, lean_object* v_b_135_){
_start:
{
size_t v_i_boxed_136_; size_t v_stop_boxed_137_; lean_object* v_res_138_; 
v_i_boxed_136_ = lean_unbox_usize(v_i_133_);
lean_dec(v_i_133_);
v_stop_boxed_137_ = lean_unbox_usize(v_stop_134_);
lean_dec(v_stop_134_);
v_res_138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(v_f_131_, v_as_132_, v_i_boxed_136_, v_stop_boxed_137_, v_b_135_);
lean_dec_ref(v_as_132_);
return v_res_138_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___lam__0(lean_object* v_f_139_, lean_object* v_x1_140_, lean_object* v_x2_141_, lean_object* v_x3_142_){
_start:
{
lean_object* v___x_143_; 
v___x_143_ = lean_apply_3(v_f_139_, v_x1_140_, v_x2_141_, v_x3_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(lean_object* v_map_144_, lean_object* v_f_145_, lean_object* v_init_146_){
_start:
{
lean_object* v___f_147_; lean_object* v___x_148_; 
v___f_147_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_147_, 0, v_f_145_);
v___x_148_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v___f_147_, v_map_144_, v_init_146_);
return v___x_148_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg___boxed(lean_object* v_map_149_, lean_object* v_f_150_, lean_object* v_init_151_){
_start:
{
lean_object* v_res_152_; 
v_res_152_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_map_149_, v_f_150_, v_init_151_);
lean_dec_ref(v_map_149_);
return v_res_152_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___redArg(lean_object* v_lt_153_, lean_object* v_hi_154_, lean_object* v_pivot_155_, lean_object* v_as_156_, lean_object* v_i_157_, lean_object* v_k_158_){
_start:
{
uint8_t v___x_159_; 
v___x_159_ = lean_nat_dec_lt(v_k_158_, v_hi_154_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec(v_k_158_);
lean_dec(v_pivot_155_);
lean_dec_ref(v_lt_153_);
v___x_160_ = lean_array_fswap(v_as_156_, v_i_157_, v_hi_154_);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v_i_157_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
return v___x_161_;
}
else
{
lean_object* v___x_162_; lean_object* v___x_163_; uint8_t v___x_164_; 
v___x_162_ = lean_array_fget_borrowed(v_as_156_, v_k_158_);
lean_inc_ref(v_lt_153_);
lean_inc(v_pivot_155_);
lean_inc(v___x_162_);
v___x_163_ = lean_apply_2(v_lt_153_, v___x_162_, v_pivot_155_);
v___x_164_ = lean_unbox(v___x_163_);
if (v___x_164_ == 0)
{
lean_object* v___x_165_; lean_object* v___x_166_; 
v___x_165_ = lean_unsigned_to_nat(1u);
v___x_166_ = lean_nat_add(v_k_158_, v___x_165_);
lean_dec(v_k_158_);
v_k_158_ = v___x_166_;
goto _start;
}
else
{
lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_168_ = lean_array_fswap(v_as_156_, v_i_157_, v_k_158_);
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = lean_nat_add(v_i_157_, v___x_169_);
lean_dec(v_i_157_);
v___x_171_ = lean_nat_add(v_k_158_, v___x_169_);
lean_dec(v_k_158_);
v_as_156_ = v___x_168_;
v_i_157_ = v___x_170_;
v_k_158_ = v___x_171_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___redArg___boxed(lean_object* v_lt_173_, lean_object* v_hi_174_, lean_object* v_pivot_175_, lean_object* v_as_176_, lean_object* v_i_177_, lean_object* v_k_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___redArg(v_lt_173_, v_hi_174_, v_pivot_175_, v_as_176_, v_i_177_, v_k_178_);
lean_dec(v_hi_174_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(lean_object* v_lt_180_, lean_object* v_n_181_, lean_object* v_as_182_, lean_object* v_lo_183_, lean_object* v_hi_184_){
_start:
{
lean_object* v___y_186_; uint8_t v___x_196_; 
v___x_196_ = lean_nat_dec_lt(v_lo_183_, v_hi_184_);
if (v___x_196_ == 0)
{
lean_dec(v_lo_183_);
lean_dec_ref(v_lt_180_);
return v_as_182_;
}
else
{
lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v_mid_199_; lean_object* v___y_201_; lean_object* v___y_208_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; uint8_t v___x_217_; 
v___x_197_ = lean_nat_add(v_lo_183_, v_hi_184_);
v___x_198_ = lean_unsigned_to_nat(1u);
v_mid_199_ = lean_nat_shiftr(v___x_197_, v___x_198_);
lean_dec(v___x_197_);
v___x_214_ = lean_array_fget_borrowed(v_as_182_, v_mid_199_);
v___x_215_ = lean_array_fget_borrowed(v_as_182_, v_lo_183_);
lean_inc_ref(v_lt_180_);
lean_inc(v___x_215_);
lean_inc(v___x_214_);
v___x_216_ = lean_apply_2(v_lt_180_, v___x_214_, v___x_215_);
v___x_217_ = lean_unbox(v___x_216_);
if (v___x_217_ == 0)
{
v___y_208_ = v_as_182_;
goto v___jp_207_;
}
else
{
lean_object* v___x_218_; 
v___x_218_ = lean_array_fswap(v_as_182_, v_lo_183_, v_mid_199_);
v___y_208_ = v___x_218_;
goto v___jp_207_;
}
v___jp_200_:
{
lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; uint8_t v___x_205_; 
v___x_202_ = lean_array_fget_borrowed(v___y_201_, v_mid_199_);
v___x_203_ = lean_array_fget_borrowed(v___y_201_, v_hi_184_);
lean_inc_ref(v_lt_180_);
lean_inc(v___x_203_);
lean_inc(v___x_202_);
v___x_204_ = lean_apply_2(v_lt_180_, v___x_202_, v___x_203_);
v___x_205_ = lean_unbox(v___x_204_);
if (v___x_205_ == 0)
{
lean_dec(v_mid_199_);
v___y_186_ = v___y_201_;
goto v___jp_185_;
}
else
{
lean_object* v___x_206_; 
v___x_206_ = lean_array_fswap(v___y_201_, v_mid_199_, v_hi_184_);
lean_dec(v_mid_199_);
v___y_186_ = v___x_206_;
goto v___jp_185_;
}
}
v___jp_207_:
{
lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; uint8_t v___x_212_; 
v___x_209_ = lean_array_fget_borrowed(v___y_208_, v_hi_184_);
v___x_210_ = lean_array_fget_borrowed(v___y_208_, v_lo_183_);
lean_inc_ref(v_lt_180_);
lean_inc(v___x_210_);
lean_inc(v___x_209_);
v___x_211_ = lean_apply_2(v_lt_180_, v___x_209_, v___x_210_);
v___x_212_ = lean_unbox(v___x_211_);
if (v___x_212_ == 0)
{
v___y_201_ = v___y_208_;
goto v___jp_200_;
}
else
{
lean_object* v___x_213_; 
v___x_213_ = lean_array_fswap(v___y_208_, v_lo_183_, v_hi_184_);
v___y_201_ = v___x_213_;
goto v___jp_200_;
}
}
}
v___jp_185_:
{
lean_object* v_pivot_187_; lean_object* v___x_188_; lean_object* v_fst_189_; lean_object* v_snd_190_; uint8_t v___x_191_; 
v_pivot_187_ = lean_array_fget(v___y_186_, v_hi_184_);
lean_inc_n(v_lo_183_, 2);
lean_inc_ref(v_lt_180_);
v___x_188_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___redArg(v_lt_180_, v_hi_184_, v_pivot_187_, v___y_186_, v_lo_183_, v_lo_183_);
v_fst_189_ = lean_ctor_get(v___x_188_, 0);
lean_inc(v_fst_189_);
v_snd_190_ = lean_ctor_get(v___x_188_, 1);
lean_inc(v_snd_190_);
lean_dec_ref(v___x_188_);
v___x_191_ = lean_nat_dec_le(v_hi_184_, v_fst_189_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
lean_inc_ref(v_lt_180_);
v___x_192_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_180_, v_n_181_, v_snd_190_, v_lo_183_, v_fst_189_);
v___x_193_ = lean_unsigned_to_nat(1u);
v___x_194_ = lean_nat_add(v_fst_189_, v___x_193_);
lean_dec(v_fst_189_);
v_as_182_ = v___x_192_;
v_lo_183_ = v___x_194_;
goto _start;
}
else
{
lean_dec(v_fst_189_);
lean_dec(v_lo_183_);
lean_dec_ref(v_lt_180_);
return v_snd_190_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg___boxed(lean_object* v_lt_219_, lean_object* v_n_220_, lean_object* v_as_221_, lean_object* v_lo_222_, lean_object* v_hi_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_219_, v_n_220_, v_as_221_, v_lo_222_, v_hi_223_);
lean_dec(v_hi_223_);
lean_dec(v_n_220_);
return v_res_224_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(lean_object* v_s_228_, lean_object* v_lt_229_){
_start:
{
lean_object* v___f_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v_decls_233_; lean_object* v___x_234_; uint8_t v___x_235_; 
v___f_230_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__0));
v___x_231_ = lean_unsigned_to_nat(0u);
v___x_232_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___closed__1));
v_decls_233_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_s_228_, v___f_230_, v___x_232_);
v___x_234_ = lean_array_get_size(v_decls_233_);
v___x_235_ = lean_nat_dec_eq(v___x_234_, v___x_231_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___y_239_; uint8_t v___x_243_; 
v___x_236_ = lean_unsigned_to_nat(1u);
v___x_237_ = lean_nat_sub(v___x_234_, v___x_236_);
v___x_243_ = lean_nat_dec_le(v___x_231_, v___x_237_);
if (v___x_243_ == 0)
{
lean_inc(v___x_237_);
v___y_239_ = v___x_237_;
goto v___jp_238_;
}
else
{
v___y_239_ = v___x_231_;
goto v___jp_238_;
}
v___jp_238_:
{
uint8_t v___x_240_; 
v___x_240_ = lean_nat_dec_le(v___y_239_, v___x_237_);
if (v___x_240_ == 0)
{
lean_object* v___x_241_; 
lean_dec(v___x_237_);
lean_inc(v___y_239_);
v___x_241_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_229_, v___x_234_, v_decls_233_, v___y_239_, v___y_239_);
lean_dec(v___y_239_);
return v___x_241_;
}
else
{
lean_object* v___x_242_; 
v___x_242_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_229_, v___x_234_, v_decls_233_, v___y_239_, v___x_237_);
lean_dec(v___x_237_);
return v___x_242_;
}
}
}
else
{
lean_dec_ref(v_lt_229_);
return v_decls_233_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg___boxed(lean_object* v_s_244_, lean_object* v_lt_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_244_, v_lt_245_);
lean_dec_ref(v_s_244_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries(uint8_t v_pu_247_, lean_object* v_00_u03b2_248_, lean_object* v_s_249_, lean_object* v_lt_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_249_, v_lt_250_);
return v___x_251_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___boxed(lean_object* v_pu_252_, lean_object* v_00_u03b2_253_, lean_object* v_s_254_, lean_object* v_lt_255_){
_start:
{
uint8_t v_pu_boxed_256_; lean_object* v_res_257_; 
v_pu_boxed_256_ = lean_unbox(v_pu_252_);
v_res_257_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries(v_pu_boxed_256_, v_00_u03b2_253_, v_s_254_, v_lt_255_);
lean_dec_ref(v_s_254_);
return v_res_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0(lean_object* v_00_u03c3_258_, lean_object* v_00_u03b2_259_, lean_object* v_map_260_, lean_object* v_f_261_, lean_object* v_init_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_map_260_, v_f_261_, v_init_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___boxed(lean_object* v_00_u03c3_264_, lean_object* v_00_u03b2_265_, lean_object* v_map_266_, lean_object* v_f_267_, lean_object* v_init_268_){
_start:
{
lean_object* v_res_269_; 
v_res_269_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0(v_00_u03c3_264_, v_00_u03b2_265_, v_map_266_, v_f_267_, v_init_268_);
lean_dec_ref(v_map_266_);
return v_res_269_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1(lean_object* v_00_u03b2_270_, lean_object* v_lt_271_, lean_object* v_n_272_, lean_object* v_as_273_, lean_object* v_lo_274_, lean_object* v_hi_275_, lean_object* v_w_276_, lean_object* v_hlo_277_, lean_object* v_hhi_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___redArg(v_lt_271_, v_n_272_, v_as_273_, v_lo_274_, v_hi_275_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1___boxed(lean_object* v_00_u03b2_280_, lean_object* v_lt_281_, lean_object* v_n_282_, lean_object* v_as_283_, lean_object* v_lo_284_, lean_object* v_hi_285_, lean_object* v_w_286_, lean_object* v_hlo_287_, lean_object* v_hhi_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1(v_00_u03b2_280_, v_lt_281_, v_n_282_, v_as_283_, v_lo_284_, v_hi_285_, v_w_286_, v_hlo_287_, v_hhi_288_);
lean_dec(v_hi_285_);
lean_dec(v_n_282_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg(lean_object* v_map_290_, lean_object* v_f_291_, lean_object* v_init_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_291_, v_map_290_, v_init_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg___boxed(lean_object* v_map_294_, lean_object* v_f_295_, lean_object* v_init_296_){
_start:
{
lean_object* v_res_297_; 
v_res_297_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___redArg(v_map_294_, v_f_295_, v_init_296_);
lean_dec_ref(v_map_294_);
return v_res_297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0(lean_object* v_00_u03c3_298_, lean_object* v_00_u03b2_299_, lean_object* v_map_300_, lean_object* v_f_301_, lean_object* v_init_302_){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_301_, v_map_300_, v_init_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0___boxed(lean_object* v_00_u03c3_304_, lean_object* v_00_u03b2_305_, lean_object* v_map_306_, lean_object* v_f_307_, lean_object* v_init_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0(v_00_u03c3_304_, v_00_u03b2_305_, v_map_306_, v_f_307_, v_init_308_);
lean_dec_ref(v_map_306_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2(lean_object* v_00_u03b2_310_, lean_object* v_lt_311_, lean_object* v_n_312_, lean_object* v_lo_313_, lean_object* v_hi_314_, lean_object* v_hhi_315_, lean_object* v_pivot_316_, lean_object* v_as_317_, lean_object* v_i_318_, lean_object* v_k_319_, lean_object* v_ilo_320_, lean_object* v_ik_321_, lean_object* v_w_322_){
_start:
{
lean_object* v___x_323_; 
v___x_323_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___redArg(v_lt_311_, v_hi_314_, v_pivot_316_, v_as_317_, v_i_318_, v_k_319_);
return v___x_323_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2___boxed(lean_object* v_00_u03b2_324_, lean_object* v_lt_325_, lean_object* v_n_326_, lean_object* v_lo_327_, lean_object* v_hi_328_, lean_object* v_hhi_329_, lean_object* v_pivot_330_, lean_object* v_as_331_, lean_object* v_i_332_, lean_object* v_k_333_, lean_object* v_ilo_334_, lean_object* v_ik_335_, lean_object* v_w_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__1_spec__2(v_00_u03b2_324_, v_lt_325_, v_n_326_, v_lo_327_, v_hi_328_, v_hhi_329_, v_pivot_330_, v_as_331_, v_i_332_, v_k_333_, v_ilo_334_, v_ik_335_, v_w_336_);
lean_dec(v_hi_328_);
lean_dec(v_lo_327_);
lean_dec(v_n_326_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_338_, lean_object* v_00_u03b1_339_, lean_object* v_00_u03b2_340_, lean_object* v_f_341_, lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
lean_object* v___x_344_; 
v___x_344_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___redArg(v_f_341_, v_x_342_, v_x_343_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_345_, lean_object* v_00_u03b1_346_, lean_object* v_00_u03b2_347_, lean_object* v_f_348_, lean_object* v_x_349_, lean_object* v_x_350_){
_start:
{
lean_object* v_res_351_; 
v_res_351_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1(v_00_u03c3_345_, v_00_u03b1_346_, v_00_u03b2_347_, v_f_348_, v_x_349_, v_x_350_);
lean_dec_ref(v_x_349_);
return v_res_351_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3(lean_object* v_00_u03b1_352_, lean_object* v_00_u03b2_353_, lean_object* v_00_u03c3_354_, lean_object* v_f_355_, lean_object* v_as_356_, size_t v_i_357_, size_t v_stop_358_, lean_object* v_b_359_){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___redArg(v_f_355_, v_as_356_, v_i_357_, v_stop_358_, v_b_359_);
return v___x_360_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_00_u03b1_361_, lean_object* v_00_u03b2_362_, lean_object* v_00_u03c3_363_, lean_object* v_f_364_, lean_object* v_as_365_, lean_object* v_i_366_, lean_object* v_stop_367_, lean_object* v_b_368_){
_start:
{
size_t v_i_boxed_369_; size_t v_stop_boxed_370_; lean_object* v_res_371_; 
v_i_boxed_369_ = lean_unbox_usize(v_i_366_);
lean_dec(v_i_366_);
v_stop_boxed_370_ = lean_unbox_usize(v_stop_367_);
lean_dec(v_stop_367_);
v_res_371_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__3(v_00_u03b1_361_, v_00_u03b2_362_, v_00_u03c3_363_, v_f_364_, v_as_365_, v_i_boxed_369_, v_stop_boxed_370_, v_b_368_);
lean_dec_ref(v_as_365_);
return v_res_371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03c3_372_, lean_object* v_00_u03b1_373_, lean_object* v_00_u03b2_374_, lean_object* v_f_375_, lean_object* v_keys_376_, lean_object* v_vals_377_, lean_object* v_heq_378_, lean_object* v_i_379_, lean_object* v_acc_380_){
_start:
{
lean_object* v___x_381_; 
v___x_381_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___redArg(v_f_375_, v_keys_376_, v_vals_377_, v_i_379_, v_acc_380_);
return v___x_381_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03c3_382_, lean_object* v_00_u03b1_383_, lean_object* v_00_u03b2_384_, lean_object* v_f_385_, lean_object* v_keys_386_, lean_object* v_vals_387_, lean_object* v_heq_388_, lean_object* v_i_389_, lean_object* v_acc_390_){
_start:
{
lean_object* v_res_391_; 
v_res_391_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0_spec__0_spec__1_spec__4(v_00_u03c3_382_, v_00_u03b1_383_, v_00_u03b2_384_, v_f_385_, v_keys_386_, v_vals_387_, v_heq_388_, v_i_389_, v_acc_390_);
lean_dec_ref(v_vals_387_);
lean_dec_ref(v_keys_386_);
return v_res_391_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_392_, lean_object* v_i_393_, lean_object* v_k_394_){
_start:
{
lean_object* v___x_395_; uint8_t v___x_396_; 
v___x_395_ = lean_array_get_size(v_keys_392_);
v___x_396_ = lean_nat_dec_lt(v_i_393_, v___x_395_);
if (v___x_396_ == 0)
{
lean_dec(v_i_393_);
return v___x_396_;
}
else
{
lean_object* v_k_x27_397_; uint8_t v___x_398_; 
v_k_x27_397_ = lean_array_fget_borrowed(v_keys_392_, v_i_393_);
v___x_398_ = lean_name_eq(v_k_394_, v_k_x27_397_);
if (v___x_398_ == 0)
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = lean_unsigned_to_nat(1u);
v___x_400_ = lean_nat_add(v_i_393_, v___x_399_);
lean_dec(v_i_393_);
v_i_393_ = v___x_400_;
goto _start;
}
else
{
lean_dec(v_i_393_);
return v___x_396_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_402_, lean_object* v_i_403_, lean_object* v_k_404_){
_start:
{
uint8_t v_res_405_; lean_object* v_r_406_; 
v_res_405_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(v_keys_402_, v_i_403_, v_k_404_);
lean_dec(v_k_404_);
lean_dec_ref(v_keys_402_);
v_r_406_ = lean_box(v_res_405_);
return v_r_406_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(lean_object* v_x_407_, size_t v_x_408_, lean_object* v_x_409_){
_start:
{
if (lean_obj_tag(v_x_407_) == 0)
{
lean_object* v_es_410_; lean_object* v___x_411_; size_t v___x_412_; size_t v___x_413_; lean_object* v_j_414_; lean_object* v___x_415_; 
v_es_410_ = lean_ctor_get(v_x_407_, 0);
v___x_411_ = lean_box(2);
v___x_412_ = ((size_t)31ULL);
v___x_413_ = lean_usize_land(v_x_408_, v___x_412_);
v_j_414_ = lean_usize_to_nat(v___x_413_);
v___x_415_ = lean_array_get_borrowed(v___x_411_, v_es_410_, v_j_414_);
lean_dec(v_j_414_);
switch(lean_obj_tag(v___x_415_))
{
case 0:
{
lean_object* v_key_416_; uint8_t v___x_417_; 
v_key_416_ = lean_ctor_get(v___x_415_, 0);
v___x_417_ = lean_name_eq(v_x_409_, v_key_416_);
return v___x_417_;
}
case 1:
{
lean_object* v_node_418_; size_t v___x_419_; size_t v___x_420_; 
v_node_418_ = lean_ctor_get(v___x_415_, 0);
v___x_419_ = ((size_t)5ULL);
v___x_420_ = lean_usize_shift_right(v_x_408_, v___x_419_);
v_x_407_ = v_node_418_;
v_x_408_ = v___x_420_;
goto _start;
}
default: 
{
uint8_t v___x_422_; 
v___x_422_ = 0;
return v___x_422_;
}
}
}
else
{
lean_object* v_ks_423_; lean_object* v___x_424_; uint8_t v___x_425_; 
v_ks_423_ = lean_ctor_get(v_x_407_, 0);
v___x_424_ = lean_unsigned_to_nat(0u);
v___x_425_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(v_ks_423_, v___x_424_, v_x_409_);
return v___x_425_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg___boxed(lean_object* v_x_426_, lean_object* v_x_427_, lean_object* v_x_428_){
_start:
{
size_t v_x_410__boxed_429_; uint8_t v_res_430_; lean_object* v_r_431_; 
v_x_410__boxed_429_ = lean_unbox_usize(v_x_427_);
lean_dec(v_x_427_);
v_res_430_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(v_x_426_, v_x_410__boxed_429_, v_x_428_);
lean_dec(v_x_428_);
lean_dec_ref(v_x_426_);
v_r_431_ = lean_box(v_res_430_);
return v_r_431_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(lean_object* v_x_432_, lean_object* v_x_433_){
_start:
{
uint64_t v___y_435_; 
if (lean_obj_tag(v_x_433_) == 0)
{
uint64_t v___x_438_; 
v___x_438_ = 1723ULL;
v___y_435_ = v___x_438_;
goto v___jp_434_;
}
else
{
uint64_t v_hash_439_; 
v_hash_439_ = lean_ctor_get_uint64(v_x_433_, sizeof(void*)*2);
v___y_435_ = v_hash_439_;
goto v___jp_434_;
}
v___jp_434_:
{
size_t v___x_436_; uint8_t v___x_437_; 
v___x_436_ = lean_uint64_to_usize(v___y_435_);
v___x_437_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(v_x_432_, v___x_436_, v_x_433_);
return v___x_437_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg___boxed(lean_object* v_x_440_, lean_object* v_x_441_){
_start:
{
uint8_t v_res_442_; lean_object* v_r_443_; 
v_res_442_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(v_x_440_, v_x_441_);
lean_dec(v_x_441_);
lean_dec_ref(v_x_440_);
v_r_443_ = lean_box(v_res_442_);
return v_r_443_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_444_, lean_object* v_x_445_, lean_object* v_x_446_, lean_object* v_x_447_){
_start:
{
lean_object* v_ks_448_; lean_object* v_vs_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_473_; 
v_ks_448_ = lean_ctor_get(v_x_444_, 0);
v_vs_449_ = lean_ctor_get(v_x_444_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_x_444_);
if (v_isSharedCheck_473_ == 0)
{
v___x_451_ = v_x_444_;
v_isShared_452_ = v_isSharedCheck_473_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_vs_449_);
lean_inc(v_ks_448_);
lean_dec(v_x_444_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_473_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_453_; uint8_t v___x_454_; 
v___x_453_ = lean_array_get_size(v_ks_448_);
v___x_454_ = lean_nat_dec_lt(v_x_445_, v___x_453_);
if (v___x_454_ == 0)
{
lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_458_; 
lean_dec(v_x_445_);
v___x_455_ = lean_array_push(v_ks_448_, v_x_446_);
v___x_456_ = lean_array_push(v_vs_449_, v_x_447_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 1, v___x_456_);
lean_ctor_set(v___x_451_, 0, v___x_455_);
v___x_458_ = v___x_451_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v___x_455_);
lean_ctor_set(v_reuseFailAlloc_459_, 1, v___x_456_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
else
{
lean_object* v_k_x27_460_; uint8_t v___x_461_; 
v_k_x27_460_ = lean_array_fget_borrowed(v_ks_448_, v_x_445_);
v___x_461_ = lean_name_eq(v_x_446_, v_k_x27_460_);
if (v___x_461_ == 0)
{
lean_object* v___x_463_; 
if (v_isShared_452_ == 0)
{
v___x_463_ = v___x_451_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_467_; 
v_reuseFailAlloc_467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_467_, 0, v_ks_448_);
lean_ctor_set(v_reuseFailAlloc_467_, 1, v_vs_449_);
v___x_463_ = v_reuseFailAlloc_467_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_464_ = lean_unsigned_to_nat(1u);
v___x_465_ = lean_nat_add(v_x_445_, v___x_464_);
lean_dec(v_x_445_);
v_x_444_ = v___x_463_;
v_x_445_ = v___x_465_;
goto _start;
}
}
else
{
lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_471_; 
v___x_468_ = lean_array_fset(v_ks_448_, v_x_445_, v_x_446_);
v___x_469_ = lean_array_fset(v_vs_449_, v_x_445_, v_x_447_);
lean_dec(v_x_445_);
if (v_isShared_452_ == 0)
{
lean_ctor_set(v___x_451_, 1, v___x_469_);
lean_ctor_set(v___x_451_, 0, v___x_468_);
v___x_471_ = v___x_451_;
goto v_reusejp_470_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v___x_468_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v___x_469_);
v___x_471_ = v_reuseFailAlloc_472_;
goto v_reusejp_470_;
}
v_reusejp_470_:
{
return v___x_471_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(lean_object* v_n_474_, lean_object* v_k_475_, lean_object* v_v_476_){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_unsigned_to_nat(0u);
v___x_478_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(v_n_474_, v___x_477_, v_k_475_, v_v_476_);
return v___x_478_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_479_; 
v___x_479_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(lean_object* v_x_480_, size_t v_x_481_, size_t v_x_482_, lean_object* v_x_483_, lean_object* v_x_484_){
_start:
{
if (lean_obj_tag(v_x_480_) == 0)
{
lean_object* v_es_485_; size_t v___x_486_; size_t v___x_487_; lean_object* v_j_488_; lean_object* v___x_489_; uint8_t v___x_490_; 
v_es_485_ = lean_ctor_get(v_x_480_, 0);
v___x_486_ = ((size_t)31ULL);
v___x_487_ = lean_usize_land(v_x_481_, v___x_486_);
v_j_488_ = lean_usize_to_nat(v___x_487_);
v___x_489_ = lean_array_get_size(v_es_485_);
v___x_490_ = lean_nat_dec_lt(v_j_488_, v___x_489_);
if (v___x_490_ == 0)
{
lean_dec(v_j_488_);
lean_dec(v_x_484_);
lean_dec(v_x_483_);
return v_x_480_;
}
else
{
lean_object* v___x_492_; uint8_t v_isShared_493_; uint8_t v_isSharedCheck_529_; 
lean_inc_ref(v_es_485_);
v_isSharedCheck_529_ = !lean_is_exclusive(v_x_480_);
if (v_isSharedCheck_529_ == 0)
{
lean_object* v_unused_530_; 
v_unused_530_ = lean_ctor_get(v_x_480_, 0);
lean_dec(v_unused_530_);
v___x_492_ = v_x_480_;
v_isShared_493_ = v_isSharedCheck_529_;
goto v_resetjp_491_;
}
else
{
lean_dec(v_x_480_);
v___x_492_ = lean_box(0);
v_isShared_493_ = v_isSharedCheck_529_;
goto v_resetjp_491_;
}
v_resetjp_491_:
{
lean_object* v_v_494_; lean_object* v___x_495_; lean_object* v_xs_x27_496_; lean_object* v___y_498_; 
v_v_494_ = lean_array_fget(v_es_485_, v_j_488_);
v___x_495_ = lean_box(0);
v_xs_x27_496_ = lean_array_fset(v_es_485_, v_j_488_, v___x_495_);
switch(lean_obj_tag(v_v_494_))
{
case 0:
{
lean_object* v_key_503_; lean_object* v_val_504_; lean_object* v___x_506_; uint8_t v_isShared_507_; uint8_t v_isSharedCheck_514_; 
v_key_503_ = lean_ctor_get(v_v_494_, 0);
v_val_504_ = lean_ctor_get(v_v_494_, 1);
v_isSharedCheck_514_ = !lean_is_exclusive(v_v_494_);
if (v_isSharedCheck_514_ == 0)
{
v___x_506_ = v_v_494_;
v_isShared_507_ = v_isSharedCheck_514_;
goto v_resetjp_505_;
}
else
{
lean_inc(v_val_504_);
lean_inc(v_key_503_);
lean_dec(v_v_494_);
v___x_506_ = lean_box(0);
v_isShared_507_ = v_isSharedCheck_514_;
goto v_resetjp_505_;
}
v_resetjp_505_:
{
uint8_t v___x_508_; 
v___x_508_ = lean_name_eq(v_x_483_, v_key_503_);
if (v___x_508_ == 0)
{
lean_object* v___x_509_; lean_object* v___x_510_; 
lean_del_object(v___x_506_);
v___x_509_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_503_, v_val_504_, v_x_483_, v_x_484_);
v___x_510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_510_, 0, v___x_509_);
v___y_498_ = v___x_510_;
goto v___jp_497_;
}
else
{
lean_object* v___x_512_; 
lean_dec(v_val_504_);
lean_dec(v_key_503_);
if (v_isShared_507_ == 0)
{
lean_ctor_set(v___x_506_, 1, v_x_484_);
lean_ctor_set(v___x_506_, 0, v_x_483_);
v___x_512_ = v___x_506_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_x_483_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v_x_484_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
v___y_498_ = v___x_512_;
goto v___jp_497_;
}
}
}
}
case 1:
{
lean_object* v_node_515_; lean_object* v___x_517_; uint8_t v_isShared_518_; uint8_t v_isSharedCheck_527_; 
v_node_515_ = lean_ctor_get(v_v_494_, 0);
v_isSharedCheck_527_ = !lean_is_exclusive(v_v_494_);
if (v_isSharedCheck_527_ == 0)
{
v___x_517_ = v_v_494_;
v_isShared_518_ = v_isSharedCheck_527_;
goto v_resetjp_516_;
}
else
{
lean_inc(v_node_515_);
lean_dec(v_v_494_);
v___x_517_ = lean_box(0);
v_isShared_518_ = v_isSharedCheck_527_;
goto v_resetjp_516_;
}
v_resetjp_516_:
{
size_t v___x_519_; size_t v___x_520_; size_t v___x_521_; size_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_519_ = ((size_t)5ULL);
v___x_520_ = lean_usize_shift_right(v_x_481_, v___x_519_);
v___x_521_ = ((size_t)1ULL);
v___x_522_ = lean_usize_add(v_x_482_, v___x_521_);
v___x_523_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_node_515_, v___x_520_, v___x_522_, v_x_483_, v_x_484_);
if (v_isShared_518_ == 0)
{
lean_ctor_set(v___x_517_, 0, v___x_523_);
v___x_525_ = v___x_517_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___x_523_);
v___x_525_ = v_reuseFailAlloc_526_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
v___y_498_ = v___x_525_;
goto v___jp_497_;
}
}
}
default: 
{
lean_object* v___x_528_; 
v___x_528_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_528_, 0, v_x_483_);
lean_ctor_set(v___x_528_, 1, v_x_484_);
v___y_498_ = v___x_528_;
goto v___jp_497_;
}
}
v___jp_497_:
{
lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_499_ = lean_array_fset(v_xs_x27_496_, v_j_488_, v___y_498_);
lean_dec(v_j_488_);
if (v_isShared_493_ == 0)
{
lean_ctor_set(v___x_492_, 0, v___x_499_);
v___x_501_ = v___x_492_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_502_; 
v_reuseFailAlloc_502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_502_, 0, v___x_499_);
v___x_501_ = v_reuseFailAlloc_502_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
return v___x_501_;
}
}
}
}
}
else
{
lean_object* v_ks_531_; lean_object* v_vs_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_550_; 
v_ks_531_ = lean_ctor_get(v_x_480_, 0);
v_vs_532_ = lean_ctor_get(v_x_480_, 1);
v_isSharedCheck_550_ = !lean_is_exclusive(v_x_480_);
if (v_isSharedCheck_550_ == 0)
{
v___x_534_ = v_x_480_;
v_isShared_535_ = v_isSharedCheck_550_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_vs_532_);
lean_inc(v_ks_531_);
lean_dec(v_x_480_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_550_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v_ks_531_);
lean_ctor_set(v_reuseFailAlloc_549_, 1, v_vs_532_);
v___x_537_ = v_reuseFailAlloc_549_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
lean_object* v_newNode_538_; size_t v___x_539_; uint8_t v___x_540_; 
v_newNode_538_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(v___x_537_, v_x_483_, v_x_484_);
v___x_539_ = ((size_t)7ULL);
v___x_540_ = lean_usize_dec_le(v___x_539_, v_x_482_);
if (v___x_540_ == 0)
{
lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_541_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_538_);
v___x_542_ = lean_unsigned_to_nat(4u);
v___x_543_ = lean_nat_dec_lt(v___x_541_, v___x_542_);
lean_dec(v___x_541_);
if (v___x_543_ == 0)
{
lean_object* v_ks_544_; lean_object* v_vs_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; 
v_ks_544_ = lean_ctor_get(v_newNode_538_, 0);
lean_inc_ref(v_ks_544_);
v_vs_545_ = lean_ctor_get(v_newNode_538_, 1);
lean_inc_ref(v_vs_545_);
lean_dec_ref(v_newNode_538_);
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___closed__0);
v___x_548_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(v_x_482_, v_ks_544_, v_vs_545_, v___x_546_, v___x_547_);
lean_dec_ref(v_vs_545_);
lean_dec_ref(v_ks_544_);
return v___x_548_;
}
else
{
return v_newNode_538_;
}
}
else
{
return v_newNode_538_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(size_t v_depth_551_, lean_object* v_keys_552_, lean_object* v_vals_553_, lean_object* v_i_554_, lean_object* v_entries_555_){
_start:
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_array_get_size(v_keys_552_);
v___x_557_ = lean_nat_dec_lt(v_i_554_, v___x_556_);
if (v___x_557_ == 0)
{
lean_dec(v_i_554_);
return v_entries_555_;
}
else
{
lean_object* v_k_558_; lean_object* v_v_559_; uint64_t v___y_561_; 
v_k_558_ = lean_array_fget_borrowed(v_keys_552_, v_i_554_);
v_v_559_ = lean_array_fget_borrowed(v_vals_553_, v_i_554_);
if (lean_obj_tag(v_k_558_) == 0)
{
uint64_t v___x_572_; 
v___x_572_ = 1723ULL;
v___y_561_ = v___x_572_;
goto v___jp_560_;
}
else
{
uint64_t v_hash_573_; 
v_hash_573_ = lean_ctor_get_uint64(v_k_558_, sizeof(void*)*2);
v___y_561_ = v_hash_573_;
goto v___jp_560_;
}
v___jp_560_:
{
size_t v_h_562_; size_t v___x_563_; lean_object* v___x_564_; size_t v___x_565_; size_t v___x_566_; size_t v___x_567_; size_t v_h_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v_h_562_ = lean_uint64_to_usize(v___y_561_);
v___x_563_ = ((size_t)5ULL);
v___x_564_ = lean_unsigned_to_nat(1u);
v___x_565_ = ((size_t)1ULL);
v___x_566_ = lean_usize_sub(v_depth_551_, v___x_565_);
v___x_567_ = lean_usize_mul(v___x_563_, v___x_566_);
v_h_568_ = lean_usize_shift_right(v_h_562_, v___x_567_);
v___x_569_ = lean_nat_add(v_i_554_, v___x_564_);
lean_dec(v_i_554_);
lean_inc(v_v_559_);
lean_inc(v_k_558_);
v___x_570_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_entries_555_, v_h_568_, v_depth_551_, v_k_558_, v_v_559_);
v_i_554_ = v___x_569_;
v_entries_555_ = v___x_570_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_574_, lean_object* v_keys_575_, lean_object* v_vals_576_, lean_object* v_i_577_, lean_object* v_entries_578_){
_start:
{
size_t v_depth_boxed_579_; lean_object* v_res_580_; 
v_depth_boxed_579_ = lean_unbox_usize(v_depth_574_);
lean_dec(v_depth_574_);
v_res_580_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(v_depth_boxed_579_, v_keys_575_, v_vals_576_, v_i_577_, v_entries_578_);
lean_dec_ref(v_vals_576_);
lean_dec_ref(v_keys_575_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg___boxed(lean_object* v_x_581_, lean_object* v_x_582_, lean_object* v_x_583_, lean_object* v_x_584_, lean_object* v_x_585_){
_start:
{
size_t v_x_545__boxed_586_; size_t v_x_546__boxed_587_; lean_object* v_res_588_; 
v_x_545__boxed_586_ = lean_unbox_usize(v_x_582_);
lean_dec(v_x_582_);
v_x_546__boxed_587_ = lean_unbox_usize(v_x_583_);
lean_dec(v_x_583_);
v_res_588_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_x_581_, v_x_545__boxed_586_, v_x_546__boxed_587_, v_x_584_, v_x_585_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(lean_object* v_x_589_, lean_object* v_x_590_, lean_object* v_x_591_){
_start:
{
uint64_t v___y_593_; 
if (lean_obj_tag(v_x_590_) == 0)
{
uint64_t v___x_597_; 
v___x_597_ = 1723ULL;
v___y_593_ = v___x_597_;
goto v___jp_592_;
}
else
{
uint64_t v_hash_598_; 
v_hash_598_ = lean_ctor_get_uint64(v_x_590_, sizeof(void*)*2);
v___y_593_ = v_hash_598_;
goto v___jp_592_;
}
v___jp_592_:
{
size_t v___x_594_; size_t v___x_595_; lean_object* v___x_596_; 
v___x_594_ = lean_uint64_to_usize(v___y_593_);
v___x_595_ = ((size_t)1ULL);
v___x_596_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_x_589_, v___x_594_, v___x_595_, v_x_590_, v_x_591_);
return v___x_596_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0(lean_object* v_oldState_599_, lean_object* v_otherState_600_, lean_object* v_k_601_, lean_object* v_v_602_){
_start:
{
uint8_t v___x_603_; 
v___x_603_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(v_oldState_599_, v_k_601_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; 
v___x_604_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_otherState_600_, v_k_601_, v_v_602_);
return v___x_604_;
}
else
{
lean_dec(v_v_602_);
lean_dec(v_k_601_);
return v_otherState_600_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0___boxed(lean_object* v_oldState_605_, lean_object* v_otherState_606_, lean_object* v_k_607_, lean_object* v_v_608_){
_start:
{
lean_object* v_res_609_; 
v_res_609_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0(v_oldState_605_, v_otherState_606_, v_k_607_, v_v_608_);
lean_dec_ref(v_oldState_605_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(lean_object* v_oldState_610_, lean_object* v_newState_611_, lean_object* v_otherState_612_){
_start:
{
lean_object* v___f_613_; lean_object* v___x_614_; 
v___f_613_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_613_, 0, v_oldState_610_);
v___x_614_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_newState_611_, v___f_613_, v_otherState_612_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg___boxed(lean_object* v_oldState_615_, lean_object* v_newState_616_, lean_object* v_otherState_617_){
_start:
{
lean_object* v_res_618_; 
v_res_618_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(v_oldState_615_, v_newState_616_, v_otherState_617_);
lean_dec_ref(v_newState_616_);
return v_res_618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn(lean_object* v_00_u03b2_619_, uint8_t v_phase_620_, lean_object* v_oldState_621_, lean_object* v_newState_622_, lean_object* v_x_623_, lean_object* v_otherState_624_){
_start:
{
lean_object* v___x_625_; 
v___x_625_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___redArg(v_oldState_621_, v_newState_622_, v_otherState_624_);
return v___x_625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed(lean_object* v_00_u03b2_626_, lean_object* v_phase_627_, lean_object* v_oldState_628_, lean_object* v_newState_629_, lean_object* v_x_630_, lean_object* v_otherState_631_){
_start:
{
uint8_t v_phase_boxed_632_; lean_object* v_res_633_; 
v_phase_boxed_632_ = lean_unbox(v_phase_627_);
v_res_633_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn(v_00_u03b2_626_, v_phase_boxed_632_, v_oldState_628_, v_newState_629_, v_x_630_, v_otherState_631_);
lean_dec(v_x_630_);
lean_dec_ref(v_newState_629_);
return v_res_633_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0(lean_object* v_00_u03b2_634_, lean_object* v_x_635_, lean_object* v_x_636_){
_start:
{
uint8_t v___x_637_; 
v___x_637_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___redArg(v_x_635_, v_x_636_);
return v___x_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0___boxed(lean_object* v_00_u03b2_638_, lean_object* v_x_639_, lean_object* v_x_640_){
_start:
{
uint8_t v_res_641_; lean_object* v_r_642_; 
v_res_641_ = l_Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0(v_00_u03b2_638_, v_x_639_, v_x_640_);
lean_dec(v_x_640_);
lean_dec_ref(v_x_639_);
v_r_642_ = lean_box(v_res_641_);
return v_r_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1(lean_object* v_00_u03b2_643_, lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v_x_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_x_644_, v_x_645_, v_x_646_);
return v___x_647_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0(lean_object* v_00_u03b2_648_, lean_object* v_x_649_, size_t v_x_650_, lean_object* v_x_651_){
_start:
{
uint8_t v___x_652_; 
v___x_652_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___redArg(v_x_649_, v_x_650_, v_x_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0___boxed(lean_object* v_00_u03b2_653_, lean_object* v_x_654_, lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
size_t v_x_746__boxed_657_; uint8_t v_res_658_; lean_object* v_r_659_; 
v_x_746__boxed_657_ = lean_unbox_usize(v_x_655_);
lean_dec(v_x_655_);
v_res_658_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0(v_00_u03b2_653_, v_x_654_, v_x_746__boxed_657_, v_x_656_);
lean_dec(v_x_656_);
lean_dec_ref(v_x_654_);
v_r_659_ = lean_box(v_res_658_);
return v_r_659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2(lean_object* v_00_u03b2_660_, lean_object* v_x_661_, size_t v_x_662_, size_t v_x_663_, lean_object* v_x_664_, lean_object* v_x_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___redArg(v_x_661_, v_x_662_, v_x_663_, v_x_664_, v_x_665_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2___boxed(lean_object* v_00_u03b2_667_, lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v_x_672_){
_start:
{
size_t v_x_757__boxed_673_; size_t v_x_758__boxed_674_; lean_object* v_res_675_; 
v_x_757__boxed_673_ = lean_unbox_usize(v_x_669_);
lean_dec(v_x_669_);
v_x_758__boxed_674_ = lean_unbox_usize(v_x_670_);
lean_dec(v_x_670_);
v_res_675_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2(v_00_u03b2_667_, v_x_668_, v_x_757__boxed_673_, v_x_758__boxed_674_, v_x_671_, v_x_672_);
return v_res_675_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_676_, lean_object* v_keys_677_, lean_object* v_vals_678_, lean_object* v_heq_679_, lean_object* v_i_680_, lean_object* v_k_681_){
_start:
{
uint8_t v___x_682_; 
v___x_682_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___redArg(v_keys_677_, v_i_680_, v_k_681_);
return v___x_682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_683_, lean_object* v_keys_684_, lean_object* v_vals_685_, lean_object* v_heq_686_, lean_object* v_i_687_, lean_object* v_k_688_){
_start:
{
uint8_t v_res_689_; lean_object* v_r_690_; 
v_res_689_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__0_spec__0_spec__1(v_00_u03b2_683_, v_keys_684_, v_vals_685_, v_heq_686_, v_i_687_, v_k_688_);
lean_dec(v_k_688_);
lean_dec_ref(v_vals_685_);
lean_dec_ref(v_keys_684_);
v_r_690_ = lean_box(v_res_689_);
return v_r_690_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_691_, lean_object* v_n_692_, lean_object* v_k_693_, lean_object* v_v_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4___redArg(v_n_692_, v_k_693_, v_v_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_696_, size_t v_depth_697_, lean_object* v_keys_698_, lean_object* v_vals_699_, lean_object* v_heq_700_, lean_object* v_i_701_, lean_object* v_entries_702_){
_start:
{
lean_object* v___x_703_; 
v___x_703_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___redArg(v_depth_697_, v_keys_698_, v_vals_699_, v_i_701_, v_entries_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_704_, lean_object* v_depth_705_, lean_object* v_keys_706_, lean_object* v_vals_707_, lean_object* v_heq_708_, lean_object* v_i_709_, lean_object* v_entries_710_){
_start:
{
size_t v_depth_boxed_711_; lean_object* v_res_712_; 
v_depth_boxed_711_ = lean_unbox_usize(v_depth_705_);
lean_dec(v_depth_705_);
v_res_712_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__5(v_00_u03b2_704_, v_depth_boxed_711_, v_keys_706_, v_vals_707_, v_heq_708_, v_i_709_, v_entries_710_);
lean_dec_ref(v_vals_707_);
lean_dec_ref(v_keys_706_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_713_, lean_object* v_x_714_, lean_object* v_x_715_, lean_object* v_x_716_, lean_object* v_x_717_){
_start:
{
lean_object* v___x_718_; 
v___x_718_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1_spec__2_spec__4_spec__5___redArg(v_x_714_, v_x_715_, v_x_716_, v_x_717_);
return v___x_718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0(lean_object* v_count_719_, lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; 
v___x_722_ = lean_unsigned_to_nat(1u);
v___x_723_ = lean_nat_add(v_count_719_, v___x_722_);
return v___x_723_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0___boxed(lean_object* v_count_724_, lean_object* v_x_725_, lean_object* v_x_726_){
_start:
{
lean_object* v_res_727_; 
v_res_727_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___lam__0(v_count_724_, v_x_725_, v_x_726_);
lean_dec(v_x_726_);
lean_dec(v_x_725_);
lean_dec(v_count_724_);
return v_res_727_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(lean_object* v_state_732_){
_start:
{
lean_object* v___f_733_; lean_object* v___x_734_; lean_object* v_numEntries_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; 
v___f_733_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__0));
v___x_734_ = lean_unsigned_to_nat(0u);
v_numEntries_735_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_state_732_, v___f_733_, v___x_734_);
v___x_736_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___closed__2));
v___x_737_ = l_Nat_reprFast(v_numEntries_735_);
v___x_738_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_738_, 0, v___x_737_);
v___x_739_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_739_, 0, v___x_736_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg___boxed(lean_object* v_state_740_){
_start:
{
lean_object* v_res_741_; 
v_res_741_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(v_state_740_);
lean_dec_ref(v_state_740_);
return v_res_741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn(uint8_t v_pu_742_, lean_object* v_00_u03b2_743_, lean_object* v_state_744_){
_start:
{
lean_object* v___x_745_; 
v___x_745_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___redArg(v_state_744_);
return v___x_745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed(lean_object* v_pu_746_, lean_object* v_00_u03b2_747_, lean_object* v_state_748_){
_start:
{
uint8_t v_pu_boxed_749_; lean_object* v_res_750_; 
v_pu_boxed_749_ = lean_unbox(v_pu_746_);
v_res_750_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn(v_pu_boxed_749_, v_00_u03b2_747_, v_state_748_);
lean_dec_ref(v_state_748_);
return v_res_750_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg(lean_object* v_a_751_, lean_object* v_b_752_){
_start:
{
lean_object* v_toSignature_753_; lean_object* v_toSignature_754_; lean_object* v_name_755_; lean_object* v_name_756_; uint8_t v___x_757_; 
v_toSignature_753_ = lean_ctor_get(v_a_751_, 0);
v_toSignature_754_ = lean_ctor_get(v_b_752_, 0);
v_name_755_ = lean_ctor_get(v_toSignature_753_, 0);
v_name_756_ = lean_ctor_get(v_toSignature_754_, 0);
v___x_757_ = l_Lean_Name_quickLt(v_name_755_, v_name_756_);
return v___x_757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg___boxed(lean_object* v_a_758_, lean_object* v_b_759_){
_start:
{
uint8_t v_res_760_; lean_object* v_r_761_; 
v_res_760_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___redArg(v_a_758_, v_b_759_);
lean_dec_ref(v_b_759_);
lean_dec_ref(v_a_758_);
v_r_761_ = lean_box(v_res_760_);
return v_r_761_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt(uint8_t v_pu_762_, lean_object* v_a_763_, lean_object* v_b_764_){
_start:
{
lean_object* v_toSignature_765_; lean_object* v_toSignature_766_; lean_object* v_name_767_; lean_object* v_name_768_; uint8_t v___x_769_; 
v_toSignature_765_ = lean_ctor_get(v_a_763_, 0);
v_toSignature_766_ = lean_ctor_get(v_b_764_, 0);
v_name_767_ = lean_ctor_get(v_toSignature_765_, 0);
v_name_768_ = lean_ctor_get(v_toSignature_766_, 0);
v___x_769_ = l_Lean_Name_quickLt(v_name_767_, v_name_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___boxed(lean_object* v_pu_770_, lean_object* v_a_771_, lean_object* v_b_772_){
_start:
{
uint8_t v_pu_boxed_773_; uint8_t v_res_774_; lean_object* v_r_775_; 
v_pu_boxed_773_ = lean_unbox(v_pu_770_);
v_res_774_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt(v_pu_boxed_773_, v_a_771_, v_b_772_);
lean_dec_ref(v_b_772_);
lean_dec_ref(v_a_771_);
v_r_775_ = lean_box(v_res_774_);
return v_r_775_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0(void){
_start:
{
lean_object* v_tmpDecl_776_; 
v_tmpDecl_776_ = l_Lean_Compiler_LCNF_instInhabitedDecl_default___redArg();
return v_tmpDecl_776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f(uint8_t v_pu_778_, lean_object* v_decls_779_, lean_object* v_declName_780_){
_start:
{
lean_object* v_tmpDecl_781_; lean_object* v_toSignature_782_; lean_object* v_value_783_; uint8_t v_recursive_784_; lean_object* v_inlineAttr_x3f_785_; lean_object* v_levelParams_786_; lean_object* v_type_787_; lean_object* v_params_788_; uint8_t v_safe_789_; lean_object* v___x_790_; lean_object* v___x_791_; uint8_t v___x_792_; 
v_tmpDecl_781_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0, &l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0_once, _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0);
v_toSignature_782_ = lean_ctor_get(v_tmpDecl_781_, 0);
v_value_783_ = lean_ctor_get(v_tmpDecl_781_, 1);
v_recursive_784_ = lean_ctor_get_uint8(v_tmpDecl_781_, sizeof(void*)*3);
v_inlineAttr_x3f_785_ = lean_ctor_get(v_tmpDecl_781_, 2);
v_levelParams_786_ = lean_ctor_get(v_toSignature_782_, 1);
v_type_787_ = lean_ctor_get(v_toSignature_782_, 2);
v_params_788_ = lean_ctor_get(v_toSignature_782_, 3);
v_safe_789_ = lean_ctor_get_uint8(v_toSignature_782_, sizeof(void*)*4);
v___x_790_ = lean_unsigned_to_nat(0u);
v___x_791_ = lean_array_get_size(v_decls_779_);
v___x_792_ = lean_nat_dec_lt(v___x_790_, v___x_791_);
if (v___x_792_ == 0)
{
lean_object* v___x_793_; 
lean_dec(v_declName_780_);
v___x_793_ = lean_box(0);
return v___x_793_;
}
else
{
lean_object* v___x_794_; lean_object* v___x_795_; uint8_t v___x_796_; 
v___x_794_ = lean_unsigned_to_nat(1u);
v___x_795_ = lean_nat_sub(v___x_791_, v___x_794_);
v___x_796_ = lean_nat_dec_le(v___x_790_, v___x_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; 
lean_dec(v___x_795_);
lean_dec(v_declName_780_);
v___x_797_ = lean_box(0);
return v___x_797_;
}
else
{
lean_object* v___x_798_; lean_object* v_tmpDecl_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; 
lean_inc_ref(v_params_788_);
lean_inc_ref(v_type_787_);
lean_inc(v_levelParams_786_);
v___x_798_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_798_, 0, v_declName_780_);
lean_ctor_set(v___x_798_, 1, v_levelParams_786_);
lean_ctor_set(v___x_798_, 2, v_type_787_);
lean_ctor_set(v___x_798_, 3, v_params_788_);
lean_ctor_set_uint8(v___x_798_, sizeof(void*)*4, v_safe_789_);
lean_inc(v_inlineAttr_x3f_785_);
lean_inc_ref(v_value_783_);
v_tmpDecl_799_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_tmpDecl_799_, 0, v___x_798_);
lean_ctor_set(v_tmpDecl_799_, 1, v_value_783_);
lean_ctor_set(v_tmpDecl_799_, 2, v_inlineAttr_x3f_785_);
lean_ctor_set_uint8(v_tmpDecl_799_, sizeof(void*)*3, v_recursive_784_);
v___x_800_ = lean_box(v_pu_778_);
v___x_801_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_declLt___boxed), 3, 1);
lean_closure_set(v___x_801_, 0, v___x_800_);
v___x_802_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__1));
v___x_803_ = l_Array_binSearchAux___redArg(v___x_801_, v___x_802_, v_decls_779_, v_tmpDecl_799_, v___x_790_, v___x_795_);
return v___x_803_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___boxed(lean_object* v_pu_804_, lean_object* v_decls_805_, lean_object* v_declName_806_){
_start:
{
uint8_t v_pu_boxed_807_; lean_object* v_res_808_; 
v_pu_boxed_807_ = lean_unbox(v_pu_804_);
v_res_808_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f(v_pu_boxed_807_, v_decls_805_, v_declName_806_);
lean_dec_ref(v_decls_805_);
return v_res_808_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0(lean_object* v_x_812_, lean_object* v___y_813_){
_start:
{
lean_object* v___x_815_; lean_object* v___x_816_; 
v___x_815_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__1));
v___x_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_816_, 0, v___x_815_);
return v___x_816_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___boxed(lean_object* v_x_817_, lean_object* v___y_818_, lean_object* v___y_819_){
_start:
{
lean_object* v_res_820_; 
v_res_820_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0(v_x_817_, v___y_818_);
lean_dec_ref(v___y_818_);
lean_dec_ref(v_x_817_);
return v_res_820_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__1(lean_object* v_s_821_, lean_object* v_x_822_){
_start:
{
lean_inc_ref(v_s_821_);
return v_s_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__1___boxed(lean_object* v_s_823_, lean_object* v_x_824_){
_start:
{
lean_object* v_res_825_; 
v_res_825_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__1(v_s_823_, v_x_824_);
lean_dec_ref(v_x_824_);
lean_dec_ref(v_s_823_);
return v_res_825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2(lean_object* v_x_830_, lean_object* v_x_831_){
_start:
{
lean_object* v___x_832_; 
v___x_832_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__1));
return v___x_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___boxed(lean_object* v_x_833_, lean_object* v_x_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2(v_x_833_, v_x_834_);
lean_dec_ref(v_x_834_);
lean_dec_ref(v_x_833_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__3(lean_object* v_x_836_){
_start:
{
lean_object* v___x_837_; 
v___x_837_ = lean_box(0);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__3___boxed(lean_object* v_x_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__3(v_x_838_);
lean_dec_ref(v_x_838_);
return v_res_839_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4(void){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_844_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__5(void){
_start:
{
lean_object* v___f_845_; lean_object* v___f_846_; lean_object* v___f_847_; lean_object* v___f_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___f_845_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__3));
v___f_846_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__2));
v___f_847_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__1));
v___f_848_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__0));
v___x_849_ = lean_box(0);
v___x_850_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4, &l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4);
v___x_851_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_851_, 0, v___x_850_);
lean_ctor_set(v___x_851_, 1, v___x_849_);
lean_ctor_set(v___x_851_, 2, v___f_848_);
lean_ctor_set(v___x_851_, 3, v___f_847_);
lean_ctor_set(v___x_851_, 4, v___f_846_);
lean_ctor_set(v___x_851_, 5, v___f_845_);
return v___x_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg(){
_start:
{
lean_object* v___x_853_; 
v___x_853_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__5, &l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__5_once, _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__5);
return v___x_853_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___boxed(lean_object* v___dummy_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg();
return v_res_855_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___closed__0(void){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg();
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt(uint8_t v_pu_857_){
_start:
{
lean_object* v___x_858_; 
v___x_858_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDeclExt___closed__0, &l_Lean_Compiler_LCNF_instInhabitedDeclExt___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___closed__0);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDeclExt___boxed(lean_object* v_pu_859_){
_start:
{
uint8_t v_pu_boxed_860_; lean_object* v_res_861_; 
v_pu_boxed_860_ = lean_unbox(v_pu_859_);
v_res_861_ = l_Lean_Compiler_LCNF_instInhabitedDeclExt(v_pu_boxed_860_);
return v_res_861_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12(void){
_start:
{
lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_888_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__10));
v___x_889_ = l_Lean_mkAtom(v___x_888_);
return v___x_889_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13(void){
_start:
{
lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v___x_890_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__12);
v___x_891_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_892_ = lean_array_push(v___x_891_, v___x_890_);
return v___x_892_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18(void){
_start:
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__17));
v___x_902_ = l_Lean_mkAtom(v___x_901_);
return v___x_902_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19(void){
_start:
{
lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_903_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__18);
v___x_904_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_905_ = lean_array_push(v___x_904_, v___x_903_);
return v___x_905_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20(void){
_start:
{
lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; 
v___x_906_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__19);
v___x_907_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__16));
v___x_908_ = lean_box(2);
v___x_909_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_909_, 0, v___x_908_);
lean_ctor_set(v___x_909_, 1, v___x_907_);
lean_ctor_set(v___x_909_, 2, v___x_906_);
return v___x_909_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21(void){
_start:
{
lean_object* v___x_910_; lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_910_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__20);
v___x_911_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__13);
v___x_912_ = lean_array_push(v___x_911_, v___x_910_);
return v___x_912_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22(void){
_start:
{
lean_object* v___x_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; 
v___x_913_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__21);
v___x_914_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__11));
v___x_915_ = lean_box(2);
v___x_916_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_916_, 0, v___x_915_);
lean_ctor_set(v___x_916_, 1, v___x_914_);
lean_ctor_set(v___x_916_, 2, v___x_913_);
return v___x_916_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23(void){
_start:
{
lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
v___x_917_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__22);
v___x_918_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_919_ = lean_array_push(v___x_918_, v___x_917_);
return v___x_919_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24(void){
_start:
{
lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_920_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__23);
v___x_921_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__9));
v___x_922_ = lean_box(2);
v___x_923_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_923_, 0, v___x_922_);
lean_ctor_set(v___x_923_, 1, v___x_921_);
lean_ctor_set(v___x_923_, 2, v___x_920_);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25(void){
_start:
{
lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_924_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__24);
v___x_925_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_926_ = lean_array_push(v___x_925_, v___x_924_);
return v___x_926_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26(void){
_start:
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_927_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__25);
v___x_928_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__7));
v___x_929_ = lean_box(2);
v___x_930_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
lean_ctor_set(v___x_930_, 1, v___x_928_);
lean_ctor_set(v___x_930_, 2, v___x_927_);
return v___x_930_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27(void){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; 
v___x_931_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__26);
v___x_932_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__5));
v___x_933_ = lean_array_push(v___x_932_, v___x_931_);
return v___x_933_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28(void){
_start:
{
lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; 
v___x_934_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__27);
v___x_935_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__4));
v___x_936_ = lean_box(2);
v___x_937_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_937_, 0, v___x_936_);
lean_ctor_set(v___x_937_, 1, v___x_935_);
lean_ctor_set(v___x_937_, 2, v___x_934_);
return v___x_937_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1(void){
_start:
{
lean_object* v___x_938_; 
v___x_938_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28);
return v___x_938_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__0(lean_object* v_s_939_, lean_object* v_decl_940_){
_start:
{
lean_object* v_toSignature_941_; lean_object* v_name_942_; lean_object* v___x_943_; 
v_toSignature_941_ = lean_ctor_get(v_decl_940_, 0);
v_name_942_ = lean_ctor_get(v_toSignature_941_, 0);
lean_inc(v_name_942_);
v___x_943_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_s_939_, v_name_942_, v_decl_940_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1(lean_object* v_x_944_){
_start:
{
lean_object* v___x_945_; 
v___x_945_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0));
return v___x_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__1___boxed(lean_object* v_x_946_){
_start:
{
lean_object* v_res_947_; 
v_res_947_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__1(v_x_946_);
lean_dec_ref(v_x_946_);
return v_res_947_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkDeclExt___lam__2(lean_object* v___y_948_, lean_object* v___y_949_){
_start:
{
lean_object* v_toSignature_950_; lean_object* v_toSignature_951_; lean_object* v_name_952_; lean_object* v_name_953_; uint8_t v___x_954_; 
v_toSignature_950_ = lean_ctor_get(v___y_948_, 0);
v_toSignature_951_ = lean_ctor_get(v___y_949_, 0);
v_name_952_ = lean_ctor_get(v_toSignature_950_, 0);
v_name_953_ = lean_ctor_get(v_toSignature_951_, 0);
v___x_954_ = l_Lean_Name_quickLt(v_name_952_, v_name_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__2___boxed(lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
uint8_t v_res_957_; lean_object* v_r_958_; 
v_res_957_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__2(v___y_955_, v___y_956_);
lean_dec_ref(v___y_956_);
lean_dec_ref(v___y_955_);
v_r_958_ = lean_box(v_res_957_);
return v_r_958_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(lean_object* v_env_964_, uint8_t v_phase_965_, lean_object* v_as_966_, size_t v_i_967_, size_t v_stop_968_, lean_object* v_b_969_){
_start:
{
lean_object* v___y_971_; uint8_t v___x_975_; 
v___x_975_ = lean_usize_dec_eq(v_i_967_, v_stop_968_);
if (v___x_975_ == 0)
{
lean_object* v___x_976_; lean_object* v_toSignature_977_; uint8_t v_recursive_978_; lean_object* v_inlineAttr_x3f_979_; lean_object* v_name_980_; uint8_t v___x_981_; 
v___x_976_ = lean_array_uget(v_as_966_, v_i_967_);
v_toSignature_977_ = lean_ctor_get(v___x_976_, 0);
v_recursive_978_ = lean_ctor_get_uint8(v___x_976_, sizeof(void*)*3);
v_inlineAttr_x3f_979_ = lean_ctor_get(v___x_976_, 2);
v_name_980_ = lean_ctor_get(v_toSignature_977_, 0);
lean_inc_ref(v_env_964_);
v___x_981_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_964_, v_name_980_);
if (v___x_981_ == 0)
{
lean_dec(v___x_976_);
v___y_971_ = v_b_969_;
goto v___jp_970_;
}
else
{
uint8_t v___x_982_; 
lean_inc_ref(v_env_964_);
v___x_982_ = l_Lean_Compiler_LCNF_isDeclTransparent(v_env_964_, v_phase_965_, v_name_980_);
if (v___x_982_ == 0)
{
lean_object* v___x_984_; uint8_t v_isShared_985_; uint8_t v_isSharedCheck_991_; 
lean_inc(v_inlineAttr_x3f_979_);
lean_inc_ref(v_toSignature_977_);
v_isSharedCheck_991_ = !lean_is_exclusive(v___x_976_);
if (v_isSharedCheck_991_ == 0)
{
lean_object* v_unused_992_; lean_object* v_unused_993_; lean_object* v_unused_994_; 
v_unused_992_ = lean_ctor_get(v___x_976_, 2);
lean_dec(v_unused_992_);
v_unused_993_ = lean_ctor_get(v___x_976_, 1);
lean_dec(v_unused_993_);
v_unused_994_ = lean_ctor_get(v___x_976_, 0);
lean_dec(v_unused_994_);
v___x_984_ = v___x_976_;
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
else
{
lean_dec(v___x_976_);
v___x_984_ = lean_box(0);
v_isShared_985_ = v_isSharedCheck_991_;
goto v_resetjp_983_;
}
v_resetjp_983_:
{
lean_object* v___x_986_; lean_object* v___x_988_; 
v___x_986_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___closed__1));
if (v_isShared_985_ == 0)
{
lean_ctor_set(v___x_984_, 1, v___x_986_);
v___x_988_ = v___x_984_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_990_; 
v_reuseFailAlloc_990_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_990_, 0, v_toSignature_977_);
lean_ctor_set(v_reuseFailAlloc_990_, 1, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_990_, 2, v_inlineAttr_x3f_979_);
lean_ctor_set_uint8(v_reuseFailAlloc_990_, sizeof(void*)*3, v_recursive_978_);
v___x_988_ = v_reuseFailAlloc_990_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_989_; 
v___x_989_ = lean_array_push(v_b_969_, v___x_988_);
v___y_971_ = v___x_989_;
goto v___jp_970_;
}
}
}
else
{
lean_object* v___x_995_; 
v___x_995_ = lean_array_push(v_b_969_, v___x_976_);
v___y_971_ = v___x_995_;
goto v___jp_970_;
}
}
}
else
{
lean_dec_ref(v_env_964_);
return v_b_969_;
}
v___jp_970_:
{
size_t v___x_972_; size_t v___x_973_; 
v___x_972_ = ((size_t)1ULL);
v___x_973_ = lean_usize_add(v_i_967_, v___x_972_);
v_i_967_ = v___x_973_;
v_b_969_ = v___y_971_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg___boxed(lean_object* v_env_996_, lean_object* v_phase_997_, lean_object* v_as_998_, lean_object* v_i_999_, lean_object* v_stop_1000_, lean_object* v_b_1001_){
_start:
{
uint8_t v_phase_boxed_1002_; size_t v_i_boxed_1003_; size_t v_stop_boxed_1004_; lean_object* v_res_1005_; 
v_phase_boxed_1002_ = lean_unbox(v_phase_997_);
v_i_boxed_1003_ = lean_unbox_usize(v_i_999_);
lean_dec(v_i_999_);
v_stop_boxed_1004_ = lean_unbox_usize(v_stop_1000_);
lean_dec(v_stop_1000_);
v_res_1005_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_996_, v_phase_boxed_1002_, v_as_998_, v_i_boxed_1003_, v_stop_boxed_1004_, v_b_1001_);
lean_dec_ref(v_as_998_);
return v_res_1005_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(lean_object* v_env_1006_, uint8_t v_phase_1007_, uint8_t v___x_1008_, lean_object* v_as_1009_, lean_object* v_start_1010_, lean_object* v_stop_1011_){
_start:
{
lean_object* v___x_1012_; uint8_t v___x_1013_; 
v___x_1012_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__2___closed__0));
v___x_1013_ = lean_nat_dec_lt(v_start_1010_, v_stop_1011_);
if (v___x_1013_ == 0)
{
lean_dec_ref(v_env_1006_);
return v___x_1012_;
}
else
{
lean_object* v___x_1014_; uint8_t v___x_1015_; 
v___x_1014_ = lean_array_get_size(v_as_1009_);
v___x_1015_ = lean_nat_dec_le(v_stop_1011_, v___x_1014_);
if (v___x_1015_ == 0)
{
uint8_t v___x_1016_; 
v___x_1016_ = lean_nat_dec_lt(v_start_1010_, v___x_1014_);
if (v___x_1016_ == 0)
{
lean_dec_ref(v_env_1006_);
return v___x_1012_;
}
else
{
size_t v___x_1017_; size_t v___x_1018_; lean_object* v___x_1019_; 
v___x_1017_ = lean_usize_of_nat(v_start_1010_);
v___x_1018_ = lean_usize_of_nat(v___x_1014_);
v___x_1019_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_1006_, v_phase_1007_, v_as_1009_, v___x_1017_, v___x_1018_, v___x_1012_);
return v___x_1019_;
}
}
else
{
size_t v___x_1020_; size_t v___x_1021_; lean_object* v___x_1022_; 
v___x_1020_ = lean_usize_of_nat(v_start_1010_);
v___x_1021_ = lean_usize_of_nat(v_stop_1011_);
v___x_1022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_1006_, v_phase_1007_, v_as_1009_, v___x_1020_, v___x_1021_, v___x_1012_);
return v___x_1022_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0___boxed(lean_object* v_env_1023_, lean_object* v_phase_1024_, lean_object* v___x_1025_, lean_object* v_as_1026_, lean_object* v_start_1027_, lean_object* v_stop_1028_){
_start:
{
uint8_t v_phase_boxed_1029_; uint8_t v___x_1007__boxed_1030_; lean_object* v_res_1031_; 
v_phase_boxed_1029_ = lean_unbox(v_phase_1024_);
v___x_1007__boxed_1030_ = lean_unbox(v___x_1025_);
v_res_1031_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(v_env_1023_, v_phase_boxed_1029_, v___x_1007__boxed_1030_, v_as_1026_, v_start_1027_, v_stop_1028_);
lean_dec(v_stop_1028_);
lean_dec(v_start_1027_);
lean_dec_ref(v_as_1026_);
return v_res_1031_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3(uint8_t v_phase_1032_, lean_object* v___f_1033_, lean_object* v_env_1034_, lean_object* v_s_1035_){
_start:
{
uint8_t v___x_1036_; lean_object* v_all_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v_exported_1040_; lean_object* v___x_1041_; 
v___x_1036_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_1032_);
v_all_1037_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_1035_, v___f_1033_);
v___x_1038_ = lean_unsigned_to_nat(0u);
v___x_1039_ = lean_array_get_size(v_all_1037_);
v_exported_1040_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0(v_env_1034_, v_phase_1032_, v___x_1036_, v_all_1037_, v___x_1038_, v___x_1039_);
lean_inc_ref(v_exported_1040_);
v___x_1041_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1041_, 0, v_exported_1040_);
lean_ctor_set(v___x_1041_, 1, v_exported_1040_);
lean_ctor_set(v___x_1041_, 2, v_all_1037_);
return v___x_1041_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__3___boxed(lean_object* v_phase_1042_, lean_object* v___f_1043_, lean_object* v_env_1044_, lean_object* v_s_1045_){
_start:
{
uint8_t v_phase_boxed_1046_; lean_object* v_res_1047_; 
v_phase_boxed_1046_ = lean_unbox(v_phase_1042_);
v_res_1047_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__3(v_phase_boxed_1046_, v___f_1043_, v_env_1044_, v_s_1045_);
lean_dec_ref(v_s_1045_);
return v_res_1047_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4(lean_object* v___x_1048_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1048_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__4___boxed(lean_object* v___x_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__4(v___x_1051_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5(lean_object* v___x_1054_, lean_object* v_x_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v___x_1058_; 
v___x_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1054_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___lam__5___boxed(lean_object* v___x_1059_, lean_object* v_x_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v_res_1063_; 
v_res_1063_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__5(v___x_1059_, v_x_1060_, v___y_1061_);
lean_dec_ref(v___y_1061_);
lean_dec_ref(v_x_1060_);
return v_res_1063_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__3(void){
_start:
{
lean_object* v___x_1067_; 
v___x_1067_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1067_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__4(void){
_start:
{
lean_object* v___x_1068_; lean_object* v___x_1069_; 
v___x_1068_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__3, &l_Lean_Compiler_LCNF_mkDeclExt___closed__3_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__3);
v___x_1069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1069_, 0, v___x_1068_);
return v___x_1069_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__5(void){
_start:
{
lean_object* v___x_1070_; lean_object* v___f_1071_; 
v___x_1070_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__4, &l_Lean_Compiler_LCNF_mkDeclExt___closed__4_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__4);
v___f_1071_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkDeclExt___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1071_, 0, v___x_1070_);
return v___f_1071_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__6(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___f_1073_; 
v___x_1072_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__4, &l_Lean_Compiler_LCNF_mkDeclExt___closed__4_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__4);
v___f_1073_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkDeclExt___lam__5___boxed), 4, 1);
lean_closure_set(v___f_1073_, 0, v___x_1072_);
return v___f_1073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt(uint8_t v_phase_1074_, lean_object* v_name_1075_){
_start:
{
lean_object* v___f_1077_; lean_object* v___f_1078_; lean_object* v___f_1079_; lean_object* v___x_1080_; lean_object* v___f_1081_; lean_object* v___f_1082_; lean_object* v___f_1083_; uint8_t v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v___f_1077_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___closed__0));
v___f_1078_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___closed__1));
v___f_1079_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkDeclExt___closed__2));
v___x_1080_ = lean_box(v_phase_1074_);
v___f_1081_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkDeclExt___lam__3___boxed), 4, 2);
lean_closure_set(v___f_1081_, 0, v___x_1080_);
lean_closure_set(v___f_1081_, 1, v___f_1079_);
v___f_1082_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__5, &l_Lean_Compiler_LCNF_mkDeclExt___closed__5_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__5);
v___f_1083_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__6, &l_Lean_Compiler_LCNF_mkDeclExt___closed__6_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__6);
v___x_1084_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_1074_);
v___x_1085_ = lean_box(v___x_1084_);
v___x_1086_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed), 3, 2);
lean_closure_set(v___x_1086_, 0, v___x_1085_);
lean_closure_set(v___x_1086_, 1, lean_box(0));
v___x_1087_ = lean_box(0);
v___x_1088_ = lean_box(v_phase_1074_);
v___x_1089_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed), 6, 2);
lean_closure_set(v___x_1089_, 0, lean_box(0));
lean_closure_set(v___x_1089_, 1, v___x_1088_);
v___x_1090_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1090_, 0, v___x_1089_);
v___x_1091_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1091_, 0, v_name_1075_);
lean_ctor_set(v___x_1091_, 1, v___f_1082_);
lean_ctor_set(v___x_1091_, 2, v___f_1083_);
lean_ctor_set(v___x_1091_, 3, v___f_1077_);
lean_ctor_set(v___x_1091_, 4, v___f_1081_);
lean_ctor_set(v___x_1091_, 5, v___x_1086_);
lean_ctor_set(v___x_1091_, 6, v___x_1087_);
lean_ctor_set(v___x_1091_, 7, v___x_1090_);
v___x_1092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1092_, 0, v___x_1091_);
lean_ctor_set(v___x_1092_, 1, v___f_1078_);
v___x_1093_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1092_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1096_; uint8_t v_isShared_1097_; uint8_t v_isSharedCheck_1101_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1101_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1101_ == 0)
{
v___x_1096_ = v___x_1093_;
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
else
{
lean_inc(v_a_1094_);
lean_dec(v___x_1093_);
v___x_1096_ = lean_box(0);
v_isShared_1097_ = v_isSharedCheck_1101_;
goto v_resetjp_1095_;
}
v_resetjp_1095_:
{
lean_object* v___x_1099_; 
if (v_isShared_1097_ == 0)
{
v___x_1099_ = v___x_1096_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1100_; 
v_reuseFailAlloc_1100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1100_, 0, v_a_1094_);
v___x_1099_ = v_reuseFailAlloc_1100_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
return v___x_1099_;
}
}
}
else
{
lean_object* v_a_1102_; lean_object* v___x_1104_; uint8_t v_isShared_1105_; uint8_t v_isSharedCheck_1109_; 
v_a_1102_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1109_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1109_ == 0)
{
v___x_1104_ = v___x_1093_;
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
else
{
lean_inc(v_a_1102_);
lean_dec(v___x_1093_);
v___x_1104_ = lean_box(0);
v_isShared_1105_ = v_isSharedCheck_1109_;
goto v_resetjp_1103_;
}
v_resetjp_1103_:
{
lean_object* v___x_1107_; 
if (v_isShared_1105_ == 0)
{
v___x_1107_ = v___x_1104_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_a_1102_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
return v___x_1107_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkDeclExt___boxed(lean_object* v_phase_1110_, lean_object* v_name_1111_, lean_object* v___y_1112_){
_start:
{
uint8_t v_phase_boxed_1113_; lean_object* v_res_1114_; 
v_phase_boxed_1113_ = lean_unbox(v_phase_1110_);
v_res_1114_ = l_Lean_Compiler_LCNF_mkDeclExt(v_phase_boxed_1113_, v_name_1111_);
return v_res_1114_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0(lean_object* v_env_1115_, uint8_t v_phase_1116_, uint8_t v___x_1117_, lean_object* v_as_1118_, size_t v_i_1119_, size_t v_stop_1120_, lean_object* v_b_1121_){
_start:
{
lean_object* v___x_1122_; 
v___x_1122_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___redArg(v_env_1115_, v_phase_1116_, v_as_1118_, v_i_1119_, v_stop_1120_, v_b_1121_);
return v___x_1122_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0___boxed(lean_object* v_env_1123_, lean_object* v_phase_1124_, lean_object* v___x_1125_, lean_object* v_as_1126_, lean_object* v_i_1127_, lean_object* v_stop_1128_, lean_object* v_b_1129_){
_start:
{
uint8_t v_phase_boxed_1130_; uint8_t v___x_1165__boxed_1131_; size_t v_i_boxed_1132_; size_t v_stop_boxed_1133_; lean_object* v_res_1134_; 
v_phase_boxed_1130_ = lean_unbox(v_phase_1124_);
v___x_1165__boxed_1131_ = lean_unbox(v___x_1125_);
v_i_boxed_1132_ = lean_unbox_usize(v_i_1127_);
lean_dec(v_i_1127_);
v_stop_boxed_1133_ = lean_unbox_usize(v_stop_1128_);
lean_dec(v_stop_1128_);
v_res_1134_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkDeclExt_spec__0_spec__0(v_env_1123_, v_phase_boxed_1130_, v___x_1165__boxed_1131_, v_as_1126_, v_i_boxed_1132_, v_stop_boxed_1133_, v_b_1129_);
lean_dec_ref(v_as_1126_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1144_ = 0;
v___x_1145_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_));
v___x_1146_ = l_Lean_Compiler_LCNF_mkDeclExt(v___x_1144_, v___x_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2____boxed(lean_object* v___y_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_();
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1156_ = 1;
v___x_1157_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_));
v___x_1158_ = l_Lean_Compiler_LCNF_mkDeclExt(v___x_1156_, v___x_1157_);
return v___x_1158_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2____boxed(lean_object* v___y_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_();
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_(){
_start:
{
lean_object* v___f_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___f_1167_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__5, &l_Lean_Compiler_LCNF_mkDeclExt___closed__5_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__5);
v___x_1168_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_));
v___x_1169_ = lean_box(0);
v___x_1170_ = l_Lean_registerEnvExtension___redArg(v___f_1167_, v___x_1168_, v___x_1169_);
return v___x_1170_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2____boxed(lean_object* v___y_1171_){
_start:
{
lean_object* v_res_1172_; 
v_res_1172_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_();
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__0(lean_object* v_x_1173_, lean_object* v___y_1174_){
_start:
{
lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1176_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___lam__0___closed__1));
v___x_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1177_, 0, v___x_1176_);
return v___x_1177_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__0___boxed(lean_object* v_x_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
lean_object* v_res_1181_; 
v_res_1181_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__0(v_x_1178_, v___y_1179_);
lean_dec_ref(v___y_1179_);
lean_dec_ref(v_x_1178_);
return v_res_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__1(lean_object* v_s_1182_, lean_object* v_x_1183_){
_start:
{
lean_inc_ref(v_s_1182_);
return v_s_1182_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__1___boxed(lean_object* v_s_1184_, lean_object* v_x_1185_){
_start:
{
lean_object* v_res_1186_; 
v_res_1186_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__1(v_s_1184_, v_x_1185_);
lean_dec_ref(v_x_1185_);
lean_dec_ref(v_s_1184_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2(lean_object* v_x_1191_, lean_object* v_x_1192_){
_start:
{
lean_object* v___x_1193_; 
v___x_1193_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__1));
return v___x_1193_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___boxed(lean_object* v_x_1194_, lean_object* v_x_1195_){
_start:
{
lean_object* v_res_1196_; 
v_res_1196_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2(v_x_1194_, v_x_1195_);
lean_dec_ref(v_x_1195_);
lean_dec_ref(v_x_1194_);
return v_res_1196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__3(lean_object* v_x_1197_){
_start:
{
lean_object* v___x_1198_; 
v___x_1198_ = lean_box(0);
return v___x_1198_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__3___boxed(lean_object* v_x_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__3(v_x_1199_);
lean_dec_ref(v_x_1199_);
return v_res_1200_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__4(void){
_start:
{
lean_object* v___f_1205_; lean_object* v___f_1206_; lean_object* v___f_1207_; lean_object* v___f_1208_; lean_object* v___x_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v___f_1205_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__3));
v___f_1206_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__2));
v___f_1207_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__1));
v___f_1208_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__0));
v___x_1209_ = lean_box(0);
v___x_1210_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4, &l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_instInhabitedDeclExt___redArg___closed__4);
v___x_1211_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1211_, 0, v___x_1210_);
lean_ctor_set(v___x_1211_, 1, v___x_1209_);
lean_ctor_set(v___x_1211_, 2, v___f_1208_);
lean_ctor_set(v___x_1211_, 3, v___f_1207_);
lean_ctor_set(v___x_1211_, 4, v___f_1206_);
lean_ctor_set(v___x_1211_, 5, v___f_1205_);
return v___x_1211_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg(){
_start:
{
lean_object* v___x_1213_; 
v___x_1213_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__4, &l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__4_once, _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___closed__4);
return v___x_1213_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___boxed(lean_object* v___dummy_1214_){
_start:
{
lean_object* v_res_1215_; 
v_res_1215_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg();
return v_res_1215_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___closed__0(void){
_start:
{
lean_object* v___x_1216_; 
v___x_1216_ = l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg();
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt(uint8_t v_pu_1217_){
_start:
{
lean_object* v___x_1218_; 
v___x_1218_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedSigExt___closed__0, &l_Lean_Compiler_LCNF_instInhabitedSigExt___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedSigExt___closed__0);
return v___x_1218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedSigExt___boxed(lean_object* v_pu_1219_){
_start:
{
uint8_t v_pu_boxed_1220_; lean_object* v_res_1221_; 
v_pu_boxed_1220_ = lean_unbox(v_pu_1219_);
v_res_1221_ = l_Lean_Compiler_LCNF_instInhabitedSigExt(v_pu_boxed_1220_);
return v_res_1221_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg(lean_object* v_a_1222_, lean_object* v_b_1223_){
_start:
{
lean_object* v_name_1224_; lean_object* v_name_1225_; uint8_t v___x_1226_; 
v_name_1224_ = lean_ctor_get(v_a_1222_, 0);
v_name_1225_ = lean_ctor_get(v_b_1223_, 0);
v___x_1226_ = l_Lean_Name_quickLt(v_name_1224_, v_name_1225_);
return v___x_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg___boxed(lean_object* v_a_1227_, lean_object* v_b_1228_){
_start:
{
uint8_t v_res_1229_; lean_object* v_r_1230_; 
v_res_1229_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___redArg(v_a_1227_, v_b_1228_);
lean_dec_ref(v_b_1228_);
lean_dec_ref(v_a_1227_);
v_r_1230_ = lean_box(v_res_1229_);
return v_r_1230_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt(uint8_t v_pu_1231_, lean_object* v_a_1232_, lean_object* v_b_1233_){
_start:
{
lean_object* v_name_1234_; lean_object* v_name_1235_; uint8_t v___x_1236_; 
v_name_1234_ = lean_ctor_get(v_a_1232_, 0);
v_name_1235_ = lean_ctor_get(v_b_1233_, 0);
v___x_1236_ = l_Lean_Name_quickLt(v_name_1234_, v_name_1235_);
return v___x_1236_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___boxed(lean_object* v_pu_1237_, lean_object* v_a_1238_, lean_object* v_b_1239_){
_start:
{
uint8_t v_pu_boxed_1240_; uint8_t v_res_1241_; lean_object* v_r_1242_; 
v_pu_boxed_1240_ = lean_unbox(v_pu_1237_);
v_res_1241_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt(v_pu_boxed_1240_, v_a_1238_, v_b_1239_);
lean_dec_ref(v_b_1239_);
lean_dec_ref(v_a_1238_);
v_r_1242_ = lean_box(v_res_1241_);
return v_r_1242_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0(void){
_start:
{
lean_object* v_tmpSig_1243_; 
v_tmpSig_1243_ = l_Lean_Compiler_LCNF_instInhabitedSignature_default___redArg();
return v_tmpSig_1243_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f(uint8_t v_pu_1245_, lean_object* v_sigs_1246_, lean_object* v_declName_1247_){
_start:
{
lean_object* v_tmpSig_1248_; lean_object* v_levelParams_1249_; lean_object* v_type_1250_; lean_object* v_params_1251_; uint8_t v_safe_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; uint8_t v___x_1255_; 
v_tmpSig_1248_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0, &l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0_once, _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0);
v_levelParams_1249_ = lean_ctor_get(v_tmpSig_1248_, 1);
v_type_1250_ = lean_ctor_get(v_tmpSig_1248_, 2);
v_params_1251_ = lean_ctor_get(v_tmpSig_1248_, 3);
v_safe_1252_ = lean_ctor_get_uint8(v_tmpSig_1248_, sizeof(void*)*4);
v___x_1253_ = lean_unsigned_to_nat(0u);
v___x_1254_ = lean_array_get_size(v_sigs_1246_);
v___x_1255_ = lean_nat_dec_lt(v___x_1253_, v___x_1254_);
if (v___x_1255_ == 0)
{
lean_object* v___x_1256_; 
lean_dec(v_declName_1247_);
v___x_1256_ = lean_box(0);
return v___x_1256_;
}
else
{
lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1257_ = lean_unsigned_to_nat(1u);
v___x_1258_ = lean_nat_sub(v___x_1254_, v___x_1257_);
v___x_1259_ = lean_nat_dec_le(v___x_1253_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_object* v___x_1260_; 
lean_dec(v___x_1258_);
lean_dec(v_declName_1247_);
v___x_1260_ = lean_box(0);
return v___x_1260_;
}
else
{
lean_object* v_tmpSig_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; 
lean_inc_ref(v_params_1251_);
lean_inc_ref(v_type_1250_);
lean_inc(v_levelParams_1249_);
v_tmpSig_1261_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_tmpSig_1261_, 0, v_declName_1247_);
lean_ctor_set(v_tmpSig_1261_, 1, v_levelParams_1249_);
lean_ctor_set(v_tmpSig_1261_, 2, v_type_1250_);
lean_ctor_set(v_tmpSig_1261_, 3, v_params_1251_);
lean_ctor_set_uint8(v_tmpSig_1261_, sizeof(void*)*4, v_safe_1252_);
v___x_1262_ = lean_box(v_pu_1245_);
v___x_1263_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sigLt___boxed), 3, 1);
lean_closure_set(v___x_1263_, 0, v___x_1262_);
v___x_1264_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__1));
v___x_1265_ = l_Array_binSearchAux___redArg(v___x_1263_, v___x_1264_, v_sigs_1246_, v_tmpSig_1261_, v___x_1253_, v___x_1258_);
return v___x_1265_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___boxed(lean_object* v_pu_1266_, lean_object* v_sigs_1267_, lean_object* v_declName_1268_){
_start:
{
uint8_t v_pu_boxed_1269_; lean_object* v_res_1270_; 
v_pu_boxed_1269_ = lean_unbox(v_pu_1266_);
v_res_1270_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f(v_pu_boxed_1269_, v_sigs_1267_, v_declName_1268_);
lean_dec_ref(v_sigs_1267_);
return v_res_1270_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1(void){
_start:
{
lean_object* v___x_1271_; 
v___x_1271_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28, &l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1___closed__28);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__0(lean_object* v_s_1272_, lean_object* v_sig_1273_){
_start:
{
lean_object* v_name_1274_; lean_object* v___x_1275_; 
v_name_1274_ = lean_ctor_get(v_sig_1273_, 0);
lean_inc(v_name_1274_);
v___x_1275_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_s_1272_, v_name_1274_, v_sig_1273_);
return v___x_1275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1(lean_object* v_x_1276_){
_start:
{
lean_object* v___x_1277_; 
v___x_1277_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0));
return v___x_1277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1___boxed(lean_object* v_x_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__1(v_x_1278_);
lean_dec_ref(v_x_1278_);
return v_res_1279_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(lean_object* v___y_1280_, lean_object* v___y_1281_){
_start:
{
lean_object* v_name_1282_; lean_object* v_name_1283_; uint8_t v___x_1284_; 
v_name_1282_ = lean_ctor_get(v___y_1280_, 0);
v_name_1283_ = lean_ctor_get(v___y_1281_, 0);
v___x_1284_ = l_Lean_Name_quickLt(v_name_1282_, v_name_1283_);
return v___x_1284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2___boxed(lean_object* v___y_1285_, lean_object* v___y_1286_){
_start:
{
uint8_t v_res_1287_; lean_object* v_r_1288_; 
v_res_1287_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(v___y_1285_, v___y_1286_);
lean_dec_ref(v___y_1286_);
lean_dec_ref(v___y_1285_);
v_r_1288_ = lean_box(v_res_1287_);
return v_r_1288_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(lean_object* v_env_1289_, lean_object* v_as_1290_, size_t v_i_1291_, size_t v_stop_1292_, lean_object* v_b_1293_){
_start:
{
lean_object* v___y_1295_; uint8_t v___x_1299_; 
v___x_1299_ = lean_usize_dec_eq(v_i_1291_, v_stop_1292_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; lean_object* v_name_1301_; uint8_t v___x_1302_; 
v___x_1300_ = lean_array_uget_borrowed(v_as_1290_, v_i_1291_);
v_name_1301_ = lean_ctor_get(v___x_1300_, 0);
lean_inc_ref(v_env_1289_);
v___x_1302_ = l_Lean_Compiler_LCNF_isDeclPublic(v_env_1289_, v_name_1301_);
if (v___x_1302_ == 0)
{
v___y_1295_ = v_b_1293_;
goto v___jp_1294_;
}
else
{
lean_object* v___x_1303_; 
lean_inc(v___x_1300_);
v___x_1303_ = lean_array_push(v_b_1293_, v___x_1300_);
v___y_1295_ = v___x_1303_;
goto v___jp_1294_;
}
}
else
{
lean_dec_ref(v_env_1289_);
return v_b_1293_;
}
v___jp_1294_:
{
size_t v___x_1296_; size_t v___x_1297_; 
v___x_1296_ = ((size_t)1ULL);
v___x_1297_ = lean_usize_add(v_i_1291_, v___x_1296_);
v_i_1291_ = v___x_1297_;
v_b_1293_ = v___y_1295_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0___boxed(lean_object* v_env_1304_, lean_object* v_as_1305_, lean_object* v_i_1306_, lean_object* v_stop_1307_, lean_object* v_b_1308_){
_start:
{
size_t v_i_boxed_1309_; size_t v_stop_boxed_1310_; lean_object* v_res_1311_; 
v_i_boxed_1309_ = lean_unbox_usize(v_i_1306_);
lean_dec(v_i_1306_);
v_stop_boxed_1310_ = lean_unbox_usize(v_stop_1307_);
lean_dec(v_stop_1307_);
v_res_1311_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(v_env_1304_, v_as_1305_, v_i_boxed_1309_, v_stop_boxed_1310_, v_b_1308_);
lean_dec_ref(v_as_1305_);
return v_res_1311_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(lean_object* v_env_1312_, lean_object* v_as_1313_, lean_object* v_start_1314_, lean_object* v_stop_1315_){
_start:
{
lean_object* v___x_1316_; uint8_t v___x_1317_; 
v___x_1316_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedSigExt___redArg___lam__2___closed__0));
v___x_1317_ = lean_nat_dec_lt(v_start_1314_, v_stop_1315_);
if (v___x_1317_ == 0)
{
lean_dec_ref(v_env_1312_);
return v___x_1316_;
}
else
{
lean_object* v___x_1318_; uint8_t v___x_1319_; 
v___x_1318_ = lean_array_get_size(v_as_1313_);
v___x_1319_ = lean_nat_dec_le(v_stop_1315_, v___x_1318_);
if (v___x_1319_ == 0)
{
uint8_t v___x_1320_; 
v___x_1320_ = lean_nat_dec_lt(v_start_1314_, v___x_1318_);
if (v___x_1320_ == 0)
{
lean_dec_ref(v_env_1312_);
return v___x_1316_;
}
else
{
size_t v___x_1321_; size_t v___x_1322_; lean_object* v___x_1323_; 
v___x_1321_ = lean_usize_of_nat(v_start_1314_);
v___x_1322_ = lean_usize_of_nat(v___x_1318_);
v___x_1323_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(v_env_1312_, v_as_1313_, v___x_1321_, v___x_1322_, v___x_1316_);
return v___x_1323_;
}
}
else
{
size_t v___x_1324_; size_t v___x_1325_; lean_object* v___x_1326_; 
v___x_1324_ = lean_usize_of_nat(v_start_1314_);
v___x_1325_ = lean_usize_of_nat(v_stop_1315_);
v___x_1326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0_spec__0(v_env_1312_, v_as_1313_, v___x_1324_, v___x_1325_, v___x_1316_);
return v___x_1326_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0___boxed(lean_object* v_env_1327_, lean_object* v_as_1328_, lean_object* v_start_1329_, lean_object* v_stop_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(v_env_1327_, v_as_1328_, v_start_1329_, v_stop_1330_);
lean_dec(v_stop_1330_);
lean_dec(v_start_1329_);
lean_dec_ref(v_as_1328_);
return v_res_1331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3(lean_object* v___f_1332_, lean_object* v_env_1333_, lean_object* v_s_1334_){
_start:
{
lean_object* v_all_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v_exported_1338_; lean_object* v___x_1339_; 
v_all_1335_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries___redArg(v_s_1334_, v___f_1332_);
v___x_1336_ = lean_unsigned_to_nat(0u);
v___x_1337_ = lean_array_get_size(v_all_1335_);
v_exported_1338_ = l_Array_filterMapM___at___00Lean_Compiler_LCNF_mkSigDeclExt_spec__0(v_env_1333_, v_all_1335_, v___x_1336_, v___x_1337_);
lean_inc_ref(v_exported_1338_);
v___x_1339_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1339_, 0, v_exported_1338_);
lean_ctor_set(v___x_1339_, 1, v_exported_1338_);
lean_ctor_set(v___x_1339_, 2, v_all_1335_);
return v___x_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3___boxed(lean_object* v___f_1340_, lean_object* v_env_1341_, lean_object* v_s_1342_){
_start:
{
lean_object* v_res_1343_; 
v_res_1343_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__3(v___f_1340_, v_env_1341_, v_s_1342_);
lean_dec_ref(v_s_1342_);
return v_res_1343_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4(lean_object* v___x_1344_){
_start:
{
lean_object* v___x_1346_; 
v___x_1346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1346_, 0, v___x_1344_);
return v___x_1346_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4___boxed(lean_object* v___x_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4(v___x_1347_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5(lean_object* v___x_1350_, lean_object* v_x_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v___x_1354_; 
v___x_1354_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1354_, 0, v___x_1350_);
return v___x_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5___boxed(lean_object* v___x_1355_, lean_object* v_x_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v_res_1359_; 
v_res_1359_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5(v___x_1355_, v_x_1356_, v___y_1357_);
lean_dec_ref(v___y_1357_);
lean_dec_ref(v_x_1356_);
return v_res_1359_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4(void){
_start:
{
lean_object* v___x_1365_; lean_object* v___x_1366_; 
v___x_1365_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__3, &l_Lean_Compiler_LCNF_mkDeclExt___closed__3_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__3);
v___x_1366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1366_, 0, v___x_1365_);
return v___x_1366_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5(void){
_start:
{
lean_object* v___x_1367_; lean_object* v___f_1368_; 
v___x_1367_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4);
v___f_1368_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkSigDeclExt___lam__4___boxed), 2, 1);
lean_closure_set(v___f_1368_, 0, v___x_1367_);
return v___f_1368_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6(void){
_start:
{
lean_object* v___x_1369_; lean_object* v___f_1370_; 
v___x_1369_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__4);
v___f_1370_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_mkSigDeclExt___lam__5___boxed), 4, 1);
lean_closure_set(v___f_1370_, 0, v___x_1369_);
return v___f_1370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt(uint8_t v_phase_1371_, lean_object* v_name_1372_){
_start:
{
lean_object* v___f_1374_; lean_object* v___f_1375_; lean_object* v___f_1376_; lean_object* v___f_1377_; lean_object* v___f_1378_; uint8_t v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___f_1374_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkSigDeclExt___closed__0));
v___f_1375_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkSigDeclExt___closed__1));
v___f_1376_ = ((lean_object*)(l_Lean_Compiler_LCNF_mkSigDeclExt___closed__3));
v___f_1377_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__5);
v___f_1378_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6, &l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6_once, _init_l_Lean_Compiler_LCNF_mkSigDeclExt___closed__6);
v___x_1379_ = l_Lean_Compiler_LCNF_Phase_toPurity(v_phase_1371_);
v___x_1380_ = lean_box(v___x_1379_);
v___x_1381_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_statsFn___boxed), 3, 2);
lean_closure_set(v___x_1381_, 0, v___x_1380_);
lean_closure_set(v___x_1381_, 1, lean_box(0));
v___x_1382_ = lean_box(0);
v___x_1383_ = lean_box(v_phase_1371_);
v___x_1384_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn___boxed), 6, 2);
lean_closure_set(v___x_1384_, 0, lean_box(0));
lean_closure_set(v___x_1384_, 1, v___x_1383_);
v___x_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1385_, 0, v___x_1384_);
v___x_1386_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_1386_, 0, v_name_1372_);
lean_ctor_set(v___x_1386_, 1, v___f_1377_);
lean_ctor_set(v___x_1386_, 2, v___f_1378_);
lean_ctor_set(v___x_1386_, 3, v___f_1374_);
lean_ctor_set(v___x_1386_, 4, v___f_1376_);
lean_ctor_set(v___x_1386_, 5, v___x_1381_);
lean_ctor_set(v___x_1386_, 6, v___x_1382_);
lean_ctor_set(v___x_1386_, 7, v___x_1385_);
v___x_1387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1387_, 0, v___x_1386_);
lean_ctor_set(v___x_1387_, 1, v___f_1375_);
v___x_1388_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_1387_);
if (lean_obj_tag(v___x_1388_) == 0)
{
lean_object* v_a_1389_; lean_object* v___x_1391_; uint8_t v_isShared_1392_; uint8_t v_isSharedCheck_1396_; 
v_a_1389_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1396_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1396_ == 0)
{
v___x_1391_ = v___x_1388_;
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
else
{
lean_inc(v_a_1389_);
lean_dec(v___x_1388_);
v___x_1391_ = lean_box(0);
v_isShared_1392_ = v_isSharedCheck_1396_;
goto v_resetjp_1390_;
}
v_resetjp_1390_:
{
lean_object* v___x_1394_; 
if (v_isShared_1392_ == 0)
{
v___x_1394_ = v___x_1391_;
goto v_reusejp_1393_;
}
else
{
lean_object* v_reuseFailAlloc_1395_; 
v_reuseFailAlloc_1395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1395_, 0, v_a_1389_);
v___x_1394_ = v_reuseFailAlloc_1395_;
goto v_reusejp_1393_;
}
v_reusejp_1393_:
{
return v___x_1394_;
}
}
}
else
{
lean_object* v_a_1397_; lean_object* v___x_1399_; uint8_t v_isShared_1400_; uint8_t v_isSharedCheck_1404_; 
v_a_1397_ = lean_ctor_get(v___x_1388_, 0);
v_isSharedCheck_1404_ = !lean_is_exclusive(v___x_1388_);
if (v_isSharedCheck_1404_ == 0)
{
v___x_1399_ = v___x_1388_;
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
else
{
lean_inc(v_a_1397_);
lean_dec(v___x_1388_);
v___x_1399_ = lean_box(0);
v_isShared_1400_ = v_isSharedCheck_1404_;
goto v_resetjp_1398_;
}
v_resetjp_1398_:
{
lean_object* v___x_1402_; 
if (v_isShared_1400_ == 0)
{
v___x_1402_ = v___x_1399_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1403_; 
v_reuseFailAlloc_1403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1403_, 0, v_a_1397_);
v___x_1402_ = v_reuseFailAlloc_1403_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
return v___x_1402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_mkSigDeclExt___boxed(lean_object* v_phase_1405_, lean_object* v_name_1406_, lean_object* v___y_1407_){
_start:
{
uint8_t v_phase_boxed_1408_; lean_object* v_res_1409_; 
v_phase_boxed_1408_ = lean_unbox(v_phase_1405_);
v_res_1409_ = l_Lean_Compiler_LCNF_mkSigDeclExt(v_phase_boxed_1408_, v_name_1406_);
return v_res_1409_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_(){
_start:
{
uint8_t v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; 
v___x_1417_ = 2;
v___x_1418_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_));
v___x_1419_ = l_Lean_Compiler_LCNF_mkSigDeclExt(v___x_1417_, v___x_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2____boxed(lean_object* v___y_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_();
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(lean_object* v_as_1422_, lean_object* v_k_1423_, lean_object* v_x_1424_, lean_object* v_x_1425_){
_start:
{
lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v_m_1428_; lean_object* v_a_1429_; uint8_t v___x_1430_; 
v___x_1426_ = lean_nat_add(v_x_1424_, v_x_1425_);
v___x_1427_ = lean_unsigned_to_nat(1u);
v_m_1428_ = lean_nat_shiftr(v___x_1426_, v___x_1427_);
lean_dec(v___x_1426_);
v_a_1429_ = lean_array_fget_borrowed(v_as_1422_, v_m_1428_);
v___x_1430_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__2(v_a_1429_, v_k_1423_);
if (v___x_1430_ == 0)
{
uint8_t v___x_1431_; 
lean_dec(v_x_1425_);
v___x_1431_ = l_Lean_Compiler_LCNF_mkDeclExt___lam__2(v_k_1423_, v_a_1429_);
if (v___x_1431_ == 0)
{
lean_object* v___x_1432_; 
lean_dec(v_m_1428_);
lean_dec(v_x_1424_);
lean_inc(v_a_1429_);
v___x_1432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1432_, 0, v_a_1429_);
return v___x_1432_;
}
else
{
lean_object* v___x_1433_; uint8_t v___x_1434_; lean_object* v___x_1435_; uint8_t v___y_1437_; 
v___x_1433_ = lean_unsigned_to_nat(0u);
v___x_1434_ = lean_nat_dec_eq(v_m_1428_, v___x_1433_);
v___x_1435_ = lean_nat_sub(v_m_1428_, v___x_1427_);
lean_dec(v_m_1428_);
if (v___x_1434_ == 0)
{
uint8_t v___x_1440_; 
v___x_1440_ = lean_nat_dec_lt(v___x_1435_, v_x_1424_);
v___y_1437_ = v___x_1440_;
goto v___jp_1436_;
}
else
{
v___y_1437_ = v___x_1434_;
goto v___jp_1436_;
}
v___jp_1436_:
{
if (v___y_1437_ == 0)
{
v_x_1425_ = v___x_1435_;
goto _start;
}
else
{
lean_object* v___x_1439_; 
lean_dec(v___x_1435_);
lean_dec(v_x_1424_);
v___x_1439_ = lean_box(0);
return v___x_1439_;
}
}
}
}
else
{
lean_object* v___x_1441_; uint8_t v___x_1442_; 
lean_dec(v_x_1424_);
v___x_1441_ = lean_nat_add(v_m_1428_, v___x_1427_);
lean_dec(v_m_1428_);
v___x_1442_ = lean_nat_dec_le(v___x_1441_, v_x_1425_);
if (v___x_1442_ == 0)
{
lean_object* v___x_1443_; 
lean_dec(v___x_1441_);
lean_dec(v_x_1425_);
v___x_1443_ = lean_box(0);
return v___x_1443_;
}
else
{
v_x_1424_ = v___x_1441_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg___boxed(lean_object* v_as_1445_, lean_object* v_k_1446_, lean_object* v_x_1447_, lean_object* v_x_1448_){
_start:
{
lean_object* v_res_1449_; 
v_res_1449_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v_as_1445_, v_k_1446_, v_x_1447_, v_x_1448_);
lean_dec_ref(v_k_1446_);
lean_dec_ref(v_as_1445_);
return v_res_1449_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_1450_, lean_object* v_vals_1451_, lean_object* v_i_1452_, lean_object* v_k_1453_){
_start:
{
lean_object* v___x_1454_; uint8_t v___x_1455_; 
v___x_1454_ = lean_array_get_size(v_keys_1450_);
v___x_1455_ = lean_nat_dec_lt(v_i_1452_, v___x_1454_);
if (v___x_1455_ == 0)
{
lean_object* v___x_1456_; 
lean_dec(v_i_1452_);
v___x_1456_ = lean_box(0);
return v___x_1456_;
}
else
{
lean_object* v_k_x27_1457_; uint8_t v___x_1458_; 
v_k_x27_1457_ = lean_array_fget_borrowed(v_keys_1450_, v_i_1452_);
v___x_1458_ = lean_name_eq(v_k_1453_, v_k_x27_1457_);
if (v___x_1458_ == 0)
{
lean_object* v___x_1459_; lean_object* v___x_1460_; 
v___x_1459_ = lean_unsigned_to_nat(1u);
v___x_1460_ = lean_nat_add(v_i_1452_, v___x_1459_);
lean_dec(v_i_1452_);
v_i_1452_ = v___x_1460_;
goto _start;
}
else
{
lean_object* v___x_1462_; lean_object* v___x_1463_; 
v___x_1462_ = lean_array_fget_borrowed(v_vals_1451_, v_i_1452_);
lean_dec(v_i_1452_);
lean_inc(v___x_1462_);
v___x_1463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1463_, 0, v___x_1462_);
return v___x_1463_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_1464_, lean_object* v_vals_1465_, lean_object* v_i_1466_, lean_object* v_k_1467_){
_start:
{
lean_object* v_res_1468_; 
v_res_1468_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1464_, v_vals_1465_, v_i_1466_, v_k_1467_);
lean_dec(v_k_1467_);
lean_dec_ref(v_vals_1465_);
lean_dec_ref(v_keys_1464_);
return v_res_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(lean_object* v_x_1469_, size_t v_x_1470_, lean_object* v_x_1471_){
_start:
{
if (lean_obj_tag(v_x_1469_) == 0)
{
lean_object* v_es_1472_; lean_object* v___x_1473_; size_t v___x_1474_; size_t v___x_1475_; lean_object* v_j_1476_; lean_object* v___x_1477_; 
v_es_1472_ = lean_ctor_get(v_x_1469_, 0);
v___x_1473_ = lean_box(2);
v___x_1474_ = ((size_t)31ULL);
v___x_1475_ = lean_usize_land(v_x_1470_, v___x_1474_);
v_j_1476_ = lean_usize_to_nat(v___x_1475_);
v___x_1477_ = lean_array_get_borrowed(v___x_1473_, v_es_1472_, v_j_1476_);
lean_dec(v_j_1476_);
switch(lean_obj_tag(v___x_1477_))
{
case 0:
{
lean_object* v_key_1478_; lean_object* v_val_1479_; uint8_t v___x_1480_; 
v_key_1478_ = lean_ctor_get(v___x_1477_, 0);
v_val_1479_ = lean_ctor_get(v___x_1477_, 1);
v___x_1480_ = lean_name_eq(v_x_1471_, v_key_1478_);
if (v___x_1480_ == 0)
{
lean_object* v___x_1481_; 
v___x_1481_ = lean_box(0);
return v___x_1481_;
}
else
{
lean_object* v___x_1482_; 
lean_inc(v_val_1479_);
v___x_1482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1482_, 0, v_val_1479_);
return v___x_1482_;
}
}
case 1:
{
lean_object* v_node_1483_; size_t v___x_1484_; size_t v___x_1485_; 
v_node_1483_ = lean_ctor_get(v___x_1477_, 0);
v___x_1484_ = ((size_t)5ULL);
v___x_1485_ = lean_usize_shift_right(v_x_1470_, v___x_1484_);
v_x_1469_ = v_node_1483_;
v_x_1470_ = v___x_1485_;
goto _start;
}
default: 
{
lean_object* v___x_1487_; 
v___x_1487_ = lean_box(0);
return v___x_1487_;
}
}
}
else
{
lean_object* v_ks_1488_; lean_object* v_vs_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; 
v_ks_1488_ = lean_ctor_get(v_x_1469_, 0);
v_vs_1489_ = lean_ctor_get(v_x_1469_, 1);
v___x_1490_ = lean_unsigned_to_nat(0u);
v___x_1491_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(v_ks_1488_, v_vs_1489_, v___x_1490_, v_x_1471_);
return v___x_1491_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_1492_, lean_object* v_x_1493_, lean_object* v_x_1494_){
_start:
{
size_t v_x_456__boxed_1495_; lean_object* v_res_1496_; 
v_x_456__boxed_1495_ = lean_unbox_usize(v_x_1493_);
lean_dec(v_x_1493_);
v_res_1496_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(v_x_1492_, v_x_456__boxed_1495_, v_x_1494_);
lean_dec(v_x_1494_);
lean_dec_ref(v_x_1492_);
return v_res_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(lean_object* v_x_1497_, lean_object* v_x_1498_){
_start:
{
uint64_t v___y_1500_; 
if (lean_obj_tag(v_x_1498_) == 0)
{
uint64_t v___x_1503_; 
v___x_1503_ = 1723ULL;
v___y_1500_ = v___x_1503_;
goto v___jp_1499_;
}
else
{
uint64_t v_hash_1504_; 
v_hash_1504_ = lean_ctor_get_uint64(v_x_1498_, sizeof(void*)*2);
v___y_1500_ = v_hash_1504_;
goto v___jp_1499_;
}
v___jp_1499_:
{
size_t v___x_1501_; lean_object* v___x_1502_; 
v___x_1501_ = lean_uint64_to_usize(v___y_1500_);
v___x_1502_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(v_x_1497_, v___x_1501_, v_x_1498_);
return v___x_1502_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg___boxed(lean_object* v_x_1505_, lean_object* v_x_1506_){
_start:
{
lean_object* v_res_1507_; 
v_res_1507_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v_x_1505_, v_x_1506_);
lean_dec(v_x_1506_);
lean_dec_ref(v_x_1505_);
return v_res_1507_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0(void){
_start:
{
lean_object* v___x_1508_; 
v___x_1508_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg(lean_object* v_env_1509_, lean_object* v_ext_1510_, lean_object* v_declName_1511_){
_start:
{
lean_object* v___x_1512_; lean_object* v___x_1519_; 
v___x_1512_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0, &l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0);
v___x_1519_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1509_, v_declName_1511_);
if (lean_obj_tag(v___x_1519_) == 0)
{
goto v___jp_1513_;
}
else
{
lean_object* v_val_1520_; lean_object* v_tmpDecl_1542_; lean_object* v_toSignature_1543_; lean_object* v_value_1544_; uint8_t v_recursive_1545_; lean_object* v_inlineAttr_x3f_1546_; lean_object* v_levelParams_1547_; lean_object* v_type_1548_; lean_object* v_params_1549_; uint8_t v_safe_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; uint8_t v___x_1554_; 
v_val_1520_ = lean_ctor_get(v___x_1519_, 0);
lean_inc(v_val_1520_);
lean_dec_ref_known(v___x_1519_, 1);
v_tmpDecl_1542_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0, &l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0_once, _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0);
v_toSignature_1543_ = lean_ctor_get(v_tmpDecl_1542_, 0);
v_value_1544_ = lean_ctor_get(v_tmpDecl_1542_, 1);
v_recursive_1545_ = lean_ctor_get_uint8(v_tmpDecl_1542_, sizeof(void*)*3);
v_inlineAttr_x3f_1546_ = lean_ctor_get(v_tmpDecl_1542_, 2);
v_levelParams_1547_ = lean_ctor_get(v_toSignature_1543_, 1);
v_type_1548_ = lean_ctor_get(v_toSignature_1543_, 2);
v_params_1549_ = lean_ctor_get(v_toSignature_1543_, 3);
v_safe_1550_ = lean_ctor_get_uint8(v_toSignature_1543_, sizeof(void*)*4);
v___x_1551_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1512_, v_ext_1510_, v_env_1509_, v_val_1520_);
v___x_1552_ = lean_unsigned_to_nat(0u);
v___x_1553_ = lean_array_get_size(v___x_1551_);
v___x_1554_ = lean_nat_dec_lt(v___x_1552_, v___x_1553_);
if (v___x_1554_ == 0)
{
lean_dec_ref(v___x_1551_);
goto v___jp_1521_;
}
else
{
lean_object* v___x_1555_; lean_object* v___x_1556_; uint8_t v___x_1557_; 
v___x_1555_ = lean_unsigned_to_nat(1u);
v___x_1556_ = lean_nat_sub(v___x_1553_, v___x_1555_);
v___x_1557_ = lean_nat_dec_le(v___x_1552_, v___x_1556_);
if (v___x_1557_ == 0)
{
lean_dec(v___x_1556_);
lean_dec_ref(v___x_1551_);
goto v___jp_1521_;
}
else
{
lean_object* v___x_1558_; lean_object* v_tmpDecl_1559_; lean_object* v___x_1560_; 
lean_inc_ref(v_params_1549_);
lean_inc_ref(v_type_1548_);
lean_inc(v_levelParams_1547_);
lean_inc(v_declName_1511_);
v___x_1558_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1558_, 0, v_declName_1511_);
lean_ctor_set(v___x_1558_, 1, v_levelParams_1547_);
lean_ctor_set(v___x_1558_, 2, v_type_1548_);
lean_ctor_set(v___x_1558_, 3, v_params_1549_);
lean_ctor_set_uint8(v___x_1558_, sizeof(void*)*4, v_safe_1550_);
lean_inc(v_inlineAttr_x3f_1546_);
lean_inc_ref(v_value_1544_);
v_tmpDecl_1559_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_tmpDecl_1559_, 0, v___x_1558_);
lean_ctor_set(v_tmpDecl_1559_, 1, v_value_1544_);
lean_ctor_set(v_tmpDecl_1559_, 2, v_inlineAttr_x3f_1546_);
lean_ctor_set_uint8(v_tmpDecl_1559_, sizeof(void*)*3, v_recursive_1545_);
v___x_1560_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v___x_1551_, v_tmpDecl_1559_, v___x_1552_, v___x_1556_);
lean_dec_ref_known(v_tmpDecl_1559_, 3);
lean_dec_ref(v___x_1551_);
if (lean_obj_tag(v___x_1560_) == 0)
{
goto v___jp_1521_;
}
else
{
lean_dec(v_val_1520_);
lean_dec(v_declName_1511_);
lean_dec_ref(v_env_1509_);
return v___x_1560_;
}
}
}
v___jp_1521_:
{
lean_object* v_tmpDecl_1522_; lean_object* v_toSignature_1523_; lean_object* v_value_1524_; uint8_t v_recursive_1525_; lean_object* v_inlineAttr_x3f_1526_; lean_object* v_levelParams_1527_; lean_object* v_type_1528_; lean_object* v_params_1529_; uint8_t v_safe_1530_; uint8_t v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; uint8_t v___x_1535_; 
v_tmpDecl_1522_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0, &l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0_once, _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findDeclAtSorted_x3f___closed__0);
v_toSignature_1523_ = lean_ctor_get(v_tmpDecl_1522_, 0);
v_value_1524_ = lean_ctor_get(v_tmpDecl_1522_, 1);
v_recursive_1525_ = lean_ctor_get_uint8(v_tmpDecl_1522_, sizeof(void*)*3);
v_inlineAttr_x3f_1526_ = lean_ctor_get(v_tmpDecl_1522_, 2);
v_levelParams_1527_ = lean_ctor_get(v_toSignature_1523_, 1);
v_type_1528_ = lean_ctor_get(v_toSignature_1523_, 2);
v_params_1529_ = lean_ctor_get(v_toSignature_1523_, 3);
v_safe_1530_ = lean_ctor_get_uint8(v_toSignature_1523_, sizeof(void*)*4);
v___x_1531_ = 0;
v___x_1532_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1512_, v_ext_1510_, v_env_1509_, v_val_1520_, v___x_1531_);
lean_dec(v_val_1520_);
v___x_1533_ = lean_unsigned_to_nat(0u);
v___x_1534_ = lean_array_get_size(v___x_1532_);
v___x_1535_ = lean_nat_dec_lt(v___x_1533_, v___x_1534_);
if (v___x_1535_ == 0)
{
lean_dec_ref(v___x_1532_);
goto v___jp_1513_;
}
else
{
lean_object* v___x_1536_; lean_object* v___x_1537_; uint8_t v___x_1538_; 
v___x_1536_ = lean_unsigned_to_nat(1u);
v___x_1537_ = lean_nat_sub(v___x_1534_, v___x_1536_);
v___x_1538_ = lean_nat_dec_le(v___x_1533_, v___x_1537_);
if (v___x_1538_ == 0)
{
lean_dec(v___x_1537_);
lean_dec_ref(v___x_1532_);
goto v___jp_1513_;
}
else
{
lean_object* v___x_1539_; lean_object* v_tmpDecl_1540_; lean_object* v___x_1541_; 
lean_inc_ref(v_params_1529_);
lean_inc_ref(v_type_1528_);
lean_inc(v_levelParams_1527_);
lean_inc(v_declName_1511_);
v___x_1539_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v___x_1539_, 0, v_declName_1511_);
lean_ctor_set(v___x_1539_, 1, v_levelParams_1527_);
lean_ctor_set(v___x_1539_, 2, v_type_1528_);
lean_ctor_set(v___x_1539_, 3, v_params_1529_);
lean_ctor_set_uint8(v___x_1539_, sizeof(void*)*4, v_safe_1530_);
lean_inc(v_inlineAttr_x3f_1526_);
lean_inc_ref(v_value_1524_);
v_tmpDecl_1540_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_tmpDecl_1540_, 0, v___x_1539_);
lean_ctor_set(v_tmpDecl_1540_, 1, v_value_1524_);
lean_ctor_set(v_tmpDecl_1540_, 2, v_inlineAttr_x3f_1526_);
lean_ctor_set_uint8(v_tmpDecl_1540_, sizeof(void*)*3, v_recursive_1525_);
v___x_1541_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v___x_1532_, v_tmpDecl_1540_, v___x_1533_, v___x_1537_);
lean_dec_ref_known(v_tmpDecl_1540_, 3);
lean_dec_ref(v___x_1532_);
if (lean_obj_tag(v___x_1541_) == 0)
{
goto v___jp_1513_;
}
else
{
lean_dec(v_declName_1511_);
lean_dec_ref(v_env_1509_);
return v___x_1541_;
}
}
}
}
}
v___jp_1513_:
{
lean_object* v_toEnvExtension_1514_; lean_object* v_asyncMode_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v_toEnvExtension_1514_ = lean_ctor_get(v_ext_1510_, 0);
v_asyncMode_1515_ = lean_ctor_get(v_toEnvExtension_1514_, 2);
v___x_1516_ = lean_box(0);
v___x_1517_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1512_, v_ext_1510_, v_env_1509_, v_asyncMode_1515_, v___x_1516_);
v___x_1518_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_1517_, v_declName_1511_);
lean_dec(v_declName_1511_);
lean_dec(v___x_1517_);
return v___x_1518_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___boxed(lean_object* v_env_1561_, lean_object* v_ext_1562_, lean_object* v_declName_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg(v_env_1561_, v_ext_1562_, v_declName_1563_);
lean_dec_ref(v_ext_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f(uint8_t v_pu_1565_, lean_object* v_env_1566_, lean_object* v_ext_1567_, lean_object* v_declName_1568_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg(v_env_1566_, v_ext_1567_, v_declName_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclCore_x3f___boxed(lean_object* v_pu_1570_, lean_object* v_env_1571_, lean_object* v_ext_1572_, lean_object* v_declName_1573_){
_start:
{
uint8_t v_pu_boxed_1574_; lean_object* v_res_1575_; 
v_pu_boxed_1574_ = lean_unbox(v_pu_1570_);
v_res_1575_ = l_Lean_Compiler_LCNF_getDeclCore_x3f(v_pu_boxed_1574_, v_env_1571_, v_ext_1572_, v_declName_1573_);
lean_dec_ref(v_ext_1572_);
return v_res_1575_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0(lean_object* v_00_u03b2_1576_, lean_object* v_x_1577_, lean_object* v_x_1578_){
_start:
{
lean_object* v___x_1579_; 
v___x_1579_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v_x_1577_, v_x_1578_);
return v___x_1579_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___boxed(lean_object* v_00_u03b2_1580_, lean_object* v_x_1581_, lean_object* v_x_1582_){
_start:
{
lean_object* v_res_1583_; 
v_res_1583_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0(v_00_u03b2_1580_, v_x_1581_, v_x_1582_);
lean_dec(v_x_1582_);
lean_dec_ref(v_x_1581_);
return v_res_1583_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1(lean_object* v_as_1584_, lean_object* v_k_1585_, lean_object* v_x_1586_, lean_object* v_x_1587_, lean_object* v_x_1588_){
_start:
{
lean_object* v___x_1589_; 
v___x_1589_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___redArg(v_as_1584_, v_k_1585_, v_x_1586_, v_x_1587_);
return v___x_1589_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1___boxed(lean_object* v_as_1590_, lean_object* v_k_1591_, lean_object* v_x_1592_, lean_object* v_x_1593_, lean_object* v_x_1594_){
_start:
{
lean_object* v_res_1595_; 
v_res_1595_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__1(v_as_1590_, v_k_1591_, v_x_1592_, v_x_1593_, v_x_1594_);
lean_dec_ref(v_k_1591_);
lean_dec_ref(v_as_1590_);
return v_res_1595_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1596_, lean_object* v_x_1597_, size_t v_x_1598_, lean_object* v_x_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___redArg(v_x_1597_, v_x_1598_, v_x_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1601_, lean_object* v_x_1602_, lean_object* v_x_1603_, lean_object* v_x_1604_){
_start:
{
size_t v_x_599__boxed_1605_; lean_object* v_res_1606_; 
v_x_599__boxed_1605_ = lean_unbox_usize(v_x_1603_);
lean_dec(v_x_1603_);
v_res_1606_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0(v_00_u03b2_1601_, v_x_1602_, v_x_599__boxed_1605_, v_x_1604_);
lean_dec(v_x_1604_);
lean_dec_ref(v_x_1602_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1607_, lean_object* v_keys_1608_, lean_object* v_vals_1609_, lean_object* v_heq_1610_, lean_object* v_i_1611_, lean_object* v_k_1612_){
_start:
{
lean_object* v___x_1613_; 
v___x_1613_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___redArg(v_keys_1608_, v_vals_1609_, v_i_1611_, v_k_1612_);
return v___x_1613_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1614_, lean_object* v_keys_1615_, lean_object* v_vals_1616_, lean_object* v_heq_1617_, lean_object* v_i_1618_, lean_object* v_k_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0_spec__0_spec__1(v_00_u03b2_1614_, v_keys_1615_, v_vals_1616_, v_heq_1617_, v_i_1618_, v_k_1619_);
lean_dec(v_k_1619_);
lean_dec_ref(v_vals_1616_);
lean_dec_ref(v_keys_1615_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(lean_object* v_as_1621_, lean_object* v_k_1622_, lean_object* v_x_1623_, lean_object* v_x_1624_){
_start:
{
lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v_m_1627_; lean_object* v_a_1628_; uint8_t v___x_1629_; 
v___x_1625_ = lean_nat_add(v_x_1623_, v_x_1624_);
v___x_1626_ = lean_unsigned_to_nat(1u);
v_m_1627_ = lean_nat_shiftr(v___x_1625_, v___x_1626_);
lean_dec(v___x_1625_);
v_a_1628_ = lean_array_fget_borrowed(v_as_1621_, v_m_1627_);
v___x_1629_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(v_a_1628_, v_k_1622_);
if (v___x_1629_ == 0)
{
uint8_t v___x_1630_; 
lean_dec(v_x_1624_);
v___x_1630_ = l_Lean_Compiler_LCNF_mkSigDeclExt___lam__2(v_k_1622_, v_a_1628_);
if (v___x_1630_ == 0)
{
lean_object* v___x_1631_; 
lean_dec(v_m_1627_);
lean_dec(v_x_1623_);
lean_inc(v_a_1628_);
v___x_1631_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1631_, 0, v_a_1628_);
return v___x_1631_;
}
else
{
lean_object* v___x_1632_; uint8_t v___x_1633_; lean_object* v___x_1634_; uint8_t v___y_1636_; 
v___x_1632_ = lean_unsigned_to_nat(0u);
v___x_1633_ = lean_nat_dec_eq(v_m_1627_, v___x_1632_);
v___x_1634_ = lean_nat_sub(v_m_1627_, v___x_1626_);
lean_dec(v_m_1627_);
if (v___x_1633_ == 0)
{
uint8_t v___x_1639_; 
v___x_1639_ = lean_nat_dec_lt(v___x_1634_, v_x_1623_);
v___y_1636_ = v___x_1639_;
goto v___jp_1635_;
}
else
{
v___y_1636_ = v___x_1633_;
goto v___jp_1635_;
}
v___jp_1635_:
{
if (v___y_1636_ == 0)
{
v_x_1624_ = v___x_1634_;
goto _start;
}
else
{
lean_object* v___x_1638_; 
lean_dec(v___x_1634_);
lean_dec(v_x_1623_);
v___x_1638_ = lean_box(0);
return v___x_1638_;
}
}
}
}
else
{
lean_object* v___x_1640_; uint8_t v___x_1641_; 
lean_dec(v_x_1623_);
v___x_1640_ = lean_nat_add(v_m_1627_, v___x_1626_);
lean_dec(v_m_1627_);
v___x_1641_ = lean_nat_dec_le(v___x_1640_, v_x_1624_);
if (v___x_1641_ == 0)
{
lean_object* v___x_1642_; 
lean_dec(v___x_1640_);
lean_dec(v_x_1624_);
v___x_1642_ = lean_box(0);
return v___x_1642_;
}
else
{
v_x_1623_ = v___x_1640_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg___boxed(lean_object* v_as_1644_, lean_object* v_k_1645_, lean_object* v_x_1646_, lean_object* v_x_1647_){
_start:
{
lean_object* v_res_1648_; 
v_res_1648_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v_as_1644_, v_k_1645_, v_x_1646_, v_x_1647_);
lean_dec_ref(v_k_1645_);
lean_dec_ref(v_as_1644_);
return v_res_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___redArg(lean_object* v_env_1649_, lean_object* v_ext_1650_, lean_object* v_declName_1651_){
_start:
{
lean_object* v___x_1652_; lean_object* v___x_1659_; 
v___x_1652_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0, &l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0);
v___x_1659_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1649_, v_declName_1651_);
if (lean_obj_tag(v___x_1659_) == 0)
{
goto v___jp_1653_;
}
else
{
lean_object* v_val_1660_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; uint8_t v___x_1680_; 
v_val_1660_ = lean_ctor_get(v___x_1659_, 0);
lean_inc(v_val_1660_);
lean_dec_ref_known(v___x_1659_, 1);
v___x_1677_ = l_Lean_PersistentEnvExtension_getModuleIREntries___redArg(v___x_1652_, v_ext_1650_, v_env_1649_, v_val_1660_);
v___x_1678_ = lean_unsigned_to_nat(0u);
v___x_1679_ = lean_array_get_size(v___x_1677_);
v___x_1680_ = lean_nat_dec_lt(v___x_1678_, v___x_1679_);
if (v___x_1680_ == 0)
{
lean_dec_ref(v___x_1677_);
goto v___jp_1661_;
}
else
{
lean_object* v_tmpSig_1681_; lean_object* v_levelParams_1682_; lean_object* v_type_1683_; lean_object* v_params_1684_; uint8_t v_safe_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; uint8_t v___x_1688_; 
v_tmpSig_1681_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0, &l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0_once, _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0);
v_levelParams_1682_ = lean_ctor_get(v_tmpSig_1681_, 1);
v_type_1683_ = lean_ctor_get(v_tmpSig_1681_, 2);
v_params_1684_ = lean_ctor_get(v_tmpSig_1681_, 3);
v_safe_1685_ = lean_ctor_get_uint8(v_tmpSig_1681_, sizeof(void*)*4);
v___x_1686_ = lean_unsigned_to_nat(1u);
v___x_1687_ = lean_nat_sub(v___x_1679_, v___x_1686_);
v___x_1688_ = lean_nat_dec_le(v___x_1678_, v___x_1687_);
if (v___x_1688_ == 0)
{
lean_dec(v___x_1687_);
lean_dec_ref(v___x_1677_);
goto v___jp_1661_;
}
else
{
lean_object* v_tmpSig_1689_; lean_object* v___x_1690_; 
lean_inc_ref(v_params_1684_);
lean_inc_ref(v_type_1683_);
lean_inc(v_levelParams_1682_);
lean_inc(v_declName_1651_);
v_tmpSig_1689_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_tmpSig_1689_, 0, v_declName_1651_);
lean_ctor_set(v_tmpSig_1689_, 1, v_levelParams_1682_);
lean_ctor_set(v_tmpSig_1689_, 2, v_type_1683_);
lean_ctor_set(v_tmpSig_1689_, 3, v_params_1684_);
lean_ctor_set_uint8(v_tmpSig_1689_, sizeof(void*)*4, v_safe_1685_);
v___x_1690_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v___x_1677_, v_tmpSig_1689_, v___x_1678_, v___x_1687_);
lean_dec_ref_known(v_tmpSig_1689_, 4);
lean_dec_ref(v___x_1677_);
if (lean_obj_tag(v___x_1690_) == 0)
{
goto v___jp_1661_;
}
else
{
lean_dec(v_val_1660_);
lean_dec(v_declName_1651_);
lean_dec_ref(v_env_1649_);
return v___x_1690_;
}
}
}
v___jp_1661_:
{
uint8_t v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; uint8_t v___x_1666_; 
v___x_1662_ = 0;
v___x_1663_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1652_, v_ext_1650_, v_env_1649_, v_val_1660_, v___x_1662_);
lean_dec(v_val_1660_);
v___x_1664_ = lean_unsigned_to_nat(0u);
v___x_1665_ = lean_array_get_size(v___x_1663_);
v___x_1666_ = lean_nat_dec_lt(v___x_1664_, v___x_1665_);
if (v___x_1666_ == 0)
{
lean_dec_ref(v___x_1663_);
goto v___jp_1653_;
}
else
{
lean_object* v_tmpSig_1667_; lean_object* v_levelParams_1668_; lean_object* v_type_1669_; lean_object* v_params_1670_; uint8_t v_safe_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; uint8_t v___x_1674_; 
v_tmpSig_1667_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0, &l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0_once, _init_l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_findSigAtSorted_x3f___closed__0);
v_levelParams_1668_ = lean_ctor_get(v_tmpSig_1667_, 1);
v_type_1669_ = lean_ctor_get(v_tmpSig_1667_, 2);
v_params_1670_ = lean_ctor_get(v_tmpSig_1667_, 3);
v_safe_1671_ = lean_ctor_get_uint8(v_tmpSig_1667_, sizeof(void*)*4);
v___x_1672_ = lean_unsigned_to_nat(1u);
v___x_1673_ = lean_nat_sub(v___x_1665_, v___x_1672_);
v___x_1674_ = lean_nat_dec_le(v___x_1664_, v___x_1673_);
if (v___x_1674_ == 0)
{
lean_dec(v___x_1673_);
lean_dec_ref(v___x_1663_);
goto v___jp_1653_;
}
else
{
lean_object* v_tmpSig_1675_; lean_object* v___x_1676_; 
lean_inc_ref(v_params_1670_);
lean_inc_ref(v_type_1669_);
lean_inc(v_levelParams_1668_);
lean_inc(v_declName_1651_);
v_tmpSig_1675_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_tmpSig_1675_, 0, v_declName_1651_);
lean_ctor_set(v_tmpSig_1675_, 1, v_levelParams_1668_);
lean_ctor_set(v_tmpSig_1675_, 2, v_type_1669_);
lean_ctor_set(v_tmpSig_1675_, 3, v_params_1670_);
lean_ctor_set_uint8(v_tmpSig_1675_, sizeof(void*)*4, v_safe_1671_);
v___x_1676_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v___x_1663_, v_tmpSig_1675_, v___x_1664_, v___x_1673_);
lean_dec_ref_known(v_tmpSig_1675_, 4);
lean_dec_ref(v___x_1663_);
if (lean_obj_tag(v___x_1676_) == 0)
{
goto v___jp_1653_;
}
else
{
lean_dec(v_declName_1651_);
lean_dec_ref(v_env_1649_);
return v___x_1676_;
}
}
}
}
}
v___jp_1653_:
{
lean_object* v_toEnvExtension_1654_; lean_object* v_asyncMode_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_toEnvExtension_1654_ = lean_ctor_get(v_ext_1650_, 0);
v_asyncMode_1655_ = lean_ctor_get(v_toEnvExtension_1654_, 2);
v___x_1656_ = lean_box(0);
v___x_1657_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1652_, v_ext_1650_, v_env_1649_, v_asyncMode_1655_, v___x_1656_);
v___x_1658_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_1657_, v_declName_1651_);
lean_dec(v_declName_1651_);
lean_dec(v___x_1657_);
return v___x_1658_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___redArg___boxed(lean_object* v_env_1691_, lean_object* v_ext_1692_, lean_object* v_declName_1693_){
_start:
{
lean_object* v_res_1694_; 
v_res_1694_ = l_Lean_Compiler_LCNF_getSigCore_x3f___redArg(v_env_1691_, v_ext_1692_, v_declName_1693_);
lean_dec_ref(v_ext_1692_);
return v_res_1694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f(uint8_t v_pu_1695_, lean_object* v_env_1696_, lean_object* v_ext_1697_, lean_object* v_declName_1698_){
_start:
{
lean_object* v___x_1699_; 
v___x_1699_ = l_Lean_Compiler_LCNF_getSigCore_x3f___redArg(v_env_1696_, v_ext_1697_, v_declName_1698_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getSigCore_x3f___boxed(lean_object* v_pu_1700_, lean_object* v_env_1701_, lean_object* v_ext_1702_, lean_object* v_declName_1703_){
_start:
{
uint8_t v_pu_boxed_1704_; lean_object* v_res_1705_; 
v_pu_boxed_1704_ = lean_unbox(v_pu_1700_);
v_res_1705_ = l_Lean_Compiler_LCNF_getSigCore_x3f(v_pu_boxed_1704_, v_env_1701_, v_ext_1702_, v_declName_1703_);
lean_dec_ref(v_ext_1702_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0(lean_object* v_as_1706_, lean_object* v_k_1707_, lean_object* v_x_1708_, lean_object* v_x_1709_, lean_object* v_x_1710_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___redArg(v_as_1706_, v_k_1707_, v_x_1708_, v_x_1709_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0___boxed(lean_object* v_as_1712_, lean_object* v_k_1713_, lean_object* v_x_1714_, lean_object* v_x_1715_, lean_object* v_x_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l_Array_binSearchAux___at___00Lean_Compiler_LCNF_getSigCore_x3f_spec__0(v_as_1712_, v_k_1713_, v_x_1714_, v_x_1715_, v_x_1716_);
lean_dec_ref(v_k_1713_);
lean_dec_ref(v_as_1712_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(lean_object* v_declName_1718_, lean_object* v___y_1719_){
_start:
{
lean_object* v___x_1721_; lean_object* v_env_1722_; lean_object* v___x_1723_; lean_object* v___x_1724_; lean_object* v___x_1725_; 
v___x_1721_ = lean_st_ref_get(v___y_1719_);
v_env_1722_ = lean_ctor_get(v___x_1721_, 0);
lean_inc_ref(v_env_1722_);
lean_dec(v___x_1721_);
v___x_1723_ = l_Lean_Compiler_LCNF_baseExt;
v___x_1724_ = l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg(v_env_1722_, v___x_1723_, v_declName_1718_);
v___x_1725_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1725_, 0, v___x_1724_);
return v___x_1725_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg___boxed(lean_object* v_declName_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_){
_start:
{
lean_object* v_res_1729_; 
v_res_1729_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(v_declName_1726_, v___y_1727_);
lean_dec(v___y_1727_);
return v_res_1729_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f(lean_object* v_declName_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_){
_start:
{
lean_object* v___x_1734_; 
v___x_1734_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(v_declName_1730_, v___y_1732_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getBaseDecl_x3f___boxed(lean_object* v_declName_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f(v_declName_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(lean_object* v_declName_1740_, lean_object* v___y_1741_){
_start:
{
lean_object* v___x_1743_; lean_object* v_env_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v___x_1743_ = lean_st_ref_get(v___y_1741_);
v_env_1744_ = lean_ctor_get(v___x_1743_, 0);
lean_inc_ref(v_env_1744_);
lean_dec(v___x_1743_);
v___x_1745_ = l_Lean_Compiler_LCNF_monoExt;
v___x_1746_ = l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg(v_env_1744_, v___x_1745_, v_declName_1740_);
v___x_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1747_, 0, v___x_1746_);
return v___x_1747_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg___boxed(lean_object* v_declName_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_1748_, v___y_1749_);
lean_dec(v___y_1749_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f(lean_object* v_declName_1752_, lean_object* v___y_1753_, lean_object* v___y_1754_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_1752_, v___y_1754_);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getMonoDecl_x3f___boxed(lean_object* v_declName_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v_res_1761_; 
v_res_1761_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f(v_declName_1757_, v___y_1758_, v___y_1759_);
lean_dec(v___y_1759_);
lean_dec_ref(v___y_1758_);
return v_res_1761_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(lean_object* v_declName_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v___x_1765_; lean_object* v___x_1766_; lean_object* v_env_1767_; lean_object* v___x_1768_; lean_object* v_asyncMode_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; 
v___x_1765_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0, &l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0);
v___x_1766_ = lean_st_ref_get(v___y_1763_);
v_env_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc_ref(v_env_1767_);
lean_dec(v___x_1766_);
v___x_1768_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_1769_ = lean_ctor_get(v___x_1768_, 2);
v___x_1770_ = lean_box(0);
v___x_1771_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1765_, v___x_1768_, v_env_1767_, v_asyncMode_1769_, v___x_1770_);
v___x_1772_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_1771_, v_declName_1762_);
lean_dec(v___x_1771_);
v___x_1773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1773_, 0, v___x_1772_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg___boxed(lean_object* v_declName_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_){
_start:
{
lean_object* v_res_1777_; 
v_res_1777_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(v_declName_1774_, v___y_1775_);
lean_dec(v___y_1775_);
lean_dec(v_declName_1774_);
return v_res_1777_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f(lean_object* v_declName_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
lean_object* v___x_1782_; 
v___x_1782_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___redArg(v_declName_1778_, v___y_1780_);
return v___x_1782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f___boxed(lean_object* v_declName_1783_, lean_object* v___y_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_){
_start:
{
lean_object* v_res_1787_; 
v_res_1787_ = l_Lean_Compiler_LCNF_getLocalImpureDecl_x3f(v_declName_1783_, v___y_1784_, v___y_1785_);
lean_dec(v___y_1785_);
lean_dec_ref(v___y_1784_);
lean_dec(v_declName_1783_);
return v_res_1787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(size_t v_sz_1788_, size_t v_i_1789_, lean_object* v_bs_1790_){
_start:
{
uint8_t v___x_1791_; 
v___x_1791_ = lean_usize_dec_lt(v_i_1789_, v_sz_1788_);
if (v___x_1791_ == 0)
{
return v_bs_1790_;
}
else
{
lean_object* v_v_1792_; lean_object* v_fst_1793_; lean_object* v___x_1794_; lean_object* v_bs_x27_1795_; size_t v___x_1796_; size_t v___x_1797_; lean_object* v___x_1798_; 
v_v_1792_ = lean_array_uget_borrowed(v_bs_1790_, v_i_1789_);
v_fst_1793_ = lean_ctor_get(v_v_1792_, 0);
lean_inc(v_fst_1793_);
v___x_1794_ = lean_unsigned_to_nat(0u);
v_bs_x27_1795_ = lean_array_uset(v_bs_1790_, v_i_1789_, v___x_1794_);
v___x_1796_ = ((size_t)1ULL);
v___x_1797_ = lean_usize_add(v_i_1789_, v___x_1796_);
v___x_1798_ = lean_array_uset(v_bs_x27_1795_, v_i_1789_, v_fst_1793_);
v_i_1789_ = v___x_1797_;
v_bs_1790_ = v___x_1798_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1___boxed(lean_object* v_sz_1800_, lean_object* v_i_1801_, lean_object* v_bs_1802_){
_start:
{
size_t v_sz_boxed_1803_; size_t v_i_boxed_1804_; lean_object* v_res_1805_; 
v_sz_boxed_1803_ = lean_unbox_usize(v_sz_1800_);
lean_dec(v_sz_1800_);
v_i_boxed_1804_ = lean_unbox_usize(v_i_1801_);
lean_dec(v_i_1801_);
v_res_1805_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(v_sz_boxed_1803_, v_i_boxed_1804_, v_bs_1802_);
return v_res_1805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___lam__0(lean_object* v_ps_1806_, lean_object* v_k_1807_, lean_object* v_v_1808_){
_start:
{
lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1809_, 0, v_k_1807_);
lean_ctor_set(v___x_1809_, 1, v_v_1808_);
v___x_1810_ = lean_array_push(v_ps_1806_, v___x_1809_);
return v___x_1810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(lean_object* v_m_1814_){
_start:
{
lean_object* v___f_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; 
v___f_1815_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__0));
v___x_1816_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___closed__1));
v___x_1817_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_sortedEntries_spec__0___redArg(v_m_1814_, v___f_1815_, v___x_1816_);
return v___x_1817_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg___boxed(lean_object* v_m_1818_){
_start:
{
lean_object* v_res_1819_; 
v_res_1819_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(v_m_1818_);
lean_dec_ref(v_m_1818_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(lean_object* v___y_1820_){
_start:
{
lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v_env_1824_; lean_object* v___x_1825_; lean_object* v_asyncMode_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; size_t v_sz_1830_; size_t v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v___x_1822_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0, &l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0);
v___x_1823_ = lean_st_ref_get(v___y_1820_);
v_env_1824_ = lean_ctor_get(v___x_1823_, 0);
lean_inc_ref(v_env_1824_);
lean_dec(v___x_1823_);
v___x_1825_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_1826_ = lean_ctor_get(v___x_1825_, 2);
v___x_1827_ = lean_box(0);
v___x_1828_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_1822_, v___x_1825_, v_env_1824_, v_asyncMode_1826_, v___x_1827_);
v___x_1829_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(v___x_1828_);
lean_dec(v___x_1828_);
v_sz_1830_ = lean_array_size(v___x_1829_);
v___x_1831_ = ((size_t)0ULL);
v___x_1832_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__1(v_sz_1830_, v___x_1831_, v___x_1829_);
v___x_1833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1833_, 0, v___x_1832_);
return v___x_1833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg___boxed(lean_object* v___y_1834_, lean_object* v___y_1835_){
_start:
{
lean_object* v_res_1836_; 
v_res_1836_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v___y_1834_);
lean_dec(v___y_1834_);
return v_res_1836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls(lean_object* v___y_1837_, lean_object* v___y_1838_){
_start:
{
lean_object* v___x_1840_; 
v___x_1840_ = l_Lean_Compiler_LCNF_getLocalImpureDecls___redArg(v___y_1838_);
return v___x_1840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalImpureDecls___boxed(lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_){
_start:
{
lean_object* v_res_1844_; 
v_res_1844_ = l_Lean_Compiler_LCNF_getLocalImpureDecls(v___y_1841_, v___y_1842_);
lean_dec(v___y_1842_);
lean_dec_ref(v___y_1841_);
return v_res_1844_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0(lean_object* v_00_u03b2_1845_, lean_object* v_m_1846_){
_start:
{
lean_object* v___x_1847_; 
v___x_1847_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___redArg(v_m_1846_);
return v___x_1847_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0___boxed(lean_object* v_00_u03b2_1848_, lean_object* v_m_1849_){
_start:
{
lean_object* v_res_1850_; 
v_res_1850_ = l_Lean_PersistentHashMap_toArray___at___00Lean_Compiler_LCNF_getLocalImpureDecls_spec__0(v_00_u03b2_1848_, v_m_1849_);
lean_dec_ref(v_m_1849_);
return v_res_1850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object* v_declName_1851_, lean_object* v___y_1852_){
_start:
{
lean_object* v___x_1854_; lean_object* v_env_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; 
v___x_1854_ = lean_st_ref_get(v___y_1852_);
v_env_1855_ = lean_ctor_get(v___x_1854_, 0);
lean_inc_ref(v_env_1855_);
lean_dec(v___x_1854_);
v___x_1856_ = l_Lean_Compiler_LCNF_impureSigExt;
v___x_1857_ = l_Lean_Compiler_LCNF_getSigCore_x3f___redArg(v_env_1855_, v___x_1856_, v_declName_1851_);
v___x_1858_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1858_, 0, v___x_1857_);
return v___x_1858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg___boxed(lean_object* v_declName_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_){
_start:
{
lean_object* v_res_1862_; 
v_res_1862_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_declName_1859_, v___y_1860_);
lean_dec(v___y_1860_);
return v_res_1862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f(lean_object* v_declName_1863_, lean_object* v___y_1864_, lean_object* v___y_1865_){
_start:
{
lean_object* v___x_1867_; 
v___x_1867_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_declName_1863_, v___y_1865_);
return v___x_1867_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___boxed(lean_object* v_declName_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f(v_declName_1868_, v___y_1869_, v___y_1870_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveBaseDeclCore(lean_object* v_env_1873_, lean_object* v_decl_1874_){
_start:
{
lean_object* v___x_1875_; lean_object* v_toEnvExtension_1876_; lean_object* v_asyncMode_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v___x_1875_ = l_Lean_Compiler_LCNF_baseExt;
v_toEnvExtension_1876_ = lean_ctor_get(v___x_1875_, 0);
v_asyncMode_1877_ = lean_ctor_get(v_toEnvExtension_1876_, 2);
v___x_1878_ = lean_box(0);
v___x_1879_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1875_, v_env_1873_, v_decl_1874_, v_asyncMode_1877_, v___x_1878_);
return v___x_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveMonoDeclCore(lean_object* v_env_1880_, lean_object* v_decl_1881_){
_start:
{
lean_object* v___x_1882_; lean_object* v_toEnvExtension_1883_; lean_object* v_asyncMode_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; 
v___x_1882_ = l_Lean_Compiler_LCNF_monoExt;
v_toEnvExtension_1883_ = lean_ctor_get(v___x_1882_, 0);
v_asyncMode_1884_ = lean_ctor_get(v_toEnvExtension_1883_, 2);
v___x_1885_ = lean_box(0);
v___x_1886_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1882_, v_env_1880_, v_decl_1881_, v_asyncMode_1884_, v___x_1885_);
return v___x_1886_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore___lam__0(lean_object* v_toSignature_1887_, lean_object* v_decl_1888_, lean_object* v_s_1889_){
_start:
{
lean_object* v_name_1890_; lean_object* v___x_1891_; 
v_name_1890_ = lean_ctor_get(v_toSignature_1887_, 0);
lean_inc(v_name_1890_);
lean_dec_ref(v_toSignature_1887_);
v___x_1891_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_replayFn_spec__1___redArg(v_s_1889_, v_name_1890_, v_decl_1888_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_saveImpureDeclCore(lean_object* v_env_1892_, lean_object* v_decl_1893_){
_start:
{
lean_object* v___x_1894_; lean_object* v_asyncMode_1895_; lean_object* v_toSignature_1896_; lean_object* v___x_1897_; lean_object* v_toEnvExtension_1898_; lean_object* v_asyncMode_1899_; lean_object* v___f_1900_; lean_object* v___x_1901_; lean_object* v_env_1902_; lean_object* v___x_1903_; 
v___x_1894_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_1895_ = lean_ctor_get(v___x_1894_, 2);
v_toSignature_1896_ = lean_ctor_get(v_decl_1893_, 0);
lean_inc_ref_n(v_toSignature_1896_, 2);
v___x_1897_ = l_Lean_Compiler_LCNF_impureSigExt;
v_toEnvExtension_1898_ = lean_ctor_get(v___x_1897_, 0);
v_asyncMode_1899_ = lean_ctor_get(v_toEnvExtension_1898_, 2);
v___f_1900_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_saveImpureDeclCore___lam__0), 3, 2);
lean_closure_set(v___f_1900_, 0, v_toSignature_1896_);
lean_closure_set(v___f_1900_, 1, v_decl_1893_);
v___x_1901_ = lean_box(0);
v_env_1902_ = l_Lean_EnvExtension_modifyState___redArg(v___x_1894_, v_env_1892_, v___f_1900_, v_asyncMode_1895_, v___x_1901_);
v___x_1903_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_1897_, v_env_1902_, v_toSignature_1896_, v_asyncMode_1899_, v___x_1901_);
return v___x_1903_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0(void){
_start:
{
lean_object* v___x_1904_; lean_object* v___x_1905_; 
v___x_1904_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__3, &l_Lean_Compiler_LCNF_mkDeclExt___closed__3_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__3);
v___x_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1905_, 0, v___x_1904_);
return v___x_1905_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1(void){
_start:
{
lean_object* v___x_1906_; lean_object* v___x_1907_; 
v___x_1906_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__0);
v___x_1907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1907_, 0, v___x_1906_);
lean_ctor_set(v___x_1907_, 1, v___x_1906_);
return v___x_1907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg(lean_object* v_decl_1908_, lean_object* v___y_1909_){
_start:
{
lean_object* v___x_1911_; lean_object* v_env_1912_; lean_object* v_nextMacroScope_1913_; lean_object* v_ngen_1914_; lean_object* v_auxDeclNGen_1915_; lean_object* v_traceState_1916_; lean_object* v_messages_1917_; lean_object* v_infoState_1918_; lean_object* v_snapshotTasks_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1931_; 
v___x_1911_ = lean_st_ref_take(v___y_1909_);
v_env_1912_ = lean_ctor_get(v___x_1911_, 0);
v_nextMacroScope_1913_ = lean_ctor_get(v___x_1911_, 1);
v_ngen_1914_ = lean_ctor_get(v___x_1911_, 2);
v_auxDeclNGen_1915_ = lean_ctor_get(v___x_1911_, 3);
v_traceState_1916_ = lean_ctor_get(v___x_1911_, 4);
v_messages_1917_ = lean_ctor_get(v___x_1911_, 6);
v_infoState_1918_ = lean_ctor_get(v___x_1911_, 7);
v_snapshotTasks_1919_ = lean_ctor_get(v___x_1911_, 8);
v_isSharedCheck_1931_ = !lean_is_exclusive(v___x_1911_);
if (v_isSharedCheck_1931_ == 0)
{
lean_object* v_unused_1932_; 
v_unused_1932_ = lean_ctor_get(v___x_1911_, 5);
lean_dec(v_unused_1932_);
v___x_1921_ = v___x_1911_;
v_isShared_1922_ = v_isSharedCheck_1931_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_snapshotTasks_1919_);
lean_inc(v_infoState_1918_);
lean_inc(v_messages_1917_);
lean_inc(v_traceState_1916_);
lean_inc(v_auxDeclNGen_1915_);
lean_inc(v_ngen_1914_);
lean_inc(v_nextMacroScope_1913_);
lean_inc(v_env_1912_);
lean_dec(v___x_1911_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1931_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1927_; 
v___x_1923_ = lean_box(0);
v___x_1924_ = l_Lean_Compiler_LCNF_saveBaseDeclCore(v_env_1912_, v_decl_1908_);
v___x_1925_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 5, v___x_1925_);
lean_ctor_set(v___x_1921_, 0, v___x_1924_);
v___x_1927_ = v___x_1921_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1930_; 
v_reuseFailAlloc_1930_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1930_, 0, v___x_1924_);
lean_ctor_set(v_reuseFailAlloc_1930_, 1, v_nextMacroScope_1913_);
lean_ctor_set(v_reuseFailAlloc_1930_, 2, v_ngen_1914_);
lean_ctor_set(v_reuseFailAlloc_1930_, 3, v_auxDeclNGen_1915_);
lean_ctor_set(v_reuseFailAlloc_1930_, 4, v_traceState_1916_);
lean_ctor_set(v_reuseFailAlloc_1930_, 5, v___x_1925_);
lean_ctor_set(v_reuseFailAlloc_1930_, 6, v_messages_1917_);
lean_ctor_set(v_reuseFailAlloc_1930_, 7, v_infoState_1918_);
lean_ctor_set(v_reuseFailAlloc_1930_, 8, v_snapshotTasks_1919_);
v___x_1927_ = v_reuseFailAlloc_1930_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
lean_object* v___x_1928_; lean_object* v___x_1929_; 
v___x_1928_ = lean_st_ref_put(v___y_1909_, v___x_1927_);
v___x_1929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1929_, 0, v___x_1923_);
return v___x_1929_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___redArg___boxed(lean_object* v_decl_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_){
_start:
{
lean_object* v_res_1936_; 
v_res_1936_ = l_Lean_Compiler_LCNF_Decl_saveBase___redArg(v_decl_1933_, v___y_1934_);
lean_dec(v___y_1934_);
return v_res_1936_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase(lean_object* v_decl_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_){
_start:
{
lean_object* v___x_1941_; 
v___x_1941_ = l_Lean_Compiler_LCNF_Decl_saveBase___redArg(v_decl_1937_, v___y_1939_);
return v___x_1941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveBase___boxed(lean_object* v_decl_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_){
_start:
{
lean_object* v_res_1946_; 
v_res_1946_ = l_Lean_Compiler_LCNF_Decl_saveBase(v_decl_1942_, v___y_1943_, v___y_1944_);
lean_dec(v___y_1944_);
lean_dec_ref(v___y_1943_);
return v_res_1946_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg(lean_object* v_decl_1947_, lean_object* v___y_1948_){
_start:
{
lean_object* v___x_1950_; lean_object* v_env_1951_; lean_object* v_nextMacroScope_1952_; lean_object* v_ngen_1953_; lean_object* v_auxDeclNGen_1954_; lean_object* v_traceState_1955_; lean_object* v_messages_1956_; lean_object* v_infoState_1957_; lean_object* v_snapshotTasks_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1970_; 
v___x_1950_ = lean_st_ref_take(v___y_1948_);
v_env_1951_ = lean_ctor_get(v___x_1950_, 0);
v_nextMacroScope_1952_ = lean_ctor_get(v___x_1950_, 1);
v_ngen_1953_ = lean_ctor_get(v___x_1950_, 2);
v_auxDeclNGen_1954_ = lean_ctor_get(v___x_1950_, 3);
v_traceState_1955_ = lean_ctor_get(v___x_1950_, 4);
v_messages_1956_ = lean_ctor_get(v___x_1950_, 6);
v_infoState_1957_ = lean_ctor_get(v___x_1950_, 7);
v_snapshotTasks_1958_ = lean_ctor_get(v___x_1950_, 8);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1950_);
if (v_isSharedCheck_1970_ == 0)
{
lean_object* v_unused_1971_; 
v_unused_1971_ = lean_ctor_get(v___x_1950_, 5);
lean_dec(v_unused_1971_);
v___x_1960_ = v___x_1950_;
v_isShared_1961_ = v_isSharedCheck_1970_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_snapshotTasks_1958_);
lean_inc(v_infoState_1957_);
lean_inc(v_messages_1956_);
lean_inc(v_traceState_1955_);
lean_inc(v_auxDeclNGen_1954_);
lean_inc(v_ngen_1953_);
lean_inc(v_nextMacroScope_1952_);
lean_inc(v_env_1951_);
lean_dec(v___x_1950_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1970_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1962_ = lean_box(0);
v___x_1963_ = l_Lean_Compiler_LCNF_saveMonoDeclCore(v_env_1951_, v_decl_1947_);
v___x_1964_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1);
if (v_isShared_1961_ == 0)
{
lean_ctor_set(v___x_1960_, 5, v___x_1964_);
lean_ctor_set(v___x_1960_, 0, v___x_1963_);
v___x_1966_ = v___x_1960_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1963_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v_nextMacroScope_1952_);
lean_ctor_set(v_reuseFailAlloc_1969_, 2, v_ngen_1953_);
lean_ctor_set(v_reuseFailAlloc_1969_, 3, v_auxDeclNGen_1954_);
lean_ctor_set(v_reuseFailAlloc_1969_, 4, v_traceState_1955_);
lean_ctor_set(v_reuseFailAlloc_1969_, 5, v___x_1964_);
lean_ctor_set(v_reuseFailAlloc_1969_, 6, v_messages_1956_);
lean_ctor_set(v_reuseFailAlloc_1969_, 7, v_infoState_1957_);
lean_ctor_set(v_reuseFailAlloc_1969_, 8, v_snapshotTasks_1958_);
v___x_1966_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; 
v___x_1967_ = lean_st_ref_put(v___y_1948_, v___x_1966_);
v___x_1968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1962_);
return v___x_1968_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___redArg___boxed(lean_object* v_decl_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v_res_1975_; 
v_res_1975_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v_decl_1972_, v___y_1973_);
lean_dec(v___y_1973_);
return v_res_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono(lean_object* v_decl_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_){
_start:
{
lean_object* v___x_1980_; 
v___x_1980_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v_decl_1976_, v___y_1978_);
return v___x_1980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveMono___boxed(lean_object* v_decl_1981_, lean_object* v___y_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_Lean_Compiler_LCNF_Decl_saveMono(v_decl_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(lean_object* v_decl_1986_, lean_object* v___y_1987_){
_start:
{
lean_object* v___x_1989_; lean_object* v_env_1990_; lean_object* v_nextMacroScope_1991_; lean_object* v_ngen_1992_; lean_object* v_auxDeclNGen_1993_; lean_object* v_traceState_1994_; lean_object* v_messages_1995_; lean_object* v_infoState_1996_; lean_object* v_snapshotTasks_1997_; lean_object* v___x_1999_; uint8_t v_isShared_2000_; uint8_t v_isSharedCheck_2009_; 
v___x_1989_ = lean_st_ref_take(v___y_1987_);
v_env_1990_ = lean_ctor_get(v___x_1989_, 0);
v_nextMacroScope_1991_ = lean_ctor_get(v___x_1989_, 1);
v_ngen_1992_ = lean_ctor_get(v___x_1989_, 2);
v_auxDeclNGen_1993_ = lean_ctor_get(v___x_1989_, 3);
v_traceState_1994_ = lean_ctor_get(v___x_1989_, 4);
v_messages_1995_ = lean_ctor_get(v___x_1989_, 6);
v_infoState_1996_ = lean_ctor_get(v___x_1989_, 7);
v_snapshotTasks_1997_ = lean_ctor_get(v___x_1989_, 8);
v_isSharedCheck_2009_ = !lean_is_exclusive(v___x_1989_);
if (v_isSharedCheck_2009_ == 0)
{
lean_object* v_unused_2010_; 
v_unused_2010_ = lean_ctor_get(v___x_1989_, 5);
lean_dec(v_unused_2010_);
v___x_1999_ = v___x_1989_;
v_isShared_2000_ = v_isSharedCheck_2009_;
goto v_resetjp_1998_;
}
else
{
lean_inc(v_snapshotTasks_1997_);
lean_inc(v_infoState_1996_);
lean_inc(v_messages_1995_);
lean_inc(v_traceState_1994_);
lean_inc(v_auxDeclNGen_1993_);
lean_inc(v_ngen_1992_);
lean_inc(v_nextMacroScope_1991_);
lean_inc(v_env_1990_);
lean_dec(v___x_1989_);
v___x_1999_ = lean_box(0);
v_isShared_2000_ = v_isSharedCheck_2009_;
goto v_resetjp_1998_;
}
v_resetjp_1998_:
{
lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2005_; 
v___x_2001_ = lean_box(0);
v___x_2002_ = l_Lean_Compiler_LCNF_saveImpureDeclCore(v_env_1990_, v_decl_1986_);
v___x_2003_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1, &l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_saveBase___redArg___closed__1);
if (v_isShared_2000_ == 0)
{
lean_ctor_set(v___x_1999_, 5, v___x_2003_);
lean_ctor_set(v___x_1999_, 0, v___x_2002_);
v___x_2005_ = v___x_1999_;
goto v_reusejp_2004_;
}
else
{
lean_object* v_reuseFailAlloc_2008_; 
v_reuseFailAlloc_2008_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2008_, 0, v___x_2002_);
lean_ctor_set(v_reuseFailAlloc_2008_, 1, v_nextMacroScope_1991_);
lean_ctor_set(v_reuseFailAlloc_2008_, 2, v_ngen_1992_);
lean_ctor_set(v_reuseFailAlloc_2008_, 3, v_auxDeclNGen_1993_);
lean_ctor_set(v_reuseFailAlloc_2008_, 4, v_traceState_1994_);
lean_ctor_set(v_reuseFailAlloc_2008_, 5, v___x_2003_);
lean_ctor_set(v_reuseFailAlloc_2008_, 6, v_messages_1995_);
lean_ctor_set(v_reuseFailAlloc_2008_, 7, v_infoState_1996_);
lean_ctor_set(v_reuseFailAlloc_2008_, 8, v_snapshotTasks_1997_);
v___x_2005_ = v_reuseFailAlloc_2008_;
goto v_reusejp_2004_;
}
v_reusejp_2004_:
{
lean_object* v___x_2006_; lean_object* v___x_2007_; 
v___x_2006_ = lean_st_ref_put(v___y_1987_, v___x_2005_);
v___x_2007_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2001_);
return v___x_2007_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___redArg___boxed(lean_object* v_decl_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v_decl_2011_, v___y_2012_);
lean_dec(v___y_2012_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure(lean_object* v_decl_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_){
_start:
{
lean_object* v___x_2019_; 
v___x_2019_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v_decl_2015_, v___y_2017_);
return v___x_2019_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_saveImpure___boxed(lean_object* v_decl_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_){
_start:
{
lean_object* v_res_2024_; 
v_res_2024_ = l_Lean_Compiler_LCNF_Decl_saveImpure(v_decl_2020_, v___y_2021_, v___y_2022_);
lean_dec(v___y_2022_);
lean_dec_ref(v___y_2021_);
return v_res_2024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0(lean_object* v_decl_2025_, lean_object* v_h_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_){
_start:
{
lean_object* v___x_2032_; 
v___x_2032_ = l_Lean_Compiler_LCNF_Decl_saveBase___redArg(v_decl_2025_, v___y_2030_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__0___boxed(lean_object* v_decl_2033_, lean_object* v_h_2034_, lean_object* v___y_2035_, lean_object* v___y_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_){
_start:
{
lean_object* v_res_2040_; 
v_res_2040_ = l_Lean_Compiler_LCNF_Decl_save___lam__0(v_decl_2033_, v_h_2034_, v___y_2035_, v___y_2036_, v___y_2037_, v___y_2038_);
lean_dec(v___y_2038_);
lean_dec_ref(v___y_2037_);
lean_dec(v___y_2036_);
lean_dec_ref(v___y_2035_);
return v_res_2040_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1(lean_object* v_decl_2041_, lean_object* v_h_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_){
_start:
{
lean_object* v___x_2048_; 
v___x_2048_ = l_Lean_Compiler_LCNF_Decl_saveMono___redArg(v_decl_2041_, v___y_2046_);
return v___x_2048_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__1___boxed(lean_object* v_decl_2049_, lean_object* v_h_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l_Lean_Compiler_LCNF_Decl_save___lam__1(v_decl_2049_, v_h_2050_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
lean_dec(v___y_2054_);
lean_dec_ref(v___y_2053_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2(lean_object* v_decl_2057_, lean_object* v_h_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_){
_start:
{
lean_object* v___x_2064_; 
v___x_2064_ = l_Lean_Compiler_LCNF_Decl_saveImpure___redArg(v_decl_2057_, v___y_2062_);
return v___x_2064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___lam__2___boxed(lean_object* v_decl_2065_, lean_object* v_h_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_, lean_object* v___y_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_){
_start:
{
lean_object* v_res_2072_; 
v_res_2072_ = l_Lean_Compiler_LCNF_Decl_save___lam__2(v_decl_2065_, v_h_2066_, v___y_2067_, v___y_2068_, v___y_2069_, v___y_2070_);
lean_dec(v___y_2070_);
lean_dec_ref(v___y_2069_);
lean_dec(v___y_2068_);
lean_dec_ref(v___y_2067_);
return v_res_2072_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_save___closed__0(void){
_start:
{
lean_object* v___x_2073_; 
v___x_2073_ = l_instMonadEIO___redArg();
return v___x_2073_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_save___closed__1(void){
_start:
{
lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2074_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_save___closed__0, &l_Lean_Compiler_LCNF_Decl_save___closed__0_once, _init_l_Lean_Compiler_LCNF_Decl_save___closed__0);
v___x_2075_ = l_StateRefT_x27_instMonad___redArg(v___x_2074_);
return v___x_2075_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save(uint8_t v_pu_2078_, lean_object* v_decl_2079_, lean_object* v___y_2080_, lean_object* v___y_2081_, lean_object* v___y_2082_, lean_object* v___y_2083_){
_start:
{
lean_object* v___x_2085_; lean_object* v_toApplicative_2086_; lean_object* v_toFunctor_2087_; lean_object* v_toSeq_2088_; lean_object* v_toSeqLeft_2089_; lean_object* v_toSeqRight_2090_; lean_object* v___f_2091_; lean_object* v___f_2092_; lean_object* v___f_2093_; lean_object* v___f_2094_; lean_object* v___f_2095_; lean_object* v___f_2096_; lean_object* v___f_2097_; lean_object* v___x_2098_; lean_object* v___f_2099_; lean_object* v___f_2100_; lean_object* v___f_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; 
v___x_2085_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_save___closed__1, &l_Lean_Compiler_LCNF_Decl_save___closed__1_once, _init_l_Lean_Compiler_LCNF_Decl_save___closed__1);
v_toApplicative_2086_ = lean_ctor_get(v___x_2085_, 0);
v_toFunctor_2087_ = lean_ctor_get(v_toApplicative_2086_, 0);
v_toSeq_2088_ = lean_ctor_get(v_toApplicative_2086_, 2);
v_toSeqLeft_2089_ = lean_ctor_get(v_toApplicative_2086_, 3);
v_toSeqRight_2090_ = lean_ctor_get(v_toApplicative_2086_, 4);
lean_inc_ref_n(v_decl_2079_, 2);
v___f_2091_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_save___lam__0___boxed), 7, 1);
lean_closure_set(v___f_2091_, 0, v_decl_2079_);
v___f_2092_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_save___lam__1___boxed), 7, 1);
lean_closure_set(v___f_2092_, 0, v_decl_2079_);
v___f_2093_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Decl_save___lam__2___boxed), 7, 1);
lean_closure_set(v___f_2093_, 0, v_decl_2079_);
v___f_2094_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_save___closed__2));
v___f_2095_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_save___closed__3));
lean_inc_ref_n(v_toFunctor_2087_, 2);
v___f_2096_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2096_, 0, v_toFunctor_2087_);
v___f_2097_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2097_, 0, v_toFunctor_2087_);
v___x_2098_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2098_, 0, v___f_2096_);
lean_ctor_set(v___x_2098_, 1, v___f_2097_);
lean_inc(v_toSeqRight_2090_);
v___f_2099_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2099_, 0, v_toSeqRight_2090_);
lean_inc(v_toSeqLeft_2089_);
v___f_2100_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2100_, 0, v_toSeqLeft_2089_);
lean_inc(v_toSeq_2088_);
v___f_2101_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2101_, 0, v_toSeq_2088_);
v___x_2102_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2102_, 0, v___x_2098_);
lean_ctor_set(v___x_2102_, 1, v___f_2094_);
lean_ctor_set(v___x_2102_, 2, v___f_2101_);
lean_ctor_set(v___x_2102_, 3, v___f_2100_);
lean_ctor_set(v___x_2102_, 4, v___f_2099_);
v___x_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2102_);
lean_ctor_set(v___x_2103_, 1, v___f_2095_);
v___x_2104_ = l_StateRefT_x27_instMonad___redArg(v___x_2103_);
v___x_2105_ = lean_box(0);
v___x_2106_ = l_instInhabitedOfMonad___redArg(v___x_2104_, v___x_2105_);
v___x_2107_ = l_instInhabitedReaderT___redArg(v___x_2106_);
v___x_2108_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_2080_);
if (lean_obj_tag(v___x_2108_) == 0)
{
lean_object* v_a_2109_; uint8_t v___x_2110_; 
v_a_2109_ = lean_ctor_get(v___x_2108_, 0);
lean_inc(v_a_2109_);
lean_dec_ref_known(v___x_2108_, 1);
v___x_2110_ = lean_unbox(v_a_2109_);
switch(v___x_2110_)
{
case 0:
{
uint8_t v___x_2111_; lean_object* v___x_479__overap_2112_; lean_object* v___x_2113_; 
lean_dec_ref(v___f_2093_);
lean_dec_ref(v___f_2092_);
v___x_2111_ = lean_unbox(v_a_2109_);
lean_dec(v_a_2109_);
v___x_479__overap_2112_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_2107_, v___x_2111_, v_pu_2078_, v___f_2091_);
lean_dec(v___x_2107_);
lean_inc(v___y_2083_);
lean_inc_ref(v___y_2082_);
lean_inc(v___y_2081_);
lean_inc_ref(v___y_2080_);
v___x_2113_ = lean_apply_5(v___x_479__overap_2112_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, lean_box(0));
return v___x_2113_;
}
case 1:
{
uint8_t v___x_2114_; lean_object* v___x_481__overap_2115_; lean_object* v___x_2116_; 
lean_dec_ref(v___f_2093_);
lean_dec_ref(v___f_2091_);
v___x_2114_ = lean_unbox(v_a_2109_);
lean_dec(v_a_2109_);
v___x_481__overap_2115_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_2107_, v___x_2114_, v_pu_2078_, v___f_2092_);
lean_dec(v___x_2107_);
lean_inc(v___y_2083_);
lean_inc_ref(v___y_2082_);
lean_inc(v___y_2081_);
lean_inc_ref(v___y_2080_);
v___x_2116_ = lean_apply_5(v___x_481__overap_2115_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, lean_box(0));
return v___x_2116_;
}
default: 
{
uint8_t v___x_2117_; lean_object* v___x_483__overap_2118_; lean_object* v___x_2119_; 
lean_dec_ref(v___f_2092_);
lean_dec_ref(v___f_2091_);
v___x_2117_ = lean_unbox(v_a_2109_);
lean_dec(v_a_2109_);
v___x_483__overap_2118_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_2107_, v___x_2117_, v_pu_2078_, v___f_2093_);
lean_dec(v___x_2107_);
lean_inc(v___y_2083_);
lean_inc_ref(v___y_2082_);
lean_inc(v___y_2081_);
lean_inc_ref(v___y_2080_);
v___x_2119_ = lean_apply_5(v___x_483__overap_2118_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, lean_box(0));
return v___x_2119_;
}
}
}
else
{
lean_object* v_a_2120_; lean_object* v___x_2122_; uint8_t v_isShared_2123_; uint8_t v_isSharedCheck_2127_; 
lean_dec(v___x_2107_);
lean_dec_ref(v___f_2093_);
lean_dec_ref(v___f_2092_);
lean_dec_ref(v___f_2091_);
v_a_2120_ = lean_ctor_get(v___x_2108_, 0);
v_isSharedCheck_2127_ = !lean_is_exclusive(v___x_2108_);
if (v_isSharedCheck_2127_ == 0)
{
v___x_2122_ = v___x_2108_;
v_isShared_2123_ = v_isSharedCheck_2127_;
goto v_resetjp_2121_;
}
else
{
lean_inc(v_a_2120_);
lean_dec(v___x_2108_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_save___boxed(lean_object* v_pu_2128_, lean_object* v_decl_2129_, lean_object* v___y_2130_, lean_object* v___y_2131_, lean_object* v___y_2132_, lean_object* v___y_2133_, lean_object* v___y_2134_){
_start:
{
uint8_t v_pu_boxed_2135_; lean_object* v_res_2136_; 
v_pu_boxed_2135_ = lean_unbox(v_pu_2128_);
v_res_2136_ = l_Lean_Compiler_LCNF_Decl_save(v_pu_boxed_2135_, v_decl_2129_, v___y_2130_, v___y_2131_, v___y_2132_, v___y_2133_);
lean_dec(v___y_2133_);
lean_dec_ref(v___y_2132_);
lean_dec(v___y_2131_);
lean_dec_ref(v___y_2130_);
return v_res_2136_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
v___x_2137_ = lean_obj_once(&l_Lean_Compiler_LCNF_mkDeclExt___closed__3, &l_Lean_Compiler_LCNF_mkDeclExt___closed__3_once, _init_l_Lean_Compiler_LCNF_mkDeclExt___closed__3);
v___x_2138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2138_, 0, v___x_2137_);
return v___x_2138_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; 
v___x_2139_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0);
v___x_2140_ = lean_unsigned_to_nat(0u);
v___x_2141_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2141_, 0, v___x_2140_);
lean_ctor_set(v___x_2141_, 1, v___x_2140_);
lean_ctor_set(v___x_2141_, 2, v___x_2140_);
lean_ctor_set(v___x_2141_, 3, v___x_2140_);
lean_ctor_set(v___x_2141_, 4, v___x_2139_);
lean_ctor_set(v___x_2141_, 5, v___x_2139_);
lean_ctor_set(v___x_2141_, 6, v___x_2139_);
lean_ctor_set(v___x_2141_, 7, v___x_2139_);
lean_ctor_set(v___x_2141_, 8, v___x_2139_);
lean_ctor_set(v___x_2141_, 9, v___x_2139_);
lean_ctor_set(v___x_2141_, 10, v___x_2139_);
return v___x_2141_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2142_ = lean_unsigned_to_nat(32u);
v___x_2143_ = lean_mk_empty_array_with_capacity(v___x_2142_);
v___x_2144_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2144_, 0, v___x_2143_);
return v___x_2144_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3(void){
_start:
{
size_t v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; 
v___x_2145_ = ((size_t)5ULL);
v___x_2146_ = lean_unsigned_to_nat(0u);
v___x_2147_ = lean_unsigned_to_nat(32u);
v___x_2148_ = lean_mk_empty_array_with_capacity(v___x_2147_);
v___x_2149_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__2);
v___x_2150_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2150_, 0, v___x_2149_);
lean_ctor_set(v___x_2150_, 1, v___x_2148_);
lean_ctor_set(v___x_2150_, 2, v___x_2146_);
lean_ctor_set(v___x_2150_, 3, v___x_2146_);
lean_ctor_set_usize(v___x_2150_, 4, v___x_2145_);
return v___x_2150_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2154_; 
v___x_2151_ = lean_box(1);
v___x_2152_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__3);
v___x_2153_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__0);
v___x_2154_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2154_, 0, v___x_2153_);
lean_ctor_set(v___x_2154_, 1, v___x_2152_);
lean_ctor_set(v___x_2154_, 2, v___x_2151_);
return v___x_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(lean_object* v_msgData_2155_, lean_object* v___y_2156_, lean_object* v___y_2157_){
_start:
{
lean_object* v___x_2159_; lean_object* v_toCold_2160_; lean_object* v_env_2161_; lean_object* v_options_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v___x_2159_ = lean_st_ref_get(v___y_2157_);
v_toCold_2160_ = lean_ctor_get(v___y_2156_, 0);
v_env_2161_ = lean_ctor_get(v___x_2159_, 0);
lean_inc_ref(v_env_2161_);
lean_dec(v___x_2159_);
v_options_2162_ = lean_ctor_get(v_toCold_2160_, 2);
v___x_2163_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__1);
v___x_2164_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___closed__4);
lean_inc_ref(v_options_2162_);
v___x_2165_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2165_, 0, v_env_2161_);
lean_ctor_set(v___x_2165_, 1, v___x_2163_);
lean_ctor_set(v___x_2165_, 2, v___x_2164_);
lean_ctor_set(v___x_2165_, 3, v_options_2162_);
v___x_2166_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
lean_ctor_set(v___x_2166_, 1, v_msgData_2155_);
v___x_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0___boxed(lean_object* v_msgData_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_){
_start:
{
lean_object* v_res_2172_; 
v_res_2172_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(v_msgData_2168_, v___y_2169_, v___y_2170_);
lean_dec(v___y_2170_);
lean_dec_ref(v___y_2169_);
return v_res_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(lean_object* v_msg_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v_ref_2177_; lean_object* v___x_2178_; lean_object* v_a_2179_; lean_object* v___x_2181_; uint8_t v_isShared_2182_; uint8_t v_isSharedCheck_2187_; 
v_ref_2177_ = lean_ctor_get(v___y_2174_, 2);
v___x_2178_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0_spec__0(v_msg_2173_, v___y_2174_, v___y_2175_);
v_a_2179_ = lean_ctor_get(v___x_2178_, 0);
v_isSharedCheck_2187_ = !lean_is_exclusive(v___x_2178_);
if (v_isSharedCheck_2187_ == 0)
{
v___x_2181_ = v___x_2178_;
v_isShared_2182_ = v_isSharedCheck_2187_;
goto v_resetjp_2180_;
}
else
{
lean_inc(v_a_2179_);
lean_dec(v___x_2178_);
v___x_2181_ = lean_box(0);
v_isShared_2182_ = v_isSharedCheck_2187_;
goto v_resetjp_2180_;
}
v_resetjp_2180_:
{
lean_object* v___x_2183_; lean_object* v___x_2185_; 
lean_inc(v_ref_2177_);
v___x_2183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2183_, 0, v_ref_2177_);
lean_ctor_set(v___x_2183_, 1, v_a_2179_);
if (v_isShared_2182_ == 0)
{
lean_ctor_set_tag(v___x_2181_, 1);
lean_ctor_set(v___x_2181_, 0, v___x_2183_);
v___x_2185_ = v___x_2181_;
goto v_reusejp_2184_;
}
else
{
lean_object* v_reuseFailAlloc_2186_; 
v_reuseFailAlloc_2186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2186_, 0, v___x_2183_);
v___x_2185_ = v_reuseFailAlloc_2186_;
goto v_reusejp_2184_;
}
v_reusejp_2184_:
{
return v___x_2185_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg___boxed(lean_object* v_msg_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_){
_start:
{
lean_object* v_res_2192_; 
v_res_2192_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(v_msg_2188_, v___y_2189_, v___y_2190_);
lean_dec(v___y_2190_);
lean_dec_ref(v___y_2189_);
return v_res_2192_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1(void){
_start:
{
lean_object* v___x_2194_; lean_object* v___x_2195_; 
v___x_2194_ = ((lean_object*)(l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__0));
v___x_2195_ = l_Lean_stringToMessageData(v___x_2194_);
return v___x_2195_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f(lean_object* v_declName_2196_, uint8_t v_phase_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_){
_start:
{
switch(v_phase_2197_)
{
case 0:
{
lean_object* v___x_2201_; 
v___x_2201_ = l_Lean_Compiler_LCNF_getBaseDecl_x3f___redArg(v_declName_2196_, v___y_2199_);
return v___x_2201_;
}
case 1:
{
lean_object* v___x_2202_; 
v___x_2202_ = l_Lean_Compiler_LCNF_getMonoDecl_x3f___redArg(v_declName_2196_, v___y_2199_);
return v___x_2202_;
}
default: 
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
lean_dec(v_declName_2196_);
v___x_2203_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1, &l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1_once, _init_l_Lean_Compiler_LCNF_getDeclAt_x3f___closed__1);
v___x_2204_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(v___x_2203_, v___y_2198_, v___y_2199_);
return v___x_2204_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDeclAt_x3f___boxed(lean_object* v_declName_2205_, lean_object* v_phase_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_){
_start:
{
uint8_t v_phase_boxed_2210_; lean_object* v_res_2211_; 
v_phase_boxed_2210_ = lean_unbox(v_phase_2206_);
v_res_2211_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_2205_, v_phase_boxed_2210_, v___y_2207_, v___y_2208_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
return v_res_2211_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0(lean_object* v_00_u03b1_2212_, lean_object* v_msg_2213_, lean_object* v___y_2214_, lean_object* v___y_2215_){
_start:
{
lean_object* v___x_2217_; 
v___x_2217_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___redArg(v_msg_2213_, v___y_2214_, v___y_2215_);
return v___x_2217_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0___boxed(lean_object* v_00_u03b1_2218_, lean_object* v_msg_2219_, lean_object* v___y_2220_, lean_object* v___y_2221_, lean_object* v___y_2222_){
_start:
{
lean_object* v_res_2223_; 
v_res_2223_ = l_Lean_throwError___at___00Lean_Compiler_LCNF_getDeclAt_x3f_spec__0(v_00_u03b1_2218_, v_msg_2219_, v___y_2220_, v___y_2221_);
lean_dec(v___y_2221_);
lean_dec_ref(v___y_2220_);
return v_res_2223_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg(lean_object* v_declName_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_, lean_object* v___y_2227_){
_start:
{
lean_object* v___x_2229_; 
v___x_2229_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_2225_);
if (lean_obj_tag(v___x_2229_) == 0)
{
lean_object* v_a_2230_; uint8_t v___x_2231_; lean_object* v___x_2232_; 
v_a_2230_ = lean_ctor_get(v___x_2229_, 0);
lean_inc(v_a_2230_);
lean_dec_ref_known(v___x_2229_, 1);
v___x_2231_ = lean_unbox(v_a_2230_);
v___x_2232_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_2224_, v___x_2231_, v___y_2226_, v___y_2227_);
if (lean_obj_tag(v___x_2232_) == 0)
{
lean_object* v_a_2233_; lean_object* v___x_2235_; uint8_t v_isShared_2236_; uint8_t v_isSharedCheck_2256_; 
v_a_2233_ = lean_ctor_get(v___x_2232_, 0);
v_isSharedCheck_2256_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2256_ == 0)
{
v___x_2235_ = v___x_2232_;
v_isShared_2236_ = v_isSharedCheck_2256_;
goto v_resetjp_2234_;
}
else
{
lean_inc(v_a_2233_);
lean_dec(v___x_2232_);
v___x_2235_ = lean_box(0);
v_isShared_2236_ = v_isSharedCheck_2256_;
goto v_resetjp_2234_;
}
v_resetjp_2234_:
{
if (lean_obj_tag(v_a_2233_) == 1)
{
lean_object* v_val_2237_; lean_object* v___x_2239_; uint8_t v_isShared_2240_; uint8_t v_isSharedCheck_2251_; 
v_val_2237_ = lean_ctor_get(v_a_2233_, 0);
v_isSharedCheck_2251_ = !lean_is_exclusive(v_a_2233_);
if (v_isSharedCheck_2251_ == 0)
{
v___x_2239_ = v_a_2233_;
v_isShared_2240_ = v_isSharedCheck_2251_;
goto v_resetjp_2238_;
}
else
{
lean_inc(v_val_2237_);
lean_dec(v_a_2233_);
v___x_2239_ = lean_box(0);
v_isShared_2240_ = v_isSharedCheck_2251_;
goto v_resetjp_2238_;
}
v_resetjp_2238_:
{
uint8_t v___x_2241_; uint8_t v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2246_; 
v___x_2241_ = lean_unbox(v_a_2230_);
lean_dec(v_a_2230_);
v___x_2242_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2241_);
v___x_2243_ = lean_box(v___x_2242_);
v___x_2244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2244_, 0, v___x_2243_);
lean_ctor_set(v___x_2244_, 1, v_val_2237_);
if (v_isShared_2240_ == 0)
{
lean_ctor_set(v___x_2239_, 0, v___x_2244_);
v___x_2246_ = v___x_2239_;
goto v_reusejp_2245_;
}
else
{
lean_object* v_reuseFailAlloc_2250_; 
v_reuseFailAlloc_2250_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2250_, 0, v___x_2244_);
v___x_2246_ = v_reuseFailAlloc_2250_;
goto v_reusejp_2245_;
}
v_reusejp_2245_:
{
lean_object* v___x_2248_; 
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 0, v___x_2246_);
v___x_2248_ = v___x_2235_;
goto v_reusejp_2247_;
}
else
{
lean_object* v_reuseFailAlloc_2249_; 
v_reuseFailAlloc_2249_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2249_, 0, v___x_2246_);
v___x_2248_ = v_reuseFailAlloc_2249_;
goto v_reusejp_2247_;
}
v_reusejp_2247_:
{
return v___x_2248_;
}
}
}
}
else
{
lean_object* v___x_2252_; lean_object* v___x_2254_; 
lean_dec(v_a_2233_);
lean_dec(v_a_2230_);
v___x_2252_ = lean_box(0);
if (v_isShared_2236_ == 0)
{
lean_ctor_set(v___x_2235_, 0, v___x_2252_);
v___x_2254_ = v___x_2235_;
goto v_reusejp_2253_;
}
else
{
lean_object* v_reuseFailAlloc_2255_; 
v_reuseFailAlloc_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2255_, 0, v___x_2252_);
v___x_2254_ = v_reuseFailAlloc_2255_;
goto v_reusejp_2253_;
}
v_reusejp_2253_:
{
return v___x_2254_;
}
}
}
}
else
{
lean_object* v_a_2257_; lean_object* v___x_2259_; uint8_t v_isShared_2260_; uint8_t v_isSharedCheck_2264_; 
lean_dec(v_a_2230_);
v_a_2257_ = lean_ctor_get(v___x_2232_, 0);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2232_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2259_ = v___x_2232_;
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
else
{
lean_inc(v_a_2257_);
lean_dec(v___x_2232_);
v___x_2259_ = lean_box(0);
v_isShared_2260_ = v_isSharedCheck_2264_;
goto v_resetjp_2258_;
}
v_resetjp_2258_:
{
lean_object* v___x_2262_; 
if (v_isShared_2260_ == 0)
{
v___x_2262_ = v___x_2259_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_a_2257_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
return v___x_2262_;
}
}
}
}
else
{
lean_object* v_a_2265_; lean_object* v___x_2267_; uint8_t v_isShared_2268_; uint8_t v_isSharedCheck_2272_; 
lean_dec(v_declName_2224_);
v_a_2265_ = lean_ctor_get(v___x_2229_, 0);
v_isSharedCheck_2272_ = !lean_is_exclusive(v___x_2229_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2267_ = v___x_2229_;
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
else
{
lean_inc(v_a_2265_);
lean_dec(v___x_2229_);
v___x_2267_ = lean_box(0);
v_isShared_2268_ = v_isSharedCheck_2272_;
goto v_resetjp_2266_;
}
v_resetjp_2266_:
{
lean_object* v___x_2270_; 
if (v_isShared_2268_ == 0)
{
v___x_2270_ = v___x_2267_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v_a_2265_);
v___x_2270_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
return v___x_2270_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___redArg___boxed(lean_object* v_declName_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v_res_2278_; 
v_res_2278_ = l_Lean_Compiler_LCNF_getDecl_x3f___redArg(v_declName_2273_, v___y_2274_, v___y_2275_, v___y_2276_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
lean_dec_ref(v___y_2274_);
return v_res_2278_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f(lean_object* v_declName_2279_, lean_object* v___y_2280_, lean_object* v___y_2281_, lean_object* v___y_2282_, lean_object* v___y_2283_){
_start:
{
lean_object* v___x_2285_; 
v___x_2285_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_2280_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_object* v_a_2286_; uint8_t v___x_2287_; lean_object* v___x_2288_; 
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
lean_inc(v_a_2286_);
lean_dec_ref_known(v___x_2285_, 1);
v___x_2287_ = lean_unbox(v_a_2286_);
v___x_2288_ = l_Lean_Compiler_LCNF_getDeclAt_x3f(v_declName_2279_, v___x_2287_, v___y_2282_, v___y_2283_);
if (lean_obj_tag(v___x_2288_) == 0)
{
lean_object* v_a_2289_; lean_object* v___x_2291_; uint8_t v_isShared_2292_; uint8_t v_isSharedCheck_2312_; 
v_a_2289_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2312_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2312_ == 0)
{
v___x_2291_ = v___x_2288_;
v_isShared_2292_ = v_isSharedCheck_2312_;
goto v_resetjp_2290_;
}
else
{
lean_inc(v_a_2289_);
lean_dec(v___x_2288_);
v___x_2291_ = lean_box(0);
v_isShared_2292_ = v_isSharedCheck_2312_;
goto v_resetjp_2290_;
}
v_resetjp_2290_:
{
if (lean_obj_tag(v_a_2289_) == 1)
{
lean_object* v_val_2293_; lean_object* v___x_2295_; uint8_t v_isShared_2296_; uint8_t v_isSharedCheck_2307_; 
v_val_2293_ = lean_ctor_get(v_a_2289_, 0);
v_isSharedCheck_2307_ = !lean_is_exclusive(v_a_2289_);
if (v_isSharedCheck_2307_ == 0)
{
v___x_2295_ = v_a_2289_;
v_isShared_2296_ = v_isSharedCheck_2307_;
goto v_resetjp_2294_;
}
else
{
lean_inc(v_val_2293_);
lean_dec(v_a_2289_);
v___x_2295_ = lean_box(0);
v_isShared_2296_ = v_isSharedCheck_2307_;
goto v_resetjp_2294_;
}
v_resetjp_2294_:
{
uint8_t v___x_2297_; uint8_t v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2302_; 
v___x_2297_ = lean_unbox(v_a_2286_);
lean_dec(v_a_2286_);
v___x_2298_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2297_);
v___x_2299_ = lean_box(v___x_2298_);
v___x_2300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2299_);
lean_ctor_set(v___x_2300_, 1, v_val_2293_);
if (v_isShared_2296_ == 0)
{
lean_ctor_set(v___x_2295_, 0, v___x_2300_);
v___x_2302_ = v___x_2295_;
goto v_reusejp_2301_;
}
else
{
lean_object* v_reuseFailAlloc_2306_; 
v_reuseFailAlloc_2306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2306_, 0, v___x_2300_);
v___x_2302_ = v_reuseFailAlloc_2306_;
goto v_reusejp_2301_;
}
v_reusejp_2301_:
{
lean_object* v___x_2304_; 
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 0, v___x_2302_);
v___x_2304_ = v___x_2291_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v___x_2302_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
else
{
lean_object* v___x_2308_; lean_object* v___x_2310_; 
lean_dec(v_a_2289_);
lean_dec(v_a_2286_);
v___x_2308_ = lean_box(0);
if (v_isShared_2292_ == 0)
{
lean_ctor_set(v___x_2291_, 0, v___x_2308_);
v___x_2310_ = v___x_2291_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2311_; 
v_reuseFailAlloc_2311_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2311_, 0, v___x_2308_);
v___x_2310_ = v_reuseFailAlloc_2311_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
return v___x_2310_;
}
}
}
}
else
{
lean_object* v_a_2313_; lean_object* v___x_2315_; uint8_t v_isShared_2316_; uint8_t v_isSharedCheck_2320_; 
lean_dec(v_a_2286_);
v_a_2313_ = lean_ctor_get(v___x_2288_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2288_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2315_ = v___x_2288_;
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
else
{
lean_inc(v_a_2313_);
lean_dec(v___x_2288_);
v___x_2315_ = lean_box(0);
v_isShared_2316_ = v_isSharedCheck_2320_;
goto v_resetjp_2314_;
}
v_resetjp_2314_:
{
lean_object* v___x_2318_; 
if (v_isShared_2316_ == 0)
{
v___x_2318_ = v___x_2315_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_a_2313_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
}
}
else
{
lean_object* v_a_2321_; lean_object* v___x_2323_; uint8_t v_isShared_2324_; uint8_t v_isSharedCheck_2328_; 
lean_dec(v_declName_2279_);
v_a_2321_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2323_ = v___x_2285_;
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
else
{
lean_inc(v_a_2321_);
lean_dec(v___x_2285_);
v___x_2323_ = lean_box(0);
v_isShared_2324_ = v_isSharedCheck_2328_;
goto v_resetjp_2322_;
}
v_resetjp_2322_:
{
lean_object* v___x_2326_; 
if (v_isShared_2324_ == 0)
{
v___x_2326_ = v___x_2323_;
goto v_reusejp_2325_;
}
else
{
lean_object* v_reuseFailAlloc_2327_; 
v_reuseFailAlloc_2327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2327_, 0, v_a_2321_);
v___x_2326_ = v_reuseFailAlloc_2327_;
goto v_reusejp_2325_;
}
v_reusejp_2325_:
{
return v___x_2326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getDecl_x3f___boxed(lean_object* v_declName_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v_res_2335_; 
v_res_2335_ = l_Lean_Compiler_LCNF_getDecl_x3f(v_declName_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_);
lean_dec(v___y_2333_);
lean_dec_ref(v___y_2332_);
lean_dec(v___y_2331_);
lean_dec_ref(v___y_2330_);
return v_res_2335_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(lean_object* v_declName_2336_, uint8_t v_phase_2337_, lean_object* v___y_2338_){
_start:
{
lean_object* v___x_2340_; 
v___x_2340_ = lean_obj_once(&l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0, &l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_getDeclCore_x3f___redArg___closed__0);
switch(v_phase_2337_)
{
case 0:
{
lean_object* v___x_2341_; lean_object* v_env_2342_; lean_object* v___x_2343_; lean_object* v_toEnvExtension_2344_; lean_object* v_asyncMode_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2341_ = lean_st_ref_get(v___y_2338_);
v_env_2342_ = lean_ctor_get(v___x_2341_, 0);
lean_inc_ref(v_env_2342_);
lean_dec(v___x_2341_);
v___x_2343_ = l_Lean_Compiler_LCNF_baseExt;
v_toEnvExtension_2344_ = lean_ctor_get(v___x_2343_, 0);
v_asyncMode_2345_ = lean_ctor_get(v_toEnvExtension_2344_, 2);
v___x_2346_ = lean_box(0);
v___x_2347_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2340_, v___x_2343_, v_env_2342_, v_asyncMode_2345_, v___x_2346_);
v___x_2348_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_2347_, v_declName_2336_);
lean_dec(v___x_2347_);
v___x_2349_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2349_, 0, v___x_2348_);
return v___x_2349_;
}
case 1:
{
lean_object* v___x_2350_; lean_object* v_env_2351_; lean_object* v___x_2352_; lean_object* v_toEnvExtension_2353_; lean_object* v_asyncMode_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; 
v___x_2350_ = lean_st_ref_get(v___y_2338_);
v_env_2351_ = lean_ctor_get(v___x_2350_, 0);
lean_inc_ref(v_env_2351_);
lean_dec(v___x_2350_);
v___x_2352_ = l_Lean_Compiler_LCNF_monoExt;
v_toEnvExtension_2353_ = lean_ctor_get(v___x_2352_, 0);
v_asyncMode_2354_ = lean_ctor_get(v_toEnvExtension_2353_, 2);
v___x_2355_ = lean_box(0);
v___x_2356_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_2340_, v___x_2352_, v_env_2351_, v_asyncMode_2354_, v___x_2355_);
v___x_2357_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_2356_, v_declName_2336_);
lean_dec(v___x_2356_);
v___x_2358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2358_, 0, v___x_2357_);
return v___x_2358_;
}
default: 
{
lean_object* v___x_2359_; lean_object* v_env_2360_; lean_object* v___x_2361_; lean_object* v_asyncMode_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
v___x_2359_ = lean_st_ref_get(v___y_2338_);
v_env_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc_ref(v_env_2360_);
lean_dec(v___x_2359_);
v___x_2361_ = l_Lean_Compiler_LCNF_impureExt;
v_asyncMode_2362_ = lean_ctor_get(v___x_2361_, 2);
v___x_2363_ = lean_box(0);
v___x_2364_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2340_, v___x_2361_, v_env_2360_, v_asyncMode_2362_, v___x_2363_);
v___x_2365_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Compiler_LCNF_getDeclCore_x3f_spec__0___redArg(v___x_2364_, v_declName_2336_);
lean_dec(v___x_2364_);
v___x_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2365_);
return v___x_2366_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg___boxed(lean_object* v_declName_2367_, lean_object* v_phase_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_){
_start:
{
uint8_t v_phase_boxed_2371_; lean_object* v_res_2372_; 
v_phase_boxed_2371_ = lean_unbox(v_phase_2368_);
v_res_2372_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2367_, v_phase_boxed_2371_, v___y_2369_);
lean_dec(v___y_2369_);
lean_dec(v_declName_2367_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f(lean_object* v_declName_2373_, uint8_t v_phase_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_){
_start:
{
lean_object* v___x_2380_; 
v___x_2380_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2373_, v_phase_2374_, v___y_2378_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___boxed(lean_object* v_declName_2381_, lean_object* v_phase_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_){
_start:
{
uint8_t v_phase_boxed_2388_; lean_object* v_res_2389_; 
v_phase_boxed_2388_ = lean_unbox(v_phase_2382_);
v_res_2389_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f(v_declName_2381_, v_phase_boxed_2388_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v___y_2384_);
lean_dec_ref(v___y_2383_);
lean_dec(v_declName_2381_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg(lean_object* v_declName_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v___x_2394_; 
v___x_2394_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_2391_);
if (lean_obj_tag(v___x_2394_) == 0)
{
lean_object* v_a_2395_; uint8_t v___x_2396_; lean_object* v___x_2397_; lean_object* v_a_2398_; lean_object* v___x_2400_; uint8_t v_isShared_2401_; uint8_t v_isSharedCheck_2421_; 
v_a_2395_ = lean_ctor_get(v___x_2394_, 0);
lean_inc(v_a_2395_);
lean_dec_ref_known(v___x_2394_, 1);
v___x_2396_ = lean_unbox(v_a_2395_);
v___x_2397_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2390_, v___x_2396_, v___y_2392_);
v_a_2398_ = lean_ctor_get(v___x_2397_, 0);
v_isSharedCheck_2421_ = !lean_is_exclusive(v___x_2397_);
if (v_isSharedCheck_2421_ == 0)
{
v___x_2400_ = v___x_2397_;
v_isShared_2401_ = v_isSharedCheck_2421_;
goto v_resetjp_2399_;
}
else
{
lean_inc(v_a_2398_);
lean_dec(v___x_2397_);
v___x_2400_ = lean_box(0);
v_isShared_2401_ = v_isSharedCheck_2421_;
goto v_resetjp_2399_;
}
v_resetjp_2399_:
{
if (lean_obj_tag(v_a_2398_) == 1)
{
lean_object* v_val_2402_; lean_object* v___x_2404_; uint8_t v_isShared_2405_; uint8_t v_isSharedCheck_2416_; 
v_val_2402_ = lean_ctor_get(v_a_2398_, 0);
v_isSharedCheck_2416_ = !lean_is_exclusive(v_a_2398_);
if (v_isSharedCheck_2416_ == 0)
{
v___x_2404_ = v_a_2398_;
v_isShared_2405_ = v_isSharedCheck_2416_;
goto v_resetjp_2403_;
}
else
{
lean_inc(v_val_2402_);
lean_dec(v_a_2398_);
v___x_2404_ = lean_box(0);
v_isShared_2405_ = v_isSharedCheck_2416_;
goto v_resetjp_2403_;
}
v_resetjp_2403_:
{
uint8_t v___x_2406_; uint8_t v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2411_; 
v___x_2406_ = lean_unbox(v_a_2395_);
lean_dec(v_a_2395_);
v___x_2407_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2406_);
v___x_2408_ = lean_box(v___x_2407_);
v___x_2409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
lean_ctor_set(v___x_2409_, 1, v_val_2402_);
if (v_isShared_2405_ == 0)
{
lean_ctor_set(v___x_2404_, 0, v___x_2409_);
v___x_2411_ = v___x_2404_;
goto v_reusejp_2410_;
}
else
{
lean_object* v_reuseFailAlloc_2415_; 
v_reuseFailAlloc_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2415_, 0, v___x_2409_);
v___x_2411_ = v_reuseFailAlloc_2415_;
goto v_reusejp_2410_;
}
v_reusejp_2410_:
{
lean_object* v___x_2413_; 
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 0, v___x_2411_);
v___x_2413_ = v___x_2400_;
goto v_reusejp_2412_;
}
else
{
lean_object* v_reuseFailAlloc_2414_; 
v_reuseFailAlloc_2414_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2414_, 0, v___x_2411_);
v___x_2413_ = v_reuseFailAlloc_2414_;
goto v_reusejp_2412_;
}
v_reusejp_2412_:
{
return v___x_2413_;
}
}
}
}
else
{
lean_object* v___x_2417_; lean_object* v___x_2419_; 
lean_dec(v_a_2398_);
lean_dec(v_a_2395_);
v___x_2417_ = lean_box(0);
if (v_isShared_2401_ == 0)
{
lean_ctor_set(v___x_2400_, 0, v___x_2417_);
v___x_2419_ = v___x_2400_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v___x_2417_);
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
else
{
lean_object* v_a_2422_; lean_object* v___x_2424_; uint8_t v_isShared_2425_; uint8_t v_isSharedCheck_2429_; 
v_a_2422_ = lean_ctor_get(v___x_2394_, 0);
v_isSharedCheck_2429_ = !lean_is_exclusive(v___x_2394_);
if (v_isSharedCheck_2429_ == 0)
{
v___x_2424_ = v___x_2394_;
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
else
{
lean_inc(v_a_2422_);
lean_dec(v___x_2394_);
v___x_2424_ = lean_box(0);
v_isShared_2425_ = v_isSharedCheck_2429_;
goto v_resetjp_2423_;
}
v_resetjp_2423_:
{
lean_object* v___x_2427_; 
if (v_isShared_2425_ == 0)
{
v___x_2427_ = v___x_2424_;
goto v_reusejp_2426_;
}
else
{
lean_object* v_reuseFailAlloc_2428_; 
v_reuseFailAlloc_2428_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2428_, 0, v_a_2422_);
v___x_2427_ = v_reuseFailAlloc_2428_;
goto v_reusejp_2426_;
}
v_reusejp_2426_:
{
return v___x_2427_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg___boxed(lean_object* v_declName_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_){
_start:
{
lean_object* v_res_2434_; 
v_res_2434_ = l_Lean_Compiler_LCNF_getLocalDecl_x3f___redArg(v_declName_2430_, v___y_2431_, v___y_2432_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec(v_declName_2430_);
return v_res_2434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f(lean_object* v_declName_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_){
_start:
{
lean_object* v___x_2441_; 
v___x_2441_ = l_Lean_Compiler_LCNF_getPhase___redArg(v___y_2436_);
if (lean_obj_tag(v___x_2441_) == 0)
{
lean_object* v_a_2442_; uint8_t v___x_2443_; lean_object* v___x_2444_; lean_object* v_a_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2468_; 
v_a_2442_ = lean_ctor_get(v___x_2441_, 0);
lean_inc(v_a_2442_);
lean_dec_ref_known(v___x_2441_, 1);
v___x_2443_ = lean_unbox(v_a_2442_);
v___x_2444_ = l_Lean_Compiler_LCNF_getLocalDeclAt_x3f___redArg(v_declName_2435_, v___x_2443_, v___y_2439_);
v_a_2445_ = lean_ctor_get(v___x_2444_, 0);
v_isSharedCheck_2468_ = !lean_is_exclusive(v___x_2444_);
if (v_isSharedCheck_2468_ == 0)
{
v___x_2447_ = v___x_2444_;
v_isShared_2448_ = v_isSharedCheck_2468_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_a_2445_);
lean_dec(v___x_2444_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2468_;
goto v_resetjp_2446_;
}
v_resetjp_2446_:
{
if (lean_obj_tag(v_a_2445_) == 1)
{
lean_object* v_val_2449_; lean_object* v___x_2451_; uint8_t v_isShared_2452_; uint8_t v_isSharedCheck_2463_; 
v_val_2449_ = lean_ctor_get(v_a_2445_, 0);
v_isSharedCheck_2463_ = !lean_is_exclusive(v_a_2445_);
if (v_isSharedCheck_2463_ == 0)
{
v___x_2451_ = v_a_2445_;
v_isShared_2452_ = v_isSharedCheck_2463_;
goto v_resetjp_2450_;
}
else
{
lean_inc(v_val_2449_);
lean_dec(v_a_2445_);
v___x_2451_ = lean_box(0);
v_isShared_2452_ = v_isSharedCheck_2463_;
goto v_resetjp_2450_;
}
v_resetjp_2450_:
{
uint8_t v___x_2453_; uint8_t v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; lean_object* v___x_2458_; 
v___x_2453_ = lean_unbox(v_a_2442_);
lean_dec(v_a_2442_);
v___x_2454_ = l_Lean_Compiler_LCNF_Phase_toPurity(v___x_2453_);
v___x_2455_ = lean_box(v___x_2454_);
v___x_2456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2456_, 0, v___x_2455_);
lean_ctor_set(v___x_2456_, 1, v_val_2449_);
if (v_isShared_2452_ == 0)
{
lean_ctor_set(v___x_2451_, 0, v___x_2456_);
v___x_2458_ = v___x_2451_;
goto v_reusejp_2457_;
}
else
{
lean_object* v_reuseFailAlloc_2462_; 
v_reuseFailAlloc_2462_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2462_, 0, v___x_2456_);
v___x_2458_ = v_reuseFailAlloc_2462_;
goto v_reusejp_2457_;
}
v_reusejp_2457_:
{
lean_object* v___x_2460_; 
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 0, v___x_2458_);
v___x_2460_ = v___x_2447_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2461_; 
v_reuseFailAlloc_2461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2461_, 0, v___x_2458_);
v___x_2460_ = v_reuseFailAlloc_2461_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
return v___x_2460_;
}
}
}
}
else
{
lean_object* v___x_2464_; lean_object* v___x_2466_; 
lean_dec(v_a_2445_);
lean_dec(v_a_2442_);
v___x_2464_ = lean_box(0);
if (v_isShared_2448_ == 0)
{
lean_ctor_set(v___x_2447_, 0, v___x_2464_);
v___x_2466_ = v___x_2447_;
goto v_reusejp_2465_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v___x_2464_);
v___x_2466_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2465_;
}
v_reusejp_2465_:
{
return v___x_2466_;
}
}
}
}
else
{
lean_object* v_a_2469_; lean_object* v___x_2471_; uint8_t v_isShared_2472_; uint8_t v_isSharedCheck_2476_; 
v_a_2469_ = lean_ctor_get(v___x_2441_, 0);
v_isSharedCheck_2476_ = !lean_is_exclusive(v___x_2441_);
if (v_isSharedCheck_2476_ == 0)
{
v___x_2471_ = v___x_2441_;
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
else
{
lean_inc(v_a_2469_);
lean_dec(v___x_2441_);
v___x_2471_ = lean_box(0);
v_isShared_2472_ = v_isSharedCheck_2476_;
goto v_resetjp_2470_;
}
v_resetjp_2470_:
{
lean_object* v___x_2474_; 
if (v_isShared_2472_ == 0)
{
v___x_2474_ = v___x_2471_;
goto v_reusejp_2473_;
}
else
{
lean_object* v_reuseFailAlloc_2475_; 
v_reuseFailAlloc_2475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2475_, 0, v_a_2469_);
v___x_2474_ = v_reuseFailAlloc_2475_;
goto v_reusejp_2473_;
}
v_reusejp_2473_:
{
return v___x_2474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getLocalDecl_x3f___boxed(lean_object* v_declName_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_){
_start:
{
lean_object* v_res_2483_; 
v_res_2483_ = l_Lean_Compiler_LCNF_getLocalDecl_x3f(v_declName_2477_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
lean_dec(v___y_2481_);
lean_dec_ref(v___y_2480_);
lean_dec(v___y_2479_);
lean_dec_ref(v___y_2478_);
lean_dec(v_declName_2477_);
return v_res_2483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_2485_; 
v___x_2485_ = l_Lean_Compiler_LCNF_mkOrderedDeclSetExt();
return v___x_2485_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2____boxed(lean_object* v___y_2486_){
_start:
{
lean_object* v_res_2487_; 
v_res_2487_ = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_();
return v_res_2487_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl___lam__0(lean_object* v_name_2488_, lean_object* v_s_2489_){
_start:
{
lean_object* v_fst_2490_; lean_object* v_snd_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2500_; 
v_fst_2490_ = lean_ctor_get(v_s_2489_, 0);
v_snd_2491_ = lean_ctor_get(v_s_2489_, 1);
v_isSharedCheck_2500_ = !lean_is_exclusive(v_s_2489_);
if (v_isSharedCheck_2500_ == 0)
{
v___x_2493_ = v_s_2489_;
v_isShared_2494_ = v_isSharedCheck_2500_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_snd_2491_);
lean_inc(v_fst_2490_);
lean_dec(v_s_2489_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2500_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2498_; 
lean_inc(v_name_2488_);
v___x_2495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2495_, 0, v_name_2488_);
lean_ctor_set(v___x_2495_, 1, v_fst_2490_);
v___x_2496_ = l_Lean_NameSet_insert(v_snd_2491_, v_name_2488_);
if (v_isShared_2494_ == 0)
{
lean_ctor_set(v___x_2493_, 1, v___x_2496_);
lean_ctor_set(v___x_2493_, 0, v___x_2495_);
v___x_2498_ = v___x_2493_;
goto v_reusejp_2497_;
}
else
{
lean_object* v_reuseFailAlloc_2499_; 
v_reuseFailAlloc_2499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2499_, 0, v___x_2495_);
lean_ctor_set(v_reuseFailAlloc_2499_, 1, v___x_2496_);
v___x_2498_ = v_reuseFailAlloc_2499_;
goto v_reusejp_2497_;
}
v_reusejp_2497_:
{
return v___x_2498_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_recordFinalImpureDecl(lean_object* v_env_2501_, lean_object* v_name_2502_){
_start:
{
lean_object* v___x_2503_; lean_object* v_asyncMode_2504_; lean_object* v___f_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; 
v___x_2503_ = l_Lean_Compiler_LCNF_declOrderExt;
v_asyncMode_2504_ = lean_ctor_get(v___x_2503_, 2);
v___f_2505_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_recordFinalImpureDecl___lam__0), 2, 1);
lean_closure_set(v___f_2505_, 0, v_name_2502_);
v___x_2506_ = lean_box(0);
v___x_2507_ = l_Lean_EnvExtension_modifyState___redArg(v___x_2503_, v_env_2501_, v___f_2505_, v_asyncMode_2504_, v___x_2506_);
return v___x_2507_;
}
}
static lean_object* _init_l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7(void){
_start:
{
lean_object* v___x_2515_; 
v___x_2515_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2515_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1(lean_object* v_msg_2516_){
_start:
{
lean_object* v___f_2517_; lean_object* v___f_2518_; lean_object* v___f_2519_; lean_object* v___f_2520_; lean_object* v___f_2521_; lean_object* v___f_2522_; lean_object* v___f_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2531_; lean_object* v___x_2532_; 
v___f_2517_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0));
v___f_2518_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1));
v___f_2519_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2));
v___f_2520_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3));
v___f_2521_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4));
v___f_2522_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5));
v___f_2523_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6));
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v___f_2517_);
lean_ctor_set(v___x_2524_, 1, v___f_2518_);
v___x_2525_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2525_, 0, v___x_2524_);
lean_ctor_set(v___x_2525_, 1, v___f_2519_);
lean_ctor_set(v___x_2525_, 2, v___f_2520_);
lean_ctor_set(v___x_2525_, 3, v___f_2521_);
lean_ctor_set(v___x_2525_, 4, v___f_2522_);
v___x_2526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2526_, 0, v___x_2525_);
lean_ctor_set(v___x_2526_, 1, v___f_2523_);
v___x_2527_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7, &l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7_once, _init_l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7);
v___x_2528_ = lean_unsigned_to_nat(0u);
v___x_2529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2529_, 0, v___x_2527_);
lean_ctor_set(v___x_2529_, 1, v___x_2528_);
v___x_2530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2530_, 0, v___x_2529_);
v___x_2531_ = l_instInhabitedOfMonad___redArg(v___x_2526_, v___x_2530_);
v___x_2532_ = lean_panic_fn_borrowed(v___x_2531_, v_msg_2516_);
lean_dec(v___x_2531_);
return v___x_2532_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__5(lean_object* v_msg_2533_){
_start:
{
lean_object* v___f_2534_; lean_object* v___f_2535_; lean_object* v___f_2536_; lean_object* v___f_2537_; lean_object* v___f_2538_; lean_object* v___f_2539_; lean_object* v___f_2540_; lean_object* v___x_2541_; lean_object* v___x_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v___x_2546_; 
v___f_2534_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__0));
v___f_2535_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__1));
v___f_2536_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__2));
v___f_2537_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__3));
v___f_2538_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__4));
v___f_2539_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__5));
v___f_2540_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__6));
v___x_2541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2541_, 0, v___f_2534_);
lean_ctor_set(v___x_2541_, 1, v___f_2535_);
v___x_2542_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2542_, 0, v___x_2541_);
lean_ctor_set(v___x_2542_, 1, v___f_2536_);
lean_ctor_set(v___x_2542_, 2, v___f_2537_);
lean_ctor_set(v___x_2542_, 3, v___f_2538_);
lean_ctor_set(v___x_2542_, 4, v___f_2539_);
v___x_2543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2543_, 0, v___x_2542_);
lean_ctor_set(v___x_2543_, 1, v___f_2540_);
v___x_2544_ = lean_obj_once(&l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7, &l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7_once, _init_l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1___closed__7);
v___x_2545_ = l_instInhabitedOfMonad___redArg(v___x_2543_, v___x_2544_);
v___x_2546_ = lean_panic_fn_borrowed(v___x_2545_, v_msg_2533_);
lean_dec(v___x_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(lean_object* v_a_2547_, lean_object* v_x_2548_){
_start:
{
if (lean_obj_tag(v_x_2548_) == 0)
{
uint8_t v___x_2549_; 
v___x_2549_ = 0;
return v___x_2549_;
}
else
{
lean_object* v_key_2550_; lean_object* v_tail_2551_; uint8_t v___x_2552_; 
v_key_2550_ = lean_ctor_get(v_x_2548_, 0);
v_tail_2551_ = lean_ctor_get(v_x_2548_, 2);
v___x_2552_ = lean_name_eq(v_key_2550_, v_a_2547_);
if (v___x_2552_ == 0)
{
v_x_2548_ = v_tail_2551_;
goto _start;
}
else
{
return v___x_2552_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg___boxed(lean_object* v_a_2554_, lean_object* v_x_2555_){
_start:
{
uint8_t v_res_2556_; lean_object* v_r_2557_; 
v_res_2556_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2554_, v_x_2555_);
lean_dec(v_x_2555_);
lean_dec(v_a_2554_);
v_r_2557_ = lean_box(v_res_2556_);
return v_r_2557_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(lean_object* v_x_2558_, lean_object* v_x_2559_){
_start:
{
if (lean_obj_tag(v_x_2559_) == 0)
{
return v_x_2558_;
}
else
{
lean_object* v_key_2560_; lean_object* v_value_2561_; lean_object* v_tail_2562_; lean_object* v___x_2564_; uint8_t v_isShared_2565_; uint8_t v_isSharedCheck_2588_; 
v_key_2560_ = lean_ctor_get(v_x_2559_, 0);
v_value_2561_ = lean_ctor_get(v_x_2559_, 1);
v_tail_2562_ = lean_ctor_get(v_x_2559_, 2);
v_isSharedCheck_2588_ = !lean_is_exclusive(v_x_2559_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2564_ = v_x_2559_;
v_isShared_2565_ = v_isSharedCheck_2588_;
goto v_resetjp_2563_;
}
else
{
lean_inc(v_tail_2562_);
lean_inc(v_value_2561_);
lean_inc(v_key_2560_);
lean_dec(v_x_2559_);
v___x_2564_ = lean_box(0);
v_isShared_2565_ = v_isSharedCheck_2588_;
goto v_resetjp_2563_;
}
v_resetjp_2563_:
{
lean_object* v___x_2566_; uint64_t v___y_2568_; 
v___x_2566_ = lean_array_get_size(v_x_2558_);
if (lean_obj_tag(v_key_2560_) == 0)
{
uint64_t v___x_2586_; 
v___x_2586_ = 1723ULL;
v___y_2568_ = v___x_2586_;
goto v___jp_2567_;
}
else
{
uint64_t v_hash_2587_; 
v_hash_2587_ = lean_ctor_get_uint64(v_key_2560_, sizeof(void*)*2);
v___y_2568_ = v_hash_2587_;
goto v___jp_2567_;
}
v___jp_2567_:
{
uint64_t v___x_2569_; uint64_t v___x_2570_; uint64_t v_fold_2571_; uint64_t v___x_2572_; uint64_t v___x_2573_; uint64_t v___x_2574_; size_t v___x_2575_; size_t v___x_2576_; size_t v___x_2577_; size_t v___x_2578_; size_t v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2582_; 
v___x_2569_ = 32ULL;
v___x_2570_ = lean_uint64_shift_right(v___y_2568_, v___x_2569_);
v_fold_2571_ = lean_uint64_xor(v___y_2568_, v___x_2570_);
v___x_2572_ = 16ULL;
v___x_2573_ = lean_uint64_shift_right(v_fold_2571_, v___x_2572_);
v___x_2574_ = lean_uint64_xor(v_fold_2571_, v___x_2573_);
v___x_2575_ = lean_uint64_to_usize(v___x_2574_);
v___x_2576_ = lean_usize_of_nat(v___x_2566_);
v___x_2577_ = ((size_t)1ULL);
v___x_2578_ = lean_usize_sub(v___x_2576_, v___x_2577_);
v___x_2579_ = lean_usize_land(v___x_2575_, v___x_2578_);
v___x_2580_ = lean_array_uget_borrowed(v_x_2558_, v___x_2579_);
lean_inc(v___x_2580_);
if (v_isShared_2565_ == 0)
{
lean_ctor_set(v___x_2564_, 2, v___x_2580_);
v___x_2582_ = v___x_2564_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2585_; 
v_reuseFailAlloc_2585_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2585_, 0, v_key_2560_);
lean_ctor_set(v_reuseFailAlloc_2585_, 1, v_value_2561_);
lean_ctor_set(v_reuseFailAlloc_2585_, 2, v___x_2580_);
v___x_2582_ = v_reuseFailAlloc_2585_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
lean_object* v___x_2583_; 
v___x_2583_ = lean_array_uset(v_x_2558_, v___x_2579_, v___x_2582_);
v_x_2558_ = v___x_2583_;
v_x_2559_ = v_tail_2562_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(lean_object* v_i_2589_, lean_object* v_source_2590_, lean_object* v_target_2591_){
_start:
{
lean_object* v___x_2592_; uint8_t v___x_2593_; 
v___x_2592_ = lean_array_get_size(v_source_2590_);
v___x_2593_ = lean_nat_dec_lt(v_i_2589_, v___x_2592_);
if (v___x_2593_ == 0)
{
lean_dec_ref(v_source_2590_);
lean_dec(v_i_2589_);
return v_target_2591_;
}
else
{
lean_object* v_es_2594_; lean_object* v___x_2595_; lean_object* v_source_2596_; lean_object* v_target_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v_es_2594_ = lean_array_fget(v_source_2590_, v_i_2589_);
v___x_2595_ = lean_box(0);
v_source_2596_ = lean_array_fset(v_source_2590_, v_i_2589_, v___x_2595_);
v_target_2597_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(v_target_2591_, v_es_2594_);
v___x_2598_ = lean_unsigned_to_nat(1u);
v___x_2599_ = lean_nat_add(v_i_2589_, v___x_2598_);
lean_dec(v_i_2589_);
v_i_2589_ = v___x_2599_;
v_source_2590_ = v_source_2596_;
v_target_2591_ = v_target_2597_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(lean_object* v_data_2601_){
_start:
{
lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v_nbuckets_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; 
v___x_2602_ = lean_array_get_size(v_data_2601_);
v___x_2603_ = lean_unsigned_to_nat(2u);
v_nbuckets_2604_ = lean_nat_mul(v___x_2602_, v___x_2603_);
v___x_2605_ = lean_unsigned_to_nat(0u);
v___x_2606_ = lean_box(0);
v___x_2607_ = lean_mk_array(v_nbuckets_2604_, v___x_2606_);
v___x_2608_ = lean_array_propagate_mark(v_data_2601_, v___x_2607_);
v___x_2609_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(v___x_2605_, v_data_2601_, v___x_2608_);
return v___x_2609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(lean_object* v_m_2610_, lean_object* v_a_2611_, lean_object* v_b_2612_){
_start:
{
lean_object* v_size_2613_; lean_object* v_buckets_2614_; lean_object* v___x_2615_; uint64_t v___y_2617_; 
v_size_2613_ = lean_ctor_get(v_m_2610_, 0);
v_buckets_2614_ = lean_ctor_get(v_m_2610_, 1);
v___x_2615_ = lean_array_get_size(v_buckets_2614_);
if (lean_obj_tag(v_a_2611_) == 0)
{
uint64_t v___x_2654_; 
v___x_2654_ = 1723ULL;
v___y_2617_ = v___x_2654_;
goto v___jp_2616_;
}
else
{
uint64_t v_hash_2655_; 
v_hash_2655_ = lean_ctor_get_uint64(v_a_2611_, sizeof(void*)*2);
v___y_2617_ = v_hash_2655_;
goto v___jp_2616_;
}
v___jp_2616_:
{
uint64_t v___x_2618_; uint64_t v___x_2619_; uint64_t v_fold_2620_; uint64_t v___x_2621_; uint64_t v___x_2622_; uint64_t v___x_2623_; size_t v___x_2624_; size_t v___x_2625_; size_t v___x_2626_; size_t v___x_2627_; size_t v___x_2628_; lean_object* v_bkt_2629_; uint8_t v___x_2630_; 
v___x_2618_ = 32ULL;
v___x_2619_ = lean_uint64_shift_right(v___y_2617_, v___x_2618_);
v_fold_2620_ = lean_uint64_xor(v___y_2617_, v___x_2619_);
v___x_2621_ = 16ULL;
v___x_2622_ = lean_uint64_shift_right(v_fold_2620_, v___x_2621_);
v___x_2623_ = lean_uint64_xor(v_fold_2620_, v___x_2622_);
v___x_2624_ = lean_uint64_to_usize(v___x_2623_);
v___x_2625_ = lean_usize_of_nat(v___x_2615_);
v___x_2626_ = ((size_t)1ULL);
v___x_2627_ = lean_usize_sub(v___x_2625_, v___x_2626_);
v___x_2628_ = lean_usize_land(v___x_2624_, v___x_2627_);
v_bkt_2629_ = lean_array_uget_borrowed(v_buckets_2614_, v___x_2628_);
v___x_2630_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2611_, v_bkt_2629_);
if (v___x_2630_ == 0)
{
lean_object* v___x_2632_; uint8_t v_isShared_2633_; uint8_t v_isSharedCheck_2651_; 
lean_inc_ref(v_buckets_2614_);
lean_inc(v_size_2613_);
v_isSharedCheck_2651_ = !lean_is_exclusive(v_m_2610_);
if (v_isSharedCheck_2651_ == 0)
{
lean_object* v_unused_2652_; lean_object* v_unused_2653_; 
v_unused_2652_ = lean_ctor_get(v_m_2610_, 1);
lean_dec(v_unused_2652_);
v_unused_2653_ = lean_ctor_get(v_m_2610_, 0);
lean_dec(v_unused_2653_);
v___x_2632_ = v_m_2610_;
v_isShared_2633_ = v_isSharedCheck_2651_;
goto v_resetjp_2631_;
}
else
{
lean_dec(v_m_2610_);
v___x_2632_ = lean_box(0);
v_isShared_2633_ = v_isSharedCheck_2651_;
goto v_resetjp_2631_;
}
v_resetjp_2631_:
{
lean_object* v___x_2634_; lean_object* v_size_x27_2635_; lean_object* v___x_2636_; lean_object* v_buckets_x27_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; uint8_t v___x_2643_; 
v___x_2634_ = lean_unsigned_to_nat(1u);
v_size_x27_2635_ = lean_nat_add(v_size_2613_, v___x_2634_);
lean_dec(v_size_2613_);
lean_inc(v_bkt_2629_);
v___x_2636_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2636_, 0, v_a_2611_);
lean_ctor_set(v___x_2636_, 1, v_b_2612_);
lean_ctor_set(v___x_2636_, 2, v_bkt_2629_);
v_buckets_x27_2637_ = lean_array_uset(v_buckets_2614_, v___x_2628_, v___x_2636_);
v___x_2638_ = lean_unsigned_to_nat(4u);
v___x_2639_ = lean_nat_mul(v_size_x27_2635_, v___x_2638_);
v___x_2640_ = lean_unsigned_to_nat(3u);
v___x_2641_ = lean_nat_div(v___x_2639_, v___x_2640_);
lean_dec(v___x_2639_);
v___x_2642_ = lean_array_get_size(v_buckets_x27_2637_);
v___x_2643_ = lean_nat_dec_le(v___x_2641_, v___x_2642_);
lean_dec(v___x_2641_);
if (v___x_2643_ == 0)
{
lean_object* v_val_2644_; lean_object* v___x_2646_; 
v_val_2644_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(v_buckets_x27_2637_);
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 1, v_val_2644_);
lean_ctor_set(v___x_2632_, 0, v_size_x27_2635_);
v___x_2646_ = v___x_2632_;
goto v_reusejp_2645_;
}
else
{
lean_object* v_reuseFailAlloc_2647_; 
v_reuseFailAlloc_2647_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2647_, 0, v_size_x27_2635_);
lean_ctor_set(v_reuseFailAlloc_2647_, 1, v_val_2644_);
v___x_2646_ = v_reuseFailAlloc_2647_;
goto v_reusejp_2645_;
}
v_reusejp_2645_:
{
return v___x_2646_;
}
}
else
{
lean_object* v___x_2649_; 
if (v_isShared_2633_ == 0)
{
lean_ctor_set(v___x_2632_, 1, v_buckets_x27_2637_);
lean_ctor_set(v___x_2632_, 0, v_size_x27_2635_);
v___x_2649_ = v___x_2632_;
goto v_reusejp_2648_;
}
else
{
lean_object* v_reuseFailAlloc_2650_; 
v_reuseFailAlloc_2650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2650_, 0, v_size_x27_2635_);
lean_ctor_set(v_reuseFailAlloc_2650_, 1, v_buckets_x27_2637_);
v___x_2649_ = v_reuseFailAlloc_2650_;
goto v_reusejp_2648_;
}
v_reusejp_2648_:
{
return v___x_2649_;
}
}
}
}
else
{
lean_dec(v_b_2612_);
lean_dec(v_a_2611_);
return v_m_2610_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(lean_object* v_as_2656_, size_t v_sz_2657_, size_t v_i_2658_, lean_object* v_b_2659_){
_start:
{
uint8_t v___x_2660_; 
v___x_2660_ = lean_usize_dec_lt(v_i_2658_, v_sz_2657_);
if (v___x_2660_ == 0)
{
return v_b_2659_;
}
else
{
lean_object* v_a_2661_; lean_object* v___x_2662_; lean_object* v_r_2663_; size_t v___x_2664_; size_t v___x_2665_; 
v_a_2661_ = lean_array_uget_borrowed(v_as_2656_, v_i_2658_);
v___x_2662_ = lean_box(0);
lean_inc(v_a_2661_);
v_r_2663_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(v_b_2659_, v_a_2661_, v___x_2662_);
v___x_2664_ = ((size_t)1ULL);
v___x_2665_ = lean_usize_add(v_i_2658_, v___x_2664_);
v_i_2658_ = v___x_2665_;
v_b_2659_ = v_r_2663_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1___boxed(lean_object* v_as_2667_, lean_object* v_sz_2668_, lean_object* v_i_2669_, lean_object* v_b_2670_){
_start:
{
size_t v_sz_boxed_2671_; size_t v_i_boxed_2672_; lean_object* v_res_2673_; 
v_sz_boxed_2671_ = lean_unbox_usize(v_sz_2668_);
lean_dec(v_sz_2668_);
v_i_boxed_2672_ = lean_unbox_usize(v_i_2669_);
lean_dec(v_i_2669_);
v_res_2673_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(v_as_2667_, v_sz_boxed_2671_, v_i_boxed_2672_, v_b_2670_);
lean_dec_ref(v_as_2667_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(lean_object* v_m_2674_, lean_object* v_l_2675_){
_start:
{
size_t v_sz_2676_; size_t v___x_2677_; lean_object* v___x_2678_; 
v_sz_2676_ = lean_array_size(v_l_2675_);
v___x_2677_ = ((size_t)0ULL);
v___x_2678_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__1(v_l_2675_, v_sz_2676_, v___x_2677_, v_m_2674_);
return v___x_2678_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0___boxed(lean_object* v_m_2679_, lean_object* v_l_2680_){
_start:
{
lean_object* v_res_2681_; 
v_res_2681_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(v_m_2679_, v_l_2680_);
lean_dec_ref(v_l_2680_);
return v_res_2681_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(lean_object* v_m_2682_, lean_object* v_a_2683_){
_start:
{
lean_object* v_buckets_2684_; lean_object* v___x_2685_; uint64_t v___y_2687_; 
v_buckets_2684_ = lean_ctor_get(v_m_2682_, 1);
v___x_2685_ = lean_array_get_size(v_buckets_2684_);
if (lean_obj_tag(v_a_2683_) == 0)
{
uint64_t v___x_2701_; 
v___x_2701_ = 1723ULL;
v___y_2687_ = v___x_2701_;
goto v___jp_2686_;
}
else
{
uint64_t v_hash_2702_; 
v_hash_2702_ = lean_ctor_get_uint64(v_a_2683_, sizeof(void*)*2);
v___y_2687_ = v_hash_2702_;
goto v___jp_2686_;
}
v___jp_2686_:
{
uint64_t v___x_2688_; uint64_t v___x_2689_; uint64_t v_fold_2690_; uint64_t v___x_2691_; uint64_t v___x_2692_; uint64_t v___x_2693_; size_t v___x_2694_; size_t v___x_2695_; size_t v___x_2696_; size_t v___x_2697_; size_t v___x_2698_; lean_object* v___x_2699_; uint8_t v___x_2700_; 
v___x_2688_ = 32ULL;
v___x_2689_ = lean_uint64_shift_right(v___y_2687_, v___x_2688_);
v_fold_2690_ = lean_uint64_xor(v___y_2687_, v___x_2689_);
v___x_2691_ = 16ULL;
v___x_2692_ = lean_uint64_shift_right(v_fold_2690_, v___x_2691_);
v___x_2693_ = lean_uint64_xor(v_fold_2690_, v___x_2692_);
v___x_2694_ = lean_uint64_to_usize(v___x_2693_);
v___x_2695_ = lean_usize_of_nat(v___x_2685_);
v___x_2696_ = ((size_t)1ULL);
v___x_2697_ = lean_usize_sub(v___x_2695_, v___x_2696_);
v___x_2698_ = lean_usize_land(v___x_2694_, v___x_2697_);
v___x_2699_ = lean_array_uget_borrowed(v_buckets_2684_, v___x_2698_);
v___x_2700_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2683_, v___x_2699_);
return v___x_2700_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg___boxed(lean_object* v_m_2703_, lean_object* v_a_2704_){
_start:
{
uint8_t v_res_2705_; lean_object* v_r_2706_; 
v_res_2705_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(v_m_2703_, v_a_2704_);
lean_dec(v_a_2704_);
lean_dec_ref(v_m_2703_);
v_r_2706_ = lean_box(v_res_2705_);
return v_r_2706_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(lean_object* v_a_2707_, lean_object* v_b_2708_, lean_object* v_x_2709_){
_start:
{
if (lean_obj_tag(v_x_2709_) == 0)
{
lean_dec(v_b_2708_);
lean_dec(v_a_2707_);
return v_x_2709_;
}
else
{
lean_object* v_key_2710_; lean_object* v_value_2711_; lean_object* v_tail_2712_; lean_object* v___x_2714_; uint8_t v_isShared_2715_; uint8_t v_isSharedCheck_2724_; 
v_key_2710_ = lean_ctor_get(v_x_2709_, 0);
v_value_2711_ = lean_ctor_get(v_x_2709_, 1);
v_tail_2712_ = lean_ctor_get(v_x_2709_, 2);
v_isSharedCheck_2724_ = !lean_is_exclusive(v_x_2709_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2714_ = v_x_2709_;
v_isShared_2715_ = v_isSharedCheck_2724_;
goto v_resetjp_2713_;
}
else
{
lean_inc(v_tail_2712_);
lean_inc(v_value_2711_);
lean_inc(v_key_2710_);
lean_dec(v_x_2709_);
v___x_2714_ = lean_box(0);
v_isShared_2715_ = v_isSharedCheck_2724_;
goto v_resetjp_2713_;
}
v_resetjp_2713_:
{
uint8_t v___x_2716_; 
v___x_2716_ = lean_name_eq(v_key_2710_, v_a_2707_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2717_; lean_object* v___x_2719_; 
v___x_2717_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(v_a_2707_, v_b_2708_, v_tail_2712_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 2, v___x_2717_);
v___x_2719_ = v___x_2714_;
goto v_reusejp_2718_;
}
else
{
lean_object* v_reuseFailAlloc_2720_; 
v_reuseFailAlloc_2720_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2720_, 0, v_key_2710_);
lean_ctor_set(v_reuseFailAlloc_2720_, 1, v_value_2711_);
lean_ctor_set(v_reuseFailAlloc_2720_, 2, v___x_2717_);
v___x_2719_ = v_reuseFailAlloc_2720_;
goto v_reusejp_2718_;
}
v_reusejp_2718_:
{
return v___x_2719_;
}
}
else
{
lean_object* v___x_2722_; 
lean_dec(v_value_2711_);
lean_dec(v_key_2710_);
if (v_isShared_2715_ == 0)
{
lean_ctor_set(v___x_2714_, 1, v_b_2708_);
lean_ctor_set(v___x_2714_, 0, v_a_2707_);
v___x_2722_ = v___x_2714_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2707_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v_b_2708_);
lean_ctor_set(v_reuseFailAlloc_2723_, 2, v_tail_2712_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(lean_object* v_m_2725_, lean_object* v_a_2726_, lean_object* v_b_2727_){
_start:
{
lean_object* v_size_2728_; lean_object* v_buckets_2729_; lean_object* v___x_2731_; uint8_t v_isShared_2732_; uint8_t v_isSharedCheck_2775_; 
v_size_2728_ = lean_ctor_get(v_m_2725_, 0);
v_buckets_2729_ = lean_ctor_get(v_m_2725_, 1);
v_isSharedCheck_2775_ = !lean_is_exclusive(v_m_2725_);
if (v_isSharedCheck_2775_ == 0)
{
v___x_2731_ = v_m_2725_;
v_isShared_2732_ = v_isSharedCheck_2775_;
goto v_resetjp_2730_;
}
else
{
lean_inc(v_buckets_2729_);
lean_inc(v_size_2728_);
lean_dec(v_m_2725_);
v___x_2731_ = lean_box(0);
v_isShared_2732_ = v_isSharedCheck_2775_;
goto v_resetjp_2730_;
}
v_resetjp_2730_:
{
lean_object* v___x_2733_; uint64_t v___y_2735_; 
v___x_2733_ = lean_array_get_size(v_buckets_2729_);
if (lean_obj_tag(v_a_2726_) == 0)
{
uint64_t v___x_2773_; 
v___x_2773_ = 1723ULL;
v___y_2735_ = v___x_2773_;
goto v___jp_2734_;
}
else
{
uint64_t v_hash_2774_; 
v_hash_2774_ = lean_ctor_get_uint64(v_a_2726_, sizeof(void*)*2);
v___y_2735_ = v_hash_2774_;
goto v___jp_2734_;
}
v___jp_2734_:
{
uint64_t v___x_2736_; uint64_t v___x_2737_; uint64_t v_fold_2738_; uint64_t v___x_2739_; uint64_t v___x_2740_; uint64_t v___x_2741_; size_t v___x_2742_; size_t v___x_2743_; size_t v___x_2744_; size_t v___x_2745_; size_t v___x_2746_; lean_object* v_bkt_2747_; uint8_t v___x_2748_; 
v___x_2736_ = 32ULL;
v___x_2737_ = lean_uint64_shift_right(v___y_2735_, v___x_2736_);
v_fold_2738_ = lean_uint64_xor(v___y_2735_, v___x_2737_);
v___x_2739_ = 16ULL;
v___x_2740_ = lean_uint64_shift_right(v_fold_2738_, v___x_2739_);
v___x_2741_ = lean_uint64_xor(v_fold_2738_, v___x_2740_);
v___x_2742_ = lean_uint64_to_usize(v___x_2741_);
v___x_2743_ = lean_usize_of_nat(v___x_2733_);
v___x_2744_ = ((size_t)1ULL);
v___x_2745_ = lean_usize_sub(v___x_2743_, v___x_2744_);
v___x_2746_ = lean_usize_land(v___x_2742_, v___x_2745_);
v_bkt_2747_ = lean_array_uget_borrowed(v_buckets_2729_, v___x_2746_);
v___x_2748_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2726_, v_bkt_2747_);
if (v___x_2748_ == 0)
{
lean_object* v___x_2749_; lean_object* v_size_x27_2750_; lean_object* v___x_2751_; lean_object* v_buckets_x27_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; uint8_t v___x_2758_; 
v___x_2749_ = lean_unsigned_to_nat(1u);
v_size_x27_2750_ = lean_nat_add(v_size_2728_, v___x_2749_);
lean_dec(v_size_2728_);
lean_inc(v_bkt_2747_);
v___x_2751_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2751_, 0, v_a_2726_);
lean_ctor_set(v___x_2751_, 1, v_b_2727_);
lean_ctor_set(v___x_2751_, 2, v_bkt_2747_);
v_buckets_x27_2752_ = lean_array_uset(v_buckets_2729_, v___x_2746_, v___x_2751_);
v___x_2753_ = lean_unsigned_to_nat(4u);
v___x_2754_ = lean_nat_mul(v_size_x27_2750_, v___x_2753_);
v___x_2755_ = lean_unsigned_to_nat(3u);
v___x_2756_ = lean_nat_div(v___x_2754_, v___x_2755_);
lean_dec(v___x_2754_);
v___x_2757_ = lean_array_get_size(v_buckets_x27_2752_);
v___x_2758_ = lean_nat_dec_le(v___x_2756_, v___x_2757_);
lean_dec(v___x_2756_);
if (v___x_2758_ == 0)
{
lean_object* v_val_2759_; lean_object* v___x_2761_; 
v_val_2759_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(v_buckets_x27_2752_);
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 1, v_val_2759_);
lean_ctor_set(v___x_2731_, 0, v_size_x27_2750_);
v___x_2761_ = v___x_2731_;
goto v_reusejp_2760_;
}
else
{
lean_object* v_reuseFailAlloc_2762_; 
v_reuseFailAlloc_2762_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2762_, 0, v_size_x27_2750_);
lean_ctor_set(v_reuseFailAlloc_2762_, 1, v_val_2759_);
v___x_2761_ = v_reuseFailAlloc_2762_;
goto v_reusejp_2760_;
}
v_reusejp_2760_:
{
return v___x_2761_;
}
}
else
{
lean_object* v___x_2764_; 
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 1, v_buckets_x27_2752_);
lean_ctor_set(v___x_2731_, 0, v_size_x27_2750_);
v___x_2764_ = v___x_2731_;
goto v_reusejp_2763_;
}
else
{
lean_object* v_reuseFailAlloc_2765_; 
v_reuseFailAlloc_2765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2765_, 0, v_size_x27_2750_);
lean_ctor_set(v_reuseFailAlloc_2765_, 1, v_buckets_x27_2752_);
v___x_2764_ = v_reuseFailAlloc_2765_;
goto v_reusejp_2763_;
}
v_reusejp_2763_:
{
return v___x_2764_;
}
}
}
else
{
lean_object* v___x_2766_; lean_object* v_buckets_x27_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2771_; 
lean_inc(v_bkt_2747_);
v___x_2766_ = lean_box(0);
v_buckets_x27_2767_ = lean_array_uset(v_buckets_2729_, v___x_2746_, v___x_2766_);
v___x_2768_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(v_a_2726_, v_b_2727_, v_bkt_2747_);
v___x_2769_ = lean_array_uset(v_buckets_x27_2767_, v___x_2746_, v___x_2768_);
if (v_isShared_2732_ == 0)
{
lean_ctor_set(v___x_2731_, 1, v___x_2769_);
v___x_2771_ = v___x_2731_;
goto v_reusejp_2770_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_size_2728_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v___x_2769_);
v___x_2771_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2770_;
}
v_reusejp_2770_:
{
return v___x_2771_;
}
}
}
}
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; lean_object* v___x_2784_; 
v___x_2779_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__2));
v___x_2780_ = lean_unsigned_to_nat(4u);
v___x_2781_ = lean_unsigned_to_nat(236u);
v___x_2782_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1));
v___x_2783_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0));
v___x_2784_ = l_mkPanicMessageWithDecl(v___x_2783_, v___x_2782_, v___x_2781_, v___x_2780_, v___x_2779_);
return v___x_2784_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(lean_object* v___x_2785_, lean_object* v_as_x27_2786_, lean_object* v_b_2787_){
_start:
{
if (lean_obj_tag(v_as_x27_2786_) == 0)
{
return v_b_2787_;
}
else
{
lean_object* v_head_2788_; lean_object* v_tail_2789_; lean_object* v_fst_2790_; lean_object* v_snd_2791_; lean_object* v___x_2793_; uint8_t v_isShared_2794_; uint8_t v_isSharedCheck_2812_; 
v_head_2788_ = lean_ctor_get(v_as_x27_2786_, 0);
v_tail_2789_ = lean_ctor_get(v_as_x27_2786_, 1);
v_fst_2790_ = lean_ctor_get(v_b_2787_, 0);
v_snd_2791_ = lean_ctor_get(v_b_2787_, 1);
v_isSharedCheck_2812_ = !lean_is_exclusive(v_b_2787_);
if (v_isSharedCheck_2812_ == 0)
{
v___x_2793_ = v_b_2787_;
v_isShared_2794_ = v_isSharedCheck_2812_;
goto v_resetjp_2792_;
}
else
{
lean_inc(v_snd_2791_);
lean_inc(v_fst_2790_);
lean_dec(v_b_2787_);
v___x_2793_ = lean_box(0);
v_isShared_2794_ = v_isSharedCheck_2812_;
goto v_resetjp_2792_;
}
v_resetjp_2792_:
{
lean_object* v_map_2796_; uint8_t v___x_2810_; 
v___x_2810_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(v___x_2785_, v_head_2788_);
if (v___x_2810_ == 0)
{
v_map_2796_ = v_fst_2790_;
goto v___jp_2795_;
}
else
{
lean_object* v___x_2811_; 
lean_inc(v_snd_2791_);
lean_inc(v_head_2788_);
v___x_2811_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(v_fst_2790_, v_head_2788_, v_snd_2791_);
v_map_2796_ = v___x_2811_;
goto v___jp_2795_;
}
v___jp_2795_:
{
lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2797_ = lean_unsigned_to_nat(0u);
v___x_2798_ = lean_nat_dec_eq(v_snd_2791_, v___x_2797_);
if (v___x_2798_ == 0)
{
lean_object* v___x_2799_; lean_object* v___x_2800_; lean_object* v___x_2802_; 
v___x_2799_ = lean_unsigned_to_nat(1u);
v___x_2800_ = lean_nat_sub(v_snd_2791_, v___x_2799_);
lean_dec(v_snd_2791_);
if (v_isShared_2794_ == 0)
{
lean_ctor_set(v___x_2793_, 1, v___x_2800_);
lean_ctor_set(v___x_2793_, 0, v_map_2796_);
v___x_2802_ = v___x_2793_;
goto v_reusejp_2801_;
}
else
{
lean_object* v_reuseFailAlloc_2804_; 
v_reuseFailAlloc_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2804_, 0, v_map_2796_);
lean_ctor_set(v_reuseFailAlloc_2804_, 1, v___x_2800_);
v___x_2802_ = v_reuseFailAlloc_2804_;
goto v_reusejp_2801_;
}
v_reusejp_2801_:
{
v_as_x27_2786_ = v_tail_2789_;
v_b_2787_ = v___x_2802_;
goto _start;
}
}
else
{
lean_object* v___x_2805_; lean_object* v___x_2806_; 
lean_dec_ref(v_map_2796_);
lean_del_object(v___x_2793_);
lean_dec(v_snd_2791_);
v___x_2805_ = lean_obj_once(&l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3, &l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3_once, _init_l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__3);
v___x_2806_ = l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__1(v___x_2805_);
if (lean_obj_tag(v___x_2806_) == 0)
{
lean_object* v_a_2807_; 
v_a_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2807_);
lean_dec_ref_known(v___x_2806_, 1);
return v_a_2807_;
}
else
{
lean_object* v_a_2808_; 
v_a_2808_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2806_, 1);
v_as_x27_2786_ = v_tail_2789_;
v_b_2787_ = v_a_2808_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___boxed(lean_object* v___x_2813_, lean_object* v_as_x27_2814_, lean_object* v_b_2815_){
_start:
{
lean_object* v_res_2816_; 
v_res_2816_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(v___x_2813_, v_as_x27_2814_, v_b_2815_);
lean_dec(v_as_x27_2814_);
lean_dec_ref(v___x_2813_);
return v_res_2816_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0(void){
_start:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v___x_2819_; 
v___x_2817_ = lean_box(0);
v___x_2818_ = lean_unsigned_to_nat(16u);
v___x_2819_ = lean_mk_array(v___x_2818_, v___x_2817_);
return v___x_2819_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1(void){
_start:
{
lean_object* v___x_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; 
v___x_2820_ = lean_obj_once(&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0, &l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0_once, _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__0);
v___x_2821_ = lean_unsigned_to_nat(0u);
v___x_2822_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2822_, 0, v___x_2821_);
lean_ctor_set(v___x_2822_, 1, v___x_2820_);
return v___x_2822_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3(void){
_start:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; 
v___x_2824_ = ((lean_object*)(l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__2));
v___x_2825_ = lean_unsigned_to_nat(2u);
v___x_2826_ = lean_unsigned_to_nat(238u);
v___x_2827_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__1));
v___x_2828_ = ((lean_object*)(l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg___closed__0));
v___x_2829_ = l_mkPanicMessageWithDecl(v___x_2828_, v___x_2827_, v___x_2826_, v___x_2825_, v___x_2824_);
return v___x_2829_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices(lean_object* v_env_2830_, lean_object* v_targets_2831_){
_start:
{
lean_object* v___x_2832_; lean_object* v_asyncMode_2833_; lean_object* v___x_2834_; lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v_fst_2837_; lean_object* v_snd_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2864_; 
v___x_2832_ = l_Lean_Compiler_LCNF_declOrderExt;
v_asyncMode_2833_ = lean_ctor_get(v___x_2832_, 2);
v___x_2834_ = ((lean_object*)(l_Lean_Compiler_LCNF_isDeclTransparent___closed__0));
v___x_2835_ = lean_box(0);
v___x_2836_ = l___private_Lean_Environment_0__Lean_EnvExtension_getStateUnsafe___redArg(v___x_2834_, v___x_2832_, v_env_2830_, v_asyncMode_2833_, v___x_2835_);
v_fst_2837_ = lean_ctor_get(v___x_2836_, 0);
v_snd_2838_ = lean_ctor_get(v___x_2836_, 1);
v_isSharedCheck_2864_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2840_ = v___x_2836_;
v_isShared_2841_ = v_isSharedCheck_2864_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_snd_2838_);
lean_inc(v_fst_2837_);
lean_dec(v___x_2836_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2864_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v_i_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v___x_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; lean_object* v___x_2850_; lean_object* v_map_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2855_; 
v_i_2842_ = l_Lean_NameSet_size(v_snd_2838_);
lean_dec(v_snd_2838_);
v___x_2843_ = lean_unsigned_to_nat(0u);
v___x_2844_ = lean_unsigned_to_nat(4u);
v___x_2845_ = lean_nat_mul(v_i_2842_, v___x_2844_);
v___x_2846_ = lean_unsigned_to_nat(3u);
v___x_2847_ = lean_nat_div(v___x_2845_, v___x_2846_);
lean_dec(v___x_2845_);
v___x_2848_ = l_Nat_nextPowerOfTwo(v___x_2847_);
lean_dec(v___x_2847_);
v___x_2849_ = lean_box(0);
v___x_2850_ = lean_mk_array(v___x_2848_, v___x_2849_);
v_map_2851_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_map_2851_, 0, v___x_2843_);
lean_ctor_set(v_map_2851_, 1, v___x_2850_);
v___x_2852_ = lean_obj_once(&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1, &l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1_once, _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__1);
v___x_2853_ = l_Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0(v___x_2852_, v_targets_2831_);
if (v_isShared_2841_ == 0)
{
lean_ctor_set(v___x_2840_, 1, v_i_2842_);
lean_ctor_set(v___x_2840_, 0, v_map_2851_);
v___x_2855_ = v___x_2840_;
goto v_reusejp_2854_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v_map_2851_);
lean_ctor_set(v_reuseFailAlloc_2863_, 1, v_i_2842_);
v___x_2855_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2854_;
}
v_reusejp_2854_:
{
lean_object* v___x_2856_; lean_object* v_fst_2857_; lean_object* v_size_2858_; lean_object* v___x_2859_; uint8_t v___x_2860_; 
v___x_2856_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(v___x_2853_, v_fst_2837_, v___x_2855_);
lean_dec(v_fst_2837_);
lean_dec_ref(v___x_2853_);
v_fst_2857_ = lean_ctor_get(v___x_2856_, 0);
lean_inc(v_fst_2857_);
lean_dec_ref(v___x_2856_);
v_size_2858_ = lean_ctor_get(v_fst_2857_, 0);
v___x_2859_ = lean_array_get_size(v_targets_2831_);
v___x_2860_ = lean_nat_dec_eq(v_size_2858_, v___x_2859_);
if (v___x_2860_ == 0)
{
lean_object* v___x_2861_; lean_object* v___x_2862_; 
lean_dec(v_fst_2857_);
v___x_2861_ = lean_obj_once(&l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3, &l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3_once, _init_l_Lean_Compiler_LCNF_getImpureDeclIndices___closed__3);
v___x_2862_ = l_panic___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__5(v___x_2861_);
return v___x_2862_;
}
else
{
return v_fst_2857_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_getImpureDeclIndices___boxed(lean_object* v_env_2865_, lean_object* v_targets_2866_){
_start:
{
lean_object* v_res_2867_; 
v_res_2867_ = l_Lean_Compiler_LCNF_getImpureDeclIndices(v_env_2865_, v_targets_2866_);
lean_dec_ref(v_targets_2866_);
return v_res_2867_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2(lean_object* v_00_u03b2_2868_, lean_object* v_m_2869_, lean_object* v_a_2870_){
_start:
{
uint8_t v___x_2871_; 
v___x_2871_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___redArg(v_m_2869_, v_a_2870_);
return v___x_2871_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2___boxed(lean_object* v_00_u03b2_2872_, lean_object* v_m_2873_, lean_object* v_a_2874_){
_start:
{
uint8_t v_res_2875_; lean_object* v_r_2876_; 
v_res_2875_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2(v_00_u03b2_2872_, v_m_2873_, v_a_2874_);
lean_dec(v_a_2874_);
lean_dec_ref(v_m_2873_);
v_r_2876_ = lean_box(v_res_2875_);
return v_r_2876_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3(lean_object* v_00_u03b2_2877_, lean_object* v_m_2878_, lean_object* v_a_2879_, lean_object* v_b_2880_){
_start:
{
lean_object* v___x_2881_; 
v___x_2881_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3___redArg(v_m_2878_, v_a_2879_, v_b_2880_);
return v___x_2881_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4(lean_object* v___x_2882_, lean_object* v_as_2883_, lean_object* v_as_x27_2884_, lean_object* v_b_2885_, lean_object* v_a_2886_){
_start:
{
lean_object* v___x_2887_; 
v___x_2887_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___redArg(v___x_2882_, v_as_x27_2884_, v_b_2885_);
return v___x_2887_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4___boxed(lean_object* v___x_2888_, lean_object* v_as_2889_, lean_object* v_as_x27_2890_, lean_object* v_b_2891_, lean_object* v_a_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_List_forIn_x27_loop___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__4(v___x_2888_, v_as_2889_, v_as_x27_2890_, v_b_2891_, v_a_2892_);
lean_dec(v_as_x27_2890_);
lean_dec(v_as_2889_);
lean_dec_ref(v___x_2888_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0(lean_object* v_00_u03b2_2894_, lean_object* v_m_2895_, lean_object* v_a_2896_, lean_object* v_b_2897_){
_start:
{
lean_object* v___x_2898_; 
v___x_2898_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00Std_DHashMap_Internal_Raw_u2080_Const_insertManyIfNewUnit___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__0_spec__0___redArg(v_m_2895_, v_a_2896_, v_b_2897_);
return v___x_2898_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4(lean_object* v_00_u03b2_2899_, lean_object* v_a_2900_, lean_object* v_x_2901_){
_start:
{
uint8_t v___x_2902_; 
v___x_2902_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___redArg(v_a_2900_, v_x_2901_);
return v___x_2902_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4___boxed(lean_object* v_00_u03b2_2903_, lean_object* v_a_2904_, lean_object* v_x_2905_){
_start:
{
uint8_t v_res_2906_; lean_object* v_r_2907_; 
v_res_2906_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__2_spec__4(v_00_u03b2_2903_, v_a_2904_, v_x_2905_);
lean_dec(v_x_2905_);
lean_dec(v_a_2904_);
v_r_2907_ = lean_box(v_res_2906_);
return v_r_2907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6(lean_object* v_00_u03b2_2908_, lean_object* v_data_2909_){
_start:
{
lean_object* v___x_2910_; 
v___x_2910_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6___redArg(v_data_2909_);
return v___x_2910_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7(lean_object* v_00_u03b2_2911_, lean_object* v_a_2912_, lean_object* v_b_2913_, lean_object* v_x_2914_){
_start:
{
lean_object* v___x_2915_; 
v___x_2915_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__7___redArg(v_a_2912_, v_b_2913_, v_x_2914_);
return v___x_2915_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8(lean_object* v_00_u03b2_2916_, lean_object* v_i_2917_, lean_object* v_source_2918_, lean_object* v_target_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8___redArg(v_i_2917_, v_source_2918_, v_target_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_2921_, lean_object* v_x_2922_, lean_object* v_x_2923_){
_start:
{
lean_object* v___x_2924_; 
v___x_2924_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Compiler_LCNF_getImpureDeclIndices_spec__3_spec__6_spec__8_spec__10___redArg(v_x_2922_, v_x_2923_);
return v___x_2924_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3496178540____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_baseTransparentDeclsExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1977385844____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_monoTransparentDeclsExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_975450157____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_impureTransparentDeclsExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_1453085006____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_baseExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_baseExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_3223139564____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_monoExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_monoExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_882283628____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_impureExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_impureExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_346366741____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_impureSigExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_impureSigExt);
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_PhaseExt_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_PhaseExt_2540780834____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Compiler_LCNF_declOrderExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Compiler_LCNF_declOrderExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Compiler_LCNF_mkDeclExt___auto__1 = _init_l_Lean_Compiler_LCNF_mkDeclExt___auto__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_mkDeclExt___auto__1);
l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1 = _init_l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_mkSigDeclExt___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PublicDeclsExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PublicDeclsExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
}
#ifdef __cplusplus
}
#endif
