// Lean compiler output
// Module: Lean.Compiler.LCNF.Probing
// Imports: public import Lean.Compiler.LCNF.PhaseExt
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
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
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_size(uint8_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__6_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__6_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__7_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_getJps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_getJps___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_getJps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___redArg___lam__0___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "probe"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(210, 226, 36, 16, 11, 213, 189, 181)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(60, 150, 55, 23, 179, 120, 143, 48)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Probing"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(171, 176, 148, 85, 84, 103, 135, 80)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(22, 95, 52, 82, 201, 93, 155, 160)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(191, 135, 77, 48, 10, 193, 107, 167)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 243, 178, 155, 207, 21, 86, 75)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 32, 97, 236, 167, 177, 209, 200)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Probe"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 220, 56, 107, 178, 130, 195, 235)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 198, 238, 95, 73, 174, 204, 216)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 160, 124, 63, 130, 135, 193, 8)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 79, 181, 134, 106, 79, 240, 31)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 80, 58, 113, 74, 134, 55, 21)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(163, 102, 91, 152, 148, 12, 32, 152)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(193, 195, 87, 22, 184, 160, 76, 111)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__10));
v___x_25_ = l_StateRefT_x27_instMonad___redArg(v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object* v_f_30_, lean_object* v_data_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_){
_start:
{
lean_object* v___x_37_; lean_object* v_toApplicative_38_; lean_object* v_toFunctor_39_; lean_object* v_toSeq_40_; lean_object* v_toSeqLeft_41_; lean_object* v_toSeqRight_42_; lean_object* v___f_43_; lean_object* v___f_44_; lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___x_47_; lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v_toApplicative_54_; lean_object* v___x_56_; uint8_t v_isShared_57_; uint8_t v_isSharedCheck_85_; 
v___x_37_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_38_ = lean_ctor_get(v___x_37_, 0);
v_toFunctor_39_ = lean_ctor_get(v_toApplicative_38_, 0);
v_toSeq_40_ = lean_ctor_get(v_toApplicative_38_, 2);
v_toSeqLeft_41_ = lean_ctor_get(v_toApplicative_38_, 3);
v_toSeqRight_42_ = lean_ctor_get(v_toApplicative_38_, 4);
v___f_43_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_44_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_39_, 2);
v___f_45_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_45_, 0, v_toFunctor_39_);
v___f_46_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_46_, 0, v_toFunctor_39_);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___f_45_);
lean_ctor_set(v___x_47_, 1, v___f_46_);
lean_inc(v_toSeqRight_42_);
v___f_48_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_48_, 0, v_toSeqRight_42_);
lean_inc(v_toSeqLeft_41_);
v___f_49_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_49_, 0, v_toSeqLeft_41_);
lean_inc(v_toSeq_40_);
v___f_50_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_50_, 0, v_toSeq_40_);
v___x_51_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_51_, 0, v___x_47_);
lean_ctor_set(v___x_51_, 1, v___f_43_);
lean_ctor_set(v___x_51_, 2, v___f_50_);
lean_ctor_set(v___x_51_, 3, v___f_49_);
lean_ctor_set(v___x_51_, 4, v___f_48_);
v___x_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_52_, 0, v___x_51_);
lean_ctor_set(v___x_52_, 1, v___f_44_);
v___x_53_ = l_StateRefT_x27_instMonad___redArg(v___x_52_);
v_toApplicative_54_ = lean_ctor_get(v___x_53_, 0);
v_isSharedCheck_85_ = !lean_is_exclusive(v___x_53_);
if (v_isSharedCheck_85_ == 0)
{
lean_object* v_unused_86_; 
v_unused_86_ = lean_ctor_get(v___x_53_, 1);
lean_dec(v_unused_86_);
v___x_56_ = v___x_53_;
v_isShared_57_ = v_isSharedCheck_85_;
goto v_resetjp_55_;
}
else
{
lean_inc(v_toApplicative_54_);
lean_dec(v___x_53_);
v___x_56_ = lean_box(0);
v_isShared_57_ = v_isSharedCheck_85_;
goto v_resetjp_55_;
}
v_resetjp_55_:
{
lean_object* v_toFunctor_58_; lean_object* v_toSeq_59_; lean_object* v_toSeqLeft_60_; lean_object* v_toSeqRight_61_; lean_object* v___x_63_; uint8_t v_isShared_64_; uint8_t v_isSharedCheck_83_; 
v_toFunctor_58_ = lean_ctor_get(v_toApplicative_54_, 0);
v_toSeq_59_ = lean_ctor_get(v_toApplicative_54_, 2);
v_toSeqLeft_60_ = lean_ctor_get(v_toApplicative_54_, 3);
v_toSeqRight_61_ = lean_ctor_get(v_toApplicative_54_, 4);
v_isSharedCheck_83_ = !lean_is_exclusive(v_toApplicative_54_);
if (v_isSharedCheck_83_ == 0)
{
lean_object* v_unused_84_; 
v_unused_84_ = lean_ctor_get(v_toApplicative_54_, 1);
lean_dec(v_unused_84_);
v___x_63_ = v_toApplicative_54_;
v_isShared_64_ = v_isSharedCheck_83_;
goto v_resetjp_62_;
}
else
{
lean_inc(v_toSeqRight_61_);
lean_inc(v_toSeqLeft_60_);
lean_inc(v_toSeq_59_);
lean_inc(v_toFunctor_58_);
lean_dec(v_toApplicative_54_);
v___x_63_ = lean_box(0);
v_isShared_64_ = v_isSharedCheck_83_;
goto v_resetjp_62_;
}
v_resetjp_62_:
{
lean_object* v___f_65_; lean_object* v___f_66_; lean_object* v___f_67_; lean_object* v___f_68_; lean_object* v___x_69_; lean_object* v___f_70_; lean_object* v___f_71_; lean_object* v___f_72_; lean_object* v___x_74_; 
v___f_65_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_66_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_58_);
v___f_67_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_67_, 0, v_toFunctor_58_);
v___f_68_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_68_, 0, v_toFunctor_58_);
v___x_69_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_69_, 0, v___f_67_);
lean_ctor_set(v___x_69_, 1, v___f_68_);
v___f_70_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_70_, 0, v_toSeqRight_61_);
v___f_71_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_71_, 0, v_toSeqLeft_60_);
v___f_72_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_72_, 0, v_toSeq_59_);
if (v_isShared_64_ == 0)
{
lean_ctor_set(v___x_63_, 4, v___f_70_);
lean_ctor_set(v___x_63_, 3, v___f_71_);
lean_ctor_set(v___x_63_, 2, v___f_72_);
lean_ctor_set(v___x_63_, 1, v___f_65_);
lean_ctor_set(v___x_63_, 0, v___x_69_);
v___x_74_ = v___x_63_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_82_; 
v_reuseFailAlloc_82_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_82_, 0, v___x_69_);
lean_ctor_set(v_reuseFailAlloc_82_, 1, v___f_65_);
lean_ctor_set(v_reuseFailAlloc_82_, 2, v___f_72_);
lean_ctor_set(v_reuseFailAlloc_82_, 3, v___f_71_);
lean_ctor_set(v_reuseFailAlloc_82_, 4, v___f_70_);
v___x_74_ = v_reuseFailAlloc_82_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
lean_object* v___x_76_; 
if (v_isShared_57_ == 0)
{
lean_ctor_set(v___x_56_, 1, v___f_66_);
lean_ctor_set(v___x_56_, 0, v___x_74_);
v___x_76_ = v___x_56_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_74_);
lean_ctor_set(v_reuseFailAlloc_81_, 1, v___f_66_);
v___x_76_ = v_reuseFailAlloc_81_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
size_t v_sz_77_; size_t v___x_78_; lean_object* v___x_12__overap_79_; lean_object* v___x_80_; 
v_sz_77_ = lean_array_size(v_data_31_);
v___x_78_ = ((size_t)0ULL);
v___x_12__overap_79_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_76_, v_f_30_, v_sz_77_, v___x_78_, v_data_31_);
lean_inc(v___y_35_);
lean_inc_ref(v___y_34_);
lean_inc(v___y_33_);
lean_inc_ref(v___y_32_);
v___x_80_ = lean_apply_5(v___x_12__overap_79_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, lean_box(0));
return v___x_80_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object* v_f_87_, lean_object* v_data_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l_Lean_Compiler_LCNF_Probe_map___redArg(v_f_87_, v_data_88_, v___y_89_, v___y_90_, v___y_91_, v___y_92_);
lean_dec(v___y_92_);
lean_dec_ref(v___y_91_);
lean_dec(v___y_90_);
lean_dec_ref(v___y_89_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object* v_00_u03b1_95_, lean_object* v_00_u03b2_96_, lean_object* v_f_97_, lean_object* v_data_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_, lean_object* v___y_102_){
_start:
{
lean_object* v___x_104_; lean_object* v_toApplicative_105_; lean_object* v_toFunctor_106_; lean_object* v_toSeq_107_; lean_object* v_toSeqLeft_108_; lean_object* v_toSeqRight_109_; lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_toApplicative_121_; lean_object* v___x_123_; uint8_t v_isShared_124_; uint8_t v_isSharedCheck_152_; 
v___x_104_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_105_ = lean_ctor_get(v___x_104_, 0);
v_toFunctor_106_ = lean_ctor_get(v_toApplicative_105_, 0);
v_toSeq_107_ = lean_ctor_get(v_toApplicative_105_, 2);
v_toSeqLeft_108_ = lean_ctor_get(v_toApplicative_105_, 3);
v_toSeqRight_109_ = lean_ctor_get(v_toApplicative_105_, 4);
v___f_110_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_111_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
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
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_152_ == 0)
{
lean_object* v_unused_153_; 
v_unused_153_ = lean_ctor_get(v___x_120_, 1);
lean_dec(v_unused_153_);
v___x_123_ = v___x_120_;
v_isShared_124_ = v_isSharedCheck_152_;
goto v_resetjp_122_;
}
else
{
lean_inc(v_toApplicative_121_);
lean_dec(v___x_120_);
v___x_123_ = lean_box(0);
v_isShared_124_ = v_isSharedCheck_152_;
goto v_resetjp_122_;
}
v_resetjp_122_:
{
lean_object* v_toFunctor_125_; lean_object* v_toSeq_126_; lean_object* v_toSeqLeft_127_; lean_object* v_toSeqRight_128_; lean_object* v___x_130_; uint8_t v_isShared_131_; uint8_t v_isSharedCheck_150_; 
v_toFunctor_125_ = lean_ctor_get(v_toApplicative_121_, 0);
v_toSeq_126_ = lean_ctor_get(v_toApplicative_121_, 2);
v_toSeqLeft_127_ = lean_ctor_get(v_toApplicative_121_, 3);
v_toSeqRight_128_ = lean_ctor_get(v_toApplicative_121_, 4);
v_isSharedCheck_150_ = !lean_is_exclusive(v_toApplicative_121_);
if (v_isSharedCheck_150_ == 0)
{
lean_object* v_unused_151_; 
v_unused_151_ = lean_ctor_get(v_toApplicative_121_, 1);
lean_dec(v_unused_151_);
v___x_130_ = v_toApplicative_121_;
v_isShared_131_ = v_isSharedCheck_150_;
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
v_isShared_131_ = v_isSharedCheck_150_;
goto v_resetjp_129_;
}
v_resetjp_129_:
{
lean_object* v___f_132_; lean_object* v___f_133_; lean_object* v___f_134_; lean_object* v___f_135_; lean_object* v___x_136_; lean_object* v___f_137_; lean_object* v___f_138_; lean_object* v___f_139_; lean_object* v___x_141_; 
v___f_132_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_133_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
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
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v___x_136_);
lean_ctor_set(v_reuseFailAlloc_149_, 1, v___f_132_);
lean_ctor_set(v_reuseFailAlloc_149_, 2, v___f_139_);
lean_ctor_set(v_reuseFailAlloc_149_, 3, v___f_138_);
lean_ctor_set(v_reuseFailAlloc_149_, 4, v___f_137_);
v___x_141_ = v_reuseFailAlloc_149_;
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
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v___f_133_);
v___x_143_ = v_reuseFailAlloc_148_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
size_t v_sz_144_; size_t v___x_145_; lean_object* v___x_86__overap_146_; lean_object* v___x_147_; 
v_sz_144_ = lean_array_size(v_data_98_);
v___x_145_ = ((size_t)0ULL);
v___x_86__overap_146_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_143_, v_f_97_, v_sz_144_, v___x_145_, v_data_98_);
lean_inc(v___y_102_);
lean_inc_ref(v___y_101_);
lean_inc(v___y_100_);
lean_inc_ref(v___y_99_);
v___x_147_ = lean_apply_5(v___x_86__overap_146_, v___y_99_, v___y_100_, v___y_101_, v___y_102_, lean_box(0));
return v___x_147_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object* v_00_u03b1_154_, lean_object* v_00_u03b2_155_, lean_object* v_f_156_, lean_object* v_data_157_, lean_object* v___y_158_, lean_object* v___y_159_, lean_object* v___y_160_, lean_object* v___y_161_, lean_object* v___y_162_){
_start:
{
lean_object* v_res_163_; 
v_res_163_ = l_Lean_Compiler_LCNF_Probe_map(v_00_u03b1_154_, v_00_u03b2_155_, v_f_156_, v_data_157_, v___y_158_, v___y_159_, v___y_160_, v___y_161_);
lean_dec(v___y_161_);
lean_dec_ref(v___y_160_);
lean_dec(v___y_159_);
lean_dec_ref(v___y_158_);
return v_res_163_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object* v_f_164_, lean_object* v_acc_165_, lean_object* v_a_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_){
_start:
{
lean_object* v___x_172_; 
lean_inc(v___y_170_);
lean_inc_ref(v___y_169_);
lean_inc(v___y_168_);
lean_inc_ref(v___y_167_);
lean_inc(v_a_166_);
v___x_172_ = lean_apply_6(v_f_164_, v_a_166_, v___y_167_, v___y_168_, v___y_169_, v___y_170_, lean_box(0));
if (lean_obj_tag(v___x_172_) == 0)
{
lean_object* v_a_173_; lean_object* v___x_175_; uint8_t v_isShared_176_; uint8_t v_isSharedCheck_185_; 
v_a_173_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_185_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_185_ == 0)
{
v___x_175_ = v___x_172_;
v_isShared_176_ = v_isSharedCheck_185_;
goto v_resetjp_174_;
}
else
{
lean_inc(v_a_173_);
lean_dec(v___x_172_);
v___x_175_ = lean_box(0);
v_isShared_176_ = v_isSharedCheck_185_;
goto v_resetjp_174_;
}
v_resetjp_174_:
{
uint8_t v___x_177_; 
v___x_177_ = lean_unbox(v_a_173_);
lean_dec(v_a_173_);
if (v___x_177_ == 0)
{
lean_object* v___x_179_; 
lean_dec(v_a_166_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v_acc_165_);
v___x_179_ = v___x_175_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v_acc_165_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
else
{
lean_object* v___x_181_; lean_object* v___x_183_; 
v___x_181_ = lean_array_push(v_acc_165_, v_a_166_);
if (v_isShared_176_ == 0)
{
lean_ctor_set(v___x_175_, 0, v___x_181_);
v___x_183_ = v___x_175_;
goto v_reusejp_182_;
}
else
{
lean_object* v_reuseFailAlloc_184_; 
v_reuseFailAlloc_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_184_, 0, v___x_181_);
v___x_183_ = v_reuseFailAlloc_184_;
goto v_reusejp_182_;
}
v_reusejp_182_:
{
return v___x_183_;
}
}
}
}
else
{
lean_object* v_a_186_; lean_object* v___x_188_; uint8_t v_isShared_189_; uint8_t v_isSharedCheck_193_; 
lean_dec(v_a_166_);
lean_dec_ref(v_acc_165_);
v_a_186_ = lean_ctor_get(v___x_172_, 0);
v_isSharedCheck_193_ = !lean_is_exclusive(v___x_172_);
if (v_isSharedCheck_193_ == 0)
{
v___x_188_ = v___x_172_;
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
else
{
lean_inc(v_a_186_);
lean_dec(v___x_172_);
v___x_188_ = lean_box(0);
v_isShared_189_ = v_isSharedCheck_193_;
goto v_resetjp_187_;
}
v_resetjp_187_:
{
lean_object* v___x_191_; 
if (v_isShared_189_ == 0)
{
v___x_191_ = v___x_188_;
goto v_reusejp_190_;
}
else
{
lean_object* v_reuseFailAlloc_192_; 
v_reuseFailAlloc_192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_192_, 0, v_a_186_);
v___x_191_ = v_reuseFailAlloc_192_;
goto v_reusejp_190_;
}
v_reusejp_190_:
{
return v___x_191_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object* v_f_194_, lean_object* v_acc_195_, lean_object* v_a_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(v_f_194_, v_acc_195_, v_a_196_, v___y_197_, v___y_198_, v___y_199_, v___y_200_);
lean_dec(v___y_200_);
lean_dec_ref(v___y_199_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object* v_f_205_, lean_object* v_data_206_, lean_object* v___y_207_, lean_object* v___y_208_, lean_object* v___y_209_, lean_object* v___y_210_){
_start:
{
lean_object* v___x_212_; lean_object* v_toApplicative_213_; lean_object* v_toFunctor_214_; lean_object* v_toSeq_215_; lean_object* v_toSeqLeft_216_; lean_object* v_toSeqRight_217_; lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___x_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___f_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_toApplicative_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_272_; 
v___x_212_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_213_ = lean_ctor_get(v___x_212_, 0);
v_toFunctor_214_ = lean_ctor_get(v_toApplicative_213_, 0);
v_toSeq_215_ = lean_ctor_get(v_toApplicative_213_, 2);
v_toSeqLeft_216_ = lean_ctor_get(v_toApplicative_213_, 3);
v_toSeqRight_217_ = lean_ctor_get(v_toApplicative_213_, 4);
v___f_218_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_219_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_214_, 2);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_220_, 0, v_toFunctor_214_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_221_, 0, v_toFunctor_214_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___f_220_);
lean_ctor_set(v___x_222_, 1, v___f_221_);
lean_inc(v_toSeqRight_217_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_223_, 0, v_toSeqRight_217_);
lean_inc(v_toSeqLeft_216_);
v___f_224_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_224_, 0, v_toSeqLeft_216_);
lean_inc(v_toSeq_215_);
v___f_225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_225_, 0, v_toSeq_215_);
v___x_226_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_226_, 0, v___x_222_);
lean_ctor_set(v___x_226_, 1, v___f_218_);
lean_ctor_set(v___x_226_, 2, v___f_225_);
lean_ctor_set(v___x_226_, 3, v___f_224_);
lean_ctor_set(v___x_226_, 4, v___f_223_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_226_);
lean_ctor_set(v___x_227_, 1, v___f_219_);
v___x_228_ = l_StateRefT_x27_instMonad___redArg(v___x_227_);
v_toApplicative_229_ = lean_ctor_get(v___x_228_, 0);
v_isSharedCheck_272_ = !lean_is_exclusive(v___x_228_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v___x_228_, 1);
lean_dec(v_unused_273_);
v___x_231_ = v___x_228_;
v_isShared_232_ = v_isSharedCheck_272_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_toApplicative_229_);
lean_dec(v___x_228_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_272_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v_toFunctor_233_; lean_object* v_toSeq_234_; lean_object* v_toSeqLeft_235_; lean_object* v_toSeqRight_236_; lean_object* v___x_238_; uint8_t v_isShared_239_; uint8_t v_isSharedCheck_270_; 
v_toFunctor_233_ = lean_ctor_get(v_toApplicative_229_, 0);
v_toSeq_234_ = lean_ctor_get(v_toApplicative_229_, 2);
v_toSeqLeft_235_ = lean_ctor_get(v_toApplicative_229_, 3);
v_toSeqRight_236_ = lean_ctor_get(v_toApplicative_229_, 4);
v_isSharedCheck_270_ = !lean_is_exclusive(v_toApplicative_229_);
if (v_isSharedCheck_270_ == 0)
{
lean_object* v_unused_271_; 
v_unused_271_ = lean_ctor_get(v_toApplicative_229_, 1);
lean_dec(v_unused_271_);
v___x_238_ = v_toApplicative_229_;
v_isShared_239_ = v_isSharedCheck_270_;
goto v_resetjp_237_;
}
else
{
lean_inc(v_toSeqRight_236_);
lean_inc(v_toSeqLeft_235_);
lean_inc(v_toSeq_234_);
lean_inc(v_toFunctor_233_);
lean_dec(v_toApplicative_229_);
v___x_238_ = lean_box(0);
v_isShared_239_ = v_isSharedCheck_270_;
goto v_resetjp_237_;
}
v_resetjp_237_:
{
lean_object* v___f_240_; lean_object* v___f_241_; lean_object* v___f_242_; lean_object* v___f_243_; lean_object* v___x_244_; lean_object* v___f_245_; lean_object* v___f_246_; lean_object* v___f_247_; lean_object* v___x_249_; 
v___f_240_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_241_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_233_);
v___f_242_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_242_, 0, v_toFunctor_233_);
v___f_243_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_243_, 0, v_toFunctor_233_);
v___x_244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_244_, 0, v___f_242_);
lean_ctor_set(v___x_244_, 1, v___f_243_);
v___f_245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_245_, 0, v_toSeqRight_236_);
v___f_246_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_246_, 0, v_toSeqLeft_235_);
v___f_247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_247_, 0, v_toSeq_234_);
if (v_isShared_239_ == 0)
{
lean_ctor_set(v___x_238_, 4, v___f_245_);
lean_ctor_set(v___x_238_, 3, v___f_246_);
lean_ctor_set(v___x_238_, 2, v___f_247_);
lean_ctor_set(v___x_238_, 1, v___f_240_);
lean_ctor_set(v___x_238_, 0, v___x_244_);
v___x_249_ = v___x_238_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_269_, 1, v___f_240_);
lean_ctor_set(v_reuseFailAlloc_269_, 2, v___f_247_);
lean_ctor_set(v_reuseFailAlloc_269_, 3, v___f_246_);
lean_ctor_set(v_reuseFailAlloc_269_, 4, v___f_245_);
v___x_249_ = v_reuseFailAlloc_269_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
lean_object* v___x_251_; 
if (v_isShared_232_ == 0)
{
lean_ctor_set(v___x_231_, 1, v___f_241_);
lean_ctor_set(v___x_231_, 0, v___x_249_);
v___x_251_ = v___x_231_;
goto v_reusejp_250_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_249_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___f_241_);
v___x_251_ = v_reuseFailAlloc_268_;
goto v_reusejp_250_;
}
v_reusejp_250_:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; uint8_t v___x_255_; 
v___x_252_ = lean_unsigned_to_nat(0u);
v___x_253_ = lean_array_get_size(v_data_206_);
v___x_254_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0));
v___x_255_ = lean_nat_dec_lt(v___x_252_, v___x_253_);
if (v___x_255_ == 0)
{
lean_object* v___x_256_; 
lean_dec_ref(v___x_251_);
lean_dec_ref(v_data_206_);
lean_dec_ref(v_f_205_);
v___x_256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_256_, 0, v___x_254_);
return v___x_256_;
}
else
{
lean_object* v___f_257_; uint8_t v___x_258_; 
v___f_257_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_257_, 0, v_f_205_);
v___x_258_ = lean_nat_dec_le(v___x_253_, v___x_253_);
if (v___x_258_ == 0)
{
if (v___x_255_ == 0)
{
lean_object* v___x_259_; 
lean_dec_ref(v___f_257_);
lean_dec_ref(v___x_251_);
lean_dec_ref(v_data_206_);
v___x_259_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_259_, 0, v___x_254_);
return v___x_259_;
}
else
{
size_t v___x_260_; size_t v___x_261_; lean_object* v___x_352__overap_262_; lean_object* v___x_263_; 
v___x_260_ = ((size_t)0ULL);
v___x_261_ = lean_usize_of_nat(v___x_253_);
v___x_352__overap_262_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_251_, v___f_257_, v_data_206_, v___x_260_, v___x_261_, v___x_254_);
lean_inc(v___y_210_);
lean_inc_ref(v___y_209_);
lean_inc(v___y_208_);
lean_inc_ref(v___y_207_);
v___x_263_ = lean_apply_5(v___x_352__overap_262_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, lean_box(0));
return v___x_263_;
}
}
else
{
size_t v___x_264_; size_t v___x_265_; lean_object* v___x_356__overap_266_; lean_object* v___x_267_; 
v___x_264_ = ((size_t)0ULL);
v___x_265_ = lean_usize_of_nat(v___x_253_);
v___x_356__overap_266_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_251_, v___f_257_, v_data_206_, v___x_264_, v___x_265_, v___x_254_);
lean_inc(v___y_210_);
lean_inc_ref(v___y_209_);
lean_inc(v___y_208_);
lean_inc_ref(v___y_207_);
v___x_267_ = lean_apply_5(v___x_356__overap_266_, v___y_207_, v___y_208_, v___y_209_, v___y_210_, lean_box(0));
return v___x_267_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object* v_f_274_, lean_object* v_data_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_){
_start:
{
lean_object* v_res_281_; 
v_res_281_ = l_Lean_Compiler_LCNF_Probe_filter___redArg(v_f_274_, v_data_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_);
lean_dec(v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
return v_res_281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object* v_00_u03b1_282_, lean_object* v_f_283_, lean_object* v_data_284_, lean_object* v___y_285_, lean_object* v___y_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v___x_290_; lean_object* v_toApplicative_291_; lean_object* v_toFunctor_292_; lean_object* v_toSeq_293_; lean_object* v_toSeqLeft_294_; lean_object* v_toSeqRight_295_; lean_object* v___f_296_; lean_object* v___f_297_; lean_object* v___f_298_; lean_object* v___f_299_; lean_object* v___x_300_; lean_object* v___f_301_; lean_object* v___f_302_; lean_object* v___f_303_; lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v_toApplicative_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_350_; 
v___x_290_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_291_ = lean_ctor_get(v___x_290_, 0);
v_toFunctor_292_ = lean_ctor_get(v_toApplicative_291_, 0);
v_toSeq_293_ = lean_ctor_get(v_toApplicative_291_, 2);
v_toSeqLeft_294_ = lean_ctor_get(v_toApplicative_291_, 3);
v_toSeqRight_295_ = lean_ctor_get(v_toApplicative_291_, 4);
v___f_296_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_297_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_292_, 2);
v___f_298_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_298_, 0, v_toFunctor_292_);
v___f_299_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_299_, 0, v_toFunctor_292_);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___f_298_);
lean_ctor_set(v___x_300_, 1, v___f_299_);
lean_inc(v_toSeqRight_295_);
v___f_301_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_301_, 0, v_toSeqRight_295_);
lean_inc(v_toSeqLeft_294_);
v___f_302_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_302_, 0, v_toSeqLeft_294_);
lean_inc(v_toSeq_293_);
v___f_303_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_303_, 0, v_toSeq_293_);
v___x_304_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_304_, 0, v___x_300_);
lean_ctor_set(v___x_304_, 1, v___f_296_);
lean_ctor_set(v___x_304_, 2, v___f_303_);
lean_ctor_set(v___x_304_, 3, v___f_302_);
lean_ctor_set(v___x_304_, 4, v___f_301_);
v___x_305_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_305_, 0, v___x_304_);
lean_ctor_set(v___x_305_, 1, v___f_297_);
v___x_306_ = l_StateRefT_x27_instMonad___redArg(v___x_305_);
v_toApplicative_307_ = lean_ctor_get(v___x_306_, 0);
v_isSharedCheck_350_ = !lean_is_exclusive(v___x_306_);
if (v_isSharedCheck_350_ == 0)
{
lean_object* v_unused_351_; 
v_unused_351_ = lean_ctor_get(v___x_306_, 1);
lean_dec(v_unused_351_);
v___x_309_ = v___x_306_;
v_isShared_310_ = v_isSharedCheck_350_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_toApplicative_307_);
lean_dec(v___x_306_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_350_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v_toFunctor_311_; lean_object* v_toSeq_312_; lean_object* v_toSeqLeft_313_; lean_object* v_toSeqRight_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_348_; 
v_toFunctor_311_ = lean_ctor_get(v_toApplicative_307_, 0);
v_toSeq_312_ = lean_ctor_get(v_toApplicative_307_, 2);
v_toSeqLeft_313_ = lean_ctor_get(v_toApplicative_307_, 3);
v_toSeqRight_314_ = lean_ctor_get(v_toApplicative_307_, 4);
v_isSharedCheck_348_ = !lean_is_exclusive(v_toApplicative_307_);
if (v_isSharedCheck_348_ == 0)
{
lean_object* v_unused_349_; 
v_unused_349_ = lean_ctor_get(v_toApplicative_307_, 1);
lean_dec(v_unused_349_);
v___x_316_ = v_toApplicative_307_;
v_isShared_317_ = v_isSharedCheck_348_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_toSeqRight_314_);
lean_inc(v_toSeqLeft_313_);
lean_inc(v_toSeq_312_);
lean_inc(v_toFunctor_311_);
lean_dec(v_toApplicative_307_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_348_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___f_318_; lean_object* v___f_319_; lean_object* v___f_320_; lean_object* v___f_321_; lean_object* v___x_322_; lean_object* v___f_323_; lean_object* v___f_324_; lean_object* v___f_325_; lean_object* v___x_327_; 
v___f_318_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_319_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_311_);
v___f_320_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_320_, 0, v_toFunctor_311_);
v___f_321_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_321_, 0, v_toFunctor_311_);
v___x_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_322_, 0, v___f_320_);
lean_ctor_set(v___x_322_, 1, v___f_321_);
v___f_323_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_323_, 0, v_toSeqRight_314_);
v___f_324_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_324_, 0, v_toSeqLeft_313_);
v___f_325_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_325_, 0, v_toSeq_312_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 4, v___f_323_);
lean_ctor_set(v___x_316_, 3, v___f_324_);
lean_ctor_set(v___x_316_, 2, v___f_325_);
lean_ctor_set(v___x_316_, 1, v___f_318_);
lean_ctor_set(v___x_316_, 0, v___x_322_);
v___x_327_ = v___x_316_;
goto v_reusejp_326_;
}
else
{
lean_object* v_reuseFailAlloc_347_; 
v_reuseFailAlloc_347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_347_, 0, v___x_322_);
lean_ctor_set(v_reuseFailAlloc_347_, 1, v___f_318_);
lean_ctor_set(v_reuseFailAlloc_347_, 2, v___f_325_);
lean_ctor_set(v_reuseFailAlloc_347_, 3, v___f_324_);
lean_ctor_set(v_reuseFailAlloc_347_, 4, v___f_323_);
v___x_327_ = v_reuseFailAlloc_347_;
goto v_reusejp_326_;
}
v_reusejp_326_:
{
lean_object* v___x_329_; 
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 1, v___f_319_);
lean_ctor_set(v___x_309_, 0, v___x_327_);
v___x_329_ = v___x_309_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_346_; 
v_reuseFailAlloc_346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_346_, 0, v___x_327_);
lean_ctor_set(v_reuseFailAlloc_346_, 1, v___f_319_);
v___x_329_ = v_reuseFailAlloc_346_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; uint8_t v___x_333_; 
v___x_330_ = lean_unsigned_to_nat(0u);
v___x_331_ = lean_array_get_size(v_data_284_);
v___x_332_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0));
v___x_333_ = lean_nat_dec_lt(v___x_330_, v___x_331_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; 
lean_dec_ref(v___x_329_);
lean_dec_ref(v_data_284_);
lean_dec_ref(v_f_283_);
v___x_334_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_332_);
return v___x_334_;
}
else
{
lean_object* v___f_335_; uint8_t v___x_336_; 
v___f_335_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_335_, 0, v_f_283_);
v___x_336_ = lean_nat_dec_le(v___x_331_, v___x_331_);
if (v___x_336_ == 0)
{
if (v___x_333_ == 0)
{
lean_object* v___x_337_; 
lean_dec_ref(v___f_335_);
lean_dec_ref(v___x_329_);
lean_dec_ref(v_data_284_);
v___x_337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_337_, 0, v___x_332_);
return v___x_337_;
}
else
{
size_t v___x_338_; size_t v___x_339_; lean_object* v___x_464__overap_340_; lean_object* v___x_341_; 
v___x_338_ = ((size_t)0ULL);
v___x_339_ = lean_usize_of_nat(v___x_331_);
v___x_464__overap_340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_329_, v___f_335_, v_data_284_, v___x_338_, v___x_339_, v___x_332_);
lean_inc(v___y_288_);
lean_inc_ref(v___y_287_);
lean_inc(v___y_286_);
lean_inc_ref(v___y_285_);
v___x_341_ = lean_apply_5(v___x_464__overap_340_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, lean_box(0));
return v___x_341_;
}
}
else
{
size_t v___x_342_; size_t v___x_343_; lean_object* v___x_467__overap_344_; lean_object* v___x_345_; 
v___x_342_ = ((size_t)0ULL);
v___x_343_ = lean_usize_of_nat(v___x_331_);
v___x_467__overap_344_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_329_, v___f_335_, v_data_284_, v___x_342_, v___x_343_, v___x_332_);
lean_inc(v___y_288_);
lean_inc_ref(v___y_287_);
lean_inc(v___y_286_);
lean_inc_ref(v___y_285_);
v___x_345_ = lean_apply_5(v___x_467__overap_344_, v___y_285_, v___y_286_, v___y_287_, v___y_288_, lean_box(0));
return v___x_345_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object* v_00_u03b1_352_, lean_object* v_f_353_, lean_object* v_data_354_, lean_object* v___y_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_){
_start:
{
lean_object* v_res_360_; 
v_res_360_ = l_Lean_Compiler_LCNF_Probe_filter(v_00_u03b1_352_, v_f_353_, v_data_354_, v___y_355_, v___y_356_, v___y_357_, v___y_358_);
lean_dec(v___y_358_);
lean_dec_ref(v___y_357_);
lean_dec(v___y_356_);
lean_dec_ref(v___y_355_);
return v_res_360_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object* v_inst_361_, lean_object* v_x1_362_, lean_object* v_x2_363_){
_start:
{
lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_364_ = lean_apply_2(v_inst_361_, v_x1_362_, v_x2_363_);
v___x_365_ = lean_unbox(v___x_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object* v_inst_366_, lean_object* v_x1_367_, lean_object* v_x2_368_){
_start:
{
uint8_t v_res_369_; lean_object* v_r_370_; 
v_res_369_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(v_inst_366_, v_x1_367_, v_x2_368_);
v_r_370_ = lean_box(v_res_369_);
return v_r_370_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object* v_inst_371_, lean_object* v_data_372_){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_374_ = lean_array_get_size(v_data_372_);
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = lean_nat_dec_eq(v___x_374_, v___x_375_);
if (v___x_376_ == 0)
{
lean_object* v___f_377_; lean_object* v___y_379_; lean_object* v___y_380_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___y_386_; uint8_t v___x_388_; 
v___f_377_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_377_, 0, v_inst_371_);
v___x_383_ = lean_unsigned_to_nat(1u);
v___x_384_ = lean_nat_sub(v___x_374_, v___x_383_);
v___x_388_ = lean_nat_dec_le(v___x_375_, v___x_384_);
if (v___x_388_ == 0)
{
lean_inc(v___x_384_);
v___y_386_ = v___x_384_;
goto v___jp_385_;
}
else
{
v___y_386_ = v___x_375_;
goto v___jp_385_;
}
v___jp_378_:
{
lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_381_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_377_, v___x_374_, v_data_372_, v___y_379_, v___y_380_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_380_);
v___x_382_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_382_, 0, v___x_381_);
return v___x_382_;
}
v___jp_385_:
{
uint8_t v___x_387_; 
v___x_387_ = lean_nat_dec_le(v___y_386_, v___x_384_);
if (v___x_387_ == 0)
{
lean_dec(v___x_384_);
lean_inc(v___y_386_);
v___y_379_ = v___y_386_;
v___y_380_ = v___y_386_;
goto v___jp_378_;
}
else
{
v___y_379_ = v___y_386_;
v___y_380_ = v___x_384_;
goto v___jp_378_;
}
}
}
else
{
lean_object* v___x_389_; 
lean_dec_ref(v_inst_371_);
v___x_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_389_, 0, v_data_372_);
return v___x_389_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object* v_inst_390_, lean_object* v_data_391_, lean_object* v___y_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg(v_inst_390_, v_data_391_);
return v_res_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object* v_00_u03b1_394_, lean_object* v_inst_395_, lean_object* v_inst_396_, lean_object* v_inst_397_, lean_object* v_data_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_){
_start:
{
lean_object* v___x_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v___x_404_ = lean_array_get_size(v_data_398_);
v___x_405_ = lean_unsigned_to_nat(0u);
v___x_406_ = lean_nat_dec_eq(v___x_404_, v___x_405_);
if (v___x_406_ == 0)
{
lean_object* v___f_407_; lean_object* v___y_409_; lean_object* v___y_410_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___y_416_; uint8_t v___x_418_; 
v___f_407_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_407_, 0, v_inst_397_);
v___x_413_ = lean_unsigned_to_nat(1u);
v___x_414_ = lean_nat_sub(v___x_404_, v___x_413_);
v___x_418_ = lean_nat_dec_le(v___x_405_, v___x_414_);
if (v___x_418_ == 0)
{
lean_inc(v___x_414_);
v___y_416_ = v___x_414_;
goto v___jp_415_;
}
else
{
v___y_416_ = v___x_405_;
goto v___jp_415_;
}
v___jp_408_:
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_407_, v___x_404_, v_data_398_, v___y_409_, v___y_410_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_410_);
v___x_412_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
return v___x_412_;
}
v___jp_415_:
{
uint8_t v___x_417_; 
v___x_417_ = lean_nat_dec_le(v___y_416_, v___x_414_);
if (v___x_417_ == 0)
{
lean_dec(v___x_414_);
lean_inc(v___y_416_);
v___y_409_ = v___y_416_;
v___y_410_ = v___y_416_;
goto v___jp_408_;
}
else
{
v___y_409_ = v___y_416_;
v___y_410_ = v___x_414_;
goto v___jp_408_;
}
}
}
else
{
lean_object* v___x_419_; 
lean_dec_ref(v_inst_397_);
v___x_419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_419_, 0, v_data_398_);
return v___x_419_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object* v_00_u03b1_420_, lean_object* v_inst_421_, lean_object* v_inst_422_, lean_object* v_inst_423_, lean_object* v_data_424_, lean_object* v___y_425_, lean_object* v___y_426_, lean_object* v___y_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_Compiler_LCNF_Probe_sorted(v_00_u03b1_420_, v_inst_421_, v_inst_422_, v_inst_423_, v_data_424_, v___y_425_, v___y_426_, v___y_427_, v___y_428_);
lean_dec(v___y_428_);
lean_dec_ref(v___y_427_);
lean_dec(v___y_426_);
lean_dec_ref(v___y_425_);
lean_dec(v_inst_421_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t v_pu_431_, lean_object* v_x_432_){
_start:
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = l_Lean_Compiler_LCNF_Decl_size(v_pu_431_, v_x_432_);
v___x_434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_434_, 0, v___x_433_);
lean_ctor_set(v___x_434_, 1, v_x_432_);
return v___x_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object* v_pu_435_, lean_object* v_x_436_){
_start:
{
uint8_t v_pu_boxed_437_; lean_object* v_res_438_; 
v_pu_boxed_437_ = lean_unbox(v_pu_435_);
v_res_438_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(v_pu_boxed_437_, v_x_436_);
return v_res_438_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object* v_x_439_, lean_object* v_x_440_){
_start:
{
lean_object* v_fst_441_; lean_object* v_snd_442_; lean_object* v_fst_443_; lean_object* v_snd_444_; uint8_t v___x_445_; 
v_fst_441_ = lean_ctor_get(v_x_439_, 0);
v_snd_442_ = lean_ctor_get(v_x_439_, 1);
v_fst_443_ = lean_ctor_get(v_x_440_, 0);
v_snd_444_ = lean_ctor_get(v_x_440_, 1);
v___x_445_ = lean_nat_dec_eq(v_fst_441_, v_fst_443_);
if (v___x_445_ == 0)
{
uint8_t v___x_446_; 
v___x_446_ = lean_nat_dec_lt(v_fst_441_, v_fst_443_);
return v___x_446_;
}
else
{
lean_object* v_toSignature_447_; lean_object* v_toSignature_448_; lean_object* v_name_449_; lean_object* v_name_450_; uint8_t v___x_451_; 
v_toSignature_447_ = lean_ctor_get(v_snd_442_, 0);
v_toSignature_448_ = lean_ctor_get(v_snd_444_, 0);
v_name_449_ = lean_ctor_get(v_toSignature_447_, 0);
v_name_450_ = lean_ctor_get(v_toSignature_448_, 0);
v___x_451_ = l_Lean_Name_lt(v_name_449_, v_name_450_);
return v___x_451_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object* v_x_452_, lean_object* v_x_453_){
_start:
{
uint8_t v_res_454_; lean_object* v_r_455_; 
v_res_454_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(v_x_452_, v_x_453_);
lean_dec_ref(v_x_453_);
lean_dec_ref(v_x_452_);
v_r_455_ = lean_box(v_res_454_);
return v_r_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t v_pu_476_, lean_object* v_decls_477_){
_start:
{
lean_object* v___x_479_; lean_object* v___f_480_; lean_object* v___x_481_; size_t v_sz_482_; size_t v___x_483_; lean_object* v_decls_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_479_ = lean_box(v_pu_476_);
v___f_480_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_480_, 0, v___x_479_);
v___x_481_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v_sz_482_ = lean_array_size(v_decls_477_);
v___x_483_ = ((size_t)0ULL);
v_decls_484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_481_, v___f_480_, v_sz_482_, v___x_483_, v_decls_477_);
v___x_485_ = lean_array_get_size(v_decls_484_);
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = lean_nat_dec_eq(v___x_485_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___f_488_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___y_497_; uint8_t v___x_499_; 
v___f_488_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10));
v___x_494_ = lean_unsigned_to_nat(1u);
v___x_495_ = lean_nat_sub(v___x_485_, v___x_494_);
v___x_499_ = lean_nat_dec_le(v___x_486_, v___x_495_);
if (v___x_499_ == 0)
{
lean_inc(v___x_495_);
v___y_497_ = v___x_495_;
goto v___jp_496_;
}
else
{
v___y_497_ = v___x_486_;
goto v___jp_496_;
}
v___jp_489_:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_488_, v___x_485_, v_decls_484_, v___y_490_, v___y_491_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_491_);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
return v___x_493_;
}
v___jp_496_:
{
uint8_t v___x_498_; 
v___x_498_ = lean_nat_dec_le(v___y_497_, v___x_495_);
if (v___x_498_ == 0)
{
lean_dec(v___x_495_);
lean_inc(v___y_497_);
v___y_490_ = v___y_497_;
v___y_491_ = v___y_497_;
goto v___jp_489_;
}
else
{
v___y_490_ = v___y_497_;
v___y_491_ = v___x_495_;
goto v___jp_489_;
}
}
}
else
{
lean_object* v___x_500_; 
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v_decls_484_);
return v___x_500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object* v_pu_501_, lean_object* v_decls_502_, lean_object* v___y_503_){
_start:
{
uint8_t v_pu_boxed_504_; lean_object* v_res_505_; 
v_pu_boxed_504_ = lean_unbox(v_pu_501_);
v_res_505_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(v_pu_boxed_504_, v_decls_502_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t v_pu_506_, lean_object* v_decls_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___x_513_; lean_object* v___f_514_; lean_object* v___x_515_; size_t v_sz_516_; size_t v___x_517_; lean_object* v_decls_518_; lean_object* v___x_519_; lean_object* v___x_520_; uint8_t v___x_521_; 
v___x_513_ = lean_box(v_pu_506_);
v___f_514_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_514_, 0, v___x_513_);
v___x_515_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v_sz_516_ = lean_array_size(v_decls_507_);
v___x_517_ = ((size_t)0ULL);
v_decls_518_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_515_, v___f_514_, v_sz_516_, v___x_517_, v_decls_507_);
v___x_519_ = lean_array_get_size(v_decls_518_);
v___x_520_ = lean_unsigned_to_nat(0u);
v___x_521_ = lean_nat_dec_eq(v___x_519_, v___x_520_);
if (v___x_521_ == 0)
{
lean_object* v___f_522_; lean_object* v___y_524_; lean_object* v___y_525_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___y_531_; uint8_t v___x_533_; 
v___f_522_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10));
v___x_528_ = lean_unsigned_to_nat(1u);
v___x_529_ = lean_nat_sub(v___x_519_, v___x_528_);
v___x_533_ = lean_nat_dec_le(v___x_520_, v___x_529_);
if (v___x_533_ == 0)
{
lean_inc(v___x_529_);
v___y_531_ = v___x_529_;
goto v___jp_530_;
}
else
{
v___y_531_ = v___x_520_;
goto v___jp_530_;
}
v___jp_523_:
{
lean_object* v___x_526_; lean_object* v___x_527_; 
v___x_526_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_522_, v___x_519_, v_decls_518_, v___y_524_, v___y_525_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_525_);
v___x_527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_527_, 0, v___x_526_);
return v___x_527_;
}
v___jp_530_:
{
uint8_t v___x_532_; 
v___x_532_ = lean_nat_dec_le(v___y_531_, v___x_529_);
if (v___x_532_ == 0)
{
lean_dec(v___x_529_);
lean_inc(v___y_531_);
v___y_524_ = v___y_531_;
v___y_525_ = v___y_531_;
goto v___jp_523_;
}
else
{
v___y_524_ = v___y_531_;
v___y_525_ = v___x_529_;
goto v___jp_523_;
}
}
}
else
{
lean_object* v___x_534_; 
v___x_534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_534_, 0, v_decls_518_);
return v___x_534_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object* v_pu_535_, lean_object* v_decls_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_){
_start:
{
uint8_t v_pu_boxed_542_; lean_object* v_res_543_; 
v_pu_boxed_542_ = lean_unbox(v_pu_535_);
v_res_543_ = l_Lean_Compiler_LCNF_Probe_sortedBySize(v_pu_boxed_542_, v_decls_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
return v_res_543_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object* v_inst_544_, lean_object* v_inst_545_, lean_object* v_a_546_, lean_object* v_x_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_){
_start:
{
lean_object* v___x_554_; 
lean_inc(v_a_546_);
lean_inc_ref(v_inst_545_);
lean_inc_ref(v_inst_544_);
v___x_554_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_544_, v_inst_545_, v___y_548_, v_a_546_);
if (lean_obj_tag(v___x_554_) == 1)
{
lean_object* v_val_555_; lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_566_; 
v_val_555_ = lean_ctor_get(v___x_554_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_554_);
if (v_isSharedCheck_566_ == 0)
{
v___x_557_ = v___x_554_;
v_isShared_558_ = v_isSharedCheck_566_;
goto v_resetjp_556_;
}
else
{
lean_inc(v_val_555_);
lean_dec(v___x_554_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_566_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_563_; 
v___x_559_ = lean_unsigned_to_nat(1u);
v___x_560_ = lean_nat_add(v_val_555_, v___x_559_);
lean_dec(v_val_555_);
v___x_561_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_544_, v_inst_545_, v___y_548_, v_a_546_, v___x_560_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_561_);
v___x_563_ = v___x_557_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_561_);
v___x_563_ = v_reuseFailAlloc_565_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
lean_object* v___x_564_; 
v___x_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_564_, 0, v___x_563_);
return v___x_564_;
}
}
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
lean_dec(v___x_554_);
v___x_567_ = lean_unsigned_to_nat(1u);
v___x_568_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_544_, v_inst_545_, v___y_548_, v_a_546_, v___x_567_);
v___x_569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
v___x_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_570_, 0, v___x_569_);
return v___x_570_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object* v_inst_571_, lean_object* v_inst_572_, lean_object* v_a_573_, lean_object* v_x_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_){
_start:
{
lean_object* v_res_581_; 
v_res_581_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(v_inst_571_, v_inst_572_, v_a_573_, v_x_574_, v___y_575_, v___y_576_, v___y_577_, v___y_578_, v___y_579_);
lean_dec(v___y_579_);
lean_dec_ref(v___y_578_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object* v_x1_582_, lean_object* v_x2_583_, lean_object* v_x3_584_){
_start:
{
lean_object* v___x_585_; lean_object* v___x_586_; 
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v_x2_583_);
lean_ctor_set(v___x_585_, 1, v_x3_584_);
v___x_586_ = lean_array_push(v_x1_582_, v___x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object* v___x_587_, lean_object* v___f_588_, lean_object* v_acc_589_, lean_object* v_l_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_587_, v___f_588_, v_acc_589_, v_l_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object* v_inst_596_, lean_object* v_inst_597_, lean_object* v_data_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_){
_start:
{
lean_object* v___x_604_; lean_object* v_toApplicative_605_; lean_object* v_toFunctor_606_; lean_object* v_toSeq_607_; lean_object* v_toSeqLeft_608_; lean_object* v_toSeqRight_609_; lean_object* v___f_610_; lean_object* v___f_611_; lean_object* v___f_612_; lean_object* v___f_613_; lean_object* v___x_614_; lean_object* v___f_615_; lean_object* v___f_616_; lean_object* v___f_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v_toApplicative_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_691_; 
v___x_604_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_605_ = lean_ctor_get(v___x_604_, 0);
v_toFunctor_606_ = lean_ctor_get(v_toApplicative_605_, 0);
v_toSeq_607_ = lean_ctor_get(v_toApplicative_605_, 2);
v_toSeqLeft_608_ = lean_ctor_get(v_toApplicative_605_, 3);
v_toSeqRight_609_ = lean_ctor_get(v_toApplicative_605_, 4);
v___f_610_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_611_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_606_, 2);
v___f_612_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_612_, 0, v_toFunctor_606_);
v___f_613_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_613_, 0, v_toFunctor_606_);
v___x_614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_614_, 0, v___f_612_);
lean_ctor_set(v___x_614_, 1, v___f_613_);
lean_inc(v_toSeqRight_609_);
v___f_615_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_615_, 0, v_toSeqRight_609_);
lean_inc(v_toSeqLeft_608_);
v___f_616_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_616_, 0, v_toSeqLeft_608_);
lean_inc(v_toSeq_607_);
v___f_617_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_617_, 0, v_toSeq_607_);
v___x_618_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_618_, 0, v___x_614_);
lean_ctor_set(v___x_618_, 1, v___f_610_);
lean_ctor_set(v___x_618_, 2, v___f_617_);
lean_ctor_set(v___x_618_, 3, v___f_616_);
lean_ctor_set(v___x_618_, 4, v___f_615_);
v___x_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_619_, 0, v___x_618_);
lean_ctor_set(v___x_619_, 1, v___f_611_);
v___x_620_ = l_StateRefT_x27_instMonad___redArg(v___x_619_);
v_toApplicative_621_ = lean_ctor_get(v___x_620_, 0);
v_isSharedCheck_691_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_691_ == 0)
{
lean_object* v_unused_692_; 
v_unused_692_ = lean_ctor_get(v___x_620_, 1);
lean_dec(v_unused_692_);
v___x_623_ = v___x_620_;
v_isShared_624_ = v_isSharedCheck_691_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_toApplicative_621_);
lean_dec(v___x_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_691_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v_toFunctor_625_; lean_object* v_toSeq_626_; lean_object* v_toSeqLeft_627_; lean_object* v_toSeqRight_628_; lean_object* v___x_630_; uint8_t v_isShared_631_; uint8_t v_isSharedCheck_689_; 
v_toFunctor_625_ = lean_ctor_get(v_toApplicative_621_, 0);
v_toSeq_626_ = lean_ctor_get(v_toApplicative_621_, 2);
v_toSeqLeft_627_ = lean_ctor_get(v_toApplicative_621_, 3);
v_toSeqRight_628_ = lean_ctor_get(v_toApplicative_621_, 4);
v_isSharedCheck_689_ = !lean_is_exclusive(v_toApplicative_621_);
if (v_isSharedCheck_689_ == 0)
{
lean_object* v_unused_690_; 
v_unused_690_ = lean_ctor_get(v_toApplicative_621_, 1);
lean_dec(v_unused_690_);
v___x_630_ = v_toApplicative_621_;
v_isShared_631_ = v_isSharedCheck_689_;
goto v_resetjp_629_;
}
else
{
lean_inc(v_toSeqRight_628_);
lean_inc(v_toSeqLeft_627_);
lean_inc(v_toSeq_626_);
lean_inc(v_toFunctor_625_);
lean_dec(v_toApplicative_621_);
v___x_630_ = lean_box(0);
v_isShared_631_ = v_isSharedCheck_689_;
goto v_resetjp_629_;
}
v_resetjp_629_:
{
lean_object* v___f_632_; lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___f_635_; lean_object* v___f_636_; lean_object* v___x_637_; lean_object* v___f_638_; lean_object* v___f_639_; lean_object* v___f_640_; lean_object* v___x_642_; 
v___f_632_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_632_, 0, v_inst_596_);
lean_closure_set(v___f_632_, 1, v_inst_597_);
v___f_633_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_634_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_625_);
v___f_635_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_635_, 0, v_toFunctor_625_);
v___f_636_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_636_, 0, v_toFunctor_625_);
v___x_637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_637_, 0, v___f_635_);
lean_ctor_set(v___x_637_, 1, v___f_636_);
v___f_638_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_638_, 0, v_toSeqRight_628_);
v___f_639_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_639_, 0, v_toSeqLeft_627_);
v___f_640_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_640_, 0, v_toSeq_626_);
if (v_isShared_631_ == 0)
{
lean_ctor_set(v___x_630_, 4, v___f_638_);
lean_ctor_set(v___x_630_, 3, v___f_639_);
lean_ctor_set(v___x_630_, 2, v___f_640_);
lean_ctor_set(v___x_630_, 1, v___f_633_);
lean_ctor_set(v___x_630_, 0, v___x_637_);
v___x_642_ = v___x_630_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_688_; 
v_reuseFailAlloc_688_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_688_, 0, v___x_637_);
lean_ctor_set(v_reuseFailAlloc_688_, 1, v___f_633_);
lean_ctor_set(v_reuseFailAlloc_688_, 2, v___f_640_);
lean_ctor_set(v_reuseFailAlloc_688_, 3, v___f_639_);
lean_ctor_set(v_reuseFailAlloc_688_, 4, v___f_638_);
v___x_642_ = v_reuseFailAlloc_688_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_644_; 
if (v_isShared_624_ == 0)
{
lean_ctor_set(v___x_623_, 1, v___f_634_);
lean_ctor_set(v___x_623_, 0, v___x_642_);
v___x_644_ = v___x_623_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v___x_642_);
lean_ctor_set(v_reuseFailAlloc_687_, 1, v___f_634_);
v___x_644_ = v_reuseFailAlloc_687_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v_map_654_; size_t v_sz_655_; size_t v___x_656_; lean_object* v___x_874__overap_657_; lean_object* v___x_658_; 
v___x_645_ = lean_array_get_size(v_data_598_);
v___x_646_ = lean_unsigned_to_nat(0u);
v___x_647_ = lean_unsigned_to_nat(4u);
v___x_648_ = lean_nat_mul(v___x_645_, v___x_647_);
v___x_649_ = lean_unsigned_to_nat(3u);
v___x_650_ = lean_nat_div(v___x_648_, v___x_649_);
lean_dec(v___x_648_);
v___x_651_ = l_Nat_nextPowerOfTwo(v___x_650_);
lean_dec(v___x_650_);
v___x_652_ = lean_box(0);
v___x_653_ = lean_mk_array(v___x_651_, v___x_652_);
v_map_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_map_654_, 0, v___x_646_);
lean_ctor_set(v_map_654_, 1, v___x_653_);
v_sz_655_ = lean_array_size(v_data_598_);
v___x_656_ = ((size_t)0ULL);
v___x_874__overap_657_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_644_, v_data_598_, v___f_632_, v_sz_655_, v___x_656_, v_map_654_);
lean_inc(v___y_602_);
lean_inc_ref(v___y_601_);
lean_inc(v___y_600_);
lean_inc_ref(v___y_599_);
v___x_658_ = lean_apply_5(v___x_874__overap_657_, v___y_599_, v___y_600_, v___y_601_, v___y_602_, lean_box(0));
if (lean_obj_tag(v___x_658_) == 0)
{
lean_object* v_a_659_; lean_object* v___x_661_; uint8_t v_isShared_662_; uint8_t v_isSharedCheck_678_; 
v_a_659_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_678_ == 0)
{
v___x_661_ = v___x_658_;
v_isShared_662_ = v_isSharedCheck_678_;
goto v_resetjp_660_;
}
else
{
lean_inc(v_a_659_);
lean_dec(v___x_658_);
v___x_661_ = lean_box(0);
v_isShared_662_ = v_isSharedCheck_678_;
goto v_resetjp_660_;
}
v_resetjp_660_:
{
lean_object* v_size_663_; lean_object* v_buckets_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; uint8_t v___x_668_; 
v_size_663_ = lean_ctor_get(v_a_659_, 0);
lean_inc(v_size_663_);
v_buckets_664_ = lean_ctor_get(v_a_659_, 1);
lean_inc_ref(v_buckets_664_);
lean_dec(v_a_659_);
v___x_665_ = lean_mk_empty_array_with_capacity(v_size_663_);
lean_dec(v_size_663_);
v___x_666_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_667_ = lean_array_get_size(v_buckets_664_);
v___x_668_ = lean_nat_dec_lt(v___x_646_, v___x_667_);
if (v___x_668_ == 0)
{
lean_object* v___x_670_; 
lean_dec_ref(v_buckets_664_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v___x_665_);
v___x_670_ = v___x_661_;
goto v_reusejp_669_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v___x_665_);
v___x_670_ = v_reuseFailAlloc_671_;
goto v_reusejp_669_;
}
v_reusejp_669_:
{
return v___x_670_;
}
}
else
{
lean_object* v___f_672_; size_t v___x_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v___f_672_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1));
v___x_673_ = lean_usize_of_nat(v___x_667_);
v___x_674_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_666_, v___f_672_, v_buckets_664_, v___x_656_, v___x_673_, v___x_665_);
if (v_isShared_662_ == 0)
{
lean_ctor_set(v___x_661_, 0, v___x_674_);
v___x_676_ = v___x_661_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
else
{
lean_object* v_a_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_686_; 
v_a_679_ = lean_ctor_get(v___x_658_, 0);
v_isSharedCheck_686_ = !lean_is_exclusive(v___x_658_);
if (v_isSharedCheck_686_ == 0)
{
v___x_681_ = v___x_658_;
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_a_679_);
lean_dec(v___x_658_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_686_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_684_; 
if (v_isShared_682_ == 0)
{
v___x_684_ = v___x_681_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v_a_679_);
v___x_684_ = v_reuseFailAlloc_685_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
return v___x_684_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object* v_inst_693_, lean_object* v_inst_694_, lean_object* v_data_695_, lean_object* v___y_696_, lean_object* v___y_697_, lean_object* v___y_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_693_, v_inst_694_, v_data_695_, v___y_696_, v___y_697_, v___y_698_, v___y_699_);
lean_dec(v___y_699_);
lean_dec_ref(v___y_698_);
lean_dec(v___y_697_);
lean_dec_ref(v___y_696_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object* v_00_u03b1_702_, lean_object* v_inst_703_, lean_object* v_inst_704_, lean_object* v_inst_705_, lean_object* v_data_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_){
_start:
{
lean_object* v___x_712_; 
v___x_712_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_704_, v_inst_705_, v_data_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
return v___x_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object* v_00_u03b1_713_, lean_object* v_inst_714_, lean_object* v_inst_715_, lean_object* v_inst_716_, lean_object* v_data_717_, lean_object* v___y_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_){
_start:
{
lean_object* v_res_723_; 
v_res_723_ = l_Lean_Compiler_LCNF_Probe_countUnique(v_00_u03b1_713_, v_inst_714_, v_inst_715_, v_inst_716_, v_data_717_, v___y_718_, v___y_719_, v___y_720_, v___y_721_);
lean_dec(v___y_721_);
lean_dec_ref(v___y_720_);
lean_dec(v___y_719_);
lean_dec_ref(v___y_718_);
lean_dec_ref(v_inst_714_);
return v_res_723_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object* v_l_724_, lean_object* v_r_725_){
_start:
{
lean_object* v_snd_726_; lean_object* v_snd_727_; uint8_t v___x_728_; 
v_snd_726_ = lean_ctor_get(v_l_724_, 1);
v_snd_727_ = lean_ctor_get(v_r_725_, 1);
v___x_728_ = lean_nat_dec_lt(v_snd_726_, v_snd_727_);
return v___x_728_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object* v_l_729_, lean_object* v_r_730_){
_start:
{
uint8_t v_res_731_; lean_object* v_r_732_; 
v_res_731_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(v_l_729_, v_r_730_);
lean_dec_ref(v_r_730_);
lean_dec_ref(v_l_729_);
v_r_732_ = lean_box(v_res_731_);
return v_r_732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object* v_inst_734_, lean_object* v_inst_735_, lean_object* v_a_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v___f_742_; lean_object* v___x_743_; 
v___f_742_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0));
v___x_743_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_734_, v_inst_735_, v_a_736_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v_a_744_; lean_object* v___x_745_; lean_object* v___y_747_; lean_object* v___y_748_; lean_object* v___x_751_; uint8_t v___x_752_; 
v_a_744_ = lean_ctor_get(v___x_743_, 0);
lean_inc(v_a_744_);
v___x_745_ = lean_array_get_size(v_a_744_);
v___x_751_ = lean_unsigned_to_nat(0u);
v___x_752_ = lean_nat_dec_eq(v___x_745_, v___x_751_);
if (v___x_752_ == 0)
{
lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___y_756_; uint8_t v___x_758_; 
lean_dec_ref_known(v___x_743_, 1);
v___x_753_ = lean_unsigned_to_nat(1u);
v___x_754_ = lean_nat_sub(v___x_745_, v___x_753_);
v___x_758_ = lean_nat_dec_le(v___x_751_, v___x_754_);
if (v___x_758_ == 0)
{
lean_inc(v___x_754_);
v___y_756_ = v___x_754_;
goto v___jp_755_;
}
else
{
v___y_756_ = v___x_751_;
goto v___jp_755_;
}
v___jp_755_:
{
uint8_t v___x_757_; 
v___x_757_ = lean_nat_dec_le(v___y_756_, v___x_754_);
if (v___x_757_ == 0)
{
lean_dec(v___x_754_);
lean_inc(v___y_756_);
v___y_747_ = v___y_756_;
v___y_748_ = v___y_756_;
goto v___jp_746_;
}
else
{
v___y_747_ = v___y_756_;
v___y_748_ = v___x_754_;
goto v___jp_746_;
}
}
}
else
{
lean_dec(v_a_744_);
return v___x_743_;
}
v___jp_746_:
{
lean_object* v___x_749_; lean_object* v___x_750_; 
v___x_749_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_742_, v___x_745_, v_a_744_, v___y_747_, v___y_748_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_748_);
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_749_);
return v___x_750_;
}
}
else
{
return v___x_743_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object* v_inst_759_, lean_object* v_inst_760_, lean_object* v_a_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_){
_start:
{
lean_object* v_res_767_; 
v_res_767_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(v_inst_759_, v_inst_760_, v_a_761_, v___y_762_, v___y_763_, v___y_764_, v___y_765_);
lean_dec(v___y_765_);
lean_dec_ref(v___y_764_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
return v_res_767_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object* v_00_u03b1_768_, lean_object* v_inst_769_, lean_object* v_inst_770_, lean_object* v_inst_771_, lean_object* v_inst_772_, lean_object* v_a_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_){
_start:
{
lean_object* v___f_779_; lean_object* v___x_780_; 
v___f_779_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0));
v___x_780_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_770_, v_inst_771_, v_a_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v_a_781_; lean_object* v___x_782_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___x_788_; uint8_t v___x_789_; 
v_a_781_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_781_);
v___x_782_ = lean_array_get_size(v_a_781_);
v___x_788_ = lean_unsigned_to_nat(0u);
v___x_789_ = lean_nat_dec_eq(v___x_782_, v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___y_793_; uint8_t v___x_795_; 
lean_dec_ref_known(v___x_780_, 1);
v___x_790_ = lean_unsigned_to_nat(1u);
v___x_791_ = lean_nat_sub(v___x_782_, v___x_790_);
v___x_795_ = lean_nat_dec_le(v___x_788_, v___x_791_);
if (v___x_795_ == 0)
{
lean_inc(v___x_791_);
v___y_793_ = v___x_791_;
goto v___jp_792_;
}
else
{
v___y_793_ = v___x_788_;
goto v___jp_792_;
}
v___jp_792_:
{
uint8_t v___x_794_; 
v___x_794_ = lean_nat_dec_le(v___y_793_, v___x_791_);
if (v___x_794_ == 0)
{
lean_dec(v___x_791_);
lean_inc(v___y_793_);
v___y_784_ = v___y_793_;
v___y_785_ = v___y_793_;
goto v___jp_783_;
}
else
{
v___y_784_ = v___y_793_;
v___y_785_ = v___x_791_;
goto v___jp_783_;
}
}
}
else
{
lean_dec(v_a_781_);
return v___x_780_;
}
v___jp_783_:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_779_, v___x_782_, v_a_781_, v___y_784_, v___y_785_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_785_);
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
else
{
return v___x_780_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object* v_00_u03b1_796_, lean_object* v_inst_797_, lean_object* v_inst_798_, lean_object* v_inst_799_, lean_object* v_inst_800_, lean_object* v_a_801_, lean_object* v___y_802_, lean_object* v___y_803_, lean_object* v___y_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v_res_807_; 
v_res_807_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted(v_00_u03b1_796_, v_inst_797_, v_inst_798_, v_inst_799_, v_inst_800_, v_a_801_, v___y_802_, v___y_803_, v___y_804_, v___y_805_);
lean_dec(v___y_805_);
lean_dec_ref(v___y_804_);
lean_dec(v___y_803_);
lean_dec_ref(v___y_802_);
lean_dec(v_inst_800_);
lean_dec_ref(v_inst_797_);
return v_res_807_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t v_pu_808_, lean_object* v_c_809_, lean_object* v___y_810_, lean_object* v___y_811_, lean_object* v___y_812_, lean_object* v___y_813_, lean_object* v___y_814_){
_start:
{
switch(lean_obj_tag(v_c_809_))
{
case 0:
{
lean_object* v_decl_816_; lean_object* v_k_817_; lean_object* v___x_818_; lean_object* v_value_819_; lean_object* v___x_820_; lean_object* v___x_821_; 
v_decl_816_ = lean_ctor_get(v_c_809_, 0);
lean_inc_ref(v_decl_816_);
v_k_817_ = lean_ctor_get(v_c_809_, 1);
lean_inc_ref(v_k_817_);
lean_dec_ref_known(v_c_809_, 2);
v___x_818_ = lean_st_ref_take(v___y_810_);
v_value_819_ = lean_ctor_get(v_decl_816_, 3);
lean_inc(v_value_819_);
lean_dec_ref(v_decl_816_);
v___x_820_ = lean_array_push(v___x_818_, v_value_819_);
v___x_821_ = lean_st_ref_put(v___y_810_, v___x_820_);
v_c_809_ = v_k_817_;
goto _start;
}
case 1:
{
lean_object* v_decl_823_; lean_object* v_k_824_; lean_object* v_value_825_; lean_object* v___x_826_; 
v_decl_823_ = lean_ctor_get(v_c_809_, 0);
lean_inc_ref(v_decl_823_);
v_k_824_ = lean_ctor_get(v_c_809_, 1);
lean_inc_ref(v_k_824_);
lean_dec_ref_known(v_c_809_, 2);
v_value_825_ = lean_ctor_get(v_decl_823_, 4);
lean_inc_ref(v_value_825_);
lean_dec_ref(v_decl_823_);
v___x_826_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_808_, v_value_825_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
if (lean_obj_tag(v___x_826_) == 0)
{
lean_dec_ref_known(v___x_826_, 1);
v_c_809_ = v_k_824_;
goto _start;
}
else
{
lean_dec_ref(v_k_824_);
return v___x_826_;
}
}
case 2:
{
lean_object* v_decl_828_; lean_object* v_k_829_; lean_object* v_value_830_; lean_object* v___x_831_; 
v_decl_828_ = lean_ctor_get(v_c_809_, 0);
lean_inc_ref(v_decl_828_);
v_k_829_ = lean_ctor_get(v_c_809_, 1);
lean_inc_ref(v_k_829_);
lean_dec_ref_known(v_c_809_, 2);
v_value_830_ = lean_ctor_get(v_decl_828_, 4);
lean_inc_ref(v_value_830_);
lean_dec_ref(v_decl_828_);
v___x_831_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_808_, v_value_830_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
if (lean_obj_tag(v___x_831_) == 0)
{
lean_dec_ref_known(v___x_831_, 1);
v_c_809_ = v_k_829_;
goto _start;
}
else
{
lean_dec_ref(v_k_829_);
return v___x_831_;
}
}
case 4:
{
lean_object* v_cases_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_855_; 
v_cases_833_ = lean_ctor_get(v_c_809_, 0);
v_isSharedCheck_855_ = !lean_is_exclusive(v_c_809_);
if (v_isSharedCheck_855_ == 0)
{
v___x_835_ = v_c_809_;
v_isShared_836_ = v_isSharedCheck_855_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_cases_833_);
lean_dec(v_c_809_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_855_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
lean_object* v_alts_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; 
v_alts_837_ = lean_ctor_get(v_cases_833_, 3);
lean_inc_ref(v_alts_837_);
lean_dec_ref(v_cases_833_);
v___x_838_ = lean_unsigned_to_nat(0u);
v___x_839_ = lean_array_get_size(v_alts_837_);
v___x_840_ = lean_box(0);
v___x_841_ = lean_nat_dec_lt(v___x_838_, v___x_839_);
if (v___x_841_ == 0)
{
lean_object* v___x_843_; 
lean_dec_ref(v_alts_837_);
if (v_isShared_836_ == 0)
{
lean_ctor_set_tag(v___x_835_, 0);
lean_ctor_set(v___x_835_, 0, v___x_840_);
v___x_843_ = v___x_835_;
goto v_reusejp_842_;
}
else
{
lean_object* v_reuseFailAlloc_844_; 
v_reuseFailAlloc_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_844_, 0, v___x_840_);
v___x_843_ = v_reuseFailAlloc_844_;
goto v_reusejp_842_;
}
v_reusejp_842_:
{
return v___x_843_;
}
}
else
{
uint8_t v___x_845_; 
v___x_845_ = lean_nat_dec_le(v___x_839_, v___x_839_);
if (v___x_845_ == 0)
{
if (v___x_841_ == 0)
{
lean_object* v___x_847_; 
lean_dec_ref(v_alts_837_);
if (v_isShared_836_ == 0)
{
lean_ctor_set_tag(v___x_835_, 0);
lean_ctor_set(v___x_835_, 0, v___x_840_);
v___x_847_ = v___x_835_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_840_);
v___x_847_ = v_reuseFailAlloc_848_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
return v___x_847_;
}
}
else
{
size_t v___x_849_; size_t v___x_850_; lean_object* v___x_851_; 
lean_del_object(v___x_835_);
v___x_849_ = ((size_t)0ULL);
v___x_850_ = lean_usize_of_nat(v___x_839_);
v___x_851_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_808_, v_alts_837_, v___x_849_, v___x_850_, v___x_840_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
lean_dec_ref(v_alts_837_);
return v___x_851_;
}
}
else
{
size_t v___x_852_; size_t v___x_853_; lean_object* v___x_854_; 
lean_del_object(v___x_835_);
v___x_852_ = ((size_t)0ULL);
v___x_853_ = lean_usize_of_nat(v___x_839_);
v___x_854_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_808_, v_alts_837_, v___x_852_, v___x_853_, v___x_840_, v___y_810_, v___y_811_, v___y_812_, v___y_813_, v___y_814_);
lean_dec_ref(v_alts_837_);
return v___x_854_;
}
}
}
}
case 7:
{
lean_object* v_k_856_; 
v_k_856_ = lean_ctor_get(v_c_809_, 3);
lean_inc_ref(v_k_856_);
lean_dec_ref_known(v_c_809_, 4);
v_c_809_ = v_k_856_;
goto _start;
}
case 8:
{
lean_object* v_k_858_; 
v_k_858_ = lean_ctor_get(v_c_809_, 3);
lean_inc_ref(v_k_858_);
lean_dec_ref_known(v_c_809_, 4);
v_c_809_ = v_k_858_;
goto _start;
}
case 9:
{
lean_object* v_k_860_; 
v_k_860_ = lean_ctor_get(v_c_809_, 5);
lean_inc_ref(v_k_860_);
lean_dec_ref_known(v_c_809_, 6);
v_c_809_ = v_k_860_;
goto _start;
}
case 10:
{
lean_object* v_k_862_; 
v_k_862_ = lean_ctor_get(v_c_809_, 2);
lean_inc_ref(v_k_862_);
lean_dec_ref_known(v_c_809_, 3);
v_c_809_ = v_k_862_;
goto _start;
}
case 11:
{
lean_object* v_k_864_; 
v_k_864_ = lean_ctor_get(v_c_809_, 2);
lean_inc_ref(v_k_864_);
lean_dec_ref_known(v_c_809_, 3);
v_c_809_ = v_k_864_;
goto _start;
}
case 12:
{
lean_object* v_k_866_; 
v_k_866_ = lean_ctor_get(v_c_809_, 3);
lean_inc_ref(v_k_866_);
lean_dec_ref_known(v_c_809_, 4);
v_c_809_ = v_k_866_;
goto _start;
}
case 13:
{
lean_object* v_k_868_; 
v_k_868_ = lean_ctor_get(v_c_809_, 1);
lean_inc_ref(v_k_868_);
lean_dec_ref_known(v_c_809_, 2);
v_c_809_ = v_k_868_;
goto _start;
}
default: 
{
lean_object* v___x_870_; lean_object* v___x_871_; 
lean_dec_ref(v_c_809_);
v___x_870_ = lean_box(0);
v___x_871_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_871_, 0, v___x_870_);
return v___x_871_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t v_pu_872_, lean_object* v_as_873_, size_t v_i_874_, size_t v_stop_875_, lean_object* v_b_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v___y_884_; uint8_t v___x_890_; 
v___x_890_ = lean_usize_dec_eq(v_i_874_, v_stop_875_);
if (v___x_890_ == 0)
{
lean_object* v___x_891_; 
v___x_891_ = lean_array_uget_borrowed(v_as_873_, v_i_874_);
switch(lean_obj_tag(v___x_891_))
{
case 0:
{
lean_object* v_code_892_; 
v_code_892_ = lean_ctor_get(v___x_891_, 2);
lean_inc_ref(v_code_892_);
v___y_884_ = v_code_892_;
goto v___jp_883_;
}
case 1:
{
lean_object* v_code_893_; 
v_code_893_ = lean_ctor_get(v___x_891_, 1);
lean_inc_ref(v_code_893_);
v___y_884_ = v_code_893_;
goto v___jp_883_;
}
default: 
{
lean_object* v_code_894_; 
v_code_894_ = lean_ctor_get(v___x_891_, 0);
lean_inc_ref(v_code_894_);
v___y_884_ = v_code_894_;
goto v___jp_883_;
}
}
}
else
{
lean_object* v___x_895_; 
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v_b_876_);
return v___x_895_;
}
v___jp_883_:
{
lean_object* v___x_885_; 
v___x_885_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_872_, v___y_884_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v_a_886_; size_t v___x_887_; size_t v___x_888_; 
v_a_886_ = lean_ctor_get(v___x_885_, 0);
lean_inc(v_a_886_);
lean_dec_ref_known(v___x_885_, 1);
v___x_887_ = ((size_t)1ULL);
v___x_888_ = lean_usize_add(v_i_874_, v___x_887_);
v_i_874_ = v___x_888_;
v_b_876_ = v_a_886_;
goto _start;
}
else
{
return v___x_885_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object* v_pu_896_, lean_object* v_as_897_, lean_object* v_i_898_, lean_object* v_stop_899_, lean_object* v_b_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
uint8_t v_pu_boxed_907_; size_t v_i_boxed_908_; size_t v_stop_boxed_909_; lean_object* v_res_910_; 
v_pu_boxed_907_ = lean_unbox(v_pu_896_);
v_i_boxed_908_ = lean_unbox_usize(v_i_898_);
lean_dec(v_i_898_);
v_stop_boxed_909_ = lean_unbox_usize(v_stop_899_);
lean_dec(v_stop_899_);
v_res_910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_boxed_907_, v_as_897_, v_i_boxed_908_, v_stop_boxed_909_, v_b_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_901_);
lean_dec_ref(v_as_897_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object* v_pu_911_, lean_object* v_c_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_){
_start:
{
uint8_t v_pu_boxed_919_; lean_object* v_res_920_; 
v_pu_boxed_919_ = lean_unbox(v_pu_911_);
v_res_920_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_boxed_919_, v_c_912_, v___y_913_, v___y_914_, v___y_915_, v___y_916_, v___y_917_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object* v_f_921_, lean_object* v_v_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
if (lean_obj_tag(v_v_922_) == 0)
{
lean_object* v_code_929_; lean_object* v___x_930_; 
v_code_929_ = lean_ctor_get(v_v_922_, 0);
lean_inc_ref(v_code_929_);
lean_dec_ref_known(v_v_922_, 1);
lean_inc(v___y_927_);
lean_inc_ref(v___y_926_);
lean_inc(v___y_925_);
lean_inc_ref(v___y_924_);
lean_inc(v___y_923_);
v___x_930_ = lean_apply_7(v_f_921_, v_code_929_, v___y_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, lean_box(0));
return v___x_930_;
}
else
{
lean_object* v___x_932_; uint8_t v_isShared_933_; uint8_t v_isSharedCheck_938_; 
lean_dec_ref(v_f_921_);
v_isSharedCheck_938_ = !lean_is_exclusive(v_v_922_);
if (v_isSharedCheck_938_ == 0)
{
lean_object* v_unused_939_; 
v_unused_939_ = lean_ctor_get(v_v_922_, 0);
lean_dec(v_unused_939_);
v___x_932_ = v_v_922_;
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
else
{
lean_dec(v_v_922_);
v___x_932_ = lean_box(0);
v_isShared_933_ = v_isSharedCheck_938_;
goto v_resetjp_931_;
}
v_resetjp_931_:
{
lean_object* v___x_934_; lean_object* v___x_936_; 
v___x_934_ = lean_box(0);
if (v_isShared_933_ == 0)
{
lean_ctor_set_tag(v___x_932_, 0);
lean_ctor_set(v___x_932_, 0, v___x_934_);
v___x_936_ = v___x_932_;
goto v_reusejp_935_;
}
else
{
lean_object* v_reuseFailAlloc_937_; 
v_reuseFailAlloc_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_937_, 0, v___x_934_);
v___x_936_ = v_reuseFailAlloc_937_;
goto v_reusejp_935_;
}
v_reusejp_935_:
{
return v___x_936_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object* v_f_940_, lean_object* v_v_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_){
_start:
{
lean_object* v_res_948_; 
v_res_948_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_940_, v_v_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
return v_res_948_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t v_pu_949_, lean_object* v_f_950_, lean_object* v_v_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_, lean_object* v___y_955_, lean_object* v___y_956_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_950_, v_v_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_, v___y_956_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object* v_pu_959_, lean_object* v_f_960_, lean_object* v_v_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
uint8_t v_pu_boxed_968_; lean_object* v_res_969_; 
v_pu_boxed_968_ = lean_unbox(v_pu_959_);
v_res_969_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(v_pu_boxed_968_, v_f_960_, v_v_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t v_pu_970_, lean_object* v_as_971_, size_t v_i_972_, size_t v_stop_973_, lean_object* v_b_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_){
_start:
{
uint8_t v___x_981_; 
v___x_981_ = lean_usize_dec_eq(v_i_972_, v_stop_973_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v_value_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v___x_982_ = lean_array_uget_borrowed(v_as_971_, v_i_972_);
v_value_983_ = lean_ctor_get(v___x_982_, 1);
v___x_984_ = lean_box(v_pu_970_);
v___x_985_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed), 8, 1);
lean_closure_set(v___x_985_, 0, v___x_984_);
lean_inc_ref(v_value_983_);
v___x_986_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v___x_985_, v_value_983_, v___y_975_, v___y_976_, v___y_977_, v___y_978_, v___y_979_);
if (lean_obj_tag(v___x_986_) == 0)
{
lean_object* v_a_987_; size_t v___x_988_; size_t v___x_989_; 
v_a_987_ = lean_ctor_get(v___x_986_, 0);
lean_inc(v_a_987_);
lean_dec_ref_known(v___x_986_, 1);
v___x_988_ = ((size_t)1ULL);
v___x_989_ = lean_usize_add(v_i_972_, v___x_988_);
v_i_972_ = v___x_989_;
v_b_974_ = v_a_987_;
goto _start;
}
else
{
return v___x_986_;
}
}
else
{
lean_object* v___x_991_; 
v___x_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_991_, 0, v_b_974_);
return v___x_991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object* v_pu_992_, lean_object* v_as_993_, lean_object* v_i_994_, lean_object* v_stop_995_, lean_object* v_b_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_){
_start:
{
uint8_t v_pu_boxed_1003_; size_t v_i_boxed_1004_; size_t v_stop_boxed_1005_; lean_object* v_res_1006_; 
v_pu_boxed_1003_ = lean_unbox(v_pu_992_);
v_i_boxed_1004_ = lean_unbox_usize(v_i_994_);
lean_dec(v_i_994_);
v_stop_boxed_1005_ = lean_unbox_usize(v_stop_995_);
lean_dec(v_stop_995_);
v_res_1006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_boxed_1003_, v_as_993_, v_i_boxed_1004_, v_stop_boxed_1005_, v_b_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_);
lean_dec(v___y_1001_);
lean_dec_ref(v___y_1000_);
lean_dec(v___y_999_);
lean_dec_ref(v___y_998_);
lean_dec(v___y_997_);
lean_dec_ref(v_as_993_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t v_pu_1007_, lean_object* v_decls_1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; uint8_t v___x_1018_; 
v___x_1015_ = lean_unsigned_to_nat(0u);
v___x_1016_ = lean_array_get_size(v_decls_1008_);
v___x_1017_ = lean_box(0);
v___x_1018_ = lean_nat_dec_lt(v___x_1015_, v___x_1016_);
if (v___x_1018_ == 0)
{
lean_object* v___x_1019_; 
v___x_1019_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1019_, 0, v___x_1017_);
return v___x_1019_;
}
else
{
uint8_t v___x_1020_; 
v___x_1020_ = lean_nat_dec_le(v___x_1016_, v___x_1016_);
if (v___x_1020_ == 0)
{
if (v___x_1018_ == 0)
{
lean_object* v___x_1021_; 
v___x_1021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1017_);
return v___x_1021_;
}
else
{
size_t v___x_1022_; size_t v___x_1023_; lean_object* v___x_1024_; 
v___x_1022_ = ((size_t)0ULL);
v___x_1023_ = lean_usize_of_nat(v___x_1016_);
v___x_1024_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_1007_, v_decls_1008_, v___x_1022_, v___x_1023_, v___x_1017_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
return v___x_1024_;
}
}
else
{
size_t v___x_1025_; size_t v___x_1026_; lean_object* v___x_1027_; 
v___x_1025_ = ((size_t)0ULL);
v___x_1026_ = lean_usize_of_nat(v___x_1016_);
v___x_1027_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_1007_, v_decls_1008_, v___x_1025_, v___x_1026_, v___x_1017_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
return v___x_1027_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object* v_pu_1028_, lean_object* v_decls_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
uint8_t v_pu_boxed_1036_; lean_object* v_res_1037_; 
v_pu_boxed_1036_ = lean_unbox(v_pu_1028_);
v_res_1037_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_boxed_1036_, v_decls_1029_, v___y_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec(v___y_1030_);
lean_dec_ref(v_decls_1029_);
return v_res_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t v_pu_1040_, lean_object* v_decls_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_){
_start:
{
lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; 
v___x_1047_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0));
v___x_1048_ = lean_st_mk_ref(v___x_1047_);
v___x_1049_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_1040_, v_decls_1041_, v___x_1048_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_);
if (lean_obj_tag(v___x_1049_) == 0)
{
lean_object* v___x_1051_; uint8_t v_isShared_1052_; uint8_t v_isSharedCheck_1057_; 
v_isSharedCheck_1057_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; 
v_unused_1058_ = lean_ctor_get(v___x_1049_, 0);
lean_dec(v_unused_1058_);
v___x_1051_ = v___x_1049_;
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
else
{
lean_dec(v___x_1049_);
v___x_1051_ = lean_box(0);
v_isShared_1052_ = v_isSharedCheck_1057_;
goto v_resetjp_1050_;
}
v_resetjp_1050_:
{
lean_object* v___x_1053_; lean_object* v___x_1055_; 
v___x_1053_ = lean_st_ref_get(v___x_1048_);
lean_dec(v___x_1048_);
if (v_isShared_1052_ == 0)
{
lean_ctor_set(v___x_1051_, 0, v___x_1053_);
v___x_1055_ = v___x_1051_;
goto v_reusejp_1054_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1053_);
v___x_1055_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1054_;
}
v_reusejp_1054_:
{
return v___x_1055_;
}
}
}
else
{
lean_object* v_a_1059_; lean_object* v___x_1061_; uint8_t v_isShared_1062_; uint8_t v_isSharedCheck_1066_; 
lean_dec(v___x_1048_);
v_a_1059_ = lean_ctor_get(v___x_1049_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1049_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1061_ = v___x_1049_;
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
else
{
lean_inc(v_a_1059_);
lean_dec(v___x_1049_);
v___x_1061_ = lean_box(0);
v_isShared_1062_ = v_isSharedCheck_1066_;
goto v_resetjp_1060_;
}
v_resetjp_1060_:
{
lean_object* v___x_1064_; 
if (v_isShared_1062_ == 0)
{
v___x_1064_ = v___x_1061_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v_a_1059_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object* v_pu_1067_, lean_object* v_decls_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
uint8_t v_pu_boxed_1074_; lean_object* v_res_1075_; 
v_pu_boxed_1074_ = lean_unbox(v_pu_1067_);
v_res_1075_ = l_Lean_Compiler_LCNF_Probe_getLetValues(v_pu_boxed_1074_, v_decls_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
lean_dec(v___y_1070_);
lean_dec_ref(v___y_1069_);
lean_dec_ref(v_decls_1068_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t v_pu_1076_, lean_object* v_code_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
switch(lean_obj_tag(v_code_1077_))
{
case 0:
{
lean_object* v_k_1084_; 
v_k_1084_ = lean_ctor_get(v_code_1077_, 1);
lean_inc_ref(v_k_1084_);
lean_dec_ref_known(v_code_1077_, 2);
v_code_1077_ = v_k_1084_;
goto _start;
}
case 1:
{
lean_object* v_decl_1086_; lean_object* v_k_1087_; lean_object* v_value_1088_; lean_object* v___x_1089_; 
v_decl_1086_ = lean_ctor_get(v_code_1077_, 0);
lean_inc_ref(v_decl_1086_);
v_k_1087_ = lean_ctor_get(v_code_1077_, 1);
lean_inc_ref(v_k_1087_);
lean_dec_ref_known(v_code_1077_, 2);
v_value_1088_ = lean_ctor_get(v_decl_1086_, 4);
lean_inc_ref(v_value_1088_);
lean_dec_ref(v_decl_1086_);
v___x_1089_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1076_, v_value_1088_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1089_) == 0)
{
lean_dec_ref_known(v___x_1089_, 1);
v_code_1077_ = v_k_1087_;
goto _start;
}
else
{
lean_dec_ref(v_k_1087_);
return v___x_1089_;
}
}
case 2:
{
lean_object* v_decl_1091_; lean_object* v_k_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v_value_1096_; lean_object* v___x_1097_; 
v_decl_1091_ = lean_ctor_get(v_code_1077_, 0);
lean_inc_ref_n(v_decl_1091_, 2);
v_k_1092_ = lean_ctor_get(v_code_1077_, 1);
lean_inc_ref(v_k_1092_);
lean_dec_ref_known(v_code_1077_, 2);
v___x_1093_ = lean_st_ref_take(v___y_1078_);
v___x_1094_ = lean_array_push(v___x_1093_, v_decl_1091_);
v___x_1095_ = lean_st_ref_put(v___y_1078_, v___x_1094_);
v_value_1096_ = lean_ctor_get(v_decl_1091_, 4);
lean_inc_ref(v_value_1096_);
lean_dec_ref(v_decl_1091_);
v___x_1097_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1076_, v_value_1096_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_dec_ref_known(v___x_1097_, 1);
v_code_1077_ = v_k_1092_;
goto _start;
}
else
{
lean_dec_ref(v_k_1092_);
return v___x_1097_;
}
}
case 4:
{
lean_object* v_cases_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1121_; 
v_cases_1099_ = lean_ctor_get(v_code_1077_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_code_1077_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1101_ = v_code_1077_;
v_isShared_1102_ = v_isSharedCheck_1121_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_cases_1099_);
lean_dec(v_code_1077_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1121_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v_alts_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; uint8_t v___x_1107_; 
v_alts_1103_ = lean_ctor_get(v_cases_1099_, 3);
lean_inc_ref(v_alts_1103_);
lean_dec_ref(v_cases_1099_);
v___x_1104_ = lean_unsigned_to_nat(0u);
v___x_1105_ = lean_array_get_size(v_alts_1103_);
v___x_1106_ = lean_box(0);
v___x_1107_ = lean_nat_dec_lt(v___x_1104_, v___x_1105_);
if (v___x_1107_ == 0)
{
lean_object* v___x_1109_; 
lean_dec_ref(v_alts_1103_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set_tag(v___x_1101_, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1106_);
v___x_1109_ = v___x_1101_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v___x_1106_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
else
{
uint8_t v___x_1111_; 
v___x_1111_ = lean_nat_dec_le(v___x_1105_, v___x_1105_);
if (v___x_1111_ == 0)
{
if (v___x_1107_ == 0)
{
lean_object* v___x_1113_; 
lean_dec_ref(v_alts_1103_);
if (v_isShared_1102_ == 0)
{
lean_ctor_set_tag(v___x_1101_, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1106_);
v___x_1113_ = v___x_1101_;
goto v_reusejp_1112_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v___x_1106_);
v___x_1113_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1112_;
}
v_reusejp_1112_:
{
return v___x_1113_;
}
}
else
{
size_t v___x_1115_; size_t v___x_1116_; lean_object* v___x_1117_; 
lean_del_object(v___x_1101_);
v___x_1115_ = ((size_t)0ULL);
v___x_1116_ = lean_usize_of_nat(v___x_1105_);
v___x_1117_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_1076_, v_alts_1103_, v___x_1115_, v___x_1116_, v___x_1106_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec_ref(v_alts_1103_);
return v___x_1117_;
}
}
else
{
size_t v___x_1118_; size_t v___x_1119_; lean_object* v___x_1120_; 
lean_del_object(v___x_1101_);
v___x_1118_ = ((size_t)0ULL);
v___x_1119_ = lean_usize_of_nat(v___x_1105_);
v___x_1120_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_1076_, v_alts_1103_, v___x_1118_, v___x_1119_, v___x_1106_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_, v___y_1082_);
lean_dec_ref(v_alts_1103_);
return v___x_1120_;
}
}
}
}
case 7:
{
lean_object* v_k_1122_; 
v_k_1122_ = lean_ctor_get(v_code_1077_, 3);
lean_inc_ref(v_k_1122_);
lean_dec_ref_known(v_code_1077_, 4);
v_code_1077_ = v_k_1122_;
goto _start;
}
case 8:
{
lean_object* v_k_1124_; 
v_k_1124_ = lean_ctor_get(v_code_1077_, 3);
lean_inc_ref(v_k_1124_);
lean_dec_ref_known(v_code_1077_, 4);
v_code_1077_ = v_k_1124_;
goto _start;
}
case 9:
{
lean_object* v_k_1126_; 
v_k_1126_ = lean_ctor_get(v_code_1077_, 5);
lean_inc_ref(v_k_1126_);
lean_dec_ref_known(v_code_1077_, 6);
v_code_1077_ = v_k_1126_;
goto _start;
}
case 10:
{
lean_object* v_k_1128_; 
v_k_1128_ = lean_ctor_get(v_code_1077_, 2);
lean_inc_ref(v_k_1128_);
lean_dec_ref_known(v_code_1077_, 3);
v_code_1077_ = v_k_1128_;
goto _start;
}
case 11:
{
lean_object* v_k_1130_; 
v_k_1130_ = lean_ctor_get(v_code_1077_, 2);
lean_inc_ref(v_k_1130_);
lean_dec_ref_known(v_code_1077_, 3);
v_code_1077_ = v_k_1130_;
goto _start;
}
case 12:
{
lean_object* v_k_1132_; 
v_k_1132_ = lean_ctor_get(v_code_1077_, 3);
lean_inc_ref(v_k_1132_);
lean_dec_ref_known(v_code_1077_, 4);
v_code_1077_ = v_k_1132_;
goto _start;
}
case 13:
{
lean_object* v_k_1134_; 
v_k_1134_ = lean_ctor_get(v_code_1077_, 1);
lean_inc_ref(v_k_1134_);
lean_dec_ref_known(v_code_1077_, 2);
v_code_1077_ = v_k_1134_;
goto _start;
}
default: 
{
lean_object* v___x_1136_; lean_object* v___x_1137_; 
lean_dec_ref(v_code_1077_);
v___x_1136_ = lean_box(0);
v___x_1137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
return v___x_1137_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t v_pu_1138_, lean_object* v_as_1139_, size_t v_i_1140_, size_t v_stop_1141_, lean_object* v_b_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_, lean_object* v___y_1147_){
_start:
{
lean_object* v___y_1150_; uint8_t v___x_1156_; 
v___x_1156_ = lean_usize_dec_eq(v_i_1140_, v_stop_1141_);
if (v___x_1156_ == 0)
{
lean_object* v___x_1157_; 
v___x_1157_ = lean_array_uget_borrowed(v_as_1139_, v_i_1140_);
switch(lean_obj_tag(v___x_1157_))
{
case 0:
{
lean_object* v_code_1158_; 
v_code_1158_ = lean_ctor_get(v___x_1157_, 2);
lean_inc_ref(v_code_1158_);
v___y_1150_ = v_code_1158_;
goto v___jp_1149_;
}
case 1:
{
lean_object* v_code_1159_; 
v_code_1159_ = lean_ctor_get(v___x_1157_, 1);
lean_inc_ref(v_code_1159_);
v___y_1150_ = v_code_1159_;
goto v___jp_1149_;
}
default: 
{
lean_object* v_code_1160_; 
v_code_1160_ = lean_ctor_get(v___x_1157_, 0);
lean_inc_ref(v_code_1160_);
v___y_1150_ = v_code_1160_;
goto v___jp_1149_;
}
}
}
else
{
lean_object* v___x_1161_; 
v___x_1161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1161_, 0, v_b_1142_);
return v___x_1161_;
}
v___jp_1149_:
{
lean_object* v___x_1151_; 
v___x_1151_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1138_, v___y_1150_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, v___y_1147_);
if (lean_obj_tag(v___x_1151_) == 0)
{
lean_object* v_a_1152_; size_t v___x_1153_; size_t v___x_1154_; 
v_a_1152_ = lean_ctor_get(v___x_1151_, 0);
lean_inc(v_a_1152_);
lean_dec_ref_known(v___x_1151_, 1);
v___x_1153_ = ((size_t)1ULL);
v___x_1154_ = lean_usize_add(v_i_1140_, v___x_1153_);
v_i_1140_ = v___x_1154_;
v_b_1142_ = v_a_1152_;
goto _start;
}
else
{
return v___x_1151_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object* v_pu_1162_, lean_object* v_as_1163_, lean_object* v_i_1164_, lean_object* v_stop_1165_, lean_object* v_b_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_){
_start:
{
uint8_t v_pu_boxed_1173_; size_t v_i_boxed_1174_; size_t v_stop_boxed_1175_; lean_object* v_res_1176_; 
v_pu_boxed_1173_ = lean_unbox(v_pu_1162_);
v_i_boxed_1174_ = lean_unbox_usize(v_i_1164_);
lean_dec(v_i_1164_);
v_stop_boxed_1175_ = lean_unbox_usize(v_stop_1165_);
lean_dec(v_stop_1165_);
v_res_1176_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_boxed_1173_, v_as_1163_, v_i_boxed_1174_, v_stop_boxed_1175_, v_b_1166_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v___y_1171_);
lean_dec_ref(v___y_1170_);
lean_dec(v___y_1169_);
lean_dec_ref(v___y_1168_);
lean_dec(v___y_1167_);
lean_dec_ref(v_as_1163_);
return v_res_1176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object* v_pu_1177_, lean_object* v_code_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_){
_start:
{
uint8_t v_pu_boxed_1185_; lean_object* v_res_1186_; 
v_pu_boxed_1185_ = lean_unbox(v_pu_1177_);
v_res_1186_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_boxed_1185_, v_code_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_, v___y_1183_);
lean_dec(v___y_1183_);
lean_dec_ref(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec_ref(v___y_1180_);
lean_dec(v___y_1179_);
return v_res_1186_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object* v_f_1187_, lean_object* v_v_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_, lean_object* v___y_1193_){
_start:
{
if (lean_obj_tag(v_v_1188_) == 0)
{
lean_object* v_code_1195_; lean_object* v___x_1196_; 
v_code_1195_ = lean_ctor_get(v_v_1188_, 0);
lean_inc_ref(v_code_1195_);
lean_dec_ref_known(v_v_1188_, 1);
lean_inc(v___y_1193_);
lean_inc_ref(v___y_1192_);
lean_inc(v___y_1191_);
lean_inc_ref(v___y_1190_);
lean_inc(v___y_1189_);
v___x_1196_ = lean_apply_7(v_f_1187_, v_code_1195_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_, lean_box(0));
return v___x_1196_;
}
else
{
lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1204_; 
lean_dec_ref(v_f_1187_);
v_isSharedCheck_1204_ = !lean_is_exclusive(v_v_1188_);
if (v_isSharedCheck_1204_ == 0)
{
lean_object* v_unused_1205_; 
v_unused_1205_ = lean_ctor_get(v_v_1188_, 0);
lean_dec(v_unused_1205_);
v___x_1198_ = v_v_1188_;
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
else
{
lean_dec(v_v_1188_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1204_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1200_; lean_object* v___x_1202_; 
v___x_1200_ = lean_box(0);
if (v_isShared_1199_ == 0)
{
lean_ctor_set_tag(v___x_1198_, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1200_);
v___x_1202_ = v___x_1198_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1200_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object* v_f_1206_, lean_object* v_v_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1206_, v_v_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t v_pu_1215_, lean_object* v_f_1216_, lean_object* v_v_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_){
_start:
{
lean_object* v___x_1224_; 
v___x_1224_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1216_, v_v_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_);
return v___x_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object* v_pu_1225_, lean_object* v_f_1226_, lean_object* v_v_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_){
_start:
{
uint8_t v_pu_boxed_1234_; lean_object* v_res_1235_; 
v_pu_boxed_1234_ = lean_unbox(v_pu_1225_);
v_res_1235_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(v_pu_boxed_1234_, v_f_1226_, v_v_1227_, v___y_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t v_pu_1236_, lean_object* v_as_1237_, size_t v_i_1238_, size_t v_stop_1239_, lean_object* v_b_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_){
_start:
{
uint8_t v___x_1247_; 
v___x_1247_ = lean_usize_dec_eq(v_i_1238_, v_stop_1239_);
if (v___x_1247_ == 0)
{
lean_object* v___x_1248_; lean_object* v_value_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; 
v___x_1248_ = lean_array_uget_borrowed(v_as_1237_, v_i_1238_);
v_value_1249_ = lean_ctor_get(v___x_1248_, 1);
v___x_1250_ = lean_box(v_pu_1236_);
v___x_1251_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed), 8, 1);
lean_closure_set(v___x_1251_, 0, v___x_1250_);
lean_inc_ref(v_value_1249_);
v___x_1252_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v___x_1251_, v_value_1249_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
if (lean_obj_tag(v___x_1252_) == 0)
{
lean_object* v_a_1253_; size_t v___x_1254_; size_t v___x_1255_; 
v_a_1253_ = lean_ctor_get(v___x_1252_, 0);
lean_inc(v_a_1253_);
lean_dec_ref_known(v___x_1252_, 1);
v___x_1254_ = ((size_t)1ULL);
v___x_1255_ = lean_usize_add(v_i_1238_, v___x_1254_);
v_i_1238_ = v___x_1255_;
v_b_1240_ = v_a_1253_;
goto _start;
}
else
{
return v___x_1252_;
}
}
else
{
lean_object* v___x_1257_; 
v___x_1257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1257_, 0, v_b_1240_);
return v___x_1257_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object* v_pu_1258_, lean_object* v_as_1259_, lean_object* v_i_1260_, lean_object* v_stop_1261_, lean_object* v_b_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_, lean_object* v___y_1268_){
_start:
{
uint8_t v_pu_boxed_1269_; size_t v_i_boxed_1270_; size_t v_stop_boxed_1271_; lean_object* v_res_1272_; 
v_pu_boxed_1269_ = lean_unbox(v_pu_1258_);
v_i_boxed_1270_ = lean_unbox_usize(v_i_1260_);
lean_dec(v_i_1260_);
v_stop_boxed_1271_ = lean_unbox_usize(v_stop_1261_);
lean_dec(v_stop_1261_);
v_res_1272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_boxed_1269_, v_as_1259_, v_i_boxed_1270_, v_stop_boxed_1271_, v_b_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
lean_dec(v___y_1267_);
lean_dec_ref(v___y_1266_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec(v___y_1263_);
lean_dec_ref(v_as_1259_);
return v_res_1272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t v_pu_1273_, lean_object* v_decls_1274_, lean_object* v___y_1275_, lean_object* v___y_1276_, lean_object* v___y_1277_, lean_object* v___y_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
v___x_1281_ = lean_unsigned_to_nat(0u);
v___x_1282_ = lean_array_get_size(v_decls_1274_);
v___x_1283_ = lean_box(0);
v___x_1284_ = lean_nat_dec_lt(v___x_1281_, v___x_1282_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; 
v___x_1285_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1283_);
return v___x_1285_;
}
else
{
uint8_t v___x_1286_; 
v___x_1286_ = lean_nat_dec_le(v___x_1282_, v___x_1282_);
if (v___x_1286_ == 0)
{
if (v___x_1284_ == 0)
{
lean_object* v___x_1287_; 
v___x_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1283_);
return v___x_1287_;
}
else
{
size_t v___x_1288_; size_t v___x_1289_; lean_object* v___x_1290_; 
v___x_1288_ = ((size_t)0ULL);
v___x_1289_ = lean_usize_of_nat(v___x_1282_);
v___x_1290_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_1273_, v_decls_1274_, v___x_1288_, v___x_1289_, v___x_1283_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
return v___x_1290_;
}
}
else
{
size_t v___x_1291_; size_t v___x_1292_; lean_object* v___x_1293_; 
v___x_1291_ = ((size_t)0ULL);
v___x_1292_ = lean_usize_of_nat(v___x_1282_);
v___x_1293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_1273_, v_decls_1274_, v___x_1291_, v___x_1292_, v___x_1283_, v___y_1275_, v___y_1276_, v___y_1277_, v___y_1278_, v___y_1279_);
return v___x_1293_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object* v_pu_1294_, lean_object* v_decls_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_, lean_object* v___y_1301_){
_start:
{
uint8_t v_pu_boxed_1302_; lean_object* v_res_1303_; 
v_pu_boxed_1302_ = lean_unbox(v_pu_1294_);
v_res_1303_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_boxed_1302_, v_decls_1295_, v___y_1296_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
lean_dec(v___y_1300_);
lean_dec_ref(v___y_1299_);
lean_dec(v___y_1298_);
lean_dec_ref(v___y_1297_);
lean_dec(v___y_1296_);
lean_dec_ref(v_decls_1295_);
return v_res_1303_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t v_pu_1306_, lean_object* v_decls_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_){
_start:
{
lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1313_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_getJps___closed__0));
v___x_1314_ = lean_st_mk_ref(v___x_1313_);
v___x_1315_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_1306_, v_decls_1307_, v___x_1314_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_);
if (lean_obj_tag(v___x_1315_) == 0)
{
lean_object* v___x_1317_; uint8_t v_isShared_1318_; uint8_t v_isSharedCheck_1323_; 
v_isSharedCheck_1323_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1323_ == 0)
{
lean_object* v_unused_1324_; 
v_unused_1324_ = lean_ctor_get(v___x_1315_, 0);
lean_dec(v_unused_1324_);
v___x_1317_ = v___x_1315_;
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
else
{
lean_dec(v___x_1315_);
v___x_1317_ = lean_box(0);
v_isShared_1318_ = v_isSharedCheck_1323_;
goto v_resetjp_1316_;
}
v_resetjp_1316_:
{
lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1319_ = lean_st_ref_get(v___x_1314_);
lean_dec(v___x_1314_);
if (v_isShared_1318_ == 0)
{
lean_ctor_set(v___x_1317_, 0, v___x_1319_);
v___x_1321_ = v___x_1317_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
else
{
lean_object* v_a_1325_; lean_object* v___x_1327_; uint8_t v_isShared_1328_; uint8_t v_isSharedCheck_1332_; 
lean_dec(v___x_1314_);
v_a_1325_ = lean_ctor_get(v___x_1315_, 0);
v_isSharedCheck_1332_ = !lean_is_exclusive(v___x_1315_);
if (v_isSharedCheck_1332_ == 0)
{
v___x_1327_ = v___x_1315_;
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
else
{
lean_inc(v_a_1325_);
lean_dec(v___x_1315_);
v___x_1327_ = lean_box(0);
v_isShared_1328_ = v_isSharedCheck_1332_;
goto v_resetjp_1326_;
}
v_resetjp_1326_:
{
lean_object* v___x_1330_; 
if (v_isShared_1328_ == 0)
{
v___x_1330_ = v___x_1327_;
goto v_reusejp_1329_;
}
else
{
lean_object* v_reuseFailAlloc_1331_; 
v_reuseFailAlloc_1331_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1331_, 0, v_a_1325_);
v___x_1330_ = v_reuseFailAlloc_1331_;
goto v_reusejp_1329_;
}
v_reusejp_1329_:
{
return v___x_1330_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object* v_pu_1333_, lean_object* v_decls_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_){
_start:
{
uint8_t v_pu_boxed_1340_; lean_object* v_res_1341_; 
v_pu_boxed_1340_ = lean_unbox(v_pu_1333_);
v_res_1341_ = l_Lean_Compiler_LCNF_Probe_getJps(v_pu_boxed_1340_, v_decls_1334_, v___y_1335_, v___y_1336_, v___y_1337_, v___y_1338_);
lean_dec(v___y_1338_);
lean_dec_ref(v___y_1337_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec_ref(v_decls_1334_);
return v_res_1341_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t v_pu_1342_, lean_object* v_f_1343_, lean_object* v_a_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
switch(lean_obj_tag(v_a_1344_))
{
case 0:
{
lean_object* v_decl_1350_; lean_object* v_k_1351_; lean_object* v___x_1352_; 
v_decl_1350_ = lean_ctor_get(v_a_1344_, 0);
lean_inc_ref(v_decl_1350_);
v_k_1351_ = lean_ctor_get(v_a_1344_, 1);
lean_inc_ref(v_k_1351_);
lean_dec_ref_known(v_a_1344_, 2);
lean_inc_ref(v_f_1343_);
lean_inc(v___y_1348_);
lean_inc_ref(v___y_1347_);
lean_inc(v___y_1346_);
lean_inc_ref(v___y_1345_);
v___x_1352_ = lean_apply_6(v_f_1343_, v_decl_1350_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_, lean_box(0));
if (lean_obj_tag(v___x_1352_) == 0)
{
lean_object* v_a_1353_; uint8_t v___x_1354_; 
v_a_1353_ = lean_ctor_get(v___x_1352_, 0);
lean_inc(v_a_1353_);
v___x_1354_ = lean_unbox(v_a_1353_);
lean_dec(v_a_1353_);
if (v___x_1354_ == 0)
{
lean_dec_ref_known(v___x_1352_, 1);
v_a_1344_ = v_k_1351_;
goto _start;
}
else
{
lean_dec_ref(v_k_1351_);
lean_dec_ref(v_f_1343_);
return v___x_1352_;
}
}
else
{
lean_dec_ref(v_k_1351_);
lean_dec_ref(v_f_1343_);
return v___x_1352_;
}
}
case 1:
{
lean_object* v_decl_1356_; lean_object* v_k_1357_; lean_object* v_value_1358_; lean_object* v___x_1359_; 
v_decl_1356_ = lean_ctor_get(v_a_1344_, 0);
lean_inc_ref(v_decl_1356_);
v_k_1357_ = lean_ctor_get(v_a_1344_, 1);
lean_inc_ref(v_k_1357_);
lean_dec_ref_known(v_a_1344_, 2);
v_value_1358_ = lean_ctor_get(v_decl_1356_, 4);
lean_inc_ref(v_value_1358_);
lean_dec_ref(v_decl_1356_);
lean_inc_ref(v_f_1343_);
v___x_1359_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1342_, v_f_1343_, v_value_1358_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
if (lean_obj_tag(v___x_1359_) == 0)
{
lean_object* v_a_1360_; uint8_t v___x_1361_; 
v_a_1360_ = lean_ctor_get(v___x_1359_, 0);
lean_inc(v_a_1360_);
v___x_1361_ = lean_unbox(v_a_1360_);
lean_dec(v_a_1360_);
if (v___x_1361_ == 0)
{
lean_dec_ref_known(v___x_1359_, 1);
v_a_1344_ = v_k_1357_;
goto _start;
}
else
{
lean_dec_ref(v_k_1357_);
lean_dec_ref(v_f_1343_);
return v___x_1359_;
}
}
else
{
lean_dec_ref(v_k_1357_);
lean_dec_ref(v_f_1343_);
return v___x_1359_;
}
}
case 2:
{
lean_object* v_decl_1363_; lean_object* v_k_1364_; lean_object* v_value_1365_; lean_object* v___x_1366_; 
v_decl_1363_ = lean_ctor_get(v_a_1344_, 0);
lean_inc_ref(v_decl_1363_);
v_k_1364_ = lean_ctor_get(v_a_1344_, 1);
lean_inc_ref(v_k_1364_);
lean_dec_ref_known(v_a_1344_, 2);
v_value_1365_ = lean_ctor_get(v_decl_1363_, 4);
lean_inc_ref(v_value_1365_);
lean_dec_ref(v_decl_1363_);
lean_inc_ref(v_f_1343_);
v___x_1366_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1342_, v_f_1343_, v_value_1365_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
if (lean_obj_tag(v___x_1366_) == 0)
{
lean_object* v_a_1367_; uint8_t v___x_1368_; 
v_a_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_a_1367_);
v___x_1368_ = lean_unbox(v_a_1367_);
lean_dec(v_a_1367_);
if (v___x_1368_ == 0)
{
lean_dec_ref_known(v___x_1366_, 1);
v_a_1344_ = v_k_1364_;
goto _start;
}
else
{
lean_dec_ref(v_k_1364_);
lean_dec_ref(v_f_1343_);
return v___x_1366_;
}
}
else
{
lean_dec_ref(v_k_1364_);
lean_dec_ref(v_f_1343_);
return v___x_1366_;
}
}
case 4:
{
lean_object* v_cases_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1389_; 
v_cases_1370_ = lean_ctor_get(v_a_1344_, 0);
v_isSharedCheck_1389_ = !lean_is_exclusive(v_a_1344_);
if (v_isSharedCheck_1389_ == 0)
{
v___x_1372_ = v_a_1344_;
v_isShared_1373_ = v_isSharedCheck_1389_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_cases_1370_);
lean_dec(v_a_1344_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1389_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v_alts_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; uint8_t v___x_1377_; 
v_alts_1374_ = lean_ctor_get(v_cases_1370_, 3);
lean_inc_ref(v_alts_1374_);
lean_dec_ref(v_cases_1370_);
v___x_1375_ = lean_unsigned_to_nat(0u);
v___x_1376_ = lean_array_get_size(v_alts_1374_);
v___x_1377_ = lean_nat_dec_lt(v___x_1375_, v___x_1376_);
if (v___x_1377_ == 0)
{
lean_object* v___x_1378_; lean_object* v___x_1380_; 
lean_dec_ref(v_alts_1374_);
lean_dec_ref(v_f_1343_);
v___x_1378_ = lean_box(v___x_1377_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set_tag(v___x_1372_, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1378_);
v___x_1380_ = v___x_1372_;
goto v_reusejp_1379_;
}
else
{
lean_object* v_reuseFailAlloc_1381_; 
v_reuseFailAlloc_1381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1381_, 0, v___x_1378_);
v___x_1380_ = v_reuseFailAlloc_1381_;
goto v_reusejp_1379_;
}
v_reusejp_1379_:
{
return v___x_1380_;
}
}
else
{
if (v___x_1377_ == 0)
{
lean_object* v___x_1382_; lean_object* v___x_1384_; 
lean_dec_ref(v_alts_1374_);
lean_dec_ref(v_f_1343_);
v___x_1382_ = lean_box(v___x_1377_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set_tag(v___x_1372_, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1382_);
v___x_1384_ = v___x_1372_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v___x_1382_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
}
}
else
{
size_t v___x_1386_; size_t v___x_1387_; lean_object* v___x_1388_; 
lean_del_object(v___x_1372_);
v___x_1386_ = ((size_t)0ULL);
v___x_1387_ = lean_usize_of_nat(v___x_1376_);
v___x_1388_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_1342_, v_f_1343_, v_alts_1374_, v___x_1386_, v___x_1387_, v___y_1345_, v___y_1346_, v___y_1347_, v___y_1348_);
lean_dec_ref(v_alts_1374_);
return v___x_1388_;
}
}
}
}
case 7:
{
lean_object* v_k_1390_; 
v_k_1390_ = lean_ctor_get(v_a_1344_, 3);
lean_inc_ref(v_k_1390_);
lean_dec_ref_known(v_a_1344_, 4);
v_a_1344_ = v_k_1390_;
goto _start;
}
case 8:
{
lean_object* v_k_1392_; 
v_k_1392_ = lean_ctor_get(v_a_1344_, 3);
lean_inc_ref(v_k_1392_);
lean_dec_ref_known(v_a_1344_, 4);
v_a_1344_ = v_k_1392_;
goto _start;
}
case 9:
{
lean_object* v_k_1394_; 
v_k_1394_ = lean_ctor_get(v_a_1344_, 5);
lean_inc_ref(v_k_1394_);
lean_dec_ref_known(v_a_1344_, 6);
v_a_1344_ = v_k_1394_;
goto _start;
}
case 10:
{
lean_object* v_k_1396_; 
v_k_1396_ = lean_ctor_get(v_a_1344_, 2);
lean_inc_ref(v_k_1396_);
lean_dec_ref_known(v_a_1344_, 3);
v_a_1344_ = v_k_1396_;
goto _start;
}
case 11:
{
lean_object* v_k_1398_; 
v_k_1398_ = lean_ctor_get(v_a_1344_, 2);
lean_inc_ref(v_k_1398_);
lean_dec_ref_known(v_a_1344_, 3);
v_a_1344_ = v_k_1398_;
goto _start;
}
case 12:
{
lean_object* v_k_1400_; 
v_k_1400_ = lean_ctor_get(v_a_1344_, 3);
lean_inc_ref(v_k_1400_);
lean_dec_ref_known(v_a_1344_, 4);
v_a_1344_ = v_k_1400_;
goto _start;
}
case 13:
{
lean_object* v_k_1402_; 
v_k_1402_ = lean_ctor_get(v_a_1344_, 1);
lean_inc_ref(v_k_1402_);
lean_dec_ref_known(v_a_1344_, 2);
v_a_1344_ = v_k_1402_;
goto _start;
}
default: 
{
uint8_t v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
lean_dec_ref(v_a_1344_);
lean_dec_ref(v_f_1343_);
v___x_1404_ = 0;
v___x_1405_ = lean_box(v___x_1404_);
v___x_1406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1406_, 0, v___x_1405_);
return v___x_1406_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t v_pu_1407_, lean_object* v_f_1408_, lean_object* v_as_1409_, size_t v_i_1410_, size_t v_stop_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
uint8_t v___x_1417_; 
v___x_1417_ = lean_usize_dec_eq(v_i_1410_, v_stop_1411_);
if (v___x_1417_ == 0)
{
uint8_t v___x_1418_; lean_object* v___y_1420_; lean_object* v___x_1435_; 
v___x_1418_ = 1;
v___x_1435_ = lean_array_uget_borrowed(v_as_1409_, v_i_1410_);
switch(lean_obj_tag(v___x_1435_))
{
case 0:
{
lean_object* v_code_1436_; 
v_code_1436_ = lean_ctor_get(v___x_1435_, 2);
lean_inc_ref(v_code_1436_);
v___y_1420_ = v_code_1436_;
goto v___jp_1419_;
}
case 1:
{
lean_object* v_code_1437_; 
v_code_1437_ = lean_ctor_get(v___x_1435_, 1);
lean_inc_ref(v_code_1437_);
v___y_1420_ = v_code_1437_;
goto v___jp_1419_;
}
default: 
{
lean_object* v_code_1438_; 
v_code_1438_ = lean_ctor_get(v___x_1435_, 0);
lean_inc_ref(v_code_1438_);
v___y_1420_ = v_code_1438_;
goto v___jp_1419_;
}
}
v___jp_1419_:
{
lean_object* v___x_1421_; 
lean_inc_ref(v_f_1408_);
v___x_1421_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1407_, v_f_1408_, v___y_1420_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_);
if (lean_obj_tag(v___x_1421_) == 0)
{
lean_object* v_a_1422_; lean_object* v___x_1424_; uint8_t v_isShared_1425_; uint8_t v_isSharedCheck_1434_; 
v_a_1422_ = lean_ctor_get(v___x_1421_, 0);
v_isSharedCheck_1434_ = !lean_is_exclusive(v___x_1421_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1424_ = v___x_1421_;
v_isShared_1425_ = v_isSharedCheck_1434_;
goto v_resetjp_1423_;
}
else
{
lean_inc(v_a_1422_);
lean_dec(v___x_1421_);
v___x_1424_ = lean_box(0);
v_isShared_1425_ = v_isSharedCheck_1434_;
goto v_resetjp_1423_;
}
v_resetjp_1423_:
{
uint8_t v___x_1426_; 
v___x_1426_ = lean_unbox(v_a_1422_);
lean_dec(v_a_1422_);
if (v___x_1426_ == 0)
{
size_t v___x_1427_; size_t v___x_1428_; 
lean_del_object(v___x_1424_);
v___x_1427_ = ((size_t)1ULL);
v___x_1428_ = lean_usize_add(v_i_1410_, v___x_1427_);
v_i_1410_ = v___x_1428_;
goto _start;
}
else
{
lean_object* v___x_1430_; lean_object* v___x_1432_; 
lean_dec_ref(v_f_1408_);
v___x_1430_ = lean_box(v___x_1418_);
if (v_isShared_1425_ == 0)
{
lean_ctor_set(v___x_1424_, 0, v___x_1430_);
v___x_1432_ = v___x_1424_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1430_);
v___x_1432_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
return v___x_1432_;
}
}
}
}
else
{
lean_dec_ref(v_f_1408_);
return v___x_1421_;
}
}
}
else
{
uint8_t v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; 
lean_dec_ref(v_f_1408_);
v___x_1439_ = 0;
v___x_1440_ = lean_box(v___x_1439_);
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v___x_1440_);
return v___x_1441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object* v_pu_1442_, lean_object* v_f_1443_, lean_object* v_as_1444_, lean_object* v_i_1445_, lean_object* v_stop_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_){
_start:
{
uint8_t v_pu_boxed_1452_; size_t v_i_boxed_1453_; size_t v_stop_boxed_1454_; lean_object* v_res_1455_; 
v_pu_boxed_1452_ = lean_unbox(v_pu_1442_);
v_i_boxed_1453_ = lean_unbox_usize(v_i_1445_);
lean_dec(v_i_1445_);
v_stop_boxed_1454_ = lean_unbox_usize(v_stop_1446_);
lean_dec(v_stop_1446_);
v_res_1455_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_boxed_1452_, v_f_1443_, v_as_1444_, v_i_boxed_1453_, v_stop_boxed_1454_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_);
lean_dec(v___y_1450_);
lean_dec_ref(v___y_1449_);
lean_dec(v___y_1448_);
lean_dec_ref(v___y_1447_);
lean_dec_ref(v_as_1444_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object* v_pu_1456_, lean_object* v_f_1457_, lean_object* v_a_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
uint8_t v_pu_boxed_1464_; lean_object* v_res_1465_; 
v_pu_boxed_1464_ = lean_unbox(v_pu_1456_);
v_res_1465_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_boxed_1464_, v_f_1457_, v_a_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
return v_res_1465_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object* v_v_1466_, lean_object* v_f_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
if (lean_obj_tag(v_v_1466_) == 0)
{
lean_object* v_code_1473_; lean_object* v___x_1474_; 
v_code_1473_ = lean_ctor_get(v_v_1466_, 0);
lean_inc_ref(v_code_1473_);
lean_dec_ref_known(v_v_1466_, 1);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
v___x_1474_ = lean_apply_6(v_f_1467_, v_code_1473_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, lean_box(0));
return v___x_1474_;
}
else
{
lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1483_; 
lean_dec_ref(v_f_1467_);
v_isSharedCheck_1483_ = !lean_is_exclusive(v_v_1466_);
if (v_isSharedCheck_1483_ == 0)
{
lean_object* v_unused_1484_; 
v_unused_1484_ = lean_ctor_get(v_v_1466_, 0);
lean_dec(v_unused_1484_);
v___x_1476_ = v_v_1466_;
v_isShared_1477_ = v_isSharedCheck_1483_;
goto v_resetjp_1475_;
}
else
{
lean_dec(v_v_1466_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1483_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
uint8_t v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1481_; 
v___x_1478_ = 0;
v___x_1479_ = lean_box(v___x_1478_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set_tag(v___x_1476_, 0);
lean_ctor_set(v___x_1476_, 0, v___x_1479_);
v___x_1481_ = v___x_1476_;
goto v_reusejp_1480_;
}
else
{
lean_object* v_reuseFailAlloc_1482_; 
v_reuseFailAlloc_1482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1482_, 0, v___x_1479_);
v___x_1481_ = v_reuseFailAlloc_1482_;
goto v_reusejp_1480_;
}
v_reusejp_1480_:
{
return v___x_1481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object* v_v_1485_, lean_object* v_f_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v_res_1492_; 
v_res_1492_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1485_, v_f_1486_, v___y_1487_, v___y_1488_, v___y_1489_, v___y_1490_);
lean_dec(v___y_1490_);
lean_dec_ref(v___y_1489_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
return v_res_1492_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t v_pu_1493_, lean_object* v_v_1494_, lean_object* v_f_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_){
_start:
{
lean_object* v___x_1501_; 
v___x_1501_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1494_, v_f_1495_, v___y_1496_, v___y_1497_, v___y_1498_, v___y_1499_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object* v_pu_1502_, lean_object* v_v_1503_, lean_object* v_f_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_){
_start:
{
uint8_t v_pu_boxed_1510_; lean_object* v_res_1511_; 
v_pu_boxed_1510_ = lean_unbox(v_pu_1502_);
v_res_1511_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(v_pu_boxed_1510_, v_v_1503_, v_f_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
return v_res_1511_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t v_pu_1512_, lean_object* v_f_1513_, lean_object* v_as_1514_, size_t v_i_1515_, size_t v_stop_1516_, lean_object* v_b_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_){
_start:
{
lean_object* v_a_1524_; uint8_t v___x_1528_; 
v___x_1528_ = lean_usize_dec_eq(v_i_1515_, v_stop_1516_);
if (v___x_1528_ == 0)
{
lean_object* v___x_1529_; lean_object* v_value_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v___x_1529_ = lean_array_uget_borrowed(v_as_1514_, v_i_1515_);
v_value_1530_ = lean_ctor_get(v___x_1529_, 1);
v___x_1531_ = lean_box(v_pu_1512_);
lean_inc_ref(v_f_1513_);
v___x_1532_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed), 8, 2);
lean_closure_set(v___x_1532_, 0, v___x_1531_);
lean_closure_set(v___x_1532_, 1, v_f_1513_);
lean_inc_ref(v_value_1530_);
v___x_1533_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1530_, v___x_1532_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
if (lean_obj_tag(v___x_1533_) == 0)
{
lean_object* v_a_1534_; uint8_t v___x_1535_; 
v_a_1534_ = lean_ctor_get(v___x_1533_, 0);
lean_inc(v_a_1534_);
lean_dec_ref_known(v___x_1533_, 1);
v___x_1535_ = lean_unbox(v_a_1534_);
lean_dec(v_a_1534_);
if (v___x_1535_ == 0)
{
v_a_1524_ = v_b_1517_;
goto v___jp_1523_;
}
else
{
lean_object* v___x_1536_; 
lean_inc(v___x_1529_);
v___x_1536_ = lean_array_push(v_b_1517_, v___x_1529_);
v_a_1524_ = v___x_1536_;
goto v___jp_1523_;
}
}
else
{
lean_object* v_a_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
lean_dec_ref(v_b_1517_);
lean_dec_ref(v_f_1513_);
v_a_1537_ = lean_ctor_get(v___x_1533_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1533_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1533_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_a_1537_);
lean_dec(v___x_1533_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_a_1537_);
v___x_1542_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1541_;
}
v_reusejp_1541_:
{
return v___x_1542_;
}
}
}
}
else
{
lean_object* v___x_1545_; 
lean_dec_ref(v_f_1513_);
v___x_1545_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1545_, 0, v_b_1517_);
return v___x_1545_;
}
v___jp_1523_:
{
size_t v___x_1525_; size_t v___x_1526_; 
v___x_1525_ = ((size_t)1ULL);
v___x_1526_ = lean_usize_add(v_i_1515_, v___x_1525_);
v_i_1515_ = v___x_1526_;
v_b_1517_ = v_a_1524_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object* v_pu_1546_, lean_object* v_f_1547_, lean_object* v_as_1548_, lean_object* v_i_1549_, lean_object* v_stop_1550_, lean_object* v_b_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
uint8_t v_pu_boxed_1557_; size_t v_i_boxed_1558_; size_t v_stop_boxed_1559_; lean_object* v_res_1560_; 
v_pu_boxed_1557_ = lean_unbox(v_pu_1546_);
v_i_boxed_1558_ = lean_unbox_usize(v_i_1549_);
lean_dec(v_i_1549_);
v_stop_boxed_1559_ = lean_unbox_usize(v_stop_1550_);
lean_dec(v_stop_1550_);
v_res_1560_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_boxed_1557_, v_f_1547_, v_as_1548_, v_i_boxed_1558_, v_stop_boxed_1559_, v_b_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec_ref(v_as_1548_);
return v_res_1560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t v_pu_1563_, lean_object* v_f_1564_, lean_object* v_a_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; uint8_t v___x_1574_; 
v___x_1571_ = lean_unsigned_to_nat(0u);
v___x_1572_ = lean_array_get_size(v_a_1565_);
v___x_1573_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1574_ = lean_nat_dec_lt(v___x_1571_, v___x_1572_);
if (v___x_1574_ == 0)
{
lean_object* v___x_1575_; 
lean_dec_ref(v_f_1564_);
v___x_1575_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1575_, 0, v___x_1573_);
return v___x_1575_;
}
else
{
size_t v___x_1576_; size_t v___x_1577_; lean_object* v___x_1578_; 
v___x_1576_ = ((size_t)0ULL);
v___x_1577_ = lean_usize_of_nat(v___x_1572_);
v___x_1578_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_1563_, v_f_1564_, v_a_1565_, v___x_1576_, v___x_1577_, v___x_1573_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
return v___x_1578_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object* v_pu_1579_, lean_object* v_f_1580_, lean_object* v_a_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_){
_start:
{
uint8_t v_pu_boxed_1587_; lean_object* v_res_1588_; 
v_pu_boxed_1587_ = lean_unbox(v_pu_1579_);
v_res_1588_ = l_Lean_Compiler_LCNF_Probe_filterByLet(v_pu_boxed_1587_, v_f_1580_, v_a_1581_, v___y_1582_, v___y_1583_, v___y_1584_, v___y_1585_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec(v___y_1583_);
lean_dec_ref(v___y_1582_);
lean_dec_ref(v_a_1581_);
return v_res_1588_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t v_pu_1589_, lean_object* v_f_1590_, lean_object* v_a_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_){
_start:
{
switch(lean_obj_tag(v_a_1591_))
{
case 0:
{
lean_object* v_k_1597_; 
v_k_1597_ = lean_ctor_get(v_a_1591_, 1);
lean_inc_ref(v_k_1597_);
lean_dec_ref_known(v_a_1591_, 2);
v_a_1591_ = v_k_1597_;
goto _start;
}
case 1:
{
lean_object* v_decl_1599_; lean_object* v_k_1600_; lean_object* v___x_1601_; 
v_decl_1599_ = lean_ctor_get(v_a_1591_, 0);
lean_inc_ref_n(v_decl_1599_, 2);
v_k_1600_ = lean_ctor_get(v_a_1591_, 1);
lean_inc_ref(v_k_1600_);
lean_dec_ref_known(v_a_1591_, 2);
lean_inc_ref(v_f_1590_);
lean_inc(v___y_1595_);
lean_inc_ref(v___y_1594_);
lean_inc(v___y_1593_);
lean_inc_ref(v___y_1592_);
v___x_1601_ = lean_apply_6(v_f_1590_, v_decl_1599_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_, lean_box(0));
if (lean_obj_tag(v___x_1601_) == 0)
{
lean_object* v_a_1602_; uint8_t v___x_1603_; 
v_a_1602_ = lean_ctor_get(v___x_1601_, 0);
lean_inc(v_a_1602_);
v___x_1603_ = lean_unbox(v_a_1602_);
lean_dec(v_a_1602_);
if (v___x_1603_ == 0)
{
lean_object* v_value_1604_; lean_object* v___x_1605_; 
lean_dec_ref_known(v___x_1601_, 1);
v_value_1604_ = lean_ctor_get(v_decl_1599_, 4);
lean_inc_ref(v_value_1604_);
lean_dec_ref(v_decl_1599_);
lean_inc_ref(v_f_1590_);
v___x_1605_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1589_, v_f_1590_, v_value_1604_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
if (lean_obj_tag(v___x_1605_) == 0)
{
lean_object* v_a_1606_; uint8_t v___x_1607_; 
v_a_1606_ = lean_ctor_get(v___x_1605_, 0);
lean_inc(v_a_1606_);
v___x_1607_ = lean_unbox(v_a_1606_);
lean_dec(v_a_1606_);
if (v___x_1607_ == 0)
{
lean_dec_ref_known(v___x_1605_, 1);
v_a_1591_ = v_k_1600_;
goto _start;
}
else
{
lean_dec_ref(v_k_1600_);
lean_dec_ref(v_f_1590_);
return v___x_1605_;
}
}
else
{
lean_dec_ref(v_k_1600_);
lean_dec_ref(v_f_1590_);
return v___x_1605_;
}
}
else
{
lean_dec_ref(v_k_1600_);
lean_dec_ref(v_decl_1599_);
lean_dec_ref(v_f_1590_);
return v___x_1601_;
}
}
else
{
lean_dec_ref(v_k_1600_);
lean_dec_ref(v_decl_1599_);
lean_dec_ref(v_f_1590_);
return v___x_1601_;
}
}
case 2:
{
lean_object* v_k_1609_; 
v_k_1609_ = lean_ctor_get(v_a_1591_, 1);
lean_inc_ref(v_k_1609_);
lean_dec_ref_known(v_a_1591_, 2);
v_a_1591_ = v_k_1609_;
goto _start;
}
case 4:
{
lean_object* v_cases_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1630_; 
v_cases_1611_ = lean_ctor_get(v_a_1591_, 0);
v_isSharedCheck_1630_ = !lean_is_exclusive(v_a_1591_);
if (v_isSharedCheck_1630_ == 0)
{
v___x_1613_ = v_a_1591_;
v_isShared_1614_ = v_isSharedCheck_1630_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_cases_1611_);
lean_dec(v_a_1591_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1630_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v_alts_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; uint8_t v___x_1618_; 
v_alts_1615_ = lean_ctor_get(v_cases_1611_, 3);
lean_inc_ref(v_alts_1615_);
lean_dec_ref(v_cases_1611_);
v___x_1616_ = lean_unsigned_to_nat(0u);
v___x_1617_ = lean_array_get_size(v_alts_1615_);
v___x_1618_ = lean_nat_dec_lt(v___x_1616_, v___x_1617_);
if (v___x_1618_ == 0)
{
lean_object* v___x_1619_; lean_object* v___x_1621_; 
lean_dec_ref(v_alts_1615_);
lean_dec_ref(v_f_1590_);
v___x_1619_ = lean_box(v___x_1618_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set_tag(v___x_1613_, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1619_);
v___x_1621_ = v___x_1613_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v___x_1619_);
v___x_1621_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
return v___x_1621_;
}
}
else
{
if (v___x_1618_ == 0)
{
lean_object* v___x_1623_; lean_object* v___x_1625_; 
lean_dec_ref(v_alts_1615_);
lean_dec_ref(v_f_1590_);
v___x_1623_ = lean_box(v___x_1618_);
if (v_isShared_1614_ == 0)
{
lean_ctor_set_tag(v___x_1613_, 0);
lean_ctor_set(v___x_1613_, 0, v___x_1623_);
v___x_1625_ = v___x_1613_;
goto v_reusejp_1624_;
}
else
{
lean_object* v_reuseFailAlloc_1626_; 
v_reuseFailAlloc_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1626_, 0, v___x_1623_);
v___x_1625_ = v_reuseFailAlloc_1626_;
goto v_reusejp_1624_;
}
v_reusejp_1624_:
{
return v___x_1625_;
}
}
else
{
size_t v___x_1627_; size_t v___x_1628_; lean_object* v___x_1629_; 
lean_del_object(v___x_1613_);
v___x_1627_ = ((size_t)0ULL);
v___x_1628_ = lean_usize_of_nat(v___x_1617_);
v___x_1629_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_1589_, v_f_1590_, v_alts_1615_, v___x_1627_, v___x_1628_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec_ref(v_alts_1615_);
return v___x_1629_;
}
}
}
}
case 7:
{
lean_object* v_k_1631_; 
v_k_1631_ = lean_ctor_get(v_a_1591_, 3);
lean_inc_ref(v_k_1631_);
lean_dec_ref_known(v_a_1591_, 4);
v_a_1591_ = v_k_1631_;
goto _start;
}
case 8:
{
lean_object* v_k_1633_; 
v_k_1633_ = lean_ctor_get(v_a_1591_, 3);
lean_inc_ref(v_k_1633_);
lean_dec_ref_known(v_a_1591_, 4);
v_a_1591_ = v_k_1633_;
goto _start;
}
case 9:
{
lean_object* v_k_1635_; 
v_k_1635_ = lean_ctor_get(v_a_1591_, 5);
lean_inc_ref(v_k_1635_);
lean_dec_ref_known(v_a_1591_, 6);
v_a_1591_ = v_k_1635_;
goto _start;
}
case 10:
{
lean_object* v_k_1637_; 
v_k_1637_ = lean_ctor_get(v_a_1591_, 2);
lean_inc_ref(v_k_1637_);
lean_dec_ref_known(v_a_1591_, 3);
v_a_1591_ = v_k_1637_;
goto _start;
}
case 11:
{
lean_object* v_k_1639_; 
v_k_1639_ = lean_ctor_get(v_a_1591_, 2);
lean_inc_ref(v_k_1639_);
lean_dec_ref_known(v_a_1591_, 3);
v_a_1591_ = v_k_1639_;
goto _start;
}
case 12:
{
lean_object* v_k_1641_; 
v_k_1641_ = lean_ctor_get(v_a_1591_, 3);
lean_inc_ref(v_k_1641_);
lean_dec_ref_known(v_a_1591_, 4);
v_a_1591_ = v_k_1641_;
goto _start;
}
case 13:
{
lean_object* v_k_1643_; 
v_k_1643_ = lean_ctor_get(v_a_1591_, 1);
lean_inc_ref(v_k_1643_);
lean_dec_ref_known(v_a_1591_, 2);
v_a_1591_ = v_k_1643_;
goto _start;
}
default: 
{
uint8_t v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; 
lean_dec_ref(v_a_1591_);
lean_dec_ref(v_f_1590_);
v___x_1645_ = 0;
v___x_1646_ = lean_box(v___x_1645_);
v___x_1647_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1647_, 0, v___x_1646_);
return v___x_1647_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t v_pu_1648_, lean_object* v_f_1649_, lean_object* v_as_1650_, size_t v_i_1651_, size_t v_stop_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_){
_start:
{
uint8_t v___x_1658_; 
v___x_1658_ = lean_usize_dec_eq(v_i_1651_, v_stop_1652_);
if (v___x_1658_ == 0)
{
uint8_t v___x_1659_; lean_object* v___y_1661_; lean_object* v___x_1676_; 
v___x_1659_ = 1;
v___x_1676_ = lean_array_uget_borrowed(v_as_1650_, v_i_1651_);
switch(lean_obj_tag(v___x_1676_))
{
case 0:
{
lean_object* v_code_1677_; 
v_code_1677_ = lean_ctor_get(v___x_1676_, 2);
lean_inc_ref(v_code_1677_);
v___y_1661_ = v_code_1677_;
goto v___jp_1660_;
}
case 1:
{
lean_object* v_code_1678_; 
v_code_1678_ = lean_ctor_get(v___x_1676_, 1);
lean_inc_ref(v_code_1678_);
v___y_1661_ = v_code_1678_;
goto v___jp_1660_;
}
default: 
{
lean_object* v_code_1679_; 
v_code_1679_ = lean_ctor_get(v___x_1676_, 0);
lean_inc_ref(v_code_1679_);
v___y_1661_ = v_code_1679_;
goto v___jp_1660_;
}
}
v___jp_1660_:
{
lean_object* v___x_1662_; 
lean_inc_ref(v_f_1649_);
v___x_1662_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1648_, v_f_1649_, v___y_1661_, v___y_1653_, v___y_1654_, v___y_1655_, v___y_1656_);
if (lean_obj_tag(v___x_1662_) == 0)
{
lean_object* v_a_1663_; lean_object* v___x_1665_; uint8_t v_isShared_1666_; uint8_t v_isSharedCheck_1675_; 
v_a_1663_ = lean_ctor_get(v___x_1662_, 0);
v_isSharedCheck_1675_ = !lean_is_exclusive(v___x_1662_);
if (v_isSharedCheck_1675_ == 0)
{
v___x_1665_ = v___x_1662_;
v_isShared_1666_ = v_isSharedCheck_1675_;
goto v_resetjp_1664_;
}
else
{
lean_inc(v_a_1663_);
lean_dec(v___x_1662_);
v___x_1665_ = lean_box(0);
v_isShared_1666_ = v_isSharedCheck_1675_;
goto v_resetjp_1664_;
}
v_resetjp_1664_:
{
uint8_t v___x_1667_; 
v___x_1667_ = lean_unbox(v_a_1663_);
lean_dec(v_a_1663_);
if (v___x_1667_ == 0)
{
size_t v___x_1668_; size_t v___x_1669_; 
lean_del_object(v___x_1665_);
v___x_1668_ = ((size_t)1ULL);
v___x_1669_ = lean_usize_add(v_i_1651_, v___x_1668_);
v_i_1651_ = v___x_1669_;
goto _start;
}
else
{
lean_object* v___x_1671_; lean_object* v___x_1673_; 
lean_dec_ref(v_f_1649_);
v___x_1671_ = lean_box(v___x_1659_);
if (v_isShared_1666_ == 0)
{
lean_ctor_set(v___x_1665_, 0, v___x_1671_);
v___x_1673_ = v___x_1665_;
goto v_reusejp_1672_;
}
else
{
lean_object* v_reuseFailAlloc_1674_; 
v_reuseFailAlloc_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1674_, 0, v___x_1671_);
v___x_1673_ = v_reuseFailAlloc_1674_;
goto v_reusejp_1672_;
}
v_reusejp_1672_:
{
return v___x_1673_;
}
}
}
}
else
{
lean_dec_ref(v_f_1649_);
return v___x_1662_;
}
}
}
else
{
uint8_t v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; 
lean_dec_ref(v_f_1649_);
v___x_1680_ = 0;
v___x_1681_ = lean_box(v___x_1680_);
v___x_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
return v___x_1682_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object* v_pu_1683_, lean_object* v_f_1684_, lean_object* v_as_1685_, lean_object* v_i_1686_, lean_object* v_stop_1687_, lean_object* v___y_1688_, lean_object* v___y_1689_, lean_object* v___y_1690_, lean_object* v___y_1691_, lean_object* v___y_1692_){
_start:
{
uint8_t v_pu_boxed_1693_; size_t v_i_boxed_1694_; size_t v_stop_boxed_1695_; lean_object* v_res_1696_; 
v_pu_boxed_1693_ = lean_unbox(v_pu_1683_);
v_i_boxed_1694_ = lean_unbox_usize(v_i_1686_);
lean_dec(v_i_1686_);
v_stop_boxed_1695_ = lean_unbox_usize(v_stop_1687_);
lean_dec(v_stop_1687_);
v_res_1696_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_boxed_1693_, v_f_1684_, v_as_1685_, v_i_boxed_1694_, v_stop_boxed_1695_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_);
lean_dec(v___y_1691_);
lean_dec_ref(v___y_1690_);
lean_dec(v___y_1689_);
lean_dec_ref(v___y_1688_);
lean_dec_ref(v_as_1685_);
return v_res_1696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object* v_pu_1697_, lean_object* v_f_1698_, lean_object* v_a_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_, lean_object* v___y_1703_, lean_object* v___y_1704_){
_start:
{
uint8_t v_pu_boxed_1705_; lean_object* v_res_1706_; 
v_pu_boxed_1705_ = lean_unbox(v_pu_1697_);
v_res_1706_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_boxed_1705_, v_f_1698_, v_a_1699_, v___y_1700_, v___y_1701_, v___y_1702_, v___y_1703_);
lean_dec(v___y_1703_);
lean_dec_ref(v___y_1702_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
return v_res_1706_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t v_pu_1707_, lean_object* v_f_1708_, lean_object* v_as_1709_, size_t v_i_1710_, size_t v_stop_1711_, lean_object* v_b_1712_, lean_object* v___y_1713_, lean_object* v___y_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_a_1719_; uint8_t v___x_1723_; 
v___x_1723_ = lean_usize_dec_eq(v_i_1710_, v_stop_1711_);
if (v___x_1723_ == 0)
{
lean_object* v___x_1724_; lean_object* v_value_1725_; lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1724_ = lean_array_uget_borrowed(v_as_1709_, v_i_1710_);
v_value_1725_ = lean_ctor_get(v___x_1724_, 1);
v___x_1726_ = lean_box(v_pu_1707_);
lean_inc_ref(v_f_1708_);
v___x_1727_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed), 8, 2);
lean_closure_set(v___x_1727_, 0, v___x_1726_);
lean_closure_set(v___x_1727_, 1, v_f_1708_);
lean_inc_ref(v_value_1725_);
v___x_1728_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1725_, v___x_1727_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_);
if (lean_obj_tag(v___x_1728_) == 0)
{
lean_object* v_a_1729_; uint8_t v___x_1730_; 
v_a_1729_ = lean_ctor_get(v___x_1728_, 0);
lean_inc(v_a_1729_);
lean_dec_ref_known(v___x_1728_, 1);
v___x_1730_ = lean_unbox(v_a_1729_);
lean_dec(v_a_1729_);
if (v___x_1730_ == 0)
{
v_a_1719_ = v_b_1712_;
goto v___jp_1718_;
}
else
{
lean_object* v___x_1731_; 
lean_inc(v___x_1724_);
v___x_1731_ = lean_array_push(v_b_1712_, v___x_1724_);
v_a_1719_ = v___x_1731_;
goto v___jp_1718_;
}
}
else
{
lean_object* v_a_1732_; lean_object* v___x_1734_; uint8_t v_isShared_1735_; uint8_t v_isSharedCheck_1739_; 
lean_dec_ref(v_b_1712_);
lean_dec_ref(v_f_1708_);
v_a_1732_ = lean_ctor_get(v___x_1728_, 0);
v_isSharedCheck_1739_ = !lean_is_exclusive(v___x_1728_);
if (v_isSharedCheck_1739_ == 0)
{
v___x_1734_ = v___x_1728_;
v_isShared_1735_ = v_isSharedCheck_1739_;
goto v_resetjp_1733_;
}
else
{
lean_inc(v_a_1732_);
lean_dec(v___x_1728_);
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
v_reuseFailAlloc_1738_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1738_, 0, v_a_1732_);
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
else
{
lean_object* v___x_1740_; 
lean_dec_ref(v_f_1708_);
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v_b_1712_);
return v___x_1740_;
}
v___jp_1718_:
{
size_t v___x_1720_; size_t v___x_1721_; 
v___x_1720_ = ((size_t)1ULL);
v___x_1721_ = lean_usize_add(v_i_1710_, v___x_1720_);
v_i_1710_ = v___x_1721_;
v_b_1712_ = v_a_1719_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object* v_pu_1741_, lean_object* v_f_1742_, lean_object* v_as_1743_, lean_object* v_i_1744_, lean_object* v_stop_1745_, lean_object* v_b_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_){
_start:
{
uint8_t v_pu_boxed_1752_; size_t v_i_boxed_1753_; size_t v_stop_boxed_1754_; lean_object* v_res_1755_; 
v_pu_boxed_1752_ = lean_unbox(v_pu_1741_);
v_i_boxed_1753_ = lean_unbox_usize(v_i_1744_);
lean_dec(v_i_1744_);
v_stop_boxed_1754_ = lean_unbox_usize(v_stop_1745_);
lean_dec(v_stop_1745_);
v_res_1755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_boxed_1752_, v_f_1742_, v_as_1743_, v_i_boxed_1753_, v_stop_boxed_1754_, v_b_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_);
lean_dec(v___y_1750_);
lean_dec_ref(v___y_1749_);
lean_dec(v___y_1748_);
lean_dec_ref(v___y_1747_);
lean_dec_ref(v_as_1743_);
return v_res_1755_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t v_pu_1756_, lean_object* v_f_1757_, lean_object* v_a_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_){
_start:
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; uint8_t v___x_1767_; 
v___x_1764_ = lean_unsigned_to_nat(0u);
v___x_1765_ = lean_array_get_size(v_a_1758_);
v___x_1766_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1767_ = lean_nat_dec_lt(v___x_1764_, v___x_1765_);
if (v___x_1767_ == 0)
{
lean_object* v___x_1768_; 
lean_dec_ref(v_f_1757_);
v___x_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1768_, 0, v___x_1766_);
return v___x_1768_;
}
else
{
size_t v___x_1769_; size_t v___x_1770_; lean_object* v___x_1771_; 
v___x_1769_ = ((size_t)0ULL);
v___x_1770_ = lean_usize_of_nat(v___x_1765_);
v___x_1771_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_1756_, v_f_1757_, v_a_1758_, v___x_1769_, v___x_1770_, v___x_1766_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
return v___x_1771_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object* v_pu_1772_, lean_object* v_f_1773_, lean_object* v_a_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_){
_start:
{
uint8_t v_pu_boxed_1780_; lean_object* v_res_1781_; 
v_pu_boxed_1780_ = lean_unbox(v_pu_1772_);
v_res_1781_ = l_Lean_Compiler_LCNF_Probe_filterByFun(v_pu_boxed_1780_, v_f_1773_, v_a_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec_ref(v_a_1774_);
return v_res_1781_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t v_pu_1782_, lean_object* v_f_1783_, lean_object* v_a_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_){
_start:
{
switch(lean_obj_tag(v_a_1784_))
{
case 0:
{
lean_object* v_k_1790_; 
v_k_1790_ = lean_ctor_get(v_a_1784_, 1);
lean_inc_ref(v_k_1790_);
lean_dec_ref_known(v_a_1784_, 2);
v_a_1784_ = v_k_1790_;
goto _start;
}
case 1:
{
lean_object* v_decl_1792_; lean_object* v_k_1793_; lean_object* v_value_1794_; lean_object* v___x_1795_; 
v_decl_1792_ = lean_ctor_get(v_a_1784_, 0);
lean_inc_ref(v_decl_1792_);
v_k_1793_ = lean_ctor_get(v_a_1784_, 1);
lean_inc_ref(v_k_1793_);
lean_dec_ref_known(v_a_1784_, 2);
v_value_1794_ = lean_ctor_get(v_decl_1792_, 4);
lean_inc_ref(v_value_1794_);
lean_dec_ref(v_decl_1792_);
lean_inc_ref(v_f_1783_);
v___x_1795_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1782_, v_f_1783_, v_value_1794_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; uint8_t v___x_1797_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1796_);
v___x_1797_ = lean_unbox(v_a_1796_);
lean_dec(v_a_1796_);
if (v___x_1797_ == 0)
{
lean_dec_ref_known(v___x_1795_, 1);
v_a_1784_ = v_k_1793_;
goto _start;
}
else
{
lean_dec_ref(v_k_1793_);
lean_dec_ref(v_f_1783_);
return v___x_1795_;
}
}
else
{
lean_dec_ref(v_k_1793_);
lean_dec_ref(v_f_1783_);
return v___x_1795_;
}
}
case 2:
{
lean_object* v_decl_1799_; lean_object* v_k_1800_; lean_object* v___x_1801_; 
v_decl_1799_ = lean_ctor_get(v_a_1784_, 0);
lean_inc_ref_n(v_decl_1799_, 2);
v_k_1800_ = lean_ctor_get(v_a_1784_, 1);
lean_inc_ref(v_k_1800_);
lean_dec_ref_known(v_a_1784_, 2);
lean_inc_ref(v_f_1783_);
lean_inc(v___y_1788_);
lean_inc_ref(v___y_1787_);
lean_inc(v___y_1786_);
lean_inc_ref(v___y_1785_);
v___x_1801_ = lean_apply_6(v_f_1783_, v_decl_1799_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_, lean_box(0));
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_object* v_a_1802_; uint8_t v___x_1803_; 
v_a_1802_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_a_1802_);
v___x_1803_ = lean_unbox(v_a_1802_);
lean_dec(v_a_1802_);
if (v___x_1803_ == 0)
{
lean_object* v_value_1804_; lean_object* v___x_1805_; 
lean_dec_ref_known(v___x_1801_, 1);
v_value_1804_ = lean_ctor_get(v_decl_1799_, 4);
lean_inc_ref(v_value_1804_);
lean_dec_ref(v_decl_1799_);
lean_inc_ref(v_f_1783_);
v___x_1805_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1782_, v_f_1783_, v_value_1804_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
if (lean_obj_tag(v___x_1805_) == 0)
{
lean_object* v_a_1806_; uint8_t v___x_1807_; 
v_a_1806_ = lean_ctor_get(v___x_1805_, 0);
lean_inc(v_a_1806_);
v___x_1807_ = lean_unbox(v_a_1806_);
lean_dec(v_a_1806_);
if (v___x_1807_ == 0)
{
lean_dec_ref_known(v___x_1805_, 1);
v_a_1784_ = v_k_1800_;
goto _start;
}
else
{
lean_dec_ref(v_k_1800_);
lean_dec_ref(v_f_1783_);
return v___x_1805_;
}
}
else
{
lean_dec_ref(v_k_1800_);
lean_dec_ref(v_f_1783_);
return v___x_1805_;
}
}
else
{
lean_dec_ref(v_k_1800_);
lean_dec_ref(v_decl_1799_);
lean_dec_ref(v_f_1783_);
return v___x_1801_;
}
}
else
{
lean_dec_ref(v_k_1800_);
lean_dec_ref(v_decl_1799_);
lean_dec_ref(v_f_1783_);
return v___x_1801_;
}
}
case 4:
{
lean_object* v_cases_1809_; lean_object* v___x_1811_; uint8_t v_isShared_1812_; uint8_t v_isSharedCheck_1828_; 
v_cases_1809_ = lean_ctor_get(v_a_1784_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v_a_1784_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1811_ = v_a_1784_;
v_isShared_1812_ = v_isSharedCheck_1828_;
goto v_resetjp_1810_;
}
else
{
lean_inc(v_cases_1809_);
lean_dec(v_a_1784_);
v___x_1811_ = lean_box(0);
v_isShared_1812_ = v_isSharedCheck_1828_;
goto v_resetjp_1810_;
}
v_resetjp_1810_:
{
lean_object* v_alts_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; uint8_t v___x_1816_; 
v_alts_1813_ = lean_ctor_get(v_cases_1809_, 3);
lean_inc_ref(v_alts_1813_);
lean_dec_ref(v_cases_1809_);
v___x_1814_ = lean_unsigned_to_nat(0u);
v___x_1815_ = lean_array_get_size(v_alts_1813_);
v___x_1816_ = lean_nat_dec_lt(v___x_1814_, v___x_1815_);
if (v___x_1816_ == 0)
{
lean_object* v___x_1817_; lean_object* v___x_1819_; 
lean_dec_ref(v_alts_1813_);
lean_dec_ref(v_f_1783_);
v___x_1817_ = lean_box(v___x_1816_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set_tag(v___x_1811_, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1817_);
v___x_1819_ = v___x_1811_;
goto v_reusejp_1818_;
}
else
{
lean_object* v_reuseFailAlloc_1820_; 
v_reuseFailAlloc_1820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1820_, 0, v___x_1817_);
v___x_1819_ = v_reuseFailAlloc_1820_;
goto v_reusejp_1818_;
}
v_reusejp_1818_:
{
return v___x_1819_;
}
}
else
{
if (v___x_1816_ == 0)
{
lean_object* v___x_1821_; lean_object* v___x_1823_; 
lean_dec_ref(v_alts_1813_);
lean_dec_ref(v_f_1783_);
v___x_1821_ = lean_box(v___x_1816_);
if (v_isShared_1812_ == 0)
{
lean_ctor_set_tag(v___x_1811_, 0);
lean_ctor_set(v___x_1811_, 0, v___x_1821_);
v___x_1823_ = v___x_1811_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v___x_1821_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
else
{
size_t v___x_1825_; size_t v___x_1826_; lean_object* v___x_1827_; 
lean_del_object(v___x_1811_);
v___x_1825_ = ((size_t)0ULL);
v___x_1826_ = lean_usize_of_nat(v___x_1815_);
v___x_1827_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_1782_, v_f_1783_, v_alts_1813_, v___x_1825_, v___x_1826_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
lean_dec_ref(v_alts_1813_);
return v___x_1827_;
}
}
}
}
case 7:
{
lean_object* v_k_1829_; 
v_k_1829_ = lean_ctor_get(v_a_1784_, 3);
lean_inc_ref(v_k_1829_);
lean_dec_ref_known(v_a_1784_, 4);
v_a_1784_ = v_k_1829_;
goto _start;
}
case 8:
{
lean_object* v_k_1831_; 
v_k_1831_ = lean_ctor_get(v_a_1784_, 3);
lean_inc_ref(v_k_1831_);
lean_dec_ref_known(v_a_1784_, 4);
v_a_1784_ = v_k_1831_;
goto _start;
}
case 9:
{
lean_object* v_k_1833_; 
v_k_1833_ = lean_ctor_get(v_a_1784_, 5);
lean_inc_ref(v_k_1833_);
lean_dec_ref_known(v_a_1784_, 6);
v_a_1784_ = v_k_1833_;
goto _start;
}
case 10:
{
lean_object* v_k_1835_; 
v_k_1835_ = lean_ctor_get(v_a_1784_, 2);
lean_inc_ref(v_k_1835_);
lean_dec_ref_known(v_a_1784_, 3);
v_a_1784_ = v_k_1835_;
goto _start;
}
case 11:
{
lean_object* v_k_1837_; 
v_k_1837_ = lean_ctor_get(v_a_1784_, 2);
lean_inc_ref(v_k_1837_);
lean_dec_ref_known(v_a_1784_, 3);
v_a_1784_ = v_k_1837_;
goto _start;
}
case 12:
{
lean_object* v_k_1839_; 
v_k_1839_ = lean_ctor_get(v_a_1784_, 3);
lean_inc_ref(v_k_1839_);
lean_dec_ref_known(v_a_1784_, 4);
v_a_1784_ = v_k_1839_;
goto _start;
}
case 13:
{
lean_object* v_k_1841_; 
v_k_1841_ = lean_ctor_get(v_a_1784_, 1);
lean_inc_ref(v_k_1841_);
lean_dec_ref_known(v_a_1784_, 2);
v_a_1784_ = v_k_1841_;
goto _start;
}
default: 
{
uint8_t v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; 
lean_dec_ref(v_a_1784_);
lean_dec_ref(v_f_1783_);
v___x_1843_ = 0;
v___x_1844_ = lean_box(v___x_1843_);
v___x_1845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1845_, 0, v___x_1844_);
return v___x_1845_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t v_pu_1846_, lean_object* v_f_1847_, lean_object* v_as_1848_, size_t v_i_1849_, size_t v_stop_1850_, lean_object* v___y_1851_, lean_object* v___y_1852_, lean_object* v___y_1853_, lean_object* v___y_1854_){
_start:
{
uint8_t v___x_1856_; 
v___x_1856_ = lean_usize_dec_eq(v_i_1849_, v_stop_1850_);
if (v___x_1856_ == 0)
{
uint8_t v___x_1857_; lean_object* v___y_1859_; lean_object* v___x_1874_; 
v___x_1857_ = 1;
v___x_1874_ = lean_array_uget_borrowed(v_as_1848_, v_i_1849_);
switch(lean_obj_tag(v___x_1874_))
{
case 0:
{
lean_object* v_code_1875_; 
v_code_1875_ = lean_ctor_get(v___x_1874_, 2);
lean_inc_ref(v_code_1875_);
v___y_1859_ = v_code_1875_;
goto v___jp_1858_;
}
case 1:
{
lean_object* v_code_1876_; 
v_code_1876_ = lean_ctor_get(v___x_1874_, 1);
lean_inc_ref(v_code_1876_);
v___y_1859_ = v_code_1876_;
goto v___jp_1858_;
}
default: 
{
lean_object* v_code_1877_; 
v_code_1877_ = lean_ctor_get(v___x_1874_, 0);
lean_inc_ref(v_code_1877_);
v___y_1859_ = v_code_1877_;
goto v___jp_1858_;
}
}
v___jp_1858_:
{
lean_object* v___x_1860_; 
lean_inc_ref(v_f_1847_);
v___x_1860_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1846_, v_f_1847_, v___y_1859_, v___y_1851_, v___y_1852_, v___y_1853_, v___y_1854_);
if (lean_obj_tag(v___x_1860_) == 0)
{
lean_object* v_a_1861_; lean_object* v___x_1863_; uint8_t v_isShared_1864_; uint8_t v_isSharedCheck_1873_; 
v_a_1861_ = lean_ctor_get(v___x_1860_, 0);
v_isSharedCheck_1873_ = !lean_is_exclusive(v___x_1860_);
if (v_isSharedCheck_1873_ == 0)
{
v___x_1863_ = v___x_1860_;
v_isShared_1864_ = v_isSharedCheck_1873_;
goto v_resetjp_1862_;
}
else
{
lean_inc(v_a_1861_);
lean_dec(v___x_1860_);
v___x_1863_ = lean_box(0);
v_isShared_1864_ = v_isSharedCheck_1873_;
goto v_resetjp_1862_;
}
v_resetjp_1862_:
{
uint8_t v___x_1865_; 
v___x_1865_ = lean_unbox(v_a_1861_);
lean_dec(v_a_1861_);
if (v___x_1865_ == 0)
{
size_t v___x_1866_; size_t v___x_1867_; 
lean_del_object(v___x_1863_);
v___x_1866_ = ((size_t)1ULL);
v___x_1867_ = lean_usize_add(v_i_1849_, v___x_1866_);
v_i_1849_ = v___x_1867_;
goto _start;
}
else
{
lean_object* v___x_1869_; lean_object* v___x_1871_; 
lean_dec_ref(v_f_1847_);
v___x_1869_ = lean_box(v___x_1857_);
if (v_isShared_1864_ == 0)
{
lean_ctor_set(v___x_1863_, 0, v___x_1869_);
v___x_1871_ = v___x_1863_;
goto v_reusejp_1870_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1869_);
v___x_1871_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1870_;
}
v_reusejp_1870_:
{
return v___x_1871_;
}
}
}
}
else
{
lean_dec_ref(v_f_1847_);
return v___x_1860_;
}
}
}
else
{
uint8_t v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
lean_dec_ref(v_f_1847_);
v___x_1878_ = 0;
v___x_1879_ = lean_box(v___x_1878_);
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
return v___x_1880_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object* v_pu_1881_, lean_object* v_f_1882_, lean_object* v_as_1883_, lean_object* v_i_1884_, lean_object* v_stop_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_){
_start:
{
uint8_t v_pu_boxed_1891_; size_t v_i_boxed_1892_; size_t v_stop_boxed_1893_; lean_object* v_res_1894_; 
v_pu_boxed_1891_ = lean_unbox(v_pu_1881_);
v_i_boxed_1892_ = lean_unbox_usize(v_i_1884_);
lean_dec(v_i_1884_);
v_stop_boxed_1893_ = lean_unbox_usize(v_stop_1885_);
lean_dec(v_stop_1885_);
v_res_1894_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_boxed_1891_, v_f_1882_, v_as_1883_, v_i_boxed_1892_, v_stop_boxed_1893_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_);
lean_dec(v___y_1889_);
lean_dec_ref(v___y_1888_);
lean_dec(v___y_1887_);
lean_dec_ref(v___y_1886_);
lean_dec_ref(v_as_1883_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object* v_pu_1895_, lean_object* v_f_1896_, lean_object* v_a_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_, lean_object* v___y_1902_){
_start:
{
uint8_t v_pu_boxed_1903_; lean_object* v_res_1904_; 
v_pu_boxed_1903_ = lean_unbox(v_pu_1895_);
v_res_1904_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_boxed_1903_, v_f_1896_, v_a_1897_, v___y_1898_, v___y_1899_, v___y_1900_, v___y_1901_);
lean_dec(v___y_1901_);
lean_dec_ref(v___y_1900_);
lean_dec(v___y_1899_);
lean_dec_ref(v___y_1898_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t v_pu_1905_, lean_object* v_f_1906_, lean_object* v_as_1907_, size_t v_i_1908_, size_t v_stop_1909_, lean_object* v_b_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_, lean_object* v___y_1913_, lean_object* v___y_1914_){
_start:
{
lean_object* v_a_1917_; uint8_t v___x_1921_; 
v___x_1921_ = lean_usize_dec_eq(v_i_1908_, v_stop_1909_);
if (v___x_1921_ == 0)
{
lean_object* v___x_1922_; lean_object* v_value_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; 
v___x_1922_ = lean_array_uget_borrowed(v_as_1907_, v_i_1908_);
v_value_1923_ = lean_ctor_get(v___x_1922_, 1);
v___x_1924_ = lean_box(v_pu_1905_);
lean_inc_ref(v_f_1906_);
v___x_1925_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed), 8, 2);
lean_closure_set(v___x_1925_, 0, v___x_1924_);
lean_closure_set(v___x_1925_, 1, v_f_1906_);
lean_inc_ref(v_value_1923_);
v___x_1926_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1923_, v___x_1925_, v___y_1911_, v___y_1912_, v___y_1913_, v___y_1914_);
if (lean_obj_tag(v___x_1926_) == 0)
{
lean_object* v_a_1927_; uint8_t v___x_1928_; 
v_a_1927_ = lean_ctor_get(v___x_1926_, 0);
lean_inc(v_a_1927_);
lean_dec_ref_known(v___x_1926_, 1);
v___x_1928_ = lean_unbox(v_a_1927_);
lean_dec(v_a_1927_);
if (v___x_1928_ == 0)
{
v_a_1917_ = v_b_1910_;
goto v___jp_1916_;
}
else
{
lean_object* v___x_1929_; 
lean_inc(v___x_1922_);
v___x_1929_ = lean_array_push(v_b_1910_, v___x_1922_);
v_a_1917_ = v___x_1929_;
goto v___jp_1916_;
}
}
else
{
lean_object* v_a_1930_; lean_object* v___x_1932_; uint8_t v_isShared_1933_; uint8_t v_isSharedCheck_1937_; 
lean_dec_ref(v_b_1910_);
lean_dec_ref(v_f_1906_);
v_a_1930_ = lean_ctor_get(v___x_1926_, 0);
v_isSharedCheck_1937_ = !lean_is_exclusive(v___x_1926_);
if (v_isSharedCheck_1937_ == 0)
{
v___x_1932_ = v___x_1926_;
v_isShared_1933_ = v_isSharedCheck_1937_;
goto v_resetjp_1931_;
}
else
{
lean_inc(v_a_1930_);
lean_dec(v___x_1926_);
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
else
{
lean_object* v___x_1938_; 
lean_dec_ref(v_f_1906_);
v___x_1938_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1938_, 0, v_b_1910_);
return v___x_1938_;
}
v___jp_1916_:
{
size_t v___x_1918_; size_t v___x_1919_; 
v___x_1918_ = ((size_t)1ULL);
v___x_1919_ = lean_usize_add(v_i_1908_, v___x_1918_);
v_i_1908_ = v___x_1919_;
v_b_1910_ = v_a_1917_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object* v_pu_1939_, lean_object* v_f_1940_, lean_object* v_as_1941_, lean_object* v_i_1942_, lean_object* v_stop_1943_, lean_object* v_b_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_, lean_object* v___y_1947_, lean_object* v___y_1948_, lean_object* v___y_1949_){
_start:
{
uint8_t v_pu_boxed_1950_; size_t v_i_boxed_1951_; size_t v_stop_boxed_1952_; lean_object* v_res_1953_; 
v_pu_boxed_1950_ = lean_unbox(v_pu_1939_);
v_i_boxed_1951_ = lean_unbox_usize(v_i_1942_);
lean_dec(v_i_1942_);
v_stop_boxed_1952_ = lean_unbox_usize(v_stop_1943_);
lean_dec(v_stop_1943_);
v_res_1953_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_boxed_1950_, v_f_1940_, v_as_1941_, v_i_boxed_1951_, v_stop_boxed_1952_, v_b_1944_, v___y_1945_, v___y_1946_, v___y_1947_, v___y_1948_);
lean_dec(v___y_1948_);
lean_dec_ref(v___y_1947_);
lean_dec(v___y_1946_);
lean_dec_ref(v___y_1945_);
lean_dec_ref(v_as_1941_);
return v_res_1953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t v_pu_1954_, lean_object* v_f_1955_, lean_object* v_a_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_){
_start:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; uint8_t v___x_1965_; 
v___x_1962_ = lean_unsigned_to_nat(0u);
v___x_1963_ = lean_array_get_size(v_a_1956_);
v___x_1964_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1965_ = lean_nat_dec_lt(v___x_1962_, v___x_1963_);
if (v___x_1965_ == 0)
{
lean_object* v___x_1966_; 
lean_dec_ref(v_f_1955_);
v___x_1966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1964_);
return v___x_1966_;
}
else
{
size_t v___x_1967_; size_t v___x_1968_; lean_object* v___x_1969_; 
v___x_1967_ = ((size_t)0ULL);
v___x_1968_ = lean_usize_of_nat(v___x_1963_);
v___x_1969_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_1954_, v_f_1955_, v_a_1956_, v___x_1967_, v___x_1968_, v___x_1964_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_);
return v___x_1969_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object* v_pu_1970_, lean_object* v_f_1971_, lean_object* v_a_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_){
_start:
{
uint8_t v_pu_boxed_1978_; lean_object* v_res_1979_; 
v_pu_boxed_1978_ = lean_unbox(v_pu_1970_);
v_res_1979_ = l_Lean_Compiler_LCNF_Probe_filterByJp(v_pu_boxed_1978_, v_f_1971_, v_a_1972_, v___y_1973_, v___y_1974_, v___y_1975_, v___y_1976_);
lean_dec(v___y_1976_);
lean_dec_ref(v___y_1975_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec_ref(v_a_1972_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t v_pu_1980_, lean_object* v_f_1981_, lean_object* v_a_1982_, lean_object* v___y_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_){
_start:
{
switch(lean_obj_tag(v_a_1982_))
{
case 0:
{
lean_object* v_k_1988_; 
v_k_1988_ = lean_ctor_get(v_a_1982_, 1);
lean_inc_ref(v_k_1988_);
lean_dec_ref_known(v_a_1982_, 2);
v_a_1982_ = v_k_1988_;
goto _start;
}
case 1:
{
lean_object* v_decl_1990_; lean_object* v_k_1991_; lean_object* v___x_1992_; 
v_decl_1990_ = lean_ctor_get(v_a_1982_, 0);
lean_inc_ref_n(v_decl_1990_, 2);
v_k_1991_ = lean_ctor_get(v_a_1982_, 1);
lean_inc_ref(v_k_1991_);
lean_dec_ref_known(v_a_1982_, 2);
lean_inc_ref(v_f_1981_);
lean_inc(v___y_1986_);
lean_inc_ref(v___y_1985_);
lean_inc(v___y_1984_);
lean_inc_ref(v___y_1983_);
v___x_1992_ = lean_apply_6(v_f_1981_, v_decl_1990_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, lean_box(0));
if (lean_obj_tag(v___x_1992_) == 0)
{
lean_object* v_a_1993_; uint8_t v___x_1994_; 
v_a_1993_ = lean_ctor_get(v___x_1992_, 0);
lean_inc(v_a_1993_);
v___x_1994_ = lean_unbox(v_a_1993_);
lean_dec(v_a_1993_);
if (v___x_1994_ == 0)
{
lean_object* v_value_1995_; lean_object* v___x_1996_; 
lean_dec_ref_known(v___x_1992_, 1);
v_value_1995_ = lean_ctor_get(v_decl_1990_, 4);
lean_inc_ref(v_value_1995_);
lean_dec_ref(v_decl_1990_);
lean_inc_ref(v_f_1981_);
v___x_1996_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_1980_, v_f_1981_, v_value_1995_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
if (lean_obj_tag(v___x_1996_) == 0)
{
lean_object* v_a_1997_; uint8_t v___x_1998_; 
v_a_1997_ = lean_ctor_get(v___x_1996_, 0);
lean_inc(v_a_1997_);
v___x_1998_ = lean_unbox(v_a_1997_);
lean_dec(v_a_1997_);
if (v___x_1998_ == 0)
{
lean_dec_ref_known(v___x_1996_, 1);
v_a_1982_ = v_k_1991_;
goto _start;
}
else
{
lean_dec_ref(v_k_1991_);
lean_dec_ref(v_f_1981_);
return v___x_1996_;
}
}
else
{
lean_dec_ref(v_k_1991_);
lean_dec_ref(v_f_1981_);
return v___x_1996_;
}
}
else
{
lean_dec_ref(v_k_1991_);
lean_dec_ref(v_decl_1990_);
lean_dec_ref(v_f_1981_);
return v___x_1992_;
}
}
else
{
lean_dec_ref(v_k_1991_);
lean_dec_ref(v_decl_1990_);
lean_dec_ref(v_f_1981_);
return v___x_1992_;
}
}
case 2:
{
lean_object* v_decl_2000_; lean_object* v_k_2001_; lean_object* v___x_2002_; 
v_decl_2000_ = lean_ctor_get(v_a_1982_, 0);
lean_inc_ref_n(v_decl_2000_, 2);
v_k_2001_ = lean_ctor_get(v_a_1982_, 1);
lean_inc_ref(v_k_2001_);
lean_dec_ref_known(v_a_1982_, 2);
lean_inc_ref(v_f_1981_);
lean_inc(v___y_1986_);
lean_inc_ref(v___y_1985_);
lean_inc(v___y_1984_);
lean_inc_ref(v___y_1983_);
v___x_2002_ = lean_apply_6(v_f_1981_, v_decl_2000_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_, lean_box(0));
if (lean_obj_tag(v___x_2002_) == 0)
{
lean_object* v_a_2003_; uint8_t v___x_2004_; 
v_a_2003_ = lean_ctor_get(v___x_2002_, 0);
lean_inc(v_a_2003_);
v___x_2004_ = lean_unbox(v_a_2003_);
lean_dec(v_a_2003_);
if (v___x_2004_ == 0)
{
lean_object* v_value_2005_; lean_object* v___x_2006_; 
lean_dec_ref_known(v___x_2002_, 1);
v_value_2005_ = lean_ctor_get(v_decl_2000_, 4);
lean_inc_ref(v_value_2005_);
lean_dec_ref(v_decl_2000_);
lean_inc_ref(v_f_1981_);
v___x_2006_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_1980_, v_f_1981_, v_value_2005_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
if (lean_obj_tag(v___x_2006_) == 0)
{
lean_object* v_a_2007_; uint8_t v___x_2008_; 
v_a_2007_ = lean_ctor_get(v___x_2006_, 0);
lean_inc(v_a_2007_);
v___x_2008_ = lean_unbox(v_a_2007_);
lean_dec(v_a_2007_);
if (v___x_2008_ == 0)
{
lean_dec_ref_known(v___x_2006_, 1);
v_a_1982_ = v_k_2001_;
goto _start;
}
else
{
lean_dec_ref(v_k_2001_);
lean_dec_ref(v_f_1981_);
return v___x_2006_;
}
}
else
{
lean_dec_ref(v_k_2001_);
lean_dec_ref(v_f_1981_);
return v___x_2006_;
}
}
else
{
lean_dec_ref(v_k_2001_);
lean_dec_ref(v_decl_2000_);
lean_dec_ref(v_f_1981_);
return v___x_2002_;
}
}
else
{
lean_dec_ref(v_k_2001_);
lean_dec_ref(v_decl_2000_);
lean_dec_ref(v_f_1981_);
return v___x_2002_;
}
}
case 4:
{
lean_object* v_cases_2010_; lean_object* v___x_2012_; uint8_t v_isShared_2013_; uint8_t v_isSharedCheck_2029_; 
v_cases_2010_ = lean_ctor_get(v_a_1982_, 0);
v_isSharedCheck_2029_ = !lean_is_exclusive(v_a_1982_);
if (v_isSharedCheck_2029_ == 0)
{
v___x_2012_ = v_a_1982_;
v_isShared_2013_ = v_isSharedCheck_2029_;
goto v_resetjp_2011_;
}
else
{
lean_inc(v_cases_2010_);
lean_dec(v_a_1982_);
v___x_2012_ = lean_box(0);
v_isShared_2013_ = v_isSharedCheck_2029_;
goto v_resetjp_2011_;
}
v_resetjp_2011_:
{
lean_object* v_alts_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; uint8_t v___x_2017_; 
v_alts_2014_ = lean_ctor_get(v_cases_2010_, 3);
lean_inc_ref(v_alts_2014_);
lean_dec_ref(v_cases_2010_);
v___x_2015_ = lean_unsigned_to_nat(0u);
v___x_2016_ = lean_array_get_size(v_alts_2014_);
v___x_2017_ = lean_nat_dec_lt(v___x_2015_, v___x_2016_);
if (v___x_2017_ == 0)
{
lean_object* v___x_2018_; lean_object* v___x_2020_; 
lean_dec_ref(v_alts_2014_);
lean_dec_ref(v_f_1981_);
v___x_2018_ = lean_box(v___x_2017_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set_tag(v___x_2012_, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2018_);
v___x_2020_ = v___x_2012_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v___x_2018_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
else
{
if (v___x_2017_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2024_; 
lean_dec_ref(v_alts_2014_);
lean_dec_ref(v_f_1981_);
v___x_2022_ = lean_box(v___x_2017_);
if (v_isShared_2013_ == 0)
{
lean_ctor_set_tag(v___x_2012_, 0);
lean_ctor_set(v___x_2012_, 0, v___x_2022_);
v___x_2024_ = v___x_2012_;
goto v_reusejp_2023_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2022_);
v___x_2024_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2023_;
}
v_reusejp_2023_:
{
return v___x_2024_;
}
}
else
{
size_t v___x_2026_; size_t v___x_2027_; lean_object* v___x_2028_; 
lean_del_object(v___x_2012_);
v___x_2026_ = ((size_t)0ULL);
v___x_2027_ = lean_usize_of_nat(v___x_2016_);
v___x_2028_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_1980_, v_f_1981_, v_alts_2014_, v___x_2026_, v___x_2027_, v___y_1983_, v___y_1984_, v___y_1985_, v___y_1986_);
lean_dec_ref(v_alts_2014_);
return v___x_2028_;
}
}
}
}
case 7:
{
lean_object* v_k_2030_; 
v_k_2030_ = lean_ctor_get(v_a_1982_, 3);
lean_inc_ref(v_k_2030_);
lean_dec_ref_known(v_a_1982_, 4);
v_a_1982_ = v_k_2030_;
goto _start;
}
case 8:
{
lean_object* v_k_2032_; 
v_k_2032_ = lean_ctor_get(v_a_1982_, 3);
lean_inc_ref(v_k_2032_);
lean_dec_ref_known(v_a_1982_, 4);
v_a_1982_ = v_k_2032_;
goto _start;
}
case 9:
{
lean_object* v_k_2034_; 
v_k_2034_ = lean_ctor_get(v_a_1982_, 5);
lean_inc_ref(v_k_2034_);
lean_dec_ref_known(v_a_1982_, 6);
v_a_1982_ = v_k_2034_;
goto _start;
}
case 10:
{
lean_object* v_k_2036_; 
v_k_2036_ = lean_ctor_get(v_a_1982_, 2);
lean_inc_ref(v_k_2036_);
lean_dec_ref_known(v_a_1982_, 3);
v_a_1982_ = v_k_2036_;
goto _start;
}
case 11:
{
lean_object* v_k_2038_; 
v_k_2038_ = lean_ctor_get(v_a_1982_, 2);
lean_inc_ref(v_k_2038_);
lean_dec_ref_known(v_a_1982_, 3);
v_a_1982_ = v_k_2038_;
goto _start;
}
case 12:
{
lean_object* v_k_2040_; 
v_k_2040_ = lean_ctor_get(v_a_1982_, 3);
lean_inc_ref(v_k_2040_);
lean_dec_ref_known(v_a_1982_, 4);
v_a_1982_ = v_k_2040_;
goto _start;
}
case 13:
{
lean_object* v_k_2042_; 
v_k_2042_ = lean_ctor_get(v_a_1982_, 1);
lean_inc_ref(v_k_2042_);
lean_dec_ref_known(v_a_1982_, 2);
v_a_1982_ = v_k_2042_;
goto _start;
}
default: 
{
uint8_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
lean_dec_ref(v_a_1982_);
lean_dec_ref(v_f_1981_);
v___x_2044_ = 0;
v___x_2045_ = lean_box(v___x_2044_);
v___x_2046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2046_, 0, v___x_2045_);
return v___x_2046_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t v_pu_2047_, lean_object* v_f_2048_, lean_object* v_as_2049_, size_t v_i_2050_, size_t v_stop_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_){
_start:
{
uint8_t v___x_2057_; 
v___x_2057_ = lean_usize_dec_eq(v_i_2050_, v_stop_2051_);
if (v___x_2057_ == 0)
{
uint8_t v___x_2058_; lean_object* v___y_2060_; lean_object* v___x_2075_; 
v___x_2058_ = 1;
v___x_2075_ = lean_array_uget_borrowed(v_as_2049_, v_i_2050_);
switch(lean_obj_tag(v___x_2075_))
{
case 0:
{
lean_object* v_code_2076_; 
v_code_2076_ = lean_ctor_get(v___x_2075_, 2);
lean_inc_ref(v_code_2076_);
v___y_2060_ = v_code_2076_;
goto v___jp_2059_;
}
case 1:
{
lean_object* v_code_2077_; 
v_code_2077_ = lean_ctor_get(v___x_2075_, 1);
lean_inc_ref(v_code_2077_);
v___y_2060_ = v_code_2077_;
goto v___jp_2059_;
}
default: 
{
lean_object* v_code_2078_; 
v_code_2078_ = lean_ctor_get(v___x_2075_, 0);
lean_inc_ref(v_code_2078_);
v___y_2060_ = v_code_2078_;
goto v___jp_2059_;
}
}
v___jp_2059_:
{
lean_object* v___x_2061_; 
lean_inc_ref(v_f_2048_);
v___x_2061_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_2047_, v_f_2048_, v___y_2060_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
if (lean_obj_tag(v___x_2061_) == 0)
{
lean_object* v_a_2062_; lean_object* v___x_2064_; uint8_t v_isShared_2065_; uint8_t v_isSharedCheck_2074_; 
v_a_2062_ = lean_ctor_get(v___x_2061_, 0);
v_isSharedCheck_2074_ = !lean_is_exclusive(v___x_2061_);
if (v_isSharedCheck_2074_ == 0)
{
v___x_2064_ = v___x_2061_;
v_isShared_2065_ = v_isSharedCheck_2074_;
goto v_resetjp_2063_;
}
else
{
lean_inc(v_a_2062_);
lean_dec(v___x_2061_);
v___x_2064_ = lean_box(0);
v_isShared_2065_ = v_isSharedCheck_2074_;
goto v_resetjp_2063_;
}
v_resetjp_2063_:
{
uint8_t v___x_2066_; 
v___x_2066_ = lean_unbox(v_a_2062_);
lean_dec(v_a_2062_);
if (v___x_2066_ == 0)
{
size_t v___x_2067_; size_t v___x_2068_; 
lean_del_object(v___x_2064_);
v___x_2067_ = ((size_t)1ULL);
v___x_2068_ = lean_usize_add(v_i_2050_, v___x_2067_);
v_i_2050_ = v___x_2068_;
goto _start;
}
else
{
lean_object* v___x_2070_; lean_object* v___x_2072_; 
lean_dec_ref(v_f_2048_);
v___x_2070_ = lean_box(v___x_2058_);
if (v_isShared_2065_ == 0)
{
lean_ctor_set(v___x_2064_, 0, v___x_2070_);
v___x_2072_ = v___x_2064_;
goto v_reusejp_2071_;
}
else
{
lean_object* v_reuseFailAlloc_2073_; 
v_reuseFailAlloc_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2073_, 0, v___x_2070_);
v___x_2072_ = v_reuseFailAlloc_2073_;
goto v_reusejp_2071_;
}
v_reusejp_2071_:
{
return v___x_2072_;
}
}
}
}
else
{
lean_dec_ref(v_f_2048_);
return v___x_2061_;
}
}
}
else
{
uint8_t v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
lean_dec_ref(v_f_2048_);
v___x_2079_ = 0;
v___x_2080_ = lean_box(v___x_2079_);
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2080_);
return v___x_2081_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object* v_pu_2082_, lean_object* v_f_2083_, lean_object* v_as_2084_, lean_object* v_i_2085_, lean_object* v_stop_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_, lean_object* v___y_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_){
_start:
{
uint8_t v_pu_boxed_2092_; size_t v_i_boxed_2093_; size_t v_stop_boxed_2094_; lean_object* v_res_2095_; 
v_pu_boxed_2092_ = lean_unbox(v_pu_2082_);
v_i_boxed_2093_ = lean_unbox_usize(v_i_2085_);
lean_dec(v_i_2085_);
v_stop_boxed_2094_ = lean_unbox_usize(v_stop_2086_);
lean_dec(v_stop_2086_);
v_res_2095_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_boxed_2092_, v_f_2083_, v_as_2084_, v_i_boxed_2093_, v_stop_boxed_2094_, v___y_2087_, v___y_2088_, v___y_2089_, v___y_2090_);
lean_dec(v___y_2090_);
lean_dec_ref(v___y_2089_);
lean_dec(v___y_2088_);
lean_dec_ref(v___y_2087_);
lean_dec_ref(v_as_2084_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object* v_pu_2096_, lean_object* v_f_2097_, lean_object* v_a_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v_pu_boxed_2104_; lean_object* v_res_2105_; 
v_pu_boxed_2104_ = lean_unbox(v_pu_2096_);
v_res_2105_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_boxed_2104_, v_f_2097_, v_a_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v___y_2101_);
lean_dec(v___y_2100_);
lean_dec_ref(v___y_2099_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t v_pu_2106_, lean_object* v_f_2107_, lean_object* v_as_2108_, size_t v_i_2109_, size_t v_stop_2110_, lean_object* v_b_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_){
_start:
{
lean_object* v_a_2118_; uint8_t v___x_2122_; 
v___x_2122_ = lean_usize_dec_eq(v_i_2109_, v_stop_2110_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; lean_object* v_value_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2123_ = lean_array_uget_borrowed(v_as_2108_, v_i_2109_);
v_value_2124_ = lean_ctor_get(v___x_2123_, 1);
v___x_2125_ = lean_box(v_pu_2106_);
lean_inc_ref(v_f_2107_);
v___x_2126_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed), 8, 2);
lean_closure_set(v___x_2126_, 0, v___x_2125_);
lean_closure_set(v___x_2126_, 1, v_f_2107_);
lean_inc_ref(v_value_2124_);
v___x_2127_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2124_, v___x_2126_, v___y_2112_, v___y_2113_, v___y_2114_, v___y_2115_);
if (lean_obj_tag(v___x_2127_) == 0)
{
lean_object* v_a_2128_; uint8_t v___x_2129_; 
v_a_2128_ = lean_ctor_get(v___x_2127_, 0);
lean_inc(v_a_2128_);
lean_dec_ref_known(v___x_2127_, 1);
v___x_2129_ = lean_unbox(v_a_2128_);
lean_dec(v_a_2128_);
if (v___x_2129_ == 0)
{
v_a_2118_ = v_b_2111_;
goto v___jp_2117_;
}
else
{
lean_object* v___x_2130_; 
lean_inc(v___x_2123_);
v___x_2130_ = lean_array_push(v_b_2111_, v___x_2123_);
v_a_2118_ = v___x_2130_;
goto v___jp_2117_;
}
}
else
{
lean_object* v_a_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2138_; 
lean_dec_ref(v_b_2111_);
lean_dec_ref(v_f_2107_);
v_a_2131_ = lean_ctor_get(v___x_2127_, 0);
v_isSharedCheck_2138_ = !lean_is_exclusive(v___x_2127_);
if (v_isSharedCheck_2138_ == 0)
{
v___x_2133_ = v___x_2127_;
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_a_2131_);
lean_dec(v___x_2127_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2138_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2136_; 
if (v_isShared_2134_ == 0)
{
v___x_2136_ = v___x_2133_;
goto v_reusejp_2135_;
}
else
{
lean_object* v_reuseFailAlloc_2137_; 
v_reuseFailAlloc_2137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2137_, 0, v_a_2131_);
v___x_2136_ = v_reuseFailAlloc_2137_;
goto v_reusejp_2135_;
}
v_reusejp_2135_:
{
return v___x_2136_;
}
}
}
}
else
{
lean_object* v___x_2139_; 
lean_dec_ref(v_f_2107_);
v___x_2139_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2139_, 0, v_b_2111_);
return v___x_2139_;
}
v___jp_2117_:
{
size_t v___x_2119_; size_t v___x_2120_; 
v___x_2119_ = ((size_t)1ULL);
v___x_2120_ = lean_usize_add(v_i_2109_, v___x_2119_);
v_i_2109_ = v___x_2120_;
v_b_2111_ = v_a_2118_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object* v_pu_2140_, lean_object* v_f_2141_, lean_object* v_as_2142_, lean_object* v_i_2143_, lean_object* v_stop_2144_, lean_object* v_b_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_){
_start:
{
uint8_t v_pu_boxed_2151_; size_t v_i_boxed_2152_; size_t v_stop_boxed_2153_; lean_object* v_res_2154_; 
v_pu_boxed_2151_ = lean_unbox(v_pu_2140_);
v_i_boxed_2152_ = lean_unbox_usize(v_i_2143_);
lean_dec(v_i_2143_);
v_stop_boxed_2153_ = lean_unbox_usize(v_stop_2144_);
lean_dec(v_stop_2144_);
v_res_2154_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_boxed_2151_, v_f_2141_, v_as_2142_, v_i_boxed_2152_, v_stop_boxed_2153_, v_b_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec_ref(v_as_2142_);
return v_res_2154_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t v_pu_2155_, lean_object* v_f_2156_, lean_object* v_a_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_){
_start:
{
lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; uint8_t v___x_2166_; 
v___x_2163_ = lean_unsigned_to_nat(0u);
v___x_2164_ = lean_array_get_size(v_a_2157_);
v___x_2165_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2166_ = lean_nat_dec_lt(v___x_2163_, v___x_2164_);
if (v___x_2166_ == 0)
{
lean_object* v___x_2167_; 
lean_dec_ref(v_f_2156_);
v___x_2167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2167_, 0, v___x_2165_);
return v___x_2167_;
}
else
{
size_t v___x_2168_; size_t v___x_2169_; lean_object* v___x_2170_; 
v___x_2168_ = ((size_t)0ULL);
v___x_2169_ = lean_usize_of_nat(v___x_2164_);
v___x_2170_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_2155_, v_f_2156_, v_a_2157_, v___x_2168_, v___x_2169_, v___x_2165_, v___y_2158_, v___y_2159_, v___y_2160_, v___y_2161_);
return v___x_2170_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object* v_pu_2171_, lean_object* v_f_2172_, lean_object* v_a_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_){
_start:
{
uint8_t v_pu_boxed_2179_; lean_object* v_res_2180_; 
v_pu_boxed_2179_ = lean_unbox(v_pu_2171_);
v_res_2180_ = l_Lean_Compiler_LCNF_Probe_filterByFunDecl(v_pu_boxed_2179_, v_f_2172_, v_a_2173_, v___y_2174_, v___y_2175_, v___y_2176_, v___y_2177_);
lean_dec(v___y_2177_);
lean_dec_ref(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec_ref(v_a_2173_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t v_pu_2181_, lean_object* v_f_2182_, lean_object* v_a_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
switch(lean_obj_tag(v_a_2183_))
{
case 0:
{
lean_object* v_k_2189_; 
v_k_2189_ = lean_ctor_get(v_a_2183_, 1);
lean_inc_ref(v_k_2189_);
lean_dec_ref_known(v_a_2183_, 2);
v_a_2183_ = v_k_2189_;
goto _start;
}
case 1:
{
lean_object* v_decl_2191_; lean_object* v_k_2192_; lean_object* v_value_2193_; lean_object* v___x_2194_; 
v_decl_2191_ = lean_ctor_get(v_a_2183_, 0);
lean_inc_ref(v_decl_2191_);
v_k_2192_ = lean_ctor_get(v_a_2183_, 1);
lean_inc_ref(v_k_2192_);
lean_dec_ref_known(v_a_2183_, 2);
v_value_2193_ = lean_ctor_get(v_decl_2191_, 4);
lean_inc_ref(v_value_2193_);
lean_dec_ref(v_decl_2191_);
lean_inc_ref(v_f_2182_);
v___x_2194_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2181_, v_f_2182_, v_value_2193_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
if (lean_obj_tag(v___x_2194_) == 0)
{
lean_object* v_a_2195_; uint8_t v___x_2196_; 
v_a_2195_ = lean_ctor_get(v___x_2194_, 0);
lean_inc(v_a_2195_);
v___x_2196_ = lean_unbox(v_a_2195_);
lean_dec(v_a_2195_);
if (v___x_2196_ == 0)
{
lean_dec_ref_known(v___x_2194_, 1);
v_a_2183_ = v_k_2192_;
goto _start;
}
else
{
lean_dec_ref(v_k_2192_);
lean_dec_ref(v_f_2182_);
return v___x_2194_;
}
}
else
{
lean_dec_ref(v_k_2192_);
lean_dec_ref(v_f_2182_);
return v___x_2194_;
}
}
case 2:
{
lean_object* v_decl_2198_; lean_object* v_k_2199_; lean_object* v_value_2200_; lean_object* v___x_2201_; 
v_decl_2198_ = lean_ctor_get(v_a_2183_, 0);
lean_inc_ref(v_decl_2198_);
v_k_2199_ = lean_ctor_get(v_a_2183_, 1);
lean_inc_ref(v_k_2199_);
lean_dec_ref_known(v_a_2183_, 2);
v_value_2200_ = lean_ctor_get(v_decl_2198_, 4);
lean_inc_ref(v_value_2200_);
lean_dec_ref(v_decl_2198_);
lean_inc_ref(v_f_2182_);
v___x_2201_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2181_, v_f_2182_, v_value_2200_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; uint8_t v___x_2203_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
lean_inc(v_a_2202_);
v___x_2203_ = lean_unbox(v_a_2202_);
lean_dec(v_a_2202_);
if (v___x_2203_ == 0)
{
lean_dec_ref_known(v___x_2201_, 1);
v_a_2183_ = v_k_2199_;
goto _start;
}
else
{
lean_dec_ref(v_k_2199_);
lean_dec_ref(v_f_2182_);
return v___x_2201_;
}
}
else
{
lean_dec_ref(v_k_2199_);
lean_dec_ref(v_f_2182_);
return v___x_2201_;
}
}
case 4:
{
lean_object* v_cases_2205_; lean_object* v___x_2206_; 
v_cases_2205_ = lean_ctor_get(v_a_2183_, 0);
lean_inc_ref_n(v_cases_2205_, 2);
lean_dec_ref_known(v_a_2183_, 1);
lean_inc_ref(v_f_2182_);
lean_inc(v___y_2187_);
lean_inc_ref(v___y_2186_);
lean_inc(v___y_2185_);
lean_inc_ref(v___y_2184_);
v___x_2206_ = lean_apply_6(v_f_2182_, v_cases_2205_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_, lean_box(0));
if (lean_obj_tag(v___x_2206_) == 0)
{
lean_object* v_a_2207_; uint8_t v___x_2208_; 
v_a_2207_ = lean_ctor_get(v___x_2206_, 0);
lean_inc(v_a_2207_);
v___x_2208_ = lean_unbox(v_a_2207_);
lean_dec(v_a_2207_);
if (v___x_2208_ == 0)
{
lean_object* v___x_2210_; uint8_t v_isShared_2211_; uint8_t v_isSharedCheck_2227_; 
v_isSharedCheck_2227_ = !lean_is_exclusive(v___x_2206_);
if (v_isSharedCheck_2227_ == 0)
{
lean_object* v_unused_2228_; 
v_unused_2228_ = lean_ctor_get(v___x_2206_, 0);
lean_dec(v_unused_2228_);
v___x_2210_ = v___x_2206_;
v_isShared_2211_ = v_isSharedCheck_2227_;
goto v_resetjp_2209_;
}
else
{
lean_dec(v___x_2206_);
v___x_2210_ = lean_box(0);
v_isShared_2211_ = v_isSharedCheck_2227_;
goto v_resetjp_2209_;
}
v_resetjp_2209_:
{
lean_object* v_alts_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; uint8_t v___x_2215_; 
v_alts_2212_ = lean_ctor_get(v_cases_2205_, 3);
lean_inc_ref(v_alts_2212_);
lean_dec_ref(v_cases_2205_);
v___x_2213_ = lean_unsigned_to_nat(0u);
v___x_2214_ = lean_array_get_size(v_alts_2212_);
v___x_2215_ = lean_nat_dec_lt(v___x_2213_, v___x_2214_);
if (v___x_2215_ == 0)
{
lean_object* v___x_2216_; lean_object* v___x_2218_; 
lean_dec_ref(v_alts_2212_);
lean_dec_ref(v_f_2182_);
v___x_2216_ = lean_box(v___x_2215_);
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 0, v___x_2216_);
v___x_2218_ = v___x_2210_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2216_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
else
{
if (v___x_2215_ == 0)
{
lean_object* v___x_2220_; lean_object* v___x_2222_; 
lean_dec_ref(v_alts_2212_);
lean_dec_ref(v_f_2182_);
v___x_2220_ = lean_box(v___x_2215_);
if (v_isShared_2211_ == 0)
{
lean_ctor_set(v___x_2210_, 0, v___x_2220_);
v___x_2222_ = v___x_2210_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v___x_2220_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
else
{
size_t v___x_2224_; size_t v___x_2225_; lean_object* v___x_2226_; 
lean_del_object(v___x_2210_);
v___x_2224_ = ((size_t)0ULL);
v___x_2225_ = lean_usize_of_nat(v___x_2214_);
v___x_2226_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_2181_, v_f_2182_, v_alts_2212_, v___x_2224_, v___x_2225_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec_ref(v_alts_2212_);
return v___x_2226_;
}
}
}
}
else
{
lean_dec_ref(v_cases_2205_);
lean_dec_ref(v_f_2182_);
return v___x_2206_;
}
}
else
{
lean_dec_ref(v_cases_2205_);
lean_dec_ref(v_f_2182_);
return v___x_2206_;
}
}
case 7:
{
lean_object* v_k_2229_; 
v_k_2229_ = lean_ctor_get(v_a_2183_, 3);
lean_inc_ref(v_k_2229_);
lean_dec_ref_known(v_a_2183_, 4);
v_a_2183_ = v_k_2229_;
goto _start;
}
case 8:
{
lean_object* v_k_2231_; 
v_k_2231_ = lean_ctor_get(v_a_2183_, 3);
lean_inc_ref(v_k_2231_);
lean_dec_ref_known(v_a_2183_, 4);
v_a_2183_ = v_k_2231_;
goto _start;
}
case 9:
{
lean_object* v_k_2233_; 
v_k_2233_ = lean_ctor_get(v_a_2183_, 5);
lean_inc_ref(v_k_2233_);
lean_dec_ref_known(v_a_2183_, 6);
v_a_2183_ = v_k_2233_;
goto _start;
}
case 10:
{
lean_object* v_k_2235_; 
v_k_2235_ = lean_ctor_get(v_a_2183_, 2);
lean_inc_ref(v_k_2235_);
lean_dec_ref_known(v_a_2183_, 3);
v_a_2183_ = v_k_2235_;
goto _start;
}
case 11:
{
lean_object* v_k_2237_; 
v_k_2237_ = lean_ctor_get(v_a_2183_, 2);
lean_inc_ref(v_k_2237_);
lean_dec_ref_known(v_a_2183_, 3);
v_a_2183_ = v_k_2237_;
goto _start;
}
case 12:
{
lean_object* v_k_2239_; 
v_k_2239_ = lean_ctor_get(v_a_2183_, 3);
lean_inc_ref(v_k_2239_);
lean_dec_ref_known(v_a_2183_, 4);
v_a_2183_ = v_k_2239_;
goto _start;
}
case 13:
{
lean_object* v_k_2241_; 
v_k_2241_ = lean_ctor_get(v_a_2183_, 1);
lean_inc_ref(v_k_2241_);
lean_dec_ref_known(v_a_2183_, 2);
v_a_2183_ = v_k_2241_;
goto _start;
}
default: 
{
uint8_t v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
lean_dec_ref(v_a_2183_);
lean_dec_ref(v_f_2182_);
v___x_2243_ = 0;
v___x_2244_ = lean_box(v___x_2243_);
v___x_2245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2245_, 0, v___x_2244_);
return v___x_2245_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t v_pu_2246_, lean_object* v_f_2247_, lean_object* v_as_2248_, size_t v_i_2249_, size_t v_stop_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_){
_start:
{
uint8_t v___x_2256_; 
v___x_2256_ = lean_usize_dec_eq(v_i_2249_, v_stop_2250_);
if (v___x_2256_ == 0)
{
uint8_t v___x_2257_; lean_object* v___y_2259_; lean_object* v___x_2274_; 
v___x_2257_ = 1;
v___x_2274_ = lean_array_uget_borrowed(v_as_2248_, v_i_2249_);
switch(lean_obj_tag(v___x_2274_))
{
case 0:
{
lean_object* v_code_2275_; 
v_code_2275_ = lean_ctor_get(v___x_2274_, 2);
lean_inc_ref(v_code_2275_);
v___y_2259_ = v_code_2275_;
goto v___jp_2258_;
}
case 1:
{
lean_object* v_code_2276_; 
v_code_2276_ = lean_ctor_get(v___x_2274_, 1);
lean_inc_ref(v_code_2276_);
v___y_2259_ = v_code_2276_;
goto v___jp_2258_;
}
default: 
{
lean_object* v_code_2277_; 
v_code_2277_ = lean_ctor_get(v___x_2274_, 0);
lean_inc_ref(v_code_2277_);
v___y_2259_ = v_code_2277_;
goto v___jp_2258_;
}
}
v___jp_2258_:
{
lean_object* v___x_2260_; 
lean_inc_ref(v_f_2247_);
v___x_2260_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2246_, v_f_2247_, v___y_2259_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_);
if (lean_obj_tag(v___x_2260_) == 0)
{
lean_object* v_a_2261_; lean_object* v___x_2263_; uint8_t v_isShared_2264_; uint8_t v_isSharedCheck_2273_; 
v_a_2261_ = lean_ctor_get(v___x_2260_, 0);
v_isSharedCheck_2273_ = !lean_is_exclusive(v___x_2260_);
if (v_isSharedCheck_2273_ == 0)
{
v___x_2263_ = v___x_2260_;
v_isShared_2264_ = v_isSharedCheck_2273_;
goto v_resetjp_2262_;
}
else
{
lean_inc(v_a_2261_);
lean_dec(v___x_2260_);
v___x_2263_ = lean_box(0);
v_isShared_2264_ = v_isSharedCheck_2273_;
goto v_resetjp_2262_;
}
v_resetjp_2262_:
{
uint8_t v___x_2265_; 
v___x_2265_ = lean_unbox(v_a_2261_);
lean_dec(v_a_2261_);
if (v___x_2265_ == 0)
{
size_t v___x_2266_; size_t v___x_2267_; 
lean_del_object(v___x_2263_);
v___x_2266_ = ((size_t)1ULL);
v___x_2267_ = lean_usize_add(v_i_2249_, v___x_2266_);
v_i_2249_ = v___x_2267_;
goto _start;
}
else
{
lean_object* v___x_2269_; lean_object* v___x_2271_; 
lean_dec_ref(v_f_2247_);
v___x_2269_ = lean_box(v___x_2257_);
if (v_isShared_2264_ == 0)
{
lean_ctor_set(v___x_2263_, 0, v___x_2269_);
v___x_2271_ = v___x_2263_;
goto v_reusejp_2270_;
}
else
{
lean_object* v_reuseFailAlloc_2272_; 
v_reuseFailAlloc_2272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2272_, 0, v___x_2269_);
v___x_2271_ = v_reuseFailAlloc_2272_;
goto v_reusejp_2270_;
}
v_reusejp_2270_:
{
return v___x_2271_;
}
}
}
}
else
{
lean_dec_ref(v_f_2247_);
return v___x_2260_;
}
}
}
else
{
uint8_t v___x_2278_; lean_object* v___x_2279_; lean_object* v___x_2280_; 
lean_dec_ref(v_f_2247_);
v___x_2278_ = 0;
v___x_2279_ = lean_box(v___x_2278_);
v___x_2280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2280_, 0, v___x_2279_);
return v___x_2280_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object* v_pu_2281_, lean_object* v_f_2282_, lean_object* v_as_2283_, lean_object* v_i_2284_, lean_object* v_stop_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
uint8_t v_pu_boxed_2291_; size_t v_i_boxed_2292_; size_t v_stop_boxed_2293_; lean_object* v_res_2294_; 
v_pu_boxed_2291_ = lean_unbox(v_pu_2281_);
v_i_boxed_2292_ = lean_unbox_usize(v_i_2284_);
lean_dec(v_i_2284_);
v_stop_boxed_2293_ = lean_unbox_usize(v_stop_2285_);
lean_dec(v_stop_2285_);
v_res_2294_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_boxed_2291_, v_f_2282_, v_as_2283_, v_i_boxed_2292_, v_stop_boxed_2293_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_);
lean_dec(v___y_2289_);
lean_dec_ref(v___y_2288_);
lean_dec(v___y_2287_);
lean_dec_ref(v___y_2286_);
lean_dec_ref(v_as_2283_);
return v_res_2294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object* v_pu_2295_, lean_object* v_f_2296_, lean_object* v_a_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_){
_start:
{
uint8_t v_pu_boxed_2303_; lean_object* v_res_2304_; 
v_pu_boxed_2303_ = lean_unbox(v_pu_2295_);
v_res_2304_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_boxed_2303_, v_f_2296_, v_a_2297_, v___y_2298_, v___y_2299_, v___y_2300_, v___y_2301_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
lean_dec(v___y_2299_);
lean_dec_ref(v___y_2298_);
return v_res_2304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t v_pu_2305_, lean_object* v_f_2306_, lean_object* v_as_2307_, size_t v_i_2308_, size_t v_stop_2309_, lean_object* v_b_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_){
_start:
{
lean_object* v_a_2317_; uint8_t v___x_2321_; 
v___x_2321_ = lean_usize_dec_eq(v_i_2308_, v_stop_2309_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; lean_object* v_value_2323_; lean_object* v___x_2324_; lean_object* v___x_2325_; lean_object* v___x_2326_; 
v___x_2322_ = lean_array_uget_borrowed(v_as_2307_, v_i_2308_);
v_value_2323_ = lean_ctor_get(v___x_2322_, 1);
v___x_2324_ = lean_box(v_pu_2305_);
lean_inc_ref(v_f_2306_);
v___x_2325_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed), 8, 2);
lean_closure_set(v___x_2325_, 0, v___x_2324_);
lean_closure_set(v___x_2325_, 1, v_f_2306_);
lean_inc_ref(v_value_2323_);
v___x_2326_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2323_, v___x_2325_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_);
if (lean_obj_tag(v___x_2326_) == 0)
{
lean_object* v_a_2327_; uint8_t v___x_2328_; 
v_a_2327_ = lean_ctor_get(v___x_2326_, 0);
lean_inc(v_a_2327_);
lean_dec_ref_known(v___x_2326_, 1);
v___x_2328_ = lean_unbox(v_a_2327_);
lean_dec(v_a_2327_);
if (v___x_2328_ == 0)
{
v_a_2317_ = v_b_2310_;
goto v___jp_2316_;
}
else
{
lean_object* v___x_2329_; 
lean_inc(v___x_2322_);
v___x_2329_ = lean_array_push(v_b_2310_, v___x_2322_);
v_a_2317_ = v___x_2329_;
goto v___jp_2316_;
}
}
else
{
lean_object* v_a_2330_; lean_object* v___x_2332_; uint8_t v_isShared_2333_; uint8_t v_isSharedCheck_2337_; 
lean_dec_ref(v_b_2310_);
lean_dec_ref(v_f_2306_);
v_a_2330_ = lean_ctor_get(v___x_2326_, 0);
v_isSharedCheck_2337_ = !lean_is_exclusive(v___x_2326_);
if (v_isSharedCheck_2337_ == 0)
{
v___x_2332_ = v___x_2326_;
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
else
{
lean_inc(v_a_2330_);
lean_dec(v___x_2326_);
v___x_2332_ = lean_box(0);
v_isShared_2333_ = v_isSharedCheck_2337_;
goto v_resetjp_2331_;
}
v_resetjp_2331_:
{
lean_object* v___x_2335_; 
if (v_isShared_2333_ == 0)
{
v___x_2335_ = v___x_2332_;
goto v_reusejp_2334_;
}
else
{
lean_object* v_reuseFailAlloc_2336_; 
v_reuseFailAlloc_2336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2336_, 0, v_a_2330_);
v___x_2335_ = v_reuseFailAlloc_2336_;
goto v_reusejp_2334_;
}
v_reusejp_2334_:
{
return v___x_2335_;
}
}
}
}
else
{
lean_object* v___x_2338_; 
lean_dec_ref(v_f_2306_);
v___x_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2338_, 0, v_b_2310_);
return v___x_2338_;
}
v___jp_2316_:
{
size_t v___x_2318_; size_t v___x_2319_; 
v___x_2318_ = ((size_t)1ULL);
v___x_2319_ = lean_usize_add(v_i_2308_, v___x_2318_);
v_i_2308_ = v___x_2319_;
v_b_2310_ = v_a_2317_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object* v_pu_2339_, lean_object* v_f_2340_, lean_object* v_as_2341_, lean_object* v_i_2342_, lean_object* v_stop_2343_, lean_object* v_b_2344_, lean_object* v___y_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
uint8_t v_pu_boxed_2350_; size_t v_i_boxed_2351_; size_t v_stop_boxed_2352_; lean_object* v_res_2353_; 
v_pu_boxed_2350_ = lean_unbox(v_pu_2339_);
v_i_boxed_2351_ = lean_unbox_usize(v_i_2342_);
lean_dec(v_i_2342_);
v_stop_boxed_2352_ = lean_unbox_usize(v_stop_2343_);
lean_dec(v_stop_2343_);
v_res_2353_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_boxed_2350_, v_f_2340_, v_as_2341_, v_i_boxed_2351_, v_stop_boxed_2352_, v_b_2344_, v___y_2345_, v___y_2346_, v___y_2347_, v___y_2348_);
lean_dec(v___y_2348_);
lean_dec_ref(v___y_2347_);
lean_dec(v___y_2346_);
lean_dec_ref(v___y_2345_);
lean_dec_ref(v_as_2341_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t v_pu_2354_, lean_object* v_f_2355_, lean_object* v_a_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_){
_start:
{
lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; uint8_t v___x_2365_; 
v___x_2362_ = lean_unsigned_to_nat(0u);
v___x_2363_ = lean_array_get_size(v_a_2356_);
v___x_2364_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2365_ = lean_nat_dec_lt(v___x_2362_, v___x_2363_);
if (v___x_2365_ == 0)
{
lean_object* v___x_2366_; 
lean_dec_ref(v_f_2355_);
v___x_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2364_);
return v___x_2366_;
}
else
{
size_t v___x_2367_; size_t v___x_2368_; lean_object* v___x_2369_; 
v___x_2367_ = ((size_t)0ULL);
v___x_2368_ = lean_usize_of_nat(v___x_2363_);
v___x_2369_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_2354_, v_f_2355_, v_a_2356_, v___x_2367_, v___x_2368_, v___x_2364_, v___y_2357_, v___y_2358_, v___y_2359_, v___y_2360_);
return v___x_2369_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object* v_pu_2370_, lean_object* v_f_2371_, lean_object* v_a_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_){
_start:
{
uint8_t v_pu_boxed_2378_; lean_object* v_res_2379_; 
v_pu_boxed_2378_ = lean_unbox(v_pu_2370_);
v_res_2379_ = l_Lean_Compiler_LCNF_Probe_filterByCases(v_pu_boxed_2378_, v_f_2371_, v_a_2372_, v___y_2373_, v___y_2374_, v___y_2375_, v___y_2376_);
lean_dec(v___y_2376_);
lean_dec_ref(v___y_2375_);
lean_dec(v___y_2374_);
lean_dec_ref(v___y_2373_);
lean_dec_ref(v_a_2372_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t v_pu_2380_, lean_object* v_f_2381_, lean_object* v_a_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_){
_start:
{
switch(lean_obj_tag(v_a_2382_))
{
case 0:
{
lean_object* v_k_2388_; 
v_k_2388_ = lean_ctor_get(v_a_2382_, 1);
lean_inc_ref(v_k_2388_);
lean_dec_ref_known(v_a_2382_, 2);
v_a_2382_ = v_k_2388_;
goto _start;
}
case 1:
{
lean_object* v_decl_2390_; lean_object* v_k_2391_; lean_object* v_value_2392_; lean_object* v___x_2393_; 
v_decl_2390_ = lean_ctor_get(v_a_2382_, 0);
lean_inc_ref(v_decl_2390_);
v_k_2391_ = lean_ctor_get(v_a_2382_, 1);
lean_inc_ref(v_k_2391_);
lean_dec_ref_known(v_a_2382_, 2);
v_value_2392_ = lean_ctor_get(v_decl_2390_, 4);
lean_inc_ref(v_value_2392_);
lean_dec_ref(v_decl_2390_);
lean_inc_ref(v_f_2381_);
v___x_2393_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2380_, v_f_2381_, v_value_2392_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_);
if (lean_obj_tag(v___x_2393_) == 0)
{
lean_object* v_a_2394_; uint8_t v___x_2395_; 
v_a_2394_ = lean_ctor_get(v___x_2393_, 0);
lean_inc(v_a_2394_);
v___x_2395_ = lean_unbox(v_a_2394_);
lean_dec(v_a_2394_);
if (v___x_2395_ == 0)
{
lean_dec_ref_known(v___x_2393_, 1);
v_a_2382_ = v_k_2391_;
goto _start;
}
else
{
lean_dec_ref(v_k_2391_);
lean_dec_ref(v_f_2381_);
return v___x_2393_;
}
}
else
{
lean_dec_ref(v_k_2391_);
lean_dec_ref(v_f_2381_);
return v___x_2393_;
}
}
case 2:
{
lean_object* v_decl_2397_; lean_object* v_k_2398_; lean_object* v_value_2399_; lean_object* v___x_2400_; 
v_decl_2397_ = lean_ctor_get(v_a_2382_, 0);
lean_inc_ref(v_decl_2397_);
v_k_2398_ = lean_ctor_get(v_a_2382_, 1);
lean_inc_ref(v_k_2398_);
lean_dec_ref_known(v_a_2382_, 2);
v_value_2399_ = lean_ctor_get(v_decl_2397_, 4);
lean_inc_ref(v_value_2399_);
lean_dec_ref(v_decl_2397_);
lean_inc_ref(v_f_2381_);
v___x_2400_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2380_, v_f_2381_, v_value_2399_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_);
if (lean_obj_tag(v___x_2400_) == 0)
{
lean_object* v_a_2401_; uint8_t v___x_2402_; 
v_a_2401_ = lean_ctor_get(v___x_2400_, 0);
lean_inc(v_a_2401_);
v___x_2402_ = lean_unbox(v_a_2401_);
lean_dec(v_a_2401_);
if (v___x_2402_ == 0)
{
lean_dec_ref_known(v___x_2400_, 1);
v_a_2382_ = v_k_2398_;
goto _start;
}
else
{
lean_dec_ref(v_k_2398_);
lean_dec_ref(v_f_2381_);
return v___x_2400_;
}
}
else
{
lean_dec_ref(v_k_2398_);
lean_dec_ref(v_f_2381_);
return v___x_2400_;
}
}
case 3:
{
lean_object* v_fvarId_2404_; lean_object* v_args_2405_; lean_object* v___x_2406_; 
v_fvarId_2404_ = lean_ctor_get(v_a_2382_, 0);
lean_inc(v_fvarId_2404_);
v_args_2405_ = lean_ctor_get(v_a_2382_, 1);
lean_inc_ref(v_args_2405_);
lean_dec_ref_known(v_a_2382_, 2);
lean_inc(v___y_2386_);
lean_inc_ref(v___y_2385_);
lean_inc(v___y_2384_);
lean_inc_ref(v___y_2383_);
v___x_2406_ = lean_apply_7(v_f_2381_, v_fvarId_2404_, v_args_2405_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, lean_box(0));
return v___x_2406_;
}
case 4:
{
lean_object* v_cases_2407_; lean_object* v___x_2409_; uint8_t v_isShared_2410_; uint8_t v_isSharedCheck_2426_; 
v_cases_2407_ = lean_ctor_get(v_a_2382_, 0);
v_isSharedCheck_2426_ = !lean_is_exclusive(v_a_2382_);
if (v_isSharedCheck_2426_ == 0)
{
v___x_2409_ = v_a_2382_;
v_isShared_2410_ = v_isSharedCheck_2426_;
goto v_resetjp_2408_;
}
else
{
lean_inc(v_cases_2407_);
lean_dec(v_a_2382_);
v___x_2409_ = lean_box(0);
v_isShared_2410_ = v_isSharedCheck_2426_;
goto v_resetjp_2408_;
}
v_resetjp_2408_:
{
lean_object* v_alts_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; 
v_alts_2411_ = lean_ctor_get(v_cases_2407_, 3);
lean_inc_ref(v_alts_2411_);
lean_dec_ref(v_cases_2407_);
v___x_2412_ = lean_unsigned_to_nat(0u);
v___x_2413_ = lean_array_get_size(v_alts_2411_);
v___x_2414_ = lean_nat_dec_lt(v___x_2412_, v___x_2413_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2417_; 
lean_dec_ref(v_alts_2411_);
lean_dec_ref(v_f_2381_);
v___x_2415_ = lean_box(v___x_2414_);
if (v_isShared_2410_ == 0)
{
lean_ctor_set_tag(v___x_2409_, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2415_);
v___x_2417_ = v___x_2409_;
goto v_reusejp_2416_;
}
else
{
lean_object* v_reuseFailAlloc_2418_; 
v_reuseFailAlloc_2418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2418_, 0, v___x_2415_);
v___x_2417_ = v_reuseFailAlloc_2418_;
goto v_reusejp_2416_;
}
v_reusejp_2416_:
{
return v___x_2417_;
}
}
else
{
if (v___x_2414_ == 0)
{
lean_object* v___x_2419_; lean_object* v___x_2421_; 
lean_dec_ref(v_alts_2411_);
lean_dec_ref(v_f_2381_);
v___x_2419_ = lean_box(v___x_2414_);
if (v_isShared_2410_ == 0)
{
lean_ctor_set_tag(v___x_2409_, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2419_);
v___x_2421_ = v___x_2409_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v___x_2419_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
else
{
size_t v___x_2423_; size_t v___x_2424_; lean_object* v___x_2425_; 
lean_del_object(v___x_2409_);
v___x_2423_ = ((size_t)0ULL);
v___x_2424_ = lean_usize_of_nat(v___x_2413_);
v___x_2425_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_2380_, v_f_2381_, v_alts_2411_, v___x_2423_, v___x_2424_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_);
lean_dec_ref(v_alts_2411_);
return v___x_2425_;
}
}
}
}
case 7:
{
lean_object* v_k_2427_; 
v_k_2427_ = lean_ctor_get(v_a_2382_, 3);
lean_inc_ref(v_k_2427_);
lean_dec_ref_known(v_a_2382_, 4);
v_a_2382_ = v_k_2427_;
goto _start;
}
case 8:
{
lean_object* v_k_2429_; 
v_k_2429_ = lean_ctor_get(v_a_2382_, 3);
lean_inc_ref(v_k_2429_);
lean_dec_ref_known(v_a_2382_, 4);
v_a_2382_ = v_k_2429_;
goto _start;
}
case 9:
{
lean_object* v_k_2431_; 
v_k_2431_ = lean_ctor_get(v_a_2382_, 5);
lean_inc_ref(v_k_2431_);
lean_dec_ref_known(v_a_2382_, 6);
v_a_2382_ = v_k_2431_;
goto _start;
}
case 10:
{
lean_object* v_k_2433_; 
v_k_2433_ = lean_ctor_get(v_a_2382_, 2);
lean_inc_ref(v_k_2433_);
lean_dec_ref_known(v_a_2382_, 3);
v_a_2382_ = v_k_2433_;
goto _start;
}
case 11:
{
lean_object* v_k_2435_; 
v_k_2435_ = lean_ctor_get(v_a_2382_, 2);
lean_inc_ref(v_k_2435_);
lean_dec_ref_known(v_a_2382_, 3);
v_a_2382_ = v_k_2435_;
goto _start;
}
case 12:
{
lean_object* v_k_2437_; 
v_k_2437_ = lean_ctor_get(v_a_2382_, 3);
lean_inc_ref(v_k_2437_);
lean_dec_ref_known(v_a_2382_, 4);
v_a_2382_ = v_k_2437_;
goto _start;
}
case 13:
{
lean_object* v_k_2439_; 
v_k_2439_ = lean_ctor_get(v_a_2382_, 1);
lean_inc_ref(v_k_2439_);
lean_dec_ref_known(v_a_2382_, 2);
v_a_2382_ = v_k_2439_;
goto _start;
}
default: 
{
uint8_t v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; 
lean_dec_ref(v_a_2382_);
lean_dec_ref(v_f_2381_);
v___x_2441_ = 0;
v___x_2442_ = lean_box(v___x_2441_);
v___x_2443_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2442_);
return v___x_2443_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t v_pu_2444_, lean_object* v_f_2445_, lean_object* v_as_2446_, size_t v_i_2447_, size_t v_stop_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_){
_start:
{
uint8_t v___x_2454_; 
v___x_2454_ = lean_usize_dec_eq(v_i_2447_, v_stop_2448_);
if (v___x_2454_ == 0)
{
uint8_t v___x_2455_; lean_object* v___y_2457_; lean_object* v___x_2472_; 
v___x_2455_ = 1;
v___x_2472_ = lean_array_uget_borrowed(v_as_2446_, v_i_2447_);
switch(lean_obj_tag(v___x_2472_))
{
case 0:
{
lean_object* v_code_2473_; 
v_code_2473_ = lean_ctor_get(v___x_2472_, 2);
lean_inc_ref(v_code_2473_);
v___y_2457_ = v_code_2473_;
goto v___jp_2456_;
}
case 1:
{
lean_object* v_code_2474_; 
v_code_2474_ = lean_ctor_get(v___x_2472_, 1);
lean_inc_ref(v_code_2474_);
v___y_2457_ = v_code_2474_;
goto v___jp_2456_;
}
default: 
{
lean_object* v_code_2475_; 
v_code_2475_ = lean_ctor_get(v___x_2472_, 0);
lean_inc_ref(v_code_2475_);
v___y_2457_ = v_code_2475_;
goto v___jp_2456_;
}
}
v___jp_2456_:
{
lean_object* v___x_2458_; 
lean_inc_ref(v_f_2445_);
v___x_2458_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2444_, v_f_2445_, v___y_2457_, v___y_2449_, v___y_2450_, v___y_2451_, v___y_2452_);
if (lean_obj_tag(v___x_2458_) == 0)
{
lean_object* v_a_2459_; lean_object* v___x_2461_; uint8_t v_isShared_2462_; uint8_t v_isSharedCheck_2471_; 
v_a_2459_ = lean_ctor_get(v___x_2458_, 0);
v_isSharedCheck_2471_ = !lean_is_exclusive(v___x_2458_);
if (v_isSharedCheck_2471_ == 0)
{
v___x_2461_ = v___x_2458_;
v_isShared_2462_ = v_isSharedCheck_2471_;
goto v_resetjp_2460_;
}
else
{
lean_inc(v_a_2459_);
lean_dec(v___x_2458_);
v___x_2461_ = lean_box(0);
v_isShared_2462_ = v_isSharedCheck_2471_;
goto v_resetjp_2460_;
}
v_resetjp_2460_:
{
uint8_t v___x_2463_; 
v___x_2463_ = lean_unbox(v_a_2459_);
lean_dec(v_a_2459_);
if (v___x_2463_ == 0)
{
size_t v___x_2464_; size_t v___x_2465_; 
lean_del_object(v___x_2461_);
v___x_2464_ = ((size_t)1ULL);
v___x_2465_ = lean_usize_add(v_i_2447_, v___x_2464_);
v_i_2447_ = v___x_2465_;
goto _start;
}
else
{
lean_object* v___x_2467_; lean_object* v___x_2469_; 
lean_dec_ref(v_f_2445_);
v___x_2467_ = lean_box(v___x_2455_);
if (v_isShared_2462_ == 0)
{
lean_ctor_set(v___x_2461_, 0, v___x_2467_);
v___x_2469_ = v___x_2461_;
goto v_reusejp_2468_;
}
else
{
lean_object* v_reuseFailAlloc_2470_; 
v_reuseFailAlloc_2470_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2470_, 0, v___x_2467_);
v___x_2469_ = v_reuseFailAlloc_2470_;
goto v_reusejp_2468_;
}
v_reusejp_2468_:
{
return v___x_2469_;
}
}
}
}
else
{
lean_dec_ref(v_f_2445_);
return v___x_2458_;
}
}
}
else
{
uint8_t v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
lean_dec_ref(v_f_2445_);
v___x_2476_ = 0;
v___x_2477_ = lean_box(v___x_2476_);
v___x_2478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2478_, 0, v___x_2477_);
return v___x_2478_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object* v_pu_2479_, lean_object* v_f_2480_, lean_object* v_as_2481_, lean_object* v_i_2482_, lean_object* v_stop_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_, lean_object* v___y_2487_, lean_object* v___y_2488_){
_start:
{
uint8_t v_pu_boxed_2489_; size_t v_i_boxed_2490_; size_t v_stop_boxed_2491_; lean_object* v_res_2492_; 
v_pu_boxed_2489_ = lean_unbox(v_pu_2479_);
v_i_boxed_2490_ = lean_unbox_usize(v_i_2482_);
lean_dec(v_i_2482_);
v_stop_boxed_2491_ = lean_unbox_usize(v_stop_2483_);
lean_dec(v_stop_2483_);
v_res_2492_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_boxed_2489_, v_f_2480_, v_as_2481_, v_i_boxed_2490_, v_stop_boxed_2491_, v___y_2484_, v___y_2485_, v___y_2486_, v___y_2487_);
lean_dec(v___y_2487_);
lean_dec_ref(v___y_2486_);
lean_dec(v___y_2485_);
lean_dec_ref(v___y_2484_);
lean_dec_ref(v_as_2481_);
return v_res_2492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object* v_pu_2493_, lean_object* v_f_2494_, lean_object* v_a_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_){
_start:
{
uint8_t v_pu_boxed_2501_; lean_object* v_res_2502_; 
v_pu_boxed_2501_ = lean_unbox(v_pu_2493_);
v_res_2502_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_boxed_2501_, v_f_2494_, v_a_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec_ref(v___y_2496_);
return v_res_2502_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t v_pu_2503_, lean_object* v_f_2504_, lean_object* v_as_2505_, size_t v_i_2506_, size_t v_stop_2507_, lean_object* v_b_2508_, lean_object* v___y_2509_, lean_object* v___y_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_){
_start:
{
lean_object* v_a_2515_; uint8_t v___x_2519_; 
v___x_2519_ = lean_usize_dec_eq(v_i_2506_, v_stop_2507_);
if (v___x_2519_ == 0)
{
lean_object* v___x_2520_; lean_object* v_value_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; 
v___x_2520_ = lean_array_uget_borrowed(v_as_2505_, v_i_2506_);
v_value_2521_ = lean_ctor_get(v___x_2520_, 1);
v___x_2522_ = lean_box(v_pu_2503_);
lean_inc_ref(v_f_2504_);
v___x_2523_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed), 8, 2);
lean_closure_set(v___x_2523_, 0, v___x_2522_);
lean_closure_set(v___x_2523_, 1, v_f_2504_);
lean_inc_ref(v_value_2521_);
v___x_2524_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2521_, v___x_2523_, v___y_2509_, v___y_2510_, v___y_2511_, v___y_2512_);
if (lean_obj_tag(v___x_2524_) == 0)
{
lean_object* v_a_2525_; uint8_t v___x_2526_; 
v_a_2525_ = lean_ctor_get(v___x_2524_, 0);
lean_inc(v_a_2525_);
lean_dec_ref_known(v___x_2524_, 1);
v___x_2526_ = lean_unbox(v_a_2525_);
lean_dec(v_a_2525_);
if (v___x_2526_ == 0)
{
v_a_2515_ = v_b_2508_;
goto v___jp_2514_;
}
else
{
lean_object* v___x_2527_; 
lean_inc(v___x_2520_);
v___x_2527_ = lean_array_push(v_b_2508_, v___x_2520_);
v_a_2515_ = v___x_2527_;
goto v___jp_2514_;
}
}
else
{
lean_object* v_a_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2535_; 
lean_dec_ref(v_b_2508_);
lean_dec_ref(v_f_2504_);
v_a_2528_ = lean_ctor_get(v___x_2524_, 0);
v_isSharedCheck_2535_ = !lean_is_exclusive(v___x_2524_);
if (v_isSharedCheck_2535_ == 0)
{
v___x_2530_ = v___x_2524_;
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_a_2528_);
lean_dec(v___x_2524_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2535_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2533_; 
if (v_isShared_2531_ == 0)
{
v___x_2533_ = v___x_2530_;
goto v_reusejp_2532_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v_a_2528_);
v___x_2533_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2532_;
}
v_reusejp_2532_:
{
return v___x_2533_;
}
}
}
}
else
{
lean_object* v___x_2536_; 
lean_dec_ref(v_f_2504_);
v___x_2536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2536_, 0, v_b_2508_);
return v___x_2536_;
}
v___jp_2514_:
{
size_t v___x_2516_; size_t v___x_2517_; 
v___x_2516_ = ((size_t)1ULL);
v___x_2517_ = lean_usize_add(v_i_2506_, v___x_2516_);
v_i_2506_ = v___x_2517_;
v_b_2508_ = v_a_2515_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object* v_pu_2537_, lean_object* v_f_2538_, lean_object* v_as_2539_, lean_object* v_i_2540_, lean_object* v_stop_2541_, lean_object* v_b_2542_, lean_object* v___y_2543_, lean_object* v___y_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_){
_start:
{
uint8_t v_pu_boxed_2548_; size_t v_i_boxed_2549_; size_t v_stop_boxed_2550_; lean_object* v_res_2551_; 
v_pu_boxed_2548_ = lean_unbox(v_pu_2537_);
v_i_boxed_2549_ = lean_unbox_usize(v_i_2540_);
lean_dec(v_i_2540_);
v_stop_boxed_2550_ = lean_unbox_usize(v_stop_2541_);
lean_dec(v_stop_2541_);
v_res_2551_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_boxed_2548_, v_f_2538_, v_as_2539_, v_i_boxed_2549_, v_stop_boxed_2550_, v_b_2542_, v___y_2543_, v___y_2544_, v___y_2545_, v___y_2546_);
lean_dec(v___y_2546_);
lean_dec_ref(v___y_2545_);
lean_dec(v___y_2544_);
lean_dec_ref(v___y_2543_);
lean_dec_ref(v_as_2539_);
return v_res_2551_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t v_pu_2552_, lean_object* v_f_2553_, lean_object* v_a_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_){
_start:
{
lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; uint8_t v___x_2563_; 
v___x_2560_ = lean_unsigned_to_nat(0u);
v___x_2561_ = lean_array_get_size(v_a_2554_);
v___x_2562_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2563_ = lean_nat_dec_lt(v___x_2560_, v___x_2561_);
if (v___x_2563_ == 0)
{
lean_object* v___x_2564_; 
lean_dec_ref(v_f_2553_);
v___x_2564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2562_);
return v___x_2564_;
}
else
{
size_t v___x_2565_; size_t v___x_2566_; lean_object* v___x_2567_; 
v___x_2565_ = ((size_t)0ULL);
v___x_2566_ = lean_usize_of_nat(v___x_2561_);
v___x_2567_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_2552_, v_f_2553_, v_a_2554_, v___x_2565_, v___x_2566_, v___x_2562_, v___y_2555_, v___y_2556_, v___y_2557_, v___y_2558_);
return v___x_2567_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object* v_pu_2568_, lean_object* v_f_2569_, lean_object* v_a_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_){
_start:
{
uint8_t v_pu_boxed_2576_; lean_object* v_res_2577_; 
v_pu_boxed_2576_ = lean_unbox(v_pu_2568_);
v_res_2577_ = l_Lean_Compiler_LCNF_Probe_filterByJmp(v_pu_boxed_2576_, v_f_2569_, v_a_2570_, v___y_2571_, v___y_2572_, v___y_2573_, v___y_2574_);
lean_dec(v___y_2574_);
lean_dec_ref(v___y_2573_);
lean_dec(v___y_2572_);
lean_dec_ref(v___y_2571_);
lean_dec_ref(v_a_2570_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t v_pu_2578_, lean_object* v_f_2579_, lean_object* v_a_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_){
_start:
{
switch(lean_obj_tag(v_a_2580_))
{
case 0:
{
lean_object* v_k_2586_; 
v_k_2586_ = lean_ctor_get(v_a_2580_, 1);
lean_inc_ref(v_k_2586_);
lean_dec_ref_known(v_a_2580_, 2);
v_a_2580_ = v_k_2586_;
goto _start;
}
case 1:
{
lean_object* v_decl_2588_; lean_object* v_k_2589_; lean_object* v_value_2590_; lean_object* v___x_2591_; 
v_decl_2588_ = lean_ctor_get(v_a_2580_, 0);
lean_inc_ref(v_decl_2588_);
v_k_2589_ = lean_ctor_get(v_a_2580_, 1);
lean_inc_ref(v_k_2589_);
lean_dec_ref_known(v_a_2580_, 2);
v_value_2590_ = lean_ctor_get(v_decl_2588_, 4);
lean_inc_ref(v_value_2590_);
lean_dec_ref(v_decl_2588_);
lean_inc_ref(v_f_2579_);
v___x_2591_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2578_, v_f_2579_, v_value_2590_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v_a_2592_; uint8_t v___x_2593_; 
v_a_2592_ = lean_ctor_get(v___x_2591_, 0);
lean_inc(v_a_2592_);
v___x_2593_ = lean_unbox(v_a_2592_);
lean_dec(v_a_2592_);
if (v___x_2593_ == 0)
{
lean_dec_ref_known(v___x_2591_, 1);
v_a_2580_ = v_k_2589_;
goto _start;
}
else
{
lean_dec_ref(v_k_2589_);
lean_dec_ref(v_f_2579_);
return v___x_2591_;
}
}
else
{
lean_dec_ref(v_k_2589_);
lean_dec_ref(v_f_2579_);
return v___x_2591_;
}
}
case 2:
{
lean_object* v_decl_2595_; lean_object* v_k_2596_; lean_object* v_value_2597_; lean_object* v___x_2598_; 
v_decl_2595_ = lean_ctor_get(v_a_2580_, 0);
lean_inc_ref(v_decl_2595_);
v_k_2596_ = lean_ctor_get(v_a_2580_, 1);
lean_inc_ref(v_k_2596_);
lean_dec_ref_known(v_a_2580_, 2);
v_value_2597_ = lean_ctor_get(v_decl_2595_, 4);
lean_inc_ref(v_value_2597_);
lean_dec_ref(v_decl_2595_);
lean_inc_ref(v_f_2579_);
v___x_2598_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2578_, v_f_2579_, v_value_2597_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; uint8_t v___x_2600_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
lean_inc(v_a_2599_);
v___x_2600_ = lean_unbox(v_a_2599_);
lean_dec(v_a_2599_);
if (v___x_2600_ == 0)
{
lean_dec_ref_known(v___x_2598_, 1);
v_a_2580_ = v_k_2596_;
goto _start;
}
else
{
lean_dec_ref(v_k_2596_);
lean_dec_ref(v_f_2579_);
return v___x_2598_;
}
}
else
{
lean_dec_ref(v_k_2596_);
lean_dec_ref(v_f_2579_);
return v___x_2598_;
}
}
case 4:
{
lean_object* v_cases_2602_; lean_object* v___x_2604_; uint8_t v_isShared_2605_; uint8_t v_isSharedCheck_2621_; 
v_cases_2602_ = lean_ctor_get(v_a_2580_, 0);
v_isSharedCheck_2621_ = !lean_is_exclusive(v_a_2580_);
if (v_isSharedCheck_2621_ == 0)
{
v___x_2604_ = v_a_2580_;
v_isShared_2605_ = v_isSharedCheck_2621_;
goto v_resetjp_2603_;
}
else
{
lean_inc(v_cases_2602_);
lean_dec(v_a_2580_);
v___x_2604_ = lean_box(0);
v_isShared_2605_ = v_isSharedCheck_2621_;
goto v_resetjp_2603_;
}
v_resetjp_2603_:
{
lean_object* v_alts_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; uint8_t v___x_2609_; 
v_alts_2606_ = lean_ctor_get(v_cases_2602_, 3);
lean_inc_ref(v_alts_2606_);
lean_dec_ref(v_cases_2602_);
v___x_2607_ = lean_unsigned_to_nat(0u);
v___x_2608_ = lean_array_get_size(v_alts_2606_);
v___x_2609_ = lean_nat_dec_lt(v___x_2607_, v___x_2608_);
if (v___x_2609_ == 0)
{
lean_object* v___x_2610_; lean_object* v___x_2612_; 
lean_dec_ref(v_alts_2606_);
lean_dec_ref(v_f_2579_);
v___x_2610_ = lean_box(v___x_2609_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set_tag(v___x_2604_, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2610_);
v___x_2612_ = v___x_2604_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2613_; 
v_reuseFailAlloc_2613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2613_, 0, v___x_2610_);
v___x_2612_ = v_reuseFailAlloc_2613_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
return v___x_2612_;
}
}
else
{
if (v___x_2609_ == 0)
{
lean_object* v___x_2614_; lean_object* v___x_2616_; 
lean_dec_ref(v_alts_2606_);
lean_dec_ref(v_f_2579_);
v___x_2614_ = lean_box(v___x_2609_);
if (v_isShared_2605_ == 0)
{
lean_ctor_set_tag(v___x_2604_, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2614_);
v___x_2616_ = v___x_2604_;
goto v_reusejp_2615_;
}
else
{
lean_object* v_reuseFailAlloc_2617_; 
v_reuseFailAlloc_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2617_, 0, v___x_2614_);
v___x_2616_ = v_reuseFailAlloc_2617_;
goto v_reusejp_2615_;
}
v_reusejp_2615_:
{
return v___x_2616_;
}
}
else
{
size_t v___x_2618_; size_t v___x_2619_; lean_object* v___x_2620_; 
lean_del_object(v___x_2604_);
v___x_2618_ = ((size_t)0ULL);
v___x_2619_ = lean_usize_of_nat(v___x_2608_);
v___x_2620_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_2578_, v_f_2579_, v_alts_2606_, v___x_2618_, v___x_2619_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_);
lean_dec_ref(v_alts_2606_);
return v___x_2620_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_2622_; lean_object* v___x_2623_; 
v_fvarId_2622_ = lean_ctor_get(v_a_2580_, 0);
lean_inc(v_fvarId_2622_);
lean_dec_ref_known(v_a_2580_, 1);
lean_inc(v___y_2584_);
lean_inc_ref(v___y_2583_);
lean_inc(v___y_2582_);
lean_inc_ref(v___y_2581_);
v___x_2623_ = lean_apply_6(v_f_2579_, v_fvarId_2622_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, lean_box(0));
return v___x_2623_;
}
case 7:
{
lean_object* v_k_2624_; 
v_k_2624_ = lean_ctor_get(v_a_2580_, 3);
lean_inc_ref(v_k_2624_);
lean_dec_ref_known(v_a_2580_, 4);
v_a_2580_ = v_k_2624_;
goto _start;
}
case 8:
{
lean_object* v_k_2626_; 
v_k_2626_ = lean_ctor_get(v_a_2580_, 3);
lean_inc_ref(v_k_2626_);
lean_dec_ref_known(v_a_2580_, 4);
v_a_2580_ = v_k_2626_;
goto _start;
}
case 9:
{
lean_object* v_k_2628_; 
v_k_2628_ = lean_ctor_get(v_a_2580_, 5);
lean_inc_ref(v_k_2628_);
lean_dec_ref_known(v_a_2580_, 6);
v_a_2580_ = v_k_2628_;
goto _start;
}
case 10:
{
lean_object* v_k_2630_; 
v_k_2630_ = lean_ctor_get(v_a_2580_, 2);
lean_inc_ref(v_k_2630_);
lean_dec_ref_known(v_a_2580_, 3);
v_a_2580_ = v_k_2630_;
goto _start;
}
case 11:
{
lean_object* v_k_2632_; 
v_k_2632_ = lean_ctor_get(v_a_2580_, 2);
lean_inc_ref(v_k_2632_);
lean_dec_ref_known(v_a_2580_, 3);
v_a_2580_ = v_k_2632_;
goto _start;
}
case 12:
{
lean_object* v_k_2634_; 
v_k_2634_ = lean_ctor_get(v_a_2580_, 3);
lean_inc_ref(v_k_2634_);
lean_dec_ref_known(v_a_2580_, 4);
v_a_2580_ = v_k_2634_;
goto _start;
}
case 13:
{
lean_object* v_k_2636_; 
v_k_2636_ = lean_ctor_get(v_a_2580_, 1);
lean_inc_ref(v_k_2636_);
lean_dec_ref_known(v_a_2580_, 2);
v_a_2580_ = v_k_2636_;
goto _start;
}
default: 
{
uint8_t v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; 
lean_dec_ref(v_a_2580_);
lean_dec_ref(v_f_2579_);
v___x_2638_ = 0;
v___x_2639_ = lean_box(v___x_2638_);
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
return v___x_2640_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t v_pu_2641_, lean_object* v_f_2642_, lean_object* v_as_2643_, size_t v_i_2644_, size_t v_stop_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_){
_start:
{
uint8_t v___x_2651_; 
v___x_2651_ = lean_usize_dec_eq(v_i_2644_, v_stop_2645_);
if (v___x_2651_ == 0)
{
uint8_t v___x_2652_; lean_object* v___y_2654_; lean_object* v___x_2669_; 
v___x_2652_ = 1;
v___x_2669_ = lean_array_uget_borrowed(v_as_2643_, v_i_2644_);
switch(lean_obj_tag(v___x_2669_))
{
case 0:
{
lean_object* v_code_2670_; 
v_code_2670_ = lean_ctor_get(v___x_2669_, 2);
lean_inc_ref(v_code_2670_);
v___y_2654_ = v_code_2670_;
goto v___jp_2653_;
}
case 1:
{
lean_object* v_code_2671_; 
v_code_2671_ = lean_ctor_get(v___x_2669_, 1);
lean_inc_ref(v_code_2671_);
v___y_2654_ = v_code_2671_;
goto v___jp_2653_;
}
default: 
{
lean_object* v_code_2672_; 
v_code_2672_ = lean_ctor_get(v___x_2669_, 0);
lean_inc_ref(v_code_2672_);
v___y_2654_ = v_code_2672_;
goto v___jp_2653_;
}
}
v___jp_2653_:
{
lean_object* v___x_2655_; 
lean_inc_ref(v_f_2642_);
v___x_2655_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2641_, v_f_2642_, v___y_2654_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v_a_2656_; lean_object* v___x_2658_; uint8_t v_isShared_2659_; uint8_t v_isSharedCheck_2668_; 
v_a_2656_ = lean_ctor_get(v___x_2655_, 0);
v_isSharedCheck_2668_ = !lean_is_exclusive(v___x_2655_);
if (v_isSharedCheck_2668_ == 0)
{
v___x_2658_ = v___x_2655_;
v_isShared_2659_ = v_isSharedCheck_2668_;
goto v_resetjp_2657_;
}
else
{
lean_inc(v_a_2656_);
lean_dec(v___x_2655_);
v___x_2658_ = lean_box(0);
v_isShared_2659_ = v_isSharedCheck_2668_;
goto v_resetjp_2657_;
}
v_resetjp_2657_:
{
uint8_t v___x_2660_; 
v___x_2660_ = lean_unbox(v_a_2656_);
lean_dec(v_a_2656_);
if (v___x_2660_ == 0)
{
size_t v___x_2661_; size_t v___x_2662_; 
lean_del_object(v___x_2658_);
v___x_2661_ = ((size_t)1ULL);
v___x_2662_ = lean_usize_add(v_i_2644_, v___x_2661_);
v_i_2644_ = v___x_2662_;
goto _start;
}
else
{
lean_object* v___x_2664_; lean_object* v___x_2666_; 
lean_dec_ref(v_f_2642_);
v___x_2664_ = lean_box(v___x_2652_);
if (v_isShared_2659_ == 0)
{
lean_ctor_set(v___x_2658_, 0, v___x_2664_);
v___x_2666_ = v___x_2658_;
goto v_reusejp_2665_;
}
else
{
lean_object* v_reuseFailAlloc_2667_; 
v_reuseFailAlloc_2667_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2667_, 0, v___x_2664_);
v___x_2666_ = v_reuseFailAlloc_2667_;
goto v_reusejp_2665_;
}
v_reusejp_2665_:
{
return v___x_2666_;
}
}
}
}
else
{
lean_dec_ref(v_f_2642_);
return v___x_2655_;
}
}
}
else
{
uint8_t v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; 
lean_dec_ref(v_f_2642_);
v___x_2673_ = 0;
v___x_2674_ = lean_box(v___x_2673_);
v___x_2675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
return v___x_2675_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object* v_pu_2676_, lean_object* v_f_2677_, lean_object* v_as_2678_, lean_object* v_i_2679_, lean_object* v_stop_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_){
_start:
{
uint8_t v_pu_boxed_2686_; size_t v_i_boxed_2687_; size_t v_stop_boxed_2688_; lean_object* v_res_2689_; 
v_pu_boxed_2686_ = lean_unbox(v_pu_2676_);
v_i_boxed_2687_ = lean_unbox_usize(v_i_2679_);
lean_dec(v_i_2679_);
v_stop_boxed_2688_ = lean_unbox_usize(v_stop_2680_);
lean_dec(v_stop_2680_);
v_res_2689_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_boxed_2686_, v_f_2677_, v_as_2678_, v_i_boxed_2687_, v_stop_boxed_2688_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_);
lean_dec(v___y_2684_);
lean_dec_ref(v___y_2683_);
lean_dec(v___y_2682_);
lean_dec_ref(v___y_2681_);
lean_dec_ref(v_as_2678_);
return v_res_2689_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object* v_pu_2690_, lean_object* v_f_2691_, lean_object* v_a_2692_, lean_object* v___y_2693_, lean_object* v___y_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_){
_start:
{
uint8_t v_pu_boxed_2698_; lean_object* v_res_2699_; 
v_pu_boxed_2698_ = lean_unbox(v_pu_2690_);
v_res_2699_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_boxed_2698_, v_f_2691_, v_a_2692_, v___y_2693_, v___y_2694_, v___y_2695_, v___y_2696_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
lean_dec(v___y_2694_);
lean_dec_ref(v___y_2693_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t v_pu_2700_, lean_object* v_f_2701_, lean_object* v_as_2702_, size_t v_i_2703_, size_t v_stop_2704_, lean_object* v_b_2705_, lean_object* v___y_2706_, lean_object* v___y_2707_, lean_object* v___y_2708_, lean_object* v___y_2709_){
_start:
{
lean_object* v_a_2712_; uint8_t v___x_2716_; 
v___x_2716_ = lean_usize_dec_eq(v_i_2703_, v_stop_2704_);
if (v___x_2716_ == 0)
{
lean_object* v___x_2717_; lean_object* v_value_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; 
v___x_2717_ = lean_array_uget_borrowed(v_as_2702_, v_i_2703_);
v_value_2718_ = lean_ctor_get(v___x_2717_, 1);
v___x_2719_ = lean_box(v_pu_2700_);
lean_inc_ref(v_f_2701_);
v___x_2720_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed), 8, 2);
lean_closure_set(v___x_2720_, 0, v___x_2719_);
lean_closure_set(v___x_2720_, 1, v_f_2701_);
lean_inc_ref(v_value_2718_);
v___x_2721_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2718_, v___x_2720_, v___y_2706_, v___y_2707_, v___y_2708_, v___y_2709_);
if (lean_obj_tag(v___x_2721_) == 0)
{
lean_object* v_a_2722_; uint8_t v___x_2723_; 
v_a_2722_ = lean_ctor_get(v___x_2721_, 0);
lean_inc(v_a_2722_);
lean_dec_ref_known(v___x_2721_, 1);
v___x_2723_ = lean_unbox(v_a_2722_);
lean_dec(v_a_2722_);
if (v___x_2723_ == 0)
{
v_a_2712_ = v_b_2705_;
goto v___jp_2711_;
}
else
{
lean_object* v___x_2724_; 
lean_inc(v___x_2717_);
v___x_2724_ = lean_array_push(v_b_2705_, v___x_2717_);
v_a_2712_ = v___x_2724_;
goto v___jp_2711_;
}
}
else
{
lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2732_; 
lean_dec_ref(v_b_2705_);
lean_dec_ref(v_f_2701_);
v_a_2725_ = lean_ctor_get(v___x_2721_, 0);
v_isSharedCheck_2732_ = !lean_is_exclusive(v___x_2721_);
if (v_isSharedCheck_2732_ == 0)
{
v___x_2727_ = v___x_2721_;
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2721_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2732_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2730_; 
if (v_isShared_2728_ == 0)
{
v___x_2730_ = v___x_2727_;
goto v_reusejp_2729_;
}
else
{
lean_object* v_reuseFailAlloc_2731_; 
v_reuseFailAlloc_2731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2731_, 0, v_a_2725_);
v___x_2730_ = v_reuseFailAlloc_2731_;
goto v_reusejp_2729_;
}
v_reusejp_2729_:
{
return v___x_2730_;
}
}
}
}
else
{
lean_object* v___x_2733_; 
lean_dec_ref(v_f_2701_);
v___x_2733_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2733_, 0, v_b_2705_);
return v___x_2733_;
}
v___jp_2711_:
{
size_t v___x_2713_; size_t v___x_2714_; 
v___x_2713_ = ((size_t)1ULL);
v___x_2714_ = lean_usize_add(v_i_2703_, v___x_2713_);
v_i_2703_ = v___x_2714_;
v_b_2705_ = v_a_2712_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object* v_pu_2734_, lean_object* v_f_2735_, lean_object* v_as_2736_, lean_object* v_i_2737_, lean_object* v_stop_2738_, lean_object* v_b_2739_, lean_object* v___y_2740_, lean_object* v___y_2741_, lean_object* v___y_2742_, lean_object* v___y_2743_, lean_object* v___y_2744_){
_start:
{
uint8_t v_pu_boxed_2745_; size_t v_i_boxed_2746_; size_t v_stop_boxed_2747_; lean_object* v_res_2748_; 
v_pu_boxed_2745_ = lean_unbox(v_pu_2734_);
v_i_boxed_2746_ = lean_unbox_usize(v_i_2737_);
lean_dec(v_i_2737_);
v_stop_boxed_2747_ = lean_unbox_usize(v_stop_2738_);
lean_dec(v_stop_2738_);
v_res_2748_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_boxed_2745_, v_f_2735_, v_as_2736_, v_i_boxed_2746_, v_stop_boxed_2747_, v_b_2739_, v___y_2740_, v___y_2741_, v___y_2742_, v___y_2743_);
lean_dec(v___y_2743_);
lean_dec_ref(v___y_2742_);
lean_dec(v___y_2741_);
lean_dec_ref(v___y_2740_);
lean_dec_ref(v_as_2736_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t v_pu_2749_, lean_object* v_f_2750_, lean_object* v_a_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; uint8_t v___x_2760_; 
v___x_2757_ = lean_unsigned_to_nat(0u);
v___x_2758_ = lean_array_get_size(v_a_2751_);
v___x_2759_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2760_ = lean_nat_dec_lt(v___x_2757_, v___x_2758_);
if (v___x_2760_ == 0)
{
lean_object* v___x_2761_; 
lean_dec_ref(v_f_2750_);
v___x_2761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2759_);
return v___x_2761_;
}
else
{
size_t v___x_2762_; size_t v___x_2763_; lean_object* v___x_2764_; 
v___x_2762_ = ((size_t)0ULL);
v___x_2763_ = lean_usize_of_nat(v___x_2758_);
v___x_2764_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_2749_, v_f_2750_, v_a_2751_, v___x_2762_, v___x_2763_, v___x_2759_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_);
return v___x_2764_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object* v_pu_2765_, lean_object* v_f_2766_, lean_object* v_a_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_, lean_object* v___y_2772_){
_start:
{
uint8_t v_pu_boxed_2773_; lean_object* v_res_2774_; 
v_pu_boxed_2773_ = lean_unbox(v_pu_2765_);
v_res_2774_ = l_Lean_Compiler_LCNF_Probe_filterByReturn(v_pu_boxed_2773_, v_f_2766_, v_a_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
lean_dec(v___y_2771_);
lean_dec_ref(v___y_2770_);
lean_dec(v___y_2769_);
lean_dec_ref(v___y_2768_);
lean_dec_ref(v_a_2767_);
return v_res_2774_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t v_pu_2775_, lean_object* v_f_2776_, lean_object* v_a_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_){
_start:
{
switch(lean_obj_tag(v_a_2777_))
{
case 0:
{
lean_object* v_k_2783_; 
v_k_2783_ = lean_ctor_get(v_a_2777_, 1);
lean_inc_ref(v_k_2783_);
lean_dec_ref_known(v_a_2777_, 2);
v_a_2777_ = v_k_2783_;
goto _start;
}
case 1:
{
lean_object* v_decl_2785_; lean_object* v_k_2786_; lean_object* v_value_2787_; lean_object* v___x_2788_; 
v_decl_2785_ = lean_ctor_get(v_a_2777_, 0);
lean_inc_ref(v_decl_2785_);
v_k_2786_ = lean_ctor_get(v_a_2777_, 1);
lean_inc_ref(v_k_2786_);
lean_dec_ref_known(v_a_2777_, 2);
v_value_2787_ = lean_ctor_get(v_decl_2785_, 4);
lean_inc_ref(v_value_2787_);
lean_dec_ref(v_decl_2785_);
lean_inc_ref(v_f_2776_);
v___x_2788_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2775_, v_f_2776_, v_value_2787_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_);
if (lean_obj_tag(v___x_2788_) == 0)
{
lean_object* v_a_2789_; uint8_t v___x_2790_; 
v_a_2789_ = lean_ctor_get(v___x_2788_, 0);
lean_inc(v_a_2789_);
v___x_2790_ = lean_unbox(v_a_2789_);
lean_dec(v_a_2789_);
if (v___x_2790_ == 0)
{
lean_dec_ref_known(v___x_2788_, 1);
v_a_2777_ = v_k_2786_;
goto _start;
}
else
{
lean_dec_ref(v_k_2786_);
lean_dec_ref(v_f_2776_);
return v___x_2788_;
}
}
else
{
lean_dec_ref(v_k_2786_);
lean_dec_ref(v_f_2776_);
return v___x_2788_;
}
}
case 2:
{
lean_object* v_decl_2792_; lean_object* v_k_2793_; lean_object* v_value_2794_; lean_object* v___x_2795_; 
v_decl_2792_ = lean_ctor_get(v_a_2777_, 0);
lean_inc_ref(v_decl_2792_);
v_k_2793_ = lean_ctor_get(v_a_2777_, 1);
lean_inc_ref(v_k_2793_);
lean_dec_ref_known(v_a_2777_, 2);
v_value_2794_ = lean_ctor_get(v_decl_2792_, 4);
lean_inc_ref(v_value_2794_);
lean_dec_ref(v_decl_2792_);
lean_inc_ref(v_f_2776_);
v___x_2795_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2775_, v_f_2776_, v_value_2794_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_);
if (lean_obj_tag(v___x_2795_) == 0)
{
lean_object* v_a_2796_; uint8_t v___x_2797_; 
v_a_2796_ = lean_ctor_get(v___x_2795_, 0);
lean_inc(v_a_2796_);
v___x_2797_ = lean_unbox(v_a_2796_);
lean_dec(v_a_2796_);
if (v___x_2797_ == 0)
{
lean_dec_ref_known(v___x_2795_, 1);
v_a_2777_ = v_k_2793_;
goto _start;
}
else
{
lean_dec_ref(v_k_2793_);
lean_dec_ref(v_f_2776_);
return v___x_2795_;
}
}
else
{
lean_dec_ref(v_k_2793_);
lean_dec_ref(v_f_2776_);
return v___x_2795_;
}
}
case 4:
{
lean_object* v_cases_2799_; lean_object* v___x_2801_; uint8_t v_isShared_2802_; uint8_t v_isSharedCheck_2818_; 
v_cases_2799_ = lean_ctor_get(v_a_2777_, 0);
v_isSharedCheck_2818_ = !lean_is_exclusive(v_a_2777_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2801_ = v_a_2777_;
v_isShared_2802_ = v_isSharedCheck_2818_;
goto v_resetjp_2800_;
}
else
{
lean_inc(v_cases_2799_);
lean_dec(v_a_2777_);
v___x_2801_ = lean_box(0);
v_isShared_2802_ = v_isSharedCheck_2818_;
goto v_resetjp_2800_;
}
v_resetjp_2800_:
{
lean_object* v_alts_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v_alts_2803_ = lean_ctor_get(v_cases_2799_, 3);
lean_inc_ref(v_alts_2803_);
lean_dec_ref(v_cases_2799_);
v___x_2804_ = lean_unsigned_to_nat(0u);
v___x_2805_ = lean_array_get_size(v_alts_2803_);
v___x_2806_ = lean_nat_dec_lt(v___x_2804_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; lean_object* v___x_2809_; 
lean_dec_ref(v_alts_2803_);
lean_dec_ref(v_f_2776_);
v___x_2807_ = lean_box(v___x_2806_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set_tag(v___x_2801_, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2807_);
v___x_2809_ = v___x_2801_;
goto v_reusejp_2808_;
}
else
{
lean_object* v_reuseFailAlloc_2810_; 
v_reuseFailAlloc_2810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2810_, 0, v___x_2807_);
v___x_2809_ = v_reuseFailAlloc_2810_;
goto v_reusejp_2808_;
}
v_reusejp_2808_:
{
return v___x_2809_;
}
}
else
{
if (v___x_2806_ == 0)
{
lean_object* v___x_2811_; lean_object* v___x_2813_; 
lean_dec_ref(v_alts_2803_);
lean_dec_ref(v_f_2776_);
v___x_2811_ = lean_box(v___x_2806_);
if (v_isShared_2802_ == 0)
{
lean_ctor_set_tag(v___x_2801_, 0);
lean_ctor_set(v___x_2801_, 0, v___x_2811_);
v___x_2813_ = v___x_2801_;
goto v_reusejp_2812_;
}
else
{
lean_object* v_reuseFailAlloc_2814_; 
v_reuseFailAlloc_2814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2814_, 0, v___x_2811_);
v___x_2813_ = v_reuseFailAlloc_2814_;
goto v_reusejp_2812_;
}
v_reusejp_2812_:
{
return v___x_2813_;
}
}
else
{
size_t v___x_2815_; size_t v___x_2816_; lean_object* v___x_2817_; 
lean_del_object(v___x_2801_);
v___x_2815_ = ((size_t)0ULL);
v___x_2816_ = lean_usize_of_nat(v___x_2805_);
v___x_2817_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_2775_, v_f_2776_, v_alts_2803_, v___x_2815_, v___x_2816_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_);
lean_dec_ref(v_alts_2803_);
return v___x_2817_;
}
}
}
}
case 6:
{
lean_object* v_type_2819_; lean_object* v___x_2820_; 
v_type_2819_ = lean_ctor_get(v_a_2777_, 0);
lean_inc_ref(v_type_2819_);
lean_dec_ref_known(v_a_2777_, 1);
lean_inc(v___y_2781_);
lean_inc_ref(v___y_2780_);
lean_inc(v___y_2779_);
lean_inc_ref(v___y_2778_);
v___x_2820_ = lean_apply_6(v_f_2776_, v_type_2819_, v___y_2778_, v___y_2779_, v___y_2780_, v___y_2781_, lean_box(0));
return v___x_2820_;
}
case 7:
{
lean_object* v_k_2821_; 
v_k_2821_ = lean_ctor_get(v_a_2777_, 3);
lean_inc_ref(v_k_2821_);
lean_dec_ref_known(v_a_2777_, 4);
v_a_2777_ = v_k_2821_;
goto _start;
}
case 8:
{
lean_object* v_k_2823_; 
v_k_2823_ = lean_ctor_get(v_a_2777_, 3);
lean_inc_ref(v_k_2823_);
lean_dec_ref_known(v_a_2777_, 4);
v_a_2777_ = v_k_2823_;
goto _start;
}
case 9:
{
lean_object* v_k_2825_; 
v_k_2825_ = lean_ctor_get(v_a_2777_, 5);
lean_inc_ref(v_k_2825_);
lean_dec_ref_known(v_a_2777_, 6);
v_a_2777_ = v_k_2825_;
goto _start;
}
case 10:
{
lean_object* v_k_2827_; 
v_k_2827_ = lean_ctor_get(v_a_2777_, 2);
lean_inc_ref(v_k_2827_);
lean_dec_ref_known(v_a_2777_, 3);
v_a_2777_ = v_k_2827_;
goto _start;
}
case 11:
{
lean_object* v_k_2829_; 
v_k_2829_ = lean_ctor_get(v_a_2777_, 2);
lean_inc_ref(v_k_2829_);
lean_dec_ref_known(v_a_2777_, 3);
v_a_2777_ = v_k_2829_;
goto _start;
}
case 12:
{
lean_object* v_k_2831_; 
v_k_2831_ = lean_ctor_get(v_a_2777_, 3);
lean_inc_ref(v_k_2831_);
lean_dec_ref_known(v_a_2777_, 4);
v_a_2777_ = v_k_2831_;
goto _start;
}
case 13:
{
lean_object* v_k_2833_; 
v_k_2833_ = lean_ctor_get(v_a_2777_, 1);
lean_inc_ref(v_k_2833_);
lean_dec_ref_known(v_a_2777_, 2);
v_a_2777_ = v_k_2833_;
goto _start;
}
default: 
{
uint8_t v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; 
lean_dec_ref(v_a_2777_);
lean_dec_ref(v_f_2776_);
v___x_2835_ = 0;
v___x_2836_ = lean_box(v___x_2835_);
v___x_2837_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2837_, 0, v___x_2836_);
return v___x_2837_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t v_pu_2838_, lean_object* v_f_2839_, lean_object* v_as_2840_, size_t v_i_2841_, size_t v_stop_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
uint8_t v___x_2848_; 
v___x_2848_ = lean_usize_dec_eq(v_i_2841_, v_stop_2842_);
if (v___x_2848_ == 0)
{
uint8_t v___x_2849_; lean_object* v___y_2851_; lean_object* v___x_2866_; 
v___x_2849_ = 1;
v___x_2866_ = lean_array_uget_borrowed(v_as_2840_, v_i_2841_);
switch(lean_obj_tag(v___x_2866_))
{
case 0:
{
lean_object* v_code_2867_; 
v_code_2867_ = lean_ctor_get(v___x_2866_, 2);
lean_inc_ref(v_code_2867_);
v___y_2851_ = v_code_2867_;
goto v___jp_2850_;
}
case 1:
{
lean_object* v_code_2868_; 
v_code_2868_ = lean_ctor_get(v___x_2866_, 1);
lean_inc_ref(v_code_2868_);
v___y_2851_ = v_code_2868_;
goto v___jp_2850_;
}
default: 
{
lean_object* v_code_2869_; 
v_code_2869_ = lean_ctor_get(v___x_2866_, 0);
lean_inc_ref(v_code_2869_);
v___y_2851_ = v_code_2869_;
goto v___jp_2850_;
}
}
v___jp_2850_:
{
lean_object* v___x_2852_; 
lean_inc_ref(v_f_2839_);
v___x_2852_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2838_, v_f_2839_, v___y_2851_, v___y_2843_, v___y_2844_, v___y_2845_, v___y_2846_);
if (lean_obj_tag(v___x_2852_) == 0)
{
lean_object* v_a_2853_; lean_object* v___x_2855_; uint8_t v_isShared_2856_; uint8_t v_isSharedCheck_2865_; 
v_a_2853_ = lean_ctor_get(v___x_2852_, 0);
v_isSharedCheck_2865_ = !lean_is_exclusive(v___x_2852_);
if (v_isSharedCheck_2865_ == 0)
{
v___x_2855_ = v___x_2852_;
v_isShared_2856_ = v_isSharedCheck_2865_;
goto v_resetjp_2854_;
}
else
{
lean_inc(v_a_2853_);
lean_dec(v___x_2852_);
v___x_2855_ = lean_box(0);
v_isShared_2856_ = v_isSharedCheck_2865_;
goto v_resetjp_2854_;
}
v_resetjp_2854_:
{
uint8_t v___x_2857_; 
v___x_2857_ = lean_unbox(v_a_2853_);
lean_dec(v_a_2853_);
if (v___x_2857_ == 0)
{
size_t v___x_2858_; size_t v___x_2859_; 
lean_del_object(v___x_2855_);
v___x_2858_ = ((size_t)1ULL);
v___x_2859_ = lean_usize_add(v_i_2841_, v___x_2858_);
v_i_2841_ = v___x_2859_;
goto _start;
}
else
{
lean_object* v___x_2861_; lean_object* v___x_2863_; 
lean_dec_ref(v_f_2839_);
v___x_2861_ = lean_box(v___x_2849_);
if (v_isShared_2856_ == 0)
{
lean_ctor_set(v___x_2855_, 0, v___x_2861_);
v___x_2863_ = v___x_2855_;
goto v_reusejp_2862_;
}
else
{
lean_object* v_reuseFailAlloc_2864_; 
v_reuseFailAlloc_2864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2864_, 0, v___x_2861_);
v___x_2863_ = v_reuseFailAlloc_2864_;
goto v_reusejp_2862_;
}
v_reusejp_2862_:
{
return v___x_2863_;
}
}
}
}
else
{
lean_dec_ref(v_f_2839_);
return v___x_2852_;
}
}
}
else
{
uint8_t v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
lean_dec_ref(v_f_2839_);
v___x_2870_ = 0;
v___x_2871_ = lean_box(v___x_2870_);
v___x_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2872_, 0, v___x_2871_);
return v___x_2872_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object* v_pu_2873_, lean_object* v_f_2874_, lean_object* v_as_2875_, lean_object* v_i_2876_, lean_object* v_stop_2877_, lean_object* v___y_2878_, lean_object* v___y_2879_, lean_object* v___y_2880_, lean_object* v___y_2881_, lean_object* v___y_2882_){
_start:
{
uint8_t v_pu_boxed_2883_; size_t v_i_boxed_2884_; size_t v_stop_boxed_2885_; lean_object* v_res_2886_; 
v_pu_boxed_2883_ = lean_unbox(v_pu_2873_);
v_i_boxed_2884_ = lean_unbox_usize(v_i_2876_);
lean_dec(v_i_2876_);
v_stop_boxed_2885_ = lean_unbox_usize(v_stop_2877_);
lean_dec(v_stop_2877_);
v_res_2886_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_boxed_2883_, v_f_2874_, v_as_2875_, v_i_boxed_2884_, v_stop_boxed_2885_, v___y_2878_, v___y_2879_, v___y_2880_, v___y_2881_);
lean_dec(v___y_2881_);
lean_dec_ref(v___y_2880_);
lean_dec(v___y_2879_);
lean_dec_ref(v___y_2878_);
lean_dec_ref(v_as_2875_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object* v_pu_2887_, lean_object* v_f_2888_, lean_object* v_a_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_){
_start:
{
uint8_t v_pu_boxed_2895_; lean_object* v_res_2896_; 
v_pu_boxed_2895_ = lean_unbox(v_pu_2887_);
v_res_2896_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_boxed_2895_, v_f_2888_, v_a_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_);
lean_dec(v___y_2893_);
lean_dec_ref(v___y_2892_);
lean_dec(v___y_2891_);
lean_dec_ref(v___y_2890_);
return v_res_2896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t v_pu_2897_, lean_object* v_f_2898_, lean_object* v_as_2899_, size_t v_i_2900_, size_t v_stop_2901_, lean_object* v_b_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_a_2909_; uint8_t v___x_2913_; 
v___x_2913_ = lean_usize_dec_eq(v_i_2900_, v_stop_2901_);
if (v___x_2913_ == 0)
{
lean_object* v___x_2914_; lean_object* v_value_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2914_ = lean_array_uget_borrowed(v_as_2899_, v_i_2900_);
v_value_2915_ = lean_ctor_get(v___x_2914_, 1);
v___x_2916_ = lean_box(v_pu_2897_);
lean_inc_ref(v_f_2898_);
v___x_2917_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed), 8, 2);
lean_closure_set(v___x_2917_, 0, v___x_2916_);
lean_closure_set(v___x_2917_, 1, v_f_2898_);
lean_inc_ref(v_value_2915_);
v___x_2918_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2915_, v___x_2917_, v___y_2903_, v___y_2904_, v___y_2905_, v___y_2906_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; uint8_t v___x_2920_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2918_, 1);
v___x_2920_ = lean_unbox(v_a_2919_);
lean_dec(v_a_2919_);
if (v___x_2920_ == 0)
{
v_a_2909_ = v_b_2902_;
goto v___jp_2908_;
}
else
{
lean_object* v___x_2921_; 
lean_inc(v___x_2914_);
v___x_2921_ = lean_array_push(v_b_2902_, v___x_2914_);
v_a_2909_ = v___x_2921_;
goto v___jp_2908_;
}
}
else
{
lean_object* v_a_2922_; lean_object* v___x_2924_; uint8_t v_isShared_2925_; uint8_t v_isSharedCheck_2929_; 
lean_dec_ref(v_b_2902_);
lean_dec_ref(v_f_2898_);
v_a_2922_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_2929_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_2929_ == 0)
{
v___x_2924_ = v___x_2918_;
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
else
{
lean_inc(v_a_2922_);
lean_dec(v___x_2918_);
v___x_2924_ = lean_box(0);
v_isShared_2925_ = v_isSharedCheck_2929_;
goto v_resetjp_2923_;
}
v_resetjp_2923_:
{
lean_object* v___x_2927_; 
if (v_isShared_2925_ == 0)
{
v___x_2927_ = v___x_2924_;
goto v_reusejp_2926_;
}
else
{
lean_object* v_reuseFailAlloc_2928_; 
v_reuseFailAlloc_2928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2928_, 0, v_a_2922_);
v___x_2927_ = v_reuseFailAlloc_2928_;
goto v_reusejp_2926_;
}
v_reusejp_2926_:
{
return v___x_2927_;
}
}
}
}
else
{
lean_object* v___x_2930_; 
lean_dec_ref(v_f_2898_);
v___x_2930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2930_, 0, v_b_2902_);
return v___x_2930_;
}
v___jp_2908_:
{
size_t v___x_2910_; size_t v___x_2911_; 
v___x_2910_ = ((size_t)1ULL);
v___x_2911_ = lean_usize_add(v_i_2900_, v___x_2910_);
v_i_2900_ = v___x_2911_;
v_b_2902_ = v_a_2909_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object* v_pu_2931_, lean_object* v_f_2932_, lean_object* v_as_2933_, lean_object* v_i_2934_, lean_object* v_stop_2935_, lean_object* v_b_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_){
_start:
{
uint8_t v_pu_boxed_2942_; size_t v_i_boxed_2943_; size_t v_stop_boxed_2944_; lean_object* v_res_2945_; 
v_pu_boxed_2942_ = lean_unbox(v_pu_2931_);
v_i_boxed_2943_ = lean_unbox_usize(v_i_2934_);
lean_dec(v_i_2934_);
v_stop_boxed_2944_ = lean_unbox_usize(v_stop_2935_);
lean_dec(v_stop_2935_);
v_res_2945_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_boxed_2942_, v_f_2932_, v_as_2933_, v_i_boxed_2943_, v_stop_boxed_2944_, v_b_2936_, v___y_2937_, v___y_2938_, v___y_2939_, v___y_2940_);
lean_dec(v___y_2940_);
lean_dec_ref(v___y_2939_);
lean_dec(v___y_2938_);
lean_dec_ref(v___y_2937_);
lean_dec_ref(v_as_2933_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t v_pu_2946_, lean_object* v_f_2947_, lean_object* v_a_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_){
_start:
{
lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; uint8_t v___x_2957_; 
v___x_2954_ = lean_unsigned_to_nat(0u);
v___x_2955_ = lean_array_get_size(v_a_2948_);
v___x_2956_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2957_ = lean_nat_dec_lt(v___x_2954_, v___x_2955_);
if (v___x_2957_ == 0)
{
lean_object* v___x_2958_; 
lean_dec_ref(v_f_2947_);
v___x_2958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2958_, 0, v___x_2956_);
return v___x_2958_;
}
else
{
size_t v___x_2959_; size_t v___x_2960_; lean_object* v___x_2961_; 
v___x_2959_ = ((size_t)0ULL);
v___x_2960_ = lean_usize_of_nat(v___x_2955_);
v___x_2961_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_2946_, v_f_2947_, v_a_2948_, v___x_2959_, v___x_2960_, v___x_2956_, v___y_2949_, v___y_2950_, v___y_2951_, v___y_2952_);
return v___x_2961_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object* v_pu_2962_, lean_object* v_f_2963_, lean_object* v_a_2964_, lean_object* v___y_2965_, lean_object* v___y_2966_, lean_object* v___y_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_){
_start:
{
uint8_t v_pu_boxed_2970_; lean_object* v_res_2971_; 
v_pu_boxed_2970_ = lean_unbox(v_pu_2962_);
v_res_2971_ = l_Lean_Compiler_LCNF_Probe_filterByUnreach(v_pu_boxed_2970_, v_f_2963_, v_a_2964_, v___y_2965_, v___y_2966_, v___y_2967_, v___y_2968_);
lean_dec(v___y_2968_);
lean_dec_ref(v___y_2967_);
lean_dec(v___y_2966_);
lean_dec_ref(v___y_2965_);
lean_dec_ref(v_a_2964_);
return v_res_2971_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object* v_decl_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_, lean_object* v___y_2975_, lean_object* v___y_2976_){
_start:
{
lean_object* v_toSignature_2978_; lean_object* v_name_2979_; lean_object* v___x_2980_; 
v_toSignature_2978_ = lean_ctor_get(v_decl_2972_, 0);
v_name_2979_ = lean_ctor_get(v_toSignature_2978_, 0);
lean_inc(v_name_2979_);
v___x_2980_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2980_, 0, v_name_2979_);
return v___x_2980_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object* v_decl_2981_, lean_object* v___y_2982_, lean_object* v___y_2983_, lean_object* v___y_2984_, lean_object* v___y_2985_, lean_object* v___y_2986_){
_start:
{
lean_object* v_res_2987_; 
v_res_2987_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(v_decl_2981_, v___y_2982_, v___y_2983_, v___y_2984_, v___y_2985_);
lean_dec(v___y_2985_);
lean_dec_ref(v___y_2984_);
lean_dec(v___y_2983_);
lean_dec_ref(v___y_2982_);
lean_dec_ref(v_decl_2981_);
return v_res_2987_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object* v_a_2989_, lean_object* v___y_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_){
_start:
{
lean_object* v___x_2995_; lean_object* v_toApplicative_2996_; lean_object* v_toFunctor_2997_; lean_object* v_toSeq_2998_; lean_object* v_toSeqLeft_2999_; lean_object* v_toSeqRight_3000_; lean_object* v___f_3001_; lean_object* v___f_3002_; lean_object* v___f_3003_; lean_object* v___f_3004_; lean_object* v___x_3005_; lean_object* v___f_3006_; lean_object* v___f_3007_; lean_object* v___f_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v_toApplicative_3012_; lean_object* v___x_3014_; uint8_t v_isShared_3015_; uint8_t v_isSharedCheck_3044_; 
v___x_2995_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_2996_ = lean_ctor_get(v___x_2995_, 0);
v_toFunctor_2997_ = lean_ctor_get(v_toApplicative_2996_, 0);
v_toSeq_2998_ = lean_ctor_get(v_toApplicative_2996_, 2);
v_toSeqLeft_2999_ = lean_ctor_get(v_toApplicative_2996_, 3);
v_toSeqRight_3000_ = lean_ctor_get(v_toApplicative_2996_, 4);
v___f_3001_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_3002_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_2997_, 2);
v___f_3003_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3003_, 0, v_toFunctor_2997_);
v___f_3004_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3004_, 0, v_toFunctor_2997_);
v___x_3005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3005_, 0, v___f_3003_);
lean_ctor_set(v___x_3005_, 1, v___f_3004_);
lean_inc(v_toSeqRight_3000_);
v___f_3006_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3006_, 0, v_toSeqRight_3000_);
lean_inc(v_toSeqLeft_2999_);
v___f_3007_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3007_, 0, v_toSeqLeft_2999_);
lean_inc(v_toSeq_2998_);
v___f_3008_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3008_, 0, v_toSeq_2998_);
v___x_3009_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3009_, 0, v___x_3005_);
lean_ctor_set(v___x_3009_, 1, v___f_3001_);
lean_ctor_set(v___x_3009_, 2, v___f_3008_);
lean_ctor_set(v___x_3009_, 3, v___f_3007_);
lean_ctor_set(v___x_3009_, 4, v___f_3006_);
v___x_3010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3010_, 0, v___x_3009_);
lean_ctor_set(v___x_3010_, 1, v___f_3002_);
v___x_3011_ = l_StateRefT_x27_instMonad___redArg(v___x_3010_);
v_toApplicative_3012_ = lean_ctor_get(v___x_3011_, 0);
v_isSharedCheck_3044_ = !lean_is_exclusive(v___x_3011_);
if (v_isSharedCheck_3044_ == 0)
{
lean_object* v_unused_3045_; 
v_unused_3045_ = lean_ctor_get(v___x_3011_, 1);
lean_dec(v_unused_3045_);
v___x_3014_ = v___x_3011_;
v_isShared_3015_ = v_isSharedCheck_3044_;
goto v_resetjp_3013_;
}
else
{
lean_inc(v_toApplicative_3012_);
lean_dec(v___x_3011_);
v___x_3014_ = lean_box(0);
v_isShared_3015_ = v_isSharedCheck_3044_;
goto v_resetjp_3013_;
}
v_resetjp_3013_:
{
lean_object* v_toFunctor_3016_; lean_object* v_toSeq_3017_; lean_object* v_toSeqLeft_3018_; lean_object* v_toSeqRight_3019_; lean_object* v___x_3021_; uint8_t v_isShared_3022_; uint8_t v_isSharedCheck_3042_; 
v_toFunctor_3016_ = lean_ctor_get(v_toApplicative_3012_, 0);
v_toSeq_3017_ = lean_ctor_get(v_toApplicative_3012_, 2);
v_toSeqLeft_3018_ = lean_ctor_get(v_toApplicative_3012_, 3);
v_toSeqRight_3019_ = lean_ctor_get(v_toApplicative_3012_, 4);
v_isSharedCheck_3042_ = !lean_is_exclusive(v_toApplicative_3012_);
if (v_isSharedCheck_3042_ == 0)
{
lean_object* v_unused_3043_; 
v_unused_3043_ = lean_ctor_get(v_toApplicative_3012_, 1);
lean_dec(v_unused_3043_);
v___x_3021_ = v_toApplicative_3012_;
v_isShared_3022_ = v_isSharedCheck_3042_;
goto v_resetjp_3020_;
}
else
{
lean_inc(v_toSeqRight_3019_);
lean_inc(v_toSeqLeft_3018_);
lean_inc(v_toSeq_3017_);
lean_inc(v_toFunctor_3016_);
lean_dec(v_toApplicative_3012_);
v___x_3021_ = lean_box(0);
v_isShared_3022_ = v_isSharedCheck_3042_;
goto v_resetjp_3020_;
}
v_resetjp_3020_:
{
lean_object* v___f_3023_; lean_object* v___f_3024_; lean_object* v___f_3025_; lean_object* v___f_3026_; lean_object* v___f_3027_; lean_object* v___x_3028_; lean_object* v___f_3029_; lean_object* v___f_3030_; lean_object* v___f_3031_; lean_object* v___x_3033_; 
v___f_3023_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0));
v___f_3024_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_3025_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_3016_);
v___f_3026_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3026_, 0, v_toFunctor_3016_);
v___f_3027_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3027_, 0, v_toFunctor_3016_);
v___x_3028_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3028_, 0, v___f_3026_);
lean_ctor_set(v___x_3028_, 1, v___f_3027_);
v___f_3029_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3029_, 0, v_toSeqRight_3019_);
v___f_3030_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3030_, 0, v_toSeqLeft_3018_);
v___f_3031_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3031_, 0, v_toSeq_3017_);
if (v_isShared_3022_ == 0)
{
lean_ctor_set(v___x_3021_, 4, v___f_3029_);
lean_ctor_set(v___x_3021_, 3, v___f_3030_);
lean_ctor_set(v___x_3021_, 2, v___f_3031_);
lean_ctor_set(v___x_3021_, 1, v___f_3024_);
lean_ctor_set(v___x_3021_, 0, v___x_3028_);
v___x_3033_ = v___x_3021_;
goto v_reusejp_3032_;
}
else
{
lean_object* v_reuseFailAlloc_3041_; 
v_reuseFailAlloc_3041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3041_, 0, v___x_3028_);
lean_ctor_set(v_reuseFailAlloc_3041_, 1, v___f_3024_);
lean_ctor_set(v_reuseFailAlloc_3041_, 2, v___f_3031_);
lean_ctor_set(v_reuseFailAlloc_3041_, 3, v___f_3030_);
lean_ctor_set(v_reuseFailAlloc_3041_, 4, v___f_3029_);
v___x_3033_ = v_reuseFailAlloc_3041_;
goto v_reusejp_3032_;
}
v_reusejp_3032_:
{
lean_object* v___x_3035_; 
if (v_isShared_3015_ == 0)
{
lean_ctor_set(v___x_3014_, 1, v___f_3025_);
lean_ctor_set(v___x_3014_, 0, v___x_3033_);
v___x_3035_ = v___x_3014_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3040_; 
v_reuseFailAlloc_3040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3040_, 0, v___x_3033_);
lean_ctor_set(v_reuseFailAlloc_3040_, 1, v___f_3025_);
v___x_3035_ = v_reuseFailAlloc_3040_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
size_t v_sz_3036_; size_t v___x_3037_; lean_object* v___x_182__overap_3038_; lean_object* v___x_3039_; 
v_sz_3036_ = lean_array_size(v_a_2989_);
v___x_3037_ = ((size_t)0ULL);
v___x_182__overap_3038_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3035_, v___f_3023_, v_sz_3036_, v___x_3037_, v_a_2989_);
lean_inc(v___y_2993_);
lean_inc_ref(v___y_2992_);
lean_inc(v___y_2991_);
lean_inc_ref(v___y_2990_);
v___x_3039_ = lean_apply_5(v___x_182__overap_3038_, v___y_2990_, v___y_2991_, v___y_2992_, v___y_2993_, lean_box(0));
return v___x_3039_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object* v_a_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg(v_a_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t v_pu_3053_, lean_object* v_a_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_){
_start:
{
lean_object* v___x_3060_; lean_object* v_toApplicative_3061_; lean_object* v_toFunctor_3062_; lean_object* v_toSeq_3063_; lean_object* v_toSeqLeft_3064_; lean_object* v_toSeqRight_3065_; lean_object* v___f_3066_; lean_object* v___f_3067_; lean_object* v___f_3068_; lean_object* v___f_3069_; lean_object* v___x_3070_; lean_object* v___f_3071_; lean_object* v___f_3072_; lean_object* v___f_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v_toApplicative_3077_; lean_object* v___x_3079_; uint8_t v_isShared_3080_; uint8_t v_isSharedCheck_3109_; 
v___x_3060_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_3061_ = lean_ctor_get(v___x_3060_, 0);
v_toFunctor_3062_ = lean_ctor_get(v_toApplicative_3061_, 0);
v_toSeq_3063_ = lean_ctor_get(v_toApplicative_3061_, 2);
v_toSeqLeft_3064_ = lean_ctor_get(v_toApplicative_3061_, 3);
v_toSeqRight_3065_ = lean_ctor_get(v_toApplicative_3061_, 4);
v___f_3066_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_3067_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_3062_, 2);
v___f_3068_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3068_, 0, v_toFunctor_3062_);
v___f_3069_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3069_, 0, v_toFunctor_3062_);
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___f_3068_);
lean_ctor_set(v___x_3070_, 1, v___f_3069_);
lean_inc(v_toSeqRight_3065_);
v___f_3071_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3071_, 0, v_toSeqRight_3065_);
lean_inc(v_toSeqLeft_3064_);
v___f_3072_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3072_, 0, v_toSeqLeft_3064_);
lean_inc(v_toSeq_3063_);
v___f_3073_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3073_, 0, v_toSeq_3063_);
v___x_3074_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3074_, 0, v___x_3070_);
lean_ctor_set(v___x_3074_, 1, v___f_3066_);
lean_ctor_set(v___x_3074_, 2, v___f_3073_);
lean_ctor_set(v___x_3074_, 3, v___f_3072_);
lean_ctor_set(v___x_3074_, 4, v___f_3071_);
v___x_3075_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
lean_ctor_set(v___x_3075_, 1, v___f_3067_);
v___x_3076_ = l_StateRefT_x27_instMonad___redArg(v___x_3075_);
v_toApplicative_3077_ = lean_ctor_get(v___x_3076_, 0);
v_isSharedCheck_3109_ = !lean_is_exclusive(v___x_3076_);
if (v_isSharedCheck_3109_ == 0)
{
lean_object* v_unused_3110_; 
v_unused_3110_ = lean_ctor_get(v___x_3076_, 1);
lean_dec(v_unused_3110_);
v___x_3079_ = v___x_3076_;
v_isShared_3080_ = v_isSharedCheck_3109_;
goto v_resetjp_3078_;
}
else
{
lean_inc(v_toApplicative_3077_);
lean_dec(v___x_3076_);
v___x_3079_ = lean_box(0);
v_isShared_3080_ = v_isSharedCheck_3109_;
goto v_resetjp_3078_;
}
v_resetjp_3078_:
{
lean_object* v_toFunctor_3081_; lean_object* v_toSeq_3082_; lean_object* v_toSeqLeft_3083_; lean_object* v_toSeqRight_3084_; lean_object* v___x_3086_; uint8_t v_isShared_3087_; uint8_t v_isSharedCheck_3107_; 
v_toFunctor_3081_ = lean_ctor_get(v_toApplicative_3077_, 0);
v_toSeq_3082_ = lean_ctor_get(v_toApplicative_3077_, 2);
v_toSeqLeft_3083_ = lean_ctor_get(v_toApplicative_3077_, 3);
v_toSeqRight_3084_ = lean_ctor_get(v_toApplicative_3077_, 4);
v_isSharedCheck_3107_ = !lean_is_exclusive(v_toApplicative_3077_);
if (v_isSharedCheck_3107_ == 0)
{
lean_object* v_unused_3108_; 
v_unused_3108_ = lean_ctor_get(v_toApplicative_3077_, 1);
lean_dec(v_unused_3108_);
v___x_3086_ = v_toApplicative_3077_;
v_isShared_3087_ = v_isSharedCheck_3107_;
goto v_resetjp_3085_;
}
else
{
lean_inc(v_toSeqRight_3084_);
lean_inc(v_toSeqLeft_3083_);
lean_inc(v_toSeq_3082_);
lean_inc(v_toFunctor_3081_);
lean_dec(v_toApplicative_3077_);
v___x_3086_ = lean_box(0);
v_isShared_3087_ = v_isSharedCheck_3107_;
goto v_resetjp_3085_;
}
v_resetjp_3085_:
{
lean_object* v___f_3088_; lean_object* v___f_3089_; lean_object* v___f_3090_; lean_object* v___f_3091_; lean_object* v___f_3092_; lean_object* v___x_3093_; lean_object* v___f_3094_; lean_object* v___f_3095_; lean_object* v___f_3096_; lean_object* v___x_3098_; 
v___f_3088_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0));
v___f_3089_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_3090_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_3081_);
v___f_3091_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3091_, 0, v_toFunctor_3081_);
v___f_3092_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3092_, 0, v_toFunctor_3081_);
v___x_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___f_3091_);
lean_ctor_set(v___x_3093_, 1, v___f_3092_);
v___f_3094_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3094_, 0, v_toSeqRight_3084_);
v___f_3095_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3095_, 0, v_toSeqLeft_3083_);
v___f_3096_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3096_, 0, v_toSeq_3082_);
if (v_isShared_3087_ == 0)
{
lean_ctor_set(v___x_3086_, 4, v___f_3094_);
lean_ctor_set(v___x_3086_, 3, v___f_3095_);
lean_ctor_set(v___x_3086_, 2, v___f_3096_);
lean_ctor_set(v___x_3086_, 1, v___f_3089_);
lean_ctor_set(v___x_3086_, 0, v___x_3093_);
v___x_3098_ = v___x_3086_;
goto v_reusejp_3097_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v___x_3093_);
lean_ctor_set(v_reuseFailAlloc_3106_, 1, v___f_3089_);
lean_ctor_set(v_reuseFailAlloc_3106_, 2, v___f_3096_);
lean_ctor_set(v_reuseFailAlloc_3106_, 3, v___f_3095_);
lean_ctor_set(v_reuseFailAlloc_3106_, 4, v___f_3094_);
v___x_3098_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3097_;
}
v_reusejp_3097_:
{
lean_object* v___x_3100_; 
if (v_isShared_3080_ == 0)
{
lean_ctor_set(v___x_3079_, 1, v___f_3090_);
lean_ctor_set(v___x_3079_, 0, v___x_3098_);
v___x_3100_ = v___x_3079_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3105_; 
v_reuseFailAlloc_3105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3105_, 0, v___x_3098_);
lean_ctor_set(v_reuseFailAlloc_3105_, 1, v___f_3090_);
v___x_3100_ = v_reuseFailAlloc_3105_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
size_t v_sz_3101_; size_t v___x_3102_; lean_object* v___x_264__overap_3103_; lean_object* v___x_3104_; 
v_sz_3101_ = lean_array_size(v_a_3054_);
v___x_3102_ = ((size_t)0ULL);
v___x_264__overap_3103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3100_, v___f_3088_, v_sz_3101_, v___x_3102_, v_a_3054_);
lean_inc(v___y_3058_);
lean_inc_ref(v___y_3057_);
lean_inc(v___y_3056_);
lean_inc_ref(v___y_3055_);
v___x_3104_ = lean_apply_5(v___x_264__overap_3103_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, lean_box(0));
return v___x_3104_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object* v_pu_3111_, lean_object* v_a_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_, lean_object* v___y_3115_, lean_object* v___y_3116_, lean_object* v___y_3117_){
_start:
{
uint8_t v_pu_boxed_3118_; lean_object* v_res_3119_; 
v_pu_boxed_3118_ = lean_unbox(v_pu_3111_);
v_res_3119_ = l_Lean_Compiler_LCNF_Probe_declNames(v_pu_boxed_3118_, v_a_3112_, v___y_3113_, v___y_3114_, v___y_3115_, v___y_3116_);
lean_dec(v___y_3116_);
lean_dec_ref(v___y_3115_);
lean_dec(v___y_3114_);
lean_dec_ref(v___y_3113_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object* v_inst_3120_, lean_object* v_x_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_, lean_object* v___y_3124_, lean_object* v___y_3125_){
_start:
{
lean_object* v___x_3127_; lean_object* v___x_3128_; 
v___x_3127_ = lean_apply_1(v_inst_3120_, v_x_3121_);
v___x_3128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3127_);
return v___x_3128_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object* v_inst_3129_, lean_object* v_x_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v_res_3136_; 
v_res_3136_ = l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(v_inst_3129_, v_x_3130_, v___y_3131_, v___y_3132_, v___y_3133_, v___y_3134_);
lean_dec(v___y_3134_);
lean_dec_ref(v___y_3133_);
lean_dec(v___y_3132_);
lean_dec_ref(v___y_3131_);
return v_res_3136_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object* v_inst_3137_, lean_object* v_a_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_){
_start:
{
lean_object* v___x_3144_; lean_object* v_toApplicative_3145_; lean_object* v_toFunctor_3146_; lean_object* v_toSeq_3147_; lean_object* v_toSeqLeft_3148_; lean_object* v_toSeqRight_3149_; lean_object* v___f_3150_; lean_object* v___f_3151_; lean_object* v___f_3152_; lean_object* v___f_3153_; lean_object* v___x_3154_; lean_object* v___f_3155_; lean_object* v___f_3156_; lean_object* v___f_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v_toApplicative_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3193_; 
v___x_3144_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_3145_ = lean_ctor_get(v___x_3144_, 0);
v_toFunctor_3146_ = lean_ctor_get(v_toApplicative_3145_, 0);
v_toSeq_3147_ = lean_ctor_get(v_toApplicative_3145_, 2);
v_toSeqLeft_3148_ = lean_ctor_get(v_toApplicative_3145_, 3);
v_toSeqRight_3149_ = lean_ctor_get(v_toApplicative_3145_, 4);
v___f_3150_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_3151_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_3146_, 2);
v___f_3152_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3152_, 0, v_toFunctor_3146_);
v___f_3153_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3153_, 0, v_toFunctor_3146_);
v___x_3154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3154_, 0, v___f_3152_);
lean_ctor_set(v___x_3154_, 1, v___f_3153_);
lean_inc(v_toSeqRight_3149_);
v___f_3155_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3155_, 0, v_toSeqRight_3149_);
lean_inc(v_toSeqLeft_3148_);
v___f_3156_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3156_, 0, v_toSeqLeft_3148_);
lean_inc(v_toSeq_3147_);
v___f_3157_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3157_, 0, v_toSeq_3147_);
v___x_3158_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3154_);
lean_ctor_set(v___x_3158_, 1, v___f_3150_);
lean_ctor_set(v___x_3158_, 2, v___f_3157_);
lean_ctor_set(v___x_3158_, 3, v___f_3156_);
lean_ctor_set(v___x_3158_, 4, v___f_3155_);
v___x_3159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
lean_ctor_set(v___x_3159_, 1, v___f_3151_);
v___x_3160_ = l_StateRefT_x27_instMonad___redArg(v___x_3159_);
v_toApplicative_3161_ = lean_ctor_get(v___x_3160_, 0);
v_isSharedCheck_3193_ = !lean_is_exclusive(v___x_3160_);
if (v_isSharedCheck_3193_ == 0)
{
lean_object* v_unused_3194_; 
v_unused_3194_ = lean_ctor_get(v___x_3160_, 1);
lean_dec(v_unused_3194_);
v___x_3163_ = v___x_3160_;
v_isShared_3164_ = v_isSharedCheck_3193_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_toApplicative_3161_);
lean_dec(v___x_3160_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3193_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v_toFunctor_3165_; lean_object* v_toSeq_3166_; lean_object* v_toSeqLeft_3167_; lean_object* v_toSeqRight_3168_; lean_object* v___x_3170_; uint8_t v_isShared_3171_; uint8_t v_isSharedCheck_3191_; 
v_toFunctor_3165_ = lean_ctor_get(v_toApplicative_3161_, 0);
v_toSeq_3166_ = lean_ctor_get(v_toApplicative_3161_, 2);
v_toSeqLeft_3167_ = lean_ctor_get(v_toApplicative_3161_, 3);
v_toSeqRight_3168_ = lean_ctor_get(v_toApplicative_3161_, 4);
v_isSharedCheck_3191_ = !lean_is_exclusive(v_toApplicative_3161_);
if (v_isSharedCheck_3191_ == 0)
{
lean_object* v_unused_3192_; 
v_unused_3192_ = lean_ctor_get(v_toApplicative_3161_, 1);
lean_dec(v_unused_3192_);
v___x_3170_ = v_toApplicative_3161_;
v_isShared_3171_ = v_isSharedCheck_3191_;
goto v_resetjp_3169_;
}
else
{
lean_inc(v_toSeqRight_3168_);
lean_inc(v_toSeqLeft_3167_);
lean_inc(v_toSeq_3166_);
lean_inc(v_toFunctor_3165_);
lean_dec(v_toApplicative_3161_);
v___x_3170_ = lean_box(0);
v_isShared_3171_ = v_isSharedCheck_3191_;
goto v_resetjp_3169_;
}
v_resetjp_3169_:
{
lean_object* v___f_3172_; lean_object* v___f_3173_; lean_object* v___f_3174_; lean_object* v___f_3175_; lean_object* v___f_3176_; lean_object* v___x_3177_; lean_object* v___f_3178_; lean_object* v___f_3179_; lean_object* v___f_3180_; lean_object* v___x_3182_; 
v___f_3172_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3172_, 0, v_inst_3137_);
v___f_3173_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_3174_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_3165_);
v___f_3175_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3175_, 0, v_toFunctor_3165_);
v___f_3176_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3176_, 0, v_toFunctor_3165_);
v___x_3177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3177_, 0, v___f_3175_);
lean_ctor_set(v___x_3177_, 1, v___f_3176_);
v___f_3178_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3178_, 0, v_toSeqRight_3168_);
v___f_3179_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3179_, 0, v_toSeqLeft_3167_);
v___f_3180_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3180_, 0, v_toSeq_3166_);
if (v_isShared_3171_ == 0)
{
lean_ctor_set(v___x_3170_, 4, v___f_3178_);
lean_ctor_set(v___x_3170_, 3, v___f_3179_);
lean_ctor_set(v___x_3170_, 2, v___f_3180_);
lean_ctor_set(v___x_3170_, 1, v___f_3173_);
lean_ctor_set(v___x_3170_, 0, v___x_3177_);
v___x_3182_ = v___x_3170_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3190_; 
v_reuseFailAlloc_3190_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3190_, 0, v___x_3177_);
lean_ctor_set(v_reuseFailAlloc_3190_, 1, v___f_3173_);
lean_ctor_set(v_reuseFailAlloc_3190_, 2, v___f_3180_);
lean_ctor_set(v_reuseFailAlloc_3190_, 3, v___f_3179_);
lean_ctor_set(v_reuseFailAlloc_3190_, 4, v___f_3178_);
v___x_3182_ = v_reuseFailAlloc_3190_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
lean_object* v___x_3184_; 
if (v_isShared_3164_ == 0)
{
lean_ctor_set(v___x_3163_, 1, v___f_3174_);
lean_ctor_set(v___x_3163_, 0, v___x_3182_);
v___x_3184_ = v___x_3163_;
goto v_reusejp_3183_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v___x_3182_);
lean_ctor_set(v_reuseFailAlloc_3189_, 1, v___f_3174_);
v___x_3184_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3183_;
}
v_reusejp_3183_:
{
size_t v_sz_3185_; size_t v___x_3186_; lean_object* v___x_184__overap_3187_; lean_object* v___x_3188_; 
v_sz_3185_ = lean_array_size(v_a_3138_);
v___x_3186_ = ((size_t)0ULL);
v___x_184__overap_3187_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3184_, v___f_3172_, v_sz_3185_, v___x_3186_, v_a_3138_);
lean_inc(v___y_3142_);
lean_inc_ref(v___y_3141_);
lean_inc(v___y_3140_);
lean_inc_ref(v___y_3139_);
v___x_3188_ = lean_apply_5(v___x_184__overap_3187_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, lean_box(0));
return v___x_3188_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object* v_inst_3195_, lean_object* v_a_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_, lean_object* v___y_3199_, lean_object* v___y_3200_, lean_object* v___y_3201_){
_start:
{
lean_object* v_res_3202_; 
v_res_3202_ = l_Lean_Compiler_LCNF_Probe_toString___redArg(v_inst_3195_, v_a_3196_, v___y_3197_, v___y_3198_, v___y_3199_, v___y_3200_);
lean_dec(v___y_3200_);
lean_dec_ref(v___y_3199_);
lean_dec(v___y_3198_);
lean_dec_ref(v___y_3197_);
return v_res_3202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object* v_00_u03b1_3203_, lean_object* v_inst_3204_, lean_object* v_a_3205_, lean_object* v___y_3206_, lean_object* v___y_3207_, lean_object* v___y_3208_, lean_object* v___y_3209_){
_start:
{
lean_object* v___x_3211_; lean_object* v_toApplicative_3212_; lean_object* v_toFunctor_3213_; lean_object* v_toSeq_3214_; lean_object* v_toSeqLeft_3215_; lean_object* v_toSeqRight_3216_; lean_object* v___f_3217_; lean_object* v___f_3218_; lean_object* v___f_3219_; lean_object* v___f_3220_; lean_object* v___x_3221_; lean_object* v___f_3222_; lean_object* v___f_3223_; lean_object* v___f_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v_toApplicative_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3260_; 
v___x_3211_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_3212_ = lean_ctor_get(v___x_3211_, 0);
v_toFunctor_3213_ = lean_ctor_get(v_toApplicative_3212_, 0);
v_toSeq_3214_ = lean_ctor_get(v_toApplicative_3212_, 2);
v_toSeqLeft_3215_ = lean_ctor_get(v_toApplicative_3212_, 3);
v_toSeqRight_3216_ = lean_ctor_get(v_toApplicative_3212_, 4);
v___f_3217_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_3218_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_3213_, 2);
v___f_3219_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3219_, 0, v_toFunctor_3213_);
v___f_3220_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3220_, 0, v_toFunctor_3213_);
v___x_3221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3221_, 0, v___f_3219_);
lean_ctor_set(v___x_3221_, 1, v___f_3220_);
lean_inc(v_toSeqRight_3216_);
v___f_3222_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3222_, 0, v_toSeqRight_3216_);
lean_inc(v_toSeqLeft_3215_);
v___f_3223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3223_, 0, v_toSeqLeft_3215_);
lean_inc(v_toSeq_3214_);
v___f_3224_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3224_, 0, v_toSeq_3214_);
v___x_3225_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3221_);
lean_ctor_set(v___x_3225_, 1, v___f_3217_);
lean_ctor_set(v___x_3225_, 2, v___f_3224_);
lean_ctor_set(v___x_3225_, 3, v___f_3223_);
lean_ctor_set(v___x_3225_, 4, v___f_3222_);
v___x_3226_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
lean_ctor_set(v___x_3226_, 1, v___f_3218_);
v___x_3227_ = l_StateRefT_x27_instMonad___redArg(v___x_3226_);
v_toApplicative_3228_ = lean_ctor_get(v___x_3227_, 0);
v_isSharedCheck_3260_ = !lean_is_exclusive(v___x_3227_);
if (v_isSharedCheck_3260_ == 0)
{
lean_object* v_unused_3261_; 
v_unused_3261_ = lean_ctor_get(v___x_3227_, 1);
lean_dec(v_unused_3261_);
v___x_3230_ = v___x_3227_;
v_isShared_3231_ = v_isSharedCheck_3260_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_toApplicative_3228_);
lean_dec(v___x_3227_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3260_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v_toFunctor_3232_; lean_object* v_toSeq_3233_; lean_object* v_toSeqLeft_3234_; lean_object* v_toSeqRight_3235_; lean_object* v___x_3237_; uint8_t v_isShared_3238_; uint8_t v_isSharedCheck_3258_; 
v_toFunctor_3232_ = lean_ctor_get(v_toApplicative_3228_, 0);
v_toSeq_3233_ = lean_ctor_get(v_toApplicative_3228_, 2);
v_toSeqLeft_3234_ = lean_ctor_get(v_toApplicative_3228_, 3);
v_toSeqRight_3235_ = lean_ctor_get(v_toApplicative_3228_, 4);
v_isSharedCheck_3258_ = !lean_is_exclusive(v_toApplicative_3228_);
if (v_isSharedCheck_3258_ == 0)
{
lean_object* v_unused_3259_; 
v_unused_3259_ = lean_ctor_get(v_toApplicative_3228_, 1);
lean_dec(v_unused_3259_);
v___x_3237_ = v_toApplicative_3228_;
v_isShared_3238_ = v_isSharedCheck_3258_;
goto v_resetjp_3236_;
}
else
{
lean_inc(v_toSeqRight_3235_);
lean_inc(v_toSeqLeft_3234_);
lean_inc(v_toSeq_3233_);
lean_inc(v_toFunctor_3232_);
lean_dec(v_toApplicative_3228_);
v___x_3237_ = lean_box(0);
v_isShared_3238_ = v_isSharedCheck_3258_;
goto v_resetjp_3236_;
}
v_resetjp_3236_:
{
lean_object* v___f_3239_; lean_object* v___f_3240_; lean_object* v___f_3241_; lean_object* v___f_3242_; lean_object* v___f_3243_; lean_object* v___x_3244_; lean_object* v___f_3245_; lean_object* v___f_3246_; lean_object* v___f_3247_; lean_object* v___x_3249_; 
v___f_3239_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3239_, 0, v_inst_3204_);
v___f_3240_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_3241_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_3232_);
v___f_3242_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3242_, 0, v_toFunctor_3232_);
v___f_3243_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3243_, 0, v_toFunctor_3232_);
v___x_3244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3244_, 0, v___f_3242_);
lean_ctor_set(v___x_3244_, 1, v___f_3243_);
v___f_3245_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3245_, 0, v_toSeqRight_3235_);
v___f_3246_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3246_, 0, v_toSeqLeft_3234_);
v___f_3247_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3247_, 0, v_toSeq_3233_);
if (v_isShared_3238_ == 0)
{
lean_ctor_set(v___x_3237_, 4, v___f_3245_);
lean_ctor_set(v___x_3237_, 3, v___f_3246_);
lean_ctor_set(v___x_3237_, 2, v___f_3247_);
lean_ctor_set(v___x_3237_, 1, v___f_3240_);
lean_ctor_set(v___x_3237_, 0, v___x_3244_);
v___x_3249_ = v___x_3237_;
goto v_reusejp_3248_;
}
else
{
lean_object* v_reuseFailAlloc_3257_; 
v_reuseFailAlloc_3257_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3257_, 0, v___x_3244_);
lean_ctor_set(v_reuseFailAlloc_3257_, 1, v___f_3240_);
lean_ctor_set(v_reuseFailAlloc_3257_, 2, v___f_3247_);
lean_ctor_set(v_reuseFailAlloc_3257_, 3, v___f_3246_);
lean_ctor_set(v_reuseFailAlloc_3257_, 4, v___f_3245_);
v___x_3249_ = v_reuseFailAlloc_3257_;
goto v_reusejp_3248_;
}
v_reusejp_3248_:
{
lean_object* v___x_3251_; 
if (v_isShared_3231_ == 0)
{
lean_ctor_set(v___x_3230_, 1, v___f_3241_);
lean_ctor_set(v___x_3230_, 0, v___x_3249_);
v___x_3251_ = v___x_3230_;
goto v_reusejp_3250_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v___x_3249_);
lean_ctor_set(v_reuseFailAlloc_3256_, 1, v___f_3241_);
v___x_3251_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3250_;
}
v_reusejp_3250_:
{
size_t v_sz_3252_; size_t v___x_3253_; lean_object* v___x_269__overap_3254_; lean_object* v___x_3255_; 
v_sz_3252_ = lean_array_size(v_a_3205_);
v___x_3253_ = ((size_t)0ULL);
v___x_269__overap_3254_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3251_, v___f_3239_, v_sz_3252_, v___x_3253_, v_a_3205_);
lean_inc(v___y_3209_);
lean_inc_ref(v___y_3208_);
lean_inc(v___y_3207_);
lean_inc_ref(v___y_3206_);
v___x_3255_ = lean_apply_5(v___x_269__overap_3254_, v___y_3206_, v___y_3207_, v___y_3208_, v___y_3209_, lean_box(0));
return v___x_3255_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object* v_00_u03b1_3262_, lean_object* v_inst_3263_, lean_object* v_a_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_, lean_object* v___y_3269_){
_start:
{
lean_object* v_res_3270_; 
v_res_3270_ = l_Lean_Compiler_LCNF_Probe_toString(v_00_u03b1_3262_, v_inst_3263_, v_a_3264_, v___y_3265_, v___y_3266_, v___y_3267_, v___y_3268_);
lean_dec(v___y_3268_);
lean_dec_ref(v___y_3267_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
return v_res_3270_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object* v_data_3271_){
_start:
{
lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v___x_3277_; 
v___x_3273_ = lean_array_get_size(v_data_3271_);
v___x_3274_ = lean_unsigned_to_nat(1u);
v___x_3275_ = lean_mk_empty_array_with_capacity(v___x_3274_);
v___x_3276_ = lean_array_push(v___x_3275_, v___x_3273_);
v___x_3277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3277_, 0, v___x_3276_);
return v___x_3277_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object* v_data_3278_, lean_object* v___y_3279_){
_start:
{
lean_object* v_res_3280_; 
v_res_3280_ = l_Lean_Compiler_LCNF_Probe_count___redArg(v_data_3278_);
lean_dec_ref(v_data_3278_);
return v_res_3280_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object* v_00_u03b1_3281_, lean_object* v_data_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_, lean_object* v___y_3286_){
_start:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; 
v___x_3288_ = lean_array_get_size(v_data_3282_);
v___x_3289_ = lean_unsigned_to_nat(1u);
v___x_3290_ = lean_mk_empty_array_with_capacity(v___x_3289_);
v___x_3291_ = lean_array_push(v___x_3290_, v___x_3288_);
v___x_3292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3291_);
return v___x_3292_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object* v_00_u03b1_3293_, lean_object* v_data_3294_, lean_object* v___y_3295_, lean_object* v___y_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = l_Lean_Compiler_LCNF_Probe_count(v_00_u03b1_3293_, v_data_3294_, v___y_3295_, v___y_3296_, v___y_3297_, v___y_3298_);
lean_dec(v___y_3298_);
lean_dec_ref(v___y_3297_);
lean_dec(v___y_3296_);
lean_dec_ref(v___y_3295_);
lean_dec_ref(v_data_3294_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object* v_data_3302_){
_start:
{
lean_object* v___y_3305_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; uint8_t v___x_3313_; 
v___x_3310_ = lean_unsigned_to_nat(0u);
v___x_3311_ = lean_array_get_size(v_data_3302_);
v___x_3312_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_3313_ = lean_nat_dec_lt(v___x_3310_, v___x_3311_);
if (v___x_3313_ == 0)
{
lean_dec_ref(v_data_3302_);
v___y_3305_ = v___x_3310_;
goto v___jp_3304_;
}
else
{
lean_object* v___f_3314_; uint8_t v___x_3315_; 
v___f_3314_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0));
v___x_3315_ = lean_nat_dec_le(v___x_3311_, v___x_3311_);
if (v___x_3315_ == 0)
{
if (v___x_3313_ == 0)
{
lean_dec_ref(v_data_3302_);
v___y_3305_ = v___x_3310_;
goto v___jp_3304_;
}
else
{
size_t v___x_3316_; size_t v___x_3317_; lean_object* v___x_3318_; 
v___x_3316_ = ((size_t)0ULL);
v___x_3317_ = lean_usize_of_nat(v___x_3311_);
v___x_3318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3312_, v___f_3314_, v_data_3302_, v___x_3316_, v___x_3317_, v___x_3310_);
v___y_3305_ = v___x_3318_;
goto v___jp_3304_;
}
}
else
{
size_t v___x_3319_; size_t v___x_3320_; lean_object* v___x_3321_; 
v___x_3319_ = ((size_t)0ULL);
v___x_3320_ = lean_usize_of_nat(v___x_3311_);
v___x_3321_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3312_, v___f_3314_, v_data_3302_, v___x_3319_, v___x_3320_, v___x_3310_);
v___y_3305_ = v___x_3321_;
goto v___jp_3304_;
}
}
v___jp_3304_:
{
lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; 
v___x_3306_ = lean_unsigned_to_nat(1u);
v___x_3307_ = lean_mk_empty_array_with_capacity(v___x_3306_);
v___x_3308_ = lean_array_push(v___x_3307_, v___y_3305_);
v___x_3309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3309_, 0, v___x_3308_);
return v___x_3309_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object* v_data_3322_, lean_object* v___y_3323_){
_start:
{
lean_object* v_res_3324_; 
v_res_3324_ = l_Lean_Compiler_LCNF_Probe_sum___redArg(v_data_3322_);
return v_res_3324_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object* v_data_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
lean_object* v___y_3332_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; uint8_t v___x_3340_; 
v___x_3337_ = lean_unsigned_to_nat(0u);
v___x_3338_ = lean_array_get_size(v_data_3325_);
v___x_3339_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_3340_ = lean_nat_dec_lt(v___x_3337_, v___x_3338_);
if (v___x_3340_ == 0)
{
lean_dec_ref(v_data_3325_);
v___y_3332_ = v___x_3337_;
goto v___jp_3331_;
}
else
{
lean_object* v___f_3341_; uint8_t v___x_3342_; 
v___f_3341_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0));
v___x_3342_ = lean_nat_dec_le(v___x_3338_, v___x_3338_);
if (v___x_3342_ == 0)
{
if (v___x_3340_ == 0)
{
lean_dec_ref(v_data_3325_);
v___y_3332_ = v___x_3337_;
goto v___jp_3331_;
}
else
{
size_t v___x_3343_; size_t v___x_3344_; lean_object* v___x_3345_; 
v___x_3343_ = ((size_t)0ULL);
v___x_3344_ = lean_usize_of_nat(v___x_3338_);
v___x_3345_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3339_, v___f_3341_, v_data_3325_, v___x_3343_, v___x_3344_, v___x_3337_);
v___y_3332_ = v___x_3345_;
goto v___jp_3331_;
}
}
else
{
size_t v___x_3346_; size_t v___x_3347_; lean_object* v___x_3348_; 
v___x_3346_ = ((size_t)0ULL);
v___x_3347_ = lean_usize_of_nat(v___x_3338_);
v___x_3348_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3339_, v___f_3341_, v_data_3325_, v___x_3346_, v___x_3347_, v___x_3337_);
v___y_3332_ = v___x_3348_;
goto v___jp_3331_;
}
}
v___jp_3331_:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; 
v___x_3333_ = lean_unsigned_to_nat(1u);
v___x_3334_ = lean_mk_empty_array_with_capacity(v___x_3333_);
v___x_3335_ = lean_array_push(v___x_3334_, v___y_3332_);
v___x_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3336_, 0, v___x_3335_);
return v___x_3336_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object* v_data_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_, lean_object* v___y_3353_, lean_object* v___y_3354_){
_start:
{
lean_object* v_res_3355_; 
v_res_3355_ = l_Lean_Compiler_LCNF_Probe_sum(v_data_3349_, v___y_3350_, v___y_3351_, v___y_3352_, v___y_3353_);
lean_dec(v___y_3353_);
lean_dec_ref(v___y_3352_);
lean_dec(v___y_3351_);
lean_dec_ref(v___y_3350_);
return v_res_3355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object* v_n_3356_, lean_object* v_data_3357_){
_start:
{
lean_object* v_lower_3360_; lean_object* v_upper_3361_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; uint8_t v___x_3368_; 
v___x_3365_ = lean_array_get_size(v_data_3357_);
v___x_3366_ = lean_nat_sub(v___x_3365_, v_n_3356_);
v___x_3367_ = lean_unsigned_to_nat(0u);
v___x_3368_ = lean_nat_dec_le(v___x_3366_, v___x_3367_);
if (v___x_3368_ == 0)
{
v_lower_3360_ = v___x_3366_;
v_upper_3361_ = v___x_3365_;
goto v___jp_3359_;
}
else
{
lean_dec(v___x_3366_);
v_lower_3360_ = v___x_3367_;
v_upper_3361_ = v___x_3365_;
goto v___jp_3359_;
}
v___jp_3359_:
{
lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3362_ = l_Array_toSubarray___redArg(v_data_3357_, v_lower_3360_, v_upper_3361_);
v___x_3363_ = l_Subarray_copy___redArg(v___x_3362_);
v___x_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3363_);
return v___x_3364_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object* v_n_3369_, lean_object* v_data_3370_, lean_object* v___y_3371_){
_start:
{
lean_object* v_res_3372_; 
v_res_3372_ = l_Lean_Compiler_LCNF_Probe_tail___redArg(v_n_3369_, v_data_3370_);
lean_dec(v_n_3369_);
return v_res_3372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object* v_00_u03b1_3373_, lean_object* v_n_3374_, lean_object* v_data_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_){
_start:
{
lean_object* v_lower_3382_; lean_object* v_upper_3383_; lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; uint8_t v___x_3390_; 
v___x_3387_ = lean_array_get_size(v_data_3375_);
v___x_3388_ = lean_nat_sub(v___x_3387_, v_n_3374_);
v___x_3389_ = lean_unsigned_to_nat(0u);
v___x_3390_ = lean_nat_dec_le(v___x_3388_, v___x_3389_);
if (v___x_3390_ == 0)
{
v_lower_3382_ = v___x_3388_;
v_upper_3383_ = v___x_3387_;
goto v___jp_3381_;
}
else
{
lean_dec(v___x_3388_);
v_lower_3382_ = v___x_3389_;
v_upper_3383_ = v___x_3387_;
goto v___jp_3381_;
}
v___jp_3381_:
{
lean_object* v___x_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; 
v___x_3384_ = l_Array_toSubarray___redArg(v_data_3375_, v_lower_3382_, v_upper_3383_);
v___x_3385_ = l_Subarray_copy___redArg(v___x_3384_);
v___x_3386_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3386_, 0, v___x_3385_);
return v___x_3386_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object* v_00_u03b1_3391_, lean_object* v_n_3392_, lean_object* v_data_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_){
_start:
{
lean_object* v_res_3399_; 
v_res_3399_ = l_Lean_Compiler_LCNF_Probe_tail(v_00_u03b1_3391_, v_n_3392_, v_data_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_);
lean_dec(v___y_3397_);
lean_dec_ref(v___y_3396_);
lean_dec(v___y_3395_);
lean_dec_ref(v___y_3394_);
lean_dec(v_n_3392_);
return v_res_3399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object* v_n_3400_, lean_object* v_data_3401_){
_start:
{
lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; 
v___x_3403_ = lean_unsigned_to_nat(0u);
v___x_3404_ = l_Array_toSubarray___redArg(v_data_3401_, v___x_3403_, v_n_3400_);
v___x_3405_ = l_Subarray_copy___redArg(v___x_3404_);
v___x_3406_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3406_, 0, v___x_3405_);
return v___x_3406_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object* v_n_3407_, lean_object* v_data_3408_, lean_object* v___y_3409_){
_start:
{
lean_object* v_res_3410_; 
v_res_3410_ = l_Lean_Compiler_LCNF_Probe_head___redArg(v_n_3407_, v_data_3408_);
return v_res_3410_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object* v_00_u03b1_3411_, lean_object* v_n_3412_, lean_object* v_data_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_){
_start:
{
lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3422_; 
v___x_3419_ = lean_unsigned_to_nat(0u);
v___x_3420_ = l_Array_toSubarray___redArg(v_data_3413_, v___x_3419_, v_n_3412_);
v___x_3421_ = l_Subarray_copy___redArg(v___x_3420_);
v___x_3422_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3422_, 0, v___x_3421_);
return v___x_3422_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object* v_00_u03b1_3423_, lean_object* v_n_3424_, lean_object* v_data_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_){
_start:
{
lean_object* v_res_3431_; 
v_res_3431_ = l_Lean_Compiler_LCNF_Probe_head(v_00_u03b1_3423_, v_n_3424_, v_data_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_);
lean_dec(v___y_3429_);
lean_dec_ref(v___y_3428_);
lean_dec(v___y_3427_);
lean_dec_ref(v___y_3426_);
return v_res_3431_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object* v_probe_3437_, lean_object* v___x_3438_, lean_object* v_inst_3439_, lean_object* v___x_3440_, lean_object* v___x_3441_, lean_object* v_toMonadRef_3442_, lean_object* v___f_3443_, lean_object* v_decls_3444_, lean_object* v___y_3445_, lean_object* v___y_3446_, lean_object* v___y_3447_, lean_object* v___y_3448_){
_start:
{
lean_object* v___x_3450_; 
lean_inc(v___y_3448_);
lean_inc_ref(v___y_3447_);
lean_inc(v___y_3446_);
lean_inc_ref(v___y_3445_);
lean_inc_ref(v_decls_3444_);
v___x_3450_ = lean_apply_6(v_probe_3437_, v_decls_3444_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, lean_box(0));
if (lean_obj_tag(v___x_3450_) == 0)
{
lean_object* v_toCold_3451_; lean_object* v_options_3452_; uint8_t v_hasTrace_3453_; 
v_toCold_3451_ = lean_ctor_get(v___y_3447_, 0);
v_options_3452_ = lean_ctor_get(v_toCold_3451_, 2);
v_hasTrace_3453_ = lean_ctor_get_uint8(v_options_3452_, sizeof(void*)*1);
if (v_hasTrace_3453_ == 0)
{
lean_object* v___x_3455_; uint8_t v_isShared_3456_; uint8_t v_isSharedCheck_3460_; 
lean_dec_ref(v___f_3443_);
lean_dec_ref(v_toMonadRef_3442_);
lean_dec_ref(v___x_3441_);
lean_dec_ref(v___x_3440_);
lean_dec_ref(v_inst_3439_);
lean_dec_ref(v___x_3438_);
v_isSharedCheck_3460_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3460_ == 0)
{
lean_object* v_unused_3461_; 
v_unused_3461_ = lean_ctor_get(v___x_3450_, 0);
lean_dec(v_unused_3461_);
v___x_3455_ = v___x_3450_;
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
else
{
lean_dec(v___x_3450_);
v___x_3455_ = lean_box(0);
v_isShared_3456_ = v_isSharedCheck_3460_;
goto v_resetjp_3454_;
}
v_resetjp_3454_:
{
lean_object* v___x_3458_; 
if (v_isShared_3456_ == 0)
{
lean_ctor_set(v___x_3455_, 0, v_decls_3444_);
v___x_3458_ = v___x_3455_;
goto v_reusejp_3457_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v_decls_3444_);
v___x_3458_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3457_;
}
v_reusejp_3457_:
{
return v___x_3458_;
}
}
}
else
{
lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3499_; 
v_a_3462_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3499_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3499_ == 0)
{
v___x_3464_ = v___x_3450_;
v_isShared_3465_ = v_isSharedCheck_3499_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3450_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3499_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v_inheritedTraceOptions_3466_; lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v___x_3469_; lean_object* v___x_3470_; uint8_t v___x_3471_; 
v_inheritedTraceOptions_3466_ = lean_ctor_get(v_toCold_3451_, 11);
v___x_3467_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0));
v___x_3468_ = l_Lean_Name_mkStr2(v___x_3467_, v___x_3438_);
v___x_3469_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2));
lean_inc(v___x_3468_);
v___x_3470_ = l_Lean_Name_append(v___x_3469_, v___x_3468_);
v___x_3471_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3466_, v_options_3452_, v___x_3470_);
lean_dec(v___x_3470_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3473_; 
lean_dec(v___x_3468_);
lean_dec(v_a_3462_);
lean_dec_ref(v___f_3443_);
lean_dec_ref(v_toMonadRef_3442_);
lean_dec_ref(v___x_3441_);
lean_dec_ref(v___x_3440_);
lean_dec_ref(v_inst_3439_);
if (v_isShared_3465_ == 0)
{
lean_ctor_set(v___x_3464_, 0, v_decls_3444_);
v___x_3473_ = v___x_3464_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_decls_3444_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
else
{
lean_object* v___x_3475_; lean_object* v___x_3476_; lean_object* v___x_3477_; lean_object* v___x_3478_; lean_object* v___x_3479_; lean_object* v___x_3480_; lean_object* v___x_1021__overap_3481_; lean_object* v___x_3482_; 
lean_del_object(v___x_3464_);
v___x_3475_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3));
v___x_3476_ = lean_array_to_list(v_a_3462_);
v___x_3477_ = l_List_toString___redArg(v_inst_3439_, v___x_3476_);
v___x_3478_ = lean_string_append(v___x_3475_, v___x_3477_);
lean_dec_ref(v___x_3477_);
v___x_3479_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3479_, 0, v___x_3478_);
v___x_3480_ = l_Lean_MessageData_ofFormat(v___x_3479_);
v___x_1021__overap_3481_ = l_Lean_addTrace___redArg(v___x_3440_, v___x_3441_, v_toMonadRef_3442_, v___f_3443_, v___x_3468_, v___x_3480_);
lean_inc(v___y_3448_);
lean_inc_ref(v___y_3447_);
lean_inc(v___y_3446_);
lean_inc_ref(v___y_3445_);
v___x_3482_ = lean_apply_5(v___x_1021__overap_3481_, v___y_3445_, v___y_3446_, v___y_3447_, v___y_3448_, lean_box(0));
if (lean_obj_tag(v___x_3482_) == 0)
{
lean_object* v___x_3484_; uint8_t v_isShared_3485_; uint8_t v_isSharedCheck_3489_; 
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3489_ == 0)
{
lean_object* v_unused_3490_; 
v_unused_3490_ = lean_ctor_get(v___x_3482_, 0);
lean_dec(v_unused_3490_);
v___x_3484_ = v___x_3482_;
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
else
{
lean_dec(v___x_3482_);
v___x_3484_ = lean_box(0);
v_isShared_3485_ = v_isSharedCheck_3489_;
goto v_resetjp_3483_;
}
v_resetjp_3483_:
{
lean_object* v___x_3487_; 
if (v_isShared_3485_ == 0)
{
lean_ctor_set(v___x_3484_, 0, v_decls_3444_);
v___x_3487_ = v___x_3484_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3488_; 
v_reuseFailAlloc_3488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3488_, 0, v_decls_3444_);
v___x_3487_ = v_reuseFailAlloc_3488_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
return v___x_3487_;
}
}
}
else
{
lean_object* v_a_3491_; lean_object* v___x_3493_; uint8_t v_isShared_3494_; uint8_t v_isSharedCheck_3498_; 
lean_dec_ref(v_decls_3444_);
v_a_3491_ = lean_ctor_get(v___x_3482_, 0);
v_isSharedCheck_3498_ = !lean_is_exclusive(v___x_3482_);
if (v_isSharedCheck_3498_ == 0)
{
v___x_3493_ = v___x_3482_;
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
else
{
lean_inc(v_a_3491_);
lean_dec(v___x_3482_);
v___x_3493_ = lean_box(0);
v_isShared_3494_ = v_isSharedCheck_3498_;
goto v_resetjp_3492_;
}
v_resetjp_3492_:
{
lean_object* v___x_3496_; 
if (v_isShared_3494_ == 0)
{
v___x_3496_ = v___x_3493_;
goto v_reusejp_3495_;
}
else
{
lean_object* v_reuseFailAlloc_3497_; 
v_reuseFailAlloc_3497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3497_, 0, v_a_3491_);
v___x_3496_ = v_reuseFailAlloc_3497_;
goto v_reusejp_3495_;
}
v_reusejp_3495_:
{
return v___x_3496_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3507_; 
lean_dec_ref(v_decls_3444_);
lean_dec_ref(v___f_3443_);
lean_dec_ref(v_toMonadRef_3442_);
lean_dec_ref(v___x_3441_);
lean_dec_ref(v___x_3440_);
lean_dec_ref(v_inst_3439_);
lean_dec_ref(v___x_3438_);
v_a_3500_ = lean_ctor_get(v___x_3450_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3450_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3502_ = v___x_3450_;
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3450_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3503_ == 0)
{
v___x_3505_ = v___x_3502_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object* v_probe_3508_, lean_object* v___x_3509_, lean_object* v_inst_3510_, lean_object* v___x_3511_, lean_object* v___x_3512_, lean_object* v_toMonadRef_3513_, lean_object* v___f_3514_, lean_object* v_decls_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_, lean_object* v___y_3518_, lean_object* v___y_3519_, lean_object* v___y_3520_){
_start:
{
lean_object* v_res_3521_; 
v_res_3521_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(v_probe_3508_, v___x_3509_, v_inst_3510_, v___x_3511_, v___x_3512_, v_toMonadRef_3513_, v___f_3514_, v_decls_3515_, v___y_3516_, v___y_3517_, v___y_3518_, v___y_3519_);
lean_dec(v___y_3519_);
lean_dec_ref(v___y_3518_);
lean_dec(v___y_3517_);
lean_dec_ref(v___y_3516_);
return v_res_3521_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2(void){
_start:
{
lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___x_3524_ = l_Lean_Core_instMonadTraceCoreM;
v___x_3525_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1));
v___x_3526_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_3525_, v___x_3524_);
return v___x_3526_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3(void){
_start:
{
lean_object* v___x_3527_; lean_object* v___f_3528_; lean_object* v___x_3529_; 
v___x_3527_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2);
v___f_3528_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0));
v___x_3529_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_3528_, v___x_3527_);
return v___x_3529_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6(void){
_start:
{
lean_object* v___x_3532_; lean_object* v___x_3533_; lean_object* v___f_3534_; lean_object* v___x_3535_; 
v___x_3532_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_3533_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1));
v___f_3534_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5));
v___x_3535_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_3534_, v___x_3533_, v___x_3532_);
return v___x_3535_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7(void){
_start:
{
lean_object* v___x_3536_; lean_object* v___f_3537_; lean_object* v___f_3538_; lean_object* v___x_3539_; 
v___x_3536_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6);
v___f_3537_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0));
v___f_3538_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4));
v___x_3539_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_3538_, v___f_3537_, v___x_3536_);
return v___x_3539_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object* v_inst_3544_, uint8_t v_phase_3545_, lean_object* v_probe_3546_){
_start:
{
lean_object* v___x_3547_; lean_object* v_toApplicative_3548_; lean_object* v_toFunctor_3549_; lean_object* v_toSeq_3550_; lean_object* v_toSeqLeft_3551_; lean_object* v_toSeqRight_3552_; lean_object* v___f_3553_; lean_object* v___f_3554_; lean_object* v___f_3555_; lean_object* v___f_3556_; lean_object* v___x_3557_; lean_object* v___f_3558_; lean_object* v___f_3559_; lean_object* v___f_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v_toApplicative_3564_; lean_object* v___x_3566_; uint8_t v_isShared_3567_; uint8_t v_isSharedCheck_3601_; 
v___x_3547_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__11);
v_toApplicative_3548_ = lean_ctor_get(v___x_3547_, 0);
v_toFunctor_3549_ = lean_ctor_get(v_toApplicative_3548_, 0);
v_toSeq_3550_ = lean_ctor_get(v_toApplicative_3548_, 2);
v_toSeqLeft_3551_ = lean_ctor_get(v_toApplicative_3548_, 3);
v_toSeqRight_3552_ = lean_ctor_get(v_toApplicative_3548_, 4);
v___f_3553_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__12));
v___f_3554_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__13));
lean_inc_ref_n(v_toFunctor_3549_, 2);
v___f_3555_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3555_, 0, v_toFunctor_3549_);
v___f_3556_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3556_, 0, v_toFunctor_3549_);
v___x_3557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3557_, 0, v___f_3555_);
lean_ctor_set(v___x_3557_, 1, v___f_3556_);
lean_inc(v_toSeqRight_3552_);
v___f_3558_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3558_, 0, v_toSeqRight_3552_);
lean_inc(v_toSeqLeft_3551_);
v___f_3559_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3559_, 0, v_toSeqLeft_3551_);
lean_inc(v_toSeq_3550_);
v___f_3560_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3560_, 0, v_toSeq_3550_);
v___x_3561_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3561_, 0, v___x_3557_);
lean_ctor_set(v___x_3561_, 1, v___f_3553_);
lean_ctor_set(v___x_3561_, 2, v___f_3560_);
lean_ctor_set(v___x_3561_, 3, v___f_3559_);
lean_ctor_set(v___x_3561_, 4, v___f_3558_);
v___x_3562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3561_);
lean_ctor_set(v___x_3562_, 1, v___f_3554_);
v___x_3563_ = l_StateRefT_x27_instMonad___redArg(v___x_3562_);
v_toApplicative_3564_ = lean_ctor_get(v___x_3563_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3563_);
if (v_isSharedCheck_3601_ == 0)
{
lean_object* v_unused_3602_; 
v_unused_3602_ = lean_ctor_get(v___x_3563_, 1);
lean_dec(v_unused_3602_);
v___x_3566_ = v___x_3563_;
v_isShared_3567_ = v_isSharedCheck_3601_;
goto v_resetjp_3565_;
}
else
{
lean_inc(v_toApplicative_3564_);
lean_dec(v___x_3563_);
v___x_3566_ = lean_box(0);
v_isShared_3567_ = v_isSharedCheck_3601_;
goto v_resetjp_3565_;
}
v_resetjp_3565_:
{
lean_object* v_toFunctor_3568_; lean_object* v_toSeq_3569_; lean_object* v_toSeqLeft_3570_; lean_object* v_toSeqRight_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3599_; 
v_toFunctor_3568_ = lean_ctor_get(v_toApplicative_3564_, 0);
v_toSeq_3569_ = lean_ctor_get(v_toApplicative_3564_, 2);
v_toSeqLeft_3570_ = lean_ctor_get(v_toApplicative_3564_, 3);
v_toSeqRight_3571_ = lean_ctor_get(v_toApplicative_3564_, 4);
v_isSharedCheck_3599_ = !lean_is_exclusive(v_toApplicative_3564_);
if (v_isSharedCheck_3599_ == 0)
{
lean_object* v_unused_3600_; 
v_unused_3600_ = lean_ctor_get(v_toApplicative_3564_, 1);
lean_dec(v_unused_3600_);
v___x_3573_ = v_toApplicative_3564_;
v_isShared_3574_ = v_isSharedCheck_3599_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_toSeqRight_3571_);
lean_inc(v_toSeqLeft_3570_);
lean_inc(v_toSeq_3569_);
lean_inc(v_toFunctor_3568_);
lean_dec(v_toApplicative_3564_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3599_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___f_3575_; lean_object* v___f_3576_; lean_object* v___f_3577_; lean_object* v___f_3578_; lean_object* v___x_3579_; lean_object* v___f_3580_; lean_object* v___f_3581_; lean_object* v___f_3582_; lean_object* v___x_3584_; 
v___f_3575_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__14));
v___f_3576_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__15));
lean_inc_ref(v_toFunctor_3568_);
v___f_3577_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3577_, 0, v_toFunctor_3568_);
v___f_3578_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3578_, 0, v_toFunctor_3568_);
v___x_3579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3579_, 0, v___f_3577_);
lean_ctor_set(v___x_3579_, 1, v___f_3578_);
v___f_3580_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3580_, 0, v_toSeqRight_3571_);
v___f_3581_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3581_, 0, v_toSeqLeft_3570_);
v___f_3582_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3582_, 0, v_toSeq_3569_);
if (v_isShared_3574_ == 0)
{
lean_ctor_set(v___x_3573_, 4, v___f_3580_);
lean_ctor_set(v___x_3573_, 3, v___f_3581_);
lean_ctor_set(v___x_3573_, 2, v___f_3582_);
lean_ctor_set(v___x_3573_, 1, v___f_3575_);
lean_ctor_set(v___x_3573_, 0, v___x_3579_);
v___x_3584_ = v___x_3573_;
goto v_reusejp_3583_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v___x_3579_);
lean_ctor_set(v_reuseFailAlloc_3598_, 1, v___f_3575_);
lean_ctor_set(v_reuseFailAlloc_3598_, 2, v___f_3582_);
lean_ctor_set(v_reuseFailAlloc_3598_, 3, v___f_3581_);
lean_ctor_set(v_reuseFailAlloc_3598_, 4, v___f_3580_);
v___x_3584_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3583_;
}
v_reusejp_3583_:
{
lean_object* v___x_3586_; 
if (v_isShared_3567_ == 0)
{
lean_ctor_set(v___x_3566_, 1, v___f_3576_);
lean_ctor_set(v___x_3566_, 0, v___x_3584_);
v___x_3586_ = v___x_3566_;
goto v_reusejp_3585_;
}
else
{
lean_object* v_reuseFailAlloc_3597_; 
v_reuseFailAlloc_3597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3597_, 0, v___x_3584_);
lean_ctor_set(v_reuseFailAlloc_3597_, 1, v___f_3576_);
v___x_3586_ = v_reuseFailAlloc_3597_;
goto v_reusejp_3585_;
}
v_reusejp_3585_:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v_toMonadRef_3589_; lean_object* v___f_3590_; lean_object* v___x_3591_; uint8_t v___x_3592_; lean_object* v___x_3593_; lean_object* v___f_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; 
v___x_3587_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3);
v___x_3588_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7);
v_toMonadRef_3589_ = lean_ctor_get(v___x_3588_, 0);
v___f_3590_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8));
v___x_3591_ = lean_unsigned_to_nat(0u);
v___x_3592_ = 0;
v___x_3593_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9));
lean_inc_ref(v_toMonadRef_3589_);
v___f_3594_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_3594_, 0, v_probe_3546_);
lean_closure_set(v___f_3594_, 1, v___x_3593_);
lean_closure_set(v___f_3594_, 2, v_inst_3544_);
lean_closure_set(v___f_3594_, 3, v___x_3586_);
lean_closure_set(v___f_3594_, 4, v___x_3587_);
lean_closure_set(v___f_3594_, 5, v_toMonadRef_3589_);
lean_closure_set(v___f_3594_, 6, v___f_3590_);
v___x_3595_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10));
v___x_3596_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3596_, 0, v___x_3591_);
lean_ctor_set(v___x_3596_, 1, v___x_3595_);
lean_ctor_set(v___x_3596_, 2, v___f_3594_);
lean_ctor_set_uint8(v___x_3596_, sizeof(void*)*3, v_phase_3545_);
lean_ctor_set_uint8(v___x_3596_, sizeof(void*)*3 + 1, v_phase_3545_);
lean_ctor_set_uint8(v___x_3596_, sizeof(void*)*3 + 2, v___x_3592_);
return v___x_3596_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object* v_inst_3603_, lean_object* v_phase_3604_, lean_object* v_probe_3605_){
_start:
{
uint8_t v_phase_boxed_3606_; lean_object* v_res_3607_; 
v_phase_boxed_3606_ = lean_unbox(v_phase_3604_);
v_res_3607_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3603_, v_phase_boxed_3606_, v_probe_3605_);
return v_res_3607_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object* v_00_u03b2_3608_, lean_object* v_inst_3609_, uint8_t v_phase_3610_, lean_object* v_probe_3611_){
_start:
{
lean_object* v___x_3612_; 
v___x_3612_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3609_, v_phase_3610_, v_probe_3611_);
return v___x_3612_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object* v_00_u03b2_3613_, lean_object* v_inst_3614_, lean_object* v_phase_3615_, lean_object* v_probe_3616_){
_start:
{
uint8_t v_phase_boxed_3617_; lean_object* v_res_3618_; 
v_phase_boxed_3617_ = lean_unbox(v_phase_3615_);
v_res_3618_ = l_Lean_Compiler_LCNF_Probe_toPass(v_00_u03b2_3613_, v_inst_3614_, v_phase_boxed_3617_, v_probe_3616_);
return v_res_3618_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3677_; lean_object* v___x_3678_; lean_object* v___x_3679_; 
v___x_3677_ = lean_unsigned_to_nat(4008565020u);
v___x_3678_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3679_ = l_Lean_Name_num___override(v___x_3678_, v___x_3677_);
return v___x_3679_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3681_; lean_object* v___x_3682_; lean_object* v___x_3683_; 
v___x_3681_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3682_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3683_ = l_Lean_Name_str___override(v___x_3682_, v___x_3681_);
return v___x_3683_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3685_; lean_object* v___x_3686_; lean_object* v___x_3687_; 
v___x_3685_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3686_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3687_ = l_Lean_Name_str___override(v___x_3686_, v___x_3685_);
return v___x_3687_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3688_; lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3688_ = lean_unsigned_to_nat(2u);
v___x_3689_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3690_ = l_Lean_Name_num___override(v___x_3689_, v___x_3688_);
return v___x_3690_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3692_; uint8_t v___x_3693_; lean_object* v___x_3694_; lean_object* v___x_3695_; 
v___x_3692_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3693_ = 1;
v___x_3694_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3695_ = l_Lean_registerTraceClass(v___x_3692_, v___x_3693_, v___x_3694_);
return v___x_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2____boxed(lean_object* v___y_3696_){
_start:
{
lean_object* v_res_3697_; 
v_res_3697_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
return v_res_3697_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Probing(builtin);
}
#ifdef __cplusplus
}
#endif
