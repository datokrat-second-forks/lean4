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
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
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
static lean_once_cell_t l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4_value;
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(lean_object* v_parents_53_, lean_object* v_child_54_, lean_object* v_a_55_){
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
v___x_61_ = lean_st_ref_take(v_a_55_);
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
v___x_75_ = lean_st_ref_put(v_a_55_, v___x_74_);
v___x_76_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_76_, 0, v___x_67_);
return v___x_76_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___boxed(lean_object* v_parents_90_, lean_object* v_child_91_, lean_object* v_a_92_, lean_object* v___y_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg(v_parents_90_, v_child_91_, v_a_92_);
lean_dec(v_a_92_);
return v_res_94_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(lean_object* v_parents_95_, lean_object* v_child_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_){
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
v___x_107_ = lean_st_ref_take(v_a_97_);
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
v___x_121_ = lean_st_ref_put(v_a_97_, v___x_120_);
v___x_122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_122_, 0, v___x_113_);
return v___x_122_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___boxed(lean_object* v_parents_136_, lean_object* v_child_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v___y_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue(v_parents_136_, v_child_137_, v_a_138_, v_a_139_, v_a_140_, v_a_141_, v_a_142_);
lean_dec(v_a_142_);
lean_dec_ref(v_a_141_);
lean_dec(v_a_140_);
lean_dec_ref(v_a_139_);
lean_dec(v_a_138_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(lean_object* v_fvarId_145_, lean_object* v_a_146_){
_start:
{
lean_object* v___x_148_; lean_object* v_varMap_149_; lean_object* v_borrowedValues_150_; lean_object* v___x_152_; uint8_t v_isShared_153_; uint8_t v_isSharedCheck_161_; 
v___x_148_ = lean_st_ref_take(v_a_146_);
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
v___x_158_ = lean_st_ref_put(v_a_146_, v___x_157_);
v___x_159_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_159_, 0, v___x_154_);
return v___x_159_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg___boxed(lean_object* v_fvarId_162_, lean_object* v_a_163_, lean_object* v___y_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___redArg(v_fvarId_162_, v_a_163_);
lean_dec(v_a_163_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(lean_object* v_fvarId_166_, lean_object* v_a_167_, lean_object* v_a_168_, lean_object* v_a_169_, lean_object* v_a_170_, lean_object* v_a_171_){
_start:
{
lean_object* v___x_173_; lean_object* v_varMap_174_; lean_object* v_borrowedValues_175_; lean_object* v___x_177_; uint8_t v_isShared_178_; uint8_t v_isSharedCheck_186_; 
v___x_173_ = lean_st_ref_take(v_a_167_);
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
v___x_183_ = lean_st_ref_put(v_a_167_, v___x_182_);
v___x_184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_184_, 0, v___x_179_);
return v___x_184_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue___boxed(lean_object* v_fvarId_187_, lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_, lean_object* v_a_191_, lean_object* v_a_192_, lean_object* v___y_193_){
_start:
{
lean_object* v_res_194_; 
v_res_194_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addBorrowedValue(v_fvarId_187_, v_a_188_, v_a_189_, v_a_190_, v_a_191_, v_a_192_);
lean_dec(v_a_192_);
lean_dec_ref(v_a_191_);
lean_dec(v_a_190_);
lean_dec_ref(v_a_189_);
lean_dec(v_a_188_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(lean_object* v_parents_444_, lean_object* v_child_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_){
_start:
{
lean_object* v___y_453_; lean_object* v_borrowedValues_454_; lean_object* v___y_455_; lean_object* v_a_481_; lean_object* v___y_492_; lean_object* v___x_502_; 
lean_inc(v_child_445_);
v___x_502_ = l_Lean_Compiler_LCNF_getType(v_child_445_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
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
v___x_519_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(v_parents_444_, v___x_517_, v___x_518_, v___x_514_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
v___y_492_ = v___x_519_;
goto v___jp_491_;
}
}
else
{
size_t v___x_520_; size_t v___x_521_; lean_object* v___x_522_; 
v___x_520_ = ((size_t)0ULL);
v___x_521_ = lean_usize_of_nat(v___x_513_);
v___x_522_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__3___redArg(v_parents_444_, v___x_520_, v___x_521_, v___x_514_, v_a_447_, v_a_448_, v_a_449_, v_a_450_);
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
v___x_461_ = lean_st_ref_put(v_a_446_, v___x_460_);
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
v___x_466_ = lean_st_ref_take(v_a_446_);
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
v___x_476_ = lean_st_ref_put(v_a_446_, v___x_475_);
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
v___x_482_ = lean_st_ref_take(v_a_446_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___boxed(lean_object* v_parents_532_, lean_object* v_child_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v_parents_532_, v_child_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec_ref(v_a_535_);
lean_dec(v_a_534_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(lean_object* v_p_618_, lean_object* v_a_619_){
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
v___x_632_ = lean_st_ref_take(v_a_619_);
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
v___x_644_ = lean_st_ref_put(v_a_619_, v___x_643_);
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
v___x_646_ = lean_st_ref_take(v_a_619_);
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
v___x_656_ = lean_st_ref_put(v_a_619_, v___x_655_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___boxed(lean_object* v_p_667_, lean_object* v_a_668_, lean_object* v___y_669_){
_start:
{
lean_object* v_res_670_; 
v_res_670_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg(v_p_667_, v_a_668_);
lean_dec(v_a_668_);
return v_res_670_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(lean_object* v_p_671_, lean_object* v_a_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_){
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
v___x_689_ = lean_st_ref_take(v_a_672_);
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
v___x_701_ = lean_st_ref_put(v_a_672_, v___x_700_);
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
v___x_703_ = lean_st_ref_take(v_a_672_);
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
v___x_713_ = lean_st_ref_put(v_a_672_, v___x_712_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___boxed(lean_object* v_p_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v___y_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam(v_p_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(lean_object* v_child_870_, lean_object* v_a_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_){
_start:
{
lean_object* v___x_877_; lean_object* v_varMap_878_; lean_object* v___x_879_; 
v___x_877_ = lean_st_ref_get(v_a_871_);
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
v___x_885_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__2___redArg(v_child_870_, v_parents_881_, v_sz_883_, v___x_884_, v___x_882_, v_a_871_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents___boxed(lean_object* v_child_896_, lean_object* v_a_897_, lean_object* v_a_898_, lean_object* v_a_899_, lean_object* v_a_900_, lean_object* v_a_901_, lean_object* v___y_902_){
_start:
{
lean_object* v_res_903_; 
v_res_903_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(v_child_896_, v_a_897_, v_a_898_, v_a_899_, v_a_900_, v_a_901_);
lean_dec(v_a_901_);
lean_dec_ref(v_a_900_);
lean_dec(v_a_899_);
lean_dec_ref(v_a_898_);
lean_dec(v_a_897_);
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
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0(void){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = l_instMonadEIO___redArg();
return v___x_990_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(lean_object* v_msg_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_){
_start:
{
lean_object* v___x_1002_; lean_object* v___x_1003_; lean_object* v_toApplicative_1004_; lean_object* v___x_1006_; uint8_t v_isShared_1007_; uint8_t v_isSharedCheck_1066_; 
v___x_1002_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0);
v___x_1003_ = l_StateRefT_x27_instMonad___redArg(v___x_1002_);
v_toApplicative_1004_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1066_ == 0)
{
lean_object* v_unused_1067_; 
v_unused_1067_ = lean_ctor_get(v___x_1003_, 1);
lean_dec(v_unused_1067_);
v___x_1006_ = v___x_1003_;
v_isShared_1007_ = v_isSharedCheck_1066_;
goto v_resetjp_1005_;
}
else
{
lean_inc(v_toApplicative_1004_);
lean_dec(v___x_1003_);
v___x_1006_ = lean_box(0);
v_isShared_1007_ = v_isSharedCheck_1066_;
goto v_resetjp_1005_;
}
v_resetjp_1005_:
{
lean_object* v_toFunctor_1008_; lean_object* v_toSeq_1009_; lean_object* v_toSeqLeft_1010_; lean_object* v_toSeqRight_1011_; lean_object* v___x_1013_; uint8_t v_isShared_1014_; uint8_t v_isSharedCheck_1064_; 
v_toFunctor_1008_ = lean_ctor_get(v_toApplicative_1004_, 0);
v_toSeq_1009_ = lean_ctor_get(v_toApplicative_1004_, 2);
v_toSeqLeft_1010_ = lean_ctor_get(v_toApplicative_1004_, 3);
v_toSeqRight_1011_ = lean_ctor_get(v_toApplicative_1004_, 4);
v_isSharedCheck_1064_ = !lean_is_exclusive(v_toApplicative_1004_);
if (v_isSharedCheck_1064_ == 0)
{
lean_object* v_unused_1065_; 
v_unused_1065_ = lean_ctor_get(v_toApplicative_1004_, 1);
lean_dec(v_unused_1065_);
v___x_1013_ = v_toApplicative_1004_;
v_isShared_1014_ = v_isSharedCheck_1064_;
goto v_resetjp_1012_;
}
else
{
lean_inc(v_toSeqRight_1011_);
lean_inc(v_toSeqLeft_1010_);
lean_inc(v_toSeq_1009_);
lean_inc(v_toFunctor_1008_);
lean_dec(v_toApplicative_1004_);
v___x_1013_ = lean_box(0);
v_isShared_1014_ = v_isSharedCheck_1064_;
goto v_resetjp_1012_;
}
v_resetjp_1012_:
{
lean_object* v___f_1015_; lean_object* v___f_1016_; lean_object* v___f_1017_; lean_object* v___f_1018_; lean_object* v___x_1019_; lean_object* v___f_1020_; lean_object* v___f_1021_; lean_object* v___f_1022_; lean_object* v___x_1024_; 
v___f_1015_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1));
v___f_1016_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2));
lean_inc_ref(v_toFunctor_1008_);
v___f_1017_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1017_, 0, v_toFunctor_1008_);
v___f_1018_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1018_, 0, v_toFunctor_1008_);
v___x_1019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1019_, 0, v___f_1017_);
lean_ctor_set(v___x_1019_, 1, v___f_1018_);
v___f_1020_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1020_, 0, v_toSeqRight_1011_);
v___f_1021_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1021_, 0, v_toSeqLeft_1010_);
v___f_1022_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1022_, 0, v_toSeq_1009_);
if (v_isShared_1014_ == 0)
{
lean_ctor_set(v___x_1013_, 4, v___f_1020_);
lean_ctor_set(v___x_1013_, 3, v___f_1021_);
lean_ctor_set(v___x_1013_, 2, v___f_1022_);
lean_ctor_set(v___x_1013_, 1, v___f_1015_);
lean_ctor_set(v___x_1013_, 0, v___x_1019_);
v___x_1024_ = v___x_1013_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1063_; 
v_reuseFailAlloc_1063_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1063_, 0, v___x_1019_);
lean_ctor_set(v_reuseFailAlloc_1063_, 1, v___f_1015_);
lean_ctor_set(v_reuseFailAlloc_1063_, 2, v___f_1022_);
lean_ctor_set(v_reuseFailAlloc_1063_, 3, v___f_1021_);
lean_ctor_set(v_reuseFailAlloc_1063_, 4, v___f_1020_);
v___x_1024_ = v_reuseFailAlloc_1063_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
lean_object* v___x_1026_; 
if (v_isShared_1007_ == 0)
{
lean_ctor_set(v___x_1006_, 1, v___f_1016_);
lean_ctor_set(v___x_1006_, 0, v___x_1024_);
v___x_1026_ = v___x_1006_;
goto v_reusejp_1025_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1024_);
lean_ctor_set(v_reuseFailAlloc_1062_, 1, v___f_1016_);
v___x_1026_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1025_;
}
v_reusejp_1025_:
{
lean_object* v___x_1027_; lean_object* v_toApplicative_1028_; lean_object* v___x_1030_; uint8_t v_isShared_1031_; uint8_t v_isSharedCheck_1060_; 
v___x_1027_ = l_StateRefT_x27_instMonad___redArg(v___x_1026_);
v_toApplicative_1028_ = lean_ctor_get(v___x_1027_, 0);
v_isSharedCheck_1060_ = !lean_is_exclusive(v___x_1027_);
if (v_isSharedCheck_1060_ == 0)
{
lean_object* v_unused_1061_; 
v_unused_1061_ = lean_ctor_get(v___x_1027_, 1);
lean_dec(v_unused_1061_);
v___x_1030_ = v___x_1027_;
v_isShared_1031_ = v_isSharedCheck_1060_;
goto v_resetjp_1029_;
}
else
{
lean_inc(v_toApplicative_1028_);
lean_dec(v___x_1027_);
v___x_1030_ = lean_box(0);
v_isShared_1031_ = v_isSharedCheck_1060_;
goto v_resetjp_1029_;
}
v_resetjp_1029_:
{
lean_object* v_toFunctor_1032_; lean_object* v_toSeq_1033_; lean_object* v_toSeqLeft_1034_; lean_object* v_toSeqRight_1035_; lean_object* v___x_1037_; uint8_t v_isShared_1038_; uint8_t v_isSharedCheck_1058_; 
v_toFunctor_1032_ = lean_ctor_get(v_toApplicative_1028_, 0);
v_toSeq_1033_ = lean_ctor_get(v_toApplicative_1028_, 2);
v_toSeqLeft_1034_ = lean_ctor_get(v_toApplicative_1028_, 3);
v_toSeqRight_1035_ = lean_ctor_get(v_toApplicative_1028_, 4);
v_isSharedCheck_1058_ = !lean_is_exclusive(v_toApplicative_1028_);
if (v_isSharedCheck_1058_ == 0)
{
lean_object* v_unused_1059_; 
v_unused_1059_ = lean_ctor_get(v_toApplicative_1028_, 1);
lean_dec(v_unused_1059_);
v___x_1037_ = v_toApplicative_1028_;
v_isShared_1038_ = v_isSharedCheck_1058_;
goto v_resetjp_1036_;
}
else
{
lean_inc(v_toSeqRight_1035_);
lean_inc(v_toSeqLeft_1034_);
lean_inc(v_toSeq_1033_);
lean_inc(v_toFunctor_1032_);
lean_dec(v_toApplicative_1028_);
v___x_1037_ = lean_box(0);
v_isShared_1038_ = v_isSharedCheck_1058_;
goto v_resetjp_1036_;
}
v_resetjp_1036_:
{
lean_object* v___f_1039_; lean_object* v___f_1040_; lean_object* v___f_1041_; lean_object* v___f_1042_; lean_object* v___x_1043_; lean_object* v___f_1044_; lean_object* v___f_1045_; lean_object* v___f_1046_; lean_object* v___x_1048_; 
v___f_1039_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3));
v___f_1040_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4));
lean_inc_ref(v_toFunctor_1032_);
v___f_1041_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1041_, 0, v_toFunctor_1032_);
v___f_1042_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1042_, 0, v_toFunctor_1032_);
v___x_1043_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1043_, 0, v___f_1041_);
lean_ctor_set(v___x_1043_, 1, v___f_1042_);
v___f_1044_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1044_, 0, v_toSeqRight_1035_);
v___f_1045_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1045_, 0, v_toSeqLeft_1034_);
v___f_1046_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1046_, 0, v_toSeq_1033_);
if (v_isShared_1038_ == 0)
{
lean_ctor_set(v___x_1037_, 4, v___f_1044_);
lean_ctor_set(v___x_1037_, 3, v___f_1045_);
lean_ctor_set(v___x_1037_, 2, v___f_1046_);
lean_ctor_set(v___x_1037_, 1, v___f_1039_);
lean_ctor_set(v___x_1037_, 0, v___x_1043_);
v___x_1048_ = v___x_1037_;
goto v_reusejp_1047_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___x_1043_);
lean_ctor_set(v_reuseFailAlloc_1057_, 1, v___f_1039_);
lean_ctor_set(v_reuseFailAlloc_1057_, 2, v___f_1046_);
lean_ctor_set(v_reuseFailAlloc_1057_, 3, v___f_1045_);
lean_ctor_set(v_reuseFailAlloc_1057_, 4, v___f_1044_);
v___x_1048_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1047_;
}
v_reusejp_1047_:
{
lean_object* v___x_1050_; 
if (v_isShared_1031_ == 0)
{
lean_ctor_set(v___x_1030_, 1, v___f_1040_);
lean_ctor_set(v___x_1030_, 0, v___x_1048_);
v___x_1050_ = v___x_1030_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1056_; 
v_reuseFailAlloc_1056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1056_, 0, v___x_1048_);
lean_ctor_set(v_reuseFailAlloc_1056_, 1, v___f_1040_);
v___x_1050_ = v_reuseFailAlloc_1056_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_4721__overap_1054_; lean_object* v___x_1055_; 
v___x_1051_ = l_StateRefT_x27_instMonad___redArg(v___x_1050_);
v___x_1052_ = lean_box(0);
v___x_1053_ = l_instInhabitedOfMonad___redArg(v___x_1051_, v___x_1052_);
v___x_4721__overap_1054_ = lean_panic_fn_borrowed(v___x_1053_, v_msg_995_);
lean_dec(v___x_1053_);
lean_inc(v___y_1000_);
lean_inc_ref(v___y_999_);
lean_inc(v___y_998_);
lean_inc_ref(v___y_997_);
lean_inc(v___y_996_);
v___x_1055_ = lean_apply_6(v___x_4721__overap_1054_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, lean_box(0));
return v___x_1055_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___boxed(lean_object* v_msg_1068_, lean_object* v___y_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_){
_start:
{
lean_object* v_res_1075_; 
v_res_1075_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v_msg_1068_, v___y_1069_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v___y_1073_);
lean_dec_ref(v___y_1072_);
lean_dec(v___y_1071_);
lean_dec_ref(v___y_1070_);
lean_dec(v___y_1069_);
return v_res_1075_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(lean_object* v_as_1076_, size_t v_i_1077_, size_t v_stop_1078_, lean_object* v_b_1079_, lean_object* v___y_1080_){
_start:
{
lean_object* v_a_1083_; uint8_t v___x_1089_; 
v___x_1089_ = lean_usize_dec_eq(v_i_1077_, v_stop_1078_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; lean_object* v_fvarId_1091_; lean_object* v_type_1092_; uint8_t v_borrow_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v_varMap_1096_; lean_object* v_borrowedValues_1097_; lean_object* v___x_1099_; uint8_t v_isShared_1100_; uint8_t v_isSharedCheck_1127_; 
v___x_1090_ = lean_array_uget_borrowed(v_as_1076_, v_i_1077_);
v_fvarId_1091_ = lean_ctor_get(v___x_1090_, 0);
v_type_1092_ = lean_ctor_get(v___x_1090_, 2);
v_borrow_1093_ = lean_ctor_get_uint8(v___x_1090_, sizeof(void*)*3);
v___x_1094_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_1095_ = lean_st_ref_take(v___y_1080_);
v_varMap_1096_ = lean_ctor_get(v___x_1095_, 0);
v_borrowedValues_1097_ = lean_ctor_get(v___x_1095_, 1);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1095_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1099_ = v___x_1095_;
v_isShared_1100_ = v_isSharedCheck_1127_;
goto v_resetjp_1098_;
}
else
{
lean_inc(v_borrowedValues_1097_);
lean_inc(v_varMap_1096_);
lean_dec(v___x_1095_);
v___x_1099_ = lean_box(0);
v_isShared_1100_ = v_isSharedCheck_1127_;
goto v_resetjp_1098_;
}
v_resetjp_1098_:
{
lean_object* v___y_1102_; uint8_t v___x_1123_; 
v___x_1123_ = lean_uint8_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__2);
if (v___x_1123_ == 0)
{
v___y_1102_ = v_varMap_1096_;
goto v___jp_1101_;
}
else
{
size_t v___x_1124_; size_t v___x_1125_; lean_object* v___x_1126_; 
v___x_1124_ = ((size_t)0ULL);
v___x_1125_ = lean_usize_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__3);
lean_inc(v_fvarId_1091_);
v___x_1126_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__2(v_fvarId_1091_, v___x_1094_, v___x_1124_, v___x_1125_, v_varMap_1096_);
v___y_1102_ = v___x_1126_;
goto v___jp_1101_;
}
v___jp_1101_:
{
lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1106_; 
v___x_1103_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_visitParam___redArg___closed__0);
lean_inc(v_fvarId_1091_);
v___x_1104_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(v___y_1102_, v_fvarId_1091_, v___x_1103_);
if (v_isShared_1100_ == 0)
{
lean_ctor_set(v___x_1099_, 0, v___x_1104_);
v___x_1106_ = v___x_1099_;
goto v_reusejp_1105_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1104_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v_borrowedValues_1097_);
v___x_1106_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1105_;
}
v_reusejp_1105_:
{
lean_object* v___x_1107_; 
v___x_1107_ = lean_st_ref_put(v___y_1080_, v___x_1106_);
if (v_borrow_1093_ == 0)
{
goto v___jp_1087_;
}
else
{
uint8_t v___x_1108_; 
v___x_1108_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1092_);
if (v___x_1108_ == 0)
{
goto v___jp_1087_;
}
else
{
lean_object* v___x_1109_; lean_object* v_varMap_1110_; lean_object* v_borrowedValues_1111_; lean_object* v___x_1113_; uint8_t v_isShared_1114_; uint8_t v_isSharedCheck_1121_; 
v___x_1109_ = lean_st_ref_take(v___y_1080_);
v_varMap_1110_ = lean_ctor_get(v___x_1109_, 0);
v_borrowedValues_1111_ = lean_ctor_get(v___x_1109_, 1);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1109_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1113_ = v___x_1109_;
v_isShared_1114_ = v_isSharedCheck_1121_;
goto v_resetjp_1112_;
}
else
{
lean_inc(v_borrowedValues_1111_);
lean_inc(v_varMap_1110_);
lean_dec(v___x_1109_);
v___x_1113_ = lean_box(0);
v_isShared_1114_ = v_isSharedCheck_1121_;
goto v_resetjp_1112_;
}
v_resetjp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1118_; 
v___x_1115_ = lean_box(0);
lean_inc(v_fvarId_1091_);
v___x_1116_ = l_Lean_FVarIdHashSet_insert(v_borrowedValues_1111_, v_fvarId_1091_);
if (v_isShared_1114_ == 0)
{
lean_ctor_set(v___x_1113_, 1, v___x_1116_);
v___x_1118_ = v___x_1113_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_varMap_1110_);
lean_ctor_set(v_reuseFailAlloc_1120_, 1, v___x_1116_);
v___x_1118_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1117_;
}
v_reusejp_1117_:
{
lean_object* v___x_1119_; 
v___x_1119_ = lean_st_ref_put(v___y_1080_, v___x_1118_);
v_a_1083_ = v___x_1115_;
goto v___jp_1082_;
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
lean_object* v___x_1128_; 
v___x_1128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1128_, 0, v_b_1079_);
return v___x_1128_;
}
v___jp_1082_:
{
size_t v___x_1084_; size_t v___x_1085_; 
v___x_1084_ = ((size_t)1ULL);
v___x_1085_ = lean_usize_add(v_i_1077_, v___x_1084_);
v_i_1077_ = v___x_1085_;
v_b_1079_ = v_a_1083_;
goto _start;
}
v___jp_1087_:
{
lean_object* v___x_1088_; 
v___x_1088_ = lean_box(0);
v_a_1083_ = v___x_1088_;
goto v___jp_1082_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg___boxed(lean_object* v_as_1129_, lean_object* v_i_1130_, lean_object* v_stop_1131_, lean_object* v_b_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
size_t v_i_boxed_1135_; size_t v_stop_boxed_1136_; lean_object* v_res_1137_; 
v_i_boxed_1135_ = lean_unbox_usize(v_i_1130_);
lean_dec(v_i_1130_);
v_stop_boxed_1136_ = lean_unbox_usize(v_stop_1131_);
lean_dec(v_stop_1131_);
v_res_1137_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_as_1129_, v_i_boxed_1135_, v_stop_boxed_1136_, v_b_1132_, v___y_1133_);
lean_dec(v___y_1133_);
lean_dec_ref(v_as_1129_);
return v_res_1137_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7(void){
_start:
{
lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v___x_1145_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_1146_ = lean_unsigned_to_nat(59u);
v___x_1147_ = lean_unsigned_to_nat(150u);
v___x_1148_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__5));
v___x_1149_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_1150_ = l_mkPanicMessageWithDecl(v___x_1149_, v___x_1148_, v___x_1147_, v___x_1146_, v___x_1145_);
return v___x_1150_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(lean_object* v_code_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_, lean_object* v_a_1155_, lean_object* v_a_1156_){
_start:
{
switch(lean_obj_tag(v_code_1151_))
{
case 0:
{
lean_object* v_decl_1158_; lean_object* v_k_1159_; lean_object* v_fvarId_1160_; lean_object* v_value_1161_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; lean_object* v_args_1172_; lean_object* v___y_1173_; lean_object* v___y_1174_; lean_object* v___y_1175_; lean_object* v___y_1176_; lean_object* v___y_1177_; lean_object* v_parents_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v___y_1193_; 
v_decl_1158_ = lean_ctor_get(v_code_1151_, 0);
lean_inc_ref(v_decl_1158_);
v_k_1159_ = lean_ctor_get(v_code_1151_, 1);
lean_inc_ref(v_k_1159_);
lean_dec_ref_known(v_code_1151_, 2);
v_fvarId_1160_ = lean_ctor_get(v_decl_1158_, 0);
lean_inc(v_fvarId_1160_);
v_value_1161_ = lean_ctor_get(v_decl_1158_, 3);
lean_inc(v_value_1161_);
lean_dec_ref(v_decl_1158_);
switch(lean_obj_tag(v_value_1161_))
{
case 6:
{
lean_object* v_var_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
v_var_1196_ = lean_ctor_get(v_value_1161_, 1);
lean_inc(v_var_1196_);
lean_dec_ref_known(v_value_1161_, 2);
v___x_1197_ = lean_unsigned_to_nat(1u);
v___x_1198_ = lean_mk_empty_array_with_capacity(v___x_1197_);
v___x_1199_ = lean_array_push(v___x_1198_, v_var_1196_);
v___x_1200_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v___x_1199_, v_fvarId_1160_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
lean_dec_ref(v___x_1199_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_dec_ref_known(v___x_1200_, 1);
v_code_1151_ = v_k_1159_;
goto _start;
}
else
{
lean_dec_ref(v_k_1159_);
return v___x_1200_;
}
}
case 9:
{
lean_object* v_fn_1202_; lean_object* v_args_1203_; lean_object* v_parents_1205_; lean_object* v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; lean_object* v___y_1209_; lean_object* v___y_1210_; 
v_fn_1202_ = lean_ctor_get(v_value_1161_, 0);
lean_inc(v_fn_1202_);
v_args_1203_ = lean_ctor_get(v_value_1161_, 1);
lean_inc_ref(v_args_1203_);
lean_dec_ref_known(v_value_1161_, 2);
if (lean_obj_tag(v_fn_1202_) == 1)
{
lean_object* v_pre_1216_; 
v_pre_1216_ = lean_ctor_get(v_fn_1202_, 0);
lean_inc(v_pre_1216_);
if (lean_obj_tag(v_pre_1216_) == 1)
{
lean_object* v_pre_1217_; 
v_pre_1217_ = lean_ctor_get(v_pre_1216_, 0);
if (lean_obj_tag(v_pre_1217_) == 0)
{
lean_object* v_str_1218_; lean_object* v_str_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v_str_1218_ = lean_ctor_get(v_fn_1202_, 1);
lean_inc_ref(v_str_1218_);
lean_dec_ref_known(v_fn_1202_, 2);
v_str_1219_ = lean_ctor_get(v_pre_1216_, 1);
lean_inc_ref(v_str_1219_);
lean_dec_ref_known(v_pre_1216_, 2);
v___x_1220_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0));
v___x_1221_ = lean_string_dec_eq(v_str_1219_, v___x_1220_);
lean_dec_ref(v_str_1219_);
if (v___x_1221_ == 0)
{
lean_object* v___x_1222_; lean_object* v___x_1223_; uint8_t v___x_1224_; 
lean_dec_ref(v_str_1218_);
v___x_1222_ = lean_array_get_size(v_args_1203_);
lean_dec_ref(v_args_1203_);
v___x_1223_ = lean_unsigned_to_nat(0u);
v___x_1224_ = lean_nat_dec_eq(v___x_1222_, v___x_1223_);
if (v___x_1224_ == 0)
{
lean_dec(v_fvarId_1160_);
v_code_1151_ = v_k_1159_;
goto _start;
}
else
{
v___y_1163_ = v_a_1152_;
v___y_1164_ = v_a_1153_;
v___y_1165_ = v_a_1154_;
v___y_1166_ = v_a_1155_;
v___y_1167_ = v_a_1156_;
goto v___jp_1162_;
}
}
else
{
lean_object* v___x_1226_; uint8_t v___x_1227_; 
v___x_1226_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__1));
v___x_1227_ = lean_string_dec_eq(v_str_1218_, v___x_1226_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; uint8_t v___x_1229_; 
v___x_1228_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2));
v___x_1229_ = lean_string_dec_eq(v_str_1218_, v___x_1228_);
if (v___x_1229_ == 0)
{
lean_object* v___x_1230_; uint8_t v___x_1231_; 
v___x_1230_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3));
v___x_1231_ = lean_string_dec_eq(v_str_1218_, v___x_1230_);
lean_dec_ref(v_str_1218_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; lean_object* v___x_1233_; uint8_t v___x_1234_; 
v___x_1232_ = lean_array_get_size(v_args_1203_);
lean_dec_ref(v_args_1203_);
v___x_1233_ = lean_unsigned_to_nat(0u);
v___x_1234_ = lean_nat_dec_eq(v___x_1232_, v___x_1233_);
if (v___x_1234_ == 0)
{
lean_dec(v_fvarId_1160_);
v_code_1151_ = v_k_1159_;
goto _start;
}
else
{
v___y_1163_ = v_a_1152_;
v___y_1164_ = v_a_1153_;
v___y_1165_ = v_a_1154_;
v___y_1166_ = v_a_1155_;
v___y_1167_ = v_a_1156_;
goto v___jp_1162_;
}
}
else
{
v_args_1172_ = v_args_1203_;
v___y_1173_ = v_a_1152_;
v___y_1174_ = v_a_1153_;
v___y_1175_ = v_a_1154_;
v___y_1176_ = v_a_1155_;
v___y_1177_ = v_a_1156_;
goto v___jp_1171_;
}
}
else
{
lean_object* v_parents_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; 
lean_dec_ref(v_str_1218_);
v_parents_1236_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_1237_ = lean_box(0);
v___x_1238_ = lean_unsigned_to_nat(1u);
v___x_1239_ = lean_array_get_borrowed(v___x_1237_, v_args_1203_, v___x_1238_);
if (lean_obj_tag(v___x_1239_) == 1)
{
lean_object* v_fvarId_1240_; lean_object* v_parents_1241_; 
v_fvarId_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_fvarId_1240_);
v_parents_1241_ = lean_array_push(v_parents_1236_, v_fvarId_1240_);
v_parents_1205_ = v_parents_1241_;
v___y_1206_ = v_a_1152_;
v___y_1207_ = v_a_1153_;
v___y_1208_ = v_a_1154_;
v___y_1209_ = v_a_1155_;
v___y_1210_ = v_a_1156_;
goto v___jp_1204_;
}
else
{
v_parents_1205_ = v_parents_1236_;
v___y_1206_ = v_a_1152_;
v___y_1207_ = v_a_1153_;
v___y_1208_ = v_a_1154_;
v___y_1209_ = v_a_1155_;
v___y_1210_ = v_a_1156_;
goto v___jp_1204_;
}
}
}
else
{
lean_dec_ref(v_str_1218_);
v_args_1172_ = v_args_1203_;
v___y_1173_ = v_a_1152_;
v___y_1174_ = v_a_1153_;
v___y_1175_ = v_a_1154_;
v___y_1176_ = v_a_1155_;
v___y_1177_ = v_a_1156_;
goto v___jp_1171_;
}
}
}
else
{
lean_object* v___x_1242_; lean_object* v___x_1243_; uint8_t v___x_1244_; 
lean_dec_ref_known(v_pre_1216_, 2);
lean_dec_ref_known(v_fn_1202_, 2);
v___x_1242_ = lean_array_get_size(v_args_1203_);
lean_dec_ref(v_args_1203_);
v___x_1243_ = lean_unsigned_to_nat(0u);
v___x_1244_ = lean_nat_dec_eq(v___x_1242_, v___x_1243_);
if (v___x_1244_ == 0)
{
lean_dec(v_fvarId_1160_);
v_code_1151_ = v_k_1159_;
goto _start;
}
else
{
v___y_1163_ = v_a_1152_;
v___y_1164_ = v_a_1153_;
v___y_1165_ = v_a_1154_;
v___y_1166_ = v_a_1155_;
v___y_1167_ = v_a_1156_;
goto v___jp_1162_;
}
}
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1247_; uint8_t v___x_1248_; 
lean_dec(v_pre_1216_);
lean_dec_ref_known(v_fn_1202_, 2);
v___x_1246_ = lean_array_get_size(v_args_1203_);
lean_dec_ref(v_args_1203_);
v___x_1247_ = lean_unsigned_to_nat(0u);
v___x_1248_ = lean_nat_dec_eq(v___x_1246_, v___x_1247_);
if (v___x_1248_ == 0)
{
lean_dec(v_fvarId_1160_);
v_code_1151_ = v_k_1159_;
goto _start;
}
else
{
v___y_1163_ = v_a_1152_;
v___y_1164_ = v_a_1153_;
v___y_1165_ = v_a_1154_;
v___y_1166_ = v_a_1155_;
v___y_1167_ = v_a_1156_;
goto v___jp_1162_;
}
}
}
else
{
lean_object* v___x_1250_; lean_object* v___x_1251_; uint8_t v___x_1252_; 
lean_dec(v_fn_1202_);
v___x_1250_ = lean_array_get_size(v_args_1203_);
lean_dec_ref(v_args_1203_);
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1252_ = lean_nat_dec_eq(v___x_1250_, v___x_1251_);
if (v___x_1252_ == 0)
{
lean_dec(v_fvarId_1160_);
v_code_1151_ = v_k_1159_;
goto _start;
}
else
{
v___y_1163_ = v_a_1152_;
v___y_1164_ = v_a_1153_;
v___y_1165_ = v_a_1154_;
v___y_1166_ = v_a_1155_;
v___y_1167_ = v_a_1156_;
goto v___jp_1162_;
}
}
v___jp_1204_:
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; 
v___x_1211_ = lean_box(0);
v___x_1212_ = lean_unsigned_to_nat(2u);
v___x_1213_ = lean_array_get(v___x_1211_, v_args_1203_, v___x_1212_);
lean_dec_ref(v_args_1203_);
if (lean_obj_tag(v___x_1213_) == 1)
{
lean_object* v_fvarId_1214_; lean_object* v_parents_1215_; 
v_fvarId_1214_ = lean_ctor_get(v___x_1213_, 0);
lean_inc(v_fvarId_1214_);
lean_dec_ref_known(v___x_1213_, 1);
v_parents_1215_ = lean_array_push(v_parents_1205_, v_fvarId_1214_);
v_parents_1188_ = v_parents_1215_;
v___y_1189_ = v___y_1206_;
v___y_1190_ = v___y_1207_;
v___y_1191_ = v___y_1208_;
v___y_1192_ = v___y_1209_;
v___y_1193_ = v___y_1210_;
goto v___jp_1187_;
}
else
{
lean_dec(v___x_1213_);
v_parents_1188_ = v_parents_1205_;
v___y_1189_ = v___y_1206_;
v___y_1190_ = v___y_1207_;
v___y_1191_ = v___y_1208_;
v___y_1192_ = v___y_1209_;
v___y_1193_ = v___y_1210_;
goto v___jp_1187_;
}
}
}
case 11:
{
lean_object* v_var_1254_; lean_object* v___x_1255_; 
lean_dec(v_fvarId_1160_);
v_var_1254_ = lean_ctor_get(v_value_1161_, 1);
lean_inc(v_var_1254_);
lean_dec_ref_known(v_value_1161_, 2);
v___x_1255_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents(v_var_1254_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
lean_dec(v_var_1254_);
if (lean_obj_tag(v___x_1255_) == 0)
{
lean_dec_ref_known(v___x_1255_, 1);
v_code_1151_ = v_k_1159_;
goto _start;
}
else
{
lean_dec_ref(v_k_1159_);
return v___x_1255_;
}
}
default: 
{
lean_dec(v_value_1161_);
lean_dec(v_fvarId_1160_);
v_code_1151_ = v_k_1159_;
goto _start;
}
}
v___jp_1162_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue___closed__0));
v___x_1169_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v___x_1168_, v_fvarId_1160_, v___y_1163_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_dec_ref_known(v___x_1169_, 1);
v_code_1151_ = v_k_1159_;
v_a_1152_ = v___y_1163_;
v_a_1153_ = v___y_1164_;
v_a_1154_ = v___y_1165_;
v_a_1155_ = v___y_1166_;
v_a_1156_ = v___y_1167_;
goto _start;
}
else
{
lean_dec_ref(v_k_1159_);
return v___x_1169_;
}
}
v___jp_1171_:
{
lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; 
v___x_1178_ = lean_box(0);
v___x_1179_ = lean_unsigned_to_nat(1u);
v___x_1180_ = lean_array_get(v___x_1178_, v_args_1172_, v___x_1179_);
lean_dec_ref(v_args_1172_);
if (lean_obj_tag(v___x_1180_) == 1)
{
lean_object* v_fvarId_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; 
v_fvarId_1181_ = lean_ctor_get(v___x_1180_, 0);
lean_inc(v_fvarId_1181_);
lean_dec_ref_known(v___x_1180_, 1);
v___x_1182_ = lean_mk_empty_array_with_capacity(v___x_1179_);
v___x_1183_ = lean_array_push(v___x_1182_, v_fvarId_1181_);
v___x_1184_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v___x_1183_, v_fvarId_1160_, v___y_1173_, v___y_1174_, v___y_1175_, v___y_1176_, v___y_1177_);
lean_dec_ref(v___x_1183_);
if (lean_obj_tag(v___x_1184_) == 0)
{
lean_dec_ref_known(v___x_1184_, 1);
v_code_1151_ = v_k_1159_;
v_a_1152_ = v___y_1173_;
v_a_1153_ = v___y_1174_;
v_a_1154_ = v___y_1175_;
v_a_1155_ = v___y_1176_;
v_a_1156_ = v___y_1177_;
goto _start;
}
else
{
lean_dec_ref(v_k_1159_);
return v___x_1184_;
}
}
else
{
lean_dec(v___x_1180_);
lean_dec(v_fvarId_1160_);
v_code_1151_ = v_k_1159_;
v_a_1152_ = v___y_1173_;
v_a_1153_ = v___y_1174_;
v_a_1154_ = v___y_1175_;
v_a_1155_ = v___y_1176_;
v_a_1156_ = v___y_1177_;
goto _start;
}
}
v___jp_1187_:
{
lean_object* v___x_1194_; 
v___x_1194_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue(v_parents_1188_, v_fvarId_1160_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_, v___y_1193_);
lean_dec_ref(v_parents_1188_);
if (lean_obj_tag(v___x_1194_) == 0)
{
lean_dec_ref_known(v___x_1194_, 1);
v_code_1151_ = v_k_1159_;
v_a_1152_ = v___y_1189_;
v_a_1153_ = v___y_1190_;
v_a_1154_ = v___y_1191_;
v_a_1155_ = v___y_1192_;
v_a_1156_ = v___y_1193_;
goto _start;
}
else
{
lean_dec_ref(v_k_1159_);
return v___x_1194_;
}
}
}
case 2:
{
lean_object* v_decl_1258_; lean_object* v_k_1259_; lean_object* v_params_1260_; lean_object* v_value_1261_; lean_object* v___y_1266_; lean_object* v___x_1267_; lean_object* v___x_1268_; uint8_t v___x_1269_; 
v_decl_1258_ = lean_ctor_get(v_code_1151_, 0);
lean_inc_ref(v_decl_1258_);
v_k_1259_ = lean_ctor_get(v_code_1151_, 1);
lean_inc_ref(v_k_1259_);
lean_dec_ref_known(v_code_1151_, 2);
v_params_1260_ = lean_ctor_get(v_decl_1258_, 2);
lean_inc_ref(v_params_1260_);
v_value_1261_ = lean_ctor_get(v_decl_1258_, 4);
lean_inc_ref(v_value_1261_);
lean_dec_ref(v_decl_1258_);
v___x_1267_ = lean_unsigned_to_nat(0u);
v___x_1268_ = lean_array_get_size(v_params_1260_);
v___x_1269_ = lean_nat_dec_lt(v___x_1267_, v___x_1268_);
if (v___x_1269_ == 0)
{
lean_dec_ref(v_params_1260_);
goto v___jp_1262_;
}
else
{
lean_object* v___x_1270_; uint8_t v___x_1271_; 
v___x_1270_ = lean_box(0);
v___x_1271_ = lean_nat_dec_le(v___x_1268_, v___x_1268_);
if (v___x_1271_ == 0)
{
if (v___x_1269_ == 0)
{
lean_dec_ref(v_params_1260_);
goto v___jp_1262_;
}
else
{
size_t v___x_1272_; size_t v___x_1273_; lean_object* v___x_1274_; 
v___x_1272_ = ((size_t)0ULL);
v___x_1273_ = lean_usize_of_nat(v___x_1268_);
v___x_1274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_params_1260_, v___x_1272_, v___x_1273_, v___x_1270_, v_a_1152_);
lean_dec_ref(v_params_1260_);
v___y_1266_ = v___x_1274_;
goto v___jp_1265_;
}
}
else
{
size_t v___x_1275_; size_t v___x_1276_; lean_object* v___x_1277_; 
v___x_1275_ = ((size_t)0ULL);
v___x_1276_ = lean_usize_of_nat(v___x_1268_);
v___x_1277_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_params_1260_, v___x_1275_, v___x_1276_, v___x_1270_, v_a_1152_);
lean_dec_ref(v_params_1260_);
v___y_1266_ = v___x_1277_;
goto v___jp_1265_;
}
}
v___jp_1262_:
{
lean_object* v___x_1263_; 
v___x_1263_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_value_1261_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
if (lean_obj_tag(v___x_1263_) == 0)
{
lean_dec_ref_known(v___x_1263_, 1);
v_code_1151_ = v_k_1259_;
goto _start;
}
else
{
lean_dec_ref(v_k_1259_);
return v___x_1263_;
}
}
v___jp_1265_:
{
if (lean_obj_tag(v___y_1266_) == 0)
{
lean_dec_ref_known(v___y_1266_, 1);
goto v___jp_1262_;
}
else
{
lean_dec_ref(v_value_1261_);
lean_dec_ref(v_k_1259_);
return v___y_1266_;
}
}
}
case 3:
{
lean_object* v___x_1278_; lean_object* v___x_1279_; 
lean_dec_ref_known(v_code_1151_, 2);
v___x_1278_ = lean_box(0);
v___x_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1279_, 0, v___x_1278_);
return v___x_1279_;
}
case 4:
{
lean_object* v_cases_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1302_; 
v_cases_1280_ = lean_ctor_get(v_code_1151_, 0);
v_isSharedCheck_1302_ = !lean_is_exclusive(v_code_1151_);
if (v_isSharedCheck_1302_ == 0)
{
v___x_1282_ = v_code_1151_;
v_isShared_1283_ = v_isSharedCheck_1302_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_cases_1280_);
lean_dec(v_code_1151_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1302_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v_alts_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
v_alts_1284_ = lean_ctor_get(v_cases_1280_, 3);
lean_inc_ref(v_alts_1284_);
lean_dec_ref(v_cases_1280_);
v___x_1285_ = lean_unsigned_to_nat(0u);
v___x_1286_ = lean_array_get_size(v_alts_1284_);
v___x_1287_ = lean_box(0);
v___x_1288_ = lean_nat_dec_lt(v___x_1285_, v___x_1286_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1290_; 
lean_dec_ref(v_alts_1284_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1287_);
v___x_1290_ = v___x_1282_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v___x_1287_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
else
{
uint8_t v___x_1292_; 
v___x_1292_ = lean_nat_dec_le(v___x_1286_, v___x_1286_);
if (v___x_1292_ == 0)
{
if (v___x_1288_ == 0)
{
lean_object* v___x_1294_; 
lean_dec_ref(v_alts_1284_);
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1287_);
v___x_1294_ = v___x_1282_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v___x_1287_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
else
{
size_t v___x_1296_; size_t v___x_1297_; lean_object* v___x_1298_; 
lean_del_object(v___x_1282_);
v___x_1296_ = ((size_t)0ULL);
v___x_1297_ = lean_usize_of_nat(v___x_1286_);
v___x_1298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(v_alts_1284_, v___x_1296_, v___x_1297_, v___x_1287_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
lean_dec_ref(v_alts_1284_);
return v___x_1298_;
}
}
else
{
size_t v___x_1299_; size_t v___x_1300_; lean_object* v___x_1301_; 
lean_del_object(v___x_1282_);
v___x_1299_ = ((size_t)0ULL);
v___x_1300_ = lean_usize_of_nat(v___x_1286_);
v___x_1301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(v_alts_1284_, v___x_1299_, v___x_1300_, v___x_1287_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
lean_dec_ref(v_alts_1284_);
return v___x_1301_;
}
}
}
}
case 5:
{
lean_object* v___x_1304_; uint8_t v_isShared_1305_; uint8_t v_isSharedCheck_1310_; 
v_isSharedCheck_1310_ = !lean_is_exclusive(v_code_1151_);
if (v_isSharedCheck_1310_ == 0)
{
lean_object* v_unused_1311_; 
v_unused_1311_ = lean_ctor_get(v_code_1151_, 0);
lean_dec(v_unused_1311_);
v___x_1304_ = v_code_1151_;
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
else
{
lean_dec(v_code_1151_);
v___x_1304_ = lean_box(0);
v_isShared_1305_ = v_isSharedCheck_1310_;
goto v_resetjp_1303_;
}
v_resetjp_1303_:
{
lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1306_ = lean_box(0);
if (v_isShared_1305_ == 0)
{
lean_ctor_set_tag(v___x_1304_, 0);
lean_ctor_set(v___x_1304_, 0, v___x_1306_);
v___x_1308_ = v___x_1304_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1309_; 
v_reuseFailAlloc_1309_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1309_, 0, v___x_1306_);
v___x_1308_ = v_reuseFailAlloc_1309_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
return v___x_1308_;
}
}
}
case 6:
{
lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1319_; 
v_isSharedCheck_1319_ = !lean_is_exclusive(v_code_1151_);
if (v_isSharedCheck_1319_ == 0)
{
lean_object* v_unused_1320_; 
v_unused_1320_ = lean_ctor_get(v_code_1151_, 0);
lean_dec(v_unused_1320_);
v___x_1313_ = v_code_1151_;
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
else
{
lean_dec(v_code_1151_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1319_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v___x_1315_; lean_object* v___x_1317_; 
v___x_1315_ = lean_box(0);
if (v_isShared_1314_ == 0)
{
lean_ctor_set_tag(v___x_1313_, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1315_);
v___x_1317_ = v___x_1313_;
goto v_reusejp_1316_;
}
else
{
lean_object* v_reuseFailAlloc_1318_; 
v_reuseFailAlloc_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1318_, 0, v___x_1315_);
v___x_1317_ = v_reuseFailAlloc_1318_;
goto v_reusejp_1316_;
}
v_reusejp_1316_:
{
return v___x_1317_;
}
}
}
case 8:
{
lean_object* v_k_1321_; 
v_k_1321_ = lean_ctor_get(v_code_1151_, 3);
lean_inc_ref(v_k_1321_);
lean_dec_ref_known(v_code_1151_, 4);
v_code_1151_ = v_k_1321_;
goto _start;
}
case 9:
{
lean_object* v_k_1323_; 
v_k_1323_ = lean_ctor_get(v_code_1151_, 5);
lean_inc_ref(v_k_1323_);
lean_dec_ref_known(v_code_1151_, 6);
v_code_1151_ = v_k_1323_;
goto _start;
}
default: 
{
lean_object* v___x_1325_; lean_object* v___x_1326_; 
lean_dec_ref(v_code_1151_);
v___x_1325_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__7);
v___x_1326_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3(v___x_1325_, v_a_1152_, v_a_1153_, v_a_1154_, v_a_1155_, v_a_1156_);
return v___x_1326_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed(lean_object* v_code_1327_, lean_object* v_a_1328_, lean_object* v_a_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_, lean_object* v_a_1332_, lean_object* v___y_1333_){
_start:
{
lean_object* v_res_1334_; 
v_res_1334_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1327_, v_a_1328_, v_a_1329_, v_a_1330_, v_a_1331_, v_a_1332_);
lean_dec(v_a_1332_);
lean_dec_ref(v_a_1331_);
lean_dec(v_a_1330_);
lean_dec_ref(v_a_1329_);
lean_dec(v_a_1328_);
return v_res_1334_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(lean_object* v_as_1335_, size_t v_i_1336_, size_t v_stop_1337_, lean_object* v_b_1338_, lean_object* v___y_1339_, lean_object* v___y_1340_, lean_object* v___y_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
uint8_t v___x_1345_; 
v___x_1345_ = lean_usize_dec_eq(v_i_1336_, v_stop_1337_);
if (v___x_1345_ == 0)
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
v___x_1346_ = lean_array_uget_borrowed(v_as_1335_, v_i_1336_);
v___x_1347_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___boxed), 7, 0);
lean_inc(v___x_1346_);
v___x_1348_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__0___redArg(v___x_1346_, v___x_1347_, v___y_1339_, v___y_1340_, v___y_1341_, v___y_1342_, v___y_1343_);
if (lean_obj_tag(v___x_1348_) == 0)
{
lean_object* v_a_1349_; size_t v___x_1350_; size_t v___x_1351_; 
v_a_1349_ = lean_ctor_get(v___x_1348_, 0);
lean_inc(v_a_1349_);
lean_dec_ref_known(v___x_1348_, 1);
v___x_1350_ = ((size_t)1ULL);
v___x_1351_ = lean_usize_add(v_i_1336_, v___x_1350_);
v_i_1336_ = v___x_1351_;
v_b_1338_ = v_a_1349_;
goto _start;
}
else
{
return v___x_1348_;
}
}
else
{
lean_object* v___x_1353_; 
v___x_1353_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1353_, 0, v_b_1338_);
return v___x_1353_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2___boxed(lean_object* v_as_1354_, lean_object* v_i_1355_, lean_object* v_stop_1356_, lean_object* v_b_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
size_t v_i_boxed_1364_; size_t v_stop_boxed_1365_; lean_object* v_res_1366_; 
v_i_boxed_1364_ = lean_unbox_usize(v_i_1355_);
lean_dec(v_i_1355_);
v_stop_boxed_1365_ = lean_unbox_usize(v_stop_1356_);
lean_dec(v_stop_1356_);
v_res_1366_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__2(v_as_1354_, v_i_boxed_1364_, v_stop_boxed_1365_, v_b_1357_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1358_);
lean_dec_ref(v_as_1354_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(lean_object* v_as_1367_, size_t v_i_1368_, size_t v_stop_1369_, lean_object* v_b_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_){
_start:
{
lean_object* v___x_1377_; 
v___x_1377_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_as_1367_, v_i_1368_, v_stop_1369_, v_b_1370_, v___y_1371_);
return v___x_1377_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___boxed(lean_object* v_as_1378_, lean_object* v_i_1379_, lean_object* v_stop_1380_, lean_object* v_b_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
size_t v_i_boxed_1388_; size_t v_stop_boxed_1389_; lean_object* v_res_1390_; 
v_i_boxed_1388_ = lean_unbox_usize(v_i_1379_);
lean_dec(v_i_1379_);
v_stop_boxed_1389_ = lean_unbox_usize(v_stop_1380_);
lean_dec(v_stop_1380_);
v_res_1390_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1(v_as_1378_, v_i_boxed_1388_, v_stop_boxed_1389_, v_b_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_);
lean_dec(v___y_1386_);
lean_dec_ref(v___y_1385_);
lean_dec(v___y_1384_);
lean_dec_ref(v___y_1383_);
lean_dec(v___y_1382_);
lean_dec_ref(v_as_1378_);
return v_res_1390_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(lean_object* v_ps_1391_, lean_object* v_code_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_){
_start:
{
lean_object* v___y_1400_; lean_object* v___x_1402_; lean_object* v___x_1403_; uint8_t v___x_1404_; 
v___x_1402_ = lean_unsigned_to_nat(0u);
v___x_1403_ = lean_array_get_size(v_ps_1391_);
v___x_1404_ = lean_nat_dec_lt(v___x_1402_, v___x_1403_);
if (v___x_1404_ == 0)
{
lean_object* v___x_1405_; 
v___x_1405_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
return v___x_1405_;
}
else
{
lean_object* v___x_1406_; uint8_t v___x_1407_; 
v___x_1406_ = lean_box(0);
v___x_1407_ = lean_nat_dec_le(v___x_1403_, v___x_1403_);
if (v___x_1407_ == 0)
{
if (v___x_1404_ == 0)
{
lean_object* v___x_1408_; 
v___x_1408_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
return v___x_1408_;
}
else
{
size_t v___x_1409_; size_t v___x_1410_; lean_object* v___x_1411_; 
v___x_1409_ = ((size_t)0ULL);
v___x_1410_ = lean_usize_of_nat(v___x_1403_);
v___x_1411_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_ps_1391_, v___x_1409_, v___x_1410_, v___x_1406_, v_a_1393_);
v___y_1400_ = v___x_1411_;
goto v___jp_1399_;
}
}
else
{
size_t v___x_1412_; size_t v___x_1413_; lean_object* v___x_1414_; 
v___x_1412_ = ((size_t)0ULL);
v___x_1413_ = lean_usize_of_nat(v___x_1403_);
v___x_1414_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__1___redArg(v_ps_1391_, v___x_1412_, v___x_1413_, v___x_1406_, v_a_1393_);
v___y_1400_ = v___x_1414_;
goto v___jp_1399_;
}
}
v___jp_1399_:
{
if (lean_obj_tag(v___y_1400_) == 0)
{
lean_object* v___x_1401_; 
lean_dec_ref_known(v___y_1400_, 1);
v___x_1401_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode(v_code_1392_, v_a_1393_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
return v___x_1401_;
}
else
{
lean_dec_ref(v_code_1392_);
return v___y_1400_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go___boxed(lean_object* v_ps_1415_, lean_object* v_code_1416_, lean_object* v_a_1417_, lean_object* v_a_1418_, lean_object* v_a_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_, lean_object* v___y_1422_){
_start:
{
lean_object* v_res_1423_; 
v_res_1423_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(v_ps_1415_, v_code_1416_, v_a_1417_, v_a_1418_, v_a_1419_, v_a_1420_, v_a_1421_);
lean_dec(v_a_1421_);
lean_dec_ref(v_a_1420_);
lean_dec(v_a_1419_);
lean_dec_ref(v_a_1418_);
lean_dec(v_a_1417_);
lean_dec_ref(v_ps_1415_);
return v_res_1423_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0(void){
_start:
{
lean_object* v___x_1424_; lean_object* v___x_1425_; 
v___x_1424_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
v___x_1425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1425_, 0, v___x_1424_);
lean_ctor_set(v___x_1425_, 1, v___x_1424_);
return v___x_1425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(lean_object* v_ps_1426_, lean_object* v_code_1427_, lean_object* v_a_1428_, lean_object* v_a_1429_, lean_object* v_a_1430_, lean_object* v_a_1431_){
_start:
{
lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; 
v___x_1433_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___closed__0);
v___x_1434_ = lean_st_mk_ref(v___x_1433_);
v___x_1435_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect_go(v_ps_1426_, v_code_1427_, v___x_1434_, v_a_1428_, v_a_1429_, v_a_1430_, v_a_1431_);
if (lean_obj_tag(v___x_1435_) == 0)
{
lean_object* v___x_1437_; uint8_t v_isShared_1438_; uint8_t v_isSharedCheck_1452_; 
v_isSharedCheck_1452_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1452_ == 0)
{
lean_object* v_unused_1453_; 
v_unused_1453_ = lean_ctor_get(v___x_1435_, 0);
lean_dec(v_unused_1453_);
v___x_1437_ = v___x_1435_;
v_isShared_1438_ = v_isSharedCheck_1452_;
goto v_resetjp_1436_;
}
else
{
lean_dec(v___x_1435_);
v___x_1437_ = lean_box(0);
v_isShared_1438_ = v_isSharedCheck_1452_;
goto v_resetjp_1436_;
}
v_resetjp_1436_:
{
lean_object* v___x_1439_; lean_object* v_varMap_1440_; lean_object* v_borrowedValues_1441_; lean_object* v___x_1443_; uint8_t v_isShared_1444_; uint8_t v_isSharedCheck_1451_; 
v___x_1439_ = lean_st_ref_get(v___x_1434_);
lean_dec(v___x_1434_);
v_varMap_1440_ = lean_ctor_get(v___x_1439_, 0);
v_borrowedValues_1441_ = lean_ctor_get(v___x_1439_, 1);
v_isSharedCheck_1451_ = !lean_is_exclusive(v___x_1439_);
if (v_isSharedCheck_1451_ == 0)
{
v___x_1443_ = v___x_1439_;
v_isShared_1444_ = v_isSharedCheck_1451_;
goto v_resetjp_1442_;
}
else
{
lean_inc(v_borrowedValues_1441_);
lean_inc(v_varMap_1440_);
lean_dec(v___x_1439_);
v___x_1443_ = lean_box(0);
v_isShared_1444_ = v_isSharedCheck_1451_;
goto v_resetjp_1442_;
}
v_resetjp_1442_:
{
lean_object* v___x_1446_; 
if (v_isShared_1444_ == 0)
{
v___x_1446_ = v___x_1443_;
goto v_reusejp_1445_;
}
else
{
lean_object* v_reuseFailAlloc_1450_; 
v_reuseFailAlloc_1450_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1450_, 0, v_varMap_1440_);
lean_ctor_set(v_reuseFailAlloc_1450_, 1, v_borrowedValues_1441_);
v___x_1446_ = v_reuseFailAlloc_1450_;
goto v_reusejp_1445_;
}
v_reusejp_1445_:
{
lean_object* v___x_1448_; 
if (v_isShared_1438_ == 0)
{
lean_ctor_set(v___x_1437_, 0, v___x_1446_);
v___x_1448_ = v___x_1437_;
goto v_reusejp_1447_;
}
else
{
lean_object* v_reuseFailAlloc_1449_; 
v_reuseFailAlloc_1449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1449_, 0, v___x_1446_);
v___x_1448_ = v_reuseFailAlloc_1449_;
goto v_reusejp_1447_;
}
v_reusejp_1447_:
{
return v___x_1448_;
}
}
}
}
}
else
{
lean_object* v_a_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1461_; 
lean_dec(v___x_1434_);
v_a_1454_ = lean_ctor_get(v___x_1435_, 0);
v_isSharedCheck_1461_ = !lean_is_exclusive(v___x_1435_);
if (v_isSharedCheck_1461_ == 0)
{
v___x_1456_ = v___x_1435_;
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_a_1454_);
lean_dec(v___x_1435_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1461_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v___x_1459_; 
if (v_isShared_1457_ == 0)
{
v___x_1459_ = v___x_1456_;
goto v_reusejp_1458_;
}
else
{
lean_object* v_reuseFailAlloc_1460_; 
v_reuseFailAlloc_1460_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1460_, 0, v_a_1454_);
v___x_1459_ = v_reuseFailAlloc_1460_;
goto v_reusejp_1458_;
}
v_reusejp_1458_:
{
return v___x_1459_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect___boxed(lean_object* v_ps_1462_, lean_object* v_code_1463_, lean_object* v_a_1464_, lean_object* v_a_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v___y_1468_){
_start:
{
lean_object* v_res_1469_; 
v_res_1469_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(v_ps_1462_, v_code_1463_, v_a_1464_, v_a_1465_, v_a_1466_, v_a_1467_);
lean_dec(v_a_1467_);
lean_dec_ref(v_a_1466_);
lean_dec(v_a_1465_);
lean_dec_ref(v_a_1464_);
lean_dec_ref(v_ps_1462_);
return v_res_1469_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0(void){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__3);
v___x_1477_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1477_, 0, v___x_1476_);
lean_ctor_set(v___x_1477_, 1, v___x_1476_);
return v___x_1477_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default(void){
_start:
{
lean_object* v___x_1478_; 
v___x_1478_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
return v___x_1478_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_instInhabitedLiveVars(void){
_start:
{
lean_object* v___x_1479_; 
v___x_1479_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
return v___x_1479_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__0(lean_object* v___x_1480_, lean_object* v___x_1481_, lean_object* v_a_1482_, lean_object* v_b_1483_, lean_object* v_acc_1484_){
_start:
{
lean_object* v_r_1485_; lean_object* v___x_1486_; 
v_r_1485_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1480_, v___x_1481_, v_acc_1484_, v_a_1482_, v_b_1483_);
v___x_1486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1486_, 0, v_r_1485_);
return v___x_1486_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___lam__1(lean_object* v___x_1487_, lean_object* v___f_1488_, lean_object* v_a_1489_, lean_object* v_x_1490_, lean_object* v___y_1491_){
_start:
{
lean_object* v___x_1492_; 
v___x_1492_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go(lean_box(0), lean_box(0), lean_box(0), lean_box(0), v___x_1487_, v___f_1488_, v_a_1489_, v___y_1491_);
return v___x_1492_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union(lean_object* v_liveVars1_1501_, lean_object* v_liveVars2_1502_){
_start:
{
lean_object* v_vars_1503_; lean_object* v_borrows_1504_; lean_object* v_vars_1505_; lean_object* v_borrows_1506_; lean_object* v___x_1508_; uint8_t v_isShared_1509_; uint8_t v_isSharedCheck_1541_; 
v_vars_1503_ = lean_ctor_get(v_liveVars1_1501_, 0);
lean_inc_ref(v_vars_1503_);
v_borrows_1504_ = lean_ctor_get(v_liveVars1_1501_, 1);
lean_inc_ref(v_borrows_1504_);
lean_dec_ref(v_liveVars1_1501_);
v_vars_1505_ = lean_ctor_get(v_liveVars2_1502_, 0);
v_borrows_1506_ = lean_ctor_get(v_liveVars2_1502_, 1);
v_isSharedCheck_1541_ = !lean_is_exclusive(v_liveVars2_1502_);
if (v_isSharedCheck_1541_ == 0)
{
v___x_1508_ = v_liveVars2_1502_;
v_isShared_1509_ = v_isSharedCheck_1541_;
goto v_resetjp_1507_;
}
else
{
lean_inc(v_borrows_1506_);
lean_inc(v_vars_1505_);
lean_dec(v_liveVars2_1502_);
v___x_1508_ = lean_box(0);
v_isShared_1509_ = v_isSharedCheck_1541_;
goto v_resetjp_1507_;
}
v_resetjp_1507_:
{
lean_object* v___x_1510_; lean_object* v_size_1511_; lean_object* v_buckets_1512_; lean_object* v_size_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___y_1517_; uint8_t v___x_1534_; 
v___x_1510_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v_size_1511_ = lean_ctor_get(v_vars_1503_, 0);
v_buckets_1512_ = lean_ctor_get(v_vars_1503_, 1);
v_size_1513_ = lean_ctor_get(v_vars_1505_, 0);
v___x_1514_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1515_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1534_ = lean_nat_dec_le(v_size_1511_, v_size_1513_);
if (v___x_1534_ == 0)
{
lean_object* v___f_1535_; lean_object* v___x_1536_; 
v___f_1535_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1));
v___x_1536_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1535_, v___x_1514_, v___x_1515_, v_vars_1503_, v_vars_1505_);
v___y_1517_ = v___x_1536_;
goto v___jp_1516_;
}
else
{
lean_object* v___f_1537_; size_t v_sz_1538_; size_t v___x_1539_; lean_object* v___x_1540_; 
lean_inc_ref(v_buckets_1512_);
lean_dec_ref(v_vars_1503_);
v___f_1537_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2));
v_sz_1538_ = lean_array_size(v_buckets_1512_);
v___x_1539_ = ((size_t)0ULL);
v___x_1540_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1510_, v_buckets_1512_, v___f_1537_, v_sz_1538_, v___x_1539_, v_vars_1505_);
v___y_1517_ = v___x_1540_;
goto v___jp_1516_;
}
v___jp_1516_:
{
lean_object* v_size_1518_; lean_object* v_buckets_1519_; lean_object* v_size_1520_; uint8_t v___x_1521_; 
v_size_1518_ = lean_ctor_get(v_borrows_1504_, 0);
v_buckets_1519_ = lean_ctor_get(v_borrows_1504_, 1);
v_size_1520_ = lean_ctor_get(v_borrows_1506_, 0);
v___x_1521_ = lean_nat_dec_le(v_size_1518_, v_size_1520_);
if (v___x_1521_ == 0)
{
lean_object* v___f_1522_; lean_object* v___x_1523_; lean_object* v___x_1525_; 
v___f_1522_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__1));
v___x_1523_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___redArg(v___f_1522_, v___x_1514_, v___x_1515_, v_borrows_1504_, v_borrows_1506_);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 1, v___x_1523_);
lean_ctor_set(v___x_1508_, 0, v___y_1517_);
v___x_1525_ = v___x_1508_;
goto v_reusejp_1524_;
}
else
{
lean_object* v_reuseFailAlloc_1526_; 
v_reuseFailAlloc_1526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1526_, 0, v___y_1517_);
lean_ctor_set(v_reuseFailAlloc_1526_, 1, v___x_1523_);
v___x_1525_ = v_reuseFailAlloc_1526_;
goto v_reusejp_1524_;
}
v_reusejp_1524_:
{
return v___x_1525_;
}
}
else
{
lean_object* v___f_1527_; size_t v_sz_1528_; size_t v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1532_; 
lean_inc_ref(v_buckets_1519_);
lean_dec_ref(v_borrows_1504_);
v___f_1527_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_union___closed__2));
v_sz_1528_ = lean_array_size(v_buckets_1519_);
v___x_1529_ = ((size_t)0ULL);
v___x_1530_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_1510_, v_buckets_1519_, v___f_1527_, v_sz_1528_, v___x_1529_, v_borrows_1506_);
if (v_isShared_1509_ == 0)
{
lean_ctor_set(v___x_1508_, 1, v___x_1530_);
lean_ctor_set(v___x_1508_, 0, v___y_1517_);
v___x_1532_ = v___x_1508_;
goto v_reusejp_1531_;
}
else
{
lean_object* v_reuseFailAlloc_1533_; 
v_reuseFailAlloc_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1533_, 0, v___y_1517_);
lean_ctor_set(v_reuseFailAlloc_1533_, 1, v___x_1530_);
v___x_1532_ = v_reuseFailAlloc_1533_;
goto v_reusejp_1531_;
}
v_reusejp_1531_:
{
return v___x_1532_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_erase(lean_object* v_liveVars_1542_, lean_object* v_fvarId_1543_){
_start:
{
lean_object* v_vars_1544_; lean_object* v_borrows_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1556_; 
v_vars_1544_ = lean_ctor_get(v_liveVars_1542_, 0);
v_borrows_1545_ = lean_ctor_get(v_liveVars_1542_, 1);
v_isSharedCheck_1556_ = !lean_is_exclusive(v_liveVars_1542_);
if (v_isSharedCheck_1556_ == 0)
{
v___x_1547_ = v_liveVars_1542_;
v_isShared_1548_ = v_isSharedCheck_1556_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_borrows_1545_);
lean_inc(v_vars_1544_);
lean_dec(v_liveVars_1542_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1556_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v_vars_1551_; lean_object* v_borrows_1552_; lean_object* v___x_1554_; 
v___x_1549_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1550_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_1543_);
v_vars_1551_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_1549_, v___x_1550_, v_vars_1544_, v_fvarId_1543_);
v_borrows_1552_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_1549_, v___x_1550_, v_borrows_1545_, v_fvarId_1543_);
if (v_isShared_1548_ == 0)
{
lean_ctor_set(v___x_1547_, 1, v_borrows_1552_);
lean_ctor_set(v___x_1547_, 0, v_vars_1551_);
v___x_1554_ = v___x_1547_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v_vars_1551_);
lean_ctor_set(v_reuseFailAlloc_1555_, 1, v_borrows_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertBorrow(lean_object* v_liveVars_1557_, lean_object* v_fvarId_1558_){
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
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1569_; 
v___x_1564_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1565_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1566_ = lean_box(0);
v___x_1567_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1564_, v___x_1565_, v_borrows_1560_, v_fvarId_1558_, v___x_1566_);
if (v_isShared_1563_ == 0)
{
lean_ctor_set(v___x_1562_, 1, v___x_1567_);
v___x_1569_ = v___x_1562_;
goto v_reusejp_1568_;
}
else
{
lean_object* v_reuseFailAlloc_1570_; 
v_reuseFailAlloc_1570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1570_, 0, v_vars_1559_);
lean_ctor_set(v_reuseFailAlloc_1570_, 1, v___x_1567_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LiveVars_insertLive(lean_object* v_liveVars_1572_, lean_object* v_fvarId_1573_){
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
v___x_1582_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_1579_, v___x_1580_, v_vars_1574_, v_fvarId_1573_, v___x_1581_);
if (v_isShared_1578_ == 0)
{
lean_ctor_set(v___x_1577_, 0, v___x_1582_);
v___x_1584_ = v___x_1577_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v___x_1582_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v_borrows_1575_);
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
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(lean_object* v_fvarId_1587_, lean_object* v_a_1588_){
_start:
{
lean_object* v_varMap_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; 
v_varMap_1590_ = lean_ctor_get(v_a_1588_, 2);
v___x_1591_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_varMap_1590_);
v___x_1592_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1591_, v_varMap_1590_, v_fvarId_1587_);
v___x_1593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1593_, 0, v___x_1592_);
return v___x_1593_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg___boxed(lean_object* v_fvarId_1594_, lean_object* v_a_1595_, lean_object* v___y_1596_){
_start:
{
lean_object* v_res_1597_; 
v_res_1597_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___redArg(v_fvarId_1594_, v_a_1595_);
lean_dec_ref(v_a_1595_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(lean_object* v_fvarId_1598_, lean_object* v_a_1599_, lean_object* v_a_1600_, lean_object* v_a_1601_, lean_object* v_a_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_){
_start:
{
lean_object* v_varMap_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; 
v_varMap_1606_ = lean_ctor_get(v_a_1599_, 2);
v___x_1607_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_varMap_1606_);
v___x_1608_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1607_, v_varMap_1606_, v_fvarId_1598_);
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1608_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo___boxed(lean_object* v_fvarId_1610_, lean_object* v_a_1611_, lean_object* v_a_1612_, lean_object* v_a_1613_, lean_object* v_a_1614_, lean_object* v_a_1615_, lean_object* v_a_1616_, lean_object* v___y_1617_){
_start:
{
lean_object* v_res_1618_; 
v_res_1618_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getVarInfo(v_fvarId_1610_, v_a_1611_, v_a_1612_, v_a_1613_, v_a_1614_, v_a_1615_, v_a_1616_);
lean_dec(v_a_1616_);
lean_dec_ref(v_a_1615_);
lean_dec(v_a_1614_);
lean_dec_ref(v_a_1613_);
lean_dec(v_a_1612_);
lean_dec_ref(v_a_1611_);
return v_res_1618_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(lean_object* v_fvarId_1619_, lean_object* v_a_1620_){
_start:
{
lean_object* v_jpLiveVarMap_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; 
v_jpLiveVarMap_1622_ = lean_ctor_get(v_a_1620_, 3);
v___x_1623_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_jpLiveVarMap_1622_);
v___x_1624_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1623_, v_jpLiveVarMap_1622_, v_fvarId_1619_);
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
return v___x_1625_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg___boxed(lean_object* v_fvarId_1626_, lean_object* v_a_1627_, lean_object* v___y_1628_){
_start:
{
lean_object* v_res_1629_; 
v_res_1629_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___redArg(v_fvarId_1626_, v_a_1627_);
lean_dec_ref(v_a_1627_);
return v_res_1629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(lean_object* v_fvarId_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v_a_1635_, lean_object* v_a_1636_){
_start:
{
lean_object* v_jpLiveVarMap_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; 
v_jpLiveVarMap_1638_ = lean_ctor_get(v_a_1631_, 3);
v___x_1639_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_jpLiveVarMap_1638_);
v___x_1640_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1639_, v_jpLiveVarMap_1638_, v_fvarId_1630_);
v___x_1641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1640_);
return v___x_1641_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars___boxed(lean_object* v_fvarId_1642_, lean_object* v_a_1643_, lean_object* v_a_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v___y_1649_){
_start:
{
lean_object* v_res_1650_; 
v_res_1650_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getJpLiveVars(v_fvarId_1642_, v_a_1643_, v_a_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_);
lean_dec(v_a_1648_);
lean_dec_ref(v_a_1647_);
lean_dec(v_a_1646_);
lean_dec_ref(v_a_1645_);
lean_dec(v_a_1644_);
lean_dec_ref(v_a_1643_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(lean_object* v_fvarId_1651_, lean_object* v_a_1652_){
_start:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v_vars_1657_; uint8_t v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; 
v___x_1654_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1655_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1656_ = lean_st_ref_get(v_a_1652_);
v_vars_1657_ = lean_ctor_get(v___x_1656_, 0);
lean_inc_ref(v_vars_1657_);
lean_dec(v___x_1656_);
v___x_1658_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1654_, v___x_1655_, v_vars_1657_, v_fvarId_1651_);
lean_dec_ref(v_vars_1657_);
v___x_1659_ = lean_box(v___x_1658_);
v___x_1660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1659_);
return v___x_1660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg___boxed(lean_object* v_fvarId_1661_, lean_object* v_a_1662_, lean_object* v___y_1663_){
_start:
{
lean_object* v_res_1664_; 
v_res_1664_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___redArg(v_fvarId_1661_, v_a_1662_);
lean_dec(v_a_1662_);
return v_res_1664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(lean_object* v_fvarId_1665_, lean_object* v_a_1666_, lean_object* v_a_1667_, lean_object* v_a_1668_, lean_object* v_a_1669_, lean_object* v_a_1670_, lean_object* v_a_1671_){
_start:
{
lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v_vars_1676_; uint8_t v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1673_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1674_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1675_ = lean_st_ref_get(v_a_1667_);
v_vars_1676_ = lean_ctor_get(v___x_1675_, 0);
lean_inc_ref(v_vars_1676_);
lean_dec(v___x_1675_);
v___x_1677_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1673_, v___x_1674_, v_vars_1676_, v_fvarId_1665_);
lean_dec_ref(v_vars_1676_);
v___x_1678_ = lean_box(v___x_1677_);
v___x_1679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive___boxed(lean_object* v_fvarId_1680_, lean_object* v_a_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_, lean_object* v___y_1687_){
_start:
{
lean_object* v_res_1688_; 
v_res_1688_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isLive(v_fvarId_1680_, v_a_1681_, v_a_1682_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_);
lean_dec(v_a_1686_);
lean_dec_ref(v_a_1685_);
lean_dec(v_a_1684_);
lean_dec_ref(v_a_1683_);
lean_dec(v_a_1682_);
lean_dec_ref(v_a_1681_);
return v_res_1688_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(lean_object* v_fvarId_1689_, lean_object* v_a_1690_){
_start:
{
lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v_borrows_1695_; uint8_t v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1692_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1693_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1694_ = lean_st_ref_get(v_a_1690_);
v_borrows_1695_ = lean_ctor_get(v___x_1694_, 1);
lean_inc_ref(v_borrows_1695_);
lean_dec(v___x_1694_);
v___x_1696_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1692_, v___x_1693_, v_borrows_1695_, v_fvarId_1689_);
lean_dec_ref(v_borrows_1695_);
v___x_1697_ = lean_box(v___x_1696_);
v___x_1698_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1698_, 0, v___x_1697_);
return v___x_1698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg___boxed(lean_object* v_fvarId_1699_, lean_object* v_a_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___redArg(v_fvarId_1699_, v_a_1700_);
lean_dec(v_a_1700_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(lean_object* v_fvarId_1703_, lean_object* v_a_1704_, lean_object* v_a_1705_, lean_object* v_a_1706_, lean_object* v_a_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_){
_start:
{
lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v_borrows_1714_; uint8_t v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; 
v___x_1711_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_1712_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_1713_ = lean_st_ref_get(v_a_1705_);
v_borrows_1714_ = lean_ctor_get(v___x_1713_, 1);
lean_inc_ref(v_borrows_1714_);
lean_dec(v___x_1713_);
v___x_1715_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_1711_, v___x_1712_, v_borrows_1714_, v_fvarId_1703_);
lean_dec_ref(v_borrows_1714_);
v___x_1716_ = lean_box(v___x_1715_);
v___x_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1717_, 0, v___x_1716_);
return v___x_1717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed___boxed(lean_object* v_fvarId_1718_, lean_object* v_a_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_, lean_object* v___y_1725_){
_start:
{
lean_object* v_res_1726_; 
v_res_1726_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowed(v_fvarId_1718_, v_a_1719_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_, v_a_1724_);
lean_dec(v_a_1724_);
lean_dec_ref(v_a_1723_);
lean_dec(v_a_1722_);
lean_dec_ref(v_a_1721_);
lean_dec(v_a_1720_);
lean_dec_ref(v_a_1719_);
return v_res_1726_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(lean_object* v_f_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___x_1730_ = lean_st_ref_take(v_a_1728_);
v___x_1731_ = lean_box(0);
v___x_1732_ = lean_apply_1(v_f_1727_, v___x_1730_);
v___x_1733_ = lean_st_ref_put(v_a_1728_, v___x_1732_);
v___x_1734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1734_, 0, v___x_1731_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg___boxed(lean_object* v_f_1735_, lean_object* v_a_1736_, lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___redArg(v_f_1735_, v_a_1736_);
lean_dec(v_a_1736_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(lean_object* v_f_1739_, lean_object* v_a_1740_, lean_object* v_a_1741_, lean_object* v_a_1742_, lean_object* v_a_1743_, lean_object* v_a_1744_, lean_object* v_a_1745_){
_start:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; 
v___x_1747_ = lean_st_ref_take(v_a_1741_);
v___x_1748_ = lean_box(0);
v___x_1749_ = lean_apply_1(v_f_1739_, v___x_1747_);
v___x_1750_ = lean_st_ref_put(v_a_1741_, v___x_1749_);
v___x_1751_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1751_, 0, v___x_1748_);
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive___boxed(lean_object* v_f_1752_, lean_object* v_a_1753_, lean_object* v_a_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_, lean_object* v_a_1757_, lean_object* v_a_1758_, lean_object* v___y_1759_){
_start:
{
lean_object* v_res_1760_; 
v_res_1760_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_modifyLive(v_f_1752_, v_a_1753_, v_a_1754_, v_a_1755_, v_a_1756_, v_a_1757_, v_a_1758_);
lean_dec(v_a_1758_);
lean_dec_ref(v_a_1757_);
lean_dec(v_a_1756_);
lean_dec_ref(v_a_1755_);
lean_dec(v_a_1754_);
lean_dec_ref(v_a_1753_);
return v_res_1760_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___lam__0(lean_object* v_x1_1761_, lean_object* v_x2_1762_){
_start:
{
lean_object* v_borrowedValues_1763_; lean_object* v_derivedValMap_1764_; lean_object* v_varMap_1765_; lean_object* v_jpLiveVarMap_1766_; lean_object* v_idx_1767_; lean_object* v___x_1769_; uint8_t v_isShared_1770_; uint8_t v_isSharedCheck_1784_; 
v_borrowedValues_1763_ = lean_ctor_get(v_x1_1761_, 0);
v_derivedValMap_1764_ = lean_ctor_get(v_x1_1761_, 1);
v_varMap_1765_ = lean_ctor_get(v_x1_1761_, 2);
v_jpLiveVarMap_1766_ = lean_ctor_get(v_x1_1761_, 3);
v_idx_1767_ = lean_ctor_get(v_x1_1761_, 4);
v_isSharedCheck_1784_ = !lean_is_exclusive(v_x1_1761_);
if (v_isSharedCheck_1784_ == 0)
{
v___x_1769_ = v_x1_1761_;
v_isShared_1770_ = v_isSharedCheck_1784_;
goto v_resetjp_1768_;
}
else
{
lean_inc(v_idx_1767_);
lean_inc(v_jpLiveVarMap_1766_);
lean_inc(v_varMap_1765_);
lean_inc(v_derivedValMap_1764_);
lean_inc(v_borrowedValues_1763_);
lean_dec(v_x1_1761_);
v___x_1769_ = lean_box(0);
v_isShared_1770_ = v_isSharedCheck_1784_;
goto v_resetjp_1768_;
}
v_resetjp_1768_:
{
lean_object* v_fvarId_1771_; lean_object* v_type_1772_; uint8_t v___x_1773_; uint8_t v___x_1774_; uint8_t v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v_varMap_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1782_; 
v_fvarId_1771_ = lean_ctor_get(v_x2_1762_, 0);
lean_inc(v_fvarId_1771_);
v_type_1772_ = lean_ctor_get(v_x2_1762_, 2);
lean_inc_ref(v_type_1772_);
lean_dec_ref(v_x2_1762_);
v___x_1773_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1772_);
v___x_1774_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1772_);
lean_dec_ref(v_type_1772_);
v___x_1775_ = 0;
v___x_1776_ = lean_box(0);
lean_inc(v_idx_1767_);
v___x_1777_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_1777_, 0, v_idx_1767_);
lean_ctor_set(v___x_1777_, 1, v___x_1776_);
lean_ctor_set_uint8(v___x_1777_, sizeof(void*)*2, v___x_1773_);
lean_ctor_set_uint8(v___x_1777_, sizeof(void*)*2 + 1, v___x_1774_);
lean_ctor_set_uint8(v___x_1777_, sizeof(void*)*2 + 2, v___x_1775_);
v_varMap_1778_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1771_, v___x_1777_, v_varMap_1765_);
v___x_1779_ = lean_unsigned_to_nat(1u);
v___x_1780_ = lean_nat_add(v_idx_1767_, v___x_1779_);
lean_dec(v_idx_1767_);
if (v_isShared_1770_ == 0)
{
lean_ctor_set(v___x_1769_, 4, v___x_1780_);
lean_ctor_set(v___x_1769_, 2, v_varMap_1778_);
v___x_1782_ = v___x_1769_;
goto v_reusejp_1781_;
}
else
{
lean_object* v_reuseFailAlloc_1783_; 
v_reuseFailAlloc_1783_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1783_, 0, v_borrowedValues_1763_);
lean_ctor_set(v_reuseFailAlloc_1783_, 1, v_derivedValMap_1764_);
lean_ctor_set(v_reuseFailAlloc_1783_, 2, v_varMap_1778_);
lean_ctor_set(v_reuseFailAlloc_1783_, 3, v_jpLiveVarMap_1766_);
lean_ctor_set(v_reuseFailAlloc_1783_, 4, v___x_1780_);
v___x_1782_ = v_reuseFailAlloc_1783_;
goto v_reusejp_1781_;
}
v_reusejp_1781_:
{
return v___x_1782_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(lean_object* v_ps_1786_, lean_object* v_x_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v_a_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_){
_start:
{
lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v___x_1797_; uint8_t v___x_1798_; 
v___x_1795_ = lean_unsigned_to_nat(0u);
v___x_1796_ = lean_array_get_size(v_ps_1786_);
v___x_1797_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_1798_ = lean_nat_dec_lt(v___x_1795_, v___x_1796_);
if (v___x_1798_ == 0)
{
lean_object* v___x_1799_; 
lean_dec_ref(v_ps_1786_);
lean_inc(v_a_1793_);
lean_inc_ref(v_a_1792_);
lean_inc(v_a_1791_);
lean_inc_ref(v_a_1790_);
lean_inc(v_a_1789_);
lean_inc_ref(v_a_1788_);
v___x_1799_ = lean_apply_7(v_x_1787_, v_a_1788_, v_a_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_, lean_box(0));
return v___x_1799_;
}
else
{
lean_object* v___f_1800_; uint8_t v___x_1801_; 
v___f_1800_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0));
v___x_1801_ = lean_nat_dec_le(v___x_1796_, v___x_1796_);
if (v___x_1801_ == 0)
{
if (v___x_1798_ == 0)
{
lean_object* v___x_1802_; 
lean_dec_ref(v_ps_1786_);
lean_inc(v_a_1793_);
lean_inc_ref(v_a_1792_);
lean_inc(v_a_1791_);
lean_inc_ref(v_a_1790_);
lean_inc(v_a_1789_);
lean_inc_ref(v_a_1788_);
v___x_1802_ = lean_apply_7(v_x_1787_, v_a_1788_, v_a_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_, lean_box(0));
return v___x_1802_;
}
else
{
size_t v___x_1803_; size_t v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; 
v___x_1803_ = ((size_t)0ULL);
v___x_1804_ = lean_usize_of_nat(v___x_1796_);
lean_inc_ref(v_a_1788_);
v___x_1805_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1797_, v___f_1800_, v_ps_1786_, v___x_1803_, v___x_1804_, v_a_1788_);
lean_inc(v_a_1793_);
lean_inc_ref(v_a_1792_);
lean_inc(v_a_1791_);
lean_inc_ref(v_a_1790_);
lean_inc(v_a_1789_);
v___x_1806_ = lean_apply_7(v_x_1787_, v___x_1805_, v_a_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_, lean_box(0));
return v___x_1806_;
}
}
else
{
size_t v___x_1807_; size_t v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1807_ = ((size_t)0ULL);
v___x_1808_ = lean_usize_of_nat(v___x_1796_);
lean_inc_ref(v_a_1788_);
v___x_1809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1797_, v___f_1800_, v_ps_1786_, v___x_1807_, v___x_1808_, v_a_1788_);
lean_inc(v_a_1793_);
lean_inc_ref(v_a_1792_);
lean_inc(v_a_1791_);
lean_inc_ref(v_a_1790_);
lean_inc(v_a_1789_);
v___x_1810_ = lean_apply_7(v_x_1787_, v___x_1809_, v_a_1789_, v_a_1790_, v_a_1791_, v_a_1792_, v_a_1793_, lean_box(0));
return v___x_1810_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___boxed(lean_object* v_ps_1811_, lean_object* v_x_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_, lean_object* v_a_1818_, lean_object* v___y_1819_){
_start:
{
lean_object* v_res_1820_; 
v_res_1820_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg(v_ps_1811_, v_x_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_, v_a_1817_, v_a_1818_);
lean_dec(v_a_1818_);
lean_dec_ref(v_a_1817_);
lean_dec(v_a_1816_);
lean_dec_ref(v_a_1815_);
lean_dec(v_a_1814_);
lean_dec_ref(v_a_1813_);
return v_res_1820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(lean_object* v_00_u03b1_1821_, lean_object* v_ps_1822_, lean_object* v_x_1823_, lean_object* v_a_1824_, lean_object* v_a_1825_, lean_object* v_a_1826_, lean_object* v_a_1827_, lean_object* v_a_1828_, lean_object* v_a_1829_){
_start:
{
lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; uint8_t v___x_1834_; 
v___x_1831_ = lean_unsigned_to_nat(0u);
v___x_1832_ = lean_array_get_size(v_ps_1822_);
v___x_1833_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_1834_ = lean_nat_dec_lt(v___x_1831_, v___x_1832_);
if (v___x_1834_ == 0)
{
lean_object* v___x_1835_; 
lean_dec_ref(v_ps_1822_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
v___x_1835_ = lean_apply_7(v_x_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1835_;
}
else
{
lean_object* v___f_1836_; uint8_t v___x_1837_; 
v___f_1836_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___redArg___closed__0));
v___x_1837_ = lean_nat_dec_le(v___x_1832_, v___x_1832_);
if (v___x_1837_ == 0)
{
if (v___x_1834_ == 0)
{
lean_object* v___x_1838_; 
lean_dec_ref(v_ps_1822_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
lean_inc_ref(v_a_1824_);
v___x_1838_ = lean_apply_7(v_x_1823_, v_a_1824_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1838_;
}
else
{
size_t v___x_1839_; size_t v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; 
v___x_1839_ = ((size_t)0ULL);
v___x_1840_ = lean_usize_of_nat(v___x_1832_);
lean_inc_ref(v_a_1824_);
v___x_1841_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1833_, v___f_1836_, v_ps_1822_, v___x_1839_, v___x_1840_, v_a_1824_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
v___x_1842_ = lean_apply_7(v_x_1823_, v___x_1841_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1842_;
}
}
else
{
size_t v___x_1843_; size_t v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; 
v___x_1843_ = ((size_t)0ULL);
v___x_1844_ = lean_usize_of_nat(v___x_1832_);
lean_inc_ref(v_a_1824_);
v___x_1845_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1833_, v___f_1836_, v_ps_1822_, v___x_1843_, v___x_1844_, v_a_1824_);
lean_inc(v_a_1829_);
lean_inc_ref(v_a_1828_);
lean_inc(v_a_1827_);
lean_inc_ref(v_a_1826_);
lean_inc(v_a_1825_);
v___x_1846_ = lean_apply_7(v_x_1823_, v___x_1845_, v_a_1825_, v_a_1826_, v_a_1827_, v_a_1828_, v_a_1829_, lean_box(0));
return v___x_1846_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams___boxed(lean_object* v_00_u03b1_1847_, lean_object* v_ps_1848_, lean_object* v_x_1849_, lean_object* v_a_1850_, lean_object* v_a_1851_, lean_object* v_a_1852_, lean_object* v_a_1853_, lean_object* v_a_1854_, lean_object* v_a_1855_, lean_object* v___y_1856_){
_start:
{
lean_object* v_res_1857_; 
v_res_1857_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withParams(v_00_u03b1_1847_, v_ps_1848_, v_x_1849_, v_a_1850_, v_a_1851_, v_a_1852_, v_a_1853_, v_a_1854_, v_a_1855_);
lean_dec(v_a_1855_);
lean_dec_ref(v_a_1854_);
lean_dec(v_a_1853_);
lean_dec_ref(v_a_1852_);
lean_dec(v_a_1851_);
lean_dec_ref(v_a_1850_);
return v_res_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(lean_object* v_decl_1858_, lean_object* v_x_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_){
_start:
{
lean_object* v_fvarId_1867_; lean_object* v_type_1868_; lean_object* v_value_1869_; lean_object* v___y_1871_; 
v_fvarId_1867_ = lean_ctor_get(v_decl_1858_, 0);
lean_inc(v_fvarId_1867_);
v_type_1868_ = lean_ctor_get(v_decl_1858_, 2);
lean_inc_ref(v_type_1868_);
v_value_1869_ = lean_ctor_get(v_decl_1858_, 3);
lean_inc(v_value_1869_);
lean_dec_ref(v_decl_1858_);
if (lean_obj_tag(v_value_1869_) == 5)
{
lean_object* v_i_1886_; lean_object* v___x_1887_; 
v_i_1886_ = lean_ctor_get(v_value_1869_, 0);
lean_inc_ref(v_i_1886_);
v___x_1887_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1887_, 0, v_i_1886_);
v___y_1871_ = v___x_1887_;
goto v___jp_1870_;
}
else
{
lean_object* v___x_1888_; 
v___x_1888_ = lean_box(0);
v___y_1871_ = v___x_1888_;
goto v___jp_1870_;
}
v___jp_1870_:
{
lean_object* v_borrowedValues_1872_; lean_object* v_derivedValMap_1873_; lean_object* v_varMap_1874_; lean_object* v_jpLiveVarMap_1875_; lean_object* v_idx_1876_; uint8_t v___x_1877_; uint8_t v___x_1878_; uint8_t v___x_1879_; lean_object* v_varInfo_1880_; lean_object* v___x_1881_; lean_object* v___x_1882_; lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1885_; 
v_borrowedValues_1872_ = lean_ctor_get(v_a_1860_, 0);
v_derivedValMap_1873_ = lean_ctor_get(v_a_1860_, 1);
v_varMap_1874_ = lean_ctor_get(v_a_1860_, 2);
v_jpLiveVarMap_1875_ = lean_ctor_get(v_a_1860_, 3);
v_idx_1876_ = lean_ctor_get(v_a_1860_, 4);
v___x_1877_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1868_);
v___x_1878_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1868_);
lean_dec_ref(v_type_1868_);
v___x_1879_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_1869_);
lean_dec(v_value_1869_);
lean_inc(v_idx_1876_);
v_varInfo_1880_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_varInfo_1880_, 0, v_idx_1876_);
lean_ctor_set(v_varInfo_1880_, 1, v___y_1871_);
lean_ctor_set_uint8(v_varInfo_1880_, sizeof(void*)*2, v___x_1877_);
lean_ctor_set_uint8(v_varInfo_1880_, sizeof(void*)*2 + 1, v___x_1878_);
lean_ctor_set_uint8(v_varInfo_1880_, sizeof(void*)*2 + 2, v___x_1879_);
lean_inc(v_varMap_1874_);
v___x_1881_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1867_, v_varInfo_1880_, v_varMap_1874_);
v___x_1882_ = lean_unsigned_to_nat(1u);
v___x_1883_ = lean_nat_add(v_idx_1876_, v___x_1882_);
lean_inc(v_jpLiveVarMap_1875_);
lean_inc_ref(v_derivedValMap_1873_);
lean_inc_ref(v_borrowedValues_1872_);
v___x_1884_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1884_, 0, v_borrowedValues_1872_);
lean_ctor_set(v___x_1884_, 1, v_derivedValMap_1873_);
lean_ctor_set(v___x_1884_, 2, v___x_1881_);
lean_ctor_set(v___x_1884_, 3, v_jpLiveVarMap_1875_);
lean_ctor_set(v___x_1884_, 4, v___x_1883_);
lean_inc(v_a_1865_);
lean_inc_ref(v_a_1864_);
lean_inc(v_a_1863_);
lean_inc_ref(v_a_1862_);
lean_inc(v_a_1861_);
v___x_1885_ = lean_apply_7(v_x_1859_, v___x_1884_, v_a_1861_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, lean_box(0));
return v___x_1885_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg___boxed(lean_object* v_decl_1889_, lean_object* v_x_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v___y_1897_){
_start:
{
lean_object* v_res_1898_; 
v_res_1898_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___redArg(v_decl_1889_, v_x_1890_, v_a_1891_, v_a_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_1896_);
lean_dec(v_a_1896_);
lean_dec_ref(v_a_1895_);
lean_dec(v_a_1894_);
lean_dec_ref(v_a_1893_);
lean_dec(v_a_1892_);
lean_dec_ref(v_a_1891_);
return v_res_1898_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(lean_object* v_00_u03b1_1899_, lean_object* v_decl_1900_, lean_object* v_x_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_, lean_object* v_a_1904_, lean_object* v_a_1905_, lean_object* v_a_1906_, lean_object* v_a_1907_){
_start:
{
lean_object* v_fvarId_1909_; lean_object* v_type_1910_; lean_object* v_value_1911_; lean_object* v___y_1913_; 
v_fvarId_1909_ = lean_ctor_get(v_decl_1900_, 0);
lean_inc(v_fvarId_1909_);
v_type_1910_ = lean_ctor_get(v_decl_1900_, 2);
lean_inc_ref(v_type_1910_);
v_value_1911_ = lean_ctor_get(v_decl_1900_, 3);
lean_inc(v_value_1911_);
lean_dec_ref(v_decl_1900_);
if (lean_obj_tag(v_value_1911_) == 5)
{
lean_object* v_i_1928_; lean_object* v___x_1929_; 
v_i_1928_ = lean_ctor_get(v_value_1911_, 0);
lean_inc_ref(v_i_1928_);
v___x_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1929_, 0, v_i_1928_);
v___y_1913_ = v___x_1929_;
goto v___jp_1912_;
}
else
{
lean_object* v___x_1930_; 
v___x_1930_ = lean_box(0);
v___y_1913_ = v___x_1930_;
goto v___jp_1912_;
}
v___jp_1912_:
{
lean_object* v_borrowedValues_1914_; lean_object* v_derivedValMap_1915_; lean_object* v_varMap_1916_; lean_object* v_jpLiveVarMap_1917_; lean_object* v_idx_1918_; uint8_t v___x_1919_; uint8_t v___x_1920_; uint8_t v___x_1921_; lean_object* v_varInfo_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v_borrowedValues_1914_ = lean_ctor_get(v_a_1902_, 0);
v_derivedValMap_1915_ = lean_ctor_get(v_a_1902_, 1);
v_varMap_1916_ = lean_ctor_get(v_a_1902_, 2);
v_jpLiveVarMap_1917_ = lean_ctor_get(v_a_1902_, 3);
v_idx_1918_ = lean_ctor_get(v_a_1902_, 4);
v___x_1919_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_1910_);
v___x_1920_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_1910_);
lean_dec_ref(v_type_1910_);
v___x_1921_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_1911_);
lean_dec(v_value_1911_);
lean_inc(v_idx_1918_);
v_varInfo_1922_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_varInfo_1922_, 0, v_idx_1918_);
lean_ctor_set(v_varInfo_1922_, 1, v___y_1913_);
lean_ctor_set_uint8(v_varInfo_1922_, sizeof(void*)*2, v___x_1919_);
lean_ctor_set_uint8(v_varInfo_1922_, sizeof(void*)*2 + 1, v___x_1920_);
lean_ctor_set_uint8(v_varInfo_1922_, sizeof(void*)*2 + 2, v___x_1921_);
lean_inc(v_varMap_1916_);
v___x_1923_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1909_, v_varInfo_1922_, v_varMap_1916_);
v___x_1924_ = lean_unsigned_to_nat(1u);
v___x_1925_ = lean_nat_add(v_idx_1918_, v___x_1924_);
lean_inc(v_jpLiveVarMap_1917_);
lean_inc_ref(v_derivedValMap_1915_);
lean_inc_ref(v_borrowedValues_1914_);
v___x_1926_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1926_, 0, v_borrowedValues_1914_);
lean_ctor_set(v___x_1926_, 1, v_derivedValMap_1915_);
lean_ctor_set(v___x_1926_, 2, v___x_1923_);
lean_ctor_set(v___x_1926_, 3, v_jpLiveVarMap_1917_);
lean_ctor_set(v___x_1926_, 4, v___x_1925_);
lean_inc(v_a_1907_);
lean_inc_ref(v_a_1906_);
lean_inc(v_a_1905_);
lean_inc_ref(v_a_1904_);
lean_inc(v_a_1903_);
v___x_1927_ = lean_apply_7(v_x_1901_, v___x_1926_, v_a_1903_, v_a_1904_, v_a_1905_, v_a_1906_, v_a_1907_, lean_box(0));
return v___x_1927_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl___boxed(lean_object* v_00_u03b1_1931_, lean_object* v_decl_1932_, lean_object* v_x_1933_, lean_object* v_a_1934_, lean_object* v_a_1935_, lean_object* v_a_1936_, lean_object* v_a_1937_, lean_object* v_a_1938_, lean_object* v_a_1939_, lean_object* v___y_1940_){
_start:
{
lean_object* v_res_1941_; 
v_res_1941_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withLetDecl(v_00_u03b1_1931_, v_decl_1932_, v_x_1933_, v_a_1934_, v_a_1935_, v_a_1936_, v_a_1937_, v_a_1938_, v_a_1939_);
lean_dec(v_a_1939_);
lean_dec_ref(v_a_1938_);
lean_dec(v_a_1937_);
lean_dec_ref(v_a_1936_);
lean_dec(v_a_1935_);
lean_dec_ref(v_a_1934_);
return v_res_1941_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(lean_object* v_discr_1942_, lean_object* v_c_1943_, lean_object* v_x_1944_, lean_object* v_a_1945_, lean_object* v_a_1946_, lean_object* v_a_1947_, lean_object* v_a_1948_, lean_object* v_a_1949_, lean_object* v_a_1950_){
_start:
{
lean_object* v_borrowedValues_1952_; lean_object* v_derivedValMap_1953_; lean_object* v_varMap_1954_; lean_object* v_jpLiveVarMap_1955_; lean_object* v_idx_1956_; lean_object* v___y_1958_; lean_object* v___x_1963_; 
v_borrowedValues_1952_ = lean_ctor_get(v_a_1945_, 0);
v_derivedValMap_1953_ = lean_ctor_get(v_a_1945_, 1);
v_varMap_1954_ = lean_ctor_get(v_a_1945_, 2);
v_jpLiveVarMap_1955_ = lean_ctor_get(v_a_1945_, 3);
v_idx_1956_ = lean_ctor_get(v_a_1945_, 4);
v___x_1963_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_1954_, v_discr_1942_);
if (lean_obj_tag(v___x_1963_) == 0)
{
lean_dec_ref(v_c_1943_);
lean_dec(v_discr_1942_);
lean_inc(v_varMap_1954_);
v___y_1958_ = v_varMap_1954_;
goto v___jp_1957_;
}
else
{
lean_object* v_val_1964_; lean_object* v___x_1966_; uint8_t v_isShared_1967_; uint8_t v_isSharedCheck_1985_; 
v_val_1964_ = lean_ctor_get(v___x_1963_, 0);
v_isSharedCheck_1985_ = !lean_is_exclusive(v___x_1963_);
if (v_isSharedCheck_1985_ == 0)
{
v___x_1966_ = v___x_1963_;
v_isShared_1967_ = v_isSharedCheck_1985_;
goto v_resetjp_1965_;
}
else
{
lean_inc(v_val_1964_);
lean_dec(v___x_1963_);
v___x_1966_ = lean_box(0);
v_isShared_1967_ = v_isSharedCheck_1985_;
goto v_resetjp_1965_;
}
v_resetjp_1965_:
{
uint8_t v_persistent_1968_; lean_object* v___x_1970_; uint8_t v_isShared_1971_; uint8_t v_isSharedCheck_1982_; 
v_persistent_1968_ = lean_ctor_get_uint8(v_val_1964_, sizeof(void*)*2 + 2);
v_isSharedCheck_1982_ = !lean_is_exclusive(v_val_1964_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; lean_object* v_unused_1984_; 
v_unused_1983_ = lean_ctor_get(v_val_1964_, 1);
lean_dec(v_unused_1983_);
v_unused_1984_ = lean_ctor_get(v_val_1964_, 0);
lean_dec(v_unused_1984_);
v___x_1970_ = v_val_1964_;
v_isShared_1971_ = v_isSharedCheck_1982_;
goto v_resetjp_1969_;
}
else
{
lean_dec(v_val_1964_);
v___x_1970_ = lean_box(0);
v_isShared_1971_ = v_isSharedCheck_1982_;
goto v_resetjp_1969_;
}
v_resetjp_1969_:
{
uint8_t v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1976_; 
v___x_1972_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_c_1943_);
v___x_1973_ = lean_unsigned_to_nat(1u);
v___x_1974_ = lean_nat_add(v_idx_1956_, v___x_1973_);
if (v_isShared_1967_ == 0)
{
lean_ctor_set(v___x_1966_, 0, v_c_1943_);
v___x_1976_ = v___x_1966_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_c_1943_);
v___x_1976_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
lean_object* v___x_1978_; 
if (v_isShared_1971_ == 0)
{
lean_ctor_set(v___x_1970_, 1, v___x_1976_);
lean_ctor_set(v___x_1970_, 0, v___x_1974_);
v___x_1978_ = v___x_1970_;
goto v_reusejp_1977_;
}
else
{
lean_object* v_reuseFailAlloc_1980_; 
v_reuseFailAlloc_1980_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_1980_, 0, v___x_1974_);
lean_ctor_set(v_reuseFailAlloc_1980_, 1, v___x_1976_);
lean_ctor_set_uint8(v_reuseFailAlloc_1980_, sizeof(void*)*2 + 2, v_persistent_1968_);
v___x_1978_ = v_reuseFailAlloc_1980_;
goto v_reusejp_1977_;
}
v_reusejp_1977_:
{
lean_object* v___x_1979_; 
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*2, v___x_1972_);
lean_ctor_set_uint8(v___x_1978_, sizeof(void*)*2 + 1, v___x_1972_);
lean_inc(v_varMap_1954_);
v___x_1979_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_1942_, v___x_1978_, v_varMap_1954_);
v___y_1958_ = v___x_1979_;
goto v___jp_1957_;
}
}
}
}
}
v___jp_1957_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; 
v___x_1959_ = lean_unsigned_to_nat(1u);
v___x_1960_ = lean_nat_add(v_idx_1956_, v___x_1959_);
lean_inc(v_jpLiveVarMap_1955_);
lean_inc_ref(v_derivedValMap_1953_);
lean_inc_ref(v_borrowedValues_1952_);
v___x_1961_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1961_, 0, v_borrowedValues_1952_);
lean_ctor_set(v___x_1961_, 1, v_derivedValMap_1953_);
lean_ctor_set(v___x_1961_, 2, v___y_1958_);
lean_ctor_set(v___x_1961_, 3, v_jpLiveVarMap_1955_);
lean_ctor_set(v___x_1961_, 4, v___x_1960_);
lean_inc(v_a_1950_);
lean_inc_ref(v_a_1949_);
lean_inc(v_a_1948_);
lean_inc_ref(v_a_1947_);
lean_inc(v_a_1946_);
v___x_1962_ = lean_apply_7(v_x_1944_, v___x_1961_, v_a_1946_, v_a_1947_, v_a_1948_, v_a_1949_, v_a_1950_, lean_box(0));
return v___x_1962_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg___boxed(lean_object* v_discr_1986_, lean_object* v_c_1987_, lean_object* v_x_1988_, lean_object* v_a_1989_, lean_object* v_a_1990_, lean_object* v_a_1991_, lean_object* v_a_1992_, lean_object* v_a_1993_, lean_object* v_a_1994_, lean_object* v___y_1995_){
_start:
{
lean_object* v_res_1996_; 
v_res_1996_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___redArg(v_discr_1986_, v_c_1987_, v_x_1988_, v_a_1989_, v_a_1990_, v_a_1991_, v_a_1992_, v_a_1993_, v_a_1994_);
lean_dec(v_a_1994_);
lean_dec_ref(v_a_1993_);
lean_dec(v_a_1992_);
lean_dec_ref(v_a_1991_);
lean_dec(v_a_1990_);
lean_dec_ref(v_a_1989_);
return v_res_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(lean_object* v_00_u03b1_1997_, lean_object* v_discr_1998_, lean_object* v_c_1999_, lean_object* v_x_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_, lean_object* v_a_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
lean_object* v_borrowedValues_2008_; lean_object* v_derivedValMap_2009_; lean_object* v_varMap_2010_; lean_object* v_jpLiveVarMap_2011_; lean_object* v_idx_2012_; lean_object* v___y_2014_; lean_object* v___x_2019_; 
v_borrowedValues_2008_ = lean_ctor_get(v_a_2001_, 0);
v_derivedValMap_2009_ = lean_ctor_get(v_a_2001_, 1);
v_varMap_2010_ = lean_ctor_get(v_a_2001_, 2);
v_jpLiveVarMap_2011_ = lean_ctor_get(v_a_2001_, 3);
v_idx_2012_ = lean_ctor_get(v_a_2001_, 4);
v___x_2019_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_2010_, v_discr_1998_);
if (lean_obj_tag(v___x_2019_) == 0)
{
lean_dec_ref(v_c_1999_);
lean_dec(v_discr_1998_);
lean_inc(v_varMap_2010_);
v___y_2014_ = v_varMap_2010_;
goto v___jp_2013_;
}
else
{
lean_object* v_val_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2041_; 
v_val_2020_ = lean_ctor_get(v___x_2019_, 0);
v_isSharedCheck_2041_ = !lean_is_exclusive(v___x_2019_);
if (v_isSharedCheck_2041_ == 0)
{
v___x_2022_ = v___x_2019_;
v_isShared_2023_ = v_isSharedCheck_2041_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_val_2020_);
lean_dec(v___x_2019_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2041_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
uint8_t v_persistent_2024_; lean_object* v___x_2026_; uint8_t v_isShared_2027_; uint8_t v_isSharedCheck_2038_; 
v_persistent_2024_ = lean_ctor_get_uint8(v_val_2020_, sizeof(void*)*2 + 2);
v_isSharedCheck_2038_ = !lean_is_exclusive(v_val_2020_);
if (v_isSharedCheck_2038_ == 0)
{
lean_object* v_unused_2039_; lean_object* v_unused_2040_; 
v_unused_2039_ = lean_ctor_get(v_val_2020_, 1);
lean_dec(v_unused_2039_);
v_unused_2040_ = lean_ctor_get(v_val_2020_, 0);
lean_dec(v_unused_2040_);
v___x_2026_ = v_val_2020_;
v_isShared_2027_ = v_isSharedCheck_2038_;
goto v_resetjp_2025_;
}
else
{
lean_dec(v_val_2020_);
v___x_2026_ = lean_box(0);
v_isShared_2027_ = v_isSharedCheck_2038_;
goto v_resetjp_2025_;
}
v_resetjp_2025_:
{
uint8_t v___x_2028_; lean_object* v___x_2029_; lean_object* v___x_2030_; lean_object* v___x_2032_; 
v___x_2028_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_c_1999_);
v___x_2029_ = lean_unsigned_to_nat(1u);
v___x_2030_ = lean_nat_add(v_idx_2012_, v___x_2029_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 0, v_c_1999_);
v___x_2032_ = v___x_2022_;
goto v_reusejp_2031_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_c_1999_);
v___x_2032_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2031_;
}
v_reusejp_2031_:
{
lean_object* v___x_2034_; 
if (v_isShared_2027_ == 0)
{
lean_ctor_set(v___x_2026_, 1, v___x_2032_);
lean_ctor_set(v___x_2026_, 0, v___x_2030_);
v___x_2034_ = v___x_2026_;
goto v_reusejp_2033_;
}
else
{
lean_object* v_reuseFailAlloc_2036_; 
v_reuseFailAlloc_2036_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_2036_, 0, v___x_2030_);
lean_ctor_set(v_reuseFailAlloc_2036_, 1, v___x_2032_);
lean_ctor_set_uint8(v_reuseFailAlloc_2036_, sizeof(void*)*2 + 2, v_persistent_2024_);
v___x_2034_ = v_reuseFailAlloc_2036_;
goto v_reusejp_2033_;
}
v_reusejp_2033_:
{
lean_object* v___x_2035_; 
lean_ctor_set_uint8(v___x_2034_, sizeof(void*)*2, v___x_2028_);
lean_ctor_set_uint8(v___x_2034_, sizeof(void*)*2 + 1, v___x_2028_);
lean_inc(v_varMap_2010_);
v___x_2035_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_1998_, v___x_2034_, v_varMap_2010_);
v___y_2014_ = v___x_2035_;
goto v___jp_2013_;
}
}
}
}
}
v___jp_2013_:
{
lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2015_ = lean_unsigned_to_nat(1u);
v___x_2016_ = lean_nat_add(v_idx_2012_, v___x_2015_);
lean_inc(v_jpLiveVarMap_2011_);
lean_inc_ref(v_derivedValMap_2009_);
lean_inc_ref(v_borrowedValues_2008_);
v___x_2017_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2017_, 0, v_borrowedValues_2008_);
lean_ctor_set(v___x_2017_, 1, v_derivedValMap_2009_);
lean_ctor_set(v___x_2017_, 2, v___y_2014_);
lean_ctor_set(v___x_2017_, 3, v_jpLiveVarMap_2011_);
lean_ctor_set(v___x_2017_, 4, v___x_2016_);
lean_inc(v_a_2006_);
lean_inc_ref(v_a_2005_);
lean_inc(v_a_2004_);
lean_inc_ref(v_a_2003_);
lean_inc(v_a_2002_);
v___x_2018_ = lean_apply_7(v_x_2000_, v___x_2017_, v_a_2002_, v_a_2003_, v_a_2004_, v_a_2005_, v_a_2006_, lean_box(0));
return v___x_2018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt___boxed(lean_object* v_00_u03b1_2042_, lean_object* v_discr_2043_, lean_object* v_c_2044_, lean_object* v_x_2045_, lean_object* v_a_2046_, lean_object* v_a_2047_, lean_object* v_a_2048_, lean_object* v_a_2049_, lean_object* v_a_2050_, lean_object* v_a_2051_, lean_object* v___y_2052_){
_start:
{
lean_object* v_res_2053_; 
v_res_2053_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCtorAlt(v_00_u03b1_2042_, v_discr_2043_, v_c_2044_, v_x_2045_, v_a_2046_, v_a_2047_, v_a_2048_, v_a_2049_, v_a_2050_, v_a_2051_);
lean_dec(v_a_2051_);
lean_dec_ref(v_a_2050_);
lean_dec(v_a_2049_);
lean_dec_ref(v_a_2048_);
lean_dec(v_a_2047_);
lean_dec_ref(v_a_2046_);
return v_res_2053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(lean_object* v_x_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_, lean_object* v_a_2057_, lean_object* v_a_2058_, lean_object* v_a_2059_, lean_object* v_a_2060_){
_start:
{
lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v___x_2062_ = lean_st_ref_get(v_a_2056_);
v___x_2063_ = lean_st_ref_take(v_a_2056_);
lean_dec(v___x_2063_);
v___x_2064_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_2065_ = lean_st_ref_put(v_a_2056_, v___x_2064_);
lean_inc(v_a_2060_);
lean_inc_ref(v_a_2059_);
lean_inc(v_a_2058_);
lean_inc_ref(v_a_2057_);
lean_inc(v_a_2056_);
lean_inc_ref(v_a_2055_);
v___x_2066_ = lean_apply_7(v_x_2054_, v_a_2055_, v_a_2056_, v_a_2057_, v_a_2058_, v_a_2059_, v_a_2060_, lean_box(0));
if (lean_obj_tag(v___x_2066_) == 0)
{
lean_object* v_a_2067_; lean_object* v___x_2069_; uint8_t v_isShared_2070_; uint8_t v_isSharedCheck_2078_; 
v_a_2067_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2069_ = v___x_2066_;
v_isShared_2070_ = v_isSharedCheck_2078_;
goto v_resetjp_2068_;
}
else
{
lean_inc(v_a_2067_);
lean_dec(v___x_2066_);
v___x_2069_ = lean_box(0);
v_isShared_2070_ = v_isSharedCheck_2078_;
goto v_resetjp_2068_;
}
v_resetjp_2068_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2076_; 
v___x_2071_ = lean_st_ref_get(v_a_2056_);
v___x_2072_ = lean_st_ref_take(v_a_2056_);
lean_dec(v___x_2072_);
v___x_2073_ = lean_st_ref_put(v_a_2056_, v___x_2062_);
v___x_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2074_, 0, v_a_2067_);
lean_ctor_set(v___x_2074_, 1, v___x_2071_);
if (v_isShared_2070_ == 0)
{
lean_ctor_set(v___x_2069_, 0, v___x_2074_);
v___x_2076_ = v___x_2069_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v___x_2074_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
lean_dec(v___x_2062_);
v_a_2079_ = lean_ctor_get(v___x_2066_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2066_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_2066_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2066_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg___boxed(lean_object* v_x_2087_, lean_object* v_a_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v___y_2094_){
_start:
{
lean_object* v_res_2095_; 
v_res_2095_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___redArg(v_x_2087_, v_a_2088_, v_a_2089_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
lean_dec(v_a_2093_);
lean_dec_ref(v_a_2092_);
lean_dec(v_a_2091_);
lean_dec_ref(v_a_2090_);
lean_dec(v_a_2089_);
lean_dec_ref(v_a_2088_);
return v_res_2095_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(lean_object* v_00_u03b1_2096_, lean_object* v_x_2097_, lean_object* v_a_2098_, lean_object* v_a_2099_, lean_object* v_a_2100_, lean_object* v_a_2101_, lean_object* v_a_2102_, lean_object* v_a_2103_){
_start:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; 
v___x_2105_ = lean_st_ref_get(v_a_2099_);
v___x_2106_ = lean_st_ref_take(v_a_2099_);
lean_dec(v___x_2106_);
v___x_2107_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_2108_ = lean_st_ref_put(v_a_2099_, v___x_2107_);
lean_inc(v_a_2103_);
lean_inc_ref(v_a_2102_);
lean_inc(v_a_2101_);
lean_inc_ref(v_a_2100_);
lean_inc(v_a_2099_);
lean_inc_ref(v_a_2098_);
v___x_2109_ = lean_apply_7(v_x_2097_, v_a_2098_, v_a_2099_, v_a_2100_, v_a_2101_, v_a_2102_, v_a_2103_, lean_box(0));
if (lean_obj_tag(v___x_2109_) == 0)
{
lean_object* v_a_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2121_; 
v_a_2110_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2121_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2121_ == 0)
{
v___x_2112_ = v___x_2109_;
v_isShared_2113_ = v_isSharedCheck_2121_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_a_2110_);
lean_dec(v___x_2109_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2121_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2114_; lean_object* v___x_2115_; lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2119_; 
v___x_2114_ = lean_st_ref_get(v_a_2099_);
v___x_2115_ = lean_st_ref_take(v_a_2099_);
lean_dec(v___x_2115_);
v___x_2116_ = lean_st_ref_put(v_a_2099_, v___x_2105_);
v___x_2117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2117_, 0, v_a_2110_);
lean_ctor_set(v___x_2117_, 1, v___x_2114_);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 0, v___x_2117_);
v___x_2119_ = v___x_2112_;
goto v_reusejp_2118_;
}
else
{
lean_object* v_reuseFailAlloc_2120_; 
v_reuseFailAlloc_2120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2120_, 0, v___x_2117_);
v___x_2119_ = v_reuseFailAlloc_2120_;
goto v_reusejp_2118_;
}
v_reusejp_2118_:
{
return v___x_2119_;
}
}
}
else
{
lean_object* v_a_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2129_; 
lean_dec(v___x_2105_);
v_a_2122_ = lean_ctor_get(v___x_2109_, 0);
v_isSharedCheck_2129_ = !lean_is_exclusive(v___x_2109_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2124_ = v___x_2109_;
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_a_2122_);
lean_dec(v___x_2109_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2129_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2127_; 
if (v_isShared_2125_ == 0)
{
v___x_2127_ = v___x_2124_;
goto v_reusejp_2126_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v_a_2122_);
v___x_2127_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2126_;
}
v_reusejp_2126_:
{
return v___x_2127_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars___boxed(lean_object* v_00_u03b1_2130_, lean_object* v_x_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_, lean_object* v_a_2134_, lean_object* v_a_2135_, lean_object* v_a_2136_, lean_object* v_a_2137_, lean_object* v___y_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_withCollectLiveVars(v_00_u03b1_2130_, v_x_2131_, v_a_2132_, v_a_2133_, v_a_2134_, v_a_2135_, v_a_2136_, v_a_2137_);
lean_dec(v_a_2137_);
lean_dec_ref(v_a_2136_);
lean_dec(v_a_2135_);
lean_dec_ref(v_a_2134_);
lean_dec(v_a_2133_);
lean_dec_ref(v_a_2132_);
return v_res_2139_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(lean_object* v_liveVars_2140_, uint8_t v___x_2141_, lean_object* v___x_2142_, lean_object* v___x_2143_, lean_object* v_v_2144_){
_start:
{
uint8_t v___y_2146_; lean_object* v_vars_2148_; lean_object* v_borrows_2149_; uint8_t v___x_2150_; 
v_vars_2148_ = lean_ctor_get(v_liveVars_2140_, 0);
v_borrows_2149_ = lean_ctor_get(v_liveVars_2140_, 1);
lean_inc(v_v_2144_);
lean_inc_ref(v___x_2143_);
lean_inc_ref(v___x_2142_);
v___x_2150_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2142_, v___x_2143_, v_vars_2148_, v_v_2144_);
if (v___x_2150_ == 0)
{
uint8_t v___x_2151_; 
v___x_2151_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2142_, v___x_2143_, v_borrows_2149_, v_v_2144_);
v___y_2146_ = v___x_2151_;
goto v___jp_2145_;
}
else
{
lean_dec(v_v_2144_);
lean_dec_ref(v___x_2143_);
lean_dec_ref(v___x_2142_);
v___y_2146_ = v___x_2150_;
goto v___jp_2145_;
}
v___jp_2145_:
{
if (v___y_2146_ == 0)
{
return v___x_2141_;
}
else
{
uint8_t v___x_2147_; 
v___x_2147_ = 0;
return v___x_2147_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed(lean_object* v_liveVars_2152_, lean_object* v___x_2153_, lean_object* v___x_2154_, lean_object* v___x_2155_, lean_object* v_v_2156_){
_start:
{
uint8_t v___x_343__boxed_2157_; uint8_t v_res_2158_; lean_object* v_r_2159_; 
v___x_343__boxed_2157_ = lean_unbox(v___x_2153_);
v_res_2158_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0(v_liveVars_2152_, v___x_343__boxed_2157_, v___x_2154_, v___x_2155_, v_v_2156_);
lean_dec_ref(v_liveVars_2152_);
v_r_2159_ = lean_box(v_res_2158_);
return v_r_2159_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(lean_object* v___x_2160_, lean_object* v___x_2161_, lean_object* v___x_2162_, lean_object* v_derivedValMap_2163_, lean_object* v_shouldAdd_2164_, lean_object* v_liveVars_2165_, lean_object* v_child_2166_){
_start:
{
lean_object* v_cinfo_2183_; lean_object* v_parents_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; uint8_t v___x_2188_; 
lean_inc(v_child_2166_);
lean_inc_ref(v___x_2161_);
lean_inc_ref(v___x_2160_);
v_cinfo_2183_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___redArg(v___x_2160_, v___x_2161_, v___x_2162_, v_derivedValMap_2163_, v_child_2166_);
v_parents_2184_ = lean_ctor_get(v_cinfo_2183_, 0);
lean_inc_ref(v_parents_2184_);
lean_dec(v_cinfo_2183_);
v___x_2185_ = lean_unsigned_to_nat(0u);
v___x_2186_ = lean_array_get_size(v_parents_2184_);
v___x_2187_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__13));
v___x_2188_ = lean_nat_dec_lt(v___x_2185_, v___x_2186_);
if (v___x_2188_ == 0)
{
lean_dec_ref(v_parents_2184_);
goto v___jp_2167_;
}
else
{
if (v___x_2188_ == 0)
{
lean_dec_ref(v_parents_2184_);
goto v___jp_2167_;
}
else
{
lean_object* v___x_2189_; lean_object* v___f_2190_; size_t v___x_2191_; size_t v___x_2192_; lean_object* v___x_2193_; uint8_t v___x_2194_; 
v___x_2189_ = lean_box(v___x_2188_);
lean_inc_ref(v___x_2161_);
lean_inc_ref(v___x_2160_);
lean_inc_ref(v_liveVars_2165_);
v___f_2190_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2190_, 0, v_liveVars_2165_);
lean_closure_set(v___f_2190_, 1, v___x_2189_);
lean_closure_set(v___f_2190_, 2, v___x_2160_);
lean_closure_set(v___f_2190_, 3, v___x_2161_);
v___x_2191_ = ((size_t)0ULL);
v___x_2192_ = lean_usize_of_nat(v___x_2186_);
v___x_2193_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v___x_2187_, v___f_2190_, v_parents_2184_, v___x_2191_, v___x_2192_);
v___x_2194_ = lean_unbox(v___x_2193_);
lean_dec(v___x_2193_);
if (v___x_2194_ == 0)
{
goto v___jp_2167_;
}
else
{
lean_object* v___x_2195_; 
lean_dec_ref(v___x_2161_);
lean_dec_ref(v___x_2160_);
v___x_2195_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_child_2166_, v_derivedValMap_2163_, v_liveVars_2165_, v_shouldAdd_2164_);
return v___x_2195_;
}
}
}
v___jp_2167_:
{
lean_object* v___x_2168_; uint8_t v___x_2169_; 
lean_inc_ref(v_shouldAdd_2164_);
lean_inc(v_child_2166_);
v___x_2168_ = lean_apply_1(v_shouldAdd_2164_, v_child_2166_);
v___x_2169_ = lean_unbox(v___x_2168_);
if (v___x_2169_ == 0)
{
lean_object* v___x_2170_; 
lean_dec_ref(v___x_2161_);
lean_dec_ref(v___x_2160_);
v___x_2170_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_child_2166_, v_derivedValMap_2163_, v_liveVars_2165_, v_shouldAdd_2164_);
return v___x_2170_;
}
else
{
lean_object* v_vars_2171_; lean_object* v_borrows_2172_; lean_object* v___x_2174_; uint8_t v_isShared_2175_; uint8_t v_isSharedCheck_2182_; 
v_vars_2171_ = lean_ctor_get(v_liveVars_2165_, 0);
v_borrows_2172_ = lean_ctor_get(v_liveVars_2165_, 1);
v_isSharedCheck_2182_ = !lean_is_exclusive(v_liveVars_2165_);
if (v_isSharedCheck_2182_ == 0)
{
v___x_2174_ = v_liveVars_2165_;
v_isShared_2175_ = v_isSharedCheck_2182_;
goto v_resetjp_2173_;
}
else
{
lean_inc(v_borrows_2172_);
lean_inc(v_vars_2171_);
lean_dec(v_liveVars_2165_);
v___x_2174_ = lean_box(0);
v_isShared_2175_ = v_isSharedCheck_2182_;
goto v_resetjp_2173_;
}
v_resetjp_2173_:
{
lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2179_; 
v___x_2176_ = lean_box(0);
lean_inc(v_child_2166_);
v___x_2177_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2160_, v___x_2161_, v_borrows_2172_, v_child_2166_, v___x_2176_);
if (v_isShared_2175_ == 0)
{
lean_ctor_set(v___x_2174_, 1, v___x_2177_);
v___x_2179_ = v___x_2174_;
goto v_reusejp_2178_;
}
else
{
lean_object* v_reuseFailAlloc_2181_; 
v_reuseFailAlloc_2181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2181_, 0, v_vars_2171_);
lean_ctor_set(v_reuseFailAlloc_2181_, 1, v___x_2177_);
v___x_2179_ = v_reuseFailAlloc_2181_;
goto v_reusejp_2178_;
}
v_reusejp_2178_:
{
lean_object* v___x_2180_; 
v___x_2180_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_child_2166_, v_derivedValMap_2163_, v___x_2179_, v_shouldAdd_2164_);
return v___x_2180_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed(lean_object* v___x_2196_, lean_object* v___x_2197_, lean_object* v___x_2198_, lean_object* v_derivedValMap_2199_, lean_object* v_shouldAdd_2200_, lean_object* v_liveVars_2201_, lean_object* v_child_2202_){
_start:
{
lean_object* v_res_2203_; 
v_res_2203_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1(v___x_2196_, v___x_2197_, v___x_2198_, v_derivedValMap_2199_, v_shouldAdd_2200_, v_liveVars_2201_, v_child_2202_);
lean_dec_ref(v___x_2198_);
return v_res_2203_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(lean_object* v_fvarId_2204_, lean_object* v_derivedValMap_2205_, lean_object* v_liveVars_2206_, lean_object* v_shouldAdd_2207_){
_start:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2209_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_2210_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_2208_, v___x_2209_, v_derivedValMap_2205_, v_fvarId_2204_);
if (lean_obj_tag(v___x_2210_) == 1)
{
lean_object* v_val_2211_; lean_object* v_children_2212_; lean_object* v___x_2213_; lean_object* v___f_2214_; lean_object* v___x_2215_; 
v_val_2211_ = lean_ctor_get(v___x_2210_, 0);
lean_inc(v_val_2211_);
lean_dec_ref_known(v___x_2210_, 1);
v_children_2212_ = lean_ctor_get(v_val_2211_, 1);
lean_inc_ref(v_children_2212_);
lean_dec(v_val_2211_);
v___x_2213_ = l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
v___f_2214_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___lam__1___boxed), 7, 5);
lean_closure_set(v___f_2214_, 0, v___x_2208_);
lean_closure_set(v___f_2214_, 1, v___x_2209_);
lean_closure_set(v___f_2214_, 2, v___x_2213_);
lean_closure_set(v___f_2214_, 3, v_derivedValMap_2205_);
lean_closure_set(v___f_2214_, 4, v_shouldAdd_2207_);
v___x_2215_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_2214_, v_liveVars_2206_, v_children_2212_);
lean_dec_ref(v_children_2212_);
return v___x_2215_;
}
else
{
lean_dec(v___x_2210_);
lean_dec_ref(v_shouldAdd_2207_);
lean_dec_ref(v_derivedValMap_2205_);
return v_liveVars_2206_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(lean_object* v_val_2216_, lean_object* v___x_2217_, lean_object* v___x_2218_, lean_object* v_shouldBorrow_2219_, uint8_t v___x_2220_, lean_object* v_y_2221_){
_start:
{
lean_object* v_vars_2222_; uint8_t v___x_2223_; 
v_vars_2222_ = lean_ctor_get(v_val_2216_, 0);
lean_inc(v_y_2221_);
v___x_2223_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2217_, v___x_2218_, v_vars_2222_, v_y_2221_);
if (v___x_2223_ == 0)
{
lean_object* v___x_2224_; uint8_t v___x_2225_; 
v___x_2224_ = lean_apply_1(v_shouldBorrow_2219_, v_y_2221_);
v___x_2225_ = lean_unbox(v___x_2224_);
return v___x_2225_;
}
else
{
lean_dec(v_y_2221_);
lean_dec_ref(v_shouldBorrow_2219_);
return v___x_2220_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed(lean_object* v_val_2226_, lean_object* v___x_2227_, lean_object* v___x_2228_, lean_object* v_shouldBorrow_2229_, lean_object* v___x_2230_, lean_object* v_y_2231_){
_start:
{
uint8_t v___x_1973__boxed_2232_; uint8_t v_res_2233_; lean_object* v_r_2234_; 
v___x_1973__boxed_2232_ = lean_unbox(v___x_2230_);
v_res_2233_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0(v_val_2226_, v___x_2227_, v___x_2228_, v_shouldBorrow_2229_, v___x_1973__boxed_2232_, v_y_2231_);
lean_dec_ref(v_val_2226_);
v_r_2234_ = lean_box(v_res_2233_);
return v_r_2234_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(lean_object* v_fvarId_2235_, lean_object* v_shouldBorrow_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_){
_start:
{
lean_object* v___x_2240_; lean_object* v___x_2241_; lean_object* v___x_2242_; lean_object* v_vars_2243_; uint8_t v___x_2244_; 
v___x_2240_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2241_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
v___x_2242_ = lean_st_ref_get(v_a_2238_);
v_vars_2243_ = lean_ctor_get(v___x_2242_, 0);
lean_inc_ref(v_vars_2243_);
lean_dec(v___x_2242_);
lean_inc(v_fvarId_2235_);
v___x_2244_ = l_Std_DHashMap_Internal_Raw_u2080_contains___redArg(v___x_2240_, v___x_2241_, v_vars_2243_, v_fvarId_2235_);
lean_dec_ref(v_vars_2243_);
if (v___x_2244_ == 0)
{
lean_object* v_derivedValMap_2245_; lean_object* v___x_2246_; lean_object* v_vars_2247_; lean_object* v_borrows_2248_; lean_object* v___x_2250_; uint8_t v_isShared_2251_; uint8_t v_isSharedCheck_2264_; 
v_derivedValMap_2245_ = lean_ctor_get(v_a_2237_, 1);
v___x_2246_ = lean_st_ref_take(v_a_2238_);
v_vars_2247_ = lean_ctor_get(v___x_2246_, 0);
v_borrows_2248_ = lean_ctor_get(v___x_2246_, 1);
v_isSharedCheck_2264_ = !lean_is_exclusive(v___x_2246_);
if (v_isSharedCheck_2264_ == 0)
{
v___x_2250_ = v___x_2246_;
v_isShared_2251_ = v_isSharedCheck_2264_;
goto v_resetjp_2249_;
}
else
{
lean_inc(v_borrows_2248_);
lean_inc(v_vars_2247_);
lean_dec(v___x_2246_);
v___x_2250_ = lean_box(0);
v_isShared_2251_ = v_isSharedCheck_2264_;
goto v_resetjp_2249_;
}
v_resetjp_2249_:
{
lean_object* v___x_2252_; lean_object* v___x_2253_; lean_object* v___x_2255_; 
v___x_2252_ = lean_box(0);
lean_inc(v_fvarId_2235_);
v___x_2253_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2240_, v___x_2241_, v_vars_2247_, v_fvarId_2235_, v___x_2252_);
if (v_isShared_2251_ == 0)
{
lean_ctor_set(v___x_2250_, 0, v___x_2253_);
v___x_2255_ = v___x_2250_;
goto v_reusejp_2254_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v___x_2253_);
lean_ctor_set(v_reuseFailAlloc_2263_, 1, v_borrows_2248_);
v___x_2255_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2254_;
}
v_reusejp_2254_:
{
lean_object* v___x_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___f_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; 
v___x_2256_ = lean_st_ref_put(v_a_2238_, v___x_2255_);
v___x_2257_ = lean_st_ref_take(v_a_2238_);
v___x_2258_ = lean_box(v___x_2244_);
lean_inc(v___x_2257_);
v___f_2259_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2259_, 0, v___x_2257_);
lean_closure_set(v___f_2259_, 1, v___x_2240_);
lean_closure_set(v___f_2259_, 2, v___x_2241_);
lean_closure_set(v___f_2259_, 3, v_shouldBorrow_2236_);
lean_closure_set(v___f_2259_, 4, v___x_2258_);
lean_inc_ref(v_derivedValMap_2245_);
v___x_2260_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_fvarId_2235_, v_derivedValMap_2245_, v___x_2257_, v___f_2259_);
v___x_2261_ = lean_st_ref_put(v_a_2238_, v___x_2260_);
v___x_2262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2262_, 0, v___x_2252_);
return v___x_2262_;
}
}
}
else
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_dec_ref(v_shouldBorrow_2236_);
lean_dec(v_fvarId_2235_);
v___x_2265_ = lean_box(0);
v___x_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
return v___x_2266_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg___boxed(lean_object* v_fvarId_2267_, lean_object* v_shouldBorrow_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v___y_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(v_fvarId_2267_, v_shouldBorrow_2268_, v_a_2269_, v_a_2270_);
lean_dec(v_a_2270_);
lean_dec_ref(v_a_2269_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(lean_object* v_fvarId_2273_, lean_object* v_shouldBorrow_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_a_2277_, lean_object* v_a_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_){
_start:
{
lean_object* v___x_2282_; 
v___x_2282_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___redArg(v_fvarId_2273_, v_shouldBorrow_2274_, v_a_2275_, v_a_2276_);
return v___x_2282_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___boxed(lean_object* v_fvarId_2283_, lean_object* v_shouldBorrow_2284_, lean_object* v_a_2285_, lean_object* v_a_2286_, lean_object* v_a_2287_, lean_object* v_a_2288_, lean_object* v_a_2289_, lean_object* v_a_2290_, lean_object* v___y_2291_){
_start:
{
lean_object* v_res_2292_; 
v_res_2292_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar(v_fvarId_2283_, v_shouldBorrow_2284_, v_a_2285_, v_a_2286_, v_a_2287_, v_a_2288_, v_a_2289_, v_a_2290_);
lean_dec(v_a_2290_);
lean_dec_ref(v_a_2289_);
lean_dec(v_a_2288_);
lean_dec_ref(v_a_2287_);
lean_dec(v_a_2286_);
lean_dec_ref(v_a_2285_);
return v_res_2292_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(lean_object* v_m_2293_, lean_object* v_a_2294_, lean_object* v_b_2295_){
_start:
{
lean_object* v_size_2296_; lean_object* v_buckets_2297_; lean_object* v___x_2298_; uint64_t v___x_2299_; uint64_t v___x_2300_; uint64_t v___x_2301_; uint64_t v_fold_2302_; uint64_t v___x_2303_; uint64_t v___x_2304_; uint64_t v___x_2305_; size_t v___x_2306_; size_t v___x_2307_; size_t v___x_2308_; size_t v___x_2309_; size_t v___x_2310_; lean_object* v_bkt_2311_; uint8_t v___x_2312_; 
v_size_2296_ = lean_ctor_get(v_m_2293_, 0);
v_buckets_2297_ = lean_ctor_get(v_m_2293_, 1);
v___x_2298_ = lean_array_get_size(v_buckets_2297_);
v___x_2299_ = l_Lean_instHashableFVarId_hash(v_a_2294_);
v___x_2300_ = 32ULL;
v___x_2301_ = lean_uint64_shift_right(v___x_2299_, v___x_2300_);
v_fold_2302_ = lean_uint64_xor(v___x_2299_, v___x_2301_);
v___x_2303_ = 16ULL;
v___x_2304_ = lean_uint64_shift_right(v_fold_2302_, v___x_2303_);
v___x_2305_ = lean_uint64_xor(v_fold_2302_, v___x_2304_);
v___x_2306_ = lean_uint64_to_usize(v___x_2305_);
v___x_2307_ = lean_usize_of_nat(v___x_2298_);
v___x_2308_ = ((size_t)1ULL);
v___x_2309_ = lean_usize_sub(v___x_2307_, v___x_2308_);
v___x_2310_ = lean_usize_land(v___x_2306_, v___x_2309_);
v_bkt_2311_ = lean_array_uget_borrowed(v_buckets_2297_, v___x_2310_);
v___x_2312_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_2294_, v_bkt_2311_);
if (v___x_2312_ == 0)
{
lean_object* v___x_2314_; uint8_t v_isShared_2315_; uint8_t v_isSharedCheck_2333_; 
lean_inc_ref(v_buckets_2297_);
lean_inc(v_size_2296_);
v_isSharedCheck_2333_ = !lean_is_exclusive(v_m_2293_);
if (v_isSharedCheck_2333_ == 0)
{
lean_object* v_unused_2334_; lean_object* v_unused_2335_; 
v_unused_2334_ = lean_ctor_get(v_m_2293_, 1);
lean_dec(v_unused_2334_);
v_unused_2335_ = lean_ctor_get(v_m_2293_, 0);
lean_dec(v_unused_2335_);
v___x_2314_ = v_m_2293_;
v_isShared_2315_ = v_isSharedCheck_2333_;
goto v_resetjp_2313_;
}
else
{
lean_dec(v_m_2293_);
v___x_2314_ = lean_box(0);
v_isShared_2315_ = v_isSharedCheck_2333_;
goto v_resetjp_2313_;
}
v_resetjp_2313_:
{
lean_object* v___x_2316_; lean_object* v_size_x27_2317_; lean_object* v___x_2318_; lean_object* v_buckets_x27_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; lean_object* v___x_2322_; lean_object* v___x_2323_; lean_object* v___x_2324_; uint8_t v___x_2325_; 
v___x_2316_ = lean_unsigned_to_nat(1u);
v_size_x27_2317_ = lean_nat_add(v_size_2296_, v___x_2316_);
lean_dec(v_size_2296_);
lean_inc(v_bkt_2311_);
v___x_2318_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2318_, 0, v_a_2294_);
lean_ctor_set(v___x_2318_, 1, v_b_2295_);
lean_ctor_set(v___x_2318_, 2, v_bkt_2311_);
v_buckets_x27_2319_ = lean_array_uset(v_buckets_2297_, v___x_2310_, v___x_2318_);
v___x_2320_ = lean_unsigned_to_nat(4u);
v___x_2321_ = lean_nat_mul(v_size_x27_2317_, v___x_2320_);
v___x_2322_ = lean_unsigned_to_nat(3u);
v___x_2323_ = lean_nat_div(v___x_2321_, v___x_2322_);
lean_dec(v___x_2321_);
v___x_2324_ = lean_array_get_size(v_buckets_x27_2319_);
v___x_2325_ = lean_nat_dec_le(v___x_2323_, v___x_2324_);
lean_dec(v___x_2323_);
if (v___x_2325_ == 0)
{
lean_object* v_val_2326_; lean_object* v___x_2328_; 
v_val_2326_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1_spec__3___redArg(v_buckets_x27_2319_);
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 1, v_val_2326_);
lean_ctor_set(v___x_2314_, 0, v_size_x27_2317_);
v___x_2328_ = v___x_2314_;
goto v_reusejp_2327_;
}
else
{
lean_object* v_reuseFailAlloc_2329_; 
v_reuseFailAlloc_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2329_, 0, v_size_x27_2317_);
lean_ctor_set(v_reuseFailAlloc_2329_, 1, v_val_2326_);
v___x_2328_ = v_reuseFailAlloc_2329_;
goto v_reusejp_2327_;
}
v_reusejp_2327_:
{
return v___x_2328_;
}
}
else
{
lean_object* v___x_2331_; 
if (v_isShared_2315_ == 0)
{
lean_ctor_set(v___x_2314_, 1, v_buckets_x27_2319_);
lean_ctor_set(v___x_2314_, 0, v_size_x27_2317_);
v___x_2331_ = v___x_2314_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v_size_x27_2317_);
lean_ctor_set(v_reuseFailAlloc_2332_, 1, v_buckets_x27_2319_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
}
else
{
lean_dec(v_b_2295_);
lean_dec(v_a_2294_);
return v_m_2293_;
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(lean_object* v_m_2336_, lean_object* v_a_2337_){
_start:
{
lean_object* v_buckets_2338_; lean_object* v___x_2339_; uint64_t v___x_2340_; uint64_t v___x_2341_; uint64_t v___x_2342_; uint64_t v_fold_2343_; uint64_t v___x_2344_; uint64_t v___x_2345_; uint64_t v___x_2346_; size_t v___x_2347_; size_t v___x_2348_; size_t v___x_2349_; size_t v___x_2350_; size_t v___x_2351_; lean_object* v___x_2352_; uint8_t v___x_2353_; 
v_buckets_2338_ = lean_ctor_get(v_m_2336_, 1);
v___x_2339_ = lean_array_get_size(v_buckets_2338_);
v___x_2340_ = l_Lean_instHashableFVarId_hash(v_a_2337_);
v___x_2341_ = 32ULL;
v___x_2342_ = lean_uint64_shift_right(v___x_2340_, v___x_2341_);
v_fold_2343_ = lean_uint64_xor(v___x_2340_, v___x_2342_);
v___x_2344_ = 16ULL;
v___x_2345_ = lean_uint64_shift_right(v_fold_2343_, v___x_2344_);
v___x_2346_ = lean_uint64_xor(v_fold_2343_, v___x_2345_);
v___x_2347_ = lean_uint64_to_usize(v___x_2346_);
v___x_2348_ = lean_usize_of_nat(v___x_2339_);
v___x_2349_ = ((size_t)1ULL);
v___x_2350_ = lean_usize_sub(v___x_2348_, v___x_2349_);
v___x_2351_ = lean_usize_land(v___x_2347_, v___x_2350_);
v___x_2352_ = lean_array_uget_borrowed(v_buckets_2338_, v___x_2351_);
v___x_2353_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_2337_, v___x_2352_);
return v___x_2353_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg___boxed(lean_object* v_m_2354_, lean_object* v_a_2355_){
_start:
{
uint8_t v_res_2356_; lean_object* v_r_2357_; 
v_res_2356_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_m_2354_, v_a_2355_);
lean_dec(v_a_2355_);
lean_dec_ref(v_m_2354_);
v_r_2357_ = lean_box(v_res_2356_);
return v_r_2357_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(lean_object* v_y_2358_, lean_object* v_as_2359_, size_t v_i_2360_, size_t v_stop_2361_){
_start:
{
uint8_t v___x_2366_; 
v___x_2366_ = lean_usize_dec_eq(v_i_2360_, v_stop_2361_);
if (v___x_2366_ == 0)
{
lean_object* v___x_2367_; 
v___x_2367_ = lean_array_uget_borrowed(v_as_2359_, v_i_2360_);
if (lean_obj_tag(v___x_2367_) == 0)
{
goto v___jp_2362_;
}
else
{
lean_object* v_fvarId_2368_; uint8_t v___x_2369_; 
v_fvarId_2368_ = lean_ctor_get(v___x_2367_, 0);
v___x_2369_ = l_Lean_instBEqFVarId_beq(v_y_2358_, v_fvarId_2368_);
if (v___x_2369_ == 0)
{
goto v___jp_2362_;
}
else
{
return v___x_2369_;
}
}
}
else
{
uint8_t v___x_2370_; 
v___x_2370_ = 0;
return v___x_2370_;
}
v___jp_2362_:
{
size_t v___x_2363_; size_t v___x_2364_; 
v___x_2363_ = ((size_t)1ULL);
v___x_2364_ = lean_usize_add(v_i_2360_, v___x_2363_);
v_i_2360_ = v___x_2364_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0___boxed(lean_object* v_y_2371_, lean_object* v_as_2372_, lean_object* v_i_2373_, lean_object* v_stop_2374_){
_start:
{
size_t v_i_boxed_2375_; size_t v_stop_boxed_2376_; uint8_t v_res_2377_; lean_object* v_r_2378_; 
v_i_boxed_2375_ = lean_unbox_usize(v_i_2373_);
lean_dec(v_i_2373_);
v_stop_boxed_2376_ = lean_unbox_usize(v_stop_2374_);
lean_dec(v_stop_2374_);
v_res_2377_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(v_y_2371_, v_as_2372_, v_i_boxed_2375_, v_stop_boxed_2376_);
lean_dec_ref(v_as_2372_);
lean_dec(v_y_2371_);
v_r_2378_ = lean_box(v_res_2377_);
return v_r_2378_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(lean_object* v_liveVars_2379_, lean_object* v_as_2380_, size_t v_i_2381_, size_t v_stop_2382_){
_start:
{
uint8_t v___x_2383_; 
v___x_2383_ = lean_usize_dec_eq(v_i_2381_, v_stop_2382_);
if (v___x_2383_ == 0)
{
lean_object* v_vars_2384_; lean_object* v_borrows_2385_; uint8_t v___x_2386_; uint8_t v___y_2388_; lean_object* v___x_2392_; uint8_t v___x_2393_; 
v_vars_2384_ = lean_ctor_get(v_liveVars_2379_, 0);
v_borrows_2385_ = lean_ctor_get(v_liveVars_2379_, 1);
v___x_2386_ = 1;
v___x_2392_ = lean_array_uget_borrowed(v_as_2380_, v_i_2381_);
v___x_2393_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2384_, v___x_2392_);
if (v___x_2393_ == 0)
{
uint8_t v___x_2394_; 
v___x_2394_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_2385_, v___x_2392_);
v___y_2388_ = v___x_2394_;
goto v___jp_2387_;
}
else
{
v___y_2388_ = v___x_2393_;
goto v___jp_2387_;
}
v___jp_2387_:
{
if (v___y_2388_ == 0)
{
return v___x_2386_;
}
else
{
size_t v___x_2389_; size_t v___x_2390_; 
v___x_2389_ = ((size_t)1ULL);
v___x_2390_ = lean_usize_add(v_i_2381_, v___x_2389_);
v_i_2381_ = v___x_2390_;
goto _start;
}
}
}
else
{
uint8_t v___x_2395_; 
v___x_2395_ = 0;
return v___x_2395_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5___boxed(lean_object* v_liveVars_2396_, lean_object* v_as_2397_, lean_object* v_i_2398_, lean_object* v_stop_2399_){
_start:
{
size_t v_i_boxed_2400_; size_t v_stop_boxed_2401_; uint8_t v_res_2402_; lean_object* v_r_2403_; 
v_i_boxed_2400_ = lean_unbox_usize(v_i_2398_);
lean_dec(v_i_2398_);
v_stop_boxed_2401_ = lean_unbox_usize(v_stop_2399_);
lean_dec(v_stop_2399_);
v_res_2402_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_2396_, v_as_2397_, v_i_boxed_2400_, v_stop_boxed_2401_);
lean_dec_ref(v_as_2397_);
lean_dec_ref(v_liveVars_2396_);
v_r_2403_ = lean_box(v_res_2402_);
return v_r_2403_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6_spec__7(lean_object* v_msg_2404_){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = l_Lean_Compiler_LCNF_instInhabitedDerivedValInfo_default;
v___x_2406_ = lean_panic_fn_borrowed(v___x_2405_, v_msg_2404_);
return v___x_2406_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3(void){
_start:
{
lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; 
v___x_2410_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__2));
v___x_2411_ = lean_unsigned_to_nat(11u);
v___x_2412_ = lean_unsigned_to_nat(163u);
v___x_2413_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__1));
v___x_2414_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__0));
v___x_2415_ = l_mkPanicMessageWithDecl(v___x_2414_, v___x_2413_, v___x_2412_, v___x_2411_, v___x_2410_);
return v___x_2415_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6(lean_object* v_a_2416_, lean_object* v_x_2417_){
_start:
{
if (lean_obj_tag(v_x_2417_) == 0)
{
lean_object* v___x_2418_; lean_object* v___x_2419_; 
v___x_2418_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___closed__3);
v___x_2419_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6_spec__7(v___x_2418_);
return v___x_2419_;
}
else
{
lean_object* v_key_2420_; lean_object* v_value_2421_; lean_object* v_tail_2422_; uint8_t v___x_2423_; 
v_key_2420_ = lean_ctor_get(v_x_2417_, 0);
v_value_2421_ = lean_ctor_get(v_x_2417_, 1);
v_tail_2422_ = lean_ctor_get(v_x_2417_, 2);
v___x_2423_ = l_Lean_instBEqFVarId_beq(v_key_2420_, v_a_2416_);
if (v___x_2423_ == 0)
{
v_x_2417_ = v_tail_2422_;
goto _start;
}
else
{
lean_inc(v_value_2421_);
return v_value_2421_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6___boxed(lean_object* v_a_2425_, lean_object* v_x_2426_){
_start:
{
lean_object* v_res_2427_; 
v_res_2427_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6(v_a_2425_, v_x_2426_);
lean_dec(v_x_2426_);
lean_dec(v_a_2425_);
return v_res_2427_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(lean_object* v_m_2428_, lean_object* v_a_2429_){
_start:
{
lean_object* v_buckets_2430_; lean_object* v___x_2431_; uint64_t v___x_2432_; uint64_t v___x_2433_; uint64_t v___x_2434_; uint64_t v_fold_2435_; uint64_t v___x_2436_; uint64_t v___x_2437_; uint64_t v___x_2438_; size_t v___x_2439_; size_t v___x_2440_; size_t v___x_2441_; size_t v___x_2442_; size_t v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
v_buckets_2430_ = lean_ctor_get(v_m_2428_, 1);
v___x_2431_ = lean_array_get_size(v_buckets_2430_);
v___x_2432_ = l_Lean_instHashableFVarId_hash(v_a_2429_);
v___x_2433_ = 32ULL;
v___x_2434_ = lean_uint64_shift_right(v___x_2432_, v___x_2433_);
v_fold_2435_ = lean_uint64_xor(v___x_2432_, v___x_2434_);
v___x_2436_ = 16ULL;
v___x_2437_ = lean_uint64_shift_right(v_fold_2435_, v___x_2436_);
v___x_2438_ = lean_uint64_xor(v_fold_2435_, v___x_2437_);
v___x_2439_ = lean_uint64_to_usize(v___x_2438_);
v___x_2440_ = lean_usize_of_nat(v___x_2431_);
v___x_2441_ = ((size_t)1ULL);
v___x_2442_ = lean_usize_sub(v___x_2440_, v___x_2441_);
v___x_2443_ = lean_usize_land(v___x_2439_, v___x_2442_);
v___x_2444_ = lean_array_uget_borrowed(v_buckets_2430_, v___x_2443_);
v___x_2445_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4_spec__6(v_a_2429_, v___x_2444_);
return v___x_2445_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4___boxed(lean_object* v_m_2446_, lean_object* v_a_2447_){
_start:
{
lean_object* v_res_2448_; 
v_res_2448_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_m_2446_, v_a_2447_);
lean_dec(v_a_2447_);
lean_dec_ref(v_m_2446_);
return v_res_2448_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0(lean_object* v_derivedValMap_2449_, lean_object* v___x_2450_, lean_object* v_args_2451_, uint8_t v___x_2452_, lean_object* v_liveVars_2453_, lean_object* v_child_2454_){
_start:
{
uint8_t v___y_2469_; lean_object* v_cinfo_2480_; lean_object* v_parents_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; uint8_t v___x_2484_; 
v_cinfo_2480_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_derivedValMap_2449_, v_child_2454_);
v_parents_2481_ = lean_ctor_get(v_cinfo_2480_, 0);
lean_inc_ref(v_parents_2481_);
lean_dec_ref(v_cinfo_2480_);
v___x_2482_ = lean_unsigned_to_nat(0u);
v___x_2483_ = lean_array_get_size(v_parents_2481_);
v___x_2484_ = lean_nat_dec_lt(v___x_2482_, v___x_2483_);
if (v___x_2484_ == 0)
{
lean_dec_ref(v_parents_2481_);
goto v___jp_2471_;
}
else
{
if (v___x_2484_ == 0)
{
lean_dec_ref(v_parents_2481_);
goto v___jp_2471_;
}
else
{
size_t v___x_2485_; size_t v___x_2486_; uint8_t v___x_2487_; 
v___x_2485_ = ((size_t)0ULL);
v___x_2486_ = lean_usize_of_nat(v___x_2483_);
v___x_2487_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_2453_, v_parents_2481_, v___x_2485_, v___x_2486_);
lean_dec_ref(v_parents_2481_);
if (v___x_2487_ == 0)
{
goto v___jp_2471_;
}
else
{
lean_object* v___x_2488_; 
v___x_2488_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2450_, v_args_2451_, v___x_2452_, v_child_2454_, v_derivedValMap_2449_, v_liveVars_2453_);
lean_dec(v_child_2454_);
return v___x_2488_;
}
}
}
v___jp_2455_:
{
lean_object* v_vars_2456_; lean_object* v_borrows_2457_; lean_object* v___x_2459_; uint8_t v_isShared_2460_; uint8_t v_isSharedCheck_2467_; 
v_vars_2456_ = lean_ctor_get(v_liveVars_2453_, 0);
v_borrows_2457_ = lean_ctor_get(v_liveVars_2453_, 1);
v_isSharedCheck_2467_ = !lean_is_exclusive(v_liveVars_2453_);
if (v_isSharedCheck_2467_ == 0)
{
v___x_2459_ = v_liveVars_2453_;
v_isShared_2460_ = v_isSharedCheck_2467_;
goto v_resetjp_2458_;
}
else
{
lean_inc(v_borrows_2457_);
lean_inc(v_vars_2456_);
lean_dec(v_liveVars_2453_);
v___x_2459_ = lean_box(0);
v_isShared_2460_ = v_isSharedCheck_2467_;
goto v_resetjp_2458_;
}
v_resetjp_2458_:
{
lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2464_; 
v___x_2461_ = lean_box(0);
lean_inc(v_child_2454_);
v___x_2462_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_2457_, v_child_2454_, v___x_2461_);
if (v_isShared_2460_ == 0)
{
lean_ctor_set(v___x_2459_, 1, v___x_2462_);
v___x_2464_ = v___x_2459_;
goto v_reusejp_2463_;
}
else
{
lean_object* v_reuseFailAlloc_2466_; 
v_reuseFailAlloc_2466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2466_, 0, v_vars_2456_);
lean_ctor_set(v_reuseFailAlloc_2466_, 1, v___x_2462_);
v___x_2464_ = v_reuseFailAlloc_2466_;
goto v_reusejp_2463_;
}
v_reusejp_2463_:
{
lean_object* v___x_2465_; 
v___x_2465_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2450_, v_args_2451_, v___x_2452_, v_child_2454_, v_derivedValMap_2449_, v___x_2464_);
lean_dec(v_child_2454_);
return v___x_2465_;
}
}
}
v___jp_2468_:
{
if (v___y_2469_ == 0)
{
lean_object* v___x_2470_; 
v___x_2470_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2450_, v_args_2451_, v___x_2452_, v_child_2454_, v_derivedValMap_2449_, v_liveVars_2453_);
lean_dec(v_child_2454_);
return v___x_2470_;
}
else
{
goto v___jp_2455_;
}
}
v___jp_2471_:
{
lean_object* v_vars_2472_; uint8_t v___x_2473_; 
v_vars_2472_ = lean_ctor_get(v___x_2450_, 0);
v___x_2473_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2472_, v_child_2454_);
if (v___x_2473_ == 0)
{
lean_object* v___x_2474_; lean_object* v___x_2475_; uint8_t v___x_2476_; 
v___x_2474_ = lean_unsigned_to_nat(0u);
v___x_2475_ = lean_array_get_size(v_args_2451_);
v___x_2476_ = lean_nat_dec_lt(v___x_2474_, v___x_2475_);
if (v___x_2476_ == 0)
{
goto v___jp_2455_;
}
else
{
if (v___x_2476_ == 0)
{
goto v___jp_2455_;
}
else
{
size_t v___x_2477_; size_t v___x_2478_; uint8_t v___x_2479_; 
v___x_2477_ = ((size_t)0ULL);
v___x_2478_ = lean_usize_of_nat(v___x_2475_);
v___x_2479_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__0(v_child_2454_, v_args_2451_, v___x_2477_, v___x_2478_);
if (v___x_2479_ == 0)
{
goto v___jp_2455_;
}
else
{
v___y_2469_ = v___x_2473_;
goto v___jp_2468_;
}
}
}
}
else
{
v___y_2469_ = v___x_2452_;
goto v___jp_2468_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0___boxed(lean_object* v_derivedValMap_2489_, lean_object* v___x_2490_, lean_object* v_args_2491_, lean_object* v___x_2492_, lean_object* v_liveVars_2493_, lean_object* v_child_2494_){
_start:
{
uint8_t v___x_2264__boxed_2495_; lean_object* v_res_2496_; 
v___x_2264__boxed_2495_ = lean_unbox(v___x_2492_);
v_res_2496_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0(v_derivedValMap_2489_, v___x_2490_, v_args_2491_, v___x_2264__boxed_2495_, v_liveVars_2493_, v_child_2494_);
return v_res_2496_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(lean_object* v___x_2497_, lean_object* v_args_2498_, uint8_t v___x_2499_, lean_object* v_fvarId_2500_, lean_object* v_derivedValMap_2501_, lean_object* v_liveVars_2502_){
_start:
{
lean_object* v___x_2503_; 
v___x_2503_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_derivedValMap_2501_, v_fvarId_2500_);
if (lean_obj_tag(v___x_2503_) == 1)
{
lean_object* v_val_2504_; lean_object* v_children_2505_; lean_object* v___x_2506_; lean_object* v___f_2507_; lean_object* v___x_2508_; 
v_val_2504_ = lean_ctor_get(v___x_2503_, 0);
lean_inc(v_val_2504_);
lean_dec_ref_known(v___x_2503_, 1);
v_children_2505_ = lean_ctor_get(v_val_2504_, 1);
lean_inc_ref(v_children_2505_);
lean_dec(v_val_2504_);
v___x_2506_ = lean_box(v___x_2499_);
v___f_2507_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___lam__0___boxed), 6, 4);
lean_closure_set(v___f_2507_, 0, v_derivedValMap_2501_);
lean_closure_set(v___f_2507_, 1, v___x_2497_);
lean_closure_set(v___f_2507_, 2, v_args_2498_);
lean_closure_set(v___f_2507_, 3, v___x_2506_);
v___x_2508_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_2507_, v_liveVars_2502_, v_children_2505_);
lean_dec_ref(v_children_2505_);
return v___x_2508_;
}
else
{
lean_dec(v___x_2503_);
lean_dec_ref(v_derivedValMap_2501_);
lean_dec_ref(v_args_2498_);
lean_dec_ref(v___x_2497_);
return v_liveVars_2502_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3___boxed(lean_object* v___x_2509_, lean_object* v_args_2510_, lean_object* v___x_2511_, lean_object* v_fvarId_2512_, lean_object* v_derivedValMap_2513_, lean_object* v_liveVars_2514_){
_start:
{
uint8_t v___x_2258__boxed_2515_; lean_object* v_res_2516_; 
v___x_2258__boxed_2515_ = lean_unbox(v___x_2511_);
v_res_2516_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2509_, v_args_2510_, v___x_2258__boxed_2515_, v_fvarId_2512_, v_derivedValMap_2513_, v_liveVars_2514_);
lean_dec(v_fvarId_2512_);
return v_res_2516_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(lean_object* v_args_2517_, lean_object* v_fvarId_2518_, lean_object* v_a_2519_, lean_object* v_a_2520_){
_start:
{
lean_object* v___x_2522_; lean_object* v_vars_2523_; uint8_t v___x_2524_; 
v___x_2522_ = lean_st_ref_get(v_a_2520_);
v_vars_2523_ = lean_ctor_get(v___x_2522_, 0);
lean_inc_ref(v_vars_2523_);
lean_dec(v___x_2522_);
v___x_2524_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2523_, v_fvarId_2518_);
lean_dec_ref(v_vars_2523_);
if (v___x_2524_ == 0)
{
lean_object* v_derivedValMap_2525_; lean_object* v___x_2526_; lean_object* v_vars_2527_; lean_object* v_borrows_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2542_; 
v_derivedValMap_2525_ = lean_ctor_get(v_a_2519_, 1);
v___x_2526_ = lean_st_ref_take(v_a_2520_);
v_vars_2527_ = lean_ctor_get(v___x_2526_, 0);
v_borrows_2528_ = lean_ctor_get(v___x_2526_, 1);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2530_ = v___x_2526_;
v_isShared_2531_ = v_isSharedCheck_2542_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_borrows_2528_);
lean_inc(v_vars_2527_);
lean_dec(v___x_2526_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2542_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; lean_object* v___x_2535_; 
v___x_2532_ = lean_box(0);
lean_inc(v_fvarId_2518_);
v___x_2533_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_vars_2527_, v_fvarId_2518_, v___x_2532_);
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 0, v___x_2533_);
v___x_2535_ = v___x_2530_;
goto v_reusejp_2534_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v___x_2533_);
lean_ctor_set(v_reuseFailAlloc_2541_, 1, v_borrows_2528_);
v___x_2535_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2534_;
}
v_reusejp_2534_:
{
lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; lean_object* v___x_2539_; lean_object* v___x_2540_; 
v___x_2536_ = lean_st_ref_put(v_a_2520_, v___x_2535_);
v___x_2537_ = lean_st_ref_take(v_a_2520_);
lean_inc_ref(v_derivedValMap_2525_);
lean_inc(v___x_2537_);
v___x_2538_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3(v___x_2537_, v_args_2517_, v___x_2524_, v_fvarId_2518_, v_derivedValMap_2525_, v___x_2537_);
lean_dec(v_fvarId_2518_);
v___x_2539_ = lean_st_ref_put(v_a_2520_, v___x_2538_);
v___x_2540_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2540_, 0, v___x_2532_);
return v___x_2540_;
}
}
}
else
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
lean_dec(v_fvarId_2518_);
lean_dec_ref(v_args_2517_);
v___x_2543_ = lean_box(0);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg___boxed(lean_object* v_args_2545_, lean_object* v_fvarId_2546_, lean_object* v_a_2547_, lean_object* v_a_2548_, lean_object* v___y_2549_){
_start:
{
lean_object* v_res_2550_; 
v_res_2550_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2545_, v_fvarId_2546_, v_a_2547_, v_a_2548_);
lean_dec(v_a_2548_);
lean_dec_ref(v_a_2547_);
return v_res_2550_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(lean_object* v_args_2551_, lean_object* v_as_2552_, size_t v_i_2553_, size_t v_stop_2554_, lean_object* v_b_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_, lean_object* v___y_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_){
_start:
{
lean_object* v_a_2564_; uint8_t v___x_2568_; 
v___x_2568_ = lean_usize_dec_eq(v_i_2553_, v_stop_2554_);
if (v___x_2568_ == 0)
{
lean_object* v___x_2569_; 
v___x_2569_ = lean_array_uget_borrowed(v_as_2552_, v_i_2553_);
if (lean_obj_tag(v___x_2569_) == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = lean_box(0);
v_a_2564_ = v___x_2570_;
goto v___jp_2563_;
}
else
{
lean_object* v_fvarId_2571_; lean_object* v___x_2572_; 
v_fvarId_2571_ = lean_ctor_get(v___x_2569_, 0);
lean_inc(v_fvarId_2571_);
lean_inc_ref(v_args_2551_);
v___x_2572_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2551_, v_fvarId_2571_, v___y_2556_, v___y_2557_);
if (lean_obj_tag(v___x_2572_) == 0)
{
lean_object* v_a_2573_; 
v_a_2573_ = lean_ctor_get(v___x_2572_, 0);
lean_inc(v_a_2573_);
lean_dec_ref_known(v___x_2572_, 1);
v_a_2564_ = v_a_2573_;
goto v___jp_2563_;
}
else
{
lean_dec_ref(v_args_2551_);
return v___x_2572_;
}
}
}
else
{
lean_object* v___x_2574_; 
lean_dec_ref(v_args_2551_);
v___x_2574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2574_, 0, v_b_2555_);
return v___x_2574_;
}
v___jp_2563_:
{
size_t v___x_2565_; size_t v___x_2566_; 
v___x_2565_ = ((size_t)1ULL);
v___x_2566_ = lean_usize_add(v_i_2553_, v___x_2565_);
v_i_2553_ = v___x_2566_;
v_b_2555_ = v_a_2564_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2___boxed(lean_object* v_args_2575_, lean_object* v_as_2576_, lean_object* v_i_2577_, lean_object* v_stop_2578_, lean_object* v_b_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_){
_start:
{
size_t v_i_boxed_2587_; size_t v_stop_boxed_2588_; lean_object* v_res_2589_; 
v_i_boxed_2587_ = lean_unbox_usize(v_i_2577_);
lean_dec(v_i_2577_);
v_stop_boxed_2588_ = lean_unbox_usize(v_stop_2578_);
lean_dec(v_stop_2578_);
v_res_2589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2575_, v_as_2576_, v_i_boxed_2587_, v_stop_boxed_2588_, v_b_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_);
lean_dec(v___y_2585_);
lean_dec_ref(v___y_2584_);
lean_dec(v___y_2583_);
lean_dec_ref(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec_ref(v_as_2576_);
return v_res_2589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(lean_object* v_args_2590_, lean_object* v_a_2591_, lean_object* v_a_2592_, lean_object* v_a_2593_, lean_object* v_a_2594_, lean_object* v_a_2595_, lean_object* v_a_2596_){
_start:
{
lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; uint8_t v___x_2601_; 
v___x_2598_ = lean_unsigned_to_nat(0u);
v___x_2599_ = lean_array_get_size(v_args_2590_);
v___x_2600_ = lean_box(0);
v___x_2601_ = lean_nat_dec_lt(v___x_2598_, v___x_2599_);
if (v___x_2601_ == 0)
{
lean_object* v___x_2602_; 
lean_dec_ref(v_args_2590_);
v___x_2602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2602_, 0, v___x_2600_);
return v___x_2602_;
}
else
{
uint8_t v___x_2603_; 
v___x_2603_ = lean_nat_dec_le(v___x_2599_, v___x_2599_);
if (v___x_2603_ == 0)
{
if (v___x_2601_ == 0)
{
lean_object* v___x_2604_; 
lean_dec_ref(v_args_2590_);
v___x_2604_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2600_);
return v___x_2604_;
}
else
{
size_t v___x_2605_; size_t v___x_2606_; lean_object* v___x_2607_; 
v___x_2605_ = ((size_t)0ULL);
v___x_2606_ = lean_usize_of_nat(v___x_2599_);
lean_inc_ref(v_args_2590_);
v___x_2607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2590_, v_args_2590_, v___x_2605_, v___x_2606_, v___x_2600_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_);
lean_dec_ref(v_args_2590_);
return v___x_2607_;
}
}
else
{
size_t v___x_2608_; size_t v___x_2609_; lean_object* v___x_2610_; 
v___x_2608_ = ((size_t)0ULL);
v___x_2609_ = lean_usize_of_nat(v___x_2599_);
lean_inc_ref(v_args_2590_);
v___x_2610_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__2(v_args_2590_, v_args_2590_, v___x_2608_, v___x_2609_, v___x_2600_, v_a_2591_, v_a_2592_, v_a_2593_, v_a_2594_, v_a_2595_, v_a_2596_);
lean_dec_ref(v_args_2590_);
return v___x_2610_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs___boxed(lean_object* v_args_2611_, lean_object* v_a_2612_, lean_object* v_a_2613_, lean_object* v_a_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v___y_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2611_, v_a_2612_, v_a_2613_, v_a_2614_, v_a_2615_, v_a_2616_, v_a_2617_);
lean_dec(v_a_2617_);
lean_dec_ref(v_a_2616_);
lean_dec(v_a_2615_);
lean_dec_ref(v_a_2614_);
lean_dec(v_a_2613_);
lean_dec_ref(v_a_2612_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(lean_object* v_args_2620_, lean_object* v_fvarId_2621_, lean_object* v_a_2622_, lean_object* v_a_2623_, lean_object* v_a_2624_, lean_object* v_a_2625_, lean_object* v_a_2626_, lean_object* v_a_2627_){
_start:
{
lean_object* v___x_2629_; 
v___x_2629_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___redArg(v_args_2620_, v_fvarId_2621_, v_a_2622_, v_a_2623_);
return v___x_2629_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1___boxed(lean_object* v_args_2630_, lean_object* v_fvarId_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_, lean_object* v_a_2635_, lean_object* v_a_2636_, lean_object* v_a_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1(v_args_2630_, v_fvarId_2631_, v_a_2632_, v_a_2633_, v_a_2634_, v_a_2635_, v_a_2636_, v_a_2637_);
lean_dec(v_a_2637_);
lean_dec_ref(v_a_2636_);
lean_dec(v_a_2635_);
lean_dec_ref(v_a_2634_);
lean_dec(v_a_2633_);
lean_dec_ref(v_a_2632_);
return v_res_2639_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(lean_object* v_00_u03b2_2640_, lean_object* v_m_2641_, lean_object* v_a_2642_){
_start:
{
uint8_t v___x_2643_; 
v___x_2643_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_m_2641_, v_a_2642_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2644_, lean_object* v_m_2645_, lean_object* v_a_2646_){
_start:
{
uint8_t v_res_2647_; lean_object* v_r_2648_; 
v_res_2647_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1(v_00_u03b2_2644_, v_m_2645_, v_a_2646_);
lean_dec(v_a_2646_);
lean_dec_ref(v_m_2645_);
v_r_2648_ = lean_box(v_res_2647_);
return v_r_2648_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2(lean_object* v_00_u03b2_2649_, lean_object* v_m_2650_, lean_object* v_a_2651_, lean_object* v_b_2652_){
_start:
{
lean_object* v___x_2653_; 
v___x_2653_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_m_2650_, v_a_2651_, v_b_2652_);
return v___x_2653_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(lean_object* v_msg_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_){
_start:
{
lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v_toApplicative_2664_; lean_object* v___x_2666_; uint8_t v_isShared_2667_; uint8_t v_isSharedCheck_2727_; 
v___x_2662_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0);
v___x_2663_ = l_StateRefT_x27_instMonad___redArg(v___x_2662_);
v_toApplicative_2664_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2727_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2727_ == 0)
{
lean_object* v_unused_2728_; 
v_unused_2728_ = lean_ctor_get(v___x_2663_, 1);
lean_dec(v_unused_2728_);
v___x_2666_ = v___x_2663_;
v_isShared_2667_ = v_isSharedCheck_2727_;
goto v_resetjp_2665_;
}
else
{
lean_inc(v_toApplicative_2664_);
lean_dec(v___x_2663_);
v___x_2666_ = lean_box(0);
v_isShared_2667_ = v_isSharedCheck_2727_;
goto v_resetjp_2665_;
}
v_resetjp_2665_:
{
lean_object* v_toFunctor_2668_; lean_object* v_toSeq_2669_; lean_object* v_toSeqLeft_2670_; lean_object* v_toSeqRight_2671_; lean_object* v___x_2673_; uint8_t v_isShared_2674_; uint8_t v_isSharedCheck_2725_; 
v_toFunctor_2668_ = lean_ctor_get(v_toApplicative_2664_, 0);
v_toSeq_2669_ = lean_ctor_get(v_toApplicative_2664_, 2);
v_toSeqLeft_2670_ = lean_ctor_get(v_toApplicative_2664_, 3);
v_toSeqRight_2671_ = lean_ctor_get(v_toApplicative_2664_, 4);
v_isSharedCheck_2725_ = !lean_is_exclusive(v_toApplicative_2664_);
if (v_isSharedCheck_2725_ == 0)
{
lean_object* v_unused_2726_; 
v_unused_2726_ = lean_ctor_get(v_toApplicative_2664_, 1);
lean_dec(v_unused_2726_);
v___x_2673_ = v_toApplicative_2664_;
v_isShared_2674_ = v_isSharedCheck_2725_;
goto v_resetjp_2672_;
}
else
{
lean_inc(v_toSeqRight_2671_);
lean_inc(v_toSeqLeft_2670_);
lean_inc(v_toSeq_2669_);
lean_inc(v_toFunctor_2668_);
lean_dec(v_toApplicative_2664_);
v___x_2673_ = lean_box(0);
v_isShared_2674_ = v_isSharedCheck_2725_;
goto v_resetjp_2672_;
}
v_resetjp_2672_:
{
lean_object* v___f_2675_; lean_object* v___f_2676_; lean_object* v___f_2677_; lean_object* v___f_2678_; lean_object* v___x_2679_; lean_object* v___f_2680_; lean_object* v___f_2681_; lean_object* v___f_2682_; lean_object* v___x_2684_; 
v___f_2675_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1));
v___f_2676_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2));
lean_inc_ref(v_toFunctor_2668_);
v___f_2677_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2677_, 0, v_toFunctor_2668_);
v___f_2678_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2678_, 0, v_toFunctor_2668_);
v___x_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___f_2677_);
lean_ctor_set(v___x_2679_, 1, v___f_2678_);
v___f_2680_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2680_, 0, v_toSeqRight_2671_);
v___f_2681_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2681_, 0, v_toSeqLeft_2670_);
v___f_2682_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2682_, 0, v_toSeq_2669_);
if (v_isShared_2674_ == 0)
{
lean_ctor_set(v___x_2673_, 4, v___f_2680_);
lean_ctor_set(v___x_2673_, 3, v___f_2681_);
lean_ctor_set(v___x_2673_, 2, v___f_2682_);
lean_ctor_set(v___x_2673_, 1, v___f_2675_);
lean_ctor_set(v___x_2673_, 0, v___x_2679_);
v___x_2684_ = v___x_2673_;
goto v_reusejp_2683_;
}
else
{
lean_object* v_reuseFailAlloc_2724_; 
v_reuseFailAlloc_2724_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2724_, 0, v___x_2679_);
lean_ctor_set(v_reuseFailAlloc_2724_, 1, v___f_2675_);
lean_ctor_set(v_reuseFailAlloc_2724_, 2, v___f_2682_);
lean_ctor_set(v_reuseFailAlloc_2724_, 3, v___f_2681_);
lean_ctor_set(v_reuseFailAlloc_2724_, 4, v___f_2680_);
v___x_2684_ = v_reuseFailAlloc_2724_;
goto v_reusejp_2683_;
}
v_reusejp_2683_:
{
lean_object* v___x_2686_; 
if (v_isShared_2667_ == 0)
{
lean_ctor_set(v___x_2666_, 1, v___f_2676_);
lean_ctor_set(v___x_2666_, 0, v___x_2684_);
v___x_2686_ = v___x_2666_;
goto v_reusejp_2685_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2684_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v___f_2676_);
v___x_2686_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2685_;
}
v_reusejp_2685_:
{
lean_object* v___x_2687_; lean_object* v_toApplicative_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2721_; 
v___x_2687_ = l_StateRefT_x27_instMonad___redArg(v___x_2686_);
v_toApplicative_2688_ = lean_ctor_get(v___x_2687_, 0);
v_isSharedCheck_2721_ = !lean_is_exclusive(v___x_2687_);
if (v_isSharedCheck_2721_ == 0)
{
lean_object* v_unused_2722_; 
v_unused_2722_ = lean_ctor_get(v___x_2687_, 1);
lean_dec(v_unused_2722_);
v___x_2690_ = v___x_2687_;
v_isShared_2691_ = v_isSharedCheck_2721_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_toApplicative_2688_);
lean_dec(v___x_2687_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2721_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v_toFunctor_2692_; lean_object* v_toSeq_2693_; lean_object* v_toSeqLeft_2694_; lean_object* v_toSeqRight_2695_; lean_object* v___x_2697_; uint8_t v_isShared_2698_; uint8_t v_isSharedCheck_2719_; 
v_toFunctor_2692_ = lean_ctor_get(v_toApplicative_2688_, 0);
v_toSeq_2693_ = lean_ctor_get(v_toApplicative_2688_, 2);
v_toSeqLeft_2694_ = lean_ctor_get(v_toApplicative_2688_, 3);
v_toSeqRight_2695_ = lean_ctor_get(v_toApplicative_2688_, 4);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_toApplicative_2688_);
if (v_isSharedCheck_2719_ == 0)
{
lean_object* v_unused_2720_; 
v_unused_2720_ = lean_ctor_get(v_toApplicative_2688_, 1);
lean_dec(v_unused_2720_);
v___x_2697_ = v_toApplicative_2688_;
v_isShared_2698_ = v_isSharedCheck_2719_;
goto v_resetjp_2696_;
}
else
{
lean_inc(v_toSeqRight_2695_);
lean_inc(v_toSeqLeft_2694_);
lean_inc(v_toSeq_2693_);
lean_inc(v_toFunctor_2692_);
lean_dec(v_toApplicative_2688_);
v___x_2697_ = lean_box(0);
v_isShared_2698_ = v_isSharedCheck_2719_;
goto v_resetjp_2696_;
}
v_resetjp_2696_:
{
lean_object* v___f_2699_; lean_object* v___f_2700_; lean_object* v___f_2701_; lean_object* v___f_2702_; lean_object* v___x_2703_; lean_object* v___f_2704_; lean_object* v___f_2705_; lean_object* v___f_2706_; lean_object* v___x_2708_; 
v___f_2699_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3));
v___f_2700_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4));
lean_inc_ref(v_toFunctor_2692_);
v___f_2701_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2701_, 0, v_toFunctor_2692_);
v___f_2702_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2702_, 0, v_toFunctor_2692_);
v___x_2703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2703_, 0, v___f_2701_);
lean_ctor_set(v___x_2703_, 1, v___f_2702_);
v___f_2704_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2704_, 0, v_toSeqRight_2695_);
v___f_2705_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2705_, 0, v_toSeqLeft_2694_);
v___f_2706_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2706_, 0, v_toSeq_2693_);
if (v_isShared_2698_ == 0)
{
lean_ctor_set(v___x_2697_, 4, v___f_2704_);
lean_ctor_set(v___x_2697_, 3, v___f_2705_);
lean_ctor_set(v___x_2697_, 2, v___f_2706_);
lean_ctor_set(v___x_2697_, 1, v___f_2699_);
lean_ctor_set(v___x_2697_, 0, v___x_2703_);
v___x_2708_ = v___x_2697_;
goto v_reusejp_2707_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2703_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v___f_2699_);
lean_ctor_set(v_reuseFailAlloc_2718_, 2, v___f_2706_);
lean_ctor_set(v_reuseFailAlloc_2718_, 3, v___f_2705_);
lean_ctor_set(v_reuseFailAlloc_2718_, 4, v___f_2704_);
v___x_2708_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2707_;
}
v_reusejp_2707_:
{
lean_object* v___x_2710_; 
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 1, v___f_2700_);
lean_ctor_set(v___x_2690_, 0, v___x_2708_);
v___x_2710_ = v___x_2690_;
goto v_reusejp_2709_;
}
else
{
lean_object* v_reuseFailAlloc_2717_; 
v_reuseFailAlloc_2717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2717_, 0, v___x_2708_);
lean_ctor_set(v_reuseFailAlloc_2717_, 1, v___f_2700_);
v___x_2710_ = v_reuseFailAlloc_2717_;
goto v_reusejp_2709_;
}
v_reusejp_2709_:
{
lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___f_2714_; lean_object* v___x_1647__overap_2715_; lean_object* v___x_2716_; 
v___x_2711_ = l_StateRefT_x27_instMonad___redArg(v___x_2710_);
v___x_2712_ = lean_box(0);
v___x_2713_ = l_instInhabitedOfMonad___redArg(v___x_2711_, v___x_2712_);
v___f_2714_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2714_, 0, v___x_2713_);
v___x_1647__overap_2715_ = lean_panic_fn_borrowed(v___f_2714_, v_msg_2654_);
lean_dec_ref(v___f_2714_);
lean_inc(v___y_2660_);
lean_inc_ref(v___y_2659_);
lean_inc(v___y_2658_);
lean_inc_ref(v___y_2657_);
lean_inc(v___y_2656_);
lean_inc_ref(v___y_2655_);
v___x_2716_ = lean_apply_7(v___x_1647__overap_2715_, v___y_2655_, v___y_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, lean_box(0));
return v___x_2716_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1___boxed(lean_object* v_msg_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_){
_start:
{
lean_object* v_res_2737_; 
v_res_2737_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(v_msg_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_);
lean_dec(v___y_2735_);
lean_dec_ref(v___y_2734_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
lean_dec(v___y_2731_);
lean_dec_ref(v___y_2730_);
return v_res_2737_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0(lean_object* v_derivedValMap_2738_, lean_object* v___x_2739_, uint8_t v___x_2740_, lean_object* v_liveVars_2741_, lean_object* v_child_2742_){
_start:
{
lean_object* v_cinfo_2760_; lean_object* v_parents_2761_; lean_object* v___x_2762_; lean_object* v___x_2763_; uint8_t v___x_2764_; 
v_cinfo_2760_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_derivedValMap_2738_, v_child_2742_);
v_parents_2761_ = lean_ctor_get(v_cinfo_2760_, 0);
lean_inc_ref(v_parents_2761_);
lean_dec_ref(v_cinfo_2760_);
v___x_2762_ = lean_unsigned_to_nat(0u);
v___x_2763_ = lean_array_get_size(v_parents_2761_);
v___x_2764_ = lean_nat_dec_lt(v___x_2762_, v___x_2763_);
if (v___x_2764_ == 0)
{
lean_dec_ref(v_parents_2761_);
goto v___jp_2756_;
}
else
{
if (v___x_2764_ == 0)
{
lean_dec_ref(v_parents_2761_);
goto v___jp_2756_;
}
else
{
size_t v___x_2765_; size_t v___x_2766_; uint8_t v___x_2767_; 
v___x_2765_ = ((size_t)0ULL);
v___x_2766_ = lean_usize_of_nat(v___x_2763_);
v___x_2767_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_2741_, v_parents_2761_, v___x_2765_, v___x_2766_);
lean_dec_ref(v_parents_2761_);
if (v___x_2767_ == 0)
{
goto v___jp_2756_;
}
else
{
lean_object* v___x_2768_; 
v___x_2768_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2739_, v___x_2740_, v_child_2742_, v_derivedValMap_2738_, v_liveVars_2741_);
lean_dec(v_child_2742_);
return v___x_2768_;
}
}
}
v___jp_2743_:
{
lean_object* v_vars_2744_; lean_object* v_borrows_2745_; lean_object* v___x_2747_; uint8_t v_isShared_2748_; uint8_t v_isSharedCheck_2755_; 
v_vars_2744_ = lean_ctor_get(v_liveVars_2741_, 0);
v_borrows_2745_ = lean_ctor_get(v_liveVars_2741_, 1);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_liveVars_2741_);
if (v_isSharedCheck_2755_ == 0)
{
v___x_2747_ = v_liveVars_2741_;
v_isShared_2748_ = v_isSharedCheck_2755_;
goto v_resetjp_2746_;
}
else
{
lean_inc(v_borrows_2745_);
lean_inc(v_vars_2744_);
lean_dec(v_liveVars_2741_);
v___x_2747_ = lean_box(0);
v_isShared_2748_ = v_isSharedCheck_2755_;
goto v_resetjp_2746_;
}
v_resetjp_2746_:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2752_; 
v___x_2749_ = lean_box(0);
lean_inc(v_child_2742_);
v___x_2750_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_2745_, v_child_2742_, v___x_2749_);
if (v_isShared_2748_ == 0)
{
lean_ctor_set(v___x_2747_, 1, v___x_2750_);
v___x_2752_ = v___x_2747_;
goto v_reusejp_2751_;
}
else
{
lean_object* v_reuseFailAlloc_2754_; 
v_reuseFailAlloc_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2754_, 0, v_vars_2744_);
lean_ctor_set(v_reuseFailAlloc_2754_, 1, v___x_2750_);
v___x_2752_ = v_reuseFailAlloc_2754_;
goto v_reusejp_2751_;
}
v_reusejp_2751_:
{
lean_object* v___x_2753_; 
v___x_2753_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2739_, v___x_2740_, v_child_2742_, v_derivedValMap_2738_, v___x_2752_);
lean_dec(v_child_2742_);
return v___x_2753_;
}
}
}
v___jp_2756_:
{
lean_object* v_vars_2757_; uint8_t v___x_2758_; 
v_vars_2757_ = lean_ctor_get(v___x_2739_, 0);
v___x_2758_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2757_, v_child_2742_);
if (v___x_2758_ == 0)
{
goto v___jp_2743_;
}
else
{
if (v___x_2740_ == 0)
{
lean_object* v___x_2759_; 
v___x_2759_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2739_, v___x_2740_, v_child_2742_, v_derivedValMap_2738_, v_liveVars_2741_);
lean_dec(v_child_2742_);
return v___x_2759_;
}
else
{
goto v___jp_2743_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0___boxed(lean_object* v_derivedValMap_2769_, lean_object* v___x_2770_, lean_object* v___x_2771_, lean_object* v_liveVars_2772_, lean_object* v_child_2773_){
_start:
{
uint8_t v___x_2026__boxed_2774_; lean_object* v_res_2775_; 
v___x_2026__boxed_2774_ = lean_unbox(v___x_2771_);
v_res_2775_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0(v_derivedValMap_2769_, v___x_2770_, v___x_2026__boxed_2774_, v_liveVars_2772_, v_child_2773_);
return v_res_2775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(lean_object* v___x_2776_, uint8_t v___x_2777_, lean_object* v_fvarId_2778_, lean_object* v_derivedValMap_2779_, lean_object* v_liveVars_2780_){
_start:
{
lean_object* v___x_2781_; 
v___x_2781_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_derivedValMap_2779_, v_fvarId_2778_);
if (lean_obj_tag(v___x_2781_) == 1)
{
lean_object* v_val_2782_; lean_object* v_children_2783_; lean_object* v___x_2784_; lean_object* v___f_2785_; lean_object* v___x_2786_; 
v_val_2782_ = lean_ctor_get(v___x_2781_, 0);
lean_inc(v_val_2782_);
lean_dec_ref_known(v___x_2781_, 1);
v_children_2783_ = lean_ctor_get(v_val_2782_, 1);
lean_inc_ref(v_children_2783_);
lean_dec(v_val_2782_);
v___x_2784_ = lean_box(v___x_2777_);
v___f_2785_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___lam__0___boxed), 5, 3);
lean_closure_set(v___f_2785_, 0, v_derivedValMap_2779_);
lean_closure_set(v___f_2785_, 1, v___x_2776_);
lean_closure_set(v___f_2785_, 2, v___x_2784_);
v___x_2786_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_2785_, v_liveVars_2780_, v_children_2783_);
lean_dec_ref(v_children_2783_);
return v___x_2786_;
}
else
{
lean_dec(v___x_2781_);
lean_dec_ref(v_derivedValMap_2779_);
lean_dec_ref(v___x_2776_);
return v_liveVars_2780_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0___boxed(lean_object* v___x_2787_, lean_object* v___x_2788_, lean_object* v_fvarId_2789_, lean_object* v_derivedValMap_2790_, lean_object* v_liveVars_2791_){
_start:
{
uint8_t v___x_2020__boxed_2792_; lean_object* v_res_2793_; 
v___x_2020__boxed_2792_ = lean_unbox(v___x_2788_);
v_res_2793_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2787_, v___x_2020__boxed_2792_, v_fvarId_2789_, v_derivedValMap_2790_, v_liveVars_2791_);
lean_dec(v_fvarId_2789_);
return v_res_2793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(lean_object* v_fvarId_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_){
_start:
{
lean_object* v___x_2798_; lean_object* v_vars_2799_; uint8_t v___x_2800_; 
v___x_2798_ = lean_st_ref_get(v_a_2796_);
v_vars_2799_ = lean_ctor_get(v___x_2798_, 0);
lean_inc_ref(v_vars_2799_);
lean_dec(v___x_2798_);
v___x_2800_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_2799_, v_fvarId_2794_);
lean_dec_ref(v_vars_2799_);
if (v___x_2800_ == 0)
{
lean_object* v_derivedValMap_2801_; lean_object* v___x_2802_; lean_object* v_vars_2803_; lean_object* v_borrows_2804_; lean_object* v___x_2806_; uint8_t v_isShared_2807_; uint8_t v_isSharedCheck_2818_; 
v_derivedValMap_2801_ = lean_ctor_get(v_a_2795_, 1);
v___x_2802_ = lean_st_ref_take(v_a_2796_);
v_vars_2803_ = lean_ctor_get(v___x_2802_, 0);
v_borrows_2804_ = lean_ctor_get(v___x_2802_, 1);
v_isSharedCheck_2818_ = !lean_is_exclusive(v___x_2802_);
if (v_isSharedCheck_2818_ == 0)
{
v___x_2806_ = v___x_2802_;
v_isShared_2807_ = v_isSharedCheck_2818_;
goto v_resetjp_2805_;
}
else
{
lean_inc(v_borrows_2804_);
lean_inc(v_vars_2803_);
lean_dec(v___x_2802_);
v___x_2806_ = lean_box(0);
v_isShared_2807_ = v_isSharedCheck_2818_;
goto v_resetjp_2805_;
}
v_resetjp_2805_:
{
lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2811_; 
v___x_2808_ = lean_box(0);
lean_inc(v_fvarId_2794_);
v___x_2809_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_vars_2803_, v_fvarId_2794_, v___x_2808_);
if (v_isShared_2807_ == 0)
{
lean_ctor_set(v___x_2806_, 0, v___x_2809_);
v___x_2811_ = v___x_2806_;
goto v_reusejp_2810_;
}
else
{
lean_object* v_reuseFailAlloc_2817_; 
v_reuseFailAlloc_2817_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2817_, 0, v___x_2809_);
lean_ctor_set(v_reuseFailAlloc_2817_, 1, v_borrows_2804_);
v___x_2811_ = v_reuseFailAlloc_2817_;
goto v_reusejp_2810_;
}
v_reusejp_2810_:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; 
v___x_2812_ = lean_st_ref_put(v_a_2796_, v___x_2811_);
v___x_2813_ = lean_st_ref_take(v_a_2796_);
lean_inc_ref(v_derivedValMap_2801_);
lean_inc(v___x_2813_);
v___x_2814_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0_spec__0(v___x_2813_, v___x_2800_, v_fvarId_2794_, v_derivedValMap_2801_, v___x_2813_);
lean_dec(v_fvarId_2794_);
v___x_2815_ = lean_st_ref_put(v_a_2796_, v___x_2814_);
v___x_2816_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2816_, 0, v___x_2808_);
return v___x_2816_;
}
}
}
else
{
lean_object* v___x_2819_; lean_object* v___x_2820_; 
lean_dec(v_fvarId_2794_);
v___x_2819_ = lean_box(0);
v___x_2820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2820_, 0, v___x_2819_);
return v___x_2820_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg___boxed(lean_object* v_fvarId_2821_, lean_object* v_a_2822_, lean_object* v_a_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2821_, v_a_2822_, v_a_2823_);
lean_dec(v_a_2823_);
lean_dec_ref(v_a_2822_);
return v_res_2825_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1(void){
_start:
{
lean_object* v___x_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2827_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_2828_ = lean_unsigned_to_nat(20u);
v___x_2829_ = lean_unsigned_to_nat(382u);
v___x_2830_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__0));
v___x_2831_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_2832_ = l_mkPanicMessageWithDecl(v___x_2831_, v___x_2830_, v___x_2829_, v___x_2828_, v___x_2827_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(lean_object* v_value_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_){
_start:
{
switch(lean_obj_tag(v_value_2833_))
{
case 0:
{
lean_object* v___x_2842_; uint8_t v_isShared_2843_; uint8_t v_isSharedCheck_2848_; 
v_isSharedCheck_2848_ = !lean_is_exclusive(v_value_2833_);
if (v_isSharedCheck_2848_ == 0)
{
lean_object* v_unused_2849_; 
v_unused_2849_ = lean_ctor_get(v_value_2833_, 0);
lean_dec(v_unused_2849_);
v___x_2842_ = v_value_2833_;
v_isShared_2843_ = v_isSharedCheck_2848_;
goto v_resetjp_2841_;
}
else
{
lean_dec(v_value_2833_);
v___x_2842_ = lean_box(0);
v_isShared_2843_ = v_isSharedCheck_2848_;
goto v_resetjp_2841_;
}
v_resetjp_2841_:
{
lean_object* v___x_2844_; lean_object* v___x_2846_; 
v___x_2844_ = lean_box(0);
if (v_isShared_2843_ == 0)
{
lean_ctor_set(v___x_2842_, 0, v___x_2844_);
v___x_2846_ = v___x_2842_;
goto v_reusejp_2845_;
}
else
{
lean_object* v_reuseFailAlloc_2847_; 
v_reuseFailAlloc_2847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2847_, 0, v___x_2844_);
v___x_2846_ = v_reuseFailAlloc_2847_;
goto v_reusejp_2845_;
}
v_reusejp_2845_:
{
return v___x_2846_;
}
}
}
case 1:
{
lean_object* v___x_2850_; lean_object* v___x_2851_; 
v___x_2850_ = lean_box(0);
v___x_2851_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2851_, 0, v___x_2850_);
return v___x_2851_;
}
case 4:
{
lean_object* v_fvarId_2852_; lean_object* v_args_2853_; lean_object* v___x_2854_; lean_object* v___x_2855_; 
v_fvarId_2852_ = lean_ctor_get(v_value_2833_, 0);
lean_inc(v_fvarId_2852_);
v_args_2853_ = lean_ctor_get(v_value_2833_, 1);
lean_inc_ref(v_args_2853_);
lean_dec_ref_known(v_value_2833_, 2);
v___x_2854_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2852_, v_a_2834_, v_a_2835_);
lean_dec_ref(v___x_2854_);
v___x_2855_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2853_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
return v___x_2855_;
}
case 5:
{
lean_object* v_args_2856_; lean_object* v___x_2857_; 
v_args_2856_ = lean_ctor_get(v_value_2833_, 1);
lean_inc_ref(v_args_2856_);
lean_dec_ref_known(v_value_2833_, 2);
v___x_2857_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2856_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
return v___x_2857_;
}
case 8:
{
lean_object* v_var_2858_; lean_object* v___x_2859_; 
v_var_2858_ = lean_ctor_get(v_value_2833_, 2);
lean_inc(v_var_2858_);
lean_dec_ref_known(v_value_2833_, 3);
v___x_2859_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_2858_, v_a_2834_, v_a_2835_);
return v___x_2859_;
}
case 9:
{
lean_object* v_args_2860_; lean_object* v___x_2861_; 
v_args_2860_ = lean_ctor_get(v_value_2833_, 1);
lean_inc_ref(v_args_2860_);
lean_dec_ref_known(v_value_2833_, 2);
v___x_2861_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2860_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
return v___x_2861_;
}
case 10:
{
lean_object* v_args_2862_; lean_object* v___x_2863_; 
v_args_2862_ = lean_ctor_get(v_value_2833_, 1);
lean_inc_ref(v_args_2862_);
lean_dec_ref_known(v_value_2833_, 2);
v___x_2863_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2862_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
return v___x_2863_;
}
case 12:
{
lean_object* v_var_2864_; lean_object* v_args_2865_; lean_object* v___x_2866_; lean_object* v___x_2867_; 
v_var_2864_ = lean_ctor_get(v_value_2833_, 0);
lean_inc(v_var_2864_);
v_args_2865_ = lean_ctor_get(v_value_2833_, 2);
lean_inc_ref(v_args_2865_);
lean_dec_ref_known(v_value_2833_, 3);
v___x_2866_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_2864_, v_a_2834_, v_a_2835_);
lean_dec_ref(v___x_2866_);
v___x_2867_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_2865_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
return v___x_2867_;
}
case 14:
{
lean_object* v_fvarId_2868_; lean_object* v___x_2869_; 
v_fvarId_2868_ = lean_ctor_get(v_value_2833_, 0);
lean_inc(v_fvarId_2868_);
lean_dec_ref_known(v_value_2833_, 1);
v___x_2869_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2868_, v_a_2834_, v_a_2835_);
return v___x_2869_;
}
case 15:
{
lean_object* v___x_2870_; lean_object* v___x_2871_; 
lean_dec_ref_known(v_value_2833_, 1);
v___x_2870_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___closed__1);
v___x_2871_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__1(v___x_2870_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_, v_a_2839_);
return v___x_2871_;
}
default: 
{
lean_object* v_var_2872_; lean_object* v___x_2873_; 
v_var_2872_ = lean_ctor_get(v_value_2833_, 1);
lean_inc(v_var_2872_);
lean_dec(v_value_2833_);
v___x_2873_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_var_2872_, v_a_2834_, v_a_2835_);
return v___x_2873_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue___boxed(lean_object* v_value_2874_, lean_object* v_a_2875_, lean_object* v_a_2876_, lean_object* v_a_2877_, lean_object* v_a_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v___y_2881_){
_start:
{
lean_object* v_res_2882_; 
v_res_2882_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(v_value_2874_, v_a_2875_, v_a_2876_, v_a_2877_, v_a_2878_, v_a_2879_, v_a_2880_);
lean_dec(v_a_2880_);
lean_dec_ref(v_a_2879_);
lean_dec(v_a_2878_);
lean_dec_ref(v_a_2877_);
lean_dec(v_a_2876_);
lean_dec_ref(v_a_2875_);
return v_res_2882_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(lean_object* v_fvarId_2883_, lean_object* v_a_2884_, lean_object* v_a_2885_, lean_object* v_a_2886_, lean_object* v_a_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_){
_start:
{
lean_object* v___x_2891_; 
v___x_2891_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_2883_, v_a_2884_, v_a_2885_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___boxed(lean_object* v_fvarId_2892_, lean_object* v_a_2893_, lean_object* v_a_2894_, lean_object* v_a_2895_, lean_object* v_a_2896_, lean_object* v_a_2897_, lean_object* v_a_2898_, lean_object* v___y_2899_){
_start:
{
lean_object* v_res_2900_; 
v_res_2900_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0(v_fvarId_2892_, v_a_2893_, v_a_2894_, v_a_2895_, v_a_2896_, v_a_2897_, v_a_2898_);
lean_dec(v_a_2898_);
lean_dec_ref(v_a_2897_);
lean_dec(v_a_2896_);
lean_dec_ref(v_a_2895_);
lean_dec(v_a_2894_);
lean_dec_ref(v_a_2893_);
return v_res_2900_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(lean_object* v_fvarId_2901_, lean_object* v_a_2902_){
_start:
{
lean_object* v___x_2904_; lean_object* v_vars_2905_; lean_object* v_borrows_2906_; lean_object* v___x_2908_; uint8_t v_isShared_2909_; uint8_t v_isSharedCheck_2920_; 
v___x_2904_ = lean_st_ref_take(v_a_2902_);
v_vars_2905_ = lean_ctor_get(v___x_2904_, 0);
v_borrows_2906_ = lean_ctor_get(v___x_2904_, 1);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2904_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2908_ = v___x_2904_;
v_isShared_2909_ = v_isSharedCheck_2920_;
goto v_resetjp_2907_;
}
else
{
lean_inc(v_borrows_2906_);
lean_inc(v_vars_2905_);
lean_dec(v___x_2904_);
v___x_2908_ = lean_box(0);
v_isShared_2909_ = v_isSharedCheck_2920_;
goto v_resetjp_2907_;
}
v_resetjp_2907_:
{
lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v_vars_2913_; lean_object* v_borrows_2914_; lean_object* v___x_2916_; 
v___x_2910_ = lean_box(0);
v___x_2911_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2912_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_2901_);
v_vars_2913_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2911_, v___x_2912_, v_vars_2905_, v_fvarId_2901_);
v_borrows_2914_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2911_, v___x_2912_, v_borrows_2906_, v_fvarId_2901_);
if (v_isShared_2909_ == 0)
{
lean_ctor_set(v___x_2908_, 1, v_borrows_2914_);
lean_ctor_set(v___x_2908_, 0, v_vars_2913_);
v___x_2916_ = v___x_2908_;
goto v_reusejp_2915_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v_vars_2913_);
lean_ctor_set(v_reuseFailAlloc_2919_, 1, v_borrows_2914_);
v___x_2916_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2915_;
}
v_reusejp_2915_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; 
v___x_2917_ = lean_st_ref_put(v_a_2902_, v___x_2916_);
v___x_2918_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2918_, 0, v___x_2910_);
return v___x_2918_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg___boxed(lean_object* v_fvarId_2921_, lean_object* v_a_2922_, lean_object* v___y_2923_){
_start:
{
lean_object* v_res_2924_; 
v_res_2924_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___redArg(v_fvarId_2921_, v_a_2922_);
lean_dec(v_a_2922_);
return v_res_2924_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(lean_object* v_fvarId_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_, lean_object* v_a_2929_, lean_object* v_a_2930_, lean_object* v_a_2931_){
_start:
{
lean_object* v___x_2933_; lean_object* v_vars_2934_; lean_object* v_borrows_2935_; lean_object* v___x_2937_; uint8_t v_isShared_2938_; uint8_t v_isSharedCheck_2949_; 
v___x_2933_ = lean_st_ref_take(v_a_2927_);
v_vars_2934_ = lean_ctor_get(v___x_2933_, 0);
v_borrows_2935_ = lean_ctor_get(v___x_2933_, 1);
v_isSharedCheck_2949_ = !lean_is_exclusive(v___x_2933_);
if (v_isSharedCheck_2949_ == 0)
{
v___x_2937_ = v___x_2933_;
v_isShared_2938_ = v_isSharedCheck_2949_;
goto v_resetjp_2936_;
}
else
{
lean_inc(v_borrows_2935_);
lean_inc(v_vars_2934_);
lean_dec(v___x_2933_);
v___x_2937_ = lean_box(0);
v_isShared_2938_ = v_isSharedCheck_2949_;
goto v_resetjp_2936_;
}
v_resetjp_2936_:
{
lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v_vars_2942_; lean_object* v_borrows_2943_; lean_object* v___x_2945_; 
v___x_2939_ = lean_box(0);
v___x_2940_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2941_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc(v_fvarId_2925_);
v_vars_2942_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2940_, v___x_2941_, v_vars_2934_, v_fvarId_2925_);
v_borrows_2943_ = l_Std_DHashMap_Internal_Raw_u2080_erase___redArg(v___x_2940_, v___x_2941_, v_borrows_2935_, v_fvarId_2925_);
if (v_isShared_2938_ == 0)
{
lean_ctor_set(v___x_2937_, 1, v_borrows_2943_);
lean_ctor_set(v___x_2937_, 0, v_vars_2942_);
v___x_2945_ = v___x_2937_;
goto v_reusejp_2944_;
}
else
{
lean_object* v_reuseFailAlloc_2948_; 
v_reuseFailAlloc_2948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2948_, 0, v_vars_2942_);
lean_ctor_set(v_reuseFailAlloc_2948_, 1, v_borrows_2943_);
v___x_2945_ = v_reuseFailAlloc_2948_;
goto v_reusejp_2944_;
}
v_reusejp_2944_:
{
lean_object* v___x_2946_; lean_object* v___x_2947_; 
v___x_2946_ = lean_st_ref_put(v_a_2927_, v___x_2945_);
v___x_2947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2947_, 0, v___x_2939_);
return v___x_2947_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar___boxed(lean_object* v_fvarId_2950_, lean_object* v_a_2951_, lean_object* v_a_2952_, lean_object* v_a_2953_, lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v___y_2957_){
_start:
{
lean_object* v_res_2958_; 
v_res_2958_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_bindVar(v_fvarId_2950_, v_a_2951_, v_a_2952_, v_a_2953_, v_a_2954_, v_a_2955_, v_a_2956_);
lean_dec(v_a_2956_);
lean_dec_ref(v_a_2955_);
lean_dec(v_a_2954_);
lean_dec_ref(v_a_2953_);
lean_dec(v_a_2952_);
lean_dec_ref(v_a_2951_);
return v_res_2958_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(lean_object* v_x_2959_){
_start:
{
uint8_t v___x_2960_; 
v___x_2960_ = 1;
return v___x_2960_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0___boxed(lean_object* v_x_2961_){
_start:
{
uint8_t v_res_2962_; lean_object* v_r_2963_; 
v_res_2962_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__0(v_x_2961_);
lean_dec(v_x_2961_);
v_r_2963_ = lean_box(v_res_2962_);
return v_r_2963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1(lean_object* v___x_2964_, lean_object* v___x_2965_, lean_object* v_derivedValMap_2966_, lean_object* v___f_2967_, lean_object* v_liveVars_2968_, lean_object* v_x_2969_){
_start:
{
lean_object* v_vars_2970_; lean_object* v_borrows_2971_; lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2981_; 
v_vars_2970_ = lean_ctor_get(v_liveVars_2968_, 0);
v_borrows_2971_ = lean_ctor_get(v_liveVars_2968_, 1);
v_isSharedCheck_2981_ = !lean_is_exclusive(v_liveVars_2968_);
if (v_isSharedCheck_2981_ == 0)
{
v___x_2973_ = v_liveVars_2968_;
v_isShared_2974_ = v_isSharedCheck_2981_;
goto v_resetjp_2972_;
}
else
{
lean_inc(v_borrows_2971_);
lean_inc(v_vars_2970_);
lean_dec(v_liveVars_2968_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2981_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2978_; 
v___x_2975_ = lean_box(0);
lean_inc(v_x_2969_);
v___x_2976_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___redArg(v___x_2964_, v___x_2965_, v_borrows_2971_, v_x_2969_, v___x_2975_);
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 1, v___x_2976_);
v___x_2978_ = v___x_2973_;
goto v_reusejp_2977_;
}
else
{
lean_object* v_reuseFailAlloc_2980_; 
v_reuseFailAlloc_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2980_, 0, v_vars_2970_);
lean_ctor_set(v_reuseFailAlloc_2980_, 1, v___x_2976_);
v___x_2978_ = v_reuseFailAlloc_2980_;
goto v_reusejp_2977_;
}
v_reusejp_2977_:
{
lean_object* v___x_2979_; 
v___x_2979_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants(v_x_2969_, v_derivedValMap_2966_, v___x_2978_, v___f_2967_);
return v___x_2979_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(lean_object* v_a_2983_, lean_object* v_a_2984_){
_start:
{
lean_object* v_borrowedValues_2986_; lean_object* v_derivedValMap_2987_; lean_object* v___f_2988_; lean_object* v___x_2989_; lean_object* v___x_2990_; lean_object* v___f_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; lean_object* v___x_2994_; lean_object* v___x_2995_; lean_object* v___x_2996_; lean_object* v___x_2997_; 
v_borrowedValues_2986_ = lean_ctor_get(v_a_2983_, 0);
v_derivedValMap_2987_ = lean_ctor_get(v_a_2983_, 1);
v___f_2988_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___closed__0));
v___x_2989_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_2990_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc_ref(v_derivedValMap_2987_);
v___f_2991_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1), 6, 4);
lean_closure_set(v___f_2991_, 0, v___x_2989_);
lean_closure_set(v___f_2991_, 1, v___x_2990_);
lean_closure_set(v___f_2991_, 2, v_derivedValMap_2987_);
lean_closure_set(v___f_2991_, 3, v___f_2988_);
v___x_2992_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_2993_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_2991_, v___x_2992_, v_borrowedValues_2986_);
v___x_2994_ = lean_st_ref_take(v_a_2984_);
lean_dec(v___x_2994_);
v___x_2995_ = lean_box(0);
v___x_2996_ = lean_st_ref_put(v_a_2984_, v___x_2993_);
v___x_2997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2997_, 0, v___x_2995_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___boxed(lean_object* v_a_2998_, lean_object* v_a_2999_, lean_object* v___y_3000_){
_start:
{
lean_object* v_res_3001_; 
v_res_3001_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg(v_a_2998_, v_a_2999_);
lean_dec(v_a_2999_);
lean_dec_ref(v_a_2998_);
return v_res_3001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(lean_object* v_a_3002_, lean_object* v_a_3003_, lean_object* v_a_3004_, lean_object* v_a_3005_, lean_object* v_a_3006_, lean_object* v_a_3007_){
_start:
{
lean_object* v_borrowedValues_3009_; lean_object* v_derivedValMap_3010_; lean_object* v___f_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___f_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; 
v_borrowedValues_3009_ = lean_ctor_get(v_a_3002_, 0);
v_derivedValMap_3010_ = lean_ctor_get(v_a_3002_, 1);
v___f_3011_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___closed__0));
v___x_3012_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__0));
v___x_3013_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedValue___redArg___closed__1));
lean_inc_ref(v_derivedValMap_3010_);
v___f_3014_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___redArg___lam__1), 6, 4);
lean_closure_set(v___f_3014_, 0, v___x_3012_);
lean_closure_set(v___f_3014_, 1, v___x_3013_);
lean_closure_set(v___f_3014_, 2, v_derivedValMap_3010_);
lean_closure_set(v___f_3014_, 3, v___f_3011_);
v___x_3015_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_3016_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_3014_, v___x_3015_, v_borrowedValues_3009_);
v___x_3017_ = lean_st_ref_take(v_a_3003_);
lean_dec(v___x_3017_);
v___x_3018_ = lean_box(0);
v___x_3019_ = lean_st_ref_put(v_a_3003_, v___x_3016_);
v___x_3020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3018_);
return v___x_3020_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars___boxed(lean_object* v_a_3021_, lean_object* v_a_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v___y_3027_){
_start:
{
lean_object* v_res_3028_; 
v_res_3028_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_setRetLiveVars(v_a_3021_, v_a_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_);
lean_dec(v_a_3026_);
lean_dec_ref(v_a_3025_);
lean_dec(v_a_3024_);
lean_dec_ref(v_a_3023_);
lean_dec(v_a_3022_);
lean_dec_ref(v_a_3021_);
return v_res_3028_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(lean_object* v_fvarId_3029_, lean_object* v_k_3030_, lean_object* v_n_3031_, lean_object* v_a_3032_){
_start:
{
lean_object* v___x_3034_; uint8_t v___x_3035_; 
v___x_3034_ = lean_unsigned_to_nat(0u);
v___x_3035_ = lean_nat_dec_eq(v_n_3031_, v___x_3034_);
if (v___x_3035_ == 0)
{
lean_object* v_varMap_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; uint8_t v___y_3040_; uint8_t v_isDefiniteRef_3044_; 
v_varMap_3036_ = lean_ctor_get(v_a_3032_, 2);
v___x_3037_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3029_);
lean_inc(v_varMap_3036_);
v___x_3038_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3037_, v_varMap_3036_, v_fvarId_3029_);
v_isDefiniteRef_3044_ = lean_ctor_get_uint8(v___x_3038_, sizeof(void*)*2 + 1);
if (v_isDefiniteRef_3044_ == 0)
{
uint8_t v___x_3045_; 
v___x_3045_ = 1;
v___y_3040_ = v___x_3045_;
goto v___jp_3039_;
}
else
{
v___y_3040_ = v___x_3035_;
goto v___jp_3039_;
}
v___jp_3039_:
{
uint8_t v_persistent_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; 
v_persistent_3041_ = lean_ctor_get_uint8(v___x_3038_, sizeof(void*)*2 + 2);
lean_dec(v___x_3038_);
v___x_3042_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3042_, 0, v_fvarId_3029_);
lean_ctor_set(v___x_3042_, 1, v_n_3031_);
lean_ctor_set(v___x_3042_, 2, v_k_3030_);
lean_ctor_set_uint8(v___x_3042_, sizeof(void*)*3, v___y_3040_);
lean_ctor_set_uint8(v___x_3042_, sizeof(void*)*3 + 1, v_persistent_3041_);
v___x_3043_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
return v___x_3043_;
}
}
else
{
lean_object* v___x_3046_; 
lean_dec(v_n_3031_);
lean_dec(v_fvarId_3029_);
v___x_3046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3046_, 0, v_k_3030_);
return v___x_3046_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg___boxed(lean_object* v_fvarId_3047_, lean_object* v_k_3048_, lean_object* v_n_3049_, lean_object* v_a_3050_, lean_object* v___y_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___redArg(v_fvarId_3047_, v_k_3048_, v_n_3049_, v_a_3050_);
lean_dec_ref(v_a_3050_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(lean_object* v_fvarId_3053_, lean_object* v_k_3054_, lean_object* v_n_3055_, lean_object* v_a_3056_, lean_object* v_a_3057_, lean_object* v_a_3058_, lean_object* v_a_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_){
_start:
{
lean_object* v___x_3063_; uint8_t v___x_3064_; 
v___x_3063_ = lean_unsigned_to_nat(0u);
v___x_3064_ = lean_nat_dec_eq(v_n_3055_, v___x_3063_);
if (v___x_3064_ == 0)
{
lean_object* v_varMap_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; uint8_t v___y_3069_; uint8_t v_isDefiniteRef_3073_; 
v_varMap_3065_ = lean_ctor_get(v_a_3056_, 2);
v___x_3066_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3053_);
lean_inc(v_varMap_3065_);
v___x_3067_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3066_, v_varMap_3065_, v_fvarId_3053_);
v_isDefiniteRef_3073_ = lean_ctor_get_uint8(v___x_3067_, sizeof(void*)*2 + 1);
if (v_isDefiniteRef_3073_ == 0)
{
uint8_t v___x_3074_; 
v___x_3074_ = 1;
v___y_3069_ = v___x_3074_;
goto v___jp_3068_;
}
else
{
v___y_3069_ = v___x_3064_;
goto v___jp_3068_;
}
v___jp_3068_:
{
uint8_t v_persistent_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; 
v_persistent_3070_ = lean_ctor_get_uint8(v___x_3067_, sizeof(void*)*2 + 2);
lean_dec(v___x_3067_);
v___x_3071_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3071_, 0, v_fvarId_3053_);
lean_ctor_set(v___x_3071_, 1, v_n_3055_);
lean_ctor_set(v___x_3071_, 2, v_k_3054_);
lean_ctor_set_uint8(v___x_3071_, sizeof(void*)*3, v___y_3069_);
lean_ctor_set_uint8(v___x_3071_, sizeof(void*)*3 + 1, v_persistent_3070_);
v___x_3072_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3072_, 0, v___x_3071_);
return v___x_3072_;
}
}
else
{
lean_object* v___x_3075_; 
lean_dec(v_n_3055_);
lean_dec(v_fvarId_3053_);
v___x_3075_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3075_, 0, v_k_3054_);
return v___x_3075_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc___boxed(lean_object* v_fvarId_3076_, lean_object* v_k_3077_, lean_object* v_n_3078_, lean_object* v_a_3079_, lean_object* v_a_3080_, lean_object* v_a_3081_, lean_object* v_a_3082_, lean_object* v_a_3083_, lean_object* v_a_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v_res_3086_; 
v_res_3086_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addInc(v_fvarId_3076_, v_k_3077_, v_n_3078_, v_a_3079_, v_a_3080_, v_a_3081_, v_a_3082_, v_a_3083_, v_a_3084_);
lean_dec(v_a_3084_);
lean_dec_ref(v_a_3083_);
lean_dec(v_a_3082_);
lean_dec_ref(v_a_3081_);
lean_dec(v_a_3080_);
lean_dec_ref(v_a_3079_);
return v_res_3086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(lean_object* v_fvarId_3087_, lean_object* v_k_3088_, lean_object* v_a_3089_){
_start:
{
lean_object* v_varMap_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v_ctorInfo_3094_; 
v_varMap_3091_ = lean_ctor_get(v_a_3089_, 2);
v___x_3092_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3087_);
lean_inc(v_varMap_3091_);
v___x_3093_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3092_, v_varMap_3091_, v_fvarId_3087_);
v_ctorInfo_3094_ = lean_ctor_get(v___x_3093_, 1);
lean_inc(v_ctorInfo_3094_);
if (lean_obj_tag(v_ctorInfo_3094_) == 0)
{
uint8_t v_isDefiniteRef_3095_; uint8_t v_persistent_3096_; lean_object* v___x_3097_; uint8_t v___y_3099_; 
v_isDefiniteRef_3095_ = lean_ctor_get_uint8(v___x_3093_, sizeof(void*)*2 + 1);
v_persistent_3096_ = lean_ctor_get_uint8(v___x_3093_, sizeof(void*)*2 + 2);
lean_dec(v___x_3093_);
v___x_3097_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3095_ == 0)
{
uint8_t v___x_3103_; 
v___x_3103_ = 1;
v___y_3099_ = v___x_3103_;
goto v___jp_3098_;
}
else
{
uint8_t v___x_3104_; 
v___x_3104_ = 0;
v___y_3099_ = v___x_3104_;
goto v___jp_3098_;
}
v___jp_3098_:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3100_ = lean_box(0);
v___x_3101_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_3101_, 0, v_fvarId_3087_);
lean_ctor_set(v___x_3101_, 1, v___x_3097_);
lean_ctor_set(v___x_3101_, 2, v___x_3100_);
lean_ctor_set(v___x_3101_, 3, v_k_3088_);
lean_ctor_set_uint8(v___x_3101_, sizeof(void*)*4, v___y_3099_);
lean_ctor_set_uint8(v___x_3101_, sizeof(void*)*4 + 1, v_persistent_3096_);
v___x_3102_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3101_);
return v___x_3102_;
}
}
else
{
uint8_t v_persistent_3105_; lean_object* v_val_3106_; lean_object* v___x_3108_; uint8_t v_isShared_3109_; uint8_t v_isSharedCheck_3120_; 
v_persistent_3105_ = lean_ctor_get_uint8(v___x_3093_, sizeof(void*)*2 + 2);
lean_dec(v___x_3093_);
v_val_3106_ = lean_ctor_get(v_ctorInfo_3094_, 0);
v_isSharedCheck_3120_ = !lean_is_exclusive(v_ctorInfo_3094_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3108_ = v_ctorInfo_3094_;
v_isShared_3109_ = v_isSharedCheck_3120_;
goto v_resetjp_3107_;
}
else
{
lean_inc(v_val_3106_);
lean_dec(v_ctorInfo_3094_);
v___x_3108_ = lean_box(0);
v_isShared_3109_ = v_isSharedCheck_3120_;
goto v_resetjp_3107_;
}
v_resetjp_3107_:
{
uint8_t v___x_3110_; 
v___x_3110_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_val_3106_);
if (v___x_3110_ == 0)
{
lean_object* v___x_3111_; 
lean_del_object(v___x_3108_);
lean_dec(v_val_3106_);
lean_dec(v_fvarId_3087_);
v___x_3111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3111_, 0, v_k_3088_);
return v___x_3111_;
}
else
{
lean_object* v_size_3112_; lean_object* v___x_3113_; uint8_t v___x_3114_; lean_object* v___x_3116_; 
v_size_3112_ = lean_ctor_get(v_val_3106_, 2);
lean_inc(v_size_3112_);
lean_dec(v_val_3106_);
v___x_3113_ = lean_unsigned_to_nat(1u);
v___x_3114_ = 0;
if (v_isShared_3109_ == 0)
{
lean_ctor_set(v___x_3108_, 0, v_size_3112_);
v___x_3116_ = v___x_3108_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3119_; 
v_reuseFailAlloc_3119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3119_, 0, v_size_3112_);
v___x_3116_ = v_reuseFailAlloc_3119_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; 
v___x_3117_ = lean_alloc_ctor(12, 4, 2);
lean_ctor_set(v___x_3117_, 0, v_fvarId_3087_);
lean_ctor_set(v___x_3117_, 1, v___x_3113_);
lean_ctor_set(v___x_3117_, 2, v___x_3116_);
lean_ctor_set(v___x_3117_, 3, v_k_3088_);
lean_ctor_set_uint8(v___x_3117_, sizeof(void*)*4, v___x_3114_);
lean_ctor_set_uint8(v___x_3117_, sizeof(void*)*4 + 1, v_persistent_3105_);
v___x_3118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3118_, 0, v___x_3117_);
return v___x_3118_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg___boxed(lean_object* v_fvarId_3121_, lean_object* v_k_3122_, lean_object* v_a_3123_, lean_object* v___y_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_3121_, v_k_3122_, v_a_3123_);
lean_dec_ref(v_a_3123_);
return v_res_3125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(lean_object* v_fvarId_3126_, lean_object* v_k_3127_, lean_object* v_a_3128_, lean_object* v_a_3129_, lean_object* v_a_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_, lean_object* v_a_3133_){
_start:
{
lean_object* v___x_3135_; 
v___x_3135_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_3126_, v_k_3127_, v_a_3128_);
return v___x_3135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___boxed(lean_object* v_fvarId_3136_, lean_object* v_k_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v_a_3141_, lean_object* v_a_3142_, lean_object* v_a_3143_, lean_object* v___y_3144_){
_start:
{
lean_object* v_res_3145_; 
v_res_3145_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec(v_fvarId_3136_, v_k_3137_, v_a_3138_, v_a_3139_, v_a_3140_, v_a_3141_, v_a_3142_, v_a_3143_);
lean_dec(v_a_3143_);
lean_dec_ref(v_a_3142_);
lean_dec(v_a_3141_);
lean_dec_ref(v_a_3140_);
lean_dec(v_a_3139_);
lean_dec_ref(v_a_3138_);
return v_res_3145_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(lean_object* v_x_3146_, lean_object* v_x_3147_){
_start:
{
lean_object* v_snd_3148_; lean_object* v_snd_3149_; uint8_t v___x_3150_; 
v_snd_3148_ = lean_ctor_get(v_x_3146_, 1);
v_snd_3149_ = lean_ctor_get(v_x_3147_, 1);
v___x_3150_ = lean_nat_dec_lt(v_snd_3148_, v_snd_3149_);
return v___x_3150_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0___boxed(lean_object* v_x_3151_, lean_object* v_x_3152_){
_start:
{
uint8_t v_res_3153_; lean_object* v_r_3154_; 
v_res_3153_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v_x_3151_, v_x_3152_);
lean_dec_ref(v_x_3152_);
lean_dec_ref(v_x_3151_);
v_r_3154_ = lean_box(v_res_3153_);
return v_r_3154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(lean_object* v_hi_3155_, lean_object* v_pivot_3156_, lean_object* v_as_3157_, lean_object* v_i_3158_, lean_object* v_k_3159_){
_start:
{
uint8_t v___x_3160_; 
v___x_3160_ = lean_nat_dec_lt(v_k_3159_, v_hi_3155_);
if (v___x_3160_ == 0)
{
lean_object* v___x_3161_; lean_object* v___x_3162_; 
lean_dec(v_k_3159_);
v___x_3161_ = lean_array_fswap(v_as_3157_, v_i_3158_, v_hi_3155_);
v___x_3162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3162_, 0, v_i_3158_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
return v___x_3162_;
}
else
{
lean_object* v___x_3163_; lean_object* v_snd_3164_; lean_object* v_snd_3165_; uint8_t v___x_3166_; 
v___x_3163_ = lean_array_fget_borrowed(v_as_3157_, v_k_3159_);
v_snd_3164_ = lean_ctor_get(v___x_3163_, 1);
v_snd_3165_ = lean_ctor_get(v_pivot_3156_, 1);
v___x_3166_ = lean_nat_dec_lt(v_snd_3164_, v_snd_3165_);
if (v___x_3166_ == 0)
{
lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3167_ = lean_unsigned_to_nat(1u);
v___x_3168_ = lean_nat_add(v_k_3159_, v___x_3167_);
lean_dec(v_k_3159_);
v_k_3159_ = v___x_3168_;
goto _start;
}
else
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v___x_3173_; 
v___x_3170_ = lean_array_fswap(v_as_3157_, v_i_3158_, v_k_3159_);
v___x_3171_ = lean_unsigned_to_nat(1u);
v___x_3172_ = lean_nat_add(v_i_3158_, v___x_3171_);
lean_dec(v_i_3158_);
v___x_3173_ = lean_nat_add(v_k_3159_, v___x_3171_);
lean_dec(v_k_3159_);
v_as_3157_ = v___x_3170_;
v_i_3158_ = v___x_3172_;
v_k_3159_ = v___x_3173_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg___boxed(lean_object* v_hi_3175_, lean_object* v_pivot_3176_, lean_object* v_as_3177_, lean_object* v_i_3178_, lean_object* v_k_3179_){
_start:
{
lean_object* v_res_3180_; 
v_res_3180_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(v_hi_3175_, v_pivot_3176_, v_as_3177_, v_i_3178_, v_k_3179_);
lean_dec_ref(v_pivot_3176_);
lean_dec(v_hi_3175_);
return v_res_3180_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(lean_object* v_n_3181_, lean_object* v_as_3182_, lean_object* v_lo_3183_, lean_object* v_hi_3184_){
_start:
{
lean_object* v___y_3186_; uint8_t v___x_3196_; 
v___x_3196_ = lean_nat_dec_lt(v_lo_3183_, v_hi_3184_);
if (v___x_3196_ == 0)
{
lean_dec(v_lo_3183_);
return v_as_3182_;
}
else
{
lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v_mid_3199_; lean_object* v___y_3201_; lean_object* v___y_3207_; lean_object* v___x_3212_; lean_object* v___x_3213_; uint8_t v___x_3214_; 
v___x_3197_ = lean_nat_add(v_lo_3183_, v_hi_3184_);
v___x_3198_ = lean_unsigned_to_nat(1u);
v_mid_3199_ = lean_nat_shiftr(v___x_3197_, v___x_3198_);
lean_dec(v___x_3197_);
v___x_3212_ = lean_array_fget_borrowed(v_as_3182_, v_mid_3199_);
v___x_3213_ = lean_array_fget_borrowed(v_as_3182_, v_lo_3183_);
v___x_3214_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v___x_3212_, v___x_3213_);
if (v___x_3214_ == 0)
{
v___y_3207_ = v_as_3182_;
goto v___jp_3206_;
}
else
{
lean_object* v___x_3215_; 
v___x_3215_ = lean_array_fswap(v_as_3182_, v_lo_3183_, v_mid_3199_);
v___y_3207_ = v___x_3215_;
goto v___jp_3206_;
}
v___jp_3200_:
{
lean_object* v___x_3202_; lean_object* v___x_3203_; uint8_t v___x_3204_; 
v___x_3202_ = lean_array_fget_borrowed(v___y_3201_, v_mid_3199_);
v___x_3203_ = lean_array_fget_borrowed(v___y_3201_, v_hi_3184_);
v___x_3204_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v___x_3202_, v___x_3203_);
if (v___x_3204_ == 0)
{
lean_dec(v_mid_3199_);
v___y_3186_ = v___y_3201_;
goto v___jp_3185_;
}
else
{
lean_object* v___x_3205_; 
v___x_3205_ = lean_array_fswap(v___y_3201_, v_mid_3199_, v_hi_3184_);
lean_dec(v_mid_3199_);
v___y_3186_ = v___x_3205_;
goto v___jp_3185_;
}
}
v___jp_3206_:
{
lean_object* v___x_3208_; lean_object* v___x_3209_; uint8_t v___x_3210_; 
v___x_3208_ = lean_array_fget_borrowed(v___y_3207_, v_hi_3184_);
v___x_3209_ = lean_array_fget_borrowed(v___y_3207_, v_lo_3183_);
v___x_3210_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___lam__0(v___x_3208_, v___x_3209_);
if (v___x_3210_ == 0)
{
v___y_3201_ = v___y_3207_;
goto v___jp_3200_;
}
else
{
lean_object* v___x_3211_; 
v___x_3211_ = lean_array_fswap(v___y_3207_, v_lo_3183_, v_hi_3184_);
v___y_3201_ = v___x_3211_;
goto v___jp_3200_;
}
}
}
v___jp_3185_:
{
lean_object* v_pivot_3187_; lean_object* v___x_3188_; lean_object* v_fst_3189_; lean_object* v_snd_3190_; uint8_t v___x_3191_; 
v_pivot_3187_ = lean_array_fget(v___y_3186_, v_hi_3184_);
lean_inc_n(v_lo_3183_, 2);
v___x_3188_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(v_hi_3184_, v_pivot_3187_, v___y_3186_, v_lo_3183_, v_lo_3183_);
lean_dec(v_pivot_3187_);
v_fst_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_fst_3189_);
v_snd_3190_ = lean_ctor_get(v___x_3188_, 1);
lean_inc(v_snd_3190_);
lean_dec_ref(v___x_3188_);
v___x_3191_ = lean_nat_dec_le(v_hi_3184_, v_fst_3189_);
if (v___x_3191_ == 0)
{
lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3192_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_n_3181_, v_snd_3190_, v_lo_3183_, v_fst_3189_);
v___x_3193_ = lean_unsigned_to_nat(1u);
v___x_3194_ = lean_nat_add(v_fst_3189_, v___x_3193_);
lean_dec(v_fst_3189_);
v_as_3182_ = v___x_3192_;
v_lo_3183_ = v___x_3194_;
goto _start;
}
else
{
lean_dec(v_fst_3189_);
lean_dec(v_lo_3183_);
return v_snd_3190_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg___boxed(lean_object* v_n_3216_, lean_object* v_as_3217_, lean_object* v_lo_3218_, lean_object* v_hi_3219_){
_start:
{
lean_object* v_res_3220_; 
v_res_3220_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_n_3216_, v_as_3217_, v_lo_3218_, v_hi_3219_);
lean_dec(v_hi_3219_);
lean_dec(v_n_3216_);
return v_res_3220_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(lean_object* v_altLiveVars_3221_, lean_object* v_a_3222_, lean_object* v_a_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_){
_start:
{
if (lean_obj_tag(v_a_3222_) == 0)
{
lean_object* v___x_3227_; lean_object* v___x_3228_; 
v___x_3227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3227_, 0, v_a_3223_);
v___x_3228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3227_);
return v___x_3228_;
}
else
{
lean_object* v_key_3229_; lean_object* v_tail_3230_; lean_object* v_fst_3231_; lean_object* v_snd_3232_; lean_object* v___x_3234_; uint8_t v_isShared_3235_; uint8_t v_isSharedCheck_3284_; 
v_key_3229_ = lean_ctor_get(v_a_3222_, 0);
lean_inc(v_key_3229_);
v_tail_3230_ = lean_ctor_get(v_a_3222_, 2);
lean_inc(v_tail_3230_);
lean_dec_ref_known(v_a_3222_, 3);
v_fst_3231_ = lean_ctor_get(v_a_3223_, 0);
v_snd_3232_ = lean_ctor_get(v_a_3223_, 1);
v_isSharedCheck_3284_ = !lean_is_exclusive(v_a_3223_);
if (v_isSharedCheck_3284_ == 0)
{
v___x_3234_ = v_a_3223_;
v_isShared_3235_ = v_isSharedCheck_3284_;
goto v_resetjp_3233_;
}
else
{
lean_inc(v_snd_3232_);
lean_inc(v_fst_3231_);
lean_dec(v_a_3223_);
v___x_3234_ = lean_box(0);
v_isShared_3235_ = v_isSharedCheck_3284_;
goto v_resetjp_3233_;
}
v_resetjp_3233_:
{
lean_object* v_varMap_3236_; lean_object* v_vars_3237_; lean_object* v_borrows_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; uint8_t v___x_3241_; 
v_varMap_3236_ = lean_ctor_get(v___y_3224_, 2);
v_vars_3237_ = lean_ctor_get(v_altLiveVars_3221_, 0);
v_borrows_3238_ = lean_ctor_get(v_altLiveVars_3221_, 1);
v___x_3239_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_key_3229_);
lean_inc(v_varMap_3236_);
v___x_3240_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3239_, v_varMap_3236_, v_key_3229_);
v___x_3241_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_3237_, v_key_3229_);
if (v___x_3241_ == 0)
{
lean_object* v___x_3242_; uint8_t v_isPossibleRef_3248_; 
v___x_3242_ = lean_st_ref_get(v___y_3225_);
v_isPossibleRef_3248_ = lean_ctor_get_uint8(v___x_3240_, sizeof(void*)*2);
if (v_isPossibleRef_3248_ == 0)
{
lean_dec(v___x_3242_);
lean_dec(v___x_3240_);
lean_dec(v_key_3229_);
goto v___jp_3243_;
}
else
{
lean_object* v_idx_3249_; lean_object* v_borrows_3250_; lean_object* v___x_3252_; uint8_t v_isShared_3253_; uint8_t v_isSharedCheck_3261_; 
v_idx_3249_ = lean_ctor_get(v___x_3240_, 0);
lean_inc(v_idx_3249_);
lean_dec(v___x_3240_);
v_borrows_3250_ = lean_ctor_get(v___x_3242_, 1);
v_isSharedCheck_3261_ = !lean_is_exclusive(v___x_3242_);
if (v_isSharedCheck_3261_ == 0)
{
lean_object* v_unused_3262_; 
v_unused_3262_ = lean_ctor_get(v___x_3242_, 0);
lean_dec(v_unused_3262_);
v___x_3252_ = v___x_3242_;
v_isShared_3253_ = v_isSharedCheck_3261_;
goto v_resetjp_3251_;
}
else
{
lean_inc(v_borrows_3250_);
lean_dec(v___x_3242_);
v___x_3252_ = lean_box(0);
v_isShared_3253_ = v_isSharedCheck_3261_;
goto v_resetjp_3251_;
}
v_resetjp_3251_:
{
uint8_t v___x_3254_; 
v___x_3254_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3250_, v_key_3229_);
lean_dec_ref(v_borrows_3250_);
if (v___x_3254_ == 0)
{
lean_object* v___x_3256_; 
lean_del_object(v___x_3234_);
if (v_isShared_3253_ == 0)
{
lean_ctor_set(v___x_3252_, 1, v_idx_3249_);
lean_ctor_set(v___x_3252_, 0, v_key_3229_);
v___x_3256_ = v___x_3252_;
goto v_reusejp_3255_;
}
else
{
lean_object* v_reuseFailAlloc_3260_; 
v_reuseFailAlloc_3260_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3260_, 0, v_key_3229_);
lean_ctor_set(v_reuseFailAlloc_3260_, 1, v_idx_3249_);
v___x_3256_ = v_reuseFailAlloc_3260_;
goto v_reusejp_3255_;
}
v_reusejp_3255_:
{
lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3257_ = lean_array_push(v_snd_3232_, v___x_3256_);
v___x_3258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3258_, 0, v_fst_3231_);
lean_ctor_set(v___x_3258_, 1, v___x_3257_);
v_a_3222_ = v_tail_3230_;
v_a_3223_ = v___x_3258_;
goto _start;
}
}
else
{
lean_del_object(v___x_3252_);
lean_dec(v_idx_3249_);
lean_dec(v_key_3229_);
goto v___jp_3243_;
}
}
}
v___jp_3243_:
{
lean_object* v___x_3245_; 
if (v_isShared_3235_ == 0)
{
v___x_3245_ = v___x_3234_;
goto v_reusejp_3244_;
}
else
{
lean_object* v_reuseFailAlloc_3247_; 
v_reuseFailAlloc_3247_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3247_, 0, v_fst_3231_);
lean_ctor_set(v_reuseFailAlloc_3247_, 1, v_snd_3232_);
v___x_3245_ = v_reuseFailAlloc_3247_;
goto v_reusejp_3244_;
}
v_reusejp_3244_:
{
v_a_3222_ = v_tail_3230_;
v_a_3223_ = v___x_3245_;
goto _start;
}
}
}
else
{
lean_object* v___x_3263_; lean_object* v_borrows_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3282_; 
v___x_3263_ = lean_st_ref_get(v___y_3225_);
v_borrows_3269_ = lean_ctor_get(v___x_3263_, 1);
v_isSharedCheck_3282_ = !lean_is_exclusive(v___x_3263_);
if (v_isSharedCheck_3282_ == 0)
{
lean_object* v_unused_3283_; 
v_unused_3283_ = lean_ctor_get(v___x_3263_, 0);
lean_dec(v_unused_3283_);
v___x_3271_ = v___x_3263_;
v_isShared_3272_ = v_isSharedCheck_3282_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_borrows_3269_);
lean_dec(v___x_3263_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3282_;
goto v_resetjp_3270_;
}
v___jp_3264_:
{
lean_object* v___x_3266_; 
if (v_isShared_3235_ == 0)
{
v___x_3266_ = v___x_3234_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3268_; 
v_reuseFailAlloc_3268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3268_, 0, v_fst_3231_);
lean_ctor_set(v_reuseFailAlloc_3268_, 1, v_snd_3232_);
v___x_3266_ = v_reuseFailAlloc_3268_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
v_a_3222_ = v_tail_3230_;
v_a_3223_ = v___x_3266_;
goto _start;
}
}
v_resetjp_3270_:
{
uint8_t v___x_3273_; 
v___x_3273_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3269_, v_key_3229_);
lean_dec_ref(v_borrows_3269_);
if (v___x_3273_ == 0)
{
lean_del_object(v___x_3271_);
lean_dec(v___x_3240_);
lean_dec(v_key_3229_);
goto v___jp_3264_;
}
else
{
uint8_t v___x_3274_; 
v___x_3274_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3238_, v_key_3229_);
if (v___x_3274_ == 0)
{
if (v___x_3273_ == 0)
{
lean_del_object(v___x_3271_);
lean_dec(v___x_3240_);
lean_dec(v_key_3229_);
goto v___jp_3264_;
}
else
{
lean_object* v_idx_3275_; lean_object* v___x_3277_; 
lean_del_object(v___x_3234_);
v_idx_3275_ = lean_ctor_get(v___x_3240_, 0);
lean_inc(v_idx_3275_);
lean_dec(v___x_3240_);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 1, v_idx_3275_);
lean_ctor_set(v___x_3271_, 0, v_key_3229_);
v___x_3277_ = v___x_3271_;
goto v_reusejp_3276_;
}
else
{
lean_object* v_reuseFailAlloc_3281_; 
v_reuseFailAlloc_3281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3281_, 0, v_key_3229_);
lean_ctor_set(v_reuseFailAlloc_3281_, 1, v_idx_3275_);
v___x_3277_ = v_reuseFailAlloc_3281_;
goto v_reusejp_3276_;
}
v_reusejp_3276_:
{
lean_object* v___x_3278_; lean_object* v___x_3279_; 
v___x_3278_ = lean_array_push(v_fst_3231_, v___x_3277_);
v___x_3279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3279_, 0, v___x_3278_);
lean_ctor_set(v___x_3279_, 1, v_snd_3232_);
v_a_3222_ = v_tail_3230_;
v_a_3223_ = v___x_3279_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_3271_);
lean_dec(v___x_3240_);
lean_dec(v_key_3229_);
goto v___jp_3264_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg___boxed(lean_object* v_altLiveVars_3285_, lean_object* v_a_3286_, lean_object* v_a_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(v_altLiveVars_3285_, v_a_3286_, v_a_3287_, v___y_3288_, v___y_3289_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec_ref(v_altLiveVars_3285_);
return v_res_3291_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(lean_object* v_altLiveVars_3292_, lean_object* v_as_3293_, size_t v_sz_3294_, size_t v_i_3295_, lean_object* v_b_3296_, lean_object* v___y_3297_, lean_object* v___y_3298_, lean_object* v___y_3299_, lean_object* v___y_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_){
_start:
{
uint8_t v___x_3304_; 
v___x_3304_ = lean_usize_dec_lt(v_i_3295_, v_sz_3294_);
if (v___x_3304_ == 0)
{
lean_object* v___x_3305_; 
v___x_3305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3305_, 0, v_b_3296_);
return v___x_3305_;
}
else
{
lean_object* v_a_3306_; lean_object* v___x_3307_; 
v_a_3306_ = lean_array_uget_borrowed(v_as_3293_, v_i_3295_);
lean_inc(v_a_3306_);
v___x_3307_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(v_altLiveVars_3292_, v_a_3306_, v_b_3296_, v___y_3297_, v___y_3298_);
if (lean_obj_tag(v___x_3307_) == 0)
{
lean_object* v_a_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3320_; 
v_a_3308_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3320_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3320_ == 0)
{
v___x_3310_ = v___x_3307_;
v_isShared_3311_ = v_isSharedCheck_3320_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_a_3308_);
lean_dec(v___x_3307_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3320_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
if (lean_obj_tag(v_a_3308_) == 0)
{
lean_object* v_a_3312_; lean_object* v___x_3314_; 
v_a_3312_ = lean_ctor_get(v_a_3308_, 0);
lean_inc(v_a_3312_);
lean_dec_ref_known(v_a_3308_, 1);
if (v_isShared_3311_ == 0)
{
lean_ctor_set(v___x_3310_, 0, v_a_3312_);
v___x_3314_ = v___x_3310_;
goto v_reusejp_3313_;
}
else
{
lean_object* v_reuseFailAlloc_3315_; 
v_reuseFailAlloc_3315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3315_, 0, v_a_3312_);
v___x_3314_ = v_reuseFailAlloc_3315_;
goto v_reusejp_3313_;
}
v_reusejp_3313_:
{
return v___x_3314_;
}
}
else
{
lean_object* v_a_3316_; size_t v___x_3317_; size_t v___x_3318_; 
lean_del_object(v___x_3310_);
v_a_3316_ = lean_ctor_get(v_a_3308_, 0);
lean_inc(v_a_3316_);
lean_dec_ref_known(v_a_3308_, 1);
v___x_3317_ = ((size_t)1ULL);
v___x_3318_ = lean_usize_add(v_i_3295_, v___x_3317_);
v_i_3295_ = v___x_3318_;
v_b_3296_ = v_a_3316_;
goto _start;
}
}
}
else
{
lean_object* v_a_3321_; lean_object* v___x_3323_; uint8_t v_isShared_3324_; uint8_t v_isSharedCheck_3328_; 
v_a_3321_ = lean_ctor_get(v___x_3307_, 0);
v_isSharedCheck_3328_ = !lean_is_exclusive(v___x_3307_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3323_ = v___x_3307_;
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
else
{
lean_inc(v_a_3321_);
lean_dec(v___x_3307_);
v___x_3323_ = lean_box(0);
v_isShared_3324_ = v_isSharedCheck_3328_;
goto v_resetjp_3322_;
}
v_resetjp_3322_:
{
lean_object* v___x_3326_; 
if (v_isShared_3324_ == 0)
{
v___x_3326_ = v___x_3323_;
goto v_reusejp_3325_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_a_3321_);
v___x_3326_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3325_;
}
v_reusejp_3325_:
{
return v___x_3326_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1___boxed(lean_object* v_altLiveVars_3329_, lean_object* v_as_3330_, lean_object* v_sz_3331_, lean_object* v_i_3332_, lean_object* v_b_3333_, lean_object* v___y_3334_, lean_object* v___y_3335_, lean_object* v___y_3336_, lean_object* v___y_3337_, lean_object* v___y_3338_, lean_object* v___y_3339_, lean_object* v___y_3340_){
_start:
{
size_t v_sz_boxed_3341_; size_t v_i_boxed_3342_; lean_object* v_res_3343_; 
v_sz_boxed_3341_ = lean_unbox_usize(v_sz_3331_);
lean_dec(v_sz_3331_);
v_i_boxed_3342_ = lean_unbox_usize(v_i_3332_);
lean_dec(v_i_3332_);
v_res_3343_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(v_altLiveVars_3329_, v_as_3330_, v_sz_boxed_3341_, v_i_boxed_3342_, v_b_3333_, v___y_3334_, v___y_3335_, v___y_3336_, v___y_3337_, v___y_3338_, v___y_3339_);
lean_dec(v___y_3339_);
lean_dec_ref(v___y_3338_);
lean_dec(v___y_3337_);
lean_dec_ref(v___y_3336_);
lean_dec(v___y_3335_);
lean_dec_ref(v___y_3334_);
lean_dec_ref(v_as_3330_);
lean_dec_ref(v_altLiveVars_3329_);
return v_res_3343_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(lean_object* v_as_3344_, size_t v_i_3345_, size_t v_stop_3346_, lean_object* v_b_3347_, lean_object* v___y_3348_){
_start:
{
uint8_t v___x_3350_; 
v___x_3350_ = lean_usize_dec_eq(v_i_3345_, v_stop_3346_);
if (v___x_3350_ == 0)
{
lean_object* v___x_3351_; lean_object* v_fst_3352_; lean_object* v___x_3353_; 
v___x_3351_ = lean_array_uget_borrowed(v_as_3344_, v_i_3345_);
v_fst_3352_ = lean_ctor_get(v___x_3351_, 0);
lean_inc(v_fst_3352_);
v___x_3353_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fst_3352_, v_b_3347_, v___y_3348_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v_a_3354_; size_t v___x_3355_; size_t v___x_3356_; 
v_a_3354_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3354_);
lean_dec_ref_known(v___x_3353_, 1);
v___x_3355_ = ((size_t)1ULL);
v___x_3356_ = lean_usize_add(v_i_3345_, v___x_3355_);
v_i_3345_ = v___x_3356_;
v_b_3347_ = v_a_3354_;
goto _start;
}
else
{
return v___x_3353_;
}
}
else
{
lean_object* v___x_3358_; 
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v_b_3347_);
return v___x_3358_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg___boxed(lean_object* v_as_3359_, lean_object* v_i_3360_, lean_object* v_stop_3361_, lean_object* v_b_3362_, lean_object* v___y_3363_, lean_object* v___y_3364_){
_start:
{
size_t v_i_boxed_3365_; size_t v_stop_boxed_3366_; lean_object* v_res_3367_; 
v_i_boxed_3365_ = lean_unbox_usize(v_i_3360_);
lean_dec(v_i_3360_);
v_stop_boxed_3366_ = lean_unbox_usize(v_stop_3361_);
lean_dec(v_stop_3361_);
v_res_3367_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_as_3359_, v_i_boxed_3365_, v_stop_boxed_3366_, v_b_3362_, v___y_3363_);
lean_dec_ref(v___y_3363_);
lean_dec_ref(v_as_3359_);
return v_res_3367_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(lean_object* v_as_3368_, size_t v_i_3369_, size_t v_stop_3370_, lean_object* v_b_3371_, lean_object* v___y_3372_){
_start:
{
uint8_t v___x_3374_; 
v___x_3374_ = lean_usize_dec_eq(v_i_3369_, v_stop_3370_);
if (v___x_3374_ == 0)
{
lean_object* v___x_3375_; lean_object* v_fst_3376_; lean_object* v_varMap_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; uint8_t v_isDefiniteRef_3380_; lean_object* v___x_3381_; uint8_t v___y_3383_; 
v___x_3375_ = lean_array_uget_borrowed(v_as_3368_, v_i_3369_);
v_fst_3376_ = lean_ctor_get(v___x_3375_, 0);
v_varMap_3377_ = lean_ctor_get(v___y_3372_, 2);
v___x_3378_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fst_3376_);
lean_inc(v_varMap_3377_);
v___x_3379_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3378_, v_varMap_3377_, v_fst_3376_);
v_isDefiniteRef_3380_ = lean_ctor_get_uint8(v___x_3379_, sizeof(void*)*2 + 1);
v___x_3381_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_3380_ == 0)
{
uint8_t v___x_3389_; 
v___x_3389_ = 1;
v___y_3383_ = v___x_3389_;
goto v___jp_3382_;
}
else
{
v___y_3383_ = v___x_3374_;
goto v___jp_3382_;
}
v___jp_3382_:
{
uint8_t v_persistent_3384_; lean_object* v___x_3385_; size_t v___x_3386_; size_t v___x_3387_; 
v_persistent_3384_ = lean_ctor_get_uint8(v___x_3379_, sizeof(void*)*2 + 2);
lean_dec(v___x_3379_);
lean_inc(v_fst_3376_);
v___x_3385_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3385_, 0, v_fst_3376_);
lean_ctor_set(v___x_3385_, 1, v___x_3381_);
lean_ctor_set(v___x_3385_, 2, v_b_3371_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*3, v___y_3383_);
lean_ctor_set_uint8(v___x_3385_, sizeof(void*)*3 + 1, v_persistent_3384_);
v___x_3386_ = ((size_t)1ULL);
v___x_3387_ = lean_usize_add(v_i_3369_, v___x_3386_);
v_i_3369_ = v___x_3387_;
v_b_3371_ = v___x_3385_;
goto _start;
}
}
else
{
lean_object* v___x_3390_; 
v___x_3390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3390_, 0, v_b_3371_);
return v___x_3390_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg___boxed(lean_object* v_as_3391_, lean_object* v_i_3392_, lean_object* v_stop_3393_, lean_object* v_b_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_){
_start:
{
size_t v_i_boxed_3397_; size_t v_stop_boxed_3398_; lean_object* v_res_3399_; 
v_i_boxed_3397_ = lean_unbox_usize(v_i_3392_);
lean_dec(v_i_3392_);
v_stop_boxed_3398_ = lean_unbox_usize(v_stop_3393_);
lean_dec(v_stop_3393_);
v_res_3399_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v_as_3391_, v_i_boxed_3397_, v_stop_boxed_3398_, v_b_3394_, v___y_3395_);
lean_dec_ref(v___y_3395_);
lean_dec_ref(v_as_3391_);
return v_res_3399_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(lean_object* v_altLiveVars_3404_, lean_object* v_k_3405_, lean_object* v_a_3406_, lean_object* v_a_3407_, lean_object* v_a_3408_, lean_object* v_a_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_){
_start:
{
lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v_vars_3415_; lean_object* v___x_3416_; lean_object* v_buckets_3417_; size_t v_sz_3418_; size_t v___x_3419_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___x_3431_; 
v___x_3413_ = lean_unsigned_to_nat(0u);
v___x_3414_ = lean_st_ref_get(v_a_3407_);
v_vars_3415_ = lean_ctor_get(v___x_3414_, 0);
lean_inc_ref(v_vars_3415_);
lean_dec(v___x_3414_);
v___x_3416_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___closed__1));
v_buckets_3417_ = lean_ctor_get(v_vars_3415_, 1);
lean_inc_ref(v_buckets_3417_);
lean_dec_ref(v_vars_3415_);
v_sz_3418_ = lean_array_size(v_buckets_3417_);
v___x_3419_ = ((size_t)0ULL);
v___x_3431_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__1(v_altLiveVars_3404_, v_buckets_3417_, v_sz_3418_, v___x_3419_, v___x_3416_, v_a_3406_, v_a_3407_, v_a_3408_, v_a_3409_, v_a_3410_, v_a_3411_);
lean_dec_ref(v_buckets_3417_);
if (lean_obj_tag(v___x_3431_) == 0)
{
lean_object* v_a_3432_; lean_object* v___x_3434_; uint8_t v_isShared_3435_; uint8_t v_isSharedCheck_3489_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3489_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3489_ == 0)
{
v___x_3434_ = v___x_3431_;
v_isShared_3435_ = v_isSharedCheck_3489_;
goto v_resetjp_3433_;
}
else
{
lean_inc(v_a_3432_);
lean_dec(v___x_3431_);
v___x_3434_ = lean_box(0);
v_isShared_3435_ = v_isSharedCheck_3489_;
goto v_resetjp_3433_;
}
v_resetjp_3433_:
{
lean_object* v_fst_3436_; lean_object* v_snd_3437_; lean_object* v___y_3439_; lean_object* v___y_3440_; lean_object* v___y_3441_; lean_object* v___y_3442_; lean_object* v___y_3443_; lean_object* v___y_3446_; lean_object* v___y_3447_; lean_object* v___y_3448_; lean_object* v___y_3449_; lean_object* v___y_3450_; lean_object* v___x_3452_; lean_object* v___y_3454_; lean_object* v_a_3455_; lean_object* v___y_3461_; lean_object* v___y_3464_; lean_object* v___x_3478_; lean_object* v___y_3480_; lean_object* v___y_3481_; uint8_t v___x_3483_; 
v_fst_3436_ = lean_ctor_get(v_a_3432_, 0);
lean_inc(v_fst_3436_);
v_snd_3437_ = lean_ctor_get(v_a_3432_, 1);
lean_inc(v_snd_3437_);
lean_dec(v_a_3432_);
v___x_3452_ = lean_unsigned_to_nat(1u);
v___x_3478_ = lean_array_get_size(v_snd_3437_);
v___x_3483_ = lean_nat_dec_eq(v___x_3478_, v___x_3413_);
if (v___x_3483_ == 0)
{
lean_object* v___x_3484_; lean_object* v___y_3486_; uint8_t v___x_3488_; 
v___x_3484_ = lean_nat_sub(v___x_3478_, v___x_3452_);
v___x_3488_ = lean_nat_dec_le(v___x_3413_, v___x_3484_);
if (v___x_3488_ == 0)
{
lean_inc(v___x_3484_);
v___y_3486_ = v___x_3484_;
goto v___jp_3485_;
}
else
{
v___y_3486_ = v___x_3413_;
goto v___jp_3485_;
}
v___jp_3485_:
{
uint8_t v___x_3487_; 
v___x_3487_ = lean_nat_dec_le(v___y_3486_, v___x_3484_);
if (v___x_3487_ == 0)
{
lean_dec(v___x_3484_);
lean_inc(v___y_3486_);
v___y_3480_ = v___y_3486_;
v___y_3481_ = v___y_3486_;
goto v___jp_3479_;
}
else
{
v___y_3480_ = v___y_3486_;
v___y_3481_ = v___x_3484_;
goto v___jp_3479_;
}
}
}
else
{
v___y_3464_ = v_snd_3437_;
goto v___jp_3463_;
}
v___jp_3438_:
{
lean_object* v___x_3444_; 
v___x_3444_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v___y_3440_, v_fst_3436_, v___y_3441_, v___y_3443_);
lean_dec(v___y_3443_);
lean_dec(v___y_3440_);
v___y_3421_ = v___y_3439_;
v___y_3422_ = v___y_3442_;
v___y_3423_ = v___x_3444_;
goto v___jp_3420_;
}
v___jp_3445_:
{
uint8_t v___x_3451_; 
v___x_3451_ = lean_nat_dec_le(v___y_3450_, v___y_3448_);
if (v___x_3451_ == 0)
{
lean_dec(v___y_3448_);
lean_inc(v___y_3450_);
v___y_3439_ = v___y_3447_;
v___y_3440_ = v___y_3446_;
v___y_3441_ = v___y_3450_;
v___y_3442_ = v___y_3449_;
v___y_3443_ = v___y_3450_;
goto v___jp_3438_;
}
else
{
v___y_3439_ = v___y_3447_;
v___y_3440_ = v___y_3446_;
v___y_3441_ = v___y_3450_;
v___y_3442_ = v___y_3449_;
v___y_3443_ = v___y_3448_;
goto v___jp_3438_;
}
}
v___jp_3453_:
{
lean_object* v___x_3456_; uint8_t v___x_3457_; 
v___x_3456_ = lean_array_get_size(v_fst_3436_);
v___x_3457_ = lean_nat_dec_eq(v___x_3456_, v___x_3413_);
if (v___x_3457_ == 0)
{
lean_object* v___x_3458_; uint8_t v___x_3459_; 
v___x_3458_ = lean_nat_sub(v___x_3456_, v___x_3452_);
v___x_3459_ = lean_nat_dec_le(v___x_3413_, v___x_3458_);
if (v___x_3459_ == 0)
{
lean_inc(v___x_3458_);
v___y_3446_ = v___x_3456_;
v___y_3447_ = v___y_3454_;
v___y_3448_ = v___x_3458_;
v___y_3449_ = v_a_3455_;
v___y_3450_ = v___x_3458_;
goto v___jp_3445_;
}
else
{
v___y_3446_ = v___x_3456_;
v___y_3447_ = v___y_3454_;
v___y_3448_ = v___x_3458_;
v___y_3449_ = v_a_3455_;
v___y_3450_ = v___x_3413_;
goto v___jp_3445_;
}
}
else
{
v___y_3421_ = v___y_3454_;
v___y_3422_ = v_a_3455_;
v___y_3423_ = v_fst_3436_;
goto v___jp_3420_;
}
}
v___jp_3460_:
{
if (lean_obj_tag(v___y_3461_) == 0)
{
lean_object* v_a_3462_; 
v_a_3462_ = lean_ctor_get(v___y_3461_, 0);
lean_inc(v_a_3462_);
v___y_3454_ = v___y_3461_;
v_a_3455_ = v_a_3462_;
goto v___jp_3453_;
}
else
{
lean_dec(v_fst_3436_);
return v___y_3461_;
}
}
v___jp_3463_:
{
lean_object* v___x_3465_; uint8_t v___x_3466_; 
v___x_3465_ = lean_array_get_size(v___y_3464_);
v___x_3466_ = lean_nat_dec_lt(v___x_3413_, v___x_3465_);
if (v___x_3466_ == 0)
{
lean_object* v___x_3468_; 
lean_dec_ref(v___y_3464_);
lean_inc_ref(v_k_3405_);
if (v_isShared_3435_ == 0)
{
lean_ctor_set(v___x_3434_, 0, v_k_3405_);
v___x_3468_ = v___x_3434_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_k_3405_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
v___y_3454_ = v___x_3468_;
v_a_3455_ = v_k_3405_;
goto v___jp_3453_;
}
}
else
{
uint8_t v___x_3470_; 
v___x_3470_ = lean_nat_dec_le(v___x_3465_, v___x_3465_);
if (v___x_3470_ == 0)
{
if (v___x_3466_ == 0)
{
lean_object* v___x_3472_; 
lean_dec_ref(v___y_3464_);
lean_inc_ref(v_k_3405_);
if (v_isShared_3435_ == 0)
{
lean_ctor_set(v___x_3434_, 0, v_k_3405_);
v___x_3472_ = v___x_3434_;
goto v_reusejp_3471_;
}
else
{
lean_object* v_reuseFailAlloc_3473_; 
v_reuseFailAlloc_3473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3473_, 0, v_k_3405_);
v___x_3472_ = v_reuseFailAlloc_3473_;
goto v_reusejp_3471_;
}
v_reusejp_3471_:
{
v___y_3454_ = v___x_3472_;
v_a_3455_ = v_k_3405_;
goto v___jp_3453_;
}
}
else
{
size_t v___x_3474_; lean_object* v___x_3475_; 
lean_del_object(v___x_3434_);
v___x_3474_ = lean_usize_of_nat(v___x_3465_);
v___x_3475_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v___y_3464_, v___x_3419_, v___x_3474_, v_k_3405_, v_a_3406_);
lean_dec_ref(v___y_3464_);
v___y_3461_ = v___x_3475_;
goto v___jp_3460_;
}
}
else
{
size_t v___x_3476_; lean_object* v___x_3477_; 
lean_del_object(v___x_3434_);
v___x_3476_ = lean_usize_of_nat(v___x_3465_);
v___x_3477_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v___y_3464_, v___x_3419_, v___x_3476_, v_k_3405_, v_a_3406_);
lean_dec_ref(v___y_3464_);
v___y_3461_ = v___x_3477_;
goto v___jp_3460_;
}
}
}
v___jp_3479_:
{
lean_object* v___x_3482_; 
v___x_3482_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v___x_3478_, v_snd_3437_, v___y_3480_, v___y_3481_);
lean_dec(v___y_3481_);
v___y_3464_ = v___x_3482_;
goto v___jp_3463_;
}
}
}
else
{
lean_object* v_a_3490_; lean_object* v___x_3492_; uint8_t v_isShared_3493_; uint8_t v_isSharedCheck_3497_; 
lean_dec_ref(v_k_3405_);
v_a_3490_ = lean_ctor_get(v___x_3431_, 0);
v_isSharedCheck_3497_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3497_ == 0)
{
v___x_3492_ = v___x_3431_;
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
else
{
lean_inc(v_a_3490_);
lean_dec(v___x_3431_);
v___x_3492_ = lean_box(0);
v_isShared_3493_ = v_isSharedCheck_3497_;
goto v_resetjp_3491_;
}
v_resetjp_3491_:
{
lean_object* v___x_3495_; 
if (v_isShared_3493_ == 0)
{
v___x_3495_ = v___x_3492_;
goto v_reusejp_3494_;
}
else
{
lean_object* v_reuseFailAlloc_3496_; 
v_reuseFailAlloc_3496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3496_, 0, v_a_3490_);
v___x_3495_ = v_reuseFailAlloc_3496_;
goto v_reusejp_3494_;
}
v_reusejp_3494_:
{
return v___x_3495_;
}
}
}
v___jp_3420_:
{
lean_object* v___x_3424_; uint8_t v___x_3425_; 
v___x_3424_ = lean_array_get_size(v___y_3423_);
v___x_3425_ = lean_nat_dec_lt(v___x_3413_, v___x_3424_);
if (v___x_3425_ == 0)
{
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3422_);
return v___y_3421_;
}
else
{
uint8_t v___x_3426_; 
v___x_3426_ = lean_nat_dec_le(v___x_3424_, v___x_3424_);
if (v___x_3426_ == 0)
{
if (v___x_3425_ == 0)
{
lean_dec_ref(v___y_3423_);
lean_dec_ref(v___y_3422_);
return v___y_3421_;
}
else
{
size_t v___x_3427_; lean_object* v___x_3428_; 
lean_dec_ref(v___y_3421_);
v___x_3427_ = lean_usize_of_nat(v___x_3424_);
v___x_3428_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v___y_3423_, v___x_3419_, v___x_3427_, v___y_3422_, v_a_3406_);
lean_dec_ref(v___y_3423_);
return v___x_3428_;
}
}
else
{
size_t v___x_3429_; lean_object* v___x_3430_; 
lean_dec_ref(v___y_3421_);
v___x_3429_ = lean_usize_of_nat(v___x_3424_);
v___x_3430_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v___y_3423_, v___x_3419_, v___x_3429_, v___y_3422_, v_a_3406_);
lean_dec_ref(v___y_3423_);
return v___x_3430_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt___boxed(lean_object* v_altLiveVars_3498_, lean_object* v_k_3499_, lean_object* v_a_3500_, lean_object* v_a_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v___y_3506_){
_start:
{
lean_object* v_res_3507_; 
v_res_3507_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_altLiveVars_3498_, v_k_3499_, v_a_3500_, v_a_3501_, v_a_3502_, v_a_3503_, v_a_3504_, v_a_3505_);
lean_dec(v_a_3505_);
lean_dec_ref(v_a_3504_);
lean_dec(v_a_3503_);
lean_dec_ref(v_a_3502_);
lean_dec(v_a_3501_);
lean_dec_ref(v_a_3500_);
lean_dec_ref(v_altLiveVars_3498_);
return v_res_3507_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(lean_object* v_altLiveVars_3508_, lean_object* v_a_3509_, lean_object* v_a_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_){
_start:
{
lean_object* v___x_3518_; 
v___x_3518_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___redArg(v_altLiveVars_3508_, v_a_3509_, v_a_3510_, v___y_3511_, v___y_3512_);
return v___x_3518_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0___boxed(lean_object* v_altLiveVars_3519_, lean_object* v_a_3520_, lean_object* v_a_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_){
_start:
{
lean_object* v_res_3529_; 
v_res_3529_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__0(v_altLiveVars_3519_, v_a_3520_, v_a_3521_, v___y_3522_, v___y_3523_, v___y_3524_, v___y_3525_, v___y_3526_, v___y_3527_);
lean_dec(v___y_3527_);
lean_dec_ref(v___y_3526_);
lean_dec(v___y_3525_);
lean_dec_ref(v___y_3524_);
lean_dec(v___y_3523_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v_altLiveVars_3519_);
return v_res_3529_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(lean_object* v_as_3530_, size_t v_i_3531_, size_t v_stop_3532_, lean_object* v_b_3533_, lean_object* v___y_3534_, lean_object* v___y_3535_, lean_object* v___y_3536_, lean_object* v___y_3537_, lean_object* v___y_3538_, lean_object* v___y_3539_){
_start:
{
lean_object* v___x_3541_; 
v___x_3541_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___redArg(v_as_3530_, v_i_3531_, v_stop_3532_, v_b_3533_, v___y_3534_);
return v___x_3541_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2___boxed(lean_object* v_as_3542_, lean_object* v_i_3543_, lean_object* v_stop_3544_, lean_object* v_b_3545_, lean_object* v___y_3546_, lean_object* v___y_3547_, lean_object* v___y_3548_, lean_object* v___y_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_){
_start:
{
size_t v_i_boxed_3553_; size_t v_stop_boxed_3554_; lean_object* v_res_3555_; 
v_i_boxed_3553_ = lean_unbox_usize(v_i_3543_);
lean_dec(v_i_3543_);
v_stop_boxed_3554_ = lean_unbox_usize(v_stop_3544_);
lean_dec(v_stop_3544_);
v_res_3555_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__2(v_as_3542_, v_i_boxed_3553_, v_stop_boxed_3554_, v_b_3545_, v___y_3546_, v___y_3547_, v___y_3548_, v___y_3549_, v___y_3550_, v___y_3551_);
lean_dec(v___y_3551_);
lean_dec_ref(v___y_3550_);
lean_dec(v___y_3549_);
lean_dec_ref(v___y_3548_);
lean_dec(v___y_3547_);
lean_dec_ref(v___y_3546_);
lean_dec_ref(v_as_3542_);
return v_res_3555_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(lean_object* v_n_3556_, lean_object* v_as_3557_, lean_object* v_lo_3558_, lean_object* v_hi_3559_, lean_object* v_w_3560_, lean_object* v_hlo_3561_, lean_object* v_hhi_3562_){
_start:
{
lean_object* v___x_3563_; 
v___x_3563_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___redArg(v_n_3556_, v_as_3557_, v_lo_3558_, v_hi_3559_);
return v___x_3563_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3___boxed(lean_object* v_n_3564_, lean_object* v_as_3565_, lean_object* v_lo_3566_, lean_object* v_hi_3567_, lean_object* v_w_3568_, lean_object* v_hlo_3569_, lean_object* v_hhi_3570_){
_start:
{
lean_object* v_res_3571_; 
v_res_3571_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3(v_n_3564_, v_as_3565_, v_lo_3566_, v_hi_3567_, v_w_3568_, v_hlo_3569_, v_hhi_3570_);
lean_dec(v_hi_3567_);
lean_dec(v_n_3564_);
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(lean_object* v_as_3572_, size_t v_i_3573_, size_t v_stop_3574_, lean_object* v_b_3575_, lean_object* v___y_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
lean_object* v___x_3583_; 
v___x_3583_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___redArg(v_as_3572_, v_i_3573_, v_stop_3574_, v_b_3575_, v___y_3576_);
return v___x_3583_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4___boxed(lean_object* v_as_3584_, lean_object* v_i_3585_, lean_object* v_stop_3586_, lean_object* v_b_3587_, lean_object* v___y_3588_, lean_object* v___y_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_, lean_object* v___y_3594_){
_start:
{
size_t v_i_boxed_3595_; size_t v_stop_boxed_3596_; lean_object* v_res_3597_; 
v_i_boxed_3595_ = lean_unbox_usize(v_i_3585_);
lean_dec(v_i_3585_);
v_stop_boxed_3596_ = lean_unbox_usize(v_stop_3586_);
lean_dec(v_stop_3586_);
v_res_3597_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__4(v_as_3584_, v_i_boxed_3595_, v_stop_boxed_3596_, v_b_3587_, v___y_3588_, v___y_3589_, v___y_3590_, v___y_3591_, v___y_3592_, v___y_3593_);
lean_dec(v___y_3593_);
lean_dec_ref(v___y_3592_);
lean_dec(v___y_3591_);
lean_dec_ref(v___y_3590_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3588_);
lean_dec_ref(v_as_3584_);
return v_res_3597_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3(lean_object* v_n_3598_, lean_object* v_lo_3599_, lean_object* v_hi_3600_, lean_object* v_hhi_3601_, lean_object* v_pivot_3602_, lean_object* v_as_3603_, lean_object* v_i_3604_, lean_object* v_k_3605_, lean_object* v_ilo_3606_, lean_object* v_ik_3607_, lean_object* v_w_3608_){
_start:
{
lean_object* v___x_3609_; 
v___x_3609_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___redArg(v_hi_3600_, v_pivot_3602_, v_as_3603_, v_i_3604_, v_k_3605_);
return v___x_3609_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3___boxed(lean_object* v_n_3610_, lean_object* v_lo_3611_, lean_object* v_hi_3612_, lean_object* v_hhi_3613_, lean_object* v_pivot_3614_, lean_object* v_as_3615_, lean_object* v_i_3616_, lean_object* v_k_3617_, lean_object* v_ilo_3618_, lean_object* v_ik_3619_, lean_object* v_w_3620_){
_start:
{
lean_object* v_res_3621_; 
v_res_3621_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt_spec__3_spec__3(v_n_3610_, v_lo_3611_, v_hi_3612_, v_hhi_3613_, v_pivot_3614_, v_as_3615_, v_i_3616_, v_k_3617_, v_ilo_3618_, v_ik_3619_, v_w_3620_);
lean_dec_ref(v_pivot_3614_);
lean_dec(v_hi_3612_);
lean_dec(v_lo_3611_);
lean_dec(v_n_3610_);
return v_res_3621_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(lean_object* v_args_3622_, lean_object* v_x_3623_, lean_object* v_n_3624_, lean_object* v_i_3625_){
_start:
{
lean_object* v_zero_3626_; uint8_t v_isZero_3627_; 
v_zero_3626_ = lean_unsigned_to_nat(0u);
v_isZero_3627_ = lean_nat_dec_eq(v_i_3625_, v_zero_3626_);
if (v_isZero_3627_ == 1)
{
lean_dec(v_i_3625_);
return v_isZero_3627_;
}
else
{
lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; uint8_t v___x_3631_; 
v___x_3628_ = lean_box(0);
v___x_3629_ = lean_nat_sub(v_n_3624_, v_i_3625_);
v___x_3630_ = lean_array_get_borrowed(v___x_3628_, v_args_3622_, v___x_3629_);
lean_dec(v___x_3629_);
v___x_3631_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v___x_3630_, v_x_3623_);
if (v___x_3631_ == 0)
{
lean_object* v_one_3632_; lean_object* v_n_3633_; 
v_one_3632_ = lean_unsigned_to_nat(1u);
v_n_3633_ = lean_nat_sub(v_i_3625_, v_one_3632_);
lean_dec(v_i_3625_);
v_i_3625_ = v_n_3633_;
goto _start;
}
else
{
lean_dec(v_i_3625_);
return v_isZero_3627_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg___boxed(lean_object* v_args_3635_, lean_object* v_x_3636_, lean_object* v_n_3637_, lean_object* v_i_3638_){
_start:
{
uint8_t v_res_3639_; lean_object* v_r_3640_; 
v_res_3639_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3635_, v_x_3636_, v_n_3637_, v_i_3638_);
lean_dec(v_n_3637_);
lean_dec(v_x_3636_);
lean_dec_ref(v_args_3635_);
v_r_3640_ = lean_box(v_res_3639_);
return v_r_3640_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(lean_object* v_args_3641_, lean_object* v_i_3642_){
_start:
{
lean_object* v___x_3643_; lean_object* v_x_3644_; uint8_t v___x_3645_; 
v___x_3643_ = lean_box(0);
v_x_3644_ = lean_array_get_borrowed(v___x_3643_, v_args_3641_, v_i_3642_);
lean_inc(v_i_3642_);
v___x_3645_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3641_, v_x_3644_, v_i_3642_, v_i_3642_);
lean_dec(v_i_3642_);
return v___x_3645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc___boxed(lean_object* v_args_3646_, lean_object* v_i_3647_){
_start:
{
uint8_t v_res_3648_; lean_object* v_r_3649_; 
v_res_3648_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_3646_, v_i_3647_);
lean_dec_ref(v_args_3646_);
v_r_3649_ = lean_box(v_res_3648_);
return v_r_3649_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(lean_object* v_args_3650_, lean_object* v_x_3651_, lean_object* v_n_3652_, lean_object* v_i_3653_, lean_object* v_a_3654_){
_start:
{
uint8_t v___x_3655_; 
v___x_3655_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___redArg(v_args_3650_, v_x_3651_, v_n_3652_, v_i_3653_);
return v___x_3655_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0___boxed(lean_object* v_args_3656_, lean_object* v_x_3657_, lean_object* v_n_3658_, lean_object* v_i_3659_, lean_object* v_a_3660_){
_start:
{
uint8_t v_res_3661_; lean_object* v_r_3662_; 
v_res_3661_ = l___private_Init_Data_Nat_Fold_0__Nat_allTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc_spec__0(v_args_3656_, v_x_3657_, v_n_3658_, v_i_3659_, v_a_3660_);
lean_dec(v_n_3658_);
lean_dec(v_x_3657_);
lean_dec_ref(v_args_3656_);
v_r_3662_ = lean_box(v_res_3661_);
return v_r_3662_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(lean_object* v_args_3663_, lean_object* v_arg_3664_, lean_object* v_consumeParamPred_3665_, lean_object* v_n_3666_, lean_object* v_i_3667_){
_start:
{
lean_object* v_zero_3668_; uint8_t v_isZero_3669_; 
v_zero_3668_ = lean_unsigned_to_nat(0u);
v_isZero_3669_ = lean_nat_dec_eq(v_i_3667_, v_zero_3668_);
if (v_isZero_3669_ == 1)
{
uint8_t v___x_3670_; 
lean_dec(v_i_3667_);
lean_dec_ref(v_consumeParamPred_3665_);
v___x_3670_ = 0;
return v___x_3670_;
}
else
{
lean_object* v_one_3671_; lean_object* v_n_3672_; uint8_t v___y_3674_; lean_object* v___x_3676_; lean_object* v_arg_x27_3677_; 
v_one_3671_ = lean_unsigned_to_nat(1u);
v_n_3672_ = lean_nat_sub(v_i_3667_, v_one_3671_);
v___x_3676_ = lean_nat_sub(v_n_3666_, v_i_3667_);
lean_dec(v_i_3667_);
v_arg_x27_3677_ = lean_array_fget_borrowed(v_args_3663_, v___x_3676_);
if (lean_obj_tag(v_arg_x27_3677_) == 0)
{
lean_dec(v___x_3676_);
v_i_3667_ = v_n_3672_;
goto _start;
}
else
{
lean_object* v_fvarId_3679_; uint8_t v___x_3680_; 
v_fvarId_3679_ = lean_ctor_get(v_arg_x27_3677_, 0);
v___x_3680_ = l_Lean_instBEqFVarId_beq(v_arg_3664_, v_fvarId_3679_);
if (v___x_3680_ == 0)
{
lean_dec(v___x_3676_);
v___y_3674_ = v___x_3680_;
goto v___jp_3673_;
}
else
{
lean_object* v___x_3681_; uint8_t v___x_3682_; 
lean_inc_ref(v_consumeParamPred_3665_);
v___x_3681_ = lean_apply_1(v_consumeParamPred_3665_, v___x_3676_);
v___x_3682_ = lean_unbox(v___x_3681_);
if (v___x_3682_ == 0)
{
v___y_3674_ = v___x_3680_;
goto v___jp_3673_;
}
else
{
v_i_3667_ = v_n_3672_;
goto _start;
}
}
}
v___jp_3673_:
{
if (v___y_3674_ == 0)
{
v_i_3667_ = v_n_3672_;
goto _start;
}
else
{
lean_dec(v_n_3672_);
lean_dec_ref(v_consumeParamPred_3665_);
return v___y_3674_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg___boxed(lean_object* v_args_3684_, lean_object* v_arg_3685_, lean_object* v_consumeParamPred_3686_, lean_object* v_n_3687_, lean_object* v_i_3688_){
_start:
{
uint8_t v_res_3689_; lean_object* v_r_3690_; 
v_res_3689_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3684_, v_arg_3685_, v_consumeParamPred_3686_, v_n_3687_, v_i_3688_);
lean_dec(v_n_3687_);
lean_dec(v_arg_3685_);
lean_dec_ref(v_args_3684_);
v_r_3690_ = lean_box(v_res_3689_);
return v_r_3690_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(lean_object* v_arg_3691_, lean_object* v_args_3692_, lean_object* v_consumeParamPred_3693_){
_start:
{
lean_object* v___x_3694_; uint8_t v___x_3695_; 
v___x_3694_ = lean_array_get_size(v_args_3692_);
v___x_3695_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3692_, v_arg_3691_, v_consumeParamPred_3693_, v___x_3694_, v___x_3694_);
return v___x_3695_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux___boxed(lean_object* v_arg_3696_, lean_object* v_args_3697_, lean_object* v_consumeParamPred_3698_){
_start:
{
uint8_t v_res_3699_; lean_object* v_r_3700_; 
v_res_3699_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_arg_3696_, v_args_3697_, v_consumeParamPred_3698_);
lean_dec_ref(v_args_3697_);
lean_dec(v_arg_3696_);
v_r_3700_ = lean_box(v_res_3699_);
return v_r_3700_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(lean_object* v_args_3701_, lean_object* v_arg_3702_, lean_object* v_consumeParamPred_3703_, lean_object* v_n_3704_, lean_object* v_i_3705_, lean_object* v_a_3706_){
_start:
{
uint8_t v___x_3707_; 
v___x_3707_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___redArg(v_args_3701_, v_arg_3702_, v_consumeParamPred_3703_, v_n_3704_, v_i_3705_);
return v___x_3707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0___boxed(lean_object* v_args_3708_, lean_object* v_arg_3709_, lean_object* v_consumeParamPred_3710_, lean_object* v_n_3711_, lean_object* v_i_3712_, lean_object* v_a_3713_){
_start:
{
uint8_t v_res_3714_; lean_object* v_r_3715_; 
v_res_3714_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux_spec__0(v_args_3708_, v_arg_3709_, v_consumeParamPred_3710_, v_n_3711_, v_i_3712_, v_a_3713_);
lean_dec(v_n_3711_);
lean_dec(v_arg_3709_);
lean_dec_ref(v_args_3708_);
v_r_3715_ = lean_box(v_res_3714_);
return v_r_3715_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0(void){
_start:
{
lean_object* v___x_3716_; 
v___x_3716_ = l_Lean_Compiler_LCNF_instInhabitedParam_default___redArg();
return v___x_3716_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(lean_object* v_ps_3717_, lean_object* v_i_3718_){
_start:
{
lean_object* v___x_3719_; lean_object* v___x_3720_; uint8_t v_borrow_3721_; 
v___x_3719_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___closed__0);
v___x_3720_ = lean_array_get_borrowed(v___x_3719_, v_ps_3717_, v_i_3718_);
v_borrow_3721_ = lean_ctor_get_uint8(v___x_3720_, sizeof(void*)*3);
if (v_borrow_3721_ == 0)
{
uint8_t v___x_3722_; 
v___x_3722_ = 1;
return v___x_3722_;
}
else
{
uint8_t v___x_3723_; 
v___x_3723_ = 0;
return v___x_3723_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed(lean_object* v_ps_3724_, lean_object* v_i_3725_){
_start:
{
uint8_t v_res_3726_; lean_object* v_r_3727_; 
v_res_3726_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0(v_ps_3724_, v_i_3725_);
lean_dec(v_i_3725_);
lean_dec_ref(v_ps_3724_);
v_r_3727_ = lean_box(v_res_3726_);
return v_r_3727_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(lean_object* v_arg_3728_, lean_object* v_args_3729_, lean_object* v_ps_3730_){
_start:
{
lean_object* v___f_3731_; uint8_t v___x_3732_; 
v___f_3731_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3731_, 0, v_ps_3730_);
v___x_3732_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_arg_3728_, v_args_3729_, v___f_3731_);
return v___x_3732_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___boxed(lean_object* v_arg_3733_, lean_object* v_args_3734_, lean_object* v_ps_3735_){
_start:
{
uint8_t v_res_3736_; lean_object* v_r_3737_; 
v_res_3736_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(v_arg_3733_, v_args_3734_, v_ps_3735_);
lean_dec_ref(v_args_3734_);
lean_dec(v_arg_3733_);
v_r_3737_ = lean_box(v_res_3736_);
return v_r_3737_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(lean_object* v_upperBound_3738_, lean_object* v_args_3739_, lean_object* v_arg_3740_, lean_object* v_consumeParamPred_3741_, lean_object* v_a_3742_, lean_object* v_b_3743_){
_start:
{
lean_object* v_a_3745_; uint8_t v___y_3750_; uint8_t v___x_3753_; 
v___x_3753_ = lean_nat_dec_lt(v_a_3742_, v_upperBound_3738_);
if (v___x_3753_ == 0)
{
lean_dec(v_a_3742_);
lean_dec_ref(v_consumeParamPred_3741_);
return v_b_3743_;
}
else
{
lean_object* v___x_3754_; 
v___x_3754_ = lean_array_fget_borrowed(v_args_3739_, v_a_3742_);
if (lean_obj_tag(v___x_3754_) == 1)
{
lean_object* v_fvarId_3755_; uint8_t v___x_3756_; 
v_fvarId_3755_ = lean_ctor_get(v___x_3754_, 0);
v___x_3756_ = l_Lean_instBEqFVarId_beq(v_arg_3740_, v_fvarId_3755_);
if (v___x_3756_ == 0)
{
v___y_3750_ = v___x_3756_;
goto v___jp_3749_;
}
else
{
lean_object* v___x_3757_; uint8_t v___x_3758_; 
lean_inc_ref(v_consumeParamPred_3741_);
lean_inc(v_a_3742_);
v___x_3757_ = lean_apply_1(v_consumeParamPred_3741_, v_a_3742_);
v___x_3758_ = lean_unbox(v___x_3757_);
v___y_3750_ = v___x_3758_;
goto v___jp_3749_;
}
}
else
{
v_a_3745_ = v_b_3743_;
goto v___jp_3744_;
}
}
v___jp_3744_:
{
lean_object* v___x_3746_; lean_object* v___x_3747_; 
v___x_3746_ = lean_unsigned_to_nat(1u);
v___x_3747_ = lean_nat_add(v_a_3742_, v___x_3746_);
lean_dec(v_a_3742_);
v_a_3742_ = v___x_3747_;
v_b_3743_ = v_a_3745_;
goto _start;
}
v___jp_3749_:
{
if (v___y_3750_ == 0)
{
v_a_3745_ = v_b_3743_;
goto v___jp_3744_;
}
else
{
lean_object* v___x_3751_; lean_object* v___x_3752_; 
v___x_3751_ = lean_unsigned_to_nat(1u);
v___x_3752_ = lean_nat_add(v_b_3743_, v___x_3751_);
lean_dec(v_b_3743_);
v_a_3745_ = v___x_3752_;
goto v___jp_3744_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg___boxed(lean_object* v_upperBound_3759_, lean_object* v_args_3760_, lean_object* v_arg_3761_, lean_object* v_consumeParamPred_3762_, lean_object* v_a_3763_, lean_object* v_b_3764_){
_start:
{
lean_object* v_res_3765_; 
v_res_3765_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v_upperBound_3759_, v_args_3760_, v_arg_3761_, v_consumeParamPred_3762_, v_a_3763_, v_b_3764_);
lean_dec(v_arg_3761_);
lean_dec_ref(v_args_3760_);
lean_dec(v_upperBound_3759_);
return v_res_3765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(lean_object* v_arg_3766_, lean_object* v_args_3767_, lean_object* v_consumeParamPred_3768_){
_start:
{
lean_object* v_num_3769_; lean_object* v___x_3770_; lean_object* v___x_3771_; 
v_num_3769_ = lean_unsigned_to_nat(0u);
v___x_3770_ = lean_array_get_size(v_args_3767_);
v___x_3771_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v___x_3770_, v_args_3767_, v_arg_3766_, v_consumeParamPred_3768_, v_num_3769_, v_num_3769_);
return v___x_3771_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions___boxed(lean_object* v_arg_3772_, lean_object* v_args_3773_, lean_object* v_consumeParamPred_3774_){
_start:
{
lean_object* v_res_3775_; 
v_res_3775_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(v_arg_3772_, v_args_3773_, v_consumeParamPred_3774_);
lean_dec_ref(v_args_3773_);
lean_dec(v_arg_3772_);
return v_res_3775_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(lean_object* v_upperBound_3776_, lean_object* v_args_3777_, lean_object* v_arg_3778_, lean_object* v_consumeParamPred_3779_, lean_object* v_inst_3780_, lean_object* v_R_3781_, lean_object* v_a_3782_, lean_object* v_b_3783_, lean_object* v_c_3784_){
_start:
{
lean_object* v___x_3785_; 
v___x_3785_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___redArg(v_upperBound_3776_, v_args_3777_, v_arg_3778_, v_consumeParamPred_3779_, v_a_3782_, v_b_3783_);
return v___x_3785_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0___boxed(lean_object* v_upperBound_3786_, lean_object* v_args_3787_, lean_object* v_arg_3788_, lean_object* v_consumeParamPred_3789_, lean_object* v_inst_3790_, lean_object* v_R_3791_, lean_object* v_a_3792_, lean_object* v_b_3793_, lean_object* v_c_3794_){
_start:
{
lean_object* v_res_3795_; 
v_res_3795_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions_spec__0(v_upperBound_3786_, v_args_3787_, v_arg_3788_, v_consumeParamPred_3789_, v_inst_3790_, v_R_3791_, v_a_3792_, v_b_3793_, v_c_3794_);
lean_dec(v_arg_3788_);
lean_dec_ref(v_args_3787_);
lean_dec(v_upperBound_3786_);
return v_res_3795_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(lean_object* v_fvarId_3796_, lean_object* v_b_3797_, uint8_t v___x_3798_, lean_object* v_numIncs_3799_, lean_object* v___y_3800_, lean_object* v___y_3801_, lean_object* v___y_3802_, lean_object* v___y_3803_, lean_object* v___y_3804_, lean_object* v___y_3805_){
_start:
{
lean_object* v_a_3808_; lean_object* v___x_3811_; uint8_t v___x_3812_; 
v___x_3811_ = lean_unsigned_to_nat(0u);
v___x_3812_ = lean_nat_dec_eq(v_numIncs_3799_, v___x_3811_);
if (v___x_3812_ == 0)
{
lean_object* v_varMap_3813_; lean_object* v___x_3814_; lean_object* v___x_3815_; uint8_t v___y_3817_; uint8_t v_isDefiniteRef_3820_; 
v_varMap_3813_ = lean_ctor_get(v___y_3800_, 2);
v___x_3814_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3796_);
lean_inc(v_varMap_3813_);
v___x_3815_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3814_, v_varMap_3813_, v_fvarId_3796_);
v_isDefiniteRef_3820_ = lean_ctor_get_uint8(v___x_3815_, sizeof(void*)*2 + 1);
if (v_isDefiniteRef_3820_ == 0)
{
v___y_3817_ = v___x_3798_;
goto v___jp_3816_;
}
else
{
v___y_3817_ = v___x_3812_;
goto v___jp_3816_;
}
v___jp_3816_:
{
uint8_t v_persistent_3818_; lean_object* v___x_3819_; 
v_persistent_3818_ = lean_ctor_get_uint8(v___x_3815_, sizeof(void*)*2 + 2);
lean_dec(v___x_3815_);
v___x_3819_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_3819_, 0, v_fvarId_3796_);
lean_ctor_set(v___x_3819_, 1, v_numIncs_3799_);
lean_ctor_set(v___x_3819_, 2, v_b_3797_);
lean_ctor_set_uint8(v___x_3819_, sizeof(void*)*3, v___y_3817_);
lean_ctor_set_uint8(v___x_3819_, sizeof(void*)*3 + 1, v_persistent_3818_);
v_a_3808_ = v___x_3819_;
goto v___jp_3807_;
}
}
else
{
lean_dec(v_numIncs_3799_);
lean_dec(v_fvarId_3796_);
v_a_3808_ = v_b_3797_;
goto v___jp_3807_;
}
v___jp_3807_:
{
lean_object* v___x_3809_; lean_object* v___x_3810_; 
v___x_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3809_, 0, v_a_3808_);
v___x_3810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3810_, 0, v___x_3809_);
return v___x_3810_;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0___boxed(lean_object* v_fvarId_3821_, lean_object* v_b_3822_, lean_object* v___x_3823_, lean_object* v_numIncs_3824_, lean_object* v___y_3825_, lean_object* v___y_3826_, lean_object* v___y_3827_, lean_object* v___y_3828_, lean_object* v___y_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_){
_start:
{
uint8_t v___x_6609__boxed_3832_; lean_object* v_res_3833_; 
v___x_6609__boxed_3832_ = lean_unbox(v___x_3823_);
v_res_3833_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_3821_, v_b_3822_, v___x_6609__boxed_3832_, v_numIncs_3824_, v___y_3825_, v___y_3826_, v___y_3827_, v___y_3828_, v___y_3829_, v___y_3830_);
lean_dec(v___y_3830_);
lean_dec_ref(v___y_3829_);
lean_dec(v___y_3828_);
lean_dec_ref(v___y_3827_);
lean_dec(v___y_3826_);
lean_dec_ref(v___y_3825_);
return v_res_3833_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(lean_object* v_upperBound_3834_, lean_object* v_args_3835_, lean_object* v_consumeParamPred_3836_, lean_object* v_a_3837_, lean_object* v_b_3838_, lean_object* v___y_3839_, lean_object* v___y_3840_, lean_object* v___y_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_){
_start:
{
lean_object* v_a_3847_; lean_object* v___y_3852_; uint8_t v___x_3871_; 
v___x_3871_ = lean_nat_dec_lt(v_a_3837_, v_upperBound_3834_);
if (v___x_3871_ == 0)
{
lean_object* v___x_3872_; 
lean_dec(v_a_3837_);
lean_dec_ref(v_consumeParamPred_3836_);
v___x_3872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3872_, 0, v_b_3838_);
return v___x_3872_;
}
else
{
lean_object* v___x_3873_; 
v___x_3873_ = lean_array_fget_borrowed(v_args_3835_, v_a_3837_);
if (lean_obj_tag(v___x_3873_) == 1)
{
lean_object* v_fvarId_3874_; lean_object* v_varMap_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; uint8_t v_isPossibleRef_3878_; 
v_fvarId_3874_ = lean_ctor_get(v___x_3873_, 0);
v_varMap_3875_ = lean_ctor_get(v___y_3839_, 2);
v___x_3876_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_3874_);
lean_inc(v_varMap_3875_);
v___x_3877_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_3876_, v_varMap_3875_, v_fvarId_3874_);
v_isPossibleRef_3878_ = lean_ctor_get_uint8(v___x_3877_, sizeof(void*)*2);
lean_dec(v___x_3877_);
if (v_isPossibleRef_3878_ == 0)
{
v_a_3847_ = v_b_3838_;
goto v___jp_3846_;
}
else
{
uint8_t v___x_3879_; 
lean_inc(v_a_3837_);
v___x_3879_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_3835_, v_a_3837_);
if (v___x_3879_ == 0)
{
v_a_3847_ = v_b_3838_;
goto v___jp_3846_;
}
else
{
lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v_vars_3882_; uint8_t v___x_3883_; lean_object* v___x_3884_; uint8_t v___y_3888_; 
lean_inc_ref(v_consumeParamPred_3836_);
v___x_3880_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_getNumConsumptions(v_fvarId_3874_, v_args_3835_, v_consumeParamPred_3836_);
v___x_3881_ = lean_st_ref_get(v___y_3840_);
v_vars_3882_ = lean_ctor_get(v___x_3881_, 0);
lean_inc_ref(v_vars_3882_);
lean_dec(v___x_3881_);
v___x_3883_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_3882_, v_fvarId_3874_);
lean_dec_ref(v_vars_3882_);
v___x_3884_ = lean_st_ref_get(v___y_3840_);
if (v___x_3883_ == 0)
{
lean_object* v_borrows_3893_; uint8_t v___x_3894_; 
v_borrows_3893_ = lean_ctor_get(v___x_3884_, 1);
lean_inc_ref(v_borrows_3893_);
lean_dec(v___x_3884_);
v___x_3894_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_3893_, v_fvarId_3874_);
lean_dec_ref(v_borrows_3893_);
v___y_3888_ = v___x_3894_;
goto v___jp_3887_;
}
else
{
lean_dec(v___x_3884_);
v___y_3888_ = v___x_3883_;
goto v___jp_3887_;
}
v___jp_3885_:
{
lean_object* v___x_3886_; 
lean_inc(v_fvarId_3874_);
v___x_3886_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_3874_, v_b_3838_, v___x_3871_, v___x_3880_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
v___y_3852_ = v___x_3886_;
goto v___jp_3851_;
}
v___jp_3887_:
{
if (v___y_3888_ == 0)
{
uint8_t v___x_3889_; 
lean_inc_ref(v_consumeParamPred_3836_);
v___x_3889_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParamAux(v_fvarId_3874_, v_args_3835_, v_consumeParamPred_3836_);
if (v___x_3889_ == 0)
{
lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; 
v___x_3890_ = lean_unsigned_to_nat(1u);
v___x_3891_ = lean_nat_sub(v___x_3880_, v___x_3890_);
lean_dec(v___x_3880_);
lean_inc(v_fvarId_3874_);
v___x_3892_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___lam__0(v_fvarId_3874_, v_b_3838_, v___x_3871_, v___x_3891_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_);
v___y_3852_ = v___x_3892_;
goto v___jp_3851_;
}
else
{
goto v___jp_3885_;
}
}
else
{
goto v___jp_3885_;
}
}
}
}
}
else
{
v_a_3847_ = v_b_3838_;
goto v___jp_3846_;
}
}
v___jp_3846_:
{
lean_object* v___x_3848_; lean_object* v___x_3849_; 
v___x_3848_ = lean_unsigned_to_nat(1u);
v___x_3849_ = lean_nat_add(v_a_3837_, v___x_3848_);
lean_dec(v_a_3837_);
v_a_3837_ = v___x_3849_;
v_b_3838_ = v_a_3847_;
goto _start;
}
v___jp_3851_:
{
if (lean_obj_tag(v___y_3852_) == 0)
{
lean_object* v_a_3853_; lean_object* v___x_3855_; uint8_t v_isShared_3856_; uint8_t v_isSharedCheck_3862_; 
v_a_3853_ = lean_ctor_get(v___y_3852_, 0);
v_isSharedCheck_3862_ = !lean_is_exclusive(v___y_3852_);
if (v_isSharedCheck_3862_ == 0)
{
v___x_3855_ = v___y_3852_;
v_isShared_3856_ = v_isSharedCheck_3862_;
goto v_resetjp_3854_;
}
else
{
lean_inc(v_a_3853_);
lean_dec(v___y_3852_);
v___x_3855_ = lean_box(0);
v_isShared_3856_ = v_isSharedCheck_3862_;
goto v_resetjp_3854_;
}
v_resetjp_3854_:
{
if (lean_obj_tag(v_a_3853_) == 0)
{
lean_object* v_a_3857_; lean_object* v___x_3859_; 
lean_dec(v_a_3837_);
lean_dec_ref(v_consumeParamPred_3836_);
v_a_3857_ = lean_ctor_get(v_a_3853_, 0);
lean_inc(v_a_3857_);
lean_dec_ref_known(v_a_3853_, 1);
if (v_isShared_3856_ == 0)
{
lean_ctor_set(v___x_3855_, 0, v_a_3857_);
v___x_3859_ = v___x_3855_;
goto v_reusejp_3858_;
}
else
{
lean_object* v_reuseFailAlloc_3860_; 
v_reuseFailAlloc_3860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3860_, 0, v_a_3857_);
v___x_3859_ = v_reuseFailAlloc_3860_;
goto v_reusejp_3858_;
}
v_reusejp_3858_:
{
return v___x_3859_;
}
}
else
{
lean_object* v_a_3861_; 
lean_del_object(v___x_3855_);
v_a_3861_ = lean_ctor_get(v_a_3853_, 0);
lean_inc(v_a_3861_);
lean_dec_ref_known(v_a_3853_, 1);
v_a_3847_ = v_a_3861_;
goto v___jp_3846_;
}
}
}
else
{
lean_object* v_a_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3870_; 
lean_dec(v_a_3837_);
lean_dec_ref(v_consumeParamPred_3836_);
v_a_3863_ = lean_ctor_get(v___y_3852_, 0);
v_isSharedCheck_3870_ = !lean_is_exclusive(v___y_3852_);
if (v_isSharedCheck_3870_ == 0)
{
v___x_3865_ = v___y_3852_;
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_a_3863_);
lean_dec(v___y_3852_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3870_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3868_; 
if (v_isShared_3866_ == 0)
{
v___x_3868_ = v___x_3865_;
goto v_reusejp_3867_;
}
else
{
lean_object* v_reuseFailAlloc_3869_; 
v_reuseFailAlloc_3869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3869_, 0, v_a_3863_);
v___x_3868_ = v_reuseFailAlloc_3869_;
goto v_reusejp_3867_;
}
v_reusejp_3867_:
{
return v___x_3868_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg___boxed(lean_object* v_upperBound_3895_, lean_object* v_args_3896_, lean_object* v_consumeParamPred_3897_, lean_object* v_a_3898_, lean_object* v_b_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_, lean_object* v___y_3906_){
_start:
{
lean_object* v_res_3907_; 
v_res_3907_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v_upperBound_3895_, v_args_3896_, v_consumeParamPred_3897_, v_a_3898_, v_b_3899_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
lean_dec(v___y_3905_);
lean_dec_ref(v___y_3904_);
lean_dec(v___y_3903_);
lean_dec_ref(v___y_3902_);
lean_dec(v___y_3901_);
lean_dec_ref(v___y_3900_);
lean_dec_ref(v_args_3896_);
lean_dec(v_upperBound_3895_);
return v_res_3907_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(lean_object* v_args_3908_, lean_object* v_consumeParamPred_3909_, lean_object* v_k_3910_, lean_object* v_a_3911_, lean_object* v_a_3912_, lean_object* v_a_3913_, lean_object* v_a_3914_, lean_object* v_a_3915_, lean_object* v_a_3916_){
_start:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3918_ = lean_unsigned_to_nat(0u);
v___x_3919_ = lean_array_get_size(v_args_3908_);
v___x_3920_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v___x_3919_, v_args_3908_, v_consumeParamPred_3909_, v___x_3918_, v_k_3910_, v_a_3911_, v_a_3912_, v_a_3913_, v_a_3914_, v_a_3915_, v_a_3916_);
return v___x_3920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux___boxed(lean_object* v_args_3921_, lean_object* v_consumeParamPred_3922_, lean_object* v_k_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_, lean_object* v_a_3927_, lean_object* v_a_3928_, lean_object* v_a_3929_, lean_object* v___y_3930_){
_start:
{
lean_object* v_res_3931_; 
v_res_3931_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_3921_, v_consumeParamPred_3922_, v_k_3923_, v_a_3924_, v_a_3925_, v_a_3926_, v_a_3927_, v_a_3928_, v_a_3929_);
lean_dec(v_a_3929_);
lean_dec_ref(v_a_3928_);
lean_dec(v_a_3927_);
lean_dec_ref(v_a_3926_);
lean_dec(v_a_3925_);
lean_dec_ref(v_a_3924_);
lean_dec_ref(v_args_3921_);
return v_res_3931_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(lean_object* v_upperBound_3932_, lean_object* v_args_3933_, lean_object* v_consumeParamPred_3934_, lean_object* v_inst_3935_, lean_object* v_R_3936_, lean_object* v_a_3937_, lean_object* v_b_3938_, lean_object* v_c_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
lean_object* v___x_3947_; 
v___x_3947_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___redArg(v_upperBound_3932_, v_args_3933_, v_consumeParamPred_3934_, v_a_3937_, v_b_3938_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_);
return v___x_3947_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0___boxed(lean_object* v_upperBound_3948_, lean_object* v_args_3949_, lean_object* v_consumeParamPred_3950_, lean_object* v_inst_3951_, lean_object* v_R_3952_, lean_object* v_a_3953_, lean_object* v_b_3954_, lean_object* v_c_3955_, lean_object* v___y_3956_, lean_object* v___y_3957_, lean_object* v___y_3958_, lean_object* v___y_3959_, lean_object* v___y_3960_, lean_object* v___y_3961_, lean_object* v___y_3962_){
_start:
{
lean_object* v_res_3963_; 
v_res_3963_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux_spec__0(v_upperBound_3948_, v_args_3949_, v_consumeParamPred_3950_, v_inst_3951_, v_R_3952_, v_a_3953_, v_b_3954_, v_c_3955_, v___y_3956_, v___y_3957_, v___y_3958_, v___y_3959_, v___y_3960_, v___y_3961_);
lean_dec(v___y_3961_);
lean_dec_ref(v___y_3960_);
lean_dec(v___y_3959_);
lean_dec_ref(v___y_3958_);
lean_dec(v___y_3957_);
lean_dec_ref(v___y_3956_);
lean_dec_ref(v_args_3949_);
lean_dec(v_upperBound_3948_);
return v_res_3963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(lean_object* v_args_3964_, lean_object* v_ps_3965_, lean_object* v_k_3966_, lean_object* v_a_3967_, lean_object* v_a_3968_, lean_object* v_a_3969_, lean_object* v_a_3970_, lean_object* v_a_3971_, lean_object* v_a_3972_){
_start:
{
lean_object* v___f_3974_; lean_object* v___x_3975_; 
v___f_3974_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3974_, 0, v_ps_3965_);
v___x_3975_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_3964_, v___f_3974_, v_k_3966_, v_a_3967_, v_a_3968_, v_a_3969_, v_a_3970_, v_a_3971_, v_a_3972_);
return v___x_3975_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore___boxed(lean_object* v_args_3976_, lean_object* v_ps_3977_, lean_object* v_k_3978_, lean_object* v_a_3979_, lean_object* v_a_3980_, lean_object* v_a_3981_, lean_object* v_a_3982_, lean_object* v_a_3983_, lean_object* v_a_3984_, lean_object* v___y_3985_){
_start:
{
lean_object* v_res_3986_; 
v_res_3986_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_3976_, v_ps_3977_, v_k_3978_, v_a_3979_, v_a_3980_, v_a_3981_, v_a_3982_, v_a_3983_, v_a_3984_);
lean_dec(v_a_3984_);
lean_dec_ref(v_a_3983_);
lean_dec(v_a_3982_);
lean_dec_ref(v_a_3981_);
lean_dec(v_a_3980_);
lean_dec_ref(v_a_3979_);
lean_dec_ref(v_args_3976_);
return v_res_3986_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(lean_object* v_x_3987_){
_start:
{
uint8_t v___x_3988_; 
v___x_3988_ = 1;
return v___x_3988_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0___boxed(lean_object* v_x_3989_){
_start:
{
uint8_t v_res_3990_; lean_object* v_r_3991_; 
v_res_3990_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___lam__0(v_x_3989_);
lean_dec(v_x_3989_);
v_r_3991_ = lean_box(v_res_3990_);
return v_r_3991_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(lean_object* v_args_3993_, lean_object* v_k_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_, lean_object* v_a_3998_, lean_object* v_a_3999_, lean_object* v_a_4000_){
_start:
{
lean_object* v___f_4002_; lean_object* v___x_4003_; 
v___f_4002_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___closed__0));
v___x_4003_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeAux(v_args_3993_, v___f_4002_, v_k_3994_, v_a_3995_, v_a_3996_, v_a_3997_, v_a_3998_, v_a_3999_, v_a_4000_);
return v___x_4003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll___boxed(lean_object* v_args_4004_, lean_object* v_k_4005_, lean_object* v_a_4006_, lean_object* v_a_4007_, lean_object* v_a_4008_, lean_object* v_a_4009_, lean_object* v_a_4010_, lean_object* v_a_4011_, lean_object* v___y_4012_){
_start:
{
lean_object* v_res_4013_; 
v_res_4013_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4004_, v_k_4005_, v_a_4006_, v_a_4007_, v_a_4008_, v_a_4009_, v_a_4010_, v_a_4011_);
lean_dec(v_a_4011_);
lean_dec_ref(v_a_4010_);
lean_dec(v_a_4009_);
lean_dec_ref(v_a_4008_);
lean_dec(v_a_4007_);
lean_dec_ref(v_a_4006_);
lean_dec_ref(v_args_4004_);
return v_res_4013_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(lean_object* v_upperBound_4014_, lean_object* v_args_4015_, lean_object* v_ps_4016_, lean_object* v_a_4017_, lean_object* v_b_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_){
_start:
{
lean_object* v_a_4023_; uint8_t v___x_4027_; 
v___x_4027_ = lean_nat_dec_lt(v_a_4017_, v_upperBound_4014_);
if (v___x_4027_ == 0)
{
lean_object* v___x_4028_; 
lean_dec(v_a_4017_);
lean_dec_ref(v_ps_4016_);
v___x_4028_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4028_, 0, v_b_4018_);
return v___x_4028_;
}
else
{
lean_object* v___x_4029_; 
v___x_4029_ = lean_array_fget_borrowed(v_args_4015_, v_a_4017_);
if (lean_obj_tag(v___x_4029_) == 0)
{
v_a_4023_ = v_b_4018_;
goto v___jp_4022_;
}
else
{
lean_object* v_fvarId_4030_; lean_object* v_varMap_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v_vars_4035_; uint8_t v___x_4036_; lean_object* v___x_4037_; uint8_t v_isPossibleRef_4038_; 
v_fvarId_4030_ = lean_ctor_get(v___x_4029_, 0);
v_varMap_4031_ = lean_ctor_get(v___y_4019_, 2);
v___x_4032_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_4030_);
lean_inc(v_varMap_4031_);
v___x_4033_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_4032_, v_varMap_4031_, v_fvarId_4030_);
v___x_4034_ = lean_st_ref_get(v___y_4020_);
v_vars_4035_ = lean_ctor_get(v___x_4034_, 0);
lean_inc_ref(v_vars_4035_);
lean_dec(v___x_4034_);
v___x_4036_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_4035_, v_fvarId_4030_);
lean_dec_ref(v_vars_4035_);
v___x_4037_ = lean_st_ref_get(v___y_4020_);
v_isPossibleRef_4038_ = lean_ctor_get_uint8(v___x_4033_, sizeof(void*)*2);
lean_dec(v___x_4033_);
if (v_isPossibleRef_4038_ == 0)
{
lean_dec(v___x_4037_);
v_a_4023_ = v_b_4018_;
goto v___jp_4022_;
}
else
{
uint8_t v___x_4039_; 
lean_inc(v_a_4017_);
v___x_4039_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isFirstOcc(v_args_4015_, v_a_4017_);
if (v___x_4039_ == 0)
{
lean_dec(v___x_4037_);
v_a_4023_ = v_b_4018_;
goto v___jp_4022_;
}
else
{
uint8_t v___x_4040_; 
lean_inc_ref(v_ps_4016_);
v___x_4040_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_isBorrowParam(v_fvarId_4030_, v_args_4015_, v_ps_4016_);
if (v___x_4040_ == 0)
{
lean_dec(v___x_4037_);
v_a_4023_ = v_b_4018_;
goto v___jp_4022_;
}
else
{
if (v___x_4036_ == 0)
{
lean_object* v_borrows_4041_; uint8_t v___x_4042_; 
v_borrows_4041_ = lean_ctor_get(v___x_4037_, 1);
lean_inc_ref(v_borrows_4041_);
lean_dec(v___x_4037_);
v___x_4042_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4041_, v_fvarId_4030_);
lean_dec_ref(v_borrows_4041_);
if (v___x_4042_ == 0)
{
lean_object* v___x_4043_; 
lean_inc(v_fvarId_4030_);
v___x_4043_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_4030_, v_b_4018_, v___y_4019_);
if (lean_obj_tag(v___x_4043_) == 0)
{
lean_object* v_a_4044_; 
v_a_4044_ = lean_ctor_get(v___x_4043_, 0);
lean_inc(v_a_4044_);
lean_dec_ref_known(v___x_4043_, 1);
v_a_4023_ = v_a_4044_;
goto v___jp_4022_;
}
else
{
lean_dec(v_a_4017_);
lean_dec_ref(v_ps_4016_);
return v___x_4043_;
}
}
else
{
v_a_4023_ = v_b_4018_;
goto v___jp_4022_;
}
}
else
{
lean_dec(v___x_4037_);
v_a_4023_ = v_b_4018_;
goto v___jp_4022_;
}
}
}
}
}
}
v___jp_4022_:
{
lean_object* v___x_4024_; lean_object* v___x_4025_; 
v___x_4024_ = lean_unsigned_to_nat(1u);
v___x_4025_ = lean_nat_add(v_a_4017_, v___x_4024_);
lean_dec(v_a_4017_);
v_a_4017_ = v___x_4025_;
v_b_4018_ = v_a_4023_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg___boxed(lean_object* v_upperBound_4045_, lean_object* v_args_4046_, lean_object* v_ps_4047_, lean_object* v_a_4048_, lean_object* v_b_4049_, lean_object* v___y_4050_, lean_object* v___y_4051_, lean_object* v___y_4052_){
_start:
{
lean_object* v_res_4053_; 
v_res_4053_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v_upperBound_4045_, v_args_4046_, v_ps_4047_, v_a_4048_, v_b_4049_, v___y_4050_, v___y_4051_);
lean_dec(v___y_4051_);
lean_dec_ref(v___y_4050_);
lean_dec_ref(v_args_4046_);
lean_dec(v_upperBound_4045_);
return v_res_4053_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(lean_object* v_args_4054_, lean_object* v_ps_4055_, lean_object* v_k_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_, lean_object* v_a_4062_){
_start:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; lean_object* v___x_4066_; 
v___x_4064_ = lean_unsigned_to_nat(0u);
v___x_4065_ = lean_array_get_size(v_args_4054_);
v___x_4066_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v___x_4065_, v_args_4054_, v_ps_4055_, v___x_4064_, v_k_4056_, v_a_4057_, v_a_4058_);
return v___x_4066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp___boxed(lean_object* v_args_4067_, lean_object* v_ps_4068_, lean_object* v_k_4069_, lean_object* v_a_4070_, lean_object* v_a_4071_, lean_object* v_a_4072_, lean_object* v_a_4073_, lean_object* v_a_4074_, lean_object* v_a_4075_, lean_object* v___y_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(v_args_4067_, v_ps_4068_, v_k_4069_, v_a_4070_, v_a_4071_, v_a_4072_, v_a_4073_, v_a_4074_, v_a_4075_);
lean_dec(v_a_4075_);
lean_dec_ref(v_a_4074_);
lean_dec(v_a_4073_);
lean_dec_ref(v_a_4072_);
lean_dec(v_a_4071_);
lean_dec_ref(v_a_4070_);
lean_dec_ref(v_args_4067_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(lean_object* v_upperBound_4078_, lean_object* v_args_4079_, lean_object* v_ps_4080_, lean_object* v_inst_4081_, lean_object* v_R_4082_, lean_object* v_a_4083_, lean_object* v_b_4084_, lean_object* v_c_4085_, lean_object* v___y_4086_, lean_object* v___y_4087_, lean_object* v___y_4088_, lean_object* v___y_4089_, lean_object* v___y_4090_, lean_object* v___y_4091_){
_start:
{
lean_object* v___x_4093_; 
v___x_4093_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___redArg(v_upperBound_4078_, v_args_4079_, v_ps_4080_, v_a_4083_, v_b_4084_, v___y_4086_, v___y_4087_);
return v___x_4093_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0___boxed(lean_object* v_upperBound_4094_, lean_object* v_args_4095_, lean_object* v_ps_4096_, lean_object* v_inst_4097_, lean_object* v_R_4098_, lean_object* v_a_4099_, lean_object* v_b_4100_, lean_object* v_c_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp_spec__0(v_upperBound_4094_, v_args_4095_, v_ps_4096_, v_inst_4097_, v_R_4098_, v_a_4099_, v_b_4100_, v_c_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec_ref(v___y_4102_);
lean_dec_ref(v_args_4095_);
lean_dec(v_upperBound_4094_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(lean_object* v_fvarId_4110_, lean_object* v_k_4111_, lean_object* v_a_4112_, lean_object* v_a_4113_){
_start:
{
lean_object* v_varMap_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v_borrows_4119_; uint8_t v___x_4120_; lean_object* v___x_4121_; uint8_t v_isPossibleRef_4122_; 
v_varMap_4115_ = lean_ctor_get(v_a_4112_, 2);
v___x_4116_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_4110_);
lean_inc(v_varMap_4115_);
v___x_4117_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_4116_, v_varMap_4115_, v_fvarId_4110_);
v___x_4118_ = lean_st_ref_get(v_a_4113_);
v_borrows_4119_ = lean_ctor_get(v___x_4118_, 1);
lean_inc_ref(v_borrows_4119_);
lean_dec(v___x_4118_);
v___x_4120_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4119_, v_fvarId_4110_);
lean_dec_ref(v_borrows_4119_);
v___x_4121_ = lean_st_ref_get(v_a_4113_);
v_isPossibleRef_4122_ = lean_ctor_get_uint8(v___x_4117_, sizeof(void*)*2);
lean_dec(v___x_4117_);
if (v_isPossibleRef_4122_ == 0)
{
lean_object* v___x_4123_; 
lean_dec(v___x_4121_);
lean_dec(v_fvarId_4110_);
v___x_4123_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4123_, 0, v_k_4111_);
return v___x_4123_;
}
else
{
if (v___x_4120_ == 0)
{
lean_object* v_vars_4124_; uint8_t v___x_4125_; 
v_vars_4124_ = lean_ctor_get(v___x_4121_, 0);
lean_inc_ref(v_vars_4124_);
lean_dec(v___x_4121_);
v___x_4125_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_vars_4124_, v_fvarId_4110_);
lean_dec_ref(v_vars_4124_);
if (v___x_4125_ == 0)
{
lean_object* v___x_4126_; 
v___x_4126_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDec___redArg(v_fvarId_4110_, v_k_4111_, v_a_4112_);
return v___x_4126_;
}
else
{
lean_object* v___x_4127_; 
lean_dec(v_fvarId_4110_);
v___x_4127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4127_, 0, v_k_4111_);
return v___x_4127_;
}
}
else
{
lean_object* v___x_4128_; 
lean_dec(v___x_4121_);
lean_dec(v_fvarId_4110_);
v___x_4128_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4128_, 0, v_k_4111_);
return v___x_4128_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg___boxed(lean_object* v_fvarId_4129_, lean_object* v_k_4130_, lean_object* v_a_4131_, lean_object* v_a_4132_, lean_object* v___y_4133_){
_start:
{
lean_object* v_res_4134_; 
v_res_4134_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4129_, v_k_4130_, v_a_4131_, v_a_4132_);
lean_dec(v_a_4132_);
lean_dec_ref(v_a_4131_);
return v_res_4134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(lean_object* v_fvarId_4135_, lean_object* v_k_4136_, lean_object* v_a_4137_, lean_object* v_a_4138_, lean_object* v_a_4139_, lean_object* v_a_4140_, lean_object* v_a_4141_, lean_object* v_a_4142_){
_start:
{
lean_object* v___x_4144_; 
v___x_4144_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4135_, v_k_4136_, v_a_4137_, v_a_4138_);
return v___x_4144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___boxed(lean_object* v_fvarId_4145_, lean_object* v_k_4146_, lean_object* v_a_4147_, lean_object* v_a_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_, lean_object* v___y_4153_){
_start:
{
lean_object* v_res_4154_; 
v_res_4154_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded(v_fvarId_4145_, v_k_4146_, v_a_4147_, v_a_4148_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_);
lean_dec(v_a_4152_);
lean_dec_ref(v_a_4151_);
lean_dec(v_a_4150_);
lean_dec_ref(v_a_4149_);
lean_dec(v_a_4148_);
lean_dec_ref(v_a_4147_);
return v_res_4154_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(lean_object* v_a_4155_, lean_object* v_x_4156_){
_start:
{
if (lean_obj_tag(v_x_4156_) == 0)
{
return v_x_4156_;
}
else
{
lean_object* v_key_4157_; lean_object* v_value_4158_; lean_object* v_tail_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4168_; 
v_key_4157_ = lean_ctor_get(v_x_4156_, 0);
v_value_4158_ = lean_ctor_get(v_x_4156_, 1);
v_tail_4159_ = lean_ctor_get(v_x_4156_, 2);
v_isSharedCheck_4168_ = !lean_is_exclusive(v_x_4156_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4161_ = v_x_4156_;
v_isShared_4162_ = v_isSharedCheck_4168_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_tail_4159_);
lean_inc(v_value_4158_);
lean_inc(v_key_4157_);
lean_dec(v_x_4156_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4168_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
uint8_t v___x_4163_; 
v___x_4163_ = l_Lean_instBEqFVarId_beq(v_key_4157_, v_a_4155_);
if (v___x_4163_ == 0)
{
lean_object* v___x_4164_; lean_object* v___x_4166_; 
v___x_4164_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4155_, v_tail_4159_);
if (v_isShared_4162_ == 0)
{
lean_ctor_set(v___x_4161_, 2, v___x_4164_);
v___x_4166_ = v___x_4161_;
goto v_reusejp_4165_;
}
else
{
lean_object* v_reuseFailAlloc_4167_; 
v_reuseFailAlloc_4167_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_4167_, 0, v_key_4157_);
lean_ctor_set(v_reuseFailAlloc_4167_, 1, v_value_4158_);
lean_ctor_set(v_reuseFailAlloc_4167_, 2, v___x_4164_);
v___x_4166_ = v_reuseFailAlloc_4167_;
goto v_reusejp_4165_;
}
v_reusejp_4165_:
{
return v___x_4166_;
}
}
else
{
lean_del_object(v___x_4161_);
lean_dec(v_value_4158_);
lean_dec(v_key_4157_);
return v_tail_4159_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg___boxed(lean_object* v_a_4169_, lean_object* v_x_4170_){
_start:
{
lean_object* v_res_4171_; 
v_res_4171_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4169_, v_x_4170_);
lean_dec(v_a_4169_);
return v_res_4171_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(lean_object* v_m_4172_, lean_object* v_a_4173_){
_start:
{
lean_object* v_size_4174_; lean_object* v_buckets_4175_; lean_object* v___x_4176_; uint64_t v___x_4177_; uint64_t v___x_4178_; uint64_t v___x_4179_; uint64_t v_fold_4180_; uint64_t v___x_4181_; uint64_t v___x_4182_; uint64_t v___x_4183_; size_t v___x_4184_; size_t v___x_4185_; size_t v___x_4186_; size_t v___x_4187_; size_t v___x_4188_; lean_object* v_bkt_4189_; uint8_t v___x_4190_; 
v_size_4174_ = lean_ctor_get(v_m_4172_, 0);
v_buckets_4175_ = lean_ctor_get(v_m_4172_, 1);
v___x_4176_ = lean_array_get_size(v_buckets_4175_);
v___x_4177_ = l_Lean_instHashableFVarId_hash(v_a_4173_);
v___x_4178_ = 32ULL;
v___x_4179_ = lean_uint64_shift_right(v___x_4177_, v___x_4178_);
v_fold_4180_ = lean_uint64_xor(v___x_4177_, v___x_4179_);
v___x_4181_ = 16ULL;
v___x_4182_ = lean_uint64_shift_right(v_fold_4180_, v___x_4181_);
v___x_4183_ = lean_uint64_xor(v_fold_4180_, v___x_4182_);
v___x_4184_ = lean_uint64_to_usize(v___x_4183_);
v___x_4185_ = lean_usize_of_nat(v___x_4176_);
v___x_4186_ = ((size_t)1ULL);
v___x_4187_ = lean_usize_sub(v___x_4185_, v___x_4186_);
v___x_4188_ = lean_usize_land(v___x_4184_, v___x_4187_);
v_bkt_4189_ = lean_array_uget_borrowed(v_buckets_4175_, v___x_4188_);
v___x_4190_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__0_spec__0___redArg(v_a_4173_, v_bkt_4189_);
if (v___x_4190_ == 0)
{
return v_m_4172_;
}
else
{
lean_object* v___x_4192_; uint8_t v_isShared_4193_; uint8_t v_isSharedCheck_4203_; 
lean_inc(v_bkt_4189_);
lean_inc_ref(v_buckets_4175_);
lean_inc(v_size_4174_);
v_isSharedCheck_4203_ = !lean_is_exclusive(v_m_4172_);
if (v_isSharedCheck_4203_ == 0)
{
lean_object* v_unused_4204_; lean_object* v_unused_4205_; 
v_unused_4204_ = lean_ctor_get(v_m_4172_, 1);
lean_dec(v_unused_4204_);
v_unused_4205_ = lean_ctor_get(v_m_4172_, 0);
lean_dec(v_unused_4205_);
v___x_4192_ = v_m_4172_;
v_isShared_4193_ = v_isSharedCheck_4203_;
goto v_resetjp_4191_;
}
else
{
lean_dec(v_m_4172_);
v___x_4192_ = lean_box(0);
v_isShared_4193_ = v_isSharedCheck_4203_;
goto v_resetjp_4191_;
}
v_resetjp_4191_:
{
lean_object* v___x_4194_; lean_object* v_buckets_x27_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4201_; 
v___x_4194_ = lean_box(0);
v_buckets_x27_4195_ = lean_array_uset(v_buckets_4175_, v___x_4188_, v___x_4194_);
v___x_4196_ = lean_unsigned_to_nat(1u);
v___x_4197_ = lean_nat_sub(v_size_4174_, v___x_4196_);
lean_dec(v_size_4174_);
v___x_4198_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4173_, v_bkt_4189_);
v___x_4199_ = lean_array_uset(v_buckets_x27_4195_, v___x_4188_, v___x_4198_);
if (v_isShared_4193_ == 0)
{
lean_ctor_set(v___x_4192_, 1, v___x_4199_);
lean_ctor_set(v___x_4192_, 0, v___x_4197_);
v___x_4201_ = v___x_4192_;
goto v_reusejp_4200_;
}
else
{
lean_object* v_reuseFailAlloc_4202_; 
v_reuseFailAlloc_4202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4202_, 0, v___x_4197_);
lean_ctor_set(v_reuseFailAlloc_4202_, 1, v___x_4199_);
v___x_4201_ = v_reuseFailAlloc_4202_;
goto v_reusejp_4200_;
}
v_reusejp_4200_:
{
return v___x_4201_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg___boxed(lean_object* v_m_4206_, lean_object* v_a_4207_){
_start:
{
lean_object* v_res_4208_; 
v_res_4208_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_m_4206_, v_a_4207_);
lean_dec(v_a_4207_);
return v_res_4208_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(lean_object* v_as_4209_, size_t v_i_4210_, size_t v_stop_4211_, lean_object* v_b_4212_, lean_object* v___y_4213_, lean_object* v___y_4214_){
_start:
{
lean_object* v_a_4217_; uint8_t v___x_4221_; 
v___x_4221_ = lean_usize_dec_eq(v_i_4210_, v_stop_4211_);
if (v___x_4221_ == 0)
{
lean_object* v___x_4222_; lean_object* v_fvarId_4223_; lean_object* v___x_4224_; 
v___x_4222_ = lean_array_uget_borrowed(v_as_4209_, v_i_4210_);
v_fvarId_4223_ = lean_ctor_get(v___x_4222_, 0);
lean_inc(v_fvarId_4223_);
v___x_4224_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4223_, v_b_4212_, v___y_4213_, v___y_4214_);
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4226_; lean_object* v_vars_4227_; lean_object* v_borrows_4228_; lean_object* v___x_4230_; uint8_t v_isShared_4231_; uint8_t v_isSharedCheck_4238_; 
v_a_4225_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4225_);
lean_dec_ref_known(v___x_4224_, 1);
v___x_4226_ = lean_st_ref_take(v___y_4214_);
v_vars_4227_ = lean_ctor_get(v___x_4226_, 0);
v_borrows_4228_ = lean_ctor_get(v___x_4226_, 1);
v_isSharedCheck_4238_ = !lean_is_exclusive(v___x_4226_);
if (v_isSharedCheck_4238_ == 0)
{
v___x_4230_ = v___x_4226_;
v_isShared_4231_ = v_isSharedCheck_4238_;
goto v_resetjp_4229_;
}
else
{
lean_inc(v_borrows_4228_);
lean_inc(v_vars_4227_);
lean_dec(v___x_4226_);
v___x_4230_ = lean_box(0);
v_isShared_4231_ = v_isSharedCheck_4238_;
goto v_resetjp_4229_;
}
v_resetjp_4229_:
{
lean_object* v_vars_4232_; lean_object* v_borrows_4233_; lean_object* v___x_4235_; 
v_vars_4232_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_vars_4227_, v_fvarId_4223_);
v_borrows_4233_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_borrows_4228_, v_fvarId_4223_);
if (v_isShared_4231_ == 0)
{
lean_ctor_set(v___x_4230_, 1, v_borrows_4233_);
lean_ctor_set(v___x_4230_, 0, v_vars_4232_);
v___x_4235_ = v___x_4230_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4237_; 
v_reuseFailAlloc_4237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4237_, 0, v_vars_4232_);
lean_ctor_set(v_reuseFailAlloc_4237_, 1, v_borrows_4233_);
v___x_4235_ = v_reuseFailAlloc_4237_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
lean_object* v___x_4236_; 
v___x_4236_ = lean_st_ref_put(v___y_4214_, v___x_4235_);
v_a_4217_ = v_a_4225_;
goto v___jp_4216_;
}
}
}
else
{
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4239_; 
v_a_4239_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4239_);
lean_dec_ref_known(v___x_4224_, 1);
v_a_4217_ = v_a_4239_;
goto v___jp_4216_;
}
else
{
return v___x_4224_;
}
}
}
else
{
lean_object* v___x_4240_; 
v___x_4240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4240_, 0, v_b_4212_);
return v___x_4240_;
}
v___jp_4216_:
{
size_t v___x_4218_; size_t v___x_4219_; 
v___x_4218_ = ((size_t)1ULL);
v___x_4219_ = lean_usize_add(v_i_4210_, v___x_4218_);
v_i_4210_ = v___x_4219_;
v_b_4212_ = v_a_4217_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg___boxed(lean_object* v_as_4241_, lean_object* v_i_4242_, lean_object* v_stop_4243_, lean_object* v_b_4244_, lean_object* v___y_4245_, lean_object* v___y_4246_, lean_object* v___y_4247_){
_start:
{
size_t v_i_boxed_4248_; size_t v_stop_boxed_4249_; lean_object* v_res_4250_; 
v_i_boxed_4248_ = lean_unbox_usize(v_i_4242_);
lean_dec(v_i_4242_);
v_stop_boxed_4249_ = lean_unbox_usize(v_stop_4243_);
lean_dec(v_stop_4243_);
v_res_4250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_as_4241_, v_i_boxed_4248_, v_stop_boxed_4249_, v_b_4244_, v___y_4245_, v___y_4246_);
lean_dec(v___y_4246_);
lean_dec_ref(v___y_4245_);
lean_dec_ref(v_as_4241_);
return v_res_4250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(lean_object* v_ps_4251_, lean_object* v_k_4252_, lean_object* v_a_4253_, lean_object* v_a_4254_, lean_object* v_a_4255_, lean_object* v_a_4256_, lean_object* v_a_4257_, lean_object* v_a_4258_){
_start:
{
lean_object* v___x_4260_; lean_object* v___x_4261_; uint8_t v___x_4262_; 
v___x_4260_ = lean_unsigned_to_nat(0u);
v___x_4261_ = lean_array_get_size(v_ps_4251_);
v___x_4262_ = lean_nat_dec_lt(v___x_4260_, v___x_4261_);
if (v___x_4262_ == 0)
{
lean_object* v___x_4263_; 
v___x_4263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4263_, 0, v_k_4252_);
return v___x_4263_;
}
else
{
uint8_t v___x_4264_; 
v___x_4264_ = lean_nat_dec_le(v___x_4261_, v___x_4261_);
if (v___x_4264_ == 0)
{
if (v___x_4262_ == 0)
{
lean_object* v___x_4265_; 
v___x_4265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4265_, 0, v_k_4252_);
return v___x_4265_;
}
else
{
size_t v___x_4266_; size_t v___x_4267_; lean_object* v___x_4268_; 
v___x_4266_ = ((size_t)0ULL);
v___x_4267_ = lean_usize_of_nat(v___x_4261_);
v___x_4268_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_ps_4251_, v___x_4266_, v___x_4267_, v_k_4252_, v_a_4253_, v_a_4254_);
return v___x_4268_;
}
}
else
{
size_t v___x_4269_; size_t v___x_4270_; lean_object* v___x_4271_; 
v___x_4269_ = ((size_t)0ULL);
v___x_4270_ = lean_usize_of_nat(v___x_4261_);
v___x_4271_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_ps_4251_, v___x_4269_, v___x_4270_, v_k_4252_, v_a_4253_, v_a_4254_);
return v___x_4271_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams___boxed(lean_object* v_ps_4272_, lean_object* v_k_4273_, lean_object* v_a_4274_, lean_object* v_a_4275_, lean_object* v_a_4276_, lean_object* v_a_4277_, lean_object* v_a_4278_, lean_object* v_a_4279_, lean_object* v___y_4280_){
_start:
{
lean_object* v_res_4281_; 
v_res_4281_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_ps_4272_, v_k_4273_, v_a_4274_, v_a_4275_, v_a_4276_, v_a_4277_, v_a_4278_, v_a_4279_);
lean_dec(v_a_4279_);
lean_dec_ref(v_a_4278_);
lean_dec(v_a_4277_);
lean_dec_ref(v_a_4276_);
lean_dec(v_a_4275_);
lean_dec_ref(v_a_4274_);
lean_dec_ref(v_ps_4272_);
return v_res_4281_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(lean_object* v_00_u03b2_4282_, lean_object* v_m_4283_, lean_object* v_a_4284_){
_start:
{
lean_object* v___x_4285_; 
v___x_4285_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_m_4283_, v_a_4284_);
return v___x_4285_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___boxed(lean_object* v_00_u03b2_4286_, lean_object* v_m_4287_, lean_object* v_a_4288_){
_start:
{
lean_object* v_res_4289_; 
v_res_4289_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0(v_00_u03b2_4286_, v_m_4287_, v_a_4288_);
lean_dec(v_a_4288_);
return v_res_4289_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1(lean_object* v_as_4290_, size_t v_i_4291_, size_t v_stop_4292_, lean_object* v_b_4293_, lean_object* v___y_4294_, lean_object* v___y_4295_, lean_object* v___y_4296_, lean_object* v___y_4297_, lean_object* v___y_4298_, lean_object* v___y_4299_){
_start:
{
lean_object* v___x_4301_; 
v___x_4301_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___redArg(v_as_4290_, v_i_4291_, v_stop_4292_, v_b_4293_, v___y_4294_, v___y_4295_);
return v___x_4301_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1___boxed(lean_object* v_as_4302_, lean_object* v_i_4303_, lean_object* v_stop_4304_, lean_object* v_b_4305_, lean_object* v___y_4306_, lean_object* v___y_4307_, lean_object* v___y_4308_, lean_object* v___y_4309_, lean_object* v___y_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_){
_start:
{
size_t v_i_boxed_4313_; size_t v_stop_boxed_4314_; lean_object* v_res_4315_; 
v_i_boxed_4313_ = lean_unbox_usize(v_i_4303_);
lean_dec(v_i_4303_);
v_stop_boxed_4314_ = lean_unbox_usize(v_stop_4304_);
lean_dec(v_stop_4304_);
v_res_4315_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__1(v_as_4302_, v_i_boxed_4313_, v_stop_boxed_4314_, v_b_4305_, v___y_4306_, v___y_4307_, v___y_4308_, v___y_4309_, v___y_4310_, v___y_4311_);
lean_dec(v___y_4311_);
lean_dec_ref(v___y_4310_);
lean_dec(v___y_4309_);
lean_dec_ref(v___y_4308_);
lean_dec(v___y_4307_);
lean_dec_ref(v___y_4306_);
lean_dec_ref(v_as_4302_);
return v_res_4315_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0(lean_object* v_00_u03b2_4316_, lean_object* v_a_4317_, lean_object* v_x_4318_){
_start:
{
lean_object* v___x_4319_; 
v___x_4319_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___redArg(v_a_4317_, v_x_4318_);
return v___x_4319_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0___boxed(lean_object* v_00_u03b2_4320_, lean_object* v_a_4321_, lean_object* v_x_4322_){
_start:
{
lean_object* v_res_4323_; 
v_res_4323_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0_spec__0(v_00_u03b2_4320_, v_a_4321_, v_x_4322_);
lean_dec(v_a_4321_);
return v_res_4323_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0(void){
_start:
{
lean_object* v___x_4324_; 
v___x_4324_ = l_Lean_Compiler_LCNF_instInhabitedCode_default__1___redArg();
return v___x_4324_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(lean_object* v_msg_4325_){
_start:
{
lean_object* v___x_4326_; lean_object* v___x_4327_; 
v___x_4326_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0);
v___x_4327_ = lean_panic_fn_borrowed(v___x_4326_, v_msg_4325_);
return v___x_4327_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0(void){
_start:
{
lean_object* v___x_4328_; 
v___x_4328_ = l_Lean_Compiler_LCNF_instInhabitedSignature_default___redArg();
return v___x_4328_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(lean_object* v_msg_4329_){
_start:
{
lean_object* v___x_4330_; lean_object* v___x_4331_; 
v___x_4330_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1___closed__0);
v___x_4331_ = lean_panic_fn_borrowed(v___x_4330_, v_msg_4329_);
return v___x_4331_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(lean_object* v_msg_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_){
_start:
{
lean_object* v___x_4340_; lean_object* v___x_4341_; lean_object* v_toApplicative_4342_; lean_object* v___x_4344_; uint8_t v_isShared_4345_; uint8_t v_isSharedCheck_4405_; 
v___x_4340_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__0);
v___x_4341_ = l_StateRefT_x27_instMonad___redArg(v___x_4340_);
v_toApplicative_4342_ = lean_ctor_get(v___x_4341_, 0);
v_isSharedCheck_4405_ = !lean_is_exclusive(v___x_4341_);
if (v_isSharedCheck_4405_ == 0)
{
lean_object* v_unused_4406_; 
v_unused_4406_ = lean_ctor_get(v___x_4341_, 1);
lean_dec(v_unused_4406_);
v___x_4344_ = v___x_4341_;
v_isShared_4345_ = v_isSharedCheck_4405_;
goto v_resetjp_4343_;
}
else
{
lean_inc(v_toApplicative_4342_);
lean_dec(v___x_4341_);
v___x_4344_ = lean_box(0);
v_isShared_4345_ = v_isSharedCheck_4405_;
goto v_resetjp_4343_;
}
v_resetjp_4343_:
{
lean_object* v_toFunctor_4346_; lean_object* v_toSeq_4347_; lean_object* v_toSeqLeft_4348_; lean_object* v_toSeqRight_4349_; lean_object* v___x_4351_; uint8_t v_isShared_4352_; uint8_t v_isSharedCheck_4403_; 
v_toFunctor_4346_ = lean_ctor_get(v_toApplicative_4342_, 0);
v_toSeq_4347_ = lean_ctor_get(v_toApplicative_4342_, 2);
v_toSeqLeft_4348_ = lean_ctor_get(v_toApplicative_4342_, 3);
v_toSeqRight_4349_ = lean_ctor_get(v_toApplicative_4342_, 4);
v_isSharedCheck_4403_ = !lean_is_exclusive(v_toApplicative_4342_);
if (v_isSharedCheck_4403_ == 0)
{
lean_object* v_unused_4404_; 
v_unused_4404_ = lean_ctor_get(v_toApplicative_4342_, 1);
lean_dec(v_unused_4404_);
v___x_4351_ = v_toApplicative_4342_;
v_isShared_4352_ = v_isSharedCheck_4403_;
goto v_resetjp_4350_;
}
else
{
lean_inc(v_toSeqRight_4349_);
lean_inc(v_toSeqLeft_4348_);
lean_inc(v_toSeq_4347_);
lean_inc(v_toFunctor_4346_);
lean_dec(v_toApplicative_4342_);
v___x_4351_ = lean_box(0);
v_isShared_4352_ = v_isSharedCheck_4403_;
goto v_resetjp_4350_;
}
v_resetjp_4350_:
{
lean_object* v___f_4353_; lean_object* v___f_4354_; lean_object* v___f_4355_; lean_object* v___f_4356_; lean_object* v___x_4357_; lean_object* v___f_4358_; lean_object* v___f_4359_; lean_object* v___f_4360_; lean_object* v___x_4362_; 
v___f_4353_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__1));
v___f_4354_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__2));
lean_inc_ref(v_toFunctor_4346_);
v___f_4355_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4355_, 0, v_toFunctor_4346_);
v___f_4356_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4356_, 0, v_toFunctor_4346_);
v___x_4357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4357_, 0, v___f_4355_);
lean_ctor_set(v___x_4357_, 1, v___f_4356_);
v___f_4358_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4358_, 0, v_toSeqRight_4349_);
v___f_4359_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4359_, 0, v_toSeqLeft_4348_);
v___f_4360_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4360_, 0, v_toSeq_4347_);
if (v_isShared_4352_ == 0)
{
lean_ctor_set(v___x_4351_, 4, v___f_4358_);
lean_ctor_set(v___x_4351_, 3, v___f_4359_);
lean_ctor_set(v___x_4351_, 2, v___f_4360_);
lean_ctor_set(v___x_4351_, 1, v___f_4353_);
lean_ctor_set(v___x_4351_, 0, v___x_4357_);
v___x_4362_ = v___x_4351_;
goto v_reusejp_4361_;
}
else
{
lean_object* v_reuseFailAlloc_4402_; 
v_reuseFailAlloc_4402_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4402_, 0, v___x_4357_);
lean_ctor_set(v_reuseFailAlloc_4402_, 1, v___f_4353_);
lean_ctor_set(v_reuseFailAlloc_4402_, 2, v___f_4360_);
lean_ctor_set(v_reuseFailAlloc_4402_, 3, v___f_4359_);
lean_ctor_set(v_reuseFailAlloc_4402_, 4, v___f_4358_);
v___x_4362_ = v_reuseFailAlloc_4402_;
goto v_reusejp_4361_;
}
v_reusejp_4361_:
{
lean_object* v___x_4364_; 
if (v_isShared_4345_ == 0)
{
lean_ctor_set(v___x_4344_, 1, v___f_4354_);
lean_ctor_set(v___x_4344_, 0, v___x_4362_);
v___x_4364_ = v___x_4344_;
goto v_reusejp_4363_;
}
else
{
lean_object* v_reuseFailAlloc_4401_; 
v_reuseFailAlloc_4401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4401_, 0, v___x_4362_);
lean_ctor_set(v_reuseFailAlloc_4401_, 1, v___f_4354_);
v___x_4364_ = v_reuseFailAlloc_4401_;
goto v_reusejp_4363_;
}
v_reusejp_4363_:
{
lean_object* v___x_4365_; lean_object* v_toApplicative_4366_; lean_object* v___x_4368_; uint8_t v_isShared_4369_; uint8_t v_isSharedCheck_4399_; 
v___x_4365_ = l_StateRefT_x27_instMonad___redArg(v___x_4364_);
v_toApplicative_4366_ = lean_ctor_get(v___x_4365_, 0);
v_isSharedCheck_4399_ = !lean_is_exclusive(v___x_4365_);
if (v_isSharedCheck_4399_ == 0)
{
lean_object* v_unused_4400_; 
v_unused_4400_ = lean_ctor_get(v___x_4365_, 1);
lean_dec(v_unused_4400_);
v___x_4368_ = v___x_4365_;
v_isShared_4369_ = v_isSharedCheck_4399_;
goto v_resetjp_4367_;
}
else
{
lean_inc(v_toApplicative_4366_);
lean_dec(v___x_4365_);
v___x_4368_ = lean_box(0);
v_isShared_4369_ = v_isSharedCheck_4399_;
goto v_resetjp_4367_;
}
v_resetjp_4367_:
{
lean_object* v_toFunctor_4370_; lean_object* v_toSeq_4371_; lean_object* v_toSeqLeft_4372_; lean_object* v_toSeqRight_4373_; lean_object* v___x_4375_; uint8_t v_isShared_4376_; uint8_t v_isSharedCheck_4397_; 
v_toFunctor_4370_ = lean_ctor_get(v_toApplicative_4366_, 0);
v_toSeq_4371_ = lean_ctor_get(v_toApplicative_4366_, 2);
v_toSeqLeft_4372_ = lean_ctor_get(v_toApplicative_4366_, 3);
v_toSeqRight_4373_ = lean_ctor_get(v_toApplicative_4366_, 4);
v_isSharedCheck_4397_ = !lean_is_exclusive(v_toApplicative_4366_);
if (v_isSharedCheck_4397_ == 0)
{
lean_object* v_unused_4398_; 
v_unused_4398_ = lean_ctor_get(v_toApplicative_4366_, 1);
lean_dec(v_unused_4398_);
v___x_4375_ = v_toApplicative_4366_;
v_isShared_4376_ = v_isSharedCheck_4397_;
goto v_resetjp_4374_;
}
else
{
lean_inc(v_toSeqRight_4373_);
lean_inc(v_toSeqLeft_4372_);
lean_inc(v_toSeq_4371_);
lean_inc(v_toFunctor_4370_);
lean_dec(v_toApplicative_4366_);
v___x_4375_ = lean_box(0);
v_isShared_4376_ = v_isSharedCheck_4397_;
goto v_resetjp_4374_;
}
v_resetjp_4374_:
{
lean_object* v___f_4377_; lean_object* v___f_4378_; lean_object* v___f_4379_; lean_object* v___f_4380_; lean_object* v___x_4381_; lean_object* v___f_4382_; lean_object* v___f_4383_; lean_object* v___f_4384_; lean_object* v___x_4386_; 
v___f_4377_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__3));
v___f_4378_ = ((lean_object*)(l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode_spec__3___closed__4));
lean_inc_ref(v_toFunctor_4370_);
v___f_4379_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_4379_, 0, v_toFunctor_4370_);
v___f_4380_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4380_, 0, v_toFunctor_4370_);
v___x_4381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4381_, 0, v___f_4379_);
lean_ctor_set(v___x_4381_, 1, v___f_4380_);
v___f_4382_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4382_, 0, v_toSeqRight_4373_);
v___f_4383_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_4383_, 0, v_toSeqLeft_4372_);
v___f_4384_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4384_, 0, v_toSeq_4371_);
if (v_isShared_4376_ == 0)
{
lean_ctor_set(v___x_4375_, 4, v___f_4382_);
lean_ctor_set(v___x_4375_, 3, v___f_4383_);
lean_ctor_set(v___x_4375_, 2, v___f_4384_);
lean_ctor_set(v___x_4375_, 1, v___f_4377_);
lean_ctor_set(v___x_4375_, 0, v___x_4381_);
v___x_4386_ = v___x_4375_;
goto v_reusejp_4385_;
}
else
{
lean_object* v_reuseFailAlloc_4396_; 
v_reuseFailAlloc_4396_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4396_, 0, v___x_4381_);
lean_ctor_set(v_reuseFailAlloc_4396_, 1, v___f_4377_);
lean_ctor_set(v_reuseFailAlloc_4396_, 2, v___f_4384_);
lean_ctor_set(v_reuseFailAlloc_4396_, 3, v___f_4383_);
lean_ctor_set(v_reuseFailAlloc_4396_, 4, v___f_4382_);
v___x_4386_ = v_reuseFailAlloc_4396_;
goto v_reusejp_4385_;
}
v_reusejp_4385_:
{
lean_object* v___x_4388_; 
if (v_isShared_4369_ == 0)
{
lean_ctor_set(v___x_4368_, 1, v___f_4378_);
lean_ctor_set(v___x_4368_, 0, v___x_4386_);
v___x_4388_ = v___x_4368_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4395_; 
v_reuseFailAlloc_4395_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4395_, 0, v___x_4386_);
lean_ctor_set(v_reuseFailAlloc_4395_, 1, v___f_4378_);
v___x_4388_ = v_reuseFailAlloc_4395_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___f_4392_; lean_object* v___x_15342__overap_4393_; lean_object* v___x_4394_; 
v___x_4389_ = l_StateRefT_x27_instMonad___redArg(v___x_4388_);
v___x_4390_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0___closed__0);
v___x_4391_ = l_instInhabitedOfMonad___redArg(v___x_4389_, v___x_4390_);
v___f_4392_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_4392_, 0, v___x_4391_);
v___x_15342__overap_4393_ = lean_panic_fn_borrowed(v___f_4392_, v_msg_4332_);
lean_dec_ref(v___f_4392_);
lean_inc(v___y_4338_);
lean_inc_ref(v___y_4337_);
lean_inc(v___y_4336_);
lean_inc_ref(v___y_4335_);
lean_inc(v___y_4334_);
lean_inc_ref(v___y_4333_);
v___x_4394_ = lean_apply_7(v___x_15342__overap_4393_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_, lean_box(0));
return v___x_4394_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2___boxed(lean_object* v_msg_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_){
_start:
{
lean_object* v_res_4415_; 
v_res_4415_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v_msg_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_);
lean_dec(v___y_4413_);
lean_dec_ref(v___y_4412_);
lean_dec(v___y_4411_);
lean_dec_ref(v___y_4410_);
lean_dec(v___y_4409_);
lean_dec_ref(v___y_4408_);
return v_res_4415_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2(void){
_start:
{
lean_object* v___x_4418_; lean_object* v___x_4419_; lean_object* v___x_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; 
v___x_4418_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_4419_ = lean_unsigned_to_nat(9u);
v___x_4420_ = lean_unsigned_to_nat(625u);
v___x_4421_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__1));
v___x_4422_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__0));
v___x_4423_ = l_mkPanicMessageWithDecl(v___x_4422_, v___x_4421_, v___x_4420_, v___x_4419_, v___x_4418_);
return v___x_4423_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10(void){
_start:
{
lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; 
v___x_4433_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__9));
v___x_4434_ = lean_unsigned_to_nat(14u);
v___x_4435_ = lean_unsigned_to_nat(22u);
v___x_4436_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__8));
v___x_4437_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__7));
v___x_4438_ = l_mkPanicMessageWithDecl(v___x_4437_, v___x_4436_, v___x_4435_, v___x_4434_, v___x_4433_);
return v___x_4438_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12(void){
_start:
{
lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; 
v___x_4440_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_4441_ = lean_unsigned_to_nat(22u);
v___x_4442_ = lean_unsigned_to_nat(602u);
v___x_4443_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__11));
v___x_4444_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_4445_ = l_mkPanicMessageWithDecl(v___x_4444_, v___x_4443_, v___x_4442_, v___x_4441_, v___x_4440_);
return v___x_4445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(lean_object* v_code_4446_, lean_object* v_decl_4447_, lean_object* v_k_4448_, lean_object* v_a_4449_, lean_object* v_a_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_){
_start:
{
lean_object* v_fvarId_4456_; lean_object* v_value_4457_; lean_object* v_k_4459_; lean_object* v___y_4460_; lean_object* v___y_4461_; lean_object* v___y_4462_; lean_object* v___y_4463_; lean_object* v___y_4464_; lean_object* v___y_4465_; lean_object* v_k_4497_; lean_object* v___y_4498_; lean_object* v___y_4499_; lean_object* v___y_4500_; lean_object* v___y_4501_; lean_object* v___y_4502_; lean_object* v___y_4503_; lean_object* v___x_4532_; 
v_fvarId_4456_ = lean_ctor_get(v_decl_4447_, 0);
lean_inc_n(v_fvarId_4456_, 2);
v_value_4457_ = lean_ctor_get(v_decl_4447_, 3);
lean_inc(v_value_4457_);
v___x_4532_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4456_, v_k_4448_, v_a_4449_, v_a_4450_);
switch(lean_obj_tag(v_value_4457_))
{
case 4:
{
lean_object* v_a_4533_; lean_object* v___x_4535_; uint8_t v_isShared_4536_; uint8_t v_isSharedCheck_4575_; 
v_a_4533_ = lean_ctor_get(v___x_4532_, 0);
v_isSharedCheck_4575_ = !lean_is_exclusive(v___x_4532_);
if (v_isSharedCheck_4575_ == 0)
{
v___x_4535_ = v___x_4532_;
v_isShared_4536_ = v_isSharedCheck_4575_;
goto v_resetjp_4534_;
}
else
{
lean_inc(v_a_4533_);
lean_dec(v___x_4532_);
v___x_4535_ = lean_box(0);
v_isShared_4536_ = v_isSharedCheck_4575_;
goto v_resetjp_4534_;
}
v_resetjp_4534_:
{
lean_object* v_fvarId_4537_; lean_object* v_args_4538_; lean_object* v___x_4540_; 
v_fvarId_4537_ = lean_ctor_get(v_value_4457_, 0);
v_args_4538_ = lean_ctor_get(v_value_4457_, 1);
lean_inc(v_fvarId_4537_);
if (v_isShared_4536_ == 0)
{
lean_ctor_set_tag(v___x_4535_, 1);
lean_ctor_set(v___x_4535_, 0, v_fvarId_4537_);
v___x_4540_ = v___x_4535_;
goto v_reusejp_4539_;
}
else
{
lean_object* v_reuseFailAlloc_4574_; 
v_reuseFailAlloc_4574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4574_, 0, v_fvarId_4537_);
v___x_4540_ = v_reuseFailAlloc_4574_;
goto v_reusejp_4539_;
}
v_reusejp_4539_:
{
lean_object* v___x_4541_; lean_object* v___y_4543_; 
lean_inc_ref(v_args_4538_);
v___x_4541_ = lean_array_push(v_args_4538_, v___x_4540_);
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_decl_4546_; lean_object* v_k_4547_; size_t v___x_4548_; size_t v___x_4549_; uint8_t v___x_4550_; 
v_decl_4546_ = lean_ctor_get(v_code_4446_, 0);
v_k_4547_ = lean_ctor_get(v_code_4446_, 1);
v___x_4548_ = lean_ptr_addr(v_k_4547_);
v___x_4549_ = lean_ptr_addr(v_a_4533_);
v___x_4550_ = lean_usize_dec_eq(v___x_4548_, v___x_4549_);
if (v___x_4550_ == 0)
{
lean_object* v___x_4552_; uint8_t v_isShared_4553_; uint8_t v_isSharedCheck_4557_; 
v_isSharedCheck_4557_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4557_ == 0)
{
lean_object* v_unused_4558_; lean_object* v_unused_4559_; 
v_unused_4558_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4558_);
v_unused_4559_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4559_);
v___x_4552_ = v_code_4446_;
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
else
{
lean_dec(v_code_4446_);
v___x_4552_ = lean_box(0);
v_isShared_4553_ = v_isSharedCheck_4557_;
goto v_resetjp_4551_;
}
v_resetjp_4551_:
{
lean_object* v___x_4555_; 
if (v_isShared_4553_ == 0)
{
lean_ctor_set(v___x_4552_, 1, v_a_4533_);
lean_ctor_set(v___x_4552_, 0, v_decl_4447_);
v___x_4555_ = v___x_4552_;
goto v_reusejp_4554_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4556_, 1, v_a_4533_);
v___x_4555_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4554_;
}
v_reusejp_4554_:
{
v___y_4543_ = v___x_4555_;
goto v___jp_4542_;
}
}
}
else
{
size_t v___x_4560_; size_t v___x_4561_; uint8_t v___x_4562_; 
v___x_4560_ = lean_ptr_addr(v_decl_4546_);
v___x_4561_ = lean_ptr_addr(v_decl_4447_);
v___x_4562_ = lean_usize_dec_eq(v___x_4560_, v___x_4561_);
if (v___x_4562_ == 0)
{
lean_object* v___x_4564_; uint8_t v_isShared_4565_; uint8_t v_isSharedCheck_4569_; 
v_isSharedCheck_4569_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4569_ == 0)
{
lean_object* v_unused_4570_; lean_object* v_unused_4571_; 
v_unused_4570_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4570_);
v_unused_4571_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4571_);
v___x_4564_ = v_code_4446_;
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
else
{
lean_dec(v_code_4446_);
v___x_4564_ = lean_box(0);
v_isShared_4565_ = v_isSharedCheck_4569_;
goto v_resetjp_4563_;
}
v_resetjp_4563_:
{
lean_object* v___x_4567_; 
if (v_isShared_4565_ == 0)
{
lean_ctor_set(v___x_4564_, 1, v_a_4533_);
lean_ctor_set(v___x_4564_, 0, v_decl_4447_);
v___x_4567_ = v___x_4564_;
goto v_reusejp_4566_;
}
else
{
lean_object* v_reuseFailAlloc_4568_; 
v_reuseFailAlloc_4568_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4568_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4568_, 1, v_a_4533_);
v___x_4567_ = v_reuseFailAlloc_4568_;
goto v_reusejp_4566_;
}
v_reusejp_4566_:
{
v___y_4543_ = v___x_4567_;
goto v___jp_4542_;
}
}
}
else
{
lean_dec(v_a_4533_);
lean_dec_ref(v_decl_4447_);
v___y_4543_ = v_code_4446_;
goto v___jp_4542_;
}
}
}
else
{
lean_object* v___x_4572_; lean_object* v___x_4573_; 
lean_dec(v_a_4533_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4572_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4573_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4572_);
v___y_4543_ = v___x_4573_;
goto v___jp_4542_;
}
v___jp_4542_:
{
lean_object* v___x_4544_; 
v___x_4544_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v___x_4541_, v___y_4543_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
lean_dec_ref(v___x_4541_);
if (lean_obj_tag(v___x_4544_) == 0)
{
lean_object* v_a_4545_; 
v_a_4545_ = lean_ctor_get(v___x_4544_, 0);
lean_inc(v_a_4545_);
lean_dec_ref_known(v___x_4544_, 1);
v_k_4459_ = v_a_4545_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
else
{
lean_dec_ref_known(v_value_4457_, 2);
lean_dec(v_fvarId_4456_);
return v___x_4544_;
}
}
}
}
}
case 5:
{
lean_object* v_a_4576_; lean_object* v_args_4577_; lean_object* v___y_4579_; 
v_a_4576_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4576_);
lean_dec_ref(v___x_4532_);
v_args_4577_ = lean_ctor_get(v_value_4457_, 1);
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_decl_4582_; lean_object* v_k_4583_; size_t v___x_4584_; size_t v___x_4585_; uint8_t v___x_4586_; 
v_decl_4582_ = lean_ctor_get(v_code_4446_, 0);
v_k_4583_ = lean_ctor_get(v_code_4446_, 1);
v___x_4584_ = lean_ptr_addr(v_k_4583_);
v___x_4585_ = lean_ptr_addr(v_a_4576_);
v___x_4586_ = lean_usize_dec_eq(v___x_4584_, v___x_4585_);
if (v___x_4586_ == 0)
{
lean_object* v___x_4588_; uint8_t v_isShared_4589_; uint8_t v_isSharedCheck_4593_; 
v_isSharedCheck_4593_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4593_ == 0)
{
lean_object* v_unused_4594_; lean_object* v_unused_4595_; 
v_unused_4594_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4594_);
v_unused_4595_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4595_);
v___x_4588_ = v_code_4446_;
v_isShared_4589_ = v_isSharedCheck_4593_;
goto v_resetjp_4587_;
}
else
{
lean_dec(v_code_4446_);
v___x_4588_ = lean_box(0);
v_isShared_4589_ = v_isSharedCheck_4593_;
goto v_resetjp_4587_;
}
v_resetjp_4587_:
{
lean_object* v___x_4591_; 
if (v_isShared_4589_ == 0)
{
lean_ctor_set(v___x_4588_, 1, v_a_4576_);
lean_ctor_set(v___x_4588_, 0, v_decl_4447_);
v___x_4591_ = v___x_4588_;
goto v_reusejp_4590_;
}
else
{
lean_object* v_reuseFailAlloc_4592_; 
v_reuseFailAlloc_4592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4592_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4592_, 1, v_a_4576_);
v___x_4591_ = v_reuseFailAlloc_4592_;
goto v_reusejp_4590_;
}
v_reusejp_4590_:
{
v___y_4579_ = v___x_4591_;
goto v___jp_4578_;
}
}
}
else
{
size_t v___x_4596_; size_t v___x_4597_; uint8_t v___x_4598_; 
v___x_4596_ = lean_ptr_addr(v_decl_4582_);
v___x_4597_ = lean_ptr_addr(v_decl_4447_);
v___x_4598_ = lean_usize_dec_eq(v___x_4596_, v___x_4597_);
if (v___x_4598_ == 0)
{
lean_object* v___x_4600_; uint8_t v_isShared_4601_; uint8_t v_isSharedCheck_4605_; 
v_isSharedCheck_4605_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4605_ == 0)
{
lean_object* v_unused_4606_; lean_object* v_unused_4607_; 
v_unused_4606_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4606_);
v_unused_4607_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4607_);
v___x_4600_ = v_code_4446_;
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
else
{
lean_dec(v_code_4446_);
v___x_4600_ = lean_box(0);
v_isShared_4601_ = v_isSharedCheck_4605_;
goto v_resetjp_4599_;
}
v_resetjp_4599_:
{
lean_object* v___x_4603_; 
if (v_isShared_4601_ == 0)
{
lean_ctor_set(v___x_4600_, 1, v_a_4576_);
lean_ctor_set(v___x_4600_, 0, v_decl_4447_);
v___x_4603_ = v___x_4600_;
goto v_reusejp_4602_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4604_, 1, v_a_4576_);
v___x_4603_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4602_;
}
v_reusejp_4602_:
{
v___y_4579_ = v___x_4603_;
goto v___jp_4578_;
}
}
}
else
{
lean_dec(v_a_4576_);
lean_dec_ref(v_decl_4447_);
v___y_4579_ = v_code_4446_;
goto v___jp_4578_;
}
}
}
else
{
lean_object* v___x_4608_; lean_object* v___x_4609_; 
lean_dec(v_a_4576_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4608_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4609_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4608_);
v___y_4579_ = v___x_4609_;
goto v___jp_4578_;
}
v___jp_4578_:
{
lean_object* v___x_4580_; 
v___x_4580_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4577_, v___y_4579_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
if (lean_obj_tag(v___x_4580_) == 0)
{
lean_object* v_a_4581_; 
v_a_4581_ = lean_ctor_get(v___x_4580_, 0);
lean_inc(v_a_4581_);
lean_dec_ref_known(v___x_4580_, 1);
v_k_4459_ = v_a_4581_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
else
{
lean_dec_ref_known(v_value_4457_, 2);
lean_dec(v_fvarId_4456_);
return v___x_4580_;
}
}
}
case 6:
{
lean_object* v_a_4610_; lean_object* v_var_4611_; lean_object* v___x_4612_; lean_object* v_a_4613_; lean_object* v___x_4614_; lean_object* v_borrows_4615_; uint8_t v___x_4616_; 
v_a_4610_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4610_);
lean_dec_ref(v___x_4532_);
v_var_4611_ = lean_ctor_get(v_value_4457_, 1);
lean_inc(v_var_4611_);
v___x_4612_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4611_, v_a_4610_, v_a_4449_, v_a_4450_);
v_a_4613_ = lean_ctor_get(v___x_4612_, 0);
lean_inc(v_a_4613_);
lean_dec_ref(v___x_4612_);
v___x_4614_ = lean_st_ref_get(v_a_4450_);
v_borrows_4615_ = lean_ctor_get(v___x_4614_, 1);
lean_inc_ref(v_borrows_4615_);
lean_dec(v___x_4614_);
v___x_4616_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4615_, v_fvarId_4456_);
lean_dec_ref(v_borrows_4615_);
if (v___x_4616_ == 0)
{
lean_object* v_varMap_4617_; lean_object* v___x_4618_; lean_object* v___x_4619_; uint8_t v_isDefiniteRef_4620_; lean_object* v___x_4621_; uint8_t v___y_4623_; 
v_varMap_4617_ = lean_ctor_get(v_a_4449_, 2);
v___x_4618_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc(v_fvarId_4456_);
lean_inc(v_varMap_4617_);
v___x_4619_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_4618_, v_varMap_4617_, v_fvarId_4456_);
v_isDefiniteRef_4620_ = lean_ctor_get_uint8(v___x_4619_, sizeof(void*)*2 + 1);
v___x_4621_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_4620_ == 0)
{
uint8_t v___x_4626_; 
v___x_4626_ = 1;
v___y_4623_ = v___x_4626_;
goto v___jp_4622_;
}
else
{
v___y_4623_ = v___x_4616_;
goto v___jp_4622_;
}
v___jp_4622_:
{
uint8_t v_persistent_4624_; lean_object* v___x_4625_; 
v_persistent_4624_ = lean_ctor_get_uint8(v___x_4619_, sizeof(void*)*2 + 2);
lean_dec(v___x_4619_);
lean_inc(v_fvarId_4456_);
v___x_4625_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_4625_, 0, v_fvarId_4456_);
lean_ctor_set(v___x_4625_, 1, v___x_4621_);
lean_ctor_set(v___x_4625_, 2, v_a_4613_);
lean_ctor_set_uint8(v___x_4625_, sizeof(void*)*3, v___y_4623_);
lean_ctor_set_uint8(v___x_4625_, sizeof(void*)*3 + 1, v_persistent_4624_);
v_k_4497_ = v___x_4625_;
v___y_4498_ = v_a_4449_;
v___y_4499_ = v_a_4450_;
v___y_4500_ = v_a_4451_;
v___y_4501_ = v_a_4452_;
v___y_4502_ = v_a_4453_;
v___y_4503_ = v_a_4454_;
goto v___jp_4496_;
}
}
else
{
v_k_4497_ = v_a_4613_;
v___y_4498_ = v_a_4449_;
v___y_4499_ = v_a_4450_;
v___y_4500_ = v_a_4451_;
v___y_4501_ = v_a_4452_;
v___y_4502_ = v_a_4453_;
v___y_4503_ = v_a_4454_;
goto v___jp_4496_;
}
}
case 7:
{
lean_object* v_a_4627_; lean_object* v_var_4628_; lean_object* v___x_4629_; 
v_a_4627_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4627_);
lean_dec_ref(v___x_4532_);
v_var_4628_ = lean_ctor_get(v_value_4457_, 1);
lean_inc(v_var_4628_);
v___x_4629_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4628_, v_a_4627_, v_a_4449_, v_a_4450_);
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_a_4630_; lean_object* v_decl_4631_; lean_object* v_k_4632_; size_t v___x_4633_; size_t v___x_4634_; uint8_t v___x_4635_; 
v_a_4630_ = lean_ctor_get(v___x_4629_, 0);
lean_inc(v_a_4630_);
lean_dec_ref(v___x_4629_);
v_decl_4631_ = lean_ctor_get(v_code_4446_, 0);
v_k_4632_ = lean_ctor_get(v_code_4446_, 1);
v___x_4633_ = lean_ptr_addr(v_k_4632_);
v___x_4634_ = lean_ptr_addr(v_a_4630_);
v___x_4635_ = lean_usize_dec_eq(v___x_4633_, v___x_4634_);
if (v___x_4635_ == 0)
{
lean_object* v___x_4637_; uint8_t v_isShared_4638_; uint8_t v_isSharedCheck_4642_; 
v_isSharedCheck_4642_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4642_ == 0)
{
lean_object* v_unused_4643_; lean_object* v_unused_4644_; 
v_unused_4643_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4643_);
v_unused_4644_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4644_);
v___x_4637_ = v_code_4446_;
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
else
{
lean_dec(v_code_4446_);
v___x_4637_ = lean_box(0);
v_isShared_4638_ = v_isSharedCheck_4642_;
goto v_resetjp_4636_;
}
v_resetjp_4636_:
{
lean_object* v___x_4640_; 
if (v_isShared_4638_ == 0)
{
lean_ctor_set(v___x_4637_, 1, v_a_4630_);
lean_ctor_set(v___x_4637_, 0, v_decl_4447_);
v___x_4640_ = v___x_4637_;
goto v_reusejp_4639_;
}
else
{
lean_object* v_reuseFailAlloc_4641_; 
v_reuseFailAlloc_4641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4641_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4641_, 1, v_a_4630_);
v___x_4640_ = v_reuseFailAlloc_4641_;
goto v_reusejp_4639_;
}
v_reusejp_4639_:
{
v_k_4459_ = v___x_4640_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
size_t v___x_4645_; size_t v___x_4646_; uint8_t v___x_4647_; 
v___x_4645_ = lean_ptr_addr(v_decl_4631_);
v___x_4646_ = lean_ptr_addr(v_decl_4447_);
v___x_4647_ = lean_usize_dec_eq(v___x_4645_, v___x_4646_);
if (v___x_4647_ == 0)
{
lean_object* v___x_4649_; uint8_t v_isShared_4650_; uint8_t v_isSharedCheck_4654_; 
v_isSharedCheck_4654_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4654_ == 0)
{
lean_object* v_unused_4655_; lean_object* v_unused_4656_; 
v_unused_4655_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4655_);
v_unused_4656_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4656_);
v___x_4649_ = v_code_4446_;
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
else
{
lean_dec(v_code_4446_);
v___x_4649_ = lean_box(0);
v_isShared_4650_ = v_isSharedCheck_4654_;
goto v_resetjp_4648_;
}
v_resetjp_4648_:
{
lean_object* v___x_4652_; 
if (v_isShared_4650_ == 0)
{
lean_ctor_set(v___x_4649_, 1, v_a_4630_);
lean_ctor_set(v___x_4649_, 0, v_decl_4447_);
v___x_4652_ = v___x_4649_;
goto v_reusejp_4651_;
}
else
{
lean_object* v_reuseFailAlloc_4653_; 
v_reuseFailAlloc_4653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4653_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4653_, 1, v_a_4630_);
v___x_4652_ = v_reuseFailAlloc_4653_;
goto v_reusejp_4651_;
}
v_reusejp_4651_:
{
v_k_4459_ = v___x_4652_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_dec(v_a_4630_);
lean_dec_ref(v_decl_4447_);
v_k_4459_ = v_code_4446_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_object* v___x_4657_; lean_object* v___x_4658_; 
lean_dec_ref(v___x_4629_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4657_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4658_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4657_);
v_k_4459_ = v___x_4658_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
case 8:
{
lean_object* v_a_4659_; lean_object* v_var_4660_; lean_object* v___x_4661_; 
v_a_4659_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4659_);
lean_dec_ref(v___x_4532_);
v_var_4660_ = lean_ctor_get(v_value_4457_, 2);
lean_inc(v_var_4660_);
v___x_4661_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_var_4660_, v_a_4659_, v_a_4449_, v_a_4450_);
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_a_4662_; lean_object* v_decl_4663_; lean_object* v_k_4664_; size_t v___x_4665_; size_t v___x_4666_; uint8_t v___x_4667_; 
v_a_4662_ = lean_ctor_get(v___x_4661_, 0);
lean_inc(v_a_4662_);
lean_dec_ref(v___x_4661_);
v_decl_4663_ = lean_ctor_get(v_code_4446_, 0);
v_k_4664_ = lean_ctor_get(v_code_4446_, 1);
v___x_4665_ = lean_ptr_addr(v_k_4664_);
v___x_4666_ = lean_ptr_addr(v_a_4662_);
v___x_4667_ = lean_usize_dec_eq(v___x_4665_, v___x_4666_);
if (v___x_4667_ == 0)
{
lean_object* v___x_4669_; uint8_t v_isShared_4670_; uint8_t v_isSharedCheck_4674_; 
v_isSharedCheck_4674_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4674_ == 0)
{
lean_object* v_unused_4675_; lean_object* v_unused_4676_; 
v_unused_4675_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4675_);
v_unused_4676_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4676_);
v___x_4669_ = v_code_4446_;
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
else
{
lean_dec(v_code_4446_);
v___x_4669_ = lean_box(0);
v_isShared_4670_ = v_isSharedCheck_4674_;
goto v_resetjp_4668_;
}
v_resetjp_4668_:
{
lean_object* v___x_4672_; 
if (v_isShared_4670_ == 0)
{
lean_ctor_set(v___x_4669_, 1, v_a_4662_);
lean_ctor_set(v___x_4669_, 0, v_decl_4447_);
v___x_4672_ = v___x_4669_;
goto v_reusejp_4671_;
}
else
{
lean_object* v_reuseFailAlloc_4673_; 
v_reuseFailAlloc_4673_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4673_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4673_, 1, v_a_4662_);
v___x_4672_ = v_reuseFailAlloc_4673_;
goto v_reusejp_4671_;
}
v_reusejp_4671_:
{
v_k_4459_ = v___x_4672_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
size_t v___x_4677_; size_t v___x_4678_; uint8_t v___x_4679_; 
v___x_4677_ = lean_ptr_addr(v_decl_4663_);
v___x_4678_ = lean_ptr_addr(v_decl_4447_);
v___x_4679_ = lean_usize_dec_eq(v___x_4677_, v___x_4678_);
if (v___x_4679_ == 0)
{
lean_object* v___x_4681_; uint8_t v_isShared_4682_; uint8_t v_isSharedCheck_4686_; 
v_isSharedCheck_4686_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4686_ == 0)
{
lean_object* v_unused_4687_; lean_object* v_unused_4688_; 
v_unused_4687_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4687_);
v_unused_4688_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4688_);
v___x_4681_ = v_code_4446_;
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
else
{
lean_dec(v_code_4446_);
v___x_4681_ = lean_box(0);
v_isShared_4682_ = v_isSharedCheck_4686_;
goto v_resetjp_4680_;
}
v_resetjp_4680_:
{
lean_object* v___x_4684_; 
if (v_isShared_4682_ == 0)
{
lean_ctor_set(v___x_4681_, 1, v_a_4662_);
lean_ctor_set(v___x_4681_, 0, v_decl_4447_);
v___x_4684_ = v___x_4681_;
goto v_reusejp_4683_;
}
else
{
lean_object* v_reuseFailAlloc_4685_; 
v_reuseFailAlloc_4685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4685_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4685_, 1, v_a_4662_);
v___x_4684_ = v_reuseFailAlloc_4685_;
goto v_reusejp_4683_;
}
v_reusejp_4683_:
{
v_k_4459_ = v___x_4684_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_dec(v_a_4662_);
lean_dec_ref(v_decl_4447_);
v_k_4459_ = v_code_4446_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_object* v___x_4689_; lean_object* v___x_4690_; 
lean_dec_ref(v___x_4661_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4689_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4690_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4689_);
v_k_4459_ = v___x_4690_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
case 9:
{
lean_object* v_a_4691_; lean_object* v_fn_4692_; lean_object* v_args_4693_; lean_object* v___y_4695_; lean_object* v___y_4696_; lean_object* v___y_4697_; lean_object* v___y_4698_; lean_object* v___y_4699_; lean_object* v___y_4700_; lean_object* v___y_4701_; lean_object* v___y_4702_; lean_object* v___x_4705_; 
v_a_4691_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4691_);
lean_dec_ref(v___x_4532_);
v_fn_4692_ = lean_ctor_get(v_value_4457_, 0);
v_args_4693_ = lean_ctor_get(v_value_4457_, 1);
lean_inc(v_fn_4692_);
v___x_4705_ = l_Lean_Compiler_LCNF_getImpureSignature_x3f___redArg(v_fn_4692_, v_a_4454_);
if (lean_obj_tag(v___x_4705_) == 0)
{
lean_object* v_a_4706_; uint8_t v___x_4707_; lean_object* v___y_4709_; lean_object* v___y_4710_; lean_object* v_value_4711_; lean_object* v___y_4712_; lean_object* v___y_4713_; lean_object* v___y_4714_; lean_object* v___y_4715_; lean_object* v___y_4716_; lean_object* v___y_4717_; lean_object* v___y_4757_; lean_object* v___y_4758_; lean_object* v___y_4759_; uint8_t v___y_4760_; lean_object* v___y_4765_; lean_object* v___y_4766_; lean_object* v___y_4767_; uint8_t v___y_4768_; uint8_t v___y_4769_; lean_object* v___y_4777_; lean_object* v___y_4778_; lean_object* v___y_4779_; uint8_t v___y_4780_; uint8_t v___y_4781_; uint8_t v___y_4782_; lean_object* v___y_4790_; 
v_a_4706_ = lean_ctor_get(v___x_4705_, 0);
lean_inc(v_a_4706_);
lean_dec_ref_known(v___x_4705_, 1);
v___x_4707_ = 1;
if (lean_obj_tag(v_a_4706_) == 0)
{
lean_object* v___x_4806_; lean_object* v___x_4807_; 
v___x_4806_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10);
v___x_4807_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__1(v___x_4806_);
v___y_4790_ = v___x_4807_;
goto v___jp_4789_;
}
else
{
lean_object* v_val_4808_; 
v_val_4808_ = lean_ctor_get(v_a_4706_, 0);
lean_inc(v_val_4808_);
lean_dec_ref_known(v_a_4706_, 1);
v___y_4790_ = v_val_4808_;
goto v___jp_4789_;
}
v___jp_4708_:
{
lean_object* v___x_4718_; 
v___x_4718_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_4707_, v_decl_4447_, v_value_4711_, v___y_4715_);
if (lean_obj_tag(v___x_4718_) == 0)
{
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_a_4719_; lean_object* v_decl_4720_; lean_object* v_k_4721_; size_t v___x_4722_; size_t v___x_4723_; uint8_t v___x_4724_; 
v_a_4719_ = lean_ctor_get(v___x_4718_, 0);
lean_inc(v_a_4719_);
lean_dec_ref_known(v___x_4718_, 1);
v_decl_4720_ = lean_ctor_get(v_code_4446_, 0);
v_k_4721_ = lean_ctor_get(v_code_4446_, 1);
v___x_4722_ = lean_ptr_addr(v_k_4721_);
v___x_4723_ = lean_ptr_addr(v___y_4710_);
v___x_4724_ = lean_usize_dec_eq(v___x_4722_, v___x_4723_);
if (v___x_4724_ == 0)
{
lean_object* v___x_4726_; uint8_t v_isShared_4727_; uint8_t v_isSharedCheck_4731_; 
v_isSharedCheck_4731_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4731_ == 0)
{
lean_object* v_unused_4732_; lean_object* v_unused_4733_; 
v_unused_4732_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4732_);
v_unused_4733_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4733_);
v___x_4726_ = v_code_4446_;
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
else
{
lean_dec(v_code_4446_);
v___x_4726_ = lean_box(0);
v_isShared_4727_ = v_isSharedCheck_4731_;
goto v_resetjp_4725_;
}
v_resetjp_4725_:
{
lean_object* v___x_4729_; 
if (v_isShared_4727_ == 0)
{
lean_ctor_set(v___x_4726_, 1, v___y_4710_);
lean_ctor_set(v___x_4726_, 0, v_a_4719_);
v___x_4729_ = v___x_4726_;
goto v_reusejp_4728_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v_a_4719_);
lean_ctor_set(v_reuseFailAlloc_4730_, 1, v___y_4710_);
v___x_4729_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4728_;
}
v_reusejp_4728_:
{
v___y_4695_ = v___y_4712_;
v___y_4696_ = v___y_4709_;
v___y_4697_ = v___y_4717_;
v___y_4698_ = v___y_4714_;
v___y_4699_ = v___y_4715_;
v___y_4700_ = v___y_4713_;
v___y_4701_ = v___y_4716_;
v___y_4702_ = v___x_4729_;
goto v___jp_4694_;
}
}
}
else
{
size_t v___x_4734_; size_t v___x_4735_; uint8_t v___x_4736_; 
v___x_4734_ = lean_ptr_addr(v_decl_4720_);
v___x_4735_ = lean_ptr_addr(v_a_4719_);
v___x_4736_ = lean_usize_dec_eq(v___x_4734_, v___x_4735_);
if (v___x_4736_ == 0)
{
lean_object* v___x_4738_; uint8_t v_isShared_4739_; uint8_t v_isSharedCheck_4743_; 
v_isSharedCheck_4743_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4743_ == 0)
{
lean_object* v_unused_4744_; lean_object* v_unused_4745_; 
v_unused_4744_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4744_);
v_unused_4745_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4745_);
v___x_4738_ = v_code_4446_;
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
else
{
lean_dec(v_code_4446_);
v___x_4738_ = lean_box(0);
v_isShared_4739_ = v_isSharedCheck_4743_;
goto v_resetjp_4737_;
}
v_resetjp_4737_:
{
lean_object* v___x_4741_; 
if (v_isShared_4739_ == 0)
{
lean_ctor_set(v___x_4738_, 1, v___y_4710_);
lean_ctor_set(v___x_4738_, 0, v_a_4719_);
v___x_4741_ = v___x_4738_;
goto v_reusejp_4740_;
}
else
{
lean_object* v_reuseFailAlloc_4742_; 
v_reuseFailAlloc_4742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4742_, 0, v_a_4719_);
lean_ctor_set(v_reuseFailAlloc_4742_, 1, v___y_4710_);
v___x_4741_ = v_reuseFailAlloc_4742_;
goto v_reusejp_4740_;
}
v_reusejp_4740_:
{
v___y_4695_ = v___y_4712_;
v___y_4696_ = v___y_4709_;
v___y_4697_ = v___y_4717_;
v___y_4698_ = v___y_4714_;
v___y_4699_ = v___y_4715_;
v___y_4700_ = v___y_4713_;
v___y_4701_ = v___y_4716_;
v___y_4702_ = v___x_4741_;
goto v___jp_4694_;
}
}
}
else
{
lean_dec(v_a_4719_);
lean_dec_ref(v___y_4710_);
v___y_4695_ = v___y_4712_;
v___y_4696_ = v___y_4709_;
v___y_4697_ = v___y_4717_;
v___y_4698_ = v___y_4714_;
v___y_4699_ = v___y_4715_;
v___y_4700_ = v___y_4713_;
v___y_4701_ = v___y_4716_;
v___y_4702_ = v_code_4446_;
goto v___jp_4694_;
}
}
}
else
{
lean_object* v___x_4746_; lean_object* v___x_4747_; 
lean_dec_ref_known(v___x_4718_, 1);
lean_dec_ref(v___y_4710_);
lean_dec_ref(v_code_4446_);
v___x_4746_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4747_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4746_);
v___y_4695_ = v___y_4712_;
v___y_4696_ = v___y_4709_;
v___y_4697_ = v___y_4717_;
v___y_4698_ = v___y_4714_;
v___y_4699_ = v___y_4715_;
v___y_4700_ = v___y_4713_;
v___y_4701_ = v___y_4716_;
v___y_4702_ = v___x_4747_;
goto v___jp_4694_;
}
}
else
{
lean_object* v_a_4748_; lean_object* v___x_4750_; uint8_t v_isShared_4751_; uint8_t v_isSharedCheck_4755_; 
lean_dec_ref(v___y_4710_);
lean_dec_ref(v___y_4709_);
lean_dec_ref_known(v_value_4457_, 2);
lean_dec(v_fvarId_4456_);
lean_dec_ref(v_code_4446_);
v_a_4748_ = lean_ctor_get(v___x_4718_, 0);
v_isSharedCheck_4755_ = !lean_is_exclusive(v___x_4718_);
if (v_isSharedCheck_4755_ == 0)
{
v___x_4750_ = v___x_4718_;
v_isShared_4751_ = v_isSharedCheck_4755_;
goto v_resetjp_4749_;
}
else
{
lean_inc(v_a_4748_);
lean_dec(v___x_4718_);
v___x_4750_ = lean_box(0);
v_isShared_4751_ = v_isSharedCheck_4755_;
goto v_resetjp_4749_;
}
v_resetjp_4749_:
{
lean_object* v___x_4753_; 
if (v_isShared_4751_ == 0)
{
v___x_4753_ = v___x_4750_;
goto v_reusejp_4752_;
}
else
{
lean_object* v_reuseFailAlloc_4754_; 
v_reuseFailAlloc_4754_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4754_, 0, v_a_4748_);
v___x_4753_ = v_reuseFailAlloc_4754_;
goto v_reusejp_4752_;
}
v_reusejp_4752_:
{
return v___x_4753_;
}
}
}
}
v___jp_4756_:
{
if (v___y_4760_ == 0)
{
lean_inc_ref(v_value_4457_);
v___y_4709_ = v___y_4758_;
v___y_4710_ = v___y_4759_;
v_value_4711_ = v_value_4457_;
v___y_4712_ = v_a_4449_;
v___y_4713_ = v_a_4450_;
v___y_4714_ = v_a_4451_;
v___y_4715_ = v_a_4452_;
v___y_4716_ = v_a_4453_;
v___y_4717_ = v_a_4454_;
goto v___jp_4708_;
}
else
{
lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; 
v___x_4761_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__3));
lean_inc_ref(v___y_4757_);
v___x_4762_ = l_Lean_Name_mkStr2(v___y_4757_, v___x_4761_);
lean_inc_ref(v_args_4693_);
v___x_4763_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4762_);
lean_ctor_set(v___x_4763_, 1, v_args_4693_);
v___y_4709_ = v___y_4758_;
v___y_4710_ = v___y_4759_;
v_value_4711_ = v___x_4763_;
v___y_4712_ = v_a_4449_;
v___y_4713_ = v_a_4450_;
v___y_4714_ = v_a_4451_;
v___y_4715_ = v_a_4452_;
v___y_4716_ = v_a_4453_;
v___y_4717_ = v_a_4454_;
goto v___jp_4708_;
}
}
v___jp_4764_:
{
if (v___y_4769_ == 0)
{
lean_object* v___x_4770_; lean_object* v___x_4771_; uint8_t v___x_4772_; 
v___x_4770_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__3));
lean_inc_ref(v___y_4766_);
v___x_4771_ = l_Lean_Name_mkStr2(v___y_4766_, v___x_4770_);
v___x_4772_ = lean_name_eq(v_fn_4692_, v___x_4771_);
lean_dec(v___x_4771_);
if (v___x_4772_ == 0)
{
v___y_4757_ = v___y_4766_;
v___y_4758_ = v___y_4765_;
v___y_4759_ = v___y_4767_;
v___y_4760_ = v___x_4772_;
goto v___jp_4756_;
}
else
{
v___y_4757_ = v___y_4766_;
v___y_4758_ = v___y_4765_;
v___y_4759_ = v___y_4767_;
v___y_4760_ = v___y_4768_;
goto v___jp_4756_;
}
}
else
{
lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; 
v___x_4773_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__4));
lean_inc_ref(v___y_4766_);
v___x_4774_ = l_Lean_Name_mkStr2(v___y_4766_, v___x_4773_);
lean_inc_ref(v_args_4693_);
v___x_4775_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4774_);
lean_ctor_set(v___x_4775_, 1, v_args_4693_);
v___y_4709_ = v___y_4765_;
v___y_4710_ = v___y_4767_;
v_value_4711_ = v___x_4775_;
v___y_4712_ = v_a_4449_;
v___y_4713_ = v_a_4450_;
v___y_4714_ = v_a_4451_;
v___y_4715_ = v_a_4452_;
v___y_4716_ = v_a_4453_;
v___y_4717_ = v_a_4454_;
goto v___jp_4708_;
}
}
v___jp_4776_:
{
if (v___y_4782_ == 0)
{
lean_object* v___x_4783_; lean_object* v___x_4784_; uint8_t v___x_4785_; 
v___x_4783_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__2));
lean_inc_ref(v___y_4778_);
v___x_4784_ = l_Lean_Name_mkStr2(v___y_4778_, v___x_4783_);
v___x_4785_ = lean_name_eq(v_fn_4692_, v___x_4784_);
lean_dec(v___x_4784_);
if (v___x_4785_ == 0)
{
v___y_4765_ = v___y_4777_;
v___y_4766_ = v___y_4778_;
v___y_4767_ = v___y_4779_;
v___y_4768_ = v___y_4781_;
v___y_4769_ = v___x_4785_;
goto v___jp_4764_;
}
else
{
v___y_4765_ = v___y_4777_;
v___y_4766_ = v___y_4778_;
v___y_4767_ = v___y_4779_;
v___y_4768_ = v___y_4781_;
v___y_4769_ = v___y_4780_;
goto v___jp_4764_;
}
}
else
{
lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; 
v___x_4786_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__5));
lean_inc_ref(v___y_4778_);
v___x_4787_ = l_Lean_Name_mkStr2(v___y_4778_, v___x_4786_);
lean_inc_ref(v_args_4693_);
v___x_4788_ = lean_alloc_ctor(9, 2, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
lean_ctor_set(v___x_4788_, 1, v_args_4693_);
v___y_4709_ = v___y_4777_;
v___y_4710_ = v___y_4779_;
v_value_4711_ = v___x_4788_;
v___y_4712_ = v_a_4449_;
v___y_4713_ = v_a_4450_;
v___y_4714_ = v_a_4451_;
v___y_4715_ = v_a_4452_;
v___y_4716_ = v_a_4453_;
v___y_4717_ = v_a_4454_;
goto v___jp_4708_;
}
}
v___jp_4789_:
{
lean_object* v_params_4791_; lean_object* v___x_4792_; 
v_params_4791_ = lean_ctor_get(v___y_4790_, 3);
lean_inc_ref_n(v_params_4791_, 2);
lean_dec_ref(v___y_4790_);
v___x_4792_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecAfterFullApp(v_args_4693_, v_params_4791_, v_a_4691_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
if (lean_obj_tag(v___x_4792_) == 0)
{
lean_object* v_a_4793_; lean_object* v___x_4794_; lean_object* v_borrows_4795_; uint8_t v___x_4796_; lean_object* v___x_4797_; lean_object* v_borrows_4798_; uint8_t v___x_4799_; lean_object* v___x_4800_; lean_object* v_borrows_4801_; uint8_t v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; uint8_t v___x_4805_; 
v_a_4793_ = lean_ctor_get(v___x_4792_, 0);
lean_inc(v_a_4793_);
lean_dec_ref_known(v___x_4792_, 1);
v___x_4794_ = lean_st_ref_get(v_a_4450_);
v_borrows_4795_ = lean_ctor_get(v___x_4794_, 1);
lean_inc_ref(v_borrows_4795_);
lean_dec(v___x_4794_);
v___x_4796_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4795_, v_fvarId_4456_);
lean_dec_ref(v_borrows_4795_);
v___x_4797_ = lean_st_ref_get(v_a_4450_);
v_borrows_4798_ = lean_ctor_get(v___x_4797_, 1);
lean_inc_ref(v_borrows_4798_);
lean_dec(v___x_4797_);
v___x_4799_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4798_, v_fvarId_4456_);
lean_dec_ref(v_borrows_4798_);
v___x_4800_ = lean_st_ref_get(v_a_4450_);
v_borrows_4801_ = lean_ctor_get(v___x_4800_, 1);
lean_inc_ref(v_borrows_4801_);
lean_dec(v___x_4800_);
v___x_4802_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_4801_, v_fvarId_4456_);
lean_dec_ref(v_borrows_4801_);
v___x_4803_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__0));
v___x_4804_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__6));
v___x_4805_ = lean_name_eq(v_fn_4692_, v___x_4804_);
if (v___x_4805_ == 0)
{
v___y_4777_ = v_params_4791_;
v___y_4778_ = v___x_4803_;
v___y_4779_ = v_a_4793_;
v___y_4780_ = v___x_4799_;
v___y_4781_ = v___x_4802_;
v___y_4782_ = v___x_4805_;
goto v___jp_4776_;
}
else
{
v___y_4777_ = v_params_4791_;
v___y_4778_ = v___x_4803_;
v___y_4779_ = v_a_4793_;
v___y_4780_ = v___x_4799_;
v___y_4781_ = v___x_4802_;
v___y_4782_ = v___x_4796_;
goto v___jp_4776_;
}
}
else
{
lean_dec_ref(v_params_4791_);
lean_dec_ref_known(v_value_4457_, 2);
lean_dec(v_fvarId_4456_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
return v___x_4792_;
}
}
}
else
{
lean_object* v_a_4809_; lean_object* v___x_4811_; uint8_t v_isShared_4812_; uint8_t v_isSharedCheck_4816_; 
lean_dec(v_a_4691_);
lean_dec_ref_known(v_value_4457_, 2);
lean_dec(v_fvarId_4456_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v_a_4809_ = lean_ctor_get(v___x_4705_, 0);
v_isSharedCheck_4816_ = !lean_is_exclusive(v___x_4705_);
if (v_isSharedCheck_4816_ == 0)
{
v___x_4811_ = v___x_4705_;
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
else
{
lean_inc(v_a_4809_);
lean_dec(v___x_4705_);
v___x_4811_ = lean_box(0);
v_isShared_4812_ = v_isSharedCheck_4816_;
goto v_resetjp_4810_;
}
v_resetjp_4810_:
{
lean_object* v___x_4814_; 
if (v_isShared_4812_ == 0)
{
v___x_4814_ = v___x_4811_;
goto v_reusejp_4813_;
}
else
{
lean_object* v_reuseFailAlloc_4815_; 
v_reuseFailAlloc_4815_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4815_, 0, v_a_4809_);
v___x_4814_ = v_reuseFailAlloc_4815_;
goto v_reusejp_4813_;
}
v_reusejp_4813_:
{
return v___x_4814_;
}
}
}
v___jp_4694_:
{
lean_object* v___x_4703_; 
v___x_4703_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_4693_, v___y_4696_, v___y_4702_, v___y_4695_, v___y_4700_, v___y_4698_, v___y_4699_, v___y_4701_, v___y_4697_);
if (lean_obj_tag(v___x_4703_) == 0)
{
lean_object* v_a_4704_; 
v_a_4704_ = lean_ctor_get(v___x_4703_, 0);
lean_inc(v_a_4704_);
lean_dec_ref_known(v___x_4703_, 1);
v_k_4459_ = v_a_4704_;
v___y_4460_ = v___y_4695_;
v___y_4461_ = v___y_4700_;
v___y_4462_ = v___y_4698_;
v___y_4463_ = v___y_4699_;
v___y_4464_ = v___y_4701_;
v___y_4465_ = v___y_4697_;
goto v___jp_4458_;
}
else
{
lean_dec_ref_known(v_value_4457_, 2);
lean_dec(v_fvarId_4456_);
return v___x_4703_;
}
}
}
case 10:
{
lean_object* v_a_4817_; lean_object* v_args_4818_; lean_object* v___y_4820_; 
v_a_4817_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4817_);
lean_dec_ref(v___x_4532_);
v_args_4818_ = lean_ctor_get(v_value_4457_, 1);
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_decl_4823_; lean_object* v_k_4824_; size_t v___x_4825_; size_t v___x_4826_; uint8_t v___x_4827_; 
v_decl_4823_ = lean_ctor_get(v_code_4446_, 0);
v_k_4824_ = lean_ctor_get(v_code_4446_, 1);
v___x_4825_ = lean_ptr_addr(v_k_4824_);
v___x_4826_ = lean_ptr_addr(v_a_4817_);
v___x_4827_ = lean_usize_dec_eq(v___x_4825_, v___x_4826_);
if (v___x_4827_ == 0)
{
lean_object* v___x_4829_; uint8_t v_isShared_4830_; uint8_t v_isSharedCheck_4834_; 
v_isSharedCheck_4834_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4834_ == 0)
{
lean_object* v_unused_4835_; lean_object* v_unused_4836_; 
v_unused_4835_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4835_);
v_unused_4836_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4836_);
v___x_4829_ = v_code_4446_;
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
else
{
lean_dec(v_code_4446_);
v___x_4829_ = lean_box(0);
v_isShared_4830_ = v_isSharedCheck_4834_;
goto v_resetjp_4828_;
}
v_resetjp_4828_:
{
lean_object* v___x_4832_; 
if (v_isShared_4830_ == 0)
{
lean_ctor_set(v___x_4829_, 1, v_a_4817_);
lean_ctor_set(v___x_4829_, 0, v_decl_4447_);
v___x_4832_ = v___x_4829_;
goto v_reusejp_4831_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4833_, 1, v_a_4817_);
v___x_4832_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4831_;
}
v_reusejp_4831_:
{
v___y_4820_ = v___x_4832_;
goto v___jp_4819_;
}
}
}
else
{
size_t v___x_4837_; size_t v___x_4838_; uint8_t v___x_4839_; 
v___x_4837_ = lean_ptr_addr(v_decl_4823_);
v___x_4838_ = lean_ptr_addr(v_decl_4447_);
v___x_4839_ = lean_usize_dec_eq(v___x_4837_, v___x_4838_);
if (v___x_4839_ == 0)
{
lean_object* v___x_4841_; uint8_t v_isShared_4842_; uint8_t v_isSharedCheck_4846_; 
v_isSharedCheck_4846_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4846_ == 0)
{
lean_object* v_unused_4847_; lean_object* v_unused_4848_; 
v_unused_4847_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4847_);
v_unused_4848_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4848_);
v___x_4841_ = v_code_4446_;
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
else
{
lean_dec(v_code_4446_);
v___x_4841_ = lean_box(0);
v_isShared_4842_ = v_isSharedCheck_4846_;
goto v_resetjp_4840_;
}
v_resetjp_4840_:
{
lean_object* v___x_4844_; 
if (v_isShared_4842_ == 0)
{
lean_ctor_set(v___x_4841_, 1, v_a_4817_);
lean_ctor_set(v___x_4841_, 0, v_decl_4447_);
v___x_4844_ = v___x_4841_;
goto v_reusejp_4843_;
}
else
{
lean_object* v_reuseFailAlloc_4845_; 
v_reuseFailAlloc_4845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4845_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4845_, 1, v_a_4817_);
v___x_4844_ = v_reuseFailAlloc_4845_;
goto v_reusejp_4843_;
}
v_reusejp_4843_:
{
v___y_4820_ = v___x_4844_;
goto v___jp_4819_;
}
}
}
else
{
lean_dec(v_a_4817_);
lean_dec_ref(v_decl_4447_);
v___y_4820_ = v_code_4446_;
goto v___jp_4819_;
}
}
}
else
{
lean_object* v___x_4849_; lean_object* v___x_4850_; 
lean_dec(v_a_4817_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4849_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4850_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4849_);
v___y_4820_ = v___x_4850_;
goto v___jp_4819_;
}
v___jp_4819_:
{
lean_object* v___x_4821_; 
v___x_4821_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4818_, v___y_4820_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
if (lean_obj_tag(v___x_4821_) == 0)
{
lean_object* v_a_4822_; 
v_a_4822_ = lean_ctor_get(v___x_4821_, 0);
lean_inc(v_a_4822_);
lean_dec_ref_known(v___x_4821_, 1);
v_k_4459_ = v_a_4822_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
else
{
lean_dec_ref_known(v_value_4457_, 2);
lean_dec(v_fvarId_4456_);
return v___x_4821_;
}
}
}
case 12:
{
lean_object* v_a_4851_; lean_object* v_args_4852_; lean_object* v___y_4854_; 
v_a_4851_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4851_);
lean_dec_ref(v___x_4532_);
v_args_4852_ = lean_ctor_get(v_value_4457_, 2);
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_decl_4857_; lean_object* v_k_4858_; size_t v___x_4859_; size_t v___x_4860_; uint8_t v___x_4861_; 
v_decl_4857_ = lean_ctor_get(v_code_4446_, 0);
v_k_4858_ = lean_ctor_get(v_code_4446_, 1);
v___x_4859_ = lean_ptr_addr(v_k_4858_);
v___x_4860_ = lean_ptr_addr(v_a_4851_);
v___x_4861_ = lean_usize_dec_eq(v___x_4859_, v___x_4860_);
if (v___x_4861_ == 0)
{
lean_object* v___x_4863_; uint8_t v_isShared_4864_; uint8_t v_isSharedCheck_4868_; 
v_isSharedCheck_4868_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4868_ == 0)
{
lean_object* v_unused_4869_; lean_object* v_unused_4870_; 
v_unused_4869_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4869_);
v_unused_4870_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4870_);
v___x_4863_ = v_code_4446_;
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
else
{
lean_dec(v_code_4446_);
v___x_4863_ = lean_box(0);
v_isShared_4864_ = v_isSharedCheck_4868_;
goto v_resetjp_4862_;
}
v_resetjp_4862_:
{
lean_object* v___x_4866_; 
if (v_isShared_4864_ == 0)
{
lean_ctor_set(v___x_4863_, 1, v_a_4851_);
lean_ctor_set(v___x_4863_, 0, v_decl_4447_);
v___x_4866_ = v___x_4863_;
goto v_reusejp_4865_;
}
else
{
lean_object* v_reuseFailAlloc_4867_; 
v_reuseFailAlloc_4867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4867_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4867_, 1, v_a_4851_);
v___x_4866_ = v_reuseFailAlloc_4867_;
goto v_reusejp_4865_;
}
v_reusejp_4865_:
{
v___y_4854_ = v___x_4866_;
goto v___jp_4853_;
}
}
}
else
{
size_t v___x_4871_; size_t v___x_4872_; uint8_t v___x_4873_; 
v___x_4871_ = lean_ptr_addr(v_decl_4857_);
v___x_4872_ = lean_ptr_addr(v_decl_4447_);
v___x_4873_ = lean_usize_dec_eq(v___x_4871_, v___x_4872_);
if (v___x_4873_ == 0)
{
lean_object* v___x_4875_; uint8_t v_isShared_4876_; uint8_t v_isSharedCheck_4880_; 
v_isSharedCheck_4880_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4880_ == 0)
{
lean_object* v_unused_4881_; lean_object* v_unused_4882_; 
v_unused_4881_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4881_);
v_unused_4882_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4882_);
v___x_4875_ = v_code_4446_;
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
else
{
lean_dec(v_code_4446_);
v___x_4875_ = lean_box(0);
v_isShared_4876_ = v_isSharedCheck_4880_;
goto v_resetjp_4874_;
}
v_resetjp_4874_:
{
lean_object* v___x_4878_; 
if (v_isShared_4876_ == 0)
{
lean_ctor_set(v___x_4875_, 1, v_a_4851_);
lean_ctor_set(v___x_4875_, 0, v_decl_4447_);
v___x_4878_ = v___x_4875_;
goto v_reusejp_4877_;
}
else
{
lean_object* v_reuseFailAlloc_4879_; 
v_reuseFailAlloc_4879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4879_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4879_, 1, v_a_4851_);
v___x_4878_ = v_reuseFailAlloc_4879_;
goto v_reusejp_4877_;
}
v_reusejp_4877_:
{
v___y_4854_ = v___x_4878_;
goto v___jp_4853_;
}
}
}
else
{
lean_dec(v_a_4851_);
lean_dec_ref(v_decl_4447_);
v___y_4854_ = v_code_4446_;
goto v___jp_4853_;
}
}
}
else
{
lean_object* v___x_4883_; lean_object* v___x_4884_; 
lean_dec(v_a_4851_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4883_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4884_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4883_);
v___y_4854_ = v___x_4884_;
goto v___jp_4853_;
}
v___jp_4853_:
{
lean_object* v___x_4855_; 
v___x_4855_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBeforeConsumeAll(v_args_4852_, v___y_4854_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
if (lean_obj_tag(v___x_4855_) == 0)
{
lean_object* v_a_4856_; 
v_a_4856_ = lean_ctor_get(v___x_4855_, 0);
lean_inc(v_a_4856_);
lean_dec_ref_known(v___x_4855_, 1);
v_k_4459_ = v_a_4856_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
else
{
lean_dec_ref_known(v_value_4457_, 3);
lean_dec(v_fvarId_4456_);
return v___x_4855_;
}
}
}
case 14:
{
lean_object* v_a_4885_; lean_object* v_fvarId_4886_; lean_object* v___x_4887_; 
v_a_4885_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4885_);
lean_dec_ref(v___x_4532_);
v_fvarId_4886_ = lean_ctor_get(v_value_4457_, 0);
lean_inc(v_fvarId_4886_);
v___x_4887_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecIfNeeded___redArg(v_fvarId_4886_, v_a_4885_, v_a_4449_, v_a_4450_);
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_a_4888_; lean_object* v_decl_4889_; lean_object* v_k_4890_; size_t v___x_4891_; size_t v___x_4892_; uint8_t v___x_4893_; 
v_a_4888_ = lean_ctor_get(v___x_4887_, 0);
lean_inc(v_a_4888_);
lean_dec_ref(v___x_4887_);
v_decl_4889_ = lean_ctor_get(v_code_4446_, 0);
v_k_4890_ = lean_ctor_get(v_code_4446_, 1);
v___x_4891_ = lean_ptr_addr(v_k_4890_);
v___x_4892_ = lean_ptr_addr(v_a_4888_);
v___x_4893_ = lean_usize_dec_eq(v___x_4891_, v___x_4892_);
if (v___x_4893_ == 0)
{
lean_object* v___x_4895_; uint8_t v_isShared_4896_; uint8_t v_isSharedCheck_4900_; 
v_isSharedCheck_4900_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4900_ == 0)
{
lean_object* v_unused_4901_; lean_object* v_unused_4902_; 
v_unused_4901_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4901_);
v_unused_4902_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4902_);
v___x_4895_ = v_code_4446_;
v_isShared_4896_ = v_isSharedCheck_4900_;
goto v_resetjp_4894_;
}
else
{
lean_dec(v_code_4446_);
v___x_4895_ = lean_box(0);
v_isShared_4896_ = v_isSharedCheck_4900_;
goto v_resetjp_4894_;
}
v_resetjp_4894_:
{
lean_object* v___x_4898_; 
if (v_isShared_4896_ == 0)
{
lean_ctor_set(v___x_4895_, 1, v_a_4888_);
lean_ctor_set(v___x_4895_, 0, v_decl_4447_);
v___x_4898_ = v___x_4895_;
goto v_reusejp_4897_;
}
else
{
lean_object* v_reuseFailAlloc_4899_; 
v_reuseFailAlloc_4899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4899_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4899_, 1, v_a_4888_);
v___x_4898_ = v_reuseFailAlloc_4899_;
goto v_reusejp_4897_;
}
v_reusejp_4897_:
{
v_k_4459_ = v___x_4898_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
size_t v___x_4903_; size_t v___x_4904_; uint8_t v___x_4905_; 
v___x_4903_ = lean_ptr_addr(v_decl_4889_);
v___x_4904_ = lean_ptr_addr(v_decl_4447_);
v___x_4905_ = lean_usize_dec_eq(v___x_4903_, v___x_4904_);
if (v___x_4905_ == 0)
{
lean_object* v___x_4907_; uint8_t v_isShared_4908_; uint8_t v_isSharedCheck_4912_; 
v_isSharedCheck_4912_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4912_ == 0)
{
lean_object* v_unused_4913_; lean_object* v_unused_4914_; 
v_unused_4913_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4913_);
v_unused_4914_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4914_);
v___x_4907_ = v_code_4446_;
v_isShared_4908_ = v_isSharedCheck_4912_;
goto v_resetjp_4906_;
}
else
{
lean_dec(v_code_4446_);
v___x_4907_ = lean_box(0);
v_isShared_4908_ = v_isSharedCheck_4912_;
goto v_resetjp_4906_;
}
v_resetjp_4906_:
{
lean_object* v___x_4910_; 
if (v_isShared_4908_ == 0)
{
lean_ctor_set(v___x_4907_, 1, v_a_4888_);
lean_ctor_set(v___x_4907_, 0, v_decl_4447_);
v___x_4910_ = v___x_4907_;
goto v_reusejp_4909_;
}
else
{
lean_object* v_reuseFailAlloc_4911_; 
v_reuseFailAlloc_4911_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4911_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4911_, 1, v_a_4888_);
v___x_4910_ = v_reuseFailAlloc_4911_;
goto v_reusejp_4909_;
}
v_reusejp_4909_:
{
v_k_4459_ = v___x_4910_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_dec(v_a_4888_);
lean_dec_ref(v_decl_4447_);
v_k_4459_ = v_code_4446_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_object* v___x_4915_; lean_object* v___x_4916_; 
lean_dec_ref(v___x_4887_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4915_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4916_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4915_);
v_k_4459_ = v___x_4916_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
case 15:
{
lean_object* v___x_4917_; lean_object* v___x_4918_; 
lean_dec_ref(v___x_4532_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4917_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__12);
v___x_4918_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v___x_4917_, v_a_4449_, v_a_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
if (lean_obj_tag(v___x_4918_) == 0)
{
lean_object* v_a_4919_; 
v_a_4919_ = lean_ctor_get(v___x_4918_, 0);
lean_inc(v_a_4919_);
lean_dec_ref_known(v___x_4918_, 1);
v_k_4459_ = v_a_4919_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
else
{
lean_dec_ref_known(v_value_4457_, 1);
lean_dec(v_fvarId_4456_);
return v___x_4918_;
}
}
default: 
{
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_a_4920_; lean_object* v_decl_4921_; lean_object* v_k_4922_; size_t v___x_4923_; size_t v___x_4924_; uint8_t v___x_4925_; 
v_a_4920_ = lean_ctor_get(v___x_4532_, 0);
lean_inc(v_a_4920_);
lean_dec_ref(v___x_4532_);
v_decl_4921_ = lean_ctor_get(v_code_4446_, 0);
v_k_4922_ = lean_ctor_get(v_code_4446_, 1);
v___x_4923_ = lean_ptr_addr(v_k_4922_);
v___x_4924_ = lean_ptr_addr(v_a_4920_);
v___x_4925_ = lean_usize_dec_eq(v___x_4923_, v___x_4924_);
if (v___x_4925_ == 0)
{
lean_object* v___x_4927_; uint8_t v_isShared_4928_; uint8_t v_isSharedCheck_4932_; 
v_isSharedCheck_4932_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4932_ == 0)
{
lean_object* v_unused_4933_; lean_object* v_unused_4934_; 
v_unused_4933_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4933_);
v_unused_4934_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4934_);
v___x_4927_ = v_code_4446_;
v_isShared_4928_ = v_isSharedCheck_4932_;
goto v_resetjp_4926_;
}
else
{
lean_dec(v_code_4446_);
v___x_4927_ = lean_box(0);
v_isShared_4928_ = v_isSharedCheck_4932_;
goto v_resetjp_4926_;
}
v_resetjp_4926_:
{
lean_object* v___x_4930_; 
if (v_isShared_4928_ == 0)
{
lean_ctor_set(v___x_4927_, 1, v_a_4920_);
lean_ctor_set(v___x_4927_, 0, v_decl_4447_);
v___x_4930_ = v___x_4927_;
goto v_reusejp_4929_;
}
else
{
lean_object* v_reuseFailAlloc_4931_; 
v_reuseFailAlloc_4931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4931_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4931_, 1, v_a_4920_);
v___x_4930_ = v_reuseFailAlloc_4931_;
goto v_reusejp_4929_;
}
v_reusejp_4929_:
{
v_k_4459_ = v___x_4930_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
size_t v___x_4935_; size_t v___x_4936_; uint8_t v___x_4937_; 
v___x_4935_ = lean_ptr_addr(v_decl_4921_);
v___x_4936_ = lean_ptr_addr(v_decl_4447_);
v___x_4937_ = lean_usize_dec_eq(v___x_4935_, v___x_4936_);
if (v___x_4937_ == 0)
{
lean_object* v___x_4939_; uint8_t v_isShared_4940_; uint8_t v_isSharedCheck_4944_; 
v_isSharedCheck_4944_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4944_ == 0)
{
lean_object* v_unused_4945_; lean_object* v_unused_4946_; 
v_unused_4945_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4945_);
v_unused_4946_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4946_);
v___x_4939_ = v_code_4446_;
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
else
{
lean_dec(v_code_4446_);
v___x_4939_ = lean_box(0);
v_isShared_4940_ = v_isSharedCheck_4944_;
goto v_resetjp_4938_;
}
v_resetjp_4938_:
{
lean_object* v___x_4942_; 
if (v_isShared_4940_ == 0)
{
lean_ctor_set(v___x_4939_, 1, v_a_4920_);
lean_ctor_set(v___x_4939_, 0, v_decl_4447_);
v___x_4942_ = v___x_4939_;
goto v_reusejp_4941_;
}
else
{
lean_object* v_reuseFailAlloc_4943_; 
v_reuseFailAlloc_4943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4943_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4943_, 1, v_a_4920_);
v___x_4942_ = v_reuseFailAlloc_4943_;
goto v_reusejp_4941_;
}
v_reusejp_4941_:
{
v_k_4459_ = v___x_4942_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_dec(v_a_4920_);
lean_dec_ref(v_decl_4447_);
v_k_4459_ = v_code_4446_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
else
{
lean_object* v___x_4947_; lean_object* v___x_4948_; 
lean_dec_ref(v___x_4532_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4947_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4948_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4947_);
v_k_4459_ = v___x_4948_;
v___y_4460_ = v_a_4449_;
v___y_4461_ = v_a_4450_;
v___y_4462_ = v_a_4451_;
v___y_4463_ = v_a_4452_;
v___y_4464_ = v_a_4453_;
v___y_4465_ = v_a_4454_;
goto v___jp_4458_;
}
}
}
v___jp_4458_:
{
lean_object* v___x_4466_; 
v___x_4466_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue(v_value_4457_, v___y_4460_, v___y_4461_, v___y_4462_, v___y_4463_, v___y_4464_, v___y_4465_);
if (lean_obj_tag(v___x_4466_) == 0)
{
lean_object* v___x_4468_; uint8_t v_isShared_4469_; uint8_t v_isSharedCheck_4486_; 
v_isSharedCheck_4486_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4486_ == 0)
{
lean_object* v_unused_4487_; 
v_unused_4487_ = lean_ctor_get(v___x_4466_, 0);
lean_dec(v_unused_4487_);
v___x_4468_ = v___x_4466_;
v_isShared_4469_ = v_isSharedCheck_4486_;
goto v_resetjp_4467_;
}
else
{
lean_dec(v___x_4466_);
v___x_4468_ = lean_box(0);
v_isShared_4469_ = v_isSharedCheck_4486_;
goto v_resetjp_4467_;
}
v_resetjp_4467_:
{
lean_object* v___x_4470_; lean_object* v_vars_4471_; lean_object* v_borrows_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4485_; 
v___x_4470_ = lean_st_ref_take(v___y_4461_);
v_vars_4471_ = lean_ctor_get(v___x_4470_, 0);
v_borrows_4472_ = lean_ctor_get(v___x_4470_, 1);
v_isSharedCheck_4485_ = !lean_is_exclusive(v___x_4470_);
if (v_isSharedCheck_4485_ == 0)
{
v___x_4474_ = v___x_4470_;
v_isShared_4475_ = v_isSharedCheck_4485_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_borrows_4472_);
lean_inc(v_vars_4471_);
lean_dec(v___x_4470_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4485_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v_vars_4476_; lean_object* v_borrows_4477_; lean_object* v___x_4479_; 
v_vars_4476_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_vars_4471_, v_fvarId_4456_);
v_borrows_4477_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams_spec__0___redArg(v_borrows_4472_, v_fvarId_4456_);
lean_dec(v_fvarId_4456_);
if (v_isShared_4475_ == 0)
{
lean_ctor_set(v___x_4474_, 1, v_borrows_4477_);
lean_ctor_set(v___x_4474_, 0, v_vars_4476_);
v___x_4479_ = v___x_4474_;
goto v_reusejp_4478_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_vars_4476_);
lean_ctor_set(v_reuseFailAlloc_4484_, 1, v_borrows_4477_);
v___x_4479_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4478_;
}
v_reusejp_4478_:
{
lean_object* v___x_4480_; lean_object* v___x_4482_; 
v___x_4480_ = lean_st_ref_put(v___y_4461_, v___x_4479_);
if (v_isShared_4469_ == 0)
{
lean_ctor_set(v___x_4468_, 0, v_k_4459_);
v___x_4482_ = v___x_4468_;
goto v_reusejp_4481_;
}
else
{
lean_object* v_reuseFailAlloc_4483_; 
v_reuseFailAlloc_4483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4483_, 0, v_k_4459_);
v___x_4482_ = v_reuseFailAlloc_4483_;
goto v_reusejp_4481_;
}
v_reusejp_4481_:
{
return v___x_4482_;
}
}
}
}
}
else
{
lean_object* v_a_4488_; lean_object* v___x_4490_; uint8_t v_isShared_4491_; uint8_t v_isSharedCheck_4495_; 
lean_dec_ref(v_k_4459_);
lean_dec(v_fvarId_4456_);
v_a_4488_ = lean_ctor_get(v___x_4466_, 0);
v_isSharedCheck_4495_ = !lean_is_exclusive(v___x_4466_);
if (v_isSharedCheck_4495_ == 0)
{
v___x_4490_ = v___x_4466_;
v_isShared_4491_ = v_isSharedCheck_4495_;
goto v_resetjp_4489_;
}
else
{
lean_inc(v_a_4488_);
lean_dec(v___x_4466_);
v___x_4490_ = lean_box(0);
v_isShared_4491_ = v_isSharedCheck_4495_;
goto v_resetjp_4489_;
}
v_resetjp_4489_:
{
lean_object* v___x_4493_; 
if (v_isShared_4491_ == 0)
{
v___x_4493_ = v___x_4490_;
goto v_reusejp_4492_;
}
else
{
lean_object* v_reuseFailAlloc_4494_; 
v_reuseFailAlloc_4494_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4494_, 0, v_a_4488_);
v___x_4493_ = v_reuseFailAlloc_4494_;
goto v_reusejp_4492_;
}
v_reusejp_4492_:
{
return v___x_4493_;
}
}
}
}
v___jp_4496_:
{
if (lean_obj_tag(v_code_4446_) == 0)
{
lean_object* v_decl_4504_; lean_object* v_k_4505_; size_t v___x_4506_; size_t v___x_4507_; uint8_t v___x_4508_; 
v_decl_4504_ = lean_ctor_get(v_code_4446_, 0);
v_k_4505_ = lean_ctor_get(v_code_4446_, 1);
v___x_4506_ = lean_ptr_addr(v_k_4505_);
v___x_4507_ = lean_ptr_addr(v_k_4497_);
v___x_4508_ = lean_usize_dec_eq(v___x_4506_, v___x_4507_);
if (v___x_4508_ == 0)
{
lean_object* v___x_4510_; uint8_t v_isShared_4511_; uint8_t v_isSharedCheck_4515_; 
v_isSharedCheck_4515_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4515_ == 0)
{
lean_object* v_unused_4516_; lean_object* v_unused_4517_; 
v_unused_4516_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4516_);
v_unused_4517_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4517_);
v___x_4510_ = v_code_4446_;
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
else
{
lean_dec(v_code_4446_);
v___x_4510_ = lean_box(0);
v_isShared_4511_ = v_isSharedCheck_4515_;
goto v_resetjp_4509_;
}
v_resetjp_4509_:
{
lean_object* v___x_4513_; 
if (v_isShared_4511_ == 0)
{
lean_ctor_set(v___x_4510_, 1, v_k_4497_);
lean_ctor_set(v___x_4510_, 0, v_decl_4447_);
v___x_4513_ = v___x_4510_;
goto v_reusejp_4512_;
}
else
{
lean_object* v_reuseFailAlloc_4514_; 
v_reuseFailAlloc_4514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4514_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4514_, 1, v_k_4497_);
v___x_4513_ = v_reuseFailAlloc_4514_;
goto v_reusejp_4512_;
}
v_reusejp_4512_:
{
v_k_4459_ = v___x_4513_;
v___y_4460_ = v___y_4498_;
v___y_4461_ = v___y_4499_;
v___y_4462_ = v___y_4500_;
v___y_4463_ = v___y_4501_;
v___y_4464_ = v___y_4502_;
v___y_4465_ = v___y_4503_;
goto v___jp_4458_;
}
}
}
else
{
size_t v___x_4518_; size_t v___x_4519_; uint8_t v___x_4520_; 
v___x_4518_ = lean_ptr_addr(v_decl_4504_);
v___x_4519_ = lean_ptr_addr(v_decl_4447_);
v___x_4520_ = lean_usize_dec_eq(v___x_4518_, v___x_4519_);
if (v___x_4520_ == 0)
{
lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4527_; 
v_isSharedCheck_4527_ = !lean_is_exclusive(v_code_4446_);
if (v_isSharedCheck_4527_ == 0)
{
lean_object* v_unused_4528_; lean_object* v_unused_4529_; 
v_unused_4528_ = lean_ctor_get(v_code_4446_, 1);
lean_dec(v_unused_4528_);
v_unused_4529_ = lean_ctor_get(v_code_4446_, 0);
lean_dec(v_unused_4529_);
v___x_4522_ = v_code_4446_;
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
else
{
lean_dec(v_code_4446_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
lean_object* v___x_4525_; 
if (v_isShared_4523_ == 0)
{
lean_ctor_set(v___x_4522_, 1, v_k_4497_);
lean_ctor_set(v___x_4522_, 0, v_decl_4447_);
v___x_4525_ = v___x_4522_;
goto v_reusejp_4524_;
}
else
{
lean_object* v_reuseFailAlloc_4526_; 
v_reuseFailAlloc_4526_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4526_, 0, v_decl_4447_);
lean_ctor_set(v_reuseFailAlloc_4526_, 1, v_k_4497_);
v___x_4525_ = v_reuseFailAlloc_4526_;
goto v_reusejp_4524_;
}
v_reusejp_4524_:
{
v_k_4459_ = v___x_4525_;
v___y_4460_ = v___y_4498_;
v___y_4461_ = v___y_4499_;
v___y_4462_ = v___y_4500_;
v___y_4463_ = v___y_4501_;
v___y_4464_ = v___y_4502_;
v___y_4465_ = v___y_4503_;
goto v___jp_4458_;
}
}
}
else
{
lean_dec_ref(v_k_4497_);
lean_dec_ref(v_decl_4447_);
v_k_4459_ = v_code_4446_;
v___y_4460_ = v___y_4498_;
v___y_4461_ = v___y_4499_;
v___y_4462_ = v___y_4500_;
v___y_4463_ = v___y_4501_;
v___y_4464_ = v___y_4502_;
v___y_4465_ = v___y_4503_;
goto v___jp_4458_;
}
}
}
else
{
lean_object* v___x_4530_; lean_object* v___x_4531_; 
lean_dec_ref(v_k_4497_);
lean_dec_ref(v_decl_4447_);
lean_dec_ref(v_code_4446_);
v___x_4530_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__2);
v___x_4531_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__0(v___x_4530_);
v_k_4459_ = v___x_4531_;
v___y_4460_ = v___y_4498_;
v___y_4461_ = v___y_4499_;
v___y_4462_ = v___y_4500_;
v___y_4463_ = v___y_4501_;
v___y_4464_ = v___y_4502_;
v___y_4465_ = v___y_4503_;
goto v___jp_4458_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___boxed(lean_object* v_code_4949_, lean_object* v_decl_4950_, lean_object* v_k_4951_, lean_object* v_a_4952_, lean_object* v_a_4953_, lean_object* v_a_4954_, lean_object* v_a_4955_, lean_object* v_a_4956_, lean_object* v_a_4957_, lean_object* v___y_4958_){
_start:
{
lean_object* v_res_4959_; 
v_res_4959_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(v_code_4949_, v_decl_4950_, v_k_4951_, v_a_4952_, v_a_4953_, v_a_4954_, v_a_4955_, v_a_4956_, v_a_4957_);
lean_dec(v_a_4957_);
lean_dec_ref(v_a_4956_);
lean_dec(v_a_4955_);
lean_dec_ref(v_a_4954_);
lean_dec(v_a_4953_);
lean_dec_ref(v_a_4952_);
return v_res_4959_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0(void){
_start:
{
lean_object* v___x_4960_; 
v___x_4960_ = l_Lean_Compiler_LCNF_instInhabitedFunDecl_default__1___redArg();
return v___x_4960_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(lean_object* v_msg_4961_){
_start:
{
lean_object* v___x_4962_; lean_object* v___x_4963_; 
v___x_4962_ = lean_obj_once(&l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0, &l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0_once, _init_l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4___closed__0);
v___x_4963_ = lean_panic_fn_borrowed(v___x_4962_, v_msg_4961_);
return v___x_4963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___lam__0(lean_object* v_derivedValMap_4964_, lean_object* v_liveVars_4965_, lean_object* v_child_4966_){
_start:
{
lean_object* v_cinfo_4980_; lean_object* v_parents_4981_; lean_object* v___x_4982_; lean_object* v___x_4983_; uint8_t v___x_4984_; 
v_cinfo_4980_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__4(v_derivedValMap_4964_, v_child_4966_);
v_parents_4981_ = lean_ctor_get(v_cinfo_4980_, 0);
lean_inc_ref(v_parents_4981_);
lean_dec_ref(v_cinfo_4980_);
v___x_4982_ = lean_unsigned_to_nat(0u);
v___x_4983_ = lean_array_get_size(v_parents_4981_);
v___x_4984_ = lean_nat_dec_lt(v___x_4982_, v___x_4983_);
if (v___x_4984_ == 0)
{
lean_dec_ref(v_parents_4981_);
goto v___jp_4967_;
}
else
{
if (v___x_4984_ == 0)
{
lean_dec_ref(v_parents_4981_);
goto v___jp_4967_;
}
else
{
size_t v___x_4985_; size_t v___x_4986_; uint8_t v___x_4987_; 
v___x_4985_ = ((size_t)0ULL);
v___x_4986_ = lean_usize_of_nat(v___x_4983_);
v___x_4987_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__3_spec__5(v_liveVars_4965_, v_parents_4981_, v___x_4985_, v___x_4986_);
lean_dec_ref(v_parents_4981_);
if (v___x_4987_ == 0)
{
goto v___jp_4967_;
}
else
{
lean_object* v___x_4988_; 
v___x_4988_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_child_4966_, v_derivedValMap_4964_, v_liveVars_4965_);
lean_dec(v_child_4966_);
return v___x_4988_;
}
}
}
v___jp_4967_:
{
lean_object* v_vars_4968_; lean_object* v_borrows_4969_; lean_object* v___x_4971_; uint8_t v_isShared_4972_; uint8_t v_isSharedCheck_4979_; 
v_vars_4968_ = lean_ctor_get(v_liveVars_4965_, 0);
v_borrows_4969_ = lean_ctor_get(v_liveVars_4965_, 1);
v_isSharedCheck_4979_ = !lean_is_exclusive(v_liveVars_4965_);
if (v_isSharedCheck_4979_ == 0)
{
v___x_4971_ = v_liveVars_4965_;
v_isShared_4972_ = v_isSharedCheck_4979_;
goto v_resetjp_4970_;
}
else
{
lean_inc(v_borrows_4969_);
lean_inc(v_vars_4968_);
lean_dec(v_liveVars_4965_);
v___x_4971_ = lean_box(0);
v_isShared_4972_ = v_isSharedCheck_4979_;
goto v_resetjp_4970_;
}
v_resetjp_4970_:
{
lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4976_; 
v___x_4973_ = lean_box(0);
lean_inc(v_child_4966_);
v___x_4974_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_4969_, v_child_4966_, v___x_4973_);
if (v_isShared_4972_ == 0)
{
lean_ctor_set(v___x_4971_, 1, v___x_4974_);
v___x_4976_ = v___x_4971_;
goto v_reusejp_4975_;
}
else
{
lean_object* v_reuseFailAlloc_4978_; 
v_reuseFailAlloc_4978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4978_, 0, v_vars_4968_);
lean_ctor_set(v_reuseFailAlloc_4978_, 1, v___x_4974_);
v___x_4976_ = v_reuseFailAlloc_4978_;
goto v_reusejp_4975_;
}
v_reusejp_4975_:
{
lean_object* v___x_4977_; 
v___x_4977_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_child_4966_, v_derivedValMap_4964_, v___x_4976_);
lean_dec(v_child_4966_);
return v___x_4977_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(lean_object* v_fvarId_4989_, lean_object* v_derivedValMap_4990_, lean_object* v_liveVars_4991_){
_start:
{
lean_object* v___x_4992_; 
v___x_4992_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_removeFromParents_spec__0___redArg(v_derivedValMap_4990_, v_fvarId_4989_);
if (lean_obj_tag(v___x_4992_) == 1)
{
lean_object* v_val_4993_; lean_object* v_children_4994_; lean_object* v___f_4995_; lean_object* v___x_4996_; 
v_val_4993_ = lean_ctor_get(v___x_4992_, 0);
lean_inc(v_val_4993_);
lean_dec_ref_known(v___x_4992_, 1);
v_children_4994_ = lean_ctor_get(v_val_4993_, 1);
lean_inc_ref(v_children_4994_);
lean_dec(v_val_4993_);
v___f_4995_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___lam__0), 3, 1);
lean_closure_set(v___f_4995_, 0, v_derivedValMap_4990_);
v___x_4996_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_4995_, v_liveVars_4991_, v_children_4994_);
lean_dec_ref(v_children_4994_);
return v___x_4996_;
}
else
{
lean_dec(v___x_4992_);
lean_dec_ref(v_derivedValMap_4990_);
return v_liveVars_4991_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8___boxed(lean_object* v_fvarId_4997_, lean_object* v_derivedValMap_4998_, lean_object* v_liveVars_4999_){
_start:
{
lean_object* v_res_5000_; 
v_res_5000_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_fvarId_4997_, v_derivedValMap_4998_, v_liveVars_4999_);
lean_dec(v_fvarId_4997_);
return v_res_5000_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0(lean_object* v_derivedValMap_5001_, lean_object* v_liveVars_5002_, lean_object* v_x_5003_){
_start:
{
lean_object* v_vars_5004_; lean_object* v_borrows_5005_; lean_object* v___x_5007_; uint8_t v_isShared_5008_; uint8_t v_isSharedCheck_5015_; 
v_vars_5004_ = lean_ctor_get(v_liveVars_5002_, 0);
v_borrows_5005_ = lean_ctor_get(v_liveVars_5002_, 1);
v_isSharedCheck_5015_ = !lean_is_exclusive(v_liveVars_5002_);
if (v_isSharedCheck_5015_ == 0)
{
v___x_5007_ = v_liveVars_5002_;
v_isShared_5008_ = v_isSharedCheck_5015_;
goto v_resetjp_5006_;
}
else
{
lean_inc(v_borrows_5005_);
lean_inc(v_vars_5004_);
lean_dec(v_liveVars_5002_);
v___x_5007_ = lean_box(0);
v_isShared_5008_ = v_isSharedCheck_5015_;
goto v_resetjp_5006_;
}
v_resetjp_5006_:
{
lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5012_; 
v___x_5009_ = lean_box(0);
lean_inc(v_x_5003_);
v___x_5010_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_borrows_5005_, v_x_5003_, v___x_5009_);
if (v_isShared_5008_ == 0)
{
lean_ctor_set(v___x_5007_, 1, v___x_5010_);
v___x_5012_ = v___x_5007_;
goto v_reusejp_5011_;
}
else
{
lean_object* v_reuseFailAlloc_5014_; 
v_reuseFailAlloc_5014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5014_, 0, v_vars_5004_);
lean_ctor_set(v_reuseFailAlloc_5014_, 1, v___x_5010_);
v___x_5012_ = v_reuseFailAlloc_5014_;
goto v_reusejp_5011_;
}
v_reusejp_5011_:
{
lean_object* v___x_5013_; 
v___x_5013_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDescendants___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__8(v_x_5003_, v_derivedValMap_5001_, v___x_5012_);
lean_dec(v_x_5003_);
return v___x_5013_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__1(lean_object* v_a_5016_, lean_object* v_a_5017_){
_start:
{
if (lean_obj_tag(v_a_5016_) == 0)
{
lean_object* v___x_5018_; 
v___x_5018_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5018_, 0, v_a_5017_);
return v___x_5018_;
}
else
{
lean_object* v_key_5019_; lean_object* v_value_5020_; lean_object* v_tail_5021_; lean_object* v_r_5022_; 
v_key_5019_ = lean_ctor_get(v_a_5016_, 0);
lean_inc(v_key_5019_);
v_value_5020_ = lean_ctor_get(v_a_5016_, 1);
lean_inc(v_value_5020_);
v_tail_5021_ = lean_ctor_get(v_a_5016_, 2);
lean_inc(v_tail_5021_);
lean_dec_ref_known(v_a_5016_, 3);
v_r_5022_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_addDerivedLetValue_spec__1___redArg(v_a_5017_, v_key_5019_, v_value_5020_);
v_a_5016_ = v_tail_5021_;
v_a_5017_ = v_r_5022_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2(lean_object* v_as_5024_, size_t v_sz_5025_, size_t v_i_5026_, lean_object* v_b_5027_){
_start:
{
uint8_t v___x_5028_; 
v___x_5028_ = lean_usize_dec_lt(v_i_5026_, v_sz_5025_);
if (v___x_5028_ == 0)
{
return v_b_5027_;
}
else
{
lean_object* v_a_5029_; lean_object* v___x_5030_; 
v_a_5029_ = lean_array_uget_borrowed(v_as_5024_, v_i_5026_);
lean_inc(v_a_5029_);
v___x_5030_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__1(v_a_5029_, v_b_5027_);
if (lean_obj_tag(v___x_5030_) == 0)
{
lean_object* v_a_5031_; 
v_a_5031_ = lean_ctor_get(v___x_5030_, 0);
lean_inc(v_a_5031_);
lean_dec_ref_known(v___x_5030_, 1);
return v_a_5031_;
}
else
{
lean_object* v_a_5032_; size_t v___x_5033_; size_t v___x_5034_; 
v_a_5032_ = lean_ctor_get(v___x_5030_, 0);
lean_inc(v_a_5032_);
lean_dec_ref_known(v___x_5030_, 1);
v___x_5033_ = ((size_t)1ULL);
v___x_5034_ = lean_usize_add(v_i_5026_, v___x_5033_);
v_i_5026_ = v___x_5034_;
v_b_5027_ = v_a_5032_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2___boxed(lean_object* v_as_5036_, lean_object* v_sz_5037_, lean_object* v_i_5038_, lean_object* v_b_5039_){
_start:
{
size_t v_sz_boxed_5040_; size_t v_i_boxed_5041_; lean_object* v_res_5042_; 
v_sz_boxed_5040_ = lean_unbox_usize(v_sz_5037_);
lean_dec(v_sz_5037_);
v_i_boxed_5041_ = lean_unbox_usize(v_i_5038_);
lean_dec(v_i_5038_);
v_res_5042_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2(v_as_5036_, v_sz_boxed_5040_, v_i_boxed_5041_, v_b_5039_);
lean_dec_ref(v_as_5036_);
return v_res_5042_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(lean_object* v_m_5043_, lean_object* v_l_5044_){
_start:
{
lean_object* v_buckets_5045_; size_t v_sz_5046_; size_t v___x_5047_; lean_object* v___x_5048_; 
v_buckets_5045_ = lean_ctor_get(v_l_5044_, 1);
v_sz_5046_ = lean_array_size(v_buckets_5045_);
v___x_5047_ = ((size_t)0ULL);
v___x_5048_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1_spec__2(v_buckets_5045_, v_sz_5046_, v___x_5047_, v_m_5043_);
return v___x_5048_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1___boxed(lean_object* v_m_5049_, lean_object* v_l_5050_){
_start:
{
lean_object* v_res_5051_; 
v_res_5051_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(v_m_5049_, v_l_5050_);
lean_dec_ref(v_l_5050_);
return v_res_5051_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(lean_object* v_a_5052_, lean_object* v_a_5053_){
_start:
{
if (lean_obj_tag(v_a_5052_) == 0)
{
lean_object* v___x_5054_; 
v___x_5054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5054_, 0, v_a_5053_);
return v___x_5054_;
}
else
{
lean_object* v_key_5055_; lean_object* v_value_5056_; lean_object* v_tail_5057_; lean_object* v_r_5058_; 
v_key_5055_ = lean_ctor_get(v_a_5052_, 0);
lean_inc(v_key_5055_);
v_value_5056_ = lean_ctor_get(v_a_5052_, 1);
lean_inc(v_value_5056_);
v_tail_5057_ = lean_ctor_get(v_a_5052_, 2);
lean_inc(v_tail_5057_);
lean_dec_ref_known(v_a_5052_, 3);
v_r_5058_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__2___redArg(v_a_5053_, v_key_5055_, v_value_5056_);
v_a_5052_ = v_tail_5057_;
v_a_5053_ = v_r_5058_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(lean_object* v_as_5060_, size_t v_sz_5061_, size_t v_i_5062_, lean_object* v_b_5063_){
_start:
{
uint8_t v___x_5064_; 
v___x_5064_ = lean_usize_dec_lt(v_i_5062_, v_sz_5061_);
if (v___x_5064_ == 0)
{
return v_b_5063_;
}
else
{
lean_object* v_a_5065_; lean_object* v___x_5066_; 
v_a_5065_ = lean_array_uget_borrowed(v_as_5060_, v_i_5062_);
lean_inc(v_a_5065_);
v___x_5066_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__0(v_a_5065_, v_b_5063_);
if (lean_obj_tag(v___x_5066_) == 0)
{
lean_object* v_a_5067_; 
v_a_5067_ = lean_ctor_get(v___x_5066_, 0);
lean_inc(v_a_5067_);
lean_dec_ref_known(v___x_5066_, 1);
return v_a_5067_;
}
else
{
lean_object* v_a_5068_; size_t v___x_5069_; size_t v___x_5070_; 
v_a_5068_ = lean_ctor_get(v___x_5066_, 0);
lean_inc(v_a_5068_);
lean_dec_ref_known(v___x_5066_, 1);
v___x_5069_ = ((size_t)1ULL);
v___x_5070_ = lean_usize_add(v_i_5062_, v___x_5069_);
v_i_5062_ = v___x_5070_;
v_b_5063_ = v_a_5068_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2___boxed(lean_object* v_as_5072_, lean_object* v_sz_5073_, lean_object* v_i_5074_, lean_object* v_b_5075_){
_start:
{
size_t v_sz_boxed_5076_; size_t v_i_boxed_5077_; lean_object* v_res_5078_; 
v_sz_boxed_5076_ = lean_unbox_usize(v_sz_5073_);
lean_dec(v_sz_5073_);
v_i_boxed_5077_ = lean_unbox_usize(v_i_5074_);
lean_dec(v_i_5074_);
v_res_5078_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_as_5072_, v_sz_boxed_5076_, v_i_boxed_5077_, v_b_5075_);
lean_dec_ref(v_as_5072_);
return v_res_5078_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(lean_object* v_as_5079_, size_t v_i_5080_, size_t v_stop_5081_, lean_object* v_b_5082_){
_start:
{
lean_object* v___y_5084_; lean_object* v___y_5085_; uint8_t v___x_5090_; 
v___x_5090_ = lean_usize_dec_eq(v_i_5080_, v_stop_5081_);
if (v___x_5090_ == 0)
{
lean_object* v___x_5091_; lean_object* v_snd_5092_; lean_object* v_vars_5093_; lean_object* v_borrows_5094_; lean_object* v_vars_5095_; lean_object* v_borrows_5096_; lean_object* v___y_5098_; lean_object* v_size_5107_; lean_object* v_buckets_5108_; lean_object* v_size_5109_; uint8_t v___x_5110_; 
v___x_5091_ = lean_array_uget_borrowed(v_as_5079_, v_i_5080_);
v_snd_5092_ = lean_ctor_get(v___x_5091_, 1);
v_vars_5093_ = lean_ctor_get(v_b_5082_, 0);
lean_inc_ref(v_vars_5093_);
v_borrows_5094_ = lean_ctor_get(v_b_5082_, 1);
lean_inc_ref(v_borrows_5094_);
lean_dec_ref(v_b_5082_);
v_vars_5095_ = lean_ctor_get(v_snd_5092_, 0);
v_borrows_5096_ = lean_ctor_get(v_snd_5092_, 1);
v_size_5107_ = lean_ctor_get(v_vars_5093_, 0);
v_buckets_5108_ = lean_ctor_get(v_vars_5093_, 1);
v_size_5109_ = lean_ctor_get(v_vars_5095_, 0);
v___x_5110_ = lean_nat_dec_le(v_size_5107_, v_size_5109_);
if (v___x_5110_ == 0)
{
lean_object* v___x_5111_; 
v___x_5111_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(v_vars_5093_, v_vars_5095_);
v___y_5098_ = v___x_5111_;
goto v___jp_5097_;
}
else
{
size_t v_sz_5112_; size_t v___x_5113_; lean_object* v___x_5114_; 
lean_inc_ref(v_buckets_5108_);
lean_dec_ref(v_vars_5093_);
v_sz_5112_ = lean_array_size(v_buckets_5108_);
v___x_5113_ = ((size_t)0ULL);
lean_inc_ref(v_vars_5095_);
v___x_5114_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_buckets_5108_, v_sz_5112_, v___x_5113_, v_vars_5095_);
lean_dec_ref(v_buckets_5108_);
v___y_5098_ = v___x_5114_;
goto v___jp_5097_;
}
v___jp_5097_:
{
lean_object* v_size_5099_; lean_object* v_buckets_5100_; lean_object* v_size_5101_; uint8_t v___x_5102_; 
v_size_5099_ = lean_ctor_get(v_borrows_5094_, 0);
v_buckets_5100_ = lean_ctor_get(v_borrows_5094_, 1);
v_size_5101_ = lean_ctor_get(v_borrows_5096_, 0);
v___x_5102_ = lean_nat_dec_le(v_size_5099_, v_size_5101_);
if (v___x_5102_ == 0)
{
lean_object* v___x_5103_; 
v___x_5103_ = l_Std_DHashMap_Internal_Raw_u2080_insertMany___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__1(v_borrows_5094_, v_borrows_5096_);
v___y_5084_ = v___y_5098_;
v___y_5085_ = v___x_5103_;
goto v___jp_5083_;
}
else
{
size_t v_sz_5104_; size_t v___x_5105_; lean_object* v___x_5106_; 
lean_inc_ref(v_buckets_5100_);
lean_dec_ref(v_borrows_5094_);
v_sz_5104_ = lean_array_size(v_buckets_5100_);
v___x_5105_ = ((size_t)0ULL);
lean_inc_ref(v_borrows_5096_);
v___x_5106_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__2(v_buckets_5100_, v_sz_5104_, v___x_5105_, v_borrows_5096_);
lean_dec_ref(v_buckets_5100_);
v___y_5084_ = v___y_5098_;
v___y_5085_ = v___x_5106_;
goto v___jp_5083_;
}
}
}
else
{
return v_b_5082_;
}
v___jp_5083_:
{
lean_object* v___x_5086_; size_t v___x_5087_; size_t v___x_5088_; 
v___x_5086_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5086_, 0, v___y_5084_);
lean_ctor_set(v___x_5086_, 1, v___y_5085_);
v___x_5087_ = ((size_t)1ULL);
v___x_5088_ = lean_usize_add(v_i_5080_, v___x_5087_);
v_i_5080_ = v___x_5088_;
v_b_5082_ = v___x_5086_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7___boxed(lean_object* v_as_5115_, lean_object* v_i_5116_, lean_object* v_stop_5117_, lean_object* v_b_5118_){
_start:
{
size_t v_i_boxed_5119_; size_t v_stop_boxed_5120_; lean_object* v_res_5121_; 
v_i_boxed_5119_ = lean_unbox_usize(v_i_5116_);
lean_dec(v_i_5116_);
v_stop_boxed_5120_ = lean_unbox_usize(v_stop_5117_);
lean_dec(v_stop_5117_);
v_res_5121_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_as_5115_, v_i_boxed_5119_, v_stop_boxed_5120_, v_b_5118_);
lean_dec_ref(v_as_5115_);
return v_res_5121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(lean_object* v_as_5122_, size_t v_i_5123_, size_t v_stop_5124_, lean_object* v_b_5125_){
_start:
{
uint8_t v___x_5126_; 
v___x_5126_ = lean_usize_dec_eq(v_i_5123_, v_stop_5124_);
if (v___x_5126_ == 0)
{
lean_object* v_borrowedValues_5127_; lean_object* v_derivedValMap_5128_; lean_object* v_varMap_5129_; lean_object* v_jpLiveVarMap_5130_; lean_object* v_idx_5131_; lean_object* v___x_5133_; uint8_t v_isShared_5134_; uint8_t v_isSharedCheck_5151_; 
v_borrowedValues_5127_ = lean_ctor_get(v_b_5125_, 0);
v_derivedValMap_5128_ = lean_ctor_get(v_b_5125_, 1);
v_varMap_5129_ = lean_ctor_get(v_b_5125_, 2);
v_jpLiveVarMap_5130_ = lean_ctor_get(v_b_5125_, 3);
v_idx_5131_ = lean_ctor_get(v_b_5125_, 4);
v_isSharedCheck_5151_ = !lean_is_exclusive(v_b_5125_);
if (v_isSharedCheck_5151_ == 0)
{
v___x_5133_ = v_b_5125_;
v_isShared_5134_ = v_isSharedCheck_5151_;
goto v_resetjp_5132_;
}
else
{
lean_inc(v_idx_5131_);
lean_inc(v_jpLiveVarMap_5130_);
lean_inc(v_varMap_5129_);
lean_inc(v_derivedValMap_5128_);
lean_inc(v_borrowedValues_5127_);
lean_dec(v_b_5125_);
v___x_5133_ = lean_box(0);
v_isShared_5134_ = v_isSharedCheck_5151_;
goto v_resetjp_5132_;
}
v_resetjp_5132_:
{
lean_object* v___x_5135_; lean_object* v_fvarId_5136_; lean_object* v_type_5137_; uint8_t v___x_5138_; uint8_t v___x_5139_; lean_object* v___x_5140_; lean_object* v___x_5141_; lean_object* v_varMap_5142_; lean_object* v___x_5143_; lean_object* v___x_5144_; lean_object* v___x_5146_; 
v___x_5135_ = lean_array_uget_borrowed(v_as_5122_, v_i_5123_);
v_fvarId_5136_ = lean_ctor_get(v___x_5135_, 0);
v_type_5137_ = lean_ctor_get(v___x_5135_, 2);
v___x_5138_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_5137_);
v___x_5139_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_5137_);
v___x_5140_ = lean_box(0);
lean_inc(v_idx_5131_);
v___x_5141_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v___x_5141_, 0, v_idx_5131_);
lean_ctor_set(v___x_5141_, 1, v___x_5140_);
lean_ctor_set_uint8(v___x_5141_, sizeof(void*)*2, v___x_5138_);
lean_ctor_set_uint8(v___x_5141_, sizeof(void*)*2 + 1, v___x_5139_);
lean_ctor_set_uint8(v___x_5141_, sizeof(void*)*2 + 2, v___x_5126_);
lean_inc(v_fvarId_5136_);
v_varMap_5142_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5136_, v___x_5141_, v_varMap_5129_);
v___x_5143_ = lean_unsigned_to_nat(1u);
v___x_5144_ = lean_nat_add(v_idx_5131_, v___x_5143_);
lean_dec(v_idx_5131_);
if (v_isShared_5134_ == 0)
{
lean_ctor_set(v___x_5133_, 4, v___x_5144_);
lean_ctor_set(v___x_5133_, 2, v_varMap_5142_);
v___x_5146_ = v___x_5133_;
goto v_reusejp_5145_;
}
else
{
lean_object* v_reuseFailAlloc_5150_; 
v_reuseFailAlloc_5150_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5150_, 0, v_borrowedValues_5127_);
lean_ctor_set(v_reuseFailAlloc_5150_, 1, v_derivedValMap_5128_);
lean_ctor_set(v_reuseFailAlloc_5150_, 2, v_varMap_5142_);
lean_ctor_set(v_reuseFailAlloc_5150_, 3, v_jpLiveVarMap_5130_);
lean_ctor_set(v_reuseFailAlloc_5150_, 4, v___x_5144_);
v___x_5146_ = v_reuseFailAlloc_5150_;
goto v_reusejp_5145_;
}
v_reusejp_5145_:
{
size_t v___x_5147_; size_t v___x_5148_; 
v___x_5147_ = ((size_t)1ULL);
v___x_5148_ = lean_usize_add(v_i_5123_, v___x_5147_);
v_i_5123_ = v___x_5148_;
v_b_5125_ = v___x_5146_;
goto _start;
}
}
}
else
{
return v_b_5125_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3___boxed(lean_object* v_as_5152_, lean_object* v_i_5153_, lean_object* v_stop_5154_, lean_object* v_b_5155_){
_start:
{
size_t v_i_boxed_5156_; size_t v_stop_boxed_5157_; lean_object* v_res_5158_; 
v_i_boxed_5156_ = lean_unbox_usize(v_i_5153_);
lean_dec(v_i_5153_);
v_stop_boxed_5157_ = lean_unbox_usize(v_stop_5154_);
lean_dec(v_stop_5154_);
v_res_5158_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_as_5152_, v_i_boxed_5156_, v_stop_boxed_5157_, v_b_5155_);
lean_dec_ref(v_as_5152_);
return v_res_5158_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(lean_object* v_discr_5159_, size_t v_sz_5160_, size_t v_i_5161_, lean_object* v_bs_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_, lean_object* v___y_5168_){
_start:
{
uint8_t v___x_5170_; 
v___x_5170_ = lean_usize_dec_lt(v_i_5161_, v_sz_5160_);
if (v___x_5170_ == 0)
{
lean_object* v___x_5171_; 
lean_dec(v_discr_5159_);
v___x_5171_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5171_, 0, v_bs_5162_);
return v___x_5171_;
}
else
{
lean_object* v_v_5172_; lean_object* v_fst_5173_; lean_object* v_snd_5174_; lean_object* v___x_5175_; lean_object* v_bs_x27_5176_; lean_object* v_a_5178_; 
v_v_5172_ = lean_array_uget_borrowed(v_bs_5162_, v_i_5161_);
v_fst_5173_ = lean_ctor_get(v_v_5172_, 0);
lean_inc(v_fst_5173_);
v_snd_5174_ = lean_ctor_get(v_v_5172_, 1);
lean_inc(v_snd_5174_);
v___x_5175_ = lean_unsigned_to_nat(0u);
v_bs_x27_5176_ = lean_array_uset(v_bs_5162_, v_i_5161_, v___x_5175_);
if (lean_obj_tag(v_fst_5173_) == 1)
{
lean_object* v_info_5183_; lean_object* v_code_5184_; lean_object* v_borrowedValues_5185_; lean_object* v_derivedValMap_5186_; lean_object* v_varMap_5187_; lean_object* v_jpLiveVarMap_5188_; lean_object* v_idx_5189_; lean_object* v___y_5191_; lean_object* v___x_5206_; 
v_info_5183_ = lean_ctor_get(v_fst_5173_, 0);
v_code_5184_ = lean_ctor_get(v_fst_5173_, 1);
v_borrowedValues_5185_ = lean_ctor_get(v___y_5163_, 0);
v_derivedValMap_5186_ = lean_ctor_get(v___y_5163_, 1);
v_varMap_5187_ = lean_ctor_get(v___y_5163_, 2);
v_jpLiveVarMap_5188_ = lean_ctor_get(v___y_5163_, 3);
v_idx_5189_ = lean_ctor_get(v___y_5163_, 4);
v___x_5206_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_5187_, v_discr_5159_);
if (lean_obj_tag(v___x_5206_) == 0)
{
lean_inc(v_varMap_5187_);
v___y_5191_ = v_varMap_5187_;
goto v___jp_5190_;
}
else
{
lean_object* v_val_5207_; lean_object* v___x_5209_; uint8_t v_isShared_5210_; uint8_t v_isSharedCheck_5228_; 
v_val_5207_ = lean_ctor_get(v___x_5206_, 0);
v_isSharedCheck_5228_ = !lean_is_exclusive(v___x_5206_);
if (v_isSharedCheck_5228_ == 0)
{
v___x_5209_ = v___x_5206_;
v_isShared_5210_ = v_isSharedCheck_5228_;
goto v_resetjp_5208_;
}
else
{
lean_inc(v_val_5207_);
lean_dec(v___x_5206_);
v___x_5209_ = lean_box(0);
v_isShared_5210_ = v_isSharedCheck_5228_;
goto v_resetjp_5208_;
}
v_resetjp_5208_:
{
uint8_t v_persistent_5211_; lean_object* v___x_5213_; uint8_t v_isShared_5214_; uint8_t v_isSharedCheck_5225_; 
v_persistent_5211_ = lean_ctor_get_uint8(v_val_5207_, sizeof(void*)*2 + 2);
v_isSharedCheck_5225_ = !lean_is_exclusive(v_val_5207_);
if (v_isSharedCheck_5225_ == 0)
{
lean_object* v_unused_5226_; lean_object* v_unused_5227_; 
v_unused_5226_ = lean_ctor_get(v_val_5207_, 1);
lean_dec(v_unused_5226_);
v_unused_5227_ = lean_ctor_get(v_val_5207_, 0);
lean_dec(v_unused_5227_);
v___x_5213_ = v_val_5207_;
v_isShared_5214_ = v_isSharedCheck_5225_;
goto v_resetjp_5212_;
}
else
{
lean_dec(v_val_5207_);
v___x_5213_ = lean_box(0);
v_isShared_5214_ = v_isSharedCheck_5225_;
goto v_resetjp_5212_;
}
v_resetjp_5212_:
{
uint8_t v___x_5215_; lean_object* v___x_5216_; lean_object* v___x_5217_; lean_object* v___x_5219_; 
v___x_5215_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_info_5183_);
v___x_5216_ = lean_unsigned_to_nat(1u);
v___x_5217_ = lean_nat_add(v_idx_5189_, v___x_5216_);
lean_inc_ref(v_info_5183_);
if (v_isShared_5210_ == 0)
{
lean_ctor_set(v___x_5209_, 0, v_info_5183_);
v___x_5219_ = v___x_5209_;
goto v_reusejp_5218_;
}
else
{
lean_object* v_reuseFailAlloc_5224_; 
v_reuseFailAlloc_5224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5224_, 0, v_info_5183_);
v___x_5219_ = v_reuseFailAlloc_5224_;
goto v_reusejp_5218_;
}
v_reusejp_5218_:
{
lean_object* v___x_5221_; 
if (v_isShared_5214_ == 0)
{
lean_ctor_set(v___x_5213_, 1, v___x_5219_);
lean_ctor_set(v___x_5213_, 0, v___x_5217_);
v___x_5221_ = v___x_5213_;
goto v_reusejp_5220_;
}
else
{
lean_object* v_reuseFailAlloc_5223_; 
v_reuseFailAlloc_5223_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_5223_, 0, v___x_5217_);
lean_ctor_set(v_reuseFailAlloc_5223_, 1, v___x_5219_);
lean_ctor_set_uint8(v_reuseFailAlloc_5223_, sizeof(void*)*2 + 2, v_persistent_5211_);
v___x_5221_ = v_reuseFailAlloc_5223_;
goto v_reusejp_5220_;
}
v_reusejp_5220_:
{
lean_object* v___x_5222_; 
lean_ctor_set_uint8(v___x_5221_, sizeof(void*)*2, v___x_5215_);
lean_ctor_set_uint8(v___x_5221_, sizeof(void*)*2 + 1, v___x_5215_);
lean_inc(v_varMap_5187_);
lean_inc(v_discr_5159_);
v___x_5222_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_5159_, v___x_5221_, v_varMap_5187_);
v___y_5191_ = v___x_5222_;
goto v___jp_5190_;
}
}
}
}
}
v___jp_5190_:
{
lean_object* v___x_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; lean_object* v___x_5195_; 
v___x_5192_ = lean_unsigned_to_nat(1u);
v___x_5193_ = lean_nat_add(v_idx_5189_, v___x_5192_);
lean_inc(v_jpLiveVarMap_5188_);
lean_inc_ref(v_derivedValMap_5186_);
lean_inc_ref(v_borrowedValues_5185_);
v___x_5194_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5194_, 0, v_borrowedValues_5185_);
lean_ctor_set(v___x_5194_, 1, v_derivedValMap_5186_);
lean_ctor_set(v___x_5194_, 2, v___y_5191_);
lean_ctor_set(v___x_5194_, 3, v_jpLiveVarMap_5188_);
lean_ctor_set(v___x_5194_, 4, v___x_5193_);
lean_inc_ref(v_code_5184_);
v___x_5195_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_snd_5174_, v_code_5184_, v___x_5194_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_);
lean_dec_ref_known(v___x_5194_, 5);
lean_dec(v_snd_5174_);
if (lean_obj_tag(v___x_5195_) == 0)
{
lean_object* v_a_5196_; lean_object* v___x_5197_; 
v_a_5196_ = lean_ctor_get(v___x_5195_, 0);
lean_inc(v_a_5196_);
lean_dec_ref_known(v___x_5195_, 1);
v___x_5197_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_fst_5173_, v_a_5196_);
v_a_5178_ = v___x_5197_;
goto v___jp_5177_;
}
else
{
lean_object* v_a_5198_; lean_object* v___x_5200_; uint8_t v_isShared_5201_; uint8_t v_isSharedCheck_5205_; 
lean_dec_ref_known(v_fst_5173_, 2);
lean_dec_ref(v_bs_x27_5176_);
lean_dec(v_discr_5159_);
v_a_5198_ = lean_ctor_get(v___x_5195_, 0);
v_isSharedCheck_5205_ = !lean_is_exclusive(v___x_5195_);
if (v_isSharedCheck_5205_ == 0)
{
v___x_5200_ = v___x_5195_;
v_isShared_5201_ = v_isSharedCheck_5205_;
goto v_resetjp_5199_;
}
else
{
lean_inc(v_a_5198_);
lean_dec(v___x_5195_);
v___x_5200_ = lean_box(0);
v_isShared_5201_ = v_isSharedCheck_5205_;
goto v_resetjp_5199_;
}
v_resetjp_5199_:
{
lean_object* v___x_5203_; 
if (v_isShared_5201_ == 0)
{
v___x_5203_ = v___x_5200_;
goto v_reusejp_5202_;
}
else
{
lean_object* v_reuseFailAlloc_5204_; 
v_reuseFailAlloc_5204_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5204_, 0, v_a_5198_);
v___x_5203_ = v_reuseFailAlloc_5204_;
goto v_reusejp_5202_;
}
v_reusejp_5202_:
{
return v___x_5203_;
}
}
}
}
}
else
{
lean_object* v_code_5229_; lean_object* v___x_5230_; 
v_code_5229_ = lean_ctor_get(v_fst_5173_, 0);
lean_inc_ref(v_code_5229_);
v___x_5230_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addPrologForAlt(v_snd_5174_, v_code_5229_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_, v___y_5168_);
lean_dec(v_snd_5174_);
if (lean_obj_tag(v___x_5230_) == 0)
{
lean_object* v_a_5231_; lean_object* v___x_5232_; 
v_a_5231_ = lean_ctor_get(v___x_5230_, 0);
lean_inc(v_a_5231_);
lean_dec_ref_known(v___x_5230_, 1);
v___x_5232_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_fst_5173_, v_a_5231_);
v_a_5178_ = v___x_5232_;
goto v___jp_5177_;
}
else
{
lean_object* v_a_5233_; lean_object* v___x_5235_; uint8_t v_isShared_5236_; uint8_t v_isSharedCheck_5240_; 
lean_dec_ref_known(v_fst_5173_, 1);
lean_dec_ref(v_bs_x27_5176_);
lean_dec(v_discr_5159_);
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
v___jp_5177_:
{
size_t v___x_5179_; size_t v___x_5180_; lean_object* v___x_5181_; 
v___x_5179_ = ((size_t)1ULL);
v___x_5180_ = lean_usize_add(v_i_5161_, v___x_5179_);
v___x_5181_ = lean_array_uset(v_bs_x27_5176_, v_i_5161_, v_a_5178_);
v_i_5161_ = v___x_5180_;
v_bs_5162_ = v___x_5181_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6___boxed(lean_object* v_discr_5241_, lean_object* v_sz_5242_, lean_object* v_i_5243_, lean_object* v_bs_5244_, lean_object* v___y_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_){
_start:
{
size_t v_sz_boxed_5252_; size_t v_i_boxed_5253_; lean_object* v_res_5254_; 
v_sz_boxed_5252_ = lean_unbox_usize(v_sz_5242_);
lean_dec(v_sz_5242_);
v_i_boxed_5253_ = lean_unbox_usize(v_i_5243_);
lean_dec(v_i_5243_);
v_res_5254_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(v_discr_5241_, v_sz_boxed_5252_, v_i_boxed_5253_, v_bs_5244_, v___y_5245_, v___y_5246_, v___y_5247_, v___y_5248_, v___y_5249_, v___y_5250_);
lean_dec(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec(v___y_5248_);
lean_dec_ref(v___y_5247_);
lean_dec(v___y_5246_);
lean_dec_ref(v___y_5245_);
return v_res_5254_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1(void){
_start:
{
lean_object* v___x_5256_; lean_object* v___x_5257_; lean_object* v___x_5258_; lean_object* v___x_5259_; lean_object* v___x_5260_; lean_object* v___x_5261_; 
v___x_5256_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__6));
v___x_5257_ = lean_unsigned_to_nat(59u);
v___x_5258_ = lean_unsigned_to_nat(678u);
v___x_5259_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__0));
v___x_5260_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collectCode___closed__4));
v___x_5261_ = l_mkPanicMessageWithDecl(v___x_5260_, v___x_5259_, v___x_5258_, v___x_5257_, v___x_5256_);
return v___x_5261_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(lean_object* v_code_5262_, lean_object* v_a_5263_, lean_object* v_a_5264_, lean_object* v_a_5265_, lean_object* v_a_5266_, lean_object* v_a_5267_, lean_object* v_a_5268_){
_start:
{
switch(lean_obj_tag(v_code_5262_))
{
case 0:
{
lean_object* v_decl_5270_; lean_object* v_k_5271_; lean_object* v_fvarId_5272_; lean_object* v_type_5273_; lean_object* v_value_5274_; lean_object* v___y_5276_; 
v_decl_5270_ = lean_ctor_get(v_code_5262_, 0);
lean_inc_ref(v_decl_5270_);
v_k_5271_ = lean_ctor_get(v_code_5262_, 1);
v_fvarId_5272_ = lean_ctor_get(v_decl_5270_, 0);
v_type_5273_ = lean_ctor_get(v_decl_5270_, 2);
v_value_5274_ = lean_ctor_get(v_decl_5270_, 3);
if (lean_obj_tag(v_value_5274_) == 5)
{
lean_object* v_i_5293_; lean_object* v___x_5294_; 
v_i_5293_ = lean_ctor_get(v_value_5274_, 0);
lean_inc_ref(v_i_5293_);
v___x_5294_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5294_, 0, v_i_5293_);
v___y_5276_ = v___x_5294_;
goto v___jp_5275_;
}
else
{
lean_object* v___x_5295_; 
v___x_5295_ = lean_box(0);
v___y_5276_ = v___x_5295_;
goto v___jp_5275_;
}
v___jp_5275_:
{
lean_object* v_borrowedValues_5277_; lean_object* v_derivedValMap_5278_; lean_object* v_varMap_5279_; lean_object* v_jpLiveVarMap_5280_; lean_object* v_idx_5281_; uint8_t v___x_5282_; uint8_t v___x_5283_; uint8_t v___x_5284_; lean_object* v_varInfo_5285_; lean_object* v___x_5286_; lean_object* v___x_5287_; lean_object* v___x_5288_; lean_object* v___x_5289_; lean_object* v___x_5290_; 
v_borrowedValues_5277_ = lean_ctor_get(v_a_5263_, 0);
v_derivedValMap_5278_ = lean_ctor_get(v_a_5263_, 1);
v_varMap_5279_ = lean_ctor_get(v_a_5263_, 2);
v_jpLiveVarMap_5280_ = lean_ctor_get(v_a_5263_, 3);
v_idx_5281_ = lean_ctor_get(v_a_5263_, 4);
v___x_5282_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isPossibleRef(v_type_5273_);
v___x_5283_ = l_Lean_Compiler_LCNF_ImpureType_Lean_Expr_isDefiniteRef(v_type_5273_);
v___x_5284_ = l_Lean_Compiler_LCNF_LetValue_isPersistent(v_value_5274_);
lean_inc(v_idx_5281_);
v_varInfo_5285_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_varInfo_5285_, 0, v_idx_5281_);
lean_ctor_set(v_varInfo_5285_, 1, v___y_5276_);
lean_ctor_set_uint8(v_varInfo_5285_, sizeof(void*)*2, v___x_5282_);
lean_ctor_set_uint8(v_varInfo_5285_, sizeof(void*)*2 + 1, v___x_5283_);
lean_ctor_set_uint8(v_varInfo_5285_, sizeof(void*)*2 + 2, v___x_5284_);
lean_inc(v_varMap_5279_);
lean_inc(v_fvarId_5272_);
v___x_5286_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5272_, v_varInfo_5285_, v_varMap_5279_);
v___x_5287_ = lean_unsigned_to_nat(1u);
v___x_5288_ = lean_nat_add(v_idx_5281_, v___x_5287_);
lean_inc(v_jpLiveVarMap_5280_);
lean_inc_ref(v_derivedValMap_5278_);
lean_inc_ref(v_borrowedValues_5277_);
v___x_5289_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5289_, 0, v_borrowedValues_5277_);
lean_ctor_set(v___x_5289_, 1, v_derivedValMap_5278_);
lean_ctor_set(v___x_5289_, 2, v___x_5286_);
lean_ctor_set(v___x_5289_, 3, v_jpLiveVarMap_5280_);
lean_ctor_set(v___x_5289_, 4, v___x_5288_);
lean_inc_ref(v_k_5271_);
v___x_5290_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5271_, v___x_5289_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5290_) == 0)
{
lean_object* v_a_5291_; lean_object* v___x_5292_; 
v_a_5291_ = lean_ctor_get(v___x_5290_, 0);
lean_inc(v_a_5291_);
lean_dec_ref_known(v___x_5290_, 1);
v___x_5292_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc(v_code_5262_, v_decl_5270_, v_a_5291_, v___x_5289_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
lean_dec_ref_known(v___x_5289_, 5);
return v___x_5292_;
}
else
{
lean_dec_ref_known(v___x_5289_, 5);
lean_dec_ref(v_decl_5270_);
lean_dec_ref_known(v_code_5262_, 2);
return v___x_5290_;
}
}
}
case 2:
{
lean_object* v_decl_5296_; lean_object* v_k_5297_; lean_object* v_fst_5299_; lean_object* v_snd_5300_; lean_object* v_params_5348_; lean_object* v_type_5349_; lean_object* v_value_5350_; uint8_t v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; uint8_t v___x_5354_; 
v_decl_5296_ = lean_ctor_get(v_code_5262_, 0);
v_k_5297_ = lean_ctor_get(v_code_5262_, 1);
v_params_5348_ = lean_ctor_get(v_decl_5296_, 2);
v_type_5349_ = lean_ctor_get(v_decl_5296_, 3);
v_value_5350_ = lean_ctor_get(v_decl_5296_, 4);
v___x_5351_ = 1;
v___x_5352_ = lean_unsigned_to_nat(0u);
v___x_5353_ = lean_array_get_size(v_params_5348_);
v___x_5354_ = lean_nat_dec_lt(v___x_5352_, v___x_5353_);
if (v___x_5354_ == 0)
{
lean_object* v___x_5355_; lean_object* v___x_5356_; lean_object* v___x_5357_; lean_object* v___x_5358_; lean_object* v___x_5359_; 
v___x_5355_ = lean_st_ref_get(v_a_5264_);
v___x_5356_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5356_);
v___x_5357_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5358_ = lean_st_ref_put(v_a_5264_, v___x_5357_);
lean_inc_ref(v_value_5350_);
v___x_5359_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5350_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5359_) == 0)
{
lean_object* v_a_5360_; lean_object* v___x_5361_; 
v_a_5360_ = lean_ctor_get(v___x_5359_, 0);
lean_inc(v_a_5360_);
lean_dec_ref_known(v___x_5359_, 1);
v___x_5361_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5348_, v_a_5360_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5361_) == 0)
{
lean_object* v_a_5362_; lean_object* v___x_5363_; 
v_a_5362_ = lean_ctor_get(v___x_5361_, 0);
lean_inc(v_a_5362_);
lean_dec_ref_known(v___x_5361_, 1);
lean_inc_ref(v_params_5348_);
lean_inc_ref(v_type_5349_);
lean_inc_ref(v_decl_5296_);
v___x_5363_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5351_, v_decl_5296_, v_type_5349_, v_params_5348_, v_a_5362_, v_a_5266_);
if (lean_obj_tag(v___x_5363_) == 0)
{
lean_object* v_a_5364_; lean_object* v___x_5365_; lean_object* v___x_5366_; lean_object* v___x_5367_; 
v_a_5364_ = lean_ctor_get(v___x_5363_, 0);
lean_inc(v_a_5364_);
lean_dec_ref_known(v___x_5363_, 1);
v___x_5365_ = lean_st_ref_get(v_a_5264_);
v___x_5366_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5366_);
v___x_5367_ = lean_st_ref_put(v_a_5264_, v___x_5355_);
v_fst_5299_ = v_a_5364_;
v_snd_5300_ = v___x_5365_;
goto v___jp_5298_;
}
else
{
lean_object* v_a_5368_; lean_object* v___x_5370_; uint8_t v_isShared_5371_; uint8_t v_isSharedCheck_5375_; 
lean_dec(v___x_5355_);
lean_dec_ref_known(v_code_5262_, 2);
v_a_5368_ = lean_ctor_get(v___x_5363_, 0);
v_isSharedCheck_5375_ = !lean_is_exclusive(v___x_5363_);
if (v_isSharedCheck_5375_ == 0)
{
v___x_5370_ = v___x_5363_;
v_isShared_5371_ = v_isSharedCheck_5375_;
goto v_resetjp_5369_;
}
else
{
lean_inc(v_a_5368_);
lean_dec(v___x_5363_);
v___x_5370_ = lean_box(0);
v_isShared_5371_ = v_isSharedCheck_5375_;
goto v_resetjp_5369_;
}
v_resetjp_5369_:
{
lean_object* v___x_5373_; 
if (v_isShared_5371_ == 0)
{
v___x_5373_ = v___x_5370_;
goto v_reusejp_5372_;
}
else
{
lean_object* v_reuseFailAlloc_5374_; 
v_reuseFailAlloc_5374_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5374_, 0, v_a_5368_);
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
lean_dec(v___x_5355_);
lean_dec_ref_known(v_code_5262_, 2);
return v___x_5361_;
}
}
else
{
lean_dec(v___x_5355_);
lean_dec_ref_known(v_code_5262_, 2);
return v___x_5359_;
}
}
else
{
size_t v___x_5376_; size_t v___x_5377_; lean_object* v___x_5378_; lean_object* v___x_5379_; lean_object* v___x_5380_; lean_object* v___x_5381_; lean_object* v___x_5382_; lean_object* v___x_5383_; 
v___x_5376_ = ((size_t)0ULL);
v___x_5377_ = lean_usize_of_nat(v___x_5353_);
lean_inc_ref(v_a_5263_);
v___x_5378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5348_, v___x_5376_, v___x_5377_, v_a_5263_);
v___x_5379_ = lean_st_ref_get(v_a_5264_);
v___x_5380_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5380_);
v___x_5381_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5382_ = lean_st_ref_put(v_a_5264_, v___x_5381_);
lean_inc_ref(v_value_5350_);
v___x_5383_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_value_5350_, v___x_5378_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5383_) == 0)
{
lean_object* v_a_5384_; lean_object* v___x_5385_; 
v_a_5384_ = lean_ctor_get(v___x_5383_, 0);
lean_inc(v_a_5384_);
lean_dec_ref_known(v___x_5383_, 1);
v___x_5385_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5348_, v_a_5384_, v___x_5378_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
lean_dec_ref(v___x_5378_);
if (lean_obj_tag(v___x_5385_) == 0)
{
lean_object* v_a_5386_; lean_object* v___x_5387_; 
v_a_5386_ = lean_ctor_get(v___x_5385_, 0);
lean_inc(v_a_5386_);
lean_dec_ref_known(v___x_5385_, 1);
lean_inc_ref(v_params_5348_);
lean_inc_ref(v_type_5349_);
lean_inc_ref(v_decl_5296_);
v___x_5387_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5351_, v_decl_5296_, v_type_5349_, v_params_5348_, v_a_5386_, v_a_5266_);
if (lean_obj_tag(v___x_5387_) == 0)
{
lean_object* v_a_5388_; lean_object* v___x_5389_; lean_object* v___x_5390_; lean_object* v___x_5391_; 
v_a_5388_ = lean_ctor_get(v___x_5387_, 0);
lean_inc(v_a_5388_);
lean_dec_ref_known(v___x_5387_, 1);
v___x_5389_ = lean_st_ref_get(v_a_5264_);
v___x_5390_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5390_);
v___x_5391_ = lean_st_ref_put(v_a_5264_, v___x_5379_);
v_fst_5299_ = v_a_5388_;
v_snd_5300_ = v___x_5389_;
goto v___jp_5298_;
}
else
{
lean_object* v_a_5392_; lean_object* v___x_5394_; uint8_t v_isShared_5395_; uint8_t v_isSharedCheck_5399_; 
lean_dec(v___x_5379_);
lean_dec_ref_known(v_code_5262_, 2);
v_a_5392_ = lean_ctor_get(v___x_5387_, 0);
v_isSharedCheck_5399_ = !lean_is_exclusive(v___x_5387_);
if (v_isSharedCheck_5399_ == 0)
{
v___x_5394_ = v___x_5387_;
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
else
{
lean_inc(v_a_5392_);
lean_dec(v___x_5387_);
v___x_5394_ = lean_box(0);
v_isShared_5395_ = v_isSharedCheck_5399_;
goto v_resetjp_5393_;
}
v_resetjp_5393_:
{
lean_object* v___x_5397_; 
if (v_isShared_5395_ == 0)
{
v___x_5397_ = v___x_5394_;
goto v_reusejp_5396_;
}
else
{
lean_object* v_reuseFailAlloc_5398_; 
v_reuseFailAlloc_5398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5398_, 0, v_a_5392_);
v___x_5397_ = v_reuseFailAlloc_5398_;
goto v_reusejp_5396_;
}
v_reusejp_5396_:
{
return v___x_5397_;
}
}
}
}
else
{
lean_dec(v___x_5379_);
lean_dec_ref_known(v_code_5262_, 2);
return v___x_5385_;
}
}
else
{
lean_dec(v___x_5379_);
lean_dec_ref(v___x_5378_);
lean_dec_ref_known(v_code_5262_, 2);
return v___x_5383_;
}
}
v___jp_5298_:
{
lean_object* v_fvarId_5301_; lean_object* v_borrowedValues_5302_; lean_object* v_derivedValMap_5303_; lean_object* v_varMap_5304_; lean_object* v_jpLiveVarMap_5305_; lean_object* v_idx_5306_; lean_object* v___x_5307_; lean_object* v___x_5308_; lean_object* v___x_5309_; 
v_fvarId_5301_ = lean_ctor_get(v_fst_5299_, 0);
v_borrowedValues_5302_ = lean_ctor_get(v_a_5263_, 0);
v_derivedValMap_5303_ = lean_ctor_get(v_a_5263_, 1);
v_varMap_5304_ = lean_ctor_get(v_a_5263_, 2);
v_jpLiveVarMap_5305_ = lean_ctor_get(v_a_5263_, 3);
v_idx_5306_ = lean_ctor_get(v_a_5263_, 4);
lean_inc(v_jpLiveVarMap_5305_);
lean_inc(v_fvarId_5301_);
v___x_5307_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5301_, v_snd_5300_, v_jpLiveVarMap_5305_);
lean_inc(v_idx_5306_);
lean_inc(v_varMap_5304_);
lean_inc_ref(v_derivedValMap_5303_);
lean_inc_ref(v_borrowedValues_5302_);
v___x_5308_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5308_, 0, v_borrowedValues_5302_);
lean_ctor_set(v___x_5308_, 1, v_derivedValMap_5303_);
lean_ctor_set(v___x_5308_, 2, v_varMap_5304_);
lean_ctor_set(v___x_5308_, 3, v___x_5307_);
lean_ctor_set(v___x_5308_, 4, v_idx_5306_);
lean_inc_ref(v_k_5297_);
v___x_5309_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5297_, v___x_5308_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
lean_dec_ref_known(v___x_5308_, 5);
if (lean_obj_tag(v___x_5309_) == 0)
{
lean_object* v_a_5310_; lean_object* v___x_5312_; uint8_t v_isShared_5313_; uint8_t v_isSharedCheck_5347_; 
v_a_5310_ = lean_ctor_get(v___x_5309_, 0);
v_isSharedCheck_5347_ = !lean_is_exclusive(v___x_5309_);
if (v_isSharedCheck_5347_ == 0)
{
v___x_5312_ = v___x_5309_;
v_isShared_5313_ = v_isSharedCheck_5347_;
goto v_resetjp_5311_;
}
else
{
lean_inc(v_a_5310_);
lean_dec(v___x_5309_);
v___x_5312_ = lean_box(0);
v_isShared_5313_ = v_isSharedCheck_5347_;
goto v_resetjp_5311_;
}
v_resetjp_5311_:
{
size_t v___x_5314_; size_t v___x_5315_; uint8_t v___x_5316_; 
v___x_5314_ = lean_ptr_addr(v_k_5297_);
v___x_5315_ = lean_ptr_addr(v_a_5310_);
v___x_5316_ = lean_usize_dec_eq(v___x_5314_, v___x_5315_);
if (v___x_5316_ == 0)
{
lean_object* v___x_5318_; uint8_t v_isShared_5319_; uint8_t v_isSharedCheck_5326_; 
v_isSharedCheck_5326_ = !lean_is_exclusive(v_code_5262_);
if (v_isSharedCheck_5326_ == 0)
{
lean_object* v_unused_5327_; lean_object* v_unused_5328_; 
v_unused_5327_ = lean_ctor_get(v_code_5262_, 1);
lean_dec(v_unused_5327_);
v_unused_5328_ = lean_ctor_get(v_code_5262_, 0);
lean_dec(v_unused_5328_);
v___x_5318_ = v_code_5262_;
v_isShared_5319_ = v_isSharedCheck_5326_;
goto v_resetjp_5317_;
}
else
{
lean_dec(v_code_5262_);
v___x_5318_ = lean_box(0);
v_isShared_5319_ = v_isSharedCheck_5326_;
goto v_resetjp_5317_;
}
v_resetjp_5317_:
{
lean_object* v___x_5321_; 
if (v_isShared_5319_ == 0)
{
lean_ctor_set(v___x_5318_, 1, v_a_5310_);
lean_ctor_set(v___x_5318_, 0, v_fst_5299_);
v___x_5321_ = v___x_5318_;
goto v_reusejp_5320_;
}
else
{
lean_object* v_reuseFailAlloc_5325_; 
v_reuseFailAlloc_5325_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5325_, 0, v_fst_5299_);
lean_ctor_set(v_reuseFailAlloc_5325_, 1, v_a_5310_);
v___x_5321_ = v_reuseFailAlloc_5325_;
goto v_reusejp_5320_;
}
v_reusejp_5320_:
{
lean_object* v___x_5323_; 
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v___x_5321_);
v___x_5323_ = v___x_5312_;
goto v_reusejp_5322_;
}
else
{
lean_object* v_reuseFailAlloc_5324_; 
v_reuseFailAlloc_5324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5324_, 0, v___x_5321_);
v___x_5323_ = v_reuseFailAlloc_5324_;
goto v_reusejp_5322_;
}
v_reusejp_5322_:
{
return v___x_5323_;
}
}
}
}
else
{
size_t v___x_5329_; size_t v___x_5330_; uint8_t v___x_5331_; 
v___x_5329_ = lean_ptr_addr(v_decl_5296_);
v___x_5330_ = lean_ptr_addr(v_fst_5299_);
v___x_5331_ = lean_usize_dec_eq(v___x_5329_, v___x_5330_);
if (v___x_5331_ == 0)
{
lean_object* v___x_5333_; uint8_t v_isShared_5334_; uint8_t v_isSharedCheck_5341_; 
v_isSharedCheck_5341_ = !lean_is_exclusive(v_code_5262_);
if (v_isSharedCheck_5341_ == 0)
{
lean_object* v_unused_5342_; lean_object* v_unused_5343_; 
v_unused_5342_ = lean_ctor_get(v_code_5262_, 1);
lean_dec(v_unused_5342_);
v_unused_5343_ = lean_ctor_get(v_code_5262_, 0);
lean_dec(v_unused_5343_);
v___x_5333_ = v_code_5262_;
v_isShared_5334_ = v_isSharedCheck_5341_;
goto v_resetjp_5332_;
}
else
{
lean_dec(v_code_5262_);
v___x_5333_ = lean_box(0);
v_isShared_5334_ = v_isSharedCheck_5341_;
goto v_resetjp_5332_;
}
v_resetjp_5332_:
{
lean_object* v___x_5336_; 
if (v_isShared_5334_ == 0)
{
lean_ctor_set(v___x_5333_, 1, v_a_5310_);
lean_ctor_set(v___x_5333_, 0, v_fst_5299_);
v___x_5336_ = v___x_5333_;
goto v_reusejp_5335_;
}
else
{
lean_object* v_reuseFailAlloc_5340_; 
v_reuseFailAlloc_5340_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5340_, 0, v_fst_5299_);
lean_ctor_set(v_reuseFailAlloc_5340_, 1, v_a_5310_);
v___x_5336_ = v_reuseFailAlloc_5340_;
goto v_reusejp_5335_;
}
v_reusejp_5335_:
{
lean_object* v___x_5338_; 
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v___x_5336_);
v___x_5338_ = v___x_5312_;
goto v_reusejp_5337_;
}
else
{
lean_object* v_reuseFailAlloc_5339_; 
v_reuseFailAlloc_5339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5339_, 0, v___x_5336_);
v___x_5338_ = v_reuseFailAlloc_5339_;
goto v_reusejp_5337_;
}
v_reusejp_5337_:
{
return v___x_5338_;
}
}
}
}
else
{
lean_object* v___x_5345_; 
lean_dec(v_a_5310_);
lean_dec_ref(v_fst_5299_);
if (v_isShared_5313_ == 0)
{
lean_ctor_set(v___x_5312_, 0, v_code_5262_);
v___x_5345_ = v___x_5312_;
goto v_reusejp_5344_;
}
else
{
lean_object* v_reuseFailAlloc_5346_; 
v_reuseFailAlloc_5346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5346_, 0, v_code_5262_);
v___x_5345_ = v_reuseFailAlloc_5346_;
goto v_reusejp_5344_;
}
v_reusejp_5344_:
{
return v___x_5345_;
}
}
}
}
}
else
{
lean_dec_ref(v_fst_5299_);
lean_dec_ref_known(v_code_5262_, 2);
return v___x_5309_;
}
}
}
case 3:
{
lean_object* v_fvarId_5400_; lean_object* v_args_5401_; lean_object* v_jpLiveVarMap_5402_; lean_object* v___x_5403_; lean_object* v___x_5404_; lean_object* v___x_5405_; lean_object* v___x_5406_; uint8_t v___x_5407_; lean_object* v___x_5408_; 
v_fvarId_5400_ = lean_ctor_get(v_code_5262_, 0);
v_args_5401_ = lean_ctor_get(v_code_5262_, 1);
lean_inc_ref(v_args_5401_);
v_jpLiveVarMap_5402_ = lean_ctor_get(v_a_5263_, 3);
v___x_5403_ = l_Lean_Compiler_LCNF_instInhabitedLiveVars_default;
lean_inc(v_fvarId_5400_);
lean_inc(v_jpLiveVarMap_5402_);
v___x_5404_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_5403_, v_jpLiveVarMap_5402_, v_fvarId_5400_);
v___x_5405_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5405_);
v___x_5406_ = lean_st_ref_put(v_a_5264_, v___x_5404_);
v___x_5407_ = 1;
v___x_5408_ = l_Lean_Compiler_LCNF_findFunDecl_x3f___redArg(v___x_5407_, v_fvarId_5400_, v_a_5266_);
if (lean_obj_tag(v___x_5408_) == 0)
{
lean_object* v_a_5409_; lean_object* v___y_5411_; 
v_a_5409_ = lean_ctor_get(v___x_5408_, 0);
lean_inc(v_a_5409_);
lean_dec_ref_known(v___x_5408_, 1);
if (lean_obj_tag(v_a_5409_) == 0)
{
lean_object* v___x_5432_; lean_object* v___x_5433_; 
v___x_5432_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc___closed__10);
v___x_5433_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__4(v___x_5432_);
v___y_5411_ = v___x_5433_;
goto v___jp_5410_;
}
else
{
lean_object* v_val_5434_; 
v_val_5434_ = lean_ctor_get(v_a_5409_, 0);
lean_inc(v_val_5434_);
lean_dec_ref_known(v_a_5409_, 1);
v___y_5411_ = v_val_5434_;
goto v___jp_5410_;
}
v___jp_5410_:
{
lean_object* v_params_5412_; lean_object* v___x_5413_; 
v_params_5412_ = lean_ctor_get(v___y_5411_, 2);
lean_inc_ref(v_params_5412_);
lean_dec_ref(v___y_5411_);
v___x_5413_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addIncBefore(v_args_5401_, v_params_5412_, v_code_5262_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5413_) == 0)
{
lean_object* v_a_5414_; lean_object* v___x_5415_; 
v_a_5414_ = lean_ctor_get(v___x_5413_, 0);
lean_inc(v_a_5414_);
lean_dec_ref_known(v___x_5413_, 1);
v___x_5415_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs(v_args_5401_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5415_) == 0)
{
lean_object* v___x_5417_; uint8_t v_isShared_5418_; uint8_t v_isSharedCheck_5422_; 
v_isSharedCheck_5422_ = !lean_is_exclusive(v___x_5415_);
if (v_isSharedCheck_5422_ == 0)
{
lean_object* v_unused_5423_; 
v_unused_5423_ = lean_ctor_get(v___x_5415_, 0);
lean_dec(v_unused_5423_);
v___x_5417_ = v___x_5415_;
v_isShared_5418_ = v_isSharedCheck_5422_;
goto v_resetjp_5416_;
}
else
{
lean_dec(v___x_5415_);
v___x_5417_ = lean_box(0);
v_isShared_5418_ = v_isSharedCheck_5422_;
goto v_resetjp_5416_;
}
v_resetjp_5416_:
{
lean_object* v___x_5420_; 
if (v_isShared_5418_ == 0)
{
lean_ctor_set(v___x_5417_, 0, v_a_5414_);
v___x_5420_ = v___x_5417_;
goto v_reusejp_5419_;
}
else
{
lean_object* v_reuseFailAlloc_5421_; 
v_reuseFailAlloc_5421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5421_, 0, v_a_5414_);
v___x_5420_ = v_reuseFailAlloc_5421_;
goto v_reusejp_5419_;
}
v_reusejp_5419_:
{
return v___x_5420_;
}
}
}
else
{
lean_object* v_a_5424_; lean_object* v___x_5426_; uint8_t v_isShared_5427_; uint8_t v_isSharedCheck_5431_; 
lean_dec(v_a_5414_);
v_a_5424_ = lean_ctor_get(v___x_5415_, 0);
v_isSharedCheck_5431_ = !lean_is_exclusive(v___x_5415_);
if (v_isSharedCheck_5431_ == 0)
{
v___x_5426_ = v___x_5415_;
v_isShared_5427_ = v_isSharedCheck_5431_;
goto v_resetjp_5425_;
}
else
{
lean_inc(v_a_5424_);
lean_dec(v___x_5415_);
v___x_5426_ = lean_box(0);
v_isShared_5427_ = v_isSharedCheck_5431_;
goto v_resetjp_5425_;
}
v_resetjp_5425_:
{
lean_object* v___x_5429_; 
if (v_isShared_5427_ == 0)
{
v___x_5429_ = v___x_5426_;
goto v_reusejp_5428_;
}
else
{
lean_object* v_reuseFailAlloc_5430_; 
v_reuseFailAlloc_5430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5430_, 0, v_a_5424_);
v___x_5429_ = v_reuseFailAlloc_5430_;
goto v_reusejp_5428_;
}
v_reusejp_5428_:
{
return v___x_5429_;
}
}
}
}
else
{
lean_dec_ref(v_args_5401_);
return v___x_5413_;
}
}
}
else
{
lean_object* v_a_5435_; lean_object* v___x_5437_; uint8_t v_isShared_5438_; uint8_t v_isSharedCheck_5442_; 
lean_dec_ref(v_args_5401_);
lean_dec_ref_known(v_code_5262_, 2);
v_a_5435_ = lean_ctor_get(v___x_5408_, 0);
v_isSharedCheck_5442_ = !lean_is_exclusive(v___x_5408_);
if (v_isSharedCheck_5442_ == 0)
{
v___x_5437_ = v___x_5408_;
v_isShared_5438_ = v_isSharedCheck_5442_;
goto v_resetjp_5436_;
}
else
{
lean_inc(v_a_5435_);
lean_dec(v___x_5408_);
v___x_5437_ = lean_box(0);
v_isShared_5438_ = v_isSharedCheck_5442_;
goto v_resetjp_5436_;
}
v_resetjp_5436_:
{
lean_object* v___x_5440_; 
if (v_isShared_5438_ == 0)
{
v___x_5440_ = v___x_5437_;
goto v_reusejp_5439_;
}
else
{
lean_object* v_reuseFailAlloc_5441_; 
v_reuseFailAlloc_5441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5441_, 0, v_a_5435_);
v___x_5440_ = v_reuseFailAlloc_5441_;
goto v_reusejp_5439_;
}
v_reusejp_5439_:
{
return v___x_5440_;
}
}
}
}
case 4:
{
lean_object* v_cases_5443_; lean_object* v_typeName_5444_; lean_object* v_resultType_5445_; lean_object* v_discr_5446_; lean_object* v_alts_5447_; size_t v_sz_5448_; size_t v___x_5449_; lean_object* v___x_5450_; 
v_cases_5443_ = lean_ctor_get(v_code_5262_, 0);
v_typeName_5444_ = lean_ctor_get(v_cases_5443_, 0);
v_resultType_5445_ = lean_ctor_get(v_cases_5443_, 1);
v_discr_5446_ = lean_ctor_get(v_cases_5443_, 2);
v_alts_5447_ = lean_ctor_get(v_cases_5443_, 3);
v_sz_5448_ = lean_array_size(v_alts_5447_);
v___x_5449_ = ((size_t)0ULL);
lean_inc_ref(v_alts_5447_);
lean_inc_ref(v_cases_5443_);
v___x_5450_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(v_cases_5443_, v_sz_5448_, v___x_5449_, v_alts_5447_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5450_) == 0)
{
lean_object* v_a_5451_; lean_object* v___y_5453_; lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v___x_5500_; uint8_t v___x_5501_; 
v_a_5451_ = lean_ctor_get(v___x_5450_, 0);
lean_inc(v_a_5451_);
lean_dec_ref_known(v___x_5450_, 1);
v___x_5498_ = lean_unsigned_to_nat(0u);
v___x_5499_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5500_ = lean_array_get_size(v_a_5451_);
v___x_5501_ = lean_nat_dec_lt(v___x_5498_, v___x_5500_);
if (v___x_5501_ == 0)
{
v___y_5453_ = v___x_5499_;
goto v___jp_5452_;
}
else
{
uint8_t v___x_5502_; 
v___x_5502_ = lean_nat_dec_le(v___x_5500_, v___x_5500_);
if (v___x_5502_ == 0)
{
if (v___x_5501_ == 0)
{
v___y_5453_ = v___x_5499_;
goto v___jp_5452_;
}
else
{
size_t v___x_5503_; lean_object* v___x_5504_; 
v___x_5503_ = lean_usize_of_nat(v___x_5500_);
v___x_5504_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_a_5451_, v___x_5449_, v___x_5503_, v___x_5499_);
v___y_5453_ = v___x_5504_;
goto v___jp_5452_;
}
}
else
{
size_t v___x_5505_; lean_object* v___x_5506_; 
v___x_5505_ = lean_usize_of_nat(v___x_5500_);
v___x_5506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__7(v_a_5451_, v___x_5449_, v___x_5505_, v___x_5499_);
v___y_5453_ = v___x_5506_;
goto v___jp_5452_;
}
}
v___jp_5452_:
{
lean_object* v___x_5454_; lean_object* v___x_5455_; lean_object* v___x_5456_; 
v___x_5454_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5454_);
v___x_5455_ = lean_st_ref_put(v_a_5264_, v___y_5453_);
lean_inc(v_discr_5446_);
v___x_5456_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_discr_5446_, v_a_5263_, v_a_5264_);
if (lean_obj_tag(v___x_5456_) == 0)
{
size_t v_sz_5457_; lean_object* v___x_5458_; 
lean_dec_ref_known(v___x_5456_, 1);
v_sz_5457_ = lean_array_size(v_a_5451_);
lean_inc(v_discr_5446_);
v___x_5458_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__6(v_discr_5446_, v_sz_5457_, v___x_5449_, v_a_5451_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5458_) == 0)
{
lean_object* v_a_5459_; lean_object* v___x_5461_; uint8_t v_isShared_5462_; uint8_t v_isSharedCheck_5481_; 
v_a_5459_ = lean_ctor_get(v___x_5458_, 0);
v_isSharedCheck_5481_ = !lean_is_exclusive(v___x_5458_);
if (v_isSharedCheck_5481_ == 0)
{
v___x_5461_ = v___x_5458_;
v_isShared_5462_ = v_isSharedCheck_5481_;
goto v_resetjp_5460_;
}
else
{
lean_inc(v_a_5459_);
lean_dec(v___x_5458_);
v___x_5461_ = lean_box(0);
v_isShared_5462_ = v_isSharedCheck_5481_;
goto v_resetjp_5460_;
}
v_resetjp_5460_:
{
size_t v___x_5463_; size_t v___x_5464_; uint8_t v___x_5465_; 
v___x_5463_ = lean_ptr_addr(v_alts_5447_);
v___x_5464_ = lean_ptr_addr(v_a_5459_);
v___x_5465_ = lean_usize_dec_eq(v___x_5463_, v___x_5464_);
if (v___x_5465_ == 0)
{
lean_object* v___x_5467_; uint8_t v_isShared_5468_; uint8_t v_isSharedCheck_5476_; 
lean_inc(v_discr_5446_);
lean_inc_ref(v_resultType_5445_);
lean_inc(v_typeName_5444_);
v_isSharedCheck_5476_ = !lean_is_exclusive(v_code_5262_);
if (v_isSharedCheck_5476_ == 0)
{
lean_object* v_unused_5477_; 
v_unused_5477_ = lean_ctor_get(v_code_5262_, 0);
lean_dec(v_unused_5477_);
v___x_5467_ = v_code_5262_;
v_isShared_5468_ = v_isSharedCheck_5476_;
goto v_resetjp_5466_;
}
else
{
lean_dec(v_code_5262_);
v___x_5467_ = lean_box(0);
v_isShared_5468_ = v_isSharedCheck_5476_;
goto v_resetjp_5466_;
}
v_resetjp_5466_:
{
lean_object* v___x_5469_; lean_object* v___x_5471_; 
v___x_5469_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_5469_, 0, v_typeName_5444_);
lean_ctor_set(v___x_5469_, 1, v_resultType_5445_);
lean_ctor_set(v___x_5469_, 2, v_discr_5446_);
lean_ctor_set(v___x_5469_, 3, v_a_5459_);
if (v_isShared_5468_ == 0)
{
lean_ctor_set(v___x_5467_, 0, v___x_5469_);
v___x_5471_ = v___x_5467_;
goto v_reusejp_5470_;
}
else
{
lean_object* v_reuseFailAlloc_5475_; 
v_reuseFailAlloc_5475_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5475_, 0, v___x_5469_);
v___x_5471_ = v_reuseFailAlloc_5475_;
goto v_reusejp_5470_;
}
v_reusejp_5470_:
{
lean_object* v___x_5473_; 
if (v_isShared_5462_ == 0)
{
lean_ctor_set(v___x_5461_, 0, v___x_5471_);
v___x_5473_ = v___x_5461_;
goto v_reusejp_5472_;
}
else
{
lean_object* v_reuseFailAlloc_5474_; 
v_reuseFailAlloc_5474_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5474_, 0, v___x_5471_);
v___x_5473_ = v_reuseFailAlloc_5474_;
goto v_reusejp_5472_;
}
v_reusejp_5472_:
{
return v___x_5473_;
}
}
}
}
else
{
lean_object* v___x_5479_; 
lean_dec(v_a_5459_);
if (v_isShared_5462_ == 0)
{
lean_ctor_set(v___x_5461_, 0, v_code_5262_);
v___x_5479_ = v___x_5461_;
goto v_reusejp_5478_;
}
else
{
lean_object* v_reuseFailAlloc_5480_; 
v_reuseFailAlloc_5480_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5480_, 0, v_code_5262_);
v___x_5479_ = v_reuseFailAlloc_5480_;
goto v_reusejp_5478_;
}
v_reusejp_5478_:
{
return v___x_5479_;
}
}
}
}
else
{
lean_object* v_a_5482_; lean_object* v___x_5484_; uint8_t v_isShared_5485_; uint8_t v_isSharedCheck_5489_; 
lean_dec_ref_known(v_code_5262_, 1);
v_a_5482_ = lean_ctor_get(v___x_5458_, 0);
v_isSharedCheck_5489_ = !lean_is_exclusive(v___x_5458_);
if (v_isSharedCheck_5489_ == 0)
{
v___x_5484_ = v___x_5458_;
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
else
{
lean_inc(v_a_5482_);
lean_dec(v___x_5458_);
v___x_5484_ = lean_box(0);
v_isShared_5485_ = v_isSharedCheck_5489_;
goto v_resetjp_5483_;
}
v_resetjp_5483_:
{
lean_object* v___x_5487_; 
if (v_isShared_5485_ == 0)
{
v___x_5487_ = v___x_5484_;
goto v_reusejp_5486_;
}
else
{
lean_object* v_reuseFailAlloc_5488_; 
v_reuseFailAlloc_5488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5488_, 0, v_a_5482_);
v___x_5487_ = v_reuseFailAlloc_5488_;
goto v_reusejp_5486_;
}
v_reusejp_5486_:
{
return v___x_5487_;
}
}
}
}
else
{
lean_object* v_a_5490_; lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5497_; 
lean_dec(v_a_5451_);
lean_dec_ref_known(v_code_5262_, 1);
v_a_5490_ = lean_ctor_get(v___x_5456_, 0);
v_isSharedCheck_5497_ = !lean_is_exclusive(v___x_5456_);
if (v_isSharedCheck_5497_ == 0)
{
v___x_5492_ = v___x_5456_;
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
else
{
lean_inc(v_a_5490_);
lean_dec(v___x_5456_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5497_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
lean_object* v___x_5495_; 
if (v_isShared_5493_ == 0)
{
v___x_5495_ = v___x_5492_;
goto v_reusejp_5494_;
}
else
{
lean_object* v_reuseFailAlloc_5496_; 
v_reuseFailAlloc_5496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5496_, 0, v_a_5490_);
v___x_5495_ = v_reuseFailAlloc_5496_;
goto v_reusejp_5494_;
}
v_reusejp_5494_:
{
return v___x_5495_;
}
}
}
}
}
else
{
lean_object* v_a_5507_; lean_object* v___x_5509_; uint8_t v_isShared_5510_; uint8_t v_isSharedCheck_5514_; 
lean_dec_ref_known(v_code_5262_, 1);
v_a_5507_ = lean_ctor_get(v___x_5450_, 0);
v_isSharedCheck_5514_ = !lean_is_exclusive(v___x_5450_);
if (v_isSharedCheck_5514_ == 0)
{
v___x_5509_ = v___x_5450_;
v_isShared_5510_ = v_isSharedCheck_5514_;
goto v_resetjp_5508_;
}
else
{
lean_inc(v_a_5507_);
lean_dec(v___x_5450_);
v___x_5509_ = lean_box(0);
v_isShared_5510_ = v_isSharedCheck_5514_;
goto v_resetjp_5508_;
}
v_resetjp_5508_:
{
lean_object* v___x_5512_; 
if (v_isShared_5510_ == 0)
{
v___x_5512_ = v___x_5509_;
goto v_reusejp_5511_;
}
else
{
lean_object* v_reuseFailAlloc_5513_; 
v_reuseFailAlloc_5513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5513_, 0, v_a_5507_);
v___x_5512_ = v_reuseFailAlloc_5513_;
goto v_reusejp_5511_;
}
v_reusejp_5511_:
{
return v___x_5512_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_5515_; lean_object* v_borrowedValues_5516_; lean_object* v_derivedValMap_5517_; lean_object* v_varMap_5518_; lean_object* v___f_5519_; lean_object* v___x_5520_; lean_object* v___x_5521_; lean_object* v___x_5522_; lean_object* v___x_5523_; lean_object* v___x_5524_; lean_object* v___x_5525_; lean_object* v___x_5526_; 
v_fvarId_5515_ = lean_ctor_get(v_code_5262_, 0);
v_borrowedValues_5516_ = lean_ctor_get(v_a_5263_, 0);
v_derivedValMap_5517_ = lean_ctor_get(v_a_5263_, 1);
v_varMap_5518_ = lean_ctor_get(v_a_5263_, 2);
lean_inc_ref(v_derivedValMap_5517_);
v___f_5519_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0), 3, 1);
lean_closure_set(v___f_5519_, 0, v_derivedValMap_5517_);
v___x_5520_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5521_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_5519_, v___x_5520_, v_borrowedValues_5516_);
v___x_5522_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5522_);
v___x_5523_ = lean_st_ref_put(v_a_5264_, v___x_5521_);
v___x_5524_ = ((lean_object*)(l_Lean_Compiler_LCNF_instInhabitedVarInfo_default));
lean_inc_n(v_fvarId_5515_, 2);
lean_inc(v_varMap_5518_);
v___x_5525_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_5524_, v_varMap_5518_, v_fvarId_5515_);
v___x_5526_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5515_, v_a_5263_, v_a_5264_);
if (lean_obj_tag(v___x_5526_) == 0)
{
lean_object* v___x_5528_; uint8_t v_isShared_5529_; uint8_t v_isSharedCheck_5550_; 
v_isSharedCheck_5550_ = !lean_is_exclusive(v___x_5526_);
if (v_isSharedCheck_5550_ == 0)
{
lean_object* v_unused_5551_; 
v_unused_5551_ = lean_ctor_get(v___x_5526_, 0);
lean_dec(v_unused_5551_);
v___x_5528_ = v___x_5526_;
v_isShared_5529_ = v_isSharedCheck_5550_;
goto v_resetjp_5527_;
}
else
{
lean_dec(v___x_5526_);
v___x_5528_ = lean_box(0);
v_isShared_5529_ = v_isSharedCheck_5550_;
goto v_resetjp_5527_;
}
v_resetjp_5527_:
{
lean_object* v___x_5530_; uint8_t v_isPossibleRef_5531_; 
v___x_5530_ = lean_st_ref_get(v_a_5264_);
v_isPossibleRef_5531_ = lean_ctor_get_uint8(v___x_5525_, sizeof(void*)*2);
if (v_isPossibleRef_5531_ == 0)
{
lean_object* v___x_5533_; 
lean_dec(v___x_5530_);
lean_dec(v___x_5525_);
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 0, v_code_5262_);
v___x_5533_ = v___x_5528_;
goto v_reusejp_5532_;
}
else
{
lean_object* v_reuseFailAlloc_5534_; 
v_reuseFailAlloc_5534_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5534_, 0, v_code_5262_);
v___x_5533_ = v_reuseFailAlloc_5534_;
goto v_reusejp_5532_;
}
v_reusejp_5532_:
{
return v___x_5533_;
}
}
else
{
uint8_t v_isDefiniteRef_5535_; uint8_t v_persistent_5536_; lean_object* v_borrows_5537_; uint8_t v___x_5538_; 
v_isDefiniteRef_5535_ = lean_ctor_get_uint8(v___x_5525_, sizeof(void*)*2 + 1);
v_persistent_5536_ = lean_ctor_get_uint8(v___x_5525_, sizeof(void*)*2 + 2);
lean_dec(v___x_5525_);
v_borrows_5537_ = lean_ctor_get(v___x_5530_, 1);
lean_inc_ref(v_borrows_5537_);
lean_dec(v___x_5530_);
v___x_5538_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useArgs_spec__1_spec__1___redArg(v_borrows_5537_, v_fvarId_5515_);
lean_dec_ref(v_borrows_5537_);
if (v___x_5538_ == 0)
{
lean_object* v___x_5540_; 
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 0, v_code_5262_);
v___x_5540_ = v___x_5528_;
goto v_reusejp_5539_;
}
else
{
lean_object* v_reuseFailAlloc_5541_; 
v_reuseFailAlloc_5541_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5541_, 0, v_code_5262_);
v___x_5540_ = v_reuseFailAlloc_5541_;
goto v_reusejp_5539_;
}
v_reusejp_5539_:
{
return v___x_5540_;
}
}
else
{
lean_object* v___x_5542_; uint8_t v___y_5544_; 
lean_inc(v_fvarId_5515_);
v___x_5542_ = lean_unsigned_to_nat(1u);
if (v_isDefiniteRef_5535_ == 0)
{
v___y_5544_ = v___x_5538_;
goto v___jp_5543_;
}
else
{
uint8_t v___x_5549_; 
v___x_5549_ = 0;
v___y_5544_ = v___x_5549_;
goto v___jp_5543_;
}
v___jp_5543_:
{
lean_object* v___x_5545_; lean_object* v___x_5547_; 
v___x_5545_ = lean_alloc_ctor(11, 3, 2);
lean_ctor_set(v___x_5545_, 0, v_fvarId_5515_);
lean_ctor_set(v___x_5545_, 1, v___x_5542_);
lean_ctor_set(v___x_5545_, 2, v_code_5262_);
lean_ctor_set_uint8(v___x_5545_, sizeof(void*)*3, v___y_5544_);
lean_ctor_set_uint8(v___x_5545_, sizeof(void*)*3 + 1, v_persistent_5536_);
if (v_isShared_5529_ == 0)
{
lean_ctor_set(v___x_5528_, 0, v___x_5545_);
v___x_5547_ = v___x_5528_;
goto v_reusejp_5546_;
}
else
{
lean_object* v_reuseFailAlloc_5548_; 
v_reuseFailAlloc_5548_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5548_, 0, v___x_5545_);
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
}
}
else
{
lean_object* v_a_5552_; lean_object* v___x_5554_; uint8_t v_isShared_5555_; uint8_t v_isSharedCheck_5559_; 
lean_dec(v___x_5525_);
lean_dec_ref_known(v_code_5262_, 1);
v_a_5552_ = lean_ctor_get(v___x_5526_, 0);
v_isSharedCheck_5559_ = !lean_is_exclusive(v___x_5526_);
if (v_isSharedCheck_5559_ == 0)
{
v___x_5554_ = v___x_5526_;
v_isShared_5555_ = v_isSharedCheck_5559_;
goto v_resetjp_5553_;
}
else
{
lean_inc(v_a_5552_);
lean_dec(v___x_5526_);
v___x_5554_ = lean_box(0);
v_isShared_5555_ = v_isSharedCheck_5559_;
goto v_resetjp_5553_;
}
v_resetjp_5553_:
{
lean_object* v___x_5557_; 
if (v_isShared_5555_ == 0)
{
v___x_5557_ = v___x_5554_;
goto v_reusejp_5556_;
}
else
{
lean_object* v_reuseFailAlloc_5558_; 
v_reuseFailAlloc_5558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5558_, 0, v_a_5552_);
v___x_5557_ = v_reuseFailAlloc_5558_;
goto v_reusejp_5556_;
}
v_reusejp_5556_:
{
return v___x_5557_;
}
}
}
}
case 6:
{
lean_object* v_borrowedValues_5560_; lean_object* v_derivedValMap_5561_; lean_object* v___f_5562_; lean_object* v___x_5563_; lean_object* v___x_5564_; lean_object* v___x_5565_; lean_object* v___x_5566_; lean_object* v___x_5567_; 
v_borrowedValues_5560_ = lean_ctor_get(v_a_5263_, 0);
v_derivedValMap_5561_ = lean_ctor_get(v_a_5263_, 1);
lean_inc_ref(v_derivedValMap_5561_);
v___f_5562_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___lam__0), 3, 1);
lean_closure_set(v___f_5562_, 0, v_derivedValMap_5561_);
v___x_5563_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5564_ = l_Lean_FVarIdHashSet_fold___redArg(v___f_5562_, v___x_5563_, v_borrowedValues_5560_);
v___x_5565_ = lean_st_ref_take(v_a_5264_);
lean_dec(v___x_5565_);
v___x_5566_ = lean_st_ref_put(v_a_5264_, v___x_5564_);
v___x_5567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5567_, 0, v_code_5262_);
return v___x_5567_;
}
case 8:
{
lean_object* v_fvarId_5568_; lean_object* v_i_5569_; lean_object* v_y_5570_; lean_object* v_k_5571_; lean_object* v___x_5572_; 
v_fvarId_5568_ = lean_ctor_get(v_code_5262_, 0);
v_i_5569_ = lean_ctor_get(v_code_5262_, 1);
v_y_5570_ = lean_ctor_get(v_code_5262_, 2);
v_k_5571_ = lean_ctor_get(v_code_5262_, 3);
lean_inc_ref(v_k_5571_);
v___x_5572_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5571_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5572_) == 0)
{
lean_object* v_a_5573_; lean_object* v___x_5574_; 
v_a_5573_ = lean_ctor_get(v___x_5572_, 0);
lean_inc(v_a_5573_);
lean_dec_ref_known(v___x_5572_, 1);
lean_inc(v_fvarId_5568_);
v___x_5574_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5568_, v_a_5263_, v_a_5264_);
if (lean_obj_tag(v___x_5574_) == 0)
{
lean_object* v___x_5576_; uint8_t v_isShared_5577_; uint8_t v_isSharedCheck_5598_; 
v_isSharedCheck_5598_ = !lean_is_exclusive(v___x_5574_);
if (v_isSharedCheck_5598_ == 0)
{
lean_object* v_unused_5599_; 
v_unused_5599_ = lean_ctor_get(v___x_5574_, 0);
lean_dec(v_unused_5599_);
v___x_5576_ = v___x_5574_;
v_isShared_5577_ = v_isSharedCheck_5598_;
goto v_resetjp_5575_;
}
else
{
lean_dec(v___x_5574_);
v___x_5576_ = lean_box(0);
v_isShared_5577_ = v_isSharedCheck_5598_;
goto v_resetjp_5575_;
}
v_resetjp_5575_:
{
size_t v___x_5578_; size_t v___x_5579_; uint8_t v___x_5580_; 
v___x_5578_ = lean_ptr_addr(v_k_5571_);
v___x_5579_ = lean_ptr_addr(v_a_5573_);
v___x_5580_ = lean_usize_dec_eq(v___x_5578_, v___x_5579_);
if (v___x_5580_ == 0)
{
lean_object* v___x_5582_; uint8_t v_isShared_5583_; uint8_t v_isSharedCheck_5590_; 
lean_inc(v_y_5570_);
lean_inc(v_i_5569_);
lean_inc(v_fvarId_5568_);
v_isSharedCheck_5590_ = !lean_is_exclusive(v_code_5262_);
if (v_isSharedCheck_5590_ == 0)
{
lean_object* v_unused_5591_; lean_object* v_unused_5592_; lean_object* v_unused_5593_; lean_object* v_unused_5594_; 
v_unused_5591_ = lean_ctor_get(v_code_5262_, 3);
lean_dec(v_unused_5591_);
v_unused_5592_ = lean_ctor_get(v_code_5262_, 2);
lean_dec(v_unused_5592_);
v_unused_5593_ = lean_ctor_get(v_code_5262_, 1);
lean_dec(v_unused_5593_);
v_unused_5594_ = lean_ctor_get(v_code_5262_, 0);
lean_dec(v_unused_5594_);
v___x_5582_ = v_code_5262_;
v_isShared_5583_ = v_isSharedCheck_5590_;
goto v_resetjp_5581_;
}
else
{
lean_dec(v_code_5262_);
v___x_5582_ = lean_box(0);
v_isShared_5583_ = v_isSharedCheck_5590_;
goto v_resetjp_5581_;
}
v_resetjp_5581_:
{
lean_object* v___x_5585_; 
if (v_isShared_5583_ == 0)
{
lean_ctor_set(v___x_5582_, 3, v_a_5573_);
v___x_5585_ = v___x_5582_;
goto v_reusejp_5584_;
}
else
{
lean_object* v_reuseFailAlloc_5589_; 
v_reuseFailAlloc_5589_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v_reuseFailAlloc_5589_, 0, v_fvarId_5568_);
lean_ctor_set(v_reuseFailAlloc_5589_, 1, v_i_5569_);
lean_ctor_set(v_reuseFailAlloc_5589_, 2, v_y_5570_);
lean_ctor_set(v_reuseFailAlloc_5589_, 3, v_a_5573_);
v___x_5585_ = v_reuseFailAlloc_5589_;
goto v_reusejp_5584_;
}
v_reusejp_5584_:
{
lean_object* v___x_5587_; 
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 0, v___x_5585_);
v___x_5587_ = v___x_5576_;
goto v_reusejp_5586_;
}
else
{
lean_object* v_reuseFailAlloc_5588_; 
v_reuseFailAlloc_5588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5588_, 0, v___x_5585_);
v___x_5587_ = v_reuseFailAlloc_5588_;
goto v_reusejp_5586_;
}
v_reusejp_5586_:
{
return v___x_5587_;
}
}
}
}
else
{
lean_object* v___x_5596_; 
lean_dec(v_a_5573_);
if (v_isShared_5577_ == 0)
{
lean_ctor_set(v___x_5576_, 0, v_code_5262_);
v___x_5596_ = v___x_5576_;
goto v_reusejp_5595_;
}
else
{
lean_object* v_reuseFailAlloc_5597_; 
v_reuseFailAlloc_5597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5597_, 0, v_code_5262_);
v___x_5596_ = v_reuseFailAlloc_5597_;
goto v_reusejp_5595_;
}
v_reusejp_5595_:
{
return v___x_5596_;
}
}
}
}
else
{
lean_object* v_a_5600_; lean_object* v___x_5602_; uint8_t v_isShared_5603_; uint8_t v_isSharedCheck_5607_; 
lean_dec(v_a_5573_);
lean_dec_ref_known(v_code_5262_, 4);
v_a_5600_ = lean_ctor_get(v___x_5574_, 0);
v_isSharedCheck_5607_ = !lean_is_exclusive(v___x_5574_);
if (v_isSharedCheck_5607_ == 0)
{
v___x_5602_ = v___x_5574_;
v_isShared_5603_ = v_isSharedCheck_5607_;
goto v_resetjp_5601_;
}
else
{
lean_inc(v_a_5600_);
lean_dec(v___x_5574_);
v___x_5602_ = lean_box(0);
v_isShared_5603_ = v_isSharedCheck_5607_;
goto v_resetjp_5601_;
}
v_resetjp_5601_:
{
lean_object* v___x_5605_; 
if (v_isShared_5603_ == 0)
{
v___x_5605_ = v___x_5602_;
goto v_reusejp_5604_;
}
else
{
lean_object* v_reuseFailAlloc_5606_; 
v_reuseFailAlloc_5606_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5606_, 0, v_a_5600_);
v___x_5605_ = v_reuseFailAlloc_5606_;
goto v_reusejp_5604_;
}
v_reusejp_5604_:
{
return v___x_5605_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_5262_, 4);
return v___x_5572_;
}
}
case 9:
{
lean_object* v_fvarId_5608_; lean_object* v_i_5609_; lean_object* v_offset_5610_; lean_object* v_y_5611_; lean_object* v_ty_5612_; lean_object* v_k_5613_; lean_object* v___x_5614_; 
v_fvarId_5608_ = lean_ctor_get(v_code_5262_, 0);
v_i_5609_ = lean_ctor_get(v_code_5262_, 1);
v_offset_5610_ = lean_ctor_get(v_code_5262_, 2);
v_y_5611_ = lean_ctor_get(v_code_5262_, 3);
v_ty_5612_ = lean_ctor_get(v_code_5262_, 4);
v_k_5613_ = lean_ctor_get(v_code_5262_, 5);
lean_inc_ref(v_k_5613_);
v___x_5614_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_k_5613_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
if (lean_obj_tag(v___x_5614_) == 0)
{
lean_object* v_a_5615_; lean_object* v___x_5616_; 
v_a_5615_ = lean_ctor_get(v___x_5614_, 0);
lean_inc(v_a_5615_);
lean_dec_ref_known(v___x_5614_, 1);
lean_inc(v_fvarId_5608_);
v___x_5616_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useVar___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_useLetValue_spec__0___redArg(v_fvarId_5608_, v_a_5263_, v_a_5264_);
if (lean_obj_tag(v___x_5616_) == 0)
{
lean_object* v___x_5618_; uint8_t v_isShared_5619_; uint8_t v_isSharedCheck_5642_; 
v_isSharedCheck_5642_ = !lean_is_exclusive(v___x_5616_);
if (v_isSharedCheck_5642_ == 0)
{
lean_object* v_unused_5643_; 
v_unused_5643_ = lean_ctor_get(v___x_5616_, 0);
lean_dec(v_unused_5643_);
v___x_5618_ = v___x_5616_;
v_isShared_5619_ = v_isSharedCheck_5642_;
goto v_resetjp_5617_;
}
else
{
lean_dec(v___x_5616_);
v___x_5618_ = lean_box(0);
v_isShared_5619_ = v_isSharedCheck_5642_;
goto v_resetjp_5617_;
}
v_resetjp_5617_:
{
size_t v___x_5620_; size_t v___x_5621_; uint8_t v___x_5622_; 
v___x_5620_ = lean_ptr_addr(v_k_5613_);
v___x_5621_ = lean_ptr_addr(v_a_5615_);
v___x_5622_ = lean_usize_dec_eq(v___x_5620_, v___x_5621_);
if (v___x_5622_ == 0)
{
lean_object* v___x_5624_; uint8_t v_isShared_5625_; uint8_t v_isSharedCheck_5632_; 
lean_inc_ref(v_ty_5612_);
lean_inc(v_y_5611_);
lean_inc(v_offset_5610_);
lean_inc(v_i_5609_);
lean_inc(v_fvarId_5608_);
v_isSharedCheck_5632_ = !lean_is_exclusive(v_code_5262_);
if (v_isSharedCheck_5632_ == 0)
{
lean_object* v_unused_5633_; lean_object* v_unused_5634_; lean_object* v_unused_5635_; lean_object* v_unused_5636_; lean_object* v_unused_5637_; lean_object* v_unused_5638_; 
v_unused_5633_ = lean_ctor_get(v_code_5262_, 5);
lean_dec(v_unused_5633_);
v_unused_5634_ = lean_ctor_get(v_code_5262_, 4);
lean_dec(v_unused_5634_);
v_unused_5635_ = lean_ctor_get(v_code_5262_, 3);
lean_dec(v_unused_5635_);
v_unused_5636_ = lean_ctor_get(v_code_5262_, 2);
lean_dec(v_unused_5636_);
v_unused_5637_ = lean_ctor_get(v_code_5262_, 1);
lean_dec(v_unused_5637_);
v_unused_5638_ = lean_ctor_get(v_code_5262_, 0);
lean_dec(v_unused_5638_);
v___x_5624_ = v_code_5262_;
v_isShared_5625_ = v_isSharedCheck_5632_;
goto v_resetjp_5623_;
}
else
{
lean_dec(v_code_5262_);
v___x_5624_ = lean_box(0);
v_isShared_5625_ = v_isSharedCheck_5632_;
goto v_resetjp_5623_;
}
v_resetjp_5623_:
{
lean_object* v___x_5627_; 
if (v_isShared_5625_ == 0)
{
lean_ctor_set(v___x_5624_, 5, v_a_5615_);
v___x_5627_ = v___x_5624_;
goto v_reusejp_5626_;
}
else
{
lean_object* v_reuseFailAlloc_5631_; 
v_reuseFailAlloc_5631_ = lean_alloc_ctor(9, 6, 0);
lean_ctor_set(v_reuseFailAlloc_5631_, 0, v_fvarId_5608_);
lean_ctor_set(v_reuseFailAlloc_5631_, 1, v_i_5609_);
lean_ctor_set(v_reuseFailAlloc_5631_, 2, v_offset_5610_);
lean_ctor_set(v_reuseFailAlloc_5631_, 3, v_y_5611_);
lean_ctor_set(v_reuseFailAlloc_5631_, 4, v_ty_5612_);
lean_ctor_set(v_reuseFailAlloc_5631_, 5, v_a_5615_);
v___x_5627_ = v_reuseFailAlloc_5631_;
goto v_reusejp_5626_;
}
v_reusejp_5626_:
{
lean_object* v___x_5629_; 
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 0, v___x_5627_);
v___x_5629_ = v___x_5618_;
goto v_reusejp_5628_;
}
else
{
lean_object* v_reuseFailAlloc_5630_; 
v_reuseFailAlloc_5630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5630_, 0, v___x_5627_);
v___x_5629_ = v_reuseFailAlloc_5630_;
goto v_reusejp_5628_;
}
v_reusejp_5628_:
{
return v___x_5629_;
}
}
}
}
else
{
lean_object* v___x_5640_; 
lean_dec(v_a_5615_);
if (v_isShared_5619_ == 0)
{
lean_ctor_set(v___x_5618_, 0, v_code_5262_);
v___x_5640_ = v___x_5618_;
goto v_reusejp_5639_;
}
else
{
lean_object* v_reuseFailAlloc_5641_; 
v_reuseFailAlloc_5641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5641_, 0, v_code_5262_);
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
lean_object* v_a_5644_; lean_object* v___x_5646_; uint8_t v_isShared_5647_; uint8_t v_isSharedCheck_5651_; 
lean_dec(v_a_5615_);
lean_dec_ref_known(v_code_5262_, 6);
v_a_5644_ = lean_ctor_get(v___x_5616_, 0);
v_isSharedCheck_5651_ = !lean_is_exclusive(v___x_5616_);
if (v_isSharedCheck_5651_ == 0)
{
v___x_5646_ = v___x_5616_;
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
else
{
lean_inc(v_a_5644_);
lean_dec(v___x_5616_);
v___x_5646_ = lean_box(0);
v_isShared_5647_ = v_isSharedCheck_5651_;
goto v_resetjp_5645_;
}
v_resetjp_5645_:
{
lean_object* v___x_5649_; 
if (v_isShared_5647_ == 0)
{
v___x_5649_ = v___x_5646_;
goto v_reusejp_5648_;
}
else
{
lean_object* v_reuseFailAlloc_5650_; 
v_reuseFailAlloc_5650_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5650_, 0, v_a_5644_);
v___x_5649_ = v_reuseFailAlloc_5650_;
goto v_reusejp_5648_;
}
v_reusejp_5648_:
{
return v___x_5649_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_5262_, 6);
return v___x_5614_;
}
}
default: 
{
lean_object* v___x_5652_; lean_object* v___x_5653_; 
lean_dec_ref(v_code_5262_);
v___x_5652_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1_once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___closed__1);
v___x_5653_ = l_panic___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_LetDecl_explicitRc_spec__2(v___x_5652_, v_a_5263_, v_a_5264_, v_a_5265_, v_a_5266_, v_a_5267_, v_a_5268_);
return v___x_5653_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(lean_object* v_cases_5654_, size_t v_sz_5655_, size_t v_i_5656_, lean_object* v_bs_5657_, lean_object* v___y_5658_, lean_object* v___y_5659_, lean_object* v___y_5660_, lean_object* v___y_5661_, lean_object* v___y_5662_, lean_object* v___y_5663_){
_start:
{
uint8_t v___x_5665_; 
v___x_5665_ = lean_usize_dec_lt(v_i_5656_, v_sz_5655_);
if (v___x_5665_ == 0)
{
lean_object* v___x_5666_; 
lean_dec_ref(v_cases_5654_);
v___x_5666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5666_, 0, v_bs_5657_);
return v___x_5666_;
}
else
{
lean_object* v_v_5667_; lean_object* v___x_5668_; lean_object* v_bs_x27_5669_; lean_object* v___x_5670_; lean_object* v_a_5672_; lean_object* v___x_5681_; lean_object* v___x_5682_; lean_object* v___x_5683_; 
v_v_5667_ = lean_array_uget(v_bs_5657_, v_i_5656_);
v___x_5668_ = lean_unsigned_to_nat(0u);
v_bs_x27_5669_ = lean_array_uset(v_bs_5657_, v_i_5656_, v___x_5668_);
v___x_5670_ = lean_st_ref_get(v___y_5659_);
v___x_5681_ = lean_st_ref_take(v___y_5659_);
lean_dec(v___x_5681_);
v___x_5682_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5683_ = lean_st_ref_put(v___y_5659_, v___x_5682_);
if (lean_obj_tag(v_v_5667_) == 1)
{
lean_object* v_info_5684_; lean_object* v_code_5685_; lean_object* v_discr_5686_; lean_object* v_borrowedValues_5687_; lean_object* v_derivedValMap_5688_; lean_object* v_varMap_5689_; lean_object* v_jpLiveVarMap_5690_; lean_object* v_idx_5691_; lean_object* v___y_5693_; lean_object* v___x_5708_; 
v_info_5684_ = lean_ctor_get(v_v_5667_, 0);
v_code_5685_ = lean_ctor_get(v_v_5667_, 1);
v_discr_5686_ = lean_ctor_get(v_cases_5654_, 2);
v_borrowedValues_5687_ = lean_ctor_get(v___y_5658_, 0);
v_derivedValMap_5688_ = lean_ctor_get(v___y_5658_, 1);
v_varMap_5689_ = lean_ctor_get(v___y_5658_, 2);
v_jpLiveVarMap_5690_ = lean_ctor_get(v___y_5658_, 3);
v_idx_5691_ = lean_ctor_get(v___y_5658_, 4);
v___x_5708_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v_varMap_5689_, v_discr_5686_);
if (lean_obj_tag(v___x_5708_) == 0)
{
lean_inc(v_varMap_5689_);
v___y_5693_ = v_varMap_5689_;
goto v___jp_5692_;
}
else
{
lean_object* v_val_5709_; lean_object* v___x_5711_; uint8_t v_isShared_5712_; uint8_t v_isSharedCheck_5730_; 
v_val_5709_ = lean_ctor_get(v___x_5708_, 0);
v_isSharedCheck_5730_ = !lean_is_exclusive(v___x_5708_);
if (v_isSharedCheck_5730_ == 0)
{
v___x_5711_ = v___x_5708_;
v_isShared_5712_ = v_isSharedCheck_5730_;
goto v_resetjp_5710_;
}
else
{
lean_inc(v_val_5709_);
lean_dec(v___x_5708_);
v___x_5711_ = lean_box(0);
v_isShared_5712_ = v_isSharedCheck_5730_;
goto v_resetjp_5710_;
}
v_resetjp_5710_:
{
uint8_t v_persistent_5713_; lean_object* v___x_5715_; uint8_t v_isShared_5716_; uint8_t v_isSharedCheck_5727_; 
v_persistent_5713_ = lean_ctor_get_uint8(v_val_5709_, sizeof(void*)*2 + 2);
v_isSharedCheck_5727_ = !lean_is_exclusive(v_val_5709_);
if (v_isSharedCheck_5727_ == 0)
{
lean_object* v_unused_5728_; lean_object* v_unused_5729_; 
v_unused_5728_ = lean_ctor_get(v_val_5709_, 1);
lean_dec(v_unused_5728_);
v_unused_5729_ = lean_ctor_get(v_val_5709_, 0);
lean_dec(v_unused_5729_);
v___x_5715_ = v_val_5709_;
v_isShared_5716_ = v_isSharedCheck_5727_;
goto v_resetjp_5714_;
}
else
{
lean_dec(v_val_5709_);
v___x_5715_ = lean_box(0);
v_isShared_5716_ = v_isSharedCheck_5727_;
goto v_resetjp_5714_;
}
v_resetjp_5714_:
{
uint8_t v___x_5717_; lean_object* v___x_5718_; lean_object* v___x_5719_; lean_object* v___x_5721_; 
v___x_5717_ = l_Lean_Compiler_LCNF_CtorInfo_isRef(v_info_5684_);
v___x_5718_ = lean_unsigned_to_nat(1u);
v___x_5719_ = lean_nat_add(v_idx_5691_, v___x_5718_);
lean_inc_ref(v_info_5684_);
if (v_isShared_5712_ == 0)
{
lean_ctor_set(v___x_5711_, 0, v_info_5684_);
v___x_5721_ = v___x_5711_;
goto v_reusejp_5720_;
}
else
{
lean_object* v_reuseFailAlloc_5726_; 
v_reuseFailAlloc_5726_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5726_, 0, v_info_5684_);
v___x_5721_ = v_reuseFailAlloc_5726_;
goto v_reusejp_5720_;
}
v_reusejp_5720_:
{
lean_object* v___x_5723_; 
if (v_isShared_5716_ == 0)
{
lean_ctor_set(v___x_5715_, 1, v___x_5721_);
lean_ctor_set(v___x_5715_, 0, v___x_5719_);
v___x_5723_ = v___x_5715_;
goto v_reusejp_5722_;
}
else
{
lean_object* v_reuseFailAlloc_5725_; 
v_reuseFailAlloc_5725_ = lean_alloc_ctor(0, 2, 3);
lean_ctor_set(v_reuseFailAlloc_5725_, 0, v___x_5719_);
lean_ctor_set(v_reuseFailAlloc_5725_, 1, v___x_5721_);
lean_ctor_set_uint8(v_reuseFailAlloc_5725_, sizeof(void*)*2 + 2, v_persistent_5713_);
v___x_5723_ = v_reuseFailAlloc_5725_;
goto v_reusejp_5722_;
}
v_reusejp_5722_:
{
lean_object* v___x_5724_; 
lean_ctor_set_uint8(v___x_5723_, sizeof(void*)*2, v___x_5717_);
lean_ctor_set_uint8(v___x_5723_, sizeof(void*)*2 + 1, v___x_5717_);
lean_inc(v_varMap_5689_);
lean_inc(v_discr_5686_);
v___x_5724_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_discr_5686_, v___x_5723_, v_varMap_5689_);
v___y_5693_ = v___x_5724_;
goto v___jp_5692_;
}
}
}
}
}
v___jp_5692_:
{
lean_object* v___x_5694_; lean_object* v___x_5695_; lean_object* v___x_5696_; lean_object* v___x_5697_; 
v___x_5694_ = lean_unsigned_to_nat(1u);
v___x_5695_ = lean_nat_add(v_idx_5691_, v___x_5694_);
lean_inc(v_jpLiveVarMap_5690_);
lean_inc_ref(v_derivedValMap_5688_);
lean_inc_ref(v_borrowedValues_5687_);
v___x_5696_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5696_, 0, v_borrowedValues_5687_);
lean_ctor_set(v___x_5696_, 1, v_derivedValMap_5688_);
lean_ctor_set(v___x_5696_, 2, v___y_5693_);
lean_ctor_set(v___x_5696_, 3, v_jpLiveVarMap_5690_);
lean_ctor_set(v___x_5696_, 4, v___x_5695_);
lean_inc_ref(v_code_5685_);
v___x_5697_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5685_, v___x_5696_, v___y_5659_, v___y_5660_, v___y_5661_, v___y_5662_, v___y_5663_);
lean_dec_ref_known(v___x_5696_, 5);
if (lean_obj_tag(v___x_5697_) == 0)
{
lean_object* v_a_5698_; lean_object* v___x_5699_; 
v_a_5698_ = lean_ctor_get(v___x_5697_, 0);
lean_inc(v_a_5698_);
lean_dec_ref_known(v___x_5697_, 1);
v___x_5699_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_5667_, v_a_5698_);
v_a_5672_ = v___x_5699_;
goto v___jp_5671_;
}
else
{
lean_object* v_a_5700_; lean_object* v___x_5702_; uint8_t v_isShared_5703_; uint8_t v_isSharedCheck_5707_; 
lean_dec_ref_known(v_v_5667_, 2);
lean_dec(v___x_5670_);
lean_dec_ref(v_bs_x27_5669_);
lean_dec_ref(v_cases_5654_);
v_a_5700_ = lean_ctor_get(v___x_5697_, 0);
v_isSharedCheck_5707_ = !lean_is_exclusive(v___x_5697_);
if (v_isSharedCheck_5707_ == 0)
{
v___x_5702_ = v___x_5697_;
v_isShared_5703_ = v_isSharedCheck_5707_;
goto v_resetjp_5701_;
}
else
{
lean_inc(v_a_5700_);
lean_dec(v___x_5697_);
v___x_5702_ = lean_box(0);
v_isShared_5703_ = v_isSharedCheck_5707_;
goto v_resetjp_5701_;
}
v_resetjp_5701_:
{
lean_object* v___x_5705_; 
if (v_isShared_5703_ == 0)
{
v___x_5705_ = v___x_5702_;
goto v_reusejp_5704_;
}
else
{
lean_object* v_reuseFailAlloc_5706_; 
v_reuseFailAlloc_5706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5706_, 0, v_a_5700_);
v___x_5705_ = v_reuseFailAlloc_5706_;
goto v_reusejp_5704_;
}
v_reusejp_5704_:
{
return v___x_5705_;
}
}
}
}
}
else
{
lean_object* v_code_5731_; lean_object* v___x_5732_; 
v_code_5731_ = lean_ctor_get(v_v_5667_, 0);
lean_inc_ref(v_code_5731_);
v___x_5732_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5731_, v___y_5658_, v___y_5659_, v___y_5660_, v___y_5661_, v___y_5662_, v___y_5663_);
if (lean_obj_tag(v___x_5732_) == 0)
{
lean_object* v_a_5733_; lean_object* v___x_5734_; 
v_a_5733_ = lean_ctor_get(v___x_5732_, 0);
lean_inc(v_a_5733_);
lean_dec_ref_known(v___x_5732_, 1);
v___x_5734_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_v_5667_, v_a_5733_);
v_a_5672_ = v___x_5734_;
goto v___jp_5671_;
}
else
{
lean_object* v_a_5735_; lean_object* v___x_5737_; uint8_t v_isShared_5738_; uint8_t v_isSharedCheck_5742_; 
lean_dec_ref_known(v_v_5667_, 1);
lean_dec(v___x_5670_);
lean_dec_ref(v_bs_x27_5669_);
lean_dec_ref(v_cases_5654_);
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
v___jp_5671_:
{
lean_object* v___x_5673_; lean_object* v___x_5674_; lean_object* v___x_5675_; lean_object* v___x_5676_; size_t v___x_5677_; size_t v___x_5678_; lean_object* v___x_5679_; 
v___x_5673_ = lean_st_ref_get(v___y_5659_);
v___x_5674_ = lean_st_ref_take(v___y_5659_);
lean_dec(v___x_5674_);
v___x_5675_ = lean_st_ref_put(v___y_5659_, v___x_5670_);
v___x_5676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5676_, 0, v_a_5672_);
lean_ctor_set(v___x_5676_, 1, v___x_5673_);
v___x_5677_ = ((size_t)1ULL);
v___x_5678_ = lean_usize_add(v_i_5656_, v___x_5677_);
v___x_5679_ = lean_array_uset(v_bs_x27_5669_, v_i_5656_, v___x_5676_);
v_i_5656_ = v___x_5678_;
v_bs_5657_ = v___x_5679_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5___boxed(lean_object* v_cases_5743_, lean_object* v_sz_5744_, lean_object* v_i_5745_, lean_object* v_bs_5746_, lean_object* v___y_5747_, lean_object* v___y_5748_, lean_object* v___y_5749_, lean_object* v___y_5750_, lean_object* v___y_5751_, lean_object* v___y_5752_, lean_object* v___y_5753_){
_start:
{
size_t v_sz_boxed_5754_; size_t v_i_boxed_5755_; lean_object* v_res_5756_; 
v_sz_boxed_5754_ = lean_unbox_usize(v_sz_5744_);
lean_dec(v_sz_5744_);
v_i_boxed_5755_ = lean_unbox_usize(v_i_5745_);
lean_dec(v_i_5745_);
v_res_5756_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__5(v_cases_5743_, v_sz_boxed_5754_, v_i_boxed_5755_, v_bs_5746_, v___y_5747_, v___y_5748_, v___y_5749_, v___y_5750_, v___y_5751_, v___y_5752_);
lean_dec(v___y_5752_);
lean_dec_ref(v___y_5751_);
lean_dec(v___y_5750_);
lean_dec_ref(v___y_5749_);
lean_dec(v___y_5748_);
lean_dec_ref(v___y_5747_);
return v_res_5756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc___boxed(lean_object* v_code_5757_, lean_object* v_a_5758_, lean_object* v_a_5759_, lean_object* v_a_5760_, lean_object* v_a_5761_, lean_object* v_a_5762_, lean_object* v_a_5763_, lean_object* v___y_5764_){
_start:
{
lean_object* v_res_5765_; 
v_res_5765_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5757_, v_a_5758_, v_a_5759_, v_a_5760_, v_a_5761_, v_a_5762_, v_a_5763_);
lean_dec(v_a_5763_);
lean_dec_ref(v_a_5762_);
lean_dec(v_a_5761_);
lean_dec_ref(v_a_5760_);
lean_dec(v_a_5759_);
lean_dec_ref(v_a_5758_);
return v_res_5765_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(lean_object* v_decl_5766_, lean_object* v_code_5767_, lean_object* v_a_5768_, lean_object* v_a_5769_, lean_object* v_a_5770_, lean_object* v_a_5771_, lean_object* v_a_5772_, lean_object* v_a_5773_){
_start:
{
lean_object* v_toSignature_5775_; lean_object* v_params_5776_; lean_object* v___x_5777_; lean_object* v___x_5778_; uint8_t v___x_5779_; 
v_toSignature_5775_ = lean_ctor_get(v_decl_5766_, 0);
v_params_5776_ = lean_ctor_get(v_toSignature_5775_, 3);
v___x_5777_ = lean_unsigned_to_nat(0u);
v___x_5778_ = lean_array_get_size(v_params_5776_);
v___x_5779_ = lean_nat_dec_lt(v___x_5777_, v___x_5778_);
if (v___x_5779_ == 0)
{
lean_object* v___x_5780_; 
v___x_5780_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5767_, v_a_5768_, v_a_5769_, v_a_5770_, v_a_5771_, v_a_5772_, v_a_5773_);
if (lean_obj_tag(v___x_5780_) == 0)
{
lean_object* v_a_5781_; lean_object* v___x_5782_; 
v_a_5781_ = lean_ctor_get(v___x_5780_, 0);
lean_inc(v_a_5781_);
lean_dec_ref_known(v___x_5780_, 1);
v___x_5782_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5776_, v_a_5781_, v_a_5768_, v_a_5769_, v_a_5770_, v_a_5771_, v_a_5772_, v_a_5773_);
return v___x_5782_;
}
else
{
return v___x_5780_;
}
}
else
{
size_t v___x_5783_; size_t v___x_5784_; lean_object* v___x_5785_; lean_object* v___x_5786_; 
v___x_5783_ = ((size_t)0ULL);
v___x_5784_ = lean_usize_of_nat(v___x_5778_);
lean_inc_ref(v_a_5768_);
v___x_5785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc_spec__3(v_params_5776_, v___x_5783_, v___x_5784_, v_a_5768_);
v___x_5786_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Code_explicitRc(v_code_5767_, v___x_5785_, v_a_5769_, v_a_5770_, v_a_5771_, v_a_5772_, v_a_5773_);
if (lean_obj_tag(v___x_5786_) == 0)
{
lean_object* v_a_5787_; lean_object* v___x_5788_; 
v_a_5787_ = lean_ctor_get(v___x_5786_, 0);
lean_inc(v_a_5787_);
lean_dec_ref_known(v___x_5786_, 1);
v___x_5788_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_addDecForDeadParams(v_params_5776_, v_a_5787_, v___x_5785_, v_a_5769_, v_a_5770_, v_a_5771_, v_a_5772_, v_a_5773_);
lean_dec_ref(v___x_5785_);
return v___x_5788_;
}
else
{
lean_dec_ref(v___x_5785_);
return v___x_5786_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go___boxed(lean_object* v_decl_5789_, lean_object* v_code_5790_, lean_object* v_a_5791_, lean_object* v_a_5792_, lean_object* v_a_5793_, lean_object* v_a_5794_, lean_object* v_a_5795_, lean_object* v_a_5796_, lean_object* v___y_5797_){
_start:
{
lean_object* v_res_5798_; 
v_res_5798_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(v_decl_5789_, v_code_5790_, v_a_5791_, v_a_5792_, v_a_5793_, v_a_5794_, v_a_5795_, v_a_5796_);
lean_dec(v_a_5796_);
lean_dec_ref(v_a_5795_);
lean_dec(v_a_5794_);
lean_dec_ref(v_a_5793_);
lean_dec(v_a_5792_);
lean_dec_ref(v_a_5791_);
lean_dec_ref(v_decl_5789_);
return v_res_5798_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(lean_object* v_f_5799_, lean_object* v_v_5800_, lean_object* v___y_5801_, lean_object* v___y_5802_, lean_object* v___y_5803_, lean_object* v___y_5804_){
_start:
{
if (lean_obj_tag(v_v_5800_) == 0)
{
lean_object* v_code_5806_; lean_object* v___x_5808_; uint8_t v_isShared_5809_; uint8_t v_isSharedCheck_5830_; 
v_code_5806_ = lean_ctor_get(v_v_5800_, 0);
v_isSharedCheck_5830_ = !lean_is_exclusive(v_v_5800_);
if (v_isSharedCheck_5830_ == 0)
{
v___x_5808_ = v_v_5800_;
v_isShared_5809_ = v_isSharedCheck_5830_;
goto v_resetjp_5807_;
}
else
{
lean_inc(v_code_5806_);
lean_dec(v_v_5800_);
v___x_5808_ = lean_box(0);
v_isShared_5809_ = v_isSharedCheck_5830_;
goto v_resetjp_5807_;
}
v_resetjp_5807_:
{
lean_object* v___x_5810_; 
lean_inc(v___y_5804_);
lean_inc_ref(v___y_5803_);
lean_inc(v___y_5802_);
lean_inc_ref(v___y_5801_);
v___x_5810_ = lean_apply_6(v_f_5799_, v_code_5806_, v___y_5801_, v___y_5802_, v___y_5803_, v___y_5804_, lean_box(0));
if (lean_obj_tag(v___x_5810_) == 0)
{
lean_object* v_a_5811_; lean_object* v___x_5813_; uint8_t v_isShared_5814_; uint8_t v_isSharedCheck_5821_; 
v_a_5811_ = lean_ctor_get(v___x_5810_, 0);
v_isSharedCheck_5821_ = !lean_is_exclusive(v___x_5810_);
if (v_isSharedCheck_5821_ == 0)
{
v___x_5813_ = v___x_5810_;
v_isShared_5814_ = v_isSharedCheck_5821_;
goto v_resetjp_5812_;
}
else
{
lean_inc(v_a_5811_);
lean_dec(v___x_5810_);
v___x_5813_ = lean_box(0);
v_isShared_5814_ = v_isSharedCheck_5821_;
goto v_resetjp_5812_;
}
v_resetjp_5812_:
{
lean_object* v___x_5816_; 
if (v_isShared_5809_ == 0)
{
lean_ctor_set(v___x_5808_, 0, v_a_5811_);
v___x_5816_ = v___x_5808_;
goto v_reusejp_5815_;
}
else
{
lean_object* v_reuseFailAlloc_5820_; 
v_reuseFailAlloc_5820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5820_, 0, v_a_5811_);
v___x_5816_ = v_reuseFailAlloc_5820_;
goto v_reusejp_5815_;
}
v_reusejp_5815_:
{
lean_object* v___x_5818_; 
if (v_isShared_5814_ == 0)
{
lean_ctor_set(v___x_5813_, 0, v___x_5816_);
v___x_5818_ = v___x_5813_;
goto v_reusejp_5817_;
}
else
{
lean_object* v_reuseFailAlloc_5819_; 
v_reuseFailAlloc_5819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5819_, 0, v___x_5816_);
v___x_5818_ = v_reuseFailAlloc_5819_;
goto v_reusejp_5817_;
}
v_reusejp_5817_:
{
return v___x_5818_;
}
}
}
}
else
{
lean_object* v_a_5822_; lean_object* v___x_5824_; uint8_t v_isShared_5825_; uint8_t v_isSharedCheck_5829_; 
lean_del_object(v___x_5808_);
v_a_5822_ = lean_ctor_get(v___x_5810_, 0);
v_isSharedCheck_5829_ = !lean_is_exclusive(v___x_5810_);
if (v_isSharedCheck_5829_ == 0)
{
v___x_5824_ = v___x_5810_;
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
else
{
lean_inc(v_a_5822_);
lean_dec(v___x_5810_);
v___x_5824_ = lean_box(0);
v_isShared_5825_ = v_isSharedCheck_5829_;
goto v_resetjp_5823_;
}
v_resetjp_5823_:
{
lean_object* v___x_5827_; 
if (v_isShared_5825_ == 0)
{
v___x_5827_ = v___x_5824_;
goto v_reusejp_5826_;
}
else
{
lean_object* v_reuseFailAlloc_5828_; 
v_reuseFailAlloc_5828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5828_, 0, v_a_5822_);
v___x_5827_ = v_reuseFailAlloc_5828_;
goto v_reusejp_5826_;
}
v_reusejp_5826_:
{
return v___x_5827_;
}
}
}
}
}
else
{
lean_object* v___x_5831_; 
lean_dec_ref(v_f_5799_);
v___x_5831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5831_, 0, v_v_5800_);
return v___x_5831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg___boxed(lean_object* v_f_5832_, lean_object* v_v_5833_, lean_object* v___y_5834_, lean_object* v___y_5835_, lean_object* v___y_5836_, lean_object* v___y_5837_, lean_object* v___y_5838_){
_start:
{
lean_object* v_res_5839_; 
v_res_5839_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v_f_5832_, v_v_5833_, v___y_5834_, v___y_5835_, v___y_5836_, v___y_5837_);
lean_dec(v___y_5837_);
lean_dec_ref(v___y_5836_);
lean_dec(v___y_5835_);
lean_dec_ref(v___y_5834_);
return v_res_5839_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(uint8_t v_pu_5840_, lean_object* v_f_5841_, lean_object* v_v_5842_, lean_object* v___y_5843_, lean_object* v___y_5844_, lean_object* v___y_5845_, lean_object* v___y_5846_){
_start:
{
lean_object* v___x_5848_; 
v___x_5848_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v_f_5841_, v_v_5842_, v___y_5843_, v___y_5844_, v___y_5845_, v___y_5846_);
return v___x_5848_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___boxed(lean_object* v_pu_5849_, lean_object* v_f_5850_, lean_object* v_v_5851_, lean_object* v___y_5852_, lean_object* v___y_5853_, lean_object* v___y_5854_, lean_object* v___y_5855_, lean_object* v___y_5856_){
_start:
{
uint8_t v_pu_boxed_5857_; lean_object* v_res_5858_; 
v_pu_boxed_5857_ = lean_unbox(v_pu_5849_);
v_res_5858_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0(v_pu_boxed_5857_, v_f_5850_, v_v_5851_, v___y_5852_, v___y_5853_, v___y_5854_, v___y_5855_);
lean_dec(v___y_5855_);
lean_dec_ref(v___y_5854_);
lean_dec(v___y_5853_);
lean_dec_ref(v___y_5852_);
return v_res_5858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(lean_object* v_toSignature_5859_, lean_object* v_decl_5860_, lean_object* v_code_5861_, lean_object* v___y_5862_, lean_object* v___y_5863_, lean_object* v___y_5864_, lean_object* v___y_5865_){
_start:
{
lean_object* v_params_5867_; lean_object* v___x_5868_; 
v_params_5867_ = lean_ctor_get(v_toSignature_5859_, 3);
lean_inc_ref(v_code_5861_);
v___x_5868_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_CollectDerivedValInfo_collect(v_params_5867_, v_code_5861_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_);
if (lean_obj_tag(v___x_5868_) == 0)
{
lean_object* v_a_5869_; lean_object* v_fst_5870_; lean_object* v_snd_5871_; lean_object* v___x_5872_; lean_object* v___x_5873_; lean_object* v___x_5874_; lean_object* v___x_5875_; lean_object* v___x_5876_; lean_object* v___x_5877_; 
v_a_5869_ = lean_ctor_get(v___x_5868_, 0);
lean_inc(v_a_5869_);
lean_dec_ref_known(v___x_5868_, 1);
v_fst_5870_ = lean_ctor_get(v_a_5869_, 0);
lean_inc(v_fst_5870_);
v_snd_5871_ = lean_ctor_get(v_a_5869_, 1);
lean_inc(v_snd_5871_);
lean_dec(v_a_5869_);
v___x_5872_ = lean_box(1);
v___x_5873_ = lean_unsigned_to_nat(0u);
v___x_5874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_5874_, 0, v_snd_5871_);
lean_ctor_set(v___x_5874_, 1, v_fst_5870_);
lean_ctor_set(v___x_5874_, 2, v___x_5872_);
lean_ctor_set(v___x_5874_, 3, v___x_5872_);
lean_ctor_set(v___x_5874_, 4, v___x_5873_);
v___x_5875_ = lean_obj_once(&l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0, &l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0_once, _init_l_Lean_Compiler_LCNF_instInhabitedLiveVars_default___closed__0);
v___x_5876_ = lean_st_mk_ref(v___x_5875_);
v___x_5877_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_go(v_decl_5860_, v_code_5861_, v___x_5874_, v___x_5876_, v___y_5862_, v___y_5863_, v___y_5864_, v___y_5865_);
lean_dec_ref_known(v___x_5874_, 5);
if (lean_obj_tag(v___x_5877_) == 0)
{
lean_object* v_a_5878_; lean_object* v___x_5880_; uint8_t v_isShared_5881_; uint8_t v_isSharedCheck_5886_; 
v_a_5878_ = lean_ctor_get(v___x_5877_, 0);
v_isSharedCheck_5886_ = !lean_is_exclusive(v___x_5877_);
if (v_isSharedCheck_5886_ == 0)
{
v___x_5880_ = v___x_5877_;
v_isShared_5881_ = v_isSharedCheck_5886_;
goto v_resetjp_5879_;
}
else
{
lean_inc(v_a_5878_);
lean_dec(v___x_5877_);
v___x_5880_ = lean_box(0);
v_isShared_5881_ = v_isSharedCheck_5886_;
goto v_resetjp_5879_;
}
v_resetjp_5879_:
{
lean_object* v___x_5882_; lean_object* v___x_5884_; 
v___x_5882_ = lean_st_ref_get(v___x_5876_);
lean_dec(v___x_5876_);
lean_dec(v___x_5882_);
if (v_isShared_5881_ == 0)
{
v___x_5884_ = v___x_5880_;
goto v_reusejp_5883_;
}
else
{
lean_object* v_reuseFailAlloc_5885_; 
v_reuseFailAlloc_5885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5885_, 0, v_a_5878_);
v___x_5884_ = v_reuseFailAlloc_5885_;
goto v_reusejp_5883_;
}
v_reusejp_5883_:
{
return v___x_5884_;
}
}
}
else
{
lean_dec(v___x_5876_);
return v___x_5877_;
}
}
else
{
lean_object* v_a_5887_; lean_object* v___x_5889_; uint8_t v_isShared_5890_; uint8_t v_isSharedCheck_5894_; 
lean_dec_ref(v_code_5861_);
v_a_5887_ = lean_ctor_get(v___x_5868_, 0);
v_isSharedCheck_5894_ = !lean_is_exclusive(v___x_5868_);
if (v_isSharedCheck_5894_ == 0)
{
v___x_5889_ = v___x_5868_;
v_isShared_5890_ = v_isSharedCheck_5894_;
goto v_resetjp_5888_;
}
else
{
lean_inc(v_a_5887_);
lean_dec(v___x_5868_);
v___x_5889_ = lean_box(0);
v_isShared_5890_ = v_isSharedCheck_5894_;
goto v_resetjp_5888_;
}
v_resetjp_5888_:
{
lean_object* v___x_5892_; 
if (v_isShared_5890_ == 0)
{
v___x_5892_ = v___x_5889_;
goto v_reusejp_5891_;
}
else
{
lean_object* v_reuseFailAlloc_5893_; 
v_reuseFailAlloc_5893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5893_, 0, v_a_5887_);
v___x_5892_ = v_reuseFailAlloc_5893_;
goto v_reusejp_5891_;
}
v_reusejp_5891_:
{
return v___x_5892_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed(lean_object* v_toSignature_5895_, lean_object* v_decl_5896_, lean_object* v_code_5897_, lean_object* v___y_5898_, lean_object* v___y_5899_, lean_object* v___y_5900_, lean_object* v___y_5901_, lean_object* v___y_5902_){
_start:
{
lean_object* v_res_5903_; 
v_res_5903_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0(v_toSignature_5895_, v_decl_5896_, v_code_5897_, v___y_5898_, v___y_5899_, v___y_5900_, v___y_5901_);
lean_dec(v___y_5901_);
lean_dec_ref(v___y_5900_);
lean_dec(v___y_5899_);
lean_dec_ref(v___y_5898_);
lean_dec_ref(v_decl_5896_);
lean_dec_ref(v_toSignature_5895_);
return v_res_5903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(lean_object* v_decl_5904_, lean_object* v_a_5905_, lean_object* v_a_5906_, lean_object* v_a_5907_, lean_object* v_a_5908_){
_start:
{
lean_object* v_toSignature_5910_; lean_object* v_value_5911_; uint8_t v_recursive_5912_; lean_object* v_inlineAttr_x3f_5913_; lean_object* v___f_5914_; lean_object* v___x_5915_; 
v_toSignature_5910_ = lean_ctor_get(v_decl_5904_, 0);
lean_inc_ref_n(v_toSignature_5910_, 2);
v_value_5911_ = lean_ctor_get(v_decl_5904_, 1);
lean_inc_ref(v_value_5911_);
v_recursive_5912_ = lean_ctor_get_uint8(v_decl_5904_, sizeof(void*)*3);
v_inlineAttr_x3f_5913_ = lean_ctor_get(v_decl_5904_, 2);
lean_inc(v_inlineAttr_x3f_5913_);
v___f_5914_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___lam__0___boxed), 8, 2);
lean_closure_set(v___f_5914_, 0, v_toSignature_5910_);
lean_closure_set(v___f_5914_, 1, v_decl_5904_);
v___x_5915_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00__private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc_spec__0___redArg(v___f_5914_, v_value_5911_, v_a_5905_, v_a_5906_, v_a_5907_, v_a_5908_);
if (lean_obj_tag(v___x_5915_) == 0)
{
lean_object* v_a_5916_; lean_object* v___x_5918_; uint8_t v_isShared_5919_; uint8_t v_isSharedCheck_5924_; 
v_a_5916_ = lean_ctor_get(v___x_5915_, 0);
v_isSharedCheck_5924_ = !lean_is_exclusive(v___x_5915_);
if (v_isSharedCheck_5924_ == 0)
{
v___x_5918_ = v___x_5915_;
v_isShared_5919_ = v_isSharedCheck_5924_;
goto v_resetjp_5917_;
}
else
{
lean_inc(v_a_5916_);
lean_dec(v___x_5915_);
v___x_5918_ = lean_box(0);
v_isShared_5919_ = v_isSharedCheck_5924_;
goto v_resetjp_5917_;
}
v_resetjp_5917_:
{
lean_object* v___x_5920_; lean_object* v___x_5922_; 
v___x_5920_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_5920_, 0, v_toSignature_5910_);
lean_ctor_set(v___x_5920_, 1, v_a_5916_);
lean_ctor_set(v___x_5920_, 2, v_inlineAttr_x3f_5913_);
lean_ctor_set_uint8(v___x_5920_, sizeof(void*)*3, v_recursive_5912_);
if (v_isShared_5919_ == 0)
{
lean_ctor_set(v___x_5918_, 0, v___x_5920_);
v___x_5922_ = v___x_5918_;
goto v_reusejp_5921_;
}
else
{
lean_object* v_reuseFailAlloc_5923_; 
v_reuseFailAlloc_5923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5923_, 0, v___x_5920_);
v___x_5922_ = v_reuseFailAlloc_5923_;
goto v_reusejp_5921_;
}
v_reusejp_5921_:
{
return v___x_5922_;
}
}
}
else
{
lean_object* v_a_5925_; lean_object* v___x_5927_; uint8_t v_isShared_5928_; uint8_t v_isSharedCheck_5932_; 
lean_dec(v_inlineAttr_x3f_5913_);
lean_dec_ref(v_toSignature_5910_);
v_a_5925_ = lean_ctor_get(v___x_5915_, 0);
v_isSharedCheck_5932_ = !lean_is_exclusive(v___x_5915_);
if (v_isSharedCheck_5932_ == 0)
{
v___x_5927_ = v___x_5915_;
v_isShared_5928_ = v_isSharedCheck_5932_;
goto v_resetjp_5926_;
}
else
{
lean_inc(v_a_5925_);
lean_dec(v___x_5915_);
v___x_5927_ = lean_box(0);
v_isShared_5928_ = v_isSharedCheck_5932_;
goto v_resetjp_5926_;
}
v_resetjp_5926_:
{
lean_object* v___x_5930_; 
if (v_isShared_5928_ == 0)
{
v___x_5930_ = v___x_5927_;
goto v_reusejp_5929_;
}
else
{
lean_object* v_reuseFailAlloc_5931_; 
v_reuseFailAlloc_5931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5931_, 0, v_a_5925_);
v___x_5930_ = v_reuseFailAlloc_5931_;
goto v_reusejp_5929_;
}
v_reusejp_5929_:
{
return v___x_5930_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc___boxed(lean_object* v_decl_5933_, lean_object* v_a_5934_, lean_object* v_a_5935_, lean_object* v_a_5936_, lean_object* v_a_5937_, lean_object* v___y_5938_){
_start:
{
lean_object* v_res_5939_; 
v_res_5939_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(v_decl_5933_, v_a_5934_, v_a_5935_, v_a_5936_, v_a_5937_);
lean_dec(v_a_5937_);
lean_dec_ref(v_a_5936_);
lean_dec(v_a_5935_);
lean_dec_ref(v_a_5934_);
return v_res_5939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(size_t v_sz_5940_, size_t v_i_5941_, lean_object* v_bs_5942_, lean_object* v___y_5943_, lean_object* v___y_5944_, lean_object* v___y_5945_, lean_object* v___y_5946_){
_start:
{
uint8_t v___x_5948_; 
v___x_5948_ = lean_usize_dec_lt(v_i_5941_, v_sz_5940_);
if (v___x_5948_ == 0)
{
lean_object* v___x_5949_; 
v___x_5949_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5949_, 0, v_bs_5942_);
return v___x_5949_;
}
else
{
lean_object* v_v_5950_; lean_object* v___x_5951_; lean_object* v_bs_x27_5952_; lean_object* v___x_5953_; 
v_v_5950_ = lean_array_uget(v_bs_5942_, v_i_5941_);
v___x_5951_ = lean_unsigned_to_nat(0u);
v_bs_x27_5952_ = lean_array_uset(v_bs_5942_, v_i_5941_, v___x_5951_);
v___x_5953_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_Decl_explicitRc(v_v_5950_, v___y_5943_, v___y_5944_, v___y_5945_, v___y_5946_);
if (lean_obj_tag(v___x_5953_) == 0)
{
lean_object* v_a_5954_; size_t v___x_5955_; size_t v___x_5956_; lean_object* v___x_5957_; 
v_a_5954_ = lean_ctor_get(v___x_5953_, 0);
lean_inc(v_a_5954_);
lean_dec_ref_known(v___x_5953_, 1);
v___x_5955_ = ((size_t)1ULL);
v___x_5956_ = lean_usize_add(v_i_5941_, v___x_5955_);
v___x_5957_ = lean_array_uset(v_bs_x27_5952_, v_i_5941_, v_a_5954_);
v_i_5941_ = v___x_5956_;
v_bs_5942_ = v___x_5957_;
goto _start;
}
else
{
lean_object* v_a_5959_; lean_object* v___x_5961_; uint8_t v_isShared_5962_; uint8_t v_isSharedCheck_5966_; 
lean_dec_ref(v_bs_x27_5952_);
v_a_5959_ = lean_ctor_get(v___x_5953_, 0);
v_isSharedCheck_5966_ = !lean_is_exclusive(v___x_5953_);
if (v_isSharedCheck_5966_ == 0)
{
v___x_5961_ = v___x_5953_;
v_isShared_5962_ = v_isSharedCheck_5966_;
goto v_resetjp_5960_;
}
else
{
lean_inc(v_a_5959_);
lean_dec(v___x_5953_);
v___x_5961_ = lean_box(0);
v_isShared_5962_ = v_isSharedCheck_5966_;
goto v_resetjp_5960_;
}
v_resetjp_5960_:
{
lean_object* v___x_5964_; 
if (v_isShared_5962_ == 0)
{
v___x_5964_ = v___x_5961_;
goto v_reusejp_5963_;
}
else
{
lean_object* v_reuseFailAlloc_5965_; 
v_reuseFailAlloc_5965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5965_, 0, v_a_5959_);
v___x_5964_ = v_reuseFailAlloc_5965_;
goto v_reusejp_5963_;
}
v_reusejp_5963_:
{
return v___x_5964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0___boxed(lean_object* v_sz_5967_, lean_object* v_i_5968_, lean_object* v_bs_5969_, lean_object* v___y_5970_, lean_object* v___y_5971_, lean_object* v___y_5972_, lean_object* v___y_5973_, lean_object* v___y_5974_){
_start:
{
size_t v_sz_boxed_5975_; size_t v_i_boxed_5976_; lean_object* v_res_5977_; 
v_sz_boxed_5975_ = lean_unbox_usize(v_sz_5967_);
lean_dec(v_sz_5967_);
v_i_boxed_5976_ = lean_unbox_usize(v_i_5968_);
lean_dec(v_i_5968_);
v_res_5977_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(v_sz_boxed_5975_, v_i_boxed_5976_, v_bs_5969_, v___y_5970_, v___y_5971_, v___y_5972_, v___y_5973_);
lean_dec(v___y_5973_);
lean_dec_ref(v___y_5972_);
lean_dec(v___y_5971_);
lean_dec_ref(v___y_5970_);
return v_res_5977_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc(lean_object* v_decls_5978_, lean_object* v_a_5979_, lean_object* v_a_5980_, lean_object* v_a_5981_, lean_object* v_a_5982_){
_start:
{
size_t v_sz_5984_; size_t v___x_5985_; lean_object* v___x_5986_; 
v_sz_5984_ = lean_array_size(v_decls_5978_);
v___x_5985_ = ((size_t)0ULL);
v___x_5986_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_runExplicitRc_spec__0(v_sz_5984_, v___x_5985_, v_decls_5978_, v_a_5979_, v_a_5980_, v_a_5981_, v_a_5982_);
return v___x_5986_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_runExplicitRc___boxed(lean_object* v_decls_5987_, lean_object* v_a_5988_, lean_object* v_a_5989_, lean_object* v_a_5990_, lean_object* v_a_5991_, lean_object* v___y_5992_){
_start:
{
lean_object* v_res_5993_; 
v_res_5993_ = l_Lean_Compiler_LCNF_runExplicitRc(v_decls_5987_, v_a_5988_, v_a_5989_, v_a_5990_, v_a_5991_);
lean_dec(v_a_5991_);
lean_dec_ref(v_a_5990_);
lean_dec(v_a_5989_);
lean_dec_ref(v_a_5988_);
return v_res_5993_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_explicitRc___closed__3(void){
_start:
{
lean_object* v___x_5998_; lean_object* v___x_5999_; uint8_t v___x_6000_; lean_object* v___x_6001_; lean_object* v___x_6002_; 
v___x_5998_ = lean_unsigned_to_nat(0u);
v___x_5999_ = ((lean_object*)(l_Lean_Compiler_LCNF_explicitRc___closed__2));
v___x_6000_ = 2;
v___x_6001_ = ((lean_object*)(l_Lean_Compiler_LCNF_explicitRc___closed__1));
v___x_6002_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_6001_, v___x_6000_, v___x_5999_, v___x_5998_);
return v___x_6002_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_explicitRc(void){
_start:
{
lean_object* v___x_6003_; 
v___x_6003_ = lean_obj_once(&l_Lean_Compiler_LCNF_explicitRc___closed__3, &l_Lean_Compiler_LCNF_explicitRc___closed__3_once, _init_l_Lean_Compiler_LCNF_explicitRc___closed__3);
return v___x_6003_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6059_; lean_object* v___x_6060_; lean_object* v___x_6061_; 
v___x_6059_ = lean_unsigned_to_nat(3791338971u);
v___x_6060_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6061_ = l_Lean_Name_num___override(v___x_6060_, v___x_6059_);
return v___x_6061_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6063_; lean_object* v___x_6064_; lean_object* v___x_6065_; 
v___x_6063_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6064_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6065_ = l_Lean_Name_str___override(v___x_6064_, v___x_6063_);
return v___x_6065_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6067_; lean_object* v___x_6068_; lean_object* v___x_6069_; 
v___x_6067_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6068_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6069_ = l_Lean_Name_str___override(v___x_6068_, v___x_6067_);
return v___x_6069_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6070_; lean_object* v___x_6071_; lean_object* v___x_6072_; 
v___x_6070_ = lean_unsigned_to_nat(2u);
v___x_6071_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__27_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6072_ = l_Lean_Name_num___override(v___x_6071_, v___x_6070_);
return v___x_6072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6074_; uint8_t v___x_6075_; lean_object* v___x_6076_; lean_object* v___x_6077_; 
v___x_6074_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_));
v___x_6075_ = 1;
v___x_6076_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn___closed__28_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_);
v___x_6077_ = l_Lean_registerTraceClass(v___x_6074_, v___x_6075_, v___x_6076_);
return v___x_6077_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2____boxed(lean_object* v___y_6078_){
_start:
{
lean_object* v_res_6079_; 
v_res_6079_ = l___private_Lean_Compiler_LCNF_ExplicitRC_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_ExplicitRC_3791338971____hygCtx___hyg_2_();
return v_res_6079_;
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
