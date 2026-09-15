// Lean compiler output
// Module: Lean.Replay
// Imports: import Lean.CoreM public import Lean.AddDecl import Lean.Util.FoldConsts
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
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_NameSet_erase(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_getUsedConstantsAsSet(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_io_error_to_string(lean_object*);
lean_object* lean_add_decl(lean_object*, size_t, size_t, lean_object*, lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_Kernel_Exception_toMessageData(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_toString(lean_object*);
lean_object* l_Lean_ConstantInfo_name(lean_object*);
lean_object* lean_environment_find(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedConstantInfo_default;
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_ConstantInfo_inductiveVal_x21(lean_object*);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
lean_object* lean_elab_environment_to_kernel_env(lean_object*);
extern lean_object* l_Lean_NameSet_empty;
uint8_t l_Lean_ConstantInfo_isUnsafe(lean_object*);
uint8_t l_Lean_ConstantInfo_isPartial(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_io_user_error(lean_object*);
uint8_t l_Lean_instBEqConstructorVal_beq(lean_object*, lean_object*);
uint8_t l_Lean_instBEqRecursorVal_beq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Environment_ofKernelEnv(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__5_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1_spec__4(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__9(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "while replaying declaration '"};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__0 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__0_value;
static const lean_string_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "':\n"};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__1 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__1_value;
static const lean_string_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__2 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__2_value;
static const lean_ctor_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__2_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__3 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__3_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__6 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__6_value;
static const lean_string_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 68, .m_data = "_private.Lean.Replay.0.Lean.Kernel.Environment.Replay.replayConstant"};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__5 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__5_value;
static const lean_string_object l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Lean.Replay"};
static const lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__4 = (const lean_object*)&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__4_value;
static lean_once_cell_t l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "No such constructor "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Invalid constructor "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "No such recursor "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__0 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__0_value;
static const lean_string_object l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Invalid recursor "};
static const lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__1 = (const lean_object*)&l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_replay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_replay___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_replay(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Environment_replay___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(lean_object* v_name_1_, lean_object* v___y_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_remaining_5_; uint8_t v___x_6_; 
v___x_4_ = lean_st_ref_get(v___y_2_);
v_remaining_5_ = lean_ctor_get(v___x_4_, 1);
lean_inc(v_remaining_5_);
lean_dec(v___x_4_);
v___x_6_ = l_Lean_NameSet_contains(v_remaining_5_, v_name_1_);
lean_dec(v_remaining_5_);
if (v___x_6_ == 0)
{
lean_object* v___x_7_; lean_object* v___x_8_; 
lean_dec(v_name_1_);
v___x_7_ = lean_box(v___x_6_);
v___x_8_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_8_, 0, v___x_7_);
return v___x_8_;
}
else
{
lean_object* v___x_9_; lean_object* v_env_10_; lean_object* v_remaining_11_; lean_object* v_pending_12_; lean_object* v_postponedConstructors_13_; lean_object* v_postponedRecursors_14_; lean_object* v___x_16_; uint8_t v_isShared_17_; uint8_t v_isSharedCheck_26_; 
v___x_9_ = lean_st_ref_take(v___y_2_);
v_env_10_ = lean_ctor_get(v___x_9_, 0);
v_remaining_11_ = lean_ctor_get(v___x_9_, 1);
v_pending_12_ = lean_ctor_get(v___x_9_, 2);
v_postponedConstructors_13_ = lean_ctor_get(v___x_9_, 3);
v_postponedRecursors_14_ = lean_ctor_get(v___x_9_, 4);
v_isSharedCheck_26_ = !lean_is_exclusive(v___x_9_);
if (v_isSharedCheck_26_ == 0)
{
v___x_16_ = v___x_9_;
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
else
{
lean_inc(v_postponedRecursors_14_);
lean_inc(v_postponedConstructors_13_);
lean_inc(v_pending_12_);
lean_inc(v_remaining_11_);
lean_inc(v_env_10_);
lean_dec(v___x_9_);
v___x_16_ = lean_box(0);
v_isShared_17_ = v_isSharedCheck_26_;
goto v_resetjp_15_;
}
v_resetjp_15_:
{
lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_18_ = l_Lean_NameSet_erase(v_remaining_11_, v_name_1_);
v___x_19_ = l_Lean_NameSet_insert(v_pending_12_, v_name_1_);
if (v_isShared_17_ == 0)
{
lean_ctor_set(v___x_16_, 2, v___x_19_);
lean_ctor_set(v___x_16_, 1, v___x_18_);
v___x_21_ = v___x_16_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_25_; 
v_reuseFailAlloc_25_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_25_, 0, v_env_10_);
lean_ctor_set(v_reuseFailAlloc_25_, 1, v___x_18_);
lean_ctor_set(v_reuseFailAlloc_25_, 2, v___x_19_);
lean_ctor_set(v_reuseFailAlloc_25_, 3, v_postponedConstructors_13_);
lean_ctor_set(v_reuseFailAlloc_25_, 4, v_postponedRecursors_14_);
v___x_21_ = v_reuseFailAlloc_25_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
lean_object* v___x_22_; lean_object* v___x_23_; lean_object* v___x_24_; 
v___x_22_ = lean_st_ref_put(v___y_2_, v___x_21_);
v___x_23_ = lean_box(v___x_6_);
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg___boxed(lean_object* v_name_27_, lean_object* v___y_28_, lean_object* v___y_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(v_name_27_, v___y_28_);
lean_dec(v___y_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo(lean_object* v_name_31_, lean_object* v___y_32_, lean_object* v___y_33_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(v_name_31_, v___y_33_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___boxed(lean_object* v_name_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo(v_name_36_, v___y_37_, v___y_38_);
lean_dec(v___y_38_);
lean_dec_ref(v___y_37_);
return v_res_40_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg(lean_object* v_ex_41_){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; 
v___x_43_ = l_Lean_Options_empty;
v___x_44_ = l_Lean_Kernel_Exception_toMessageData(v_ex_41_, v___x_43_);
v___x_45_ = l_Lean_MessageData_toString(v___x_44_);
v___x_46_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
v___x_47_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_47_, 0, v___x_46_);
return v___x_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg___boxed(lean_object* v_ex_48_, lean_object* v___y_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg(v_ex_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException(lean_object* v_ex_51_, lean_object* v___y_52_, lean_object* v___y_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg(v_ex_51_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___boxed(lean_object* v_ex_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException(v_ex_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(lean_object* v_d_61_, lean_object* v___y_62_){
_start:
{
lean_object* v___x_64_; lean_object* v_env_65_; size_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_64_ = lean_st_ref_get(v___y_62_);
v_env_65_ = lean_ctor_get(v___x_64_, 0);
lean_inc_ref(v_env_65_);
lean_dec(v___x_64_);
v___x_66_ = ((size_t)0ULL);
v___x_67_ = lean_box(0);
v___x_68_ = lean_add_decl(v_env_65_, v___x_66_, v___x_66_, v_d_61_, v___x_67_);
if (lean_obj_tag(v___x_68_) == 0)
{
lean_object* v_a_69_; lean_object* v___x_70_; 
v_a_69_ = lean_ctor_get(v___x_68_, 0);
lean_inc(v_a_69_);
lean_dec_ref_known(v___x_68_, 1);
v___x_70_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg(v_a_69_);
return v___x_70_;
}
else
{
lean_object* v_a_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_93_; 
v_a_71_ = lean_ctor_get(v___x_68_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_68_);
if (v_isSharedCheck_93_ == 0)
{
v___x_73_ = v___x_68_;
v_isShared_74_ = v_isSharedCheck_93_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_a_71_);
lean_dec(v___x_68_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_93_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
lean_object* v___x_75_; lean_object* v_remaining_76_; lean_object* v_pending_77_; lean_object* v_postponedConstructors_78_; lean_object* v_postponedRecursors_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_91_; 
v___x_75_ = lean_st_ref_take(v___y_62_);
v_remaining_76_ = lean_ctor_get(v___x_75_, 1);
v_pending_77_ = lean_ctor_get(v___x_75_, 2);
v_postponedConstructors_78_ = lean_ctor_get(v___x_75_, 3);
v_postponedRecursors_79_ = lean_ctor_get(v___x_75_, 4);
v_isSharedCheck_91_ = !lean_is_exclusive(v___x_75_);
if (v_isSharedCheck_91_ == 0)
{
lean_object* v_unused_92_; 
v_unused_92_ = lean_ctor_get(v___x_75_, 0);
lean_dec(v_unused_92_);
v___x_81_ = v___x_75_;
v_isShared_82_ = v_isSharedCheck_91_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_postponedRecursors_79_);
lean_inc(v_postponedConstructors_78_);
lean_inc(v_pending_77_);
lean_inc(v_remaining_76_);
lean_dec(v___x_75_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_91_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_83_; lean_object* v___x_85_; 
v___x_83_ = lean_box(0);
if (v_isShared_82_ == 0)
{
lean_ctor_set(v___x_81_, 0, v_a_71_);
v___x_85_ = v___x_81_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_90_; 
v_reuseFailAlloc_90_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_90_, 0, v_a_71_);
lean_ctor_set(v_reuseFailAlloc_90_, 1, v_remaining_76_);
lean_ctor_set(v_reuseFailAlloc_90_, 2, v_pending_77_);
lean_ctor_set(v_reuseFailAlloc_90_, 3, v_postponedConstructors_78_);
lean_ctor_set(v_reuseFailAlloc_90_, 4, v_postponedRecursors_79_);
v___x_85_ = v_reuseFailAlloc_90_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
lean_object* v___x_86_; lean_object* v___x_88_; 
v___x_86_ = lean_st_ref_put(v___y_62_, v___x_85_);
if (v_isShared_74_ == 0)
{
lean_ctor_set_tag(v___x_73_, 0);
lean_ctor_set(v___x_73_, 0, v___x_83_);
v___x_88_ = v___x_73_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v___x_83_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg___boxed(lean_object* v_d_94_, lean_object* v___y_95_, lean_object* v___y_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v_d_94_, v___y_95_);
lean_dec(v___y_95_);
lean_dec(v_d_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl(lean_object* v_d_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v_d_98_, v___y_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___boxed(lean_object* v_d_103_, lean_object* v___y_104_, lean_object* v___y_105_, lean_object* v___y_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl(v_d_103_, v___y_104_, v___y_105_);
lean_dec(v___y_105_);
lean_dec_ref(v___y_104_);
lean_dec(v_d_103_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10(lean_object* v_msg_114_, lean_object* v___y_115_, lean_object* v___y_116_){
_start:
{
lean_object* v___f_118_; lean_object* v___f_119_; lean_object* v___f_120_; lean_object* v___f_121_; lean_object* v___f_122_; lean_object* v___f_123_; lean_object* v___f_124_; lean_object* v___f_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_33422__overap_133_; lean_object* v___x_134_; 
v___f_118_ = ((lean_object*)(l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0));
v___f_119_ = ((lean_object*)(l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__1));
v___f_120_ = ((lean_object*)(l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__2));
v___f_121_ = ((lean_object*)(l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__3));
v___f_122_ = ((lean_object*)(l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__4));
v___f_123_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_123_, 0, v___f_122_);
lean_closure_set(v___f_123_, 1, v___f_121_);
v___f_124_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_124_, 0, v___f_121_);
v___f_125_ = ((lean_object*)(l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__5));
v___x_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_126_, 0, v___f_118_);
lean_ctor_set(v___x_126_, 1, v___f_119_);
v___x_127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_127_, 0, v___x_126_);
lean_ctor_set(v___x_127_, 1, v___f_120_);
lean_ctor_set(v___x_127_, 2, v___f_123_);
lean_ctor_set(v___x_127_, 3, v___f_124_);
lean_ctor_set(v___x_127_, 4, v___f_125_);
v___x_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___f_121_);
v___x_129_ = l_StateRefT_x27_instMonad___redArg(v___x_128_);
v___x_130_ = lean_box(0);
v___x_131_ = l_instInhabitedOfMonad___redArg(v___x_129_, v___x_130_);
v___x_132_ = l_instInhabitedReaderT___redArg(v___x_131_);
v___x_33422__overap_133_ = lean_panic_fn_borrowed(v___x_132_, v_msg_114_);
lean_dec(v___x_132_);
lean_inc(v___y_116_);
lean_inc_ref(v___y_115_);
v___x_134_ = lean_apply_3(v___x_33422__overap_133_, v___y_115_, v___y_116_, lean_box(0));
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___boxed(lean_object* v_msg_135_, lean_object* v___y_136_, lean_object* v___y_137_, lean_object* v___y_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10(v_msg_135_, v___y_136_, v___y_137_);
lean_dec(v___y_137_);
lean_dec_ref(v___y_136_);
return v_res_139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(lean_object* v_name_142_, lean_object* v_____r_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v___x_147_; lean_object* v_env_148_; lean_object* v_remaining_149_; lean_object* v_pending_150_; lean_object* v_postponedConstructors_151_; lean_object* v_postponedRecursors_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_163_; 
v___x_147_ = lean_st_ref_take(v___y_145_);
v_env_148_ = lean_ctor_get(v___x_147_, 0);
v_remaining_149_ = lean_ctor_get(v___x_147_, 1);
v_pending_150_ = lean_ctor_get(v___x_147_, 2);
v_postponedConstructors_151_ = lean_ctor_get(v___x_147_, 3);
v_postponedRecursors_152_ = lean_ctor_get(v___x_147_, 4);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_147_);
if (v_isSharedCheck_163_ == 0)
{
v___x_154_ = v___x_147_;
v_isShared_155_ = v_isSharedCheck_163_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_postponedRecursors_152_);
lean_inc(v_postponedConstructors_151_);
lean_inc(v_pending_150_);
lean_inc(v_remaining_149_);
lean_inc(v_env_148_);
lean_dec(v___x_147_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_163_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_156_; lean_object* v___x_158_; 
v___x_156_ = l_Lean_NameSet_erase(v_pending_150_, v_name_142_);
if (v_isShared_155_ == 0)
{
lean_ctor_set(v___x_154_, 2, v___x_156_);
v___x_158_ = v___x_154_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_env_148_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_remaining_149_);
lean_ctor_set(v_reuseFailAlloc_162_, 2, v___x_156_);
lean_ctor_set(v_reuseFailAlloc_162_, 3, v_postponedConstructors_151_);
lean_ctor_set(v_reuseFailAlloc_162_, 4, v_postponedRecursors_152_);
v___x_158_ = v_reuseFailAlloc_162_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; 
v___x_159_ = lean_st_ref_put(v___y_145_, v___x_158_);
v___x_160_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___closed__0));
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___boxed(lean_object* v_name_164_, lean_object* v_____r_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v_res_169_; 
v_res_169_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_164_, v_____r_165_, v___y_166_, v___y_167_);
lean_dec(v___y_167_);
lean_dec_ref(v___y_166_);
lean_dec(v_name_164_);
return v_res_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1(lean_object* v_val_170_, lean_object* v___f_171_, lean_object* v_____r_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_176_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_176_, 0, v_val_170_);
v___x_177_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_176_, v___y_174_);
lean_dec_ref_known(v___x_176_, 1);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_179_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
lean_inc(v_a_178_);
lean_dec_ref_known(v___x_177_, 1);
lean_inc(v___y_174_);
lean_inc_ref(v___y_173_);
v___x_179_ = lean_apply_4(v___f_171_, v_a_178_, v___y_173_, v___y_174_, lean_box(0));
return v___x_179_;
}
else
{
lean_object* v_a_180_; lean_object* v___x_182_; uint8_t v_isShared_183_; uint8_t v_isSharedCheck_187_; 
lean_dec_ref(v___f_171_);
v_a_180_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_187_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_187_ == 0)
{
v___x_182_ = v___x_177_;
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
else
{
lean_inc(v_a_180_);
lean_dec(v___x_177_);
v___x_182_ = lean_box(0);
v_isShared_183_ = v_isSharedCheck_187_;
goto v_resetjp_181_;
}
v_resetjp_181_:
{
lean_object* v___x_185_; 
if (v_isShared_183_ == 0)
{
v___x_185_ = v___x_182_;
goto v_reusejp_184_;
}
else
{
lean_object* v_reuseFailAlloc_186_; 
v_reuseFailAlloc_186_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_186_, 0, v_a_180_);
v___x_185_ = v_reuseFailAlloc_186_;
goto v_reusejp_184_;
}
v_reusejp_184_:
{
return v___x_185_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1___boxed(lean_object* v_val_188_, lean_object* v___f_189_, lean_object* v_____r_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1(v_val_188_, v___f_189_, v_____r_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(lean_object* v___f_195_, lean_object* v_x_196_, lean_object* v___y_197_, lean_object* v___y_198_){
_start:
{
lean_object* v___x_200_; lean_object* v___x_201_; 
v___x_200_ = lean_box(0);
lean_inc(v___y_198_);
lean_inc_ref(v___y_197_);
v___x_201_ = lean_apply_4(v___f_195_, v___x_200_, v___y_197_, v___y_198_, lean_box(0));
return v___x_201_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2___boxed(lean_object* v___f_202_, lean_object* v_x_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v_res_207_; 
v_res_207_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(v___f_202_, v_x_203_, v___y_204_, v___y_205_);
lean_dec(v___y_205_);
lean_dec_ref(v___y_204_);
lean_dec(v_x_203_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(lean_object* v_a_208_, lean_object* v_x_209_){
_start:
{
if (lean_obj_tag(v_x_209_) == 0)
{
lean_object* v___x_210_; 
v___x_210_ = lean_box(0);
return v___x_210_;
}
else
{
lean_object* v_key_211_; lean_object* v_value_212_; lean_object* v_tail_213_; uint8_t v___x_214_; 
v_key_211_ = lean_ctor_get(v_x_209_, 0);
v_value_212_ = lean_ctor_get(v_x_209_, 1);
v_tail_213_ = lean_ctor_get(v_x_209_, 2);
v___x_214_ = lean_name_eq(v_key_211_, v_a_208_);
if (v___x_214_ == 0)
{
v_x_209_ = v_tail_213_;
goto _start;
}
else
{
lean_object* v___x_216_; 
lean_inc(v_value_212_);
v___x_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_216_, 0, v_value_212_);
return v___x_216_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg___boxed(lean_object* v_a_217_, lean_object* v_x_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(v_a_217_, v_x_218_);
lean_dec(v_x_218_);
lean_dec(v_a_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(lean_object* v_m_220_, lean_object* v_a_221_){
_start:
{
lean_object* v_buckets_222_; lean_object* v___x_223_; uint64_t v___y_225_; 
v_buckets_222_ = lean_ctor_get(v_m_220_, 1);
v___x_223_ = lean_array_get_size(v_buckets_222_);
if (lean_obj_tag(v_a_221_) == 0)
{
uint64_t v___x_239_; 
v___x_239_ = 1723ULL;
v___y_225_ = v___x_239_;
goto v___jp_224_;
}
else
{
uint64_t v_hash_240_; 
v_hash_240_ = lean_ctor_get_uint64(v_a_221_, sizeof(void*)*2);
v___y_225_ = v_hash_240_;
goto v___jp_224_;
}
v___jp_224_:
{
uint64_t v___x_226_; uint64_t v___x_227_; uint64_t v_fold_228_; uint64_t v___x_229_; uint64_t v___x_230_; uint64_t v___x_231_; size_t v___x_232_; size_t v___x_233_; size_t v___x_234_; size_t v___x_235_; size_t v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_226_ = 32ULL;
v___x_227_ = lean_uint64_shift_right(v___y_225_, v___x_226_);
v_fold_228_ = lean_uint64_xor(v___y_225_, v___x_227_);
v___x_229_ = 16ULL;
v___x_230_ = lean_uint64_shift_right(v_fold_228_, v___x_229_);
v___x_231_ = lean_uint64_xor(v_fold_228_, v___x_230_);
v___x_232_ = lean_uint64_to_usize(v___x_231_);
v___x_233_ = lean_usize_of_nat(v___x_223_);
v___x_234_ = ((size_t)1ULL);
v___x_235_ = lean_usize_sub(v___x_233_, v___x_234_);
v___x_236_ = lean_usize_land(v___x_232_, v___x_235_);
v___x_237_ = lean_array_uget_borrowed(v_buckets_222_, v___x_236_);
v___x_238_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(v_a_221_, v___x_237_);
return v___x_238_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg___boxed(lean_object* v_m_241_, lean_object* v_a_242_){
_start:
{
lean_object* v_res_243_; 
v_res_243_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v_m_241_, v_a_242_);
lean_dec(v_a_242_);
lean_dec_ref(v_m_241_);
return v_res_243_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(lean_object* v_x_244_, lean_object* v_x_245_){
_start:
{
if (lean_obj_tag(v_x_244_) == 0)
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_246_; 
v___x_246_ = 1;
return v___x_246_;
}
else
{
uint8_t v___x_247_; 
v___x_247_ = 0;
return v___x_247_;
}
}
else
{
if (lean_obj_tag(v_x_245_) == 0)
{
uint8_t v___x_248_; 
v___x_248_ = 0;
return v___x_248_;
}
else
{
lean_object* v_head_249_; lean_object* v_tail_250_; lean_object* v_head_251_; lean_object* v_tail_252_; uint8_t v___x_253_; 
v_head_249_ = lean_ctor_get(v_x_244_, 0);
v_tail_250_ = lean_ctor_get(v_x_244_, 1);
v_head_251_ = lean_ctor_get(v_x_245_, 0);
v_tail_252_ = lean_ctor_get(v_x_245_, 1);
v___x_253_ = lean_name_eq(v_head_249_, v_head_251_);
if (v___x_253_ == 0)
{
return v___x_253_;
}
else
{
v_x_244_ = v_tail_250_;
v_x_245_ = v_tail_252_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4___boxed(lean_object* v_x_255_, lean_object* v_x_256_){
_start:
{
uint8_t v_res_257_; lean_object* v_r_258_; 
v_res_257_ = l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(v_x_255_, v_x_256_);
lean_dec(v_x_256_);
lean_dec(v_x_255_);
v_r_258_ = lean_box(v_res_257_);
return v_r_258_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(lean_object* v_as_x27_259_, lean_object* v_b_260_, lean_object* v___y_261_){
_start:
{
if (lean_obj_tag(v_as_x27_259_) == 0)
{
lean_object* v___x_263_; 
v___x_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_263_, 0, v_b_260_);
return v___x_263_;
}
else
{
lean_object* v_head_264_; lean_object* v_tail_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v_env_268_; lean_object* v_remaining_269_; lean_object* v_pending_270_; lean_object* v_postponedConstructors_271_; lean_object* v_postponedRecursors_272_; lean_object* v___x_274_; uint8_t v_isShared_275_; uint8_t v_isSharedCheck_284_; 
v_head_264_ = lean_ctor_get(v_as_x27_259_, 0);
v_tail_265_ = lean_ctor_get(v_as_x27_259_, 1);
v___x_266_ = lean_box(0);
v___x_267_ = lean_st_ref_take(v___y_261_);
v_env_268_ = lean_ctor_get(v___x_267_, 0);
v_remaining_269_ = lean_ctor_get(v___x_267_, 1);
v_pending_270_ = lean_ctor_get(v___x_267_, 2);
v_postponedConstructors_271_ = lean_ctor_get(v___x_267_, 3);
v_postponedRecursors_272_ = lean_ctor_get(v___x_267_, 4);
v_isSharedCheck_284_ = !lean_is_exclusive(v___x_267_);
if (v_isSharedCheck_284_ == 0)
{
v___x_274_ = v___x_267_;
v_isShared_275_ = v_isSharedCheck_284_;
goto v_resetjp_273_;
}
else
{
lean_inc(v_postponedRecursors_272_);
lean_inc(v_postponedConstructors_271_);
lean_inc(v_pending_270_);
lean_inc(v_remaining_269_);
lean_inc(v_env_268_);
lean_dec(v___x_267_);
v___x_274_ = lean_box(0);
v_isShared_275_ = v_isSharedCheck_284_;
goto v_resetjp_273_;
}
v_resetjp_273_:
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_280_; 
v___x_276_ = l_Lean_ConstantInfo_name(v_head_264_);
v___x_277_ = l_Lean_NameSet_erase(v_remaining_269_, v___x_276_);
v___x_278_ = l_Lean_NameSet_erase(v_pending_270_, v___x_276_);
lean_dec(v___x_276_);
if (v_isShared_275_ == 0)
{
lean_ctor_set(v___x_274_, 2, v___x_278_);
lean_ctor_set(v___x_274_, 1, v___x_277_);
v___x_280_ = v___x_274_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v_env_268_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v___x_277_);
lean_ctor_set(v_reuseFailAlloc_283_, 2, v___x_278_);
lean_ctor_set(v_reuseFailAlloc_283_, 3, v_postponedConstructors_271_);
lean_ctor_set(v_reuseFailAlloc_283_, 4, v_postponedRecursors_272_);
v___x_280_ = v_reuseFailAlloc_283_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v___x_281_; 
v___x_281_ = lean_st_ref_put(v___y_261_, v___x_280_);
v_as_x27_259_ = v_tail_265_;
v_b_260_ = v___x_266_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg___boxed(lean_object* v_as_x27_285_, lean_object* v_b_286_, lean_object* v___y_287_, lean_object* v___y_288_){
_start:
{
lean_object* v_res_289_; 
v_res_289_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(v_as_x27_285_, v_b_286_, v___y_287_);
lean_dec(v___y_287_);
lean_dec(v_as_x27_285_);
return v_res_289_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1_spec__4(lean_object* v_msg_290_){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = l_Lean_instInhabitedConstantInfo_default;
v___x_292_ = lean_panic_fn_borrowed(v___x_291_, v_msg_290_);
return v___x_292_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; 
v___x_296_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__2));
v___x_297_ = lean_unsigned_to_nat(11u);
v___x_298_ = lean_unsigned_to_nat(163u);
v___x_299_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__1));
v___x_300_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__0));
v___x_301_ = l_mkPanicMessageWithDecl(v___x_300_, v___x_299_, v___x_298_, v___x_297_, v___x_296_);
return v___x_301_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1(lean_object* v_a_302_, lean_object* v_x_303_){
_start:
{
if (lean_obj_tag(v_x_303_) == 0)
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3);
v___x_305_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1_spec__4(v___x_304_);
return v___x_305_;
}
else
{
lean_object* v_key_306_; lean_object* v_value_307_; lean_object* v_tail_308_; uint8_t v___x_309_; 
v_key_306_ = lean_ctor_get(v_x_303_, 0);
v_value_307_ = lean_ctor_get(v_x_303_, 1);
v_tail_308_ = lean_ctor_get(v_x_303_, 2);
v___x_309_ = lean_name_eq(v_key_306_, v_a_302_);
if (v___x_309_ == 0)
{
v_x_303_ = v_tail_308_;
goto _start;
}
else
{
lean_inc(v_value_307_);
return v_value_307_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___boxed(lean_object* v_a_311_, lean_object* v_x_312_){
_start:
{
lean_object* v_res_313_; 
v_res_313_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1(v_a_311_, v_x_312_);
lean_dec(v_x_312_);
lean_dec(v_a_311_);
return v_res_313_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1(lean_object* v_m_314_, lean_object* v_a_315_){
_start:
{
lean_object* v_buckets_316_; lean_object* v___x_317_; uint64_t v___y_319_; 
v_buckets_316_ = lean_ctor_get(v_m_314_, 1);
v___x_317_ = lean_array_get_size(v_buckets_316_);
if (lean_obj_tag(v_a_315_) == 0)
{
uint64_t v___x_333_; 
v___x_333_ = 1723ULL;
v___y_319_ = v___x_333_;
goto v___jp_318_;
}
else
{
uint64_t v_hash_334_; 
v_hash_334_ = lean_ctor_get_uint64(v_a_315_, sizeof(void*)*2);
v___y_319_ = v_hash_334_;
goto v___jp_318_;
}
v___jp_318_:
{
uint64_t v___x_320_; uint64_t v___x_321_; uint64_t v_fold_322_; uint64_t v___x_323_; uint64_t v___x_324_; uint64_t v___x_325_; size_t v___x_326_; size_t v___x_327_; size_t v___x_328_; size_t v___x_329_; size_t v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; 
v___x_320_ = 32ULL;
v___x_321_ = lean_uint64_shift_right(v___y_319_, v___x_320_);
v_fold_322_ = lean_uint64_xor(v___y_319_, v___x_321_);
v___x_323_ = 16ULL;
v___x_324_ = lean_uint64_shift_right(v_fold_322_, v___x_323_);
v___x_325_ = lean_uint64_xor(v_fold_322_, v___x_324_);
v___x_326_ = lean_uint64_to_usize(v___x_325_);
v___x_327_ = lean_usize_of_nat(v___x_317_);
v___x_328_ = ((size_t)1ULL);
v___x_329_ = lean_usize_sub(v___x_327_, v___x_328_);
v___x_330_ = lean_usize_land(v___x_326_, v___x_329_);
v___x_331_ = lean_array_uget_borrowed(v_buckets_316_, v___x_330_);
v___x_332_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1(v_a_315_, v___x_331_);
return v___x_332_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1___boxed(lean_object* v_m_335_, lean_object* v_a_336_){
_start:
{
lean_object* v_res_337_; 
v_res_337_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1(v_m_335_, v_a_336_);
lean_dec(v_a_336_);
lean_dec_ref(v_m_335_);
return v_res_337_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(lean_object* v_x_338_, lean_object* v_x_339_, lean_object* v___y_340_){
_start:
{
if (lean_obj_tag(v_x_338_) == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; 
v___x_342_ = l_List_reverse___redArg(v_x_339_);
v___x_343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_343_, 0, v___x_342_);
return v___x_343_;
}
else
{
lean_object* v_head_344_; lean_object* v_tail_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_354_; 
v_head_344_ = lean_ctor_get(v_x_338_, 0);
v_tail_345_ = lean_ctor_get(v_x_338_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v_x_338_);
if (v_isSharedCheck_354_ == 0)
{
v___x_347_ = v_x_338_;
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_tail_345_);
lean_inc(v_head_344_);
lean_dec(v_x_338_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1(v___y_340_, v_head_344_);
lean_dec(v_head_344_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v_x_339_);
lean_ctor_set(v___x_347_, 0, v___x_349_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_x_339_);
v___x_351_ = v_reuseFailAlloc_353_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
v_x_338_ = v_tail_345_;
v_x_339_ = v___x_351_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg___boxed(lean_object* v_x_355_, lean_object* v_x_356_, lean_object* v___y_357_, lean_object* v___y_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_x_355_, v_x_356_, v___y_357_);
lean_dec_ref(v___y_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7(lean_object* v_x_360_, lean_object* v_x_361_, lean_object* v___y_362_, lean_object* v___y_363_){
_start:
{
if (lean_obj_tag(v_x_360_) == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; 
v___x_365_ = l_List_reverse___redArg(v_x_361_);
v___x_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_366_, 0, v___x_365_);
return v___x_366_;
}
else
{
lean_object* v_head_367_; lean_object* v_tail_368_; lean_object* v___x_370_; uint8_t v_isShared_371_; uint8_t v_isSharedCheck_382_; 
v_head_367_ = lean_ctor_get(v_x_360_, 0);
v_tail_368_ = lean_ctor_get(v_x_360_, 1);
v_isSharedCheck_382_ = !lean_is_exclusive(v_x_360_);
if (v_isSharedCheck_382_ == 0)
{
v___x_370_ = v_x_360_;
v_isShared_371_ = v_isSharedCheck_382_;
goto v_resetjp_369_;
}
else
{
lean_inc(v_tail_368_);
lean_inc(v_head_367_);
lean_dec(v_x_360_);
v___x_370_ = lean_box(0);
v_isShared_371_ = v_isSharedCheck_382_;
goto v_resetjp_369_;
}
v_resetjp_369_:
{
lean_object* v___x_372_; lean_object* v_ctors_373_; lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_a_376_; lean_object* v___x_377_; lean_object* v___x_379_; 
v___x_372_ = l_Lean_ConstantInfo_inductiveVal_x21(v_head_367_);
v_ctors_373_ = lean_ctor_get(v___x_372_, 4);
lean_inc(v_ctors_373_);
lean_dec_ref(v___x_372_);
v___x_374_ = lean_box(0);
v___x_375_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_ctors_373_, v___x_374_, v___y_362_);
v_a_376_ = lean_ctor_get(v___x_375_, 0);
lean_inc(v_a_376_);
lean_dec_ref(v___x_375_);
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v_head_367_);
lean_ctor_set(v___x_377_, 1, v_a_376_);
if (v_isShared_371_ == 0)
{
lean_ctor_set(v___x_370_, 1, v_x_361_);
lean_ctor_set(v___x_370_, 0, v___x_377_);
v___x_379_ = v___x_370_;
goto v_reusejp_378_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_377_);
lean_ctor_set(v_reuseFailAlloc_381_, 1, v_x_361_);
v___x_379_ = v_reuseFailAlloc_381_;
goto v_reusejp_378_;
}
v_reusejp_378_:
{
v_x_360_ = v_tail_368_;
v_x_361_ = v___x_379_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7___boxed(lean_object* v_x_383_, lean_object* v_x_384_, lean_object* v___y_385_, lean_object* v___y_386_, lean_object* v___y_387_){
_start:
{
lean_object* v_res_388_; 
v_res_388_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7(v_x_383_, v_x_384_, v___y_385_, v___y_386_);
lean_dec(v___y_386_);
lean_dec_ref(v___y_385_);
return v_res_388_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__0(lean_object* v_a_389_, lean_object* v_a_390_){
_start:
{
if (lean_obj_tag(v_a_389_) == 0)
{
lean_object* v___x_391_; 
v___x_391_ = l_List_reverse___redArg(v_a_390_);
return v___x_391_;
}
else
{
lean_object* v_head_392_; lean_object* v_tail_393_; lean_object* v___x_395_; uint8_t v_isShared_396_; uint8_t v_isSharedCheck_404_; 
v_head_392_ = lean_ctor_get(v_a_389_, 0);
v_tail_393_ = lean_ctor_get(v_a_389_, 1);
v_isSharedCheck_404_ = !lean_is_exclusive(v_a_389_);
if (v_isSharedCheck_404_ == 0)
{
v___x_395_ = v_a_389_;
v_isShared_396_ = v_isSharedCheck_404_;
goto v_resetjp_394_;
}
else
{
lean_inc(v_tail_393_);
lean_inc(v_head_392_);
lean_dec(v_a_389_);
v___x_395_ = lean_box(0);
v_isShared_396_ = v_isSharedCheck_404_;
goto v_resetjp_394_;
}
v_resetjp_394_:
{
lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_401_; 
v___x_397_ = l_Lean_ConstantInfo_name(v_head_392_);
v___x_398_ = l_Lean_ConstantInfo_type(v_head_392_);
lean_dec(v_head_392_);
v___x_399_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_397_);
lean_ctor_set(v___x_399_, 1, v___x_398_);
if (v_isShared_396_ == 0)
{
lean_ctor_set(v___x_395_, 1, v_a_390_);
lean_ctor_set(v___x_395_, 0, v___x_399_);
v___x_401_ = v___x_395_;
goto v_reusejp_400_;
}
else
{
lean_object* v_reuseFailAlloc_403_; 
v_reuseFailAlloc_403_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_403_, 0, v___x_399_);
lean_ctor_set(v_reuseFailAlloc_403_, 1, v_a_390_);
v___x_401_ = v_reuseFailAlloc_403_;
goto v_reusejp_400_;
}
v_reusejp_400_:
{
v_a_389_ = v_tail_393_;
v_a_390_ = v___x_401_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__9(lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
if (lean_obj_tag(v_a_405_) == 0)
{
lean_object* v___x_407_; 
v___x_407_ = l_List_reverse___redArg(v_a_406_);
return v___x_407_;
}
else
{
lean_object* v_head_408_; lean_object* v_tail_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_424_; 
v_head_408_ = lean_ctor_get(v_a_405_, 0);
v_tail_409_ = lean_ctor_get(v_a_405_, 1);
v_isSharedCheck_424_ = !lean_is_exclusive(v_a_405_);
if (v_isSharedCheck_424_ == 0)
{
v___x_411_ = v_a_405_;
v_isShared_412_ = v_isSharedCheck_424_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_tail_409_);
lean_inc(v_head_408_);
lean_dec(v_a_405_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_424_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_fst_413_; lean_object* v_snd_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_421_; 
v_fst_413_ = lean_ctor_get(v_head_408_, 0);
lean_inc(v_fst_413_);
v_snd_414_ = lean_ctor_get(v_head_408_, 1);
lean_inc(v_snd_414_);
lean_dec(v_head_408_);
v___x_415_ = l_Lean_ConstantInfo_name(v_fst_413_);
v___x_416_ = l_Lean_ConstantInfo_type(v_fst_413_);
lean_dec(v_fst_413_);
v___x_417_ = lean_box(0);
v___x_418_ = l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__0(v_snd_414_, v___x_417_);
v___x_419_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_419_, 0, v___x_415_);
lean_ctor_set(v___x_419_, 1, v___x_416_);
lean_ctor_set(v___x_419_, 2, v___x_418_);
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 1, v_a_406_);
lean_ctor_set(v___x_411_, 0, v___x_419_);
v___x_421_ = v___x_411_;
goto v_reusejp_420_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_419_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_a_406_);
v___x_421_ = v_reuseFailAlloc_423_;
goto v_reusejp_420_;
}
v_reusejp_420_:
{
v_a_405_ = v_tail_409_;
v_a_406_ = v___x_421_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(lean_object* v_as_x27_430_, lean_object* v_b_431_, lean_object* v___y_432_, lean_object* v___y_433_){
_start:
{
if (lean_obj_tag(v_as_x27_430_) == 0)
{
lean_object* v___x_435_; 
v___x_435_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_435_, 0, v_b_431_);
return v___x_435_;
}
else
{
lean_object* v_head_436_; lean_object* v_tail_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_head_436_ = lean_ctor_get(v_as_x27_430_, 0);
v_tail_437_ = lean_ctor_get(v_as_x27_430_, 1);
v___x_438_ = lean_box(0);
lean_inc(v_head_436_);
v___x_439_ = l_Lean_ConstantInfo_getUsedConstantsAsSet(v_head_436_);
v___x_440_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(v___x_439_, v___y_432_, v___y_433_);
if (lean_obj_tag(v___x_440_) == 0)
{
lean_dec_ref_known(v___x_440_, 1);
v_as_x27_430_ = v_tail_437_;
v_b_431_ = v___x_438_;
goto _start;
}
else
{
return v___x_440_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(lean_object* v_as_x27_442_, lean_object* v_b_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
if (lean_obj_tag(v_as_x27_442_) == 0)
{
lean_object* v___x_447_; 
v___x_447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_447_, 0, v_b_443_);
return v___x_447_;
}
else
{
lean_object* v_head_448_; lean_object* v_tail_449_; lean_object* v_snd_450_; lean_object* v___x_451_; lean_object* v___x_452_; 
v_head_448_ = lean_ctor_get(v_as_x27_442_, 0);
v_tail_449_ = lean_ctor_get(v_as_x27_442_, 1);
v_snd_450_ = lean_ctor_get(v_head_448_, 1);
v___x_451_ = lean_box(0);
v___x_452_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(v_snd_450_, v___x_451_, v___y_444_, v___y_445_);
if (lean_obj_tag(v___x_452_) == 0)
{
lean_dec_ref_known(v___x_452_, 1);
v_as_x27_442_ = v_tail_449_;
v_b_443_ = v___x_451_;
goto _start;
}
else
{
return v___x_452_;
}
}
}
}
static lean_object* _init_l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7(void){
_start:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; 
v___x_457_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__6));
v___x_458_ = lean_unsigned_to_nat(50u);
v___x_459_ = lean_unsigned_to_nat(76u);
v___x_460_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__5));
v___x_461_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__4));
v___x_462_ = l_mkPanicMessageWithDecl(v___x_461_, v___x_460_, v___x_459_, v___x_458_, v___x_457_);
return v___x_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(lean_object* v_name_463_, lean_object* v___y_464_, lean_object* v___y_465_){
_start:
{
lean_object* v___f_467_; lean_object* v___x_468_; 
lean_inc_n(v_name_463_, 2);
v___f_467_ = lean_alloc_closure((void*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___boxed), 5, 1);
lean_closure_set(v___f_467_, 0, v_name_463_);
v___x_468_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(v_name_463_, v___y_465_);
if (lean_obj_tag(v___x_468_) == 0)
{
lean_object* v_a_469_; lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_668_; 
v_a_469_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_668_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_668_ == 0)
{
v___x_471_ = v___x_468_;
v_isShared_472_ = v_isSharedCheck_668_;
goto v_resetjp_470_;
}
else
{
lean_inc(v_a_469_);
lean_dec(v___x_468_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_668_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
uint8_t v___x_473_; 
v___x_473_ = lean_unbox(v_a_469_);
lean_dec(v_a_469_);
if (v___x_473_ == 0)
{
lean_object* v___x_474_; lean_object* v___x_476_; 
lean_dec_ref(v___f_467_);
lean_dec(v_name_463_);
v___x_474_ = lean_box(0);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_474_);
v___x_476_ = v___x_471_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v___x_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
else
{
lean_object* v___x_478_; 
v___x_478_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v___y_464_, v_name_463_);
if (lean_obj_tag(v___x_478_) == 1)
{
lean_object* v_val_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_665_; 
v_val_479_ = lean_ctor_get(v___x_478_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_478_);
if (v_isSharedCheck_665_ == 0)
{
v___x_481_ = v___x_478_;
v_isShared_482_ = v_isSharedCheck_665_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_val_479_);
lean_dec(v___x_478_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_665_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_483_; lean_object* v___x_484_; 
lean_inc(v_val_479_);
v___x_483_ = l_Lean_ConstantInfo_getUsedConstantsAsSet(v_val_479_);
v___x_484_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(v___x_483_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_484_) == 0)
{
lean_object* v___x_486_; uint8_t v_isShared_487_; uint8_t v_isSharedCheck_663_; 
v_isSharedCheck_663_ = !lean_is_exclusive(v___x_484_);
if (v_isSharedCheck_663_ == 0)
{
lean_object* v_unused_664_; 
v_unused_664_ = lean_ctor_get(v___x_484_, 0);
lean_dec(v_unused_664_);
v___x_486_ = v___x_484_;
v_isShared_487_ = v_isSharedCheck_663_;
goto v_resetjp_485_;
}
else
{
lean_dec(v___x_484_);
v___x_486_ = lean_box(0);
v_isShared_487_ = v_isSharedCheck_663_;
goto v_resetjp_485_;
}
v_resetjp_485_:
{
lean_object* v___x_488_; lean_object* v_pending_489_; uint8_t v___x_490_; lean_object* v_a_492_; lean_object* v___y_507_; 
v___x_488_ = lean_st_ref_get(v___y_465_);
v_pending_489_ = lean_ctor_get(v___x_488_, 2);
lean_inc(v_pending_489_);
lean_dec(v___x_488_);
v___x_490_ = l_Lean_NameSet_contains(v_pending_489_, v_name_463_);
lean_dec(v_pending_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_518_; lean_object* v___x_520_; 
lean_del_object(v___x_486_);
lean_del_object(v___x_481_);
lean_dec(v_val_479_);
lean_dec_ref(v___f_467_);
lean_dec(v_name_463_);
v___x_518_ = lean_box(0);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_518_);
v___x_520_ = v___x_471_;
goto v_reusejp_519_;
}
else
{
lean_object* v_reuseFailAlloc_521_; 
v_reuseFailAlloc_521_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_521_, 0, v___x_518_);
v___x_520_ = v_reuseFailAlloc_521_;
goto v_reusejp_519_;
}
v_reusejp_519_:
{
return v___x_520_;
}
}
else
{
switch(lean_obj_tag(v_val_479_))
{
case 0:
{
lean_object* v_val_522_; lean_object* v___x_524_; uint8_t v_isShared_525_; uint8_t v_isSharedCheck_533_; 
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v_val_522_ = lean_ctor_get(v_val_479_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v_val_479_);
if (v_isSharedCheck_533_ == 0)
{
v___x_524_ = v_val_479_;
v_isShared_525_ = v_isSharedCheck_533_;
goto v_resetjp_523_;
}
else
{
lean_inc(v_val_522_);
lean_dec(v_val_479_);
v___x_524_ = lean_box(0);
v_isShared_525_ = v_isSharedCheck_533_;
goto v_resetjp_523_;
}
v_resetjp_523_:
{
lean_object* v___x_527_; 
if (v_isShared_525_ == 0)
{
v___x_527_ = v___x_524_;
goto v_reusejp_526_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_val_522_);
v___x_527_ = v_reuseFailAlloc_532_;
goto v_reusejp_526_;
}
v_reusejp_526_:
{
lean_object* v___x_528_; 
v___x_528_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_527_, v___y_465_);
lean_dec_ref(v___x_527_);
if (lean_obj_tag(v___x_528_) == 0)
{
lean_object* v_a_529_; lean_object* v___x_530_; 
v_a_529_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_529_);
lean_dec_ref_known(v___x_528_, 1);
v___x_530_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_463_, v_a_529_, v___y_464_, v___y_465_);
v___y_507_ = v___x_530_;
goto v___jp_506_;
}
else
{
lean_object* v_a_531_; 
v_a_531_ = lean_ctor_get(v___x_528_, 0);
lean_inc(v_a_531_);
lean_dec_ref_known(v___x_528_, 1);
v_a_492_ = v_a_531_;
goto v___jp_491_;
}
}
}
}
case 1:
{
lean_object* v_val_534_; lean_object* v___x_536_; uint8_t v_isShared_537_; uint8_t v_isSharedCheck_545_; 
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v_val_534_ = lean_ctor_get(v_val_479_, 0);
v_isSharedCheck_545_ = !lean_is_exclusive(v_val_479_);
if (v_isSharedCheck_545_ == 0)
{
v___x_536_ = v_val_479_;
v_isShared_537_ = v_isSharedCheck_545_;
goto v_resetjp_535_;
}
else
{
lean_inc(v_val_534_);
lean_dec(v_val_479_);
v___x_536_ = lean_box(0);
v_isShared_537_ = v_isSharedCheck_545_;
goto v_resetjp_535_;
}
v_resetjp_535_:
{
lean_object* v___x_539_; 
if (v_isShared_537_ == 0)
{
v___x_539_ = v___x_536_;
goto v_reusejp_538_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_val_534_);
v___x_539_ = v_reuseFailAlloc_544_;
goto v_reusejp_538_;
}
v_reusejp_538_:
{
lean_object* v___x_540_; 
v___x_540_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_539_, v___y_465_);
lean_dec_ref(v___x_539_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_542_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_541_);
lean_dec_ref_known(v___x_540_, 1);
v___x_542_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_463_, v_a_541_, v___y_464_, v___y_465_);
v___y_507_ = v___x_542_;
goto v___jp_506_;
}
else
{
lean_object* v_a_543_; 
v_a_543_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_543_);
lean_dec_ref_known(v___x_540_, 1);
v_a_492_ = v_a_543_;
goto v___jp_491_;
}
}
}
}
case 2:
{
lean_object* v_val_546_; lean_object* v___f_547_; lean_object* v___x_548_; lean_object* v_env_552_; lean_object* v___x_553_; lean_object* v___x_554_; 
v_val_546_ = lean_ctor_get(v_val_479_, 0);
lean_inc_ref_n(v_val_546_, 2);
lean_inc_ref(v___f_467_);
v___f_547_ = lean_alloc_closure((void*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1___boxed), 6, 2);
lean_closure_set(v___f_547_, 0, v_val_546_);
lean_closure_set(v___f_547_, 1, v___f_467_);
v___x_548_ = lean_st_ref_get(v___y_465_);
v_env_552_ = lean_ctor_get(v___x_548_, 0);
lean_inc_ref(v_env_552_);
lean_dec(v___x_548_);
v___x_553_ = l_Lean_ConstantInfo_name(v_val_479_);
lean_dec_ref_known(v_val_479_, 1);
v___x_554_ = lean_environment_find(v_env_552_, v___x_553_);
if (lean_obj_tag(v___x_554_) == 1)
{
lean_object* v_val_555_; 
v_val_555_ = lean_ctor_get(v___x_554_, 0);
lean_inc(v_val_555_);
if (lean_obj_tag(v_val_555_) == 2)
{
lean_object* v_toConstantVal_556_; lean_object* v_val_557_; lean_object* v_toConstantVal_558_; lean_object* v_all_559_; lean_object* v_name_560_; lean_object* v_levelParams_561_; lean_object* v_type_562_; lean_object* v_all_563_; lean_object* v_name_564_; lean_object* v_levelParams_565_; lean_object* v_type_566_; uint8_t v___y_568_; uint8_t v___x_575_; 
lean_dec_ref_known(v___x_554_, 1);
lean_dec_ref(v___f_547_);
v_toConstantVal_556_ = lean_ctor_get(v_val_546_, 0);
v_val_557_ = lean_ctor_get(v_val_555_, 0);
lean_inc_ref(v_val_557_);
lean_dec_ref_known(v_val_555_, 1);
v_toConstantVal_558_ = lean_ctor_get(v_val_557_, 0);
lean_inc_ref(v_toConstantVal_558_);
v_all_559_ = lean_ctor_get(v_val_546_, 2);
v_name_560_ = lean_ctor_get(v_toConstantVal_556_, 0);
v_levelParams_561_ = lean_ctor_get(v_toConstantVal_556_, 1);
v_type_562_ = lean_ctor_get(v_toConstantVal_556_, 2);
v_all_563_ = lean_ctor_get(v_val_557_, 2);
lean_inc(v_all_563_);
lean_dec_ref(v_val_557_);
v_name_564_ = lean_ctor_get(v_toConstantVal_558_, 0);
lean_inc(v_name_564_);
v_levelParams_565_ = lean_ctor_get(v_toConstantVal_558_, 1);
lean_inc(v_levelParams_565_);
v_type_566_ = lean_ctor_get(v_toConstantVal_558_, 2);
lean_inc_ref(v_type_566_);
lean_dec_ref(v_toConstantVal_558_);
v___x_575_ = lean_name_eq(v_name_560_, v_name_564_);
lean_dec(v_name_564_);
if (v___x_575_ == 0)
{
lean_dec_ref(v_type_566_);
v___y_568_ = v___x_575_;
goto v___jp_567_;
}
else
{
uint8_t v___x_576_; 
v___x_576_ = lean_expr_eqv(v_type_562_, v_type_566_);
lean_dec_ref(v_type_566_);
v___y_568_ = v___x_576_;
goto v___jp_567_;
}
v___jp_567_:
{
if (v___y_568_ == 0)
{
lean_dec(v_levelParams_565_);
lean_dec(v_all_563_);
lean_del_object(v___x_471_);
goto v___jp_549_;
}
else
{
uint8_t v___x_569_; 
v___x_569_ = l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(v_levelParams_561_, v_levelParams_565_);
lean_dec(v_levelParams_565_);
if (v___x_569_ == 0)
{
lean_dec(v_all_563_);
lean_del_object(v___x_471_);
goto v___jp_549_;
}
else
{
uint8_t v___x_570_; 
v___x_570_ = l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(v_all_559_, v_all_563_);
lean_dec(v_all_563_);
if (v___x_570_ == 0)
{
lean_del_object(v___x_471_);
goto v___jp_549_;
}
else
{
lean_object* v___x_571_; lean_object* v___x_573_; 
lean_dec_ref(v_val_546_);
lean_del_object(v___x_486_);
lean_del_object(v___x_481_);
lean_dec_ref(v___f_467_);
lean_dec(v_name_463_);
v___x_571_ = lean_box(0);
if (v_isShared_472_ == 0)
{
lean_ctor_set(v___x_471_, 0, v___x_571_);
v___x_573_ = v___x_471_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v___x_571_);
v___x_573_ = v_reuseFailAlloc_574_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
return v___x_573_;
}
}
}
}
}
}
else
{
lean_object* v___x_577_; 
lean_dec(v_val_555_);
lean_dec_ref(v_val_546_);
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v___x_577_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(v___f_547_, v___x_554_, v___y_464_, v___y_465_);
lean_dec_ref_known(v___x_554_, 1);
v___y_507_ = v___x_577_;
goto v___jp_506_;
}
}
else
{
lean_object* v___x_578_; 
lean_dec_ref(v_val_546_);
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v___x_578_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(v___f_547_, v___x_554_, v___y_464_, v___y_465_);
lean_dec(v___x_554_);
v___y_507_ = v___x_578_;
goto v___jp_506_;
}
v___jp_549_:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = lean_box(0);
v___x_551_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1(v_val_546_, v___f_467_, v___x_550_, v___y_464_, v___y_465_);
v___y_507_ = v___x_551_;
goto v___jp_506_;
}
}
case 3:
{
lean_object* v_val_579_; lean_object* v___x_581_; uint8_t v_isShared_582_; uint8_t v_isSharedCheck_590_; 
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v_val_579_ = lean_ctor_get(v_val_479_, 0);
v_isSharedCheck_590_ = !lean_is_exclusive(v_val_479_);
if (v_isSharedCheck_590_ == 0)
{
v___x_581_ = v_val_479_;
v_isShared_582_ = v_isSharedCheck_590_;
goto v_resetjp_580_;
}
else
{
lean_inc(v_val_579_);
lean_dec(v_val_479_);
v___x_581_ = lean_box(0);
v_isShared_582_ = v_isSharedCheck_590_;
goto v_resetjp_580_;
}
v_resetjp_580_:
{
lean_object* v___x_584_; 
if (v_isShared_582_ == 0)
{
v___x_584_ = v___x_581_;
goto v_reusejp_583_;
}
else
{
lean_object* v_reuseFailAlloc_589_; 
v_reuseFailAlloc_589_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_589_, 0, v_val_579_);
v___x_584_ = v_reuseFailAlloc_589_;
goto v_reusejp_583_;
}
v_reusejp_583_:
{
lean_object* v___x_585_; 
v___x_585_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_584_, v___y_465_);
lean_dec_ref(v___x_584_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_587_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_463_, v_a_586_, v___y_464_, v___y_465_);
v___y_507_ = v___x_587_;
goto v___jp_506_;
}
else
{
lean_object* v_a_588_; 
v_a_588_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_588_);
lean_dec_ref_known(v___x_585_, 1);
v_a_492_ = v_a_588_;
goto v___jp_491_;
}
}
}
}
case 4:
{
lean_object* v___x_591_; lean_object* v___x_592_; 
lean_dec_ref_known(v_val_479_, 1);
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v___x_591_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__3));
v___x_592_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(v___x_591_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_592_) == 0)
{
lean_object* v___x_593_; lean_object* v___x_594_; 
lean_dec_ref_known(v___x_592_, 1);
v___x_593_ = lean_box(4);
v___x_594_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_593_, v___y_465_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_596_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_594_, 1);
v___x_596_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_463_, v_a_595_, v___y_464_, v___y_465_);
v___y_507_ = v___x_596_;
goto v___jp_506_;
}
else
{
lean_object* v_a_597_; 
v_a_597_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_597_);
lean_dec_ref_known(v___x_594_, 1);
v_a_492_ = v_a_597_;
goto v___jp_491_;
}
}
else
{
lean_object* v_a_598_; 
v_a_598_ = lean_ctor_get(v___x_592_, 0);
lean_inc(v_a_598_);
lean_dec_ref_known(v___x_592_, 1);
v_a_492_ = v_a_598_;
goto v___jp_491_;
}
}
case 5:
{
lean_object* v_val_599_; lean_object* v_toConstantVal_600_; lean_object* v_numParams_601_; lean_object* v_all_602_; lean_object* v_levelParams_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v_val_599_ = lean_ctor_get(v_val_479_, 0);
lean_inc_ref(v_val_599_);
lean_dec_ref_known(v_val_479_, 1);
v_toConstantVal_600_ = lean_ctor_get(v_val_599_, 0);
lean_inc_ref(v_toConstantVal_600_);
v_numParams_601_ = lean_ctor_get(v_val_599_, 1);
lean_inc(v_numParams_601_);
v_all_602_ = lean_ctor_get(v_val_599_, 3);
lean_inc(v_all_602_);
lean_dec_ref(v_val_599_);
v_levelParams_603_ = lean_ctor_get(v_toConstantVal_600_, 1);
lean_inc(v_levelParams_603_);
lean_dec_ref(v_toConstantVal_600_);
v___x_604_ = lean_box(0);
v___x_605_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_all_602_, v___x_604_, v___y_464_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_607_; lean_object* v___x_608_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_606_);
lean_dec_ref_known(v___x_605_, 1);
v___x_607_ = lean_box(0);
v___x_608_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(v_a_606_, v___x_607_, v___y_465_);
if (lean_obj_tag(v___x_608_) == 0)
{
lean_object* v___x_609_; 
lean_dec_ref_known(v___x_608_, 1);
v___x_609_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7(v_a_606_, v___x_604_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_609_) == 0)
{
lean_object* v_a_610_; lean_object* v___x_611_; 
v_a_610_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_610_);
lean_dec_ref_known(v___x_609_, 1);
v___x_611_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(v_a_610_, v___x_607_, v___y_464_, v___y_465_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v___x_612_; uint8_t v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; 
lean_dec_ref_known(v___x_611_, 1);
v___x_612_ = l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__9(v_a_610_, v___x_604_);
v___x_613_ = 0;
v___x_614_ = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(v___x_614_, 0, v_levelParams_603_);
lean_ctor_set(v___x_614_, 1, v_numParams_601_);
lean_ctor_set(v___x_614_, 2, v___x_612_);
lean_ctor_set_uint8(v___x_614_, sizeof(void*)*3, v___x_613_);
v___x_615_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_614_, v___y_465_);
lean_dec_ref_known(v___x_614_, 3);
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v_a_616_; lean_object* v___x_617_; 
v_a_616_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_616_);
lean_dec_ref_known(v___x_615_, 1);
v___x_617_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_463_, v_a_616_, v___y_464_, v___y_465_);
v___y_507_ = v___x_617_;
goto v___jp_506_;
}
else
{
lean_object* v_a_618_; 
v_a_618_ = lean_ctor_get(v___x_615_, 0);
lean_inc(v_a_618_);
lean_dec_ref_known(v___x_615_, 1);
v_a_492_ = v_a_618_;
goto v___jp_491_;
}
}
else
{
lean_object* v_a_619_; 
lean_dec(v_a_610_);
lean_dec(v_levelParams_603_);
lean_dec(v_numParams_601_);
v_a_619_ = lean_ctor_get(v___x_611_, 0);
lean_inc(v_a_619_);
lean_dec_ref_known(v___x_611_, 1);
v_a_492_ = v_a_619_;
goto v___jp_491_;
}
}
else
{
lean_object* v_a_620_; 
lean_dec(v_levelParams_603_);
lean_dec(v_numParams_601_);
v_a_620_ = lean_ctor_get(v___x_609_, 0);
lean_inc(v_a_620_);
lean_dec_ref_known(v___x_609_, 1);
v_a_492_ = v_a_620_;
goto v___jp_491_;
}
}
else
{
lean_object* v_a_621_; 
lean_dec(v_a_606_);
lean_dec(v_levelParams_603_);
lean_dec(v_numParams_601_);
v_a_621_ = lean_ctor_get(v___x_608_, 0);
lean_inc(v_a_621_);
lean_dec_ref_known(v___x_608_, 1);
v_a_492_ = v_a_621_;
goto v___jp_491_;
}
}
else
{
lean_object* v_a_622_; 
lean_dec(v_levelParams_603_);
lean_dec(v_numParams_601_);
v_a_622_ = lean_ctor_get(v___x_605_, 0);
lean_inc(v_a_622_);
lean_dec_ref_known(v___x_605_, 1);
v_a_492_ = v_a_622_;
goto v___jp_491_;
}
}
case 6:
{
lean_object* v_val_623_; lean_object* v___x_624_; lean_object* v_toConstantVal_625_; lean_object* v_env_626_; lean_object* v_remaining_627_; lean_object* v_pending_628_; lean_object* v_postponedConstructors_629_; lean_object* v_postponedRecursors_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_642_; 
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v_val_623_ = lean_ctor_get(v_val_479_, 0);
lean_inc_ref(v_val_623_);
lean_dec_ref_known(v_val_479_, 1);
v___x_624_ = lean_st_ref_take(v___y_465_);
v_toConstantVal_625_ = lean_ctor_get(v_val_623_, 0);
lean_inc_ref(v_toConstantVal_625_);
lean_dec_ref(v_val_623_);
v_env_626_ = lean_ctor_get(v___x_624_, 0);
v_remaining_627_ = lean_ctor_get(v___x_624_, 1);
v_pending_628_ = lean_ctor_get(v___x_624_, 2);
v_postponedConstructors_629_ = lean_ctor_get(v___x_624_, 3);
v_postponedRecursors_630_ = lean_ctor_get(v___x_624_, 4);
v_isSharedCheck_642_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_642_ == 0)
{
v___x_632_ = v___x_624_;
v_isShared_633_ = v_isSharedCheck_642_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_postponedRecursors_630_);
lean_inc(v_postponedConstructors_629_);
lean_inc(v_pending_628_);
lean_inc(v_remaining_627_);
lean_inc(v_env_626_);
lean_dec(v___x_624_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_642_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
lean_object* v_name_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_638_; 
v_name_634_ = lean_ctor_get(v_toConstantVal_625_, 0);
lean_inc(v_name_634_);
lean_dec_ref(v_toConstantVal_625_);
v___x_635_ = lean_box(0);
v___x_636_ = l_Lean_NameSet_insert(v_postponedConstructors_629_, v_name_634_);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 3, v___x_636_);
v___x_638_ = v___x_632_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_641_; 
v_reuseFailAlloc_641_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_641_, 0, v_env_626_);
lean_ctor_set(v_reuseFailAlloc_641_, 1, v_remaining_627_);
lean_ctor_set(v_reuseFailAlloc_641_, 2, v_pending_628_);
lean_ctor_set(v_reuseFailAlloc_641_, 3, v___x_636_);
lean_ctor_set(v_reuseFailAlloc_641_, 4, v_postponedRecursors_630_);
v___x_638_ = v_reuseFailAlloc_641_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
lean_object* v___x_639_; lean_object* v___x_640_; 
v___x_639_ = lean_st_ref_put(v___y_465_, v___x_638_);
v___x_640_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_463_, v___x_635_, v___y_464_, v___y_465_);
v___y_507_ = v___x_640_;
goto v___jp_506_;
}
}
}
default: 
{
lean_object* v_val_643_; lean_object* v___x_644_; lean_object* v_toConstantVal_645_; lean_object* v_env_646_; lean_object* v_remaining_647_; lean_object* v_pending_648_; lean_object* v_postponedConstructors_649_; lean_object* v_postponedRecursors_650_; lean_object* v___x_652_; uint8_t v_isShared_653_; uint8_t v_isSharedCheck_662_; 
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
v_val_643_ = lean_ctor_get(v_val_479_, 0);
lean_inc_ref(v_val_643_);
lean_dec_ref_known(v_val_479_, 1);
v___x_644_ = lean_st_ref_take(v___y_465_);
v_toConstantVal_645_ = lean_ctor_get(v_val_643_, 0);
lean_inc_ref(v_toConstantVal_645_);
lean_dec_ref(v_val_643_);
v_env_646_ = lean_ctor_get(v___x_644_, 0);
v_remaining_647_ = lean_ctor_get(v___x_644_, 1);
v_pending_648_ = lean_ctor_get(v___x_644_, 2);
v_postponedConstructors_649_ = lean_ctor_get(v___x_644_, 3);
v_postponedRecursors_650_ = lean_ctor_get(v___x_644_, 4);
v_isSharedCheck_662_ = !lean_is_exclusive(v___x_644_);
if (v_isSharedCheck_662_ == 0)
{
v___x_652_ = v___x_644_;
v_isShared_653_ = v_isSharedCheck_662_;
goto v_resetjp_651_;
}
else
{
lean_inc(v_postponedRecursors_650_);
lean_inc(v_postponedConstructors_649_);
lean_inc(v_pending_648_);
lean_inc(v_remaining_647_);
lean_inc(v_env_646_);
lean_dec(v___x_644_);
v___x_652_ = lean_box(0);
v_isShared_653_ = v_isSharedCheck_662_;
goto v_resetjp_651_;
}
v_resetjp_651_:
{
lean_object* v_name_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_658_; 
v_name_654_ = lean_ctor_get(v_toConstantVal_645_, 0);
lean_inc(v_name_654_);
lean_dec_ref(v_toConstantVal_645_);
v___x_655_ = lean_box(0);
v___x_656_ = l_Lean_NameSet_insert(v_postponedRecursors_650_, v_name_654_);
if (v_isShared_653_ == 0)
{
lean_ctor_set(v___x_652_, 4, v___x_656_);
v___x_658_ = v___x_652_;
goto v_reusejp_657_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_env_646_);
lean_ctor_set(v_reuseFailAlloc_661_, 1, v_remaining_647_);
lean_ctor_set(v_reuseFailAlloc_661_, 2, v_pending_648_);
lean_ctor_set(v_reuseFailAlloc_661_, 3, v_postponedConstructors_649_);
lean_ctor_set(v_reuseFailAlloc_661_, 4, v___x_656_);
v___x_658_ = v_reuseFailAlloc_661_;
goto v_reusejp_657_;
}
v_reusejp_657_:
{
lean_object* v___x_659_; lean_object* v___x_660_; 
v___x_659_ = lean_st_ref_put(v___y_465_, v___x_658_);
v___x_660_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_463_, v___x_655_, v___y_464_, v___y_465_);
v___y_507_ = v___x_660_;
goto v___jp_506_;
}
}
}
}
}
v___jp_491_:
{
lean_object* v___x_493_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_501_; 
v___x_493_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__0));
v___x_494_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_463_, v___x_490_);
v___x_495_ = lean_string_append(v___x_493_, v___x_494_);
lean_dec_ref(v___x_494_);
v___x_496_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__1));
v___x_497_ = lean_string_append(v___x_495_, v___x_496_);
v___x_498_ = lean_io_error_to_string(v_a_492_);
v___x_499_ = lean_string_append(v___x_497_, v___x_498_);
lean_dec_ref(v___x_498_);
if (v_isShared_482_ == 0)
{
lean_ctor_set_tag(v___x_481_, 18);
lean_ctor_set(v___x_481_, 0, v___x_499_);
v___x_501_ = v___x_481_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_499_);
v___x_501_ = v_reuseFailAlloc_505_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
lean_object* v___x_503_; 
if (v_isShared_487_ == 0)
{
lean_ctor_set_tag(v___x_486_, 1);
lean_ctor_set(v___x_486_, 0, v___x_501_);
v___x_503_ = v___x_486_;
goto v_reusejp_502_;
}
else
{
lean_object* v_reuseFailAlloc_504_; 
v_reuseFailAlloc_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_504_, 0, v___x_501_);
v___x_503_ = v_reuseFailAlloc_504_;
goto v_reusejp_502_;
}
v_reusejp_502_:
{
return v___x_503_;
}
}
}
v___jp_506_:
{
if (lean_obj_tag(v___y_507_) == 0)
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_516_; 
lean_del_object(v___x_486_);
lean_del_object(v___x_481_);
lean_dec(v_name_463_);
v_a_508_ = lean_ctor_get(v___y_507_, 0);
v_isSharedCheck_516_ = !lean_is_exclusive(v___y_507_);
if (v_isSharedCheck_516_ == 0)
{
v___x_510_ = v___y_507_;
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___y_507_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_516_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v_a_512_; lean_object* v___x_514_; 
v_a_512_ = lean_ctor_get(v_a_508_, 0);
lean_inc(v_a_512_);
lean_dec(v_a_508_);
if (v_isShared_511_ == 0)
{
lean_ctor_set(v___x_510_, 0, v_a_512_);
v___x_514_ = v___x_510_;
goto v_reusejp_513_;
}
else
{
lean_object* v_reuseFailAlloc_515_; 
v_reuseFailAlloc_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_515_, 0, v_a_512_);
v___x_514_ = v_reuseFailAlloc_515_;
goto v_reusejp_513_;
}
v_reusejp_513_:
{
return v___x_514_;
}
}
}
else
{
lean_object* v_a_517_; 
v_a_517_ = lean_ctor_get(v___y_507_, 0);
lean_inc(v_a_517_);
lean_dec_ref_known(v___y_507_, 1);
v_a_492_ = v_a_517_;
goto v___jp_491_;
}
}
}
}
else
{
lean_del_object(v___x_481_);
lean_dec(v_val_479_);
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
lean_dec(v_name_463_);
return v___x_484_;
}
}
}
else
{
lean_object* v___x_666_; lean_object* v___x_667_; 
lean_dec(v___x_478_);
lean_del_object(v___x_471_);
lean_dec_ref(v___f_467_);
lean_dec(v_name_463_);
v___x_666_ = lean_obj_once(&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7, &l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7_once, _init_l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7);
v___x_667_ = l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10(v___x_666_, v___y_464_, v___y_465_);
return v___x_667_;
}
}
}
}
else
{
lean_object* v_a_669_; lean_object* v___x_671_; uint8_t v_isShared_672_; uint8_t v_isSharedCheck_676_; 
lean_dec_ref(v___f_467_);
lean_dec(v_name_463_);
v_a_669_ = lean_ctor_get(v___x_468_, 0);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_468_);
if (v_isSharedCheck_676_ == 0)
{
v___x_671_ = v___x_468_;
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
else
{
lean_inc(v_a_669_);
lean_dec(v___x_468_);
v___x_671_ = lean_box(0);
v_isShared_672_ = v_isSharedCheck_676_;
goto v_resetjp_670_;
}
v_resetjp_670_:
{
lean_object* v___x_674_; 
if (v_isShared_672_ == 0)
{
v___x_674_ = v___x_671_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_a_669_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(lean_object* v_init_677_, lean_object* v_x_678_, lean_object* v___y_679_, lean_object* v___y_680_){
_start:
{
if (lean_obj_tag(v_x_678_) == 0)
{
lean_object* v_k_682_; lean_object* v_l_683_; lean_object* v_r_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_k_682_ = lean_ctor_get(v_x_678_, 1);
lean_inc(v_k_682_);
v_l_683_ = lean_ctor_get(v_x_678_, 3);
lean_inc(v_l_683_);
v_r_684_ = lean_ctor_get(v_x_678_, 4);
lean_inc(v_r_684_);
lean_dec_ref_known(v_x_678_, 5);
v___x_685_ = lean_box(0);
v___x_686_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v_init_677_, v_l_683_, v___y_679_, v___y_680_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v___x_687_; 
lean_dec_ref_known(v___x_686_, 1);
v___x_687_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(v_k_682_, v___y_679_, v___y_680_);
if (lean_obj_tag(v___x_687_) == 0)
{
lean_dec_ref_known(v___x_687_, 1);
v_init_677_ = v___x_685_;
v_x_678_ = v_r_684_;
goto _start;
}
else
{
lean_object* v_a_689_; lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
lean_dec(v_r_684_);
v_a_689_ = lean_ctor_get(v___x_687_, 0);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_687_);
if (v_isSharedCheck_696_ == 0)
{
v___x_691_ = v___x_687_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_inc(v_a_689_);
lean_dec(v___x_687_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_a_689_);
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
lean_dec(v_r_684_);
lean_dec(v_k_682_);
return v___x_686_;
}
}
else
{
lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_697_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_697_, 0, v_init_677_);
v___x_698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_698_, 0, v___x_697_);
return v___x_698_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(lean_object* v_names_699_, lean_object* v___y_700_, lean_object* v___y_701_){
_start:
{
lean_object* v___x_703_; lean_object* v___x_704_; 
v___x_703_ = lean_box(0);
v___x_704_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v___x_703_, v_names_699_, v___y_700_, v___y_701_);
if (lean_obj_tag(v___x_704_) == 0)
{
lean_object* v___x_706_; uint8_t v_isShared_707_; uint8_t v_isSharedCheck_711_; 
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_711_ == 0)
{
lean_object* v_unused_712_; 
v_unused_712_ = lean_ctor_get(v___x_704_, 0);
lean_dec(v_unused_712_);
v___x_706_ = v___x_704_;
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
else
{
lean_dec(v___x_704_);
v___x_706_ = lean_box(0);
v_isShared_707_ = v_isSharedCheck_711_;
goto v_resetjp_705_;
}
v_resetjp_705_:
{
lean_object* v___x_709_; 
if (v_isShared_707_ == 0)
{
lean_ctor_set(v___x_706_, 0, v___x_703_);
v___x_709_ = v___x_706_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_703_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
else
{
lean_object* v_a_713_; lean_object* v___x_715_; uint8_t v_isShared_716_; uint8_t v_isSharedCheck_720_; 
v_a_713_ = lean_ctor_get(v___x_704_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_704_);
if (v_isSharedCheck_720_ == 0)
{
v___x_715_ = v___x_704_;
v_isShared_716_ = v_isSharedCheck_720_;
goto v_resetjp_714_;
}
else
{
lean_inc(v_a_713_);
lean_dec(v___x_704_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants___boxed(lean_object* v_names_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v_res_725_; 
v_res_725_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(v_names_721_, v___y_722_, v___y_723_);
lean_dec(v___y_723_);
lean_dec_ref(v___y_722_);
return v_res_725_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg___boxed(lean_object* v_as_x27_726_, lean_object* v_b_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(v_as_x27_726_, v_b_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v_as_x27_726_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg___boxed(lean_object* v_as_x27_732_, lean_object* v_b_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_){
_start:
{
lean_object* v_res_737_; 
v_res_737_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(v_as_x27_732_, v_b_733_, v___y_734_, v___y_735_);
lean_dec(v___y_735_);
lean_dec_ref(v___y_734_);
lean_dec(v_as_x27_732_);
return v_res_737_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12___boxed(lean_object* v_init_738_, lean_object* v_x_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_){
_start:
{
lean_object* v_res_743_; 
v_res_743_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v_init_738_, v_x_739_, v___y_740_, v___y_741_);
lean_dec(v___y_741_);
lean_dec_ref(v___y_740_);
return v_res_743_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___boxed(lean_object* v_name_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v_res_748_; 
v_res_748_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(v_name_744_, v___y_745_, v___y_746_);
lean_dec(v___y_746_);
lean_dec_ref(v___y_745_);
return v_res_748_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2(lean_object* v_x_749_, lean_object* v_x_750_, lean_object* v___y_751_, lean_object* v___y_752_){
_start:
{
lean_object* v___x_754_; 
v___x_754_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_x_749_, v_x_750_, v___y_751_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___boxed(lean_object* v_x_755_, lean_object* v_x_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v_res_760_; 
v_res_760_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2(v_x_755_, v_x_756_, v___y_757_, v___y_758_);
lean_dec(v___y_758_);
lean_dec_ref(v___y_757_);
return v_res_760_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3(lean_object* v_00_u03b2_761_, lean_object* v_m_762_, lean_object* v_a_763_){
_start:
{
lean_object* v___x_764_; 
v___x_764_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v_m_762_, v_a_763_);
return v___x_764_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___boxed(lean_object* v_00_u03b2_765_, lean_object* v_m_766_, lean_object* v_a_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3(v_00_u03b2_765_, v_m_766_, v_a_767_);
lean_dec(v_a_767_);
lean_dec_ref(v_m_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5(lean_object* v_as_769_, lean_object* v_as_x27_770_, lean_object* v_b_771_, lean_object* v_a_772_, lean_object* v___y_773_, lean_object* v___y_774_){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(v_as_x27_770_, v_b_771_, v___y_773_, v___y_774_);
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___boxed(lean_object* v_as_777_, lean_object* v_as_x27_778_, lean_object* v_b_779_, lean_object* v_a_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_){
_start:
{
lean_object* v_res_784_; 
v_res_784_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5(v_as_777_, v_as_x27_778_, v_b_779_, v_a_780_, v___y_781_, v___y_782_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v_as_x27_778_);
lean_dec(v_as_777_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6(lean_object* v_as_785_, lean_object* v_as_x27_786_, lean_object* v_b_787_, lean_object* v_a_788_, lean_object* v___y_789_, lean_object* v___y_790_){
_start:
{
lean_object* v___x_792_; 
v___x_792_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(v_as_x27_786_, v_b_787_, v___y_790_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___boxed(lean_object* v_as_793_, lean_object* v_as_x27_794_, lean_object* v_b_795_, lean_object* v_a_796_, lean_object* v___y_797_, lean_object* v___y_798_, lean_object* v___y_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6(v_as_793_, v_as_x27_794_, v_b_795_, v_a_796_, v___y_797_, v___y_798_);
lean_dec(v___y_798_);
lean_dec_ref(v___y_797_);
lean_dec(v_as_x27_794_);
lean_dec(v_as_793_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8(lean_object* v_as_801_, lean_object* v_as_x27_802_, lean_object* v_b_803_, lean_object* v_a_804_, lean_object* v___y_805_, lean_object* v___y_806_){
_start:
{
lean_object* v___x_808_; 
v___x_808_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(v_as_x27_802_, v_b_803_, v___y_805_, v___y_806_);
return v___x_808_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___boxed(lean_object* v_as_809_, lean_object* v_as_x27_810_, lean_object* v_b_811_, lean_object* v_a_812_, lean_object* v___y_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
lean_object* v_res_816_; 
v_res_816_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8(v_as_809_, v_as_x27_810_, v_b_811_, v_a_812_, v___y_813_, v___y_814_);
lean_dec(v___y_814_);
lean_dec_ref(v___y_813_);
lean_dec(v_as_x27_810_);
lean_dec(v_as_809_);
return v_res_816_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4(lean_object* v_00_u03b2_817_, lean_object* v_a_818_, lean_object* v_x_819_){
_start:
{
lean_object* v___x_820_; 
v___x_820_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(v_a_818_, v_x_819_);
return v___x_820_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___boxed(lean_object* v_00_u03b2_821_, lean_object* v_a_822_, lean_object* v_x_823_){
_start:
{
lean_object* v_res_824_; 
v_res_824_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4(v_00_u03b2_821_, v_a_822_, v_x_823_);
lean_dec(v_x_823_);
lean_dec(v_a_822_);
return v_res_824_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(lean_object* v_init_827_, lean_object* v_x_828_, lean_object* v___y_829_, lean_object* v___y_830_){
_start:
{
if (lean_obj_tag(v_x_828_) == 0)
{
lean_object* v_k_832_; lean_object* v_l_833_; lean_object* v_r_834_; lean_object* v___x_842_; lean_object* v___x_843_; 
v_k_832_ = lean_ctor_get(v_x_828_, 1);
lean_inc(v_k_832_);
v_l_833_ = lean_ctor_get(v_x_828_, 3);
lean_inc(v_l_833_);
v_r_834_ = lean_ctor_get(v_x_828_, 4);
lean_inc(v_r_834_);
lean_dec_ref_known(v_x_828_, 5);
v___x_842_ = lean_box(0);
v___x_843_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(v_init_827_, v_l_833_, v___y_829_, v___y_830_);
if (lean_obj_tag(v___x_843_) == 0)
{
lean_object* v___x_845_; uint8_t v_isShared_846_; uint8_t v_isSharedCheck_865_; 
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_843_);
if (v_isSharedCheck_865_ == 0)
{
lean_object* v_unused_866_; 
v_unused_866_ = lean_ctor_get(v___x_843_, 0);
lean_dec(v_unused_866_);
v___x_845_ = v___x_843_;
v_isShared_846_ = v_isSharedCheck_865_;
goto v_resetjp_844_;
}
else
{
lean_dec(v___x_843_);
v___x_845_ = lean_box(0);
v_isShared_846_ = v_isSharedCheck_865_;
goto v_resetjp_844_;
}
v_resetjp_844_:
{
lean_object* v___x_847_; lean_object* v_env_848_; lean_object* v___x_849_; 
v___x_847_ = lean_st_ref_get(v___y_830_);
v_env_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc_ref(v_env_848_);
lean_dec(v___x_847_);
lean_inc(v_k_832_);
v___x_849_ = lean_environment_find(v_env_848_, v_k_832_);
if (lean_obj_tag(v___x_849_) == 1)
{
lean_object* v_val_850_; 
v_val_850_ = lean_ctor_get(v___x_849_, 0);
lean_inc(v_val_850_);
lean_dec_ref_known(v___x_849_, 1);
if (lean_obj_tag(v_val_850_) == 6)
{
lean_object* v_val_851_; lean_object* v___x_852_; 
v_val_851_ = lean_ctor_get(v_val_850_, 0);
lean_inc_ref(v_val_851_);
lean_dec_ref_known(v_val_850_, 1);
v___x_852_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v___y_829_, v_k_832_);
if (lean_obj_tag(v___x_852_) == 1)
{
lean_object* v_val_853_; 
v_val_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_val_853_);
lean_dec_ref_known(v___x_852_, 1);
if (lean_obj_tag(v_val_853_) == 6)
{
lean_object* v_val_854_; uint8_t v___x_855_; 
v_val_854_ = lean_ctor_get(v_val_853_, 0);
lean_inc_ref(v_val_854_);
lean_dec_ref_known(v_val_853_, 1);
v___x_855_ = l_Lean_instBEqConstructorVal_beq(v_val_851_, v_val_854_);
lean_dec_ref(v_val_854_);
lean_dec_ref(v_val_851_);
if (v___x_855_ == 0)
{
uint8_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_862_; 
lean_dec(v_r_834_);
v___x_856_ = 1;
v___x_857_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__1));
v___x_858_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_832_, v___x_856_);
v___x_859_ = lean_string_append(v___x_857_, v___x_858_);
lean_dec_ref(v___x_858_);
v___x_860_ = lean_mk_io_user_error(v___x_859_);
if (v_isShared_846_ == 0)
{
lean_ctor_set_tag(v___x_845_, 1);
lean_ctor_set(v___x_845_, 0, v___x_860_);
v___x_862_ = v___x_845_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_863_; 
v_reuseFailAlloc_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_863_, 0, v___x_860_);
v___x_862_ = v_reuseFailAlloc_863_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
return v___x_862_;
}
}
else
{
lean_del_object(v___x_845_);
lean_dec(v_k_832_);
v_init_827_ = v___x_842_;
v_x_828_ = v_r_834_;
goto _start;
}
}
else
{
lean_dec(v_val_853_);
lean_dec_ref(v_val_851_);
lean_del_object(v___x_845_);
lean_dec(v_r_834_);
goto v___jp_835_;
}
}
else
{
lean_dec(v___x_852_);
lean_dec_ref(v_val_851_);
lean_del_object(v___x_845_);
lean_dec(v_r_834_);
goto v___jp_835_;
}
}
else
{
lean_dec(v_val_850_);
lean_del_object(v___x_845_);
lean_dec(v_r_834_);
goto v___jp_835_;
}
}
else
{
lean_dec(v___x_849_);
lean_del_object(v___x_845_);
lean_dec(v_r_834_);
goto v___jp_835_;
}
}
}
else
{
lean_dec(v_r_834_);
lean_dec(v_k_832_);
return v___x_843_;
}
v___jp_835_:
{
lean_object* v___x_836_; uint8_t v___x_837_; lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_836_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__0));
v___x_837_ = 1;
v___x_838_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_832_, v___x_837_);
v___x_839_ = lean_string_append(v___x_836_, v___x_838_);
lean_dec_ref(v___x_838_);
v___x_840_ = lean_mk_io_user_error(v___x_839_);
v___x_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
return v___x_841_;
}
}
else
{
lean_object* v___x_867_; lean_object* v___x_868_; 
v___x_867_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_867_, 0, v_init_827_);
v___x_868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_868_, 0, v___x_867_);
return v___x_868_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___boxed(lean_object* v_init_869_, lean_object* v_x_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_){
_start:
{
lean_object* v_res_874_; 
v_res_874_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(v_init_869_, v_x_870_, v___y_871_, v___y_872_);
lean_dec(v___y_872_);
lean_dec_ref(v___y_871_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors(lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; lean_object* v_postponedConstructors_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_878_ = lean_st_ref_get(v___y_876_);
v_postponedConstructors_879_ = lean_ctor_get(v___x_878_, 3);
lean_inc(v_postponedConstructors_879_);
lean_dec(v___x_878_);
v___x_880_ = lean_box(0);
v___x_881_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(v___x_880_, v_postponedConstructors_879_, v___y_875_, v___y_876_);
if (lean_obj_tag(v___x_881_) == 0)
{
lean_object* v___x_883_; uint8_t v_isShared_884_; uint8_t v_isSharedCheck_888_; 
v_isSharedCheck_888_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_888_ == 0)
{
lean_object* v_unused_889_; 
v_unused_889_ = lean_ctor_get(v___x_881_, 0);
lean_dec(v_unused_889_);
v___x_883_ = v___x_881_;
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
else
{
lean_dec(v___x_881_);
v___x_883_ = lean_box(0);
v_isShared_884_ = v_isSharedCheck_888_;
goto v_resetjp_882_;
}
v_resetjp_882_:
{
lean_object* v___x_886_; 
if (v_isShared_884_ == 0)
{
lean_ctor_set(v___x_883_, 0, v___x_880_);
v___x_886_ = v___x_883_;
goto v_reusejp_885_;
}
else
{
lean_object* v_reuseFailAlloc_887_; 
v_reuseFailAlloc_887_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_887_, 0, v___x_880_);
v___x_886_ = v_reuseFailAlloc_887_;
goto v_reusejp_885_;
}
v_reusejp_885_:
{
return v___x_886_;
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
v_a_890_ = lean_ctor_get(v___x_881_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_881_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_881_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_881_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors___boxed(lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors(v___y_898_, v___y_899_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(lean_object* v_init_904_, lean_object* v_x_905_, lean_object* v___y_906_, lean_object* v___y_907_){
_start:
{
if (lean_obj_tag(v_x_905_) == 0)
{
lean_object* v_k_909_; lean_object* v_l_910_; lean_object* v_r_911_; lean_object* v___x_919_; lean_object* v___x_920_; 
v_k_909_ = lean_ctor_get(v_x_905_, 1);
lean_inc(v_k_909_);
v_l_910_ = lean_ctor_get(v_x_905_, 3);
lean_inc(v_l_910_);
v_r_911_ = lean_ctor_get(v_x_905_, 4);
lean_inc(v_r_911_);
lean_dec_ref_known(v_x_905_, 5);
v___x_919_ = lean_box(0);
v___x_920_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(v_init_904_, v_l_910_, v___y_906_, v___y_907_);
if (lean_obj_tag(v___x_920_) == 0)
{
lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_920_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_920_, 0);
lean_dec(v_unused_943_);
v___x_922_ = v___x_920_;
v_isShared_923_ = v_isSharedCheck_942_;
goto v_resetjp_921_;
}
else
{
lean_dec(v___x_920_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_942_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_924_; lean_object* v_env_925_; lean_object* v___x_926_; 
v___x_924_ = lean_st_ref_get(v___y_907_);
v_env_925_ = lean_ctor_get(v___x_924_, 0);
lean_inc_ref(v_env_925_);
lean_dec(v___x_924_);
lean_inc(v_k_909_);
v___x_926_ = lean_environment_find(v_env_925_, v_k_909_);
if (lean_obj_tag(v___x_926_) == 1)
{
lean_object* v_val_927_; 
v_val_927_ = lean_ctor_get(v___x_926_, 0);
lean_inc(v_val_927_);
lean_dec_ref_known(v___x_926_, 1);
if (lean_obj_tag(v_val_927_) == 7)
{
lean_object* v_val_928_; lean_object* v___x_929_; 
v_val_928_ = lean_ctor_get(v_val_927_, 0);
lean_inc_ref(v_val_928_);
lean_dec_ref_known(v_val_927_, 1);
v___x_929_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v___y_906_, v_k_909_);
if (lean_obj_tag(v___x_929_) == 1)
{
lean_object* v_val_930_; 
v_val_930_ = lean_ctor_get(v___x_929_, 0);
lean_inc(v_val_930_);
lean_dec_ref_known(v___x_929_, 1);
if (lean_obj_tag(v_val_930_) == 7)
{
lean_object* v_val_931_; uint8_t v___x_932_; 
v_val_931_ = lean_ctor_get(v_val_930_, 0);
lean_inc_ref(v_val_931_);
lean_dec_ref_known(v_val_930_, 1);
v___x_932_ = l_Lean_instBEqRecursorVal_beq(v_val_928_, v_val_931_);
lean_dec_ref(v_val_931_);
lean_dec_ref(v_val_928_);
if (v___x_932_ == 0)
{
uint8_t v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_939_; 
lean_dec(v_r_911_);
v___x_933_ = 1;
v___x_934_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__1));
v___x_935_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_909_, v___x_933_);
v___x_936_ = lean_string_append(v___x_934_, v___x_935_);
lean_dec_ref(v___x_935_);
v___x_937_ = lean_mk_io_user_error(v___x_936_);
if (v_isShared_923_ == 0)
{
lean_ctor_set_tag(v___x_922_, 1);
lean_ctor_set(v___x_922_, 0, v___x_937_);
v___x_939_ = v___x_922_;
goto v_reusejp_938_;
}
else
{
lean_object* v_reuseFailAlloc_940_; 
v_reuseFailAlloc_940_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_940_, 0, v___x_937_);
v___x_939_ = v_reuseFailAlloc_940_;
goto v_reusejp_938_;
}
v_reusejp_938_:
{
return v___x_939_;
}
}
else
{
lean_del_object(v___x_922_);
lean_dec(v_k_909_);
v_init_904_ = v___x_919_;
v_x_905_ = v_r_911_;
goto _start;
}
}
else
{
lean_dec(v_val_930_);
lean_dec_ref(v_val_928_);
lean_del_object(v___x_922_);
lean_dec(v_r_911_);
goto v___jp_912_;
}
}
else
{
lean_dec(v___x_929_);
lean_dec_ref(v_val_928_);
lean_del_object(v___x_922_);
lean_dec(v_r_911_);
goto v___jp_912_;
}
}
else
{
lean_dec(v_val_927_);
lean_del_object(v___x_922_);
lean_dec(v_r_911_);
goto v___jp_912_;
}
}
else
{
lean_dec(v___x_926_);
lean_del_object(v___x_922_);
lean_dec(v_r_911_);
goto v___jp_912_;
}
}
}
else
{
lean_dec(v_r_911_);
lean_dec(v_k_909_);
return v___x_920_;
}
v___jp_912_:
{
lean_object* v___x_913_; uint8_t v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; 
v___x_913_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__0));
v___x_914_ = 1;
v___x_915_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_909_, v___x_914_);
v___x_916_ = lean_string_append(v___x_913_, v___x_915_);
lean_dec_ref(v___x_915_);
v___x_917_ = lean_mk_io_user_error(v___x_916_);
v___x_918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_918_, 0, v___x_917_);
return v___x_918_;
}
}
else
{
lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_944_, 0, v_init_904_);
v___x_945_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_945_, 0, v___x_944_);
return v___x_945_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___boxed(lean_object* v_init_946_, lean_object* v_x_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(v_init_946_, v_x_947_, v___y_948_, v___y_949_);
lean_dec(v___y_949_);
lean_dec_ref(v___y_948_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors(lean_object* v___y_952_, lean_object* v___y_953_){
_start:
{
lean_object* v___x_955_; lean_object* v_postponedRecursors_956_; lean_object* v___x_957_; lean_object* v___x_958_; 
v___x_955_ = lean_st_ref_get(v___y_953_);
v_postponedRecursors_956_ = lean_ctor_get(v___x_955_, 4);
lean_inc(v_postponedRecursors_956_);
lean_dec(v___x_955_);
v___x_957_ = lean_box(0);
v___x_958_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(v___x_957_, v_postponedRecursors_956_, v___y_952_, v___y_953_);
if (lean_obj_tag(v___x_958_) == 0)
{
lean_object* v___x_960_; uint8_t v_isShared_961_; uint8_t v_isSharedCheck_965_; 
v_isSharedCheck_965_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_965_ == 0)
{
lean_object* v_unused_966_; 
v_unused_966_ = lean_ctor_get(v___x_958_, 0);
lean_dec(v_unused_966_);
v___x_960_ = v___x_958_;
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
else
{
lean_dec(v___x_958_);
v___x_960_ = lean_box(0);
v_isShared_961_ = v_isSharedCheck_965_;
goto v_resetjp_959_;
}
v_resetjp_959_:
{
lean_object* v___x_963_; 
if (v_isShared_961_ == 0)
{
lean_ctor_set(v___x_960_, 0, v___x_957_);
v___x_963_ = v___x_960_;
goto v_reusejp_962_;
}
else
{
lean_object* v_reuseFailAlloc_964_; 
v_reuseFailAlloc_964_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_964_, 0, v___x_957_);
v___x_963_ = v_reuseFailAlloc_964_;
goto v_reusejp_962_;
}
v_reusejp_962_:
{
return v___x_963_;
}
}
}
else
{
lean_object* v_a_967_; lean_object* v___x_969_; uint8_t v_isShared_970_; uint8_t v_isSharedCheck_974_; 
v_a_967_ = lean_ctor_get(v___x_958_, 0);
v_isSharedCheck_974_ = !lean_is_exclusive(v___x_958_);
if (v_isSharedCheck_974_ == 0)
{
v___x_969_ = v___x_958_;
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
else
{
lean_inc(v_a_967_);
lean_dec(v___x_958_);
v___x_969_ = lean_box(0);
v_isShared_970_ = v_isSharedCheck_974_;
goto v_resetjp_968_;
}
v_resetjp_968_:
{
lean_object* v___x_972_; 
if (v_isShared_970_ == 0)
{
v___x_972_ = v___x_969_;
goto v_reusejp_971_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_a_967_);
v___x_972_ = v_reuseFailAlloc_973_;
goto v_reusejp_971_;
}
v_reusejp_971_:
{
return v___x_972_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors___boxed(lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_){
_start:
{
lean_object* v_res_978_; 
v_res_978_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors(v___y_975_, v___y_976_);
lean_dec(v___y_976_);
lean_dec_ref(v___y_975_);
return v_res_978_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(lean_object* v_x_979_, lean_object* v_x_980_){
_start:
{
if (lean_obj_tag(v_x_980_) == 0)
{
lean_inc(v_x_979_);
return v_x_979_;
}
else
{
lean_object* v_key_981_; lean_object* v_value_982_; lean_object* v_tail_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; 
v_key_981_ = lean_ctor_get(v_x_980_, 0);
v_value_982_ = lean_ctor_get(v_x_980_, 1);
v_tail_983_ = lean_ctor_get(v_x_980_, 2);
v___x_984_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(v_x_979_, v_tail_983_);
lean_inc(v_value_982_);
lean_inc(v_key_981_);
v___x_985_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_985_, 0, v_key_981_);
lean_ctor_set(v___x_985_, 1, v_value_982_);
v___x_986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_986_, 0, v___x_985_);
lean_ctor_set(v___x_986_, 1, v___x_984_);
return v___x_986_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1___boxed(lean_object* v_x_987_, lean_object* v_x_988_){
_start:
{
lean_object* v_res_989_; 
v_res_989_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(v_x_987_, v_x_988_);
lean_dec(v_x_988_);
lean_dec(v_x_987_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2(lean_object* v_as_990_, size_t v_i_991_, size_t v_stop_992_, lean_object* v_b_993_){
_start:
{
uint8_t v___x_994_; 
v___x_994_ = lean_usize_dec_eq(v_i_991_, v_stop_992_);
if (v___x_994_ == 0)
{
size_t v___x_995_; size_t v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; 
v___x_995_ = ((size_t)1ULL);
v___x_996_ = lean_usize_sub(v_i_991_, v___x_995_);
v___x_997_ = lean_array_uget_borrowed(v_as_990_, v___x_996_);
v___x_998_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(v_b_993_, v___x_997_);
lean_dec(v_b_993_);
v_i_991_ = v___x_996_;
v_b_993_ = v___x_998_;
goto _start;
}
else
{
return v_b_993_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2___boxed(lean_object* v_as_1000_, lean_object* v_i_1001_, lean_object* v_stop_1002_, lean_object* v_b_1003_){
_start:
{
size_t v_i_boxed_1004_; size_t v_stop_boxed_1005_; lean_object* v_res_1006_; 
v_i_boxed_1004_ = lean_unbox_usize(v_i_1001_);
lean_dec(v_i_1001_);
v_stop_boxed_1005_ = lean_unbox_usize(v_stop_1002_);
lean_dec(v_stop_1002_);
v_res_1006_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2(v_as_1000_, v_i_boxed_1004_, v_stop_boxed_1005_, v_b_1003_);
lean_dec_ref(v_as_1000_);
return v_res_1006_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(lean_object* v_as_x27_1007_, lean_object* v_b_1008_){
_start:
{
if (lean_obj_tag(v_as_x27_1007_) == 0)
{
lean_object* v___x_1010_; 
v___x_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1010_, 0, v_b_1008_);
return v___x_1010_;
}
else
{
lean_object* v_head_1011_; lean_object* v_tail_1012_; lean_object* v_fst_1013_; lean_object* v_snd_1014_; uint8_t v___x_1015_; 
v_head_1011_ = lean_ctor_get(v_as_x27_1007_, 0);
v_tail_1012_ = lean_ctor_get(v_as_x27_1007_, 1);
v_fst_1013_ = lean_ctor_get(v_head_1011_, 0);
v_snd_1014_ = lean_ctor_get(v_head_1011_, 1);
v___x_1015_ = l_Lean_ConstantInfo_isUnsafe(v_snd_1014_);
if (v___x_1015_ == 0)
{
uint8_t v___x_1016_; 
v___x_1016_ = l_Lean_ConstantInfo_isPartial(v_snd_1014_);
if (v___x_1016_ == 0)
{
lean_object* v___x_1017_; 
lean_inc(v_fst_1013_);
v___x_1017_ = l_Lean_NameSet_insert(v_b_1008_, v_fst_1013_);
v_as_x27_1007_ = v_tail_1012_;
v_b_1008_ = v___x_1017_;
goto _start;
}
else
{
v_as_x27_1007_ = v_tail_1012_;
goto _start;
}
}
else
{
v_as_x27_1007_ = v_tail_1012_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg___boxed(lean_object* v_as_x27_1021_, lean_object* v_b_1022_, lean_object* v___y_1023_){
_start:
{
lean_object* v_res_1024_; 
v_res_1024_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(v_as_x27_1021_, v_b_1022_);
lean_dec(v_as_x27_1021_);
return v_res_1024_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_replay(lean_object* v_newConstants_1025_, lean_object* v_env_1026_){
_start:
{
lean_object* v___y_1029_; lean_object* v___y_1030_; lean_object* v_buckets_1049_; lean_object* v_remaining_1050_; lean_object* v___y_1052_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; uint8_t v___x_1072_; 
v_buckets_1049_ = lean_ctor_get(v_newConstants_1025_, 1);
v_remaining_1050_ = l_Lean_NameSet_empty;
v___x_1069_ = lean_box(0);
v___x_1070_ = lean_array_get_size(v_buckets_1049_);
v___x_1071_ = lean_unsigned_to_nat(0u);
v___x_1072_ = lean_nat_dec_lt(v___x_1071_, v___x_1070_);
if (v___x_1072_ == 0)
{
v___y_1052_ = v___x_1069_;
goto v___jp_1051_;
}
else
{
size_t v___x_1073_; size_t v___x_1074_; lean_object* v___x_1075_; 
v___x_1073_ = lean_usize_of_nat(v___x_1070_);
v___x_1074_ = ((size_t)0ULL);
v___x_1075_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2(v_buckets_1049_, v___x_1073_, v___x_1074_, v___x_1069_);
v___y_1052_ = v___x_1075_;
goto v___jp_1051_;
}
v___jp_1028_:
{
if (lean_obj_tag(v___y_1030_) == 0)
{
lean_object* v___x_1032_; uint8_t v_isShared_1033_; uint8_t v_isSharedCheck_1039_; 
v_isSharedCheck_1039_ = !lean_is_exclusive(v___y_1030_);
if (v_isSharedCheck_1039_ == 0)
{
lean_object* v_unused_1040_; 
v_unused_1040_ = lean_ctor_get(v___y_1030_, 0);
lean_dec(v_unused_1040_);
v___x_1032_ = v___y_1030_;
v_isShared_1033_ = v_isSharedCheck_1039_;
goto v_resetjp_1031_;
}
else
{
lean_dec(v___y_1030_);
v___x_1032_ = lean_box(0);
v_isShared_1033_ = v_isSharedCheck_1039_;
goto v_resetjp_1031_;
}
v_resetjp_1031_:
{
lean_object* v___x_1034_; lean_object* v_env_1035_; lean_object* v___x_1037_; 
v___x_1034_ = lean_st_ref_get(v___y_1029_);
lean_dec(v___y_1029_);
v_env_1035_ = lean_ctor_get(v___x_1034_, 0);
lean_inc_ref(v_env_1035_);
lean_dec(v___x_1034_);
if (v_isShared_1033_ == 0)
{
lean_ctor_set(v___x_1032_, 0, v_env_1035_);
v___x_1037_ = v___x_1032_;
goto v_reusejp_1036_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_env_1035_);
v___x_1037_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1036_;
}
v_reusejp_1036_:
{
return v___x_1037_;
}
}
}
else
{
lean_object* v_a_1041_; lean_object* v___x_1043_; uint8_t v_isShared_1044_; uint8_t v_isSharedCheck_1048_; 
lean_dec(v___y_1029_);
v_a_1041_ = lean_ctor_get(v___y_1030_, 0);
v_isSharedCheck_1048_ = !lean_is_exclusive(v___y_1030_);
if (v_isSharedCheck_1048_ == 0)
{
v___x_1043_ = v___y_1030_;
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
else
{
lean_inc(v_a_1041_);
lean_dec(v___y_1030_);
v___x_1043_ = lean_box(0);
v_isShared_1044_ = v_isSharedCheck_1048_;
goto v_resetjp_1042_;
}
v_resetjp_1042_:
{
lean_object* v___x_1046_; 
if (v_isShared_1044_ == 0)
{
v___x_1046_ = v___x_1043_;
goto v_reusejp_1045_;
}
else
{
lean_object* v_reuseFailAlloc_1047_; 
v_reuseFailAlloc_1047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1047_, 0, v_a_1041_);
v___x_1046_ = v_reuseFailAlloc_1047_;
goto v_reusejp_1045_;
}
v_reusejp_1045_:
{
return v___x_1046_;
}
}
}
}
v___jp_1051_:
{
lean_object* v___x_1053_; lean_object* v_a_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1053_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(v___y_1052_, v_remaining_1050_);
lean_dec(v___y_1052_);
v_a_1054_ = lean_ctor_get(v___x_1053_, 0);
lean_inc_n(v_a_1054_, 2);
lean_dec_ref(v___x_1053_);
v___x_1055_ = lean_box(0);
v___x_1056_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1056_, 0, v_env_1026_);
lean_ctor_set(v___x_1056_, 1, v_a_1054_);
lean_ctor_set(v___x_1056_, 2, v_remaining_1050_);
lean_ctor_set(v___x_1056_, 3, v_remaining_1050_);
lean_ctor_set(v___x_1056_, 4, v_remaining_1050_);
v___x_1057_ = lean_st_mk_ref(v___x_1056_);
v___x_1058_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v___x_1055_, v_a_1054_, v_newConstants_1025_, v___x_1057_);
if (lean_obj_tag(v___x_1058_) == 0)
{
lean_object* v___x_1059_; 
lean_dec_ref_known(v___x_1058_, 1);
v___x_1059_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors(v_newConstants_1025_, v___x_1057_);
if (lean_obj_tag(v___x_1059_) == 0)
{
lean_object* v___x_1060_; 
lean_dec_ref_known(v___x_1059_, 1);
v___x_1060_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors(v_newConstants_1025_, v___x_1057_);
v___y_1029_ = v___x_1057_;
v___y_1030_ = v___x_1060_;
goto v___jp_1028_;
}
else
{
v___y_1029_ = v___x_1057_;
v___y_1030_ = v___x_1059_;
goto v___jp_1028_;
}
}
else
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1068_; 
lean_dec(v___x_1057_);
v_a_1061_ = lean_ctor_get(v___x_1058_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v___x_1058_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1063_ = v___x_1058_;
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1058_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1068_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1066_; 
if (v_isShared_1064_ == 0)
{
v___x_1066_ = v___x_1063_;
goto v_reusejp_1065_;
}
else
{
lean_object* v_reuseFailAlloc_1067_; 
v_reuseFailAlloc_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1067_, 0, v_a_1061_);
v___x_1066_ = v_reuseFailAlloc_1067_;
goto v_reusejp_1065_;
}
v_reusejp_1065_:
{
return v___x_1066_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_replay___boxed(lean_object* v_newConstants_1076_, lean_object* v_env_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l_Lean_Kernel_Environment_replay(v_newConstants_1076_, v_env_1077_);
lean_dec_ref(v_newConstants_1076_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0(lean_object* v_as_1080_, lean_object* v_as_x27_1081_, lean_object* v_b_1082_, lean_object* v_a_1083_){
_start:
{
lean_object* v___x_1085_; 
v___x_1085_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(v_as_x27_1081_, v_b_1082_);
return v___x_1085_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___boxed(lean_object* v_as_1086_, lean_object* v_as_x27_1087_, lean_object* v_b_1088_, lean_object* v_a_1089_, lean_object* v___y_1090_){
_start:
{
lean_object* v_res_1091_; 
v_res_1091_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0(v_as_1086_, v_as_x27_1087_, v_b_1088_, v_a_1089_);
lean_dec(v_as_x27_1087_);
lean_dec(v_as_1086_);
return v_res_1091_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_replay(lean_object* v_newConstants_1092_, lean_object* v_env_1093_){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_elab_environment_to_kernel_env(v_env_1093_);
v___x_1096_ = l_Lean_Kernel_Environment_replay(v_newConstants_1092_, v___x_1095_);
if (lean_obj_tag(v___x_1096_) == 0)
{
lean_object* v_a_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1105_; 
v_a_1097_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1105_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1105_ == 0)
{
v___x_1099_ = v___x_1096_;
v_isShared_1100_ = v_isSharedCheck_1105_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_a_1097_);
lean_dec(v___x_1096_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1105_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___x_1101_; lean_object* v___x_1103_; 
v___x_1101_ = l_Lean_Environment_ofKernelEnv(v_a_1097_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1101_);
v___x_1103_ = v___x_1099_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1104_; 
v_reuseFailAlloc_1104_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1104_, 0, v___x_1101_);
v___x_1103_ = v_reuseFailAlloc_1104_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
return v___x_1103_;
}
}
}
else
{
lean_object* v_a_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1113_; 
v_a_1106_ = lean_ctor_get(v___x_1096_, 0);
v_isSharedCheck_1113_ = !lean_is_exclusive(v___x_1096_);
if (v_isSharedCheck_1113_ == 0)
{
v___x_1108_ = v___x_1096_;
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_a_1106_);
lean_dec(v___x_1096_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1113_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v___x_1111_; 
if (v_isShared_1109_ == 0)
{
v___x_1111_ = v___x_1108_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1112_; 
v_reuseFailAlloc_1112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1112_, 0, v_a_1106_);
v___x_1111_ = v_reuseFailAlloc_1112_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
return v___x_1111_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_replay___boxed(lean_object* v_newConstants_1114_, lean_object* v_env_1115_, lean_object* v___y_1116_){
_start:
{
lean_object* v_res_1117_; 
v_res_1117_ = l_Lean_Environment_replay(v_newConstants_1114_, v_env_1115_);
lean_dec_ref(v_newConstants_1114_);
return v_res_1117_;
}
}
lean_object* runtime_initialize_Lean_CoreM(uint8_t builtin);
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_FoldConsts(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Replay(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Replay(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_CoreM(uint8_t builtin);
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Util_FoldConsts(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Replay(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_CoreM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_FoldConsts(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Replay(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Replay(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Replay(builtin);
}
#ifdef __cplusplus
}
#endif
