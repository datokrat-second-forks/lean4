// Lean compiler output
// Module: Lean.Compiler.LCNF.JoinPoints
// Imports: public import Lean.Compiler.LCNF.PullFunDecls public import Lean.Compiler.LCNF.FVarUtil public import Lean.Compiler.LCNF.ScopeM public import Lean.Compiler.LCNF.InferType
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
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
uint8_t l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdMap_get_x21___redArg(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
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
lean_object* l_ReaderT_instMonad___redArg(lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_instMonad___redArg___lam__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_pure(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_OptionT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Alt_getParams(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_replaceFVars(uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Code_inferType(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkForallParams(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseParam___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Std_HashMap_instInhabited___redArg();
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(lean_object*, uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkAuxParam(uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateFVarImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(uint8_t, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(lean_object*, lean_object*);
lean_object* l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_getPurity___redArg(lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_toLocalContext(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_FunDecl_getArity___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_eraseLetDecl___redArg(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_LCtx_addFunDecl(uint8_t, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_mkFreshJpName___redArg(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAtom(lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_pullFunDecls(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Compiler_LCNF_instInhabitedPass;
lean_object* l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(lean_object*, uint8_t, uint8_t, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1;
static lean_once_cell_t l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__2;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo;
static const lean_closure_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instBEqFVarId_beq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_instHashableFVarId_hash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__0 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__0_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__1___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__1 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__2___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__2 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__3___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__3 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__4___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__4 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__4_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_instMonadEIO___redArg___lam__10___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__5 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__5_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__6 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__6_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__7 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__7_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__8 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__8_value;
static const lean_closure_object l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__9 = (const lean_object*)&l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__9_value;
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Compiler.LCNF.FVarUtil"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Expr.forFVarM"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__1_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__1(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__2 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__2_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1_value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___boxed, .m_arity = 8, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_JoinPointFinder_replace___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_JoinPointFinder_replace___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1(lean_object*);
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = "Std.Data.DHashMap.Internal.AssocList.Basic"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__0_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "Std.DHashMap.Internal.AssocList.get!"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__1 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__1_value;
static const lean_string_object l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "key is not present in hash table"};
static const lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__2 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__2_value;
static lean_once_cell_t l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__3;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Lean.Compiler.LCNF.Expr.mapFVarM"};
static const lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__0_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__7(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__2(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__6(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__3(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_JoinPointContextExtender_extend___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_JoinPointContextExtender_extend___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__5(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___lam__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__0 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__0_value;
static const lean_array_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1 = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__0;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__1;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__2;
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__3;
static const lean_string_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__4 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__4_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__5 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "findJoinPoints"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(27, 146, 158, 50, 89, 247, 141, 91)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__3_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__4_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__5;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Found "};
static const lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__6_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__7;
static const lean_string_object l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " jp candidates for "};
static const lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__8_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__9;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_Compiler_LCNF_findJoinPoints___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(93, 56, 72, 52, 217, 5, 132, 108)}};
static const lean_object* l_Lean_Compiler_LCNF_findJoinPoints___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_findJoinPoints___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_findJoinPoints___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Decl_findJoinPoints___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_findJoinPoints___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_findJoinPoints___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findJoinPoints(lean_object*);
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "JoinPoints"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__6_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(138, 251, 2, 16, 192, 245, 39, 43)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__8_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(11, 195, 166, 13, 14, 74, 51, 102)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__9_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(118, 94, 192, 42, 47, 148, 123, 221)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__10_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(84, 96, 119, 154, 5, 94, 49, 180)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__11_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(149, 254, 177, 201, 52, 78, 188, 46)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__12_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__13_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(188, 174, 53, 156, 55, 51, 108, 149)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__14_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__15_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(181, 89, 78, 65, 209, 42, 118, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__16_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(32, 74, 254, 106, 190, 199, 54, 57)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__17_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 143, 83, 55, 35, 240, 76, 214)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__18_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__5_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(27, 24, 143, 88, 192, 154, 51, 130)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__19_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__7_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(248, 64, 202, 107, 91, 94, 0, 94)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)(((size_t)(885915134) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(107, 189, 181, 106, 196, 101, 170, 6)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__21_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(16, 152, 224, 166, 61, 246, 204, 6)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__23_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(148, 152, 102, 67, 2, 3, 70, 81)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__25_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(173, 228, 205, 62, 228, 202, 74, 221)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extendJoinPointContext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extendJoinPointContext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__1_value;
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "tacticSeq"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__2_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 140, 85, 215, 241, 69, 7, 118)}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3_value;
static const lean_array_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4_value;
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "tacticSeq1Indented"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__5_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 90, 160, 238, 133, 180, 23, 239)}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6_value;
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__7_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "simp"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__9_value),LEAN_SCALAR_PTR_LITERAL(50, 13, 241, 145, 67, 153, 105, 177)}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__11;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__12;
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "optConfig"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__13 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__13_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value_aux_1),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value_aux_2),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__13_value),LEAN_SCALAR_PTR_LITERAL(137, 208, 10, 74, 108, 50, 106, 48)}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4_value)}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__16;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__17;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__18_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__18;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__19;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__20;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__21;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__22_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__22;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__23;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__24_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__24;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__25;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__26_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__26;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__27;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__28;
static lean_once_cell_t l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__29;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1;
static const lean_string_object l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "extendJoinPointContext"};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(235, 217, 22, 100, 178, 244, 59, 176)}};
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_JoinPointContextExtender_extend___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(45, 182, 186, 25, 180, 118, 93, 6)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1293217372) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(16, 21, 56, 79, 107, 153, 225, 133)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(135, 157, 213, 84, 57, 230, 183, 4)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(207, 209, 19, 102, 29, 210, 192, 63)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(138, 122, 21, 150, 241, 75, 189, 9)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "commonJoinPointArgs"};
static const lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(43, 94, 34, 67, 153, 72, 48, 41)}};
static const lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_commonJoinPointArgs;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__1_value),LEAN_SCALAR_PTR_LITERAL(237, 238, 208, 194, 7, 187, 157, 14)}};
static const lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_1_ = lean_box(0);
v___x_2_ = lean_unsigned_to_nat(16u);
v___x_3_ = lean_mk_array(v___x_2_, v___x_1_);
return v___x_3_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1(void){
_start:
{
lean_object* v___x_4_; lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_4_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__0, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__0_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__0);
v___x_5_ = lean_unsigned_to_nat(0u);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___x_4_);
return v___x_6_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__2(void){
_start:
{
lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_7_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1);
v___x_8_ = lean_unsigned_to_nat(0u);
v___x_9_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_9_, 0, v___x_8_);
lean_ctor_set(v___x_9_, 1, v___x_7_);
return v___x_9_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default(void){
_start:
{
lean_object* v___x_10_; 
v___x_10_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__2, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__2_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__2);
return v___x_10_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo(void){
_start:
{
lean_object* v___x_11_; 
v___x_11_ = l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default;
return v___x_11_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg(lean_object* v_fvarId_14_, lean_object* v___y_15_){
_start:
{
lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_17_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__0));
v___x_18_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__1));
v___x_19_ = lean_st_ref_get(v___y_15_);
v___x_20_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_17_, v___x_18_, v___x_19_, v_fvarId_14_);
lean_dec(v___x_19_);
v___x_21_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_21_, 0, v___x_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___boxed(lean_object* v_fvarId_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg(v_fvarId_22_, v___y_23_);
lean_dec(v___y_23_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(lean_object* v_fvarId_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v___x_34_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__0));
v___x_35_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___redArg___closed__1));
v___x_36_ = lean_st_ref_get(v___y_28_);
v___x_37_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___x_34_, v___x_35_, v___x_36_, v_fvarId_26_);
lean_dec(v___x_36_);
v___x_38_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_38_, 0, v___x_37_);
return v___x_38_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f___boxed(lean_object* v_fvarId_39_, lean_object* v___y_40_, lean_object* v___y_41_, lean_object* v___y_42_, lean_object* v___y_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_){
_start:
{
lean_object* v_res_47_; 
v_res_47_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_findCandidate_x3f(v_fvarId_39_, v___y_40_, v___y_41_, v___y_42_, v___y_43_, v___y_44_, v___y_45_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
lean_dec(v___y_43_);
lean_dec_ref(v___y_42_);
lean_dec(v___y_41_);
lean_dec_ref(v___y_40_);
return v_res_47_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___redArg(lean_object* v_f_48_, lean_object* v___y_49_){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; 
v___x_51_ = lean_st_ref_take(v___y_49_);
v___x_52_ = lean_box(0);
v___x_53_ = lean_apply_1(v_f_48_, v___x_51_);
v___x_54_ = lean_st_ref_put(v___y_49_, v___x_53_);
v___x_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_55_, 0, v___x_52_);
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___redArg___boxed(lean_object* v_f_56_, lean_object* v___y_57_, lean_object* v___y_58_){
_start:
{
lean_object* v_res_59_; 
v_res_59_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___redArg(v_f_56_, v___y_57_);
lean_dec(v___y_57_);
return v_res_59_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(lean_object* v_f_60_, lean_object* v___y_61_, lean_object* v___y_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; 
v___x_68_ = lean_st_ref_take(v___y_62_);
v___x_69_ = lean_box(0);
v___x_70_ = lean_apply_1(v_f_60_, v___x_68_);
v___x_71_ = lean_st_ref_put(v___y_62_, v___x_70_);
v___x_72_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_72_, 0, v___x_69_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates___boxed(lean_object* v_f_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_, lean_object* v___y_79_, lean_object* v___y_80_){
_start:
{
lean_object* v_res_81_; 
v_res_81_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_modifyCandidates(v_f_73_, v___y_74_, v___y_75_, v___y_76_, v___y_77_, v___y_78_, v___y_79_);
lean_dec(v___y_79_);
lean_dec_ref(v___y_78_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___redArg(lean_object* v_a_82_, lean_object* v_x_83_){
_start:
{
if (lean_obj_tag(v_x_83_) == 0)
{
lean_object* v___x_84_; 
v___x_84_ = lean_box(0);
return v___x_84_;
}
else
{
lean_object* v_key_85_; lean_object* v_value_86_; lean_object* v_tail_87_; uint8_t v___x_88_; 
v_key_85_ = lean_ctor_get(v_x_83_, 0);
v_value_86_ = lean_ctor_get(v_x_83_, 1);
v_tail_87_ = lean_ctor_get(v_x_83_, 2);
v___x_88_ = l_Lean_instBEqFVarId_beq(v_key_85_, v_a_82_);
if (v___x_88_ == 0)
{
v_x_83_ = v_tail_87_;
goto _start;
}
else
{
lean_object* v___x_90_; 
lean_inc(v_value_86_);
v___x_90_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_90_, 0, v_value_86_);
return v___x_90_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___redArg___boxed(lean_object* v_a_91_, lean_object* v_x_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___redArg(v_a_91_, v_x_92_);
lean_dec(v_x_92_);
lean_dec(v_a_91_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(lean_object* v_m_94_, lean_object* v_a_95_){
_start:
{
lean_object* v_buckets_96_; lean_object* v___x_97_; uint64_t v___x_98_; uint64_t v___x_99_; uint64_t v___x_100_; uint64_t v_fold_101_; uint64_t v___x_102_; uint64_t v___x_103_; uint64_t v___x_104_; size_t v___x_105_; size_t v___x_106_; size_t v___x_107_; size_t v___x_108_; size_t v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; 
v_buckets_96_ = lean_ctor_get(v_m_94_, 1);
v___x_97_ = lean_array_get_size(v_buckets_96_);
v___x_98_ = l_Lean_instHashableFVarId_hash(v_a_95_);
v___x_99_ = 32ULL;
v___x_100_ = lean_uint64_shift_right(v___x_98_, v___x_99_);
v_fold_101_ = lean_uint64_xor(v___x_98_, v___x_100_);
v___x_102_ = 16ULL;
v___x_103_ = lean_uint64_shift_right(v_fold_101_, v___x_102_);
v___x_104_ = lean_uint64_xor(v_fold_101_, v___x_103_);
v___x_105_ = lean_uint64_to_usize(v___x_104_);
v___x_106_ = lean_usize_of_nat(v___x_97_);
v___x_107_ = ((size_t)1ULL);
v___x_108_ = lean_usize_sub(v___x_106_, v___x_107_);
v___x_109_ = lean_usize_land(v___x_105_, v___x_108_);
v___x_110_ = lean_array_uget_borrowed(v_buckets_96_, v___x_109_);
v___x_111_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___redArg(v_a_95_, v___x_110_);
return v___x_111_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg___boxed(lean_object* v_m_112_, lean_object* v_a_113_){
_start:
{
lean_object* v_res_114_; 
v_res_114_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(v_m_112_, v_a_113_);
lean_dec(v_a_113_);
lean_dec_ref(v_m_112_);
return v_res_114_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg(lean_object* v_a_115_, lean_object* v_x_116_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
return v_x_116_;
}
else
{
lean_object* v_key_117_; lean_object* v_value_118_; lean_object* v_tail_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_128_; 
v_key_117_ = lean_ctor_get(v_x_116_, 0);
v_value_118_ = lean_ctor_get(v_x_116_, 1);
v_tail_119_ = lean_ctor_get(v_x_116_, 2);
v_isSharedCheck_128_ = !lean_is_exclusive(v_x_116_);
if (v_isSharedCheck_128_ == 0)
{
v___x_121_ = v_x_116_;
v_isShared_122_ = v_isSharedCheck_128_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_tail_119_);
lean_inc(v_value_118_);
lean_inc(v_key_117_);
lean_dec(v_x_116_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_128_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
uint8_t v___x_123_; 
v___x_123_ = l_Lean_instBEqFVarId_beq(v_key_117_, v_a_115_);
if (v___x_123_ == 0)
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg(v_a_115_, v_tail_119_);
if (v_isShared_122_ == 0)
{
lean_ctor_set(v___x_121_, 2, v___x_124_);
v___x_126_ = v___x_121_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v_key_117_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v_value_118_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v___x_124_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
else
{
lean_del_object(v___x_121_);
lean_dec(v_value_118_);
lean_dec(v_key_117_);
return v_tail_119_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg___boxed(lean_object* v_a_129_, lean_object* v_x_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg(v_a_129_, v_x_130_);
lean_dec(v_a_129_);
return v_res_131_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(lean_object* v_a_132_, lean_object* v_x_133_){
_start:
{
if (lean_obj_tag(v_x_133_) == 0)
{
uint8_t v___x_134_; 
v___x_134_ = 0;
return v___x_134_;
}
else
{
lean_object* v_key_135_; lean_object* v_tail_136_; uint8_t v___x_137_; 
v_key_135_ = lean_ctor_get(v_x_133_, 0);
v_tail_136_ = lean_ctor_get(v_x_133_, 2);
v___x_137_ = l_Lean_instBEqFVarId_beq(v_key_135_, v_a_132_);
if (v___x_137_ == 0)
{
v_x_133_ = v_tail_136_;
goto _start;
}
else
{
return v___x_137_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg___boxed(lean_object* v_a_139_, lean_object* v_x_140_){
_start:
{
uint8_t v_res_141_; lean_object* v_r_142_; 
v_res_141_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(v_a_139_, v_x_140_);
lean_dec(v_x_140_);
lean_dec(v_a_139_);
v_r_142_ = lean_box(v_res_141_);
return v_r_142_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg(lean_object* v_m_143_, lean_object* v_a_144_){
_start:
{
lean_object* v_size_145_; lean_object* v_buckets_146_; lean_object* v___x_147_; uint64_t v___x_148_; uint64_t v___x_149_; uint64_t v___x_150_; uint64_t v_fold_151_; uint64_t v___x_152_; uint64_t v___x_153_; uint64_t v___x_154_; size_t v___x_155_; size_t v___x_156_; size_t v___x_157_; size_t v___x_158_; size_t v___x_159_; lean_object* v_bkt_160_; uint8_t v___x_161_; 
v_size_145_ = lean_ctor_get(v_m_143_, 0);
v_buckets_146_ = lean_ctor_get(v_m_143_, 1);
v___x_147_ = lean_array_get_size(v_buckets_146_);
v___x_148_ = l_Lean_instHashableFVarId_hash(v_a_144_);
v___x_149_ = 32ULL;
v___x_150_ = lean_uint64_shift_right(v___x_148_, v___x_149_);
v_fold_151_ = lean_uint64_xor(v___x_148_, v___x_150_);
v___x_152_ = 16ULL;
v___x_153_ = lean_uint64_shift_right(v_fold_151_, v___x_152_);
v___x_154_ = lean_uint64_xor(v_fold_151_, v___x_153_);
v___x_155_ = lean_uint64_to_usize(v___x_154_);
v___x_156_ = lean_usize_of_nat(v___x_147_);
v___x_157_ = ((size_t)1ULL);
v___x_158_ = lean_usize_sub(v___x_156_, v___x_157_);
v___x_159_ = lean_usize_land(v___x_155_, v___x_158_);
v_bkt_160_ = lean_array_uget_borrowed(v_buckets_146_, v___x_159_);
v___x_161_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(v_a_144_, v_bkt_160_);
if (v___x_161_ == 0)
{
return v_m_143_;
}
else
{
lean_object* v___x_163_; uint8_t v_isShared_164_; uint8_t v_isSharedCheck_174_; 
lean_inc(v_bkt_160_);
lean_inc_ref(v_buckets_146_);
lean_inc(v_size_145_);
v_isSharedCheck_174_ = !lean_is_exclusive(v_m_143_);
if (v_isSharedCheck_174_ == 0)
{
lean_object* v_unused_175_; lean_object* v_unused_176_; 
v_unused_175_ = lean_ctor_get(v_m_143_, 1);
lean_dec(v_unused_175_);
v_unused_176_ = lean_ctor_get(v_m_143_, 0);
lean_dec(v_unused_176_);
v___x_163_ = v_m_143_;
v_isShared_164_ = v_isSharedCheck_174_;
goto v_resetjp_162_;
}
else
{
lean_dec(v_m_143_);
v___x_163_ = lean_box(0);
v_isShared_164_ = v_isSharedCheck_174_;
goto v_resetjp_162_;
}
v_resetjp_162_:
{
lean_object* v___x_165_; lean_object* v_buckets_x27_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_172_; 
v___x_165_ = lean_box(0);
v_buckets_x27_166_ = lean_array_uset(v_buckets_146_, v___x_159_, v___x_165_);
v___x_167_ = lean_unsigned_to_nat(1u);
v___x_168_ = lean_nat_sub(v_size_145_, v___x_167_);
lean_dec(v_size_145_);
v___x_169_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg(v_a_144_, v_bkt_160_);
v___x_170_ = lean_array_uset(v_buckets_x27_166_, v___x_159_, v___x_169_);
if (v_isShared_164_ == 0)
{
lean_ctor_set(v___x_163_, 1, v___x_170_);
lean_ctor_set(v___x_163_, 0, v___x_168_);
v___x_172_ = v___x_163_;
goto v_reusejp_171_;
}
else
{
lean_object* v_reuseFailAlloc_173_; 
v_reuseFailAlloc_173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_173_, 0, v___x_168_);
lean_ctor_set(v_reuseFailAlloc_173_, 1, v___x_170_);
v___x_172_ = v_reuseFailAlloc_173_;
goto v_reusejp_171_;
}
v_reusejp_171_:
{
return v___x_172_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg___boxed(lean_object* v_m_177_, lean_object* v_a_178_){
_start:
{
lean_object* v_res_179_; 
v_res_179_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg(v_m_177_, v_a_178_);
lean_dec(v_a_178_);
return v_res_179_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__3(lean_object* v_as_180_, size_t v_i_181_, size_t v_stop_182_, lean_object* v_b_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_, lean_object* v___y_187_, lean_object* v___y_188_, lean_object* v___y_189_){
_start:
{
uint8_t v___x_191_; 
v___x_191_ = lean_usize_dec_eq(v_i_181_, v_stop_182_);
if (v___x_191_ == 0)
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v___x_192_ = lean_array_uget_borrowed(v_as_180_, v_i_181_);
v___x_193_ = lean_box(0);
v___x_194_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__0(v___x_193_, v___x_192_, v___y_184_, v___y_185_, v___y_186_, v___y_187_, v___y_188_, v___y_189_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; size_t v___x_196_; size_t v___x_197_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v___x_194_, 1);
v___x_196_ = ((size_t)1ULL);
v___x_197_ = lean_usize_add(v_i_181_, v___x_196_);
v_i_181_ = v___x_197_;
v_b_183_ = v_a_195_;
goto _start;
}
else
{
return v___x_194_;
}
}
else
{
lean_object* v___x_199_; 
v___x_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_199_, 0, v_b_183_);
return v___x_199_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(lean_object* v_fvarId_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_, lean_object* v___y_206_){
_start:
{
lean_object* v___x_208_; lean_object* v___x_209_; 
v___x_208_ = lean_st_ref_get(v___y_202_);
v___x_209_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(v___x_208_, v_fvarId_200_);
lean_dec(v___x_208_);
if (lean_obj_tag(v___x_209_) == 1)
{
lean_object* v_val_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_229_; 
v_val_210_ = lean_ctor_get(v___x_209_, 0);
v_isSharedCheck_229_ = !lean_is_exclusive(v___x_209_);
if (v_isSharedCheck_229_ == 0)
{
v___x_212_ = v___x_209_;
v_isShared_213_ = v_isSharedCheck_229_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_val_210_);
lean_dec(v___x_209_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_229_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v_associated_217_; lean_object* v_buckets_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; uint8_t v___x_222_; 
v___x_214_ = lean_st_ref_take(v___y_202_);
v___x_215_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg(v___x_214_, v_fvarId_200_);
v___x_216_ = lean_st_ref_put(v___y_202_, v___x_215_);
v_associated_217_ = lean_ctor_get(v_val_210_, 1);
lean_inc_ref(v_associated_217_);
lean_dec(v_val_210_);
v_buckets_218_ = lean_ctor_get(v_associated_217_, 1);
lean_inc_ref(v_buckets_218_);
lean_dec_ref(v_associated_217_);
v___x_219_ = lean_unsigned_to_nat(0u);
v___x_220_ = lean_array_get_size(v_buckets_218_);
v___x_221_ = lean_box(0);
v___x_222_ = lean_nat_dec_lt(v___x_219_, v___x_220_);
if (v___x_222_ == 0)
{
lean_object* v___x_224_; 
lean_dec_ref(v_buckets_218_);
if (v_isShared_213_ == 0)
{
lean_ctor_set_tag(v___x_212_, 0);
lean_ctor_set(v___x_212_, 0, v___x_221_);
v___x_224_ = v___x_212_;
goto v_reusejp_223_;
}
else
{
lean_object* v_reuseFailAlloc_225_; 
v_reuseFailAlloc_225_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_225_, 0, v___x_221_);
v___x_224_ = v_reuseFailAlloc_225_;
goto v_reusejp_223_;
}
v_reusejp_223_:
{
return v___x_224_;
}
}
else
{
size_t v___x_226_; size_t v___x_227_; lean_object* v___x_228_; 
lean_del_object(v___x_212_);
v___x_226_ = ((size_t)0ULL);
v___x_227_ = lean_usize_of_nat(v___x_220_);
v___x_228_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__3(v_buckets_218_, v___x_226_, v___x_227_, v___x_221_, v___y_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_, v___y_206_);
lean_dec_ref(v_buckets_218_);
return v___x_228_;
}
}
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; 
lean_dec(v___x_209_);
v___x_230_ = lean_box(0);
v___x_231_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_231_, 0, v___x_230_);
return v___x_231_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__0(lean_object* v_x_232_, lean_object* v_x_233_, lean_object* v___y_234_, lean_object* v___y_235_, lean_object* v___y_236_, lean_object* v___y_237_, lean_object* v___y_238_, lean_object* v___y_239_){
_start:
{
if (lean_obj_tag(v_x_233_) == 0)
{
lean_object* v___x_241_; 
v___x_241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_241_, 0, v_x_232_);
return v___x_241_;
}
else
{
lean_object* v_key_242_; lean_object* v_tail_243_; lean_object* v___x_244_; 
v_key_242_ = lean_ctor_get(v_x_233_, 0);
v_tail_243_ = lean_ctor_get(v_x_233_, 2);
v___x_244_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(v_key_242_, v___y_234_, v___y_235_, v___y_236_, v___y_237_, v___y_238_, v___y_239_);
if (lean_obj_tag(v___x_244_) == 0)
{
lean_object* v_a_245_; 
v_a_245_ = lean_ctor_get(v___x_244_, 0);
lean_inc(v_a_245_);
lean_dec_ref_known(v___x_244_, 1);
v_x_232_ = v_a_245_;
v_x_233_ = v_tail_243_;
goto _start;
}
else
{
return v___x_244_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__0___boxed(lean_object* v_x_247_, lean_object* v_x_248_, lean_object* v___y_249_, lean_object* v___y_250_, lean_object* v___y_251_, lean_object* v___y_252_, lean_object* v___y_253_, lean_object* v___y_254_, lean_object* v___y_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__0(v_x_247_, v_x_248_, v___y_249_, v___y_250_, v___y_251_, v___y_252_, v___y_253_, v___y_254_);
lean_dec(v___y_254_);
lean_dec_ref(v___y_253_);
lean_dec(v___y_252_);
lean_dec_ref(v___y_251_);
lean_dec(v___y_250_);
lean_dec_ref(v___y_249_);
lean_dec(v_x_248_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__3___boxed(lean_object* v_as_257_, lean_object* v_i_258_, lean_object* v_stop_259_, lean_object* v_b_260_, lean_object* v___y_261_, lean_object* v___y_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
size_t v_i_boxed_268_; size_t v_stop_boxed_269_; lean_object* v_res_270_; 
v_i_boxed_268_ = lean_unbox_usize(v_i_258_);
lean_dec(v_i_258_);
v_stop_boxed_269_ = lean_unbox_usize(v_stop_259_);
lean_dec(v_stop_259_);
v_res_270_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__3(v_as_257_, v_i_boxed_268_, v_stop_boxed_269_, v_b_260_, v___y_261_, v___y_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
lean_dec(v___y_262_);
lean_dec_ref(v___y_261_);
lean_dec_ref(v_as_257_);
return v_res_270_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate___boxed(lean_object* v_fvarId_271_, lean_object* v___y_272_, lean_object* v___y_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(v_fvarId_271_, v___y_272_, v___y_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
lean_dec(v___y_277_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v___y_274_);
lean_dec(v___y_273_);
lean_dec_ref(v___y_272_);
lean_dec(v_fvarId_271_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1(lean_object* v_00_u03b2_280_, lean_object* v_m_281_, lean_object* v_a_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(v_m_281_, v_a_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___boxed(lean_object* v_00_u03b2_284_, lean_object* v_m_285_, lean_object* v_a_286_){
_start:
{
lean_object* v_res_287_; 
v_res_287_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1(v_00_u03b2_284_, v_m_285_, v_a_286_);
lean_dec(v_a_286_);
lean_dec_ref(v_m_285_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2(lean_object* v_00_u03b2_288_, lean_object* v_m_289_, lean_object* v_a_290_){
_start:
{
lean_object* v___x_291_; 
v___x_291_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg(v_m_289_, v_a_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___boxed(lean_object* v_00_u03b2_292_, lean_object* v_m_293_, lean_object* v_a_294_){
_start:
{
lean_object* v_res_295_; 
v_res_295_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2(v_00_u03b2_292_, v_m_293_, v_a_294_);
lean_dec(v_a_294_);
return v_res_295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1(lean_object* v_00_u03b2_296_, lean_object* v_a_297_, lean_object* v_x_298_){
_start:
{
lean_object* v___x_299_; 
v___x_299_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___redArg(v_a_297_, v_x_298_);
return v___x_299_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1___boxed(lean_object* v_00_u03b2_300_, lean_object* v_a_301_, lean_object* v_x_302_){
_start:
{
lean_object* v_res_303_; 
v_res_303_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1_spec__1(v_00_u03b2_300_, v_a_301_, v_x_302_);
lean_dec(v_x_302_);
lean_dec(v_a_301_);
return v_res_303_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3(lean_object* v_00_u03b2_304_, lean_object* v_a_305_, lean_object* v_x_306_){
_start:
{
uint8_t v___x_307_; 
v___x_307_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(v_a_305_, v_x_306_);
return v___x_307_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___boxed(lean_object* v_00_u03b2_308_, lean_object* v_a_309_, lean_object* v_x_310_){
_start:
{
uint8_t v_res_311_; lean_object* v_r_312_; 
v_res_311_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3(v_00_u03b2_308_, v_a_309_, v_x_310_);
lean_dec(v_x_310_);
lean_dec(v_a_309_);
v_r_312_ = lean_box(v_res_311_);
return v_r_312_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4(lean_object* v_00_u03b2_313_, lean_object* v_a_314_, lean_object* v_x_315_){
_start:
{
lean_object* v___x_316_; 
v___x_316_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___redArg(v_a_314_, v_x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4___boxed(lean_object* v_00_u03b2_317_, lean_object* v_a_318_, lean_object* v_x_319_){
_start:
{
lean_object* v_res_320_; 
v_res_320_ = l_Std_DHashMap_Internal_AssocList_erase___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__4(v_00_u03b2_317_, v_a_318_, v_x_319_);
lean_dec(v_a_318_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1(lean_object* v_msg_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_, lean_object* v___y_336_, lean_object* v___y_337_){
_start:
{
lean_object* v___f_339_; lean_object* v___f_340_; lean_object* v___f_341_; lean_object* v___f_342_; lean_object* v___f_343_; lean_object* v___f_344_; lean_object* v___f_345_; lean_object* v___f_346_; lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v_toApplicative_351_; lean_object* v___x_353_; uint8_t v_isShared_354_; uint8_t v_isSharedCheck_414_; 
v___f_339_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__0));
v___f_340_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__1));
v___f_341_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__2));
v___f_342_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__3));
v___f_343_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__4));
v___f_344_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_344_, 0, v___f_343_);
lean_closure_set(v___f_344_, 1, v___f_342_);
v___f_345_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_345_, 0, v___f_342_);
v___f_346_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__5));
v___x_347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_347_, 0, v___f_339_);
lean_ctor_set(v___x_347_, 1, v___f_340_);
v___x_348_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
lean_ctor_set(v___x_348_, 1, v___f_341_);
lean_ctor_set(v___x_348_, 2, v___f_344_);
lean_ctor_set(v___x_348_, 3, v___f_345_);
lean_ctor_set(v___x_348_, 4, v___f_346_);
v___x_349_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_348_);
lean_ctor_set(v___x_349_, 1, v___f_342_);
v___x_350_ = l_StateRefT_x27_instMonad___redArg(v___x_349_);
v_toApplicative_351_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_414_ == 0)
{
lean_object* v_unused_415_; 
v_unused_415_ = lean_ctor_get(v___x_350_, 1);
lean_dec(v_unused_415_);
v___x_353_ = v___x_350_;
v_isShared_354_ = v_isSharedCheck_414_;
goto v_resetjp_352_;
}
else
{
lean_inc(v_toApplicative_351_);
lean_dec(v___x_350_);
v___x_353_ = lean_box(0);
v_isShared_354_ = v_isSharedCheck_414_;
goto v_resetjp_352_;
}
v_resetjp_352_:
{
lean_object* v_toFunctor_355_; lean_object* v_toSeq_356_; lean_object* v_toSeqLeft_357_; lean_object* v_toSeqRight_358_; lean_object* v___x_360_; uint8_t v_isShared_361_; uint8_t v_isSharedCheck_412_; 
v_toFunctor_355_ = lean_ctor_get(v_toApplicative_351_, 0);
v_toSeq_356_ = lean_ctor_get(v_toApplicative_351_, 2);
v_toSeqLeft_357_ = lean_ctor_get(v_toApplicative_351_, 3);
v_toSeqRight_358_ = lean_ctor_get(v_toApplicative_351_, 4);
v_isSharedCheck_412_ = !lean_is_exclusive(v_toApplicative_351_);
if (v_isSharedCheck_412_ == 0)
{
lean_object* v_unused_413_; 
v_unused_413_ = lean_ctor_get(v_toApplicative_351_, 1);
lean_dec(v_unused_413_);
v___x_360_ = v_toApplicative_351_;
v_isShared_361_ = v_isSharedCheck_412_;
goto v_resetjp_359_;
}
else
{
lean_inc(v_toSeqRight_358_);
lean_inc(v_toSeqLeft_357_);
lean_inc(v_toSeq_356_);
lean_inc(v_toFunctor_355_);
lean_dec(v_toApplicative_351_);
v___x_360_ = lean_box(0);
v_isShared_361_ = v_isSharedCheck_412_;
goto v_resetjp_359_;
}
v_resetjp_359_:
{
lean_object* v___f_362_; lean_object* v___f_363_; lean_object* v___f_364_; lean_object* v___f_365_; lean_object* v___x_366_; lean_object* v___f_367_; lean_object* v___f_368_; lean_object* v___f_369_; lean_object* v___x_371_; 
v___f_362_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__6));
v___f_363_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__7));
lean_inc_ref(v_toFunctor_355_);
v___f_364_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_364_, 0, v_toFunctor_355_);
v___f_365_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_365_, 0, v_toFunctor_355_);
v___x_366_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_366_, 0, v___f_364_);
lean_ctor_set(v___x_366_, 1, v___f_365_);
v___f_367_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_367_, 0, v_toSeqRight_358_);
v___f_368_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_368_, 0, v_toSeqLeft_357_);
v___f_369_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_369_, 0, v_toSeq_356_);
if (v_isShared_361_ == 0)
{
lean_ctor_set(v___x_360_, 4, v___f_367_);
lean_ctor_set(v___x_360_, 3, v___f_368_);
lean_ctor_set(v___x_360_, 2, v___f_369_);
lean_ctor_set(v___x_360_, 1, v___f_362_);
lean_ctor_set(v___x_360_, 0, v___x_366_);
v___x_371_ = v___x_360_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v___f_362_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v___f_369_);
lean_ctor_set(v_reuseFailAlloc_411_, 3, v___f_368_);
lean_ctor_set(v_reuseFailAlloc_411_, 4, v___f_367_);
v___x_371_ = v_reuseFailAlloc_411_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
lean_object* v___x_373_; 
if (v_isShared_354_ == 0)
{
lean_ctor_set(v___x_353_, 1, v___f_363_);
lean_ctor_set(v___x_353_, 0, v___x_371_);
v___x_373_ = v___x_353_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_410_, 1, v___f_363_);
v___x_373_ = v_reuseFailAlloc_410_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_374_; lean_object* v_toApplicative_375_; lean_object* v___x_377_; uint8_t v_isShared_378_; uint8_t v_isSharedCheck_408_; 
v___x_374_ = l_StateRefT_x27_instMonad___redArg(v___x_373_);
v_toApplicative_375_ = lean_ctor_get(v___x_374_, 0);
v_isSharedCheck_408_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_408_ == 0)
{
lean_object* v_unused_409_; 
v_unused_409_ = lean_ctor_get(v___x_374_, 1);
lean_dec(v_unused_409_);
v___x_377_ = v___x_374_;
v_isShared_378_ = v_isSharedCheck_408_;
goto v_resetjp_376_;
}
else
{
lean_inc(v_toApplicative_375_);
lean_dec(v___x_374_);
v___x_377_ = lean_box(0);
v_isShared_378_ = v_isSharedCheck_408_;
goto v_resetjp_376_;
}
v_resetjp_376_:
{
lean_object* v_toFunctor_379_; lean_object* v_toSeq_380_; lean_object* v_toSeqLeft_381_; lean_object* v_toSeqRight_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_406_; 
v_toFunctor_379_ = lean_ctor_get(v_toApplicative_375_, 0);
v_toSeq_380_ = lean_ctor_get(v_toApplicative_375_, 2);
v_toSeqLeft_381_ = lean_ctor_get(v_toApplicative_375_, 3);
v_toSeqRight_382_ = lean_ctor_get(v_toApplicative_375_, 4);
v_isSharedCheck_406_ = !lean_is_exclusive(v_toApplicative_375_);
if (v_isSharedCheck_406_ == 0)
{
lean_object* v_unused_407_; 
v_unused_407_ = lean_ctor_get(v_toApplicative_375_, 1);
lean_dec(v_unused_407_);
v___x_384_ = v_toApplicative_375_;
v_isShared_385_ = v_isSharedCheck_406_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_toSeqRight_382_);
lean_inc(v_toSeqLeft_381_);
lean_inc(v_toSeq_380_);
lean_inc(v_toFunctor_379_);
lean_dec(v_toApplicative_375_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_406_;
goto v_resetjp_383_;
}
v_resetjp_383_:
{
lean_object* v___f_386_; lean_object* v___f_387_; lean_object* v___f_388_; lean_object* v___f_389_; lean_object* v___x_390_; lean_object* v___f_391_; lean_object* v___f_392_; lean_object* v___f_393_; lean_object* v___x_395_; 
v___f_386_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__8));
v___f_387_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__9));
lean_inc_ref(v_toFunctor_379_);
v___f_388_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_388_, 0, v_toFunctor_379_);
v___f_389_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_389_, 0, v_toFunctor_379_);
v___x_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_390_, 0, v___f_388_);
lean_ctor_set(v___x_390_, 1, v___f_389_);
v___f_391_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_391_, 0, v_toSeqRight_382_);
v___f_392_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_392_, 0, v_toSeqLeft_381_);
v___f_393_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_393_, 0, v_toSeq_380_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 4, v___f_391_);
lean_ctor_set(v___x_384_, 3, v___f_392_);
lean_ctor_set(v___x_384_, 2, v___f_393_);
lean_ctor_set(v___x_384_, 1, v___f_386_);
lean_ctor_set(v___x_384_, 0, v___x_390_);
v___x_395_ = v___x_384_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_405_, 1, v___f_386_);
lean_ctor_set(v_reuseFailAlloc_405_, 2, v___f_393_);
lean_ctor_set(v_reuseFailAlloc_405_, 3, v___f_392_);
lean_ctor_set(v_reuseFailAlloc_405_, 4, v___f_391_);
v___x_395_ = v_reuseFailAlloc_405_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
lean_object* v___x_397_; 
if (v_isShared_378_ == 0)
{
lean_ctor_set(v___x_377_, 1, v___f_387_);
lean_ctor_set(v___x_377_, 0, v___x_395_);
v___x_397_ = v___x_377_;
goto v_reusejp_396_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v___x_395_);
lean_ctor_set(v_reuseFailAlloc_404_, 1, v___f_387_);
v___x_397_ = v_reuseFailAlloc_404_;
goto v_reusejp_396_;
}
v_reusejp_396_:
{
lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_1080__overap_402_; lean_object* v___x_403_; 
v___x_398_ = l_StateRefT_x27_instMonad___redArg(v___x_397_);
v___x_399_ = l_ReaderT_instMonad___redArg(v___x_398_);
v___x_400_ = lean_box(0);
v___x_401_ = l_instInhabitedOfMonad___redArg(v___x_399_, v___x_400_);
v___x_1080__overap_402_ = lean_panic_fn_borrowed(v___x_401_, v_msg_331_);
lean_dec(v___x_401_);
lean_inc(v___y_337_);
lean_inc_ref(v___y_336_);
lean_inc(v___y_335_);
lean_inc_ref(v___y_334_);
lean_inc(v___y_333_);
lean_inc_ref(v___y_332_);
v___x_403_ = lean_apply_7(v___x_1080__overap_402_, v___y_332_, v___y_333_, v___y_334_, v___y_335_, v___y_336_, v___y_337_, lean_box(0));
return v___x_403_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___boxed(lean_object* v_msg_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1(v_msg_416_, v___y_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_);
lean_dec(v___y_422_);
lean_dec_ref(v___y_421_);
lean_dec(v___y_420_);
lean_dec_ref(v___y_419_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
return v_res_424_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; 
v___x_428_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__2));
v___x_429_ = lean_unsigned_to_nat(40u);
v___x_430_ = lean_unsigned_to_nat(49u);
v___x_431_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__1));
v___x_432_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__0));
v___x_433_ = l_mkPanicMessageWithDecl(v___x_432_, v___x_431_, v___x_430_, v___x_429_, v___x_428_);
return v___x_433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0(lean_object* v_f_434_, lean_object* v_e_435_, lean_object* v___y_436_, lean_object* v___y_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_){
_start:
{
lean_object* v_ty_444_; lean_object* v_body_445_; uint8_t v___x_448_; 
v___x_448_ = l_Lean_Expr_hasFVar(v_e_435_);
if (v___x_448_ == 0)
{
lean_object* v___x_449_; lean_object* v___x_450_; 
lean_dec_ref(v_e_435_);
lean_dec_ref(v_f_434_);
v___x_449_ = lean_box(0);
v___x_450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
return v___x_450_;
}
else
{
switch(lean_obj_tag(v_e_435_))
{
case 1:
{
lean_object* v_fvarId_451_; lean_object* v___x_452_; 
v_fvarId_451_ = lean_ctor_get(v_e_435_, 0);
lean_inc(v_fvarId_451_);
lean_dec_ref_known(v_e_435_, 1);
lean_inc(v___y_441_);
lean_inc_ref(v___y_440_);
lean_inc(v___y_439_);
lean_inc_ref(v___y_438_);
lean_inc(v___y_437_);
lean_inc_ref(v___y_436_);
v___x_452_ = lean_apply_8(v_f_434_, v_fvarId_451_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_, lean_box(0));
return v___x_452_;
}
case 2:
{
lean_object* v___x_453_; lean_object* v___x_454_; 
lean_dec_ref_known(v_e_435_, 1);
lean_dec_ref(v_f_434_);
v___x_453_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3);
v___x_454_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1(v___x_453_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_454_;
}
case 5:
{
lean_object* v_fn_455_; lean_object* v_arg_456_; lean_object* v___x_457_; 
v_fn_455_ = lean_ctor_get(v_e_435_, 0);
lean_inc_ref(v_fn_455_);
v_arg_456_ = lean_ctor_get(v_e_435_, 1);
lean_inc_ref(v_arg_456_);
lean_dec_ref_known(v_e_435_, 2);
lean_inc_ref(v_f_434_);
v___x_457_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0(v_f_434_, v_fn_455_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_457_) == 0)
{
lean_dec_ref_known(v___x_457_, 1);
v_e_435_ = v_arg_456_;
goto _start;
}
else
{
lean_dec_ref(v_arg_456_);
lean_dec_ref(v_f_434_);
return v___x_457_;
}
}
case 6:
{
lean_object* v_binderType_459_; lean_object* v_body_460_; 
v_binderType_459_ = lean_ctor_get(v_e_435_, 1);
lean_inc_ref(v_binderType_459_);
v_body_460_ = lean_ctor_get(v_e_435_, 2);
lean_inc_ref(v_body_460_);
lean_dec_ref_known(v_e_435_, 3);
v_ty_444_ = v_binderType_459_;
v_body_445_ = v_body_460_;
goto v___jp_443_;
}
case 7:
{
lean_object* v_binderType_461_; lean_object* v_body_462_; 
v_binderType_461_ = lean_ctor_get(v_e_435_, 1);
lean_inc_ref(v_binderType_461_);
v_body_462_ = lean_ctor_get(v_e_435_, 2);
lean_inc_ref(v_body_462_);
lean_dec_ref_known(v_e_435_, 3);
v_ty_444_ = v_binderType_461_;
v_body_445_ = v_body_462_;
goto v___jp_443_;
}
case 8:
{
lean_object* v___x_463_; lean_object* v___x_464_; 
lean_dec_ref_known(v_e_435_, 4);
lean_dec_ref(v_f_434_);
v___x_463_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3);
v___x_464_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1(v___x_463_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_464_;
}
case 11:
{
lean_object* v___x_465_; lean_object* v___x_466_; 
lean_dec_ref_known(v_e_435_, 3);
lean_dec_ref(v_f_434_);
v___x_465_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3);
v___x_466_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1(v___x_465_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
return v___x_466_;
}
default: 
{
lean_object* v___x_467_; lean_object* v___x_468_; 
lean_dec_ref(v_e_435_);
lean_dec_ref(v_f_434_);
v___x_467_ = lean_box(0);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
return v___x_468_;
}
}
}
v___jp_443_:
{
lean_object* v___x_446_; 
lean_inc_ref(v_f_434_);
v___x_446_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0(v_f_434_, v_ty_444_, v___y_436_, v___y_437_, v___y_438_, v___y_439_, v___y_440_, v___y_441_);
if (lean_obj_tag(v___x_446_) == 0)
{
lean_dec_ref_known(v___x_446_, 1);
v_e_435_ = v_body_445_;
goto _start;
}
else
{
lean_dec_ref(v_body_445_);
lean_dec_ref(v_f_434_);
return v___x_446_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___boxed(lean_object* v_f_469_, lean_object* v_e_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0(v_f_469_, v_e_470_, v___y_471_, v___y_472_, v___y_473_, v___y_474_, v___y_475_, v___y_476_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
lean_dec(v___y_474_);
lean_dec_ref(v___y_473_);
lean_dec(v___y_472_);
lean_dec_ref(v___y_471_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg(lean_object* v_f_479_, lean_object* v_arg_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_){
_start:
{
switch(lean_obj_tag(v_arg_480_))
{
case 0:
{
lean_object* v___x_488_; lean_object* v___x_489_; 
lean_dec_ref(v_f_479_);
v___x_488_ = lean_box(0);
v___x_489_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_489_, 0, v___x_488_);
return v___x_489_;
}
case 1:
{
lean_object* v_fvarId_490_; lean_object* v___x_491_; 
v_fvarId_490_ = lean_ctor_get(v_arg_480_, 0);
lean_inc(v_fvarId_490_);
lean_dec_ref_known(v_arg_480_, 1);
lean_inc(v___y_486_);
lean_inc_ref(v___y_485_);
lean_inc(v___y_484_);
lean_inc_ref(v___y_483_);
lean_inc(v___y_482_);
lean_inc_ref(v___y_481_);
v___x_491_ = lean_apply_8(v_f_479_, v_fvarId_490_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, lean_box(0));
return v___x_491_;
}
default: 
{
lean_object* v_expr_492_; lean_object* v___x_493_; 
v_expr_492_ = lean_ctor_get(v_arg_480_, 0);
lean_inc_ref(v_expr_492_);
lean_dec_ref_known(v_arg_480_, 1);
v___x_493_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0(v_f_479_, v_expr_492_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_);
return v___x_493_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg___boxed(lean_object* v_f_494_, lean_object* v_arg_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_){
_start:
{
lean_object* v_res_503_; 
v_res_503_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg(v_f_494_, v_arg_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_);
lean_dec(v___y_501_);
lean_dec_ref(v___y_500_);
lean_dec(v___y_499_);
lean_dec_ref(v___y_498_);
lean_dec(v___y_497_);
lean_dec_ref(v___y_496_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg(lean_object* v_a_505_, lean_object* v___y_506_, lean_object* v___y_507_, lean_object* v___y_508_, lean_object* v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_){
_start:
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg___closed__0));
v___x_514_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg(v___x_513_, v_a_505_, v___y_506_, v___y_507_, v___y_508_, v___y_509_, v___y_510_, v___y_511_);
return v___x_514_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg___boxed(lean_object* v_a_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_){
_start:
{
lean_object* v_res_523_; 
v_res_523_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg(v_a_515_, v___y_516_, v___y_517_, v___y_518_, v___y_519_, v___y_520_, v___y_521_);
lean_dec(v___y_521_);
lean_dec_ref(v___y_520_);
lean_dec(v___y_519_);
lean_dec_ref(v___y_518_);
lean_dec(v___y_517_);
lean_dec_ref(v___y_516_);
return v_res_523_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0(uint8_t v_pu_524_, lean_object* v_f_525_, lean_object* v_arg_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, lean_object* v___y_531_, lean_object* v___y_532_){
_start:
{
lean_object* v___x_534_; 
v___x_534_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg(v_f_525_, v_arg_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_, v___y_531_, v___y_532_);
return v___x_534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___boxed(lean_object* v_pu_535_, lean_object* v_f_536_, lean_object* v_arg_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_){
_start:
{
uint8_t v_pu_boxed_545_; lean_object* v_res_546_; 
v_pu_boxed_545_ = lean_unbox(v_pu_535_);
v_res_546_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0(v_pu_boxed_545_, v_f_536_, v_arg_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
lean_dec(v___y_541_);
lean_dec_ref(v___y_540_);
lean_dec(v___y_539_);
lean_dec_ref(v___y_538_);
return v_res_546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(lean_object* v_f_547_, lean_object* v_as_548_, size_t v_i_549_, size_t v_stop_550_, lean_object* v_b_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
uint8_t v___x_559_; 
v___x_559_ = lean_usize_dec_eq(v_i_549_, v_stop_550_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_560_ = lean_array_uget_borrowed(v_as_548_, v_i_549_);
lean_inc(v___x_560_);
lean_inc_ref(v_f_547_);
v___x_561_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0___redArg(v_f_547_, v___x_560_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
if (lean_obj_tag(v___x_561_) == 0)
{
lean_object* v_a_562_; size_t v___x_563_; size_t v___x_564_; 
v_a_562_ = lean_ctor_get(v___x_561_, 0);
lean_inc(v_a_562_);
lean_dec_ref_known(v___x_561_, 1);
v___x_563_ = ((size_t)1ULL);
v___x_564_ = lean_usize_add(v_i_549_, v___x_563_);
v_i_549_ = v___x_564_;
v_b_551_ = v_a_562_;
goto _start;
}
else
{
lean_dec_ref(v_f_547_);
return v___x_561_;
}
}
else
{
lean_object* v___x_566_; 
lean_dec_ref(v_f_547_);
v___x_566_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_566_, 0, v_b_551_);
return v___x_566_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg___boxed(lean_object* v_f_567_, lean_object* v_as_568_, lean_object* v_i_569_, lean_object* v_stop_570_, lean_object* v_b_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
size_t v_i_boxed_579_; size_t v_stop_boxed_580_; lean_object* v_res_581_; 
v_i_boxed_579_ = lean_unbox_usize(v_i_569_);
lean_dec(v_i_569_);
v_stop_boxed_580_ = lean_unbox_usize(v_stop_570_);
lean_dec(v_stop_570_);
v_res_581_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(v_f_567_, v_as_568_, v_i_boxed_579_, v_stop_boxed_580_, v_b_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec_ref(v_as_568_);
return v_res_581_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0(uint8_t v_pu_582_, lean_object* v_f_583_, lean_object* v_e_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_){
_start:
{
lean_object* v_args_593_; 
switch(lean_obj_tag(v_e_584_))
{
case 2:
{
lean_object* v_struct_602_; lean_object* v___x_603_; 
v_struct_602_ = lean_ctor_get(v_e_584_, 2);
lean_inc(v_struct_602_);
lean_dec_ref_known(v_e_584_, 3);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_603_ = lean_apply_8(v_f_583_, v_struct_602_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_603_;
}
case 3:
{
lean_object* v_args_604_; lean_object* v___x_605_; lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v_args_604_ = lean_ctor_get(v_e_584_, 2);
lean_inc_ref(v_args_604_);
lean_dec_ref_known(v_e_584_, 3);
v___x_605_ = lean_unsigned_to_nat(0u);
v___x_606_ = lean_array_get_size(v_args_604_);
v___x_607_ = lean_box(0);
v___x_608_ = lean_nat_dec_lt(v___x_605_, v___x_606_);
if (v___x_608_ == 0)
{
lean_object* v___x_609_; 
lean_dec_ref(v_args_604_);
lean_dec_ref(v_f_583_);
v___x_609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_609_, 0, v___x_607_);
return v___x_609_;
}
else
{
size_t v___x_610_; size_t v___x_611_; lean_object* v___x_612_; 
v___x_610_ = ((size_t)0ULL);
v___x_611_ = lean_usize_of_nat(v___x_606_);
v___x_612_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(v_f_583_, v_args_604_, v___x_610_, v___x_611_, v___x_607_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec_ref(v_args_604_);
return v___x_612_;
}
}
case 4:
{
lean_object* v_fvarId_613_; lean_object* v_args_614_; lean_object* v___x_615_; 
v_fvarId_613_ = lean_ctor_get(v_e_584_, 0);
lean_inc(v_fvarId_613_);
v_args_614_ = lean_ctor_get(v_e_584_, 1);
lean_inc_ref(v_args_614_);
lean_dec_ref_known(v_e_584_, 2);
lean_inc_ref(v_f_583_);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_615_ = lean_apply_8(v_f_583_, v_fvarId_613_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
if (lean_obj_tag(v___x_615_) == 0)
{
lean_object* v___x_617_; uint8_t v_isShared_618_; uint8_t v_isSharedCheck_629_; 
v_isSharedCheck_629_ = !lean_is_exclusive(v___x_615_);
if (v_isSharedCheck_629_ == 0)
{
lean_object* v_unused_630_; 
v_unused_630_ = lean_ctor_get(v___x_615_, 0);
lean_dec(v_unused_630_);
v___x_617_ = v___x_615_;
v_isShared_618_ = v_isSharedCheck_629_;
goto v_resetjp_616_;
}
else
{
lean_dec(v___x_615_);
v___x_617_ = lean_box(0);
v_isShared_618_ = v_isSharedCheck_629_;
goto v_resetjp_616_;
}
v_resetjp_616_:
{
lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_619_ = lean_unsigned_to_nat(0u);
v___x_620_ = lean_array_get_size(v_args_614_);
v___x_621_ = lean_box(0);
v___x_622_ = lean_nat_dec_lt(v___x_619_, v___x_620_);
if (v___x_622_ == 0)
{
lean_object* v___x_624_; 
lean_dec_ref(v_args_614_);
lean_dec_ref(v_f_583_);
if (v_isShared_618_ == 0)
{
lean_ctor_set(v___x_617_, 0, v___x_621_);
v___x_624_ = v___x_617_;
goto v_reusejp_623_;
}
else
{
lean_object* v_reuseFailAlloc_625_; 
v_reuseFailAlloc_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_625_, 0, v___x_621_);
v___x_624_ = v_reuseFailAlloc_625_;
goto v_reusejp_623_;
}
v_reusejp_623_:
{
return v___x_624_;
}
}
else
{
size_t v___x_626_; size_t v___x_627_; lean_object* v___x_628_; 
lean_del_object(v___x_617_);
v___x_626_ = ((size_t)0ULL);
v___x_627_ = lean_usize_of_nat(v___x_620_);
v___x_628_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(v_f_583_, v_args_614_, v___x_626_, v___x_627_, v___x_621_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec_ref(v_args_614_);
return v___x_628_;
}
}
}
else
{
lean_dec_ref(v_args_614_);
lean_dec_ref(v_f_583_);
return v___x_615_;
}
}
case 5:
{
lean_object* v_args_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; uint8_t v___x_635_; 
v_args_631_ = lean_ctor_get(v_e_584_, 1);
lean_inc_ref(v_args_631_);
lean_dec_ref_known(v_e_584_, 2);
v___x_632_ = lean_unsigned_to_nat(0u);
v___x_633_ = lean_array_get_size(v_args_631_);
v___x_634_ = lean_box(0);
v___x_635_ = lean_nat_dec_lt(v___x_632_, v___x_633_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; 
lean_dec_ref(v_args_631_);
lean_dec_ref(v_f_583_);
v___x_636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_636_, 0, v___x_634_);
return v___x_636_;
}
else
{
size_t v___x_637_; size_t v___x_638_; lean_object* v___x_639_; 
v___x_637_ = ((size_t)0ULL);
v___x_638_ = lean_usize_of_nat(v___x_633_);
v___x_639_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(v_f_583_, v_args_631_, v___x_637_, v___x_638_, v___x_634_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec_ref(v_args_631_);
return v___x_639_;
}
}
case 6:
{
lean_object* v_var_640_; lean_object* v___x_641_; 
v_var_640_ = lean_ctor_get(v_e_584_, 1);
lean_inc(v_var_640_);
lean_dec_ref_known(v_e_584_, 2);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_641_ = lean_apply_8(v_f_583_, v_var_640_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_641_;
}
case 7:
{
lean_object* v_var_642_; lean_object* v___x_643_; 
v_var_642_ = lean_ctor_get(v_e_584_, 1);
lean_inc(v_var_642_);
lean_dec_ref_known(v_e_584_, 2);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_643_ = lean_apply_8(v_f_583_, v_var_642_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_643_;
}
case 8:
{
lean_object* v_var_644_; lean_object* v___x_645_; 
v_var_644_ = lean_ctor_get(v_e_584_, 2);
lean_inc(v_var_644_);
lean_dec_ref_known(v_e_584_, 3);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_645_ = lean_apply_8(v_f_583_, v_var_644_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_645_;
}
case 9:
{
lean_object* v_args_646_; 
v_args_646_ = lean_ctor_get(v_e_584_, 1);
lean_inc_ref(v_args_646_);
lean_dec_ref_known(v_e_584_, 2);
v_args_593_ = v_args_646_;
goto v___jp_592_;
}
case 10:
{
lean_object* v_args_647_; 
v_args_647_ = lean_ctor_get(v_e_584_, 1);
lean_inc_ref(v_args_647_);
lean_dec_ref_known(v_e_584_, 2);
v_args_593_ = v_args_647_;
goto v___jp_592_;
}
case 11:
{
lean_object* v_var_648_; lean_object* v___x_649_; 
v_var_648_ = lean_ctor_get(v_e_584_, 1);
lean_inc(v_var_648_);
lean_dec_ref_known(v_e_584_, 2);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_649_ = lean_apply_8(v_f_583_, v_var_648_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_649_;
}
case 12:
{
lean_object* v_var_650_; lean_object* v_args_651_; lean_object* v___x_652_; 
v_var_650_ = lean_ctor_get(v_e_584_, 0);
lean_inc(v_var_650_);
v_args_651_ = lean_ctor_get(v_e_584_, 2);
lean_inc_ref(v_args_651_);
lean_dec_ref_known(v_e_584_, 3);
lean_inc_ref(v_f_583_);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_652_ = lean_apply_8(v_f_583_, v_var_650_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
if (lean_obj_tag(v___x_652_) == 0)
{
lean_object* v___x_654_; uint8_t v_isShared_655_; uint8_t v_isSharedCheck_666_; 
v_isSharedCheck_666_ = !lean_is_exclusive(v___x_652_);
if (v_isSharedCheck_666_ == 0)
{
lean_object* v_unused_667_; 
v_unused_667_ = lean_ctor_get(v___x_652_, 0);
lean_dec(v_unused_667_);
v___x_654_ = v___x_652_;
v_isShared_655_ = v_isSharedCheck_666_;
goto v_resetjp_653_;
}
else
{
lean_dec(v___x_652_);
v___x_654_ = lean_box(0);
v_isShared_655_ = v_isSharedCheck_666_;
goto v_resetjp_653_;
}
v_resetjp_653_:
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = lean_array_get_size(v_args_651_);
v___x_658_ = lean_box(0);
v___x_659_ = lean_nat_dec_lt(v___x_656_, v___x_657_);
if (v___x_659_ == 0)
{
lean_object* v___x_661_; 
lean_dec_ref(v_args_651_);
lean_dec_ref(v_f_583_);
if (v_isShared_655_ == 0)
{
lean_ctor_set(v___x_654_, 0, v___x_658_);
v___x_661_ = v___x_654_;
goto v_reusejp_660_;
}
else
{
lean_object* v_reuseFailAlloc_662_; 
v_reuseFailAlloc_662_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_662_, 0, v___x_658_);
v___x_661_ = v_reuseFailAlloc_662_;
goto v_reusejp_660_;
}
v_reusejp_660_:
{
return v___x_661_;
}
}
else
{
size_t v___x_663_; size_t v___x_664_; lean_object* v___x_665_; 
lean_del_object(v___x_654_);
v___x_663_ = ((size_t)0ULL);
v___x_664_ = lean_usize_of_nat(v___x_657_);
v___x_665_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(v_f_583_, v_args_651_, v___x_663_, v___x_664_, v___x_658_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec_ref(v_args_651_);
return v___x_665_;
}
}
}
else
{
lean_dec_ref(v_args_651_);
lean_dec_ref(v_f_583_);
return v___x_652_;
}
}
case 13:
{
lean_object* v_fvarId_668_; lean_object* v___x_669_; 
v_fvarId_668_ = lean_ctor_get(v_e_584_, 1);
lean_inc(v_fvarId_668_);
lean_dec_ref_known(v_e_584_, 2);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_669_ = lean_apply_8(v_f_583_, v_fvarId_668_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_669_;
}
case 14:
{
lean_object* v_fvarId_670_; lean_object* v___x_671_; 
v_fvarId_670_ = lean_ctor_get(v_e_584_, 0);
lean_inc(v_fvarId_670_);
lean_dec_ref_known(v_e_584_, 1);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_671_ = lean_apply_8(v_f_583_, v_fvarId_670_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_671_;
}
case 15:
{
lean_object* v_fvarId_672_; lean_object* v___x_673_; 
v_fvarId_672_ = lean_ctor_get(v_e_584_, 0);
lean_inc(v_fvarId_672_);
lean_dec_ref_known(v_e_584_, 1);
lean_inc(v___y_590_);
lean_inc_ref(v___y_589_);
lean_inc(v___y_588_);
lean_inc_ref(v___y_587_);
lean_inc(v___y_586_);
lean_inc_ref(v___y_585_);
v___x_673_ = lean_apply_8(v_f_583_, v_fvarId_672_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, lean_box(0));
return v___x_673_;
}
default: 
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec(v_e_584_);
lean_dec_ref(v_f_583_);
v___x_674_ = lean_box(0);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
v___jp_592_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; uint8_t v___x_597_; 
v___x_594_ = lean_unsigned_to_nat(0u);
v___x_595_ = lean_array_get_size(v_args_593_);
v___x_596_ = lean_box(0);
v___x_597_ = lean_nat_dec_lt(v___x_594_, v___x_595_);
if (v___x_597_ == 0)
{
lean_object* v___x_598_; 
lean_dec_ref(v_args_593_);
lean_dec_ref(v_f_583_);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_596_);
return v___x_598_;
}
else
{
size_t v___x_599_; size_t v___x_600_; lean_object* v___x_601_; 
v___x_599_ = ((size_t)0ULL);
v___x_600_ = lean_usize_of_nat(v___x_595_);
v___x_601_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(v_f_583_, v_args_593_, v___x_599_, v___x_600_, v___x_596_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_);
lean_dec_ref(v_args_593_);
return v___x_601_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0___boxed(lean_object* v_pu_676_, lean_object* v_f_677_, lean_object* v_e_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
uint8_t v_pu_boxed_686_; lean_object* v_res_687_; 
v_pu_boxed_686_ = lean_unbox(v_pu_676_);
v_res_687_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0(v_pu_boxed_686_, v_f_677_, v_e_678_, v___y_679_, v___y_680_, v___y_681_, v___y_682_, v___y_683_, v___y_684_);
lean_dec(v___y_684_);
lean_dec_ref(v___y_683_);
lean_dec(v___y_682_);
lean_dec_ref(v___y_681_);
lean_dec(v___y_680_);
lean_dec_ref(v___y_679_);
return v_res_687_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue(lean_object* v_e_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_){
_start:
{
uint8_t v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; 
v___x_696_ = 0;
v___x_697_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg___closed__0));
v___x_698_ = l_Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0(v___x_696_, v___x_697_, v_e_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_);
return v___x_698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue___boxed(lean_object* v_e_699_, lean_object* v___y_700_, lean_object* v___y_701_, lean_object* v___y_702_, lean_object* v___y_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_){
_start:
{
lean_object* v_res_707_; 
v_res_707_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue(v_e_699_, v___y_700_, v___y_701_, v___y_702_, v___y_703_, v___y_704_, v___y_705_);
lean_dec(v___y_705_);
lean_dec_ref(v___y_704_);
lean_dec(v___y_703_);
lean_dec_ref(v___y_702_);
lean_dec(v___y_701_);
lean_dec_ref(v___y_700_);
return v_res_707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0(uint8_t v_pu_708_, lean_object* v_f_709_, lean_object* v_as_710_, size_t v_i_711_, size_t v_stop_712_, lean_object* v_b_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_, lean_object* v___y_719_){
_start:
{
lean_object* v___x_721_; 
v___x_721_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___redArg(v_f_709_, v_as_710_, v_i_711_, v_stop_712_, v_b_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_, v___y_718_, v___y_719_);
return v___x_721_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0___boxed(lean_object* v_pu_722_, lean_object* v_f_723_, lean_object* v_as_724_, lean_object* v_i_725_, lean_object* v_stop_726_, lean_object* v_b_727_, lean_object* v___y_728_, lean_object* v___y_729_, lean_object* v___y_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_){
_start:
{
uint8_t v_pu_boxed_735_; size_t v_i_boxed_736_; size_t v_stop_boxed_737_; lean_object* v_res_738_; 
v_pu_boxed_735_ = lean_unbox(v_pu_722_);
v_i_boxed_736_ = lean_unbox_usize(v_i_725_);
lean_dec(v_i_725_);
v_stop_boxed_737_ = lean_unbox_usize(v_stop_726_);
lean_dec(v_stop_726_);
v_res_738_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_LetValue_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue_spec__0_spec__0(v_pu_boxed_735_, v_f_723_, v_as_724_, v_i_boxed_736_, v_stop_boxed_737_, v_b_727_, v___y_728_, v___y_729_, v___y_730_, v___y_731_, v___y_732_, v___y_733_);
lean_dec(v___y_733_);
lean_dec_ref(v___y_732_);
lean_dec(v___y_731_);
lean_dec_ref(v___y_730_);
lean_dec(v___y_729_);
lean_dec_ref(v___y_728_);
lean_dec_ref(v_as_724_);
return v_res_738_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_x_739_, lean_object* v_x_740_){
_start:
{
if (lean_obj_tag(v_x_740_) == 0)
{
return v_x_739_;
}
else
{
lean_object* v_key_741_; lean_object* v_value_742_; lean_object* v_tail_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_766_; 
v_key_741_ = lean_ctor_get(v_x_740_, 0);
v_value_742_ = lean_ctor_get(v_x_740_, 1);
v_tail_743_ = lean_ctor_get(v_x_740_, 2);
v_isSharedCheck_766_ = !lean_is_exclusive(v_x_740_);
if (v_isSharedCheck_766_ == 0)
{
v___x_745_ = v_x_740_;
v_isShared_746_ = v_isSharedCheck_766_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_tail_743_);
lean_inc(v_value_742_);
lean_inc(v_key_741_);
lean_dec(v_x_740_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_766_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; uint64_t v___x_748_; uint64_t v___x_749_; uint64_t v___x_750_; uint64_t v_fold_751_; uint64_t v___x_752_; uint64_t v___x_753_; uint64_t v___x_754_; size_t v___x_755_; size_t v___x_756_; size_t v___x_757_; size_t v___x_758_; size_t v___x_759_; lean_object* v___x_760_; lean_object* v___x_762_; 
v___x_747_ = lean_array_get_size(v_x_739_);
v___x_748_ = l_Lean_instHashableFVarId_hash(v_key_741_);
v___x_749_ = 32ULL;
v___x_750_ = lean_uint64_shift_right(v___x_748_, v___x_749_);
v_fold_751_ = lean_uint64_xor(v___x_748_, v___x_750_);
v___x_752_ = 16ULL;
v___x_753_ = lean_uint64_shift_right(v_fold_751_, v___x_752_);
v___x_754_ = lean_uint64_xor(v_fold_751_, v___x_753_);
v___x_755_ = lean_uint64_to_usize(v___x_754_);
v___x_756_ = lean_usize_of_nat(v___x_747_);
v___x_757_ = ((size_t)1ULL);
v___x_758_ = lean_usize_sub(v___x_756_, v___x_757_);
v___x_759_ = lean_usize_land(v___x_755_, v___x_758_);
v___x_760_ = lean_array_uget_borrowed(v_x_739_, v___x_759_);
lean_inc(v___x_760_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 2, v___x_760_);
v___x_762_ = v___x_745_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_key_741_);
lean_ctor_set(v_reuseFailAlloc_765_, 1, v_value_742_);
lean_ctor_set(v_reuseFailAlloc_765_, 2, v___x_760_);
v___x_762_ = v_reuseFailAlloc_765_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
lean_object* v___x_763_; 
v___x_763_ = lean_array_uset(v_x_739_, v___x_759_, v___x_762_);
v_x_739_ = v___x_763_;
v_x_740_ = v_tail_743_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1___redArg(lean_object* v_i_767_, lean_object* v_source_768_, lean_object* v_target_769_){
_start:
{
lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_770_ = lean_array_get_size(v_source_768_);
v___x_771_ = lean_nat_dec_lt(v_i_767_, v___x_770_);
if (v___x_771_ == 0)
{
lean_dec_ref(v_source_768_);
lean_dec(v_i_767_);
return v_target_769_;
}
else
{
lean_object* v_es_772_; lean_object* v___x_773_; lean_object* v_source_774_; lean_object* v_target_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v_es_772_ = lean_array_fget(v_source_768_, v_i_767_);
v___x_773_ = lean_box(0);
v_source_774_ = lean_array_fset(v_source_768_, v_i_767_, v___x_773_);
v_target_775_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1_spec__2___redArg(v_target_769_, v_es_772_);
v___x_776_ = lean_unsigned_to_nat(1u);
v___x_777_ = lean_nat_add(v_i_767_, v___x_776_);
lean_dec(v_i_767_);
v_i_767_ = v___x_777_;
v_source_768_ = v_source_774_;
v_target_769_ = v_target_775_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0___redArg(lean_object* v_data_779_){
_start:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_nbuckets_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_780_ = lean_array_get_size(v_data_779_);
v___x_781_ = lean_unsigned_to_nat(2u);
v_nbuckets_782_ = lean_nat_mul(v___x_780_, v___x_781_);
v___x_783_ = lean_unsigned_to_nat(0u);
v___x_784_ = lean_box(0);
v___x_785_ = lean_mk_array(v_nbuckets_782_, v___x_784_);
v___x_786_ = lean_array_propagate_mark(v_data_779_, v___x_785_);
v___x_787_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1___redArg(v___x_783_, v_data_779_, v___x_786_);
return v___x_787_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__1___redArg(lean_object* v_a_788_, lean_object* v_b_789_, lean_object* v_x_790_){
_start:
{
if (lean_obj_tag(v_x_790_) == 0)
{
lean_dec(v_b_789_);
lean_dec(v_a_788_);
return v_x_790_;
}
else
{
lean_object* v_key_791_; lean_object* v_value_792_; lean_object* v_tail_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_805_; 
v_key_791_ = lean_ctor_get(v_x_790_, 0);
v_value_792_ = lean_ctor_get(v_x_790_, 1);
v_tail_793_ = lean_ctor_get(v_x_790_, 2);
v_isSharedCheck_805_ = !lean_is_exclusive(v_x_790_);
if (v_isSharedCheck_805_ == 0)
{
v___x_795_ = v_x_790_;
v_isShared_796_ = v_isSharedCheck_805_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_tail_793_);
lean_inc(v_value_792_);
lean_inc(v_key_791_);
lean_dec(v_x_790_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_805_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
uint8_t v___x_797_; 
v___x_797_ = l_Lean_instBEqFVarId_beq(v_key_791_, v_a_788_);
if (v___x_797_ == 0)
{
lean_object* v___x_798_; lean_object* v___x_800_; 
v___x_798_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__1___redArg(v_a_788_, v_b_789_, v_tail_793_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 2, v___x_798_);
v___x_800_ = v___x_795_;
goto v_reusejp_799_;
}
else
{
lean_object* v_reuseFailAlloc_801_; 
v_reuseFailAlloc_801_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_801_, 0, v_key_791_);
lean_ctor_set(v_reuseFailAlloc_801_, 1, v_value_792_);
lean_ctor_set(v_reuseFailAlloc_801_, 2, v___x_798_);
v___x_800_ = v_reuseFailAlloc_801_;
goto v_reusejp_799_;
}
v_reusejp_799_:
{
return v___x_800_;
}
}
else
{
lean_object* v___x_803_; 
lean_dec(v_value_792_);
lean_dec(v_key_791_);
if (v_isShared_796_ == 0)
{
lean_ctor_set(v___x_795_, 1, v_b_789_);
lean_ctor_set(v___x_795_, 0, v_a_788_);
v___x_803_ = v___x_795_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v_a_788_);
lean_ctor_set(v_reuseFailAlloc_804_, 1, v_b_789_);
lean_ctor_set(v_reuseFailAlloc_804_, 2, v_tail_793_);
v___x_803_ = v_reuseFailAlloc_804_;
goto v_reusejp_802_;
}
v_reusejp_802_:
{
return v___x_803_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(lean_object* v_m_806_, lean_object* v_a_807_, lean_object* v_b_808_){
_start:
{
lean_object* v_size_809_; lean_object* v_buckets_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_853_; 
v_size_809_ = lean_ctor_get(v_m_806_, 0);
v_buckets_810_ = lean_ctor_get(v_m_806_, 1);
v_isSharedCheck_853_ = !lean_is_exclusive(v_m_806_);
if (v_isSharedCheck_853_ == 0)
{
v___x_812_ = v_m_806_;
v_isShared_813_ = v_isSharedCheck_853_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_buckets_810_);
lean_inc(v_size_809_);
lean_dec(v_m_806_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_853_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_814_; uint64_t v___x_815_; uint64_t v___x_816_; uint64_t v___x_817_; uint64_t v_fold_818_; uint64_t v___x_819_; uint64_t v___x_820_; uint64_t v___x_821_; size_t v___x_822_; size_t v___x_823_; size_t v___x_824_; size_t v___x_825_; size_t v___x_826_; lean_object* v_bkt_827_; uint8_t v___x_828_; 
v___x_814_ = lean_array_get_size(v_buckets_810_);
v___x_815_ = l_Lean_instHashableFVarId_hash(v_a_807_);
v___x_816_ = 32ULL;
v___x_817_ = lean_uint64_shift_right(v___x_815_, v___x_816_);
v_fold_818_ = lean_uint64_xor(v___x_815_, v___x_817_);
v___x_819_ = 16ULL;
v___x_820_ = lean_uint64_shift_right(v_fold_818_, v___x_819_);
v___x_821_ = lean_uint64_xor(v_fold_818_, v___x_820_);
v___x_822_ = lean_uint64_to_usize(v___x_821_);
v___x_823_ = lean_usize_of_nat(v___x_814_);
v___x_824_ = ((size_t)1ULL);
v___x_825_ = lean_usize_sub(v___x_823_, v___x_824_);
v___x_826_ = lean_usize_land(v___x_822_, v___x_825_);
v_bkt_827_ = lean_array_uget_borrowed(v_buckets_810_, v___x_826_);
v___x_828_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(v_a_807_, v_bkt_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; lean_object* v_size_x27_830_; lean_object* v___x_831_; lean_object* v_buckets_x27_832_; lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; uint8_t v___x_838_; 
v___x_829_ = lean_unsigned_to_nat(1u);
v_size_x27_830_ = lean_nat_add(v_size_809_, v___x_829_);
lean_dec(v_size_809_);
lean_inc(v_bkt_827_);
v___x_831_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_831_, 0, v_a_807_);
lean_ctor_set(v___x_831_, 1, v_b_808_);
lean_ctor_set(v___x_831_, 2, v_bkt_827_);
v_buckets_x27_832_ = lean_array_uset(v_buckets_810_, v___x_826_, v___x_831_);
v___x_833_ = lean_unsigned_to_nat(4u);
v___x_834_ = lean_nat_mul(v_size_x27_830_, v___x_833_);
v___x_835_ = lean_unsigned_to_nat(3u);
v___x_836_ = lean_nat_div(v___x_834_, v___x_835_);
lean_dec(v___x_834_);
v___x_837_ = lean_array_get_size(v_buckets_x27_832_);
v___x_838_ = lean_nat_dec_le(v___x_836_, v___x_837_);
lean_dec(v___x_836_);
if (v___x_838_ == 0)
{
lean_object* v_val_839_; lean_object* v___x_841_; 
v_val_839_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0___redArg(v_buckets_x27_832_);
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 1, v_val_839_);
lean_ctor_set(v___x_812_, 0, v_size_x27_830_);
v___x_841_ = v___x_812_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_size_x27_830_);
lean_ctor_set(v_reuseFailAlloc_842_, 1, v_val_839_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
else
{
lean_object* v___x_844_; 
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 1, v_buckets_x27_832_);
lean_ctor_set(v___x_812_, 0, v_size_x27_830_);
v___x_844_ = v___x_812_;
goto v_reusejp_843_;
}
else
{
lean_object* v_reuseFailAlloc_845_; 
v_reuseFailAlloc_845_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_845_, 0, v_size_x27_830_);
lean_ctor_set(v_reuseFailAlloc_845_, 1, v_buckets_x27_832_);
v___x_844_ = v_reuseFailAlloc_845_;
goto v_reusejp_843_;
}
v_reusejp_843_:
{
return v___x_844_;
}
}
}
else
{
lean_object* v___x_846_; lean_object* v_buckets_x27_847_; lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_851_; 
lean_inc(v_bkt_827_);
v___x_846_ = lean_box(0);
v_buckets_x27_847_ = lean_array_uset(v_buckets_810_, v___x_826_, v___x_846_);
v___x_848_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__1___redArg(v_a_807_, v_b_808_, v_bkt_827_);
v___x_849_ = lean_array_uset(v_buckets_x27_847_, v___x_826_, v___x_848_);
if (v_isShared_813_ == 0)
{
lean_ctor_set(v___x_812_, 1, v___x_849_);
v___x_851_ = v___x_812_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_852_; 
v_reuseFailAlloc_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_852_, 0, v_size_809_);
lean_ctor_set(v_reuseFailAlloc_852_, 1, v___x_849_);
v___x_851_ = v_reuseFailAlloc_852_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
return v___x_851_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___redArg(lean_object* v_fvarId_854_, lean_object* v_arity_855_, lean_object* v___y_856_){
_start:
{
lean_object* v___x_858_; lean_object* v_cinfo_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; 
v___x_858_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1);
v_cinfo_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_cinfo_859_, 0, v_arity_855_);
lean_ctor_set(v_cinfo_859_, 1, v___x_858_);
v___x_860_ = lean_st_ref_take(v___y_856_);
v___x_861_ = lean_box(0);
v___x_862_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(v___x_860_, v_fvarId_854_, v_cinfo_859_);
v___x_863_ = lean_st_ref_put(v___y_856_, v___x_862_);
v___x_864_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_864_, 0, v___x_861_);
return v___x_864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___redArg___boxed(lean_object* v_fvarId_865_, lean_object* v_arity_866_, lean_object* v___y_867_, lean_object* v___y_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___redArg(v_fvarId_865_, v_arity_866_, v___y_867_);
lean_dec(v___y_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate(lean_object* v_fvarId_870_, lean_object* v_arity_871_, lean_object* v___y_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_, lean_object* v___y_877_){
_start:
{
lean_object* v___x_879_; 
v___x_879_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___redArg(v_fvarId_870_, v_arity_871_, v___y_873_);
return v___x_879_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___boxed(lean_object* v_fvarId_880_, lean_object* v_arity_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_, lean_object* v___y_888_){
_start:
{
lean_object* v_res_889_; 
v_res_889_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate(v_fvarId_880_, v_arity_881_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_);
lean_dec(v___y_887_);
lean_dec_ref(v___y_886_);
lean_dec(v___y_885_);
lean_dec_ref(v___y_884_);
lean_dec(v___y_883_);
lean_dec_ref(v___y_882_);
return v_res_889_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0(lean_object* v_00_u03b2_890_, lean_object* v_m_891_, lean_object* v_a_892_, lean_object* v_b_893_){
_start:
{
lean_object* v___x_894_; 
v___x_894_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(v_m_891_, v_a_892_, v_b_893_);
return v___x_894_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0(lean_object* v_00_u03b2_895_, lean_object* v_data_896_){
_start:
{
lean_object* v___x_897_; 
v___x_897_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0___redArg(v_data_896_);
return v___x_897_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__1(lean_object* v_00_u03b2_898_, lean_object* v_a_899_, lean_object* v_b_900_, lean_object* v_x_901_){
_start:
{
lean_object* v___x_902_; 
v___x_902_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__1___redArg(v_a_899_, v_b_900_, v_x_901_);
return v___x_902_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_903_, lean_object* v_i_904_, lean_object* v_source_905_, lean_object* v_target_906_){
_start:
{
lean_object* v___x_907_; 
v___x_907_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1___redArg(v_i_904_, v_source_905_, v_target_906_);
return v___x_907_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_908_, lean_object* v_x_909_, lean_object* v_x_910_){
_start:
{
lean_object* v___x_911_; 
v___x_911_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0_spec__1_spec__2___redArg(v_x_909_, v_x_910_);
return v___x_911_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__0___redArg(lean_object* v_m_912_, lean_object* v_a_913_, lean_object* v_b_914_){
_start:
{
lean_object* v_size_915_; lean_object* v_buckets_916_; lean_object* v___x_917_; uint64_t v___x_918_; uint64_t v___x_919_; uint64_t v___x_920_; uint64_t v_fold_921_; uint64_t v___x_922_; uint64_t v___x_923_; uint64_t v___x_924_; size_t v___x_925_; size_t v___x_926_; size_t v___x_927_; size_t v___x_928_; size_t v___x_929_; lean_object* v_bkt_930_; uint8_t v___x_931_; 
v_size_915_ = lean_ctor_get(v_m_912_, 0);
v_buckets_916_ = lean_ctor_get(v_m_912_, 1);
v___x_917_ = lean_array_get_size(v_buckets_916_);
v___x_918_ = l_Lean_instHashableFVarId_hash(v_a_913_);
v___x_919_ = 32ULL;
v___x_920_ = lean_uint64_shift_right(v___x_918_, v___x_919_);
v_fold_921_ = lean_uint64_xor(v___x_918_, v___x_920_);
v___x_922_ = 16ULL;
v___x_923_ = lean_uint64_shift_right(v_fold_921_, v___x_922_);
v___x_924_ = lean_uint64_xor(v_fold_921_, v___x_923_);
v___x_925_ = lean_uint64_to_usize(v___x_924_);
v___x_926_ = lean_usize_of_nat(v___x_917_);
v___x_927_ = ((size_t)1ULL);
v___x_928_ = lean_usize_sub(v___x_926_, v___x_927_);
v___x_929_ = lean_usize_land(v___x_925_, v___x_928_);
v_bkt_930_ = lean_array_uget_borrowed(v_buckets_916_, v___x_929_);
v___x_931_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(v_a_913_, v_bkt_930_);
if (v___x_931_ == 0)
{
lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_952_; 
lean_inc_ref(v_buckets_916_);
lean_inc(v_size_915_);
v_isSharedCheck_952_ = !lean_is_exclusive(v_m_912_);
if (v_isSharedCheck_952_ == 0)
{
lean_object* v_unused_953_; lean_object* v_unused_954_; 
v_unused_953_ = lean_ctor_get(v_m_912_, 1);
lean_dec(v_unused_953_);
v_unused_954_ = lean_ctor_get(v_m_912_, 0);
lean_dec(v_unused_954_);
v___x_933_ = v_m_912_;
v_isShared_934_ = v_isSharedCheck_952_;
goto v_resetjp_932_;
}
else
{
lean_dec(v_m_912_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_952_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v_size_x27_936_; lean_object* v___x_937_; lean_object* v_buckets_x27_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; uint8_t v___x_944_; 
v___x_935_ = lean_unsigned_to_nat(1u);
v_size_x27_936_ = lean_nat_add(v_size_915_, v___x_935_);
lean_dec(v_size_915_);
lean_inc(v_bkt_930_);
v___x_937_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_937_, 0, v_a_913_);
lean_ctor_set(v___x_937_, 1, v_b_914_);
lean_ctor_set(v___x_937_, 2, v_bkt_930_);
v_buckets_x27_938_ = lean_array_uset(v_buckets_916_, v___x_929_, v___x_937_);
v___x_939_ = lean_unsigned_to_nat(4u);
v___x_940_ = lean_nat_mul(v_size_x27_936_, v___x_939_);
v___x_941_ = lean_unsigned_to_nat(3u);
v___x_942_ = lean_nat_div(v___x_940_, v___x_941_);
lean_dec(v___x_940_);
v___x_943_ = lean_array_get_size(v_buckets_x27_938_);
v___x_944_ = lean_nat_dec_le(v___x_942_, v___x_943_);
lean_dec(v___x_942_);
if (v___x_944_ == 0)
{
lean_object* v_val_945_; lean_object* v___x_947_; 
v_val_945_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0_spec__0___redArg(v_buckets_x27_938_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v_val_945_);
lean_ctor_set(v___x_933_, 0, v_size_x27_936_);
v___x_947_ = v___x_933_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_948_; 
v_reuseFailAlloc_948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_948_, 0, v_size_x27_936_);
lean_ctor_set(v_reuseFailAlloc_948_, 1, v_val_945_);
v___x_947_ = v_reuseFailAlloc_948_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
return v___x_947_;
}
}
else
{
lean_object* v___x_950_; 
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 1, v_buckets_x27_938_);
lean_ctor_set(v___x_933_, 0, v_size_x27_936_);
v___x_950_ = v___x_933_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_951_; 
v_reuseFailAlloc_951_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_951_, 0, v_size_x27_936_);
lean_ctor_set(v_reuseFailAlloc_951_, 1, v_buckets_x27_938_);
v___x_950_ = v_reuseFailAlloc_951_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
return v___x_950_;
}
}
}
}
else
{
lean_dec(v_b_914_);
lean_dec(v_a_913_);
return v_m_912_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__1_spec__1(lean_object* v_src_955_, lean_object* v_a_956_, lean_object* v_x_957_){
_start:
{
if (lean_obj_tag(v_x_957_) == 0)
{
lean_dec(v_a_956_);
lean_dec(v_src_955_);
return v_x_957_;
}
else
{
lean_object* v_key_958_; lean_object* v_value_959_; lean_object* v_tail_960_; lean_object* v___x_962_; uint8_t v_isShared_963_; uint8_t v_isSharedCheck_983_; 
v_key_958_ = lean_ctor_get(v_x_957_, 0);
v_value_959_ = lean_ctor_get(v_x_957_, 1);
v_tail_960_ = lean_ctor_get(v_x_957_, 2);
v_isSharedCheck_983_ = !lean_is_exclusive(v_x_957_);
if (v_isSharedCheck_983_ == 0)
{
v___x_962_ = v_x_957_;
v_isShared_963_ = v_isSharedCheck_983_;
goto v_resetjp_961_;
}
else
{
lean_inc(v_tail_960_);
lean_inc(v_value_959_);
lean_inc(v_key_958_);
lean_dec(v_x_957_);
v___x_962_ = lean_box(0);
v_isShared_963_ = v_isSharedCheck_983_;
goto v_resetjp_961_;
}
v_resetjp_961_:
{
uint8_t v___x_964_; 
v___x_964_ = l_Lean_instBEqFVarId_beq(v_key_958_, v_a_956_);
if (v___x_964_ == 0)
{
lean_object* v___x_965_; lean_object* v___x_967_; 
v___x_965_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__1_spec__1(v_src_955_, v_a_956_, v_tail_960_);
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 2, v___x_965_);
v___x_967_ = v___x_962_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_key_958_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v_value_959_);
lean_ctor_set(v_reuseFailAlloc_968_, 2, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
return v___x_967_;
}
}
else
{
lean_object* v_arity_969_; lean_object* v_associated_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_982_; 
lean_dec(v_key_958_);
v_arity_969_ = lean_ctor_get(v_value_959_, 0);
v_associated_970_ = lean_ctor_get(v_value_959_, 1);
v_isSharedCheck_982_ = !lean_is_exclusive(v_value_959_);
if (v_isSharedCheck_982_ == 0)
{
v___x_972_ = v_value_959_;
v_isShared_973_ = v_isSharedCheck_982_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_associated_970_);
lean_inc(v_arity_969_);
lean_dec(v_value_959_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_982_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_977_; 
v___x_974_ = lean_box(0);
v___x_975_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__0___redArg(v_associated_970_, v_src_955_, v___x_974_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 1, v___x_975_);
v___x_977_ = v___x_972_;
goto v_reusejp_976_;
}
else
{
lean_object* v_reuseFailAlloc_981_; 
v_reuseFailAlloc_981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_981_, 0, v_arity_969_);
lean_ctor_set(v_reuseFailAlloc_981_, 1, v___x_975_);
v___x_977_ = v_reuseFailAlloc_981_;
goto v_reusejp_976_;
}
v_reusejp_976_:
{
lean_object* v___x_979_; 
if (v_isShared_963_ == 0)
{
lean_ctor_set(v___x_962_, 1, v___x_977_);
lean_ctor_set(v___x_962_, 0, v_a_956_);
v___x_979_ = v___x_962_;
goto v_reusejp_978_;
}
else
{
lean_object* v_reuseFailAlloc_980_; 
v_reuseFailAlloc_980_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_980_, 0, v_a_956_);
lean_ctor_set(v_reuseFailAlloc_980_, 1, v___x_977_);
lean_ctor_set(v_reuseFailAlloc_980_, 2, v_tail_960_);
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
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__1(lean_object* v_src_984_, lean_object* v_m_985_, lean_object* v_a_986_){
_start:
{
lean_object* v_size_987_; lean_object* v_buckets_988_; lean_object* v___x_989_; uint64_t v___x_990_; uint64_t v___x_991_; uint64_t v___x_992_; uint64_t v_fold_993_; uint64_t v___x_994_; uint64_t v___x_995_; uint64_t v___x_996_; size_t v___x_997_; size_t v___x_998_; size_t v___x_999_; size_t v___x_1000_; size_t v___x_1001_; lean_object* v_bucket_1002_; uint8_t v___x_1003_; 
v_size_987_ = lean_ctor_get(v_m_985_, 0);
v_buckets_988_ = lean_ctor_get(v_m_985_, 1);
v___x_989_ = lean_array_get_size(v_buckets_988_);
v___x_990_ = l_Lean_instHashableFVarId_hash(v_a_986_);
v___x_991_ = 32ULL;
v___x_992_ = lean_uint64_shift_right(v___x_990_, v___x_991_);
v_fold_993_ = lean_uint64_xor(v___x_990_, v___x_992_);
v___x_994_ = 16ULL;
v___x_995_ = lean_uint64_shift_right(v_fold_993_, v___x_994_);
v___x_996_ = lean_uint64_xor(v_fold_993_, v___x_995_);
v___x_997_ = lean_uint64_to_usize(v___x_996_);
v___x_998_ = lean_usize_of_nat(v___x_989_);
v___x_999_ = ((size_t)1ULL);
v___x_1000_ = lean_usize_sub(v___x_998_, v___x_999_);
v___x_1001_ = lean_usize_land(v___x_997_, v___x_1000_);
v_bucket_1002_ = lean_array_uget_borrowed(v_buckets_988_, v___x_1001_);
v___x_1003_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(v_a_986_, v_bucket_1002_);
if (v___x_1003_ == 0)
{
lean_dec(v_a_986_);
lean_dec(v_src_984_);
return v_m_985_;
}
else
{
lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1014_; 
lean_inc(v_bucket_1002_);
lean_inc_ref(v_buckets_988_);
lean_inc(v_size_987_);
v_isSharedCheck_1014_ = !lean_is_exclusive(v_m_985_);
if (v_isSharedCheck_1014_ == 0)
{
lean_object* v_unused_1015_; lean_object* v_unused_1016_; 
v_unused_1015_ = lean_ctor_get(v_m_985_, 1);
lean_dec(v_unused_1015_);
v_unused_1016_ = lean_ctor_get(v_m_985_, 0);
lean_dec(v_unused_1016_);
v___x_1005_ = v_m_985_;
v_isShared_1006_ = v_isSharedCheck_1014_;
goto v_resetjp_1004_;
}
else
{
lean_dec(v_m_985_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1014_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v_buckets_1008_; lean_object* v_bucket_1009_; lean_object* v___x_1010_; lean_object* v___x_1012_; 
v___x_1007_ = lean_box(0);
v_buckets_1008_ = lean_array_uset(v_buckets_988_, v___x_1001_, v___x_1007_);
v_bucket_1009_ = l_Std_DHashMap_Internal_AssocList_Const_modify___at___00Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__1_spec__1(v_src_984_, v_a_986_, v_bucket_1002_);
v___x_1010_ = lean_array_uset(v_buckets_1008_, v___x_1001_, v_bucket_1009_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 1, v___x_1010_);
v___x_1012_ = v___x_1005_;
goto v_reusejp_1011_;
}
else
{
lean_object* v_reuseFailAlloc_1013_; 
v_reuseFailAlloc_1013_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1013_, 0, v_size_987_);
lean_ctor_set(v_reuseFailAlloc_1013_, 1, v___x_1010_);
v___x_1012_ = v_reuseFailAlloc_1013_;
goto v_reusejp_1011_;
}
v_reusejp_1011_:
{
return v___x_1012_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg(lean_object* v_src_1017_, lean_object* v_target_1018_, lean_object* v___y_1019_){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; 
v___x_1021_ = lean_st_ref_take(v___y_1019_);
v___x_1022_ = lean_box(0);
v___x_1023_ = l_Std_DHashMap_Internal_Raw_u2080_Const_modify___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__1(v_src_1017_, v___x_1021_, v_target_1018_);
v___x_1024_ = lean_st_ref_put(v___y_1019_, v___x_1023_);
v___x_1025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1025_, 0, v___x_1022_);
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg___boxed(lean_object* v_src_1026_, lean_object* v_target_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_){
_start:
{
lean_object* v_res_1030_; 
v_res_1030_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg(v_src_1026_, v_target_1027_, v___y_1028_);
lean_dec(v___y_1028_);
return v_res_1030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(lean_object* v_src_1031_, lean_object* v_target_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_, lean_object* v___y_1036_, lean_object* v___y_1037_, lean_object* v___y_1038_){
_start:
{
lean_object* v___x_1040_; 
v___x_1040_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg(v_src_1031_, v_target_1032_, v___y_1034_);
return v___x_1040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___boxed(lean_object* v_src_1041_, lean_object* v_target_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_, lean_object* v___y_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency(v_src_1041_, v_target_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_, v___y_1048_);
lean_dec(v___y_1048_);
lean_dec_ref(v___y_1047_);
lean_dec(v___y_1046_);
lean_dec_ref(v___y_1045_);
lean_dec(v___y_1044_);
lean_dec_ref(v___y_1043_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__0(lean_object* v_00_u03b2_1051_, lean_object* v_m_1052_, lean_object* v_a_1053_, lean_object* v_b_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency_spec__0___redArg(v_m_1052_, v_a_1053_, v_b_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody___redArg(lean_object* v_decl_1056_, lean_object* v_x_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_, lean_object* v___y_1063_){
_start:
{
lean_object* v_fvarId_1065_; lean_object* v_definitionDepth_1066_; lean_object* v_scope_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; 
v_fvarId_1065_ = lean_ctor_get(v_decl_1056_, 0);
v_definitionDepth_1066_ = lean_ctor_get(v___y_1058_, 0);
v_scope_1067_ = lean_ctor_get(v___y_1058_, 1);
v___x_1068_ = lean_unsigned_to_nat(1u);
v___x_1069_ = lean_nat_add(v_definitionDepth_1066_, v___x_1068_);
lean_inc(v_fvarId_1065_);
v___x_1070_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1070_, 0, v_fvarId_1065_);
lean_inc(v_scope_1067_);
v___x_1071_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1071_, 0, v___x_1069_);
lean_ctor_set(v___x_1071_, 1, v_scope_1067_);
lean_ctor_set(v___x_1071_, 2, v___x_1070_);
lean_inc(v___y_1063_);
lean_inc_ref(v___y_1062_);
lean_inc(v___y_1061_);
lean_inc_ref(v___y_1060_);
lean_inc(v___y_1059_);
v___x_1072_ = lean_apply_7(v_x_1057_, v___x_1071_, v___y_1059_, v___y_1060_, v___y_1061_, v___y_1062_, v___y_1063_, lean_box(0));
return v___x_1072_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody___redArg___boxed(lean_object* v_decl_1073_, lean_object* v_x_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
lean_object* v_res_1082_; 
v_res_1082_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody___redArg(v_decl_1073_, v_x_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_);
lean_dec(v___y_1080_);
lean_dec_ref(v___y_1079_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec_ref(v_decl_1073_);
return v_res_1082_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody(lean_object* v_00_u03b1_1083_, lean_object* v_decl_1084_, lean_object* v_x_1085_, lean_object* v___y_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_){
_start:
{
lean_object* v_fvarId_1093_; lean_object* v_definitionDepth_1094_; lean_object* v_scope_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; 
v_fvarId_1093_ = lean_ctor_get(v_decl_1084_, 0);
v_definitionDepth_1094_ = lean_ctor_get(v___y_1086_, 0);
v_scope_1095_ = lean_ctor_get(v___y_1086_, 1);
v___x_1096_ = lean_unsigned_to_nat(1u);
v___x_1097_ = lean_nat_add(v_definitionDepth_1094_, v___x_1096_);
lean_inc(v_fvarId_1093_);
v___x_1098_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1098_, 0, v_fvarId_1093_);
lean_inc(v_scope_1095_);
v___x_1099_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1097_);
lean_ctor_set(v___x_1099_, 1, v_scope_1095_);
lean_ctor_set(v___x_1099_, 2, v___x_1098_);
lean_inc(v___y_1091_);
lean_inc_ref(v___y_1090_);
lean_inc(v___y_1089_);
lean_inc_ref(v___y_1088_);
lean_inc(v___y_1087_);
v___x_1100_ = lean_apply_7(v_x_1085_, v___x_1099_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, lean_box(0));
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody___boxed(lean_object* v_00_u03b1_1101_, lean_object* v_decl_1102_, lean_object* v_x_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnBody(v_00_u03b1_1101_, v_decl_1102_, v_x_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec_ref(v_decl_1102_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined___redArg(lean_object* v_decl_1112_, lean_object* v_x_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_fvarId_1121_; lean_object* v_definitionDepth_1122_; lean_object* v_scope_1123_; lean_object* v_currentFunction_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v_fvarId_1121_ = lean_ctor_get(v_decl_1112_, 0);
lean_inc(v_fvarId_1121_);
lean_dec_ref(v_decl_1112_);
v_definitionDepth_1122_ = lean_ctor_get(v___y_1114_, 0);
v_scope_1123_ = lean_ctor_get(v___y_1114_, 1);
v_currentFunction_1124_ = lean_ctor_get(v___y_1114_, 2);
lean_inc(v_scope_1123_);
lean_inc_n(v_definitionDepth_1122_, 2);
v___x_1125_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1121_, v_definitionDepth_1122_, v_scope_1123_);
lean_inc(v_currentFunction_1124_);
v___x_1126_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1126_, 0, v_definitionDepth_1122_);
lean_ctor_set(v___x_1126_, 1, v___x_1125_);
lean_ctor_set(v___x_1126_, 2, v_currentFunction_1124_);
lean_inc(v___y_1119_);
lean_inc_ref(v___y_1118_);
lean_inc(v___y_1117_);
lean_inc_ref(v___y_1116_);
lean_inc(v___y_1115_);
v___x_1127_ = lean_apply_7(v_x_1113_, v___x_1126_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_, v___y_1119_, lean_box(0));
return v___x_1127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined___redArg___boxed(lean_object* v_decl_1128_, lean_object* v_x_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_){
_start:
{
lean_object* v_res_1137_; 
v_res_1137_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined___redArg(v_decl_1128_, v_x_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_, v___y_1135_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
lean_dec(v___y_1133_);
lean_dec_ref(v___y_1132_);
lean_dec(v___y_1131_);
lean_dec_ref(v___y_1130_);
return v_res_1137_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined(lean_object* v_00_u03b1_1138_, lean_object* v_decl_1139_, lean_object* v_x_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_, lean_object* v___y_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_fvarId_1148_; lean_object* v_definitionDepth_1149_; lean_object* v_scope_1150_; lean_object* v_currentFunction_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; 
v_fvarId_1148_ = lean_ctor_get(v_decl_1139_, 0);
lean_inc(v_fvarId_1148_);
lean_dec_ref(v_decl_1139_);
v_definitionDepth_1149_ = lean_ctor_get(v___y_1141_, 0);
v_scope_1150_ = lean_ctor_get(v___y_1141_, 1);
v_currentFunction_1151_ = lean_ctor_get(v___y_1141_, 2);
lean_inc(v_scope_1150_);
lean_inc_n(v_definitionDepth_1149_, 2);
v___x_1152_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1148_, v_definitionDepth_1149_, v_scope_1150_);
lean_inc(v_currentFunction_1151_);
v___x_1153_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1153_, 0, v_definitionDepth_1149_);
lean_ctor_set(v___x_1153_, 1, v___x_1152_);
lean_ctor_set(v___x_1153_, 2, v_currentFunction_1151_);
lean_inc(v___y_1146_);
lean_inc_ref(v___y_1145_);
lean_inc(v___y_1144_);
lean_inc_ref(v___y_1143_);
lean_inc(v___y_1142_);
v___x_1154_ = lean_apply_7(v_x_1140_, v___x_1153_, v___y_1142_, v___y_1143_, v___y_1144_, v___y_1145_, v___y_1146_, lean_box(0));
return v___x_1154_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined___boxed(lean_object* v_00_u03b1_1155_, lean_object* v_decl_1156_, lean_object* v_x_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
lean_object* v_res_1165_; 
v_res_1165_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_withFnDefined(v_00_u03b1_1155_, v_decl_1156_, v_x_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
return v_res_1165_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___redArg(lean_object* v_alt_1166_, lean_object* v_f_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
switch(lean_obj_tag(v_alt_1166_))
{
case 0:
{
lean_object* v_code_1175_; lean_object* v___x_1176_; 
v_code_1175_ = lean_ctor_get(v_alt_1166_, 2);
lean_inc_ref(v_code_1175_);
lean_dec_ref_known(v_alt_1166_, 3);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc(v___y_1169_);
lean_inc_ref(v___y_1168_);
v___x_1176_ = lean_apply_8(v_f_1167_, v_code_1175_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, lean_box(0));
return v___x_1176_;
}
case 1:
{
lean_object* v_code_1177_; lean_object* v___x_1178_; 
v_code_1177_ = lean_ctor_get(v_alt_1166_, 1);
lean_inc_ref(v_code_1177_);
lean_dec_ref_known(v_alt_1166_, 2);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc(v___y_1169_);
lean_inc_ref(v___y_1168_);
v___x_1178_ = lean_apply_8(v_f_1167_, v_code_1177_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, lean_box(0));
return v___x_1178_;
}
default: 
{
lean_object* v_code_1179_; lean_object* v___x_1180_; 
v_code_1179_ = lean_ctor_get(v_alt_1166_, 0);
lean_inc_ref(v_code_1179_);
lean_dec_ref_known(v_alt_1166_, 1);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc(v___y_1169_);
lean_inc_ref(v___y_1168_);
v___x_1180_ = lean_apply_8(v_f_1167_, v_code_1179_, v___y_1168_, v___y_1169_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_, lean_box(0));
return v___x_1180_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___redArg___boxed(lean_object* v_alt_1181_, lean_object* v_f_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
lean_object* v_res_1190_; 
v_res_1190_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___redArg(v_alt_1181_, v_f_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
return v_res_1190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0(uint8_t v_pu_1191_, lean_object* v_alt_1192_, lean_object* v_f_1193_, lean_object* v___y_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v___x_1201_; 
v___x_1201_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___redArg(v_alt_1192_, v_f_1193_, v___y_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_);
return v___x_1201_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___boxed(lean_object* v_pu_1202_, lean_object* v_alt_1203_, lean_object* v_f_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_, lean_object* v___y_1208_, lean_object* v___y_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_){
_start:
{
uint8_t v_pu_boxed_1212_; lean_object* v_res_1213_; 
v_pu_boxed_1212_ = lean_unbox(v_pu_1202_);
v_res_1213_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0(v_pu_boxed_1212_, v_alt_1203_, v_f_1204_, v___y_1205_, v___y_1206_, v___y_1207_, v___y_1208_, v___y_1209_, v___y_1210_);
lean_dec(v___y_1210_);
lean_dec_ref(v___y_1209_);
lean_dec(v___y_1208_);
lean_dec_ref(v___y_1207_);
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
return v_res_1213_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__1(lean_object* v_msg_1214_){
_start:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = lean_box(0);
v___x_1216_ = lean_panic_fn_borrowed(v___x_1215_, v_msg_1214_);
return v___x_1216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2(lean_object* v_as_1217_, size_t v_i_1218_, size_t v_stop_1219_, lean_object* v_b_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_){
_start:
{
uint8_t v___x_1228_; 
v___x_1228_ = lean_usize_dec_eq(v_i_1218_, v_stop_1219_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = lean_array_uget_borrowed(v_as_1217_, v_i_1218_);
lean_inc(v___x_1229_);
v___x_1230_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg(v___x_1229_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_);
if (lean_obj_tag(v___x_1230_) == 0)
{
lean_object* v_a_1231_; size_t v___x_1232_; size_t v___x_1233_; 
v_a_1231_ = lean_ctor_get(v___x_1230_, 0);
lean_inc(v_a_1231_);
lean_dec_ref_known(v___x_1230_, 1);
v___x_1232_ = ((size_t)1ULL);
v___x_1233_ = lean_usize_add(v_i_1218_, v___x_1232_);
v_i_1218_ = v___x_1233_;
v_b_1220_ = v_a_1231_;
goto _start;
}
else
{
return v___x_1230_;
}
}
else
{
lean_object* v___x_1235_; 
v___x_1235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1235_, 0, v_b_1220_);
return v___x_1235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2___boxed(lean_object* v_as_1236_, lean_object* v_i_1237_, lean_object* v_stop_1238_, lean_object* v_b_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_, lean_object* v___y_1242_, lean_object* v___y_1243_, lean_object* v___y_1244_, lean_object* v___y_1245_, lean_object* v___y_1246_){
_start:
{
size_t v_i_boxed_1247_; size_t v_stop_boxed_1248_; lean_object* v_res_1249_; 
v_i_boxed_1247_ = lean_unbox_usize(v_i_1237_);
lean_dec(v_i_1237_);
v_stop_boxed_1248_ = lean_unbox_usize(v_stop_1238_);
lean_dec(v_stop_1238_);
v_res_1249_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2(v_as_1236_, v_i_boxed_1247_, v_stop_boxed_1248_, v_b_1239_, v___y_1240_, v___y_1241_, v___y_1242_, v___y_1243_, v___y_1244_, v___y_1245_);
lean_dec(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___y_1243_);
lean_dec_ref(v___y_1242_);
lean_dec(v___y_1241_);
lean_dec_ref(v___y_1240_);
lean_dec_ref(v_as_1236_);
return v_res_1249_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__3(void){
_start:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1253_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__2));
v___x_1254_ = lean_unsigned_to_nat(14u);
v___x_1255_ = lean_unsigned_to_nat(22u);
v___x_1256_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__1));
v___x_1257_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__0));
v___x_1258_ = l_mkPanicMessageWithDecl(v___x_1257_, v___x_1256_, v___x_1255_, v___x_1254_, v___x_1253_);
return v___x_1258_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go(lean_object* v_a_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
switch(lean_obj_tag(v_a_1259_))
{
case 0:
{
lean_object* v_decl_1267_; lean_object* v_k_1268_; lean_object* v___y_1270_; lean_object* v___y_1271_; lean_object* v___y_1272_; lean_object* v___y_1273_; lean_object* v___y_1274_; lean_object* v___y_1275_; 
v_decl_1267_ = lean_ctor_get(v_a_1259_, 0);
lean_inc_ref(v_decl_1267_);
v_k_1268_ = lean_ctor_get(v_a_1259_, 1);
lean_inc_ref(v_k_1268_);
lean_dec_ref_known(v_a_1259_, 2);
if (lean_obj_tag(v_k_1268_) == 5)
{
lean_object* v_value_1279_; 
v_value_1279_ = lean_ctor_get(v_decl_1267_, 3);
if (lean_obj_tag(v_value_1279_) == 4)
{
lean_object* v_fvarId_1280_; lean_object* v___x_1282_; uint8_t v_isShared_1283_; uint8_t v_isSharedCheck_1335_; 
lean_inc_ref(v_value_1279_);
v_fvarId_1280_ = lean_ctor_get(v_k_1268_, 0);
v_isSharedCheck_1335_ = !lean_is_exclusive(v_k_1268_);
if (v_isSharedCheck_1335_ == 0)
{
v___x_1282_ = v_k_1268_;
v_isShared_1283_ = v_isSharedCheck_1335_;
goto v_resetjp_1281_;
}
else
{
lean_inc(v_fvarId_1280_);
lean_dec(v_k_1268_);
v___x_1282_ = lean_box(0);
v_isShared_1283_ = v_isSharedCheck_1335_;
goto v_resetjp_1281_;
}
v_resetjp_1281_:
{
lean_object* v_fvarId_1284_; lean_object* v_fvarId_1285_; lean_object* v_args_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___y_1325_; uint8_t v___x_1326_; 
v_fvarId_1284_ = lean_ctor_get(v_decl_1267_, 0);
lean_inc(v_fvarId_1284_);
lean_dec_ref(v_decl_1267_);
v_fvarId_1285_ = lean_ctor_get(v_value_1279_, 0);
lean_inc(v_fvarId_1285_);
v_args_1286_ = lean_ctor_get(v_value_1279_, 1);
lean_inc_ref(v_args_1286_);
lean_dec_ref_known(v_value_1279_, 2);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = lean_array_get_size(v_args_1286_);
v___x_1326_ = lean_nat_dec_lt(v___x_1287_, v___x_1288_);
if (v___x_1326_ == 0)
{
lean_dec_ref(v_args_1286_);
goto v___jp_1289_;
}
else
{
lean_object* v___x_1327_; uint8_t v___x_1328_; 
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_nat_dec_le(v___x_1288_, v___x_1288_);
if (v___x_1328_ == 0)
{
if (v___x_1326_ == 0)
{
lean_dec_ref(v_args_1286_);
goto v___jp_1289_;
}
else
{
size_t v___x_1329_; size_t v___x_1330_; lean_object* v___x_1331_; 
v___x_1329_ = ((size_t)0ULL);
v___x_1330_ = lean_usize_of_nat(v___x_1288_);
v___x_1331_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2(v_args_1286_, v___x_1329_, v___x_1330_, v___x_1327_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v_args_1286_);
v___y_1325_ = v___x_1331_;
goto v___jp_1324_;
}
}
else
{
size_t v___x_1332_; size_t v___x_1333_; lean_object* v___x_1334_; 
v___x_1332_ = ((size_t)0ULL);
v___x_1333_ = lean_usize_of_nat(v___x_1288_);
v___x_1334_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2(v_args_1286_, v___x_1332_, v___x_1333_, v___x_1327_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v_args_1286_);
v___y_1325_ = v___x_1334_;
goto v___jp_1324_;
}
}
v___jp_1289_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_st_ref_get(v___y_1261_);
v___x_1291_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(v___x_1290_, v_fvarId_1285_);
lean_dec(v___x_1290_);
if (lean_obj_tag(v___x_1291_) == 1)
{
lean_object* v_val_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1319_; 
lean_del_object(v___x_1282_);
v_val_1292_ = lean_ctor_get(v___x_1291_, 0);
v_isSharedCheck_1319_ = !lean_is_exclusive(v___x_1291_);
if (v_isSharedCheck_1319_ == 0)
{
v___x_1294_ = v___x_1291_;
v_isShared_1295_ = v_isSharedCheck_1319_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_val_1292_);
lean_dec(v___x_1291_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1319_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
uint8_t v___x_1296_; 
v___x_1296_ = l_Lean_instBEqFVarId_beq(v_fvarId_1280_, v_fvarId_1284_);
lean_dec(v_fvarId_1284_);
lean_dec(v_fvarId_1280_);
if (v___x_1296_ == 0)
{
lean_object* v___x_1297_; 
lean_del_object(v___x_1294_);
lean_dec(v_val_1292_);
v___x_1297_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(v_fvarId_1285_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec(v_fvarId_1285_);
return v___x_1297_;
}
else
{
lean_object* v_arity_1298_; uint8_t v___x_1299_; 
v_arity_1298_ = lean_ctor_get(v_val_1292_, 0);
lean_inc(v_arity_1298_);
lean_dec(v_val_1292_);
v___x_1299_ = lean_nat_dec_eq(v___x_1288_, v_arity_1298_);
lean_dec(v_arity_1298_);
if (v___x_1299_ == 0)
{
lean_object* v___x_1300_; 
lean_del_object(v___x_1294_);
v___x_1300_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(v_fvarId_1285_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec(v_fvarId_1285_);
return v___x_1300_;
}
else
{
lean_object* v_definitionDepth_1301_; lean_object* v_scope_1302_; lean_object* v_currentFunction_1303_; lean_object* v___x_1304_; uint8_t v___x_1305_; 
v_definitionDepth_1301_ = lean_ctor_get(v___y_1260_, 0);
v_scope_1302_ = lean_ctor_get(v___y_1260_, 1);
v_currentFunction_1303_ = lean_ctor_get(v___y_1260_, 2);
lean_inc(v_fvarId_1285_);
lean_inc(v_scope_1302_);
v___x_1304_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_1287_, v_scope_1302_, v_fvarId_1285_);
v___x_1305_ = lean_nat_dec_eq(v_definitionDepth_1301_, v___x_1304_);
if (v___x_1305_ == 0)
{
lean_object* v___x_1306_; lean_object* v___x_1307_; uint8_t v___x_1308_; 
lean_del_object(v___x_1294_);
v___x_1306_ = lean_unsigned_to_nat(1u);
v___x_1307_ = lean_nat_add(v___x_1304_, v___x_1306_);
lean_dec(v___x_1304_);
v___x_1308_ = lean_nat_dec_eq(v___x_1307_, v_definitionDepth_1301_);
lean_dec(v___x_1307_);
if (v___x_1308_ == 0)
{
lean_object* v___x_1309_; 
v___x_1309_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(v_fvarId_1285_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec(v_fvarId_1285_);
return v___x_1309_;
}
else
{
lean_inc(v_currentFunction_1303_);
lean_dec_ref(v___y_1260_);
if (lean_obj_tag(v_currentFunction_1303_) == 0)
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v___x_1310_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__3, &l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__3_once, _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___closed__3);
v___x_1311_ = l_panic___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__1(v___x_1310_);
v___x_1312_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg(v_fvarId_1285_, v___x_1311_, v___y_1261_);
return v___x_1312_;
}
else
{
lean_object* v_val_1313_; lean_object* v___x_1314_; 
v_val_1313_ = lean_ctor_get(v_currentFunction_1303_, 0);
lean_inc(v_val_1313_);
lean_dec_ref_known(v_currentFunction_1303_, 1);
v___x_1314_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addDependency___redArg(v_fvarId_1285_, v_val_1313_, v___y_1261_);
return v___x_1314_;
}
}
}
else
{
lean_object* v___x_1315_; lean_object* v___x_1317_; 
lean_dec(v___x_1304_);
lean_dec(v_fvarId_1285_);
lean_dec_ref(v___y_1260_);
v___x_1315_ = lean_box(0);
if (v_isShared_1295_ == 0)
{
lean_ctor_set_tag(v___x_1294_, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1315_);
v___x_1317_ = v___x_1294_;
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
}
}
}
else
{
lean_object* v___x_1320_; lean_object* v___x_1322_; 
lean_dec(v___x_1291_);
lean_dec(v_fvarId_1285_);
lean_dec(v_fvarId_1284_);
lean_dec(v_fvarId_1280_);
lean_dec_ref(v___y_1260_);
v___x_1320_ = lean_box(0);
if (v_isShared_1283_ == 0)
{
lean_ctor_set_tag(v___x_1282_, 0);
lean_ctor_set(v___x_1282_, 0, v___x_1320_);
v___x_1322_ = v___x_1282_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v___x_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
}
v___jp_1324_:
{
if (lean_obj_tag(v___y_1325_) == 0)
{
lean_dec_ref_known(v___y_1325_, 1);
goto v___jp_1289_;
}
else
{
lean_dec(v_fvarId_1285_);
lean_dec(v_fvarId_1284_);
lean_del_object(v___x_1282_);
lean_dec(v_fvarId_1280_);
lean_dec_ref(v___y_1260_);
return v___y_1325_;
}
}
}
}
else
{
v___y_1270_ = v___y_1260_;
v___y_1271_ = v___y_1261_;
v___y_1272_ = v___y_1262_;
v___y_1273_ = v___y_1263_;
v___y_1274_ = v___y_1264_;
v___y_1275_ = v___y_1265_;
goto v___jp_1269_;
}
}
else
{
v___y_1270_ = v___y_1260_;
v___y_1271_ = v___y_1261_;
v___y_1272_ = v___y_1262_;
v___y_1273_ = v___y_1263_;
v___y_1274_ = v___y_1264_;
v___y_1275_ = v___y_1265_;
goto v___jp_1269_;
}
v___jp_1269_:
{
lean_object* v_value_1276_; lean_object* v___x_1277_; 
v_value_1276_ = lean_ctor_get(v_decl_1267_, 3);
lean_inc(v_value_1276_);
lean_dec_ref(v_decl_1267_);
v___x_1277_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInLetValue(v_value_1276_, v___y_1270_, v___y_1271_, v___y_1272_, v___y_1273_, v___y_1274_, v___y_1275_);
if (lean_obj_tag(v___x_1277_) == 0)
{
lean_dec_ref_known(v___x_1277_, 1);
v_a_1259_ = v_k_1268_;
v___y_1260_ = v___y_1270_;
v___y_1261_ = v___y_1271_;
v___y_1262_ = v___y_1272_;
v___y_1263_ = v___y_1273_;
v___y_1264_ = v___y_1274_;
v___y_1265_ = v___y_1275_;
goto _start;
}
else
{
lean_dec_ref(v___y_1270_);
lean_dec_ref(v_k_1268_);
return v___x_1277_;
}
}
}
case 1:
{
lean_object* v_decl_1336_; lean_object* v_k_1337_; lean_object* v_fvarId_1338_; lean_object* v_value_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v_decl_1336_ = lean_ctor_get(v_a_1259_, 0);
lean_inc_ref(v_decl_1336_);
v_k_1337_ = lean_ctor_get(v_a_1259_, 1);
lean_inc_ref(v_k_1337_);
lean_dec_ref_known(v_a_1259_, 2);
v_fvarId_1338_ = lean_ctor_get(v_decl_1336_, 0);
lean_inc_n(v_fvarId_1338_, 2);
v_value_1339_ = lean_ctor_get(v_decl_1336_, 4);
lean_inc_ref(v_value_1339_);
v___x_1340_ = l_Lean_Compiler_LCNF_FunDecl_getArity___redArg(v_decl_1336_);
lean_dec_ref(v_decl_1336_);
v___x_1341_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate___redArg(v_fvarId_1338_, v___x_1340_, v___y_1261_);
if (lean_obj_tag(v___x_1341_) == 0)
{
lean_object* v___x_1343_; uint8_t v_isShared_1344_; uint8_t v_isSharedCheck_1358_; 
v_isSharedCheck_1358_ = !lean_is_exclusive(v___x_1341_);
if (v_isSharedCheck_1358_ == 0)
{
lean_object* v_unused_1359_; 
v_unused_1359_ = lean_ctor_get(v___x_1341_, 0);
lean_dec(v_unused_1359_);
v___x_1343_ = v___x_1341_;
v_isShared_1344_ = v_isSharedCheck_1358_;
goto v_resetjp_1342_;
}
else
{
lean_dec(v___x_1341_);
v___x_1343_ = lean_box(0);
v_isShared_1344_ = v_isSharedCheck_1358_;
goto v_resetjp_1342_;
}
v_resetjp_1342_:
{
lean_object* v_definitionDepth_1345_; lean_object* v_scope_1346_; lean_object* v_currentFunction_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1351_; 
v_definitionDepth_1345_ = lean_ctor_get(v___y_1260_, 0);
lean_inc(v_definitionDepth_1345_);
v_scope_1346_ = lean_ctor_get(v___y_1260_, 1);
lean_inc(v_scope_1346_);
v_currentFunction_1347_ = lean_ctor_get(v___y_1260_, 2);
lean_inc(v_currentFunction_1347_);
lean_dec_ref(v___y_1260_);
v___x_1348_ = lean_unsigned_to_nat(1u);
v___x_1349_ = lean_nat_add(v_definitionDepth_1345_, v___x_1348_);
lean_inc(v_fvarId_1338_);
if (v_isShared_1344_ == 0)
{
lean_ctor_set_tag(v___x_1343_, 1);
lean_ctor_set(v___x_1343_, 0, v_fvarId_1338_);
v___x_1351_ = v___x_1343_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v_fvarId_1338_);
v___x_1351_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
lean_object* v___x_1352_; lean_object* v___x_1353_; 
lean_inc(v_scope_1346_);
v___x_1352_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1352_, 0, v___x_1349_);
lean_ctor_set(v___x_1352_, 1, v_scope_1346_);
lean_ctor_set(v___x_1352_, 2, v___x_1351_);
v___x_1353_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go(v_value_1339_, v___x_1352_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
if (lean_obj_tag(v___x_1353_) == 0)
{
lean_object* v___x_1354_; lean_object* v___x_1355_; 
lean_dec_ref_known(v___x_1353_, 1);
lean_inc(v_definitionDepth_1345_);
v___x_1354_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_1338_, v_definitionDepth_1345_, v_scope_1346_);
v___x_1355_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1355_, 0, v_definitionDepth_1345_);
lean_ctor_set(v___x_1355_, 1, v___x_1354_);
lean_ctor_set(v___x_1355_, 2, v_currentFunction_1347_);
v_a_1259_ = v_k_1337_;
v___y_1260_ = v___x_1355_;
goto _start;
}
else
{
lean_dec(v_currentFunction_1347_);
lean_dec(v_scope_1346_);
lean_dec(v_definitionDepth_1345_);
lean_dec(v_fvarId_1338_);
lean_dec_ref(v_k_1337_);
return v___x_1353_;
}
}
}
}
else
{
lean_dec_ref(v_value_1339_);
lean_dec(v_fvarId_1338_);
lean_dec_ref(v_k_1337_);
lean_dec_ref(v___y_1260_);
return v___x_1341_;
}
}
case 2:
{
lean_object* v_decl_1360_; lean_object* v_k_1361_; lean_object* v_value_1362_; lean_object* v___x_1363_; 
v_decl_1360_ = lean_ctor_get(v_a_1259_, 0);
lean_inc_ref(v_decl_1360_);
v_k_1361_ = lean_ctor_get(v_a_1259_, 1);
lean_inc_ref(v_k_1361_);
lean_dec_ref_known(v_a_1259_, 2);
v_value_1362_ = lean_ctor_get(v_decl_1360_, 4);
lean_inc_ref(v_value_1362_);
lean_dec_ref(v_decl_1360_);
lean_inc_ref(v___y_1260_);
v___x_1363_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go(v_value_1362_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
if (lean_obj_tag(v___x_1363_) == 0)
{
lean_dec_ref_known(v___x_1363_, 1);
v_a_1259_ = v_k_1361_;
goto _start;
}
else
{
lean_dec_ref(v_k_1361_);
lean_dec_ref(v___y_1260_);
return v___x_1363_;
}
}
case 3:
{
lean_object* v_args_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; uint8_t v___x_1369_; 
v_args_1365_ = lean_ctor_get(v_a_1259_, 1);
lean_inc_ref(v_args_1365_);
lean_dec_ref_known(v_a_1259_, 2);
v___x_1366_ = lean_unsigned_to_nat(0u);
v___x_1367_ = lean_array_get_size(v_args_1365_);
v___x_1368_ = lean_box(0);
v___x_1369_ = lean_nat_dec_lt(v___x_1366_, v___x_1367_);
if (v___x_1369_ == 0)
{
lean_object* v___x_1370_; 
lean_dec_ref(v_args_1365_);
lean_dec_ref(v___y_1260_);
v___x_1370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1370_, 0, v___x_1368_);
return v___x_1370_;
}
else
{
uint8_t v___x_1371_; 
v___x_1371_ = lean_nat_dec_le(v___x_1367_, v___x_1367_);
if (v___x_1371_ == 0)
{
if (v___x_1369_ == 0)
{
lean_object* v___x_1372_; 
lean_dec_ref(v_args_1365_);
lean_dec_ref(v___y_1260_);
v___x_1372_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1372_, 0, v___x_1368_);
return v___x_1372_;
}
else
{
size_t v___x_1373_; size_t v___x_1374_; lean_object* v___x_1375_; 
v___x_1373_ = ((size_t)0ULL);
v___x_1374_ = lean_usize_of_nat(v___x_1367_);
v___x_1375_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2(v_args_1365_, v___x_1373_, v___x_1374_, v___x_1368_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec_ref(v_args_1365_);
return v___x_1375_;
}
}
else
{
size_t v___x_1376_; size_t v___x_1377_; lean_object* v___x_1378_; 
v___x_1376_ = ((size_t)0ULL);
v___x_1377_ = lean_usize_of_nat(v___x_1367_);
v___x_1378_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__2(v_args_1365_, v___x_1376_, v___x_1377_, v___x_1368_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec_ref(v_args_1365_);
return v___x_1378_;
}
}
}
case 4:
{
lean_object* v_cases_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1401_; 
v_cases_1379_ = lean_ctor_get(v_a_1259_, 0);
v_isSharedCheck_1401_ = !lean_is_exclusive(v_a_1259_);
if (v_isSharedCheck_1401_ == 0)
{
v___x_1381_ = v_a_1259_;
v_isShared_1382_ = v_isSharedCheck_1401_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_cases_1379_);
lean_dec(v_a_1259_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1401_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v_alts_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; uint8_t v___x_1387_; 
v_alts_1383_ = lean_ctor_get(v_cases_1379_, 3);
lean_inc_ref(v_alts_1383_);
lean_dec_ref(v_cases_1379_);
v___x_1384_ = lean_unsigned_to_nat(0u);
v___x_1385_ = lean_array_get_size(v_alts_1383_);
v___x_1386_ = lean_box(0);
v___x_1387_ = lean_nat_dec_lt(v___x_1384_, v___x_1385_);
if (v___x_1387_ == 0)
{
lean_object* v___x_1389_; 
lean_dec_ref(v_alts_1383_);
lean_dec_ref(v___y_1260_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set_tag(v___x_1381_, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1386_);
v___x_1389_ = v___x_1381_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1390_; 
v_reuseFailAlloc_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1390_, 0, v___x_1386_);
v___x_1389_ = v_reuseFailAlloc_1390_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
return v___x_1389_;
}
}
else
{
uint8_t v___x_1391_; 
v___x_1391_ = lean_nat_dec_le(v___x_1385_, v___x_1385_);
if (v___x_1391_ == 0)
{
if (v___x_1387_ == 0)
{
lean_object* v___x_1393_; 
lean_dec_ref(v_alts_1383_);
lean_dec_ref(v___y_1260_);
if (v_isShared_1382_ == 0)
{
lean_ctor_set_tag(v___x_1381_, 0);
lean_ctor_set(v___x_1381_, 0, v___x_1386_);
v___x_1393_ = v___x_1381_;
goto v_reusejp_1392_;
}
else
{
lean_object* v_reuseFailAlloc_1394_; 
v_reuseFailAlloc_1394_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1394_, 0, v___x_1386_);
v___x_1393_ = v_reuseFailAlloc_1394_;
goto v_reusejp_1392_;
}
v_reusejp_1392_:
{
return v___x_1393_;
}
}
else
{
size_t v___x_1395_; size_t v___x_1396_; lean_object* v___x_1397_; 
lean_del_object(v___x_1381_);
v___x_1395_ = ((size_t)0ULL);
v___x_1396_ = lean_usize_of_nat(v___x_1385_);
v___x_1397_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__3(v_alts_1383_, v___x_1395_, v___x_1396_, v___x_1386_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec_ref(v_alts_1383_);
return v___x_1397_;
}
}
else
{
size_t v___x_1398_; size_t v___x_1399_; lean_object* v___x_1400_; 
lean_del_object(v___x_1381_);
v___x_1398_ = ((size_t)0ULL);
v___x_1399_ = lean_usize_of_nat(v___x_1385_);
v___x_1400_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__3(v_alts_1383_, v___x_1398_, v___x_1399_, v___x_1386_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec_ref(v_alts_1383_);
return v___x_1400_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_1402_; lean_object* v___x_1403_; 
v_fvarId_1402_ = lean_ctor_get(v_a_1259_, 0);
lean_inc(v_fvarId_1402_);
lean_dec_ref_known(v_a_1259_, 1);
v___x_1403_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate(v_fvarId_1402_, v___y_1260_, v___y_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec_ref(v___y_1260_);
lean_dec(v_fvarId_1402_);
return v___x_1403_;
}
default: 
{
lean_object* v___x_1405_; uint8_t v_isShared_1406_; uint8_t v_isSharedCheck_1411_; 
lean_dec_ref(v___y_1260_);
v_isSharedCheck_1411_ = !lean_is_exclusive(v_a_1259_);
if (v_isSharedCheck_1411_ == 0)
{
lean_object* v_unused_1412_; 
v_unused_1412_ = lean_ctor_get(v_a_1259_, 0);
lean_dec(v_unused_1412_);
v___x_1405_ = v_a_1259_;
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
else
{
lean_dec(v_a_1259_);
v___x_1405_ = lean_box(0);
v_isShared_1406_ = v_isSharedCheck_1411_;
goto v_resetjp_1404_;
}
v_resetjp_1404_:
{
lean_object* v___x_1407_; lean_object* v___x_1409_; 
v___x_1407_ = lean_box(0);
if (v_isShared_1406_ == 0)
{
lean_ctor_set_tag(v___x_1405_, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1407_);
v___x_1409_ = v___x_1405_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v___x_1407_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___boxed(lean_object* v_a_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go(v_a_1413_, v___y_1414_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
lean_dec(v___y_1415_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__3(lean_object* v_as_1422_, size_t v_i_1423_, size_t v_stop_1424_, lean_object* v_b_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
uint8_t v___x_1433_; 
v___x_1433_ = lean_usize_dec_eq(v_i_1423_, v_stop_1424_);
if (v___x_1433_ == 0)
{
lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; 
v___x_1434_ = lean_array_uget_borrowed(v_as_1422_, v_i_1423_);
v___x_1435_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go___boxed), 8, 0);
lean_inc(v___x_1434_);
v___x_1436_ = l_Lean_Compiler_LCNF_Alt_forCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__0___redArg(v___x_1434_, v___x_1435_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_);
if (lean_obj_tag(v___x_1436_) == 0)
{
lean_object* v_a_1437_; size_t v___x_1438_; size_t v___x_1439_; 
v_a_1437_ = lean_ctor_get(v___x_1436_, 0);
lean_inc(v_a_1437_);
lean_dec_ref_known(v___x_1436_, 1);
v___x_1438_ = ((size_t)1ULL);
v___x_1439_ = lean_usize_add(v_i_1423_, v___x_1438_);
v_i_1423_ = v___x_1439_;
v_b_1425_ = v_a_1437_;
goto _start;
}
else
{
return v___x_1436_;
}
}
else
{
lean_object* v___x_1441_; 
v___x_1441_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1441_, 0, v_b_1425_);
return v___x_1441_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__3___boxed(lean_object* v_as_1442_, lean_object* v_i_1443_, lean_object* v_stop_1444_, lean_object* v_b_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_){
_start:
{
size_t v_i_boxed_1453_; size_t v_stop_boxed_1454_; lean_object* v_res_1455_; 
v_i_boxed_1453_ = lean_unbox_usize(v_i_1443_);
lean_dec(v_i_1443_);
v_stop_boxed_1454_ = lean_unbox_usize(v_stop_1444_);
lean_dec(v_stop_1444_);
v_res_1455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_find_go_spec__3(v_as_1442_, v_i_boxed_1453_, v_stop_boxed_1454_, v_b_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_);
lean_dec(v___y_1451_);
lean_dec_ref(v___y_1450_);
lean_dec(v___y_1449_);
lean_dec_ref(v___y_1448_);
lean_dec(v___y_1447_);
lean_dec_ref(v___y_1446_);
lean_dec_ref(v_as_1442_);
return v_res_1455_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___redArg(lean_object* v_f_1456_, lean_object* v_v_1457_, lean_object* v___y_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
if (lean_obj_tag(v_v_1457_) == 0)
{
lean_object* v_code_1465_; lean_object* v___x_1466_; 
v_code_1465_ = lean_ctor_get(v_v_1457_, 0);
lean_inc_ref(v_code_1465_);
lean_dec_ref_known(v_v_1457_, 1);
lean_inc(v___y_1463_);
lean_inc_ref(v___y_1462_);
lean_inc(v___y_1461_);
lean_inc_ref(v___y_1460_);
lean_inc(v___y_1459_);
lean_inc_ref(v___y_1458_);
v___x_1466_ = lean_apply_8(v_f_1456_, v_code_1465_, v___y_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_, v___y_1463_, lean_box(0));
return v___x_1466_;
}
else
{
lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1474_; 
lean_dec_ref(v_f_1456_);
v_isSharedCheck_1474_ = !lean_is_exclusive(v_v_1457_);
if (v_isSharedCheck_1474_ == 0)
{
lean_object* v_unused_1475_; 
v_unused_1475_ = lean_ctor_get(v_v_1457_, 0);
lean_dec(v_unused_1475_);
v___x_1468_ = v_v_1457_;
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
else
{
lean_dec(v_v_1457_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v___x_1472_; 
v___x_1470_ = lean_box(0);
if (v_isShared_1469_ == 0)
{
lean_ctor_set_tag(v___x_1468_, 0);
lean_ctor_set(v___x_1468_, 0, v___x_1470_);
v___x_1472_ = v___x_1468_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1470_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___redArg___boxed(lean_object* v_f_1476_, lean_object* v_v_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_){
_start:
{
lean_object* v_res_1485_; 
v_res_1485_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___redArg(v_f_1476_, v_v_1477_, v___y_1478_, v___y_1479_, v___y_1480_, v___y_1481_, v___y_1482_, v___y_1483_);
lean_dec(v___y_1483_);
lean_dec_ref(v___y_1482_);
lean_dec(v___y_1481_);
lean_dec_ref(v___y_1480_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
return v_res_1485_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0(uint8_t v_pu_1486_, lean_object* v_f_1487_, lean_object* v_v_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_, lean_object* v___y_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_){
_start:
{
lean_object* v___x_1496_; 
v___x_1496_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___redArg(v_f_1487_, v_v_1488_, v___y_1489_, v___y_1490_, v___y_1491_, v___y_1492_, v___y_1493_, v___y_1494_);
return v___x_1496_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___boxed(lean_object* v_pu_1497_, lean_object* v_f_1498_, lean_object* v_v_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_){
_start:
{
uint8_t v_pu_boxed_1507_; lean_object* v_res_1508_; 
v_pu_boxed_1507_ = lean_unbox(v_pu_1497_);
v_res_1508_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0(v_pu_boxed_1507_, v_f_1498_, v_v_1499_, v___y_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_);
lean_dec(v___y_1505_);
lean_dec_ref(v___y_1504_);
lean_dec(v___y_1503_);
lean_dec_ref(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec_ref(v___y_1500_);
return v_res_1508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find(lean_object* v_decl_1514_, lean_object* v___y_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_){
_start:
{
lean_object* v_value_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; 
v_value_1520_ = lean_ctor_get(v_decl_1514_, 1);
lean_inc_ref(v_value_1520_);
lean_dec_ref(v_decl_1514_);
v___x_1521_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__0));
v___x_1522_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointFinder_find___closed__1));
v___x_1523_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1);
v___x_1524_ = lean_st_mk_ref(v___x_1523_);
v___x_1525_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_find_spec__0___redArg(v___x_1521_, v_value_1520_, v___x_1522_, v___x_1524_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_);
if (lean_obj_tag(v___x_1525_) == 0)
{
lean_object* v___x_1527_; uint8_t v_isShared_1528_; uint8_t v_isSharedCheck_1533_; 
v_isSharedCheck_1533_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1533_ == 0)
{
lean_object* v_unused_1534_; 
v_unused_1534_ = lean_ctor_get(v___x_1525_, 0);
lean_dec(v_unused_1534_);
v___x_1527_ = v___x_1525_;
v_isShared_1528_ = v_isSharedCheck_1533_;
goto v_resetjp_1526_;
}
else
{
lean_dec(v___x_1525_);
v___x_1527_ = lean_box(0);
v_isShared_1528_ = v_isSharedCheck_1533_;
goto v_resetjp_1526_;
}
v_resetjp_1526_:
{
lean_object* v___x_1529_; lean_object* v___x_1531_; 
v___x_1529_ = lean_st_ref_get(v___x_1524_);
lean_dec(v___x_1524_);
if (v_isShared_1528_ == 0)
{
lean_ctor_set(v___x_1527_, 0, v___x_1529_);
v___x_1531_ = v___x_1527_;
goto v_reusejp_1530_;
}
else
{
lean_object* v_reuseFailAlloc_1532_; 
v_reuseFailAlloc_1532_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1532_, 0, v___x_1529_);
v___x_1531_ = v_reuseFailAlloc_1532_;
goto v_reusejp_1530_;
}
v_reusejp_1530_:
{
return v___x_1531_;
}
}
}
else
{
lean_object* v_a_1535_; lean_object* v___x_1537_; uint8_t v_isShared_1538_; uint8_t v_isSharedCheck_1542_; 
lean_dec(v___x_1524_);
v_a_1535_ = lean_ctor_get(v___x_1525_, 0);
v_isSharedCheck_1542_ = !lean_is_exclusive(v___x_1525_);
if (v_isSharedCheck_1542_ == 0)
{
v___x_1537_ = v___x_1525_;
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
else
{
lean_inc(v_a_1535_);
lean_dec(v___x_1525_);
v___x_1537_ = lean_box(0);
v_isShared_1538_ = v_isSharedCheck_1542_;
goto v_resetjp_1536_;
}
v_resetjp_1536_:
{
lean_object* v___x_1540_; 
if (v_isShared_1538_ == 0)
{
v___x_1540_ = v___x_1537_;
goto v_reusejp_1539_;
}
else
{
lean_object* v_reuseFailAlloc_1541_; 
v_reuseFailAlloc_1541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1541_, 0, v_a_1535_);
v___x_1540_ = v_reuseFailAlloc_1541_;
goto v_reusejp_1539_;
}
v_reusejp_1539_:
{
return v___x_1540_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_find___boxed(lean_object* v_decl_1543_, lean_object* v___y_1544_, lean_object* v___y_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_){
_start:
{
lean_object* v_res_1549_; 
v_res_1549_ = l_Lean_Compiler_LCNF_JoinPointFinder_find(v_decl_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_);
lean_dec(v___y_1547_);
lean_dec_ref(v___y_1546_);
lean_dec(v___y_1545_);
lean_dec_ref(v___y_1544_);
return v_res_1549_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___redArg(lean_object* v_alt_1550_, lean_object* v_f_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v___y_1559_; 
switch(lean_obj_tag(v_alt_1550_))
{
case 0:
{
lean_object* v_code_1578_; 
v_code_1578_ = lean_ctor_get(v_alt_1550_, 2);
lean_inc_ref(v_code_1578_);
v___y_1559_ = v_code_1578_;
goto v___jp_1558_;
}
case 1:
{
lean_object* v_code_1579_; 
v_code_1579_ = lean_ctor_get(v_alt_1550_, 1);
lean_inc_ref(v_code_1579_);
v___y_1559_ = v_code_1579_;
goto v___jp_1558_;
}
default: 
{
lean_object* v_code_1580_; 
v_code_1580_ = lean_ctor_get(v_alt_1550_, 0);
lean_inc_ref(v_code_1580_);
v___y_1559_ = v_code_1580_;
goto v___jp_1558_;
}
}
v___jp_1558_:
{
lean_object* v___x_1560_; 
lean_inc(v___y_1556_);
lean_inc_ref(v___y_1555_);
lean_inc(v___y_1554_);
lean_inc_ref(v___y_1553_);
lean_inc_ref(v___y_1552_);
v___x_1560_ = lean_apply_7(v_f_1551_, v___y_1559_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_, v___y_1556_, lean_box(0));
if (lean_obj_tag(v___x_1560_) == 0)
{
lean_object* v_a_1561_; lean_object* v___x_1563_; uint8_t v_isShared_1564_; uint8_t v_isSharedCheck_1569_; 
v_a_1561_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1569_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1569_ == 0)
{
v___x_1563_ = v___x_1560_;
v_isShared_1564_ = v_isSharedCheck_1569_;
goto v_resetjp_1562_;
}
else
{
lean_inc(v_a_1561_);
lean_dec(v___x_1560_);
v___x_1563_ = lean_box(0);
v_isShared_1564_ = v_isSharedCheck_1569_;
goto v_resetjp_1562_;
}
v_resetjp_1562_:
{
lean_object* v___x_1565_; lean_object* v___x_1567_; 
v___x_1565_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_1550_, v_a_1561_);
if (v_isShared_1564_ == 0)
{
lean_ctor_set(v___x_1563_, 0, v___x_1565_);
v___x_1567_ = v___x_1563_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1568_; 
v_reuseFailAlloc_1568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1568_, 0, v___x_1565_);
v___x_1567_ = v_reuseFailAlloc_1568_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
return v___x_1567_;
}
}
}
else
{
lean_object* v_a_1570_; lean_object* v___x_1572_; uint8_t v_isShared_1573_; uint8_t v_isSharedCheck_1577_; 
lean_dec_ref(v_alt_1550_);
v_a_1570_ = lean_ctor_get(v___x_1560_, 0);
v_isSharedCheck_1577_ = !lean_is_exclusive(v___x_1560_);
if (v_isSharedCheck_1577_ == 0)
{
v___x_1572_ = v___x_1560_;
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
else
{
lean_inc(v_a_1570_);
lean_dec(v___x_1560_);
v___x_1572_ = lean_box(0);
v_isShared_1573_ = v_isSharedCheck_1577_;
goto v_resetjp_1571_;
}
v_resetjp_1571_:
{
lean_object* v___x_1575_; 
if (v_isShared_1573_ == 0)
{
v___x_1575_ = v___x_1572_;
goto v_reusejp_1574_;
}
else
{
lean_object* v_reuseFailAlloc_1576_; 
v_reuseFailAlloc_1576_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1576_, 0, v_a_1570_);
v___x_1575_ = v_reuseFailAlloc_1576_;
goto v_reusejp_1574_;
}
v_reusejp_1574_:
{
return v___x_1575_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___redArg___boxed(lean_object* v_alt_1581_, lean_object* v_f_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___redArg(v_alt_1581_, v_f_1582_, v___y_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
lean_dec(v___y_1587_);
lean_dec_ref(v___y_1586_);
lean_dec(v___y_1585_);
lean_dec_ref(v___y_1584_);
lean_dec_ref(v___y_1583_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1(uint8_t v_pu_1590_, lean_object* v_alt_1591_, lean_object* v_f_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_, lean_object* v___y_1597_){
_start:
{
lean_object* v___x_1599_; 
v___x_1599_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___redArg(v_alt_1591_, v_f_1592_, v___y_1593_, v___y_1594_, v___y_1595_, v___y_1596_, v___y_1597_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___boxed(lean_object* v_pu_1600_, lean_object* v_alt_1601_, lean_object* v_f_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_){
_start:
{
uint8_t v_pu_boxed_1609_; lean_object* v_res_1610_; 
v_pu_boxed_1609_ = lean_unbox(v_pu_1600_);
v_res_1610_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1(v_pu_boxed_1609_, v_alt_1601_, v_f_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec_ref(v___y_1603_);
return v_res_1610_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(lean_object* v_m_1611_, lean_object* v_a_1612_){
_start:
{
lean_object* v_buckets_1613_; lean_object* v___x_1614_; uint64_t v___x_1615_; uint64_t v___x_1616_; uint64_t v___x_1617_; uint64_t v_fold_1618_; uint64_t v___x_1619_; uint64_t v___x_1620_; uint64_t v___x_1621_; size_t v___x_1622_; size_t v___x_1623_; size_t v___x_1624_; size_t v___x_1625_; size_t v___x_1626_; lean_object* v___x_1627_; uint8_t v___x_1628_; 
v_buckets_1613_ = lean_ctor_get(v_m_1611_, 1);
v___x_1614_ = lean_array_get_size(v_buckets_1613_);
v___x_1615_ = l_Lean_instHashableFVarId_hash(v_a_1612_);
v___x_1616_ = 32ULL;
v___x_1617_ = lean_uint64_shift_right(v___x_1615_, v___x_1616_);
v_fold_1618_ = lean_uint64_xor(v___x_1615_, v___x_1617_);
v___x_1619_ = 16ULL;
v___x_1620_ = lean_uint64_shift_right(v_fold_1618_, v___x_1619_);
v___x_1621_ = lean_uint64_xor(v_fold_1618_, v___x_1620_);
v___x_1622_ = lean_uint64_to_usize(v___x_1621_);
v___x_1623_ = lean_usize_of_nat(v___x_1614_);
v___x_1624_ = ((size_t)1ULL);
v___x_1625_ = lean_usize_sub(v___x_1623_, v___x_1624_);
v___x_1626_ = lean_usize_land(v___x_1622_, v___x_1625_);
v___x_1627_ = lean_array_uget_borrowed(v_buckets_1613_, v___x_1626_);
v___x_1628_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2_spec__3___redArg(v_a_1612_, v___x_1627_);
return v___x_1628_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg___boxed(lean_object* v_m_1629_, lean_object* v_a_1630_){
_start:
{
uint8_t v_res_1631_; lean_object* v_r_1632_; 
v_res_1631_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(v_m_1629_, v_a_1630_);
lean_dec(v_a_1630_);
lean_dec_ref(v_m_1629_);
v_r_1632_ = lean_box(v_res_1631_);
return v_r_1632_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(lean_object* v_code_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_){
_start:
{
switch(lean_obj_tag(v_code_1633_))
{
case 0:
{
lean_object* v_decl_1640_; lean_object* v_k_1641_; lean_object* v___y_1643_; lean_object* v___y_1644_; lean_object* v___y_1645_; lean_object* v___y_1646_; lean_object* v___y_1647_; 
v_decl_1640_ = lean_ctor_get(v_code_1633_, 0);
v_k_1641_ = lean_ctor_get(v_code_1633_, 1);
lean_inc_ref(v_k_1641_);
if (lean_obj_tag(v_k_1641_) == 5)
{
lean_object* v_value_1686_; 
v_value_1686_ = lean_ctor_get(v_decl_1640_, 3);
if (lean_obj_tag(v_value_1686_) == 4)
{
lean_object* v_fvarId_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1729_; 
v_fvarId_1687_ = lean_ctor_get(v_k_1641_, 0);
v_isSharedCheck_1729_ = !lean_is_exclusive(v_k_1641_);
if (v_isSharedCheck_1729_ == 0)
{
v___x_1689_ = v_k_1641_;
v_isShared_1690_ = v_isSharedCheck_1729_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_fvarId_1687_);
lean_dec(v_k_1641_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1729_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v_fvarId_1691_; lean_object* v_fvarId_1692_; lean_object* v_args_1693_; uint8_t v___x_1694_; 
v_fvarId_1691_ = lean_ctor_get(v_decl_1640_, 0);
v_fvarId_1692_ = lean_ctor_get(v_value_1686_, 0);
v_args_1693_ = lean_ctor_get(v_value_1686_, 1);
v___x_1694_ = l_Lean_instBEqFVarId_beq(v_fvarId_1687_, v_fvarId_1691_);
lean_dec(v_fvarId_1687_);
if (v___x_1694_ == 0)
{
lean_object* v___x_1696_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set_tag(v___x_1689_, 0);
lean_ctor_set(v___x_1689_, 0, v_code_1633_);
v___x_1696_ = v___x_1689_;
goto v_reusejp_1695_;
}
else
{
lean_object* v_reuseFailAlloc_1697_; 
v_reuseFailAlloc_1697_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1697_, 0, v_code_1633_);
v___x_1696_ = v_reuseFailAlloc_1697_;
goto v_reusejp_1695_;
}
v_reusejp_1695_:
{
return v___x_1696_;
}
}
else
{
uint8_t v___x_1698_; 
v___x_1698_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(v___y_1634_, v_fvarId_1692_);
if (v___x_1698_ == 0)
{
lean_object* v___x_1700_; 
if (v_isShared_1690_ == 0)
{
lean_ctor_set_tag(v___x_1689_, 0);
lean_ctor_set(v___x_1689_, 0, v_code_1633_);
v___x_1700_ = v___x_1689_;
goto v_reusejp_1699_;
}
else
{
lean_object* v_reuseFailAlloc_1701_; 
v_reuseFailAlloc_1701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1701_, 0, v_code_1633_);
v___x_1700_ = v_reuseFailAlloc_1701_;
goto v_reusejp_1699_;
}
v_reusejp_1699_:
{
return v___x_1700_;
}
}
else
{
lean_object* v___x_1703_; uint8_t v_isShared_1704_; uint8_t v_isSharedCheck_1726_; 
lean_inc_ref(v_args_1693_);
lean_inc(v_fvarId_1692_);
lean_inc_ref(v_decl_1640_);
lean_del_object(v___x_1689_);
v_isSharedCheck_1726_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1726_ == 0)
{
lean_object* v_unused_1727_; lean_object* v_unused_1728_; 
v_unused_1727_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1727_);
v_unused_1728_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1728_);
v___x_1703_ = v_code_1633_;
v_isShared_1704_ = v_isSharedCheck_1726_;
goto v_resetjp_1702_;
}
else
{
lean_dec(v_code_1633_);
v___x_1703_ = lean_box(0);
v_isShared_1704_ = v_isSharedCheck_1726_;
goto v_resetjp_1702_;
}
v_resetjp_1702_:
{
uint8_t v___x_1705_; lean_object* v___x_1706_; 
v___x_1705_ = 0;
v___x_1706_ = l_Lean_Compiler_LCNF_eraseLetDecl___redArg(v___x_1705_, v_decl_1640_, v___y_1636_);
lean_dec_ref(v_decl_1640_);
if (lean_obj_tag(v___x_1706_) == 0)
{
lean_object* v___x_1708_; uint8_t v_isShared_1709_; uint8_t v_isSharedCheck_1716_; 
v_isSharedCheck_1716_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1716_ == 0)
{
lean_object* v_unused_1717_; 
v_unused_1717_ = lean_ctor_get(v___x_1706_, 0);
lean_dec(v_unused_1717_);
v___x_1708_ = v___x_1706_;
v_isShared_1709_ = v_isSharedCheck_1716_;
goto v_resetjp_1707_;
}
else
{
lean_dec(v___x_1706_);
v___x_1708_ = lean_box(0);
v_isShared_1709_ = v_isSharedCheck_1716_;
goto v_resetjp_1707_;
}
v_resetjp_1707_:
{
lean_object* v___x_1711_; 
if (v_isShared_1704_ == 0)
{
lean_ctor_set_tag(v___x_1703_, 3);
lean_ctor_set(v___x_1703_, 1, v_args_1693_);
lean_ctor_set(v___x_1703_, 0, v_fvarId_1692_);
v___x_1711_ = v___x_1703_;
goto v_reusejp_1710_;
}
else
{
lean_object* v_reuseFailAlloc_1715_; 
v_reuseFailAlloc_1715_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1715_, 0, v_fvarId_1692_);
lean_ctor_set(v_reuseFailAlloc_1715_, 1, v_args_1693_);
v___x_1711_ = v_reuseFailAlloc_1715_;
goto v_reusejp_1710_;
}
v_reusejp_1710_:
{
lean_object* v___x_1713_; 
if (v_isShared_1709_ == 0)
{
lean_ctor_set(v___x_1708_, 0, v___x_1711_);
v___x_1713_ = v___x_1708_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1714_; 
v_reuseFailAlloc_1714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1714_, 0, v___x_1711_);
v___x_1713_ = v_reuseFailAlloc_1714_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
return v___x_1713_;
}
}
}
}
else
{
lean_object* v_a_1718_; lean_object* v___x_1720_; uint8_t v_isShared_1721_; uint8_t v_isSharedCheck_1725_; 
lean_del_object(v___x_1703_);
lean_dec_ref(v_args_1693_);
lean_dec(v_fvarId_1692_);
v_a_1718_ = lean_ctor_get(v___x_1706_, 0);
v_isSharedCheck_1725_ = !lean_is_exclusive(v___x_1706_);
if (v_isSharedCheck_1725_ == 0)
{
v___x_1720_ = v___x_1706_;
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
else
{
lean_inc(v_a_1718_);
lean_dec(v___x_1706_);
v___x_1720_ = lean_box(0);
v_isShared_1721_ = v_isSharedCheck_1725_;
goto v_resetjp_1719_;
}
v_resetjp_1719_:
{
lean_object* v___x_1723_; 
if (v_isShared_1721_ == 0)
{
v___x_1723_ = v___x_1720_;
goto v_reusejp_1722_;
}
else
{
lean_object* v_reuseFailAlloc_1724_; 
v_reuseFailAlloc_1724_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1724_, 0, v_a_1718_);
v___x_1723_ = v_reuseFailAlloc_1724_;
goto v_reusejp_1722_;
}
v_reusejp_1722_:
{
return v___x_1723_;
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
v___y_1643_ = v___y_1634_;
v___y_1644_ = v___y_1635_;
v___y_1645_ = v___y_1636_;
v___y_1646_ = v___y_1637_;
v___y_1647_ = v___y_1638_;
goto v___jp_1642_;
}
}
else
{
v___y_1643_ = v___y_1634_;
v___y_1644_ = v___y_1635_;
v___y_1645_ = v___y_1636_;
v___y_1646_ = v___y_1637_;
v___y_1647_ = v___y_1638_;
goto v___jp_1642_;
}
v___jp_1642_:
{
lean_object* v___x_1648_; 
lean_inc_ref(v_k_1641_);
v___x_1648_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_k_1641_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
if (lean_obj_tag(v___x_1648_) == 0)
{
lean_object* v_a_1649_; lean_object* v___x_1651_; uint8_t v_isShared_1652_; uint8_t v_isSharedCheck_1685_; 
v_a_1649_ = lean_ctor_get(v___x_1648_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1648_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1651_ = v___x_1648_;
v_isShared_1652_ = v_isSharedCheck_1685_;
goto v_resetjp_1650_;
}
else
{
lean_inc(v_a_1649_);
lean_dec(v___x_1648_);
v___x_1651_ = lean_box(0);
v_isShared_1652_ = v_isSharedCheck_1685_;
goto v_resetjp_1650_;
}
v_resetjp_1650_:
{
size_t v___x_1653_; size_t v___x_1654_; uint8_t v___x_1655_; 
v___x_1653_ = lean_ptr_addr(v_k_1641_);
lean_dec_ref(v_k_1641_);
v___x_1654_ = lean_ptr_addr(v_a_1649_);
v___x_1655_ = lean_usize_dec_eq(v___x_1653_, v___x_1654_);
if (v___x_1655_ == 0)
{
lean_object* v___x_1657_; uint8_t v_isShared_1658_; uint8_t v_isSharedCheck_1665_; 
lean_inc_ref(v_decl_1640_);
v_isSharedCheck_1665_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1665_ == 0)
{
lean_object* v_unused_1666_; lean_object* v_unused_1667_; 
v_unused_1666_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1666_);
v_unused_1667_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1667_);
v___x_1657_ = v_code_1633_;
v_isShared_1658_ = v_isSharedCheck_1665_;
goto v_resetjp_1656_;
}
else
{
lean_dec(v_code_1633_);
v___x_1657_ = lean_box(0);
v_isShared_1658_ = v_isSharedCheck_1665_;
goto v_resetjp_1656_;
}
v_resetjp_1656_:
{
lean_object* v___x_1660_; 
if (v_isShared_1658_ == 0)
{
lean_ctor_set(v___x_1657_, 1, v_a_1649_);
v___x_1660_ = v___x_1657_;
goto v_reusejp_1659_;
}
else
{
lean_object* v_reuseFailAlloc_1664_; 
v_reuseFailAlloc_1664_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1664_, 0, v_decl_1640_);
lean_ctor_set(v_reuseFailAlloc_1664_, 1, v_a_1649_);
v___x_1660_ = v_reuseFailAlloc_1664_;
goto v_reusejp_1659_;
}
v_reusejp_1659_:
{
lean_object* v___x_1662_; 
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v___x_1660_);
v___x_1662_ = v___x_1651_;
goto v_reusejp_1661_;
}
else
{
lean_object* v_reuseFailAlloc_1663_; 
v_reuseFailAlloc_1663_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1663_, 0, v___x_1660_);
v___x_1662_ = v_reuseFailAlloc_1663_;
goto v_reusejp_1661_;
}
v_reusejp_1661_:
{
return v___x_1662_;
}
}
}
}
else
{
size_t v___x_1668_; uint8_t v___x_1669_; 
v___x_1668_ = lean_ptr_addr(v_decl_1640_);
v___x_1669_ = lean_usize_dec_eq(v___x_1668_, v___x_1668_);
if (v___x_1669_ == 0)
{
lean_object* v___x_1671_; uint8_t v_isShared_1672_; uint8_t v_isSharedCheck_1679_; 
lean_inc_ref(v_decl_1640_);
v_isSharedCheck_1679_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1679_ == 0)
{
lean_object* v_unused_1680_; lean_object* v_unused_1681_; 
v_unused_1680_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1680_);
v_unused_1681_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1681_);
v___x_1671_ = v_code_1633_;
v_isShared_1672_ = v_isSharedCheck_1679_;
goto v_resetjp_1670_;
}
else
{
lean_dec(v_code_1633_);
v___x_1671_ = lean_box(0);
v_isShared_1672_ = v_isSharedCheck_1679_;
goto v_resetjp_1670_;
}
v_resetjp_1670_:
{
lean_object* v___x_1674_; 
if (v_isShared_1672_ == 0)
{
lean_ctor_set(v___x_1671_, 1, v_a_1649_);
v___x_1674_ = v___x_1671_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1678_; 
v_reuseFailAlloc_1678_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1678_, 0, v_decl_1640_);
lean_ctor_set(v_reuseFailAlloc_1678_, 1, v_a_1649_);
v___x_1674_ = v_reuseFailAlloc_1678_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
lean_object* v___x_1676_; 
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v___x_1674_);
v___x_1676_ = v___x_1651_;
goto v_reusejp_1675_;
}
else
{
lean_object* v_reuseFailAlloc_1677_; 
v_reuseFailAlloc_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1677_, 0, v___x_1674_);
v___x_1676_ = v_reuseFailAlloc_1677_;
goto v_reusejp_1675_;
}
v_reusejp_1675_:
{
return v___x_1676_;
}
}
}
}
else
{
lean_object* v___x_1683_; 
lean_dec(v_a_1649_);
if (v_isShared_1652_ == 0)
{
lean_ctor_set(v___x_1651_, 0, v_code_1633_);
v___x_1683_ = v___x_1651_;
goto v_reusejp_1682_;
}
else
{
lean_object* v_reuseFailAlloc_1684_; 
v_reuseFailAlloc_1684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1684_, 0, v_code_1633_);
v___x_1683_ = v_reuseFailAlloc_1684_;
goto v_reusejp_1682_;
}
v_reusejp_1682_:
{
return v___x_1683_;
}
}
}
}
}
else
{
lean_dec_ref(v_k_1641_);
lean_dec_ref_known(v_code_1633_, 2);
return v___x_1648_;
}
}
}
case 1:
{
lean_object* v_decl_1730_; lean_object* v_k_1731_; lean_object* v_fvarId_1732_; lean_object* v_params_1733_; lean_object* v_type_1734_; lean_object* v_value_1735_; lean_object* v___x_1736_; 
v_decl_1730_ = lean_ctor_get(v_code_1633_, 0);
lean_inc_ref(v_decl_1730_);
v_k_1731_ = lean_ctor_get(v_code_1633_, 1);
v_fvarId_1732_ = lean_ctor_get(v_decl_1730_, 0);
v_params_1733_ = lean_ctor_get(v_decl_1730_, 2);
v_type_1734_ = lean_ctor_get(v_decl_1730_, 3);
v_value_1735_ = lean_ctor_get(v_decl_1730_, 4);
v___x_1736_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(v___y_1634_, v_fvarId_1732_);
if (lean_obj_tag(v___x_1736_) == 1)
{
lean_object* v___x_1738_; uint8_t v_isShared_1739_; uint8_t v_isSharedCheck_1780_; 
lean_inc_ref(v_value_1735_);
lean_inc_ref(v_type_1734_);
lean_inc_ref(v_params_1733_);
lean_inc(v_fvarId_1732_);
lean_inc_ref(v_k_1731_);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1780_ == 0)
{
lean_object* v_unused_1781_; lean_object* v_unused_1782_; 
v_unused_1781_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1781_);
v_unused_1782_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1782_);
v___x_1738_ = v_code_1633_;
v_isShared_1739_ = v_isSharedCheck_1780_;
goto v_resetjp_1737_;
}
else
{
lean_dec(v_code_1633_);
v___x_1738_ = lean_box(0);
v_isShared_1739_ = v_isSharedCheck_1780_;
goto v_resetjp_1737_;
}
v_resetjp_1737_:
{
lean_object* v___x_1741_; uint8_t v_isShared_1742_; uint8_t v_isSharedCheck_1774_; 
v_isSharedCheck_1774_ = !lean_is_exclusive(v_decl_1730_);
if (v_isSharedCheck_1774_ == 0)
{
lean_object* v_unused_1775_; lean_object* v_unused_1776_; lean_object* v_unused_1777_; lean_object* v_unused_1778_; lean_object* v_unused_1779_; 
v_unused_1775_ = lean_ctor_get(v_decl_1730_, 4);
lean_dec(v_unused_1775_);
v_unused_1776_ = lean_ctor_get(v_decl_1730_, 3);
lean_dec(v_unused_1776_);
v_unused_1777_ = lean_ctor_get(v_decl_1730_, 2);
lean_dec(v_unused_1777_);
v_unused_1778_ = lean_ctor_get(v_decl_1730_, 1);
lean_dec(v_unused_1778_);
v_unused_1779_ = lean_ctor_get(v_decl_1730_, 0);
lean_dec(v_unused_1779_);
v___x_1741_ = v_decl_1730_;
v_isShared_1742_ = v_isSharedCheck_1774_;
goto v_resetjp_1740_;
}
else
{
lean_dec(v_decl_1730_);
v___x_1741_ = lean_box(0);
v_isShared_1742_ = v_isSharedCheck_1774_;
goto v_resetjp_1740_;
}
v_resetjp_1740_:
{
lean_object* v_val_1743_; uint8_t v___x_1744_; lean_object* v___x_1745_; 
v_val_1743_ = lean_ctor_get(v___x_1736_, 0);
lean_inc(v_val_1743_);
lean_dec_ref_known(v___x_1736_, 1);
v___x_1744_ = 0;
v___x_1745_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_value_1735_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1745_) == 0)
{
lean_object* v_a_1746_; lean_object* v___x_1748_; 
v_a_1746_ = lean_ctor_get(v___x_1745_, 0);
lean_inc(v_a_1746_);
lean_dec_ref_known(v___x_1745_, 1);
if (v_isShared_1742_ == 0)
{
lean_ctor_set(v___x_1741_, 4, v_a_1746_);
lean_ctor_set(v___x_1741_, 1, v_val_1743_);
v___x_1748_ = v___x_1741_;
goto v_reusejp_1747_;
}
else
{
lean_object* v_reuseFailAlloc_1773_; 
v_reuseFailAlloc_1773_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1773_, 0, v_fvarId_1732_);
lean_ctor_set(v_reuseFailAlloc_1773_, 1, v_val_1743_);
lean_ctor_set(v_reuseFailAlloc_1773_, 2, v_params_1733_);
lean_ctor_set(v_reuseFailAlloc_1773_, 3, v_type_1734_);
lean_ctor_set(v_reuseFailAlloc_1773_, 4, v_a_1746_);
v___x_1748_ = v_reuseFailAlloc_1773_;
goto v_reusejp_1747_;
}
v_reusejp_1747_:
{
lean_object* v___x_1749_; lean_object* v_lctx_1750_; lean_object* v_nextIdx_1751_; lean_object* v___x_1753_; uint8_t v_isShared_1754_; uint8_t v_isSharedCheck_1772_; 
v___x_1749_ = lean_st_ref_take(v___y_1636_);
v_lctx_1750_ = lean_ctor_get(v___x_1749_, 0);
v_nextIdx_1751_ = lean_ctor_get(v___x_1749_, 1);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1749_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1753_ = v___x_1749_;
v_isShared_1754_ = v_isSharedCheck_1772_;
goto v_resetjp_1752_;
}
else
{
lean_inc(v_nextIdx_1751_);
lean_inc(v_lctx_1750_);
lean_dec(v___x_1749_);
v___x_1753_ = lean_box(0);
v_isShared_1754_ = v_isSharedCheck_1772_;
goto v_resetjp_1752_;
}
v_resetjp_1752_:
{
lean_object* v___x_1755_; lean_object* v___x_1757_; 
lean_inc_ref(v___x_1748_);
v___x_1755_ = l_Lean_Compiler_LCNF_LCtx_addFunDecl(v___x_1744_, v_lctx_1750_, v___x_1748_);
if (v_isShared_1754_ == 0)
{
lean_ctor_set(v___x_1753_, 0, v___x_1755_);
v___x_1757_ = v___x_1753_;
goto v_reusejp_1756_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v___x_1755_);
lean_ctor_set(v_reuseFailAlloc_1771_, 1, v_nextIdx_1751_);
v___x_1757_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1756_;
}
v_reusejp_1756_:
{
lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___x_1758_ = lean_st_ref_put(v___y_1636_, v___x_1757_);
v___x_1759_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_k_1731_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1759_) == 0)
{
lean_object* v_a_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1770_; 
v_a_1760_ = lean_ctor_get(v___x_1759_, 0);
v_isSharedCheck_1770_ = !lean_is_exclusive(v___x_1759_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1762_ = v___x_1759_;
v_isShared_1763_ = v_isSharedCheck_1770_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_a_1760_);
lean_dec(v___x_1759_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1770_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1765_; 
if (v_isShared_1739_ == 0)
{
lean_ctor_set_tag(v___x_1738_, 2);
lean_ctor_set(v___x_1738_, 1, v_a_1760_);
lean_ctor_set(v___x_1738_, 0, v___x_1748_);
v___x_1765_ = v___x_1738_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v___x_1748_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v_a_1760_);
v___x_1765_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
lean_object* v___x_1767_; 
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1765_);
v___x_1767_ = v___x_1762_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1765_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
else
{
lean_dec_ref(v___x_1748_);
lean_del_object(v___x_1738_);
return v___x_1759_;
}
}
}
}
}
else
{
lean_dec(v_val_1743_);
lean_del_object(v___x_1741_);
lean_del_object(v___x_1738_);
lean_dec_ref(v_type_1734_);
lean_dec_ref(v_params_1733_);
lean_dec(v_fvarId_1732_);
lean_dec_ref(v_k_1731_);
return v___x_1745_;
}
}
}
}
else
{
uint8_t v___x_1783_; lean_object* v___x_1784_; 
lean_dec(v___x_1736_);
v___x_1783_ = 0;
lean_inc_ref(v_value_1735_);
v___x_1784_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_value_1735_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1784_) == 0)
{
lean_object* v_a_1785_; lean_object* v___x_1786_; 
v_a_1785_ = lean_ctor_get(v___x_1784_, 0);
lean_inc(v_a_1785_);
lean_dec_ref_known(v___x_1784_, 1);
lean_inc_ref(v_params_1733_);
lean_inc_ref(v_type_1734_);
lean_inc_ref(v_decl_1730_);
v___x_1786_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1783_, v_decl_1730_, v_type_1734_, v_params_1733_, v_a_1785_, v___y_1636_);
if (lean_obj_tag(v___x_1786_) == 0)
{
lean_object* v_a_1787_; lean_object* v___x_1788_; 
v_a_1787_ = lean_ctor_get(v___x_1786_, 0);
lean_inc(v_a_1787_);
lean_dec_ref_known(v___x_1786_, 1);
lean_inc_ref(v_k_1731_);
v___x_1788_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_k_1731_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1788_) == 0)
{
lean_object* v_a_1789_; lean_object* v___x_1791_; uint8_t v_isShared_1792_; uint8_t v_isSharedCheck_1826_; 
v_a_1789_ = lean_ctor_get(v___x_1788_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v___x_1788_);
if (v_isSharedCheck_1826_ == 0)
{
v___x_1791_ = v___x_1788_;
v_isShared_1792_ = v_isSharedCheck_1826_;
goto v_resetjp_1790_;
}
else
{
lean_inc(v_a_1789_);
lean_dec(v___x_1788_);
v___x_1791_ = lean_box(0);
v_isShared_1792_ = v_isSharedCheck_1826_;
goto v_resetjp_1790_;
}
v_resetjp_1790_:
{
size_t v___x_1793_; size_t v___x_1794_; uint8_t v___x_1795_; 
v___x_1793_ = lean_ptr_addr(v_k_1731_);
v___x_1794_ = lean_ptr_addr(v_a_1789_);
v___x_1795_ = lean_usize_dec_eq(v___x_1793_, v___x_1794_);
if (v___x_1795_ == 0)
{
lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1805_; 
lean_dec_ref(v_decl_1730_);
v_isSharedCheck_1805_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1805_ == 0)
{
lean_object* v_unused_1806_; lean_object* v_unused_1807_; 
v_unused_1806_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1806_);
v_unused_1807_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1807_);
v___x_1797_ = v_code_1633_;
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
else
{
lean_dec(v_code_1633_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1805_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1800_; 
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v_a_1789_);
lean_ctor_set(v___x_1797_, 0, v_a_1787_);
v___x_1800_ = v___x_1797_;
goto v_reusejp_1799_;
}
else
{
lean_object* v_reuseFailAlloc_1804_; 
v_reuseFailAlloc_1804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1804_, 0, v_a_1787_);
lean_ctor_set(v_reuseFailAlloc_1804_, 1, v_a_1789_);
v___x_1800_ = v_reuseFailAlloc_1804_;
goto v_reusejp_1799_;
}
v_reusejp_1799_:
{
lean_object* v___x_1802_; 
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v___x_1800_);
v___x_1802_ = v___x_1791_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1803_; 
v_reuseFailAlloc_1803_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1803_, 0, v___x_1800_);
v___x_1802_ = v_reuseFailAlloc_1803_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
return v___x_1802_;
}
}
}
}
else
{
size_t v___x_1808_; size_t v___x_1809_; uint8_t v___x_1810_; 
v___x_1808_ = lean_ptr_addr(v_decl_1730_);
lean_dec_ref(v_decl_1730_);
v___x_1809_ = lean_ptr_addr(v_a_1787_);
v___x_1810_ = lean_usize_dec_eq(v___x_1808_, v___x_1809_);
if (v___x_1810_ == 0)
{
lean_object* v___x_1812_; uint8_t v_isShared_1813_; uint8_t v_isSharedCheck_1820_; 
v_isSharedCheck_1820_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1820_ == 0)
{
lean_object* v_unused_1821_; lean_object* v_unused_1822_; 
v_unused_1821_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1821_);
v_unused_1822_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1822_);
v___x_1812_ = v_code_1633_;
v_isShared_1813_ = v_isSharedCheck_1820_;
goto v_resetjp_1811_;
}
else
{
lean_dec(v_code_1633_);
v___x_1812_ = lean_box(0);
v_isShared_1813_ = v_isSharedCheck_1820_;
goto v_resetjp_1811_;
}
v_resetjp_1811_:
{
lean_object* v___x_1815_; 
if (v_isShared_1813_ == 0)
{
lean_ctor_set(v___x_1812_, 1, v_a_1789_);
lean_ctor_set(v___x_1812_, 0, v_a_1787_);
v___x_1815_ = v___x_1812_;
goto v_reusejp_1814_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v_a_1787_);
lean_ctor_set(v_reuseFailAlloc_1819_, 1, v_a_1789_);
v___x_1815_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1814_;
}
v_reusejp_1814_:
{
lean_object* v___x_1817_; 
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v___x_1815_);
v___x_1817_ = v___x_1791_;
goto v_reusejp_1816_;
}
else
{
lean_object* v_reuseFailAlloc_1818_; 
v_reuseFailAlloc_1818_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1818_, 0, v___x_1815_);
v___x_1817_ = v_reuseFailAlloc_1818_;
goto v_reusejp_1816_;
}
v_reusejp_1816_:
{
return v___x_1817_;
}
}
}
}
else
{
lean_object* v___x_1824_; 
lean_dec(v_a_1789_);
lean_dec(v_a_1787_);
if (v_isShared_1792_ == 0)
{
lean_ctor_set(v___x_1791_, 0, v_code_1633_);
v___x_1824_ = v___x_1791_;
goto v_reusejp_1823_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_code_1633_);
v___x_1824_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1823_;
}
v_reusejp_1823_:
{
return v___x_1824_;
}
}
}
}
}
else
{
lean_dec(v_a_1787_);
lean_dec_ref(v_decl_1730_);
lean_dec_ref_known(v_code_1633_, 2);
return v___x_1788_;
}
}
else
{
lean_object* v_a_1827_; lean_object* v___x_1829_; uint8_t v_isShared_1830_; uint8_t v_isSharedCheck_1834_; 
lean_dec_ref(v_decl_1730_);
lean_dec_ref_known(v_code_1633_, 2);
v_a_1827_ = lean_ctor_get(v___x_1786_, 0);
v_isSharedCheck_1834_ = !lean_is_exclusive(v___x_1786_);
if (v_isSharedCheck_1834_ == 0)
{
v___x_1829_ = v___x_1786_;
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
else
{
lean_inc(v_a_1827_);
lean_dec(v___x_1786_);
v___x_1829_ = lean_box(0);
v_isShared_1830_ = v_isSharedCheck_1834_;
goto v_resetjp_1828_;
}
v_resetjp_1828_:
{
lean_object* v___x_1832_; 
if (v_isShared_1830_ == 0)
{
v___x_1832_ = v___x_1829_;
goto v_reusejp_1831_;
}
else
{
lean_object* v_reuseFailAlloc_1833_; 
v_reuseFailAlloc_1833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1833_, 0, v_a_1827_);
v___x_1832_ = v_reuseFailAlloc_1833_;
goto v_reusejp_1831_;
}
v_reusejp_1831_:
{
return v___x_1832_;
}
}
}
}
else
{
lean_dec_ref(v_decl_1730_);
lean_dec_ref_known(v_code_1633_, 2);
return v___x_1784_;
}
}
}
case 2:
{
lean_object* v_decl_1835_; lean_object* v_k_1836_; lean_object* v_params_1837_; lean_object* v_type_1838_; lean_object* v_value_1839_; uint8_t v___x_1840_; lean_object* v___x_1841_; 
v_decl_1835_ = lean_ctor_get(v_code_1633_, 0);
v_k_1836_ = lean_ctor_get(v_code_1633_, 1);
v_params_1837_ = lean_ctor_get(v_decl_1835_, 2);
v_type_1838_ = lean_ctor_get(v_decl_1835_, 3);
v_value_1839_ = lean_ctor_get(v_decl_1835_, 4);
v___x_1840_ = 0;
lean_inc_ref(v_value_1839_);
v___x_1841_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_value_1839_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; lean_object* v___x_1843_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
lean_inc_ref(v_params_1837_);
lean_inc_ref(v_type_1838_);
lean_inc_ref(v_decl_1835_);
v___x_1843_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_1840_, v_decl_1835_, v_type_1838_, v_params_1837_, v_a_1842_, v___y_1636_);
if (lean_obj_tag(v___x_1843_) == 0)
{
lean_object* v_a_1844_; lean_object* v___x_1845_; 
v_a_1844_ = lean_ctor_get(v___x_1843_, 0);
lean_inc(v_a_1844_);
lean_dec_ref_known(v___x_1843_, 1);
lean_inc_ref(v_k_1836_);
v___x_1845_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_k_1836_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1845_) == 0)
{
lean_object* v_a_1846_; lean_object* v___x_1848_; uint8_t v_isShared_1849_; uint8_t v_isSharedCheck_1883_; 
v_a_1846_ = lean_ctor_get(v___x_1845_, 0);
v_isSharedCheck_1883_ = !lean_is_exclusive(v___x_1845_);
if (v_isSharedCheck_1883_ == 0)
{
v___x_1848_ = v___x_1845_;
v_isShared_1849_ = v_isSharedCheck_1883_;
goto v_resetjp_1847_;
}
else
{
lean_inc(v_a_1846_);
lean_dec(v___x_1845_);
v___x_1848_ = lean_box(0);
v_isShared_1849_ = v_isSharedCheck_1883_;
goto v_resetjp_1847_;
}
v_resetjp_1847_:
{
size_t v___x_1850_; size_t v___x_1851_; uint8_t v___x_1852_; 
v___x_1850_ = lean_ptr_addr(v_k_1836_);
v___x_1851_ = lean_ptr_addr(v_a_1846_);
v___x_1852_ = lean_usize_dec_eq(v___x_1850_, v___x_1851_);
if (v___x_1852_ == 0)
{
lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1862_; 
v_isSharedCheck_1862_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1862_ == 0)
{
lean_object* v_unused_1863_; lean_object* v_unused_1864_; 
v_unused_1863_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1863_);
v_unused_1864_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1864_);
v___x_1854_ = v_code_1633_;
v_isShared_1855_ = v_isSharedCheck_1862_;
goto v_resetjp_1853_;
}
else
{
lean_dec(v_code_1633_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1862_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 1, v_a_1846_);
lean_ctor_set(v___x_1854_, 0, v_a_1844_);
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1861_; 
v_reuseFailAlloc_1861_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1861_, 0, v_a_1844_);
lean_ctor_set(v_reuseFailAlloc_1861_, 1, v_a_1846_);
v___x_1857_ = v_reuseFailAlloc_1861_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
lean_object* v___x_1859_; 
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v___x_1857_);
v___x_1859_ = v___x_1848_;
goto v_reusejp_1858_;
}
else
{
lean_object* v_reuseFailAlloc_1860_; 
v_reuseFailAlloc_1860_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1860_, 0, v___x_1857_);
v___x_1859_ = v_reuseFailAlloc_1860_;
goto v_reusejp_1858_;
}
v_reusejp_1858_:
{
return v___x_1859_;
}
}
}
}
else
{
size_t v___x_1865_; size_t v___x_1866_; uint8_t v___x_1867_; 
v___x_1865_ = lean_ptr_addr(v_decl_1835_);
v___x_1866_ = lean_ptr_addr(v_a_1844_);
v___x_1867_ = lean_usize_dec_eq(v___x_1865_, v___x_1866_);
if (v___x_1867_ == 0)
{
lean_object* v___x_1869_; uint8_t v_isShared_1870_; uint8_t v_isSharedCheck_1877_; 
v_isSharedCheck_1877_ = !lean_is_exclusive(v_code_1633_);
if (v_isSharedCheck_1877_ == 0)
{
lean_object* v_unused_1878_; lean_object* v_unused_1879_; 
v_unused_1878_ = lean_ctor_get(v_code_1633_, 1);
lean_dec(v_unused_1878_);
v_unused_1879_ = lean_ctor_get(v_code_1633_, 0);
lean_dec(v_unused_1879_);
v___x_1869_ = v_code_1633_;
v_isShared_1870_ = v_isSharedCheck_1877_;
goto v_resetjp_1868_;
}
else
{
lean_dec(v_code_1633_);
v___x_1869_ = lean_box(0);
v_isShared_1870_ = v_isSharedCheck_1877_;
goto v_resetjp_1868_;
}
v_resetjp_1868_:
{
lean_object* v___x_1872_; 
if (v_isShared_1870_ == 0)
{
lean_ctor_set(v___x_1869_, 1, v_a_1846_);
lean_ctor_set(v___x_1869_, 0, v_a_1844_);
v___x_1872_ = v___x_1869_;
goto v_reusejp_1871_;
}
else
{
lean_object* v_reuseFailAlloc_1876_; 
v_reuseFailAlloc_1876_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1876_, 0, v_a_1844_);
lean_ctor_set(v_reuseFailAlloc_1876_, 1, v_a_1846_);
v___x_1872_ = v_reuseFailAlloc_1876_;
goto v_reusejp_1871_;
}
v_reusejp_1871_:
{
lean_object* v___x_1874_; 
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v___x_1872_);
v___x_1874_ = v___x_1848_;
goto v_reusejp_1873_;
}
else
{
lean_object* v_reuseFailAlloc_1875_; 
v_reuseFailAlloc_1875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1875_, 0, v___x_1872_);
v___x_1874_ = v_reuseFailAlloc_1875_;
goto v_reusejp_1873_;
}
v_reusejp_1873_:
{
return v___x_1874_;
}
}
}
}
else
{
lean_object* v___x_1881_; 
lean_dec(v_a_1846_);
lean_dec(v_a_1844_);
if (v_isShared_1849_ == 0)
{
lean_ctor_set(v___x_1848_, 0, v_code_1633_);
v___x_1881_ = v___x_1848_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1882_; 
v_reuseFailAlloc_1882_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1882_, 0, v_code_1633_);
v___x_1881_ = v_reuseFailAlloc_1882_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
return v___x_1881_;
}
}
}
}
}
else
{
lean_dec(v_a_1844_);
lean_dec_ref_known(v_code_1633_, 2);
return v___x_1845_;
}
}
else
{
lean_object* v_a_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1891_; 
lean_dec_ref_known(v_code_1633_, 2);
v_a_1884_ = lean_ctor_get(v___x_1843_, 0);
v_isSharedCheck_1891_ = !lean_is_exclusive(v___x_1843_);
if (v_isSharedCheck_1891_ == 0)
{
v___x_1886_ = v___x_1843_;
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_a_1884_);
lean_dec(v___x_1843_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1891_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1889_; 
if (v_isShared_1887_ == 0)
{
v___x_1889_ = v___x_1886_;
goto v_reusejp_1888_;
}
else
{
lean_object* v_reuseFailAlloc_1890_; 
v_reuseFailAlloc_1890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1890_, 0, v_a_1884_);
v___x_1889_ = v_reuseFailAlloc_1890_;
goto v_reusejp_1888_;
}
v_reusejp_1888_:
{
return v___x_1889_;
}
}
}
}
else
{
lean_dec_ref_known(v_code_1633_, 2);
return v___x_1841_;
}
}
case 4:
{
lean_object* v_cases_1892_; lean_object* v_typeName_1893_; lean_object* v_resultType_1894_; lean_object* v_discr_1895_; lean_object* v_alts_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1930_; 
v_cases_1892_ = lean_ctor_get(v_code_1633_, 0);
lean_inc_ref(v_cases_1892_);
v_typeName_1893_ = lean_ctor_get(v_cases_1892_, 0);
v_resultType_1894_ = lean_ctor_get(v_cases_1892_, 1);
v_discr_1895_ = lean_ctor_get(v_cases_1892_, 2);
v_alts_1896_ = lean_ctor_get(v_cases_1892_, 3);
v_isSharedCheck_1930_ = !lean_is_exclusive(v_cases_1892_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1898_ = v_cases_1892_;
v_isShared_1899_ = v_isSharedCheck_1930_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_alts_1896_);
lean_inc(v_discr_1895_);
lean_inc(v_resultType_1894_);
lean_inc(v_typeName_1893_);
lean_dec(v_cases_1892_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1930_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1901_; 
v___x_1900_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_1896_);
v___x_1901_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__2(v___x_1900_, v_alts_1896_, v___y_1634_, v___y_1635_, v___y_1636_, v___y_1637_, v___y_1638_);
if (lean_obj_tag(v___x_1901_) == 0)
{
lean_object* v_a_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1921_; 
v_a_1902_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1921_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1904_ = v___x_1901_;
v_isShared_1905_ = v_isSharedCheck_1921_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_a_1902_);
lean_dec(v___x_1901_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1921_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
size_t v___x_1914_; size_t v___x_1915_; uint8_t v___x_1916_; 
v___x_1914_ = lean_ptr_addr(v_alts_1896_);
lean_dec_ref(v_alts_1896_);
v___x_1915_ = lean_ptr_addr(v_a_1902_);
v___x_1916_ = lean_usize_dec_eq(v___x_1914_, v___x_1915_);
if (v___x_1916_ == 0)
{
lean_dec_ref_known(v_code_1633_, 1);
goto v___jp_1906_;
}
else
{
size_t v___x_1917_; uint8_t v___x_1918_; 
v___x_1917_ = lean_ptr_addr(v_resultType_1894_);
v___x_1918_ = lean_usize_dec_eq(v___x_1917_, v___x_1917_);
if (v___x_1918_ == 0)
{
lean_dec_ref_known(v_code_1633_, 1);
goto v___jp_1906_;
}
else
{
uint8_t v___x_1919_; 
v___x_1919_ = l_Lean_instBEqFVarId_beq(v_discr_1895_, v_discr_1895_);
if (v___x_1919_ == 0)
{
lean_dec_ref_known(v_code_1633_, 1);
goto v___jp_1906_;
}
else
{
lean_object* v___x_1920_; 
lean_del_object(v___x_1904_);
lean_dec(v_a_1902_);
lean_del_object(v___x_1898_);
lean_dec(v_discr_1895_);
lean_dec_ref(v_resultType_1894_);
lean_dec(v_typeName_1893_);
v___x_1920_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1920_, 0, v_code_1633_);
return v___x_1920_;
}
}
}
v___jp_1906_:
{
lean_object* v___x_1908_; 
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 3, v_a_1902_);
v___x_1908_ = v___x_1898_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_typeName_1893_);
lean_ctor_set(v_reuseFailAlloc_1913_, 1, v_resultType_1894_);
lean_ctor_set(v_reuseFailAlloc_1913_, 2, v_discr_1895_);
lean_ctor_set(v_reuseFailAlloc_1913_, 3, v_a_1902_);
v___x_1908_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
lean_object* v___x_1909_; lean_object* v___x_1911_; 
v___x_1909_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1909_, 0, v___x_1908_);
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 0, v___x_1909_);
v___x_1911_ = v___x_1904_;
goto v_reusejp_1910_;
}
else
{
lean_object* v_reuseFailAlloc_1912_; 
v_reuseFailAlloc_1912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1912_, 0, v___x_1909_);
v___x_1911_ = v_reuseFailAlloc_1912_;
goto v_reusejp_1910_;
}
v_reusejp_1910_:
{
return v___x_1911_;
}
}
}
}
}
else
{
lean_object* v_a_1922_; lean_object* v___x_1924_; uint8_t v_isShared_1925_; uint8_t v_isSharedCheck_1929_; 
lean_del_object(v___x_1898_);
lean_dec_ref(v_alts_1896_);
lean_dec(v_discr_1895_);
lean_dec_ref(v_resultType_1894_);
lean_dec(v_typeName_1893_);
lean_dec_ref_known(v_code_1633_, 1);
v_a_1922_ = lean_ctor_get(v___x_1901_, 0);
v_isSharedCheck_1929_ = !lean_is_exclusive(v___x_1901_);
if (v_isSharedCheck_1929_ == 0)
{
v___x_1924_ = v___x_1901_;
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
else
{
lean_inc(v_a_1922_);
lean_dec(v___x_1901_);
v___x_1924_ = lean_box(0);
v_isShared_1925_ = v_isSharedCheck_1929_;
goto v_resetjp_1923_;
}
v_resetjp_1923_:
{
lean_object* v___x_1927_; 
if (v_isShared_1925_ == 0)
{
v___x_1927_ = v___x_1924_;
goto v_reusejp_1926_;
}
else
{
lean_object* v_reuseFailAlloc_1928_; 
v_reuseFailAlloc_1928_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1928_, 0, v_a_1922_);
v___x_1927_ = v_reuseFailAlloc_1928_;
goto v_reusejp_1926_;
}
v_reusejp_1926_:
{
return v___x_1927_;
}
}
}
}
}
default: 
{
lean_object* v___x_1931_; 
v___x_1931_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1931_, 0, v_code_1633_);
return v___x_1931_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go___boxed(lean_object* v_code_1932_, lean_object* v___y_1933_, lean_object* v___y_1934_, lean_object* v___y_1935_, lean_object* v___y_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_){
_start:
{
lean_object* v_res_1939_; 
v_res_1939_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go(v_code_1932_, v___y_1933_, v___y_1934_, v___y_1935_, v___y_1936_, v___y_1937_);
lean_dec(v___y_1937_);
lean_dec_ref(v___y_1936_);
lean_dec(v___y_1935_);
lean_dec_ref(v___y_1934_);
lean_dec_ref(v___y_1933_);
return v_res_1939_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__2(lean_object* v_i_1940_, lean_object* v_as_1941_, lean_object* v___y_1942_, lean_object* v___y_1943_, lean_object* v___y_1944_, lean_object* v___y_1945_, lean_object* v___y_1946_){
_start:
{
lean_object* v___x_1948_; uint8_t v___x_1949_; 
v___x_1948_ = lean_array_get_size(v_as_1941_);
v___x_1949_ = lean_nat_dec_lt(v_i_1940_, v___x_1948_);
if (v___x_1949_ == 0)
{
lean_object* v___x_1950_; 
lean_dec(v_i_1940_);
v___x_1950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1950_, 0, v_as_1941_);
return v___x_1950_;
}
else
{
lean_object* v_a_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; 
v_a_1951_ = lean_array_fget_borrowed(v_as_1941_, v_i_1940_);
v___x_1952_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go___boxed), 7, 0);
lean_inc(v_a_1951_);
v___x_1953_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__1___redArg(v_a_1951_, v___x_1952_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_);
if (lean_obj_tag(v___x_1953_) == 0)
{
lean_object* v_a_1954_; size_t v___x_1955_; size_t v___x_1956_; uint8_t v___x_1957_; 
v_a_1954_ = lean_ctor_get(v___x_1953_, 0);
lean_inc(v_a_1954_);
lean_dec_ref_known(v___x_1953_, 1);
v___x_1955_ = lean_ptr_addr(v_a_1951_);
v___x_1956_ = lean_ptr_addr(v_a_1954_);
v___x_1957_ = lean_usize_dec_eq(v___x_1955_, v___x_1956_);
if (v___x_1957_ == 0)
{
lean_object* v___x_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; 
v___x_1958_ = lean_unsigned_to_nat(1u);
v___x_1959_ = lean_nat_add(v_i_1940_, v___x_1958_);
v___x_1960_ = lean_array_fset(v_as_1941_, v_i_1940_, v_a_1954_);
lean_dec(v_i_1940_);
v_i_1940_ = v___x_1959_;
v_as_1941_ = v___x_1960_;
goto _start;
}
else
{
lean_object* v___x_1962_; lean_object* v___x_1963_; 
lean_dec(v_a_1954_);
v___x_1962_ = lean_unsigned_to_nat(1u);
v___x_1963_ = lean_nat_add(v_i_1940_, v___x_1962_);
lean_dec(v_i_1940_);
v_i_1940_ = v___x_1963_;
goto _start;
}
}
else
{
lean_object* v_a_1965_; lean_object* v___x_1967_; uint8_t v_isShared_1968_; uint8_t v_isSharedCheck_1972_; 
lean_dec_ref(v_as_1941_);
lean_dec(v_i_1940_);
v_a_1965_ = lean_ctor_get(v___x_1953_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1953_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1967_ = v___x_1953_;
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
else
{
lean_inc(v_a_1965_);
lean_dec(v___x_1953_);
v___x_1967_ = lean_box(0);
v_isShared_1968_ = v_isSharedCheck_1972_;
goto v_resetjp_1966_;
}
v_resetjp_1966_:
{
lean_object* v___x_1970_; 
if (v_isShared_1968_ == 0)
{
v___x_1970_ = v___x_1967_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v_a_1965_);
v___x_1970_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
return v___x_1970_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__2___boxed(lean_object* v_i_1973_, lean_object* v_as_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_){
_start:
{
lean_object* v_res_1981_; 
v_res_1981_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__2(v_i_1973_, v_as_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
lean_dec_ref(v___y_1975_);
return v_res_1981_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0(lean_object* v_00_u03b2_1982_, lean_object* v_m_1983_, lean_object* v_a_1984_){
_start:
{
uint8_t v___x_1985_; 
v___x_1985_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(v_m_1983_, v_a_1984_);
return v___x_1985_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___boxed(lean_object* v_00_u03b2_1986_, lean_object* v_m_1987_, lean_object* v_a_1988_){
_start:
{
uint8_t v_res_1989_; lean_object* v_r_1990_; 
v_res_1989_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0(v_00_u03b2_1986_, v_m_1987_, v_a_1988_);
lean_dec(v_a_1988_);
lean_dec_ref(v_m_1987_);
v_r_1990_ = lean_box(v_res_1989_);
return v_r_1990_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___redArg(lean_object* v_f_1991_, lean_object* v_v_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
if (lean_obj_tag(v_v_1992_) == 0)
{
lean_object* v_code_1999_; lean_object* v___x_2001_; uint8_t v_isShared_2002_; uint8_t v_isSharedCheck_2023_; 
v_code_1999_ = lean_ctor_get(v_v_1992_, 0);
v_isSharedCheck_2023_ = !lean_is_exclusive(v_v_1992_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_2001_ = v_v_1992_;
v_isShared_2002_ = v_isSharedCheck_2023_;
goto v_resetjp_2000_;
}
else
{
lean_inc(v_code_1999_);
lean_dec(v_v_1992_);
v___x_2001_ = lean_box(0);
v_isShared_2002_ = v_isSharedCheck_2023_;
goto v_resetjp_2000_;
}
v_resetjp_2000_:
{
lean_object* v___x_2003_; 
lean_inc(v___y_1997_);
lean_inc_ref(v___y_1996_);
lean_inc(v___y_1995_);
lean_inc_ref(v___y_1994_);
lean_inc_ref(v___y_1993_);
v___x_2003_ = lean_apply_7(v_f_1991_, v_code_1999_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_, v___y_1997_, lean_box(0));
if (lean_obj_tag(v___x_2003_) == 0)
{
lean_object* v_a_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2014_; 
v_a_2004_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2014_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2014_ == 0)
{
v___x_2006_ = v___x_2003_;
v_isShared_2007_ = v_isSharedCheck_2014_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_a_2004_);
lean_dec(v___x_2003_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2014_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2009_; 
if (v_isShared_2002_ == 0)
{
lean_ctor_set(v___x_2001_, 0, v_a_2004_);
v___x_2009_ = v___x_2001_;
goto v_reusejp_2008_;
}
else
{
lean_object* v_reuseFailAlloc_2013_; 
v_reuseFailAlloc_2013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2013_, 0, v_a_2004_);
v___x_2009_ = v_reuseFailAlloc_2013_;
goto v_reusejp_2008_;
}
v_reusejp_2008_:
{
lean_object* v___x_2011_; 
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 0, v___x_2009_);
v___x_2011_ = v___x_2006_;
goto v_reusejp_2010_;
}
else
{
lean_object* v_reuseFailAlloc_2012_; 
v_reuseFailAlloc_2012_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2012_, 0, v___x_2009_);
v___x_2011_ = v_reuseFailAlloc_2012_;
goto v_reusejp_2010_;
}
v_reusejp_2010_:
{
return v___x_2011_;
}
}
}
}
else
{
lean_object* v_a_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2022_; 
lean_del_object(v___x_2001_);
v_a_2015_ = lean_ctor_get(v___x_2003_, 0);
v_isSharedCheck_2022_ = !lean_is_exclusive(v___x_2003_);
if (v_isSharedCheck_2022_ == 0)
{
v___x_2017_ = v___x_2003_;
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_a_2015_);
lean_dec(v___x_2003_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2022_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2021_; 
v_reuseFailAlloc_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2021_, 0, v_a_2015_);
v___x_2020_ = v_reuseFailAlloc_2021_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
return v___x_2020_;
}
}
}
}
}
else
{
lean_object* v___x_2024_; 
lean_dec_ref(v_f_1991_);
v___x_2024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2024_, 0, v_v_1992_);
return v___x_2024_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___redArg___boxed(lean_object* v_f_2025_, lean_object* v_v_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_, lean_object* v___y_2032_){
_start:
{
lean_object* v_res_2033_; 
v_res_2033_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___redArg(v_f_2025_, v_v_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_, v___y_2031_);
lean_dec(v___y_2031_);
lean_dec_ref(v___y_2030_);
lean_dec(v___y_2029_);
lean_dec_ref(v___y_2028_);
lean_dec_ref(v___y_2027_);
return v_res_2033_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1(uint8_t v_pu_2034_, lean_object* v_f_2035_, lean_object* v_v_2036_, lean_object* v___y_2037_, lean_object* v___y_2038_, lean_object* v___y_2039_, lean_object* v___y_2040_, lean_object* v___y_2041_){
_start:
{
lean_object* v___x_2043_; 
v___x_2043_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___redArg(v_f_2035_, v_v_2036_, v___y_2037_, v___y_2038_, v___y_2039_, v___y_2040_, v___y_2041_);
return v___x_2043_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___boxed(lean_object* v_pu_2044_, lean_object* v_f_2045_, lean_object* v_v_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_){
_start:
{
uint8_t v_pu_boxed_2053_; lean_object* v_res_2054_; 
v_pu_boxed_2053_ = lean_unbox(v_pu_2044_);
v_res_2054_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1(v_pu_boxed_2053_, v_f_2045_, v_v_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_, v___y_2051_);
lean_dec(v___y_2051_);
lean_dec_ref(v___y_2050_);
lean_dec(v___y_2049_);
lean_dec_ref(v___y_2048_);
lean_dec_ref(v___y_2047_);
return v_res_2054_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___redArg(lean_object* v_x_2055_, lean_object* v_x_2056_, lean_object* v___y_2057_){
_start:
{
if (lean_obj_tag(v_x_2056_) == 0)
{
lean_object* v___x_2059_; 
v___x_2059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2059_, 0, v_x_2055_);
return v___x_2059_;
}
else
{
lean_object* v_key_2060_; lean_object* v_tail_2061_; lean_object* v___x_2062_; 
v_key_2060_ = lean_ctor_get(v_x_2056_, 0);
lean_inc(v_key_2060_);
v_tail_2061_ = lean_ctor_get(v_x_2056_, 2);
lean_inc(v_tail_2061_);
lean_dec_ref_known(v_x_2056_, 3);
v___x_2062_ = l_Lean_Compiler_LCNF_mkFreshJpName___redArg(v___y_2057_);
if (lean_obj_tag(v___x_2062_) == 0)
{
lean_object* v_a_2063_; lean_object* v___x_2064_; 
v_a_2063_ = lean_ctor_get(v___x_2062_, 0);
lean_inc(v_a_2063_);
lean_dec_ref_known(v___x_2062_, 1);
v___x_2064_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(v_x_2055_, v_key_2060_, v_a_2063_);
v_x_2055_ = v___x_2064_;
v_x_2056_ = v_tail_2061_;
goto _start;
}
else
{
lean_object* v_a_2066_; lean_object* v___x_2068_; uint8_t v_isShared_2069_; uint8_t v_isSharedCheck_2073_; 
lean_dec(v_tail_2061_);
lean_dec(v_key_2060_);
lean_dec_ref(v_x_2055_);
v_a_2066_ = lean_ctor_get(v___x_2062_, 0);
v_isSharedCheck_2073_ = !lean_is_exclusive(v___x_2062_);
if (v_isSharedCheck_2073_ == 0)
{
v___x_2068_ = v___x_2062_;
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
else
{
lean_inc(v_a_2066_);
lean_dec(v___x_2062_);
v___x_2068_ = lean_box(0);
v_isShared_2069_ = v_isSharedCheck_2073_;
goto v_resetjp_2067_;
}
v_resetjp_2067_:
{
lean_object* v___x_2071_; 
if (v_isShared_2069_ == 0)
{
v___x_2071_ = v___x_2068_;
goto v_reusejp_2070_;
}
else
{
lean_object* v_reuseFailAlloc_2072_; 
v_reuseFailAlloc_2072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2072_, 0, v_a_2066_);
v___x_2071_ = v_reuseFailAlloc_2072_;
goto v_reusejp_2070_;
}
v_reusejp_2070_:
{
return v___x_2071_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___redArg___boxed(lean_object* v_x_2074_, lean_object* v_x_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___redArg(v_x_2074_, v_x_2075_, v___y_2076_);
lean_dec(v___y_2076_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__2(lean_object* v_as_2079_, size_t v_i_2080_, size_t v_stop_2081_, lean_object* v_b_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_){
_start:
{
uint8_t v___x_2088_; 
v___x_2088_ = lean_usize_dec_eq(v_i_2080_, v_stop_2081_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; lean_object* v___x_2090_; 
v___x_2089_ = lean_array_uget_borrowed(v_as_2079_, v_i_2080_);
lean_inc(v___x_2089_);
v___x_2090_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___redArg(v_b_2082_, v___x_2089_, v___y_2084_);
if (lean_obj_tag(v___x_2090_) == 0)
{
lean_object* v_a_2091_; size_t v___x_2092_; size_t v___x_2093_; 
v_a_2091_ = lean_ctor_get(v___x_2090_, 0);
lean_inc(v_a_2091_);
lean_dec_ref_known(v___x_2090_, 1);
v___x_2092_ = ((size_t)1ULL);
v___x_2093_ = lean_usize_add(v_i_2080_, v___x_2092_);
v_i_2080_ = v___x_2093_;
v_b_2082_ = v_a_2091_;
goto _start;
}
else
{
return v___x_2090_;
}
}
else
{
lean_object* v___x_2095_; 
v___x_2095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2095_, 0, v_b_2082_);
return v___x_2095_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__2___boxed(lean_object* v_as_2096_, lean_object* v_i_2097_, lean_object* v_stop_2098_, lean_object* v_b_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
size_t v_i_boxed_2105_; size_t v_stop_boxed_2106_; lean_object* v_res_2107_; 
v_i_boxed_2105_ = lean_unbox_usize(v_i_2097_);
lean_dec(v_i_2097_);
v_stop_boxed_2106_ = lean_unbox_usize(v_stop_2098_);
lean_dec(v_stop_2098_);
v_res_2107_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__2(v_as_2096_, v_i_boxed_2105_, v_stop_boxed_2106_, v_b_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec_ref(v_as_2096_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace(lean_object* v_decl_2109_, lean_object* v_state_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
lean_object* v_a_2117_; lean_object* v_buckets_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2150_; uint8_t v___x_2151_; 
v_buckets_2147_ = lean_ctor_get(v_state_2110_, 1);
v___x_2148_ = lean_unsigned_to_nat(0u);
v___x_2149_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1);
v___x_2150_ = lean_array_get_size(v_buckets_2147_);
v___x_2151_ = lean_nat_dec_lt(v___x_2148_, v___x_2150_);
if (v___x_2151_ == 0)
{
v_a_2117_ = v___x_2149_;
goto v___jp_2116_;
}
else
{
size_t v___x_2152_; size_t v___x_2153_; lean_object* v___x_2154_; 
v___x_2152_ = ((size_t)0ULL);
v___x_2153_ = lean_usize_of_nat(v___x_2150_);
v___x_2154_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__2(v_buckets_2147_, v___x_2152_, v___x_2153_, v___x_2149_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
if (lean_obj_tag(v___x_2154_) == 0)
{
lean_object* v_a_2155_; 
v_a_2155_ = lean_ctor_get(v___x_2154_, 0);
lean_inc(v_a_2155_);
lean_dec_ref_known(v___x_2154_, 1);
v_a_2117_ = v_a_2155_;
goto v___jp_2116_;
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec_ref(v_decl_2109_);
v_a_2156_ = lean_ctor_get(v___x_2154_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2154_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2154_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2154_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
}
v___jp_2116_:
{
lean_object* v_toSignature_2118_; lean_object* v_value_2119_; uint8_t v_recursive_2120_; lean_object* v_inlineAttr_x3f_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2146_; 
v_toSignature_2118_ = lean_ctor_get(v_decl_2109_, 0);
v_value_2119_ = lean_ctor_get(v_decl_2109_, 1);
v_recursive_2120_ = lean_ctor_get_uint8(v_decl_2109_, sizeof(void*)*3);
v_inlineAttr_x3f_2121_ = lean_ctor_get(v_decl_2109_, 2);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_decl_2109_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2123_ = v_decl_2109_;
v_isShared_2124_ = v_isSharedCheck_2146_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_inlineAttr_x3f_2121_);
lean_inc(v_value_2119_);
lean_inc(v_toSignature_2118_);
lean_dec(v_decl_2109_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2146_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; 
v___x_2125_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointFinder_replace___closed__0));
v___x_2126_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__1___redArg(v___x_2125_, v_value_2119_, v_a_2117_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
lean_dec_ref(v_a_2117_);
if (lean_obj_tag(v___x_2126_) == 0)
{
lean_object* v_a_2127_; lean_object* v___x_2129_; uint8_t v_isShared_2130_; uint8_t v_isSharedCheck_2137_; 
v_a_2127_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2137_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2137_ == 0)
{
v___x_2129_ = v___x_2126_;
v_isShared_2130_ = v_isSharedCheck_2137_;
goto v_resetjp_2128_;
}
else
{
lean_inc(v_a_2127_);
lean_dec(v___x_2126_);
v___x_2129_ = lean_box(0);
v_isShared_2130_ = v_isSharedCheck_2137_;
goto v_resetjp_2128_;
}
v_resetjp_2128_:
{
lean_object* v___x_2132_; 
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 1, v_a_2127_);
v___x_2132_ = v___x_2123_;
goto v_reusejp_2131_;
}
else
{
lean_object* v_reuseFailAlloc_2136_; 
v_reuseFailAlloc_2136_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_2136_, 0, v_toSignature_2118_);
lean_ctor_set(v_reuseFailAlloc_2136_, 1, v_a_2127_);
lean_ctor_set(v_reuseFailAlloc_2136_, 2, v_inlineAttr_x3f_2121_);
lean_ctor_set_uint8(v_reuseFailAlloc_2136_, sizeof(void*)*3, v_recursive_2120_);
v___x_2132_ = v_reuseFailAlloc_2136_;
goto v_reusejp_2131_;
}
v_reusejp_2131_:
{
lean_object* v___x_2134_; 
if (v_isShared_2130_ == 0)
{
lean_ctor_set(v___x_2129_, 0, v___x_2132_);
v___x_2134_ = v___x_2129_;
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
}
else
{
lean_object* v_a_2138_; lean_object* v___x_2140_; uint8_t v_isShared_2141_; uint8_t v_isSharedCheck_2145_; 
lean_del_object(v___x_2123_);
lean_dec(v_inlineAttr_x3f_2121_);
lean_dec_ref(v_toSignature_2118_);
v_a_2138_ = lean_ctor_get(v___x_2126_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v___x_2126_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2140_ = v___x_2126_;
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
else
{
lean_inc(v_a_2138_);
lean_dec(v___x_2126_);
v___x_2140_ = lean_box(0);
v_isShared_2141_ = v_isSharedCheck_2145_;
goto v_resetjp_2139_;
}
v_resetjp_2139_:
{
lean_object* v___x_2143_; 
if (v_isShared_2141_ == 0)
{
v___x_2143_ = v___x_2140_;
goto v_reusejp_2142_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_a_2138_);
v___x_2143_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2142_;
}
v_reusejp_2142_:
{
return v___x_2143_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointFinder_replace___boxed(lean_object* v_decl_2164_, lean_object* v_state_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
lean_object* v_res_2171_; 
v_res_2171_ = l_Lean_Compiler_LCNF_JoinPointFinder_replace(v_decl_2164_, v_state_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_);
lean_dec(v___y_2169_);
lean_dec_ref(v___y_2168_);
lean_dec(v___y_2167_);
lean_dec_ref(v___y_2166_);
lean_dec_ref(v_state_2165_);
return v_res_2171_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0(lean_object* v_x_2172_, lean_object* v_x_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_){
_start:
{
lean_object* v___x_2179_; 
v___x_2179_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___redArg(v_x_2172_, v_x_2173_, v___y_2175_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0___boxed(lean_object* v_x_2180_, lean_object* v_x_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointFinder_replace_spec__0(v_x_2180_, v_x_2181_, v___y_2182_, v___y_2183_, v___y_2184_, v___y_2185_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
lean_dec(v___y_2183_);
lean_dec_ref(v___y_2182_);
return v_res_2187_;
}
}
static lean_object* _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_2188_; 
v___x_2188_ = l_Std_HashMap_instInhabited___redArg();
return v___x_2188_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1(lean_object* v_msg_2189_){
_start:
{
lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___x_2190_ = lean_obj_once(&l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0);
v___x_2191_ = lean_panic_fn_borrowed(v___x_2190_, v_msg_2189_);
return v___x_2191_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; 
v___x_2195_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__2));
v___x_2196_ = lean_unsigned_to_nat(11u);
v___x_2197_ = lean_unsigned_to_nat(163u);
v___x_2198_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__1));
v___x_2199_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__0));
v___x_2200_ = l_mkPanicMessageWithDecl(v___x_2199_, v___x_2198_, v___x_2197_, v___x_2196_, v___x_2195_);
return v___x_2200_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0(lean_object* v_a_2201_, lean_object* v_x_2202_){
_start:
{
if (lean_obj_tag(v_x_2202_) == 0)
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = lean_obj_once(&l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__3, &l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__3_once, _init_l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___closed__3);
v___x_2204_ = l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1(v___x_2203_);
return v___x_2204_;
}
else
{
lean_object* v_key_2205_; lean_object* v_value_2206_; lean_object* v_tail_2207_; uint8_t v___x_2208_; 
v_key_2205_ = lean_ctor_get(v_x_2202_, 0);
v_value_2206_ = lean_ctor_get(v_x_2202_, 1);
v_tail_2207_ = lean_ctor_get(v_x_2202_, 2);
v___x_2208_ = l_Lean_instBEqFVarId_beq(v_key_2205_, v_a_2201_);
if (v___x_2208_ == 0)
{
v_x_2202_ = v_tail_2207_;
goto _start;
}
else
{
lean_inc(v_value_2206_);
return v_value_2206_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0___boxed(lean_object* v_a_2210_, lean_object* v_x_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0(v_a_2210_, v_x_2211_);
lean_dec(v_x_2211_);
lean_dec(v_a_2210_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(lean_object* v_m_2213_, lean_object* v_a_2214_){
_start:
{
lean_object* v_buckets_2215_; lean_object* v___x_2216_; uint64_t v___x_2217_; uint64_t v___x_2218_; uint64_t v___x_2219_; uint64_t v_fold_2220_; uint64_t v___x_2221_; uint64_t v___x_2222_; uint64_t v___x_2223_; size_t v___x_2224_; size_t v___x_2225_; size_t v___x_2226_; size_t v___x_2227_; size_t v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; 
v_buckets_2215_ = lean_ctor_get(v_m_2213_, 1);
v___x_2216_ = lean_array_get_size(v_buckets_2215_);
v___x_2217_ = l_Lean_instHashableFVarId_hash(v_a_2214_);
v___x_2218_ = 32ULL;
v___x_2219_ = lean_uint64_shift_right(v___x_2217_, v___x_2218_);
v_fold_2220_ = lean_uint64_xor(v___x_2217_, v___x_2219_);
v___x_2221_ = 16ULL;
v___x_2222_ = lean_uint64_shift_right(v_fold_2220_, v___x_2221_);
v___x_2223_ = lean_uint64_xor(v_fold_2220_, v___x_2222_);
v___x_2224_ = lean_uint64_to_usize(v___x_2223_);
v___x_2225_ = lean_usize_of_nat(v___x_2216_);
v___x_2226_ = ((size_t)1ULL);
v___x_2227_ = lean_usize_sub(v___x_2225_, v___x_2226_);
v___x_2228_ = lean_usize_land(v___x_2224_, v___x_2227_);
v___x_2229_ = lean_array_uget_borrowed(v_buckets_2215_, v___x_2228_);
v___x_2230_ = l_Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0(v_a_2214_, v___x_2229_);
return v___x_2230_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0___boxed(lean_object* v_m_2231_, lean_object* v_a_2232_){
_start:
{
lean_object* v_res_2233_; 
v_res_2233_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(v_m_2231_, v_a_2232_);
lean_dec(v_a_2232_);
lean_dec_ref(v_m_2231_);
return v_res_2233_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg(lean_object* v_fvar_2234_, lean_object* v___y_2235_, lean_object* v___y_2236_){
_start:
{
lean_object* v_currentJp_x3f_2238_; lean_object* v_candidates_2239_; uint8_t v___x_2240_; 
v_currentJp_x3f_2238_ = lean_ctor_get(v___y_2235_, 0);
v_candidates_2239_ = lean_ctor_get(v___y_2235_, 1);
v___x_2240_ = l_Lean_FVarIdSet_contains(v_candidates_2239_, v_fvar_2234_);
if (v___x_2240_ == 0)
{
lean_object* v___x_2241_; 
v___x_2241_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2241_, 0, v_fvar_2234_);
return v___x_2241_;
}
else
{
if (lean_obj_tag(v_currentJp_x3f_2238_) == 1)
{
lean_object* v_val_2242_; lean_object* v___x_2243_; lean_object* v___x_2244_; lean_object* v___x_2245_; 
v_val_2242_ = lean_ctor_get(v_currentJp_x3f_2238_, 0);
v___x_2243_ = lean_st_ref_get(v___y_2236_);
v___x_2244_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(v___x_2243_, v_val_2242_);
lean_dec(v___x_2243_);
v___x_2245_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(v___x_2244_, v_fvar_2234_);
lean_dec_ref(v___x_2244_);
if (lean_obj_tag(v___x_2245_) == 1)
{
lean_object* v_val_2246_; lean_object* v___x_2248_; uint8_t v_isShared_2249_; uint8_t v_isSharedCheck_2254_; 
lean_dec(v_fvar_2234_);
v_val_2246_ = lean_ctor_get(v___x_2245_, 0);
v_isSharedCheck_2254_ = !lean_is_exclusive(v___x_2245_);
if (v_isSharedCheck_2254_ == 0)
{
v___x_2248_ = v___x_2245_;
v_isShared_2249_ = v_isSharedCheck_2254_;
goto v_resetjp_2247_;
}
else
{
lean_inc(v_val_2246_);
lean_dec(v___x_2245_);
v___x_2248_ = lean_box(0);
v_isShared_2249_ = v_isSharedCheck_2254_;
goto v_resetjp_2247_;
}
v_resetjp_2247_:
{
lean_object* v_fvarId_2250_; lean_object* v___x_2252_; 
v_fvarId_2250_ = lean_ctor_get(v_val_2246_, 0);
lean_inc(v_fvarId_2250_);
lean_dec(v_val_2246_);
if (v_isShared_2249_ == 0)
{
lean_ctor_set_tag(v___x_2248_, 0);
lean_ctor_set(v___x_2248_, 0, v_fvarId_2250_);
v___x_2252_ = v___x_2248_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v_fvarId_2250_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
}
else
{
lean_object* v___x_2255_; 
lean_dec(v___x_2245_);
v___x_2255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2255_, 0, v_fvar_2234_);
return v___x_2255_;
}
}
else
{
lean_object* v___x_2256_; 
v___x_2256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2256_, 0, v_fvar_2234_);
return v___x_2256_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg___boxed(lean_object* v_fvar_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v_res_2261_; 
v_res_2261_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg(v_fvar_2257_, v___y_2258_, v___y_2259_);
lean_dec(v___y_2259_);
lean_dec_ref(v___y_2258_);
return v_res_2261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(lean_object* v_fvar_2262_, lean_object* v___y_2263_, lean_object* v___y_2264_, lean_object* v___y_2265_, lean_object* v___y_2266_, lean_object* v___y_2267_, lean_object* v___y_2268_, lean_object* v___y_2269_){
_start:
{
lean_object* v___x_2271_; 
v___x_2271_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg(v_fvar_2262_, v___y_2263_, v___y_2264_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___boxed(lean_object* v_fvar_2272_, lean_object* v___y_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_, lean_object* v___y_2278_, lean_object* v___y_2279_, lean_object* v___y_2280_){
_start:
{
lean_object* v_res_2281_; 
v_res_2281_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar(v_fvar_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_);
lean_dec(v___y_2279_);
lean_dec_ref(v___y_2278_);
lean_dec(v___y_2277_);
lean_dec_ref(v___y_2276_);
lean_dec(v___y_2275_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg(lean_object* v_fvar_2282_, lean_object* v_x_2283_, lean_object* v___y_2284_, lean_object* v___y_2285_, lean_object* v___y_2286_, lean_object* v___y_2287_, lean_object* v___y_2288_, lean_object* v___y_2289_, lean_object* v___y_2290_){
_start:
{
lean_object* v___x_2292_; 
lean_inc(v_fvar_2282_);
v___x_2292_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v_fvar_2282_, v___y_2286_);
if (lean_obj_tag(v___x_2292_) == 0)
{
lean_object* v_currentJp_x3f_2293_; 
lean_dec_ref_known(v___x_2292_, 1);
v_currentJp_x3f_2293_ = lean_ctor_get(v___y_2284_, 0);
if (lean_obj_tag(v_currentJp_x3f_2293_) == 0)
{
lean_object* v___x_2294_; 
lean_dec(v_fvar_2282_);
lean_inc(v___y_2290_);
lean_inc_ref(v___y_2289_);
lean_inc(v___y_2288_);
lean_inc_ref(v___y_2287_);
lean_inc(v___y_2286_);
lean_inc(v___y_2285_);
lean_inc_ref(v___y_2284_);
v___x_2294_ = lean_apply_8(v_x_2283_, v___y_2284_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, lean_box(0));
return v___x_2294_;
}
else
{
lean_object* v_candidates_2295_; lean_object* v___x_2296_; lean_object* v___x_2297_; lean_object* v___x_2298_; 
v_candidates_2295_ = lean_ctor_get(v___y_2284_, 1);
lean_inc(v_candidates_2295_);
v___x_2296_ = l_Lean_FVarIdSet_insert(v_candidates_2295_, v_fvar_2282_);
lean_inc_ref(v_currentJp_x3f_2293_);
v___x_2297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2297_, 0, v_currentJp_x3f_2293_);
lean_ctor_set(v___x_2297_, 1, v___x_2296_);
lean_inc(v___y_2290_);
lean_inc_ref(v___y_2289_);
lean_inc(v___y_2288_);
lean_inc_ref(v___y_2287_);
lean_inc(v___y_2286_);
lean_inc(v___y_2285_);
v___x_2298_ = lean_apply_8(v_x_2283_, v___x_2297_, v___y_2285_, v___y_2286_, v___y_2287_, v___y_2288_, v___y_2289_, v___y_2290_, lean_box(0));
return v___x_2298_;
}
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
lean_dec_ref(v_x_2283_);
lean_dec(v_fvar_2282_);
v_a_2299_ = lean_ctor_get(v___x_2292_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2292_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2292_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2292_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
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
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg___boxed(lean_object* v_fvar_2307_, lean_object* v_x_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_, lean_object* v___y_2312_, lean_object* v___y_2313_, lean_object* v___y_2314_, lean_object* v___y_2315_, lean_object* v___y_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg(v_fvar_2307_, v_x_2308_, v___y_2309_, v___y_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_);
lean_dec(v___y_2315_);
lean_dec_ref(v___y_2314_);
lean_dec(v___y_2313_);
lean_dec_ref(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec(v___y_2310_);
lean_dec_ref(v___y_2309_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate(lean_object* v_00_u03b1_2318_, lean_object* v_fvar_2319_, lean_object* v_x_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_, lean_object* v___y_2326_, lean_object* v___y_2327_){
_start:
{
lean_object* v___x_2329_; 
v___x_2329_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg(v_fvar_2319_, v_x_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_, v___y_2325_, v___y_2326_, v___y_2327_);
return v___x_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___boxed(lean_object* v_00_u03b1_2330_, lean_object* v_fvar_2331_, lean_object* v_x_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_, lean_object* v___y_2335_, lean_object* v___y_2336_, lean_object* v___y_2337_, lean_object* v___y_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_){
_start:
{
lean_object* v_res_2341_; 
v_res_2341_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate(v_00_u03b1_2330_, v_fvar_2331_, v_x_2332_, v___y_2333_, v___y_2334_, v___y_2335_, v___y_2336_, v___y_2337_, v___y_2338_, v___y_2339_);
lean_dec(v___y_2339_);
lean_dec_ref(v___y_2338_);
lean_dec(v___y_2337_);
lean_dec_ref(v___y_2336_);
lean_dec(v___y_2335_);
lean_dec(v___y_2334_);
lean_dec_ref(v___y_2333_);
return v_res_2341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg(lean_object* v_as_2342_, size_t v_i_2343_, size_t v_stop_2344_, lean_object* v_b_2345_, lean_object* v___y_2346_){
_start:
{
uint8_t v___x_2348_; 
v___x_2348_ = lean_usize_dec_eq(v_i_2343_, v_stop_2344_);
if (v___x_2348_ == 0)
{
lean_object* v___x_2349_; lean_object* v___x_2350_; 
v___x_2349_ = lean_array_uget_borrowed(v_as_2342_, v_i_2343_);
lean_inc(v___x_2349_);
v___x_2350_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v___x_2349_, v___y_2346_);
if (lean_obj_tag(v___x_2350_) == 0)
{
lean_object* v___x_2351_; size_t v___x_2352_; size_t v___x_2353_; 
lean_dec_ref_known(v___x_2350_, 1);
lean_inc(v___x_2349_);
v___x_2351_ = l_Lean_FVarIdSet_insert(v_b_2345_, v___x_2349_);
v___x_2352_ = ((size_t)1ULL);
v___x_2353_ = lean_usize_add(v_i_2343_, v___x_2352_);
v_i_2343_ = v___x_2353_;
v_b_2345_ = v___x_2351_;
goto _start;
}
else
{
lean_object* v_a_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2362_; 
lean_dec(v_b_2345_);
v_a_2355_ = lean_ctor_get(v___x_2350_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2350_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2357_ = v___x_2350_;
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_a_2355_);
lean_dec(v___x_2350_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2362_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v___x_2360_; 
if (v_isShared_2358_ == 0)
{
v___x_2360_ = v___x_2357_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v_a_2355_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
}
else
{
lean_object* v___x_2363_; 
v___x_2363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2363_, 0, v_b_2345_);
return v___x_2363_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg___boxed(lean_object* v_as_2364_, lean_object* v_i_2365_, lean_object* v_stop_2366_, lean_object* v_b_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_){
_start:
{
size_t v_i_boxed_2370_; size_t v_stop_boxed_2371_; lean_object* v_res_2372_; 
v_i_boxed_2370_ = lean_unbox_usize(v_i_2365_);
lean_dec(v_i_2365_);
v_stop_boxed_2371_ = lean_unbox_usize(v_stop_2366_);
lean_dec(v_stop_2366_);
v_res_2372_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg(v_as_2364_, v_i_boxed_2370_, v_stop_boxed_2371_, v_b_2367_, v___y_2368_);
lean_dec(v___y_2368_);
lean_dec_ref(v_as_2364_);
return v_res_2372_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___redArg(lean_object* v_fvars_2373_, lean_object* v_x_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_, lean_object* v___y_2380_, lean_object* v___y_2381_){
_start:
{
lean_object* v_currentJp_x3f_2383_; lean_object* v_candidates_2384_; lean_object* v_a_2386_; lean_object* v___y_2390_; 
v_currentJp_x3f_2383_ = lean_ctor_get(v___y_2375_, 0);
v_candidates_2384_ = lean_ctor_get(v___y_2375_, 1);
if (lean_obj_tag(v_currentJp_x3f_2383_) == 0)
{
lean_object* v___x_2400_; 
lean_inc(v___y_2381_);
lean_inc_ref(v___y_2380_);
lean_inc(v___y_2379_);
lean_inc_ref(v___y_2378_);
lean_inc(v___y_2377_);
lean_inc(v___y_2376_);
lean_inc_ref(v___y_2375_);
v___x_2400_ = lean_apply_8(v_x_2374_, v___y_2375_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, lean_box(0));
return v___x_2400_;
}
else
{
lean_object* v___x_2401_; lean_object* v___x_2402_; uint8_t v___x_2403_; 
v___x_2401_ = lean_unsigned_to_nat(0u);
v___x_2402_ = lean_array_get_size(v_fvars_2373_);
v___x_2403_ = lean_nat_dec_lt(v___x_2401_, v___x_2402_);
if (v___x_2403_ == 0)
{
lean_inc(v_candidates_2384_);
v_a_2386_ = v_candidates_2384_;
goto v___jp_2385_;
}
else
{
uint8_t v___x_2404_; 
v___x_2404_ = lean_nat_dec_le(v___x_2402_, v___x_2402_);
if (v___x_2404_ == 0)
{
if (v___x_2403_ == 0)
{
lean_inc(v_candidates_2384_);
v_a_2386_ = v_candidates_2384_;
goto v___jp_2385_;
}
else
{
size_t v___x_2405_; size_t v___x_2406_; lean_object* v___x_2407_; 
v___x_2405_ = ((size_t)0ULL);
v___x_2406_ = lean_usize_of_nat(v___x_2402_);
lean_inc(v_candidates_2384_);
v___x_2407_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg(v_fvars_2373_, v___x_2405_, v___x_2406_, v_candidates_2384_, v___y_2377_);
v___y_2390_ = v___x_2407_;
goto v___jp_2389_;
}
}
else
{
size_t v___x_2408_; size_t v___x_2409_; lean_object* v___x_2410_; 
v___x_2408_ = ((size_t)0ULL);
v___x_2409_ = lean_usize_of_nat(v___x_2402_);
lean_inc(v_candidates_2384_);
v___x_2410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg(v_fvars_2373_, v___x_2408_, v___x_2409_, v_candidates_2384_, v___y_2377_);
v___y_2390_ = v___x_2410_;
goto v___jp_2389_;
}
}
}
v___jp_2385_:
{
lean_object* v___x_2387_; lean_object* v___x_2388_; 
lean_inc(v_currentJp_x3f_2383_);
v___x_2387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2387_, 0, v_currentJp_x3f_2383_);
lean_ctor_set(v___x_2387_, 1, v_a_2386_);
lean_inc(v___y_2381_);
lean_inc_ref(v___y_2380_);
lean_inc(v___y_2379_);
lean_inc_ref(v___y_2378_);
lean_inc(v___y_2377_);
lean_inc(v___y_2376_);
v___x_2388_ = lean_apply_8(v_x_2374_, v___x_2387_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_, v___y_2380_, v___y_2381_, lean_box(0));
return v___x_2388_;
}
v___jp_2389_:
{
if (lean_obj_tag(v___y_2390_) == 0)
{
lean_object* v_a_2391_; 
v_a_2391_ = lean_ctor_get(v___y_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___y_2390_, 1);
v_a_2386_ = v_a_2391_;
goto v___jp_2385_;
}
else
{
lean_object* v_a_2392_; lean_object* v___x_2394_; uint8_t v_isShared_2395_; uint8_t v_isSharedCheck_2399_; 
lean_dec_ref(v_x_2374_);
v_a_2392_ = lean_ctor_get(v___y_2390_, 0);
v_isSharedCheck_2399_ = !lean_is_exclusive(v___y_2390_);
if (v_isSharedCheck_2399_ == 0)
{
v___x_2394_ = v___y_2390_;
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
else
{
lean_inc(v_a_2392_);
lean_dec(v___y_2390_);
v___x_2394_ = lean_box(0);
v_isShared_2395_ = v_isSharedCheck_2399_;
goto v_resetjp_2393_;
}
v_resetjp_2393_:
{
lean_object* v___x_2397_; 
if (v_isShared_2395_ == 0)
{
v___x_2397_ = v___x_2394_;
goto v_reusejp_2396_;
}
else
{
lean_object* v_reuseFailAlloc_2398_; 
v_reuseFailAlloc_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2398_, 0, v_a_2392_);
v___x_2397_ = v_reuseFailAlloc_2398_;
goto v_reusejp_2396_;
}
v_reusejp_2396_:
{
return v___x_2397_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___redArg___boxed(lean_object* v_fvars_2411_, lean_object* v_x_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
lean_object* v_res_2421_; 
v_res_2421_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___redArg(v_fvars_2411_, v_x_2412_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec_ref(v_fvars_2411_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates(lean_object* v_00_u03b1_2422_, lean_object* v_fvars_2423_, lean_object* v_x_2424_, lean_object* v___y_2425_, lean_object* v___y_2426_, lean_object* v___y_2427_, lean_object* v___y_2428_, lean_object* v___y_2429_, lean_object* v___y_2430_, lean_object* v___y_2431_){
_start:
{
lean_object* v___x_2433_; 
v___x_2433_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___redArg(v_fvars_2423_, v_x_2424_, v___y_2425_, v___y_2426_, v___y_2427_, v___y_2428_, v___y_2429_, v___y_2430_, v___y_2431_);
return v___x_2433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___boxed(lean_object* v_00_u03b1_2434_, lean_object* v_fvars_2435_, lean_object* v_x_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_, lean_object* v___y_2439_, lean_object* v___y_2440_, lean_object* v___y_2441_, lean_object* v___y_2442_, lean_object* v___y_2443_, lean_object* v___y_2444_){
_start:
{
lean_object* v_res_2445_; 
v_res_2445_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates(v_00_u03b1_2434_, v_fvars_2435_, v_x_2436_, v___y_2437_, v___y_2438_, v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_);
lean_dec(v___y_2443_);
lean_dec_ref(v___y_2442_);
lean_dec(v___y_2441_);
lean_dec_ref(v___y_2440_);
lean_dec(v___y_2439_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
lean_dec_ref(v_fvars_2435_);
return v_res_2445_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0(lean_object* v_as_2446_, size_t v_i_2447_, size_t v_stop_2448_, lean_object* v_b_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_, lean_object* v___y_2452_, lean_object* v___y_2453_, lean_object* v___y_2454_, lean_object* v___y_2455_, lean_object* v___y_2456_){
_start:
{
lean_object* v___x_2458_; 
v___x_2458_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___redArg(v_as_2446_, v_i_2447_, v_stop_2448_, v_b_2449_, v___y_2452_);
return v___x_2458_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0___boxed(lean_object* v_as_2459_, lean_object* v_i_2460_, lean_object* v_stop_2461_, lean_object* v_b_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_, lean_object* v___y_2470_){
_start:
{
size_t v_i_boxed_2471_; size_t v_stop_boxed_2472_; lean_object* v_res_2473_; 
v_i_boxed_2471_ = lean_unbox_usize(v_i_2460_);
lean_dec(v_i_2460_);
v_stop_boxed_2472_ = lean_unbox_usize(v_stop_2461_);
lean_dec(v_stop_2461_);
v_res_2473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates_spec__0(v_as_2459_, v_i_boxed_2471_, v_stop_boxed_2472_, v_b_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_, v___y_2469_);
lean_dec(v___y_2469_);
lean_dec_ref(v___y_2468_);
lean_dec(v___y_2467_);
lean_dec_ref(v___y_2466_);
lean_dec(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec_ref(v___y_2463_);
lean_dec_ref(v_as_2459_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(lean_object* v_fvar_2474_, lean_object* v___y_2475_, lean_object* v___y_2476_, lean_object* v___y_2477_, lean_object* v___y_2478_, lean_object* v___y_2479_, lean_object* v___y_2480_, lean_object* v___y_2481_){
_start:
{
lean_object* v_currentJp_x3f_2483_; 
v_currentJp_x3f_2483_ = lean_ctor_get(v___y_2475_, 0);
if (lean_obj_tag(v_currentJp_x3f_2483_) == 1)
{
lean_object* v_candidates_2484_; lean_object* v_val_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; 
v_candidates_2484_ = lean_ctor_get(v___y_2475_, 1);
v_val_2485_ = lean_ctor_get(v_currentJp_x3f_2483_, 0);
v___x_2486_ = lean_st_ref_get(v___y_2476_);
v___x_2487_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(v___x_2486_, v_val_2485_);
lean_dec(v___x_2486_);
v___x_2488_ = l_Lean_Compiler_LCNF_ScopeM_isInScope___redArg(v_fvar_2474_, v___y_2477_);
if (lean_obj_tag(v___x_2488_) == 0)
{
lean_object* v_a_2489_; lean_object* v___x_2491_; uint8_t v_isShared_2492_; uint8_t v_isSharedCheck_2534_; 
v_a_2489_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2534_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2534_ == 0)
{
v___x_2491_ = v___x_2488_;
v_isShared_2492_ = v_isSharedCheck_2534_;
goto v_resetjp_2490_;
}
else
{
lean_inc(v_a_2489_);
lean_dec(v___x_2488_);
v___x_2491_ = lean_box(0);
v_isShared_2492_ = v_isSharedCheck_2534_;
goto v_resetjp_2490_;
}
v_resetjp_2490_:
{
uint8_t v___x_2498_; 
v___x_2498_ = lean_unbox(v_a_2489_);
lean_dec(v_a_2489_);
if (v___x_2498_ == 0)
{
uint8_t v___x_2499_; 
v___x_2499_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(v___x_2487_, v_fvar_2474_);
if (v___x_2499_ == 0)
{
uint8_t v___x_2500_; 
v___x_2500_ = l_Lean_FVarIdSet_contains(v_candidates_2484_, v_fvar_2474_);
if (v___x_2500_ == 0)
{
lean_dec_ref(v___x_2487_);
lean_dec(v_fvar_2474_);
goto v___jp_2493_;
}
else
{
lean_object* v___x_2501_; 
lean_del_object(v___x_2491_);
lean_inc(v_fvar_2474_);
v___x_2501_ = l_Lean_Compiler_LCNF_getType(v_fvar_2474_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
if (lean_obj_tag(v___x_2501_) == 0)
{
lean_object* v_a_2502_; uint8_t v___x_2503_; lean_object* v___x_2504_; 
v_a_2502_ = lean_ctor_get(v___x_2501_, 0);
lean_inc(v_a_2502_);
lean_dec_ref_known(v___x_2501_, 1);
v___x_2503_ = 0;
v___x_2504_ = l_Lean_Compiler_LCNF_mkAuxParam(v___x_2503_, v_a_2502_, v___x_2499_, v___y_2478_, v___y_2479_, v___y_2480_, v___y_2481_);
if (lean_obj_tag(v___x_2504_) == 0)
{
lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2517_; 
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2517_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2517_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2517_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2517_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2515_; 
v___x_2509_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(v___x_2487_, v_fvar_2474_, v_a_2505_);
v___x_2510_ = lean_st_ref_take(v___y_2476_);
v___x_2511_ = lean_box(0);
lean_inc(v_val_2485_);
v___x_2512_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(v___x_2510_, v_val_2485_, v___x_2509_);
v___x_2513_ = lean_st_ref_put(v___y_2476_, v___x_2512_);
if (v_isShared_2508_ == 0)
{
lean_ctor_set(v___x_2507_, 0, v___x_2511_);
v___x_2515_ = v___x_2507_;
goto v_reusejp_2514_;
}
else
{
lean_object* v_reuseFailAlloc_2516_; 
v_reuseFailAlloc_2516_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2516_, 0, v___x_2511_);
v___x_2515_ = v_reuseFailAlloc_2516_;
goto v_reusejp_2514_;
}
v_reusejp_2514_:
{
return v___x_2515_;
}
}
}
else
{
lean_object* v_a_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2525_; 
lean_dec_ref(v___x_2487_);
lean_dec(v_fvar_2474_);
v_a_2518_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2525_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2520_ = v___x_2504_;
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_a_2518_);
lean_dec(v___x_2504_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2525_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v___x_2523_; 
if (v_isShared_2521_ == 0)
{
v___x_2523_ = v___x_2520_;
goto v_reusejp_2522_;
}
else
{
lean_object* v_reuseFailAlloc_2524_; 
v_reuseFailAlloc_2524_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2524_, 0, v_a_2518_);
v___x_2523_ = v_reuseFailAlloc_2524_;
goto v_reusejp_2522_;
}
v_reusejp_2522_:
{
return v___x_2523_;
}
}
}
}
else
{
lean_object* v_a_2526_; lean_object* v___x_2528_; uint8_t v_isShared_2529_; uint8_t v_isSharedCheck_2533_; 
lean_dec_ref(v___x_2487_);
lean_dec(v_fvar_2474_);
v_a_2526_ = lean_ctor_get(v___x_2501_, 0);
v_isSharedCheck_2533_ = !lean_is_exclusive(v___x_2501_);
if (v_isSharedCheck_2533_ == 0)
{
v___x_2528_ = v___x_2501_;
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
else
{
lean_inc(v_a_2526_);
lean_dec(v___x_2501_);
v___x_2528_ = lean_box(0);
v_isShared_2529_ = v_isSharedCheck_2533_;
goto v_resetjp_2527_;
}
v_resetjp_2527_:
{
lean_object* v___x_2531_; 
if (v_isShared_2529_ == 0)
{
v___x_2531_ = v___x_2528_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2532_; 
v_reuseFailAlloc_2532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2532_, 0, v_a_2526_);
v___x_2531_ = v_reuseFailAlloc_2532_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
return v___x_2531_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2487_);
lean_dec(v_fvar_2474_);
goto v___jp_2493_;
}
}
else
{
lean_dec_ref(v___x_2487_);
lean_dec(v_fvar_2474_);
goto v___jp_2493_;
}
v___jp_2493_:
{
lean_object* v___x_2494_; lean_object* v___x_2496_; 
v___x_2494_ = lean_box(0);
if (v_isShared_2492_ == 0)
{
lean_ctor_set(v___x_2491_, 0, v___x_2494_);
v___x_2496_ = v___x_2491_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v___x_2494_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
else
{
lean_object* v_a_2535_; lean_object* v___x_2537_; uint8_t v_isShared_2538_; uint8_t v_isSharedCheck_2542_; 
lean_dec_ref(v___x_2487_);
lean_dec(v_fvar_2474_);
v_a_2535_ = lean_ctor_get(v___x_2488_, 0);
v_isSharedCheck_2542_ = !lean_is_exclusive(v___x_2488_);
if (v_isSharedCheck_2542_ == 0)
{
v___x_2537_ = v___x_2488_;
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
else
{
lean_inc(v_a_2535_);
lean_dec(v___x_2488_);
v___x_2537_ = lean_box(0);
v_isShared_2538_ = v_isSharedCheck_2542_;
goto v_resetjp_2536_;
}
v_resetjp_2536_:
{
lean_object* v___x_2540_; 
if (v_isShared_2538_ == 0)
{
v___x_2540_ = v___x_2537_;
goto v_reusejp_2539_;
}
else
{
lean_object* v_reuseFailAlloc_2541_; 
v_reuseFailAlloc_2541_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2541_, 0, v_a_2535_);
v___x_2540_ = v_reuseFailAlloc_2541_;
goto v_reusejp_2539_;
}
v_reusejp_2539_:
{
return v___x_2540_;
}
}
}
}
else
{
lean_object* v___x_2543_; lean_object* v___x_2544_; 
lean_dec(v_fvar_2474_);
v___x_2543_ = lean_box(0);
v___x_2544_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2544_, 0, v___x_2543_);
return v___x_2544_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary___boxed(lean_object* v_fvar_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_){
_start:
{
lean_object* v_res_2554_; 
v_res_2554_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(v_fvar_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_);
lean_dec(v___y_2552_);
lean_dec_ref(v___y_2551_);
lean_dec(v___y_2550_);
lean_dec_ref(v___y_2549_);
lean_dec(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec_ref(v___y_2546_);
return v_res_2554_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__0(lean_object* v_as_2555_, size_t v_sz_2556_, size_t v_i_2557_, lean_object* v_b_2558_, lean_object* v___y_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_){
_start:
{
uint8_t v___x_2567_; 
v___x_2567_ = lean_usize_dec_lt(v_i_2557_, v_sz_2556_);
if (v___x_2567_ == 0)
{
lean_object* v___x_2568_; 
v___x_2568_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2568_, 0, v_b_2558_);
return v___x_2568_;
}
else
{
lean_object* v_a_2569_; lean_object* v_fst_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; 
v_a_2569_ = lean_array_uget_borrowed(v_as_2555_, v_i_2557_);
v_fst_2570_ = lean_ctor_get(v_a_2569_, 0);
v___x_2571_ = lean_box(0);
lean_inc(v_fst_2570_);
v___x_2572_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(v_fst_2570_, v___y_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
if (lean_obj_tag(v___x_2572_) == 0)
{
size_t v___x_2573_; size_t v___x_2574_; 
lean_dec_ref_known(v___x_2572_, 1);
v___x_2573_ = ((size_t)1ULL);
v___x_2574_ = lean_usize_add(v_i_2557_, v___x_2573_);
v_i_2557_ = v___x_2574_;
v_b_2558_ = v___x_2571_;
goto _start;
}
else
{
return v___x_2572_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__0___boxed(lean_object* v_as_2576_, lean_object* v_sz_2577_, lean_object* v_i_2578_, lean_object* v_b_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_, lean_object* v___y_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_){
_start:
{
size_t v_sz_boxed_2588_; size_t v_i_boxed_2589_; lean_object* v_res_2590_; 
v_sz_boxed_2588_ = lean_unbox_usize(v_sz_2577_);
lean_dec(v_sz_2577_);
v_i_boxed_2589_ = lean_unbox_usize(v_i_2578_);
lean_dec(v_i_2578_);
v_res_2590_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__0(v_as_2576_, v_sz_boxed_2588_, v_i_boxed_2589_, v_b_2579_, v___y_2580_, v___y_2581_, v___y_2582_, v___y_2583_, v___y_2584_, v___y_2585_, v___y_2586_);
lean_dec(v___y_2586_);
lean_dec_ref(v___y_2585_);
lean_dec(v___y_2584_);
lean_dec_ref(v___y_2583_);
lean_dec(v___y_2582_);
lean_dec(v___y_2581_);
lean_dec_ref(v___y_2580_);
lean_dec_ref(v_as_2576_);
return v_res_2590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__1(lean_object* v_x_2591_, lean_object* v_x_2592_){
_start:
{
if (lean_obj_tag(v_x_2592_) == 0)
{
return v_x_2591_;
}
else
{
lean_object* v_key_2593_; lean_object* v_value_2594_; lean_object* v_tail_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; 
v_key_2593_ = lean_ctor_get(v_x_2592_, 0);
v_value_2594_ = lean_ctor_get(v_x_2592_, 1);
v_tail_2595_ = lean_ctor_get(v_x_2592_, 2);
lean_inc(v_value_2594_);
lean_inc(v_key_2593_);
v___x_2596_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2596_, 0, v_key_2593_);
lean_ctor_set(v___x_2596_, 1, v_value_2594_);
v___x_2597_ = lean_array_push(v_x_2591_, v___x_2596_);
v_x_2591_ = v___x_2597_;
v_x_2592_ = v_tail_2595_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__1___boxed(lean_object* v_x_2599_, lean_object* v_x_2600_){
_start:
{
lean_object* v_res_2601_; 
v_res_2601_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__1(v_x_2599_, v_x_2600_);
lean_dec(v_x_2600_);
return v_res_2601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2(lean_object* v_as_2602_, size_t v_i_2603_, size_t v_stop_2604_, lean_object* v_b_2605_){
_start:
{
uint8_t v___x_2606_; 
v___x_2606_ = lean_usize_dec_eq(v_i_2603_, v_stop_2604_);
if (v___x_2606_ == 0)
{
lean_object* v___x_2607_; lean_object* v___x_2608_; size_t v___x_2609_; size_t v___x_2610_; 
v___x_2607_ = lean_array_uget_borrowed(v_as_2602_, v_i_2603_);
v___x_2608_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__1(v_b_2605_, v___x_2607_);
v___x_2609_ = ((size_t)1ULL);
v___x_2610_ = lean_usize_add(v_i_2603_, v___x_2609_);
v_i_2603_ = v___x_2610_;
v_b_2605_ = v___x_2608_;
goto _start;
}
else
{
return v_b_2605_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2___boxed(lean_object* v_as_2612_, lean_object* v_i_2613_, lean_object* v_stop_2614_, lean_object* v_b_2615_){
_start:
{
size_t v_i_boxed_2616_; size_t v_stop_boxed_2617_; lean_object* v_res_2618_; 
v_i_boxed_2616_ = lean_unbox_usize(v_i_2613_);
lean_dec(v_i_2613_);
v_stop_boxed_2617_ = lean_unbox_usize(v_stop_2614_);
lean_dec(v_stop_2614_);
v_res_2618_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2(v_as_2612_, v_i_boxed_2616_, v_stop_boxed_2617_, v_b_2615_);
lean_dec_ref(v_as_2612_);
return v_res_2618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(lean_object* v_jp_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_, lean_object* v___y_2624_, lean_object* v___y_2625_, lean_object* v___y_2626_){
_start:
{
lean_object* v_currentJp_x3f_2628_; 
v_currentJp_x3f_2628_ = lean_ctor_get(v___y_2620_, 0);
if (lean_obj_tag(v_currentJp_x3f_2628_) == 0)
{
lean_object* v___x_2629_; lean_object* v___x_2630_; 
v___x_2629_ = lean_box(0);
v___x_2630_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2629_);
return v___x_2630_;
}
else
{
lean_object* v___x_2631_; lean_object* v___y_2633_; lean_object* v___x_2646_; lean_object* v_size_2647_; lean_object* v_buckets_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; uint8_t v___x_2652_; 
v___x_2631_ = lean_st_ref_get(v___y_2621_);
v___x_2646_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(v___x_2631_, v_jp_2619_);
lean_dec(v___x_2631_);
v_size_2647_ = lean_ctor_get(v___x_2646_, 0);
lean_inc(v_size_2647_);
v_buckets_2648_ = lean_ctor_get(v___x_2646_, 1);
lean_inc_ref(v_buckets_2648_);
lean_dec_ref(v___x_2646_);
v___x_2649_ = lean_mk_empty_array_with_capacity(v_size_2647_);
lean_dec(v_size_2647_);
v___x_2650_ = lean_unsigned_to_nat(0u);
v___x_2651_ = lean_array_get_size(v_buckets_2648_);
v___x_2652_ = lean_nat_dec_lt(v___x_2650_, v___x_2651_);
if (v___x_2652_ == 0)
{
lean_dec_ref(v_buckets_2648_);
v___y_2633_ = v___x_2649_;
goto v___jp_2632_;
}
else
{
size_t v___x_2653_; size_t v___x_2654_; lean_object* v___x_2655_; 
v___x_2653_ = ((size_t)0ULL);
v___x_2654_ = lean_usize_of_nat(v___x_2651_);
v___x_2655_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2(v_buckets_2648_, v___x_2653_, v___x_2654_, v___x_2649_);
lean_dec_ref(v_buckets_2648_);
v___y_2633_ = v___x_2655_;
goto v___jp_2632_;
}
v___jp_2632_:
{
lean_object* v___x_2634_; size_t v_sz_2635_; size_t v___x_2636_; lean_object* v___x_2637_; 
v___x_2634_ = lean_box(0);
v_sz_2635_ = lean_array_size(v___y_2633_);
v___x_2636_ = ((size_t)0ULL);
v___x_2637_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__0(v___y_2633_, v_sz_2635_, v___x_2636_, v___x_2634_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_, v___y_2624_, v___y_2625_, v___y_2626_);
lean_dec_ref(v___y_2633_);
if (lean_obj_tag(v___x_2637_) == 0)
{
lean_object* v___x_2639_; uint8_t v_isShared_2640_; uint8_t v_isSharedCheck_2644_; 
v_isSharedCheck_2644_ = !lean_is_exclusive(v___x_2637_);
if (v_isSharedCheck_2644_ == 0)
{
lean_object* v_unused_2645_; 
v_unused_2645_ = lean_ctor_get(v___x_2637_, 0);
lean_dec(v_unused_2645_);
v___x_2639_ = v___x_2637_;
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
else
{
lean_dec(v___x_2637_);
v___x_2639_ = lean_box(0);
v_isShared_2640_ = v_isSharedCheck_2644_;
goto v_resetjp_2638_;
}
v_resetjp_2638_:
{
lean_object* v___x_2642_; 
if (v_isShared_2640_ == 0)
{
lean_ctor_set(v___x_2639_, 0, v___x_2634_);
v___x_2642_ = v___x_2639_;
goto v_reusejp_2641_;
}
else
{
lean_object* v_reuseFailAlloc_2643_; 
v_reuseFailAlloc_2643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2643_, 0, v___x_2634_);
v___x_2642_ = v_reuseFailAlloc_2643_;
goto v_reusejp_2641_;
}
v_reusejp_2641_:
{
return v___x_2642_;
}
}
}
else
{
return v___x_2637_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary___boxed(lean_object* v_jp_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_){
_start:
{
lean_object* v_res_2665_; 
v_res_2665_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(v_jp_2656_, v___y_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, v___y_2662_, v___y_2663_);
lean_dec(v___y_2663_);
lean_dec_ref(v___y_2662_);
lean_dec(v___y_2661_);
lean_dec_ref(v___y_2660_);
lean_dec(v___y_2659_);
lean_dec(v___y_2658_);
lean_dec_ref(v___y_2657_);
lean_dec(v_jp_2656_);
return v_res_2665_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___lam__0(lean_object* v_x_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_, lean_object* v___y_2673_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(v___y_2669_);
if (lean_obj_tag(v___x_2675_) == 0)
{
lean_object* v___x_2676_; 
lean_dec_ref_known(v___x_2675_, 1);
lean_inc(v___y_2673_);
lean_inc_ref(v___y_2672_);
lean_inc(v___y_2671_);
lean_inc_ref(v___y_2670_);
lean_inc(v___y_2669_);
lean_inc(v___y_2668_);
lean_inc_ref(v___y_2667_);
v___x_2676_ = lean_apply_8(v_x_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_, v___y_2672_, v___y_2673_, lean_box(0));
return v___x_2676_;
}
else
{
lean_object* v_a_2677_; lean_object* v___x_2679_; uint8_t v_isShared_2680_; uint8_t v_isSharedCheck_2684_; 
lean_dec_ref(v_x_2666_);
v_a_2677_ = lean_ctor_get(v___x_2675_, 0);
v_isSharedCheck_2684_ = !lean_is_exclusive(v___x_2675_);
if (v_isSharedCheck_2684_ == 0)
{
v___x_2679_ = v___x_2675_;
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
else
{
lean_inc(v_a_2677_);
lean_dec(v___x_2675_);
v___x_2679_ = lean_box(0);
v_isShared_2680_ = v_isSharedCheck_2684_;
goto v_resetjp_2678_;
}
v_resetjp_2678_:
{
lean_object* v___x_2682_; 
if (v_isShared_2680_ == 0)
{
v___x_2682_ = v___x_2679_;
goto v_reusejp_2681_;
}
else
{
lean_object* v_reuseFailAlloc_2683_; 
v_reuseFailAlloc_2683_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2683_, 0, v_a_2677_);
v___x_2682_ = v_reuseFailAlloc_2683_;
goto v_reusejp_2681_;
}
v_reusejp_2681_:
{
return v___x_2682_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___lam__0___boxed(lean_object* v_x_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_, lean_object* v___y_2689_, lean_object* v___y_2690_, lean_object* v___y_2691_, lean_object* v___y_2692_, lean_object* v___y_2693_){
_start:
{
lean_object* v_res_2694_; 
v_res_2694_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___lam__0(v_x_2685_, v___y_2686_, v___y_2687_, v___y_2688_, v___y_2689_, v___y_2690_, v___y_2691_, v___y_2692_);
lean_dec(v___y_2692_);
lean_dec_ref(v___y_2691_);
lean_dec(v___y_2690_);
lean_dec_ref(v___y_2689_);
lean_dec(v___y_2688_);
lean_dec(v___y_2687_);
lean_dec_ref(v___y_2686_);
return v_res_2694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg(lean_object* v_x_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_){
_start:
{
lean_object* v___x_2704_; 
v___x_2704_ = l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(v___y_2698_);
if (lean_obj_tag(v___x_2704_) == 0)
{
lean_object* v_a_2705_; lean_object* v___x_2706_; 
v_a_2705_ = lean_ctor_get(v___x_2704_, 0);
lean_inc(v_a_2705_);
lean_dec_ref_known(v___x_2704_, 1);
lean_inc(v___y_2702_);
lean_inc_ref(v___y_2701_);
lean_inc(v___y_2700_);
lean_inc_ref(v___y_2699_);
lean_inc(v___y_2698_);
lean_inc(v___y_2697_);
lean_inc_ref(v___y_2696_);
v___x_2706_ = lean_apply_8(v_x_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, lean_box(0));
if (lean_obj_tag(v___x_2706_) == 0)
{
lean_object* v_a_2707_; lean_object* v___x_2708_; 
v_a_2707_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_a_2707_);
lean_dec_ref_known(v___x_2706_, 1);
v___x_2708_ = l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(v_a_2705_, v___y_2698_);
if (lean_obj_tag(v___x_2708_) == 0)
{
lean_object* v___x_2710_; uint8_t v_isShared_2711_; uint8_t v_isSharedCheck_2715_; 
v_isSharedCheck_2715_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2715_ == 0)
{
lean_object* v_unused_2716_; 
v_unused_2716_ = lean_ctor_get(v___x_2708_, 0);
lean_dec(v_unused_2716_);
v___x_2710_ = v___x_2708_;
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
else
{
lean_dec(v___x_2708_);
v___x_2710_ = lean_box(0);
v_isShared_2711_ = v_isSharedCheck_2715_;
goto v_resetjp_2709_;
}
v_resetjp_2709_:
{
lean_object* v___x_2713_; 
if (v_isShared_2711_ == 0)
{
lean_ctor_set(v___x_2710_, 0, v_a_2707_);
v___x_2713_ = v___x_2710_;
goto v_reusejp_2712_;
}
else
{
lean_object* v_reuseFailAlloc_2714_; 
v_reuseFailAlloc_2714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2714_, 0, v_a_2707_);
v___x_2713_ = v_reuseFailAlloc_2714_;
goto v_reusejp_2712_;
}
v_reusejp_2712_:
{
return v___x_2713_;
}
}
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec(v_a_2707_);
v_a_2717_ = lean_ctor_get(v___x_2708_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2708_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2708_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
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
else
{
lean_object* v_a_2725_; lean_object* v___x_2726_; 
v_a_2725_ = lean_ctor_get(v___x_2706_, 0);
lean_inc(v_a_2725_);
lean_dec_ref_known(v___x_2706_, 1);
v___x_2726_ = l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(v_a_2705_, v___y_2698_);
if (lean_obj_tag(v___x_2726_) == 0)
{
lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2733_ == 0)
{
lean_object* v_unused_2734_; 
v_unused_2734_ = lean_ctor_get(v___x_2726_, 0);
lean_dec(v_unused_2734_);
v___x_2728_ = v___x_2726_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_dec(v___x_2726_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
lean_ctor_set_tag(v___x_2728_, 1);
lean_ctor_set(v___x_2728_, 0, v_a_2725_);
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2725_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
else
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2742_; 
lean_dec(v_a_2725_);
v_a_2735_ = lean_ctor_get(v___x_2726_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2726_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2737_ = v___x_2726_;
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v___x_2726_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_a_2735_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
}
else
{
lean_object* v_a_2743_; lean_object* v___x_2745_; uint8_t v_isShared_2746_; uint8_t v_isSharedCheck_2750_; 
lean_dec_ref(v_x_2695_);
v_a_2743_ = lean_ctor_get(v___x_2704_, 0);
v_isSharedCheck_2750_ = !lean_is_exclusive(v___x_2704_);
if (v_isSharedCheck_2750_ == 0)
{
v___x_2745_ = v___x_2704_;
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
else
{
lean_inc(v_a_2743_);
lean_dec(v___x_2704_);
v___x_2745_ = lean_box(0);
v_isShared_2746_ = v_isSharedCheck_2750_;
goto v_resetjp_2744_;
}
v_resetjp_2744_:
{
lean_object* v___x_2748_; 
if (v_isShared_2746_ == 0)
{
v___x_2748_ = v___x_2745_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2749_; 
v_reuseFailAlloc_2749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2749_, 0, v_a_2743_);
v___x_2748_ = v_reuseFailAlloc_2749_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
return v___x_2748_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg___boxed(lean_object* v_x_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_, lean_object* v___y_2756_, lean_object* v___y_2757_, lean_object* v___y_2758_, lean_object* v___y_2759_){
_start:
{
lean_object* v_res_2760_; 
v_res_2760_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg(v_x_2751_, v___y_2752_, v___y_2753_, v___y_2754_, v___y_2755_, v___y_2756_, v___y_2757_, v___y_2758_);
lean_dec(v___y_2758_);
lean_dec_ref(v___y_2757_);
lean_dec(v___y_2756_);
lean_dec_ref(v___y_2755_);
lean_dec(v___y_2754_);
lean_dec(v___y_2753_);
lean_dec_ref(v___y_2752_);
return v_res_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg(lean_object* v_x_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
lean_object* v___f_2770_; lean_object* v___x_2771_; 
v___f_2770_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_2770_, 0, v_x_2761_);
v___x_2771_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg(v___f_2770_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
return v___x_2771_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg___boxed(lean_object* v_x_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_, lean_object* v___y_2777_, lean_object* v___y_2778_, lean_object* v___y_2779_, lean_object* v___y_2780_){
_start:
{
lean_object* v_res_2781_; 
v_res_2781_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg(v_x_2772_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_, v___y_2777_, v___y_2778_, v___y_2779_);
lean_dec(v___y_2779_);
lean_dec_ref(v___y_2778_);
lean_dec(v___y_2777_);
lean_dec_ref(v___y_2776_);
lean_dec(v___y_2775_);
lean_dec(v___y_2774_);
lean_dec_ref(v___y_2773_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg(lean_object* v_x_2785_, lean_object* v___y_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_){
_start:
{
lean_object* v___x_2793_; lean_object* v___x_2794_; 
v___x_2793_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg___closed__0));
v___x_2794_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg(v_x_2785_, v___x_2793_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_, v___y_2791_);
return v___x_2794_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg___boxed(lean_object* v_x_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_, lean_object* v___y_2799_, lean_object* v___y_2800_, lean_object* v___y_2801_, lean_object* v___y_2802_){
_start:
{
lean_object* v_res_2803_; 
v_res_2803_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg(v_x_2795_, v___y_2796_, v___y_2797_, v___y_2798_, v___y_2799_, v___y_2800_, v___y_2801_);
lean_dec(v___y_2801_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2799_);
lean_dec_ref(v___y_2798_);
lean_dec(v___y_2797_);
lean_dec(v___y_2796_);
return v_res_2803_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope(lean_object* v_00_u03b1_2804_, lean_object* v_x_2805_, lean_object* v___y_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_, lean_object* v___y_2812_){
_start:
{
lean_object* v___x_2814_; 
v___x_2814_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg(v_x_2805_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_, v___y_2811_, v___y_2812_);
return v___x_2814_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___boxed(lean_object* v_00_u03b1_2815_, lean_object* v_x_2816_, lean_object* v___y_2817_, lean_object* v___y_2818_, lean_object* v___y_2819_, lean_object* v___y_2820_, lean_object* v___y_2821_, lean_object* v___y_2822_, lean_object* v___y_2823_, lean_object* v___y_2824_){
_start:
{
lean_object* v_res_2825_; 
v_res_2825_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope(v_00_u03b1_2815_, v_x_2816_, v___y_2817_, v___y_2818_, v___y_2819_, v___y_2820_, v___y_2821_, v___y_2822_, v___y_2823_);
lean_dec(v___y_2823_);
lean_dec_ref(v___y_2822_);
lean_dec(v___y_2821_);
lean_dec_ref(v___y_2820_);
lean_dec(v___y_2819_);
lean_dec(v___y_2818_);
lean_dec_ref(v___y_2817_);
return v_res_2825_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0(lean_object* v_00_u03b1_2826_, lean_object* v_x_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg(v_x_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2837_, lean_object* v_x_2838_, lean_object* v___y_2839_, lean_object* v___y_2840_, lean_object* v___y_2841_, lean_object* v___y_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_res_2847_; 
v_res_2847_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0(v_00_u03b1_2837_, v_x_2838_, v___y_2839_, v___y_2840_, v___y_2841_, v___y_2842_, v___y_2843_, v___y_2844_, v___y_2845_);
lean_dec(v___y_2845_);
lean_dec_ref(v___y_2844_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2842_);
lean_dec(v___y_2841_);
lean_dec(v___y_2840_);
lean_dec_ref(v___y_2839_);
return v_res_2847_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0(lean_object* v_00_u03b1_2848_, lean_object* v_x_2849_, lean_object* v___y_2850_, lean_object* v___y_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v___x_2858_; 
v___x_2858_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___redArg(v_x_2849_, v___y_2850_, v___y_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_, v___y_2856_);
return v___x_2858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___boxed(lean_object* v_00_u03b1_2859_, lean_object* v_x_2860_, lean_object* v___y_2861_, lean_object* v___y_2862_, lean_object* v___y_2863_, lean_object* v___y_2864_, lean_object* v___y_2865_, lean_object* v___y_2866_, lean_object* v___y_2867_, lean_object* v___y_2868_){
_start:
{
lean_object* v_res_2869_; 
v_res_2869_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0(v_00_u03b1_2859_, v_x_2860_, v___y_2861_, v___y_2862_, v___y_2863_, v___y_2864_, v___y_2865_, v___y_2866_, v___y_2867_);
lean_dec(v___y_2867_);
lean_dec_ref(v___y_2866_);
lean_dec(v___y_2865_);
lean_dec_ref(v___y_2864_);
lean_dec(v___y_2863_);
lean_dec(v___y_2862_);
lean_dec_ref(v___y_2861_);
return v_res_2869_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__0(size_t v_sz_2870_, size_t v_i_2871_, lean_object* v_bs_2872_){
_start:
{
uint8_t v___x_2873_; 
v___x_2873_ = lean_usize_dec_lt(v_i_2871_, v_sz_2870_);
if (v___x_2873_ == 0)
{
return v_bs_2872_;
}
else
{
lean_object* v_v_2874_; lean_object* v_fvarId_2875_; lean_object* v___x_2876_; lean_object* v_bs_x27_2877_; size_t v___x_2878_; size_t v___x_2879_; lean_object* v___x_2880_; 
v_v_2874_ = lean_array_uget_borrowed(v_bs_2872_, v_i_2871_);
v_fvarId_2875_ = lean_ctor_get(v_v_2874_, 0);
lean_inc(v_fvarId_2875_);
v___x_2876_ = lean_unsigned_to_nat(0u);
v_bs_x27_2877_ = lean_array_uset(v_bs_2872_, v_i_2871_, v___x_2876_);
v___x_2878_ = ((size_t)1ULL);
v___x_2879_ = lean_usize_add(v_i_2871_, v___x_2878_);
v___x_2880_ = lean_array_uset(v_bs_x27_2877_, v_i_2871_, v_fvarId_2875_);
v_i_2871_ = v___x_2879_;
v_bs_2872_ = v___x_2880_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__0___boxed(lean_object* v_sz_2882_, lean_object* v_i_2883_, lean_object* v_bs_2884_){
_start:
{
size_t v_sz_boxed_2885_; size_t v_i_boxed_2886_; lean_object* v_res_2887_; 
v_sz_boxed_2885_ = lean_unbox_usize(v_sz_2882_);
lean_dec(v_sz_2882_);
v_i_boxed_2886_ = lean_unbox_usize(v_i_2883_);
lean_dec(v_i_2883_);
v_res_2887_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__0(v_sz_boxed_2885_, v_i_boxed_2886_, v_bs_2884_);
return v_res_2887_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___lam__0(lean_object* v___x_2888_, lean_object* v_x_2889_, lean_object* v___y_2890_, lean_object* v___y_2891_, lean_object* v___y_2892_, lean_object* v___y_2893_, lean_object* v___y_2894_, lean_object* v___y_2895_, lean_object* v___y_2896_){
_start:
{
lean_object* v___x_2898_; 
v___x_2898_ = l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(v___y_2892_);
if (lean_obj_tag(v___x_2898_) == 0)
{
lean_object* v___x_2899_; 
lean_dec_ref_known(v___x_2898_, 1);
v___x_2899_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___redArg(v___x_2888_, v_x_2889_, v___y_2890_, v___y_2891_, v___y_2892_, v___y_2893_, v___y_2894_, v___y_2895_, v___y_2896_);
return v___x_2899_;
}
else
{
lean_object* v_a_2900_; lean_object* v___x_2902_; uint8_t v_isShared_2903_; uint8_t v_isSharedCheck_2907_; 
lean_dec_ref(v_x_2889_);
v_a_2900_ = lean_ctor_get(v___x_2898_, 0);
v_isSharedCheck_2907_ = !lean_is_exclusive(v___x_2898_);
if (v_isSharedCheck_2907_ == 0)
{
v___x_2902_ = v___x_2898_;
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
else
{
lean_inc(v_a_2900_);
lean_dec(v___x_2898_);
v___x_2902_ = lean_box(0);
v_isShared_2903_ = v_isSharedCheck_2907_;
goto v_resetjp_2901_;
}
v_resetjp_2901_:
{
lean_object* v___x_2905_; 
if (v_isShared_2903_ == 0)
{
v___x_2905_ = v___x_2902_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2906_; 
v_reuseFailAlloc_2906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2906_, 0, v_a_2900_);
v___x_2905_ = v_reuseFailAlloc_2906_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
return v___x_2905_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___lam__0___boxed(lean_object* v___x_2908_, lean_object* v_x_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_, lean_object* v___y_2913_, lean_object* v___y_2914_, lean_object* v___y_2915_, lean_object* v___y_2916_, lean_object* v___y_2917_){
_start:
{
lean_object* v_res_2918_; 
v_res_2918_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___lam__0(v___x_2908_, v_x_2909_, v___y_2910_, v___y_2911_, v___y_2912_, v___y_2913_, v___y_2914_, v___y_2915_, v___y_2916_);
lean_dec(v___y_2916_);
lean_dec_ref(v___y_2915_);
lean_dec(v___y_2914_);
lean_dec_ref(v___y_2913_);
lean_dec(v___y_2912_);
lean_dec(v___y_2911_);
lean_dec_ref(v___y_2910_);
lean_dec_ref(v___x_2908_);
return v_res_2918_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg(lean_object* v___x_2919_, lean_object* v_x_2920_, lean_object* v___y_2921_, lean_object* v___y_2922_, lean_object* v___y_2923_, lean_object* v___y_2924_, lean_object* v___y_2925_, lean_object* v___y_2926_, lean_object* v___y_2927_){
_start:
{
lean_object* v___f_2929_; lean_object* v___x_2930_; 
v___f_2929_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_2929_, 0, v___x_2919_);
lean_closure_set(v___f_2929_, 1, v_x_2920_);
v___x_2930_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg(v___f_2929_, v___y_2921_, v___y_2922_, v___y_2923_, v___y_2924_, v___y_2925_, v___y_2926_, v___y_2927_);
return v___x_2930_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg___boxed(lean_object* v___x_2931_, lean_object* v_x_2932_, lean_object* v___y_2933_, lean_object* v___y_2934_, lean_object* v___y_2935_, lean_object* v___y_2936_, lean_object* v___y_2937_, lean_object* v___y_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_){
_start:
{
lean_object* v_res_2941_; 
v_res_2941_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg(v___x_2931_, v_x_2932_, v___y_2933_, v___y_2934_, v___y_2935_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
lean_dec(v___y_2939_);
lean_dec_ref(v___y_2938_);
lean_dec(v___y_2937_);
lean_dec_ref(v___y_2936_);
lean_dec(v___y_2935_);
lean_dec(v___y_2934_);
lean_dec_ref(v___y_2933_);
return v_res_2941_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1(lean_object* v_00_u03b1_2942_, lean_object* v___x_2943_, lean_object* v_x_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_, lean_object* v___y_2951_){
_start:
{
lean_object* v___x_2953_; 
v___x_2953_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg(v___x_2943_, v_x_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_, v___y_2951_);
return v___x_2953_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___boxed(lean_object* v_00_u03b1_2954_, lean_object* v___x_2955_, lean_object* v_x_2956_, lean_object* v___y_2957_, lean_object* v___y_2958_, lean_object* v___y_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1(v_00_u03b1_2954_, v___x_2955_, v_x_2956_, v___y_2957_, v___y_2958_, v___y_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
lean_dec(v___y_2963_);
lean_dec_ref(v___y_2962_);
lean_dec(v___y_2961_);
lean_dec_ref(v___y_2960_);
lean_dec(v___y_2959_);
lean_dec(v___y_2958_);
lean_dec_ref(v___y_2957_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___redArg(lean_object* v_decl_2966_, lean_object* v_x_2967_, lean_object* v___y_2968_, lean_object* v___y_2969_, lean_object* v___y_2970_, lean_object* v___y_2971_, lean_object* v___y_2972_, lean_object* v___y_2973_, lean_object* v___y_2974_){
_start:
{
lean_object* v_fvarId_2976_; lean_object* v_params_2977_; lean_object* v_candidates_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; size_t v_sz_2985_; size_t v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; 
v_fvarId_2976_ = lean_ctor_get(v_decl_2966_, 0);
lean_inc_n(v_fvarId_2976_, 2);
v_params_2977_ = lean_ctor_get(v_decl_2966_, 2);
lean_inc_ref(v_params_2977_);
lean_dec_ref(v_decl_2966_);
v_candidates_2978_ = lean_ctor_get(v___y_2968_, 1);
v___x_2979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2979_, 0, v_fvarId_2976_);
lean_inc(v_candidates_2978_);
v___x_2980_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2980_, 0, v___x_2979_);
lean_ctor_set(v___x_2980_, 1, v_candidates_2978_);
v___x_2981_ = lean_st_ref_take(v___y_2969_);
v___x_2982_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1);
v___x_2983_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(v___x_2981_, v_fvarId_2976_, v___x_2982_);
v___x_2984_ = lean_st_ref_put(v___y_2969_, v___x_2983_);
v_sz_2985_ = lean_array_size(v_params_2977_);
v___x_2986_ = ((size_t)0ULL);
v___x_2987_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__0(v_sz_2985_, v___x_2986_, v_params_2977_);
v___x_2988_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__1___redArg(v___x_2987_, v_x_2967_, v___x_2980_, v___y_2969_, v___y_2970_, v___y_2971_, v___y_2972_, v___y_2973_, v___y_2974_);
lean_dec_ref_known(v___x_2980_, 2);
return v___x_2988_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___redArg___boxed(lean_object* v_decl_2989_, lean_object* v_x_2990_, lean_object* v___y_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_, lean_object* v___y_2996_, lean_object* v___y_2997_, lean_object* v___y_2998_){
_start:
{
lean_object* v_res_2999_; 
v_res_2999_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___redArg(v_decl_2989_, v_x_2990_, v___y_2991_, v___y_2992_, v___y_2993_, v___y_2994_, v___y_2995_, v___y_2996_, v___y_2997_);
lean_dec(v___y_2997_);
lean_dec_ref(v___y_2996_);
lean_dec(v___y_2995_);
lean_dec_ref(v___y_2994_);
lean_dec(v___y_2993_);
lean_dec(v___y_2992_);
lean_dec_ref(v___y_2991_);
return v_res_2999_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope(lean_object* v_00_u03b1_3000_, lean_object* v_decl_3001_, lean_object* v_x_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_, lean_object* v___y_3008_, lean_object* v___y_3009_){
_start:
{
lean_object* v___x_3011_; 
v___x_3011_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___redArg(v_decl_3001_, v_x_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_, v___y_3008_, v___y_3009_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___boxed(lean_object* v_00_u03b1_3012_, lean_object* v_decl_3013_, lean_object* v_x_3014_, lean_object* v___y_3015_, lean_object* v___y_3016_, lean_object* v___y_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope(v_00_u03b1_3012_, v_decl_3013_, v_x_3014_, v___y_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_);
lean_dec(v___y_3021_);
lean_dec_ref(v___y_3020_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec(v___y_3016_);
lean_dec_ref(v___y_3015_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___redArg(lean_object* v_alt_3024_, lean_object* v_x_3025_, lean_object* v___y_3026_, lean_object* v___y_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
lean_object* v___x_3034_; size_t v_sz_3035_; size_t v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; 
v___x_3034_ = l_Lean_Compiler_LCNF_Alt_getParams(v_alt_3024_);
v_sz_3035_ = lean_array_size(v___x_3034_);
v___x_3036_ = ((size_t)0ULL);
v___x_3037_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope_spec__0(v_sz_3035_, v___x_3036_, v___x_3034_);
v___x_3038_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidates___boxed), 11, 3);
lean_closure_set(v___x_3038_, 0, lean_box(0));
lean_closure_set(v___x_3038_, 1, v___x_3037_);
lean_closure_set(v___x_3038_, 2, v_x_3025_);
v___x_3039_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope_spec__0_spec__0___redArg(v___x_3038_, v___y_3026_, v___y_3027_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_, v___y_3032_);
return v___x_3039_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___redArg___boxed(lean_object* v_alt_3040_, lean_object* v_x_3041_, lean_object* v___y_3042_, lean_object* v___y_3043_, lean_object* v___y_3044_, lean_object* v___y_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v_res_3050_; 
v_res_3050_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___redArg(v_alt_3040_, v_x_3041_, v___y_3042_, v___y_3043_, v___y_3044_, v___y_3045_, v___y_3046_, v___y_3047_, v___y_3048_);
lean_dec(v___y_3048_);
lean_dec_ref(v___y_3047_);
lean_dec(v___y_3046_);
lean_dec_ref(v___y_3045_);
lean_dec(v___y_3044_);
lean_dec(v___y_3043_);
lean_dec_ref(v___y_3042_);
lean_dec_ref(v_alt_3040_);
return v_res_3050_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope(lean_object* v_00_u03b1_3051_, lean_object* v_alt_3052_, lean_object* v_x_3053_, lean_object* v___y_3054_, lean_object* v___y_3055_, lean_object* v___y_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_){
_start:
{
lean_object* v___x_3062_; 
v___x_3062_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___redArg(v_alt_3052_, v_x_3053_, v___y_3054_, v___y_3055_, v___y_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
return v___x_3062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___boxed(lean_object* v_00_u03b1_3063_, lean_object* v_alt_3064_, lean_object* v_x_3065_, lean_object* v___y_3066_, lean_object* v___y_3067_, lean_object* v___y_3068_, lean_object* v___y_3069_, lean_object* v___y_3070_, lean_object* v___y_3071_, lean_object* v___y_3072_, lean_object* v___y_3073_){
_start:
{
lean_object* v_res_3074_; 
v_res_3074_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope(v_00_u03b1_3063_, v_alt_3064_, v_x_3065_, v___y_3066_, v___y_3067_, v___y_3068_, v___y_3069_, v___y_3070_, v___y_3071_, v___y_3072_);
lean_dec(v___y_3072_);
lean_dec_ref(v___y_3071_);
lean_dec(v___y_3070_);
lean_dec_ref(v___y_3069_);
lean_dec(v___y_3068_);
lean_dec(v___y_3067_);
lean_dec_ref(v___y_3066_);
lean_dec_ref(v_alt_3064_);
return v_res_3074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(lean_object* v_fvar_3075_, lean_object* v___y_3076_, lean_object* v___y_3077_, lean_object* v___y_3078_, lean_object* v___y_3079_, lean_object* v___y_3080_, lean_object* v___y_3081_, lean_object* v___y_3082_){
_start:
{
lean_object* v___x_3084_; 
lean_inc(v_fvar_3075_);
v___x_3084_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(v_fvar_3075_, v___y_3076_, v___y_3077_, v___y_3078_, v___y_3079_, v___y_3080_, v___y_3081_, v___y_3082_);
if (lean_obj_tag(v___x_3084_) == 0)
{
lean_object* v___x_3085_; 
lean_dec_ref_known(v___x_3084_, 1);
v___x_3085_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg(v_fvar_3075_, v___y_3076_, v___y_3077_);
return v___x_3085_;
}
else
{
lean_object* v_a_3086_; lean_object* v___x_3088_; uint8_t v_isShared_3089_; uint8_t v_isSharedCheck_3093_; 
lean_dec(v_fvar_3075_);
v_a_3086_ = lean_ctor_get(v___x_3084_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3084_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3088_ = v___x_3084_;
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
else
{
lean_inc(v_a_3086_);
lean_dec(v___x_3084_);
v___x_3088_ = lean_box(0);
v_isShared_3089_ = v_isSharedCheck_3093_;
goto v_resetjp_3087_;
}
v_resetjp_3087_:
{
lean_object* v___x_3091_; 
if (v_isShared_3089_ == 0)
{
v___x_3091_ = v___x_3088_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3086_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar___boxed(lean_object* v_fvar_3094_, lean_object* v___y_3095_, lean_object* v___y_3096_, lean_object* v___y_3097_, lean_object* v___y_3098_, lean_object* v___y_3099_, lean_object* v___y_3100_, lean_object* v___y_3101_, lean_object* v___y_3102_){
_start:
{
lean_object* v_res_3103_; 
v_res_3103_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(v_fvar_3094_, v___y_3095_, v___y_3096_, v___y_3097_, v___y_3098_, v___y_3099_, v___y_3100_, v___y_3101_);
lean_dec(v___y_3101_);
lean_dec_ref(v___y_3100_);
lean_dec(v___y_3099_);
lean_dec_ref(v___y_3098_);
lean_dec(v___y_3097_);
lean_dec(v___y_3096_);
lean_dec_ref(v___y_3095_);
return v_res_3103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___redArg(lean_object* v_alt_3104_, lean_object* v_f_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_, lean_object* v___y_3108_, lean_object* v___y_3109_, lean_object* v___y_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_){
_start:
{
lean_object* v___y_3115_; 
switch(lean_obj_tag(v_alt_3104_))
{
case 0:
{
lean_object* v_code_3134_; 
v_code_3134_ = lean_ctor_get(v_alt_3104_, 2);
lean_inc_ref(v_code_3134_);
v___y_3115_ = v_code_3134_;
goto v___jp_3114_;
}
case 1:
{
lean_object* v_code_3135_; 
v_code_3135_ = lean_ctor_get(v_alt_3104_, 1);
lean_inc_ref(v_code_3135_);
v___y_3115_ = v_code_3135_;
goto v___jp_3114_;
}
default: 
{
lean_object* v_code_3136_; 
v_code_3136_ = lean_ctor_get(v_alt_3104_, 0);
lean_inc_ref(v_code_3136_);
v___y_3115_ = v_code_3136_;
goto v___jp_3114_;
}
}
v___jp_3114_:
{
lean_object* v___x_3116_; 
lean_inc(v___y_3112_);
lean_inc_ref(v___y_3111_);
lean_inc(v___y_3110_);
lean_inc_ref(v___y_3109_);
lean_inc(v___y_3108_);
lean_inc(v___y_3107_);
lean_inc_ref(v___y_3106_);
v___x_3116_ = lean_apply_9(v_f_3105_, v___y_3115_, v___y_3106_, v___y_3107_, v___y_3108_, v___y_3109_, v___y_3110_, v___y_3111_, v___y_3112_, lean_box(0));
if (lean_obj_tag(v___x_3116_) == 0)
{
lean_object* v_a_3117_; lean_object* v___x_3119_; uint8_t v_isShared_3120_; uint8_t v_isSharedCheck_3125_; 
v_a_3117_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3125_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3125_ == 0)
{
v___x_3119_ = v___x_3116_;
v_isShared_3120_ = v_isSharedCheck_3125_;
goto v_resetjp_3118_;
}
else
{
lean_inc(v_a_3117_);
lean_dec(v___x_3116_);
v___x_3119_ = lean_box(0);
v_isShared_3120_ = v_isSharedCheck_3125_;
goto v_resetjp_3118_;
}
v_resetjp_3118_:
{
lean_object* v___x_3121_; lean_object* v___x_3123_; 
v___x_3121_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_3104_, v_a_3117_);
if (v_isShared_3120_ == 0)
{
lean_ctor_set(v___x_3119_, 0, v___x_3121_);
v___x_3123_ = v___x_3119_;
goto v_reusejp_3122_;
}
else
{
lean_object* v_reuseFailAlloc_3124_; 
v_reuseFailAlloc_3124_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3124_, 0, v___x_3121_);
v___x_3123_ = v_reuseFailAlloc_3124_;
goto v_reusejp_3122_;
}
v_reusejp_3122_:
{
return v___x_3123_;
}
}
}
else
{
lean_object* v_a_3126_; lean_object* v___x_3128_; uint8_t v_isShared_3129_; uint8_t v_isSharedCheck_3133_; 
lean_dec_ref(v_alt_3104_);
v_a_3126_ = lean_ctor_get(v___x_3116_, 0);
v_isSharedCheck_3133_ = !lean_is_exclusive(v___x_3116_);
if (v_isSharedCheck_3133_ == 0)
{
v___x_3128_ = v___x_3116_;
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
else
{
lean_inc(v_a_3126_);
lean_dec(v___x_3116_);
v___x_3128_ = lean_box(0);
v_isShared_3129_ = v_isSharedCheck_3133_;
goto v_resetjp_3127_;
}
v_resetjp_3127_:
{
lean_object* v___x_3131_; 
if (v_isShared_3129_ == 0)
{
v___x_3131_ = v___x_3128_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3132_; 
v_reuseFailAlloc_3132_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3132_, 0, v_a_3126_);
v___x_3131_ = v_reuseFailAlloc_3132_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
return v___x_3131_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___redArg___boxed(lean_object* v_alt_3137_, lean_object* v_f_3138_, lean_object* v___y_3139_, lean_object* v___y_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_){
_start:
{
lean_object* v_res_3147_; 
v_res_3147_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___redArg(v_alt_3137_, v_f_3138_, v___y_3139_, v___y_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_);
lean_dec(v___y_3145_);
lean_dec_ref(v___y_3144_);
lean_dec(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec(v___y_3140_);
lean_dec_ref(v___y_3139_);
return v_res_3147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8(uint8_t v_pu_3148_, lean_object* v_alt_3149_, lean_object* v_f_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_, lean_object* v___y_3154_, lean_object* v___y_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_){
_start:
{
lean_object* v___x_3159_; 
v___x_3159_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___redArg(v_alt_3149_, v_f_3150_, v___y_3151_, v___y_3152_, v___y_3153_, v___y_3154_, v___y_3155_, v___y_3156_, v___y_3157_);
return v___x_3159_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___boxed(lean_object* v_pu_3160_, lean_object* v_alt_3161_, lean_object* v_f_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_, lean_object* v___y_3168_, lean_object* v___y_3169_, lean_object* v___y_3170_){
_start:
{
uint8_t v_pu_boxed_3171_; lean_object* v_res_3172_; 
v_pu_boxed_3171_ = lean_unbox(v_pu_3160_);
v_res_3172_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8(v_pu_boxed_3171_, v_alt_3161_, v_f_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_, v___y_3167_, v___y_3168_, v___y_3169_);
lean_dec(v___y_3169_);
lean_dec_ref(v___y_3168_);
lean_dec(v___y_3167_);
lean_dec_ref(v___y_3166_);
lean_dec(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
return v_res_3172_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6(lean_object* v_msg_3173_, lean_object* v___y_3174_, lean_object* v___y_3175_, lean_object* v___y_3176_, lean_object* v___y_3177_, lean_object* v___y_3178_, lean_object* v___y_3179_, lean_object* v___y_3180_){
_start:
{
lean_object* v___f_3182_; lean_object* v___f_3183_; lean_object* v___f_3184_; lean_object* v___f_3185_; lean_object* v___f_3186_; lean_object* v___f_3187_; lean_object* v___f_3188_; lean_object* v___f_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; lean_object* v___x_3193_; lean_object* v_toApplicative_3194_; lean_object* v___x_3196_; uint8_t v_isShared_3197_; uint8_t v_isSharedCheck_3258_; 
v___f_3182_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__0));
v___f_3183_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__1));
v___f_3184_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__2));
v___f_3185_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__3));
v___f_3186_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__4));
v___f_3187_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_3187_, 0, v___f_3186_);
lean_closure_set(v___f_3187_, 1, v___f_3185_);
v___f_3188_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_3188_, 0, v___f_3185_);
v___f_3189_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__5));
v___x_3190_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3190_, 0, v___f_3182_);
lean_ctor_set(v___x_3190_, 1, v___f_3183_);
v___x_3191_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3190_);
lean_ctor_set(v___x_3191_, 1, v___f_3184_);
lean_ctor_set(v___x_3191_, 2, v___f_3187_);
lean_ctor_set(v___x_3191_, 3, v___f_3188_);
lean_ctor_set(v___x_3191_, 4, v___f_3189_);
v___x_3192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3192_, 0, v___x_3191_);
lean_ctor_set(v___x_3192_, 1, v___f_3185_);
v___x_3193_ = l_StateRefT_x27_instMonad___redArg(v___x_3192_);
v_toApplicative_3194_ = lean_ctor_get(v___x_3193_, 0);
v_isSharedCheck_3258_ = !lean_is_exclusive(v___x_3193_);
if (v_isSharedCheck_3258_ == 0)
{
lean_object* v_unused_3259_; 
v_unused_3259_ = lean_ctor_get(v___x_3193_, 1);
lean_dec(v_unused_3259_);
v___x_3196_ = v___x_3193_;
v_isShared_3197_ = v_isSharedCheck_3258_;
goto v_resetjp_3195_;
}
else
{
lean_inc(v_toApplicative_3194_);
lean_dec(v___x_3193_);
v___x_3196_ = lean_box(0);
v_isShared_3197_ = v_isSharedCheck_3258_;
goto v_resetjp_3195_;
}
v_resetjp_3195_:
{
lean_object* v_toFunctor_3198_; lean_object* v_toSeq_3199_; lean_object* v_toSeqLeft_3200_; lean_object* v_toSeqRight_3201_; lean_object* v___x_3203_; uint8_t v_isShared_3204_; uint8_t v_isSharedCheck_3256_; 
v_toFunctor_3198_ = lean_ctor_get(v_toApplicative_3194_, 0);
v_toSeq_3199_ = lean_ctor_get(v_toApplicative_3194_, 2);
v_toSeqLeft_3200_ = lean_ctor_get(v_toApplicative_3194_, 3);
v_toSeqRight_3201_ = lean_ctor_get(v_toApplicative_3194_, 4);
v_isSharedCheck_3256_ = !lean_is_exclusive(v_toApplicative_3194_);
if (v_isSharedCheck_3256_ == 0)
{
lean_object* v_unused_3257_; 
v_unused_3257_ = lean_ctor_get(v_toApplicative_3194_, 1);
lean_dec(v_unused_3257_);
v___x_3203_ = v_toApplicative_3194_;
v_isShared_3204_ = v_isSharedCheck_3256_;
goto v_resetjp_3202_;
}
else
{
lean_inc(v_toSeqRight_3201_);
lean_inc(v_toSeqLeft_3200_);
lean_inc(v_toSeq_3199_);
lean_inc(v_toFunctor_3198_);
lean_dec(v_toApplicative_3194_);
v___x_3203_ = lean_box(0);
v_isShared_3204_ = v_isSharedCheck_3256_;
goto v_resetjp_3202_;
}
v_resetjp_3202_:
{
lean_object* v___f_3205_; lean_object* v___f_3206_; lean_object* v___f_3207_; lean_object* v___f_3208_; lean_object* v___x_3209_; lean_object* v___f_3210_; lean_object* v___f_3211_; lean_object* v___f_3212_; lean_object* v___x_3214_; 
v___f_3205_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__6));
v___f_3206_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__7));
lean_inc_ref(v_toFunctor_3198_);
v___f_3207_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3207_, 0, v_toFunctor_3198_);
v___f_3208_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3208_, 0, v_toFunctor_3198_);
v___x_3209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3209_, 0, v___f_3207_);
lean_ctor_set(v___x_3209_, 1, v___f_3208_);
v___f_3210_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3210_, 0, v_toSeqRight_3201_);
v___f_3211_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3211_, 0, v_toSeqLeft_3200_);
v___f_3212_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3212_, 0, v_toSeq_3199_);
if (v_isShared_3204_ == 0)
{
lean_ctor_set(v___x_3203_, 4, v___f_3210_);
lean_ctor_set(v___x_3203_, 3, v___f_3211_);
lean_ctor_set(v___x_3203_, 2, v___f_3212_);
lean_ctor_set(v___x_3203_, 1, v___f_3205_);
lean_ctor_set(v___x_3203_, 0, v___x_3209_);
v___x_3214_ = v___x_3203_;
goto v_reusejp_3213_;
}
else
{
lean_object* v_reuseFailAlloc_3255_; 
v_reuseFailAlloc_3255_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3255_, 0, v___x_3209_);
lean_ctor_set(v_reuseFailAlloc_3255_, 1, v___f_3205_);
lean_ctor_set(v_reuseFailAlloc_3255_, 2, v___f_3212_);
lean_ctor_set(v_reuseFailAlloc_3255_, 3, v___f_3211_);
lean_ctor_set(v_reuseFailAlloc_3255_, 4, v___f_3210_);
v___x_3214_ = v_reuseFailAlloc_3255_;
goto v_reusejp_3213_;
}
v_reusejp_3213_:
{
lean_object* v___x_3216_; 
if (v_isShared_3197_ == 0)
{
lean_ctor_set(v___x_3196_, 1, v___f_3206_);
lean_ctor_set(v___x_3196_, 0, v___x_3214_);
v___x_3216_ = v___x_3196_;
goto v_reusejp_3215_;
}
else
{
lean_object* v_reuseFailAlloc_3254_; 
v_reuseFailAlloc_3254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3254_, 0, v___x_3214_);
lean_ctor_set(v_reuseFailAlloc_3254_, 1, v___f_3206_);
v___x_3216_ = v_reuseFailAlloc_3254_;
goto v_reusejp_3215_;
}
v_reusejp_3215_:
{
lean_object* v___x_3217_; lean_object* v_toApplicative_3218_; lean_object* v___x_3220_; uint8_t v_isShared_3221_; uint8_t v_isSharedCheck_3252_; 
v___x_3217_ = l_StateRefT_x27_instMonad___redArg(v___x_3216_);
v_toApplicative_3218_ = lean_ctor_get(v___x_3217_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3217_);
if (v_isSharedCheck_3252_ == 0)
{
lean_object* v_unused_3253_; 
v_unused_3253_ = lean_ctor_get(v___x_3217_, 1);
lean_dec(v_unused_3253_);
v___x_3220_ = v___x_3217_;
v_isShared_3221_ = v_isSharedCheck_3252_;
goto v_resetjp_3219_;
}
else
{
lean_inc(v_toApplicative_3218_);
lean_dec(v___x_3217_);
v___x_3220_ = lean_box(0);
v_isShared_3221_ = v_isSharedCheck_3252_;
goto v_resetjp_3219_;
}
v_resetjp_3219_:
{
lean_object* v_toFunctor_3222_; lean_object* v_toSeq_3223_; lean_object* v_toSeqLeft_3224_; lean_object* v_toSeqRight_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3250_; 
v_toFunctor_3222_ = lean_ctor_get(v_toApplicative_3218_, 0);
v_toSeq_3223_ = lean_ctor_get(v_toApplicative_3218_, 2);
v_toSeqLeft_3224_ = lean_ctor_get(v_toApplicative_3218_, 3);
v_toSeqRight_3225_ = lean_ctor_get(v_toApplicative_3218_, 4);
v_isSharedCheck_3250_ = !lean_is_exclusive(v_toApplicative_3218_);
if (v_isSharedCheck_3250_ == 0)
{
lean_object* v_unused_3251_; 
v_unused_3251_ = lean_ctor_get(v_toApplicative_3218_, 1);
lean_dec(v_unused_3251_);
v___x_3227_ = v_toApplicative_3218_;
v_isShared_3228_ = v_isSharedCheck_3250_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_toSeqRight_3225_);
lean_inc(v_toSeqLeft_3224_);
lean_inc(v_toSeq_3223_);
lean_inc(v_toFunctor_3222_);
lean_dec(v_toApplicative_3218_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3250_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v___f_3229_; lean_object* v___f_3230_; lean_object* v___f_3231_; lean_object* v___f_3232_; lean_object* v___x_3233_; lean_object* v___f_3234_; lean_object* v___f_3235_; lean_object* v___f_3236_; lean_object* v___x_3238_; 
v___f_3229_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__8));
v___f_3230_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__9));
lean_inc_ref(v_toFunctor_3222_);
v___f_3231_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_3231_, 0, v_toFunctor_3222_);
v___f_3232_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3232_, 0, v_toFunctor_3222_);
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___f_3231_);
lean_ctor_set(v___x_3233_, 1, v___f_3232_);
v___f_3234_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3234_, 0, v_toSeqRight_3225_);
v___f_3235_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_3235_, 0, v_toSeqLeft_3224_);
v___f_3236_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_3236_, 0, v_toSeq_3223_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 4, v___f_3234_);
lean_ctor_set(v___x_3227_, 3, v___f_3235_);
lean_ctor_set(v___x_3227_, 2, v___f_3236_);
lean_ctor_set(v___x_3227_, 1, v___f_3229_);
lean_ctor_set(v___x_3227_, 0, v___x_3233_);
v___x_3238_ = v___x_3227_;
goto v_reusejp_3237_;
}
else
{
lean_object* v_reuseFailAlloc_3249_; 
v_reuseFailAlloc_3249_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3249_, 0, v___x_3233_);
lean_ctor_set(v_reuseFailAlloc_3249_, 1, v___f_3229_);
lean_ctor_set(v_reuseFailAlloc_3249_, 2, v___f_3236_);
lean_ctor_set(v_reuseFailAlloc_3249_, 3, v___f_3235_);
lean_ctor_set(v_reuseFailAlloc_3249_, 4, v___f_3234_);
v___x_3238_ = v_reuseFailAlloc_3249_;
goto v_reusejp_3237_;
}
v_reusejp_3237_:
{
lean_object* v___x_3240_; 
if (v_isShared_3221_ == 0)
{
lean_ctor_set(v___x_3220_, 1, v___f_3230_);
lean_ctor_set(v___x_3220_, 0, v___x_3238_);
v___x_3240_ = v___x_3220_;
goto v_reusejp_3239_;
}
else
{
lean_object* v_reuseFailAlloc_3248_; 
v_reuseFailAlloc_3248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3248_, 0, v___x_3238_);
lean_ctor_set(v_reuseFailAlloc_3248_, 1, v___f_3230_);
v___x_3240_ = v_reuseFailAlloc_3248_;
goto v_reusejp_3239_;
}
v_reusejp_3239_:
{
lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_37056__overap_3246_; lean_object* v___x_3247_; 
v___x_3241_ = l_StateRefT_x27_instMonad___redArg(v___x_3240_);
v___x_3242_ = l_StateRefT_x27_instMonad___redArg(v___x_3241_);
v___x_3243_ = l_ReaderT_instMonad___redArg(v___x_3242_);
v___x_3244_ = l_Lean_instInhabitedExpr;
v___x_3245_ = l_instInhabitedOfMonad___redArg(v___x_3243_, v___x_3244_);
v___x_37056__overap_3246_ = lean_panic_fn_borrowed(v___x_3245_, v_msg_3173_);
lean_dec(v___x_3245_);
lean_inc(v___y_3180_);
lean_inc_ref(v___y_3179_);
lean_inc(v___y_3178_);
lean_inc_ref(v___y_3177_);
lean_inc(v___y_3176_);
lean_inc(v___y_3175_);
lean_inc_ref(v___y_3174_);
v___x_3247_ = lean_apply_8(v___x_37056__overap_3246_, v___y_3174_, v___y_3175_, v___y_3176_, v___y_3177_, v___y_3178_, v___y_3179_, v___y_3180_, lean_box(0));
return v___x_3247_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6___boxed(lean_object* v_msg_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_, lean_object* v___y_3268_){
_start:
{
lean_object* v_res_3269_; 
v_res_3269_ = l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6(v_msg_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_);
lean_dec(v___y_3267_);
lean_dec_ref(v___y_3266_);
lean_dec(v___y_3265_);
lean_dec_ref(v___y_3264_);
lean_dec(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
return v_res_3269_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_3271_; lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3271_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__2));
v___x_3272_ = lean_unsigned_to_nat(41u);
v___x_3273_ = lean_unsigned_to_nat(30u);
v___x_3274_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__0));
v___x_3275_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__0));
v___x_3276_ = l_mkPanicMessageWithDecl(v___x_3275_, v___x_3274_, v___x_3273_, v___x_3272_, v___x_3271_);
return v___x_3276_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(lean_object* v_f_3277_, lean_object* v_e_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_, lean_object* v___y_3283_, lean_object* v___y_3284_, lean_object* v___y_3285_){
_start:
{
uint8_t v___x_3287_; 
v___x_3287_ = l_Lean_Expr_hasFVar(v_e_3278_);
if (v___x_3287_ == 0)
{
lean_object* v___x_3288_; 
lean_dec_ref(v_f_3277_);
v___x_3288_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3288_, 0, v_e_3278_);
return v___x_3288_;
}
else
{
switch(lean_obj_tag(v_e_3278_))
{
case 1:
{
lean_object* v_fvarId_3289_; lean_object* v___x_3290_; 
v_fvarId_3289_ = lean_ctor_get(v_e_3278_, 0);
lean_inc(v___y_3285_);
lean_inc_ref(v___y_3284_);
lean_inc(v___y_3283_);
lean_inc_ref(v___y_3282_);
lean_inc(v___y_3281_);
lean_inc(v___y_3280_);
lean_inc_ref(v___y_3279_);
lean_inc(v_fvarId_3289_);
v___x_3290_ = lean_apply_9(v_f_3277_, v_fvarId_3289_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_, lean_box(0));
if (lean_obj_tag(v___x_3290_) == 0)
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3303_; 
v_a_3291_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3303_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3303_ == 0)
{
v___x_3293_ = v___x_3290_;
v_isShared_3294_ = v_isSharedCheck_3303_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3290_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3303_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
uint8_t v___x_3295_; 
v___x_3295_ = l_Lean_instBEqFVarId_beq(v_fvarId_3289_, v_a_3291_);
if (v___x_3295_ == 0)
{
lean_object* v___x_3296_; lean_object* v___x_3298_; 
lean_dec_ref_known(v_e_3278_, 1);
v___x_3296_ = l_Lean_Expr_fvar___override(v_a_3291_);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v___x_3296_);
v___x_3298_ = v___x_3293_;
goto v_reusejp_3297_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v___x_3296_);
v___x_3298_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3297_;
}
v_reusejp_3297_:
{
return v___x_3298_;
}
}
else
{
lean_object* v___x_3301_; 
lean_dec(v_a_3291_);
if (v_isShared_3294_ == 0)
{
lean_ctor_set(v___x_3293_, 0, v_e_3278_);
v___x_3301_ = v___x_3293_;
goto v_reusejp_3300_;
}
else
{
lean_object* v_reuseFailAlloc_3302_; 
v_reuseFailAlloc_3302_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3302_, 0, v_e_3278_);
v___x_3301_ = v_reuseFailAlloc_3302_;
goto v_reusejp_3300_;
}
v_reusejp_3300_:
{
return v___x_3301_;
}
}
}
}
else
{
lean_object* v_a_3304_; lean_object* v___x_3306_; uint8_t v_isShared_3307_; uint8_t v_isSharedCheck_3311_; 
lean_dec_ref_known(v_e_3278_, 1);
v_a_3304_ = lean_ctor_get(v___x_3290_, 0);
v_isSharedCheck_3311_ = !lean_is_exclusive(v___x_3290_);
if (v_isSharedCheck_3311_ == 0)
{
v___x_3306_ = v___x_3290_;
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
else
{
lean_inc(v_a_3304_);
lean_dec(v___x_3290_);
v___x_3306_ = lean_box(0);
v_isShared_3307_ = v_isSharedCheck_3311_;
goto v_resetjp_3305_;
}
v_resetjp_3305_:
{
lean_object* v___x_3309_; 
if (v_isShared_3307_ == 0)
{
v___x_3309_ = v___x_3306_;
goto v_reusejp_3308_;
}
else
{
lean_object* v_reuseFailAlloc_3310_; 
v_reuseFailAlloc_3310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3310_, 0, v_a_3304_);
v___x_3309_ = v_reuseFailAlloc_3310_;
goto v_reusejp_3308_;
}
v_reusejp_3308_:
{
return v___x_3309_;
}
}
}
}
case 2:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; 
lean_dec_ref_known(v_e_3278_, 1);
lean_dec_ref(v_f_3277_);
v___x_3312_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1, &l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1_once, _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1);
v___x_3313_ = l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6(v___x_3312_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
return v___x_3313_;
}
case 5:
{
lean_object* v_fn_3314_; lean_object* v_arg_3315_; lean_object* v___x_3316_; 
v_fn_3314_ = lean_ctor_get(v_e_3278_, 0);
v_arg_3315_ = lean_ctor_get(v_e_3278_, 1);
lean_inc_ref(v_fn_3314_);
lean_inc_ref(v_f_3277_);
v___x_3316_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3277_, v_fn_3314_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v_a_3317_; lean_object* v___x_3318_; 
v_a_3317_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3317_);
lean_dec_ref_known(v___x_3316_, 1);
lean_inc_ref(v_arg_3315_);
v___x_3318_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3277_, v_arg_3315_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3318_) == 0)
{
lean_object* v_a_3319_; lean_object* v___x_3321_; uint8_t v_isShared_3322_; uint8_t v_isSharedCheck_3340_; 
v_a_3319_ = lean_ctor_get(v___x_3318_, 0);
v_isSharedCheck_3340_ = !lean_is_exclusive(v___x_3318_);
if (v_isSharedCheck_3340_ == 0)
{
v___x_3321_ = v___x_3318_;
v_isShared_3322_ = v_isSharedCheck_3340_;
goto v_resetjp_3320_;
}
else
{
lean_inc(v_a_3319_);
lean_dec(v___x_3318_);
v___x_3321_ = lean_box(0);
v_isShared_3322_ = v_isSharedCheck_3340_;
goto v_resetjp_3320_;
}
v_resetjp_3320_:
{
size_t v___x_3323_; size_t v___x_3324_; uint8_t v___x_3325_; 
v___x_3323_ = lean_ptr_addr(v_fn_3314_);
v___x_3324_ = lean_ptr_addr(v_a_3317_);
v___x_3325_ = lean_usize_dec_eq(v___x_3323_, v___x_3324_);
if (v___x_3325_ == 0)
{
lean_object* v___x_3326_; lean_object* v___x_3328_; 
lean_dec_ref_known(v_e_3278_, 2);
v___x_3326_ = l_Lean_Expr_app___override(v_a_3317_, v_a_3319_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 0, v___x_3326_);
v___x_3328_ = v___x_3321_;
goto v_reusejp_3327_;
}
else
{
lean_object* v_reuseFailAlloc_3329_; 
v_reuseFailAlloc_3329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3329_, 0, v___x_3326_);
v___x_3328_ = v_reuseFailAlloc_3329_;
goto v_reusejp_3327_;
}
v_reusejp_3327_:
{
return v___x_3328_;
}
}
else
{
size_t v___x_3330_; size_t v___x_3331_; uint8_t v___x_3332_; 
v___x_3330_ = lean_ptr_addr(v_arg_3315_);
v___x_3331_ = lean_ptr_addr(v_a_3319_);
v___x_3332_ = lean_usize_dec_eq(v___x_3330_, v___x_3331_);
if (v___x_3332_ == 0)
{
lean_object* v___x_3333_; lean_object* v___x_3335_; 
lean_dec_ref_known(v_e_3278_, 2);
v___x_3333_ = l_Lean_Expr_app___override(v_a_3317_, v_a_3319_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 0, v___x_3333_);
v___x_3335_ = v___x_3321_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v___x_3333_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
else
{
lean_object* v___x_3338_; 
lean_dec(v_a_3319_);
lean_dec(v_a_3317_);
if (v_isShared_3322_ == 0)
{
lean_ctor_set(v___x_3321_, 0, v_e_3278_);
v___x_3338_ = v___x_3321_;
goto v_reusejp_3337_;
}
else
{
lean_object* v_reuseFailAlloc_3339_; 
v_reuseFailAlloc_3339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3339_, 0, v_e_3278_);
v___x_3338_ = v_reuseFailAlloc_3339_;
goto v_reusejp_3337_;
}
v_reusejp_3337_:
{
return v___x_3338_;
}
}
}
}
}
else
{
lean_dec(v_a_3317_);
lean_dec_ref_known(v_e_3278_, 2);
return v___x_3318_;
}
}
else
{
lean_dec_ref_known(v_e_3278_, 2);
lean_dec_ref(v_f_3277_);
return v___x_3316_;
}
}
case 6:
{
lean_object* v_binderName_3341_; lean_object* v_binderType_3342_; lean_object* v_body_3343_; uint8_t v_binderInfo_3344_; lean_object* v___x_3345_; 
v_binderName_3341_ = lean_ctor_get(v_e_3278_, 0);
v_binderType_3342_ = lean_ctor_get(v_e_3278_, 1);
v_body_3343_ = lean_ctor_get(v_e_3278_, 2);
v_binderInfo_3344_ = lean_ctor_get_uint8(v_e_3278_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_3342_);
lean_inc_ref(v_f_3277_);
v___x_3345_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3277_, v_binderType_3342_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3345_) == 0)
{
lean_object* v_a_3346_; lean_object* v___x_3347_; 
v_a_3346_ = lean_ctor_get(v___x_3345_, 0);
lean_inc(v_a_3346_);
lean_dec_ref_known(v___x_3345_, 1);
lean_inc_ref(v_body_3343_);
v___x_3347_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3277_, v_body_3343_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3347_) == 0)
{
lean_object* v_a_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3374_; 
v_a_3348_ = lean_ctor_get(v___x_3347_, 0);
v_isSharedCheck_3374_ = !lean_is_exclusive(v___x_3347_);
if (v_isSharedCheck_3374_ == 0)
{
v___x_3350_ = v___x_3347_;
v_isShared_3351_ = v_isSharedCheck_3374_;
goto v_resetjp_3349_;
}
else
{
lean_inc(v_a_3348_);
lean_dec(v___x_3347_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3374_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
size_t v___x_3352_; size_t v___x_3353_; uint8_t v___x_3354_; 
v___x_3352_ = lean_ptr_addr(v_binderType_3342_);
v___x_3353_ = lean_ptr_addr(v_a_3346_);
v___x_3354_ = lean_usize_dec_eq(v___x_3352_, v___x_3353_);
if (v___x_3354_ == 0)
{
lean_object* v___x_3355_; lean_object* v___x_3357_; 
lean_inc(v_binderName_3341_);
lean_dec_ref_known(v_e_3278_, 3);
v___x_3355_ = l_Lean_Expr_lam___override(v_binderName_3341_, v_a_3346_, v_a_3348_, v_binderInfo_3344_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3355_);
v___x_3357_ = v___x_3350_;
goto v_reusejp_3356_;
}
else
{
lean_object* v_reuseFailAlloc_3358_; 
v_reuseFailAlloc_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3358_, 0, v___x_3355_);
v___x_3357_ = v_reuseFailAlloc_3358_;
goto v_reusejp_3356_;
}
v_reusejp_3356_:
{
return v___x_3357_;
}
}
else
{
size_t v___x_3359_; size_t v___x_3360_; uint8_t v___x_3361_; 
v___x_3359_ = lean_ptr_addr(v_body_3343_);
v___x_3360_ = lean_ptr_addr(v_a_3348_);
v___x_3361_ = lean_usize_dec_eq(v___x_3359_, v___x_3360_);
if (v___x_3361_ == 0)
{
lean_object* v___x_3362_; lean_object* v___x_3364_; 
lean_inc(v_binderName_3341_);
lean_dec_ref_known(v_e_3278_, 3);
v___x_3362_ = l_Lean_Expr_lam___override(v_binderName_3341_, v_a_3346_, v_a_3348_, v_binderInfo_3344_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3362_);
v___x_3364_ = v___x_3350_;
goto v_reusejp_3363_;
}
else
{
lean_object* v_reuseFailAlloc_3365_; 
v_reuseFailAlloc_3365_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3365_, 0, v___x_3362_);
v___x_3364_ = v_reuseFailAlloc_3365_;
goto v_reusejp_3363_;
}
v_reusejp_3363_:
{
return v___x_3364_;
}
}
else
{
uint8_t v___x_3366_; 
v___x_3366_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_3344_, v_binderInfo_3344_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3369_; 
lean_inc(v_binderName_3341_);
lean_dec_ref_known(v_e_3278_, 3);
v___x_3367_ = l_Lean_Expr_lam___override(v_binderName_3341_, v_a_3346_, v_a_3348_, v_binderInfo_3344_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3367_);
v___x_3369_ = v___x_3350_;
goto v_reusejp_3368_;
}
else
{
lean_object* v_reuseFailAlloc_3370_; 
v_reuseFailAlloc_3370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3370_, 0, v___x_3367_);
v___x_3369_ = v_reuseFailAlloc_3370_;
goto v_reusejp_3368_;
}
v_reusejp_3368_:
{
return v___x_3369_;
}
}
else
{
lean_object* v___x_3372_; 
lean_dec(v_a_3348_);
lean_dec(v_a_3346_);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v_e_3278_);
v___x_3372_ = v___x_3350_;
goto v_reusejp_3371_;
}
else
{
lean_object* v_reuseFailAlloc_3373_; 
v_reuseFailAlloc_3373_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3373_, 0, v_e_3278_);
v___x_3372_ = v_reuseFailAlloc_3373_;
goto v_reusejp_3371_;
}
v_reusejp_3371_:
{
return v___x_3372_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3346_);
lean_dec_ref_known(v_e_3278_, 3);
return v___x_3347_;
}
}
else
{
lean_dec_ref_known(v_e_3278_, 3);
lean_dec_ref(v_f_3277_);
return v___x_3345_;
}
}
case 7:
{
lean_object* v_binderName_3375_; lean_object* v_binderType_3376_; lean_object* v_body_3377_; uint8_t v_binderInfo_3378_; lean_object* v___x_3379_; 
v_binderName_3375_ = lean_ctor_get(v_e_3278_, 0);
v_binderType_3376_ = lean_ctor_get(v_e_3278_, 1);
v_body_3377_ = lean_ctor_get(v_e_3278_, 2);
v_binderInfo_3378_ = lean_ctor_get_uint8(v_e_3278_, sizeof(void*)*3 + 8);
lean_inc_ref(v_binderType_3376_);
lean_inc_ref(v_f_3277_);
v___x_3379_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3277_, v_binderType_3376_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_object* v_a_3380_; lean_object* v___x_3381_; 
v_a_3380_ = lean_ctor_get(v___x_3379_, 0);
lean_inc(v_a_3380_);
lean_dec_ref_known(v___x_3379_, 1);
lean_inc_ref(v_body_3377_);
v___x_3381_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3277_, v_body_3377_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
if (lean_obj_tag(v___x_3381_) == 0)
{
lean_object* v_a_3382_; lean_object* v___x_3384_; uint8_t v_isShared_3385_; uint8_t v_isSharedCheck_3408_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
v_isSharedCheck_3408_ = !lean_is_exclusive(v___x_3381_);
if (v_isSharedCheck_3408_ == 0)
{
v___x_3384_ = v___x_3381_;
v_isShared_3385_ = v_isSharedCheck_3408_;
goto v_resetjp_3383_;
}
else
{
lean_inc(v_a_3382_);
lean_dec(v___x_3381_);
v___x_3384_ = lean_box(0);
v_isShared_3385_ = v_isSharedCheck_3408_;
goto v_resetjp_3383_;
}
v_resetjp_3383_:
{
size_t v___x_3386_; size_t v___x_3387_; uint8_t v___x_3388_; 
v___x_3386_ = lean_ptr_addr(v_binderType_3376_);
v___x_3387_ = lean_ptr_addr(v_a_3380_);
v___x_3388_ = lean_usize_dec_eq(v___x_3386_, v___x_3387_);
if (v___x_3388_ == 0)
{
lean_object* v___x_3389_; lean_object* v___x_3391_; 
lean_inc(v_binderName_3375_);
lean_dec_ref_known(v_e_3278_, 3);
v___x_3389_ = l_Lean_Expr_forallE___override(v_binderName_3375_, v_a_3380_, v_a_3382_, v_binderInfo_3378_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3389_);
v___x_3391_ = v___x_3384_;
goto v_reusejp_3390_;
}
else
{
lean_object* v_reuseFailAlloc_3392_; 
v_reuseFailAlloc_3392_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3392_, 0, v___x_3389_);
v___x_3391_ = v_reuseFailAlloc_3392_;
goto v_reusejp_3390_;
}
v_reusejp_3390_:
{
return v___x_3391_;
}
}
else
{
size_t v___x_3393_; size_t v___x_3394_; uint8_t v___x_3395_; 
v___x_3393_ = lean_ptr_addr(v_body_3377_);
v___x_3394_ = lean_ptr_addr(v_a_3382_);
v___x_3395_ = lean_usize_dec_eq(v___x_3393_, v___x_3394_);
if (v___x_3395_ == 0)
{
lean_object* v___x_3396_; lean_object* v___x_3398_; 
lean_inc(v_binderName_3375_);
lean_dec_ref_known(v_e_3278_, 3);
v___x_3396_ = l_Lean_Expr_forallE___override(v_binderName_3375_, v_a_3380_, v_a_3382_, v_binderInfo_3378_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3396_);
v___x_3398_ = v___x_3384_;
goto v_reusejp_3397_;
}
else
{
lean_object* v_reuseFailAlloc_3399_; 
v_reuseFailAlloc_3399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3399_, 0, v___x_3396_);
v___x_3398_ = v_reuseFailAlloc_3399_;
goto v_reusejp_3397_;
}
v_reusejp_3397_:
{
return v___x_3398_;
}
}
else
{
uint8_t v___x_3400_; 
v___x_3400_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_3378_, v_binderInfo_3378_);
if (v___x_3400_ == 0)
{
lean_object* v___x_3401_; lean_object* v___x_3403_; 
lean_inc(v_binderName_3375_);
lean_dec_ref_known(v_e_3278_, 3);
v___x_3401_ = l_Lean_Expr_forallE___override(v_binderName_3375_, v_a_3380_, v_a_3382_, v_binderInfo_3378_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v___x_3401_);
v___x_3403_ = v___x_3384_;
goto v_reusejp_3402_;
}
else
{
lean_object* v_reuseFailAlloc_3404_; 
v_reuseFailAlloc_3404_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3404_, 0, v___x_3401_);
v___x_3403_ = v_reuseFailAlloc_3404_;
goto v_reusejp_3402_;
}
v_reusejp_3402_:
{
return v___x_3403_;
}
}
else
{
lean_object* v___x_3406_; 
lean_dec(v_a_3382_);
lean_dec(v_a_3380_);
if (v_isShared_3385_ == 0)
{
lean_ctor_set(v___x_3384_, 0, v_e_3278_);
v___x_3406_ = v___x_3384_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3407_; 
v_reuseFailAlloc_3407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3407_, 0, v_e_3278_);
v___x_3406_ = v_reuseFailAlloc_3407_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
return v___x_3406_;
}
}
}
}
}
}
else
{
lean_dec(v_a_3380_);
lean_dec_ref_known(v_e_3278_, 3);
return v___x_3381_;
}
}
else
{
lean_dec_ref_known(v_e_3278_, 3);
lean_dec_ref(v_f_3277_);
return v___x_3379_;
}
}
case 8:
{
lean_object* v___x_3409_; lean_object* v___x_3410_; 
lean_dec_ref_known(v_e_3278_, 4);
lean_dec_ref(v_f_3277_);
v___x_3409_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1, &l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1_once, _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1);
v___x_3410_ = l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6(v___x_3409_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
return v___x_3410_;
}
case 11:
{
lean_object* v___x_3411_; lean_object* v___x_3412_; 
lean_dec_ref_known(v_e_3278_, 3);
lean_dec_ref(v_f_3277_);
v___x_3411_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1, &l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1_once, _init_l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___closed__1);
v___x_3412_ = l_panic___at___00Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4_spec__6(v___x_3411_, v___y_3279_, v___y_3280_, v___y_3281_, v___y_3282_, v___y_3283_, v___y_3284_, v___y_3285_);
return v___x_3412_;
}
default: 
{
lean_object* v___x_3413_; 
lean_dec_ref(v_f_3277_);
v___x_3413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3413_, 0, v_e_3278_);
return v___x_3413_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4___boxed(lean_object* v_f_3414_, lean_object* v_e_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3414_, v_e_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec_ref(v___y_3421_);
lean_dec(v___y_3420_);
lean_dec_ref(v___y_3419_);
lean_dec(v___y_3418_);
lean_dec(v___y_3417_);
lean_dec_ref(v___y_3416_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3(uint8_t v_pu_3425_, lean_object* v_f_3426_, lean_object* v_arg_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_){
_start:
{
switch(lean_obj_tag(v_arg_3427_))
{
case 0:
{
lean_object* v___x_3436_; lean_object* v___x_3437_; 
lean_dec_ref(v_f_3426_);
v___x_3436_ = lean_box(0);
v___x_3437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3437_, 0, v___x_3436_);
return v___x_3437_;
}
case 1:
{
lean_object* v_fvarId_3438_; lean_object* v___x_3439_; 
v_fvarId_3438_ = lean_ctor_get(v_arg_3427_, 0);
lean_inc(v___y_3434_);
lean_inc_ref(v___y_3433_);
lean_inc(v___y_3432_);
lean_inc_ref(v___y_3431_);
lean_inc(v___y_3430_);
lean_inc(v___y_3429_);
lean_inc_ref(v___y_3428_);
lean_inc(v_fvarId_3438_);
v___x_3439_ = lean_apply_9(v_f_3426_, v_fvarId_3438_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_, lean_box(0));
if (lean_obj_tag(v___x_3439_) == 0)
{
lean_object* v_a_3440_; lean_object* v___x_3442_; uint8_t v_isShared_3443_; uint8_t v_isSharedCheck_3448_; 
v_a_3440_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3448_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3448_ == 0)
{
v___x_3442_ = v___x_3439_;
v_isShared_3443_ = v_isSharedCheck_3448_;
goto v_resetjp_3441_;
}
else
{
lean_inc(v_a_3440_);
lean_dec(v___x_3439_);
v___x_3442_ = lean_box(0);
v_isShared_3443_ = v_isSharedCheck_3448_;
goto v_resetjp_3441_;
}
v_resetjp_3441_:
{
lean_object* v___x_3444_; lean_object* v___x_3446_; 
v___x_3444_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateFVarImp___redArg(v_arg_3427_, v_a_3440_);
if (v_isShared_3443_ == 0)
{
lean_ctor_set(v___x_3442_, 0, v___x_3444_);
v___x_3446_ = v___x_3442_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3447_; 
v_reuseFailAlloc_3447_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3447_, 0, v___x_3444_);
v___x_3446_ = v_reuseFailAlloc_3447_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
return v___x_3446_;
}
}
}
else
{
lean_object* v_a_3449_; lean_object* v___x_3451_; uint8_t v_isShared_3452_; uint8_t v_isSharedCheck_3456_; 
lean_dec_ref_known(v_arg_3427_, 1);
v_a_3449_ = lean_ctor_get(v___x_3439_, 0);
v_isSharedCheck_3456_ = !lean_is_exclusive(v___x_3439_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3451_ = v___x_3439_;
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
else
{
lean_inc(v_a_3449_);
lean_dec(v___x_3439_);
v___x_3451_ = lean_box(0);
v_isShared_3452_ = v_isSharedCheck_3456_;
goto v_resetjp_3450_;
}
v_resetjp_3450_:
{
lean_object* v___x_3454_; 
if (v_isShared_3452_ == 0)
{
v___x_3454_ = v___x_3451_;
goto v_reusejp_3453_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v_a_3449_);
v___x_3454_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3453_;
}
v_reusejp_3453_:
{
return v___x_3454_;
}
}
}
}
default: 
{
lean_object* v_expr_3457_; lean_object* v___x_3458_; 
v_expr_3457_ = lean_ctor_get(v_arg_3427_, 0);
lean_inc_ref(v_expr_3457_);
v___x_3458_ = l_Lean_Compiler_LCNF_Expr_mapFVarM___at___00Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3_spec__4(v_f_3426_, v_expr_3457_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v_a_3459_; lean_object* v___x_3461_; uint8_t v_isShared_3462_; uint8_t v_isSharedCheck_3467_; 
v_a_3459_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3467_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3467_ == 0)
{
v___x_3461_ = v___x_3458_;
v_isShared_3462_ = v_isSharedCheck_3467_;
goto v_resetjp_3460_;
}
else
{
lean_inc(v_a_3459_);
lean_dec(v___x_3458_);
v___x_3461_ = lean_box(0);
v_isShared_3462_ = v_isSharedCheck_3467_;
goto v_resetjp_3460_;
}
v_resetjp_3460_:
{
lean_object* v___x_3463_; lean_object* v___x_3465_; 
v___x_3463_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_Arg_updateTypeImp(v_pu_3425_, v_arg_3427_, v_a_3459_);
if (v_isShared_3462_ == 0)
{
lean_ctor_set(v___x_3461_, 0, v___x_3463_);
v___x_3465_ = v___x_3461_;
goto v_reusejp_3464_;
}
else
{
lean_object* v_reuseFailAlloc_3466_; 
v_reuseFailAlloc_3466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3466_, 0, v___x_3463_);
v___x_3465_ = v_reuseFailAlloc_3466_;
goto v_reusejp_3464_;
}
v_reusejp_3464_:
{
return v___x_3465_;
}
}
}
else
{
lean_object* v_a_3468_; lean_object* v___x_3470_; uint8_t v_isShared_3471_; uint8_t v_isSharedCheck_3475_; 
lean_dec_ref_known(v_arg_3427_, 1);
v_a_3468_ = lean_ctor_get(v___x_3458_, 0);
v_isSharedCheck_3475_ = !lean_is_exclusive(v___x_3458_);
if (v_isSharedCheck_3475_ == 0)
{
v___x_3470_ = v___x_3458_;
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
else
{
lean_inc(v_a_3468_);
lean_dec(v___x_3458_);
v___x_3470_ = lean_box(0);
v_isShared_3471_ = v_isSharedCheck_3475_;
goto v_resetjp_3469_;
}
v_resetjp_3469_:
{
lean_object* v___x_3473_; 
if (v_isShared_3471_ == 0)
{
v___x_3473_ = v___x_3470_;
goto v_reusejp_3472_;
}
else
{
lean_object* v_reuseFailAlloc_3474_; 
v_reuseFailAlloc_3474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3474_, 0, v_a_3468_);
v___x_3473_ = v_reuseFailAlloc_3474_;
goto v_reusejp_3472_;
}
v_reusejp_3472_:
{
return v___x_3473_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3___boxed(lean_object* v_pu_3476_, lean_object* v_f_3477_, lean_object* v_arg_3478_, lean_object* v___y_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_, lean_object* v___y_3485_, lean_object* v___y_3486_){
_start:
{
uint8_t v_pu_boxed_3487_; lean_object* v_res_3488_; 
v_pu_boxed_3487_ = lean_unbox(v_pu_3476_);
v_res_3488_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3(v_pu_boxed_3487_, v_f_3477_, v_arg_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_);
lean_dec(v___y_3485_);
lean_dec_ref(v___y_3484_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec(v___y_3480_);
lean_dec_ref(v___y_3479_);
return v_res_3488_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4(size_t v_sz_3490_, size_t v_i_3491_, lean_object* v_bs_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_){
_start:
{
uint8_t v___x_3501_; 
v___x_3501_ = lean_usize_dec_lt(v_i_3491_, v_sz_3490_);
if (v___x_3501_ == 0)
{
lean_object* v___x_3502_; 
v___x_3502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3502_, 0, v_bs_3492_);
return v___x_3502_;
}
else
{
uint8_t v___x_3503_; lean_object* v___x_3504_; lean_object* v_v_3505_; lean_object* v___x_3506_; lean_object* v_bs_x27_3507_; lean_object* v___x_3508_; 
v___x_3503_ = 0;
v___x_3504_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4___closed__0));
v_v_3505_ = lean_array_uget(v_bs_3492_, v_i_3491_);
v___x_3506_ = lean_unsigned_to_nat(0u);
v_bs_x27_3507_ = lean_array_uset(v_bs_3492_, v_i_3491_, v___x_3506_);
v___x_3508_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3(v___x_3503_, v___x_3504_, v_v_3505_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_);
if (lean_obj_tag(v___x_3508_) == 0)
{
lean_object* v_a_3509_; size_t v___x_3510_; size_t v___x_3511_; lean_object* v___x_3512_; 
v_a_3509_ = lean_ctor_get(v___x_3508_, 0);
lean_inc(v_a_3509_);
lean_dec_ref_known(v___x_3508_, 1);
v___x_3510_ = ((size_t)1ULL);
v___x_3511_ = lean_usize_add(v_i_3491_, v___x_3510_);
v___x_3512_ = lean_array_uset(v_bs_x27_3507_, v_i_3491_, v_a_3509_);
v_i_3491_ = v___x_3511_;
v_bs_3492_ = v___x_3512_;
goto _start;
}
else
{
lean_object* v_a_3514_; lean_object* v___x_3516_; uint8_t v_isShared_3517_; uint8_t v_isSharedCheck_3521_; 
lean_dec_ref(v_bs_x27_3507_);
v_a_3514_ = lean_ctor_get(v___x_3508_, 0);
v_isSharedCheck_3521_ = !lean_is_exclusive(v___x_3508_);
if (v_isSharedCheck_3521_ == 0)
{
v___x_3516_ = v___x_3508_;
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
else
{
lean_inc(v_a_3514_);
lean_dec(v___x_3508_);
v___x_3516_ = lean_box(0);
v_isShared_3517_ = v_isSharedCheck_3521_;
goto v_resetjp_3515_;
}
v_resetjp_3515_:
{
lean_object* v___x_3519_; 
if (v_isShared_3517_ == 0)
{
v___x_3519_ = v___x_3516_;
goto v_reusejp_3518_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v_a_3514_);
v___x_3519_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3518_;
}
v_reusejp_3518_:
{
return v___x_3519_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4___boxed(lean_object* v_sz_3522_, lean_object* v_i_3523_, lean_object* v_bs_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_, lean_object* v___y_3529_, lean_object* v___y_3530_, lean_object* v___y_3531_, lean_object* v___y_3532_){
_start:
{
size_t v_sz_boxed_3533_; size_t v_i_boxed_3534_; lean_object* v_res_3535_; 
v_sz_boxed_3533_ = lean_unbox_usize(v_sz_3522_);
lean_dec(v_sz_3522_);
v_i_boxed_3534_ = lean_unbox_usize(v_i_3523_);
lean_dec(v_i_3523_);
v_res_3535_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4(v_sz_boxed_3533_, v_i_boxed_3534_, v_bs_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_);
lean_dec(v___y_3531_);
lean_dec_ref(v___y_3530_);
lean_dec(v___y_3529_);
lean_dec_ref(v___y_3528_);
lean_dec(v___y_3527_);
lean_dec(v___y_3526_);
lean_dec_ref(v___y_3525_);
return v_res_3535_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__7(size_t v_sz_3536_, size_t v_i_3537_, lean_object* v_bs_3538_){
_start:
{
uint8_t v___x_3539_; 
v___x_3539_ = lean_usize_dec_lt(v_i_3537_, v_sz_3536_);
if (v___x_3539_ == 0)
{
return v_bs_3538_;
}
else
{
lean_object* v_v_3540_; lean_object* v___x_3541_; lean_object* v_bs_x27_3542_; lean_object* v___x_3543_; size_t v___x_3544_; size_t v___x_3545_; lean_object* v___x_3546_; 
v_v_3540_ = lean_array_uget(v_bs_3538_, v_i_3537_);
v___x_3541_ = lean_unsigned_to_nat(0u);
v_bs_x27_3542_ = lean_array_uset(v_bs_3538_, v_i_3537_, v___x_3541_);
v___x_3543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3543_, 0, v_v_3540_);
v___x_3544_ = ((size_t)1ULL);
v___x_3545_ = lean_usize_add(v_i_3537_, v___x_3544_);
v___x_3546_ = lean_array_uset(v_bs_x27_3542_, v_i_3537_, v___x_3543_);
v_i_3537_ = v___x_3545_;
v_bs_3538_ = v___x_3546_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__7___boxed(lean_object* v_sz_3548_, lean_object* v_i_3549_, lean_object* v_bs_3550_){
_start:
{
size_t v_sz_boxed_3551_; size_t v_i_boxed_3552_; lean_object* v_res_3553_; 
v_sz_boxed_3551_ = lean_unbox_usize(v_sz_3548_);
lean_dec(v_sz_3548_);
v_i_boxed_3552_ = lean_unbox_usize(v_i_3549_);
lean_dec(v_i_3549_);
v_res_3553_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__7(v_sz_boxed_3551_, v_i_boxed_3552_, v_bs_3550_);
return v_res_3553_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__1(size_t v_sz_3554_, size_t v_i_3555_, lean_object* v_bs_3556_){
_start:
{
uint8_t v___x_3557_; 
v___x_3557_ = lean_usize_dec_lt(v_i_3555_, v_sz_3554_);
if (v___x_3557_ == 0)
{
return v_bs_3556_;
}
else
{
lean_object* v_v_3558_; lean_object* v_snd_3559_; lean_object* v___x_3560_; lean_object* v_bs_x27_3561_; size_t v___x_3562_; size_t v___x_3563_; lean_object* v___x_3564_; 
v_v_3558_ = lean_array_uget_borrowed(v_bs_3556_, v_i_3555_);
v_snd_3559_ = lean_ctor_get(v_v_3558_, 1);
lean_inc(v_snd_3559_);
v___x_3560_ = lean_unsigned_to_nat(0u);
v_bs_x27_3561_ = lean_array_uset(v_bs_3556_, v_i_3555_, v___x_3560_);
v___x_3562_ = ((size_t)1ULL);
v___x_3563_ = lean_usize_add(v_i_3555_, v___x_3562_);
v___x_3564_ = lean_array_uset(v_bs_x27_3561_, v_i_3555_, v_snd_3559_);
v_i_3555_ = v___x_3563_;
v_bs_3556_ = v___x_3564_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__1___boxed(lean_object* v_sz_3566_, lean_object* v_i_3567_, lean_object* v_bs_3568_){
_start:
{
size_t v_sz_boxed_3569_; size_t v_i_boxed_3570_; lean_object* v_res_3571_; 
v_sz_boxed_3569_ = lean_unbox_usize(v_sz_3566_);
lean_dec(v_sz_3566_);
v_i_boxed_3570_ = lean_unbox_usize(v_i_3567_);
lean_dec(v_i_3567_);
v_res_3571_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__1(v_sz_boxed_3569_, v_i_boxed_3570_, v_bs_3568_);
return v_res_3571_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__2(lean_object* v_as_3572_, size_t v_i_3573_, size_t v_stop_3574_, lean_object* v_b_3575_){
_start:
{
uint8_t v___x_3576_; 
v___x_3576_ = lean_usize_dec_eq(v_i_3573_, v_stop_3574_);
if (v___x_3576_ == 0)
{
size_t v___x_3577_; size_t v___x_3578_; lean_object* v___x_3579_; lean_object* v_binderName_3580_; lean_object* v_type_3581_; uint8_t v___x_3582_; lean_object* v___x_3583_; 
v___x_3577_ = ((size_t)1ULL);
v___x_3578_ = lean_usize_sub(v_i_3573_, v___x_3577_);
v___x_3579_ = lean_array_uget_borrowed(v_as_3572_, v___x_3578_);
v_binderName_3580_ = lean_ctor_get(v___x_3579_, 1);
v_type_3581_ = lean_ctor_get(v___x_3579_, 2);
v___x_3582_ = 0;
lean_inc_ref(v_type_3581_);
lean_inc(v_binderName_3580_);
v___x_3583_ = l_Lean_Expr_forallE___override(v_binderName_3580_, v_type_3581_, v_b_3575_, v___x_3582_);
v_i_3573_ = v___x_3578_;
v_b_3575_ = v___x_3583_;
goto _start;
}
else
{
return v_b_3575_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__2___boxed(lean_object* v_as_3585_, lean_object* v_i_3586_, lean_object* v_stop_3587_, lean_object* v_b_3588_){
_start:
{
size_t v_i_boxed_3589_; size_t v_stop_boxed_3590_; lean_object* v_res_3591_; 
v_i_boxed_3589_ = lean_unbox_usize(v_i_3586_);
lean_dec(v_i_3586_);
v_stop_boxed_3590_ = lean_unbox_usize(v_stop_3587_);
lean_dec(v_stop_3587_);
v_res_3591_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__2(v_as_3585_, v_i_boxed_3589_, v_stop_boxed_3590_, v_b_3588_);
lean_dec_ref(v_as_3585_);
return v_res_3591_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(uint8_t v_pu_3592_, lean_object* v_f_3593_, size_t v_sz_3594_, size_t v_i_3595_, lean_object* v_bs_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_, lean_object* v___y_3601_, lean_object* v___y_3602_, lean_object* v___y_3603_){
_start:
{
uint8_t v___x_3605_; 
v___x_3605_ = lean_usize_dec_lt(v_i_3595_, v_sz_3594_);
if (v___x_3605_ == 0)
{
lean_object* v___x_3606_; 
lean_dec_ref(v_f_3593_);
v___x_3606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3606_, 0, v_bs_3596_);
return v___x_3606_;
}
else
{
lean_object* v_v_3607_; lean_object* v___x_3608_; lean_object* v_bs_x27_3609_; lean_object* v___x_3610_; 
v_v_3607_ = lean_array_uget(v_bs_3596_, v_i_3595_);
v___x_3608_ = lean_unsigned_to_nat(0u);
v_bs_x27_3609_ = lean_array_uset(v_bs_3596_, v_i_3595_, v___x_3608_);
lean_inc_ref(v_f_3593_);
v___x_3610_ = l_Lean_Compiler_LCNF_Arg_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__3(v_pu_3592_, v_f_3593_, v_v_3607_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_, v___y_3601_, v___y_3602_, v___y_3603_);
if (lean_obj_tag(v___x_3610_) == 0)
{
lean_object* v_a_3611_; size_t v___x_3612_; size_t v___x_3613_; lean_object* v___x_3614_; 
v_a_3611_ = lean_ctor_get(v___x_3610_, 0);
lean_inc(v_a_3611_);
lean_dec_ref_known(v___x_3610_, 1);
v___x_3612_ = ((size_t)1ULL);
v___x_3613_ = lean_usize_add(v_i_3595_, v___x_3612_);
v___x_3614_ = lean_array_uset(v_bs_x27_3609_, v_i_3595_, v_a_3611_);
v_i_3595_ = v___x_3613_;
v_bs_3596_ = v___x_3614_;
goto _start;
}
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
lean_dec_ref(v_bs_x27_3609_);
lean_dec_ref(v_f_3593_);
v_a_3616_ = lean_ctor_get(v___x_3610_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3610_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3618_ = v___x_3610_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3610_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0___boxed(lean_object* v_pu_3624_, lean_object* v_f_3625_, lean_object* v_sz_3626_, lean_object* v_i_3627_, lean_object* v_bs_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_){
_start:
{
uint8_t v_pu_boxed_3637_; size_t v_sz_boxed_3638_; size_t v_i_boxed_3639_; lean_object* v_res_3640_; 
v_pu_boxed_3637_ = lean_unbox(v_pu_3624_);
v_sz_boxed_3638_ = lean_unbox_usize(v_sz_3626_);
lean_dec(v_sz_3626_);
v_i_boxed_3639_ = lean_unbox_usize(v_i_3627_);
lean_dec(v_i_3627_);
v_res_3640_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(v_pu_boxed_3637_, v_f_3625_, v_sz_boxed_3638_, v_i_boxed_3639_, v_bs_3628_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_);
lean_dec(v___y_3635_);
lean_dec_ref(v___y_3634_);
lean_dec(v___y_3633_);
lean_dec_ref(v___y_3632_);
lean_dec(v___y_3631_);
lean_dec(v___y_3630_);
lean_dec_ref(v___y_3629_);
return v_res_3640_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0(uint8_t v_pu_3641_, lean_object* v_f_3642_, lean_object* v_e_3643_, lean_object* v___y_3644_, lean_object* v___y_3645_, lean_object* v___y_3646_, lean_object* v___y_3647_, lean_object* v___y_3648_, lean_object* v___y_3649_, lean_object* v___y_3650_){
_start:
{
lean_object* v_args_3653_; lean_object* v_fvarId_3675_; 
switch(lean_obj_tag(v_e_3643_))
{
case 2:
{
lean_object* v_struct_3694_; lean_object* v___x_3695_; 
v_struct_3694_ = lean_ctor_get(v_e_3643_, 2);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_struct_3694_);
v___x_3695_ = lean_apply_9(v_f_3642_, v_struct_3694_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3695_) == 0)
{
lean_object* v_a_3696_; lean_object* v___x_3698_; uint8_t v_isShared_3699_; uint8_t v_isSharedCheck_3704_; 
v_a_3696_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3698_ = v___x_3695_;
v_isShared_3699_ = v_isSharedCheck_3704_;
goto v_resetjp_3697_;
}
else
{
lean_inc(v_a_3696_);
lean_dec(v___x_3695_);
v___x_3698_ = lean_box(0);
v_isShared_3699_ = v_isSharedCheck_3704_;
goto v_resetjp_3697_;
}
v_resetjp_3697_:
{
lean_object* v___x_3700_; lean_object* v___x_3702_; 
v___x_3700_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_3641_, v_e_3643_, v_a_3696_);
if (v_isShared_3699_ == 0)
{
lean_ctor_set(v___x_3698_, 0, v___x_3700_);
v___x_3702_ = v___x_3698_;
goto v_reusejp_3701_;
}
else
{
lean_object* v_reuseFailAlloc_3703_; 
v_reuseFailAlloc_3703_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3703_, 0, v___x_3700_);
v___x_3702_ = v_reuseFailAlloc_3703_;
goto v_reusejp_3701_;
}
v_reusejp_3701_:
{
return v___x_3702_;
}
}
}
else
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
lean_dec_ref_known(v_e_3643_, 3);
v_a_3705_ = lean_ctor_get(v___x_3695_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3695_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3695_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3695_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
case 3:
{
lean_object* v_args_3713_; size_t v_sz_3714_; size_t v___x_3715_; lean_object* v___x_3716_; 
v_args_3713_ = lean_ctor_get(v_e_3643_, 2);
v_sz_3714_ = lean_array_size(v_args_3713_);
v___x_3715_ = ((size_t)0ULL);
lean_inc_ref(v_args_3713_);
v___x_3716_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(v_pu_3641_, v_f_3642_, v_sz_3714_, v___x_3715_, v_args_3713_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
if (lean_obj_tag(v___x_3716_) == 0)
{
lean_object* v_a_3717_; lean_object* v___x_3719_; uint8_t v_isShared_3720_; uint8_t v_isSharedCheck_3725_; 
v_a_3717_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3725_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3725_ == 0)
{
v___x_3719_ = v___x_3716_;
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
else
{
lean_inc(v_a_3717_);
lean_dec(v___x_3716_);
v___x_3719_ = lean_box(0);
v_isShared_3720_ = v_isSharedCheck_3725_;
goto v_resetjp_3718_;
}
v_resetjp_3718_:
{
lean_object* v___x_3721_; lean_object* v___x_3723_; 
v___x_3721_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_3643_, v_a_3717_);
if (v_isShared_3720_ == 0)
{
lean_ctor_set(v___x_3719_, 0, v___x_3721_);
v___x_3723_ = v___x_3719_;
goto v_reusejp_3722_;
}
else
{
lean_object* v_reuseFailAlloc_3724_; 
v_reuseFailAlloc_3724_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3724_, 0, v___x_3721_);
v___x_3723_ = v_reuseFailAlloc_3724_;
goto v_reusejp_3722_;
}
v_reusejp_3722_:
{
return v___x_3723_;
}
}
}
else
{
lean_object* v_a_3726_; lean_object* v___x_3728_; uint8_t v_isShared_3729_; uint8_t v_isSharedCheck_3733_; 
lean_dec_ref_known(v_e_3643_, 3);
v_a_3726_ = lean_ctor_get(v___x_3716_, 0);
v_isSharedCheck_3733_ = !lean_is_exclusive(v___x_3716_);
if (v_isSharedCheck_3733_ == 0)
{
v___x_3728_ = v___x_3716_;
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
else
{
lean_inc(v_a_3726_);
lean_dec(v___x_3716_);
v___x_3728_ = lean_box(0);
v_isShared_3729_ = v_isSharedCheck_3733_;
goto v_resetjp_3727_;
}
v_resetjp_3727_:
{
lean_object* v___x_3731_; 
if (v_isShared_3729_ == 0)
{
v___x_3731_ = v___x_3728_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v_a_3726_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
}
}
case 4:
{
lean_object* v_fvarId_3734_; lean_object* v_args_3735_; lean_object* v___x_3736_; 
v_fvarId_3734_ = lean_ctor_get(v_e_3643_, 0);
v_args_3735_ = lean_ctor_get(v_e_3643_, 1);
lean_inc_ref(v_f_3642_);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_fvarId_3734_);
v___x_3736_ = lean_apply_9(v_f_3642_, v_fvarId_3734_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3736_) == 0)
{
lean_object* v_a_3737_; size_t v_sz_3738_; size_t v___x_3739_; lean_object* v___x_3740_; 
v_a_3737_ = lean_ctor_get(v___x_3736_, 0);
lean_inc(v_a_3737_);
lean_dec_ref_known(v___x_3736_, 1);
v_sz_3738_ = lean_array_size(v_args_3735_);
v___x_3739_ = ((size_t)0ULL);
lean_inc_ref(v_args_3735_);
v___x_3740_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(v_pu_3641_, v_f_3642_, v_sz_3738_, v___x_3739_, v_args_3735_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
if (lean_obj_tag(v___x_3740_) == 0)
{
lean_object* v_a_3741_; lean_object* v___x_3743_; uint8_t v_isShared_3744_; uint8_t v_isSharedCheck_3749_; 
v_a_3741_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3749_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3749_ == 0)
{
v___x_3743_ = v___x_3740_;
v_isShared_3744_ = v_isSharedCheck_3749_;
goto v_resetjp_3742_;
}
else
{
lean_inc(v_a_3741_);
lean_dec(v___x_3740_);
v___x_3743_ = lean_box(0);
v_isShared_3744_ = v_isSharedCheck_3749_;
goto v_resetjp_3742_;
}
v_resetjp_3742_:
{
lean_object* v___x_3745_; lean_object* v___x_3747_; 
v___x_3745_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateFVarImp___redArg(v_e_3643_, v_a_3737_, v_a_3741_);
lean_dec_ref_known(v_e_3643_, 2);
if (v_isShared_3744_ == 0)
{
lean_ctor_set(v___x_3743_, 0, v___x_3745_);
v___x_3747_ = v___x_3743_;
goto v_reusejp_3746_;
}
else
{
lean_object* v_reuseFailAlloc_3748_; 
v_reuseFailAlloc_3748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3748_, 0, v___x_3745_);
v___x_3747_ = v_reuseFailAlloc_3748_;
goto v_reusejp_3746_;
}
v_reusejp_3746_:
{
return v___x_3747_;
}
}
}
else
{
lean_object* v_a_3750_; lean_object* v___x_3752_; uint8_t v_isShared_3753_; uint8_t v_isSharedCheck_3757_; 
lean_dec(v_a_3737_);
lean_dec_ref_known(v_e_3643_, 2);
v_a_3750_ = lean_ctor_get(v___x_3740_, 0);
v_isSharedCheck_3757_ = !lean_is_exclusive(v___x_3740_);
if (v_isSharedCheck_3757_ == 0)
{
v___x_3752_ = v___x_3740_;
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
else
{
lean_inc(v_a_3750_);
lean_dec(v___x_3740_);
v___x_3752_ = lean_box(0);
v_isShared_3753_ = v_isSharedCheck_3757_;
goto v_resetjp_3751_;
}
v_resetjp_3751_:
{
lean_object* v___x_3755_; 
if (v_isShared_3753_ == 0)
{
v___x_3755_ = v___x_3752_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3756_; 
v_reuseFailAlloc_3756_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3756_, 0, v_a_3750_);
v___x_3755_ = v_reuseFailAlloc_3756_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
return v___x_3755_;
}
}
}
}
else
{
lean_object* v_a_3758_; lean_object* v___x_3760_; uint8_t v_isShared_3761_; uint8_t v_isSharedCheck_3765_; 
lean_dec_ref_known(v_e_3643_, 2);
lean_dec_ref(v_f_3642_);
v_a_3758_ = lean_ctor_get(v___x_3736_, 0);
v_isSharedCheck_3765_ = !lean_is_exclusive(v___x_3736_);
if (v_isSharedCheck_3765_ == 0)
{
v___x_3760_ = v___x_3736_;
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
else
{
lean_inc(v_a_3758_);
lean_dec(v___x_3736_);
v___x_3760_ = lean_box(0);
v_isShared_3761_ = v_isSharedCheck_3765_;
goto v_resetjp_3759_;
}
v_resetjp_3759_:
{
lean_object* v___x_3763_; 
if (v_isShared_3761_ == 0)
{
v___x_3763_ = v___x_3760_;
goto v_reusejp_3762_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v_a_3758_);
v___x_3763_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3762_;
}
v_reusejp_3762_:
{
return v___x_3763_;
}
}
}
}
case 5:
{
lean_object* v_args_3766_; size_t v_sz_3767_; size_t v___x_3768_; lean_object* v___x_3769_; 
v_args_3766_ = lean_ctor_get(v_e_3643_, 1);
v_sz_3767_ = lean_array_size(v_args_3766_);
v___x_3768_ = ((size_t)0ULL);
lean_inc_ref(v_args_3766_);
v___x_3769_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(v_pu_3641_, v_f_3642_, v_sz_3767_, v___x_3768_, v_args_3766_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
if (lean_obj_tag(v___x_3769_) == 0)
{
lean_object* v_a_3770_; lean_object* v___x_3772_; uint8_t v_isShared_3773_; uint8_t v_isSharedCheck_3778_; 
v_a_3770_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3778_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3778_ == 0)
{
v___x_3772_ = v___x_3769_;
v_isShared_3773_ = v_isSharedCheck_3778_;
goto v_resetjp_3771_;
}
else
{
lean_inc(v_a_3770_);
lean_dec(v___x_3769_);
v___x_3772_ = lean_box(0);
v_isShared_3773_ = v_isSharedCheck_3778_;
goto v_resetjp_3771_;
}
v_resetjp_3771_:
{
lean_object* v___x_3774_; lean_object* v___x_3776_; 
v___x_3774_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_3643_, v_a_3770_);
if (v_isShared_3773_ == 0)
{
lean_ctor_set(v___x_3772_, 0, v___x_3774_);
v___x_3776_ = v___x_3772_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3777_; 
v_reuseFailAlloc_3777_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3777_, 0, v___x_3774_);
v___x_3776_ = v_reuseFailAlloc_3777_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
return v___x_3776_;
}
}
}
else
{
lean_object* v_a_3779_; lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3786_; 
lean_dec_ref_known(v_e_3643_, 2);
v_a_3779_ = lean_ctor_get(v___x_3769_, 0);
v_isSharedCheck_3786_ = !lean_is_exclusive(v___x_3769_);
if (v_isSharedCheck_3786_ == 0)
{
v___x_3781_ = v___x_3769_;
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
else
{
lean_inc(v_a_3779_);
lean_dec(v___x_3769_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3786_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3784_; 
if (v_isShared_3782_ == 0)
{
v___x_3784_ = v___x_3781_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3785_; 
v_reuseFailAlloc_3785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3785_, 0, v_a_3779_);
v___x_3784_ = v_reuseFailAlloc_3785_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
return v___x_3784_;
}
}
}
}
case 6:
{
lean_object* v_var_3787_; 
v_var_3787_ = lean_ctor_get(v_e_3643_, 1);
lean_inc(v_var_3787_);
v_fvarId_3675_ = v_var_3787_;
goto v___jp_3674_;
}
case 7:
{
lean_object* v_var_3788_; 
v_var_3788_ = lean_ctor_get(v_e_3643_, 1);
lean_inc(v_var_3788_);
v_fvarId_3675_ = v_var_3788_;
goto v___jp_3674_;
}
case 8:
{
lean_object* v_var_3789_; lean_object* v___x_3790_; 
v_var_3789_ = lean_ctor_get(v_e_3643_, 2);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_var_3789_);
v___x_3790_ = lean_apply_9(v_f_3642_, v_var_3789_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3790_) == 0)
{
lean_object* v_a_3791_; lean_object* v___x_3793_; uint8_t v_isShared_3794_; uint8_t v_isSharedCheck_3799_; 
v_a_3791_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3799_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3799_ == 0)
{
v___x_3793_ = v___x_3790_;
v_isShared_3794_ = v_isSharedCheck_3799_;
goto v_resetjp_3792_;
}
else
{
lean_inc(v_a_3791_);
lean_dec(v___x_3790_);
v___x_3793_ = lean_box(0);
v_isShared_3794_ = v_isSharedCheck_3799_;
goto v_resetjp_3792_;
}
v_resetjp_3792_:
{
lean_object* v___x_3795_; lean_object* v___x_3797_; 
v___x_3795_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_3641_, v_e_3643_, v_a_3791_);
if (v_isShared_3794_ == 0)
{
lean_ctor_set(v___x_3793_, 0, v___x_3795_);
v___x_3797_ = v___x_3793_;
goto v_reusejp_3796_;
}
else
{
lean_object* v_reuseFailAlloc_3798_; 
v_reuseFailAlloc_3798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3798_, 0, v___x_3795_);
v___x_3797_ = v_reuseFailAlloc_3798_;
goto v_reusejp_3796_;
}
v_reusejp_3796_:
{
return v___x_3797_;
}
}
}
else
{
lean_object* v_a_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3807_; 
lean_dec_ref_known(v_e_3643_, 3);
v_a_3800_ = lean_ctor_get(v___x_3790_, 0);
v_isSharedCheck_3807_ = !lean_is_exclusive(v___x_3790_);
if (v_isSharedCheck_3807_ == 0)
{
v___x_3802_ = v___x_3790_;
v_isShared_3803_ = v_isSharedCheck_3807_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_a_3800_);
lean_dec(v___x_3790_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3807_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
lean_object* v___x_3805_; 
if (v_isShared_3803_ == 0)
{
v___x_3805_ = v___x_3802_;
goto v_reusejp_3804_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v_a_3800_);
v___x_3805_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3804_;
}
v_reusejp_3804_:
{
return v___x_3805_;
}
}
}
}
case 9:
{
lean_object* v_args_3808_; 
v_args_3808_ = lean_ctor_get(v_e_3643_, 1);
lean_inc_ref(v_args_3808_);
v_args_3653_ = v_args_3808_;
goto v___jp_3652_;
}
case 10:
{
lean_object* v_args_3809_; 
v_args_3809_ = lean_ctor_get(v_e_3643_, 1);
lean_inc_ref(v_args_3809_);
v_args_3653_ = v_args_3809_;
goto v___jp_3652_;
}
case 11:
{
lean_object* v_n_3810_; lean_object* v_var_3811_; lean_object* v___x_3812_; 
v_n_3810_ = lean_ctor_get(v_e_3643_, 0);
lean_inc(v_n_3810_);
v_var_3811_ = lean_ctor_get(v_e_3643_, 1);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_var_3811_);
v___x_3812_ = lean_apply_9(v_f_3642_, v_var_3811_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3812_) == 0)
{
lean_object* v_a_3813_; lean_object* v___x_3815_; uint8_t v_isShared_3816_; uint8_t v_isSharedCheck_3821_; 
v_a_3813_ = lean_ctor_get(v___x_3812_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3815_ = v___x_3812_;
v_isShared_3816_ = v_isSharedCheck_3821_;
goto v_resetjp_3814_;
}
else
{
lean_inc(v_a_3813_);
lean_dec(v___x_3812_);
v___x_3815_ = lean_box(0);
v_isShared_3816_ = v_isSharedCheck_3821_;
goto v_resetjp_3814_;
}
v_resetjp_3814_:
{
lean_object* v___x_3817_; lean_object* v___x_3819_; 
v___x_3817_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateResetImp___redArg(v_e_3643_, v_n_3810_, v_a_3813_);
if (v_isShared_3816_ == 0)
{
lean_ctor_set(v___x_3815_, 0, v___x_3817_);
v___x_3819_ = v___x_3815_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v___x_3817_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
else
{
lean_object* v_a_3822_; lean_object* v___x_3824_; uint8_t v_isShared_3825_; uint8_t v_isSharedCheck_3829_; 
lean_dec(v_n_3810_);
lean_dec_ref_known(v_e_3643_, 2);
v_a_3822_ = lean_ctor_get(v___x_3812_, 0);
v_isSharedCheck_3829_ = !lean_is_exclusive(v___x_3812_);
if (v_isSharedCheck_3829_ == 0)
{
v___x_3824_ = v___x_3812_;
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
else
{
lean_inc(v_a_3822_);
lean_dec(v___x_3812_);
v___x_3824_ = lean_box(0);
v_isShared_3825_ = v_isSharedCheck_3829_;
goto v_resetjp_3823_;
}
v_resetjp_3823_:
{
lean_object* v___x_3827_; 
if (v_isShared_3825_ == 0)
{
v___x_3827_ = v___x_3824_;
goto v_reusejp_3826_;
}
else
{
lean_object* v_reuseFailAlloc_3828_; 
v_reuseFailAlloc_3828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3828_, 0, v_a_3822_);
v___x_3827_ = v_reuseFailAlloc_3828_;
goto v_reusejp_3826_;
}
v_reusejp_3826_:
{
return v___x_3827_;
}
}
}
}
case 12:
{
lean_object* v_var_3830_; lean_object* v_i_3831_; uint8_t v_updateHeader_3832_; lean_object* v_args_3833_; lean_object* v___x_3834_; 
v_var_3830_ = lean_ctor_get(v_e_3643_, 0);
v_i_3831_ = lean_ctor_get(v_e_3643_, 1);
lean_inc_ref(v_i_3831_);
v_updateHeader_3832_ = lean_ctor_get_uint8(v_e_3643_, sizeof(void*)*3);
v_args_3833_ = lean_ctor_get(v_e_3643_, 2);
lean_inc_ref(v_f_3642_);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_var_3830_);
v___x_3834_ = lean_apply_9(v_f_3642_, v_var_3830_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3834_) == 0)
{
lean_object* v_a_3835_; size_t v_sz_3836_; size_t v___x_3837_; lean_object* v___x_3838_; 
v_a_3835_ = lean_ctor_get(v___x_3834_, 0);
lean_inc(v_a_3835_);
lean_dec_ref_known(v___x_3834_, 1);
v_sz_3836_ = lean_array_size(v_args_3833_);
v___x_3837_ = ((size_t)0ULL);
lean_inc_ref(v_args_3833_);
v___x_3838_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(v_pu_3641_, v_f_3642_, v_sz_3836_, v___x_3837_, v_args_3833_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
if (lean_obj_tag(v___x_3838_) == 0)
{
lean_object* v_a_3839_; lean_object* v___x_3841_; uint8_t v_isShared_3842_; uint8_t v_isSharedCheck_3847_; 
v_a_3839_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3847_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3847_ == 0)
{
v___x_3841_ = v___x_3838_;
v_isShared_3842_ = v_isSharedCheck_3847_;
goto v_resetjp_3840_;
}
else
{
lean_inc(v_a_3839_);
lean_dec(v___x_3838_);
v___x_3841_ = lean_box(0);
v_isShared_3842_ = v_isSharedCheck_3847_;
goto v_resetjp_3840_;
}
v_resetjp_3840_:
{
lean_object* v___x_3843_; lean_object* v___x_3845_; 
v___x_3843_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateReuseImp___redArg(v_e_3643_, v_a_3835_, v_i_3831_, v_updateHeader_3832_, v_a_3839_);
if (v_isShared_3842_ == 0)
{
lean_ctor_set(v___x_3841_, 0, v___x_3843_);
v___x_3845_ = v___x_3841_;
goto v_reusejp_3844_;
}
else
{
lean_object* v_reuseFailAlloc_3846_; 
v_reuseFailAlloc_3846_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3846_, 0, v___x_3843_);
v___x_3845_ = v_reuseFailAlloc_3846_;
goto v_reusejp_3844_;
}
v_reusejp_3844_:
{
return v___x_3845_;
}
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec(v_a_3835_);
lean_dec_ref(v_i_3831_);
lean_dec_ref_known(v_e_3643_, 3);
v_a_3848_ = lean_ctor_get(v___x_3838_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3838_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3838_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3838_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
else
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3863_; 
lean_dec_ref(v_i_3831_);
lean_dec_ref_known(v_e_3643_, 3);
lean_dec_ref(v_f_3642_);
v_a_3856_ = lean_ctor_get(v___x_3834_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v___x_3834_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3858_ = v___x_3834_;
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v___x_3834_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3861_; 
if (v_isShared_3859_ == 0)
{
v___x_3861_ = v___x_3858_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3856_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
}
case 13:
{
lean_object* v_ty_3864_; lean_object* v_fvarId_3865_; lean_object* v___x_3866_; 
v_ty_3864_ = lean_ctor_get(v_e_3643_, 0);
lean_inc_ref(v_ty_3864_);
v_fvarId_3865_ = lean_ctor_get(v_e_3643_, 1);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_fvarId_3865_);
v___x_3866_ = lean_apply_9(v_f_3642_, v_fvarId_3865_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3866_) == 0)
{
lean_object* v_a_3867_; lean_object* v___x_3869_; uint8_t v_isShared_3870_; uint8_t v_isSharedCheck_3875_; 
v_a_3867_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3875_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3875_ == 0)
{
v___x_3869_ = v___x_3866_;
v_isShared_3870_ = v_isSharedCheck_3875_;
goto v_resetjp_3868_;
}
else
{
lean_inc(v_a_3867_);
lean_dec(v___x_3866_);
v___x_3869_ = lean_box(0);
v_isShared_3870_ = v_isSharedCheck_3875_;
goto v_resetjp_3868_;
}
v_resetjp_3868_:
{
lean_object* v___x_3871_; lean_object* v___x_3873_; 
v___x_3871_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateBoxImp___redArg(v_e_3643_, v_ty_3864_, v_a_3867_);
if (v_isShared_3870_ == 0)
{
lean_ctor_set(v___x_3869_, 0, v___x_3871_);
v___x_3873_ = v___x_3869_;
goto v_reusejp_3872_;
}
else
{
lean_object* v_reuseFailAlloc_3874_; 
v_reuseFailAlloc_3874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3874_, 0, v___x_3871_);
v___x_3873_ = v_reuseFailAlloc_3874_;
goto v_reusejp_3872_;
}
v_reusejp_3872_:
{
return v___x_3873_;
}
}
}
else
{
lean_object* v_a_3876_; lean_object* v___x_3878_; uint8_t v_isShared_3879_; uint8_t v_isSharedCheck_3883_; 
lean_dec_ref(v_ty_3864_);
lean_dec_ref_known(v_e_3643_, 2);
v_a_3876_ = lean_ctor_get(v___x_3866_, 0);
v_isSharedCheck_3883_ = !lean_is_exclusive(v___x_3866_);
if (v_isSharedCheck_3883_ == 0)
{
v___x_3878_ = v___x_3866_;
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
else
{
lean_inc(v_a_3876_);
lean_dec(v___x_3866_);
v___x_3878_ = lean_box(0);
v_isShared_3879_ = v_isSharedCheck_3883_;
goto v_resetjp_3877_;
}
v_resetjp_3877_:
{
lean_object* v___x_3881_; 
if (v_isShared_3879_ == 0)
{
v___x_3881_ = v___x_3878_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3882_; 
v_reuseFailAlloc_3882_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3882_, 0, v_a_3876_);
v___x_3881_ = v_reuseFailAlloc_3882_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
return v___x_3881_;
}
}
}
}
case 14:
{
lean_object* v_fvarId_3884_; lean_object* v___x_3885_; 
v_fvarId_3884_ = lean_ctor_get(v_e_3643_, 0);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_fvarId_3884_);
v___x_3885_ = lean_apply_9(v_f_3642_, v_fvarId_3884_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3885_) == 0)
{
lean_object* v_a_3886_; lean_object* v___x_3888_; uint8_t v_isShared_3889_; uint8_t v_isSharedCheck_3894_; 
v_a_3886_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3894_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3894_ == 0)
{
v___x_3888_ = v___x_3885_;
v_isShared_3889_ = v_isSharedCheck_3894_;
goto v_resetjp_3887_;
}
else
{
lean_inc(v_a_3886_);
lean_dec(v___x_3885_);
v___x_3888_ = lean_box(0);
v_isShared_3889_ = v_isSharedCheck_3894_;
goto v_resetjp_3887_;
}
v_resetjp_3887_:
{
lean_object* v___x_3890_; lean_object* v___x_3892_; 
v___x_3890_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateUnboxImp___redArg(v_e_3643_, v_a_3886_);
if (v_isShared_3889_ == 0)
{
lean_ctor_set(v___x_3888_, 0, v___x_3890_);
v___x_3892_ = v___x_3888_;
goto v_reusejp_3891_;
}
else
{
lean_object* v_reuseFailAlloc_3893_; 
v_reuseFailAlloc_3893_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3893_, 0, v___x_3890_);
v___x_3892_ = v_reuseFailAlloc_3893_;
goto v_reusejp_3891_;
}
v_reusejp_3891_:
{
return v___x_3892_;
}
}
}
else
{
lean_object* v_a_3895_; lean_object* v___x_3897_; uint8_t v_isShared_3898_; uint8_t v_isSharedCheck_3902_; 
lean_dec_ref_known(v_e_3643_, 1);
v_a_3895_ = lean_ctor_get(v___x_3885_, 0);
v_isSharedCheck_3902_ = !lean_is_exclusive(v___x_3885_);
if (v_isSharedCheck_3902_ == 0)
{
v___x_3897_ = v___x_3885_;
v_isShared_3898_ = v_isSharedCheck_3902_;
goto v_resetjp_3896_;
}
else
{
lean_inc(v_a_3895_);
lean_dec(v___x_3885_);
v___x_3897_ = lean_box(0);
v_isShared_3898_ = v_isSharedCheck_3902_;
goto v_resetjp_3896_;
}
v_resetjp_3896_:
{
lean_object* v___x_3900_; 
if (v_isShared_3898_ == 0)
{
v___x_3900_ = v___x_3897_;
goto v_reusejp_3899_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v_a_3895_);
v___x_3900_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3899_;
}
v_reusejp_3899_:
{
return v___x_3900_;
}
}
}
}
case 15:
{
lean_object* v_fvarId_3903_; lean_object* v___x_3904_; 
v_fvarId_3903_ = lean_ctor_get(v_e_3643_, 0);
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
lean_inc(v_fvarId_3903_);
v___x_3904_ = lean_apply_9(v_f_3642_, v_fvarId_3903_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3904_) == 0)
{
lean_object* v_a_3905_; lean_object* v___x_3907_; uint8_t v_isShared_3908_; uint8_t v_isSharedCheck_3913_; 
v_a_3905_ = lean_ctor_get(v___x_3904_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3907_ = v___x_3904_;
v_isShared_3908_ = v_isSharedCheck_3913_;
goto v_resetjp_3906_;
}
else
{
lean_inc(v_a_3905_);
lean_dec(v___x_3904_);
v___x_3907_ = lean_box(0);
v_isShared_3908_ = v_isSharedCheck_3913_;
goto v_resetjp_3906_;
}
v_resetjp_3906_:
{
lean_object* v___x_3909_; lean_object* v___x_3911_; 
v___x_3909_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateIsSharedImp___redArg(v_e_3643_, v_a_3905_);
if (v_isShared_3908_ == 0)
{
lean_ctor_set(v___x_3907_, 0, v___x_3909_);
v___x_3911_ = v___x_3907_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v___x_3909_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
else
{
lean_object* v_a_3914_; lean_object* v___x_3916_; uint8_t v_isShared_3917_; uint8_t v_isSharedCheck_3921_; 
lean_dec_ref_known(v_e_3643_, 1);
v_a_3914_ = lean_ctor_get(v___x_3904_, 0);
v_isSharedCheck_3921_ = !lean_is_exclusive(v___x_3904_);
if (v_isSharedCheck_3921_ == 0)
{
v___x_3916_ = v___x_3904_;
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
else
{
lean_inc(v_a_3914_);
lean_dec(v___x_3904_);
v___x_3916_ = lean_box(0);
v_isShared_3917_ = v_isSharedCheck_3921_;
goto v_resetjp_3915_;
}
v_resetjp_3915_:
{
lean_object* v___x_3919_; 
if (v_isShared_3917_ == 0)
{
v___x_3919_ = v___x_3916_;
goto v_reusejp_3918_;
}
else
{
lean_object* v_reuseFailAlloc_3920_; 
v_reuseFailAlloc_3920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3920_, 0, v_a_3914_);
v___x_3919_ = v_reuseFailAlloc_3920_;
goto v_reusejp_3918_;
}
v_reusejp_3918_:
{
return v___x_3919_;
}
}
}
}
default: 
{
lean_object* v___x_3922_; 
lean_dec_ref(v_f_3642_);
v___x_3922_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3922_, 0, v_e_3643_);
return v___x_3922_;
}
}
v___jp_3652_:
{
size_t v_sz_3654_; size_t v___x_3655_; lean_object* v___x_3656_; 
v_sz_3654_ = lean_array_size(v_args_3653_);
v___x_3655_ = ((size_t)0ULL);
v___x_3656_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0_spec__0(v_pu_3641_, v_f_3642_, v_sz_3654_, v___x_3655_, v_args_3653_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_);
if (lean_obj_tag(v___x_3656_) == 0)
{
lean_object* v_a_3657_; lean_object* v___x_3659_; uint8_t v_isShared_3660_; uint8_t v_isSharedCheck_3665_; 
v_a_3657_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3665_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3665_ == 0)
{
v___x_3659_ = v___x_3656_;
v_isShared_3660_ = v_isSharedCheck_3665_;
goto v_resetjp_3658_;
}
else
{
lean_inc(v_a_3657_);
lean_dec(v___x_3656_);
v___x_3659_ = lean_box(0);
v_isShared_3660_ = v_isSharedCheck_3665_;
goto v_resetjp_3658_;
}
v_resetjp_3658_:
{
lean_object* v___x_3661_; lean_object* v___x_3663_; 
v___x_3661_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateArgsImp___redArg(v_e_3643_, v_a_3657_);
if (v_isShared_3660_ == 0)
{
lean_ctor_set(v___x_3659_, 0, v___x_3661_);
v___x_3663_ = v___x_3659_;
goto v_reusejp_3662_;
}
else
{
lean_object* v_reuseFailAlloc_3664_; 
v_reuseFailAlloc_3664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3664_, 0, v___x_3661_);
v___x_3663_ = v_reuseFailAlloc_3664_;
goto v_reusejp_3662_;
}
v_reusejp_3662_:
{
return v___x_3663_;
}
}
}
else
{
lean_object* v_a_3666_; lean_object* v___x_3668_; uint8_t v_isShared_3669_; uint8_t v_isSharedCheck_3673_; 
lean_dec(v_e_3643_);
v_a_3666_ = lean_ctor_get(v___x_3656_, 0);
v_isSharedCheck_3673_ = !lean_is_exclusive(v___x_3656_);
if (v_isSharedCheck_3673_ == 0)
{
v___x_3668_ = v___x_3656_;
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
else
{
lean_inc(v_a_3666_);
lean_dec(v___x_3656_);
v___x_3668_ = lean_box(0);
v_isShared_3669_ = v_isSharedCheck_3673_;
goto v_resetjp_3667_;
}
v_resetjp_3667_:
{
lean_object* v___x_3671_; 
if (v_isShared_3669_ == 0)
{
v___x_3671_ = v___x_3668_;
goto v_reusejp_3670_;
}
else
{
lean_object* v_reuseFailAlloc_3672_; 
v_reuseFailAlloc_3672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3672_, 0, v_a_3666_);
v___x_3671_ = v_reuseFailAlloc_3672_;
goto v_reusejp_3670_;
}
v_reusejp_3670_:
{
return v___x_3671_;
}
}
}
}
v___jp_3674_:
{
lean_object* v___x_3676_; 
lean_inc(v___y_3650_);
lean_inc_ref(v___y_3649_);
lean_inc(v___y_3648_);
lean_inc_ref(v___y_3647_);
lean_inc(v___y_3646_);
lean_inc(v___y_3645_);
lean_inc_ref(v___y_3644_);
v___x_3676_ = lean_apply_9(v_f_3642_, v_fvarId_3675_, v___y_3644_, v___y_3645_, v___y_3646_, v___y_3647_, v___y_3648_, v___y_3649_, v___y_3650_, lean_box(0));
if (lean_obj_tag(v___x_3676_) == 0)
{
lean_object* v_a_3677_; lean_object* v___x_3679_; uint8_t v_isShared_3680_; uint8_t v_isSharedCheck_3685_; 
v_a_3677_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3685_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3685_ == 0)
{
v___x_3679_ = v___x_3676_;
v_isShared_3680_ = v_isSharedCheck_3685_;
goto v_resetjp_3678_;
}
else
{
lean_inc(v_a_3677_);
lean_dec(v___x_3676_);
v___x_3679_ = lean_box(0);
v_isShared_3680_ = v_isSharedCheck_3685_;
goto v_resetjp_3678_;
}
v_resetjp_3678_:
{
lean_object* v___x_3681_; lean_object* v___x_3683_; 
v___x_3681_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_LetValue_updateProjImp(v_pu_3641_, v_e_3643_, v_a_3677_);
if (v_isShared_3680_ == 0)
{
lean_ctor_set(v___x_3679_, 0, v___x_3681_);
v___x_3683_ = v___x_3679_;
goto v_reusejp_3682_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3681_);
v___x_3683_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3682_;
}
v_reusejp_3682_:
{
return v___x_3683_;
}
}
}
else
{
lean_object* v_a_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3693_; 
lean_dec(v_e_3643_);
v_a_3686_ = lean_ctor_get(v___x_3676_, 0);
v_isSharedCheck_3693_ = !lean_is_exclusive(v___x_3676_);
if (v_isSharedCheck_3693_ == 0)
{
v___x_3688_ = v___x_3676_;
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_a_3686_);
lean_dec(v___x_3676_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3693_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3691_; 
if (v_isShared_3689_ == 0)
{
v___x_3691_ = v___x_3688_;
goto v_reusejp_3690_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_a_3686_);
v___x_3691_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3690_;
}
v_reusejp_3690_:
{
return v___x_3691_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0___boxed(lean_object* v_pu_3923_, lean_object* v_f_3924_, lean_object* v_e_3925_, lean_object* v___y_3926_, lean_object* v___y_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_, lean_object* v___y_3932_, lean_object* v___y_3933_){
_start:
{
uint8_t v_pu_boxed_3934_; lean_object* v_res_3935_; 
v_pu_boxed_3934_ = lean_unbox(v_pu_3923_);
v_res_3935_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0(v_pu_boxed_3934_, v_f_3924_, v_e_3925_, v___y_3926_, v___y_3927_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_);
lean_dec(v___y_3932_);
lean_dec_ref(v___y_3931_);
lean_dec(v___y_3930_);
lean_dec_ref(v___y_3929_);
lean_dec(v___y_3928_);
lean_dec(v___y_3927_);
lean_dec_ref(v___y_3926_);
return v_res_3935_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__6(size_t v_sz_3936_, size_t v_i_3937_, lean_object* v_bs_3938_, lean_object* v___y_3939_, lean_object* v___y_3940_, lean_object* v___y_3941_, lean_object* v___y_3942_, lean_object* v___y_3943_, lean_object* v___y_3944_, lean_object* v___y_3945_){
_start:
{
uint8_t v___x_3947_; 
v___x_3947_ = lean_usize_dec_lt(v_i_3937_, v_sz_3936_);
if (v___x_3947_ == 0)
{
lean_object* v___x_3948_; 
v___x_3948_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3948_, 0, v_bs_3938_);
return v___x_3948_;
}
else
{
lean_object* v_v_3949_; lean_object* v___x_3950_; lean_object* v_bs_x27_3951_; lean_object* v___x_3952_; 
v_v_3949_ = lean_array_uget(v_bs_3938_, v_i_3937_);
v___x_3950_ = lean_unsigned_to_nat(0u);
v_bs_x27_3951_ = lean_array_uset(v_bs_3938_, v_i_3937_, v___x_3950_);
v___x_3952_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_goFVar(v_v_3949_, v___y_3939_, v___y_3940_, v___y_3941_, v___y_3942_, v___y_3943_, v___y_3944_, v___y_3945_);
if (lean_obj_tag(v___x_3952_) == 0)
{
lean_object* v_a_3953_; lean_object* v___x_3954_; size_t v___x_3955_; size_t v___x_3956_; lean_object* v___x_3957_; 
v_a_3953_ = lean_ctor_get(v___x_3952_, 0);
lean_inc(v_a_3953_);
lean_dec_ref_known(v___x_3952_, 1);
v___x_3954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3954_, 0, v_a_3953_);
v___x_3955_ = ((size_t)1ULL);
v___x_3956_ = lean_usize_add(v_i_3937_, v___x_3955_);
v___x_3957_ = lean_array_uset(v_bs_x27_3951_, v_i_3937_, v___x_3954_);
v_i_3937_ = v___x_3956_;
v_bs_3938_ = v___x_3957_;
goto _start;
}
else
{
lean_object* v_a_3959_; lean_object* v___x_3961_; uint8_t v_isShared_3962_; uint8_t v_isSharedCheck_3966_; 
lean_dec_ref(v_bs_x27_3951_);
v_a_3959_ = lean_ctor_get(v___x_3952_, 0);
v_isSharedCheck_3966_ = !lean_is_exclusive(v___x_3952_);
if (v_isSharedCheck_3966_ == 0)
{
v___x_3961_ = v___x_3952_;
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
else
{
lean_inc(v_a_3959_);
lean_dec(v___x_3952_);
v___x_3961_ = lean_box(0);
v_isShared_3962_ = v_isSharedCheck_3966_;
goto v_resetjp_3960_;
}
v_resetjp_3960_:
{
lean_object* v___x_3964_; 
if (v_isShared_3962_ == 0)
{
v___x_3964_ = v___x_3961_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3965_; 
v_reuseFailAlloc_3965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3965_, 0, v_a_3959_);
v___x_3964_ = v_reuseFailAlloc_3965_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
return v___x_3964_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__6___boxed(lean_object* v_sz_3967_, lean_object* v_i_3968_, lean_object* v_bs_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_){
_start:
{
size_t v_sz_boxed_3978_; size_t v_i_boxed_3979_; lean_object* v_res_3980_; 
v_sz_boxed_3978_ = lean_unbox_usize(v_sz_3967_);
lean_dec(v_sz_3967_);
v_i_boxed_3979_ = lean_unbox_usize(v_i_3968_);
lean_dec(v_i_3968_);
v_res_3980_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__6(v_sz_boxed_3978_, v_i_boxed_3979_, v_bs_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_);
lean_dec(v___y_3976_);
lean_dec_ref(v___y_3975_);
lean_dec(v___y_3974_);
lean_dec_ref(v___y_3973_);
lean_dec(v___y_3972_);
lean_dec(v___y_3971_);
lean_dec_ref(v___y_3970_);
return v_res_3980_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__5(size_t v_sz_3981_, size_t v_i_3982_, lean_object* v_bs_3983_){
_start:
{
uint8_t v___x_3984_; 
v___x_3984_ = lean_usize_dec_lt(v_i_3982_, v_sz_3981_);
if (v___x_3984_ == 0)
{
return v_bs_3983_;
}
else
{
lean_object* v_v_3985_; lean_object* v_fst_3986_; lean_object* v___x_3987_; lean_object* v_bs_x27_3988_; size_t v___x_3989_; size_t v___x_3990_; lean_object* v___x_3991_; 
v_v_3985_ = lean_array_uget_borrowed(v_bs_3983_, v_i_3982_);
v_fst_3986_ = lean_ctor_get(v_v_3985_, 0);
lean_inc(v_fst_3986_);
v___x_3987_ = lean_unsigned_to_nat(0u);
v_bs_x27_3988_ = lean_array_uset(v_bs_3983_, v_i_3982_, v___x_3987_);
v___x_3989_ = ((size_t)1ULL);
v___x_3990_ = lean_usize_add(v_i_3982_, v___x_3989_);
v___x_3991_ = lean_array_uset(v_bs_x27_3988_, v_i_3982_, v_fst_3986_);
v_i_3982_ = v___x_3990_;
v_bs_3983_ = v___x_3991_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__5___boxed(lean_object* v_sz_3993_, lean_object* v_i_3994_, lean_object* v_bs_3995_){
_start:
{
size_t v_sz_boxed_3996_; size_t v_i_boxed_3997_; lean_object* v_res_3998_; 
v_sz_boxed_3996_ = lean_unbox_usize(v_sz_3993_);
lean_dec(v_sz_3993_);
v_i_boxed_3997_ = lean_unbox_usize(v_i_3994_);
lean_dec(v_i_3994_);
v_res_3998_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__5(v_sz_boxed_3996_, v_i_boxed_3997_, v_bs_3995_);
return v_res_3998_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__0(lean_object* v_k_3999_, lean_object* v_a_4000_, lean_object* v_decl_4001_, lean_object* v_code_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_){
_start:
{
lean_object* v___x_4011_; 
lean_inc_ref(v_k_3999_);
v___x_4011_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(v_k_3999_, v___y_4003_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_);
if (lean_obj_tag(v___x_4011_) == 0)
{
lean_object* v_a_4012_; lean_object* v___x_4014_; uint8_t v_isShared_4015_; uint8_t v_isSharedCheck_4033_; 
v_a_4012_ = lean_ctor_get(v___x_4011_, 0);
v_isSharedCheck_4033_ = !lean_is_exclusive(v___x_4011_);
if (v_isSharedCheck_4033_ == 0)
{
v___x_4014_ = v___x_4011_;
v_isShared_4015_ = v_isSharedCheck_4033_;
goto v_resetjp_4013_;
}
else
{
lean_inc(v_a_4012_);
lean_dec(v___x_4011_);
v___x_4014_ = lean_box(0);
v_isShared_4015_ = v_isSharedCheck_4033_;
goto v_resetjp_4013_;
}
v_resetjp_4013_:
{
size_t v___x_4016_; size_t v___x_4017_; uint8_t v___x_4018_; 
v___x_4016_ = lean_ptr_addr(v_k_3999_);
lean_dec_ref(v_k_3999_);
v___x_4017_ = lean_ptr_addr(v_a_4012_);
v___x_4018_ = lean_usize_dec_eq(v___x_4016_, v___x_4017_);
if (v___x_4018_ == 0)
{
lean_object* v___x_4019_; lean_object* v___x_4021_; 
lean_dec_ref(v_code_4002_);
v___x_4019_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4019_, 0, v_a_4000_);
lean_ctor_set(v___x_4019_, 1, v_a_4012_);
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 0, v___x_4019_);
v___x_4021_ = v___x_4014_;
goto v_reusejp_4020_;
}
else
{
lean_object* v_reuseFailAlloc_4022_; 
v_reuseFailAlloc_4022_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4022_, 0, v___x_4019_);
v___x_4021_ = v_reuseFailAlloc_4022_;
goto v_reusejp_4020_;
}
v_reusejp_4020_:
{
return v___x_4021_;
}
}
else
{
size_t v___x_4023_; size_t v___x_4024_; uint8_t v___x_4025_; 
v___x_4023_ = lean_ptr_addr(v_decl_4001_);
v___x_4024_ = lean_ptr_addr(v_a_4000_);
v___x_4025_ = lean_usize_dec_eq(v___x_4023_, v___x_4024_);
if (v___x_4025_ == 0)
{
lean_object* v___x_4026_; lean_object* v___x_4028_; 
lean_dec_ref(v_code_4002_);
v___x_4026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4026_, 0, v_a_4000_);
lean_ctor_set(v___x_4026_, 1, v_a_4012_);
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 0, v___x_4026_);
v___x_4028_ = v___x_4014_;
goto v_reusejp_4027_;
}
else
{
lean_object* v_reuseFailAlloc_4029_; 
v_reuseFailAlloc_4029_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4029_, 0, v___x_4026_);
v___x_4028_ = v_reuseFailAlloc_4029_;
goto v_reusejp_4027_;
}
v_reusejp_4027_:
{
return v___x_4028_;
}
}
else
{
lean_object* v___x_4031_; 
lean_dec(v_a_4012_);
lean_dec_ref(v_a_4000_);
if (v_isShared_4015_ == 0)
{
lean_ctor_set(v___x_4014_, 0, v_code_4002_);
v___x_4031_ = v___x_4014_;
goto v_reusejp_4030_;
}
else
{
lean_object* v_reuseFailAlloc_4032_; 
v_reuseFailAlloc_4032_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4032_, 0, v_code_4002_);
v___x_4031_ = v_reuseFailAlloc_4032_;
goto v_reusejp_4030_;
}
v_reusejp_4030_:
{
return v___x_4031_;
}
}
}
}
}
else
{
lean_dec_ref(v_code_4002_);
lean_dec_ref(v_a_4000_);
lean_dec_ref(v_k_3999_);
return v___x_4011_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__0___boxed(lean_object* v_k_4034_, lean_object* v_a_4035_, lean_object* v_decl_4036_, lean_object* v_code_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_, lean_object* v___y_4041_, lean_object* v___y_4042_, lean_object* v___y_4043_, lean_object* v___y_4044_, lean_object* v___y_4045_){
_start:
{
lean_object* v_res_4046_; 
v_res_4046_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__0(v_k_4034_, v_a_4035_, v_decl_4036_, v_code_4037_, v___y_4038_, v___y_4039_, v___y_4040_, v___y_4041_, v___y_4042_, v___y_4043_, v___y_4044_);
lean_dec(v___y_4044_);
lean_dec_ref(v___y_4043_);
lean_dec(v___y_4042_);
lean_dec_ref(v___y_4041_);
lean_dec(v___y_4040_);
lean_dec(v___y_4039_);
lean_dec_ref(v___y_4038_);
lean_dec_ref(v_decl_4036_);
return v_res_4046_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__1___boxed(lean_object* v_value_4047_, lean_object* v___x_4048_, lean_object* v_decl_4049_, lean_object* v_type_4050_, lean_object* v_params_4051_, lean_object* v___y_4052_, lean_object* v___y_4053_, lean_object* v___y_4054_, lean_object* v___y_4055_, lean_object* v___y_4056_, lean_object* v___y_4057_, lean_object* v___y_4058_, lean_object* v___y_4059_){
_start:
{
uint8_t v___x_38834__boxed_4060_; lean_object* v_res_4061_; 
v___x_38834__boxed_4060_ = lean_unbox(v___x_4048_);
v_res_4061_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__1(v_value_4047_, v___x_38834__boxed_4060_, v_decl_4049_, v_type_4050_, v_params_4051_, v___y_4052_, v___y_4053_, v___y_4054_, v___y_4055_, v___y_4056_, v___y_4057_, v___y_4058_);
lean_dec(v___y_4058_);
lean_dec_ref(v___y_4057_);
lean_dec(v___y_4056_);
lean_dec_ref(v___y_4055_);
lean_dec(v___y_4054_);
lean_dec(v___y_4053_);
lean_dec_ref(v___y_4052_);
return v_res_4061_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__2(lean_object* v_k_4062_, lean_object* v_a_4063_, lean_object* v_decl_4064_, lean_object* v_code_4065_, lean_object* v___y_4066_, lean_object* v___y_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v___x_4074_; 
lean_inc_ref(v_k_4062_);
v___x_4074_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(v_k_4062_, v___y_4066_, v___y_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_, v___y_4072_);
if (lean_obj_tag(v___x_4074_) == 0)
{
lean_object* v_a_4075_; lean_object* v___x_4077_; uint8_t v_isShared_4078_; uint8_t v_isSharedCheck_4096_; 
v_a_4075_ = lean_ctor_get(v___x_4074_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v___x_4074_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4077_ = v___x_4074_;
v_isShared_4078_ = v_isSharedCheck_4096_;
goto v_resetjp_4076_;
}
else
{
lean_inc(v_a_4075_);
lean_dec(v___x_4074_);
v___x_4077_ = lean_box(0);
v_isShared_4078_ = v_isSharedCheck_4096_;
goto v_resetjp_4076_;
}
v_resetjp_4076_:
{
size_t v___x_4079_; size_t v___x_4080_; uint8_t v___x_4081_; 
v___x_4079_ = lean_ptr_addr(v_k_4062_);
lean_dec_ref(v_k_4062_);
v___x_4080_ = lean_ptr_addr(v_a_4075_);
v___x_4081_ = lean_usize_dec_eq(v___x_4079_, v___x_4080_);
if (v___x_4081_ == 0)
{
lean_object* v___x_4082_; lean_object* v___x_4084_; 
lean_dec_ref(v_code_4065_);
v___x_4082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4082_, 0, v_a_4063_);
lean_ctor_set(v___x_4082_, 1, v_a_4075_);
if (v_isShared_4078_ == 0)
{
lean_ctor_set(v___x_4077_, 0, v___x_4082_);
v___x_4084_ = v___x_4077_;
goto v_reusejp_4083_;
}
else
{
lean_object* v_reuseFailAlloc_4085_; 
v_reuseFailAlloc_4085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4085_, 0, v___x_4082_);
v___x_4084_ = v_reuseFailAlloc_4085_;
goto v_reusejp_4083_;
}
v_reusejp_4083_:
{
return v___x_4084_;
}
}
else
{
size_t v___x_4086_; size_t v___x_4087_; uint8_t v___x_4088_; 
v___x_4086_ = lean_ptr_addr(v_decl_4064_);
v___x_4087_ = lean_ptr_addr(v_a_4063_);
v___x_4088_ = lean_usize_dec_eq(v___x_4086_, v___x_4087_);
if (v___x_4088_ == 0)
{
lean_object* v___x_4089_; lean_object* v___x_4091_; 
lean_dec_ref(v_code_4065_);
v___x_4089_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4089_, 0, v_a_4063_);
lean_ctor_set(v___x_4089_, 1, v_a_4075_);
if (v_isShared_4078_ == 0)
{
lean_ctor_set(v___x_4077_, 0, v___x_4089_);
v___x_4091_ = v___x_4077_;
goto v_reusejp_4090_;
}
else
{
lean_object* v_reuseFailAlloc_4092_; 
v_reuseFailAlloc_4092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4092_, 0, v___x_4089_);
v___x_4091_ = v_reuseFailAlloc_4092_;
goto v_reusejp_4090_;
}
v_reusejp_4090_:
{
return v___x_4091_;
}
}
else
{
lean_object* v___x_4094_; 
lean_dec(v_a_4075_);
lean_dec_ref(v_a_4063_);
if (v_isShared_4078_ == 0)
{
lean_ctor_set(v___x_4077_, 0, v_code_4065_);
v___x_4094_ = v___x_4077_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_code_4065_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
}
}
}
else
{
lean_dec_ref(v_code_4065_);
lean_dec_ref(v_a_4063_);
lean_dec_ref(v_k_4062_);
return v___x_4074_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__2___boxed(lean_object* v_k_4097_, lean_object* v_a_4098_, lean_object* v_decl_4099_, lean_object* v_code_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_){
_start:
{
lean_object* v_res_4109_; 
v_res_4109_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__2(v_k_4097_, v_a_4098_, v_decl_4099_, v_code_4100_, v___y_4101_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
lean_dec(v___y_4105_);
lean_dec_ref(v___y_4104_);
lean_dec(v___y_4103_);
lean_dec(v___y_4102_);
lean_dec_ref(v___y_4101_);
lean_dec_ref(v_decl_4099_);
return v_res_4109_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__3(lean_object* v_value_4110_, lean_object* v_fvarId_4111_, lean_object* v_params_4112_, uint8_t v___x_4113_, lean_object* v_decl_4114_, lean_object* v_type_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_, lean_object* v___y_4120_, lean_object* v___y_4121_, lean_object* v___y_4122_){
_start:
{
lean_object* v___x_4124_; 
v___x_4124_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(v_value_4110_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_, v___y_4120_, v___y_4121_, v___y_4122_);
if (lean_obj_tag(v___x_4124_) == 0)
{
lean_object* v_a_4125_; lean_object* v___x_4126_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4133_; lean_object* v___x_4142_; lean_object* v_size_4143_; lean_object* v_buckets_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; uint8_t v___x_4148_; 
v_a_4125_ = lean_ctor_get(v___x_4124_, 0);
lean_inc(v_a_4125_);
lean_dec_ref_known(v___x_4124_, 1);
v___x_4126_ = lean_st_ref_get(v___y_4117_);
v___x_4142_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(v___x_4126_, v_fvarId_4111_);
lean_dec(v___x_4126_);
v_size_4143_ = lean_ctor_get(v___x_4142_, 0);
lean_inc(v_size_4143_);
v_buckets_4144_ = lean_ctor_get(v___x_4142_, 1);
lean_inc_ref(v_buckets_4144_);
lean_dec_ref(v___x_4142_);
v___x_4145_ = lean_mk_empty_array_with_capacity(v_size_4143_);
lean_dec(v_size_4143_);
v___x_4146_ = lean_unsigned_to_nat(0u);
v___x_4147_ = lean_array_get_size(v_buckets_4144_);
v___x_4148_ = lean_nat_dec_lt(v___x_4146_, v___x_4147_);
if (v___x_4148_ == 0)
{
lean_dec_ref(v_buckets_4144_);
v___y_4133_ = v___x_4145_;
goto v___jp_4132_;
}
else
{
size_t v___x_4149_; size_t v___x_4150_; lean_object* v___x_4151_; 
v___x_4149_ = ((size_t)0ULL);
v___x_4150_ = lean_usize_of_nat(v___x_4147_);
v___x_4151_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2(v_buckets_4144_, v___x_4149_, v___x_4150_, v___x_4145_);
lean_dec_ref(v_buckets_4144_);
v___y_4133_ = v___x_4151_;
goto v___jp_4132_;
}
v___jp_4127_:
{
lean_object* v___x_4130_; lean_object* v___x_4131_; 
v___x_4130_ = l_Array_append___redArg(v___y_4128_, v_params_4112_);
v___x_4131_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_4113_, v_decl_4114_, v___y_4129_, v___x_4130_, v_a_4125_, v___y_4120_);
return v___x_4131_;
}
v___jp_4132_:
{
size_t v_sz_4134_; size_t v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; uint8_t v___x_4139_; 
v_sz_4134_ = lean_array_size(v___y_4133_);
v___x_4135_ = ((size_t)0ULL);
v___x_4136_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__1(v_sz_4134_, v___x_4135_, v___y_4133_);
v___x_4137_ = lean_array_get_size(v___x_4136_);
v___x_4138_ = lean_unsigned_to_nat(0u);
v___x_4139_ = lean_nat_dec_lt(v___x_4138_, v___x_4137_);
if (v___x_4139_ == 0)
{
v___y_4128_ = v___x_4136_;
v___y_4129_ = v_type_4115_;
goto v___jp_4127_;
}
else
{
size_t v___x_4140_; lean_object* v___x_4141_; 
v___x_4140_ = lean_usize_of_nat(v___x_4137_);
v___x_4141_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__2(v___x_4136_, v___x_4140_, v___x_4135_, v_type_4115_);
v___y_4128_ = v___x_4136_;
v___y_4129_ = v___x_4141_;
goto v___jp_4127_;
}
}
}
else
{
lean_object* v_a_4152_; lean_object* v___x_4154_; uint8_t v_isShared_4155_; uint8_t v_isSharedCheck_4159_; 
lean_dec_ref(v_type_4115_);
lean_dec_ref(v_decl_4114_);
v_a_4152_ = lean_ctor_get(v___x_4124_, 0);
v_isSharedCheck_4159_ = !lean_is_exclusive(v___x_4124_);
if (v_isSharedCheck_4159_ == 0)
{
v___x_4154_ = v___x_4124_;
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
else
{
lean_inc(v_a_4152_);
lean_dec(v___x_4124_);
v___x_4154_ = lean_box(0);
v_isShared_4155_ = v_isSharedCheck_4159_;
goto v_resetjp_4153_;
}
v_resetjp_4153_:
{
lean_object* v___x_4157_; 
if (v_isShared_4155_ == 0)
{
v___x_4157_ = v___x_4154_;
goto v_reusejp_4156_;
}
else
{
lean_object* v_reuseFailAlloc_4158_; 
v_reuseFailAlloc_4158_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4158_, 0, v_a_4152_);
v___x_4157_ = v_reuseFailAlloc_4158_;
goto v_reusejp_4156_;
}
v_reusejp_4156_:
{
return v___x_4157_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__3___boxed(lean_object* v_value_4160_, lean_object* v_fvarId_4161_, lean_object* v_params_4162_, lean_object* v___x_4163_, lean_object* v_decl_4164_, lean_object* v_type_4165_, lean_object* v___y_4166_, lean_object* v___y_4167_, lean_object* v___y_4168_, lean_object* v___y_4169_, lean_object* v___y_4170_, lean_object* v___y_4171_, lean_object* v___y_4172_, lean_object* v___y_4173_){
_start:
{
uint8_t v___x_38957__boxed_4174_; lean_object* v_res_4175_; 
v___x_38957__boxed_4174_ = lean_unbox(v___x_4163_);
v_res_4175_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__3(v_value_4160_, v_fvarId_4161_, v_params_4162_, v___x_38957__boxed_4174_, v_decl_4164_, v_type_4165_, v___y_4166_, v___y_4167_, v___y_4168_, v___y_4169_, v___y_4170_, v___y_4171_, v___y_4172_);
lean_dec(v___y_4172_);
lean_dec_ref(v___y_4171_);
lean_dec(v___y_4170_);
lean_dec_ref(v___y_4169_);
lean_dec(v___y_4168_);
lean_dec(v___y_4167_);
lean_dec_ref(v___y_4166_);
lean_dec_ref(v_params_4162_);
lean_dec(v_fvarId_4161_);
return v_res_4175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__4(lean_object* v_k_4176_, lean_object* v_a_4177_, lean_object* v_decl_4178_, lean_object* v_code_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_, lean_object* v___y_4184_, lean_object* v___y_4185_, lean_object* v___y_4186_){
_start:
{
lean_object* v___x_4188_; 
lean_inc_ref(v_k_4176_);
v___x_4188_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(v_k_4176_, v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_);
if (lean_obj_tag(v___x_4188_) == 0)
{
lean_object* v_a_4189_; lean_object* v___x_4191_; uint8_t v_isShared_4192_; uint8_t v_isSharedCheck_4210_; 
v_a_4189_ = lean_ctor_get(v___x_4188_, 0);
v_isSharedCheck_4210_ = !lean_is_exclusive(v___x_4188_);
if (v_isSharedCheck_4210_ == 0)
{
v___x_4191_ = v___x_4188_;
v_isShared_4192_ = v_isSharedCheck_4210_;
goto v_resetjp_4190_;
}
else
{
lean_inc(v_a_4189_);
lean_dec(v___x_4188_);
v___x_4191_ = lean_box(0);
v_isShared_4192_ = v_isSharedCheck_4210_;
goto v_resetjp_4190_;
}
v_resetjp_4190_:
{
size_t v___x_4193_; size_t v___x_4194_; uint8_t v___x_4195_; 
v___x_4193_ = lean_ptr_addr(v_k_4176_);
lean_dec_ref(v_k_4176_);
v___x_4194_ = lean_ptr_addr(v_a_4189_);
v___x_4195_ = lean_usize_dec_eq(v___x_4193_, v___x_4194_);
if (v___x_4195_ == 0)
{
lean_object* v___x_4196_; lean_object* v___x_4198_; 
lean_dec_ref(v_code_4179_);
v___x_4196_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4196_, 0, v_a_4177_);
lean_ctor_set(v___x_4196_, 1, v_a_4189_);
if (v_isShared_4192_ == 0)
{
lean_ctor_set(v___x_4191_, 0, v___x_4196_);
v___x_4198_ = v___x_4191_;
goto v_reusejp_4197_;
}
else
{
lean_object* v_reuseFailAlloc_4199_; 
v_reuseFailAlloc_4199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4199_, 0, v___x_4196_);
v___x_4198_ = v_reuseFailAlloc_4199_;
goto v_reusejp_4197_;
}
v_reusejp_4197_:
{
return v___x_4198_;
}
}
else
{
size_t v___x_4200_; size_t v___x_4201_; uint8_t v___x_4202_; 
v___x_4200_ = lean_ptr_addr(v_decl_4178_);
v___x_4201_ = lean_ptr_addr(v_a_4177_);
v___x_4202_ = lean_usize_dec_eq(v___x_4200_, v___x_4201_);
if (v___x_4202_ == 0)
{
lean_object* v___x_4203_; lean_object* v___x_4205_; 
lean_dec_ref(v_code_4179_);
v___x_4203_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_4203_, 0, v_a_4177_);
lean_ctor_set(v___x_4203_, 1, v_a_4189_);
if (v_isShared_4192_ == 0)
{
lean_ctor_set(v___x_4191_, 0, v___x_4203_);
v___x_4205_ = v___x_4191_;
goto v_reusejp_4204_;
}
else
{
lean_object* v_reuseFailAlloc_4206_; 
v_reuseFailAlloc_4206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4206_, 0, v___x_4203_);
v___x_4205_ = v_reuseFailAlloc_4206_;
goto v_reusejp_4204_;
}
v_reusejp_4204_:
{
return v___x_4205_;
}
}
else
{
lean_object* v___x_4208_; 
lean_dec(v_a_4189_);
lean_dec_ref(v_a_4177_);
if (v_isShared_4192_ == 0)
{
lean_ctor_set(v___x_4191_, 0, v_code_4179_);
v___x_4208_ = v___x_4191_;
goto v_reusejp_4207_;
}
else
{
lean_object* v_reuseFailAlloc_4209_; 
v_reuseFailAlloc_4209_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4209_, 0, v_code_4179_);
v___x_4208_ = v_reuseFailAlloc_4209_;
goto v_reusejp_4207_;
}
v_reusejp_4207_:
{
return v___x_4208_;
}
}
}
}
}
else
{
lean_dec_ref(v_code_4179_);
lean_dec_ref(v_a_4177_);
lean_dec_ref(v_k_4176_);
return v___x_4188_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__4___boxed(lean_object* v_k_4211_, lean_object* v_a_4212_, lean_object* v_decl_4213_, lean_object* v_code_4214_, lean_object* v___y_4215_, lean_object* v___y_4216_, lean_object* v___y_4217_, lean_object* v___y_4218_, lean_object* v___y_4219_, lean_object* v___y_4220_, lean_object* v___y_4221_, lean_object* v___y_4222_){
_start:
{
lean_object* v_res_4223_; 
v_res_4223_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__4(v_k_4211_, v_a_4212_, v_decl_4213_, v_code_4214_, v___y_4215_, v___y_4216_, v___y_4217_, v___y_4218_, v___y_4219_, v___y_4220_, v___y_4221_);
lean_dec(v___y_4221_);
lean_dec_ref(v___y_4220_);
lean_dec(v___y_4219_);
lean_dec_ref(v___y_4218_);
lean_dec(v___y_4217_);
lean_dec(v___y_4216_);
lean_dec_ref(v___y_4215_);
lean_dec_ref(v_decl_4213_);
return v_res_4223_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___boxed(lean_object* v_code_4224_, lean_object* v___y_4225_, lean_object* v___y_4226_, lean_object* v___y_4227_, lean_object* v___y_4228_, lean_object* v___y_4229_, lean_object* v___y_4230_, lean_object* v___y_4231_, lean_object* v___y_4232_){
_start:
{
lean_object* v_res_4233_; 
v_res_4233_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(v_code_4224_, v___y_4225_, v___y_4226_, v___y_4227_, v___y_4228_, v___y_4229_, v___y_4230_, v___y_4231_);
lean_dec(v___y_4231_);
lean_dec_ref(v___y_4230_);
lean_dec(v___y_4229_);
lean_dec_ref(v___y_4228_);
lean_dec(v___y_4227_);
lean_dec(v___y_4226_);
lean_dec_ref(v___y_4225_);
return v_res_4233_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__9(lean_object* v_i_4234_, lean_object* v_as_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_, lean_object* v___y_4238_, lean_object* v___y_4239_, lean_object* v___y_4240_, lean_object* v___y_4241_, lean_object* v___y_4242_){
_start:
{
lean_object* v___x_4244_; uint8_t v___x_4245_; 
v___x_4244_ = lean_array_get_size(v_as_4235_);
v___x_4245_ = lean_nat_dec_lt(v_i_4234_, v___x_4244_);
if (v___x_4245_ == 0)
{
lean_object* v___x_4246_; 
lean_dec(v_i_4234_);
v___x_4246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4246_, 0, v_as_4235_);
return v___x_4246_;
}
else
{
uint8_t v___x_4247_; lean_object* v_a_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4252_; 
v___x_4247_ = 0;
v_a_4248_ = lean_array_fget_borrowed(v_as_4235_, v_i_4234_);
v___x_4249_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___boxed), 9, 0);
v___x_4250_ = lean_box(v___x_4247_);
lean_inc(v_a_4248_);
v___x_4251_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__8___boxed), 11, 3);
lean_closure_set(v___x_4251_, 0, v___x_4250_);
lean_closure_set(v___x_4251_, 1, v_a_4248_);
lean_closure_set(v___x_4251_, 2, v___x_4249_);
v___x_4252_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewAltScope___redArg(v_a_4248_, v___x_4251_, v___y_4236_, v___y_4237_, v___y_4238_, v___y_4239_, v___y_4240_, v___y_4241_, v___y_4242_);
if (lean_obj_tag(v___x_4252_) == 0)
{
lean_object* v_a_4253_; size_t v___x_4254_; size_t v___x_4255_; uint8_t v___x_4256_; 
v_a_4253_ = lean_ctor_get(v___x_4252_, 0);
lean_inc(v_a_4253_);
lean_dec_ref_known(v___x_4252_, 1);
v___x_4254_ = lean_ptr_addr(v_a_4248_);
v___x_4255_ = lean_ptr_addr(v_a_4253_);
v___x_4256_ = lean_usize_dec_eq(v___x_4254_, v___x_4255_);
if (v___x_4256_ == 0)
{
lean_object* v___x_4257_; lean_object* v___x_4258_; lean_object* v___x_4259_; 
v___x_4257_ = lean_unsigned_to_nat(1u);
v___x_4258_ = lean_nat_add(v_i_4234_, v___x_4257_);
v___x_4259_ = lean_array_fset(v_as_4235_, v_i_4234_, v_a_4253_);
lean_dec(v_i_4234_);
v_i_4234_ = v___x_4258_;
v_as_4235_ = v___x_4259_;
goto _start;
}
else
{
lean_object* v___x_4261_; lean_object* v___x_4262_; 
lean_dec(v_a_4253_);
v___x_4261_ = lean_unsigned_to_nat(1u);
v___x_4262_ = lean_nat_add(v_i_4234_, v___x_4261_);
lean_dec(v_i_4234_);
v_i_4234_ = v___x_4262_;
goto _start;
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4271_; 
lean_dec_ref(v_as_4235_);
lean_dec(v_i_4234_);
v_a_4264_ = lean_ctor_get(v___x_4252_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4252_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4266_ = v___x_4252_;
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4252_);
v___x_4266_ = lean_box(0);
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
v_resetjp_4265_:
{
lean_object* v___x_4269_; 
if (v_isShared_4267_ == 0)
{
v___x_4269_ = v___x_4266_;
goto v_reusejp_4268_;
}
else
{
lean_object* v_reuseFailAlloc_4270_; 
v_reuseFailAlloc_4270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4270_, 0, v_a_4264_);
v___x_4269_ = v_reuseFailAlloc_4270_;
goto v_reusejp_4268_;
}
v_reusejp_4268_:
{
return v___x_4269_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(lean_object* v_code_4272_, lean_object* v___y_4273_, lean_object* v___y_4274_, lean_object* v___y_4275_, lean_object* v___y_4276_, lean_object* v___y_4277_, lean_object* v___y_4278_, lean_object* v___y_4279_){
_start:
{
switch(lean_obj_tag(v_code_4272_))
{
case 0:
{
lean_object* v_decl_4281_; lean_object* v_k_4282_; lean_object* v_value_4283_; uint8_t v___x_4284_; lean_object* v___x_4285_; lean_object* v___x_4286_; 
v_decl_4281_ = lean_ctor_get(v_code_4272_, 0);
lean_inc_ref(v_decl_4281_);
v_k_4282_ = lean_ctor_get(v_code_4272_, 1);
lean_inc_ref(v_k_4282_);
v_value_4283_ = lean_ctor_get(v_decl_4281_, 3);
v___x_4284_ = 0;
v___x_4285_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4___closed__0));
lean_inc(v_value_4283_);
v___x_4286_ = l_Lean_Compiler_LCNF_LetValue_mapFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__0(v___x_4284_, v___x_4285_, v_value_4283_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4286_) == 0)
{
lean_object* v_a_4287_; lean_object* v___x_4288_; 
v_a_4287_ = lean_ctor_get(v___x_4286_, 0);
lean_inc(v_a_4287_);
lean_dec_ref_known(v___x_4286_, 1);
lean_inc_ref(v_decl_4281_);
v___x_4288_ = l_Lean_Compiler_LCNF_LetDecl_updateValue___redArg(v___x_4284_, v_decl_4281_, v_a_4287_, v___y_4277_);
if (lean_obj_tag(v___x_4288_) == 0)
{
lean_object* v_a_4289_; lean_object* v_fvarId_4290_; lean_object* v___f_4291_; lean_object* v___x_4292_; 
v_a_4289_ = lean_ctor_get(v___x_4288_, 0);
lean_inc(v_a_4289_);
lean_dec_ref_known(v___x_4288_, 1);
v_fvarId_4290_ = lean_ctor_get(v_a_4289_, 0);
lean_inc(v_fvarId_4290_);
v___f_4291_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__0___boxed), 12, 4);
lean_closure_set(v___f_4291_, 0, v_k_4282_);
lean_closure_set(v___f_4291_, 1, v_a_4289_);
lean_closure_set(v___f_4291_, 2, v_decl_4281_);
lean_closure_set(v___f_4291_, 3, v_code_4272_);
v___x_4292_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg(v_fvarId_4290_, v___f_4291_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
return v___x_4292_;
}
else
{
lean_object* v_a_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4300_; 
lean_dec_ref(v_k_4282_);
lean_dec_ref_known(v_code_4272_, 2);
lean_dec_ref(v_decl_4281_);
v_a_4293_ = lean_ctor_get(v___x_4288_, 0);
v_isSharedCheck_4300_ = !lean_is_exclusive(v___x_4288_);
if (v_isSharedCheck_4300_ == 0)
{
v___x_4295_ = v___x_4288_;
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_a_4293_);
lean_dec(v___x_4288_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4300_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4298_; 
if (v_isShared_4296_ == 0)
{
v___x_4298_ = v___x_4295_;
goto v_reusejp_4297_;
}
else
{
lean_object* v_reuseFailAlloc_4299_; 
v_reuseFailAlloc_4299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4299_, 0, v_a_4293_);
v___x_4298_ = v_reuseFailAlloc_4299_;
goto v_reusejp_4297_;
}
v_reusejp_4297_:
{
return v___x_4298_;
}
}
}
}
else
{
lean_object* v_a_4301_; lean_object* v___x_4303_; uint8_t v_isShared_4304_; uint8_t v_isSharedCheck_4308_; 
lean_dec_ref(v_k_4282_);
lean_dec_ref_known(v_code_4272_, 2);
lean_dec_ref(v_decl_4281_);
v_a_4301_ = lean_ctor_get(v___x_4286_, 0);
v_isSharedCheck_4308_ = !lean_is_exclusive(v___x_4286_);
if (v_isSharedCheck_4308_ == 0)
{
v___x_4303_ = v___x_4286_;
v_isShared_4304_ = v_isSharedCheck_4308_;
goto v_resetjp_4302_;
}
else
{
lean_inc(v_a_4301_);
lean_dec(v___x_4286_);
v___x_4303_ = lean_box(0);
v_isShared_4304_ = v_isSharedCheck_4308_;
goto v_resetjp_4302_;
}
v_resetjp_4302_:
{
lean_object* v___x_4306_; 
if (v_isShared_4304_ == 0)
{
v___x_4306_ = v___x_4303_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4307_; 
v_reuseFailAlloc_4307_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4307_, 0, v_a_4301_);
v___x_4306_ = v_reuseFailAlloc_4307_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
return v___x_4306_;
}
}
}
}
case 1:
{
lean_object* v_decl_4309_; lean_object* v_k_4310_; lean_object* v_params_4311_; lean_object* v_type_4312_; lean_object* v_value_4313_; uint8_t v___x_4314_; lean_object* v___x_4315_; lean_object* v___f_4316_; lean_object* v___x_4317_; 
v_decl_4309_ = lean_ctor_get(v_code_4272_, 0);
lean_inc_ref_n(v_decl_4309_, 2);
v_k_4310_ = lean_ctor_get(v_code_4272_, 1);
lean_inc_ref(v_k_4310_);
v_params_4311_ = lean_ctor_get(v_decl_4309_, 2);
v_type_4312_ = lean_ctor_get(v_decl_4309_, 3);
v_value_4313_ = lean_ctor_get(v_decl_4309_, 4);
v___x_4314_ = 0;
v___x_4315_ = lean_box(v___x_4314_);
lean_inc_ref(v_params_4311_);
lean_inc_ref(v_type_4312_);
lean_inc_ref(v_value_4313_);
v___f_4316_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__1___boxed), 13, 5);
lean_closure_set(v___f_4316_, 0, v_value_4313_);
lean_closure_set(v___f_4316_, 1, v___x_4315_);
lean_closure_set(v___f_4316_, 2, v_decl_4309_);
lean_closure_set(v___f_4316_, 3, v_type_4312_);
lean_closure_set(v___f_4316_, 4, v_params_4311_);
v___x_4317_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg(v___f_4316_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4317_) == 0)
{
lean_object* v_a_4318_; lean_object* v_fvarId_4319_; lean_object* v___f_4320_; lean_object* v___x_4321_; 
v_a_4318_ = lean_ctor_get(v___x_4317_, 0);
lean_inc(v_a_4318_);
lean_dec_ref_known(v___x_4317_, 1);
v_fvarId_4319_ = lean_ctor_get(v_a_4318_, 0);
lean_inc(v_fvarId_4319_);
v___f_4320_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__2___boxed), 12, 4);
lean_closure_set(v___f_4320_, 0, v_k_4310_);
lean_closure_set(v___f_4320_, 1, v_a_4318_);
lean_closure_set(v___f_4320_, 2, v_decl_4309_);
lean_closure_set(v___f_4320_, 3, v_code_4272_);
v___x_4321_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg(v_fvarId_4319_, v___f_4320_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
return v___x_4321_;
}
else
{
lean_object* v_a_4322_; lean_object* v___x_4324_; uint8_t v_isShared_4325_; uint8_t v_isSharedCheck_4329_; 
lean_dec_ref(v_k_4310_);
lean_dec_ref(v_decl_4309_);
lean_dec_ref_known(v_code_4272_, 2);
v_a_4322_ = lean_ctor_get(v___x_4317_, 0);
v_isSharedCheck_4329_ = !lean_is_exclusive(v___x_4317_);
if (v_isSharedCheck_4329_ == 0)
{
v___x_4324_ = v___x_4317_;
v_isShared_4325_ = v_isSharedCheck_4329_;
goto v_resetjp_4323_;
}
else
{
lean_inc(v_a_4322_);
lean_dec(v___x_4317_);
v___x_4324_ = lean_box(0);
v_isShared_4325_ = v_isSharedCheck_4329_;
goto v_resetjp_4323_;
}
v_resetjp_4323_:
{
lean_object* v___x_4327_; 
if (v_isShared_4325_ == 0)
{
v___x_4327_ = v___x_4324_;
goto v_reusejp_4326_;
}
else
{
lean_object* v_reuseFailAlloc_4328_; 
v_reuseFailAlloc_4328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4328_, 0, v_a_4322_);
v___x_4327_ = v_reuseFailAlloc_4328_;
goto v_reusejp_4326_;
}
v_reusejp_4326_:
{
return v___x_4327_;
}
}
}
}
case 2:
{
lean_object* v_decl_4330_; lean_object* v_k_4331_; lean_object* v_fvarId_4332_; lean_object* v_params_4333_; lean_object* v_type_4334_; lean_object* v_value_4335_; uint8_t v___x_4336_; lean_object* v___x_4337_; lean_object* v___f_4338_; lean_object* v___x_4339_; 
v_decl_4330_ = lean_ctor_get(v_code_4272_, 0);
lean_inc_ref_n(v_decl_4330_, 3);
v_k_4331_ = lean_ctor_get(v_code_4272_, 1);
lean_inc_ref(v_k_4331_);
v_fvarId_4332_ = lean_ctor_get(v_decl_4330_, 0);
v_params_4333_ = lean_ctor_get(v_decl_4330_, 2);
v_type_4334_ = lean_ctor_get(v_decl_4330_, 3);
v_value_4335_ = lean_ctor_get(v_decl_4330_, 4);
v___x_4336_ = 0;
v___x_4337_ = lean_box(v___x_4336_);
lean_inc_ref(v_type_4334_);
lean_inc_ref(v_params_4333_);
lean_inc(v_fvarId_4332_);
lean_inc_ref(v_value_4335_);
v___f_4338_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__3___boxed), 14, 6);
lean_closure_set(v___f_4338_, 0, v_value_4335_);
lean_closure_set(v___f_4338_, 1, v_fvarId_4332_);
lean_closure_set(v___f_4338_, 2, v_params_4333_);
lean_closure_set(v___f_4338_, 3, v___x_4337_);
lean_closure_set(v___f_4338_, 4, v_decl_4330_);
lean_closure_set(v___f_4338_, 5, v_type_4334_);
v___x_4339_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewJpScope___redArg(v_decl_4330_, v___f_4338_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4339_) == 0)
{
lean_object* v_a_4340_; lean_object* v_fvarId_4341_; lean_object* v___f_4342_; lean_object* v___x_4343_; 
v_a_4340_ = lean_ctor_get(v___x_4339_, 0);
lean_inc(v_a_4340_);
lean_dec_ref_known(v___x_4339_, 1);
v_fvarId_4341_ = lean_ctor_get(v_a_4340_, 0);
lean_inc(v_fvarId_4341_);
v___f_4342_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__4___boxed), 12, 4);
lean_closure_set(v___f_4342_, 0, v_k_4331_);
lean_closure_set(v___f_4342_, 1, v_a_4340_);
lean_closure_set(v___f_4342_, 2, v_decl_4330_);
lean_closure_set(v___f_4342_, 3, v_code_4272_);
v___x_4343_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary(v_fvarId_4341_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4343_) == 0)
{
lean_object* v___x_4344_; 
lean_dec_ref_known(v___x_4343_, 1);
v___x_4344_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewCandidate___redArg(v_fvarId_4341_, v___f_4342_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
return v___x_4344_;
}
else
{
lean_object* v_a_4345_; lean_object* v___x_4347_; uint8_t v_isShared_4348_; uint8_t v_isSharedCheck_4352_; 
lean_dec_ref(v___f_4342_);
lean_dec(v_fvarId_4341_);
v_a_4345_ = lean_ctor_get(v___x_4343_, 0);
v_isSharedCheck_4352_ = !lean_is_exclusive(v___x_4343_);
if (v_isSharedCheck_4352_ == 0)
{
v___x_4347_ = v___x_4343_;
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
else
{
lean_inc(v_a_4345_);
lean_dec(v___x_4343_);
v___x_4347_ = lean_box(0);
v_isShared_4348_ = v_isSharedCheck_4352_;
goto v_resetjp_4346_;
}
v_resetjp_4346_:
{
lean_object* v___x_4350_; 
if (v_isShared_4348_ == 0)
{
v___x_4350_ = v___x_4347_;
goto v_reusejp_4349_;
}
else
{
lean_object* v_reuseFailAlloc_4351_; 
v_reuseFailAlloc_4351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4351_, 0, v_a_4345_);
v___x_4350_ = v_reuseFailAlloc_4351_;
goto v_reusejp_4349_;
}
v_reusejp_4349_:
{
return v___x_4350_;
}
}
}
}
else
{
lean_object* v_a_4353_; lean_object* v___x_4355_; uint8_t v_isShared_4356_; uint8_t v_isSharedCheck_4360_; 
lean_dec_ref(v_k_4331_);
lean_dec_ref_known(v_code_4272_, 2);
lean_dec_ref(v_decl_4330_);
v_a_4353_ = lean_ctor_get(v___x_4339_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v___x_4339_);
if (v_isSharedCheck_4360_ == 0)
{
v___x_4355_ = v___x_4339_;
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
else
{
lean_inc(v_a_4353_);
lean_dec(v___x_4339_);
v___x_4355_ = lean_box(0);
v_isShared_4356_ = v_isSharedCheck_4360_;
goto v_resetjp_4354_;
}
v_resetjp_4354_:
{
lean_object* v___x_4358_; 
if (v_isShared_4356_ == 0)
{
v___x_4358_ = v___x_4355_;
goto v_reusejp_4357_;
}
else
{
lean_object* v_reuseFailAlloc_4359_; 
v_reuseFailAlloc_4359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4359_, 0, v_a_4353_);
v___x_4358_ = v_reuseFailAlloc_4359_;
goto v_reusejp_4357_;
}
v_reusejp_4357_:
{
return v___x_4358_;
}
}
}
}
case 3:
{
lean_object* v_fvarId_4361_; lean_object* v_args_4362_; lean_object* v___y_4364_; uint8_t v___y_4365_; lean_object* v_newArgs_4378_; size_t v_sz_4383_; size_t v___x_4384_; lean_object* v___x_4385_; 
v_fvarId_4361_ = lean_ctor_get(v_code_4272_, 0);
v_args_4362_ = lean_ctor_get(v_code_4272_, 1);
v_sz_4383_ = lean_array_size(v_args_4362_);
v___x_4384_ = ((size_t)0ULL);
lean_inc_ref(v_args_4362_);
v___x_4385_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__4(v_sz_4383_, v___x_4384_, v_args_4362_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_object* v_a_4386_; lean_object* v___x_4387_; lean_object* v___y_4389_; lean_object* v___x_4408_; lean_object* v_size_4409_; lean_object* v_buckets_4410_; lean_object* v___x_4411_; lean_object* v___x_4412_; lean_object* v___x_4413_; uint8_t v___x_4414_; 
v_a_4386_ = lean_ctor_get(v___x_4385_, 0);
lean_inc(v_a_4386_);
lean_dec_ref_known(v___x_4385_, 1);
v___x_4387_ = lean_st_ref_get(v___y_4274_);
v___x_4408_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0(v___x_4387_, v_fvarId_4361_);
lean_dec(v___x_4387_);
v_size_4409_ = lean_ctor_get(v___x_4408_, 0);
lean_inc(v_size_4409_);
v_buckets_4410_ = lean_ctor_get(v___x_4408_, 1);
lean_inc_ref(v_buckets_4410_);
lean_dec_ref(v___x_4408_);
v___x_4411_ = lean_mk_empty_array_with_capacity(v_size_4409_);
lean_dec(v_size_4409_);
v___x_4412_ = lean_unsigned_to_nat(0u);
v___x_4413_ = lean_array_get_size(v_buckets_4410_);
v___x_4414_ = lean_nat_dec_lt(v___x_4412_, v___x_4413_);
if (v___x_4414_ == 0)
{
lean_dec_ref(v_buckets_4410_);
v___y_4389_ = v___x_4411_;
goto v___jp_4388_;
}
else
{
size_t v___x_4415_; lean_object* v___x_4416_; 
v___x_4415_ = lean_usize_of_nat(v___x_4413_);
v___x_4416_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_JoinPointContextExtender_mergeJpContextIfNecessary_spec__2(v_buckets_4410_, v___x_4384_, v___x_4415_, v___x_4411_);
lean_dec_ref(v_buckets_4410_);
v___y_4389_ = v___x_4416_;
goto v___jp_4388_;
}
v___jp_4388_:
{
lean_object* v_currentJp_x3f_4390_; size_t v_sz_4391_; lean_object* v___x_4392_; 
v_currentJp_x3f_4390_ = lean_ctor_get(v___y_4273_, 0);
v_sz_4391_ = lean_array_size(v___y_4389_);
v___x_4392_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__5(v_sz_4391_, v___x_4384_, v___y_4389_);
if (lean_obj_tag(v_currentJp_x3f_4390_) == 1)
{
size_t v_sz_4393_; lean_object* v___x_4394_; 
v_sz_4393_ = lean_array_size(v___x_4392_);
v___x_4394_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__6(v_sz_4393_, v___x_4384_, v___x_4392_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4394_) == 0)
{
lean_object* v_a_4395_; lean_object* v___x_4396_; 
v_a_4395_ = lean_ctor_get(v___x_4394_, 0);
lean_inc(v_a_4395_);
lean_dec_ref_known(v___x_4394_, 1);
v___x_4396_ = l_Array_append___redArg(v_a_4395_, v_a_4386_);
lean_dec(v_a_4386_);
v_newArgs_4378_ = v___x_4396_;
goto v___jp_4377_;
}
else
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4404_; 
lean_dec(v_a_4386_);
lean_dec_ref_known(v_code_4272_, 2);
v_a_4397_ = lean_ctor_get(v___x_4394_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v___x_4394_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4399_ = v___x_4394_;
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v___x_4394_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4402_; 
if (v_isShared_4400_ == 0)
{
v___x_4402_ = v___x_4399_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_a_4397_);
v___x_4402_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
return v___x_4402_;
}
}
}
}
else
{
size_t v_sz_4405_; lean_object* v___x_4406_; lean_object* v___x_4407_; 
v_sz_4405_ = lean_array_size(v___x_4392_);
v___x_4406_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__7(v_sz_4405_, v___x_4384_, v___x_4392_);
v___x_4407_ = l_Array_append___redArg(v___x_4406_, v_a_4386_);
lean_dec(v_a_4386_);
v_newArgs_4378_ = v___x_4407_;
goto v___jp_4377_;
}
}
}
else
{
lean_object* v_a_4417_; lean_object* v___x_4419_; uint8_t v_isShared_4420_; uint8_t v_isSharedCheck_4424_; 
lean_dec_ref_known(v_code_4272_, 2);
v_a_4417_ = lean_ctor_get(v___x_4385_, 0);
v_isSharedCheck_4424_ = !lean_is_exclusive(v___x_4385_);
if (v_isSharedCheck_4424_ == 0)
{
v___x_4419_ = v___x_4385_;
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
else
{
lean_inc(v_a_4417_);
lean_dec(v___x_4385_);
v___x_4419_ = lean_box(0);
v_isShared_4420_ = v_isSharedCheck_4424_;
goto v_resetjp_4418_;
}
v_resetjp_4418_:
{
lean_object* v___x_4422_; 
if (v_isShared_4420_ == 0)
{
v___x_4422_ = v___x_4419_;
goto v_reusejp_4421_;
}
else
{
lean_object* v_reuseFailAlloc_4423_; 
v_reuseFailAlloc_4423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4423_, 0, v_a_4417_);
v___x_4422_ = v_reuseFailAlloc_4423_;
goto v_reusejp_4421_;
}
v_reusejp_4421_:
{
return v___x_4422_;
}
}
}
v___jp_4363_:
{
if (v___y_4365_ == 0)
{
lean_object* v___x_4367_; uint8_t v_isShared_4368_; uint8_t v_isSharedCheck_4373_; 
lean_inc(v_fvarId_4361_);
v_isSharedCheck_4373_ = !lean_is_exclusive(v_code_4272_);
if (v_isSharedCheck_4373_ == 0)
{
lean_object* v_unused_4374_; lean_object* v_unused_4375_; 
v_unused_4374_ = lean_ctor_get(v_code_4272_, 1);
lean_dec(v_unused_4374_);
v_unused_4375_ = lean_ctor_get(v_code_4272_, 0);
lean_dec(v_unused_4375_);
v___x_4367_ = v_code_4272_;
v_isShared_4368_ = v_isSharedCheck_4373_;
goto v_resetjp_4366_;
}
else
{
lean_dec(v_code_4272_);
v___x_4367_ = lean_box(0);
v_isShared_4368_ = v_isSharedCheck_4373_;
goto v_resetjp_4366_;
}
v_resetjp_4366_:
{
lean_object* v___x_4370_; 
if (v_isShared_4368_ == 0)
{
lean_ctor_set(v___x_4367_, 1, v___y_4364_);
v___x_4370_ = v___x_4367_;
goto v_reusejp_4369_;
}
else
{
lean_object* v_reuseFailAlloc_4372_; 
v_reuseFailAlloc_4372_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4372_, 0, v_fvarId_4361_);
lean_ctor_set(v_reuseFailAlloc_4372_, 1, v___y_4364_);
v___x_4370_ = v_reuseFailAlloc_4372_;
goto v_reusejp_4369_;
}
v_reusejp_4369_:
{
lean_object* v___x_4371_; 
v___x_4371_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4371_, 0, v___x_4370_);
return v___x_4371_;
}
}
}
else
{
lean_object* v___x_4376_; 
lean_dec_ref(v___y_4364_);
v___x_4376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4376_, 0, v_code_4272_);
return v___x_4376_;
}
}
v___jp_4377_:
{
uint8_t v___x_4379_; 
v___x_4379_ = l_Lean_instBEqFVarId_beq(v_fvarId_4361_, v_fvarId_4361_);
if (v___x_4379_ == 0)
{
v___y_4364_ = v_newArgs_4378_;
v___y_4365_ = v___x_4379_;
goto v___jp_4363_;
}
else
{
size_t v___x_4380_; size_t v___x_4381_; uint8_t v___x_4382_; 
v___x_4380_ = lean_ptr_addr(v_args_4362_);
v___x_4381_ = lean_ptr_addr(v_newArgs_4378_);
v___x_4382_ = lean_usize_dec_eq(v___x_4380_, v___x_4381_);
v___y_4364_ = v_newArgs_4378_;
v___y_4365_ = v___x_4382_;
goto v___jp_4363_;
}
}
}
case 4:
{
lean_object* v_cases_4425_; lean_object* v_typeName_4426_; lean_object* v_resultType_4427_; lean_object* v_discr_4428_; lean_object* v_alts_4429_; lean_object* v___x_4431_; uint8_t v_isShared_4432_; uint8_t v_isSharedCheck_4488_; 
v_cases_4425_ = lean_ctor_get(v_code_4272_, 0);
lean_inc_ref(v_cases_4425_);
v_typeName_4426_ = lean_ctor_get(v_cases_4425_, 0);
v_resultType_4427_ = lean_ctor_get(v_cases_4425_, 1);
v_discr_4428_ = lean_ctor_get(v_cases_4425_, 2);
v_alts_4429_ = lean_ctor_get(v_cases_4425_, 3);
v_isSharedCheck_4488_ = !lean_is_exclusive(v_cases_4425_);
if (v_isSharedCheck_4488_ == 0)
{
v___x_4431_ = v_cases_4425_;
v_isShared_4432_ = v_isSharedCheck_4488_;
goto v_resetjp_4430_;
}
else
{
lean_inc(v_alts_4429_);
lean_inc(v_discr_4428_);
lean_inc(v_resultType_4427_);
lean_inc(v_typeName_4426_);
lean_dec(v_cases_4425_);
v___x_4431_ = lean_box(0);
v_isShared_4432_ = v_isSharedCheck_4488_;
goto v_resetjp_4430_;
}
v_resetjp_4430_:
{
lean_object* v___x_4433_; 
lean_inc(v_discr_4428_);
v___x_4433_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(v_discr_4428_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4433_) == 0)
{
lean_object* v___x_4434_; 
lean_dec_ref_known(v___x_4433_, 1);
lean_inc(v_discr_4428_);
v___x_4434_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg(v_discr_4428_, v___y_4273_, v___y_4274_);
if (lean_obj_tag(v___x_4434_) == 0)
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4471_; 
v_a_4435_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4471_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4471_ == 0)
{
v___x_4437_ = v___x_4434_;
v_isShared_4438_ = v_isSharedCheck_4471_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4434_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4471_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4439_; lean_object* v___x_4440_; 
v___x_4439_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_4429_);
v___x_4440_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__9(v___x_4439_, v_alts_4429_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4440_) == 0)
{
lean_object* v_a_4441_; lean_object* v___x_4443_; uint8_t v_isShared_4444_; uint8_t v_isSharedCheck_4462_; 
v_a_4441_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4462_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4462_ == 0)
{
v___x_4443_ = v___x_4440_;
v_isShared_4444_ = v_isSharedCheck_4462_;
goto v_resetjp_4442_;
}
else
{
lean_inc(v_a_4441_);
lean_dec(v___x_4440_);
v___x_4443_ = lean_box(0);
v_isShared_4444_ = v_isSharedCheck_4462_;
goto v_resetjp_4442_;
}
v_resetjp_4442_:
{
size_t v___x_4453_; size_t v___x_4454_; uint8_t v___x_4455_; 
v___x_4453_ = lean_ptr_addr(v_alts_4429_);
lean_dec_ref(v_alts_4429_);
v___x_4454_ = lean_ptr_addr(v_a_4441_);
v___x_4455_ = lean_usize_dec_eq(v___x_4453_, v___x_4454_);
if (v___x_4455_ == 0)
{
lean_del_object(v___x_4437_);
lean_dec(v_discr_4428_);
lean_dec_ref_known(v_code_4272_, 1);
goto v___jp_4445_;
}
else
{
size_t v___x_4456_; uint8_t v___x_4457_; 
v___x_4456_ = lean_ptr_addr(v_resultType_4427_);
v___x_4457_ = lean_usize_dec_eq(v___x_4456_, v___x_4456_);
if (v___x_4457_ == 0)
{
lean_del_object(v___x_4437_);
lean_dec(v_discr_4428_);
lean_dec_ref_known(v_code_4272_, 1);
goto v___jp_4445_;
}
else
{
uint8_t v___x_4458_; 
v___x_4458_ = l_Lean_instBEqFVarId_beq(v_discr_4428_, v_a_4435_);
lean_dec(v_discr_4428_);
if (v___x_4458_ == 0)
{
lean_del_object(v___x_4437_);
lean_dec_ref_known(v_code_4272_, 1);
goto v___jp_4445_;
}
else
{
lean_object* v___x_4460_; 
lean_del_object(v___x_4443_);
lean_dec(v_a_4441_);
lean_dec(v_a_4435_);
lean_del_object(v___x_4431_);
lean_dec_ref(v_resultType_4427_);
lean_dec(v_typeName_4426_);
if (v_isShared_4438_ == 0)
{
lean_ctor_set(v___x_4437_, 0, v_code_4272_);
v___x_4460_ = v___x_4437_;
goto v_reusejp_4459_;
}
else
{
lean_object* v_reuseFailAlloc_4461_; 
v_reuseFailAlloc_4461_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4461_, 0, v_code_4272_);
v___x_4460_ = v_reuseFailAlloc_4461_;
goto v_reusejp_4459_;
}
v_reusejp_4459_:
{
return v___x_4460_;
}
}
}
}
v___jp_4445_:
{
lean_object* v___x_4447_; 
if (v_isShared_4432_ == 0)
{
lean_ctor_set(v___x_4431_, 3, v_a_4441_);
lean_ctor_set(v___x_4431_, 2, v_a_4435_);
v___x_4447_ = v___x_4431_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4452_; 
v_reuseFailAlloc_4452_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_4452_, 0, v_typeName_4426_);
lean_ctor_set(v_reuseFailAlloc_4452_, 1, v_resultType_4427_);
lean_ctor_set(v_reuseFailAlloc_4452_, 2, v_a_4435_);
lean_ctor_set(v_reuseFailAlloc_4452_, 3, v_a_4441_);
v___x_4447_ = v_reuseFailAlloc_4452_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
lean_object* v___x_4448_; lean_object* v___x_4450_; 
v___x_4448_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4448_, 0, v___x_4447_);
if (v_isShared_4444_ == 0)
{
lean_ctor_set(v___x_4443_, 0, v___x_4448_);
v___x_4450_ = v___x_4443_;
goto v_reusejp_4449_;
}
else
{
lean_object* v_reuseFailAlloc_4451_; 
v_reuseFailAlloc_4451_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4451_, 0, v___x_4448_);
v___x_4450_ = v_reuseFailAlloc_4451_;
goto v_reusejp_4449_;
}
v_reusejp_4449_:
{
return v___x_4450_;
}
}
}
}
}
else
{
lean_object* v_a_4463_; lean_object* v___x_4465_; uint8_t v_isShared_4466_; uint8_t v_isSharedCheck_4470_; 
lean_del_object(v___x_4437_);
lean_dec(v_a_4435_);
lean_del_object(v___x_4431_);
lean_dec_ref(v_alts_4429_);
lean_dec(v_discr_4428_);
lean_dec_ref(v_resultType_4427_);
lean_dec(v_typeName_4426_);
lean_dec_ref_known(v_code_4272_, 1);
v_a_4463_ = lean_ctor_get(v___x_4440_, 0);
v_isSharedCheck_4470_ = !lean_is_exclusive(v___x_4440_);
if (v_isSharedCheck_4470_ == 0)
{
v___x_4465_ = v___x_4440_;
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
else
{
lean_inc(v_a_4463_);
lean_dec(v___x_4440_);
v___x_4465_ = lean_box(0);
v_isShared_4466_ = v_isSharedCheck_4470_;
goto v_resetjp_4464_;
}
v_resetjp_4464_:
{
lean_object* v___x_4468_; 
if (v_isShared_4466_ == 0)
{
v___x_4468_ = v___x_4465_;
goto v_reusejp_4467_;
}
else
{
lean_object* v_reuseFailAlloc_4469_; 
v_reuseFailAlloc_4469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4469_, 0, v_a_4463_);
v___x_4468_ = v_reuseFailAlloc_4469_;
goto v_reusejp_4467_;
}
v_reusejp_4467_:
{
return v___x_4468_;
}
}
}
}
}
else
{
lean_object* v_a_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4479_; 
lean_del_object(v___x_4431_);
lean_dec_ref(v_alts_4429_);
lean_dec(v_discr_4428_);
lean_dec_ref(v_resultType_4427_);
lean_dec(v_typeName_4426_);
lean_dec_ref_known(v_code_4272_, 1);
v_a_4472_ = lean_ctor_get(v___x_4434_, 0);
v_isSharedCheck_4479_ = !lean_is_exclusive(v___x_4434_);
if (v_isSharedCheck_4479_ == 0)
{
v___x_4474_ = v___x_4434_;
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_a_4472_);
lean_dec(v___x_4434_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4479_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v___x_4477_; 
if (v_isShared_4475_ == 0)
{
v___x_4477_ = v___x_4474_;
goto v_reusejp_4476_;
}
else
{
lean_object* v_reuseFailAlloc_4478_; 
v_reuseFailAlloc_4478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4478_, 0, v_a_4472_);
v___x_4477_ = v_reuseFailAlloc_4478_;
goto v_reusejp_4476_;
}
v_reusejp_4476_:
{
return v___x_4477_;
}
}
}
}
else
{
lean_object* v_a_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4487_; 
lean_del_object(v___x_4431_);
lean_dec_ref(v_alts_4429_);
lean_dec(v_discr_4428_);
lean_dec_ref(v_resultType_4427_);
lean_dec(v_typeName_4426_);
lean_dec_ref_known(v_code_4272_, 1);
v_a_4480_ = lean_ctor_get(v___x_4433_, 0);
v_isSharedCheck_4487_ = !lean_is_exclusive(v___x_4433_);
if (v_isSharedCheck_4487_ == 0)
{
v___x_4482_ = v___x_4433_;
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_a_4480_);
lean_dec(v___x_4433_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4487_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4485_; 
if (v_isShared_4483_ == 0)
{
v___x_4485_ = v___x_4482_;
goto v_reusejp_4484_;
}
else
{
lean_object* v_reuseFailAlloc_4486_; 
v_reuseFailAlloc_4486_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4486_, 0, v_a_4480_);
v___x_4485_ = v_reuseFailAlloc_4486_;
goto v_reusejp_4484_;
}
v_reusejp_4484_:
{
return v___x_4485_;
}
}
}
}
}
case 5:
{
lean_object* v_fvarId_4489_; lean_object* v___x_4490_; 
v_fvarId_4489_ = lean_ctor_get(v_code_4272_, 0);
lean_inc(v_fvarId_4489_);
v___x_4490_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_extendByIfNecessary(v_fvarId_4489_, v___y_4273_, v___y_4274_, v___y_4275_, v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_);
if (lean_obj_tag(v___x_4490_) == 0)
{
lean_object* v___x_4491_; 
lean_dec_ref_known(v___x_4490_, 1);
lean_inc(v_fvarId_4489_);
v___x_4491_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar___redArg(v_fvarId_4489_, v___y_4273_, v___y_4274_);
if (lean_obj_tag(v___x_4491_) == 0)
{
lean_object* v_a_4492_; lean_object* v___x_4494_; uint8_t v_isShared_4495_; uint8_t v_isSharedCheck_4511_; 
v_a_4492_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4511_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4511_ == 0)
{
v___x_4494_ = v___x_4491_;
v_isShared_4495_ = v_isSharedCheck_4511_;
goto v_resetjp_4493_;
}
else
{
lean_inc(v_a_4492_);
lean_dec(v___x_4491_);
v___x_4494_ = lean_box(0);
v_isShared_4495_ = v_isSharedCheck_4511_;
goto v_resetjp_4493_;
}
v_resetjp_4493_:
{
uint8_t v___x_4496_; 
v___x_4496_ = l_Lean_instBEqFVarId_beq(v_fvarId_4489_, v_a_4492_);
if (v___x_4496_ == 0)
{
lean_object* v___x_4498_; uint8_t v_isShared_4499_; uint8_t v_isSharedCheck_4506_; 
v_isSharedCheck_4506_ = !lean_is_exclusive(v_code_4272_);
if (v_isSharedCheck_4506_ == 0)
{
lean_object* v_unused_4507_; 
v_unused_4507_ = lean_ctor_get(v_code_4272_, 0);
lean_dec(v_unused_4507_);
v___x_4498_ = v_code_4272_;
v_isShared_4499_ = v_isSharedCheck_4506_;
goto v_resetjp_4497_;
}
else
{
lean_dec(v_code_4272_);
v___x_4498_ = lean_box(0);
v_isShared_4499_ = v_isSharedCheck_4506_;
goto v_resetjp_4497_;
}
v_resetjp_4497_:
{
lean_object* v___x_4501_; 
if (v_isShared_4499_ == 0)
{
lean_ctor_set(v___x_4498_, 0, v_a_4492_);
v___x_4501_ = v___x_4498_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4505_; 
v_reuseFailAlloc_4505_ = lean_alloc_ctor(5, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4505_, 0, v_a_4492_);
v___x_4501_ = v_reuseFailAlloc_4505_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
lean_object* v___x_4503_; 
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v___x_4501_);
v___x_4503_ = v___x_4494_;
goto v_reusejp_4502_;
}
else
{
lean_object* v_reuseFailAlloc_4504_; 
v_reuseFailAlloc_4504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4504_, 0, v___x_4501_);
v___x_4503_ = v_reuseFailAlloc_4504_;
goto v_reusejp_4502_;
}
v_reusejp_4502_:
{
return v___x_4503_;
}
}
}
}
else
{
lean_object* v___x_4509_; 
lean_dec(v_a_4492_);
if (v_isShared_4495_ == 0)
{
lean_ctor_set(v___x_4494_, 0, v_code_4272_);
v___x_4509_ = v___x_4494_;
goto v_reusejp_4508_;
}
else
{
lean_object* v_reuseFailAlloc_4510_; 
v_reuseFailAlloc_4510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4510_, 0, v_code_4272_);
v___x_4509_ = v_reuseFailAlloc_4510_;
goto v_reusejp_4508_;
}
v_reusejp_4508_:
{
return v___x_4509_;
}
}
}
}
else
{
lean_object* v_a_4512_; lean_object* v___x_4514_; uint8_t v_isShared_4515_; uint8_t v_isSharedCheck_4519_; 
lean_dec_ref_known(v_code_4272_, 1);
v_a_4512_ = lean_ctor_get(v___x_4491_, 0);
v_isSharedCheck_4519_ = !lean_is_exclusive(v___x_4491_);
if (v_isSharedCheck_4519_ == 0)
{
v___x_4514_ = v___x_4491_;
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
else
{
lean_inc(v_a_4512_);
lean_dec(v___x_4491_);
v___x_4514_ = lean_box(0);
v_isShared_4515_ = v_isSharedCheck_4519_;
goto v_resetjp_4513_;
}
v_resetjp_4513_:
{
lean_object* v___x_4517_; 
if (v_isShared_4515_ == 0)
{
v___x_4517_ = v___x_4514_;
goto v_reusejp_4516_;
}
else
{
lean_object* v_reuseFailAlloc_4518_; 
v_reuseFailAlloc_4518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4518_, 0, v_a_4512_);
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
else
{
lean_object* v_a_4520_; lean_object* v___x_4522_; uint8_t v_isShared_4523_; uint8_t v_isSharedCheck_4527_; 
lean_dec_ref_known(v_code_4272_, 1);
v_a_4520_ = lean_ctor_get(v___x_4490_, 0);
v_isSharedCheck_4527_ = !lean_is_exclusive(v___x_4490_);
if (v_isSharedCheck_4527_ == 0)
{
v___x_4522_ = v___x_4490_;
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
else
{
lean_inc(v_a_4520_);
lean_dec(v___x_4490_);
v___x_4522_ = lean_box(0);
v_isShared_4523_ = v_isSharedCheck_4527_;
goto v_resetjp_4521_;
}
v_resetjp_4521_:
{
lean_object* v___x_4525_; 
if (v_isShared_4523_ == 0)
{
v___x_4525_ = v___x_4522_;
goto v_reusejp_4524_;
}
else
{
lean_object* v_reuseFailAlloc_4526_; 
v_reuseFailAlloc_4526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4526_, 0, v_a_4520_);
v___x_4525_ = v_reuseFailAlloc_4526_;
goto v_reusejp_4524_;
}
v_reusejp_4524_:
{
return v___x_4525_;
}
}
}
}
default: 
{
lean_object* v___x_4528_; 
v___x_4528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4528_, 0, v_code_4272_);
return v___x_4528_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go___lam__1(lean_object* v_value_4529_, uint8_t v___x_4530_, lean_object* v_decl_4531_, lean_object* v_type_4532_, lean_object* v_params_4533_, lean_object* v___y_4534_, lean_object* v___y_4535_, lean_object* v___y_4536_, lean_object* v___y_4537_, lean_object* v___y_4538_, lean_object* v___y_4539_, lean_object* v___y_4540_){
_start:
{
lean_object* v___x_4542_; 
v___x_4542_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go(v_value_4529_, v___y_4534_, v___y_4535_, v___y_4536_, v___y_4537_, v___y_4538_, v___y_4539_, v___y_4540_);
if (lean_obj_tag(v___x_4542_) == 0)
{
lean_object* v_a_4543_; lean_object* v___x_4544_; 
v_a_4543_ = lean_ctor_get(v___x_4542_, 0);
lean_inc(v_a_4543_);
lean_dec_ref_known(v___x_4542_, 1);
v___x_4544_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_4530_, v_decl_4531_, v_type_4532_, v_params_4533_, v_a_4543_, v___y_4538_);
return v___x_4544_;
}
else
{
lean_object* v_a_4545_; lean_object* v___x_4547_; uint8_t v_isShared_4548_; uint8_t v_isSharedCheck_4552_; 
lean_dec_ref(v_params_4533_);
lean_dec_ref(v_type_4532_);
lean_dec_ref(v_decl_4531_);
v_a_4545_ = lean_ctor_get(v___x_4542_, 0);
v_isSharedCheck_4552_ = !lean_is_exclusive(v___x_4542_);
if (v_isSharedCheck_4552_ == 0)
{
v___x_4547_ = v___x_4542_;
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
else
{
lean_inc(v_a_4545_);
lean_dec(v___x_4542_);
v___x_4547_ = lean_box(0);
v_isShared_4548_ = v_isSharedCheck_4552_;
goto v_resetjp_4546_;
}
v_resetjp_4546_:
{
lean_object* v___x_4550_; 
if (v_isShared_4548_ == 0)
{
v___x_4550_ = v___x_4547_;
goto v_reusejp_4549_;
}
else
{
lean_object* v_reuseFailAlloc_4551_; 
v_reuseFailAlloc_4551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4551_, 0, v_a_4545_);
v___x_4550_ = v_reuseFailAlloc_4551_;
goto v_reusejp_4549_;
}
v_reusejp_4549_:
{
return v___x_4550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__9___boxed(lean_object* v_i_4553_, lean_object* v_as_4554_, lean_object* v___y_4555_, lean_object* v___y_4556_, lean_object* v___y_4557_, lean_object* v___y_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_){
_start:
{
lean_object* v_res_4563_; 
v_res_4563_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointContextExtender_extend_go_spec__9(v_i_4553_, v_as_4554_, v___y_4555_, v___y_4556_, v___y_4557_, v___y_4558_, v___y_4559_, v___y_4560_, v___y_4561_);
lean_dec(v___y_4561_);
lean_dec_ref(v___y_4560_);
lean_dec(v___y_4559_);
lean_dec_ref(v___y_4558_);
lean_dec(v___y_4557_);
lean_dec(v___y_4556_);
lean_dec_ref(v___y_4555_);
return v_res_4563_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___redArg(lean_object* v_f_4564_, lean_object* v_v_4565_, lean_object* v___y_4566_, lean_object* v___y_4567_, lean_object* v___y_4568_, lean_object* v___y_4569_, lean_object* v___y_4570_, lean_object* v___y_4571_, lean_object* v___y_4572_){
_start:
{
if (lean_obj_tag(v_v_4565_) == 0)
{
lean_object* v_code_4574_; lean_object* v___x_4576_; uint8_t v_isShared_4577_; uint8_t v_isSharedCheck_4598_; 
v_code_4574_ = lean_ctor_get(v_v_4565_, 0);
v_isSharedCheck_4598_ = !lean_is_exclusive(v_v_4565_);
if (v_isSharedCheck_4598_ == 0)
{
v___x_4576_ = v_v_4565_;
v_isShared_4577_ = v_isSharedCheck_4598_;
goto v_resetjp_4575_;
}
else
{
lean_inc(v_code_4574_);
lean_dec(v_v_4565_);
v___x_4576_ = lean_box(0);
v_isShared_4577_ = v_isSharedCheck_4598_;
goto v_resetjp_4575_;
}
v_resetjp_4575_:
{
lean_object* v___x_4578_; 
lean_inc(v___y_4572_);
lean_inc_ref(v___y_4571_);
lean_inc(v___y_4570_);
lean_inc_ref(v___y_4569_);
lean_inc(v___y_4568_);
lean_inc(v___y_4567_);
lean_inc_ref(v___y_4566_);
v___x_4578_ = lean_apply_9(v_f_4564_, v_code_4574_, v___y_4566_, v___y_4567_, v___y_4568_, v___y_4569_, v___y_4570_, v___y_4571_, v___y_4572_, lean_box(0));
if (lean_obj_tag(v___x_4578_) == 0)
{
lean_object* v_a_4579_; lean_object* v___x_4581_; uint8_t v_isShared_4582_; uint8_t v_isSharedCheck_4589_; 
v_a_4579_ = lean_ctor_get(v___x_4578_, 0);
v_isSharedCheck_4589_ = !lean_is_exclusive(v___x_4578_);
if (v_isSharedCheck_4589_ == 0)
{
v___x_4581_ = v___x_4578_;
v_isShared_4582_ = v_isSharedCheck_4589_;
goto v_resetjp_4580_;
}
else
{
lean_inc(v_a_4579_);
lean_dec(v___x_4578_);
v___x_4581_ = lean_box(0);
v_isShared_4582_ = v_isSharedCheck_4589_;
goto v_resetjp_4580_;
}
v_resetjp_4580_:
{
lean_object* v___x_4584_; 
if (v_isShared_4577_ == 0)
{
lean_ctor_set(v___x_4576_, 0, v_a_4579_);
v___x_4584_ = v___x_4576_;
goto v_reusejp_4583_;
}
else
{
lean_object* v_reuseFailAlloc_4588_; 
v_reuseFailAlloc_4588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4588_, 0, v_a_4579_);
v___x_4584_ = v_reuseFailAlloc_4588_;
goto v_reusejp_4583_;
}
v_reusejp_4583_:
{
lean_object* v___x_4586_; 
if (v_isShared_4582_ == 0)
{
lean_ctor_set(v___x_4581_, 0, v___x_4584_);
v___x_4586_ = v___x_4581_;
goto v_reusejp_4585_;
}
else
{
lean_object* v_reuseFailAlloc_4587_; 
v_reuseFailAlloc_4587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4587_, 0, v___x_4584_);
v___x_4586_ = v_reuseFailAlloc_4587_;
goto v_reusejp_4585_;
}
v_reusejp_4585_:
{
return v___x_4586_;
}
}
}
}
else
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4597_; 
lean_del_object(v___x_4576_);
v_a_4590_ = lean_ctor_get(v___x_4578_, 0);
v_isSharedCheck_4597_ = !lean_is_exclusive(v___x_4578_);
if (v_isSharedCheck_4597_ == 0)
{
v___x_4592_ = v___x_4578_;
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v___x_4578_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4597_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4595_; 
if (v_isShared_4593_ == 0)
{
v___x_4595_ = v___x_4592_;
goto v_reusejp_4594_;
}
else
{
lean_object* v_reuseFailAlloc_4596_; 
v_reuseFailAlloc_4596_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4596_, 0, v_a_4590_);
v___x_4595_ = v_reuseFailAlloc_4596_;
goto v_reusejp_4594_;
}
v_reusejp_4594_:
{
return v___x_4595_;
}
}
}
}
}
else
{
lean_object* v___x_4599_; 
lean_dec_ref(v_f_4564_);
v___x_4599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4599_, 0, v_v_4565_);
return v___x_4599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___redArg___boxed(lean_object* v_f_4600_, lean_object* v_v_4601_, lean_object* v___y_4602_, lean_object* v___y_4603_, lean_object* v___y_4604_, lean_object* v___y_4605_, lean_object* v___y_4606_, lean_object* v___y_4607_, lean_object* v___y_4608_, lean_object* v___y_4609_){
_start:
{
lean_object* v_res_4610_; 
v_res_4610_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___redArg(v_f_4600_, v_v_4601_, v___y_4602_, v___y_4603_, v___y_4604_, v___y_4605_, v___y_4606_, v___y_4607_, v___y_4608_);
lean_dec(v___y_4608_);
lean_dec_ref(v___y_4607_);
lean_dec(v___y_4606_);
lean_dec_ref(v___y_4605_);
lean_dec(v___y_4604_);
lean_dec(v___y_4603_);
lean_dec_ref(v___y_4602_);
return v_res_4610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0(uint8_t v_pu_4611_, lean_object* v_f_4612_, lean_object* v_v_4613_, lean_object* v___y_4614_, lean_object* v___y_4615_, lean_object* v___y_4616_, lean_object* v___y_4617_, lean_object* v___y_4618_, lean_object* v___y_4619_, lean_object* v___y_4620_){
_start:
{
lean_object* v___x_4622_; 
v___x_4622_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___redArg(v_f_4612_, v_v_4613_, v___y_4614_, v___y_4615_, v___y_4616_, v___y_4617_, v___y_4618_, v___y_4619_, v___y_4620_);
return v___x_4622_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___boxed(lean_object* v_pu_4623_, lean_object* v_f_4624_, lean_object* v_v_4625_, lean_object* v___y_4626_, lean_object* v___y_4627_, lean_object* v___y_4628_, lean_object* v___y_4629_, lean_object* v___y_4630_, lean_object* v___y_4631_, lean_object* v___y_4632_, lean_object* v___y_4633_){
_start:
{
uint8_t v_pu_boxed_4634_; lean_object* v_res_4635_; 
v_pu_boxed_4634_ = lean_unbox(v_pu_4623_);
v_res_4635_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0(v_pu_boxed_4634_, v_f_4624_, v_v_4625_, v___y_4626_, v___y_4627_, v___y_4628_, v___y_4629_, v___y_4630_, v___y_4631_, v___y_4632_);
lean_dec(v___y_4632_);
lean_dec_ref(v___y_4631_);
lean_dec(v___y_4630_);
lean_dec_ref(v___y_4629_);
lean_dec(v___y_4628_);
lean_dec(v___y_4627_);
lean_dec_ref(v___y_4626_);
return v_res_4635_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend(lean_object* v_decl_4637_, lean_object* v___y_4638_, lean_object* v___y_4639_, lean_object* v___y_4640_, lean_object* v___y_4641_){
_start:
{
lean_object* v_toSignature_4643_; lean_object* v_value_4644_; uint8_t v_recursive_4645_; lean_object* v_inlineAttr_x3f_4646_; lean_object* v___x_4648_; uint8_t v_isShared_4649_; uint8_t v_isSharedCheck_4672_; 
v_toSignature_4643_ = lean_ctor_get(v_decl_4637_, 0);
v_value_4644_ = lean_ctor_get(v_decl_4637_, 1);
v_recursive_4645_ = lean_ctor_get_uint8(v_decl_4637_, sizeof(void*)*3);
v_inlineAttr_x3f_4646_ = lean_ctor_get(v_decl_4637_, 2);
v_isSharedCheck_4672_ = !lean_is_exclusive(v_decl_4637_);
if (v_isSharedCheck_4672_ == 0)
{
v___x_4648_ = v_decl_4637_;
v_isShared_4649_ = v_isSharedCheck_4672_;
goto v_resetjp_4647_;
}
else
{
lean_inc(v_inlineAttr_x3f_4646_);
lean_inc(v_value_4644_);
lean_inc(v_toSignature_4643_);
lean_dec(v_decl_4637_);
v___x_4648_ = lean_box(0);
v_isShared_4649_ = v_isSharedCheck_4672_;
goto v_resetjp_4647_;
}
v_resetjp_4647_:
{
lean_object* v___x_4650_; lean_object* v___x_4651_; lean_object* v___x_4652_; lean_object* v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; lean_object* v___x_4656_; 
v___x_4650_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_extend___closed__0));
v___x_4651_ = lean_box(1);
v___x_4652_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointContextExtender_withNewFunScope___redArg___closed__0));
v___x_4653_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1);
v___x_4654_ = lean_st_mk_ref(v___x_4651_);
v___x_4655_ = lean_st_mk_ref(v___x_4653_);
v___x_4656_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointContextExtender_extend_spec__0___redArg(v___x_4650_, v_value_4644_, v___x_4652_, v___x_4655_, v___x_4654_, v___y_4638_, v___y_4639_, v___y_4640_, v___y_4641_);
if (lean_obj_tag(v___x_4656_) == 0)
{
lean_object* v_a_4657_; lean_object* v___x_4658_; lean_object* v___x_4659_; lean_object* v___x_4661_; 
v_a_4657_ = lean_ctor_get(v___x_4656_, 0);
lean_inc(v_a_4657_);
lean_dec_ref_known(v___x_4656_, 1);
v___x_4658_ = lean_st_ref_get(v___x_4655_);
lean_dec(v___x_4655_);
lean_dec(v___x_4658_);
v___x_4659_ = lean_st_ref_get(v___x_4654_);
lean_dec(v___x_4654_);
lean_dec(v___x_4659_);
if (v_isShared_4649_ == 0)
{
lean_ctor_set(v___x_4648_, 1, v_a_4657_);
v___x_4661_ = v___x_4648_;
goto v_reusejp_4660_;
}
else
{
lean_object* v_reuseFailAlloc_4663_; 
v_reuseFailAlloc_4663_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_4663_, 0, v_toSignature_4643_);
lean_ctor_set(v_reuseFailAlloc_4663_, 1, v_a_4657_);
lean_ctor_set(v_reuseFailAlloc_4663_, 2, v_inlineAttr_x3f_4646_);
lean_ctor_set_uint8(v_reuseFailAlloc_4663_, sizeof(void*)*3, v_recursive_4645_);
v___x_4661_ = v_reuseFailAlloc_4663_;
goto v_reusejp_4660_;
}
v_reusejp_4660_:
{
lean_object* v___x_4662_; 
v___x_4662_ = l_Lean_Compiler_LCNF_Decl_pullFunDecls(v___x_4661_, v___y_4638_, v___y_4639_, v___y_4640_, v___y_4641_);
return v___x_4662_;
}
}
else
{
lean_object* v_a_4664_; lean_object* v___x_4666_; uint8_t v_isShared_4667_; uint8_t v_isSharedCheck_4671_; 
lean_dec(v___x_4655_);
lean_dec(v___x_4654_);
lean_del_object(v___x_4648_);
lean_dec(v_inlineAttr_x3f_4646_);
lean_dec_ref(v_toSignature_4643_);
v_a_4664_ = lean_ctor_get(v___x_4656_, 0);
v_isSharedCheck_4671_ = !lean_is_exclusive(v___x_4656_);
if (v_isSharedCheck_4671_ == 0)
{
v___x_4666_ = v___x_4656_;
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
else
{
lean_inc(v_a_4664_);
lean_dec(v___x_4656_);
v___x_4666_ = lean_box(0);
v_isShared_4667_ = v_isSharedCheck_4671_;
goto v_resetjp_4665_;
}
v_resetjp_4665_:
{
lean_object* v___x_4669_; 
if (v_isShared_4667_ == 0)
{
v___x_4669_ = v___x_4666_;
goto v_reusejp_4668_;
}
else
{
lean_object* v_reuseFailAlloc_4670_; 
v_reuseFailAlloc_4670_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4670_, 0, v_a_4664_);
v___x_4669_ = v_reuseFailAlloc_4670_;
goto v_reusejp_4668_;
}
v_reusejp_4668_:
{
return v___x_4669_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointContextExtender_extend___boxed(lean_object* v_decl_4673_, lean_object* v___y_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_){
_start:
{
lean_object* v_res_4679_; 
v_res_4679_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend(v_decl_4673_, v___y_4674_, v___y_4675_, v___y_4676_, v___y_4677_);
lean_dec(v___y_4677_);
lean_dec_ref(v___y_4676_);
lean_dec(v___y_4675_);
lean_dec_ref(v___y_4674_);
return v_res_4679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___redArg(lean_object* v_jp_4680_, lean_object* v_var_4681_, lean_object* v___y_4682_){
_start:
{
lean_object* v___x_4684_; lean_object* v___x_4685_; uint8_t v___x_4686_; lean_object* v___x_4687_; lean_object* v___x_4688_; 
v___x_4684_ = lean_box(1);
lean_inc(v___y_4682_);
v___x_4685_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_4684_, v___y_4682_, v_jp_4680_);
v___x_4686_ = l_Lean_FVarIdSet_contains(v___x_4685_, v_var_4681_);
lean_dec(v___x_4685_);
v___x_4687_ = lean_box(v___x_4686_);
v___x_4688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4688_, 0, v___x_4687_);
return v___x_4688_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___redArg___boxed(lean_object* v_jp_4689_, lean_object* v_var_4690_, lean_object* v___y_4691_, lean_object* v___y_4692_){
_start:
{
lean_object* v_res_4693_; 
v_res_4693_ = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___redArg(v_jp_4689_, v_var_4690_, v___y_4691_);
lean_dec(v___y_4691_);
lean_dec(v_var_4690_);
return v_res_4693_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope(lean_object* v_jp_4694_, lean_object* v_var_4695_, lean_object* v___y_4696_, lean_object* v___y_4697_, lean_object* v___y_4698_, lean_object* v___y_4699_, lean_object* v___y_4700_, lean_object* v___y_4701_, lean_object* v___y_4702_){
_start:
{
lean_object* v___x_4704_; 
v___x_4704_ = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___redArg(v_jp_4694_, v_var_4695_, v___y_4696_);
return v___x_4704_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___boxed(lean_object* v_jp_4705_, lean_object* v_var_4706_, lean_object* v___y_4707_, lean_object* v___y_4708_, lean_object* v___y_4709_, lean_object* v___y_4710_, lean_object* v___y_4711_, lean_object* v___y_4712_, lean_object* v___y_4713_, lean_object* v___y_4714_){
_start:
{
lean_object* v_res_4715_; 
v_res_4715_ = l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope(v_jp_4705_, v_var_4706_, v___y_4707_, v___y_4708_, v___y_4709_, v___y_4710_, v___y_4711_, v___y_4712_, v___y_4713_);
lean_dec(v___y_4713_);
lean_dec_ref(v___y_4712_);
lean_dec(v___y_4711_);
lean_dec_ref(v___y_4710_);
lean_dec(v___y_4709_);
lean_dec(v___y_4708_);
lean_dec(v___y_4707_);
lean_dec(v_var_4706_);
return v_res_4715_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(lean_object* v_as_4716_, size_t v_i_4717_, size_t v_stop_4718_, lean_object* v_b_4719_, lean_object* v___y_4720_){
_start:
{
uint8_t v___x_4722_; 
v___x_4722_ = lean_usize_dec_eq(v_i_4717_, v_stop_4718_);
if (v___x_4722_ == 0)
{
lean_object* v___x_4723_; lean_object* v_fvarId_4724_; lean_object* v___x_4725_; 
v___x_4723_ = lean_array_uget_borrowed(v_as_4716_, v_i_4717_);
v_fvarId_4724_ = lean_ctor_get(v___x_4723_, 0);
lean_inc(v_fvarId_4724_);
v___x_4725_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v_fvarId_4724_, v___y_4720_);
if (lean_obj_tag(v___x_4725_) == 0)
{
lean_object* v_a_4726_; size_t v___x_4727_; size_t v___x_4728_; 
v_a_4726_ = lean_ctor_get(v___x_4725_, 0);
lean_inc(v_a_4726_);
lean_dec_ref_known(v___x_4725_, 1);
v___x_4727_ = ((size_t)1ULL);
v___x_4728_ = lean_usize_add(v_i_4717_, v___x_4727_);
v_i_4717_ = v___x_4728_;
v_b_4719_ = v_a_4726_;
goto _start;
}
else
{
return v___x_4725_;
}
}
else
{
lean_object* v___x_4730_; 
v___x_4730_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4730_, 0, v_b_4719_);
return v___x_4730_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg___boxed(lean_object* v_as_4731_, lean_object* v_i_4732_, lean_object* v_stop_4733_, lean_object* v_b_4734_, lean_object* v___y_4735_, lean_object* v___y_4736_){
_start:
{
size_t v_i_boxed_4737_; size_t v_stop_boxed_4738_; lean_object* v_res_4739_; 
v_i_boxed_4737_ = lean_unbox_usize(v_i_4732_);
lean_dec(v_i_4732_);
v_stop_boxed_4738_ = lean_unbox_usize(v_stop_4733_);
lean_dec(v_stop_4733_);
v_res_4739_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(v_as_4731_, v_i_boxed_4737_, v_stop_boxed_4738_, v_b_4734_, v___y_4735_);
lean_dec(v___y_4735_);
lean_dec_ref(v_as_4731_);
return v_res_4739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___redArg(lean_object* v_x_4740_, lean_object* v___y_4741_, lean_object* v___y_4742_, lean_object* v___y_4743_, lean_object* v___y_4744_, lean_object* v___y_4745_, lean_object* v___y_4746_, lean_object* v___y_4747_){
_start:
{
lean_object* v___x_4749_; 
v___x_4749_ = l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(v___y_4743_);
if (lean_obj_tag(v___x_4749_) == 0)
{
lean_object* v_a_4750_; lean_object* v___x_4751_; 
v_a_4750_ = lean_ctor_get(v___x_4749_, 0);
lean_inc(v_a_4750_);
lean_dec_ref_known(v___x_4749_, 1);
lean_inc(v___y_4747_);
lean_inc_ref(v___y_4746_);
lean_inc(v___y_4745_);
lean_inc_ref(v___y_4744_);
lean_inc(v___y_4743_);
lean_inc(v___y_4742_);
lean_inc(v___y_4741_);
v___x_4751_ = lean_apply_8(v_x_4740_, v___y_4741_, v___y_4742_, v___y_4743_, v___y_4744_, v___y_4745_, v___y_4746_, v___y_4747_, lean_box(0));
if (lean_obj_tag(v___x_4751_) == 0)
{
lean_object* v_a_4752_; lean_object* v___x_4753_; 
v_a_4752_ = lean_ctor_get(v___x_4751_, 0);
lean_inc(v_a_4752_);
lean_dec_ref_known(v___x_4751_, 1);
v___x_4753_ = l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(v_a_4750_, v___y_4743_);
if (lean_obj_tag(v___x_4753_) == 0)
{
lean_object* v___x_4755_; uint8_t v_isShared_4756_; uint8_t v_isSharedCheck_4760_; 
v_isSharedCheck_4760_ = !lean_is_exclusive(v___x_4753_);
if (v_isSharedCheck_4760_ == 0)
{
lean_object* v_unused_4761_; 
v_unused_4761_ = lean_ctor_get(v___x_4753_, 0);
lean_dec(v_unused_4761_);
v___x_4755_ = v___x_4753_;
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
else
{
lean_dec(v___x_4753_);
v___x_4755_ = lean_box(0);
v_isShared_4756_ = v_isSharedCheck_4760_;
goto v_resetjp_4754_;
}
v_resetjp_4754_:
{
lean_object* v___x_4758_; 
if (v_isShared_4756_ == 0)
{
lean_ctor_set(v___x_4755_, 0, v_a_4752_);
v___x_4758_ = v___x_4755_;
goto v_reusejp_4757_;
}
else
{
lean_object* v_reuseFailAlloc_4759_; 
v_reuseFailAlloc_4759_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4759_, 0, v_a_4752_);
v___x_4758_ = v_reuseFailAlloc_4759_;
goto v_reusejp_4757_;
}
v_reusejp_4757_:
{
return v___x_4758_;
}
}
}
else
{
lean_object* v_a_4762_; lean_object* v___x_4764_; uint8_t v_isShared_4765_; uint8_t v_isSharedCheck_4769_; 
lean_dec(v_a_4752_);
v_a_4762_ = lean_ctor_get(v___x_4753_, 0);
v_isSharedCheck_4769_ = !lean_is_exclusive(v___x_4753_);
if (v_isSharedCheck_4769_ == 0)
{
v___x_4764_ = v___x_4753_;
v_isShared_4765_ = v_isSharedCheck_4769_;
goto v_resetjp_4763_;
}
else
{
lean_inc(v_a_4762_);
lean_dec(v___x_4753_);
v___x_4764_ = lean_box(0);
v_isShared_4765_ = v_isSharedCheck_4769_;
goto v_resetjp_4763_;
}
v_resetjp_4763_:
{
lean_object* v___x_4767_; 
if (v_isShared_4765_ == 0)
{
v___x_4767_ = v___x_4764_;
goto v_reusejp_4766_;
}
else
{
lean_object* v_reuseFailAlloc_4768_; 
v_reuseFailAlloc_4768_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4768_, 0, v_a_4762_);
v___x_4767_ = v_reuseFailAlloc_4768_;
goto v_reusejp_4766_;
}
v_reusejp_4766_:
{
return v___x_4767_;
}
}
}
}
else
{
lean_object* v_a_4770_; lean_object* v___x_4771_; 
v_a_4770_ = lean_ctor_get(v___x_4751_, 0);
lean_inc(v_a_4770_);
lean_dec_ref_known(v___x_4751_, 1);
v___x_4771_ = l_Lean_Compiler_LCNF_ScopeM_setScope___redArg(v_a_4750_, v___y_4743_);
if (lean_obj_tag(v___x_4771_) == 0)
{
lean_object* v___x_4773_; uint8_t v_isShared_4774_; uint8_t v_isSharedCheck_4778_; 
v_isSharedCheck_4778_ = !lean_is_exclusive(v___x_4771_);
if (v_isSharedCheck_4778_ == 0)
{
lean_object* v_unused_4779_; 
v_unused_4779_ = lean_ctor_get(v___x_4771_, 0);
lean_dec(v_unused_4779_);
v___x_4773_ = v___x_4771_;
v_isShared_4774_ = v_isSharedCheck_4778_;
goto v_resetjp_4772_;
}
else
{
lean_dec(v___x_4771_);
v___x_4773_ = lean_box(0);
v_isShared_4774_ = v_isSharedCheck_4778_;
goto v_resetjp_4772_;
}
v_resetjp_4772_:
{
lean_object* v___x_4776_; 
if (v_isShared_4774_ == 0)
{
lean_ctor_set_tag(v___x_4773_, 1);
lean_ctor_set(v___x_4773_, 0, v_a_4770_);
v___x_4776_ = v___x_4773_;
goto v_reusejp_4775_;
}
else
{
lean_object* v_reuseFailAlloc_4777_; 
v_reuseFailAlloc_4777_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4777_, 0, v_a_4770_);
v___x_4776_ = v_reuseFailAlloc_4777_;
goto v_reusejp_4775_;
}
v_reusejp_4775_:
{
return v___x_4776_;
}
}
}
else
{
lean_object* v_a_4780_; lean_object* v___x_4782_; uint8_t v_isShared_4783_; uint8_t v_isSharedCheck_4787_; 
lean_dec(v_a_4770_);
v_a_4780_ = lean_ctor_get(v___x_4771_, 0);
v_isSharedCheck_4787_ = !lean_is_exclusive(v___x_4771_);
if (v_isSharedCheck_4787_ == 0)
{
v___x_4782_ = v___x_4771_;
v_isShared_4783_ = v_isSharedCheck_4787_;
goto v_resetjp_4781_;
}
else
{
lean_inc(v_a_4780_);
lean_dec(v___x_4771_);
v___x_4782_ = lean_box(0);
v_isShared_4783_ = v_isSharedCheck_4787_;
goto v_resetjp_4781_;
}
v_resetjp_4781_:
{
lean_object* v___x_4785_; 
if (v_isShared_4783_ == 0)
{
v___x_4785_ = v___x_4782_;
goto v_reusejp_4784_;
}
else
{
lean_object* v_reuseFailAlloc_4786_; 
v_reuseFailAlloc_4786_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4786_, 0, v_a_4780_);
v___x_4785_ = v_reuseFailAlloc_4786_;
goto v_reusejp_4784_;
}
v_reusejp_4784_:
{
return v___x_4785_;
}
}
}
}
}
else
{
lean_object* v_a_4788_; lean_object* v___x_4790_; uint8_t v_isShared_4791_; uint8_t v_isSharedCheck_4795_; 
lean_dec_ref(v_x_4740_);
v_a_4788_ = lean_ctor_get(v___x_4749_, 0);
v_isSharedCheck_4795_ = !lean_is_exclusive(v___x_4749_);
if (v_isSharedCheck_4795_ == 0)
{
v___x_4790_ = v___x_4749_;
v_isShared_4791_ = v_isSharedCheck_4795_;
goto v_resetjp_4789_;
}
else
{
lean_inc(v_a_4788_);
lean_dec(v___x_4749_);
v___x_4790_ = lean_box(0);
v_isShared_4791_ = v_isSharedCheck_4795_;
goto v_resetjp_4789_;
}
v_resetjp_4789_:
{
lean_object* v___x_4793_; 
if (v_isShared_4791_ == 0)
{
v___x_4793_ = v___x_4790_;
goto v_reusejp_4792_;
}
else
{
lean_object* v_reuseFailAlloc_4794_; 
v_reuseFailAlloc_4794_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4794_, 0, v_a_4788_);
v___x_4793_ = v_reuseFailAlloc_4794_;
goto v_reusejp_4792_;
}
v_reusejp_4792_:
{
return v___x_4793_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___redArg___boxed(lean_object* v_x_4796_, lean_object* v___y_4797_, lean_object* v___y_4798_, lean_object* v___y_4799_, lean_object* v___y_4800_, lean_object* v___y_4801_, lean_object* v___y_4802_, lean_object* v___y_4803_, lean_object* v___y_4804_){
_start:
{
lean_object* v_res_4805_; 
v_res_4805_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___redArg(v_x_4796_, v___y_4797_, v___y_4798_, v___y_4799_, v___y_4800_, v___y_4801_, v___y_4802_, v___y_4803_);
lean_dec(v___y_4803_);
lean_dec_ref(v___y_4802_);
lean_dec(v___y_4801_);
lean_dec_ref(v___y_4800_);
lean_dec(v___y_4799_);
lean_dec(v___y_4798_);
lean_dec(v___y_4797_);
return v_res_4805_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___lam__0(lean_object* v_x_4806_, lean_object* v___y_4807_, lean_object* v___y_4808_, lean_object* v___y_4809_, lean_object* v___y_4810_, lean_object* v___y_4811_, lean_object* v___y_4812_, lean_object* v___y_4813_){
_start:
{
lean_object* v___x_4815_; 
v___x_4815_ = l_Lean_Compiler_LCNF_ScopeM_clearScope___redArg(v___y_4809_);
if (lean_obj_tag(v___x_4815_) == 0)
{
lean_object* v___x_4816_; 
lean_dec_ref_known(v___x_4815_, 1);
lean_inc(v___y_4813_);
lean_inc_ref(v___y_4812_);
lean_inc(v___y_4811_);
lean_inc_ref(v___y_4810_);
lean_inc(v___y_4809_);
lean_inc(v___y_4808_);
lean_inc(v___y_4807_);
v___x_4816_ = lean_apply_8(v_x_4806_, v___y_4807_, v___y_4808_, v___y_4809_, v___y_4810_, v___y_4811_, v___y_4812_, v___y_4813_, lean_box(0));
return v___x_4816_;
}
else
{
lean_object* v_a_4817_; lean_object* v___x_4819_; uint8_t v_isShared_4820_; uint8_t v_isSharedCheck_4824_; 
lean_dec_ref(v_x_4806_);
v_a_4817_ = lean_ctor_get(v___x_4815_, 0);
v_isSharedCheck_4824_ = !lean_is_exclusive(v___x_4815_);
if (v_isSharedCheck_4824_ == 0)
{
v___x_4819_ = v___x_4815_;
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
else
{
lean_inc(v_a_4817_);
lean_dec(v___x_4815_);
v___x_4819_ = lean_box(0);
v_isShared_4820_ = v_isSharedCheck_4824_;
goto v_resetjp_4818_;
}
v_resetjp_4818_:
{
lean_object* v___x_4822_; 
if (v_isShared_4820_ == 0)
{
v___x_4822_ = v___x_4819_;
goto v_reusejp_4821_;
}
else
{
lean_object* v_reuseFailAlloc_4823_; 
v_reuseFailAlloc_4823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4823_, 0, v_a_4817_);
v___x_4822_ = v_reuseFailAlloc_4823_;
goto v_reusejp_4821_;
}
v_reusejp_4821_:
{
return v___x_4822_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___lam__0___boxed(lean_object* v_x_4825_, lean_object* v___y_4826_, lean_object* v___y_4827_, lean_object* v___y_4828_, lean_object* v___y_4829_, lean_object* v___y_4830_, lean_object* v___y_4831_, lean_object* v___y_4832_, lean_object* v___y_4833_){
_start:
{
lean_object* v_res_4834_; 
v_res_4834_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___lam__0(v_x_4825_, v___y_4826_, v___y_4827_, v___y_4828_, v___y_4829_, v___y_4830_, v___y_4831_, v___y_4832_);
lean_dec(v___y_4832_);
lean_dec_ref(v___y_4831_);
lean_dec(v___y_4830_);
lean_dec_ref(v___y_4829_);
lean_dec(v___y_4828_);
lean_dec(v___y_4827_);
lean_dec(v___y_4826_);
return v_res_4834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg(lean_object* v_x_4835_, lean_object* v___y_4836_, lean_object* v___y_4837_, lean_object* v___y_4838_, lean_object* v___y_4839_, lean_object* v___y_4840_, lean_object* v___y_4841_, lean_object* v___y_4842_){
_start:
{
lean_object* v___f_4844_; lean_object* v___x_4845_; 
v___f_4844_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___lam__0___boxed), 9, 1);
lean_closure_set(v___f_4844_, 0, v_x_4835_);
v___x_4845_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___redArg(v___f_4844_, v___y_4836_, v___y_4837_, v___y_4838_, v___y_4839_, v___y_4840_, v___y_4841_, v___y_4842_);
return v___x_4845_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg___boxed(lean_object* v_x_4846_, lean_object* v___y_4847_, lean_object* v___y_4848_, lean_object* v___y_4849_, lean_object* v___y_4850_, lean_object* v___y_4851_, lean_object* v___y_4852_, lean_object* v___y_4853_, lean_object* v___y_4854_){
_start:
{
lean_object* v_res_4855_; 
v_res_4855_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg(v_x_4846_, v___y_4847_, v___y_4848_, v___y_4849_, v___y_4850_, v___y_4851_, v___y_4852_, v___y_4853_);
lean_dec(v___y_4853_);
lean_dec_ref(v___y_4852_);
lean_dec(v___y_4851_);
lean_dec_ref(v___y_4850_);
lean_dec(v___y_4849_);
lean_dec(v___y_4848_);
lean_dec(v___y_4847_);
return v_res_4855_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10(lean_object* v_msg_4856_, lean_object* v___y_4857_, lean_object* v___y_4858_, lean_object* v___y_4859_, lean_object* v___y_4860_, lean_object* v___y_4861_, lean_object* v___y_4862_, lean_object* v___y_4863_){
_start:
{
lean_object* v___f_4865_; lean_object* v___f_4866_; lean_object* v___f_4867_; lean_object* v___f_4868_; lean_object* v___f_4869_; lean_object* v___f_4870_; lean_object* v___f_4871_; lean_object* v___f_4872_; lean_object* v___x_4873_; lean_object* v___x_4874_; lean_object* v___x_4875_; lean_object* v___x_4876_; lean_object* v_toApplicative_4877_; lean_object* v___x_4879_; uint8_t v_isShared_4880_; uint8_t v_isSharedCheck_4951_; 
v___f_4865_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__0));
v___f_4866_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__1));
v___f_4867_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__2));
v___f_4868_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__3));
v___f_4869_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__4));
v___f_4870_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__6___boxed), 7, 2);
lean_closure_set(v___f_4870_, 0, v___f_4869_);
lean_closure_set(v___f_4870_, 1, v___f_4868_);
v___f_4871_ = lean_alloc_closure((void*)(l_instMonadEIO___redArg___lam__9___boxed), 6, 1);
lean_closure_set(v___f_4871_, 0, v___f_4868_);
v___f_4872_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__5));
v___x_4873_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4873_, 0, v___f_4865_);
lean_ctor_set(v___x_4873_, 1, v___f_4866_);
v___x_4874_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4874_, 0, v___x_4873_);
lean_ctor_set(v___x_4874_, 1, v___f_4867_);
lean_ctor_set(v___x_4874_, 2, v___f_4870_);
lean_ctor_set(v___x_4874_, 3, v___f_4871_);
lean_ctor_set(v___x_4874_, 4, v___f_4872_);
v___x_4875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4875_, 0, v___x_4874_);
lean_ctor_set(v___x_4875_, 1, v___f_4868_);
v___x_4876_ = l_StateRefT_x27_instMonad___redArg(v___x_4875_);
v_toApplicative_4877_ = lean_ctor_get(v___x_4876_, 0);
v_isSharedCheck_4951_ = !lean_is_exclusive(v___x_4876_);
if (v_isSharedCheck_4951_ == 0)
{
lean_object* v_unused_4952_; 
v_unused_4952_ = lean_ctor_get(v___x_4876_, 1);
lean_dec(v_unused_4952_);
v___x_4879_ = v___x_4876_;
v_isShared_4880_ = v_isSharedCheck_4951_;
goto v_resetjp_4878_;
}
else
{
lean_inc(v_toApplicative_4877_);
lean_dec(v___x_4876_);
v___x_4879_ = lean_box(0);
v_isShared_4880_ = v_isSharedCheck_4951_;
goto v_resetjp_4878_;
}
v_resetjp_4878_:
{
lean_object* v_toFunctor_4881_; lean_object* v_toSeq_4882_; lean_object* v_toSeqLeft_4883_; lean_object* v_toSeqRight_4884_; lean_object* v___x_4886_; uint8_t v_isShared_4887_; uint8_t v_isSharedCheck_4949_; 
v_toFunctor_4881_ = lean_ctor_get(v_toApplicative_4877_, 0);
v_toSeq_4882_ = lean_ctor_get(v_toApplicative_4877_, 2);
v_toSeqLeft_4883_ = lean_ctor_get(v_toApplicative_4877_, 3);
v_toSeqRight_4884_ = lean_ctor_get(v_toApplicative_4877_, 4);
v_isSharedCheck_4949_ = !lean_is_exclusive(v_toApplicative_4877_);
if (v_isSharedCheck_4949_ == 0)
{
lean_object* v_unused_4950_; 
v_unused_4950_ = lean_ctor_get(v_toApplicative_4877_, 1);
lean_dec(v_unused_4950_);
v___x_4886_ = v_toApplicative_4877_;
v_isShared_4887_ = v_isSharedCheck_4949_;
goto v_resetjp_4885_;
}
else
{
lean_inc(v_toSeqRight_4884_);
lean_inc(v_toSeqLeft_4883_);
lean_inc(v_toSeq_4882_);
lean_inc(v_toFunctor_4881_);
lean_dec(v_toApplicative_4877_);
v___x_4886_ = lean_box(0);
v_isShared_4887_ = v_isSharedCheck_4949_;
goto v_resetjp_4885_;
}
v_resetjp_4885_:
{
lean_object* v___f_4888_; lean_object* v___f_4889_; lean_object* v___f_4890_; lean_object* v___f_4891_; lean_object* v___x_4892_; lean_object* v___f_4893_; lean_object* v___f_4894_; lean_object* v___f_4895_; lean_object* v___x_4897_; 
v___f_4888_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__6));
v___f_4889_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__7));
lean_inc_ref(v_toFunctor_4881_);
v___f_4890_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4890_, 0, v_toFunctor_4881_);
v___f_4891_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4891_, 0, v_toFunctor_4881_);
v___x_4892_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4892_, 0, v___f_4890_);
lean_ctor_set(v___x_4892_, 1, v___f_4891_);
v___f_4893_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4893_, 0, v_toSeqRight_4884_);
v___f_4894_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4894_, 0, v_toSeqLeft_4883_);
v___f_4895_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4895_, 0, v_toSeq_4882_);
if (v_isShared_4887_ == 0)
{
lean_ctor_set(v___x_4886_, 4, v___f_4893_);
lean_ctor_set(v___x_4886_, 3, v___f_4894_);
lean_ctor_set(v___x_4886_, 2, v___f_4895_);
lean_ctor_set(v___x_4886_, 1, v___f_4888_);
lean_ctor_set(v___x_4886_, 0, v___x_4892_);
v___x_4897_ = v___x_4886_;
goto v_reusejp_4896_;
}
else
{
lean_object* v_reuseFailAlloc_4948_; 
v_reuseFailAlloc_4948_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4948_, 0, v___x_4892_);
lean_ctor_set(v_reuseFailAlloc_4948_, 1, v___f_4888_);
lean_ctor_set(v_reuseFailAlloc_4948_, 2, v___f_4895_);
lean_ctor_set(v_reuseFailAlloc_4948_, 3, v___f_4894_);
lean_ctor_set(v_reuseFailAlloc_4948_, 4, v___f_4893_);
v___x_4897_ = v_reuseFailAlloc_4948_;
goto v_reusejp_4896_;
}
v_reusejp_4896_:
{
lean_object* v___x_4899_; 
if (v_isShared_4880_ == 0)
{
lean_ctor_set(v___x_4879_, 1, v___f_4889_);
lean_ctor_set(v___x_4879_, 0, v___x_4897_);
v___x_4899_ = v___x_4879_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4947_; 
v_reuseFailAlloc_4947_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4947_, 0, v___x_4897_);
lean_ctor_set(v_reuseFailAlloc_4947_, 1, v___f_4889_);
v___x_4899_ = v_reuseFailAlloc_4947_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
lean_object* v___x_4900_; lean_object* v_toApplicative_4901_; lean_object* v___x_4903_; uint8_t v_isShared_4904_; uint8_t v_isSharedCheck_4945_; 
v___x_4900_ = l_StateRefT_x27_instMonad___redArg(v___x_4899_);
v_toApplicative_4901_ = lean_ctor_get(v___x_4900_, 0);
v_isSharedCheck_4945_ = !lean_is_exclusive(v___x_4900_);
if (v_isSharedCheck_4945_ == 0)
{
lean_object* v_unused_4946_; 
v_unused_4946_ = lean_ctor_get(v___x_4900_, 1);
lean_dec(v_unused_4946_);
v___x_4903_ = v___x_4900_;
v_isShared_4904_ = v_isSharedCheck_4945_;
goto v_resetjp_4902_;
}
else
{
lean_inc(v_toApplicative_4901_);
lean_dec(v___x_4900_);
v___x_4903_ = lean_box(0);
v_isShared_4904_ = v_isSharedCheck_4945_;
goto v_resetjp_4902_;
}
v_resetjp_4902_:
{
lean_object* v_toFunctor_4905_; lean_object* v_toSeq_4906_; lean_object* v_toSeqLeft_4907_; lean_object* v_toSeqRight_4908_; lean_object* v___x_4910_; uint8_t v_isShared_4911_; uint8_t v_isSharedCheck_4943_; 
v_toFunctor_4905_ = lean_ctor_get(v_toApplicative_4901_, 0);
v_toSeq_4906_ = lean_ctor_get(v_toApplicative_4901_, 2);
v_toSeqLeft_4907_ = lean_ctor_get(v_toApplicative_4901_, 3);
v_toSeqRight_4908_ = lean_ctor_get(v_toApplicative_4901_, 4);
v_isSharedCheck_4943_ = !lean_is_exclusive(v_toApplicative_4901_);
if (v_isSharedCheck_4943_ == 0)
{
lean_object* v_unused_4944_; 
v_unused_4944_ = lean_ctor_get(v_toApplicative_4901_, 1);
lean_dec(v_unused_4944_);
v___x_4910_ = v_toApplicative_4901_;
v_isShared_4911_ = v_isSharedCheck_4943_;
goto v_resetjp_4909_;
}
else
{
lean_inc(v_toSeqRight_4908_);
lean_inc(v_toSeqLeft_4907_);
lean_inc(v_toSeq_4906_);
lean_inc(v_toFunctor_4905_);
lean_dec(v_toApplicative_4901_);
v___x_4910_ = lean_box(0);
v_isShared_4911_ = v_isSharedCheck_4943_;
goto v_resetjp_4909_;
}
v_resetjp_4909_:
{
lean_object* v___f_4912_; lean_object* v___f_4913_; lean_object* v___f_4914_; lean_object* v___f_4915_; lean_object* v___x_4916_; lean_object* v___f_4917_; lean_object* v___f_4918_; lean_object* v___f_4919_; lean_object* v___x_4921_; 
v___f_4912_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__8));
v___f_4913_ = ((lean_object*)(l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0_spec__1___closed__9));
lean_inc_ref(v_toFunctor_4905_);
v___f_4914_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4914_, 0, v_toFunctor_4905_);
v___f_4915_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4915_, 0, v_toFunctor_4905_);
v___x_4916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4916_, 0, v___f_4914_);
lean_ctor_set(v___x_4916_, 1, v___f_4915_);
v___f_4917_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1___boxed), 6, 1);
lean_closure_set(v___f_4917_, 0, v_toSeqRight_4908_);
v___f_4918_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_4918_, 0, v_toSeqLeft_4907_);
v___f_4919_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4___boxed), 6, 1);
lean_closure_set(v___f_4919_, 0, v_toSeq_4906_);
if (v_isShared_4911_ == 0)
{
lean_ctor_set(v___x_4910_, 4, v___f_4917_);
lean_ctor_set(v___x_4910_, 3, v___f_4918_);
lean_ctor_set(v___x_4910_, 2, v___f_4919_);
lean_ctor_set(v___x_4910_, 1, v___f_4912_);
lean_ctor_set(v___x_4910_, 0, v___x_4916_);
v___x_4921_ = v___x_4910_;
goto v_reusejp_4920_;
}
else
{
lean_object* v_reuseFailAlloc_4942_; 
v_reuseFailAlloc_4942_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4942_, 0, v___x_4916_);
lean_ctor_set(v_reuseFailAlloc_4942_, 1, v___f_4912_);
lean_ctor_set(v_reuseFailAlloc_4942_, 2, v___f_4919_);
lean_ctor_set(v_reuseFailAlloc_4942_, 3, v___f_4918_);
lean_ctor_set(v_reuseFailAlloc_4942_, 4, v___f_4917_);
v___x_4921_ = v_reuseFailAlloc_4942_;
goto v_reusejp_4920_;
}
v_reusejp_4920_:
{
lean_object* v___x_4923_; 
if (v_isShared_4904_ == 0)
{
lean_ctor_set(v___x_4903_, 1, v___f_4913_);
lean_ctor_set(v___x_4903_, 0, v___x_4921_);
v___x_4923_ = v___x_4903_;
goto v_reusejp_4922_;
}
else
{
lean_object* v_reuseFailAlloc_4941_; 
v_reuseFailAlloc_4941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4941_, 0, v___x_4921_);
lean_ctor_set(v_reuseFailAlloc_4941_, 1, v___f_4913_);
v___x_4923_ = v_reuseFailAlloc_4941_;
goto v_reusejp_4922_;
}
v_reusejp_4922_:
{
lean_object* v___x_4924_; lean_object* v___x_4925_; lean_object* v___x_4926_; lean_object* v___f_4927_; lean_object* v___f_4928_; lean_object* v___f_4929_; lean_object* v___f_4930_; lean_object* v___f_4931_; lean_object* v___x_4932_; lean_object* v___x_4933_; lean_object* v___x_4934_; lean_object* v___x_4935_; lean_object* v___x_4936_; lean_object* v___x_4937_; lean_object* v___x_4938_; lean_object* v___x_27270__overap_4939_; lean_object* v___x_4940_; 
v___x_4924_ = l_StateRefT_x27_instMonad___redArg(v___x_4923_);
v___x_4925_ = l_StateRefT_x27_instMonad___redArg(v___x_4924_);
v___x_4926_ = l_ReaderT_instMonad___redArg(v___x_4925_);
lean_inc_ref_n(v___x_4926_, 6);
v___f_4927_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_4927_, 0, v___x_4926_);
v___f_4928_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_4928_, 0, v___x_4926_);
v___f_4929_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__6), 5, 1);
lean_closure_set(v___f_4929_, 0, v___x_4926_);
v___f_4930_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_4930_, 0, v___x_4926_);
v___f_4931_ = lean_alloc_closure((void*)(l_OptionT_instMonad___redArg___lam__11), 5, 1);
lean_closure_set(v___f_4931_, 0, v___x_4926_);
v___x_4932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4932_, 0, v___f_4927_);
lean_ctor_set(v___x_4932_, 1, v___f_4928_);
v___x_4933_ = lean_alloc_closure((void*)(l_OptionT_pure), 4, 2);
lean_closure_set(v___x_4933_, 0, lean_box(0));
lean_closure_set(v___x_4933_, 1, v___x_4926_);
v___x_4934_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4934_, 0, v___x_4932_);
lean_ctor_set(v___x_4934_, 1, v___x_4933_);
lean_ctor_set(v___x_4934_, 2, v___f_4929_);
lean_ctor_set(v___x_4934_, 3, v___f_4930_);
lean_ctor_set(v___x_4934_, 4, v___f_4931_);
v___x_4935_ = lean_alloc_closure((void*)(l_OptionT_bind), 6, 2);
lean_closure_set(v___x_4935_, 0, lean_box(0));
lean_closure_set(v___x_4935_, 1, v___x_4926_);
v___x_4936_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4936_, 0, v___x_4934_);
lean_ctor_set(v___x_4936_, 1, v___x_4935_);
v___x_4937_ = lean_box(0);
v___x_4938_ = l_instInhabitedOfMonad___redArg(v___x_4936_, v___x_4937_);
v___x_27270__overap_4939_ = lean_panic_fn_borrowed(v___x_4938_, v_msg_4856_);
lean_dec(v___x_4938_);
lean_inc(v___y_4863_);
lean_inc_ref(v___y_4862_);
lean_inc(v___y_4861_);
lean_inc_ref(v___y_4860_);
lean_inc(v___y_4859_);
lean_inc(v___y_4858_);
lean_inc(v___y_4857_);
v___x_4940_ = lean_apply_8(v___x_27270__overap_4939_, v___y_4857_, v___y_4858_, v___y_4859_, v___y_4860_, v___y_4861_, v___y_4862_, v___y_4863_, lean_box(0));
return v___x_4940_;
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
LEAN_EXPORT lean_object* l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10___boxed(lean_object* v_msg_4953_, lean_object* v___y_4954_, lean_object* v___y_4955_, lean_object* v___y_4956_, lean_object* v___y_4957_, lean_object* v___y_4958_, lean_object* v___y_4959_, lean_object* v___y_4960_, lean_object* v___y_4961_){
_start:
{
lean_object* v_res_4962_; 
v_res_4962_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10(v_msg_4953_, v___y_4954_, v___y_4955_, v___y_4956_, v___y_4957_, v___y_4958_, v___y_4959_, v___y_4960_);
lean_dec(v___y_4960_);
lean_dec_ref(v___y_4959_);
lean_dec(v___y_4958_);
lean_dec_ref(v___y_4957_);
lean_dec(v___y_4956_);
lean_dec(v___y_4955_);
lean_dec(v___y_4954_);
return v_res_4962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6(lean_object* v_f_4965_, lean_object* v_e_4966_, lean_object* v___y_4967_, lean_object* v___y_4968_, lean_object* v___y_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_){
_start:
{
lean_object* v_ty_4976_; lean_object* v_body_4977_; uint8_t v___x_4981_; 
v___x_4981_ = l_Lean_Expr_hasFVar(v_e_4966_);
if (v___x_4981_ == 0)
{
lean_object* v___x_4982_; lean_object* v___x_4983_; 
lean_dec_ref(v_e_4966_);
lean_dec_ref(v_f_4965_);
v___x_4982_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___closed__0));
v___x_4983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4983_, 0, v___x_4982_);
return v___x_4983_;
}
else
{
switch(lean_obj_tag(v_e_4966_))
{
case 1:
{
lean_object* v_fvarId_4984_; lean_object* v___x_4985_; 
v_fvarId_4984_ = lean_ctor_get(v_e_4966_, 0);
lean_inc(v_fvarId_4984_);
lean_dec_ref_known(v_e_4966_, 1);
lean_inc(v___y_4973_);
lean_inc_ref(v___y_4972_);
lean_inc(v___y_4971_);
lean_inc_ref(v___y_4970_);
lean_inc(v___y_4969_);
lean_inc(v___y_4968_);
lean_inc(v___y_4967_);
v___x_4985_ = lean_apply_9(v_f_4965_, v_fvarId_4984_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_, lean_box(0));
return v___x_4985_;
}
case 2:
{
lean_object* v___x_4986_; lean_object* v___x_4987_; 
lean_dec_ref_known(v_e_4966_, 1);
lean_dec_ref(v_f_4965_);
v___x_4986_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3);
v___x_4987_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10(v___x_4986_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
return v___x_4987_;
}
case 5:
{
lean_object* v_fn_4988_; lean_object* v_arg_4989_; lean_object* v___x_4990_; 
v_fn_4988_ = lean_ctor_get(v_e_4966_, 0);
lean_inc_ref(v_fn_4988_);
v_arg_4989_ = lean_ctor_get(v_e_4966_, 1);
lean_inc_ref(v_arg_4989_);
lean_dec_ref_known(v_e_4966_, 2);
lean_inc_ref(v_f_4965_);
v___x_4990_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6(v_f_4965_, v_fn_4988_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
if (lean_obj_tag(v___x_4990_) == 0)
{
lean_object* v_a_4991_; 
v_a_4991_ = lean_ctor_get(v___x_4990_, 0);
lean_inc(v_a_4991_);
if (lean_obj_tag(v_a_4991_) == 0)
{
lean_dec_ref(v_arg_4989_);
lean_dec_ref(v_f_4965_);
return v___x_4990_;
}
else
{
lean_dec_ref_known(v_a_4991_, 1);
lean_dec_ref_known(v___x_4990_, 1);
v_e_4966_ = v_arg_4989_;
goto _start;
}
}
else
{
lean_dec_ref(v_arg_4989_);
lean_dec_ref(v_f_4965_);
return v___x_4990_;
}
}
case 6:
{
lean_object* v_binderType_4993_; lean_object* v_body_4994_; 
v_binderType_4993_ = lean_ctor_get(v_e_4966_, 1);
lean_inc_ref(v_binderType_4993_);
v_body_4994_ = lean_ctor_get(v_e_4966_, 2);
lean_inc_ref(v_body_4994_);
lean_dec_ref_known(v_e_4966_, 3);
v_ty_4976_ = v_binderType_4993_;
v_body_4977_ = v_body_4994_;
goto v___jp_4975_;
}
case 7:
{
lean_object* v_binderType_4995_; lean_object* v_body_4996_; 
v_binderType_4995_ = lean_ctor_get(v_e_4966_, 1);
lean_inc_ref(v_binderType_4995_);
v_body_4996_ = lean_ctor_get(v_e_4966_, 2);
lean_inc_ref(v_body_4996_);
lean_dec_ref_known(v_e_4966_, 3);
v_ty_4976_ = v_binderType_4995_;
v_body_4977_ = v_body_4996_;
goto v___jp_4975_;
}
case 8:
{
lean_object* v___x_4997_; lean_object* v___x_4998_; 
lean_dec_ref_known(v_e_4966_, 4);
lean_dec_ref(v_f_4965_);
v___x_4997_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3);
v___x_4998_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10(v___x_4997_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
return v___x_4998_;
}
case 11:
{
lean_object* v___x_4999_; lean_object* v___x_5000_; 
lean_dec_ref_known(v_e_4966_, 3);
lean_dec_ref(v_f_4965_);
v___x_4999_ = lean_obj_once(&l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3, &l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3_once, _init_l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_removeCandidatesInArg_spec__0_spec__0___closed__3);
v___x_5000_ = l_panic___at___00Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6_spec__10(v___x_4999_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
return v___x_5000_;
}
default: 
{
lean_object* v___x_5001_; lean_object* v___x_5002_; 
lean_dec_ref(v_e_4966_);
lean_dec_ref(v_f_4965_);
v___x_5001_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___closed__0));
v___x_5002_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5002_, 0, v___x_5001_);
return v___x_5002_;
}
}
}
v___jp_4975_:
{
lean_object* v___x_4978_; 
lean_inc_ref(v_f_4965_);
v___x_4978_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6(v_f_4965_, v_ty_4976_, v___y_4967_, v___y_4968_, v___y_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
if (lean_obj_tag(v___x_4978_) == 0)
{
lean_object* v_a_4979_; 
v_a_4979_ = lean_ctor_get(v___x_4978_, 0);
lean_inc(v_a_4979_);
if (lean_obj_tag(v_a_4979_) == 0)
{
lean_dec_ref(v_body_4977_);
lean_dec_ref(v_f_4965_);
return v___x_4978_;
}
else
{
lean_dec_ref_known(v_a_4979_, 1);
lean_dec_ref_known(v___x_4978_, 1);
v_e_4966_ = v_body_4977_;
goto _start;
}
}
else
{
lean_dec_ref(v_body_4977_);
lean_dec_ref(v_f_4965_);
return v___x_4978_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___boxed(lean_object* v_f_5003_, lean_object* v_e_5004_, lean_object* v___y_5005_, lean_object* v___y_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_, lean_object* v___y_5011_, lean_object* v___y_5012_){
_start:
{
lean_object* v_res_5013_; 
v_res_5013_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6(v_f_5003_, v_e_5004_, v___y_5005_, v___y_5006_, v___y_5007_, v___y_5008_, v___y_5009_, v___y_5010_, v___y_5011_);
lean_dec(v___y_5011_);
lean_dec_ref(v___y_5010_);
lean_dec(v___y_5009_);
lean_dec_ref(v___y_5008_);
lean_dec(v___y_5007_);
lean_dec(v___y_5006_);
lean_dec(v___y_5005_);
return v_res_5013_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___redArg(lean_object* v_f_5014_, lean_object* v_arg_5015_, lean_object* v___y_5016_, lean_object* v___y_5017_, lean_object* v___y_5018_, lean_object* v___y_5019_, lean_object* v___y_5020_, lean_object* v___y_5021_, lean_object* v___y_5022_){
_start:
{
switch(lean_obj_tag(v_arg_5015_))
{
case 0:
{
lean_object* v___x_5024_; lean_object* v___x_5025_; 
lean_dec_ref(v_f_5014_);
v___x_5024_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___closed__0));
v___x_5025_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5025_, 0, v___x_5024_);
return v___x_5025_;
}
case 1:
{
lean_object* v_fvarId_5026_; lean_object* v___x_5027_; 
v_fvarId_5026_ = lean_ctor_get(v_arg_5015_, 0);
lean_inc(v_fvarId_5026_);
lean_dec_ref_known(v_arg_5015_, 1);
lean_inc(v___y_5022_);
lean_inc_ref(v___y_5021_);
lean_inc(v___y_5020_);
lean_inc_ref(v___y_5019_);
lean_inc(v___y_5018_);
lean_inc(v___y_5017_);
lean_inc(v___y_5016_);
v___x_5027_ = lean_apply_9(v_f_5014_, v_fvarId_5026_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_, lean_box(0));
return v___x_5027_;
}
default: 
{
lean_object* v_expr_5028_; lean_object* v___x_5029_; 
v_expr_5028_ = lean_ctor_get(v_arg_5015_, 0);
lean_inc_ref(v_expr_5028_);
lean_dec_ref_known(v_arg_5015_, 1);
v___x_5029_ = l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6(v_f_5014_, v_expr_5028_, v___y_5016_, v___y_5017_, v___y_5018_, v___y_5019_, v___y_5020_, v___y_5021_, v___y_5022_);
return v___x_5029_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___redArg___boxed(lean_object* v_f_5030_, lean_object* v_arg_5031_, lean_object* v___y_5032_, lean_object* v___y_5033_, lean_object* v___y_5034_, lean_object* v___y_5035_, lean_object* v___y_5036_, lean_object* v___y_5037_, lean_object* v___y_5038_, lean_object* v___y_5039_){
_start:
{
lean_object* v_res_5040_; 
v_res_5040_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___redArg(v_f_5030_, v_arg_5031_, v___y_5032_, v___y_5033_, v___y_5034_, v___y_5035_, v___y_5036_, v___y_5037_, v___y_5038_);
lean_dec(v___y_5038_);
lean_dec_ref(v___y_5037_);
lean_dec(v___y_5036_);
lean_dec_ref(v___y_5035_);
lean_dec(v___y_5034_);
lean_dec(v___y_5033_);
lean_dec(v___y_5032_);
return v_res_5040_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__4(lean_object* v_f_5041_, lean_object* v_fvar_5042_, lean_object* v___y_5043_, lean_object* v___y_5044_, lean_object* v___y_5045_, lean_object* v___y_5046_, lean_object* v___y_5047_, lean_object* v___y_5048_, lean_object* v___y_5049_){
_start:
{
lean_object* v___x_5051_; 
lean_inc(v___y_5049_);
lean_inc_ref(v___y_5048_);
lean_inc(v___y_5047_);
lean_inc_ref(v___y_5046_);
lean_inc(v___y_5045_);
lean_inc(v___y_5044_);
lean_inc(v___y_5043_);
v___x_5051_ = lean_apply_9(v_f_5041_, v_fvar_5042_, v___y_5043_, v___y_5044_, v___y_5045_, v___y_5046_, v___y_5047_, v___y_5048_, v___y_5049_, lean_box(0));
if (lean_obj_tag(v___x_5051_) == 0)
{
lean_object* v_a_5052_; lean_object* v___x_5054_; uint8_t v_isShared_5055_; uint8_t v_isSharedCheck_5065_; 
v_a_5052_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5065_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5065_ == 0)
{
v___x_5054_ = v___x_5051_;
v_isShared_5055_ = v_isSharedCheck_5065_;
goto v_resetjp_5053_;
}
else
{
lean_inc(v_a_5052_);
lean_dec(v___x_5051_);
v___x_5054_ = lean_box(0);
v_isShared_5055_ = v_isSharedCheck_5065_;
goto v_resetjp_5053_;
}
v_resetjp_5053_:
{
uint8_t v___x_5056_; 
v___x_5056_ = lean_unbox(v_a_5052_);
lean_dec(v_a_5052_);
if (v___x_5056_ == 0)
{
lean_object* v___x_5057_; lean_object* v___x_5059_; 
v___x_5057_ = lean_box(0);
if (v_isShared_5055_ == 0)
{
lean_ctor_set(v___x_5054_, 0, v___x_5057_);
v___x_5059_ = v___x_5054_;
goto v_reusejp_5058_;
}
else
{
lean_object* v_reuseFailAlloc_5060_; 
v_reuseFailAlloc_5060_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5060_, 0, v___x_5057_);
v___x_5059_ = v_reuseFailAlloc_5060_;
goto v_reusejp_5058_;
}
v_reusejp_5058_:
{
return v___x_5059_;
}
}
else
{
lean_object* v___x_5061_; lean_object* v___x_5063_; 
v___x_5061_ = ((lean_object*)(l_Lean_Compiler_LCNF_Expr_forFVarM___at___00Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5_spec__6___closed__0));
if (v_isShared_5055_ == 0)
{
lean_ctor_set(v___x_5054_, 0, v___x_5061_);
v___x_5063_ = v___x_5054_;
goto v_reusejp_5062_;
}
else
{
lean_object* v_reuseFailAlloc_5064_; 
v_reuseFailAlloc_5064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5064_, 0, v___x_5061_);
v___x_5063_ = v_reuseFailAlloc_5064_;
goto v_reusejp_5062_;
}
v_reusejp_5062_:
{
return v___x_5063_;
}
}
}
}
else
{
lean_object* v_a_5066_; lean_object* v___x_5068_; uint8_t v_isShared_5069_; uint8_t v_isSharedCheck_5073_; 
v_a_5066_ = lean_ctor_get(v___x_5051_, 0);
v_isSharedCheck_5073_ = !lean_is_exclusive(v___x_5051_);
if (v_isSharedCheck_5073_ == 0)
{
v___x_5068_ = v___x_5051_;
v_isShared_5069_ = v_isSharedCheck_5073_;
goto v_resetjp_5067_;
}
else
{
lean_inc(v_a_5066_);
lean_dec(v___x_5051_);
v___x_5068_ = lean_box(0);
v_isShared_5069_ = v_isSharedCheck_5073_;
goto v_resetjp_5067_;
}
v_resetjp_5067_:
{
lean_object* v___x_5071_; 
if (v_isShared_5069_ == 0)
{
v___x_5071_ = v___x_5068_;
goto v_reusejp_5070_;
}
else
{
lean_object* v_reuseFailAlloc_5072_; 
v_reuseFailAlloc_5072_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5072_, 0, v_a_5066_);
v___x_5071_ = v_reuseFailAlloc_5072_;
goto v_reusejp_5070_;
}
v_reusejp_5070_:
{
return v___x_5071_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__4___boxed(lean_object* v_f_5074_, lean_object* v_fvar_5075_, lean_object* v___y_5076_, lean_object* v___y_5077_, lean_object* v___y_5078_, lean_object* v___y_5079_, lean_object* v___y_5080_, lean_object* v___y_5081_, lean_object* v___y_5082_, lean_object* v___y_5083_){
_start:
{
lean_object* v_res_5084_; 
v_res_5084_ = l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__4(v_f_5074_, v_fvar_5075_, v___y_5076_, v___y_5077_, v___y_5078_, v___y_5079_, v___y_5080_, v___y_5081_, v___y_5082_);
lean_dec(v___y_5082_);
lean_dec_ref(v___y_5081_);
lean_dec(v___y_5080_);
lean_dec_ref(v___y_5079_);
lean_dec(v___y_5078_);
lean_dec(v___y_5077_);
lean_dec(v___y_5076_);
return v_res_5084_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3(lean_object* v_f_5085_, lean_object* v_x_5086_, lean_object* v___y_5087_, lean_object* v___y_5088_, lean_object* v___y_5089_, lean_object* v___y_5090_, lean_object* v___y_5091_, lean_object* v___y_5092_, lean_object* v___y_5093_){
_start:
{
lean_object* v___x_5095_; lean_object* v___x_5096_; 
v___x_5095_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_FVarUtil_0__Lean_Compiler_LCNF_allFVarM_go___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__4___boxed), 10, 1);
lean_closure_set(v___x_5095_, 0, v_f_5085_);
v___x_5096_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___redArg(v___x_5095_, v_x_5086_, v___y_5087_, v___y_5088_, v___y_5089_, v___y_5090_, v___y_5091_, v___y_5092_, v___y_5093_);
if (lean_obj_tag(v___x_5096_) == 0)
{
lean_object* v_a_5097_; lean_object* v___x_5099_; uint8_t v_isShared_5100_; uint8_t v_isSharedCheck_5111_; 
v_a_5097_ = lean_ctor_get(v___x_5096_, 0);
v_isSharedCheck_5111_ = !lean_is_exclusive(v___x_5096_);
if (v_isSharedCheck_5111_ == 0)
{
v___x_5099_ = v___x_5096_;
v_isShared_5100_ = v_isSharedCheck_5111_;
goto v_resetjp_5098_;
}
else
{
lean_inc(v_a_5097_);
lean_dec(v___x_5096_);
v___x_5099_ = lean_box(0);
v_isShared_5100_ = v_isSharedCheck_5111_;
goto v_resetjp_5098_;
}
v_resetjp_5098_:
{
if (lean_obj_tag(v_a_5097_) == 1)
{
uint8_t v___x_5101_; lean_object* v___x_5102_; lean_object* v___x_5104_; 
lean_dec_ref_known(v_a_5097_, 1);
v___x_5101_ = 1;
v___x_5102_ = lean_box(v___x_5101_);
if (v_isShared_5100_ == 0)
{
lean_ctor_set(v___x_5099_, 0, v___x_5102_);
v___x_5104_ = v___x_5099_;
goto v_reusejp_5103_;
}
else
{
lean_object* v_reuseFailAlloc_5105_; 
v_reuseFailAlloc_5105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5105_, 0, v___x_5102_);
v___x_5104_ = v_reuseFailAlloc_5105_;
goto v_reusejp_5103_;
}
v_reusejp_5103_:
{
return v___x_5104_;
}
}
else
{
uint8_t v___x_5106_; lean_object* v___x_5107_; lean_object* v___x_5109_; 
lean_dec(v_a_5097_);
v___x_5106_ = 0;
v___x_5107_ = lean_box(v___x_5106_);
if (v_isShared_5100_ == 0)
{
lean_ctor_set(v___x_5099_, 0, v___x_5107_);
v___x_5109_ = v___x_5099_;
goto v_reusejp_5108_;
}
else
{
lean_object* v_reuseFailAlloc_5110_; 
v_reuseFailAlloc_5110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5110_, 0, v___x_5107_);
v___x_5109_ = v_reuseFailAlloc_5110_;
goto v_reusejp_5108_;
}
v_reusejp_5108_:
{
return v___x_5109_;
}
}
}
}
else
{
lean_object* v_a_5112_; lean_object* v___x_5114_; uint8_t v_isShared_5115_; uint8_t v_isSharedCheck_5119_; 
v_a_5112_ = lean_ctor_get(v___x_5096_, 0);
v_isSharedCheck_5119_ = !lean_is_exclusive(v___x_5096_);
if (v_isSharedCheck_5119_ == 0)
{
v___x_5114_ = v___x_5096_;
v_isShared_5115_ = v_isSharedCheck_5119_;
goto v_resetjp_5113_;
}
else
{
lean_inc(v_a_5112_);
lean_dec(v___x_5096_);
v___x_5114_ = lean_box(0);
v_isShared_5115_ = v_isSharedCheck_5119_;
goto v_resetjp_5113_;
}
v_resetjp_5113_:
{
lean_object* v___x_5117_; 
if (v_isShared_5115_ == 0)
{
v___x_5117_ = v___x_5114_;
goto v_reusejp_5116_;
}
else
{
lean_object* v_reuseFailAlloc_5118_; 
v_reuseFailAlloc_5118_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5118_, 0, v_a_5112_);
v___x_5117_ = v_reuseFailAlloc_5118_;
goto v_reusejp_5116_;
}
v_reusejp_5116_:
{
return v___x_5117_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3___boxed(lean_object* v_f_5120_, lean_object* v_x_5121_, lean_object* v___y_5122_, lean_object* v___y_5123_, lean_object* v___y_5124_, lean_object* v___y_5125_, lean_object* v___y_5126_, lean_object* v___y_5127_, lean_object* v___y_5128_, lean_object* v___y_5129_){
_start:
{
lean_object* v_res_5130_; 
v_res_5130_ = l_Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3(v_f_5120_, v_x_5121_, v___y_5122_, v___y_5123_, v___y_5124_, v___y_5125_, v___y_5126_, v___y_5127_, v___y_5128_);
lean_dec(v___y_5128_);
lean_dec_ref(v___y_5127_);
lean_dec(v___y_5126_);
lean_dec_ref(v___y_5125_);
lean_dec(v___y_5124_);
lean_dec(v___y_5123_);
lean_dec(v___y_5122_);
return v_res_5130_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__5(lean_object* v_fvarId_5131_, lean_object* v_as_5132_, size_t v_i_5133_, size_t v_stop_5134_, lean_object* v_b_5135_, lean_object* v___y_5136_, lean_object* v___y_5137_, lean_object* v___y_5138_, lean_object* v___y_5139_, lean_object* v___y_5140_, lean_object* v___y_5141_, lean_object* v___y_5142_){
_start:
{
lean_object* v_a_5145_; uint8_t v___x_5149_; 
v___x_5149_ = lean_usize_dec_eq(v_i_5133_, v_stop_5134_);
if (v___x_5149_ == 0)
{
lean_object* v___x_5150_; lean_object* v_fst_5151_; lean_object* v_snd_5152_; lean_object* v___x_5153_; lean_object* v___x_5154_; 
v___x_5150_ = lean_array_uget_borrowed(v_as_5132_, v_i_5133_);
v_fst_5151_ = lean_ctor_get(v___x_5150_, 0);
v_snd_5152_ = lean_ctor_get(v___x_5150_, 1);
lean_inc(v_fvarId_5131_);
v___x_5153_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_JoinPointCommonArgs_isInJpScope___boxed), 10, 1);
lean_closure_set(v___x_5153_, 0, v_fvarId_5131_);
lean_inc(v_snd_5152_);
v___x_5154_ = l_Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3(v___x_5153_, v_snd_5152_, v___y_5136_, v___y_5137_, v___y_5138_, v___y_5139_, v___y_5140_, v___y_5141_, v___y_5142_);
if (lean_obj_tag(v___x_5154_) == 0)
{
lean_object* v_a_5155_; uint8_t v___x_5156_; 
v_a_5155_ = lean_ctor_get(v___x_5154_, 0);
lean_inc(v_a_5155_);
lean_dec_ref_known(v___x_5154_, 1);
v___x_5156_ = lean_unbox(v_a_5155_);
lean_dec(v_a_5155_);
if (v___x_5156_ == 0)
{
v_a_5145_ = v_b_5135_;
goto v___jp_5144_;
}
else
{
lean_object* v_fvarId_5157_; lean_object* v___x_5158_; 
v_fvarId_5157_ = lean_ctor_get(v_fst_5151_, 0);
lean_inc(v_snd_5152_);
lean_inc(v_fvarId_5157_);
v___x_5158_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_addCandidate_spec__0___redArg(v_b_5135_, v_fvarId_5157_, v_snd_5152_);
v_a_5145_ = v___x_5158_;
goto v___jp_5144_;
}
}
else
{
lean_object* v_a_5159_; lean_object* v___x_5161_; uint8_t v_isShared_5162_; uint8_t v_isSharedCheck_5166_; 
lean_dec_ref(v_b_5135_);
lean_dec(v_fvarId_5131_);
v_a_5159_ = lean_ctor_get(v___x_5154_, 0);
v_isSharedCheck_5166_ = !lean_is_exclusive(v___x_5154_);
if (v_isSharedCheck_5166_ == 0)
{
v___x_5161_ = v___x_5154_;
v_isShared_5162_ = v_isSharedCheck_5166_;
goto v_resetjp_5160_;
}
else
{
lean_inc(v_a_5159_);
lean_dec(v___x_5154_);
v___x_5161_ = lean_box(0);
v_isShared_5162_ = v_isSharedCheck_5166_;
goto v_resetjp_5160_;
}
v_resetjp_5160_:
{
lean_object* v___x_5164_; 
if (v_isShared_5162_ == 0)
{
v___x_5164_ = v___x_5161_;
goto v_reusejp_5163_;
}
else
{
lean_object* v_reuseFailAlloc_5165_; 
v_reuseFailAlloc_5165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5165_, 0, v_a_5159_);
v___x_5164_ = v_reuseFailAlloc_5165_;
goto v_reusejp_5163_;
}
v_reusejp_5163_:
{
return v___x_5164_;
}
}
}
}
else
{
lean_object* v___x_5167_; 
lean_dec(v_fvarId_5131_);
v___x_5167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5167_, 0, v_b_5135_);
return v___x_5167_;
}
v___jp_5144_:
{
size_t v___x_5146_; size_t v___x_5147_; 
v___x_5146_ = ((size_t)1ULL);
v___x_5147_ = lean_usize_add(v_i_5133_, v___x_5146_);
v_i_5133_ = v___x_5147_;
v_b_5135_ = v_a_5145_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__5___boxed(lean_object* v_fvarId_5168_, lean_object* v_as_5169_, lean_object* v_i_5170_, lean_object* v_stop_5171_, lean_object* v_b_5172_, lean_object* v___y_5173_, lean_object* v___y_5174_, lean_object* v___y_5175_, lean_object* v___y_5176_, lean_object* v___y_5177_, lean_object* v___y_5178_, lean_object* v___y_5179_, lean_object* v___y_5180_){
_start:
{
size_t v_i_boxed_5181_; size_t v_stop_boxed_5182_; lean_object* v_res_5183_; 
v_i_boxed_5181_ = lean_unbox_usize(v_i_5170_);
lean_dec(v_i_5170_);
v_stop_boxed_5182_ = lean_unbox_usize(v_stop_5171_);
lean_dec(v_stop_5171_);
v_res_5183_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__5(v_fvarId_5168_, v_as_5169_, v_i_boxed_5181_, v_stop_boxed_5182_, v_b_5172_, v___y_5173_, v___y_5174_, v___y_5175_, v___y_5176_, v___y_5177_, v___y_5178_, v___y_5179_);
lean_dec(v___y_5179_);
lean_dec_ref(v___y_5178_);
lean_dec(v___y_5177_);
lean_dec_ref(v___y_5176_);
lean_dec(v___y_5175_);
lean_dec(v___y_5174_);
lean_dec(v___y_5173_);
lean_dec_ref(v_as_5169_);
return v_res_5183_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___redArg(lean_object* v_as_5184_, size_t v_sz_5185_, size_t v_i_5186_, lean_object* v_b_5187_){
_start:
{
lean_object* v_a_5190_; uint8_t v___x_5194_; 
v___x_5194_ = lean_usize_dec_lt(v_i_5186_, v_sz_5185_);
if (v___x_5194_ == 0)
{
lean_object* v___x_5195_; 
v___x_5195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5195_, 0, v_b_5187_);
return v___x_5195_;
}
else
{
lean_object* v_a_5196_; lean_object* v_fst_5197_; lean_object* v_snd_5198_; lean_object* v_fvarId_5199_; lean_object* v___x_5200_; 
v_a_5196_ = lean_array_uget_borrowed(v_as_5184_, v_i_5186_);
v_fst_5197_ = lean_ctor_get(v_a_5196_, 0);
v_snd_5198_ = lean_ctor_get(v_a_5196_, 1);
v_fvarId_5199_ = lean_ctor_get(v_fst_5197_, 0);
v___x_5200_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__1___redArg(v_b_5187_, v_fvarId_5199_);
if (lean_obj_tag(v___x_5200_) == 1)
{
lean_object* v_val_5201_; uint8_t v___x_5202_; 
v_val_5201_ = lean_ctor_get(v___x_5200_, 0);
lean_inc(v_val_5201_);
lean_dec_ref_known(v___x_5200_, 1);
v___x_5202_ = l_Lean_Compiler_LCNF_instBEqArg_beq___redArg(v_snd_5198_, v_val_5201_);
lean_dec(v_val_5201_);
if (v___x_5202_ == 0)
{
lean_object* v___x_5203_; 
v___x_5203_ = l_Std_DHashMap_Internal_Raw_u2080_erase___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_eraseCandidate_spec__2___redArg(v_b_5187_, v_fvarId_5199_);
v_a_5190_ = v___x_5203_;
goto v___jp_5189_;
}
else
{
v_a_5190_ = v_b_5187_;
goto v___jp_5189_;
}
}
else
{
lean_dec(v___x_5200_);
v_a_5190_ = v_b_5187_;
goto v___jp_5189_;
}
}
v___jp_5189_:
{
size_t v___x_5191_; size_t v___x_5192_; 
v___x_5191_ = ((size_t)1ULL);
v___x_5192_ = lean_usize_add(v_i_5186_, v___x_5191_);
v_i_5186_ = v___x_5192_;
v_b_5187_ = v_a_5190_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___redArg___boxed(lean_object* v_as_5204_, lean_object* v_sz_5205_, lean_object* v_i_5206_, lean_object* v_b_5207_, lean_object* v___y_5208_){
_start:
{
size_t v_sz_boxed_5209_; size_t v_i_boxed_5210_; lean_object* v_res_5211_; 
v_sz_boxed_5209_ = lean_unbox_usize(v_sz_5205_);
lean_dec(v_sz_5205_);
v_i_boxed_5210_ = lean_unbox_usize(v_i_5206_);
lean_dec(v_i_5206_);
v_res_5211_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___redArg(v_as_5204_, v_sz_boxed_5209_, v_i_boxed_5210_, v_b_5207_);
lean_dec_ref(v_as_5204_);
return v_res_5211_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___lam__0(lean_object* v___x_5212_, lean_object* v___x_5213_, lean_object* v___x_5214_, lean_object* v___x_5215_, lean_object* v___y_5216_, lean_object* v___y_5217_, lean_object* v___y_5218_, lean_object* v___y_5219_, lean_object* v___y_5220_, lean_object* v___y_5221_, lean_object* v___y_5222_){
_start:
{
lean_object* v___y_5232_; uint8_t v___x_5233_; 
v___x_5233_ = lean_nat_dec_lt(v___x_5213_, v___x_5214_);
if (v___x_5233_ == 0)
{
goto v___jp_5224_;
}
else
{
lean_object* v___x_5234_; uint8_t v___x_5235_; 
v___x_5234_ = lean_box(0);
v___x_5235_ = lean_nat_dec_le(v___x_5214_, v___x_5214_);
if (v___x_5235_ == 0)
{
if (v___x_5233_ == 0)
{
goto v___jp_5224_;
}
else
{
size_t v___x_5236_; size_t v___x_5237_; lean_object* v___x_5238_; 
v___x_5236_ = ((size_t)0ULL);
v___x_5237_ = lean_usize_of_nat(v___x_5214_);
v___x_5238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(v___x_5215_, v___x_5236_, v___x_5237_, v___x_5234_, v___y_5218_);
v___y_5232_ = v___x_5238_;
goto v___jp_5231_;
}
}
else
{
size_t v___x_5239_; size_t v___x_5240_; lean_object* v___x_5241_; 
v___x_5239_ = ((size_t)0ULL);
v___x_5240_ = lean_usize_of_nat(v___x_5214_);
v___x_5241_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(v___x_5215_, v___x_5239_, v___x_5240_, v___x_5234_, v___y_5218_);
v___y_5232_ = v___x_5241_;
goto v___jp_5231_;
}
}
v___jp_5224_:
{
switch(lean_obj_tag(v___x_5212_))
{
case 0:
{
lean_object* v_code_5225_; lean_object* v___x_5226_; 
v_code_5225_ = lean_ctor_get(v___x_5212_, 2);
lean_inc_ref(v_code_5225_);
lean_dec_ref_known(v___x_5212_, 3);
lean_inc(v___y_5216_);
v___x_5226_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(v_code_5225_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_);
return v___x_5226_;
}
case 1:
{
lean_object* v_code_5227_; lean_object* v___x_5228_; 
v_code_5227_ = lean_ctor_get(v___x_5212_, 1);
lean_inc_ref(v_code_5227_);
lean_dec_ref_known(v___x_5212_, 2);
lean_inc(v___y_5216_);
v___x_5228_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(v_code_5227_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_);
return v___x_5228_;
}
default: 
{
lean_object* v_code_5229_; lean_object* v___x_5230_; 
v_code_5229_ = lean_ctor_get(v___x_5212_, 0);
lean_inc_ref(v_code_5229_);
lean_dec_ref_known(v___x_5212_, 1);
lean_inc(v___y_5216_);
v___x_5230_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(v_code_5229_, v___y_5216_, v___y_5217_, v___y_5218_, v___y_5219_, v___y_5220_, v___y_5221_, v___y_5222_);
return v___x_5230_;
}
}
}
v___jp_5231_:
{
if (lean_obj_tag(v___y_5232_) == 0)
{
lean_dec_ref_known(v___y_5232_, 1);
goto v___jp_5224_;
}
else
{
lean_dec_ref(v___x_5212_);
return v___y_5232_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___lam__0___boxed(lean_object* v___x_5242_, lean_object* v___x_5243_, lean_object* v___x_5244_, lean_object* v___x_5245_, lean_object* v___y_5246_, lean_object* v___y_5247_, lean_object* v___y_5248_, lean_object* v___y_5249_, lean_object* v___y_5250_, lean_object* v___y_5251_, lean_object* v___y_5252_, lean_object* v___y_5253_){
_start:
{
lean_object* v_res_5254_; 
v_res_5254_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___lam__0(v___x_5242_, v___x_5243_, v___x_5244_, v___x_5245_, v___y_5246_, v___y_5247_, v___y_5248_, v___y_5249_, v___y_5250_, v___y_5251_, v___y_5252_);
lean_dec(v___y_5252_);
lean_dec_ref(v___y_5251_);
lean_dec(v___y_5250_);
lean_dec_ref(v___y_5249_);
lean_dec(v___y_5248_);
lean_dec(v___y_5247_);
lean_dec(v___y_5246_);
lean_dec_ref(v___x_5245_);
lean_dec(v___x_5244_);
lean_dec(v___x_5243_);
return v_res_5254_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6(lean_object* v_as_5255_, size_t v_i_5256_, size_t v_stop_5257_, lean_object* v_b_5258_, lean_object* v___y_5259_, lean_object* v___y_5260_, lean_object* v___y_5261_, lean_object* v___y_5262_, lean_object* v___y_5263_, lean_object* v___y_5264_, lean_object* v___y_5265_){
_start:
{
uint8_t v___x_5267_; 
v___x_5267_ = lean_usize_dec_eq(v_i_5256_, v_stop_5257_);
if (v___x_5267_ == 0)
{
lean_object* v___x_5268_; lean_object* v___x_5269_; lean_object* v___x_5270_; lean_object* v___x_5271_; lean_object* v___f_5272_; lean_object* v___x_5273_; 
v___x_5268_ = lean_array_uget_borrowed(v_as_5255_, v_i_5256_);
v___x_5269_ = l_Lean_Compiler_LCNF_Alt_getParams(v___x_5268_);
v___x_5270_ = lean_unsigned_to_nat(0u);
v___x_5271_ = lean_array_get_size(v___x_5269_);
lean_inc(v___x_5268_);
v___f_5272_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5272_, 0, v___x_5268_);
lean_closure_set(v___f_5272_, 1, v___x_5270_);
lean_closure_set(v___f_5272_, 2, v___x_5271_);
lean_closure_set(v___f_5272_, 3, v___x_5269_);
v___x_5273_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg(v___f_5272_, v___y_5259_, v___y_5260_, v___y_5261_, v___y_5262_, v___y_5263_, v___y_5264_, v___y_5265_);
if (lean_obj_tag(v___x_5273_) == 0)
{
lean_object* v_a_5274_; size_t v___x_5275_; size_t v___x_5276_; 
v_a_5274_ = lean_ctor_get(v___x_5273_, 0);
lean_inc(v_a_5274_);
lean_dec_ref_known(v___x_5273_, 1);
v___x_5275_ = ((size_t)1ULL);
v___x_5276_ = lean_usize_add(v_i_5256_, v___x_5275_);
v_i_5256_ = v___x_5276_;
v_b_5258_ = v_a_5274_;
goto _start;
}
else
{
return v___x_5273_;
}
}
else
{
lean_object* v___x_5278_; 
v___x_5278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5278_, 0, v_b_5258_);
return v___x_5278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(lean_object* v_code_5279_, lean_object* v___y_5280_, lean_object* v___y_5281_, lean_object* v___y_5282_, lean_object* v___y_5283_, lean_object* v___y_5284_, lean_object* v___y_5285_, lean_object* v___y_5286_){
_start:
{
switch(lean_obj_tag(v_code_5279_))
{
case 0:
{
lean_object* v_decl_5288_; lean_object* v_k_5289_; lean_object* v_fvarId_5290_; lean_object* v___x_5291_; 
v_decl_5288_ = lean_ctor_get(v_code_5279_, 0);
lean_inc_ref(v_decl_5288_);
v_k_5289_ = lean_ctor_get(v_code_5279_, 1);
lean_inc_ref(v_k_5289_);
lean_dec_ref_known(v_code_5279_, 2);
v_fvarId_5290_ = lean_ctor_get(v_decl_5288_, 0);
lean_inc(v_fvarId_5290_);
lean_dec_ref(v_decl_5288_);
v___x_5291_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v_fvarId_5290_, v___y_5282_);
if (lean_obj_tag(v___x_5291_) == 0)
{
lean_dec_ref_known(v___x_5291_, 1);
v_code_5279_ = v_k_5289_;
goto _start;
}
else
{
lean_dec_ref(v_k_5289_);
lean_dec(v___y_5280_);
return v___x_5291_;
}
}
case 1:
{
lean_object* v_decl_5293_; lean_object* v_k_5294_; lean_object* v___x_5295_; 
v_decl_5293_ = lean_ctor_get(v_code_5279_, 0);
lean_inc_ref_n(v_decl_5293_, 2);
v_k_5294_ = lean_ctor_get(v_code_5279_, 1);
lean_inc_ref(v_k_5294_);
lean_dec_ref_known(v_code_5279_, 2);
v___x_5295_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(v_decl_5293_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
if (lean_obj_tag(v___x_5295_) == 0)
{
lean_object* v_fvarId_5296_; lean_object* v___x_5297_; 
lean_dec_ref_known(v___x_5295_, 1);
v_fvarId_5296_ = lean_ctor_get(v_decl_5293_, 0);
lean_inc(v_fvarId_5296_);
lean_dec_ref(v_decl_5293_);
v___x_5297_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v_fvarId_5296_, v___y_5282_);
if (lean_obj_tag(v___x_5297_) == 0)
{
lean_dec_ref_known(v___x_5297_, 1);
v_code_5279_ = v_k_5294_;
goto _start;
}
else
{
lean_dec_ref(v_k_5294_);
lean_dec(v___y_5280_);
return v___x_5297_;
}
}
else
{
lean_dec_ref(v_k_5294_);
lean_dec_ref(v_decl_5293_);
lean_dec(v___y_5280_);
return v___x_5295_;
}
}
case 2:
{
lean_object* v_decl_5299_; lean_object* v_k_5300_; lean_object* v___x_5301_; 
v_decl_5299_ = lean_ctor_get(v_code_5279_, 0);
lean_inc_ref_n(v_decl_5299_, 2);
v_k_5300_ = lean_ctor_get(v_code_5279_, 1);
lean_inc_ref(v_k_5300_);
lean_dec_ref_known(v_code_5279_, 2);
v___x_5301_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(v_decl_5299_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
if (lean_obj_tag(v___x_5301_) == 0)
{
lean_object* v___x_5302_; 
lean_dec_ref_known(v___x_5301_, 1);
v___x_5302_ = l_Lean_Compiler_LCNF_ScopeM_getScope___redArg(v___y_5282_);
if (lean_obj_tag(v___x_5302_) == 0)
{
lean_object* v_a_5303_; lean_object* v_fvarId_5304_; lean_object* v___x_5305_; lean_object* v___x_5306_; 
v_a_5303_ = lean_ctor_get(v___x_5302_, 0);
lean_inc(v_a_5303_);
lean_dec_ref_known(v___x_5302_, 1);
v_fvarId_5304_ = lean_ctor_get(v_decl_5299_, 0);
lean_inc_n(v_fvarId_5304_, 2);
lean_dec_ref(v_decl_5299_);
v___x_5305_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5304_, v_a_5303_, v___y_5280_);
v___x_5306_ = l_Lean_Compiler_LCNF_ScopeM_addToScope___redArg(v_fvarId_5304_, v___y_5282_);
if (lean_obj_tag(v___x_5306_) == 0)
{
lean_dec_ref_known(v___x_5306_, 1);
v_code_5279_ = v_k_5300_;
v___y_5280_ = v___x_5305_;
goto _start;
}
else
{
lean_dec(v___x_5305_);
lean_dec_ref(v_k_5300_);
return v___x_5306_;
}
}
else
{
lean_object* v_a_5308_; lean_object* v___x_5310_; uint8_t v_isShared_5311_; uint8_t v_isSharedCheck_5315_; 
lean_dec_ref(v_k_5300_);
lean_dec_ref(v_decl_5299_);
lean_dec(v___y_5280_);
v_a_5308_ = lean_ctor_get(v___x_5302_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5302_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5310_ = v___x_5302_;
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
else
{
lean_inc(v_a_5308_);
lean_dec(v___x_5302_);
v___x_5310_ = lean_box(0);
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
v_resetjp_5309_:
{
lean_object* v___x_5313_; 
if (v_isShared_5311_ == 0)
{
v___x_5313_ = v___x_5310_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v_a_5308_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
}
else
{
lean_dec_ref(v_k_5300_);
lean_dec_ref(v_decl_5299_);
lean_dec(v___y_5280_);
return v___x_5301_;
}
}
case 3:
{
lean_object* v_fvarId_5316_; lean_object* v_args_5317_; lean_object* v_a_5319_; lean_object* v___y_5326_; uint8_t v___x_5336_; lean_object* v___x_5337_; 
v_fvarId_5316_ = lean_ctor_get(v_code_5279_, 0);
lean_inc_n(v_fvarId_5316_, 2);
v_args_5317_ = lean_ctor_get(v_code_5279_, 1);
lean_inc_ref(v_args_5317_);
lean_dec_ref_known(v_code_5279_, 2);
v___x_5336_ = 0;
v___x_5337_ = l_Lean_Compiler_LCNF_getFunDecl(v___x_5336_, v_fvarId_5316_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
if (lean_obj_tag(v___x_5337_) == 0)
{
lean_object* v_a_5338_; lean_object* v___x_5339_; lean_object* v___x_5340_; 
v_a_5338_ = lean_ctor_get(v___x_5337_, 0);
lean_inc(v_a_5338_);
lean_dec_ref_known(v___x_5337_, 1);
v___x_5339_ = lean_st_ref_get(v___y_5281_);
v___x_5340_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v___x_5339_, v_fvarId_5316_);
lean_dec(v___x_5339_);
if (lean_obj_tag(v___x_5340_) == 1)
{
lean_object* v_val_5341_; lean_object* v_params_5342_; lean_object* v___x_5343_; size_t v_sz_5344_; size_t v___x_5345_; lean_object* v___x_5346_; 
lean_dec(v___y_5280_);
v_val_5341_ = lean_ctor_get(v___x_5340_, 0);
lean_inc(v_val_5341_);
lean_dec_ref_known(v___x_5340_, 1);
v_params_5342_ = lean_ctor_get(v_a_5338_, 2);
lean_inc_ref(v_params_5342_);
lean_dec(v_a_5338_);
v___x_5343_ = l_Array_zip___redArg(v_params_5342_, v_args_5317_);
lean_dec_ref(v_args_5317_);
lean_dec_ref(v_params_5342_);
v_sz_5344_ = lean_array_size(v___x_5343_);
v___x_5345_ = ((size_t)0ULL);
v___x_5346_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___redArg(v___x_5343_, v_sz_5344_, v___x_5345_, v_val_5341_);
lean_dec_ref(v___x_5343_);
if (lean_obj_tag(v___x_5346_) == 0)
{
lean_object* v_a_5347_; lean_object* v___x_5349_; uint8_t v_isShared_5350_; uint8_t v_isSharedCheck_5358_; 
v_a_5347_ = lean_ctor_get(v___x_5346_, 0);
v_isSharedCheck_5358_ = !lean_is_exclusive(v___x_5346_);
if (v_isSharedCheck_5358_ == 0)
{
v___x_5349_ = v___x_5346_;
v_isShared_5350_ = v_isSharedCheck_5358_;
goto v_resetjp_5348_;
}
else
{
lean_inc(v_a_5347_);
lean_dec(v___x_5346_);
v___x_5349_ = lean_box(0);
v_isShared_5350_ = v_isSharedCheck_5358_;
goto v_resetjp_5348_;
}
v_resetjp_5348_:
{
lean_object* v___x_5351_; lean_object* v___x_5352_; lean_object* v___x_5353_; lean_object* v___x_5354_; lean_object* v___x_5356_; 
v___x_5351_ = lean_st_ref_take(v___y_5281_);
v___x_5352_ = lean_box(0);
v___x_5353_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5316_, v_a_5347_, v___x_5351_);
v___x_5354_ = lean_st_ref_put(v___y_5281_, v___x_5353_);
if (v_isShared_5350_ == 0)
{
lean_ctor_set(v___x_5349_, 0, v___x_5352_);
v___x_5356_ = v___x_5349_;
goto v_reusejp_5355_;
}
else
{
lean_object* v_reuseFailAlloc_5357_; 
v_reuseFailAlloc_5357_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5357_, 0, v___x_5352_);
v___x_5356_ = v_reuseFailAlloc_5357_;
goto v_reusejp_5355_;
}
v_reusejp_5355_:
{
return v___x_5356_;
}
}
}
else
{
lean_object* v_a_5359_; lean_object* v___x_5361_; uint8_t v_isShared_5362_; uint8_t v_isSharedCheck_5366_; 
lean_dec(v_fvarId_5316_);
v_a_5359_ = lean_ctor_get(v___x_5346_, 0);
v_isSharedCheck_5366_ = !lean_is_exclusive(v___x_5346_);
if (v_isSharedCheck_5366_ == 0)
{
v___x_5361_ = v___x_5346_;
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
else
{
lean_inc(v_a_5359_);
lean_dec(v___x_5346_);
v___x_5361_ = lean_box(0);
v_isShared_5362_ = v_isSharedCheck_5366_;
goto v_resetjp_5360_;
}
v_resetjp_5360_:
{
lean_object* v___x_5364_; 
if (v_isShared_5362_ == 0)
{
v___x_5364_ = v___x_5361_;
goto v_reusejp_5363_;
}
else
{
lean_object* v_reuseFailAlloc_5365_; 
v_reuseFailAlloc_5365_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5365_, 0, v_a_5359_);
v___x_5364_ = v_reuseFailAlloc_5365_;
goto v_reusejp_5363_;
}
v_reusejp_5363_:
{
return v___x_5364_;
}
}
}
}
else
{
lean_object* v_params_5367_; lean_object* v___x_5368_; lean_object* v___x_5369_; lean_object* v___x_5370_; lean_object* v___x_5371_; uint8_t v___x_5372_; 
lean_dec(v___x_5340_);
v_params_5367_ = lean_ctor_get(v_a_5338_, 2);
lean_inc_ref(v_params_5367_);
lean_dec(v_a_5338_);
v___x_5368_ = lean_unsigned_to_nat(0u);
v___x_5369_ = lean_obj_once(&l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1, &l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1_once, _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default___closed__1);
v___x_5370_ = l_Array_zip___redArg(v_params_5367_, v_args_5317_);
lean_dec_ref(v_args_5317_);
lean_dec_ref(v_params_5367_);
v___x_5371_ = lean_array_get_size(v___x_5370_);
v___x_5372_ = lean_nat_dec_lt(v___x_5368_, v___x_5371_);
if (v___x_5372_ == 0)
{
lean_dec_ref(v___x_5370_);
lean_dec(v___y_5280_);
v_a_5319_ = v___x_5369_;
goto v___jp_5318_;
}
else
{
uint8_t v___x_5373_; 
v___x_5373_ = lean_nat_dec_le(v___x_5371_, v___x_5371_);
if (v___x_5373_ == 0)
{
if (v___x_5372_ == 0)
{
lean_dec_ref(v___x_5370_);
lean_dec(v___y_5280_);
v_a_5319_ = v___x_5369_;
goto v___jp_5318_;
}
else
{
size_t v___x_5374_; size_t v___x_5375_; lean_object* v___x_5376_; 
v___x_5374_ = ((size_t)0ULL);
v___x_5375_ = lean_usize_of_nat(v___x_5371_);
lean_inc(v_fvarId_5316_);
v___x_5376_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__5(v_fvarId_5316_, v___x_5370_, v___x_5374_, v___x_5375_, v___x_5369_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
lean_dec(v___y_5280_);
lean_dec_ref(v___x_5370_);
v___y_5326_ = v___x_5376_;
goto v___jp_5325_;
}
}
else
{
size_t v___x_5377_; size_t v___x_5378_; lean_object* v___x_5379_; 
v___x_5377_ = ((size_t)0ULL);
v___x_5378_ = lean_usize_of_nat(v___x_5371_);
lean_inc(v_fvarId_5316_);
v___x_5379_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__5(v_fvarId_5316_, v___x_5370_, v___x_5377_, v___x_5378_, v___x_5369_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
lean_dec(v___y_5280_);
lean_dec_ref(v___x_5370_);
v___y_5326_ = v___x_5379_;
goto v___jp_5325_;
}
}
}
}
else
{
lean_object* v_a_5380_; lean_object* v___x_5382_; uint8_t v_isShared_5383_; uint8_t v_isSharedCheck_5387_; 
lean_dec_ref(v_args_5317_);
lean_dec(v_fvarId_5316_);
lean_dec(v___y_5280_);
v_a_5380_ = lean_ctor_get(v___x_5337_, 0);
v_isSharedCheck_5387_ = !lean_is_exclusive(v___x_5337_);
if (v_isSharedCheck_5387_ == 0)
{
v___x_5382_ = v___x_5337_;
v_isShared_5383_ = v_isSharedCheck_5387_;
goto v_resetjp_5381_;
}
else
{
lean_inc(v_a_5380_);
lean_dec(v___x_5337_);
v___x_5382_ = lean_box(0);
v_isShared_5383_ = v_isSharedCheck_5387_;
goto v_resetjp_5381_;
}
v_resetjp_5381_:
{
lean_object* v___x_5385_; 
if (v_isShared_5383_ == 0)
{
v___x_5385_ = v___x_5382_;
goto v_reusejp_5384_;
}
else
{
lean_object* v_reuseFailAlloc_5386_; 
v_reuseFailAlloc_5386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5386_, 0, v_a_5380_);
v___x_5385_ = v_reuseFailAlloc_5386_;
goto v_reusejp_5384_;
}
v_reusejp_5384_:
{
return v___x_5385_;
}
}
}
v___jp_5318_:
{
lean_object* v___x_5320_; lean_object* v___x_5321_; lean_object* v___x_5322_; lean_object* v___x_5323_; lean_object* v___x_5324_; 
v___x_5320_ = lean_st_ref_take(v___y_5281_);
v___x_5321_ = lean_box(0);
v___x_5322_ = l_Std_DTreeMap_Internal_Impl_insert___at___00Lean_FVarIdSet_insert_spec__1___redArg(v_fvarId_5316_, v_a_5319_, v___x_5320_);
v___x_5323_ = lean_st_ref_put(v___y_5281_, v___x_5322_);
v___x_5324_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5324_, 0, v___x_5321_);
return v___x_5324_;
}
v___jp_5325_:
{
if (lean_obj_tag(v___y_5326_) == 0)
{
lean_object* v_a_5327_; 
v_a_5327_ = lean_ctor_get(v___y_5326_, 0);
lean_inc(v_a_5327_);
lean_dec_ref_known(v___y_5326_, 1);
v_a_5319_ = v_a_5327_;
goto v___jp_5318_;
}
else
{
lean_object* v_a_5328_; lean_object* v___x_5330_; uint8_t v_isShared_5331_; uint8_t v_isSharedCheck_5335_; 
lean_dec(v_fvarId_5316_);
v_a_5328_ = lean_ctor_get(v___y_5326_, 0);
v_isSharedCheck_5335_ = !lean_is_exclusive(v___y_5326_);
if (v_isSharedCheck_5335_ == 0)
{
v___x_5330_ = v___y_5326_;
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
else
{
lean_inc(v_a_5328_);
lean_dec(v___y_5326_);
v___x_5330_ = lean_box(0);
v_isShared_5331_ = v_isSharedCheck_5335_;
goto v_resetjp_5329_;
}
v_resetjp_5329_:
{
lean_object* v___x_5333_; 
if (v_isShared_5331_ == 0)
{
v___x_5333_ = v___x_5330_;
goto v_reusejp_5332_;
}
else
{
lean_object* v_reuseFailAlloc_5334_; 
v_reuseFailAlloc_5334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5334_, 0, v_a_5328_);
v___x_5333_ = v_reuseFailAlloc_5334_;
goto v_reusejp_5332_;
}
v_reusejp_5332_:
{
return v___x_5333_;
}
}
}
}
}
case 4:
{
lean_object* v_cases_5388_; lean_object* v___x_5390_; uint8_t v_isShared_5391_; uint8_t v_isSharedCheck_5410_; 
v_cases_5388_ = lean_ctor_get(v_code_5279_, 0);
v_isSharedCheck_5410_ = !lean_is_exclusive(v_code_5279_);
if (v_isSharedCheck_5410_ == 0)
{
v___x_5390_ = v_code_5279_;
v_isShared_5391_ = v_isSharedCheck_5410_;
goto v_resetjp_5389_;
}
else
{
lean_inc(v_cases_5388_);
lean_dec(v_code_5279_);
v___x_5390_ = lean_box(0);
v_isShared_5391_ = v_isSharedCheck_5410_;
goto v_resetjp_5389_;
}
v_resetjp_5389_:
{
lean_object* v_alts_5392_; lean_object* v___x_5393_; lean_object* v___x_5394_; lean_object* v___x_5395_; uint8_t v___x_5396_; 
v_alts_5392_ = lean_ctor_get(v_cases_5388_, 3);
lean_inc_ref(v_alts_5392_);
lean_dec_ref(v_cases_5388_);
v___x_5393_ = lean_unsigned_to_nat(0u);
v___x_5394_ = lean_array_get_size(v_alts_5392_);
v___x_5395_ = lean_box(0);
v___x_5396_ = lean_nat_dec_lt(v___x_5393_, v___x_5394_);
if (v___x_5396_ == 0)
{
lean_object* v___x_5398_; 
lean_dec_ref(v_alts_5392_);
lean_dec(v___y_5280_);
if (v_isShared_5391_ == 0)
{
lean_ctor_set_tag(v___x_5390_, 0);
lean_ctor_set(v___x_5390_, 0, v___x_5395_);
v___x_5398_ = v___x_5390_;
goto v_reusejp_5397_;
}
else
{
lean_object* v_reuseFailAlloc_5399_; 
v_reuseFailAlloc_5399_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5399_, 0, v___x_5395_);
v___x_5398_ = v_reuseFailAlloc_5399_;
goto v_reusejp_5397_;
}
v_reusejp_5397_:
{
return v___x_5398_;
}
}
else
{
uint8_t v___x_5400_; 
v___x_5400_ = lean_nat_dec_le(v___x_5394_, v___x_5394_);
if (v___x_5400_ == 0)
{
if (v___x_5396_ == 0)
{
lean_object* v___x_5402_; 
lean_dec_ref(v_alts_5392_);
lean_dec(v___y_5280_);
if (v_isShared_5391_ == 0)
{
lean_ctor_set_tag(v___x_5390_, 0);
lean_ctor_set(v___x_5390_, 0, v___x_5395_);
v___x_5402_ = v___x_5390_;
goto v_reusejp_5401_;
}
else
{
lean_object* v_reuseFailAlloc_5403_; 
v_reuseFailAlloc_5403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5403_, 0, v___x_5395_);
v___x_5402_ = v_reuseFailAlloc_5403_;
goto v_reusejp_5401_;
}
v_reusejp_5401_:
{
return v___x_5402_;
}
}
else
{
size_t v___x_5404_; size_t v___x_5405_; lean_object* v___x_5406_; 
lean_del_object(v___x_5390_);
v___x_5404_ = ((size_t)0ULL);
v___x_5405_ = lean_usize_of_nat(v___x_5394_);
v___x_5406_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6(v_alts_5392_, v___x_5404_, v___x_5405_, v___x_5395_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
lean_dec(v___y_5280_);
lean_dec_ref(v_alts_5392_);
return v___x_5406_;
}
}
else
{
size_t v___x_5407_; size_t v___x_5408_; lean_object* v___x_5409_; 
lean_del_object(v___x_5390_);
v___x_5407_ = ((size_t)0ULL);
v___x_5408_ = lean_usize_of_nat(v___x_5394_);
v___x_5409_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6(v_alts_5392_, v___x_5407_, v___x_5408_, v___x_5395_, v___y_5280_, v___y_5281_, v___y_5282_, v___y_5283_, v___y_5284_, v___y_5285_, v___y_5286_);
lean_dec(v___y_5280_);
lean_dec_ref(v_alts_5392_);
return v___x_5409_;
}
}
}
}
default: 
{
lean_object* v___x_5412_; uint8_t v_isShared_5413_; uint8_t v_isSharedCheck_5418_; 
lean_dec(v___y_5280_);
v_isSharedCheck_5418_ = !lean_is_exclusive(v_code_5279_);
if (v_isSharedCheck_5418_ == 0)
{
lean_object* v_unused_5419_; 
v_unused_5419_ = lean_ctor_get(v_code_5279_, 0);
lean_dec(v_unused_5419_);
v___x_5412_ = v_code_5279_;
v_isShared_5413_ = v_isSharedCheck_5418_;
goto v_resetjp_5411_;
}
else
{
lean_dec(v_code_5279_);
v___x_5412_ = lean_box(0);
v_isShared_5413_ = v_isSharedCheck_5418_;
goto v_resetjp_5411_;
}
v_resetjp_5411_:
{
lean_object* v___x_5414_; lean_object* v___x_5416_; 
v___x_5414_ = lean_box(0);
if (v_isShared_5413_ == 0)
{
lean_ctor_set_tag(v___x_5412_, 0);
lean_ctor_set(v___x_5412_, 0, v___x_5414_);
v___x_5416_ = v___x_5412_;
goto v_reusejp_5415_;
}
else
{
lean_object* v_reuseFailAlloc_5417_; 
v_reuseFailAlloc_5417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5417_, 0, v___x_5414_);
v___x_5416_ = v_reuseFailAlloc_5417_;
goto v_reusejp_5415_;
}
v_reusejp_5415_:
{
return v___x_5416_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lam__0(lean_object* v___x_5420_, lean_object* v___x_5421_, lean_object* v_value_5422_, lean_object* v_params_5423_, lean_object* v___y_5424_, lean_object* v___y_5425_, lean_object* v___y_5426_, lean_object* v___y_5427_, lean_object* v___y_5428_, lean_object* v___y_5429_, lean_object* v___y_5430_){
_start:
{
lean_object* v___y_5433_; uint8_t v___x_5435_; 
v___x_5435_ = lean_nat_dec_lt(v___x_5420_, v___x_5421_);
if (v___x_5435_ == 0)
{
lean_object* v___x_5436_; 
lean_inc(v___y_5424_);
v___x_5436_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(v_value_5422_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_);
return v___x_5436_;
}
else
{
lean_object* v___x_5437_; uint8_t v___x_5438_; 
v___x_5437_ = lean_box(0);
v___x_5438_ = lean_nat_dec_le(v___x_5421_, v___x_5421_);
if (v___x_5438_ == 0)
{
if (v___x_5435_ == 0)
{
lean_object* v___x_5439_; 
lean_inc(v___y_5424_);
v___x_5439_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(v_value_5422_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_);
return v___x_5439_;
}
else
{
size_t v___x_5440_; size_t v___x_5441_; lean_object* v___x_5442_; 
v___x_5440_ = ((size_t)0ULL);
v___x_5441_ = lean_usize_of_nat(v___x_5421_);
v___x_5442_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(v_params_5423_, v___x_5440_, v___x_5441_, v___x_5437_, v___y_5426_);
v___y_5433_ = v___x_5442_;
goto v___jp_5432_;
}
}
else
{
size_t v___x_5443_; size_t v___x_5444_; lean_object* v___x_5445_; 
v___x_5443_ = ((size_t)0ULL);
v___x_5444_ = lean_usize_of_nat(v___x_5421_);
v___x_5445_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(v_params_5423_, v___x_5443_, v___x_5444_, v___x_5437_, v___y_5426_);
v___y_5433_ = v___x_5445_;
goto v___jp_5432_;
}
}
v___jp_5432_:
{
if (lean_obj_tag(v___y_5433_) == 0)
{
lean_object* v___x_5434_; 
lean_dec_ref_known(v___y_5433_, 1);
lean_inc(v___y_5424_);
v___x_5434_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(v_value_5422_, v___y_5424_, v___y_5425_, v___y_5426_, v___y_5427_, v___y_5428_, v___y_5429_, v___y_5430_);
return v___x_5434_;
}
else
{
lean_dec_ref(v_value_5422_);
return v___y_5433_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lam__0___boxed(lean_object* v___x_5446_, lean_object* v___x_5447_, lean_object* v_value_5448_, lean_object* v_params_5449_, lean_object* v___y_5450_, lean_object* v___y_5451_, lean_object* v___y_5452_, lean_object* v___y_5453_, lean_object* v___y_5454_, lean_object* v___y_5455_, lean_object* v___y_5456_, lean_object* v___y_5457_){
_start:
{
lean_object* v_res_5458_; 
v_res_5458_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lam__0(v___x_5446_, v___x_5447_, v_value_5448_, v_params_5449_, v___y_5450_, v___y_5451_, v___y_5452_, v___y_5453_, v___y_5454_, v___y_5455_, v___y_5456_);
lean_dec(v___y_5456_);
lean_dec_ref(v___y_5455_);
lean_dec(v___y_5454_);
lean_dec_ref(v___y_5453_);
lean_dec(v___y_5452_);
lean_dec(v___y_5451_);
lean_dec(v___y_5450_);
lean_dec_ref(v_params_5449_);
lean_dec(v___x_5447_);
lean_dec(v___x_5446_);
return v_res_5458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(lean_object* v_fn_5459_, lean_object* v___y_5460_, lean_object* v___y_5461_, lean_object* v___y_5462_, lean_object* v___y_5463_, lean_object* v___y_5464_, lean_object* v___y_5465_, lean_object* v___y_5466_){
_start:
{
lean_object* v_params_5468_; lean_object* v_value_5469_; lean_object* v___x_5470_; lean_object* v___x_5471_; lean_object* v___f_5472_; lean_object* v___x_5473_; 
v_params_5468_ = lean_ctor_get(v_fn_5459_, 2);
lean_inc_ref(v_params_5468_);
v_value_5469_ = lean_ctor_get(v_fn_5459_, 4);
lean_inc_ref(v_value_5469_);
lean_dec_ref(v_fn_5459_);
v___x_5470_ = lean_unsigned_to_nat(0u);
v___x_5471_ = lean_array_get_size(v_params_5468_);
v___f_5472_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___lam__0___boxed), 12, 4);
lean_closure_set(v___f_5472_, 0, v___x_5470_);
lean_closure_set(v___f_5472_, 1, v___x_5471_);
lean_closure_set(v___f_5472_, 2, v_value_5469_);
lean_closure_set(v___f_5472_, 3, v_params_5468_);
v___x_5473_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg(v___f_5472_, v___y_5460_, v___y_5461_, v___y_5462_, v___y_5463_, v___y_5464_, v___y_5465_, v___y_5466_);
return v___x_5473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl___boxed(lean_object* v_fn_5474_, lean_object* v___y_5475_, lean_object* v___y_5476_, lean_object* v___y_5477_, lean_object* v___y_5478_, lean_object* v___y_5479_, lean_object* v___y_5480_, lean_object* v___y_5481_, lean_object* v___y_5482_){
_start:
{
lean_object* v_res_5483_; 
v_res_5483_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl(v_fn_5474_, v___y_5475_, v___y_5476_, v___y_5477_, v___y_5478_, v___y_5479_, v___y_5480_, v___y_5481_);
lean_dec(v___y_5481_);
lean_dec_ref(v___y_5480_);
lean_dec(v___y_5479_);
lean_dec_ref(v___y_5478_);
lean_dec(v___y_5477_);
lean_dec(v___y_5476_);
lean_dec(v___y_5475_);
return v_res_5483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6___boxed(lean_object* v_as_5484_, lean_object* v_i_5485_, lean_object* v_stop_5486_, lean_object* v_b_5487_, lean_object* v___y_5488_, lean_object* v___y_5489_, lean_object* v___y_5490_, lean_object* v___y_5491_, lean_object* v___y_5492_, lean_object* v___y_5493_, lean_object* v___y_5494_, lean_object* v___y_5495_){
_start:
{
size_t v_i_boxed_5496_; size_t v_stop_boxed_5497_; lean_object* v_res_5498_; 
v_i_boxed_5496_ = lean_unbox_usize(v_i_5485_);
lean_dec(v_i_5485_);
v_stop_boxed_5497_ = lean_unbox_usize(v_stop_5486_);
lean_dec(v_stop_5486_);
v_res_5498_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__6(v_as_5484_, v_i_boxed_5496_, v_stop_boxed_5497_, v_b_5487_, v___y_5488_, v___y_5489_, v___y_5490_, v___y_5491_, v___y_5492_, v___y_5493_, v___y_5494_);
lean_dec(v___y_5494_);
lean_dec_ref(v___y_5493_);
lean_dec(v___y_5492_);
lean_dec_ref(v___y_5491_);
lean_dec(v___y_5490_);
lean_dec(v___y_5489_);
lean_dec(v___y_5488_);
lean_dec_ref(v_as_5484_);
return v_res_5498_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze___boxed(lean_object* v_code_5499_, lean_object* v___y_5500_, lean_object* v___y_5501_, lean_object* v___y_5502_, lean_object* v___y_5503_, lean_object* v___y_5504_, lean_object* v___y_5505_, lean_object* v___y_5506_, lean_object* v___y_5507_){
_start:
{
lean_object* v_res_5508_; 
v_res_5508_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze(v_code_5499_, v___y_5500_, v___y_5501_, v___y_5502_, v___y_5503_, v___y_5504_, v___y_5505_, v___y_5506_);
lean_dec(v___y_5506_);
lean_dec_ref(v___y_5505_);
lean_dec(v___y_5504_);
lean_dec_ref(v___y_5503_);
lean_dec(v___y_5502_);
lean_dec(v___y_5501_);
return v_res_5508_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0(lean_object* v_as_5509_, size_t v_i_5510_, size_t v_stop_5511_, lean_object* v_b_5512_, lean_object* v___y_5513_, lean_object* v___y_5514_, lean_object* v___y_5515_, lean_object* v___y_5516_, lean_object* v___y_5517_, lean_object* v___y_5518_, lean_object* v___y_5519_){
_start:
{
lean_object* v___x_5521_; 
v___x_5521_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___redArg(v_as_5509_, v_i_5510_, v_stop_5511_, v_b_5512_, v___y_5515_);
return v___x_5521_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0___boxed(lean_object* v_as_5522_, lean_object* v_i_5523_, lean_object* v_stop_5524_, lean_object* v_b_5525_, lean_object* v___y_5526_, lean_object* v___y_5527_, lean_object* v___y_5528_, lean_object* v___y_5529_, lean_object* v___y_5530_, lean_object* v___y_5531_, lean_object* v___y_5532_, lean_object* v___y_5533_){
_start:
{
size_t v_i_boxed_5534_; size_t v_stop_boxed_5535_; lean_object* v_res_5536_; 
v_i_boxed_5534_ = lean_unbox_usize(v_i_5523_);
lean_dec(v_i_5523_);
v_stop_boxed_5535_ = lean_unbox_usize(v_stop_5524_);
lean_dec(v_stop_5524_);
v_res_5536_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__0(v_as_5522_, v_i_boxed_5534_, v_stop_boxed_5535_, v_b_5525_, v___y_5526_, v___y_5527_, v___y_5528_, v___y_5529_, v___y_5530_, v___y_5531_, v___y_5532_);
lean_dec(v___y_5532_);
lean_dec_ref(v___y_5531_);
lean_dec(v___y_5530_);
lean_dec_ref(v___y_5529_);
lean_dec(v___y_5528_);
lean_dec(v___y_5527_);
lean_dec(v___y_5526_);
lean_dec_ref(v_as_5522_);
return v_res_5536_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1(lean_object* v_00_u03b1_5537_, lean_object* v_x_5538_, lean_object* v___y_5539_, lean_object* v___y_5540_, lean_object* v___y_5541_, lean_object* v___y_5542_, lean_object* v___y_5543_, lean_object* v___y_5544_, lean_object* v___y_5545_){
_start:
{
lean_object* v___x_5547_; 
v___x_5547_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___redArg(v_x_5538_, v___y_5539_, v___y_5540_, v___y_5541_, v___y_5542_, v___y_5543_, v___y_5544_, v___y_5545_);
return v___x_5547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1___boxed(lean_object* v_00_u03b1_5548_, lean_object* v_x_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_, lean_object* v___y_5555_, lean_object* v___y_5556_, lean_object* v___y_5557_){
_start:
{
lean_object* v_res_5558_; 
v_res_5558_ = l_Lean_Compiler_LCNF_ScopeM_withBackTrackingScope___at___00Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1_spec__1(v_00_u03b1_5548_, v_x_5549_, v___y_5550_, v___y_5551_, v___y_5552_, v___y_5553_, v___y_5554_, v___y_5555_, v___y_5556_);
lean_dec(v___y_5556_);
lean_dec_ref(v___y_5555_);
lean_dec(v___y_5554_);
lean_dec_ref(v___y_5553_);
lean_dec(v___y_5552_);
lean_dec(v___y_5551_);
lean_dec(v___y_5550_);
return v_res_5558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1(lean_object* v_00_u03b1_5559_, lean_object* v_x_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_, lean_object* v___y_5563_, lean_object* v___y_5564_, lean_object* v___y_5565_, lean_object* v___y_5566_, lean_object* v___y_5567_){
_start:
{
lean_object* v___x_5569_; 
v___x_5569_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___redArg(v_x_5560_, v___y_5561_, v___y_5562_, v___y_5563_, v___y_5564_, v___y_5565_, v___y_5566_, v___y_5567_);
return v___x_5569_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1___boxed(lean_object* v_00_u03b1_5570_, lean_object* v_x_5571_, lean_object* v___y_5572_, lean_object* v___y_5573_, lean_object* v___y_5574_, lean_object* v___y_5575_, lean_object* v___y_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_){
_start:
{
lean_object* v_res_5580_; 
v_res_5580_ = l_Lean_Compiler_LCNF_ScopeM_withNewScope___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyzeFunDecl_spec__1(v_00_u03b1_5570_, v_x_5571_, v___y_5572_, v___y_5573_, v___y_5574_, v___y_5575_, v___y_5576_, v___y_5577_, v___y_5578_);
lean_dec(v___y_5578_);
lean_dec_ref(v___y_5577_);
lean_dec(v___y_5576_);
lean_dec_ref(v___y_5575_);
lean_dec(v___y_5574_);
lean_dec(v___y_5573_);
lean_dec(v___y_5572_);
return v_res_5580_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4(lean_object* v_as_5581_, size_t v_sz_5582_, size_t v_i_5583_, lean_object* v_b_5584_, lean_object* v___y_5585_, lean_object* v___y_5586_, lean_object* v___y_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_){
_start:
{
lean_object* v___x_5593_; 
v___x_5593_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___redArg(v_as_5581_, v_sz_5582_, v_i_5583_, v_b_5584_);
return v___x_5593_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4___boxed(lean_object* v_as_5594_, lean_object* v_sz_5595_, lean_object* v_i_5596_, lean_object* v_b_5597_, lean_object* v___y_5598_, lean_object* v___y_5599_, lean_object* v___y_5600_, lean_object* v___y_5601_, lean_object* v___y_5602_, lean_object* v___y_5603_, lean_object* v___y_5604_, lean_object* v___y_5605_){
_start:
{
size_t v_sz_boxed_5606_; size_t v_i_boxed_5607_; lean_object* v_res_5608_; 
v_sz_boxed_5606_ = lean_unbox_usize(v_sz_5595_);
lean_dec(v_sz_5595_);
v_i_boxed_5607_ = lean_unbox_usize(v_i_5596_);
lean_dec(v_i_5596_);
v_res_5608_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__4(v_as_5594_, v_sz_boxed_5606_, v_i_boxed_5607_, v_b_5597_, v___y_5598_, v___y_5599_, v___y_5600_, v___y_5601_, v___y_5602_, v___y_5603_, v___y_5604_);
lean_dec(v___y_5604_);
lean_dec_ref(v___y_5603_);
lean_dec(v___y_5602_);
lean_dec_ref(v___y_5601_);
lean_dec(v___y_5600_);
lean_dec(v___y_5599_);
lean_dec(v___y_5598_);
lean_dec_ref(v_as_5594_);
return v_res_5608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5(uint8_t v_pu_5609_, lean_object* v_f_5610_, lean_object* v_arg_5611_, lean_object* v___y_5612_, lean_object* v___y_5613_, lean_object* v___y_5614_, lean_object* v___y_5615_, lean_object* v___y_5616_, lean_object* v___y_5617_, lean_object* v___y_5618_){
_start:
{
lean_object* v___x_5620_; 
v___x_5620_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___redArg(v_f_5610_, v_arg_5611_, v___y_5612_, v___y_5613_, v___y_5614_, v___y_5615_, v___y_5616_, v___y_5617_, v___y_5618_);
return v___x_5620_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5___boxed(lean_object* v_pu_5621_, lean_object* v_f_5622_, lean_object* v_arg_5623_, lean_object* v___y_5624_, lean_object* v___y_5625_, lean_object* v___y_5626_, lean_object* v___y_5627_, lean_object* v___y_5628_, lean_object* v___y_5629_, lean_object* v___y_5630_, lean_object* v___y_5631_){
_start:
{
uint8_t v_pu_boxed_5632_; lean_object* v_res_5633_; 
v_pu_boxed_5632_ = lean_unbox(v_pu_5621_);
v_res_5633_ = l_Lean_Compiler_LCNF_Arg_forFVarM___at___00Lean_Compiler_LCNF_allFVarM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goAnalyze_spec__3_spec__5(v_pu_boxed_5632_, v_f_5622_, v_arg_5623_, v___y_5624_, v___y_5625_, v___y_5626_, v___y_5627_, v___y_5628_, v___y_5629_, v___y_5630_);
lean_dec(v___y_5630_);
lean_dec_ref(v___y_5629_);
lean_dec(v___y_5628_);
lean_dec_ref(v___y_5627_);
lean_dec(v___y_5626_);
lean_dec(v___y_5625_);
lean_dec(v___y_5624_);
return v_res_5633_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___redArg(lean_object* v_alt_5634_, lean_object* v_f_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_, lean_object* v___y_5638_, lean_object* v___y_5639_, lean_object* v___y_5640_){
_start:
{
lean_object* v___y_5643_; 
switch(lean_obj_tag(v_alt_5634_))
{
case 0:
{
lean_object* v_code_5662_; 
v_code_5662_ = lean_ctor_get(v_alt_5634_, 2);
lean_inc_ref(v_code_5662_);
v___y_5643_ = v_code_5662_;
goto v___jp_5642_;
}
case 1:
{
lean_object* v_code_5663_; 
v_code_5663_ = lean_ctor_get(v_alt_5634_, 1);
lean_inc_ref(v_code_5663_);
v___y_5643_ = v_code_5663_;
goto v___jp_5642_;
}
default: 
{
lean_object* v_code_5664_; 
v_code_5664_ = lean_ctor_get(v_alt_5634_, 0);
lean_inc_ref(v_code_5664_);
v___y_5643_ = v_code_5664_;
goto v___jp_5642_;
}
}
v___jp_5642_:
{
lean_object* v___x_5644_; 
lean_inc(v___y_5640_);
lean_inc_ref(v___y_5639_);
lean_inc(v___y_5638_);
lean_inc_ref(v___y_5637_);
lean_inc(v___y_5636_);
v___x_5644_ = lean_apply_7(v_f_5635_, v___y_5643_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_, v___y_5640_, lean_box(0));
if (lean_obj_tag(v___x_5644_) == 0)
{
lean_object* v_a_5645_; lean_object* v___x_5647_; uint8_t v_isShared_5648_; uint8_t v_isSharedCheck_5653_; 
v_a_5645_ = lean_ctor_get(v___x_5644_, 0);
v_isSharedCheck_5653_ = !lean_is_exclusive(v___x_5644_);
if (v_isSharedCheck_5653_ == 0)
{
v___x_5647_ = v___x_5644_;
v_isShared_5648_ = v_isSharedCheck_5653_;
goto v_resetjp_5646_;
}
else
{
lean_inc(v_a_5645_);
lean_dec(v___x_5644_);
v___x_5647_ = lean_box(0);
v_isShared_5648_ = v_isSharedCheck_5653_;
goto v_resetjp_5646_;
}
v_resetjp_5646_:
{
lean_object* v___x_5649_; lean_object* v___x_5651_; 
v___x_5649_ = l___private_Lean_Compiler_LCNF_Basic_0__Lean_Compiler_LCNF_updateAltCodeImp___redArg(v_alt_5634_, v_a_5645_);
if (v_isShared_5648_ == 0)
{
lean_ctor_set(v___x_5647_, 0, v___x_5649_);
v___x_5651_ = v___x_5647_;
goto v_reusejp_5650_;
}
else
{
lean_object* v_reuseFailAlloc_5652_; 
v_reuseFailAlloc_5652_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5652_, 0, v___x_5649_);
v___x_5651_ = v_reuseFailAlloc_5652_;
goto v_reusejp_5650_;
}
v_reusejp_5650_:
{
return v___x_5651_;
}
}
}
else
{
lean_object* v_a_5654_; lean_object* v___x_5656_; uint8_t v_isShared_5657_; uint8_t v_isSharedCheck_5661_; 
lean_dec_ref(v_alt_5634_);
v_a_5654_ = lean_ctor_get(v___x_5644_, 0);
v_isSharedCheck_5661_ = !lean_is_exclusive(v___x_5644_);
if (v_isSharedCheck_5661_ == 0)
{
v___x_5656_ = v___x_5644_;
v_isShared_5657_ = v_isSharedCheck_5661_;
goto v_resetjp_5655_;
}
else
{
lean_inc(v_a_5654_);
lean_dec(v___x_5644_);
v___x_5656_ = lean_box(0);
v_isShared_5657_ = v_isSharedCheck_5661_;
goto v_resetjp_5655_;
}
v_resetjp_5655_:
{
lean_object* v___x_5659_; 
if (v_isShared_5657_ == 0)
{
v___x_5659_ = v___x_5656_;
goto v_reusejp_5658_;
}
else
{
lean_object* v_reuseFailAlloc_5660_; 
v_reuseFailAlloc_5660_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5660_, 0, v_a_5654_);
v___x_5659_ = v_reuseFailAlloc_5660_;
goto v_reusejp_5658_;
}
v_reusejp_5658_:
{
return v___x_5659_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___redArg___boxed(lean_object* v_alt_5665_, lean_object* v_f_5666_, lean_object* v___y_5667_, lean_object* v___y_5668_, lean_object* v___y_5669_, lean_object* v___y_5670_, lean_object* v___y_5671_, lean_object* v___y_5672_){
_start:
{
lean_object* v_res_5673_; 
v_res_5673_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___redArg(v_alt_5665_, v_f_5666_, v___y_5667_, v___y_5668_, v___y_5669_, v___y_5670_, v___y_5671_);
lean_dec(v___y_5671_);
lean_dec_ref(v___y_5670_);
lean_dec(v___y_5669_);
lean_dec_ref(v___y_5668_);
lean_dec(v___y_5667_);
return v_res_5673_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3(uint8_t v_pu_5674_, lean_object* v_alt_5675_, lean_object* v_f_5676_, lean_object* v___y_5677_, lean_object* v___y_5678_, lean_object* v___y_5679_, lean_object* v___y_5680_, lean_object* v___y_5681_){
_start:
{
lean_object* v___x_5683_; 
v___x_5683_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___redArg(v_alt_5675_, v_f_5676_, v___y_5677_, v___y_5678_, v___y_5679_, v___y_5680_, v___y_5681_);
return v___x_5683_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___boxed(lean_object* v_pu_5684_, lean_object* v_alt_5685_, lean_object* v_f_5686_, lean_object* v___y_5687_, lean_object* v___y_5688_, lean_object* v___y_5689_, lean_object* v___y_5690_, lean_object* v___y_5691_, lean_object* v___y_5692_){
_start:
{
uint8_t v_pu_boxed_5693_; lean_object* v_res_5694_; 
v_pu_boxed_5693_ = lean_unbox(v_pu_5684_);
v_res_5694_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3(v_pu_boxed_5693_, v_alt_5685_, v_f_5686_, v___y_5687_, v___y_5688_, v___y_5689_, v___y_5690_, v___y_5691_);
lean_dec(v___y_5691_);
lean_dec_ref(v___y_5690_);
lean_dec(v___y_5689_);
lean_dec_ref(v___y_5688_);
lean_dec(v___y_5687_);
return v_res_5694_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___lam__0(uint8_t v___x_5695_, uint8_t v___x_5696_, lean_object* v_____r_5697_, lean_object* v___y_5698_, lean_object* v___y_5699_, lean_object* v___y_5700_, lean_object* v___y_5701_, lean_object* v___y_5702_){
_start:
{
if (v___x_5695_ == 0)
{
uint8_t v___x_5704_; lean_object* v___x_5705_; lean_object* v___x_5706_; 
v___x_5704_ = 1;
v___x_5705_ = lean_box(v___x_5704_);
v___x_5706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5706_, 0, v___x_5705_);
return v___x_5706_;
}
else
{
lean_object* v___x_5707_; lean_object* v___x_5708_; 
v___x_5707_ = lean_box(v___x_5696_);
v___x_5708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5708_, 0, v___x_5707_);
return v___x_5708_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___lam__0___boxed(lean_object* v___x_5709_, lean_object* v___x_5710_, lean_object* v_____r_5711_, lean_object* v___y_5712_, lean_object* v___y_5713_, lean_object* v___y_5714_, lean_object* v___y_5715_, lean_object* v___y_5716_, lean_object* v___y_5717_){
_start:
{
uint8_t v___x_8598__boxed_5718_; uint8_t v___x_8599__boxed_5719_; lean_object* v_res_5720_; 
v___x_8598__boxed_5718_ = lean_unbox(v___x_5709_);
v___x_8599__boxed_5719_ = lean_unbox(v___x_5710_);
v_res_5720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___lam__0(v___x_8598__boxed_5718_, v___x_8599__boxed_5719_, v_____r_5711_, v___y_5712_, v___y_5713_, v___y_5714_, v___y_5715_, v___y_5716_);
lean_dec(v___y_5716_);
lean_dec_ref(v___y_5715_);
lean_dec(v___y_5714_);
lean_dec_ref(v___y_5713_);
lean_dec(v___y_5712_);
return v_res_5720_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0(lean_object* v_val_5721_, lean_object* v_as_5722_, size_t v_i_5723_, size_t v_stop_5724_, lean_object* v_b_5725_, lean_object* v___y_5726_, lean_object* v___y_5727_, lean_object* v___y_5728_, lean_object* v___y_5729_, lean_object* v___y_5730_){
_start:
{
lean_object* v_a_5733_; uint8_t v___x_5737_; 
v___x_5737_ = lean_usize_dec_eq(v_i_5723_, v_stop_5724_);
if (v___x_5737_ == 0)
{
lean_object* v___x_5738_; lean_object* v___y_5740_; lean_object* v_fvarId_5752_; uint8_t v___x_5753_; 
v___x_5738_ = lean_array_uget_borrowed(v_as_5722_, v_i_5723_);
v_fvarId_5752_ = lean_ctor_get(v___x_5738_, 0);
v___x_5753_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(v_val_5721_, v_fvarId_5752_);
if (v___x_5753_ == 0)
{
lean_object* v___x_5754_; lean_object* v___x_5755_; 
v___x_5754_ = lean_box(0);
v___x_5755_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___lam__0(v___x_5753_, v___x_5737_, v___x_5754_, v___y_5726_, v___y_5727_, v___y_5728_, v___y_5729_, v___y_5730_);
v___y_5740_ = v___x_5755_;
goto v___jp_5739_;
}
else
{
uint8_t v___x_5756_; lean_object* v___x_5757_; 
v___x_5756_ = 0;
v___x_5757_ = l_Lean_Compiler_LCNF_eraseParam___redArg(v___x_5756_, v___x_5738_, v___y_5728_);
if (lean_obj_tag(v___x_5757_) == 0)
{
lean_object* v_a_5758_; lean_object* v___x_5759_; 
v_a_5758_ = lean_ctor_get(v___x_5757_, 0);
lean_inc(v_a_5758_);
lean_dec_ref_known(v___x_5757_, 1);
v___x_5759_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___lam__0(v___x_5753_, v___x_5737_, v_a_5758_, v___y_5726_, v___y_5727_, v___y_5728_, v___y_5729_, v___y_5730_);
v___y_5740_ = v___x_5759_;
goto v___jp_5739_;
}
else
{
lean_object* v_a_5760_; lean_object* v___x_5762_; uint8_t v_isShared_5763_; uint8_t v_isSharedCheck_5767_; 
lean_dec_ref(v_b_5725_);
v_a_5760_ = lean_ctor_get(v___x_5757_, 0);
v_isSharedCheck_5767_ = !lean_is_exclusive(v___x_5757_);
if (v_isSharedCheck_5767_ == 0)
{
v___x_5762_ = v___x_5757_;
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
else
{
lean_inc(v_a_5760_);
lean_dec(v___x_5757_);
v___x_5762_ = lean_box(0);
v_isShared_5763_ = v_isSharedCheck_5767_;
goto v_resetjp_5761_;
}
v_resetjp_5761_:
{
lean_object* v___x_5765_; 
if (v_isShared_5763_ == 0)
{
v___x_5765_ = v___x_5762_;
goto v_reusejp_5764_;
}
else
{
lean_object* v_reuseFailAlloc_5766_; 
v_reuseFailAlloc_5766_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5766_, 0, v_a_5760_);
v___x_5765_ = v_reuseFailAlloc_5766_;
goto v_reusejp_5764_;
}
v_reusejp_5764_:
{
return v___x_5765_;
}
}
}
}
v___jp_5739_:
{
if (lean_obj_tag(v___y_5740_) == 0)
{
lean_object* v_a_5741_; uint8_t v___x_5742_; 
v_a_5741_ = lean_ctor_get(v___y_5740_, 0);
lean_inc(v_a_5741_);
lean_dec_ref_known(v___y_5740_, 1);
v___x_5742_ = lean_unbox(v_a_5741_);
lean_dec(v_a_5741_);
if (v___x_5742_ == 0)
{
v_a_5733_ = v_b_5725_;
goto v___jp_5732_;
}
else
{
lean_object* v___x_5743_; 
lean_inc(v___x_5738_);
v___x_5743_ = lean_array_push(v_b_5725_, v___x_5738_);
v_a_5733_ = v___x_5743_;
goto v___jp_5732_;
}
}
else
{
lean_object* v_a_5744_; lean_object* v___x_5746_; uint8_t v_isShared_5747_; uint8_t v_isSharedCheck_5751_; 
lean_dec_ref(v_b_5725_);
v_a_5744_ = lean_ctor_get(v___y_5740_, 0);
v_isSharedCheck_5751_ = !lean_is_exclusive(v___y_5740_);
if (v_isSharedCheck_5751_ == 0)
{
v___x_5746_ = v___y_5740_;
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
else
{
lean_inc(v_a_5744_);
lean_dec(v___y_5740_);
v___x_5746_ = lean_box(0);
v_isShared_5747_ = v_isSharedCheck_5751_;
goto v_resetjp_5745_;
}
v_resetjp_5745_:
{
lean_object* v___x_5749_; 
if (v_isShared_5747_ == 0)
{
v___x_5749_ = v___x_5746_;
goto v_reusejp_5748_;
}
else
{
lean_object* v_reuseFailAlloc_5750_; 
v_reuseFailAlloc_5750_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5750_, 0, v_a_5744_);
v___x_5749_ = v_reuseFailAlloc_5750_;
goto v_reusejp_5748_;
}
v_reusejp_5748_:
{
return v___x_5749_;
}
}
}
}
}
else
{
lean_object* v___x_5768_; 
v___x_5768_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5768_, 0, v_b_5725_);
return v___x_5768_;
}
v___jp_5732_:
{
size_t v___x_5734_; size_t v___x_5735_; 
v___x_5734_ = ((size_t)1ULL);
v___x_5735_ = lean_usize_add(v_i_5723_, v___x_5734_);
v_i_5723_ = v___x_5735_;
v_b_5725_ = v_a_5733_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0___boxed(lean_object* v_val_5769_, lean_object* v_as_5770_, lean_object* v_i_5771_, lean_object* v_stop_5772_, lean_object* v_b_5773_, lean_object* v___y_5774_, lean_object* v___y_5775_, lean_object* v___y_5776_, lean_object* v___y_5777_, lean_object* v___y_5778_, lean_object* v___y_5779_){
_start:
{
size_t v_i_boxed_5780_; size_t v_stop_boxed_5781_; lean_object* v_res_5782_; 
v_i_boxed_5780_ = lean_unbox_usize(v_i_5771_);
lean_dec(v_i_5771_);
v_stop_boxed_5781_ = lean_unbox_usize(v_stop_5772_);
lean_dec(v_stop_5772_);
v_res_5782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0(v_val_5769_, v_as_5770_, v_i_boxed_5780_, v_stop_boxed_5781_, v_b_5773_, v___y_5774_, v___y_5775_, v___y_5776_, v___y_5777_, v___y_5778_);
lean_dec(v___y_5778_);
lean_dec_ref(v___y_5777_);
lean_dec(v___y_5776_);
lean_dec_ref(v___y_5775_);
lean_dec(v___y_5774_);
lean_dec_ref(v_as_5770_);
lean_dec_ref(v_val_5769_);
return v_res_5782_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__1(size_t v_sz_5783_, size_t v_i_5784_, lean_object* v_bs_5785_){
_start:
{
uint8_t v___x_5786_; 
v___x_5786_ = lean_usize_dec_lt(v_i_5784_, v_sz_5783_);
if (v___x_5786_ == 0)
{
return v_bs_5785_;
}
else
{
lean_object* v_v_5787_; lean_object* v_snd_5788_; lean_object* v___x_5789_; lean_object* v_bs_x27_5790_; size_t v___x_5791_; size_t v___x_5792_; lean_object* v___x_5793_; 
v_v_5787_ = lean_array_uget_borrowed(v_bs_5785_, v_i_5784_);
v_snd_5788_ = lean_ctor_get(v_v_5787_, 1);
lean_inc(v_snd_5788_);
v___x_5789_ = lean_unsigned_to_nat(0u);
v_bs_x27_5790_ = lean_array_uset(v_bs_5785_, v_i_5784_, v___x_5789_);
v___x_5791_ = ((size_t)1ULL);
v___x_5792_ = lean_usize_add(v_i_5784_, v___x_5791_);
v___x_5793_ = lean_array_uset(v_bs_x27_5790_, v_i_5784_, v_snd_5788_);
v_i_5784_ = v___x_5792_;
v_bs_5785_ = v___x_5793_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__1___boxed(lean_object* v_sz_5795_, lean_object* v_i_5796_, lean_object* v_bs_5797_){
_start:
{
size_t v_sz_boxed_5798_; size_t v_i_boxed_5799_; lean_object* v_res_5800_; 
v_sz_boxed_5798_ = lean_unbox_usize(v_sz_5795_);
lean_dec(v_sz_5795_);
v_i_boxed_5799_ = lean_unbox_usize(v_i_5796_);
lean_dec(v_i_5796_);
v_res_5800_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__1(v_sz_boxed_5798_, v_i_boxed_5799_, v_bs_5797_);
return v_res_5800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__2(lean_object* v___x_5801_, lean_object* v_as_5802_, size_t v_i_5803_, size_t v_stop_5804_, lean_object* v_b_5805_){
_start:
{
lean_object* v___y_5807_; uint8_t v___x_5811_; 
v___x_5811_ = lean_usize_dec_eq(v_i_5803_, v_stop_5804_);
if (v___x_5811_ == 0)
{
lean_object* v___x_5812_; lean_object* v_fst_5813_; lean_object* v_fvarId_5814_; uint8_t v___x_5815_; 
v___x_5812_ = lean_array_uget_borrowed(v_as_5802_, v_i_5803_);
v_fst_5813_ = lean_ctor_get(v___x_5812_, 0);
v_fvarId_5814_ = lean_ctor_get(v_fst_5813_, 0);
v___x_5815_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointFinder_replace_go_spec__0___redArg(v___x_5801_, v_fvarId_5814_);
if (v___x_5815_ == 0)
{
lean_object* v___x_5816_; 
lean_inc(v___x_5812_);
v___x_5816_ = lean_array_push(v_b_5805_, v___x_5812_);
v___y_5807_ = v___x_5816_;
goto v___jp_5806_;
}
else
{
v___y_5807_ = v_b_5805_;
goto v___jp_5806_;
}
}
else
{
return v_b_5805_;
}
v___jp_5806_:
{
size_t v___x_5808_; size_t v___x_5809_; 
v___x_5808_ = ((size_t)1ULL);
v___x_5809_ = lean_usize_add(v_i_5803_, v___x_5808_);
v_i_5803_ = v___x_5809_;
v_b_5805_ = v___y_5807_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__2___boxed(lean_object* v___x_5817_, lean_object* v_as_5818_, lean_object* v_i_5819_, lean_object* v_stop_5820_, lean_object* v_b_5821_){
_start:
{
size_t v_i_boxed_5822_; size_t v_stop_boxed_5823_; lean_object* v_res_5824_; 
v_i_boxed_5822_ = lean_unbox_usize(v_i_5819_);
lean_dec(v_i_5819_);
v_stop_boxed_5823_ = lean_unbox_usize(v_stop_5820_);
lean_dec(v_stop_5820_);
v_res_5824_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__2(v___x_5817_, v_as_5818_, v_i_boxed_5822_, v_stop_boxed_5823_, v_b_5821_);
lean_dec_ref(v_as_5818_);
lean_dec_ref(v___x_5817_);
return v_res_5824_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(lean_object* v_code_5829_, lean_object* v___y_5830_, lean_object* v___y_5831_, lean_object* v___y_5832_, lean_object* v___y_5833_, lean_object* v___y_5834_){
_start:
{
switch(lean_obj_tag(v_code_5829_))
{
case 0:
{
lean_object* v_decl_5836_; lean_object* v_k_5837_; lean_object* v___x_5838_; 
v_decl_5836_ = lean_ctor_get(v_code_5829_, 0);
v_k_5837_ = lean_ctor_get(v_code_5829_, 1);
lean_inc_ref(v_k_5837_);
v___x_5838_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(v_k_5837_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_5838_) == 0)
{
lean_object* v_a_5839_; lean_object* v___x_5841_; uint8_t v_isShared_5842_; uint8_t v_isSharedCheck_5875_; 
v_a_5839_ = lean_ctor_get(v___x_5838_, 0);
v_isSharedCheck_5875_ = !lean_is_exclusive(v___x_5838_);
if (v_isSharedCheck_5875_ == 0)
{
v___x_5841_ = v___x_5838_;
v_isShared_5842_ = v_isSharedCheck_5875_;
goto v_resetjp_5840_;
}
else
{
lean_inc(v_a_5839_);
lean_dec(v___x_5838_);
v___x_5841_ = lean_box(0);
v_isShared_5842_ = v_isSharedCheck_5875_;
goto v_resetjp_5840_;
}
v_resetjp_5840_:
{
size_t v___x_5843_; size_t v___x_5844_; uint8_t v___x_5845_; 
v___x_5843_ = lean_ptr_addr(v_k_5837_);
v___x_5844_ = lean_ptr_addr(v_a_5839_);
v___x_5845_ = lean_usize_dec_eq(v___x_5843_, v___x_5844_);
if (v___x_5845_ == 0)
{
lean_object* v___x_5847_; uint8_t v_isShared_5848_; uint8_t v_isSharedCheck_5855_; 
lean_inc_ref(v_decl_5836_);
v_isSharedCheck_5855_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_5855_ == 0)
{
lean_object* v_unused_5856_; lean_object* v_unused_5857_; 
v_unused_5856_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_5856_);
v_unused_5857_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_5857_);
v___x_5847_ = v_code_5829_;
v_isShared_5848_ = v_isSharedCheck_5855_;
goto v_resetjp_5846_;
}
else
{
lean_dec(v_code_5829_);
v___x_5847_ = lean_box(0);
v_isShared_5848_ = v_isSharedCheck_5855_;
goto v_resetjp_5846_;
}
v_resetjp_5846_:
{
lean_object* v___x_5850_; 
if (v_isShared_5848_ == 0)
{
lean_ctor_set(v___x_5847_, 1, v_a_5839_);
v___x_5850_ = v___x_5847_;
goto v_reusejp_5849_;
}
else
{
lean_object* v_reuseFailAlloc_5854_; 
v_reuseFailAlloc_5854_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5854_, 0, v_decl_5836_);
lean_ctor_set(v_reuseFailAlloc_5854_, 1, v_a_5839_);
v___x_5850_ = v_reuseFailAlloc_5854_;
goto v_reusejp_5849_;
}
v_reusejp_5849_:
{
lean_object* v___x_5852_; 
if (v_isShared_5842_ == 0)
{
lean_ctor_set(v___x_5841_, 0, v___x_5850_);
v___x_5852_ = v___x_5841_;
goto v_reusejp_5851_;
}
else
{
lean_object* v_reuseFailAlloc_5853_; 
v_reuseFailAlloc_5853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5853_, 0, v___x_5850_);
v___x_5852_ = v_reuseFailAlloc_5853_;
goto v_reusejp_5851_;
}
v_reusejp_5851_:
{
return v___x_5852_;
}
}
}
}
else
{
size_t v___x_5858_; uint8_t v___x_5859_; 
v___x_5858_ = lean_ptr_addr(v_decl_5836_);
v___x_5859_ = lean_usize_dec_eq(v___x_5858_, v___x_5858_);
if (v___x_5859_ == 0)
{
lean_object* v___x_5861_; uint8_t v_isShared_5862_; uint8_t v_isSharedCheck_5869_; 
lean_inc_ref(v_decl_5836_);
v_isSharedCheck_5869_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_5869_ == 0)
{
lean_object* v_unused_5870_; lean_object* v_unused_5871_; 
v_unused_5870_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_5870_);
v_unused_5871_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_5871_);
v___x_5861_ = v_code_5829_;
v_isShared_5862_ = v_isSharedCheck_5869_;
goto v_resetjp_5860_;
}
else
{
lean_dec(v_code_5829_);
v___x_5861_ = lean_box(0);
v_isShared_5862_ = v_isSharedCheck_5869_;
goto v_resetjp_5860_;
}
v_resetjp_5860_:
{
lean_object* v___x_5864_; 
if (v_isShared_5862_ == 0)
{
lean_ctor_set(v___x_5861_, 1, v_a_5839_);
v___x_5864_ = v___x_5861_;
goto v_reusejp_5863_;
}
else
{
lean_object* v_reuseFailAlloc_5868_; 
v_reuseFailAlloc_5868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5868_, 0, v_decl_5836_);
lean_ctor_set(v_reuseFailAlloc_5868_, 1, v_a_5839_);
v___x_5864_ = v_reuseFailAlloc_5868_;
goto v_reusejp_5863_;
}
v_reusejp_5863_:
{
lean_object* v___x_5866_; 
if (v_isShared_5842_ == 0)
{
lean_ctor_set(v___x_5841_, 0, v___x_5864_);
v___x_5866_ = v___x_5841_;
goto v_reusejp_5865_;
}
else
{
lean_object* v_reuseFailAlloc_5867_; 
v_reuseFailAlloc_5867_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5867_, 0, v___x_5864_);
v___x_5866_ = v_reuseFailAlloc_5867_;
goto v_reusejp_5865_;
}
v_reusejp_5865_:
{
return v___x_5866_;
}
}
}
}
else
{
lean_object* v___x_5873_; 
lean_dec(v_a_5839_);
if (v_isShared_5842_ == 0)
{
lean_ctor_set(v___x_5841_, 0, v_code_5829_);
v___x_5873_ = v___x_5841_;
goto v_reusejp_5872_;
}
else
{
lean_object* v_reuseFailAlloc_5874_; 
v_reuseFailAlloc_5874_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5874_, 0, v_code_5829_);
v___x_5873_ = v_reuseFailAlloc_5874_;
goto v_reusejp_5872_;
}
v_reusejp_5872_:
{
return v___x_5873_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_5829_, 2);
return v___x_5838_;
}
}
case 1:
{
lean_object* v_decl_5876_; lean_object* v_k_5877_; lean_object* v_params_5878_; lean_object* v_type_5879_; lean_object* v_value_5880_; uint8_t v___x_5881_; lean_object* v___x_5882_; 
v_decl_5876_ = lean_ctor_get(v_code_5829_, 0);
v_k_5877_ = lean_ctor_get(v_code_5829_, 1);
v_params_5878_ = lean_ctor_get(v_decl_5876_, 2);
v_type_5879_ = lean_ctor_get(v_decl_5876_, 3);
v_value_5880_ = lean_ctor_get(v_decl_5876_, 4);
v___x_5881_ = 0;
lean_inc_ref(v_value_5880_);
v___x_5882_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(v_value_5880_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_5882_) == 0)
{
lean_object* v_a_5883_; lean_object* v___x_5884_; 
v_a_5883_ = lean_ctor_get(v___x_5882_, 0);
lean_inc(v_a_5883_);
lean_dec_ref_known(v___x_5882_, 1);
lean_inc_ref(v_params_5878_);
lean_inc_ref(v_type_5879_);
lean_inc_ref(v_decl_5876_);
v___x_5884_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5881_, v_decl_5876_, v_type_5879_, v_params_5878_, v_a_5883_, v___y_5832_);
if (lean_obj_tag(v___x_5884_) == 0)
{
lean_object* v_a_5885_; lean_object* v___x_5886_; 
v_a_5885_ = lean_ctor_get(v___x_5884_, 0);
lean_inc(v_a_5885_);
lean_dec_ref_known(v___x_5884_, 1);
lean_inc_ref(v_k_5877_);
v___x_5886_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(v_k_5877_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_5886_) == 0)
{
lean_object* v_a_5887_; lean_object* v___x_5889_; uint8_t v_isShared_5890_; uint8_t v_isSharedCheck_5924_; 
v_a_5887_ = lean_ctor_get(v___x_5886_, 0);
v_isSharedCheck_5924_ = !lean_is_exclusive(v___x_5886_);
if (v_isSharedCheck_5924_ == 0)
{
v___x_5889_ = v___x_5886_;
v_isShared_5890_ = v_isSharedCheck_5924_;
goto v_resetjp_5888_;
}
else
{
lean_inc(v_a_5887_);
lean_dec(v___x_5886_);
v___x_5889_ = lean_box(0);
v_isShared_5890_ = v_isSharedCheck_5924_;
goto v_resetjp_5888_;
}
v_resetjp_5888_:
{
size_t v___x_5891_; size_t v___x_5892_; uint8_t v___x_5893_; 
v___x_5891_ = lean_ptr_addr(v_k_5877_);
v___x_5892_ = lean_ptr_addr(v_a_5887_);
v___x_5893_ = lean_usize_dec_eq(v___x_5891_, v___x_5892_);
if (v___x_5893_ == 0)
{
lean_object* v___x_5895_; uint8_t v_isShared_5896_; uint8_t v_isSharedCheck_5903_; 
v_isSharedCheck_5903_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_5903_ == 0)
{
lean_object* v_unused_5904_; lean_object* v_unused_5905_; 
v_unused_5904_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_5904_);
v_unused_5905_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_5905_);
v___x_5895_ = v_code_5829_;
v_isShared_5896_ = v_isSharedCheck_5903_;
goto v_resetjp_5894_;
}
else
{
lean_dec(v_code_5829_);
v___x_5895_ = lean_box(0);
v_isShared_5896_ = v_isSharedCheck_5903_;
goto v_resetjp_5894_;
}
v_resetjp_5894_:
{
lean_object* v___x_5898_; 
if (v_isShared_5896_ == 0)
{
lean_ctor_set(v___x_5895_, 1, v_a_5887_);
lean_ctor_set(v___x_5895_, 0, v_a_5885_);
v___x_5898_ = v___x_5895_;
goto v_reusejp_5897_;
}
else
{
lean_object* v_reuseFailAlloc_5902_; 
v_reuseFailAlloc_5902_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5902_, 0, v_a_5885_);
lean_ctor_set(v_reuseFailAlloc_5902_, 1, v_a_5887_);
v___x_5898_ = v_reuseFailAlloc_5902_;
goto v_reusejp_5897_;
}
v_reusejp_5897_:
{
lean_object* v___x_5900_; 
if (v_isShared_5890_ == 0)
{
lean_ctor_set(v___x_5889_, 0, v___x_5898_);
v___x_5900_ = v___x_5889_;
goto v_reusejp_5899_;
}
else
{
lean_object* v_reuseFailAlloc_5901_; 
v_reuseFailAlloc_5901_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5901_, 0, v___x_5898_);
v___x_5900_ = v_reuseFailAlloc_5901_;
goto v_reusejp_5899_;
}
v_reusejp_5899_:
{
return v___x_5900_;
}
}
}
}
else
{
size_t v___x_5906_; size_t v___x_5907_; uint8_t v___x_5908_; 
v___x_5906_ = lean_ptr_addr(v_decl_5876_);
v___x_5907_ = lean_ptr_addr(v_a_5885_);
v___x_5908_ = lean_usize_dec_eq(v___x_5906_, v___x_5907_);
if (v___x_5908_ == 0)
{
lean_object* v___x_5910_; uint8_t v_isShared_5911_; uint8_t v_isSharedCheck_5918_; 
v_isSharedCheck_5918_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_5918_ == 0)
{
lean_object* v_unused_5919_; lean_object* v_unused_5920_; 
v_unused_5919_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_5919_);
v_unused_5920_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_5920_);
v___x_5910_ = v_code_5829_;
v_isShared_5911_ = v_isSharedCheck_5918_;
goto v_resetjp_5909_;
}
else
{
lean_dec(v_code_5829_);
v___x_5910_ = lean_box(0);
v_isShared_5911_ = v_isSharedCheck_5918_;
goto v_resetjp_5909_;
}
v_resetjp_5909_:
{
lean_object* v___x_5913_; 
if (v_isShared_5911_ == 0)
{
lean_ctor_set(v___x_5910_, 1, v_a_5887_);
lean_ctor_set(v___x_5910_, 0, v_a_5885_);
v___x_5913_ = v___x_5910_;
goto v_reusejp_5912_;
}
else
{
lean_object* v_reuseFailAlloc_5917_; 
v_reuseFailAlloc_5917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5917_, 0, v_a_5885_);
lean_ctor_set(v_reuseFailAlloc_5917_, 1, v_a_5887_);
v___x_5913_ = v_reuseFailAlloc_5917_;
goto v_reusejp_5912_;
}
v_reusejp_5912_:
{
lean_object* v___x_5915_; 
if (v_isShared_5890_ == 0)
{
lean_ctor_set(v___x_5889_, 0, v___x_5913_);
v___x_5915_ = v___x_5889_;
goto v_reusejp_5914_;
}
else
{
lean_object* v_reuseFailAlloc_5916_; 
v_reuseFailAlloc_5916_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5916_, 0, v___x_5913_);
v___x_5915_ = v_reuseFailAlloc_5916_;
goto v_reusejp_5914_;
}
v_reusejp_5914_:
{
return v___x_5915_;
}
}
}
}
else
{
lean_object* v___x_5922_; 
lean_dec(v_a_5887_);
lean_dec(v_a_5885_);
if (v_isShared_5890_ == 0)
{
lean_ctor_set(v___x_5889_, 0, v_code_5829_);
v___x_5922_ = v___x_5889_;
goto v_reusejp_5921_;
}
else
{
lean_object* v_reuseFailAlloc_5923_; 
v_reuseFailAlloc_5923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5923_, 0, v_code_5829_);
v___x_5922_ = v_reuseFailAlloc_5923_;
goto v_reusejp_5921_;
}
v_reusejp_5921_:
{
return v___x_5922_;
}
}
}
}
}
else
{
lean_dec(v_a_5885_);
lean_dec_ref_known(v_code_5829_, 2);
return v___x_5886_;
}
}
else
{
lean_object* v_a_5925_; lean_object* v___x_5927_; uint8_t v_isShared_5928_; uint8_t v_isSharedCheck_5932_; 
lean_dec_ref_known(v_code_5829_, 2);
v_a_5925_ = lean_ctor_get(v___x_5884_, 0);
v_isSharedCheck_5932_ = !lean_is_exclusive(v___x_5884_);
if (v_isSharedCheck_5932_ == 0)
{
v___x_5927_ = v___x_5884_;
v_isShared_5928_ = v_isSharedCheck_5932_;
goto v_resetjp_5926_;
}
else
{
lean_inc(v_a_5925_);
lean_dec(v___x_5884_);
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
else
{
lean_dec_ref_known(v_code_5829_, 2);
return v___x_5882_;
}
}
case 2:
{
lean_object* v_decl_5933_; lean_object* v_k_5934_; lean_object* v_fvarId_5935_; lean_object* v_params_5936_; lean_object* v_type_5937_; lean_object* v_value_5938_; lean_object* v___x_5939_; 
v_decl_5933_ = lean_ctor_get(v_code_5829_, 0);
v_k_5934_ = lean_ctor_get(v_code_5829_, 1);
v_fvarId_5935_ = lean_ctor_get(v_decl_5933_, 0);
v_params_5936_ = lean_ctor_get(v_decl_5933_, 2);
v_type_5937_ = lean_ctor_get(v_decl_5933_, 3);
v_value_5938_ = lean_ctor_get(v_decl_5933_, 4);
v___x_5939_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_FVarIdMap_get_x3f_spec__0___redArg(v___y_5830_, v_fvarId_5935_);
if (lean_obj_tag(v___x_5939_) == 1)
{
lean_object* v_val_5940_; uint8_t v___x_5941_; lean_object* v___y_5943_; lean_object* v___y_5944_; lean_object* v_newType_5945_; lean_object* v___y_5946_; lean_object* v___y_5947_; lean_object* v___y_5948_; lean_object* v___y_5949_; lean_object* v___y_5950_; lean_object* v___x_6000_; lean_object* v___x_6001_; lean_object* v_a_6003_; lean_object* v___y_6032_; lean_object* v___x_6042_; uint8_t v___x_6043_; 
v_val_5940_ = lean_ctor_get(v___x_5939_, 0);
lean_inc(v_val_5940_);
lean_dec_ref_known(v___x_5939_, 1);
v___x_5941_ = 0;
v___x_6000_ = lean_unsigned_to_nat(0u);
v___x_6001_ = lean_array_get_size(v_params_5936_);
v___x_6042_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__0));
v___x_6043_ = lean_nat_dec_lt(v___x_6000_, v___x_6001_);
if (v___x_6043_ == 0)
{
v_a_6003_ = v___x_6042_;
goto v___jp_6002_;
}
else
{
uint8_t v___x_6044_; 
v___x_6044_ = lean_nat_dec_le(v___x_6001_, v___x_6001_);
if (v___x_6044_ == 0)
{
if (v___x_6043_ == 0)
{
v_a_6003_ = v___x_6042_;
goto v___jp_6002_;
}
else
{
size_t v___x_6045_; size_t v___x_6046_; lean_object* v___x_6047_; 
v___x_6045_ = ((size_t)0ULL);
v___x_6046_ = lean_usize_of_nat(v___x_6001_);
v___x_6047_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0(v_val_5940_, v_params_5936_, v___x_6045_, v___x_6046_, v___x_6042_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
v___y_6032_ = v___x_6047_;
goto v___jp_6031_;
}
}
else
{
size_t v___x_6048_; size_t v___x_6049_; lean_object* v___x_6050_; 
v___x_6048_ = ((size_t)0ULL);
v___x_6049_ = lean_usize_of_nat(v___x_6001_);
v___x_6050_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__0(v_val_5940_, v_params_5936_, v___x_6048_, v___x_6049_, v___x_6042_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
v___y_6032_ = v___x_6050_;
goto v___jp_6031_;
}
}
v___jp_5942_:
{
lean_object* v___x_5951_; 
lean_inc_ref(v_k_5934_);
v___x_5951_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(v_k_5934_, v___y_5946_, v___y_5947_, v___y_5948_, v___y_5949_, v___y_5950_);
if (lean_obj_tag(v___x_5951_) == 0)
{
lean_object* v_a_5952_; lean_object* v___x_5953_; 
v_a_5952_ = lean_ctor_get(v___x_5951_, 0);
lean_inc(v_a_5952_);
lean_dec_ref_known(v___x_5951_, 1);
lean_inc_ref(v_decl_5933_);
v___x_5953_ = l___private_Lean_Compiler_LCNF_CompilerM_0__Lean_Compiler_LCNF_updateFunDeclImp___redArg(v___x_5941_, v_decl_5933_, v_newType_5945_, v___y_5944_, v___y_5943_, v___y_5948_);
if (lean_obj_tag(v___x_5953_) == 0)
{
lean_object* v_a_5954_; lean_object* v___x_5956_; uint8_t v_isShared_5957_; uint8_t v_isSharedCheck_5991_; 
v_a_5954_ = lean_ctor_get(v___x_5953_, 0);
v_isSharedCheck_5991_ = !lean_is_exclusive(v___x_5953_);
if (v_isSharedCheck_5991_ == 0)
{
v___x_5956_ = v___x_5953_;
v_isShared_5957_ = v_isSharedCheck_5991_;
goto v_resetjp_5955_;
}
else
{
lean_inc(v_a_5954_);
lean_dec(v___x_5953_);
v___x_5956_ = lean_box(0);
v_isShared_5957_ = v_isSharedCheck_5991_;
goto v_resetjp_5955_;
}
v_resetjp_5955_:
{
size_t v___x_5958_; size_t v___x_5959_; uint8_t v___x_5960_; 
v___x_5958_ = lean_ptr_addr(v_k_5934_);
v___x_5959_ = lean_ptr_addr(v_a_5952_);
v___x_5960_ = lean_usize_dec_eq(v___x_5958_, v___x_5959_);
if (v___x_5960_ == 0)
{
lean_object* v___x_5962_; uint8_t v_isShared_5963_; uint8_t v_isSharedCheck_5970_; 
v_isSharedCheck_5970_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_5970_ == 0)
{
lean_object* v_unused_5971_; lean_object* v_unused_5972_; 
v_unused_5971_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_5971_);
v_unused_5972_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_5972_);
v___x_5962_ = v_code_5829_;
v_isShared_5963_ = v_isSharedCheck_5970_;
goto v_resetjp_5961_;
}
else
{
lean_dec(v_code_5829_);
v___x_5962_ = lean_box(0);
v_isShared_5963_ = v_isSharedCheck_5970_;
goto v_resetjp_5961_;
}
v_resetjp_5961_:
{
lean_object* v___x_5965_; 
if (v_isShared_5963_ == 0)
{
lean_ctor_set(v___x_5962_, 1, v_a_5952_);
lean_ctor_set(v___x_5962_, 0, v_a_5954_);
v___x_5965_ = v___x_5962_;
goto v_reusejp_5964_;
}
else
{
lean_object* v_reuseFailAlloc_5969_; 
v_reuseFailAlloc_5969_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5969_, 0, v_a_5954_);
lean_ctor_set(v_reuseFailAlloc_5969_, 1, v_a_5952_);
v___x_5965_ = v_reuseFailAlloc_5969_;
goto v_reusejp_5964_;
}
v_reusejp_5964_:
{
lean_object* v___x_5967_; 
if (v_isShared_5957_ == 0)
{
lean_ctor_set(v___x_5956_, 0, v___x_5965_);
v___x_5967_ = v___x_5956_;
goto v_reusejp_5966_;
}
else
{
lean_object* v_reuseFailAlloc_5968_; 
v_reuseFailAlloc_5968_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5968_, 0, v___x_5965_);
v___x_5967_ = v_reuseFailAlloc_5968_;
goto v_reusejp_5966_;
}
v_reusejp_5966_:
{
return v___x_5967_;
}
}
}
}
else
{
size_t v___x_5973_; size_t v___x_5974_; uint8_t v___x_5975_; 
v___x_5973_ = lean_ptr_addr(v_decl_5933_);
v___x_5974_ = lean_ptr_addr(v_a_5954_);
v___x_5975_ = lean_usize_dec_eq(v___x_5973_, v___x_5974_);
if (v___x_5975_ == 0)
{
lean_object* v___x_5977_; uint8_t v_isShared_5978_; uint8_t v_isSharedCheck_5985_; 
v_isSharedCheck_5985_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_5985_ == 0)
{
lean_object* v_unused_5986_; lean_object* v_unused_5987_; 
v_unused_5986_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_5986_);
v_unused_5987_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_5987_);
v___x_5977_ = v_code_5829_;
v_isShared_5978_ = v_isSharedCheck_5985_;
goto v_resetjp_5976_;
}
else
{
lean_dec(v_code_5829_);
v___x_5977_ = lean_box(0);
v_isShared_5978_ = v_isSharedCheck_5985_;
goto v_resetjp_5976_;
}
v_resetjp_5976_:
{
lean_object* v___x_5980_; 
if (v_isShared_5978_ == 0)
{
lean_ctor_set(v___x_5977_, 1, v_a_5952_);
lean_ctor_set(v___x_5977_, 0, v_a_5954_);
v___x_5980_ = v___x_5977_;
goto v_reusejp_5979_;
}
else
{
lean_object* v_reuseFailAlloc_5984_; 
v_reuseFailAlloc_5984_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_5984_, 0, v_a_5954_);
lean_ctor_set(v_reuseFailAlloc_5984_, 1, v_a_5952_);
v___x_5980_ = v_reuseFailAlloc_5984_;
goto v_reusejp_5979_;
}
v_reusejp_5979_:
{
lean_object* v___x_5982_; 
if (v_isShared_5957_ == 0)
{
lean_ctor_set(v___x_5956_, 0, v___x_5980_);
v___x_5982_ = v___x_5956_;
goto v_reusejp_5981_;
}
else
{
lean_object* v_reuseFailAlloc_5983_; 
v_reuseFailAlloc_5983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5983_, 0, v___x_5980_);
v___x_5982_ = v_reuseFailAlloc_5983_;
goto v_reusejp_5981_;
}
v_reusejp_5981_:
{
return v___x_5982_;
}
}
}
}
else
{
lean_object* v___x_5989_; 
lean_dec(v_a_5954_);
lean_dec(v_a_5952_);
if (v_isShared_5957_ == 0)
{
lean_ctor_set(v___x_5956_, 0, v_code_5829_);
v___x_5989_ = v___x_5956_;
goto v_reusejp_5988_;
}
else
{
lean_object* v_reuseFailAlloc_5990_; 
v_reuseFailAlloc_5990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5990_, 0, v_code_5829_);
v___x_5989_ = v_reuseFailAlloc_5990_;
goto v_reusejp_5988_;
}
v_reusejp_5988_:
{
return v___x_5989_;
}
}
}
}
}
else
{
lean_object* v_a_5992_; lean_object* v___x_5994_; uint8_t v_isShared_5995_; uint8_t v_isSharedCheck_5999_; 
lean_dec(v_a_5952_);
lean_dec_ref_known(v_code_5829_, 2);
v_a_5992_ = lean_ctor_get(v___x_5953_, 0);
v_isSharedCheck_5999_ = !lean_is_exclusive(v___x_5953_);
if (v_isSharedCheck_5999_ == 0)
{
v___x_5994_ = v___x_5953_;
v_isShared_5995_ = v_isSharedCheck_5999_;
goto v_resetjp_5993_;
}
else
{
lean_inc(v_a_5992_);
lean_dec(v___x_5953_);
v___x_5994_ = lean_box(0);
v_isShared_5995_ = v_isSharedCheck_5999_;
goto v_resetjp_5993_;
}
v_resetjp_5993_:
{
lean_object* v___x_5997_; 
if (v_isShared_5995_ == 0)
{
v___x_5997_ = v___x_5994_;
goto v_reusejp_5996_;
}
else
{
lean_object* v_reuseFailAlloc_5998_; 
v_reuseFailAlloc_5998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5998_, 0, v_a_5992_);
v___x_5997_ = v_reuseFailAlloc_5998_;
goto v_reusejp_5996_;
}
v_reusejp_5996_:
{
return v___x_5997_;
}
}
}
}
else
{
lean_dec_ref(v_newType_5945_);
lean_dec_ref(v___y_5944_);
lean_dec_ref(v___y_5943_);
lean_dec_ref_known(v_code_5829_, 2);
return v___x_5951_;
}
}
v___jp_6002_:
{
lean_object* v___x_6004_; 
lean_inc_ref(v_value_5938_);
v___x_6004_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(v_value_5938_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_6004_) == 0)
{
lean_object* v_a_6005_; uint8_t v___x_6006_; lean_object* v___x_6007_; 
v_a_6005_ = lean_ctor_get(v___x_6004_, 0);
lean_inc(v_a_6005_);
lean_dec_ref_known(v___x_6004_, 1);
v___x_6006_ = 0;
v___x_6007_ = l_Lean_Compiler_LCNF_replaceFVars(v___x_5941_, v_a_6005_, v_val_5940_, v___x_6006_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
lean_dec(v_val_5940_);
if (lean_obj_tag(v___x_6007_) == 0)
{
lean_object* v_a_6008_; lean_object* v___x_6009_; uint8_t v___x_6010_; 
v_a_6008_ = lean_ctor_get(v___x_6007_, 0);
lean_inc(v_a_6008_);
lean_dec_ref_known(v___x_6007_, 1);
v___x_6009_ = lean_array_get_size(v_a_6003_);
v___x_6010_ = lean_nat_dec_eq(v___x_6009_, v___x_6001_);
if (v___x_6010_ == 0)
{
lean_object* v___x_6011_; 
lean_inc(v_a_6008_);
v___x_6011_ = l_Lean_Compiler_LCNF_Code_inferType(v___x_5941_, v_a_6008_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_6011_) == 0)
{
lean_object* v_a_6012_; lean_object* v___x_6013_; 
v_a_6012_ = lean_ctor_get(v___x_6011_, 0);
lean_inc(v_a_6012_);
lean_dec_ref_known(v___x_6011_, 1);
lean_inc_ref(v_a_6003_);
v___x_6013_ = l_Lean_Compiler_LCNF_mkForallParams(v___x_5941_, v_a_6003_, v_a_6012_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
lean_dec(v_a_6012_);
if (lean_obj_tag(v___x_6013_) == 0)
{
lean_object* v_a_6014_; 
v_a_6014_ = lean_ctor_get(v___x_6013_, 0);
lean_inc(v_a_6014_);
lean_dec_ref_known(v___x_6013_, 1);
v___y_5943_ = v_a_6008_;
v___y_5944_ = v_a_6003_;
v_newType_5945_ = v_a_6014_;
v___y_5946_ = v___y_5830_;
v___y_5947_ = v___y_5831_;
v___y_5948_ = v___y_5832_;
v___y_5949_ = v___y_5833_;
v___y_5950_ = v___y_5834_;
goto v___jp_5942_;
}
else
{
lean_object* v_a_6015_; lean_object* v___x_6017_; uint8_t v_isShared_6018_; uint8_t v_isSharedCheck_6022_; 
lean_dec(v_a_6008_);
lean_dec_ref(v_a_6003_);
lean_dec_ref_known(v_code_5829_, 2);
v_a_6015_ = lean_ctor_get(v___x_6013_, 0);
v_isSharedCheck_6022_ = !lean_is_exclusive(v___x_6013_);
if (v_isSharedCheck_6022_ == 0)
{
v___x_6017_ = v___x_6013_;
v_isShared_6018_ = v_isSharedCheck_6022_;
goto v_resetjp_6016_;
}
else
{
lean_inc(v_a_6015_);
lean_dec(v___x_6013_);
v___x_6017_ = lean_box(0);
v_isShared_6018_ = v_isSharedCheck_6022_;
goto v_resetjp_6016_;
}
v_resetjp_6016_:
{
lean_object* v___x_6020_; 
if (v_isShared_6018_ == 0)
{
v___x_6020_ = v___x_6017_;
goto v_reusejp_6019_;
}
else
{
lean_object* v_reuseFailAlloc_6021_; 
v_reuseFailAlloc_6021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6021_, 0, v_a_6015_);
v___x_6020_ = v_reuseFailAlloc_6021_;
goto v_reusejp_6019_;
}
v_reusejp_6019_:
{
return v___x_6020_;
}
}
}
}
else
{
lean_object* v_a_6023_; lean_object* v___x_6025_; uint8_t v_isShared_6026_; uint8_t v_isSharedCheck_6030_; 
lean_dec(v_a_6008_);
lean_dec_ref(v_a_6003_);
lean_dec_ref_known(v_code_5829_, 2);
v_a_6023_ = lean_ctor_get(v___x_6011_, 0);
v_isSharedCheck_6030_ = !lean_is_exclusive(v___x_6011_);
if (v_isSharedCheck_6030_ == 0)
{
v___x_6025_ = v___x_6011_;
v_isShared_6026_ = v_isSharedCheck_6030_;
goto v_resetjp_6024_;
}
else
{
lean_inc(v_a_6023_);
lean_dec(v___x_6011_);
v___x_6025_ = lean_box(0);
v_isShared_6026_ = v_isSharedCheck_6030_;
goto v_resetjp_6024_;
}
v_resetjp_6024_:
{
lean_object* v___x_6028_; 
if (v_isShared_6026_ == 0)
{
v___x_6028_ = v___x_6025_;
goto v_reusejp_6027_;
}
else
{
lean_object* v_reuseFailAlloc_6029_; 
v_reuseFailAlloc_6029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6029_, 0, v_a_6023_);
v___x_6028_ = v_reuseFailAlloc_6029_;
goto v_reusejp_6027_;
}
v_reusejp_6027_:
{
return v___x_6028_;
}
}
}
}
else
{
lean_inc_ref(v_type_5937_);
v___y_5943_ = v_a_6008_;
v___y_5944_ = v_a_6003_;
v_newType_5945_ = v_type_5937_;
v___y_5946_ = v___y_5830_;
v___y_5947_ = v___y_5831_;
v___y_5948_ = v___y_5832_;
v___y_5949_ = v___y_5833_;
v___y_5950_ = v___y_5834_;
goto v___jp_5942_;
}
}
else
{
lean_dec_ref(v_a_6003_);
lean_dec_ref_known(v_code_5829_, 2);
return v___x_6007_;
}
}
else
{
lean_dec_ref(v_a_6003_);
lean_dec(v_val_5940_);
lean_dec_ref_known(v_code_5829_, 2);
return v___x_6004_;
}
}
v___jp_6031_:
{
if (lean_obj_tag(v___y_6032_) == 0)
{
lean_object* v_a_6033_; 
v_a_6033_ = lean_ctor_get(v___y_6032_, 0);
lean_inc(v_a_6033_);
lean_dec_ref_known(v___y_6032_, 1);
v_a_6003_ = v_a_6033_;
goto v___jp_6002_;
}
else
{
lean_object* v_a_6034_; lean_object* v___x_6036_; uint8_t v_isShared_6037_; uint8_t v_isSharedCheck_6041_; 
lean_dec(v_val_5940_);
lean_dec_ref_known(v_code_5829_, 2);
v_a_6034_ = lean_ctor_get(v___y_6032_, 0);
v_isSharedCheck_6041_ = !lean_is_exclusive(v___y_6032_);
if (v_isSharedCheck_6041_ == 0)
{
v___x_6036_ = v___y_6032_;
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
else
{
lean_inc(v_a_6034_);
lean_dec(v___y_6032_);
v___x_6036_ = lean_box(0);
v_isShared_6037_ = v_isSharedCheck_6041_;
goto v_resetjp_6035_;
}
v_resetjp_6035_:
{
lean_object* v___x_6039_; 
if (v_isShared_6037_ == 0)
{
v___x_6039_ = v___x_6036_;
goto v_reusejp_6038_;
}
else
{
lean_object* v_reuseFailAlloc_6040_; 
v_reuseFailAlloc_6040_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6040_, 0, v_a_6034_);
v___x_6039_ = v_reuseFailAlloc_6040_;
goto v_reusejp_6038_;
}
v_reusejp_6038_:
{
return v___x_6039_;
}
}
}
}
}
else
{
lean_object* v___x_6051_; 
lean_dec(v___x_5939_);
lean_inc_ref(v_k_5934_);
v___x_6051_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(v_k_5934_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_6051_) == 0)
{
lean_object* v_a_6052_; lean_object* v___x_6054_; uint8_t v_isShared_6055_; uint8_t v_isSharedCheck_6088_; 
v_a_6052_ = lean_ctor_get(v___x_6051_, 0);
v_isSharedCheck_6088_ = !lean_is_exclusive(v___x_6051_);
if (v_isSharedCheck_6088_ == 0)
{
v___x_6054_ = v___x_6051_;
v_isShared_6055_ = v_isSharedCheck_6088_;
goto v_resetjp_6053_;
}
else
{
lean_inc(v_a_6052_);
lean_dec(v___x_6051_);
v___x_6054_ = lean_box(0);
v_isShared_6055_ = v_isSharedCheck_6088_;
goto v_resetjp_6053_;
}
v_resetjp_6053_:
{
size_t v___x_6056_; size_t v___x_6057_; uint8_t v___x_6058_; 
v___x_6056_ = lean_ptr_addr(v_k_5934_);
v___x_6057_ = lean_ptr_addr(v_a_6052_);
v___x_6058_ = lean_usize_dec_eq(v___x_6056_, v___x_6057_);
if (v___x_6058_ == 0)
{
lean_object* v___x_6060_; uint8_t v_isShared_6061_; uint8_t v_isSharedCheck_6068_; 
lean_inc_ref(v_decl_5933_);
v_isSharedCheck_6068_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_6068_ == 0)
{
lean_object* v_unused_6069_; lean_object* v_unused_6070_; 
v_unused_6069_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_6069_);
v_unused_6070_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_6070_);
v___x_6060_ = v_code_5829_;
v_isShared_6061_ = v_isSharedCheck_6068_;
goto v_resetjp_6059_;
}
else
{
lean_dec(v_code_5829_);
v___x_6060_ = lean_box(0);
v_isShared_6061_ = v_isSharedCheck_6068_;
goto v_resetjp_6059_;
}
v_resetjp_6059_:
{
lean_object* v___x_6063_; 
if (v_isShared_6061_ == 0)
{
lean_ctor_set(v___x_6060_, 1, v_a_6052_);
v___x_6063_ = v___x_6060_;
goto v_reusejp_6062_;
}
else
{
lean_object* v_reuseFailAlloc_6067_; 
v_reuseFailAlloc_6067_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6067_, 0, v_decl_5933_);
lean_ctor_set(v_reuseFailAlloc_6067_, 1, v_a_6052_);
v___x_6063_ = v_reuseFailAlloc_6067_;
goto v_reusejp_6062_;
}
v_reusejp_6062_:
{
lean_object* v___x_6065_; 
if (v_isShared_6055_ == 0)
{
lean_ctor_set(v___x_6054_, 0, v___x_6063_);
v___x_6065_ = v___x_6054_;
goto v_reusejp_6064_;
}
else
{
lean_object* v_reuseFailAlloc_6066_; 
v_reuseFailAlloc_6066_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6066_, 0, v___x_6063_);
v___x_6065_ = v_reuseFailAlloc_6066_;
goto v_reusejp_6064_;
}
v_reusejp_6064_:
{
return v___x_6065_;
}
}
}
}
else
{
size_t v___x_6071_; uint8_t v___x_6072_; 
v___x_6071_ = lean_ptr_addr(v_decl_5933_);
v___x_6072_ = lean_usize_dec_eq(v___x_6071_, v___x_6071_);
if (v___x_6072_ == 0)
{
lean_object* v___x_6074_; uint8_t v_isShared_6075_; uint8_t v_isSharedCheck_6082_; 
lean_inc_ref(v_decl_5933_);
v_isSharedCheck_6082_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_6082_ == 0)
{
lean_object* v_unused_6083_; lean_object* v_unused_6084_; 
v_unused_6083_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_6083_);
v_unused_6084_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_6084_);
v___x_6074_ = v_code_5829_;
v_isShared_6075_ = v_isSharedCheck_6082_;
goto v_resetjp_6073_;
}
else
{
lean_dec(v_code_5829_);
v___x_6074_ = lean_box(0);
v_isShared_6075_ = v_isSharedCheck_6082_;
goto v_resetjp_6073_;
}
v_resetjp_6073_:
{
lean_object* v___x_6077_; 
if (v_isShared_6075_ == 0)
{
lean_ctor_set(v___x_6074_, 1, v_a_6052_);
v___x_6077_ = v___x_6074_;
goto v_reusejp_6076_;
}
else
{
lean_object* v_reuseFailAlloc_6081_; 
v_reuseFailAlloc_6081_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6081_, 0, v_decl_5933_);
lean_ctor_set(v_reuseFailAlloc_6081_, 1, v_a_6052_);
v___x_6077_ = v_reuseFailAlloc_6081_;
goto v_reusejp_6076_;
}
v_reusejp_6076_:
{
lean_object* v___x_6079_; 
if (v_isShared_6055_ == 0)
{
lean_ctor_set(v___x_6054_, 0, v___x_6077_);
v___x_6079_ = v___x_6054_;
goto v_reusejp_6078_;
}
else
{
lean_object* v_reuseFailAlloc_6080_; 
v_reuseFailAlloc_6080_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6080_, 0, v___x_6077_);
v___x_6079_ = v_reuseFailAlloc_6080_;
goto v_reusejp_6078_;
}
v_reusejp_6078_:
{
return v___x_6079_;
}
}
}
}
else
{
lean_object* v___x_6086_; 
lean_dec(v_a_6052_);
if (v_isShared_6055_ == 0)
{
lean_ctor_set(v___x_6054_, 0, v_code_5829_);
v___x_6086_ = v___x_6054_;
goto v_reusejp_6085_;
}
else
{
lean_object* v_reuseFailAlloc_6087_; 
v_reuseFailAlloc_6087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6087_, 0, v_code_5829_);
v___x_6086_ = v_reuseFailAlloc_6087_;
goto v_reusejp_6085_;
}
v_reusejp_6085_:
{
return v___x_6086_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_code_5829_, 2);
return v___x_6051_;
}
}
}
case 3:
{
lean_object* v_fvarId_6089_; lean_object* v_args_6090_; lean_object* v___x_6091_; lean_object* v___x_6092_; uint8_t v___x_6093_; lean_object* v___x_6094_; 
v_fvarId_6089_ = lean_ctor_get(v_code_5829_, 0);
v_args_6090_ = lean_ctor_get(v_code_5829_, 1);
v___x_6091_ = lean_obj_once(&l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0, &l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0_once, _init_l_panic___at___00Std_DHashMap_Internal_AssocList_get_x21___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x21___at___00Lean_Compiler_LCNF_JoinPointContextExtender_replaceFVar_spec__0_spec__0_spec__1___closed__0);
lean_inc_n(v_fvarId_6089_, 2);
lean_inc(v___y_5830_);
v___x_6092_ = l_Lean_FVarIdMap_get_x21___redArg(v___x_6091_, v___y_5830_, v_fvarId_6089_);
v___x_6093_ = 0;
v___x_6094_ = l_Lean_Compiler_LCNF_getFunDecl(v___x_6093_, v_fvarId_6089_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_6094_) == 0)
{
lean_object* v_a_6095_; lean_object* v___x_6097_; uint8_t v_isShared_6098_; uint8_t v_isSharedCheck_6139_; 
v_a_6095_ = lean_ctor_get(v___x_6094_, 0);
v_isSharedCheck_6139_ = !lean_is_exclusive(v___x_6094_);
if (v_isSharedCheck_6139_ == 0)
{
v___x_6097_ = v___x_6094_;
v_isShared_6098_ = v_isSharedCheck_6139_;
goto v_resetjp_6096_;
}
else
{
lean_inc(v_a_6095_);
lean_dec(v___x_6094_);
v___x_6097_ = lean_box(0);
v_isShared_6098_ = v_isSharedCheck_6139_;
goto v_resetjp_6096_;
}
v_resetjp_6096_:
{
lean_object* v___y_6100_; uint8_t v___y_6101_; lean_object* v___y_6118_; lean_object* v_params_6126_; lean_object* v___x_6127_; lean_object* v___x_6128_; lean_object* v___x_6129_; lean_object* v___x_6130_; uint8_t v___x_6131_; 
v_params_6126_ = lean_ctor_get(v_a_6095_, 2);
lean_inc_ref(v_params_6126_);
lean_dec(v_a_6095_);
v___x_6127_ = l_Array_zip___redArg(v_params_6126_, v_args_6090_);
lean_dec_ref(v_params_6126_);
v___x_6128_ = lean_unsigned_to_nat(0u);
v___x_6129_ = lean_array_get_size(v___x_6127_);
v___x_6130_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___closed__1));
v___x_6131_ = lean_nat_dec_lt(v___x_6128_, v___x_6129_);
if (v___x_6131_ == 0)
{
lean_dec_ref(v___x_6127_);
lean_dec(v___x_6092_);
v___y_6118_ = v___x_6130_;
goto v___jp_6117_;
}
else
{
uint8_t v___x_6132_; 
v___x_6132_ = lean_nat_dec_le(v___x_6129_, v___x_6129_);
if (v___x_6132_ == 0)
{
if (v___x_6131_ == 0)
{
lean_dec_ref(v___x_6127_);
lean_dec(v___x_6092_);
v___y_6118_ = v___x_6130_;
goto v___jp_6117_;
}
else
{
size_t v___x_6133_; size_t v___x_6134_; lean_object* v___x_6135_; 
v___x_6133_ = ((size_t)0ULL);
v___x_6134_ = lean_usize_of_nat(v___x_6129_);
v___x_6135_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__2(v___x_6092_, v___x_6127_, v___x_6133_, v___x_6134_, v___x_6130_);
lean_dec_ref(v___x_6127_);
lean_dec(v___x_6092_);
v___y_6118_ = v___x_6135_;
goto v___jp_6117_;
}
}
else
{
size_t v___x_6136_; size_t v___x_6137_; lean_object* v___x_6138_; 
v___x_6136_ = ((size_t)0ULL);
v___x_6137_ = lean_usize_of_nat(v___x_6129_);
v___x_6138_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__2(v___x_6092_, v___x_6127_, v___x_6136_, v___x_6137_, v___x_6130_);
lean_dec_ref(v___x_6127_);
lean_dec(v___x_6092_);
v___y_6118_ = v___x_6138_;
goto v___jp_6117_;
}
}
v___jp_6099_:
{
if (v___y_6101_ == 0)
{
lean_object* v___x_6103_; uint8_t v_isShared_6104_; uint8_t v_isSharedCheck_6111_; 
lean_inc(v_fvarId_6089_);
v_isSharedCheck_6111_ = !lean_is_exclusive(v_code_5829_);
if (v_isSharedCheck_6111_ == 0)
{
lean_object* v_unused_6112_; lean_object* v_unused_6113_; 
v_unused_6112_ = lean_ctor_get(v_code_5829_, 1);
lean_dec(v_unused_6112_);
v_unused_6113_ = lean_ctor_get(v_code_5829_, 0);
lean_dec(v_unused_6113_);
v___x_6103_ = v_code_5829_;
v_isShared_6104_ = v_isSharedCheck_6111_;
goto v_resetjp_6102_;
}
else
{
lean_dec(v_code_5829_);
v___x_6103_ = lean_box(0);
v_isShared_6104_ = v_isSharedCheck_6111_;
goto v_resetjp_6102_;
}
v_resetjp_6102_:
{
lean_object* v___x_6106_; 
if (v_isShared_6104_ == 0)
{
lean_ctor_set(v___x_6103_, 1, v___y_6100_);
v___x_6106_ = v___x_6103_;
goto v_reusejp_6105_;
}
else
{
lean_object* v_reuseFailAlloc_6110_; 
v_reuseFailAlloc_6110_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6110_, 0, v_fvarId_6089_);
lean_ctor_set(v_reuseFailAlloc_6110_, 1, v___y_6100_);
v___x_6106_ = v_reuseFailAlloc_6110_;
goto v_reusejp_6105_;
}
v_reusejp_6105_:
{
lean_object* v___x_6108_; 
if (v_isShared_6098_ == 0)
{
lean_ctor_set(v___x_6097_, 0, v___x_6106_);
v___x_6108_ = v___x_6097_;
goto v_reusejp_6107_;
}
else
{
lean_object* v_reuseFailAlloc_6109_; 
v_reuseFailAlloc_6109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6109_, 0, v___x_6106_);
v___x_6108_ = v_reuseFailAlloc_6109_;
goto v_reusejp_6107_;
}
v_reusejp_6107_:
{
return v___x_6108_;
}
}
}
}
else
{
lean_object* v___x_6115_; 
lean_dec_ref(v___y_6100_);
if (v_isShared_6098_ == 0)
{
lean_ctor_set(v___x_6097_, 0, v_code_5829_);
v___x_6115_ = v___x_6097_;
goto v_reusejp_6114_;
}
else
{
lean_object* v_reuseFailAlloc_6116_; 
v_reuseFailAlloc_6116_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6116_, 0, v_code_5829_);
v___x_6115_ = v_reuseFailAlloc_6116_;
goto v_reusejp_6114_;
}
v_reusejp_6114_:
{
return v___x_6115_;
}
}
}
v___jp_6117_:
{
size_t v_sz_6119_; size_t v___x_6120_; lean_object* v___x_6121_; uint8_t v___x_6122_; 
v_sz_6119_ = lean_array_size(v___y_6118_);
v___x_6120_ = ((size_t)0ULL);
v___x_6121_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__1(v_sz_6119_, v___x_6120_, v___y_6118_);
v___x_6122_ = l_Lean_instBEqFVarId_beq(v_fvarId_6089_, v_fvarId_6089_);
if (v___x_6122_ == 0)
{
v___y_6100_ = v___x_6121_;
v___y_6101_ = v___x_6122_;
goto v___jp_6099_;
}
else
{
size_t v___x_6123_; size_t v___x_6124_; uint8_t v___x_6125_; 
v___x_6123_ = lean_ptr_addr(v_args_6090_);
v___x_6124_ = lean_ptr_addr(v___x_6121_);
v___x_6125_ = lean_usize_dec_eq(v___x_6123_, v___x_6124_);
v___y_6100_ = v___x_6121_;
v___y_6101_ = v___x_6125_;
goto v___jp_6099_;
}
}
}
}
else
{
lean_object* v_a_6140_; lean_object* v___x_6142_; uint8_t v_isShared_6143_; uint8_t v_isSharedCheck_6147_; 
lean_dec(v___x_6092_);
lean_dec_ref_known(v_code_5829_, 2);
v_a_6140_ = lean_ctor_get(v___x_6094_, 0);
v_isSharedCheck_6147_ = !lean_is_exclusive(v___x_6094_);
if (v_isSharedCheck_6147_ == 0)
{
v___x_6142_ = v___x_6094_;
v_isShared_6143_ = v_isSharedCheck_6147_;
goto v_resetjp_6141_;
}
else
{
lean_inc(v_a_6140_);
lean_dec(v___x_6094_);
v___x_6142_ = lean_box(0);
v_isShared_6143_ = v_isSharedCheck_6147_;
goto v_resetjp_6141_;
}
v_resetjp_6141_:
{
lean_object* v___x_6145_; 
if (v_isShared_6143_ == 0)
{
v___x_6145_ = v___x_6142_;
goto v_reusejp_6144_;
}
else
{
lean_object* v_reuseFailAlloc_6146_; 
v_reuseFailAlloc_6146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6146_, 0, v_a_6140_);
v___x_6145_ = v_reuseFailAlloc_6146_;
goto v_reusejp_6144_;
}
v_reusejp_6144_:
{
return v___x_6145_;
}
}
}
}
case 4:
{
lean_object* v_cases_6148_; lean_object* v_typeName_6149_; lean_object* v_resultType_6150_; lean_object* v_discr_6151_; lean_object* v_alts_6152_; lean_object* v___x_6154_; uint8_t v_isShared_6155_; uint8_t v_isSharedCheck_6186_; 
v_cases_6148_ = lean_ctor_get(v_code_5829_, 0);
lean_inc_ref(v_cases_6148_);
v_typeName_6149_ = lean_ctor_get(v_cases_6148_, 0);
v_resultType_6150_ = lean_ctor_get(v_cases_6148_, 1);
v_discr_6151_ = lean_ctor_get(v_cases_6148_, 2);
v_alts_6152_ = lean_ctor_get(v_cases_6148_, 3);
v_isSharedCheck_6186_ = !lean_is_exclusive(v_cases_6148_);
if (v_isSharedCheck_6186_ == 0)
{
v___x_6154_ = v_cases_6148_;
v_isShared_6155_ = v_isSharedCheck_6186_;
goto v_resetjp_6153_;
}
else
{
lean_inc(v_alts_6152_);
lean_inc(v_discr_6151_);
lean_inc(v_resultType_6150_);
lean_inc(v_typeName_6149_);
lean_dec(v_cases_6148_);
v___x_6154_ = lean_box(0);
v_isShared_6155_ = v_isSharedCheck_6186_;
goto v_resetjp_6153_;
}
v_resetjp_6153_:
{
lean_object* v___x_6156_; lean_object* v___x_6157_; 
v___x_6156_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_alts_6152_);
v___x_6157_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__4(v___x_6156_, v_alts_6152_, v___y_5830_, v___y_5831_, v___y_5832_, v___y_5833_, v___y_5834_);
if (lean_obj_tag(v___x_6157_) == 0)
{
lean_object* v_a_6158_; lean_object* v___x_6160_; uint8_t v_isShared_6161_; uint8_t v_isSharedCheck_6177_; 
v_a_6158_ = lean_ctor_get(v___x_6157_, 0);
v_isSharedCheck_6177_ = !lean_is_exclusive(v___x_6157_);
if (v_isSharedCheck_6177_ == 0)
{
v___x_6160_ = v___x_6157_;
v_isShared_6161_ = v_isSharedCheck_6177_;
goto v_resetjp_6159_;
}
else
{
lean_inc(v_a_6158_);
lean_dec(v___x_6157_);
v___x_6160_ = lean_box(0);
v_isShared_6161_ = v_isSharedCheck_6177_;
goto v_resetjp_6159_;
}
v_resetjp_6159_:
{
size_t v___x_6170_; size_t v___x_6171_; uint8_t v___x_6172_; 
v___x_6170_ = lean_ptr_addr(v_alts_6152_);
lean_dec_ref(v_alts_6152_);
v___x_6171_ = lean_ptr_addr(v_a_6158_);
v___x_6172_ = lean_usize_dec_eq(v___x_6170_, v___x_6171_);
if (v___x_6172_ == 0)
{
lean_dec_ref_known(v_code_5829_, 1);
goto v___jp_6162_;
}
else
{
size_t v___x_6173_; uint8_t v___x_6174_; 
v___x_6173_ = lean_ptr_addr(v_resultType_6150_);
v___x_6174_ = lean_usize_dec_eq(v___x_6173_, v___x_6173_);
if (v___x_6174_ == 0)
{
lean_dec_ref_known(v_code_5829_, 1);
goto v___jp_6162_;
}
else
{
uint8_t v___x_6175_; 
v___x_6175_ = l_Lean_instBEqFVarId_beq(v_discr_6151_, v_discr_6151_);
if (v___x_6175_ == 0)
{
lean_dec_ref_known(v_code_5829_, 1);
goto v___jp_6162_;
}
else
{
lean_object* v___x_6176_; 
lean_del_object(v___x_6160_);
lean_dec(v_a_6158_);
lean_del_object(v___x_6154_);
lean_dec(v_discr_6151_);
lean_dec_ref(v_resultType_6150_);
lean_dec(v_typeName_6149_);
v___x_6176_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6176_, 0, v_code_5829_);
return v___x_6176_;
}
}
}
v___jp_6162_:
{
lean_object* v___x_6164_; 
if (v_isShared_6155_ == 0)
{
lean_ctor_set(v___x_6154_, 3, v_a_6158_);
v___x_6164_ = v___x_6154_;
goto v_reusejp_6163_;
}
else
{
lean_object* v_reuseFailAlloc_6169_; 
v_reuseFailAlloc_6169_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_6169_, 0, v_typeName_6149_);
lean_ctor_set(v_reuseFailAlloc_6169_, 1, v_resultType_6150_);
lean_ctor_set(v_reuseFailAlloc_6169_, 2, v_discr_6151_);
lean_ctor_set(v_reuseFailAlloc_6169_, 3, v_a_6158_);
v___x_6164_ = v_reuseFailAlloc_6169_;
goto v_reusejp_6163_;
}
v_reusejp_6163_:
{
lean_object* v___x_6165_; lean_object* v___x_6167_; 
v___x_6165_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_6165_, 0, v___x_6164_);
if (v_isShared_6161_ == 0)
{
lean_ctor_set(v___x_6160_, 0, v___x_6165_);
v___x_6167_ = v___x_6160_;
goto v_reusejp_6166_;
}
else
{
lean_object* v_reuseFailAlloc_6168_; 
v_reuseFailAlloc_6168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6168_, 0, v___x_6165_);
v___x_6167_ = v_reuseFailAlloc_6168_;
goto v_reusejp_6166_;
}
v_reusejp_6166_:
{
return v___x_6167_;
}
}
}
}
}
else
{
lean_object* v_a_6178_; lean_object* v___x_6180_; uint8_t v_isShared_6181_; uint8_t v_isSharedCheck_6185_; 
lean_del_object(v___x_6154_);
lean_dec_ref(v_alts_6152_);
lean_dec(v_discr_6151_);
lean_dec_ref(v_resultType_6150_);
lean_dec(v_typeName_6149_);
lean_dec_ref_known(v_code_5829_, 1);
v_a_6178_ = lean_ctor_get(v___x_6157_, 0);
v_isSharedCheck_6185_ = !lean_is_exclusive(v___x_6157_);
if (v_isSharedCheck_6185_ == 0)
{
v___x_6180_ = v___x_6157_;
v_isShared_6181_ = v_isSharedCheck_6185_;
goto v_resetjp_6179_;
}
else
{
lean_inc(v_a_6178_);
lean_dec(v___x_6157_);
v___x_6180_ = lean_box(0);
v_isShared_6181_ = v_isSharedCheck_6185_;
goto v_resetjp_6179_;
}
v_resetjp_6179_:
{
lean_object* v___x_6183_; 
if (v_isShared_6181_ == 0)
{
v___x_6183_ = v___x_6180_;
goto v_reusejp_6182_;
}
else
{
lean_object* v_reuseFailAlloc_6184_; 
v_reuseFailAlloc_6184_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6184_, 0, v_a_6178_);
v___x_6183_ = v_reuseFailAlloc_6184_;
goto v_reusejp_6182_;
}
v_reusejp_6182_:
{
return v___x_6183_;
}
}
}
}
}
default: 
{
lean_object* v___x_6187_; 
v___x_6187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6187_, 0, v_code_5829_);
return v___x_6187_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___boxed(lean_object* v_code_6188_, lean_object* v___y_6189_, lean_object* v___y_6190_, lean_object* v___y_6191_, lean_object* v___y_6192_, lean_object* v___y_6193_, lean_object* v___y_6194_){
_start:
{
lean_object* v_res_6195_; 
v_res_6195_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce(v_code_6188_, v___y_6189_, v___y_6190_, v___y_6191_, v___y_6192_, v___y_6193_);
lean_dec(v___y_6193_);
lean_dec_ref(v___y_6192_);
lean_dec(v___y_6191_);
lean_dec_ref(v___y_6190_);
lean_dec(v___y_6189_);
return v_res_6195_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__4(lean_object* v_i_6196_, lean_object* v_as_6197_, lean_object* v___y_6198_, lean_object* v___y_6199_, lean_object* v___y_6200_, lean_object* v___y_6201_, lean_object* v___y_6202_){
_start:
{
lean_object* v___x_6204_; uint8_t v___x_6205_; 
v___x_6204_ = lean_array_get_size(v_as_6197_);
v___x_6205_ = lean_nat_dec_lt(v_i_6196_, v___x_6204_);
if (v___x_6205_ == 0)
{
lean_object* v___x_6206_; 
lean_dec(v_i_6196_);
v___x_6206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6206_, 0, v_as_6197_);
return v___x_6206_;
}
else
{
lean_object* v_a_6207_; lean_object* v___x_6208_; lean_object* v___x_6209_; 
v_a_6207_ = lean_array_fget_borrowed(v_as_6197_, v_i_6196_);
v___x_6208_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce___boxed), 7, 0);
lean_inc(v_a_6207_);
v___x_6209_ = l_Lean_Compiler_LCNF_Alt_mapCodeM___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__3___redArg(v_a_6207_, v___x_6208_, v___y_6198_, v___y_6199_, v___y_6200_, v___y_6201_, v___y_6202_);
if (lean_obj_tag(v___x_6209_) == 0)
{
lean_object* v_a_6210_; size_t v___x_6211_; size_t v___x_6212_; uint8_t v___x_6213_; 
v_a_6210_ = lean_ctor_get(v___x_6209_, 0);
lean_inc(v_a_6210_);
lean_dec_ref_known(v___x_6209_, 1);
v___x_6211_ = lean_ptr_addr(v_a_6207_);
v___x_6212_ = lean_ptr_addr(v_a_6210_);
v___x_6213_ = lean_usize_dec_eq(v___x_6211_, v___x_6212_);
if (v___x_6213_ == 0)
{
lean_object* v___x_6214_; lean_object* v___x_6215_; lean_object* v___x_6216_; 
v___x_6214_ = lean_unsigned_to_nat(1u);
v___x_6215_ = lean_nat_add(v_i_6196_, v___x_6214_);
v___x_6216_ = lean_array_fset(v_as_6197_, v_i_6196_, v_a_6210_);
lean_dec(v_i_6196_);
v_i_6196_ = v___x_6215_;
v_as_6197_ = v___x_6216_;
goto _start;
}
else
{
lean_object* v___x_6218_; lean_object* v___x_6219_; 
lean_dec(v_a_6210_);
v___x_6218_ = lean_unsigned_to_nat(1u);
v___x_6219_ = lean_nat_add(v_i_6196_, v___x_6218_);
lean_dec(v_i_6196_);
v_i_6196_ = v___x_6219_;
goto _start;
}
}
else
{
lean_object* v_a_6221_; lean_object* v___x_6223_; uint8_t v_isShared_6224_; uint8_t v_isSharedCheck_6228_; 
lean_dec_ref(v_as_6197_);
lean_dec(v_i_6196_);
v_a_6221_ = lean_ctor_get(v___x_6209_, 0);
v_isSharedCheck_6228_ = !lean_is_exclusive(v___x_6209_);
if (v_isSharedCheck_6228_ == 0)
{
v___x_6223_ = v___x_6209_;
v_isShared_6224_ = v_isSharedCheck_6228_;
goto v_resetjp_6222_;
}
else
{
lean_inc(v_a_6221_);
lean_dec(v___x_6209_);
v___x_6223_ = lean_box(0);
v_isShared_6224_ = v_isSharedCheck_6228_;
goto v_resetjp_6222_;
}
v_resetjp_6222_:
{
lean_object* v___x_6226_; 
if (v_isShared_6224_ == 0)
{
v___x_6226_ = v___x_6223_;
goto v_reusejp_6225_;
}
else
{
lean_object* v_reuseFailAlloc_6227_; 
v_reuseFailAlloc_6227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6227_, 0, v_a_6221_);
v___x_6226_ = v_reuseFailAlloc_6227_;
goto v_reusejp_6225_;
}
v_reusejp_6225_:
{
return v___x_6226_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__4___boxed(lean_object* v_i_6229_, lean_object* v_as_6230_, lean_object* v___y_6231_, lean_object* v___y_6232_, lean_object* v___y_6233_, lean_object* v___y_6234_, lean_object* v___y_6235_, lean_object* v___y_6236_){
_start:
{
lean_object* v_res_6237_; 
v_res_6237_ = l___private_Init_Data_Array_BasicAux_0__mapMonoMImp_go___at___00__private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_goReduce_spec__4(v_i_6229_, v_as_6230_, v___y_6231_, v___y_6232_, v___y_6233_, v___y_6234_, v___y_6235_);
lean_dec(v___y_6235_);
lean_dec_ref(v___y_6234_);
lean_dec(v___y_6233_);
lean_dec_ref(v___y_6232_);
lean_dec(v___y_6231_);
return v_res_6237_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___redArg(lean_object* v_f_6238_, lean_object* v_v_6239_, lean_object* v___y_6240_, lean_object* v___y_6241_, lean_object* v___y_6242_, lean_object* v___y_6243_, lean_object* v___y_6244_, lean_object* v___y_6245_, lean_object* v___y_6246_){
_start:
{
if (lean_obj_tag(v_v_6239_) == 0)
{
lean_object* v_code_6248_; lean_object* v___x_6249_; 
v_code_6248_ = lean_ctor_get(v_v_6239_, 0);
lean_inc_ref(v_code_6248_);
lean_dec_ref_known(v_v_6239_, 1);
lean_inc(v___y_6246_);
lean_inc_ref(v___y_6245_);
lean_inc(v___y_6244_);
lean_inc_ref(v___y_6243_);
lean_inc(v___y_6242_);
lean_inc(v___y_6241_);
lean_inc(v___y_6240_);
v___x_6249_ = lean_apply_9(v_f_6238_, v_code_6248_, v___y_6240_, v___y_6241_, v___y_6242_, v___y_6243_, v___y_6244_, v___y_6245_, v___y_6246_, lean_box(0));
return v___x_6249_;
}
else
{
lean_object* v___x_6251_; uint8_t v_isShared_6252_; uint8_t v_isSharedCheck_6257_; 
lean_dec_ref(v_f_6238_);
v_isSharedCheck_6257_ = !lean_is_exclusive(v_v_6239_);
if (v_isSharedCheck_6257_ == 0)
{
lean_object* v_unused_6258_; 
v_unused_6258_ = lean_ctor_get(v_v_6239_, 0);
lean_dec(v_unused_6258_);
v___x_6251_ = v_v_6239_;
v_isShared_6252_ = v_isSharedCheck_6257_;
goto v_resetjp_6250_;
}
else
{
lean_dec(v_v_6239_);
v___x_6251_ = lean_box(0);
v_isShared_6252_ = v_isSharedCheck_6257_;
goto v_resetjp_6250_;
}
v_resetjp_6250_:
{
lean_object* v___x_6253_; lean_object* v___x_6255_; 
v___x_6253_ = lean_box(0);
if (v_isShared_6252_ == 0)
{
lean_ctor_set_tag(v___x_6251_, 0);
lean_ctor_set(v___x_6251_, 0, v___x_6253_);
v___x_6255_ = v___x_6251_;
goto v_reusejp_6254_;
}
else
{
lean_object* v_reuseFailAlloc_6256_; 
v_reuseFailAlloc_6256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6256_, 0, v___x_6253_);
v___x_6255_ = v_reuseFailAlloc_6256_;
goto v_reusejp_6254_;
}
v_reusejp_6254_:
{
return v___x_6255_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___redArg___boxed(lean_object* v_f_6259_, lean_object* v_v_6260_, lean_object* v___y_6261_, lean_object* v___y_6262_, lean_object* v___y_6263_, lean_object* v___y_6264_, lean_object* v___y_6265_, lean_object* v___y_6266_, lean_object* v___y_6267_, lean_object* v___y_6268_){
_start:
{
lean_object* v_res_6269_; 
v_res_6269_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___redArg(v_f_6259_, v_v_6260_, v___y_6261_, v___y_6262_, v___y_6263_, v___y_6264_, v___y_6265_, v___y_6266_, v___y_6267_);
lean_dec(v___y_6267_);
lean_dec_ref(v___y_6266_);
lean_dec(v___y_6265_);
lean_dec_ref(v___y_6264_);
lean_dec(v___y_6263_);
lean_dec(v___y_6262_);
lean_dec(v___y_6261_);
return v_res_6269_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0(uint8_t v_pu_6270_, lean_object* v_f_6271_, lean_object* v_v_6272_, lean_object* v___y_6273_, lean_object* v___y_6274_, lean_object* v___y_6275_, lean_object* v___y_6276_, lean_object* v___y_6277_, lean_object* v___y_6278_, lean_object* v___y_6279_){
_start:
{
lean_object* v___x_6281_; 
v___x_6281_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___redArg(v_f_6271_, v_v_6272_, v___y_6273_, v___y_6274_, v___y_6275_, v___y_6276_, v___y_6277_, v___y_6278_, v___y_6279_);
return v___x_6281_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___boxed(lean_object* v_pu_6282_, lean_object* v_f_6283_, lean_object* v_v_6284_, lean_object* v___y_6285_, lean_object* v___y_6286_, lean_object* v___y_6287_, lean_object* v___y_6288_, lean_object* v___y_6289_, lean_object* v___y_6290_, lean_object* v___y_6291_, lean_object* v___y_6292_){
_start:
{
uint8_t v_pu_boxed_6293_; lean_object* v_res_6294_; 
v_pu_boxed_6293_ = lean_unbox(v_pu_6282_);
v_res_6294_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0(v_pu_boxed_6293_, v_f_6283_, v_v_6284_, v___y_6285_, v___y_6286_, v___y_6287_, v___y_6288_, v___y_6289_, v___y_6290_, v___y_6291_);
lean_dec(v___y_6291_);
lean_dec_ref(v___y_6290_);
lean_dec(v___y_6289_);
lean_dec_ref(v___y_6288_);
lean_dec(v___y_6287_);
lean_dec(v___y_6286_);
lean_dec(v___y_6285_);
return v_res_6294_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___redArg(lean_object* v_f_6295_, lean_object* v_v_6296_, lean_object* v___y_6297_, lean_object* v___y_6298_, lean_object* v___y_6299_, lean_object* v___y_6300_, lean_object* v___y_6301_){
_start:
{
if (lean_obj_tag(v_v_6296_) == 0)
{
lean_object* v_code_6303_; lean_object* v___x_6305_; uint8_t v_isShared_6306_; uint8_t v_isSharedCheck_6327_; 
v_code_6303_ = lean_ctor_get(v_v_6296_, 0);
v_isSharedCheck_6327_ = !lean_is_exclusive(v_v_6296_);
if (v_isSharedCheck_6327_ == 0)
{
v___x_6305_ = v_v_6296_;
v_isShared_6306_ = v_isSharedCheck_6327_;
goto v_resetjp_6304_;
}
else
{
lean_inc(v_code_6303_);
lean_dec(v_v_6296_);
v___x_6305_ = lean_box(0);
v_isShared_6306_ = v_isSharedCheck_6327_;
goto v_resetjp_6304_;
}
v_resetjp_6304_:
{
lean_object* v___x_6307_; 
lean_inc(v___y_6301_);
lean_inc_ref(v___y_6300_);
lean_inc(v___y_6299_);
lean_inc_ref(v___y_6298_);
lean_inc(v___y_6297_);
v___x_6307_ = lean_apply_7(v_f_6295_, v_code_6303_, v___y_6297_, v___y_6298_, v___y_6299_, v___y_6300_, v___y_6301_, lean_box(0));
if (lean_obj_tag(v___x_6307_) == 0)
{
lean_object* v_a_6308_; lean_object* v___x_6310_; uint8_t v_isShared_6311_; uint8_t v_isSharedCheck_6318_; 
v_a_6308_ = lean_ctor_get(v___x_6307_, 0);
v_isSharedCheck_6318_ = !lean_is_exclusive(v___x_6307_);
if (v_isSharedCheck_6318_ == 0)
{
v___x_6310_ = v___x_6307_;
v_isShared_6311_ = v_isSharedCheck_6318_;
goto v_resetjp_6309_;
}
else
{
lean_inc(v_a_6308_);
lean_dec(v___x_6307_);
v___x_6310_ = lean_box(0);
v_isShared_6311_ = v_isSharedCheck_6318_;
goto v_resetjp_6309_;
}
v_resetjp_6309_:
{
lean_object* v___x_6313_; 
if (v_isShared_6306_ == 0)
{
lean_ctor_set(v___x_6305_, 0, v_a_6308_);
v___x_6313_ = v___x_6305_;
goto v_reusejp_6312_;
}
else
{
lean_object* v_reuseFailAlloc_6317_; 
v_reuseFailAlloc_6317_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6317_, 0, v_a_6308_);
v___x_6313_ = v_reuseFailAlloc_6317_;
goto v_reusejp_6312_;
}
v_reusejp_6312_:
{
lean_object* v___x_6315_; 
if (v_isShared_6311_ == 0)
{
lean_ctor_set(v___x_6310_, 0, v___x_6313_);
v___x_6315_ = v___x_6310_;
goto v_reusejp_6314_;
}
else
{
lean_object* v_reuseFailAlloc_6316_; 
v_reuseFailAlloc_6316_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6316_, 0, v___x_6313_);
v___x_6315_ = v_reuseFailAlloc_6316_;
goto v_reusejp_6314_;
}
v_reusejp_6314_:
{
return v___x_6315_;
}
}
}
}
else
{
lean_object* v_a_6319_; lean_object* v___x_6321_; uint8_t v_isShared_6322_; uint8_t v_isSharedCheck_6326_; 
lean_del_object(v___x_6305_);
v_a_6319_ = lean_ctor_get(v___x_6307_, 0);
v_isSharedCheck_6326_ = !lean_is_exclusive(v___x_6307_);
if (v_isSharedCheck_6326_ == 0)
{
v___x_6321_ = v___x_6307_;
v_isShared_6322_ = v_isSharedCheck_6326_;
goto v_resetjp_6320_;
}
else
{
lean_inc(v_a_6319_);
lean_dec(v___x_6307_);
v___x_6321_ = lean_box(0);
v_isShared_6322_ = v_isSharedCheck_6326_;
goto v_resetjp_6320_;
}
v_resetjp_6320_:
{
lean_object* v___x_6324_; 
if (v_isShared_6322_ == 0)
{
v___x_6324_ = v___x_6321_;
goto v_reusejp_6323_;
}
else
{
lean_object* v_reuseFailAlloc_6325_; 
v_reuseFailAlloc_6325_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6325_, 0, v_a_6319_);
v___x_6324_ = v_reuseFailAlloc_6325_;
goto v_reusejp_6323_;
}
v_reusejp_6323_:
{
return v___x_6324_;
}
}
}
}
}
else
{
lean_object* v___x_6328_; 
lean_dec_ref(v_f_6295_);
v___x_6328_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6328_, 0, v_v_6296_);
return v___x_6328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___redArg___boxed(lean_object* v_f_6329_, lean_object* v_v_6330_, lean_object* v___y_6331_, lean_object* v___y_6332_, lean_object* v___y_6333_, lean_object* v___y_6334_, lean_object* v___y_6335_, lean_object* v___y_6336_){
_start:
{
lean_object* v_res_6337_; 
v_res_6337_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___redArg(v_f_6329_, v_v_6330_, v___y_6331_, v___y_6332_, v___y_6333_, v___y_6334_, v___y_6335_);
lean_dec(v___y_6335_);
lean_dec_ref(v___y_6334_);
lean_dec(v___y_6333_);
lean_dec_ref(v___y_6332_);
lean_dec(v___y_6331_);
return v_res_6337_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1(uint8_t v_pu_6338_, lean_object* v_f_6339_, lean_object* v_v_6340_, lean_object* v___y_6341_, lean_object* v___y_6342_, lean_object* v___y_6343_, lean_object* v___y_6344_, lean_object* v___y_6345_){
_start:
{
lean_object* v___x_6347_; 
v___x_6347_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___redArg(v_f_6339_, v_v_6340_, v___y_6341_, v___y_6342_, v___y_6343_, v___y_6344_, v___y_6345_);
return v___x_6347_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___boxed(lean_object* v_pu_6348_, lean_object* v_f_6349_, lean_object* v_v_6350_, lean_object* v___y_6351_, lean_object* v___y_6352_, lean_object* v___y_6353_, lean_object* v___y_6354_, lean_object* v___y_6355_, lean_object* v___y_6356_){
_start:
{
uint8_t v_pu_boxed_6357_; lean_object* v_res_6358_; 
v_pu_boxed_6357_ = lean_unbox(v_pu_6348_);
v_res_6358_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1(v_pu_boxed_6357_, v_f_6349_, v_v_6350_, v___y_6351_, v___y_6352_, v___y_6353_, v___y_6354_, v___y_6355_);
lean_dec(v___y_6355_);
lean_dec_ref(v___y_6354_);
lean_dec(v___y_6353_);
lean_dec_ref(v___y_6352_);
lean_dec(v___y_6351_);
return v_res_6358_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce(lean_object* v_decl_6361_, lean_object* v___y_6362_, lean_object* v___y_6363_, lean_object* v___y_6364_, lean_object* v___y_6365_){
_start:
{
lean_object* v_toSignature_6367_; lean_object* v_value_6368_; uint8_t v_recursive_6369_; lean_object* v_inlineAttr_x3f_6370_; lean_object* v___x_6372_; uint8_t v_isShared_6373_; uint8_t v_isSharedCheck_6410_; 
v_toSignature_6367_ = lean_ctor_get(v_decl_6361_, 0);
v_value_6368_ = lean_ctor_get(v_decl_6361_, 1);
v_recursive_6369_ = lean_ctor_get_uint8(v_decl_6361_, sizeof(void*)*3);
v_inlineAttr_x3f_6370_ = lean_ctor_get(v_decl_6361_, 2);
v_isSharedCheck_6410_ = !lean_is_exclusive(v_decl_6361_);
if (v_isSharedCheck_6410_ == 0)
{
v___x_6372_ = v_decl_6361_;
v_isShared_6373_ = v_isSharedCheck_6410_;
goto v_resetjp_6371_;
}
else
{
lean_inc(v_inlineAttr_x3f_6370_);
lean_inc(v_value_6368_);
lean_inc(v_toSignature_6367_);
lean_dec(v_decl_6361_);
v___x_6372_ = lean_box(0);
v_isShared_6373_ = v_isSharedCheck_6410_;
goto v_resetjp_6371_;
}
v_resetjp_6371_:
{
lean_object* v___x_6374_; lean_object* v___x_6375_; lean_object* v___x_6376_; lean_object* v___x_6377_; lean_object* v___x_6378_; 
v___x_6374_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__0));
v___x_6375_ = lean_box(1);
v___x_6376_ = lean_st_mk_ref(v___x_6375_);
v___x_6377_ = lean_st_mk_ref(v___x_6375_);
lean_inc_ref(v_value_6368_);
v___x_6378_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__0___redArg(v___x_6374_, v_value_6368_, v___x_6375_, v___x_6377_, v___x_6376_, v___y_6362_, v___y_6363_, v___y_6364_, v___y_6365_);
if (lean_obj_tag(v___x_6378_) == 0)
{
lean_object* v___x_6379_; lean_object* v___x_6380_; lean_object* v___x_6381_; lean_object* v___x_6382_; 
lean_dec_ref_known(v___x_6378_, 1);
v___x_6379_ = lean_st_ref_get(v___x_6377_);
lean_dec(v___x_6377_);
v___x_6380_ = lean_st_ref_get(v___x_6376_);
lean_dec(v___x_6376_);
lean_dec(v___x_6380_);
v___x_6381_ = ((lean_object*)(l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___closed__1));
v___x_6382_ = l_Lean_Compiler_LCNF_DeclValue_mapCodeM___at___00Lean_Compiler_LCNF_JoinPointCommonArgs_reduce_spec__1___redArg(v___x_6381_, v_value_6368_, v___x_6379_, v___y_6362_, v___y_6363_, v___y_6364_, v___y_6365_);
lean_dec(v___x_6379_);
if (lean_obj_tag(v___x_6382_) == 0)
{
lean_object* v_a_6383_; lean_object* v___x_6385_; uint8_t v_isShared_6386_; uint8_t v_isSharedCheck_6393_; 
v_a_6383_ = lean_ctor_get(v___x_6382_, 0);
v_isSharedCheck_6393_ = !lean_is_exclusive(v___x_6382_);
if (v_isSharedCheck_6393_ == 0)
{
v___x_6385_ = v___x_6382_;
v_isShared_6386_ = v_isSharedCheck_6393_;
goto v_resetjp_6384_;
}
else
{
lean_inc(v_a_6383_);
lean_dec(v___x_6382_);
v___x_6385_ = lean_box(0);
v_isShared_6386_ = v_isSharedCheck_6393_;
goto v_resetjp_6384_;
}
v_resetjp_6384_:
{
lean_object* v___x_6388_; 
if (v_isShared_6373_ == 0)
{
lean_ctor_set(v___x_6372_, 1, v_a_6383_);
v___x_6388_ = v___x_6372_;
goto v_reusejp_6387_;
}
else
{
lean_object* v_reuseFailAlloc_6392_; 
v_reuseFailAlloc_6392_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v_reuseFailAlloc_6392_, 0, v_toSignature_6367_);
lean_ctor_set(v_reuseFailAlloc_6392_, 1, v_a_6383_);
lean_ctor_set(v_reuseFailAlloc_6392_, 2, v_inlineAttr_x3f_6370_);
lean_ctor_set_uint8(v_reuseFailAlloc_6392_, sizeof(void*)*3, v_recursive_6369_);
v___x_6388_ = v_reuseFailAlloc_6392_;
goto v_reusejp_6387_;
}
v_reusejp_6387_:
{
lean_object* v___x_6390_; 
if (v_isShared_6386_ == 0)
{
lean_ctor_set(v___x_6385_, 0, v___x_6388_);
v___x_6390_ = v___x_6385_;
goto v_reusejp_6389_;
}
else
{
lean_object* v_reuseFailAlloc_6391_; 
v_reuseFailAlloc_6391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6391_, 0, v___x_6388_);
v___x_6390_ = v_reuseFailAlloc_6391_;
goto v_reusejp_6389_;
}
v_reusejp_6389_:
{
return v___x_6390_;
}
}
}
}
else
{
lean_object* v_a_6394_; lean_object* v___x_6396_; uint8_t v_isShared_6397_; uint8_t v_isSharedCheck_6401_; 
lean_del_object(v___x_6372_);
lean_dec(v_inlineAttr_x3f_6370_);
lean_dec_ref(v_toSignature_6367_);
v_a_6394_ = lean_ctor_get(v___x_6382_, 0);
v_isSharedCheck_6401_ = !lean_is_exclusive(v___x_6382_);
if (v_isSharedCheck_6401_ == 0)
{
v___x_6396_ = v___x_6382_;
v_isShared_6397_ = v_isSharedCheck_6401_;
goto v_resetjp_6395_;
}
else
{
lean_inc(v_a_6394_);
lean_dec(v___x_6382_);
v___x_6396_ = lean_box(0);
v_isShared_6397_ = v_isSharedCheck_6401_;
goto v_resetjp_6395_;
}
v_resetjp_6395_:
{
lean_object* v___x_6399_; 
if (v_isShared_6397_ == 0)
{
v___x_6399_ = v___x_6396_;
goto v_reusejp_6398_;
}
else
{
lean_object* v_reuseFailAlloc_6400_; 
v_reuseFailAlloc_6400_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6400_, 0, v_a_6394_);
v___x_6399_ = v_reuseFailAlloc_6400_;
goto v_reusejp_6398_;
}
v_reusejp_6398_:
{
return v___x_6399_;
}
}
}
}
else
{
lean_object* v_a_6402_; lean_object* v___x_6404_; uint8_t v_isShared_6405_; uint8_t v_isSharedCheck_6409_; 
lean_dec(v___x_6377_);
lean_dec(v___x_6376_);
lean_del_object(v___x_6372_);
lean_dec(v_inlineAttr_x3f_6370_);
lean_dec_ref(v_value_6368_);
lean_dec_ref(v_toSignature_6367_);
v_a_6402_ = lean_ctor_get(v___x_6378_, 0);
v_isSharedCheck_6409_ = !lean_is_exclusive(v___x_6378_);
if (v_isSharedCheck_6409_ == 0)
{
v___x_6404_ = v___x_6378_;
v_isShared_6405_ = v_isSharedCheck_6409_;
goto v_resetjp_6403_;
}
else
{
lean_inc(v_a_6402_);
lean_dec(v___x_6378_);
v___x_6404_ = lean_box(0);
v_isShared_6405_ = v_isSharedCheck_6409_;
goto v_resetjp_6403_;
}
v_resetjp_6403_:
{
lean_object* v___x_6407_; 
if (v_isShared_6405_ == 0)
{
v___x_6407_ = v___x_6404_;
goto v_reusejp_6406_;
}
else
{
lean_object* v_reuseFailAlloc_6408_; 
v_reuseFailAlloc_6408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6408_, 0, v_a_6402_);
v___x_6407_ = v_reuseFailAlloc_6408_;
goto v_reusejp_6406_;
}
v_reusejp_6406_:
{
return v___x_6407_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce___boxed(lean_object* v_decl_6411_, lean_object* v___y_6412_, lean_object* v___y_6413_, lean_object* v___y_6414_, lean_object* v___y_6415_, lean_object* v___y_6416_){
_start:
{
lean_object* v_res_6417_; 
v_res_6417_ = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce(v_decl_6411_, v___y_6412_, v___y_6413_, v___y_6414_, v___y_6415_);
lean_dec(v___y_6415_);
lean_dec_ref(v___y_6414_);
lean_dec(v___y_6413_);
lean_dec_ref(v___y_6412_);
return v_res_6417_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__0(void){
_start:
{
lean_object* v___x_6418_; 
v___x_6418_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_6418_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__1(void){
_start:
{
lean_object* v___x_6419_; lean_object* v___x_6420_; 
v___x_6419_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__0);
v___x_6420_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_6420_, 0, v___x_6419_);
return v___x_6420_;
}
}
static lean_object* _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__2(void){
_start:
{
lean_object* v___x_6421_; lean_object* v___x_6422_; lean_object* v___x_6423_; 
v___x_6421_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__1, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__1_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__1);
v___x_6422_ = lean_unsigned_to_nat(0u);
v___x_6423_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_6423_, 0, v___x_6422_);
lean_ctor_set(v___x_6423_, 1, v___x_6422_);
lean_ctor_set(v___x_6423_, 2, v___x_6422_);
lean_ctor_set(v___x_6423_, 3, v___x_6422_);
lean_ctor_set(v___x_6423_, 4, v___x_6421_);
lean_ctor_set(v___x_6423_, 5, v___x_6421_);
lean_ctor_set(v___x_6423_, 6, v___x_6421_);
lean_ctor_set(v___x_6423_, 7, v___x_6421_);
lean_ctor_set(v___x_6423_, 8, v___x_6421_);
lean_ctor_set(v___x_6423_, 9, v___x_6421_);
lean_ctor_set(v___x_6423_, 10, v___x_6421_);
return v___x_6423_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__3(void){
_start:
{
lean_object* v___x_6424_; double v___x_6425_; 
v___x_6424_ = lean_unsigned_to_nat(0u);
v___x_6425_ = lean_float_of_nat(v___x_6424_);
return v___x_6425_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0(lean_object* v_cls_6429_, lean_object* v_msg_6430_, lean_object* v___y_6431_, lean_object* v___y_6432_, lean_object* v___y_6433_, lean_object* v___y_6434_){
_start:
{
lean_object* v_toCold_6436_; lean_object* v_ref_6437_; lean_object* v___x_6438_; lean_object* v_env_6439_; lean_object* v___x_6440_; lean_object* v___x_6441_; 
v_toCold_6436_ = lean_ctor_get(v___y_6433_, 0);
v_ref_6437_ = lean_ctor_get(v___y_6433_, 2);
v___x_6438_ = lean_st_ref_get(v___y_6434_);
v_env_6439_ = lean_ctor_get(v___x_6438_, 0);
lean_inc_ref(v_env_6439_);
lean_dec(v___x_6438_);
v___x_6440_ = lean_st_ref_get(v___y_6432_);
v___x_6441_ = l_Lean_Compiler_LCNF_getPurity___redArg(v___y_6431_);
if (lean_obj_tag(v___x_6441_) == 0)
{
lean_object* v_a_6442_; lean_object* v___x_6444_; uint8_t v_isShared_6445_; uint8_t v_isSharedCheck_6500_; 
v_a_6442_ = lean_ctor_get(v___x_6441_, 0);
v_isSharedCheck_6500_ = !lean_is_exclusive(v___x_6441_);
if (v_isSharedCheck_6500_ == 0)
{
v___x_6444_ = v___x_6441_;
v_isShared_6445_ = v_isSharedCheck_6500_;
goto v_resetjp_6443_;
}
else
{
lean_inc(v_a_6442_);
lean_dec(v___x_6441_);
v___x_6444_ = lean_box(0);
v_isShared_6445_ = v_isSharedCheck_6500_;
goto v_resetjp_6443_;
}
v_resetjp_6443_:
{
lean_object* v_lctx_6446_; lean_object* v___x_6448_; uint8_t v_isShared_6449_; uint8_t v_isSharedCheck_6498_; 
v_lctx_6446_ = lean_ctor_get(v___x_6440_, 0);
v_isSharedCheck_6498_ = !lean_is_exclusive(v___x_6440_);
if (v_isSharedCheck_6498_ == 0)
{
lean_object* v_unused_6499_; 
v_unused_6499_ = lean_ctor_get(v___x_6440_, 1);
lean_dec(v_unused_6499_);
v___x_6448_ = v___x_6440_;
v_isShared_6449_ = v_isSharedCheck_6498_;
goto v_resetjp_6447_;
}
else
{
lean_inc(v_lctx_6446_);
lean_dec(v___x_6440_);
v___x_6448_ = lean_box(0);
v_isShared_6449_ = v_isSharedCheck_6498_;
goto v_resetjp_6447_;
}
v_resetjp_6447_:
{
lean_object* v_options_6450_; uint8_t v___x_6451_; lean_object* v___x_6452_; lean_object* v___x_6453_; lean_object* v___x_6454_; lean_object* v___x_6456_; 
v_options_6450_ = lean_ctor_get(v_toCold_6436_, 2);
v___x_6451_ = lean_unbox(v_a_6442_);
lean_dec(v_a_6442_);
v___x_6452_ = l_Lean_Compiler_LCNF_LCtx_toLocalContext(v_lctx_6446_, v___x_6451_);
lean_dec_ref(v_lctx_6446_);
v___x_6453_ = lean_obj_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__2, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__2_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__2);
lean_inc_ref(v_options_6450_);
v___x_6454_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_6454_, 0, v_env_6439_);
lean_ctor_set(v___x_6454_, 1, v___x_6453_);
lean_ctor_set(v___x_6454_, 2, v___x_6452_);
lean_ctor_set(v___x_6454_, 3, v_options_6450_);
if (v_isShared_6449_ == 0)
{
lean_ctor_set_tag(v___x_6448_, 3);
lean_ctor_set(v___x_6448_, 1, v_msg_6430_);
lean_ctor_set(v___x_6448_, 0, v___x_6454_);
v___x_6456_ = v___x_6448_;
goto v_reusejp_6455_;
}
else
{
lean_object* v_reuseFailAlloc_6497_; 
v_reuseFailAlloc_6497_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_reuseFailAlloc_6497_, 0, v___x_6454_);
lean_ctor_set(v_reuseFailAlloc_6497_, 1, v_msg_6430_);
v___x_6456_ = v_reuseFailAlloc_6497_;
goto v_reusejp_6455_;
}
v_reusejp_6455_:
{
lean_object* v___x_6457_; lean_object* v_traceState_6458_; lean_object* v_env_6459_; lean_object* v_nextMacroScope_6460_; lean_object* v_ngen_6461_; lean_object* v_auxDeclNGen_6462_; lean_object* v_cache_6463_; lean_object* v_messages_6464_; lean_object* v_infoState_6465_; lean_object* v_snapshotTasks_6466_; lean_object* v___x_6468_; uint8_t v_isShared_6469_; uint8_t v_isSharedCheck_6496_; 
v___x_6457_ = lean_st_ref_take(v___y_6434_);
v_traceState_6458_ = lean_ctor_get(v___x_6457_, 4);
v_env_6459_ = lean_ctor_get(v___x_6457_, 0);
v_nextMacroScope_6460_ = lean_ctor_get(v___x_6457_, 1);
v_ngen_6461_ = lean_ctor_get(v___x_6457_, 2);
v_auxDeclNGen_6462_ = lean_ctor_get(v___x_6457_, 3);
v_cache_6463_ = lean_ctor_get(v___x_6457_, 5);
v_messages_6464_ = lean_ctor_get(v___x_6457_, 6);
v_infoState_6465_ = lean_ctor_get(v___x_6457_, 7);
v_snapshotTasks_6466_ = lean_ctor_get(v___x_6457_, 8);
v_isSharedCheck_6496_ = !lean_is_exclusive(v___x_6457_);
if (v_isSharedCheck_6496_ == 0)
{
v___x_6468_ = v___x_6457_;
v_isShared_6469_ = v_isSharedCheck_6496_;
goto v_resetjp_6467_;
}
else
{
lean_inc(v_snapshotTasks_6466_);
lean_inc(v_infoState_6465_);
lean_inc(v_messages_6464_);
lean_inc(v_cache_6463_);
lean_inc(v_traceState_6458_);
lean_inc(v_auxDeclNGen_6462_);
lean_inc(v_ngen_6461_);
lean_inc(v_nextMacroScope_6460_);
lean_inc(v_env_6459_);
lean_dec(v___x_6457_);
v___x_6468_ = lean_box(0);
v_isShared_6469_ = v_isSharedCheck_6496_;
goto v_resetjp_6467_;
}
v_resetjp_6467_:
{
uint64_t v_tid_6470_; lean_object* v_traces_6471_; lean_object* v___x_6473_; uint8_t v_isShared_6474_; uint8_t v_isSharedCheck_6495_; 
v_tid_6470_ = lean_ctor_get_uint64(v_traceState_6458_, sizeof(void*)*1);
v_traces_6471_ = lean_ctor_get(v_traceState_6458_, 0);
v_isSharedCheck_6495_ = !lean_is_exclusive(v_traceState_6458_);
if (v_isSharedCheck_6495_ == 0)
{
v___x_6473_ = v_traceState_6458_;
v_isShared_6474_ = v_isSharedCheck_6495_;
goto v_resetjp_6472_;
}
else
{
lean_inc(v_traces_6471_);
lean_dec(v_traceState_6458_);
v___x_6473_ = lean_box(0);
v_isShared_6474_ = v_isSharedCheck_6495_;
goto v_resetjp_6472_;
}
v_resetjp_6472_:
{
lean_object* v___x_6475_; lean_object* v___x_6476_; double v___x_6477_; uint8_t v___x_6478_; lean_object* v___x_6479_; lean_object* v___x_6480_; lean_object* v___x_6481_; lean_object* v___x_6482_; lean_object* v___x_6483_; lean_object* v___x_6484_; lean_object* v___x_6486_; 
v___x_6475_ = lean_box(0);
v___x_6476_ = lean_box(0);
v___x_6477_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__3, &l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__3_once, _init_l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__3);
v___x_6478_ = 0;
v___x_6479_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__4));
v___x_6480_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_6480_, 0, v_cls_6429_);
lean_ctor_set(v___x_6480_, 1, v___x_6476_);
lean_ctor_set(v___x_6480_, 2, v___x_6479_);
lean_ctor_set_float(v___x_6480_, sizeof(void*)*3, v___x_6477_);
lean_ctor_set_float(v___x_6480_, sizeof(void*)*3 + 8, v___x_6477_);
lean_ctor_set_uint8(v___x_6480_, sizeof(void*)*3 + 16, v___x_6478_);
v___x_6481_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___closed__5));
v___x_6482_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_6482_, 0, v___x_6480_);
lean_ctor_set(v___x_6482_, 1, v___x_6456_);
lean_ctor_set(v___x_6482_, 2, v___x_6481_);
lean_inc(v_ref_6437_);
v___x_6483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6483_, 0, v_ref_6437_);
lean_ctor_set(v___x_6483_, 1, v___x_6482_);
v___x_6484_ = l_Lean_PersistentArray_push___redArg(v_traces_6471_, v___x_6483_);
if (v_isShared_6474_ == 0)
{
lean_ctor_set(v___x_6473_, 0, v___x_6484_);
v___x_6486_ = v___x_6473_;
goto v_reusejp_6485_;
}
else
{
lean_object* v_reuseFailAlloc_6494_; 
v_reuseFailAlloc_6494_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_6494_, 0, v___x_6484_);
lean_ctor_set_uint64(v_reuseFailAlloc_6494_, sizeof(void*)*1, v_tid_6470_);
v___x_6486_ = v_reuseFailAlloc_6494_;
goto v_reusejp_6485_;
}
v_reusejp_6485_:
{
lean_object* v___x_6488_; 
if (v_isShared_6469_ == 0)
{
lean_ctor_set(v___x_6468_, 4, v___x_6486_);
v___x_6488_ = v___x_6468_;
goto v_reusejp_6487_;
}
else
{
lean_object* v_reuseFailAlloc_6493_; 
v_reuseFailAlloc_6493_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_6493_, 0, v_env_6459_);
lean_ctor_set(v_reuseFailAlloc_6493_, 1, v_nextMacroScope_6460_);
lean_ctor_set(v_reuseFailAlloc_6493_, 2, v_ngen_6461_);
lean_ctor_set(v_reuseFailAlloc_6493_, 3, v_auxDeclNGen_6462_);
lean_ctor_set(v_reuseFailAlloc_6493_, 4, v___x_6486_);
lean_ctor_set(v_reuseFailAlloc_6493_, 5, v_cache_6463_);
lean_ctor_set(v_reuseFailAlloc_6493_, 6, v_messages_6464_);
lean_ctor_set(v_reuseFailAlloc_6493_, 7, v_infoState_6465_);
lean_ctor_set(v_reuseFailAlloc_6493_, 8, v_snapshotTasks_6466_);
v___x_6488_ = v_reuseFailAlloc_6493_;
goto v_reusejp_6487_;
}
v_reusejp_6487_:
{
lean_object* v___x_6489_; lean_object* v___x_6491_; 
v___x_6489_ = lean_st_ref_put(v___y_6434_, v___x_6488_);
if (v_isShared_6445_ == 0)
{
lean_ctor_set(v___x_6444_, 0, v___x_6475_);
v___x_6491_ = v___x_6444_;
goto v_reusejp_6490_;
}
else
{
lean_object* v_reuseFailAlloc_6492_; 
v_reuseFailAlloc_6492_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6492_, 0, v___x_6475_);
v___x_6491_ = v_reuseFailAlloc_6492_;
goto v_reusejp_6490_;
}
v_reusejp_6490_:
{
return v___x_6491_;
}
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
lean_object* v_a_6501_; lean_object* v___x_6503_; uint8_t v_isShared_6504_; uint8_t v_isSharedCheck_6508_; 
lean_dec(v___x_6440_);
lean_dec_ref(v_env_6439_);
lean_dec_ref(v_msg_6430_);
lean_dec(v_cls_6429_);
v_a_6501_ = lean_ctor_get(v___x_6441_, 0);
v_isSharedCheck_6508_ = !lean_is_exclusive(v___x_6441_);
if (v_isSharedCheck_6508_ == 0)
{
v___x_6503_ = v___x_6441_;
v_isShared_6504_ = v_isSharedCheck_6508_;
goto v_resetjp_6502_;
}
else
{
lean_inc(v_a_6501_);
lean_dec(v___x_6441_);
v___x_6503_ = lean_box(0);
v_isShared_6504_ = v_isSharedCheck_6508_;
goto v_resetjp_6502_;
}
v_resetjp_6502_:
{
lean_object* v___x_6506_; 
if (v_isShared_6504_ == 0)
{
v___x_6506_ = v___x_6503_;
goto v_reusejp_6505_;
}
else
{
lean_object* v_reuseFailAlloc_6507_; 
v_reuseFailAlloc_6507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6507_, 0, v_a_6501_);
v___x_6506_ = v_reuseFailAlloc_6507_;
goto v_reusejp_6505_;
}
v_reusejp_6505_:
{
return v___x_6506_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0___boxed(lean_object* v_cls_6509_, lean_object* v_msg_6510_, lean_object* v___y_6511_, lean_object* v___y_6512_, lean_object* v___y_6513_, lean_object* v___y_6514_, lean_object* v___y_6515_){
_start:
{
lean_object* v_res_6516_; 
v_res_6516_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0(v_cls_6509_, v_msg_6510_, v___y_6511_, v___y_6512_, v___y_6513_, v___y_6514_);
lean_dec(v___y_6514_);
lean_dec_ref(v___y_6513_);
lean_dec(v___y_6512_);
lean_dec_ref(v___y_6511_);
return v_res_6516_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__5(void){
_start:
{
lean_object* v___x_6525_; lean_object* v___x_6526_; lean_object* v___x_6527_; 
v___x_6525_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2));
v___x_6526_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__4));
v___x_6527_ = l_Lean_Name_append(v___x_6526_, v___x_6525_);
return v___x_6527_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__7(void){
_start:
{
lean_object* v___x_6529_; lean_object* v___x_6530_; 
v___x_6529_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__6));
v___x_6530_ = l_Lean_stringToMessageData(v___x_6529_);
return v___x_6530_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__9(void){
_start:
{
lean_object* v___x_6532_; lean_object* v___x_6533_; 
v___x_6532_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__8));
v___x_6533_ = l_Lean_stringToMessageData(v___x_6532_);
return v___x_6533_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f(lean_object* v_decl_6534_, lean_object* v___y_6535_, lean_object* v___y_6536_, lean_object* v___y_6537_, lean_object* v___y_6538_){
_start:
{
lean_object* v___x_6540_; 
lean_inc_ref(v_decl_6534_);
v___x_6540_ = l_Lean_Compiler_LCNF_JoinPointFinder_find(v_decl_6534_, v___y_6535_, v___y_6536_, v___y_6537_, v___y_6538_);
if (lean_obj_tag(v___x_6540_) == 0)
{
lean_object* v_a_6541_; lean_object* v___x_6543_; uint8_t v_isShared_6544_; uint8_t v_isSharedCheck_6603_; 
v_a_6541_ = lean_ctor_get(v___x_6540_, 0);
v_isSharedCheck_6603_ = !lean_is_exclusive(v___x_6540_);
if (v_isSharedCheck_6603_ == 0)
{
v___x_6543_ = v___x_6540_;
v_isShared_6544_ = v_isSharedCheck_6603_;
goto v_resetjp_6542_;
}
else
{
lean_inc(v_a_6541_);
lean_dec(v___x_6540_);
v___x_6543_ = lean_box(0);
v_isShared_6544_ = v_isSharedCheck_6603_;
goto v_resetjp_6542_;
}
v_resetjp_6542_:
{
lean_object* v___y_6546_; lean_object* v___y_6547_; lean_object* v___y_6548_; lean_object* v___y_6549_; lean_object* v_toCold_6575_; lean_object* v_options_6576_; uint8_t v_hasTrace_6577_; 
v_toCold_6575_ = lean_ctor_get(v___y_6537_, 0);
v_options_6576_ = lean_ctor_get(v_toCold_6575_, 2);
v_hasTrace_6577_ = lean_ctor_get_uint8(v_options_6576_, sizeof(void*)*1);
if (v_hasTrace_6577_ == 0)
{
v___y_6546_ = v___y_6535_;
v___y_6547_ = v___y_6536_;
v___y_6548_ = v___y_6537_;
v___y_6549_ = v___y_6538_;
goto v___jp_6545_;
}
else
{
lean_object* v_inheritedTraceOptions_6578_; lean_object* v___x_6579_; lean_object* v___x_6580_; uint8_t v___x_6581_; 
v_inheritedTraceOptions_6578_ = lean_ctor_get(v_toCold_6575_, 11);
v___x_6579_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2));
v___x_6580_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__5, &l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__5_once, _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__5);
v___x_6581_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_6578_, v_options_6576_, v___x_6580_);
if (v___x_6581_ == 0)
{
v___y_6546_ = v___y_6535_;
v___y_6547_ = v___y_6536_;
v___y_6548_ = v___y_6537_;
v___y_6549_ = v___y_6538_;
goto v___jp_6545_;
}
else
{
lean_object* v_toSignature_6582_; lean_object* v_size_6583_; lean_object* v_name_6584_; lean_object* v___x_6585_; lean_object* v___x_6586_; lean_object* v___x_6587_; lean_object* v___x_6588_; lean_object* v___x_6589_; lean_object* v___x_6590_; lean_object* v___x_6591_; lean_object* v___x_6592_; lean_object* v___x_6593_; lean_object* v___x_6594_; 
v_toSignature_6582_ = lean_ctor_get(v_decl_6534_, 0);
v_size_6583_ = lean_ctor_get(v_a_6541_, 0);
v_name_6584_ = lean_ctor_get(v_toSignature_6582_, 0);
v___x_6585_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__7, &l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__7_once, _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__7);
lean_inc(v_size_6583_);
v___x_6586_ = l_Nat_reprFast(v_size_6583_);
v___x_6587_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_6587_, 0, v___x_6586_);
v___x_6588_ = l_Lean_MessageData_ofFormat(v___x_6587_);
v___x_6589_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6589_, 0, v___x_6585_);
lean_ctor_set(v___x_6589_, 1, v___x_6588_);
v___x_6590_ = lean_obj_once(&l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__9, &l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__9_once, _init_l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__9);
v___x_6591_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6591_, 0, v___x_6589_);
lean_ctor_set(v___x_6591_, 1, v___x_6590_);
lean_inc(v_name_6584_);
v___x_6592_ = l_Lean_MessageData_ofName(v_name_6584_);
v___x_6593_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_6593_, 0, v___x_6591_);
lean_ctor_set(v___x_6593_, 1, v___x_6592_);
v___x_6594_ = l_Lean_addTrace___at___00Lean_Compiler_LCNF_Decl_findJoinPoints_x3f_spec__0(v___x_6579_, v___x_6593_, v___y_6535_, v___y_6536_, v___y_6537_, v___y_6538_);
if (lean_obj_tag(v___x_6594_) == 0)
{
lean_dec_ref_known(v___x_6594_, 1);
v___y_6546_ = v___y_6535_;
v___y_6547_ = v___y_6536_;
v___y_6548_ = v___y_6537_;
v___y_6549_ = v___y_6538_;
goto v___jp_6545_;
}
else
{
lean_object* v_a_6595_; lean_object* v___x_6597_; uint8_t v_isShared_6598_; uint8_t v_isSharedCheck_6602_; 
lean_del_object(v___x_6543_);
lean_dec(v_a_6541_);
lean_dec_ref(v_decl_6534_);
v_a_6595_ = lean_ctor_get(v___x_6594_, 0);
v_isSharedCheck_6602_ = !lean_is_exclusive(v___x_6594_);
if (v_isSharedCheck_6602_ == 0)
{
v___x_6597_ = v___x_6594_;
v_isShared_6598_ = v_isSharedCheck_6602_;
goto v_resetjp_6596_;
}
else
{
lean_inc(v_a_6595_);
lean_dec(v___x_6594_);
v___x_6597_ = lean_box(0);
v_isShared_6598_ = v_isSharedCheck_6602_;
goto v_resetjp_6596_;
}
v_resetjp_6596_:
{
lean_object* v___x_6600_; 
if (v_isShared_6598_ == 0)
{
v___x_6600_ = v___x_6597_;
goto v_reusejp_6599_;
}
else
{
lean_object* v_reuseFailAlloc_6601_; 
v_reuseFailAlloc_6601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6601_, 0, v_a_6595_);
v___x_6600_ = v_reuseFailAlloc_6601_;
goto v_reusejp_6599_;
}
v_reusejp_6599_:
{
return v___x_6600_;
}
}
}
}
}
v___jp_6545_:
{
lean_object* v_size_6550_; lean_object* v___x_6551_; uint8_t v___x_6552_; 
v_size_6550_ = lean_ctor_get(v_a_6541_, 0);
v___x_6551_ = lean_unsigned_to_nat(0u);
v___x_6552_ = lean_nat_dec_eq(v_size_6550_, v___x_6551_);
if (v___x_6552_ == 0)
{
lean_object* v___x_6553_; 
lean_del_object(v___x_6543_);
v___x_6553_ = l_Lean_Compiler_LCNF_JoinPointFinder_replace(v_decl_6534_, v_a_6541_, v___y_6546_, v___y_6547_, v___y_6548_, v___y_6549_);
lean_dec(v_a_6541_);
if (lean_obj_tag(v___x_6553_) == 0)
{
lean_object* v_a_6554_; lean_object* v___x_6556_; uint8_t v_isShared_6557_; uint8_t v_isSharedCheck_6562_; 
v_a_6554_ = lean_ctor_get(v___x_6553_, 0);
v_isSharedCheck_6562_ = !lean_is_exclusive(v___x_6553_);
if (v_isSharedCheck_6562_ == 0)
{
v___x_6556_ = v___x_6553_;
v_isShared_6557_ = v_isSharedCheck_6562_;
goto v_resetjp_6555_;
}
else
{
lean_inc(v_a_6554_);
lean_dec(v___x_6553_);
v___x_6556_ = lean_box(0);
v_isShared_6557_ = v_isSharedCheck_6562_;
goto v_resetjp_6555_;
}
v_resetjp_6555_:
{
lean_object* v___x_6558_; lean_object* v___x_6560_; 
v___x_6558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6558_, 0, v_a_6554_);
if (v_isShared_6557_ == 0)
{
lean_ctor_set(v___x_6556_, 0, v___x_6558_);
v___x_6560_ = v___x_6556_;
goto v_reusejp_6559_;
}
else
{
lean_object* v_reuseFailAlloc_6561_; 
v_reuseFailAlloc_6561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6561_, 0, v___x_6558_);
v___x_6560_ = v_reuseFailAlloc_6561_;
goto v_reusejp_6559_;
}
v_reusejp_6559_:
{
return v___x_6560_;
}
}
}
else
{
lean_object* v_a_6563_; lean_object* v___x_6565_; uint8_t v_isShared_6566_; uint8_t v_isSharedCheck_6570_; 
v_a_6563_ = lean_ctor_get(v___x_6553_, 0);
v_isSharedCheck_6570_ = !lean_is_exclusive(v___x_6553_);
if (v_isSharedCheck_6570_ == 0)
{
v___x_6565_ = v___x_6553_;
v_isShared_6566_ = v_isSharedCheck_6570_;
goto v_resetjp_6564_;
}
else
{
lean_inc(v_a_6563_);
lean_dec(v___x_6553_);
v___x_6565_ = lean_box(0);
v_isShared_6566_ = v_isSharedCheck_6570_;
goto v_resetjp_6564_;
}
v_resetjp_6564_:
{
lean_object* v___x_6568_; 
if (v_isShared_6566_ == 0)
{
v___x_6568_ = v___x_6565_;
goto v_reusejp_6567_;
}
else
{
lean_object* v_reuseFailAlloc_6569_; 
v_reuseFailAlloc_6569_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6569_, 0, v_a_6563_);
v___x_6568_ = v_reuseFailAlloc_6569_;
goto v_reusejp_6567_;
}
v_reusejp_6567_:
{
return v___x_6568_;
}
}
}
}
else
{
lean_object* v___x_6571_; lean_object* v___x_6573_; 
lean_dec(v_a_6541_);
lean_dec_ref(v_decl_6534_);
v___x_6571_ = lean_box(0);
if (v_isShared_6544_ == 0)
{
lean_ctor_set(v___x_6543_, 0, v___x_6571_);
v___x_6573_ = v___x_6543_;
goto v_reusejp_6572_;
}
else
{
lean_object* v_reuseFailAlloc_6574_; 
v_reuseFailAlloc_6574_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6574_, 0, v___x_6571_);
v___x_6573_ = v_reuseFailAlloc_6574_;
goto v_reusejp_6572_;
}
v_reusejp_6572_:
{
return v___x_6573_;
}
}
}
}
}
else
{
lean_object* v_a_6604_; lean_object* v___x_6606_; uint8_t v_isShared_6607_; uint8_t v_isSharedCheck_6611_; 
lean_dec_ref(v_decl_6534_);
v_a_6604_ = lean_ctor_get(v___x_6540_, 0);
v_isSharedCheck_6611_ = !lean_is_exclusive(v___x_6540_);
if (v_isSharedCheck_6611_ == 0)
{
v___x_6606_ = v___x_6540_;
v_isShared_6607_ = v_isSharedCheck_6611_;
goto v_resetjp_6605_;
}
else
{
lean_inc(v_a_6604_);
lean_dec(v___x_6540_);
v___x_6606_ = lean_box(0);
v_isShared_6607_ = v_isSharedCheck_6611_;
goto v_resetjp_6605_;
}
v_resetjp_6605_:
{
lean_object* v___x_6609_; 
if (v_isShared_6607_ == 0)
{
v___x_6609_ = v___x_6606_;
goto v_reusejp_6608_;
}
else
{
lean_object* v_reuseFailAlloc_6610_; 
v_reuseFailAlloc_6610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6610_, 0, v_a_6604_);
v___x_6609_ = v_reuseFailAlloc_6610_;
goto v_reusejp_6608_;
}
v_reusejp_6608_:
{
return v___x_6609_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___boxed(lean_object* v_decl_6612_, lean_object* v___y_6613_, lean_object* v___y_6614_, lean_object* v___y_6615_, lean_object* v___y_6616_, lean_object* v___y_6617_){
_start:
{
lean_object* v_res_6618_; 
v_res_6618_ = l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f(v_decl_6612_, v___y_6613_, v___y_6614_, v___y_6615_, v___y_6616_);
lean_dec(v___y_6616_);
lean_dec_ref(v___y_6615_);
lean_dec(v___y_6614_);
lean_dec_ref(v___y_6613_);
return v_res_6618_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints(lean_object* v_decl_6619_, lean_object* v___y_6620_, lean_object* v___y_6621_, lean_object* v___y_6622_, lean_object* v___y_6623_){
_start:
{
lean_object* v___x_6625_; 
lean_inc_ref(v_decl_6619_);
v___x_6625_ = l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f(v_decl_6619_, v___y_6620_, v___y_6621_, v___y_6622_, v___y_6623_);
if (lean_obj_tag(v___x_6625_) == 0)
{
lean_object* v_a_6626_; lean_object* v___x_6628_; uint8_t v_isShared_6629_; uint8_t v_isSharedCheck_6637_; 
v_a_6626_ = lean_ctor_get(v___x_6625_, 0);
v_isSharedCheck_6637_ = !lean_is_exclusive(v___x_6625_);
if (v_isSharedCheck_6637_ == 0)
{
v___x_6628_ = v___x_6625_;
v_isShared_6629_ = v_isSharedCheck_6637_;
goto v_resetjp_6627_;
}
else
{
lean_inc(v_a_6626_);
lean_dec(v___x_6625_);
v___x_6628_ = lean_box(0);
v_isShared_6629_ = v_isSharedCheck_6637_;
goto v_resetjp_6627_;
}
v_resetjp_6627_:
{
if (lean_obj_tag(v_a_6626_) == 0)
{
lean_object* v___x_6631_; 
if (v_isShared_6629_ == 0)
{
lean_ctor_set(v___x_6628_, 0, v_decl_6619_);
v___x_6631_ = v___x_6628_;
goto v_reusejp_6630_;
}
else
{
lean_object* v_reuseFailAlloc_6632_; 
v_reuseFailAlloc_6632_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6632_, 0, v_decl_6619_);
v___x_6631_ = v_reuseFailAlloc_6632_;
goto v_reusejp_6630_;
}
v_reusejp_6630_:
{
return v___x_6631_;
}
}
else
{
lean_object* v_val_6633_; lean_object* v___x_6635_; 
lean_dec_ref(v_decl_6619_);
v_val_6633_ = lean_ctor_get(v_a_6626_, 0);
lean_inc(v_val_6633_);
lean_dec_ref_known(v_a_6626_, 1);
if (v_isShared_6629_ == 0)
{
lean_ctor_set(v___x_6628_, 0, v_val_6633_);
v___x_6635_ = v___x_6628_;
goto v_reusejp_6634_;
}
else
{
lean_object* v_reuseFailAlloc_6636_; 
v_reuseFailAlloc_6636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6636_, 0, v_val_6633_);
v___x_6635_ = v_reuseFailAlloc_6636_;
goto v_reusejp_6634_;
}
v_reusejp_6634_:
{
return v___x_6635_;
}
}
}
}
else
{
lean_object* v_a_6638_; lean_object* v___x_6640_; uint8_t v_isShared_6641_; uint8_t v_isSharedCheck_6645_; 
lean_dec_ref(v_decl_6619_);
v_a_6638_ = lean_ctor_get(v___x_6625_, 0);
v_isSharedCheck_6645_ = !lean_is_exclusive(v___x_6625_);
if (v_isSharedCheck_6645_ == 0)
{
v___x_6640_ = v___x_6625_;
v_isShared_6641_ = v_isSharedCheck_6645_;
goto v_resetjp_6639_;
}
else
{
lean_inc(v_a_6638_);
lean_dec(v___x_6625_);
v___x_6640_ = lean_box(0);
v_isShared_6641_ = v_isSharedCheck_6645_;
goto v_resetjp_6639_;
}
v_resetjp_6639_:
{
lean_object* v___x_6643_; 
if (v_isShared_6641_ == 0)
{
v___x_6643_ = v___x_6640_;
goto v_reusejp_6642_;
}
else
{
lean_object* v_reuseFailAlloc_6644_; 
v_reuseFailAlloc_6644_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_6644_, 0, v_a_6638_);
v___x_6643_ = v_reuseFailAlloc_6644_;
goto v_reusejp_6642_;
}
v_reusejp_6642_:
{
return v___x_6643_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_findJoinPoints___boxed(lean_object* v_decl_6646_, lean_object* v___y_6647_, lean_object* v___y_6648_, lean_object* v___y_6649_, lean_object* v___y_6650_, lean_object* v___y_6651_){
_start:
{
lean_object* v_res_6652_; 
v_res_6652_ = l_Lean_Compiler_LCNF_Decl_findJoinPoints(v_decl_6646_, v___y_6647_, v___y_6648_, v___y_6649_, v___y_6650_);
lean_dec(v___y_6650_);
lean_dec_ref(v___y_6649_);
lean_dec(v___y_6648_);
lean_dec_ref(v___y_6647_);
return v_res_6652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_findJoinPoints(lean_object* v_occurrence_6656_){
_start:
{
lean_object* v___x_6657_; uint8_t v___x_6658_; lean_object* v___x_6659_; lean_object* v___x_6660_; 
v___x_6657_ = ((lean_object*)(l_Lean_Compiler_LCNF_findJoinPoints___closed__0));
v___x_6658_ = 0;
v___x_6659_ = ((lean_object*)(l_Lean_Compiler_LCNF_findJoinPoints___closed__1));
v___x_6660_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_6657_, v___x_6658_, v___x_6659_, v_occurrence_6656_);
return v___x_6660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6727_; uint8_t v___x_6728_; lean_object* v___x_6729_; lean_object* v___x_6730_; 
v___x_6727_ = ((lean_object*)(l_Lean_Compiler_LCNF_Decl_findJoinPoints_x3f___closed__2));
v___x_6728_ = 1;
v___x_6729_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__26_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_));
v___x_6730_ = l_Lean_registerTraceClass(v___x_6727_, v___x_6728_, v___x_6729_);
return v___x_6730_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2____boxed(lean_object* v___y_6731_){
_start:
{
lean_object* v_res_6732_; 
v_res_6732_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_();
return v_res_6732_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extendJoinPointContext(lean_object* v_decl_6733_, lean_object* v___y_6734_, lean_object* v___y_6735_, lean_object* v___y_6736_, lean_object* v___y_6737_){
_start:
{
lean_object* v___x_6739_; 
v___x_6739_ = l_Lean_Compiler_LCNF_JoinPointContextExtender_extend(v_decl_6733_, v___y_6734_, v___y_6735_, v___y_6736_, v___y_6737_);
return v___x_6739_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_extendJoinPointContext___boxed(lean_object* v_decl_6740_, lean_object* v___y_6741_, lean_object* v___y_6742_, lean_object* v___y_6743_, lean_object* v___y_6744_, lean_object* v___y_6745_){
_start:
{
lean_object* v_res_6746_; 
v_res_6746_ = l_Lean_Compiler_LCNF_Decl_extendJoinPointContext(v_decl_6740_, v___y_6741_, v___y_6742_, v___y_6743_, v___y_6744_);
lean_dec(v___y_6744_);
lean_dec_ref(v___y_6743_);
lean_dec(v___y_6742_);
lean_dec_ref(v___y_6741_);
return v_res_6746_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__11(void){
_start:
{
lean_object* v___x_6772_; lean_object* v___x_6773_; 
v___x_6772_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__9));
v___x_6773_ = l_Lean_mkAtom(v___x_6772_);
return v___x_6773_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__12(void){
_start:
{
lean_object* v___x_6774_; lean_object* v___x_6775_; lean_object* v___x_6776_; 
v___x_6774_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__11, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__11_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__11);
v___x_6775_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4));
v___x_6776_ = lean_array_push(v___x_6775_, v___x_6774_);
return v___x_6776_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__16(void){
_start:
{
lean_object* v___x_6787_; lean_object* v___x_6788_; lean_object* v___x_6789_; 
v___x_6787_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15));
v___x_6788_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4));
v___x_6789_ = lean_array_push(v___x_6788_, v___x_6787_);
return v___x_6789_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__17(void){
_start:
{
lean_object* v___x_6790_; lean_object* v___x_6791_; lean_object* v___x_6792_; lean_object* v___x_6793_; 
v___x_6790_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__16, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__16_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__16);
v___x_6791_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__14));
v___x_6792_ = lean_box(2);
v___x_6793_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6793_, 0, v___x_6792_);
lean_ctor_set(v___x_6793_, 1, v___x_6791_);
lean_ctor_set(v___x_6793_, 2, v___x_6790_);
return v___x_6793_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__18(void){
_start:
{
lean_object* v___x_6794_; lean_object* v___x_6795_; lean_object* v___x_6796_; 
v___x_6794_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__17, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__17_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__17);
v___x_6795_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__12, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__12_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__12);
v___x_6796_ = lean_array_push(v___x_6795_, v___x_6794_);
return v___x_6796_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__19(void){
_start:
{
lean_object* v___x_6797_; lean_object* v___x_6798_; lean_object* v___x_6799_; 
v___x_6797_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15));
v___x_6798_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__18, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__18_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__18);
v___x_6799_ = lean_array_push(v___x_6798_, v___x_6797_);
return v___x_6799_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__20(void){
_start:
{
lean_object* v___x_6800_; lean_object* v___x_6801_; lean_object* v___x_6802_; 
v___x_6800_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15));
v___x_6801_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__19, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__19_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__19);
v___x_6802_ = lean_array_push(v___x_6801_, v___x_6800_);
return v___x_6802_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__21(void){
_start:
{
lean_object* v___x_6803_; lean_object* v___x_6804_; lean_object* v___x_6805_; 
v___x_6803_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15));
v___x_6804_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__20, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__20_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__20);
v___x_6805_ = lean_array_push(v___x_6804_, v___x_6803_);
return v___x_6805_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__22(void){
_start:
{
lean_object* v___x_6806_; lean_object* v___x_6807_; lean_object* v___x_6808_; 
v___x_6806_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__15));
v___x_6807_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__21, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__21_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__21);
v___x_6808_ = lean_array_push(v___x_6807_, v___x_6806_);
return v___x_6808_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__23(void){
_start:
{
lean_object* v___x_6809_; lean_object* v___x_6810_; lean_object* v___x_6811_; lean_object* v___x_6812_; 
v___x_6809_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__22, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__22_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__22);
v___x_6810_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__10));
v___x_6811_ = lean_box(2);
v___x_6812_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6812_, 0, v___x_6811_);
lean_ctor_set(v___x_6812_, 1, v___x_6810_);
lean_ctor_set(v___x_6812_, 2, v___x_6809_);
return v___x_6812_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__24(void){
_start:
{
lean_object* v___x_6813_; lean_object* v___x_6814_; lean_object* v___x_6815_; 
v___x_6813_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__23, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__23_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__23);
v___x_6814_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4));
v___x_6815_ = lean_array_push(v___x_6814_, v___x_6813_);
return v___x_6815_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__25(void){
_start:
{
lean_object* v___x_6816_; lean_object* v___x_6817_; lean_object* v___x_6818_; lean_object* v___x_6819_; 
v___x_6816_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__24, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__24_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__24);
v___x_6817_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__8));
v___x_6818_ = lean_box(2);
v___x_6819_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6819_, 0, v___x_6818_);
lean_ctor_set(v___x_6819_, 1, v___x_6817_);
lean_ctor_set(v___x_6819_, 2, v___x_6816_);
return v___x_6819_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__26(void){
_start:
{
lean_object* v___x_6820_; lean_object* v___x_6821_; lean_object* v___x_6822_; 
v___x_6820_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__25, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__25_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__25);
v___x_6821_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4));
v___x_6822_ = lean_array_push(v___x_6821_, v___x_6820_);
return v___x_6822_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__27(void){
_start:
{
lean_object* v___x_6823_; lean_object* v___x_6824_; lean_object* v___x_6825_; lean_object* v___x_6826_; 
v___x_6823_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__26, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__26_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__26);
v___x_6824_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__6));
v___x_6825_ = lean_box(2);
v___x_6826_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6826_, 0, v___x_6825_);
lean_ctor_set(v___x_6826_, 1, v___x_6824_);
lean_ctor_set(v___x_6826_, 2, v___x_6823_);
return v___x_6826_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__28(void){
_start:
{
lean_object* v___x_6827_; lean_object* v___x_6828_; lean_object* v___x_6829_; 
v___x_6827_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__27, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__27_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__27);
v___x_6828_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__4));
v___x_6829_ = lean_array_push(v___x_6828_, v___x_6827_);
return v___x_6829_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__29(void){
_start:
{
lean_object* v___x_6830_; lean_object* v___x_6831_; lean_object* v___x_6832_; lean_object* v___x_6833_; 
v___x_6830_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__28, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__28_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__28);
v___x_6831_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__3));
v___x_6832_ = lean_box(2);
v___x_6833_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_6833_, 0, v___x_6832_);
lean_ctor_set(v___x_6833_, 1, v___x_6831_);
lean_ctor_set(v___x_6833_, 2, v___x_6830_);
return v___x_6833_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1(void){
_start:
{
lean_object* v___x_6834_; 
v___x_6834_ = lean_obj_once(&l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__29, &l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__29_once, _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1___closed__29);
return v___x_6834_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0(uint8_t v_phase_6838_, lean_object* v___f_6839_, lean_object* v_occurrence_6840_, lean_object* v_h_6841_){
_start:
{
lean_object* v___x_6842_; lean_object* v___x_6843_; 
v___x_6842_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___closed__1));
v___x_6843_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_6842_, v_phase_6838_, v___f_6839_, v_occurrence_6840_);
return v___x_6843_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___boxed(lean_object* v_phase_6844_, lean_object* v___f_6845_, lean_object* v_occurrence_6846_, lean_object* v_h_6847_){
_start:
{
uint8_t v_phase_boxed_6848_; lean_object* v_res_6849_; 
v_phase_boxed_6848_ = lean_unbox(v_phase_6844_);
v_res_6849_ = l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0(v_phase_boxed_6848_, v___f_6845_, v_occurrence_6846_, v_h_6847_);
return v_res_6849_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg(lean_object* v_occurrence_6851_, uint8_t v_phase_6852_){
_start:
{
lean_object* v___f_6853_; lean_object* v___x_6854_; lean_object* v___f_6855_; lean_object* v___x_6856_; uint8_t v___x_6857_; lean_object* v___x_6858_; 
v___f_6853_ = ((lean_object*)(l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___closed__0));
v___x_6854_ = lean_box(v_phase_6852_);
v___f_6855_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___lam__0___boxed), 4, 3);
lean_closure_set(v___f_6855_, 0, v___x_6854_);
lean_closure_set(v___f_6855_, 1, v___f_6853_);
lean_closure_set(v___f_6855_, 2, v_occurrence_6851_);
v___x_6856_ = l_Lean_Compiler_LCNF_instInhabitedPass;
v___x_6857_ = 0;
v___x_6858_ = l_Lean_Compiler_LCNF_Phase_withPurityCheck___redArg(v___x_6856_, v_phase_6852_, v___x_6857_, v___f_6855_);
return v___x_6858_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___redArg___boxed(lean_object* v_occurrence_6859_, lean_object* v_phase_6860_){
_start:
{
uint8_t v_phase_boxed_6861_; lean_object* v_res_6862_; 
v_phase_boxed_6861_ = lean_unbox(v_phase_6860_);
v_res_6862_ = l_Lean_Compiler_LCNF_extendJoinPointContext___redArg(v_occurrence_6859_, v_phase_boxed_6861_);
return v_res_6862_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext(lean_object* v_occurrence_6863_, uint8_t v_phase_6864_, lean_object* v___h_6865_){
_start:
{
lean_object* v___x_6866_; 
v___x_6866_ = l_Lean_Compiler_LCNF_extendJoinPointContext___redArg(v_occurrence_6863_, v_phase_6864_);
return v___x_6866_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_extendJoinPointContext___boxed(lean_object* v_occurrence_6867_, lean_object* v_phase_6868_, lean_object* v___h_6869_){
_start:
{
uint8_t v_phase_boxed_6870_; lean_object* v_res_6871_; 
v_phase_boxed_6870_ = lean_unbox(v_phase_6868_);
v_res_6871_ = l_Lean_Compiler_LCNF_extendJoinPointContext(v_occurrence_6867_, v_phase_boxed_6870_, v___h_6869_);
return v_res_6871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6888_; uint8_t v___x_6889_; lean_object* v___x_6890_; lean_object* v___x_6891_; 
v___x_6888_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_));
v___x_6889_ = 1;
v___x_6890_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_));
v___x_6891_ = l_Lean_registerTraceClass(v___x_6888_, v___x_6889_, v___x_6890_);
return v___x_6891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2____boxed(lean_object* v___y_6892_){
_start:
{
lean_object* v_res_6893_; 
v_res_6893_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_();
return v_res_6893_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs(lean_object* v_decl_6894_, lean_object* v___y_6895_, lean_object* v___y_6896_, lean_object* v___y_6897_, lean_object* v___y_6898_){
_start:
{
lean_object* v___x_6900_; 
v___x_6900_ = l_Lean_Compiler_LCNF_JoinPointCommonArgs_reduce(v_decl_6894_, v___y_6895_, v___y_6896_, v___y_6897_, v___y_6898_);
return v___x_6900_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs___boxed(lean_object* v_decl_6901_, lean_object* v___y_6902_, lean_object* v___y_6903_, lean_object* v___y_6904_, lean_object* v___y_6905_, lean_object* v___y_6906_){
_start:
{
lean_object* v_res_6907_; 
v_res_6907_ = l_Lean_Compiler_LCNF_Decl_commonJoinPointArgs(v_decl_6901_, v___y_6902_, v___y_6903_, v___y_6904_, v___y_6905_);
lean_dec(v___y_6905_);
lean_dec_ref(v___y_6904_);
lean_dec(v___y_6903_);
lean_dec_ref(v___y_6902_);
return v_res_6907_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3(void){
_start:
{
lean_object* v___x_6912_; lean_object* v___f_6913_; uint8_t v___x_6914_; lean_object* v___x_6915_; lean_object* v___x_6916_; 
v___x_6912_ = lean_unsigned_to_nat(0u);
v___f_6913_ = ((lean_object*)(l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__0));
v___x_6914_ = 1;
v___x_6915_ = ((lean_object*)(l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__2));
v___x_6916_ = l_Lean_Compiler_LCNF_Pass_mkPerDeclaration(v___x_6915_, v___x_6914_, v___f_6913_, v___x_6912_);
return v___x_6916_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_commonJoinPointArgs(void){
_start:
{
lean_object* v___x_6917_; 
v___x_6917_ = lean_obj_once(&l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3, &l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3_once, _init_l_Lean_Compiler_LCNF_commonJoinPointArgs___closed__3);
return v___x_6917_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6921_; lean_object* v___x_6922_; lean_object* v___x_6923_; 
v___x_6921_ = lean_unsigned_to_nat(3948291228u);
v___x_6922_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__20_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_));
v___x_6923_ = l_Lean_Name_num___override(v___x_6922_, v___x_6921_);
return v___x_6923_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6924_; lean_object* v___x_6925_; lean_object* v___x_6926_; 
v___x_6924_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__22_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_));
v___x_6925_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__1_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_);
v___x_6926_ = l_Lean_Name_str___override(v___x_6925_, v___x_6924_);
return v___x_6926_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6927_; lean_object* v___x_6928_; lean_object* v___x_6929_; 
v___x_6927_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__24_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_));
v___x_6928_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__2_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_);
v___x_6929_ = l_Lean_Name_str___override(v___x_6928_, v___x_6927_);
return v___x_6929_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_6930_; lean_object* v___x_6931_; lean_object* v___x_6932_; 
v___x_6930_ = lean_unsigned_to_nat(2u);
v___x_6931_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__3_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_);
v___x_6932_ = l_Lean_Name_num___override(v___x_6931_, v___x_6930_);
return v___x_6932_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_6934_; uint8_t v___x_6935_; lean_object* v___x_6936_; lean_object* v___x_6937_; 
v___x_6934_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__0_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_));
v___x_6935_ = 1;
v___x_6936_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn___closed__4_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_);
v___x_6937_ = l_Lean_registerTraceClass(v___x_6934_, v___x_6935_, v___x_6936_);
return v___x_6937_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2____boxed(lean_object* v___y_6938_){
_start:
{
lean_object* v_res_6939_; 
v_res_6939_ = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_();
return v_res_6939_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_ScopeM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_JoinPoints(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_ScopeM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default = _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo_default);
l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo = _init_l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo();
lean_mark_persistent(l_Lean_Compiler_LCNF_JoinPointFinder_instInhabitedCandidateInfo);
res = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_885915134____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_1293217372____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Compiler_LCNF_commonJoinPointArgs = _init_l_Lean_Compiler_LCNF_commonJoinPointArgs();
lean_mark_persistent(l_Lean_Compiler_LCNF_commonJoinPointArgs);
res = l___private_Lean_Compiler_LCNF_JoinPoints_0__Lean_Compiler_LCNF_initFn_00___x40_Lean_Compiler_LCNF_JoinPoints_3948291228____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_JoinPoints(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1 = _init_l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1();
lean_mark_persistent(l_Lean_Compiler_LCNF_extendJoinPointContext___auto__1);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PullFunDecls(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_FVarUtil(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_ScopeM(uint8_t builtin);
lean_object* initialize_Lean_Compiler_LCNF_InferType(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_JoinPoints(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PullFunDecls(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_FVarUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_ScopeM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Compiler_LCNF_InferType(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_JoinPoints(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_JoinPoints(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_JoinPoints(builtin);
}
#ifdef __cplusplus
}
#endif
