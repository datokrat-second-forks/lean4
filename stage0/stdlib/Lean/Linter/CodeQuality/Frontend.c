// Lean compiler output
// Module: Lean.Linter.CodeQuality.Frontend
// Imports: public import Lean.Linter.CodeQuality.Basic public import Lean.Message public import Lean.Elab.InfoTree.Main import Lean.Elab.Command
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
extern lean_object* l_Lean_Elab_Command_mkMetaContext;
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Core_wrapAsync___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_task_get_own(lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
uint8_t lean_has_compile_error(lean_object*, lean_object*);
lean_object* l_Lean_Environment_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_abortCommandExceptionId;
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Array_push___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerSimplePersistentEnvExtension___redArg(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_PersistentEnvExtension_addEntry___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isMarkedMeta(lean_object*, lean_object*);
uint8_t l_Lean_instBEqAttributeKind_beq(uint8_t, uint8_t);
lean_object* l_Lean_registerBuiltinAttribute(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadEnvCoreM;
extern lean_object* l_Lean_instMonadExceptOfExceptionCoreM;
extern lean_object* l_Lean_Core_instMonadRefCoreM;
extern lean_object* l_Lean_Core_instAddMessageContextCoreM;
lean_object* l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_Lean_evalConstCheck___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_instInhabited___redArg();
lean_object* l_Lean_SimplePersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__0 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__0_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__1 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__1_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__2 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__2_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__3 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__3_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__4 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__4_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__6___boxed, .m_arity = 7, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__4_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__3_value)} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__5 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__5_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__9___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__3_value)} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__6 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__6_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__7 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__7_value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__0_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__1_value)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__8 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__8_value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__8_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__2_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__5_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__6_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__7_value)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__9 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__9_value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__9_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__3_value)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__10 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__10_value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__11;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__12 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__12_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__13 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__13_value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadOptionsCoreM___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__14 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__14_value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Linter"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "CodeQuality"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "PackageCheck"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__18 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__18_value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value_aux_0),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value_aux_1),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(236, 118, 230, 29, 73, 107, 123, 191)}};
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value_aux_2),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__18_value),LEAN_SCALAR_PTR_LITERAL(172, 21, 99, 38, 62, 39, 49, 197)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19 = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19_value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__4;
static lean_once_cell_t l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5;
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageCheck(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_(lean_object*);
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2____boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "packageCheckExt"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value_aux_0),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(200, 24, 215, 162, 183, 90, 3, 112)}};
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value_aux_1),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(236, 118, 230, 29, 73, 107, 123, 191)}};
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value_aux_2),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(171, 92, 14, 95, 206, 228, 94, 132)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Array_push___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*7 + 0, .m_other = 7, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_packageCheckExt;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "` must have type `"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "`, got `"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 24, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 1, 1, 0),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 1, 1, 1, 2, 1),LEAN_SCALAR_PTR_LITERAL(1, 1, 1, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static uint64_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = " but is only marked `meta`"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "invalid attribute `package_code_quality_check`, declaration `"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "` must be marked as `public` and `meta`"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = " but is only marked `public`"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "invalid attribute `package_code_quality_check`, must be global"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Attribute `["};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "]` cannot be erased"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(196, 60, 89, 104, 222, 184, 104, 61)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(240, 119, 146, 239, 38, 55, 139, 70)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Frontend"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 229, 56, 95, 85, 111, 10, 132)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed, .m_arity = 11, .m_num_fixed = 5, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(28, 236, 152, 116, 65, 106, 38, 49)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(61, 18, 39, 184, 174, 92, 187, 210)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(207, 133, 247, 207, 97, 228, 32, 220)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(87, 254, 83, 13, 97, 126, 213, 4)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(38, 82, 160, 132, 50, 131, 170, 247)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 140, 119, 171, 215, 8, 225, 67)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__15_value),LEAN_SCALAR_PTR_LITERAL(106, 52, 241, 176, 102, 15, 88, 55)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__16_value),LEAN_SCALAR_PTR_LITERAL(212, 142, 194, 64, 216, 147, 179, 252)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__17_value),LEAN_SCALAR_PTR_LITERAL(160, 152, 151, 17, 217, 109, 135, 151)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(41, 84, 162, 220, 235, 87, 255, 26)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__21_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__21_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__21_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__22_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__22_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__23_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__23_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__23_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__24_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__24_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__25_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__25_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__26_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "package_code_quality_check"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__26_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__26_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__27_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__26_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(31, 161, 68, 176, 30, 230, 216, 132)}};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__27_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__27_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_closure_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__28_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__27_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value)} };
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__28_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__28_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__29_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "Use this declaration as a check in the code quality metrics driver"};
static const lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__29_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__29_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__30_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__30_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__31_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__31_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Linter_CodeQuality_getPackageChecks___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Linter_CodeQuality_getPackageChecks___closed__0;
static const lean_array_object l_Lean_Linter_CodeQuality_getPackageChecks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Linter_CodeQuality_getPackageChecks___closed__1 = (const lean_object*)&l_Lean_Linter_CodeQuality_getPackageChecks___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageChecks(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageChecks___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__1;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__3;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__4;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " has failed: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Linter_CodeQuality_runPackageChecks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Linter_CodeQuality_runPackageChecks___closed__0 = (const lean_object*)&l_Lean_Linter_CodeQuality_runPackageChecks___closed__0_value;
static const lean_ctor_object l_Lean_Linter_CodeQuality_runPackageChecks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Linter_CodeQuality_runPackageChecks___closed__0_value),((lean_object*)&l_Lean_Linter_CodeQuality_runPackageChecks___closed__0_value)}};
static const lean_object* l_Lean_Linter_CodeQuality_runPackageChecks___closed__1 = (const lean_object*)&l_Lean_Linter_CodeQuality_runPackageChecks___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_runPackageChecks(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_runPackageChecks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__11(void){
_start:
{
lean_object* v___x_24_; lean_object* v___x_25_; 
v___x_24_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__10));
v___x_25_ = l_StateRefT_x27_instMonad___redArg(v___x_24_);
return v___x_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1(lean_object* v_declName_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; lean_object* v_toApplicative_43_; lean_object* v_toFunctor_44_; lean_object* v_toSeq_45_; lean_object* v_toSeqLeft_46_; lean_object* v_toSeqRight_47_; lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___f_51_; lean_object* v___x_52_; lean_object* v___f_53_; lean_object* v___f_54_; lean_object* v___f_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___f_64_; lean_object* v___x_65_; lean_object* v___x_350__overap_66_; lean_object* v___x_67_; 
v___x_42_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__11, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__11_once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__11);
v_toApplicative_43_ = lean_ctor_get(v___x_42_, 0);
v_toFunctor_44_ = lean_ctor_get(v_toApplicative_43_, 0);
v_toSeq_45_ = lean_ctor_get(v_toApplicative_43_, 2);
v_toSeqLeft_46_ = lean_ctor_get(v_toApplicative_43_, 3);
v_toSeqRight_47_ = lean_ctor_get(v_toApplicative_43_, 4);
v___f_48_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__12));
v___f_49_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__13));
lean_inc_ref_n(v_toFunctor_44_, 2);
v___f_50_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_50_, 0, v_toFunctor_44_);
v___f_51_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_51_, 0, v_toFunctor_44_);
v___x_52_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_52_, 0, v___f_50_);
lean_ctor_set(v___x_52_, 1, v___f_51_);
lean_inc(v_toSeqRight_47_);
v___f_53_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_53_, 0, v_toSeqRight_47_);
lean_inc(v_toSeqLeft_46_);
v___f_54_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_54_, 0, v_toSeqLeft_46_);
lean_inc(v_toSeq_45_);
v___f_55_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_55_, 0, v_toSeq_45_);
v___x_56_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_56_, 0, v___x_52_);
lean_ctor_set(v___x_56_, 1, v___f_48_);
lean_ctor_set(v___x_56_, 2, v___f_55_);
lean_ctor_set(v___x_56_, 3, v___f_54_);
lean_ctor_set(v___x_56_, 4, v___f_53_);
v___x_57_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
lean_ctor_set(v___x_57_, 1, v___f_49_);
v___x_58_ = l_Lean_Core_instMonadEnvCoreM;
v___x_59_ = l_Lean_instMonadExceptOfExceptionCoreM;
v___x_60_ = l_Lean_Core_instMonadRefCoreM;
v___x_61_ = l_Lean_Core_instAddMessageContextCoreM;
lean_inc_ref(v___x_57_);
v___x_62_ = l_Lean_instAddErrorMessageContextOfAddMessageContextOfMonad___redArg(v___x_61_, v___x_57_);
v___x_63_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_63_, 0, v___x_59_);
lean_ctor_set(v___x_63_, 1, v___x_60_);
lean_ctor_set(v___x_63_, 2, v___x_62_);
v___f_64_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__14));
v___x_65_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19));
lean_inc(v_declName_38_);
v___x_350__overap_66_ = l_Lean_evalConstCheck___redArg(v___x_57_, v___x_58_, v___x_63_, v___f_64_, v___x_65_, v_declName_38_);
lean_inc(v___y_40_);
lean_inc_ref(v___y_39_);
v___x_67_ = lean_apply_3(v___x_350__overap_66_, v___y_39_, v___y_40_, lean_box(0));
if (lean_obj_tag(v___x_67_) == 0)
{
lean_object* v_a_68_; lean_object* v___x_70_; uint8_t v_isShared_71_; uint8_t v_isSharedCheck_76_; 
v_a_68_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_76_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_76_ == 0)
{
v___x_70_ = v___x_67_;
v_isShared_71_ = v_isSharedCheck_76_;
goto v_resetjp_69_;
}
else
{
lean_inc(v_a_68_);
lean_dec(v___x_67_);
v___x_70_ = lean_box(0);
v_isShared_71_ = v_isSharedCheck_76_;
goto v_resetjp_69_;
}
v_resetjp_69_:
{
lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v_a_68_);
lean_ctor_set(v___x_72_, 1, v_declName_38_);
if (v_isShared_71_ == 0)
{
lean_ctor_set(v___x_70_, 0, v___x_72_);
v___x_74_ = v___x_70_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v___x_72_);
v___x_74_ = v_reuseFailAlloc_75_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
return v___x_74_;
}
}
}
else
{
lean_object* v_a_77_; lean_object* v___x_79_; uint8_t v_isShared_80_; uint8_t v_isSharedCheck_84_; 
lean_dec(v_declName_38_);
v_a_77_ = lean_ctor_get(v___x_67_, 0);
v_isSharedCheck_84_ = !lean_is_exclusive(v___x_67_);
if (v_isSharedCheck_84_ == 0)
{
v___x_79_ = v___x_67_;
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
else
{
lean_inc(v_a_77_);
lean_dec(v___x_67_);
v___x_79_ = lean_box(0);
v_isShared_80_ = v_isSharedCheck_84_;
goto v_resetjp_78_;
}
v_resetjp_78_:
{
lean_object* v___x_82_; 
if (v_isShared_80_ == 0)
{
v___x_82_ = v___x_79_;
goto v_reusejp_81_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_a_77_);
v___x_82_ = v_reuseFailAlloc_83_;
goto v_reusejp_81_;
}
v_reusejp_81_:
{
return v___x_82_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___boxed(lean_object* v_declName_85_, lean_object* v___y_86_, lean_object* v___y_87_, lean_object* v___y_88_){
_start:
{
lean_object* v_res_89_; 
v_res_89_ = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1(v_declName_85_, v___y_86_, v___y_87_);
lean_dec(v___y_87_);
lean_dec_ref(v___y_86_);
return v_res_89_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0(void){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_90_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1(void){
_start:
{
lean_object* v___x_91_; lean_object* v___x_92_; 
v___x_91_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_92_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_92_, 0, v___x_91_);
return v___x_92_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2(void){
_start:
{
lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; 
v___x_93_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_95_, 0, v___x_94_);
lean_ctor_set(v___x_95_, 1, v___x_94_);
lean_ctor_set(v___x_95_, 2, v___x_94_);
lean_ctor_set(v___x_95_, 3, v___x_94_);
lean_ctor_set(v___x_95_, 4, v___x_93_);
lean_ctor_set(v___x_95_, 5, v___x_93_);
lean_ctor_set(v___x_95_, 6, v___x_93_);
lean_ctor_set(v___x_95_, 7, v___x_93_);
lean_ctor_set(v___x_95_, 8, v___x_93_);
lean_ctor_set(v___x_95_, 9, v___x_93_);
lean_ctor_set(v___x_95_, 10, v___x_93_);
return v___x_95_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3(void){
_start:
{
lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_96_ = lean_unsigned_to_nat(32u);
v___x_97_ = lean_mk_empty_array_with_capacity(v___x_96_);
v___x_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
return v___x_98_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__4(void){
_start:
{
size_t v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_99_ = ((size_t)5ULL);
v___x_100_ = lean_unsigned_to_nat(0u);
v___x_101_ = lean_unsigned_to_nat(32u);
v___x_102_ = lean_mk_empty_array_with_capacity(v___x_101_);
v___x_103_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3);
v___x_104_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_104_, 0, v___x_103_);
lean_ctor_set(v___x_104_, 1, v___x_102_);
lean_ctor_set(v___x_104_, 2, v___x_100_);
lean_ctor_set(v___x_104_, 3, v___x_100_);
lean_ctor_set_usize(v___x_104_, 4, v___x_99_);
return v___x_104_;
}
}
static lean_object* _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5(void){
_start:
{
lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v___x_107_; lean_object* v___x_108_; 
v___x_105_ = lean_box(1);
v___x_106_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__4, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__4_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__4);
v___x_107_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_108_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
lean_ctor_set(v___x_108_, 1, v___x_106_);
lean_ctor_set(v___x_108_, 2, v___x_105_);
return v___x_108_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3(lean_object* v_msgData_109_, lean_object* v___y_110_, lean_object* v___y_111_){
_start:
{
lean_object* v___x_113_; lean_object* v_toCold_114_; lean_object* v_env_115_; lean_object* v_options_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_113_ = lean_st_ref_get(v___y_111_);
v_toCold_114_ = lean_ctor_get(v___y_110_, 0);
v_env_115_ = lean_ctor_get(v___x_113_, 0);
lean_inc_ref(v_env_115_);
lean_dec(v___x_113_);
v_options_116_ = lean_ctor_get(v_toCold_114_, 2);
v___x_117_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2);
v___x_118_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5);
lean_inc_ref(v_options_116_);
v___x_119_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_119_, 0, v_env_115_);
lean_ctor_set(v___x_119_, 1, v___x_117_);
lean_ctor_set(v___x_119_, 2, v___x_118_);
lean_ctor_set(v___x_119_, 3, v_options_116_);
v___x_120_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_120_, 0, v___x_119_);
lean_ctor_set(v___x_120_, 1, v_msgData_109_);
v___x_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_121_, 0, v___x_120_);
return v___x_121_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v_msgData_122_, lean_object* v___y_123_, lean_object* v___y_124_, lean_object* v___y_125_){
_start:
{
lean_object* v_res_126_; 
v_res_126_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3(v_msgData_122_, v___y_123_, v___y_124_);
lean_dec(v___y_124_);
lean_dec_ref(v___y_123_);
return v_res_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(lean_object* v_msg_127_, lean_object* v___y_128_, lean_object* v___y_129_){
_start:
{
lean_object* v_ref_131_; lean_object* v___x_132_; lean_object* v_a_133_; lean_object* v___x_135_; uint8_t v_isShared_136_; uint8_t v_isSharedCheck_141_; 
v_ref_131_ = lean_ctor_get(v___y_128_, 2);
v___x_132_ = l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3(v_msg_127_, v___y_128_, v___y_129_);
v_a_133_ = lean_ctor_get(v___x_132_, 0);
v_isSharedCheck_141_ = !lean_is_exclusive(v___x_132_);
if (v_isSharedCheck_141_ == 0)
{
v___x_135_ = v___x_132_;
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
else
{
lean_inc(v_a_133_);
lean_dec(v___x_132_);
v___x_135_ = lean_box(0);
v_isShared_136_ = v_isSharedCheck_141_;
goto v_resetjp_134_;
}
v_resetjp_134_:
{
lean_object* v___x_137_; lean_object* v___x_139_; 
lean_inc(v_ref_131_);
v___x_137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_137_, 0, v_ref_131_);
lean_ctor_set(v___x_137_, 1, v_a_133_);
if (v_isShared_136_ == 0)
{
lean_ctor_set_tag(v___x_135_, 1);
lean_ctor_set(v___x_135_, 0, v___x_137_);
v___x_139_ = v___x_135_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v___x_137_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_msg_142_, lean_object* v___y_143_, lean_object* v___y_144_, lean_object* v___y_145_){
_start:
{
lean_object* v_res_146_; 
v_res_146_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v_msg_142_, v___y_143_, v___y_144_);
lean_dec(v___y_144_);
lean_dec_ref(v___y_143_);
return v_res_146_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg(lean_object* v_x_147_, lean_object* v___y_148_, lean_object* v___y_149_){
_start:
{
if (lean_obj_tag(v_x_147_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_152_; lean_object* v___x_153_; 
v_a_151_ = lean_ctor_get(v_x_147_, 0);
lean_inc(v_a_151_);
lean_dec_ref_known(v_x_147_, 1);
v___x_152_ = l_Lean_stringToMessageData(v_a_151_);
v___x_153_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v___x_152_, v___y_148_, v___y_149_);
return v___x_153_;
}
else
{
lean_object* v_a_154_; lean_object* v___x_156_; uint8_t v_isShared_157_; uint8_t v_isSharedCheck_161_; 
v_a_154_ = lean_ctor_get(v_x_147_, 0);
v_isSharedCheck_161_ = !lean_is_exclusive(v_x_147_);
if (v_isSharedCheck_161_ == 0)
{
v___x_156_ = v_x_147_;
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
else
{
lean_inc(v_a_154_);
lean_dec(v_x_147_);
v___x_156_ = lean_box(0);
v_isShared_157_ = v_isSharedCheck_161_;
goto v_resetjp_155_;
}
v_resetjp_155_:
{
lean_object* v___x_159_; 
if (v_isShared_157_ == 0)
{
lean_ctor_set_tag(v___x_156_, 0);
v___x_159_ = v___x_156_;
goto v_reusejp_158_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_a_154_);
v___x_159_ = v_reuseFailAlloc_160_;
goto v_reusejp_158_;
}
v_reusejp_158_:
{
return v___x_159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg___boxed(lean_object* v_x_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg(v_x_162_, v___y_163_, v___y_164_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
return v_res_166_;
}
}
static lean_object* _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = lean_box(0);
v___x_168_ = l_Lean_Elab_abortCommandExceptionId;
v___x_169_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_169_, 0, v___x_168_);
lean_ctor_set(v___x_169_, 1, v___x_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg(){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_obj_once(&l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___closed__0, &l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___closed__0_once, _init_l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___closed__0);
v___x_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_172_, 0, v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg___boxed(lean_object* v___y_173_){
_start:
{
lean_object* v_res_174_; 
v_res_174_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg();
return v_res_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___redArg(lean_object* v_typeName_175_, lean_object* v_constName_176_, lean_object* v___y_177_, lean_object* v___y_178_){
_start:
{
lean_object* v___x_180_; lean_object* v_env_181_; uint8_t v___x_182_; 
v___x_180_ = lean_st_ref_get(v___y_178_);
v_env_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc_ref(v_env_181_);
lean_dec(v___x_180_);
lean_inc(v_constName_176_);
v___x_182_ = lean_has_compile_error(v_env_181_, v_constName_176_);
if (v___x_182_ == 0)
{
lean_object* v___x_183_; lean_object* v_toCold_184_; lean_object* v_env_185_; lean_object* v_options_186_; lean_object* v___x_187_; lean_object* v___x_188_; 
v___x_183_ = lean_st_ref_get(v___y_178_);
v_toCold_184_ = lean_ctor_get(v___y_177_, 0);
v_env_185_ = lean_ctor_get(v___x_183_, 0);
lean_inc_ref(v_env_185_);
lean_dec(v___x_183_);
v_options_186_ = lean_ctor_get(v_toCold_184_, 2);
v___x_187_ = l_Lean_Environment_evalConstCheck___redArg(v_env_185_, v_options_186_, v_typeName_175_, v_constName_176_);
v___x_188_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg(v___x_187_, v___y_177_, v___y_178_);
return v___x_188_;
}
else
{
lean_object* v___x_189_; 
v___x_189_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg();
if (lean_obj_tag(v___x_189_) == 0)
{
lean_object* v___x_190_; lean_object* v_toCold_191_; lean_object* v_env_192_; lean_object* v_options_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
lean_dec_ref_known(v___x_189_, 1);
v___x_190_ = lean_st_ref_get(v___y_178_);
v_toCold_191_ = lean_ctor_get(v___y_177_, 0);
v_env_192_ = lean_ctor_get(v___x_190_, 0);
lean_inc_ref(v_env_192_);
lean_dec(v___x_190_);
v_options_193_ = lean_ctor_get(v_toCold_191_, 2);
v___x_194_ = l_Lean_Environment_evalConstCheck___redArg(v_env_192_, v_options_193_, v_typeName_175_, v_constName_176_);
v___x_195_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg(v___x_194_, v___y_177_, v___y_178_);
return v___x_195_;
}
else
{
lean_object* v_a_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_203_; 
lean_dec(v_constName_176_);
lean_dec(v_typeName_175_);
v_a_196_ = lean_ctor_get(v___x_189_, 0);
v_isSharedCheck_203_ = !lean_is_exclusive(v___x_189_);
if (v_isSharedCheck_203_ == 0)
{
v___x_198_ = v___x_189_;
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_a_196_);
lean_dec(v___x_189_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_203_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_201_; 
if (v_isShared_199_ == 0)
{
v___x_201_ = v___x_198_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v_a_196_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___redArg___boxed(lean_object* v_typeName_204_, lean_object* v_constName_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___redArg(v_typeName_204_, v_constName_205_, v___y_206_, v___y_207_);
lean_dec(v___y_207_);
lean_dec_ref(v___y_206_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageCheck(lean_object* v_declName_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
lean_object* v___x_214_; lean_object* v___x_215_; 
v___x_214_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__19));
lean_inc(v_declName_210_);
v___x_215_ = l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___redArg(v___x_214_, v_declName_210_, v___y_211_, v___y_212_);
if (lean_obj_tag(v___x_215_) == 0)
{
lean_object* v_a_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_224_; 
v_a_216_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_224_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_224_ == 0)
{
v___x_218_ = v___x_215_;
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_a_216_);
lean_dec(v___x_215_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_224_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v___x_220_; lean_object* v___x_222_; 
v___x_220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_220_, 0, v_a_216_);
lean_ctor_set(v___x_220_, 1, v_declName_210_);
if (v_isShared_219_ == 0)
{
lean_ctor_set(v___x_218_, 0, v___x_220_);
v___x_222_ = v___x_218_;
goto v_reusejp_221_;
}
else
{
lean_object* v_reuseFailAlloc_223_; 
v_reuseFailAlloc_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_223_, 0, v___x_220_);
v___x_222_ = v_reuseFailAlloc_223_;
goto v_reusejp_221_;
}
v_reusejp_221_:
{
return v___x_222_;
}
}
}
else
{
lean_object* v_a_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_232_; 
lean_dec(v_declName_210_);
v_a_225_ = lean_ctor_get(v___x_215_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v___x_215_);
if (v_isSharedCheck_232_ == 0)
{
v___x_227_ = v___x_215_;
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_a_225_);
lean_dec(v___x_215_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_232_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_230_; 
if (v_isShared_228_ == 0)
{
v___x_230_ = v___x_227_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_a_225_);
v___x_230_ = v_reuseFailAlloc_231_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
return v___x_230_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageCheck___boxed(lean_object* v_declName_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_Linter_CodeQuality_getPackageCheck(v_declName_233_, v___y_234_, v___y_235_);
lean_dec(v___y_235_);
lean_dec_ref(v___y_234_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1(lean_object* v_00_u03b1_238_, lean_object* v___y_239_, lean_object* v___y_240_){
_start:
{
lean_object* v___x_242_; 
v___x_242_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___redArg();
return v___x_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1___boxed(lean_object* v_00_u03b1_243_, lean_object* v___y_244_, lean_object* v___y_245_, lean_object* v___y_246_){
_start:
{
lean_object* v_res_247_; 
v_res_247_ = l_Lean_Elab_throwAbortCommand___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__1(v_00_u03b1_243_, v___y_244_, v___y_245_);
lean_dec(v___y_245_);
lean_dec_ref(v___y_244_);
return v_res_247_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0(lean_object* v_00_u03b1_248_, lean_object* v_typeName_249_, lean_object* v_constName_250_, lean_object* v___y_251_, lean_object* v___y_252_){
_start:
{
lean_object* v___x_254_; 
v___x_254_ = l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___redArg(v_typeName_249_, v_constName_250_, v___y_251_, v___y_252_);
return v___x_254_;
}
}
LEAN_EXPORT lean_object* l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0___boxed(lean_object* v_00_u03b1_255_, lean_object* v_typeName_256_, lean_object* v_constName_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0(v_00_u03b1_255_, v_typeName_256_, v_constName_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0(lean_object* v_00_u03b1_262_, lean_object* v_x_263_, lean_object* v___y_264_, lean_object* v___y_265_){
_start:
{
lean_object* v___x_267_; 
v___x_267_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___redArg(v_x_263_, v___y_264_, v___y_265_);
return v___x_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0___boxed(lean_object* v_00_u03b1_268_, lean_object* v_x_269_, lean_object* v___y_270_, lean_object* v___y_271_, lean_object* v___y_272_){
_start:
{
lean_object* v_res_273_; 
v_res_273_ = l_Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0(v_00_u03b1_268_, v_x_269_, v___y_270_, v___y_271_);
lean_dec(v___y_271_);
lean_dec_ref(v___y_270_);
return v_res_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_274_, lean_object* v_msg_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v_msg_275_, v___y_276_, v___y_277_);
return v___x_279_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_280_, lean_object* v_msg_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v_res_285_; 
v_res_285_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1(v_00_u03b1_280_, v_msg_281_, v___y_282_, v___y_283_);
lean_dec(v___y_283_);
lean_dec_ref(v___y_282_);
return v_res_285_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__spec__0(lean_object* v_as_286_, size_t v_i_287_, size_t v_stop_288_, lean_object* v_b_289_){
_start:
{
uint8_t v___x_290_; 
v___x_290_ = lean_usize_dec_eq(v_i_287_, v_stop_288_);
if (v___x_290_ == 0)
{
lean_object* v___x_291_; lean_object* v___x_292_; size_t v___x_293_; size_t v___x_294_; 
v___x_291_ = lean_array_uget_borrowed(v_as_286_, v_i_287_);
v___x_292_ = l_Array_append___redArg(v_b_289_, v___x_291_);
v___x_293_ = ((size_t)1ULL);
v___x_294_ = lean_usize_add(v_i_287_, v___x_293_);
v_i_287_ = v___x_294_;
v_b_289_ = v___x_292_;
goto _start;
}
else
{
return v_b_289_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__spec__0___boxed(lean_object* v_as_296_, lean_object* v_i_297_, lean_object* v_stop_298_, lean_object* v_b_299_){
_start:
{
size_t v_i_boxed_300_; size_t v_stop_boxed_301_; lean_object* v_res_302_; 
v_i_boxed_300_ = lean_unbox_usize(v_i_297_);
lean_dec(v_i_297_);
v_stop_boxed_301_ = lean_unbox_usize(v_stop_298_);
lean_dec(v_stop_298_);
v_res_302_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__spec__0(v_as_296_, v_i_boxed_300_, v_stop_boxed_301_, v_b_299_);
lean_dec_ref(v_as_296_);
return v_res_302_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_(lean_object* v_nss_305_){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; uint8_t v___x_309_; 
v___x_306_ = lean_unsigned_to_nat(0u);
v___x_307_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_));
v___x_308_ = lean_array_get_size(v_nss_305_);
v___x_309_ = lean_nat_dec_lt(v___x_306_, v___x_308_);
if (v___x_309_ == 0)
{
return v___x_307_;
}
else
{
uint8_t v___x_310_; 
v___x_310_ = lean_nat_dec_le(v___x_308_, v___x_308_);
if (v___x_310_ == 0)
{
if (v___x_309_ == 0)
{
return v___x_307_;
}
else
{
size_t v___x_311_; size_t v___x_312_; lean_object* v___x_313_; 
v___x_311_ = ((size_t)0ULL);
v___x_312_ = lean_usize_of_nat(v___x_308_);
v___x_313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__spec__0(v_nss_305_, v___x_311_, v___x_312_, v___x_307_);
return v___x_313_;
}
}
else
{
size_t v___x_314_; size_t v___x_315_; lean_object* v___x_316_; 
v___x_314_ = ((size_t)0ULL);
v___x_315_ = lean_usize_of_nat(v___x_308_);
v___x_316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2__spec__0(v_nss_305_, v___x_314_, v___x_315_, v___x_307_);
return v___x_316_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2____boxed(lean_object* v_nss_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_(v_nss_317_);
lean_dec_ref(v_nss_317_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_(lean_object* v_es_319_){
_start:
{
lean_object* v___x_320_; 
v___x_320_ = lean_array_mk(v_es_319_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_338_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_));
v___x_339_ = l_Lean_registerSimplePersistentEnvExtension___redArg(v___x_338_);
return v___x_339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2____boxed(lean_object* v___y_340_){
_start:
{
lean_object* v_res_341_; 
v_res_341_ = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_();
return v_res_341_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_343_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__0));
v___x_344_ = l_Lean_stringToMessageData(v___x_343_);
return v___x_344_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; 
v___x_346_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__2));
v___x_347_ = l_Lean_stringToMessageData(v___x_346_);
return v___x_347_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; 
v___x_349_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__4));
v___x_350_ = l_Lean_stringToMessageData(v___x_349_);
return v___x_350_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_352_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__6));
v___x_353_ = l_Lean_stringToMessageData(v___x_352_);
return v___x_353_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; 
v___x_355_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__8));
v___x_356_ = l_Lean_stringToMessageData(v___x_355_);
return v___x_356_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__10));
v___x_359_ = l_Lean_stringToMessageData(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13(void){
_start:
{
lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_361_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__12));
v___x_362_ = l_Lean_stringToMessageData(v___x_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(lean_object* v_msg_363_, lean_object* v_declHint_364_, lean_object* v___y_365_){
_start:
{
lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v_env_369_; uint8_t v___x_370_; 
v___x_367_ = lean_box(0);
v___x_368_ = lean_st_ref_get(v___y_365_);
v_env_369_ = lean_ctor_get(v___x_368_, 0);
lean_inc_ref(v_env_369_);
lean_dec(v___x_368_);
v___x_370_ = l_Lean_Name_isAnonymous(v_declHint_364_);
if (v___x_370_ == 0)
{
uint8_t v_isExporting_371_; 
v_isExporting_371_ = lean_ctor_get_uint8(v_env_369_, sizeof(void*)*8);
if (v_isExporting_371_ == 0)
{
lean_object* v___x_372_; 
lean_dec_ref(v_env_369_);
lean_dec(v_declHint_364_);
v___x_372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_372_, 0, v_msg_363_);
return v___x_372_;
}
else
{
lean_object* v___x_373_; uint8_t v___x_374_; 
lean_inc_ref(v_env_369_);
v___x_373_ = l_Lean_Environment_setExporting(v_env_369_, v___x_370_);
lean_inc(v_declHint_364_);
lean_inc_ref(v___x_373_);
v___x_374_ = l_Lean_Environment_contains(v___x_373_, v_declHint_364_, v_isExporting_371_);
if (v___x_374_ == 0)
{
lean_object* v___x_375_; 
lean_dec_ref(v___x_373_);
lean_dec_ref(v_env_369_);
lean_dec(v_declHint_364_);
v___x_375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_375_, 0, v_msg_363_);
return v___x_375_;
}
else
{
lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v_c_381_; lean_object* v___x_382_; 
v___x_376_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2);
v___x_377_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__5);
v___x_378_ = l_Lean_Options_empty;
v___x_379_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_379_, 0, v___x_373_);
lean_ctor_set(v___x_379_, 1, v___x_376_);
lean_ctor_set(v___x_379_, 2, v___x_377_);
lean_ctor_set(v___x_379_, 3, v___x_378_);
lean_inc(v_declHint_364_);
v___x_380_ = l_Lean_MessageData_ofConstName(v_declHint_364_, v___x_370_);
v_c_381_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_381_, 0, v___x_379_);
lean_ctor_set(v_c_381_, 1, v___x_380_);
v___x_382_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_369_, v_declHint_364_);
if (lean_obj_tag(v___x_382_) == 0)
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; 
lean_dec_ref(v_env_369_);
lean_dec(v_declHint_364_);
v___x_383_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_384_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_384_, 0, v___x_383_);
lean_ctor_set(v___x_384_, 1, v_c_381_);
v___x_385_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__3);
v___x_386_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_386_, 0, v___x_384_);
lean_ctor_set(v___x_386_, 1, v___x_385_);
v___x_387_ = l_Lean_MessageData_note(v___x_386_);
v___x_388_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_388_, 0, v_msg_363_);
lean_ctor_set(v___x_388_, 1, v___x_387_);
v___x_389_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_389_, 0, v___x_388_);
return v___x_389_;
}
else
{
lean_object* v_val_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_424_; 
v_val_390_ = lean_ctor_get(v___x_382_, 0);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_382_);
if (v_isSharedCheck_424_ == 0)
{
v___x_392_ = v___x_382_;
v_isShared_393_ = v_isSharedCheck_424_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_val_390_);
lean_dec(v___x_382_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_424_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_mod_396_; uint8_t v___x_397_; 
v___x_394_ = l_Lean_Environment_header(v_env_369_);
lean_dec_ref(v_env_369_);
v___x_395_ = l_Lean_EnvironmentHeader_moduleNames(v___x_394_);
v_mod_396_ = lean_array_get(v___x_367_, v___x_395_, v_val_390_);
lean_dec(v_val_390_);
lean_dec_ref(v___x_395_);
v___x_397_ = l_Lean_isPrivateName(v_declHint_364_);
lean_dec(v_declHint_364_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_398_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__5);
v___x_399_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_399_, 0, v___x_398_);
lean_ctor_set(v___x_399_, 1, v_c_381_);
v___x_400_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__7);
v___x_401_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_401_, 0, v___x_399_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = l_Lean_MessageData_ofName(v_mod_396_);
v___x_403_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_401_);
lean_ctor_set(v___x_403_, 1, v___x_402_);
v___x_404_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__9);
v___x_405_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_403_);
lean_ctor_set(v___x_405_, 1, v___x_404_);
v___x_406_ = l_Lean_MessageData_note(v___x_405_);
v___x_407_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_407_, 0, v_msg_363_);
lean_ctor_set(v___x_407_, 1, v___x_406_);
if (v_isShared_393_ == 0)
{
lean_ctor_set_tag(v___x_392_, 0);
lean_ctor_set(v___x_392_, 0, v___x_407_);
v___x_409_ = v___x_392_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_407_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
else
{
lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_411_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__1);
v___x_412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v_c_381_);
v___x_413_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__11);
v___x_414_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_414_, 0, v___x_412_);
lean_ctor_set(v___x_414_, 1, v___x_413_);
v___x_415_ = l_Lean_MessageData_ofName(v_mod_396_);
v___x_416_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_416_, 0, v___x_414_);
lean_ctor_set(v___x_416_, 1, v___x_415_);
v___x_417_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___closed__13);
v___x_418_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_418_, 0, v___x_416_);
lean_ctor_set(v___x_418_, 1, v___x_417_);
v___x_419_ = l_Lean_MessageData_note(v___x_418_);
v___x_420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_420_, 0, v_msg_363_);
lean_ctor_set(v___x_420_, 1, v___x_419_);
if (v_isShared_393_ == 0)
{
lean_ctor_set_tag(v___x_392_, 0);
lean_ctor_set(v___x_392_, 0, v___x_420_);
v___x_422_ = v___x_392_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_420_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_425_; 
lean_dec_ref(v_env_369_);
lean_dec(v_declHint_364_);
v___x_425_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_425_, 0, v_msg_363_);
return v___x_425_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_msg_426_, lean_object* v_declHint_427_, lean_object* v___y_428_, lean_object* v___y_429_){
_start:
{
lean_object* v_res_430_; 
v_res_430_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_426_, v_declHint_427_, v___y_428_);
lean_dec(v___y_428_);
return v_res_430_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(lean_object* v_msg_431_, lean_object* v_declHint_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v___x_436_; lean_object* v_a_437_; lean_object* v___x_439_; uint8_t v_isShared_440_; uint8_t v_isSharedCheck_446_; 
v___x_436_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_431_, v_declHint_432_, v___y_434_);
v_a_437_ = lean_ctor_get(v___x_436_, 0);
v_isSharedCheck_446_ = !lean_is_exclusive(v___x_436_);
if (v_isSharedCheck_446_ == 0)
{
v___x_439_ = v___x_436_;
v_isShared_440_ = v_isSharedCheck_446_;
goto v_resetjp_438_;
}
else
{
lean_inc(v_a_437_);
lean_dec(v___x_436_);
v___x_439_ = lean_box(0);
v_isShared_440_ = v_isSharedCheck_446_;
goto v_resetjp_438_;
}
v_resetjp_438_:
{
lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_444_; 
v___x_441_ = l_Lean_unknownIdentifierMessageTag;
v___x_442_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_442_, 0, v___x_441_);
lean_ctor_set(v___x_442_, 1, v_a_437_);
if (v_isShared_440_ == 0)
{
lean_ctor_set(v___x_439_, 0, v___x_442_);
v___x_444_ = v___x_439_;
goto v_reusejp_443_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_442_);
v___x_444_ = v_reuseFailAlloc_445_;
goto v_reusejp_443_;
}
v_reusejp_443_:
{
return v___x_444_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3___boxed(lean_object* v_msg_447_, lean_object* v_declHint_448_, lean_object* v___y_449_, lean_object* v___y_450_, lean_object* v___y_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_447_, v_declHint_448_, v___y_449_, v___y_450_);
lean_dec(v___y_450_);
lean_dec_ref(v___y_449_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_ref_453_, lean_object* v_msg_454_, lean_object* v___y_455_, lean_object* v___y_456_){
_start:
{
lean_object* v_toCold_458_; lean_object* v_currRecDepth_459_; lean_object* v_ref_460_; uint8_t v_diag_461_; uint8_t v_suppressElabErrors_462_; lean_object* v_ref_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_toCold_458_ = lean_ctor_get(v___y_455_, 0);
v_currRecDepth_459_ = lean_ctor_get(v___y_455_, 1);
v_ref_460_ = lean_ctor_get(v___y_455_, 2);
v_diag_461_ = lean_ctor_get_uint8(v___y_455_, sizeof(void*)*3);
v_suppressElabErrors_462_ = lean_ctor_get_uint8(v___y_455_, sizeof(void*)*3 + 1);
v_ref_463_ = l_Lean_replaceRef(v_ref_453_, v_ref_460_);
lean_inc(v_currRecDepth_459_);
lean_inc_ref(v_toCold_458_);
v___x_464_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_464_, 0, v_toCold_458_);
lean_ctor_set(v___x_464_, 1, v_currRecDepth_459_);
lean_ctor_set(v___x_464_, 2, v_ref_463_);
lean_ctor_set_uint8(v___x_464_, sizeof(void*)*3, v_diag_461_);
lean_ctor_set_uint8(v___x_464_, sizeof(void*)*3 + 1, v_suppressElabErrors_462_);
v___x_465_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v_msg_454_, v___x_464_, v___y_456_);
lean_dec_ref_known(v___x_464_, 3);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v_ref_466_, lean_object* v_msg_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_466_, v_msg_467_, v___y_468_, v___y_469_);
lean_dec(v___y_469_);
lean_dec_ref(v___y_468_);
lean_dec(v_ref_466_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_ref_472_, lean_object* v_msg_473_, lean_object* v_declHint_474_, lean_object* v___y_475_, lean_object* v___y_476_){
_start:
{
lean_object* v___x_478_; lean_object* v_a_479_; lean_object* v___x_480_; 
v___x_478_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3(v_msg_473_, v_declHint_474_, v___y_475_, v___y_476_);
v_a_479_ = lean_ctor_get(v___x_478_, 0);
lean_inc(v_a_479_);
lean_dec_ref(v___x_478_);
v___x_480_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_472_, v_a_479_, v___y_475_, v___y_476_);
return v___x_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_ref_481_, lean_object* v_msg_482_, lean_object* v_declHint_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
lean_object* v_res_487_; 
v_res_487_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ref_481_, v_msg_482_, v_declHint_483_, v___y_484_, v___y_485_);
lean_dec(v___y_485_);
lean_dec_ref(v___y_484_);
lean_dec(v_ref_481_);
return v_res_487_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; 
v___x_489_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__0));
v___x_490_ = l_Lean_stringToMessageData(v___x_489_);
return v___x_490_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__2));
v___x_493_ = l_Lean_stringToMessageData(v___x_492_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(lean_object* v_ref_494_, lean_object* v_constName_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
lean_object* v___x_499_; uint8_t v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_504_; lean_object* v___x_505_; 
v___x_499_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__1);
v___x_500_ = 0;
lean_inc(v_constName_495_);
v___x_501_ = l_Lean_MessageData_ofConstName(v_constName_495_, v___x_500_);
v___x_502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_502_, 0, v___x_499_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v___x_503_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3);
v___x_504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_504_, 0, v___x_502_);
lean_ctor_set(v___x_504_, 1, v___x_503_);
v___x_505_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ref_494_, v___x_504_, v_constName_495_, v___y_496_, v___y_497_);
return v___x_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_ref_506_, lean_object* v_constName_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_ref_506_, v_constName_507_, v___y_508_, v___y_509_);
lean_dec(v___y_509_);
lean_dec_ref(v___y_508_);
lean_dec(v_ref_506_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___redArg(lean_object* v_constName_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v_ref_516_; lean_object* v___x_517_; 
v_ref_516_ = lean_ctor_get(v___y_513_, 2);
v___x_517_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_ref_516_, v_constName_512_, v___y_513_, v___y_514_);
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___redArg___boxed(lean_object* v_constName_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___redArg(v_constName_518_, v___y_519_, v___y_520_);
lean_dec(v___y_520_);
lean_dec_ref(v___y_519_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0(lean_object* v_constName_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
lean_object* v___x_527_; lean_object* v_env_528_; uint8_t v___x_529_; lean_object* v___x_530_; 
v___x_527_ = lean_st_ref_get(v___y_525_);
v_env_528_ = lean_ctor_get(v___x_527_, 0);
lean_inc_ref(v_env_528_);
lean_dec(v___x_527_);
v___x_529_ = 0;
lean_inc(v_constName_523_);
v___x_530_ = l_Lean_Environment_find_x3f(v_env_528_, v_constName_523_, v___x_529_);
if (lean_obj_tag(v___x_530_) == 0)
{
lean_object* v___x_531_; 
v___x_531_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___redArg(v_constName_523_, v___y_524_, v___y_525_);
return v___x_531_;
}
else
{
lean_object* v_val_532_; lean_object* v___x_534_; uint8_t v_isShared_535_; uint8_t v_isSharedCheck_539_; 
lean_dec(v_constName_523_);
v_val_532_ = lean_ctor_get(v___x_530_, 0);
v_isSharedCheck_539_ = !lean_is_exclusive(v___x_530_);
if (v_isSharedCheck_539_ == 0)
{
v___x_534_ = v___x_530_;
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
else
{
lean_inc(v_val_532_);
lean_dec(v___x_530_);
v___x_534_ = lean_box(0);
v_isShared_535_ = v_isSharedCheck_539_;
goto v_resetjp_533_;
}
v_resetjp_533_:
{
lean_object* v___x_537_; 
if (v_isShared_535_ == 0)
{
lean_ctor_set_tag(v___x_534_, 0);
v___x_537_ = v___x_534_;
goto v_reusejp_536_;
}
else
{
lean_object* v_reuseFailAlloc_538_; 
v_reuseFailAlloc_538_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_538_, 0, v_val_532_);
v___x_537_ = v_reuseFailAlloc_538_;
goto v_reusejp_536_;
}
v_reusejp_536_:
{
return v___x_537_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0___boxed(lean_object* v_constName_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_){
_start:
{
lean_object* v_res_544_; 
v_res_544_ = l_Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0(v_constName_540_, v___y_541_, v___y_542_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
return v_res_544_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; 
v___x_545_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_546_, 0, v___x_545_);
return v___x_546_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_547_; lean_object* v___x_548_; 
v___x_547_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_548_, 0, v___x_547_);
lean_ctor_set(v___x_548_, 1, v___x_547_);
return v___x_548_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_550_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_551_ = l_Lean_stringToMessageData(v___x_550_);
return v___x_551_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__4_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_554_ = l_Lean_stringToMessageData(v___x_553_);
return v___x_554_;
}
}
static uint64_t _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_561_; uint64_t v___x_562_; 
v___x_561_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_562_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_561_);
return v___x_562_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
uint64_t v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_uint64_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_564_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__6_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_565_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set_uint64(v___x_565_, sizeof(void*)*1, v___x_563_);
return v___x_565_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; 
v___x_566_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__0);
v___x_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_567_, 0, v___x_566_);
return v___x_567_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_568_; lean_object* v___x_569_; 
v___x_568_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_569_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_569_, 0, v___x_568_);
lean_ctor_set(v___x_569_, 1, v___x_568_);
lean_ctor_set(v___x_569_, 2, v___x_568_);
lean_ctor_set(v___x_569_, 3, v___x_568_);
lean_ctor_set(v___x_569_, 4, v___x_568_);
lean_ctor_set(v___x_569_, 5, v___x_568_);
return v___x_569_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_570_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_571_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_571_, 0, v___x_570_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
lean_ctor_set(v___x_571_, 2, v___x_570_);
lean_ctor_set(v___x_571_, 3, v___x_570_);
lean_ctor_set(v___x_571_, 4, v___x_570_);
return v___x_571_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__14_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_576_ = l_Lean_stringToMessageData(v___x_575_);
return v___x_576_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_578_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__16_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_579_ = l_Lean_stringToMessageData(v___x_578_);
return v___x_579_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_583_ = l_Lean_stringToMessageData(v___x_582_);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(lean_object* v___x_584_, lean_object* v___x_585_, lean_object* v___x_586_, lean_object* v___x_587_, lean_object* v___x_588_, lean_object* v_decl_589_, lean_object* v___stx_590_, uint8_t v_kind_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___y_596_; lean_object* v___y_623_; uint8_t v___y_624_; lean_object* v___y_625_; lean_object* v___y_626_; lean_object* v___y_627_; uint8_t v_a_628_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_694_; lean_object* v___y_695_; lean_object* v___y_696_; lean_object* v___y_697_; lean_object* v___y_702_; lean_object* v___y_703_; lean_object* v___y_704_; uint8_t v___y_705_; lean_object* v___y_706_; lean_object* v___y_712_; lean_object* v___y_713_; uint8_t v___y_714_; uint8_t v___y_715_; uint8_t v___y_716_; uint8_t v___x_732_; uint8_t v___x_733_; 
v___x_732_ = 0;
v___x_733_ = l_Lean_instBEqAttributeKind_beq(v_kind_591_, v___x_732_);
if (v___x_733_ == 0)
{
lean_object* v___x_734_; lean_object* v___x_735_; 
lean_dec(v_decl_589_);
lean_dec(v___x_588_);
lean_dec_ref(v___x_587_);
lean_dec_ref(v___x_586_);
lean_dec_ref(v___x_585_);
lean_dec(v___x_584_);
v___x_734_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_735_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v___x_734_, v___y_592_, v___y_593_);
return v___x_735_;
}
else
{
goto v___jp_724_;
}
v___jp_595_:
{
lean_object* v___x_597_; lean_object* v_env_598_; lean_object* v_nextMacroScope_599_; lean_object* v_ngen_600_; lean_object* v_auxDeclNGen_601_; lean_object* v_traceState_602_; lean_object* v_messages_603_; lean_object* v_infoState_604_; lean_object* v_snapshotTasks_605_; lean_object* v___x_607_; uint8_t v_isShared_608_; uint8_t v_isSharedCheck_620_; 
v___x_597_ = lean_st_ref_take(v___y_596_);
v_env_598_ = lean_ctor_get(v___x_597_, 0);
v_nextMacroScope_599_ = lean_ctor_get(v___x_597_, 1);
v_ngen_600_ = lean_ctor_get(v___x_597_, 2);
v_auxDeclNGen_601_ = lean_ctor_get(v___x_597_, 3);
v_traceState_602_ = lean_ctor_get(v___x_597_, 4);
v_messages_603_ = lean_ctor_get(v___x_597_, 6);
v_infoState_604_ = lean_ctor_get(v___x_597_, 7);
v_snapshotTasks_605_ = lean_ctor_get(v___x_597_, 8);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_597_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; 
v_unused_621_ = lean_ctor_get(v___x_597_, 5);
lean_dec(v_unused_621_);
v___x_607_ = v___x_597_;
v_isShared_608_ = v_isSharedCheck_620_;
goto v_resetjp_606_;
}
else
{
lean_inc(v_snapshotTasks_605_);
lean_inc(v_infoState_604_);
lean_inc(v_messages_603_);
lean_inc(v_traceState_602_);
lean_inc(v_auxDeclNGen_601_);
lean_inc(v_ngen_600_);
lean_inc(v_nextMacroScope_599_);
lean_inc(v_env_598_);
lean_dec(v___x_597_);
v___x_607_ = lean_box(0);
v_isShared_608_ = v_isSharedCheck_620_;
goto v_resetjp_606_;
}
v_resetjp_606_:
{
lean_object* v___x_609_; lean_object* v_toEnvExtension_610_; lean_object* v_asyncMode_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_616_; 
v___x_609_ = l_Lean_Linter_CodeQuality_packageCheckExt;
v_toEnvExtension_610_ = lean_ctor_get(v___x_609_, 0);
v_asyncMode_611_ = lean_ctor_get(v_toEnvExtension_610_, 2);
v___x_612_ = lean_box(0);
v___x_613_ = l_Lean_PersistentEnvExtension_addEntry___redArg(v___x_609_, v_env_598_, v_decl_589_, v_asyncMode_611_, v___x_584_);
v___x_614_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
if (v_isShared_608_ == 0)
{
lean_ctor_set(v___x_607_, 5, v___x_614_);
lean_ctor_set(v___x_607_, 0, v___x_613_);
v___x_616_ = v___x_607_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v___x_613_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_nextMacroScope_599_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_ngen_600_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_auxDeclNGen_601_);
lean_ctor_set(v_reuseFailAlloc_619_, 4, v_traceState_602_);
lean_ctor_set(v_reuseFailAlloc_619_, 5, v___x_614_);
lean_ctor_set(v_reuseFailAlloc_619_, 6, v_messages_603_);
lean_ctor_set(v_reuseFailAlloc_619_, 7, v_infoState_604_);
lean_ctor_set(v_reuseFailAlloc_619_, 8, v_snapshotTasks_605_);
v___x_616_ = v_reuseFailAlloc_619_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_st_ref_put(v___y_596_, v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_612_);
return v___x_618_;
}
}
}
v___jp_622_:
{
if (v_a_628_ == 0)
{
lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
lean_dec(v___x_584_);
v___x_629_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg___closed__3);
v___x_630_ = l_Lean_MessageData_ofConstName(v_decl_589_, v___y_624_);
v___x_631_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_631_, 0, v___x_629_);
lean_ctor_set(v___x_631_, 1, v___x_630_);
v___x_632_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_633_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_633_, 0, v___x_631_);
lean_ctor_set(v___x_633_, 1, v___x_632_);
v___x_634_ = l_Lean_MessageData_ofConstName(v___y_626_, v___y_624_);
v___x_635_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_635_, 0, v___x_633_);
lean_ctor_set(v___x_635_, 1, v___x_634_);
v___x_636_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__5_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_637_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_637_, 0, v___x_635_);
lean_ctor_set(v___x_637_, 1, v___x_636_);
v___x_638_ = l_Lean_MessageData_ofExpr(v___y_623_);
v___x_639_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_639_, 0, v___x_637_);
lean_ctor_set(v___x_639_, 1, v___x_638_);
v___x_640_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_640_, 0, v___x_639_);
lean_ctor_set(v___x_640_, 1, v___x_629_);
v___x_641_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v___x_640_, v___y_627_, v___y_625_);
return v___x_641_;
}
else
{
lean_dec(v___y_626_);
lean_dec_ref(v___y_623_);
v___y_596_ = v___y_625_;
goto v___jp_595_;
}
}
v___jp_642_:
{
lean_object* v___x_645_; 
lean_inc(v_decl_589_);
v___x_645_ = l_Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0(v_decl_589_, v___y_643_, v___y_644_);
if (lean_obj_tag(v___x_645_) == 0)
{
lean_object* v_a_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; uint8_t v___x_652_; uint8_t v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; size_t v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; 
v_a_646_ = lean_ctor_get(v___x_645_, 0);
lean_inc(v_a_646_);
lean_dec_ref_known(v___x_645_, 1);
v___x_647_ = l_Lean_ConstantInfo_type(v_a_646_);
lean_dec(v_a_646_);
v___x_648_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_getPackageCheck_unsafe__1___closed__18));
v___x_649_ = l_Lean_Name_mkStr4(v___x_585_, v___x_586_, v___x_587_, v___x_648_);
v___x_650_ = lean_box(0);
lean_inc(v___x_649_);
v___x_651_ = l_Lean_mkConst(v___x_649_, v___x_650_);
v___x_652_ = 0;
v___x_653_ = 1;
v___x_654_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__8_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_655_ = lean_box(1);
v___x_656_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__9_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_657_ = lean_unsigned_to_nat(32u);
v___x_658_ = lean_mk_empty_array_with_capacity(v___x_657_);
v___x_659_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__3);
v___x_660_ = ((size_t)5ULL);
lean_inc_n(v___x_588_, 6);
v___x_661_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_661_, 0, v___x_659_);
lean_ctor_set(v___x_661_, 1, v___x_658_);
lean_ctor_set(v___x_661_, 2, v___x_588_);
lean_ctor_set(v___x_661_, 3, v___x_588_);
lean_ctor_set_usize(v___x_661_, 4, v___x_660_);
lean_inc_ref(v___x_661_);
v___x_662_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_662_, 0, v___x_656_);
lean_ctor_set(v___x_662_, 1, v___x_661_);
lean_ctor_set(v___x_662_, 2, v___x_655_);
v___x_663_ = lean_mk_empty_array_with_capacity(v___x_588_);
v___x_664_ = lean_box(0);
v___x_665_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_665_, 0, v___x_654_);
lean_ctor_set(v___x_665_, 1, v___x_655_);
lean_ctor_set(v___x_665_, 2, v___x_662_);
lean_ctor_set(v___x_665_, 3, v___x_663_);
lean_ctor_set(v___x_665_, 4, v___x_664_);
lean_ctor_set(v___x_665_, 5, v___x_588_);
lean_ctor_set(v___x_665_, 6, v___x_664_);
lean_ctor_set_uint8(v___x_665_, sizeof(void*)*7, v___x_652_);
lean_ctor_set_uint8(v___x_665_, sizeof(void*)*7 + 1, v___x_652_);
lean_ctor_set_uint8(v___x_665_, sizeof(void*)*7 + 2, v___x_652_);
lean_ctor_set_uint8(v___x_665_, sizeof(void*)*7 + 3, v___x_653_);
v___x_666_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_666_, 0, v___x_588_);
lean_ctor_set(v___x_666_, 1, v___x_588_);
lean_ctor_set(v___x_666_, 2, v___x_588_);
lean_ctor_set(v___x_666_, 3, v___x_588_);
lean_ctor_set(v___x_666_, 4, v___x_656_);
lean_ctor_set(v___x_666_, 5, v___x_656_);
lean_ctor_set(v___x_666_, 6, v___x_656_);
lean_ctor_set(v___x_666_, 7, v___x_656_);
lean_ctor_set(v___x_666_, 8, v___x_656_);
lean_ctor_set(v___x_666_, 9, v___x_656_);
lean_ctor_set(v___x_666_, 10, v___x_656_);
v___x_667_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__10_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_668_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__11_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_669_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_669_, 0, v___x_666_);
lean_ctor_set(v___x_669_, 1, v___x_667_);
lean_ctor_set(v___x_669_, 2, v___x_655_);
lean_ctor_set(v___x_669_, 3, v___x_661_);
lean_ctor_set(v___x_669_, 4, v___x_668_);
v___x_670_ = lean_st_mk_ref(v___x_669_);
lean_inc_ref(v___x_647_);
v___x_671_ = l_Lean_Meta_isExprDefEq(v___x_647_, v___x_651_, v___x_665_, v___x_670_, v___y_643_, v___y_644_);
lean_dec_ref_known(v___x_665_, 7);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v_a_672_; lean_object* v___x_673_; uint8_t v___x_674_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_672_);
lean_dec_ref_known(v___x_671_, 1);
v___x_673_ = lean_st_ref_get(v___x_670_);
lean_dec(v___x_670_);
lean_dec(v___x_673_);
v___x_674_ = lean_unbox(v_a_672_);
lean_dec(v_a_672_);
v___y_623_ = v___x_647_;
v___y_624_ = v___x_652_;
v___y_625_ = v___y_644_;
v___y_626_ = v___x_649_;
v___y_627_ = v___y_643_;
v_a_628_ = v___x_674_;
goto v___jp_622_;
}
else
{
lean_dec(v___x_670_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v_a_675_; uint8_t v___x_676_; 
v_a_675_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_675_);
lean_dec_ref_known(v___x_671_, 1);
v___x_676_ = lean_unbox(v_a_675_);
lean_dec(v_a_675_);
v___y_623_ = v___x_647_;
v___y_624_ = v___x_652_;
v___y_625_ = v___y_644_;
v___y_626_ = v___x_649_;
v___y_627_ = v___y_643_;
v_a_628_ = v___x_676_;
goto v___jp_622_;
}
else
{
lean_object* v_a_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_684_; 
lean_dec(v___x_649_);
lean_dec_ref(v___x_647_);
lean_dec(v_decl_589_);
lean_dec(v___x_584_);
v_a_677_ = lean_ctor_get(v___x_671_, 0);
v_isSharedCheck_684_ = !lean_is_exclusive(v___x_671_);
if (v_isSharedCheck_684_ == 0)
{
v___x_679_ = v___x_671_;
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_a_677_);
lean_dec(v___x_671_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_684_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_682_; 
if (v_isShared_680_ == 0)
{
v___x_682_ = v___x_679_;
goto v_reusejp_681_;
}
else
{
lean_object* v_reuseFailAlloc_683_; 
v_reuseFailAlloc_683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_683_, 0, v_a_677_);
v___x_682_ = v_reuseFailAlloc_683_;
goto v_reusejp_681_;
}
v_reusejp_681_:
{
return v___x_682_;
}
}
}
}
}
else
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_692_; 
lean_dec(v_decl_589_);
lean_dec(v___x_588_);
lean_dec_ref(v___x_587_);
lean_dec_ref(v___x_586_);
lean_dec_ref(v___x_585_);
lean_dec(v___x_584_);
v_a_685_ = lean_ctor_get(v___x_645_, 0);
v_isSharedCheck_692_ = !lean_is_exclusive(v___x_645_);
if (v_isSharedCheck_692_ == 0)
{
v___x_687_ = v___x_645_;
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___x_645_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_692_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
lean_object* v___x_690_; 
if (v_isShared_688_ == 0)
{
v___x_690_ = v___x_687_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_691_; 
v_reuseFailAlloc_691_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_691_, 0, v_a_685_);
v___x_690_ = v_reuseFailAlloc_691_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
return v___x_690_;
}
}
}
}
v___jp_693_:
{
lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
lean_inc_ref(v___y_697_);
v___x_698_ = l_Lean_stringToMessageData(v___y_697_);
v___x_699_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_699_, 0, v___y_694_);
lean_ctor_set(v___x_699_, 1, v___x_698_);
v___x_700_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v___x_699_, v___y_695_, v___y_696_);
return v___x_700_;
}
v___jp_701_:
{
lean_object* v___x_707_; lean_object* v___x_708_; 
lean_inc_ref(v___y_706_);
v___x_707_ = l_Lean_stringToMessageData(v___y_706_);
v___x_708_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_708_, 0, v___y_704_);
lean_ctor_set(v___x_708_, 1, v___x_707_);
if (v___y_705_ == 0)
{
lean_object* v___x_709_; 
v___x_709_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___y_694_ = v___x_708_;
v___y_695_ = v___y_702_;
v___y_696_ = v___y_703_;
v___y_697_ = v___x_709_;
goto v___jp_693_;
}
else
{
lean_object* v___x_710_; 
v___x_710_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__13_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___y_694_ = v___x_708_;
v___y_695_ = v___y_702_;
v___y_696_ = v___y_703_;
v___y_697_ = v___x_710_;
goto v___jp_693_;
}
}
v___jp_711_:
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_717_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__15_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_718_ = l_Lean_MessageData_ofConstName(v_decl_589_, v___y_716_);
v___x_719_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_719_, 0, v___x_717_);
lean_ctor_set(v___x_719_, 1, v___x_718_);
v___x_720_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__17_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_721_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_719_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
if (v___y_714_ == 0)
{
lean_object* v___x_722_; 
v___x_722_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__12_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___y_702_ = v___y_712_;
v___y_703_ = v___y_713_;
v___y_704_ = v___x_721_;
v___y_705_ = v___y_715_;
v___y_706_ = v___x_722_;
goto v___jp_701_;
}
else
{
lean_object* v___x_723_; 
v___x_723_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0___closed__18_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___y_702_ = v___y_712_;
v___y_703_ = v___y_713_;
v___y_704_ = v___x_721_;
v___y_705_ = v___y_715_;
v___y_706_ = v___x_723_;
goto v___jp_701_;
}
}
v___jp_724_:
{
lean_object* v___x_725_; lean_object* v_env_726_; uint8_t v___x_727_; 
v___x_725_ = lean_st_ref_get(v___y_593_);
v_env_726_ = lean_ctor_get(v___x_725_, 0);
lean_inc_ref(v_env_726_);
lean_dec(v___x_725_);
v___x_727_ = l_Lean_isPrivateName(v_decl_589_);
if (v___x_727_ == 0)
{
uint8_t v___x_728_; 
lean_inc(v_decl_589_);
v___x_728_ = l_Lean_isMarkedMeta(v_env_726_, v_decl_589_);
if (v___x_728_ == 0)
{
uint8_t v___x_729_; 
lean_dec(v___x_588_);
lean_dec_ref(v___x_587_);
lean_dec_ref(v___x_586_);
lean_dec_ref(v___x_585_);
lean_dec(v___x_584_);
v___x_729_ = 1;
v___y_712_ = v___y_592_;
v___y_713_ = v___y_593_;
v___y_714_ = v___x_729_;
v___y_715_ = v___x_728_;
v___y_716_ = v___x_728_;
goto v___jp_711_;
}
else
{
v___y_643_ = v___y_592_;
v___y_644_ = v___y_593_;
goto v___jp_642_;
}
}
else
{
uint8_t v___x_730_; uint8_t v___x_731_; 
lean_dec(v___x_588_);
lean_dec_ref(v___x_587_);
lean_dec_ref(v___x_586_);
lean_dec_ref(v___x_585_);
lean_dec(v___x_584_);
v___x_730_ = 0;
lean_inc(v_decl_589_);
v___x_731_ = l_Lean_isMarkedMeta(v_env_726_, v_decl_589_);
v___y_712_ = v___y_592_;
v___y_713_ = v___y_593_;
v___y_714_ = v___x_730_;
v___y_715_ = v___x_731_;
v___y_716_ = v___x_730_;
goto v___jp_711_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed(lean_object* v___x_736_, lean_object* v___x_737_, lean_object* v___x_738_, lean_object* v___x_739_, lean_object* v___x_740_, lean_object* v_decl_741_, lean_object* v___stx_742_, lean_object* v_kind_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_){
_start:
{
uint8_t v_kind_boxed_747_; lean_object* v_res_748_; 
v_kind_boxed_747_ = lean_unbox(v_kind_743_);
v_res_748_ = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(v___x_736_, v___x_737_, v___x_738_, v___x_739_, v___x_740_, v_decl_741_, v___stx_742_, v_kind_boxed_747_, v___y_744_, v___y_745_);
lean_dec(v___y_745_);
lean_dec_ref(v___y_744_);
lean_dec(v___stx_742_);
return v_res_748_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_750_; lean_object* v___x_751_; 
v___x_750_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__0_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_751_ = l_Lean_stringToMessageData(v___x_750_);
return v___x_751_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_753_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__2_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_754_ = l_Lean_stringToMessageData(v___x_753_);
return v___x_754_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(lean_object* v___x_755_, lean_object* v_decl_756_, lean_object* v___y_757_, lean_object* v___y_758_){
_start:
{
lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_760_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_761_ = l_Lean_MessageData_ofName(v___x_755_);
v___x_762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_762_, 0, v___x_760_);
lean_ctor_set(v___x_762_, 1, v___x_761_);
v___x_763_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1___closed__3_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_764_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_764_, 0, v___x_762_);
lean_ctor_set(v___x_764_, 1, v___x_763_);
v___x_765_ = l_Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1___redArg(v___x_764_, v___y_757_, v___y_758_);
return v___x_765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed(lean_object* v___x_766_, lean_object* v_decl_767_, lean_object* v___y_768_, lean_object* v___y_769_, lean_object* v___y_770_){
_start:
{
lean_object* v_res_771_; 
v_res_771_ = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___lam__1_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(v___x_766_, v_decl_767_, v___y_768_, v___y_769_);
lean_dec(v___y_769_);
lean_dec_ref(v___y_768_);
lean_dec(v_decl_767_);
return v_res_771_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; 
v___x_827_ = lean_unsigned_to_nat(3402679419u);
v___x_828_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__19_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_829_ = l_Lean_Name_num___override(v___x_828_, v___x_827_);
return v___x_829_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__22_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_831_; lean_object* v___x_832_; lean_object* v___x_833_; 
v___x_831_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__21_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_832_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__20_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_833_ = l_Lean_Name_str___override(v___x_832_, v___x_831_);
return v___x_833_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__24_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_835_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__23_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_836_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__22_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__22_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__22_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_837_ = l_Lean_Name_str___override(v___x_836_, v___x_835_);
return v___x_837_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__25_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_838_ = lean_unsigned_to_nat(2u);
v___x_839_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__24_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__24_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__24_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_840_ = l_Lean_Name_num___override(v___x_839_, v___x_838_);
return v___x_840_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__30_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
uint8_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_850_; lean_object* v___x_851_; 
v___x_847_ = 0;
v___x_848_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__29_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_849_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__27_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_850_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__25_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__25_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__25_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_851_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_851_, 0, v___x_850_);
lean_ctor_set(v___x_851_, 1, v___x_849_);
lean_ctor_set(v___x_851_, 2, v___x_848_);
lean_ctor_set_uint8(v___x_851_, sizeof(void*)*3, v___x_847_);
return v___x_851_;
}
}
static lean_object* _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__31_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___f_852_; lean_object* v___f_853_; lean_object* v___x_854_; lean_object* v___x_855_; 
v___f_852_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__28_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___f_853_ = ((lean_object*)(l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__7_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_));
v___x_854_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__30_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__30_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__30_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_855_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_855_, 0, v___x_854_);
lean_ctor_set(v___x_855_, 1, v___f_853_);
lean_ctor_set(v___x_855_, 2, v___f_852_);
return v___x_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_857_; lean_object* v___x_858_; 
v___x_857_ = lean_obj_once(&l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__31_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_, &l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__31_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__once, _init_l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn___closed__31_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_);
v___x_858_ = l_Lean_registerBuiltinAttribute(v___x_857_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2____boxed(lean_object* v___y_859_){
_start:
{
lean_object* v_res_860_; 
v_res_860_ = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_();
return v_res_860_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0(lean_object* v_00_u03b1_861_, lean_object* v_constName_862_, lean_object* v___y_863_, lean_object* v___y_864_){
_start:
{
lean_object* v___x_866_; 
v___x_866_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___redArg(v_constName_862_, v___y_863_, v___y_864_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0___boxed(lean_object* v_00_u03b1_867_, lean_object* v_constName_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_){
_start:
{
lean_object* v_res_872_; 
v_res_872_ = l_Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0(v_00_u03b1_867_, v_constName_868_, v___y_869_, v___y_870_);
lean_dec(v___y_870_);
lean_dec_ref(v___y_869_);
return v_res_872_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1(lean_object* v_00_u03b1_873_, lean_object* v_ref_874_, lean_object* v_constName_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___redArg(v_ref_874_, v_constName_875_, v___y_876_, v___y_877_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_880_, lean_object* v_ref_881_, lean_object* v_constName_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_){
_start:
{
lean_object* v_res_886_; 
v_res_886_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1(v_00_u03b1_880_, v_ref_881_, v_constName_882_, v___y_883_, v___y_884_);
lean_dec(v___y_884_);
lean_dec_ref(v___y_883_);
lean_dec(v_ref_881_);
return v_res_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_887_, lean_object* v_ref_888_, lean_object* v_msg_889_, lean_object* v_declHint_890_, lean_object* v___y_891_, lean_object* v___y_892_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___redArg(v_ref_888_, v_msg_889_, v_declHint_890_, v___y_891_, v___y_892_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_895_, lean_object* v_ref_896_, lean_object* v_msg_897_, lean_object* v_declHint_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v_res_902_; 
v_res_902_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2(v_00_u03b1_895_, v_ref_896_, v_msg_897_, v_declHint_898_, v___y_899_, v___y_900_);
lean_dec(v___y_900_);
lean_dec_ref(v___y_899_);
lean_dec(v_ref_896_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(lean_object* v_msg_903_, lean_object* v_declHint_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v___x_908_; 
v___x_908_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___redArg(v_msg_903_, v_declHint_904_, v___y_906_);
return v___x_908_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_909_, lean_object* v_declHint_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_){
_start:
{
lean_object* v_res_914_; 
v_res_914_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__3_spec__4(v_msg_909_, v_declHint_910_, v___y_911_, v___y_912_);
lean_dec(v___y_912_);
lean_dec_ref(v___y_911_);
return v_res_914_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b1_915_, lean_object* v_ref_916_, lean_object* v_msg_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v___x_921_; 
v___x_921_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___redArg(v_ref_916_, v_msg_917_, v___y_918_, v___y_919_);
return v___x_921_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4___boxed(lean_object* v_00_u03b1_922_, lean_object* v_ref_923_, lean_object* v_msg_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstInfo___at___00__private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2__spec__0_spec__0_spec__1_spec__2_spec__4(v_00_u03b1_922_, v_ref_923_, v_msg_924_, v___y_925_, v___y_926_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v_ref_923_);
return v_res_928_;
}
}
LEAN_EXPORT uint8_t l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(lean_object* v_x1_929_, lean_object* v_x2_930_){
_start:
{
lean_object* v_declName_931_; lean_object* v_declName_932_; uint8_t v___x_933_; 
v_declName_931_ = lean_ctor_get(v_x1_929_, 1);
v_declName_932_ = lean_ctor_get(v_x2_930_, 1);
v___x_933_ = l_Lean_Name_lt(v_declName_931_, v_declName_932_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0___boxed(lean_object* v_x1_934_, lean_object* v_x2_935_){
_start:
{
uint8_t v_res_936_; lean_object* v_r_937_; 
v_res_936_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(v_x1_934_, v_x2_935_);
lean_dec_ref(v_x2_935_);
lean_dec_ref(v_x1_934_);
v_r_937_ = lean_box(v_res_936_);
return v_r_937_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___redArg(lean_object* v_a_938_, lean_object* v_as_939_, lean_object* v_k_940_, lean_object* v_x_941_, lean_object* v_x_942_){
_start:
{
lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v_mid_945_; lean_object* v_midVal_946_; uint8_t v___x_947_; 
v___x_943_ = lean_nat_add(v_x_941_, v_x_942_);
v___x_944_ = lean_unsigned_to_nat(1u);
v_mid_945_ = lean_nat_shiftr(v___x_943_, v___x_944_);
lean_dec(v___x_943_);
v_midVal_946_ = lean_array_fget_borrowed(v_as_939_, v_mid_945_);
v___x_947_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(v_midVal_946_, v_k_940_);
if (v___x_947_ == 0)
{
uint8_t v___x_948_; 
lean_dec(v_x_942_);
v___x_948_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(v_k_940_, v_midVal_946_);
if (v___x_948_ == 0)
{
lean_object* v___x_949_; uint8_t v___x_950_; 
lean_dec(v_x_941_);
v___x_949_ = lean_array_get_size(v_as_939_);
v___x_950_ = lean_nat_dec_lt(v_mid_945_, v___x_949_);
if (v___x_950_ == 0)
{
lean_dec(v_mid_945_);
lean_dec_ref(v_a_938_);
return v_as_939_;
}
else
{
lean_object* v___x_951_; lean_object* v_xs_x27_952_; lean_object* v___x_953_; 
v___x_951_ = lean_box(0);
v_xs_x27_952_ = lean_array_fset(v_as_939_, v_mid_945_, v___x_951_);
v___x_953_ = lean_array_fset(v_xs_x27_952_, v_mid_945_, v_a_938_);
lean_dec(v_mid_945_);
return v___x_953_;
}
}
else
{
v_x_942_ = v_mid_945_;
goto _start;
}
}
else
{
uint8_t v___x_955_; 
v___x_955_ = lean_nat_dec_eq(v_mid_945_, v_x_941_);
if (v___x_955_ == 0)
{
lean_dec(v_x_941_);
v_x_941_ = v_mid_945_;
goto _start;
}
else
{
lean_object* v___x_957_; lean_object* v_j_958_; lean_object* v_as_959_; lean_object* v___x_960_; 
lean_dec(v_mid_945_);
lean_dec(v_x_942_);
v___x_957_ = lean_nat_add(v_x_941_, v___x_944_);
lean_dec(v_x_941_);
v_j_958_ = lean_array_get_size(v_as_939_);
v_as_959_ = lean_array_push(v_as_939_, v_a_938_);
v___x_960_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_957_, v_as_959_, v_j_958_);
lean_dec(v___x_957_);
return v___x_960_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___redArg___boxed(lean_object* v_a_961_, lean_object* v_as_962_, lean_object* v_k_963_, lean_object* v_x_964_, lean_object* v_x_965_){
_start:
{
lean_object* v_res_966_; 
v_res_966_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___redArg(v_a_961_, v_as_962_, v_k_963_, v_x_964_, v_x_965_);
lean_dec_ref(v_k_963_);
return v_res_966_;
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0(lean_object* v_a_967_, lean_object* v_as_968_, lean_object* v_k_969_){
_start:
{
lean_object* v___x_970_; lean_object* v___x_971_; uint8_t v___x_972_; 
v___x_970_ = lean_array_get_size(v_as_968_);
v___x_971_ = lean_unsigned_to_nat(0u);
v___x_972_ = lean_nat_dec_eq(v___x_970_, v___x_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_973_; uint8_t v___x_974_; 
v___x_973_ = lean_array_fget_borrowed(v_as_968_, v___x_971_);
v___x_974_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(v_k_969_, v___x_973_);
if (v___x_974_ == 0)
{
uint8_t v___x_975_; 
v___x_975_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(v___x_973_, v_k_969_);
if (v___x_975_ == 0)
{
uint8_t v___x_976_; 
v___x_976_ = lean_nat_dec_lt(v___x_971_, v___x_970_);
if (v___x_976_ == 0)
{
lean_dec_ref(v_a_967_);
return v_as_968_;
}
else
{
lean_object* v___x_977_; lean_object* v_xs_x27_978_; lean_object* v___x_979_; 
v___x_977_ = lean_box(0);
v_xs_x27_978_ = lean_array_fset(v_as_968_, v___x_971_, v___x_977_);
v___x_979_ = lean_array_fset(v_xs_x27_978_, v___x_971_, v_a_967_);
return v___x_979_;
}
}
else
{
lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; uint8_t v___x_983_; 
v___x_980_ = lean_unsigned_to_nat(1u);
v___x_981_ = lean_nat_sub(v___x_970_, v___x_980_);
v___x_982_ = lean_array_fget_borrowed(v_as_968_, v___x_981_);
v___x_983_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(v___x_982_, v_k_969_);
if (v___x_983_ == 0)
{
uint8_t v___x_984_; 
v___x_984_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___lam__0(v_k_969_, v___x_982_);
if (v___x_984_ == 0)
{
uint8_t v___x_985_; 
v___x_985_ = lean_nat_dec_lt(v___x_981_, v___x_970_);
if (v___x_985_ == 0)
{
lean_dec(v___x_981_);
lean_dec_ref(v_a_967_);
return v_as_968_;
}
else
{
lean_object* v___x_986_; lean_object* v_xs_x27_987_; lean_object* v___x_988_; 
v___x_986_ = lean_box(0);
v_xs_x27_987_ = lean_array_fset(v_as_968_, v___x_981_, v___x_986_);
v___x_988_ = lean_array_fset(v_xs_x27_987_, v___x_981_, v_a_967_);
lean_dec(v___x_981_);
return v___x_988_;
}
}
else
{
lean_object* v___x_989_; 
v___x_989_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___redArg(v_a_967_, v_as_968_, v_k_969_, v___x_971_, v___x_981_);
return v___x_989_;
}
}
else
{
lean_object* v___x_990_; 
lean_dec(v___x_981_);
v___x_990_ = lean_array_push(v_as_968_, v_a_967_);
return v___x_990_;
}
}
}
else
{
lean_object* v_as_991_; lean_object* v___x_992_; 
v_as_991_ = lean_array_push(v_as_968_, v_a_967_);
v___x_992_ = l___private_Init_Data_Array_Basic_0__Array_insertIdx_loop(lean_box(0), v___x_971_, v_as_991_, v___x_970_);
return v___x_992_;
}
}
else
{
lean_object* v___x_993_; 
v___x_993_ = lean_array_push(v_as_968_, v_a_967_);
return v___x_993_;
}
}
}
LEAN_EXPORT lean_object* l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0___boxed(lean_object* v_a_994_, lean_object* v_as_995_, lean_object* v_k_996_){
_start:
{
lean_object* v_res_997_; 
v_res_997_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0(v_a_994_, v_as_995_, v_k_996_);
lean_dec_ref(v_k_996_);
return v_res_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__1(lean_object* v_as_998_, size_t v_sz_999_, size_t v_i_1000_, lean_object* v_b_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
uint8_t v___x_1005_; 
v___x_1005_ = lean_usize_dec_lt(v_i_1000_, v_sz_999_);
if (v___x_1005_ == 0)
{
lean_object* v___x_1006_; 
v___x_1006_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1006_, 0, v_b_1001_);
return v___x_1006_;
}
else
{
lean_object* v_a_1007_; lean_object* v___x_1008_; 
v_a_1007_ = lean_array_uget_borrowed(v_as_998_, v_i_1000_);
lean_inc(v_a_1007_);
v___x_1008_ = l_Lean_Linter_CodeQuality_getPackageCheck(v_a_1007_, v___y_1002_, v___y_1003_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1010_; size_t v___x_1011_; size_t v___x_1012_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc_n(v_a_1009_, 2);
lean_dec_ref_known(v___x_1008_, 1);
v___x_1010_ = l_Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0(v_a_1009_, v_b_1001_, v_a_1009_);
lean_dec(v_a_1009_);
v___x_1011_ = ((size_t)1ULL);
v___x_1012_ = lean_usize_add(v_i_1000_, v___x_1011_);
v_i_1000_ = v___x_1012_;
v_b_1001_ = v___x_1010_;
goto _start;
}
else
{
lean_object* v_a_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1021_; 
lean_dec_ref(v_b_1001_);
v_a_1014_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1021_ == 0)
{
v___x_1016_ = v___x_1008_;
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_a_1014_);
lean_dec(v___x_1008_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1021_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v___x_1019_; 
if (v_isShared_1017_ == 0)
{
v___x_1019_ = v___x_1016_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v_a_1014_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__1___boxed(lean_object* v_as_1022_, lean_object* v_sz_1023_, lean_object* v_i_1024_, lean_object* v_b_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_){
_start:
{
size_t v_sz_boxed_1029_; size_t v_i_boxed_1030_; lean_object* v_res_1031_; 
v_sz_boxed_1029_ = lean_unbox_usize(v_sz_1023_);
lean_dec(v_sz_1023_);
v_i_boxed_1030_ = lean_unbox_usize(v_i_1024_);
lean_dec(v_i_1024_);
v_res_1031_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__1(v_as_1022_, v_sz_boxed_1029_, v_i_boxed_1030_, v_b_1025_, v___y_1026_, v___y_1027_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v_as_1022_);
return v_res_1031_;
}
}
static lean_object* _init_l_Lean_Linter_CodeQuality_getPackageChecks___closed__0(void){
_start:
{
lean_object* v___x_1032_; 
v___x_1032_ = l_Array_instInhabited___redArg();
return v___x_1032_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageChecks(lean_object* v___y_1035_, lean_object* v___y_1036_){
_start:
{
lean_object* v___x_1038_; lean_object* v_result_1039_; lean_object* v___x_1040_; lean_object* v_env_1041_; lean_object* v___x_1042_; lean_object* v_toEnvExtension_1043_; lean_object* v_asyncMode_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; size_t v_sz_1047_; size_t v___x_1048_; lean_object* v___x_1049_; 
v___x_1038_ = lean_obj_once(&l_Lean_Linter_CodeQuality_getPackageChecks___closed__0, &l_Lean_Linter_CodeQuality_getPackageChecks___closed__0_once, _init_l_Lean_Linter_CodeQuality_getPackageChecks___closed__0);
v_result_1039_ = ((lean_object*)(l_Lean_Linter_CodeQuality_getPackageChecks___closed__1));
v___x_1040_ = lean_st_ref_get(v___y_1036_);
v_env_1041_ = lean_ctor_get(v___x_1040_, 0);
lean_inc_ref(v_env_1041_);
lean_dec(v___x_1040_);
v___x_1042_ = l_Lean_Linter_CodeQuality_packageCheckExt;
v_toEnvExtension_1043_ = lean_ctor_get(v___x_1042_, 0);
v_asyncMode_1044_ = lean_ctor_get(v_toEnvExtension_1043_, 2);
v___x_1045_ = lean_box(0);
v___x_1046_ = l_Lean_SimplePersistentEnvExtension_getState___redArg(v___x_1038_, v___x_1042_, v_env_1041_, v_asyncMode_1044_, v___x_1045_);
v_sz_1047_ = lean_array_size(v___x_1046_);
v___x_1048_ = ((size_t)0ULL);
v___x_1049_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__1(v___x_1046_, v_sz_1047_, v___x_1048_, v_result_1039_, v___y_1035_, v___y_1036_);
lean_dec(v___x_1046_);
return v___x_1049_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_getPackageChecks___boxed(lean_object* v___y_1050_, lean_object* v___y_1051_, lean_object* v___y_1052_){
_start:
{
lean_object* v_res_1053_; 
v_res_1053_ = l_Lean_Linter_CodeQuality_getPackageChecks(v___y_1050_, v___y_1051_);
lean_dec(v___y_1051_);
lean_dec_ref(v___y_1050_);
return v_res_1053_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0(lean_object* v_a_1054_, lean_object* v_as_1055_, lean_object* v_k_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_, lean_object* v_x_1059_, lean_object* v_x_1060_){
_start:
{
lean_object* v___x_1061_; 
v___x_1061_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___redArg(v_a_1054_, v_as_1055_, v_k_1056_, v_x_1057_, v_x_1058_);
return v___x_1061_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0___boxed(lean_object* v_a_1062_, lean_object* v_as_1063_, lean_object* v_k_1064_, lean_object* v_x_1065_, lean_object* v_x_1066_, lean_object* v_x_1067_, lean_object* v_x_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l___private_Init_Data_Array_BinSearch_0__Array_binInsertAux___at___00Array_binInsertM___at___00Lean_Linter_CodeQuality_getPackageChecks_spec__0_spec__0(v_a_1062_, v_as_1063_, v_k_1064_, v_x_1065_, v_x_1066_, v_x_1067_, v_x_1068_);
lean_dec_ref(v_k_1064_);
return v_res_1069_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__0(void){
_start:
{
lean_object* v___x_1070_; lean_object* v___x_1071_; 
v___x_1070_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_1071_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1070_);
lean_ctor_set(v___x_1071_, 1, v___x_1070_);
lean_ctor_set(v___x_1071_, 2, v___x_1070_);
lean_ctor_set(v___x_1071_, 3, v___x_1070_);
lean_ctor_set(v___x_1071_, 4, v___x_1070_);
lean_ctor_set(v___x_1071_, 5, v___x_1070_);
return v___x_1071_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v___x_1072_ = lean_unsigned_to_nat(32u);
v___x_1073_ = lean_mk_empty_array_with_capacity(v___x_1072_);
v___x_1074_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1073_);
return v___x_1074_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__2(void){
_start:
{
size_t v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; 
v___x_1075_ = ((size_t)5ULL);
v___x_1076_ = lean_unsigned_to_nat(0u);
v___x_1077_ = lean_unsigned_to_nat(32u);
v___x_1078_ = lean_mk_empty_array_with_capacity(v___x_1077_);
v___x_1079_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__1, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__1);
v___x_1080_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1080_, 0, v___x_1079_);
lean_ctor_set(v___x_1080_, 1, v___x_1078_);
lean_ctor_set(v___x_1080_, 2, v___x_1076_);
lean_ctor_set(v___x_1080_, 3, v___x_1076_);
lean_ctor_set_usize(v___x_1080_, 4, v___x_1075_);
return v___x_1080_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1081_; lean_object* v___x_1082_; 
v___x_1081_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__1);
v___x_1082_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1081_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
lean_ctor_set(v___x_1082_, 2, v___x_1081_);
lean_ctor_set(v___x_1082_, 3, v___x_1081_);
lean_ctor_set(v___x_1082_, 4, v___x_1081_);
return v___x_1082_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__4(void){
_start:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1083_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__3);
v___x_1084_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__2);
v___x_1085_ = lean_box(1);
v___x_1086_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__0, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__0);
v___x_1087_ = lean_obj_once(&l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2, &l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2_once, _init_l_Lean_addMessageContextPartial___at___00Lean_throwError___at___00Lean_ofExcept___at___00Lean_evalConstCheck___at___00Lean_Linter_CodeQuality_getPackageCheck_spec__0_spec__0_spec__1_spec__3___closed__2);
v___x_1088_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1088_, 0, v___x_1087_);
lean_ctor_set(v___x_1088_, 1, v___x_1086_);
lean_ctor_set(v___x_1088_, 2, v___x_1085_);
lean_ctor_set(v___x_1088_, 3, v___x_1084_);
lean_ctor_set(v___x_1088_, 4, v___x_1083_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0(lean_object* v_v_1089_, lean_object* v_ctx_1090_, lean_object* v_x_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_){
_start:
{
lean_object* v_toPackageCheck_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_toPackageCheck_1095_ = lean_ctor_get(v_v_1089_, 0);
lean_inc_ref(v_toPackageCheck_1095_);
lean_dec(v_v_1089_);
v___x_1096_ = l_Lean_Elab_Command_mkMetaContext;
v___x_1097_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__4, &l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__4_once, _init_l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___closed__4);
v___x_1098_ = lean_st_mk_ref(v___x_1097_);
lean_inc(v___y_1093_);
lean_inc_ref(v___y_1092_);
lean_inc(v___x_1098_);
v___x_1099_ = lean_apply_6(v_toPackageCheck_1095_, v_ctx_1090_, v___x_1096_, v___x_1098_, v___y_1092_, v___y_1093_, lean_box(0));
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1108_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1108_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1108_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1108_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1104_ = lean_st_ref_get(v___x_1098_);
lean_dec(v___x_1098_);
lean_dec(v___x_1104_);
if (v_isShared_1103_ == 0)
{
v___x_1106_ = v___x_1102_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1107_; 
v_reuseFailAlloc_1107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1107_, 0, v_a_1100_);
v___x_1106_ = v_reuseFailAlloc_1107_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
return v___x_1106_;
}
}
}
else
{
lean_dec(v___x_1098_);
return v___x_1099_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___boxed(lean_object* v_v_1109_, lean_object* v_ctx_1110_, lean_object* v_x_1111_, lean_object* v___y_1112_, lean_object* v___y_1113_, lean_object* v___y_1114_){
_start:
{
lean_object* v_res_1115_; 
v_res_1115_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0(v_v_1109_, v_ctx_1110_, v_x_1111_, v___y_1112_, v___y_1113_);
lean_dec(v___y_1113_);
lean_dec_ref(v___y_1112_);
return v_res_1115_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__1(lean_object* v_a_1116_, lean_object* v___x_1117_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_apply_2(v_a_1116_, v___x_1117_, lean_box(0));
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
v_a_1120_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1119_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1119_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
lean_ctor_set_tag(v___x_1122_, 1);
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
v_a_1128_ = lean_ctor_get(v___x_1119_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1119_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1119_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1119_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
lean_ctor_set_tag(v___x_1130_, 0);
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__1___boxed(lean_object* v_a_1136_, lean_object* v___x_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__1(v_a_1136_, v___x_1137_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0(lean_object* v_ctx_1140_, size_t v_sz_1141_, size_t v_i_1142_, lean_object* v_bs_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_){
_start:
{
uint8_t v___x_1147_; 
v___x_1147_ = lean_usize_dec_lt(v_i_1142_, v_sz_1141_);
if (v___x_1147_ == 0)
{
lean_object* v___x_1148_; 
lean_dec_ref(v_ctx_1140_);
v___x_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1148_, 0, v_bs_1143_);
return v___x_1148_;
}
else
{
lean_object* v_v_1149_; lean_object* v___f_1150_; lean_object* v___x_1151_; lean_object* v_bs_x27_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_v_1149_ = lean_array_uget(v_bs_1143_, v_i_1142_);
lean_inc_ref(v_ctx_1140_);
lean_inc(v_v_1149_);
v___f_1150_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__0___boxed), 6, 2);
lean_closure_set(v___f_1150_, 0, v_v_1149_);
lean_closure_set(v___f_1150_, 1, v_ctx_1140_);
v___x_1151_ = lean_unsigned_to_nat(0u);
v_bs_x27_1152_ = lean_array_uset(v_bs_1143_, v_i_1142_, v___x_1151_);
v___x_1153_ = lean_box(0);
v___x_1154_ = l_Lean_Core_wrapAsync___redArg(v___f_1150_, v___x_1153_, v___y_1144_, v___y_1145_);
if (lean_obj_tag(v___x_1154_) == 0)
{
lean_object* v_a_1155_; lean_object* v___x_1156_; lean_object* v___f_1157_; lean_object* v___x_1158_; lean_object* v_declName_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1170_; 
v_a_1155_ = lean_ctor_get(v___x_1154_, 0);
lean_inc(v_a_1155_);
lean_dec_ref_known(v___x_1154_, 1);
v___x_1156_ = lean_box(0);
v___f_1157_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___lam__1___boxed), 3, 2);
lean_closure_set(v___f_1157_, 0, v_a_1155_);
lean_closure_set(v___f_1157_, 1, v___x_1156_);
v___x_1158_ = lean_io_as_task(v___f_1157_, v___x_1151_);
v_declName_1159_ = lean_ctor_get(v_v_1149_, 1);
v_isSharedCheck_1170_ = !lean_is_exclusive(v_v_1149_);
if (v_isSharedCheck_1170_ == 0)
{
lean_object* v_unused_1171_; 
v_unused_1171_ = lean_ctor_get(v_v_1149_, 0);
lean_dec(v_unused_1171_);
v___x_1161_ = v_v_1149_;
v_isShared_1162_ = v_isSharedCheck_1170_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_declName_1159_);
lean_dec(v_v_1149_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1170_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
lean_ctor_set(v___x_1161_, 1, v___x_1158_);
lean_ctor_set(v___x_1161_, 0, v_declName_1159_);
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1169_; 
v_reuseFailAlloc_1169_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1169_, 0, v_declName_1159_);
lean_ctor_set(v_reuseFailAlloc_1169_, 1, v___x_1158_);
v___x_1164_ = v_reuseFailAlloc_1169_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
size_t v___x_1165_; size_t v___x_1166_; lean_object* v___x_1167_; 
v___x_1165_ = ((size_t)1ULL);
v___x_1166_ = lean_usize_add(v_i_1142_, v___x_1165_);
v___x_1167_ = lean_array_uset(v_bs_x27_1152_, v_i_1142_, v___x_1164_);
v_i_1142_ = v___x_1166_;
v_bs_1143_ = v___x_1167_;
goto _start;
}
}
}
else
{
lean_object* v_a_1172_; lean_object* v___x_1174_; uint8_t v_isShared_1175_; uint8_t v_isSharedCheck_1179_; 
lean_dec_ref(v_bs_x27_1152_);
lean_dec(v_v_1149_);
lean_dec_ref(v_ctx_1140_);
v_a_1172_ = lean_ctor_get(v___x_1154_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1154_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1174_ = v___x_1154_;
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
else
{
lean_inc(v_a_1172_);
lean_dec(v___x_1154_);
v___x_1174_ = lean_box(0);
v_isShared_1175_ = v_isSharedCheck_1179_;
goto v_resetjp_1173_;
}
v_resetjp_1173_:
{
lean_object* v___x_1177_; 
if (v_isShared_1175_ == 0)
{
v___x_1177_ = v___x_1174_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1172_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0___boxed(lean_object* v_ctx_1180_, lean_object* v_sz_1181_, lean_object* v_i_1182_, lean_object* v_bs_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_){
_start:
{
size_t v_sz_boxed_1187_; size_t v_i_boxed_1188_; lean_object* v_res_1189_; 
v_sz_boxed_1187_ = lean_unbox_usize(v_sz_1181_);
lean_dec(v_sz_1181_);
v_i_boxed_1188_ = lean_unbox_usize(v_i_1182_);
lean_dec(v_i_1182_);
v_res_1189_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0(v_ctx_1180_, v_sz_boxed_1187_, v_i_boxed_1188_, v_bs_1183_, v___y_1184_, v___y_1185_);
lean_dec(v___y_1185_);
lean_dec_ref(v___y_1184_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg(lean_object* v_as_1191_, size_t v_sz_1192_, size_t v_i_1193_, lean_object* v_b_1194_){
_start:
{
lean_object* v_a_1197_; uint8_t v___x_1201_; 
v___x_1201_ = lean_usize_dec_lt(v_i_1193_, v_sz_1192_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; 
v___x_1202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1202_, 0, v_b_1194_);
return v___x_1202_;
}
else
{
lean_object* v_a_1203_; lean_object* v_fst_1204_; lean_object* v_snd_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1241_; 
v_a_1203_ = lean_array_uget(v_as_1191_, v_i_1193_);
v_fst_1204_ = lean_ctor_get(v_a_1203_, 0);
v_snd_1205_ = lean_ctor_get(v_a_1203_, 1);
v_isSharedCheck_1241_ = !lean_is_exclusive(v_a_1203_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1207_ = v_a_1203_;
v_isShared_1208_ = v_isSharedCheck_1241_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_snd_1205_);
lean_inc(v_fst_1204_);
lean_dec(v_a_1203_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1241_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v_fst_1209_; lean_object* v_snd_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1240_; 
v_fst_1209_ = lean_ctor_get(v_b_1194_, 0);
v_snd_1210_ = lean_ctor_get(v_b_1194_, 1);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_b_1194_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1212_ = v_b_1194_;
v_isShared_1213_ = v_isSharedCheck_1240_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_snd_1210_);
lean_inc(v_fst_1209_);
lean_dec(v_b_1194_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1240_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v___x_1214_; 
v___x_1214_ = lean_task_get_own(v_snd_1205_);
if (lean_obj_tag(v___x_1214_) == 0)
{
lean_object* v_a_1215_; lean_object* v___x_1217_; uint8_t v_isShared_1218_; uint8_t v_isSharedCheck_1234_; 
v_a_1215_ = lean_ctor_get(v___x_1214_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1214_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1217_ = v___x_1214_;
v_isShared_1218_ = v_isSharedCheck_1234_;
goto v_resetjp_1216_;
}
else
{
lean_inc(v_a_1215_);
lean_dec(v___x_1214_);
v___x_1217_ = lean_box(0);
v_isShared_1218_ = v_isSharedCheck_1234_;
goto v_resetjp_1216_;
}
v_resetjp_1216_:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1223_; 
v___x_1219_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_fst_1204_, v___x_1201_);
v___x_1220_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg___closed__0));
v___x_1221_ = lean_string_append(v___x_1219_, v___x_1220_);
if (v_isShared_1218_ == 0)
{
lean_ctor_set_tag(v___x_1217_, 3);
lean_ctor_set(v___x_1217_, 0, v___x_1221_);
v___x_1223_ = v___x_1217_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v___x_1221_);
v___x_1223_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1227_; 
v___x_1224_ = l_Lean_MessageData_ofFormat(v___x_1223_);
v___x_1225_ = l_Lean_Exception_toMessageData(v_a_1215_);
if (v_isShared_1208_ == 0)
{
lean_ctor_set_tag(v___x_1207_, 7);
lean_ctor_set(v___x_1207_, 1, v___x_1225_);
lean_ctor_set(v___x_1207_, 0, v___x_1224_);
v___x_1227_ = v___x_1207_;
goto v_reusejp_1226_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v___x_1224_);
lean_ctor_set(v_reuseFailAlloc_1232_, 1, v___x_1225_);
v___x_1227_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1226_;
}
v_reusejp_1226_:
{
lean_object* v___x_1228_; lean_object* v___x_1230_; 
v___x_1228_ = lean_array_push(v_snd_1210_, v___x_1227_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v___x_1228_);
v___x_1230_ = v___x_1212_;
goto v_reusejp_1229_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_fst_1209_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v___x_1228_);
v___x_1230_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1229_;
}
v_reusejp_1229_:
{
v_a_1197_ = v___x_1230_;
goto v___jp_1196_;
}
}
}
}
}
else
{
lean_object* v_a_1235_; lean_object* v___x_1236_; lean_object* v___x_1238_; 
lean_del_object(v___x_1207_);
lean_dec(v_fst_1204_);
v_a_1235_ = lean_ctor_get(v___x_1214_, 0);
lean_inc(v_a_1235_);
lean_dec_ref_known(v___x_1214_, 1);
v___x_1236_ = l_Array_append___redArg(v_fst_1209_, v_a_1235_);
lean_dec(v_a_1235_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 0, v___x_1236_);
v___x_1238_ = v___x_1212_;
goto v_reusejp_1237_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1236_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_snd_1210_);
v___x_1238_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1237_;
}
v_reusejp_1237_:
{
v_a_1197_ = v___x_1238_;
goto v___jp_1196_;
}
}
}
}
}
v___jp_1196_:
{
size_t v___x_1198_; size_t v___x_1199_; 
v___x_1198_ = ((size_t)1ULL);
v___x_1199_ = lean_usize_add(v_i_1193_, v___x_1198_);
v_i_1193_ = v___x_1199_;
v_b_1194_ = v_a_1197_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg___boxed(lean_object* v_as_1242_, lean_object* v_sz_1243_, lean_object* v_i_1244_, lean_object* v_b_1245_, lean_object* v___y_1246_){
_start:
{
size_t v_sz_boxed_1247_; size_t v_i_boxed_1248_; lean_object* v_res_1249_; 
v_sz_boxed_1247_ = lean_unbox_usize(v_sz_1243_);
lean_dec(v_sz_1243_);
v_i_boxed_1248_ = lean_unbox_usize(v_i_1244_);
lean_dec(v_i_1244_);
v_res_1249_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg(v_as_1242_, v_sz_boxed_1247_, v_i_boxed_1248_, v_b_1245_);
lean_dec_ref(v_as_1242_);
return v_res_1249_;
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_runPackageChecks(lean_object* v_checks_1254_, lean_object* v_ctx_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_){
_start:
{
size_t v_sz_1259_; size_t v___x_1260_; lean_object* v___x_1261_; 
v_sz_1259_ = lean_array_size(v_checks_1254_);
v___x_1260_ = ((size_t)0ULL);
v___x_1261_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__0(v_ctx_1255_, v_sz_1259_, v___x_1260_, v_checks_1254_, v___y_1256_, v___y_1257_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1263_; size_t v_sz_1264_; lean_object* v___x_1265_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1261_, 1);
v___x_1263_ = ((lean_object*)(l_Lean_Linter_CodeQuality_runPackageChecks___closed__1));
v_sz_1264_ = lean_array_size(v_a_1262_);
v___x_1265_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg(v_a_1262_, v_sz_1264_, v___x_1260_, v___x_1263_);
lean_dec(v_a_1262_);
if (lean_obj_tag(v___x_1265_) == 0)
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1282_; 
v_a_1266_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1282_ == 0)
{
v___x_1268_ = v___x_1265_;
v_isShared_1269_ = v_isSharedCheck_1282_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1265_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1282_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v_fst_1270_; lean_object* v_snd_1271_; lean_object* v___x_1273_; uint8_t v_isShared_1274_; uint8_t v_isSharedCheck_1281_; 
v_fst_1270_ = lean_ctor_get(v_a_1266_, 0);
v_snd_1271_ = lean_ctor_get(v_a_1266_, 1);
v_isSharedCheck_1281_ = !lean_is_exclusive(v_a_1266_);
if (v_isSharedCheck_1281_ == 0)
{
v___x_1273_ = v_a_1266_;
v_isShared_1274_ = v_isSharedCheck_1281_;
goto v_resetjp_1272_;
}
else
{
lean_inc(v_snd_1271_);
lean_inc(v_fst_1270_);
lean_dec(v_a_1266_);
v___x_1273_ = lean_box(0);
v_isShared_1274_ = v_isSharedCheck_1281_;
goto v_resetjp_1272_;
}
v_resetjp_1272_:
{
lean_object* v___x_1276_; 
if (v_isShared_1274_ == 0)
{
v___x_1276_ = v___x_1273_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1280_; 
v_reuseFailAlloc_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1280_, 0, v_fst_1270_);
lean_ctor_set(v_reuseFailAlloc_1280_, 1, v_snd_1271_);
v___x_1276_ = v_reuseFailAlloc_1280_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1278_; 
if (v_isShared_1269_ == 0)
{
lean_ctor_set(v___x_1268_, 0, v___x_1276_);
v___x_1278_ = v___x_1268_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
}
}
}
else
{
lean_object* v_a_1283_; lean_object* v___x_1285_; uint8_t v_isShared_1286_; uint8_t v_isSharedCheck_1290_; 
v_a_1283_ = lean_ctor_get(v___x_1265_, 0);
v_isSharedCheck_1290_ = !lean_is_exclusive(v___x_1265_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1285_ = v___x_1265_;
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
else
{
lean_inc(v_a_1283_);
lean_dec(v___x_1265_);
v___x_1285_ = lean_box(0);
v_isShared_1286_ = v_isSharedCheck_1290_;
goto v_resetjp_1284_;
}
v_resetjp_1284_:
{
lean_object* v___x_1288_; 
if (v_isShared_1286_ == 0)
{
v___x_1288_ = v___x_1285_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v_a_1283_);
v___x_1288_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
return v___x_1288_;
}
}
}
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
v_a_1291_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1261_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1261_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Linter_CodeQuality_runPackageChecks___boxed(lean_object* v_checks_1299_, lean_object* v_ctx_1300_, lean_object* v___y_1301_, lean_object* v___y_1302_, lean_object* v___y_1303_){
_start:
{
lean_object* v_res_1304_; 
v_res_1304_ = l_Lean_Linter_CodeQuality_runPackageChecks(v_checks_1299_, v_ctx_1300_, v___y_1301_, v___y_1302_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
return v_res_1304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1(lean_object* v_as_1305_, size_t v_sz_1306_, size_t v_i_1307_, lean_object* v_b_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_){
_start:
{
lean_object* v___x_1312_; 
v___x_1312_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___redArg(v_as_1305_, v_sz_1306_, v_i_1307_, v_b_1308_);
return v___x_1312_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1___boxed(lean_object* v_as_1313_, lean_object* v_sz_1314_, lean_object* v_i_1315_, lean_object* v_b_1316_, lean_object* v___y_1317_, lean_object* v___y_1318_, lean_object* v___y_1319_){
_start:
{
size_t v_sz_boxed_1320_; size_t v_i_boxed_1321_; lean_object* v_res_1322_; 
v_sz_boxed_1320_ = lean_unbox_usize(v_sz_1314_);
lean_dec(v_sz_1314_);
v_i_boxed_1321_ = lean_unbox_usize(v_i_1315_);
lean_dec(v_i_1315_);
v_res_1322_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Linter_CodeQuality_runPackageChecks_spec__1(v_as_1313_, v_sz_boxed_1320_, v_i_boxed_1321_, v_b_1316_, v___y_1317_, v___y_1318_);
lean_dec(v___y_1318_);
lean_dec_ref(v___y_1317_);
lean_dec_ref(v_as_1313_);
return v_res_1322_;
}
}
lean_object* runtime_initialize_Lean_Linter_CodeQuality_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Message(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_Command(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Linter_CodeQuality_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Linter_CodeQuality_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_282274628____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
l_Lean_Linter_CodeQuality_packageCheckExt = lean_io_result_get_value(res);
lean_mark_persistent(l_Lean_Linter_CodeQuality_packageCheckExt);
lean_dec_ref(res);
res = l___private_Lean_Linter_CodeQuality_Frontend_0__Lean_Linter_CodeQuality_initFn_00___x40_Lean_Linter_CodeQuality_Frontend_3402679419____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Linter_CodeQuality_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Linter_CodeQuality_Basic(uint8_t builtin);
lean_object* initialize_Lean_Message(uint8_t builtin);
lean_object* initialize_Lean_Elab_InfoTree_Main(uint8_t builtin);
lean_object* initialize_Lean_Elab_Command(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Linter_CodeQuality_Frontend(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Linter_CodeQuality_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Message(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_InfoTree_Main(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_Command(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Linter_CodeQuality_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Linter_CodeQuality_Frontend(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Linter_CodeQuality_Frontend(builtin);
}
#ifdef __cplusplus
}
#endif
