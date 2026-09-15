// Lean compiler output
// Module: Lean.Compiler.LCNF.ExplicitRC
// Imports: public import Lean.Compiler.LCNF.CompilerM public import Lean.Compiler.LCNF.PassManager import Lean.Compiler.LCNF.PhaseExt import Lean.Compiler.LCNF.PrettyPrinter
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
lean_object* l_Lean_instBEqFVarId_beq___boxed(lean_object*, lean_object*);
lean_object* l_Lean_instHashableFVarId_hash___boxed(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_FVarIdHashSet_insert(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_FVarIdHashSet_erase(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__4___boxed(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg___lam__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdMap_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
uint8_t l_Lean_Compiler_LCNF_CtorInfo_isRef(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedFVarIdHashSet_default;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l_Lean_FVarIdHashSet_fold___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Raw_instForInSigmaOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint8_t l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(lean_object*);
uint8_t l_Lean_Compiler_LCNF_LetValue_isPersistent(lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedReaderT___redArg(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedSignature_default___redArg();
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1___redArg();
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__4_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__5_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__11_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__6_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__7_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__8_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__9_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__12 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__12_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__12_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__10_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4_spec__7___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static size_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__5 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__5_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__6 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__6_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__7 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__7_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__8 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__8_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__9 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Array"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "getInternal"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "get!Internal"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "uget"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 94, .m_capacity = 94, .m_length = 93, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.CollectDerivedValInfo.collectCode"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Lean.Compiler.LCNF.ExplicitRC"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l_Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Compiler_LCNF_instInhabitedVarInfo_default = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedVarInfo = (const lean_object*)&l_Lean_Compiler_LCNF_instInhabitedVarInfo_default___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__0, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Std_DHashMap_Raw_instForInSigmaOfMonad___redArg___lam__2, .m_arity = 5, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__1, .m_arity = 5, .m_num_fixed = 2, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__0_value)} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_erase(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertBorrow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertLive(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___lam__0(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___lam__0, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6_spec__7(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.useLetValue"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__0_value)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0;
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Lean.Compiler.LCNF.Basic"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "_private.Lean.Compiler.LCNF.Basic.0.Lean.Compiler.LCNF.updateLetImp"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ugetBorrowed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "get!InternalBorrowed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "getInternalBorrowed"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5_value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 46, 193, 1, 46, 43, 107, 121)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1_value),LEAN_SCALAR_PTR_LITERAL(91, 223, 205, 20, 178, 155, 84, 168)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.LetDecl.explicitRc"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "_private.Lean.Compiler.LCNF.ExplicitRC.0.Lean.Compiler.LCNF.Code.explicitRc"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_explicitRc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "explicitRc"};
static const lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_explicitRc___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(9, 173, 65, 140, 38, 197, 53, 106)}};
static const lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_explicitRc___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_explicitRc___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_explicitRc___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_explicitRc;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_explicitRc___closed__0_value),LEAN_SCALAR_PTR_LITERAL(31, 132, 102, 171, 122, 154, 149, 18)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "ExplicitRC"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 164, 3, 212, 141, 65, 76, 246)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(234, 211, 142, 143, 107, 33, 215, 207)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(107, 250, 223, 192, 104, 128, 184, 149)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(141, 253, 97, 148, 179, 46, 109, 198)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(184, 97, 91, 211, 31, 209, 125, 32)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(245, 202, 70, 178, 192, 164, 153, 156)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 238, 44, 6, 75, 144, 17, 52)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 123, 124, 125, 95, 169, 195, 145)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(143, 99, 255, 139, 23, 91, 187, 231)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(226, 146, 98, 9, 226, 177, 155, 125)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(152, 80, 138, 101, 161, 95, 63, 48)}};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; lean_object* v___x_5_; 
v___x_3_ = l_Lean_instInhabitedFVarIdHashSet_default;
v___x_4_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__0));
v___x_5_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5_, 0, v___x_4_);
lean_ctor_set(v___x_5_, 1, v___x_3_);
return v___x_5_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default(void){
_start:
{
lean_object* v___x_6_; 
v___x_6_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1, &l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default___closed__1);
return v___x_6_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo(void){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0(lean_object* v_child_8_, lean_object* v_info_9_){
_start:
{
lean_object* v_parents_10_; lean_object* v_children_11_; lean_object* v___x_13_; uint8_t v_isShared_14_; uint8_t v_isSharedCheck_19_; 
v_parents_10_ = lean_ctor_get(v_info_9_, 0);
v_children_11_ = lean_ctor_get(v_info_9_, 1);
v_isSharedCheck_19_ = !lean_is_exclusive(v_info_9_);
if (v_isSharedCheck_19_ == 0)
{
v___x_13_ = v_info_9_;
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
else
{
lean_inc(v_children_11_);
lean_inc(v_parents_10_);
lean_dec(v_info_9_);
v___x_13_ = lean_box(0);
v_isShared_14_ = v_isSharedCheck_19_;
goto v_resetjp_12_;
}
v_resetjp_12_:
{
lean_object* v___x_15_; lean_object* v___x_17_; 
v___x_15_ = l_Lean_FVarIdHashSet_insert(v_children_11_, v_child_8_);
if (v_isShared_14_ == 0)
{
lean_ctor_set(v___x_13_, 1, v___x_15_);
v___x_17_ = v___x_13_;
goto v_reusejp_16_;
}
else
{
lean_object* v_reuseFailAlloc_18_; 
v_reuseFailAlloc_18_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_18_, 0, v_parents_10_);
lean_ctor_set(v_reuseFailAlloc_18_, 1, v___x_15_);
v___x_17_ = v_reuseFailAlloc_18_;
goto v_reusejp_16_;
}
v_reusejp_16_:
{
return v___x_17_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1(lean_object* v___x_20_, lean_object* v___x_21_, lean_object* v___f_22_, lean_object* v_x1_23_, lean_object* v_x2_24_){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___redArg(v___x_20_, v___x_21_, v_x1_23_, v_x2_24_, v___f_22_);
return v___x_25_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2(void){
_start:
{
lean_object* v___x_28_; lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_28_ = lean_box(0);
v___x_29_ = lean_unsigned_to_nat(16u);
v___x_30_ = lean_mk_array(v___x_29_, v___x_28_);
return v___x_30_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; 
v___x_31_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__2);
v___x_32_ = lean_unsigned_to_nat(0u);
v___x_33_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_33_, 0, v___x_32_);
lean_ctor_set(v___x_33_, 1, v___x_31_);
return v___x_33_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(lean_object* v_parents_53_, lean_object* v_child_54_, lean_object* v___y_55_){
_start:
{
lean_object* v___f_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___f_60_; lean_object* v___x_61_; lean_object* v_varMap_62_; lean_object* v_borrowedValues_63_; lean_object* v___x_65_; uint8_t v_isShared_66_; uint8_t v_isSharedCheck_89_; 
lean_inc(v_child_54_);
v___f_57_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0), 2, 1);
lean_closure_set(v___f_57_, 0, v_child_54_);
v___x_58_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_59_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___f_60_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_60_, 0, v___x_58_);
lean_closure_set(v___f_60_, 1, v___x_59_);
lean_closure_set(v___f_60_, 2, v___f_57_);
v___x_61_ = lean_st_ref_take(v___y_55_);
v_varMap_62_ = lean_ctor_get(v___x_61_, 0);
v_borrowedValues_63_ = lean_ctor_get(v___x_61_, 1);
v_isSharedCheck_89_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_89_ == 0)
{
v___x_65_ = v___x_61_;
v_isShared_66_ = v_isSharedCheck_89_;
goto v_resetjp_64_;
}
else
{
lean_inc(v_borrowedValues_63_);
lean_inc(v_varMap_62_);
lean_dec(v___x_61_);
v___x_65_ = lean_box(0);
v_isShared_66_ = v_isSharedCheck_89_;
goto v_resetjp_64_;
}
v_resetjp_64_:
{
lean_object* v___x_67_; lean_object* v___y_69_; lean_object* v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; uint8_t v___x_81_; 
v___x_67_ = lean_box(0);
v___x_78_ = lean_unsigned_to_nat(0u);
v___x_79_ = lean_array_get_size(v_parents_53_);
v___x_80_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_81_ = lean_nat_dec_lt(v___x_78_, v___x_79_);
if (v___x_81_ == 0)
{
lean_dec_ref(v___f_60_);
v___y_69_ = v_varMap_62_;
goto v___jp_68_;
}
else
{
uint8_t v___x_82_; 
v___x_82_ = lean_nat_dec_le(v___x_79_, v___x_79_);
if (v___x_82_ == 0)
{
if (v___x_81_ == 0)
{
lean_dec_ref(v___f_60_);
v___y_69_ = v_varMap_62_;
goto v___jp_68_;
}
else
{
size_t v___x_83_; size_t v___x_84_; lean_object* v___x_85_; 
v___x_83_ = ((size_t)0ULL);
v___x_84_ = lean_usize_of_nat(v___x_79_);
lean_inc_ref(v_parents_53_);
v___x_85_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_80_, v___f_60_, v_parents_53_, v___x_83_, v___x_84_, v_varMap_62_);
v___y_69_ = v___x_85_;
goto v___jp_68_;
}
}
else
{
size_t v___x_86_; size_t v___x_87_; lean_object* v___x_88_; 
v___x_86_ = ((size_t)0ULL);
v___x_87_ = lean_usize_of_nat(v___x_79_);
lean_inc_ref(v_parents_53_);
v___x_88_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_80_, v___f_60_, v_parents_53_, v___x_86_, v___x_87_, v_varMap_62_);
v___y_69_ = v___x_88_;
goto v___jp_68_;
}
}
v___jp_68_:
{
lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_70_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
v___x_71_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_71_, 0, v_parents_53_);
lean_ctor_set(v___x_71_, 1, v___x_70_);
v___x_72_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_58_, v___x_59_, v___y_69_, v_child_54_, v___x_71_);
if (v_isShared_66_ == 0)
{
lean_ctor_set(v___x_65_, 0, v___x_72_);
v___x_74_ = v___x_65_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_72_);
lean_ctor_set(v_reuseFailAlloc_77_, 1, v_borrowedValues_63_);
v___x_74_ = v_reuseFailAlloc_77_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
lean_object* v___x_75_; lean_object* v___x_76_; 
v___x_75_ = lean_st_ref_put(v___y_55_, v___x_74_);
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_67_);
return v___x_76_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___boxed(lean_object* v_parents_90_, lean_object* v_child_91_, lean_object* v___y_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(v_parents_90_, v_child_91_, v___y_92_);
lean_dec(v___y_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(lean_object* v_parents_95_, lean_object* v_child_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v___f_103_; lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___f_106_; lean_object* v___x_107_; lean_object* v_varMap_108_; lean_object* v_borrowedValues_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_135_; 
lean_inc(v_child_96_);
v___f_103_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__0), 2, 1);
lean_closure_set(v___f_103_, 0, v_child_96_);
v___x_104_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_105_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___f_106_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_106_, 0, v___x_104_);
lean_closure_set(v___f_106_, 1, v___x_105_);
lean_closure_set(v___f_106_, 2, v___f_103_);
v___x_107_ = lean_st_ref_take(v___y_97_);
v_varMap_108_ = lean_ctor_get(v___x_107_, 0);
v_borrowedValues_109_ = lean_ctor_get(v___x_107_, 1);
v_isSharedCheck_135_ = !lean_is_exclusive(v___x_107_);
if (v_isSharedCheck_135_ == 0)
{
v___x_111_ = v___x_107_;
v_isShared_112_ = v_isSharedCheck_135_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_borrowedValues_109_);
lean_inc(v_varMap_108_);
lean_dec(v___x_107_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_135_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_113_; lean_object* v___y_115_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; uint8_t v___x_127_; 
v___x_113_ = lean_box(0);
v___x_124_ = lean_unsigned_to_nat(0u);
v___x_125_ = lean_array_get_size(v_parents_95_);
v___x_126_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_127_ = lean_nat_dec_lt(v___x_124_, v___x_125_);
if (v___x_127_ == 0)
{
lean_dec_ref(v___f_106_);
v___y_115_ = v_varMap_108_;
goto v___jp_114_;
}
else
{
uint8_t v___x_128_; 
v___x_128_ = lean_nat_dec_le(v___x_125_, v___x_125_);
if (v___x_128_ == 0)
{
if (v___x_127_ == 0)
{
lean_dec_ref(v___f_106_);
v___y_115_ = v_varMap_108_;
goto v___jp_114_;
}
else
{
size_t v___x_129_; size_t v___x_130_; lean_object* v___x_131_; 
v___x_129_ = ((size_t)0ULL);
v___x_130_ = lean_usize_of_nat(v___x_125_);
lean_inc_ref(v_parents_95_);
v___x_131_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_126_, v___f_106_, v_parents_95_, v___x_129_, v___x_130_, v_varMap_108_);
v___y_115_ = v___x_131_;
goto v___jp_114_;
}
}
else
{
size_t v___x_132_; size_t v___x_133_; lean_object* v___x_134_; 
v___x_132_ = ((size_t)0ULL);
v___x_133_ = lean_usize_of_nat(v___x_125_);
lean_inc_ref(v_parents_95_);
v___x_134_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_126_, v___f_106_, v_parents_95_, v___x_132_, v___x_133_, v_varMap_108_);
v___y_115_ = v___x_134_;
goto v___jp_114_;
}
}
v___jp_114_:
{
lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_120_; 
v___x_116_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v_parents_95_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
v___x_118_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_104_, v___x_105_, v___y_115_, v_child_96_, v___x_117_);
if (v_isShared_112_ == 0)
{
lean_ctor_set(v___x_111_, 0, v___x_118_);
v___x_120_ = v___x_111_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_123_; 
v_reuseFailAlloc_123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_123_, 0, v___x_118_);
lean_ctor_set(v_reuseFailAlloc_123_, 1, v_borrowedValues_109_);
v___x_120_ = v_reuseFailAlloc_123_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_st_ref_put(v___y_97_, v___x_120_);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_113_);
return v___x_122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___boxed(lean_object* v_parents_136_, lean_object* v_child_137_, lean_object* v___y_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(v_parents_136_, v_child_137_, v___y_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
lean_dec(v___y_142_);
lean_dec_ref(v___y_141_);
lean_dec(v___y_140_);
lean_dec_ref(v___y_139_);
lean_dec(v___y_138_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(lean_object* v_fvarId_145_, lean_object* v___y_146_){
_start:
{
lean_object* v___x_148_; lean_object* v_varMap_149_; lean_object* v_borrowedValues_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_161_; 
v___x_148_ = lean_st_ref_take(v___y_146_);
v_varMap_149_ = lean_ctor_get(v___x_148_, 0);
v_borrowedValues_150_ = lean_ctor_get(v___x_148_, 1);
v_isSharedCheck_161_ = !lean_is_exclusive(v___x_148_);
if (v_isSharedCheck_161_ == 0)
{
v___x_152_ = v___x_148_;
v_isShared_153_ = v_isSharedCheck_161_;
goto v_resetjp_151_;
}
else
{
lean_inc(v_borrowedValues_150_);
lean_inc(v_varMap_149_);
lean_dec(v___x_148_);
v___x_152_ = lean_box(0);
v_isShared_153_ = v_isSharedCheck_161_;
goto v_resetjp_151_;
}
v_resetjp_151_:
{
lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_157_; 
v___x_154_ = lean_box(0);
v___x_155_ = l_Lean_FVarIdHashSet_insert(v_borrowedValues_150_, v_fvarId_145_);
if (v_isShared_153_ == 0)
{
lean_ctor_set(v___x_152_, 1, v___x_155_);
v___x_157_ = v___x_152_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_varMap_149_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v___x_155_);
v___x_157_ = v_reuseFailAlloc_160_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
lean_object* v___x_158_; lean_object* v___x_159_; 
v___x_158_ = lean_st_ref_put(v___y_146_, v___x_157_);
v___x_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_154_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg___boxed(lean_object* v_fvarId_162_, lean_object* v___y_163_, lean_object* v___y_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(v_fvarId_162_, v___y_163_);
lean_dec(v___y_163_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(lean_object* v_fvarId_166_, lean_object* v___y_167_, lean_object* v___y_168_, lean_object* v___y_169_, lean_object* v___y_170_, lean_object* v___y_171_){
_start:
{
lean_object* v___x_173_; lean_object* v_varMap_174_; lean_object* v_borrowedValues_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_186_; 
v___x_173_ = lean_st_ref_take(v___y_167_);
v_varMap_174_ = lean_ctor_get(v___x_173_, 0);
v_borrowedValues_175_ = lean_ctor_get(v___x_173_, 1);
v_isSharedCheck_186_ = !lean_is_exclusive(v___x_173_);
if (v_isSharedCheck_186_ == 0)
{
v___x_177_ = v___x_173_;
v_isShared_178_ = v_isSharedCheck_186_;
goto v_resetjp_176_;
}
else
{
lean_inc(v_borrowedValues_175_);
lean_inc(v_varMap_174_);
lean_dec(v___x_173_);
v___x_177_ = lean_box(0);
v_isShared_178_ = v_isSharedCheck_186_;
goto v_resetjp_176_;
}
v_resetjp_176_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_182_; 
v___x_179_ = lean_box(0);
v___x_180_ = l_Lean_FVarIdHashSet_insert(v_borrowedValues_175_, v_fvarId_166_);
if (v_isShared_178_ == 0)
{
lean_ctor_set(v___x_177_, 1, v___x_180_);
v___x_182_ = v___x_177_;
goto v_reusejp_181_;
}
else
{
lean_object* v_reuseFailAlloc_185_; 
v_reuseFailAlloc_185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_185_, 0, v_varMap_174_);
lean_ctor_set(v_reuseFailAlloc_185_, 1, v___x_180_);
v___x_182_ = v_reuseFailAlloc_185_;
goto v_reusejp_181_;
}
v_reusejp_181_:
{
lean_object* v___x_183_; lean_object* v___x_184_; 
v___x_183_ = lean_st_ref_put(v___y_167_, v___x_182_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_179_);
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___boxed(lean_object* v_fvarId_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(v_fvarId_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_, v___y_192_);
lean_dec(v___y_192_);
lean_dec_ref(v___y_191_);
lean_dec(v___y_190_);
lean_dec_ref(v___y_189_);
lean_dec(v___y_188_);
return v_res_194_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(lean_object* v_as_195_, size_t v_i_196_, size_t v_stop_197_, lean_object* v_b_198_, lean_object* v___y_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_){
_start:
{
lean_object* v_a_205_; uint8_t v___x_209_; 
v___x_209_ = lean_usize_dec_eq(v_i_196_, v_stop_197_);
if (v___x_209_ == 0)
{
lean_object* v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_array_uget_borrowed(v_as_195_, v_i_196_);
lean_inc(v___x_210_);
v___x_211_ = l_Lean_Compiler_LCNF_getType(v___x_210_, v___y_199_, v___y_200_, v___y_201_, v___y_202_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; uint8_t v___x_213_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc(v_a_212_);
lean_dec_ref_known(v___x_211_, 1);
v___x_213_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_a_212_);
lean_dec(v_a_212_);
if (v___x_213_ == 0)
{
v_a_205_ = v_b_198_;
goto v___jp_204_;
}
else
{
lean_object* v___x_214_; 
lean_inc(v___x_210_);
v___x_214_ = lean_array_push(v_b_198_, v___x_210_);
v_a_205_ = v___x_214_;
goto v___jp_204_;
}
}
else
{
lean_object* v_a_215_; lean_object* v___x_217_; uint8_t v_isShared_218_; uint8_t v_isSharedCheck_222_; 
lean_dec_ref(v_b_198_);
v_a_215_ = lean_ctor_get(v___x_211_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_222_ == 0)
{
v___x_217_ = v___x_211_;
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
else
{
lean_inc(v_a_215_);
lean_dec(v___x_211_);
v___x_217_ = lean_box(0);
v_isShared_218_ = v_isSharedCheck_222_;
goto v_resetjp_216_;
}
v_resetjp_216_:
{
lean_object* v___x_220_; 
if (v_isShared_218_ == 0)
{
v___x_220_ = v___x_217_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v_a_215_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
return v___x_220_;
}
}
}
}
else
{
lean_object* v___x_223_; 
v___x_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_223_, 0, v_b_198_);
return v___x_223_;
}
v___jp_204_:
{
size_t v___x_206_; size_t v___x_207_; 
v___x_206_ = ((size_t)1ULL);
v___x_207_ = lean_usize_add(v_i_196_, v___x_206_);
v_i_196_ = v___x_207_;
v_b_198_ = v_a_205_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg___boxed(lean_object* v_as_224_, lean_object* v_i_225_, lean_object* v_stop_226_, lean_object* v_b_227_, lean_object* v___y_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_){
_start:
{
size_t v_i_boxed_233_; size_t v_stop_boxed_234_; lean_object* v_res_235_; 
v_i_boxed_233_ = lean_unbox_usize(v_i_225_);
lean_dec(v_i_225_);
v_stop_boxed_234_ = lean_unbox_usize(v_stop_226_);
lean_dec(v_stop_226_);
v_res_235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(v_as_224_, v_i_boxed_233_, v_stop_boxed_234_, v_b_227_, v___y_228_, v___y_229_, v___y_230_, v___y_231_);
lean_dec(v___y_231_);
lean_dec_ref(v___y_230_);
lean_dec(v___y_229_);
lean_dec_ref(v___y_228_);
lean_dec_ref(v_as_224_);
return v_res_235_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__1(lean_object* v_child_236_, lean_object* v_a_237_, lean_object* v_x_238_){
_start:
{
if (lean_obj_tag(v_x_238_) == 0)
{
lean_dec(v_a_237_);
lean_dec(v_child_236_);
return v_x_238_;
}
else
{
lean_object* v_key_239_; lean_object* v_value_240_; lean_object* v_tail_241_; lean_object* v___x_243_; uint8_t v_isShared_244_; uint8_t v_isSharedCheck_263_; 
v_key_239_ = lean_ctor_get(v_x_238_, 0);
v_value_240_ = lean_ctor_get(v_x_238_, 1);
v_tail_241_ = lean_ctor_get(v_x_238_, 2);
v_isSharedCheck_263_ = !lean_is_exclusive(v_x_238_);
if (v_isSharedCheck_263_ == 0)
{
v___x_243_ = v_x_238_;
v_isShared_244_ = v_isSharedCheck_263_;
goto v_resetjp_242_;
}
else
{
lean_inc(v_tail_241_);
lean_inc(v_value_240_);
lean_inc(v_key_239_);
lean_dec(v_x_238_);
v___x_243_ = lean_box(0);
v_isShared_244_ = v_isSharedCheck_263_;
goto v_resetjp_242_;
}
v_resetjp_242_:
{
uint8_t v___x_245_; 
v___x_245_ = l_Lean_instBEqFVarId_beq(v_key_239_, v_a_237_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; lean_object* v___x_248_; 
v___x_246_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__1(v_child_236_, v_a_237_, v_tail_241_);
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 2, v___x_246_);
v___x_248_ = v___x_243_;
goto v_reusejp_247_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_key_239_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_value_240_);
lean_ctor_set(v_reuseFailAlloc_249_, 2, v___x_246_);
v___x_248_ = v_reuseFailAlloc_249_;
goto v_reusejp_247_;
}
v_reusejp_247_:
{
return v___x_248_;
}
}
else
{
lean_object* v_parents_250_; lean_object* v_children_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_262_; 
lean_dec(v_key_239_);
v_parents_250_ = lean_ctor_get(v_value_240_, 0);
v_children_251_ = lean_ctor_get(v_value_240_, 1);
v_isSharedCheck_262_ = !lean_is_exclusive(v_value_240_);
if (v_isSharedCheck_262_ == 0)
{
v___x_253_ = v_value_240_;
v_isShared_254_ = v_isSharedCheck_262_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_children_251_);
lean_inc(v_parents_250_);
lean_dec(v_value_240_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_262_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v___x_255_; lean_object* v___x_257_; 
v___x_255_ = l_Lean_FVarIdHashSet_insert(v_children_251_, v_child_236_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 1, v___x_255_);
v___x_257_ = v___x_253_;
goto v_reusejp_256_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v_parents_250_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v___x_255_);
v___x_257_ = v_reuseFailAlloc_261_;
goto v_reusejp_256_;
}
v_reusejp_256_:
{
lean_object* v___x_259_; 
if (v_isShared_244_ == 0)
{
lean_ctor_set(v___x_243_, 1, v___x_257_);
lean_ctor_set(v___x_243_, 0, v_a_237_);
v___x_259_ = v___x_243_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_260_; 
v_reuseFailAlloc_260_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_260_, 0, v_a_237_);
lean_ctor_set(v_reuseFailAlloc_260_, 1, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_260_, 2, v_tail_241_);
v___x_259_ = v_reuseFailAlloc_260_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
return v___x_259_;
}
}
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(lean_object* v_a_264_, lean_object* v_x_265_){
_start:
{
if (lean_obj_tag(v_x_265_) == 0)
{
uint8_t v___x_266_; 
v___x_266_ = 0;
return v___x_266_;
}
else
{
lean_object* v_key_267_; lean_object* v_tail_268_; uint8_t v___x_269_; 
v_key_267_ = lean_ctor_get(v_x_265_, 0);
v_tail_268_ = lean_ctor_get(v_x_265_, 2);
v___x_269_ = l_Lean_instBEqFVarId_beq(v_key_267_, v_a_264_);
if (v___x_269_ == 0)
{
v_x_265_ = v_tail_268_;
goto _start;
}
else
{
return v___x_269_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg___boxed(lean_object* v_a_271_, lean_object* v_x_272_){
_start:
{
uint8_t v_res_273_; lean_object* v_r_274_; 
v_res_273_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_271_, v_x_272_);
lean_dec(v_x_272_);
lean_dec(v_a_271_);
v_r_274_ = lean_box(v_res_273_);
return v_r_274_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0(lean_object* v_child_275_, lean_object* v_m_276_, lean_object* v_a_277_){
_start:
{
lean_object* v_size_278_; lean_object* v_buckets_279_; lean_object* v___x_280_; uint64_t v___x_281_; uint64_t v___x_282_; uint64_t v___x_283_; uint64_t v_fold_284_; uint64_t v___x_285_; uint64_t v___x_286_; uint64_t v___x_287_; size_t v___x_288_; size_t v___x_289_; size_t v___x_290_; size_t v___x_291_; size_t v___x_292_; lean_object* v_bucket_293_; uint8_t v___x_294_; 
v_size_278_ = lean_ctor_get(v_m_276_, 0);
v_buckets_279_ = lean_ctor_get(v_m_276_, 1);
v___x_280_ = lean_array_get_size(v_buckets_279_);
v___x_281_ = l_Lean_instHashableFVarId_hash(v_a_277_);
v___x_282_ = 32ULL;
v___x_283_ = lean_uint64_shift_right(v___x_281_, v___x_282_);
v_fold_284_ = lean_uint64_xor(v___x_281_, v___x_283_);
v___x_285_ = 16ULL;
v___x_286_ = lean_uint64_shift_right(v_fold_284_, v___x_285_);
v___x_287_ = lean_uint64_xor(v_fold_284_, v___x_286_);
v___x_288_ = lean_uint64_to_usize(v___x_287_);
v___x_289_ = lean_usize_of_nat(v___x_280_);
v___x_290_ = ((size_t)1ULL);
v___x_291_ = lean_usize_sub(v___x_289_, v___x_290_);
v___x_292_ = lean_usize_land(v___x_288_, v___x_291_);
v_bucket_293_ = lean_array_uget_borrowed(v_buckets_279_, v___x_292_);
v___x_294_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_277_, v_bucket_293_);
if (v___x_294_ == 0)
{
lean_dec(v_a_277_);
lean_dec(v_child_275_);
return v_m_276_;
}
else
{
lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_305_; 
lean_inc(v_bucket_293_);
lean_inc_ref(v_buckets_279_);
lean_inc(v_size_278_);
v_isSharedCheck_305_ = !lean_is_exclusive(v_m_276_);
if (v_isSharedCheck_305_ == 0)
{
lean_object* v_unused_306_; lean_object* v_unused_307_; 
v_unused_306_ = lean_ctor_get(v_m_276_, 1);
lean_dec(v_unused_306_);
v_unused_307_ = lean_ctor_get(v_m_276_, 0);
lean_dec(v_unused_307_);
v___x_296_ = v_m_276_;
v_isShared_297_ = v_isSharedCheck_305_;
goto v_resetjp_295_;
}
else
{
lean_dec(v_m_276_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_305_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_298_; lean_object* v_buckets_299_; lean_object* v_bucket_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_298_ = lean_box(0);
v_buckets_299_ = lean_array_uset(v_buckets_279_, v___x_292_, v___x_298_);
v_bucket_300_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__1(v_child_275_, v_a_277_, v_bucket_293_);
v___x_301_ = lean_array_uset(v_buckets_299_, v___x_292_, v_bucket_300_);
if (v_isShared_297_ == 0)
{
lean_ctor_set(v___x_296_, 1, v___x_301_);
v___x_303_ = v___x_296_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v_size_278_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2(lean_object* v_child_308_, lean_object* v_as_309_, size_t v_i_310_, size_t v_stop_311_, lean_object* v_b_312_){
_start:
{
uint8_t v___x_313_; 
v___x_313_ = lean_usize_dec_eq(v_i_310_, v_stop_311_);
if (v___x_313_ == 0)
{
lean_object* v___x_314_; lean_object* v___x_315_; size_t v___x_316_; size_t v___x_317_; 
v___x_314_ = lean_array_uget_borrowed(v_as_309_, v_i_310_);
lean_inc(v___x_314_);
lean_inc(v_child_308_);
v___x_315_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0(v_child_308_, v_b_312_, v___x_314_);
v___x_316_ = ((size_t)1ULL);
v___x_317_ = lean_usize_add(v_i_310_, v___x_316_);
v_i_310_ = v___x_317_;
v_b_312_ = v___x_315_;
goto _start;
}
else
{
lean_dec(v_child_308_);
return v_b_312_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2___boxed(lean_object* v_child_319_, lean_object* v_as_320_, lean_object* v_i_321_, lean_object* v_stop_322_, lean_object* v_b_323_){
_start:
{
size_t v_i_boxed_324_; size_t v_stop_boxed_325_; lean_object* v_res_326_; 
v_i_boxed_324_ = lean_unbox_usize(v_i_321_);
lean_dec(v_i_321_);
v_stop_boxed_325_ = lean_unbox_usize(v_stop_322_);
lean_dec(v_stop_322_);
v_res_326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2(v_child_319_, v_as_320_, v_i_boxed_324_, v_stop_boxed_325_, v_b_323_);
lean_dec_ref(v_as_320_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4_spec__7___redArg(lean_object* v_x_327_, lean_object* v_x_328_){
_start:
{
if (lean_obj_tag(v_x_328_) == 0)
{
return v_x_327_;
}
else
{
lean_object* v_key_329_; lean_object* v_value_330_; lean_object* v_tail_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_354_; 
v_key_329_ = lean_ctor_get(v_x_328_, 0);
v_value_330_ = lean_ctor_get(v_x_328_, 1);
v_tail_331_ = lean_ctor_get(v_x_328_, 2);
v_isSharedCheck_354_ = !lean_is_exclusive(v_x_328_);
if (v_isSharedCheck_354_ == 0)
{
v___x_333_ = v_x_328_;
v_isShared_334_ = v_isSharedCheck_354_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_tail_331_);
lean_inc(v_value_330_);
lean_inc(v_key_329_);
lean_dec(v_x_328_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_354_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_335_; uint64_t v___x_336_; uint64_t v___x_337_; uint64_t v___x_338_; uint64_t v_fold_339_; uint64_t v___x_340_; uint64_t v___x_341_; uint64_t v___x_342_; size_t v___x_343_; size_t v___x_344_; size_t v___x_345_; size_t v___x_346_; size_t v___x_347_; lean_object* v___x_348_; lean_object* v___x_350_; 
v___x_335_ = lean_array_get_size(v_x_327_);
v___x_336_ = l_Lean_instHashableFVarId_hash(v_key_329_);
v___x_337_ = 32ULL;
v___x_338_ = lean_uint64_shift_right(v___x_336_, v___x_337_);
v_fold_339_ = lean_uint64_xor(v___x_336_, v___x_338_);
v___x_340_ = 16ULL;
v___x_341_ = lean_uint64_shift_right(v_fold_339_, v___x_340_);
v___x_342_ = lean_uint64_xor(v_fold_339_, v___x_341_);
v___x_343_ = lean_uint64_to_usize(v___x_342_);
v___x_344_ = lean_usize_of_nat(v___x_335_);
v___x_345_ = ((size_t)1ULL);
v___x_346_ = lean_usize_sub(v___x_344_, v___x_345_);
v___x_347_ = lean_usize_land(v___x_343_, v___x_346_);
v___x_348_ = lean_array_uget_borrowed(v_x_327_, v___x_347_);
lean_inc(v___x_348_);
if (v_isShared_334_ == 0)
{
lean_ctor_set(v___x_333_, 2, v___x_348_);
v___x_350_ = v___x_333_;
goto v_reusejp_349_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v_key_329_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_value_330_);
lean_ctor_set(v_reuseFailAlloc_353_, 2, v___x_348_);
v___x_350_ = v_reuseFailAlloc_353_;
goto v_reusejp_349_;
}
v_reusejp_349_:
{
lean_object* v___x_351_; 
v___x_351_ = lean_array_uset(v_x_327_, v___x_347_, v___x_350_);
v_x_327_ = v___x_351_;
v_x_328_ = v_tail_331_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4___redArg(lean_object* v_i_355_, lean_object* v_source_356_, lean_object* v_target_357_){
_start:
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_array_get_size(v_source_356_);
v___x_359_ = lean_nat_dec_lt(v_i_355_, v___x_358_);
if (v___x_359_ == 0)
{
lean_dec_ref(v_source_356_);
lean_dec(v_i_355_);
return v_target_357_;
}
else
{
lean_object* v_es_360_; lean_object* v___x_361_; lean_object* v_source_362_; lean_object* v_target_363_; lean_object* v___x_364_; lean_object* v___x_365_; 
v_es_360_ = lean_array_fget(v_source_356_, v_i_355_);
v___x_361_ = lean_box(0);
v_source_362_ = lean_array_fset(v_source_356_, v_i_355_, v___x_361_);
v_target_363_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4_spec__7___redArg(v_target_357_, v_es_360_);
v___x_364_ = lean_unsigned_to_nat(1u);
v___x_365_ = lean_nat_add(v_i_355_, v___x_364_);
lean_dec(v_i_355_);
v_i_355_ = v___x_365_;
v_source_356_ = v_source_362_;
v_target_357_ = v_target_363_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3___redArg(lean_object* v_data_367_){
_start:
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v_nbuckets_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_375_; 
v___x_368_ = lean_array_get_size(v_data_367_);
v___x_369_ = lean_unsigned_to_nat(2u);
v_nbuckets_370_ = lean_nat_mul(v___x_368_, v___x_369_);
v___x_371_ = lean_unsigned_to_nat(0u);
v___x_372_ = lean_box(0);
v___x_373_ = lean_mk_array(v_nbuckets_370_, v___x_372_);
v___x_374_ = lean_array_propagate_mark(v_data_367_, v___x_373_);
v___x_375_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4___redArg(v___x_371_, v_data_367_, v___x_374_);
return v___x_375_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__4___redArg(lean_object* v_a_376_, lean_object* v_b_377_, lean_object* v_x_378_){
_start:
{
if (lean_obj_tag(v_x_378_) == 0)
{
lean_dec(v_b_377_);
lean_dec(v_a_376_);
return v_x_378_;
}
else
{
lean_object* v_key_379_; lean_object* v_value_380_; lean_object* v_tail_381_; lean_object* v___x_383_; uint8_t v_isShared_384_; uint8_t v_isSharedCheck_393_; 
v_key_379_ = lean_ctor_get(v_x_378_, 0);
v_value_380_ = lean_ctor_get(v_x_378_, 1);
v_tail_381_ = lean_ctor_get(v_x_378_, 2);
v_isSharedCheck_393_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_393_ == 0)
{
v___x_383_ = v_x_378_;
v_isShared_384_ = v_isSharedCheck_393_;
goto v_resetjp_382_;
}
else
{
lean_inc(v_tail_381_);
lean_inc(v_value_380_);
lean_inc(v_key_379_);
lean_dec(v_x_378_);
v___x_383_ = lean_box(0);
v_isShared_384_ = v_isSharedCheck_393_;
goto v_resetjp_382_;
}
v_resetjp_382_:
{
uint8_t v___x_385_; 
v___x_385_ = l_Lean_instBEqFVarId_beq(v_key_379_, v_a_376_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_386_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__4___redArg(v_a_376_, v_b_377_, v_tail_381_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 2, v___x_386_);
v___x_388_ = v___x_383_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v_key_379_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v_value_380_);
lean_ctor_set(v_reuseFailAlloc_389_, 2, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
else
{
lean_object* v___x_391_; 
lean_dec(v_value_380_);
lean_dec(v_key_379_);
if (v_isShared_384_ == 0)
{
lean_ctor_set(v___x_383_, 1, v_b_377_);
lean_ctor_set(v___x_383_, 0, v_a_376_);
v___x_391_ = v___x_383_;
goto v_reusejp_390_;
}
else
{
lean_object* v_reuseFailAlloc_392_; 
v_reuseFailAlloc_392_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_392_, 0, v_a_376_);
lean_ctor_set(v_reuseFailAlloc_392_, 1, v_b_377_);
lean_ctor_set(v_reuseFailAlloc_392_, 2, v_tail_381_);
v___x_391_ = v_reuseFailAlloc_392_;
goto v_reusejp_390_;
}
v_reusejp_390_:
{
return v___x_391_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(lean_object* v_m_394_, lean_object* v_a_395_, lean_object* v_b_396_){
_start:
{
lean_object* v_size_397_; lean_object* v_buckets_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_441_; 
v_size_397_ = lean_ctor_get(v_m_394_, 0);
v_buckets_398_ = lean_ctor_get(v_m_394_, 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v_m_394_);
if (v_isSharedCheck_441_ == 0)
{
v___x_400_ = v_m_394_;
v_isShared_401_ = v_isSharedCheck_441_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_buckets_398_);
lean_inc(v_size_397_);
lean_dec(v_m_394_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_441_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; uint64_t v___x_403_; uint64_t v___x_404_; uint64_t v___x_405_; uint64_t v_fold_406_; uint64_t v___x_407_; uint64_t v___x_408_; uint64_t v___x_409_; size_t v___x_410_; size_t v___x_411_; size_t v___x_412_; size_t v___x_413_; size_t v___x_414_; lean_object* v_bkt_415_; uint8_t v___x_416_; 
v___x_402_ = lean_array_get_size(v_buckets_398_);
v___x_403_ = l_Lean_instHashableFVarId_hash(v_a_395_);
v___x_404_ = 32ULL;
v___x_405_ = lean_uint64_shift_right(v___x_403_, v___x_404_);
v_fold_406_ = lean_uint64_xor(v___x_403_, v___x_405_);
v___x_407_ = 16ULL;
v___x_408_ = lean_uint64_shift_right(v_fold_406_, v___x_407_);
v___x_409_ = lean_uint64_xor(v_fold_406_, v___x_408_);
v___x_410_ = lean_uint64_to_usize(v___x_409_);
v___x_411_ = lean_usize_of_nat(v___x_402_);
v___x_412_ = ((size_t)1ULL);
v___x_413_ = lean_usize_sub(v___x_411_, v___x_412_);
v___x_414_ = lean_usize_land(v___x_410_, v___x_413_);
v_bkt_415_ = lean_array_uget_borrowed(v_buckets_398_, v___x_414_);
v___x_416_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_395_, v_bkt_415_);
if (v___x_416_ == 0)
{
lean_object* v___x_417_; lean_object* v_size_x27_418_; lean_object* v___x_419_; lean_object* v_buckets_x27_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_417_ = lean_unsigned_to_nat(1u);
v_size_x27_418_ = lean_nat_add(v_size_397_, v___x_417_);
lean_dec(v_size_397_);
lean_inc(v_bkt_415_);
v___x_419_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_419_, 0, v_a_395_);
lean_ctor_set(v___x_419_, 1, v_b_396_);
lean_ctor_set(v___x_419_, 2, v_bkt_415_);
v_buckets_x27_420_ = lean_array_uset(v_buckets_398_, v___x_414_, v___x_419_);
v___x_421_ = lean_unsigned_to_nat(4u);
v___x_422_ = lean_nat_mul(v_size_x27_418_, v___x_421_);
v___x_423_ = lean_unsigned_to_nat(3u);
v___x_424_ = lean_nat_div(v___x_422_, v___x_423_);
lean_dec(v___x_422_);
v___x_425_ = lean_array_get_size(v_buckets_x27_420_);
v___x_426_ = lean_nat_dec_le(v___x_424_, v___x_425_);
lean_dec(v___x_424_);
if (v___x_426_ == 0)
{
lean_object* v_val_427_; lean_object* v___x_429_; 
v_val_427_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3___redArg(v_buckets_x27_420_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 1, v_val_427_);
lean_ctor_set(v___x_400_, 0, v_size_x27_418_);
v___x_429_ = v___x_400_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_size_x27_418_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_val_427_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
return v___x_429_;
}
}
else
{
lean_object* v___x_432_; 
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 1, v_buckets_x27_420_);
lean_ctor_set(v___x_400_, 0, v_size_x27_418_);
v___x_432_ = v___x_400_;
goto v_reusejp_431_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_size_x27_418_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_buckets_x27_420_);
v___x_432_ = v_reuseFailAlloc_433_;
goto v_reusejp_431_;
}
v_reusejp_431_:
{
return v___x_432_;
}
}
}
else
{
lean_object* v___x_434_; lean_object* v_buckets_x27_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_439_; 
lean_inc(v_bkt_415_);
v___x_434_ = lean_box(0);
v_buckets_x27_435_ = lean_array_uset(v_buckets_398_, v___x_414_, v___x_434_);
v___x_436_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__4___redArg(v_a_395_, v_b_396_, v_bkt_415_);
v___x_437_ = lean_array_uset(v_buckets_x27_435_, v___x_414_, v___x_436_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 1, v___x_437_);
v___x_439_ = v___x_400_;
goto v_reusejp_438_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v_size_397_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v___x_437_);
v___x_439_ = v_reuseFailAlloc_440_;
goto v_reusejp_438_;
}
v_reusejp_438_:
{
return v___x_439_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(lean_object* v_parents_444_, lean_object* v_child_445_, lean_object* v___y_446_, lean_object* v___y_447_, lean_object* v___y_448_, lean_object* v___y_449_, lean_object* v___y_450_){
_start:
{
lean_object* v___y_453_; lean_object* v_borrowedValues_454_; lean_object* v___y_455_; lean_object* v_a_481_; lean_object* v___y_492_; lean_object* v___x_502_; 
lean_inc(v_child_445_);
v___x_502_ = l_Lean_Compiler_LCNF_getType(v_child_445_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
if (lean_obj_tag(v___x_502_) == 0)
{
lean_object* v_a_503_; lean_object* v___x_505_; uint8_t v_isShared_506_; uint8_t v_isSharedCheck_523_; 
v_a_503_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_523_ == 0)
{
v___x_505_ = v___x_502_;
v_isShared_506_ = v_isSharedCheck_523_;
goto v_resetjp_504_;
}
else
{
lean_inc(v_a_503_);
lean_dec(v___x_502_);
v___x_505_ = lean_box(0);
v_isShared_506_ = v_isSharedCheck_523_;
goto v_resetjp_504_;
}
v_resetjp_504_:
{
uint8_t v___x_507_; 
v___x_507_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_a_503_);
lean_dec(v_a_503_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; lean_object* v___x_510_; 
lean_dec(v_child_445_);
v___x_508_ = lean_box(0);
if (v_isShared_506_ == 0)
{
lean_ctor_set(v___x_505_, 0, v___x_508_);
v___x_510_ = v___x_505_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
else
{
lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; uint8_t v___x_515_; 
lean_del_object(v___x_505_);
v___x_512_ = lean_unsigned_to_nat(0u);
v___x_513_ = lean_array_get_size(v_parents_444_);
v___x_514_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_515_ = lean_nat_dec_lt(v___x_512_, v___x_513_);
if (v___x_515_ == 0)
{
v_a_481_ = v___x_514_;
goto v___jp_480_;
}
else
{
uint8_t v___x_516_; 
v___x_516_ = lean_nat_dec_le(v___x_513_, v___x_513_);
if (v___x_516_ == 0)
{
if (v___x_515_ == 0)
{
v_a_481_ = v___x_514_;
goto v___jp_480_;
}
else
{
size_t v___x_517_; size_t v___x_518_; lean_object* v___x_519_; 
v___x_517_ = ((size_t)0ULL);
v___x_518_ = lean_usize_of_nat(v___x_513_);
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(v_parents_444_, v___x_517_, v___x_518_, v___x_514_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
v___y_492_ = v___x_519_;
goto v___jp_491_;
}
}
else
{
size_t v___x_520_; size_t v___x_521_; lean_object* v___x_522_; 
v___x_520_ = ((size_t)0ULL);
v___x_521_ = lean_usize_of_nat(v___x_513_);
v___x_522_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(v_parents_444_, v___x_520_, v___x_521_, v___x_514_, v___y_447_, v___y_448_, v___y_449_, v___y_450_);
v___y_492_ = v___x_522_;
goto v___jp_491_;
}
}
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_dec(v_child_445_);
v_a_524_ = lean_ctor_get(v___x_502_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_502_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_502_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_502_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
v___jp_452_:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_456_ = lean_unsigned_to_nat(0u);
v___x_457_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
lean_inc_ref(v___y_453_);
v___x_458_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_458_, 0, v___y_453_);
lean_ctor_set(v___x_458_, 1, v___x_457_);
lean_inc(v_child_445_);
v___x_459_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(v___y_455_, v_child_445_, v___x_458_);
v___x_460_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_460_, 0, v___x_459_);
lean_ctor_set(v___x_460_, 1, v_borrowedValues_454_);
v___x_461_ = lean_st_ref_put(v___y_446_, v___x_460_);
v___x_462_ = lean_array_get_size(v___y_453_);
lean_dec_ref(v___y_453_);
v___x_463_ = lean_nat_dec_eq(v___x_462_, v___x_456_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; lean_object* v___x_465_; 
lean_dec(v_child_445_);
v___x_464_ = lean_box(0);
v___x_465_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
return v___x_465_;
}
else
{
lean_object* v___x_466_; lean_object* v_varMap_467_; lean_object* v_borrowedValues_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_479_; 
v___x_466_ = lean_st_ref_take(v___y_446_);
v_varMap_467_ = lean_ctor_get(v___x_466_, 0);
v_borrowedValues_468_ = lean_ctor_get(v___x_466_, 1);
v_isSharedCheck_479_ = !lean_is_exclusive(v___x_466_);
if (v_isSharedCheck_479_ == 0)
{
v___x_470_ = v___x_466_;
v_isShared_471_ = v_isSharedCheck_479_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_borrowedValues_468_);
lean_inc(v_varMap_467_);
lean_dec(v___x_466_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_479_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_475_; 
v___x_472_ = lean_box(0);
v___x_473_ = l_Lean_FVarIdHashSet_insert(v_borrowedValues_468_, v_child_445_);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 1, v___x_473_);
v___x_475_ = v___x_470_;
goto v_reusejp_474_;
}
else
{
lean_object* v_reuseFailAlloc_478_; 
v_reuseFailAlloc_478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_478_, 0, v_varMap_467_);
lean_ctor_set(v_reuseFailAlloc_478_, 1, v___x_473_);
v___x_475_ = v_reuseFailAlloc_478_;
goto v_reusejp_474_;
}
v_reusejp_474_:
{
lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_476_ = lean_st_ref_put(v___y_446_, v___x_475_);
v___x_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_477_, 0, v___x_472_);
return v___x_477_;
}
}
}
}
v___jp_480_:
{
lean_object* v___x_482_; lean_object* v_varMap_483_; lean_object* v_borrowedValues_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_482_ = lean_st_ref_take(v___y_446_);
v_varMap_483_ = lean_ctor_get(v___x_482_, 0);
lean_inc_ref(v_varMap_483_);
v_borrowedValues_484_ = lean_ctor_get(v___x_482_, 1);
lean_inc_ref(v_borrowedValues_484_);
lean_dec(v___x_482_);
v___x_485_ = lean_unsigned_to_nat(0u);
v___x_486_ = lean_array_get_size(v_a_481_);
v___x_487_ = lean_nat_dec_lt(v___x_485_, v___x_486_);
if (v___x_487_ == 0)
{
v___y_453_ = v_a_481_;
v_borrowedValues_454_ = v_borrowedValues_484_;
v___y_455_ = v_varMap_483_;
goto v___jp_452_;
}
else
{
size_t v___x_488_; size_t v___x_489_; lean_object* v___x_490_; 
v___x_488_ = ((size_t)0ULL);
v___x_489_ = lean_usize_of_nat(v___x_486_);
lean_inc(v_child_445_);
v___x_490_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2(v_child_445_, v_a_481_, v___x_488_, v___x_489_, v_varMap_483_);
v___y_453_ = v_a_481_;
v_borrowedValues_454_ = v_borrowedValues_484_;
v___y_455_ = v___x_490_;
goto v___jp_452_;
}
}
v___jp_491_:
{
if (lean_obj_tag(v___y_492_) == 0)
{
lean_object* v_a_493_; 
v_a_493_ = lean_ctor_get(v___y_492_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___y_492_, 1);
v_a_481_ = v_a_493_;
goto v___jp_480_;
}
else
{
lean_object* v_a_494_; lean_object* v___x_496_; uint8_t v_isShared_497_; uint8_t v_isSharedCheck_501_; 
lean_dec(v_child_445_);
v_a_494_ = lean_ctor_get(v___y_492_, 0);
v_isSharedCheck_501_ = !lean_is_exclusive(v___y_492_);
if (v_isSharedCheck_501_ == 0)
{
v___x_496_ = v___y_492_;
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
else
{
lean_inc(v_a_494_);
lean_dec(v___y_492_);
v___x_496_ = lean_box(0);
v_isShared_497_ = v_isSharedCheck_501_;
goto v_resetjp_495_;
}
v_resetjp_495_:
{
lean_object* v___x_499_; 
if (v_isShared_497_ == 0)
{
v___x_499_ = v___x_496_;
goto v_reusejp_498_;
}
else
{
lean_object* v_reuseFailAlloc_500_; 
v_reuseFailAlloc_500_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_500_, 0, v_a_494_);
v___x_499_ = v_reuseFailAlloc_500_;
goto v_reusejp_498_;
}
v_reusejp_498_:
{
return v___x_499_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___boxed(lean_object* v_parents_532_, lean_object* v_child_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v_parents_532_, v_child_533_, v___y_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
lean_dec(v___y_534_);
lean_dec_ref(v_parents_532_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1(lean_object* v_00_u03b2_541_, lean_object* v_m_542_, lean_object* v_a_543_, lean_object* v_b_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(v_m_542_, v_a_543_, v_b_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3(lean_object* v_as_546_, size_t v_i_547_, size_t v_stop_548_, lean_object* v_b_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_){
_start:
{
lean_object* v___x_556_; 
v___x_556_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(v_as_546_, v_i_547_, v_stop_548_, v_b_549_, v___y_551_, v___y_552_, v___y_553_, v___y_554_);
return v___x_556_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___boxed(lean_object* v_as_557_, lean_object* v_i_558_, lean_object* v_stop_559_, lean_object* v_b_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_){
_start:
{
size_t v_i_boxed_567_; size_t v_stop_boxed_568_; lean_object* v_res_569_; 
v_i_boxed_567_ = lean_unbox_usize(v_i_558_);
lean_dec(v_i_558_);
v_stop_boxed_568_ = lean_unbox_usize(v_stop_559_);
lean_dec(v_stop_559_);
v_res_569_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3(v_as_557_, v_i_boxed_567_, v_stop_boxed_568_, v_b_560_, v___y_561_, v___y_562_, v___y_563_, v___y_564_, v___y_565_);
lean_dec(v___y_565_);
lean_dec_ref(v___y_564_);
lean_dec(v___y_563_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec_ref(v_as_557_);
return v_res_569_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0(lean_object* v_00_u03b2_570_, lean_object* v_a_571_, lean_object* v_x_572_){
_start:
{
uint8_t v___x_573_; 
v___x_573_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_571_, v_x_572_);
return v___x_573_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___boxed(lean_object* v_00_u03b2_574_, lean_object* v_a_575_, lean_object* v_x_576_){
_start:
{
uint8_t v_res_577_; lean_object* v_r_578_; 
v_res_577_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0(v_00_u03b2_574_, v_a_575_, v_x_576_);
lean_dec(v_x_576_);
lean_dec(v_a_575_);
v_r_578_ = lean_box(v_res_577_);
return v_r_578_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3(lean_object* v_00_u03b2_579_, lean_object* v_data_580_){
_start:
{
lean_object* v___x_581_; 
v___x_581_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3___redArg(v_data_580_);
return v___x_581_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__4(lean_object* v_00_u03b2_582_, lean_object* v_a_583_, lean_object* v_b_584_, lean_object* v_x_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__4___redArg(v_a_583_, v_b_584_, v_x_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_587_, lean_object* v_i_588_, lean_object* v_source_589_, lean_object* v_target_590_){
_start:
{
lean_object* v___x_591_; 
v___x_591_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4___redArg(v_i_588_, v_source_589_, v_target_590_);
return v___x_591_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4_spec__7(lean_object* v_00_u03b2_592_, lean_object* v_x_593_, lean_object* v_x_594_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3_spec__4_spec__7___redArg(v_x_593_, v_x_594_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0(lean_object* v_fvarId_596_, lean_object* v_info_597_){
_start:
{
lean_object* v_parents_598_; lean_object* v_children_599_; lean_object* v___x_601_; uint8_t v_isShared_602_; uint8_t v_isSharedCheck_607_; 
v_parents_598_ = lean_ctor_get(v_info_597_, 0);
v_children_599_ = lean_ctor_get(v_info_597_, 1);
v_isSharedCheck_607_ = !lean_is_exclusive(v_info_597_);
if (v_isSharedCheck_607_ == 0)
{
v___x_601_ = v_info_597_;
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
else
{
lean_inc(v_children_599_);
lean_inc(v_parents_598_);
lean_dec(v_info_597_);
v___x_601_ = lean_box(0);
v_isShared_602_ = v_isSharedCheck_607_;
goto v_resetjp_600_;
}
v_resetjp_600_:
{
lean_object* v___x_603_; lean_object* v___x_605_; 
v___x_603_ = l_Lean_FVarIdHashSet_insert(v_children_599_, v_fvarId_596_);
if (v_isShared_602_ == 0)
{
lean_ctor_set(v___x_601_, 1, v___x_603_);
v___x_605_ = v___x_601_;
goto v_reusejp_604_;
}
else
{
lean_object* v_reuseFailAlloc_606_; 
v_reuseFailAlloc_606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_606_, 0, v_parents_598_);
lean_ctor_set(v_reuseFailAlloc_606_, 1, v___x_603_);
v___x_605_ = v_reuseFailAlloc_606_;
goto v_reusejp_604_;
}
v_reusejp_604_:
{
return v___x_605_;
}
}
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0(void){
_start:
{
lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; 
v___x_608_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
v___x_609_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_610_, 0, v___x_609_);
lean_ctor_set(v___x_610_, 1, v___x_608_);
return v___x_610_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1(void){
_start:
{
lean_object* v___x_611_; lean_object* v___x_612_; 
v___x_611_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_612_ = lean_array_get_size(v___x_611_);
return v___x_612_;
}
}
static uint8_t _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; uint8_t v___x_615_; 
v___x_613_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1);
v___x_614_ = lean_unsigned_to_nat(0u);
v___x_615_ = lean_nat_dec_lt(v___x_614_, v___x_613_);
return v___x_615_;
}
}
static size_t _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3(void){
_start:
{
lean_object* v___x_616_; size_t v___x_617_; 
v___x_616_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__1);
v___x_617_ = lean_usize_of_nat(v___x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(lean_object* v_p_618_, lean_object* v___y_619_){
_start:
{
lean_object* v_fvarId_624_; lean_object* v_type_625_; uint8_t v_borrow_626_; lean_object* v___x_627_; lean_object* v___f_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___f_631_; lean_object* v___x_632_; lean_object* v_varMap_633_; lean_object* v_borrowedValues_634_; lean_object* v___x_636_; uint8_t v_isShared_637_; uint8_t v_isSharedCheck_666_; 
v_fvarId_624_ = lean_ctor_get(v_p_618_, 0);
lean_inc_n(v_fvarId_624_, 2);
v_type_625_ = lean_ctor_get(v_p_618_, 2);
lean_inc_ref(v_type_625_);
v_borrow_626_ = lean_ctor_get_uint8(v_p_618_, sizeof(void*)*3);
lean_dec_ref(v_p_618_);
v___x_627_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___f_628_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0), 2, 1);
lean_closure_set(v___f_628_, 0, v_fvarId_624_);
v___x_629_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_630_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___f_631_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_631_, 0, v___x_629_);
lean_closure_set(v___f_631_, 1, v___x_630_);
lean_closure_set(v___f_631_, 2, v___f_628_);
v___x_632_ = lean_st_ref_take(v___y_619_);
v_varMap_633_ = lean_ctor_get(v___x_632_, 0);
v_borrowedValues_634_ = lean_ctor_get(v___x_632_, 1);
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_632_);
if (v_isSharedCheck_666_ == 0)
{
v___x_636_ = v___x_632_;
v_isShared_637_ = v_isSharedCheck_666_;
goto v_resetjp_635_;
}
else
{
lean_inc(v_borrowedValues_634_);
lean_inc(v_varMap_633_);
lean_dec(v___x_632_);
v___x_636_ = lean_box(0);
v_isShared_637_ = v_isSharedCheck_666_;
goto v_resetjp_635_;
}
v___jp_621_:
{
lean_object* v___x_622_; lean_object* v___x_623_; 
v___x_622_ = lean_box(0);
v___x_623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_623_, 0, v___x_622_);
return v___x_623_;
}
v_resetjp_635_:
{
lean_object* v___y_639_; lean_object* v___x_661_; uint8_t v___x_662_; 
v___x_661_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_662_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2);
if (v___x_662_ == 0)
{
lean_dec_ref(v___f_631_);
v___y_639_ = v_varMap_633_;
goto v___jp_638_;
}
else
{
size_t v___x_663_; size_t v___x_664_; lean_object* v___x_665_; 
v___x_663_ = ((size_t)0ULL);
v___x_664_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_661_, v___f_631_, v___x_627_, v___x_663_, v___x_664_, v_varMap_633_);
v___y_639_ = v___x_665_;
goto v___jp_638_;
}
v___jp_638_:
{
lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_643_; 
v___x_640_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0);
lean_inc(v_fvarId_624_);
v___x_641_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_629_, v___x_630_, v___y_639_, v_fvarId_624_, v___x_640_);
if (v_isShared_637_ == 0)
{
lean_ctor_set(v___x_636_, 0, v___x_641_);
v___x_643_ = v___x_636_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_660_; 
v_reuseFailAlloc_660_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_660_, 0, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_660_, 1, v_borrowedValues_634_);
v___x_643_ = v_reuseFailAlloc_660_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
lean_object* v___x_644_; 
v___x_644_ = lean_st_ref_put(v___y_619_, v___x_643_);
if (v_borrow_626_ == 0)
{
lean_dec_ref(v_type_625_);
lean_dec(v_fvarId_624_);
goto v___jp_621_;
}
else
{
uint8_t v___x_645_; 
v___x_645_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_625_);
lean_dec_ref(v_type_625_);
if (v___x_645_ == 0)
{
lean_dec(v_fvarId_624_);
goto v___jp_621_;
}
else
{
lean_object* v___x_646_; lean_object* v_varMap_647_; lean_object* v_borrowedValues_648_; lean_object* v___x_650_; uint8_t v_isShared_651_; uint8_t v_isSharedCheck_659_; 
v___x_646_ = lean_st_ref_take(v___y_619_);
v_varMap_647_ = lean_ctor_get(v___x_646_, 0);
v_borrowedValues_648_ = lean_ctor_get(v___x_646_, 1);
v_isSharedCheck_659_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_659_ == 0)
{
v___x_650_ = v___x_646_;
v_isShared_651_ = v_isSharedCheck_659_;
goto v_resetjp_649_;
}
else
{
lean_inc(v_borrowedValues_648_);
lean_inc(v_varMap_647_);
lean_dec(v___x_646_);
v___x_650_ = lean_box(0);
v_isShared_651_ = v_isSharedCheck_659_;
goto v_resetjp_649_;
}
v_resetjp_649_:
{
lean_object* v___x_652_; lean_object* v___x_653_; lean_object* v___x_655_; 
v___x_652_ = lean_box(0);
v___x_653_ = l_Lean_FVarIdHashSet_insert(v_borrowedValues_648_, v_fvarId_624_);
if (v_isShared_651_ == 0)
{
lean_ctor_set(v___x_650_, 1, v___x_653_);
v___x_655_ = v___x_650_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_varMap_647_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v___x_653_);
v___x_655_ = v_reuseFailAlloc_658_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
lean_object* v___x_656_; lean_object* v___x_657_; 
v___x_656_ = lean_st_ref_put(v___y_619_, v___x_655_);
v___x_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_657_, 0, v___x_652_);
return v___x_657_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___boxed(lean_object* v_p_667_, lean_object* v___y_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(v_p_667_, v___y_668_);
lean_dec(v___y_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(lean_object* v_p_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_){
_start:
{
lean_object* v_fvarId_681_; lean_object* v_type_682_; uint8_t v_borrow_683_; lean_object* v___x_684_; lean_object* v___f_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___f_688_; lean_object* v___x_689_; lean_object* v_varMap_690_; lean_object* v_borrowedValues_691_; lean_object* v___x_693_; uint8_t v_isShared_694_; uint8_t v_isSharedCheck_723_; 
v_fvarId_681_ = lean_ctor_get(v_p_671_, 0);
lean_inc_n(v_fvarId_681_, 2);
v_type_682_ = lean_ctor_get(v_p_671_, 2);
lean_inc_ref(v_type_682_);
v_borrow_683_ = lean_ctor_get_uint8(v_p_671_, sizeof(void*)*3);
lean_dec_ref(v_p_671_);
v___x_684_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___f_685_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___lam__0), 2, 1);
lean_closure_set(v___f_685_, 0, v_fvarId_681_);
v___x_686_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_687_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___f_688_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___lam__1), 5, 3);
lean_closure_set(v___f_688_, 0, v___x_686_);
lean_closure_set(v___f_688_, 1, v___x_687_);
lean_closure_set(v___f_688_, 2, v___f_685_);
v___x_689_ = lean_st_ref_take(v___y_672_);
v_varMap_690_ = lean_ctor_get(v___x_689_, 0);
v_borrowedValues_691_ = lean_ctor_get(v___x_689_, 1);
v_isSharedCheck_723_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_723_ == 0)
{
v___x_693_ = v___x_689_;
v_isShared_694_ = v_isSharedCheck_723_;
goto v_resetjp_692_;
}
else
{
lean_inc(v_borrowedValues_691_);
lean_inc(v_varMap_690_);
lean_dec(v___x_689_);
v___x_693_ = lean_box(0);
v_isShared_694_ = v_isSharedCheck_723_;
goto v_resetjp_692_;
}
v___jp_678_:
{
lean_object* v___x_679_; lean_object* v___x_680_; 
v___x_679_ = lean_box(0);
v___x_680_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_680_, 0, v___x_679_);
return v___x_680_;
}
v_resetjp_692_:
{
lean_object* v___y_696_; lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_719_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2);
if (v___x_719_ == 0)
{
lean_dec_ref(v___f_688_);
v___y_696_ = v_varMap_690_;
goto v___jp_695_;
}
else
{
size_t v___x_720_; size_t v___x_721_; lean_object* v___x_722_; 
v___x_720_ = ((size_t)0ULL);
v___x_721_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
v___x_722_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_718_, v___f_688_, v___x_684_, v___x_720_, v___x_721_, v_varMap_690_);
v___y_696_ = v___x_722_;
goto v___jp_695_;
}
v___jp_695_:
{
lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_700_; 
v___x_697_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0);
lean_inc(v_fvarId_681_);
v___x_698_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v___x_686_, v___x_687_, v___y_696_, v_fvarId_681_, v___x_697_);
if (v_isShared_694_ == 0)
{
lean_ctor_set(v___x_693_, 0, v___x_698_);
v___x_700_ = v___x_693_;
goto v_reusejp_699_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v___x_698_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_borrowedValues_691_);
v___x_700_ = v_reuseFailAlloc_717_;
goto v_reusejp_699_;
}
v_reusejp_699_:
{
lean_object* v___x_701_; 
v___x_701_ = lean_st_ref_put(v___y_672_, v___x_700_);
if (v_borrow_683_ == 0)
{
lean_dec_ref(v_type_682_);
lean_dec(v_fvarId_681_);
goto v___jp_678_;
}
else
{
uint8_t v___x_702_; 
v___x_702_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_682_);
lean_dec_ref(v_type_682_);
if (v___x_702_ == 0)
{
lean_dec(v_fvarId_681_);
goto v___jp_678_;
}
else
{
lean_object* v___x_703_; lean_object* v_varMap_704_; lean_object* v_borrowedValues_705_; lean_object* v___x_707_; uint8_t v_isShared_708_; uint8_t v_isSharedCheck_716_; 
v___x_703_ = lean_st_ref_take(v___y_672_);
v_varMap_704_ = lean_ctor_get(v___x_703_, 0);
v_borrowedValues_705_ = lean_ctor_get(v___x_703_, 1);
v_isSharedCheck_716_ = !lean_is_exclusive(v___x_703_);
if (v_isSharedCheck_716_ == 0)
{
v___x_707_ = v___x_703_;
v_isShared_708_ = v_isSharedCheck_716_;
goto v_resetjp_706_;
}
else
{
lean_inc(v_borrowedValues_705_);
lean_inc(v_varMap_704_);
lean_dec(v___x_703_);
v___x_707_ = lean_box(0);
v_isShared_708_ = v_isSharedCheck_716_;
goto v_resetjp_706_;
}
v_resetjp_706_:
{
lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_712_; 
v___x_709_ = lean_box(0);
v___x_710_ = l_Lean_FVarIdHashSet_insert(v_borrowedValues_705_, v_fvarId_681_);
if (v_isShared_708_ == 0)
{
lean_ctor_set(v___x_707_, 1, v___x_710_);
v___x_712_ = v___x_707_;
goto v_reusejp_711_;
}
else
{
lean_object* v_reuseFailAlloc_715_; 
v_reuseFailAlloc_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_715_, 0, v_varMap_704_);
lean_ctor_set(v_reuseFailAlloc_715_, 1, v___x_710_);
v___x_712_ = v_reuseFailAlloc_715_;
goto v_reusejp_711_;
}
v_reusejp_711_:
{
lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_713_ = lean_st_ref_put(v___y_672_, v___x_712_);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_709_);
return v___x_714_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___boxed(lean_object* v_p_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(v_p_724_, v___y_725_, v___y_726_, v___y_727_, v___y_728_, v___y_729_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec(v___y_727_);
lean_dec_ref(v___y_726_);
lean_dec(v___y_725_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__2(lean_object* v_child_732_, lean_object* v_a_733_, lean_object* v_x_734_){
_start:
{
if (lean_obj_tag(v_x_734_) == 0)
{
lean_dec(v_a_733_);
return v_x_734_;
}
else
{
lean_object* v_key_735_; lean_object* v_value_736_; lean_object* v_tail_737_; lean_object* v___x_739_; uint8_t v_isShared_740_; uint8_t v_isSharedCheck_759_; 
v_key_735_ = lean_ctor_get(v_x_734_, 0);
v_value_736_ = lean_ctor_get(v_x_734_, 1);
v_tail_737_ = lean_ctor_get(v_x_734_, 2);
v_isSharedCheck_759_ = !lean_is_exclusive(v_x_734_);
if (v_isSharedCheck_759_ == 0)
{
v___x_739_ = v_x_734_;
v_isShared_740_ = v_isSharedCheck_759_;
goto v_resetjp_738_;
}
else
{
lean_inc(v_tail_737_);
lean_inc(v_value_736_);
lean_inc(v_key_735_);
lean_dec(v_x_734_);
v___x_739_ = lean_box(0);
v_isShared_740_ = v_isSharedCheck_759_;
goto v_resetjp_738_;
}
v_resetjp_738_:
{
uint8_t v___x_741_; 
v___x_741_ = l_Lean_instBEqFVarId_beq(v_key_735_, v_a_733_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; lean_object* v___x_744_; 
v___x_742_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__2(v_child_732_, v_a_733_, v_tail_737_);
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 2, v___x_742_);
v___x_744_ = v___x_739_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_key_735_);
lean_ctor_set(v_reuseFailAlloc_745_, 1, v_value_736_);
lean_ctor_set(v_reuseFailAlloc_745_, 2, v___x_742_);
v___x_744_ = v_reuseFailAlloc_745_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
return v___x_744_;
}
}
else
{
lean_object* v_parents_746_; lean_object* v_children_747_; lean_object* v___x_749_; uint8_t v_isShared_750_; uint8_t v_isSharedCheck_758_; 
lean_dec(v_key_735_);
v_parents_746_ = lean_ctor_get(v_value_736_, 0);
v_children_747_ = lean_ctor_get(v_value_736_, 1);
v_isSharedCheck_758_ = !lean_is_exclusive(v_value_736_);
if (v_isSharedCheck_758_ == 0)
{
v___x_749_ = v_value_736_;
v_isShared_750_ = v_isSharedCheck_758_;
goto v_resetjp_748_;
}
else
{
lean_inc(v_children_747_);
lean_inc(v_parents_746_);
lean_dec(v_value_736_);
v___x_749_ = lean_box(0);
v_isShared_750_ = v_isSharedCheck_758_;
goto v_resetjp_748_;
}
v_resetjp_748_:
{
lean_object* v___x_751_; lean_object* v___x_753_; 
v___x_751_ = l_Lean_FVarIdHashSet_erase(v_children_747_, v_child_732_);
if (v_isShared_750_ == 0)
{
lean_ctor_set(v___x_749_, 1, v___x_751_);
v___x_753_ = v___x_749_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_757_; 
v_reuseFailAlloc_757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_757_, 0, v_parents_746_);
lean_ctor_set(v_reuseFailAlloc_757_, 1, v___x_751_);
v___x_753_ = v_reuseFailAlloc_757_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
lean_object* v___x_755_; 
if (v_isShared_740_ == 0)
{
lean_ctor_set(v___x_739_, 1, v___x_753_);
lean_ctor_set(v___x_739_, 0, v_a_733_);
v___x_755_ = v___x_739_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v_a_733_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v___x_753_);
lean_ctor_set(v_reuseFailAlloc_756_, 2, v_tail_737_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__2___boxed(lean_object* v_child_760_, lean_object* v_a_761_, lean_object* v_x_762_){
_start:
{
lean_object* v_res_763_; 
v_res_763_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__2(v_child_760_, v_a_761_, v_x_762_);
lean_dec(v_child_760_);
return v_res_763_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1(lean_object* v_child_764_, lean_object* v_m_765_, lean_object* v_a_766_){
_start:
{
lean_object* v_size_767_; lean_object* v_buckets_768_; lean_object* v___x_769_; uint64_t v___x_770_; uint64_t v___x_771_; uint64_t v___x_772_; uint64_t v_fold_773_; uint64_t v___x_774_; uint64_t v___x_775_; uint64_t v___x_776_; size_t v___x_777_; size_t v___x_778_; size_t v___x_779_; size_t v___x_780_; size_t v___x_781_; lean_object* v_bucket_782_; uint8_t v___x_783_; 
v_size_767_ = lean_ctor_get(v_m_765_, 0);
v_buckets_768_ = lean_ctor_get(v_m_765_, 1);
v___x_769_ = lean_array_get_size(v_buckets_768_);
v___x_770_ = l_Lean_instHashableFVarId_hash(v_a_766_);
v___x_771_ = 32ULL;
v___x_772_ = lean_uint64_shift_right(v___x_770_, v___x_771_);
v_fold_773_ = lean_uint64_xor(v___x_770_, v___x_772_);
v___x_774_ = 16ULL;
v___x_775_ = lean_uint64_shift_right(v_fold_773_, v___x_774_);
v___x_776_ = lean_uint64_xor(v_fold_773_, v___x_775_);
v___x_777_ = lean_uint64_to_usize(v___x_776_);
v___x_778_ = lean_usize_of_nat(v___x_769_);
v___x_779_ = ((size_t)1ULL);
v___x_780_ = lean_usize_sub(v___x_778_, v___x_779_);
v___x_781_ = lean_usize_land(v___x_777_, v___x_780_);
v_bucket_782_ = lean_array_uget_borrowed(v_buckets_768_, v___x_781_);
v___x_783_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_766_, v_bucket_782_);
if (v___x_783_ == 0)
{
lean_dec(v_a_766_);
return v_m_765_;
}
else
{
lean_object* v___x_785_; uint8_t v_isShared_786_; uint8_t v_isSharedCheck_794_; 
lean_inc(v_bucket_782_);
lean_inc_ref(v_buckets_768_);
lean_inc(v_size_767_);
v_isSharedCheck_794_ = !lean_is_exclusive(v_m_765_);
if (v_isSharedCheck_794_ == 0)
{
lean_object* v_unused_795_; lean_object* v_unused_796_; 
v_unused_795_ = lean_ctor_get(v_m_765_, 1);
lean_dec(v_unused_795_);
v_unused_796_ = lean_ctor_get(v_m_765_, 0);
lean_dec(v_unused_796_);
v___x_785_ = v_m_765_;
v_isShared_786_ = v_isSharedCheck_794_;
goto v_resetjp_784_;
}
else
{
lean_dec(v_m_765_);
v___x_785_ = lean_box(0);
v_isShared_786_ = v_isSharedCheck_794_;
goto v_resetjp_784_;
}
v_resetjp_784_:
{
lean_object* v___x_787_; lean_object* v_buckets_788_; lean_object* v_bucket_789_; lean_object* v___x_790_; lean_object* v___x_792_; 
v___x_787_ = lean_box(0);
v_buckets_788_ = lean_array_uset(v_buckets_768_, v___x_781_, v___x_787_);
v_bucket_789_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1_spec__2(v_child_764_, v_a_766_, v_bucket_782_);
v___x_790_ = lean_array_uset(v_buckets_788_, v___x_781_, v_bucket_789_);
if (v_isShared_786_ == 0)
{
lean_ctor_set(v___x_785_, 1, v___x_790_);
v___x_792_ = v___x_785_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_793_; 
v_reuseFailAlloc_793_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_793_, 0, v_size_767_);
lean_ctor_set(v_reuseFailAlloc_793_, 1, v___x_790_);
v___x_792_ = v_reuseFailAlloc_793_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
return v___x_792_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1___boxed(lean_object* v_child_797_, lean_object* v_m_798_, lean_object* v_a_799_){
_start:
{
lean_object* v_res_800_; 
v_res_800_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1(v_child_797_, v_m_798_, v_a_799_);
lean_dec(v_child_797_);
return v_res_800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg(lean_object* v_child_801_, lean_object* v_as_802_, size_t v_sz_803_, size_t v_i_804_, lean_object* v_b_805_, lean_object* v___y_806_){
_start:
{
uint8_t v___x_808_; 
v___x_808_ = lean_usize_dec_lt(v_i_804_, v_sz_803_);
if (v___x_808_ == 0)
{
lean_object* v___x_809_; 
v___x_809_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_809_, 0, v_b_805_);
return v___x_809_;
}
else
{
lean_object* v___x_810_; lean_object* v_a_811_; lean_object* v___x_812_; lean_object* v_varMap_813_; lean_object* v_borrowedValues_814_; lean_object* v___x_816_; uint8_t v_isShared_817_; uint8_t v_isSharedCheck_826_; 
v___x_810_ = lean_box(0);
v_a_811_ = lean_array_uget_borrowed(v_as_802_, v_i_804_);
v___x_812_ = lean_st_ref_take(v___y_806_);
v_varMap_813_ = lean_ctor_get(v___x_812_, 0);
v_borrowedValues_814_ = lean_ctor_get(v___x_812_, 1);
v_isSharedCheck_826_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_826_ == 0)
{
v___x_816_ = v___x_812_;
v_isShared_817_ = v_isSharedCheck_826_;
goto v_resetjp_815_;
}
else
{
lean_inc(v_borrowedValues_814_);
lean_inc(v_varMap_813_);
lean_dec(v___x_812_);
v___x_816_ = lean_box(0);
v_isShared_817_ = v_isSharedCheck_826_;
goto v_resetjp_815_;
}
v_resetjp_815_:
{
lean_object* v___x_818_; lean_object* v___x_820_; 
lean_inc(v_a_811_);
v___x_818_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__1(v_child_801_, v_varMap_813_, v_a_811_);
if (v_isShared_817_ == 0)
{
lean_ctor_set(v___x_816_, 0, v___x_818_);
v___x_820_ = v___x_816_;
goto v_reusejp_819_;
}
else
{
lean_object* v_reuseFailAlloc_825_; 
v_reuseFailAlloc_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_825_, 0, v___x_818_);
lean_ctor_set(v_reuseFailAlloc_825_, 1, v_borrowedValues_814_);
v___x_820_ = v_reuseFailAlloc_825_;
goto v_reusejp_819_;
}
v_reusejp_819_:
{
lean_object* v___x_821_; size_t v___x_822_; size_t v___x_823_; 
v___x_821_ = lean_st_ref_put(v___y_806_, v___x_820_);
v___x_822_ = ((size_t)1ULL);
v___x_823_ = lean_usize_add(v_i_804_, v___x_822_);
v_i_804_ = v___x_823_;
v_b_805_ = v___x_810_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg___boxed(lean_object* v_child_827_, lean_object* v_as_828_, lean_object* v_sz_829_, lean_object* v_i_830_, lean_object* v_b_831_, lean_object* v___y_832_, lean_object* v___y_833_){
_start:
{
size_t v_sz_boxed_834_; size_t v_i_boxed_835_; lean_object* v_res_836_; 
v_sz_boxed_834_ = lean_unbox_usize(v_sz_829_);
lean_dec(v_sz_829_);
v_i_boxed_835_ = lean_unbox_usize(v_i_830_);
lean_dec(v_i_830_);
v_res_836_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg(v_child_827_, v_as_828_, v_sz_boxed_834_, v_i_boxed_835_, v_b_831_, v___y_832_);
lean_dec(v___y_832_);
lean_dec_ref(v_as_828_);
lean_dec(v_child_827_);
return v_res_836_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(lean_object* v_a_837_, lean_object* v_x_838_){
_start:
{
if (lean_obj_tag(v_x_838_) == 0)
{
lean_object* v___x_839_; 
v___x_839_ = lean_box(0);
return v___x_839_;
}
else
{
lean_object* v_key_840_; lean_object* v_value_841_; lean_object* v_tail_842_; uint8_t v___x_843_; 
v_key_840_ = lean_ctor_get(v_x_838_, 0);
v_value_841_ = lean_ctor_get(v_x_838_, 1);
v_tail_842_ = lean_ctor_get(v_x_838_, 2);
v___x_843_ = l_Lean_instBEqFVarId_beq(v_key_840_, v_a_837_);
if (v___x_843_ == 0)
{
v_x_838_ = v_tail_842_;
goto _start;
}
else
{
lean_object* v___x_845_; 
lean_inc(v_value_841_);
v___x_845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_845_, 0, v_value_841_);
return v___x_845_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg___boxed(lean_object* v_a_846_, lean_object* v_x_847_){
_start:
{
lean_object* v_res_848_; 
v_res_848_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_846_, v_x_847_);
lean_dec(v_x_847_);
lean_dec(v_a_846_);
return v_res_848_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(lean_object* v_m_849_, lean_object* v_a_850_){
_start:
{
lean_object* v_buckets_851_; lean_object* v___x_852_; uint64_t v___x_853_; uint64_t v___x_854_; uint64_t v___x_855_; uint64_t v_fold_856_; uint64_t v___x_857_; uint64_t v___x_858_; uint64_t v___x_859_; size_t v___x_860_; size_t v___x_861_; size_t v___x_862_; size_t v___x_863_; size_t v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_buckets_851_ = lean_ctor_get(v_m_849_, 1);
v___x_852_ = lean_array_get_size(v_buckets_851_);
v___x_853_ = l_Lean_instHashableFVarId_hash(v_a_850_);
v___x_854_ = 32ULL;
v___x_855_ = lean_uint64_shift_right(v___x_853_, v___x_854_);
v_fold_856_ = lean_uint64_xor(v___x_853_, v___x_855_);
v___x_857_ = 16ULL;
v___x_858_ = lean_uint64_shift_right(v_fold_856_, v___x_857_);
v___x_859_ = lean_uint64_xor(v_fold_856_, v___x_858_);
v___x_860_ = lean_uint64_to_usize(v___x_859_);
v___x_861_ = lean_usize_of_nat(v___x_852_);
v___x_862_ = ((size_t)1ULL);
v___x_863_ = lean_usize_sub(v___x_861_, v___x_862_);
v___x_864_ = lean_usize_land(v___x_860_, v___x_863_);
v___x_865_ = lean_array_uget_borrowed(v_buckets_851_, v___x_864_);
v___x_866_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_850_, v___x_865_);
return v___x_866_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg___boxed(lean_object* v_m_867_, lean_object* v_a_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_m_867_, v_a_868_);
lean_dec(v_a_868_);
lean_dec_ref(v_m_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(lean_object* v_child_870_, lean_object* v___y_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_){
_start:
{
lean_object* v___x_877_; lean_object* v_varMap_878_; lean_object* v___x_879_; 
v___x_877_ = lean_st_ref_get(v___y_871_);
v_varMap_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc_ref(v_varMap_878_);
lean_dec(v___x_877_);
v___x_879_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_varMap_878_, v_child_870_);
lean_dec_ref(v_varMap_878_);
if (lean_obj_tag(v___x_879_) == 1)
{
lean_object* v_val_880_; lean_object* v_parents_881_; lean_object* v___x_882_; size_t v_sz_883_; size_t v___x_884_; lean_object* v___x_885_; 
v_val_880_ = lean_ctor_get(v___x_879_, 0);
lean_inc(v_val_880_);
lean_dec_ref_known(v___x_879_, 1);
v_parents_881_ = lean_ctor_get(v_val_880_, 0);
lean_inc_ref(v_parents_881_);
lean_dec(v_val_880_);
v___x_882_ = lean_box(0);
v_sz_883_ = lean_array_size(v_parents_881_);
v___x_884_ = ((size_t)0ULL);
v___x_885_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg(v_child_870_, v_parents_881_, v_sz_883_, v___x_884_, v___x_882_, v___y_871_);
lean_dec_ref(v_parents_881_);
if (lean_obj_tag(v___x_885_) == 0)
{
lean_object* v___x_887_; uint8_t v_isShared_888_; uint8_t v_isSharedCheck_892_; 
v_isSharedCheck_892_ = !lean_is_exclusive(v___x_885_);
if (v_isSharedCheck_892_ == 0)
{
lean_object* v_unused_893_; 
v_unused_893_ = lean_ctor_get(v___x_885_, 0);
lean_dec(v_unused_893_);
v___x_887_ = v___x_885_;
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
else
{
lean_dec(v___x_885_);
v___x_887_ = lean_box(0);
v_isShared_888_ = v_isSharedCheck_892_;
goto v_resetjp_886_;
}
v_resetjp_886_:
{
lean_object* v___x_890_; 
if (v_isShared_888_ == 0)
{
lean_ctor_set(v___x_887_, 0, v___x_882_);
v___x_890_ = v___x_887_;
goto v_reusejp_889_;
}
else
{
lean_object* v_reuseFailAlloc_891_; 
v_reuseFailAlloc_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_891_, 0, v___x_882_);
v___x_890_ = v_reuseFailAlloc_891_;
goto v_reusejp_889_;
}
v_reusejp_889_:
{
return v___x_890_;
}
}
}
else
{
return v___x_885_;
}
}
else
{
lean_object* v___x_894_; lean_object* v___x_895_; 
lean_dec(v___x_879_);
v___x_894_ = lean_box(0);
v___x_895_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_895_, 0, v___x_894_);
return v___x_895_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents___boxed(lean_object* v_child_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(v_child_896_, v___y_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
lean_dec(v___y_901_);
lean_dec_ref(v___y_900_);
lean_dec(v___y_899_);
lean_dec_ref(v___y_898_);
lean_dec(v___y_897_);
lean_dec(v_child_896_);
return v_res_903_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0(lean_object* v_00_u03b2_904_, lean_object* v_m_905_, lean_object* v_a_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_m_905_, v_a_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___boxed(lean_object* v_00_u03b2_908_, lean_object* v_m_909_, lean_object* v_a_910_){
_start:
{
lean_object* v_res_911_; 
v_res_911_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0(v_00_u03b2_908_, v_m_909_, v_a_910_);
lean_dec(v_a_910_);
lean_dec_ref(v_m_909_);
return v_res_911_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2(lean_object* v_child_912_, lean_object* v_as_913_, size_t v_sz_914_, size_t v_i_915_, lean_object* v_b_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg(v_child_912_, v_as_913_, v_sz_914_, v_i_915_, v_b_916_, v___y_917_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___boxed(lean_object* v_child_924_, lean_object* v_as_925_, lean_object* v_sz_926_, lean_object* v_i_927_, lean_object* v_b_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_){
_start:
{
size_t v_sz_boxed_935_; size_t v_i_boxed_936_; lean_object* v_res_937_; 
v_sz_boxed_935_ = lean_unbox_usize(v_sz_926_);
lean_dec(v_sz_926_);
v_i_boxed_936_ = lean_unbox_usize(v_i_927_);
lean_dec(v_i_927_);
v_res_937_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2(v_child_924_, v_as_925_, v_sz_boxed_935_, v_i_boxed_936_, v_b_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v_as_925_);
lean_dec(v_child_924_);
return v_res_937_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0(lean_object* v_00_u03b2_938_, lean_object* v_a_939_, lean_object* v_x_940_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___redArg(v_a_939_, v_x_940_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0___boxed(lean_object* v_00_u03b2_942_, lean_object* v_a_943_, lean_object* v_x_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0_spec__0(v_00_u03b2_942_, v_a_943_, v_x_944_);
lean_dec(v_x_944_);
lean_dec(v_a_943_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(lean_object* v_alt_946_, lean_object* v_f_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_){
_start:
{
switch(lean_obj_tag(v_alt_946_))
{
case 0:
{
lean_object* v_code_954_; lean_object* v___x_955_; 
v_code_954_ = lean_ctor_get(v_alt_946_, 2);
lean_inc_ref(v_code_954_);
lean_dec_ref_known(v_alt_946_, 3);
lean_inc(v___y_952_);
lean_inc_ref(v___y_951_);
lean_inc(v___y_950_);
lean_inc_ref(v___y_949_);
lean_inc(v___y_948_);
v___x_955_ = lean_apply_7(v_f_947_, v_code_954_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, lean_box(0));
return v___x_955_;
}
case 1:
{
lean_object* v_code_956_; lean_object* v___x_957_; 
v_code_956_ = lean_ctor_get(v_alt_946_, 1);
lean_inc_ref(v_code_956_);
lean_dec_ref_known(v_alt_946_, 2);
lean_inc(v___y_952_);
lean_inc_ref(v___y_951_);
lean_inc(v___y_950_);
lean_inc_ref(v___y_949_);
lean_inc(v___y_948_);
v___x_957_ = lean_apply_7(v_f_947_, v_code_956_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, lean_box(0));
return v___x_957_;
}
default: 
{
lean_object* v_code_958_; lean_object* v___x_959_; 
v_code_958_ = lean_ctor_get(v_alt_946_, 0);
lean_inc_ref(v_code_958_);
lean_dec_ref_known(v_alt_946_, 1);
lean_inc(v___y_952_);
lean_inc_ref(v___y_951_);
lean_inc(v___y_950_);
lean_inc_ref(v___y_949_);
lean_inc(v___y_948_);
v___x_959_ = lean_apply_7(v_f_947_, v_code_958_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, lean_box(0));
return v___x_959_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg___boxed(lean_object* v_alt_960_, lean_object* v_f_961_, lean_object* v___y_962_, lean_object* v___y_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_res_968_; 
v_res_968_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_alt_960_, v_f_961_, v___y_962_, v___y_963_, v___y_964_, v___y_965_, v___y_966_);
lean_dec(v___y_966_);
lean_dec_ref(v___y_965_);
lean_dec(v___y_964_);
lean_dec_ref(v___y_963_);
lean_dec(v___y_962_);
return v_res_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0(uint8_t v_pu_969_, lean_object* v_alt_970_, lean_object* v_f_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
lean_object* v___x_978_; 
v___x_978_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v_alt_970_, v_f_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_, v___y_976_);
return v___x_978_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___boxed(lean_object* v_pu_979_, lean_object* v_alt_980_, lean_object* v_f_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_){
_start:
{
uint8_t v_pu_boxed_988_; lean_object* v_res_989_; 
v_pu_boxed_988_ = lean_unbox(v_pu_979_);
v_res_989_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0(v_pu_boxed_988_, v_alt_980_, v_f_981_, v___y_982_, v___y_983_, v___y_984_, v___y_985_, v___y_986_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
return v_res_989_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(lean_object* v_msg_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_, lean_object* v___y_1004_, lean_object* v___y_1005_){
_start:
{
lean_object* v___f_1007_; lean_object* v___f_1008_; lean_object* v___f_1009_; lean_object* v___f_1010_; lean_object* v___f_1011_; lean_object* v___f_1012_; lean_object* v___f_1013_; lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; lean_object* v_toApplicative_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1081_; 
v___f_1007_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0));
v___f_1008_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1));
v___f_1009_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2));
v___f_1010_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3));
v___f_1011_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4));
v___f_1012_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_1012_, 0, v___f_1011_);
lean_closure_set(v___f_1012_, 1, v___f_1010_);
v___f_1013_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_1013_, 0, v___f_1010_);
v___f_1014_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__5));
v___x_1015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1015_, 0, v___f_1007_);
lean_ctor_set(v___x_1015_, 1, v___f_1008_);
v___x_1016_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1016_, 0, v___x_1015_);
lean_ctor_set(v___x_1016_, 1, v___f_1009_);
lean_ctor_set(v___x_1016_, 2, v___f_1012_);
lean_ctor_set(v___x_1016_, 3, v___f_1013_);
lean_ctor_set(v___x_1016_, 4, v___f_1014_);
v___x_1017_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1017_, 0, v___x_1016_);
lean_ctor_set(v___x_1017_, 1, v___f_1010_);
v___x_1018_ = l_StateRefT_x27_instMonad___redArg(v___x_1017_);
v_toApplicative_1019_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1081_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1081_ == 0)
{
lean_object* v_unused_1082_; 
v_unused_1082_ = lean_ctor_get(v___x_1018_, 1);
lean_dec(v_unused_1082_);
v___x_1021_ = v___x_1018_;
v_isShared_1022_ = v_isSharedCheck_1081_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_toApplicative_1019_);
lean_dec(v___x_1018_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1081_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v_toFunctor_1023_; lean_object* v_toSeq_1024_; lean_object* v_toSeqLeft_1025_; lean_object* v_toSeqRight_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1079_; 
v_toFunctor_1023_ = lean_ctor_get(v_toApplicative_1019_, 0);
v_toSeq_1024_ = lean_ctor_get(v_toApplicative_1019_, 2);
v_toSeqLeft_1025_ = lean_ctor_get(v_toApplicative_1019_, 3);
v_toSeqRight_1026_ = lean_ctor_get(v_toApplicative_1019_, 4);
v_isSharedCheck_1079_ = !lean_is_exclusive(v_toApplicative_1019_);
if (v_isSharedCheck_1079_ == 0)
{
lean_object* v_unused_1080_; 
v_unused_1080_ = lean_ctor_get(v_toApplicative_1019_, 1);
lean_dec(v_unused_1080_);
v___x_1028_ = v_toApplicative_1019_;
v_isShared_1029_ = v_isSharedCheck_1079_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_toSeqRight_1026_);
lean_inc(v_toSeqLeft_1025_);
lean_inc(v_toSeq_1024_);
lean_inc(v_toFunctor_1023_);
lean_dec(v_toApplicative_1019_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1079_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___f_1030_; lean_object* v___f_1031_; lean_object* v___f_1032_; lean_object* v___f_1033_; lean_object* v___x_1034_; lean_object* v___f_1035_; lean_object* v___f_1036_; lean_object* v___f_1037_; lean_object* v___x_1039_; 
v___f_1030_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__6));
v___f_1031_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__7));
lean_inc_ref(v_toFunctor_1023_);
v___f_1032_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1032_, 0, v_toFunctor_1023_);
v___f_1033_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1033_, 0, v_toFunctor_1023_);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v___f_1032_);
lean_ctor_set(v___x_1034_, 1, v___f_1033_);
v___f_1035_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1035_, 0, v_toSeqRight_1026_);
v___f_1036_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1036_, 0, v_toSeqLeft_1025_);
v___f_1037_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1037_, 0, v_toSeq_1024_);
if (v_isShared_1029_ == 0)
{
lean_ctor_set(v___x_1028_, 4, v___f_1035_);
lean_ctor_set(v___x_1028_, 3, v___f_1036_);
lean_ctor_set(v___x_1028_, 2, v___f_1037_);
lean_ctor_set(v___x_1028_, 1, v___f_1030_);
lean_ctor_set(v___x_1028_, 0, v___x_1034_);
v___x_1039_ = v___x_1028_;
goto v_reusejp_1038_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v___x_1034_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___f_1030_);
lean_ctor_set(v_reuseFailAlloc_1078_, 2, v___f_1037_);
lean_ctor_set(v_reuseFailAlloc_1078_, 3, v___f_1036_);
lean_ctor_set(v_reuseFailAlloc_1078_, 4, v___f_1035_);
v___x_1039_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1038_;
}
v_reusejp_1038_:
{
lean_object* v___x_1041_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 1, v___f_1031_);
lean_ctor_set(v___x_1021_, 0, v___x_1039_);
v___x_1041_ = v___x_1021_;
goto v_reusejp_1040_;
}
else
{
lean_object* v_reuseFailAlloc_1077_; 
v_reuseFailAlloc_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1077_, 0, v___x_1039_);
lean_ctor_set(v_reuseFailAlloc_1077_, 1, v___f_1031_);
v___x_1041_ = v_reuseFailAlloc_1077_;
goto v_reusejp_1040_;
}
v_reusejp_1040_:
{
lean_object* v___x_1042_; lean_object* v_toApplicative_1043_; lean_object* v___x_1045_; uint8_t v_isShared_1046_; uint8_t v_isSharedCheck_1075_; 
v___x_1042_ = l_StateRefT_x27_instMonad___redArg(v___x_1041_);
v_toApplicative_1043_ = lean_ctor_get(v___x_1042_, 0);
v_isSharedCheck_1075_ = !lean_is_exclusive(v___x_1042_);
if (v_isSharedCheck_1075_ == 0)
{
lean_object* v_unused_1076_; 
v_unused_1076_ = lean_ctor_get(v___x_1042_, 1);
lean_dec(v_unused_1076_);
v___x_1045_ = v___x_1042_;
v_isShared_1046_ = v_isSharedCheck_1075_;
goto v_resetjp_1044_;
}
else
{
lean_inc(v_toApplicative_1043_);
lean_dec(v___x_1042_);
v___x_1045_ = lean_box(0);
v_isShared_1046_ = v_isSharedCheck_1075_;
goto v_resetjp_1044_;
}
v_resetjp_1044_:
{
lean_object* v_toFunctor_1047_; lean_object* v_toSeq_1048_; lean_object* v_toSeqLeft_1049_; lean_object* v_toSeqRight_1050_; lean_object* v___x_1052_; uint8_t v_isShared_1053_; uint8_t v_isSharedCheck_1073_; 
v_toFunctor_1047_ = lean_ctor_get(v_toApplicative_1043_, 0);
v_toSeq_1048_ = lean_ctor_get(v_toApplicative_1043_, 2);
v_toSeqLeft_1049_ = lean_ctor_get(v_toApplicative_1043_, 3);
v_toSeqRight_1050_ = lean_ctor_get(v_toApplicative_1043_, 4);
v_isSharedCheck_1073_ = !lean_is_exclusive(v_toApplicative_1043_);
if (v_isSharedCheck_1073_ == 0)
{
lean_object* v_unused_1074_; 
v_unused_1074_ = lean_ctor_get(v_toApplicative_1043_, 1);
lean_dec(v_unused_1074_);
v___x_1052_ = v_toApplicative_1043_;
v_isShared_1053_ = v_isSharedCheck_1073_;
goto v_resetjp_1051_;
}
else
{
lean_inc(v_toSeqRight_1050_);
lean_inc(v_toSeqLeft_1049_);
lean_inc(v_toSeq_1048_);
lean_inc(v_toFunctor_1047_);
lean_dec(v_toApplicative_1043_);
v___x_1052_ = lean_box(0);
v_isShared_1053_ = v_isSharedCheck_1073_;
goto v_resetjp_1051_;
}
v_resetjp_1051_:
{
lean_object* v___f_1054_; lean_object* v___f_1055_; lean_object* v___f_1056_; lean_object* v___f_1057_; lean_object* v___x_1058_; lean_object* v___f_1059_; lean_object* v___f_1060_; lean_object* v___f_1061_; lean_object* v___x_1063_; 
v___f_1054_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__8));
v___f_1055_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__9));
lean_inc_ref(v_toFunctor_1047_);
v___f_1056_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1056_, 0, v_toFunctor_1047_);
v___f_1057_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1057_, 0, v_toFunctor_1047_);
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___f_1056_);
lean_ctor_set(v___x_1058_, 1, v___f_1057_);
v___f_1059_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_1059_, 0, v_toSeqRight_1050_);
v___f_1060_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_1060_, 0, v_toSeqLeft_1049_);
v___f_1061_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_1061_, 0, v_toSeq_1048_);
if (v_isShared_1053_ == 0)
{
lean_ctor_set(v___x_1052_, 4, v___f_1059_);
lean_ctor_set(v___x_1052_, 3, v___f_1060_);
lean_ctor_set(v___x_1052_, 2, v___f_1061_);
lean_ctor_set(v___x_1052_, 1, v___f_1054_);
lean_ctor_set(v___x_1052_, 0, v___x_1058_);
v___x_1063_ = v___x_1052_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1072_; 
v_reuseFailAlloc_1072_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1072_, 0, v___x_1058_);
lean_ctor_set(v_reuseFailAlloc_1072_, 1, v___f_1054_);
lean_ctor_set(v_reuseFailAlloc_1072_, 2, v___f_1061_);
lean_ctor_set(v_reuseFailAlloc_1072_, 3, v___f_1060_);
lean_ctor_set(v_reuseFailAlloc_1072_, 4, v___f_1059_);
v___x_1063_ = v_reuseFailAlloc_1072_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
lean_object* v___x_1065_; 
if (v_isShared_1046_ == 0)
{
lean_ctor_set(v___x_1045_, 1, v___f_1055_);
lean_ctor_set(v___x_1045_, 0, v___x_1063_);
v___x_1065_ = v___x_1045_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1071_; 
v_reuseFailAlloc_1071_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1071_, 0, v___x_1063_);
lean_ctor_set(v_reuseFailAlloc_1071_, 1, v___f_1055_);
v___x_1065_ = v_reuseFailAlloc_1071_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_4934__overap_1069_; lean_object* v___x_1070_; 
v___x_1066_ = l_StateRefT_x27_instMonad___redArg(v___x_1065_);
v___x_1067_ = lean_box(0);
v___x_1068_ = l_instInhabitedOfMonad___redArg(v___x_1066_, v___x_1067_);
v___x_4934__overap_1069_ = lean_panic_fn_borrowed(v___x_1068_, v_msg_1000_);
lean_dec(v___x_1068_);
lean_inc(v___y_1005_);
lean_inc_ref(v___y_1004_);
lean_inc(v___y_1003_);
lean_inc_ref(v___y_1002_);
lean_inc(v___y_1001_);
v___x_1070_ = lean_apply_6(v___x_4934__overap_1069_, v___y_1001_, v___y_1002_, v___y_1003_, v___y_1004_, v___y_1005_, lean_box(0));
return v___x_1070_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___boxed(lean_object* v_msg_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_){
_start:
{
lean_object* v_res_1090_; 
v_res_1090_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_msg_1083_, v___y_1084_, v___y_1085_, v___y_1086_, v___y_1087_, v___y_1088_);
lean_dec(v___y_1088_);
lean_dec_ref(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec_ref(v___y_1085_);
lean_dec(v___y_1084_);
return v_res_1090_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(lean_object* v_as_1091_, size_t v_i_1092_, size_t v_stop_1093_, lean_object* v_b_1094_, lean_object* v___y_1095_){
_start:
{
lean_object* v_a_1098_; uint8_t v___x_1104_; 
v___x_1104_ = lean_usize_dec_eq(v_i_1092_, v_stop_1093_);
if (v___x_1104_ == 0)
{
lean_object* v___x_1105_; lean_object* v_fvarId_1106_; lean_object* v_type_1107_; uint8_t v_borrow_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v_varMap_1111_; lean_object* v_borrowedValues_1112_; lean_object* v___x_1114_; uint8_t v_isShared_1115_; uint8_t v_isSharedCheck_1142_; 
v___x_1105_ = lean_array_uget_borrowed(v_as_1091_, v_i_1092_);
v_fvarId_1106_ = lean_ctor_get(v___x_1105_, 0);
v_type_1107_ = lean_ctor_get(v___x_1105_, 2);
v_borrow_1108_ = lean_ctor_get_uint8(v___x_1105_, sizeof(void*)*3);
v___x_1109_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_1110_ = lean_st_ref_take(v___y_1095_);
v_varMap_1111_ = lean_ctor_get(v___x_1110_, 0);
v_borrowedValues_1112_ = lean_ctor_get(v___x_1110_, 1);
v_isSharedCheck_1142_ = !lean_is_exclusive(v___x_1110_);
if (v_isSharedCheck_1142_ == 0)
{
v___x_1114_ = v___x_1110_;
v_isShared_1115_ = v_isSharedCheck_1142_;
goto v_resetjp_1113_;
}
else
{
lean_inc(v_borrowedValues_1112_);
lean_inc(v_varMap_1111_);
lean_dec(v___x_1110_);
v___x_1114_ = lean_box(0);
v_isShared_1115_ = v_isSharedCheck_1142_;
goto v_resetjp_1113_;
}
v_resetjp_1113_:
{
lean_object* v___y_1117_; uint8_t v___x_1138_; 
v___x_1138_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2);
if (v___x_1138_ == 0)
{
v___y_1117_ = v_varMap_1111_;
goto v___jp_1116_;
}
else
{
size_t v___x_1139_; size_t v___x_1140_; lean_object* v___x_1141_; 
v___x_1139_ = ((size_t)0ULL);
v___x_1140_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
lean_inc(v_fvarId_1106_);
v___x_1141_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2(v_fvarId_1106_, v___x_1109_, v___x_1139_, v___x_1140_, v_varMap_1111_);
v___y_1117_ = v___x_1141_;
goto v___jp_1116_;
}
v___jp_1116_:
{
lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1121_; 
v___x_1118_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0);
lean_inc(v_fvarId_1106_);
v___x_1119_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(v___y_1117_, v_fvarId_1106_, v___x_1118_);
if (v_isShared_1115_ == 0)
{
lean_ctor_set(v___x_1114_, 0, v___x_1119_);
v___x_1121_ = v___x_1114_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1119_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_borrowedValues_1112_);
v___x_1121_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
lean_object* v___x_1122_; 
v___x_1122_ = lean_st_ref_put(v___y_1095_, v___x_1121_);
if (v_borrow_1108_ == 0)
{
goto v___jp_1102_;
}
else
{
uint8_t v___x_1123_; 
v___x_1123_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1107_);
if (v___x_1123_ == 0)
{
goto v___jp_1102_;
}
else
{
lean_object* v___x_1124_; lean_object* v_varMap_1125_; lean_object* v_borrowedValues_1126_; lean_object* v___x_1128_; uint8_t v_isShared_1129_; uint8_t v_isSharedCheck_1136_; 
v___x_1124_ = lean_st_ref_take(v___y_1095_);
v_varMap_1125_ = lean_ctor_get(v___x_1124_, 0);
v_borrowedValues_1126_ = lean_ctor_get(v___x_1124_, 1);
v_isSharedCheck_1136_ = !lean_is_exclusive(v___x_1124_);
if (v_isSharedCheck_1136_ == 0)
{
v___x_1128_ = v___x_1124_;
v_isShared_1129_ = v_isSharedCheck_1136_;
goto v_resetjp_1127_;
}
else
{
lean_inc(v_borrowedValues_1126_);
lean_inc(v_varMap_1125_);
lean_dec(v___x_1124_);
v___x_1128_ = lean_box(0);
v_isShared_1129_ = v_isSharedCheck_1136_;
goto v_resetjp_1127_;
}
v_resetjp_1127_:
{
lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1133_; 
v___x_1130_ = lean_box(0);
lean_inc(v_fvarId_1106_);
v___x_1131_ = l_Lean_FVarIdHashSet_insert(v_borrowedValues_1126_, v_fvarId_1106_);
if (v_isShared_1129_ == 0)
{
lean_ctor_set(v___x_1128_, 1, v___x_1131_);
v___x_1133_ = v___x_1128_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v_varMap_1125_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1131_);
v___x_1133_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
lean_object* v___x_1134_; 
v___x_1134_ = lean_st_ref_put(v___y_1095_, v___x_1133_);
v_a_1098_ = v___x_1130_;
goto v___jp_1097_;
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
lean_object* v___x_1143_; 
v___x_1143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1143_, 0, v_b_1094_);
return v___x_1143_;
}
v___jp_1097_:
{
size_t v___x_1099_; size_t v___x_1100_; 
v___x_1099_ = ((size_t)1ULL);
v___x_1100_ = lean_usize_add(v_i_1092_, v___x_1099_);
v_i_1092_ = v___x_1100_;
v_b_1094_ = v_a_1098_;
goto _start;
}
v___jp_1102_:
{
lean_object* v___x_1103_; 
v___x_1103_ = lean_box(0);
v_a_1098_ = v___x_1103_;
goto v___jp_1097_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg___boxed(lean_object* v_as_1144_, lean_object* v_i_1145_, lean_object* v_stop_1146_, lean_object* v_b_1147_, lean_object* v___y_1148_, lean_object* v___y_1149_){
_start:
{
size_t v_i_boxed_1150_; size_t v_stop_boxed_1151_; lean_object* v_res_1152_; 
v_i_boxed_1150_ = lean_unbox_usize(v_i_1145_);
lean_dec(v_i_1145_);
v_stop_boxed_1151_ = lean_unbox_usize(v_stop_1146_);
lean_dec(v_stop_1146_);
v_res_1152_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_as_1144_, v_i_boxed_1150_, v_stop_boxed_1151_, v_b_1147_, v___y_1148_);
lean_dec(v___y_1148_);
lean_dec_ref(v_as_1144_);
return v_res_1152_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7(void){
_start:
{
lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; 
v___x_1160_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_1161_ = lean_unsigned_to_nat(59u);
v___x_1162_ = lean_unsigned_to_nat(150u);
v___x_1163_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5));
v___x_1164_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_1165_ = l_mkPanicMessageWithDecl(v___x_1164_, v___x_1163_, v___x_1162_, v___x_1161_, v___x_1160_);
return v___x_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(lean_object* v_code_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_){
_start:
{
switch(lean_obj_tag(v_code_1166_))
{
case 0:
{
lean_object* v_decl_1173_; lean_object* v_k_1174_; lean_object* v_fvarId_1175_; lean_object* v_value_1176_; lean_object* v___y_1178_; lean_object* v___y_1179_; lean_object* v___y_1180_; lean_object* v___y_1181_; lean_object* v___y_1182_; lean_object* v_args_1187_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v_parents_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; 
v_decl_1173_ = lean_ctor_get(v_code_1166_, 0);
lean_inc_ref(v_decl_1173_);
v_k_1174_ = lean_ctor_get(v_code_1166_, 1);
lean_inc_ref(v_k_1174_);
lean_dec_ref_known(v_code_1166_, 2);
v_fvarId_1175_ = lean_ctor_get(v_decl_1173_, 0);
lean_inc(v_fvarId_1175_);
v_value_1176_ = lean_ctor_get(v_decl_1173_, 3);
lean_inc(v_value_1176_);
lean_dec_ref(v_decl_1173_);
switch(lean_obj_tag(v_value_1176_))
{
case 6:
{
lean_object* v_var_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; 
v_var_1211_ = lean_ctor_get(v_value_1176_, 1);
lean_inc(v_var_1211_);
lean_dec_ref_known(v_value_1176_, 2);
v___x_1212_ = lean_unsigned_to_nat(1u);
v___x_1213_ = lean_mk_empty_array_with_capacity(v___x_1212_);
v___x_1214_ = lean_array_push(v___x_1213_, v_var_1211_);
v___x_1215_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v___x_1214_, v_fvarId_1175_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec_ref(v___x_1214_);
if (lean_obj_tag(v___x_1215_) == 0)
{
lean_dec_ref_known(v___x_1215_, 1);
v_code_1166_ = v_k_1174_;
goto _start;
}
else
{
lean_dec_ref(v_k_1174_);
return v___x_1215_;
}
}
case 9:
{
lean_object* v_fn_1217_; lean_object* v_args_1218_; lean_object* v_parents_1220_; lean_object* v___y_1221_; lean_object* v___y_1222_; lean_object* v___y_1223_; lean_object* v___y_1224_; lean_object* v___y_1225_; 
v_fn_1217_ = lean_ctor_get(v_value_1176_, 0);
lean_inc(v_fn_1217_);
v_args_1218_ = lean_ctor_get(v_value_1176_, 1);
lean_inc_ref(v_args_1218_);
lean_dec_ref_known(v_value_1176_, 2);
if (lean_obj_tag(v_fn_1217_) == 1)
{
lean_object* v_pre_1231_; 
v_pre_1231_ = lean_ctor_get(v_fn_1217_, 0);
lean_inc(v_pre_1231_);
if (lean_obj_tag(v_pre_1231_) == 1)
{
lean_object* v_pre_1232_; 
v_pre_1232_ = lean_ctor_get(v_pre_1231_, 0);
if (lean_obj_tag(v_pre_1232_) == 0)
{
lean_object* v_str_1233_; lean_object* v_str_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v_str_1233_ = lean_ctor_get(v_fn_1217_, 1);
lean_inc_ref(v_str_1233_);
lean_dec_ref_known(v_fn_1217_, 2);
v_str_1234_ = lean_ctor_get(v_pre_1231_, 1);
lean_inc_ref(v_str_1234_);
lean_dec_ref_known(v_pre_1231_, 2);
v___x_1235_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0));
v___x_1236_ = lean_string_dec_eq(v_str_1234_, v___x_1235_);
lean_dec_ref(v_str_1234_);
if (v___x_1236_ == 0)
{
lean_object* v___x_1237_; lean_object* v___x_1238_; uint8_t v___x_1239_; 
lean_dec_ref(v_str_1233_);
v___x_1237_ = lean_array_get_size(v_args_1218_);
lean_dec_ref(v_args_1218_);
v___x_1238_ = lean_unsigned_to_nat(0u);
v___x_1239_ = lean_nat_dec_eq(v___x_1237_, v___x_1238_);
if (v___x_1239_ == 0)
{
lean_dec(v_fvarId_1175_);
v_code_1166_ = v_k_1174_;
goto _start;
}
else
{
v___y_1178_ = v___y_1167_;
v___y_1179_ = v___y_1168_;
v___y_1180_ = v___y_1169_;
v___y_1181_ = v___y_1170_;
v___y_1182_ = v___y_1171_;
goto v___jp_1177_;
}
}
else
{
lean_object* v___x_1241_; uint8_t v___x_1242_; 
v___x_1241_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1));
v___x_1242_ = lean_string_dec_eq(v_str_1233_, v___x_1241_);
if (v___x_1242_ == 0)
{
lean_object* v___x_1243_; uint8_t v___x_1244_; 
v___x_1243_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2));
v___x_1244_ = lean_string_dec_eq(v_str_1233_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_object* v___x_1245_; uint8_t v___x_1246_; 
v___x_1245_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3));
v___x_1246_ = lean_string_dec_eq(v_str_1233_, v___x_1245_);
lean_dec_ref(v_str_1233_);
if (v___x_1246_ == 0)
{
lean_object* v___x_1247_; lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1247_ = lean_array_get_size(v_args_1218_);
lean_dec_ref(v_args_1218_);
v___x_1248_ = lean_unsigned_to_nat(0u);
v___x_1249_ = lean_nat_dec_eq(v___x_1247_, v___x_1248_);
if (v___x_1249_ == 0)
{
lean_dec(v_fvarId_1175_);
v_code_1166_ = v_k_1174_;
goto _start;
}
else
{
v___y_1178_ = v___y_1167_;
v___y_1179_ = v___y_1168_;
v___y_1180_ = v___y_1169_;
v___y_1181_ = v___y_1170_;
v___y_1182_ = v___y_1171_;
goto v___jp_1177_;
}
}
else
{
v_args_1187_ = v_args_1218_;
v___y_1188_ = v___y_1167_;
v___y_1189_ = v___y_1168_;
v___y_1190_ = v___y_1169_;
v___y_1191_ = v___y_1170_;
v___y_1192_ = v___y_1171_;
goto v___jp_1186_;
}
}
else
{
lean_object* v_parents_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
lean_dec_ref(v_str_1233_);
v_parents_1251_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_1252_ = lean_box(0);
v___x_1253_ = lean_unsigned_to_nat(1u);
v___x_1254_ = lean_array_get_borrowed(v___x_1252_, v_args_1218_, v___x_1253_);
if (lean_obj_tag(v___x_1254_) == 1)
{
lean_object* v_fvarId_1255_; lean_object* v_parents_1256_; 
v_fvarId_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_fvarId_1255_);
v_parents_1256_ = lean_array_push(v_parents_1251_, v_fvarId_1255_);
v_parents_1220_ = v_parents_1256_;
v___y_1221_ = v___y_1167_;
v___y_1222_ = v___y_1168_;
v___y_1223_ = v___y_1169_;
v___y_1224_ = v___y_1170_;
v___y_1225_ = v___y_1171_;
goto v___jp_1219_;
}
else
{
v_parents_1220_ = v_parents_1251_;
v___y_1221_ = v___y_1167_;
v___y_1222_ = v___y_1168_;
v___y_1223_ = v___y_1169_;
v___y_1224_ = v___y_1170_;
v___y_1225_ = v___y_1171_;
goto v___jp_1219_;
}
}
}
else
{
lean_dec_ref(v_str_1233_);
v_args_1187_ = v_args_1218_;
v___y_1188_ = v___y_1167_;
v___y_1189_ = v___y_1168_;
v___y_1190_ = v___y_1169_;
v___y_1191_ = v___y_1170_;
v___y_1192_ = v___y_1171_;
goto v___jp_1186_;
}
}
}
else
{
lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
lean_dec_ref_known(v_pre_1231_, 2);
lean_dec_ref_known(v_fn_1217_, 2);
v___x_1257_ = lean_array_get_size(v_args_1218_);
lean_dec_ref(v_args_1218_);
v___x_1258_ = lean_unsigned_to_nat(0u);
v___x_1259_ = lean_nat_dec_eq(v___x_1257_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v_fvarId_1175_);
v_code_1166_ = v_k_1174_;
goto _start;
}
else
{
v___y_1178_ = v___y_1167_;
v___y_1179_ = v___y_1168_;
v___y_1180_ = v___y_1169_;
v___y_1181_ = v___y_1170_;
v___y_1182_ = v___y_1171_;
goto v___jp_1177_;
}
}
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1262_; uint8_t v___x_1263_; 
lean_dec(v_pre_1231_);
lean_dec_ref_known(v_fn_1217_, 2);
v___x_1261_ = lean_array_get_size(v_args_1218_);
lean_dec_ref(v_args_1218_);
v___x_1262_ = lean_unsigned_to_nat(0u);
v___x_1263_ = lean_nat_dec_eq(v___x_1261_, v___x_1262_);
if (v___x_1263_ == 0)
{
lean_dec(v_fvarId_1175_);
v_code_1166_ = v_k_1174_;
goto _start;
}
else
{
v___y_1178_ = v___y_1167_;
v___y_1179_ = v___y_1168_;
v___y_1180_ = v___y_1169_;
v___y_1181_ = v___y_1170_;
v___y_1182_ = v___y_1171_;
goto v___jp_1177_;
}
}
}
else
{
lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
lean_dec(v_fn_1217_);
v___x_1265_ = lean_array_get_size(v_args_1218_);
lean_dec_ref(v_args_1218_);
v___x_1266_ = lean_unsigned_to_nat(0u);
v___x_1267_ = lean_nat_dec_eq(v___x_1265_, v___x_1266_);
if (v___x_1267_ == 0)
{
lean_dec(v_fvarId_1175_);
v_code_1166_ = v_k_1174_;
goto _start;
}
else
{
v___y_1178_ = v___y_1167_;
v___y_1179_ = v___y_1168_;
v___y_1180_ = v___y_1169_;
v___y_1181_ = v___y_1170_;
v___y_1182_ = v___y_1171_;
goto v___jp_1177_;
}
}
v___jp_1219_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1228_; 
v___x_1226_ = lean_box(0);
v___x_1227_ = lean_unsigned_to_nat(2u);
v___x_1228_ = lean_array_get(v___x_1226_, v_args_1218_, v___x_1227_);
lean_dec_ref(v_args_1218_);
if (lean_obj_tag(v___x_1228_) == 1)
{
lean_object* v_fvarId_1229_; lean_object* v_parents_1230_; 
v_fvarId_1229_ = lean_ctor_get(v___x_1228_, 0);
lean_inc(v_fvarId_1229_);
lean_dec_ref_known(v___x_1228_, 1);
v_parents_1230_ = lean_array_push(v_parents_1220_, v_fvarId_1229_);
v_parents_1203_ = v_parents_1230_;
v___y_1204_ = v___y_1221_;
v___y_1205_ = v___y_1222_;
v___y_1206_ = v___y_1223_;
v___y_1207_ = v___y_1224_;
v___y_1208_ = v___y_1225_;
goto v___jp_1202_;
}
else
{
lean_dec(v___x_1228_);
v_parents_1203_ = v_parents_1220_;
v___y_1204_ = v___y_1221_;
v___y_1205_ = v___y_1222_;
v___y_1206_ = v___y_1223_;
v___y_1207_ = v___y_1224_;
v___y_1208_ = v___y_1225_;
goto v___jp_1202_;
}
}
}
case 11:
{
lean_object* v_var_1269_; lean_object* v___x_1270_; 
lean_dec(v_fvarId_1175_);
v_var_1269_ = lean_ctor_get(v_value_1176_, 1);
lean_inc(v_var_1269_);
lean_dec_ref_known(v_value_1176_, 2);
v___x_1270_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(v_var_1269_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec(v_var_1269_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_dec_ref_known(v___x_1270_, 1);
v_code_1166_ = v_k_1174_;
goto _start;
}
else
{
lean_dec_ref(v_k_1174_);
return v___x_1270_;
}
}
default: 
{
lean_dec(v_value_1176_);
lean_dec(v_fvarId_1175_);
v_code_1166_ = v_k_1174_;
goto _start;
}
}
v___jp_1177_:
{
lean_object* v___x_1183_; lean_object* v___x_1184_; 
v___x_1183_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_1184_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v___x_1183_, v_fvarId_1175_, v___y_1178_, v___y_1179_, v___y_1180_, v___y_1181_, v___y_1182_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_dec_ref_known(v___x_1184_, 1);
v_code_1166_ = v_k_1174_;
v___y_1167_ = v___y_1178_;
v___y_1168_ = v___y_1179_;
v___y_1169_ = v___y_1180_;
v___y_1170_ = v___y_1181_;
v___y_1171_ = v___y_1182_;
goto _start;
}
else
{
lean_dec_ref(v_k_1174_);
return v___x_1184_;
}
}
v___jp_1186_:
{
lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1193_ = lean_box(0);
v___x_1194_ = lean_unsigned_to_nat(1u);
v___x_1195_ = lean_array_get(v___x_1193_, v_args_1187_, v___x_1194_);
lean_dec_ref(v_args_1187_);
if (lean_obj_tag(v___x_1195_) == 1)
{
lean_object* v_fvarId_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v_fvarId_1196_ = lean_ctor_get(v___x_1195_, 0);
lean_inc(v_fvarId_1196_);
lean_dec_ref_known(v___x_1195_, 1);
v___x_1197_ = lean_mk_empty_array_with_capacity(v___x_1194_);
v___x_1198_ = lean_array_push(v___x_1197_, v_fvarId_1196_);
v___x_1199_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v___x_1198_, v_fvarId_1175_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
lean_dec_ref(v___x_1198_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_dec_ref_known(v___x_1199_, 1);
v_code_1166_ = v_k_1174_;
v___y_1167_ = v___y_1188_;
v___y_1168_ = v___y_1189_;
v___y_1169_ = v___y_1190_;
v___y_1170_ = v___y_1191_;
v___y_1171_ = v___y_1192_;
goto _start;
}
else
{
lean_dec_ref(v_k_1174_);
return v___x_1199_;
}
}
else
{
lean_dec(v___x_1195_);
lean_dec(v_fvarId_1175_);
v_code_1166_ = v_k_1174_;
v___y_1167_ = v___y_1188_;
v___y_1168_ = v___y_1189_;
v___y_1169_ = v___y_1190_;
v___y_1170_ = v___y_1191_;
v___y_1171_ = v___y_1192_;
goto _start;
}
}
v___jp_1202_:
{
lean_object* v___x_1209_; 
v___x_1209_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v_parents_1203_, v_fvarId_1175_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_);
lean_dec_ref(v_parents_1203_);
if (lean_obj_tag(v___x_1209_) == 0)
{
lean_dec_ref_known(v___x_1209_, 1);
v_code_1166_ = v_k_1174_;
v___y_1167_ = v___y_1204_;
v___y_1168_ = v___y_1205_;
v___y_1169_ = v___y_1206_;
v___y_1170_ = v___y_1207_;
v___y_1171_ = v___y_1208_;
goto _start;
}
else
{
lean_dec_ref(v_k_1174_);
return v___x_1209_;
}
}
}
case 2:
{
lean_object* v_decl_1273_; lean_object* v_k_1274_; lean_object* v_params_1275_; lean_object* v_value_1276_; lean_object* v___y_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; uint8_t v___x_1284_; 
v_decl_1273_ = lean_ctor_get(v_code_1166_, 0);
lean_inc_ref(v_decl_1273_);
v_k_1274_ = lean_ctor_get(v_code_1166_, 1);
lean_inc_ref(v_k_1274_);
lean_dec_ref_known(v_code_1166_, 2);
v_params_1275_ = lean_ctor_get(v_decl_1273_, 2);
lean_inc_ref(v_params_1275_);
v_value_1276_ = lean_ctor_get(v_decl_1273_, 4);
lean_inc_ref(v_value_1276_);
lean_dec_ref(v_decl_1273_);
v___x_1282_ = lean_unsigned_to_nat(0u);
v___x_1283_ = lean_array_get_size(v_params_1275_);
v___x_1284_ = lean_nat_dec_lt(v___x_1282_, v___x_1283_);
if (v___x_1284_ == 0)
{
lean_dec_ref(v_params_1275_);
goto v___jp_1277_;
}
else
{
lean_object* v___x_1285_; uint8_t v___x_1286_; 
v___x_1285_ = lean_box(0);
v___x_1286_ = lean_nat_dec_le(v___x_1283_, v___x_1283_);
if (v___x_1286_ == 0)
{
if (v___x_1284_ == 0)
{
lean_dec_ref(v_params_1275_);
goto v___jp_1277_;
}
else
{
size_t v___x_1287_; size_t v___x_1288_; lean_object* v___x_1289_; 
v___x_1287_ = ((size_t)0ULL);
v___x_1288_ = lean_usize_of_nat(v___x_1283_);
v___x_1289_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_params_1275_, v___x_1287_, v___x_1288_, v___x_1285_, v___y_1167_);
lean_dec_ref(v_params_1275_);
v___y_1281_ = v___x_1289_;
goto v___jp_1280_;
}
}
else
{
size_t v___x_1290_; size_t v___x_1291_; lean_object* v___x_1292_; 
v___x_1290_ = ((size_t)0ULL);
v___x_1291_ = lean_usize_of_nat(v___x_1283_);
v___x_1292_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_params_1275_, v___x_1290_, v___x_1291_, v___x_1285_, v___y_1167_);
lean_dec_ref(v_params_1275_);
v___y_1281_ = v___x_1292_;
goto v___jp_1280_;
}
}
v___jp_1277_:
{
lean_object* v___x_1278_; 
v___x_1278_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_value_1276_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_dec_ref_known(v___x_1278_, 1);
v_code_1166_ = v_k_1274_;
goto _start;
}
else
{
lean_dec_ref(v_k_1274_);
return v___x_1278_;
}
}
v___jp_1280_:
{
if (lean_obj_tag(v___y_1281_) == 0)
{
lean_dec_ref_known(v___y_1281_, 1);
goto v___jp_1277_;
}
else
{
lean_dec_ref(v_value_1276_);
lean_dec_ref(v_k_1274_);
return v___y_1281_;
}
}
}
case 3:
{
lean_object* v___x_1293_; lean_object* v___x_1294_; 
lean_dec_ref_known(v_code_1166_, 2);
v___x_1293_ = lean_box(0);
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
case 4:
{
lean_object* v_cases_1295_; lean_object* v___x_1297_; uint8_t v_isShared_1298_; uint8_t v_isSharedCheck_1317_; 
v_cases_1295_ = lean_ctor_get(v_code_1166_, 0);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_code_1166_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1297_ = v_code_1166_;
v_isShared_1298_ = v_isSharedCheck_1317_;
goto v_resetjp_1296_;
}
else
{
lean_inc(v_cases_1295_);
lean_dec(v_code_1166_);
v___x_1297_ = lean_box(0);
v_isShared_1298_ = v_isSharedCheck_1317_;
goto v_resetjp_1296_;
}
v_resetjp_1296_:
{
lean_object* v_alts_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; uint8_t v___x_1303_; 
v_alts_1299_ = lean_ctor_get(v_cases_1295_, 3);
lean_inc_ref(v_alts_1299_);
lean_dec_ref(v_cases_1295_);
v___x_1300_ = lean_unsigned_to_nat(0u);
v___x_1301_ = lean_array_get_size(v_alts_1299_);
v___x_1302_ = lean_box(0);
v___x_1303_ = lean_nat_dec_lt(v___x_1300_, v___x_1301_);
if (v___x_1303_ == 0)
{
lean_object* v___x_1305_; 
lean_dec_ref(v_alts_1299_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set_tag(v___x_1297_, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1302_);
v___x_1305_ = v___x_1297_;
goto v_reusejp_1304_;
}
else
{
lean_object* v_reuseFailAlloc_1306_; 
v_reuseFailAlloc_1306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1306_, 0, v___x_1302_);
v___x_1305_ = v_reuseFailAlloc_1306_;
goto v_reusejp_1304_;
}
v_reusejp_1304_:
{
return v___x_1305_;
}
}
else
{
uint8_t v___x_1307_; 
v___x_1307_ = lean_nat_dec_le(v___x_1301_, v___x_1301_);
if (v___x_1307_ == 0)
{
if (v___x_1303_ == 0)
{
lean_object* v___x_1309_; 
lean_dec_ref(v_alts_1299_);
if (v_isShared_1298_ == 0)
{
lean_ctor_set_tag(v___x_1297_, 0);
lean_ctor_set(v___x_1297_, 0, v___x_1302_);
v___x_1309_ = v___x_1297_;
goto v_reusejp_1308_;
}
else
{
lean_object* v_reuseFailAlloc_1310_; 
v_reuseFailAlloc_1310_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1310_, 0, v___x_1302_);
v___x_1309_ = v_reuseFailAlloc_1310_;
goto v_reusejp_1308_;
}
v_reusejp_1308_:
{
return v___x_1309_;
}
}
else
{
size_t v___x_1311_; size_t v___x_1312_; lean_object* v___x_1313_; 
lean_del_object(v___x_1297_);
v___x_1311_ = ((size_t)0ULL);
v___x_1312_ = lean_usize_of_nat(v___x_1301_);
v___x_1313_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(v_alts_1299_, v___x_1311_, v___x_1312_, v___x_1302_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec_ref(v_alts_1299_);
return v___x_1313_;
}
}
else
{
size_t v___x_1314_; size_t v___x_1315_; lean_object* v___x_1316_; 
lean_del_object(v___x_1297_);
v___x_1314_ = ((size_t)0ULL);
v___x_1315_ = lean_usize_of_nat(v___x_1301_);
v___x_1316_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(v_alts_1299_, v___x_1314_, v___x_1315_, v___x_1302_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
lean_dec_ref(v_alts_1299_);
return v___x_1316_;
}
}
}
}
case 5:
{
lean_object* v___x_1319_; uint8_t v_isShared_1320_; uint8_t v_isSharedCheck_1325_; 
v_isSharedCheck_1325_ = !lean_is_exclusive(v_code_1166_);
if (v_isSharedCheck_1325_ == 0)
{
lean_object* v_unused_1326_; 
v_unused_1326_ = lean_ctor_get(v_code_1166_, 0);
lean_dec(v_unused_1326_);
v___x_1319_ = v_code_1166_;
v_isShared_1320_ = v_isSharedCheck_1325_;
goto v_resetjp_1318_;
}
else
{
lean_dec(v_code_1166_);
v___x_1319_ = lean_box(0);
v_isShared_1320_ = v_isSharedCheck_1325_;
goto v_resetjp_1318_;
}
v_resetjp_1318_:
{
lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1321_ = lean_box(0);
if (v_isShared_1320_ == 0)
{
lean_ctor_set_tag(v___x_1319_, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1321_);
v___x_1323_ = v___x_1319_;
goto v_reusejp_1322_;
}
else
{
lean_object* v_reuseFailAlloc_1324_; 
v_reuseFailAlloc_1324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1324_, 0, v___x_1321_);
v___x_1323_ = v_reuseFailAlloc_1324_;
goto v_reusejp_1322_;
}
v_reusejp_1322_:
{
return v___x_1323_;
}
}
}
case 6:
{
lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1334_; 
v_isSharedCheck_1334_ = !lean_is_exclusive(v_code_1166_);
if (v_isSharedCheck_1334_ == 0)
{
lean_object* v_unused_1335_; 
v_unused_1335_ = lean_ctor_get(v_code_1166_, 0);
lean_dec(v_unused_1335_);
v___x_1328_ = v_code_1166_;
v_isShared_1329_ = v_isSharedCheck_1334_;
goto v_resetjp_1327_;
}
else
{
lean_dec(v_code_1166_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1334_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1330_; lean_object* v___x_1332_; 
v___x_1330_ = lean_box(0);
if (v_isShared_1329_ == 0)
{
lean_ctor_set_tag(v___x_1328_, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1330_);
v___x_1332_ = v___x_1328_;
goto v_reusejp_1331_;
}
else
{
lean_object* v_reuseFailAlloc_1333_; 
v_reuseFailAlloc_1333_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1333_, 0, v___x_1330_);
v___x_1332_ = v_reuseFailAlloc_1333_;
goto v_reusejp_1331_;
}
v_reusejp_1331_:
{
return v___x_1332_;
}
}
}
case 8:
{
lean_object* v_k_1336_; 
v_k_1336_ = lean_ctor_get(v_code_1166_, 3);
lean_inc_ref(v_k_1336_);
lean_dec_ref_known(v_code_1166_, 4);
v_code_1166_ = v_k_1336_;
goto _start;
}
case 9:
{
lean_object* v_k_1338_; 
v_k_1338_ = lean_ctor_get(v_code_1166_, 5);
lean_inc_ref(v_k_1338_);
lean_dec_ref_known(v_code_1166_, 6);
v_code_1166_ = v_k_1338_;
goto _start;
}
default: 
{
lean_object* v___x_1340_; lean_object* v___x_1341_; 
lean_dec_ref(v_code_1166_);
v___x_1340_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7);
v___x_1341_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v___x_1340_, v___y_1167_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_);
return v___x_1341_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed(lean_object* v_code_1342_, lean_object* v___y_1343_, lean_object* v___y_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_){
_start:
{
lean_object* v_res_1349_; 
v_res_1349_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1342_, v___y_1343_, v___y_1344_, v___y_1345_, v___y_1346_, v___y_1347_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
lean_dec(v___y_1345_);
lean_dec_ref(v___y_1344_);
lean_dec(v___y_1343_);
return v_res_1349_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(lean_object* v_as_1350_, size_t v_i_1351_, size_t v_stop_1352_, lean_object* v_b_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
uint8_t v___x_1360_; 
v___x_1360_ = lean_usize_dec_eq(v_i_1351_, v_stop_1352_);
if (v___x_1360_ == 0)
{
lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; 
v___x_1361_ = lean_array_uget_borrowed(v_as_1350_, v_i_1351_);
v___x_1362_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed), 7, 0);
lean_inc(v___x_1361_);
v___x_1363_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v___x_1361_, v___x_1362_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_object* v_a_1364_; size_t v___x_1365_; size_t v___x_1366_; 
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
lean_inc(v_a_1364_);
lean_dec_ref_known(v___x_1363_, 1);
v___x_1365_ = ((size_t)1ULL);
v___x_1366_ = lean_usize_add(v_i_1351_, v___x_1365_);
v_i_1351_ = v___x_1366_;
v_b_1353_ = v_a_1364_;
goto _start;
}
else
{
return v___x_1363_;
}
}
else
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1368_, 0, v_b_1353_);
return v___x_1368_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___boxed(lean_object* v_as_1369_, lean_object* v_i_1370_, lean_object* v_stop_1371_, lean_object* v_b_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_){
_start:
{
size_t v_i_boxed_1379_; size_t v_stop_boxed_1380_; lean_object* v_res_1381_; 
v_i_boxed_1379_ = lean_unbox_usize(v_i_1370_);
lean_dec(v_i_1370_);
v_stop_boxed_1380_ = lean_unbox_usize(v_stop_1371_);
lean_dec(v_stop_1371_);
v_res_1381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(v_as_1369_, v_i_boxed_1379_, v_stop_boxed_1380_, v_b_1372_, v___y_1373_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_);
lean_dec(v___y_1377_);
lean_dec_ref(v___y_1376_);
lean_dec(v___y_1375_);
lean_dec_ref(v___y_1374_);
lean_dec(v___y_1373_);
lean_dec_ref(v_as_1369_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(lean_object* v_as_1382_, size_t v_i_1383_, size_t v_stop_1384_, lean_object* v_b_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_){
_start:
{
lean_object* v___x_1392_; 
v___x_1392_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_as_1382_, v_i_1383_, v_stop_1384_, v_b_1385_, v___y_1386_);
return v___x_1392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___boxed(lean_object* v_as_1393_, lean_object* v_i_1394_, lean_object* v_stop_1395_, lean_object* v_b_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
size_t v_i_boxed_1403_; size_t v_stop_boxed_1404_; lean_object* v_res_1405_; 
v_i_boxed_1403_ = lean_unbox_usize(v_i_1394_);
lean_dec(v_i_1394_);
v_stop_boxed_1404_ = lean_unbox_usize(v_stop_1395_);
lean_dec(v_stop_1395_);
v_res_1405_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(v_as_1393_, v_i_boxed_1403_, v_stop_boxed_1404_, v_b_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
lean_dec(v___y_1399_);
lean_dec_ref(v___y_1398_);
lean_dec(v___y_1397_);
lean_dec_ref(v_as_1393_);
return v_res_1405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(lean_object* v_ps_1406_, lean_object* v_code_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_){
_start:
{
lean_object* v___y_1415_; lean_object* v___x_1417_; lean_object* v___x_1418_; uint8_t v___x_1419_; 
v___x_1417_ = lean_unsigned_to_nat(0u);
v___x_1418_ = lean_array_get_size(v_ps_1406_);
v___x_1419_ = lean_nat_dec_lt(v___x_1417_, v___x_1418_);
if (v___x_1419_ == 0)
{
lean_object* v___x_1420_; 
v___x_1420_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
return v___x_1420_;
}
else
{
lean_object* v___x_1421_; uint8_t v___x_1422_; 
v___x_1421_ = lean_box(0);
v___x_1422_ = lean_nat_dec_le(v___x_1418_, v___x_1418_);
if (v___x_1422_ == 0)
{
if (v___x_1419_ == 0)
{
lean_object* v___x_1423_; 
v___x_1423_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
return v___x_1423_;
}
else
{
size_t v___x_1424_; size_t v___x_1425_; lean_object* v___x_1426_; 
v___x_1424_ = ((size_t)0ULL);
v___x_1425_ = lean_usize_of_nat(v___x_1418_);
v___x_1426_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_ps_1406_, v___x_1424_, v___x_1425_, v___x_1421_, v___y_1408_);
v___y_1415_ = v___x_1426_;
goto v___jp_1414_;
}
}
else
{
size_t v___x_1427_; size_t v___x_1428_; lean_object* v___x_1429_; 
v___x_1427_ = ((size_t)0ULL);
v___x_1428_ = lean_usize_of_nat(v___x_1418_);
v___x_1429_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_ps_1406_, v___x_1427_, v___x_1428_, v___x_1421_, v___y_1408_);
v___y_1415_ = v___x_1429_;
goto v___jp_1414_;
}
}
v___jp_1414_:
{
if (lean_obj_tag(v___y_1415_) == 0)
{
lean_object* v___x_1416_; 
lean_dec_ref_known(v___y_1415_, 1);
v___x_1416_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_);
return v___x_1416_;
}
else
{
lean_dec_ref(v_code_1407_);
return v___y_1415_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go___boxed(lean_object* v_ps_1430_, lean_object* v_code_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(v_ps_1430_, v_code_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_, v___y_1436_);
lean_dec(v___y_1436_);
lean_dec_ref(v___y_1435_);
lean_dec(v___y_1434_);
lean_dec_ref(v___y_1433_);
lean_dec(v___y_1432_);
lean_dec_ref(v_ps_1430_);
return v_res_1438_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0(void){
_start:
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
v___x_1440_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1440_, 0, v___x_1439_);
lean_ctor_set(v___x_1440_, 1, v___x_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(lean_object* v_ps_1441_, lean_object* v_code_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_){
_start:
{
lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1448_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0);
v___x_1449_ = lean_st_mk_ref(v___x_1448_);
v___x_1450_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(v_ps_1441_, v_code_1442_, v___x_1449_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
if (lean_obj_tag(v___x_1450_) == 0)
{
lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1467_; 
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1467_ == 0)
{
lean_object* v_unused_1468_; 
v_unused_1468_ = lean_ctor_get(v___x_1450_, 0);
lean_dec(v_unused_1468_);
v___x_1452_ = v___x_1450_;
v_isShared_1453_ = v_isSharedCheck_1467_;
goto v_resetjp_1451_;
}
else
{
lean_dec(v___x_1450_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1467_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v___x_1454_; lean_object* v_varMap_1455_; lean_object* v_borrowedValues_1456_; lean_object* v___x_1458_; uint8_t v_isShared_1459_; uint8_t v_isSharedCheck_1466_; 
v___x_1454_ = lean_st_ref_get(v___x_1449_);
lean_dec(v___x_1449_);
v_varMap_1455_ = lean_ctor_get(v___x_1454_, 0);
v_borrowedValues_1456_ = lean_ctor_get(v___x_1454_, 1);
v_isSharedCheck_1466_ = !lean_is_exclusive(v___x_1454_);
if (v_isSharedCheck_1466_ == 0)
{
v___x_1458_ = v___x_1454_;
v_isShared_1459_ = v_isSharedCheck_1466_;
goto v_resetjp_1457_;
}
else
{
lean_inc(v_borrowedValues_1456_);
lean_inc(v_varMap_1455_);
lean_dec(v___x_1454_);
v___x_1458_ = lean_box(0);
v_isShared_1459_ = v_isSharedCheck_1466_;
goto v_resetjp_1457_;
}
v_resetjp_1457_:
{
lean_object* v___x_1461_; 
if (v_isShared_1459_ == 0)
{
v___x_1461_ = v___x_1458_;
goto v_reusejp_1460_;
}
else
{
lean_object* v_reuseFailAlloc_1465_; 
v_reuseFailAlloc_1465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1465_, 0, v_varMap_1455_);
lean_ctor_set(v_reuseFailAlloc_1465_, 1, v_borrowedValues_1456_);
v___x_1461_ = v_reuseFailAlloc_1465_;
goto v_reusejp_1460_;
}
v_reusejp_1460_:
{
lean_object* v___x_1463_; 
if (v_isShared_1453_ == 0)
{
lean_ctor_set(v___x_1452_, 0, v___x_1461_);
v___x_1463_ = v___x_1452_;
goto v_reusejp_1462_;
}
else
{
lean_object* v_reuseFailAlloc_1464_; 
v_reuseFailAlloc_1464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1464_, 0, v___x_1461_);
v___x_1463_ = v_reuseFailAlloc_1464_;
goto v_reusejp_1462_;
}
v_reusejp_1462_:
{
return v___x_1463_;
}
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_dec(v___x_1449_);
v_a_1469_ = lean_ctor_get(v___x_1450_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1450_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1450_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1450_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1474_; 
if (v_isShared_1472_ == 0)
{
v___x_1474_ = v___x_1471_;
goto v_reusejp_1473_;
}
else
{
lean_object* v_reuseFailAlloc_1475_; 
v_reuseFailAlloc_1475_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1475_, 0, v_a_1469_);
v___x_1474_ = v_reuseFailAlloc_1475_;
goto v_reusejp_1473_;
}
v_reusejp_1473_:
{
return v___x_1474_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___boxed(lean_object* v_ps_1477_, lean_object* v_code_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_){
_start:
{
lean_object* v_res_1484_; 
v_res_1484_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(v_ps_1477_, v_code_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_);
lean_dec(v___y_1482_);
lean_dec_ref(v___y_1481_);
lean_dec(v___y_1480_);
lean_dec_ref(v___y_1479_);
lean_dec_ref(v_ps_1477_);
return v_res_1484_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1491_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
v___x_1492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1492_, 0, v___x_1491_);
lean_ctor_set(v___x_1492_, 1, v___x_1491_);
return v___x_1492_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default(void){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
return v___x_1493_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars(void){
_start:
{
lean_object* v___x_1494_; 
v___x_1494_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__0(lean_object* v___x_1495_, lean_object* v___x_1496_, lean_object* v_a_1497_, lean_object* v_b_1498_, lean_object* v_acc_1499_){
_start:
{
lean_object* v_r_1500_; lean_object* v___x_1501_; 
v_r_1500_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1495_, v___x_1496_, v_acc_1499_, v_a_1497_, v_b_1498_);
v___x_1501_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1501_, 0, v_r_1500_);
return v___x_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__1(lean_object* v___x_1502_, lean_object* v___f_1503_, lean_object* v_a_1504_, lean_object* v_x_1505_, lean_object* v___y_1506_){
_start:
{
lean_object* v___x_1507_; 
v___x_1507_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v___x_1502_, v___f_1503_, v_a_1504_, v___y_1506_);
return v___x_1507_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union(lean_object* v_liveVars1_1516_, lean_object* v_liveVars2_1517_){
_start:
{
lean_object* v_vars_1518_; lean_object* v_borrows_1519_; lean_object* v_vars_1520_; lean_object* v_borrows_1521_; lean_object* v___x_1523_; uint8_t v_isShared_1524_; uint8_t v_isSharedCheck_1556_; 
v_vars_1518_ = lean_ctor_get(v_liveVars1_1516_, 0);
lean_inc_ref(v_vars_1518_);
v_borrows_1519_ = lean_ctor_get(v_liveVars1_1516_, 1);
lean_inc_ref(v_borrows_1519_);
lean_dec_ref(v_liveVars1_1516_);
v_vars_1520_ = lean_ctor_get(v_liveVars2_1517_, 0);
v_borrows_1521_ = lean_ctor_get(v_liveVars2_1517_, 1);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_liveVars2_1517_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1523_ = v_liveVars2_1517_;
v_isShared_1524_ = v_isSharedCheck_1556_;
goto v_resetjp_1522_;
}
else
{
lean_inc(v_borrows_1521_);
lean_inc(v_vars_1520_);
lean_dec(v_liveVars2_1517_);
v___x_1523_ = lean_box(0);
v_isShared_1524_ = v_isSharedCheck_1556_;
goto v_resetjp_1522_;
}
v_resetjp_1522_:
{
lean_object* v___x_1525_; lean_object* v_size_1526_; lean_object* v_buckets_1527_; lean_object* v_size_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___y_1532_; uint8_t v___x_1549_; 
v___x_1525_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v_size_1526_ = lean_ctor_get(v_vars_1518_, 0);
v_buckets_1527_ = lean_ctor_get(v_vars_1518_, 1);
v_size_1528_ = lean_ctor_get(v_vars_1520_, 0);
v___x_1529_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1530_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1549_ = lean_nat_dec_le(v_size_1526_, v_size_1528_);
if (v___x_1549_ == 0)
{
lean_object* v___f_1550_; lean_object* v___x_1551_; 
v___f_1550_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1));
v___x_1551_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1550_, v___x_1529_, v___x_1530_, v_vars_1518_, v_vars_1520_);
v___y_1532_ = v___x_1551_;
goto v___jp_1531_;
}
else
{
lean_object* v___f_1552_; size_t v_sz_1553_; size_t v___x_1554_; lean_object* v___x_1555_; 
lean_inc_ref(v_buckets_1527_);
lean_dec_ref(v_vars_1518_);
v___f_1552_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2));
v_sz_1553_ = lean_array_size(v_buckets_1527_);
v___x_1554_ = ((size_t)0ULL);
v___x_1555_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1525_, v_buckets_1527_, v___f_1552_, v_sz_1553_, v___x_1554_, v_vars_1520_);
v___y_1532_ = v___x_1555_;
goto v___jp_1531_;
}
v___jp_1531_:
{
lean_object* v_size_1533_; lean_object* v_buckets_1534_; lean_object* v_size_1535_; uint8_t v___x_1536_; 
v_size_1533_ = lean_ctor_get(v_borrows_1519_, 0);
v_buckets_1534_ = lean_ctor_get(v_borrows_1519_, 1);
v_size_1535_ = lean_ctor_get(v_borrows_1521_, 0);
v___x_1536_ = lean_nat_dec_le(v_size_1533_, v_size_1535_);
if (v___x_1536_ == 0)
{
lean_object* v___f_1537_; lean_object* v___x_1538_; lean_object* v___x_1540_; 
v___f_1537_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1));
v___x_1538_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1537_, v___x_1529_, v___x_1530_, v_borrows_1519_, v_borrows_1521_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 1, v___x_1538_);
lean_ctor_set(v___x_1523_, 0, v___y_1532_);
v___x_1540_ = v___x_1523_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v___y_1532_);
lean_ctor_set(v_reuseFailAlloc_1541_, 1, v___x_1538_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
else
{
lean_object* v___f_1542_; size_t v_sz_1543_; size_t v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1547_; 
lean_inc_ref(v_buckets_1534_);
lean_dec_ref(v_borrows_1519_);
v___f_1542_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2));
v_sz_1543_ = lean_array_size(v_buckets_1534_);
v___x_1544_ = ((size_t)0ULL);
v___x_1545_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1525_, v_buckets_1534_, v___f_1542_, v_sz_1543_, v___x_1544_, v_borrows_1521_);
if (v_isShared_1524_ == 0)
{
lean_ctor_set(v___x_1523_, 1, v___x_1545_);
lean_ctor_set(v___x_1523_, 0, v___y_1532_);
v___x_1547_ = v___x_1523_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v___y_1532_);
lean_ctor_set(v_reuseFailAlloc_1548_, 1, v___x_1545_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_erase(lean_object* v_liveVars_1557_, lean_object* v_fvarId_1558_){
_start:
{
lean_object* v_vars_1559_; lean_object* v_borrows_1560_; lean_object* v___x_1562_; uint8_t v_isShared_1563_; uint8_t v_isSharedCheck_1571_; 
v_vars_1559_ = lean_ctor_get(v_liveVars_1557_, 0);
v_borrows_1560_ = lean_ctor_get(v_liveVars_1557_, 1);
v_isSharedCheck_1571_ = !lean_is_exclusive(v_liveVars_1557_);
if (v_isSharedCheck_1571_ == 0)
{
v___x_1562_ = v_liveVars_1557_;
v_isShared_1563_ = v_isSharedCheck_1571_;
goto v_resetjp_1561_;
}
else
{
lean_inc(v_borrows_1560_);
lean_inc(v_vars_1559_);
lean_dec(v_liveVars_1557_);
v___x_1562_ = lean_box(0);
v_isShared_1563_ = v_isSharedCheck_1571_;
goto v_resetjp_1561_;
}
v_resetjp_1561_:
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v_vars_1566_; lean_object* v_borrows_1567_; lean_object* v___x_1569_; 
v___x_1564_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1565_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_1558_);
v_vars_1566_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_1564_, v___x_1565_, v_vars_1559_, v_fvarId_1558_);
v_borrows_1567_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_1564_, v___x_1565_, v_borrows_1560_, v_fvarId_1558_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 1, v_borrows_1567_);
lean_ctor_set(v___x_1562_, 0, v_vars_1566_);
v___x_1569_ = v___x_1562_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_vars_1566_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v_borrows_1567_);
v___x_1569_ = v_reuseFailAlloc_1570_;
goto v_reusejp_1568_;
}
v_reusejp_1568_:
{
return v___x_1569_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertBorrow(lean_object* v_liveVars_1572_, lean_object* v_fvarId_1573_){
_start:
{
lean_object* v_vars_1574_; lean_object* v_borrows_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1586_; 
v_vars_1574_ = lean_ctor_get(v_liveVars_1572_, 0);
v_borrows_1575_ = lean_ctor_get(v_liveVars_1572_, 1);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_liveVars_1572_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1577_ = v_liveVars_1572_;
v_isShared_1578_ = v_isSharedCheck_1586_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_borrows_1575_);
lean_inc(v_vars_1574_);
lean_dec(v_liveVars_1572_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1586_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1584_; 
v___x_1579_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1580_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1581_ = lean_box(0);
v___x_1582_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1579_, v___x_1580_, v_borrows_1575_, v_fvarId_1573_, v___x_1581_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 1, v___x_1582_);
v___x_1584_ = v___x_1577_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v_vars_1574_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v___x_1582_);
v___x_1584_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
return v___x_1584_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertLive(lean_object* v_liveVars_1587_, lean_object* v_fvarId_1588_){
_start:
{
lean_object* v_vars_1589_; lean_object* v_borrows_1590_; lean_object* v___x_1592_; uint8_t v_isShared_1593_; uint8_t v_isSharedCheck_1601_; 
v_vars_1589_ = lean_ctor_get(v_liveVars_1587_, 0);
v_borrows_1590_ = lean_ctor_get(v_liveVars_1587_, 1);
v_isSharedCheck_1601_ = !lean_is_exclusive(v_liveVars_1587_);
if (v_isSharedCheck_1601_ == 0)
{
v___x_1592_ = v_liveVars_1587_;
v_isShared_1593_ = v_isSharedCheck_1601_;
goto v_resetjp_1591_;
}
else
{
lean_inc(v_borrows_1590_);
lean_inc(v_vars_1589_);
lean_dec(v_liveVars_1587_);
v___x_1592_ = lean_box(0);
v_isShared_1593_ = v_isSharedCheck_1601_;
goto v_resetjp_1591_;
}
v_resetjp_1591_:
{
lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; lean_object* v___x_1599_; 
v___x_1594_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1595_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1596_ = lean_box(0);
v___x_1597_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1594_, v___x_1595_, v_vars_1589_, v_fvarId_1588_, v___x_1596_);
if (v_isShared_1593_ == 0)
{
lean_ctor_set(v___x_1592_, 0, v___x_1597_);
v___x_1599_ = v___x_1592_;
goto v_reusejp_1598_;
}
else
{
lean_object* v_reuseFailAlloc_1600_; 
v_reuseFailAlloc_1600_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1600_, 0, v___x_1597_);
lean_ctor_set(v_reuseFailAlloc_1600_, 1, v_borrows_1590_);
v___x_1599_ = v_reuseFailAlloc_1600_;
goto v_reusejp_1598_;
}
v_reusejp_1598_:
{
return v___x_1599_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(lean_object* v_fvarId_1602_, lean_object* v___y_1603_){
_start:
{
lean_object* v_varMap_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; 
v_varMap_1605_ = lean_ctor_get(v___y_1603_, 2);
v___x_1606_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_varMap_1605_);
v___x_1607_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1606_, v_varMap_1605_, v_fvarId_1602_);
v___x_1608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1608_, 0, v___x_1607_);
return v___x_1608_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___boxed(lean_object* v_fvarId_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_){
_start:
{
lean_object* v_res_1612_; 
v_res_1612_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(v_fvarId_1609_, v___y_1610_);
lean_dec_ref(v___y_1610_);
return v_res_1612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(lean_object* v_fvarId_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v_varMap_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v_varMap_1621_ = lean_ctor_get(v___y_1614_, 2);
v___x_1622_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_varMap_1621_);
v___x_1623_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1622_, v_varMap_1621_, v_fvarId_1613_);
v___x_1624_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___boxed(lean_object* v_fvarId_1625_, lean_object* v___y_1626_, lean_object* v___y_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(v_fvarId_1625_, v___y_1626_, v___y_1627_, v___y_1628_, v___y_1629_, v___y_1630_, v___y_1631_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
lean_dec_ref(v___y_1628_);
lean_dec(v___y_1627_);
lean_dec_ref(v___y_1626_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(lean_object* v_fvarId_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v_jpLiveVarMap_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; 
v_jpLiveVarMap_1637_ = lean_ctor_get(v___y_1635_, 3);
v___x_1638_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_jpLiveVarMap_1637_);
v___x_1639_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1638_, v_jpLiveVarMap_1637_, v_fvarId_1634_);
v___x_1640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1640_, 0, v___x_1639_);
return v___x_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg___boxed(lean_object* v_fvarId_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_){
_start:
{
lean_object* v_res_1644_; 
v_res_1644_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(v_fvarId_1641_, v___y_1642_);
lean_dec_ref(v___y_1642_);
return v_res_1644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(lean_object* v_fvarId_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_){
_start:
{
lean_object* v_jpLiveVarMap_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; 
v_jpLiveVarMap_1653_ = lean_ctor_get(v___y_1646_, 3);
v___x_1654_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_jpLiveVarMap_1653_);
v___x_1655_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1654_, v_jpLiveVarMap_1653_, v_fvarId_1645_);
v___x_1656_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1655_);
return v___x_1656_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___boxed(lean_object* v_fvarId_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_){
_start:
{
lean_object* v_res_1665_; 
v_res_1665_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(v_fvarId_1657_, v___y_1658_, v___y_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_);
lean_dec(v___y_1663_);
lean_dec_ref(v___y_1662_);
lean_dec(v___y_1661_);
lean_dec_ref(v___y_1660_);
lean_dec(v___y_1659_);
lean_dec_ref(v___y_1658_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(lean_object* v_fvarId_1666_, lean_object* v___y_1667_){
_start:
{
lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v_vars_1672_; uint8_t v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; 
v___x_1669_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1670_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1671_ = lean_st_ref_get(v___y_1667_);
v_vars_1672_ = lean_ctor_get(v___x_1671_, 0);
lean_inc_ref(v_vars_1672_);
lean_dec(v___x_1671_);
v___x_1673_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1669_, v___x_1670_, v_vars_1672_, v_fvarId_1666_);
lean_dec_ref(v_vars_1672_);
v___x_1674_ = lean_box(v___x_1673_);
v___x_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1675_, 0, v___x_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg___boxed(lean_object* v_fvarId_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v_res_1679_; 
v_res_1679_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(v_fvarId_1676_, v___y_1677_);
lean_dec(v___y_1677_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(lean_object* v_fvarId_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_){
_start:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v_vars_1691_; uint8_t v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; 
v___x_1688_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1689_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1690_ = lean_st_ref_get(v___y_1682_);
v_vars_1691_ = lean_ctor_get(v___x_1690_, 0);
lean_inc_ref(v_vars_1691_);
lean_dec(v___x_1690_);
v___x_1692_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1688_, v___x_1689_, v_vars_1691_, v_fvarId_1680_);
lean_dec_ref(v_vars_1691_);
v___x_1693_ = lean_box(v___x_1692_);
v___x_1694_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1694_, 0, v___x_1693_);
return v___x_1694_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___boxed(lean_object* v_fvarId_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
lean_object* v_res_1703_; 
v_res_1703_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(v_fvarId_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_);
lean_dec(v___y_1701_);
lean_dec_ref(v___y_1700_);
lean_dec(v___y_1699_);
lean_dec_ref(v___y_1698_);
lean_dec(v___y_1697_);
lean_dec_ref(v___y_1696_);
return v_res_1703_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(lean_object* v_fvarId_1704_, lean_object* v___y_1705_){
_start:
{
lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v_borrows_1710_; uint8_t v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___x_1707_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1708_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1709_ = lean_st_ref_get(v___y_1705_);
v_borrows_1710_ = lean_ctor_get(v___x_1709_, 1);
lean_inc_ref(v_borrows_1710_);
lean_dec(v___x_1709_);
v___x_1711_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1707_, v___x_1708_, v_borrows_1710_, v_fvarId_1704_);
lean_dec_ref(v_borrows_1710_);
v___x_1712_ = lean_box(v___x_1711_);
v___x_1713_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1713_, 0, v___x_1712_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg___boxed(lean_object* v_fvarId_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_){
_start:
{
lean_object* v_res_1717_; 
v_res_1717_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(v_fvarId_1714_, v___y_1715_);
lean_dec(v___y_1715_);
return v_res_1717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(lean_object* v_fvarId_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_){
_start:
{
lean_object* v___x_1726_; lean_object* v___x_1727_; lean_object* v___x_1728_; lean_object* v_borrows_1729_; uint8_t v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; 
v___x_1726_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1727_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1728_ = lean_st_ref_get(v___y_1720_);
v_borrows_1729_ = lean_ctor_get(v___x_1728_, 1);
lean_inc_ref(v_borrows_1729_);
lean_dec(v___x_1728_);
v___x_1730_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1726_, v___x_1727_, v_borrows_1729_, v_fvarId_1718_);
lean_dec_ref(v_borrows_1729_);
v___x_1731_ = lean_box(v___x_1730_);
v___x_1732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1732_, 0, v___x_1731_);
return v___x_1732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___boxed(lean_object* v_fvarId_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_){
_start:
{
lean_object* v_res_1741_; 
v_res_1741_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(v_fvarId_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_, v___y_1738_, v___y_1739_);
lean_dec(v___y_1739_);
lean_dec_ref(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
return v_res_1741_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(lean_object* v_f_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___x_1745_ = lean_st_ref_take(v___y_1743_);
v___x_1746_ = lean_box(0);
v___x_1747_ = lean_apply_1(v_f_1742_, v___x_1745_);
v___x_1748_ = lean_st_ref_put(v___y_1743_, v___x_1747_);
v___x_1749_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1749_, 0, v___x_1746_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg___boxed(lean_object* v_f_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(v_f_1750_, v___y_1751_);
lean_dec(v___y_1751_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(lean_object* v_f_1754_, lean_object* v___y_1755_, lean_object* v___y_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_){
_start:
{
lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1766_; 
v___x_1762_ = lean_st_ref_take(v___y_1756_);
v___x_1763_ = lean_box(0);
v___x_1764_ = lean_apply_1(v_f_1754_, v___x_1762_);
v___x_1765_ = lean_st_ref_put(v___y_1756_, v___x_1764_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v___x_1763_);
return v___x_1766_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___boxed(lean_object* v_f_1767_, lean_object* v___y_1768_, lean_object* v___y_1769_, lean_object* v___y_1770_, lean_object* v___y_1771_, lean_object* v___y_1772_, lean_object* v___y_1773_, lean_object* v___y_1774_){
_start:
{
lean_object* v_res_1775_; 
v_res_1775_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(v_f_1767_, v___y_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_);
lean_dec(v___y_1773_);
lean_dec_ref(v___y_1772_);
lean_dec(v___y_1771_);
lean_dec_ref(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v___y_1768_);
return v_res_1775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___lam__0(lean_object* v_x1_1776_, lean_object* v_x2_1777_){
_start:
{
lean_object* v_borrowedValues_1778_; lean_object* v_derivedValMap_1779_; lean_object* v_varMap_1780_; lean_object* v_jpLiveVarMap_1781_; lean_object* v_idx_1782_; lean_object* v___x_1784_; uint8_t v_isShared_1785_; uint8_t v_isSharedCheck_1799_; 
v_borrowedValues_1778_ = lean_ctor_get(v_x1_1776_, 0);
v_derivedValMap_1779_ = lean_ctor_get(v_x1_1776_, 1);
v_varMap_1780_ = lean_ctor_get(v_x1_1776_, 2);
v_jpLiveVarMap_1781_ = lean_ctor_get(v_x1_1776_, 3);
v_idx_1782_ = lean_ctor_get(v_x1_1776_, 4);
v_isSharedCheck_1799_ = !lean_is_exclusive(v_x1_1776_);
if (v_isSharedCheck_1799_ == 0)
{
v___x_1784_ = v_x1_1776_;
v_isShared_1785_ = v_isSharedCheck_1799_;
goto v_resetjp_1783_;
}
else
{
lean_inc(v_idx_1782_);
lean_inc(v_jpLiveVarMap_1781_);
lean_inc(v_varMap_1780_);
lean_inc(v_derivedValMap_1779_);
lean_inc(v_borrowedValues_1778_);
lean_dec(v_x1_1776_);
v___x_1784_ = lean_box(0);
v_isShared_1785_ = v_isSharedCheck_1799_;
goto v_resetjp_1783_;
}
v_resetjp_1783_:
{
lean_object* v_fvarId_1786_; lean_object* v_type_1787_; uint8_t v___x_1788_; uint8_t v___x_1789_; uint8_t v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v_varMap_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1797_; 
v_fvarId_1786_ = lean_ctor_get(v_x2_1777_, 0);
lean_inc(v_fvarId_1786_);
v_type_1787_ = lean_ctor_get(v_x2_1777_, 2);
lean_inc_ref(v_type_1787_);
lean_dec_ref(v_x2_1777_);
v___x_1788_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1787_);
v___x_1789_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1787_);
lean_dec_ref(v_type_1787_);
v___x_1790_ = 0;
v___x_1791_ = lean_box(0);
lean_inc(v_idx_1782_);
v___x_1792_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_1792_, 0, v_idx_1782_);
lean_ctor_set(v___x_1792_, 1, v___x_1791_);
lean_ctor_set_uint8(v___x_1792_, sizeof(void*)*2, v___x_1788_);
lean_ctor_set_uint8(v___x_1792_, sizeof(void*)*2 + 1, v___x_1789_);
lean_ctor_set_uint8(v___x_1792_, sizeof(void*)*2 + 2, v___x_1790_);
v_varMap_1793_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1786_, v___x_1792_, v_varMap_1780_);
v___x_1794_ = lean_unsigned_to_nat(1u);
v___x_1795_ = lean_nat_add(v_idx_1782_, v___x_1794_);
lean_dec(v_idx_1782_);
if (v_isShared_1785_ == 0)
{
lean_ctor_set(v___x_1784_, 4, v___x_1795_);
lean_ctor_set(v___x_1784_, 2, v_varMap_1793_);
v___x_1797_ = v___x_1784_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v_borrowedValues_1778_);
lean_ctor_set(v_reuseFailAlloc_1798_, 1, v_derivedValMap_1779_);
lean_ctor_set(v_reuseFailAlloc_1798_, 2, v_varMap_1793_);
lean_ctor_set(v_reuseFailAlloc_1798_, 3, v_jpLiveVarMap_1781_);
lean_ctor_set(v_reuseFailAlloc_1798_, 4, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(lean_object* v_ps_1801_, lean_object* v_x_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_, lean_object* v___y_1806_, lean_object* v___y_1807_, lean_object* v___y_1808_){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; uint8_t v___x_1813_; 
v___x_1810_ = lean_unsigned_to_nat(0u);
v___x_1811_ = lean_array_get_size(v_ps_1801_);
v___x_1812_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_1813_ = lean_nat_dec_lt(v___x_1810_, v___x_1811_);
if (v___x_1813_ == 0)
{
lean_object* v___x_1814_; 
lean_dec_ref(v_ps_1801_);
lean_inc(v___y_1808_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1806_);
lean_inc_ref(v___y_1805_);
lean_inc(v___y_1804_);
lean_inc_ref(v___y_1803_);
v___x_1814_ = lean_apply_7(v_x_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, lean_box(0));
return v___x_1814_;
}
else
{
lean_object* v___f_1815_; uint8_t v___x_1816_; 
v___f_1815_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0));
v___x_1816_ = lean_nat_dec_le(v___x_1811_, v___x_1811_);
if (v___x_1816_ == 0)
{
if (v___x_1813_ == 0)
{
lean_object* v___x_1817_; 
lean_dec_ref(v_ps_1801_);
lean_inc(v___y_1808_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1806_);
lean_inc_ref(v___y_1805_);
lean_inc(v___y_1804_);
lean_inc_ref(v___y_1803_);
v___x_1817_ = lean_apply_7(v_x_1802_, v___y_1803_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, lean_box(0));
return v___x_1817_;
}
else
{
size_t v___x_1818_; size_t v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v___x_1818_ = ((size_t)0ULL);
v___x_1819_ = lean_usize_of_nat(v___x_1811_);
lean_inc_ref(v___y_1803_);
v___x_1820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1812_, v___f_1815_, v_ps_1801_, v___x_1818_, v___x_1819_, v___y_1803_);
lean_inc(v___y_1808_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1806_);
lean_inc_ref(v___y_1805_);
lean_inc(v___y_1804_);
v___x_1821_ = lean_apply_7(v_x_1802_, v___x_1820_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, lean_box(0));
return v___x_1821_;
}
}
else
{
size_t v___x_1822_; size_t v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; 
v___x_1822_ = ((size_t)0ULL);
v___x_1823_ = lean_usize_of_nat(v___x_1811_);
lean_inc_ref(v___y_1803_);
v___x_1824_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1812_, v___f_1815_, v_ps_1801_, v___x_1822_, v___x_1823_, v___y_1803_);
lean_inc(v___y_1808_);
lean_inc_ref(v___y_1807_);
lean_inc(v___y_1806_);
lean_inc_ref(v___y_1805_);
lean_inc(v___y_1804_);
v___x_1825_ = lean_apply_7(v_x_1802_, v___x_1824_, v___y_1804_, v___y_1805_, v___y_1806_, v___y_1807_, v___y_1808_, lean_box(0));
return v___x_1825_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___boxed(lean_object* v_ps_1826_, lean_object* v_x_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
lean_object* v_res_1835_; 
v_res_1835_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(v_ps_1826_, v_x_1827_, v___y_1828_, v___y_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
lean_dec(v___y_1829_);
lean_dec_ref(v___y_1828_);
return v_res_1835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(lean_object* v_00_u03b1_1836_, lean_object* v_ps_1837_, lean_object* v_x_1838_, lean_object* v___y_1839_, lean_object* v___y_1840_, lean_object* v___y_1841_, lean_object* v___y_1842_, lean_object* v___y_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; uint8_t v___x_1849_; 
v___x_1846_ = lean_unsigned_to_nat(0u);
v___x_1847_ = lean_array_get_size(v_ps_1837_);
v___x_1848_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_1849_ = lean_nat_dec_lt(v___x_1846_, v___x_1847_);
if (v___x_1849_ == 0)
{
lean_object* v___x_1850_; 
lean_dec_ref(v_ps_1837_);
lean_inc(v___y_1844_);
lean_inc_ref(v___y_1843_);
lean_inc(v___y_1842_);
lean_inc_ref(v___y_1841_);
lean_inc(v___y_1840_);
lean_inc_ref(v___y_1839_);
v___x_1850_ = lean_apply_7(v_x_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, lean_box(0));
return v___x_1850_;
}
else
{
lean_object* v___f_1851_; uint8_t v___x_1852_; 
v___f_1851_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0));
v___x_1852_ = lean_nat_dec_le(v___x_1847_, v___x_1847_);
if (v___x_1852_ == 0)
{
if (v___x_1849_ == 0)
{
lean_object* v___x_1853_; 
lean_dec_ref(v_ps_1837_);
lean_inc(v___y_1844_);
lean_inc_ref(v___y_1843_);
lean_inc(v___y_1842_);
lean_inc_ref(v___y_1841_);
lean_inc(v___y_1840_);
lean_inc_ref(v___y_1839_);
v___x_1853_ = lean_apply_7(v_x_1838_, v___y_1839_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, lean_box(0));
return v___x_1853_;
}
else
{
size_t v___x_1854_; size_t v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1854_ = ((size_t)0ULL);
v___x_1855_ = lean_usize_of_nat(v___x_1847_);
lean_inc_ref(v___y_1839_);
v___x_1856_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1848_, v___f_1851_, v_ps_1837_, v___x_1854_, v___x_1855_, v___y_1839_);
lean_inc(v___y_1844_);
lean_inc_ref(v___y_1843_);
lean_inc(v___y_1842_);
lean_inc_ref(v___y_1841_);
lean_inc(v___y_1840_);
v___x_1857_ = lean_apply_7(v_x_1838_, v___x_1856_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, lean_box(0));
return v___x_1857_;
}
}
else
{
size_t v___x_1858_; size_t v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; 
v___x_1858_ = ((size_t)0ULL);
v___x_1859_ = lean_usize_of_nat(v___x_1847_);
lean_inc_ref(v___y_1839_);
v___x_1860_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1848_, v___f_1851_, v_ps_1837_, v___x_1858_, v___x_1859_, v___y_1839_);
lean_inc(v___y_1844_);
lean_inc_ref(v___y_1843_);
lean_inc(v___y_1842_);
lean_inc_ref(v___y_1841_);
lean_inc(v___y_1840_);
v___x_1861_ = lean_apply_7(v_x_1838_, v___x_1860_, v___y_1840_, v___y_1841_, v___y_1842_, v___y_1843_, v___y_1844_, lean_box(0));
return v___x_1861_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___boxed(lean_object* v_00_u03b1_1862_, lean_object* v_ps_1863_, lean_object* v_x_1864_, lean_object* v___y_1865_, lean_object* v___y_1866_, lean_object* v___y_1867_, lean_object* v___y_1868_, lean_object* v___y_1869_, lean_object* v___y_1870_, lean_object* v___y_1871_){
_start:
{
lean_object* v_res_1872_; 
v_res_1872_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(v_00_u03b1_1862_, v_ps_1863_, v_x_1864_, v___y_1865_, v___y_1866_, v___y_1867_, v___y_1868_, v___y_1869_, v___y_1870_);
lean_dec(v___y_1870_);
lean_dec_ref(v___y_1869_);
lean_dec(v___y_1868_);
lean_dec_ref(v___y_1867_);
lean_dec(v___y_1866_);
lean_dec_ref(v___y_1865_);
return v_res_1872_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(lean_object* v_decl_1873_, lean_object* v_x_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_){
_start:
{
lean_object* v_fvarId_1882_; lean_object* v_type_1883_; lean_object* v_value_1884_; lean_object* v___y_1886_; 
v_fvarId_1882_ = lean_ctor_get(v_decl_1873_, 0);
lean_inc(v_fvarId_1882_);
v_type_1883_ = lean_ctor_get(v_decl_1873_, 2);
lean_inc_ref(v_type_1883_);
v_value_1884_ = lean_ctor_get(v_decl_1873_, 3);
lean_inc(v_value_1884_);
lean_dec_ref(v_decl_1873_);
if (lean_obj_tag(v_value_1884_) == 5)
{
lean_object* v_i_1901_; lean_object* v___x_1902_; 
v_i_1901_ = lean_ctor_get(v_value_1884_, 0);
lean_inc_ref(v_i_1901_);
v___x_1902_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1902_, 0, v_i_1901_);
v___y_1886_ = v___x_1902_;
goto v___jp_1885_;
}
else
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_box(0);
v___y_1886_ = v___x_1903_;
goto v___jp_1885_;
}
v___jp_1885_:
{
lean_object* v_borrowedValues_1887_; lean_object* v_derivedValMap_1888_; lean_object* v_varMap_1889_; lean_object* v_jpLiveVarMap_1890_; lean_object* v_idx_1891_; uint8_t v___x_1892_; uint8_t v___x_1893_; uint8_t v___x_1894_; lean_object* v_varInfo_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; 
v_borrowedValues_1887_ = lean_ctor_get(v___y_1875_, 0);
v_derivedValMap_1888_ = lean_ctor_get(v___y_1875_, 1);
v_varMap_1889_ = lean_ctor_get(v___y_1875_, 2);
v_jpLiveVarMap_1890_ = lean_ctor_get(v___y_1875_, 3);
v_idx_1891_ = lean_ctor_get(v___y_1875_, 4);
v___x_1892_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1883_);
v___x_1893_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1883_);
lean_dec_ref(v_type_1883_);
v___x_1894_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_1884_);
lean_dec(v_value_1884_);
lean_inc(v_idx_1891_);
v_varInfo_1895_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_varInfo_1895_, 0, v_idx_1891_);
lean_ctor_set(v_varInfo_1895_, 1, v___y_1886_);
lean_ctor_set_uint8(v_varInfo_1895_, sizeof(void*)*2, v___x_1892_);
lean_ctor_set_uint8(v_varInfo_1895_, sizeof(void*)*2 + 1, v___x_1893_);
lean_ctor_set_uint8(v_varInfo_1895_, sizeof(void*)*2 + 2, v___x_1894_);
lean_inc(v_varMap_1889_);
v___x_1896_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1882_, v_varInfo_1895_, v_varMap_1889_);
v___x_1897_ = lean_unsigned_to_nat(1u);
v___x_1898_ = lean_nat_add(v_idx_1891_, v___x_1897_);
lean_inc(v_jpLiveVarMap_1890_);
lean_inc_ref(v_derivedValMap_1888_);
lean_inc_ref(v_borrowedValues_1887_);
v___x_1899_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1899_, 0, v_borrowedValues_1887_);
lean_ctor_set(v___x_1899_, 1, v_derivedValMap_1888_);
lean_ctor_set(v___x_1899_, 2, v___x_1896_);
lean_ctor_set(v___x_1899_, 3, v_jpLiveVarMap_1890_);
lean_ctor_set(v___x_1899_, 4, v___x_1898_);
lean_inc(v___y_1880_);
lean_inc_ref(v___y_1879_);
lean_inc(v___y_1878_);
lean_inc_ref(v___y_1877_);
lean_inc(v___y_1876_);
v___x_1900_ = lean_apply_7(v_x_1874_, v___x_1899_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, lean_box(0));
return v___x_1900_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg___boxed(lean_object* v_decl_1904_, lean_object* v_x_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(v_decl_1904_, v_x_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(lean_object* v_00_u03b1_1914_, lean_object* v_decl_1915_, lean_object* v_x_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_){
_start:
{
lean_object* v_fvarId_1924_; lean_object* v_type_1925_; lean_object* v_value_1926_; lean_object* v___y_1928_; 
v_fvarId_1924_ = lean_ctor_get(v_decl_1915_, 0);
lean_inc(v_fvarId_1924_);
v_type_1925_ = lean_ctor_get(v_decl_1915_, 2);
lean_inc_ref(v_type_1925_);
v_value_1926_ = lean_ctor_get(v_decl_1915_, 3);
lean_inc(v_value_1926_);
lean_dec_ref(v_decl_1915_);
if (lean_obj_tag(v_value_1926_) == 5)
{
lean_object* v_i_1943_; lean_object* v___x_1944_; 
v_i_1943_ = lean_ctor_get(v_value_1926_, 0);
lean_inc_ref(v_i_1943_);
v___x_1944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1944_, 0, v_i_1943_);
v___y_1928_ = v___x_1944_;
goto v___jp_1927_;
}
else
{
lean_object* v___x_1945_; 
v___x_1945_ = lean_box(0);
v___y_1928_ = v___x_1945_;
goto v___jp_1927_;
}
v___jp_1927_:
{
lean_object* v_borrowedValues_1929_; lean_object* v_derivedValMap_1930_; lean_object* v_varMap_1931_; lean_object* v_jpLiveVarMap_1932_; lean_object* v_idx_1933_; uint8_t v___x_1934_; uint8_t v___x_1935_; uint8_t v___x_1936_; lean_object* v_varInfo_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
v_borrowedValues_1929_ = lean_ctor_get(v___y_1917_, 0);
v_derivedValMap_1930_ = lean_ctor_get(v___y_1917_, 1);
v_varMap_1931_ = lean_ctor_get(v___y_1917_, 2);
v_jpLiveVarMap_1932_ = lean_ctor_get(v___y_1917_, 3);
v_idx_1933_ = lean_ctor_get(v___y_1917_, 4);
v___x_1934_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1925_);
v___x_1935_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1925_);
lean_dec_ref(v_type_1925_);
v___x_1936_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_1926_);
lean_dec(v_value_1926_);
lean_inc(v_idx_1933_);
v_varInfo_1937_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_varInfo_1937_, 0, v_idx_1933_);
lean_ctor_set(v_varInfo_1937_, 1, v___y_1928_);
lean_ctor_set_uint8(v_varInfo_1937_, sizeof(void*)*2, v___x_1934_);
lean_ctor_set_uint8(v_varInfo_1937_, sizeof(void*)*2 + 1, v___x_1935_);
lean_ctor_set_uint8(v_varInfo_1937_, sizeof(void*)*2 + 2, v___x_1936_);
lean_inc(v_varMap_1931_);
v___x_1938_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1924_, v_varInfo_1937_, v_varMap_1931_);
v___x_1939_ = lean_unsigned_to_nat(1u);
v___x_1940_ = lean_nat_add(v_idx_1933_, v___x_1939_);
lean_inc(v_jpLiveVarMap_1932_);
lean_inc_ref(v_derivedValMap_1930_);
lean_inc_ref(v_borrowedValues_1929_);
v___x_1941_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1941_, 0, v_borrowedValues_1929_);
lean_ctor_set(v___x_1941_, 1, v_derivedValMap_1930_);
lean_ctor_set(v___x_1941_, 2, v___x_1938_);
lean_ctor_set(v___x_1941_, 3, v_jpLiveVarMap_1932_);
lean_ctor_set(v___x_1941_, 4, v___x_1940_);
lean_inc(v___y_1922_);
lean_inc_ref(v___y_1921_);
lean_inc(v___y_1920_);
lean_inc_ref(v___y_1919_);
lean_inc(v___y_1918_);
v___x_1942_ = lean_apply_7(v_x_1916_, v___x_1941_, v___y_1918_, v___y_1919_, v___y_1920_, v___y_1921_, v___y_1922_, lean_box(0));
return v___x_1942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___boxed(lean_object* v_00_u03b1_1946_, lean_object* v_decl_1947_, lean_object* v_x_1948_, lean_object* v___y_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_, lean_object* v___y_1954_, lean_object* v___y_1955_){
_start:
{
lean_object* v_res_1956_; 
v_res_1956_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(v_00_u03b1_1946_, v_decl_1947_, v_x_1948_, v___y_1949_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_, v___y_1954_);
lean_dec(v___y_1954_);
lean_dec_ref(v___y_1953_);
lean_dec(v___y_1952_);
lean_dec_ref(v___y_1951_);
lean_dec(v___y_1950_);
lean_dec_ref(v___y_1949_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(lean_object* v_discr_1957_, lean_object* v_c_1958_, lean_object* v_x_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v_borrowedValues_1967_; lean_object* v_derivedValMap_1968_; lean_object* v_varMap_1969_; lean_object* v_jpLiveVarMap_1970_; lean_object* v_idx_1971_; lean_object* v___y_1973_; lean_object* v___x_1978_; 
v_borrowedValues_1967_ = lean_ctor_get(v___y_1960_, 0);
v_derivedValMap_1968_ = lean_ctor_get(v___y_1960_, 1);
v_varMap_1969_ = lean_ctor_get(v___y_1960_, 2);
v_jpLiveVarMap_1970_ = lean_ctor_get(v___y_1960_, 3);
v_idx_1971_ = lean_ctor_get(v___y_1960_, 4);
v___x_1978_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_1969_, v_discr_1957_);
if (lean_obj_tag(v___x_1978_) == 0)
{
lean_dec_ref(v_c_1958_);
lean_dec(v_discr_1957_);
lean_inc(v_varMap_1969_);
v___y_1973_ = v_varMap_1969_;
goto v___jp_1972_;
}
else
{
lean_object* v_val_1979_; lean_object* v___x_1981_; uint8_t v_isShared_1982_; uint8_t v_isSharedCheck_2000_; 
v_val_1979_ = lean_ctor_get(v___x_1978_, 0);
v_isSharedCheck_2000_ = !lean_is_exclusive(v___x_1978_);
if (v_isSharedCheck_2000_ == 0)
{
v___x_1981_ = v___x_1978_;
v_isShared_1982_ = v_isSharedCheck_2000_;
goto v_resetjp_1980_;
}
else
{
lean_inc(v_val_1979_);
lean_dec(v___x_1978_);
v___x_1981_ = lean_box(0);
v_isShared_1982_ = v_isSharedCheck_2000_;
goto v_resetjp_1980_;
}
v_resetjp_1980_:
{
uint8_t v_persistent_1983_; lean_object* v___x_1985_; uint8_t v_isShared_1986_; uint8_t v_isSharedCheck_1997_; 
v_persistent_1983_ = lean_ctor_get_uint8(v_val_1979_, sizeof(void*)*2 + 2);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_val_1979_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; lean_object* v_unused_1999_; 
v_unused_1998_ = lean_ctor_get(v_val_1979_, 1);
lean_dec(v_unused_1998_);
v_unused_1999_ = lean_ctor_get(v_val_1979_, 0);
lean_dec(v_unused_1999_);
v___x_1985_ = v_val_1979_;
v_isShared_1986_ = v_isSharedCheck_1997_;
goto v_resetjp_1984_;
}
else
{
lean_dec(v_val_1979_);
v___x_1985_ = lean_box(0);
v_isShared_1986_ = v_isSharedCheck_1997_;
goto v_resetjp_1984_;
}
v_resetjp_1984_:
{
uint8_t v___x_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1991_; 
v___x_1987_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_c_1958_);
v___x_1988_ = lean_unsigned_to_nat(1u);
v___x_1989_ = lean_nat_add(v_idx_1971_, v___x_1988_);
if (v_isShared_1982_ == 0)
{
lean_ctor_set(v___x_1981_, 0, v_c_1958_);
v___x_1991_ = v___x_1981_;
goto v_reusejp_1990_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v_c_1958_);
v___x_1991_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1990_;
}
v_reusejp_1990_:
{
lean_object* v___x_1993_; 
if (v_isShared_1986_ == 0)
{
lean_ctor_set(v___x_1985_, 1, v___x_1991_);
lean_ctor_set(v___x_1985_, 0, v___x_1989_);
v___x_1993_ = v___x_1985_;
goto v_reusejp_1992_;
}
else
{
lean_object* v_reuseFailAlloc_1995_; 
v_reuseFailAlloc_1995_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_1995_, 0, v___x_1989_);
lean_ctor_set(v_reuseFailAlloc_1995_, 1, v___x_1991_);
lean_ctor_set_uint8(v_reuseFailAlloc_1995_, sizeof(void*)*2 + 2, v_persistent_1983_);
v___x_1993_ = v_reuseFailAlloc_1995_;
goto v_reusejp_1992_;
}
v_reusejp_1992_:
{
lean_object* v___x_1994_; 
lean_ctor_set_uint8(v___x_1993_, sizeof(void*)*2, v___x_1987_);
lean_ctor_set_uint8(v___x_1993_, sizeof(void*)*2 + 1, v___x_1987_);
lean_inc(v_varMap_1969_);
v___x_1994_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_1957_, v___x_1993_, v_varMap_1969_);
v___y_1973_ = v___x_1994_;
goto v___jp_1972_;
}
}
}
}
}
v___jp_1972_:
{
lean_object* v___x_1974_; lean_object* v___x_1975_; lean_object* v___x_1976_; lean_object* v___x_1977_; 
v___x_1974_ = lean_unsigned_to_nat(1u);
v___x_1975_ = lean_nat_add(v_idx_1971_, v___x_1974_);
lean_inc(v_jpLiveVarMap_1970_);
lean_inc_ref(v_derivedValMap_1968_);
lean_inc_ref(v_borrowedValues_1967_);
v___x_1976_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1976_, 0, v_borrowedValues_1967_);
lean_ctor_set(v___x_1976_, 1, v_derivedValMap_1968_);
lean_ctor_set(v___x_1976_, 2, v___y_1973_);
lean_ctor_set(v___x_1976_, 3, v_jpLiveVarMap_1970_);
lean_ctor_set(v___x_1976_, 4, v___x_1975_);
lean_inc(v___y_1965_);
lean_inc_ref(v___y_1964_);
lean_inc(v___y_1963_);
lean_inc_ref(v___y_1962_);
lean_inc(v___y_1961_);
v___x_1977_ = lean_apply_7(v_x_1959_, v___x_1976_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_, lean_box(0));
return v___x_1977_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg___boxed(lean_object* v_discr_2001_, lean_object* v_c_2002_, lean_object* v_x_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_){
_start:
{
lean_object* v_res_2011_; 
v_res_2011_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(v_discr_2001_, v_c_2002_, v_x_2003_, v___y_2004_, v___y_2005_, v___y_2006_, v___y_2007_, v___y_2008_, v___y_2009_);
lean_dec(v___y_2009_);
lean_dec_ref(v___y_2008_);
lean_dec(v___y_2007_);
lean_dec_ref(v___y_2006_);
lean_dec(v___y_2005_);
lean_dec_ref(v___y_2004_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(lean_object* v_00_u03b1_2012_, lean_object* v_discr_2013_, lean_object* v_c_2014_, lean_object* v_x_2015_, lean_object* v___y_2016_, lean_object* v___y_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_){
_start:
{
lean_object* v_borrowedValues_2023_; lean_object* v_derivedValMap_2024_; lean_object* v_varMap_2025_; lean_object* v_jpLiveVarMap_2026_; lean_object* v_idx_2027_; lean_object* v___y_2029_; lean_object* v___x_2034_; 
v_borrowedValues_2023_ = lean_ctor_get(v___y_2016_, 0);
v_derivedValMap_2024_ = lean_ctor_get(v___y_2016_, 1);
v_varMap_2025_ = lean_ctor_get(v___y_2016_, 2);
v_jpLiveVarMap_2026_ = lean_ctor_get(v___y_2016_, 3);
v_idx_2027_ = lean_ctor_get(v___y_2016_, 4);
v___x_2034_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_2025_, v_discr_2013_);
if (lean_obj_tag(v___x_2034_) == 0)
{
lean_dec_ref(v_c_2014_);
lean_dec(v_discr_2013_);
lean_inc(v_varMap_2025_);
v___y_2029_ = v_varMap_2025_;
goto v___jp_2028_;
}
else
{
lean_object* v_val_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2056_; 
v_val_2035_ = lean_ctor_get(v___x_2034_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_2034_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2037_ = v___x_2034_;
v_isShared_2038_ = v_isSharedCheck_2056_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_val_2035_);
lean_dec(v___x_2034_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2056_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
uint8_t v_persistent_2039_; lean_object* v___x_2041_; uint8_t v_isShared_2042_; uint8_t v_isSharedCheck_2053_; 
v_persistent_2039_ = lean_ctor_get_uint8(v_val_2035_, sizeof(void*)*2 + 2);
v_isSharedCheck_2053_ = !lean_is_exclusive(v_val_2035_);
if (v_isSharedCheck_2053_ == 0)
{
lean_object* v_unused_2054_; lean_object* v_unused_2055_; 
v_unused_2054_ = lean_ctor_get(v_val_2035_, 1);
lean_dec(v_unused_2054_);
v_unused_2055_ = lean_ctor_get(v_val_2035_, 0);
lean_dec(v_unused_2055_);
v___x_2041_ = v_val_2035_;
v_isShared_2042_ = v_isSharedCheck_2053_;
goto v_resetjp_2040_;
}
else
{
lean_dec(v_val_2035_);
v___x_2041_ = lean_box(0);
v_isShared_2042_ = v_isSharedCheck_2053_;
goto v_resetjp_2040_;
}
v_resetjp_2040_:
{
uint8_t v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2047_; 
v___x_2043_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_c_2014_);
v___x_2044_ = lean_unsigned_to_nat(1u);
v___x_2045_ = lean_nat_add(v_idx_2027_, v___x_2044_);
if (v_isShared_2038_ == 0)
{
lean_ctor_set(v___x_2037_, 0, v_c_2014_);
v___x_2047_ = v___x_2037_;
goto v_reusejp_2046_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_c_2014_);
v___x_2047_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2046_;
}
v_reusejp_2046_:
{
lean_object* v___x_2049_; 
if (v_isShared_2042_ == 0)
{
lean_ctor_set(v___x_2041_, 1, v___x_2047_);
lean_ctor_set(v___x_2041_, 0, v___x_2045_);
v___x_2049_ = v___x_2041_;
goto v_reusejp_2048_;
}
else
{
lean_object* v_reuseFailAlloc_2051_; 
v_reuseFailAlloc_2051_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_2051_, 0, v___x_2045_);
lean_ctor_set(v_reuseFailAlloc_2051_, 1, v___x_2047_);
lean_ctor_set_uint8(v_reuseFailAlloc_2051_, sizeof(void*)*2 + 2, v_persistent_2039_);
v___x_2049_ = v_reuseFailAlloc_2051_;
goto v_reusejp_2048_;
}
v_reusejp_2048_:
{
lean_object* v___x_2050_; 
lean_ctor_set_uint8(v___x_2049_, sizeof(void*)*2, v___x_2043_);
lean_ctor_set_uint8(v___x_2049_, sizeof(void*)*2 + 1, v___x_2043_);
lean_inc(v_varMap_2025_);
v___x_2050_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_2013_, v___x_2049_, v_varMap_2025_);
v___y_2029_ = v___x_2050_;
goto v___jp_2028_;
}
}
}
}
}
v___jp_2028_:
{
lean_object* v___x_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2030_ = lean_unsigned_to_nat(1u);
v___x_2031_ = lean_nat_add(v_idx_2027_, v___x_2030_);
lean_inc(v_jpLiveVarMap_2026_);
lean_inc_ref(v_derivedValMap_2024_);
lean_inc_ref(v_borrowedValues_2023_);
v___x_2032_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2032_, 0, v_borrowedValues_2023_);
lean_ctor_set(v___x_2032_, 1, v_derivedValMap_2024_);
lean_ctor_set(v___x_2032_, 2, v___y_2029_);
lean_ctor_set(v___x_2032_, 3, v_jpLiveVarMap_2026_);
lean_ctor_set(v___x_2032_, 4, v___x_2031_);
lean_inc(v___y_2021_);
lean_inc_ref(v___y_2020_);
lean_inc(v___y_2019_);
lean_inc_ref(v___y_2018_);
lean_inc(v___y_2017_);
v___x_2033_ = lean_apply_7(v_x_2015_, v___x_2032_, v___y_2017_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_, lean_box(0));
return v___x_2033_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___boxed(lean_object* v_00_u03b1_2057_, lean_object* v_discr_2058_, lean_object* v_c_2059_, lean_object* v_x_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_){
_start:
{
lean_object* v_res_2068_; 
v_res_2068_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(v_00_u03b1_2057_, v_discr_2058_, v_c_2059_, v_x_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_);
lean_dec(v___y_2066_);
lean_dec_ref(v___y_2065_);
lean_dec(v___y_2064_);
lean_dec_ref(v___y_2063_);
lean_dec(v___y_2062_);
lean_dec_ref(v___y_2061_);
return v_res_2068_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(lean_object* v_x_2069_, lean_object* v___y_2070_, lean_object* v___y_2071_, lean_object* v___y_2072_, lean_object* v___y_2073_, lean_object* v___y_2074_, lean_object* v___y_2075_){
_start:
{
lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2077_ = lean_st_ref_get(v___y_2071_);
v___x_2078_ = lean_st_ref_take(v___y_2071_);
lean_dec(v___x_2078_);
v___x_2079_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_2080_ = lean_st_ref_put(v___y_2071_, v___x_2079_);
lean_inc(v___y_2075_);
lean_inc_ref(v___y_2074_);
lean_inc(v___y_2073_);
lean_inc_ref(v___y_2072_);
lean_inc(v___y_2071_);
lean_inc_ref(v___y_2070_);
v___x_2081_ = lean_apply_7(v_x_2069_, v___y_2070_, v___y_2071_, v___y_2072_, v___y_2073_, v___y_2074_, v___y_2075_, lean_box(0));
if (lean_obj_tag(v___x_2081_) == 0)
{
lean_object* v_a_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2093_; 
v_a_2082_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2084_ = v___x_2081_;
v_isShared_2085_ = v_isSharedCheck_2093_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_a_2082_);
lean_dec(v___x_2081_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2093_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2091_; 
v___x_2086_ = lean_st_ref_get(v___y_2071_);
v___x_2087_ = lean_st_ref_take(v___y_2071_);
lean_dec(v___x_2087_);
v___x_2088_ = lean_st_ref_put(v___y_2071_, v___x_2077_);
v___x_2089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2089_, 0, v_a_2082_);
lean_ctor_set(v___x_2089_, 1, v___x_2086_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 0, v___x_2089_);
v___x_2091_ = v___x_2084_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
return v___x_2091_;
}
}
}
else
{
lean_object* v_a_2094_; lean_object* v___x_2096_; uint8_t v_isShared_2097_; uint8_t v_isSharedCheck_2101_; 
lean_dec(v___x_2077_);
v_a_2094_ = lean_ctor_get(v___x_2081_, 0);
v_isSharedCheck_2101_ = !lean_is_exclusive(v___x_2081_);
if (v_isSharedCheck_2101_ == 0)
{
v___x_2096_ = v___x_2081_;
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
else
{
lean_inc(v_a_2094_);
lean_dec(v___x_2081_);
v___x_2096_ = lean_box(0);
v_isShared_2097_ = v_isSharedCheck_2101_;
goto v_resetjp_2095_;
}
v_resetjp_2095_:
{
lean_object* v___x_2099_; 
if (v_isShared_2097_ == 0)
{
v___x_2099_ = v___x_2096_;
goto v_reusejp_2098_;
}
else
{
lean_object* v_reuseFailAlloc_2100_; 
v_reuseFailAlloc_2100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2100_, 0, v_a_2094_);
v___x_2099_ = v_reuseFailAlloc_2100_;
goto v_reusejp_2098_;
}
v_reusejp_2098_:
{
return v___x_2099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg___boxed(lean_object* v_x_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_, lean_object* v___y_2105_, lean_object* v___y_2106_, lean_object* v___y_2107_, lean_object* v___y_2108_, lean_object* v___y_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(v_x_2102_, v___y_2103_, v___y_2104_, v___y_2105_, v___y_2106_, v___y_2107_, v___y_2108_);
lean_dec(v___y_2108_);
lean_dec_ref(v___y_2107_);
lean_dec(v___y_2106_);
lean_dec_ref(v___y_2105_);
lean_dec(v___y_2104_);
lean_dec_ref(v___y_2103_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(lean_object* v_00_u03b1_2111_, lean_object* v_x_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_, lean_object* v___y_2115_, lean_object* v___y_2116_, lean_object* v___y_2117_, lean_object* v___y_2118_){
_start:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; 
v___x_2120_ = lean_st_ref_get(v___y_2114_);
v___x_2121_ = lean_st_ref_take(v___y_2114_);
lean_dec(v___x_2121_);
v___x_2122_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_2123_ = lean_st_ref_put(v___y_2114_, v___x_2122_);
lean_inc(v___y_2118_);
lean_inc_ref(v___y_2117_);
lean_inc(v___y_2116_);
lean_inc_ref(v___y_2115_);
lean_inc(v___y_2114_);
lean_inc_ref(v___y_2113_);
v___x_2124_ = lean_apply_7(v_x_2112_, v___y_2113_, v___y_2114_, v___y_2115_, v___y_2116_, v___y_2117_, v___y_2118_, lean_box(0));
if (lean_obj_tag(v___x_2124_) == 0)
{
lean_object* v_a_2125_; lean_object* v___x_2127_; uint8_t v_isShared_2128_; uint8_t v_isSharedCheck_2136_; 
v_a_2125_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2136_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2136_ == 0)
{
v___x_2127_ = v___x_2124_;
v_isShared_2128_ = v_isSharedCheck_2136_;
goto v_resetjp_2126_;
}
else
{
lean_inc(v_a_2125_);
lean_dec(v___x_2124_);
v___x_2127_ = lean_box(0);
v_isShared_2128_ = v_isSharedCheck_2136_;
goto v_resetjp_2126_;
}
v_resetjp_2126_:
{
lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2134_; 
v___x_2129_ = lean_st_ref_get(v___y_2114_);
v___x_2130_ = lean_st_ref_take(v___y_2114_);
lean_dec(v___x_2130_);
v___x_2131_ = lean_st_ref_put(v___y_2114_, v___x_2120_);
v___x_2132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2132_, 0, v_a_2125_);
lean_ctor_set(v___x_2132_, 1, v___x_2129_);
if (v_isShared_2128_ == 0)
{
lean_ctor_set(v___x_2127_, 0, v___x_2132_);
v___x_2134_ = v___x_2127_;
goto v_reusejp_2133_;
}
else
{
lean_object* v_reuseFailAlloc_2135_; 
v_reuseFailAlloc_2135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2135_, 0, v___x_2132_);
v___x_2134_ = v_reuseFailAlloc_2135_;
goto v_reusejp_2133_;
}
v_reusejp_2133_:
{
return v___x_2134_;
}
}
}
else
{
lean_object* v_a_2137_; lean_object* v___x_2139_; uint8_t v_isShared_2140_; uint8_t v_isSharedCheck_2144_; 
lean_dec(v___x_2120_);
v_a_2137_ = lean_ctor_get(v___x_2124_, 0);
v_isSharedCheck_2144_ = !lean_is_exclusive(v___x_2124_);
if (v_isSharedCheck_2144_ == 0)
{
v___x_2139_ = v___x_2124_;
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
else
{
lean_inc(v_a_2137_);
lean_dec(v___x_2124_);
v___x_2139_ = lean_box(0);
v_isShared_2140_ = v_isSharedCheck_2144_;
goto v_resetjp_2138_;
}
v_resetjp_2138_:
{
lean_object* v___x_2142_; 
if (v_isShared_2140_ == 0)
{
v___x_2142_ = v___x_2139_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v_a_2137_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___boxed(lean_object* v_00_u03b1_2145_, lean_object* v_x_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_){
_start:
{
lean_object* v_res_2154_; 
v_res_2154_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(v_00_u03b1_2145_, v_x_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
lean_dec(v___y_2150_);
lean_dec_ref(v___y_2149_);
lean_dec(v___y_2148_);
lean_dec_ref(v___y_2147_);
return v_res_2154_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(lean_object* v_liveVars_2155_, uint8_t v___x_2156_, lean_object* v___x_2157_, lean_object* v___x_2158_, lean_object* v_v_2159_){
_start:
{
uint8_t v___y_2161_; lean_object* v_vars_2163_; lean_object* v_borrows_2164_; uint8_t v___x_2165_; 
v_vars_2163_ = lean_ctor_get(v_liveVars_2155_, 0);
v_borrows_2164_ = lean_ctor_get(v_liveVars_2155_, 1);
lean_inc(v_v_2159_);
lean_inc_ref(v___x_2158_);
lean_inc_ref(v___x_2157_);
v___x_2165_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2157_, v___x_2158_, v_vars_2163_, v_v_2159_);
if (v___x_2165_ == 0)
{
uint8_t v___x_2166_; 
v___x_2166_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2157_, v___x_2158_, v_borrows_2164_, v_v_2159_);
v___y_2161_ = v___x_2166_;
goto v___jp_2160_;
}
else
{
lean_dec(v_v_2159_);
lean_dec_ref(v___x_2158_);
lean_dec_ref(v___x_2157_);
v___y_2161_ = v___x_2165_;
goto v___jp_2160_;
}
v___jp_2160_:
{
if (v___y_2161_ == 0)
{
return v___x_2156_;
}
else
{
uint8_t v___x_2162_; 
v___x_2162_ = 0;
return v___x_2162_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed(lean_object* v_liveVars_2167_, lean_object* v___x_2168_, lean_object* v___x_2169_, lean_object* v___x_2170_, lean_object* v_v_2171_){
_start:
{
uint8_t v___x_343__boxed_2172_; uint8_t v_res_2173_; lean_object* v_r_2174_; 
v___x_343__boxed_2172_ = lean_unbox(v___x_2168_);
v_res_2173_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(v_liveVars_2167_, v___x_343__boxed_2172_, v___x_2169_, v___x_2170_, v_v_2171_);
lean_dec_ref(v_liveVars_2167_);
v_r_2174_ = lean_box(v_res_2173_);
return v_r_2174_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(lean_object* v___x_2175_, lean_object* v___x_2176_, lean_object* v___x_2177_, lean_object* v_derivedValMap_2178_, lean_object* v_shouldAdd_2179_, lean_object* v_liveVars_2180_, lean_object* v_child_2181_){
_start:
{
lean_object* v_cinfo_2198_; lean_object* v_parents_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; uint8_t v___x_2203_; 
lean_inc(v_child_2181_);
lean_inc_ref(v___x_2176_);
lean_inc_ref(v___x_2175_);
v_cinfo_2198_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(v___x_2175_, v___x_2176_, v___x_2177_, v_derivedValMap_2178_, v_child_2181_);
v_parents_2199_ = lean_ctor_get(v_cinfo_2198_, 0);
lean_inc_ref(v_parents_2199_);
lean_dec(v_cinfo_2198_);
v___x_2200_ = lean_unsigned_to_nat(0u);
v___x_2201_ = lean_array_get_size(v_parents_2199_);
v___x_2202_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_2203_ = lean_nat_dec_lt(v___x_2200_, v___x_2201_);
if (v___x_2203_ == 0)
{
lean_dec_ref(v_parents_2199_);
goto v___jp_2182_;
}
else
{
if (v___x_2203_ == 0)
{
lean_dec_ref(v_parents_2199_);
goto v___jp_2182_;
}
else
{
lean_object* v___x_2204_; lean_object* v___f_2205_; size_t v___x_2206_; size_t v___x_2207_; lean_object* v___x_2208_; uint8_t v___x_2209_; 
v___x_2204_ = lean_box(v___x_2203_);
lean_inc_ref(v___x_2176_);
lean_inc_ref(v___x_2175_);
lean_inc_ref(v_liveVars_2180_);
v___f_2205_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2205_, 0, v_liveVars_2180_);
lean_closure_set(v___f_2205_, 1, v___x_2204_);
lean_closure_set(v___f_2205_, 2, v___x_2175_);
lean_closure_set(v___f_2205_, 3, v___x_2176_);
v___x_2206_ = ((size_t)0ULL);
v___x_2207_ = lean_usize_of_nat(v___x_2201_);
v___x_2208_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2202_, v___f_2205_, v_parents_2199_, v___x_2206_, v___x_2207_);
v___x_2209_ = lean_unbox(v___x_2208_);
lean_dec(v___x_2208_);
if (v___x_2209_ == 0)
{
goto v___jp_2182_;
}
else
{
lean_object* v___x_2210_; 
lean_dec_ref(v___x_2176_);
lean_dec_ref(v___x_2175_);
v___x_2210_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_child_2181_, v_derivedValMap_2178_, v_liveVars_2180_, v_shouldAdd_2179_);
return v___x_2210_;
}
}
}
v___jp_2182_:
{
lean_object* v___x_2183_; uint8_t v___x_2184_; 
lean_inc_ref(v_shouldAdd_2179_);
lean_inc(v_child_2181_);
v___x_2183_ = lean_apply_1(v_shouldAdd_2179_, v_child_2181_);
v___x_2184_ = lean_unbox(v___x_2183_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2185_; 
lean_dec_ref(v___x_2176_);
lean_dec_ref(v___x_2175_);
v___x_2185_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_child_2181_, v_derivedValMap_2178_, v_liveVars_2180_, v_shouldAdd_2179_);
return v___x_2185_;
}
else
{
lean_object* v_vars_2186_; lean_object* v_borrows_2187_; lean_object* v___x_2189_; uint8_t v_isShared_2190_; uint8_t v_isSharedCheck_2197_; 
v_vars_2186_ = lean_ctor_get(v_liveVars_2180_, 0);
v_borrows_2187_ = lean_ctor_get(v_liveVars_2180_, 1);
v_isSharedCheck_2197_ = !lean_is_exclusive(v_liveVars_2180_);
if (v_isSharedCheck_2197_ == 0)
{
v___x_2189_ = v_liveVars_2180_;
v_isShared_2190_ = v_isSharedCheck_2197_;
goto v_resetjp_2188_;
}
else
{
lean_inc(v_borrows_2187_);
lean_inc(v_vars_2186_);
lean_dec(v_liveVars_2180_);
v___x_2189_ = lean_box(0);
v_isShared_2190_ = v_isSharedCheck_2197_;
goto v_resetjp_2188_;
}
v_resetjp_2188_:
{
lean_object* v___x_2191_; lean_object* v___x_2192_; lean_object* v___x_2194_; 
v___x_2191_ = lean_box(0);
lean_inc(v_child_2181_);
v___x_2192_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2175_, v___x_2176_, v_borrows_2187_, v_child_2181_, v___x_2191_);
if (v_isShared_2190_ == 0)
{
lean_ctor_set(v___x_2189_, 1, v___x_2192_);
v___x_2194_ = v___x_2189_;
goto v_reusejp_2193_;
}
else
{
lean_object* v_reuseFailAlloc_2196_; 
v_reuseFailAlloc_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2196_, 0, v_vars_2186_);
lean_ctor_set(v_reuseFailAlloc_2196_, 1, v___x_2192_);
v___x_2194_ = v_reuseFailAlloc_2196_;
goto v_reusejp_2193_;
}
v_reusejp_2193_:
{
lean_object* v___x_2195_; 
v___x_2195_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_child_2181_, v_derivedValMap_2178_, v___x_2194_, v_shouldAdd_2179_);
return v___x_2195_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed(lean_object* v___x_2211_, lean_object* v___x_2212_, lean_object* v___x_2213_, lean_object* v_derivedValMap_2214_, lean_object* v_shouldAdd_2215_, lean_object* v_liveVars_2216_, lean_object* v_child_2217_){
_start:
{
lean_object* v_res_2218_; 
v_res_2218_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(v___x_2211_, v___x_2212_, v___x_2213_, v_derivedValMap_2214_, v_shouldAdd_2215_, v_liveVars_2216_, v_child_2217_);
lean_dec_ref(v___x_2213_);
return v_res_2218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(lean_object* v_fvarId_2219_, lean_object* v_derivedValMap_2220_, lean_object* v_liveVars_2221_, lean_object* v_shouldAdd_2222_){
_start:
{
lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; 
v___x_2223_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2224_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_2225_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_2223_, v___x_2224_, v_derivedValMap_2220_, v_fvarId_2219_);
if (lean_obj_tag(v___x_2225_) == 1)
{
lean_object* v_val_2226_; lean_object* v_children_2227_; lean_object* v___x_2228_; lean_object* v___f_2229_; lean_object* v___x_2230_; 
v_val_2226_ = lean_ctor_get(v___x_2225_, 0);
lean_inc(v_val_2226_);
lean_dec_ref_known(v___x_2225_, 1);
v_children_2227_ = lean_ctor_get(v_val_2226_, 1);
lean_inc_ref(v_children_2227_);
lean_dec(v_val_2226_);
v___x_2228_ = l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
v___f_2229_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2229_, 0, v___x_2223_);
lean_closure_set(v___f_2229_, 1, v___x_2224_);
lean_closure_set(v___f_2229_, 2, v___x_2228_);
lean_closure_set(v___f_2229_, 3, v_derivedValMap_2220_);
lean_closure_set(v___f_2229_, 4, v_shouldAdd_2222_);
v___x_2230_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_2229_, v_liveVars_2221_, v_children_2227_);
lean_dec_ref(v_children_2227_);
return v___x_2230_;
}
else
{
lean_dec(v___x_2225_);
lean_dec_ref(v_shouldAdd_2222_);
lean_dec_ref(v_derivedValMap_2220_);
return v_liveVars_2221_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(lean_object* v_val_2231_, lean_object* v___x_2232_, lean_object* v___x_2233_, lean_object* v_shouldBorrow_2234_, uint8_t v___x_2235_, lean_object* v_y_2236_){
_start:
{
lean_object* v_vars_2237_; uint8_t v___x_2238_; 
v_vars_2237_ = lean_ctor_get(v_val_2231_, 0);
lean_inc(v_y_2236_);
v___x_2238_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2232_, v___x_2233_, v_vars_2237_, v_y_2236_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; uint8_t v___x_2240_; 
v___x_2239_ = lean_apply_1(v_shouldBorrow_2234_, v_y_2236_);
v___x_2240_ = lean_unbox(v___x_2239_);
return v___x_2240_;
}
else
{
lean_dec(v_y_2236_);
lean_dec_ref(v_shouldBorrow_2234_);
return v___x_2235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed(lean_object* v_val_2241_, lean_object* v___x_2242_, lean_object* v___x_2243_, lean_object* v_shouldBorrow_2244_, lean_object* v___x_2245_, lean_object* v_y_2246_){
_start:
{
uint8_t v___x_2270__boxed_2247_; uint8_t v_res_2248_; lean_object* v_r_2249_; 
v___x_2270__boxed_2247_ = lean_unbox(v___x_2245_);
v_res_2248_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(v_val_2241_, v___x_2242_, v___x_2243_, v_shouldBorrow_2244_, v___x_2270__boxed_2247_, v_y_2246_);
lean_dec_ref(v_val_2241_);
v_r_2249_ = lean_box(v_res_2248_);
return v_r_2249_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(lean_object* v_fvarId_2250_, lean_object* v_shouldBorrow_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_){
_start:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v_vars_2258_; uint8_t v___x_2259_; 
v___x_2255_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2256_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_2257_ = lean_st_ref_get(v___y_2253_);
v_vars_2258_ = lean_ctor_get(v___x_2257_, 0);
lean_inc_ref(v_vars_2258_);
lean_dec(v___x_2257_);
lean_inc(v_fvarId_2250_);
v___x_2259_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2255_, v___x_2256_, v_vars_2258_, v_fvarId_2250_);
lean_dec_ref(v_vars_2258_);
if (v___x_2259_ == 0)
{
lean_object* v_derivedValMap_2260_; lean_object* v___x_2261_; lean_object* v_vars_2262_; lean_object* v_borrows_2263_; lean_object* v___x_2265_; uint8_t v_isShared_2266_; uint8_t v_isSharedCheck_2279_; 
v_derivedValMap_2260_ = lean_ctor_get(v___y_2252_, 1);
v___x_2261_ = lean_st_ref_take(v___y_2253_);
v_vars_2262_ = lean_ctor_get(v___x_2261_, 0);
v_borrows_2263_ = lean_ctor_get(v___x_2261_, 1);
v_isSharedCheck_2279_ = !lean_is_exclusive(v___x_2261_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2265_ = v___x_2261_;
v_isShared_2266_ = v_isSharedCheck_2279_;
goto v_resetjp_2264_;
}
else
{
lean_inc(v_borrows_2263_);
lean_inc(v_vars_2262_);
lean_dec(v___x_2261_);
v___x_2265_ = lean_box(0);
v_isShared_2266_ = v_isSharedCheck_2279_;
goto v_resetjp_2264_;
}
v_resetjp_2264_:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2270_; 
v___x_2267_ = lean_box(0);
lean_inc(v_fvarId_2250_);
v___x_2268_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2255_, v___x_2256_, v_vars_2262_, v_fvarId_2250_, v___x_2267_);
if (v_isShared_2266_ == 0)
{
lean_ctor_set(v___x_2265_, 0, v___x_2268_);
v___x_2270_ = v___x_2265_;
goto v_reusejp_2269_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2268_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v_borrows_2263_);
v___x_2270_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2269_;
}
v_reusejp_2269_:
{
lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___f_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; 
v___x_2271_ = lean_st_ref_put(v___y_2253_, v___x_2270_);
v___x_2272_ = lean_st_ref_take(v___y_2253_);
v___x_2273_ = lean_box(v___x_2259_);
lean_inc(v___x_2272_);
v___f_2274_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2274_, 0, v___x_2272_);
lean_closure_set(v___f_2274_, 1, v___x_2255_);
lean_closure_set(v___f_2274_, 2, v___x_2256_);
lean_closure_set(v___f_2274_, 3, v_shouldBorrow_2251_);
lean_closure_set(v___f_2274_, 4, v___x_2273_);
lean_inc_ref(v_derivedValMap_2260_);
v___x_2275_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_fvarId_2250_, v_derivedValMap_2260_, v___x_2272_, v___f_2274_);
v___x_2276_ = lean_st_ref_put(v___y_2253_, v___x_2275_);
v___x_2277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2277_, 0, v___x_2267_);
return v___x_2277_;
}
}
}
else
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
lean_dec_ref(v_shouldBorrow_2251_);
lean_dec(v_fvarId_2250_);
v___x_2280_ = lean_box(0);
v___x_2281_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2281_, 0, v___x_2280_);
return v___x_2281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___boxed(lean_object* v_fvarId_2282_, lean_object* v_shouldBorrow_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_){
_start:
{
lean_object* v_res_2287_; 
v_res_2287_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(v_fvarId_2282_, v_shouldBorrow_2283_, v___y_2284_, v___y_2285_);
lean_dec(v___y_2285_);
lean_dec_ref(v___y_2284_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(lean_object* v_fvarId_2288_, lean_object* v_shouldBorrow_2289_, lean_object* v___y_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_){
_start:
{
lean_object* v___x_2297_; 
v___x_2297_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(v_fvarId_2288_, v_shouldBorrow_2289_, v___y_2290_, v___y_2291_);
return v___x_2297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___boxed(lean_object* v_fvarId_2298_, lean_object* v_shouldBorrow_2299_, lean_object* v___y_2300_, lean_object* v___y_2301_, lean_object* v___y_2302_, lean_object* v___y_2303_, lean_object* v___y_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_){
_start:
{
lean_object* v_res_2307_; 
v_res_2307_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(v_fvarId_2298_, v_shouldBorrow_2299_, v___y_2300_, v___y_2301_, v___y_2302_, v___y_2303_, v___y_2304_, v___y_2305_);
lean_dec(v___y_2305_);
lean_dec_ref(v___y_2304_);
lean_dec(v___y_2303_);
lean_dec_ref(v___y_2302_);
lean_dec(v___y_2301_);
lean_dec_ref(v___y_2300_);
return v_res_2307_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(lean_object* v_m_2308_, lean_object* v_a_2309_, lean_object* v_b_2310_){
_start:
{
lean_object* v_size_2311_; lean_object* v_buckets_2312_; lean_object* v___x_2313_; uint64_t v___x_2314_; uint64_t v___x_2315_; uint64_t v___x_2316_; uint64_t v_fold_2317_; uint64_t v___x_2318_; uint64_t v___x_2319_; uint64_t v___x_2320_; size_t v___x_2321_; size_t v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; size_t v___x_2325_; lean_object* v_bkt_2326_; uint8_t v___x_2327_; 
v_size_2311_ = lean_ctor_get(v_m_2308_, 0);
v_buckets_2312_ = lean_ctor_get(v_m_2308_, 1);
v___x_2313_ = lean_array_get_size(v_buckets_2312_);
v___x_2314_ = l_Lean_instHashableFVarId_hash(v_a_2309_);
v___x_2315_ = 32ULL;
v___x_2316_ = lean_uint64_shift_right(v___x_2314_, v___x_2315_);
v_fold_2317_ = lean_uint64_xor(v___x_2314_, v___x_2316_);
v___x_2318_ = 16ULL;
v___x_2319_ = lean_uint64_shift_right(v_fold_2317_, v___x_2318_);
v___x_2320_ = lean_uint64_xor(v_fold_2317_, v___x_2319_);
v___x_2321_ = lean_uint64_to_usize(v___x_2320_);
v___x_2322_ = lean_usize_of_nat(v___x_2313_);
v___x_2323_ = ((size_t)1ULL);
v___x_2324_ = lean_usize_sub(v___x_2322_, v___x_2323_);
v___x_2325_ = lean_usize_land(v___x_2321_, v___x_2324_);
v_bkt_2326_ = lean_array_uget_borrowed(v_buckets_2312_, v___x_2325_);
v___x_2327_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_2309_, v_bkt_2326_);
if (v___x_2327_ == 0)
{
lean_object* v___x_2329_; uint8_t v_isShared_2330_; uint8_t v_isSharedCheck_2348_; 
lean_inc_ref(v_buckets_2312_);
lean_inc(v_size_2311_);
v_isSharedCheck_2348_ = !lean_is_exclusive(v_m_2308_);
if (v_isSharedCheck_2348_ == 0)
{
lean_object* v_unused_2349_; lean_object* v_unused_2350_; 
v_unused_2349_ = lean_ctor_get(v_m_2308_, 1);
lean_dec(v_unused_2349_);
v_unused_2350_ = lean_ctor_get(v_m_2308_, 0);
lean_dec(v_unused_2350_);
v___x_2329_ = v_m_2308_;
v_isShared_2330_ = v_isSharedCheck_2348_;
goto v_resetjp_2328_;
}
else
{
lean_dec(v_m_2308_);
v___x_2329_ = lean_box(0);
v_isShared_2330_ = v_isSharedCheck_2348_;
goto v_resetjp_2328_;
}
v_resetjp_2328_:
{
lean_object* v___x_2331_; lean_object* v_size_x27_2332_; lean_object* v___x_2333_; lean_object* v_buckets_x27_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; uint8_t v___x_2340_; 
v___x_2331_ = lean_unsigned_to_nat(1u);
v_size_x27_2332_ = lean_nat_add(v_size_2311_, v___x_2331_);
lean_dec(v_size_2311_);
lean_inc(v_bkt_2326_);
v___x_2333_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2333_, 0, v_a_2309_);
lean_ctor_set(v___x_2333_, 1, v_b_2310_);
lean_ctor_set(v___x_2333_, 2, v_bkt_2326_);
v_buckets_x27_2334_ = lean_array_uset(v_buckets_2312_, v___x_2325_, v___x_2333_);
v___x_2335_ = lean_unsigned_to_nat(4u);
v___x_2336_ = lean_nat_mul(v_size_x27_2332_, v___x_2335_);
v___x_2337_ = lean_unsigned_to_nat(3u);
v___x_2338_ = lean_nat_div(v___x_2336_, v___x_2337_);
lean_dec(v___x_2336_);
v___x_2339_ = lean_array_get_size(v_buckets_x27_2334_);
v___x_2340_ = lean_nat_dec_le(v___x_2338_, v___x_2339_);
lean_dec(v___x_2338_);
if (v___x_2340_ == 0)
{
lean_object* v_val_2341_; lean_object* v___x_2343_; 
v_val_2341_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3___redArg(v_buckets_x27_2334_);
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 1, v_val_2341_);
lean_ctor_set(v___x_2329_, 0, v_size_x27_2332_);
v___x_2343_ = v___x_2329_;
goto v_reusejp_2342_;
}
else
{
lean_object* v_reuseFailAlloc_2344_; 
v_reuseFailAlloc_2344_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2344_, 0, v_size_x27_2332_);
lean_ctor_set(v_reuseFailAlloc_2344_, 1, v_val_2341_);
v___x_2343_ = v_reuseFailAlloc_2344_;
goto v_reusejp_2342_;
}
v_reusejp_2342_:
{
return v___x_2343_;
}
}
else
{
lean_object* v___x_2346_; 
if (v_isShared_2330_ == 0)
{
lean_ctor_set(v___x_2329_, 1, v_buckets_x27_2334_);
lean_ctor_set(v___x_2329_, 0, v_size_x27_2332_);
v___x_2346_ = v___x_2329_;
goto v_reusejp_2345_;
}
else
{
lean_object* v_reuseFailAlloc_2347_; 
v_reuseFailAlloc_2347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2347_, 0, v_size_x27_2332_);
lean_ctor_set(v_reuseFailAlloc_2347_, 1, v_buckets_x27_2334_);
v___x_2346_ = v_reuseFailAlloc_2347_;
goto v_reusejp_2345_;
}
v_reusejp_2345_:
{
return v___x_2346_;
}
}
}
}
else
{
lean_dec(v_b_2310_);
lean_dec(v_a_2309_);
return v_m_2308_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(lean_object* v_m_2351_, lean_object* v_a_2352_){
_start:
{
lean_object* v_buckets_2353_; lean_object* v___x_2354_; uint64_t v___x_2355_; uint64_t v___x_2356_; uint64_t v___x_2357_; uint64_t v_fold_2358_; uint64_t v___x_2359_; uint64_t v___x_2360_; uint64_t v___x_2361_; size_t v___x_2362_; size_t v___x_2363_; size_t v___x_2364_; size_t v___x_2365_; size_t v___x_2366_; lean_object* v___x_2367_; uint8_t v___x_2368_; 
v_buckets_2353_ = lean_ctor_get(v_m_2351_, 1);
v___x_2354_ = lean_array_get_size(v_buckets_2353_);
v___x_2355_ = l_Lean_instHashableFVarId_hash(v_a_2352_);
v___x_2356_ = 32ULL;
v___x_2357_ = lean_uint64_shift_right(v___x_2355_, v___x_2356_);
v_fold_2358_ = lean_uint64_xor(v___x_2355_, v___x_2357_);
v___x_2359_ = 16ULL;
v___x_2360_ = lean_uint64_shift_right(v_fold_2358_, v___x_2359_);
v___x_2361_ = lean_uint64_xor(v_fold_2358_, v___x_2360_);
v___x_2362_ = lean_uint64_to_usize(v___x_2361_);
v___x_2363_ = lean_usize_of_nat(v___x_2354_);
v___x_2364_ = ((size_t)1ULL);
v___x_2365_ = lean_usize_sub(v___x_2363_, v___x_2364_);
v___x_2366_ = lean_usize_land(v___x_2362_, v___x_2365_);
v___x_2367_ = lean_array_uget_borrowed(v_buckets_2353_, v___x_2366_);
v___x_2368_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_2352_, v___x_2367_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg___boxed(lean_object* v_m_2369_, lean_object* v_a_2370_){
_start:
{
uint8_t v_res_2371_; lean_object* v_r_2372_; 
v_res_2371_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_m_2369_, v_a_2370_);
lean_dec(v_a_2370_);
lean_dec_ref(v_m_2369_);
v_r_2372_ = lean_box(v_res_2371_);
return v_r_2372_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(lean_object* v_y_2373_, lean_object* v_as_2374_, size_t v_i_2375_, size_t v_stop_2376_){
_start:
{
uint8_t v___x_2381_; 
v___x_2381_ = lean_usize_dec_eq(v_i_2375_, v_stop_2376_);
if (v___x_2381_ == 0)
{
lean_object* v___x_2382_; 
v___x_2382_ = lean_array_uget_borrowed(v_as_2374_, v_i_2375_);
if (lean_obj_tag(v___x_2382_) == 0)
{
goto v___jp_2377_;
}
else
{
lean_object* v_fvarId_2383_; uint8_t v___x_2384_; 
v_fvarId_2383_ = lean_ctor_get(v___x_2382_, 0);
v___x_2384_ = l_Lean_instBEqFVarId_beq(v_y_2373_, v_fvarId_2383_);
if (v___x_2384_ == 0)
{
goto v___jp_2377_;
}
else
{
return v___x_2384_;
}
}
}
else
{
uint8_t v___x_2385_; 
v___x_2385_ = 0;
return v___x_2385_;
}
v___jp_2377_:
{
size_t v___x_2378_; size_t v___x_2379_; 
v___x_2378_ = ((size_t)1ULL);
v___x_2379_ = lean_usize_add(v_i_2375_, v___x_2378_);
v_i_2375_ = v___x_2379_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0___boxed(lean_object* v_y_2386_, lean_object* v_as_2387_, lean_object* v_i_2388_, lean_object* v_stop_2389_){
_start:
{
size_t v_i_boxed_2390_; size_t v_stop_boxed_2391_; uint8_t v_res_2392_; lean_object* v_r_2393_; 
v_i_boxed_2390_ = lean_unbox_usize(v_i_2388_);
lean_dec(v_i_2388_);
v_stop_boxed_2391_ = lean_unbox_usize(v_stop_2389_);
lean_dec(v_stop_2389_);
v_res_2392_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(v_y_2386_, v_as_2387_, v_i_boxed_2390_, v_stop_boxed_2391_);
lean_dec_ref(v_as_2387_);
lean_dec(v_y_2386_);
v_r_2393_ = lean_box(v_res_2392_);
return v_r_2393_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(lean_object* v_liveVars_2394_, lean_object* v_as_2395_, size_t v_i_2396_, size_t v_stop_2397_){
_start:
{
uint8_t v___x_2398_; 
v___x_2398_ = lean_usize_dec_eq(v_i_2396_, v_stop_2397_);
if (v___x_2398_ == 0)
{
lean_object* v_vars_2399_; lean_object* v_borrows_2400_; uint8_t v___x_2401_; uint8_t v___y_2403_; lean_object* v___x_2407_; uint8_t v___x_2408_; 
v_vars_2399_ = lean_ctor_get(v_liveVars_2394_, 0);
v_borrows_2400_ = lean_ctor_get(v_liveVars_2394_, 1);
v___x_2401_ = 1;
v___x_2407_ = lean_array_uget_borrowed(v_as_2395_, v_i_2396_);
v___x_2408_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2399_, v___x_2407_);
if (v___x_2408_ == 0)
{
uint8_t v___x_2409_; 
v___x_2409_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_2400_, v___x_2407_);
v___y_2403_ = v___x_2409_;
goto v___jp_2402_;
}
else
{
v___y_2403_ = v___x_2408_;
goto v___jp_2402_;
}
v___jp_2402_:
{
if (v___y_2403_ == 0)
{
return v___x_2401_;
}
else
{
size_t v___x_2404_; size_t v___x_2405_; 
v___x_2404_ = ((size_t)1ULL);
v___x_2405_ = lean_usize_add(v_i_2396_, v___x_2404_);
v_i_2396_ = v___x_2405_;
goto _start;
}
}
}
else
{
uint8_t v___x_2410_; 
v___x_2410_ = 0;
return v___x_2410_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5___boxed(lean_object* v_liveVars_2411_, lean_object* v_as_2412_, lean_object* v_i_2413_, lean_object* v_stop_2414_){
_start:
{
size_t v_i_boxed_2415_; size_t v_stop_boxed_2416_; uint8_t v_res_2417_; lean_object* v_r_2418_; 
v_i_boxed_2415_ = lean_unbox_usize(v_i_2413_);
lean_dec(v_i_2413_);
v_stop_boxed_2416_ = lean_unbox_usize(v_stop_2414_);
lean_dec(v_stop_2414_);
v_res_2417_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_2411_, v_as_2412_, v_i_boxed_2415_, v_stop_boxed_2416_);
lean_dec_ref(v_as_2412_);
lean_dec_ref(v_liveVars_2411_);
v_r_2418_ = lean_box(v_res_2417_);
return v_r_2418_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6_spec__7(lean_object* v_msg_2419_){
_start:
{
lean_object* v___x_2420_; lean_object* v___x_2421_; 
v___x_2420_ = l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
v___x_2421_ = lean_panic_fn_borrowed(v___x_2420_, v_msg_2419_);
return v___x_2421_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; 
v___x_2425_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__2));
v___x_2426_ = lean_unsigned_to_nat(11u);
v___x_2427_ = lean_unsigned_to_nat(163u);
v___x_2428_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__1));
v___x_2429_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__0));
v___x_2430_ = l_mkPanicMessageWithDecl(v___x_2429_, v___x_2428_, v___x_2427_, v___x_2426_, v___x_2425_);
return v___x_2430_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6(lean_object* v_a_2431_, lean_object* v_x_2432_){
_start:
{
if (lean_obj_tag(v_x_2432_) == 0)
{
lean_object* v___x_2433_; lean_object* v___x_2434_; 
v___x_2433_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3);
v___x_2434_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6_spec__7(v___x_2433_);
return v___x_2434_;
}
else
{
lean_object* v_key_2435_; lean_object* v_value_2436_; lean_object* v_tail_2437_; uint8_t v___x_2438_; 
v_key_2435_ = lean_ctor_get(v_x_2432_, 0);
v_value_2436_ = lean_ctor_get(v_x_2432_, 1);
v_tail_2437_ = lean_ctor_get(v_x_2432_, 2);
v___x_2438_ = l_Lean_instBEqFVarId_beq(v_key_2435_, v_a_2431_);
if (v___x_2438_ == 0)
{
v_x_2432_ = v_tail_2437_;
goto _start;
}
else
{
lean_inc(v_value_2436_);
return v_value_2436_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___boxed(lean_object* v_a_2440_, lean_object* v_x_2441_){
_start:
{
lean_object* v_res_2442_; 
v_res_2442_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6(v_a_2440_, v_x_2441_);
lean_dec(v_x_2441_);
lean_dec(v_a_2440_);
return v_res_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(lean_object* v_m_2443_, lean_object* v_a_2444_){
_start:
{
lean_object* v_buckets_2445_; lean_object* v___x_2446_; uint64_t v___x_2447_; uint64_t v___x_2448_; uint64_t v___x_2449_; uint64_t v_fold_2450_; uint64_t v___x_2451_; uint64_t v___x_2452_; uint64_t v___x_2453_; size_t v___x_2454_; size_t v___x_2455_; size_t v___x_2456_; size_t v___x_2457_; size_t v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v_buckets_2445_ = lean_ctor_get(v_m_2443_, 1);
v___x_2446_ = lean_array_get_size(v_buckets_2445_);
v___x_2447_ = l_Lean_instHashableFVarId_hash(v_a_2444_);
v___x_2448_ = 32ULL;
v___x_2449_ = lean_uint64_shift_right(v___x_2447_, v___x_2448_);
v_fold_2450_ = lean_uint64_xor(v___x_2447_, v___x_2449_);
v___x_2451_ = 16ULL;
v___x_2452_ = lean_uint64_shift_right(v_fold_2450_, v___x_2451_);
v___x_2453_ = lean_uint64_xor(v_fold_2450_, v___x_2452_);
v___x_2454_ = lean_uint64_to_usize(v___x_2453_);
v___x_2455_ = lean_usize_of_nat(v___x_2446_);
v___x_2456_ = ((size_t)1ULL);
v___x_2457_ = lean_usize_sub(v___x_2455_, v___x_2456_);
v___x_2458_ = lean_usize_land(v___x_2454_, v___x_2457_);
v___x_2459_ = lean_array_uget_borrowed(v_buckets_2445_, v___x_2458_);
v___x_2460_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6(v_a_2444_, v___x_2459_);
return v___x_2460_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4___boxed(lean_object* v_m_2461_, lean_object* v_a_2462_){
_start:
{
lean_object* v_res_2463_; 
v_res_2463_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_m_2461_, v_a_2462_);
lean_dec(v_a_2462_);
lean_dec_ref(v_m_2461_);
return v_res_2463_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0(lean_object* v_derivedValMap_2464_, lean_object* v___x_2465_, lean_object* v_args_2466_, uint8_t v___x_2467_, lean_object* v_liveVars_2468_, lean_object* v_child_2469_){
_start:
{
uint8_t v___y_2484_; lean_object* v_cinfo_2495_; lean_object* v_parents_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; uint8_t v___x_2499_; 
v_cinfo_2495_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_derivedValMap_2464_, v_child_2469_);
v_parents_2496_ = lean_ctor_get(v_cinfo_2495_, 0);
lean_inc_ref(v_parents_2496_);
lean_dec_ref(v_cinfo_2495_);
v___x_2497_ = lean_unsigned_to_nat(0u);
v___x_2498_ = lean_array_get_size(v_parents_2496_);
v___x_2499_ = lean_nat_dec_lt(v___x_2497_, v___x_2498_);
if (v___x_2499_ == 0)
{
lean_dec_ref(v_parents_2496_);
goto v___jp_2486_;
}
else
{
if (v___x_2499_ == 0)
{
lean_dec_ref(v_parents_2496_);
goto v___jp_2486_;
}
else
{
size_t v___x_2500_; size_t v___x_2501_; uint8_t v___x_2502_; 
v___x_2500_ = ((size_t)0ULL);
v___x_2501_ = lean_usize_of_nat(v___x_2498_);
v___x_2502_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_2468_, v_parents_2496_, v___x_2500_, v___x_2501_);
lean_dec_ref(v_parents_2496_);
if (v___x_2502_ == 0)
{
goto v___jp_2486_;
}
else
{
lean_object* v___x_2503_; 
v___x_2503_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2465_, v_args_2466_, v___x_2467_, v_child_2469_, v_derivedValMap_2464_, v_liveVars_2468_);
lean_dec(v_child_2469_);
return v___x_2503_;
}
}
}
v___jp_2470_:
{
lean_object* v_vars_2471_; lean_object* v_borrows_2472_; lean_object* v___x_2474_; uint8_t v_isShared_2475_; uint8_t v_isSharedCheck_2482_; 
v_vars_2471_ = lean_ctor_get(v_liveVars_2468_, 0);
v_borrows_2472_ = lean_ctor_get(v_liveVars_2468_, 1);
v_isSharedCheck_2482_ = !lean_is_exclusive(v_liveVars_2468_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2474_ = v_liveVars_2468_;
v_isShared_2475_ = v_isSharedCheck_2482_;
goto v_resetjp_2473_;
}
else
{
lean_inc(v_borrows_2472_);
lean_inc(v_vars_2471_);
lean_dec(v_liveVars_2468_);
v___x_2474_ = lean_box(0);
v_isShared_2475_ = v_isSharedCheck_2482_;
goto v_resetjp_2473_;
}
v_resetjp_2473_:
{
lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2479_; 
v___x_2476_ = lean_box(0);
lean_inc(v_child_2469_);
v___x_2477_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_2472_, v_child_2469_, v___x_2476_);
if (v_isShared_2475_ == 0)
{
lean_ctor_set(v___x_2474_, 1, v___x_2477_);
v___x_2479_ = v___x_2474_;
goto v_reusejp_2478_;
}
else
{
lean_object* v_reuseFailAlloc_2481_; 
v_reuseFailAlloc_2481_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2481_, 0, v_vars_2471_);
lean_ctor_set(v_reuseFailAlloc_2481_, 1, v___x_2477_);
v___x_2479_ = v_reuseFailAlloc_2481_;
goto v_reusejp_2478_;
}
v_reusejp_2478_:
{
lean_object* v___x_2480_; 
v___x_2480_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2465_, v_args_2466_, v___x_2467_, v_child_2469_, v_derivedValMap_2464_, v___x_2479_);
lean_dec(v_child_2469_);
return v___x_2480_;
}
}
}
v___jp_2483_:
{
if (v___y_2484_ == 0)
{
lean_object* v___x_2485_; 
v___x_2485_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2465_, v_args_2466_, v___x_2467_, v_child_2469_, v_derivedValMap_2464_, v_liveVars_2468_);
lean_dec(v_child_2469_);
return v___x_2485_;
}
else
{
goto v___jp_2470_;
}
}
v___jp_2486_:
{
lean_object* v_vars_2487_; uint8_t v___x_2488_; 
v_vars_2487_ = lean_ctor_get(v___x_2465_, 0);
v___x_2488_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2487_, v_child_2469_);
if (v___x_2488_ == 0)
{
lean_object* v___x_2489_; lean_object* v___x_2490_; uint8_t v___x_2491_; 
v___x_2489_ = lean_unsigned_to_nat(0u);
v___x_2490_ = lean_array_get_size(v_args_2466_);
v___x_2491_ = lean_nat_dec_lt(v___x_2489_, v___x_2490_);
if (v___x_2491_ == 0)
{
goto v___jp_2470_;
}
else
{
if (v___x_2491_ == 0)
{
goto v___jp_2470_;
}
else
{
size_t v___x_2492_; size_t v___x_2493_; uint8_t v___x_2494_; 
v___x_2492_ = ((size_t)0ULL);
v___x_2493_ = lean_usize_of_nat(v___x_2490_);
v___x_2494_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(v_child_2469_, v_args_2466_, v___x_2492_, v___x_2493_);
if (v___x_2494_ == 0)
{
goto v___jp_2470_;
}
else
{
v___y_2484_ = v___x_2488_;
goto v___jp_2483_;
}
}
}
}
else
{
v___y_2484_ = v___x_2467_;
goto v___jp_2483_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0___boxed(lean_object* v_derivedValMap_2504_, lean_object* v___x_2505_, lean_object* v_args_2506_, lean_object* v___x_2507_, lean_object* v_liveVars_2508_, lean_object* v_child_2509_){
_start:
{
uint8_t v___x_2534__boxed_2510_; lean_object* v_res_2511_; 
v___x_2534__boxed_2510_ = lean_unbox(v___x_2507_);
v_res_2511_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0(v_derivedValMap_2504_, v___x_2505_, v_args_2506_, v___x_2534__boxed_2510_, v_liveVars_2508_, v_child_2509_);
return v_res_2511_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(lean_object* v___x_2512_, lean_object* v_args_2513_, uint8_t v___x_2514_, lean_object* v_fvarId_2515_, lean_object* v_derivedValMap_2516_, lean_object* v_liveVars_2517_){
_start:
{
lean_object* v___x_2518_; 
v___x_2518_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_derivedValMap_2516_, v_fvarId_2515_);
if (lean_obj_tag(v___x_2518_) == 1)
{
lean_object* v_val_2519_; lean_object* v_children_2520_; lean_object* v___x_2521_; lean_object* v___f_2522_; lean_object* v___x_2523_; 
v_val_2519_ = lean_ctor_get(v___x_2518_, 0);
lean_inc(v_val_2519_);
lean_dec_ref_known(v___x_2518_, 1);
v_children_2520_ = lean_ctor_get(v_val_2519_, 1);
lean_inc_ref(v_children_2520_);
lean_dec(v_val_2519_);
v___x_2521_ = lean_box(v___x_2514_);
v___f_2522_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0___boxed), 6, 4);
lean_closure_set(v___f_2522_, 0, v_derivedValMap_2516_);
lean_closure_set(v___f_2522_, 1, v___x_2512_);
lean_closure_set(v___f_2522_, 2, v_args_2513_);
lean_closure_set(v___f_2522_, 3, v___x_2521_);
v___x_2523_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_2522_, v_liveVars_2517_, v_children_2520_);
lean_dec_ref(v_children_2520_);
return v___x_2523_;
}
else
{
lean_dec(v___x_2518_);
lean_dec_ref(v_derivedValMap_2516_);
lean_dec_ref(v_args_2513_);
lean_dec_ref(v___x_2512_);
return v_liveVars_2517_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___boxed(lean_object* v___x_2524_, lean_object* v_args_2525_, lean_object* v___x_2526_, lean_object* v_fvarId_2527_, lean_object* v_derivedValMap_2528_, lean_object* v_liveVars_2529_){
_start:
{
uint8_t v___x_2528__boxed_2530_; lean_object* v_res_2531_; 
v___x_2528__boxed_2530_ = lean_unbox(v___x_2526_);
v_res_2531_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2524_, v_args_2525_, v___x_2528__boxed_2530_, v_fvarId_2527_, v_derivedValMap_2528_, v_liveVars_2529_);
lean_dec(v_fvarId_2527_);
return v_res_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(lean_object* v_args_2532_, lean_object* v_fvarId_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_){
_start:
{
lean_object* v___x_2537_; lean_object* v_vars_2538_; uint8_t v___x_2539_; 
v___x_2537_ = lean_st_ref_get(v___y_2535_);
v_vars_2538_ = lean_ctor_get(v___x_2537_, 0);
lean_inc_ref(v_vars_2538_);
lean_dec(v___x_2537_);
v___x_2539_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2538_, v_fvarId_2533_);
lean_dec_ref(v_vars_2538_);
if (v___x_2539_ == 0)
{
lean_object* v_derivedValMap_2540_; lean_object* v___x_2541_; lean_object* v_vars_2542_; lean_object* v_borrows_2543_; lean_object* v___x_2545_; uint8_t v_isShared_2546_; uint8_t v_isSharedCheck_2557_; 
v_derivedValMap_2540_ = lean_ctor_get(v___y_2534_, 1);
v___x_2541_ = lean_st_ref_take(v___y_2535_);
v_vars_2542_ = lean_ctor_get(v___x_2541_, 0);
v_borrows_2543_ = lean_ctor_get(v___x_2541_, 1);
v_isSharedCheck_2557_ = !lean_is_exclusive(v___x_2541_);
if (v_isSharedCheck_2557_ == 0)
{
v___x_2545_ = v___x_2541_;
v_isShared_2546_ = v_isSharedCheck_2557_;
goto v_resetjp_2544_;
}
else
{
lean_inc(v_borrows_2543_);
lean_inc(v_vars_2542_);
lean_dec(v___x_2541_);
v___x_2545_ = lean_box(0);
v_isShared_2546_ = v_isSharedCheck_2557_;
goto v_resetjp_2544_;
}
v_resetjp_2544_:
{
lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2550_; 
v___x_2547_ = lean_box(0);
lean_inc(v_fvarId_2533_);
v___x_2548_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_vars_2542_, v_fvarId_2533_, v___x_2547_);
if (v_isShared_2546_ == 0)
{
lean_ctor_set(v___x_2545_, 0, v___x_2548_);
v___x_2550_ = v___x_2545_;
goto v_reusejp_2549_;
}
else
{
lean_object* v_reuseFailAlloc_2556_; 
v_reuseFailAlloc_2556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2556_, 0, v___x_2548_);
lean_ctor_set(v_reuseFailAlloc_2556_, 1, v_borrows_2543_);
v___x_2550_ = v_reuseFailAlloc_2556_;
goto v_reusejp_2549_;
}
v_reusejp_2549_:
{
lean_object* v___x_2551_; lean_object* v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; 
v___x_2551_ = lean_st_ref_put(v___y_2535_, v___x_2550_);
v___x_2552_ = lean_st_ref_take(v___y_2535_);
lean_inc_ref(v_derivedValMap_2540_);
lean_inc(v___x_2552_);
v___x_2553_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2552_, v_args_2532_, v___x_2539_, v_fvarId_2533_, v_derivedValMap_2540_, v___x_2552_);
lean_dec(v_fvarId_2533_);
v___x_2554_ = lean_st_ref_put(v___y_2535_, v___x_2553_);
v___x_2555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2547_);
return v___x_2555_;
}
}
}
else
{
lean_object* v___x_2558_; lean_object* v___x_2559_; 
lean_dec(v_fvarId_2533_);
lean_dec_ref(v_args_2532_);
v___x_2558_ = lean_box(0);
v___x_2559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2559_, 0, v___x_2558_);
return v___x_2559_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg___boxed(lean_object* v_args_2560_, lean_object* v_fvarId_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v_res_2565_; 
v_res_2565_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2560_, v_fvarId_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
return v_res_2565_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(lean_object* v_args_2566_, lean_object* v_as_2567_, size_t v_i_2568_, size_t v_stop_2569_, lean_object* v_b_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_, lean_object* v___y_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_a_2579_; uint8_t v___x_2583_; 
v___x_2583_ = lean_usize_dec_eq(v_i_2568_, v_stop_2569_);
if (v___x_2583_ == 0)
{
lean_object* v___x_2584_; 
v___x_2584_ = lean_array_uget_borrowed(v_as_2567_, v_i_2568_);
if (lean_obj_tag(v___x_2584_) == 0)
{
lean_object* v___x_2585_; 
v___x_2585_ = lean_box(0);
v_a_2579_ = v___x_2585_;
goto v___jp_2578_;
}
else
{
lean_object* v_fvarId_2586_; lean_object* v___x_2587_; 
v_fvarId_2586_ = lean_ctor_get(v___x_2584_, 0);
lean_inc(v_fvarId_2586_);
lean_inc_ref(v_args_2566_);
v___x_2587_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2566_, v_fvarId_2586_, v___y_2571_, v___y_2572_);
if (lean_obj_tag(v___x_2587_) == 0)
{
lean_object* v_a_2588_; 
v_a_2588_ = lean_ctor_get(v___x_2587_, 0);
lean_inc(v_a_2588_);
lean_dec_ref_known(v___x_2587_, 1);
v_a_2579_ = v_a_2588_;
goto v___jp_2578_;
}
else
{
lean_dec_ref(v_args_2566_);
return v___x_2587_;
}
}
}
else
{
lean_object* v___x_2589_; 
lean_dec_ref(v_args_2566_);
v___x_2589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2589_, 0, v_b_2570_);
return v___x_2589_;
}
v___jp_2578_:
{
size_t v___x_2580_; size_t v___x_2581_; 
v___x_2580_ = ((size_t)1ULL);
v___x_2581_ = lean_usize_add(v_i_2568_, v___x_2580_);
v_i_2568_ = v___x_2581_;
v_b_2570_ = v_a_2579_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2___boxed(lean_object* v_args_2590_, lean_object* v_as_2591_, lean_object* v_i_2592_, lean_object* v_stop_2593_, lean_object* v_b_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_, lean_object* v___y_2599_, lean_object* v___y_2600_, lean_object* v___y_2601_){
_start:
{
size_t v_i_boxed_2602_; size_t v_stop_boxed_2603_; lean_object* v_res_2604_; 
v_i_boxed_2602_ = lean_unbox_usize(v_i_2592_);
lean_dec(v_i_2592_);
v_stop_boxed_2603_ = lean_unbox_usize(v_stop_2593_);
lean_dec(v_stop_2593_);
v_res_2604_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2590_, v_as_2591_, v_i_boxed_2602_, v_stop_boxed_2603_, v_b_2594_, v___y_2595_, v___y_2596_, v___y_2597_, v___y_2598_, v___y_2599_, v___y_2600_);
lean_dec(v___y_2600_);
lean_dec_ref(v___y_2599_);
lean_dec(v___y_2598_);
lean_dec_ref(v___y_2597_);
lean_dec(v___y_2596_);
lean_dec_ref(v___y_2595_);
lean_dec_ref(v_as_2591_);
return v_res_2604_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(lean_object* v_args_2605_, lean_object* v___y_2606_, lean_object* v___y_2607_, lean_object* v___y_2608_, lean_object* v___y_2609_, lean_object* v___y_2610_, lean_object* v___y_2611_){
_start:
{
lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; uint8_t v___x_2616_; 
v___x_2613_ = lean_unsigned_to_nat(0u);
v___x_2614_ = lean_array_get_size(v_args_2605_);
v___x_2615_ = lean_box(0);
v___x_2616_ = lean_nat_dec_lt(v___x_2613_, v___x_2614_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; 
lean_dec_ref(v_args_2605_);
v___x_2617_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2615_);
return v___x_2617_;
}
else
{
uint8_t v___x_2618_; 
v___x_2618_ = lean_nat_dec_le(v___x_2614_, v___x_2614_);
if (v___x_2618_ == 0)
{
if (v___x_2616_ == 0)
{
lean_object* v___x_2619_; 
lean_dec_ref(v_args_2605_);
v___x_2619_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2615_);
return v___x_2619_;
}
else
{
size_t v___x_2620_; size_t v___x_2621_; lean_object* v___x_2622_; 
v___x_2620_ = ((size_t)0ULL);
v___x_2621_ = lean_usize_of_nat(v___x_2614_);
lean_inc_ref(v_args_2605_);
v___x_2622_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2605_, v_args_2605_, v___x_2620_, v___x_2621_, v___x_2615_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_);
lean_dec_ref(v_args_2605_);
return v___x_2622_;
}
}
else
{
size_t v___x_2623_; size_t v___x_2624_; lean_object* v___x_2625_; 
v___x_2623_ = ((size_t)0ULL);
v___x_2624_ = lean_usize_of_nat(v___x_2614_);
lean_inc_ref(v_args_2605_);
v___x_2625_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2605_, v_args_2605_, v___x_2623_, v___x_2624_, v___x_2615_, v___y_2606_, v___y_2607_, v___y_2608_, v___y_2609_, v___y_2610_, v___y_2611_);
lean_dec_ref(v_args_2605_);
return v___x_2625_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs___boxed(lean_object* v_args_2626_, lean_object* v___y_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_){
_start:
{
lean_object* v_res_2634_; 
v_res_2634_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2626_, v___y_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_);
lean_dec(v___y_2632_);
lean_dec_ref(v___y_2631_);
lean_dec(v___y_2630_);
lean_dec_ref(v___y_2629_);
lean_dec(v___y_2628_);
lean_dec_ref(v___y_2627_);
return v_res_2634_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(lean_object* v_args_2635_, lean_object* v_fvarId_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_){
_start:
{
lean_object* v___x_2644_; 
v___x_2644_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2635_, v_fvarId_2636_, v___y_2637_, v___y_2638_);
return v___x_2644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___boxed(lean_object* v_args_2645_, lean_object* v_fvarId_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_){
_start:
{
lean_object* v_res_2654_; 
v_res_2654_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(v_args_2645_, v_fvarId_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_);
lean_dec(v___y_2652_);
lean_dec_ref(v___y_2651_);
lean_dec(v___y_2650_);
lean_dec_ref(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec_ref(v___y_2647_);
return v_res_2654_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(lean_object* v_00_u03b2_2655_, lean_object* v_m_2656_, lean_object* v_a_2657_){
_start:
{
uint8_t v___x_2658_; 
v___x_2658_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_m_2656_, v_a_2657_);
return v___x_2658_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2659_, lean_object* v_m_2660_, lean_object* v_a_2661_){
_start:
{
uint8_t v_res_2662_; lean_object* v_r_2663_; 
v_res_2662_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(v_00_u03b2_2659_, v_m_2660_, v_a_2661_);
lean_dec(v_a_2661_);
lean_dec_ref(v_m_2660_);
v_r_2663_ = lean_box(v_res_2662_);
return v_r_2663_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(lean_object* v_00_u03b2_2664_, lean_object* v_m_2665_, lean_object* v_a_2666_, lean_object* v_b_2667_){
_start:
{
lean_object* v___x_2668_; 
v___x_2668_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_m_2665_, v_a_2666_, v_b_2667_);
return v___x_2668_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(lean_object* v_msg_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_){
_start:
{
lean_object* v___f_2677_; lean_object* v___f_2678_; lean_object* v___f_2679_; lean_object* v___f_2680_; lean_object* v___f_2681_; lean_object* v___f_2682_; lean_object* v___f_2683_; lean_object* v___f_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v_toApplicative_2689_; lean_object* v___x_2691_; uint8_t v_isShared_2692_; uint8_t v_isSharedCheck_2752_; 
v___f_2677_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0));
v___f_2678_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1));
v___f_2679_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2));
v___f_2680_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3));
v___f_2681_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4));
v___f_2682_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_2682_, 0, v___f_2681_);
lean_closure_set(v___f_2682_, 1, v___f_2680_);
v___f_2683_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_2683_, 0, v___f_2680_);
v___f_2684_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__5));
v___x_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___f_2677_);
lean_ctor_set(v___x_2685_, 1, v___f_2678_);
v___x_2686_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2685_);
lean_ctor_set(v___x_2686_, 1, v___f_2679_);
lean_ctor_set(v___x_2686_, 2, v___f_2682_);
lean_ctor_set(v___x_2686_, 3, v___f_2683_);
lean_ctor_set(v___x_2686_, 4, v___f_2684_);
v___x_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2686_);
lean_ctor_set(v___x_2687_, 1, v___f_2680_);
v___x_2688_ = l_StateRefT_x27_instMonad___redArg(v___x_2687_);
v_toApplicative_2689_ = lean_ctor_get(v___x_2688_, 0);
v_isSharedCheck_2752_ = !lean_is_exclusive(v___x_2688_);
if (v_isSharedCheck_2752_ == 0)
{
lean_object* v_unused_2753_; 
v_unused_2753_ = lean_ctor_get(v___x_2688_, 1);
lean_dec(v_unused_2753_);
v___x_2691_ = v___x_2688_;
v_isShared_2692_ = v_isSharedCheck_2752_;
goto v_resetjp_2690_;
}
else
{
lean_inc(v_toApplicative_2689_);
lean_dec(v___x_2688_);
v___x_2691_ = lean_box(0);
v_isShared_2692_ = v_isSharedCheck_2752_;
goto v_resetjp_2690_;
}
v_resetjp_2690_:
{
lean_object* v_toFunctor_2693_; lean_object* v_toSeq_2694_; lean_object* v_toSeqLeft_2695_; lean_object* v_toSeqRight_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2750_; 
v_toFunctor_2693_ = lean_ctor_get(v_toApplicative_2689_, 0);
v_toSeq_2694_ = lean_ctor_get(v_toApplicative_2689_, 2);
v_toSeqLeft_2695_ = lean_ctor_get(v_toApplicative_2689_, 3);
v_toSeqRight_2696_ = lean_ctor_get(v_toApplicative_2689_, 4);
v_isSharedCheck_2750_ = !lean_is_exclusive(v_toApplicative_2689_);
if (v_isSharedCheck_2750_ == 0)
{
lean_object* v_unused_2751_; 
v_unused_2751_ = lean_ctor_get(v_toApplicative_2689_, 1);
lean_dec(v_unused_2751_);
v___x_2698_ = v_toApplicative_2689_;
v_isShared_2699_ = v_isSharedCheck_2750_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_toSeqRight_2696_);
lean_inc(v_toSeqLeft_2695_);
lean_inc(v_toSeq_2694_);
lean_inc(v_toFunctor_2693_);
lean_dec(v_toApplicative_2689_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2750_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___f_2700_; lean_object* v___f_2701_; lean_object* v___f_2702_; lean_object* v___f_2703_; lean_object* v___x_2704_; lean_object* v___f_2705_; lean_object* v___f_2706_; lean_object* v___f_2707_; lean_object* v___x_2709_; 
v___f_2700_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__6));
v___f_2701_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__7));
lean_inc_ref(v_toFunctor_2693_);
v___f_2702_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2702_, 0, v_toFunctor_2693_);
v___f_2703_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2703_, 0, v_toFunctor_2693_);
v___x_2704_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2704_, 0, v___f_2702_);
lean_ctor_set(v___x_2704_, 1, v___f_2703_);
v___f_2705_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2705_, 0, v_toSeqRight_2696_);
v___f_2706_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2706_, 0, v_toSeqLeft_2695_);
v___f_2707_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2707_, 0, v_toSeq_2694_);
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 4, v___f_2705_);
lean_ctor_set(v___x_2698_, 3, v___f_2706_);
lean_ctor_set(v___x_2698_, 2, v___f_2707_);
lean_ctor_set(v___x_2698_, 1, v___f_2700_);
lean_ctor_set(v___x_2698_, 0, v___x_2704_);
v___x_2709_ = v___x_2698_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v___x_2704_);
lean_ctor_set(v_reuseFailAlloc_2749_, 1, v___f_2700_);
lean_ctor_set(v_reuseFailAlloc_2749_, 2, v___f_2707_);
lean_ctor_set(v_reuseFailAlloc_2749_, 3, v___f_2706_);
lean_ctor_set(v_reuseFailAlloc_2749_, 4, v___f_2705_);
v___x_2709_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
lean_object* v___x_2711_; 
if (v_isShared_2692_ == 0)
{
lean_ctor_set(v___x_2691_, 1, v___f_2701_);
lean_ctor_set(v___x_2691_, 0, v___x_2709_);
v___x_2711_ = v___x_2691_;
goto v_reusejp_2710_;
}
else
{
lean_object* v_reuseFailAlloc_2748_; 
v_reuseFailAlloc_2748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2748_, 0, v___x_2709_);
lean_ctor_set(v_reuseFailAlloc_2748_, 1, v___f_2701_);
v___x_2711_ = v_reuseFailAlloc_2748_;
goto v_reusejp_2710_;
}
v_reusejp_2710_:
{
lean_object* v___x_2712_; lean_object* v_toApplicative_2713_; lean_object* v___x_2715_; uint8_t v_isShared_2716_; uint8_t v_isSharedCheck_2746_; 
v___x_2712_ = l_StateRefT_x27_instMonad___redArg(v___x_2711_);
v_toApplicative_2713_ = lean_ctor_get(v___x_2712_, 0);
v_isSharedCheck_2746_ = !lean_is_exclusive(v___x_2712_);
if (v_isSharedCheck_2746_ == 0)
{
lean_object* v_unused_2747_; 
v_unused_2747_ = lean_ctor_get(v___x_2712_, 1);
lean_dec(v_unused_2747_);
v___x_2715_ = v___x_2712_;
v_isShared_2716_ = v_isSharedCheck_2746_;
goto v_resetjp_2714_;
}
else
{
lean_inc(v_toApplicative_2713_);
lean_dec(v___x_2712_);
v___x_2715_ = lean_box(0);
v_isShared_2716_ = v_isSharedCheck_2746_;
goto v_resetjp_2714_;
}
v_resetjp_2714_:
{
lean_object* v_toFunctor_2717_; lean_object* v_toSeq_2718_; lean_object* v_toSeqLeft_2719_; lean_object* v_toSeqRight_2720_; lean_object* v___x_2722_; uint8_t v_isShared_2723_; uint8_t v_isSharedCheck_2744_; 
v_toFunctor_2717_ = lean_ctor_get(v_toApplicative_2713_, 0);
v_toSeq_2718_ = lean_ctor_get(v_toApplicative_2713_, 2);
v_toSeqLeft_2719_ = lean_ctor_get(v_toApplicative_2713_, 3);
v_toSeqRight_2720_ = lean_ctor_get(v_toApplicative_2713_, 4);
v_isSharedCheck_2744_ = !lean_is_exclusive(v_toApplicative_2713_);
if (v_isSharedCheck_2744_ == 0)
{
lean_object* v_unused_2745_; 
v_unused_2745_ = lean_ctor_get(v_toApplicative_2713_, 1);
lean_dec(v_unused_2745_);
v___x_2722_ = v_toApplicative_2713_;
v_isShared_2723_ = v_isSharedCheck_2744_;
goto v_resetjp_2721_;
}
else
{
lean_inc(v_toSeqRight_2720_);
lean_inc(v_toSeqLeft_2719_);
lean_inc(v_toSeq_2718_);
lean_inc(v_toFunctor_2717_);
lean_dec(v_toApplicative_2713_);
v___x_2722_ = lean_box(0);
v_isShared_2723_ = v_isSharedCheck_2744_;
goto v_resetjp_2721_;
}
v_resetjp_2721_:
{
lean_object* v___f_2724_; lean_object* v___f_2725_; lean_object* v___f_2726_; lean_object* v___f_2727_; lean_object* v___x_2728_; lean_object* v___f_2729_; lean_object* v___f_2730_; lean_object* v___f_2731_; lean_object* v___x_2733_; 
v___f_2724_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__8));
v___f_2725_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__9));
lean_inc_ref(v_toFunctor_2717_);
v___f_2726_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_2726_, 0, v_toFunctor_2717_);
v___f_2727_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2727_, 0, v_toFunctor_2717_);
v___x_2728_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2728_, 0, v___f_2726_);
lean_ctor_set(v___x_2728_, 1, v___f_2727_);
v___f_2729_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_2729_, 0, v_toSeqRight_2720_);
v___f_2730_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_2730_, 0, v_toSeqLeft_2719_);
v___f_2731_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_2731_, 0, v_toSeq_2718_);
if (v_isShared_2723_ == 0)
{
lean_ctor_set(v___x_2722_, 4, v___f_2729_);
lean_ctor_set(v___x_2722_, 3, v___f_2730_);
lean_ctor_set(v___x_2722_, 2, v___f_2731_);
lean_ctor_set(v___x_2722_, 1, v___f_2724_);
lean_ctor_set(v___x_2722_, 0, v___x_2728_);
v___x_2733_ = v___x_2722_;
goto v_reusejp_2732_;
}
else
{
lean_object* v_reuseFailAlloc_2743_; 
v_reuseFailAlloc_2743_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2743_, 0, v___x_2728_);
lean_ctor_set(v_reuseFailAlloc_2743_, 1, v___f_2724_);
lean_ctor_set(v_reuseFailAlloc_2743_, 2, v___f_2731_);
lean_ctor_set(v_reuseFailAlloc_2743_, 3, v___f_2730_);
lean_ctor_set(v_reuseFailAlloc_2743_, 4, v___f_2729_);
v___x_2733_ = v_reuseFailAlloc_2743_;
goto v_reusejp_2732_;
}
v_reusejp_2732_:
{
lean_object* v___x_2735_; 
if (v_isShared_2716_ == 0)
{
lean_ctor_set(v___x_2715_, 1, v___f_2725_);
lean_ctor_set(v___x_2715_, 0, v___x_2733_);
v___x_2735_ = v___x_2715_;
goto v_reusejp_2734_;
}
else
{
lean_object* v_reuseFailAlloc_2742_; 
v_reuseFailAlloc_2742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2742_, 0, v___x_2733_);
lean_ctor_set(v_reuseFailAlloc_2742_, 1, v___f_2725_);
v___x_2735_ = v_reuseFailAlloc_2742_;
goto v_reusejp_2734_;
}
v_reusejp_2734_:
{
lean_object* v___x_2736_; lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_1240__overap_2740_; lean_object* v___x_2741_; 
v___x_2736_ = l_StateRefT_x27_instMonad___redArg(v___x_2735_);
v___x_2737_ = lean_box(0);
v___x_2738_ = l_instInhabitedOfMonad___redArg(v___x_2736_, v___x_2737_);
v___x_2739_ = l_instInhabitedReaderT___redArg(v___x_2738_);
v___x_1240__overap_2740_ = lean_panic_fn_borrowed(v___x_2739_, v_msg_2669_);
lean_dec(v___x_2739_);
lean_inc(v___y_2675_);
lean_inc_ref(v___y_2674_);
lean_inc(v___y_2673_);
lean_inc_ref(v___y_2672_);
lean_inc(v___y_2671_);
lean_inc_ref(v___y_2670_);
v___x_2741_ = lean_apply_7(v___x_1240__overap_2740_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, v___y_2674_, v___y_2675_, lean_box(0));
return v___x_2741_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1___boxed(lean_object* v_msg_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_, lean_object* v___y_2760_, lean_object* v___y_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(v_msg_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_, v___y_2759_, v___y_2760_);
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2759_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
return v_res_2762_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0(lean_object* v_derivedValMap_2763_, lean_object* v___x_2764_, uint8_t v___x_2765_, lean_object* v_liveVars_2766_, lean_object* v_child_2767_){
_start:
{
lean_object* v_cinfo_2785_; lean_object* v_parents_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; uint8_t v___x_2789_; 
v_cinfo_2785_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_derivedValMap_2763_, v_child_2767_);
v_parents_2786_ = lean_ctor_get(v_cinfo_2785_, 0);
lean_inc_ref(v_parents_2786_);
lean_dec_ref(v_cinfo_2785_);
v___x_2787_ = lean_unsigned_to_nat(0u);
v___x_2788_ = lean_array_get_size(v_parents_2786_);
v___x_2789_ = lean_nat_dec_lt(v___x_2787_, v___x_2788_);
if (v___x_2789_ == 0)
{
lean_dec_ref(v_parents_2786_);
goto v___jp_2781_;
}
else
{
if (v___x_2789_ == 0)
{
lean_dec_ref(v_parents_2786_);
goto v___jp_2781_;
}
else
{
size_t v___x_2790_; size_t v___x_2791_; uint8_t v___x_2792_; 
v___x_2790_ = ((size_t)0ULL);
v___x_2791_ = lean_usize_of_nat(v___x_2788_);
v___x_2792_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_2766_, v_parents_2786_, v___x_2790_, v___x_2791_);
lean_dec_ref(v_parents_2786_);
if (v___x_2792_ == 0)
{
goto v___jp_2781_;
}
else
{
lean_object* v___x_2793_; 
v___x_2793_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2764_, v___x_2765_, v_child_2767_, v_derivedValMap_2763_, v_liveVars_2766_);
lean_dec(v_child_2767_);
return v___x_2793_;
}
}
}
v___jp_2768_:
{
lean_object* v_vars_2769_; lean_object* v_borrows_2770_; lean_object* v___x_2772_; uint8_t v_isShared_2773_; uint8_t v_isSharedCheck_2780_; 
v_vars_2769_ = lean_ctor_get(v_liveVars_2766_, 0);
v_borrows_2770_ = lean_ctor_get(v_liveVars_2766_, 1);
v_isSharedCheck_2780_ = !lean_is_exclusive(v_liveVars_2766_);
if (v_isSharedCheck_2780_ == 0)
{
v___x_2772_ = v_liveVars_2766_;
v_isShared_2773_ = v_isSharedCheck_2780_;
goto v_resetjp_2771_;
}
else
{
lean_inc(v_borrows_2770_);
lean_inc(v_vars_2769_);
lean_dec(v_liveVars_2766_);
v___x_2772_ = lean_box(0);
v_isShared_2773_ = v_isSharedCheck_2780_;
goto v_resetjp_2771_;
}
v_resetjp_2771_:
{
lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2777_; 
v___x_2774_ = lean_box(0);
lean_inc(v_child_2767_);
v___x_2775_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_2770_, v_child_2767_, v___x_2774_);
if (v_isShared_2773_ == 0)
{
lean_ctor_set(v___x_2772_, 1, v___x_2775_);
v___x_2777_ = v___x_2772_;
goto v_reusejp_2776_;
}
else
{
lean_object* v_reuseFailAlloc_2779_; 
v_reuseFailAlloc_2779_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2779_, 0, v_vars_2769_);
lean_ctor_set(v_reuseFailAlloc_2779_, 1, v___x_2775_);
v___x_2777_ = v_reuseFailAlloc_2779_;
goto v_reusejp_2776_;
}
v_reusejp_2776_:
{
lean_object* v___x_2778_; 
v___x_2778_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2764_, v___x_2765_, v_child_2767_, v_derivedValMap_2763_, v___x_2777_);
lean_dec(v_child_2767_);
return v___x_2778_;
}
}
}
v___jp_2781_:
{
lean_object* v_vars_2782_; uint8_t v___x_2783_; 
v_vars_2782_ = lean_ctor_get(v___x_2764_, 0);
v___x_2783_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2782_, v_child_2767_);
if (v___x_2783_ == 0)
{
goto v___jp_2768_;
}
else
{
if (v___x_2765_ == 0)
{
lean_object* v___x_2784_; 
v___x_2784_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2764_, v___x_2765_, v_child_2767_, v_derivedValMap_2763_, v_liveVars_2766_);
lean_dec(v_child_2767_);
return v___x_2784_;
}
else
{
goto v___jp_2768_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0___boxed(lean_object* v_derivedValMap_2794_, lean_object* v___x_2795_, lean_object* v___x_2796_, lean_object* v_liveVars_2797_, lean_object* v_child_2798_){
_start:
{
uint8_t v___x_1660__boxed_2799_; lean_object* v_res_2800_; 
v___x_1660__boxed_2799_ = lean_unbox(v___x_2796_);
v_res_2800_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0(v_derivedValMap_2794_, v___x_2795_, v___x_1660__boxed_2799_, v_liveVars_2797_, v_child_2798_);
return v_res_2800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(lean_object* v___x_2801_, uint8_t v___x_2802_, lean_object* v_fvarId_2803_, lean_object* v_derivedValMap_2804_, lean_object* v_liveVars_2805_){
_start:
{
lean_object* v___x_2806_; 
v___x_2806_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_derivedValMap_2804_, v_fvarId_2803_);
if (lean_obj_tag(v___x_2806_) == 1)
{
lean_object* v_val_2807_; lean_object* v_children_2808_; lean_object* v___x_2809_; lean_object* v___f_2810_; lean_object* v___x_2811_; 
v_val_2807_ = lean_ctor_get(v___x_2806_, 0);
lean_inc(v_val_2807_);
lean_dec_ref_known(v___x_2806_, 1);
v_children_2808_ = lean_ctor_get(v_val_2807_, 1);
lean_inc_ref(v_children_2808_);
lean_dec(v_val_2807_);
v___x_2809_ = lean_box(v___x_2802_);
v___f_2810_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2810_, 0, v_derivedValMap_2804_);
lean_closure_set(v___f_2810_, 1, v___x_2801_);
lean_closure_set(v___f_2810_, 2, v___x_2809_);
v___x_2811_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_2810_, v_liveVars_2805_, v_children_2808_);
lean_dec_ref(v_children_2808_);
return v___x_2811_;
}
else
{
lean_dec(v___x_2806_);
lean_dec_ref(v_derivedValMap_2804_);
lean_dec_ref(v___x_2801_);
return v_liveVars_2805_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___boxed(lean_object* v___x_2812_, lean_object* v___x_2813_, lean_object* v_fvarId_2814_, lean_object* v_derivedValMap_2815_, lean_object* v_liveVars_2816_){
_start:
{
uint8_t v___x_1654__boxed_2817_; lean_object* v_res_2818_; 
v___x_1654__boxed_2817_ = lean_unbox(v___x_2813_);
v_res_2818_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2812_, v___x_1654__boxed_2817_, v_fvarId_2814_, v_derivedValMap_2815_, v_liveVars_2816_);
lean_dec(v_fvarId_2814_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(lean_object* v_fvarId_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_){
_start:
{
lean_object* v___x_2823_; lean_object* v_vars_2824_; uint8_t v___x_2825_; 
v___x_2823_ = lean_st_ref_get(v___y_2821_);
v_vars_2824_ = lean_ctor_get(v___x_2823_, 0);
lean_inc_ref(v_vars_2824_);
lean_dec(v___x_2823_);
v___x_2825_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2824_, v_fvarId_2819_);
lean_dec_ref(v_vars_2824_);
if (v___x_2825_ == 0)
{
lean_object* v_derivedValMap_2826_; lean_object* v___x_2827_; lean_object* v_vars_2828_; lean_object* v_borrows_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2843_; 
v_derivedValMap_2826_ = lean_ctor_get(v___y_2820_, 1);
v___x_2827_ = lean_st_ref_take(v___y_2821_);
v_vars_2828_ = lean_ctor_get(v___x_2827_, 0);
v_borrows_2829_ = lean_ctor_get(v___x_2827_, 1);
v_isSharedCheck_2843_ = !lean_is_exclusive(v___x_2827_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2831_ = v___x_2827_;
v_isShared_2832_ = v_isSharedCheck_2843_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_borrows_2829_);
lean_inc(v_vars_2828_);
lean_dec(v___x_2827_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2843_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2833_; lean_object* v___x_2834_; lean_object* v___x_2836_; 
v___x_2833_ = lean_box(0);
lean_inc(v_fvarId_2819_);
v___x_2834_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_vars_2828_, v_fvarId_2819_, v___x_2833_);
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 0, v___x_2834_);
v___x_2836_ = v___x_2831_;
goto v_reusejp_2835_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v___x_2834_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v_borrows_2829_);
v___x_2836_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2835_;
}
v_reusejp_2835_:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2837_ = lean_st_ref_put(v___y_2821_, v___x_2836_);
v___x_2838_ = lean_st_ref_take(v___y_2821_);
lean_inc_ref(v_derivedValMap_2826_);
lean_inc(v___x_2838_);
v___x_2839_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2838_, v___x_2825_, v_fvarId_2819_, v_derivedValMap_2826_, v___x_2838_);
lean_dec(v_fvarId_2819_);
v___x_2840_ = lean_st_ref_put(v___y_2821_, v___x_2839_);
v___x_2841_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2833_);
return v___x_2841_;
}
}
}
else
{
lean_object* v___x_2844_; lean_object* v___x_2845_; 
lean_dec(v_fvarId_2819_);
v___x_2844_ = lean_box(0);
v___x_2845_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2845_, 0, v___x_2844_);
return v___x_2845_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg___boxed(lean_object* v_fvarId_2846_, lean_object* v___y_2847_, lean_object* v___y_2848_, lean_object* v___y_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2846_, v___y_2847_, v___y_2848_);
lean_dec(v___y_2848_);
lean_dec_ref(v___y_2847_);
return v_res_2850_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1(void){
_start:
{
lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; lean_object* v___x_2856_; lean_object* v___x_2857_; 
v___x_2852_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_2853_ = lean_unsigned_to_nat(20u);
v___x_2854_ = lean_unsigned_to_nat(382u);
v___x_2855_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0));
v___x_2856_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_2857_ = l_mkPanicMessageWithDecl(v___x_2856_, v___x_2855_, v___x_2854_, v___x_2853_, v___x_2852_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(lean_object* v_value_2858_, lean_object* v___y_2859_, lean_object* v___y_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_){
_start:
{
switch(lean_obj_tag(v_value_2858_))
{
case 0:
{
lean_object* v___x_2867_; uint8_t v_isShared_2868_; uint8_t v_isSharedCheck_2873_; 
v_isSharedCheck_2873_ = !lean_is_exclusive(v_value_2858_);
if (v_isSharedCheck_2873_ == 0)
{
lean_object* v_unused_2874_; 
v_unused_2874_ = lean_ctor_get(v_value_2858_, 0);
lean_dec(v_unused_2874_);
v___x_2867_ = v_value_2858_;
v_isShared_2868_ = v_isSharedCheck_2873_;
goto v_resetjp_2866_;
}
else
{
lean_dec(v_value_2858_);
v___x_2867_ = lean_box(0);
v_isShared_2868_ = v_isSharedCheck_2873_;
goto v_resetjp_2866_;
}
v_resetjp_2866_:
{
lean_object* v___x_2869_; lean_object* v___x_2871_; 
v___x_2869_ = lean_box(0);
if (v_isShared_2868_ == 0)
{
lean_ctor_set(v___x_2867_, 0, v___x_2869_);
v___x_2871_ = v___x_2867_;
goto v_reusejp_2870_;
}
else
{
lean_object* v_reuseFailAlloc_2872_; 
v_reuseFailAlloc_2872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2872_, 0, v___x_2869_);
v___x_2871_ = v_reuseFailAlloc_2872_;
goto v_reusejp_2870_;
}
v_reusejp_2870_:
{
return v___x_2871_;
}
}
}
case 1:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = lean_box(0);
v___x_2876_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2876_, 0, v___x_2875_);
return v___x_2876_;
}
case 4:
{
lean_object* v_fvarId_2877_; lean_object* v_args_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; 
v_fvarId_2877_ = lean_ctor_get(v_value_2858_, 0);
lean_inc(v_fvarId_2877_);
v_args_2878_ = lean_ctor_get(v_value_2858_, 1);
lean_inc_ref(v_args_2878_);
lean_dec_ref_known(v_value_2858_, 2);
v___x_2879_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2877_, v___y_2859_, v___y_2860_);
lean_dec_ref(v___x_2879_);
v___x_2880_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2878_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2880_;
}
case 5:
{
lean_object* v_args_2881_; lean_object* v___x_2882_; 
v_args_2881_ = lean_ctor_get(v_value_2858_, 1);
lean_inc_ref(v_args_2881_);
lean_dec_ref_known(v_value_2858_, 2);
v___x_2882_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2881_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2882_;
}
case 8:
{
lean_object* v_var_2883_; lean_object* v___x_2884_; 
v_var_2883_ = lean_ctor_get(v_value_2858_, 2);
lean_inc(v_var_2883_);
lean_dec_ref_known(v_value_2858_, 3);
v___x_2884_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_2883_, v___y_2859_, v___y_2860_);
return v___x_2884_;
}
case 9:
{
lean_object* v_args_2885_; lean_object* v___x_2886_; 
v_args_2885_ = lean_ctor_get(v_value_2858_, 1);
lean_inc_ref(v_args_2885_);
lean_dec_ref_known(v_value_2858_, 2);
v___x_2886_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2885_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2886_;
}
case 10:
{
lean_object* v_args_2887_; lean_object* v___x_2888_; 
v_args_2887_ = lean_ctor_get(v_value_2858_, 1);
lean_inc_ref(v_args_2887_);
lean_dec_ref_known(v_value_2858_, 2);
v___x_2888_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2887_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2888_;
}
case 12:
{
lean_object* v_var_2889_; lean_object* v_args_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v_var_2889_ = lean_ctor_get(v_value_2858_, 0);
lean_inc(v_var_2889_);
v_args_2890_ = lean_ctor_get(v_value_2858_, 2);
lean_inc_ref(v_args_2890_);
lean_dec_ref_known(v_value_2858_, 3);
v___x_2891_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_2889_, v___y_2859_, v___y_2860_);
lean_dec_ref(v___x_2891_);
v___x_2892_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2890_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2892_;
}
case 14:
{
lean_object* v_fvarId_2893_; lean_object* v___x_2894_; 
v_fvarId_2893_ = lean_ctor_get(v_value_2858_, 0);
lean_inc(v_fvarId_2893_);
lean_dec_ref_known(v_value_2858_, 1);
v___x_2894_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2893_, v___y_2859_, v___y_2860_);
return v___x_2894_;
}
case 15:
{
lean_object* v___x_2895_; lean_object* v___x_2896_; 
lean_dec_ref_known(v_value_2858_, 1);
v___x_2895_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1);
v___x_2896_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(v___x_2895_, v___y_2859_, v___y_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_);
return v___x_2896_;
}
default: 
{
lean_object* v_var_2897_; lean_object* v___x_2898_; 
v_var_2897_ = lean_ctor_get(v_value_2858_, 1);
lean_inc(v_var_2897_);
lean_dec(v_value_2858_);
v___x_2898_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_2897_, v___y_2859_, v___y_2860_);
return v___x_2898_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___boxed(lean_object* v_value_2899_, lean_object* v___y_2900_, lean_object* v___y_2901_, lean_object* v___y_2902_, lean_object* v___y_2903_, lean_object* v___y_2904_, lean_object* v___y_2905_, lean_object* v___y_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(v_value_2899_, v___y_2900_, v___y_2901_, v___y_2902_, v___y_2903_, v___y_2904_, v___y_2905_);
lean_dec(v___y_2905_);
lean_dec_ref(v___y_2904_);
lean_dec(v___y_2903_);
lean_dec_ref(v___y_2902_);
lean_dec(v___y_2901_);
lean_dec_ref(v___y_2900_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(lean_object* v_fvarId_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_){
_start:
{
lean_object* v___x_2916_; 
v___x_2916_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2908_, v___y_2909_, v___y_2910_);
return v___x_2916_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___boxed(lean_object* v_fvarId_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_){
_start:
{
lean_object* v_res_2925_; 
v_res_2925_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(v_fvarId_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_, v___y_2922_, v___y_2923_);
lean_dec(v___y_2923_);
lean_dec_ref(v___y_2922_);
lean_dec(v___y_2921_);
lean_dec_ref(v___y_2920_);
lean_dec(v___y_2919_);
lean_dec_ref(v___y_2918_);
return v_res_2925_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(lean_object* v_fvarId_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v___x_2929_; lean_object* v_vars_2930_; lean_object* v_borrows_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2945_; 
v___x_2929_ = lean_st_ref_take(v___y_2927_);
v_vars_2930_ = lean_ctor_get(v___x_2929_, 0);
v_borrows_2931_ = lean_ctor_get(v___x_2929_, 1);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2929_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2933_ = v___x_2929_;
v_isShared_2934_ = v_isSharedCheck_2945_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_borrows_2931_);
lean_inc(v_vars_2930_);
lean_dec(v___x_2929_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2945_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v_vars_2938_; lean_object* v_borrows_2939_; lean_object* v___x_2941_; 
v___x_2935_ = lean_box(0);
v___x_2936_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2937_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_2926_);
v_vars_2938_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2936_, v___x_2937_, v_vars_2930_, v_fvarId_2926_);
v_borrows_2939_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2936_, v___x_2937_, v_borrows_2931_, v_fvarId_2926_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 1, v_borrows_2939_);
lean_ctor_set(v___x_2933_, 0, v_vars_2938_);
v___x_2941_ = v___x_2933_;
goto v_reusejp_2940_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_vars_2938_);
lean_ctor_set(v_reuseFailAlloc_2944_, 1, v_borrows_2939_);
v___x_2941_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2940_;
}
v_reusejp_2940_:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
v___x_2942_ = lean_st_ref_put(v___y_2927_, v___x_2941_);
v___x_2943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2943_, 0, v___x_2935_);
return v___x_2943_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg___boxed(lean_object* v_fvarId_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_){
_start:
{
lean_object* v_res_2949_; 
v_res_2949_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(v_fvarId_2946_, v___y_2947_);
lean_dec(v___y_2947_);
return v_res_2949_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(lean_object* v_fvarId_2950_, lean_object* v___y_2951_, lean_object* v___y_2952_, lean_object* v___y_2953_, lean_object* v___y_2954_, lean_object* v___y_2955_, lean_object* v___y_2956_){
_start:
{
lean_object* v___x_2958_; lean_object* v_vars_2959_; lean_object* v_borrows_2960_; lean_object* v___x_2962_; uint8_t v_isShared_2963_; uint8_t v_isSharedCheck_2974_; 
v___x_2958_ = lean_st_ref_take(v___y_2952_);
v_vars_2959_ = lean_ctor_get(v___x_2958_, 0);
v_borrows_2960_ = lean_ctor_get(v___x_2958_, 1);
v_isSharedCheck_2974_ = !lean_is_exclusive(v___x_2958_);
if (v_isSharedCheck_2974_ == 0)
{
v___x_2962_ = v___x_2958_;
v_isShared_2963_ = v_isSharedCheck_2974_;
goto v_resetjp_2961_;
}
else
{
lean_inc(v_borrows_2960_);
lean_inc(v_vars_2959_);
lean_dec(v___x_2958_);
v___x_2962_ = lean_box(0);
v_isShared_2963_ = v_isSharedCheck_2974_;
goto v_resetjp_2961_;
}
v_resetjp_2961_:
{
lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; lean_object* v_vars_2967_; lean_object* v_borrows_2968_; lean_object* v___x_2970_; 
v___x_2964_ = lean_box(0);
v___x_2965_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2966_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_2950_);
v_vars_2967_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2965_, v___x_2966_, v_vars_2959_, v_fvarId_2950_);
v_borrows_2968_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2965_, v___x_2966_, v_borrows_2960_, v_fvarId_2950_);
if (v_isShared_2963_ == 0)
{
lean_ctor_set(v___x_2962_, 1, v_borrows_2968_);
lean_ctor_set(v___x_2962_, 0, v_vars_2967_);
v___x_2970_ = v___x_2962_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2973_; 
v_reuseFailAlloc_2973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2973_, 0, v_vars_2967_);
lean_ctor_set(v_reuseFailAlloc_2973_, 1, v_borrows_2968_);
v___x_2970_ = v_reuseFailAlloc_2973_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
lean_object* v___x_2971_; lean_object* v___x_2972_; 
v___x_2971_ = lean_st_ref_put(v___y_2952_, v___x_2970_);
v___x_2972_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2972_, 0, v___x_2964_);
return v___x_2972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___boxed(lean_object* v_fvarId_2975_, lean_object* v___y_2976_, lean_object* v___y_2977_, lean_object* v___y_2978_, lean_object* v___y_2979_, lean_object* v___y_2980_, lean_object* v___y_2981_, lean_object* v___y_2982_){
_start:
{
lean_object* v_res_2983_; 
v_res_2983_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(v_fvarId_2975_, v___y_2976_, v___y_2977_, v___y_2978_, v___y_2979_, v___y_2980_, v___y_2981_);
lean_dec(v___y_2981_);
lean_dec_ref(v___y_2980_);
lean_dec(v___y_2979_);
lean_dec_ref(v___y_2978_);
lean_dec(v___y_2977_);
lean_dec_ref(v___y_2976_);
return v_res_2983_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(lean_object* v_x_2984_){
_start:
{
uint8_t v___x_2985_; 
v___x_2985_ = 1;
return v___x_2985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed(lean_object* v_x_2986_){
_start:
{
uint8_t v_res_2987_; lean_object* v_r_2988_; 
v_res_2987_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(v_x_2986_);
lean_dec(v_x_2986_);
v_r_2988_ = lean_box(v_res_2987_);
return v_r_2988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1(lean_object* v___x_2989_, lean_object* v___x_2990_, lean_object* v_derivedValMap_2991_, lean_object* v___f_2992_, lean_object* v_liveVars_2993_, lean_object* v_x_2994_){
_start:
{
lean_object* v_vars_2995_; lean_object* v_borrows_2996_; lean_object* v___x_2998_; uint8_t v_isShared_2999_; uint8_t v_isSharedCheck_3006_; 
v_vars_2995_ = lean_ctor_get(v_liveVars_2993_, 0);
v_borrows_2996_ = lean_ctor_get(v_liveVars_2993_, 1);
v_isSharedCheck_3006_ = !lean_is_exclusive(v_liveVars_2993_);
if (v_isSharedCheck_3006_ == 0)
{
v___x_2998_ = v_liveVars_2993_;
v_isShared_2999_ = v_isSharedCheck_3006_;
goto v_resetjp_2997_;
}
else
{
lean_inc(v_borrows_2996_);
lean_inc(v_vars_2995_);
lean_dec(v_liveVars_2993_);
v___x_2998_ = lean_box(0);
v_isShared_2999_ = v_isSharedCheck_3006_;
goto v_resetjp_2997_;
}
v_resetjp_2997_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3003_; 
v___x_3000_ = lean_box(0);
lean_inc(v_x_2994_);
v___x_3001_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2989_, v___x_2990_, v_borrows_2996_, v_x_2994_, v___x_3000_);
if (v_isShared_2999_ == 0)
{
lean_ctor_set(v___x_2998_, 1, v___x_3001_);
v___x_3003_ = v___x_2998_;
goto v_reusejp_3002_;
}
else
{
lean_object* v_reuseFailAlloc_3005_; 
v_reuseFailAlloc_3005_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3005_, 0, v_vars_2995_);
lean_ctor_set(v_reuseFailAlloc_3005_, 1, v___x_3001_);
v___x_3003_ = v_reuseFailAlloc_3005_;
goto v_reusejp_3002_;
}
v_reusejp_3002_:
{
lean_object* v___x_3004_; 
v___x_3004_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_x_2994_, v_derivedValMap_2991_, v___x_3003_, v___f_2992_);
return v___x_3004_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
lean_object* v_borrowedValues_3011_; lean_object* v_derivedValMap_3012_; lean_object* v___f_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___f_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; 
v_borrowedValues_3011_ = lean_ctor_get(v___y_3008_, 0);
v_derivedValMap_3012_ = lean_ctor_get(v___y_3008_, 1);
v___f_3013_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___closed__0));
v___x_3014_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_3015_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc_ref(v_derivedValMap_3012_);
v___f_3016_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1), 6, 4);
lean_closure_set(v___f_3016_, 0, v___x_3014_);
lean_closure_set(v___f_3016_, 1, v___x_3015_);
lean_closure_set(v___f_3016_, 2, v_derivedValMap_3012_);
lean_closure_set(v___f_3016_, 3, v___f_3013_);
v___x_3017_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_3018_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_3016_, v___x_3017_, v_borrowedValues_3011_);
v___x_3019_ = lean_st_ref_take(v___y_3009_);
lean_dec(v___x_3019_);
v___x_3020_ = lean_box(0);
v___x_3021_ = lean_st_ref_put(v___y_3009_, v___x_3018_);
v___x_3022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3022_, 0, v___x_3020_);
return v___x_3022_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___boxed(lean_object* v___y_3023_, lean_object* v___y_3024_, lean_object* v___y_3025_){
_start:
{
lean_object* v_res_3026_; 
v_res_3026_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(v___y_3023_, v___y_3024_);
lean_dec(v___y_3024_);
lean_dec_ref(v___y_3023_);
return v_res_3026_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
lean_object* v_borrowedValues_3034_; lean_object* v_derivedValMap_3035_; lean_object* v___f_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___f_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; 
v_borrowedValues_3034_ = lean_ctor_get(v___y_3027_, 0);
v_derivedValMap_3035_ = lean_ctor_get(v___y_3027_, 1);
v___f_3036_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___closed__0));
v___x_3037_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_3038_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc_ref(v_derivedValMap_3035_);
v___f_3039_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1), 6, 4);
lean_closure_set(v___f_3039_, 0, v___x_3037_);
lean_closure_set(v___f_3039_, 1, v___x_3038_);
lean_closure_set(v___f_3039_, 2, v_derivedValMap_3035_);
lean_closure_set(v___f_3039_, 3, v___f_3036_);
v___x_3040_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_3041_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_3039_, v___x_3040_, v_borrowedValues_3034_);
v___x_3042_ = lean_st_ref_take(v___y_3028_);
lean_dec(v___x_3042_);
v___x_3043_ = lean_box(0);
v___x_3044_ = lean_st_ref_put(v___y_3028_, v___x_3041_);
v___x_3045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3045_, 0, v___x_3043_);
return v___x_3045_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___boxed(lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_){
_start:
{
lean_object* v_res_3053_; 
v_res_3053_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_);
lean_dec(v___y_3051_);
lean_dec_ref(v___y_3050_);
lean_dec(v___y_3049_);
lean_dec_ref(v___y_3048_);
lean_dec(v___y_3047_);
lean_dec_ref(v___y_3046_);
return v_res_3053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(lean_object* v_fvarId_3054_, lean_object* v_k_3055_, lean_object* v_n_3056_, lean_object* v___y_3057_){
_start:
{
lean_object* v___x_3059_; uint8_t v___x_3060_; 
v___x_3059_ = lean_unsigned_to_nat(0u);
v___x_3060_ = lean_nat_dec_eq(v_n_3056_, v___x_3059_);
if (v___x_3060_ == 0)
{
lean_object* v_varMap_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; uint8_t v___y_3065_; uint8_t v_isDefiniteRef_3069_; 
v_varMap_3061_ = lean_ctor_get(v___y_3057_, 2);
v___x_3062_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3054_);
lean_inc(v_varMap_3061_);
v___x_3063_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3062_, v_varMap_3061_, v_fvarId_3054_);
v_isDefiniteRef_3069_ = lean_ctor_get_uint8(v___x_3063_, sizeof(void*)*2 + 1);
if (v_isDefiniteRef_3069_ == 0)
{
uint8_t v___x_3070_; 
v___x_3070_ = 1;
v___y_3065_ = v___x_3070_;
goto v___jp_3064_;
}
else
{
v___y_3065_ = v___x_3060_;
goto v___jp_3064_;
}
v___jp_3064_:
{
uint8_t v_persistent_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; 
v_persistent_3066_ = lean_ctor_get_uint8(v___x_3063_, sizeof(void*)*2 + 2);
lean_dec(v___x_3063_);
v___x_3067_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3067_, 0, v_fvarId_3054_);
lean_ctor_set(v___x_3067_, 1, v_n_3056_);
lean_ctor_set(v___x_3067_, 2, v_k_3055_);
lean_ctor_set_uint8(v___x_3067_, sizeof(void*)*3, v___y_3065_);
lean_ctor_set_uint8(v___x_3067_, sizeof(void*)*3 + 1, v_persistent_3066_);
v___x_3068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3068_, 0, v___x_3067_);
return v___x_3068_;
}
}
else
{
lean_object* v___x_3071_; 
lean_dec(v_n_3056_);
lean_dec(v_fvarId_3054_);
v___x_3071_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3071_, 0, v_k_3055_);
return v___x_3071_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg___boxed(lean_object* v_fvarId_3072_, lean_object* v_k_3073_, lean_object* v_n_3074_, lean_object* v___y_3075_, lean_object* v___y_3076_){
_start:
{
lean_object* v_res_3077_; 
v_res_3077_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(v_fvarId_3072_, v_k_3073_, v_n_3074_, v___y_3075_);
lean_dec_ref(v___y_3075_);
return v_res_3077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(lean_object* v_fvarId_3078_, lean_object* v_k_3079_, lean_object* v_n_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_, lean_object* v___y_3083_, lean_object* v___y_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_){
_start:
{
lean_object* v___x_3088_; uint8_t v___x_3089_; 
v___x_3088_ = lean_unsigned_to_nat(0u);
v___x_3089_ = lean_nat_dec_eq(v_n_3080_, v___x_3088_);
if (v___x_3089_ == 0)
{
lean_object* v_varMap_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; uint8_t v___y_3094_; uint8_t v_isDefiniteRef_3098_; 
v_varMap_3090_ = lean_ctor_get(v___y_3081_, 2);
v___x_3091_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3078_);
lean_inc(v_varMap_3090_);
v___x_3092_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3091_, v_varMap_3090_, v_fvarId_3078_);
v_isDefiniteRef_3098_ = lean_ctor_get_uint8(v___x_3092_, sizeof(void*)*2 + 1);
if (v_isDefiniteRef_3098_ == 0)
{
uint8_t v___x_3099_; 
v___x_3099_ = 1;
v___y_3094_ = v___x_3099_;
goto v___jp_3093_;
}
else
{
v___y_3094_ = v___x_3089_;
goto v___jp_3093_;
}
v___jp_3093_:
{
uint8_t v_persistent_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; 
v_persistent_3095_ = lean_ctor_get_uint8(v___x_3092_, sizeof(void*)*2 + 2);
lean_dec(v___x_3092_);
v___x_3096_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3096_, 0, v_fvarId_3078_);
lean_ctor_set(v___x_3096_, 1, v_n_3080_);
lean_ctor_set(v___x_3096_, 2, v_k_3079_);
lean_ctor_set_uint8(v___x_3096_, sizeof(void*)*3, v___y_3094_);
lean_ctor_set_uint8(v___x_3096_, sizeof(void*)*3 + 1, v_persistent_3095_);
v___x_3097_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3096_);
return v___x_3097_;
}
}
else
{
lean_object* v___x_3100_; 
lean_dec(v_n_3080_);
lean_dec(v_fvarId_3078_);
v___x_3100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3100_, 0, v_k_3079_);
return v___x_3100_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___boxed(lean_object* v_fvarId_3101_, lean_object* v_k_3102_, lean_object* v_n_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_){
_start:
{
lean_object* v_res_3111_; 
v_res_3111_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(v_fvarId_3101_, v_k_3102_, v_n_3103_, v___y_3104_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_);
lean_dec(v___y_3109_);
lean_dec_ref(v___y_3108_);
lean_dec(v___y_3107_);
lean_dec_ref(v___y_3106_);
lean_dec(v___y_3105_);
lean_dec_ref(v___y_3104_);
return v_res_3111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(lean_object* v_fvarId_3112_, lean_object* v_k_3113_, lean_object* v___y_3114_){
_start:
{
lean_object* v_varMap_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v_ctorInfo_3119_; 
v_varMap_3116_ = lean_ctor_get(v___y_3114_, 2);
v___x_3117_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3112_);
lean_inc(v_varMap_3116_);
v___x_3118_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3117_, v_varMap_3116_, v_fvarId_3112_);
v_ctorInfo_3119_ = lean_ctor_get(v___x_3118_, 1);
lean_inc(v_ctorInfo_3119_);
if (lean_obj_tag(v_ctorInfo_3119_) == 0)
{
uint8_t v_isDefiniteRef_3120_; uint8_t v_persistent_3121_; lean_object* v___x_3122_; uint8_t v___y_3124_; 
v_isDefiniteRef_3120_ = lean_ctor_get_uint8(v___x_3118_, sizeof(void*)*2 + 1);
v_persistent_3121_ = lean_ctor_get_uint8(v___x_3118_, sizeof(void*)*2 + 2);
lean_dec(v___x_3118_);
v___x_3122_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3120_ == 0)
{
uint8_t v___x_3128_; 
v___x_3128_ = 1;
v___y_3124_ = v___x_3128_;
goto v___jp_3123_;
}
else
{
uint8_t v___x_3129_; 
v___x_3129_ = 0;
v___y_3124_ = v___x_3129_;
goto v___jp_3123_;
}
v___jp_3123_:
{
lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3125_ = lean_box(0);
v___x_3126_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_3126_, 0, v_fvarId_3112_);
lean_ctor_set(v___x_3126_, 1, v___x_3122_);
lean_ctor_set(v___x_3126_, 2, v___x_3125_);
lean_ctor_set(v___x_3126_, 3, v_k_3113_);
lean_ctor_set_uint8(v___x_3126_, sizeof(void*)*4, v___y_3124_);
lean_ctor_set_uint8(v___x_3126_, sizeof(void*)*4 + 1, v_persistent_3121_);
v___x_3127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
return v___x_3127_;
}
}
else
{
uint8_t v_persistent_3130_; lean_object* v_val_3131_; lean_object* v___x_3133_; uint8_t v_isShared_3134_; uint8_t v_isSharedCheck_3145_; 
v_persistent_3130_ = lean_ctor_get_uint8(v___x_3118_, sizeof(void*)*2 + 2);
lean_dec(v___x_3118_);
v_val_3131_ = lean_ctor_get(v_ctorInfo_3119_, 0);
v_isSharedCheck_3145_ = !lean_is_exclusive(v_ctorInfo_3119_);
if (v_isSharedCheck_3145_ == 0)
{
v___x_3133_ = v_ctorInfo_3119_;
v_isShared_3134_ = v_isSharedCheck_3145_;
goto v_resetjp_3132_;
}
else
{
lean_inc(v_val_3131_);
lean_dec(v_ctorInfo_3119_);
v___x_3133_ = lean_box(0);
v_isShared_3134_ = v_isSharedCheck_3145_;
goto v_resetjp_3132_;
}
v_resetjp_3132_:
{
uint8_t v___x_3135_; 
v___x_3135_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_val_3131_);
if (v___x_3135_ == 0)
{
lean_object* v___x_3136_; 
lean_del_object(v___x_3133_);
lean_dec(v_val_3131_);
lean_dec(v_fvarId_3112_);
v___x_3136_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3136_, 0, v_k_3113_);
return v___x_3136_;
}
else
{
lean_object* v_size_3137_; lean_object* v___x_3138_; uint8_t v___x_3139_; lean_object* v___x_3141_; 
v_size_3137_ = lean_ctor_get(v_val_3131_, 2);
lean_inc(v_size_3137_);
lean_dec(v_val_3131_);
v___x_3138_ = lean_unsigned_to_nat(1u);
v___x_3139_ = 0;
if (v_isShared_3134_ == 0)
{
lean_ctor_set(v___x_3133_, 0, v_size_3137_);
v___x_3141_ = v___x_3133_;
goto v_reusejp_3140_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v_size_3137_);
v___x_3141_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3140_;
}
v_reusejp_3140_:
{
lean_object* v___x_3142_; lean_object* v___x_3143_; 
v___x_3142_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_3142_, 0, v_fvarId_3112_);
lean_ctor_set(v___x_3142_, 1, v___x_3138_);
lean_ctor_set(v___x_3142_, 2, v___x_3141_);
lean_ctor_set(v___x_3142_, 3, v_k_3113_);
lean_ctor_set_uint8(v___x_3142_, sizeof(void*)*4, v___x_3139_);
lean_ctor_set_uint8(v___x_3142_, sizeof(void*)*4 + 1, v_persistent_3130_);
v___x_3143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3143_, 0, v___x_3142_);
return v___x_3143_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg___boxed(lean_object* v_fvarId_3146_, lean_object* v_k_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_3146_, v_k_3147_, v___y_3148_);
lean_dec_ref(v___y_3148_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(lean_object* v_fvarId_3151_, lean_object* v_k_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_){
_start:
{
lean_object* v___x_3160_; 
v___x_3160_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_3151_, v_k_3152_, v___y_3153_);
return v___x_3160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___boxed(lean_object* v_fvarId_3161_, lean_object* v_k_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_){
_start:
{
lean_object* v_res_3170_; 
v_res_3170_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(v_fvarId_3161_, v_k_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_);
lean_dec(v___y_3168_);
lean_dec_ref(v___y_3167_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
return v_res_3170_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(lean_object* v_x_3171_, lean_object* v_x_3172_){
_start:
{
lean_object* v_snd_3173_; lean_object* v_snd_3174_; uint8_t v___x_3175_; 
v_snd_3173_ = lean_ctor_get(v_x_3171_, 1);
v_snd_3174_ = lean_ctor_get(v_x_3172_, 1);
v___x_3175_ = lean_nat_dec_lt(v_snd_3173_, v_snd_3174_);
return v___x_3175_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0___boxed(lean_object* v_x_3176_, lean_object* v_x_3177_){
_start:
{
uint8_t v_res_3178_; lean_object* v_r_3179_; 
v_res_3178_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v_x_3176_, v_x_3177_);
lean_dec_ref(v_x_3177_);
lean_dec_ref(v_x_3176_);
v_r_3179_ = lean_box(v_res_3178_);
return v_r_3179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(lean_object* v_hi_3180_, lean_object* v_pivot_3181_, lean_object* v_as_3182_, lean_object* v_i_3183_, lean_object* v_k_3184_){
_start:
{
uint8_t v___x_3185_; 
v___x_3185_ = lean_nat_dec_lt(v_k_3184_, v_hi_3180_);
if (v___x_3185_ == 0)
{
lean_object* v___x_3186_; lean_object* v___x_3187_; 
lean_dec(v_k_3184_);
v___x_3186_ = lean_array_fswap(v_as_3182_, v_i_3183_, v_hi_3180_);
v___x_3187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3187_, 0, v_i_3183_);
lean_ctor_set(v___x_3187_, 1, v___x_3186_);
return v___x_3187_;
}
else
{
lean_object* v___x_3188_; lean_object* v_snd_3189_; lean_object* v_snd_3190_; uint8_t v___x_3191_; 
v___x_3188_ = lean_array_fget_borrowed(v_as_3182_, v_k_3184_);
v_snd_3189_ = lean_ctor_get(v___x_3188_, 1);
v_snd_3190_ = lean_ctor_get(v_pivot_3181_, 1);
v___x_3191_ = lean_nat_dec_lt(v_snd_3189_, v_snd_3190_);
if (v___x_3191_ == 0)
{
lean_object* v___x_3192_; lean_object* v___x_3193_; 
v___x_3192_ = lean_unsigned_to_nat(1u);
v___x_3193_ = lean_nat_add(v_k_3184_, v___x_3192_);
lean_dec(v_k_3184_);
v_k_3184_ = v___x_3193_;
goto _start;
}
else
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; 
v___x_3195_ = lean_array_fswap(v_as_3182_, v_i_3183_, v_k_3184_);
v___x_3196_ = lean_unsigned_to_nat(1u);
v___x_3197_ = lean_nat_add(v_i_3183_, v___x_3196_);
lean_dec(v_i_3183_);
v___x_3198_ = lean_nat_add(v_k_3184_, v___x_3196_);
lean_dec(v_k_3184_);
v_as_3182_ = v___x_3195_;
v_i_3183_ = v___x_3197_;
v_k_3184_ = v___x_3198_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg___boxed(lean_object* v_hi_3200_, lean_object* v_pivot_3201_, lean_object* v_as_3202_, lean_object* v_i_3203_, lean_object* v_k_3204_){
_start:
{
lean_object* v_res_3205_; 
v_res_3205_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(v_hi_3200_, v_pivot_3201_, v_as_3202_, v_i_3203_, v_k_3204_);
lean_dec_ref(v_pivot_3201_);
lean_dec(v_hi_3200_);
return v_res_3205_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(lean_object* v_n_3206_, lean_object* v_as_3207_, lean_object* v_lo_3208_, lean_object* v_hi_3209_){
_start:
{
lean_object* v___y_3211_; uint8_t v___x_3221_; 
v___x_3221_ = lean_nat_dec_lt(v_lo_3208_, v_hi_3209_);
if (v___x_3221_ == 0)
{
lean_dec(v_lo_3208_);
return v_as_3207_;
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v_mid_3224_; lean_object* v___y_3226_; lean_object* v___y_3232_; lean_object* v___x_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; 
v___x_3222_ = lean_nat_add(v_lo_3208_, v_hi_3209_);
v___x_3223_ = lean_unsigned_to_nat(1u);
v_mid_3224_ = lean_nat_shiftr(v___x_3222_, v___x_3223_);
lean_dec(v___x_3222_);
v___x_3237_ = lean_array_fget_borrowed(v_as_3207_, v_mid_3224_);
v___x_3238_ = lean_array_fget_borrowed(v_as_3207_, v_lo_3208_);
v___x_3239_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v___x_3237_, v___x_3238_);
if (v___x_3239_ == 0)
{
v___y_3232_ = v_as_3207_;
goto v___jp_3231_;
}
else
{
lean_object* v___x_3240_; 
v___x_3240_ = lean_array_fswap(v_as_3207_, v_lo_3208_, v_mid_3224_);
v___y_3232_ = v___x_3240_;
goto v___jp_3231_;
}
v___jp_3225_:
{
lean_object* v___x_3227_; lean_object* v___x_3228_; uint8_t v___x_3229_; 
v___x_3227_ = lean_array_fget_borrowed(v___y_3226_, v_mid_3224_);
v___x_3228_ = lean_array_fget_borrowed(v___y_3226_, v_hi_3209_);
v___x_3229_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v___x_3227_, v___x_3228_);
if (v___x_3229_ == 0)
{
lean_dec(v_mid_3224_);
v___y_3211_ = v___y_3226_;
goto v___jp_3210_;
}
else
{
lean_object* v___x_3230_; 
v___x_3230_ = lean_array_fswap(v___y_3226_, v_mid_3224_, v_hi_3209_);
lean_dec(v_mid_3224_);
v___y_3211_ = v___x_3230_;
goto v___jp_3210_;
}
}
v___jp_3231_:
{
lean_object* v___x_3233_; lean_object* v___x_3234_; uint8_t v___x_3235_; 
v___x_3233_ = lean_array_fget_borrowed(v___y_3232_, v_hi_3209_);
v___x_3234_ = lean_array_fget_borrowed(v___y_3232_, v_lo_3208_);
v___x_3235_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v___x_3233_, v___x_3234_);
if (v___x_3235_ == 0)
{
v___y_3226_ = v___y_3232_;
goto v___jp_3225_;
}
else
{
lean_object* v___x_3236_; 
v___x_3236_ = lean_array_fswap(v___y_3232_, v_lo_3208_, v_hi_3209_);
v___y_3226_ = v___x_3236_;
goto v___jp_3225_;
}
}
}
v___jp_3210_:
{
lean_object* v_pivot_3212_; lean_object* v___x_3213_; lean_object* v_fst_3214_; lean_object* v_snd_3215_; uint8_t v___x_3216_; 
v_pivot_3212_ = lean_array_fget(v___y_3211_, v_hi_3209_);
lean_inc_n(v_lo_3208_, 2);
v___x_3213_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(v_hi_3209_, v_pivot_3212_, v___y_3211_, v_lo_3208_, v_lo_3208_);
lean_dec(v_pivot_3212_);
v_fst_3214_ = lean_ctor_get(v___x_3213_, 0);
lean_inc(v_fst_3214_);
v_snd_3215_ = lean_ctor_get(v___x_3213_, 1);
lean_inc(v_snd_3215_);
lean_dec_ref(v___x_3213_);
v___x_3216_ = lean_nat_dec_le(v_hi_3209_, v_fst_3214_);
if (v___x_3216_ == 0)
{
lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3217_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_n_3206_, v_snd_3215_, v_lo_3208_, v_fst_3214_);
v___x_3218_ = lean_unsigned_to_nat(1u);
v___x_3219_ = lean_nat_add(v_fst_3214_, v___x_3218_);
lean_dec(v_fst_3214_);
v_as_3207_ = v___x_3217_;
v_lo_3208_ = v___x_3219_;
goto _start;
}
else
{
lean_dec(v_fst_3214_);
lean_dec(v_lo_3208_);
return v_snd_3215_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___boxed(lean_object* v_n_3241_, lean_object* v_as_3242_, lean_object* v_lo_3243_, lean_object* v_hi_3244_){
_start:
{
lean_object* v_res_3245_; 
v_res_3245_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_n_3241_, v_as_3242_, v_lo_3243_, v_hi_3244_);
lean_dec(v_hi_3244_);
lean_dec(v_n_3241_);
return v_res_3245_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(lean_object* v_altLiveVars_3246_, lean_object* v_a_3247_, lean_object* v_a_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_){
_start:
{
if (lean_obj_tag(v_a_3247_) == 0)
{
lean_object* v___x_3252_; lean_object* v___x_3253_; 
v___x_3252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3252_, 0, v_a_3248_);
v___x_3253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3253_, 0, v___x_3252_);
return v___x_3253_;
}
else
{
lean_object* v_key_3254_; lean_object* v_tail_3255_; lean_object* v_fst_3256_; lean_object* v_snd_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3309_; 
v_key_3254_ = lean_ctor_get(v_a_3247_, 0);
lean_inc(v_key_3254_);
v_tail_3255_ = lean_ctor_get(v_a_3247_, 2);
lean_inc(v_tail_3255_);
lean_dec_ref_known(v_a_3247_, 3);
v_fst_3256_ = lean_ctor_get(v_a_3248_, 0);
v_snd_3257_ = lean_ctor_get(v_a_3248_, 1);
v_isSharedCheck_3309_ = !lean_is_exclusive(v_a_3248_);
if (v_isSharedCheck_3309_ == 0)
{
v___x_3259_ = v_a_3248_;
v_isShared_3260_ = v_isSharedCheck_3309_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_snd_3257_);
lean_inc(v_fst_3256_);
lean_dec(v_a_3248_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3309_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v_varMap_3261_; lean_object* v_vars_3262_; lean_object* v_borrows_3263_; lean_object* v___x_3264_; lean_object* v___x_3265_; uint8_t v___x_3266_; 
v_varMap_3261_ = lean_ctor_get(v___y_3249_, 2);
v_vars_3262_ = lean_ctor_get(v_altLiveVars_3246_, 0);
v_borrows_3263_ = lean_ctor_get(v_altLiveVars_3246_, 1);
v___x_3264_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_key_3254_);
lean_inc(v_varMap_3261_);
v___x_3265_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3264_, v_varMap_3261_, v_key_3254_);
v___x_3266_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_3262_, v_key_3254_);
if (v___x_3266_ == 0)
{
lean_object* v___x_3267_; uint8_t v_isPossibleRef_3273_; 
v___x_3267_ = lean_st_ref_get(v___y_3250_);
v_isPossibleRef_3273_ = lean_ctor_get_uint8(v___x_3265_, sizeof(void*)*2);
if (v_isPossibleRef_3273_ == 0)
{
lean_dec(v___x_3267_);
lean_dec(v___x_3265_);
lean_dec(v_key_3254_);
goto v___jp_3268_;
}
else
{
lean_object* v_idx_3274_; lean_object* v_borrows_3275_; lean_object* v___x_3277_; uint8_t v_isShared_3278_; uint8_t v_isSharedCheck_3286_; 
v_idx_3274_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_idx_3274_);
lean_dec(v___x_3265_);
v_borrows_3275_ = lean_ctor_get(v___x_3267_, 1);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3267_);
if (v_isSharedCheck_3286_ == 0)
{
lean_object* v_unused_3287_; 
v_unused_3287_ = lean_ctor_get(v___x_3267_, 0);
lean_dec(v_unused_3287_);
v___x_3277_ = v___x_3267_;
v_isShared_3278_ = v_isSharedCheck_3286_;
goto v_resetjp_3276_;
}
else
{
lean_inc(v_borrows_3275_);
lean_dec(v___x_3267_);
v___x_3277_ = lean_box(0);
v_isShared_3278_ = v_isSharedCheck_3286_;
goto v_resetjp_3276_;
}
v_resetjp_3276_:
{
uint8_t v___x_3279_; 
v___x_3279_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3275_, v_key_3254_);
lean_dec_ref(v_borrows_3275_);
if (v___x_3279_ == 0)
{
lean_object* v___x_3281_; 
lean_del_object(v___x_3259_);
if (v_isShared_3278_ == 0)
{
lean_ctor_set(v___x_3277_, 1, v_idx_3274_);
lean_ctor_set(v___x_3277_, 0, v_key_3254_);
v___x_3281_ = v___x_3277_;
goto v_reusejp_3280_;
}
else
{
lean_object* v_reuseFailAlloc_3285_; 
v_reuseFailAlloc_3285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3285_, 0, v_key_3254_);
lean_ctor_set(v_reuseFailAlloc_3285_, 1, v_idx_3274_);
v___x_3281_ = v_reuseFailAlloc_3285_;
goto v_reusejp_3280_;
}
v_reusejp_3280_:
{
lean_object* v___x_3282_; lean_object* v___x_3283_; 
v___x_3282_ = lean_array_push(v_snd_3257_, v___x_3281_);
v___x_3283_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3283_, 0, v_fst_3256_);
lean_ctor_set(v___x_3283_, 1, v___x_3282_);
v_a_3247_ = v_tail_3255_;
v_a_3248_ = v___x_3283_;
goto _start;
}
}
else
{
lean_del_object(v___x_3277_);
lean_dec(v_idx_3274_);
lean_dec(v_key_3254_);
goto v___jp_3268_;
}
}
}
v___jp_3268_:
{
lean_object* v___x_3270_; 
if (v_isShared_3260_ == 0)
{
v___x_3270_ = v___x_3259_;
goto v_reusejp_3269_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v_fst_3256_);
lean_ctor_set(v_reuseFailAlloc_3272_, 1, v_snd_3257_);
v___x_3270_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3269_;
}
v_reusejp_3269_:
{
v_a_3247_ = v_tail_3255_;
v_a_3248_ = v___x_3270_;
goto _start;
}
}
}
else
{
lean_object* v___x_3288_; lean_object* v_borrows_3294_; lean_object* v___x_3296_; uint8_t v_isShared_3297_; uint8_t v_isSharedCheck_3307_; 
v___x_3288_ = lean_st_ref_get(v___y_3250_);
v_borrows_3294_ = lean_ctor_get(v___x_3288_, 1);
v_isSharedCheck_3307_ = !lean_is_exclusive(v___x_3288_);
if (v_isSharedCheck_3307_ == 0)
{
lean_object* v_unused_3308_; 
v_unused_3308_ = lean_ctor_get(v___x_3288_, 0);
lean_dec(v_unused_3308_);
v___x_3296_ = v___x_3288_;
v_isShared_3297_ = v_isSharedCheck_3307_;
goto v_resetjp_3295_;
}
else
{
lean_inc(v_borrows_3294_);
lean_dec(v___x_3288_);
v___x_3296_ = lean_box(0);
v_isShared_3297_ = v_isSharedCheck_3307_;
goto v_resetjp_3295_;
}
v___jp_3289_:
{
lean_object* v___x_3291_; 
if (v_isShared_3260_ == 0)
{
v___x_3291_ = v___x_3259_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3293_; 
v_reuseFailAlloc_3293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3293_, 0, v_fst_3256_);
lean_ctor_set(v_reuseFailAlloc_3293_, 1, v_snd_3257_);
v___x_3291_ = v_reuseFailAlloc_3293_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
v_a_3247_ = v_tail_3255_;
v_a_3248_ = v___x_3291_;
goto _start;
}
}
v_resetjp_3295_:
{
uint8_t v___x_3298_; 
v___x_3298_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3294_, v_key_3254_);
lean_dec_ref(v_borrows_3294_);
if (v___x_3298_ == 0)
{
lean_del_object(v___x_3296_);
lean_dec(v___x_3265_);
lean_dec(v_key_3254_);
goto v___jp_3289_;
}
else
{
uint8_t v___x_3299_; 
v___x_3299_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3263_, v_key_3254_);
if (v___x_3299_ == 0)
{
if (v___x_3298_ == 0)
{
lean_del_object(v___x_3296_);
lean_dec(v___x_3265_);
lean_dec(v_key_3254_);
goto v___jp_3289_;
}
else
{
lean_object* v_idx_3300_; lean_object* v___x_3302_; 
lean_del_object(v___x_3259_);
v_idx_3300_ = lean_ctor_get(v___x_3265_, 0);
lean_inc(v_idx_3300_);
lean_dec(v___x_3265_);
if (v_isShared_3297_ == 0)
{
lean_ctor_set(v___x_3296_, 1, v_idx_3300_);
lean_ctor_set(v___x_3296_, 0, v_key_3254_);
v___x_3302_ = v___x_3296_;
goto v_reusejp_3301_;
}
else
{
lean_object* v_reuseFailAlloc_3306_; 
v_reuseFailAlloc_3306_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3306_, 0, v_key_3254_);
lean_ctor_set(v_reuseFailAlloc_3306_, 1, v_idx_3300_);
v___x_3302_ = v_reuseFailAlloc_3306_;
goto v_reusejp_3301_;
}
v_reusejp_3301_:
{
lean_object* v___x_3303_; lean_object* v___x_3304_; 
v___x_3303_ = lean_array_push(v_fst_3256_, v___x_3302_);
v___x_3304_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___x_3303_);
lean_ctor_set(v___x_3304_, 1, v_snd_3257_);
v_a_3247_ = v_tail_3255_;
v_a_3248_ = v___x_3304_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_3296_);
lean_dec(v___x_3265_);
lean_dec(v_key_3254_);
goto v___jp_3289_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg___boxed(lean_object* v_altLiveVars_3310_, lean_object* v_a_3311_, lean_object* v_a_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(v_altLiveVars_3310_, v_a_3311_, v_a_3312_, v___y_3313_, v___y_3314_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec_ref(v_altLiveVars_3310_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(lean_object* v_altLiveVars_3317_, lean_object* v_as_3318_, size_t v_sz_3319_, size_t v_i_3320_, lean_object* v_b_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_){
_start:
{
uint8_t v___x_3329_; 
v___x_3329_ = lean_usize_dec_lt(v_i_3320_, v_sz_3319_);
if (v___x_3329_ == 0)
{
lean_object* v___x_3330_; 
v___x_3330_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3330_, 0, v_b_3321_);
return v___x_3330_;
}
else
{
lean_object* v_a_3331_; lean_object* v___x_3332_; 
v_a_3331_ = lean_array_uget_borrowed(v_as_3318_, v_i_3320_);
lean_inc(v_a_3331_);
v___x_3332_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(v_altLiveVars_3317_, v_a_3331_, v_b_3321_, v___y_3322_, v___y_3323_);
if (lean_obj_tag(v___x_3332_) == 0)
{
lean_object* v_a_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3345_; 
v_a_3333_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3335_ = v___x_3332_;
v_isShared_3336_ = v_isSharedCheck_3345_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_a_3333_);
lean_dec(v___x_3332_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3345_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
if (lean_obj_tag(v_a_3333_) == 0)
{
lean_object* v_a_3337_; lean_object* v___x_3339_; 
v_a_3337_ = lean_ctor_get(v_a_3333_, 0);
lean_inc(v_a_3337_);
lean_dec_ref_known(v_a_3333_, 1);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 0, v_a_3337_);
v___x_3339_ = v___x_3335_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3340_; 
v_reuseFailAlloc_3340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3340_, 0, v_a_3337_);
v___x_3339_ = v_reuseFailAlloc_3340_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
return v___x_3339_;
}
}
else
{
lean_object* v_a_3341_; size_t v___x_3342_; size_t v___x_3343_; 
lean_del_object(v___x_3335_);
v_a_3341_ = lean_ctor_get(v_a_3333_, 0);
lean_inc(v_a_3341_);
lean_dec_ref_known(v_a_3333_, 1);
v___x_3342_ = ((size_t)1ULL);
v___x_3343_ = lean_usize_add(v_i_3320_, v___x_3342_);
v_i_3320_ = v___x_3343_;
v_b_3321_ = v_a_3341_;
goto _start;
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3353_; 
v_a_3346_ = lean_ctor_get(v___x_3332_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3332_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3348_ = v___x_3332_;
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3332_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3353_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
lean_object* v___x_3351_; 
if (v_isShared_3349_ == 0)
{
v___x_3351_ = v___x_3348_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_a_3346_);
v___x_3351_ = v_reuseFailAlloc_3352_;
goto v_reusejp_3350_;
}
v_reusejp_3350_:
{
return v___x_3351_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___boxed(lean_object* v_altLiveVars_3354_, lean_object* v_as_3355_, lean_object* v_sz_3356_, lean_object* v_i_3357_, lean_object* v_b_3358_, lean_object* v___y_3359_, lean_object* v___y_3360_, lean_object* v___y_3361_, lean_object* v___y_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
size_t v_sz_boxed_3366_; size_t v_i_boxed_3367_; lean_object* v_res_3368_; 
v_sz_boxed_3366_ = lean_unbox_usize(v_sz_3356_);
lean_dec(v_sz_3356_);
v_i_boxed_3367_ = lean_unbox_usize(v_i_3357_);
lean_dec(v_i_3357_);
v_res_3368_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(v_altLiveVars_3354_, v_as_3355_, v_sz_boxed_3366_, v_i_boxed_3367_, v_b_3358_, v___y_3359_, v___y_3360_, v___y_3361_, v___y_3362_, v___y_3363_, v___y_3364_);
lean_dec(v___y_3364_);
lean_dec_ref(v___y_3363_);
lean_dec(v___y_3362_);
lean_dec_ref(v___y_3361_);
lean_dec(v___y_3360_);
lean_dec_ref(v___y_3359_);
lean_dec_ref(v_as_3355_);
lean_dec_ref(v_altLiveVars_3354_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(lean_object* v_as_3369_, size_t v_i_3370_, size_t v_stop_3371_, lean_object* v_b_3372_, lean_object* v___y_3373_){
_start:
{
uint8_t v___x_3375_; 
v___x_3375_ = lean_usize_dec_eq(v_i_3370_, v_stop_3371_);
if (v___x_3375_ == 0)
{
lean_object* v___x_3376_; lean_object* v_fst_3377_; lean_object* v___x_3378_; 
v___x_3376_ = lean_array_uget_borrowed(v_as_3369_, v_i_3370_);
v_fst_3377_ = lean_ctor_get(v___x_3376_, 0);
lean_inc(v_fst_3377_);
v___x_3378_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fst_3377_, v_b_3372_, v___y_3373_);
if (lean_obj_tag(v___x_3378_) == 0)
{
lean_object* v_a_3379_; size_t v___x_3380_; size_t v___x_3381_; 
v_a_3379_ = lean_ctor_get(v___x_3378_, 0);
lean_inc(v_a_3379_);
lean_dec_ref_known(v___x_3378_, 1);
v___x_3380_ = ((size_t)1ULL);
v___x_3381_ = lean_usize_add(v_i_3370_, v___x_3380_);
v_i_3370_ = v___x_3381_;
v_b_3372_ = v_a_3379_;
goto _start;
}
else
{
return v___x_3378_;
}
}
else
{
lean_object* v___x_3383_; 
v___x_3383_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3383_, 0, v_b_3372_);
return v___x_3383_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___boxed(lean_object* v_as_3384_, lean_object* v_i_3385_, lean_object* v_stop_3386_, lean_object* v_b_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_){
_start:
{
size_t v_i_boxed_3390_; size_t v_stop_boxed_3391_; lean_object* v_res_3392_; 
v_i_boxed_3390_ = lean_unbox_usize(v_i_3385_);
lean_dec(v_i_3385_);
v_stop_boxed_3391_ = lean_unbox_usize(v_stop_3386_);
lean_dec(v_stop_3386_);
v_res_3392_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_as_3384_, v_i_boxed_3390_, v_stop_boxed_3391_, v_b_3387_, v___y_3388_);
lean_dec_ref(v___y_3388_);
lean_dec_ref(v_as_3384_);
return v_res_3392_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(lean_object* v_as_3393_, size_t v_i_3394_, size_t v_stop_3395_, lean_object* v_b_3396_, lean_object* v___y_3397_){
_start:
{
uint8_t v___x_3399_; 
v___x_3399_ = lean_usize_dec_eq(v_i_3394_, v_stop_3395_);
if (v___x_3399_ == 0)
{
lean_object* v___x_3400_; lean_object* v_fst_3401_; lean_object* v_varMap_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; uint8_t v_isDefiniteRef_3405_; lean_object* v___x_3406_; uint8_t v___y_3408_; 
v___x_3400_ = lean_array_uget_borrowed(v_as_3393_, v_i_3394_);
v_fst_3401_ = lean_ctor_get(v___x_3400_, 0);
v_varMap_3402_ = lean_ctor_get(v___y_3397_, 2);
v___x_3403_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fst_3401_);
lean_inc(v_varMap_3402_);
v___x_3404_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3403_, v_varMap_3402_, v_fst_3401_);
v_isDefiniteRef_3405_ = lean_ctor_get_uint8(v___x_3404_, sizeof(void*)*2 + 1);
v___x_3406_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3405_ == 0)
{
uint8_t v___x_3414_; 
v___x_3414_ = 1;
v___y_3408_ = v___x_3414_;
goto v___jp_3407_;
}
else
{
v___y_3408_ = v___x_3399_;
goto v___jp_3407_;
}
v___jp_3407_:
{
uint8_t v_persistent_3409_; lean_object* v___x_3410_; size_t v___x_3411_; size_t v___x_3412_; 
v_persistent_3409_ = lean_ctor_get_uint8(v___x_3404_, sizeof(void*)*2 + 2);
lean_dec(v___x_3404_);
lean_inc(v_fst_3401_);
v___x_3410_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3410_, 0, v_fst_3401_);
lean_ctor_set(v___x_3410_, 1, v___x_3406_);
lean_ctor_set(v___x_3410_, 2, v_b_3396_);
lean_ctor_set_uint8(v___x_3410_, sizeof(void*)*3, v___y_3408_);
lean_ctor_set_uint8(v___x_3410_, sizeof(void*)*3 + 1, v_persistent_3409_);
v___x_3411_ = ((size_t)1ULL);
v___x_3412_ = lean_usize_add(v_i_3394_, v___x_3411_);
v_i_3394_ = v___x_3412_;
v_b_3396_ = v___x_3410_;
goto _start;
}
}
else
{
lean_object* v___x_3415_; 
v___x_3415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3415_, 0, v_b_3396_);
return v___x_3415_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg___boxed(lean_object* v_as_3416_, lean_object* v_i_3417_, lean_object* v_stop_3418_, lean_object* v_b_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_){
_start:
{
size_t v_i_boxed_3422_; size_t v_stop_boxed_3423_; lean_object* v_res_3424_; 
v_i_boxed_3422_ = lean_unbox_usize(v_i_3417_);
lean_dec(v_i_3417_);
v_stop_boxed_3423_ = lean_unbox_usize(v_stop_3418_);
lean_dec(v_stop_3418_);
v_res_3424_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v_as_3416_, v_i_boxed_3422_, v_stop_boxed_3423_, v_b_3419_, v___y_3420_);
lean_dec_ref(v___y_3420_);
lean_dec_ref(v_as_3416_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(lean_object* v_altLiveVars_3429_, lean_object* v_k_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_, lean_object* v___y_3436_){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v_vars_3440_; lean_object* v___x_3441_; lean_object* v_buckets_3442_; size_t v_sz_3443_; size_t v___x_3444_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___x_3456_; 
v___x_3438_ = lean_unsigned_to_nat(0u);
v___x_3439_ = lean_st_ref_get(v___y_3432_);
v_vars_3440_ = lean_ctor_get(v___x_3439_, 0);
lean_inc_ref(v_vars_3440_);
lean_dec(v___x_3439_);
v___x_3441_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1));
v_buckets_3442_ = lean_ctor_get(v_vars_3440_, 1);
lean_inc_ref(v_buckets_3442_);
lean_dec_ref(v_vars_3440_);
v_sz_3443_ = lean_array_size(v_buckets_3442_);
v___x_3444_ = ((size_t)0ULL);
v___x_3456_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(v_altLiveVars_3429_, v_buckets_3442_, v_sz_3443_, v___x_3444_, v___x_3441_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, v___y_3435_, v___y_3436_);
lean_dec_ref(v_buckets_3442_);
if (lean_obj_tag(v___x_3456_) == 0)
{
lean_object* v_a_3457_; lean_object* v___x_3459_; uint8_t v_isShared_3460_; uint8_t v_isSharedCheck_3514_; 
v_a_3457_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3514_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3514_ == 0)
{
v___x_3459_ = v___x_3456_;
v_isShared_3460_ = v_isSharedCheck_3514_;
goto v_resetjp_3458_;
}
else
{
lean_inc(v_a_3457_);
lean_dec(v___x_3456_);
v___x_3459_ = lean_box(0);
v_isShared_3460_ = v_isSharedCheck_3514_;
goto v_resetjp_3458_;
}
v_resetjp_3458_:
{
lean_object* v_fst_3461_; lean_object* v_snd_3462_; lean_object* v___y_3464_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___y_3467_; lean_object* v___y_3468_; lean_object* v___y_3471_; lean_object* v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___x_3477_; lean_object* v___y_3479_; lean_object* v_a_3480_; lean_object* v___y_3486_; lean_object* v___y_3489_; lean_object* v___x_3503_; lean_object* v___y_3505_; lean_object* v___y_3506_; uint8_t v___x_3508_; 
v_fst_3461_ = lean_ctor_get(v_a_3457_, 0);
lean_inc(v_fst_3461_);
v_snd_3462_ = lean_ctor_get(v_a_3457_, 1);
lean_inc(v_snd_3462_);
lean_dec(v_a_3457_);
v___x_3477_ = lean_unsigned_to_nat(1u);
v___x_3503_ = lean_array_get_size(v_snd_3462_);
v___x_3508_ = lean_nat_dec_eq(v___x_3503_, v___x_3438_);
if (v___x_3508_ == 0)
{
lean_object* v___x_3509_; lean_object* v___y_3511_; uint8_t v___x_3513_; 
v___x_3509_ = lean_nat_sub(v___x_3503_, v___x_3477_);
v___x_3513_ = lean_nat_dec_le(v___x_3438_, v___x_3509_);
if (v___x_3513_ == 0)
{
lean_inc(v___x_3509_);
v___y_3511_ = v___x_3509_;
goto v___jp_3510_;
}
else
{
v___y_3511_ = v___x_3438_;
goto v___jp_3510_;
}
v___jp_3510_:
{
uint8_t v___x_3512_; 
v___x_3512_ = lean_nat_dec_le(v___y_3511_, v___x_3509_);
if (v___x_3512_ == 0)
{
lean_dec(v___x_3509_);
lean_inc(v___y_3511_);
v___y_3505_ = v___y_3511_;
v___y_3506_ = v___y_3511_;
goto v___jp_3504_;
}
else
{
v___y_3505_ = v___y_3511_;
v___y_3506_ = v___x_3509_;
goto v___jp_3504_;
}
}
}
else
{
v___y_3489_ = v_snd_3462_;
goto v___jp_3488_;
}
v___jp_3463_:
{
lean_object* v___x_3469_; 
v___x_3469_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v___y_3465_, v_fst_3461_, v___y_3466_, v___y_3468_);
lean_dec(v___y_3468_);
lean_dec(v___y_3465_);
v___y_3446_ = v___y_3464_;
v___y_3447_ = v___y_3467_;
v___y_3448_ = v___x_3469_;
goto v___jp_3445_;
}
v___jp_3470_:
{
uint8_t v___x_3476_; 
v___x_3476_ = lean_nat_dec_le(v___y_3475_, v___y_3474_);
if (v___x_3476_ == 0)
{
lean_dec(v___y_3474_);
lean_inc(v___y_3475_);
v___y_3464_ = v___y_3471_;
v___y_3465_ = v___y_3472_;
v___y_3466_ = v___y_3475_;
v___y_3467_ = v___y_3473_;
v___y_3468_ = v___y_3475_;
goto v___jp_3463_;
}
else
{
v___y_3464_ = v___y_3471_;
v___y_3465_ = v___y_3472_;
v___y_3466_ = v___y_3475_;
v___y_3467_ = v___y_3473_;
v___y_3468_ = v___y_3474_;
goto v___jp_3463_;
}
}
v___jp_3478_:
{
lean_object* v___x_3481_; uint8_t v___x_3482_; 
v___x_3481_ = lean_array_get_size(v_fst_3461_);
v___x_3482_ = lean_nat_dec_eq(v___x_3481_, v___x_3438_);
if (v___x_3482_ == 0)
{
lean_object* v___x_3483_; uint8_t v___x_3484_; 
v___x_3483_ = lean_nat_sub(v___x_3481_, v___x_3477_);
v___x_3484_ = lean_nat_dec_le(v___x_3438_, v___x_3483_);
if (v___x_3484_ == 0)
{
lean_inc(v___x_3483_);
v___y_3471_ = v_a_3480_;
v___y_3472_ = v___x_3481_;
v___y_3473_ = v___y_3479_;
v___y_3474_ = v___x_3483_;
v___y_3475_ = v___x_3483_;
goto v___jp_3470_;
}
else
{
v___y_3471_ = v_a_3480_;
v___y_3472_ = v___x_3481_;
v___y_3473_ = v___y_3479_;
v___y_3474_ = v___x_3483_;
v___y_3475_ = v___x_3438_;
goto v___jp_3470_;
}
}
else
{
v___y_3446_ = v_a_3480_;
v___y_3447_ = v___y_3479_;
v___y_3448_ = v_fst_3461_;
goto v___jp_3445_;
}
}
v___jp_3485_:
{
if (lean_obj_tag(v___y_3486_) == 0)
{
lean_object* v_a_3487_; 
v_a_3487_ = lean_ctor_get(v___y_3486_, 0);
lean_inc(v_a_3487_);
v___y_3479_ = v___y_3486_;
v_a_3480_ = v_a_3487_;
goto v___jp_3478_;
}
else
{
lean_dec(v_fst_3461_);
return v___y_3486_;
}
}
v___jp_3488_:
{
lean_object* v___x_3490_; uint8_t v___x_3491_; 
v___x_3490_ = lean_array_get_size(v___y_3489_);
v___x_3491_ = lean_nat_dec_lt(v___x_3438_, v___x_3490_);
if (v___x_3491_ == 0)
{
lean_object* v___x_3493_; 
lean_dec_ref(v___y_3489_);
lean_inc_ref(v_k_3430_);
if (v_isShared_3460_ == 0)
{
lean_ctor_set(v___x_3459_, 0, v_k_3430_);
v___x_3493_ = v___x_3459_;
goto v_reusejp_3492_;
}
else
{
lean_object* v_reuseFailAlloc_3494_; 
v_reuseFailAlloc_3494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3494_, 0, v_k_3430_);
v___x_3493_ = v_reuseFailAlloc_3494_;
goto v_reusejp_3492_;
}
v_reusejp_3492_:
{
v___y_3479_ = v___x_3493_;
v_a_3480_ = v_k_3430_;
goto v___jp_3478_;
}
}
else
{
uint8_t v___x_3495_; 
v___x_3495_ = lean_nat_dec_le(v___x_3490_, v___x_3490_);
if (v___x_3495_ == 0)
{
if (v___x_3491_ == 0)
{
lean_object* v___x_3497_; 
lean_dec_ref(v___y_3489_);
lean_inc_ref(v_k_3430_);
if (v_isShared_3460_ == 0)
{
lean_ctor_set(v___x_3459_, 0, v_k_3430_);
v___x_3497_ = v___x_3459_;
goto v_reusejp_3496_;
}
else
{
lean_object* v_reuseFailAlloc_3498_; 
v_reuseFailAlloc_3498_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3498_, 0, v_k_3430_);
v___x_3497_ = v_reuseFailAlloc_3498_;
goto v_reusejp_3496_;
}
v_reusejp_3496_:
{
v___y_3479_ = v___x_3497_;
v_a_3480_ = v_k_3430_;
goto v___jp_3478_;
}
}
else
{
size_t v___x_3499_; lean_object* v___x_3500_; 
lean_del_object(v___x_3459_);
v___x_3499_ = lean_usize_of_nat(v___x_3490_);
v___x_3500_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v___y_3489_, v___x_3444_, v___x_3499_, v_k_3430_, v___y_3431_);
lean_dec_ref(v___y_3489_);
v___y_3486_ = v___x_3500_;
goto v___jp_3485_;
}
}
else
{
size_t v___x_3501_; lean_object* v___x_3502_; 
lean_del_object(v___x_3459_);
v___x_3501_ = lean_usize_of_nat(v___x_3490_);
v___x_3502_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v___y_3489_, v___x_3444_, v___x_3501_, v_k_3430_, v___y_3431_);
lean_dec_ref(v___y_3489_);
v___y_3486_ = v___x_3502_;
goto v___jp_3485_;
}
}
}
v___jp_3504_:
{
lean_object* v___x_3507_; 
v___x_3507_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v___x_3503_, v_snd_3462_, v___y_3505_, v___y_3506_);
lean_dec(v___y_3506_);
v___y_3489_ = v___x_3507_;
goto v___jp_3488_;
}
}
}
else
{
lean_object* v_a_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3522_; 
lean_dec_ref(v_k_3430_);
v_a_3515_ = lean_ctor_get(v___x_3456_, 0);
v_isSharedCheck_3522_ = !lean_is_exclusive(v___x_3456_);
if (v_isSharedCheck_3522_ == 0)
{
v___x_3517_ = v___x_3456_;
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_a_3515_);
lean_dec(v___x_3456_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3522_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3520_; 
if (v_isShared_3518_ == 0)
{
v___x_3520_ = v___x_3517_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3521_; 
v_reuseFailAlloc_3521_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3521_, 0, v_a_3515_);
v___x_3520_ = v_reuseFailAlloc_3521_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
return v___x_3520_;
}
}
}
v___jp_3445_:
{
lean_object* v___x_3449_; uint8_t v___x_3450_; 
v___x_3449_ = lean_array_get_size(v___y_3448_);
v___x_3450_ = lean_nat_dec_lt(v___x_3438_, v___x_3449_);
if (v___x_3450_ == 0)
{
lean_dec_ref(v___y_3448_);
lean_dec_ref(v___y_3446_);
return v___y_3447_;
}
else
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_nat_dec_le(v___x_3449_, v___x_3449_);
if (v___x_3451_ == 0)
{
if (v___x_3450_ == 0)
{
lean_dec_ref(v___y_3448_);
lean_dec_ref(v___y_3446_);
return v___y_3447_;
}
else
{
size_t v___x_3452_; lean_object* v___x_3453_; 
lean_dec_ref(v___y_3447_);
v___x_3452_ = lean_usize_of_nat(v___x_3449_);
v___x_3453_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v___y_3448_, v___x_3444_, v___x_3452_, v___y_3446_, v___y_3431_);
lean_dec_ref(v___y_3448_);
return v___x_3453_;
}
}
else
{
size_t v___x_3454_; lean_object* v___x_3455_; 
lean_dec_ref(v___y_3447_);
v___x_3454_ = lean_usize_of_nat(v___x_3449_);
v___x_3455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v___y_3448_, v___x_3444_, v___x_3454_, v___y_3446_, v___y_3431_);
lean_dec_ref(v___y_3448_);
return v___x_3455_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___boxed(lean_object* v_altLiveVars_3523_, lean_object* v_k_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_){
_start:
{
lean_object* v_res_3532_; 
v_res_3532_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_altLiveVars_3523_, v_k_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_);
lean_dec(v___y_3530_);
lean_dec_ref(v___y_3529_);
lean_dec(v___y_3528_);
lean_dec_ref(v___y_3527_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
lean_dec_ref(v_altLiveVars_3523_);
return v_res_3532_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(lean_object* v_altLiveVars_3533_, lean_object* v_a_3534_, lean_object* v_a_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_, lean_object* v___y_3540_, lean_object* v___y_3541_){
_start:
{
lean_object* v___x_3543_; 
v___x_3543_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(v_altLiveVars_3533_, v_a_3534_, v_a_3535_, v___y_3536_, v___y_3537_);
return v___x_3543_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___boxed(lean_object* v_altLiveVars_3544_, lean_object* v_a_3545_, lean_object* v_a_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_){
_start:
{
lean_object* v_res_3554_; 
v_res_3554_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_altLiveVars_3544_, v_a_3545_, v_a_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_, v___y_3552_);
lean_dec(v___y_3552_);
lean_dec_ref(v___y_3551_);
lean_dec(v___y_3550_);
lean_dec_ref(v___y_3549_);
lean_dec(v___y_3548_);
lean_dec_ref(v___y_3547_);
lean_dec_ref(v_altLiveVars_3544_);
return v_res_3554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(lean_object* v_as_3555_, size_t v_i_3556_, size_t v_stop_3557_, lean_object* v_b_3558_, lean_object* v___y_3559_, lean_object* v___y_3560_, lean_object* v___y_3561_, lean_object* v___y_3562_, lean_object* v___y_3563_, lean_object* v___y_3564_){
_start:
{
lean_object* v___x_3566_; 
v___x_3566_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v_as_3555_, v_i_3556_, v_stop_3557_, v_b_3558_, v___y_3559_);
return v___x_3566_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___boxed(lean_object* v_as_3567_, lean_object* v_i_3568_, lean_object* v_stop_3569_, lean_object* v_b_3570_, lean_object* v___y_3571_, lean_object* v___y_3572_, lean_object* v___y_3573_, lean_object* v___y_3574_, lean_object* v___y_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_){
_start:
{
size_t v_i_boxed_3578_; size_t v_stop_boxed_3579_; lean_object* v_res_3580_; 
v_i_boxed_3578_ = lean_unbox_usize(v_i_3568_);
lean_dec(v_i_3568_);
v_stop_boxed_3579_ = lean_unbox_usize(v_stop_3569_);
lean_dec(v_stop_3569_);
v_res_3580_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(v_as_3567_, v_i_boxed_3578_, v_stop_boxed_3579_, v_b_3570_, v___y_3571_, v___y_3572_, v___y_3573_, v___y_3574_, v___y_3575_, v___y_3576_);
lean_dec(v___y_3576_);
lean_dec_ref(v___y_3575_);
lean_dec(v___y_3574_);
lean_dec_ref(v___y_3573_);
lean_dec(v___y_3572_);
lean_dec_ref(v___y_3571_);
lean_dec_ref(v_as_3567_);
return v_res_3580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(lean_object* v_n_3581_, lean_object* v_as_3582_, lean_object* v_lo_3583_, lean_object* v_hi_3584_, lean_object* v_w_3585_, lean_object* v_hlo_3586_, lean_object* v_hhi_3587_){
_start:
{
lean_object* v___x_3588_; 
v___x_3588_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_n_3581_, v_as_3582_, v_lo_3583_, v_hi_3584_);
return v___x_3588_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___boxed(lean_object* v_n_3589_, lean_object* v_as_3590_, lean_object* v_lo_3591_, lean_object* v_hi_3592_, lean_object* v_w_3593_, lean_object* v_hlo_3594_, lean_object* v_hhi_3595_){
_start:
{
lean_object* v_res_3596_; 
v_res_3596_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(v_n_3589_, v_as_3590_, v_lo_3591_, v_hi_3592_, v_w_3593_, v_hlo_3594_, v_hhi_3595_);
lean_dec(v_hi_3592_);
lean_dec(v_n_3589_);
return v_res_3596_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(lean_object* v_as_3597_, size_t v_i_3598_, size_t v_stop_3599_, lean_object* v_b_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_){
_start:
{
lean_object* v___x_3608_; 
v___x_3608_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_as_3597_, v_i_3598_, v_stop_3599_, v_b_3600_, v___y_3601_);
return v___x_3608_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___boxed(lean_object* v_as_3609_, lean_object* v_i_3610_, lean_object* v_stop_3611_, lean_object* v_b_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_){
_start:
{
size_t v_i_boxed_3620_; size_t v_stop_boxed_3621_; lean_object* v_res_3622_; 
v_i_boxed_3620_ = lean_unbox_usize(v_i_3610_);
lean_dec(v_i_3610_);
v_stop_boxed_3621_ = lean_unbox_usize(v_stop_3611_);
lean_dec(v_stop_3611_);
v_res_3622_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(v_as_3609_, v_i_boxed_3620_, v_stop_boxed_3621_, v_b_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
lean_dec(v___y_3614_);
lean_dec_ref(v___y_3613_);
lean_dec_ref(v_as_3609_);
return v_res_3622_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3(lean_object* v_n_3623_, lean_object* v_lo_3624_, lean_object* v_hi_3625_, lean_object* v_hhi_3626_, lean_object* v_pivot_3627_, lean_object* v_as_3628_, lean_object* v_i_3629_, lean_object* v_k_3630_, lean_object* v_ilo_3631_, lean_object* v_ik_3632_, lean_object* v_w_3633_){
_start:
{
lean_object* v___x_3634_; 
v___x_3634_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(v_hi_3625_, v_pivot_3627_, v_as_3628_, v_i_3629_, v_k_3630_);
return v___x_3634_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___boxed(lean_object* v_n_3635_, lean_object* v_lo_3636_, lean_object* v_hi_3637_, lean_object* v_hhi_3638_, lean_object* v_pivot_3639_, lean_object* v_as_3640_, lean_object* v_i_3641_, lean_object* v_k_3642_, lean_object* v_ilo_3643_, lean_object* v_ik_3644_, lean_object* v_w_3645_){
_start:
{
lean_object* v_res_3646_; 
v_res_3646_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3(v_n_3635_, v_lo_3636_, v_hi_3637_, v_hhi_3638_, v_pivot_3639_, v_as_3640_, v_i_3641_, v_k_3642_, v_ilo_3643_, v_ik_3644_, v_w_3645_);
lean_dec_ref(v_pivot_3639_);
lean_dec(v_hi_3637_);
lean_dec(v_lo_3636_);
lean_dec(v_n_3635_);
return v_res_3646_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(lean_object* v_args_3647_, lean_object* v_x_3648_, lean_object* v_n_3649_, lean_object* v_i_3650_){
_start:
{
lean_object* v_zero_3651_; uint8_t v_isZero_3652_; 
v_zero_3651_ = lean_unsigned_to_nat(0u);
v_isZero_3652_ = lean_nat_dec_eq(v_i_3650_, v_zero_3651_);
if (v_isZero_3652_ == 1)
{
lean_dec(v_i_3650_);
return v_isZero_3652_;
}
else
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; uint8_t v___x_3656_; 
v___x_3653_ = lean_box(0);
v___x_3654_ = lean_nat_sub(v_n_3649_, v_i_3650_);
v___x_3655_ = lean_array_get_borrowed(v___x_3653_, v_args_3647_, v___x_3654_);
lean_dec(v___x_3654_);
v___x_3656_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_3655_, v_x_3648_);
if (v___x_3656_ == 0)
{
lean_object* v_one_3657_; lean_object* v_n_3658_; 
v_one_3657_ = lean_unsigned_to_nat(1u);
v_n_3658_ = lean_nat_sub(v_i_3650_, v_one_3657_);
lean_dec(v_i_3650_);
v_i_3650_ = v_n_3658_;
goto _start;
}
else
{
lean_dec(v_i_3650_);
return v_isZero_3652_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg___boxed(lean_object* v_args_3660_, lean_object* v_x_3661_, lean_object* v_n_3662_, lean_object* v_i_3663_){
_start:
{
uint8_t v_res_3664_; lean_object* v_r_3665_; 
v_res_3664_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3660_, v_x_3661_, v_n_3662_, v_i_3663_);
lean_dec(v_n_3662_);
lean_dec(v_x_3661_);
lean_dec_ref(v_args_3660_);
v_r_3665_ = lean_box(v_res_3664_);
return v_r_3665_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(lean_object* v_args_3666_, lean_object* v_i_3667_){
_start:
{
lean_object* v___x_3668_; lean_object* v_x_3669_; uint8_t v___x_3670_; 
v___x_3668_ = lean_box(0);
v_x_3669_ = lean_array_get_borrowed(v___x_3668_, v_args_3666_, v_i_3667_);
lean_inc(v_i_3667_);
v___x_3670_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3666_, v_x_3669_, v_i_3667_, v_i_3667_);
lean_dec(v_i_3667_);
return v___x_3670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc___boxed(lean_object* v_args_3671_, lean_object* v_i_3672_){
_start:
{
uint8_t v_res_3673_; lean_object* v_r_3674_; 
v_res_3673_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_3671_, v_i_3672_);
lean_dec_ref(v_args_3671_);
v_r_3674_ = lean_box(v_res_3673_);
return v_r_3674_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(lean_object* v_args_3675_, lean_object* v_x_3676_, lean_object* v_n_3677_, lean_object* v_i_3678_, lean_object* v_a_3679_){
_start:
{
uint8_t v___x_3680_; 
v___x_3680_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3675_, v_x_3676_, v_n_3677_, v_i_3678_);
return v___x_3680_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___boxed(lean_object* v_args_3681_, lean_object* v_x_3682_, lean_object* v_n_3683_, lean_object* v_i_3684_, lean_object* v_a_3685_){
_start:
{
uint8_t v_res_3686_; lean_object* v_r_3687_; 
v_res_3686_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(v_args_3681_, v_x_3682_, v_n_3683_, v_i_3684_, v_a_3685_);
lean_dec(v_n_3683_);
lean_dec(v_x_3682_);
lean_dec_ref(v_args_3681_);
v_r_3687_ = lean_box(v_res_3686_);
return v_r_3687_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(lean_object* v_args_3688_, lean_object* v_arg_3689_, lean_object* v_consumeParamPred_3690_, lean_object* v_n_3691_, lean_object* v_i_3692_){
_start:
{
lean_object* v_zero_3693_; uint8_t v_isZero_3694_; 
v_zero_3693_ = lean_unsigned_to_nat(0u);
v_isZero_3694_ = lean_nat_dec_eq(v_i_3692_, v_zero_3693_);
if (v_isZero_3694_ == 1)
{
uint8_t v___x_3695_; 
lean_dec(v_i_3692_);
lean_dec_ref(v_consumeParamPred_3690_);
v___x_3695_ = 0;
return v___x_3695_;
}
else
{
lean_object* v_one_3696_; lean_object* v_n_3697_; uint8_t v___y_3699_; lean_object* v___x_3701_; lean_object* v_arg_x27_3702_; 
v_one_3696_ = lean_unsigned_to_nat(1u);
v_n_3697_ = lean_nat_sub(v_i_3692_, v_one_3696_);
v___x_3701_ = lean_nat_sub(v_n_3691_, v_i_3692_);
lean_dec(v_i_3692_);
v_arg_x27_3702_ = lean_array_fget_borrowed(v_args_3688_, v___x_3701_);
if (lean_obj_tag(v_arg_x27_3702_) == 0)
{
lean_dec(v___x_3701_);
v_i_3692_ = v_n_3697_;
goto _start;
}
else
{
lean_object* v_fvarId_3704_; uint8_t v___x_3705_; 
v_fvarId_3704_ = lean_ctor_get(v_arg_x27_3702_, 0);
v___x_3705_ = l_Lean_instBEqFVarId_beq(v_arg_3689_, v_fvarId_3704_);
if (v___x_3705_ == 0)
{
lean_dec(v___x_3701_);
v___y_3699_ = v___x_3705_;
goto v___jp_3698_;
}
else
{
lean_object* v___x_3706_; uint8_t v___x_3707_; 
lean_inc_ref(v_consumeParamPred_3690_);
v___x_3706_ = lean_apply_1(v_consumeParamPred_3690_, v___x_3701_);
v___x_3707_ = lean_unbox(v___x_3706_);
if (v___x_3707_ == 0)
{
v___y_3699_ = v___x_3705_;
goto v___jp_3698_;
}
else
{
v_i_3692_ = v_n_3697_;
goto _start;
}
}
}
v___jp_3698_:
{
if (v___y_3699_ == 0)
{
v_i_3692_ = v_n_3697_;
goto _start;
}
else
{
lean_dec(v_n_3697_);
lean_dec_ref(v_consumeParamPred_3690_);
return v___y_3699_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg___boxed(lean_object* v_args_3709_, lean_object* v_arg_3710_, lean_object* v_consumeParamPred_3711_, lean_object* v_n_3712_, lean_object* v_i_3713_){
_start:
{
uint8_t v_res_3714_; lean_object* v_r_3715_; 
v_res_3714_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3709_, v_arg_3710_, v_consumeParamPred_3711_, v_n_3712_, v_i_3713_);
lean_dec(v_n_3712_);
lean_dec(v_arg_3710_);
lean_dec_ref(v_args_3709_);
v_r_3715_ = lean_box(v_res_3714_);
return v_r_3715_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(lean_object* v_arg_3716_, lean_object* v_args_3717_, lean_object* v_consumeParamPred_3718_){
_start:
{
lean_object* v___x_3719_; uint8_t v___x_3720_; 
v___x_3719_ = lean_array_get_size(v_args_3717_);
v___x_3720_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3717_, v_arg_3716_, v_consumeParamPred_3718_, v___x_3719_, v___x_3719_);
return v___x_3720_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux___boxed(lean_object* v_arg_3721_, lean_object* v_args_3722_, lean_object* v_consumeParamPred_3723_){
_start:
{
uint8_t v_res_3724_; lean_object* v_r_3725_; 
v_res_3724_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_arg_3721_, v_args_3722_, v_consumeParamPred_3723_);
lean_dec_ref(v_args_3722_);
lean_dec(v_arg_3721_);
v_r_3725_ = lean_box(v_res_3724_);
return v_r_3725_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(lean_object* v_args_3726_, lean_object* v_arg_3727_, lean_object* v_consumeParamPred_3728_, lean_object* v_n_3729_, lean_object* v_i_3730_, lean_object* v_a_3731_){
_start:
{
uint8_t v___x_3732_; 
v___x_3732_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3726_, v_arg_3727_, v_consumeParamPred_3728_, v_n_3729_, v_i_3730_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___boxed(lean_object* v_args_3733_, lean_object* v_arg_3734_, lean_object* v_consumeParamPred_3735_, lean_object* v_n_3736_, lean_object* v_i_3737_, lean_object* v_a_3738_){
_start:
{
uint8_t v_res_3739_; lean_object* v_r_3740_; 
v_res_3739_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(v_args_3733_, v_arg_3734_, v_consumeParamPred_3735_, v_n_3736_, v_i_3737_, v_a_3738_);
lean_dec(v_n_3736_);
lean_dec(v_arg_3734_);
lean_dec_ref(v_args_3733_);
v_r_3740_ = lean_box(v_res_3739_);
return v_r_3740_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3741_; 
v___x_3741_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_3741_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(lean_object* v_ps_3742_, lean_object* v_i_3743_){
_start:
{
lean_object* v___x_3744_; lean_object* v___x_3745_; uint8_t v_borrow_3746_; 
v___x_3744_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0);
v___x_3745_ = lean_array_get_borrowed(v___x_3744_, v_ps_3742_, v_i_3743_);
v_borrow_3746_ = lean_ctor_get_uint8(v___x_3745_, sizeof(void*)*3);
if (v_borrow_3746_ == 0)
{
uint8_t v___x_3747_; 
v___x_3747_ = 1;
return v___x_3747_;
}
else
{
uint8_t v___x_3748_; 
v___x_3748_ = 0;
return v___x_3748_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed(lean_object* v_ps_3749_, lean_object* v_i_3750_){
_start:
{
uint8_t v_res_3751_; lean_object* v_r_3752_; 
v_res_3751_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(v_ps_3749_, v_i_3750_);
lean_dec(v_i_3750_);
lean_dec_ref(v_ps_3749_);
v_r_3752_ = lean_box(v_res_3751_);
return v_r_3752_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(lean_object* v_arg_3753_, lean_object* v_args_3754_, lean_object* v_ps_3755_){
_start:
{
lean_object* v___f_3756_; uint8_t v___x_3757_; 
v___f_3756_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3756_, 0, v_ps_3755_);
v___x_3757_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_arg_3753_, v_args_3754_, v___f_3756_);
return v___x_3757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___boxed(lean_object* v_arg_3758_, lean_object* v_args_3759_, lean_object* v_ps_3760_){
_start:
{
uint8_t v_res_3761_; lean_object* v_r_3762_; 
v_res_3761_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(v_arg_3758_, v_args_3759_, v_ps_3760_);
lean_dec_ref(v_args_3759_);
lean_dec(v_arg_3758_);
v_r_3762_ = lean_box(v_res_3761_);
return v_r_3762_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(lean_object* v_upperBound_3763_, lean_object* v_args_3764_, lean_object* v_arg_3765_, lean_object* v_consumeParamPred_3766_, lean_object* v_a_3767_, lean_object* v_b_3768_){
_start:
{
lean_object* v_a_3770_; uint8_t v___y_3775_; uint8_t v___x_3778_; 
v___x_3778_ = lean_nat_dec_lt(v_a_3767_, v_upperBound_3763_);
if (v___x_3778_ == 0)
{
lean_dec(v_a_3767_);
lean_dec_ref(v_consumeParamPred_3766_);
return v_b_3768_;
}
else
{
lean_object* v___x_3779_; 
v___x_3779_ = lean_array_fget_borrowed(v_args_3764_, v_a_3767_);
if (lean_obj_tag(v___x_3779_) == 1)
{
lean_object* v_fvarId_3780_; uint8_t v___x_3781_; 
v_fvarId_3780_ = lean_ctor_get(v___x_3779_, 0);
v___x_3781_ = l_Lean_instBEqFVarId_beq(v_arg_3765_, v_fvarId_3780_);
if (v___x_3781_ == 0)
{
v___y_3775_ = v___x_3781_;
goto v___jp_3774_;
}
else
{
lean_object* v___x_3782_; uint8_t v___x_3783_; 
lean_inc_ref(v_consumeParamPred_3766_);
lean_inc(v_a_3767_);
v___x_3782_ = lean_apply_1(v_consumeParamPred_3766_, v_a_3767_);
v___x_3783_ = lean_unbox(v___x_3782_);
v___y_3775_ = v___x_3783_;
goto v___jp_3774_;
}
}
else
{
v_a_3770_ = v_b_3768_;
goto v___jp_3769_;
}
}
v___jp_3769_:
{
lean_object* v___x_3771_; lean_object* v___x_3772_; 
v___x_3771_ = lean_unsigned_to_nat(1u);
v___x_3772_ = lean_nat_add(v_a_3767_, v___x_3771_);
lean_dec(v_a_3767_);
v_a_3767_ = v___x_3772_;
v_b_3768_ = v_a_3770_;
goto _start;
}
v___jp_3774_:
{
if (v___y_3775_ == 0)
{
v_a_3770_ = v_b_3768_;
goto v___jp_3769_;
}
else
{
lean_object* v___x_3776_; lean_object* v___x_3777_; 
v___x_3776_ = lean_unsigned_to_nat(1u);
v___x_3777_ = lean_nat_add(v_b_3768_, v___x_3776_);
lean_dec(v_b_3768_);
v_a_3770_ = v___x_3777_;
goto v___jp_3769_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg___boxed(lean_object* v_upperBound_3784_, lean_object* v_args_3785_, lean_object* v_arg_3786_, lean_object* v_consumeParamPred_3787_, lean_object* v_a_3788_, lean_object* v_b_3789_){
_start:
{
lean_object* v_res_3790_; 
v_res_3790_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v_upperBound_3784_, v_args_3785_, v_arg_3786_, v_consumeParamPred_3787_, v_a_3788_, v_b_3789_);
lean_dec(v_arg_3786_);
lean_dec_ref(v_args_3785_);
lean_dec(v_upperBound_3784_);
return v_res_3790_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(lean_object* v_arg_3791_, lean_object* v_args_3792_, lean_object* v_consumeParamPred_3793_){
_start:
{
lean_object* v_num_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; 
v_num_3794_ = lean_unsigned_to_nat(0u);
v___x_3795_ = lean_array_get_size(v_args_3792_);
v___x_3796_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v___x_3795_, v_args_3792_, v_arg_3791_, v_consumeParamPred_3793_, v_num_3794_, v_num_3794_);
return v___x_3796_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions___boxed(lean_object* v_arg_3797_, lean_object* v_args_3798_, lean_object* v_consumeParamPred_3799_){
_start:
{
lean_object* v_res_3800_; 
v_res_3800_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(v_arg_3797_, v_args_3798_, v_consumeParamPred_3799_);
lean_dec_ref(v_args_3798_);
lean_dec(v_arg_3797_);
return v_res_3800_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(lean_object* v_upperBound_3801_, lean_object* v_args_3802_, lean_object* v_arg_3803_, lean_object* v_consumeParamPred_3804_, lean_object* v_inst_3805_, lean_object* v_R_3806_, lean_object* v_a_3807_, lean_object* v_b_3808_, lean_object* v_c_3809_){
_start:
{
lean_object* v___x_3810_; 
v___x_3810_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v_upperBound_3801_, v_args_3802_, v_arg_3803_, v_consumeParamPred_3804_, v_a_3807_, v_b_3808_);
return v___x_3810_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___boxed(lean_object* v_upperBound_3811_, lean_object* v_args_3812_, lean_object* v_arg_3813_, lean_object* v_consumeParamPred_3814_, lean_object* v_inst_3815_, lean_object* v_R_3816_, lean_object* v_a_3817_, lean_object* v_b_3818_, lean_object* v_c_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(v_upperBound_3811_, v_args_3812_, v_arg_3813_, v_consumeParamPred_3814_, v_inst_3815_, v_R_3816_, v_a_3817_, v_b_3818_, v_c_3819_);
lean_dec(v_arg_3813_);
lean_dec_ref(v_args_3812_);
lean_dec(v_upperBound_3811_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(lean_object* v_fvarId_3821_, lean_object* v_b_3822_, uint8_t v___x_3823_, lean_object* v_numIncs_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_){
_start:
{
lean_object* v_a_3833_; lean_object* v___x_3836_; uint8_t v___x_3837_; 
v___x_3836_ = lean_unsigned_to_nat(0u);
v___x_3837_ = lean_nat_dec_eq(v_numIncs_3824_, v___x_3836_);
if (v___x_3837_ == 0)
{
lean_object* v_varMap_3838_; lean_object* v___x_3839_; lean_object* v___x_3840_; uint8_t v___y_3842_; uint8_t v_isDefiniteRef_3845_; 
v_varMap_3838_ = lean_ctor_get(v___y_3825_, 2);
v___x_3839_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3821_);
lean_inc(v_varMap_3838_);
v___x_3840_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3839_, v_varMap_3838_, v_fvarId_3821_);
v_isDefiniteRef_3845_ = lean_ctor_get_uint8(v___x_3840_, sizeof(void*)*2 + 1);
if (v_isDefiniteRef_3845_ == 0)
{
v___y_3842_ = v___x_3823_;
goto v___jp_3841_;
}
else
{
v___y_3842_ = v___x_3837_;
goto v___jp_3841_;
}
v___jp_3841_:
{
uint8_t v_persistent_3843_; lean_object* v___x_3844_; 
v_persistent_3843_ = lean_ctor_get_uint8(v___x_3840_, sizeof(void*)*2 + 2);
lean_dec(v___x_3840_);
v___x_3844_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3844_, 0, v_fvarId_3821_);
lean_ctor_set(v___x_3844_, 1, v_numIncs_3824_);
lean_ctor_set(v___x_3844_, 2, v_b_3822_);
lean_ctor_set_uint8(v___x_3844_, sizeof(void*)*3, v___y_3842_);
lean_ctor_set_uint8(v___x_3844_, sizeof(void*)*3 + 1, v_persistent_3843_);
v_a_3833_ = v___x_3844_;
goto v___jp_3832_;
}
}
else
{
lean_dec(v_numIncs_3824_);
lean_dec(v_fvarId_3821_);
v_a_3833_ = v_b_3822_;
goto v___jp_3832_;
}
v___jp_3832_:
{
lean_object* v___x_3834_; lean_object* v___x_3835_; 
v___x_3834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3834_, 0, v_a_3833_);
v___x_3835_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3835_, 0, v___x_3834_);
return v___x_3835_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0___boxed(lean_object* v_fvarId_3846_, lean_object* v_b_3847_, lean_object* v___x_3848_, lean_object* v_numIncs_3849_, lean_object* v___y_3850_, lean_object* v___y_3851_, lean_object* v___y_3852_, lean_object* v___y_3853_, lean_object* v___y_3854_, lean_object* v___y_3855_, lean_object* v___y_3856_){
_start:
{
uint8_t v___x_7537__boxed_3857_; lean_object* v_res_3858_; 
v___x_7537__boxed_3857_ = lean_unbox(v___x_3848_);
v_res_3858_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_3846_, v_b_3847_, v___x_7537__boxed_3857_, v_numIncs_3849_, v___y_3850_, v___y_3851_, v___y_3852_, v___y_3853_, v___y_3854_, v___y_3855_);
lean_dec(v___y_3855_);
lean_dec_ref(v___y_3854_);
lean_dec(v___y_3853_);
lean_dec_ref(v___y_3852_);
lean_dec(v___y_3851_);
lean_dec_ref(v___y_3850_);
return v_res_3858_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(lean_object* v_upperBound_3859_, lean_object* v_args_3860_, lean_object* v_consumeParamPred_3861_, lean_object* v_a_3862_, lean_object* v_b_3863_, lean_object* v___y_3864_, lean_object* v___y_3865_, lean_object* v___y_3866_, lean_object* v___y_3867_, lean_object* v___y_3868_, lean_object* v___y_3869_){
_start:
{
lean_object* v_a_3872_; lean_object* v___y_3877_; uint8_t v___x_3896_; 
v___x_3896_ = lean_nat_dec_lt(v_a_3862_, v_upperBound_3859_);
if (v___x_3896_ == 0)
{
lean_object* v___x_3897_; 
lean_dec(v_a_3862_);
lean_dec_ref(v_consumeParamPred_3861_);
v___x_3897_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3897_, 0, v_b_3863_);
return v___x_3897_;
}
else
{
lean_object* v___x_3898_; 
v___x_3898_ = lean_array_fget_borrowed(v_args_3860_, v_a_3862_);
if (lean_obj_tag(v___x_3898_) == 1)
{
lean_object* v_fvarId_3899_; lean_object* v_varMap_3900_; lean_object* v___x_3901_; lean_object* v___x_3902_; uint8_t v_isPossibleRef_3903_; 
v_fvarId_3899_ = lean_ctor_get(v___x_3898_, 0);
v_varMap_3900_ = lean_ctor_get(v___y_3864_, 2);
v___x_3901_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3899_);
lean_inc(v_varMap_3900_);
v___x_3902_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3901_, v_varMap_3900_, v_fvarId_3899_);
v_isPossibleRef_3903_ = lean_ctor_get_uint8(v___x_3902_, sizeof(void*)*2);
lean_dec(v___x_3902_);
if (v_isPossibleRef_3903_ == 0)
{
v_a_3872_ = v_b_3863_;
goto v___jp_3871_;
}
else
{
uint8_t v___x_3904_; 
lean_inc(v_a_3862_);
v___x_3904_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_3860_, v_a_3862_);
if (v___x_3904_ == 0)
{
v_a_3872_ = v_b_3863_;
goto v___jp_3871_;
}
else
{
lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v_vars_3907_; uint8_t v___x_3908_; lean_object* v___x_3909_; uint8_t v___y_3913_; 
lean_inc_ref(v_consumeParamPred_3861_);
v___x_3905_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(v_fvarId_3899_, v_args_3860_, v_consumeParamPred_3861_);
v___x_3906_ = lean_st_ref_get(v___y_3865_);
v_vars_3907_ = lean_ctor_get(v___x_3906_, 0);
lean_inc_ref(v_vars_3907_);
lean_dec(v___x_3906_);
v___x_3908_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_3907_, v_fvarId_3899_);
lean_dec_ref(v_vars_3907_);
v___x_3909_ = lean_st_ref_get(v___y_3865_);
if (v___x_3908_ == 0)
{
lean_object* v_borrows_3918_; uint8_t v___x_3919_; 
v_borrows_3918_ = lean_ctor_get(v___x_3909_, 1);
lean_inc_ref(v_borrows_3918_);
lean_dec(v___x_3909_);
v___x_3919_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3918_, v_fvarId_3899_);
lean_dec_ref(v_borrows_3918_);
v___y_3913_ = v___x_3919_;
goto v___jp_3912_;
}
else
{
lean_dec(v___x_3909_);
v___y_3913_ = v___x_3908_;
goto v___jp_3912_;
}
v___jp_3910_:
{
lean_object* v___x_3911_; 
lean_inc(v_fvarId_3899_);
v___x_3911_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_3899_, v_b_3863_, v___x_3896_, v___x_3905_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
v___y_3877_ = v___x_3911_;
goto v___jp_3876_;
}
v___jp_3912_:
{
if (v___y_3913_ == 0)
{
uint8_t v___x_3914_; 
lean_inc_ref(v_consumeParamPred_3861_);
v___x_3914_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_fvarId_3899_, v_args_3860_, v_consumeParamPred_3861_);
if (v___x_3914_ == 0)
{
lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; 
v___x_3915_ = lean_unsigned_to_nat(1u);
v___x_3916_ = lean_nat_sub(v___x_3905_, v___x_3915_);
lean_dec(v___x_3905_);
lean_inc(v_fvarId_3899_);
v___x_3917_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_3899_, v_b_3863_, v___x_3896_, v___x_3916_, v___y_3864_, v___y_3865_, v___y_3866_, v___y_3867_, v___y_3868_, v___y_3869_);
v___y_3877_ = v___x_3917_;
goto v___jp_3876_;
}
else
{
goto v___jp_3910_;
}
}
else
{
goto v___jp_3910_;
}
}
}
}
}
else
{
v_a_3872_ = v_b_3863_;
goto v___jp_3871_;
}
}
v___jp_3871_:
{
lean_object* v___x_3873_; lean_object* v___x_3874_; 
v___x_3873_ = lean_unsigned_to_nat(1u);
v___x_3874_ = lean_nat_add(v_a_3862_, v___x_3873_);
lean_dec(v_a_3862_);
v_a_3862_ = v___x_3874_;
v_b_3863_ = v_a_3872_;
goto _start;
}
v___jp_3876_:
{
if (lean_obj_tag(v___y_3877_) == 0)
{
lean_object* v_a_3878_; lean_object* v___x_3880_; uint8_t v_isShared_3881_; uint8_t v_isSharedCheck_3887_; 
v_a_3878_ = lean_ctor_get(v___y_3877_, 0);
v_isSharedCheck_3887_ = !lean_is_exclusive(v___y_3877_);
if (v_isSharedCheck_3887_ == 0)
{
v___x_3880_ = v___y_3877_;
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
else
{
lean_inc(v_a_3878_);
lean_dec(v___y_3877_);
v___x_3880_ = lean_box(0);
v_isShared_3881_ = v_isSharedCheck_3887_;
goto v_resetjp_3879_;
}
v_resetjp_3879_:
{
if (lean_obj_tag(v_a_3878_) == 0)
{
lean_object* v_a_3882_; lean_object* v___x_3884_; 
lean_dec(v_a_3862_);
lean_dec_ref(v_consumeParamPred_3861_);
v_a_3882_ = lean_ctor_get(v_a_3878_, 0);
lean_inc(v_a_3882_);
lean_dec_ref_known(v_a_3878_, 1);
if (v_isShared_3881_ == 0)
{
lean_ctor_set(v___x_3880_, 0, v_a_3882_);
v___x_3884_ = v___x_3880_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v_a_3882_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
else
{
lean_object* v_a_3886_; 
lean_del_object(v___x_3880_);
v_a_3886_ = lean_ctor_get(v_a_3878_, 0);
lean_inc(v_a_3886_);
lean_dec_ref_known(v_a_3878_, 1);
v_a_3872_ = v_a_3886_;
goto v___jp_3871_;
}
}
}
else
{
lean_object* v_a_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_3895_; 
lean_dec(v_a_3862_);
lean_dec_ref(v_consumeParamPred_3861_);
v_a_3888_ = lean_ctor_get(v___y_3877_, 0);
v_isSharedCheck_3895_ = !lean_is_exclusive(v___y_3877_);
if (v_isSharedCheck_3895_ == 0)
{
v___x_3890_ = v___y_3877_;
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_a_3888_);
lean_dec(v___y_3877_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_3895_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v___x_3893_; 
if (v_isShared_3891_ == 0)
{
v___x_3893_ = v___x_3890_;
goto v_reusejp_3892_;
}
else
{
lean_object* v_reuseFailAlloc_3894_; 
v_reuseFailAlloc_3894_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3894_, 0, v_a_3888_);
v___x_3893_ = v_reuseFailAlloc_3894_;
goto v_reusejp_3892_;
}
v_reusejp_3892_:
{
return v___x_3893_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___boxed(lean_object* v_upperBound_3920_, lean_object* v_args_3921_, lean_object* v_consumeParamPred_3922_, lean_object* v_a_3923_, lean_object* v_b_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v_upperBound_3920_, v_args_3921_, v_consumeParamPred_3922_, v_a_3923_, v_b_3924_, v___y_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3928_);
lean_dec_ref(v___y_3927_);
lean_dec(v___y_3926_);
lean_dec_ref(v___y_3925_);
lean_dec_ref(v_args_3921_);
lean_dec(v_upperBound_3920_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(lean_object* v_args_3933_, lean_object* v_consumeParamPred_3934_, lean_object* v_k_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_){
_start:
{
lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; 
v___x_3943_ = lean_unsigned_to_nat(0u);
v___x_3944_ = lean_array_get_size(v_args_3933_);
v___x_3945_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v___x_3944_, v_args_3933_, v_consumeParamPred_3934_, v___x_3943_, v_k_3935_, v___y_3936_, v___y_3937_, v___y_3938_, v___y_3939_, v___y_3940_, v___y_3941_);
return v___x_3945_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux___boxed(lean_object* v_args_3946_, lean_object* v_consumeParamPred_3947_, lean_object* v_k_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_3946_, v_consumeParamPred_3947_, v_k_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
lean_dec(v___y_3950_);
lean_dec_ref(v___y_3949_);
lean_dec_ref(v_args_3946_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(lean_object* v_upperBound_3957_, lean_object* v_args_3958_, lean_object* v_consumeParamPred_3959_, lean_object* v_inst_3960_, lean_object* v_R_3961_, lean_object* v_a_3962_, lean_object* v_b_3963_, lean_object* v_c_3964_, lean_object* v___y_3965_, lean_object* v___y_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_){
_start:
{
lean_object* v___x_3972_; 
v___x_3972_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v_upperBound_3957_, v_args_3958_, v_consumeParamPred_3959_, v_a_3962_, v_b_3963_, v___y_3965_, v___y_3966_, v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_);
return v___x_3972_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___boxed(lean_object* v_upperBound_3973_, lean_object* v_args_3974_, lean_object* v_consumeParamPred_3975_, lean_object* v_inst_3976_, lean_object* v_R_3977_, lean_object* v_a_3978_, lean_object* v_b_3979_, lean_object* v_c_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_){
_start:
{
lean_object* v_res_3988_; 
v_res_3988_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(v_upperBound_3973_, v_args_3974_, v_consumeParamPred_3975_, v_inst_3976_, v_R_3977_, v_a_3978_, v_b_3979_, v_c_3980_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_, v___y_3986_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec(v___y_3984_);
lean_dec_ref(v___y_3983_);
lean_dec(v___y_3982_);
lean_dec_ref(v___y_3981_);
lean_dec_ref(v_args_3974_);
lean_dec(v_upperBound_3973_);
return v_res_3988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(lean_object* v_args_3989_, lean_object* v_ps_3990_, lean_object* v_k_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_){
_start:
{
lean_object* v___f_3999_; lean_object* v___x_4000_; 
v___f_3999_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3999_, 0, v_ps_3990_);
v___x_4000_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_3989_, v___f_3999_, v_k_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
return v___x_4000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore___boxed(lean_object* v_args_4001_, lean_object* v_ps_4002_, lean_object* v_k_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_){
_start:
{
lean_object* v_res_4011_; 
v_res_4011_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_4001_, v_ps_4002_, v_k_4003_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
lean_dec(v___y_4009_);
lean_dec_ref(v___y_4008_);
lean_dec(v___y_4007_);
lean_dec_ref(v___y_4006_);
lean_dec(v___y_4005_);
lean_dec_ref(v___y_4004_);
lean_dec_ref(v_args_4001_);
return v_res_4011_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(lean_object* v_x_4012_){
_start:
{
uint8_t v___x_4013_; 
v___x_4013_ = 1;
return v___x_4013_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0___boxed(lean_object* v_x_4014_){
_start:
{
uint8_t v_res_4015_; lean_object* v_r_4016_; 
v_res_4015_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(v_x_4014_);
lean_dec(v_x_4014_);
v_r_4016_ = lean_box(v_res_4015_);
return v_r_4016_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(lean_object* v_args_4018_, lean_object* v_k_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_){
_start:
{
lean_object* v___f_4027_; lean_object* v___x_4028_; 
v___f_4027_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0));
v___x_4028_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_4018_, v___f_4027_, v_k_4019_, v___y_4020_, v___y_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_);
return v___x_4028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___boxed(lean_object* v_args_4029_, lean_object* v_k_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_){
_start:
{
lean_object* v_res_4038_; 
v_res_4038_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4029_, v_k_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_);
lean_dec(v___y_4036_);
lean_dec_ref(v___y_4035_);
lean_dec(v___y_4034_);
lean_dec_ref(v___y_4033_);
lean_dec(v___y_4032_);
lean_dec_ref(v___y_4031_);
lean_dec_ref(v_args_4029_);
return v_res_4038_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(lean_object* v_upperBound_4039_, lean_object* v_args_4040_, lean_object* v_ps_4041_, lean_object* v_a_4042_, lean_object* v_b_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
lean_object* v_a_4048_; uint8_t v___x_4052_; 
v___x_4052_ = lean_nat_dec_lt(v_a_4042_, v_upperBound_4039_);
if (v___x_4052_ == 0)
{
lean_object* v___x_4053_; 
lean_dec(v_a_4042_);
lean_dec_ref(v_ps_4041_);
v___x_4053_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4053_, 0, v_b_4043_);
return v___x_4053_;
}
else
{
lean_object* v___x_4054_; 
v___x_4054_ = lean_array_fget_borrowed(v_args_4040_, v_a_4042_);
if (lean_obj_tag(v___x_4054_) == 0)
{
v_a_4048_ = v_b_4043_;
goto v___jp_4047_;
}
else
{
lean_object* v_fvarId_4055_; lean_object* v_varMap_4056_; lean_object* v___x_4057_; lean_object* v___x_4058_; lean_object* v___x_4059_; lean_object* v_vars_4060_; uint8_t v___x_4061_; lean_object* v___x_4062_; uint8_t v_isPossibleRef_4063_; 
v_fvarId_4055_ = lean_ctor_get(v___x_4054_, 0);
v_varMap_4056_ = lean_ctor_get(v___y_4044_, 2);
v___x_4057_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_4055_);
lean_inc(v_varMap_4056_);
v___x_4058_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_4057_, v_varMap_4056_, v_fvarId_4055_);
v___x_4059_ = lean_st_ref_get(v___y_4045_);
v_vars_4060_ = lean_ctor_get(v___x_4059_, 0);
lean_inc_ref(v_vars_4060_);
lean_dec(v___x_4059_);
v___x_4061_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_4060_, v_fvarId_4055_);
lean_dec_ref(v_vars_4060_);
v___x_4062_ = lean_st_ref_get(v___y_4045_);
v_isPossibleRef_4063_ = lean_ctor_get_uint8(v___x_4058_, sizeof(void*)*2);
lean_dec(v___x_4058_);
if (v_isPossibleRef_4063_ == 0)
{
lean_dec(v___x_4062_);
v_a_4048_ = v_b_4043_;
goto v___jp_4047_;
}
else
{
uint8_t v___x_4064_; 
lean_inc(v_a_4042_);
v___x_4064_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_4040_, v_a_4042_);
if (v___x_4064_ == 0)
{
lean_dec(v___x_4062_);
v_a_4048_ = v_b_4043_;
goto v___jp_4047_;
}
else
{
uint8_t v___x_4065_; 
lean_inc_ref(v_ps_4041_);
v___x_4065_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(v_fvarId_4055_, v_args_4040_, v_ps_4041_);
if (v___x_4065_ == 0)
{
lean_dec(v___x_4062_);
v_a_4048_ = v_b_4043_;
goto v___jp_4047_;
}
else
{
if (v___x_4061_ == 0)
{
lean_object* v_borrows_4066_; uint8_t v___x_4067_; 
v_borrows_4066_ = lean_ctor_get(v___x_4062_, 1);
lean_inc_ref(v_borrows_4066_);
lean_dec(v___x_4062_);
v___x_4067_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4066_, v_fvarId_4055_);
lean_dec_ref(v_borrows_4066_);
if (v___x_4067_ == 0)
{
lean_object* v___x_4068_; 
lean_inc(v_fvarId_4055_);
v___x_4068_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_4055_, v_b_4043_, v___y_4044_);
if (lean_obj_tag(v___x_4068_) == 0)
{
lean_object* v_a_4069_; 
v_a_4069_ = lean_ctor_get(v___x_4068_, 0);
lean_inc(v_a_4069_);
lean_dec_ref_known(v___x_4068_, 1);
v_a_4048_ = v_a_4069_;
goto v___jp_4047_;
}
else
{
lean_dec(v_a_4042_);
lean_dec_ref(v_ps_4041_);
return v___x_4068_;
}
}
else
{
v_a_4048_ = v_b_4043_;
goto v___jp_4047_;
}
}
else
{
lean_dec(v___x_4062_);
v_a_4048_ = v_b_4043_;
goto v___jp_4047_;
}
}
}
}
}
}
v___jp_4047_:
{
lean_object* v___x_4049_; lean_object* v___x_4050_; 
v___x_4049_ = lean_unsigned_to_nat(1u);
v___x_4050_ = lean_nat_add(v_a_4042_, v___x_4049_);
lean_dec(v_a_4042_);
v_a_4042_ = v___x_4050_;
v_b_4043_ = v_a_4048_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg___boxed(lean_object* v_upperBound_4070_, lean_object* v_args_4071_, lean_object* v_ps_4072_, lean_object* v_a_4073_, lean_object* v_b_4074_, lean_object* v___y_4075_, lean_object* v___y_4076_, lean_object* v___y_4077_){
_start:
{
lean_object* v_res_4078_; 
v_res_4078_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v_upperBound_4070_, v_args_4071_, v_ps_4072_, v_a_4073_, v_b_4074_, v___y_4075_, v___y_4076_);
lean_dec(v___y_4076_);
lean_dec_ref(v___y_4075_);
lean_dec_ref(v_args_4071_);
lean_dec(v_upperBound_4070_);
return v_res_4078_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(lean_object* v_args_4079_, lean_object* v_ps_4080_, lean_object* v_k_4081_, lean_object* v___y_4082_, lean_object* v___y_4083_, lean_object* v___y_4084_, lean_object* v___y_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_){
_start:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; lean_object* v___x_4091_; 
v___x_4089_ = lean_unsigned_to_nat(0u);
v___x_4090_ = lean_array_get_size(v_args_4079_);
v___x_4091_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v___x_4090_, v_args_4079_, v_ps_4080_, v___x_4089_, v_k_4081_, v___y_4082_, v___y_4083_);
return v___x_4091_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp___boxed(lean_object* v_args_4092_, lean_object* v_ps_4093_, lean_object* v_k_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_, lean_object* v___y_4097_, lean_object* v___y_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_){
_start:
{
lean_object* v_res_4102_; 
v_res_4102_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(v_args_4092_, v_ps_4093_, v_k_4094_, v___y_4095_, v___y_4096_, v___y_4097_, v___y_4098_, v___y_4099_, v___y_4100_);
lean_dec(v___y_4100_);
lean_dec_ref(v___y_4099_);
lean_dec(v___y_4098_);
lean_dec_ref(v___y_4097_);
lean_dec(v___y_4096_);
lean_dec_ref(v___y_4095_);
lean_dec_ref(v_args_4092_);
return v_res_4102_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(lean_object* v_upperBound_4103_, lean_object* v_args_4104_, lean_object* v_ps_4105_, lean_object* v_inst_4106_, lean_object* v_R_4107_, lean_object* v_a_4108_, lean_object* v_b_4109_, lean_object* v_c_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_){
_start:
{
lean_object* v___x_4118_; 
v___x_4118_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v_upperBound_4103_, v_args_4104_, v_ps_4105_, v_a_4108_, v_b_4109_, v___y_4111_, v___y_4112_);
return v___x_4118_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___boxed(lean_object* v_upperBound_4119_, lean_object* v_args_4120_, lean_object* v_ps_4121_, lean_object* v_inst_4122_, lean_object* v_R_4123_, lean_object* v_a_4124_, lean_object* v_b_4125_, lean_object* v_c_4126_, lean_object* v___y_4127_, lean_object* v___y_4128_, lean_object* v___y_4129_, lean_object* v___y_4130_, lean_object* v___y_4131_, lean_object* v___y_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(v_upperBound_4119_, v_args_4120_, v_ps_4121_, v_inst_4122_, v_R_4123_, v_a_4124_, v_b_4125_, v_c_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_, v___y_4131_, v___y_4132_);
lean_dec(v___y_4132_);
lean_dec_ref(v___y_4131_);
lean_dec(v___y_4130_);
lean_dec_ref(v___y_4129_);
lean_dec(v___y_4128_);
lean_dec_ref(v___y_4127_);
lean_dec_ref(v_args_4120_);
lean_dec(v_upperBound_4119_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(lean_object* v_fvarId_4135_, lean_object* v_k_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v_varMap_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v_borrows_4144_; uint8_t v___x_4145_; lean_object* v___x_4146_; uint8_t v_isPossibleRef_4147_; 
v_varMap_4140_ = lean_ctor_get(v___y_4137_, 2);
v___x_4141_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_4135_);
lean_inc(v_varMap_4140_);
v___x_4142_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_4141_, v_varMap_4140_, v_fvarId_4135_);
v___x_4143_ = lean_st_ref_get(v___y_4138_);
v_borrows_4144_ = lean_ctor_get(v___x_4143_, 1);
lean_inc_ref(v_borrows_4144_);
lean_dec(v___x_4143_);
v___x_4145_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4144_, v_fvarId_4135_);
lean_dec_ref(v_borrows_4144_);
v___x_4146_ = lean_st_ref_get(v___y_4138_);
v_isPossibleRef_4147_ = lean_ctor_get_uint8(v___x_4142_, sizeof(void*)*2);
lean_dec(v___x_4142_);
if (v_isPossibleRef_4147_ == 0)
{
lean_object* v___x_4148_; 
lean_dec(v___x_4146_);
lean_dec(v_fvarId_4135_);
v___x_4148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4148_, 0, v_k_4136_);
return v___x_4148_;
}
else
{
if (v___x_4145_ == 0)
{
lean_object* v_vars_4149_; uint8_t v___x_4150_; 
v_vars_4149_ = lean_ctor_get(v___x_4146_, 0);
lean_inc_ref(v_vars_4149_);
lean_dec(v___x_4146_);
v___x_4150_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_4149_, v_fvarId_4135_);
lean_dec_ref(v_vars_4149_);
if (v___x_4150_ == 0)
{
lean_object* v___x_4151_; 
v___x_4151_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_4135_, v_k_4136_, v___y_4137_);
return v___x_4151_;
}
else
{
lean_object* v___x_4152_; 
lean_dec(v_fvarId_4135_);
v___x_4152_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4152_, 0, v_k_4136_);
return v___x_4152_;
}
}
else
{
lean_object* v___x_4153_; 
lean_dec(v___x_4146_);
lean_dec(v_fvarId_4135_);
v___x_4153_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4153_, 0, v_k_4136_);
return v___x_4153_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg___boxed(lean_object* v_fvarId_4154_, lean_object* v_k_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_){
_start:
{
lean_object* v_res_4159_; 
v_res_4159_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4154_, v_k_4155_, v___y_4156_, v___y_4157_);
lean_dec(v___y_4157_);
lean_dec_ref(v___y_4156_);
return v_res_4159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(lean_object* v_fvarId_4160_, lean_object* v_k_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_){
_start:
{
lean_object* v___x_4169_; 
v___x_4169_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4160_, v_k_4161_, v___y_4162_, v___y_4163_);
return v___x_4169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___boxed(lean_object* v_fvarId_4170_, lean_object* v_k_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v_res_4179_; 
v_res_4179_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(v_fvarId_4170_, v_k_4171_, v___y_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_);
lean_dec(v___y_4177_);
lean_dec_ref(v___y_4176_);
lean_dec(v___y_4175_);
lean_dec_ref(v___y_4174_);
lean_dec(v___y_4173_);
lean_dec_ref(v___y_4172_);
return v_res_4179_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(lean_object* v_a_4180_, lean_object* v_x_4181_){
_start:
{
if (lean_obj_tag(v_x_4181_) == 0)
{
return v_x_4181_;
}
else
{
lean_object* v_key_4182_; lean_object* v_value_4183_; lean_object* v_tail_4184_; lean_object* v___x_4186_; uint8_t v_isShared_4187_; uint8_t v_isSharedCheck_4193_; 
v_key_4182_ = lean_ctor_get(v_x_4181_, 0);
v_value_4183_ = lean_ctor_get(v_x_4181_, 1);
v_tail_4184_ = lean_ctor_get(v_x_4181_, 2);
v_isSharedCheck_4193_ = !lean_is_exclusive(v_x_4181_);
if (v_isSharedCheck_4193_ == 0)
{
v___x_4186_ = v_x_4181_;
v_isShared_4187_ = v_isSharedCheck_4193_;
goto v_resetjp_4185_;
}
else
{
lean_inc(v_tail_4184_);
lean_inc(v_value_4183_);
lean_inc(v_key_4182_);
lean_dec(v_x_4181_);
v___x_4186_ = lean_box(0);
v_isShared_4187_ = v_isSharedCheck_4193_;
goto v_resetjp_4185_;
}
v_resetjp_4185_:
{
uint8_t v___x_4188_; 
v___x_4188_ = l_Lean_instBEqFVarId_beq(v_key_4182_, v_a_4180_);
if (v___x_4188_ == 0)
{
lean_object* v___x_4189_; lean_object* v___x_4191_; 
v___x_4189_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4180_, v_tail_4184_);
if (v_isShared_4187_ == 0)
{
lean_ctor_set(v___x_4186_, 2, v___x_4189_);
v___x_4191_ = v___x_4186_;
goto v_reusejp_4190_;
}
else
{
lean_object* v_reuseFailAlloc_4192_; 
v_reuseFailAlloc_4192_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4192_, 0, v_key_4182_);
lean_ctor_set(v_reuseFailAlloc_4192_, 1, v_value_4183_);
lean_ctor_set(v_reuseFailAlloc_4192_, 2, v___x_4189_);
v___x_4191_ = v_reuseFailAlloc_4192_;
goto v_reusejp_4190_;
}
v_reusejp_4190_:
{
return v___x_4191_;
}
}
else
{
lean_del_object(v___x_4186_);
lean_dec(v_value_4183_);
lean_dec(v_key_4182_);
return v_tail_4184_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg___boxed(lean_object* v_a_4194_, lean_object* v_x_4195_){
_start:
{
lean_object* v_res_4196_; 
v_res_4196_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4194_, v_x_4195_);
lean_dec(v_a_4194_);
return v_res_4196_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(lean_object* v_m_4197_, lean_object* v_a_4198_){
_start:
{
lean_object* v_size_4199_; lean_object* v_buckets_4200_; lean_object* v___x_4201_; uint64_t v___x_4202_; uint64_t v___x_4203_; uint64_t v___x_4204_; uint64_t v_fold_4205_; uint64_t v___x_4206_; uint64_t v___x_4207_; uint64_t v___x_4208_; size_t v___x_4209_; size_t v___x_4210_; size_t v___x_4211_; size_t v___x_4212_; size_t v___x_4213_; lean_object* v_bkt_4214_; uint8_t v___x_4215_; 
v_size_4199_ = lean_ctor_get(v_m_4197_, 0);
v_buckets_4200_ = lean_ctor_get(v_m_4197_, 1);
v___x_4201_ = lean_array_get_size(v_buckets_4200_);
v___x_4202_ = l_Lean_instHashableFVarId_hash(v_a_4198_);
v___x_4203_ = 32ULL;
v___x_4204_ = lean_uint64_shift_right(v___x_4202_, v___x_4203_);
v_fold_4205_ = lean_uint64_xor(v___x_4202_, v___x_4204_);
v___x_4206_ = 16ULL;
v___x_4207_ = lean_uint64_shift_right(v_fold_4205_, v___x_4206_);
v___x_4208_ = lean_uint64_xor(v_fold_4205_, v___x_4207_);
v___x_4209_ = lean_uint64_to_usize(v___x_4208_);
v___x_4210_ = lean_usize_of_nat(v___x_4201_);
v___x_4211_ = ((size_t)1ULL);
v___x_4212_ = lean_usize_sub(v___x_4210_, v___x_4211_);
v___x_4213_ = lean_usize_land(v___x_4209_, v___x_4212_);
v_bkt_4214_ = lean_array_uget_borrowed(v_buckets_4200_, v___x_4213_);
v___x_4215_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_4198_, v_bkt_4214_);
if (v___x_4215_ == 0)
{
return v_m_4197_;
}
else
{
lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4228_; 
lean_inc(v_bkt_4214_);
lean_inc_ref(v_buckets_4200_);
lean_inc(v_size_4199_);
v_isSharedCheck_4228_ = !lean_is_exclusive(v_m_4197_);
if (v_isSharedCheck_4228_ == 0)
{
lean_object* v_unused_4229_; lean_object* v_unused_4230_; 
v_unused_4229_ = lean_ctor_get(v_m_4197_, 1);
lean_dec(v_unused_4229_);
v_unused_4230_ = lean_ctor_get(v_m_4197_, 0);
lean_dec(v_unused_4230_);
v___x_4217_ = v_m_4197_;
v_isShared_4218_ = v_isSharedCheck_4228_;
goto v_resetjp_4216_;
}
else
{
lean_dec(v_m_4197_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4228_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v___x_4219_; lean_object* v_buckets_x27_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4226_; 
v___x_4219_ = lean_box(0);
v_buckets_x27_4220_ = lean_array_uset(v_buckets_4200_, v___x_4213_, v___x_4219_);
v___x_4221_ = lean_unsigned_to_nat(1u);
v___x_4222_ = lean_nat_sub(v_size_4199_, v___x_4221_);
lean_dec(v_size_4199_);
v___x_4223_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4198_, v_bkt_4214_);
v___x_4224_ = lean_array_uset(v_buckets_x27_4220_, v___x_4213_, v___x_4223_);
if (v_isShared_4218_ == 0)
{
lean_ctor_set(v___x_4217_, 1, v___x_4224_);
lean_ctor_set(v___x_4217_, 0, v___x_4222_);
v___x_4226_ = v___x_4217_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v___x_4222_);
lean_ctor_set(v_reuseFailAlloc_4227_, 1, v___x_4224_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg___boxed(lean_object* v_m_4231_, lean_object* v_a_4232_){
_start:
{
lean_object* v_res_4233_; 
v_res_4233_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_m_4231_, v_a_4232_);
lean_dec(v_a_4232_);
return v_res_4233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(lean_object* v_as_4234_, size_t v_i_4235_, size_t v_stop_4236_, lean_object* v_b_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_){
_start:
{
lean_object* v_a_4242_; uint8_t v___x_4246_; 
v___x_4246_ = lean_usize_dec_eq(v_i_4235_, v_stop_4236_);
if (v___x_4246_ == 0)
{
lean_object* v___x_4247_; lean_object* v_fvarId_4248_; lean_object* v___x_4249_; 
v___x_4247_ = lean_array_uget_borrowed(v_as_4234_, v_i_4235_);
v_fvarId_4248_ = lean_ctor_get(v___x_4247_, 0);
lean_inc(v_fvarId_4248_);
v___x_4249_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4248_, v_b_4237_, v___y_4238_, v___y_4239_);
if (lean_obj_tag(v___x_4249_) == 0)
{
lean_object* v_a_4250_; lean_object* v___x_4251_; lean_object* v_vars_4252_; lean_object* v_borrows_4253_; lean_object* v___x_4255_; uint8_t v_isShared_4256_; uint8_t v_isSharedCheck_4263_; 
v_a_4250_ = lean_ctor_get(v___x_4249_, 0);
lean_inc(v_a_4250_);
lean_dec_ref_known(v___x_4249_, 1);
v___x_4251_ = lean_st_ref_take(v___y_4239_);
v_vars_4252_ = lean_ctor_get(v___x_4251_, 0);
v_borrows_4253_ = lean_ctor_get(v___x_4251_, 1);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4251_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4255_ = v___x_4251_;
v_isShared_4256_ = v_isSharedCheck_4263_;
goto v_resetjp_4254_;
}
else
{
lean_inc(v_borrows_4253_);
lean_inc(v_vars_4252_);
lean_dec(v___x_4251_);
v___x_4255_ = lean_box(0);
v_isShared_4256_ = v_isSharedCheck_4263_;
goto v_resetjp_4254_;
}
v_resetjp_4254_:
{
lean_object* v_vars_4257_; lean_object* v_borrows_4258_; lean_object* v___x_4260_; 
v_vars_4257_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_vars_4252_, v_fvarId_4248_);
v_borrows_4258_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_borrows_4253_, v_fvarId_4248_);
if (v_isShared_4256_ == 0)
{
lean_ctor_set(v___x_4255_, 1, v_borrows_4258_);
lean_ctor_set(v___x_4255_, 0, v_vars_4257_);
v___x_4260_ = v___x_4255_;
goto v_reusejp_4259_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_vars_4257_);
lean_ctor_set(v_reuseFailAlloc_4262_, 1, v_borrows_4258_);
v___x_4260_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4259_;
}
v_reusejp_4259_:
{
lean_object* v___x_4261_; 
v___x_4261_ = lean_st_ref_put(v___y_4239_, v___x_4260_);
v_a_4242_ = v_a_4250_;
goto v___jp_4241_;
}
}
}
else
{
if (lean_obj_tag(v___x_4249_) == 0)
{
lean_object* v_a_4264_; 
v_a_4264_ = lean_ctor_get(v___x_4249_, 0);
lean_inc(v_a_4264_);
lean_dec_ref_known(v___x_4249_, 1);
v_a_4242_ = v_a_4264_;
goto v___jp_4241_;
}
else
{
return v___x_4249_;
}
}
}
else
{
lean_object* v___x_4265_; 
v___x_4265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4265_, 0, v_b_4237_);
return v___x_4265_;
}
v___jp_4241_:
{
size_t v___x_4243_; size_t v___x_4244_; 
v___x_4243_ = ((size_t)1ULL);
v___x_4244_ = lean_usize_add(v_i_4235_, v___x_4243_);
v_i_4235_ = v___x_4244_;
v_b_4237_ = v_a_4242_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg___boxed(lean_object* v_as_4266_, lean_object* v_i_4267_, lean_object* v_stop_4268_, lean_object* v_b_4269_, lean_object* v___y_4270_, lean_object* v___y_4271_, lean_object* v___y_4272_){
_start:
{
size_t v_i_boxed_4273_; size_t v_stop_boxed_4274_; lean_object* v_res_4275_; 
v_i_boxed_4273_ = lean_unbox_usize(v_i_4267_);
lean_dec(v_i_4267_);
v_stop_boxed_4274_ = lean_unbox_usize(v_stop_4268_);
lean_dec(v_stop_4268_);
v_res_4275_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_as_4266_, v_i_boxed_4273_, v_stop_boxed_4274_, v_b_4269_, v___y_4270_, v___y_4271_);
lean_dec(v___y_4271_);
lean_dec_ref(v___y_4270_);
lean_dec_ref(v_as_4266_);
return v_res_4275_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(lean_object* v_ps_4276_, lean_object* v_k_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_){
_start:
{
lean_object* v___x_4285_; lean_object* v___x_4286_; uint8_t v___x_4287_; 
v___x_4285_ = lean_unsigned_to_nat(0u);
v___x_4286_ = lean_array_get_size(v_ps_4276_);
v___x_4287_ = lean_nat_dec_lt(v___x_4285_, v___x_4286_);
if (v___x_4287_ == 0)
{
lean_object* v___x_4288_; 
v___x_4288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4288_, 0, v_k_4277_);
return v___x_4288_;
}
else
{
uint8_t v___x_4289_; 
v___x_4289_ = lean_nat_dec_le(v___x_4286_, v___x_4286_);
if (v___x_4289_ == 0)
{
if (v___x_4287_ == 0)
{
lean_object* v___x_4290_; 
v___x_4290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4290_, 0, v_k_4277_);
return v___x_4290_;
}
else
{
size_t v___x_4291_; size_t v___x_4292_; lean_object* v___x_4293_; 
v___x_4291_ = ((size_t)0ULL);
v___x_4292_ = lean_usize_of_nat(v___x_4286_);
v___x_4293_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_ps_4276_, v___x_4291_, v___x_4292_, v_k_4277_, v___y_4278_, v___y_4279_);
return v___x_4293_;
}
}
else
{
size_t v___x_4294_; size_t v___x_4295_; lean_object* v___x_4296_; 
v___x_4294_ = ((size_t)0ULL);
v___x_4295_ = lean_usize_of_nat(v___x_4286_);
v___x_4296_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_ps_4276_, v___x_4294_, v___x_4295_, v_k_4277_, v___y_4278_, v___y_4279_);
return v___x_4296_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams___boxed(lean_object* v_ps_4297_, lean_object* v_k_4298_, lean_object* v___y_4299_, lean_object* v___y_4300_, lean_object* v___y_4301_, lean_object* v___y_4302_, lean_object* v___y_4303_, lean_object* v___y_4304_, lean_object* v___y_4305_){
_start:
{
lean_object* v_res_4306_; 
v_res_4306_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_ps_4297_, v_k_4298_, v___y_4299_, v___y_4300_, v___y_4301_, v___y_4302_, v___y_4303_, v___y_4304_);
lean_dec(v___y_4304_);
lean_dec_ref(v___y_4303_);
lean_dec(v___y_4302_);
lean_dec_ref(v___y_4301_);
lean_dec(v___y_4300_);
lean_dec_ref(v___y_4299_);
lean_dec_ref(v_ps_4297_);
return v_res_4306_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(lean_object* v_00_u03b2_4307_, lean_object* v_m_4308_, lean_object* v_a_4309_){
_start:
{
lean_object* v___x_4310_; 
v___x_4310_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_m_4308_, v_a_4309_);
return v___x_4310_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___boxed(lean_object* v_00_u03b2_4311_, lean_object* v_m_4312_, lean_object* v_a_4313_){
_start:
{
lean_object* v_res_4314_; 
v_res_4314_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(v_00_u03b2_4311_, v_m_4312_, v_a_4313_);
lean_dec(v_a_4313_);
return v_res_4314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1(lean_object* v_as_4315_, size_t v_i_4316_, size_t v_stop_4317_, lean_object* v_b_4318_, lean_object* v___y_4319_, lean_object* v___y_4320_, lean_object* v___y_4321_, lean_object* v___y_4322_, lean_object* v___y_4323_, lean_object* v___y_4324_){
_start:
{
lean_object* v___x_4326_; 
v___x_4326_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_as_4315_, v_i_4316_, v_stop_4317_, v_b_4318_, v___y_4319_, v___y_4320_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___boxed(lean_object* v_as_4327_, lean_object* v_i_4328_, lean_object* v_stop_4329_, lean_object* v_b_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_){
_start:
{
size_t v_i_boxed_4338_; size_t v_stop_boxed_4339_; lean_object* v_res_4340_; 
v_i_boxed_4338_ = lean_unbox_usize(v_i_4328_);
lean_dec(v_i_4328_);
v_stop_boxed_4339_ = lean_unbox_usize(v_stop_4329_);
lean_dec(v_stop_4329_);
v_res_4340_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1(v_as_4327_, v_i_boxed_4338_, v_stop_boxed_4339_, v_b_4330_, v___y_4331_, v___y_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_);
lean_dec(v___y_4336_);
lean_dec_ref(v___y_4335_);
lean_dec(v___y_4334_);
lean_dec_ref(v___y_4333_);
lean_dec(v___y_4332_);
lean_dec_ref(v___y_4331_);
lean_dec_ref(v_as_4327_);
return v_res_4340_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0(lean_object* v_00_u03b2_4341_, lean_object* v_a_4342_, lean_object* v_x_4343_){
_start:
{
lean_object* v___x_4344_; 
v___x_4344_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4342_, v_x_4343_);
return v___x_4344_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4345_, lean_object* v_a_4346_, lean_object* v_x_4347_){
_start:
{
lean_object* v_res_4348_; 
v_res_4348_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0(v_00_u03b2_4345_, v_a_4346_, v_x_4347_);
lean_dec(v_a_4346_);
return v_res_4348_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4349_; 
v___x_4349_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_4349_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(lean_object* v_msg_4350_){
_start:
{
lean_object* v___x_4351_; lean_object* v___x_4352_; 
v___x_4351_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0);
v___x_4352_ = lean_panic_fn_borrowed(v___x_4351_, v_msg_4350_);
return v___x_4352_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4353_; 
v___x_4353_ = l_Lean_Compiler_LCNF_instInhabitedSignature_default___redArg();
return v___x_4353_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(lean_object* v_msg_4354_){
_start:
{
lean_object* v___x_4355_; lean_object* v___x_4356_; 
v___x_4355_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0);
v___x_4356_ = lean_panic_fn_borrowed(v___x_4355_, v_msg_4354_);
return v___x_4356_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(lean_object* v_msg_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v___f_4365_; lean_object* v___f_4366_; lean_object* v___f_4367_; lean_object* v___f_4368_; lean_object* v___f_4369_; lean_object* v___f_4370_; lean_object* v___f_4371_; lean_object* v___f_4372_; lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4375_; lean_object* v___x_4376_; lean_object* v_toApplicative_4377_; lean_object* v___x_4379_; uint8_t v_isShared_4380_; uint8_t v_isSharedCheck_4440_; 
v___f_4365_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0));
v___f_4366_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1));
v___f_4367_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2));
v___f_4368_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3));
v___f_4369_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4));
v___f_4370_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_4370_, 0, v___f_4369_);
lean_closure_set(v___f_4370_, 1, v___f_4368_);
v___f_4371_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_4371_, 0, v___f_4368_);
v___f_4372_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__5));
v___x_4373_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4373_, 0, v___f_4365_);
lean_ctor_set(v___x_4373_, 1, v___f_4366_);
v___x_4374_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4373_);
lean_ctor_set(v___x_4374_, 1, v___f_4367_);
lean_ctor_set(v___x_4374_, 2, v___f_4370_);
lean_ctor_set(v___x_4374_, 3, v___f_4371_);
lean_ctor_set(v___x_4374_, 4, v___f_4372_);
v___x_4375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4375_, 0, v___x_4374_);
lean_ctor_set(v___x_4375_, 1, v___f_4368_);
v___x_4376_ = l_StateRefT_x27_instMonad___redArg(v___x_4375_);
v_toApplicative_4377_ = lean_ctor_get(v___x_4376_, 0);
v_isSharedCheck_4440_ = !lean_is_exclusive(v___x_4376_);
if (v_isSharedCheck_4440_ == 0)
{
lean_object* v_unused_4441_; 
v_unused_4441_ = lean_ctor_get(v___x_4376_, 1);
lean_dec(v_unused_4441_);
v___x_4379_ = v___x_4376_;
v_isShared_4380_ = v_isSharedCheck_4440_;
goto v_resetjp_4378_;
}
else
{
lean_inc(v_toApplicative_4377_);
lean_dec(v___x_4376_);
v___x_4379_ = lean_box(0);
v_isShared_4380_ = v_isSharedCheck_4440_;
goto v_resetjp_4378_;
}
v_resetjp_4378_:
{
lean_object* v_toFunctor_4381_; lean_object* v_toSeq_4382_; lean_object* v_toSeqLeft_4383_; lean_object* v_toSeqRight_4384_; lean_object* v___x_4386_; uint8_t v_isShared_4387_; uint8_t v_isSharedCheck_4438_; 
v_toFunctor_4381_ = lean_ctor_get(v_toApplicative_4377_, 0);
v_toSeq_4382_ = lean_ctor_get(v_toApplicative_4377_, 2);
v_toSeqLeft_4383_ = lean_ctor_get(v_toApplicative_4377_, 3);
v_toSeqRight_4384_ = lean_ctor_get(v_toApplicative_4377_, 4);
v_isSharedCheck_4438_ = !lean_is_exclusive(v_toApplicative_4377_);
if (v_isSharedCheck_4438_ == 0)
{
lean_object* v_unused_4439_; 
v_unused_4439_ = lean_ctor_get(v_toApplicative_4377_, 1);
lean_dec(v_unused_4439_);
v___x_4386_ = v_toApplicative_4377_;
v_isShared_4387_ = v_isSharedCheck_4438_;
goto v_resetjp_4385_;
}
else
{
lean_inc(v_toSeqRight_4384_);
lean_inc(v_toSeqLeft_4383_);
lean_inc(v_toSeq_4382_);
lean_inc(v_toFunctor_4381_);
lean_dec(v_toApplicative_4377_);
v___x_4386_ = lean_box(0);
v_isShared_4387_ = v_isSharedCheck_4438_;
goto v_resetjp_4385_;
}
v_resetjp_4385_:
{
lean_object* v___f_4388_; lean_object* v___f_4389_; lean_object* v___f_4390_; lean_object* v___f_4391_; lean_object* v___x_4392_; lean_object* v___f_4393_; lean_object* v___f_4394_; lean_object* v___f_4395_; lean_object* v___x_4397_; 
v___f_4388_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__6));
v___f_4389_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__7));
lean_inc_ref(v_toFunctor_4381_);
v___f_4390_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4390_, 0, v_toFunctor_4381_);
v___f_4391_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4391_, 0, v_toFunctor_4381_);
v___x_4392_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4392_, 0, v___f_4390_);
lean_ctor_set(v___x_4392_, 1, v___f_4391_);
v___f_4393_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4393_, 0, v_toSeqRight_4384_);
v___f_4394_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4394_, 0, v_toSeqLeft_4383_);
v___f_4395_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4395_, 0, v_toSeq_4382_);
if (v_isShared_4387_ == 0)
{
lean_ctor_set(v___x_4386_, 4, v___f_4393_);
lean_ctor_set(v___x_4386_, 3, v___f_4394_);
lean_ctor_set(v___x_4386_, 2, v___f_4395_);
lean_ctor_set(v___x_4386_, 1, v___f_4388_);
lean_ctor_set(v___x_4386_, 0, v___x_4392_);
v___x_4397_ = v___x_4386_;
goto v_reusejp_4396_;
}
else
{
lean_object* v_reuseFailAlloc_4437_; 
v_reuseFailAlloc_4437_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4437_, 0, v___x_4392_);
lean_ctor_set(v_reuseFailAlloc_4437_, 1, v___f_4388_);
lean_ctor_set(v_reuseFailAlloc_4437_, 2, v___f_4395_);
lean_ctor_set(v_reuseFailAlloc_4437_, 3, v___f_4394_);
lean_ctor_set(v_reuseFailAlloc_4437_, 4, v___f_4393_);
v___x_4397_ = v_reuseFailAlloc_4437_;
goto v_reusejp_4396_;
}
v_reusejp_4396_:
{
lean_object* v___x_4399_; 
if (v_isShared_4380_ == 0)
{
lean_ctor_set(v___x_4379_, 1, v___f_4389_);
lean_ctor_set(v___x_4379_, 0, v___x_4397_);
v___x_4399_ = v___x_4379_;
goto v_reusejp_4398_;
}
else
{
lean_object* v_reuseFailAlloc_4436_; 
v_reuseFailAlloc_4436_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4436_, 0, v___x_4397_);
lean_ctor_set(v_reuseFailAlloc_4436_, 1, v___f_4389_);
v___x_4399_ = v_reuseFailAlloc_4436_;
goto v_reusejp_4398_;
}
v_reusejp_4398_:
{
lean_object* v___x_4400_; lean_object* v_toApplicative_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4434_; 
v___x_4400_ = l_StateRefT_x27_instMonad___redArg(v___x_4399_);
v_toApplicative_4401_ = lean_ctor_get(v___x_4400_, 0);
v_isSharedCheck_4434_ = !lean_is_exclusive(v___x_4400_);
if (v_isSharedCheck_4434_ == 0)
{
lean_object* v_unused_4435_; 
v_unused_4435_ = lean_ctor_get(v___x_4400_, 1);
lean_dec(v_unused_4435_);
v___x_4403_ = v___x_4400_;
v_isShared_4404_ = v_isSharedCheck_4434_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_toApplicative_4401_);
lean_dec(v___x_4400_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4434_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v_toFunctor_4405_; lean_object* v_toSeq_4406_; lean_object* v_toSeqLeft_4407_; lean_object* v_toSeqRight_4408_; lean_object* v___x_4410_; uint8_t v_isShared_4411_; uint8_t v_isSharedCheck_4432_; 
v_toFunctor_4405_ = lean_ctor_get(v_toApplicative_4401_, 0);
v_toSeq_4406_ = lean_ctor_get(v_toApplicative_4401_, 2);
v_toSeqLeft_4407_ = lean_ctor_get(v_toApplicative_4401_, 3);
v_toSeqRight_4408_ = lean_ctor_get(v_toApplicative_4401_, 4);
v_isSharedCheck_4432_ = !lean_is_exclusive(v_toApplicative_4401_);
if (v_isSharedCheck_4432_ == 0)
{
lean_object* v_unused_4433_; 
v_unused_4433_ = lean_ctor_get(v_toApplicative_4401_, 1);
lean_dec(v_unused_4433_);
v___x_4410_ = v_toApplicative_4401_;
v_isShared_4411_ = v_isSharedCheck_4432_;
goto v_resetjp_4409_;
}
else
{
lean_inc(v_toSeqRight_4408_);
lean_inc(v_toSeqLeft_4407_);
lean_inc(v_toSeq_4406_);
lean_inc(v_toFunctor_4405_);
lean_dec(v_toApplicative_4401_);
v___x_4410_ = lean_box(0);
v_isShared_4411_ = v_isSharedCheck_4432_;
goto v_resetjp_4409_;
}
v_resetjp_4409_:
{
lean_object* v___f_4412_; lean_object* v___f_4413_; lean_object* v___f_4414_; lean_object* v___f_4415_; lean_object* v___x_4416_; lean_object* v___f_4417_; lean_object* v___f_4418_; lean_object* v___f_4419_; lean_object* v___x_4421_; 
v___f_4412_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__8));
v___f_4413_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__9));
lean_inc_ref(v_toFunctor_4405_);
v___f_4414_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4414_, 0, v_toFunctor_4405_);
v___f_4415_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4415_, 0, v_toFunctor_4405_);
v___x_4416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4416_, 0, v___f_4414_);
lean_ctor_set(v___x_4416_, 1, v___f_4415_);
v___f_4417_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4417_, 0, v_toSeqRight_4408_);
v___f_4418_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4418_, 0, v_toSeqLeft_4407_);
v___f_4419_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4419_, 0, v_toSeq_4406_);
if (v_isShared_4411_ == 0)
{
lean_ctor_set(v___x_4410_, 4, v___f_4417_);
lean_ctor_set(v___x_4410_, 3, v___f_4418_);
lean_ctor_set(v___x_4410_, 2, v___f_4419_);
lean_ctor_set(v___x_4410_, 1, v___f_4412_);
lean_ctor_set(v___x_4410_, 0, v___x_4416_);
v___x_4421_ = v___x_4410_;
goto v_reusejp_4420_;
}
else
{
lean_object* v_reuseFailAlloc_4431_; 
v_reuseFailAlloc_4431_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4431_, 0, v___x_4416_);
lean_ctor_set(v_reuseFailAlloc_4431_, 1, v___f_4412_);
lean_ctor_set(v_reuseFailAlloc_4431_, 2, v___f_4419_);
lean_ctor_set(v_reuseFailAlloc_4431_, 3, v___f_4418_);
lean_ctor_set(v_reuseFailAlloc_4431_, 4, v___f_4417_);
v___x_4421_ = v_reuseFailAlloc_4431_;
goto v_reusejp_4420_;
}
v_reusejp_4420_:
{
lean_object* v___x_4423_; 
if (v_isShared_4404_ == 0)
{
lean_ctor_set(v___x_4403_, 1, v___f_4413_);
lean_ctor_set(v___x_4403_, 0, v___x_4421_);
v___x_4423_ = v___x_4403_;
goto v_reusejp_4422_;
}
else
{
lean_object* v_reuseFailAlloc_4430_; 
v_reuseFailAlloc_4430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4430_, 0, v___x_4421_);
lean_ctor_set(v_reuseFailAlloc_4430_, 1, v___f_4413_);
v___x_4423_ = v_reuseFailAlloc_4430_;
goto v_reusejp_4422_;
}
v_reusejp_4422_:
{
lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_17646__overap_4428_; lean_object* v___x_4429_; 
v___x_4424_ = l_StateRefT_x27_instMonad___redArg(v___x_4423_);
v___x_4425_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0);
v___x_4426_ = l_instInhabitedOfMonad___redArg(v___x_4424_, v___x_4425_);
v___x_4427_ = l_instInhabitedReaderT___redArg(v___x_4426_);
v___x_17646__overap_4428_ = lean_panic_fn_borrowed(v___x_4427_, v_msg_4357_);
lean_dec(v___x_4427_);
lean_inc(v___y_4363_);
lean_inc_ref(v___y_4362_);
lean_inc(v___y_4361_);
lean_inc_ref(v___y_4360_);
lean_inc(v___y_4359_);
lean_inc_ref(v___y_4358_);
v___x_4429_ = lean_apply_7(v___x_17646__overap_4428_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_, lean_box(0));
return v___x_4429_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2___boxed(lean_object* v_msg_4442_, lean_object* v___y_4443_, lean_object* v___y_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_){
_start:
{
lean_object* v_res_4450_; 
v_res_4450_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v_msg_4442_, v___y_4443_, v___y_4444_, v___y_4445_, v___y_4446_, v___y_4447_, v___y_4448_);
lean_dec(v___y_4448_);
lean_dec_ref(v___y_4447_);
lean_dec(v___y_4446_);
lean_dec_ref(v___y_4445_);
lean_dec(v___y_4444_);
lean_dec_ref(v___y_4443_);
return v_res_4450_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2(void){
_start:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; 
v___x_4453_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_4454_ = lean_unsigned_to_nat(9u);
v___x_4455_ = lean_unsigned_to_nat(625u);
v___x_4456_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1));
v___x_4457_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0));
v___x_4458_ = l_mkPanicMessageWithDecl(v___x_4457_, v___x_4456_, v___x_4455_, v___x_4454_, v___x_4453_);
return v___x_4458_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10(void){
_start:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; 
v___x_4468_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9));
v___x_4469_ = lean_unsigned_to_nat(14u);
v___x_4470_ = lean_unsigned_to_nat(22u);
v___x_4471_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8));
v___x_4472_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7));
v___x_4473_ = l_mkPanicMessageWithDecl(v___x_4472_, v___x_4471_, v___x_4470_, v___x_4469_, v___x_4468_);
return v___x_4473_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12(void){
_start:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4478_; lean_object* v___x_4479_; lean_object* v___x_4480_; 
v___x_4475_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_4476_ = lean_unsigned_to_nat(22u);
v___x_4477_ = lean_unsigned_to_nat(602u);
v___x_4478_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11));
v___x_4479_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_4480_ = l_mkPanicMessageWithDecl(v___x_4479_, v___x_4478_, v___x_4477_, v___x_4476_, v___x_4475_);
return v___x_4480_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(lean_object* v_code_4481_, lean_object* v_decl_4482_, lean_object* v_k_4483_, lean_object* v___y_4484_, lean_object* v___y_4485_, lean_object* v___y_4486_, lean_object* v___y_4487_, lean_object* v___y_4488_, lean_object* v___y_4489_){
_start:
{
lean_object* v_fvarId_4491_; lean_object* v_value_4492_; lean_object* v_k_4494_; lean_object* v___y_4495_; lean_object* v___y_4496_; lean_object* v___y_4497_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___y_4500_; lean_object* v_k_4532_; lean_object* v___y_4533_; lean_object* v___y_4534_; lean_object* v___y_4535_; lean_object* v___y_4536_; lean_object* v___y_4537_; lean_object* v___y_4538_; lean_object* v___x_4567_; 
v_fvarId_4491_ = lean_ctor_get(v_decl_4482_, 0);
lean_inc_n(v_fvarId_4491_, 2);
v_value_4492_ = lean_ctor_get(v_decl_4482_, 3);
lean_inc(v_value_4492_);
v___x_4567_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4491_, v_k_4483_, v___y_4484_, v___y_4485_);
switch(lean_obj_tag(v_value_4492_))
{
case 4:
{
lean_object* v_a_4568_; lean_object* v___x_4570_; uint8_t v_isShared_4571_; uint8_t v_isSharedCheck_4610_; 
v_a_4568_ = lean_ctor_get(v___x_4567_, 0);
v_isSharedCheck_4610_ = !lean_is_exclusive(v___x_4567_);
if (v_isSharedCheck_4610_ == 0)
{
v___x_4570_ = v___x_4567_;
v_isShared_4571_ = v_isSharedCheck_4610_;
goto v_resetjp_4569_;
}
else
{
lean_inc(v_a_4568_);
lean_dec(v___x_4567_);
v___x_4570_ = lean_box(0);
v_isShared_4571_ = v_isSharedCheck_4610_;
goto v_resetjp_4569_;
}
v_resetjp_4569_:
{
lean_object* v_fvarId_4572_; lean_object* v_args_4573_; lean_object* v___x_4575_; 
v_fvarId_4572_ = lean_ctor_get(v_value_4492_, 0);
v_args_4573_ = lean_ctor_get(v_value_4492_, 1);
lean_inc(v_fvarId_4572_);
if (v_isShared_4571_ == 0)
{
lean_ctor_set_tag(v___x_4570_, 1);
lean_ctor_set(v___x_4570_, 0, v_fvarId_4572_);
v___x_4575_ = v___x_4570_;
goto v_reusejp_4574_;
}
else
{
lean_object* v_reuseFailAlloc_4609_; 
v_reuseFailAlloc_4609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4609_, 0, v_fvarId_4572_);
v___x_4575_ = v_reuseFailAlloc_4609_;
goto v_reusejp_4574_;
}
v_reusejp_4574_:
{
lean_object* v___x_4576_; lean_object* v___y_4578_; 
lean_inc_ref(v_args_4573_);
v___x_4576_ = lean_array_push(v_args_4573_, v___x_4575_);
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_decl_4581_; lean_object* v_k_4582_; size_t v___x_4583_; size_t v___x_4584_; uint8_t v___x_4585_; 
v_decl_4581_ = lean_ctor_get(v_code_4481_, 0);
v_k_4582_ = lean_ctor_get(v_code_4481_, 1);
v___x_4583_ = lean_ptr_addr(v_k_4582_);
v___x_4584_ = lean_ptr_addr(v_a_4568_);
v___x_4585_ = lean_usize_dec_eq(v___x_4583_, v___x_4584_);
if (v___x_4585_ == 0)
{
lean_object* v___x_4587_; uint8_t v_isShared_4588_; uint8_t v_isSharedCheck_4592_; 
v_isSharedCheck_4592_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4592_ == 0)
{
lean_object* v_unused_4593_; lean_object* v_unused_4594_; 
v_unused_4593_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4593_);
v_unused_4594_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4594_);
v___x_4587_ = v_code_4481_;
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
else
{
lean_dec(v_code_4481_);
v___x_4587_ = lean_box(0);
v_isShared_4588_ = v_isSharedCheck_4592_;
goto v_resetjp_4586_;
}
v_resetjp_4586_:
{
lean_object* v___x_4590_; 
if (v_isShared_4588_ == 0)
{
lean_ctor_set(v___x_4587_, 1, v_a_4568_);
lean_ctor_set(v___x_4587_, 0, v_decl_4482_);
v___x_4590_ = v___x_4587_;
goto v_reusejp_4589_;
}
else
{
lean_object* v_reuseFailAlloc_4591_; 
v_reuseFailAlloc_4591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4591_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4591_, 1, v_a_4568_);
v___x_4590_ = v_reuseFailAlloc_4591_;
goto v_reusejp_4589_;
}
v_reusejp_4589_:
{
v___y_4578_ = v___x_4590_;
goto v___jp_4577_;
}
}
}
else
{
size_t v___x_4595_; size_t v___x_4596_; uint8_t v___x_4597_; 
v___x_4595_ = lean_ptr_addr(v_decl_4581_);
v___x_4596_ = lean_ptr_addr(v_decl_4482_);
v___x_4597_ = lean_usize_dec_eq(v___x_4595_, v___x_4596_);
if (v___x_4597_ == 0)
{
lean_object* v___x_4599_; uint8_t v_isShared_4600_; uint8_t v_isSharedCheck_4604_; 
v_isSharedCheck_4604_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4604_ == 0)
{
lean_object* v_unused_4605_; lean_object* v_unused_4606_; 
v_unused_4605_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4605_);
v_unused_4606_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4606_);
v___x_4599_ = v_code_4481_;
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
else
{
lean_dec(v_code_4481_);
v___x_4599_ = lean_box(0);
v_isShared_4600_ = v_isSharedCheck_4604_;
goto v_resetjp_4598_;
}
v_resetjp_4598_:
{
lean_object* v___x_4602_; 
if (v_isShared_4600_ == 0)
{
lean_ctor_set(v___x_4599_, 1, v_a_4568_);
lean_ctor_set(v___x_4599_, 0, v_decl_4482_);
v___x_4602_ = v___x_4599_;
goto v_reusejp_4601_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4603_, 1, v_a_4568_);
v___x_4602_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4601_;
}
v_reusejp_4601_:
{
v___y_4578_ = v___x_4602_;
goto v___jp_4577_;
}
}
}
else
{
lean_dec(v_a_4568_);
lean_dec_ref(v_decl_4482_);
v___y_4578_ = v_code_4481_;
goto v___jp_4577_;
}
}
}
else
{
lean_object* v___x_4607_; lean_object* v___x_4608_; 
lean_dec(v_a_4568_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4607_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4608_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4607_);
v___y_4578_ = v___x_4608_;
goto v___jp_4577_;
}
v___jp_4577_:
{
lean_object* v___x_4579_; 
v___x_4579_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v___x_4576_, v___y_4578_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
lean_dec_ref(v___x_4576_);
if (lean_obj_tag(v___x_4579_) == 0)
{
lean_object* v_a_4580_; 
v_a_4580_ = lean_ctor_get(v___x_4579_, 0);
lean_inc(v_a_4580_);
lean_dec_ref_known(v___x_4579_, 1);
v_k_4494_ = v_a_4580_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
else
{
lean_dec_ref_known(v_value_4492_, 2);
lean_dec(v_fvarId_4491_);
return v___x_4579_;
}
}
}
}
}
case 5:
{
lean_object* v_a_4611_; lean_object* v_args_4612_; lean_object* v___y_4614_; 
v_a_4611_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4611_);
lean_dec_ref(v___x_4567_);
v_args_4612_ = lean_ctor_get(v_value_4492_, 1);
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_decl_4617_; lean_object* v_k_4618_; size_t v___x_4619_; size_t v___x_4620_; uint8_t v___x_4621_; 
v_decl_4617_ = lean_ctor_get(v_code_4481_, 0);
v_k_4618_ = lean_ctor_get(v_code_4481_, 1);
v___x_4619_ = lean_ptr_addr(v_k_4618_);
v___x_4620_ = lean_ptr_addr(v_a_4611_);
v___x_4621_ = lean_usize_dec_eq(v___x_4619_, v___x_4620_);
if (v___x_4621_ == 0)
{
lean_object* v___x_4623_; uint8_t v_isShared_4624_; uint8_t v_isSharedCheck_4628_; 
v_isSharedCheck_4628_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4628_ == 0)
{
lean_object* v_unused_4629_; lean_object* v_unused_4630_; 
v_unused_4629_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4629_);
v_unused_4630_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4630_);
v___x_4623_ = v_code_4481_;
v_isShared_4624_ = v_isSharedCheck_4628_;
goto v_resetjp_4622_;
}
else
{
lean_dec(v_code_4481_);
v___x_4623_ = lean_box(0);
v_isShared_4624_ = v_isSharedCheck_4628_;
goto v_resetjp_4622_;
}
v_resetjp_4622_:
{
lean_object* v___x_4626_; 
if (v_isShared_4624_ == 0)
{
lean_ctor_set(v___x_4623_, 1, v_a_4611_);
lean_ctor_set(v___x_4623_, 0, v_decl_4482_);
v___x_4626_ = v___x_4623_;
goto v_reusejp_4625_;
}
else
{
lean_object* v_reuseFailAlloc_4627_; 
v_reuseFailAlloc_4627_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4627_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4627_, 1, v_a_4611_);
v___x_4626_ = v_reuseFailAlloc_4627_;
goto v_reusejp_4625_;
}
v_reusejp_4625_:
{
v___y_4614_ = v___x_4626_;
goto v___jp_4613_;
}
}
}
else
{
size_t v___x_4631_; size_t v___x_4632_; uint8_t v___x_4633_; 
v___x_4631_ = lean_ptr_addr(v_decl_4617_);
v___x_4632_ = lean_ptr_addr(v_decl_4482_);
v___x_4633_ = lean_usize_dec_eq(v___x_4631_, v___x_4632_);
if (v___x_4633_ == 0)
{
lean_object* v___x_4635_; uint8_t v_isShared_4636_; uint8_t v_isSharedCheck_4640_; 
v_isSharedCheck_4640_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4640_ == 0)
{
lean_object* v_unused_4641_; lean_object* v_unused_4642_; 
v_unused_4641_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4641_);
v_unused_4642_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4642_);
v___x_4635_ = v_code_4481_;
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
else
{
lean_dec(v_code_4481_);
v___x_4635_ = lean_box(0);
v_isShared_4636_ = v_isSharedCheck_4640_;
goto v_resetjp_4634_;
}
v_resetjp_4634_:
{
lean_object* v___x_4638_; 
if (v_isShared_4636_ == 0)
{
lean_ctor_set(v___x_4635_, 1, v_a_4611_);
lean_ctor_set(v___x_4635_, 0, v_decl_4482_);
v___x_4638_ = v___x_4635_;
goto v_reusejp_4637_;
}
else
{
lean_object* v_reuseFailAlloc_4639_; 
v_reuseFailAlloc_4639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4639_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4639_, 1, v_a_4611_);
v___x_4638_ = v_reuseFailAlloc_4639_;
goto v_reusejp_4637_;
}
v_reusejp_4637_:
{
v___y_4614_ = v___x_4638_;
goto v___jp_4613_;
}
}
}
else
{
lean_dec(v_a_4611_);
lean_dec_ref(v_decl_4482_);
v___y_4614_ = v_code_4481_;
goto v___jp_4613_;
}
}
}
else
{
lean_object* v___x_4643_; lean_object* v___x_4644_; 
lean_dec(v_a_4611_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4643_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4644_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4643_);
v___y_4614_ = v___x_4644_;
goto v___jp_4613_;
}
v___jp_4613_:
{
lean_object* v___x_4615_; 
v___x_4615_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4612_, v___y_4614_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
if (lean_obj_tag(v___x_4615_) == 0)
{
lean_object* v_a_4616_; 
v_a_4616_ = lean_ctor_get(v___x_4615_, 0);
lean_inc(v_a_4616_);
lean_dec_ref_known(v___x_4615_, 1);
v_k_4494_ = v_a_4616_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
else
{
lean_dec_ref_known(v_value_4492_, 2);
lean_dec(v_fvarId_4491_);
return v___x_4615_;
}
}
}
case 6:
{
lean_object* v_a_4645_; lean_object* v_var_4646_; lean_object* v___x_4647_; lean_object* v_a_4648_; lean_object* v___x_4649_; lean_object* v_borrows_4650_; uint8_t v___x_4651_; 
v_a_4645_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4645_);
lean_dec_ref(v___x_4567_);
v_var_4646_ = lean_ctor_get(v_value_4492_, 1);
lean_inc(v_var_4646_);
v___x_4647_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4646_, v_a_4645_, v___y_4484_, v___y_4485_);
v_a_4648_ = lean_ctor_get(v___x_4647_, 0);
lean_inc(v_a_4648_);
lean_dec_ref(v___x_4647_);
v___x_4649_ = lean_st_ref_get(v___y_4485_);
v_borrows_4650_ = lean_ctor_get(v___x_4649_, 1);
lean_inc_ref(v_borrows_4650_);
lean_dec(v___x_4649_);
v___x_4651_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4650_, v_fvarId_4491_);
lean_dec_ref(v_borrows_4650_);
if (v___x_4651_ == 0)
{
lean_object* v_varMap_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; uint8_t v_isDefiniteRef_4655_; lean_object* v___x_4656_; uint8_t v___y_4658_; 
v_varMap_4652_ = lean_ctor_get(v___y_4484_, 2);
v___x_4653_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_4491_);
lean_inc(v_varMap_4652_);
v___x_4654_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_4653_, v_varMap_4652_, v_fvarId_4491_);
v_isDefiniteRef_4655_ = lean_ctor_get_uint8(v___x_4654_, sizeof(void*)*2 + 1);
v___x_4656_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_4655_ == 0)
{
uint8_t v___x_4661_; 
v___x_4661_ = 1;
v___y_4658_ = v___x_4661_;
goto v___jp_4657_;
}
else
{
v___y_4658_ = v___x_4651_;
goto v___jp_4657_;
}
v___jp_4657_:
{
uint8_t v_persistent_4659_; lean_object* v___x_4660_; 
v_persistent_4659_ = lean_ctor_get_uint8(v___x_4654_, sizeof(void*)*2 + 2);
lean_dec(v___x_4654_);
lean_inc(v_fvarId_4491_);
v___x_4660_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_4660_, 0, v_fvarId_4491_);
lean_ctor_set(v___x_4660_, 1, v___x_4656_);
lean_ctor_set(v___x_4660_, 2, v_a_4648_);
lean_ctor_set_uint8(v___x_4660_, sizeof(void*)*3, v___y_4658_);
lean_ctor_set_uint8(v___x_4660_, sizeof(void*)*3 + 1, v_persistent_4659_);
v_k_4532_ = v___x_4660_;
v___y_4533_ = v___y_4484_;
v___y_4534_ = v___y_4485_;
v___y_4535_ = v___y_4486_;
v___y_4536_ = v___y_4487_;
v___y_4537_ = v___y_4488_;
v___y_4538_ = v___y_4489_;
goto v___jp_4531_;
}
}
else
{
v_k_4532_ = v_a_4648_;
v___y_4533_ = v___y_4484_;
v___y_4534_ = v___y_4485_;
v___y_4535_ = v___y_4486_;
v___y_4536_ = v___y_4487_;
v___y_4537_ = v___y_4488_;
v___y_4538_ = v___y_4489_;
goto v___jp_4531_;
}
}
case 7:
{
lean_object* v_a_4662_; lean_object* v_var_4663_; lean_object* v___x_4664_; 
v_a_4662_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4662_);
lean_dec_ref(v___x_4567_);
v_var_4663_ = lean_ctor_get(v_value_4492_, 1);
lean_inc(v_var_4663_);
v___x_4664_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4663_, v_a_4662_, v___y_4484_, v___y_4485_);
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_a_4665_; lean_object* v_decl_4666_; lean_object* v_k_4667_; size_t v___x_4668_; size_t v___x_4669_; uint8_t v___x_4670_; 
v_a_4665_ = lean_ctor_get(v___x_4664_, 0);
lean_inc(v_a_4665_);
lean_dec_ref(v___x_4664_);
v_decl_4666_ = lean_ctor_get(v_code_4481_, 0);
v_k_4667_ = lean_ctor_get(v_code_4481_, 1);
v___x_4668_ = lean_ptr_addr(v_k_4667_);
v___x_4669_ = lean_ptr_addr(v_a_4665_);
v___x_4670_ = lean_usize_dec_eq(v___x_4668_, v___x_4669_);
if (v___x_4670_ == 0)
{
lean_object* v___x_4672_; uint8_t v_isShared_4673_; uint8_t v_isSharedCheck_4677_; 
v_isSharedCheck_4677_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4677_ == 0)
{
lean_object* v_unused_4678_; lean_object* v_unused_4679_; 
v_unused_4678_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4678_);
v_unused_4679_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4679_);
v___x_4672_ = v_code_4481_;
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
else
{
lean_dec(v_code_4481_);
v___x_4672_ = lean_box(0);
v_isShared_4673_ = v_isSharedCheck_4677_;
goto v_resetjp_4671_;
}
v_resetjp_4671_:
{
lean_object* v___x_4675_; 
if (v_isShared_4673_ == 0)
{
lean_ctor_set(v___x_4672_, 1, v_a_4665_);
lean_ctor_set(v___x_4672_, 0, v_decl_4482_);
v___x_4675_ = v___x_4672_;
goto v_reusejp_4674_;
}
else
{
lean_object* v_reuseFailAlloc_4676_; 
v_reuseFailAlloc_4676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4676_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4676_, 1, v_a_4665_);
v___x_4675_ = v_reuseFailAlloc_4676_;
goto v_reusejp_4674_;
}
v_reusejp_4674_:
{
v_k_4494_ = v___x_4675_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
size_t v___x_4680_; size_t v___x_4681_; uint8_t v___x_4682_; 
v___x_4680_ = lean_ptr_addr(v_decl_4666_);
v___x_4681_ = lean_ptr_addr(v_decl_4482_);
v___x_4682_ = lean_usize_dec_eq(v___x_4680_, v___x_4681_);
if (v___x_4682_ == 0)
{
lean_object* v___x_4684_; uint8_t v_isShared_4685_; uint8_t v_isSharedCheck_4689_; 
v_isSharedCheck_4689_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4689_ == 0)
{
lean_object* v_unused_4690_; lean_object* v_unused_4691_; 
v_unused_4690_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4690_);
v_unused_4691_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4691_);
v___x_4684_ = v_code_4481_;
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
else
{
lean_dec(v_code_4481_);
v___x_4684_ = lean_box(0);
v_isShared_4685_ = v_isSharedCheck_4689_;
goto v_resetjp_4683_;
}
v_resetjp_4683_:
{
lean_object* v___x_4687_; 
if (v_isShared_4685_ == 0)
{
lean_ctor_set(v___x_4684_, 1, v_a_4665_);
lean_ctor_set(v___x_4684_, 0, v_decl_4482_);
v___x_4687_ = v___x_4684_;
goto v_reusejp_4686_;
}
else
{
lean_object* v_reuseFailAlloc_4688_; 
v_reuseFailAlloc_4688_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4688_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4688_, 1, v_a_4665_);
v___x_4687_ = v_reuseFailAlloc_4688_;
goto v_reusejp_4686_;
}
v_reusejp_4686_:
{
v_k_4494_ = v___x_4687_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_dec(v_a_4665_);
lean_dec_ref(v_decl_4482_);
v_k_4494_ = v_code_4481_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_object* v___x_4692_; lean_object* v___x_4693_; 
lean_dec_ref(v___x_4664_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4692_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4693_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4692_);
v_k_4494_ = v___x_4693_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
case 8:
{
lean_object* v_a_4694_; lean_object* v_var_4695_; lean_object* v___x_4696_; 
v_a_4694_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4694_);
lean_dec_ref(v___x_4567_);
v_var_4695_ = lean_ctor_get(v_value_4492_, 2);
lean_inc(v_var_4695_);
v___x_4696_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4695_, v_a_4694_, v___y_4484_, v___y_4485_);
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_a_4697_; lean_object* v_decl_4698_; lean_object* v_k_4699_; size_t v___x_4700_; size_t v___x_4701_; uint8_t v___x_4702_; 
v_a_4697_ = lean_ctor_get(v___x_4696_, 0);
lean_inc(v_a_4697_);
lean_dec_ref(v___x_4696_);
v_decl_4698_ = lean_ctor_get(v_code_4481_, 0);
v_k_4699_ = lean_ctor_get(v_code_4481_, 1);
v___x_4700_ = lean_ptr_addr(v_k_4699_);
v___x_4701_ = lean_ptr_addr(v_a_4697_);
v___x_4702_ = lean_usize_dec_eq(v___x_4700_, v___x_4701_);
if (v___x_4702_ == 0)
{
lean_object* v___x_4704_; uint8_t v_isShared_4705_; uint8_t v_isSharedCheck_4709_; 
v_isSharedCheck_4709_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4709_ == 0)
{
lean_object* v_unused_4710_; lean_object* v_unused_4711_; 
v_unused_4710_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4710_);
v_unused_4711_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4711_);
v___x_4704_ = v_code_4481_;
v_isShared_4705_ = v_isSharedCheck_4709_;
goto v_resetjp_4703_;
}
else
{
lean_dec(v_code_4481_);
v___x_4704_ = lean_box(0);
v_isShared_4705_ = v_isSharedCheck_4709_;
goto v_resetjp_4703_;
}
v_resetjp_4703_:
{
lean_object* v___x_4707_; 
if (v_isShared_4705_ == 0)
{
lean_ctor_set(v___x_4704_, 1, v_a_4697_);
lean_ctor_set(v___x_4704_, 0, v_decl_4482_);
v___x_4707_ = v___x_4704_;
goto v_reusejp_4706_;
}
else
{
lean_object* v_reuseFailAlloc_4708_; 
v_reuseFailAlloc_4708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4708_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4708_, 1, v_a_4697_);
v___x_4707_ = v_reuseFailAlloc_4708_;
goto v_reusejp_4706_;
}
v_reusejp_4706_:
{
v_k_4494_ = v___x_4707_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
size_t v___x_4712_; size_t v___x_4713_; uint8_t v___x_4714_; 
v___x_4712_ = lean_ptr_addr(v_decl_4698_);
v___x_4713_ = lean_ptr_addr(v_decl_4482_);
v___x_4714_ = lean_usize_dec_eq(v___x_4712_, v___x_4713_);
if (v___x_4714_ == 0)
{
lean_object* v___x_4716_; uint8_t v_isShared_4717_; uint8_t v_isSharedCheck_4721_; 
v_isSharedCheck_4721_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4721_ == 0)
{
lean_object* v_unused_4722_; lean_object* v_unused_4723_; 
v_unused_4722_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4722_);
v_unused_4723_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4723_);
v___x_4716_ = v_code_4481_;
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
else
{
lean_dec(v_code_4481_);
v___x_4716_ = lean_box(0);
v_isShared_4717_ = v_isSharedCheck_4721_;
goto v_resetjp_4715_;
}
v_resetjp_4715_:
{
lean_object* v___x_4719_; 
if (v_isShared_4717_ == 0)
{
lean_ctor_set(v___x_4716_, 1, v_a_4697_);
lean_ctor_set(v___x_4716_, 0, v_decl_4482_);
v___x_4719_ = v___x_4716_;
goto v_reusejp_4718_;
}
else
{
lean_object* v_reuseFailAlloc_4720_; 
v_reuseFailAlloc_4720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4720_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4720_, 1, v_a_4697_);
v___x_4719_ = v_reuseFailAlloc_4720_;
goto v_reusejp_4718_;
}
v_reusejp_4718_:
{
v_k_4494_ = v___x_4719_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_dec(v_a_4697_);
lean_dec_ref(v_decl_4482_);
v_k_4494_ = v_code_4481_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_object* v___x_4724_; lean_object* v___x_4725_; 
lean_dec_ref(v___x_4696_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4724_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4725_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4724_);
v_k_4494_ = v___x_4725_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
case 9:
{
lean_object* v_a_4726_; lean_object* v_fn_4727_; lean_object* v_args_4728_; lean_object* v___y_4730_; lean_object* v___y_4731_; lean_object* v___y_4732_; lean_object* v___y_4733_; lean_object* v___y_4734_; lean_object* v___y_4735_; lean_object* v___y_4736_; lean_object* v___y_4737_; lean_object* v___x_4740_; 
v_a_4726_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4726_);
lean_dec_ref(v___x_4567_);
v_fn_4727_ = lean_ctor_get(v_value_4492_, 0);
v_args_4728_ = lean_ctor_get(v_value_4492_, 1);
lean_inc(v_fn_4727_);
v___x_4740_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_4727_, v___y_4489_);
if (lean_obj_tag(v___x_4740_) == 0)
{
lean_object* v_a_4741_; uint8_t v___x_4742_; lean_object* v___y_4744_; lean_object* v___y_4745_; lean_object* v_value_4746_; lean_object* v___y_4747_; lean_object* v___y_4748_; lean_object* v___y_4749_; lean_object* v___y_4750_; lean_object* v___y_4751_; lean_object* v___y_4752_; lean_object* v___y_4792_; lean_object* v___y_4793_; lean_object* v___y_4794_; uint8_t v___y_4795_; lean_object* v___y_4800_; lean_object* v___y_4801_; lean_object* v___y_4802_; uint8_t v___y_4803_; uint8_t v___y_4804_; lean_object* v___y_4812_; lean_object* v___y_4813_; uint8_t v___y_4814_; lean_object* v___y_4815_; uint8_t v___y_4816_; uint8_t v___y_4817_; lean_object* v___y_4825_; 
v_a_4741_ = lean_ctor_get(v___x_4740_, 0);
lean_inc(v_a_4741_);
lean_dec_ref_known(v___x_4740_, 1);
v___x_4742_ = 1;
if (lean_obj_tag(v_a_4741_) == 0)
{
lean_object* v___x_4841_; lean_object* v___x_4842_; 
v___x_4841_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10);
v___x_4842_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(v___x_4841_);
v___y_4825_ = v___x_4842_;
goto v___jp_4824_;
}
else
{
lean_object* v_val_4843_; 
v_val_4843_ = lean_ctor_get(v_a_4741_, 0);
lean_inc(v_val_4843_);
lean_dec_ref_known(v_a_4741_, 1);
v___y_4825_ = v_val_4843_;
goto v___jp_4824_;
}
v___jp_4743_:
{
lean_object* v___x_4753_; 
v___x_4753_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_4742_, v_decl_4482_, v_value_4746_, v___y_4750_);
if (lean_obj_tag(v___x_4753_) == 0)
{
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_a_4754_; lean_object* v_decl_4755_; lean_object* v_k_4756_; size_t v___x_4757_; size_t v___x_4758_; uint8_t v___x_4759_; 
v_a_4754_ = lean_ctor_get(v___x_4753_, 0);
lean_inc(v_a_4754_);
lean_dec_ref_known(v___x_4753_, 1);
v_decl_4755_ = lean_ctor_get(v_code_4481_, 0);
v_k_4756_ = lean_ctor_get(v_code_4481_, 1);
v___x_4757_ = lean_ptr_addr(v_k_4756_);
v___x_4758_ = lean_ptr_addr(v___y_4745_);
v___x_4759_ = lean_usize_dec_eq(v___x_4757_, v___x_4758_);
if (v___x_4759_ == 0)
{
lean_object* v___x_4761_; uint8_t v_isShared_4762_; uint8_t v_isSharedCheck_4766_; 
v_isSharedCheck_4766_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4766_ == 0)
{
lean_object* v_unused_4767_; lean_object* v_unused_4768_; 
v_unused_4767_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4767_);
v_unused_4768_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4768_);
v___x_4761_ = v_code_4481_;
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
else
{
lean_dec(v_code_4481_);
v___x_4761_ = lean_box(0);
v_isShared_4762_ = v_isSharedCheck_4766_;
goto v_resetjp_4760_;
}
v_resetjp_4760_:
{
lean_object* v___x_4764_; 
if (v_isShared_4762_ == 0)
{
lean_ctor_set(v___x_4761_, 1, v___y_4745_);
lean_ctor_set(v___x_4761_, 0, v_a_4754_);
v___x_4764_ = v___x_4761_;
goto v_reusejp_4763_;
}
else
{
lean_object* v_reuseFailAlloc_4765_; 
v_reuseFailAlloc_4765_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4765_, 0, v_a_4754_);
lean_ctor_set(v_reuseFailAlloc_4765_, 1, v___y_4745_);
v___x_4764_ = v_reuseFailAlloc_4765_;
goto v_reusejp_4763_;
}
v_reusejp_4763_:
{
v___y_4730_ = v___y_4749_;
v___y_4731_ = v___y_4744_;
v___y_4732_ = v___y_4748_;
v___y_4733_ = v___y_4751_;
v___y_4734_ = v___y_4750_;
v___y_4735_ = v___y_4747_;
v___y_4736_ = v___y_4752_;
v___y_4737_ = v___x_4764_;
goto v___jp_4729_;
}
}
}
else
{
size_t v___x_4769_; size_t v___x_4770_; uint8_t v___x_4771_; 
v___x_4769_ = lean_ptr_addr(v_decl_4755_);
v___x_4770_ = lean_ptr_addr(v_a_4754_);
v___x_4771_ = lean_usize_dec_eq(v___x_4769_, v___x_4770_);
if (v___x_4771_ == 0)
{
lean_object* v___x_4773_; uint8_t v_isShared_4774_; uint8_t v_isSharedCheck_4778_; 
v_isSharedCheck_4778_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4778_ == 0)
{
lean_object* v_unused_4779_; lean_object* v_unused_4780_; 
v_unused_4779_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4779_);
v_unused_4780_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4780_);
v___x_4773_ = v_code_4481_;
v_isShared_4774_ = v_isSharedCheck_4778_;
goto v_resetjp_4772_;
}
else
{
lean_dec(v_code_4481_);
v___x_4773_ = lean_box(0);
v_isShared_4774_ = v_isSharedCheck_4778_;
goto v_resetjp_4772_;
}
v_resetjp_4772_:
{
lean_object* v___x_4776_; 
if (v_isShared_4774_ == 0)
{
lean_ctor_set(v___x_4773_, 1, v___y_4745_);
lean_ctor_set(v___x_4773_, 0, v_a_4754_);
v___x_4776_ = v___x_4773_;
goto v_reusejp_4775_;
}
else
{
lean_object* v_reuseFailAlloc_4777_; 
v_reuseFailAlloc_4777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4777_, 0, v_a_4754_);
lean_ctor_set(v_reuseFailAlloc_4777_, 1, v___y_4745_);
v___x_4776_ = v_reuseFailAlloc_4777_;
goto v_reusejp_4775_;
}
v_reusejp_4775_:
{
v___y_4730_ = v___y_4749_;
v___y_4731_ = v___y_4744_;
v___y_4732_ = v___y_4748_;
v___y_4733_ = v___y_4751_;
v___y_4734_ = v___y_4750_;
v___y_4735_ = v___y_4747_;
v___y_4736_ = v___y_4752_;
v___y_4737_ = v___x_4776_;
goto v___jp_4729_;
}
}
}
else
{
lean_dec(v_a_4754_);
lean_dec_ref(v___y_4745_);
v___y_4730_ = v___y_4749_;
v___y_4731_ = v___y_4744_;
v___y_4732_ = v___y_4748_;
v___y_4733_ = v___y_4751_;
v___y_4734_ = v___y_4750_;
v___y_4735_ = v___y_4747_;
v___y_4736_ = v___y_4752_;
v___y_4737_ = v_code_4481_;
goto v___jp_4729_;
}
}
}
else
{
lean_object* v___x_4781_; lean_object* v___x_4782_; 
lean_dec_ref_known(v___x_4753_, 1);
lean_dec_ref(v___y_4745_);
lean_dec_ref(v_code_4481_);
v___x_4781_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4782_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4781_);
v___y_4730_ = v___y_4749_;
v___y_4731_ = v___y_4744_;
v___y_4732_ = v___y_4748_;
v___y_4733_ = v___y_4751_;
v___y_4734_ = v___y_4750_;
v___y_4735_ = v___y_4747_;
v___y_4736_ = v___y_4752_;
v___y_4737_ = v___x_4782_;
goto v___jp_4729_;
}
}
else
{
lean_object* v_a_4783_; lean_object* v___x_4785_; uint8_t v_isShared_4786_; uint8_t v_isSharedCheck_4790_; 
lean_dec_ref(v___y_4745_);
lean_dec_ref(v___y_4744_);
lean_dec_ref_known(v_value_4492_, 2);
lean_dec(v_fvarId_4491_);
lean_dec_ref(v_code_4481_);
v_a_4783_ = lean_ctor_get(v___x_4753_, 0);
v_isSharedCheck_4790_ = !lean_is_exclusive(v___x_4753_);
if (v_isSharedCheck_4790_ == 0)
{
v___x_4785_ = v___x_4753_;
v_isShared_4786_ = v_isSharedCheck_4790_;
goto v_resetjp_4784_;
}
else
{
lean_inc(v_a_4783_);
lean_dec(v___x_4753_);
v___x_4785_ = lean_box(0);
v_isShared_4786_ = v_isSharedCheck_4790_;
goto v_resetjp_4784_;
}
v_resetjp_4784_:
{
lean_object* v___x_4788_; 
if (v_isShared_4786_ == 0)
{
v___x_4788_ = v___x_4785_;
goto v_reusejp_4787_;
}
else
{
lean_object* v_reuseFailAlloc_4789_; 
v_reuseFailAlloc_4789_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4789_, 0, v_a_4783_);
v___x_4788_ = v_reuseFailAlloc_4789_;
goto v_reusejp_4787_;
}
v_reusejp_4787_:
{
return v___x_4788_;
}
}
}
}
v___jp_4791_:
{
if (v___y_4795_ == 0)
{
lean_inc_ref(v_value_4492_);
v___y_4744_ = v___y_4792_;
v___y_4745_ = v___y_4794_;
v_value_4746_ = v_value_4492_;
v___y_4747_ = v___y_4484_;
v___y_4748_ = v___y_4485_;
v___y_4749_ = v___y_4486_;
v___y_4750_ = v___y_4487_;
v___y_4751_ = v___y_4488_;
v___y_4752_ = v___y_4489_;
goto v___jp_4743_;
}
else
{
lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; 
v___x_4796_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3));
lean_inc_ref(v___y_4793_);
v___x_4797_ = l_Lean_Name_mkStr2(v___y_4793_, v___x_4796_);
lean_inc_ref(v_args_4728_);
v___x_4798_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4797_);
lean_ctor_set(v___x_4798_, 1, v_args_4728_);
v___y_4744_ = v___y_4792_;
v___y_4745_ = v___y_4794_;
v_value_4746_ = v___x_4798_;
v___y_4747_ = v___y_4484_;
v___y_4748_ = v___y_4485_;
v___y_4749_ = v___y_4486_;
v___y_4750_ = v___y_4487_;
v___y_4751_ = v___y_4488_;
v___y_4752_ = v___y_4489_;
goto v___jp_4743_;
}
}
v___jp_4799_:
{
if (v___y_4804_ == 0)
{
lean_object* v___x_4805_; lean_object* v___x_4806_; uint8_t v___x_4807_; 
v___x_4805_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3));
lean_inc_ref(v___y_4801_);
v___x_4806_ = l_Lean_Name_mkStr2(v___y_4801_, v___x_4805_);
v___x_4807_ = lean_name_eq(v_fn_4727_, v___x_4806_);
lean_dec(v___x_4806_);
if (v___x_4807_ == 0)
{
v___y_4792_ = v___y_4800_;
v___y_4793_ = v___y_4801_;
v___y_4794_ = v___y_4802_;
v___y_4795_ = v___x_4807_;
goto v___jp_4791_;
}
else
{
v___y_4792_ = v___y_4800_;
v___y_4793_ = v___y_4801_;
v___y_4794_ = v___y_4802_;
v___y_4795_ = v___y_4803_;
goto v___jp_4791_;
}
}
else
{
lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; 
v___x_4808_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4));
lean_inc_ref(v___y_4801_);
v___x_4809_ = l_Lean_Name_mkStr2(v___y_4801_, v___x_4808_);
lean_inc_ref(v_args_4728_);
v___x_4810_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4809_);
lean_ctor_set(v___x_4810_, 1, v_args_4728_);
v___y_4744_ = v___y_4800_;
v___y_4745_ = v___y_4802_;
v_value_4746_ = v___x_4810_;
v___y_4747_ = v___y_4484_;
v___y_4748_ = v___y_4485_;
v___y_4749_ = v___y_4486_;
v___y_4750_ = v___y_4487_;
v___y_4751_ = v___y_4488_;
v___y_4752_ = v___y_4489_;
goto v___jp_4743_;
}
}
v___jp_4811_:
{
if (v___y_4817_ == 0)
{
lean_object* v___x_4818_; lean_object* v___x_4819_; uint8_t v___x_4820_; 
v___x_4818_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2));
lean_inc_ref(v___y_4813_);
v___x_4819_ = l_Lean_Name_mkStr2(v___y_4813_, v___x_4818_);
v___x_4820_ = lean_name_eq(v_fn_4727_, v___x_4819_);
lean_dec(v___x_4819_);
if (v___x_4820_ == 0)
{
v___y_4800_ = v___y_4812_;
v___y_4801_ = v___y_4813_;
v___y_4802_ = v___y_4815_;
v___y_4803_ = v___y_4816_;
v___y_4804_ = v___x_4820_;
goto v___jp_4799_;
}
else
{
v___y_4800_ = v___y_4812_;
v___y_4801_ = v___y_4813_;
v___y_4802_ = v___y_4815_;
v___y_4803_ = v___y_4816_;
v___y_4804_ = v___y_4814_;
goto v___jp_4799_;
}
}
else
{
lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; 
v___x_4821_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5));
lean_inc_ref(v___y_4813_);
v___x_4822_ = l_Lean_Name_mkStr2(v___y_4813_, v___x_4821_);
lean_inc_ref(v_args_4728_);
v___x_4823_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4823_, 0, v___x_4822_);
lean_ctor_set(v___x_4823_, 1, v_args_4728_);
v___y_4744_ = v___y_4812_;
v___y_4745_ = v___y_4815_;
v_value_4746_ = v___x_4823_;
v___y_4747_ = v___y_4484_;
v___y_4748_ = v___y_4485_;
v___y_4749_ = v___y_4486_;
v___y_4750_ = v___y_4487_;
v___y_4751_ = v___y_4488_;
v___y_4752_ = v___y_4489_;
goto v___jp_4743_;
}
}
v___jp_4824_:
{
lean_object* v_params_4826_; lean_object* v___x_4827_; 
v_params_4826_ = lean_ctor_get(v___y_4825_, 3);
lean_inc_ref_n(v_params_4826_, 2);
lean_dec_ref(v___y_4825_);
v___x_4827_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(v_args_4728_, v_params_4826_, v_a_4726_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
if (lean_obj_tag(v___x_4827_) == 0)
{
lean_object* v_a_4828_; lean_object* v___x_4829_; lean_object* v_borrows_4830_; uint8_t v___x_4831_; lean_object* v___x_4832_; lean_object* v_borrows_4833_; uint8_t v___x_4834_; lean_object* v___x_4835_; lean_object* v_borrows_4836_; uint8_t v___x_4837_; lean_object* v___x_4838_; lean_object* v___x_4839_; uint8_t v___x_4840_; 
v_a_4828_ = lean_ctor_get(v___x_4827_, 0);
lean_inc(v_a_4828_);
lean_dec_ref_known(v___x_4827_, 1);
v___x_4829_ = lean_st_ref_get(v___y_4485_);
v_borrows_4830_ = lean_ctor_get(v___x_4829_, 1);
lean_inc_ref(v_borrows_4830_);
lean_dec(v___x_4829_);
v___x_4831_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4830_, v_fvarId_4491_);
lean_dec_ref(v_borrows_4830_);
v___x_4832_ = lean_st_ref_get(v___y_4485_);
v_borrows_4833_ = lean_ctor_get(v___x_4832_, 1);
lean_inc_ref(v_borrows_4833_);
lean_dec(v___x_4832_);
v___x_4834_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4833_, v_fvarId_4491_);
lean_dec_ref(v_borrows_4833_);
v___x_4835_ = lean_st_ref_get(v___y_4485_);
v_borrows_4836_ = lean_ctor_get(v___x_4835_, 1);
lean_inc_ref(v_borrows_4836_);
lean_dec(v___x_4835_);
v___x_4837_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4836_, v_fvarId_4491_);
lean_dec_ref(v_borrows_4836_);
v___x_4838_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0));
v___x_4839_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6));
v___x_4840_ = lean_name_eq(v_fn_4727_, v___x_4839_);
if (v___x_4840_ == 0)
{
v___y_4812_ = v_params_4826_;
v___y_4813_ = v___x_4838_;
v___y_4814_ = v___x_4834_;
v___y_4815_ = v_a_4828_;
v___y_4816_ = v___x_4837_;
v___y_4817_ = v___x_4840_;
goto v___jp_4811_;
}
else
{
v___y_4812_ = v_params_4826_;
v___y_4813_ = v___x_4838_;
v___y_4814_ = v___x_4834_;
v___y_4815_ = v_a_4828_;
v___y_4816_ = v___x_4837_;
v___y_4817_ = v___x_4831_;
goto v___jp_4811_;
}
}
else
{
lean_dec_ref(v_params_4826_);
lean_dec_ref_known(v_value_4492_, 2);
lean_dec(v_fvarId_4491_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
return v___x_4827_;
}
}
}
else
{
lean_object* v_a_4844_; lean_object* v___x_4846_; uint8_t v_isShared_4847_; uint8_t v_isSharedCheck_4851_; 
lean_dec_ref_known(v_value_4492_, 2);
lean_dec(v_a_4726_);
lean_dec(v_fvarId_4491_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v_a_4844_ = lean_ctor_get(v___x_4740_, 0);
v_isSharedCheck_4851_ = !lean_is_exclusive(v___x_4740_);
if (v_isSharedCheck_4851_ == 0)
{
v___x_4846_ = v___x_4740_;
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
else
{
lean_inc(v_a_4844_);
lean_dec(v___x_4740_);
v___x_4846_ = lean_box(0);
v_isShared_4847_ = v_isSharedCheck_4851_;
goto v_resetjp_4845_;
}
v_resetjp_4845_:
{
lean_object* v___x_4849_; 
if (v_isShared_4847_ == 0)
{
v___x_4849_ = v___x_4846_;
goto v_reusejp_4848_;
}
else
{
lean_object* v_reuseFailAlloc_4850_; 
v_reuseFailAlloc_4850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4850_, 0, v_a_4844_);
v___x_4849_ = v_reuseFailAlloc_4850_;
goto v_reusejp_4848_;
}
v_reusejp_4848_:
{
return v___x_4849_;
}
}
}
v___jp_4729_:
{
lean_object* v___x_4738_; 
v___x_4738_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_4728_, v___y_4731_, v___y_4737_, v___y_4735_, v___y_4732_, v___y_4730_, v___y_4734_, v___y_4733_, v___y_4736_);
if (lean_obj_tag(v___x_4738_) == 0)
{
lean_object* v_a_4739_; 
v_a_4739_ = lean_ctor_get(v___x_4738_, 0);
lean_inc(v_a_4739_);
lean_dec_ref_known(v___x_4738_, 1);
v_k_4494_ = v_a_4739_;
v___y_4495_ = v___y_4735_;
v___y_4496_ = v___y_4732_;
v___y_4497_ = v___y_4730_;
v___y_4498_ = v___y_4734_;
v___y_4499_ = v___y_4733_;
v___y_4500_ = v___y_4736_;
goto v___jp_4493_;
}
else
{
lean_dec_ref_known(v_value_4492_, 2);
lean_dec(v_fvarId_4491_);
return v___x_4738_;
}
}
}
case 10:
{
lean_object* v_a_4852_; lean_object* v_args_4853_; lean_object* v___y_4855_; 
v_a_4852_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4852_);
lean_dec_ref(v___x_4567_);
v_args_4853_ = lean_ctor_get(v_value_4492_, 1);
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_decl_4858_; lean_object* v_k_4859_; size_t v___x_4860_; size_t v___x_4861_; uint8_t v___x_4862_; 
v_decl_4858_ = lean_ctor_get(v_code_4481_, 0);
v_k_4859_ = lean_ctor_get(v_code_4481_, 1);
v___x_4860_ = lean_ptr_addr(v_k_4859_);
v___x_4861_ = lean_ptr_addr(v_a_4852_);
v___x_4862_ = lean_usize_dec_eq(v___x_4860_, v___x_4861_);
if (v___x_4862_ == 0)
{
lean_object* v___x_4864_; uint8_t v_isShared_4865_; uint8_t v_isSharedCheck_4869_; 
v_isSharedCheck_4869_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4869_ == 0)
{
lean_object* v_unused_4870_; lean_object* v_unused_4871_; 
v_unused_4870_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4870_);
v_unused_4871_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4871_);
v___x_4864_ = v_code_4481_;
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
else
{
lean_dec(v_code_4481_);
v___x_4864_ = lean_box(0);
v_isShared_4865_ = v_isSharedCheck_4869_;
goto v_resetjp_4863_;
}
v_resetjp_4863_:
{
lean_object* v___x_4867_; 
if (v_isShared_4865_ == 0)
{
lean_ctor_set(v___x_4864_, 1, v_a_4852_);
lean_ctor_set(v___x_4864_, 0, v_decl_4482_);
v___x_4867_ = v___x_4864_;
goto v_reusejp_4866_;
}
else
{
lean_object* v_reuseFailAlloc_4868_; 
v_reuseFailAlloc_4868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4868_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4868_, 1, v_a_4852_);
v___x_4867_ = v_reuseFailAlloc_4868_;
goto v_reusejp_4866_;
}
v_reusejp_4866_:
{
v___y_4855_ = v___x_4867_;
goto v___jp_4854_;
}
}
}
else
{
size_t v___x_4872_; size_t v___x_4873_; uint8_t v___x_4874_; 
v___x_4872_ = lean_ptr_addr(v_decl_4858_);
v___x_4873_ = lean_ptr_addr(v_decl_4482_);
v___x_4874_ = lean_usize_dec_eq(v___x_4872_, v___x_4873_);
if (v___x_4874_ == 0)
{
lean_object* v___x_4876_; uint8_t v_isShared_4877_; uint8_t v_isSharedCheck_4881_; 
v_isSharedCheck_4881_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4881_ == 0)
{
lean_object* v_unused_4882_; lean_object* v_unused_4883_; 
v_unused_4882_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4882_);
v_unused_4883_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4883_);
v___x_4876_ = v_code_4481_;
v_isShared_4877_ = v_isSharedCheck_4881_;
goto v_resetjp_4875_;
}
else
{
lean_dec(v_code_4481_);
v___x_4876_ = lean_box(0);
v_isShared_4877_ = v_isSharedCheck_4881_;
goto v_resetjp_4875_;
}
v_resetjp_4875_:
{
lean_object* v___x_4879_; 
if (v_isShared_4877_ == 0)
{
lean_ctor_set(v___x_4876_, 1, v_a_4852_);
lean_ctor_set(v___x_4876_, 0, v_decl_4482_);
v___x_4879_ = v___x_4876_;
goto v_reusejp_4878_;
}
else
{
lean_object* v_reuseFailAlloc_4880_; 
v_reuseFailAlloc_4880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4880_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4880_, 1, v_a_4852_);
v___x_4879_ = v_reuseFailAlloc_4880_;
goto v_reusejp_4878_;
}
v_reusejp_4878_:
{
v___y_4855_ = v___x_4879_;
goto v___jp_4854_;
}
}
}
else
{
lean_dec(v_a_4852_);
lean_dec_ref(v_decl_4482_);
v___y_4855_ = v_code_4481_;
goto v___jp_4854_;
}
}
}
else
{
lean_object* v___x_4884_; lean_object* v___x_4885_; 
lean_dec(v_a_4852_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4884_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4885_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4884_);
v___y_4855_ = v___x_4885_;
goto v___jp_4854_;
}
v___jp_4854_:
{
lean_object* v___x_4856_; 
v___x_4856_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4853_, v___y_4855_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
if (lean_obj_tag(v___x_4856_) == 0)
{
lean_object* v_a_4857_; 
v_a_4857_ = lean_ctor_get(v___x_4856_, 0);
lean_inc(v_a_4857_);
lean_dec_ref_known(v___x_4856_, 1);
v_k_4494_ = v_a_4857_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
else
{
lean_dec_ref_known(v_value_4492_, 2);
lean_dec(v_fvarId_4491_);
return v___x_4856_;
}
}
}
case 12:
{
lean_object* v_a_4886_; lean_object* v_args_4887_; lean_object* v___y_4889_; 
v_a_4886_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4886_);
lean_dec_ref(v___x_4567_);
v_args_4887_ = lean_ctor_get(v_value_4492_, 2);
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_decl_4892_; lean_object* v_k_4893_; size_t v___x_4894_; size_t v___x_4895_; uint8_t v___x_4896_; 
v_decl_4892_ = lean_ctor_get(v_code_4481_, 0);
v_k_4893_ = lean_ctor_get(v_code_4481_, 1);
v___x_4894_ = lean_ptr_addr(v_k_4893_);
v___x_4895_ = lean_ptr_addr(v_a_4886_);
v___x_4896_ = lean_usize_dec_eq(v___x_4894_, v___x_4895_);
if (v___x_4896_ == 0)
{
lean_object* v___x_4898_; uint8_t v_isShared_4899_; uint8_t v_isSharedCheck_4903_; 
v_isSharedCheck_4903_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4903_ == 0)
{
lean_object* v_unused_4904_; lean_object* v_unused_4905_; 
v_unused_4904_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4904_);
v_unused_4905_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4905_);
v___x_4898_ = v_code_4481_;
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
else
{
lean_dec(v_code_4481_);
v___x_4898_ = lean_box(0);
v_isShared_4899_ = v_isSharedCheck_4903_;
goto v_resetjp_4897_;
}
v_resetjp_4897_:
{
lean_object* v___x_4901_; 
if (v_isShared_4899_ == 0)
{
lean_ctor_set(v___x_4898_, 1, v_a_4886_);
lean_ctor_set(v___x_4898_, 0, v_decl_4482_);
v___x_4901_ = v___x_4898_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4902_; 
v_reuseFailAlloc_4902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4902_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4902_, 1, v_a_4886_);
v___x_4901_ = v_reuseFailAlloc_4902_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
v___y_4889_ = v___x_4901_;
goto v___jp_4888_;
}
}
}
else
{
size_t v___x_4906_; size_t v___x_4907_; uint8_t v___x_4908_; 
v___x_4906_ = lean_ptr_addr(v_decl_4892_);
v___x_4907_ = lean_ptr_addr(v_decl_4482_);
v___x_4908_ = lean_usize_dec_eq(v___x_4906_, v___x_4907_);
if (v___x_4908_ == 0)
{
lean_object* v___x_4910_; uint8_t v_isShared_4911_; uint8_t v_isSharedCheck_4915_; 
v_isSharedCheck_4915_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4915_ == 0)
{
lean_object* v_unused_4916_; lean_object* v_unused_4917_; 
v_unused_4916_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4916_);
v_unused_4917_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4917_);
v___x_4910_ = v_code_4481_;
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
else
{
lean_dec(v_code_4481_);
v___x_4910_ = lean_box(0);
v_isShared_4911_ = v_isSharedCheck_4915_;
goto v_resetjp_4909_;
}
v_resetjp_4909_:
{
lean_object* v___x_4913_; 
if (v_isShared_4911_ == 0)
{
lean_ctor_set(v___x_4910_, 1, v_a_4886_);
lean_ctor_set(v___x_4910_, 0, v_decl_4482_);
v___x_4913_ = v___x_4910_;
goto v_reusejp_4912_;
}
else
{
lean_object* v_reuseFailAlloc_4914_; 
v_reuseFailAlloc_4914_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4914_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4914_, 1, v_a_4886_);
v___x_4913_ = v_reuseFailAlloc_4914_;
goto v_reusejp_4912_;
}
v_reusejp_4912_:
{
v___y_4889_ = v___x_4913_;
goto v___jp_4888_;
}
}
}
else
{
lean_dec(v_a_4886_);
lean_dec_ref(v_decl_4482_);
v___y_4889_ = v_code_4481_;
goto v___jp_4888_;
}
}
}
else
{
lean_object* v___x_4918_; lean_object* v___x_4919_; 
lean_dec(v_a_4886_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4918_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4919_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4918_);
v___y_4889_ = v___x_4919_;
goto v___jp_4888_;
}
v___jp_4888_:
{
lean_object* v___x_4890_; 
v___x_4890_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4887_, v___y_4889_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
if (lean_obj_tag(v___x_4890_) == 0)
{
lean_object* v_a_4891_; 
v_a_4891_ = lean_ctor_get(v___x_4890_, 0);
lean_inc(v_a_4891_);
lean_dec_ref_known(v___x_4890_, 1);
v_k_4494_ = v_a_4891_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
else
{
lean_dec_ref_known(v_value_4492_, 3);
lean_dec(v_fvarId_4491_);
return v___x_4890_;
}
}
}
case 14:
{
lean_object* v_a_4920_; lean_object* v_fvarId_4921_; lean_object* v___x_4922_; 
v_a_4920_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4920_);
lean_dec_ref(v___x_4567_);
v_fvarId_4921_ = lean_ctor_get(v_value_4492_, 0);
lean_inc(v_fvarId_4921_);
v___x_4922_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4921_, v_a_4920_, v___y_4484_, v___y_4485_);
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_a_4923_; lean_object* v_decl_4924_; lean_object* v_k_4925_; size_t v___x_4926_; size_t v___x_4927_; uint8_t v___x_4928_; 
v_a_4923_ = lean_ctor_get(v___x_4922_, 0);
lean_inc(v_a_4923_);
lean_dec_ref(v___x_4922_);
v_decl_4924_ = lean_ctor_get(v_code_4481_, 0);
v_k_4925_ = lean_ctor_get(v_code_4481_, 1);
v___x_4926_ = lean_ptr_addr(v_k_4925_);
v___x_4927_ = lean_ptr_addr(v_a_4923_);
v___x_4928_ = lean_usize_dec_eq(v___x_4926_, v___x_4927_);
if (v___x_4928_ == 0)
{
lean_object* v___x_4930_; uint8_t v_isShared_4931_; uint8_t v_isSharedCheck_4935_; 
v_isSharedCheck_4935_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4935_ == 0)
{
lean_object* v_unused_4936_; lean_object* v_unused_4937_; 
v_unused_4936_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4936_);
v_unused_4937_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4937_);
v___x_4930_ = v_code_4481_;
v_isShared_4931_ = v_isSharedCheck_4935_;
goto v_resetjp_4929_;
}
else
{
lean_dec(v_code_4481_);
v___x_4930_ = lean_box(0);
v_isShared_4931_ = v_isSharedCheck_4935_;
goto v_resetjp_4929_;
}
v_resetjp_4929_:
{
lean_object* v___x_4933_; 
if (v_isShared_4931_ == 0)
{
lean_ctor_set(v___x_4930_, 1, v_a_4923_);
lean_ctor_set(v___x_4930_, 0, v_decl_4482_);
v___x_4933_ = v___x_4930_;
goto v_reusejp_4932_;
}
else
{
lean_object* v_reuseFailAlloc_4934_; 
v_reuseFailAlloc_4934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4934_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4934_, 1, v_a_4923_);
v___x_4933_ = v_reuseFailAlloc_4934_;
goto v_reusejp_4932_;
}
v_reusejp_4932_:
{
v_k_4494_ = v___x_4933_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
size_t v___x_4938_; size_t v___x_4939_; uint8_t v___x_4940_; 
v___x_4938_ = lean_ptr_addr(v_decl_4924_);
v___x_4939_ = lean_ptr_addr(v_decl_4482_);
v___x_4940_ = lean_usize_dec_eq(v___x_4938_, v___x_4939_);
if (v___x_4940_ == 0)
{
lean_object* v___x_4942_; uint8_t v_isShared_4943_; uint8_t v_isSharedCheck_4947_; 
v_isSharedCheck_4947_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4947_ == 0)
{
lean_object* v_unused_4948_; lean_object* v_unused_4949_; 
v_unused_4948_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4948_);
v_unused_4949_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4949_);
v___x_4942_ = v_code_4481_;
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
else
{
lean_dec(v_code_4481_);
v___x_4942_ = lean_box(0);
v_isShared_4943_ = v_isSharedCheck_4947_;
goto v_resetjp_4941_;
}
v_resetjp_4941_:
{
lean_object* v___x_4945_; 
if (v_isShared_4943_ == 0)
{
lean_ctor_set(v___x_4942_, 1, v_a_4923_);
lean_ctor_set(v___x_4942_, 0, v_decl_4482_);
v___x_4945_ = v___x_4942_;
goto v_reusejp_4944_;
}
else
{
lean_object* v_reuseFailAlloc_4946_; 
v_reuseFailAlloc_4946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4946_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4946_, 1, v_a_4923_);
v___x_4945_ = v_reuseFailAlloc_4946_;
goto v_reusejp_4944_;
}
v_reusejp_4944_:
{
v_k_4494_ = v___x_4945_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_dec(v_a_4923_);
lean_dec_ref(v_decl_4482_);
v_k_4494_ = v_code_4481_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_object* v___x_4950_; lean_object* v___x_4951_; 
lean_dec_ref(v___x_4922_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4950_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4951_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4950_);
v_k_4494_ = v___x_4951_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
case 15:
{
lean_object* v___x_4952_; lean_object* v___x_4953_; 
lean_dec_ref(v___x_4567_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4952_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12);
v___x_4953_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v___x_4952_, v___y_4484_, v___y_4485_, v___y_4486_, v___y_4487_, v___y_4488_, v___y_4489_);
if (lean_obj_tag(v___x_4953_) == 0)
{
lean_object* v_a_4954_; 
v_a_4954_ = lean_ctor_get(v___x_4953_, 0);
lean_inc(v_a_4954_);
lean_dec_ref_known(v___x_4953_, 1);
v_k_4494_ = v_a_4954_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
else
{
lean_dec_ref_known(v_value_4492_, 1);
lean_dec(v_fvarId_4491_);
return v___x_4953_;
}
}
default: 
{
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_a_4955_; lean_object* v_decl_4956_; lean_object* v_k_4957_; size_t v___x_4958_; size_t v___x_4959_; uint8_t v___x_4960_; 
v_a_4955_ = lean_ctor_get(v___x_4567_, 0);
lean_inc(v_a_4955_);
lean_dec_ref(v___x_4567_);
v_decl_4956_ = lean_ctor_get(v_code_4481_, 0);
v_k_4957_ = lean_ctor_get(v_code_4481_, 1);
v___x_4958_ = lean_ptr_addr(v_k_4957_);
v___x_4959_ = lean_ptr_addr(v_a_4955_);
v___x_4960_ = lean_usize_dec_eq(v___x_4958_, v___x_4959_);
if (v___x_4960_ == 0)
{
lean_object* v___x_4962_; uint8_t v_isShared_4963_; uint8_t v_isSharedCheck_4967_; 
v_isSharedCheck_4967_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4967_ == 0)
{
lean_object* v_unused_4968_; lean_object* v_unused_4969_; 
v_unused_4968_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4968_);
v_unused_4969_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4969_);
v___x_4962_ = v_code_4481_;
v_isShared_4963_ = v_isSharedCheck_4967_;
goto v_resetjp_4961_;
}
else
{
lean_dec(v_code_4481_);
v___x_4962_ = lean_box(0);
v_isShared_4963_ = v_isSharedCheck_4967_;
goto v_resetjp_4961_;
}
v_resetjp_4961_:
{
lean_object* v___x_4965_; 
if (v_isShared_4963_ == 0)
{
lean_ctor_set(v___x_4962_, 1, v_a_4955_);
lean_ctor_set(v___x_4962_, 0, v_decl_4482_);
v___x_4965_ = v___x_4962_;
goto v_reusejp_4964_;
}
else
{
lean_object* v_reuseFailAlloc_4966_; 
v_reuseFailAlloc_4966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4966_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4966_, 1, v_a_4955_);
v___x_4965_ = v_reuseFailAlloc_4966_;
goto v_reusejp_4964_;
}
v_reusejp_4964_:
{
v_k_4494_ = v___x_4965_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
size_t v___x_4970_; size_t v___x_4971_; uint8_t v___x_4972_; 
v___x_4970_ = lean_ptr_addr(v_decl_4956_);
v___x_4971_ = lean_ptr_addr(v_decl_4482_);
v___x_4972_ = lean_usize_dec_eq(v___x_4970_, v___x_4971_);
if (v___x_4972_ == 0)
{
lean_object* v___x_4974_; uint8_t v_isShared_4975_; uint8_t v_isSharedCheck_4979_; 
v_isSharedCheck_4979_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4979_ == 0)
{
lean_object* v_unused_4980_; lean_object* v_unused_4981_; 
v_unused_4980_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4980_);
v_unused_4981_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4981_);
v___x_4974_ = v_code_4481_;
v_isShared_4975_ = v_isSharedCheck_4979_;
goto v_resetjp_4973_;
}
else
{
lean_dec(v_code_4481_);
v___x_4974_ = lean_box(0);
v_isShared_4975_ = v_isSharedCheck_4979_;
goto v_resetjp_4973_;
}
v_resetjp_4973_:
{
lean_object* v___x_4977_; 
if (v_isShared_4975_ == 0)
{
lean_ctor_set(v___x_4974_, 1, v_a_4955_);
lean_ctor_set(v___x_4974_, 0, v_decl_4482_);
v___x_4977_ = v___x_4974_;
goto v_reusejp_4976_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4978_, 1, v_a_4955_);
v___x_4977_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4976_;
}
v_reusejp_4976_:
{
v_k_4494_ = v___x_4977_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_dec(v_a_4955_);
lean_dec_ref(v_decl_4482_);
v_k_4494_ = v_code_4481_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
else
{
lean_object* v___x_4982_; lean_object* v___x_4983_; 
lean_dec_ref(v___x_4567_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4982_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4983_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4982_);
v_k_4494_ = v___x_4983_;
v___y_4495_ = v___y_4484_;
v___y_4496_ = v___y_4485_;
v___y_4497_ = v___y_4486_;
v___y_4498_ = v___y_4487_;
v___y_4499_ = v___y_4488_;
v___y_4500_ = v___y_4489_;
goto v___jp_4493_;
}
}
}
v___jp_4493_:
{
lean_object* v___x_4501_; 
v___x_4501_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(v_value_4492_, v___y_4495_, v___y_4496_, v___y_4497_, v___y_4498_, v___y_4499_, v___y_4500_);
if (lean_obj_tag(v___x_4501_) == 0)
{
lean_object* v___x_4503_; uint8_t v_isShared_4504_; uint8_t v_isSharedCheck_4521_; 
v_isSharedCheck_4521_ = !lean_is_exclusive(v___x_4501_);
if (v_isSharedCheck_4521_ == 0)
{
lean_object* v_unused_4522_; 
v_unused_4522_ = lean_ctor_get(v___x_4501_, 0);
lean_dec(v_unused_4522_);
v___x_4503_ = v___x_4501_;
v_isShared_4504_ = v_isSharedCheck_4521_;
goto v_resetjp_4502_;
}
else
{
lean_dec(v___x_4501_);
v___x_4503_ = lean_box(0);
v_isShared_4504_ = v_isSharedCheck_4521_;
goto v_resetjp_4502_;
}
v_resetjp_4502_:
{
lean_object* v___x_4505_; lean_object* v_vars_4506_; lean_object* v_borrows_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4520_; 
v___x_4505_ = lean_st_ref_take(v___y_4496_);
v_vars_4506_ = lean_ctor_get(v___x_4505_, 0);
v_borrows_4507_ = lean_ctor_get(v___x_4505_, 1);
v_isSharedCheck_4520_ = !lean_is_exclusive(v___x_4505_);
if (v_isSharedCheck_4520_ == 0)
{
v___x_4509_ = v___x_4505_;
v_isShared_4510_ = v_isSharedCheck_4520_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_borrows_4507_);
lean_inc(v_vars_4506_);
lean_dec(v___x_4505_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4520_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v_vars_4511_; lean_object* v_borrows_4512_; lean_object* v___x_4514_; 
v_vars_4511_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_vars_4506_, v_fvarId_4491_);
v_borrows_4512_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_borrows_4507_, v_fvarId_4491_);
lean_dec(v_fvarId_4491_);
if (v_isShared_4510_ == 0)
{
lean_ctor_set(v___x_4509_, 1, v_borrows_4512_);
lean_ctor_set(v___x_4509_, 0, v_vars_4511_);
v___x_4514_ = v___x_4509_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v_vars_4511_);
lean_ctor_set(v_reuseFailAlloc_4519_, 1, v_borrows_4512_);
v___x_4514_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
lean_object* v___x_4515_; lean_object* v___x_4517_; 
v___x_4515_ = lean_st_ref_put(v___y_4496_, v___x_4514_);
if (v_isShared_4504_ == 0)
{
lean_ctor_set(v___x_4503_, 0, v_k_4494_);
v___x_4517_ = v___x_4503_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v_k_4494_);
v___x_4517_ = v_reuseFailAlloc_4518_;
goto v_reusejp_4516_;
}
v_reusejp_4516_:
{
return v___x_4517_;
}
}
}
}
}
else
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4530_; 
lean_dec_ref(v_k_4494_);
lean_dec(v_fvarId_4491_);
v_a_4523_ = lean_ctor_get(v___x_4501_, 0);
v_isSharedCheck_4530_ = !lean_is_exclusive(v___x_4501_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4525_ = v___x_4501_;
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v___x_4501_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v_a_4523_);
v___x_4528_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
return v___x_4528_;
}
}
}
}
v___jp_4531_:
{
if (lean_obj_tag(v_code_4481_) == 0)
{
lean_object* v_decl_4539_; lean_object* v_k_4540_; size_t v___x_4541_; size_t v___x_4542_; uint8_t v___x_4543_; 
v_decl_4539_ = lean_ctor_get(v_code_4481_, 0);
v_k_4540_ = lean_ctor_get(v_code_4481_, 1);
v___x_4541_ = lean_ptr_addr(v_k_4540_);
v___x_4542_ = lean_ptr_addr(v_k_4532_);
v___x_4543_ = lean_usize_dec_eq(v___x_4541_, v___x_4542_);
if (v___x_4543_ == 0)
{
lean_object* v___x_4545_; uint8_t v_isShared_4546_; uint8_t v_isSharedCheck_4550_; 
v_isSharedCheck_4550_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4550_ == 0)
{
lean_object* v_unused_4551_; lean_object* v_unused_4552_; 
v_unused_4551_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4551_);
v_unused_4552_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4552_);
v___x_4545_ = v_code_4481_;
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
else
{
lean_dec(v_code_4481_);
v___x_4545_ = lean_box(0);
v_isShared_4546_ = v_isSharedCheck_4550_;
goto v_resetjp_4544_;
}
v_resetjp_4544_:
{
lean_object* v___x_4548_; 
if (v_isShared_4546_ == 0)
{
lean_ctor_set(v___x_4545_, 1, v_k_4532_);
lean_ctor_set(v___x_4545_, 0, v_decl_4482_);
v___x_4548_ = v___x_4545_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4549_; 
v_reuseFailAlloc_4549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4549_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4549_, 1, v_k_4532_);
v___x_4548_ = v_reuseFailAlloc_4549_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
v_k_4494_ = v___x_4548_;
v___y_4495_ = v___y_4533_;
v___y_4496_ = v___y_4534_;
v___y_4497_ = v___y_4535_;
v___y_4498_ = v___y_4536_;
v___y_4499_ = v___y_4537_;
v___y_4500_ = v___y_4538_;
goto v___jp_4493_;
}
}
}
else
{
size_t v___x_4553_; size_t v___x_4554_; uint8_t v___x_4555_; 
v___x_4553_ = lean_ptr_addr(v_decl_4539_);
v___x_4554_ = lean_ptr_addr(v_decl_4482_);
v___x_4555_ = lean_usize_dec_eq(v___x_4553_, v___x_4554_);
if (v___x_4555_ == 0)
{
lean_object* v___x_4557_; uint8_t v_isShared_4558_; uint8_t v_isSharedCheck_4562_; 
v_isSharedCheck_4562_ = !lean_is_exclusive(v_code_4481_);
if (v_isSharedCheck_4562_ == 0)
{
lean_object* v_unused_4563_; lean_object* v_unused_4564_; 
v_unused_4563_ = lean_ctor_get(v_code_4481_, 1);
lean_dec(v_unused_4563_);
v_unused_4564_ = lean_ctor_get(v_code_4481_, 0);
lean_dec(v_unused_4564_);
v___x_4557_ = v_code_4481_;
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
else
{
lean_dec(v_code_4481_);
v___x_4557_ = lean_box(0);
v_isShared_4558_ = v_isSharedCheck_4562_;
goto v_resetjp_4556_;
}
v_resetjp_4556_:
{
lean_object* v___x_4560_; 
if (v_isShared_4558_ == 0)
{
lean_ctor_set(v___x_4557_, 1, v_k_4532_);
lean_ctor_set(v___x_4557_, 0, v_decl_4482_);
v___x_4560_ = v___x_4557_;
goto v_reusejp_4559_;
}
else
{
lean_object* v_reuseFailAlloc_4561_; 
v_reuseFailAlloc_4561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4561_, 0, v_decl_4482_);
lean_ctor_set(v_reuseFailAlloc_4561_, 1, v_k_4532_);
v___x_4560_ = v_reuseFailAlloc_4561_;
goto v_reusejp_4559_;
}
v_reusejp_4559_:
{
v_k_4494_ = v___x_4560_;
v___y_4495_ = v___y_4533_;
v___y_4496_ = v___y_4534_;
v___y_4497_ = v___y_4535_;
v___y_4498_ = v___y_4536_;
v___y_4499_ = v___y_4537_;
v___y_4500_ = v___y_4538_;
goto v___jp_4493_;
}
}
}
else
{
lean_dec_ref(v_k_4532_);
lean_dec_ref(v_decl_4482_);
v_k_4494_ = v_code_4481_;
v___y_4495_ = v___y_4533_;
v___y_4496_ = v___y_4534_;
v___y_4497_ = v___y_4535_;
v___y_4498_ = v___y_4536_;
v___y_4499_ = v___y_4537_;
v___y_4500_ = v___y_4538_;
goto v___jp_4493_;
}
}
}
else
{
lean_object* v___x_4565_; lean_object* v___x_4566_; 
lean_dec_ref(v_k_4532_);
lean_dec_ref(v_decl_4482_);
lean_dec_ref(v_code_4481_);
v___x_4565_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4566_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4565_);
v_k_4494_ = v___x_4566_;
v___y_4495_ = v___y_4533_;
v___y_4496_ = v___y_4534_;
v___y_4497_ = v___y_4535_;
v___y_4498_ = v___y_4536_;
v___y_4499_ = v___y_4537_;
v___y_4500_ = v___y_4538_;
goto v___jp_4493_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___boxed(lean_object* v_code_4984_, lean_object* v_decl_4985_, lean_object* v_k_4986_, lean_object* v___y_4987_, lean_object* v___y_4988_, lean_object* v___y_4989_, lean_object* v___y_4990_, lean_object* v___y_4991_, lean_object* v___y_4992_, lean_object* v___y_4993_){
_start:
{
lean_object* v_res_4994_; 
v_res_4994_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(v_code_4984_, v_decl_4985_, v_k_4986_, v___y_4987_, v___y_4988_, v___y_4989_, v___y_4990_, v___y_4991_, v___y_4992_);
lean_dec(v___y_4992_);
lean_dec_ref(v___y_4991_);
lean_dec(v___y_4990_);
lean_dec_ref(v___y_4989_);
lean_dec(v___y_4988_);
lean_dec_ref(v___y_4987_);
return v_res_4994_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0(void){
_start:
{
lean_object* v___x_4995_; 
v___x_4995_ = l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1___redArg();
return v___x_4995_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(lean_object* v_msg_4996_){
_start:
{
lean_object* v___x_4997_; lean_object* v___x_4998_; 
v___x_4997_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0);
v___x_4998_ = lean_panic_fn_borrowed(v___x_4997_, v_msg_4996_);
return v___x_4998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___lam__0(lean_object* v_derivedValMap_4999_, lean_object* v_liveVars_5000_, lean_object* v_child_5001_){
_start:
{
lean_object* v_cinfo_5015_; lean_object* v_parents_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; uint8_t v___x_5019_; 
v_cinfo_5015_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_derivedValMap_4999_, v_child_5001_);
v_parents_5016_ = lean_ctor_get(v_cinfo_5015_, 0);
lean_inc_ref(v_parents_5016_);
lean_dec_ref(v_cinfo_5015_);
v___x_5017_ = lean_unsigned_to_nat(0u);
v___x_5018_ = lean_array_get_size(v_parents_5016_);
v___x_5019_ = lean_nat_dec_lt(v___x_5017_, v___x_5018_);
if (v___x_5019_ == 0)
{
lean_dec_ref(v_parents_5016_);
goto v___jp_5002_;
}
else
{
if (v___x_5019_ == 0)
{
lean_dec_ref(v_parents_5016_);
goto v___jp_5002_;
}
else
{
size_t v___x_5020_; size_t v___x_5021_; uint8_t v___x_5022_; 
v___x_5020_ = ((size_t)0ULL);
v___x_5021_ = lean_usize_of_nat(v___x_5018_);
v___x_5022_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_5000_, v_parents_5016_, v___x_5020_, v___x_5021_);
lean_dec_ref(v_parents_5016_);
if (v___x_5022_ == 0)
{
goto v___jp_5002_;
}
else
{
lean_object* v___x_5023_; 
v___x_5023_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_child_5001_, v_derivedValMap_4999_, v_liveVars_5000_);
lean_dec(v_child_5001_);
return v___x_5023_;
}
}
}
v___jp_5002_:
{
lean_object* v_vars_5003_; lean_object* v_borrows_5004_; lean_object* v___x_5006_; uint8_t v_isShared_5007_; uint8_t v_isSharedCheck_5014_; 
v_vars_5003_ = lean_ctor_get(v_liveVars_5000_, 0);
v_borrows_5004_ = lean_ctor_get(v_liveVars_5000_, 1);
v_isSharedCheck_5014_ = !lean_is_exclusive(v_liveVars_5000_);
if (v_isSharedCheck_5014_ == 0)
{
v___x_5006_ = v_liveVars_5000_;
v_isShared_5007_ = v_isSharedCheck_5014_;
goto v_resetjp_5005_;
}
else
{
lean_inc(v_borrows_5004_);
lean_inc(v_vars_5003_);
lean_dec(v_liveVars_5000_);
v___x_5006_ = lean_box(0);
v_isShared_5007_ = v_isSharedCheck_5014_;
goto v_resetjp_5005_;
}
v_resetjp_5005_:
{
lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5011_; 
v___x_5008_ = lean_box(0);
lean_inc(v_child_5001_);
v___x_5009_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_5004_, v_child_5001_, v___x_5008_);
if (v_isShared_5007_ == 0)
{
lean_ctor_set(v___x_5006_, 1, v___x_5009_);
v___x_5011_ = v___x_5006_;
goto v_reusejp_5010_;
}
else
{
lean_object* v_reuseFailAlloc_5013_; 
v_reuseFailAlloc_5013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5013_, 0, v_vars_5003_);
lean_ctor_set(v_reuseFailAlloc_5013_, 1, v___x_5009_);
v___x_5011_ = v_reuseFailAlloc_5013_;
goto v_reusejp_5010_;
}
v_reusejp_5010_:
{
lean_object* v___x_5012_; 
v___x_5012_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_child_5001_, v_derivedValMap_4999_, v___x_5011_);
lean_dec(v_child_5001_);
return v___x_5012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(lean_object* v_fvarId_5024_, lean_object* v_derivedValMap_5025_, lean_object* v_liveVars_5026_){
_start:
{
lean_object* v___x_5027_; 
v___x_5027_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_derivedValMap_5025_, v_fvarId_5024_);
if (lean_obj_tag(v___x_5027_) == 1)
{
lean_object* v_val_5028_; lean_object* v_children_5029_; lean_object* v___f_5030_; lean_object* v___x_5031_; 
v_val_5028_ = lean_ctor_get(v___x_5027_, 0);
lean_inc(v_val_5028_);
lean_dec_ref_known(v___x_5027_, 1);
v_children_5029_ = lean_ctor_get(v_val_5028_, 1);
lean_inc_ref(v_children_5029_);
lean_dec(v_val_5028_);
v___f_5030_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___lam__0), 3, 1);
lean_closure_set(v___f_5030_, 0, v_derivedValMap_5025_);
v___x_5031_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_5030_, v_liveVars_5026_, v_children_5029_);
lean_dec_ref(v_children_5029_);
return v___x_5031_;
}
else
{
lean_dec(v___x_5027_);
lean_dec_ref(v_derivedValMap_5025_);
return v_liveVars_5026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___boxed(lean_object* v_fvarId_5032_, lean_object* v_derivedValMap_5033_, lean_object* v_liveVars_5034_){
_start:
{
lean_object* v_res_5035_; 
v_res_5035_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_fvarId_5032_, v_derivedValMap_5033_, v_liveVars_5034_);
lean_dec(v_fvarId_5032_);
return v_res_5035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(lean_object* v_derivedValMap_5036_, lean_object* v_liveVars_5037_, lean_object* v_x_5038_){
_start:
{
lean_object* v_vars_5039_; lean_object* v_borrows_5040_; lean_object* v___x_5042_; uint8_t v_isShared_5043_; uint8_t v_isSharedCheck_5050_; 
v_vars_5039_ = lean_ctor_get(v_liveVars_5037_, 0);
v_borrows_5040_ = lean_ctor_get(v_liveVars_5037_, 1);
v_isSharedCheck_5050_ = !lean_is_exclusive(v_liveVars_5037_);
if (v_isSharedCheck_5050_ == 0)
{
v___x_5042_ = v_liveVars_5037_;
v_isShared_5043_ = v_isSharedCheck_5050_;
goto v_resetjp_5041_;
}
else
{
lean_inc(v_borrows_5040_);
lean_inc(v_vars_5039_);
lean_dec(v_liveVars_5037_);
v___x_5042_ = lean_box(0);
v_isShared_5043_ = v_isSharedCheck_5050_;
goto v_resetjp_5041_;
}
v_resetjp_5041_:
{
lean_object* v___x_5044_; lean_object* v___x_5045_; lean_object* v___x_5047_; 
v___x_5044_ = lean_box(0);
lean_inc(v_x_5038_);
v___x_5045_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_5040_, v_x_5038_, v___x_5044_);
if (v_isShared_5043_ == 0)
{
lean_ctor_set(v___x_5042_, 1, v___x_5045_);
v___x_5047_ = v___x_5042_;
goto v_reusejp_5046_;
}
else
{
lean_object* v_reuseFailAlloc_5049_; 
v_reuseFailAlloc_5049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5049_, 0, v_vars_5039_);
lean_ctor_set(v_reuseFailAlloc_5049_, 1, v___x_5045_);
v___x_5047_ = v_reuseFailAlloc_5049_;
goto v_reusejp_5046_;
}
v_reusejp_5046_:
{
lean_object* v___x_5048_; 
v___x_5048_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_x_5038_, v_derivedValMap_5036_, v___x_5047_);
lean_dec(v_x_5038_);
return v___x_5048_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__1(lean_object* v_a_5051_, lean_object* v_a_5052_){
_start:
{
if (lean_obj_tag(v_a_5051_) == 0)
{
lean_object* v___x_5053_; 
v___x_5053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5053_, 0, v_a_5052_);
return v___x_5053_;
}
else
{
lean_object* v_key_5054_; lean_object* v_value_5055_; lean_object* v_tail_5056_; lean_object* v_r_5057_; 
v_key_5054_ = lean_ctor_get(v_a_5051_, 0);
lean_inc(v_key_5054_);
v_value_5055_ = lean_ctor_get(v_a_5051_, 1);
lean_inc(v_value_5055_);
v_tail_5056_ = lean_ctor_get(v_a_5051_, 2);
lean_inc(v_tail_5056_);
lean_dec_ref_known(v_a_5051_, 3);
v_r_5057_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(v_a_5052_, v_key_5054_, v_value_5055_);
v_a_5051_ = v_tail_5056_;
v_a_5052_ = v_r_5057_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2(lean_object* v_as_5059_, size_t v_sz_5060_, size_t v_i_5061_, lean_object* v_b_5062_){
_start:
{
uint8_t v___x_5063_; 
v___x_5063_ = lean_usize_dec_lt(v_i_5061_, v_sz_5060_);
if (v___x_5063_ == 0)
{
return v_b_5062_;
}
else
{
lean_object* v_a_5064_; lean_object* v___x_5065_; 
v_a_5064_ = lean_array_uget_borrowed(v_as_5059_, v_i_5061_);
lean_inc(v_a_5064_);
v___x_5065_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__1(v_a_5064_, v_b_5062_);
if (lean_obj_tag(v___x_5065_) == 0)
{
lean_object* v_a_5066_; 
v_a_5066_ = lean_ctor_get(v___x_5065_, 0);
lean_inc(v_a_5066_);
lean_dec_ref_known(v___x_5065_, 1);
return v_a_5066_;
}
else
{
lean_object* v_a_5067_; size_t v___x_5068_; size_t v___x_5069_; 
v_a_5067_ = lean_ctor_get(v___x_5065_, 0);
lean_inc(v_a_5067_);
lean_dec_ref_known(v___x_5065_, 1);
v___x_5068_ = ((size_t)1ULL);
v___x_5069_ = lean_usize_add(v_i_5061_, v___x_5068_);
v_i_5061_ = v___x_5069_;
v_b_5062_ = v_a_5067_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2___boxed(lean_object* v_as_5071_, lean_object* v_sz_5072_, lean_object* v_i_5073_, lean_object* v_b_5074_){
_start:
{
size_t v_sz_boxed_5075_; size_t v_i_boxed_5076_; lean_object* v_res_5077_; 
v_sz_boxed_5075_ = lean_unbox_usize(v_sz_5072_);
lean_dec(v_sz_5072_);
v_i_boxed_5076_ = lean_unbox_usize(v_i_5073_);
lean_dec(v_i_5073_);
v_res_5077_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2(v_as_5071_, v_sz_boxed_5075_, v_i_boxed_5076_, v_b_5074_);
lean_dec_ref(v_as_5071_);
return v_res_5077_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(lean_object* v_m_5078_, lean_object* v_l_5079_){
_start:
{
lean_object* v_buckets_5080_; size_t v_sz_5081_; size_t v___x_5082_; lean_object* v___x_5083_; 
v_buckets_5080_ = lean_ctor_get(v_l_5079_, 1);
v_sz_5081_ = lean_array_size(v_buckets_5080_);
v___x_5082_ = ((size_t)0ULL);
v___x_5083_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2(v_buckets_5080_, v_sz_5081_, v___x_5082_, v_m_5078_);
return v___x_5083_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1___boxed(lean_object* v_m_5084_, lean_object* v_l_5085_){
_start:
{
lean_object* v_res_5086_; 
v_res_5086_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(v_m_5084_, v_l_5085_);
lean_dec_ref(v_l_5085_);
return v_res_5086_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(lean_object* v_a_5087_, lean_object* v_a_5088_){
_start:
{
if (lean_obj_tag(v_a_5087_) == 0)
{
lean_object* v___x_5089_; 
v___x_5089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5089_, 0, v_a_5088_);
return v___x_5089_;
}
else
{
lean_object* v_key_5090_; lean_object* v_value_5091_; lean_object* v_tail_5092_; lean_object* v_r_5093_; 
v_key_5090_ = lean_ctor_get(v_a_5087_, 0);
lean_inc(v_key_5090_);
v_value_5091_ = lean_ctor_get(v_a_5087_, 1);
lean_inc(v_value_5091_);
v_tail_5092_ = lean_ctor_get(v_a_5087_, 2);
lean_inc(v_tail_5092_);
lean_dec_ref_known(v_a_5087_, 3);
v_r_5093_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_a_5088_, v_key_5090_, v_value_5091_);
v_a_5087_ = v_tail_5092_;
v_a_5088_ = v_r_5093_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(lean_object* v_as_5095_, size_t v_sz_5096_, size_t v_i_5097_, lean_object* v_b_5098_){
_start:
{
uint8_t v___x_5099_; 
v___x_5099_ = lean_usize_dec_lt(v_i_5097_, v_sz_5096_);
if (v___x_5099_ == 0)
{
return v_b_5098_;
}
else
{
lean_object* v_a_5100_; lean_object* v___x_5101_; 
v_a_5100_ = lean_array_uget_borrowed(v_as_5095_, v_i_5097_);
lean_inc(v_a_5100_);
v___x_5101_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(v_a_5100_, v_b_5098_);
if (lean_obj_tag(v___x_5101_) == 0)
{
lean_object* v_a_5102_; 
v_a_5102_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5102_);
lean_dec_ref_known(v___x_5101_, 1);
return v_a_5102_;
}
else
{
lean_object* v_a_5103_; size_t v___x_5104_; size_t v___x_5105_; 
v_a_5103_ = lean_ctor_get(v___x_5101_, 0);
lean_inc(v_a_5103_);
lean_dec_ref_known(v___x_5101_, 1);
v___x_5104_ = ((size_t)1ULL);
v___x_5105_ = lean_usize_add(v_i_5097_, v___x_5104_);
v_i_5097_ = v___x_5105_;
v_b_5098_ = v_a_5103_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2___boxed(lean_object* v_as_5107_, lean_object* v_sz_5108_, lean_object* v_i_5109_, lean_object* v_b_5110_){
_start:
{
size_t v_sz_boxed_5111_; size_t v_i_boxed_5112_; lean_object* v_res_5113_; 
v_sz_boxed_5111_ = lean_unbox_usize(v_sz_5108_);
lean_dec(v_sz_5108_);
v_i_boxed_5112_ = lean_unbox_usize(v_i_5109_);
lean_dec(v_i_5109_);
v_res_5113_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_as_5107_, v_sz_boxed_5111_, v_i_boxed_5112_, v_b_5110_);
lean_dec_ref(v_as_5107_);
return v_res_5113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(lean_object* v_as_5114_, size_t v_i_5115_, size_t v_stop_5116_, lean_object* v_b_5117_){
_start:
{
lean_object* v___y_5119_; lean_object* v___y_5120_; uint8_t v___x_5125_; 
v___x_5125_ = lean_usize_dec_eq(v_i_5115_, v_stop_5116_);
if (v___x_5125_ == 0)
{
lean_object* v___x_5126_; lean_object* v_snd_5127_; lean_object* v_vars_5128_; lean_object* v_borrows_5129_; lean_object* v_vars_5130_; lean_object* v_borrows_5131_; lean_object* v___y_5133_; lean_object* v_size_5142_; lean_object* v_buckets_5143_; lean_object* v_size_5144_; uint8_t v___x_5145_; 
v___x_5126_ = lean_array_uget_borrowed(v_as_5114_, v_i_5115_);
v_snd_5127_ = lean_ctor_get(v___x_5126_, 1);
v_vars_5128_ = lean_ctor_get(v_b_5117_, 0);
lean_inc_ref(v_vars_5128_);
v_borrows_5129_ = lean_ctor_get(v_b_5117_, 1);
lean_inc_ref(v_borrows_5129_);
lean_dec_ref(v_b_5117_);
v_vars_5130_ = lean_ctor_get(v_snd_5127_, 0);
v_borrows_5131_ = lean_ctor_get(v_snd_5127_, 1);
v_size_5142_ = lean_ctor_get(v_vars_5128_, 0);
v_buckets_5143_ = lean_ctor_get(v_vars_5128_, 1);
v_size_5144_ = lean_ctor_get(v_vars_5130_, 0);
v___x_5145_ = lean_nat_dec_le(v_size_5142_, v_size_5144_);
if (v___x_5145_ == 0)
{
lean_object* v___x_5146_; 
v___x_5146_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(v_vars_5128_, v_vars_5130_);
v___y_5133_ = v___x_5146_;
goto v___jp_5132_;
}
else
{
size_t v_sz_5147_; size_t v___x_5148_; lean_object* v___x_5149_; 
lean_inc_ref(v_buckets_5143_);
lean_dec_ref(v_vars_5128_);
v_sz_5147_ = lean_array_size(v_buckets_5143_);
v___x_5148_ = ((size_t)0ULL);
lean_inc_ref(v_vars_5130_);
v___x_5149_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_buckets_5143_, v_sz_5147_, v___x_5148_, v_vars_5130_);
lean_dec_ref(v_buckets_5143_);
v___y_5133_ = v___x_5149_;
goto v___jp_5132_;
}
v___jp_5132_:
{
lean_object* v_size_5134_; lean_object* v_buckets_5135_; lean_object* v_size_5136_; uint8_t v___x_5137_; 
v_size_5134_ = lean_ctor_get(v_borrows_5129_, 0);
v_buckets_5135_ = lean_ctor_get(v_borrows_5129_, 1);
v_size_5136_ = lean_ctor_get(v_borrows_5131_, 0);
v___x_5137_ = lean_nat_dec_le(v_size_5134_, v_size_5136_);
if (v___x_5137_ == 0)
{
lean_object* v___x_5138_; 
v___x_5138_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(v_borrows_5129_, v_borrows_5131_);
v___y_5119_ = v___y_5133_;
v___y_5120_ = v___x_5138_;
goto v___jp_5118_;
}
else
{
size_t v_sz_5139_; size_t v___x_5140_; lean_object* v___x_5141_; 
lean_inc_ref(v_buckets_5135_);
lean_dec_ref(v_borrows_5129_);
v_sz_5139_ = lean_array_size(v_buckets_5135_);
v___x_5140_ = ((size_t)0ULL);
lean_inc_ref(v_borrows_5131_);
v___x_5141_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_buckets_5135_, v_sz_5139_, v___x_5140_, v_borrows_5131_);
lean_dec_ref(v_buckets_5135_);
v___y_5119_ = v___y_5133_;
v___y_5120_ = v___x_5141_;
goto v___jp_5118_;
}
}
}
else
{
return v_b_5117_;
}
v___jp_5118_:
{
lean_object* v___x_5121_; size_t v___x_5122_; size_t v___x_5123_; 
v___x_5121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5121_, 0, v___y_5119_);
lean_ctor_set(v___x_5121_, 1, v___y_5120_);
v___x_5122_ = ((size_t)1ULL);
v___x_5123_ = lean_usize_add(v_i_5115_, v___x_5122_);
v_i_5115_ = v___x_5123_;
v_b_5117_ = v___x_5121_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7___boxed(lean_object* v_as_5150_, lean_object* v_i_5151_, lean_object* v_stop_5152_, lean_object* v_b_5153_){
_start:
{
size_t v_i_boxed_5154_; size_t v_stop_boxed_5155_; lean_object* v_res_5156_; 
v_i_boxed_5154_ = lean_unbox_usize(v_i_5151_);
lean_dec(v_i_5151_);
v_stop_boxed_5155_ = lean_unbox_usize(v_stop_5152_);
lean_dec(v_stop_5152_);
v_res_5156_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_as_5150_, v_i_boxed_5154_, v_stop_boxed_5155_, v_b_5153_);
lean_dec_ref(v_as_5150_);
return v_res_5156_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(lean_object* v_as_5157_, size_t v_i_5158_, size_t v_stop_5159_, lean_object* v_b_5160_){
_start:
{
uint8_t v___x_5161_; 
v___x_5161_ = lean_usize_dec_eq(v_i_5158_, v_stop_5159_);
if (v___x_5161_ == 0)
{
lean_object* v_borrowedValues_5162_; lean_object* v_derivedValMap_5163_; lean_object* v_varMap_5164_; lean_object* v_jpLiveVarMap_5165_; lean_object* v_idx_5166_; lean_object* v___x_5168_; uint8_t v_isShared_5169_; uint8_t v_isSharedCheck_5186_; 
v_borrowedValues_5162_ = lean_ctor_get(v_b_5160_, 0);
v_derivedValMap_5163_ = lean_ctor_get(v_b_5160_, 1);
v_varMap_5164_ = lean_ctor_get(v_b_5160_, 2);
v_jpLiveVarMap_5165_ = lean_ctor_get(v_b_5160_, 3);
v_idx_5166_ = lean_ctor_get(v_b_5160_, 4);
v_isSharedCheck_5186_ = !lean_is_exclusive(v_b_5160_);
if (v_isSharedCheck_5186_ == 0)
{
v___x_5168_ = v_b_5160_;
v_isShared_5169_ = v_isSharedCheck_5186_;
goto v_resetjp_5167_;
}
else
{
lean_inc(v_idx_5166_);
lean_inc(v_jpLiveVarMap_5165_);
lean_inc(v_varMap_5164_);
lean_inc(v_derivedValMap_5163_);
lean_inc(v_borrowedValues_5162_);
lean_dec(v_b_5160_);
v___x_5168_ = lean_box(0);
v_isShared_5169_ = v_isSharedCheck_5186_;
goto v_resetjp_5167_;
}
v_resetjp_5167_:
{
lean_object* v___x_5170_; lean_object* v_fvarId_5171_; lean_object* v_type_5172_; uint8_t v___x_5173_; uint8_t v___x_5174_; lean_object* v___x_5175_; lean_object* v___x_5176_; lean_object* v_varMap_5177_; lean_object* v___x_5178_; lean_object* v___x_5179_; lean_object* v___x_5181_; 
v___x_5170_ = lean_array_uget_borrowed(v_as_5157_, v_i_5158_);
v_fvarId_5171_ = lean_ctor_get(v___x_5170_, 0);
v_type_5172_ = lean_ctor_get(v___x_5170_, 2);
v___x_5173_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_5172_);
v___x_5174_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_5172_);
v___x_5175_ = lean_box(0);
lean_inc(v_idx_5166_);
v___x_5176_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_5176_, 0, v_idx_5166_);
lean_ctor_set(v___x_5176_, 1, v___x_5175_);
lean_ctor_set_uint8(v___x_5176_, sizeof(void*)*2, v___x_5173_);
lean_ctor_set_uint8(v___x_5176_, sizeof(void*)*2 + 1, v___x_5174_);
lean_ctor_set_uint8(v___x_5176_, sizeof(void*)*2 + 2, v___x_5161_);
lean_inc(v_fvarId_5171_);
v_varMap_5177_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5171_, v___x_5176_, v_varMap_5164_);
v___x_5178_ = lean_unsigned_to_nat(1u);
v___x_5179_ = lean_nat_add(v_idx_5166_, v___x_5178_);
lean_dec(v_idx_5166_);
if (v_isShared_5169_ == 0)
{
lean_ctor_set(v___x_5168_, 4, v___x_5179_);
lean_ctor_set(v___x_5168_, 2, v_varMap_5177_);
v___x_5181_ = v___x_5168_;
goto v_reusejp_5180_;
}
else
{
lean_object* v_reuseFailAlloc_5185_; 
v_reuseFailAlloc_5185_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5185_, 0, v_borrowedValues_5162_);
lean_ctor_set(v_reuseFailAlloc_5185_, 1, v_derivedValMap_5163_);
lean_ctor_set(v_reuseFailAlloc_5185_, 2, v_varMap_5177_);
lean_ctor_set(v_reuseFailAlloc_5185_, 3, v_jpLiveVarMap_5165_);
lean_ctor_set(v_reuseFailAlloc_5185_, 4, v___x_5179_);
v___x_5181_ = v_reuseFailAlloc_5185_;
goto v_reusejp_5180_;
}
v_reusejp_5180_:
{
size_t v___x_5182_; size_t v___x_5183_; 
v___x_5182_ = ((size_t)1ULL);
v___x_5183_ = lean_usize_add(v_i_5158_, v___x_5182_);
v_i_5158_ = v___x_5183_;
v_b_5160_ = v___x_5181_;
goto _start;
}
}
}
else
{
return v_b_5160_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3___boxed(lean_object* v_as_5187_, lean_object* v_i_5188_, lean_object* v_stop_5189_, lean_object* v_b_5190_){
_start:
{
size_t v_i_boxed_5191_; size_t v_stop_boxed_5192_; lean_object* v_res_5193_; 
v_i_boxed_5191_ = lean_unbox_usize(v_i_5188_);
lean_dec(v_i_5188_);
v_stop_boxed_5192_ = lean_unbox_usize(v_stop_5189_);
lean_dec(v_stop_5189_);
v_res_5193_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_as_5187_, v_i_boxed_5191_, v_stop_boxed_5192_, v_b_5190_);
lean_dec_ref(v_as_5187_);
return v_res_5193_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(lean_object* v_discr_5194_, size_t v_sz_5195_, size_t v_i_5196_, lean_object* v_bs_5197_, lean_object* v___y_5198_, lean_object* v___y_5199_, lean_object* v___y_5200_, lean_object* v___y_5201_, lean_object* v___y_5202_, lean_object* v___y_5203_){
_start:
{
uint8_t v___x_5205_; 
v___x_5205_ = lean_usize_dec_lt(v_i_5196_, v_sz_5195_);
if (v___x_5205_ == 0)
{
lean_object* v___x_5206_; 
lean_dec(v_discr_5194_);
v___x_5206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5206_, 0, v_bs_5197_);
return v___x_5206_;
}
else
{
lean_object* v_v_5207_; lean_object* v_fst_5208_; lean_object* v_snd_5209_; lean_object* v___x_5210_; lean_object* v_bs_x27_5211_; lean_object* v_a_5213_; 
v_v_5207_ = lean_array_uget_borrowed(v_bs_5197_, v_i_5196_);
v_fst_5208_ = lean_ctor_get(v_v_5207_, 0);
lean_inc(v_fst_5208_);
v_snd_5209_ = lean_ctor_get(v_v_5207_, 1);
lean_inc(v_snd_5209_);
v___x_5210_ = lean_unsigned_to_nat(0u);
v_bs_x27_5211_ = lean_array_uset(v_bs_5197_, v_i_5196_, v___x_5210_);
if (lean_obj_tag(v_fst_5208_) == 1)
{
lean_object* v_info_5218_; lean_object* v_code_5219_; lean_object* v_borrowedValues_5220_; lean_object* v_derivedValMap_5221_; lean_object* v_varMap_5222_; lean_object* v_jpLiveVarMap_5223_; lean_object* v_idx_5224_; lean_object* v___y_5226_; lean_object* v___x_5241_; 
v_info_5218_ = lean_ctor_get(v_fst_5208_, 0);
v_code_5219_ = lean_ctor_get(v_fst_5208_, 1);
v_borrowedValues_5220_ = lean_ctor_get(v___y_5198_, 0);
v_derivedValMap_5221_ = lean_ctor_get(v___y_5198_, 1);
v_varMap_5222_ = lean_ctor_get(v___y_5198_, 2);
v_jpLiveVarMap_5223_ = lean_ctor_get(v___y_5198_, 3);
v_idx_5224_ = lean_ctor_get(v___y_5198_, 4);
v___x_5241_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_5222_, v_discr_5194_);
if (lean_obj_tag(v___x_5241_) == 0)
{
lean_inc(v_varMap_5222_);
v___y_5226_ = v_varMap_5222_;
goto v___jp_5225_;
}
else
{
lean_object* v_val_5242_; lean_object* v___x_5244_; uint8_t v_isShared_5245_; uint8_t v_isSharedCheck_5263_; 
v_val_5242_ = lean_ctor_get(v___x_5241_, 0);
v_isSharedCheck_5263_ = !lean_is_exclusive(v___x_5241_);
if (v_isSharedCheck_5263_ == 0)
{
v___x_5244_ = v___x_5241_;
v_isShared_5245_ = v_isSharedCheck_5263_;
goto v_resetjp_5243_;
}
else
{
lean_inc(v_val_5242_);
lean_dec(v___x_5241_);
v___x_5244_ = lean_box(0);
v_isShared_5245_ = v_isSharedCheck_5263_;
goto v_resetjp_5243_;
}
v_resetjp_5243_:
{
uint8_t v_persistent_5246_; lean_object* v___x_5248_; uint8_t v_isShared_5249_; uint8_t v_isSharedCheck_5260_; 
v_persistent_5246_ = lean_ctor_get_uint8(v_val_5242_, sizeof(void*)*2 + 2);
v_isSharedCheck_5260_ = !lean_is_exclusive(v_val_5242_);
if (v_isSharedCheck_5260_ == 0)
{
lean_object* v_unused_5261_; lean_object* v_unused_5262_; 
v_unused_5261_ = lean_ctor_get(v_val_5242_, 1);
lean_dec(v_unused_5261_);
v_unused_5262_ = lean_ctor_get(v_val_5242_, 0);
lean_dec(v_unused_5262_);
v___x_5248_ = v_val_5242_;
v_isShared_5249_ = v_isSharedCheck_5260_;
goto v_resetjp_5247_;
}
else
{
lean_dec(v_val_5242_);
v___x_5248_ = lean_box(0);
v_isShared_5249_ = v_isSharedCheck_5260_;
goto v_resetjp_5247_;
}
v_resetjp_5247_:
{
uint8_t v___x_5250_; lean_object* v___x_5251_; lean_object* v___x_5252_; lean_object* v___x_5254_; 
v___x_5250_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_info_5218_);
v___x_5251_ = lean_unsigned_to_nat(1u);
v___x_5252_ = lean_nat_add(v_idx_5224_, v___x_5251_);
lean_inc_ref(v_info_5218_);
if (v_isShared_5245_ == 0)
{
lean_ctor_set(v___x_5244_, 0, v_info_5218_);
v___x_5254_ = v___x_5244_;
goto v_reusejp_5253_;
}
else
{
lean_object* v_reuseFailAlloc_5259_; 
v_reuseFailAlloc_5259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5259_, 0, v_info_5218_);
v___x_5254_ = v_reuseFailAlloc_5259_;
goto v_reusejp_5253_;
}
v_reusejp_5253_:
{
lean_object* v___x_5256_; 
if (v_isShared_5249_ == 0)
{
lean_ctor_set(v___x_5248_, 1, v___x_5254_);
lean_ctor_set(v___x_5248_, 0, v___x_5252_);
v___x_5256_ = v___x_5248_;
goto v_reusejp_5255_;
}
else
{
lean_object* v_reuseFailAlloc_5258_; 
v_reuseFailAlloc_5258_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_5258_, 0, v___x_5252_);
lean_ctor_set(v_reuseFailAlloc_5258_, 1, v___x_5254_);
lean_ctor_set_uint8(v_reuseFailAlloc_5258_, sizeof(void*)*2 + 2, v_persistent_5246_);
v___x_5256_ = v_reuseFailAlloc_5258_;
goto v_reusejp_5255_;
}
v_reusejp_5255_:
{
lean_object* v___x_5257_; 
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*2, v___x_5250_);
lean_ctor_set_uint8(v___x_5256_, sizeof(void*)*2 + 1, v___x_5250_);
lean_inc(v_varMap_5222_);
lean_inc(v_discr_5194_);
v___x_5257_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_5194_, v___x_5256_, v_varMap_5222_);
v___y_5226_ = v___x_5257_;
goto v___jp_5225_;
}
}
}
}
}
v___jp_5225_:
{
lean_object* v___x_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; lean_object* v___x_5230_; 
v___x_5227_ = lean_unsigned_to_nat(1u);
v___x_5228_ = lean_nat_add(v_idx_5224_, v___x_5227_);
lean_inc(v_jpLiveVarMap_5223_);
lean_inc_ref(v_derivedValMap_5221_);
lean_inc_ref(v_borrowedValues_5220_);
v___x_5229_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5229_, 0, v_borrowedValues_5220_);
lean_ctor_set(v___x_5229_, 1, v_derivedValMap_5221_);
lean_ctor_set(v___x_5229_, 2, v___y_5226_);
lean_ctor_set(v___x_5229_, 3, v_jpLiveVarMap_5223_);
lean_ctor_set(v___x_5229_, 4, v___x_5228_);
lean_inc_ref(v_code_5219_);
v___x_5230_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_snd_5209_, v_code_5219_, v___x_5229_, v___y_5199_, v___y_5200_, v___y_5201_, v___y_5202_, v___y_5203_);
lean_dec_ref_known(v___x_5229_, 5);
lean_dec(v_snd_5209_);
if (lean_obj_tag(v___x_5230_) == 0)
{
lean_object* v_a_5231_; lean_object* v___x_5232_; 
v_a_5231_ = lean_ctor_get(v___x_5230_, 0);
lean_inc(v_a_5231_);
lean_dec_ref_known(v___x_5230_, 1);
v___x_5232_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_fst_5208_, v_a_5231_);
v_a_5213_ = v___x_5232_;
goto v___jp_5212_;
}
else
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5240_; 
lean_dec_ref_known(v_fst_5208_, 2);
lean_dec_ref(v_bs_x27_5211_);
lean_dec(v_discr_5194_);
v_a_5233_ = lean_ctor_get(v___x_5230_, 0);
v_isSharedCheck_5240_ = !lean_is_exclusive(v___x_5230_);
if (v_isSharedCheck_5240_ == 0)
{
v___x_5235_ = v___x_5230_;
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
else
{
lean_inc(v_a_5233_);
lean_dec(v___x_5230_);
v___x_5235_ = lean_box(0);
v_isShared_5236_ = v_isSharedCheck_5240_;
goto v_resetjp_5234_;
}
v_resetjp_5234_:
{
lean_object* v___x_5238_; 
if (v_isShared_5236_ == 0)
{
v___x_5238_ = v___x_5235_;
goto v_reusejp_5237_;
}
else
{
lean_object* v_reuseFailAlloc_5239_; 
v_reuseFailAlloc_5239_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5239_, 0, v_a_5233_);
v___x_5238_ = v_reuseFailAlloc_5239_;
goto v_reusejp_5237_;
}
v_reusejp_5237_:
{
return v___x_5238_;
}
}
}
}
}
else
{
lean_object* v_code_5264_; lean_object* v___x_5265_; 
v_code_5264_ = lean_ctor_get(v_fst_5208_, 0);
lean_inc_ref(v_code_5264_);
v___x_5265_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_snd_5209_, v_code_5264_, v___y_5198_, v___y_5199_, v___y_5200_, v___y_5201_, v___y_5202_, v___y_5203_);
lean_dec(v_snd_5209_);
if (lean_obj_tag(v___x_5265_) == 0)
{
lean_object* v_a_5266_; lean_object* v___x_5267_; 
v_a_5266_ = lean_ctor_get(v___x_5265_, 0);
lean_inc(v_a_5266_);
lean_dec_ref_known(v___x_5265_, 1);
v___x_5267_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_fst_5208_, v_a_5266_);
v_a_5213_ = v___x_5267_;
goto v___jp_5212_;
}
else
{
lean_object* v_a_5268_; lean_object* v___x_5270_; uint8_t v_isShared_5271_; uint8_t v_isSharedCheck_5275_; 
lean_dec_ref_known(v_fst_5208_, 1);
lean_dec_ref(v_bs_x27_5211_);
lean_dec(v_discr_5194_);
v_a_5268_ = lean_ctor_get(v___x_5265_, 0);
v_isSharedCheck_5275_ = !lean_is_exclusive(v___x_5265_);
if (v_isSharedCheck_5275_ == 0)
{
v___x_5270_ = v___x_5265_;
v_isShared_5271_ = v_isSharedCheck_5275_;
goto v_resetjp_5269_;
}
else
{
lean_inc(v_a_5268_);
lean_dec(v___x_5265_);
v___x_5270_ = lean_box(0);
v_isShared_5271_ = v_isSharedCheck_5275_;
goto v_resetjp_5269_;
}
v_resetjp_5269_:
{
lean_object* v___x_5273_; 
if (v_isShared_5271_ == 0)
{
v___x_5273_ = v___x_5270_;
goto v_reusejp_5272_;
}
else
{
lean_object* v_reuseFailAlloc_5274_; 
v_reuseFailAlloc_5274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5274_, 0, v_a_5268_);
v___x_5273_ = v_reuseFailAlloc_5274_;
goto v_reusejp_5272_;
}
v_reusejp_5272_:
{
return v___x_5273_;
}
}
}
}
v___jp_5212_:
{
size_t v___x_5214_; size_t v___x_5215_; lean_object* v___x_5216_; 
v___x_5214_ = ((size_t)1ULL);
v___x_5215_ = lean_usize_add(v_i_5196_, v___x_5214_);
v___x_5216_ = lean_array_uset(v_bs_x27_5211_, v_i_5196_, v_a_5213_);
v_i_5196_ = v___x_5215_;
v_bs_5197_ = v___x_5216_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___boxed(lean_object* v_discr_5276_, lean_object* v_sz_5277_, lean_object* v_i_5278_, lean_object* v_bs_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_){
_start:
{
size_t v_sz_boxed_5287_; size_t v_i_boxed_5288_; lean_object* v_res_5289_; 
v_sz_boxed_5287_ = lean_unbox_usize(v_sz_5277_);
lean_dec(v_sz_5277_);
v_i_boxed_5288_ = lean_unbox_usize(v_i_5278_);
lean_dec(v_i_5278_);
v_res_5289_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(v_discr_5276_, v_sz_boxed_5287_, v_i_boxed_5288_, v_bs_5279_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_);
lean_dec(v___y_5285_);
lean_dec_ref(v___y_5284_);
lean_dec(v___y_5283_);
lean_dec_ref(v___y_5282_);
lean_dec(v___y_5281_);
lean_dec_ref(v___y_5280_);
return v_res_5289_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1(void){
_start:
{
lean_object* v___x_5291_; lean_object* v___x_5292_; lean_object* v___x_5293_; lean_object* v___x_5294_; lean_object* v___x_5295_; lean_object* v___x_5296_; 
v___x_5291_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_5292_ = lean_unsigned_to_nat(59u);
v___x_5293_ = lean_unsigned_to_nat(678u);
v___x_5294_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0));
v___x_5295_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_5296_ = l_mkPanicMessageWithDecl(v___x_5295_, v___x_5294_, v___x_5293_, v___x_5292_, v___x_5291_);
return v___x_5296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(lean_object* v_code_5297_, lean_object* v___y_5298_, lean_object* v___y_5299_, lean_object* v___y_5300_, lean_object* v___y_5301_, lean_object* v___y_5302_, lean_object* v___y_5303_){
_start:
{
switch(lean_obj_tag(v_code_5297_))
{
case 0:
{
lean_object* v_decl_5305_; lean_object* v_k_5306_; lean_object* v_fvarId_5307_; lean_object* v_type_5308_; lean_object* v_value_5309_; lean_object* v___y_5311_; 
v_decl_5305_ = lean_ctor_get(v_code_5297_, 0);
lean_inc_ref(v_decl_5305_);
v_k_5306_ = lean_ctor_get(v_code_5297_, 1);
v_fvarId_5307_ = lean_ctor_get(v_decl_5305_, 0);
v_type_5308_ = lean_ctor_get(v_decl_5305_, 2);
v_value_5309_ = lean_ctor_get(v_decl_5305_, 3);
if (lean_obj_tag(v_value_5309_) == 5)
{
lean_object* v_i_5328_; lean_object* v___x_5329_; 
v_i_5328_ = lean_ctor_get(v_value_5309_, 0);
lean_inc_ref(v_i_5328_);
v___x_5329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5329_, 0, v_i_5328_);
v___y_5311_ = v___x_5329_;
goto v___jp_5310_;
}
else
{
lean_object* v___x_5330_; 
v___x_5330_ = lean_box(0);
v___y_5311_ = v___x_5330_;
goto v___jp_5310_;
}
v___jp_5310_:
{
lean_object* v_borrowedValues_5312_; lean_object* v_derivedValMap_5313_; lean_object* v_varMap_5314_; lean_object* v_jpLiveVarMap_5315_; lean_object* v_idx_5316_; uint8_t v___x_5317_; uint8_t v___x_5318_; uint8_t v___x_5319_; lean_object* v_varInfo_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; lean_object* v___x_5325_; 
v_borrowedValues_5312_ = lean_ctor_get(v___y_5298_, 0);
v_derivedValMap_5313_ = lean_ctor_get(v___y_5298_, 1);
v_varMap_5314_ = lean_ctor_get(v___y_5298_, 2);
v_jpLiveVarMap_5315_ = lean_ctor_get(v___y_5298_, 3);
v_idx_5316_ = lean_ctor_get(v___y_5298_, 4);
v___x_5317_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_5308_);
v___x_5318_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_5308_);
v___x_5319_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_5309_);
lean_inc(v_idx_5316_);
v_varInfo_5320_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_varInfo_5320_, 0, v_idx_5316_);
lean_ctor_set(v_varInfo_5320_, 1, v___y_5311_);
lean_ctor_set_uint8(v_varInfo_5320_, sizeof(void*)*2, v___x_5317_);
lean_ctor_set_uint8(v_varInfo_5320_, sizeof(void*)*2 + 1, v___x_5318_);
lean_ctor_set_uint8(v_varInfo_5320_, sizeof(void*)*2 + 2, v___x_5319_);
lean_inc(v_varMap_5314_);
lean_inc(v_fvarId_5307_);
v___x_5321_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5307_, v_varInfo_5320_, v_varMap_5314_);
v___x_5322_ = lean_unsigned_to_nat(1u);
v___x_5323_ = lean_nat_add(v_idx_5316_, v___x_5322_);
lean_inc(v_jpLiveVarMap_5315_);
lean_inc_ref(v_derivedValMap_5313_);
lean_inc_ref(v_borrowedValues_5312_);
v___x_5324_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5324_, 0, v_borrowedValues_5312_);
lean_ctor_set(v___x_5324_, 1, v_derivedValMap_5313_);
lean_ctor_set(v___x_5324_, 2, v___x_5321_);
lean_ctor_set(v___x_5324_, 3, v_jpLiveVarMap_5315_);
lean_ctor_set(v___x_5324_, 4, v___x_5323_);
lean_inc_ref(v_k_5306_);
v___x_5325_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5306_, v___x_5324_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5325_) == 0)
{
lean_object* v_a_5326_; lean_object* v___x_5327_; 
v_a_5326_ = lean_ctor_get(v___x_5325_, 0);
lean_inc(v_a_5326_);
lean_dec_ref_known(v___x_5325_, 1);
v___x_5327_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(v_code_5297_, v_decl_5305_, v_a_5326_, v___x_5324_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
lean_dec_ref_known(v___x_5324_, 5);
return v___x_5327_;
}
else
{
lean_dec_ref_known(v___x_5324_, 5);
lean_dec_ref(v_decl_5305_);
lean_dec_ref_known(v_code_5297_, 2);
return v___x_5325_;
}
}
}
case 2:
{
lean_object* v_decl_5331_; lean_object* v_k_5332_; lean_object* v_fst_5334_; lean_object* v_snd_5335_; lean_object* v_params_5383_; lean_object* v_type_5384_; lean_object* v_value_5385_; uint8_t v___x_5386_; lean_object* v___x_5387_; lean_object* v___x_5388_; uint8_t v___x_5389_; 
v_decl_5331_ = lean_ctor_get(v_code_5297_, 0);
v_k_5332_ = lean_ctor_get(v_code_5297_, 1);
v_params_5383_ = lean_ctor_get(v_decl_5331_, 2);
v_type_5384_ = lean_ctor_get(v_decl_5331_, 3);
v_value_5385_ = lean_ctor_get(v_decl_5331_, 4);
v___x_5386_ = 1;
v___x_5387_ = lean_unsigned_to_nat(0u);
v___x_5388_ = lean_array_get_size(v_params_5383_);
v___x_5389_ = lean_nat_dec_lt(v___x_5387_, v___x_5388_);
if (v___x_5389_ == 0)
{
lean_object* v___x_5390_; lean_object* v___x_5391_; lean_object* v___x_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; 
v___x_5390_ = lean_st_ref_get(v___y_5299_);
v___x_5391_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5391_);
v___x_5392_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5393_ = lean_st_ref_put(v___y_5299_, v___x_5392_);
lean_inc_ref(v_value_5385_);
v___x_5394_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5385_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5394_) == 0)
{
lean_object* v_a_5395_; lean_object* v___x_5396_; 
v_a_5395_ = lean_ctor_get(v___x_5394_, 0);
lean_inc(v_a_5395_);
lean_dec_ref_known(v___x_5394_, 1);
v___x_5396_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5383_, v_a_5395_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5396_) == 0)
{
lean_object* v_a_5397_; lean_object* v___x_5398_; 
v_a_5397_ = lean_ctor_get(v___x_5396_, 0);
lean_inc(v_a_5397_);
lean_dec_ref_known(v___x_5396_, 1);
lean_inc_ref(v_params_5383_);
lean_inc_ref(v_type_5384_);
lean_inc_ref(v_decl_5331_);
v___x_5398_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5386_, v_decl_5331_, v_type_5384_, v_params_5383_, v_a_5397_, v___y_5301_);
if (lean_obj_tag(v___x_5398_) == 0)
{
lean_object* v_a_5399_; lean_object* v___x_5400_; lean_object* v___x_5401_; lean_object* v___x_5402_; 
v_a_5399_ = lean_ctor_get(v___x_5398_, 0);
lean_inc(v_a_5399_);
lean_dec_ref_known(v___x_5398_, 1);
v___x_5400_ = lean_st_ref_get(v___y_5299_);
v___x_5401_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5401_);
v___x_5402_ = lean_st_ref_put(v___y_5299_, v___x_5390_);
v_fst_5334_ = v_a_5399_;
v_snd_5335_ = v___x_5400_;
goto v___jp_5333_;
}
else
{
lean_object* v_a_5403_; lean_object* v___x_5405_; uint8_t v_isShared_5406_; uint8_t v_isSharedCheck_5410_; 
lean_dec(v___x_5390_);
lean_dec_ref_known(v_code_5297_, 2);
v_a_5403_ = lean_ctor_get(v___x_5398_, 0);
v_isSharedCheck_5410_ = !lean_is_exclusive(v___x_5398_);
if (v_isSharedCheck_5410_ == 0)
{
v___x_5405_ = v___x_5398_;
v_isShared_5406_ = v_isSharedCheck_5410_;
goto v_resetjp_5404_;
}
else
{
lean_inc(v_a_5403_);
lean_dec(v___x_5398_);
v___x_5405_ = lean_box(0);
v_isShared_5406_ = v_isSharedCheck_5410_;
goto v_resetjp_5404_;
}
v_resetjp_5404_:
{
lean_object* v___x_5408_; 
if (v_isShared_5406_ == 0)
{
v___x_5408_ = v___x_5405_;
goto v_reusejp_5407_;
}
else
{
lean_object* v_reuseFailAlloc_5409_; 
v_reuseFailAlloc_5409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5409_, 0, v_a_5403_);
v___x_5408_ = v_reuseFailAlloc_5409_;
goto v_reusejp_5407_;
}
v_reusejp_5407_:
{
return v___x_5408_;
}
}
}
}
else
{
lean_dec(v___x_5390_);
lean_dec_ref_known(v_code_5297_, 2);
return v___x_5396_;
}
}
else
{
lean_dec(v___x_5390_);
lean_dec_ref_known(v_code_5297_, 2);
return v___x_5394_;
}
}
else
{
size_t v___x_5411_; size_t v___x_5412_; lean_object* v___x_5413_; lean_object* v___x_5414_; lean_object* v___x_5415_; lean_object* v___x_5416_; lean_object* v___x_5417_; lean_object* v___x_5418_; 
v___x_5411_ = ((size_t)0ULL);
v___x_5412_ = lean_usize_of_nat(v___x_5388_);
lean_inc_ref(v___y_5298_);
v___x_5413_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5383_, v___x_5411_, v___x_5412_, v___y_5298_);
v___x_5414_ = lean_st_ref_get(v___y_5299_);
v___x_5415_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5415_);
v___x_5416_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5417_ = lean_st_ref_put(v___y_5299_, v___x_5416_);
lean_inc_ref(v_value_5385_);
v___x_5418_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5385_, v___x_5413_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5418_) == 0)
{
lean_object* v_a_5419_; lean_object* v___x_5420_; 
v_a_5419_ = lean_ctor_get(v___x_5418_, 0);
lean_inc(v_a_5419_);
lean_dec_ref_known(v___x_5418_, 1);
v___x_5420_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5383_, v_a_5419_, v___x_5413_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
lean_dec_ref(v___x_5413_);
if (lean_obj_tag(v___x_5420_) == 0)
{
lean_object* v_a_5421_; lean_object* v___x_5422_; 
v_a_5421_ = lean_ctor_get(v___x_5420_, 0);
lean_inc(v_a_5421_);
lean_dec_ref_known(v___x_5420_, 1);
lean_inc_ref(v_params_5383_);
lean_inc_ref(v_type_5384_);
lean_inc_ref(v_decl_5331_);
v___x_5422_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5386_, v_decl_5331_, v_type_5384_, v_params_5383_, v_a_5421_, v___y_5301_);
if (lean_obj_tag(v___x_5422_) == 0)
{
lean_object* v_a_5423_; lean_object* v___x_5424_; lean_object* v___x_5425_; lean_object* v___x_5426_; 
v_a_5423_ = lean_ctor_get(v___x_5422_, 0);
lean_inc(v_a_5423_);
lean_dec_ref_known(v___x_5422_, 1);
v___x_5424_ = lean_st_ref_get(v___y_5299_);
v___x_5425_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5425_);
v___x_5426_ = lean_st_ref_put(v___y_5299_, v___x_5414_);
v_fst_5334_ = v_a_5423_;
v_snd_5335_ = v___x_5424_;
goto v___jp_5333_;
}
else
{
lean_object* v_a_5427_; lean_object* v___x_5429_; uint8_t v_isShared_5430_; uint8_t v_isSharedCheck_5434_; 
lean_dec(v___x_5414_);
lean_dec_ref_known(v_code_5297_, 2);
v_a_5427_ = lean_ctor_get(v___x_5422_, 0);
v_isSharedCheck_5434_ = !lean_is_exclusive(v___x_5422_);
if (v_isSharedCheck_5434_ == 0)
{
v___x_5429_ = v___x_5422_;
v_isShared_5430_ = v_isSharedCheck_5434_;
goto v_resetjp_5428_;
}
else
{
lean_inc(v_a_5427_);
lean_dec(v___x_5422_);
v___x_5429_ = lean_box(0);
v_isShared_5430_ = v_isSharedCheck_5434_;
goto v_resetjp_5428_;
}
v_resetjp_5428_:
{
lean_object* v___x_5432_; 
if (v_isShared_5430_ == 0)
{
v___x_5432_ = v___x_5429_;
goto v_reusejp_5431_;
}
else
{
lean_object* v_reuseFailAlloc_5433_; 
v_reuseFailAlloc_5433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5433_, 0, v_a_5427_);
v___x_5432_ = v_reuseFailAlloc_5433_;
goto v_reusejp_5431_;
}
v_reusejp_5431_:
{
return v___x_5432_;
}
}
}
}
else
{
lean_dec(v___x_5414_);
lean_dec_ref_known(v_code_5297_, 2);
return v___x_5420_;
}
}
else
{
lean_dec(v___x_5414_);
lean_dec_ref(v___x_5413_);
lean_dec_ref_known(v_code_5297_, 2);
return v___x_5418_;
}
}
v___jp_5333_:
{
lean_object* v_fvarId_5336_; lean_object* v_borrowedValues_5337_; lean_object* v_derivedValMap_5338_; lean_object* v_varMap_5339_; lean_object* v_jpLiveVarMap_5340_; lean_object* v_idx_5341_; lean_object* v___x_5342_; lean_object* v___x_5343_; lean_object* v___x_5344_; 
v_fvarId_5336_ = lean_ctor_get(v_fst_5334_, 0);
v_borrowedValues_5337_ = lean_ctor_get(v___y_5298_, 0);
v_derivedValMap_5338_ = lean_ctor_get(v___y_5298_, 1);
v_varMap_5339_ = lean_ctor_get(v___y_5298_, 2);
v_jpLiveVarMap_5340_ = lean_ctor_get(v___y_5298_, 3);
v_idx_5341_ = lean_ctor_get(v___y_5298_, 4);
lean_inc(v_jpLiveVarMap_5340_);
lean_inc(v_fvarId_5336_);
v___x_5342_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5336_, v_snd_5335_, v_jpLiveVarMap_5340_);
lean_inc(v_idx_5341_);
lean_inc(v_varMap_5339_);
lean_inc_ref(v_derivedValMap_5338_);
lean_inc_ref(v_borrowedValues_5337_);
v___x_5343_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5343_, 0, v_borrowedValues_5337_);
lean_ctor_set(v___x_5343_, 1, v_derivedValMap_5338_);
lean_ctor_set(v___x_5343_, 2, v_varMap_5339_);
lean_ctor_set(v___x_5343_, 3, v___x_5342_);
lean_ctor_set(v___x_5343_, 4, v_idx_5341_);
lean_inc_ref(v_k_5332_);
v___x_5344_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5332_, v___x_5343_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
lean_dec_ref_known(v___x_5343_, 5);
if (lean_obj_tag(v___x_5344_) == 0)
{
lean_object* v_a_5345_; lean_object* v___x_5347_; uint8_t v_isShared_5348_; uint8_t v_isSharedCheck_5382_; 
v_a_5345_ = lean_ctor_get(v___x_5344_, 0);
v_isSharedCheck_5382_ = !lean_is_exclusive(v___x_5344_);
if (v_isSharedCheck_5382_ == 0)
{
v___x_5347_ = v___x_5344_;
v_isShared_5348_ = v_isSharedCheck_5382_;
goto v_resetjp_5346_;
}
else
{
lean_inc(v_a_5345_);
lean_dec(v___x_5344_);
v___x_5347_ = lean_box(0);
v_isShared_5348_ = v_isSharedCheck_5382_;
goto v_resetjp_5346_;
}
v_resetjp_5346_:
{
size_t v___x_5349_; size_t v___x_5350_; uint8_t v___x_5351_; 
v___x_5349_ = lean_ptr_addr(v_k_5332_);
v___x_5350_ = lean_ptr_addr(v_a_5345_);
v___x_5351_ = lean_usize_dec_eq(v___x_5349_, v___x_5350_);
if (v___x_5351_ == 0)
{
lean_object* v___x_5353_; uint8_t v_isShared_5354_; uint8_t v_isSharedCheck_5361_; 
v_isSharedCheck_5361_ = !lean_is_exclusive(v_code_5297_);
if (v_isSharedCheck_5361_ == 0)
{
lean_object* v_unused_5362_; lean_object* v_unused_5363_; 
v_unused_5362_ = lean_ctor_get(v_code_5297_, 1);
lean_dec(v_unused_5362_);
v_unused_5363_ = lean_ctor_get(v_code_5297_, 0);
lean_dec(v_unused_5363_);
v___x_5353_ = v_code_5297_;
v_isShared_5354_ = v_isSharedCheck_5361_;
goto v_resetjp_5352_;
}
else
{
lean_dec(v_code_5297_);
v___x_5353_ = lean_box(0);
v_isShared_5354_ = v_isSharedCheck_5361_;
goto v_resetjp_5352_;
}
v_resetjp_5352_:
{
lean_object* v___x_5356_; 
if (v_isShared_5354_ == 0)
{
lean_ctor_set(v___x_5353_, 1, v_a_5345_);
lean_ctor_set(v___x_5353_, 0, v_fst_5334_);
v___x_5356_ = v___x_5353_;
goto v_reusejp_5355_;
}
else
{
lean_object* v_reuseFailAlloc_5360_; 
v_reuseFailAlloc_5360_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5360_, 0, v_fst_5334_);
lean_ctor_set(v_reuseFailAlloc_5360_, 1, v_a_5345_);
v___x_5356_ = v_reuseFailAlloc_5360_;
goto v_reusejp_5355_;
}
v_reusejp_5355_:
{
lean_object* v___x_5358_; 
if (v_isShared_5348_ == 0)
{
lean_ctor_set(v___x_5347_, 0, v___x_5356_);
v___x_5358_ = v___x_5347_;
goto v_reusejp_5357_;
}
else
{
lean_object* v_reuseFailAlloc_5359_; 
v_reuseFailAlloc_5359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5359_, 0, v___x_5356_);
v___x_5358_ = v_reuseFailAlloc_5359_;
goto v_reusejp_5357_;
}
v_reusejp_5357_:
{
return v___x_5358_;
}
}
}
}
else
{
size_t v___x_5364_; size_t v___x_5365_; uint8_t v___x_5366_; 
v___x_5364_ = lean_ptr_addr(v_decl_5331_);
v___x_5365_ = lean_ptr_addr(v_fst_5334_);
v___x_5366_ = lean_usize_dec_eq(v___x_5364_, v___x_5365_);
if (v___x_5366_ == 0)
{
lean_object* v___x_5368_; uint8_t v_isShared_5369_; uint8_t v_isSharedCheck_5376_; 
v_isSharedCheck_5376_ = !lean_is_exclusive(v_code_5297_);
if (v_isSharedCheck_5376_ == 0)
{
lean_object* v_unused_5377_; lean_object* v_unused_5378_; 
v_unused_5377_ = lean_ctor_get(v_code_5297_, 1);
lean_dec(v_unused_5377_);
v_unused_5378_ = lean_ctor_get(v_code_5297_, 0);
lean_dec(v_unused_5378_);
v___x_5368_ = v_code_5297_;
v_isShared_5369_ = v_isSharedCheck_5376_;
goto v_resetjp_5367_;
}
else
{
lean_dec(v_code_5297_);
v___x_5368_ = lean_box(0);
v_isShared_5369_ = v_isSharedCheck_5376_;
goto v_resetjp_5367_;
}
v_resetjp_5367_:
{
lean_object* v___x_5371_; 
if (v_isShared_5369_ == 0)
{
lean_ctor_set(v___x_5368_, 1, v_a_5345_);
lean_ctor_set(v___x_5368_, 0, v_fst_5334_);
v___x_5371_ = v___x_5368_;
goto v_reusejp_5370_;
}
else
{
lean_object* v_reuseFailAlloc_5375_; 
v_reuseFailAlloc_5375_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5375_, 0, v_fst_5334_);
lean_ctor_set(v_reuseFailAlloc_5375_, 1, v_a_5345_);
v___x_5371_ = v_reuseFailAlloc_5375_;
goto v_reusejp_5370_;
}
v_reusejp_5370_:
{
lean_object* v___x_5373_; 
if (v_isShared_5348_ == 0)
{
lean_ctor_set(v___x_5347_, 0, v___x_5371_);
v___x_5373_ = v___x_5347_;
goto v_reusejp_5372_;
}
else
{
lean_object* v_reuseFailAlloc_5374_; 
v_reuseFailAlloc_5374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5374_, 0, v___x_5371_);
v___x_5373_ = v_reuseFailAlloc_5374_;
goto v_reusejp_5372_;
}
v_reusejp_5372_:
{
return v___x_5373_;
}
}
}
}
else
{
lean_object* v___x_5380_; 
lean_dec(v_a_5345_);
lean_dec_ref(v_fst_5334_);
if (v_isShared_5348_ == 0)
{
lean_ctor_set(v___x_5347_, 0, v_code_5297_);
v___x_5380_ = v___x_5347_;
goto v_reusejp_5379_;
}
else
{
lean_object* v_reuseFailAlloc_5381_; 
v_reuseFailAlloc_5381_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5381_, 0, v_code_5297_);
v___x_5380_ = v_reuseFailAlloc_5381_;
goto v_reusejp_5379_;
}
v_reusejp_5379_:
{
return v___x_5380_;
}
}
}
}
}
else
{
lean_dec_ref(v_fst_5334_);
lean_dec_ref_known(v_code_5297_, 2);
return v___x_5344_;
}
}
}
case 3:
{
lean_object* v_fvarId_5435_; lean_object* v_args_5436_; lean_object* v_jpLiveVarMap_5437_; lean_object* v___x_5438_; lean_object* v___x_5439_; lean_object* v___x_5440_; lean_object* v___x_5441_; uint8_t v___x_5442_; lean_object* v___x_5443_; 
v_fvarId_5435_ = lean_ctor_get(v_code_5297_, 0);
v_args_5436_ = lean_ctor_get(v_code_5297_, 1);
lean_inc_ref(v_args_5436_);
v_jpLiveVarMap_5437_ = lean_ctor_get(v___y_5298_, 3);
v___x_5438_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_fvarId_5435_);
lean_inc(v_jpLiveVarMap_5437_);
v___x_5439_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_5438_, v_jpLiveVarMap_5437_, v_fvarId_5435_);
v___x_5440_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5440_);
v___x_5441_ = lean_st_ref_put(v___y_5299_, v___x_5439_);
v___x_5442_ = 1;
v___x_5443_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_5442_, v_fvarId_5435_, v___y_5301_);
if (lean_obj_tag(v___x_5443_) == 0)
{
lean_object* v_a_5444_; lean_object* v___y_5446_; 
v_a_5444_ = lean_ctor_get(v___x_5443_, 0);
lean_inc(v_a_5444_);
lean_dec_ref_known(v___x_5443_, 1);
if (lean_obj_tag(v_a_5444_) == 0)
{
lean_object* v___x_5467_; lean_object* v___x_5468_; 
v___x_5467_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10);
v___x_5468_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(v___x_5467_);
v___y_5446_ = v___x_5468_;
goto v___jp_5445_;
}
else
{
lean_object* v_val_5469_; 
v_val_5469_ = lean_ctor_get(v_a_5444_, 0);
lean_inc(v_val_5469_);
lean_dec_ref_known(v_a_5444_, 1);
v___y_5446_ = v_val_5469_;
goto v___jp_5445_;
}
v___jp_5445_:
{
lean_object* v_params_5447_; lean_object* v___x_5448_; 
v_params_5447_ = lean_ctor_get(v___y_5446_, 2);
lean_inc_ref(v_params_5447_);
lean_dec_ref(v___y_5446_);
v___x_5448_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_5436_, v_params_5447_, v_code_5297_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5448_) == 0)
{
lean_object* v_a_5449_; lean_object* v___x_5450_; 
v_a_5449_ = lean_ctor_get(v___x_5448_, 0);
lean_inc(v_a_5449_);
lean_dec_ref_known(v___x_5448_, 1);
v___x_5450_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_5436_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5450_) == 0)
{
lean_object* v___x_5452_; uint8_t v_isShared_5453_; uint8_t v_isSharedCheck_5457_; 
v_isSharedCheck_5457_ = !lean_is_exclusive(v___x_5450_);
if (v_isSharedCheck_5457_ == 0)
{
lean_object* v_unused_5458_; 
v_unused_5458_ = lean_ctor_get(v___x_5450_, 0);
lean_dec(v_unused_5458_);
v___x_5452_ = v___x_5450_;
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
else
{
lean_dec(v___x_5450_);
v___x_5452_ = lean_box(0);
v_isShared_5453_ = v_isSharedCheck_5457_;
goto v_resetjp_5451_;
}
v_resetjp_5451_:
{
lean_object* v___x_5455_; 
if (v_isShared_5453_ == 0)
{
lean_ctor_set(v___x_5452_, 0, v_a_5449_);
v___x_5455_ = v___x_5452_;
goto v_reusejp_5454_;
}
else
{
lean_object* v_reuseFailAlloc_5456_; 
v_reuseFailAlloc_5456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5456_, 0, v_a_5449_);
v___x_5455_ = v_reuseFailAlloc_5456_;
goto v_reusejp_5454_;
}
v_reusejp_5454_:
{
return v___x_5455_;
}
}
}
else
{
lean_object* v_a_5459_; lean_object* v___x_5461_; uint8_t v_isShared_5462_; uint8_t v_isSharedCheck_5466_; 
lean_dec(v_a_5449_);
v_a_5459_ = lean_ctor_get(v___x_5450_, 0);
v_isSharedCheck_5466_ = !lean_is_exclusive(v___x_5450_);
if (v_isSharedCheck_5466_ == 0)
{
v___x_5461_ = v___x_5450_;
v_isShared_5462_ = v_isSharedCheck_5466_;
goto v_resetjp_5460_;
}
else
{
lean_inc(v_a_5459_);
lean_dec(v___x_5450_);
v___x_5461_ = lean_box(0);
v_isShared_5462_ = v_isSharedCheck_5466_;
goto v_resetjp_5460_;
}
v_resetjp_5460_:
{
lean_object* v___x_5464_; 
if (v_isShared_5462_ == 0)
{
v___x_5464_ = v___x_5461_;
goto v_reusejp_5463_;
}
else
{
lean_object* v_reuseFailAlloc_5465_; 
v_reuseFailAlloc_5465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5465_, 0, v_a_5459_);
v___x_5464_ = v_reuseFailAlloc_5465_;
goto v_reusejp_5463_;
}
v_reusejp_5463_:
{
return v___x_5464_;
}
}
}
}
else
{
lean_dec_ref(v_args_5436_);
return v___x_5448_;
}
}
}
else
{
lean_object* v_a_5470_; lean_object* v___x_5472_; uint8_t v_isShared_5473_; uint8_t v_isSharedCheck_5477_; 
lean_dec_ref(v_args_5436_);
lean_dec_ref_known(v_code_5297_, 2);
v_a_5470_ = lean_ctor_get(v___x_5443_, 0);
v_isSharedCheck_5477_ = !lean_is_exclusive(v___x_5443_);
if (v_isSharedCheck_5477_ == 0)
{
v___x_5472_ = v___x_5443_;
v_isShared_5473_ = v_isSharedCheck_5477_;
goto v_resetjp_5471_;
}
else
{
lean_inc(v_a_5470_);
lean_dec(v___x_5443_);
v___x_5472_ = lean_box(0);
v_isShared_5473_ = v_isSharedCheck_5477_;
goto v_resetjp_5471_;
}
v_resetjp_5471_:
{
lean_object* v___x_5475_; 
if (v_isShared_5473_ == 0)
{
v___x_5475_ = v___x_5472_;
goto v_reusejp_5474_;
}
else
{
lean_object* v_reuseFailAlloc_5476_; 
v_reuseFailAlloc_5476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5476_, 0, v_a_5470_);
v___x_5475_ = v_reuseFailAlloc_5476_;
goto v_reusejp_5474_;
}
v_reusejp_5474_:
{
return v___x_5475_;
}
}
}
}
case 4:
{
lean_object* v_cases_5478_; lean_object* v_typeName_5479_; lean_object* v_resultType_5480_; lean_object* v_discr_5481_; lean_object* v_alts_5482_; size_t v_sz_5483_; size_t v___x_5484_; lean_object* v___x_5485_; 
v_cases_5478_ = lean_ctor_get(v_code_5297_, 0);
v_typeName_5479_ = lean_ctor_get(v_cases_5478_, 0);
v_resultType_5480_ = lean_ctor_get(v_cases_5478_, 1);
v_discr_5481_ = lean_ctor_get(v_cases_5478_, 2);
v_alts_5482_ = lean_ctor_get(v_cases_5478_, 3);
v_sz_5483_ = lean_array_size(v_alts_5482_);
v___x_5484_ = ((size_t)0ULL);
lean_inc_ref(v_alts_5482_);
lean_inc_ref(v_cases_5478_);
v___x_5485_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(v_cases_5478_, v_sz_5483_, v___x_5484_, v_alts_5482_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5485_) == 0)
{
lean_object* v_a_5486_; lean_object* v___y_5488_; lean_object* v___x_5533_; lean_object* v___x_5534_; lean_object* v___x_5535_; uint8_t v___x_5536_; 
v_a_5486_ = lean_ctor_get(v___x_5485_, 0);
lean_inc(v_a_5486_);
lean_dec_ref_known(v___x_5485_, 1);
v___x_5533_ = lean_unsigned_to_nat(0u);
v___x_5534_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5535_ = lean_array_get_size(v_a_5486_);
v___x_5536_ = lean_nat_dec_lt(v___x_5533_, v___x_5535_);
if (v___x_5536_ == 0)
{
v___y_5488_ = v___x_5534_;
goto v___jp_5487_;
}
else
{
uint8_t v___x_5537_; 
v___x_5537_ = lean_nat_dec_le(v___x_5535_, v___x_5535_);
if (v___x_5537_ == 0)
{
if (v___x_5536_ == 0)
{
v___y_5488_ = v___x_5534_;
goto v___jp_5487_;
}
else
{
size_t v___x_5538_; lean_object* v___x_5539_; 
v___x_5538_ = lean_usize_of_nat(v___x_5535_);
v___x_5539_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_a_5486_, v___x_5484_, v___x_5538_, v___x_5534_);
v___y_5488_ = v___x_5539_;
goto v___jp_5487_;
}
}
else
{
size_t v___x_5540_; lean_object* v___x_5541_; 
v___x_5540_ = lean_usize_of_nat(v___x_5535_);
v___x_5541_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_a_5486_, v___x_5484_, v___x_5540_, v___x_5534_);
v___y_5488_ = v___x_5541_;
goto v___jp_5487_;
}
}
v___jp_5487_:
{
lean_object* v___x_5489_; lean_object* v___x_5490_; lean_object* v___x_5491_; 
v___x_5489_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5489_);
v___x_5490_ = lean_st_ref_put(v___y_5299_, v___y_5488_);
lean_inc(v_discr_5481_);
v___x_5491_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_discr_5481_, v___y_5298_, v___y_5299_);
if (lean_obj_tag(v___x_5491_) == 0)
{
size_t v_sz_5492_; lean_object* v___x_5493_; 
lean_dec_ref_known(v___x_5491_, 1);
v_sz_5492_ = lean_array_size(v_a_5486_);
lean_inc(v_discr_5481_);
v___x_5493_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(v_discr_5481_, v_sz_5492_, v___x_5484_, v_a_5486_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5493_) == 0)
{
lean_object* v_a_5494_; lean_object* v___x_5496_; uint8_t v_isShared_5497_; uint8_t v_isSharedCheck_5516_; 
v_a_5494_ = lean_ctor_get(v___x_5493_, 0);
v_isSharedCheck_5516_ = !lean_is_exclusive(v___x_5493_);
if (v_isSharedCheck_5516_ == 0)
{
v___x_5496_ = v___x_5493_;
v_isShared_5497_ = v_isSharedCheck_5516_;
goto v_resetjp_5495_;
}
else
{
lean_inc(v_a_5494_);
lean_dec(v___x_5493_);
v___x_5496_ = lean_box(0);
v_isShared_5497_ = v_isSharedCheck_5516_;
goto v_resetjp_5495_;
}
v_resetjp_5495_:
{
size_t v___x_5498_; size_t v___x_5499_; uint8_t v___x_5500_; 
v___x_5498_ = lean_ptr_addr(v_alts_5482_);
v___x_5499_ = lean_ptr_addr(v_a_5494_);
v___x_5500_ = lean_usize_dec_eq(v___x_5498_, v___x_5499_);
if (v___x_5500_ == 0)
{
lean_object* v___x_5502_; uint8_t v_isShared_5503_; uint8_t v_isSharedCheck_5511_; 
lean_inc(v_discr_5481_);
lean_inc_ref(v_resultType_5480_);
lean_inc(v_typeName_5479_);
v_isSharedCheck_5511_ = !lean_is_exclusive(v_code_5297_);
if (v_isSharedCheck_5511_ == 0)
{
lean_object* v_unused_5512_; 
v_unused_5512_ = lean_ctor_get(v_code_5297_, 0);
lean_dec(v_unused_5512_);
v___x_5502_ = v_code_5297_;
v_isShared_5503_ = v_isSharedCheck_5511_;
goto v_resetjp_5501_;
}
else
{
lean_dec(v_code_5297_);
v___x_5502_ = lean_box(0);
v_isShared_5503_ = v_isSharedCheck_5511_;
goto v_resetjp_5501_;
}
v_resetjp_5501_:
{
lean_object* v___x_5504_; lean_object* v___x_5506_; 
v___x_5504_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5504_, 0, v_typeName_5479_);
lean_ctor_set(v___x_5504_, 1, v_resultType_5480_);
lean_ctor_set(v___x_5504_, 2, v_discr_5481_);
lean_ctor_set(v___x_5504_, 3, v_a_5494_);
if (v_isShared_5503_ == 0)
{
lean_ctor_set(v___x_5502_, 0, v___x_5504_);
v___x_5506_ = v___x_5502_;
goto v_reusejp_5505_;
}
else
{
lean_object* v_reuseFailAlloc_5510_; 
v_reuseFailAlloc_5510_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5510_, 0, v___x_5504_);
v___x_5506_ = v_reuseFailAlloc_5510_;
goto v_reusejp_5505_;
}
v_reusejp_5505_:
{
lean_object* v___x_5508_; 
if (v_isShared_5497_ == 0)
{
lean_ctor_set(v___x_5496_, 0, v___x_5506_);
v___x_5508_ = v___x_5496_;
goto v_reusejp_5507_;
}
else
{
lean_object* v_reuseFailAlloc_5509_; 
v_reuseFailAlloc_5509_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5509_, 0, v___x_5506_);
v___x_5508_ = v_reuseFailAlloc_5509_;
goto v_reusejp_5507_;
}
v_reusejp_5507_:
{
return v___x_5508_;
}
}
}
}
else
{
lean_object* v___x_5514_; 
lean_dec(v_a_5494_);
if (v_isShared_5497_ == 0)
{
lean_ctor_set(v___x_5496_, 0, v_code_5297_);
v___x_5514_ = v___x_5496_;
goto v_reusejp_5513_;
}
else
{
lean_object* v_reuseFailAlloc_5515_; 
v_reuseFailAlloc_5515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5515_, 0, v_code_5297_);
v___x_5514_ = v_reuseFailAlloc_5515_;
goto v_reusejp_5513_;
}
v_reusejp_5513_:
{
return v___x_5514_;
}
}
}
}
else
{
lean_object* v_a_5517_; lean_object* v___x_5519_; uint8_t v_isShared_5520_; uint8_t v_isSharedCheck_5524_; 
lean_dec_ref_known(v_code_5297_, 1);
v_a_5517_ = lean_ctor_get(v___x_5493_, 0);
v_isSharedCheck_5524_ = !lean_is_exclusive(v___x_5493_);
if (v_isSharedCheck_5524_ == 0)
{
v___x_5519_ = v___x_5493_;
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
else
{
lean_inc(v_a_5517_);
lean_dec(v___x_5493_);
v___x_5519_ = lean_box(0);
v_isShared_5520_ = v_isSharedCheck_5524_;
goto v_resetjp_5518_;
}
v_resetjp_5518_:
{
lean_object* v___x_5522_; 
if (v_isShared_5520_ == 0)
{
v___x_5522_ = v___x_5519_;
goto v_reusejp_5521_;
}
else
{
lean_object* v_reuseFailAlloc_5523_; 
v_reuseFailAlloc_5523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5523_, 0, v_a_5517_);
v___x_5522_ = v_reuseFailAlloc_5523_;
goto v_reusejp_5521_;
}
v_reusejp_5521_:
{
return v___x_5522_;
}
}
}
}
else
{
lean_object* v_a_5525_; lean_object* v___x_5527_; uint8_t v_isShared_5528_; uint8_t v_isSharedCheck_5532_; 
lean_dec(v_a_5486_);
lean_dec_ref_known(v_code_5297_, 1);
v_a_5525_ = lean_ctor_get(v___x_5491_, 0);
v_isSharedCheck_5532_ = !lean_is_exclusive(v___x_5491_);
if (v_isSharedCheck_5532_ == 0)
{
v___x_5527_ = v___x_5491_;
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
else
{
lean_inc(v_a_5525_);
lean_dec(v___x_5491_);
v___x_5527_ = lean_box(0);
v_isShared_5528_ = v_isSharedCheck_5532_;
goto v_resetjp_5526_;
}
v_resetjp_5526_:
{
lean_object* v___x_5530_; 
if (v_isShared_5528_ == 0)
{
v___x_5530_ = v___x_5527_;
goto v_reusejp_5529_;
}
else
{
lean_object* v_reuseFailAlloc_5531_; 
v_reuseFailAlloc_5531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5531_, 0, v_a_5525_);
v___x_5530_ = v_reuseFailAlloc_5531_;
goto v_reusejp_5529_;
}
v_reusejp_5529_:
{
return v___x_5530_;
}
}
}
}
}
else
{
lean_object* v_a_5542_; lean_object* v___x_5544_; uint8_t v_isShared_5545_; uint8_t v_isSharedCheck_5549_; 
lean_dec_ref_known(v_code_5297_, 1);
v_a_5542_ = lean_ctor_get(v___x_5485_, 0);
v_isSharedCheck_5549_ = !lean_is_exclusive(v___x_5485_);
if (v_isSharedCheck_5549_ == 0)
{
v___x_5544_ = v___x_5485_;
v_isShared_5545_ = v_isSharedCheck_5549_;
goto v_resetjp_5543_;
}
else
{
lean_inc(v_a_5542_);
lean_dec(v___x_5485_);
v___x_5544_ = lean_box(0);
v_isShared_5545_ = v_isSharedCheck_5549_;
goto v_resetjp_5543_;
}
v_resetjp_5543_:
{
lean_object* v___x_5547_; 
if (v_isShared_5545_ == 0)
{
v___x_5547_ = v___x_5544_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v_a_5542_);
v___x_5547_ = v_reuseFailAlloc_5548_;
goto v_reusejp_5546_;
}
v_reusejp_5546_:
{
return v___x_5547_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_5550_; lean_object* v_borrowedValues_5551_; lean_object* v_derivedValMap_5552_; lean_object* v_varMap_5553_; lean_object* v___f_5554_; lean_object* v___x_5555_; lean_object* v___x_5556_; lean_object* v___x_5557_; lean_object* v___x_5558_; lean_object* v___x_5559_; lean_object* v___x_5560_; lean_object* v___x_5561_; 
v_fvarId_5550_ = lean_ctor_get(v_code_5297_, 0);
v_borrowedValues_5551_ = lean_ctor_get(v___y_5298_, 0);
v_derivedValMap_5552_ = lean_ctor_get(v___y_5298_, 1);
v_varMap_5553_ = lean_ctor_get(v___y_5298_, 2);
lean_inc_ref(v_derivedValMap_5552_);
v___f_5554_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0), 3, 1);
lean_closure_set(v___f_5554_, 0, v_derivedValMap_5552_);
v___x_5555_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5556_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_5554_, v___x_5555_, v_borrowedValues_5551_);
v___x_5557_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5557_);
v___x_5558_ = lean_st_ref_put(v___y_5299_, v___x_5556_);
v___x_5559_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc_n(v_fvarId_5550_, 2);
lean_inc(v_varMap_5553_);
v___x_5560_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_5559_, v_varMap_5553_, v_fvarId_5550_);
v___x_5561_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5550_, v___y_5298_, v___y_5299_);
if (lean_obj_tag(v___x_5561_) == 0)
{
lean_object* v___x_5563_; uint8_t v_isShared_5564_; uint8_t v_isSharedCheck_5585_; 
v_isSharedCheck_5585_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5585_ == 0)
{
lean_object* v_unused_5586_; 
v_unused_5586_ = lean_ctor_get(v___x_5561_, 0);
lean_dec(v_unused_5586_);
v___x_5563_ = v___x_5561_;
v_isShared_5564_ = v_isSharedCheck_5585_;
goto v_resetjp_5562_;
}
else
{
lean_dec(v___x_5561_);
v___x_5563_ = lean_box(0);
v_isShared_5564_ = v_isSharedCheck_5585_;
goto v_resetjp_5562_;
}
v_resetjp_5562_:
{
lean_object* v___x_5565_; uint8_t v_isPossibleRef_5566_; 
v___x_5565_ = lean_st_ref_get(v___y_5299_);
v_isPossibleRef_5566_ = lean_ctor_get_uint8(v___x_5560_, sizeof(void*)*2);
if (v_isPossibleRef_5566_ == 0)
{
lean_object* v___x_5568_; 
lean_dec(v___x_5565_);
lean_dec(v___x_5560_);
if (v_isShared_5564_ == 0)
{
lean_ctor_set(v___x_5563_, 0, v_code_5297_);
v___x_5568_ = v___x_5563_;
goto v_reusejp_5567_;
}
else
{
lean_object* v_reuseFailAlloc_5569_; 
v_reuseFailAlloc_5569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5569_, 0, v_code_5297_);
v___x_5568_ = v_reuseFailAlloc_5569_;
goto v_reusejp_5567_;
}
v_reusejp_5567_:
{
return v___x_5568_;
}
}
else
{
uint8_t v_isDefiniteRef_5570_; uint8_t v_persistent_5571_; lean_object* v_borrows_5572_; uint8_t v___x_5573_; 
v_isDefiniteRef_5570_ = lean_ctor_get_uint8(v___x_5560_, sizeof(void*)*2 + 1);
v_persistent_5571_ = lean_ctor_get_uint8(v___x_5560_, sizeof(void*)*2 + 2);
lean_dec(v___x_5560_);
v_borrows_5572_ = lean_ctor_get(v___x_5565_, 1);
lean_inc_ref(v_borrows_5572_);
lean_dec(v___x_5565_);
v___x_5573_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_5572_, v_fvarId_5550_);
lean_dec_ref(v_borrows_5572_);
if (v___x_5573_ == 0)
{
lean_object* v___x_5575_; 
if (v_isShared_5564_ == 0)
{
lean_ctor_set(v___x_5563_, 0, v_code_5297_);
v___x_5575_ = v___x_5563_;
goto v_reusejp_5574_;
}
else
{
lean_object* v_reuseFailAlloc_5576_; 
v_reuseFailAlloc_5576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5576_, 0, v_code_5297_);
v___x_5575_ = v_reuseFailAlloc_5576_;
goto v_reusejp_5574_;
}
v_reusejp_5574_:
{
return v___x_5575_;
}
}
else
{
lean_object* v___x_5577_; uint8_t v___y_5579_; 
lean_inc(v_fvarId_5550_);
v___x_5577_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_5570_ == 0)
{
v___y_5579_ = v___x_5573_;
goto v___jp_5578_;
}
else
{
uint8_t v___x_5584_; 
v___x_5584_ = 0;
v___y_5579_ = v___x_5584_;
goto v___jp_5578_;
}
v___jp_5578_:
{
lean_object* v___x_5580_; lean_object* v___x_5582_; 
v___x_5580_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_5580_, 0, v_fvarId_5550_);
lean_ctor_set(v___x_5580_, 1, v___x_5577_);
lean_ctor_set(v___x_5580_, 2, v_code_5297_);
lean_ctor_set_uint8(v___x_5580_, sizeof(void*)*3, v___y_5579_);
lean_ctor_set_uint8(v___x_5580_, sizeof(void*)*3 + 1, v_persistent_5571_);
if (v_isShared_5564_ == 0)
{
lean_ctor_set(v___x_5563_, 0, v___x_5580_);
v___x_5582_ = v___x_5563_;
goto v_reusejp_5581_;
}
else
{
lean_object* v_reuseFailAlloc_5583_; 
v_reuseFailAlloc_5583_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5583_, 0, v___x_5580_);
v___x_5582_ = v_reuseFailAlloc_5583_;
goto v_reusejp_5581_;
}
v_reusejp_5581_:
{
return v___x_5582_;
}
}
}
}
}
}
else
{
lean_object* v_a_5587_; lean_object* v___x_5589_; uint8_t v_isShared_5590_; uint8_t v_isSharedCheck_5594_; 
lean_dec(v___x_5560_);
lean_dec_ref_known(v_code_5297_, 1);
v_a_5587_ = lean_ctor_get(v___x_5561_, 0);
v_isSharedCheck_5594_ = !lean_is_exclusive(v___x_5561_);
if (v_isSharedCheck_5594_ == 0)
{
v___x_5589_ = v___x_5561_;
v_isShared_5590_ = v_isSharedCheck_5594_;
goto v_resetjp_5588_;
}
else
{
lean_inc(v_a_5587_);
lean_dec(v___x_5561_);
v___x_5589_ = lean_box(0);
v_isShared_5590_ = v_isSharedCheck_5594_;
goto v_resetjp_5588_;
}
v_resetjp_5588_:
{
lean_object* v___x_5592_; 
if (v_isShared_5590_ == 0)
{
v___x_5592_ = v___x_5589_;
goto v_reusejp_5591_;
}
else
{
lean_object* v_reuseFailAlloc_5593_; 
v_reuseFailAlloc_5593_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5593_, 0, v_a_5587_);
v___x_5592_ = v_reuseFailAlloc_5593_;
goto v_reusejp_5591_;
}
v_reusejp_5591_:
{
return v___x_5592_;
}
}
}
}
case 6:
{
lean_object* v_borrowedValues_5595_; lean_object* v_derivedValMap_5596_; lean_object* v___f_5597_; lean_object* v___x_5598_; lean_object* v___x_5599_; lean_object* v___x_5600_; lean_object* v___x_5601_; lean_object* v___x_5602_; 
v_borrowedValues_5595_ = lean_ctor_get(v___y_5298_, 0);
v_derivedValMap_5596_ = lean_ctor_get(v___y_5298_, 1);
lean_inc_ref(v_derivedValMap_5596_);
v___f_5597_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0), 3, 1);
lean_closure_set(v___f_5597_, 0, v_derivedValMap_5596_);
v___x_5598_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5599_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_5597_, v___x_5598_, v_borrowedValues_5595_);
v___x_5600_ = lean_st_ref_take(v___y_5299_);
lean_dec(v___x_5600_);
v___x_5601_ = lean_st_ref_put(v___y_5299_, v___x_5599_);
v___x_5602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5602_, 0, v_code_5297_);
return v___x_5602_;
}
case 8:
{
lean_object* v_fvarId_5603_; lean_object* v_i_5604_; lean_object* v_y_5605_; lean_object* v_k_5606_; lean_object* v___x_5607_; 
v_fvarId_5603_ = lean_ctor_get(v_code_5297_, 0);
v_i_5604_ = lean_ctor_get(v_code_5297_, 1);
v_y_5605_ = lean_ctor_get(v_code_5297_, 2);
v_k_5606_ = lean_ctor_get(v_code_5297_, 3);
lean_inc_ref(v_k_5606_);
v___x_5607_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5606_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5607_) == 0)
{
lean_object* v_a_5608_; lean_object* v___x_5609_; 
v_a_5608_ = lean_ctor_get(v___x_5607_, 0);
lean_inc(v_a_5608_);
lean_dec_ref_known(v___x_5607_, 1);
lean_inc(v_fvarId_5603_);
v___x_5609_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5603_, v___y_5298_, v___y_5299_);
if (lean_obj_tag(v___x_5609_) == 0)
{
lean_object* v___x_5611_; uint8_t v_isShared_5612_; uint8_t v_isSharedCheck_5633_; 
v_isSharedCheck_5633_ = !lean_is_exclusive(v___x_5609_);
if (v_isSharedCheck_5633_ == 0)
{
lean_object* v_unused_5634_; 
v_unused_5634_ = lean_ctor_get(v___x_5609_, 0);
lean_dec(v_unused_5634_);
v___x_5611_ = v___x_5609_;
v_isShared_5612_ = v_isSharedCheck_5633_;
goto v_resetjp_5610_;
}
else
{
lean_dec(v___x_5609_);
v___x_5611_ = lean_box(0);
v_isShared_5612_ = v_isSharedCheck_5633_;
goto v_resetjp_5610_;
}
v_resetjp_5610_:
{
size_t v___x_5613_; size_t v___x_5614_; uint8_t v___x_5615_; 
v___x_5613_ = lean_ptr_addr(v_k_5606_);
v___x_5614_ = lean_ptr_addr(v_a_5608_);
v___x_5615_ = lean_usize_dec_eq(v___x_5613_, v___x_5614_);
if (v___x_5615_ == 0)
{
lean_object* v___x_5617_; uint8_t v_isShared_5618_; uint8_t v_isSharedCheck_5625_; 
lean_inc(v_y_5605_);
lean_inc(v_i_5604_);
lean_inc(v_fvarId_5603_);
v_isSharedCheck_5625_ = !lean_is_exclusive(v_code_5297_);
if (v_isSharedCheck_5625_ == 0)
{
lean_object* v_unused_5626_; lean_object* v_unused_5627_; lean_object* v_unused_5628_; lean_object* v_unused_5629_; 
v_unused_5626_ = lean_ctor_get(v_code_5297_, 3);
lean_dec(v_unused_5626_);
v_unused_5627_ = lean_ctor_get(v_code_5297_, 2);
lean_dec(v_unused_5627_);
v_unused_5628_ = lean_ctor_get(v_code_5297_, 1);
lean_dec(v_unused_5628_);
v_unused_5629_ = lean_ctor_get(v_code_5297_, 0);
lean_dec(v_unused_5629_);
v___x_5617_ = v_code_5297_;
v_isShared_5618_ = v_isSharedCheck_5625_;
goto v_resetjp_5616_;
}
else
{
lean_dec(v_code_5297_);
v___x_5617_ = lean_box(0);
v_isShared_5618_ = v_isSharedCheck_5625_;
goto v_resetjp_5616_;
}
v_resetjp_5616_:
{
lean_object* v___x_5620_; 
if (v_isShared_5618_ == 0)
{
lean_ctor_set(v___x_5617_, 3, v_a_5608_);
v___x_5620_ = v___x_5617_;
goto v_reusejp_5619_;
}
else
{
lean_object* v_reuseFailAlloc_5624_; 
v_reuseFailAlloc_5624_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5624_, 0, v_fvarId_5603_);
lean_ctor_set(v_reuseFailAlloc_5624_, 1, v_i_5604_);
lean_ctor_set(v_reuseFailAlloc_5624_, 2, v_y_5605_);
lean_ctor_set(v_reuseFailAlloc_5624_, 3, v_a_5608_);
v___x_5620_ = v_reuseFailAlloc_5624_;
goto v_reusejp_5619_;
}
v_reusejp_5619_:
{
lean_object* v___x_5622_; 
if (v_isShared_5612_ == 0)
{
lean_ctor_set(v___x_5611_, 0, v___x_5620_);
v___x_5622_ = v___x_5611_;
goto v_reusejp_5621_;
}
else
{
lean_object* v_reuseFailAlloc_5623_; 
v_reuseFailAlloc_5623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5623_, 0, v___x_5620_);
v___x_5622_ = v_reuseFailAlloc_5623_;
goto v_reusejp_5621_;
}
v_reusejp_5621_:
{
return v___x_5622_;
}
}
}
}
else
{
lean_object* v___x_5631_; 
lean_dec(v_a_5608_);
if (v_isShared_5612_ == 0)
{
lean_ctor_set(v___x_5611_, 0, v_code_5297_);
v___x_5631_ = v___x_5611_;
goto v_reusejp_5630_;
}
else
{
lean_object* v_reuseFailAlloc_5632_; 
v_reuseFailAlloc_5632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5632_, 0, v_code_5297_);
v___x_5631_ = v_reuseFailAlloc_5632_;
goto v_reusejp_5630_;
}
v_reusejp_5630_:
{
return v___x_5631_;
}
}
}
}
else
{
lean_object* v_a_5635_; lean_object* v___x_5637_; uint8_t v_isShared_5638_; uint8_t v_isSharedCheck_5642_; 
lean_dec(v_a_5608_);
lean_dec_ref_known(v_code_5297_, 4);
v_a_5635_ = lean_ctor_get(v___x_5609_, 0);
v_isSharedCheck_5642_ = !lean_is_exclusive(v___x_5609_);
if (v_isSharedCheck_5642_ == 0)
{
v___x_5637_ = v___x_5609_;
v_isShared_5638_ = v_isSharedCheck_5642_;
goto v_resetjp_5636_;
}
else
{
lean_inc(v_a_5635_);
lean_dec(v___x_5609_);
v___x_5637_ = lean_box(0);
v_isShared_5638_ = v_isSharedCheck_5642_;
goto v_resetjp_5636_;
}
v_resetjp_5636_:
{
lean_object* v___x_5640_; 
if (v_isShared_5638_ == 0)
{
v___x_5640_ = v___x_5637_;
goto v_reusejp_5639_;
}
else
{
lean_object* v_reuseFailAlloc_5641_; 
v_reuseFailAlloc_5641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5641_, 0, v_a_5635_);
v___x_5640_ = v_reuseFailAlloc_5641_;
goto v_reusejp_5639_;
}
v_reusejp_5639_:
{
return v___x_5640_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_5297_, 4);
return v___x_5607_;
}
}
case 9:
{
lean_object* v_fvarId_5643_; lean_object* v_i_5644_; lean_object* v_offset_5645_; lean_object* v_y_5646_; lean_object* v_ty_5647_; lean_object* v_k_5648_; lean_object* v___x_5649_; 
v_fvarId_5643_ = lean_ctor_get(v_code_5297_, 0);
v_i_5644_ = lean_ctor_get(v_code_5297_, 1);
v_offset_5645_ = lean_ctor_get(v_code_5297_, 2);
v_y_5646_ = lean_ctor_get(v_code_5297_, 3);
v_ty_5647_ = lean_ctor_get(v_code_5297_, 4);
v_k_5648_ = lean_ctor_get(v_code_5297_, 5);
lean_inc_ref(v_k_5648_);
v___x_5649_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5648_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
if (lean_obj_tag(v___x_5649_) == 0)
{
lean_object* v_a_5650_; lean_object* v___x_5651_; 
v_a_5650_ = lean_ctor_get(v___x_5649_, 0);
lean_inc(v_a_5650_);
lean_dec_ref_known(v___x_5649_, 1);
lean_inc(v_fvarId_5643_);
v___x_5651_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5643_, v___y_5298_, v___y_5299_);
if (lean_obj_tag(v___x_5651_) == 0)
{
lean_object* v___x_5653_; uint8_t v_isShared_5654_; uint8_t v_isSharedCheck_5677_; 
v_isSharedCheck_5677_ = !lean_is_exclusive(v___x_5651_);
if (v_isSharedCheck_5677_ == 0)
{
lean_object* v_unused_5678_; 
v_unused_5678_ = lean_ctor_get(v___x_5651_, 0);
lean_dec(v_unused_5678_);
v___x_5653_ = v___x_5651_;
v_isShared_5654_ = v_isSharedCheck_5677_;
goto v_resetjp_5652_;
}
else
{
lean_dec(v___x_5651_);
v___x_5653_ = lean_box(0);
v_isShared_5654_ = v_isSharedCheck_5677_;
goto v_resetjp_5652_;
}
v_resetjp_5652_:
{
size_t v___x_5655_; size_t v___x_5656_; uint8_t v___x_5657_; 
v___x_5655_ = lean_ptr_addr(v_k_5648_);
v___x_5656_ = lean_ptr_addr(v_a_5650_);
v___x_5657_ = lean_usize_dec_eq(v___x_5655_, v___x_5656_);
if (v___x_5657_ == 0)
{
lean_object* v___x_5659_; uint8_t v_isShared_5660_; uint8_t v_isSharedCheck_5667_; 
lean_inc_ref(v_ty_5647_);
lean_inc(v_y_5646_);
lean_inc(v_offset_5645_);
lean_inc(v_i_5644_);
lean_inc(v_fvarId_5643_);
v_isSharedCheck_5667_ = !lean_is_exclusive(v_code_5297_);
if (v_isSharedCheck_5667_ == 0)
{
lean_object* v_unused_5668_; lean_object* v_unused_5669_; lean_object* v_unused_5670_; lean_object* v_unused_5671_; lean_object* v_unused_5672_; lean_object* v_unused_5673_; 
v_unused_5668_ = lean_ctor_get(v_code_5297_, 5);
lean_dec(v_unused_5668_);
v_unused_5669_ = lean_ctor_get(v_code_5297_, 4);
lean_dec(v_unused_5669_);
v_unused_5670_ = lean_ctor_get(v_code_5297_, 3);
lean_dec(v_unused_5670_);
v_unused_5671_ = lean_ctor_get(v_code_5297_, 2);
lean_dec(v_unused_5671_);
v_unused_5672_ = lean_ctor_get(v_code_5297_, 1);
lean_dec(v_unused_5672_);
v_unused_5673_ = lean_ctor_get(v_code_5297_, 0);
lean_dec(v_unused_5673_);
v___x_5659_ = v_code_5297_;
v_isShared_5660_ = v_isSharedCheck_5667_;
goto v_resetjp_5658_;
}
else
{
lean_dec(v_code_5297_);
v___x_5659_ = lean_box(0);
v_isShared_5660_ = v_isSharedCheck_5667_;
goto v_resetjp_5658_;
}
v_resetjp_5658_:
{
lean_object* v___x_5662_; 
if (v_isShared_5660_ == 0)
{
lean_ctor_set(v___x_5659_, 5, v_a_5650_);
v___x_5662_ = v___x_5659_;
goto v_reusejp_5661_;
}
else
{
lean_object* v_reuseFailAlloc_5666_; 
v_reuseFailAlloc_5666_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5666_, 0, v_fvarId_5643_);
lean_ctor_set(v_reuseFailAlloc_5666_, 1, v_i_5644_);
lean_ctor_set(v_reuseFailAlloc_5666_, 2, v_offset_5645_);
lean_ctor_set(v_reuseFailAlloc_5666_, 3, v_y_5646_);
lean_ctor_set(v_reuseFailAlloc_5666_, 4, v_ty_5647_);
lean_ctor_set(v_reuseFailAlloc_5666_, 5, v_a_5650_);
v___x_5662_ = v_reuseFailAlloc_5666_;
goto v_reusejp_5661_;
}
v_reusejp_5661_:
{
lean_object* v___x_5664_; 
if (v_isShared_5654_ == 0)
{
lean_ctor_set(v___x_5653_, 0, v___x_5662_);
v___x_5664_ = v___x_5653_;
goto v_reusejp_5663_;
}
else
{
lean_object* v_reuseFailAlloc_5665_; 
v_reuseFailAlloc_5665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5665_, 0, v___x_5662_);
v___x_5664_ = v_reuseFailAlloc_5665_;
goto v_reusejp_5663_;
}
v_reusejp_5663_:
{
return v___x_5664_;
}
}
}
}
else
{
lean_object* v___x_5675_; 
lean_dec(v_a_5650_);
if (v_isShared_5654_ == 0)
{
lean_ctor_set(v___x_5653_, 0, v_code_5297_);
v___x_5675_ = v___x_5653_;
goto v_reusejp_5674_;
}
else
{
lean_object* v_reuseFailAlloc_5676_; 
v_reuseFailAlloc_5676_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5676_, 0, v_code_5297_);
v___x_5675_ = v_reuseFailAlloc_5676_;
goto v_reusejp_5674_;
}
v_reusejp_5674_:
{
return v___x_5675_;
}
}
}
}
else
{
lean_object* v_a_5679_; lean_object* v___x_5681_; uint8_t v_isShared_5682_; uint8_t v_isSharedCheck_5686_; 
lean_dec(v_a_5650_);
lean_dec_ref_known(v_code_5297_, 6);
v_a_5679_ = lean_ctor_get(v___x_5651_, 0);
v_isSharedCheck_5686_ = !lean_is_exclusive(v___x_5651_);
if (v_isSharedCheck_5686_ == 0)
{
v___x_5681_ = v___x_5651_;
v_isShared_5682_ = v_isSharedCheck_5686_;
goto v_resetjp_5680_;
}
else
{
lean_inc(v_a_5679_);
lean_dec(v___x_5651_);
v___x_5681_ = lean_box(0);
v_isShared_5682_ = v_isSharedCheck_5686_;
goto v_resetjp_5680_;
}
v_resetjp_5680_:
{
lean_object* v___x_5684_; 
if (v_isShared_5682_ == 0)
{
v___x_5684_ = v___x_5681_;
goto v_reusejp_5683_;
}
else
{
lean_object* v_reuseFailAlloc_5685_; 
v_reuseFailAlloc_5685_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5685_, 0, v_a_5679_);
v___x_5684_ = v_reuseFailAlloc_5685_;
goto v_reusejp_5683_;
}
v_reusejp_5683_:
{
return v___x_5684_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_5297_, 6);
return v___x_5649_;
}
}
default: 
{
lean_object* v___x_5687_; lean_object* v___x_5688_; 
lean_dec_ref(v_code_5297_);
v___x_5687_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1);
v___x_5688_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v___x_5687_, v___y_5298_, v___y_5299_, v___y_5300_, v___y_5301_, v___y_5302_, v___y_5303_);
return v___x_5688_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(lean_object* v_cases_5689_, size_t v_sz_5690_, size_t v_i_5691_, lean_object* v_bs_5692_, lean_object* v___y_5693_, lean_object* v___y_5694_, lean_object* v___y_5695_, lean_object* v___y_5696_, lean_object* v___y_5697_, lean_object* v___y_5698_){
_start:
{
uint8_t v___x_5700_; 
v___x_5700_ = lean_usize_dec_lt(v_i_5691_, v_sz_5690_);
if (v___x_5700_ == 0)
{
lean_object* v___x_5701_; 
lean_dec_ref(v_cases_5689_);
v___x_5701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5701_, 0, v_bs_5692_);
return v___x_5701_;
}
else
{
lean_object* v_v_5702_; lean_object* v___x_5703_; lean_object* v_bs_x27_5704_; lean_object* v___x_5705_; lean_object* v_a_5707_; lean_object* v___x_5716_; lean_object* v___x_5717_; lean_object* v___x_5718_; 
v_v_5702_ = lean_array_uget(v_bs_5692_, v_i_5691_);
v___x_5703_ = lean_unsigned_to_nat(0u);
v_bs_x27_5704_ = lean_array_uset(v_bs_5692_, v_i_5691_, v___x_5703_);
v___x_5705_ = lean_st_ref_get(v___y_5694_);
v___x_5716_ = lean_st_ref_take(v___y_5694_);
lean_dec(v___x_5716_);
v___x_5717_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5718_ = lean_st_ref_put(v___y_5694_, v___x_5717_);
if (lean_obj_tag(v_v_5702_) == 1)
{
lean_object* v_info_5719_; lean_object* v_code_5720_; lean_object* v_discr_5721_; lean_object* v_borrowedValues_5722_; lean_object* v_derivedValMap_5723_; lean_object* v_varMap_5724_; lean_object* v_jpLiveVarMap_5725_; lean_object* v_idx_5726_; lean_object* v___y_5728_; lean_object* v___x_5743_; 
v_info_5719_ = lean_ctor_get(v_v_5702_, 0);
v_code_5720_ = lean_ctor_get(v_v_5702_, 1);
v_discr_5721_ = lean_ctor_get(v_cases_5689_, 2);
v_borrowedValues_5722_ = lean_ctor_get(v___y_5693_, 0);
v_derivedValMap_5723_ = lean_ctor_get(v___y_5693_, 1);
v_varMap_5724_ = lean_ctor_get(v___y_5693_, 2);
v_jpLiveVarMap_5725_ = lean_ctor_get(v___y_5693_, 3);
v_idx_5726_ = lean_ctor_get(v___y_5693_, 4);
v___x_5743_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_5724_, v_discr_5721_);
if (lean_obj_tag(v___x_5743_) == 0)
{
lean_inc(v_varMap_5724_);
v___y_5728_ = v_varMap_5724_;
goto v___jp_5727_;
}
else
{
lean_object* v_val_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5765_; 
v_val_5744_ = lean_ctor_get(v___x_5743_, 0);
v_isSharedCheck_5765_ = !lean_is_exclusive(v___x_5743_);
if (v_isSharedCheck_5765_ == 0)
{
v___x_5746_ = v___x_5743_;
v_isShared_5747_ = v_isSharedCheck_5765_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_val_5744_);
lean_dec(v___x_5743_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5765_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
uint8_t v_persistent_5748_; lean_object* v___x_5750_; uint8_t v_isShared_5751_; uint8_t v_isSharedCheck_5762_; 
v_persistent_5748_ = lean_ctor_get_uint8(v_val_5744_, sizeof(void*)*2 + 2);
v_isSharedCheck_5762_ = !lean_is_exclusive(v_val_5744_);
if (v_isSharedCheck_5762_ == 0)
{
lean_object* v_unused_5763_; lean_object* v_unused_5764_; 
v_unused_5763_ = lean_ctor_get(v_val_5744_, 1);
lean_dec(v_unused_5763_);
v_unused_5764_ = lean_ctor_get(v_val_5744_, 0);
lean_dec(v_unused_5764_);
v___x_5750_ = v_val_5744_;
v_isShared_5751_ = v_isSharedCheck_5762_;
goto v_resetjp_5749_;
}
else
{
lean_dec(v_val_5744_);
v___x_5750_ = lean_box(0);
v_isShared_5751_ = v_isSharedCheck_5762_;
goto v_resetjp_5749_;
}
v_resetjp_5749_:
{
uint8_t v___x_5752_; lean_object* v___x_5753_; lean_object* v___x_5754_; lean_object* v___x_5756_; 
v___x_5752_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_info_5719_);
v___x_5753_ = lean_unsigned_to_nat(1u);
v___x_5754_ = lean_nat_add(v_idx_5726_, v___x_5753_);
lean_inc_ref(v_info_5719_);
if (v_isShared_5747_ == 0)
{
lean_ctor_set(v___x_5746_, 0, v_info_5719_);
v___x_5756_ = v___x_5746_;
goto v_reusejp_5755_;
}
else
{
lean_object* v_reuseFailAlloc_5761_; 
v_reuseFailAlloc_5761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5761_, 0, v_info_5719_);
v___x_5756_ = v_reuseFailAlloc_5761_;
goto v_reusejp_5755_;
}
v_reusejp_5755_:
{
lean_object* v___x_5758_; 
if (v_isShared_5751_ == 0)
{
lean_ctor_set(v___x_5750_, 1, v___x_5756_);
lean_ctor_set(v___x_5750_, 0, v___x_5754_);
v___x_5758_ = v___x_5750_;
goto v_reusejp_5757_;
}
else
{
lean_object* v_reuseFailAlloc_5760_; 
v_reuseFailAlloc_5760_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_5760_, 0, v___x_5754_);
lean_ctor_set(v_reuseFailAlloc_5760_, 1, v___x_5756_);
lean_ctor_set_uint8(v_reuseFailAlloc_5760_, sizeof(void*)*2 + 2, v_persistent_5748_);
v___x_5758_ = v_reuseFailAlloc_5760_;
goto v_reusejp_5757_;
}
v_reusejp_5757_:
{
lean_object* v___x_5759_; 
lean_ctor_set_uint8(v___x_5758_, sizeof(void*)*2, v___x_5752_);
lean_ctor_set_uint8(v___x_5758_, sizeof(void*)*2 + 1, v___x_5752_);
lean_inc(v_varMap_5724_);
lean_inc(v_discr_5721_);
v___x_5759_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_5721_, v___x_5758_, v_varMap_5724_);
v___y_5728_ = v___x_5759_;
goto v___jp_5727_;
}
}
}
}
}
v___jp_5727_:
{
lean_object* v___x_5729_; lean_object* v___x_5730_; lean_object* v___x_5731_; lean_object* v___x_5732_; 
v___x_5729_ = lean_unsigned_to_nat(1u);
v___x_5730_ = lean_nat_add(v_idx_5726_, v___x_5729_);
lean_inc(v_jpLiveVarMap_5725_);
lean_inc_ref(v_derivedValMap_5723_);
lean_inc_ref(v_borrowedValues_5722_);
v___x_5731_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5731_, 0, v_borrowedValues_5722_);
lean_ctor_set(v___x_5731_, 1, v_derivedValMap_5723_);
lean_ctor_set(v___x_5731_, 2, v___y_5728_);
lean_ctor_set(v___x_5731_, 3, v_jpLiveVarMap_5725_);
lean_ctor_set(v___x_5731_, 4, v___x_5730_);
lean_inc_ref(v_code_5720_);
v___x_5732_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5720_, v___x_5731_, v___y_5694_, v___y_5695_, v___y_5696_, v___y_5697_, v___y_5698_);
lean_dec_ref_known(v___x_5731_, 5);
if (lean_obj_tag(v___x_5732_) == 0)
{
lean_object* v_a_5733_; lean_object* v___x_5734_; 
v_a_5733_ = lean_ctor_get(v___x_5732_, 0);
lean_inc(v_a_5733_);
lean_dec_ref_known(v___x_5732_, 1);
v___x_5734_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_5702_, v_a_5733_);
v_a_5707_ = v___x_5734_;
goto v___jp_5706_;
}
else
{
lean_object* v_a_5735_; lean_object* v___x_5737_; uint8_t v_isShared_5738_; uint8_t v_isSharedCheck_5742_; 
lean_dec_ref_known(v_v_5702_, 2);
lean_dec(v___x_5705_);
lean_dec_ref(v_bs_x27_5704_);
lean_dec_ref(v_cases_5689_);
v_a_5735_ = lean_ctor_get(v___x_5732_, 0);
v_isSharedCheck_5742_ = !lean_is_exclusive(v___x_5732_);
if (v_isSharedCheck_5742_ == 0)
{
v___x_5737_ = v___x_5732_;
v_isShared_5738_ = v_isSharedCheck_5742_;
goto v_resetjp_5736_;
}
else
{
lean_inc(v_a_5735_);
lean_dec(v___x_5732_);
v___x_5737_ = lean_box(0);
v_isShared_5738_ = v_isSharedCheck_5742_;
goto v_resetjp_5736_;
}
v_resetjp_5736_:
{
lean_object* v___x_5740_; 
if (v_isShared_5738_ == 0)
{
v___x_5740_ = v___x_5737_;
goto v_reusejp_5739_;
}
else
{
lean_object* v_reuseFailAlloc_5741_; 
v_reuseFailAlloc_5741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5741_, 0, v_a_5735_);
v___x_5740_ = v_reuseFailAlloc_5741_;
goto v_reusejp_5739_;
}
v_reusejp_5739_:
{
return v___x_5740_;
}
}
}
}
}
else
{
lean_object* v_code_5766_; lean_object* v___x_5767_; 
v_code_5766_ = lean_ctor_get(v_v_5702_, 0);
lean_inc_ref(v_code_5766_);
v___x_5767_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5766_, v___y_5693_, v___y_5694_, v___y_5695_, v___y_5696_, v___y_5697_, v___y_5698_);
if (lean_obj_tag(v___x_5767_) == 0)
{
lean_object* v_a_5768_; lean_object* v___x_5769_; 
v_a_5768_ = lean_ctor_get(v___x_5767_, 0);
lean_inc(v_a_5768_);
lean_dec_ref_known(v___x_5767_, 1);
v___x_5769_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_5702_, v_a_5768_);
v_a_5707_ = v___x_5769_;
goto v___jp_5706_;
}
else
{
lean_object* v_a_5770_; lean_object* v___x_5772_; uint8_t v_isShared_5773_; uint8_t v_isSharedCheck_5777_; 
lean_dec_ref_known(v_v_5702_, 1);
lean_dec(v___x_5705_);
lean_dec_ref(v_bs_x27_5704_);
lean_dec_ref(v_cases_5689_);
v_a_5770_ = lean_ctor_get(v___x_5767_, 0);
v_isSharedCheck_5777_ = !lean_is_exclusive(v___x_5767_);
if (v_isSharedCheck_5777_ == 0)
{
v___x_5772_ = v___x_5767_;
v_isShared_5773_ = v_isSharedCheck_5777_;
goto v_resetjp_5771_;
}
else
{
lean_inc(v_a_5770_);
lean_dec(v___x_5767_);
v___x_5772_ = lean_box(0);
v_isShared_5773_ = v_isSharedCheck_5777_;
goto v_resetjp_5771_;
}
v_resetjp_5771_:
{
lean_object* v___x_5775_; 
if (v_isShared_5773_ == 0)
{
v___x_5775_ = v___x_5772_;
goto v_reusejp_5774_;
}
else
{
lean_object* v_reuseFailAlloc_5776_; 
v_reuseFailAlloc_5776_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5776_, 0, v_a_5770_);
v___x_5775_ = v_reuseFailAlloc_5776_;
goto v_reusejp_5774_;
}
v_reusejp_5774_:
{
return v___x_5775_;
}
}
}
}
v___jp_5706_:
{
lean_object* v___x_5708_; lean_object* v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; size_t v___x_5712_; size_t v___x_5713_; lean_object* v___x_5714_; 
v___x_5708_ = lean_st_ref_get(v___y_5694_);
v___x_5709_ = lean_st_ref_take(v___y_5694_);
lean_dec(v___x_5709_);
v___x_5710_ = lean_st_ref_put(v___y_5694_, v___x_5705_);
v___x_5711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5711_, 0, v_a_5707_);
lean_ctor_set(v___x_5711_, 1, v___x_5708_);
v___x_5712_ = ((size_t)1ULL);
v___x_5713_ = lean_usize_add(v_i_5691_, v___x_5712_);
v___x_5714_ = lean_array_uset(v_bs_x27_5704_, v_i_5691_, v___x_5711_);
v_i_5691_ = v___x_5713_;
v_bs_5692_ = v___x_5714_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___boxed(lean_object* v_cases_5778_, lean_object* v_sz_5779_, lean_object* v_i_5780_, lean_object* v_bs_5781_, lean_object* v___y_5782_, lean_object* v___y_5783_, lean_object* v___y_5784_, lean_object* v___y_5785_, lean_object* v___y_5786_, lean_object* v___y_5787_, lean_object* v___y_5788_){
_start:
{
size_t v_sz_boxed_5789_; size_t v_i_boxed_5790_; lean_object* v_res_5791_; 
v_sz_boxed_5789_ = lean_unbox_usize(v_sz_5779_);
lean_dec(v_sz_5779_);
v_i_boxed_5790_ = lean_unbox_usize(v_i_5780_);
lean_dec(v_i_5780_);
v_res_5791_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(v_cases_5778_, v_sz_boxed_5789_, v_i_boxed_5790_, v_bs_5781_, v___y_5782_, v___y_5783_, v___y_5784_, v___y_5785_, v___y_5786_, v___y_5787_);
lean_dec(v___y_5787_);
lean_dec_ref(v___y_5786_);
lean_dec(v___y_5785_);
lean_dec_ref(v___y_5784_);
lean_dec(v___y_5783_);
lean_dec_ref(v___y_5782_);
return v_res_5791_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___boxed(lean_object* v_code_5792_, lean_object* v___y_5793_, lean_object* v___y_5794_, lean_object* v___y_5795_, lean_object* v___y_5796_, lean_object* v___y_5797_, lean_object* v___y_5798_, lean_object* v___y_5799_){
_start:
{
lean_object* v_res_5800_; 
v_res_5800_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5792_, v___y_5793_, v___y_5794_, v___y_5795_, v___y_5796_, v___y_5797_, v___y_5798_);
lean_dec(v___y_5798_);
lean_dec_ref(v___y_5797_);
lean_dec(v___y_5796_);
lean_dec_ref(v___y_5795_);
lean_dec(v___y_5794_);
lean_dec_ref(v___y_5793_);
return v_res_5800_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(lean_object* v_decl_5801_, lean_object* v_code_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_, lean_object* v___y_5805_, lean_object* v___y_5806_, lean_object* v___y_5807_, lean_object* v___y_5808_){
_start:
{
lean_object* v_toSignature_5810_; lean_object* v_params_5811_; lean_object* v___x_5812_; lean_object* v___x_5813_; uint8_t v___x_5814_; 
v_toSignature_5810_ = lean_ctor_get(v_decl_5801_, 0);
v_params_5811_ = lean_ctor_get(v_toSignature_5810_, 3);
v___x_5812_ = lean_unsigned_to_nat(0u);
v___x_5813_ = lean_array_get_size(v_params_5811_);
v___x_5814_ = lean_nat_dec_lt(v___x_5812_, v___x_5813_);
if (v___x_5814_ == 0)
{
lean_object* v___x_5815_; 
v___x_5815_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5802_, v___y_5803_, v___y_5804_, v___y_5805_, v___y_5806_, v___y_5807_, v___y_5808_);
if (lean_obj_tag(v___x_5815_) == 0)
{
lean_object* v_a_5816_; lean_object* v___x_5817_; 
v_a_5816_ = lean_ctor_get(v___x_5815_, 0);
lean_inc(v_a_5816_);
lean_dec_ref_known(v___x_5815_, 1);
v___x_5817_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5811_, v_a_5816_, v___y_5803_, v___y_5804_, v___y_5805_, v___y_5806_, v___y_5807_, v___y_5808_);
return v___x_5817_;
}
else
{
return v___x_5815_;
}
}
else
{
size_t v___x_5818_; size_t v___x_5819_; lean_object* v___x_5820_; lean_object* v___x_5821_; 
v___x_5818_ = ((size_t)0ULL);
v___x_5819_ = lean_usize_of_nat(v___x_5813_);
lean_inc_ref(v___y_5803_);
v___x_5820_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5811_, v___x_5818_, v___x_5819_, v___y_5803_);
v___x_5821_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5802_, v___x_5820_, v___y_5804_, v___y_5805_, v___y_5806_, v___y_5807_, v___y_5808_);
if (lean_obj_tag(v___x_5821_) == 0)
{
lean_object* v_a_5822_; lean_object* v___x_5823_; 
v_a_5822_ = lean_ctor_get(v___x_5821_, 0);
lean_inc(v_a_5822_);
lean_dec_ref_known(v___x_5821_, 1);
v___x_5823_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5811_, v_a_5822_, v___x_5820_, v___y_5804_, v___y_5805_, v___y_5806_, v___y_5807_, v___y_5808_);
lean_dec_ref(v___x_5820_);
return v___x_5823_;
}
else
{
lean_dec_ref(v___x_5820_);
return v___x_5821_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go___boxed(lean_object* v_decl_5824_, lean_object* v_code_5825_, lean_object* v___y_5826_, lean_object* v___y_5827_, lean_object* v___y_5828_, lean_object* v___y_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_){
_start:
{
lean_object* v_res_5833_; 
v_res_5833_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(v_decl_5824_, v_code_5825_, v___y_5826_, v___y_5827_, v___y_5828_, v___y_5829_, v___y_5830_, v___y_5831_);
lean_dec(v___y_5831_);
lean_dec_ref(v___y_5830_);
lean_dec(v___y_5829_);
lean_dec_ref(v___y_5828_);
lean_dec(v___y_5827_);
lean_dec_ref(v___y_5826_);
lean_dec_ref(v_decl_5824_);
return v_res_5833_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(lean_object* v_f_5834_, lean_object* v_v_5835_, lean_object* v___y_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_, lean_object* v___y_5839_){
_start:
{
if (lean_obj_tag(v_v_5835_) == 0)
{
lean_object* v_code_5841_; lean_object* v___x_5843_; uint8_t v_isShared_5844_; uint8_t v_isSharedCheck_5865_; 
v_code_5841_ = lean_ctor_get(v_v_5835_, 0);
v_isSharedCheck_5865_ = !lean_is_exclusive(v_v_5835_);
if (v_isSharedCheck_5865_ == 0)
{
v___x_5843_ = v_v_5835_;
v_isShared_5844_ = v_isSharedCheck_5865_;
goto v_resetjp_5842_;
}
else
{
lean_inc(v_code_5841_);
lean_dec(v_v_5835_);
v___x_5843_ = lean_box(0);
v_isShared_5844_ = v_isSharedCheck_5865_;
goto v_resetjp_5842_;
}
v_resetjp_5842_:
{
lean_object* v___x_5845_; 
lean_inc(v___y_5839_);
lean_inc_ref(v___y_5838_);
lean_inc(v___y_5837_);
lean_inc_ref(v___y_5836_);
v___x_5845_ = lean_apply_6(v_f_5834_, v_code_5841_, v___y_5836_, v___y_5837_, v___y_5838_, v___y_5839_, lean_box(0));
if (lean_obj_tag(v___x_5845_) == 0)
{
lean_object* v_a_5846_; lean_object* v___x_5848_; uint8_t v_isShared_5849_; uint8_t v_isSharedCheck_5856_; 
v_a_5846_ = lean_ctor_get(v___x_5845_, 0);
v_isSharedCheck_5856_ = !lean_is_exclusive(v___x_5845_);
if (v_isSharedCheck_5856_ == 0)
{
v___x_5848_ = v___x_5845_;
v_isShared_5849_ = v_isSharedCheck_5856_;
goto v_resetjp_5847_;
}
else
{
lean_inc(v_a_5846_);
lean_dec(v___x_5845_);
v___x_5848_ = lean_box(0);
v_isShared_5849_ = v_isSharedCheck_5856_;
goto v_resetjp_5847_;
}
v_resetjp_5847_:
{
lean_object* v___x_5851_; 
if (v_isShared_5844_ == 0)
{
lean_ctor_set(v___x_5843_, 0, v_a_5846_);
v___x_5851_ = v___x_5843_;
goto v_reusejp_5850_;
}
else
{
lean_object* v_reuseFailAlloc_5855_; 
v_reuseFailAlloc_5855_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5855_, 0, v_a_5846_);
v___x_5851_ = v_reuseFailAlloc_5855_;
goto v_reusejp_5850_;
}
v_reusejp_5850_:
{
lean_object* v___x_5853_; 
if (v_isShared_5849_ == 0)
{
lean_ctor_set(v___x_5848_, 0, v___x_5851_);
v___x_5853_ = v___x_5848_;
goto v_reusejp_5852_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v___x_5851_);
v___x_5853_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5852_;
}
v_reusejp_5852_:
{
return v___x_5853_;
}
}
}
}
else
{
lean_object* v_a_5857_; lean_object* v___x_5859_; uint8_t v_isShared_5860_; uint8_t v_isSharedCheck_5864_; 
lean_del_object(v___x_5843_);
v_a_5857_ = lean_ctor_get(v___x_5845_, 0);
v_isSharedCheck_5864_ = !lean_is_exclusive(v___x_5845_);
if (v_isSharedCheck_5864_ == 0)
{
v___x_5859_ = v___x_5845_;
v_isShared_5860_ = v_isSharedCheck_5864_;
goto v_resetjp_5858_;
}
else
{
lean_inc(v_a_5857_);
lean_dec(v___x_5845_);
v___x_5859_ = lean_box(0);
v_isShared_5860_ = v_isSharedCheck_5864_;
goto v_resetjp_5858_;
}
v_resetjp_5858_:
{
lean_object* v___x_5862_; 
if (v_isShared_5860_ == 0)
{
v___x_5862_ = v___x_5859_;
goto v_reusejp_5861_;
}
else
{
lean_object* v_reuseFailAlloc_5863_; 
v_reuseFailAlloc_5863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5863_, 0, v_a_5857_);
v___x_5862_ = v_reuseFailAlloc_5863_;
goto v_reusejp_5861_;
}
v_reusejp_5861_:
{
return v___x_5862_;
}
}
}
}
}
else
{
lean_object* v___x_5866_; 
lean_dec_ref(v_f_5834_);
v___x_5866_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5866_, 0, v_v_5835_);
return v___x_5866_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg___boxed(lean_object* v_f_5867_, lean_object* v_v_5868_, lean_object* v___y_5869_, lean_object* v___y_5870_, lean_object* v___y_5871_, lean_object* v___y_5872_, lean_object* v___y_5873_){
_start:
{
lean_object* v_res_5874_; 
v_res_5874_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v_f_5867_, v_v_5868_, v___y_5869_, v___y_5870_, v___y_5871_, v___y_5872_);
lean_dec(v___y_5872_);
lean_dec_ref(v___y_5871_);
lean_dec(v___y_5870_);
lean_dec_ref(v___y_5869_);
return v_res_5874_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(uint8_t v_pu_5875_, lean_object* v_f_5876_, lean_object* v_v_5877_, lean_object* v___y_5878_, lean_object* v___y_5879_, lean_object* v___y_5880_, lean_object* v___y_5881_){
_start:
{
lean_object* v___x_5883_; 
v___x_5883_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v_f_5876_, v_v_5877_, v___y_5878_, v___y_5879_, v___y_5880_, v___y_5881_);
return v___x_5883_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___boxed(lean_object* v_pu_5884_, lean_object* v_f_5885_, lean_object* v_v_5886_, lean_object* v___y_5887_, lean_object* v___y_5888_, lean_object* v___y_5889_, lean_object* v___y_5890_, lean_object* v___y_5891_){
_start:
{
uint8_t v_pu_boxed_5892_; lean_object* v_res_5893_; 
v_pu_boxed_5892_ = lean_unbox(v_pu_5884_);
v_res_5893_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(v_pu_boxed_5892_, v_f_5885_, v_v_5886_, v___y_5887_, v___y_5888_, v___y_5889_, v___y_5890_);
lean_dec(v___y_5890_);
lean_dec_ref(v___y_5889_);
lean_dec(v___y_5888_);
lean_dec_ref(v___y_5887_);
return v_res_5893_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(lean_object* v_toSignature_5894_, lean_object* v_decl_5895_, lean_object* v_code_5896_, lean_object* v___y_5897_, lean_object* v___y_5898_, lean_object* v___y_5899_, lean_object* v___y_5900_){
_start:
{
lean_object* v_params_5902_; lean_object* v___x_5903_; 
v_params_5902_ = lean_ctor_get(v_toSignature_5894_, 3);
lean_inc_ref(v_code_5896_);
v___x_5903_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(v_params_5902_, v_code_5896_, v___y_5897_, v___y_5898_, v___y_5899_, v___y_5900_);
if (lean_obj_tag(v___x_5903_) == 0)
{
lean_object* v_a_5904_; lean_object* v_fst_5905_; lean_object* v_snd_5906_; lean_object* v___x_5907_; lean_object* v___x_5908_; lean_object* v___x_5909_; lean_object* v___x_5910_; lean_object* v___x_5911_; lean_object* v___x_5912_; 
v_a_5904_ = lean_ctor_get(v___x_5903_, 0);
lean_inc(v_a_5904_);
lean_dec_ref_known(v___x_5903_, 1);
v_fst_5905_ = lean_ctor_get(v_a_5904_, 0);
lean_inc(v_fst_5905_);
v_snd_5906_ = lean_ctor_get(v_a_5904_, 1);
lean_inc(v_snd_5906_);
lean_dec(v_a_5904_);
v___x_5907_ = lean_box(1);
v___x_5908_ = lean_unsigned_to_nat(0u);
v___x_5909_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5909_, 0, v_snd_5906_);
lean_ctor_set(v___x_5909_, 1, v_fst_5905_);
lean_ctor_set(v___x_5909_, 2, v___x_5907_);
lean_ctor_set(v___x_5909_, 3, v___x_5907_);
lean_ctor_set(v___x_5909_, 4, v___x_5908_);
v___x_5910_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5911_ = lean_st_mk_ref(v___x_5910_);
v___x_5912_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(v_decl_5895_, v_code_5896_, v___x_5909_, v___x_5911_, v___y_5897_, v___y_5898_, v___y_5899_, v___y_5900_);
lean_dec_ref_known(v___x_5909_, 5);
if (lean_obj_tag(v___x_5912_) == 0)
{
lean_object* v_a_5913_; lean_object* v___x_5915_; uint8_t v_isShared_5916_; uint8_t v_isSharedCheck_5921_; 
v_a_5913_ = lean_ctor_get(v___x_5912_, 0);
v_isSharedCheck_5921_ = !lean_is_exclusive(v___x_5912_);
if (v_isSharedCheck_5921_ == 0)
{
v___x_5915_ = v___x_5912_;
v_isShared_5916_ = v_isSharedCheck_5921_;
goto v_resetjp_5914_;
}
else
{
lean_inc(v_a_5913_);
lean_dec(v___x_5912_);
v___x_5915_ = lean_box(0);
v_isShared_5916_ = v_isSharedCheck_5921_;
goto v_resetjp_5914_;
}
v_resetjp_5914_:
{
lean_object* v___x_5917_; lean_object* v___x_5919_; 
v___x_5917_ = lean_st_ref_get(v___x_5911_);
lean_dec(v___x_5911_);
lean_dec(v___x_5917_);
if (v_isShared_5916_ == 0)
{
v___x_5919_ = v___x_5915_;
goto v_reusejp_5918_;
}
else
{
lean_object* v_reuseFailAlloc_5920_; 
v_reuseFailAlloc_5920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5920_, 0, v_a_5913_);
v___x_5919_ = v_reuseFailAlloc_5920_;
goto v_reusejp_5918_;
}
v_reusejp_5918_:
{
return v___x_5919_;
}
}
}
else
{
lean_dec(v___x_5911_);
return v___x_5912_;
}
}
else
{
lean_object* v_a_5922_; lean_object* v___x_5924_; uint8_t v_isShared_5925_; uint8_t v_isSharedCheck_5929_; 
lean_dec_ref(v_code_5896_);
v_a_5922_ = lean_ctor_get(v___x_5903_, 0);
v_isSharedCheck_5929_ = !lean_is_exclusive(v___x_5903_);
if (v_isSharedCheck_5929_ == 0)
{
v___x_5924_ = v___x_5903_;
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
else
{
lean_inc(v_a_5922_);
lean_dec(v___x_5903_);
v___x_5924_ = lean_box(0);
v_isShared_5925_ = v_isSharedCheck_5929_;
goto v_resetjp_5923_;
}
v_resetjp_5923_:
{
lean_object* v___x_5927_; 
if (v_isShared_5925_ == 0)
{
v___x_5927_ = v___x_5924_;
goto v_reusejp_5926_;
}
else
{
lean_object* v_reuseFailAlloc_5928_; 
v_reuseFailAlloc_5928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5928_, 0, v_a_5922_);
v___x_5927_ = v_reuseFailAlloc_5928_;
goto v_reusejp_5926_;
}
v_reusejp_5926_:
{
return v___x_5927_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed(lean_object* v_toSignature_5930_, lean_object* v_decl_5931_, lean_object* v_code_5932_, lean_object* v___y_5933_, lean_object* v___y_5934_, lean_object* v___y_5935_, lean_object* v___y_5936_, lean_object* v___y_5937_){
_start:
{
lean_object* v_res_5938_; 
v_res_5938_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(v_toSignature_5930_, v_decl_5931_, v_code_5932_, v___y_5933_, v___y_5934_, v___y_5935_, v___y_5936_);
lean_dec(v___y_5936_);
lean_dec_ref(v___y_5935_);
lean_dec(v___y_5934_);
lean_dec_ref(v___y_5933_);
lean_dec_ref(v_decl_5931_);
lean_dec_ref(v_toSignature_5930_);
return v_res_5938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(lean_object* v_decl_5939_, lean_object* v___y_5940_, lean_object* v___y_5941_, lean_object* v___y_5942_, lean_object* v___y_5943_){
_start:
{
lean_object* v_toSignature_5945_; lean_object* v_value_5946_; uint8_t v_recursive_5947_; lean_object* v_inlineAttr_x3f_5948_; lean_object* v___f_5949_; lean_object* v___x_5950_; 
v_toSignature_5945_ = lean_ctor_get(v_decl_5939_, 0);
lean_inc_ref_n(v_toSignature_5945_, 2);
v_value_5946_ = lean_ctor_get(v_decl_5939_, 1);
lean_inc_ref(v_value_5946_);
v_recursive_5947_ = lean_ctor_get_uint8(v_decl_5939_, sizeof(void*)*3);
v_inlineAttr_x3f_5948_ = lean_ctor_get(v_decl_5939_, 2);
lean_inc(v_inlineAttr_x3f_5948_);
v___f_5949_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed), 8, 2);
lean_closure_set(v___f_5949_, 0, v_toSignature_5945_);
lean_closure_set(v___f_5949_, 1, v_decl_5939_);
v___x_5950_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v___f_5949_, v_value_5946_, v___y_5940_, v___y_5941_, v___y_5942_, v___y_5943_);
if (lean_obj_tag(v___x_5950_) == 0)
{
lean_object* v_a_5951_; lean_object* v___x_5953_; uint8_t v_isShared_5954_; uint8_t v_isSharedCheck_5959_; 
v_a_5951_ = lean_ctor_get(v___x_5950_, 0);
v_isSharedCheck_5959_ = !lean_is_exclusive(v___x_5950_);
if (v_isSharedCheck_5959_ == 0)
{
v___x_5953_ = v___x_5950_;
v_isShared_5954_ = v_isSharedCheck_5959_;
goto v_resetjp_5952_;
}
else
{
lean_inc(v_a_5951_);
lean_dec(v___x_5950_);
v___x_5953_ = lean_box(0);
v_isShared_5954_ = v_isSharedCheck_5959_;
goto v_resetjp_5952_;
}
v_resetjp_5952_:
{
lean_object* v___x_5955_; lean_object* v___x_5957_; 
v___x_5955_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5955_, 0, v_toSignature_5945_);
lean_ctor_set(v___x_5955_, 1, v_a_5951_);
lean_ctor_set(v___x_5955_, 2, v_inlineAttr_x3f_5948_);
lean_ctor_set_uint8(v___x_5955_, sizeof(void*)*3, v_recursive_5947_);
if (v_isShared_5954_ == 0)
{
lean_ctor_set(v___x_5953_, 0, v___x_5955_);
v___x_5957_ = v___x_5953_;
goto v_reusejp_5956_;
}
else
{
lean_object* v_reuseFailAlloc_5958_; 
v_reuseFailAlloc_5958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5958_, 0, v___x_5955_);
v___x_5957_ = v_reuseFailAlloc_5958_;
goto v_reusejp_5956_;
}
v_reusejp_5956_:
{
return v___x_5957_;
}
}
}
else
{
lean_object* v_a_5960_; lean_object* v___x_5962_; uint8_t v_isShared_5963_; uint8_t v_isSharedCheck_5967_; 
lean_dec(v_inlineAttr_x3f_5948_);
lean_dec_ref(v_toSignature_5945_);
v_a_5960_ = lean_ctor_get(v___x_5950_, 0);
v_isSharedCheck_5967_ = !lean_is_exclusive(v___x_5950_);
if (v_isSharedCheck_5967_ == 0)
{
v___x_5962_ = v___x_5950_;
v_isShared_5963_ = v_isSharedCheck_5967_;
goto v_resetjp_5961_;
}
else
{
lean_inc(v_a_5960_);
lean_dec(v___x_5950_);
v___x_5962_ = lean_box(0);
v_isShared_5963_ = v_isSharedCheck_5967_;
goto v_resetjp_5961_;
}
v_resetjp_5961_:
{
lean_object* v___x_5965_; 
if (v_isShared_5963_ == 0)
{
v___x_5965_ = v___x_5962_;
goto v_reusejp_5964_;
}
else
{
lean_object* v_reuseFailAlloc_5966_; 
v_reuseFailAlloc_5966_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5966_, 0, v_a_5960_);
v___x_5965_ = v_reuseFailAlloc_5966_;
goto v_reusejp_5964_;
}
v_reusejp_5964_:
{
return v___x_5965_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___boxed(lean_object* v_decl_5968_, lean_object* v___y_5969_, lean_object* v___y_5970_, lean_object* v___y_5971_, lean_object* v___y_5972_, lean_object* v___y_5973_){
_start:
{
lean_object* v_res_5974_; 
v_res_5974_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(v_decl_5968_, v___y_5969_, v___y_5970_, v___y_5971_, v___y_5972_);
lean_dec(v___y_5972_);
lean_dec_ref(v___y_5971_);
lean_dec(v___y_5970_);
lean_dec_ref(v___y_5969_);
return v_res_5974_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(size_t v_sz_5975_, size_t v_i_5976_, lean_object* v_bs_5977_, lean_object* v___y_5978_, lean_object* v___y_5979_, lean_object* v___y_5980_, lean_object* v___y_5981_){
_start:
{
uint8_t v___x_5983_; 
v___x_5983_ = lean_usize_dec_lt(v_i_5976_, v_sz_5975_);
if (v___x_5983_ == 0)
{
lean_object* v___x_5984_; 
v___x_5984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5984_, 0, v_bs_5977_);
return v___x_5984_;
}
else
{
lean_object* v_v_5985_; lean_object* v___x_5986_; lean_object* v_bs_x27_5987_; lean_object* v___x_5988_; 
v_v_5985_ = lean_array_uget(v_bs_5977_, v_i_5976_);
v___x_5986_ = lean_unsigned_to_nat(0u);
v_bs_x27_5987_ = lean_array_uset(v_bs_5977_, v_i_5976_, v___x_5986_);
v___x_5988_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(v_v_5985_, v___y_5978_, v___y_5979_, v___y_5980_, v___y_5981_);
if (lean_obj_tag(v___x_5988_) == 0)
{
lean_object* v_a_5989_; size_t v___x_5990_; size_t v___x_5991_; lean_object* v___x_5992_; 
v_a_5989_ = lean_ctor_get(v___x_5988_, 0);
lean_inc(v_a_5989_);
lean_dec_ref_known(v___x_5988_, 1);
v___x_5990_ = ((size_t)1ULL);
v___x_5991_ = lean_usize_add(v_i_5976_, v___x_5990_);
v___x_5992_ = lean_array_uset(v_bs_x27_5987_, v_i_5976_, v_a_5989_);
v_i_5976_ = v___x_5991_;
v_bs_5977_ = v___x_5992_;
goto _start;
}
else
{
lean_object* v_a_5994_; lean_object* v___x_5996_; uint8_t v_isShared_5997_; uint8_t v_isSharedCheck_6001_; 
lean_dec_ref(v_bs_x27_5987_);
v_a_5994_ = lean_ctor_get(v___x_5988_, 0);
v_isSharedCheck_6001_ = !lean_is_exclusive(v___x_5988_);
if (v_isSharedCheck_6001_ == 0)
{
v___x_5996_ = v___x_5988_;
v_isShared_5997_ = v_isSharedCheck_6001_;
goto v_resetjp_5995_;
}
else
{
lean_inc(v_a_5994_);
lean_dec(v___x_5988_);
v___x_5996_ = lean_box(0);
v_isShared_5997_ = v_isSharedCheck_6001_;
goto v_resetjp_5995_;
}
v_resetjp_5995_:
{
lean_object* v___x_5999_; 
if (v_isShared_5997_ == 0)
{
v___x_5999_ = v___x_5996_;
goto v_reusejp_5998_;
}
else
{
lean_object* v_reuseFailAlloc_6000_; 
v_reuseFailAlloc_6000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6000_, 0, v_a_5994_);
v___x_5999_ = v_reuseFailAlloc_6000_;
goto v_reusejp_5998_;
}
v_reusejp_5998_:
{
return v___x_5999_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0___boxed(lean_object* v_sz_6002_, lean_object* v_i_6003_, lean_object* v_bs_6004_, lean_object* v___y_6005_, lean_object* v___y_6006_, lean_object* v___y_6007_, lean_object* v___y_6008_, lean_object* v___y_6009_){
_start:
{
size_t v_sz_boxed_6010_; size_t v_i_boxed_6011_; lean_object* v_res_6012_; 
v_sz_boxed_6010_ = lean_unbox_usize(v_sz_6002_);
lean_dec(v_sz_6002_);
v_i_boxed_6011_ = lean_unbox_usize(v_i_6003_);
lean_dec(v_i_6003_);
v_res_6012_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(v_sz_boxed_6010_, v_i_boxed_6011_, v_bs_6004_, v___y_6005_, v___y_6006_, v___y_6007_, v___y_6008_);
lean_dec(v___y_6008_);
lean_dec_ref(v___y_6007_);
lean_dec(v___y_6006_);
lean_dec_ref(v___y_6005_);
return v_res_6012_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc(lean_object* v_decls_6013_, lean_object* v___y_6014_, lean_object* v___y_6015_, lean_object* v___y_6016_, lean_object* v___y_6017_){
_start:
{
size_t v_sz_6019_; size_t v___x_6020_; lean_object* v___x_6021_; 
v_sz_6019_ = lean_array_size(v_decls_6013_);
v___x_6020_ = ((size_t)0ULL);
v___x_6021_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(v_sz_6019_, v___x_6020_, v_decls_6013_, v___y_6014_, v___y_6015_, v___y_6016_, v___y_6017_);
return v___x_6021_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc___boxed(lean_object* v_decls_6022_, lean_object* v___y_6023_, lean_object* v___y_6024_, lean_object* v___y_6025_, lean_object* v___y_6026_, lean_object* v___y_6027_){
_start:
{
lean_object* v_res_6028_; 
v_res_6028_ = l_Lean_Compiler_LCNF_runExplicitRc(v_decls_6022_, v___y_6023_, v___y_6024_, v___y_6025_, v___y_6026_);
lean_dec(v___y_6026_);
lean_dec_ref(v___y_6025_);
lean_dec(v___y_6024_);
lean_dec_ref(v___y_6023_);
return v_res_6028_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_explicitRc___closed__3(void){
_start:
{
lean_object* v___x_6033_; lean_object* v___x_6034_; uint8_t v___x_6035_; lean_object* v___x_6036_; lean_object* v___x_6037_; 
v___x_6033_ = lean_unsigned_to_nat(0u);
v___x_6034_ = ((lean_object*)(l_Lean_Compiler_LCNF_explicitRc___closed__2));
v___x_6035_ = 2;
v___x_6036_ = ((lean_object*)(l_Lean_Compiler_LCNF_explicitRc___closed__1));
v___x_6037_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_6036_, v___x_6035_, v___x_6034_, v___x_6033_);
return v___x_6037_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_explicitRc(void){
_start:
{
lean_object* v___x_6038_; 
v___x_6038_ = lean_obj_once(&l_Lean_Compiler_LCNF_explicitRc___closed__3, &l_Lean_Compiler_LCNF_explicitRc___closed__3_once, _init_l_Lean_Compiler_LCNF_explicitRc___closed__3);
return v___x_6038_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6094_; lean_object* v___x_6095_; lean_object* v___x_6096_; 
v___x_6094_ = lean_unsigned_to_nat(3791338971u);
v___x_6095_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6096_ = l_Lean_Name_num___override(v___x_6095_, v___x_6094_);
return v___x_6096_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6098_; lean_object* v___x_6099_; lean_object* v___x_6100_; 
v___x_6098_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6099_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6100_ = l_Lean_Name_str___override(v___x_6099_, v___x_6098_);
return v___x_6100_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6102_; lean_object* v___x_6103_; lean_object* v___x_6104_; 
v___x_6102_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6103_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6104_ = l_Lean_Name_str___override(v___x_6103_, v___x_6102_);
return v___x_6104_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6105_; lean_object* v___x_6106_; lean_object* v___x_6107_; 
v___x_6105_ = lean_unsigned_to_nat(2u);
v___x_6106_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6107_ = l_Lean_Name_num___override(v___x_6106_, v___x_6105_);
return v___x_6107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6109_; uint8_t v___x_6110_; lean_object* v___x_6111_; lean_object* v___x_6112_; 
v___x_6109_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6110_ = 1;
v___x_6111_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6112_ = l_Lean_registerTraceClass(v___x_6109_, v___x_6110_, v___x_6111_);
return v___x_6112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2____boxed(lean_object* v___y_6113_){
_start:
{
lean_object* v_res_6114_; 
v_res_6114_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_();
return v_res_6114_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_ExplicitRC(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default = _init_l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default);
l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo = _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedDerivedValInfo);
l_Lean_Compiler_LCNF_instInhabitedLiveVars_default = _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_instInhabitedLiveVars_default);
l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars = _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars();
lean_mark_persistent(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars);
l_Lean_Compiler_LCNF_explicitRc = _init_l_Lean_Compiler_LCNF_explicitRc();
lean_mark_persistent(l_Lean_Compiler_LCNF_explicitRc);
res = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_ExplicitRC(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_CompilerM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PassManager(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_PrettyPrinter(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_ExplicitRC(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_CompilerM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PassManager(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ExplicitRC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_ExplicitRC(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_ExplicitRC(builtin);
}
#ifdef __cplusplus
}
#endif
