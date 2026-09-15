// Lean compiler output
// Module: Lake.Build.Target.Fetch
// Imports: import Lake.Build.Infos public import Lake.Build.Job.Monad import Lake.Config.Monad import all Lake.Build.Key
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
extern lean_object* l_Lake_instDataKindModule;
lean_object* l_Lake_Workspace_findModule_x3f(lean_object*, lean_object*);
lean_object* l_Lake_BuildTrace_nil(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_task_pure(lean_object*);
lean_object* l_Lake_BuildKey_toString(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(lean_object*, lean_object*);
extern lean_object* l_Lake_instDataKindPackage;
lean_object* l_Lake_Package_findTargetModule_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_toString(lean_object*, uint8_t);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lake_FacetConfigMap_get_x3f(lean_object*, lean_object*);
lean_object* l_Lake_Job_bindM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_instMonadBaseIO;
lean_object* l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lake_Package_findTargetDecl_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lake_EStateT_instFunctor___redArg(lean_object*);
lean_object* l_Lake_EStateT_instPure___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lake_EquipT_instMonad___redArg(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Job_collectArray___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lake_Job_toOpaque___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "invalid target '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "': package '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "' not found in workspace"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9_value;
static const lean_closure_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__4_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__5_value)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__11_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__6_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__7_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__8_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__9_value)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__12_value),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__10_value)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "<nil>"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2_value;
static lean_once_cell_t l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3;
static lean_once_cell_t l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "': module '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "': module target '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "' not found in package '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "': target not found in package '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "': unknown facet '"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11_value;
static const lean_ctor_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9_value),LEAN_SCALAR_PTR_LITERAL(29, 214, 131, 210, 10, 90, 37, 134)}};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12_value;
static const lean_string_object l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "': targets of opaque data kinds do not support facets"};
static const lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13 = (const lean_object*)&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__9_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__9_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__3_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__7_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__7_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__5_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__5_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__5_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "type mismatch in target '"};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__0 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__0_value;
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "': expected '"};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__1 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__1_value;
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "', got "};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__2 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__2_value;
static const lean_string_object l_Lake_Target_fetchIn___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "unknown"};
static const lean_object* l_Lake_Target_fetchIn___redArg___closed__3 = (const lean_object*)&l_Lake_Target_fetchIn___redArg___closed__3_value;
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0(lean_object* v_name_1_, lean_object* v___x_2_, lean_object* v___x_3_, lean_object* v_a_4_, lean_object* v_x_5_, lean_object* v___y_6_){
_start:
{
lean_object* v_baseName_7_; uint8_t v___x_8_; 
v_baseName_7_ = lean_ctor_get(v_a_4_, 1);
v___x_8_ = lean_name_eq(v_baseName_7_, v_name_1_);
if (v___x_8_ == 0)
{
lean_object* v___x_9_; 
lean_dec_ref(v_a_4_);
v___x_9_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_9_, 0, v___x_2_);
return v___x_9_;
}
else
{
lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; 
lean_dec_ref(v___x_2_);
v___x_10_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_10_, 0, v_a_4_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v___x_10_);
v___x_12_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_12_, 0, v___x_11_);
lean_ctor_set(v___x_12_, 1, v___x_3_);
v___x_13_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_13_, 0, v___x_12_);
return v___x_13_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed(lean_object* v_name_14_, lean_object* v___x_15_, lean_object* v___x_16_, lean_object* v_a_17_, lean_object* v_x_18_, lean_object* v___y_19_){
_start:
{
lean_object* v_res_20_; 
v_res_20_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0(v_name_14_, v___x_15_, v___x_16_, v_a_17_, v_x_18_, v___y_19_);
lean_dec_ref(v___y_19_);
lean_dec(v_name_14_);
return v_res_20_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg(lean_object* v_defaultPkg_47_, lean_object* v_root_48_, lean_object* v_name_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v_a_54_; 
switch(lean_obj_tag(v_name_49_))
{
case 0:
{
lean_object* v___x_70_; 
lean_dec_ref(v_root_48_);
v___x_70_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_70_, 0, v_defaultPkg_47_);
lean_ctor_set(v___x_70_, 1, v___y_51_);
return v___x_70_;
}
case 2:
{
lean_object* v_toContext_71_; lean_object* v_packageMap_72_; lean_object* v___x_73_; lean_object* v___x_74_; 
lean_dec_ref(v_defaultPkg_47_);
v_toContext_71_ = lean_ctor_get(v___y_50_, 1);
v_packageMap_72_ = lean_ctor_get(v_toContext_71_, 5);
v___x_73_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3));
lean_inc_ref(v_name_49_);
lean_inc(v_packageMap_72_);
v___x_74_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_73_, v_packageMap_72_, v_name_49_);
if (lean_obj_tag(v___x_74_) == 1)
{
lean_object* v_val_75_; lean_object* v___x_76_; 
lean_dec_ref_known(v_name_49_, 2);
lean_dec_ref(v_root_48_);
v_val_75_ = lean_ctor_get(v___x_74_, 0);
lean_inc(v_val_75_);
lean_dec_ref_known(v___x_74_, 1);
v___x_76_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_76_, 0, v_val_75_);
lean_ctor_set(v___x_76_, 1, v___y_51_);
return v___x_76_;
}
else
{
lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; 
lean_dec(v___x_74_);
v___x_77_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_78_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_48_);
v___x_79_ = lean_string_append(v___x_77_, v___x_78_);
lean_dec_ref(v___x_78_);
v___x_80_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_81_ = lean_string_append(v___x_79_, v___x_80_);
v___x_82_ = 1;
v___x_83_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_49_, v___x_82_);
v___x_84_ = lean_string_append(v___x_81_, v___x_83_);
lean_dec_ref(v___x_83_);
v___x_85_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_86_ = lean_string_append(v___x_84_, v___x_85_);
v___x_87_ = 3;
v___x_88_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_88_, 0, v___x_86_);
lean_ctor_set_uint8(v___x_88_, sizeof(void*)*1, v___x_87_);
v___x_89_ = lean_array_get_size(v___y_51_);
v___x_90_ = lean_array_push(v___y_51_, v___x_88_);
v___x_91_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_91_, 0, v___x_89_);
lean_ctor_set(v___x_91_, 1, v___x_90_);
return v___x_91_;
}
}
default: 
{
lean_object* v_toContext_92_; lean_object* v_packages_93_; lean_object* v___x_94_; lean_object* v___x_95_; lean_object* v___x_96_; lean_object* v___f_97_; size_t v_sz_98_; size_t v___x_99_; lean_object* v___x_100_; lean_object* v_fst_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_110_; 
lean_dec_ref(v_defaultPkg_47_);
v_toContext_92_ = lean_ctor_get(v___y_50_, 1);
v_packages_93_ = lean_ctor_get(v_toContext_92_, 4);
v___x_94_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13));
v___x_95_ = lean_box(0);
v___x_96_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
lean_inc(v_name_49_);
v___f_97_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_97_, 0, v_name_49_);
lean_closure_set(v___f_97_, 1, v___x_96_);
lean_closure_set(v___f_97_, 2, v___x_95_);
v_sz_98_ = lean_array_size(v_packages_93_);
v___x_99_ = ((size_t)0ULL);
lean_inc_ref(v_packages_93_);
v___x_100_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_94_, v_packages_93_, v___f_97_, v_sz_98_, v___x_99_, v___x_96_);
v_fst_101_ = lean_ctor_get(v___x_100_, 0);
v_isSharedCheck_110_ = !lean_is_exclusive(v___x_100_);
if (v_isSharedCheck_110_ == 0)
{
lean_object* v_unused_111_; 
v_unused_111_ = lean_ctor_get(v___x_100_, 1);
lean_dec(v_unused_111_);
v___x_103_ = v___x_100_;
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_fst_101_);
lean_dec(v___x_100_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_110_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
if (lean_obj_tag(v_fst_101_) == 0)
{
lean_del_object(v___x_103_);
v_a_54_ = v___y_51_;
goto v___jp_53_;
}
else
{
lean_object* v_val_105_; 
v_val_105_ = lean_ctor_get(v_fst_101_, 0);
lean_inc(v_val_105_);
lean_dec_ref_known(v_fst_101_, 1);
if (lean_obj_tag(v_val_105_) == 1)
{
lean_object* v_val_106_; lean_object* v___x_108_; 
lean_dec(v_name_49_);
lean_dec_ref(v_root_48_);
v_val_106_ = lean_ctor_get(v_val_105_, 0);
lean_inc(v_val_106_);
lean_dec_ref_known(v_val_105_, 1);
if (v_isShared_104_ == 0)
{
lean_ctor_set(v___x_103_, 1, v___y_51_);
lean_ctor_set(v___x_103_, 0, v_val_106_);
v___x_108_ = v___x_103_;
goto v_reusejp_107_;
}
else
{
lean_object* v_reuseFailAlloc_109_; 
v_reuseFailAlloc_109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_109_, 0, v_val_106_);
lean_ctor_set(v_reuseFailAlloc_109_, 1, v___y_51_);
v___x_108_ = v_reuseFailAlloc_109_;
goto v_reusejp_107_;
}
v_reusejp_107_:
{
return v___x_108_;
}
}
else
{
lean_dec(v_val_105_);
lean_del_object(v___x_103_);
v_a_54_ = v___y_51_;
goto v___jp_53_;
}
}
}
}
}
v___jp_53_:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; uint8_t v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; uint8_t v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; 
v___x_55_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_56_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_48_);
v___x_57_ = lean_string_append(v___x_55_, v___x_56_);
lean_dec_ref(v___x_56_);
v___x_58_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_59_ = lean_string_append(v___x_57_, v___x_58_);
v___x_60_ = 1;
v___x_61_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_49_, v___x_60_);
v___x_62_ = lean_string_append(v___x_59_, v___x_61_);
lean_dec_ref(v___x_61_);
v___x_63_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_64_ = lean_string_append(v___x_62_, v___x_63_);
v___x_65_ = 3;
v___x_66_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_66_, 0, v___x_64_);
lean_ctor_set_uint8(v___x_66_, sizeof(void*)*1, v___x_65_);
v___x_67_ = lean_array_get_size(v_a_54_);
v___x_68_ = lean_array_push(v_a_54_, v___x_66_);
v___x_69_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_69_, 0, v___x_67_);
lean_ctor_set(v___x_69_, 1, v___x_68_);
return v___x_69_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___boxed(lean_object* v_defaultPkg_112_, lean_object* v_root_113_, lean_object* v_name_114_, lean_object* v___y_115_, lean_object* v___y_116_, lean_object* v___y_117_){
_start:
{
lean_object* v_res_118_; 
v_res_118_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg(v_defaultPkg_112_, v_root_113_, v_name_114_, v___y_115_, v___y_116_);
lean_dec_ref(v___y_115_);
return v_res_118_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD(lean_object* v_defaultPkg_119_, lean_object* v_root_120_, lean_object* v_name_121_, lean_object* v___y_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v_a_130_; 
switch(lean_obj_tag(v_name_121_))
{
case 0:
{
lean_object* v___x_146_; 
lean_dec_ref(v_root_120_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v_defaultPkg_119_);
lean_ctor_set(v___x_146_, 1, v___y_127_);
return v___x_146_;
}
case 2:
{
lean_object* v_toContext_147_; lean_object* v_packageMap_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
lean_dec_ref(v_defaultPkg_119_);
v_toContext_147_ = lean_ctor_get(v___y_126_, 1);
v_packageMap_148_ = lean_ctor_get(v_toContext_147_, 5);
v___x_149_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__3));
lean_inc_ref(v_name_121_);
lean_inc(v_packageMap_148_);
v___x_150_ = l_Std_DTreeMap_Internal_Impl_get_x3f___redArg(v___x_149_, v_packageMap_148_, v_name_121_);
if (lean_obj_tag(v___x_150_) == 1)
{
lean_object* v_val_151_; lean_object* v___x_152_; 
lean_dec_ref_known(v_name_121_, 2);
lean_dec_ref(v_root_120_);
v_val_151_ = lean_ctor_get(v___x_150_, 0);
lean_inc(v_val_151_);
lean_dec_ref_known(v___x_150_, 1);
v___x_152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_152_, 0, v_val_151_);
lean_ctor_set(v___x_152_, 1, v___y_127_);
return v___x_152_;
}
else
{
lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; uint8_t v___x_163_; lean_object* v___x_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; 
lean_dec(v___x_150_);
v___x_153_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_154_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_120_);
v___x_155_ = lean_string_append(v___x_153_, v___x_154_);
lean_dec_ref(v___x_154_);
v___x_156_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_157_ = lean_string_append(v___x_155_, v___x_156_);
v___x_158_ = 1;
v___x_159_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_121_, v___x_158_);
v___x_160_ = lean_string_append(v___x_157_, v___x_159_);
lean_dec_ref(v___x_159_);
v___x_161_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_162_ = lean_string_append(v___x_160_, v___x_161_);
v___x_163_ = 3;
v___x_164_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_164_, 0, v___x_162_);
lean_ctor_set_uint8(v___x_164_, sizeof(void*)*1, v___x_163_);
v___x_165_ = lean_array_get_size(v___y_127_);
v___x_166_ = lean_array_push(v___y_127_, v___x_164_);
v___x_167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_167_, 0, v___x_165_);
lean_ctor_set(v___x_167_, 1, v___x_166_);
return v___x_167_;
}
}
default: 
{
lean_object* v_toContext_168_; lean_object* v_packages_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___f_173_; size_t v_sz_174_; size_t v___x_175_; lean_object* v___x_176_; lean_object* v_fst_177_; lean_object* v___x_179_; uint8_t v_isShared_180_; uint8_t v_isSharedCheck_186_; 
lean_dec_ref(v_defaultPkg_119_);
v_toContext_168_ = lean_ctor_get(v___y_126_, 1);
v_packages_169_ = lean_ctor_get(v_toContext_168_, 4);
v___x_170_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__13));
v___x_171_ = lean_box(0);
v___x_172_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
lean_inc(v_name_121_);
v___f_173_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___lam__0___boxed), 6, 3);
lean_closure_set(v___f_173_, 0, v_name_121_);
lean_closure_set(v___f_173_, 1, v___x_172_);
lean_closure_set(v___f_173_, 2, v___x_171_);
v_sz_174_ = lean_array_size(v_packages_169_);
v___x_175_ = ((size_t)0ULL);
lean_inc_ref(v_packages_169_);
v___x_176_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_170_, v_packages_169_, v___f_173_, v_sz_174_, v___x_175_, v___x_172_);
v_fst_177_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_186_ == 0)
{
lean_object* v_unused_187_; 
v_unused_187_ = lean_ctor_get(v___x_176_, 1);
lean_dec(v_unused_187_);
v___x_179_ = v___x_176_;
v_isShared_180_ = v_isSharedCheck_186_;
goto v_resetjp_178_;
}
else
{
lean_inc(v_fst_177_);
lean_dec(v___x_176_);
v___x_179_ = lean_box(0);
v_isShared_180_ = v_isSharedCheck_186_;
goto v_resetjp_178_;
}
v_resetjp_178_:
{
if (lean_obj_tag(v_fst_177_) == 0)
{
lean_del_object(v___x_179_);
v_a_130_ = v___y_127_;
goto v___jp_129_;
}
else
{
lean_object* v_val_181_; 
v_val_181_ = lean_ctor_get(v_fst_177_, 0);
lean_inc(v_val_181_);
lean_dec_ref_known(v_fst_177_, 1);
if (lean_obj_tag(v_val_181_) == 1)
{
lean_object* v_val_182_; lean_object* v___x_184_; 
lean_dec(v_name_121_);
lean_dec_ref(v_root_120_);
v_val_182_ = lean_ctor_get(v_val_181_, 0);
lean_inc(v_val_182_);
lean_dec_ref_known(v_val_181_, 1);
if (v_isShared_180_ == 0)
{
lean_ctor_set(v___x_179_, 1, v___y_127_);
lean_ctor_set(v___x_179_, 0, v_val_182_);
v___x_184_ = v___x_179_;
goto v_reusejp_183_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_val_182_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v___y_127_);
v___x_184_ = v_reuseFailAlloc_185_;
goto v_reusejp_183_;
}
v_reusejp_183_:
{
return v___x_184_;
}
}
else
{
lean_dec(v_val_181_);
lean_del_object(v___x_179_);
v_a_130_ = v___y_127_;
goto v___jp_129_;
}
}
}
}
}
v___jp_129_:
{
lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; uint8_t v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; uint8_t v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_131_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_132_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_120_);
v___x_133_ = lean_string_append(v___x_131_, v___x_132_);
lean_dec_ref(v___x_132_);
v___x_134_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_135_ = lean_string_append(v___x_133_, v___x_134_);
v___x_136_ = 1;
v___x_137_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_121_, v___x_136_);
v___x_138_ = lean_string_append(v___x_135_, v___x_137_);
lean_dec_ref(v___x_137_);
v___x_139_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_140_ = lean_string_append(v___x_138_, v___x_139_);
v___x_141_ = 3;
v___x_142_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_142_, 0, v___x_140_);
lean_ctor_set_uint8(v___x_142_, sizeof(void*)*1, v___x_141_);
v___x_143_ = lean_array_get_size(v_a_130_);
v___x_144_ = lean_array_push(v_a_130_, v___x_142_);
v___x_145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_145_, 0, v___x_143_);
lean_ctor_set(v___x_145_, 1, v___x_144_);
return v___x_145_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___boxed(lean_object* v_defaultPkg_188_, lean_object* v_root_189_, lean_object* v_name_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_, lean_object* v___y_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_){
_start:
{
lean_object* v_res_198_; 
v_res_198_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD(v_defaultPkg_188_, v_root_189_, v_name_190_, v___y_191_, v___y_192_, v___y_193_, v___y_194_, v___y_195_, v___y_196_);
lean_dec_ref(v___y_195_);
lean_dec(v___y_194_);
lean_dec(v___y_193_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
return v_res_198_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0(lean_object* v_target_199_, lean_object* v_kind_200_, lean_object* v___x_201_, lean_object* v_data_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_log_210_; uint8_t v_action_211_; uint8_t v_wantsRebuild_212_; lean_object* v_trace_213_; lean_object* v_buildTime_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_244_; 
v_log_210_ = lean_ctor_get(v___y_208_, 0);
v_action_211_ = lean_ctor_get_uint8(v___y_208_, sizeof(void*)*3);
v_wantsRebuild_212_ = lean_ctor_get_uint8(v___y_208_, sizeof(void*)*3 + 1);
v_trace_213_ = lean_ctor_get(v___y_208_, 1);
v_buildTime_214_ = lean_ctor_get(v___y_208_, 2);
v_isSharedCheck_244_ = !lean_is_exclusive(v___y_208_);
if (v_isSharedCheck_244_ == 0)
{
v___x_216_ = v___y_208_;
v_isShared_217_ = v_isSharedCheck_244_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_buildTime_214_);
lean_inc(v_trace_213_);
lean_inc(v_log_210_);
lean_dec(v___y_208_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_244_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___x_218_; lean_object* v___x_219_; 
v___x_218_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_218_, 0, v_target_199_);
lean_ctor_set(v___x_218_, 1, v_kind_200_);
lean_ctor_set(v___x_218_, 2, v_data_202_);
lean_ctor_set(v___x_218_, 3, v___x_201_);
lean_inc_ref(v___y_207_);
lean_inc(v___y_206_);
lean_inc(v___y_205_);
lean_inc(v___y_204_);
v___x_219_ = lean_apply_7(v___y_203_, v___x_218_, v___y_204_, v___y_205_, v___y_206_, v___y_207_, v_log_210_, lean_box(0));
if (lean_obj_tag(v___x_219_) == 0)
{
lean_object* v_a_220_; lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_231_; 
v_a_220_ = lean_ctor_get(v___x_219_, 0);
v_a_221_ = lean_ctor_get(v___x_219_, 1);
v_isSharedCheck_231_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_231_ == 0)
{
v___x_223_ = v___x_219_;
v_isShared_224_ = v_isSharedCheck_231_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_inc(v_a_220_);
lean_dec(v___x_219_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_231_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v_a_221_);
v___x_226_ = v___x_216_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v_a_221_);
lean_ctor_set(v_reuseFailAlloc_230_, 1, v_trace_213_);
lean_ctor_set(v_reuseFailAlloc_230_, 2, v_buildTime_214_);
lean_ctor_set_uint8(v_reuseFailAlloc_230_, sizeof(void*)*3, v_action_211_);
lean_ctor_set_uint8(v_reuseFailAlloc_230_, sizeof(void*)*3 + 1, v_wantsRebuild_212_);
v___x_226_ = v_reuseFailAlloc_230_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_228_; 
if (v_isShared_224_ == 0)
{
lean_ctor_set(v___x_223_, 1, v___x_226_);
v___x_228_ = v___x_223_;
goto v_reusejp_227_;
}
else
{
lean_object* v_reuseFailAlloc_229_; 
v_reuseFailAlloc_229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_229_, 0, v_a_220_);
lean_ctor_set(v_reuseFailAlloc_229_, 1, v___x_226_);
v___x_228_ = v_reuseFailAlloc_229_;
goto v_reusejp_227_;
}
v_reusejp_227_:
{
return v___x_228_;
}
}
}
}
else
{
lean_object* v_a_232_; lean_object* v_a_233_; lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_243_; 
v_a_232_ = lean_ctor_get(v___x_219_, 0);
v_a_233_ = lean_ctor_get(v___x_219_, 1);
v_isSharedCheck_243_ = !lean_is_exclusive(v___x_219_);
if (v_isSharedCheck_243_ == 0)
{
v___x_235_ = v___x_219_;
v_isShared_236_ = v_isSharedCheck_243_;
goto v_resetjp_234_;
}
else
{
lean_inc(v_a_233_);
lean_inc(v_a_232_);
lean_dec(v___x_219_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_243_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v___x_238_; 
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 0, v_a_233_);
v___x_238_ = v___x_216_;
goto v_reusejp_237_;
}
else
{
lean_object* v_reuseFailAlloc_242_; 
v_reuseFailAlloc_242_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_242_, 0, v_a_233_);
lean_ctor_set(v_reuseFailAlloc_242_, 1, v_trace_213_);
lean_ctor_set(v_reuseFailAlloc_242_, 2, v_buildTime_214_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, sizeof(void*)*3, v_action_211_);
lean_ctor_set_uint8(v_reuseFailAlloc_242_, sizeof(void*)*3 + 1, v_wantsRebuild_212_);
v___x_238_ = v_reuseFailAlloc_242_;
goto v_reusejp_237_;
}
v_reusejp_237_:
{
lean_object* v___x_240_; 
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 1, v___x_238_);
v___x_240_ = v___x_235_;
goto v_reusejp_239_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v_a_232_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v___x_238_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0___boxed(lean_object* v_target_245_, lean_object* v_kind_246_, lean_object* v___x_247_, lean_object* v_data_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0(v_target_245_, v_kind_246_, v___x_247_, v_data_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec(v___y_251_);
lean_dec(v___y_250_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(lean_object* v_t_257_, lean_object* v_k_258_){
_start:
{
if (lean_obj_tag(v_t_257_) == 0)
{
lean_object* v_k_259_; lean_object* v_v_260_; lean_object* v_l_261_; lean_object* v_r_262_; uint8_t v___x_263_; 
v_k_259_ = lean_ctor_get(v_t_257_, 1);
v_v_260_ = lean_ctor_get(v_t_257_, 2);
v_l_261_ = lean_ctor_get(v_t_257_, 3);
v_r_262_ = lean_ctor_get(v_t_257_, 4);
v___x_263_ = l___private_Lean_Data_Name_0__Lean_Name_quickCmpImpl(v_k_258_, v_k_259_);
switch(v___x_263_)
{
case 0:
{
v_t_257_ = v_l_261_;
goto _start;
}
case 1:
{
lean_object* v___x_265_; 
lean_inc(v_v_260_);
v___x_265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_265_, 0, v_v_260_);
return v___x_265_;
}
default: 
{
v_t_257_ = v_r_262_;
goto _start;
}
}
}
else
{
lean_object* v___x_267_; 
v___x_267_ = lean_box(0);
return v___x_267_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg___boxed(lean_object* v_t_268_, lean_object* v_k_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_t_268_, v_k_269_);
lean_dec(v_k_269_);
lean_dec(v_t_268_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(lean_object* v_package_271_, lean_object* v_as_272_, size_t v_sz_273_, size_t v_i_274_, lean_object* v_b_275_){
_start:
{
uint8_t v___x_276_; 
v___x_276_ = lean_usize_dec_lt(v_i_274_, v_sz_273_);
if (v___x_276_ == 0)
{
lean_inc_ref(v_b_275_);
return v_b_275_;
}
else
{
lean_object* v_a_277_; lean_object* v_baseName_278_; lean_object* v___x_279_; uint8_t v___x_280_; 
v_a_277_ = lean_array_uget_borrowed(v_as_272_, v_i_274_);
v_baseName_278_ = lean_ctor_get(v_a_277_, 1);
v___x_279_ = lean_box(0);
v___x_280_ = lean_name_eq(v_baseName_278_, v_package_271_);
if (v___x_280_ == 0)
{
lean_object* v___x_281_; size_t v___x_282_; size_t v___x_283_; 
v___x_281_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v___x_282_ = ((size_t)1ULL);
v___x_283_ = lean_usize_add(v_i_274_, v___x_282_);
v_i_274_ = v___x_283_;
v_b_275_ = v___x_281_;
goto _start;
}
else
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; 
lean_inc(v_a_277_);
v___x_285_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_285_, 0, v_a_277_);
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v___x_285_);
v___x_287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_286_);
lean_ctor_set(v___x_287_, 1, v___x_279_);
return v___x_287_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1___boxed(lean_object* v_package_288_, lean_object* v_as_289_, lean_object* v_sz_290_, lean_object* v_i_291_, lean_object* v_b_292_){
_start:
{
size_t v_sz_boxed_293_; size_t v_i_boxed_294_; lean_object* v_res_295_; 
v_sz_boxed_293_ = lean_unbox_usize(v_sz_290_);
lean_dec(v_sz_290_);
v_i_boxed_294_ = lean_unbox_usize(v_i_291_);
lean_dec(v_i_291_);
v_res_295_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_288_, v_as_289_, v_sz_boxed_293_, v_i_boxed_294_, v_b_292_);
lean_dec_ref(v_b_292_);
lean_dec_ref(v_as_289_);
lean_dec(v_package_288_);
return v_res_295_;
}
}
static lean_object* _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3(void){
_start:
{
lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_300_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__2));
v___x_301_ = l_Lake_BuildTrace_nil(v___x_300_);
return v___x_301_;
}
}
static lean_object* _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4(void){
_start:
{
lean_object* v___x_302_; lean_object* v___x_303_; uint8_t v___x_304_; uint8_t v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_302_ = lean_unsigned_to_nat(0u);
v___x_303_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3);
v___x_304_ = 0;
v___x_305_ = 0;
v___x_306_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__0));
v___x_307_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_307_, 0, v___x_306_);
lean_ctor_set(v___x_307_, 1, v___x_303_);
lean_ctor_set(v___x_307_, 2, v___x_302_);
lean_ctor_set_uint8(v___x_307_, sizeof(void*)*3, v___x_305_);
lean_ctor_set_uint8(v___x_307_, sizeof(void*)*3 + 1, v___x_304_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(lean_object* v_defaultPkg_318_, lean_object* v_root_319_, lean_object* v_self_320_, uint8_t v_facetless_321_, lean_object* v___y_322_, lean_object* v___y_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_){
_start:
{
lean_object* v_a_330_; lean_object* v_a_331_; lean_object* v_a_334_; lean_object* v_a_335_; lean_object* v_a_338_; lean_object* v_a_339_; lean_object* v___x_341_; 
v___x_341_ = l_Lake_instDataKindModule;
switch(lean_obj_tag(v_self_320_))
{
case 0:
{
lean_object* v_module_342_; lean_object* v_toContext_343_; lean_object* v___x_344_; 
lean_dec_ref(v___y_322_);
lean_dec_ref(v_defaultPkg_318_);
v_module_342_ = lean_ctor_get(v_self_320_, 0);
lean_inc_n(v_module_342_, 2);
lean_dec_ref_known(v_self_320_, 1);
v_toContext_343_ = lean_ctor_get(v___y_326_, 1);
v___x_344_ = l_Lake_Workspace_findModule_x3f(v_module_342_, v_toContext_343_);
if (lean_obj_tag(v___x_344_) == 1)
{
lean_object* v_val_345_; lean_object* v_lib_346_; lean_object* v_pkg_347_; lean_object* v_keyName_348_; lean_object* v___x_349_; lean_object* v___x_350_; uint8_t v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
lean_dec_ref(v_root_319_);
v_val_345_ = lean_ctor_get(v___x_344_, 0);
lean_inc(v_val_345_);
lean_dec_ref_known(v___x_344_, 1);
v_lib_346_ = lean_ctor_get(v_val_345_, 0);
v_pkg_347_ = lean_ctor_get(v_lib_346_, 0);
v_keyName_348_ = lean_ctor_get(v_pkg_347_, 2);
lean_inc(v_keyName_348_);
v___x_349_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_349_, 0, v_keyName_348_);
lean_ctor_set(v___x_349_, 1, v_module_342_);
v___x_350_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_351_ = 0;
v___x_352_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_353_, 0, v_val_345_);
lean_ctor_set(v___x_353_, 1, v___x_352_);
v___x_354_ = lean_task_pure(v___x_353_);
v___x_355_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_355_, 0, v___x_354_);
lean_ctor_set(v___x_355_, 1, v___x_341_);
lean_ctor_set(v___x_355_, 2, v___x_350_);
lean_ctor_set_uint8(v___x_355_, sizeof(void*)*3, v___x_351_);
v___x_356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_356_, 0, v___x_349_);
lean_ctor_set(v___x_356_, 1, v___x_355_);
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v___y_327_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; uint8_t v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; uint8_t v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
lean_dec(v___x_344_);
v___x_358_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_359_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_360_ = lean_string_append(v___x_358_, v___x_359_);
lean_dec_ref(v___x_359_);
v___x_361_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5));
v___x_362_ = lean_string_append(v___x_360_, v___x_361_);
v___x_363_ = 1;
v___x_364_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_342_, v___x_363_);
v___x_365_ = lean_string_append(v___x_362_, v___x_364_);
lean_dec_ref(v___x_364_);
v___x_366_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_367_ = lean_string_append(v___x_365_, v___x_366_);
v___x_368_ = 3;
v___x_369_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_369_, 0, v___x_367_);
lean_ctor_set_uint8(v___x_369_, sizeof(void*)*1, v___x_368_);
v___x_370_ = lean_array_get_size(v___y_327_);
v___x_371_ = lean_array_push(v___y_327_, v___x_369_);
v___x_372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_372_, 0, v___x_370_);
lean_ctor_set(v___x_372_, 1, v___x_371_);
return v___x_372_;
}
}
case 1:
{
lean_object* v_package_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_436_; 
lean_dec_ref(v___y_322_);
v_package_373_ = lean_ctor_get(v_self_320_, 0);
v_isSharedCheck_436_ = !lean_is_exclusive(v_self_320_);
if (v_isSharedCheck_436_ == 0)
{
v___x_375_ = v_self_320_;
v_isShared_376_ = v_isSharedCheck_436_;
goto v_resetjp_374_;
}
else
{
lean_inc(v_package_373_);
lean_dec(v_self_320_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_436_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v_a_378_; lean_object* v___x_393_; lean_object* v_a_395_; lean_object* v_a_396_; 
v___x_393_ = l_Lake_instDataKindPackage;
switch(lean_obj_tag(v_package_373_))
{
case 0:
{
lean_dec_ref(v_root_319_);
v_a_395_ = v_defaultPkg_318_;
v_a_396_ = v___y_327_;
goto v___jp_394_;
}
case 2:
{
lean_object* v_toContext_409_; lean_object* v_packageMap_410_; lean_object* v___x_411_; 
lean_dec_ref(v_defaultPkg_318_);
v_toContext_409_ = lean_ctor_get(v___y_326_, 1);
v_packageMap_410_ = lean_ctor_get(v_toContext_409_, 5);
v___x_411_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_410_, v_package_373_);
if (lean_obj_tag(v___x_411_) == 1)
{
lean_object* v_val_412_; 
lean_dec_ref_known(v_package_373_, 2);
lean_dec_ref(v_root_319_);
v_val_412_ = lean_ctor_get(v___x_411_, 0);
lean_inc(v_val_412_);
lean_dec_ref_known(v___x_411_, 1);
v_a_395_ = v_val_412_;
v_a_396_ = v___y_327_;
goto v___jp_394_;
}
else
{
lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; uint8_t v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; uint8_t v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
lean_dec(v___x_411_);
lean_del_object(v___x_375_);
v___x_413_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_414_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_415_ = lean_string_append(v___x_413_, v___x_414_);
lean_dec_ref(v___x_414_);
v___x_416_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_417_ = lean_string_append(v___x_415_, v___x_416_);
v___x_418_ = 1;
v___x_419_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_373_, v___x_418_);
v___x_420_ = lean_string_append(v___x_417_, v___x_419_);
lean_dec_ref(v___x_419_);
v___x_421_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_422_ = lean_string_append(v___x_420_, v___x_421_);
v___x_423_ = 3;
v___x_424_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_424_, 0, v___x_422_);
lean_ctor_set_uint8(v___x_424_, sizeof(void*)*1, v___x_423_);
v___x_425_ = lean_array_get_size(v___y_327_);
v___x_426_ = lean_array_push(v___y_327_, v___x_424_);
v_a_338_ = v___x_425_;
v_a_339_ = v___x_426_;
goto v___jp_337_;
}
}
default: 
{
lean_object* v_toContext_427_; lean_object* v_packages_428_; lean_object* v___x_429_; size_t v_sz_430_; size_t v___x_431_; lean_object* v___x_432_; lean_object* v_fst_433_; 
lean_dec_ref(v_defaultPkg_318_);
v_toContext_427_ = lean_ctor_get(v___y_326_, 1);
v_packages_428_ = lean_ctor_get(v_toContext_427_, 4);
v___x_429_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v_sz_430_ = lean_array_size(v_packages_428_);
v___x_431_ = ((size_t)0ULL);
v___x_432_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_373_, v_packages_428_, v_sz_430_, v___x_431_, v___x_429_);
v_fst_433_ = lean_ctor_get(v___x_432_, 0);
lean_inc(v_fst_433_);
lean_dec_ref(v___x_432_);
if (lean_obj_tag(v_fst_433_) == 0)
{
lean_del_object(v___x_375_);
v_a_378_ = v___y_327_;
goto v___jp_377_;
}
else
{
lean_object* v_val_434_; 
v_val_434_ = lean_ctor_get(v_fst_433_, 0);
lean_inc(v_val_434_);
lean_dec_ref_known(v_fst_433_, 1);
if (lean_obj_tag(v_val_434_) == 1)
{
lean_object* v_val_435_; 
lean_dec(v_package_373_);
lean_dec_ref(v_root_319_);
v_val_435_ = lean_ctor_get(v_val_434_, 0);
lean_inc(v_val_435_);
lean_dec_ref_known(v_val_434_, 1);
v_a_395_ = v_val_435_;
v_a_396_ = v___y_327_;
goto v___jp_394_;
}
else
{
lean_dec(v_val_434_);
lean_del_object(v___x_375_);
v_a_378_ = v___y_327_;
goto v___jp_377_;
}
}
}
}
v___jp_377_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; uint8_t v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; uint8_t v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_379_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_380_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_381_ = lean_string_append(v___x_379_, v___x_380_);
lean_dec_ref(v___x_380_);
v___x_382_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_383_ = lean_string_append(v___x_381_, v___x_382_);
v___x_384_ = 1;
v___x_385_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_373_, v___x_384_);
v___x_386_ = lean_string_append(v___x_383_, v___x_385_);
lean_dec_ref(v___x_385_);
v___x_387_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_388_ = lean_string_append(v___x_386_, v___x_387_);
v___x_389_ = 3;
v___x_390_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_390_, 0, v___x_388_);
lean_ctor_set_uint8(v___x_390_, sizeof(void*)*1, v___x_389_);
v___x_391_ = lean_array_get_size(v_a_378_);
v___x_392_ = lean_array_push(v_a_378_, v___x_390_);
v_a_338_ = v___x_391_;
v_a_339_ = v___x_392_;
goto v___jp_337_;
}
v___jp_394_:
{
lean_object* v_keyName_397_; lean_object* v___x_399_; 
v_keyName_397_ = lean_ctor_get(v_a_395_, 2);
lean_inc(v_keyName_397_);
if (v_isShared_376_ == 0)
{
lean_ctor_set(v___x_375_, 0, v_keyName_397_);
v___x_399_ = v___x_375_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_keyName_397_);
v___x_399_ = v_reuseFailAlloc_408_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
lean_object* v___x_400_; uint8_t v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_400_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_401_ = 0;
v___x_402_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v_a_395_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = lean_task_pure(v___x_403_);
v___x_405_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___x_393_);
lean_ctor_set(v___x_405_, 2, v___x_400_);
lean_ctor_set_uint8(v___x_405_, sizeof(void*)*3, v___x_401_);
v___x_406_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_406_, 0, v___x_399_);
lean_ctor_set(v___x_406_, 1, v___x_405_);
v___x_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_407_, 0, v___x_406_);
lean_ctor_set(v___x_407_, 1, v_a_396_);
return v___x_407_;
}
}
}
}
case 2:
{
lean_object* v_package_437_; lean_object* v_module_438_; lean_object* v___x_440_; uint8_t v_isShared_441_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v___y_322_);
v_package_437_ = lean_ctor_get(v_self_320_, 0);
v_module_438_ = lean_ctor_get(v_self_320_, 1);
v_isSharedCheck_523_ = !lean_is_exclusive(v_self_320_);
if (v_isSharedCheck_523_ == 0)
{
v___x_440_ = v_self_320_;
v_isShared_441_ = v_isSharedCheck_523_;
goto v_resetjp_439_;
}
else
{
lean_inc(v_module_438_);
lean_inc(v_package_437_);
lean_dec(v_self_320_);
v___x_440_ = lean_box(0);
v_isShared_441_ = v_isSharedCheck_523_;
goto v_resetjp_439_;
}
v_resetjp_439_:
{
lean_object* v_a_443_; lean_object* v_a_444_; lean_object* v_a_481_; 
switch(lean_obj_tag(v_package_437_))
{
case 0:
{
v_a_443_ = v_defaultPkg_318_;
v_a_444_ = v___y_327_;
goto v___jp_442_;
}
case 2:
{
lean_object* v_toContext_496_; lean_object* v_packageMap_497_; lean_object* v___x_498_; 
lean_dec_ref(v_defaultPkg_318_);
v_toContext_496_ = lean_ctor_get(v___y_326_, 1);
v_packageMap_497_ = lean_ctor_get(v_toContext_496_, 5);
v___x_498_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_497_, v_package_437_);
if (lean_obj_tag(v___x_498_) == 1)
{
lean_object* v_val_499_; 
lean_dec_ref_known(v_package_437_, 2);
v_val_499_ = lean_ctor_get(v___x_498_, 0);
lean_inc(v_val_499_);
lean_dec_ref_known(v___x_498_, 1);
v_a_443_ = v_val_499_;
v_a_444_ = v___y_327_;
goto v___jp_442_;
}
else
{
lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; uint8_t v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; uint8_t v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; 
lean_dec(v___x_498_);
lean_del_object(v___x_440_);
lean_dec(v_module_438_);
v___x_500_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_501_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_502_ = lean_string_append(v___x_500_, v___x_501_);
lean_dec_ref(v___x_501_);
v___x_503_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_504_ = lean_string_append(v___x_502_, v___x_503_);
v___x_505_ = 1;
v___x_506_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_437_, v___x_505_);
v___x_507_ = lean_string_append(v___x_504_, v___x_506_);
lean_dec_ref(v___x_506_);
v___x_508_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_509_ = lean_string_append(v___x_507_, v___x_508_);
v___x_510_ = 3;
v___x_511_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_511_, 0, v___x_509_);
lean_ctor_set_uint8(v___x_511_, sizeof(void*)*1, v___x_510_);
v___x_512_ = lean_array_get_size(v___y_327_);
v___x_513_ = lean_array_push(v___y_327_, v___x_511_);
v_a_334_ = v___x_512_;
v_a_335_ = v___x_513_;
goto v___jp_333_;
}
}
default: 
{
lean_object* v_toContext_514_; lean_object* v_packages_515_; lean_object* v___x_516_; size_t v_sz_517_; size_t v___x_518_; lean_object* v___x_519_; lean_object* v_fst_520_; 
lean_dec_ref(v_defaultPkg_318_);
v_toContext_514_ = lean_ctor_get(v___y_326_, 1);
v_packages_515_ = lean_ctor_get(v_toContext_514_, 4);
v___x_516_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v_sz_517_ = lean_array_size(v_packages_515_);
v___x_518_ = ((size_t)0ULL);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_437_, v_packages_515_, v_sz_517_, v___x_518_, v___x_516_);
v_fst_520_ = lean_ctor_get(v___x_519_, 0);
lean_inc(v_fst_520_);
lean_dec_ref(v___x_519_);
if (lean_obj_tag(v_fst_520_) == 0)
{
lean_del_object(v___x_440_);
lean_dec(v_module_438_);
v_a_481_ = v___y_327_;
goto v___jp_480_;
}
else
{
lean_object* v_val_521_; 
v_val_521_ = lean_ctor_get(v_fst_520_, 0);
lean_inc(v_val_521_);
lean_dec_ref_known(v_fst_520_, 1);
if (lean_obj_tag(v_val_521_) == 1)
{
lean_object* v_val_522_; 
lean_dec(v_package_437_);
v_val_522_ = lean_ctor_get(v_val_521_, 0);
lean_inc(v_val_522_);
lean_dec_ref_known(v_val_521_, 1);
v_a_443_ = v_val_522_;
v_a_444_ = v___y_327_;
goto v___jp_442_;
}
else
{
lean_dec(v_val_521_);
lean_del_object(v___x_440_);
lean_dec(v_module_438_);
v_a_481_ = v___y_327_;
goto v___jp_480_;
}
}
}
}
v___jp_442_:
{
lean_object* v___x_445_; 
lean_inc_ref(v_a_443_);
lean_inc(v_module_438_);
v___x_445_ = l_Lake_Package_findTargetModule_x3f(v_module_438_, v_a_443_);
if (lean_obj_tag(v___x_445_) == 1)
{
lean_object* v_val_446_; lean_object* v_keyName_447_; lean_object* v___x_449_; 
lean_dec_ref(v_root_319_);
v_val_446_ = lean_ctor_get(v___x_445_, 0);
lean_inc(v_val_446_);
lean_dec_ref_known(v___x_445_, 1);
v_keyName_447_ = lean_ctor_get(v_a_443_, 2);
lean_inc(v_keyName_447_);
lean_dec_ref(v_a_443_);
if (v_isShared_441_ == 0)
{
lean_ctor_set(v___x_440_, 0, v_keyName_447_);
v___x_449_ = v___x_440_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_458_; 
v_reuseFailAlloc_458_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_458_, 0, v_keyName_447_);
lean_ctor_set(v_reuseFailAlloc_458_, 1, v_module_438_);
v___x_449_ = v_reuseFailAlloc_458_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; uint8_t v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v___x_450_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_451_ = 0;
v___x_452_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v_val_446_);
lean_ctor_set(v___x_453_, 1, v___x_452_);
v___x_454_ = lean_task_pure(v___x_453_);
v___x_455_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_455_, 0, v___x_454_);
lean_ctor_set(v___x_455_, 1, v___x_341_);
lean_ctor_set(v___x_455_, 2, v___x_450_);
lean_ctor_set_uint8(v___x_455_, sizeof(void*)*3, v___x_451_);
v___x_456_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_456_, 0, v___x_449_);
lean_ctor_set(v___x_456_, 1, v___x_455_);
v___x_457_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_457_, 0, v___x_456_);
lean_ctor_set(v___x_457_, 1, v_a_444_);
return v___x_457_;
}
}
else
{
lean_object* v_baseName_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; uint8_t v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; uint8_t v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; uint8_t v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
lean_dec(v___x_445_);
lean_del_object(v___x_440_);
v_baseName_459_ = lean_ctor_get(v_a_443_, 1);
lean_inc(v_baseName_459_);
lean_dec_ref(v_a_443_);
v___x_460_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_461_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_462_ = lean_string_append(v___x_460_, v___x_461_);
lean_dec_ref(v___x_461_);
v___x_463_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__6));
v___x_464_ = lean_string_append(v___x_462_, v___x_463_);
v___x_465_ = 1;
v___x_466_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_438_, v___x_465_);
v___x_467_ = lean_string_append(v___x_464_, v___x_466_);
lean_dec_ref(v___x_466_);
v___x_468_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7));
v___x_469_ = lean_string_append(v___x_467_, v___x_468_);
v___x_470_ = 0;
v___x_471_ = l_Lean_Name_toString(v_baseName_459_, v___x_470_);
v___x_472_ = lean_string_append(v___x_469_, v___x_471_);
lean_dec_ref(v___x_471_);
v___x_473_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_474_ = lean_string_append(v___x_472_, v___x_473_);
v___x_475_ = 3;
v___x_476_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_476_, 0, v___x_474_);
lean_ctor_set_uint8(v___x_476_, sizeof(void*)*1, v___x_475_);
v___x_477_ = lean_array_get_size(v_a_444_);
v___x_478_ = lean_array_push(v_a_444_, v___x_476_);
v___x_479_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_479_, 0, v___x_477_);
lean_ctor_set(v___x_479_, 1, v___x_478_);
return v___x_479_;
}
}
v___jp_480_:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; uint8_t v___x_492_; lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v___x_482_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_483_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_484_ = lean_string_append(v___x_482_, v___x_483_);
lean_dec_ref(v___x_483_);
v___x_485_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_486_ = lean_string_append(v___x_484_, v___x_485_);
v___x_487_ = 1;
v___x_488_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_437_, v___x_487_);
v___x_489_ = lean_string_append(v___x_486_, v___x_488_);
lean_dec_ref(v___x_488_);
v___x_490_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_491_ = lean_string_append(v___x_489_, v___x_490_);
v___x_492_ = 3;
v___x_493_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_493_, 0, v___x_491_);
lean_ctor_set_uint8(v___x_493_, sizeof(void*)*1, v___x_492_);
v___x_494_ = lean_array_get_size(v_a_481_);
v___x_495_ = lean_array_push(v_a_481_, v___x_493_);
v_a_334_ = v___x_494_;
v_a_335_ = v___x_495_;
goto v___jp_333_;
}
}
}
case 3:
{
lean_object* v_package_524_; lean_object* v_target_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_675_; 
v_package_524_ = lean_ctor_get(v_self_320_, 0);
v_target_525_ = lean_ctor_get(v_self_320_, 1);
v_isSharedCheck_675_ = !lean_is_exclusive(v_self_320_);
if (v_isSharedCheck_675_ == 0)
{
v___x_527_ = v_self_320_;
v_isShared_528_ = v_isSharedCheck_675_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_target_525_);
lean_inc(v_package_524_);
lean_dec(v_self_320_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_675_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v_a_530_; lean_object* v_a_531_; lean_object* v_a_633_; 
switch(lean_obj_tag(v_package_524_))
{
case 0:
{
v_a_530_ = v_defaultPkg_318_;
v_a_531_ = v___y_327_;
goto v___jp_529_;
}
case 2:
{
lean_object* v_toContext_648_; lean_object* v_packageMap_649_; lean_object* v___x_650_; 
lean_dec_ref(v_defaultPkg_318_);
v_toContext_648_ = lean_ctor_get(v___y_326_, 1);
v_packageMap_649_ = lean_ctor_get(v_toContext_648_, 5);
v___x_650_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_649_, v_package_524_);
if (lean_obj_tag(v___x_650_) == 1)
{
lean_object* v_val_651_; 
lean_dec_ref_known(v_package_524_, 2);
v_val_651_ = lean_ctor_get(v___x_650_, 0);
lean_inc(v_val_651_);
lean_dec_ref_known(v___x_650_, 1);
v_a_530_ = v_val_651_;
v_a_531_ = v___y_327_;
goto v___jp_529_;
}
else
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; uint8_t v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; uint8_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; 
lean_dec(v___x_650_);
lean_del_object(v___x_527_);
lean_dec(v_target_525_);
lean_dec_ref(v___y_322_);
v___x_652_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_653_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_654_ = lean_string_append(v___x_652_, v___x_653_);
lean_dec_ref(v___x_653_);
v___x_655_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_656_ = lean_string_append(v___x_654_, v___x_655_);
v___x_657_ = 1;
v___x_658_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_524_, v___x_657_);
v___x_659_ = lean_string_append(v___x_656_, v___x_658_);
lean_dec_ref(v___x_658_);
v___x_660_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_661_ = lean_string_append(v___x_659_, v___x_660_);
v___x_662_ = 3;
v___x_663_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_663_, 0, v___x_661_);
lean_ctor_set_uint8(v___x_663_, sizeof(void*)*1, v___x_662_);
v___x_664_ = lean_array_get_size(v___y_327_);
v___x_665_ = lean_array_push(v___y_327_, v___x_663_);
v_a_330_ = v___x_664_;
v_a_331_ = v___x_665_;
goto v___jp_329_;
}
}
default: 
{
lean_object* v_toContext_666_; lean_object* v_packages_667_; lean_object* v___x_668_; size_t v_sz_669_; size_t v___x_670_; lean_object* v___x_671_; lean_object* v_fst_672_; 
lean_dec_ref(v_defaultPkg_318_);
v_toContext_666_ = lean_ctor_get(v___y_326_, 1);
v_packages_667_ = lean_ctor_get(v_toContext_666_, 4);
v___x_668_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__14));
v_sz_669_ = lean_array_size(v_packages_667_);
v___x_670_ = ((size_t)0ULL);
v___x_671_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__1(v_package_524_, v_packages_667_, v_sz_669_, v___x_670_, v___x_668_);
v_fst_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_fst_672_);
lean_dec_ref(v___x_671_);
if (lean_obj_tag(v_fst_672_) == 0)
{
lean_del_object(v___x_527_);
lean_dec(v_target_525_);
lean_dec_ref(v___y_322_);
v_a_633_ = v___y_327_;
goto v___jp_632_;
}
else
{
lean_object* v_val_673_; 
v_val_673_ = lean_ctor_get(v_fst_672_, 0);
lean_inc(v_val_673_);
lean_dec_ref_known(v_fst_672_, 1);
if (lean_obj_tag(v_val_673_) == 1)
{
lean_object* v_val_674_; 
lean_dec(v_package_524_);
v_val_674_ = lean_ctor_get(v_val_673_, 0);
lean_inc(v_val_674_);
lean_dec_ref_known(v_val_673_, 1);
v_a_530_ = v_val_674_;
v_a_531_ = v___y_327_;
goto v___jp_529_;
}
else
{
lean_dec(v_val_673_);
lean_del_object(v___x_527_);
lean_dec(v_target_525_);
lean_dec_ref(v___y_322_);
v_a_633_ = v___y_327_;
goto v___jp_632_;
}
}
}
}
v___jp_529_:
{
lean_object* v_baseName_532_; lean_object* v_keyName_533_; lean_object* v___x_535_; 
v_baseName_532_ = lean_ctor_get(v_a_530_, 1);
v_keyName_533_ = lean_ctor_get(v_a_530_, 2);
lean_inc(v_target_525_);
lean_inc(v_keyName_533_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v_keyName_533_);
v___x_535_ = v___x_527_;
goto v_reusejp_534_;
}
else
{
lean_object* v_reuseFailAlloc_631_; 
v_reuseFailAlloc_631_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_631_, 0, v_keyName_533_);
lean_ctor_set(v_reuseFailAlloc_631_, 1, v_target_525_);
v___x_535_ = v_reuseFailAlloc_631_;
goto v_reusejp_534_;
}
v_reusejp_534_:
{
if (v_facetless_321_ == 0)
{
lean_object* v___x_536_; lean_object* v___x_537_; 
lean_dec_ref(v_root_319_);
v___x_536_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_536_, 0, v_a_530_);
lean_ctor_set(v___x_536_, 1, v_target_525_);
lean_inc_ref(v___y_326_);
lean_inc(v___y_325_);
lean_inc(v___y_324_);
lean_inc(v___y_323_);
v___x_537_ = lean_apply_7(v___y_322_, v___x_536_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v_a_531_, lean_box(0));
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v_a_539_; lean_object* v___x_541_; uint8_t v_isShared_542_; uint8_t v_isSharedCheck_547_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
v_a_539_ = lean_ctor_get(v___x_537_, 1);
v_isSharedCheck_547_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_547_ == 0)
{
v___x_541_ = v___x_537_;
v_isShared_542_ = v_isSharedCheck_547_;
goto v_resetjp_540_;
}
else
{
lean_inc(v_a_539_);
lean_inc(v_a_538_);
lean_dec(v___x_537_);
v___x_541_ = lean_box(0);
v_isShared_542_ = v_isSharedCheck_547_;
goto v_resetjp_540_;
}
v_resetjp_540_:
{
lean_object* v___x_543_; lean_object* v___x_545_; 
v___x_543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_543_, 0, v___x_535_);
lean_ctor_set(v___x_543_, 1, v_a_538_);
if (v_isShared_542_ == 0)
{
lean_ctor_set(v___x_541_, 0, v___x_543_);
v___x_545_ = v___x_541_;
goto v_reusejp_544_;
}
else
{
lean_object* v_reuseFailAlloc_546_; 
v_reuseFailAlloc_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_546_, 0, v___x_543_);
lean_ctor_set(v_reuseFailAlloc_546_, 1, v_a_539_);
v___x_545_ = v_reuseFailAlloc_546_;
goto v_reusejp_544_;
}
v_reusejp_544_:
{
return v___x_545_;
}
}
}
else
{
lean_object* v_a_548_; lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v___x_535_);
v_a_548_ = lean_ctor_get(v___x_537_, 0);
v_a_549_ = lean_ctor_get(v___x_537_, 1);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_537_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_inc(v_a_548_);
lean_dec(v___x_537_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_548_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_a_549_);
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
lean_object* v___x_557_; 
v___x_557_ = l_Lake_Package_findTargetDecl_x3f(v_target_525_, v_a_530_);
if (lean_obj_tag(v___x_557_) == 1)
{
lean_object* v_val_558_; lean_object* v_name_559_; lean_object* v_kind_560_; lean_object* v_config_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_614_; 
lean_dec_ref(v_root_319_);
v_val_558_ = lean_ctor_get(v___x_557_, 0);
lean_inc(v_val_558_);
lean_dec_ref_known(v___x_557_, 1);
v_name_559_ = lean_ctor_get(v_val_558_, 1);
v_kind_560_ = lean_ctor_get(v_val_558_, 2);
v_config_561_ = lean_ctor_get(v_val_558_, 3);
v_isSharedCheck_614_ = !lean_is_exclusive(v_val_558_);
if (v_isSharedCheck_614_ == 0)
{
lean_object* v_unused_615_; 
v_unused_615_ = lean_ctor_get(v_val_558_, 0);
lean_dec(v_unused_615_);
v___x_563_ = v_val_558_;
v_isShared_564_ = v_isSharedCheck_614_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_config_561_);
lean_inc(v_kind_560_);
lean_inc(v_name_559_);
lean_dec(v_val_558_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_614_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
uint8_t v___x_565_; 
v___x_565_ = l_Lean_Name_isAnonymous(v_kind_560_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
lean_dec(v_target_525_);
v___x_566_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__9));
lean_inc(v_kind_560_);
v___x_567_ = l_Lean_Name_str___override(v_kind_560_, v___x_566_);
v___x_568_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_568_, 0, v_a_530_);
lean_ctor_set(v___x_568_, 1, v_name_559_);
lean_ctor_set(v___x_568_, 2, v_config_561_);
lean_inc(v___x_567_);
lean_inc_ref(v___x_535_);
if (v_isShared_564_ == 0)
{
lean_ctor_set_tag(v___x_563_, 1);
lean_ctor_set(v___x_563_, 3, v___x_567_);
lean_ctor_set(v___x_563_, 2, v___x_568_);
lean_ctor_set(v___x_563_, 1, v_kind_560_);
lean_ctor_set(v___x_563_, 0, v___x_535_);
v___x_570_ = v___x_563_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v___x_535_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v_kind_560_);
lean_ctor_set(v_reuseFailAlloc_592_, 2, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_592_, 3, v___x_567_);
v___x_570_ = v_reuseFailAlloc_592_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; 
lean_inc_ref(v___y_326_);
lean_inc(v___y_325_);
lean_inc(v___y_324_);
lean_inc(v___y_323_);
v___x_571_ = lean_apply_7(v___y_322_, v___x_570_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v_a_531_, lean_box(0));
if (lean_obj_tag(v___x_571_) == 0)
{
lean_object* v_a_572_; lean_object* v_a_573_; lean_object* v___x_575_; uint8_t v_isShared_576_; uint8_t v_isSharedCheck_582_; 
v_a_572_ = lean_ctor_get(v___x_571_, 0);
v_a_573_ = lean_ctor_get(v___x_571_, 1);
v_isSharedCheck_582_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_582_ == 0)
{
v___x_575_ = v___x_571_;
v_isShared_576_ = v_isSharedCheck_582_;
goto v_resetjp_574_;
}
else
{
lean_inc(v_a_573_);
lean_inc(v_a_572_);
lean_dec(v___x_571_);
v___x_575_ = lean_box(0);
v_isShared_576_ = v_isSharedCheck_582_;
goto v_resetjp_574_;
}
v_resetjp_574_:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_580_; 
v___x_577_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_577_, 0, v___x_535_);
lean_ctor_set(v___x_577_, 1, v___x_567_);
v___x_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_578_, 0, v___x_577_);
lean_ctor_set(v___x_578_, 1, v_a_572_);
if (v_isShared_576_ == 0)
{
lean_ctor_set(v___x_575_, 0, v___x_578_);
v___x_580_ = v___x_575_;
goto v_reusejp_579_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v___x_578_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v_a_573_);
v___x_580_ = v_reuseFailAlloc_581_;
goto v_reusejp_579_;
}
v_reusejp_579_:
{
return v___x_580_;
}
}
}
else
{
lean_object* v_a_583_; lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec(v___x_567_);
lean_dec_ref(v___x_535_);
v_a_583_ = lean_ctor_get(v___x_571_, 0);
v_a_584_ = lean_ctor_get(v___x_571_, 1);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_571_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_571_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_inc(v_a_583_);
lean_dec(v___x_571_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_583_);
lean_ctor_set(v_reuseFailAlloc_590_, 1, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
else
{
lean_object* v___x_593_; lean_object* v___x_594_; 
lean_del_object(v___x_563_);
lean_dec(v_config_561_);
lean_dec(v_kind_560_);
lean_dec(v_name_559_);
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v_a_530_);
lean_ctor_set(v___x_593_, 1, v_target_525_);
lean_inc_ref(v___y_326_);
lean_inc(v___y_325_);
lean_inc(v___y_324_);
lean_inc(v___y_323_);
v___x_594_ = lean_apply_7(v___y_322_, v___x_593_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v_a_531_, lean_box(0));
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_604_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
v_a_596_ = lean_ctor_get(v___x_594_, 1);
v_isSharedCheck_604_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_604_ == 0)
{
v___x_598_ = v___x_594_;
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_inc(v_a_595_);
lean_dec(v___x_594_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_604_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_600_; lean_object* v___x_602_; 
v___x_600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_600_, 0, v___x_535_);
lean_ctor_set(v___x_600_, 1, v_a_595_);
if (v_isShared_599_ == 0)
{
lean_ctor_set(v___x_598_, 0, v___x_600_);
v___x_602_ = v___x_598_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_603_; 
v_reuseFailAlloc_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_603_, 0, v___x_600_);
lean_ctor_set(v_reuseFailAlloc_603_, 1, v_a_596_);
v___x_602_ = v_reuseFailAlloc_603_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
return v___x_602_;
}
}
}
else
{
lean_object* v_a_605_; lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
lean_dec_ref(v___x_535_);
v_a_605_ = lean_ctor_get(v___x_594_, 0);
v_a_606_ = lean_ctor_get(v___x_594_, 1);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_594_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_594_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_inc(v_a_605_);
lean_dec(v___x_594_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
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
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_605_);
lean_ctor_set(v_reuseFailAlloc_612_, 1, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
}
}
}
else
{
lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; uint8_t v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; uint8_t v___x_626_; lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
lean_inc(v_baseName_532_);
lean_dec(v___x_557_);
lean_dec_ref(v___x_535_);
lean_dec_ref(v_a_530_);
lean_dec(v_target_525_);
lean_dec_ref(v___y_322_);
v___x_616_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_617_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_618_ = lean_string_append(v___x_616_, v___x_617_);
lean_dec_ref(v___x_617_);
v___x_619_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__10));
v___x_620_ = lean_string_append(v___x_618_, v___x_619_);
v___x_621_ = 0;
v___x_622_ = l_Lean_Name_toString(v_baseName_532_, v___x_621_);
v___x_623_ = lean_string_append(v___x_620_, v___x_622_);
lean_dec_ref(v___x_622_);
v___x_624_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_625_ = lean_string_append(v___x_623_, v___x_624_);
v___x_626_ = 3;
v___x_627_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_627_, 0, v___x_625_);
lean_ctor_set_uint8(v___x_627_, sizeof(void*)*1, v___x_626_);
v___x_628_ = lean_array_get_size(v_a_531_);
v___x_629_ = lean_array_push(v_a_531_, v___x_627_);
v___x_630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_630_, 0, v___x_628_);
lean_ctor_set(v___x_630_, 1, v___x_629_);
return v___x_630_;
}
}
}
}
v___jp_632_:
{
lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; lean_object* v___x_643_; uint8_t v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_634_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_635_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_636_ = lean_string_append(v___x_634_, v___x_635_);
lean_dec_ref(v___x_635_);
v___x_637_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_638_ = lean_string_append(v___x_636_, v___x_637_);
v___x_639_ = 1;
v___x_640_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_524_, v___x_639_);
v___x_641_ = lean_string_append(v___x_638_, v___x_640_);
lean_dec_ref(v___x_640_);
v___x_642_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_643_ = lean_string_append(v___x_641_, v___x_642_);
v___x_644_ = 3;
v___x_645_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_645_, 0, v___x_643_);
lean_ctor_set_uint8(v___x_645_, sizeof(void*)*1, v___x_644_);
v___x_646_ = lean_array_get_size(v_a_633_);
v___x_647_ = lean_array_push(v_a_633_, v___x_645_);
v_a_330_ = v___x_646_;
v_a_331_ = v___x_647_;
goto v___jp_329_;
}
}
}
default: 
{
lean_object* v_target_676_; lean_object* v_facet_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_748_; 
v_target_676_ = lean_ctor_get(v_self_320_, 0);
v_facet_677_ = lean_ctor_get(v_self_320_, 1);
v_isSharedCheck_748_ = !lean_is_exclusive(v_self_320_);
if (v_isSharedCheck_748_ == 0)
{
v___x_679_ = v_self_320_;
v_isShared_680_ = v_isSharedCheck_748_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_facet_677_);
lean_inc(v_target_676_);
lean_dec(v_self_320_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_748_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
uint8_t v___x_681_; lean_object* v___x_682_; 
v___x_681_ = 0;
lean_inc_ref(v___y_322_);
lean_inc_ref(v_target_676_);
lean_inc_ref(v_root_319_);
v___x_682_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_318_, v_root_319_, v_target_676_, v___x_681_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
if (lean_obj_tag(v___x_682_) == 0)
{
lean_object* v_a_683_; lean_object* v_snd_684_; lean_object* v___x_686_; uint8_t v_isShared_687_; uint8_t v_isSharedCheck_746_; 
v_a_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_a_683_);
v_snd_684_ = lean_ctor_get(v_a_683_, 1);
v_isSharedCheck_746_ = !lean_is_exclusive(v_a_683_);
if (v_isSharedCheck_746_ == 0)
{
lean_object* v_unused_747_; 
v_unused_747_ = lean_ctor_get(v_a_683_, 0);
lean_dec(v_unused_747_);
v___x_686_ = v_a_683_;
v_isShared_687_ = v_isSharedCheck_746_;
goto v_resetjp_685_;
}
else
{
lean_inc(v_snd_684_);
lean_dec(v_a_683_);
v___x_686_ = lean_box(0);
v_isShared_687_ = v_isSharedCheck_746_;
goto v_resetjp_685_;
}
v_resetjp_685_:
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_744_; 
v_a_688_ = lean_ctor_get(v___x_682_, 1);
v_isSharedCheck_744_ = !lean_is_exclusive(v___x_682_);
if (v_isSharedCheck_744_ == 0)
{
lean_object* v_unused_745_; 
v_unused_745_ = lean_ctor_get(v___x_682_, 0);
lean_dec(v_unused_745_);
v___x_690_ = v___x_682_;
v_isShared_691_ = v_isSharedCheck_744_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_682_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_744_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_kind_692_; lean_object* v___y_694_; uint8_t v___x_731_; 
v_kind_692_ = lean_ctor_get(v_snd_684_, 1);
v___x_731_ = l_Lean_Name_isAnonymous(v_kind_692_);
if (v___x_731_ == 0)
{
uint8_t v___x_732_; 
v___x_732_ = l_Lean_Name_isAnonymous(v_facet_677_);
if (v___x_732_ == 0)
{
v___y_694_ = v_facet_677_;
goto v___jp_693_;
}
else
{
lean_object* v___x_733_; 
lean_dec(v_facet_677_);
v___x_733_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__12));
v___y_694_ = v___x_733_;
goto v___jp_693_;
}
}
else
{
lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v___x_738_; uint8_t v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; 
lean_del_object(v___x_690_);
lean_del_object(v___x_686_);
lean_dec(v_snd_684_);
lean_del_object(v___x_679_);
lean_dec(v_facet_677_);
lean_dec_ref(v_target_676_);
lean_dec_ref(v___y_322_);
v___x_734_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_735_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_736_ = lean_string_append(v___x_734_, v___x_735_);
lean_dec_ref(v___x_735_);
v___x_737_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13));
v___x_738_ = lean_string_append(v___x_736_, v___x_737_);
v___x_739_ = 3;
v___x_740_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_740_, 0, v___x_738_);
lean_ctor_set_uint8(v___x_740_, sizeof(void*)*1, v___x_739_);
v___x_741_ = lean_array_get_size(v_a_688_);
v___x_742_ = lean_array_push(v_a_688_, v___x_740_);
v___x_743_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_741_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
return v___x_743_;
}
v___jp_693_:
{
lean_object* v_toContext_695_; lean_object* v_facetConfigs_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v_toContext_695_ = lean_ctor_get(v___y_326_, 1);
v_facetConfigs_696_ = lean_ctor_get(v_toContext_695_, 6);
lean_inc(v_kind_692_);
v___x_697_ = l_Lean_Name_append(v_kind_692_, v___y_694_);
v___x_698_ = l_Lake_FacetConfigMap_get_x3f(v___x_697_, v_facetConfigs_696_);
if (lean_obj_tag(v___x_698_) == 1)
{
lean_object* v_val_699_; lean_object* v_outKind_700_; lean_object* v___f_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_706_; 
lean_dec_ref(v_root_319_);
v_val_699_ = lean_ctor_get(v___x_698_, 0);
lean_inc(v_val_699_);
lean_dec_ref_known(v___x_698_, 1);
v_outKind_700_ = lean_ctor_get(v_val_699_, 2);
lean_inc(v_outKind_700_);
lean_dec(v_val_699_);
lean_inc(v___x_697_);
lean_inc(v_kind_692_);
lean_inc_ref(v_target_676_);
v___f_701_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___lam__0___boxed), 11, 3);
lean_closure_set(v___f_701_, 0, v_target_676_);
lean_closure_set(v___f_701_, 1, v_kind_692_);
lean_closure_set(v___f_701_, 2, v___x_697_);
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3);
v___x_704_ = l_Lake_Job_bindM___redArg(v_outKind_700_, v_snd_684_, v___f_701_, v___x_702_, v___x_681_, v___y_322_, v___y_323_, v___y_324_, v___y_325_, v___y_326_, v___x_703_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 1, v___x_697_);
v___x_706_ = v___x_679_;
goto v_reusejp_705_;
}
else
{
lean_object* v_reuseFailAlloc_713_; 
v_reuseFailAlloc_713_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_713_, 0, v_target_676_);
lean_ctor_set(v_reuseFailAlloc_713_, 1, v___x_697_);
v___x_706_ = v_reuseFailAlloc_713_;
goto v_reusejp_705_;
}
v_reusejp_705_:
{
lean_object* v___x_708_; 
if (v_isShared_687_ == 0)
{
lean_ctor_set(v___x_686_, 1, v___x_704_);
lean_ctor_set(v___x_686_, 0, v___x_706_);
v___x_708_ = v___x_686_;
goto v_reusejp_707_;
}
else
{
lean_object* v_reuseFailAlloc_712_; 
v_reuseFailAlloc_712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_712_, 0, v___x_706_);
lean_ctor_set(v_reuseFailAlloc_712_, 1, v___x_704_);
v___x_708_ = v_reuseFailAlloc_712_;
goto v_reusejp_707_;
}
v_reusejp_707_:
{
lean_object* v___x_710_; 
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v___x_708_);
v___x_710_ = v___x_690_;
goto v_reusejp_709_;
}
else
{
lean_object* v_reuseFailAlloc_711_; 
v_reuseFailAlloc_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_711_, 0, v___x_708_);
lean_ctor_set(v_reuseFailAlloc_711_, 1, v_a_688_);
v___x_710_ = v_reuseFailAlloc_711_;
goto v_reusejp_709_;
}
v_reusejp_709_:
{
return v___x_710_;
}
}
}
}
else
{
lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; 
lean_dec(v___x_698_);
lean_del_object(v___x_686_);
lean_dec(v_snd_684_);
lean_del_object(v___x_679_);
lean_dec_ref(v_target_676_);
lean_dec_ref(v___y_322_);
v___x_714_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_715_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_root_319_);
v___x_716_ = lean_string_append(v___x_714_, v___x_715_);
lean_dec_ref(v___x_715_);
v___x_717_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11));
v___x_718_ = lean_string_append(v___x_716_, v___x_717_);
v___x_719_ = 1;
v___x_720_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_697_, v___x_719_);
v___x_721_ = lean_string_append(v___x_718_, v___x_720_);
lean_dec_ref(v___x_720_);
v___x_722_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_723_ = lean_string_append(v___x_721_, v___x_722_);
v___x_724_ = 3;
v___x_725_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_725_, 0, v___x_723_);
lean_ctor_set_uint8(v___x_725_, sizeof(void*)*1, v___x_724_);
v___x_726_ = lean_array_get_size(v_a_688_);
v___x_727_ = lean_array_push(v_a_688_, v___x_725_);
if (v_isShared_691_ == 0)
{
lean_ctor_set_tag(v___x_690_, 1);
lean_ctor_set(v___x_690_, 1, v___x_727_);
lean_ctor_set(v___x_690_, 0, v___x_726_);
v___x_729_ = v___x_690_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_730_, 1, v___x_727_);
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
else
{
lean_del_object(v___x_679_);
lean_dec(v_facet_677_);
lean_dec_ref(v_target_676_);
lean_dec_ref(v___y_322_);
lean_dec_ref(v_root_319_);
return v___x_682_;
}
}
}
}
v___jp_329_:
{
lean_object* v___x_332_; 
v___x_332_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_332_, 0, v_a_330_);
lean_ctor_set(v___x_332_, 1, v_a_331_);
return v___x_332_;
}
v___jp_333_:
{
lean_object* v___x_336_; 
v___x_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_336_, 0, v_a_334_);
lean_ctor_set(v___x_336_, 1, v_a_335_);
return v___x_336_;
}
v___jp_337_:
{
lean_object* v___x_340_; 
v___x_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_340_, 0, v_a_338_);
lean_ctor_set(v___x_340_, 1, v_a_339_);
return v___x_340_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___boxed(lean_object* v_defaultPkg_749_, lean_object* v_root_750_, lean_object* v_self_751_, lean_object* v_facetless_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
uint8_t v_facetless_boxed_760_; lean_object* v_res_761_; 
v_facetless_boxed_760_ = lean_unbox(v_facetless_752_);
v_res_761_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_749_, v_root_750_, v_self_751_, v_facetless_boxed_760_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_);
lean_dec_ref(v___y_757_);
lean_dec(v___y_756_);
lean_dec(v___y_755_);
lean_dec(v___y_754_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0(lean_object* v_00_u03b2_762_, lean_object* v_inst_763_, lean_object* v_t_764_, lean_object* v_k_765_){
_start:
{
lean_object* v___x_766_; 
v___x_766_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_t_764_, v_k_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___boxed(lean_object* v_00_u03b2_767_, lean_object* v_inst_768_, lean_object* v_t_769_, lean_object* v_k_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0(v_00_u03b2_767_, v_inst_768_, v_t_769_, v_k_770_);
lean_dec(v_k_770_);
lean_dec(v_t_769_);
return v_res_771_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__9_splitter___redArg(lean_object* v_x_772_, lean_object* v_h__1_773_, lean_object* v_h__2_774_, lean_object* v_h__3_775_, lean_object* v_h__4_776_, lean_object* v_h__5_777_){
_start:
{
switch(lean_obj_tag(v_x_772_))
{
case 0:
{
lean_object* v_module_778_; lean_object* v___x_779_; 
lean_dec(v_h__5_777_);
lean_dec(v_h__4_776_);
lean_dec(v_h__3_775_);
lean_dec(v_h__2_774_);
v_module_778_ = lean_ctor_get(v_x_772_, 0);
lean_inc(v_module_778_);
lean_dec_ref_known(v_x_772_, 1);
v___x_779_ = lean_apply_2(v_h__1_773_, v_module_778_, lean_box(0));
return v___x_779_;
}
case 1:
{
lean_object* v_package_780_; lean_object* v___x_781_; 
lean_dec(v_h__5_777_);
lean_dec(v_h__4_776_);
lean_dec(v_h__3_775_);
lean_dec(v_h__1_773_);
v_package_780_ = lean_ctor_get(v_x_772_, 0);
lean_inc(v_package_780_);
lean_dec_ref_known(v_x_772_, 1);
v___x_781_ = lean_apply_2(v_h__2_774_, v_package_780_, lean_box(0));
return v___x_781_;
}
case 2:
{
lean_object* v_package_782_; lean_object* v_module_783_; lean_object* v___x_784_; 
lean_dec(v_h__5_777_);
lean_dec(v_h__4_776_);
lean_dec(v_h__2_774_);
lean_dec(v_h__1_773_);
v_package_782_ = lean_ctor_get(v_x_772_, 0);
lean_inc(v_package_782_);
v_module_783_ = lean_ctor_get(v_x_772_, 1);
lean_inc(v_module_783_);
lean_dec_ref_known(v_x_772_, 2);
v___x_784_ = lean_apply_3(v_h__3_775_, v_package_782_, v_module_783_, lean_box(0));
return v___x_784_;
}
case 3:
{
lean_object* v_package_785_; lean_object* v_target_786_; lean_object* v___x_787_; 
lean_dec(v_h__5_777_);
lean_dec(v_h__3_775_);
lean_dec(v_h__2_774_);
lean_dec(v_h__1_773_);
v_package_785_ = lean_ctor_get(v_x_772_, 0);
lean_inc(v_package_785_);
v_target_786_ = lean_ctor_get(v_x_772_, 1);
lean_inc(v_target_786_);
lean_dec_ref_known(v_x_772_, 2);
v___x_787_ = lean_apply_3(v_h__4_776_, v_package_785_, v_target_786_, lean_box(0));
return v___x_787_;
}
default: 
{
lean_object* v_target_788_; lean_object* v_facet_789_; lean_object* v___x_790_; 
lean_dec(v_h__4_776_);
lean_dec(v_h__3_775_);
lean_dec(v_h__2_774_);
lean_dec(v_h__1_773_);
v_target_788_ = lean_ctor_get(v_x_772_, 0);
lean_inc_ref(v_target_788_);
v_facet_789_ = lean_ctor_get(v_x_772_, 1);
lean_inc(v_facet_789_);
lean_dec_ref_known(v_x_772_, 2);
v___x_790_ = lean_apply_3(v_h__5_777_, v_target_788_, v_facet_789_, lean_box(0));
return v___x_790_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__9_splitter(lean_object* v_motive_791_, lean_object* v_x_792_, lean_object* v_h__1_793_, lean_object* v_h__2_794_, lean_object* v_h__3_795_, lean_object* v_h__4_796_, lean_object* v_h__5_797_){
_start:
{
switch(lean_obj_tag(v_x_792_))
{
case 0:
{
lean_object* v_module_798_; lean_object* v___x_799_; 
lean_dec(v_h__5_797_);
lean_dec(v_h__4_796_);
lean_dec(v_h__3_795_);
lean_dec(v_h__2_794_);
v_module_798_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_module_798_);
lean_dec_ref_known(v_x_792_, 1);
v___x_799_ = lean_apply_2(v_h__1_793_, v_module_798_, lean_box(0));
return v___x_799_;
}
case 1:
{
lean_object* v_package_800_; lean_object* v___x_801_; 
lean_dec(v_h__5_797_);
lean_dec(v_h__4_796_);
lean_dec(v_h__3_795_);
lean_dec(v_h__1_793_);
v_package_800_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_package_800_);
lean_dec_ref_known(v_x_792_, 1);
v___x_801_ = lean_apply_2(v_h__2_794_, v_package_800_, lean_box(0));
return v___x_801_;
}
case 2:
{
lean_object* v_package_802_; lean_object* v_module_803_; lean_object* v___x_804_; 
lean_dec(v_h__5_797_);
lean_dec(v_h__4_796_);
lean_dec(v_h__2_794_);
lean_dec(v_h__1_793_);
v_package_802_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_package_802_);
v_module_803_ = lean_ctor_get(v_x_792_, 1);
lean_inc(v_module_803_);
lean_dec_ref_known(v_x_792_, 2);
v___x_804_ = lean_apply_3(v_h__3_795_, v_package_802_, v_module_803_, lean_box(0));
return v___x_804_;
}
case 3:
{
lean_object* v_package_805_; lean_object* v_target_806_; lean_object* v___x_807_; 
lean_dec(v_h__5_797_);
lean_dec(v_h__3_795_);
lean_dec(v_h__2_794_);
lean_dec(v_h__1_793_);
v_package_805_ = lean_ctor_get(v_x_792_, 0);
lean_inc(v_package_805_);
v_target_806_ = lean_ctor_get(v_x_792_, 1);
lean_inc(v_target_806_);
lean_dec_ref_known(v_x_792_, 2);
v___x_807_ = lean_apply_3(v_h__4_796_, v_package_805_, v_target_806_, lean_box(0));
return v___x_807_;
}
default: 
{
lean_object* v_target_808_; lean_object* v_facet_809_; lean_object* v___x_810_; 
lean_dec(v_h__4_796_);
lean_dec(v_h__3_795_);
lean_dec(v_h__2_794_);
lean_dec(v_h__1_793_);
v_target_808_ = lean_ctor_get(v_x_792_, 0);
lean_inc_ref(v_target_808_);
v_facet_809_ = lean_ctor_get(v_x_792_, 1);
lean_inc(v_facet_809_);
lean_dec_ref_known(v_x_792_, 2);
v___x_810_ = lean_apply_3(v_h__5_797_, v_target_808_, v_facet_809_, lean_box(0));
return v___x_810_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__1_splitter___redArg(lean_object* v_____x_811_, lean_object* v_h__1_812_, lean_object* v_h__2_813_){
_start:
{
if (lean_obj_tag(v_____x_811_) == 1)
{
lean_object* v_val_814_; lean_object* v___x_815_; 
lean_dec(v_h__2_813_);
v_val_814_ = lean_ctor_get(v_____x_811_, 0);
lean_inc(v_val_814_);
lean_dec_ref_known(v_____x_811_, 1);
v___x_815_ = lean_apply_1(v_h__1_812_, v_val_814_);
return v___x_815_;
}
else
{
lean_object* v___x_816_; 
lean_dec(v_h__1_812_);
v___x_816_ = lean_apply_2(v_h__2_813_, v_____x_811_, lean_box(0));
return v___x_816_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__1_splitter(lean_object* v_motive_817_, lean_object* v_____x_818_, lean_object* v_h__1_819_, lean_object* v_h__2_820_){
_start:
{
if (lean_obj_tag(v_____x_818_) == 1)
{
lean_object* v_val_821_; lean_object* v___x_822_; 
lean_dec(v_h__2_820_);
v_val_821_ = lean_ctor_get(v_____x_818_, 0);
lean_inc(v_val_821_);
lean_dec_ref_known(v_____x_818_, 1);
v___x_822_ = lean_apply_1(v_h__1_819_, v_val_821_);
return v___x_822_;
}
else
{
lean_object* v___x_823_; 
lean_dec(v_h__1_819_);
v___x_823_ = lean_apply_2(v_h__2_820_, v_____x_818_, lean_box(0));
return v___x_823_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__3_splitter___redArg(lean_object* v_x_824_, lean_object* v_h__1_825_, lean_object* v_h__2_826_){
_start:
{
if (lean_obj_tag(v_x_824_) == 1)
{
lean_object* v_val_827_; lean_object* v___x_828_; 
lean_dec(v_h__2_826_);
v_val_827_ = lean_ctor_get(v_x_824_, 0);
lean_inc(v_val_827_);
lean_dec_ref_known(v_x_824_, 1);
v___x_828_ = lean_apply_1(v_h__1_825_, v_val_827_);
return v___x_828_;
}
else
{
lean_object* v___x_829_; 
lean_dec(v_h__1_825_);
v___x_829_ = lean_apply_2(v_h__2_826_, v_x_824_, lean_box(0));
return v___x_829_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__3_splitter(lean_object* v_target_830_, lean_object* v_pkg_831_, lean_object* v_motive_832_, lean_object* v_x_833_, lean_object* v_h__1_834_, lean_object* v_h__2_835_){
_start:
{
if (lean_obj_tag(v_x_833_) == 1)
{
lean_object* v_val_836_; lean_object* v___x_837_; 
lean_dec(v_h__2_835_);
v_val_836_ = lean_ctor_get(v_x_833_, 0);
lean_inc(v_val_836_);
lean_dec_ref_known(v_x_833_, 1);
v___x_837_ = lean_apply_1(v_h__1_834_, v_val_836_);
return v___x_837_;
}
else
{
lean_object* v___x_838_; 
lean_dec(v_h__1_834_);
v___x_838_ = lean_apply_2(v_h__2_835_, v_x_833_, lean_box(0));
return v___x_838_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__3_splitter___boxed(lean_object* v_target_839_, lean_object* v_pkg_840_, lean_object* v_motive_841_, lean_object* v_x_842_, lean_object* v_h__1_843_, lean_object* v_h__2_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__3_splitter(v_target_839_, v_pkg_840_, v_motive_841_, v_x_842_, v_h__1_843_, v_h__2_844_);
lean_dec_ref(v_pkg_840_);
lean_dec(v_target_839_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__7_splitter___redArg(lean_object* v_x_846_, lean_object* v_h__1_847_){
_start:
{
lean_object* v_fst_848_; lean_object* v_snd_849_; lean_object* v___x_850_; 
v_fst_848_ = lean_ctor_get(v_x_846_, 0);
lean_inc(v_fst_848_);
v_snd_849_ = lean_ctor_get(v_x_846_, 1);
lean_inc(v_snd_849_);
lean_dec_ref(v_x_846_);
v___x_850_ = lean_apply_2(v_h__1_847_, v_fst_848_, v_snd_849_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__7_splitter(lean_object* v_motive_851_, lean_object* v_x_852_, lean_object* v_h__1_853_){
_start:
{
lean_object* v_fst_854_; lean_object* v_snd_855_; lean_object* v___x_856_; 
v_fst_854_ = lean_ctor_get(v_x_852_, 0);
lean_inc(v_fst_854_);
v_snd_855_ = lean_ctor_get(v_x_852_, 1);
lean_inc(v_snd_855_);
lean_dec_ref(v_x_852_);
v___x_856_ = lean_apply_2(v_h__1_853_, v_fst_854_, v_snd_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__5_splitter___redArg(lean_object* v_x_857_, lean_object* v_h__1_858_, lean_object* v_h__2_859_){
_start:
{
if (lean_obj_tag(v_x_857_) == 1)
{
lean_object* v_val_860_; lean_object* v___x_861_; 
lean_dec(v_h__2_859_);
v_val_860_ = lean_ctor_get(v_x_857_, 0);
lean_inc(v_val_860_);
lean_dec_ref_known(v_x_857_, 1);
v___x_861_ = lean_apply_1(v_h__1_858_, v_val_860_);
return v___x_861_;
}
else
{
lean_object* v___x_862_; 
lean_dec(v_h__1_858_);
v___x_862_ = lean_apply_2(v_h__2_859_, v_x_857_, lean_box(0));
return v___x_862_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__5_splitter(lean_object* v_facet_863_, lean_object* v_motive_864_, lean_object* v_x_865_, lean_object* v_h__1_866_, lean_object* v_h__2_867_){
_start:
{
if (lean_obj_tag(v_x_865_) == 1)
{
lean_object* v_val_868_; lean_object* v___x_869_; 
lean_dec(v_h__2_867_);
v_val_868_ = lean_ctor_get(v_x_865_, 0);
lean_inc(v_val_868_);
lean_dec_ref_known(v_x_865_, 1);
v___x_869_ = lean_apply_1(v_h__1_866_, v_val_868_);
return v___x_869_;
}
else
{
lean_object* v___x_870_; 
lean_dec(v_h__1_866_);
v___x_870_ = lean_apply_2(v_h__2_867_, v_x_865_, lean_box(0));
return v___x_870_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__5_splitter___boxed(lean_object* v_facet_871_, lean_object* v_motive_872_, lean_object* v_x_873_, lean_object* v_h__1_874_, lean_object* v_h__2_875_){
_start:
{
lean_object* v_res_876_; 
v_res_876_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_match__5_splitter(v_facet_871_, v_motive_872_, v_x_873_, v_h__1_874_, v_h__2_875_);
lean_dec(v_facet_871_);
return v_res_876_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore(lean_object* v_defaultPkg_877_, lean_object* v_self_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_){
_start:
{
uint8_t v___x_886_; lean_object* v___x_887_; 
v___x_886_ = 1;
lean_inc_ref(v_self_878_);
v___x_887_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_877_, v_self_878_, v_self_878_, v___x_886_, v___y_879_, v___y_880_, v___y_881_, v___y_882_, v___y_883_, v___y_884_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchInCore___boxed(lean_object* v_defaultPkg_888_, lean_object* v_self_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
lean_object* v_res_897_; 
v_res_897_ = l_Lake_PartialBuildKey_fetchInCore(v_defaultPkg_888_, v_self_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec(v___y_892_);
lean_dec(v___y_891_);
return v_res_897_;
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn(lean_object* v_defaultPkg_898_, lean_object* v_self_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_){
_start:
{
uint8_t v___x_907_; lean_object* v___x_908_; 
v___x_907_ = 1;
lean_inc_ref(v_self_899_);
v___x_908_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_898_, v_self_899_, v_self_899_, v___x_907_, v___y_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
if (lean_obj_tag(v___x_908_) == 0)
{
lean_object* v_a_909_; lean_object* v_a_910_; lean_object* v___x_912_; uint8_t v_isShared_913_; uint8_t v_isSharedCheck_919_; 
v_a_909_ = lean_ctor_get(v___x_908_, 0);
v_a_910_ = lean_ctor_get(v___x_908_, 1);
v_isSharedCheck_919_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_919_ == 0)
{
v___x_912_ = v___x_908_;
v_isShared_913_ = v_isSharedCheck_919_;
goto v_resetjp_911_;
}
else
{
lean_inc(v_a_910_);
lean_inc(v_a_909_);
lean_dec(v___x_908_);
v___x_912_ = lean_box(0);
v_isShared_913_ = v_isSharedCheck_919_;
goto v_resetjp_911_;
}
v_resetjp_911_:
{
lean_object* v_snd_914_; lean_object* v___x_915_; lean_object* v___x_917_; 
v_snd_914_ = lean_ctor_get(v_a_909_, 1);
lean_inc(v_snd_914_);
lean_dec(v_a_909_);
v___x_915_ = l_Lake_Job_toOpaque___redArg(v_snd_914_);
if (v_isShared_913_ == 0)
{
lean_ctor_set(v___x_912_, 0, v___x_915_);
v___x_917_ = v___x_912_;
goto v_reusejp_916_;
}
else
{
lean_object* v_reuseFailAlloc_918_; 
v_reuseFailAlloc_918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_918_, 0, v___x_915_);
lean_ctor_set(v_reuseFailAlloc_918_, 1, v_a_910_);
v___x_917_ = v_reuseFailAlloc_918_;
goto v_reusejp_916_;
}
v_reusejp_916_:
{
return v___x_917_;
}
}
}
else
{
lean_object* v_a_920_; lean_object* v_a_921_; lean_object* v___x_923_; uint8_t v_isShared_924_; uint8_t v_isSharedCheck_928_; 
v_a_920_ = lean_ctor_get(v___x_908_, 0);
v_a_921_ = lean_ctor_get(v___x_908_, 1);
v_isSharedCheck_928_ = !lean_is_exclusive(v___x_908_);
if (v_isSharedCheck_928_ == 0)
{
v___x_923_ = v___x_908_;
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
else
{
lean_inc(v_a_921_);
lean_inc(v_a_920_);
lean_dec(v___x_908_);
v___x_923_ = lean_box(0);
v_isShared_924_ = v_isSharedCheck_928_;
goto v_resetjp_922_;
}
v_resetjp_922_:
{
lean_object* v___x_926_; 
if (v_isShared_924_ == 0)
{
v___x_926_ = v___x_923_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_927_; 
v_reuseFailAlloc_927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_927_, 0, v_a_920_);
lean_ctor_set(v_reuseFailAlloc_927_, 1, v_a_921_);
v___x_926_ = v_reuseFailAlloc_927_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
return v___x_926_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_PartialBuildKey_fetchIn___boxed(lean_object* v_defaultPkg_929_, lean_object* v_self_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = l_Lake_PartialBuildKey_fetchIn(v_defaultPkg_929_, v_self_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_, v___y_936_);
lean_dec_ref(v___y_935_);
lean_dec(v___y_934_);
lean_dec(v___y_933_);
lean_dec(v___y_932_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0(lean_object* v_target_939_, lean_object* v_kind_940_, lean_object* v_facet_941_, lean_object* v_data_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v_log_950_; uint8_t v_action_951_; uint8_t v_wantsRebuild_952_; lean_object* v_trace_953_; lean_object* v_buildTime_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_984_; 
v_log_950_ = lean_ctor_get(v___y_948_, 0);
v_action_951_ = lean_ctor_get_uint8(v___y_948_, sizeof(void*)*3);
v_wantsRebuild_952_ = lean_ctor_get_uint8(v___y_948_, sizeof(void*)*3 + 1);
v_trace_953_ = lean_ctor_get(v___y_948_, 1);
v_buildTime_954_ = lean_ctor_get(v___y_948_, 2);
v_isSharedCheck_984_ = !lean_is_exclusive(v___y_948_);
if (v_isSharedCheck_984_ == 0)
{
v___x_956_ = v___y_948_;
v_isShared_957_ = v_isSharedCheck_984_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_buildTime_954_);
lean_inc(v_trace_953_);
lean_inc(v_log_950_);
lean_dec(v___y_948_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_984_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v___x_958_; lean_object* v___x_959_; 
v___x_958_ = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(v___x_958_, 0, v_target_939_);
lean_ctor_set(v___x_958_, 1, v_kind_940_);
lean_ctor_set(v___x_958_, 2, v_data_942_);
lean_ctor_set(v___x_958_, 3, v_facet_941_);
lean_inc_ref(v___y_947_);
lean_inc(v___y_946_);
lean_inc(v___y_945_);
lean_inc(v___y_944_);
v___x_959_ = lean_apply_7(v___y_943_, v___x_958_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v_log_950_, lean_box(0));
if (lean_obj_tag(v___x_959_) == 0)
{
lean_object* v_a_960_; lean_object* v_a_961_; lean_object* v___x_963_; uint8_t v_isShared_964_; uint8_t v_isSharedCheck_971_; 
v_a_960_ = lean_ctor_get(v___x_959_, 0);
v_a_961_ = lean_ctor_get(v___x_959_, 1);
v_isSharedCheck_971_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_971_ == 0)
{
v___x_963_ = v___x_959_;
v_isShared_964_ = v_isSharedCheck_971_;
goto v_resetjp_962_;
}
else
{
lean_inc(v_a_961_);
lean_inc(v_a_960_);
lean_dec(v___x_959_);
v___x_963_ = lean_box(0);
v_isShared_964_ = v_isSharedCheck_971_;
goto v_resetjp_962_;
}
v_resetjp_962_:
{
lean_object* v___x_966_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v_a_961_);
v___x_966_ = v___x_956_;
goto v_reusejp_965_;
}
else
{
lean_object* v_reuseFailAlloc_970_; 
v_reuseFailAlloc_970_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_970_, 0, v_a_961_);
lean_ctor_set(v_reuseFailAlloc_970_, 1, v_trace_953_);
lean_ctor_set(v_reuseFailAlloc_970_, 2, v_buildTime_954_);
lean_ctor_set_uint8(v_reuseFailAlloc_970_, sizeof(void*)*3, v_action_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_970_, sizeof(void*)*3 + 1, v_wantsRebuild_952_);
v___x_966_ = v_reuseFailAlloc_970_;
goto v_reusejp_965_;
}
v_reusejp_965_:
{
lean_object* v___x_968_; 
if (v_isShared_964_ == 0)
{
lean_ctor_set(v___x_963_, 1, v___x_966_);
v___x_968_ = v___x_963_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_a_960_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v___x_966_);
v___x_968_ = v_reuseFailAlloc_969_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
return v___x_968_;
}
}
}
}
else
{
lean_object* v_a_972_; lean_object* v_a_973_; lean_object* v___x_975_; uint8_t v_isShared_976_; uint8_t v_isSharedCheck_983_; 
v_a_972_ = lean_ctor_get(v___x_959_, 0);
v_a_973_ = lean_ctor_get(v___x_959_, 1);
v_isSharedCheck_983_ = !lean_is_exclusive(v___x_959_);
if (v_isSharedCheck_983_ == 0)
{
v___x_975_ = v___x_959_;
v_isShared_976_ = v_isSharedCheck_983_;
goto v_resetjp_974_;
}
else
{
lean_inc(v_a_973_);
lean_inc(v_a_972_);
lean_dec(v___x_959_);
v___x_975_ = lean_box(0);
v_isShared_976_ = v_isSharedCheck_983_;
goto v_resetjp_974_;
}
v_resetjp_974_:
{
lean_object* v___x_978_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 0, v_a_973_);
v___x_978_ = v___x_956_;
goto v_reusejp_977_;
}
else
{
lean_object* v_reuseFailAlloc_982_; 
v_reuseFailAlloc_982_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v_reuseFailAlloc_982_, 0, v_a_973_);
lean_ctor_set(v_reuseFailAlloc_982_, 1, v_trace_953_);
lean_ctor_set(v_reuseFailAlloc_982_, 2, v_buildTime_954_);
lean_ctor_set_uint8(v_reuseFailAlloc_982_, sizeof(void*)*3, v_action_951_);
lean_ctor_set_uint8(v_reuseFailAlloc_982_, sizeof(void*)*3 + 1, v_wantsRebuild_952_);
v___x_978_ = v_reuseFailAlloc_982_;
goto v_reusejp_977_;
}
v_reusejp_977_:
{
lean_object* v___x_980_; 
if (v_isShared_976_ == 0)
{
lean_ctor_set(v___x_975_, 1, v___x_978_);
v___x_980_ = v___x_975_;
goto v_reusejp_979_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_a_972_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v___x_978_);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0___boxed(lean_object* v_target_985_, lean_object* v_kind_986_, lean_object* v_facet_987_, lean_object* v_data_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0(v_target_985_, v_kind_986_, v_facet_987_, v_data_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_);
lean_dec_ref(v___y_993_);
lean_dec(v___y_992_);
lean_dec(v___y_991_);
lean_dec(v___y_990_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(lean_object* v_root_997_, lean_object* v_self_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_){
_start:
{
lean_object* v___x_1006_; 
v___x_1006_ = l_Lake_instDataKindModule;
switch(lean_obj_tag(v_self_998_))
{
case 0:
{
lean_object* v_module_1007_; lean_object* v_toContext_1008_; lean_object* v___x_1009_; 
lean_dec_ref(v___y_999_);
v_module_1007_ = lean_ctor_get(v_self_998_, 0);
lean_inc_n(v_module_1007_, 2);
lean_dec_ref_known(v_self_998_, 1);
v_toContext_1008_ = lean_ctor_get(v___y_1003_, 1);
v___x_1009_ = l_Lake_Workspace_findModule_x3f(v_module_1007_, v_toContext_1008_);
if (lean_obj_tag(v___x_1009_) == 1)
{
lean_object* v_val_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; 
lean_dec(v_module_1007_);
lean_dec_ref(v_root_997_);
v_val_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_val_1010_);
lean_dec_ref_known(v___x_1009_, 1);
v___x_1011_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_1012_ = 0;
v___x_1013_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1014_, 0, v_val_1010_);
lean_ctor_set(v___x_1014_, 1, v___x_1013_);
v___x_1015_ = lean_task_pure(v___x_1014_);
v___x_1016_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___x_1006_);
lean_ctor_set(v___x_1016_, 2, v___x_1011_);
lean_ctor_set_uint8(v___x_1016_, sizeof(void*)*3, v___x_1012_);
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___y_1004_);
return v___x_1017_;
}
else
{
lean_object* v___x_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; uint8_t v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; 
lean_dec(v___x_1009_);
v___x_1018_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1019_ = l_Lake_BuildKey_toString(v_root_997_);
v___x_1020_ = lean_string_append(v___x_1018_, v___x_1019_);
lean_dec_ref(v___x_1019_);
v___x_1021_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5));
v___x_1022_ = lean_string_append(v___x_1020_, v___x_1021_);
v___x_1023_ = 1;
v___x_1024_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_1007_, v___x_1023_);
v___x_1025_ = lean_string_append(v___x_1022_, v___x_1024_);
lean_dec_ref(v___x_1024_);
v___x_1026_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1027_ = lean_string_append(v___x_1025_, v___x_1026_);
v___x_1028_ = 3;
v___x_1029_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1029_, 0, v___x_1027_);
lean_ctor_set_uint8(v___x_1029_, sizeof(void*)*1, v___x_1028_);
v___x_1030_ = lean_array_get_size(v___y_1004_);
v___x_1031_ = lean_array_push(v___y_1004_, v___x_1029_);
v___x_1032_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1030_);
lean_ctor_set(v___x_1032_, 1, v___x_1031_);
return v___x_1032_;
}
}
case 1:
{
lean_object* v_toContext_1033_; lean_object* v_package_1034_; lean_object* v_packageMap_1035_; lean_object* v___x_1036_; 
lean_dec_ref(v___y_999_);
v_toContext_1033_ = lean_ctor_get(v___y_1003_, 1);
v_package_1034_ = lean_ctor_get(v_self_998_, 0);
lean_inc(v_package_1034_);
lean_dec_ref_known(v_self_998_, 1);
v_packageMap_1035_ = lean_ctor_get(v_toContext_1033_, 5);
v___x_1036_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_1035_, v_package_1034_);
if (lean_obj_tag(v___x_1036_) == 1)
{
lean_object* v_val_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; uint8_t v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
lean_dec(v_package_1034_);
lean_dec_ref(v_root_997_);
v_val_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_val_1037_);
lean_dec_ref_known(v___x_1036_, 1);
v___x_1038_ = l_Lake_instDataKindPackage;
v___x_1039_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_1040_ = 0;
v___x_1041_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
v___x_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1042_, 0, v_val_1037_);
lean_ctor_set(v___x_1042_, 1, v___x_1041_);
v___x_1043_ = lean_task_pure(v___x_1042_);
v___x_1044_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1044_, 0, v___x_1043_);
lean_ctor_set(v___x_1044_, 1, v___x_1038_);
lean_ctor_set(v___x_1044_, 2, v___x_1039_);
lean_ctor_set_uint8(v___x_1044_, sizeof(void*)*3, v___x_1040_);
v___x_1045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1045_, 0, v___x_1044_);
lean_ctor_set(v___x_1045_, 1, v___y_1004_);
return v___x_1045_;
}
else
{
lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; uint8_t v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; uint8_t v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_dec(v___x_1036_);
v___x_1046_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1047_ = l_Lake_BuildKey_toString(v_root_997_);
v___x_1048_ = lean_string_append(v___x_1046_, v___x_1047_);
lean_dec_ref(v___x_1047_);
v___x_1049_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_1050_ = lean_string_append(v___x_1048_, v___x_1049_);
v___x_1051_ = 1;
v___x_1052_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_1034_, v___x_1051_);
v___x_1053_ = lean_string_append(v___x_1050_, v___x_1052_);
lean_dec_ref(v___x_1052_);
v___x_1054_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1055_ = lean_string_append(v___x_1053_, v___x_1054_);
v___x_1056_ = 3;
v___x_1057_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1057_, 0, v___x_1055_);
lean_ctor_set_uint8(v___x_1057_, sizeof(void*)*1, v___x_1056_);
v___x_1058_ = lean_array_get_size(v___y_1004_);
v___x_1059_ = lean_array_push(v___y_1004_, v___x_1057_);
v___x_1060_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1058_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
return v___x_1060_;
}
}
case 2:
{
lean_object* v_toContext_1061_; lean_object* v_package_1062_; lean_object* v_module_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1121_; 
lean_dec_ref(v___y_999_);
v_toContext_1061_ = lean_ctor_get(v___y_1003_, 1);
v_package_1062_ = lean_ctor_get(v_self_998_, 0);
v_module_1063_ = lean_ctor_get(v_self_998_, 1);
v_isSharedCheck_1121_ = !lean_is_exclusive(v_self_998_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1065_ = v_self_998_;
v_isShared_1066_ = v_isSharedCheck_1121_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_module_1063_);
lean_inc(v_package_1062_);
lean_dec(v_self_998_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1121_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v_packageMap_1067_; lean_object* v___x_1068_; 
v_packageMap_1067_ = lean_ctor_get(v_toContext_1061_, 5);
v___x_1068_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_1067_, v_package_1062_);
if (lean_obj_tag(v___x_1068_) == 1)
{
lean_object* v_val_1069_; lean_object* v___x_1070_; 
lean_dec(v_package_1062_);
v_val_1069_ = lean_ctor_get(v___x_1068_, 0);
lean_inc_n(v_val_1069_, 2);
lean_dec_ref_known(v___x_1068_, 1);
lean_inc(v_module_1063_);
v___x_1070_ = l_Lake_Package_findTargetModule_x3f(v_module_1063_, v_val_1069_);
if (lean_obj_tag(v___x_1070_) == 1)
{
lean_object* v_val_1071_; lean_object* v___x_1072_; uint8_t v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1076_; 
lean_dec(v_val_1069_);
lean_dec(v_module_1063_);
lean_dec_ref(v_root_997_);
v_val_1071_ = lean_ctor_get(v___x_1070_, 0);
lean_inc(v_val_1071_);
lean_dec_ref_known(v___x_1070_, 1);
v___x_1072_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__1));
v___x_1073_ = 0;
v___x_1074_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__4);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 0);
lean_ctor_set(v___x_1065_, 1, v___x_1074_);
lean_ctor_set(v___x_1065_, 0, v_val_1071_);
v___x_1076_ = v___x_1065_;
goto v_reusejp_1075_;
}
else
{
lean_object* v_reuseFailAlloc_1080_; 
v_reuseFailAlloc_1080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1080_, 0, v_val_1071_);
lean_ctor_set(v_reuseFailAlloc_1080_, 1, v___x_1074_);
v___x_1076_ = v_reuseFailAlloc_1080_;
goto v_reusejp_1075_;
}
v_reusejp_1075_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; 
v___x_1077_ = lean_task_pure(v___x_1076_);
v___x_1078_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_1078_, 0, v___x_1077_);
lean_ctor_set(v___x_1078_, 1, v___x_1006_);
lean_ctor_set(v___x_1078_, 2, v___x_1072_);
lean_ctor_set_uint8(v___x_1078_, sizeof(void*)*3, v___x_1073_);
v___x_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1079_, 0, v___x_1078_);
lean_ctor_set(v___x_1079_, 1, v___y_1004_);
return v___x_1079_;
}
}
else
{
lean_object* v_baseName_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; uint8_t v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; uint8_t v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; uint8_t v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1102_; 
lean_dec(v___x_1070_);
v_baseName_1081_ = lean_ctor_get(v_val_1069_, 1);
lean_inc(v_baseName_1081_);
lean_dec(v_val_1069_);
v___x_1082_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1083_ = l_Lake_BuildKey_toString(v_root_997_);
v___x_1084_ = lean_string_append(v___x_1082_, v___x_1083_);
lean_dec_ref(v___x_1083_);
v___x_1085_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__5));
v___x_1086_ = lean_string_append(v___x_1084_, v___x_1085_);
v___x_1087_ = 1;
v___x_1088_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_module_1063_, v___x_1087_);
v___x_1089_ = lean_string_append(v___x_1086_, v___x_1088_);
lean_dec_ref(v___x_1088_);
v___x_1090_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__7));
v___x_1091_ = lean_string_append(v___x_1089_, v___x_1090_);
v___x_1092_ = 0;
v___x_1093_ = l_Lean_Name_toString(v_baseName_1081_, v___x_1092_);
v___x_1094_ = lean_string_append(v___x_1091_, v___x_1093_);
lean_dec_ref(v___x_1093_);
v___x_1095_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_1096_ = lean_string_append(v___x_1094_, v___x_1095_);
v___x_1097_ = 3;
v___x_1098_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1098_, 0, v___x_1096_);
lean_ctor_set_uint8(v___x_1098_, sizeof(void*)*1, v___x_1097_);
v___x_1099_ = lean_array_get_size(v___y_1004_);
v___x_1100_ = lean_array_push(v___y_1004_, v___x_1098_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 1);
lean_ctor_set(v___x_1065_, 1, v___x_1100_);
lean_ctor_set(v___x_1065_, 0, v___x_1099_);
v___x_1102_ = v___x_1065_;
goto v_reusejp_1101_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1099_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v___x_1100_);
v___x_1102_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1101_;
}
v_reusejp_1101_:
{
return v___x_1102_;
}
}
}
else
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; uint8_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; uint8_t v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1119_; 
lean_dec(v___x_1068_);
lean_dec(v_module_1063_);
v___x_1104_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1105_ = l_Lake_BuildKey_toString(v_root_997_);
v___x_1106_ = lean_string_append(v___x_1104_, v___x_1105_);
lean_dec_ref(v___x_1105_);
v___x_1107_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_1108_ = lean_string_append(v___x_1106_, v___x_1107_);
v___x_1109_ = 1;
v___x_1110_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_1062_, v___x_1109_);
v___x_1111_ = lean_string_append(v___x_1108_, v___x_1110_);
lean_dec_ref(v___x_1110_);
v___x_1112_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1113_ = lean_string_append(v___x_1111_, v___x_1112_);
v___x_1114_ = 3;
v___x_1115_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1115_, 0, v___x_1113_);
lean_ctor_set_uint8(v___x_1115_, sizeof(void*)*1, v___x_1114_);
v___x_1116_ = lean_array_get_size(v___y_1004_);
v___x_1117_ = lean_array_push(v___y_1004_, v___x_1115_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set_tag(v___x_1065_, 1);
lean_ctor_set(v___x_1065_, 1, v___x_1117_);
lean_ctor_set(v___x_1065_, 0, v___x_1116_);
v___x_1119_ = v___x_1065_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v___x_1116_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
case 3:
{
lean_object* v_toContext_1122_; lean_object* v_package_1123_; lean_object* v_target_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1152_; 
v_toContext_1122_ = lean_ctor_get(v___y_1003_, 1);
v_package_1123_ = lean_ctor_get(v_self_998_, 0);
v_target_1124_ = lean_ctor_get(v_self_998_, 1);
v_isSharedCheck_1152_ = !lean_is_exclusive(v_self_998_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1126_ = v_self_998_;
v_isShared_1127_ = v_isSharedCheck_1152_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_target_1124_);
lean_inc(v_package_1123_);
lean_dec(v_self_998_);
v___x_1126_ = lean_box(0);
v_isShared_1127_ = v_isSharedCheck_1152_;
goto v_resetjp_1125_;
}
v_resetjp_1125_:
{
lean_object* v_packageMap_1128_; lean_object* v___x_1129_; 
v_packageMap_1128_ = lean_ctor_get(v_toContext_1122_, 5);
v___x_1129_ = l_Std_DTreeMap_Internal_Impl_get_x3f___at___00__private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_spec__0___redArg(v_packageMap_1128_, v_package_1123_);
if (lean_obj_tag(v___x_1129_) == 1)
{
lean_object* v_val_1130_; lean_object* v___x_1132_; 
lean_dec(v_package_1123_);
lean_dec_ref(v_root_997_);
v_val_1130_ = lean_ctor_get(v___x_1129_, 0);
lean_inc(v_val_1130_);
lean_dec_ref_known(v___x_1129_, 1);
if (v_isShared_1127_ == 0)
{
lean_ctor_set_tag(v___x_1126_, 0);
lean_ctor_set(v___x_1126_, 0, v_val_1130_);
v___x_1132_ = v___x_1126_;
goto v_reusejp_1131_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_val_1130_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v_target_1124_);
v___x_1132_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1131_;
}
v_reusejp_1131_:
{
lean_object* v___x_1133_; 
lean_inc_ref(v___y_1003_);
lean_inc(v___y_1002_);
lean_inc(v___y_1001_);
lean_inc(v___y_1000_);
v___x_1133_ = lean_apply_7(v___y_999_, v___x_1132_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, lean_box(0));
return v___x_1133_;
}
}
else
{
lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; uint8_t v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1150_; 
lean_dec(v___x_1129_);
lean_dec(v_target_1124_);
lean_dec_ref(v___y_999_);
v___x_1135_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1136_ = l_Lake_BuildKey_toString(v_root_997_);
v___x_1137_ = lean_string_append(v___x_1135_, v___x_1136_);
lean_dec_ref(v___x_1136_);
v___x_1138_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__1));
v___x_1139_ = lean_string_append(v___x_1137_, v___x_1138_);
v___x_1140_ = 1;
v___x_1141_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_package_1123_, v___x_1140_);
v___x_1142_ = lean_string_append(v___x_1139_, v___x_1141_);
lean_dec_ref(v___x_1141_);
v___x_1143_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__2));
v___x_1144_ = lean_string_append(v___x_1142_, v___x_1143_);
v___x_1145_ = 3;
v___x_1146_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1146_, 0, v___x_1144_);
lean_ctor_set_uint8(v___x_1146_, sizeof(void*)*1, v___x_1145_);
v___x_1147_ = lean_array_get_size(v___y_1004_);
v___x_1148_ = lean_array_push(v___y_1004_, v___x_1146_);
if (v_isShared_1127_ == 0)
{
lean_ctor_set_tag(v___x_1126_, 1);
lean_ctor_set(v___x_1126_, 1, v___x_1148_);
lean_ctor_set(v___x_1126_, 0, v___x_1147_);
v___x_1150_ = v___x_1126_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v___x_1147_);
lean_ctor_set(v_reuseFailAlloc_1151_, 1, v___x_1148_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
default: 
{
lean_object* v_target_1153_; lean_object* v_facet_1154_; lean_object* v___x_1155_; 
v_target_1153_ = lean_ctor_get(v_self_998_, 0);
v_facet_1154_ = lean_ctor_get(v_self_998_, 1);
lean_inc_ref(v___y_999_);
lean_inc_ref(v_target_1153_);
lean_inc_ref(v_root_997_);
v___x_1155_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_root_997_, v_target_1153_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1204_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
v_a_1157_ = lean_ctor_get(v___x_1155_, 1);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1159_ = v___x_1155_;
v_isShared_1160_ = v_isSharedCheck_1204_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_inc(v_a_1156_);
lean_dec(v___x_1155_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1204_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v_kind_1161_; uint8_t v___x_1162_; 
v_kind_1161_ = lean_ctor_get(v_a_1156_, 1);
v___x_1162_ = l_Lean_Name_isAnonymous(v_kind_1161_);
if (v___x_1162_ == 0)
{
lean_object* v_toContext_1163_; lean_object* v_facetConfigs_1164_; lean_object* v___x_1165_; 
lean_inc(v_facet_1154_);
lean_inc_ref(v_target_1153_);
lean_dec_ref_known(v_self_998_, 2);
v_toContext_1163_ = lean_ctor_get(v___y_1003_, 1);
v_facetConfigs_1164_ = lean_ctor_get(v_toContext_1163_, 6);
v___x_1165_ = l_Lake_FacetConfigMap_get_x3f(v_facet_1154_, v_facetConfigs_1164_);
if (lean_obj_tag(v___x_1165_) == 1)
{
lean_object* v_val_1166_; lean_object* v_outKind_1167_; lean_object* v___f_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1173_; 
lean_dec_ref(v_root_997_);
v_val_1166_ = lean_ctor_get(v___x_1165_, 0);
lean_inc(v_val_1166_);
lean_dec_ref_known(v___x_1165_, 1);
v_outKind_1167_ = lean_ctor_get(v_val_1166_, 2);
lean_inc(v_outKind_1167_);
lean_dec(v_val_1166_);
lean_inc(v_kind_1161_);
v___f_1168_ = lean_alloc_closure((void*)(l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___lam__0___boxed), 11, 3);
lean_closure_set(v___f_1168_, 0, v_target_1153_);
lean_closure_set(v___f_1168_, 1, v_kind_1161_);
lean_closure_set(v___f_1168_, 2, v_facet_1154_);
v___x_1169_ = lean_unsigned_to_nat(0u);
v___x_1170_ = lean_obj_once(&l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3, &l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3_once, _init_l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__3);
v___x_1171_ = l_Lake_Job_bindM___redArg(v_outKind_1167_, v_a_1156_, v___f_1168_, v___x_1169_, v___x_1162_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_, v___y_1003_, v___x_1170_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1171_);
v___x_1173_ = v___x_1159_;
goto v_reusejp_1172_;
}
else
{
lean_object* v_reuseFailAlloc_1174_; 
v_reuseFailAlloc_1174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1174_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1174_, 1, v_a_1157_);
v___x_1173_ = v_reuseFailAlloc_1174_;
goto v_reusejp_1172_;
}
v_reusejp_1172_:
{
return v___x_1173_;
}
}
else
{
lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; uint8_t v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; uint8_t v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1190_; 
lean_dec(v___x_1165_);
lean_dec(v_a_1156_);
lean_dec_ref(v_target_1153_);
lean_dec_ref(v___y_999_);
v___x_1175_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1176_ = l_Lake_BuildKey_toString(v_root_997_);
v___x_1177_ = lean_string_append(v___x_1175_, v___x_1176_);
lean_dec_ref(v___x_1176_);
v___x_1178_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__11));
v___x_1179_ = lean_string_append(v___x_1177_, v___x_1178_);
v___x_1180_ = 1;
v___x_1181_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_facet_1154_, v___x_1180_);
v___x_1182_ = lean_string_append(v___x_1179_, v___x_1181_);
lean_dec_ref(v___x_1181_);
v___x_1183_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_1184_ = lean_string_append(v___x_1182_, v___x_1183_);
v___x_1185_ = 3;
v___x_1186_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1186_, 0, v___x_1184_);
lean_ctor_set_uint8(v___x_1186_, sizeof(void*)*1, v___x_1185_);
v___x_1187_ = lean_array_get_size(v_a_1157_);
v___x_1188_ = lean_array_push(v_a_1157_, v___x_1186_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 1);
lean_ctor_set(v___x_1159_, 1, v___x_1188_);
lean_ctor_set(v___x_1159_, 0, v___x_1187_);
v___x_1190_ = v___x_1159_;
goto v_reusejp_1189_;
}
else
{
lean_object* v_reuseFailAlloc_1191_; 
v_reuseFailAlloc_1191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1191_, 0, v___x_1187_);
lean_ctor_set(v_reuseFailAlloc_1191_, 1, v___x_1188_);
v___x_1190_ = v_reuseFailAlloc_1191_;
goto v_reusejp_1189_;
}
v_reusejp_1189_:
{
return v___x_1190_;
}
}
}
else
{
lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; uint8_t v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; lean_object* v___x_1202_; 
lean_dec(v_a_1156_);
lean_dec_ref(v___y_999_);
lean_dec_ref(v_root_997_);
v___x_1192_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux_resolveTargetPackageD___redArg___closed__0));
v___x_1193_ = l_Lake_BuildKey_toString(v_self_998_);
v___x_1194_ = lean_string_append(v___x_1192_, v___x_1193_);
lean_dec_ref(v___x_1193_);
v___x_1195_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__13));
v___x_1196_ = lean_string_append(v___x_1194_, v___x_1195_);
v___x_1197_ = 3;
v___x_1198_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set_uint8(v___x_1198_, sizeof(void*)*1, v___x_1197_);
v___x_1199_ = lean_array_get_size(v_a_1157_);
v___x_1200_ = lean_array_push(v_a_1157_, v___x_1198_);
if (v_isShared_1160_ == 0)
{
lean_ctor_set_tag(v___x_1159_, 1);
lean_ctor_set(v___x_1159_, 1, v___x_1200_);
lean_ctor_set(v___x_1159_, 0, v___x_1199_);
v___x_1202_ = v___x_1159_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v___x_1199_);
lean_ctor_set(v_reuseFailAlloc_1203_, 1, v___x_1200_);
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
else
{
lean_dec_ref_known(v_self_998_, 2);
lean_dec_ref(v___y_999_);
lean_dec_ref(v_root_997_);
return v___x_1155_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore___boxed(lean_object* v_root_1205_, lean_object* v_self_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_){
_start:
{
lean_object* v_res_1214_; 
v_res_1214_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_root_1205_, v_self_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_, v___y_1211_, v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec(v___y_1209_);
lean_dec(v___y_1208_);
return v_res_1214_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg(lean_object* v_self_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_){
_start:
{
lean_object* v___x_1223_; 
lean_inc_ref(v_self_1215_);
v___x_1223_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_self_1215_, v_self_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_);
return v___x_1223_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___redArg___boxed(lean_object* v_self_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_){
_start:
{
lean_object* v_res_1232_; 
v_res_1232_ = l_Lake_BuildKey_fetch___redArg(v_self_1224_, v___y_1225_, v___y_1226_, v___y_1227_, v___y_1228_, v___y_1229_, v___y_1230_);
lean_dec_ref(v___y_1229_);
lean_dec(v___y_1228_);
lean_dec(v___y_1227_);
lean_dec(v___y_1226_);
return v_res_1232_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch(lean_object* v_00_u03b1_1233_, lean_object* v_self_1234_, lean_object* v_inst_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v___x_1243_; 
lean_inc_ref(v_self_1234_);
v___x_1243_ = l___private_Lake_Build_Target_Fetch_0__Lake_BuildKey_fetchCore(v_self_1234_, v_self_1234_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
return v___x_1243_;
}
}
LEAN_EXPORT lean_object* l_Lake_BuildKey_fetch___boxed(lean_object* v_00_u03b1_1244_, lean_object* v_self_1245_, lean_object* v_inst_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = l_Lake_BuildKey_fetch(v_00_u03b1_1244_, v_self_1245_, v_inst_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec(v___y_1249_);
lean_dec(v___y_1248_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg(lean_object* v_inst_1259_, lean_object* v_defaultPkg_1260_, lean_object* v_self_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_, lean_object* v___y_1266_, lean_object* v___y_1267_){
_start:
{
uint8_t v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = 1;
lean_inc_ref_n(v_self_1261_, 2);
v___x_1270_ = l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux(v_defaultPkg_1260_, v_self_1261_, v_self_1261_, v___x_1269_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_, v___y_1266_, v___y_1267_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v_a_1271_; lean_object* v_a_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1312_; 
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
v_a_1272_ = lean_ctor_get(v___x_1270_, 1);
v_isSharedCheck_1312_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1312_ == 0)
{
v___x_1274_ = v___x_1270_;
v_isShared_1275_ = v_isSharedCheck_1312_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_a_1272_);
lean_inc(v_a_1271_);
lean_dec(v___x_1270_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1312_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v___y_1277_; lean_object* v_snd_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1310_; 
v_snd_1295_ = lean_ctor_get(v_a_1271_, 1);
v_isSharedCheck_1310_ = !lean_is_exclusive(v_a_1271_);
if (v_isSharedCheck_1310_ == 0)
{
lean_object* v_unused_1311_; 
v_unused_1311_ = lean_ctor_get(v_a_1271_, 0);
lean_dec(v_unused_1311_);
v___x_1297_ = v_a_1271_;
v_isShared_1298_ = v_isSharedCheck_1310_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_snd_1295_);
lean_dec(v_a_1271_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1310_;
goto v_resetjp_1296_;
}
v___jp_1276_:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1293_; 
v___x_1278_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__0));
v___x_1279_ = l___private_Lake_Build_Key_0__Lake_PartialBuildKey_toString_go(v_self_1261_);
v___x_1280_ = lean_string_append(v___x_1278_, v___x_1279_);
lean_dec_ref(v___x_1279_);
v___x_1281_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__1));
v___x_1282_ = lean_string_append(v___x_1280_, v___x_1281_);
v___x_1283_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_inst_1259_, v___x_1269_);
v___x_1284_ = lean_string_append(v___x_1282_, v___x_1283_);
lean_dec_ref(v___x_1283_);
v___x_1285_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__2));
v___x_1286_ = lean_string_append(v___x_1284_, v___x_1285_);
v___x_1287_ = lean_string_append(v___x_1286_, v___y_1277_);
lean_dec_ref(v___y_1277_);
v___x_1288_ = 3;
v___x_1289_ = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(v___x_1289_, 0, v___x_1287_);
lean_ctor_set_uint8(v___x_1289_, sizeof(void*)*1, v___x_1288_);
v___x_1290_ = lean_array_get_size(v_a_1272_);
v___x_1291_ = lean_array_push(v_a_1272_, v___x_1289_);
if (v_isShared_1275_ == 0)
{
lean_ctor_set_tag(v___x_1274_, 1);
lean_ctor_set(v___x_1274_, 1, v___x_1291_);
lean_ctor_set(v___x_1274_, 0, v___x_1290_);
v___x_1293_ = v___x_1274_;
goto v_reusejp_1292_;
}
else
{
lean_object* v_reuseFailAlloc_1294_; 
v_reuseFailAlloc_1294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1294_, 0, v___x_1290_);
lean_ctor_set(v_reuseFailAlloc_1294_, 1, v___x_1291_);
v___x_1293_ = v_reuseFailAlloc_1294_;
goto v_reusejp_1292_;
}
v_reusejp_1292_:
{
return v___x_1293_;
}
}
v_resetjp_1296_:
{
lean_object* v_kind_1299_; uint8_t v___x_1300_; 
v_kind_1299_ = lean_ctor_get(v_snd_1295_, 1);
v___x_1300_ = lean_name_eq(v_kind_1299_, v_inst_1259_);
if (v___x_1300_ == 0)
{
uint8_t v___x_1301_; 
lean_inc(v_kind_1299_);
lean_del_object(v___x_1297_);
lean_dec(v_snd_1295_);
v___x_1301_ = l_Lean_Name_isAnonymous(v_kind_1299_);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1302_ = ((lean_object*)(l___private_Lake_Build_Target_Fetch_0__Lake_PartialBuildKey_fetchInCoreAux___closed__8));
v___x_1303_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_kind_1299_, v___x_1269_);
v___x_1304_ = lean_string_append(v___x_1302_, v___x_1303_);
lean_dec_ref(v___x_1303_);
v___x_1305_ = lean_string_append(v___x_1304_, v___x_1302_);
v___y_1277_ = v___x_1305_;
goto v___jp_1276_;
}
else
{
lean_object* v___x_1306_; 
lean_dec(v_kind_1299_);
v___x_1306_ = ((lean_object*)(l_Lake_Target_fetchIn___redArg___closed__3));
v___y_1277_ = v___x_1306_;
goto v___jp_1276_;
}
}
else
{
lean_object* v___x_1308_; 
lean_del_object(v___x_1274_);
lean_dec_ref(v_self_1261_);
lean_dec(v_inst_1259_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set(v___x_1297_, 1, v_a_1272_);
lean_ctor_set(v___x_1297_, 0, v_snd_1295_);
v___x_1308_ = v___x_1297_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v_snd_1295_);
lean_ctor_set(v_reuseFailAlloc_1309_, 1, v_a_1272_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
}
}
else
{
lean_object* v_a_1313_; lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
lean_dec_ref(v_self_1261_);
lean_dec(v_inst_1259_);
v_a_1313_ = lean_ctor_get(v___x_1270_, 0);
v_a_1314_ = lean_ctor_get(v___x_1270_, 1);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1270_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_inc(v_a_1313_);
lean_dec(v___x_1270_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1313_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___redArg___boxed(lean_object* v_inst_1322_, lean_object* v_defaultPkg_1323_, lean_object* v_self_1324_, lean_object* v___y_1325_, lean_object* v___y_1326_, lean_object* v___y_1327_, lean_object* v___y_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lake_Target_fetchIn___redArg(v_inst_1322_, v_defaultPkg_1323_, v_self_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_);
lean_dec_ref(v___y_1329_);
lean_dec(v___y_1328_);
lean_dec(v___y_1327_);
lean_dec(v___y_1326_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn(lean_object* v_00_u03b1_1333_, lean_object* v_inst_1334_, lean_object* v_defaultPkg_1335_, lean_object* v_self_1336_, lean_object* v___y_1337_, lean_object* v___y_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_){
_start:
{
lean_object* v___x_1344_; 
v___x_1344_ = l_Lake_Target_fetchIn___redArg(v_inst_1334_, v_defaultPkg_1335_, v_self_1336_, v___y_1337_, v___y_1338_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l_Lake_Target_fetchIn___boxed(lean_object* v_00_u03b1_1345_, lean_object* v_inst_1346_, lean_object* v_defaultPkg_1347_, lean_object* v_self_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_){
_start:
{
lean_object* v_res_1356_; 
v_res_1356_ = l_Lake_Target_fetchIn(v_00_u03b1_1345_, v_inst_1346_, v_defaultPkg_1347_, v_self_1348_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_);
lean_dec_ref(v___y_1353_);
lean_dec(v___y_1352_);
lean_dec(v___y_1351_);
lean_dec(v___y_1350_);
return v_res_1356_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0(lean_object* v_inst_1357_, lean_object* v_defaultPkg_1358_, lean_object* v_x_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_, lean_object* v___y_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v___x_1367_; 
v___x_1367_ = l_Lake_Target_fetchIn___redArg(v_inst_1357_, v_defaultPkg_1358_, v_x_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_, v___y_1364_, v___y_1365_);
return v___x_1367_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___lam__0___boxed(lean_object* v_inst_1368_, lean_object* v_defaultPkg_1369_, lean_object* v_x_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_){
_start:
{
lean_object* v_res_1378_; 
v_res_1378_ = l_Lake_TargetArray_fetchIn___redArg___lam__0(v_inst_1368_, v_defaultPkg_1369_, v_x_1370_, v___y_1371_, v___y_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec(v___y_1372_);
return v_res_1378_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg(lean_object* v_inst_1379_, lean_object* v_defaultPkg_1380_, lean_object* v_self_1381_, lean_object* v_traceCaption_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_){
_start:
{
lean_object* v___x_1390_; lean_object* v_toApplicative_1391_; lean_object* v_toBind_1392_; lean_object* v_toFunctor_1393_; lean_object* v_toPure_1394_; lean_object* v___f_1395_; lean_object* v___f_1396_; lean_object* v___f_1397_; lean_object* v___f_1398_; lean_object* v___f_1399_; lean_object* v___x_1400_; lean_object* v___f_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; size_t v_sz_1409_; size_t v___x_1410_; lean_object* v___x_884__overap_1411_; lean_object* v___x_1412_; 
v___x_1390_ = l_instMonadBaseIO;
v_toApplicative_1391_ = lean_ctor_get(v___x_1390_, 0);
v_toBind_1392_ = lean_ctor_get(v___x_1390_, 1);
v_toFunctor_1393_ = lean_ctor_get(v_toApplicative_1391_, 0);
v_toPure_1394_ = lean_ctor_get(v_toApplicative_1391_, 1);
v___f_1395_ = lean_alloc_closure((void*)(l_Lake_TargetArray_fetchIn___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_1395_, 0, v_inst_1379_);
lean_closure_set(v___f_1395_, 1, v_defaultPkg_1380_);
lean_inc_n(v_toBind_1392_, 3);
lean_inc_n(v_toPure_1394_, 5);
v___f_1396_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__1), 7, 2);
lean_closure_set(v___f_1396_, 0, v_toPure_1394_);
lean_closure_set(v___f_1396_, 1, v_toBind_1392_);
v___f_1397_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__3), 7, 2);
lean_closure_set(v___f_1397_, 0, v_toPure_1394_);
lean_closure_set(v___f_1397_, 1, v_toBind_1392_);
lean_inc_ref(v___f_1396_);
v___f_1398_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__5), 7, 2);
lean_closure_set(v___f_1398_, 0, v_toPure_1394_);
lean_closure_set(v___f_1398_, 1, v___f_1396_);
lean_inc_ref_n(v_toFunctor_1393_, 2);
v___f_1399_ = lean_alloc_closure((void*)(l_Lake_EStateT_instMonad___redArg___lam__9), 8, 3);
lean_closure_set(v___f_1399_, 0, v_toFunctor_1393_);
lean_closure_set(v___f_1399_, 1, v_toPure_1394_);
lean_closure_set(v___f_1399_, 2, v_toBind_1392_);
v___x_1400_ = l_Lake_EStateT_instFunctor___redArg(v_toFunctor_1393_);
v___f_1401_ = lean_alloc_closure((void*)(l_Lake_EStateT_instPure___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1401_, 0, v_toPure_1394_);
v___x_1402_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___f_1401_);
lean_ctor_set(v___x_1402_, 2, v___f_1399_);
lean_ctor_set(v___x_1402_, 3, v___f_1398_);
lean_ctor_set(v___x_1402_, 4, v___f_1397_);
v___x_1403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1403_, 0, v___x_1402_);
lean_ctor_set(v___x_1403_, 1, v___f_1396_);
v___x_1404_ = l_ReaderT_instMonad___redArg(v___x_1403_);
v___x_1405_ = l_StateRefT_x27_instMonad___redArg(v___x_1404_);
v___x_1406_ = l_ReaderT_instMonad___redArg(v___x_1405_);
v___x_1407_ = l_ReaderT_instMonad___redArg(v___x_1406_);
v___x_1408_ = l_Lake_EquipT_instMonad___redArg(v___x_1407_);
v_sz_1409_ = lean_array_size(v_self_1381_);
v___x_1410_ = ((size_t)0ULL);
v___x_884__overap_1411_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_1408_, v___f_1395_, v_sz_1409_, v___x_1410_, v_self_1381_);
lean_inc_ref(v___y_1387_);
lean_inc(v___y_1386_);
lean_inc(v___y_1385_);
lean_inc(v___y_1384_);
v___x_1412_ = lean_apply_7(v___x_884__overap_1411_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_, v___y_1388_, lean_box(0));
if (lean_obj_tag(v___x_1412_) == 0)
{
lean_object* v_a_1413_; lean_object* v_a_1414_; lean_object* v___x_1416_; uint8_t v_isShared_1417_; uint8_t v_isSharedCheck_1422_; 
v_a_1413_ = lean_ctor_get(v___x_1412_, 0);
v_a_1414_ = lean_ctor_get(v___x_1412_, 1);
v_isSharedCheck_1422_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1422_ == 0)
{
v___x_1416_ = v___x_1412_;
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
else
{
lean_inc(v_a_1414_);
lean_inc(v_a_1413_);
lean_dec(v___x_1412_);
v___x_1416_ = lean_box(0);
v_isShared_1417_ = v_isSharedCheck_1422_;
goto v_resetjp_1415_;
}
v_resetjp_1415_:
{
lean_object* v___x_1418_; lean_object* v___x_1420_; 
v___x_1418_ = l_Lake_Job_collectArray___redArg(v_a_1413_, v_traceCaption_1382_);
lean_dec(v_a_1413_);
if (v_isShared_1417_ == 0)
{
lean_ctor_set(v___x_1416_, 0, v___x_1418_);
v___x_1420_ = v___x_1416_;
goto v_reusejp_1419_;
}
else
{
lean_object* v_reuseFailAlloc_1421_; 
v_reuseFailAlloc_1421_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1421_, 0, v___x_1418_);
lean_ctor_set(v_reuseFailAlloc_1421_, 1, v_a_1414_);
v___x_1420_ = v_reuseFailAlloc_1421_;
goto v_reusejp_1419_;
}
v_reusejp_1419_:
{
return v___x_1420_;
}
}
}
else
{
lean_object* v_a_1423_; lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1431_; 
lean_dec_ref(v_traceCaption_1382_);
v_a_1423_ = lean_ctor_get(v___x_1412_, 0);
v_a_1424_ = lean_ctor_get(v___x_1412_, 1);
v_isSharedCheck_1431_ = !lean_is_exclusive(v___x_1412_);
if (v_isSharedCheck_1431_ == 0)
{
v___x_1426_ = v___x_1412_;
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_inc(v_a_1423_);
lean_dec(v___x_1412_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1431_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1429_; 
if (v_isShared_1427_ == 0)
{
v___x_1429_ = v___x_1426_;
goto v_reusejp_1428_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_a_1423_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v_a_1424_);
v___x_1429_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1428_;
}
v_reusejp_1428_:
{
return v___x_1429_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___redArg___boxed(lean_object* v_inst_1432_, lean_object* v_defaultPkg_1433_, lean_object* v_self_1434_, lean_object* v_traceCaption_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
lean_object* v_res_1443_; 
v_res_1443_ = l_Lake_TargetArray_fetchIn___redArg(v_inst_1432_, v_defaultPkg_1433_, v_self_1434_, v_traceCaption_1435_, v___y_1436_, v___y_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec(v___y_1438_);
lean_dec(v___y_1437_);
return v_res_1443_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn(lean_object* v_00_u03b1_1444_, lean_object* v_inst_1445_, lean_object* v_defaultPkg_1446_, lean_object* v_self_1447_, lean_object* v_traceCaption_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v___x_1456_; 
v___x_1456_ = l_Lake_TargetArray_fetchIn___redArg(v_inst_1445_, v_defaultPkg_1446_, v_self_1447_, v_traceCaption_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
return v___x_1456_;
}
}
LEAN_EXPORT lean_object* l_Lake_TargetArray_fetchIn___boxed(lean_object* v_00_u03b1_1457_, lean_object* v_inst_1458_, lean_object* v_defaultPkg_1459_, lean_object* v_self_1460_, lean_object* v_traceCaption_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_, lean_object* v___y_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l_Lake_TargetArray_fetchIn(v_00_u03b1_1457_, v_inst_1458_, v_defaultPkg_1459_, v_self_1460_, v_traceCaption_1461_, v___y_1462_, v___y_1463_, v___y_1464_, v___y_1465_, v___y_1466_, v___y_1467_);
lean_dec_ref(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec(v___y_1464_);
lean_dec(v___y_1463_);
return v_res_1469_;
}
}
lean_object* runtime_initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* runtime_initialize_Lake_Build_Key(uint8_t builtin);
void lean_initialize();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lake_Build_Target_Fetch(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize();
res = runtime_initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lake_Build_Target_Fetch(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lake_Build_Infos(uint8_t builtin);
lean_object* initialize_Lake_Build_Job_Monad(uint8_t builtin);
lean_object* initialize_Lake_Config_Monad(uint8_t builtin);
lean_object* initialize_Lake_Build_Key(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lake_Build_Target_Fetch(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lake_Build_Infos(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Job_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Config_Monad(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lake_Build_Key(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lake_Build_Target_Fetch(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lake_Build_Target_Fetch(builtin);
}
#ifdef __cplusplus
}
#endif
