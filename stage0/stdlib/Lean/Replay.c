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
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
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
static lean_once_cell_t l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0;
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
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(lean_object* v_name_1_, lean_object* v_a_2_){
_start:
{
lean_object* v___x_4_; lean_object* v_remaining_5_; uint8_t v___x_6_; 
v___x_4_ = lean_st_ref_get(v_a_2_);
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
v___x_9_ = lean_st_ref_take(v_a_2_);
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
v___x_22_ = lean_st_ref_put(v_a_2_, v___x_21_);
v___x_23_ = lean_box(v___x_6_);
v___x_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_24_, 0, v___x_23_);
return v___x_24_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg___boxed(lean_object* v_name_27_, lean_object* v_a_28_, lean_object* v_a_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(v_name_27_, v_a_28_);
lean_dec(v_a_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo(lean_object* v_name_31_, lean_object* v_a_32_, lean_object* v_a_33_){
_start:
{
lean_object* v___x_35_; 
v___x_35_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(v_name_31_, v_a_33_);
return v___x_35_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___boxed(lean_object* v_name_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_){
_start:
{
lean_object* v_res_40_; 
v_res_40_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo(v_name_36_, v_a_37_, v_a_38_);
lean_dec(v_a_38_);
lean_dec_ref(v_a_37_);
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
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg___boxed(lean_object* v_ex_48_, lean_object* v_a_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg(v_ex_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException(lean_object* v_ex_51_, lean_object* v_a_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___redArg(v_ex_51_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException___boxed(lean_object* v_ex_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_throwKernelException(v_ex_56_, v_a_57_, v_a_58_);
lean_dec(v_a_58_);
lean_dec_ref(v_a_57_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(lean_object* v_d_61_, lean_object* v_a_62_){
_start:
{
lean_object* v___x_64_; lean_object* v_env_65_; size_t v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; 
v___x_64_ = lean_st_ref_get(v_a_62_);
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
v___x_75_ = lean_st_ref_take(v_a_62_);
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
v___x_86_ = lean_st_ref_put(v_a_62_, v___x_85_);
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
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg___boxed(lean_object* v_d_94_, lean_object* v_a_95_, lean_object* v_a_96_){
_start:
{
lean_object* v_res_97_; 
v_res_97_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v_d_94_, v_a_95_);
lean_dec(v_a_95_);
lean_dec(v_d_94_);
return v_res_97_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl(lean_object* v_d_98_, lean_object* v_a_99_, lean_object* v_a_100_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v_d_98_, v_a_100_);
return v___x_102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___boxed(lean_object* v_d_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_){
_start:
{
lean_object* v_res_107_; 
v_res_107_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl(v_d_103_, v_a_104_, v_a_105_);
lean_dec(v_a_105_);
lean_dec_ref(v_a_104_);
lean_dec(v_d_103_);
return v_res_107_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0(void){
_start:
{
lean_object* v___x_108_; 
v___x_108_ = l_instMonadEIO___redArg();
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10(lean_object* v_msg_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___f_117_; lean_object* v___x_26537__overap_118_; lean_object* v___x_119_; 
v___x_113_ = lean_obj_once(&l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0, &l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0_once, _init_l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___closed__0);
v___x_114_ = l_StateRefT_x27_instMonad___redArg(v___x_113_);
v___x_115_ = lean_box(0);
v___x_116_ = l_instInhabitedOfMonad___redArg(v___x_114_, v___x_115_);
v___f_117_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_117_, 0, v___x_116_);
v___x_26537__overap_118_ = lean_panic_fn_borrowed(v___f_117_, v_msg_109_);
lean_dec_ref(v___f_117_);
lean_inc(v___y_111_);
lean_inc_ref(v___y_110_);
v___x_119_ = lean_apply_3(v___x_26537__overap_118_, v___y_110_, v___y_111_, lean_box(0));
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10___boxed(lean_object* v_msg_120_, lean_object* v___y_121_, lean_object* v___y_122_, lean_object* v___y_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10(v_msg_120_, v___y_121_, v___y_122_);
lean_dec(v___y_122_);
lean_dec_ref(v___y_121_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(lean_object* v_name_127_, lean_object* v_____r_128_, lean_object* v___y_129_, lean_object* v___y_130_){
_start:
{
lean_object* v___x_132_; lean_object* v_env_133_; lean_object* v_remaining_134_; lean_object* v_pending_135_; lean_object* v_postponedConstructors_136_; lean_object* v_postponedRecursors_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_148_; 
v___x_132_ = lean_st_ref_take(v___y_130_);
v_env_133_ = lean_ctor_get(v___x_132_, 0);
v_remaining_134_ = lean_ctor_get(v___x_132_, 1);
v_pending_135_ = lean_ctor_get(v___x_132_, 2);
v_postponedConstructors_136_ = lean_ctor_get(v___x_132_, 3);
v_postponedRecursors_137_ = lean_ctor_get(v___x_132_, 4);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_148_ == 0)
{
v___x_139_ = v___x_132_;
v_isShared_140_ = v_isSharedCheck_148_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_postponedRecursors_137_);
lean_inc(v_postponedConstructors_136_);
lean_inc(v_pending_135_);
lean_inc(v_remaining_134_);
lean_inc(v_env_133_);
lean_dec(v___x_132_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_148_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_143_; 
v___x_141_ = l_Lean_NameSet_erase(v_pending_135_, v_name_127_);
if (v_isShared_140_ == 0)
{
lean_ctor_set(v___x_139_, 2, v___x_141_);
v___x_143_ = v___x_139_;
goto v_reusejp_142_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_env_133_);
lean_ctor_set(v_reuseFailAlloc_147_, 1, v_remaining_134_);
lean_ctor_set(v_reuseFailAlloc_147_, 2, v___x_141_);
lean_ctor_set(v_reuseFailAlloc_147_, 3, v_postponedConstructors_136_);
lean_ctor_set(v_reuseFailAlloc_147_, 4, v_postponedRecursors_137_);
v___x_143_ = v_reuseFailAlloc_147_;
goto v_reusejp_142_;
}
v_reusejp_142_:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = lean_st_ref_put(v___y_130_, v___x_143_);
v___x_145_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___closed__0));
v___x_146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
return v___x_146_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___boxed(lean_object* v_name_149_, lean_object* v_____r_150_, lean_object* v___y_151_, lean_object* v___y_152_, lean_object* v___y_153_){
_start:
{
lean_object* v_res_154_; 
v_res_154_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_149_, v_____r_150_, v___y_151_, v___y_152_);
lean_dec(v___y_152_);
lean_dec_ref(v___y_151_);
lean_dec(v_name_149_);
return v_res_154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1(lean_object* v_val_155_, lean_object* v___f_156_, lean_object* v_____r_157_, lean_object* v___y_158_, lean_object* v___y_159_){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_161_, 0, v_val_155_);
v___x_162_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_161_, v___y_159_);
lean_dec_ref_known(v___x_161_, 1);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_164_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_a_163_);
lean_dec_ref_known(v___x_162_, 1);
lean_inc(v___y_159_);
lean_inc_ref(v___y_158_);
v___x_164_ = lean_apply_4(v___f_156_, v_a_163_, v___y_158_, v___y_159_, lean_box(0));
return v___x_164_;
}
else
{
lean_object* v_a_165_; lean_object* v___x_167_; uint8_t v_isShared_168_; uint8_t v_isSharedCheck_172_; 
lean_dec_ref(v___f_156_);
v_a_165_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_172_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_172_ == 0)
{
v___x_167_ = v___x_162_;
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
else
{
lean_inc(v_a_165_);
lean_dec(v___x_162_);
v___x_167_ = lean_box(0);
v_isShared_168_ = v_isSharedCheck_172_;
goto v_resetjp_166_;
}
v_resetjp_166_:
{
lean_object* v___x_170_; 
if (v_isShared_168_ == 0)
{
v___x_170_ = v___x_167_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_171_; 
v_reuseFailAlloc_171_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_171_, 0, v_a_165_);
v___x_170_ = v_reuseFailAlloc_171_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
return v___x_170_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1___boxed(lean_object* v_val_173_, lean_object* v___f_174_, lean_object* v_____r_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1(v_val_173_, v___f_174_, v_____r_175_, v___y_176_, v___y_177_);
lean_dec(v___y_177_);
lean_dec_ref(v___y_176_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(lean_object* v___f_180_, lean_object* v_x_181_, lean_object* v___y_182_, lean_object* v___y_183_){
_start:
{
lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_185_ = lean_box(0);
lean_inc(v___y_183_);
lean_inc_ref(v___y_182_);
v___x_186_ = lean_apply_4(v___f_180_, v___x_185_, v___y_182_, v___y_183_, lean_box(0));
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2___boxed(lean_object* v___f_187_, lean_object* v_x_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_){
_start:
{
lean_object* v_res_192_; 
v_res_192_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(v___f_187_, v_x_188_, v___y_189_, v___y_190_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec(v_x_188_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(lean_object* v_a_193_, lean_object* v_x_194_){
_start:
{
if (lean_obj_tag(v_x_194_) == 0)
{
lean_object* v___x_195_; 
v___x_195_ = lean_box(0);
return v___x_195_;
}
else
{
lean_object* v_key_196_; lean_object* v_value_197_; lean_object* v_tail_198_; uint8_t v___x_199_; 
v_key_196_ = lean_ctor_get(v_x_194_, 0);
v_value_197_ = lean_ctor_get(v_x_194_, 1);
v_tail_198_ = lean_ctor_get(v_x_194_, 2);
v___x_199_ = lean_name_eq(v_key_196_, v_a_193_);
if (v___x_199_ == 0)
{
v_x_194_ = v_tail_198_;
goto _start;
}
else
{
lean_object* v___x_201_; 
lean_inc(v_value_197_);
v___x_201_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_201_, 0, v_value_197_);
return v___x_201_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg___boxed(lean_object* v_a_202_, lean_object* v_x_203_){
_start:
{
lean_object* v_res_204_; 
v_res_204_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(v_a_202_, v_x_203_);
lean_dec(v_x_203_);
lean_dec(v_a_202_);
return v_res_204_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(lean_object* v_m_205_, lean_object* v_a_206_){
_start:
{
lean_object* v_buckets_207_; lean_object* v___x_208_; uint64_t v___y_210_; 
v_buckets_207_ = lean_ctor_get(v_m_205_, 1);
v___x_208_ = lean_array_get_size(v_buckets_207_);
if (lean_obj_tag(v_a_206_) == 0)
{
uint64_t v___x_224_; 
v___x_224_ = 1723ULL;
v___y_210_ = v___x_224_;
goto v___jp_209_;
}
else
{
uint64_t v_hash_225_; 
v_hash_225_ = lean_ctor_get_uint64(v_a_206_, sizeof(void*)*2);
v___y_210_ = v_hash_225_;
goto v___jp_209_;
}
v___jp_209_:
{
uint64_t v___x_211_; uint64_t v___x_212_; uint64_t v_fold_213_; uint64_t v___x_214_; uint64_t v___x_215_; uint64_t v___x_216_; size_t v___x_217_; size_t v___x_218_; size_t v___x_219_; size_t v___x_220_; size_t v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_211_ = 32ULL;
v___x_212_ = lean_uint64_shift_right(v___y_210_, v___x_211_);
v_fold_213_ = lean_uint64_xor(v___y_210_, v___x_212_);
v___x_214_ = 16ULL;
v___x_215_ = lean_uint64_shift_right(v_fold_213_, v___x_214_);
v___x_216_ = lean_uint64_xor(v_fold_213_, v___x_215_);
v___x_217_ = lean_uint64_to_usize(v___x_216_);
v___x_218_ = lean_usize_of_nat(v___x_208_);
v___x_219_ = ((size_t)1ULL);
v___x_220_ = lean_usize_sub(v___x_218_, v___x_219_);
v___x_221_ = lean_usize_land(v___x_217_, v___x_220_);
v___x_222_ = lean_array_uget_borrowed(v_buckets_207_, v___x_221_);
v___x_223_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(v_a_206_, v___x_222_);
return v___x_223_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg___boxed(lean_object* v_m_226_, lean_object* v_a_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v_m_226_, v_a_227_);
lean_dec(v_a_227_);
lean_dec_ref(v_m_226_);
return v_res_228_;
}
}
LEAN_EXPORT uint8_t l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(lean_object* v_x_229_, lean_object* v_x_230_){
_start:
{
if (lean_obj_tag(v_x_229_) == 0)
{
if (lean_obj_tag(v_x_230_) == 0)
{
uint8_t v___x_231_; 
v___x_231_ = 1;
return v___x_231_;
}
else
{
uint8_t v___x_232_; 
v___x_232_ = 0;
return v___x_232_;
}
}
else
{
if (lean_obj_tag(v_x_230_) == 0)
{
uint8_t v___x_233_; 
v___x_233_ = 0;
return v___x_233_;
}
else
{
lean_object* v_head_234_; lean_object* v_tail_235_; lean_object* v_head_236_; lean_object* v_tail_237_; uint8_t v___x_238_; 
v_head_234_ = lean_ctor_get(v_x_229_, 0);
v_tail_235_ = lean_ctor_get(v_x_229_, 1);
v_head_236_ = lean_ctor_get(v_x_230_, 0);
v_tail_237_ = lean_ctor_get(v_x_230_, 1);
v___x_238_ = lean_name_eq(v_head_234_, v_head_236_);
if (v___x_238_ == 0)
{
return v___x_238_;
}
else
{
v_x_229_ = v_tail_235_;
v_x_230_ = v_tail_237_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4___boxed(lean_object* v_x_240_, lean_object* v_x_241_){
_start:
{
uint8_t v_res_242_; lean_object* v_r_243_; 
v_res_242_ = l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(v_x_240_, v_x_241_);
lean_dec(v_x_241_);
lean_dec(v_x_240_);
v_r_243_ = lean_box(v_res_242_);
return v_r_243_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(lean_object* v_as_x27_244_, lean_object* v_b_245_, lean_object* v___y_246_){
_start:
{
if (lean_obj_tag(v_as_x27_244_) == 0)
{
lean_object* v___x_248_; 
v___x_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_248_, 0, v_b_245_);
return v___x_248_;
}
else
{
lean_object* v_head_249_; lean_object* v_tail_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v_env_253_; lean_object* v_remaining_254_; lean_object* v_pending_255_; lean_object* v_postponedConstructors_256_; lean_object* v_postponedRecursors_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_269_; 
v_head_249_ = lean_ctor_get(v_as_x27_244_, 0);
v_tail_250_ = lean_ctor_get(v_as_x27_244_, 1);
v___x_251_ = lean_box(0);
v___x_252_ = lean_st_ref_take(v___y_246_);
v_env_253_ = lean_ctor_get(v___x_252_, 0);
v_remaining_254_ = lean_ctor_get(v___x_252_, 1);
v_pending_255_ = lean_ctor_get(v___x_252_, 2);
v_postponedConstructors_256_ = lean_ctor_get(v___x_252_, 3);
v_postponedRecursors_257_ = lean_ctor_get(v___x_252_, 4);
v_isSharedCheck_269_ = !lean_is_exclusive(v___x_252_);
if (v_isSharedCheck_269_ == 0)
{
v___x_259_ = v___x_252_;
v_isShared_260_ = v_isSharedCheck_269_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_postponedRecursors_257_);
lean_inc(v_postponedConstructors_256_);
lean_inc(v_pending_255_);
lean_inc(v_remaining_254_);
lean_inc(v_env_253_);
lean_dec(v___x_252_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_269_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_265_; 
v___x_261_ = l_Lean_ConstantInfo_name(v_head_249_);
v___x_262_ = l_Lean_NameSet_erase(v_remaining_254_, v___x_261_);
v___x_263_ = l_Lean_NameSet_erase(v_pending_255_, v___x_261_);
lean_dec(v___x_261_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 2, v___x_263_);
lean_ctor_set(v___x_259_, 1, v___x_262_);
v___x_265_ = v___x_259_;
goto v_reusejp_264_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v_env_253_);
lean_ctor_set(v_reuseFailAlloc_268_, 1, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_268_, 2, v___x_263_);
lean_ctor_set(v_reuseFailAlloc_268_, 3, v_postponedConstructors_256_);
lean_ctor_set(v_reuseFailAlloc_268_, 4, v_postponedRecursors_257_);
v___x_265_ = v_reuseFailAlloc_268_;
goto v_reusejp_264_;
}
v_reusejp_264_:
{
lean_object* v___x_266_; 
v___x_266_ = lean_st_ref_put(v___y_246_, v___x_265_);
v_as_x27_244_ = v_tail_250_;
v_b_245_ = v___x_251_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg___boxed(lean_object* v_as_x27_270_, lean_object* v_b_271_, lean_object* v___y_272_, lean_object* v___y_273_){
_start:
{
lean_object* v_res_274_; 
v_res_274_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(v_as_x27_270_, v_b_271_, v___y_272_);
lean_dec(v___y_272_);
lean_dec(v_as_x27_270_);
return v_res_274_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1_spec__4(lean_object* v_msg_275_){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = l_Lean_instInhabitedConstantInfo_default;
v___x_277_ = lean_panic_fn_borrowed(v___x_276_, v_msg_275_);
return v___x_277_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3(void){
_start:
{
lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; 
v___x_281_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__2));
v___x_282_ = lean_unsigned_to_nat(11u);
v___x_283_ = lean_unsigned_to_nat(163u);
v___x_284_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__1));
v___x_285_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__0));
v___x_286_ = l_mkPanicMessageWithDecl(v___x_285_, v___x_284_, v___x_283_, v___x_282_, v___x_281_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1(lean_object* v_a_287_, lean_object* v_x_288_){
_start:
{
if (lean_obj_tag(v_x_288_) == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
v___x_289_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___closed__3);
v___x_290_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1_spec__4(v___x_289_);
return v___x_290_;
}
else
{
lean_object* v_key_291_; lean_object* v_value_292_; lean_object* v_tail_293_; uint8_t v___x_294_; 
v_key_291_ = lean_ctor_get(v_x_288_, 0);
v_value_292_ = lean_ctor_get(v_x_288_, 1);
v_tail_293_ = lean_ctor_get(v_x_288_, 2);
v___x_294_ = lean_name_eq(v_key_291_, v_a_287_);
if (v___x_294_ == 0)
{
v_x_288_ = v_tail_293_;
goto _start;
}
else
{
lean_inc(v_value_292_);
return v_value_292_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1___boxed(lean_object* v_a_296_, lean_object* v_x_297_){
_start:
{
lean_object* v_res_298_; 
v_res_298_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1(v_a_296_, v_x_297_);
lean_dec(v_x_297_);
lean_dec(v_a_296_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1(lean_object* v_m_299_, lean_object* v_a_300_){
_start:
{
lean_object* v_buckets_301_; lean_object* v___x_302_; uint64_t v___y_304_; 
v_buckets_301_ = lean_ctor_get(v_m_299_, 1);
v___x_302_ = lean_array_get_size(v_buckets_301_);
if (lean_obj_tag(v_a_300_) == 0)
{
uint64_t v___x_318_; 
v___x_318_ = 1723ULL;
v___y_304_ = v___x_318_;
goto v___jp_303_;
}
else
{
uint64_t v_hash_319_; 
v_hash_319_ = lean_ctor_get_uint64(v_a_300_, sizeof(void*)*2);
v___y_304_ = v_hash_319_;
goto v___jp_303_;
}
v___jp_303_:
{
uint64_t v___x_305_; uint64_t v___x_306_; uint64_t v_fold_307_; uint64_t v___x_308_; uint64_t v___x_309_; uint64_t v___x_310_; size_t v___x_311_; size_t v___x_312_; size_t v___x_313_; size_t v___x_314_; size_t v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; 
v___x_305_ = 32ULL;
v___x_306_ = lean_uint64_shift_right(v___y_304_, v___x_305_);
v_fold_307_ = lean_uint64_xor(v___y_304_, v___x_306_);
v___x_308_ = 16ULL;
v___x_309_ = lean_uint64_shift_right(v_fold_307_, v___x_308_);
v___x_310_ = lean_uint64_xor(v_fold_307_, v___x_309_);
v___x_311_ = lean_uint64_to_usize(v___x_310_);
v___x_312_ = lean_usize_of_nat(v___x_302_);
v___x_313_ = ((size_t)1ULL);
v___x_314_ = lean_usize_sub(v___x_312_, v___x_313_);
v___x_315_ = lean_usize_land(v___x_311_, v___x_314_);
v___x_316_ = lean_array_uget_borrowed(v_buckets_301_, v___x_315_);
v___x_317_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1_spec__1(v_a_300_, v___x_316_);
return v___x_317_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1___boxed(lean_object* v_m_320_, lean_object* v_a_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1(v_m_320_, v_a_321_);
lean_dec(v_a_321_);
lean_dec_ref(v_m_320_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(lean_object* v_x_323_, lean_object* v_x_324_, lean_object* v___y_325_){
_start:
{
if (lean_obj_tag(v_x_323_) == 0)
{
lean_object* v___x_327_; lean_object* v___x_328_; 
v___x_327_ = l_List_reverse___redArg(v_x_324_);
v___x_328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_328_, 0, v___x_327_);
return v___x_328_;
}
else
{
lean_object* v_head_329_; lean_object* v_tail_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_339_; 
v_head_329_ = lean_ctor_get(v_x_323_, 0);
v_tail_330_ = lean_ctor_get(v_x_323_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v_x_323_);
if (v_isSharedCheck_339_ == 0)
{
v___x_332_ = v_x_323_;
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_tail_330_);
lean_inc(v_head_329_);
lean_dec(v_x_323_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_334_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__1(v___y_325_, v_head_329_);
lean_dec(v_head_329_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v_x_324_);
lean_ctor_set(v___x_332_, 0, v___x_334_);
v___x_336_ = v___x_332_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_x_324_);
v___x_336_ = v_reuseFailAlloc_338_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
v_x_323_ = v_tail_330_;
v_x_324_ = v___x_336_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg___boxed(lean_object* v_x_340_, lean_object* v_x_341_, lean_object* v___y_342_, lean_object* v___y_343_){
_start:
{
lean_object* v_res_344_; 
v_res_344_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_x_340_, v_x_341_, v___y_342_);
lean_dec_ref(v___y_342_);
return v_res_344_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7(lean_object* v_x_345_, lean_object* v_x_346_, lean_object* v___y_347_, lean_object* v___y_348_){
_start:
{
if (lean_obj_tag(v_x_345_) == 0)
{
lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_350_ = l_List_reverse___redArg(v_x_346_);
v___x_351_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_351_, 0, v___x_350_);
return v___x_351_;
}
else
{
lean_object* v_head_352_; lean_object* v_tail_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_367_; 
v_head_352_ = lean_ctor_get(v_x_345_, 0);
v_tail_353_ = lean_ctor_get(v_x_345_, 1);
v_isSharedCheck_367_ = !lean_is_exclusive(v_x_345_);
if (v_isSharedCheck_367_ == 0)
{
v___x_355_ = v_x_345_;
v_isShared_356_ = v_isSharedCheck_367_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_tail_353_);
lean_inc(v_head_352_);
lean_dec(v_x_345_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_367_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_357_; lean_object* v_ctors_358_; lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v_a_361_; lean_object* v___x_362_; lean_object* v___x_364_; 
v___x_357_ = l_Lean_ConstantInfo_inductiveVal_x21(v_head_352_);
v_ctors_358_ = lean_ctor_get(v___x_357_, 4);
lean_inc(v_ctors_358_);
lean_dec_ref(v___x_357_);
v___x_359_ = lean_box(0);
v___x_360_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_ctors_358_, v___x_359_, v___y_347_);
v_a_361_ = lean_ctor_get(v___x_360_, 0);
lean_inc(v_a_361_);
lean_dec_ref(v___x_360_);
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v_head_352_);
lean_ctor_set(v___x_362_, 1, v_a_361_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 1, v_x_346_);
lean_ctor_set(v___x_355_, 0, v___x_362_);
v___x_364_ = v___x_355_;
goto v_reusejp_363_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v___x_362_);
lean_ctor_set(v_reuseFailAlloc_366_, 1, v_x_346_);
v___x_364_ = v_reuseFailAlloc_366_;
goto v_reusejp_363_;
}
v_reusejp_363_:
{
v_x_345_ = v_tail_353_;
v_x_346_ = v___x_364_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7___boxed(lean_object* v_x_368_, lean_object* v_x_369_, lean_object* v___y_370_, lean_object* v___y_371_, lean_object* v___y_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7(v_x_368_, v_x_369_, v___y_370_, v___y_371_);
lean_dec(v___y_371_);
lean_dec_ref(v___y_370_);
return v_res_373_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__0(lean_object* v_a_374_, lean_object* v_a_375_){
_start:
{
if (lean_obj_tag(v_a_374_) == 0)
{
lean_object* v___x_376_; 
v___x_376_ = l_List_reverse___redArg(v_a_375_);
return v___x_376_;
}
else
{
lean_object* v_head_377_; lean_object* v_tail_378_; lean_object* v___x_380_; uint8_t v_isShared_381_; uint8_t v_isSharedCheck_389_; 
v_head_377_ = lean_ctor_get(v_a_374_, 0);
v_tail_378_ = lean_ctor_get(v_a_374_, 1);
v_isSharedCheck_389_ = !lean_is_exclusive(v_a_374_);
if (v_isSharedCheck_389_ == 0)
{
v___x_380_ = v_a_374_;
v_isShared_381_ = v_isSharedCheck_389_;
goto v_resetjp_379_;
}
else
{
lean_inc(v_tail_378_);
lean_inc(v_head_377_);
lean_dec(v_a_374_);
v___x_380_ = lean_box(0);
v_isShared_381_ = v_isSharedCheck_389_;
goto v_resetjp_379_;
}
v_resetjp_379_:
{
lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_386_; 
v___x_382_ = l_Lean_ConstantInfo_name(v_head_377_);
v___x_383_ = l_Lean_ConstantInfo_type(v_head_377_);
lean_dec(v_head_377_);
v___x_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_382_);
lean_ctor_set(v___x_384_, 1, v___x_383_);
if (v_isShared_381_ == 0)
{
lean_ctor_set(v___x_380_, 1, v_a_375_);
lean_ctor_set(v___x_380_, 0, v___x_384_);
v___x_386_ = v___x_380_;
goto v_reusejp_385_;
}
else
{
lean_object* v_reuseFailAlloc_388_; 
v_reuseFailAlloc_388_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_388_, 0, v___x_384_);
lean_ctor_set(v_reuseFailAlloc_388_, 1, v_a_375_);
v___x_386_ = v_reuseFailAlloc_388_;
goto v_reusejp_385_;
}
v_reusejp_385_:
{
v_a_374_ = v_tail_378_;
v_a_375_ = v___x_386_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__9(lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
if (lean_obj_tag(v_a_390_) == 0)
{
lean_object* v___x_392_; 
v___x_392_ = l_List_reverse___redArg(v_a_391_);
return v___x_392_;
}
else
{
lean_object* v_head_393_; lean_object* v_tail_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_409_; 
v_head_393_ = lean_ctor_get(v_a_390_, 0);
v_tail_394_ = lean_ctor_get(v_a_390_, 1);
v_isSharedCheck_409_ = !lean_is_exclusive(v_a_390_);
if (v_isSharedCheck_409_ == 0)
{
v___x_396_ = v_a_390_;
v_isShared_397_ = v_isSharedCheck_409_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_tail_394_);
lean_inc(v_head_393_);
lean_dec(v_a_390_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_409_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v_fst_398_; lean_object* v_snd_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_406_; 
v_fst_398_ = lean_ctor_get(v_head_393_, 0);
lean_inc(v_fst_398_);
v_snd_399_ = lean_ctor_get(v_head_393_, 1);
lean_inc(v_snd_399_);
lean_dec(v_head_393_);
v___x_400_ = l_Lean_ConstantInfo_name(v_fst_398_);
v___x_401_ = l_Lean_ConstantInfo_type(v_fst_398_);
lean_dec(v_fst_398_);
v___x_402_ = lean_box(0);
v___x_403_ = l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__0(v_snd_399_, v___x_402_);
v___x_404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_404_, 0, v___x_400_);
lean_ctor_set(v___x_404_, 1, v___x_401_);
lean_ctor_set(v___x_404_, 2, v___x_403_);
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 1, v_a_391_);
lean_ctor_set(v___x_396_, 0, v___x_404_);
v___x_406_ = v___x_396_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_408_, 1, v_a_391_);
v___x_406_ = v_reuseFailAlloc_408_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
v_a_390_ = v_tail_394_;
v_a_391_ = v___x_406_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(lean_object* v_as_x27_415_, lean_object* v_b_416_, lean_object* v___y_417_, lean_object* v___y_418_){
_start:
{
if (lean_obj_tag(v_as_x27_415_) == 0)
{
lean_object* v___x_420_; 
v___x_420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_420_, 0, v_b_416_);
return v___x_420_;
}
else
{
lean_object* v_head_421_; lean_object* v_tail_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; 
v_head_421_ = lean_ctor_get(v_as_x27_415_, 0);
v_tail_422_ = lean_ctor_get(v_as_x27_415_, 1);
v___x_423_ = lean_box(0);
lean_inc(v_head_421_);
v___x_424_ = l_Lean_ConstantInfo_getUsedConstantsAsSet(v_head_421_);
v___x_425_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(v___x_424_, v___y_417_, v___y_418_);
if (lean_obj_tag(v___x_425_) == 0)
{
lean_dec_ref_known(v___x_425_, 1);
v_as_x27_415_ = v_tail_422_;
v_b_416_ = v___x_423_;
goto _start;
}
else
{
return v___x_425_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(lean_object* v_as_x27_427_, lean_object* v_b_428_, lean_object* v___y_429_, lean_object* v___y_430_){
_start:
{
if (lean_obj_tag(v_as_x27_427_) == 0)
{
lean_object* v___x_432_; 
v___x_432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_432_, 0, v_b_428_);
return v___x_432_;
}
else
{
lean_object* v_head_433_; lean_object* v_tail_434_; lean_object* v_snd_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v_head_433_ = lean_ctor_get(v_as_x27_427_, 0);
v_tail_434_ = lean_ctor_get(v_as_x27_427_, 1);
v_snd_435_ = lean_ctor_get(v_head_433_, 1);
v___x_436_ = lean_box(0);
v___x_437_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(v_snd_435_, v___x_436_, v___y_429_, v___y_430_);
if (lean_obj_tag(v___x_437_) == 0)
{
lean_dec_ref_known(v___x_437_, 1);
v_as_x27_427_ = v_tail_434_;
v_b_428_ = v___x_436_;
goto _start;
}
else
{
return v___x_437_;
}
}
}
}
static lean_object* _init_l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_442_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__6));
v___x_443_ = lean_unsigned_to_nat(50u);
v___x_444_ = lean_unsigned_to_nat(76u);
v___x_445_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__5));
v___x_446_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__4));
v___x_447_ = l_mkPanicMessageWithDecl(v___x_446_, v___x_445_, v___x_444_, v___x_443_, v___x_442_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(lean_object* v_name_448_, lean_object* v_a_449_, lean_object* v_a_450_){
_start:
{
lean_object* v___f_452_; lean_object* v___x_453_; 
lean_inc_n(v_name_448_, 2);
v___f_452_ = lean_alloc_closure((void*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0___boxed), 5, 1);
lean_closure_set(v___f_452_, 0, v_name_448_);
v___x_453_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_isTodo___redArg(v_name_448_, v_a_450_);
if (lean_obj_tag(v___x_453_) == 0)
{
lean_object* v_a_454_; lean_object* v___x_456_; uint8_t v_isShared_457_; uint8_t v_isSharedCheck_653_; 
v_a_454_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_653_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_653_ == 0)
{
v___x_456_ = v___x_453_;
v_isShared_457_ = v_isSharedCheck_653_;
goto v_resetjp_455_;
}
else
{
lean_inc(v_a_454_);
lean_dec(v___x_453_);
v___x_456_ = lean_box(0);
v_isShared_457_ = v_isSharedCheck_653_;
goto v_resetjp_455_;
}
v_resetjp_455_:
{
uint8_t v___x_458_; 
v___x_458_ = lean_unbox(v_a_454_);
lean_dec(v_a_454_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; lean_object* v___x_461_; 
lean_dec_ref(v___f_452_);
lean_dec(v_name_448_);
v___x_459_ = lean_box(0);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_459_);
v___x_461_ = v___x_456_;
goto v_reusejp_460_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_459_);
v___x_461_ = v_reuseFailAlloc_462_;
goto v_reusejp_460_;
}
v_reusejp_460_:
{
return v___x_461_;
}
}
else
{
lean_object* v___x_463_; 
v___x_463_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v_a_449_, v_name_448_);
if (lean_obj_tag(v___x_463_) == 1)
{
lean_object* v_val_464_; lean_object* v___x_466_; uint8_t v_isShared_467_; uint8_t v_isSharedCheck_650_; 
v_val_464_ = lean_ctor_get(v___x_463_, 0);
v_isSharedCheck_650_ = !lean_is_exclusive(v___x_463_);
if (v_isSharedCheck_650_ == 0)
{
v___x_466_ = v___x_463_;
v_isShared_467_ = v_isSharedCheck_650_;
goto v_resetjp_465_;
}
else
{
lean_inc(v_val_464_);
lean_dec(v___x_463_);
v___x_466_ = lean_box(0);
v_isShared_467_ = v_isSharedCheck_650_;
goto v_resetjp_465_;
}
v_resetjp_465_:
{
lean_object* v___x_468_; lean_object* v___x_469_; 
lean_inc(v_val_464_);
v___x_468_ = l_Lean_ConstantInfo_getUsedConstantsAsSet(v_val_464_);
v___x_469_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(v___x_468_, v_a_449_, v_a_450_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v___x_471_; uint8_t v_isShared_472_; uint8_t v_isSharedCheck_648_; 
v_isSharedCheck_648_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_648_ == 0)
{
lean_object* v_unused_649_; 
v_unused_649_ = lean_ctor_get(v___x_469_, 0);
lean_dec(v_unused_649_);
v___x_471_ = v___x_469_;
v_isShared_472_ = v_isSharedCheck_648_;
goto v_resetjp_470_;
}
else
{
lean_dec(v___x_469_);
v___x_471_ = lean_box(0);
v_isShared_472_ = v_isSharedCheck_648_;
goto v_resetjp_470_;
}
v_resetjp_470_:
{
lean_object* v___x_473_; lean_object* v_pending_474_; uint8_t v___x_475_; lean_object* v_a_477_; lean_object* v___y_492_; 
v___x_473_ = lean_st_ref_get(v_a_450_);
v_pending_474_ = lean_ctor_get(v___x_473_, 2);
lean_inc(v_pending_474_);
lean_dec(v___x_473_);
v___x_475_ = l_Lean_NameSet_contains(v_pending_474_, v_name_448_);
lean_dec(v_pending_474_);
if (v___x_475_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_505_; 
lean_del_object(v___x_471_);
lean_del_object(v___x_466_);
lean_dec(v_val_464_);
lean_dec_ref(v___f_452_);
lean_dec(v_name_448_);
v___x_503_ = lean_box(0);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_503_);
v___x_505_ = v___x_456_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
else
{
switch(lean_obj_tag(v_val_464_))
{
case 0:
{
lean_object* v_val_507_; lean_object* v___x_509_; uint8_t v_isShared_510_; uint8_t v_isSharedCheck_518_; 
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v_val_507_ = lean_ctor_get(v_val_464_, 0);
v_isSharedCheck_518_ = !lean_is_exclusive(v_val_464_);
if (v_isSharedCheck_518_ == 0)
{
v___x_509_ = v_val_464_;
v_isShared_510_ = v_isSharedCheck_518_;
goto v_resetjp_508_;
}
else
{
lean_inc(v_val_507_);
lean_dec(v_val_464_);
v___x_509_ = lean_box(0);
v_isShared_510_ = v_isSharedCheck_518_;
goto v_resetjp_508_;
}
v_resetjp_508_:
{
lean_object* v___x_512_; 
if (v_isShared_510_ == 0)
{
v___x_512_ = v___x_509_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_517_; 
v_reuseFailAlloc_517_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_517_, 0, v_val_507_);
v___x_512_ = v_reuseFailAlloc_517_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
lean_object* v___x_513_; 
v___x_513_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_512_, v_a_450_);
lean_dec_ref(v___x_512_);
if (lean_obj_tag(v___x_513_) == 0)
{
lean_object* v_a_514_; lean_object* v___x_515_; 
v_a_514_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_514_);
lean_dec_ref_known(v___x_513_, 1);
v___x_515_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_448_, v_a_514_, v_a_449_, v_a_450_);
v___y_492_ = v___x_515_;
goto v___jp_491_;
}
else
{
lean_object* v_a_516_; 
v_a_516_ = lean_ctor_get(v___x_513_, 0);
lean_inc(v_a_516_);
lean_dec_ref_known(v___x_513_, 1);
v_a_477_ = v_a_516_;
goto v___jp_476_;
}
}
}
}
case 1:
{
lean_object* v_val_519_; lean_object* v___x_521_; uint8_t v_isShared_522_; uint8_t v_isSharedCheck_530_; 
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v_val_519_ = lean_ctor_get(v_val_464_, 0);
v_isSharedCheck_530_ = !lean_is_exclusive(v_val_464_);
if (v_isSharedCheck_530_ == 0)
{
v___x_521_ = v_val_464_;
v_isShared_522_ = v_isSharedCheck_530_;
goto v_resetjp_520_;
}
else
{
lean_inc(v_val_519_);
lean_dec(v_val_464_);
v___x_521_ = lean_box(0);
v_isShared_522_ = v_isSharedCheck_530_;
goto v_resetjp_520_;
}
v_resetjp_520_:
{
lean_object* v___x_524_; 
if (v_isShared_522_ == 0)
{
v___x_524_ = v___x_521_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_529_; 
v_reuseFailAlloc_529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_529_, 0, v_val_519_);
v___x_524_ = v_reuseFailAlloc_529_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
lean_object* v___x_525_; 
v___x_525_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_524_, v_a_450_);
lean_dec_ref(v___x_524_);
if (lean_obj_tag(v___x_525_) == 0)
{
lean_object* v_a_526_; lean_object* v___x_527_; 
v_a_526_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_526_);
lean_dec_ref_known(v___x_525_, 1);
v___x_527_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_448_, v_a_526_, v_a_449_, v_a_450_);
v___y_492_ = v___x_527_;
goto v___jp_491_;
}
else
{
lean_object* v_a_528_; 
v_a_528_ = lean_ctor_get(v___x_525_, 0);
lean_inc(v_a_528_);
lean_dec_ref_known(v___x_525_, 1);
v_a_477_ = v_a_528_;
goto v___jp_476_;
}
}
}
}
case 2:
{
lean_object* v_val_531_; lean_object* v___f_532_; lean_object* v___x_533_; lean_object* v_env_537_; lean_object* v___x_538_; lean_object* v___x_539_; 
v_val_531_ = lean_ctor_get(v_val_464_, 0);
lean_inc_ref_n(v_val_531_, 2);
lean_inc_ref(v___f_452_);
v___f_532_ = lean_alloc_closure((void*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1___boxed), 6, 2);
lean_closure_set(v___f_532_, 0, v_val_531_);
lean_closure_set(v___f_532_, 1, v___f_452_);
v___x_533_ = lean_st_ref_get(v_a_450_);
v_env_537_ = lean_ctor_get(v___x_533_, 0);
lean_inc_ref(v_env_537_);
lean_dec(v___x_533_);
v___x_538_ = l_Lean_ConstantInfo_name(v_val_464_);
lean_dec_ref_known(v_val_464_, 1);
v___x_539_ = lean_environment_find(v_env_537_, v___x_538_);
if (lean_obj_tag(v___x_539_) == 1)
{
lean_object* v_val_540_; 
v_val_540_ = lean_ctor_get(v___x_539_, 0);
lean_inc(v_val_540_);
if (lean_obj_tag(v_val_540_) == 2)
{
lean_object* v_toConstantVal_541_; lean_object* v_val_542_; lean_object* v_toConstantVal_543_; lean_object* v_all_544_; lean_object* v_name_545_; lean_object* v_levelParams_546_; lean_object* v_type_547_; lean_object* v_all_548_; lean_object* v_name_549_; lean_object* v_levelParams_550_; lean_object* v_type_551_; uint8_t v___y_553_; uint8_t v___x_560_; 
lean_dec_ref_known(v___x_539_, 1);
lean_dec_ref(v___f_532_);
v_toConstantVal_541_ = lean_ctor_get(v_val_531_, 0);
v_val_542_ = lean_ctor_get(v_val_540_, 0);
lean_inc_ref(v_val_542_);
lean_dec_ref_known(v_val_540_, 1);
v_toConstantVal_543_ = lean_ctor_get(v_val_542_, 0);
lean_inc_ref(v_toConstantVal_543_);
v_all_544_ = lean_ctor_get(v_val_531_, 2);
v_name_545_ = lean_ctor_get(v_toConstantVal_541_, 0);
v_levelParams_546_ = lean_ctor_get(v_toConstantVal_541_, 1);
v_type_547_ = lean_ctor_get(v_toConstantVal_541_, 2);
v_all_548_ = lean_ctor_get(v_val_542_, 2);
lean_inc(v_all_548_);
lean_dec_ref(v_val_542_);
v_name_549_ = lean_ctor_get(v_toConstantVal_543_, 0);
lean_inc(v_name_549_);
v_levelParams_550_ = lean_ctor_get(v_toConstantVal_543_, 1);
lean_inc(v_levelParams_550_);
v_type_551_ = lean_ctor_get(v_toConstantVal_543_, 2);
lean_inc_ref(v_type_551_);
lean_dec_ref(v_toConstantVal_543_);
v___x_560_ = lean_name_eq(v_name_545_, v_name_549_);
lean_dec(v_name_549_);
if (v___x_560_ == 0)
{
lean_dec_ref(v_type_551_);
v___y_553_ = v___x_560_;
goto v___jp_552_;
}
else
{
uint8_t v___x_561_; 
v___x_561_ = lean_expr_eqv(v_type_547_, v_type_551_);
lean_dec_ref(v_type_551_);
v___y_553_ = v___x_561_;
goto v___jp_552_;
}
v___jp_552_:
{
if (v___y_553_ == 0)
{
lean_dec(v_levelParams_550_);
lean_dec(v_all_548_);
lean_del_object(v___x_456_);
goto v___jp_534_;
}
else
{
uint8_t v___x_554_; 
v___x_554_ = l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(v_levelParams_546_, v_levelParams_550_);
lean_dec(v_levelParams_550_);
if (v___x_554_ == 0)
{
lean_dec(v_all_548_);
lean_del_object(v___x_456_);
goto v___jp_534_;
}
else
{
uint8_t v___x_555_; 
v___x_555_ = l_List_beq___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__4(v_all_544_, v_all_548_);
lean_dec(v_all_548_);
if (v___x_555_ == 0)
{
lean_del_object(v___x_456_);
goto v___jp_534_;
}
else
{
lean_object* v___x_556_; lean_object* v___x_558_; 
lean_dec_ref(v_val_531_);
lean_del_object(v___x_471_);
lean_del_object(v___x_466_);
lean_dec_ref(v___f_452_);
lean_dec(v_name_448_);
v___x_556_ = lean_box(0);
if (v_isShared_457_ == 0)
{
lean_ctor_set(v___x_456_, 0, v___x_556_);
v___x_558_ = v___x_456_;
goto v_reusejp_557_;
}
else
{
lean_object* v_reuseFailAlloc_559_; 
v_reuseFailAlloc_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_559_, 0, v___x_556_);
v___x_558_ = v_reuseFailAlloc_559_;
goto v_reusejp_557_;
}
v_reusejp_557_:
{
return v___x_558_;
}
}
}
}
}
}
else
{
lean_object* v___x_562_; 
lean_dec(v_val_540_);
lean_dec_ref(v_val_531_);
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v___x_562_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(v___f_532_, v___x_539_, v_a_449_, v_a_450_);
lean_dec_ref_known(v___x_539_, 1);
v___y_492_ = v___x_562_;
goto v___jp_491_;
}
}
else
{
lean_object* v___x_563_; 
lean_dec_ref(v_val_531_);
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v___x_563_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__2(v___f_532_, v___x_539_, v_a_449_, v_a_450_);
lean_dec(v___x_539_);
v___y_492_ = v___x_563_;
goto v___jp_491_;
}
v___jp_534_:
{
lean_object* v___x_535_; lean_object* v___x_536_; 
v___x_535_ = lean_box(0);
v___x_536_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__1(v_val_531_, v___f_452_, v___x_535_, v_a_449_, v_a_450_);
v___y_492_ = v___x_536_;
goto v___jp_491_;
}
}
case 3:
{
lean_object* v_val_564_; lean_object* v___x_566_; uint8_t v_isShared_567_; uint8_t v_isSharedCheck_575_; 
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v_val_564_ = lean_ctor_get(v_val_464_, 0);
v_isSharedCheck_575_ = !lean_is_exclusive(v_val_464_);
if (v_isSharedCheck_575_ == 0)
{
v___x_566_ = v_val_464_;
v_isShared_567_ = v_isSharedCheck_575_;
goto v_resetjp_565_;
}
else
{
lean_inc(v_val_564_);
lean_dec(v_val_464_);
v___x_566_ = lean_box(0);
v_isShared_567_ = v_isSharedCheck_575_;
goto v_resetjp_565_;
}
v_resetjp_565_:
{
lean_object* v___x_569_; 
if (v_isShared_567_ == 0)
{
v___x_569_ = v___x_566_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_574_; 
v_reuseFailAlloc_574_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_574_, 0, v_val_564_);
v___x_569_ = v_reuseFailAlloc_574_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
lean_object* v___x_570_; 
v___x_570_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_569_, v_a_450_);
lean_dec_ref(v___x_569_);
if (lean_obj_tag(v___x_570_) == 0)
{
lean_object* v_a_571_; lean_object* v___x_572_; 
v_a_571_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_571_);
lean_dec_ref_known(v___x_570_, 1);
v___x_572_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_448_, v_a_571_, v_a_449_, v_a_450_);
v___y_492_ = v___x_572_;
goto v___jp_491_;
}
else
{
lean_object* v_a_573_; 
v_a_573_ = lean_ctor_get(v___x_570_, 0);
lean_inc(v_a_573_);
lean_dec_ref_known(v___x_570_, 1);
v_a_477_ = v_a_573_;
goto v___jp_476_;
}
}
}
}
case 4:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
lean_dec_ref_known(v_val_464_, 1);
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v___x_576_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__3));
v___x_577_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(v___x_576_, v_a_449_, v_a_450_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_object* v___x_578_; lean_object* v___x_579_; 
lean_dec_ref_known(v___x_577_, 1);
v___x_578_ = lean_box(4);
v___x_579_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_578_, v_a_450_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_581_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_580_);
lean_dec_ref_known(v___x_579_, 1);
v___x_581_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_448_, v_a_580_, v_a_449_, v_a_450_);
v___y_492_ = v___x_581_;
goto v___jp_491_;
}
else
{
lean_object* v_a_582_; 
v_a_582_ = lean_ctor_get(v___x_579_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_579_, 1);
v_a_477_ = v_a_582_;
goto v___jp_476_;
}
}
else
{
lean_object* v_a_583_; 
v_a_583_ = lean_ctor_get(v___x_577_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_577_, 1);
v_a_477_ = v_a_583_;
goto v___jp_476_;
}
}
case 5:
{
lean_object* v_val_584_; lean_object* v_toConstantVal_585_; lean_object* v_numParams_586_; lean_object* v_all_587_; lean_object* v_levelParams_588_; lean_object* v___x_589_; lean_object* v___x_590_; 
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v_val_584_ = lean_ctor_get(v_val_464_, 0);
lean_inc_ref(v_val_584_);
lean_dec_ref_known(v_val_464_, 1);
v_toConstantVal_585_ = lean_ctor_get(v_val_584_, 0);
lean_inc_ref(v_toConstantVal_585_);
v_numParams_586_ = lean_ctor_get(v_val_584_, 1);
lean_inc(v_numParams_586_);
v_all_587_ = lean_ctor_get(v_val_584_, 3);
lean_inc(v_all_587_);
lean_dec_ref(v_val_584_);
v_levelParams_588_ = lean_ctor_get(v_toConstantVal_585_, 1);
lean_inc(v_levelParams_588_);
lean_dec_ref(v_toConstantVal_585_);
v___x_589_ = lean_box(0);
v___x_590_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_all_587_, v___x_589_, v_a_449_);
if (lean_obj_tag(v___x_590_) == 0)
{
lean_object* v_a_591_; lean_object* v___x_592_; lean_object* v___x_593_; 
v_a_591_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_591_);
lean_dec_ref_known(v___x_590_, 1);
v___x_592_ = lean_box(0);
v___x_593_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(v_a_591_, v___x_592_, v_a_450_);
if (lean_obj_tag(v___x_593_) == 0)
{
lean_object* v___x_594_; 
lean_dec_ref_known(v___x_593_, 1);
v___x_594_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__7(v_a_591_, v___x_589_, v_a_449_, v_a_450_);
if (lean_obj_tag(v___x_594_) == 0)
{
lean_object* v_a_595_; lean_object* v___x_596_; 
v_a_595_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_594_, 1);
v___x_596_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(v_a_595_, v___x_592_, v_a_449_, v_a_450_);
if (lean_obj_tag(v___x_596_) == 0)
{
lean_object* v___x_597_; uint8_t v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; 
lean_dec_ref_known(v___x_596_, 1);
v___x_597_ = l_List_mapTR_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__9(v_a_595_, v___x_589_);
v___x_598_ = 0;
v___x_599_ = lean_alloc_ctor(6, 3, 1);
lean_ctor_set(v___x_599_, 0, v_levelParams_588_);
lean_ctor_set(v___x_599_, 1, v_numParams_586_);
lean_ctor_set(v___x_599_, 2, v___x_597_);
lean_ctor_set_uint8(v___x_599_, sizeof(void*)*3, v___x_598_);
v___x_600_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_addDecl___redArg(v___x_599_, v_a_450_);
lean_dec_ref_known(v___x_599_, 3);
if (lean_obj_tag(v___x_600_) == 0)
{
lean_object* v_a_601_; lean_object* v___x_602_; 
v_a_601_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_601_);
lean_dec_ref_known(v___x_600_, 1);
v___x_602_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_448_, v_a_601_, v_a_449_, v_a_450_);
v___y_492_ = v___x_602_;
goto v___jp_491_;
}
else
{
lean_object* v_a_603_; 
v_a_603_ = lean_ctor_get(v___x_600_, 0);
lean_inc(v_a_603_);
lean_dec_ref_known(v___x_600_, 1);
v_a_477_ = v_a_603_;
goto v___jp_476_;
}
}
else
{
lean_object* v_a_604_; 
lean_dec(v_a_595_);
lean_dec(v_levelParams_588_);
lean_dec(v_numParams_586_);
v_a_604_ = lean_ctor_get(v___x_596_, 0);
lean_inc(v_a_604_);
lean_dec_ref_known(v___x_596_, 1);
v_a_477_ = v_a_604_;
goto v___jp_476_;
}
}
else
{
lean_object* v_a_605_; 
lean_dec(v_levelParams_588_);
lean_dec(v_numParams_586_);
v_a_605_ = lean_ctor_get(v___x_594_, 0);
lean_inc(v_a_605_);
lean_dec_ref_known(v___x_594_, 1);
v_a_477_ = v_a_605_;
goto v___jp_476_;
}
}
else
{
lean_object* v_a_606_; 
lean_dec(v_a_591_);
lean_dec(v_levelParams_588_);
lean_dec(v_numParams_586_);
v_a_606_ = lean_ctor_get(v___x_593_, 0);
lean_inc(v_a_606_);
lean_dec_ref_known(v___x_593_, 1);
v_a_477_ = v_a_606_;
goto v___jp_476_;
}
}
else
{
lean_object* v_a_607_; 
lean_dec(v_levelParams_588_);
lean_dec(v_numParams_586_);
v_a_607_ = lean_ctor_get(v___x_590_, 0);
lean_inc(v_a_607_);
lean_dec_ref_known(v___x_590_, 1);
v_a_477_ = v_a_607_;
goto v___jp_476_;
}
}
case 6:
{
lean_object* v_val_608_; lean_object* v___x_609_; lean_object* v_toConstantVal_610_; lean_object* v_env_611_; lean_object* v_remaining_612_; lean_object* v_pending_613_; lean_object* v_postponedConstructors_614_; lean_object* v_postponedRecursors_615_; lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_627_; 
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v_val_608_ = lean_ctor_get(v_val_464_, 0);
lean_inc_ref(v_val_608_);
lean_dec_ref_known(v_val_464_, 1);
v___x_609_ = lean_st_ref_take(v_a_450_);
v_toConstantVal_610_ = lean_ctor_get(v_val_608_, 0);
lean_inc_ref(v_toConstantVal_610_);
lean_dec_ref(v_val_608_);
v_env_611_ = lean_ctor_get(v___x_609_, 0);
v_remaining_612_ = lean_ctor_get(v___x_609_, 1);
v_pending_613_ = lean_ctor_get(v___x_609_, 2);
v_postponedConstructors_614_ = lean_ctor_get(v___x_609_, 3);
v_postponedRecursors_615_ = lean_ctor_get(v___x_609_, 4);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_609_);
if (v_isSharedCheck_627_ == 0)
{
v___x_617_ = v___x_609_;
v_isShared_618_ = v_isSharedCheck_627_;
goto v_resetjp_616_;
}
else
{
lean_inc(v_postponedRecursors_615_);
lean_inc(v_postponedConstructors_614_);
lean_inc(v_pending_613_);
lean_inc(v_remaining_612_);
lean_inc(v_env_611_);
lean_dec(v___x_609_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_627_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v_name_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_623_; 
v_name_619_ = lean_ctor_get(v_toConstantVal_610_, 0);
lean_inc(v_name_619_);
lean_dec_ref(v_toConstantVal_610_);
v___x_620_ = lean_box(0);
v___x_621_ = l_Lean_NameSet_insert(v_postponedConstructors_614_, v_name_619_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 3, v___x_621_);
v___x_623_ = v___x_617_;
goto v_reusejp_622_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_env_611_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v_remaining_612_);
lean_ctor_set(v_reuseFailAlloc_626_, 2, v_pending_613_);
lean_ctor_set(v_reuseFailAlloc_626_, 3, v___x_621_);
lean_ctor_set(v_reuseFailAlloc_626_, 4, v_postponedRecursors_615_);
v___x_623_ = v_reuseFailAlloc_626_;
goto v_reusejp_622_;
}
v_reusejp_622_:
{
lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_624_ = lean_st_ref_put(v_a_450_, v___x_623_);
v___x_625_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_448_, v___x_620_, v_a_449_, v_a_450_);
v___y_492_ = v___x_625_;
goto v___jp_491_;
}
}
}
default: 
{
lean_object* v_val_628_; lean_object* v___x_629_; lean_object* v_toConstantVal_630_; lean_object* v_env_631_; lean_object* v_remaining_632_; lean_object* v_pending_633_; lean_object* v_postponedConstructors_634_; lean_object* v_postponedRecursors_635_; lean_object* v___x_637_; uint8_t v_isShared_638_; uint8_t v_isSharedCheck_647_; 
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
v_val_628_ = lean_ctor_get(v_val_464_, 0);
lean_inc_ref(v_val_628_);
lean_dec_ref_known(v_val_464_, 1);
v___x_629_ = lean_st_ref_take(v_a_450_);
v_toConstantVal_630_ = lean_ctor_get(v_val_628_, 0);
lean_inc_ref(v_toConstantVal_630_);
lean_dec_ref(v_val_628_);
v_env_631_ = lean_ctor_get(v___x_629_, 0);
v_remaining_632_ = lean_ctor_get(v___x_629_, 1);
v_pending_633_ = lean_ctor_get(v___x_629_, 2);
v_postponedConstructors_634_ = lean_ctor_get(v___x_629_, 3);
v_postponedRecursors_635_ = lean_ctor_get(v___x_629_, 4);
v_isSharedCheck_647_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_647_ == 0)
{
v___x_637_ = v___x_629_;
v_isShared_638_ = v_isSharedCheck_647_;
goto v_resetjp_636_;
}
else
{
lean_inc(v_postponedRecursors_635_);
lean_inc(v_postponedConstructors_634_);
lean_inc(v_pending_633_);
lean_inc(v_remaining_632_);
lean_inc(v_env_631_);
lean_dec(v___x_629_);
v___x_637_ = lean_box(0);
v_isShared_638_ = v_isSharedCheck_647_;
goto v_resetjp_636_;
}
v_resetjp_636_:
{
lean_object* v_name_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
v_name_639_ = lean_ctor_get(v_toConstantVal_630_, 0);
lean_inc(v_name_639_);
lean_dec_ref(v_toConstantVal_630_);
v___x_640_ = lean_box(0);
v___x_641_ = l_Lean_NameSet_insert(v_postponedRecursors_635_, v_name_639_);
if (v_isShared_638_ == 0)
{
lean_ctor_set(v___x_637_, 4, v___x_641_);
v___x_643_ = v___x_637_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_env_631_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v_remaining_632_);
lean_ctor_set(v_reuseFailAlloc_646_, 2, v_pending_633_);
lean_ctor_set(v_reuseFailAlloc_646_, 3, v_postponedConstructors_634_);
lean_ctor_set(v_reuseFailAlloc_646_, 4, v___x_641_);
v___x_643_ = v_reuseFailAlloc_646_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_644_ = lean_st_ref_put(v_a_450_, v___x_643_);
v___x_645_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___lam__0(v_name_448_, v___x_640_, v_a_449_, v_a_450_);
v___y_492_ = v___x_645_;
goto v___jp_491_;
}
}
}
}
}
v___jp_476_:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_486_; 
v___x_478_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__0));
v___x_479_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_448_, v___x_475_);
v___x_480_ = lean_string_append(v___x_478_, v___x_479_);
lean_dec_ref(v___x_479_);
v___x_481_ = ((lean_object*)(l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__1));
v___x_482_ = lean_string_append(v___x_480_, v___x_481_);
v___x_483_ = lean_io_error_to_string(v_a_477_);
v___x_484_ = lean_string_append(v___x_482_, v___x_483_);
lean_dec_ref(v___x_483_);
if (v_isShared_467_ == 0)
{
lean_ctor_set_tag(v___x_466_, 18);
lean_ctor_set(v___x_466_, 0, v___x_484_);
v___x_486_ = v___x_466_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_490_; 
v_reuseFailAlloc_490_ = lean_alloc_ctor(18, 1, 0);
lean_ctor_set(v_reuseFailAlloc_490_, 0, v___x_484_);
v___x_486_ = v_reuseFailAlloc_490_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
lean_object* v___x_488_; 
if (v_isShared_472_ == 0)
{
lean_ctor_set_tag(v___x_471_, 1);
lean_ctor_set(v___x_471_, 0, v___x_486_);
v___x_488_ = v___x_471_;
goto v_reusejp_487_;
}
else
{
lean_object* v_reuseFailAlloc_489_; 
v_reuseFailAlloc_489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_489_, 0, v___x_486_);
v___x_488_ = v_reuseFailAlloc_489_;
goto v_reusejp_487_;
}
v_reusejp_487_:
{
return v___x_488_;
}
}
}
v___jp_491_:
{
if (lean_obj_tag(v___y_492_) == 0)
{
lean_object* v_a_493_; lean_object* v___x_495_; uint8_t v_isShared_496_; uint8_t v_isSharedCheck_501_; 
lean_del_object(v___x_471_);
lean_del_object(v___x_466_);
lean_dec(v_name_448_);
v_a_493_ = lean_ctor_get(v___y_492_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___y_492_);
if (v_isSharedCheck_501_ == 0)
{
v___x_495_ = v___y_492_;
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
else
{
lean_inc(v_a_493_);
lean_dec(v___y_492_);
v___x_495_ = lean_box(0);
v_isShared_496_ = v_isSharedCheck_501_;
goto v_resetjp_494_;
}
v_resetjp_494_:
{
lean_object* v_a_497_; lean_object* v___x_499_; 
v_a_497_ = lean_ctor_get(v_a_493_, 0);
lean_inc(v_a_497_);
lean_dec(v_a_493_);
if (v_isShared_496_ == 0)
{
lean_ctor_set(v___x_495_, 0, v_a_497_);
v___x_499_ = v___x_495_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_497_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
else
{
lean_object* v_a_502_; 
v_a_502_ = lean_ctor_get(v___y_492_, 0);
lean_inc(v_a_502_);
lean_dec_ref_known(v___y_492_, 1);
v_a_477_ = v_a_502_;
goto v___jp_476_;
}
}
}
}
else
{
lean_del_object(v___x_466_);
lean_dec(v_val_464_);
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
lean_dec(v_name_448_);
return v___x_469_;
}
}
}
else
{
lean_object* v___x_651_; lean_object* v___x_652_; 
lean_dec(v___x_463_);
lean_del_object(v___x_456_);
lean_dec_ref(v___f_452_);
lean_dec(v_name_448_);
v___x_651_ = lean_obj_once(&l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7, &l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7_once, _init_l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___closed__7);
v___x_652_ = l_panic___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__10(v___x_651_, v_a_449_, v_a_450_);
return v___x_652_;
}
}
}
}
else
{
lean_object* v_a_654_; lean_object* v___x_656_; uint8_t v_isShared_657_; uint8_t v_isSharedCheck_661_; 
lean_dec_ref(v___f_452_);
lean_dec(v_name_448_);
v_a_654_ = lean_ctor_get(v___x_453_, 0);
v_isSharedCheck_661_ = !lean_is_exclusive(v___x_453_);
if (v_isSharedCheck_661_ == 0)
{
v___x_656_ = v___x_453_;
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
else
{
lean_inc(v_a_654_);
lean_dec(v___x_453_);
v___x_656_ = lean_box(0);
v_isShared_657_ = v_isSharedCheck_661_;
goto v_resetjp_655_;
}
v_resetjp_655_:
{
lean_object* v___x_659_; 
if (v_isShared_657_ == 0)
{
v___x_659_ = v___x_656_;
goto v_reusejp_658_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v_a_654_);
v___x_659_ = v_reuseFailAlloc_660_;
goto v_reusejp_658_;
}
v_reusejp_658_:
{
return v___x_659_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(lean_object* v_init_662_, lean_object* v_x_663_, lean_object* v___y_664_, lean_object* v___y_665_){
_start:
{
if (lean_obj_tag(v_x_663_) == 0)
{
lean_object* v_k_667_; lean_object* v_l_668_; lean_object* v_r_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v_k_667_ = lean_ctor_get(v_x_663_, 1);
lean_inc(v_k_667_);
v_l_668_ = lean_ctor_get(v_x_663_, 3);
lean_inc(v_l_668_);
v_r_669_ = lean_ctor_get(v_x_663_, 4);
lean_inc(v_r_669_);
lean_dec_ref_known(v_x_663_, 5);
v___x_670_ = lean_box(0);
v___x_671_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v_init_662_, v_l_668_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v___x_672_; 
lean_dec_ref_known(v___x_671_, 1);
v___x_672_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(v_k_667_, v___y_664_, v___y_665_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_dec_ref_known(v___x_672_, 1);
v_init_662_ = v___x_670_;
v_x_663_ = v_r_669_;
goto _start;
}
else
{
lean_object* v_a_674_; lean_object* v___x_676_; uint8_t v_isShared_677_; uint8_t v_isSharedCheck_681_; 
lean_dec(v_r_669_);
v_a_674_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_681_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_681_ == 0)
{
v___x_676_ = v___x_672_;
v_isShared_677_ = v_isSharedCheck_681_;
goto v_resetjp_675_;
}
else
{
lean_inc(v_a_674_);
lean_dec(v___x_672_);
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
else
{
lean_dec(v_r_669_);
lean_dec(v_k_667_);
return v___x_671_;
}
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; 
v___x_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_682_, 0, v_init_662_);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(lean_object* v_names_684_, lean_object* v_a_685_, lean_object* v_a_686_){
_start:
{
lean_object* v___x_688_; lean_object* v___x_689_; 
v___x_688_ = lean_box(0);
v___x_689_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v___x_688_, v_names_684_, v_a_685_, v_a_686_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_object* v___x_691_; uint8_t v_isShared_692_; uint8_t v_isSharedCheck_696_; 
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_696_ == 0)
{
lean_object* v_unused_697_; 
v_unused_697_ = lean_ctor_get(v___x_689_, 0);
lean_dec(v_unused_697_);
v___x_691_ = v___x_689_;
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
else
{
lean_dec(v___x_689_);
v___x_691_ = lean_box(0);
v_isShared_692_ = v_isSharedCheck_696_;
goto v_resetjp_690_;
}
v_resetjp_690_:
{
lean_object* v___x_694_; 
if (v_isShared_692_ == 0)
{
lean_ctor_set(v___x_691_, 0, v___x_688_);
v___x_694_ = v___x_691_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v___x_688_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v_a_698_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_689_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_689_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants___boxed(lean_object* v_names_706_, lean_object* v_a_707_, lean_object* v_a_708_, lean_object* v_a_709_){
_start:
{
lean_object* v_res_710_; 
v_res_710_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants(v_names_706_, v_a_707_, v_a_708_);
lean_dec(v_a_708_);
lean_dec_ref(v_a_707_);
return v_res_710_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg___boxed(lean_object* v_as_x27_711_, lean_object* v_b_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_){
_start:
{
lean_object* v_res_716_; 
v_res_716_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(v_as_x27_711_, v_b_712_, v___y_713_, v___y_714_);
lean_dec(v___y_714_);
lean_dec_ref(v___y_713_);
lean_dec(v_as_x27_711_);
return v_res_716_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg___boxed(lean_object* v_as_x27_717_, lean_object* v_b_718_, lean_object* v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(v_as_x27_717_, v_b_718_, v___y_719_, v___y_720_);
lean_dec(v___y_720_);
lean_dec_ref(v___y_719_);
lean_dec(v_as_x27_717_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12___boxed(lean_object* v_init_723_, lean_object* v_x_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v_init_723_, v_x_724_, v___y_725_, v___y_726_);
lean_dec(v___y_726_);
lean_dec_ref(v___y_725_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant___boxed(lean_object* v_name_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant(v_name_729_, v_a_730_, v_a_731_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2(lean_object* v_x_734_, lean_object* v_x_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
lean_object* v___x_739_; 
v___x_739_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___redArg(v_x_734_, v_x_735_, v___y_736_);
return v___x_739_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2___boxed(lean_object* v_x_740_, lean_object* v_x_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_List_mapM_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__2(v_x_740_, v_x_741_, v___y_742_, v___y_743_);
lean_dec(v___y_743_);
lean_dec_ref(v___y_742_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3(lean_object* v_00_u03b2_746_, lean_object* v_m_747_, lean_object* v_a_748_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v_m_747_, v_a_748_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___boxed(lean_object* v_00_u03b2_750_, lean_object* v_m_751_, lean_object* v_a_752_){
_start:
{
lean_object* v_res_753_; 
v_res_753_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3(v_00_u03b2_750_, v_m_751_, v_a_752_);
lean_dec(v_a_752_);
lean_dec_ref(v_m_751_);
return v_res_753_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5(lean_object* v_as_754_, lean_object* v_as_x27_755_, lean_object* v_b_756_, lean_object* v_a_757_, lean_object* v___y_758_, lean_object* v___y_759_){
_start:
{
lean_object* v___x_761_; 
v___x_761_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___redArg(v_as_x27_755_, v_b_756_, v___y_758_, v___y_759_);
return v___x_761_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5___boxed(lean_object* v_as_762_, lean_object* v_as_x27_763_, lean_object* v_b_764_, lean_object* v_a_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__5(v_as_762_, v_as_x27_763_, v_b_764_, v_a_765_, v___y_766_, v___y_767_);
lean_dec(v___y_767_);
lean_dec_ref(v___y_766_);
lean_dec(v_as_x27_763_);
lean_dec(v_as_762_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6(lean_object* v_as_770_, lean_object* v_as_x27_771_, lean_object* v_b_772_, lean_object* v_a_773_, lean_object* v___y_774_, lean_object* v___y_775_){
_start:
{
lean_object* v___x_777_; 
v___x_777_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___redArg(v_as_x27_771_, v_b_772_, v___y_775_);
return v___x_777_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6___boxed(lean_object* v_as_778_, lean_object* v_as_x27_779_, lean_object* v_b_780_, lean_object* v_a_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_){
_start:
{
lean_object* v_res_785_; 
v_res_785_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__6(v_as_778_, v_as_x27_779_, v_b_780_, v_a_781_, v___y_782_, v___y_783_);
lean_dec(v___y_783_);
lean_dec_ref(v___y_782_);
lean_dec(v_as_x27_779_);
lean_dec(v_as_778_);
return v_res_785_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8(lean_object* v_as_786_, lean_object* v_as_x27_787_, lean_object* v_b_788_, lean_object* v_a_789_, lean_object* v___y_790_, lean_object* v___y_791_){
_start:
{
lean_object* v___x_793_; 
v___x_793_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___redArg(v_as_x27_787_, v_b_788_, v___y_790_, v___y_791_);
return v___x_793_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8___boxed(lean_object* v_as_794_, lean_object* v_as_x27_795_, lean_object* v_b_796_, lean_object* v_a_797_, lean_object* v___y_798_, lean_object* v___y_799_, lean_object* v___y_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_List_forIn_x27_loop___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__8(v_as_794_, v_as_x27_795_, v_b_796_, v_a_797_, v___y_798_, v___y_799_);
lean_dec(v___y_799_);
lean_dec_ref(v___y_798_);
lean_dec(v_as_x27_795_);
lean_dec(v_as_794_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4(lean_object* v_00_u03b2_802_, lean_object* v_a_803_, lean_object* v_x_804_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___redArg(v_a_803_, v_x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4___boxed(lean_object* v_00_u03b2_806_, lean_object* v_a_807_, lean_object* v_x_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3_spec__4(v_00_u03b2_806_, v_a_807_, v_x_808_);
lean_dec(v_x_808_);
lean_dec(v_a_807_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(lean_object* v_init_812_, lean_object* v_x_813_, lean_object* v___y_814_, lean_object* v___y_815_){
_start:
{
if (lean_obj_tag(v_x_813_) == 0)
{
lean_object* v_k_817_; lean_object* v_l_818_; lean_object* v_r_819_; lean_object* v___x_827_; lean_object* v___x_828_; 
v_k_817_ = lean_ctor_get(v_x_813_, 1);
lean_inc(v_k_817_);
v_l_818_ = lean_ctor_get(v_x_813_, 3);
lean_inc(v_l_818_);
v_r_819_ = lean_ctor_get(v_x_813_, 4);
lean_inc(v_r_819_);
lean_dec_ref_known(v_x_813_, 5);
v___x_827_ = lean_box(0);
v___x_828_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(v_init_812_, v_l_818_, v___y_814_, v___y_815_);
if (lean_obj_tag(v___x_828_) == 0)
{
lean_object* v___x_830_; uint8_t v_isShared_831_; uint8_t v_isSharedCheck_850_; 
v_isSharedCheck_850_ = !lean_is_exclusive(v___x_828_);
if (v_isSharedCheck_850_ == 0)
{
lean_object* v_unused_851_; 
v_unused_851_ = lean_ctor_get(v___x_828_, 0);
lean_dec(v_unused_851_);
v___x_830_ = v___x_828_;
v_isShared_831_ = v_isSharedCheck_850_;
goto v_resetjp_829_;
}
else
{
lean_dec(v___x_828_);
v___x_830_ = lean_box(0);
v_isShared_831_ = v_isSharedCheck_850_;
goto v_resetjp_829_;
}
v_resetjp_829_:
{
lean_object* v___x_832_; lean_object* v_env_833_; lean_object* v___x_834_; 
v___x_832_ = lean_st_ref_get(v___y_815_);
v_env_833_ = lean_ctor_get(v___x_832_, 0);
lean_inc_ref(v_env_833_);
lean_dec(v___x_832_);
lean_inc(v_k_817_);
v___x_834_ = lean_environment_find(v_env_833_, v_k_817_);
if (lean_obj_tag(v___x_834_) == 1)
{
lean_object* v_val_835_; 
v_val_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_val_835_);
lean_dec_ref_known(v___x_834_, 1);
if (lean_obj_tag(v_val_835_) == 6)
{
lean_object* v_val_836_; lean_object* v___x_837_; 
v_val_836_ = lean_ctor_get(v_val_835_, 0);
lean_inc_ref(v_val_836_);
lean_dec_ref_known(v_val_835_, 1);
v___x_837_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v___y_814_, v_k_817_);
if (lean_obj_tag(v___x_837_) == 1)
{
lean_object* v_val_838_; 
v_val_838_ = lean_ctor_get(v___x_837_, 0);
lean_inc(v_val_838_);
lean_dec_ref_known(v___x_837_, 1);
if (lean_obj_tag(v_val_838_) == 6)
{
lean_object* v_val_839_; uint8_t v___x_840_; 
v_val_839_ = lean_ctor_get(v_val_838_, 0);
lean_inc_ref(v_val_839_);
lean_dec_ref_known(v_val_838_, 1);
v___x_840_ = l_Lean_instBEqConstructorVal_beq(v_val_836_, v_val_839_);
lean_dec_ref(v_val_839_);
lean_dec_ref(v_val_836_);
if (v___x_840_ == 0)
{
uint8_t v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_847_; 
lean_dec(v_r_819_);
v___x_841_ = 1;
v___x_842_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__1));
v___x_843_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_817_, v___x_841_);
v___x_844_ = lean_string_append(v___x_842_, v___x_843_);
lean_dec_ref(v___x_843_);
v___x_845_ = lean_mk_io_user_error(v___x_844_);
if (v_isShared_831_ == 0)
{
lean_ctor_set_tag(v___x_830_, 1);
lean_ctor_set(v___x_830_, 0, v___x_845_);
v___x_847_ = v___x_830_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_848_; 
v_reuseFailAlloc_848_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_848_, 0, v___x_845_);
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
lean_del_object(v___x_830_);
lean_dec(v_k_817_);
v_init_812_ = v___x_827_;
v_x_813_ = v_r_819_;
goto _start;
}
}
else
{
lean_dec(v_val_838_);
lean_dec_ref(v_val_836_);
lean_del_object(v___x_830_);
lean_dec(v_r_819_);
goto v___jp_820_;
}
}
else
{
lean_dec(v___x_837_);
lean_dec_ref(v_val_836_);
lean_del_object(v___x_830_);
lean_dec(v_r_819_);
goto v___jp_820_;
}
}
else
{
lean_dec(v_val_835_);
lean_del_object(v___x_830_);
lean_dec(v_r_819_);
goto v___jp_820_;
}
}
else
{
lean_dec(v___x_834_);
lean_del_object(v___x_830_);
lean_dec(v_r_819_);
goto v___jp_820_;
}
}
}
else
{
lean_dec(v_r_819_);
lean_dec(v_k_817_);
return v___x_828_;
}
v___jp_820_:
{
lean_object* v___x_821_; uint8_t v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; 
v___x_821_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___closed__0));
v___x_822_ = 1;
v___x_823_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_817_, v___x_822_);
v___x_824_ = lean_string_append(v___x_821_, v___x_823_);
lean_dec_ref(v___x_823_);
v___x_825_ = lean_mk_io_user_error(v___x_824_);
v___x_826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_826_, 0, v___x_825_);
return v___x_826_;
}
}
else
{
lean_object* v___x_852_; lean_object* v___x_853_; 
v___x_852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_852_, 0, v_init_812_);
v___x_853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_853_, 0, v___x_852_);
return v___x_853_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0___boxed(lean_object* v_init_854_, lean_object* v_x_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(v_init_854_, v_x_855_, v___y_856_, v___y_857_);
lean_dec(v___y_857_);
lean_dec_ref(v___y_856_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors(lean_object* v_a_860_, lean_object* v_a_861_){
_start:
{
lean_object* v___x_863_; lean_object* v_postponedConstructors_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v___x_863_ = lean_st_ref_get(v_a_861_);
v_postponedConstructors_864_ = lean_ctor_get(v___x_863_, 3);
lean_inc(v_postponedConstructors_864_);
lean_dec(v___x_863_);
v___x_865_ = lean_box(0);
v___x_866_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors_spec__0(v___x_865_, v_postponedConstructors_864_, v_a_860_, v_a_861_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v___x_868_; uint8_t v_isShared_869_; uint8_t v_isSharedCheck_873_; 
v_isSharedCheck_873_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_873_ == 0)
{
lean_object* v_unused_874_; 
v_unused_874_ = lean_ctor_get(v___x_866_, 0);
lean_dec(v_unused_874_);
v___x_868_ = v___x_866_;
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
else
{
lean_dec(v___x_866_);
v___x_868_ = lean_box(0);
v_isShared_869_ = v_isSharedCheck_873_;
goto v_resetjp_867_;
}
v_resetjp_867_:
{
lean_object* v___x_871_; 
if (v_isShared_869_ == 0)
{
lean_ctor_set(v___x_868_, 0, v___x_865_);
v___x_871_ = v___x_868_;
goto v_reusejp_870_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_865_);
v___x_871_ = v_reuseFailAlloc_872_;
goto v_reusejp_870_;
}
v_reusejp_870_:
{
return v___x_871_;
}
}
}
else
{
lean_object* v_a_875_; lean_object* v___x_877_; uint8_t v_isShared_878_; uint8_t v_isSharedCheck_882_; 
v_a_875_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_882_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_882_ == 0)
{
v___x_877_ = v___x_866_;
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
else
{
lean_inc(v_a_875_);
lean_dec(v___x_866_);
v___x_877_ = lean_box(0);
v_isShared_878_ = v_isSharedCheck_882_;
goto v_resetjp_876_;
}
v_resetjp_876_:
{
lean_object* v___x_880_; 
if (v_isShared_878_ == 0)
{
v___x_880_ = v___x_877_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_881_; 
v_reuseFailAlloc_881_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_881_, 0, v_a_875_);
v___x_880_ = v_reuseFailAlloc_881_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
return v___x_880_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors___boxed(lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors(v_a_883_, v_a_884_);
lean_dec(v_a_884_);
lean_dec_ref(v_a_883_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(lean_object* v_init_889_, lean_object* v_x_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
if (lean_obj_tag(v_x_890_) == 0)
{
lean_object* v_k_894_; lean_object* v_l_895_; lean_object* v_r_896_; lean_object* v___x_904_; lean_object* v___x_905_; 
v_k_894_ = lean_ctor_get(v_x_890_, 1);
lean_inc(v_k_894_);
v_l_895_ = lean_ctor_get(v_x_890_, 3);
lean_inc(v_l_895_);
v_r_896_ = lean_ctor_get(v_x_890_, 4);
lean_inc(v_r_896_);
lean_dec_ref_known(v_x_890_, 5);
v___x_904_ = lean_box(0);
v___x_905_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(v_init_889_, v_l_895_, v___y_891_, v___y_892_);
if (lean_obj_tag(v___x_905_) == 0)
{
lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_927_; 
v_isSharedCheck_927_ = !lean_is_exclusive(v___x_905_);
if (v_isSharedCheck_927_ == 0)
{
lean_object* v_unused_928_; 
v_unused_928_ = lean_ctor_get(v___x_905_, 0);
lean_dec(v_unused_928_);
v___x_907_ = v___x_905_;
v_isShared_908_ = v_isSharedCheck_927_;
goto v_resetjp_906_;
}
else
{
lean_dec(v___x_905_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_927_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v_env_910_; lean_object* v___x_911_; 
v___x_909_ = lean_st_ref_get(v___y_892_);
v_env_910_ = lean_ctor_get(v___x_909_, 0);
lean_inc_ref(v_env_910_);
lean_dec(v___x_909_);
lean_inc(v_k_894_);
v___x_911_ = lean_environment_find(v_env_910_, v_k_894_);
if (lean_obj_tag(v___x_911_) == 1)
{
lean_object* v_val_912_; 
v_val_912_ = lean_ctor_get(v___x_911_, 0);
lean_inc(v_val_912_);
lean_dec_ref_known(v___x_911_, 1);
if (lean_obj_tag(v_val_912_) == 7)
{
lean_object* v_val_913_; lean_object* v___x_914_; 
v_val_913_ = lean_ctor_get(v_val_912_, 0);
lean_inc_ref(v_val_913_);
lean_dec_ref_known(v_val_912_, 1);
v___x_914_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstant_spec__3___redArg(v___y_891_, v_k_894_);
if (lean_obj_tag(v___x_914_) == 1)
{
lean_object* v_val_915_; 
v_val_915_ = lean_ctor_get(v___x_914_, 0);
lean_inc(v_val_915_);
lean_dec_ref_known(v___x_914_, 1);
if (lean_obj_tag(v_val_915_) == 7)
{
lean_object* v_val_916_; uint8_t v___x_917_; 
v_val_916_ = lean_ctor_get(v_val_915_, 0);
lean_inc_ref(v_val_916_);
lean_dec_ref_known(v_val_915_, 1);
v___x_917_ = l_Lean_instBEqRecursorVal_beq(v_val_913_, v_val_916_);
lean_dec_ref(v_val_916_);
lean_dec_ref(v_val_913_);
if (v___x_917_ == 0)
{
uint8_t v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_924_; 
lean_dec(v_r_896_);
v___x_918_ = 1;
v___x_919_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__1));
v___x_920_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_894_, v___x_918_);
v___x_921_ = lean_string_append(v___x_919_, v___x_920_);
lean_dec_ref(v___x_920_);
v___x_922_ = lean_mk_io_user_error(v___x_921_);
if (v_isShared_908_ == 0)
{
lean_ctor_set_tag(v___x_907_, 1);
lean_ctor_set(v___x_907_, 0, v___x_922_);
v___x_924_ = v___x_907_;
goto v_reusejp_923_;
}
else
{
lean_object* v_reuseFailAlloc_925_; 
v_reuseFailAlloc_925_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_925_, 0, v___x_922_);
v___x_924_ = v_reuseFailAlloc_925_;
goto v_reusejp_923_;
}
v_reusejp_923_:
{
return v___x_924_;
}
}
else
{
lean_del_object(v___x_907_);
lean_dec(v_k_894_);
v_init_889_ = v___x_904_;
v_x_890_ = v_r_896_;
goto _start;
}
}
else
{
lean_dec(v_val_915_);
lean_dec_ref(v_val_913_);
lean_del_object(v___x_907_);
lean_dec(v_r_896_);
goto v___jp_897_;
}
}
else
{
lean_dec(v___x_914_);
lean_dec_ref(v_val_913_);
lean_del_object(v___x_907_);
lean_dec(v_r_896_);
goto v___jp_897_;
}
}
else
{
lean_dec(v_val_912_);
lean_del_object(v___x_907_);
lean_dec(v_r_896_);
goto v___jp_897_;
}
}
else
{
lean_dec(v___x_911_);
lean_del_object(v___x_907_);
lean_dec(v_r_896_);
goto v___jp_897_;
}
}
}
else
{
lean_dec(v_r_896_);
lean_dec(v_k_894_);
return v___x_905_;
}
v___jp_897_:
{
lean_object* v___x_898_; uint8_t v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_898_ = ((lean_object*)(l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___closed__0));
v___x_899_ = 1;
v___x_900_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_k_894_, v___x_899_);
v___x_901_ = lean_string_append(v___x_898_, v___x_900_);
lean_dec_ref(v___x_900_);
v___x_902_ = lean_mk_io_user_error(v___x_901_);
v___x_903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_903_, 0, v___x_902_);
return v___x_903_;
}
}
else
{
lean_object* v___x_929_; lean_object* v___x_930_; 
v___x_929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_929_, 0, v_init_889_);
v___x_930_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_930_, 0, v___x_929_);
return v___x_930_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0___boxed(lean_object* v_init_931_, lean_object* v_x_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(v_init_931_, v_x_932_, v___y_933_, v___y_934_);
lean_dec(v___y_934_);
lean_dec_ref(v___y_933_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors(lean_object* v_a_937_, lean_object* v_a_938_){
_start:
{
lean_object* v___x_940_; lean_object* v_postponedRecursors_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_940_ = lean_st_ref_get(v_a_938_);
v_postponedRecursors_941_ = lean_ctor_get(v___x_940_, 4);
lean_inc(v_postponedRecursors_941_);
lean_dec(v___x_940_);
v___x_942_ = lean_box(0);
v___x_943_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors_spec__0(v___x_942_, v_postponedRecursors_941_, v_a_937_, v_a_938_);
if (lean_obj_tag(v___x_943_) == 0)
{
lean_object* v___x_945_; uint8_t v_isShared_946_; uint8_t v_isSharedCheck_950_; 
v_isSharedCheck_950_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_950_ == 0)
{
lean_object* v_unused_951_; 
v_unused_951_ = lean_ctor_get(v___x_943_, 0);
lean_dec(v_unused_951_);
v___x_945_ = v___x_943_;
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
else
{
lean_dec(v___x_943_);
v___x_945_ = lean_box(0);
v_isShared_946_ = v_isSharedCheck_950_;
goto v_resetjp_944_;
}
v_resetjp_944_:
{
lean_object* v___x_948_; 
if (v_isShared_946_ == 0)
{
lean_ctor_set(v___x_945_, 0, v___x_942_);
v___x_948_ = v___x_945_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_949_; 
v_reuseFailAlloc_949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_949_, 0, v___x_942_);
v___x_948_ = v_reuseFailAlloc_949_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
return v___x_948_;
}
}
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
v_a_952_ = lean_ctor_get(v___x_943_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_943_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_943_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_943_);
v___x_954_ = lean_box(0);
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
v_resetjp_953_:
{
lean_object* v___x_957_; 
if (v_isShared_955_ == 0)
{
v___x_957_ = v___x_954_;
goto v_reusejp_956_;
}
else
{
lean_object* v_reuseFailAlloc_958_; 
v_reuseFailAlloc_958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_958_, 0, v_a_952_);
v___x_957_ = v_reuseFailAlloc_958_;
goto v_reusejp_956_;
}
v_reusejp_956_:
{
return v___x_957_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors___boxed(lean_object* v_a_960_, lean_object* v_a_961_, lean_object* v_a_962_){
_start:
{
lean_object* v_res_963_; 
v_res_963_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors(v_a_960_, v_a_961_);
lean_dec(v_a_961_);
lean_dec_ref(v_a_960_);
return v_res_963_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(lean_object* v_x_964_, lean_object* v_x_965_){
_start:
{
if (lean_obj_tag(v_x_965_) == 0)
{
lean_inc(v_x_964_);
return v_x_964_;
}
else
{
lean_object* v_key_966_; lean_object* v_value_967_; lean_object* v_tail_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; 
v_key_966_ = lean_ctor_get(v_x_965_, 0);
v_value_967_ = lean_ctor_get(v_x_965_, 1);
v_tail_968_ = lean_ctor_get(v_x_965_, 2);
v___x_969_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(v_x_964_, v_tail_968_);
lean_inc(v_value_967_);
lean_inc(v_key_966_);
v___x_970_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_970_, 0, v_key_966_);
lean_ctor_set(v___x_970_, 1, v_value_967_);
v___x_971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_971_, 0, v___x_970_);
lean_ctor_set(v___x_971_, 1, v___x_969_);
return v___x_971_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1___boxed(lean_object* v_x_972_, lean_object* v_x_973_){
_start:
{
lean_object* v_res_974_; 
v_res_974_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(v_x_972_, v_x_973_);
lean_dec(v_x_973_);
lean_dec(v_x_972_);
return v_res_974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2(lean_object* v_as_975_, size_t v_i_976_, size_t v_stop_977_, lean_object* v_b_978_){
_start:
{
uint8_t v___x_979_; 
v___x_979_ = lean_usize_dec_eq(v_i_976_, v_stop_977_);
if (v___x_979_ == 0)
{
size_t v___x_980_; size_t v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; 
v___x_980_ = ((size_t)1ULL);
v___x_981_ = lean_usize_sub(v_i_976_, v___x_980_);
v___x_982_ = lean_array_uget_borrowed(v_as_975_, v___x_981_);
v___x_983_ = l_Std_DHashMap_Internal_AssocList_foldrM___at___00Lean_Kernel_Environment_replay_spec__1(v_b_978_, v___x_982_);
lean_dec(v_b_978_);
v_i_976_ = v___x_981_;
v_b_978_ = v___x_983_;
goto _start;
}
else
{
return v_b_978_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2___boxed(lean_object* v_as_985_, lean_object* v_i_986_, lean_object* v_stop_987_, lean_object* v_b_988_){
_start:
{
size_t v_i_boxed_989_; size_t v_stop_boxed_990_; lean_object* v_res_991_; 
v_i_boxed_989_ = lean_unbox_usize(v_i_986_);
lean_dec(v_i_986_);
v_stop_boxed_990_ = lean_unbox_usize(v_stop_987_);
lean_dec(v_stop_987_);
v_res_991_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2(v_as_985_, v_i_boxed_989_, v_stop_boxed_990_, v_b_988_);
lean_dec_ref(v_as_985_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(lean_object* v_as_x27_992_, lean_object* v_b_993_){
_start:
{
if (lean_obj_tag(v_as_x27_992_) == 0)
{
lean_object* v___x_995_; 
v___x_995_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_995_, 0, v_b_993_);
return v___x_995_;
}
else
{
lean_object* v_head_996_; lean_object* v_tail_997_; lean_object* v_fst_998_; lean_object* v_snd_999_; uint8_t v___x_1000_; 
v_head_996_ = lean_ctor_get(v_as_x27_992_, 0);
v_tail_997_ = lean_ctor_get(v_as_x27_992_, 1);
v_fst_998_ = lean_ctor_get(v_head_996_, 0);
v_snd_999_ = lean_ctor_get(v_head_996_, 1);
v___x_1000_ = l_Lean_ConstantInfo_isUnsafe(v_snd_999_);
if (v___x_1000_ == 0)
{
uint8_t v___x_1001_; 
v___x_1001_ = l_Lean_ConstantInfo_isPartial(v_snd_999_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; 
lean_inc(v_fst_998_);
v___x_1002_ = l_Lean_NameSet_insert(v_b_993_, v_fst_998_);
v_as_x27_992_ = v_tail_997_;
v_b_993_ = v___x_1002_;
goto _start;
}
else
{
v_as_x27_992_ = v_tail_997_;
goto _start;
}
}
else
{
v_as_x27_992_ = v_tail_997_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg___boxed(lean_object* v_as_x27_1006_, lean_object* v_b_1007_, lean_object* v___y_1008_){
_start:
{
lean_object* v_res_1009_; 
v_res_1009_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(v_as_x27_1006_, v_b_1007_);
lean_dec(v_as_x27_1006_);
return v_res_1009_;
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_replay(lean_object* v_newConstants_1010_, lean_object* v_env_1011_){
_start:
{
lean_object* v___y_1014_; lean_object* v___y_1015_; lean_object* v_buckets_1034_; lean_object* v_remaining_1035_; lean_object* v___y_1037_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; uint8_t v___x_1057_; 
v_buckets_1034_ = lean_ctor_get(v_newConstants_1010_, 1);
v_remaining_1035_ = l_Lean_NameSet_empty;
v___x_1054_ = lean_box(0);
v___x_1055_ = lean_array_get_size(v_buckets_1034_);
v___x_1056_ = lean_unsigned_to_nat(0u);
v___x_1057_ = lean_nat_dec_lt(v___x_1056_, v___x_1055_);
if (v___x_1057_ == 0)
{
v___y_1037_ = v___x_1054_;
goto v___jp_1036_;
}
else
{
size_t v___x_1058_; size_t v___x_1059_; lean_object* v___x_1060_; 
v___x_1058_ = lean_usize_of_nat(v___x_1055_);
v___x_1059_ = ((size_t)0ULL);
v___x_1060_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00Lean_Kernel_Environment_replay_spec__2(v_buckets_1034_, v___x_1058_, v___x_1059_, v___x_1054_);
v___y_1037_ = v___x_1060_;
goto v___jp_1036_;
}
v___jp_1013_:
{
if (lean_obj_tag(v___y_1015_) == 0)
{
lean_object* v___x_1017_; uint8_t v_isShared_1018_; uint8_t v_isSharedCheck_1024_; 
v_isSharedCheck_1024_ = !lean_is_exclusive(v___y_1015_);
if (v_isSharedCheck_1024_ == 0)
{
lean_object* v_unused_1025_; 
v_unused_1025_ = lean_ctor_get(v___y_1015_, 0);
lean_dec(v_unused_1025_);
v___x_1017_ = v___y_1015_;
v_isShared_1018_ = v_isSharedCheck_1024_;
goto v_resetjp_1016_;
}
else
{
lean_dec(v___y_1015_);
v___x_1017_ = lean_box(0);
v_isShared_1018_ = v_isSharedCheck_1024_;
goto v_resetjp_1016_;
}
v_resetjp_1016_:
{
lean_object* v___x_1019_; lean_object* v_env_1020_; lean_object* v___x_1022_; 
v___x_1019_ = lean_st_ref_get(v___y_1014_);
lean_dec(v___y_1014_);
v_env_1020_ = lean_ctor_get(v___x_1019_, 0);
lean_inc_ref(v_env_1020_);
lean_dec(v___x_1019_);
if (v_isShared_1018_ == 0)
{
lean_ctor_set(v___x_1017_, 0, v_env_1020_);
v___x_1022_ = v___x_1017_;
goto v_reusejp_1021_;
}
else
{
lean_object* v_reuseFailAlloc_1023_; 
v_reuseFailAlloc_1023_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1023_, 0, v_env_1020_);
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
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
lean_dec(v___y_1014_);
v_a_1026_ = lean_ctor_get(v___y_1015_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___y_1015_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___y_1015_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___y_1015_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
v___jp_1036_:
{
lean_object* v___x_1038_; lean_object* v_a_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v___x_1038_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(v___y_1037_, v_remaining_1035_);
lean_dec(v___y_1037_);
v_a_1039_ = lean_ctor_get(v___x_1038_, 0);
lean_inc_n(v_a_1039_, 2);
lean_dec_ref(v___x_1038_);
v___x_1040_ = lean_box(0);
v___x_1041_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1041_, 0, v_env_1011_);
lean_ctor_set(v___x_1041_, 1, v_a_1039_);
lean_ctor_set(v___x_1041_, 2, v_remaining_1035_);
lean_ctor_set(v___x_1041_, 3, v_remaining_1035_);
lean_ctor_set(v___x_1041_, 4, v_remaining_1035_);
v___x_1042_ = lean_st_mk_ref(v___x_1041_);
v___x_1043_ = l_Std_DTreeMap_Internal_Impl_forInStep___at___00__private_Lean_Replay_0__Lean_Kernel_Environment_Replay_replayConstants_spec__12(v___x_1040_, v_a_1039_, v_newConstants_1010_, v___x_1042_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v___x_1044_; 
lean_dec_ref_known(v___x_1043_, 1);
v___x_1044_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedConstructors(v_newConstants_1010_, v___x_1042_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v___x_1045_; 
lean_dec_ref_known(v___x_1044_, 1);
v___x_1045_ = l___private_Lean_Replay_0__Lean_Kernel_Environment_Replay_checkPostponedRecursors(v_newConstants_1010_, v___x_1042_);
v___y_1014_ = v___x_1042_;
v___y_1015_ = v___x_1045_;
goto v___jp_1013_;
}
else
{
v___y_1014_ = v___x_1042_;
v___y_1015_ = v___x_1044_;
goto v___jp_1013_;
}
}
else
{
lean_object* v_a_1046_; lean_object* v___x_1048_; uint8_t v_isShared_1049_; uint8_t v_isSharedCheck_1053_; 
lean_dec(v___x_1042_);
v_a_1046_ = lean_ctor_get(v___x_1043_, 0);
v_isSharedCheck_1053_ = !lean_is_exclusive(v___x_1043_);
if (v_isSharedCheck_1053_ == 0)
{
v___x_1048_ = v___x_1043_;
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
else
{
lean_inc(v_a_1046_);
lean_dec(v___x_1043_);
v___x_1048_ = lean_box(0);
v_isShared_1049_ = v_isSharedCheck_1053_;
goto v_resetjp_1047_;
}
v_resetjp_1047_:
{
lean_object* v___x_1051_; 
if (v_isShared_1049_ == 0)
{
v___x_1051_ = v___x_1048_;
goto v_reusejp_1050_;
}
else
{
lean_object* v_reuseFailAlloc_1052_; 
v_reuseFailAlloc_1052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1052_, 0, v_a_1046_);
v___x_1051_ = v_reuseFailAlloc_1052_;
goto v_reusejp_1050_;
}
v_reusejp_1050_:
{
return v___x_1051_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Kernel_Environment_replay___boxed(lean_object* v_newConstants_1061_, lean_object* v_env_1062_, lean_object* v_a_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = l_Lean_Kernel_Environment_replay(v_newConstants_1061_, v_env_1062_);
lean_dec_ref(v_newConstants_1061_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0(lean_object* v_as_1065_, lean_object* v_as_x27_1066_, lean_object* v_b_1067_, lean_object* v_a_1068_){
_start:
{
lean_object* v___x_1070_; 
v___x_1070_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___redArg(v_as_x27_1066_, v_b_1067_);
return v___x_1070_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0___boxed(lean_object* v_as_1071_, lean_object* v_as_x27_1072_, lean_object* v_b_1073_, lean_object* v_a_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_List_forIn_x27_loop___at___00Lean_Kernel_Environment_replay_spec__0(v_as_1071_, v_as_x27_1072_, v_b_1073_, v_a_1074_);
lean_dec(v_as_x27_1072_);
lean_dec(v_as_1071_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_replay(lean_object* v_newConstants_1077_, lean_object* v_env_1078_){
_start:
{
lean_object* v___x_1080_; lean_object* v___x_1081_; 
v___x_1080_ = lean_elab_environment_to_kernel_env(v_env_1078_);
v___x_1081_ = l_Lean_Kernel_Environment_replay(v_newConstants_1077_, v___x_1080_);
if (lean_obj_tag(v___x_1081_) == 0)
{
lean_object* v_a_1082_; lean_object* v___x_1084_; uint8_t v_isShared_1085_; uint8_t v_isSharedCheck_1090_; 
v_a_1082_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1084_ = v___x_1081_;
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
else
{
lean_inc(v_a_1082_);
lean_dec(v___x_1081_);
v___x_1084_ = lean_box(0);
v_isShared_1085_ = v_isSharedCheck_1090_;
goto v_resetjp_1083_;
}
v_resetjp_1083_:
{
lean_object* v___x_1086_; lean_object* v___x_1088_; 
v___x_1086_ = l_Lean_Environment_ofKernelEnv(v_a_1082_);
if (v_isShared_1085_ == 0)
{
lean_ctor_set(v___x_1084_, 0, v___x_1086_);
v___x_1088_ = v___x_1084_;
goto v_reusejp_1087_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v___x_1086_);
v___x_1088_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1087_;
}
v_reusejp_1087_:
{
return v___x_1088_;
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
v_a_1091_ = lean_ctor_get(v___x_1081_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1081_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1081_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1081_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Environment_replay___boxed(lean_object* v_newConstants_1099_, lean_object* v_env_1100_, lean_object* v_a_1101_){
_start:
{
lean_object* v_res_1102_; 
v_res_1102_ = l_Lean_Environment_replay(v_newConstants_1099_, v_env_1100_);
lean_dec_ref(v_newConstants_1099_);
return v_res_1102_;
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
