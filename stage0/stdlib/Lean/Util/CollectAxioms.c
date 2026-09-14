// Lean compiler output
// Module: Lean.Util.CollectAxioms
// Imports: public import Lean.MonadEnv
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
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_toArray(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* lean_environment_find(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6_value;
static lean_once_cell_t l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Lean.Util.CollectAxioms"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0_value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Util.CollectAxioms.0.Lean.CollectAxioms.collectAndGet"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1_value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "collectAndGet: '"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2_value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "' not in seen after collect"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0 = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value;
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + sizeof(size_t)*1, .m_other = 0, .m_tag = 0}, .m_objs = {(lean_object*)(size_t)(0ULL)}};
LEAN_EXPORT const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Util"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__7_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__8_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(44, 20, 155, 62, 160, 30, 19, 156)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "CollectAxioms"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__9_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__10_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(163, 55, 253, 35, 47, 204, 39, 222)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__11_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(110, 123, 114, 100, 179, 32, 115, 58)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__13_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(151, 81, 169, 218, 186, 106, 123, 199)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "exportedAxiomsExt"};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__14_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__15_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(192, 165, 200, 187, 116, 224, 61, 196)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState___closed__0_value)} };
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*8 + 0, .m_other = 8, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__16_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__17_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__12_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__18_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value)}};
static const lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt;
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_collectAxioms(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = l_Lean_NameSet_empty;
v___x_2_ = lean_box(1);
v___x_3_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3_, 0, v___x_2_);
lean_ctor_set(v___x_3_, 1, v___x_1_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(lean_object* v_env_4_, lean_object* v_x_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v_fst_8_; 
v___x_6_ = lean_obj_once(&l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0, &l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0_once, _init_l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg___closed__0);
v___x_7_ = lean_apply_2(v_x_5_, v_env_4_, v___x_6_);
v_fst_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc(v_fst_8_);
lean_dec_ref(v___x_7_);
return v_fst_8_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM(lean_object* v_00_u03b1_9_, lean_object* v_env_10_, lean_object* v_x_11_){
_start:
{
lean_object* v___x_12_; 
v___x_12_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(v_env_10_, v_x_11_);
return v___x_12_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(lean_object* v_as_13_, size_t v_i_14_, size_t v_stop_15_, lean_object* v_b_16_){
_start:
{
uint8_t v___x_17_; 
v___x_17_ = lean_usize_dec_eq(v_i_14_, v_stop_15_);
if (v___x_17_ == 0)
{
lean_object* v___x_18_; lean_object* v___x_19_; size_t v___x_20_; size_t v___x_21_; 
v___x_18_ = lean_array_uget_borrowed(v_as_13_, v_i_14_);
lean_inc(v___x_18_);
v___x_19_ = l_Lean_NameSet_insert(v_b_16_, v___x_18_);
v___x_20_ = ((size_t)1ULL);
v___x_21_ = lean_usize_add(v_i_14_, v___x_20_);
v_i_14_ = v___x_21_;
v_b_16_ = v___x_19_;
goto _start;
}
else
{
return v_b_16_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0___boxed(lean_object* v_as_23_, lean_object* v_i_24_, lean_object* v_stop_25_, lean_object* v_b_26_){
_start:
{
size_t v_i_boxed_27_; size_t v_stop_boxed_28_; lean_object* v_res_29_; 
v_i_boxed_27_ = lean_unbox_usize(v_i_24_);
lean_dec(v_i_24_);
v_stop_boxed_28_ = lean_unbox_usize(v_stop_25_);
lean_dec(v_stop_25_);
v_res_29_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(v_as_23_, v_i_boxed_27_, v_stop_boxed_28_, v_b_26_);
lean_dec_ref(v_as_23_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(lean_object* v_s_30_, lean_object* v_axs_31_){
_start:
{
lean_object* v___x_32_; lean_object* v___x_33_; uint8_t v___x_34_; 
v___x_32_ = lean_unsigned_to_nat(0u);
v___x_33_ = lean_array_get_size(v_axs_31_);
v___x_34_ = lean_nat_dec_lt(v___x_32_, v___x_33_);
if (v___x_34_ == 0)
{
return v_s_30_;
}
else
{
uint8_t v___x_35_; 
v___x_35_ = lean_nat_dec_le(v___x_33_, v___x_33_);
if (v___x_35_ == 0)
{
if (v___x_34_ == 0)
{
return v_s_30_;
}
else
{
size_t v___x_36_; size_t v___x_37_; lean_object* v___x_38_; 
v___x_36_ = ((size_t)0ULL);
v___x_37_ = lean_usize_of_nat(v___x_33_);
v___x_38_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(v_axs_31_, v___x_36_, v___x_37_, v_s_30_);
return v___x_38_;
}
}
else
{
size_t v___x_39_; size_t v___x_40_; lean_object* v___x_41_; 
v___x_39_ = ((size_t)0ULL);
v___x_40_ = lean_usize_of_nat(v___x_33_);
v___x_41_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray_spec__0(v_axs_31_, v___x_39_, v___x_40_, v_s_30_);
return v___x_41_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray___boxed(lean_object* v_s_42_, lean_object* v_axs_43_){
_start:
{
lean_object* v_res_44_; 
v_res_44_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_s_42_, v_axs_43_);
lean_dec_ref(v_axs_43_);
return v_res_44_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___redArg(lean_object* v_hi_45_, lean_object* v_pivot_46_, lean_object* v_as_47_, lean_object* v_i_48_, lean_object* v_k_49_){
_start:
{
uint8_t v___x_50_; 
v___x_50_ = lean_nat_dec_lt(v_k_49_, v_hi_45_);
if (v___x_50_ == 0)
{
lean_object* v___x_51_; lean_object* v___x_52_; 
lean_dec(v_k_49_);
v___x_51_ = lean_array_fswap(v_as_47_, v_i_48_, v_hi_45_);
v___x_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_52_, 0, v_i_48_);
lean_ctor_set(v___x_52_, 1, v___x_51_);
return v___x_52_;
}
else
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = lean_array_fget_borrowed(v_as_47_, v_k_49_);
v___x_54_ = l_Lean_Name_lt(v___x_53_, v_pivot_46_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; lean_object* v___x_56_; 
v___x_55_ = lean_unsigned_to_nat(1u);
v___x_56_ = lean_nat_add(v_k_49_, v___x_55_);
lean_dec(v_k_49_);
v_k_49_ = v___x_56_;
goto _start;
}
else
{
lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; 
v___x_58_ = lean_array_fswap(v_as_47_, v_i_48_, v_k_49_);
v___x_59_ = lean_unsigned_to_nat(1u);
v___x_60_ = lean_nat_add(v_i_48_, v___x_59_);
lean_dec(v_i_48_);
v___x_61_ = lean_nat_add(v_k_49_, v___x_59_);
lean_dec(v_k_49_);
v_as_47_ = v___x_58_;
v_i_48_ = v___x_60_;
v_k_49_ = v___x_61_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___redArg___boxed(lean_object* v_hi_63_, lean_object* v_pivot_64_, lean_object* v_as_65_, lean_object* v_i_66_, lean_object* v_k_67_){
_start:
{
lean_object* v_res_68_; 
v_res_68_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___redArg(v_hi_63_, v_pivot_64_, v_as_65_, v_i_66_, v_k_67_);
lean_dec(v_pivot_64_);
lean_dec(v_hi_63_);
return v_res_68_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(lean_object* v_n_69_, lean_object* v_as_70_, lean_object* v_lo_71_, lean_object* v_hi_72_){
_start:
{
lean_object* v___y_74_; uint8_t v___x_84_; 
v___x_84_ = lean_nat_dec_lt(v_lo_71_, v_hi_72_);
if (v___x_84_ == 0)
{
lean_dec(v_lo_71_);
return v_as_70_;
}
else
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v_mid_87_; lean_object* v___y_89_; lean_object* v___y_95_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_85_ = lean_nat_add(v_lo_71_, v_hi_72_);
v___x_86_ = lean_unsigned_to_nat(1u);
v_mid_87_ = lean_nat_shiftr(v___x_85_, v___x_86_);
lean_dec(v___x_85_);
v___x_100_ = lean_array_fget_borrowed(v_as_70_, v_mid_87_);
v___x_101_ = lean_array_fget_borrowed(v_as_70_, v_lo_71_);
v___x_102_ = l_Lean_Name_lt(v___x_100_, v___x_101_);
if (v___x_102_ == 0)
{
v___y_95_ = v_as_70_;
goto v___jp_94_;
}
else
{
lean_object* v___x_103_; 
v___x_103_ = lean_array_fswap(v_as_70_, v_lo_71_, v_mid_87_);
v___y_95_ = v___x_103_;
goto v___jp_94_;
}
v___jp_88_:
{
lean_object* v___x_90_; lean_object* v___x_91_; uint8_t v___x_92_; 
v___x_90_ = lean_array_fget_borrowed(v___y_89_, v_mid_87_);
v___x_91_ = lean_array_fget_borrowed(v___y_89_, v_hi_72_);
v___x_92_ = l_Lean_Name_lt(v___x_90_, v___x_91_);
if (v___x_92_ == 0)
{
lean_dec(v_mid_87_);
v___y_74_ = v___y_89_;
goto v___jp_73_;
}
else
{
lean_object* v___x_93_; 
v___x_93_ = lean_array_fswap(v___y_89_, v_mid_87_, v_hi_72_);
lean_dec(v_mid_87_);
v___y_74_ = v___x_93_;
goto v___jp_73_;
}
}
v___jp_94_:
{
lean_object* v___x_96_; lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_96_ = lean_array_fget_borrowed(v___y_95_, v_hi_72_);
v___x_97_ = lean_array_fget_borrowed(v___y_95_, v_lo_71_);
v___x_98_ = l_Lean_Name_lt(v___x_96_, v___x_97_);
if (v___x_98_ == 0)
{
v___y_89_ = v___y_95_;
goto v___jp_88_;
}
else
{
lean_object* v___x_99_; 
v___x_99_ = lean_array_fswap(v___y_95_, v_lo_71_, v_hi_72_);
v___y_89_ = v___x_99_;
goto v___jp_88_;
}
}
}
v___jp_73_:
{
lean_object* v_pivot_75_; lean_object* v___x_76_; lean_object* v_fst_77_; lean_object* v_snd_78_; uint8_t v___x_79_; 
v_pivot_75_ = lean_array_fget(v___y_74_, v_hi_72_);
lean_inc_n(v_lo_71_, 2);
v___x_76_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___redArg(v_hi_72_, v_pivot_75_, v___y_74_, v_lo_71_, v_lo_71_);
lean_dec(v_pivot_75_);
v_fst_77_ = lean_ctor_get(v___x_76_, 0);
lean_inc(v_fst_77_);
v_snd_78_ = lean_ctor_get(v___x_76_, 1);
lean_inc(v_snd_78_);
lean_dec_ref(v___x_76_);
v___x_79_ = lean_nat_dec_le(v_hi_72_, v_fst_77_);
if (v___x_79_ == 0)
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; 
v___x_80_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(v_n_69_, v_snd_78_, v_lo_71_, v_fst_77_);
v___x_81_ = lean_unsigned_to_nat(1u);
v___x_82_ = lean_nat_add(v_fst_77_, v___x_81_);
lean_dec(v_fst_77_);
v_as_70_ = v___x_80_;
v_lo_71_ = v___x_82_;
goto _start;
}
else
{
lean_dec(v_fst_77_);
lean_dec(v_lo_71_);
return v_snd_78_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg___boxed(lean_object* v_n_104_, lean_object* v_as_105_, lean_object* v_lo_106_, lean_object* v_hi_107_){
_start:
{
lean_object* v_res_108_; 
v_res_108_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(v_n_104_, v_as_105_, v_lo_106_, v_hi_107_);
lean_dec(v_hi_107_);
lean_dec(v_n_104_);
return v_res_108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(lean_object* v_extFind_x3f_111_, lean_object* v_as_112_, size_t v_i_113_, size_t v_stop_114_, lean_object* v_b_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
uint8_t v___x_118_; 
v___x_118_ = lean_usize_dec_eq(v_i_113_, v_stop_114_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v_fst_121_; lean_object* v_snd_122_; size_t v___x_123_; size_t v___x_124_; 
v___x_119_ = lean_array_uget_borrowed(v_as_112_, v_i_113_);
lean_inc(v___x_119_);
lean_inc_ref(v_extFind_x3f_111_);
v___x_120_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_111_, v___x_119_, v___y_116_, v___y_117_);
v_fst_121_ = lean_ctor_get(v___x_120_, 0);
lean_inc(v_fst_121_);
v_snd_122_ = lean_ctor_get(v___x_120_, 1);
lean_inc(v_snd_122_);
lean_dec_ref(v___x_120_);
v___x_123_ = ((size_t)1ULL);
v___x_124_ = lean_usize_add(v_i_113_, v___x_123_);
v_i_113_ = v___x_124_;
v_b_115_ = v_fst_121_;
v___y_117_ = v_snd_122_;
goto _start;
}
else
{
lean_object* v___x_126_; 
lean_dec_ref(v_extFind_x3f_111_);
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v_b_115_);
lean_ctor_set(v___x_126_, 1, v___y_117_);
return v___x_126_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(lean_object* v_extFind_x3f_127_, lean_object* v_e_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_131_ = l_Lean_Expr_getUsedConstants(v_e_128_);
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = lean_array_get_size(v___x_131_);
v___x_134_ = lean_box(0);
v___x_135_ = lean_nat_dec_lt(v___x_132_, v___x_133_);
if (v___x_135_ == 0)
{
lean_object* v___x_136_; 
lean_dec_ref(v___x_131_);
lean_dec_ref(v_extFind_x3f_127_);
v___x_136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_136_, 0, v___x_134_);
lean_ctor_set(v___x_136_, 1, v___y_130_);
return v___x_136_;
}
else
{
uint8_t v___x_137_; 
v___x_137_ = lean_nat_dec_le(v___x_133_, v___x_133_);
if (v___x_137_ == 0)
{
if (v___x_135_ == 0)
{
lean_object* v___x_138_; 
lean_dec_ref(v___x_131_);
lean_dec_ref(v_extFind_x3f_127_);
v___x_138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_138_, 0, v___x_134_);
lean_ctor_set(v___x_138_, 1, v___y_130_);
return v___x_138_;
}
else
{
size_t v___x_139_; size_t v___x_140_; lean_object* v___x_141_; 
v___x_139_ = ((size_t)0ULL);
v___x_140_ = lean_usize_of_nat(v___x_133_);
v___x_141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(v_extFind_x3f_127_, v___x_131_, v___x_139_, v___x_140_, v___x_134_, v___y_129_, v___y_130_);
lean_dec_ref(v___x_131_);
return v___x_141_;
}
}
else
{
size_t v___x_142_; size_t v___x_143_; lean_object* v___x_144_; 
v___x_142_ = ((size_t)0ULL);
v___x_143_ = lean_usize_of_nat(v___x_133_);
v___x_144_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(v_extFind_x3f_127_, v___x_131_, v___x_142_, v___x_143_, v___x_134_, v___y_129_, v___y_130_);
lean_dec_ref(v___x_131_);
return v___x_144_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(lean_object* v_extFind_x3f_145_, lean_object* v_c_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v___x_149_; 
lean_inc_ref(v_extFind_x3f_145_);
lean_inc(v_c_146_);
lean_inc_ref(v___y_147_);
v___x_149_ = lean_apply_2(v_extFind_x3f_145_, v___y_147_, v_c_146_);
if (lean_obj_tag(v___x_149_) == 1)
{
lean_object* v_val_150_; lean_object* v_seen_151_; lean_object* v_axioms_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_163_; 
lean_dec_ref(v_extFind_x3f_145_);
v_val_150_ = lean_ctor_get(v___x_149_, 0);
lean_inc(v_val_150_);
lean_dec_ref_known(v___x_149_, 1);
v_seen_151_ = lean_ctor_get(v___y_148_, 0);
v_axioms_152_ = lean_ctor_get(v___y_148_, 1);
v_isSharedCheck_163_ = !lean_is_exclusive(v___y_148_);
if (v_isSharedCheck_163_ == 0)
{
v___x_154_ = v___y_148_;
v_isShared_155_ = v_isSharedCheck_163_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_axioms_152_);
lean_inc(v_seen_151_);
lean_dec(v___y_148_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_163_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_159_; 
lean_inc(v_val_150_);
v___x_156_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_c_146_, v_val_150_, v_seen_151_);
v___x_157_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_axioms_152_, v_val_150_);
lean_dec(v_val_150_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 1, v___x_157_);
lean_ctor_set(v___x_154_, 0, v___x_156_);
v___x_159_ = v___x_154_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_156_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v___x_157_);
v___x_159_ = v_reuseFailAlloc_162_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_160_ = lean_box(0);
v___x_161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
lean_ctor_set(v___x_161_, 1, v___x_159_);
return v___x_161_;
}
}
}
else
{
lean_object* v_seen_164_; lean_object* v_axioms_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_256_; 
lean_dec(v___x_149_);
v_seen_164_ = lean_ctor_get(v___y_148_, 0);
v_axioms_165_ = lean_ctor_get(v___y_148_, 1);
v_isSharedCheck_256_ = !lean_is_exclusive(v___y_148_);
if (v_isSharedCheck_256_ == 0)
{
v___x_167_ = v___y_148_;
v_isShared_168_ = v_isSharedCheck_256_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_axioms_165_);
lean_inc(v_seen_164_);
lean_dec(v___y_148_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_256_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v_seen_170_; lean_object* v___y_171_; lean_object* v___y_180_; lean_object* v___y_181_; lean_object* v___y_182_; lean_object* v___y_183_; lean_object* v___y_184_; lean_object* v___y_188_; lean_object* v___y_189_; lean_object* v___y_190_; lean_object* v___y_191_; lean_object* v___y_192_; lean_object* v___y_195_; lean_object* v_seen_196_; lean_object* v_axioms_197_; lean_object* v___y_206_; lean_object* v___x_209_; 
v___x_209_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_seen_164_, v_c_146_);
if (lean_obj_tag(v___x_209_) == 1)
{
lean_object* v_val_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; 
lean_del_object(v___x_167_);
lean_dec(v_c_146_);
lean_dec_ref(v_extFind_x3f_145_);
v_val_210_ = lean_ctor_get(v___x_209_, 0);
lean_inc(v_val_210_);
lean_dec_ref_known(v___x_209_, 1);
v___x_211_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_axioms_165_, v_val_210_);
lean_dec(v_val_210_);
v___x_212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_212_, 0, v_seen_164_);
lean_ctor_set(v___x_212_, 1, v___x_211_);
v___x_213_ = lean_box(0);
v___x_214_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_214_, 0, v___x_213_);
lean_ctor_set(v___x_214_, 1, v___x_212_);
return v___x_214_;
}
else
{
lean_object* v_checked_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; 
lean_dec(v___x_209_);
v_checked_215_ = lean_ctor_get(v___y_147_, 2);
v___x_216_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0));
lean_inc_n(v_c_146_, 2);
v___x_217_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_c_146_, v___x_216_, v_seen_164_);
v___x_218_ = l_Lean_NameSet_empty;
lean_inc(v___x_217_);
v___x_219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_219_, 0, v___x_217_);
lean_ctor_set(v___x_219_, 1, v___x_218_);
lean_inc_ref(v_checked_215_);
v___x_220_ = lean_task_get_own(v_checked_215_);
v___x_221_ = lean_environment_find(v___x_220_, v_c_146_);
if (lean_obj_tag(v___x_221_) == 0)
{
lean_dec_ref(v_extFind_x3f_145_);
v___y_195_ = v___x_219_;
v_seen_196_ = v___x_217_;
v_axioms_197_ = v___x_218_;
goto v___jp_194_;
}
else
{
lean_object* v_val_222_; 
v_val_222_ = lean_ctor_get(v___x_221_, 0);
lean_inc(v_val_222_);
lean_dec_ref_known(v___x_221_, 1);
switch(lean_obj_tag(v_val_222_))
{
case 0:
{
lean_object* v_val_223_; lean_object* v_toConstantVal_224_; lean_object* v_type_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v_snd_229_; 
lean_dec_ref_known(v___x_219_, 2);
v_val_223_ = lean_ctor_get(v_val_222_, 0);
lean_inc_ref(v_val_223_);
lean_dec_ref_known(v_val_222_, 1);
v_toConstantVal_224_ = lean_ctor_get(v_val_223_, 0);
lean_inc_ref(v_toConstantVal_224_);
lean_dec_ref(v_val_223_);
v_type_225_ = lean_ctor_get(v_toConstantVal_224_, 2);
lean_inc_ref(v_type_225_);
lean_dec_ref(v_toConstantVal_224_);
lean_inc(v_c_146_);
v___x_226_ = l_Lean_NameSet_insert(v___x_218_, v_c_146_);
v___x_227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_227_, 0, v___x_217_);
lean_ctor_set(v___x_227_, 1, v___x_226_);
v___x_228_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_145_, v_type_225_, v___y_147_, v___x_227_);
v_snd_229_ = lean_ctor_get(v___x_228_, 1);
lean_inc(v_snd_229_);
lean_dec_ref(v___x_228_);
v___y_206_ = v_snd_229_;
goto v___jp_205_;
}
case 4:
{
lean_dec_ref_known(v_val_222_, 1);
lean_dec_ref(v_extFind_x3f_145_);
v___y_195_ = v___x_219_;
v_seen_196_ = v___x_217_;
v_axioms_197_ = v___x_218_;
goto v___jp_194_;
}
case 5:
{
lean_object* v_val_230_; lean_object* v_toConstantVal_231_; lean_object* v_ctors_232_; lean_object* v_type_233_; lean_object* v___x_234_; lean_object* v_snd_235_; lean_object* v___x_236_; lean_object* v_snd_237_; 
lean_dec(v___x_217_);
v_val_230_ = lean_ctor_get(v_val_222_, 0);
lean_inc_ref(v_val_230_);
lean_dec_ref_known(v_val_222_, 1);
v_toConstantVal_231_ = lean_ctor_get(v_val_230_, 0);
lean_inc_ref(v_toConstantVal_231_);
v_ctors_232_ = lean_ctor_get(v_val_230_, 4);
lean_inc(v_ctors_232_);
lean_dec_ref(v_val_230_);
v_type_233_ = lean_ctor_get(v_toConstantVal_231_, 2);
lean_inc_ref(v_type_233_);
lean_dec_ref(v_toConstantVal_231_);
lean_inc_ref(v_extFind_x3f_145_);
v___x_234_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_145_, v_type_233_, v___y_147_, v___x_219_);
v_snd_235_ = lean_ctor_get(v___x_234_, 1);
lean_inc(v_snd_235_);
lean_dec_ref(v___x_234_);
v___x_236_ = l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2(v_extFind_x3f_145_, v_ctors_232_, v___y_147_, v_snd_235_);
v_snd_237_ = lean_ctor_get(v___x_236_, 1);
lean_inc(v_snd_237_);
lean_dec_ref(v___x_236_);
v___y_206_ = v_snd_237_;
goto v___jp_205_;
}
case 6:
{
lean_object* v_val_238_; lean_object* v_toConstantVal_239_; lean_object* v_type_240_; lean_object* v___x_241_; lean_object* v_snd_242_; 
lean_dec(v___x_217_);
v_val_238_ = lean_ctor_get(v_val_222_, 0);
lean_inc_ref(v_val_238_);
lean_dec_ref_known(v_val_222_, 1);
v_toConstantVal_239_ = lean_ctor_get(v_val_238_, 0);
lean_inc_ref(v_toConstantVal_239_);
lean_dec_ref(v_val_238_);
v_type_240_ = lean_ctor_get(v_toConstantVal_239_, 2);
lean_inc_ref(v_type_240_);
lean_dec_ref(v_toConstantVal_239_);
v___x_241_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_145_, v_type_240_, v___y_147_, v___x_219_);
v_snd_242_ = lean_ctor_get(v___x_241_, 1);
lean_inc(v_snd_242_);
lean_dec_ref(v___x_241_);
v___y_206_ = v_snd_242_;
goto v___jp_205_;
}
case 7:
{
lean_object* v_val_243_; lean_object* v_toConstantVal_244_; lean_object* v_type_245_; lean_object* v___x_246_; lean_object* v_snd_247_; 
lean_dec(v___x_217_);
v_val_243_ = lean_ctor_get(v_val_222_, 0);
lean_inc_ref(v_val_243_);
lean_dec_ref_known(v_val_222_, 1);
v_toConstantVal_244_ = lean_ctor_get(v_val_243_, 0);
lean_inc_ref(v_toConstantVal_244_);
lean_dec_ref(v_val_243_);
v_type_245_ = lean_ctor_get(v_toConstantVal_244_, 2);
lean_inc_ref(v_type_245_);
lean_dec_ref(v_toConstantVal_244_);
v___x_246_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_145_, v_type_245_, v___y_147_, v___x_219_);
v_snd_247_ = lean_ctor_get(v___x_246_, 1);
lean_inc(v_snd_247_);
lean_dec_ref(v___x_246_);
v___y_206_ = v_snd_247_;
goto v___jp_205_;
}
default: 
{
lean_object* v_val_248_; lean_object* v_toConstantVal_249_; lean_object* v_value_250_; lean_object* v_type_251_; lean_object* v___x_252_; lean_object* v_snd_253_; lean_object* v___x_254_; lean_object* v_snd_255_; 
lean_dec(v___x_217_);
v_val_248_ = lean_ctor_get(v_val_222_, 0);
lean_inc_ref(v_val_248_);
lean_dec(v_val_222_);
v_toConstantVal_249_ = lean_ctor_get(v_val_248_, 0);
lean_inc_ref(v_toConstantVal_249_);
v_value_250_ = lean_ctor_get(v_val_248_, 1);
lean_inc_ref(v_value_250_);
lean_dec_ref(v_val_248_);
v_type_251_ = lean_ctor_get(v_toConstantVal_249_, 2);
lean_inc_ref(v_type_251_);
lean_dec_ref(v_toConstantVal_249_);
lean_inc_ref(v_extFind_x3f_145_);
v___x_252_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_145_, v_type_251_, v___y_147_, v___x_219_);
v_snd_253_ = lean_ctor_get(v___x_252_, 1);
lean_inc(v_snd_253_);
lean_dec_ref(v___x_252_);
v___x_254_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_145_, v_value_250_, v___y_147_, v_snd_253_);
v_snd_255_ = lean_ctor_get(v___x_254_, 1);
lean_inc(v_snd_255_);
lean_dec_ref(v___x_254_);
v___y_206_ = v_snd_255_;
goto v___jp_205_;
}
}
}
}
v___jp_169_:
{
lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_176_; 
v___x_172_ = lean_box(0);
lean_inc_ref(v___y_171_);
v___x_173_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_c_146_, v___y_171_, v_seen_170_);
v___x_174_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_insertArray(v_axioms_165_, v___y_171_);
lean_dec_ref(v___y_171_);
if (v_isShared_168_ == 0)
{
lean_ctor_set(v___x_167_, 1, v___x_174_);
lean_ctor_set(v___x_167_, 0, v___x_173_);
v___x_176_ = v___x_167_;
goto v_reusejp_175_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v___x_173_);
lean_ctor_set(v_reuseFailAlloc_178_, 1, v___x_174_);
v___x_176_ = v_reuseFailAlloc_178_;
goto v_reusejp_175_;
}
v_reusejp_175_:
{
lean_object* v___x_177_; 
v___x_177_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_172_);
lean_ctor_set(v___x_177_, 1, v___x_176_);
return v___x_177_;
}
}
v___jp_179_:
{
lean_object* v_seen_185_; lean_object* v___x_186_; 
v_seen_185_ = lean_ctor_get(v___y_181_, 0);
lean_inc(v_seen_185_);
lean_dec_ref(v___y_181_);
v___x_186_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(v___y_182_, v___y_180_, v___y_183_, v___y_184_);
lean_dec(v___y_184_);
lean_dec(v___y_182_);
v_seen_170_ = v_seen_185_;
v___y_171_ = v___x_186_;
goto v___jp_169_;
}
v___jp_187_:
{
uint8_t v___x_193_; 
v___x_193_ = lean_nat_dec_le(v___y_192_, v___y_189_);
if (v___x_193_ == 0)
{
lean_dec(v___y_189_);
lean_inc(v___y_192_);
v___y_180_ = v___y_188_;
v___y_181_ = v___y_190_;
v___y_182_ = v___y_191_;
v___y_183_ = v___y_192_;
v___y_184_ = v___y_192_;
goto v___jp_179_;
}
else
{
v___y_180_ = v___y_188_;
v___y_181_ = v___y_190_;
v___y_182_ = v___y_191_;
v___y_183_ = v___y_192_;
v___y_184_ = v___y_189_;
goto v___jp_179_;
}
}
v___jp_194_:
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; uint8_t v___x_201_; 
v___x_198_ = l_Lean_NameSet_toArray(v_axioms_197_);
v___x_199_ = lean_array_get_size(v___x_198_);
v___x_200_ = lean_unsigned_to_nat(0u);
v___x_201_ = lean_nat_dec_eq(v___x_199_, v___x_200_);
if (v___x_201_ == 0)
{
lean_object* v___x_202_; lean_object* v___x_203_; uint8_t v___x_204_; 
lean_dec(v_seen_196_);
v___x_202_ = lean_unsigned_to_nat(1u);
v___x_203_ = lean_nat_sub(v___x_199_, v___x_202_);
v___x_204_ = lean_nat_dec_le(v___x_200_, v___x_203_);
if (v___x_204_ == 0)
{
lean_inc(v___x_203_);
v___y_188_ = v___x_198_;
v___y_189_ = v___x_203_;
v___y_190_ = v___y_195_;
v___y_191_ = v___x_199_;
v___y_192_ = v___x_203_;
goto v___jp_187_;
}
else
{
v___y_188_ = v___x_198_;
v___y_189_ = v___x_203_;
v___y_190_ = v___y_195_;
v___y_191_ = v___x_199_;
v___y_192_ = v___x_200_;
goto v___jp_187_;
}
}
else
{
lean_dec_ref(v___y_195_);
v_seen_170_ = v_seen_196_;
v___y_171_ = v___x_198_;
goto v___jp_169_;
}
}
v___jp_205_:
{
lean_object* v_seen_207_; lean_object* v_axioms_208_; 
v_seen_207_ = lean_ctor_get(v___y_206_, 0);
lean_inc(v_seen_207_);
v_axioms_208_ = lean_ctor_get(v___y_206_, 1);
lean_inc(v_axioms_208_);
v___y_195_ = v___y_206_;
v_seen_196_ = v_seen_207_;
v_axioms_197_ = v_axioms_208_;
goto v___jp_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2(lean_object* v_extFind_x3f_257_, lean_object* v_as_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
if (lean_obj_tag(v_as_258_) == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; 
lean_dec_ref(v_extFind_x3f_257_);
v___x_261_ = lean_box(0);
v___x_262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_262_, 0, v___x_261_);
lean_ctor_set(v___x_262_, 1, v___y_260_);
return v___x_262_;
}
else
{
lean_object* v_head_263_; lean_object* v_tail_264_; lean_object* v___x_265_; lean_object* v_snd_266_; 
v_head_263_ = lean_ctor_get(v_as_258_, 0);
lean_inc(v_head_263_);
v_tail_264_ = lean_ctor_get(v_as_258_, 1);
lean_inc(v_tail_264_);
lean_dec_ref_known(v_as_258_, 2);
lean_inc_ref(v_extFind_x3f_257_);
v___x_265_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_257_, v_head_263_, v___y_259_, v___y_260_);
v_snd_266_ = lean_ctor_get(v___x_265_, 1);
lean_inc(v_snd_266_);
lean_dec_ref(v___x_265_);
v_as_258_ = v_tail_264_;
v___y_260_ = v_snd_266_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2___boxed(lean_object* v_extFind_x3f_268_, lean_object* v_as_269_, lean_object* v___y_270_, lean_object* v___y_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_List_forM___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__2(v_extFind_x3f_268_, v_as_269_, v___y_270_, v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0___boxed(lean_object* v_extFind_x3f_273_, lean_object* v_as_274_, lean_object* v_i_275_, lean_object* v_stop_276_, lean_object* v_b_277_, lean_object* v___y_278_, lean_object* v___y_279_){
_start:
{
size_t v_i_boxed_280_; size_t v_stop_boxed_281_; lean_object* v_res_282_; 
v_i_boxed_280_ = lean_unbox_usize(v_i_275_);
lean_dec(v_i_275_);
v_stop_boxed_281_ = lean_unbox_usize(v_stop_276_);
lean_dec(v_stop_276_);
v_res_282_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__0(v_extFind_x3f_273_, v_as_274_, v_i_boxed_280_, v_stop_boxed_281_, v_b_277_, v___y_278_, v___y_279_);
lean_dec_ref(v___y_278_);
lean_dec_ref(v_as_274_);
return v_res_282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0___boxed(lean_object* v_extFind_x3f_283_, lean_object* v_e_284_, lean_object* v___y_285_, lean_object* v___y_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___lam__0(v_extFind_x3f_283_, v_e_284_, v___y_285_, v___y_286_);
lean_dec_ref(v___y_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___boxed(lean_object* v_extFind_x3f_288_, lean_object* v_c_289_, lean_object* v___y_290_, lean_object* v___y_291_){
_start:
{
lean_object* v_res_292_; 
v_res_292_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_288_, v_c_289_, v___y_290_, v___y_291_);
lean_dec_ref(v___y_290_);
return v_res_292_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1(lean_object* v_n_293_, lean_object* v_as_294_, lean_object* v_lo_295_, lean_object* v_hi_296_, lean_object* v_w_297_, lean_object* v_hlo_298_, lean_object* v_hhi_299_){
_start:
{
lean_object* v___x_300_; 
v___x_300_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___redArg(v_n_293_, v_as_294_, v_lo_295_, v_hi_296_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1___boxed(lean_object* v_n_301_, lean_object* v_as_302_, lean_object* v_lo_303_, lean_object* v_hi_304_, lean_object* v_w_305_, lean_object* v_hlo_306_, lean_object* v_hhi_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1(v_n_301_, v_as_302_, v_lo_303_, v_hi_304_, v_w_305_, v_hlo_306_, v_hhi_307_);
lean_dec(v_hi_304_);
lean_dec(v_n_301_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(lean_object* v_n_309_, lean_object* v_lo_310_, lean_object* v_hi_311_, lean_object* v_hhi_312_, lean_object* v_pivot_313_, lean_object* v_as_314_, lean_object* v_i_315_, lean_object* v_k_316_, lean_object* v_ilo_317_, lean_object* v_ik_318_, lean_object* v_w_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___redArg(v_hi_311_, v_pivot_313_, v_as_314_, v_i_315_, v_k_316_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1___boxed(lean_object* v_n_321_, lean_object* v_lo_322_, lean_object* v_hi_323_, lean_object* v_hhi_324_, lean_object* v_pivot_325_, lean_object* v_as_326_, lean_object* v_i_327_, lean_object* v_k_328_, lean_object* v_ilo_329_, lean_object* v_ik_330_, lean_object* v_w_331_){
_start:
{
lean_object* v_res_332_; 
v_res_332_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect_spec__1_spec__1(v_n_321_, v_lo_322_, v_hi_323_, v_hhi_324_, v_pivot_325_, v_as_326_, v_i_327_, v_k_328_, v_ilo_329_, v_ik_330_, v_w_331_);
lean_dec(v_pivot_325_);
lean_dec(v_hi_323_);
lean_dec(v_lo_322_);
lean_dec(v_n_321_);
return v_res_332_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7(void){
_start:
{
lean_object* v___x_340_; 
v___x_340_ = l_Array_instInhabited___redArg();
return v___x_340_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(lean_object* v_msg_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v___f_344_; lean_object* v___f_345_; lean_object* v___f_346_; lean_object* v___f_347_; lean_object* v___f_348_; lean_object* v___f_349_; lean_object* v___f_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___f_354_; lean_object* v___f_355_; lean_object* v___f_356_; lean_object* v___f_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_986__overap_367_; lean_object* v___x_368_; 
v___f_344_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__0));
v___f_345_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__1));
v___f_346_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__2));
v___f_347_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__3));
v___f_348_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__4));
v___f_349_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__5));
v___f_350_ = ((lean_object*)(l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__6));
v___x_351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_351_, 0, v___f_344_);
lean_ctor_set(v___x_351_, 1, v___f_345_);
v___x_352_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_352_, 0, v___x_351_);
lean_ctor_set(v___x_352_, 1, v___f_346_);
lean_ctor_set(v___x_352_, 2, v___f_347_);
lean_ctor_set(v___x_352_, 3, v___f_348_);
lean_ctor_set(v___x_352_, 4, v___f_349_);
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v___x_352_);
lean_ctor_set(v___x_353_, 1, v___f_350_);
lean_inc_ref_n(v___x_353_, 6);
v___f_354_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_354_, 0, v___x_353_);
v___f_355_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_355_, 0, v___x_353_);
v___f_356_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_356_, 0, v___x_353_);
v___f_357_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_357_, 0, v___x_353_);
v___x_358_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_358_, 0, lean_box(0));
lean_closure_set(v___x_358_, 1, lean_box(0));
lean_closure_set(v___x_358_, 2, v___x_353_);
v___x_359_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_359_, 0, v___x_358_);
lean_ctor_set(v___x_359_, 1, v___f_354_);
v___x_360_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_360_, 0, lean_box(0));
lean_closure_set(v___x_360_, 1, lean_box(0));
lean_closure_set(v___x_360_, 2, v___x_353_);
v___x_361_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_361_, 0, v___x_359_);
lean_ctor_set(v___x_361_, 1, v___x_360_);
lean_ctor_set(v___x_361_, 2, v___f_355_);
lean_ctor_set(v___x_361_, 3, v___f_356_);
lean_ctor_set(v___x_361_, 4, v___f_357_);
v___x_362_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_362_, 0, lean_box(0));
lean_closure_set(v___x_362_, 1, lean_box(0));
lean_closure_set(v___x_362_, 2, v___x_353_);
v___x_363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_363_, 0, v___x_361_);
lean_ctor_set(v___x_363_, 1, v___x_362_);
v___x_364_ = lean_obj_once(&l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7, &l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7_once, _init_l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___closed__7);
v___x_365_ = l_instInhabitedOfMonad___redArg(v___x_363_, v___x_364_);
v___x_366_ = l_instInhabitedReaderT___redArg(v___x_365_);
v___x_986__overap_367_ = lean_panic_fn_borrowed(v___x_366_, v_msg_341_);
lean_dec(v___x_366_);
lean_inc_ref(v___y_342_);
v___x_368_ = lean_apply_2(v___x_986__overap_367_, v___y_342_, v___y_343_);
return v___x_368_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0___boxed(lean_object* v_msg_369_, lean_object* v___y_370_, lean_object* v___y_371_){
_start:
{
lean_object* v_res_372_; 
v_res_372_ = l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(v_msg_369_, v___y_370_, v___y_371_);
lean_dec_ref(v___y_370_);
return v_res_372_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(lean_object* v_extFind_x3f_377_, lean_object* v_c_378_, lean_object* v___y_379_, lean_object* v___y_380_){
_start:
{
lean_object* v___x_381_; lean_object* v_snd_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_404_; 
lean_inc(v_c_378_);
v___x_381_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect(v_extFind_x3f_377_, v_c_378_, v___y_379_, v___y_380_);
v_snd_382_ = lean_ctor_get(v___x_381_, 1);
v_isSharedCheck_404_ = !lean_is_exclusive(v___x_381_);
if (v_isSharedCheck_404_ == 0)
{
lean_object* v_unused_405_; 
v_unused_405_ = lean_ctor_get(v___x_381_, 0);
lean_dec(v_unused_405_);
v___x_384_ = v___x_381_;
v_isShared_385_ = v_isSharedCheck_404_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_snd_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_404_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v_seen_386_; lean_object* v___x_387_; 
v_seen_386_ = lean_ctor_get(v_snd_382_, 0);
v___x_387_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_seen_386_, v_c_378_);
if (lean_obj_tag(v___x_387_) == 1)
{
lean_object* v_val_388_; lean_object* v___x_390_; 
lean_dec(v_c_378_);
v_val_388_ = lean_ctor_get(v___x_387_, 0);
lean_inc(v_val_388_);
lean_dec_ref_known(v___x_387_, 1);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 0, v_val_388_);
v___x_390_ = v___x_384_;
goto v_reusejp_389_;
}
else
{
lean_object* v_reuseFailAlloc_391_; 
v_reuseFailAlloc_391_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_391_, 0, v_val_388_);
lean_ctor_set(v_reuseFailAlloc_391_, 1, v_snd_382_);
v___x_390_ = v_reuseFailAlloc_391_;
goto v_reusejp_389_;
}
v_reusejp_389_:
{
return v___x_390_;
}
}
else
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; uint8_t v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; 
lean_dec(v___x_387_);
lean_del_object(v___x_384_);
v___x_392_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__0));
v___x_393_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__1));
v___x_394_ = lean_unsigned_to_nat(81u);
v___x_395_ = lean_unsigned_to_nat(41u);
v___x_396_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__2));
v___x_397_ = 1;
v___x_398_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_c_378_, v___x_397_);
v___x_399_ = lean_string_append(v___x_396_, v___x_398_);
lean_dec_ref(v___x_398_);
v___x_400_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___closed__3));
v___x_401_ = lean_string_append(v___x_399_, v___x_400_);
v___x_402_ = l_mkPanicMessageWithDecl(v___x_392_, v___x_393_, v___x_394_, v___x_395_, v___x_401_);
lean_dec_ref(v___x_401_);
v___x_403_ = l_panic___at___00__private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet_spec__0(v___x_402_, v___y_379_, v_snd_382_);
return v___x_403_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed(lean_object* v_extFind_x3f_406_, lean_object* v_c_407_, lean_object* v___y_408_, lean_object* v___y_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(v_extFind_x3f_406_, v_c_407_, v___y_408_, v___y_409_);
lean_dec_ref(v___y_408_);
return v_res_410_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(lean_object* v_a_414_, lean_object* v_b_415_){
_start:
{
lean_object* v_fst_416_; lean_object* v_fst_417_; uint8_t v___x_418_; 
v_fst_416_ = lean_ctor_get(v_a_414_, 0);
v_fst_417_ = lean_ctor_get(v_b_415_, 0);
v___x_418_ = l_Lean_Name_quickLt(v_fst_416_, v_fst_417_);
return v___x_418_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0___boxed(lean_object* v_a_419_, lean_object* v_b_420_){
_start:
{
uint8_t v_res_421_; lean_object* v_r_422_; 
v_res_421_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v_a_419_, v_b_420_);
lean_dec_ref(v_b_420_);
lean_dec_ref(v_a_419_);
v_r_422_ = lean_box(v_res_421_);
return v_r_422_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(lean_object* v_as_423_, lean_object* v_k_424_, lean_object* v_x_425_, lean_object* v_x_426_){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; lean_object* v_m_429_; lean_object* v_a_430_; uint8_t v___x_431_; 
v___x_427_ = lean_nat_add(v_x_425_, v_x_426_);
v___x_428_ = lean_unsigned_to_nat(1u);
v_m_429_ = lean_nat_shiftr(v___x_427_, v___x_428_);
lean_dec(v___x_427_);
v_a_430_ = lean_array_fget_borrowed(v_as_423_, v_m_429_);
v___x_431_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v_a_430_, v_k_424_);
if (v___x_431_ == 0)
{
uint8_t v___x_432_; 
lean_dec(v_x_426_);
v___x_432_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v_k_424_, v_a_430_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; 
lean_dec(v_m_429_);
lean_dec(v_x_425_);
lean_inc(v_a_430_);
v___x_433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_433_, 0, v_a_430_);
return v___x_433_;
}
else
{
lean_object* v___x_434_; uint8_t v___x_435_; lean_object* v___x_436_; uint8_t v___y_438_; 
v___x_434_ = lean_unsigned_to_nat(0u);
v___x_435_ = lean_nat_dec_eq(v_m_429_, v___x_434_);
v___x_436_ = lean_nat_sub(v_m_429_, v___x_428_);
lean_dec(v_m_429_);
if (v___x_435_ == 0)
{
uint8_t v___x_441_; 
v___x_441_ = lean_nat_dec_lt(v___x_436_, v_x_425_);
v___y_438_ = v___x_441_;
goto v___jp_437_;
}
else
{
v___y_438_ = v___x_435_;
goto v___jp_437_;
}
v___jp_437_:
{
if (v___y_438_ == 0)
{
v_x_426_ = v___x_436_;
goto _start;
}
else
{
lean_object* v___x_440_; 
lean_dec(v___x_436_);
lean_dec(v_x_425_);
v___x_440_ = lean_box(0);
return v___x_440_;
}
}
}
}
else
{
lean_object* v___x_442_; uint8_t v___x_443_; 
lean_dec(v_x_425_);
v___x_442_ = lean_nat_add(v_m_429_, v___x_428_);
lean_dec(v_m_429_);
v___x_443_ = lean_nat_dec_le(v___x_442_, v_x_426_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; 
lean_dec(v___x_442_);
lean_dec(v_x_426_);
v___x_444_ = lean_box(0);
return v___x_444_;
}
else
{
v_x_425_ = v___x_442_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___boxed(lean_object* v_as_446_, lean_object* v_k_447_, lean_object* v_x_448_, lean_object* v_x_449_){
_start:
{
lean_object* v_res_450_; 
v_res_450_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(v_as_446_, v_k_447_, v_x_448_, v_x_449_);
lean_dec_ref(v_k_447_);
lean_dec_ref(v_as_446_);
return v_res_450_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f(lean_object* v_s_451_, lean_object* v_env_452_, lean_object* v_c_453_){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_452_, v_c_453_);
if (lean_obj_tag(v___x_454_) == 0)
{
lean_object* v___x_455_; 
lean_dec(v_c_453_);
v___x_455_ = lean_box(0);
return v___x_455_;
}
else
{
lean_object* v_val_456_; lean_object* v___x_457_; uint8_t v___x_458_; 
v_val_456_ = lean_ctor_get(v___x_454_, 0);
lean_inc(v_val_456_);
lean_dec_ref_known(v___x_454_, 1);
v___x_457_ = lean_array_get_size(v_s_451_);
v___x_458_ = lean_nat_dec_lt(v_val_456_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; 
lean_dec(v_val_456_);
lean_dec(v_c_453_);
v___x_459_ = lean_box(0);
return v___x_459_;
}
else
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_460_ = lean_array_fget_borrowed(v_s_451_, v_val_456_);
lean_dec(v_val_456_);
v___x_461_ = lean_unsigned_to_nat(0u);
v___x_462_ = lean_array_get_size(v___x_460_);
v___x_463_ = lean_nat_dec_lt(v___x_461_, v___x_462_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; 
lean_dec(v_c_453_);
v___x_464_ = lean_box(0);
return v___x_464_;
}
else
{
lean_object* v___x_465_; lean_object* v___x_466_; uint8_t v___x_467_; 
v___x_465_ = lean_unsigned_to_nat(1u);
v___x_466_ = lean_nat_sub(v___x_462_, v___x_465_);
v___x_467_ = lean_nat_dec_le(v___x_461_, v___x_466_);
if (v___x_467_ == 0)
{
lean_object* v___x_468_; 
lean_dec(v___x_466_);
lean_dec(v_c_453_);
v___x_468_ = lean_box(0);
return v___x_468_;
}
else
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collect___closed__0));
v___x_470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_470_, 0, v_c_453_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(v___x_460_, v___x_470_, v___x_461_, v___x_466_);
lean_dec_ref_known(v___x_470_, 2);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v___x_472_; 
v___x_472_ = lean_box(0);
return v___x_472_;
}
else
{
lean_object* v_val_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_481_; 
v_val_473_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_481_ == 0)
{
v___x_475_ = v___x_471_;
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_val_473_);
lean_dec(v___x_471_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_481_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v_snd_477_; lean_object* v___x_479_; 
v_snd_477_ = lean_ctor_get(v_val_473_, 1);
lean_inc(v_snd_477_);
lean_dec(v_val_473_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v_snd_477_);
v___x_479_ = v___x_475_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_480_; 
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_480_, 0, v_snd_477_);
v___x_479_ = v_reuseFailAlloc_480_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
return v___x_479_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed(lean_object* v_s_482_, lean_object* v_env_483_, lean_object* v_c_484_){
_start:
{
lean_object* v_res_485_; 
v_res_485_ = l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f(v_s_482_, v_env_483_, v_c_484_);
lean_dec_ref(v_env_483_);
lean_dec_ref(v_s_482_);
return v_res_485_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0(lean_object* v_as_486_, lean_object* v_k_487_, lean_object* v_x_488_, lean_object* v_x_489_, lean_object* v_x_490_){
_start:
{
lean_object* v___x_491_; 
v___x_491_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg(v_as_486_, v_k_487_, v_x_488_, v_x_489_);
return v___x_491_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___boxed(lean_object* v_as_492_, lean_object* v_k_493_, lean_object* v_x_494_, lean_object* v_x_495_, lean_object* v_x_496_){
_start:
{
lean_object* v_res_497_; 
v_res_497_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0(v_as_492_, v_k_493_, v_x_494_, v_x_495_, v_x_496_);
lean_dec_ref(v_k_493_);
lean_dec_ref(v_as_492_);
return v_res_497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_x_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0___closed__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_x_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__0_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_x_502_);
lean_dec_ref(v_x_502_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_x_504_){
_start:
{
lean_object* v___x_505_; 
v___x_505_ = lean_box(0);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_x_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_x_506_);
lean_dec_ref(v_x_506_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_s_508_, lean_object* v_x_509_){
_start:
{
lean_inc_ref(v_s_508_);
return v_s_508_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_s_510_, lean_object* v_x_511_){
_start:
{
lean_object* v_res_512_; 
v_res_512_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__2_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_s_510_, v_x_511_);
lean_dec_ref(v_x_511_);
lean_dec_ref(v_s_510_);
return v_res_512_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_importedEntries_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_516_, 0, v_importedEntries_513_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_importedEntries_517_, lean_object* v___y_518_, lean_object* v___y_519_){
_start:
{
lean_object* v_res_520_; 
v_res_520_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__3_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_importedEntries_517_, v___y_518_);
lean_dec_ref(v___y_518_);
return v_res_520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v_exportedEnv_521_, uint8_t v___x_522_, lean_object* v_names_523_, lean_object* v_name_524_, lean_object* v_x_525_){
_start:
{
lean_object* v___x_526_; 
lean_inc(v_name_524_);
v___x_526_ = l_Lean_Environment_find_x3f(v_exportedEnv_521_, v_name_524_, v___x_522_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_dec(v_name_524_);
return v_names_523_;
}
else
{
lean_object* v___x_527_; 
lean_dec_ref_known(v___x_526_, 1);
v___x_527_ = lean_array_push(v_names_523_, v_name_524_);
return v___x_527_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v_exportedEnv_528_, lean_object* v___x_529_, lean_object* v_names_530_, lean_object* v_name_531_, lean_object* v_x_532_){
_start:
{
uint8_t v___x_1715__boxed_533_; lean_object* v_res_534_; 
v___x_1715__boxed_533_ = lean_unbox(v___x_529_);
v_res_534_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v_exportedEnv_528_, v___x_1715__boxed_533_, v_names_530_, v_name_531_, v_x_532_);
lean_dec_ref(v_x_532_);
return v_res_534_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1(lean_object* v_s_535_, size_t v_sz_536_, size_t v_i_537_, lean_object* v_bs_538_, lean_object* v___y_539_, lean_object* v___y_540_){
_start:
{
uint8_t v___x_541_; 
v___x_541_ = lean_usize_dec_lt(v_i_537_, v_sz_536_);
if (v___x_541_ == 0)
{
lean_object* v___x_542_; 
lean_dec_ref(v_s_535_);
v___x_542_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_542_, 0, v_bs_538_);
lean_ctor_set(v___x_542_, 1, v___y_540_);
return v___x_542_;
}
else
{
lean_object* v_v_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v_fst_546_; lean_object* v_snd_547_; lean_object* v___x_549_; uint8_t v_isShared_550_; uint8_t v_isSharedCheck_560_; 
v_v_543_ = lean_array_uget(v_bs_538_, v_i_537_);
lean_inc_ref(v_s_535_);
v___x_544_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed), 3, 1);
lean_closure_set(v___x_544_, 0, v_s_535_);
lean_inc(v_v_543_);
v___x_545_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet(v___x_544_, v_v_543_, v___y_539_, v___y_540_);
v_fst_546_ = lean_ctor_get(v___x_545_, 0);
v_snd_547_ = lean_ctor_get(v___x_545_, 1);
v_isSharedCheck_560_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_560_ == 0)
{
v___x_549_ = v___x_545_;
v_isShared_550_ = v_isSharedCheck_560_;
goto v_resetjp_548_;
}
else
{
lean_inc(v_snd_547_);
lean_inc(v_fst_546_);
lean_dec(v___x_545_);
v___x_549_ = lean_box(0);
v_isShared_550_ = v_isSharedCheck_560_;
goto v_resetjp_548_;
}
v_resetjp_548_:
{
lean_object* v___x_551_; lean_object* v_bs_x27_552_; lean_object* v___x_554_; 
v___x_551_ = lean_unsigned_to_nat(0u);
v_bs_x27_552_ = lean_array_uset(v_bs_538_, v_i_537_, v___x_551_);
if (v_isShared_550_ == 0)
{
lean_ctor_set(v___x_549_, 1, v_fst_546_);
lean_ctor_set(v___x_549_, 0, v_v_543_);
v___x_554_ = v___x_549_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v_v_543_);
lean_ctor_set(v_reuseFailAlloc_559_, 1, v_fst_546_);
v___x_554_ = v_reuseFailAlloc_559_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
size_t v___x_555_; size_t v___x_556_; lean_object* v___x_557_; 
v___x_555_ = ((size_t)1ULL);
v___x_556_ = lean_usize_add(v_i_537_, v___x_555_);
v___x_557_ = lean_array_uset(v_bs_x27_552_, v_i_537_, v___x_554_);
v_i_537_ = v___x_556_;
v_bs_538_ = v___x_557_;
v___y_540_ = v_snd_547_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1___boxed(lean_object* v_s_561_, lean_object* v_sz_562_, lean_object* v_i_563_, lean_object* v_bs_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
size_t v_sz_boxed_567_; size_t v_i_boxed_568_; lean_object* v_res_569_; 
v_sz_boxed_567_ = lean_unbox_usize(v_sz_562_);
lean_dec(v_sz_562_);
v_i_boxed_568_ = lean_unbox_usize(v_i_563_);
lean_dec(v_i_563_);
v_res_569_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1(v_s_561_, v_sz_boxed_567_, v_i_boxed_568_, v_bs_564_, v___y_565_, v___y_566_);
lean_dec_ref(v___y_565_);
return v_res_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_f_570_, lean_object* v_keys_571_, lean_object* v_vals_572_, lean_object* v_i_573_, lean_object* v_acc_574_){
_start:
{
lean_object* v___x_575_; uint8_t v___x_576_; 
v___x_575_ = lean_array_get_size(v_keys_571_);
v___x_576_ = lean_nat_dec_lt(v_i_573_, v___x_575_);
if (v___x_576_ == 0)
{
lean_dec(v_i_573_);
lean_dec(v_f_570_);
return v_acc_574_;
}
else
{
lean_object* v_k_577_; lean_object* v_v_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
v_k_577_ = lean_array_fget_borrowed(v_keys_571_, v_i_573_);
v_v_578_ = lean_array_fget_borrowed(v_vals_572_, v_i_573_);
lean_inc(v_f_570_);
lean_inc(v_v_578_);
lean_inc(v_k_577_);
v___x_579_ = lean_apply_3(v_f_570_, v_acc_574_, v_k_577_, v_v_578_);
v___x_580_ = lean_unsigned_to_nat(1u);
v___x_581_ = lean_nat_add(v_i_573_, v___x_580_);
lean_dec(v_i_573_);
v_i_573_ = v___x_581_;
v_acc_574_ = v___x_579_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg___boxed(lean_object* v_f_583_, lean_object* v_keys_584_, lean_object* v_vals_585_, lean_object* v_i_586_, lean_object* v_acc_587_){
_start:
{
lean_object* v_res_588_; 
v_res_588_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_583_, v_keys_584_, v_vals_585_, v_i_586_, v_acc_587_);
lean_dec_ref(v_vals_585_);
lean_dec_ref(v_keys_584_);
return v_res_588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_f_589_, lean_object* v_as_590_, size_t v_i_591_, size_t v_stop_592_, lean_object* v_b_593_){
_start:
{
lean_object* v___y_595_; uint8_t v___x_599_; 
v___x_599_ = lean_usize_dec_eq(v_i_591_, v_stop_592_);
if (v___x_599_ == 0)
{
lean_object* v___x_600_; 
v___x_600_ = lean_array_uget_borrowed(v_as_590_, v_i_591_);
switch(lean_obj_tag(v___x_600_))
{
case 0:
{
lean_object* v_key_601_; lean_object* v_val_602_; lean_object* v___x_603_; 
v_key_601_ = lean_ctor_get(v___x_600_, 0);
v_val_602_ = lean_ctor_get(v___x_600_, 1);
lean_inc(v_f_589_);
lean_inc(v_val_602_);
lean_inc(v_key_601_);
v___x_603_ = lean_apply_3(v_f_589_, v_b_593_, v_key_601_, v_val_602_);
v___y_595_ = v___x_603_;
goto v___jp_594_;
}
case 1:
{
lean_object* v_node_604_; lean_object* v___x_605_; 
v_node_604_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_f_589_);
v___x_605_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_589_, v_node_604_, v_b_593_);
v___y_595_ = v___x_605_;
goto v___jp_594_;
}
default: 
{
v___y_595_ = v_b_593_;
goto v___jp_594_;
}
}
}
else
{
lean_dec(v_f_589_);
return v_b_593_;
}
v___jp_594_:
{
size_t v___x_596_; size_t v___x_597_; 
v___x_596_ = ((size_t)1ULL);
v___x_597_ = lean_usize_add(v_i_591_, v___x_596_);
v_i_591_ = v___x_597_;
v_b_593_ = v___y_595_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_f_606_, lean_object* v_x_607_, lean_object* v_x_608_){
_start:
{
if (lean_obj_tag(v_x_607_) == 0)
{
lean_object* v_es_609_; lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v_es_609_ = lean_ctor_get(v_x_607_, 0);
v___x_610_ = lean_unsigned_to_nat(0u);
v___x_611_ = lean_array_get_size(v_es_609_);
v___x_612_ = lean_nat_dec_lt(v___x_610_, v___x_611_);
if (v___x_612_ == 0)
{
lean_dec(v_f_606_);
return v_x_608_;
}
else
{
size_t v___x_613_; size_t v___x_614_; lean_object* v___x_615_; 
v___x_613_ = ((size_t)0ULL);
v___x_614_ = lean_usize_of_nat(v___x_611_);
v___x_615_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_606_, v_es_609_, v___x_613_, v___x_614_, v_x_608_);
return v___x_615_;
}
}
else
{
lean_object* v_ks_616_; lean_object* v_vs_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_ks_616_ = lean_ctor_get(v_x_607_, 0);
v_vs_617_ = lean_ctor_get(v_x_607_, 1);
v___x_618_ = lean_unsigned_to_nat(0u);
v___x_619_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_606_, v_ks_616_, v_vs_617_, v___x_618_, v_x_608_);
return v___x_619_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_f_620_, lean_object* v_x_621_, lean_object* v_x_622_){
_start:
{
lean_object* v_res_623_; 
v_res_623_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_620_, v_x_621_, v_x_622_);
lean_dec_ref(v_x_621_);
return v_res_623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_f_624_, lean_object* v_as_625_, lean_object* v_i_626_, lean_object* v_stop_627_, lean_object* v_b_628_){
_start:
{
size_t v_i_boxed_629_; size_t v_stop_boxed_630_; lean_object* v_res_631_; 
v_i_boxed_629_ = lean_unbox_usize(v_i_626_);
lean_dec(v_i_626_);
v_stop_boxed_630_ = lean_unbox_usize(v_stop_627_);
lean_dec(v_stop_627_);
v_res_631_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_624_, v_as_625_, v_i_boxed_629_, v_stop_boxed_630_, v_b_628_);
lean_dec_ref(v_as_625_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___lam__0(lean_object* v_f_632_, lean_object* v_x1_633_, lean_object* v_x2_634_, lean_object* v_x3_635_){
_start:
{
lean_object* v___x_636_; 
v___x_636_ = lean_apply_3(v_f_632_, v_x1_633_, v_x2_634_, v_x3_635_);
return v___x_636_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(lean_object* v_map_637_, lean_object* v_f_638_, lean_object* v_init_639_){
_start:
{
lean_object* v___f_640_; lean_object* v___x_641_; 
v___f_640_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___lam__0), 4, 1);
lean_closure_set(v___f_640_, 0, v_f_638_);
v___x_641_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v___f_640_, v_map_637_, v_init_639_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg___boxed(lean_object* v_map_642_, lean_object* v_f_643_, lean_object* v_init_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(v_map_642_, v_f_643_, v_init_644_);
lean_dec_ref(v_map_642_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(lean_object* v_hi_646_, lean_object* v_pivot_647_, lean_object* v_as_648_, lean_object* v_i_649_, lean_object* v_k_650_){
_start:
{
uint8_t v___x_651_; 
v___x_651_ = lean_nat_dec_lt(v_k_650_, v_hi_646_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; lean_object* v___x_653_; 
lean_dec(v_k_650_);
v___x_652_ = lean_array_fswap(v_as_648_, v_i_649_, v_hi_646_);
v___x_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_653_, 0, v_i_649_);
lean_ctor_set(v___x_653_, 1, v___x_652_);
return v___x_653_;
}
else
{
lean_object* v___x_654_; lean_object* v_fst_655_; lean_object* v_fst_656_; uint8_t v___x_657_; 
v___x_654_ = lean_array_fget_borrowed(v_as_648_, v_k_650_);
v_fst_655_ = lean_ctor_get(v___x_654_, 0);
v_fst_656_ = lean_ctor_get(v_pivot_647_, 0);
v___x_657_ = l_Lean_Name_quickLt(v_fst_655_, v_fst_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; lean_object* v___x_659_; 
v___x_658_ = lean_unsigned_to_nat(1u);
v___x_659_ = lean_nat_add(v_k_650_, v___x_658_);
lean_dec(v_k_650_);
v_k_650_ = v___x_659_;
goto _start;
}
else
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_661_ = lean_array_fswap(v_as_648_, v_i_649_, v_k_650_);
v___x_662_ = lean_unsigned_to_nat(1u);
v___x_663_ = lean_nat_add(v_i_649_, v___x_662_);
lean_dec(v_i_649_);
v___x_664_ = lean_nat_add(v_k_650_, v___x_662_);
lean_dec(v_k_650_);
v_as_648_ = v___x_661_;
v_i_649_ = v___x_663_;
v_k_650_ = v___x_664_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg___boxed(lean_object* v_hi_666_, lean_object* v_pivot_667_, lean_object* v_as_668_, lean_object* v_i_669_, lean_object* v_k_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_666_, v_pivot_667_, v_as_668_, v_i_669_, v_k_670_);
lean_dec_ref(v_pivot_667_);
lean_dec(v_hi_666_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(lean_object* v_n_672_, lean_object* v_as_673_, lean_object* v_lo_674_, lean_object* v_hi_675_){
_start:
{
lean_object* v___y_677_; uint8_t v___x_687_; 
v___x_687_ = lean_nat_dec_lt(v_lo_674_, v_hi_675_);
if (v___x_687_ == 0)
{
lean_dec(v_lo_674_);
return v_as_673_;
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v_mid_690_; lean_object* v___y_692_; lean_object* v___y_698_; lean_object* v___x_703_; lean_object* v___x_704_; uint8_t v___x_705_; 
v___x_688_ = lean_nat_add(v_lo_674_, v_hi_675_);
v___x_689_ = lean_unsigned_to_nat(1u);
v_mid_690_ = lean_nat_shiftr(v___x_688_, v___x_689_);
lean_dec(v___x_688_);
v___x_703_ = lean_array_fget_borrowed(v_as_673_, v_mid_690_);
v___x_704_ = lean_array_fget_borrowed(v_as_673_, v_lo_674_);
v___x_705_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v___x_703_, v___x_704_);
if (v___x_705_ == 0)
{
v___y_698_ = v_as_673_;
goto v___jp_697_;
}
else
{
lean_object* v___x_706_; 
v___x_706_ = lean_array_fswap(v_as_673_, v_lo_674_, v_mid_690_);
v___y_698_ = v___x_706_;
goto v___jp_697_;
}
v___jp_691_:
{
lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_693_ = lean_array_fget_borrowed(v___y_692_, v_mid_690_);
v___x_694_ = lean_array_fget_borrowed(v___y_692_, v_hi_675_);
v___x_695_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v___x_693_, v___x_694_);
if (v___x_695_ == 0)
{
lean_dec(v_mid_690_);
v___y_677_ = v___y_692_;
goto v___jp_676_;
}
else
{
lean_object* v___x_696_; 
v___x_696_ = lean_array_fswap(v___y_692_, v_mid_690_, v_hi_675_);
lean_dec(v_mid_690_);
v___y_677_ = v___x_696_;
goto v___jp_676_;
}
}
v___jp_697_:
{
lean_object* v___x_699_; lean_object* v___x_700_; uint8_t v___x_701_; 
v___x_699_ = lean_array_fget_borrowed(v___y_698_, v_hi_675_);
v___x_700_ = lean_array_fget_borrowed(v___y_698_, v_lo_674_);
v___x_701_ = l_Array_binSearchAux___at___00__private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f_spec__0___redArg___lam__0(v___x_699_, v___x_700_);
if (v___x_701_ == 0)
{
v___y_692_ = v___y_698_;
goto v___jp_691_;
}
else
{
lean_object* v___x_702_; 
v___x_702_ = lean_array_fswap(v___y_698_, v_lo_674_, v_hi_675_);
v___y_692_ = v___x_702_;
goto v___jp_691_;
}
}
}
v___jp_676_:
{
lean_object* v_pivot_678_; lean_object* v___x_679_; lean_object* v_fst_680_; lean_object* v_snd_681_; uint8_t v___x_682_; 
v_pivot_678_ = lean_array_fget(v___y_677_, v_hi_675_);
lean_inc_n(v_lo_674_, 2);
v___x_679_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_675_, v_pivot_678_, v___y_677_, v_lo_674_, v_lo_674_);
lean_dec(v_pivot_678_);
v_fst_680_ = lean_ctor_get(v___x_679_, 0);
lean_inc(v_fst_680_);
v_snd_681_ = lean_ctor_get(v___x_679_, 1);
lean_inc(v_snd_681_);
lean_dec_ref(v___x_679_);
v___x_682_ = lean_nat_dec_le(v_hi_675_, v_fst_680_);
if (v___x_682_ == 0)
{
lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; 
v___x_683_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v_n_672_, v_snd_681_, v_lo_674_, v_fst_680_);
v___x_684_ = lean_unsigned_to_nat(1u);
v___x_685_ = lean_nat_add(v_fst_680_, v___x_684_);
lean_dec(v_fst_680_);
v_as_673_ = v___x_683_;
v_lo_674_ = v___x_685_;
goto _start;
}
else
{
lean_dec(v_fst_680_);
lean_dec(v_lo_674_);
return v_snd_681_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg___boxed(lean_object* v_n_707_, lean_object* v_as_708_, lean_object* v_lo_709_, lean_object* v_hi_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v_n_707_, v_as_708_, v_lo_709_, v_hi_710_);
lean_dec(v_hi_710_);
lean_dec(v_n_707_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v___x_714_, lean_object* v_env_715_, lean_object* v_s_716_){
_start:
{
lean_object* v_checked_717_; lean_object* v___x_718_; lean_object* v_constants_719_; lean_object* v_map_u2082_720_; uint8_t v___x_721_; lean_object* v_exportedEnv_722_; uint8_t v___x_723_; lean_object* v___x_724_; lean_object* v___f_725_; lean_object* v_privateEnv_726_; lean_object* v___x_727_; lean_object* v_allNames_728_; size_t v_sz_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v_entries_733_; lean_object* v___x_734_; lean_object* v___y_736_; lean_object* v___y_737_; uint8_t v___x_740_; 
v_checked_717_ = lean_ctor_get(v_env_715_, 2);
lean_inc_ref(v_checked_717_);
v___x_718_ = lean_task_get_own(v_checked_717_);
v_constants_719_ = lean_ctor_get(v___x_718_, 0);
lean_inc_ref(v_constants_719_);
lean_dec(v___x_718_);
v_map_u2082_720_ = lean_ctor_get(v_constants_719_, 1);
lean_inc_ref(v_map_u2082_720_);
lean_dec_ref(v_constants_719_);
v___x_721_ = 1;
lean_inc_ref(v_env_715_);
v_exportedEnv_722_ = l_Lean_Environment_setExporting(v_env_715_, v___x_721_);
v___x_723_ = 0;
v___x_724_ = lean_box(v___x_723_);
v___f_725_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__4_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed), 5, 2);
lean_closure_set(v___f_725_, 0, v_exportedEnv_722_);
lean_closure_set(v___f_725_, 1, v___x_724_);
v_privateEnv_726_ = l_Lean_Environment_setExporting(v_env_715_, v___x_723_);
v___x_727_ = lean_mk_empty_array_with_capacity(v___x_714_);
v_allNames_728_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(v_map_u2082_720_, v___f_725_, v___x_727_);
lean_dec_ref(v_map_u2082_720_);
v_sz_729_ = lean_array_size(v_allNames_728_);
v___x_730_ = lean_box_usize(v_sz_729_);
v___x_731_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__5___boxed__const__1_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_732_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__1___boxed), 6, 4);
lean_closure_set(v___x_732_, 0, v_s_716_);
lean_closure_set(v___x_732_, 1, v___x_730_);
lean_closure_set(v___x_732_, 2, v___x_731_);
lean_closure_set(v___x_732_, 3, v_allNames_728_);
v_entries_733_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(v_privateEnv_726_, v___x_732_);
v___x_734_ = lean_array_get_size(v_entries_733_);
v___x_740_ = lean_nat_dec_eq(v___x_734_, v___x_714_);
if (v___x_740_ == 0)
{
lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___y_744_; uint8_t v___x_746_; 
v___x_741_ = lean_unsigned_to_nat(1u);
v___x_742_ = lean_nat_sub(v___x_734_, v___x_741_);
v___x_746_ = lean_nat_dec_le(v___x_714_, v___x_742_);
if (v___x_746_ == 0)
{
lean_dec(v___x_714_);
lean_inc(v___x_742_);
v___y_744_ = v___x_742_;
goto v___jp_743_;
}
else
{
v___y_744_ = v___x_714_;
goto v___jp_743_;
}
v___jp_743_:
{
uint8_t v___x_745_; 
v___x_745_ = lean_nat_dec_le(v___y_744_, v___x_742_);
if (v___x_745_ == 0)
{
lean_dec(v___x_742_);
lean_inc(v___y_744_);
v___y_736_ = v___y_744_;
v___y_737_ = v___y_744_;
goto v___jp_735_;
}
else
{
v___y_736_ = v___y_744_;
v___y_737_ = v___x_742_;
goto v___jp_735_;
}
}
}
else
{
lean_object* v___x_747_; 
lean_dec(v___x_714_);
lean_inc_n(v_entries_733_, 2);
v___x_747_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_747_, 0, v_entries_733_);
lean_ctor_set(v___x_747_, 1, v_entries_733_);
lean_ctor_set(v___x_747_, 2, v_entries_733_);
return v___x_747_;
}
v___jp_735_:
{
lean_object* v___x_738_; lean_object* v___x_739_; 
v___x_738_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v___x_734_, v_entries_733_, v___y_736_, v___y_737_);
lean_dec(v___y_737_);
lean_inc_ref_n(v___x_738_, 2);
v___x_739_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_739_, 0, v___x_738_);
lean_ctor_set(v___x_739_, 1, v___x_738_);
lean_ctor_set(v___x_739_, 2, v___x_738_);
return v___x_739_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(lean_object* v___x_748_){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_750_, 0, v___x_748_);
return v___x_750_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v___x_751_, lean_object* v___y_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn___lam__6_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(v___x_751_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_initFn___closed__19_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_));
v___x_802_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2____boxed(lean_object* v___y_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_();
return v_res_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0(lean_object* v_00_u03c3_805_, lean_object* v_00_u03b2_806_, lean_object* v_map_807_, lean_object* v_f_808_, lean_object* v_init_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___redArg(v_map_807_, v_f_808_, v_init_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0___boxed(lean_object* v_00_u03c3_811_, lean_object* v_00_u03b2_812_, lean_object* v_map_813_, lean_object* v_f_814_, lean_object* v_init_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0(v_00_u03c3_811_, v_00_u03b2_812_, v_map_813_, v_f_814_, v_init_815_);
lean_dec_ref(v_map_813_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2(lean_object* v_n_817_, lean_object* v_as_818_, lean_object* v_lo_819_, lean_object* v_hi_820_, lean_object* v_w_821_, lean_object* v_hlo_822_, lean_object* v_hhi_823_){
_start:
{
lean_object* v___x_824_; 
v___x_824_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___redArg(v_n_817_, v_as_818_, v_lo_819_, v_hi_820_);
return v___x_824_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2___boxed(lean_object* v_n_825_, lean_object* v_as_826_, lean_object* v_lo_827_, lean_object* v_hi_828_, lean_object* v_w_829_, lean_object* v_hlo_830_, lean_object* v_hhi_831_){
_start:
{
lean_object* v_res_832_; 
v_res_832_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2(v_n_825_, v_as_826_, v_lo_827_, v_hi_828_, v_w_829_, v_hlo_830_, v_hhi_831_);
lean_dec(v_hi_828_);
lean_dec(v_n_825_);
return v_res_832_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_map_833_, lean_object* v_f_834_, lean_object* v_init_835_){
_start:
{
lean_object* v___x_836_; 
v___x_836_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_834_, v_map_833_, v_init_835_);
return v___x_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_map_837_, lean_object* v_f_838_, lean_object* v_init_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___redArg(v_map_837_, v_f_838_, v_init_839_);
lean_dec_ref(v_map_837_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03c3_841_, lean_object* v_00_u03b2_842_, lean_object* v_map_843_, lean_object* v_f_844_, lean_object* v_init_845_){
_start:
{
lean_object* v___x_846_; 
v___x_846_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_844_, v_map_843_, v_init_845_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03c3_847_, lean_object* v_00_u03b2_848_, lean_object* v_map_849_, lean_object* v_f_850_, lean_object* v_init_851_){
_start:
{
lean_object* v_res_852_; 
v_res_852_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0(v_00_u03c3_847_, v_00_u03b2_848_, v_map_849_, v_f_850_, v_init_851_);
lean_dec_ref(v_map_849_);
return v_res_852_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3(lean_object* v_n_853_, lean_object* v_lo_854_, lean_object* v_hi_855_, lean_object* v_hhi_856_, lean_object* v_pivot_857_, lean_object* v_as_858_, lean_object* v_i_859_, lean_object* v_k_860_, lean_object* v_ilo_861_, lean_object* v_ik_862_, lean_object* v_w_863_){
_start:
{
lean_object* v___x_864_; 
v___x_864_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___redArg(v_hi_855_, v_pivot_857_, v_as_858_, v_i_859_, v_k_860_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3___boxed(lean_object* v_n_865_, lean_object* v_lo_866_, lean_object* v_hi_867_, lean_object* v_hhi_868_, lean_object* v_pivot_869_, lean_object* v_as_870_, lean_object* v_i_871_, lean_object* v_k_872_, lean_object* v_ilo_873_, lean_object* v_ik_874_, lean_object* v_w_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__2_spec__3(v_n_865_, v_lo_866_, v_hi_867_, v_hhi_868_, v_pivot_869_, v_as_870_, v_i_871_, v_k_872_, v_ilo_873_, v_ik_874_, v_w_875_);
lean_dec_ref(v_pivot_869_);
lean_dec(v_hi_867_);
lean_dec(v_lo_866_);
lean_dec(v_n_865_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03c3_877_, lean_object* v_00_u03b1_878_, lean_object* v_00_u03b2_879_, lean_object* v_f_880_, lean_object* v_x_881_, lean_object* v_x_882_){
_start:
{
lean_object* v___x_883_; 
v___x_883_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_f_880_, v_x_881_, v_x_882_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_884_, lean_object* v_00_u03b1_885_, lean_object* v_00_u03b2_886_, lean_object* v_f_887_, lean_object* v_x_888_, lean_object* v_x_889_){
_start:
{
lean_object* v_res_890_; 
v_res_890_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03c3_884_, v_00_u03b1_885_, v_00_u03b2_886_, v_f_887_, v_x_888_, v_x_889_);
lean_dec_ref(v_x_888_);
return v_res_890_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b1_891_, lean_object* v_00_u03b2_892_, lean_object* v_00_u03c3_893_, lean_object* v_f_894_, lean_object* v_as_895_, size_t v_i_896_, size_t v_stop_897_, lean_object* v_b_898_){
_start:
{
lean_object* v___x_899_; 
v___x_899_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___redArg(v_f_894_, v_as_895_, v_i_896_, v_stop_897_, v_b_898_);
return v___x_899_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b1_900_, lean_object* v_00_u03b2_901_, lean_object* v_00_u03c3_902_, lean_object* v_f_903_, lean_object* v_as_904_, lean_object* v_i_905_, lean_object* v_stop_906_, lean_object* v_b_907_){
_start:
{
size_t v_i_boxed_908_; size_t v_stop_boxed_909_; lean_object* v_res_910_; 
v_i_boxed_908_ = lean_unbox_usize(v_i_905_);
lean_dec(v_i_905_);
v_stop_boxed_909_ = lean_unbox_usize(v_stop_906_);
lean_dec(v_stop_906_);
v_res_910_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__4(v_00_u03b1_900_, v_00_u03b2_901_, v_00_u03c3_902_, v_f_903_, v_as_904_, v_i_boxed_908_, v_stop_boxed_909_, v_b_907_);
lean_dec_ref(v_as_904_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03c3_911_, lean_object* v_00_u03b1_912_, lean_object* v_00_u03b2_913_, lean_object* v_f_914_, lean_object* v_keys_915_, lean_object* v_vals_916_, lean_object* v_heq_917_, lean_object* v_i_918_, lean_object* v_acc_919_){
_start:
{
lean_object* v___x_920_; 
v___x_920_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___redArg(v_f_914_, v_keys_915_, v_vals_916_, v_i_918_, v_acc_919_);
return v___x_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v_00_u03c3_921_, lean_object* v_00_u03b1_922_, lean_object* v_00_u03b2_923_, lean_object* v_f_924_, lean_object* v_keys_925_, lean_object* v_vals_926_, lean_object* v_heq_927_, lean_object* v_i_928_, lean_object* v_acc_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00__private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__5(v_00_u03c3_921_, v_00_u03b1_922_, v_00_u03b2_923_, v_f_924_, v_keys_925_, v_vals_926_, v_heq_927_, v_i_928_, v_acc_929_);
lean_dec_ref(v_vals_926_);
lean_dec_ref(v_keys_925_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg___lam__0(lean_object* v___x_931_, lean_object* v_constName_932_, lean_object* v_toPure_933_, lean_object* v_env_934_){
_start:
{
uint8_t v___x_935_; lean_object* v_privateEnv_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v_s_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; 
v___x_935_ = 0;
lean_inc_ref(v_env_934_);
v_privateEnv_936_ = l_Lean_Environment_setExporting(v_env_934_, v___x_935_);
v___x_937_ = l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt;
v___x_938_ = lean_box(2);
v___x_939_ = lean_box(0);
v_s_940_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_931_, v___x_937_, v_env_934_, v___x_938_, v___x_939_);
v___x_941_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed), 3, 1);
lean_closure_set(v___x_941_, 0, v_s_940_);
v___x_942_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed), 4, 2);
lean_closure_set(v___x_942_, 0, v___x_941_);
lean_closure_set(v___x_942_, 1, v_constName_932_);
v___x_943_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(v_privateEnv_936_, v___x_942_);
v___x_944_ = lean_apply_2(v_toPure_933_, lean_box(0), v___x_943_);
return v___x_944_;
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms___redArg(lean_object* v_inst_945_, lean_object* v_inst_946_, lean_object* v_constName_947_){
_start:
{
lean_object* v_toApplicative_948_; lean_object* v_toBind_949_; lean_object* v_getEnv_950_; lean_object* v_toPure_951_; lean_object* v___x_952_; lean_object* v___f_953_; lean_object* v___x_954_; 
v_toApplicative_948_ = lean_ctor_get(v_inst_945_, 0);
lean_inc_ref(v_toApplicative_948_);
v_toBind_949_ = lean_ctor_get(v_inst_945_, 1);
lean_inc(v_toBind_949_);
lean_dec_ref(v_inst_945_);
v_getEnv_950_ = lean_ctor_get(v_inst_946_, 0);
lean_inc(v_getEnv_950_);
lean_dec_ref(v_inst_946_);
v_toPure_951_ = lean_ctor_get(v_toApplicative_948_, 1);
lean_inc(v_toPure_951_);
lean_dec_ref(v_toApplicative_948_);
v___x_952_ = ((lean_object*)(l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState));
v___f_953_ = lean_alloc_closure((void*)(l_Lean_collectAxioms___redArg___lam__0), 4, 3);
lean_closure_set(v___f_953_, 0, v___x_952_);
lean_closure_set(v___f_953_, 1, v_constName_947_);
lean_closure_set(v___f_953_, 2, v_toPure_951_);
v___x_954_ = lean_apply_4(v_toBind_949_, lean_box(0), lean_box(0), v_getEnv_950_, v___f_953_);
return v___x_954_;
}
}
LEAN_EXPORT lean_object* l_Lean_collectAxioms(lean_object* v_m_955_, lean_object* v_inst_956_, lean_object* v_inst_957_, lean_object* v_constName_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = l_Lean_collectAxioms___redArg(v_inst_956_, v_inst_957_, v_constName_958_);
return v___x_959_;
}
}
lean_object* runtime_initialize_Lean_MonadEnv(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Util_CollectAxioms(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Util_CollectAxioms_0__Lean_initFn_00___x40_Lean_Util_CollectAxioms_751524320____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt = lean_io_result_get_value(res);
lean_mark_persistent(l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt);
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Util_CollectAxioms(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_MonadEnv(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Util_CollectAxioms(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_MonadEnv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Util_CollectAxioms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Util_CollectAxioms(builtin);
}
#ifdef __cplusplus
}
#endif
