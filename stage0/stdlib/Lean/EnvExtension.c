// Lean compiler output
// Module: Lean.EnvExtension
// Imports: public import Lean.Environment
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
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_instInhabitedEnvExtension_default___redArg();
uint8_t l_Lean_NameSet_contains(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_instMonadEIO___aux__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerPersistentEnvExtensionUnsafe___redArg(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_id___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_getModuleEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
uint8_t l_Lean_Name_quickLt(lean_object*, lean_object*);
lean_object* l_Option_isSome___boxed(lean_object*, lean_object*);
lean_object* l_Array_binSearchAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_NameSet_empty;
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_Environment_allImportedModuleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_PersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__0 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__0_value;
static const lean_closure_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__1 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__1_value;
static const lean_closure_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__2 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__2_value;
static const lean_closure_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__3 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__3_value;
static const lean_closure_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__4 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__4_value;
static const lean_closure_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__5 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__5_value;
static const lean_closure_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__6 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__6_value;
static const lean_ctor_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__0_value),((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__1_value)}};
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__7 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__7_value;
static const lean_ctor_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__7_value),((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__2_value),((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__3_value),((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__4_value),((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__5_value)}};
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__8 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__8_value;
static const lean_ctor_object l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__8_value),((lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__6_value)}};
static const lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__9 = (const lean_object*)&l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__0 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__0_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__1 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__1_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__2 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__2_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__3 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__3_value;
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value_aux_0),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value_aux_1),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value_aux_2),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4_value;
static const lean_array_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__6 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__6_value;
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value_aux_0),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value_aux_1),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value_aux_2),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__6_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__8 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__8_value;
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__8_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__9 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__9_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "exact"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__10 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__10_value;
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value_aux_0),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value_aux_1),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value_aux_2),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__10_value),LEAN_SCALAR_PTR_LITERAL(108, 106, 111, 83, 219, 207, 32, 208)}};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11_value;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__12;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__13;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__14 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__14_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "declName"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__15 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__15_value;
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value_aux_0),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value_aux_1),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__14_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value_aux_2),((lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__15_value),LEAN_SCALAR_PTR_LITERAL(113, 211, 58, 33, 138, 196, 138, 106)}};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16_value;
static const lean_string_object l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "decl_name%"};
static const lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__17 = (const lean_object*)&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__17_value;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__18;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__19;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__20;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__21;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__22;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__23;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__24;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__25;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__26;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__27;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam;
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "number of local entries: "};
static const lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2(lean_object*);
static const lean_array_object l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___closed__0 = (const lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_registerSimplePersistentEnvExtension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___closed__0 = (const lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___closed__0_value;
static const lean_closure_object l_Lean_registerSimplePersistentEnvExtension___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___closed__1 = (const lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___closed__1_value;
static const lean_array_object l_Lean_registerSimplePersistentEnvExtension___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___closed__2 = (const lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "(`Inhabited.default` for `IO.Error`)"};
static const lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 18}, .m_objs = {((lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__0_value)}};
static const lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_ctor_object l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___closed__0_value),((lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___closed__0_value),((lean_object*)&l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___closed__0_value)}};
static const lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__0 = (const lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__0_value;
static const lean_closure_object l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__1 = (const lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__1_value;
static const lean_closure_object l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__2 = (const lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__2_value;
static const lean_closure_object l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__3 = (const lean_object*)&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__3_value;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4;
static lean_once_cell_t l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_SimplePersistentEnvExtension_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___auto__1;
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__1(lean_object*);
LEAN_EXPORT uint8_t l_Lean_mkTagDeclarationExtension___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_mkTagDeclarationExtension___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_NameSet_insert, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkTagDeclarationExtension___closed__0 = (const lean_object*)&l_Lean_mkTagDeclarationExtension___closed__0_value;
static const lean_closure_object l_Lean_mkTagDeclarationExtension___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkTagDeclarationExtension___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkTagDeclarationExtension___closed__1 = (const lean_object*)&l_Lean_mkTagDeclarationExtension___closed__1_value;
static const lean_closure_object l_Lean_mkTagDeclarationExtension___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkTagDeclarationExtension___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkTagDeclarationExtension___closed__2 = (const lean_object*)&l_Lean_mkTagDeclarationExtension___closed__2_value;
static const lean_closure_object l_Lean_mkTagDeclarationExtension___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkTagDeclarationExtension___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkTagDeclarationExtension___closed__3 = (const lean_object*)&l_Lean_mkTagDeclarationExtension___closed__3_value;
static const lean_closure_object l_Lean_mkTagDeclarationExtension___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*4, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed, .m_arity = 7, .m_num_fixed = 4, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_mkTagDeclarationExtension___closed__3_value),((lean_object*)&l_Lean_mkTagDeclarationExtension___closed__0_value)} };
static const lean_object* l_Lean_mkTagDeclarationExtension___closed__4 = (const lean_object*)&l_Lean_mkTagDeclarationExtension___closed__4_value;
static const lean_ctor_object l_Lean_mkTagDeclarationExtension___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkTagDeclarationExtension___closed__4_value)}};
static const lean_object* l_Lean_mkTagDeclarationExtension___closed__5 = (const lean_object*)&l_Lean_mkTagDeclarationExtension___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__0 = (const lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__0_value),((lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__0_value),((lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__0_value)}};
static const lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__1 = (const lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_TagDeclarationExtension_instInhabited___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TagDeclarationExtension_instInhabited___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TagDeclarationExtension_instInhabited___closed__0 = (const lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___closed__0_value;
static const lean_closure_object l_Lean_TagDeclarationExtension_instInhabited___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TagDeclarationExtension_instInhabited___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TagDeclarationExtension_instInhabited___closed__1 = (const lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___closed__1_value;
static const lean_closure_object l_Lean_TagDeclarationExtension_instInhabited___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TagDeclarationExtension_instInhabited___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TagDeclarationExtension_instInhabited___closed__2 = (const lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___closed__2_value;
static const lean_closure_object l_Lean_TagDeclarationExtension_instInhabited___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_TagDeclarationExtension_instInhabited___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_TagDeclarationExtension_instInhabited___closed__3 = (const lean_object*)&l_Lean_TagDeclarationExtension_instInhabited___closed__3_value;
static lean_once_cell_t l_Lean_TagDeclarationExtension_instInhabited___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagDeclarationExtension_instInhabited___closed__4;
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited;
LEAN_EXPORT lean_object* l_panic___at___00Lean_TagDeclarationExtension_tag_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_TagDeclarationExtension_tag_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_TagDeclarationExtension_tag___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Lean.EnvExtension"};
static const lean_object* l_Lean_TagDeclarationExtension_tag___closed__0 = (const lean_object*)&l_Lean_TagDeclarationExtension_tag___closed__0_value;
static const lean_string_object l_Lean_TagDeclarationExtension_tag___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.TagDeclarationExtension.tag"};
static const lean_object* l_Lean_TagDeclarationExtension_tag___closed__1 = (const lean_object*)&l_Lean_TagDeclarationExtension_tag___closed__1_value;
static const lean_string_object l_Lean_TagDeclarationExtension_tag___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 110, .m_capacity = 110, .m_length = 109, .m_data = "assertion violation: env.getModuleIdxFor\? declName |>.isNone -- See comment at `TagDeclarationExtension`\n    "};
static const lean_object* l_Lean_TagDeclarationExtension_tag___closed__2 = (const lean_object*)&l_Lean_TagDeclarationExtension_tag___closed__2_value;
static lean_once_cell_t l_Lean_TagDeclarationExtension_tag___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_TagDeclarationExtension_tag___closed__3;
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_tag(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_TagDeclarationExtension_isTagged___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_TagDeclarationExtension_isTagged___closed__0 = (const lean_object*)&l_Lean_TagDeclarationExtension_isTagged___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_isTagged___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__0 = (const lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__0_value),((lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__1 = (const lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__3___boxed(lean_object*);
static const lean_closure_object l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__0_value;
static const lean_closure_object l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__1_value;
static const lean_closure_object l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__2 = (const lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__2_value;
static const lean_closure_object l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__3___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__3 = (const lean_object*)&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__3_value;
static lean_once_cell_t l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__4;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedMapDeclarationExtension_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___auto__3;
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__2(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__2___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_mkMapDeclarationExtension___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkMapDeclarationExtension___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkMapDeclarationExtension___redArg___closed__0 = (const lean_object*)&l_Lean_mkMapDeclarationExtension___redArg___closed__0_value;
static const lean_closure_object l_Lean_mkMapDeclarationExtension___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkMapDeclarationExtension___redArg___lam__3___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkMapDeclarationExtension___redArg___closed__1 = (const lean_object*)&l_Lean_mkMapDeclarationExtension___redArg___closed__1_value;
static const lean_closure_object l_Lean_mkMapDeclarationExtension___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkMapDeclarationExtension___redArg___lam__2___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_mkMapDeclarationExtension___redArg___closed__2 = (const lean_object*)&l_Lean_mkMapDeclarationExtension___redArg___closed__2_value;
static const lean_closure_object l_Lean_mkMapDeclarationExtension___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkMapDeclarationExtension___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_mkMapDeclarationExtension___redArg___closed__3 = (const lean_object*)&l_Lean_mkMapDeclarationExtension___redArg___closed__3_value;
static const lean_closure_object l_Lean_mkMapDeclarationExtension___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_mkMapDeclarationExtension___redArg___lam__5___boxed, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))} };
static const lean_object* l_Lean_mkMapDeclarationExtension___redArg___closed__4 = (const lean_object*)&l_Lean_mkMapDeclarationExtension___redArg___closed__4_value;
static const lean_ctor_object l_Lean_mkMapDeclarationExtension___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_mkMapDeclarationExtension___redArg___closed__1_value)}};
static const lean_object* l_Lean_mkMapDeclarationExtension___redArg___closed__5 = (const lean_object*)&l_Lean_mkMapDeclarationExtension___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MapDeclarationExtension_insert___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Lean.MapDeclarationExtension.insert"};
static const lean_object* l_Lean_MapDeclarationExtension_insert___redArg___closed__0 = (const lean_object*)&l_Lean_MapDeclarationExtension_insert___redArg___closed__0_value;
static const lean_string_object l_Lean_MapDeclarationExtension_insert___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "cannot insert `"};
static const lean_object* l_Lean_MapDeclarationExtension_insert___redArg___closed__1 = (const lean_object*)&l_Lean_MapDeclarationExtension_insert___redArg___closed__1_value;
static const lean_string_object l_Lean_MapDeclarationExtension_insert___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "` into `"};
static const lean_object* l_Lean_MapDeclarationExtension_insert___redArg___closed__2 = (const lean_object*)&l_Lean_MapDeclarationExtension_insert___redArg___closed__2_value;
static const lean_string_object l_Lean_MapDeclarationExtension_insert___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "`, it is not defined in the current module but in `"};
static const lean_object* l_Lean_MapDeclarationExtension_insert___redArg___closed__3 = (const lean_object*)&l_Lean_MapDeclarationExtension_insert___redArg___closed__3_value;
static const lean_string_object l_Lean_MapDeclarationExtension_insert___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_MapDeclarationExtension_insert___redArg___closed__4 = (const lean_object*)&l_Lean_MapDeclarationExtension_insert___redArg___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_find_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MapDeclarationExtension_find_x3f___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__0 = (const lean_object*)&l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__0_value;
static const lean_closure_object l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_id___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__1 = (const lean_object*)&l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MapDeclarationExtension_contains___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Option_isSome___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_MapDeclarationExtension_contains___redArg___closed__0 = (const lean_object*)&l_Lean_MapDeclarationExtension_contains___redArg___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__0(lean_object* v_addEntryFn_1_, lean_object* v_x1_2_, lean_object* v_x2_3_){
_start:
{
lean_object* v___x_4_; 
v___x_4_ = lean_apply_2(v_addEntryFn_1_, v_x1_2_, v_x2_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___redArg___lam__1(lean_object* v___f_24_, lean_object* v_x1_25_, lean_object* v_x2_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; lean_object* v___x_29_; uint8_t v___x_30_; 
v___x_27_ = lean_unsigned_to_nat(0u);
v___x_28_ = lean_array_get_size(v_x2_26_);
v___x_29_ = ((lean_object*)(l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__9));
v___x_30_ = lean_nat_dec_lt(v___x_27_, v___x_28_);
if (v___x_30_ == 0)
{
lean_dec_ref(v_x2_26_);
lean_dec(v___f_24_);
return v_x1_25_;
}
else
{
uint8_t v___x_31_; 
v___x_31_ = lean_nat_dec_le(v___x_28_, v___x_28_);
if (v___x_31_ == 0)
{
if (v___x_30_ == 0)
{
lean_dec_ref(v_x2_26_);
lean_dec(v___f_24_);
return v_x1_25_;
}
else
{
size_t v___x_32_; size_t v___x_33_; lean_object* v___x_34_; 
v___x_32_ = ((size_t)0ULL);
v___x_33_ = lean_usize_of_nat(v___x_28_);
v___x_34_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_29_, v___f_24_, v_x2_26_, v___x_32_, v___x_33_, v_x1_25_);
return v___x_34_;
}
}
else
{
size_t v___x_35_; size_t v___x_36_; lean_object* v___x_37_; 
v___x_35_ = ((size_t)0ULL);
v___x_36_ = lean_usize_of_nat(v___x_28_);
v___x_37_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_29_, v___f_24_, v_x2_26_, v___x_35_, v___x_36_, v_x1_25_);
return v___x_37_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries___redArg(lean_object* v_addEntryFn_38_, lean_object* v_initState_39_, lean_object* v_as_40_){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; uint8_t v___x_44_; 
v___x_41_ = lean_unsigned_to_nat(0u);
v___x_42_ = lean_array_get_size(v_as_40_);
v___x_43_ = ((lean_object*)(l_Lean_mkStateFromImportedEntries___redArg___lam__1___closed__9));
v___x_44_ = lean_nat_dec_lt(v___x_41_, v___x_42_);
if (v___x_44_ == 0)
{
lean_dec_ref(v_as_40_);
lean_dec(v_addEntryFn_38_);
return v_initState_39_;
}
else
{
lean_object* v___f_45_; lean_object* v___f_46_; uint8_t v___x_47_; 
v___f_45_ = lean_alloc_closure((void*)(l_Lean_mkStateFromImportedEntries___redArg___lam__0), 3, 1);
lean_closure_set(v___f_45_, 0, v_addEntryFn_38_);
v___f_46_ = lean_alloc_closure((void*)(l_Lean_mkStateFromImportedEntries___redArg___lam__1), 3, 1);
lean_closure_set(v___f_46_, 0, v___f_45_);
v___x_47_ = lean_nat_dec_le(v___x_42_, v___x_42_);
if (v___x_47_ == 0)
{
if (v___x_44_ == 0)
{
lean_dec_ref(v___f_46_);
lean_dec_ref(v_as_40_);
return v_initState_39_;
}
else
{
size_t v___x_48_; size_t v___x_49_; lean_object* v___x_50_; 
v___x_48_ = ((size_t)0ULL);
v___x_49_ = lean_usize_of_nat(v___x_42_);
v___x_50_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_43_, v___f_46_, v_as_40_, v___x_48_, v___x_49_, v_initState_39_);
return v___x_50_;
}
}
else
{
size_t v___x_51_; size_t v___x_52_; lean_object* v___x_53_; 
v___x_51_ = ((size_t)0ULL);
v___x_52_ = lean_usize_of_nat(v___x_42_);
v___x_53_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_43_, v___f_46_, v_as_40_, v___x_51_, v___x_52_, v_initState_39_);
return v___x_53_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkStateFromImportedEntries(lean_object* v_00_u03b1_54_, lean_object* v_00_u03c3_55_, lean_object* v_addEntryFn_56_, lean_object* v_initState_57_, lean_object* v_as_58_){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = l_Lean_mkStateFromImportedEntries___redArg(v_addEntryFn_56_, v_initState_57_, v_as_58_);
return v___x_59_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__12(void){
_start:
{
lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_86_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__10));
v___x_87_ = l_Lean_mkAtom(v___x_86_);
return v___x_87_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__13(void){
_start:
{
lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; 
v___x_88_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__12, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__12_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__12);
v___x_89_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5));
v___x_90_ = lean_array_push(v___x_89_, v___x_88_);
return v___x_90_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__18(void){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__17));
v___x_100_ = l_Lean_mkAtom(v___x_99_);
return v___x_100_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__19(void){
_start:
{
lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; 
v___x_101_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__18, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__18_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__18);
v___x_102_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5));
v___x_103_ = lean_array_push(v___x_102_, v___x_101_);
return v___x_103_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__20(void){
_start:
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_104_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__19, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__19_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__19);
v___x_105_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__16));
v___x_106_ = lean_box(2);
v___x_107_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_107_, 0, v___x_106_);
lean_ctor_set(v___x_107_, 1, v___x_105_);
lean_ctor_set(v___x_107_, 2, v___x_104_);
return v___x_107_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__21(void){
_start:
{
lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_108_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__20, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__20_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__20);
v___x_109_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__13, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__13_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__13);
v___x_110_ = lean_array_push(v___x_109_, v___x_108_);
return v___x_110_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__22(void){
_start:
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_111_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__21, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__21_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__21);
v___x_112_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__11));
v___x_113_ = lean_box(2);
v___x_114_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_114_, 0, v___x_113_);
lean_ctor_set(v___x_114_, 1, v___x_112_);
lean_ctor_set(v___x_114_, 2, v___x_111_);
return v___x_114_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__23(void){
_start:
{
lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__22, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__22_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__22);
v___x_116_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5));
v___x_117_ = lean_array_push(v___x_116_, v___x_115_);
return v___x_117_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__24(void){
_start:
{
lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_118_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__23, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__23_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__23);
v___x_119_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__9));
v___x_120_ = lean_box(2);
v___x_121_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
lean_ctor_set(v___x_121_, 1, v___x_119_);
lean_ctor_set(v___x_121_, 2, v___x_118_);
return v___x_121_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__25(void){
_start:
{
lean_object* v___x_122_; lean_object* v___x_123_; lean_object* v___x_124_; 
v___x_122_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__24, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__24_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__24);
v___x_123_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5));
v___x_124_ = lean_array_push(v___x_123_, v___x_122_);
return v___x_124_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__26(void){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_125_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__25, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__25_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__25);
v___x_126_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__7));
v___x_127_ = lean_box(2);
v___x_128_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
lean_ctor_set(v___x_128_, 2, v___x_125_);
return v___x_128_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__27(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__26, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__26_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__26);
v___x_130_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__5));
v___x_131_ = lean_array_push(v___x_130_, v___x_129_);
return v___x_131_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; 
v___x_132_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__27, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__27_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__27);
v___x_133_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__4));
v___x_134_ = lean_box(2);
v___x_135_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
lean_ctor_set(v___x_135_, 1, v___x_133_);
lean_ctor_set(v___x_135_, 2, v___x_132_);
return v___x_135_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam(void){
_start:
{
lean_object* v___x_136_; 
v___x_136_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28);
return v___x_136_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__1___redArg(lean_object* v_addEntryFn_137_, lean_object* v_x_138_, lean_object* v_x_139_){
_start:
{
if (lean_obj_tag(v_x_139_) == 0)
{
lean_dec(v_addEntryFn_137_);
return v_x_138_;
}
else
{
lean_object* v_head_140_; lean_object* v_tail_141_; lean_object* v___x_142_; 
v_head_140_ = lean_ctor_get(v_x_139_, 0);
lean_inc(v_head_140_);
v_tail_141_ = lean_ctor_get(v_x_139_, 1);
lean_inc(v_tail_141_);
lean_dec_ref_known(v_x_139_, 2);
lean_inc(v_addEntryFn_137_);
v___x_142_ = lean_apply_2(v_addEntryFn_137_, v_x_138_, v_head_140_);
v_x_138_ = v___x_142_;
v_x_139_ = v_tail_141_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__0___redArg(lean_object* v___x_144_, lean_object* v_a_145_, lean_object* v_a_146_){
_start:
{
if (lean_obj_tag(v_a_145_) == 0)
{
lean_object* v___x_147_; 
lean_dec_ref(v___x_144_);
v___x_147_ = l_List_reverse___redArg(v_a_146_);
return v___x_147_;
}
else
{
lean_object* v_head_148_; lean_object* v_tail_149_; lean_object* v___x_151_; uint8_t v_isShared_152_; uint8_t v_isSharedCheck_160_; 
v_head_148_ = lean_ctor_get(v_a_145_, 0);
v_tail_149_ = lean_ctor_get(v_a_145_, 1);
v_isSharedCheck_160_ = !lean_is_exclusive(v_a_145_);
if (v_isSharedCheck_160_ == 0)
{
v___x_151_ = v_a_145_;
v_isShared_152_ = v_isSharedCheck_160_;
goto v_resetjp_150_;
}
else
{
lean_inc(v_tail_149_);
lean_inc(v_head_148_);
lean_dec(v_a_145_);
v___x_151_ = lean_box(0);
v_isShared_152_ = v_isSharedCheck_160_;
goto v_resetjp_150_;
}
v_resetjp_150_:
{
lean_object* v___x_153_; uint8_t v___x_154_; 
lean_inc_ref(v___x_144_);
lean_inc(v_head_148_);
v___x_153_ = lean_apply_1(v___x_144_, v_head_148_);
v___x_154_ = lean_unbox(v___x_153_);
if (v___x_154_ == 0)
{
lean_del_object(v___x_151_);
lean_dec(v_head_148_);
v_a_145_ = v_tail_149_;
goto _start;
}
else
{
lean_object* v___x_157_; 
if (v_isShared_152_ == 0)
{
lean_ctor_set(v___x_151_, 1, v_a_146_);
v___x_157_ = v___x_151_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_head_148_);
lean_ctor_set(v_reuseFailAlloc_159_, 1, v_a_146_);
v___x_157_ = v_reuseFailAlloc_159_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
v_a_145_ = v_tail_149_;
v_a_146_ = v___x_157_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___redArg(lean_object* v_p_161_, lean_object* v_addEntryFn_162_, lean_object* v_newEntries_163_, lean_object* v_s_164_){
_start:
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v_newEntries_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
lean_inc(v_s_164_);
v___x_165_ = lean_apply_1(v_p_161_, v_s_164_);
v___x_166_ = lean_box(0);
v_newEntries_167_ = l_List_filterTR_loop___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__0___redArg(v___x_165_, v_newEntries_163_, v___x_166_);
lean_inc(v_newEntries_167_);
v___x_168_ = l_List_foldl___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__1___redArg(v_addEntryFn_162_, v_s_164_, v_newEntries_167_);
v___x_169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_169_, 0, v_newEntries_167_);
lean_ctor_set(v___x_169_, 1, v___x_168_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter(lean_object* v_00_u03c3_170_, lean_object* v_00_u03b1_171_, lean_object* v_p_172_, lean_object* v_addEntryFn_173_, lean_object* v_newEntries_174_, lean_object* v_x_175_, lean_object* v_s_176_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_SimplePersistentEnvExtension_replayOfFilter___redArg(v_p_172_, v_addEntryFn_173_, v_newEntries_174_, v_s_176_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_replayOfFilter___boxed(lean_object* v_00_u03c3_178_, lean_object* v_00_u03b1_179_, lean_object* v_p_180_, lean_object* v_addEntryFn_181_, lean_object* v_newEntries_182_, lean_object* v_x_183_, lean_object* v_s_184_){
_start:
{
lean_object* v_res_185_; 
v_res_185_ = l_Lean_SimplePersistentEnvExtension_replayOfFilter(v_00_u03c3_178_, v_00_u03b1_179_, v_p_180_, v_addEntryFn_181_, v_newEntries_182_, v_x_183_, v_s_184_);
lean_dec(v_x_183_);
return v_res_185_;
}
}
LEAN_EXPORT lean_object* l_List_filterTR_loop___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__0(lean_object* v_00_u03b1_186_, lean_object* v___x_187_, lean_object* v_a_188_, lean_object* v_a_189_){
_start:
{
lean_object* v___x_190_; 
v___x_190_ = l_List_filterTR_loop___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__0___redArg(v___x_187_, v_a_188_, v_a_189_);
return v___x_190_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__1(lean_object* v_00_u03c3_191_, lean_object* v_00_u03b1_192_, lean_object* v_addEntryFn_193_, lean_object* v_x_194_, lean_object* v_x_195_){
_start:
{
lean_object* v___x_196_; 
v___x_196_ = l_List_foldl___at___00Lean_SimplePersistentEnvExtension_replayOfFilter_spec__1___redArg(v_addEntryFn_193_, v_x_194_, v_x_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__0(lean_object* v_addEntryFn_197_, lean_object* v_s_198_, lean_object* v_e_199_){
_start:
{
lean_object* v_fst_200_; lean_object* v_snd_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_210_; 
v_fst_200_ = lean_ctor_get(v_s_198_, 0);
v_snd_201_ = lean_ctor_get(v_s_198_, 1);
v_isSharedCheck_210_ = !lean_is_exclusive(v_s_198_);
if (v_isSharedCheck_210_ == 0)
{
v___x_203_ = v_s_198_;
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_snd_201_);
lean_inc(v_fst_200_);
lean_dec(v_s_198_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_210_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_208_; 
lean_inc(v_e_199_);
v___x_205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_205_, 0, v_e_199_);
lean_ctor_set(v___x_205_, 1, v_fst_200_);
v___x_206_ = lean_apply_2(v_addEntryFn_197_, v_snd_201_, v_e_199_);
if (v_isShared_204_ == 0)
{
lean_ctor_set(v___x_203_, 1, v___x_206_);
lean_ctor_set(v___x_203_, 0, v___x_205_);
v___x_208_ = v___x_203_;
goto v_reusejp_207_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v___x_205_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___x_206_);
v___x_208_ = v_reuseFailAlloc_209_;
goto v_reusejp_207_;
}
v_reusejp_207_:
{
return v___x_208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__1(lean_object* v_exportEntriesFnEx_x3f_211_, lean_object* v_toArrayFn_212_, lean_object* v_env_213_, lean_object* v_s_214_){
_start:
{
if (lean_obj_tag(v_exportEntriesFnEx_x3f_211_) == 0)
{
lean_object* v_fst_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___x_218_; 
lean_dec_ref(v_env_213_);
v_fst_215_ = lean_ctor_get(v_s_214_, 0);
lean_inc(v_fst_215_);
lean_dec_ref(v_s_214_);
v___x_216_ = l_List_reverse___redArg(v_fst_215_);
v___x_217_ = lean_apply_1(v_toArrayFn_212_, v___x_216_);
lean_inc_ref_n(v___x_217_, 2);
v___x_218_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_218_, 0, v___x_217_);
lean_ctor_set(v___x_218_, 1, v___x_217_);
lean_ctor_set(v___x_218_, 2, v___x_217_);
return v___x_218_;
}
else
{
lean_object* v_val_219_; lean_object* v_fst_220_; lean_object* v_snd_221_; lean_object* v___x_222_; lean_object* v___x_223_; 
lean_dec_ref(v_toArrayFn_212_);
v_val_219_ = lean_ctor_get(v_exportEntriesFnEx_x3f_211_, 0);
lean_inc(v_val_219_);
lean_dec_ref_known(v_exportEntriesFnEx_x3f_211_, 1);
v_fst_220_ = lean_ctor_get(v_s_214_, 0);
lean_inc(v_fst_220_);
v_snd_221_ = lean_ctor_get(v_s_214_, 1);
lean_inc(v_snd_221_);
lean_dec_ref(v_s_214_);
v___x_222_ = l_List_reverse___redArg(v_fst_220_);
v___x_223_ = lean_apply_3(v_val_219_, v_env_213_, v_snd_221_, v___x_222_);
return v___x_223_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2(lean_object* v_s_227_){
_start:
{
lean_object* v_fst_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_239_; 
v_fst_228_ = lean_ctor_get(v_s_227_, 0);
v_isSharedCheck_239_ = !lean_is_exclusive(v_s_227_);
if (v_isSharedCheck_239_ == 0)
{
lean_object* v_unused_240_; 
v_unused_240_ = lean_ctor_get(v_s_227_, 1);
lean_dec(v_unused_240_);
v___x_230_ = v_s_227_;
v_isShared_231_ = v_isSharedCheck_239_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_fst_228_);
lean_dec(v_s_227_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_239_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_237_; 
v___x_232_ = ((lean_object*)(l_Lean_registerSimplePersistentEnvExtension___redArg___lam__2___closed__1));
v___x_233_ = l_List_lengthTR___redArg(v_fst_228_);
lean_dec(v_fst_228_);
v___x_234_ = l_Nat_reprFast(v___x_233_);
v___x_235_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
if (v_isShared_231_ == 0)
{
lean_ctor_set_tag(v___x_230_, 5);
lean_ctor_set(v___x_230_, 1, v___x_235_);
lean_ctor_set(v___x_230_, 0, v___x_232_);
v___x_237_ = v___x_230_;
goto v_reusejp_236_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_232_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v___x_235_);
v___x_237_ = v_reuseFailAlloc_238_;
goto v_reusejp_236_;
}
v_reusejp_236_:
{
return v___x_237_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3(lean_object* v_x_243_){
_start:
{
lean_object* v___x_244_; 
v___x_244_ = ((lean_object*)(l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___closed__0));
return v___x_244_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3___boxed(lean_object* v_x_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l_Lean_registerSimplePersistentEnvExtension___redArg___lam__3(v_x_245_);
lean_dec_ref(v_x_245_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__4(lean_object* v_addImportedFn_247_, lean_object* v___x_248_, lean_object* v_as_249_, lean_object* v___y_250_){
_start:
{
lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; 
v___x_252_ = lean_apply_1(v_addImportedFn_247_, v_as_249_);
v___x_253_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_248_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__4___boxed(lean_object* v_addImportedFn_255_, lean_object* v___x_256_, lean_object* v_as_257_, lean_object* v___y_258_, lean_object* v___y_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_registerSimplePersistentEnvExtension___redArg___lam__4(v_addImportedFn_255_, v___x_256_, v_as_257_, v___y_258_);
lean_dec_ref(v___y_258_);
return v_res_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__5(lean_object* v___x_261_, lean_object* v_val_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_){
_start:
{
lean_object* v_fst_267_; lean_object* v_snd_268_; lean_object* v_fst_269_; lean_object* v_snd_270_; lean_object* v_fst_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v_newEntries_276_; lean_object* v___x_277_; lean_object* v_fst_278_; lean_object* v_snd_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_287_; 
v_fst_267_ = lean_ctor_get(v___y_266_, 0);
lean_inc(v_fst_267_);
v_snd_268_ = lean_ctor_get(v___y_266_, 1);
lean_inc(v_snd_268_);
lean_dec_ref(v___y_266_);
v_fst_269_ = lean_ctor_get(v___y_264_, 0);
lean_inc_n(v_fst_269_, 2);
v_snd_270_ = lean_ctor_get(v___y_264_, 1);
lean_inc(v_snd_270_);
lean_dec_ref(v___y_264_);
v_fst_271_ = lean_ctor_get(v___y_263_, 0);
v___x_272_ = l_List_lengthTR___redArg(v_fst_269_);
v___x_273_ = l_List_lengthTR___redArg(v_fst_271_);
v___x_274_ = lean_nat_sub(v___x_272_, v___x_273_);
lean_dec(v___x_273_);
lean_dec(v___x_272_);
v___x_275_ = lean_mk_empty_array_with_capacity(v___x_261_);
v_newEntries_276_ = l___private_Init_Data_List_Impl_0__List_takeTR_go(lean_box(0), v_fst_269_, v_fst_269_, v___x_274_, v___x_275_);
lean_dec(v_fst_269_);
v___x_277_ = lean_apply_3(v_val_262_, v_newEntries_276_, v_snd_270_, v_snd_268_);
v_fst_278_ = lean_ctor_get(v___x_277_, 0);
v_snd_279_ = lean_ctor_get(v___x_277_, 1);
v_isSharedCheck_287_ = !lean_is_exclusive(v___x_277_);
if (v_isSharedCheck_287_ == 0)
{
v___x_281_ = v___x_277_;
v_isShared_282_ = v_isSharedCheck_287_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_snd_279_);
lean_inc(v_fst_278_);
lean_dec(v___x_277_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_287_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = l_List_appendTR___redArg(v_fst_278_, v_fst_267_);
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 0, v___x_283_);
v___x_285_ = v___x_281_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_286_; 
v_reuseFailAlloc_286_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_286_, 0, v___x_283_);
lean_ctor_set(v_reuseFailAlloc_286_, 1, v_snd_279_);
v___x_285_ = v_reuseFailAlloc_286_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
return v___x_285_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___lam__5___boxed(lean_object* v___x_288_, lean_object* v_val_289_, lean_object* v___y_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_){
_start:
{
lean_object* v_res_294_; 
v_res_294_ = l_Lean_registerSimplePersistentEnvExtension___redArg___lam__5(v___x_288_, v_val_289_, v___y_290_, v___y_291_, v___y_292_, v___y_293_);
lean_dec(v___y_292_);
lean_dec_ref(v___y_290_);
lean_dec(v___x_288_);
return v_res_294_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object* v_descr_299_){
_start:
{
lean_object* v_name_301_; lean_object* v_addEntryFn_302_; lean_object* v_addImportedFn_303_; lean_object* v_toArrayFn_304_; lean_object* v_exportEntriesFnEx_x3f_305_; lean_object* v_asyncMode_306_; lean_object* v_replay_x3f_307_; lean_object* v___f_308_; lean_object* v___f_309_; lean_object* v___f_310_; lean_object* v___f_311_; lean_object* v___x_312_; lean_object* v___f_313_; lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___y_320_; 
v_name_301_ = lean_ctor_get(v_descr_299_, 0);
lean_inc(v_name_301_);
v_addEntryFn_302_ = lean_ctor_get(v_descr_299_, 1);
lean_inc(v_addEntryFn_302_);
v_addImportedFn_303_ = lean_ctor_get(v_descr_299_, 2);
lean_inc_n(v_addImportedFn_303_, 2);
v_toArrayFn_304_ = lean_ctor_get(v_descr_299_, 3);
lean_inc_ref(v_toArrayFn_304_);
v_exportEntriesFnEx_x3f_305_ = lean_ctor_get(v_descr_299_, 4);
lean_inc(v_exportEntriesFnEx_x3f_305_);
v_asyncMode_306_ = lean_ctor_get(v_descr_299_, 5);
lean_inc(v_asyncMode_306_);
v_replay_x3f_307_ = lean_ctor_get(v_descr_299_, 6);
lean_inc(v_replay_x3f_307_);
lean_dec_ref(v_descr_299_);
v___f_308_ = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___redArg___lam__0), 3, 1);
lean_closure_set(v___f_308_, 0, v_addEntryFn_302_);
v___f_309_ = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___redArg___lam__1), 4, 2);
lean_closure_set(v___f_309_, 0, v_exportEntriesFnEx_x3f_305_);
lean_closure_set(v___f_309_, 1, v_toArrayFn_304_);
v___f_310_ = ((lean_object*)(l_Lean_registerSimplePersistentEnvExtension___redArg___closed__0));
v___f_311_ = ((lean_object*)(l_Lean_registerSimplePersistentEnvExtension___redArg___closed__1));
v___x_312_ = lean_box(0);
v___f_313_ = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___redArg___lam__4___boxed), 5, 2);
lean_closure_set(v___f_313_, 0, v_addImportedFn_303_);
lean_closure_set(v___f_313_, 1, v___x_312_);
v___x_314_ = lean_unsigned_to_nat(0u);
v___x_315_ = ((lean_object*)(l_Lean_registerSimplePersistentEnvExtension___redArg___closed__2));
v___x_316_ = lean_apply_1(v_addImportedFn_303_, v___x_315_);
v___x_317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_317_, 0, v___x_312_);
lean_ctor_set(v___x_317_, 1, v___x_316_);
v___x_318_ = lean_alloc_closure((void*)(l_instMonadEIO___aux__5___boxed), 4, 3);
lean_closure_set(v___x_318_, 0, lean_box(0));
lean_closure_set(v___x_318_, 1, lean_box(0));
lean_closure_set(v___x_318_, 2, v___x_317_);
if (lean_obj_tag(v_replay_x3f_307_) == 0)
{
lean_object* v___x_340_; 
v___x_340_ = lean_box(0);
v___y_320_ = v___x_340_;
goto v___jp_319_;
}
else
{
lean_object* v_val_341_; lean_object* v___x_343_; uint8_t v_isShared_344_; uint8_t v_isSharedCheck_349_; 
v_val_341_ = lean_ctor_get(v_replay_x3f_307_, 0);
v_isSharedCheck_349_ = !lean_is_exclusive(v_replay_x3f_307_);
if (v_isSharedCheck_349_ == 0)
{
v___x_343_ = v_replay_x3f_307_;
v_isShared_344_ = v_isSharedCheck_349_;
goto v_resetjp_342_;
}
else
{
lean_inc(v_val_341_);
lean_dec(v_replay_x3f_307_);
v___x_343_ = lean_box(0);
v_isShared_344_ = v_isSharedCheck_349_;
goto v_resetjp_342_;
}
v_resetjp_342_:
{
lean_object* v___f_345_; lean_object* v___x_347_; 
v___f_345_ = lean_alloc_closure((void*)(l_Lean_registerSimplePersistentEnvExtension___redArg___lam__5___boxed), 6, 2);
lean_closure_set(v___f_345_, 0, v___x_314_);
lean_closure_set(v___f_345_, 1, v_val_341_);
if (v_isShared_344_ == 0)
{
lean_ctor_set(v___x_343_, 0, v___f_345_);
v___x_347_ = v___x_343_;
goto v_reusejp_346_;
}
else
{
lean_object* v_reuseFailAlloc_348_; 
v_reuseFailAlloc_348_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_348_, 0, v___f_345_);
v___x_347_ = v_reuseFailAlloc_348_;
goto v_reusejp_346_;
}
v_reusejp_346_:
{
v___y_320_ = v___x_347_;
goto v___jp_319_;
}
}
}
v___jp_319_:
{
lean_object* v___x_321_; lean_object* v___x_322_; lean_object* v___x_323_; 
v___x_321_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_321_, 0, v_name_301_);
lean_ctor_set(v___x_321_, 1, v___x_318_);
lean_ctor_set(v___x_321_, 2, v___f_313_);
lean_ctor_set(v___x_321_, 3, v___f_308_);
lean_ctor_set(v___x_321_, 4, v___f_309_);
lean_ctor_set(v___x_321_, 5, v___f_310_);
lean_ctor_set(v___x_321_, 6, v_asyncMode_306_);
lean_ctor_set(v___x_321_, 7, v___y_320_);
v___x_322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___f_311_);
v___x_323_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_322_);
if (lean_obj_tag(v___x_323_) == 0)
{
lean_object* v_a_324_; lean_object* v___x_326_; uint8_t v_isShared_327_; uint8_t v_isSharedCheck_331_; 
v_a_324_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_331_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_331_ == 0)
{
v___x_326_ = v___x_323_;
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
else
{
lean_inc(v_a_324_);
lean_dec(v___x_323_);
v___x_326_ = lean_box(0);
v_isShared_327_ = v_isSharedCheck_331_;
goto v_resetjp_325_;
}
v_resetjp_325_:
{
lean_object* v___x_329_; 
if (v_isShared_327_ == 0)
{
v___x_329_ = v___x_326_;
goto v_reusejp_328_;
}
else
{
lean_object* v_reuseFailAlloc_330_; 
v_reuseFailAlloc_330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_330_, 0, v_a_324_);
v___x_329_ = v_reuseFailAlloc_330_;
goto v_reusejp_328_;
}
v_reusejp_328_:
{
return v___x_329_;
}
}
}
else
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_339_; 
v_a_332_ = lean_ctor_get(v___x_323_, 0);
v_isSharedCheck_339_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_339_ == 0)
{
v___x_334_ = v___x_323_;
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_323_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_339_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_337_; 
if (v_isShared_335_ == 0)
{
v___x_337_ = v___x_334_;
goto v_reusejp_336_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v_a_332_);
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
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg___boxed(lean_object* v_descr_350_, lean_object* v_a_351_){
_start:
{
lean_object* v_res_352_; 
v_res_352_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v_descr_350_);
return v_res_352_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension(lean_object* v_00_u03b1_353_, lean_object* v_00_u03c3_354_, lean_object* v_inst_355_, lean_object* v_descr_356_){
_start:
{
lean_object* v___x_358_; 
v___x_358_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v_descr_356_);
return v___x_358_;
}
}
LEAN_EXPORT lean_object* l_Lean_registerSimplePersistentEnvExtension___boxed(lean_object* v_00_u03b1_359_, lean_object* v_00_u03c3_360_, lean_object* v_inst_361_, lean_object* v_descr_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = l_Lean_registerSimplePersistentEnvExtension(v_00_u03b1_359_, v_00_u03c3_360_, v_inst_361_, v_descr_362_);
lean_dec(v_inst_361_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0(lean_object* v_x_368_, lean_object* v___y_369_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; 
v___x_371_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__1));
v___x_372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_372_, 0, v___x_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___boxed(lean_object* v_x_373_, lean_object* v___y_374_, lean_object* v___y_375_){
_start:
{
lean_object* v_res_376_; 
v_res_376_ = l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0(v_x_373_, v___y_374_);
lean_dec_ref(v___y_374_);
lean_dec_ref(v_x_373_);
return v_res_376_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__1(lean_object* v_s_377_, lean_object* v_x_378_){
_start:
{
lean_inc_ref(v_s_377_);
return v_s_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__1___boxed(lean_object* v_s_379_, lean_object* v_x_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__1(v_s_379_, v_x_380_);
lean_dec(v_x_380_);
lean_dec_ref(v_s_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2(lean_object* v_x_384_, lean_object* v_x_385_){
_start:
{
lean_object* v___x_386_; 
v___x_386_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2___closed__0));
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2___boxed(lean_object* v_x_387_, lean_object* v_x_388_){
_start:
{
lean_object* v_res_389_; 
v_res_389_ = l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__2(v_x_387_, v_x_388_);
lean_dec_ref(v_x_388_);
lean_dec_ref(v_x_387_);
return v_res_389_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__3(lean_object* v_x_390_){
_start:
{
lean_object* v___x_391_; 
v___x_391_ = lean_box(0);
return v___x_391_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__3___boxed(lean_object* v_x_392_){
_start:
{
lean_object* v_res_393_; 
v_res_393_ = l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__3(v_x_392_);
lean_dec_ref(v_x_392_);
return v_res_393_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4(void){
_start:
{
lean_object* v___x_398_; 
v___x_398_ = l_Lean_instInhabitedEnvExtension_default___redArg();
return v___x_398_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__5(void){
_start:
{
lean_object* v___f_399_; lean_object* v___f_400_; lean_object* v___f_401_; lean_object* v___f_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; 
v___f_399_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__3));
v___f_400_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__2));
v___f_401_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__1));
v___f_402_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__0));
v___x_403_ = lean_box(0);
v___x_404_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4, &l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4_once, _init_l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4);
v___x_405_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v___x_403_);
lean_ctor_set(v___x_405_, 2, v___f_402_);
lean_ctor_set(v___x_405_, 3, v___f_401_);
lean_ctor_set(v___x_405_, 4, v___f_400_);
lean_ctor_set(v___x_405_, 5, v___f_399_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg(){
_start:
{
lean_object* v___x_407_; 
v___x_407_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__5, &l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__5_once, _init_l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__5);
return v___x_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___boxed(lean_object* v___dummy_408_){
_start:
{
lean_object* v_res_409_; 
v_res_409_ = l_Lean_SimplePersistentEnvExtension_instInhabited___redArg();
return v_res_409_;
}
}
static lean_object* _init_l_Lean_SimplePersistentEnvExtension_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_410_; 
v___x_410_ = l_Lean_SimplePersistentEnvExtension_instInhabited___redArg();
return v___x_410_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited(lean_object* v_00_u03b1_411_, lean_object* v_00_u03c3_412_, lean_object* v_inst_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtension_instInhabited___closed__0, &l_Lean_SimplePersistentEnvExtension_instInhabited___closed__0_once, _init_l_Lean_SimplePersistentEnvExtension_instInhabited___closed__0);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_instInhabited___boxed(lean_object* v_00_u03b1_415_, lean_object* v_00_u03c3_416_, lean_object* v_inst_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l_Lean_SimplePersistentEnvExtension_instInhabited(v_00_u03b1_415_, v_00_u03c3_416_, v_inst_417_);
lean_dec(v_inst_417_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg(lean_object* v_inst_419_, lean_object* v_ext_420_, lean_object* v_env_421_, lean_object* v_asyncMode_422_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v_fst_427_; 
v___x_423_ = lean_box(0);
v___x_424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
lean_ctor_set(v___x_424_, 1, v_inst_419_);
v___x_425_ = lean_box(0);
v___x_426_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_424_, v_ext_420_, v_env_421_, v_asyncMode_422_, v___x_425_);
v_fst_427_ = lean_ctor_get(v___x_426_, 0);
lean_inc(v_fst_427_);
lean_dec(v___x_426_);
return v_fst_427_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___redArg___boxed(lean_object* v_inst_428_, lean_object* v_ext_429_, lean_object* v_env_430_, lean_object* v_asyncMode_431_){
_start:
{
lean_object* v_res_432_; 
v_res_432_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v_inst_428_, v_ext_429_, v_env_430_, v_asyncMode_431_);
lean_dec(v_asyncMode_431_);
lean_dec_ref(v_ext_429_);
return v_res_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries(lean_object* v_00_u03b1_433_, lean_object* v_00_u03c3_434_, lean_object* v_inst_435_, lean_object* v_ext_436_, lean_object* v_env_437_, lean_object* v_asyncMode_438_){
_start:
{
lean_object* v___x_439_; 
v___x_439_ = l_Lean_SimplePersistentEnvExtension_getEntries___redArg(v_inst_435_, v_ext_436_, v_env_437_, v_asyncMode_438_);
return v___x_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getEntries___boxed(lean_object* v_00_u03b1_440_, lean_object* v_00_u03c3_441_, lean_object* v_inst_442_, lean_object* v_ext_443_, lean_object* v_env_444_, lean_object* v_asyncMode_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l_Lean_SimplePersistentEnvExtension_getEntries(v_00_u03b1_440_, v_00_u03c3_441_, v_inst_442_, v_ext_443_, v_env_444_, v_asyncMode_445_);
lean_dec(v_asyncMode_445_);
lean_dec_ref(v_ext_443_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object* v_inst_447_, lean_object* v_ext_448_, lean_object* v_env_449_, lean_object* v_asyncMode_450_, lean_object* v_asyncDecl_451_){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v_snd_455_; 
v___x_452_ = lean_box(0);
v___x_453_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v_inst_447_);
v___x_454_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_453_, v_ext_448_, v_env_449_, v_asyncMode_450_, v_asyncDecl_451_);
v_snd_455_ = lean_ctor_get(v___x_454_, 1);
lean_inc(v_snd_455_);
lean_dec(v___x_454_);
return v_snd_455_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg___boxed(lean_object* v_inst_456_, lean_object* v_ext_457_, lean_object* v_env_458_, lean_object* v_asyncMode_459_, lean_object* v_asyncDecl_460_){
_start:
{
lean_object* v_res_461_; 
v_res_461_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v_inst_456_, v_ext_457_, v_env_458_, v_asyncMode_459_, v_asyncDecl_460_);
lean_dec(v_asyncMode_459_);
lean_dec_ref(v_ext_457_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState(lean_object* v_00_u03b1_462_, lean_object* v_00_u03c3_463_, lean_object* v_inst_464_, lean_object* v_ext_465_, lean_object* v_env_466_, lean_object* v_asyncMode_467_, lean_object* v_asyncDecl_468_){
_start:
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v_inst_464_, v_ext_465_, v_env_466_, v_asyncMode_467_, v_asyncDecl_468_);
return v___x_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_getState___boxed(lean_object* v_00_u03b1_470_, lean_object* v_00_u03c3_471_, lean_object* v_inst_472_, lean_object* v_ext_473_, lean_object* v_env_474_, lean_object* v_asyncMode_475_, lean_object* v_asyncDecl_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = l_Lean_SimplePersistentEnvExtension_getState(v_00_u03b1_470_, v_00_u03c3_471_, v_inst_472_, v_ext_473_, v_env_474_, v_asyncMode_475_, v_asyncDecl_476_);
lean_dec(v_asyncMode_475_);
lean_dec_ref(v_ext_473_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg___lam__0(lean_object* v_s_478_, lean_object* v_x_479_){
_start:
{
lean_object* v_fst_480_; lean_object* v___x_482_; uint8_t v_isShared_483_; uint8_t v_isSharedCheck_487_; 
v_fst_480_ = lean_ctor_get(v_x_479_, 0);
v_isSharedCheck_487_ = !lean_is_exclusive(v_x_479_);
if (v_isSharedCheck_487_ == 0)
{
lean_object* v_unused_488_; 
v_unused_488_ = lean_ctor_get(v_x_479_, 1);
lean_dec(v_unused_488_);
v___x_482_ = v_x_479_;
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
else
{
lean_inc(v_fst_480_);
lean_dec(v_x_479_);
v___x_482_ = lean_box(0);
v_isShared_483_ = v_isSharedCheck_487_;
goto v_resetjp_481_;
}
v_resetjp_481_:
{
lean_object* v___x_485_; 
if (v_isShared_483_ == 0)
{
lean_ctor_set(v___x_482_, 1, v_s_478_);
v___x_485_ = v___x_482_;
goto v_reusejp_484_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_fst_480_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v_s_478_);
v___x_485_ = v_reuseFailAlloc_486_;
goto v_reusejp_484_;
}
v_reusejp_484_:
{
return v___x_485_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState___redArg(lean_object* v_ext_489_, lean_object* v_env_490_, lean_object* v_s_491_){
_start:
{
lean_object* v_toEnvExtension_492_; lean_object* v_asyncMode_493_; lean_object* v___f_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v_toEnvExtension_492_ = lean_ctor_get(v_ext_489_, 0);
v_asyncMode_493_ = lean_ctor_get(v_toEnvExtension_492_, 2);
lean_inc(v_asyncMode_493_);
v___f_494_ = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_setState___redArg___lam__0), 2, 1);
lean_closure_set(v___f_494_, 0, v_s_491_);
v___x_495_ = lean_box(0);
v___x_496_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_489_, v_env_490_, v___f_494_, v_asyncMode_493_, v___x_495_);
lean_dec(v_asyncMode_493_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_setState(lean_object* v_00_u03b1_497_, lean_object* v_00_u03c3_498_, lean_object* v_ext_499_, lean_object* v_env_500_, lean_object* v_s_501_){
_start:
{
lean_object* v___x_502_; 
v___x_502_ = l_Lean_SimplePersistentEnvExtension_setState___redArg(v_ext_499_, v_env_500_, v_s_501_);
return v___x_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___redArg___lam__0(lean_object* v_f_503_, lean_object* v_x_504_){
_start:
{
lean_object* v_fst_505_; lean_object* v_snd_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_514_; 
v_fst_505_ = lean_ctor_get(v_x_504_, 0);
v_snd_506_ = lean_ctor_get(v_x_504_, 1);
v_isSharedCheck_514_ = !lean_is_exclusive(v_x_504_);
if (v_isSharedCheck_514_ == 0)
{
v___x_508_ = v_x_504_;
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_snd_506_);
lean_inc(v_fst_505_);
lean_dec(v_x_504_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_514_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; lean_object* v___x_512_; 
v___x_510_ = lean_apply_1(v_f_503_, v_snd_506_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v___x_510_);
v___x_512_ = v___x_508_;
goto v_reusejp_511_;
}
else
{
lean_object* v_reuseFailAlloc_513_; 
v_reuseFailAlloc_513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_513_, 0, v_fst_505_);
lean_ctor_set(v_reuseFailAlloc_513_, 1, v___x_510_);
v___x_512_ = v_reuseFailAlloc_513_;
goto v_reusejp_511_;
}
v_reusejp_511_:
{
return v___x_512_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState___redArg(lean_object* v_ext_515_, lean_object* v_env_516_, lean_object* v_f_517_){
_start:
{
lean_object* v_toEnvExtension_518_; lean_object* v_asyncMode_519_; lean_object* v___f_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_toEnvExtension_518_ = lean_ctor_get(v_ext_515_, 0);
v_asyncMode_519_ = lean_ctor_get(v_toEnvExtension_518_, 2);
lean_inc(v_asyncMode_519_);
v___f_520_ = lean_alloc_closure((void*)(l_Lean_SimplePersistentEnvExtension_modifyState___redArg___lam__0), 2, 1);
lean_closure_set(v___f_520_, 0, v_f_517_);
v___x_521_ = lean_box(0);
v___x_522_ = l_Lean_PersistentEnvExtension_modifyState___redArg(v_ext_515_, v_env_516_, v___f_520_, v_asyncMode_519_, v___x_521_);
lean_dec(v_asyncMode_519_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_SimplePersistentEnvExtension_modifyState(lean_object* v_00_u03b1_523_, lean_object* v_00_u03c3_524_, lean_object* v_ext_525_, lean_object* v_env_526_, lean_object* v_f_527_){
_start:
{
lean_object* v___x_528_; 
v___x_528_ = l_Lean_SimplePersistentEnvExtension_modifyState___redArg(v_ext_525_, v_env_526_, v_f_527_);
return v___x_528_;
}
}
static lean_object* _init_l_Lean_mkTagDeclarationExtension___auto__1(void){
_start:
{
lean_object* v___x_529_; 
v___x_529_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28);
return v___x_529_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__0(lean_object* v_x_530_){
_start:
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_NameSet_empty;
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__0___boxed(lean_object* v_x_532_){
_start:
{
lean_object* v_res_533_; 
v_res_533_ = l_Lean_mkTagDeclarationExtension___lam__0(v_x_532_);
lean_dec_ref(v_x_532_);
return v_res_533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___redArg(lean_object* v_hi_534_, lean_object* v_pivot_535_, lean_object* v_as_536_, lean_object* v_i_537_, lean_object* v_k_538_){
_start:
{
uint8_t v___x_539_; 
v___x_539_ = lean_nat_dec_lt(v_k_538_, v_hi_534_);
if (v___x_539_ == 0)
{
lean_object* v___x_540_; lean_object* v___x_541_; 
lean_dec(v_k_538_);
v___x_540_ = lean_array_fswap(v_as_536_, v_i_537_, v_hi_534_);
v___x_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_541_, 0, v_i_537_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
return v___x_541_;
}
else
{
lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_542_ = lean_array_fget_borrowed(v_as_536_, v_k_538_);
v___x_543_ = l_Lean_Name_quickLt(v___x_542_, v_pivot_535_);
if (v___x_543_ == 0)
{
lean_object* v___x_544_; lean_object* v___x_545_; 
v___x_544_ = lean_unsigned_to_nat(1u);
v___x_545_ = lean_nat_add(v_k_538_, v___x_544_);
lean_dec(v_k_538_);
v_k_538_ = v___x_545_;
goto _start;
}
else
{
lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_547_ = lean_array_fswap(v_as_536_, v_i_537_, v_k_538_);
v___x_548_ = lean_unsigned_to_nat(1u);
v___x_549_ = lean_nat_add(v_i_537_, v___x_548_);
lean_dec(v_i_537_);
v___x_550_ = lean_nat_add(v_k_538_, v___x_548_);
lean_dec(v_k_538_);
v_as_536_ = v___x_547_;
v_i_537_ = v___x_549_;
v_k_538_ = v___x_550_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___redArg___boxed(lean_object* v_hi_552_, lean_object* v_pivot_553_, lean_object* v_as_554_, lean_object* v_i_555_, lean_object* v_k_556_){
_start:
{
lean_object* v_res_557_; 
v_res_557_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___redArg(v_hi_552_, v_pivot_553_, v_as_554_, v_i_555_, v_k_556_);
lean_dec(v_pivot_553_);
lean_dec(v_hi_552_);
return v_res_557_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg(lean_object* v_n_558_, lean_object* v_as_559_, lean_object* v_lo_560_, lean_object* v_hi_561_){
_start:
{
lean_object* v___y_563_; uint8_t v___x_573_; 
v___x_573_ = lean_nat_dec_lt(v_lo_560_, v_hi_561_);
if (v___x_573_ == 0)
{
lean_dec(v_lo_560_);
return v_as_559_;
}
else
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v_mid_576_; lean_object* v___y_578_; lean_object* v___y_584_; lean_object* v___x_589_; lean_object* v___x_590_; uint8_t v___x_591_; 
v___x_574_ = lean_nat_add(v_lo_560_, v_hi_561_);
v___x_575_ = lean_unsigned_to_nat(1u);
v_mid_576_ = lean_nat_shiftr(v___x_574_, v___x_575_);
lean_dec(v___x_574_);
v___x_589_ = lean_array_fget_borrowed(v_as_559_, v_mid_576_);
v___x_590_ = lean_array_fget_borrowed(v_as_559_, v_lo_560_);
v___x_591_ = l_Lean_Name_quickLt(v___x_589_, v___x_590_);
if (v___x_591_ == 0)
{
v___y_584_ = v_as_559_;
goto v___jp_583_;
}
else
{
lean_object* v___x_592_; 
v___x_592_ = lean_array_fswap(v_as_559_, v_lo_560_, v_mid_576_);
v___y_584_ = v___x_592_;
goto v___jp_583_;
}
v___jp_577_:
{
lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_579_ = lean_array_fget_borrowed(v___y_578_, v_mid_576_);
v___x_580_ = lean_array_fget_borrowed(v___y_578_, v_hi_561_);
v___x_581_ = l_Lean_Name_quickLt(v___x_579_, v___x_580_);
if (v___x_581_ == 0)
{
lean_dec(v_mid_576_);
v___y_563_ = v___y_578_;
goto v___jp_562_;
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lean_array_fswap(v___y_578_, v_mid_576_, v_hi_561_);
lean_dec(v_mid_576_);
v___y_563_ = v___x_582_;
goto v___jp_562_;
}
}
v___jp_583_:
{
lean_object* v___x_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v___x_585_ = lean_array_fget_borrowed(v___y_584_, v_hi_561_);
v___x_586_ = lean_array_fget_borrowed(v___y_584_, v_lo_560_);
v___x_587_ = l_Lean_Name_quickLt(v___x_585_, v___x_586_);
if (v___x_587_ == 0)
{
v___y_578_ = v___y_584_;
goto v___jp_577_;
}
else
{
lean_object* v___x_588_; 
v___x_588_ = lean_array_fswap(v___y_584_, v_lo_560_, v_hi_561_);
v___y_578_ = v___x_588_;
goto v___jp_577_;
}
}
}
v___jp_562_:
{
lean_object* v_pivot_564_; lean_object* v___x_565_; lean_object* v_fst_566_; lean_object* v_snd_567_; uint8_t v___x_568_; 
v_pivot_564_ = lean_array_fget(v___y_563_, v_hi_561_);
lean_inc_n(v_lo_560_, 2);
v___x_565_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___redArg(v_hi_561_, v_pivot_564_, v___y_563_, v_lo_560_, v_lo_560_);
lean_dec(v_pivot_564_);
v_fst_566_ = lean_ctor_get(v___x_565_, 0);
lean_inc(v_fst_566_);
v_snd_567_ = lean_ctor_get(v___x_565_, 1);
lean_inc(v_snd_567_);
lean_dec_ref(v___x_565_);
v___x_568_ = lean_nat_dec_le(v_hi_561_, v_fst_566_);
if (v___x_568_ == 0)
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg(v_n_558_, v_snd_567_, v_lo_560_, v_fst_566_);
v___x_570_ = lean_unsigned_to_nat(1u);
v___x_571_ = lean_nat_add(v_fst_566_, v___x_570_);
lean_dec(v_fst_566_);
v_as_559_ = v___x_569_;
v_lo_560_ = v___x_571_;
goto _start;
}
else
{
lean_dec(v_fst_566_);
lean_dec(v_lo_560_);
return v_snd_567_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg___boxed(lean_object* v_n_593_, lean_object* v_as_594_, lean_object* v_lo_595_, lean_object* v_hi_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg(v_n_593_, v_as_594_, v_lo_595_, v_hi_596_);
lean_dec(v_hi_596_);
lean_dec(v_n_593_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__1(lean_object* v_es_598_){
_start:
{
lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; uint8_t v___x_602_; 
v___x_599_ = lean_array_mk(v_es_598_);
v___x_600_ = lean_array_get_size(v___x_599_);
v___x_601_ = lean_unsigned_to_nat(0u);
v___x_602_ = lean_nat_dec_eq(v___x_600_, v___x_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v___x_604_; lean_object* v___y_606_; uint8_t v___x_610_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v___x_604_ = lean_nat_sub(v___x_600_, v___x_603_);
v___x_610_ = lean_nat_dec_le(v___x_601_, v___x_604_);
if (v___x_610_ == 0)
{
lean_inc(v___x_604_);
v___y_606_ = v___x_604_;
goto v___jp_605_;
}
else
{
v___y_606_ = v___x_601_;
goto v___jp_605_;
}
v___jp_605_:
{
uint8_t v___x_607_; 
v___x_607_ = lean_nat_dec_le(v___y_606_, v___x_604_);
if (v___x_607_ == 0)
{
lean_object* v___x_608_; 
lean_dec(v___x_604_);
lean_inc(v___y_606_);
v___x_608_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg(v___x_600_, v___x_599_, v___y_606_, v___y_606_);
lean_dec(v___y_606_);
return v___x_608_;
}
else
{
lean_object* v___x_609_; 
v___x_609_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg(v___x_600_, v___x_599_, v___y_606_, v___x_604_);
lean_dec(v___x_604_);
return v___x_609_;
}
}
}
else
{
return v___x_599_;
}
}
}
LEAN_EXPORT uint8_t l_Lean_mkTagDeclarationExtension___lam__2(lean_object* v_x1_611_, lean_object* v_x2_612_){
_start:
{
uint8_t v___x_613_; 
v___x_613_ = l_Lean_NameSet_contains(v_x1_611_, v_x2_612_);
if (v___x_613_ == 0)
{
uint8_t v___x_614_; 
v___x_614_ = 1;
return v___x_614_;
}
else
{
uint8_t v___x_615_; 
v___x_615_ = 0;
return v___x_615_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___lam__2___boxed(lean_object* v_x1_616_, lean_object* v_x2_617_){
_start:
{
uint8_t v_res_618_; lean_object* v_r_619_; 
v_res_618_ = l_Lean_mkTagDeclarationExtension___lam__2(v_x1_616_, v_x2_617_);
lean_dec(v_x2_617_);
lean_dec(v_x1_616_);
v_r_619_ = lean_box(v_res_618_);
return v_r_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension(lean_object* v_name_629_, lean_object* v_asyncMode_630_){
_start:
{
lean_object* v___f_632_; lean_object* v___f_633_; lean_object* v___f_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; 
v___f_632_ = ((lean_object*)(l_Lean_mkTagDeclarationExtension___closed__0));
v___f_633_ = ((lean_object*)(l_Lean_mkTagDeclarationExtension___closed__1));
v___f_634_ = ((lean_object*)(l_Lean_mkTagDeclarationExtension___closed__2));
v___x_635_ = lean_box(0);
v___x_636_ = ((lean_object*)(l_Lean_mkTagDeclarationExtension___closed__5));
v___x_637_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_637_, 0, v_name_629_);
lean_ctor_set(v___x_637_, 1, v___f_632_);
lean_ctor_set(v___x_637_, 2, v___f_633_);
lean_ctor_set(v___x_637_, 3, v___f_634_);
lean_ctor_set(v___x_637_, 4, v___x_635_);
lean_ctor_set(v___x_637_, 5, v_asyncMode_630_);
lean_ctor_set(v___x_637_, 6, v___x_636_);
v___x_638_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_637_);
if (lean_obj_tag(v___x_638_) == 0)
{
lean_object* v_a_639_; lean_object* v___x_641_; uint8_t v_isShared_642_; uint8_t v_isSharedCheck_646_; 
v_a_639_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_646_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_646_ == 0)
{
v___x_641_ = v___x_638_;
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
else
{
lean_inc(v_a_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_box(0);
v_isShared_642_ = v_isSharedCheck_646_;
goto v_resetjp_640_;
}
v_resetjp_640_:
{
lean_object* v___x_644_; 
if (v_isShared_642_ == 0)
{
v___x_644_ = v___x_641_;
goto v_reusejp_643_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v_a_639_);
v___x_644_ = v_reuseFailAlloc_645_;
goto v_reusejp_643_;
}
v_reusejp_643_:
{
return v___x_644_;
}
}
}
else
{
lean_object* v_a_647_; lean_object* v___x_649_; uint8_t v_isShared_650_; uint8_t v_isSharedCheck_654_; 
v_a_647_ = lean_ctor_get(v___x_638_, 0);
v_isSharedCheck_654_ = !lean_is_exclusive(v___x_638_);
if (v_isSharedCheck_654_ == 0)
{
v___x_649_ = v___x_638_;
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
else
{
lean_inc(v_a_647_);
lean_dec(v___x_638_);
v___x_649_ = lean_box(0);
v_isShared_650_ = v_isSharedCheck_654_;
goto v_resetjp_648_;
}
v_resetjp_648_:
{
lean_object* v___x_652_; 
if (v_isShared_650_ == 0)
{
v___x_652_ = v___x_649_;
goto v_reusejp_651_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_a_647_);
v___x_652_ = v_reuseFailAlloc_653_;
goto v_reusejp_651_;
}
v_reusejp_651_:
{
return v___x_652_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkTagDeclarationExtension___boxed(lean_object* v_name_655_, lean_object* v_asyncMode_656_, lean_object* v_a_657_){
_start:
{
lean_object* v_res_658_; 
v_res_658_ = l_Lean_mkTagDeclarationExtension(v_name_655_, v_asyncMode_656_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0(lean_object* v_n_659_, lean_object* v_as_660_, lean_object* v_lo_661_, lean_object* v_hi_662_, lean_object* v_w_663_, lean_object* v_hlo_664_, lean_object* v_hhi_665_){
_start:
{
lean_object* v___x_666_; 
v___x_666_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___redArg(v_n_659_, v_as_660_, v_lo_661_, v_hi_662_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0___boxed(lean_object* v_n_667_, lean_object* v_as_668_, lean_object* v_lo_669_, lean_object* v_hi_670_, lean_object* v_w_671_, lean_object* v_hlo_672_, lean_object* v_hhi_673_){
_start:
{
lean_object* v_res_674_; 
v_res_674_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0(v_n_667_, v_as_668_, v_lo_669_, v_hi_670_, v_w_671_, v_hlo_672_, v_hhi_673_);
lean_dec(v_hi_670_);
lean_dec(v_n_667_);
return v_res_674_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0(lean_object* v_n_675_, lean_object* v_lo_676_, lean_object* v_hi_677_, lean_object* v_hhi_678_, lean_object* v_pivot_679_, lean_object* v_as_680_, lean_object* v_i_681_, lean_object* v_k_682_, lean_object* v_ilo_683_, lean_object* v_ik_684_, lean_object* v_w_685_){
_start:
{
lean_object* v___x_686_; 
v___x_686_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___redArg(v_hi_677_, v_pivot_679_, v_as_680_, v_i_681_, v_k_682_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0___boxed(lean_object* v_n_687_, lean_object* v_lo_688_, lean_object* v_hi_689_, lean_object* v_hhi_690_, lean_object* v_pivot_691_, lean_object* v_as_692_, lean_object* v_i_693_, lean_object* v_k_694_, lean_object* v_ilo_695_, lean_object* v_ik_696_, lean_object* v_w_697_){
_start:
{
lean_object* v_res_698_; 
v_res_698_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_mkTagDeclarationExtension_spec__0_spec__0(v_n_687_, v_lo_688_, v_hi_689_, v_hhi_690_, v_pivot_691_, v_as_692_, v_i_693_, v_k_694_, v_ilo_695_, v_ik_696_, v_w_697_);
lean_dec(v_pivot_691_);
lean_dec(v_hi_689_);
lean_dec(v_lo_688_);
lean_dec(v_n_687_);
return v_res_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__0(lean_object* v_x_699_, lean_object* v___y_700_){
_start:
{
lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_702_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__1));
v___x_703_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_703_, 0, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__0___boxed(lean_object* v_x_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l_Lean_TagDeclarationExtension_instInhabited___lam__0(v_x_704_, v___y_705_);
lean_dec_ref(v___y_705_);
lean_dec_ref(v_x_704_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__1(lean_object* v_s_708_, lean_object* v_x_709_){
_start:
{
lean_inc_ref(v_s_708_);
return v_s_708_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__1___boxed(lean_object* v_s_710_, lean_object* v_x_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = l_Lean_TagDeclarationExtension_instInhabited___lam__1(v_s_710_, v_x_711_);
lean_dec(v_x_711_);
lean_dec_ref(v_s_710_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__2(lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = ((lean_object*)(l_Lean_TagDeclarationExtension_instInhabited___lam__2___closed__1));
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__2___boxed(lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
lean_object* v_res_722_; 
v_res_722_ = l_Lean_TagDeclarationExtension_instInhabited___lam__2(v_x_720_, v_x_721_);
lean_dec_ref(v_x_721_);
lean_dec_ref(v_x_720_);
return v_res_722_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__3(lean_object* v_x_723_){
_start:
{
lean_object* v___x_724_; 
v___x_724_ = lean_box(0);
return v___x_724_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_instInhabited___lam__3___boxed(lean_object* v_x_725_){
_start:
{
lean_object* v_res_726_; 
v_res_726_ = l_Lean_TagDeclarationExtension_instInhabited___lam__3(v_x_725_);
lean_dec_ref(v_x_725_);
return v_res_726_;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_instInhabited___closed__4(void){
_start:
{
lean_object* v___f_731_; lean_object* v___f_732_; lean_object* v___f_733_; lean_object* v___f_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_737_; 
v___f_731_ = ((lean_object*)(l_Lean_TagDeclarationExtension_instInhabited___closed__3));
v___f_732_ = ((lean_object*)(l_Lean_TagDeclarationExtension_instInhabited___closed__2));
v___f_733_ = ((lean_object*)(l_Lean_TagDeclarationExtension_instInhabited___closed__1));
v___f_734_ = ((lean_object*)(l_Lean_TagDeclarationExtension_instInhabited___closed__0));
v___x_735_ = lean_box(0);
v___x_736_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4, &l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4_once, _init_l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4);
v___x_737_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_737_, 0, v___x_736_);
lean_ctor_set(v___x_737_, 1, v___x_735_);
lean_ctor_set(v___x_737_, 2, v___f_734_);
lean_ctor_set(v___x_737_, 3, v___f_733_);
lean_ctor_set(v___x_737_, 4, v___f_732_);
lean_ctor_set(v___x_737_, 5, v___f_731_);
return v___x_737_;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_instInhabited(void){
_start:
{
lean_object* v___x_738_; 
v___x_738_ = lean_obj_once(&l_Lean_TagDeclarationExtension_instInhabited___closed__4, &l_Lean_TagDeclarationExtension_instInhabited___closed__4_once, _init_l_Lean_TagDeclarationExtension_instInhabited___closed__4);
return v___x_738_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_TagDeclarationExtension_tag_spec__0(lean_object* v_env_739_, lean_object* v_msg_740_){
_start:
{
lean_object* v___x_741_; 
v___x_741_ = lean_panic_fn_borrowed(v_env_739_, v_msg_740_);
return v___x_741_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_TagDeclarationExtension_tag_spec__0___boxed(lean_object* v_env_742_, lean_object* v_msg_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = l_panic___at___00Lean_TagDeclarationExtension_tag_spec__0(v_env_742_, v_msg_743_);
lean_dec_ref(v_env_742_);
return v_res_744_;
}
}
static lean_object* _init_l_Lean_TagDeclarationExtension_tag___closed__3(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_748_ = ((lean_object*)(l_Lean_TagDeclarationExtension_tag___closed__2));
v___x_749_ = lean_unsigned_to_nat(4u);
v___x_750_ = lean_unsigned_to_nat(115u);
v___x_751_ = ((lean_object*)(l_Lean_TagDeclarationExtension_tag___closed__1));
v___x_752_ = ((lean_object*)(l_Lean_TagDeclarationExtension_tag___closed__0));
v___x_753_ = l_mkPanicMessageWithDecl(v___x_752_, v___x_751_, v___x_750_, v___x_749_, v___x_748_);
return v___x_753_;
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_tag(lean_object* v_ext_754_, lean_object* v_env_755_, lean_object* v_declName_756_){
_start:
{
uint8_t v___x_761_; 
v___x_761_ = l_Lean_Name_isAnonymous(v_declName_756_);
if (v___x_761_ == 0)
{
lean_object* v___x_762_; 
v___x_762_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_755_, v_declName_756_);
if (lean_obj_tag(v___x_762_) == 0)
{
goto v___jp_757_;
}
else
{
lean_dec_ref_known(v___x_762_, 1);
if (v___x_761_ == 0)
{
lean_object* v___x_763_; lean_object* v___x_764_; 
lean_dec(v_declName_756_);
lean_dec_ref(v_ext_754_);
v___x_763_ = lean_obj_once(&l_Lean_TagDeclarationExtension_tag___closed__3, &l_Lean_TagDeclarationExtension_tag___closed__3_once, _init_l_Lean_TagDeclarationExtension_tag___closed__3);
v___x_764_ = lean_panic_fn_borrowed(v_env_755_, v___x_763_);
lean_dec_ref(v_env_755_);
return v___x_764_;
}
else
{
goto v___jp_757_;
}
}
}
else
{
lean_dec(v_declName_756_);
lean_dec_ref(v_ext_754_);
return v_env_755_;
}
v___jp_757_:
{
lean_object* v_toEnvExtension_758_; lean_object* v_asyncMode_759_; lean_object* v___x_760_; 
v_toEnvExtension_758_ = lean_ctor_get(v_ext_754_, 0);
v_asyncMode_759_ = lean_ctor_get(v_toEnvExtension_758_, 2);
lean_inc(v_asyncMode_759_);
lean_inc(v_declName_756_);
v___x_760_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_754_, v_env_755_, v_declName_756_, v_asyncMode_759_, v_declName_756_);
lean_dec(v_asyncMode_759_);
return v___x_760_;
}
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___redArg(lean_object* v___y_765_, lean_object* v_as_766_, lean_object* v_k_767_, lean_object* v_x_768_, lean_object* v_x_769_){
_start:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v_m_772_; lean_object* v_a_773_; uint8_t v___x_774_; 
v___x_770_ = lean_nat_add(v_x_768_, v_x_769_);
v___x_771_ = lean_unsigned_to_nat(1u);
v_m_772_ = lean_nat_shiftr(v___x_770_, v___x_771_);
lean_dec(v___x_770_);
v_a_773_ = lean_array_fget_borrowed(v_as_766_, v_m_772_);
v___x_774_ = l_Lean_Name_quickLt(v_a_773_, v_k_767_);
if (v___x_774_ == 0)
{
lean_object* v___x_775_; uint8_t v___x_776_; 
lean_dec(v_x_769_);
v___x_775_ = lean_unsigned_to_nat(0u);
v___x_776_ = l_Lean_Name_quickLt(v_k_767_, v_a_773_);
if (v___x_776_ == 0)
{
uint8_t v___x_777_; 
lean_dec(v_m_772_);
lean_dec(v_x_768_);
v___x_777_ = lean_nat_dec_le(v___x_775_, v___y_765_);
return v___x_777_;
}
else
{
uint8_t v___x_778_; lean_object* v___x_779_; uint8_t v___y_781_; 
v___x_778_ = lean_nat_dec_eq(v_m_772_, v___x_775_);
v___x_779_ = lean_nat_sub(v_m_772_, v___x_771_);
lean_dec(v_m_772_);
if (v___x_778_ == 0)
{
uint8_t v___x_783_; 
v___x_783_ = lean_nat_dec_lt(v___x_779_, v_x_768_);
v___y_781_ = v___x_783_;
goto v___jp_780_;
}
else
{
v___y_781_ = v___x_778_;
goto v___jp_780_;
}
v___jp_780_:
{
if (v___y_781_ == 0)
{
v_x_769_ = v___x_779_;
goto _start;
}
else
{
lean_dec(v___x_779_);
lean_dec(v_x_768_);
return v___x_774_;
}
}
}
}
else
{
lean_object* v___x_784_; uint8_t v___x_785_; 
lean_dec(v_x_768_);
v___x_784_ = lean_nat_add(v_m_772_, v___x_771_);
lean_dec(v_m_772_);
v___x_785_ = lean_nat_dec_le(v___x_784_, v_x_769_);
if (v___x_785_ == 0)
{
lean_dec(v___x_784_);
lean_dec(v_x_769_);
return v___x_785_;
}
else
{
v_x_768_ = v___x_784_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___redArg___boxed(lean_object* v___y_787_, lean_object* v_as_788_, lean_object* v_k_789_, lean_object* v_x_790_, lean_object* v_x_791_){
_start:
{
uint8_t v_res_792_; lean_object* v_r_793_; 
v_res_792_ = l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___redArg(v___y_787_, v_as_788_, v_k_789_, v_x_790_, v_x_791_);
lean_dec(v_k_789_);
lean_dec_ref(v_as_788_);
lean_dec(v___y_787_);
v_r_793_ = lean_box(v_res_792_);
return v_r_793_;
}
}
LEAN_EXPORT uint8_t l_Lean_TagDeclarationExtension_isTagged(lean_object* v_ext_797_, lean_object* v_env_798_, lean_object* v_declName_799_, lean_object* v_asyncMode_800_){
_start:
{
lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_801_ = lean_box(1);
v___x_802_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_798_, v_declName_799_);
if (lean_obj_tag(v___x_802_) == 0)
{
lean_object* v___x_803_; uint8_t v___x_804_; 
lean_inc(v_declName_799_);
v___x_803_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_801_, v_ext_797_, v_env_798_, v_asyncMode_800_, v_declName_799_);
v___x_804_ = l_Lean_NameSet_contains(v___x_803_, v_declName_799_);
lean_dec(v_declName_799_);
lean_dec(v___x_803_);
return v___x_804_;
}
else
{
lean_object* v_val_805_; lean_object* v___x_806_; uint8_t v___x_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v___x_810_; uint8_t v___x_811_; 
v_val_805_ = lean_ctor_get(v___x_802_, 0);
lean_inc(v_val_805_);
lean_dec_ref_known(v___x_802_, 1);
v___x_806_ = ((lean_object*)(l_Lean_TagDeclarationExtension_isTagged___closed__0));
v___x_807_ = 0;
v___x_808_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_806_, v_ext_797_, v_env_798_, v_val_805_, v___x_807_);
lean_dec(v_val_805_);
lean_dec_ref(v_env_798_);
v___x_809_ = lean_unsigned_to_nat(0u);
v___x_810_ = lean_array_get_size(v___x_808_);
v___x_811_ = lean_nat_dec_lt(v___x_809_, v___x_810_);
if (v___x_811_ == 0)
{
lean_dec_ref(v___x_808_);
lean_dec(v_declName_799_);
return v___x_811_;
}
else
{
lean_object* v___x_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v___x_812_ = lean_unsigned_to_nat(1u);
v___x_813_ = lean_nat_sub(v___x_810_, v___x_812_);
v___x_814_ = lean_nat_dec_le(v___x_809_, v___x_813_);
if (v___x_814_ == 0)
{
lean_dec(v___x_813_);
lean_dec_ref(v___x_808_);
lean_dec(v_declName_799_);
return v___x_814_;
}
else
{
uint8_t v___x_815_; 
lean_inc(v___x_813_);
v___x_815_ = l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___redArg(v___x_813_, v___x_808_, v_declName_799_, v___x_809_, v___x_813_);
lean_dec(v_declName_799_);
lean_dec_ref(v___x_808_);
lean_dec(v___x_813_);
return v___x_815_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_TagDeclarationExtension_isTagged___boxed(lean_object* v_ext_816_, lean_object* v_env_817_, lean_object* v_declName_818_, lean_object* v_asyncMode_819_){
_start:
{
uint8_t v_res_820_; lean_object* v_r_821_; 
v_res_820_ = l_Lean_TagDeclarationExtension_isTagged(v_ext_816_, v_env_817_, v_declName_818_, v_asyncMode_819_);
lean_dec(v_asyncMode_819_);
lean_dec_ref(v_ext_816_);
v_r_821_ = lean_box(v_res_820_);
return v_r_821_;
}
}
LEAN_EXPORT uint8_t l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0(lean_object* v___y_822_, lean_object* v_as_823_, lean_object* v_k_824_, lean_object* v_x_825_, lean_object* v_x_826_, lean_object* v_x_827_){
_start:
{
uint8_t v___x_828_; 
v___x_828_ = l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___redArg(v___y_822_, v_as_823_, v_k_824_, v_x_825_, v_x_826_);
return v___x_828_;
}
}
LEAN_EXPORT lean_object* l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0___boxed(lean_object* v___y_829_, lean_object* v_as_830_, lean_object* v_k_831_, lean_object* v_x_832_, lean_object* v_x_833_, lean_object* v_x_834_){
_start:
{
uint8_t v_res_835_; lean_object* v_r_836_; 
v_res_835_ = l_Array_binSearchAux___at___00Lean_TagDeclarationExtension_isTagged_spec__0(v___y_829_, v_as_830_, v_k_831_, v_x_832_, v_x_833_, v_x_834_);
lean_dec(v_k_831_);
lean_dec_ref(v_as_830_);
lean_dec(v___y_829_);
v_r_836_ = lean_box(v_res_835_);
return v_r_836_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__0(lean_object* v_x_837_, lean_object* v___y_838_){
_start:
{
lean_object* v___x_840_; lean_object* v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___lam__0___closed__1));
v___x_841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_841_, 0, v___x_840_);
return v___x_841_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__0___boxed(lean_object* v_x_842_, lean_object* v___y_843_, lean_object* v___y_844_){
_start:
{
lean_object* v_res_845_; 
v_res_845_ = l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__0(v_x_842_, v___y_843_);
lean_dec_ref(v___y_843_);
lean_dec_ref(v_x_842_);
return v_res_845_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__1(lean_object* v_s_846_, lean_object* v_x_847_){
_start:
{
lean_inc(v_s_846_);
return v_s_846_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__1___boxed(lean_object* v_s_848_, lean_object* v_x_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__1(v_s_848_, v_x_849_);
lean_dec_ref(v_x_849_);
lean_dec(v_s_848_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2(lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = ((lean_object*)(l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__1));
return v___x_857_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___boxed(lean_object* v_x_858_, lean_object* v_x_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2(v_x_858_, v_x_859_);
lean_dec(v_x_859_);
lean_dec_ref(v_x_858_);
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__3(lean_object* v_x_861_){
_start:
{
lean_object* v___x_862_; 
v___x_862_ = lean_box(0);
return v___x_862_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__3___boxed(lean_object* v_x_863_){
_start:
{
lean_object* v_res_864_; 
v_res_864_ = l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__3(v_x_863_);
lean_dec(v_x_863_);
return v_res_864_;
}
}
static lean_object* _init_l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__4(void){
_start:
{
lean_object* v___f_869_; lean_object* v___f_870_; lean_object* v___f_871_; lean_object* v___f_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; 
v___f_869_ = ((lean_object*)(l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__3));
v___f_870_ = ((lean_object*)(l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__2));
v___f_871_ = ((lean_object*)(l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__1));
v___f_872_ = ((lean_object*)(l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__0));
v___x_873_ = lean_box(0);
v___x_874_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4, &l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4_once, _init_l_Lean_SimplePersistentEnvExtension_instInhabited___redArg___closed__4);
v___x_875_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_875_, 0, v___x_874_);
lean_ctor_set(v___x_875_, 1, v___x_873_);
lean_ctor_set(v___x_875_, 2, v___f_872_);
lean_ctor_set(v___x_875_, 3, v___f_871_);
lean_ctor_set(v___x_875_, 4, v___f_870_);
lean_ctor_set(v___x_875_, 5, v___f_869_);
return v___x_875_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg(){
_start:
{
lean_object* v___x_877_; 
v___x_877_ = lean_obj_once(&l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__4, &l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__4_once, _init_l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__4);
return v___x_877_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default___redArg___boxed(lean_object* v___dummy_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_instInhabitedMapDeclarationExtension_default___redArg();
return v_res_879_;
}
}
static lean_object* _init_l_Lean_instInhabitedMapDeclarationExtension_default___closed__0(void){
_start:
{
lean_object* v___x_880_; 
v___x_880_ = l_Lean_instInhabitedMapDeclarationExtension_default___redArg();
return v___x_880_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension_default(lean_object* v_00_u03b1_881_){
_start:
{
lean_object* v___x_882_; 
v___x_882_ = lean_obj_once(&l_Lean_instInhabitedMapDeclarationExtension_default___closed__0, &l_Lean_instInhabitedMapDeclarationExtension_default___closed__0_once, _init_l_Lean_instInhabitedMapDeclarationExtension_default___closed__0);
return v___x_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension___redArg(){
_start:
{
lean_object* v___x_884_; 
v___x_884_ = lean_obj_once(&l_Lean_instInhabitedMapDeclarationExtension_default___closed__0, &l_Lean_instInhabitedMapDeclarationExtension_default___closed__0_once, _init_l_Lean_instInhabitedMapDeclarationExtension_default___closed__0);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension___redArg___boxed(lean_object* v___dummy_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_instInhabitedMapDeclarationExtension___redArg();
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedMapDeclarationExtension(lean_object* v_a_887_){
_start:
{
lean_object* v___x_888_; 
v___x_888_ = lean_obj_once(&l_Lean_instInhabitedMapDeclarationExtension_default___closed__0, &l_Lean_instInhabitedMapDeclarationExtension_default___closed__0_once, _init_l_Lean_instInhabitedMapDeclarationExtension_default___closed__0);
return v___x_888_;
}
}
static lean_object* _init_l_Lean_mkMapDeclarationExtension___auto__3(void){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = lean_obj_once(&l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28, &l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28_once, _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam___closed__28);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__0(lean_object* v_s_890_, lean_object* v_x_891_){
_start:
{
lean_object* v_fst_892_; lean_object* v_snd_893_; lean_object* v___x_894_; 
v_fst_892_ = lean_ctor_get(v_x_891_, 0);
lean_inc(v_fst_892_);
v_snd_893_ = lean_ctor_get(v_x_891_, 1);
lean_inc(v_snd_893_);
lean_dec_ref(v_x_891_);
v___x_894_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_fst_892_, v_snd_893_, v_s_890_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__1(lean_object* v_exportEntriesFn_895_, lean_object* v_env_896_, lean_object* v_s_897_){
_start:
{
lean_object* v___x_898_; 
v___x_898_ = lean_apply_2(v_exportEntriesFn_895_, v_env_896_, v_s_897_);
return v___x_898_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___redArg(lean_object* v_newState_899_, lean_object* v_x_900_, lean_object* v_x_901_){
_start:
{
if (lean_obj_tag(v_x_901_) == 0)
{
return v_x_900_;
}
else
{
lean_object* v_head_902_; lean_object* v_tail_903_; lean_object* v___x_904_; 
v_head_902_ = lean_ctor_get(v_x_901_, 0);
lean_inc(v_head_902_);
v_tail_903_ = lean_ctor_get(v_x_901_, 1);
lean_inc(v_tail_903_);
lean_dec_ref_known(v_x_901_, 2);
v___x_904_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_newState_899_, v_head_902_);
if (lean_obj_tag(v___x_904_) == 1)
{
lean_object* v_val_905_; lean_object* v___x_906_; 
v_val_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_val_905_);
lean_dec_ref_known(v___x_904_, 1);
v___x_906_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_NameMap_insert_spec__0___redArg(v_head_902_, v_val_905_, v_x_900_);
v_x_900_ = v___x_906_;
v_x_901_ = v_tail_903_;
goto _start;
}
else
{
lean_dec(v___x_904_);
lean_dec(v_head_902_);
v_x_901_ = v_tail_903_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___redArg___boxed(lean_object* v_newState_909_, lean_object* v_x_910_, lean_object* v_x_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___redArg(v_newState_909_, v_x_910_, v_x_911_);
lean_dec(v_newState_909_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__3(lean_object* v_x_913_, lean_object* v_newState_914_, lean_object* v_newConsts_915_, lean_object* v_s_916_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___redArg(v_newState_914_, v_s_916_, v_newConsts_915_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__3___boxed(lean_object* v_x_918_, lean_object* v_newState_919_, lean_object* v_newConsts_920_, lean_object* v_s_921_){
_start:
{
lean_object* v_res_922_; 
v_res_922_ = l_Lean_mkMapDeclarationExtension___redArg___lam__3(v_x_918_, v_newState_919_, v_newConsts_920_, v_s_921_);
lean_dec(v_newState_919_);
lean_dec(v_x_918_);
return v_res_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__2(lean_object* v_x_923_){
_start:
{
lean_object* v___x_924_; 
v___x_924_ = ((lean_object*)(l_Lean_instInhabitedMapDeclarationExtension_default___redArg___lam__2___closed__0));
return v___x_924_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__2___boxed(lean_object* v_x_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l_Lean_mkMapDeclarationExtension___redArg___lam__2(v_x_925_);
lean_dec(v_x_925_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__4(lean_object* v___x_927_){
_start:
{
lean_object* v___x_929_; 
v___x_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_929_, 0, v___x_927_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__4___boxed(lean_object* v___x_930_, lean_object* v___y_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_mkMapDeclarationExtension___redArg___lam__4(v___x_930_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__5(lean_object* v___x_933_, lean_object* v_x_934_, lean_object* v___y_935_){
_start:
{
lean_object* v___x_937_; 
v___x_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_937_, 0, v___x_933_);
return v___x_937_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___lam__5___boxed(lean_object* v___x_938_, lean_object* v_x_939_, lean_object* v___y_940_, lean_object* v___y_941_){
_start:
{
lean_object* v_res_942_; 
v_res_942_ = l_Lean_mkMapDeclarationExtension___redArg___lam__5(v___x_938_, v_x_939_, v___y_940_);
lean_dec_ref(v___y_940_);
lean_dec_ref(v_x_939_);
return v_res_942_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg(lean_object* v_name_952_, lean_object* v_asyncMode_953_, lean_object* v_exportEntriesFn_954_){
_start:
{
lean_object* v___f_956_; lean_object* v___f_957_; lean_object* v___f_958_; lean_object* v___f_959_; lean_object* v___f_960_; lean_object* v___f_961_; lean_object* v___x_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; 
v___f_956_ = ((lean_object*)(l_Lean_mkMapDeclarationExtension___redArg___closed__0));
v___f_957_ = lean_alloc_closure((void*)(l_Lean_mkMapDeclarationExtension___redArg___lam__1), 3, 1);
lean_closure_set(v___f_957_, 0, v_exportEntriesFn_954_);
v___f_958_ = ((lean_object*)(l_Lean_instInhabitedMapDeclarationExtension_default___redArg___closed__3));
v___f_959_ = ((lean_object*)(l_Lean_mkMapDeclarationExtension___redArg___closed__2));
v___f_960_ = ((lean_object*)(l_Lean_mkMapDeclarationExtension___redArg___closed__3));
v___f_961_ = ((lean_object*)(l_Lean_mkMapDeclarationExtension___redArg___closed__4));
v___x_962_ = ((lean_object*)(l_Lean_mkMapDeclarationExtension___redArg___closed__5));
v___x_963_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_963_, 0, v_name_952_);
lean_ctor_set(v___x_963_, 1, v___f_960_);
lean_ctor_set(v___x_963_, 2, v___f_961_);
lean_ctor_set(v___x_963_, 3, v___f_956_);
lean_ctor_set(v___x_963_, 4, v___f_957_);
lean_ctor_set(v___x_963_, 5, v___f_958_);
lean_ctor_set(v___x_963_, 6, v_asyncMode_953_);
lean_ctor_set(v___x_963_, 7, v___x_962_);
v___x_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_963_);
lean_ctor_set(v___x_964_, 1, v___f_959_);
v___x_965_ = l_Lean_registerPersistentEnvExtensionUnsafe___redArg(v___x_964_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v___x_968_; uint8_t v_isShared_969_; uint8_t v_isSharedCheck_973_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_973_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_973_ == 0)
{
v___x_968_ = v___x_965_;
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
else
{
lean_inc(v_a_966_);
lean_dec(v___x_965_);
v___x_968_ = lean_box(0);
v_isShared_969_ = v_isSharedCheck_973_;
goto v_resetjp_967_;
}
v_resetjp_967_:
{
lean_object* v___x_971_; 
if (v_isShared_969_ == 0)
{
v___x_971_ = v___x_968_;
goto v_reusejp_970_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v_a_966_);
v___x_971_ = v_reuseFailAlloc_972_;
goto v_reusejp_970_;
}
v_reusejp_970_:
{
return v___x_971_;
}
}
}
else
{
lean_object* v_a_974_; lean_object* v___x_976_; uint8_t v_isShared_977_; uint8_t v_isSharedCheck_981_; 
v_a_974_ = lean_ctor_get(v___x_965_, 0);
v_isSharedCheck_981_ = !lean_is_exclusive(v___x_965_);
if (v_isSharedCheck_981_ == 0)
{
v___x_976_ = v___x_965_;
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
else
{
lean_inc(v_a_974_);
lean_dec(v___x_965_);
v___x_976_ = lean_box(0);
v_isShared_977_ = v_isSharedCheck_981_;
goto v_resetjp_975_;
}
v_resetjp_975_:
{
lean_object* v___x_979_; 
if (v_isShared_977_ == 0)
{
v___x_979_ = v___x_976_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_974_);
v___x_979_ = v_reuseFailAlloc_980_;
goto v_reusejp_978_;
}
v_reusejp_978_:
{
return v___x_979_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___redArg___boxed(lean_object* v_name_982_, lean_object* v_asyncMode_983_, lean_object* v_exportEntriesFn_984_, lean_object* v_a_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_mkMapDeclarationExtension___redArg(v_name_982_, v_asyncMode_983_, v_exportEntriesFn_984_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension(lean_object* v_00_u03b1_987_, lean_object* v_name_988_, lean_object* v_asyncMode_989_, lean_object* v_exportEntriesFn_990_){
_start:
{
lean_object* v___x_992_; 
v___x_992_ = l_Lean_mkMapDeclarationExtension___redArg(v_name_988_, v_asyncMode_989_, v_exportEntriesFn_990_);
return v___x_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkMapDeclarationExtension___boxed(lean_object* v_00_u03b1_993_, lean_object* v_name_994_, lean_object* v_asyncMode_995_, lean_object* v_exportEntriesFn_996_, lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = l_Lean_mkMapDeclarationExtension(v_00_u03b1_993_, v_name_994_, v_asyncMode_995_, v_exportEntriesFn_996_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0(lean_object* v_00_u03b1_999_, lean_object* v_newState_1000_, lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
lean_object* v___x_1003_; 
v___x_1003_ = l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___redArg(v_newState_1000_, v_x_1001_, v_x_1002_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_newState_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_){
_start:
{
lean_object* v_res_1008_; 
v_res_1008_ = l_List_foldl___at___00Lean_mkMapDeclarationExtension_spec__0(v_00_u03b1_1004_, v_newState_1005_, v_x_1006_, v_x_1007_);
lean_dec(v_newState_1005_);
return v_res_1008_;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert___redArg(lean_object* v_ext_1014_, lean_object* v_env_1015_, lean_object* v_declName_1016_, lean_object* v_val_1017_){
_start:
{
lean_object* v___x_1018_; 
v___x_1018_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1015_, v_declName_1016_);
if (lean_obj_tag(v___x_1018_) == 1)
{
lean_object* v_val_1019_; lean_object* v_name_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; uint8_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
lean_dec(v_val_1017_);
v_val_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_val_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v_name_1020_ = lean_ctor_get(v_ext_1014_, 1);
lean_inc(v_name_1020_);
lean_dec_ref(v_ext_1014_);
v___x_1021_ = lean_box(0);
v___x_1022_ = ((lean_object*)(l_Lean_TagDeclarationExtension_tag___closed__0));
v___x_1023_ = ((lean_object*)(l_Lean_MapDeclarationExtension_insert___redArg___closed__0));
v___x_1024_ = lean_unsigned_to_nat(159u);
v___x_1025_ = lean_unsigned_to_nat(4u);
v___x_1026_ = ((lean_object*)(l_Lean_MapDeclarationExtension_insert___redArg___closed__1));
v___x_1027_ = 1;
v___x_1028_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_declName_1016_, v___x_1027_);
v___x_1029_ = lean_string_append(v___x_1026_, v___x_1028_);
lean_dec_ref(v___x_1028_);
v___x_1030_ = ((lean_object*)(l_Lean_MapDeclarationExtension_insert___redArg___closed__2));
v___x_1031_ = lean_string_append(v___x_1029_, v___x_1030_);
v___x_1032_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_1020_, v___x_1027_);
v___x_1033_ = lean_string_append(v___x_1031_, v___x_1032_);
lean_dec_ref(v___x_1032_);
v___x_1034_ = ((lean_object*)(l_Lean_MapDeclarationExtension_insert___redArg___closed__3));
v___x_1035_ = lean_string_append(v___x_1033_, v___x_1034_);
v___x_1036_ = l_Lean_Environment_allImportedModuleNames(v_env_1015_);
v___x_1037_ = lean_array_get(v___x_1021_, v___x_1036_, v_val_1019_);
lean_dec(v_val_1019_);
lean_dec_ref(v___x_1036_);
v___x_1038_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v___x_1037_, v___x_1027_);
v___x_1039_ = lean_string_append(v___x_1035_, v___x_1038_);
lean_dec_ref(v___x_1038_);
v___x_1040_ = ((lean_object*)(l_Lean_MapDeclarationExtension_insert___redArg___closed__4));
v___x_1041_ = lean_string_append(v___x_1039_, v___x_1040_);
v___x_1042_ = l_mkPanicMessageWithDecl(v___x_1022_, v___x_1023_, v___x_1024_, v___x_1025_, v___x_1041_);
lean_dec_ref(v___x_1041_);
v___x_1043_ = lean_panic_fn_borrowed(v_env_1015_, v___x_1042_);
lean_dec_ref(v_env_1015_);
return v___x_1043_;
}
else
{
lean_object* v_toEnvExtension_1044_; lean_object* v_asyncMode_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; 
lean_dec(v___x_1018_);
v_toEnvExtension_1044_ = lean_ctor_get(v_ext_1014_, 0);
v_asyncMode_1045_ = lean_ctor_get(v_toEnvExtension_1044_, 2);
lean_inc(v_asyncMode_1045_);
lean_inc(v_declName_1016_);
v___x_1046_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1046_, 0, v_declName_1016_);
lean_ctor_set(v___x_1046_, 1, v_val_1017_);
v___x_1047_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v_ext_1014_, v_env_1015_, v___x_1046_, v_asyncMode_1045_, v_declName_1016_);
lean_dec(v_asyncMode_1045_);
return v___x_1047_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_insert(lean_object* v_00_u03b1_1048_, lean_object* v_ext_1049_, lean_object* v_env_1050_, lean_object* v_declName_1051_, lean_object* v_val_1052_){
_start:
{
lean_object* v___x_1053_; 
v___x_1053_ = l_Lean_MapDeclarationExtension_insert___redArg(v_ext_1049_, v_env_1050_, v_declName_1051_, v_val_1052_);
return v___x_1053_;
}
}
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_find_x3f___redArg___lam__0(lean_object* v_a_1054_, lean_object* v_b_1055_){
_start:
{
lean_object* v_fst_1056_; lean_object* v_fst_1057_; uint8_t v___x_1058_; 
v_fst_1056_ = lean_ctor_get(v_a_1054_, 0);
v_fst_1057_ = lean_ctor_get(v_b_1055_, 0);
v___x_1058_ = l_Lean_Name_quickLt(v_fst_1056_, v_fst_1057_);
return v___x_1058_;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg___lam__0___boxed(lean_object* v_a_1059_, lean_object* v_b_1060_){
_start:
{
uint8_t v_res_1061_; lean_object* v_r_1062_; 
v_res_1061_ = l_Lean_MapDeclarationExtension_find_x3f___redArg___lam__0(v_a_1059_, v_b_1060_);
lean_dec_ref(v_b_1060_);
lean_dec_ref(v_a_1059_);
v_r_1062_ = lean_box(v_res_1061_);
return v_r_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg(lean_object* v_inst_1065_, lean_object* v_ext_1066_, lean_object* v_env_1067_, lean_object* v_declName_1068_, lean_object* v_asyncMode_1069_, uint8_t v_level_1070_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = lean_box(1);
v___x_1072_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1067_, v_declName_1068_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v___x_1073_; lean_object* v___x_1074_; 
lean_dec(v_inst_1065_);
lean_inc(v_declName_1068_);
v___x_1073_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1071_, v_ext_1066_, v_env_1067_, v_asyncMode_1069_, v_declName_1068_);
v___x_1074_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v___x_1073_, v_declName_1068_);
lean_dec(v_declName_1068_);
lean_dec(v___x_1073_);
return v___x_1074_;
}
else
{
lean_object* v_val_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; 
v_val_1075_ = lean_ctor_get(v___x_1072_, 0);
lean_inc(v_val_1075_);
lean_dec_ref_known(v___x_1072_, 1);
v___x_1076_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1071_, v_ext_1066_, v_env_1067_, v_val_1075_, v_level_1070_);
lean_dec(v_val_1075_);
lean_dec_ref(v_env_1067_);
v___x_1077_ = lean_unsigned_to_nat(0u);
v___x_1078_ = lean_array_get_size(v___x_1076_);
v___x_1079_ = lean_nat_dec_lt(v___x_1077_, v___x_1078_);
if (v___x_1079_ == 0)
{
lean_object* v___x_1080_; 
lean_dec_ref(v___x_1076_);
lean_dec(v_declName_1068_);
lean_dec(v_inst_1065_);
v___x_1080_ = lean_box(0);
return v___x_1080_;
}
else
{
lean_object* v___x_1081_; lean_object* v___x_1082_; uint8_t v___x_1083_; 
v___x_1081_ = lean_unsigned_to_nat(1u);
v___x_1082_ = lean_nat_sub(v___x_1078_, v___x_1081_);
v___x_1083_ = lean_nat_dec_le(v___x_1077_, v___x_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; 
lean_dec(v___x_1082_);
lean_dec_ref(v___x_1076_);
lean_dec(v_declName_1068_);
lean_dec(v_inst_1065_);
v___x_1084_ = lean_box(0);
return v___x_1084_;
}
else
{
lean_object* v___f_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___f_1085_ = ((lean_object*)(l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__0));
v___x_1086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1086_, 0, v_declName_1068_);
lean_ctor_set(v___x_1086_, 1, v_inst_1065_);
v___x_1087_ = ((lean_object*)(l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__1));
v___x_1088_ = l_Array_binSearchAux___redArg(v___f_1085_, v___x_1087_, v___x_1076_, v___x_1086_, v___x_1077_, v___x_1082_);
lean_dec_ref(v___x_1076_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v___x_1089_; 
v___x_1089_ = lean_box(0);
return v___x_1089_;
}
else
{
lean_object* v_val_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1098_; 
v_val_1090_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1092_ = v___x_1088_;
v_isShared_1093_ = v_isSharedCheck_1098_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_val_1090_);
lean_dec(v___x_1088_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1098_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v_snd_1094_; lean_object* v___x_1096_; 
v_snd_1094_ = lean_ctor_get(v_val_1090_, 1);
lean_inc(v_snd_1094_);
lean_dec(v_val_1090_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set(v___x_1092_, 0, v_snd_1094_);
v___x_1096_ = v___x_1092_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_snd_1094_);
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
}
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___redArg___boxed(lean_object* v_inst_1099_, lean_object* v_ext_1100_, lean_object* v_env_1101_, lean_object* v_declName_1102_, lean_object* v_asyncMode_1103_, lean_object* v_level_1104_){
_start:
{
uint8_t v_level_boxed_1105_; lean_object* v_res_1106_; 
v_level_boxed_1105_ = lean_unbox(v_level_1104_);
v_res_1106_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v_inst_1099_, v_ext_1100_, v_env_1101_, v_declName_1102_, v_asyncMode_1103_, v_level_boxed_1105_);
lean_dec(v_asyncMode_1103_);
lean_dec_ref(v_ext_1100_);
return v_res_1106_;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f(lean_object* v_00_u03b1_1107_, lean_object* v_inst_1108_, lean_object* v_ext_1109_, lean_object* v_env_1110_, lean_object* v_declName_1111_, lean_object* v_asyncMode_1112_, uint8_t v_level_1113_){
_start:
{
lean_object* v___x_1114_; 
v___x_1114_ = l_Lean_MapDeclarationExtension_find_x3f___redArg(v_inst_1108_, v_ext_1109_, v_env_1110_, v_declName_1111_, v_asyncMode_1112_, v_level_1113_);
return v___x_1114_;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_find_x3f___boxed(lean_object* v_00_u03b1_1115_, lean_object* v_inst_1116_, lean_object* v_ext_1117_, lean_object* v_env_1118_, lean_object* v_declName_1119_, lean_object* v_asyncMode_1120_, lean_object* v_level_1121_){
_start:
{
uint8_t v_level_boxed_1122_; lean_object* v_res_1123_; 
v_level_boxed_1122_ = lean_unbox(v_level_1121_);
v_res_1123_ = l_Lean_MapDeclarationExtension_find_x3f(v_00_u03b1_1115_, v_inst_1116_, v_ext_1117_, v_env_1118_, v_declName_1119_, v_asyncMode_1120_, v_level_boxed_1122_);
lean_dec(v_asyncMode_1120_);
lean_dec_ref(v_ext_1117_);
return v_res_1123_;
}
}
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_contains___redArg(lean_object* v_inst_1125_, lean_object* v_ext_1126_, lean_object* v_env_1127_, lean_object* v_declName_1128_){
_start:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1129_ = lean_box(1);
v___x_1130_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1127_, v_declName_1128_);
if (lean_obj_tag(v___x_1130_) == 0)
{
lean_object* v_toEnvExtension_1131_; lean_object* v_asyncMode_1132_; lean_object* v___x_1133_; uint8_t v___x_1134_; 
lean_dec(v_inst_1125_);
v_toEnvExtension_1131_ = lean_ctor_get(v_ext_1126_, 0);
v_asyncMode_1132_ = lean_ctor_get(v_toEnvExtension_1131_, 2);
lean_inc(v_declName_1128_);
v___x_1133_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_1129_, v_ext_1126_, v_env_1127_, v_asyncMode_1132_, v_declName_1128_);
v___x_1134_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_declName_1128_, v___x_1133_);
lean_dec(v___x_1133_);
lean_dec(v_declName_1128_);
return v___x_1134_;
}
else
{
lean_object* v_val_1135_; uint8_t v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; uint8_t v___x_1140_; 
v_val_1135_ = lean_ctor_get(v___x_1130_, 0);
lean_inc(v_val_1135_);
lean_dec_ref_known(v___x_1130_, 1);
v___x_1136_ = 0;
v___x_1137_ = l_Lean_PersistentEnvExtension_getModuleEntries___redArg(v___x_1129_, v_ext_1126_, v_env_1127_, v_val_1135_, v___x_1136_);
lean_dec(v_val_1135_);
lean_dec_ref(v_env_1127_);
v___x_1138_ = lean_unsigned_to_nat(0u);
v___x_1139_ = lean_array_get_size(v___x_1137_);
v___x_1140_ = lean_nat_dec_lt(v___x_1138_, v___x_1139_);
if (v___x_1140_ == 0)
{
lean_dec_ref(v___x_1137_);
lean_dec(v_declName_1128_);
lean_dec(v_inst_1125_);
return v___x_1140_;
}
else
{
lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; 
v___x_1141_ = lean_unsigned_to_nat(1u);
v___x_1142_ = lean_nat_sub(v___x_1139_, v___x_1141_);
v___x_1143_ = lean_nat_dec_le(v___x_1138_, v___x_1142_);
if (v___x_1143_ == 0)
{
lean_dec(v___x_1142_);
lean_dec_ref(v___x_1137_);
lean_dec(v_declName_1128_);
lean_dec(v_inst_1125_);
return v___x_1143_;
}
else
{
lean_object* v___f_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; uint8_t v___x_1148_; 
v___f_1144_ = ((lean_object*)(l_Lean_MapDeclarationExtension_find_x3f___redArg___closed__0));
v___x_1145_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1145_, 0, v_declName_1128_);
lean_ctor_set(v___x_1145_, 1, v_inst_1125_);
v___x_1146_ = ((lean_object*)(l_Lean_MapDeclarationExtension_contains___redArg___closed__0));
v___x_1147_ = l_Array_binSearchAux___redArg(v___f_1144_, v___x_1146_, v___x_1137_, v___x_1145_, v___x_1138_, v___x_1142_);
lean_dec_ref(v___x_1137_);
v___x_1148_ = lean_unbox(v___x_1147_);
lean_dec(v___x_1147_);
return v___x_1148_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains___redArg___boxed(lean_object* v_inst_1149_, lean_object* v_ext_1150_, lean_object* v_env_1151_, lean_object* v_declName_1152_){
_start:
{
uint8_t v_res_1153_; lean_object* v_r_1154_; 
v_res_1153_ = l_Lean_MapDeclarationExtension_contains___redArg(v_inst_1149_, v_ext_1150_, v_env_1151_, v_declName_1152_);
lean_dec_ref(v_ext_1150_);
v_r_1154_ = lean_box(v_res_1153_);
return v_r_1154_;
}
}
LEAN_EXPORT uint8_t l_Lean_MapDeclarationExtension_contains(lean_object* v_00_u03b1_1155_, lean_object* v_inst_1156_, lean_object* v_ext_1157_, lean_object* v_env_1158_, lean_object* v_declName_1159_){
_start:
{
uint8_t v___x_1160_; 
v___x_1160_ = l_Lean_MapDeclarationExtension_contains___redArg(v_inst_1156_, v_ext_1157_, v_env_1158_, v_declName_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_MapDeclarationExtension_contains___boxed(lean_object* v_00_u03b1_1161_, lean_object* v_inst_1162_, lean_object* v_ext_1163_, lean_object* v_env_1164_, lean_object* v_declName_1165_){
_start:
{
uint8_t v_res_1166_; lean_object* v_r_1167_; 
v_res_1166_ = l_Lean_MapDeclarationExtension_contains(v_00_u03b1_1161_, v_inst_1162_, v_ext_1163_, v_env_1164_, v_declName_1165_);
lean_dec_ref(v_ext_1163_);
v_r_1167_ = lean_box(v_res_1166_);
return v_r_1167_;
}
}
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_EnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_TagDeclarationExtension_instInhabited = _init_l_Lean_TagDeclarationExtension_instInhabited();
lean_mark_persistent(l_Lean_TagDeclarationExtension_instInhabited);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_EnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam = _init_l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam();
lean_mark_persistent(l_Lean_SimplePersistentEnvExtensionDescr_name___autoParam);
l_Lean_mkTagDeclarationExtension___auto__1 = _init_l_Lean_mkTagDeclarationExtension___auto__1();
lean_mark_persistent(l_Lean_mkTagDeclarationExtension___auto__1);
l_Lean_mkMapDeclarationExtension___auto__3 = _init_l_Lean_mkMapDeclarationExtension___auto__3();
lean_mark_persistent(l_Lean_mkMapDeclarationExtension___auto__3);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Environment(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_EnvExtension(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_EnvExtension(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_EnvExtension(builtin);
}
#ifdef __cplusplus
}
#endif
