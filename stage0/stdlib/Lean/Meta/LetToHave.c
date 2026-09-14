// Lean compiler output
// Module: Lean.Meta.LetToHave
// Imports: public import Lean.Meta.Check public import Lean.ReservedNameAction public import Lean.AddDecl public import Lean.Meta.Transform public import Lean.Util.CollectFVars public import Lean.Util.CollectMVars import Init.Data.Range.Polymorphic.Iterators import Init.While
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
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
extern lean_object* l_Lean_Options_empty;
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Environment_getModuleIdxFor_x3f(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* l_Lean_EnvironmentHeader_moduleNames(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_isPrivateName(lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
extern lean_object* l_Lean_unknownIdentifierMessageTag;
lean_object* l_Lean_replaceRef(lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
uint8_t l_Lean_Expr_hasExprMVar(lean_object*);
uint32_t l_Lean_Expr_approxDepth(lean_object*);
uint8_t lean_uint32_dec_le(uint32_t, uint32_t);
lean_object* lean_find_expr(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_FVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_FVarId_throwUnknown___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_MVarId_findDecl_x3f___redArg(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Meta_addZetaDeltaFVarId___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_getFVar_x21(lean_object*, lean_object*);
uint8_t l_Lean_LocalDecl_isLet(lean_object*, uint8_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
uint8_t l_Lean_FVarIdSet_contains(lean_object*, lean_object*);
lean_object* l_Lean_FVarIdSet_insert(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_isLetVar___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwUnknownMVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Level_succ___override(lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Environment_findConstVal_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instantiateTypeLevelParams___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_Meta_instMonadMetaM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instMonadMetaM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_instInhabitedOfMonad___redArg(lean_object*, lean_object*);
lean_object* l_instInhabitedForall___redArg___lam__0___boxed(lean_object*, lean_object*);
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwAppTypeMismatch___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwFunctionExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isForall(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_LocalContext_mkForall(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
uint8_t l_Lean_Expr_isSort(lean_object*);
lean_object* l_Lean_Meta_throwTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sortLevel_x21(lean_object*);
lean_object* l_Lean_mkLevelIMax_x27(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_LocalContext_mkLocalDecl(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Expr_fvar___override(lean_object*);
lean_object* l_Lean_Literal_type(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_io_mono_nanos_now();
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
extern lean_object* l_Lean_trace_profiler;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
double lean_float_sub(double, double);
uint8_t lean_float_decLt(double, double);
extern lean_object* l_Lean_trace_profiler_useHeartbeats;
extern lean_object* l_Lean_trace_profiler_threshold;
lean_object* lean_io_get_num_heartbeats();
lean_object* l_Lean_LocalContext_mkLetDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t);
lean_object* l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_expr_abstract_range(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t lean_expr_has_loose_bvar(lean_object*, lean_object*);
lean_object* lean_expr_lower_loose_bvars(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getZetaDeltaFVarIds___redArg(lean_object*);
lean_object* lean_expr_abstract(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_indentD(lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
uint8_t l_Lean_Meta_TransparencyMode_lt(uint8_t, uint8_t);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_ProjReductionKind_ctorIdx(uint8_t);
uint8_t l_Lean_Meta_instBEqEtaStructMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Exception_toMessageData(lean_object*);
lean_object* l_Lean_profileitIOUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(lean_object*, uint32_t);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "_inhabitedExprDummy"};
static const lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0 = (const lean_object*)&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0_value;
static const lean_ctor_object l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__0_value),LEAN_SCALAR_PTR_LITERAL(37, 247, 56, 151, 29, 116, 116, 243)}};
static const lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1 = (const lean_object*)&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1_value;
static lean_once_cell_t l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2;
static lean_once_cell_t l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_LetToHave_instInhabitedResult_default;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0___boxed(lean_object*);
static const lean_closure_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__0;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1;
static const lean_array_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3_value;
static const lean_closure_object l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_instMonadMetaM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4 = (const lean_object*)&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4_value;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "A private declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 79, .m_capacity = 79, .m_length = 78, .m_data = "` (from the current module) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "A public declaration `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "` exists but is imported privately; consider adding `public import "};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "`."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "` (from `"};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17;
static const lean_string_object l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "`) exists but would need to be public to access here."};
static const lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18 = (const lean_object*)&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18_value;
static lean_once_cell_t l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19;
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Unknown constant `"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1;
static const lean_string_object l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Lean.Meta.LetToHave"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 62, .m_capacity = 62, .m_length = 61, .m_data = "_private.Lean.Meta.LetToHave.0.Lean.Meta.LetToHave.visitConst"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Lean.Expr"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateApp!Impl"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "application expected"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "_private.Lean.Meta.LetToHave.0.Lean.Meta.LetToHave.visitLambdaLet.finalize"};
static const lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__1(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "letToHave"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 3, 170, 90, 194, 179, 10, 17)}};
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__2_value),LEAN_SCALAR_PTR_LITERAL(86, 160, 73, 249, 166, 244, 47, 125)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "finalize "};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "<not-available>"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13_value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__13_value)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "invalid projection"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nfrom type"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "_private.Lean.Expr.0.Lean.Expr.updateProj!Impl"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proj expected"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13_spec__15(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13_spec__15___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "<exception thrown while producing trace node message>"};
static const lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0 = (const lean_object*)&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0_value;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0;
static lean_once_cell_t l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "visit (check := "};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4_value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "invalid let declaration, term"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected bound variable "};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "transformed "};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = " `let` expressions into `have` expressions"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "result:"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "result: (no change)"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__7;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "no `let` expressions"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__1 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__2;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__3;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__4;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__5;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_value_aux_0),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__1_value),LEAN_SCALAR_PTR_LITERAL(77, 3, 170, 90, 194, 179, 10, 17)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1 = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_letToHave___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "let-to-have transformation"};
static const lean_object* l_Lean_Meta_letToHave___closed__0 = (const lean_object*)&l_Lean_Meta_letToHave___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "LetToHave"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 136, 50, 239, 0, 218, 22, 67)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(245, 192, 30, 32, 60, 3, 161, 57)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 162, 78, 225, 97, 193, 211, 154)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 52, 189, 140, 199, 100, 72, 251)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 119, 103, 45, 179, 255, 212, 36)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(244, 238, 181, 178, 141, 48, 35, 162)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(245, 81, 38, 233, 242, 131, 79, 183)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(189, 23, 142, 14, 29, 68, 13, 149)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 77, 222, 212, 108, 104, 240, 20)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)(((size_t)(1606831773) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(188, 242, 27, 127, 244, 91, 156, 204)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(19, 47, 215, 48, 43, 169, 21, 43)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(83, 14, 169, 133, 112, 139, 163, 217)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value),((lean_object*)(((size_t)(2) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(86, 189, 43, 239, 62, 157, 143, 122)}};
static const lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2__value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0(lean_object* v_x_1_){
_start:
{
if (lean_obj_tag(v_x_1_) == 8)
{
uint8_t v_nondep_2_; 
v_nondep_2_ = lean_ctor_get_uint8(v_x_1_, sizeof(void*)*4 + 8);
if (v_nondep_2_ == 0)
{
uint8_t v___x_3_; 
v___x_3_ = 1;
return v___x_3_;
}
else
{
uint8_t v___x_4_; 
v___x_4_ = 0;
return v___x_4_;
}
}
else
{
uint8_t v___x_5_; 
v___x_5_ = 0;
return v___x_5_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0___boxed(lean_object* v_x_6_){
_start:
{
uint8_t v_res_7_; lean_object* v_r_8_; 
v_res_7_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___lam__0(v_x_6_);
lean_dec_ref(v_x_6_);
v_r_8_ = lean_box(v_res_7_);
return v_r_8_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(lean_object* v_e_10_){
_start:
{
lean_object* v___f_11_; lean_object* v___x_12_; 
v___f_11_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___closed__0));
v___x_12_ = lean_find_expr(v___f_11_, v_e_10_);
if (lean_obj_tag(v___x_12_) == 0)
{
uint8_t v___x_13_; 
v___x_13_ = 0;
return v___x_13_;
}
else
{
uint8_t v___x_14_; 
lean_dec_ref_known(v___x_12_, 1);
v___x_14_ = 1;
return v___x_14_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet___boxed(lean_object* v_e_15_){
_start:
{
uint8_t v_res_16_; lean_object* v_r_17_; 
v_res_16_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(v_e_15_);
lean_dec_ref(v_e_15_);
v_r_17_ = lean_box(v_res_16_);
return v_r_17_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(lean_object* v_e_18_, uint32_t v_maxDepth_19_){
_start:
{
uint8_t v___x_20_; 
v___x_20_ = l_Lean_Expr_hasFVar(v_e_18_);
if (v___x_20_ == 0)
{
uint8_t v___x_21_; 
v___x_21_ = l_Lean_Expr_hasExprMVar(v_e_18_);
if (v___x_21_ == 0)
{
uint32_t v___x_22_; uint8_t v___x_23_; 
v___x_22_ = l_Lean_Expr_approxDepth(v_e_18_);
v___x_23_ = lean_uint32_dec_le(v___x_22_, v_maxDepth_19_);
if (v___x_23_ == 0)
{
return v___x_23_;
}
else
{
uint8_t v___x_24_; 
v___x_24_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(v_e_18_);
if (v___x_24_ == 0)
{
return v___x_23_;
}
else
{
return v___x_21_;
}
}
}
else
{
return v___x_20_;
}
}
else
{
uint8_t v___x_25_; 
v___x_25_ = 0;
return v___x_25_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip___boxed(lean_object* v_e_26_, lean_object* v_maxDepth_27_){
_start:
{
uint32_t v_maxDepth_boxed_28_; uint8_t v_res_29_; lean_object* v_r_30_; 
v_maxDepth_boxed_28_ = lean_unbox_uint32(v_maxDepth_27_);
lean_dec(v_maxDepth_27_);
v_res_29_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_26_, v_maxDepth_boxed_28_);
lean_dec_ref(v_e_26_);
v_r_30_ = lean_box(v_res_29_);
return v_r_30_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2(void){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_34_ = lean_box(0);
v___x_35_ = ((lean_object*)(l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__1));
v___x_36_ = l_Lean_Expr_const___override(v___x_35_, v___x_34_);
return v___x_36_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3(void){
_start:
{
lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_37_ = lean_box(0);
v___x_38_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2);
v___x_39_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_39_, 0, v___x_38_);
lean_ctor_set(v___x_39_, 1, v___x_37_);
return v___x_39_;
}
}
static lean_object* _init_l_Lean_Meta_LetToHave_instInhabitedResult_default(void){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__3);
return v___x_40_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult(void){
_start:
{
lean_object* v___x_41_; 
v___x_41_ = l_Lean_Meta_LetToHave_instInhabitedResult_default;
return v___x_41_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0(lean_object* v_self_42_){
_start:
{
lean_object* v_expr_43_; 
v_expr_43_ = lean_ctor_get(v_self_42_, 0);
lean_inc_ref(v_expr_43_);
return v_expr_43_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0___boxed(lean_object* v_self_44_){
_start:
{
lean_object* v_res_45_; 
v_res_45_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instCoeResultExpr___lam__0(v_self_44_);
lean_dec_ref(v_self_44_);
return v_res_45_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(lean_object* v_a_48_, lean_object* v_b_49_, lean_object* v_x_50_){
_start:
{
if (lean_obj_tag(v_x_50_) == 0)
{
lean_dec(v_b_49_);
lean_dec_ref(v_a_48_);
return v_x_50_;
}
else
{
lean_object* v_key_51_; lean_object* v_value_52_; lean_object* v_tail_53_; lean_object* v___x_55_; uint8_t v_isShared_56_; uint8_t v_isSharedCheck_65_; 
v_key_51_ = lean_ctor_get(v_x_50_, 0);
v_value_52_ = lean_ctor_get(v_x_50_, 1);
v_tail_53_ = lean_ctor_get(v_x_50_, 2);
v_isSharedCheck_65_ = !lean_is_exclusive(v_x_50_);
if (v_isSharedCheck_65_ == 0)
{
v___x_55_ = v_x_50_;
v_isShared_56_ = v_isSharedCheck_65_;
goto v_resetjp_54_;
}
else
{
lean_inc(v_tail_53_);
lean_inc(v_value_52_);
lean_inc(v_key_51_);
lean_dec(v_x_50_);
v___x_55_ = lean_box(0);
v_isShared_56_ = v_isSharedCheck_65_;
goto v_resetjp_54_;
}
v_resetjp_54_:
{
uint8_t v___x_57_; 
v___x_57_ = l_Lean_ExprStructEq_beq(v_key_51_, v_a_48_);
if (v___x_57_ == 0)
{
lean_object* v___x_58_; lean_object* v___x_60_; 
v___x_58_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(v_a_48_, v_b_49_, v_tail_53_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 2, v___x_58_);
v___x_60_ = v___x_55_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_key_51_);
lean_ctor_set(v_reuseFailAlloc_61_, 1, v_value_52_);
lean_ctor_set(v_reuseFailAlloc_61_, 2, v___x_58_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
else
{
lean_object* v___x_63_; 
lean_dec(v_value_52_);
lean_dec(v_key_51_);
if (v_isShared_56_ == 0)
{
lean_ctor_set(v___x_55_, 1, v_b_49_);
lean_ctor_set(v___x_55_, 0, v_a_48_);
v___x_63_ = v___x_55_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_64_; 
v_reuseFailAlloc_64_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_64_, 0, v_a_48_);
lean_ctor_set(v_reuseFailAlloc_64_, 1, v_b_49_);
lean_ctor_set(v_reuseFailAlloc_64_, 2, v_tail_53_);
v___x_63_ = v_reuseFailAlloc_64_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
return v___x_63_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(lean_object* v_x_66_, lean_object* v_x_67_){
_start:
{
if (lean_obj_tag(v_x_67_) == 0)
{
return v_x_66_;
}
else
{
lean_object* v_key_68_; lean_object* v_value_69_; lean_object* v_tail_70_; lean_object* v___x_72_; uint8_t v_isShared_73_; uint8_t v_isSharedCheck_93_; 
v_key_68_ = lean_ctor_get(v_x_67_, 0);
v_value_69_ = lean_ctor_get(v_x_67_, 1);
v_tail_70_ = lean_ctor_get(v_x_67_, 2);
v_isSharedCheck_93_ = !lean_is_exclusive(v_x_67_);
if (v_isSharedCheck_93_ == 0)
{
v___x_72_ = v_x_67_;
v_isShared_73_ = v_isSharedCheck_93_;
goto v_resetjp_71_;
}
else
{
lean_inc(v_tail_70_);
lean_inc(v_value_69_);
lean_inc(v_key_68_);
lean_dec(v_x_67_);
v___x_72_ = lean_box(0);
v_isShared_73_ = v_isSharedCheck_93_;
goto v_resetjp_71_;
}
v_resetjp_71_:
{
lean_object* v___x_74_; uint64_t v___x_75_; uint64_t v___x_76_; uint64_t v___x_77_; uint64_t v_fold_78_; uint64_t v___x_79_; uint64_t v___x_80_; uint64_t v___x_81_; size_t v___x_82_; size_t v___x_83_; size_t v___x_84_; size_t v___x_85_; size_t v___x_86_; lean_object* v___x_87_; lean_object* v___x_89_; 
v___x_74_ = lean_array_get_size(v_x_66_);
v___x_75_ = l_Lean_ExprStructEq_hash(v_key_68_);
v___x_76_ = 32ULL;
v___x_77_ = lean_uint64_shift_right(v___x_75_, v___x_76_);
v_fold_78_ = lean_uint64_xor(v___x_75_, v___x_77_);
v___x_79_ = 16ULL;
v___x_80_ = lean_uint64_shift_right(v_fold_78_, v___x_79_);
v___x_81_ = lean_uint64_xor(v_fold_78_, v___x_80_);
v___x_82_ = lean_uint64_to_usize(v___x_81_);
v___x_83_ = lean_usize_of_nat(v___x_74_);
v___x_84_ = ((size_t)1ULL);
v___x_85_ = lean_usize_sub(v___x_83_, v___x_84_);
v___x_86_ = lean_usize_land(v___x_82_, v___x_85_);
v___x_87_ = lean_array_uget_borrowed(v_x_66_, v___x_86_);
lean_inc(v___x_87_);
if (v_isShared_73_ == 0)
{
lean_ctor_set(v___x_72_, 2, v___x_87_);
v___x_89_ = v___x_72_;
goto v_reusejp_88_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_key_68_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_value_69_);
lean_ctor_set(v_reuseFailAlloc_92_, 2, v___x_87_);
v___x_89_ = v_reuseFailAlloc_92_;
goto v_reusejp_88_;
}
v_reusejp_88_:
{
lean_object* v___x_90_; 
v___x_90_ = lean_array_uset(v_x_66_, v___x_86_, v___x_89_);
v_x_66_ = v___x_90_;
v_x_67_ = v_tail_70_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(lean_object* v_i_94_, lean_object* v_source_95_, lean_object* v_target_96_){
_start:
{
lean_object* v___x_97_; uint8_t v___x_98_; 
v___x_97_ = lean_array_get_size(v_source_95_);
v___x_98_ = lean_nat_dec_lt(v_i_94_, v___x_97_);
if (v___x_98_ == 0)
{
lean_dec_ref(v_source_95_);
lean_dec(v_i_94_);
return v_target_96_;
}
else
{
lean_object* v_es_99_; lean_object* v___x_100_; lean_object* v_source_101_; lean_object* v_target_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v_es_99_ = lean_array_fget(v_source_95_, v_i_94_);
v___x_100_ = lean_box(0);
v_source_101_ = lean_array_fset(v_source_95_, v_i_94_, v___x_100_);
v_target_102_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(v_target_96_, v_es_99_);
v___x_103_ = lean_unsigned_to_nat(1u);
v___x_104_ = lean_nat_add(v_i_94_, v___x_103_);
lean_dec(v_i_94_);
v_i_94_ = v___x_104_;
v_source_95_ = v_source_101_;
v_target_96_ = v_target_102_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(lean_object* v_data_106_){
_start:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v_nbuckets_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; 
v___x_107_ = lean_array_get_size(v_data_106_);
v___x_108_ = lean_unsigned_to_nat(2u);
v_nbuckets_109_ = lean_nat_mul(v___x_107_, v___x_108_);
v___x_110_ = lean_unsigned_to_nat(0u);
v___x_111_ = lean_box(0);
v___x_112_ = lean_mk_array(v_nbuckets_109_, v___x_111_);
v___x_113_ = lean_array_propagate_mark(v_data_106_, v___x_112_);
v___x_114_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(v___x_110_, v_data_106_, v___x_113_);
return v___x_114_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(lean_object* v_a_115_, lean_object* v_x_116_){
_start:
{
if (lean_obj_tag(v_x_116_) == 0)
{
uint8_t v___x_117_; 
v___x_117_ = 0;
return v___x_117_;
}
else
{
lean_object* v_key_118_; lean_object* v_tail_119_; uint8_t v___x_120_; 
v_key_118_ = lean_ctor_get(v_x_116_, 0);
v_tail_119_ = lean_ctor_get(v_x_116_, 2);
v___x_120_ = l_Lean_ExprStructEq_beq(v_key_118_, v_a_115_);
if (v___x_120_ == 0)
{
v_x_116_ = v_tail_119_;
goto _start;
}
else
{
return v___x_120_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg___boxed(lean_object* v_a_122_, lean_object* v_x_123_){
_start:
{
uint8_t v_res_124_; lean_object* v_r_125_; 
v_res_124_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(v_a_122_, v_x_123_);
lean_dec(v_x_123_);
lean_dec_ref(v_a_122_);
v_r_125_ = lean_box(v_res_124_);
return v_r_125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(lean_object* v_m_126_, lean_object* v_a_127_, lean_object* v_b_128_){
_start:
{
lean_object* v_size_129_; lean_object* v_buckets_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_173_; 
v_size_129_ = lean_ctor_get(v_m_126_, 0);
v_buckets_130_ = lean_ctor_get(v_m_126_, 1);
v_isSharedCheck_173_ = !lean_is_exclusive(v_m_126_);
if (v_isSharedCheck_173_ == 0)
{
v___x_132_ = v_m_126_;
v_isShared_133_ = v_isSharedCheck_173_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_buckets_130_);
lean_inc(v_size_129_);
lean_dec(v_m_126_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_173_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_134_; uint64_t v___x_135_; uint64_t v___x_136_; uint64_t v___x_137_; uint64_t v_fold_138_; uint64_t v___x_139_; uint64_t v___x_140_; uint64_t v___x_141_; size_t v___x_142_; size_t v___x_143_; size_t v___x_144_; size_t v___x_145_; size_t v___x_146_; lean_object* v_bkt_147_; uint8_t v___x_148_; 
v___x_134_ = lean_array_get_size(v_buckets_130_);
v___x_135_ = l_Lean_ExprStructEq_hash(v_a_127_);
v___x_136_ = 32ULL;
v___x_137_ = lean_uint64_shift_right(v___x_135_, v___x_136_);
v_fold_138_ = lean_uint64_xor(v___x_135_, v___x_137_);
v___x_139_ = 16ULL;
v___x_140_ = lean_uint64_shift_right(v_fold_138_, v___x_139_);
v___x_141_ = lean_uint64_xor(v_fold_138_, v___x_140_);
v___x_142_ = lean_uint64_to_usize(v___x_141_);
v___x_143_ = lean_usize_of_nat(v___x_134_);
v___x_144_ = ((size_t)1ULL);
v___x_145_ = lean_usize_sub(v___x_143_, v___x_144_);
v___x_146_ = lean_usize_land(v___x_142_, v___x_145_);
v_bkt_147_ = lean_array_uget_borrowed(v_buckets_130_, v___x_146_);
v___x_148_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(v_a_127_, v_bkt_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; lean_object* v_size_x27_150_; lean_object* v___x_151_; lean_object* v_buckets_x27_152_; lean_object* v___x_153_; lean_object* v___x_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v___x_149_ = lean_unsigned_to_nat(1u);
v_size_x27_150_ = lean_nat_add(v_size_129_, v___x_149_);
lean_dec(v_size_129_);
lean_inc(v_bkt_147_);
v___x_151_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_151_, 0, v_a_127_);
lean_ctor_set(v___x_151_, 1, v_b_128_);
lean_ctor_set(v___x_151_, 2, v_bkt_147_);
v_buckets_x27_152_ = lean_array_uset(v_buckets_130_, v___x_146_, v___x_151_);
v___x_153_ = lean_unsigned_to_nat(4u);
v___x_154_ = lean_nat_mul(v_size_x27_150_, v___x_153_);
v___x_155_ = lean_unsigned_to_nat(3u);
v___x_156_ = lean_nat_div(v___x_154_, v___x_155_);
lean_dec(v___x_154_);
v___x_157_ = lean_array_get_size(v_buckets_x27_152_);
v___x_158_ = lean_nat_dec_le(v___x_156_, v___x_157_);
lean_dec(v___x_156_);
if (v___x_158_ == 0)
{
lean_object* v_val_159_; lean_object* v___x_161_; 
v_val_159_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(v_buckets_x27_152_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v_val_159_);
lean_ctor_set(v___x_132_, 0, v_size_x27_150_);
v___x_161_ = v___x_132_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v_size_x27_150_);
lean_ctor_set(v_reuseFailAlloc_162_, 1, v_val_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
else
{
lean_object* v___x_164_; 
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v_buckets_x27_152_);
lean_ctor_set(v___x_132_, 0, v_size_x27_150_);
v___x_164_ = v___x_132_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v_size_x27_150_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v_buckets_x27_152_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
else
{
lean_object* v___x_166_; lean_object* v_buckets_x27_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_171_; 
lean_inc(v_bkt_147_);
v___x_166_ = lean_box(0);
v_buckets_x27_167_ = lean_array_uset(v_buckets_130_, v___x_146_, v___x_166_);
v___x_168_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(v_a_127_, v_b_128_, v_bkt_147_);
v___x_169_ = lean_array_uset(v_buckets_x27_167_, v___x_146_, v___x_168_);
if (v_isShared_133_ == 0)
{
lean_ctor_set(v___x_132_, 1, v___x_169_);
v___x_171_ = v___x_132_;
goto v_reusejp_170_;
}
else
{
lean_object* v_reuseFailAlloc_172_; 
v_reuseFailAlloc_172_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_172_, 0, v_size_129_);
lean_ctor_set(v_reuseFailAlloc_172_, 1, v___x_169_);
v___x_171_ = v_reuseFailAlloc_172_;
goto v_reusejp_170_;
}
v_reusejp_170_:
{
return v___x_171_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(lean_object* v_r_174_, lean_object* v_a_175_, lean_object* v_a_176_, lean_object* v_a_177_, lean_object* v_a_178_, lean_object* v_a_179_){
_start:
{
lean_object* v_type_x3f_181_; 
v_type_x3f_181_ = lean_ctor_get(v_r_174_, 1);
lean_inc(v_type_x3f_181_);
if (lean_obj_tag(v_type_x3f_181_) == 1)
{
lean_object* v_val_182_; lean_object* v___x_184_; uint8_t v_isShared_185_; uint8_t v_isSharedCheck_189_; 
lean_dec_ref(v_r_174_);
v_val_182_ = lean_ctor_get(v_type_x3f_181_, 0);
v_isSharedCheck_189_ = !lean_is_exclusive(v_type_x3f_181_);
if (v_isSharedCheck_189_ == 0)
{
v___x_184_ = v_type_x3f_181_;
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
else
{
lean_inc(v_val_182_);
lean_dec(v_type_x3f_181_);
v___x_184_ = lean_box(0);
v_isShared_185_ = v_isSharedCheck_189_;
goto v_resetjp_183_;
}
v_resetjp_183_:
{
lean_object* v___x_187_; 
if (v_isShared_185_ == 0)
{
lean_ctor_set_tag(v___x_184_, 0);
v___x_187_ = v___x_184_;
goto v_reusejp_186_;
}
else
{
lean_object* v_reuseFailAlloc_188_; 
v_reuseFailAlloc_188_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_188_, 0, v_val_182_);
v___x_187_ = v_reuseFailAlloc_188_;
goto v_reusejp_186_;
}
v_reusejp_186_:
{
return v___x_187_;
}
}
}
else
{
lean_object* v_expr_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_219_; 
lean_dec(v_type_x3f_181_);
v_expr_190_ = lean_ctor_get(v_r_174_, 0);
v_isSharedCheck_219_ = !lean_is_exclusive(v_r_174_);
if (v_isSharedCheck_219_ == 0)
{
lean_object* v_unused_220_; 
v_unused_220_ = lean_ctor_get(v_r_174_, 1);
lean_dec(v_unused_220_);
v___x_192_ = v_r_174_;
v_isShared_193_ = v_isSharedCheck_219_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_expr_190_);
lean_dec(v_r_174_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_219_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___x_194_; 
lean_inc(v_a_179_);
lean_inc_ref(v_a_178_);
lean_inc(v_a_177_);
lean_inc_ref(v_a_176_);
lean_inc_ref(v_expr_190_);
v___x_194_ = lean_infer_type(v_expr_190_, v_a_176_, v_a_177_, v_a_178_, v_a_179_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_197_; uint8_t v_isShared_198_; uint8_t v_isSharedCheck_218_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_218_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_218_ == 0)
{
v___x_197_ = v___x_194_;
v_isShared_198_ = v_isSharedCheck_218_;
goto v_resetjp_196_;
}
else
{
lean_inc(v_a_195_);
lean_dec(v___x_194_);
v___x_197_ = lean_box(0);
v_isShared_198_ = v_isSharedCheck_218_;
goto v_resetjp_196_;
}
v_resetjp_196_:
{
lean_object* v___x_199_; lean_object* v___x_201_; 
lean_inc(v_a_195_);
v___x_199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_199_, 0, v_a_195_);
lean_inc_ref(v_expr_190_);
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 1, v___x_199_);
v___x_201_ = v___x_192_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_217_; 
v_reuseFailAlloc_217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_217_, 0, v_expr_190_);
lean_ctor_set(v_reuseFailAlloc_217_, 1, v___x_199_);
v___x_201_ = v_reuseFailAlloc_217_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
lean_object* v___x_202_; lean_object* v_count_203_; lean_object* v_results_204_; lean_object* v___x_206_; uint8_t v_isShared_207_; uint8_t v_isSharedCheck_216_; 
v___x_202_ = lean_st_ref_take(v_a_175_);
v_count_203_ = lean_ctor_get(v___x_202_, 0);
v_results_204_ = lean_ctor_get(v___x_202_, 1);
v_isSharedCheck_216_ = !lean_is_exclusive(v___x_202_);
if (v_isSharedCheck_216_ == 0)
{
v___x_206_ = v___x_202_;
v_isShared_207_ = v_isSharedCheck_216_;
goto v_resetjp_205_;
}
else
{
lean_inc(v_results_204_);
lean_inc(v_count_203_);
lean_dec(v___x_202_);
v___x_206_ = lean_box(0);
v_isShared_207_ = v_isSharedCheck_216_;
goto v_resetjp_205_;
}
v_resetjp_205_:
{
lean_object* v___x_208_; lean_object* v___x_210_; 
v___x_208_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_results_204_, v_expr_190_, v___x_201_);
if (v_isShared_207_ == 0)
{
lean_ctor_set(v___x_206_, 1, v___x_208_);
v___x_210_ = v___x_206_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v_count_203_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_208_);
v___x_210_ = v_reuseFailAlloc_215_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
lean_object* v___x_211_; lean_object* v___x_213_; 
v___x_211_ = lean_st_ref_put(v_a_175_, v___x_210_);
if (v_isShared_198_ == 0)
{
v___x_213_ = v___x_197_;
goto v_reusejp_212_;
}
else
{
lean_object* v_reuseFailAlloc_214_; 
v_reuseFailAlloc_214_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_214_, 0, v_a_195_);
v___x_213_ = v_reuseFailAlloc_214_;
goto v_reusejp_212_;
}
v_reusejp_212_:
{
return v___x_213_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_192_);
lean_dec_ref(v_expr_190_);
return v___x_194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg___boxed(lean_object* v_r_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_, lean_object* v_a_226_, lean_object* v___y_227_){
_start:
{
lean_object* v_res_228_; 
v_res_228_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_r_221_, v_a_222_, v_a_223_, v_a_224_, v_a_225_, v_a_226_);
lean_dec(v_a_226_);
lean_dec_ref(v_a_225_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
return v_res_228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type(lean_object* v_r_229_, lean_object* v_a_230_, lean_object* v_a_231_, lean_object* v_a_232_, lean_object* v_a_233_, lean_object* v_a_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; 
v___x_237_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_r_229_, v_a_231_, v_a_232_, v_a_233_, v_a_234_, v_a_235_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___boxed(lean_object* v_r_238_, lean_object* v_a_239_, lean_object* v_a_240_, lean_object* v_a_241_, lean_object* v_a_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v___y_245_){
_start:
{
lean_object* v_res_246_; 
v_res_246_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type(v_r_238_, v_a_239_, v_a_240_, v_a_241_, v_a_242_, v_a_243_, v_a_244_);
lean_dec(v_a_244_);
lean_dec_ref(v_a_243_);
lean_dec(v_a_242_);
lean_dec_ref(v_a_241_);
lean_dec(v_a_240_);
lean_dec(v_a_239_);
return v_res_246_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0(lean_object* v_00_u03b2_247_, lean_object* v_m_248_, lean_object* v_a_249_, lean_object* v_b_250_){
_start:
{
lean_object* v___x_251_; 
v___x_251_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_m_248_, v_a_249_, v_b_250_);
return v___x_251_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0(lean_object* v_00_u03b2_252_, lean_object* v_a_253_, lean_object* v_x_254_){
_start:
{
uint8_t v___x_255_; 
v___x_255_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___redArg(v_a_253_, v_x_254_);
return v___x_255_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0___boxed(lean_object* v_00_u03b2_256_, lean_object* v_a_257_, lean_object* v_x_258_){
_start:
{
uint8_t v_res_259_; lean_object* v_r_260_; 
v_res_259_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__0(v_00_u03b2_256_, v_a_257_, v_x_258_);
lean_dec(v_x_258_);
lean_dec_ref(v_a_257_);
v_r_260_ = lean_box(v_res_259_);
return v_r_260_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1(lean_object* v_00_u03b2_261_, lean_object* v_data_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1___redArg(v_data_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2(lean_object* v_00_u03b2_264_, lean_object* v_a_265_, lean_object* v_b_266_, lean_object* v_x_267_){
_start:
{
lean_object* v___x_268_; 
v___x_268_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__2___redArg(v_a_265_, v_b_266_, v_x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_269_, lean_object* v_i_270_, lean_object* v_source_271_, lean_object* v_target_272_){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2___redArg(v_i_270_, v_source_271_, v_target_272_);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_274_, lean_object* v_x_275_, lean_object* v_x_276_){
_start:
{
lean_object* v___x_277_; 
v___x_277_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0_spec__1_spec__2_spec__3___redArg(v_x_275_, v_x_276_);
return v___x_277_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(lean_object* v_ctx_278_){
_start:
{
uint8_t v___x_279_; 
v___x_279_ = l_List_isEmpty___redArg(v_ctx_278_);
if (v___x_279_ == 0)
{
uint8_t v___x_280_; 
v___x_280_ = 1;
return v___x_280_;
}
else
{
uint8_t v___x_281_; 
v___x_281_ = 0;
return v___x_281_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check___boxed(lean_object* v_ctx_282_){
_start:
{
uint8_t v_res_283_; lean_object* v_r_284_; 
v_res_283_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_ctx_282_);
lean_dec(v_ctx_282_);
v_r_284_ = lean_box(v_res_283_);
return v_r_284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(lean_object* v_e_285_, lean_object* v_m_286_, lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_){
_start:
{
uint8_t v___x_294_; 
v___x_294_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_287_);
if (v___x_294_ == 0)
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
lean_dec_ref(v_m_286_);
v___x_295_ = lean_box(0);
v___x_296_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_296_, 0, v_e_285_);
lean_ctor_set(v___x_296_, 1, v___x_295_);
v___x_297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
return v___x_297_;
}
else
{
lean_object* v___x_298_; 
lean_dec_ref(v_e_285_);
lean_inc(v_a_292_);
lean_inc_ref(v_a_291_);
lean_inc(v_a_290_);
lean_inc_ref(v_a_289_);
lean_inc(v_a_288_);
lean_inc(v_a_287_);
v___x_298_ = lean_apply_7(v_m_286_, v_a_287_, v_a_288_, v_a_289_, v_a_290_, v_a_291_, v_a_292_, lean_box(0));
return v___x_298_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck___boxed(lean_object* v_e_299_, lean_object* v_m_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v___y_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(v_e_299_, v_m_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec(v_a_301_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg(lean_object* v_fvars_309_, lean_object* v_m_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v___x_317_; 
lean_inc(v_a_315_);
lean_inc_ref(v_a_314_);
lean_inc(v_a_313_);
lean_inc_ref(v_a_312_);
lean_inc(v_a_311_);
v___x_317_ = lean_apply_7(v_m_310_, v_fvars_309_, v_a_311_, v_a_312_, v_a_313_, v_a_314_, v_a_315_, lean_box(0));
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg___boxed(lean_object* v_fvars_318_, lean_object* v_m_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v___y_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___redArg(v_fvars_318_, v_m_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
return v_res_326_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars(lean_object* v_00_u03b1_327_, lean_object* v_fvars_328_, lean_object* v_m_329_, lean_object* v_a_330_, lean_object* v_a_331_, lean_object* v_a_332_, lean_object* v_a_333_, lean_object* v_a_334_, lean_object* v_a_335_){
_start:
{
lean_object* v___x_337_; 
lean_inc(v_a_335_);
lean_inc_ref(v_a_334_);
lean_inc(v_a_333_);
lean_inc_ref(v_a_332_);
lean_inc(v_a_331_);
v___x_337_ = lean_apply_7(v_m_329_, v_fvars_328_, v_a_331_, v_a_332_, v_a_333_, v_a_334_, v_a_335_, lean_box(0));
return v___x_337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___boxed(lean_object* v_00_u03b1_338_, lean_object* v_fvars_339_, lean_object* v_m_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_, lean_object* v_a_344_, lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v___y_347_){
_start:
{
lean_object* v_res_348_; 
v_res_348_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars(v_00_u03b1_338_, v_fvars_339_, v_m_340_, v_a_341_, v_a_342_, v_a_343_, v_a_344_, v_a_345_, v_a_346_);
lean_dec(v_a_346_);
lean_dec_ref(v_a_345_);
lean_dec(v_a_344_);
lean_dec_ref(v_a_343_);
lean_dec(v_a_342_);
lean_dec(v_a_341_);
return v_res_348_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(lean_object* v_a_349_){
_start:
{
lean_object* v___x_351_; lean_object* v_count_352_; lean_object* v_results_353_; lean_object* v___x_355_; uint8_t v_isShared_356_; uint8_t v_isSharedCheck_365_; 
v___x_351_ = lean_st_ref_take(v_a_349_);
v_count_352_ = lean_ctor_get(v___x_351_, 0);
v_results_353_ = lean_ctor_get(v___x_351_, 1);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_351_);
if (v_isSharedCheck_365_ == 0)
{
v___x_355_ = v___x_351_;
v_isShared_356_ = v_isSharedCheck_365_;
goto v_resetjp_354_;
}
else
{
lean_inc(v_results_353_);
lean_inc(v_count_352_);
lean_dec(v___x_351_);
v___x_355_ = lean_box(0);
v_isShared_356_ = v_isSharedCheck_365_;
goto v_resetjp_354_;
}
v_resetjp_354_:
{
lean_object* v___x_357_; lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_361_; 
v___x_357_ = lean_box(0);
v___x_358_ = lean_unsigned_to_nat(1u);
v___x_359_ = lean_nat_add(v_count_352_, v___x_358_);
lean_dec(v_count_352_);
if (v_isShared_356_ == 0)
{
lean_ctor_set(v___x_355_, 0, v___x_359_);
v___x_361_ = v___x_355_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_359_);
lean_ctor_set(v_reuseFailAlloc_364_, 1, v_results_353_);
v___x_361_ = v_reuseFailAlloc_364_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_st_ref_put(v_a_349_, v___x_361_);
v___x_363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_363_, 0, v___x_357_);
return v___x_363_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg___boxed(lean_object* v_a_366_, lean_object* v___y_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(v_a_366_);
lean_dec(v_a_366_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount(lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_, lean_object* v_a_373_, lean_object* v_a_374_){
_start:
{
lean_object* v___x_376_; 
v___x_376_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(v_a_370_);
return v___x_376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___boxed(lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v___y_383_){
_start:
{
lean_object* v_res_384_; 
v_res_384_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount(v_a_377_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
lean_dec(v_a_377_);
return v_res_384_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(lean_object* v_a_385_, lean_object* v_x_386_){
_start:
{
if (lean_obj_tag(v_x_386_) == 0)
{
lean_object* v___x_387_; 
v___x_387_ = lean_box(0);
return v___x_387_;
}
else
{
lean_object* v_key_388_; lean_object* v_value_389_; lean_object* v_tail_390_; uint8_t v___x_391_; 
v_key_388_ = lean_ctor_get(v_x_386_, 0);
v_value_389_ = lean_ctor_get(v_x_386_, 1);
v_tail_390_ = lean_ctor_get(v_x_386_, 2);
v___x_391_ = l_Lean_ExprStructEq_beq(v_key_388_, v_a_385_);
if (v___x_391_ == 0)
{
v_x_386_ = v_tail_390_;
goto _start;
}
else
{
lean_object* v___x_393_; 
lean_inc(v_value_389_);
v___x_393_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_393_, 0, v_value_389_);
return v___x_393_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_a_394_, lean_object* v_x_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(v_a_394_, v_x_395_);
lean_dec(v_x_395_);
lean_dec_ref(v_a_394_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(lean_object* v_m_397_, lean_object* v_a_398_){
_start:
{
lean_object* v_buckets_399_; lean_object* v___x_400_; uint64_t v___x_401_; uint64_t v___x_402_; uint64_t v___x_403_; uint64_t v_fold_404_; uint64_t v___x_405_; uint64_t v___x_406_; uint64_t v___x_407_; size_t v___x_408_; size_t v___x_409_; size_t v___x_410_; size_t v___x_411_; size_t v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v_buckets_399_ = lean_ctor_get(v_m_397_, 1);
v___x_400_ = lean_array_get_size(v_buckets_399_);
v___x_401_ = l_Lean_ExprStructEq_hash(v_a_398_);
v___x_402_ = 32ULL;
v___x_403_ = lean_uint64_shift_right(v___x_401_, v___x_402_);
v_fold_404_ = lean_uint64_xor(v___x_401_, v___x_403_);
v___x_405_ = 16ULL;
v___x_406_ = lean_uint64_shift_right(v_fold_404_, v___x_405_);
v___x_407_ = lean_uint64_xor(v_fold_404_, v___x_406_);
v___x_408_ = lean_uint64_to_usize(v___x_407_);
v___x_409_ = lean_usize_of_nat(v___x_400_);
v___x_410_ = ((size_t)1ULL);
v___x_411_ = lean_usize_sub(v___x_409_, v___x_410_);
v___x_412_ = lean_usize_land(v___x_408_, v___x_411_);
v___x_413_ = lean_array_uget_borrowed(v_buckets_399_, v___x_412_);
v___x_414_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(v_a_398_, v___x_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg___boxed(lean_object* v_m_415_, lean_object* v_a_416_){
_start:
{
lean_object* v_res_417_; 
v_res_417_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(v_m_415_, v_a_416_);
lean_dec_ref(v_a_416_);
lean_dec_ref(v_m_415_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(lean_object* v_e_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___x_421_; lean_object* v_results_422_; lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_421_ = lean_st_ref_get(v_a_419_);
v_results_422_ = lean_ctor_get(v___x_421_, 1);
lean_inc_ref(v_results_422_);
lean_dec(v___x_421_);
v___x_423_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(v_results_422_, v_e_418_);
lean_dec_ref(v_results_422_);
v___x_424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_424_, 0, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg___boxed(lean_object* v_e_425_, lean_object* v_a_426_, lean_object* v___y_427_){
_start:
{
lean_object* v_res_428_; 
v_res_428_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_425_, v_a_426_);
lean_dec(v_a_426_);
lean_dec_ref(v_e_425_);
return v_res_428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f(lean_object* v_e_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_429_, v_a_431_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___boxed(lean_object* v_e_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v___y_445_){
_start:
{
lean_object* v_res_446_; 
v_res_446_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f(v_e_438_, v_a_439_, v_a_440_, v_a_441_, v_a_442_, v_a_443_, v_a_444_);
lean_dec(v_a_444_);
lean_dec_ref(v_a_443_);
lean_dec(v_a_442_);
lean_dec_ref(v_a_441_);
lean_dec(v_a_440_);
lean_dec(v_a_439_);
lean_dec_ref(v_e_438_);
return v_res_446_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0(lean_object* v_00_u03b2_447_, lean_object* v_m_448_, lean_object* v_a_449_){
_start:
{
lean_object* v___x_450_; 
v___x_450_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___redArg(v_m_448_, v_a_449_);
return v___x_450_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0___boxed(lean_object* v_00_u03b2_451_, lean_object* v_m_452_, lean_object* v_a_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0(v_00_u03b2_451_, v_m_452_, v_a_453_);
lean_dec_ref(v_a_453_);
lean_dec_ref(v_m_452_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0(lean_object* v_00_u03b2_455_, lean_object* v_a_456_, lean_object* v_x_457_){
_start:
{
lean_object* v___x_458_; 
v___x_458_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___redArg(v_a_456_, v_x_457_);
return v___x_458_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_459_, lean_object* v_a_460_, lean_object* v_x_461_){
_start:
{
lean_object* v_res_462_; 
v_res_462_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f_spec__0_spec__0(v_00_u03b2_459_, v_a_460_, v_x_461_);
lean_dec(v_x_461_);
lean_dec_ref(v_a_460_);
return v_res_462_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(lean_object* v_e_463_, lean_object* v_m_464_, lean_object* v_a_465_, lean_object* v_a_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_){
_start:
{
lean_object* v_r_473_; lean_object* v___y_474_; lean_object* v___x_488_; lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_503_; 
v___x_488_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_463_, v_a_466_);
v_a_489_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_503_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_503_ == 0)
{
v___x_491_ = v___x_488_;
v_isShared_492_ = v_isSharedCheck_503_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_dec(v___x_488_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_503_;
goto v_resetjp_490_;
}
v___jp_472_:
{
lean_object* v___x_475_; lean_object* v_count_476_; lean_object* v_results_477_; lean_object* v___x_479_; uint8_t v_isShared_480_; uint8_t v_isSharedCheck_487_; 
v___x_475_ = lean_st_ref_take(v___y_474_);
v_count_476_ = lean_ctor_get(v___x_475_, 0);
v_results_477_ = lean_ctor_get(v___x_475_, 1);
v_isSharedCheck_487_ = !lean_is_exclusive(v___x_475_);
if (v_isSharedCheck_487_ == 0)
{
v___x_479_ = v___x_475_;
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
else
{
lean_inc(v_results_477_);
lean_inc(v_count_476_);
lean_dec(v___x_475_);
v___x_479_ = lean_box(0);
v_isShared_480_ = v_isSharedCheck_487_;
goto v_resetjp_478_;
}
v_resetjp_478_:
{
lean_object* v___x_481_; lean_object* v___x_483_; 
lean_inc_ref(v_r_473_);
v___x_481_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_results_477_, v_e_463_, v_r_473_);
if (v_isShared_480_ == 0)
{
lean_ctor_set(v___x_479_, 1, v___x_481_);
v___x_483_ = v___x_479_;
goto v_reusejp_482_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_count_476_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_481_);
v___x_483_ = v_reuseFailAlloc_486_;
goto v_reusejp_482_;
}
v_reusejp_482_:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = lean_st_ref_put(v___y_474_, v___x_483_);
v___x_485_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_485_, 0, v_r_473_);
return v___x_485_;
}
}
}
v_resetjp_490_:
{
if (lean_obj_tag(v_a_489_) == 1)
{
lean_object* v_val_493_; lean_object* v___x_495_; 
lean_dec_ref(v_m_464_);
lean_dec_ref(v_e_463_);
v_val_493_ = lean_ctor_get(v_a_489_, 0);
lean_inc(v_val_493_);
lean_dec_ref_known(v_a_489_, 1);
if (v_isShared_492_ == 0)
{
lean_ctor_set(v___x_491_, 0, v_val_493_);
v___x_495_ = v___x_491_;
goto v_reusejp_494_;
}
else
{
lean_object* v_reuseFailAlloc_496_; 
v_reuseFailAlloc_496_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_496_, 0, v_val_493_);
v___x_495_ = v_reuseFailAlloc_496_;
goto v_reusejp_494_;
}
v_reusejp_494_:
{
return v___x_495_;
}
}
else
{
uint32_t v___x_497_; uint8_t v___x_498_; 
lean_del_object(v___x_491_);
lean_dec(v_a_489_);
v___x_497_ = 2;
v___x_498_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_463_, v___x_497_);
if (v___x_498_ == 0)
{
lean_object* v___x_499_; 
lean_inc(v_a_470_);
lean_inc_ref(v_a_469_);
lean_inc(v_a_468_);
lean_inc_ref(v_a_467_);
lean_inc(v_a_466_);
lean_inc(v_a_465_);
v___x_499_ = lean_apply_7(v_m_464_, v_a_465_, v_a_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, lean_box(0));
if (lean_obj_tag(v___x_499_) == 0)
{
lean_object* v_a_500_; 
v_a_500_ = lean_ctor_get(v___x_499_, 0);
lean_inc(v_a_500_);
lean_dec_ref_known(v___x_499_, 1);
v_r_473_ = v_a_500_;
v___y_474_ = v_a_466_;
goto v___jp_472_;
}
else
{
lean_dec_ref(v_e_463_);
return v___x_499_;
}
}
else
{
lean_object* v___x_501_; lean_object* v___x_502_; 
lean_dec_ref(v_m_464_);
v___x_501_ = lean_box(0);
lean_inc_ref(v_e_463_);
v___x_502_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_502_, 0, v_e_463_);
lean_ctor_set(v___x_502_, 1, v___x_501_);
v_r_473_ = v___x_502_;
v___y_474_ = v_a_466_;
goto v___jp_472_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache___boxed(lean_object* v_e_504_, lean_object* v_m_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_, lean_object* v_a_511_, lean_object* v___y_512_){
_start:
{
lean_object* v_res_513_; 
v_res_513_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_504_, v_m_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_, v_a_511_);
lean_dec(v_a_511_);
lean_dec_ref(v_a_510_);
lean_dec(v_a_509_);
lean_dec_ref(v_a_508_);
lean_dec(v_a_507_);
lean_dec(v_a_506_);
return v_res_513_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(lean_object* v_e_514_, lean_object* v_a_515_){
_start:
{
uint8_t v___x_517_; 
v___x_517_ = l_Lean_Expr_hasLooseBVars(v_e_514_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
v___x_518_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCache_x3f___redArg(v_e_514_, v_a_515_);
return v___x_518_;
}
else
{
lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_519_ = lean_box(0);
v___x_520_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg___boxed(lean_object* v_e_521_, lean_object* v_a_522_, lean_object* v___y_523_){
_start:
{
lean_object* v_res_524_; 
v_res_524_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(v_e_521_, v_a_522_);
lean_dec(v_a_522_);
lean_dec_ref(v_e_521_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f(lean_object* v_e_525_, lean_object* v_a_526_, lean_object* v_a_527_, lean_object* v_a_528_, lean_object* v_a_529_, lean_object* v_a_530_, lean_object* v_a_531_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(v_e_525_, v_a_527_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___boxed(lean_object* v_e_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_, lean_object* v___y_541_){
_start:
{
lean_object* v_res_542_; 
v_res_542_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f(v_e_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
lean_dec(v_a_540_);
lean_dec_ref(v_a_539_);
lean_dec(v_a_538_);
lean_dec_ref(v_a_537_);
lean_dec(v_a_536_);
lean_dec(v_a_535_);
lean_dec_ref(v_e_534_);
return v_res_542_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(lean_object* v_e_543_, lean_object* v_a_544_, lean_object* v_a_545_, lean_object* v_a_546_){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = l_Lean_Expr_fvarId_x21(v_e_543_);
lean_inc(v___x_548_);
v___x_549_ = l_Lean_FVarId_findDecl_x3f___redArg(v___x_548_, v_a_544_);
if (lean_obj_tag(v___x_549_) == 0)
{
lean_object* v_a_550_; lean_object* v___x_552_; uint8_t v_isShared_553_; uint8_t v_isSharedCheck_568_; 
v_a_550_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_568_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_568_ == 0)
{
v___x_552_ = v___x_549_;
v_isShared_553_ = v_isSharedCheck_568_;
goto v_resetjp_551_;
}
else
{
lean_inc(v_a_550_);
lean_dec(v___x_549_);
v___x_552_ = lean_box(0);
v_isShared_553_ = v_isSharedCheck_568_;
goto v_resetjp_551_;
}
v_resetjp_551_:
{
if (lean_obj_tag(v_a_550_) == 1)
{
lean_object* v_val_554_; lean_object* v___x_556_; uint8_t v_isShared_557_; uint8_t v_isSharedCheck_566_; 
lean_dec(v___x_548_);
v_val_554_ = lean_ctor_get(v_a_550_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v_a_550_);
if (v_isSharedCheck_566_ == 0)
{
v___x_556_ = v_a_550_;
v_isShared_557_ = v_isSharedCheck_566_;
goto v_resetjp_555_;
}
else
{
lean_inc(v_val_554_);
lean_dec(v_a_550_);
v___x_556_ = lean_box(0);
v_isShared_557_ = v_isSharedCheck_566_;
goto v_resetjp_555_;
}
v_resetjp_555_:
{
lean_object* v___x_558_; lean_object* v___x_560_; 
v___x_558_ = l_Lean_LocalDecl_type(v_val_554_);
lean_dec(v_val_554_);
if (v_isShared_557_ == 0)
{
lean_ctor_set(v___x_556_, 0, v___x_558_);
v___x_560_ = v___x_556_;
goto v_reusejp_559_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v___x_558_);
v___x_560_ = v_reuseFailAlloc_565_;
goto v_reusejp_559_;
}
v_reusejp_559_:
{
lean_object* v___x_561_; lean_object* v___x_563_; 
v___x_561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_561_, 0, v_e_543_);
lean_ctor_set(v___x_561_, 1, v___x_560_);
if (v_isShared_553_ == 0)
{
lean_ctor_set(v___x_552_, 0, v___x_561_);
v___x_563_ = v___x_552_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v___x_561_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
}
}
else
{
lean_object* v___x_567_; 
lean_del_object(v___x_552_);
lean_dec(v_a_550_);
lean_dec_ref(v_e_543_);
v___x_567_ = l_Lean_FVarId_throwUnknown___redArg(v___x_548_, v_a_545_, v_a_546_);
return v___x_567_;
}
}
}
else
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_576_; 
lean_dec(v___x_548_);
lean_dec_ref(v_e_543_);
v_a_569_ = lean_ctor_get(v___x_549_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v___x_549_);
if (v_isSharedCheck_576_ == 0)
{
v___x_571_ = v___x_549_;
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_549_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_576_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_a_569_);
v___x_574_ = v_reuseFailAlloc_575_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
return v___x_574_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg___boxed(lean_object* v_e_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v___y_581_){
_start:
{
lean_object* v_res_582_; 
v_res_582_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(v_e_577_, v_a_578_, v_a_579_, v_a_580_);
lean_dec(v_a_580_);
lean_dec_ref(v_a_579_);
lean_dec_ref(v_a_578_);
return v_res_582_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar(lean_object* v_e_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_){
_start:
{
lean_object* v___x_589_; 
v___x_589_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(v_e_583_, v_a_584_, v_a_586_, v_a_587_);
return v___x_589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___boxed(lean_object* v_e_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v___y_595_){
_start:
{
lean_object* v_res_596_; 
v_res_596_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar(v_e_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
return v_res_596_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(lean_object* v_e_597_, lean_object* v___y_598_){
_start:
{
uint8_t v___x_600_; 
v___x_600_ = l_Lean_Expr_hasMVar(v_e_597_);
if (v___x_600_ == 0)
{
lean_object* v___x_601_; 
v___x_601_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_601_, 0, v_e_597_);
return v___x_601_;
}
else
{
lean_object* v___x_602_; lean_object* v_mctx_603_; lean_object* v___x_604_; lean_object* v_fst_605_; lean_object* v_snd_606_; lean_object* v___x_607_; lean_object* v_cache_608_; lean_object* v_zetaDeltaFVarIds_609_; lean_object* v_postponed_610_; lean_object* v_diag_611_; lean_object* v___x_613_; uint8_t v_isShared_614_; uint8_t v_isSharedCheck_620_; 
v___x_602_ = lean_st_ref_get(v___y_598_);
v_mctx_603_ = lean_ctor_get(v___x_602_, 0);
lean_inc_ref(v_mctx_603_);
lean_dec(v___x_602_);
v___x_604_ = l_Lean_instantiateMVarsCore(v_mctx_603_, v_e_597_);
v_fst_605_ = lean_ctor_get(v___x_604_, 0);
lean_inc(v_fst_605_);
v_snd_606_ = lean_ctor_get(v___x_604_, 1);
lean_inc(v_snd_606_);
lean_dec_ref(v___x_604_);
v___x_607_ = lean_st_ref_take(v___y_598_);
v_cache_608_ = lean_ctor_get(v___x_607_, 1);
v_zetaDeltaFVarIds_609_ = lean_ctor_get(v___x_607_, 2);
v_postponed_610_ = lean_ctor_get(v___x_607_, 3);
v_diag_611_ = lean_ctor_get(v___x_607_, 4);
v_isSharedCheck_620_ = !lean_is_exclusive(v___x_607_);
if (v_isSharedCheck_620_ == 0)
{
lean_object* v_unused_621_; 
v_unused_621_ = lean_ctor_get(v___x_607_, 0);
lean_dec(v_unused_621_);
v___x_613_ = v___x_607_;
v_isShared_614_ = v_isSharedCheck_620_;
goto v_resetjp_612_;
}
else
{
lean_inc(v_diag_611_);
lean_inc(v_postponed_610_);
lean_inc(v_zetaDeltaFVarIds_609_);
lean_inc(v_cache_608_);
lean_dec(v___x_607_);
v___x_613_ = lean_box(0);
v_isShared_614_ = v_isSharedCheck_620_;
goto v_resetjp_612_;
}
v_resetjp_612_:
{
lean_object* v___x_616_; 
if (v_isShared_614_ == 0)
{
lean_ctor_set(v___x_613_, 0, v_snd_606_);
v___x_616_ = v___x_613_;
goto v_reusejp_615_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_snd_606_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_cache_608_);
lean_ctor_set(v_reuseFailAlloc_619_, 2, v_zetaDeltaFVarIds_609_);
lean_ctor_set(v_reuseFailAlloc_619_, 3, v_postponed_610_);
lean_ctor_set(v_reuseFailAlloc_619_, 4, v_diag_611_);
v___x_616_ = v_reuseFailAlloc_619_;
goto v_reusejp_615_;
}
v_reusejp_615_:
{
lean_object* v___x_617_; lean_object* v___x_618_; 
v___x_617_ = lean_st_ref_put(v___y_598_, v___x_616_);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v_fst_605_);
return v___x_618_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg___boxed(lean_object* v_e_622_, lean_object* v___y_623_, lean_object* v___y_624_){
_start:
{
lean_object* v_res_625_; 
v_res_625_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(v_e_622_, v___y_623_);
lean_dec(v___y_623_);
return v_res_625_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0(lean_object* v_e_626_, lean_object* v___y_627_, lean_object* v___y_628_, lean_object* v___y_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(v_e_626_, v___y_630_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___boxed(lean_object* v_e_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v_res_643_; 
v_res_643_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0(v_e_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_, v___y_640_, v___y_641_);
lean_dec(v___y_641_);
lean_dec_ref(v___y_640_);
lean_dec(v___y_639_);
lean_dec_ref(v___y_638_);
lean_dec(v___y_637_);
lean_dec(v___y_636_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(lean_object* v_as_644_, size_t v_sz_645_, size_t v_i_646_, lean_object* v_b_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_){
_start:
{
lean_object* v_a_654_; uint8_t v___x_658_; 
v___x_658_ = lean_usize_dec_lt(v_i_646_, v_sz_645_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; 
v___x_659_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_659_, 0, v_b_647_);
return v___x_659_;
}
else
{
lean_object* v_fst_660_; lean_object* v_snd_661_; lean_object* v___x_663_; uint8_t v_isShared_664_; uint8_t v_isSharedCheck_709_; 
v_fst_660_ = lean_ctor_get(v_b_647_, 0);
v_snd_661_ = lean_ctor_get(v_b_647_, 1);
v_isSharedCheck_709_ = !lean_is_exclusive(v_b_647_);
if (v_isSharedCheck_709_ == 0)
{
v___x_663_ = v_b_647_;
v_isShared_664_ = v_isSharedCheck_709_;
goto v_resetjp_662_;
}
else
{
lean_inc(v_snd_661_);
lean_inc(v_fst_660_);
lean_dec(v_b_647_);
v___x_663_ = lean_box(0);
v_isShared_664_ = v_isSharedCheck_709_;
goto v_resetjp_662_;
}
v_resetjp_662_:
{
lean_object* v_a_665_; uint8_t v___x_666_; 
v_a_665_ = lean_array_uget_borrowed(v_as_644_, v_i_646_);
v___x_666_ = l_Lean_FVarIdSet_contains(v_fst_660_, v_a_665_);
if (v___x_666_ == 0)
{
lean_object* v___x_667_; lean_object* v___y_669_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___x_686_; 
lean_inc_n(v_a_665_, 2);
v___x_667_ = l_Lean_FVarIdSet_insert(v_fst_660_, v_a_665_);
v___x_686_ = l_Lean_FVarId_isLetVar___redArg(v_a_665_, v___x_666_, v___y_648_, v___y_650_, v___y_651_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; uint8_t v___x_688_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_a_687_);
lean_dec_ref_known(v___x_686_, 1);
v___x_688_ = lean_unbox(v_a_687_);
lean_dec(v_a_687_);
if (v___x_688_ == 0)
{
v___y_669_ = v___y_648_;
v___y_670_ = v___y_650_;
v___y_671_ = v___y_651_;
goto v___jp_668_;
}
else
{
lean_object* v___x_689_; 
lean_inc(v_a_665_);
v___x_689_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_a_665_, v___y_649_);
if (lean_obj_tag(v___x_689_) == 0)
{
lean_dec_ref_known(v___x_689_, 1);
v___y_669_ = v___y_648_;
v___y_670_ = v___y_650_;
v___y_671_ = v___y_651_;
goto v___jp_668_;
}
else
{
lean_object* v_a_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_697_; 
lean_dec(v___x_667_);
lean_del_object(v___x_663_);
lean_dec(v_snd_661_);
v_a_690_ = lean_ctor_get(v___x_689_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___x_689_);
if (v_isSharedCheck_697_ == 0)
{
v___x_692_ = v___x_689_;
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_a_690_);
lean_dec(v___x_689_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_697_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_695_; 
if (v_isShared_693_ == 0)
{
v___x_695_ = v___x_692_;
goto v_reusejp_694_;
}
else
{
lean_object* v_reuseFailAlloc_696_; 
v_reuseFailAlloc_696_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_696_, 0, v_a_690_);
v___x_695_ = v_reuseFailAlloc_696_;
goto v_reusejp_694_;
}
v_reusejp_694_:
{
return v___x_695_;
}
}
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec(v___x_667_);
lean_del_object(v___x_663_);
lean_dec(v_snd_661_);
v_a_698_ = lean_ctor_get(v___x_686_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_686_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___x_686_);
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
v___jp_668_:
{
lean_object* v___x_672_; 
lean_inc(v_a_665_);
v___x_672_ = l_Lean_FVarId_getType___redArg(v_a_665_, v___y_669_, v___y_670_, v___y_671_);
if (lean_obj_tag(v___x_672_) == 0)
{
lean_object* v_a_673_; lean_object* v___x_674_; lean_object* v___x_676_; 
v_a_673_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_a_673_);
lean_dec_ref_known(v___x_672_, 1);
v___x_674_ = lean_array_push(v_snd_661_, v_a_673_);
if (v_isShared_664_ == 0)
{
lean_ctor_set(v___x_663_, 1, v___x_674_);
lean_ctor_set(v___x_663_, 0, v___x_667_);
v___x_676_ = v___x_663_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v___x_667_);
lean_ctor_set(v_reuseFailAlloc_677_, 1, v___x_674_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
v_a_654_ = v___x_676_;
goto v___jp_653_;
}
}
else
{
lean_object* v_a_678_; lean_object* v___x_680_; uint8_t v_isShared_681_; uint8_t v_isSharedCheck_685_; 
lean_dec(v___x_667_);
lean_del_object(v___x_663_);
lean_dec(v_snd_661_);
v_a_678_ = lean_ctor_get(v___x_672_, 0);
v_isSharedCheck_685_ = !lean_is_exclusive(v___x_672_);
if (v_isSharedCheck_685_ == 0)
{
v___x_680_ = v___x_672_;
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
else
{
lean_inc(v_a_678_);
lean_dec(v___x_672_);
v___x_680_ = lean_box(0);
v_isShared_681_ = v_isSharedCheck_685_;
goto v_resetjp_679_;
}
v_resetjp_679_:
{
lean_object* v___x_683_; 
if (v_isShared_681_ == 0)
{
v___x_683_ = v___x_680_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_684_; 
v_reuseFailAlloc_684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_684_, 0, v_a_678_);
v___x_683_ = v_reuseFailAlloc_684_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
return v___x_683_;
}
}
}
}
}
else
{
lean_object* v___x_707_; 
if (v_isShared_664_ == 0)
{
v___x_707_ = v___x_663_;
goto v_reusejp_706_;
}
else
{
lean_object* v_reuseFailAlloc_708_; 
v_reuseFailAlloc_708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_708_, 0, v_fst_660_);
lean_ctor_set(v_reuseFailAlloc_708_, 1, v_snd_661_);
v___x_707_ = v_reuseFailAlloc_708_;
goto v_reusejp_706_;
}
v_reusejp_706_:
{
v_a_654_ = v___x_707_;
goto v___jp_653_;
}
}
}
}
v___jp_653_:
{
size_t v___x_655_; size_t v___x_656_; 
v___x_655_ = ((size_t)1ULL);
v___x_656_ = lean_usize_add(v_i_646_, v___x_655_);
v_i_646_ = v___x_656_;
v_b_647_ = v_a_654_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg___boxed(lean_object* v_as_710_, lean_object* v_sz_711_, lean_object* v_i_712_, lean_object* v_b_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_, lean_object* v___y_717_, lean_object* v___y_718_){
_start:
{
size_t v_sz_boxed_719_; size_t v_i_boxed_720_; lean_object* v_res_721_; 
v_sz_boxed_719_ = lean_unbox_usize(v_sz_711_);
lean_dec(v_sz_711_);
v_i_boxed_720_ = lean_unbox_usize(v_i_712_);
lean_dec(v_i_712_);
v_res_721_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(v_as_710_, v_sz_boxed_719_, v_i_boxed_720_, v_b_713_, v___y_714_, v___y_715_, v___y_716_, v___y_717_);
lean_dec(v___y_717_);
lean_dec_ref(v___y_716_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec_ref(v_as_710_);
return v_res_721_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; 
v___x_722_ = lean_box(0);
v___x_723_ = lean_unsigned_to_nat(16u);
v___x_724_ = lean_mk_array(v___x_723_, v___x_722_);
return v___x_724_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
v___x_725_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__0, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__0_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__0);
v___x_726_ = lean_unsigned_to_nat(0u);
v___x_727_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_727_, 0, v___x_726_);
lean_ctor_set(v___x_727_, 1, v___x_725_);
return v___x_727_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_730_; lean_object* v_visited_731_; lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_730_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__2));
v_visited_731_ = lean_box(1);
v___x_732_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1);
v___x_733_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_733_, 0, v___x_732_);
lean_ctor_set(v___x_733_, 1, v_visited_731_);
lean_ctor_set(v___x_733_, 2, v___x_730_);
return v___x_733_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(lean_object* v_a_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_){
_start:
{
lean_object* v_fst_742_; lean_object* v_snd_743_; lean_object* v___x_745_; uint8_t v_isShared_746_; uint8_t v_isSharedCheck_789_; 
v_fst_742_ = lean_ctor_get(v_a_734_, 0);
v_snd_743_ = lean_ctor_get(v_a_734_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_a_734_);
if (v_isSharedCheck_789_ == 0)
{
v___x_745_ = v_a_734_;
v_isShared_746_ = v_isSharedCheck_789_;
goto v_resetjp_744_;
}
else
{
lean_inc(v_snd_743_);
lean_inc(v_fst_742_);
lean_dec(v_a_734_);
v___x_745_ = lean_box(0);
v_isShared_746_ = v_isSharedCheck_789_;
goto v_resetjp_744_;
}
v_resetjp_744_:
{
lean_object* v___x_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_747_ = lean_array_get_size(v_snd_743_);
v___x_748_ = lean_unsigned_to_nat(0u);
v___x_749_ = lean_nat_dec_eq(v___x_747_, v___x_748_);
if (v___x_749_ == 0)
{
lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; 
v___x_750_ = l_Lean_instInhabitedExpr;
v___x_751_ = lean_unsigned_to_nat(1u);
v___x_752_ = lean_nat_sub(v___x_747_, v___x_751_);
v___x_753_ = lean_array_get_borrowed(v___x_750_, v_snd_743_, v___x_752_);
lean_dec(v___x_752_);
lean_inc(v___x_753_);
v___x_754_ = l_Lean_instantiateMVars___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__0___redArg(v___x_753_, v___y_738_);
if (lean_obj_tag(v___x_754_) == 0)
{
lean_object* v_a_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v_fvarIds_758_; lean_object* v___x_759_; lean_object* v___x_761_; 
v_a_755_ = lean_ctor_get(v___x_754_, 0);
lean_inc(v_a_755_);
lean_dec_ref_known(v___x_754_, 1);
v___x_756_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__3);
v___x_757_ = l_Lean_collectFVars(v___x_756_, v_a_755_);
v_fvarIds_758_ = lean_ctor_get(v___x_757_, 2);
lean_inc_ref(v_fvarIds_758_);
lean_dec_ref(v___x_757_);
v___x_759_ = lean_array_pop(v_snd_743_);
if (v_isShared_746_ == 0)
{
lean_ctor_set(v___x_745_, 1, v___x_759_);
v___x_761_ = v___x_745_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_fst_742_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v___x_759_);
v___x_761_ = v_reuseFailAlloc_776_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
size_t v_sz_762_; size_t v___x_763_; lean_object* v___x_764_; 
v_sz_762_ = lean_array_size(v_fvarIds_758_);
v___x_763_ = ((size_t)0ULL);
v___x_764_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(v_fvarIds_758_, v_sz_762_, v___x_763_, v___x_761_, v___y_737_, v___y_738_, v___y_739_, v___y_740_);
lean_dec_ref(v_fvarIds_758_);
if (lean_obj_tag(v___x_764_) == 0)
{
lean_object* v_a_765_; lean_object* v_fst_766_; lean_object* v_snd_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_775_; 
v_a_765_ = lean_ctor_get(v___x_764_, 0);
lean_inc(v_a_765_);
lean_dec_ref_known(v___x_764_, 1);
v_fst_766_ = lean_ctor_get(v_a_765_, 0);
v_snd_767_ = lean_ctor_get(v_a_765_, 1);
v_isSharedCheck_775_ = !lean_is_exclusive(v_a_765_);
if (v_isSharedCheck_775_ == 0)
{
v___x_769_ = v_a_765_;
v_isShared_770_ = v_isSharedCheck_775_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_snd_767_);
lean_inc(v_fst_766_);
lean_dec(v_a_765_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_775_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_774_; 
v_reuseFailAlloc_774_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_774_, 0, v_fst_766_);
lean_ctor_set(v_reuseFailAlloc_774_, 1, v_snd_767_);
v___x_772_ = v_reuseFailAlloc_774_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
v_a_734_ = v___x_772_;
goto _start;
}
}
}
else
{
return v___x_764_;
}
}
}
else
{
lean_object* v_a_777_; lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_784_; 
lean_del_object(v___x_745_);
lean_dec(v_snd_743_);
lean_dec(v_fst_742_);
v_a_777_ = lean_ctor_get(v___x_754_, 0);
v_isSharedCheck_784_ = !lean_is_exclusive(v___x_754_);
if (v_isSharedCheck_784_ == 0)
{
v___x_779_ = v___x_754_;
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
else
{
lean_inc(v_a_777_);
lean_dec(v___x_754_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_784_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_782_; 
if (v_isShared_780_ == 0)
{
v___x_782_ = v___x_779_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_783_; 
v_reuseFailAlloc_783_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_783_, 0, v_a_777_);
v___x_782_ = v_reuseFailAlloc_783_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
return v___x_782_;
}
}
}
}
else
{
lean_object* v___x_786_; 
if (v_isShared_746_ == 0)
{
v___x_786_ = v___x_745_;
goto v_reusejp_785_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v_fst_742_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v_snd_743_);
v___x_786_ = v_reuseFailAlloc_788_;
goto v_reusejp_785_;
}
v_reusejp_785_:
{
lean_object* v___x_787_; 
v___x_787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_787_, 0, v___x_786_);
return v___x_787_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___boxed(lean_object* v_a_790_, lean_object* v___y_791_, lean_object* v___y_792_, lean_object* v___y_793_, lean_object* v___y_794_, lean_object* v___y_795_, lean_object* v___y_796_, lean_object* v___y_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(v_a_790_, v___y_791_, v___y_792_, v___y_793_, v___y_794_, v___y_795_, v___y_796_);
lean_dec(v___y_796_);
lean_dec_ref(v___y_795_);
lean_dec(v___y_794_);
lean_dec_ref(v___y_793_);
lean_dec(v___y_792_);
lean_dec(v___y_791_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(lean_object* v_e_799_, lean_object* v_a_800_, lean_object* v_a_801_, lean_object* v_a_802_, lean_object* v_a_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
lean_object* v_visited_807_; lean_object* v___x_808_; lean_object* v___x_809_; lean_object* v_worklist_810_; lean_object* v___x_811_; lean_object* v___x_812_; 
v_visited_807_ = lean_box(1);
v___x_808_ = lean_unsigned_to_nat(1u);
v___x_809_ = lean_mk_empty_array_with_capacity(v___x_808_);
v_worklist_810_ = lean_array_push(v___x_809_, v_e_799_);
v___x_811_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_811_, 0, v_visited_807_);
lean_ctor_set(v___x_811_, 1, v_worklist_810_);
v___x_812_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(v___x_811_, v_a_800_, v_a_801_, v_a_802_, v_a_803_, v_a_804_, v_a_805_);
if (lean_obj_tag(v___x_812_) == 0)
{
lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_820_; 
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_820_ == 0)
{
lean_object* v_unused_821_; 
v_unused_821_ = lean_ctor_get(v___x_812_, 0);
lean_dec(v_unused_821_);
v___x_814_ = v___x_812_;
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
else
{
lean_dec(v___x_812_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_820_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
lean_object* v___x_816_; lean_object* v___x_818_; 
v___x_816_ = lean_box(0);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_816_);
v___x_818_ = v___x_814_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v___x_816_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
else
{
lean_object* v_a_822_; lean_object* v___x_824_; uint8_t v_isShared_825_; uint8_t v_isSharedCheck_829_; 
v_a_822_ = lean_ctor_get(v___x_812_, 0);
v_isSharedCheck_829_ = !lean_is_exclusive(v___x_812_);
if (v_isSharedCheck_829_ == 0)
{
v___x_824_ = v___x_812_;
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
else
{
lean_inc(v_a_822_);
lean_dec(v___x_812_);
v___x_824_ = lean_box(0);
v_isShared_825_ = v_isSharedCheck_829_;
goto v_resetjp_823_;
}
v_resetjp_823_:
{
lean_object* v___x_827_; 
if (v_isShared_825_ == 0)
{
v___x_827_ = v___x_824_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_828_; 
v_reuseFailAlloc_828_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_828_, 0, v_a_822_);
v___x_827_ = v_reuseFailAlloc_828_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
return v___x_827_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr___boxed(lean_object* v_e_830_, lean_object* v_a_831_, lean_object* v_a_832_, lean_object* v_a_833_, lean_object* v_a_834_, lean_object* v_a_835_, lean_object* v_a_836_, lean_object* v___y_837_){
_start:
{
lean_object* v_res_838_; 
v_res_838_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(v_e_830_, v_a_831_, v_a_832_, v_a_833_, v_a_834_, v_a_835_, v_a_836_);
lean_dec(v_a_836_);
lean_dec_ref(v_a_835_);
lean_dec(v_a_834_);
lean_dec_ref(v_a_833_);
lean_dec(v_a_832_);
lean_dec(v_a_831_);
return v_res_838_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1(lean_object* v_as_839_, size_t v_sz_840_, size_t v_i_841_, lean_object* v_b_842_, lean_object* v___y_843_, lean_object* v___y_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v___x_850_; 
v___x_850_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___redArg(v_as_839_, v_sz_840_, v_i_841_, v_b_842_, v___y_845_, v___y_846_, v___y_847_, v___y_848_);
return v___x_850_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1___boxed(lean_object* v_as_851_, lean_object* v_sz_852_, lean_object* v_i_853_, lean_object* v_b_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_, lean_object* v___y_861_){
_start:
{
size_t v_sz_boxed_862_; size_t v_i_boxed_863_; lean_object* v_res_864_; 
v_sz_boxed_862_ = lean_unbox_usize(v_sz_852_);
lean_dec(v_sz_852_);
v_i_boxed_863_ = lean_unbox_usize(v_i_853_);
lean_dec(v_i_853_);
v_res_864_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__1(v_as_851_, v_sz_boxed_862_, v_i_boxed_863_, v_b_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
lean_dec(v___y_860_);
lean_dec_ref(v___y_859_);
lean_dec(v___y_858_);
lean_dec_ref(v___y_857_);
lean_dec(v___y_856_);
lean_dec(v___y_855_);
lean_dec_ref(v_as_851_);
return v_res_864_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2(lean_object* v_inst_865_, lean_object* v_a_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_, lean_object* v___y_870_, lean_object* v___y_871_, lean_object* v___y_872_){
_start:
{
lean_object* v___x_874_; 
v___x_874_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg(v_a_866_, v___y_867_, v___y_868_, v___y_869_, v___y_870_, v___y_871_, v___y_872_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___boxed(lean_object* v_inst_875_, lean_object* v_a_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_, lean_object* v___y_882_, lean_object* v___y_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2(v_inst_875_, v_a_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_, v___y_881_, v___y_882_);
lean_dec(v___y_882_);
lean_dec_ref(v___y_881_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec(v___y_877_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(lean_object* v_mvarId_885_, lean_object* v___y_886_){
_start:
{
lean_object* v___x_888_; lean_object* v_mctx_889_; lean_object* v___x_890_; lean_object* v___x_891_; 
v___x_888_ = lean_st_ref_get(v___y_886_);
v_mctx_889_ = lean_ctor_get(v___x_888_, 0);
lean_inc_ref(v_mctx_889_);
lean_dec(v___x_888_);
v___x_890_ = l_Lean_MetavarContext_getDelayedMVarAssignmentCore_x3f(v_mctx_889_, v_mvarId_885_);
lean_dec_ref(v_mctx_889_);
v___x_891_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_891_, 0, v___x_890_);
return v___x_891_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg___boxed(lean_object* v_mvarId_892_, lean_object* v___y_893_, lean_object* v___y_894_){
_start:
{
lean_object* v_res_895_; 
v_res_895_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(v_mvarId_892_, v___y_893_);
lean_dec(v___y_893_);
lean_dec(v_mvarId_892_);
return v_res_895_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0(lean_object* v_mvarId_896_, lean_object* v___y_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_, lean_object* v___y_902_){
_start:
{
lean_object* v___x_904_; 
v___x_904_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(v_mvarId_896_, v___y_900_);
return v___x_904_;
}
}
LEAN_EXPORT lean_object* l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___boxed(lean_object* v_mvarId_905_, lean_object* v___y_906_, lean_object* v___y_907_, lean_object* v___y_908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_){
_start:
{
lean_object* v_res_913_; 
v_res_913_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0(v_mvarId_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
lean_dec(v___y_907_);
lean_dec(v___y_906_);
lean_dec(v_mvarId_905_);
return v_res_913_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(lean_object* v_a_914_, lean_object* v_as_915_, size_t v_sz_916_, size_t v_i_917_, lean_object* v_b_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_){
_start:
{
lean_object* v_a_927_; uint8_t v___x_931_; 
v___x_931_ = lean_usize_dec_lt(v_i_917_, v_sz_916_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; 
lean_dec_ref(v_a_914_);
v___x_932_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_932_, 0, v_b_918_);
return v___x_932_;
}
else
{
lean_object* v_array_933_; lean_object* v_start_934_; lean_object* v_stop_935_; uint8_t v___x_936_; 
v_array_933_ = lean_ctor_get(v_b_918_, 0);
v_start_934_ = lean_ctor_get(v_b_918_, 1);
v_stop_935_ = lean_ctor_get(v_b_918_, 2);
v___x_936_ = lean_nat_dec_lt(v_start_934_, v_stop_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; 
lean_dec_ref(v_a_914_);
v___x_937_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_937_, 0, v_b_918_);
return v___x_937_;
}
else
{
lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_961_; 
lean_inc(v_stop_935_);
lean_inc(v_start_934_);
lean_inc_ref(v_array_933_);
v_isSharedCheck_961_ = !lean_is_exclusive(v_b_918_);
if (v_isSharedCheck_961_ == 0)
{
lean_object* v_unused_962_; lean_object* v_unused_963_; lean_object* v_unused_964_; 
v_unused_962_ = lean_ctor_get(v_b_918_, 2);
lean_dec(v_unused_962_);
v_unused_963_ = lean_ctor_get(v_b_918_, 1);
lean_dec(v_unused_963_);
v_unused_964_ = lean_ctor_get(v_b_918_, 0);
lean_dec(v_unused_964_);
v___x_939_ = v_b_918_;
v_isShared_940_ = v_isSharedCheck_961_;
goto v_resetjp_938_;
}
else
{
lean_dec(v_b_918_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_961_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v_lctx_941_; lean_object* v___x_942_; lean_object* v_a_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_947_; 
v_lctx_941_ = lean_ctor_get(v_a_914_, 1);
v___x_942_ = lean_array_fget(v_array_933_, v_start_934_);
v_a_943_ = lean_array_uget_borrowed(v_as_915_, v_i_917_);
v___x_944_ = lean_unsigned_to_nat(1u);
v___x_945_ = lean_nat_add(v_start_934_, v___x_944_);
lean_dec(v_start_934_);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_945_);
v___x_947_ = v___x_939_;
goto v_reusejp_946_;
}
else
{
lean_object* v_reuseFailAlloc_960_; 
v_reuseFailAlloc_960_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_960_, 0, v_array_933_);
lean_ctor_set(v_reuseFailAlloc_960_, 1, v___x_945_);
lean_ctor_set(v_reuseFailAlloc_960_, 2, v_stop_935_);
v___x_947_ = v_reuseFailAlloc_960_;
goto v_reusejp_946_;
}
v_reusejp_946_:
{
lean_object* v___x_948_; uint8_t v___x_949_; uint8_t v___x_950_; 
lean_inc_ref(v_lctx_941_);
v___x_948_ = l_Lean_LocalContext_getFVar_x21(v_lctx_941_, v_a_943_);
v___x_949_ = 0;
v___x_950_ = l_Lean_LocalDecl_isLet(v___x_948_, v___x_949_);
lean_dec_ref(v___x_948_);
if (v___x_950_ == 0)
{
lean_dec(v___x_942_);
v_a_927_ = v___x_947_;
goto v___jp_926_;
}
else
{
lean_object* v___x_951_; 
v___x_951_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr(v___x_942_, v___y_919_, v___y_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_);
if (lean_obj_tag(v___x_951_) == 0)
{
lean_dec_ref_known(v___x_951_, 1);
v_a_927_ = v___x_947_;
goto v___jp_926_;
}
else
{
lean_object* v_a_952_; lean_object* v___x_954_; uint8_t v_isShared_955_; uint8_t v_isSharedCheck_959_; 
lean_dec_ref(v___x_947_);
lean_dec_ref(v_a_914_);
v_a_952_ = lean_ctor_get(v___x_951_, 0);
v_isSharedCheck_959_ = !lean_is_exclusive(v___x_951_);
if (v_isSharedCheck_959_ == 0)
{
v___x_954_ = v___x_951_;
v_isShared_955_ = v_isSharedCheck_959_;
goto v_resetjp_953_;
}
else
{
lean_inc(v_a_952_);
lean_dec(v___x_951_);
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
}
}
}
v___jp_926_:
{
size_t v___x_928_; size_t v___x_929_; 
v___x_928_ = ((size_t)1ULL);
v___x_929_ = lean_usize_add(v_i_917_, v___x_928_);
v_i_917_ = v___x_929_;
v_b_918_ = v_a_927_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2___boxed(lean_object* v_a_965_, lean_object* v_as_966_, lean_object* v_sz_967_, lean_object* v_i_968_, lean_object* v_b_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_, lean_object* v___y_975_, lean_object* v___y_976_){
_start:
{
size_t v_sz_boxed_977_; size_t v_i_boxed_978_; lean_object* v_res_979_; 
v_sz_boxed_977_ = lean_unbox_usize(v_sz_967_);
lean_dec(v_sz_967_);
v_i_boxed_978_ = lean_unbox_usize(v_i_968_);
lean_dec(v_i_968_);
v_res_979_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(v_a_965_, v_as_966_, v_sz_boxed_977_, v_i_boxed_978_, v_b_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec(v___y_970_);
lean_dec_ref(v_as_966_);
return v_res_979_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(lean_object* v_as_980_, lean_object* v___y_981_){
_start:
{
if (lean_obj_tag(v_as_980_) == 0)
{
lean_object* v___x_983_; lean_object* v___x_984_; 
v___x_983_ = lean_box(0);
v___x_984_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_984_, 0, v___x_983_);
return v___x_984_;
}
else
{
lean_object* v_head_985_; lean_object* v_tail_986_; lean_object* v___x_987_; 
v_head_985_ = lean_ctor_get(v_as_980_, 0);
lean_inc(v_head_985_);
v_tail_986_ = lean_ctor_get(v_as_980_, 1);
lean_inc(v_tail_986_);
lean_dec_ref_known(v_as_980_, 2);
v___x_987_ = l_Lean_Meta_addZetaDeltaFVarId___redArg(v_head_985_, v___y_981_);
if (lean_obj_tag(v___x_987_) == 0)
{
lean_dec_ref_known(v___x_987_, 1);
v_as_980_ = v_tail_986_;
goto _start;
}
else
{
lean_dec(v_tail_986_);
return v___x_987_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg___boxed(lean_object* v_as_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(v_as_989_, v___y_990_);
lean_dec(v___y_990_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(lean_object* v_mvarId_993_, lean_object* v_args_994_, lean_object* v_a_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_){
_start:
{
lean_object* v___x_1002_; lean_object* v_a_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1059_; 
v___x_1002_ = l_Lean_getDelayedMVarAssignment_x3f___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__0___redArg(v_mvarId_993_, v_a_998_);
v_a_1003_ = lean_ctor_get(v___x_1002_, 0);
v_isSharedCheck_1059_ = !lean_is_exclusive(v___x_1002_);
if (v_isSharedCheck_1059_ == 0)
{
v___x_1005_ = v___x_1002_;
v_isShared_1006_ = v_isSharedCheck_1059_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_a_1003_);
lean_dec(v___x_1002_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1059_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
if (lean_obj_tag(v_a_1003_) == 1)
{
lean_object* v_val_1007_; lean_object* v_fvars_1008_; lean_object* v_mvarIdPending_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; uint8_t v___x_1012_; 
lean_del_object(v___x_1005_);
v_val_1007_ = lean_ctor_get(v_a_1003_, 0);
lean_inc(v_val_1007_);
lean_dec_ref_known(v_a_1003_, 1);
v_fvars_1008_ = lean_ctor_get(v_val_1007_, 0);
lean_inc_ref(v_fvars_1008_);
v_mvarIdPending_1009_ = lean_ctor_get(v_val_1007_, 1);
lean_inc(v_mvarIdPending_1009_);
lean_dec(v_val_1007_);
v___x_1010_ = lean_array_get_size(v_fvars_1008_);
v___x_1011_ = lean_array_get_size(v_args_994_);
v___x_1012_ = lean_nat_dec_le(v___x_1010_, v___x_1011_);
if (v___x_1012_ == 0)
{
lean_object* v___x_1013_; 
lean_dec(v_mvarIdPending_1009_);
lean_dec_ref(v_fvars_1008_);
lean_dec_ref(v_args_994_);
lean_inc(v_a_995_);
v___x_1013_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(v_a_995_, v_a_998_);
if (lean_obj_tag(v___x_1013_) == 0)
{
lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1021_; 
v_isSharedCheck_1021_ = !lean_is_exclusive(v___x_1013_);
if (v_isSharedCheck_1021_ == 0)
{
lean_object* v_unused_1022_; 
v_unused_1022_ = lean_ctor_get(v___x_1013_, 0);
lean_dec(v_unused_1022_);
v___x_1015_ = v___x_1013_;
v_isShared_1016_ = v_isSharedCheck_1021_;
goto v_resetjp_1014_;
}
else
{
lean_dec(v___x_1013_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1021_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1017_; lean_object* v___x_1019_; 
v___x_1017_ = lean_box(0);
if (v_isShared_1016_ == 0)
{
lean_ctor_set(v___x_1015_, 0, v___x_1017_);
v___x_1019_ = v___x_1015_;
goto v_reusejp_1018_;
}
else
{
lean_object* v_reuseFailAlloc_1020_; 
v_reuseFailAlloc_1020_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1020_, 0, v___x_1017_);
v___x_1019_ = v_reuseFailAlloc_1020_;
goto v_reusejp_1018_;
}
v_reusejp_1018_:
{
return v___x_1019_;
}
}
}
else
{
return v___x_1013_;
}
}
else
{
lean_object* v___x_1023_; 
v___x_1023_ = l_Lean_MVarId_getDecl(v_mvarIdPending_1009_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
if (lean_obj_tag(v___x_1023_) == 0)
{
lean_object* v_a_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; size_t v_sz_1027_; size_t v___x_1028_; lean_object* v___x_1029_; 
v_a_1024_ = lean_ctor_get(v___x_1023_, 0);
lean_inc(v_a_1024_);
lean_dec_ref_known(v___x_1023_, 1);
v___x_1025_ = lean_unsigned_to_nat(0u);
v___x_1026_ = l_Array_toSubarray___redArg(v_args_994_, v___x_1025_, v___x_1011_);
v_sz_1027_ = lean_array_size(v_fvars_1008_);
v___x_1028_ = ((size_t)0ULL);
v___x_1029_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__2(v_a_1024_, v_fvars_1008_, v_sz_1027_, v___x_1028_, v___x_1026_, v_a_995_, v_a_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_);
lean_dec_ref(v_fvars_1008_);
if (lean_obj_tag(v___x_1029_) == 0)
{
lean_object* v___x_1031_; uint8_t v_isShared_1032_; uint8_t v_isSharedCheck_1037_; 
v_isSharedCheck_1037_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1037_ == 0)
{
lean_object* v_unused_1038_; 
v_unused_1038_ = lean_ctor_get(v___x_1029_, 0);
lean_dec(v_unused_1038_);
v___x_1031_ = v___x_1029_;
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
else
{
lean_dec(v___x_1029_);
v___x_1031_ = lean_box(0);
v_isShared_1032_ = v_isSharedCheck_1037_;
goto v_resetjp_1030_;
}
v_resetjp_1030_:
{
lean_object* v___x_1033_; lean_object* v___x_1035_; 
v___x_1033_ = lean_box(0);
if (v_isShared_1032_ == 0)
{
lean_ctor_set(v___x_1031_, 0, v___x_1033_);
v___x_1035_ = v___x_1031_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1036_; 
v_reuseFailAlloc_1036_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1036_, 0, v___x_1033_);
v___x_1035_ = v_reuseFailAlloc_1036_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
return v___x_1035_;
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
v_a_1039_ = lean_ctor_get(v___x_1029_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1029_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1029_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1029_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec_ref(v_fvars_1008_);
lean_dec_ref(v_args_994_);
v_a_1047_ = lean_ctor_get(v___x_1023_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1023_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1023_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1023_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
else
{
lean_object* v___x_1055_; lean_object* v___x_1057_; 
lean_dec(v_a_1003_);
lean_dec_ref(v_args_994_);
v___x_1055_ = lean_box(0);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1055_);
v___x_1057_ = v___x_1005_;
goto v_reusejp_1056_;
}
else
{
lean_object* v_reuseFailAlloc_1058_; 
v_reuseFailAlloc_1058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1058_, 0, v___x_1055_);
v___x_1057_ = v_reuseFailAlloc_1058_;
goto v_reusejp_1056_;
}
v_reusejp_1056_:
{
return v___x_1057_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar___boxed(lean_object* v_mvarId_1060_, lean_object* v_args_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v___y_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(v_mvarId_1060_, v_args_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_, v_a_1067_);
lean_dec(v_a_1067_);
lean_dec_ref(v_a_1066_);
lean_dec(v_a_1065_);
lean_dec_ref(v_a_1064_);
lean_dec(v_a_1063_);
lean_dec(v_a_1062_);
lean_dec(v_mvarId_1060_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1(lean_object* v_as_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_){
_start:
{
lean_object* v___x_1078_; 
v___x_1078_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___redArg(v_as_1070_, v___y_1074_);
return v___x_1078_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1___boxed(lean_object* v_as_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_, lean_object* v___y_1083_, lean_object* v___y_1084_, lean_object* v___y_1085_, lean_object* v___y_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_List_forM___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar_spec__1(v_as_1079_, v___y_1080_, v___y_1081_, v___y_1082_, v___y_1083_, v___y_1084_, v___y_1085_);
lean_dec(v___y_1085_);
lean_dec_ref(v___y_1084_);
lean_dec(v___y_1083_);
lean_dec_ref(v___y_1082_);
lean_dec(v___y_1081_);
lean_dec(v___y_1080_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(lean_object* v_e_1090_, lean_object* v_a_1091_, lean_object* v_a_1092_, lean_object* v_a_1093_, lean_object* v_a_1094_, lean_object* v_a_1095_, lean_object* v_a_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = l_Lean_Expr_mvarId_x21(v_e_1090_);
v___x_1099_ = l_Lean_MVarId_findDecl_x3f___redArg(v___x_1098_, v_a_1094_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1130_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1102_ = v___x_1099_;
v_isShared_1103_ = v_isSharedCheck_1130_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_a_1100_);
lean_dec(v___x_1099_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1130_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
if (lean_obj_tag(v_a_1100_) == 1)
{
lean_object* v_val_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1128_; 
v_val_1104_ = lean_ctor_get(v_a_1100_, 0);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_a_1100_);
if (v_isSharedCheck_1128_ == 0)
{
v___x_1106_ = v_a_1100_;
v_isShared_1107_ = v_isSharedCheck_1128_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_val_1104_);
lean_dec(v_a_1100_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1128_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
uint8_t v___x_1117_; 
v___x_1117_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_1091_);
if (v___x_1117_ == 0)
{
lean_dec(v___x_1098_);
goto v___jp_1108_;
}
else
{
lean_object* v___x_1118_; lean_object* v___x_1119_; 
v___x_1118_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0));
v___x_1119_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(v___x_1098_, v___x_1118_, v_a_1091_, v_a_1092_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
lean_dec(v___x_1098_);
if (lean_obj_tag(v___x_1119_) == 0)
{
lean_dec_ref_known(v___x_1119_, 1);
goto v___jp_1108_;
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_del_object(v___x_1106_);
lean_dec(v_val_1104_);
lean_del_object(v___x_1102_);
lean_dec_ref(v_e_1090_);
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
}
v___jp_1108_:
{
lean_object* v_type_1109_; lean_object* v___x_1111_; 
v_type_1109_ = lean_ctor_get(v_val_1104_, 2);
lean_inc_ref(v_type_1109_);
lean_dec(v_val_1104_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v_type_1109_);
v___x_1111_ = v___x_1106_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_type_1109_);
v___x_1111_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1112_; lean_object* v___x_1114_; 
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v_e_1090_);
lean_ctor_set(v___x_1112_, 1, v___x_1111_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 0, v___x_1112_);
v___x_1114_ = v___x_1102_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
}
}
}
else
{
lean_object* v___x_1129_; 
lean_del_object(v___x_1102_);
lean_dec(v_a_1100_);
lean_dec_ref(v_e_1090_);
v___x_1129_ = l_Lean_Meta_throwUnknownMVar___redArg(v___x_1098_, v_a_1093_, v_a_1094_, v_a_1095_, v_a_1096_);
return v___x_1129_;
}
}
}
else
{
lean_object* v_a_1131_; lean_object* v___x_1133_; uint8_t v_isShared_1134_; uint8_t v_isSharedCheck_1138_; 
lean_dec(v___x_1098_);
lean_dec_ref(v_e_1090_);
v_a_1131_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1138_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1133_ = v___x_1099_;
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
else
{
lean_inc(v_a_1131_);
lean_dec(v___x_1099_);
v___x_1133_ = lean_box(0);
v_isShared_1134_ = v_isSharedCheck_1138_;
goto v_resetjp_1132_;
}
v_resetjp_1132_:
{
lean_object* v___x_1136_; 
if (v_isShared_1134_ == 0)
{
v___x_1136_ = v___x_1133_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v_a_1131_);
v___x_1136_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
return v___x_1136_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___boxed(lean_object* v_e_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_, lean_object* v___y_1146_){
_start:
{
lean_object* v_res_1147_; 
v_res_1147_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(v_e_1139_, v_a_1140_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_, v_a_1145_);
lean_dec(v_a_1145_);
lean_dec_ref(v_a_1144_);
lean_dec(v_a_1143_);
lean_dec_ref(v_a_1142_);
lean_dec(v_a_1141_);
lean_dec(v_a_1140_);
return v_res_1147_;
}
}
static lean_object* _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1148_; 
v___x_1148_ = l_instMonadEIO___redArg();
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(lean_object* v_msg_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v_toApplicative_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1226_; 
v___x_1161_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__0);
v___x_1162_ = l_StateRefT_x27_instMonad___redArg(v___x_1161_);
v_toApplicative_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1226_ == 0)
{
lean_object* v_unused_1227_; 
v_unused_1227_ = lean_ctor_get(v___x_1162_, 1);
lean_dec(v_unused_1227_);
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1226_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_toApplicative_1163_);
lean_dec(v___x_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1226_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v_toFunctor_1167_; lean_object* v_toSeq_1168_; lean_object* v_toSeqLeft_1169_; lean_object* v_toSeqRight_1170_; lean_object* v___x_1172_; uint8_t v_isShared_1173_; uint8_t v_isSharedCheck_1224_; 
v_toFunctor_1167_ = lean_ctor_get(v_toApplicative_1163_, 0);
v_toSeq_1168_ = lean_ctor_get(v_toApplicative_1163_, 2);
v_toSeqLeft_1169_ = lean_ctor_get(v_toApplicative_1163_, 3);
v_toSeqRight_1170_ = lean_ctor_get(v_toApplicative_1163_, 4);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_toApplicative_1163_);
if (v_isSharedCheck_1224_ == 0)
{
lean_object* v_unused_1225_; 
v_unused_1225_ = lean_ctor_get(v_toApplicative_1163_, 1);
lean_dec(v_unused_1225_);
v___x_1172_ = v_toApplicative_1163_;
v_isShared_1173_ = v_isSharedCheck_1224_;
goto v_resetjp_1171_;
}
else
{
lean_inc(v_toSeqRight_1170_);
lean_inc(v_toSeqLeft_1169_);
lean_inc(v_toSeq_1168_);
lean_inc(v_toFunctor_1167_);
lean_dec(v_toApplicative_1163_);
v___x_1172_ = lean_box(0);
v_isShared_1173_ = v_isSharedCheck_1224_;
goto v_resetjp_1171_;
}
v_resetjp_1171_:
{
lean_object* v___f_1174_; lean_object* v___f_1175_; lean_object* v___f_1176_; lean_object* v___f_1177_; lean_object* v___x_1178_; lean_object* v___f_1179_; lean_object* v___f_1180_; lean_object* v___f_1181_; lean_object* v___x_1183_; 
v___f_1174_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__1));
v___f_1175_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__2));
lean_inc_ref(v_toFunctor_1167_);
v___f_1176_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1176_, 0, v_toFunctor_1167_);
v___f_1177_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1177_, 0, v_toFunctor_1167_);
v___x_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1178_, 0, v___f_1176_);
lean_ctor_set(v___x_1178_, 1, v___f_1177_);
v___f_1179_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1179_, 0, v_toSeqRight_1170_);
v___f_1180_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1180_, 0, v_toSeqLeft_1169_);
v___f_1181_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1181_, 0, v_toSeq_1168_);
if (v_isShared_1173_ == 0)
{
lean_ctor_set(v___x_1172_, 4, v___f_1179_);
lean_ctor_set(v___x_1172_, 3, v___f_1180_);
lean_ctor_set(v___x_1172_, 2, v___f_1181_);
lean_ctor_set(v___x_1172_, 1, v___f_1174_);
lean_ctor_set(v___x_1172_, 0, v___x_1178_);
v___x_1183_ = v___x_1172_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1178_);
lean_ctor_set(v_reuseFailAlloc_1223_, 1, v___f_1174_);
lean_ctor_set(v_reuseFailAlloc_1223_, 2, v___f_1181_);
lean_ctor_set(v_reuseFailAlloc_1223_, 3, v___f_1180_);
lean_ctor_set(v_reuseFailAlloc_1223_, 4, v___f_1179_);
v___x_1183_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
lean_object* v___x_1185_; 
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 1, v___f_1175_);
lean_ctor_set(v___x_1165_, 0, v___x_1183_);
v___x_1185_ = v___x_1165_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1222_; 
v_reuseFailAlloc_1222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1222_, 0, v___x_1183_);
lean_ctor_set(v_reuseFailAlloc_1222_, 1, v___f_1175_);
v___x_1185_ = v_reuseFailAlloc_1222_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1186_; lean_object* v_toApplicative_1187_; lean_object* v___x_1189_; uint8_t v_isShared_1190_; uint8_t v_isSharedCheck_1220_; 
v___x_1186_ = l_StateRefT_x27_instMonad___redArg(v___x_1185_);
v_toApplicative_1187_ = lean_ctor_get(v___x_1186_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v___x_1186_);
if (v_isSharedCheck_1220_ == 0)
{
lean_object* v_unused_1221_; 
v_unused_1221_ = lean_ctor_get(v___x_1186_, 1);
lean_dec(v_unused_1221_);
v___x_1189_ = v___x_1186_;
v_isShared_1190_ = v_isSharedCheck_1220_;
goto v_resetjp_1188_;
}
else
{
lean_inc(v_toApplicative_1187_);
lean_dec(v___x_1186_);
v___x_1189_ = lean_box(0);
v_isShared_1190_ = v_isSharedCheck_1220_;
goto v_resetjp_1188_;
}
v_resetjp_1188_:
{
lean_object* v_toFunctor_1191_; lean_object* v_toSeq_1192_; lean_object* v_toSeqLeft_1193_; lean_object* v_toSeqRight_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1218_; 
v_toFunctor_1191_ = lean_ctor_get(v_toApplicative_1187_, 0);
v_toSeq_1192_ = lean_ctor_get(v_toApplicative_1187_, 2);
v_toSeqLeft_1193_ = lean_ctor_get(v_toApplicative_1187_, 3);
v_toSeqRight_1194_ = lean_ctor_get(v_toApplicative_1187_, 4);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_toApplicative_1187_);
if (v_isSharedCheck_1218_ == 0)
{
lean_object* v_unused_1219_; 
v_unused_1219_ = lean_ctor_get(v_toApplicative_1187_, 1);
lean_dec(v_unused_1219_);
v___x_1196_ = v_toApplicative_1187_;
v_isShared_1197_ = v_isSharedCheck_1218_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_toSeqRight_1194_);
lean_inc(v_toSeqLeft_1193_);
lean_inc(v_toSeq_1192_);
lean_inc(v_toFunctor_1191_);
lean_dec(v_toApplicative_1187_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1218_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___f_1198_; lean_object* v___f_1199_; lean_object* v___f_1200_; lean_object* v___f_1201_; lean_object* v___x_1202_; lean_object* v___f_1203_; lean_object* v___f_1204_; lean_object* v___f_1205_; lean_object* v___x_1207_; 
v___f_1198_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__3));
v___f_1199_ = ((lean_object*)(l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___closed__4));
lean_inc_ref(v_toFunctor_1191_);
v___f_1200_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_1200_, 0, v_toFunctor_1191_);
v___f_1201_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1201_, 0, v_toFunctor_1191_);
v___x_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___f_1200_);
lean_ctor_set(v___x_1202_, 1, v___f_1201_);
v___f_1203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_1203_, 0, v_toSeqRight_1194_);
v___f_1204_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_1204_, 0, v_toSeqLeft_1193_);
v___f_1205_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_1205_, 0, v_toSeq_1192_);
if (v_isShared_1197_ == 0)
{
lean_ctor_set(v___x_1196_, 4, v___f_1203_);
lean_ctor_set(v___x_1196_, 3, v___f_1204_);
lean_ctor_set(v___x_1196_, 2, v___f_1205_);
lean_ctor_set(v___x_1196_, 1, v___f_1198_);
lean_ctor_set(v___x_1196_, 0, v___x_1202_);
v___x_1207_ = v___x_1196_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1202_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v___f_1198_);
lean_ctor_set(v_reuseFailAlloc_1217_, 2, v___f_1205_);
lean_ctor_set(v_reuseFailAlloc_1217_, 3, v___f_1204_);
lean_ctor_set(v_reuseFailAlloc_1217_, 4, v___f_1203_);
v___x_1207_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1209_; 
if (v_isShared_1190_ == 0)
{
lean_ctor_set(v___x_1189_, 1, v___f_1199_);
lean_ctor_set(v___x_1189_, 0, v___x_1207_);
v___x_1209_ = v___x_1189_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1216_; 
v_reuseFailAlloc_1216_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1216_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1216_, 1, v___f_1199_);
v___x_1209_ = v_reuseFailAlloc_1216_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___f_1213_; lean_object* v___x_1420__overap_1214_; lean_object* v___x_1215_; 
v___x_1210_ = l_StateRefT_x27_instMonad___redArg(v___x_1209_);
v___x_1211_ = l_Lean_Meta_LetToHave_instInhabitedResult_default;
v___x_1212_ = l_instInhabitedOfMonad___redArg(v___x_1210_, v___x_1211_);
v___f_1213_ = lean_alloc_closure((void*)(l_instInhabitedForall___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1213_, 0, v___x_1212_);
v___x_1420__overap_1214_ = lean_panic_fn_borrowed(v___f_1213_, v_msg_1153_);
lean_dec_ref(v___f_1213_);
lean_inc(v___y_1159_);
lean_inc_ref(v___y_1158_);
lean_inc(v___y_1157_);
lean_inc_ref(v___y_1156_);
lean_inc(v___y_1155_);
lean_inc(v___y_1154_);
v___x_1215_ = lean_apply_7(v___x_1420__overap_1214_, v___y_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_, lean_box(0));
return v___x_1215_;
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
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1___boxed(lean_object* v_msg_1228_, lean_object* v___y_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_){
_start:
{
lean_object* v_res_1236_; 
v_res_1236_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(v_msg_1228_, v___y_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_, v___y_1234_);
lean_dec(v___y_1234_);
lean_dec_ref(v___y_1233_);
lean_dec(v___y_1232_);
lean_dec_ref(v___y_1231_);
lean_dec(v___y_1230_);
lean_dec(v___y_1229_);
return v_res_1236_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1237_; 
v___x_1237_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_1237_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; 
v___x_1238_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0);
v___x_1239_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1238_);
return v___x_1239_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; 
v___x_1240_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_1241_ = lean_unsigned_to_nat(0u);
v___x_1242_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
lean_ctor_set(v___x_1242_, 1, v___x_1241_);
lean_ctor_set(v___x_1242_, 2, v___x_1241_);
lean_ctor_set(v___x_1242_, 3, v___x_1241_);
lean_ctor_set(v___x_1242_, 4, v___x_1240_);
lean_ctor_set(v___x_1242_, 5, v___x_1240_);
lean_ctor_set(v___x_1242_, 6, v___x_1240_);
lean_ctor_set(v___x_1242_, 7, v___x_1240_);
lean_ctor_set(v___x_1242_, 8, v___x_1240_);
lean_ctor_set(v___x_1242_, 9, v___x_1240_);
lean_ctor_set(v___x_1242_, 10, v___x_1240_);
return v___x_1242_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; 
v___x_1243_ = lean_unsigned_to_nat(32u);
v___x_1244_ = lean_mk_empty_array_with_capacity(v___x_1243_);
v___x_1245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1244_);
return v___x_1245_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4(void){
_start:
{
size_t v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1246_ = ((size_t)5ULL);
v___x_1247_ = lean_unsigned_to_nat(0u);
v___x_1248_ = lean_unsigned_to_nat(32u);
v___x_1249_ = lean_mk_empty_array_with_capacity(v___x_1248_);
v___x_1250_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__3);
v___x_1251_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_1251_, 0, v___x_1250_);
lean_ctor_set(v___x_1251_, 1, v___x_1249_);
lean_ctor_set(v___x_1251_, 2, v___x_1247_);
lean_ctor_set(v___x_1251_, 3, v___x_1247_);
lean_ctor_set_usize(v___x_1251_, 4, v___x_1246_);
return v___x_1251_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; 
v___x_1252_ = lean_box(1);
v___x_1253_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__4);
v___x_1254_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__1);
v___x_1255_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1255_, 0, v___x_1254_);
lean_ctor_set(v___x_1255_, 1, v___x_1253_);
lean_ctor_set(v___x_1255_, 2, v___x_1252_);
return v___x_1255_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7(void){
_start:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; 
v___x_1257_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__6));
v___x_1258_ = l_Lean_stringToMessageData(v___x_1257_);
return v___x_1258_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9(void){
_start:
{
lean_object* v___x_1260_; lean_object* v___x_1261_; 
v___x_1260_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__8));
v___x_1261_ = l_Lean_stringToMessageData(v___x_1260_);
return v___x_1261_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11(void){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; 
v___x_1263_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__10));
v___x_1264_ = l_Lean_stringToMessageData(v___x_1263_);
return v___x_1264_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13(void){
_start:
{
lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1266_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__12));
v___x_1267_ = l_Lean_stringToMessageData(v___x_1266_);
return v___x_1267_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15(void){
_start:
{
lean_object* v___x_1269_; lean_object* v___x_1270_; 
v___x_1269_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__14));
v___x_1270_ = l_Lean_stringToMessageData(v___x_1269_);
return v___x_1270_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17(void){
_start:
{
lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1272_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__16));
v___x_1273_ = l_Lean_stringToMessageData(v___x_1272_);
return v___x_1273_;
}
}
static lean_object* _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19(void){
_start:
{
lean_object* v___x_1275_; lean_object* v___x_1276_; 
v___x_1275_ = ((lean_object*)(l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__18));
v___x_1276_ = l_Lean_stringToMessageData(v___x_1275_);
return v___x_1276_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(lean_object* v_msg_1277_, lean_object* v_declHint_1278_, lean_object* v___y_1279_){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v_env_1283_; uint8_t v___x_1284_; 
v___x_1281_ = lean_box(0);
v___x_1282_ = lean_st_ref_get(v___y_1279_);
v_env_1283_ = lean_ctor_get(v___x_1282_, 0);
lean_inc_ref(v_env_1283_);
lean_dec(v___x_1282_);
v___x_1284_ = l_Lean_Name_isAnonymous(v_declHint_1278_);
if (v___x_1284_ == 0)
{
uint8_t v_isExporting_1285_; 
v_isExporting_1285_ = lean_ctor_get_uint8(v_env_1283_, sizeof(void*)*8);
if (v_isExporting_1285_ == 0)
{
lean_object* v___x_1286_; 
lean_dec_ref(v_env_1283_);
lean_dec(v_declHint_1278_);
v___x_1286_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1286_, 0, v_msg_1277_);
return v___x_1286_;
}
else
{
lean_object* v___x_1287_; uint8_t v___x_1288_; 
lean_inc_ref(v_env_1283_);
v___x_1287_ = l_Lean_Environment_setExporting(v_env_1283_, v___x_1284_);
lean_inc(v_declHint_1278_);
lean_inc_ref(v___x_1287_);
v___x_1288_ = l_Lean_Environment_contains(v___x_1287_, v_declHint_1278_, v_isExporting_1285_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; 
lean_dec_ref(v___x_1287_);
lean_dec_ref(v_env_1283_);
lean_dec(v_declHint_1278_);
v___x_1289_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1289_, 0, v_msg_1277_);
return v___x_1289_;
}
else
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v_c_1295_; lean_object* v___x_1296_; 
v___x_1290_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__2);
v___x_1291_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__5);
v___x_1292_ = l_Lean_Options_empty;
v___x_1293_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1287_);
lean_ctor_set(v___x_1293_, 1, v___x_1290_);
lean_ctor_set(v___x_1293_, 2, v___x_1291_);
lean_ctor_set(v___x_1293_, 3, v___x_1292_);
lean_inc(v_declHint_1278_);
v___x_1294_ = l_Lean_MessageData_ofConstName(v_declHint_1278_, v___x_1284_);
v_c_1295_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v_c_1295_, 0, v___x_1293_);
lean_ctor_set(v_c_1295_, 1, v___x_1294_);
v___x_1296_ = l_Lean_Environment_getModuleIdxFor_x3f(v_env_1283_, v_declHint_1278_);
if (lean_obj_tag(v___x_1296_) == 0)
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; 
lean_dec_ref(v_env_1283_);
lean_dec(v_declHint_1278_);
v___x_1297_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_1298_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1298_, 0, v___x_1297_);
lean_ctor_set(v___x_1298_, 1, v_c_1295_);
v___x_1299_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__9);
v___x_1300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1300_, 0, v___x_1298_);
lean_ctor_set(v___x_1300_, 1, v___x_1299_);
v___x_1301_ = l_Lean_MessageData_note(v___x_1300_);
v___x_1302_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1302_, 0, v_msg_1277_);
lean_ctor_set(v___x_1302_, 1, v___x_1301_);
v___x_1303_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1303_, 0, v___x_1302_);
return v___x_1303_;
}
else
{
lean_object* v_val_1304_; lean_object* v___x_1306_; uint8_t v_isShared_1307_; uint8_t v_isSharedCheck_1338_; 
v_val_1304_ = lean_ctor_get(v___x_1296_, 0);
v_isSharedCheck_1338_ = !lean_is_exclusive(v___x_1296_);
if (v_isSharedCheck_1338_ == 0)
{
v___x_1306_ = v___x_1296_;
v_isShared_1307_ = v_isSharedCheck_1338_;
goto v_resetjp_1305_;
}
else
{
lean_inc(v_val_1304_);
lean_dec(v___x_1296_);
v___x_1306_ = lean_box(0);
v_isShared_1307_ = v_isSharedCheck_1338_;
goto v_resetjp_1305_;
}
v_resetjp_1305_:
{
lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v_mod_1310_; uint8_t v___x_1311_; 
v___x_1308_ = l_Lean_Environment_header(v_env_1283_);
lean_dec_ref(v_env_1283_);
v___x_1309_ = l_Lean_EnvironmentHeader_moduleNames(v___x_1308_);
v_mod_1310_ = lean_array_get(v___x_1281_, v___x_1309_, v_val_1304_);
lean_dec(v_val_1304_);
lean_dec_ref(v___x_1309_);
v___x_1311_ = l_Lean_isPrivateName(v_declHint_1278_);
lean_dec(v_declHint_1278_);
if (v___x_1311_ == 0)
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1323_; 
v___x_1312_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__11);
v___x_1313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v_c_1295_);
v___x_1314_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__13);
v___x_1315_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1313_);
lean_ctor_set(v___x_1315_, 1, v___x_1314_);
v___x_1316_ = l_Lean_MessageData_ofName(v_mod_1310_);
v___x_1317_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1317_, 0, v___x_1315_);
lean_ctor_set(v___x_1317_, 1, v___x_1316_);
v___x_1318_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__15);
v___x_1319_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1317_);
lean_ctor_set(v___x_1319_, 1, v___x_1318_);
v___x_1320_ = l_Lean_MessageData_note(v___x_1319_);
v___x_1321_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1321_, 0, v_msg_1277_);
lean_ctor_set(v___x_1321_, 1, v___x_1320_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1321_);
v___x_1323_ = v___x_1306_;
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
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1325_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__7);
v___x_1326_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1326_, 0, v___x_1325_);
lean_ctor_set(v___x_1326_, 1, v_c_1295_);
v___x_1327_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__17);
v___x_1328_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1326_);
lean_ctor_set(v___x_1328_, 1, v___x_1327_);
v___x_1329_ = l_Lean_MessageData_ofName(v_mod_1310_);
v___x_1330_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1330_, 0, v___x_1328_);
lean_ctor_set(v___x_1330_, 1, v___x_1329_);
v___x_1331_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__19);
v___x_1332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1332_, 0, v___x_1330_);
lean_ctor_set(v___x_1332_, 1, v___x_1331_);
v___x_1333_ = l_Lean_MessageData_note(v___x_1332_);
v___x_1334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1334_, 0, v_msg_1277_);
lean_ctor_set(v___x_1334_, 1, v___x_1333_);
if (v_isShared_1307_ == 0)
{
lean_ctor_set_tag(v___x_1306_, 0);
lean_ctor_set(v___x_1306_, 0, v___x_1334_);
v___x_1336_ = v___x_1306_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1337_; 
v_reuseFailAlloc_1337_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1337_, 0, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1337_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
return v___x_1336_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_1339_; 
lean_dec_ref(v_env_1283_);
lean_dec(v_declHint_1278_);
v___x_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1339_, 0, v_msg_1277_);
return v___x_1339_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___boxed(lean_object* v_msg_1340_, lean_object* v_declHint_1341_, lean_object* v___y_1342_, lean_object* v___y_1343_){
_start:
{
lean_object* v_res_1344_; 
v_res_1344_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1340_, v_declHint_1341_, v___y_1342_);
lean_dec(v___y_1342_);
return v_res_1344_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(lean_object* v_msg_1345_, lean_object* v_declHint_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_){
_start:
{
lean_object* v___x_1354_; lean_object* v_a_1355_; lean_object* v___x_1357_; uint8_t v_isShared_1358_; uint8_t v_isSharedCheck_1364_; 
v___x_1354_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1345_, v_declHint_1346_, v___y_1352_);
v_a_1355_ = lean_ctor_get(v___x_1354_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v___x_1354_);
if (v_isSharedCheck_1364_ == 0)
{
v___x_1357_ = v___x_1354_;
v_isShared_1358_ = v_isSharedCheck_1364_;
goto v_resetjp_1356_;
}
else
{
lean_inc(v_a_1355_);
lean_dec(v___x_1354_);
v___x_1357_ = lean_box(0);
v_isShared_1358_ = v_isSharedCheck_1364_;
goto v_resetjp_1356_;
}
v_resetjp_1356_:
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1362_; 
v___x_1359_ = l_Lean_unknownIdentifierMessageTag;
v___x_1360_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_1360_, 0, v___x_1359_);
lean_ctor_set(v___x_1360_, 1, v_a_1355_);
if (v_isShared_1358_ == 0)
{
lean_ctor_set(v___x_1357_, 0, v___x_1360_);
v___x_1362_ = v___x_1357_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v___x_1360_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
return v___x_1362_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4___boxed(lean_object* v_msg_1365_, lean_object* v_declHint_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_, lean_object* v___y_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(v_msg_1365_, v_declHint_1366_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_, v___y_1371_, v___y_1372_);
lean_dec(v___y_1372_);
lean_dec_ref(v___y_1371_);
lean_dec(v___y_1370_);
lean_dec_ref(v___y_1369_);
lean_dec(v___y_1368_);
lean_dec(v___y_1367_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(lean_object* v_msgData_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
lean_object* v___x_1381_; lean_object* v_env_1382_; lean_object* v___x_1383_; lean_object* v_toCold_1384_; lean_object* v_mctx_1385_; lean_object* v_lctx_1386_; lean_object* v_options_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1381_ = lean_st_ref_get(v___y_1379_);
v_env_1382_ = lean_ctor_get(v___x_1381_, 0);
lean_inc_ref(v_env_1382_);
lean_dec(v___x_1381_);
v___x_1383_ = lean_st_ref_get(v___y_1377_);
v_toCold_1384_ = lean_ctor_get(v___y_1378_, 0);
v_mctx_1385_ = lean_ctor_get(v___x_1383_, 0);
lean_inc_ref(v_mctx_1385_);
lean_dec(v___x_1383_);
v_lctx_1386_ = lean_ctor_get(v___y_1376_, 2);
v_options_1387_ = lean_ctor_get(v_toCold_1384_, 2);
lean_inc_ref(v_options_1387_);
lean_inc_ref(v_lctx_1386_);
v___x_1388_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1388_, 0, v_env_1382_);
lean_ctor_set(v___x_1388_, 1, v_mctx_1385_);
lean_ctor_set(v___x_1388_, 2, v_lctx_1386_);
lean_ctor_set(v___x_1388_, 3, v_options_1387_);
v___x_1389_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1388_);
lean_ctor_set(v___x_1389_, 1, v_msgData_1375_);
v___x_1390_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1390_, 0, v___x_1389_);
return v___x_1390_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8___boxed(lean_object* v_msgData_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msgData_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(lean_object* v_msg_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_){
_start:
{
lean_object* v_ref_1404_; lean_object* v___x_1405_; lean_object* v_a_1406_; lean_object* v___x_1408_; uint8_t v_isShared_1409_; uint8_t v_isSharedCheck_1414_; 
v_ref_1404_ = lean_ctor_get(v___y_1401_, 2);
v___x_1405_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
v_a_1406_ = lean_ctor_get(v___x_1405_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1405_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1408_ = v___x_1405_;
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
else
{
lean_inc(v_a_1406_);
lean_dec(v___x_1405_);
v___x_1408_ = lean_box(0);
v_isShared_1409_ = v_isSharedCheck_1414_;
goto v_resetjp_1407_;
}
v_resetjp_1407_:
{
lean_object* v___x_1410_; lean_object* v___x_1412_; 
lean_inc(v_ref_1404_);
v___x_1410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1410_, 0, v_ref_1404_);
lean_ctor_set(v___x_1410_, 1, v_a_1406_);
if (v_isShared_1409_ == 0)
{
lean_ctor_set_tag(v___x_1408_, 1);
lean_ctor_set(v___x_1408_, 0, v___x_1410_);
v___x_1412_ = v___x_1408_;
goto v_reusejp_1411_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v___x_1410_);
v___x_1412_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1411_;
}
v_reusejp_1411_:
{
return v___x_1412_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_msg_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
lean_object* v_res_1421_; 
v_res_1421_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_);
lean_dec(v___y_1419_);
lean_dec_ref(v___y_1418_);
lean_dec(v___y_1417_);
lean_dec_ref(v___y_1416_);
return v_res_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(lean_object* v_ref_1422_, lean_object* v_msg_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_){
_start:
{
lean_object* v_toCold_1431_; lean_object* v_currRecDepth_1432_; lean_object* v_ref_1433_; uint8_t v_diag_1434_; uint8_t v_suppressElabErrors_1435_; lean_object* v_ref_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; 
v_toCold_1431_ = lean_ctor_get(v___y_1428_, 0);
v_currRecDepth_1432_ = lean_ctor_get(v___y_1428_, 1);
v_ref_1433_ = lean_ctor_get(v___y_1428_, 2);
v_diag_1434_ = lean_ctor_get_uint8(v___y_1428_, sizeof(void*)*3);
v_suppressElabErrors_1435_ = lean_ctor_get_uint8(v___y_1428_, sizeof(void*)*3 + 1);
v_ref_1436_ = l_Lean_replaceRef(v_ref_1422_, v_ref_1433_);
lean_inc(v_currRecDepth_1432_);
lean_inc_ref(v_toCold_1431_);
v___x_1437_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_1437_, 0, v_toCold_1431_);
lean_ctor_set(v___x_1437_, 1, v_currRecDepth_1432_);
lean_ctor_set(v___x_1437_, 2, v_ref_1436_);
lean_ctor_set_uint8(v___x_1437_, sizeof(void*)*3, v_diag_1434_);
lean_ctor_set_uint8(v___x_1437_, sizeof(void*)*3 + 1, v_suppressElabErrors_1435_);
v___x_1438_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_1423_, v___y_1426_, v___y_1427_, v___x_1437_, v___y_1429_);
lean_dec_ref_known(v___x_1437_, 3);
return v___x_1438_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg___boxed(lean_object* v_ref_1439_, lean_object* v_msg_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_, lean_object* v___y_1443_, lean_object* v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_){
_start:
{
lean_object* v_res_1448_; 
v_res_1448_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_ref_1439_, v_msg_1440_, v___y_1441_, v___y_1442_, v___y_1443_, v___y_1444_, v___y_1445_, v___y_1446_);
lean_dec(v___y_1446_);
lean_dec_ref(v___y_1445_);
lean_dec(v___y_1444_);
lean_dec_ref(v___y_1443_);
lean_dec(v___y_1442_);
lean_dec(v___y_1441_);
lean_dec(v_ref_1439_);
return v_res_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(lean_object* v_ref_1449_, lean_object* v_msg_1450_, lean_object* v_declHint_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_, lean_object* v___y_1457_){
_start:
{
lean_object* v___x_1459_; lean_object* v_a_1460_; lean_object* v___x_1461_; 
v___x_1459_ = l_Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4(v_msg_1450_, v_declHint_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
v_a_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc(v_a_1460_);
lean_dec_ref(v___x_1459_);
v___x_1461_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_ref_1449_, v_a_1460_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_, v___y_1457_);
return v___x_1461_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg___boxed(lean_object* v_ref_1462_, lean_object* v_msg_1463_, lean_object* v_declHint_1464_, lean_object* v___y_1465_, lean_object* v___y_1466_, lean_object* v___y_1467_, lean_object* v___y_1468_, lean_object* v___y_1469_, lean_object* v___y_1470_, lean_object* v___y_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(v_ref_1462_, v_msg_1463_, v_declHint_1464_, v___y_1465_, v___y_1466_, v___y_1467_, v___y_1468_, v___y_1469_, v___y_1470_);
lean_dec(v___y_1470_);
lean_dec_ref(v___y_1469_);
lean_dec(v___y_1468_);
lean_dec_ref(v___y_1467_);
lean_dec(v___y_1466_);
lean_dec(v___y_1465_);
lean_dec(v_ref_1462_);
return v_res_1472_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__0));
v___x_1475_ = l_Lean_stringToMessageData(v___x_1474_);
return v___x_1475_;
}
}
static lean_object* _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = ((lean_object*)(l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__2));
v___x_1478_ = l_Lean_stringToMessageData(v___x_1477_);
return v___x_1478_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(lean_object* v_ref_1479_, lean_object* v_constName_1480_, lean_object* v___y_1481_, lean_object* v___y_1482_, lean_object* v___y_1483_, lean_object* v___y_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_){
_start:
{
lean_object* v___x_1488_; uint8_t v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1488_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__1);
v___x_1489_ = 0;
lean_inc(v_constName_1480_);
v___x_1490_ = l_Lean_MessageData_ofConstName(v_constName_1480_, v___x_1489_);
v___x_1491_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1491_, 0, v___x_1488_);
lean_ctor_set(v___x_1491_, 1, v___x_1490_);
v___x_1492_ = lean_obj_once(&l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3, &l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3_once, _init_l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___closed__3);
v___x_1493_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1493_, 0, v___x_1491_);
lean_ctor_set(v___x_1493_, 1, v___x_1492_);
v___x_1494_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(v_ref_1479_, v___x_1493_, v_constName_1480_, v___y_1481_, v___y_1482_, v___y_1483_, v___y_1484_, v___y_1485_, v___y_1486_);
return v___x_1494_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_ref_1495_, lean_object* v_constName_1496_, lean_object* v___y_1497_, lean_object* v___y_1498_, lean_object* v___y_1499_, lean_object* v___y_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_){
_start:
{
lean_object* v_res_1504_; 
v_res_1504_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(v_ref_1495_, v_constName_1496_, v___y_1497_, v___y_1498_, v___y_1499_, v___y_1500_, v___y_1501_, v___y_1502_);
lean_dec(v___y_1502_);
lean_dec_ref(v___y_1501_);
lean_dec(v___y_1500_);
lean_dec_ref(v___y_1499_);
lean_dec(v___y_1498_);
lean_dec(v___y_1497_);
lean_dec(v_ref_1495_);
return v_res_1504_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(lean_object* v_constName_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v_ref_1513_; lean_object* v___x_1514_; 
v_ref_1513_ = lean_ctor_get(v___y_1510_, 2);
v___x_1514_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(v_ref_1513_, v_constName_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg___boxed(lean_object* v_constName_1515_, lean_object* v___y_1516_, lean_object* v___y_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_){
_start:
{
lean_object* v_res_1523_; 
v_res_1523_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_);
lean_dec(v___y_1521_);
lean_dec_ref(v___y_1520_);
lean_dec(v___y_1519_);
lean_dec_ref(v___y_1518_);
lean_dec(v___y_1517_);
lean_dec(v___y_1516_);
return v_res_1523_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(lean_object* v_constName_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_, lean_object* v___y_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_){
_start:
{
lean_object* v___x_1532_; lean_object* v_env_1533_; uint8_t v___x_1534_; lean_object* v___x_1535_; 
v___x_1532_ = lean_st_ref_get(v___y_1530_);
v_env_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc_ref(v_env_1533_);
lean_dec(v___x_1532_);
v___x_1534_ = 0;
lean_inc(v_constName_1524_);
v___x_1535_ = l_Lean_Environment_findConstVal_x3f(v_env_1533_, v_constName_1524_, v___x_1534_);
if (lean_obj_tag(v___x_1535_) == 0)
{
lean_object* v___x_1536_; 
v___x_1536_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_1524_, v___y_1525_, v___y_1526_, v___y_1527_, v___y_1528_, v___y_1529_, v___y_1530_);
return v___x_1536_;
}
else
{
lean_object* v_val_1537_; lean_object* v___x_1539_; uint8_t v_isShared_1540_; uint8_t v_isSharedCheck_1544_; 
lean_dec(v_constName_1524_);
v_val_1537_ = lean_ctor_get(v___x_1535_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1535_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1539_ = v___x_1535_;
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
else
{
lean_inc(v_val_1537_);
lean_dec(v___x_1535_);
v___x_1539_ = lean_box(0);
v_isShared_1540_ = v_isSharedCheck_1544_;
goto v_resetjp_1538_;
}
v_resetjp_1538_:
{
lean_object* v___x_1542_; 
if (v_isShared_1540_ == 0)
{
lean_ctor_set_tag(v___x_1539_, 0);
v___x_1542_ = v___x_1539_;
goto v_reusejp_1541_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v_val_1537_);
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
}
LEAN_EXPORT lean_object* l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0___boxed(lean_object* v_constName_1545_, lean_object* v___y_1546_, lean_object* v___y_1547_, lean_object* v___y_1548_, lean_object* v___y_1549_, lean_object* v___y_1550_, lean_object* v___y_1551_, lean_object* v___y_1552_){
_start:
{
lean_object* v_res_1553_; 
v_res_1553_ = l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(v_constName_1545_, v___y_1546_, v___y_1547_, v___y_1548_, v___y_1549_, v___y_1550_, v___y_1551_);
lean_dec(v___y_1551_);
lean_dec_ref(v___y_1550_);
lean_dec(v___y_1549_);
lean_dec_ref(v___y_1548_);
lean_dec(v___y_1547_);
lean_dec(v___y_1546_);
return v_res_1553_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1557_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2));
v___x_1558_ = lean_unsigned_to_nat(35u);
v___x_1559_ = lean_unsigned_to_nat(203u);
v___x_1560_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__1));
v___x_1561_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0));
v___x_1562_ = l_mkPanicMessageWithDecl(v___x_1561_, v___x_1560_, v___x_1559_, v___x_1558_, v___x_1557_);
return v___x_1562_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0(lean_object* v_e_1563_, lean_object* v___y_1564_, lean_object* v___y_1565_, lean_object* v___y_1566_, lean_object* v___y_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_){
_start:
{
if (lean_obj_tag(v_e_1563_) == 4)
{
lean_object* v_declName_1571_; lean_object* v_us_1572_; lean_object* v___x_1573_; 
v_declName_1571_ = lean_ctor_get(v_e_1563_, 0);
v_us_1572_ = lean_ctor_get(v_e_1563_, 1);
lean_inc(v_declName_1571_);
v___x_1573_ = l_Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0(v_declName_1571_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
if (lean_obj_tag(v___x_1573_) == 0)
{
lean_object* v_a_1574_; lean_object* v_levelParams_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; uint8_t v___x_1578_; 
v_a_1574_ = lean_ctor_get(v___x_1573_, 0);
lean_inc(v_a_1574_);
lean_dec_ref_known(v___x_1573_, 1);
v_levelParams_1575_ = lean_ctor_get(v_a_1574_, 1);
v___x_1576_ = l_List_lengthTR___redArg(v_levelParams_1575_);
v___x_1577_ = l_List_lengthTR___redArg(v_us_1572_);
v___x_1578_ = lean_nat_dec_eq(v___x_1576_, v___x_1577_);
lean_dec(v___x_1577_);
lean_dec(v___x_1576_);
if (v___x_1578_ == 0)
{
lean_object* v___x_1579_; 
lean_inc(v_us_1572_);
lean_inc(v_declName_1571_);
lean_dec(v_a_1574_);
lean_dec_ref_known(v_e_1563_, 2);
v___x_1579_ = l_Lean_Meta_throwIncorrectNumberOfLevels___redArg(v_declName_1571_, v_us_1572_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
return v___x_1579_;
}
else
{
lean_object* v___x_1580_; 
lean_inc(v_us_1572_);
v___x_1580_ = l_Lean_Core_instantiateTypeLevelParams___redArg(v_a_1574_, v_us_1572_, v___y_1569_);
if (lean_obj_tag(v___x_1580_) == 0)
{
lean_object* v_a_1581_; lean_object* v___x_1583_; uint8_t v_isShared_1584_; uint8_t v_isSharedCheck_1590_; 
v_a_1581_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1590_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1590_ == 0)
{
v___x_1583_ = v___x_1580_;
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
else
{
lean_inc(v_a_1581_);
lean_dec(v___x_1580_);
v___x_1583_ = lean_box(0);
v_isShared_1584_ = v_isSharedCheck_1590_;
goto v_resetjp_1582_;
}
v_resetjp_1582_:
{
lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1588_; 
v___x_1585_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1585_, 0, v_a_1581_);
v___x_1586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1586_, 0, v_e_1563_);
lean_ctor_set(v___x_1586_, 1, v___x_1585_);
if (v_isShared_1584_ == 0)
{
lean_ctor_set(v___x_1583_, 0, v___x_1586_);
v___x_1588_ = v___x_1583_;
goto v_reusejp_1587_;
}
else
{
lean_object* v_reuseFailAlloc_1589_; 
v_reuseFailAlloc_1589_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1589_, 0, v___x_1586_);
v___x_1588_ = v_reuseFailAlloc_1589_;
goto v_reusejp_1587_;
}
v_reusejp_1587_:
{
return v___x_1588_;
}
}
}
else
{
lean_object* v_a_1591_; lean_object* v___x_1593_; uint8_t v_isShared_1594_; uint8_t v_isSharedCheck_1598_; 
lean_dec_ref_known(v_e_1563_, 2);
v_a_1591_ = lean_ctor_get(v___x_1580_, 0);
v_isSharedCheck_1598_ = !lean_is_exclusive(v___x_1580_);
if (v_isSharedCheck_1598_ == 0)
{
v___x_1593_ = v___x_1580_;
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
else
{
lean_inc(v_a_1591_);
lean_dec(v___x_1580_);
v___x_1593_ = lean_box(0);
v_isShared_1594_ = v_isSharedCheck_1598_;
goto v_resetjp_1592_;
}
v_resetjp_1592_:
{
lean_object* v___x_1596_; 
if (v_isShared_1594_ == 0)
{
v___x_1596_ = v___x_1593_;
goto v_reusejp_1595_;
}
else
{
lean_object* v_reuseFailAlloc_1597_; 
v_reuseFailAlloc_1597_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1597_, 0, v_a_1591_);
v___x_1596_ = v_reuseFailAlloc_1597_;
goto v_reusejp_1595_;
}
v_reusejp_1595_:
{
return v___x_1596_;
}
}
}
}
}
else
{
lean_object* v_a_1599_; lean_object* v___x_1601_; uint8_t v_isShared_1602_; uint8_t v_isSharedCheck_1606_; 
lean_dec_ref_known(v_e_1563_, 2);
v_a_1599_ = lean_ctor_get(v___x_1573_, 0);
v_isSharedCheck_1606_ = !lean_is_exclusive(v___x_1573_);
if (v_isSharedCheck_1606_ == 0)
{
v___x_1601_ = v___x_1573_;
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
else
{
lean_inc(v_a_1599_);
lean_dec(v___x_1573_);
v___x_1601_ = lean_box(0);
v_isShared_1602_ = v_isSharedCheck_1606_;
goto v_resetjp_1600_;
}
v_resetjp_1600_:
{
lean_object* v___x_1604_; 
if (v_isShared_1602_ == 0)
{
v___x_1604_ = v___x_1601_;
goto v_reusejp_1603_;
}
else
{
lean_object* v_reuseFailAlloc_1605_; 
v_reuseFailAlloc_1605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1605_, 0, v_a_1599_);
v___x_1604_ = v_reuseFailAlloc_1605_;
goto v_reusejp_1603_;
}
v_reusejp_1603_:
{
return v___x_1604_;
}
}
}
}
else
{
lean_object* v___x_1607_; lean_object* v___x_1608_; 
lean_dec_ref(v_e_1563_);
v___x_1607_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__3);
v___x_1608_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(v___x_1607_, v___y_1564_, v___y_1565_, v___y_1566_, v___y_1567_, v___y_1568_, v___y_1569_);
return v___x_1608_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___boxed(lean_object* v_e_1609_, lean_object* v___y_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
lean_object* v_res_1617_; 
v_res_1617_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0(v_e_1609_, v___y_1610_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec(v___y_1611_);
lean_dec(v___y_1610_);
return v_res_1617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(lean_object* v_e_1618_, lean_object* v_a_1619_, lean_object* v_a_1620_, lean_object* v_a_1621_, lean_object* v_a_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_){
_start:
{
lean_object* v___y_1626_; lean_object* v___x_1627_; 
lean_inc_ref(v_e_1618_);
v___y_1626_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___boxed), 8, 1);
lean_closure_set(v___y_1626_, 0, v_e_1618_);
v___x_1627_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_whenCheck(v_e_1618_, v___y_1626_, v_a_1619_, v_a_1620_, v_a_1621_, v_a_1622_, v_a_1623_, v_a_1624_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___boxed(lean_object* v_e_1628_, lean_object* v_a_1629_, lean_object* v_a_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_, lean_object* v_a_1633_, lean_object* v_a_1634_, lean_object* v___y_1635_){
_start:
{
lean_object* v_res_1636_; 
v_res_1636_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(v_e_1628_, v_a_1629_, v_a_1630_, v_a_1631_, v_a_1632_, v_a_1633_, v_a_1634_);
lean_dec(v_a_1634_);
lean_dec_ref(v_a_1633_);
lean_dec(v_a_1632_);
lean_dec_ref(v_a_1631_);
lean_dec(v_a_1630_);
lean_dec(v_a_1629_);
return v_res_1636_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0(lean_object* v_00_u03b1_1637_, lean_object* v_constName_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_, lean_object* v___y_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_){
_start:
{
lean_object* v___x_1646_; 
v___x_1646_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_1638_, v___y_1639_, v___y_1640_, v___y_1641_, v___y_1642_, v___y_1643_, v___y_1644_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1647_, lean_object* v_constName_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0(v_00_u03b1_1647_, v_constName_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_);
lean_dec(v___y_1654_);
lean_dec_ref(v___y_1653_);
lean_dec(v___y_1652_);
lean_dec_ref(v___y_1651_);
lean_dec(v___y_1650_);
lean_dec(v___y_1649_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_1657_, lean_object* v_ref_1658_, lean_object* v_constName_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v___x_1667_; 
v___x_1667_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___redArg(v_ref_1658_, v_constName_1659_, v___y_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_, v___y_1665_);
return v___x_1667_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_1668_, lean_object* v_ref_1669_, lean_object* v_constName_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_){
_start:
{
lean_object* v_res_1678_; 
v_res_1678_ = l_Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2(v_00_u03b1_1668_, v_ref_1669_, v_constName_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
lean_dec(v___y_1672_);
lean_dec(v___y_1671_);
lean_dec(v_ref_1669_);
return v_res_1678_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3(lean_object* v_00_u03b1_1679_, lean_object* v_ref_1680_, lean_object* v_msg_1681_, lean_object* v_declHint_1682_, lean_object* v___y_1683_, lean_object* v___y_1684_, lean_object* v___y_1685_, lean_object* v___y_1686_, lean_object* v___y_1687_, lean_object* v___y_1688_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___redArg(v_ref_1680_, v_msg_1681_, v_declHint_1682_, v___y_1683_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1691_, lean_object* v_ref_1692_, lean_object* v_msg_1693_, lean_object* v_declHint_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l_Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3(v_00_u03b1_1691_, v_ref_1692_, v_msg_1693_, v_declHint_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_);
lean_dec(v___y_1700_);
lean_dec_ref(v___y_1699_);
lean_dec(v___y_1698_);
lean_dec_ref(v___y_1697_);
lean_dec(v___y_1696_);
lean_dec(v___y_1695_);
lean_dec(v_ref_1692_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(lean_object* v_msg_1703_, lean_object* v_declHint_1704_, lean_object* v___y_1705_, lean_object* v___y_1706_, lean_object* v___y_1707_, lean_object* v___y_1708_, lean_object* v___y_1709_, lean_object* v___y_1710_){
_start:
{
lean_object* v___x_1712_; 
v___x_1712_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg(v_msg_1703_, v_declHint_1704_, v___y_1710_);
return v___x_1712_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___boxed(lean_object* v_msg_1713_, lean_object* v_declHint_1714_, lean_object* v___y_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_, lean_object* v___y_1718_, lean_object* v___y_1719_, lean_object* v___y_1720_, lean_object* v___y_1721_){
_start:
{
lean_object* v_res_1722_; 
v_res_1722_ = l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5(v_msg_1713_, v_declHint_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_);
lean_dec(v___y_1720_);
lean_dec_ref(v___y_1719_);
lean_dec(v___y_1718_);
lean_dec_ref(v___y_1717_);
lean_dec(v___y_1716_);
lean_dec(v___y_1715_);
return v_res_1722_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5(lean_object* v_00_u03b1_1723_, lean_object* v_ref_1724_, lean_object* v_msg_1725_, lean_object* v___y_1726_, lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_){
_start:
{
lean_object* v___x_1733_; 
v___x_1733_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___redArg(v_ref_1724_, v_msg_1725_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_);
return v___x_1733_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5___boxed(lean_object* v_00_u03b1_1734_, lean_object* v_ref_1735_, lean_object* v_msg_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_){
_start:
{
lean_object* v_res_1744_; 
v_res_1744_ = l_Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5(v_00_u03b1_1734_, v_ref_1735_, v_msg_1736_, v___y_1737_, v___y_1738_, v___y_1739_, v___y_1740_, v___y_1741_, v___y_1742_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
lean_dec_ref(v___y_1739_);
lean_dec(v___y_1738_);
lean_dec(v___y_1737_);
lean_dec(v_ref_1735_);
return v_res_1744_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7(lean_object* v_00_u03b1_1745_, lean_object* v_msg_1746_, lean_object* v___y_1747_, lean_object* v___y_1748_, lean_object* v___y_1749_, lean_object* v___y_1750_, lean_object* v___y_1751_, lean_object* v___y_1752_){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v_msg_1746_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_);
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1755_, lean_object* v_msg_1756_, lean_object* v___y_1757_, lean_object* v___y_1758_, lean_object* v___y_1759_, lean_object* v___y_1760_, lean_object* v___y_1761_, lean_object* v___y_1762_, lean_object* v___y_1763_){
_start:
{
lean_object* v_res_1764_; 
v_res_1764_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7(v_00_u03b1_1755_, v_msg_1756_, v___y_1757_, v___y_1758_, v___y_1759_, v___y_1760_, v___y_1761_, v___y_1762_);
lean_dec(v___y_1762_);
lean_dec_ref(v___y_1761_);
lean_dec(v___y_1760_);
lean_dec_ref(v___y_1759_);
lean_dec(v___y_1758_);
lean_dec(v___y_1757_);
return v_res_1764_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(lean_object* v_r_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_, lean_object* v_a_1768_, lean_object* v_a_1769_, lean_object* v_a_1770_, lean_object* v_a_1771_){
_start:
{
uint8_t v___x_1773_; 
v___x_1773_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_1766_);
if (v___x_1773_ == 0)
{
lean_object* v___x_1774_; 
v___x_1774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1774_, 0, v_r_1765_);
return v___x_1774_;
}
else
{
lean_object* v___x_1775_; 
lean_inc_ref(v_r_1765_);
v___x_1775_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_r_1765_, v_a_1767_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
if (lean_obj_tag(v___x_1775_) == 0)
{
lean_object* v_a_1776_; lean_object* v___x_1778_; uint8_t v_isShared_1779_; uint8_t v_isSharedCheck_1828_; 
v_a_1776_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1828_ == 0)
{
v___x_1778_ = v___x_1775_;
v_isShared_1779_ = v_isSharedCheck_1828_;
goto v_resetjp_1777_;
}
else
{
lean_inc(v_a_1776_);
lean_dec(v___x_1775_);
v___x_1778_ = lean_box(0);
v_isShared_1779_ = v_isSharedCheck_1828_;
goto v_resetjp_1777_;
}
v_resetjp_1777_:
{
lean_object* v_expr_1780_; lean_object* v___x_1782_; uint8_t v_isShared_1783_; uint8_t v_isSharedCheck_1826_; 
v_expr_1780_ = lean_ctor_get(v_r_1765_, 0);
v_isSharedCheck_1826_ = !lean_is_exclusive(v_r_1765_);
if (v_isSharedCheck_1826_ == 0)
{
lean_object* v_unused_1827_; 
v_unused_1827_ = lean_ctor_get(v_r_1765_, 1);
lean_dec(v_unused_1827_);
v___x_1782_ = v_r_1765_;
v_isShared_1783_ = v_isSharedCheck_1826_;
goto v_resetjp_1781_;
}
else
{
lean_inc(v_expr_1780_);
lean_dec(v_r_1765_);
v___x_1782_ = lean_box(0);
v_isShared_1783_ = v_isSharedCheck_1826_;
goto v_resetjp_1781_;
}
v_resetjp_1781_:
{
uint8_t v___x_1784_; 
v___x_1784_ = l_Lean_Expr_isSort(v_a_1776_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; 
lean_del_object(v___x_1778_);
lean_inc(v_a_1771_);
lean_inc_ref(v_a_1770_);
lean_inc(v_a_1769_);
lean_inc_ref(v_a_1768_);
v___x_1785_ = lean_whnf(v_a_1776_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
if (lean_obj_tag(v___x_1785_) == 0)
{
lean_object* v_a_1786_; lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1810_; 
v_a_1786_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1810_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1788_ = v___x_1785_;
v_isShared_1789_ = v_isSharedCheck_1810_;
goto v_resetjp_1787_;
}
else
{
lean_inc(v_a_1786_);
lean_dec(v___x_1785_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1810_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
if (lean_obj_tag(v_a_1786_) == 3)
{
lean_object* v___x_1790_; lean_object* v___x_1792_; 
v___x_1790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1790_, 0, v_a_1786_);
lean_inc_ref(v_expr_1780_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 1, v___x_1790_);
v___x_1792_ = v___x_1782_;
goto v_reusejp_1791_;
}
else
{
lean_object* v_reuseFailAlloc_1808_; 
v_reuseFailAlloc_1808_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1808_, 0, v_expr_1780_);
lean_ctor_set(v_reuseFailAlloc_1808_, 1, v___x_1790_);
v___x_1792_ = v_reuseFailAlloc_1808_;
goto v_reusejp_1791_;
}
v_reusejp_1791_:
{
lean_object* v___x_1793_; lean_object* v_count_1794_; lean_object* v_results_1795_; lean_object* v___x_1797_; uint8_t v_isShared_1798_; uint8_t v_isSharedCheck_1807_; 
v___x_1793_ = lean_st_ref_take(v_a_1767_);
v_count_1794_ = lean_ctor_get(v___x_1793_, 0);
v_results_1795_ = lean_ctor_get(v___x_1793_, 1);
v_isSharedCheck_1807_ = !lean_is_exclusive(v___x_1793_);
if (v_isSharedCheck_1807_ == 0)
{
v___x_1797_ = v___x_1793_;
v_isShared_1798_ = v_isSharedCheck_1807_;
goto v_resetjp_1796_;
}
else
{
lean_inc(v_results_1795_);
lean_inc(v_count_1794_);
lean_dec(v___x_1793_);
v___x_1797_ = lean_box(0);
v_isShared_1798_ = v_isSharedCheck_1807_;
goto v_resetjp_1796_;
}
v_resetjp_1796_:
{
lean_object* v___x_1799_; lean_object* v___x_1801_; 
lean_inc_ref(v___x_1792_);
v___x_1799_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type_spec__0___redArg(v_results_1795_, v_expr_1780_, v___x_1792_);
if (v_isShared_1798_ == 0)
{
lean_ctor_set(v___x_1797_, 1, v___x_1799_);
v___x_1801_ = v___x_1797_;
goto v_reusejp_1800_;
}
else
{
lean_object* v_reuseFailAlloc_1806_; 
v_reuseFailAlloc_1806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1806_, 0, v_count_1794_);
lean_ctor_set(v_reuseFailAlloc_1806_, 1, v___x_1799_);
v___x_1801_ = v_reuseFailAlloc_1806_;
goto v_reusejp_1800_;
}
v_reusejp_1800_:
{
lean_object* v___x_1802_; lean_object* v___x_1804_; 
v___x_1802_ = lean_st_ref_put(v_a_1767_, v___x_1801_);
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v___x_1792_);
v___x_1804_ = v___x_1788_;
goto v_reusejp_1803_;
}
else
{
lean_object* v_reuseFailAlloc_1805_; 
v_reuseFailAlloc_1805_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1805_, 0, v___x_1792_);
v___x_1804_ = v_reuseFailAlloc_1805_;
goto v_reusejp_1803_;
}
v_reusejp_1803_:
{
return v___x_1804_;
}
}
}
}
}
else
{
lean_object* v___x_1809_; 
lean_del_object(v___x_1788_);
lean_dec(v_a_1786_);
lean_del_object(v___x_1782_);
v___x_1809_ = l_Lean_Meta_throwTypeExpected___redArg(v_expr_1780_, v_a_1768_, v_a_1769_, v_a_1770_, v_a_1771_);
return v___x_1809_;
}
}
}
else
{
lean_object* v_a_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1818_; 
lean_del_object(v___x_1782_);
lean_dec_ref(v_expr_1780_);
v_a_1811_ = lean_ctor_get(v___x_1785_, 0);
v_isSharedCheck_1818_ = !lean_is_exclusive(v___x_1785_);
if (v_isSharedCheck_1818_ == 0)
{
v___x_1813_ = v___x_1785_;
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_a_1811_);
lean_dec(v___x_1785_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1818_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
lean_object* v___x_1816_; 
if (v_isShared_1814_ == 0)
{
v___x_1816_ = v___x_1813_;
goto v_reusejp_1815_;
}
else
{
lean_object* v_reuseFailAlloc_1817_; 
v_reuseFailAlloc_1817_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1817_, 0, v_a_1811_);
v___x_1816_ = v_reuseFailAlloc_1817_;
goto v_reusejp_1815_;
}
v_reusejp_1815_:
{
return v___x_1816_;
}
}
}
}
else
{
lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1819_, 0, v_a_1776_);
if (v_isShared_1783_ == 0)
{
lean_ctor_set(v___x_1782_, 1, v___x_1819_);
v___x_1821_ = v___x_1782_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1825_; 
v_reuseFailAlloc_1825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1825_, 0, v_expr_1780_);
lean_ctor_set(v_reuseFailAlloc_1825_, 1, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1825_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
lean_object* v___x_1823_; 
if (v_isShared_1779_ == 0)
{
lean_ctor_set(v___x_1778_, 0, v___x_1821_);
v___x_1823_ = v___x_1778_;
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
}
}
}
}
else
{
lean_object* v_a_1829_; lean_object* v___x_1831_; uint8_t v_isShared_1832_; uint8_t v_isSharedCheck_1836_; 
lean_dec_ref(v_r_1765_);
v_a_1829_ = lean_ctor_get(v___x_1775_, 0);
v_isSharedCheck_1836_ = !lean_is_exclusive(v___x_1775_);
if (v_isSharedCheck_1836_ == 0)
{
v___x_1831_ = v___x_1775_;
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
else
{
lean_inc(v_a_1829_);
lean_dec(v___x_1775_);
v___x_1831_ = lean_box(0);
v_isShared_1832_ = v_isSharedCheck_1836_;
goto v_resetjp_1830_;
}
v_resetjp_1830_:
{
lean_object* v___x_1834_; 
if (v_isShared_1832_ == 0)
{
v___x_1834_ = v___x_1831_;
goto v_reusejp_1833_;
}
else
{
lean_object* v_reuseFailAlloc_1835_; 
v_reuseFailAlloc_1835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1835_, 0, v_a_1829_);
v___x_1834_ = v_reuseFailAlloc_1835_;
goto v_reusejp_1833_;
}
v_reusejp_1833_:
{
return v___x_1834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType___boxed(lean_object* v_r_1837_, lean_object* v_a_1838_, lean_object* v_a_1839_, lean_object* v_a_1840_, lean_object* v_a_1841_, lean_object* v_a_1842_, lean_object* v_a_1843_, lean_object* v___y_1844_){
_start:
{
lean_object* v_res_1845_; 
v_res_1845_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(v_r_1837_, v_a_1838_, v_a_1839_, v_a_1840_, v_a_1841_, v_a_1842_, v_a_1843_);
lean_dec(v_a_1843_);
lean_dec_ref(v_a_1842_);
lean_dec(v_a_1841_);
lean_dec_ref(v_a_1840_);
lean_dec(v_a_1839_);
lean_dec(v_a_1838_);
return v_res_1845_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(lean_object* v_msg_1846_){
_start:
{
lean_object* v___x_1847_; lean_object* v___x_1848_; 
v___x_1847_ = l_Lean_instInhabitedExpr;
v___x_1848_ = lean_panic_fn_borrowed(v___x_1847_, v_msg_1846_);
return v___x_1848_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3(void){
_start:
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; 
v___x_1852_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__2));
v___x_1853_ = lean_unsigned_to_nat(18u);
v___x_1854_ = lean_unsigned_to_nat(2002u);
v___x_1855_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__1));
v___x_1856_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0));
v___x_1857_ = l_mkPanicMessageWithDecl(v___x_1856_, v___x_1855_, v___x_1854_, v___x_1853_, v___x_1852_);
return v___x_1857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(lean_object* v_e_1858_, lean_object* v_f_1859_, lean_object* v_a_1860_, lean_object* v_a_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_, lean_object* v_a_1864_, lean_object* v_a_1865_, lean_object* v_a_1866_){
_start:
{
lean_object* v___y_1869_; lean_object* v___y_1874_; lean_object* v___y_1875_; lean_object* v___y_1876_; lean_object* v___y_1882_; lean_object* v_fType_1899_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; lean_object* v___y_1904_; uint8_t v___x_1943_; 
v___x_1943_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_1861_);
if (v___x_1943_ == 0)
{
if (lean_obj_tag(v_e_1858_) == 5)
{
lean_object* v_expr_1944_; lean_object* v_expr_1945_; lean_object* v_fn_1946_; lean_object* v_arg_1947_; size_t v___x_1948_; size_t v___x_1949_; uint8_t v___x_1950_; 
v_expr_1944_ = lean_ctor_get(v_f_1859_, 0);
lean_inc_ref(v_expr_1944_);
lean_dec_ref(v_f_1859_);
v_expr_1945_ = lean_ctor_get(v_a_1860_, 0);
lean_inc_ref(v_expr_1945_);
lean_dec_ref(v_a_1860_);
v_fn_1946_ = lean_ctor_get(v_e_1858_, 0);
v_arg_1947_ = lean_ctor_get(v_e_1858_, 1);
v___x_1948_ = lean_ptr_addr(v_fn_1946_);
v___x_1949_ = lean_ptr_addr(v_expr_1944_);
v___x_1950_ = lean_usize_dec_eq(v___x_1948_, v___x_1949_);
if (v___x_1950_ == 0)
{
lean_object* v___x_1951_; 
lean_dec_ref_known(v_e_1858_, 2);
v___x_1951_ = l_Lean_Expr_app___override(v_expr_1944_, v_expr_1945_);
v___y_1869_ = v___x_1951_;
goto v___jp_1868_;
}
else
{
size_t v___x_1952_; size_t v___x_1953_; uint8_t v___x_1954_; 
v___x_1952_ = lean_ptr_addr(v_arg_1947_);
v___x_1953_ = lean_ptr_addr(v_expr_1945_);
v___x_1954_ = lean_usize_dec_eq(v___x_1952_, v___x_1953_);
if (v___x_1954_ == 0)
{
lean_object* v___x_1955_; 
lean_dec_ref_known(v_e_1858_, 2);
v___x_1955_ = l_Lean_Expr_app___override(v_expr_1944_, v_expr_1945_);
v___y_1869_ = v___x_1955_;
goto v___jp_1868_;
}
else
{
lean_dec_ref(v_expr_1945_);
lean_dec_ref(v_expr_1944_);
v___y_1869_ = v_e_1858_;
goto v___jp_1868_;
}
}
}
else
{
lean_object* v___x_1956_; lean_object* v___x_1957_; 
lean_dec_ref(v_a_1860_);
lean_dec_ref(v_f_1859_);
lean_dec_ref(v_e_1858_);
v___x_1956_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3);
v___x_1957_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_1956_);
v___y_1869_ = v___x_1957_;
goto v___jp_1868_;
}
}
else
{
lean_object* v___x_1958_; 
lean_inc_ref(v_f_1859_);
v___x_1958_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_f_1859_, v_a_1862_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_);
if (lean_obj_tag(v___x_1958_) == 0)
{
lean_object* v_a_1959_; uint8_t v___x_1960_; 
v_a_1959_ = lean_ctor_get(v___x_1958_, 0);
lean_inc(v_a_1959_);
lean_dec_ref_known(v___x_1958_, 1);
v___x_1960_ = l_Lean_Expr_isForall(v_a_1959_);
if (v___x_1960_ == 0)
{
lean_object* v___x_1961_; 
lean_inc(v_a_1866_);
lean_inc_ref(v_a_1865_);
lean_inc(v_a_1864_);
lean_inc_ref(v_a_1863_);
v___x_1961_ = lean_whnf(v_a_1959_, v_a_1863_, v_a_1864_, v_a_1865_, v_a_1866_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v_a_1962_; 
v_a_1962_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_a_1962_);
lean_dec_ref_known(v___x_1961_, 1);
v_fType_1899_ = v_a_1962_;
v___y_1900_ = v_a_1862_;
v___y_1901_ = v_a_1863_;
v___y_1902_ = v_a_1864_;
v___y_1903_ = v_a_1865_;
v___y_1904_ = v_a_1866_;
goto v___jp_1898_;
}
else
{
lean_object* v_a_1963_; lean_object* v___x_1965_; uint8_t v_isShared_1966_; uint8_t v_isSharedCheck_1970_; 
lean_dec_ref(v_a_1860_);
lean_dec_ref(v_f_1859_);
lean_dec_ref(v_e_1858_);
v_a_1963_ = lean_ctor_get(v___x_1961_, 0);
v_isSharedCheck_1970_ = !lean_is_exclusive(v___x_1961_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1965_ = v___x_1961_;
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
else
{
lean_inc(v_a_1963_);
lean_dec(v___x_1961_);
v___x_1965_ = lean_box(0);
v_isShared_1966_ = v_isSharedCheck_1970_;
goto v_resetjp_1964_;
}
v_resetjp_1964_:
{
lean_object* v___x_1968_; 
if (v_isShared_1966_ == 0)
{
v___x_1968_ = v___x_1965_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v_a_1963_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
}
else
{
v_fType_1899_ = v_a_1959_;
v___y_1900_ = v_a_1862_;
v___y_1901_ = v_a_1863_;
v___y_1902_ = v_a_1864_;
v___y_1903_ = v_a_1865_;
v___y_1904_ = v_a_1866_;
goto v___jp_1898_;
}
}
else
{
lean_object* v_a_1971_; lean_object* v___x_1973_; uint8_t v_isShared_1974_; uint8_t v_isSharedCheck_1978_; 
lean_dec_ref(v_a_1860_);
lean_dec_ref(v_f_1859_);
lean_dec_ref(v_e_1858_);
v_a_1971_ = lean_ctor_get(v___x_1958_, 0);
v_isSharedCheck_1978_ = !lean_is_exclusive(v___x_1958_);
if (v_isSharedCheck_1978_ == 0)
{
v___x_1973_ = v___x_1958_;
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
else
{
lean_inc(v_a_1971_);
lean_dec(v___x_1958_);
v___x_1973_ = lean_box(0);
v_isShared_1974_ = v_isSharedCheck_1978_;
goto v_resetjp_1972_;
}
v_resetjp_1972_:
{
lean_object* v___x_1976_; 
if (v_isShared_1974_ == 0)
{
v___x_1976_ = v___x_1973_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_a_1971_);
v___x_1976_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
return v___x_1976_;
}
}
}
}
v___jp_1868_:
{
lean_object* v___x_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; 
v___x_1870_ = lean_box(0);
v___x_1871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1871_, 0, v___y_1869_);
lean_ctor_set(v___x_1871_, 1, v___x_1870_);
v___x_1872_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1872_, 0, v___x_1871_);
return v___x_1872_;
}
v___jp_1873_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; 
v___x_1877_ = lean_expr_instantiate1(v___y_1874_, v___y_1875_);
lean_dec_ref(v___y_1875_);
lean_dec_ref(v___y_1874_);
v___x_1878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1878_, 0, v___x_1877_);
v___x_1879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1879_, 0, v___y_1876_);
lean_ctor_set(v___x_1879_, 1, v___x_1878_);
v___x_1880_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1880_, 0, v___x_1879_);
return v___x_1880_;
}
v___jp_1881_:
{
if (lean_obj_tag(v_e_1858_) == 5)
{
lean_object* v_expr_1883_; lean_object* v_expr_1884_; lean_object* v_fn_1885_; lean_object* v_arg_1886_; size_t v___x_1887_; size_t v___x_1888_; uint8_t v___x_1889_; 
v_expr_1883_ = lean_ctor_get(v_f_1859_, 0);
lean_inc_ref(v_expr_1883_);
lean_dec_ref(v_f_1859_);
v_expr_1884_ = lean_ctor_get(v_a_1860_, 0);
lean_inc_ref(v_expr_1884_);
lean_dec_ref(v_a_1860_);
v_fn_1885_ = lean_ctor_get(v_e_1858_, 0);
v_arg_1886_ = lean_ctor_get(v_e_1858_, 1);
v___x_1887_ = lean_ptr_addr(v_fn_1885_);
v___x_1888_ = lean_ptr_addr(v_expr_1883_);
v___x_1889_ = lean_usize_dec_eq(v___x_1887_, v___x_1888_);
if (v___x_1889_ == 0)
{
lean_object* v___x_1890_; 
lean_dec_ref_known(v_e_1858_, 2);
lean_inc_ref(v_expr_1884_);
v___x_1890_ = l_Lean_Expr_app___override(v_expr_1883_, v_expr_1884_);
v___y_1874_ = v___y_1882_;
v___y_1875_ = v_expr_1884_;
v___y_1876_ = v___x_1890_;
goto v___jp_1873_;
}
else
{
size_t v___x_1891_; size_t v___x_1892_; uint8_t v___x_1893_; 
v___x_1891_ = lean_ptr_addr(v_arg_1886_);
v___x_1892_ = lean_ptr_addr(v_expr_1884_);
v___x_1893_ = lean_usize_dec_eq(v___x_1891_, v___x_1892_);
if (v___x_1893_ == 0)
{
lean_object* v___x_1894_; 
lean_dec_ref_known(v_e_1858_, 2);
lean_inc_ref(v_expr_1884_);
v___x_1894_ = l_Lean_Expr_app___override(v_expr_1883_, v_expr_1884_);
v___y_1874_ = v___y_1882_;
v___y_1875_ = v_expr_1884_;
v___y_1876_ = v___x_1894_;
goto v___jp_1873_;
}
else
{
lean_dec_ref(v_expr_1883_);
v___y_1874_ = v___y_1882_;
v___y_1875_ = v_expr_1884_;
v___y_1876_ = v_e_1858_;
goto v___jp_1873_;
}
}
}
else
{
lean_object* v_expr_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; 
lean_dec_ref(v_f_1859_);
lean_dec_ref(v_e_1858_);
v_expr_1895_ = lean_ctor_get(v_a_1860_, 0);
lean_inc_ref(v_expr_1895_);
lean_dec_ref(v_a_1860_);
v___x_1896_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__3);
v___x_1897_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_1896_);
v___y_1874_ = v___y_1882_;
v___y_1875_ = v_expr_1895_;
v___y_1876_ = v___x_1897_;
goto v___jp_1873_;
}
}
v___jp_1898_:
{
if (lean_obj_tag(v_fType_1899_) == 7)
{
lean_object* v_binderType_1905_; lean_object* v_body_1906_; lean_object* v___x_1907_; 
v_binderType_1905_ = lean_ctor_get(v_fType_1899_, 1);
lean_inc_ref(v_binderType_1905_);
v_body_1906_ = lean_ctor_get(v_fType_1899_, 2);
lean_inc_ref(v_body_1906_);
lean_dec_ref_known(v_fType_1899_, 3);
lean_inc_ref(v_a_1860_);
v___x_1907_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_a_1860_, v___y_1900_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; lean_object* v___x_1909_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
lean_dec_ref_known(v___x_1907_, 1);
v___x_1909_ = l_Lean_Meta_isExprDefEq(v_binderType_1905_, v_a_1908_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1909_) == 0)
{
lean_object* v_a_1910_; uint8_t v___x_1911_; 
v_a_1910_ = lean_ctor_get(v___x_1909_, 0);
lean_inc(v_a_1910_);
lean_dec_ref_known(v___x_1909_, 1);
v___x_1911_ = lean_unbox(v_a_1910_);
lean_dec(v_a_1910_);
if (v___x_1911_ == 0)
{
lean_object* v_expr_1912_; lean_object* v_expr_1913_; lean_object* v___x_1914_; 
v_expr_1912_ = lean_ctor_get(v_f_1859_, 0);
v_expr_1913_ = lean_ctor_get(v_a_1860_, 0);
lean_inc_ref(v_expr_1913_);
lean_inc_ref(v_expr_1912_);
v___x_1914_ = l_Lean_Meta_throwAppTypeMismatch___redArg(v_expr_1912_, v_expr_1913_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
if (lean_obj_tag(v___x_1914_) == 0)
{
lean_dec_ref_known(v___x_1914_, 1);
v___y_1882_ = v_body_1906_;
goto v___jp_1881_;
}
else
{
lean_object* v_a_1915_; lean_object* v___x_1917_; uint8_t v_isShared_1918_; uint8_t v_isSharedCheck_1922_; 
lean_dec_ref(v_body_1906_);
lean_dec_ref(v_a_1860_);
lean_dec_ref(v_f_1859_);
lean_dec_ref(v_e_1858_);
v_a_1915_ = lean_ctor_get(v___x_1914_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v___x_1914_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1917_ = v___x_1914_;
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
else
{
lean_inc(v_a_1915_);
lean_dec(v___x_1914_);
v___x_1917_ = lean_box(0);
v_isShared_1918_ = v_isSharedCheck_1922_;
goto v_resetjp_1916_;
}
v_resetjp_1916_:
{
lean_object* v___x_1920_; 
if (v_isShared_1918_ == 0)
{
v___x_1920_ = v___x_1917_;
goto v_reusejp_1919_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v_a_1915_);
v___x_1920_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1919_;
}
v_reusejp_1919_:
{
return v___x_1920_;
}
}
}
}
else
{
v___y_1882_ = v_body_1906_;
goto v___jp_1881_;
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_dec_ref(v_body_1906_);
lean_dec_ref(v_a_1860_);
lean_dec_ref(v_f_1859_);
lean_dec_ref(v_e_1858_);
v_a_1923_ = lean_ctor_get(v___x_1909_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1909_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1909_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1909_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
else
{
lean_object* v_a_1931_; lean_object* v___x_1933_; uint8_t v_isShared_1934_; uint8_t v_isSharedCheck_1938_; 
lean_dec_ref(v_body_1906_);
lean_dec_ref(v_binderType_1905_);
lean_dec_ref(v_a_1860_);
lean_dec_ref(v_f_1859_);
lean_dec_ref(v_e_1858_);
v_a_1931_ = lean_ctor_get(v___x_1907_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v___x_1907_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1933_ = v___x_1907_;
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
else
{
lean_inc(v_a_1931_);
lean_dec(v___x_1907_);
v___x_1933_ = lean_box(0);
v_isShared_1934_ = v_isSharedCheck_1938_;
goto v_resetjp_1932_;
}
v_resetjp_1932_:
{
lean_object* v___x_1936_; 
if (v_isShared_1934_ == 0)
{
v___x_1936_ = v___x_1933_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v_a_1931_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
}
else
{
lean_object* v_expr_1939_; lean_object* v_expr_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; 
lean_dec_ref(v_fType_1899_);
lean_dec_ref(v_e_1858_);
v_expr_1939_ = lean_ctor_get(v_f_1859_, 0);
lean_inc_ref(v_expr_1939_);
lean_dec_ref(v_f_1859_);
v_expr_1940_ = lean_ctor_get(v_a_1860_, 0);
lean_inc_ref(v_expr_1940_);
lean_dec_ref(v_a_1860_);
v___x_1941_ = l_Lean_Expr_app___override(v_expr_1939_, v_expr_1940_);
v___x_1942_ = l_Lean_Meta_throwFunctionExpected___redArg(v___x_1941_, v___y_1901_, v___y_1902_, v___y_1903_, v___y_1904_);
return v___x_1942_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___boxed(lean_object* v_e_1979_, lean_object* v_f_1980_, lean_object* v_a_1981_, lean_object* v_a_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_, lean_object* v_a_1985_, lean_object* v_a_1986_, lean_object* v_a_1987_, lean_object* v___y_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(v_e_1979_, v_f_1980_, v_a_1981_, v_a_1982_, v_a_1983_, v_a_1984_, v_a_1985_, v_a_1986_, v_a_1987_);
lean_dec(v_a_1987_);
lean_dec_ref(v_a_1986_);
lean_dec(v_a_1985_);
lean_dec_ref(v_a_1984_);
lean_dec(v_a_1983_);
lean_dec(v_a_1982_);
return v_res_1989_;
}
}
static lean_object* _init_l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; 
v___x_1991_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__2));
v___x_1992_ = lean_unsigned_to_nat(37u);
v___x_1993_ = lean_unsigned_to_nat(345u);
v___x_1994_ = ((lean_object*)(l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__0));
v___x_1995_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst___lam__0___closed__0));
v___x_1996_ = l_mkPanicMessageWithDecl(v___x_1995_, v___x_1994_, v___x_1993_, v___x_1992_, v___x_1991_);
return v___x_1996_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(lean_object* v_fvars_1997_, lean_object* v_i_1998_, lean_object* v_a_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_, lean_object* v___y_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_){
_start:
{
lean_object* v_zero_2007_; uint8_t v_isZero_2008_; 
v_zero_2007_ = lean_unsigned_to_nat(0u);
v_isZero_2008_ = lean_nat_dec_eq(v_i_1998_, v_zero_2007_);
if (v_isZero_2008_ == 1)
{
lean_object* v___x_2009_; 
lean_dec(v_i_1998_);
v___x_2009_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2009_, 0, v_a_1999_);
return v___x_2009_;
}
else
{
lean_object* v_one_2010_; lean_object* v_n_2011_; lean_object* v___y_2013_; lean_object* v___y_2014_; lean_object* v___y_2018_; lean_object* v___y_2019_; lean_object* v___y_2022_; lean_object* v___x_2025_; 
v_one_2010_ = lean_unsigned_to_nat(1u);
v_n_2011_ = lean_nat_sub(v_i_1998_, v_one_2010_);
lean_dec(v_i_1998_);
v___x_2025_ = lean_array_fget_borrowed(v_fvars_1997_, v_n_2011_);
if (lean_obj_tag(v___x_2025_) == 1)
{
lean_object* v_fvarId_2026_; lean_object* v___x_2027_; 
v_fvarId_2026_ = lean_ctor_get(v___x_2025_, 0);
lean_inc(v_fvarId_2026_);
v___x_2027_ = l_Lean_FVarId_findDecl_x3f___redArg(v_fvarId_2026_, v___y_2002_);
if (lean_obj_tag(v___x_2027_) == 0)
{
lean_object* v_a_2028_; 
v_a_2028_ = lean_ctor_get(v___x_2027_, 0);
lean_inc(v_a_2028_);
lean_dec_ref_known(v___x_2027_, 1);
if (lean_obj_tag(v_a_2028_) == 1)
{
lean_object* v_val_2029_; 
v_val_2029_ = lean_ctor_get(v_a_2028_, 0);
lean_inc(v_val_2029_);
lean_dec_ref_known(v_a_2028_, 1);
if (lean_obj_tag(v_val_2029_) == 0)
{
lean_object* v_userName_2030_; lean_object* v_type_2031_; uint8_t v_bi_2032_; lean_object* v_expr_2033_; lean_object* v_type_x3f_2034_; lean_object* v___x_2036_; uint8_t v_isShared_2037_; uint8_t v_isSharedCheck_2055_; 
v_userName_2030_ = lean_ctor_get(v_val_2029_, 2);
lean_inc(v_userName_2030_);
v_type_2031_ = lean_ctor_get(v_val_2029_, 3);
lean_inc_ref(v_type_2031_);
v_bi_2032_ = lean_ctor_get_uint8(v_val_2029_, sizeof(void*)*4);
lean_dec_ref_known(v_val_2029_, 4);
v_expr_2033_ = lean_ctor_get(v_a_1999_, 0);
v_type_x3f_2034_ = lean_ctor_get(v_a_1999_, 1);
v_isSharedCheck_2055_ = !lean_is_exclusive(v_a_1999_);
if (v_isSharedCheck_2055_ == 0)
{
v___x_2036_ = v_a_1999_;
v_isShared_2037_ = v_isSharedCheck_2055_;
goto v_resetjp_2035_;
}
else
{
lean_inc(v_type_x3f_2034_);
lean_inc(v_expr_2033_);
lean_dec(v_a_1999_);
v___x_2036_ = lean_box(0);
v_isShared_2037_ = v_isSharedCheck_2055_;
goto v_resetjp_2035_;
}
v_resetjp_2035_:
{
lean_object* v___x_2038_; lean_object* v___x_2039_; lean_object* v___y_2041_; 
v___x_2038_ = lean_expr_abstract_range(v_type_2031_, v_n_2011_, v_fvars_1997_);
lean_dec_ref(v_type_2031_);
lean_inc_ref(v___x_2038_);
lean_inc(v_userName_2030_);
v___x_2039_ = l_Lean_Expr_lam___override(v_userName_2030_, v___x_2038_, v_expr_2033_, v_bi_2032_);
if (lean_obj_tag(v_type_x3f_2034_) == 0)
{
lean_dec_ref(v___x_2038_);
lean_dec(v_userName_2030_);
v___y_2041_ = v_type_x3f_2034_;
goto v___jp_2040_;
}
else
{
lean_object* v_val_2046_; lean_object* v___x_2048_; uint8_t v_isShared_2049_; uint8_t v_isSharedCheck_2054_; 
v_val_2046_ = lean_ctor_get(v_type_x3f_2034_, 0);
v_isSharedCheck_2054_ = !lean_is_exclusive(v_type_x3f_2034_);
if (v_isSharedCheck_2054_ == 0)
{
v___x_2048_ = v_type_x3f_2034_;
v_isShared_2049_ = v_isSharedCheck_2054_;
goto v_resetjp_2047_;
}
else
{
lean_inc(v_val_2046_);
lean_dec(v_type_x3f_2034_);
v___x_2048_ = lean_box(0);
v_isShared_2049_ = v_isSharedCheck_2054_;
goto v_resetjp_2047_;
}
v_resetjp_2047_:
{
lean_object* v___x_2050_; lean_object* v___x_2052_; 
v___x_2050_ = l_Lean_Expr_forallE___override(v_userName_2030_, v___x_2038_, v_val_2046_, v_bi_2032_);
if (v_isShared_2049_ == 0)
{
lean_ctor_set(v___x_2048_, 0, v___x_2050_);
v___x_2052_ = v___x_2048_;
goto v_reusejp_2051_;
}
else
{
lean_object* v_reuseFailAlloc_2053_; 
v_reuseFailAlloc_2053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2053_, 0, v___x_2050_);
v___x_2052_ = v_reuseFailAlloc_2053_;
goto v_reusejp_2051_;
}
v_reusejp_2051_:
{
v___y_2041_ = v___x_2052_;
goto v___jp_2040_;
}
}
}
v___jp_2040_:
{
lean_object* v___x_2043_; 
if (v_isShared_2037_ == 0)
{
lean_ctor_set(v___x_2036_, 1, v___y_2041_);
lean_ctor_set(v___x_2036_, 0, v___x_2039_);
v___x_2043_ = v___x_2036_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2045_; 
v_reuseFailAlloc_2045_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2045_, 0, v___x_2039_);
lean_ctor_set(v_reuseFailAlloc_2045_, 1, v___y_2041_);
v___x_2043_ = v_reuseFailAlloc_2045_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
v_i_1998_ = v_n_2011_;
v_a_1999_ = v___x_2043_;
goto _start;
}
}
}
}
else
{
lean_object* v_userName_2056_; lean_object* v_type_2057_; lean_object* v_value_2058_; uint8_t v_nondep_2059_; uint8_t v_nondep_2061_; lean_object* v___x_2071_; 
v_userName_2056_ = lean_ctor_get(v_val_2029_, 2);
lean_inc(v_userName_2056_);
v_type_2057_ = lean_ctor_get(v_val_2029_, 3);
lean_inc_ref(v_type_2057_);
v_value_2058_ = lean_ctor_get(v_val_2029_, 4);
lean_inc_ref(v_value_2058_);
v_nondep_2059_ = lean_ctor_get_uint8(v_val_2029_, sizeof(void*)*5);
lean_dec_ref_known(v_val_2029_, 5);
v___x_2071_ = l_Lean_Meta_getZetaDeltaFVarIds___redArg(v___y_2003_);
if (lean_obj_tag(v___x_2071_) == 0)
{
lean_object* v_a_2072_; uint8_t v___x_2073_; 
v_a_2072_ = lean_ctor_get(v___x_2071_, 0);
lean_inc(v_a_2072_);
lean_dec_ref_known(v___x_2071_, 1);
v___x_2073_ = 1;
if (v_nondep_2059_ == 0)
{
uint8_t v___x_2074_; 
v___x_2074_ = l_Lean_FVarIdSet_contains(v_a_2072_, v_fvarId_2026_);
lean_dec(v_a_2072_);
if (v___x_2074_ == 0)
{
lean_object* v___x_2075_; 
v___x_2075_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_incCount___redArg(v___y_2001_);
lean_dec_ref(v___x_2075_);
v_nondep_2061_ = v___x_2073_;
goto v___jp_2060_;
}
else
{
v_nondep_2061_ = v_nondep_2059_;
goto v___jp_2060_;
}
}
else
{
lean_dec(v_a_2072_);
v_nondep_2061_ = v___x_2073_;
goto v___jp_2060_;
}
}
else
{
lean_object* v_a_2076_; lean_object* v___x_2078_; uint8_t v_isShared_2079_; uint8_t v_isSharedCheck_2083_; 
lean_dec_ref(v_value_2058_);
lean_dec_ref(v_type_2057_);
lean_dec(v_userName_2056_);
lean_dec(v_n_2011_);
lean_dec_ref(v_a_1999_);
v_a_2076_ = lean_ctor_get(v___x_2071_, 0);
v_isSharedCheck_2083_ = !lean_is_exclusive(v___x_2071_);
if (v_isSharedCheck_2083_ == 0)
{
v___x_2078_ = v___x_2071_;
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
else
{
lean_inc(v_a_2076_);
lean_dec(v___x_2071_);
v___x_2078_ = lean_box(0);
v_isShared_2079_ = v_isSharedCheck_2083_;
goto v_resetjp_2077_;
}
v_resetjp_2077_:
{
lean_object* v___x_2081_; 
if (v_isShared_2079_ == 0)
{
v___x_2081_ = v___x_2078_;
goto v_reusejp_2080_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v_a_2076_);
v___x_2081_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2080_;
}
v_reusejp_2080_:
{
return v___x_2081_;
}
}
}
v___jp_2060_:
{
lean_object* v_expr_2062_; lean_object* v_type_x3f_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; 
v_expr_2062_ = lean_ctor_get(v_a_1999_, 0);
lean_inc_ref(v_expr_2062_);
v_type_x3f_2063_ = lean_ctor_get(v_a_1999_, 1);
lean_inc(v_type_x3f_2063_);
lean_dec_ref(v_a_1999_);
v___x_2064_ = lean_expr_abstract_range(v_type_2057_, v_n_2011_, v_fvars_1997_);
lean_dec_ref(v_type_2057_);
v___x_2065_ = lean_expr_abstract_range(v_value_2058_, v_n_2011_, v_fvars_1997_);
lean_dec_ref(v_value_2058_);
lean_inc_ref(v___x_2065_);
lean_inc_ref(v___x_2064_);
lean_inc(v_userName_2056_);
v___x_2066_ = l_Lean_Expr_letE___override(v_userName_2056_, v___x_2064_, v___x_2065_, v_expr_2062_, v_nondep_2061_);
if (lean_obj_tag(v_type_x3f_2063_) == 0)
{
lean_dec_ref(v___x_2065_);
lean_dec_ref(v___x_2064_);
lean_dec(v_userName_2056_);
v___y_2013_ = v___x_2066_;
v___y_2014_ = v_type_x3f_2063_;
goto v___jp_2012_;
}
else
{
lean_object* v_val_2067_; uint8_t v___x_2068_; 
v_val_2067_ = lean_ctor_get(v_type_x3f_2063_, 0);
lean_inc(v_val_2067_);
lean_dec_ref_known(v_type_x3f_2063_, 1);
v___x_2068_ = lean_expr_has_loose_bvar(v_val_2067_, v_zero_2007_);
if (v___x_2068_ == 0)
{
lean_object* v___x_2069_; 
lean_dec_ref(v___x_2065_);
lean_dec_ref(v___x_2064_);
lean_dec(v_userName_2056_);
v___x_2069_ = lean_expr_lower_loose_bvars(v_val_2067_, v_one_2010_, v_one_2010_);
lean_dec(v_val_2067_);
v___y_2018_ = v___x_2066_;
v___y_2019_ = v___x_2069_;
goto v___jp_2017_;
}
else
{
lean_object* v___x_2070_; 
v___x_2070_ = l_Lean_Expr_letE___override(v_userName_2056_, v___x_2064_, v___x_2065_, v_val_2067_, v_nondep_2061_);
v___y_2018_ = v___x_2066_;
v___y_2019_ = v___x_2070_;
goto v___jp_2017_;
}
}
}
}
}
else
{
lean_object* v___x_2084_; 
lean_dec(v_a_2028_);
lean_dec_ref(v_a_1999_);
lean_inc(v_fvarId_2026_);
v___x_2084_ = l_Lean_FVarId_throwUnknown___redArg(v_fvarId_2026_, v___y_2004_, v___y_2005_);
v___y_2022_ = v___x_2084_;
goto v___jp_2021_;
}
}
else
{
lean_object* v_a_2085_; lean_object* v___x_2087_; uint8_t v_isShared_2088_; uint8_t v_isSharedCheck_2092_; 
lean_dec(v_n_2011_);
lean_dec_ref(v_a_1999_);
v_a_2085_ = lean_ctor_get(v___x_2027_, 0);
v_isSharedCheck_2092_ = !lean_is_exclusive(v___x_2027_);
if (v_isSharedCheck_2092_ == 0)
{
v___x_2087_ = v___x_2027_;
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
else
{
lean_inc(v_a_2085_);
lean_dec(v___x_2027_);
v___x_2087_ = lean_box(0);
v_isShared_2088_ = v_isSharedCheck_2092_;
goto v_resetjp_2086_;
}
v_resetjp_2086_:
{
lean_object* v___x_2090_; 
if (v_isShared_2088_ == 0)
{
v___x_2090_ = v___x_2087_;
goto v_reusejp_2089_;
}
else
{
lean_object* v_reuseFailAlloc_2091_; 
v_reuseFailAlloc_2091_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2091_, 0, v_a_2085_);
v___x_2090_ = v_reuseFailAlloc_2091_;
goto v_reusejp_2089_;
}
v_reusejp_2089_:
{
return v___x_2090_;
}
}
}
}
else
{
lean_object* v___x_2093_; lean_object* v___x_2094_; 
lean_dec_ref(v_a_1999_);
v___x_2093_ = lean_obj_once(&l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1, &l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1_once, _init_l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___closed__1);
v___x_2094_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__1(v___x_2093_, v___y_2000_, v___y_2001_, v___y_2002_, v___y_2003_, v___y_2004_, v___y_2005_);
v___y_2022_ = v___x_2094_;
goto v___jp_2021_;
}
v___jp_2012_:
{
lean_object* v___x_2015_; 
v___x_2015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2015_, 0, v___y_2013_);
lean_ctor_set(v___x_2015_, 1, v___y_2014_);
v_i_1998_ = v_n_2011_;
v_a_1999_ = v___x_2015_;
goto _start;
}
v___jp_2017_:
{
lean_object* v___x_2020_; 
v___x_2020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2020_, 0, v___y_2019_);
v___y_2013_ = v___y_2018_;
v___y_2014_ = v___x_2020_;
goto v___jp_2012_;
}
v___jp_2021_:
{
if (lean_obj_tag(v___y_2022_) == 0)
{
lean_object* v_a_2023_; 
v_a_2023_ = lean_ctor_get(v___y_2022_, 0);
lean_inc(v_a_2023_);
lean_dec_ref_known(v___y_2022_, 1);
v_i_1998_ = v_n_2011_;
v_a_1999_ = v_a_2023_;
goto _start;
}
else
{
lean_dec(v_n_2011_);
return v___y_2022_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg___boxed(lean_object* v_fvars_2095_, lean_object* v_i_2096_, lean_object* v_a_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_, lean_object* v___y_2100_, lean_object* v___y_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_, lean_object* v___y_2104_){
_start:
{
lean_object* v_res_2105_; 
v_res_2105_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(v_fvars_2095_, v_i_2096_, v_a_2097_, v___y_2098_, v___y_2099_, v___y_2100_, v___y_2101_, v___y_2102_, v___y_2103_);
lean_dec(v___y_2103_);
lean_dec_ref(v___y_2102_);
lean_dec(v___y_2101_);
lean_dec_ref(v___y_2100_);
lean_dec(v___y_2099_);
lean_dec(v___y_2098_);
lean_dec_ref(v_fvars_2095_);
return v_res_2105_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__1(lean_object* v_a_2106_, lean_object* v_a_2107_){
_start:
{
if (lean_obj_tag(v_a_2106_) == 0)
{
lean_object* v___x_2108_; 
v___x_2108_ = l_List_reverse___redArg(v_a_2107_);
return v___x_2108_;
}
else
{
lean_object* v_head_2109_; lean_object* v_tail_2110_; lean_object* v___x_2112_; uint8_t v_isShared_2113_; uint8_t v_isSharedCheck_2119_; 
v_head_2109_ = lean_ctor_get(v_a_2106_, 0);
v_tail_2110_ = lean_ctor_get(v_a_2106_, 1);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_a_2106_);
if (v_isSharedCheck_2119_ == 0)
{
v___x_2112_ = v_a_2106_;
v_isShared_2113_ = v_isSharedCheck_2119_;
goto v_resetjp_2111_;
}
else
{
lean_inc(v_tail_2110_);
lean_inc(v_head_2109_);
lean_dec(v_a_2106_);
v___x_2112_ = lean_box(0);
v_isShared_2113_ = v_isSharedCheck_2119_;
goto v_resetjp_2111_;
}
v_resetjp_2111_:
{
lean_object* v___x_2114_; lean_object* v___x_2116_; 
v___x_2114_ = l_Lean_MessageData_ofExpr(v_head_2109_);
if (v_isShared_2113_ == 0)
{
lean_ctor_set(v___x_2112_, 1, v_a_2107_);
lean_ctor_set(v___x_2112_, 0, v___x_2114_);
v___x_2116_ = v___x_2112_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2118_; 
v_reuseFailAlloc_2118_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2118_, 0, v___x_2114_);
lean_ctor_set(v_reuseFailAlloc_2118_, 1, v_a_2107_);
v___x_2116_ = v_reuseFailAlloc_2118_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
v_a_2106_ = v_tail_2110_;
v_a_2107_ = v___x_2116_;
goto _start;
}
}
}
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2120_; double v___x_2121_; 
v___x_2120_ = lean_unsigned_to_nat(0u);
v___x_2121_ = lean_float_of_nat(v___x_2120_);
return v___x_2121_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(lean_object* v_cls_2125_, lean_object* v_msg_2126_, lean_object* v___y_2127_, lean_object* v___y_2128_, lean_object* v___y_2129_, lean_object* v___y_2130_){
_start:
{
lean_object* v_ref_2132_; lean_object* v___x_2133_; lean_object* v_a_2134_; lean_object* v___x_2136_; uint8_t v_isShared_2137_; uint8_t v_isSharedCheck_2178_; 
v_ref_2132_ = lean_ctor_get(v___y_2129_, 2);
v___x_2133_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_2126_, v___y_2127_, v___y_2128_, v___y_2129_, v___y_2130_);
v_a_2134_ = lean_ctor_get(v___x_2133_, 0);
v_isSharedCheck_2178_ = !lean_is_exclusive(v___x_2133_);
if (v_isSharedCheck_2178_ == 0)
{
v___x_2136_ = v___x_2133_;
v_isShared_2137_ = v_isSharedCheck_2178_;
goto v_resetjp_2135_;
}
else
{
lean_inc(v_a_2134_);
lean_dec(v___x_2133_);
v___x_2136_ = lean_box(0);
v_isShared_2137_ = v_isSharedCheck_2178_;
goto v_resetjp_2135_;
}
v_resetjp_2135_:
{
lean_object* v___x_2138_; lean_object* v_traceState_2139_; lean_object* v_env_2140_; lean_object* v_nextMacroScope_2141_; lean_object* v_ngen_2142_; lean_object* v_auxDeclNGen_2143_; lean_object* v_cache_2144_; lean_object* v_messages_2145_; lean_object* v_infoState_2146_; lean_object* v_snapshotTasks_2147_; lean_object* v___x_2149_; uint8_t v_isShared_2150_; uint8_t v_isSharedCheck_2177_; 
v___x_2138_ = lean_st_ref_take(v___y_2130_);
v_traceState_2139_ = lean_ctor_get(v___x_2138_, 4);
v_env_2140_ = lean_ctor_get(v___x_2138_, 0);
v_nextMacroScope_2141_ = lean_ctor_get(v___x_2138_, 1);
v_ngen_2142_ = lean_ctor_get(v___x_2138_, 2);
v_auxDeclNGen_2143_ = lean_ctor_get(v___x_2138_, 3);
v_cache_2144_ = lean_ctor_get(v___x_2138_, 5);
v_messages_2145_ = lean_ctor_get(v___x_2138_, 6);
v_infoState_2146_ = lean_ctor_get(v___x_2138_, 7);
v_snapshotTasks_2147_ = lean_ctor_get(v___x_2138_, 8);
v_isSharedCheck_2177_ = !lean_is_exclusive(v___x_2138_);
if (v_isSharedCheck_2177_ == 0)
{
v___x_2149_ = v___x_2138_;
v_isShared_2150_ = v_isSharedCheck_2177_;
goto v_resetjp_2148_;
}
else
{
lean_inc(v_snapshotTasks_2147_);
lean_inc(v_infoState_2146_);
lean_inc(v_messages_2145_);
lean_inc(v_cache_2144_);
lean_inc(v_traceState_2139_);
lean_inc(v_auxDeclNGen_2143_);
lean_inc(v_ngen_2142_);
lean_inc(v_nextMacroScope_2141_);
lean_inc(v_env_2140_);
lean_dec(v___x_2138_);
v___x_2149_ = lean_box(0);
v_isShared_2150_ = v_isSharedCheck_2177_;
goto v_resetjp_2148_;
}
v_resetjp_2148_:
{
uint64_t v_tid_2151_; lean_object* v_traces_2152_; lean_object* v___x_2154_; uint8_t v_isShared_2155_; uint8_t v_isSharedCheck_2176_; 
v_tid_2151_ = lean_ctor_get_uint64(v_traceState_2139_, sizeof(void*)*1);
v_traces_2152_ = lean_ctor_get(v_traceState_2139_, 0);
v_isSharedCheck_2176_ = !lean_is_exclusive(v_traceState_2139_);
if (v_isSharedCheck_2176_ == 0)
{
v___x_2154_ = v_traceState_2139_;
v_isShared_2155_ = v_isSharedCheck_2176_;
goto v_resetjp_2153_;
}
else
{
lean_inc(v_traces_2152_);
lean_dec(v_traceState_2139_);
v___x_2154_ = lean_box(0);
v_isShared_2155_ = v_isSharedCheck_2176_;
goto v_resetjp_2153_;
}
v_resetjp_2153_:
{
lean_object* v___x_2156_; lean_object* v___x_2157_; double v___x_2158_; uint8_t v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2167_; 
v___x_2156_ = lean_box(0);
v___x_2157_ = lean_box(0);
v___x_2158_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
v___x_2159_ = 0;
v___x_2160_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1));
v___x_2161_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2161_, 0, v_cls_2125_);
lean_ctor_set(v___x_2161_, 1, v___x_2157_);
lean_ctor_set(v___x_2161_, 2, v___x_2160_);
lean_ctor_set_float(v___x_2161_, sizeof(void*)*3, v___x_2158_);
lean_ctor_set_float(v___x_2161_, sizeof(void*)*3 + 8, v___x_2158_);
lean_ctor_set_uint8(v___x_2161_, sizeof(void*)*3 + 16, v___x_2159_);
v___x_2162_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2));
v___x_2163_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2161_);
lean_ctor_set(v___x_2163_, 1, v_a_2134_);
lean_ctor_set(v___x_2163_, 2, v___x_2162_);
lean_inc(v_ref_2132_);
v___x_2164_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2164_, 0, v_ref_2132_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = l_Lean_PersistentArray_push___redArg(v_traces_2152_, v___x_2164_);
if (v_isShared_2155_ == 0)
{
lean_ctor_set(v___x_2154_, 0, v___x_2165_);
v___x_2167_ = v___x_2154_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2175_; 
v_reuseFailAlloc_2175_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2175_, 0, v___x_2165_);
lean_ctor_set_uint64(v_reuseFailAlloc_2175_, sizeof(void*)*1, v_tid_2151_);
v___x_2167_ = v_reuseFailAlloc_2175_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
lean_object* v___x_2169_; 
if (v_isShared_2150_ == 0)
{
lean_ctor_set(v___x_2149_, 4, v___x_2167_);
v___x_2169_ = v___x_2149_;
goto v_reusejp_2168_;
}
else
{
lean_object* v_reuseFailAlloc_2174_; 
v_reuseFailAlloc_2174_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_2174_, 0, v_env_2140_);
lean_ctor_set(v_reuseFailAlloc_2174_, 1, v_nextMacroScope_2141_);
lean_ctor_set(v_reuseFailAlloc_2174_, 2, v_ngen_2142_);
lean_ctor_set(v_reuseFailAlloc_2174_, 3, v_auxDeclNGen_2143_);
lean_ctor_set(v_reuseFailAlloc_2174_, 4, v___x_2167_);
lean_ctor_set(v_reuseFailAlloc_2174_, 5, v_cache_2144_);
lean_ctor_set(v_reuseFailAlloc_2174_, 6, v_messages_2145_);
lean_ctor_set(v_reuseFailAlloc_2174_, 7, v_infoState_2146_);
lean_ctor_set(v_reuseFailAlloc_2174_, 8, v_snapshotTasks_2147_);
v___x_2169_ = v_reuseFailAlloc_2174_;
goto v_reusejp_2168_;
}
v_reusejp_2168_:
{
lean_object* v___x_2170_; lean_object* v___x_2172_; 
v___x_2170_ = lean_st_ref_put(v___y_2130_, v___x_2169_);
if (v_isShared_2137_ == 0)
{
lean_ctor_set(v___x_2136_, 0, v___x_2156_);
v___x_2172_ = v___x_2136_;
goto v_reusejp_2171_;
}
else
{
lean_object* v_reuseFailAlloc_2173_; 
v_reuseFailAlloc_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2173_, 0, v___x_2156_);
v___x_2172_ = v_reuseFailAlloc_2173_;
goto v_reusejp_2171_;
}
v_reusejp_2171_:
{
return v___x_2172_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___boxed(lean_object* v_cls_2179_, lean_object* v_msg_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
lean_object* v_res_2186_; 
v_res_2186_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(v_cls_2179_, v_msg_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
lean_dec_ref(v___y_2181_);
return v_res_2186_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6(void){
_start:
{
lean_object* v_cls_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; 
v_cls_2197_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3));
v___x_2198_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5));
v___x_2199_ = l_Lean_Name_append(v___x_2198_, v_cls_2197_);
return v___x_2199_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8(void){
_start:
{
lean_object* v___x_2201_; lean_object* v___x_2202_; 
v___x_2201_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__7));
v___x_2202_ = l_Lean_stringToMessageData(v___x_2201_);
return v___x_2202_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10(void){
_start:
{
lean_object* v___x_2204_; lean_object* v___x_2205_; 
v___x_2204_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__9));
v___x_2205_ = l_Lean_stringToMessageData(v___x_2204_);
return v___x_2205_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12(void){
_start:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; 
v___x_2207_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__11));
v___x_2208_ = l_Lean_stringToMessageData(v___x_2207_);
return v___x_2208_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15(void){
_start:
{
lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2212_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__14));
v___x_2213_ = l_Lean_MessageData_ofFormat(v___x_2212_);
return v___x_2213_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(lean_object* v_fvars_2214_, lean_object* v_body_2215_, lean_object* v_a_2216_, lean_object* v_a_2217_, lean_object* v_a_2218_, lean_object* v_a_2219_, lean_object* v_a_2220_, lean_object* v_a_2221_){
_start:
{
lean_object* v___y_2224_; lean_object* v___y_2225_; lean_object* v___y_2226_; lean_object* v___y_2227_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2231_; lean_object* v___y_2236_; lean_object* v___y_2237_; lean_object* v___y_2238_; lean_object* v___y_2239_; lean_object* v___y_2240_; lean_object* v___y_2241_; lean_object* v_toCold_2254_; lean_object* v_options_2255_; uint8_t v_hasTrace_2256_; 
v_toCold_2254_ = lean_ctor_get(v_a_2220_, 0);
v_options_2255_ = lean_ctor_get(v_toCold_2254_, 2);
v_hasTrace_2256_ = lean_ctor_get_uint8(v_options_2255_, sizeof(void*)*1);
if (v_hasTrace_2256_ == 0)
{
v___y_2236_ = v_a_2216_;
v___y_2237_ = v_a_2217_;
v___y_2238_ = v_a_2218_;
v___y_2239_ = v_a_2219_;
v___y_2240_ = v_a_2220_;
v___y_2241_ = v_a_2221_;
goto v___jp_2235_;
}
else
{
lean_object* v_inheritedTraceOptions_2257_; lean_object* v_cls_2258_; lean_object* v___x_2259_; uint8_t v___x_2260_; 
v_inheritedTraceOptions_2257_ = lean_ctor_get(v_toCold_2254_, 11);
v_cls_2258_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3));
v___x_2259_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6);
v___x_2260_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2257_, v_options_2255_, v___x_2259_);
if (v___x_2260_ == 0)
{
v___y_2236_ = v_a_2216_;
v___y_2237_ = v_a_2217_;
v___y_2238_ = v_a_2218_;
v___y_2239_ = v_a_2219_;
v___y_2240_ = v_a_2220_;
v___y_2241_ = v_a_2221_;
goto v___jp_2235_;
}
else
{
lean_object* v_expr_2261_; lean_object* v_type_x3f_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; lean_object* v___x_2265_; lean_object* v___x_2266_; lean_object* v___x_2267_; lean_object* v___x_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; lean_object* v___x_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___y_2275_; 
v_expr_2261_ = lean_ctor_get(v_body_2215_, 0);
v_type_x3f_2262_ = lean_ctor_get(v_body_2215_, 1);
v___x_2263_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__8);
lean_inc_ref(v_fvars_2214_);
v___x_2264_ = lean_array_to_list(v_fvars_2214_);
v___x_2265_ = lean_box(0);
v___x_2266_ = l_List_mapTR_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__1(v___x_2264_, v___x_2265_);
v___x_2267_ = l_Lean_MessageData_ofList(v___x_2266_);
v___x_2268_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2263_);
lean_ctor_set(v___x_2268_, 1, v___x_2267_);
v___x_2269_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__10);
v___x_2270_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2270_, 0, v___x_2268_);
lean_ctor_set(v___x_2270_, 1, v___x_2269_);
lean_inc_ref(v_expr_2261_);
v___x_2271_ = l_Lean_MessageData_ofExpr(v_expr_2261_);
v___x_2272_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__12);
v___x_2273_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2273_, 0, v___x_2271_);
lean_ctor_set(v___x_2273_, 1, v___x_2272_);
if (lean_obj_tag(v_type_x3f_2262_) == 0)
{
lean_object* v___x_2288_; 
v___x_2288_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__15);
v___y_2275_ = v___x_2288_;
goto v___jp_2274_;
}
else
{
lean_object* v_val_2289_; lean_object* v___x_2290_; 
v_val_2289_ = lean_ctor_get(v_type_x3f_2262_, 0);
lean_inc(v_val_2289_);
v___x_2290_ = l_Lean_MessageData_ofExpr(v_val_2289_);
v___y_2275_ = v___x_2290_;
goto v___jp_2274_;
}
v___jp_2274_:
{
lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2276_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2276_, 0, v___x_2273_);
lean_ctor_set(v___x_2276_, 1, v___y_2275_);
v___x_2277_ = l_Lean_indentD(v___x_2276_);
v___x_2278_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2278_, 0, v___x_2270_);
lean_ctor_set(v___x_2278_, 1, v___x_2277_);
v___x_2279_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(v_cls_2258_, v___x_2278_, v_a_2218_, v_a_2219_, v_a_2220_, v_a_2221_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_dec_ref_known(v___x_2279_, 1);
v___y_2236_ = v_a_2216_;
v___y_2237_ = v_a_2217_;
v___y_2238_ = v_a_2218_;
v___y_2239_ = v_a_2219_;
v___y_2240_ = v_a_2220_;
v___y_2241_ = v_a_2221_;
goto v___jp_2235_;
}
else
{
lean_object* v_a_2280_; lean_object* v___x_2282_; uint8_t v_isShared_2283_; uint8_t v_isSharedCheck_2287_; 
lean_dec_ref(v_body_2215_);
lean_dec_ref(v_fvars_2214_);
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2287_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2287_ == 0)
{
v___x_2282_ = v___x_2279_;
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
else
{
lean_inc(v_a_2280_);
lean_dec(v___x_2279_);
v___x_2282_ = lean_box(0);
v_isShared_2283_ = v_isSharedCheck_2287_;
goto v_resetjp_2281_;
}
v_resetjp_2281_:
{
lean_object* v___x_2285_; 
if (v_isShared_2283_ == 0)
{
v___x_2285_ = v___x_2282_;
goto v_reusejp_2284_;
}
else
{
lean_object* v_reuseFailAlloc_2286_; 
v_reuseFailAlloc_2286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2286_, 0, v_a_2280_);
v___x_2285_ = v_reuseFailAlloc_2286_;
goto v_reusejp_2284_;
}
v_reusejp_2284_:
{
return v___x_2285_;
}
}
}
}
}
}
v___jp_2223_:
{
lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2232_, 0, v___y_2227_);
lean_ctor_set(v___x_2232_, 1, v___y_2231_);
v___x_2233_ = lean_array_get_size(v_fvars_2214_);
v___x_2234_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(v_fvars_2214_, v___x_2233_, v___x_2232_, v___y_2226_, v___y_2230_, v___y_2224_, v___y_2228_, v___y_2229_, v___y_2225_);
lean_dec_ref(v_fvars_2214_);
return v___x_2234_;
}
v___jp_2235_:
{
lean_object* v_expr_2242_; lean_object* v_type_x3f_2243_; lean_object* v___x_2244_; 
v_expr_2242_ = lean_ctor_get(v_body_2215_, 0);
lean_inc_ref(v_expr_2242_);
v_type_x3f_2243_ = lean_ctor_get(v_body_2215_, 1);
lean_inc(v_type_x3f_2243_);
lean_dec_ref(v_body_2215_);
v___x_2244_ = lean_expr_abstract(v_expr_2242_, v_fvars_2214_);
lean_dec_ref(v_expr_2242_);
if (lean_obj_tag(v_type_x3f_2243_) == 0)
{
v___y_2224_ = v___y_2238_;
v___y_2225_ = v___y_2241_;
v___y_2226_ = v___y_2236_;
v___y_2227_ = v___x_2244_;
v___y_2228_ = v___y_2239_;
v___y_2229_ = v___y_2240_;
v___y_2230_ = v___y_2237_;
v___y_2231_ = v_type_x3f_2243_;
goto v___jp_2223_;
}
else
{
lean_object* v_val_2245_; lean_object* v___x_2247_; uint8_t v_isShared_2248_; uint8_t v_isSharedCheck_2253_; 
v_val_2245_ = lean_ctor_get(v_type_x3f_2243_, 0);
v_isSharedCheck_2253_ = !lean_is_exclusive(v_type_x3f_2243_);
if (v_isSharedCheck_2253_ == 0)
{
v___x_2247_ = v_type_x3f_2243_;
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
else
{
lean_inc(v_val_2245_);
lean_dec(v_type_x3f_2243_);
v___x_2247_ = lean_box(0);
v_isShared_2248_ = v_isSharedCheck_2253_;
goto v_resetjp_2246_;
}
v_resetjp_2246_:
{
lean_object* v___x_2249_; lean_object* v___x_2251_; 
v___x_2249_ = lean_expr_abstract(v_val_2245_, v_fvars_2214_);
lean_dec(v_val_2245_);
if (v_isShared_2248_ == 0)
{
lean_ctor_set(v___x_2247_, 0, v___x_2249_);
v___x_2251_ = v___x_2247_;
goto v_reusejp_2250_;
}
else
{
lean_object* v_reuseFailAlloc_2252_; 
v_reuseFailAlloc_2252_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2252_, 0, v___x_2249_);
v___x_2251_ = v_reuseFailAlloc_2252_;
goto v_reusejp_2250_;
}
v_reusejp_2250_:
{
v___y_2224_ = v___y_2238_;
v___y_2225_ = v___y_2241_;
v___y_2226_ = v___y_2236_;
v___y_2227_ = v___x_2244_;
v___y_2228_ = v___y_2239_;
v___y_2229_ = v___y_2240_;
v___y_2230_ = v___y_2237_;
v___y_2231_ = v___x_2251_;
goto v___jp_2223_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___boxed(lean_object* v_fvars_2291_, lean_object* v_body_2292_, lean_object* v_a_2293_, lean_object* v_a_2294_, lean_object* v_a_2295_, lean_object* v_a_2296_, lean_object* v_a_2297_, lean_object* v_a_2298_, lean_object* v___y_2299_){
_start:
{
lean_object* v_res_2300_; 
v_res_2300_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(v_fvars_2291_, v_body_2292_, v_a_2293_, v_a_2294_, v_a_2295_, v_a_2296_, v_a_2297_, v_a_2298_);
lean_dec(v_a_2298_);
lean_dec_ref(v_a_2297_);
lean_dec(v_a_2296_);
lean_dec_ref(v_a_2295_);
lean_dec(v_a_2294_);
lean_dec(v_a_2293_);
return v_res_2300_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0(lean_object* v_fvars_2301_, lean_object* v_n_2302_, lean_object* v_i_2303_, lean_object* v_a_2304_, lean_object* v_a_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_, lean_object* v___y_2309_, lean_object* v___y_2310_, lean_object* v___y_2311_){
_start:
{
lean_object* v___x_2313_; 
v___x_2313_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___redArg(v_fvars_2301_, v_i_2303_, v_a_2305_, v___y_2306_, v___y_2307_, v___y_2308_, v___y_2309_, v___y_2310_, v___y_2311_);
return v___x_2313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0___boxed(lean_object* v_fvars_2314_, lean_object* v_n_2315_, lean_object* v_i_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_, lean_object* v___y_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = l___private_Init_Data_Nat_Control_0__Nat_foldRevM_loop___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__0(v_fvars_2314_, v_n_2315_, v_i_2316_, v_a_2317_, v_a_2318_, v___y_2319_, v___y_2320_, v___y_2321_, v___y_2322_, v___y_2323_, v___y_2324_);
lean_dec(v___y_2324_);
lean_dec_ref(v___y_2323_);
lean_dec(v___y_2322_);
lean_dec_ref(v___y_2321_);
lean_dec(v___y_2320_);
lean_dec(v___y_2319_);
lean_dec(v_n_2315_);
lean_dec_ref(v_fvars_2314_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2(lean_object* v_cls_2327_, lean_object* v_msg_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_, lean_object* v___y_2334_){
_start:
{
lean_object* v___x_2336_; 
v___x_2336_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg(v_cls_2327_, v_msg_2328_, v___y_2331_, v___y_2332_, v___y_2333_, v___y_2334_);
return v___x_2336_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___boxed(lean_object* v_cls_2337_, lean_object* v_msg_2338_, lean_object* v___y_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_, lean_object* v___y_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2(v_cls_2337_, v_msg_2338_, v___y_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_, v___y_2344_);
lean_dec(v___y_2344_);
lean_dec_ref(v___y_2343_);
lean_dec(v___y_2342_);
lean_dec_ref(v___y_2341_);
lean_dec(v___y_2340_);
lean_dec(v___y_2339_);
return v_res_2346_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2348_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__0));
v___x_2349_ = l_Lean_stringToMessageData(v___x_2348_);
return v___x_2349_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2351_; lean_object* v___x_2352_; 
v___x_2351_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__2));
v___x_2352_ = l_Lean_stringToMessageData(v___x_2351_);
return v___x_2352_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(lean_object* v_struct_2353_, lean_object* v_structName_2354_, lean_object* v_idx_2355_, lean_object* v_a_2356_, lean_object* v_00_u03b1_2357_, lean_object* v_x_2358_, lean_object* v___y_2359_, lean_object* v___y_2360_, lean_object* v___y_2361_, lean_object* v___y_2362_, lean_object* v___y_2363_, lean_object* v___y_2364_){
_start:
{
lean_object* v_expr_2366_; lean_object* v___x_2368_; uint8_t v_isShared_2369_; uint8_t v_isSharedCheck_2381_; 
v_expr_2366_ = lean_ctor_get(v_struct_2353_, 0);
v_isSharedCheck_2381_ = !lean_is_exclusive(v_struct_2353_);
if (v_isSharedCheck_2381_ == 0)
{
lean_object* v_unused_2382_; 
v_unused_2382_ = lean_ctor_get(v_struct_2353_, 1);
lean_dec(v_unused_2382_);
v___x_2368_ = v_struct_2353_;
v_isShared_2369_ = v_isSharedCheck_2381_;
goto v_resetjp_2367_;
}
else
{
lean_inc(v_expr_2366_);
lean_dec(v_struct_2353_);
v___x_2368_ = lean_box(0);
v_isShared_2369_ = v_isSharedCheck_2381_;
goto v_resetjp_2367_;
}
v_resetjp_2367_:
{
lean_object* v___x_2370_; lean_object* v___x_2371_; lean_object* v___x_2372_; lean_object* v___x_2374_; 
v___x_2370_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1);
v___x_2371_ = l_Lean_mkProj(v_structName_2354_, v_idx_2355_, v_expr_2366_);
v___x_2372_ = l_Lean_indentExpr(v___x_2371_);
if (v_isShared_2369_ == 0)
{
lean_ctor_set_tag(v___x_2368_, 7);
lean_ctor_set(v___x_2368_, 1, v___x_2372_);
lean_ctor_set(v___x_2368_, 0, v___x_2370_);
v___x_2374_ = v___x_2368_;
goto v_reusejp_2373_;
}
else
{
lean_object* v_reuseFailAlloc_2380_; 
v_reuseFailAlloc_2380_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2380_, 0, v___x_2370_);
lean_ctor_set(v_reuseFailAlloc_2380_, 1, v___x_2372_);
v___x_2374_ = v_reuseFailAlloc_2380_;
goto v_reusejp_2373_;
}
v_reusejp_2373_:
{
lean_object* v___x_2375_; lean_object* v___x_2376_; lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; 
v___x_2375_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3);
v___x_2376_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2374_);
lean_ctor_set(v___x_2376_, 1, v___x_2375_);
v___x_2377_ = l_Lean_indentExpr(v_a_2356_);
v___x_2378_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2378_, 0, v___x_2376_);
lean_ctor_set(v___x_2378_, 1, v___x_2377_);
v___x_2379_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_2378_, v___y_2361_, v___y_2362_, v___y_2363_, v___y_2364_);
return v___x_2379_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___boxed(lean_object* v_struct_2383_, lean_object* v_structName_2384_, lean_object* v_idx_2385_, lean_object* v_a_2386_, lean_object* v_00_u03b1_2387_, lean_object* v_x_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_, lean_object* v___y_2394_, lean_object* v___y_2395_){
_start:
{
lean_object* v_res_2396_; 
v_res_2396_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2383_, v_structName_2384_, v_idx_2385_, v_a_2386_, v_00_u03b1_2387_, v_x_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_, v___y_2393_, v___y_2394_);
lean_dec(v___y_2394_);
lean_dec_ref(v___y_2393_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec(v___y_2389_);
return v_res_2396_;
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(lean_object* v_constName_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_){
_start:
{
lean_object* v___x_2405_; lean_object* v_env_2406_; uint8_t v___x_2407_; lean_object* v___x_2408_; 
v___x_2405_ = lean_st_ref_get(v___y_2403_);
v_env_2406_ = lean_ctor_get(v___x_2405_, 0);
lean_inc_ref(v_env_2406_);
lean_dec(v___x_2405_);
v___x_2407_ = 0;
lean_inc(v_constName_2397_);
v___x_2408_ = l_Lean_Environment_find_x3f(v_env_2406_, v_constName_2397_, v___x_2407_);
if (lean_obj_tag(v___x_2408_) == 0)
{
lean_object* v___x_2409_; 
v___x_2409_ = l_Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0___redArg(v_constName_2397_, v___y_2398_, v___y_2399_, v___y_2400_, v___y_2401_, v___y_2402_, v___y_2403_);
return v___x_2409_;
}
else
{
lean_object* v_val_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
lean_dec(v_constName_2397_);
v_val_2410_ = lean_ctor_get(v___x_2408_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2408_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2408_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_val_2410_);
lean_dec(v___x_2408_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
lean_ctor_set_tag(v___x_2412_, 0);
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_val_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0___boxed(lean_object* v_constName_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_, lean_object* v___y_2423_, lean_object* v___y_2424_, lean_object* v___y_2425_){
_start:
{
lean_object* v_res_2426_; 
v_res_2426_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(v_constName_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_, v___y_2423_, v___y_2424_);
lean_dec(v___y_2424_);
lean_dec_ref(v___y_2423_);
lean_dec(v___y_2422_);
lean_dec_ref(v___y_2421_);
lean_dec(v___y_2420_);
lean_dec(v___y_2419_);
return v_res_2426_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0(lean_object* v_struct_2427_, lean_object* v_structName_2428_, lean_object* v_idx_2429_, lean_object* v_a_2430_, lean_object* v_00_u03b1_2431_, lean_object* v_x_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_, lean_object* v___y_2436_, lean_object* v___y_2437_, lean_object* v___y_2438_){
_start:
{
lean_object* v_expr_2440_; lean_object* v___x_2442_; uint8_t v_isShared_2443_; uint8_t v_isSharedCheck_2455_; 
v_expr_2440_ = lean_ctor_get(v_struct_2427_, 0);
v_isSharedCheck_2455_ = !lean_is_exclusive(v_struct_2427_);
if (v_isSharedCheck_2455_ == 0)
{
lean_object* v_unused_2456_; 
v_unused_2456_ = lean_ctor_get(v_struct_2427_, 1);
lean_dec(v_unused_2456_);
v___x_2442_ = v_struct_2427_;
v_isShared_2443_ = v_isSharedCheck_2455_;
goto v_resetjp_2441_;
}
else
{
lean_inc(v_expr_2440_);
lean_dec(v_struct_2427_);
v___x_2442_ = lean_box(0);
v_isShared_2443_ = v_isSharedCheck_2455_;
goto v_resetjp_2441_;
}
v_resetjp_2441_:
{
lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2448_; 
v___x_2444_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__1);
v___x_2445_ = l_Lean_mkProj(v_structName_2428_, v_idx_2429_, v_expr_2440_);
v___x_2446_ = l_Lean_indentExpr(v___x_2445_);
if (v_isShared_2443_ == 0)
{
lean_ctor_set_tag(v___x_2442_, 7);
lean_ctor_set(v___x_2442_, 1, v___x_2446_);
lean_ctor_set(v___x_2442_, 0, v___x_2444_);
v___x_2448_ = v___x_2442_;
goto v_reusejp_2447_;
}
else
{
lean_object* v_reuseFailAlloc_2454_; 
v_reuseFailAlloc_2454_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2454_, 0, v___x_2444_);
lean_ctor_set(v_reuseFailAlloc_2454_, 1, v___x_2446_);
v___x_2448_ = v_reuseFailAlloc_2454_;
goto v_reusejp_2447_;
}
v_reusejp_2447_:
{
lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; lean_object* v___x_2452_; lean_object* v___x_2453_; 
v___x_2449_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0___closed__3);
v___x_2450_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2450_, 0, v___x_2448_);
lean_ctor_set(v___x_2450_, 1, v___x_2449_);
v___x_2451_ = l_Lean_indentExpr(v_a_2430_);
v___x_2452_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2450_);
lean_ctor_set(v___x_2452_, 1, v___x_2451_);
v___x_2453_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_2452_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
return v___x_2453_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0___boxed(lean_object* v_struct_2457_, lean_object* v_structName_2458_, lean_object* v_idx_2459_, lean_object* v_a_2460_, lean_object* v_00_u03b1_2461_, lean_object* v_x_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_, lean_object* v___y_2468_, lean_object* v___y_2469_){
_start:
{
lean_object* v_res_2470_; 
v_res_2470_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0(v_struct_2457_, v_structName_2458_, v_idx_2459_, v_a_2460_, v_00_u03b1_2461_, v_x_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_, v___y_2468_);
lean_dec(v___y_2468_);
lean_dec_ref(v___y_2467_);
lean_dec(v___y_2466_);
lean_dec_ref(v___y_2465_);
lean_dec(v___y_2464_);
lean_dec(v___y_2463_);
return v_res_2470_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(lean_object* v_a_2471_, lean_object* v_fst_2472_, lean_object* v_struct_2473_, lean_object* v_structName_2474_, uint8_t v_a_2475_, lean_object* v___f_2476_, lean_object* v_snd_2477_, lean_object* v_____r_2478_, lean_object* v_ctorType_2479_, lean_object* v_j_2480_, lean_object* v___y_2481_, lean_object* v___y_2482_, lean_object* v___y_2483_, lean_object* v___y_2484_, lean_object* v___y_2485_, lean_object* v___y_2486_){
_start:
{
if (lean_obj_tag(v_ctorType_2479_) == 7)
{
lean_object* v_binderType_2488_; lean_object* v_body_2489_; lean_object* v___x_2490_; 
lean_dec(v_snd_2477_);
v_binderType_2488_ = lean_ctor_get(v_ctorType_2479_, 1);
lean_inc_ref(v_binderType_2488_);
v_body_2489_ = lean_ctor_get(v_ctorType_2479_, 2);
lean_inc_ref(v_body_2489_);
lean_dec_ref_known(v_ctorType_2479_, 3);
v___x_2490_ = lean_expr_instantiate_rev_range(v_binderType_2488_, v_j_2480_, v_a_2471_, v_fst_2472_);
lean_dec_ref(v_binderType_2488_);
if (v_a_2475_ == 0)
{
lean_dec_ref(v___f_2476_);
goto v___jp_2491_;
}
else
{
lean_object* v___x_2507_; 
lean_inc_ref(v___x_2490_);
v___x_2507_ = l_Lean_Meta_isProp(v___x_2490_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_);
if (lean_obj_tag(v___x_2507_) == 0)
{
lean_object* v_a_2508_; uint8_t v___x_2509_; 
v_a_2508_ = lean_ctor_get(v___x_2507_, 0);
lean_inc(v_a_2508_);
lean_dec_ref_known(v___x_2507_, 1);
v___x_2509_ = lean_unbox(v_a_2508_);
lean_dec(v_a_2508_);
if (v___x_2509_ == 0)
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
v___x_2510_ = lean_box(0);
lean_inc(v___y_2486_);
lean_inc_ref(v___y_2485_);
lean_inc(v___y_2484_);
lean_inc_ref(v___y_2483_);
lean_inc(v___y_2482_);
lean_inc(v___y_2481_);
v___x_2511_ = lean_apply_9(v___f_2476_, lean_box(0), v___x_2510_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, lean_box(0));
if (lean_obj_tag(v___x_2511_) == 0)
{
lean_dec_ref_known(v___x_2511_, 1);
goto v___jp_2491_;
}
else
{
lean_object* v_a_2512_; lean_object* v___x_2514_; uint8_t v_isShared_2515_; uint8_t v_isSharedCheck_2519_; 
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_body_2489_);
lean_dec(v_structName_2474_);
lean_dec_ref(v_struct_2473_);
lean_dec(v_fst_2472_);
lean_dec(v_a_2471_);
v_a_2512_ = lean_ctor_get(v___x_2511_, 0);
v_isSharedCheck_2519_ = !lean_is_exclusive(v___x_2511_);
if (v_isSharedCheck_2519_ == 0)
{
v___x_2514_ = v___x_2511_;
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
else
{
lean_inc(v_a_2512_);
lean_dec(v___x_2511_);
v___x_2514_ = lean_box(0);
v_isShared_2515_ = v_isSharedCheck_2519_;
goto v_resetjp_2513_;
}
v_resetjp_2513_:
{
lean_object* v___x_2517_; 
if (v_isShared_2515_ == 0)
{
v___x_2517_ = v___x_2514_;
goto v_reusejp_2516_;
}
else
{
lean_object* v_reuseFailAlloc_2518_; 
v_reuseFailAlloc_2518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2518_, 0, v_a_2512_);
v___x_2517_ = v_reuseFailAlloc_2518_;
goto v_reusejp_2516_;
}
v_reusejp_2516_:
{
return v___x_2517_;
}
}
}
}
else
{
lean_dec_ref(v___f_2476_);
goto v___jp_2491_;
}
}
else
{
lean_object* v_a_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2527_; 
lean_dec_ref(v___x_2490_);
lean_dec_ref(v_body_2489_);
lean_dec_ref(v___f_2476_);
lean_dec(v_structName_2474_);
lean_dec_ref(v_struct_2473_);
lean_dec(v_fst_2472_);
lean_dec(v_a_2471_);
v_a_2520_ = lean_ctor_get(v___x_2507_, 0);
v_isSharedCheck_2527_ = !lean_is_exclusive(v___x_2507_);
if (v_isSharedCheck_2527_ == 0)
{
v___x_2522_ = v___x_2507_;
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_a_2520_);
lean_dec(v___x_2507_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2527_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2525_; 
if (v_isShared_2523_ == 0)
{
v___x_2525_ = v___x_2522_;
goto v_reusejp_2524_;
}
else
{
lean_object* v_reuseFailAlloc_2526_; 
v_reuseFailAlloc_2526_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2526_, 0, v_a_2520_);
v___x_2525_ = v_reuseFailAlloc_2526_;
goto v_reusejp_2524_;
}
v_reusejp_2524_:
{
return v___x_2525_;
}
}
}
}
v___jp_2491_:
{
lean_object* v_expr_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2505_; 
v_expr_2492_ = lean_ctor_get(v_struct_2473_, 0);
v_isSharedCheck_2505_ = !lean_is_exclusive(v_struct_2473_);
if (v_isSharedCheck_2505_ == 0)
{
lean_object* v_unused_2506_; 
v_unused_2506_ = lean_ctor_get(v_struct_2473_, 1);
lean_dec(v_unused_2506_);
v___x_2494_ = v_struct_2473_;
v_isShared_2495_ = v_isSharedCheck_2505_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_expr_2492_);
lean_dec(v_struct_2473_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2505_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2499_; 
v___x_2496_ = l_Lean_Expr_proj___override(v_structName_2474_, v_a_2471_, v_expr_2492_);
v___x_2497_ = lean_array_push(v_fst_2472_, v___x_2496_);
lean_inc(v_j_2480_);
if (v_isShared_2495_ == 0)
{
lean_ctor_set(v___x_2494_, 1, v___x_2490_);
lean_ctor_set(v___x_2494_, 0, v_j_2480_);
v___x_2499_ = v___x_2494_;
goto v_reusejp_2498_;
}
else
{
lean_object* v_reuseFailAlloc_2504_; 
v_reuseFailAlloc_2504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2504_, 0, v_j_2480_);
lean_ctor_set(v_reuseFailAlloc_2504_, 1, v___x_2490_);
v___x_2499_ = v_reuseFailAlloc_2504_;
goto v_reusejp_2498_;
}
v_reusejp_2498_:
{
lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; 
v___x_2500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2500_, 0, v___x_2497_);
lean_ctor_set(v___x_2500_, 1, v___x_2499_);
v___x_2501_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2501_, 0, v_body_2489_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2502_, 0, v___x_2501_);
v___x_2503_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2502_);
return v___x_2503_;
}
}
}
}
else
{
lean_object* v___x_2528_; lean_object* v___x_2529_; 
lean_dec(v_structName_2474_);
lean_dec_ref(v_struct_2473_);
lean_dec(v_a_2471_);
v___x_2528_ = lean_box(0);
lean_inc(v___y_2486_);
lean_inc_ref(v___y_2485_);
lean_inc(v___y_2484_);
lean_inc_ref(v___y_2483_);
lean_inc(v___y_2482_);
lean_inc(v___y_2481_);
v___x_2529_ = lean_apply_9(v___f_2476_, lean_box(0), v___x_2528_, v___y_2481_, v___y_2482_, v___y_2483_, v___y_2484_, v___y_2485_, v___y_2486_, lean_box(0));
if (lean_obj_tag(v___x_2529_) == 0)
{
lean_object* v___x_2531_; uint8_t v_isShared_2532_; uint8_t v_isSharedCheck_2540_; 
v_isSharedCheck_2540_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2540_ == 0)
{
lean_object* v_unused_2541_; 
v_unused_2541_ = lean_ctor_get(v___x_2529_, 0);
lean_dec(v_unused_2541_);
v___x_2531_ = v___x_2529_;
v_isShared_2532_ = v_isSharedCheck_2540_;
goto v_resetjp_2530_;
}
else
{
lean_dec(v___x_2529_);
v___x_2531_ = lean_box(0);
v_isShared_2532_ = v_isSharedCheck_2540_;
goto v_resetjp_2530_;
}
v_resetjp_2530_:
{
lean_object* v___x_2533_; lean_object* v___x_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2538_; 
lean_inc(v_j_2480_);
v___x_2533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2533_, 0, v_j_2480_);
lean_ctor_set(v___x_2533_, 1, v_snd_2477_);
v___x_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2534_, 0, v_fst_2472_);
lean_ctor_set(v___x_2534_, 1, v___x_2533_);
v___x_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2535_, 0, v_ctorType_2479_);
lean_ctor_set(v___x_2535_, 1, v___x_2534_);
v___x_2536_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2536_, 0, v___x_2535_);
if (v_isShared_2532_ == 0)
{
lean_ctor_set(v___x_2531_, 0, v___x_2536_);
v___x_2538_ = v___x_2531_;
goto v_reusejp_2537_;
}
else
{
lean_object* v_reuseFailAlloc_2539_; 
v_reuseFailAlloc_2539_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2539_, 0, v___x_2536_);
v___x_2538_ = v_reuseFailAlloc_2539_;
goto v_reusejp_2537_;
}
v_reusejp_2537_:
{
return v___x_2538_;
}
}
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
lean_dec_ref(v_ctorType_2479_);
lean_dec(v_snd_2477_);
lean_dec(v_fst_2472_);
v_a_2542_ = lean_ctor_get(v___x_2529_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2529_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2529_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2529_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1___boxed(lean_object** _args){
lean_object* v_a_2550_ = _args[0];
lean_object* v_fst_2551_ = _args[1];
lean_object* v_struct_2552_ = _args[2];
lean_object* v_structName_2553_ = _args[3];
lean_object* v_a_2554_ = _args[4];
lean_object* v___f_2555_ = _args[5];
lean_object* v_snd_2556_ = _args[6];
lean_object* v_____r_2557_ = _args[7];
lean_object* v_ctorType_2558_ = _args[8];
lean_object* v_j_2559_ = _args[9];
lean_object* v___y_2560_ = _args[10];
lean_object* v___y_2561_ = _args[11];
lean_object* v___y_2562_ = _args[12];
lean_object* v___y_2563_ = _args[13];
lean_object* v___y_2564_ = _args[14];
lean_object* v___y_2565_ = _args[15];
lean_object* v___y_2566_ = _args[16];
_start:
{
uint8_t v_a_19033__boxed_2567_; lean_object* v_res_2568_; 
v_a_19033__boxed_2567_ = lean_unbox(v_a_2554_);
v_res_2568_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(v_a_2550_, v_fst_2551_, v_struct_2552_, v_structName_2553_, v_a_19033__boxed_2567_, v___f_2555_, v_snd_2556_, v_____r_2557_, v_ctorType_2558_, v_j_2559_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_, v___y_2565_);
lean_dec(v___y_2565_);
lean_dec_ref(v___y_2564_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec(v___y_2560_);
lean_dec(v_j_2559_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(lean_object* v_upperBound_2569_, lean_object* v_struct_2570_, lean_object* v_structName_2571_, uint8_t v_a_2572_, lean_object* v_idx_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_b_2576_, lean_object* v___y_2577_, lean_object* v___y_2578_, lean_object* v___y_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_){
_start:
{
lean_object* v___y_2585_; uint8_t v___x_2607_; 
v___x_2607_ = lean_nat_dec_le(v_a_2575_, v_upperBound_2569_);
if (v___x_2607_ == 0)
{
lean_object* v___x_2608_; 
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
lean_dec(v_idx_2573_);
lean_dec(v_structName_2571_);
lean_dec_ref(v_struct_2570_);
v___x_2608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2608_, 0, v_b_2576_);
return v___x_2608_;
}
else
{
lean_object* v_snd_2609_; lean_object* v_snd_2610_; lean_object* v_fst_2611_; lean_object* v_fst_2612_; lean_object* v_fst_2613_; lean_object* v_snd_2614_; lean_object* v___f_2615_; uint8_t v___x_2616_; 
v_snd_2609_ = lean_ctor_get(v_b_2576_, 1);
lean_inc(v_snd_2609_);
v_snd_2610_ = lean_ctor_get(v_snd_2609_, 1);
lean_inc(v_snd_2610_);
v_fst_2611_ = lean_ctor_get(v_b_2576_, 0);
lean_inc(v_fst_2611_);
lean_dec_ref(v_b_2576_);
v_fst_2612_ = lean_ctor_get(v_snd_2609_, 0);
lean_inc(v_fst_2612_);
lean_dec(v_snd_2609_);
v_fst_2613_ = lean_ctor_get(v_snd_2610_, 0);
lean_inc(v_fst_2613_);
v_snd_2614_ = lean_ctor_get(v_snd_2610_, 1);
lean_inc(v_snd_2614_);
lean_dec(v_snd_2610_);
lean_inc_ref(v_a_2574_);
lean_inc(v_idx_2573_);
lean_inc(v_structName_2571_);
lean_inc_ref(v_struct_2570_);
v___f_2615_ = lean_alloc_closure((void*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__0___boxed), 13, 4);
lean_closure_set(v___f_2615_, 0, v_struct_2570_);
lean_closure_set(v___f_2615_, 1, v_structName_2571_);
lean_closure_set(v___f_2615_, 2, v_idx_2573_);
lean_closure_set(v___f_2615_, 3, v_a_2574_);
v___x_2616_ = l_Lean_Expr_isForall(v_fst_2611_);
if (v___x_2616_ == 0)
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = lean_expr_instantiate_rev_range(v_fst_2611_, v_fst_2613_, v_a_2575_, v_fst_2612_);
lean_dec(v_fst_2613_);
lean_dec(v_fst_2611_);
lean_inc(v___y_2582_);
lean_inc_ref(v___y_2581_);
lean_inc(v___y_2580_);
lean_inc_ref(v___y_2579_);
v___x_2618_ = lean_whnf(v___x_2617_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
v___x_2620_ = lean_box(0);
lean_inc(v_structName_2571_);
lean_inc_ref(v_struct_2570_);
lean_inc(v_a_2575_);
v___x_2621_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(v_a_2575_, v_fst_2612_, v_struct_2570_, v_structName_2571_, v_a_2572_, v___f_2615_, v_snd_2614_, v___x_2620_, v_a_2619_, v_a_2575_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
v___y_2585_ = v___x_2621_;
goto v___jp_2584_;
}
else
{
lean_object* v_a_2622_; lean_object* v___x_2624_; uint8_t v_isShared_2625_; uint8_t v_isSharedCheck_2629_; 
lean_dec_ref(v___f_2615_);
lean_dec(v_snd_2614_);
lean_dec(v_fst_2612_);
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
lean_dec(v_idx_2573_);
lean_dec(v_structName_2571_);
lean_dec_ref(v_struct_2570_);
v_a_2622_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2629_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2629_ == 0)
{
v___x_2624_ = v___x_2618_;
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
else
{
lean_inc(v_a_2622_);
lean_dec(v___x_2618_);
v___x_2624_ = lean_box(0);
v_isShared_2625_ = v_isSharedCheck_2629_;
goto v_resetjp_2623_;
}
v_resetjp_2623_:
{
lean_object* v___x_2627_; 
if (v_isShared_2625_ == 0)
{
v___x_2627_ = v___x_2624_;
goto v_reusejp_2626_;
}
else
{
lean_object* v_reuseFailAlloc_2628_; 
v_reuseFailAlloc_2628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2628_, 0, v_a_2622_);
v___x_2627_ = v_reuseFailAlloc_2628_;
goto v_reusejp_2626_;
}
v_reusejp_2626_:
{
return v___x_2627_;
}
}
}
}
else
{
lean_object* v___x_2630_; lean_object* v___x_2631_; 
v___x_2630_ = lean_box(0);
lean_inc(v_structName_2571_);
lean_inc_ref(v_struct_2570_);
lean_inc(v_a_2575_);
v___x_2631_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___lam__1(v_a_2575_, v_fst_2612_, v_struct_2570_, v_structName_2571_, v_a_2572_, v___f_2615_, v_snd_2614_, v___x_2630_, v_fst_2611_, v_fst_2613_, v___y_2577_, v___y_2578_, v___y_2579_, v___y_2580_, v___y_2581_, v___y_2582_);
lean_dec(v_fst_2613_);
v___y_2585_ = v___x_2631_;
goto v___jp_2584_;
}
}
v___jp_2584_:
{
if (lean_obj_tag(v___y_2585_) == 0)
{
lean_object* v_a_2586_; lean_object* v___x_2588_; uint8_t v_isShared_2589_; uint8_t v_isSharedCheck_2598_; 
v_a_2586_ = lean_ctor_get(v___y_2585_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___y_2585_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2588_ = v___y_2585_;
v_isShared_2589_ = v_isSharedCheck_2598_;
goto v_resetjp_2587_;
}
else
{
lean_inc(v_a_2586_);
lean_dec(v___y_2585_);
v___x_2588_ = lean_box(0);
v_isShared_2589_ = v_isSharedCheck_2598_;
goto v_resetjp_2587_;
}
v_resetjp_2587_:
{
if (lean_obj_tag(v_a_2586_) == 0)
{
lean_object* v_a_2590_; lean_object* v___x_2592_; 
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
lean_dec(v_idx_2573_);
lean_dec(v_structName_2571_);
lean_dec_ref(v_struct_2570_);
v_a_2590_ = lean_ctor_get(v_a_2586_, 0);
lean_inc(v_a_2590_);
lean_dec_ref_known(v_a_2586_, 1);
if (v_isShared_2589_ == 0)
{
lean_ctor_set(v___x_2588_, 0, v_a_2590_);
v___x_2592_ = v___x_2588_;
goto v_reusejp_2591_;
}
else
{
lean_object* v_reuseFailAlloc_2593_; 
v_reuseFailAlloc_2593_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2593_, 0, v_a_2590_);
v___x_2592_ = v_reuseFailAlloc_2593_;
goto v_reusejp_2591_;
}
v_reusejp_2591_:
{
return v___x_2592_;
}
}
else
{
lean_object* v_a_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; 
lean_del_object(v___x_2588_);
v_a_2594_ = lean_ctor_get(v_a_2586_, 0);
lean_inc(v_a_2594_);
lean_dec_ref_known(v_a_2586_, 1);
v___x_2595_ = lean_unsigned_to_nat(1u);
v___x_2596_ = lean_nat_add(v_a_2575_, v___x_2595_);
lean_dec(v_a_2575_);
v_a_2575_ = v___x_2596_;
v_b_2576_ = v_a_2594_;
goto _start;
}
}
}
else
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2606_; 
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
lean_dec(v_idx_2573_);
lean_dec(v_structName_2571_);
lean_dec_ref(v_struct_2570_);
v_a_2599_ = lean_ctor_get(v___y_2585_, 0);
v_isSharedCheck_2606_ = !lean_is_exclusive(v___y_2585_);
if (v_isSharedCheck_2606_ == 0)
{
v___x_2601_ = v___y_2585_;
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___y_2585_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2606_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v___x_2604_; 
if (v_isShared_2602_ == 0)
{
v___x_2604_ = v___x_2601_;
goto v_reusejp_2603_;
}
else
{
lean_object* v_reuseFailAlloc_2605_; 
v_reuseFailAlloc_2605_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2605_, 0, v_a_2599_);
v___x_2604_ = v_reuseFailAlloc_2605_;
goto v_reusejp_2603_;
}
v_reusejp_2603_:
{
return v___x_2604_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg___boxed(lean_object* v_upperBound_2632_, lean_object* v_struct_2633_, lean_object* v_structName_2634_, lean_object* v_a_2635_, lean_object* v_idx_2636_, lean_object* v_a_2637_, lean_object* v_a_2638_, lean_object* v_b_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_, lean_object* v___y_2642_, lean_object* v___y_2643_, lean_object* v___y_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_){
_start:
{
uint8_t v_a_19190__boxed_2647_; lean_object* v_res_2648_; 
v_a_19190__boxed_2647_ = lean_unbox(v_a_2635_);
v_res_2648_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(v_upperBound_2632_, v_struct_2633_, v_structName_2634_, v_a_19190__boxed_2647_, v_idx_2636_, v_a_2637_, v_a_2638_, v_b_2639_, v___y_2640_, v___y_2641_, v___y_2642_, v___y_2643_, v___y_2644_, v___y_2645_);
lean_dec(v___y_2645_);
lean_dec_ref(v___y_2644_);
lean_dec(v___y_2643_);
lean_dec_ref(v___y_2642_);
lean_dec(v___y_2641_);
lean_dec(v___y_2640_);
lean_dec(v_upperBound_2632_);
return v_res_2648_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2(void){
_start:
{
lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; 
v___x_2651_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__1));
v___x_2652_ = lean_unsigned_to_nat(18u);
v___x_2653_ = lean_unsigned_to_nat(2051u);
v___x_2654_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__0));
v___x_2655_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp___closed__0));
v___x_2656_ = l_mkPanicMessageWithDecl(v___x_2655_, v___x_2654_, v___x_2653_, v___x_2652_, v___x_2651_);
return v___x_2656_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3(void){
_start:
{
lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; 
v___x_2657_ = lean_obj_once(&l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2, &l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2_once, _init_l_Lean_Meta_LetToHave_instInhabitedResult_default___closed__2);
v___x_2658_ = lean_unsigned_to_nat(0u);
v___x_2659_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2659_, 0, v___x_2658_);
lean_ctor_set(v___x_2659_, 1, v___x_2657_);
return v___x_2659_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4(void){
_start:
{
lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; 
v___x_2660_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__3);
v___x_2661_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0));
v___x_2662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2662_, 0, v___x_2661_);
lean_ctor_set(v___x_2662_, 1, v___x_2660_);
return v___x_2662_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5(void){
_start:
{
lean_object* v___x_2663_; lean_object* v_dummy_2664_; 
v___x_2663_ = lean_box(0);
v_dummy_2664_ = l_Lean_Expr_sort___override(v___x_2663_);
return v_dummy_2664_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(lean_object* v_e_2665_, lean_object* v_structName_2666_, lean_object* v_idx_2667_, lean_object* v_struct_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_, lean_object* v_a_2671_, lean_object* v_a_2672_, lean_object* v_a_2673_, lean_object* v_a_2674_){
_start:
{
lean_object* v___y_2677_; lean_object* v___y_2678_; lean_object* v___y_2683_; uint8_t v___x_2687_; 
v___x_2687_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_2669_);
if (v___x_2687_ == 0)
{
lean_dec(v_idx_2667_);
lean_dec(v_structName_2666_);
if (lean_obj_tag(v_e_2665_) == 11)
{
lean_object* v_expr_2688_; lean_object* v_typeName_2689_; lean_object* v_idx_2690_; lean_object* v_struct_2691_; size_t v___x_2692_; size_t v___x_2693_; uint8_t v___x_2694_; 
v_expr_2688_ = lean_ctor_get(v_struct_2668_, 0);
lean_inc_ref(v_expr_2688_);
lean_dec_ref(v_struct_2668_);
v_typeName_2689_ = lean_ctor_get(v_e_2665_, 0);
v_idx_2690_ = lean_ctor_get(v_e_2665_, 1);
v_struct_2691_ = lean_ctor_get(v_e_2665_, 2);
v___x_2692_ = lean_ptr_addr(v_struct_2691_);
v___x_2693_ = lean_ptr_addr(v_expr_2688_);
v___x_2694_ = lean_usize_dec_eq(v___x_2692_, v___x_2693_);
if (v___x_2694_ == 0)
{
lean_object* v___x_2695_; 
lean_inc(v_idx_2690_);
lean_inc(v_typeName_2689_);
lean_dec_ref_known(v_e_2665_, 3);
v___x_2695_ = l_Lean_Expr_proj___override(v_typeName_2689_, v_idx_2690_, v_expr_2688_);
v___y_2683_ = v___x_2695_;
goto v___jp_2682_;
}
else
{
lean_dec_ref(v_expr_2688_);
v___y_2683_ = v_e_2665_;
goto v___jp_2682_;
}
}
else
{
lean_object* v___x_2696_; lean_object* v___x_2697_; 
lean_dec_ref(v_struct_2668_);
lean_dec_ref(v_e_2665_);
v___x_2696_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2);
v___x_2697_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_2696_);
v___y_2683_ = v___x_2697_;
goto v___jp_2682_;
}
}
else
{
lean_object* v___x_2698_; 
lean_inc_ref(v_struct_2668_);
v___x_2698_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_struct_2668_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
if (lean_obj_tag(v___x_2698_) == 0)
{
lean_object* v_a_2699_; lean_object* v___x_2700_; 
v_a_2699_ = lean_ctor_get(v___x_2698_, 0);
lean_inc(v_a_2699_);
lean_dec_ref_known(v___x_2698_, 1);
lean_inc(v_a_2674_);
lean_inc_ref(v_a_2673_);
lean_inc(v_a_2672_);
lean_inc_ref(v_a_2671_);
v___x_2700_ = lean_whnf(v_a_2699_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
if (lean_obj_tag(v___x_2700_) == 0)
{
lean_object* v_a_2701_; lean_object* v___x_2702_; 
v_a_2701_ = lean_ctor_get(v___x_2700_, 0);
lean_inc_n(v_a_2701_, 2);
lean_dec_ref_known(v___x_2700_, 1);
v___x_2702_ = l_Lean_Meta_isProp(v_a_2701_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
if (lean_obj_tag(v___x_2702_) == 0)
{
lean_object* v_a_2703_; lean_object* v___x_2704_; 
v_a_2703_ = lean_ctor_get(v___x_2702_, 0);
lean_inc(v_a_2703_);
lean_dec_ref_known(v___x_2702_, 1);
v___x_2704_ = l_Lean_Expr_getAppFn(v_a_2701_);
if (lean_obj_tag(v___x_2704_) == 4)
{
lean_object* v_declName_2705_; lean_object* v_us_2706_; lean_object* v___x_2707_; lean_object* v_env_2711_; uint8_t v___x_2712_; lean_object* v___x_2713_; 
v_declName_2705_ = lean_ctor_get(v___x_2704_, 0);
lean_inc(v_declName_2705_);
v_us_2706_ = lean_ctor_get(v___x_2704_, 1);
lean_inc(v_us_2706_);
lean_dec_ref_known(v___x_2704_, 2);
v___x_2707_ = lean_st_ref_get(v_a_2674_);
v_env_2711_ = lean_ctor_get(v___x_2707_, 0);
lean_inc_ref(v_env_2711_);
lean_dec(v___x_2707_);
v___x_2712_ = 0;
v___x_2713_ = l_Lean_Environment_find_x3f(v_env_2711_, v_declName_2705_, v___x_2712_);
if (lean_obj_tag(v___x_2713_) == 0)
{
lean_object* v___x_2714_; lean_object* v___x_2715_; 
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
v___x_2714_ = lean_box(0);
v___x_2715_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2668_, v_structName_2666_, v_idx_2667_, v_a_2701_, lean_box(0), v___x_2714_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
return v___x_2715_;
}
else
{
lean_object* v_val_2716_; 
v_val_2716_ = lean_ctor_get(v___x_2713_, 0);
lean_inc(v_val_2716_);
lean_dec_ref_known(v___x_2713_, 1);
if (lean_obj_tag(v_val_2716_) == 5)
{
lean_object* v_val_2717_; lean_object* v_ctors_2718_; 
v_val_2717_ = lean_ctor_get(v_val_2716_, 0);
lean_inc_ref(v_val_2717_);
lean_dec_ref_known(v_val_2716_, 1);
v_ctors_2718_ = lean_ctor_get(v_val_2717_, 4);
lean_inc(v_ctors_2718_);
if (lean_obj_tag(v_ctors_2718_) == 1)
{
lean_object* v_tail_2719_; 
v_tail_2719_ = lean_ctor_get(v_ctors_2718_, 1);
if (lean_obj_tag(v_tail_2719_) == 0)
{
lean_object* v_toConstantVal_2720_; lean_object* v_numParams_2721_; lean_object* v_numIndices_2722_; lean_object* v_head_2723_; lean_object* v___x_2725_; uint8_t v_isShared_2726_; uint8_t v_isSharedCheck_2832_; 
v_toConstantVal_2720_ = lean_ctor_get(v_val_2717_, 0);
lean_inc_ref(v_toConstantVal_2720_);
v_numParams_2721_ = lean_ctor_get(v_val_2717_, 1);
lean_inc(v_numParams_2721_);
v_numIndices_2722_ = lean_ctor_get(v_val_2717_, 2);
lean_inc(v_numIndices_2722_);
lean_dec_ref(v_val_2717_);
v_head_2723_ = lean_ctor_get(v_ctors_2718_, 0);
v_isSharedCheck_2832_ = !lean_is_exclusive(v_ctors_2718_);
if (v_isSharedCheck_2832_ == 0)
{
lean_object* v_unused_2833_; 
v_unused_2833_ = lean_ctor_get(v_ctors_2718_, 1);
lean_dec(v_unused_2833_);
v___x_2725_ = v_ctors_2718_;
v_isShared_2726_ = v_isSharedCheck_2832_;
goto v_resetjp_2724_;
}
else
{
lean_inc(v_head_2723_);
lean_dec(v_ctors_2718_);
v___x_2725_ = lean_box(0);
v_isShared_2726_ = v_isSharedCheck_2832_;
goto v_resetjp_2724_;
}
v_resetjp_2724_:
{
lean_object* v___x_2727_; 
v___x_2727_ = l_Lean_getConstInfo___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__0(v_head_2723_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
if (lean_obj_tag(v___x_2727_) == 0)
{
lean_object* v_a_2728_; 
v_a_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_a_2728_);
lean_dec_ref_known(v___x_2727_, 1);
if (lean_obj_tag(v_a_2728_) == 6)
{
lean_object* v_val_2729_; lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2785_; lean_object* v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v_name_2810_; uint8_t v___x_2811_; 
v_val_2729_ = lean_ctor_get(v_a_2728_, 0);
lean_inc_ref(v_val_2729_);
lean_dec_ref_known(v_a_2728_, 1);
v_name_2810_ = lean_ctor_get(v_toConstantVal_2720_, 0);
lean_inc(v_name_2810_);
lean_dec_ref(v_toConstantVal_2720_);
v___x_2811_ = lean_name_eq(v_name_2810_, v_structName_2666_);
lean_dec(v_name_2810_);
if (v___x_2811_ == 0)
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v_a_2814_; lean_object* v___x_2816_; uint8_t v_isShared_2817_; uint8_t v_isSharedCheck_2821_; 
lean_dec_ref(v_val_2729_);
lean_del_object(v___x_2725_);
lean_dec(v_numIndices_2722_);
lean_dec(v_numParams_2721_);
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
v___x_2812_ = lean_box(0);
v___x_2813_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2668_, v_structName_2666_, v_idx_2667_, v_a_2701_, lean_box(0), v___x_2812_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2821_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2821_ == 0)
{
v___x_2816_ = v___x_2813_;
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
else
{
lean_inc(v_a_2814_);
lean_dec(v___x_2813_);
v___x_2816_ = lean_box(0);
v_isShared_2817_ = v_isSharedCheck_2821_;
goto v_resetjp_2815_;
}
v_resetjp_2815_:
{
lean_object* v___x_2819_; 
if (v_isShared_2817_ == 0)
{
v___x_2819_ = v___x_2816_;
goto v_reusejp_2818_;
}
else
{
lean_object* v_reuseFailAlloc_2820_; 
v_reuseFailAlloc_2820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2820_, 0, v_a_2814_);
v___x_2819_ = v_reuseFailAlloc_2820_;
goto v_reusejp_2818_;
}
v_reusejp_2818_:
{
return v___x_2819_;
}
}
}
else
{
v___y_2785_ = v_a_2669_;
v___y_2786_ = v_a_2670_;
v___y_2787_ = v_a_2671_;
v___y_2788_ = v_a_2672_;
v___y_2789_ = v_a_2673_;
v___y_2790_ = v_a_2674_;
goto v___jp_2784_;
}
v___jp_2730_:
{
lean_object* v_toConstantVal_2738_; lean_object* v_name_2739_; lean_object* v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; 
v_toConstantVal_2738_ = lean_ctor_get(v_val_2729_, 0);
lean_inc_ref(v_toConstantVal_2738_);
lean_dec_ref(v_val_2729_);
v_name_2739_ = lean_ctor_get(v_toConstantVal_2738_, 0);
lean_inc(v_name_2739_);
lean_dec_ref(v_toConstantVal_2738_);
v___x_2740_ = l_Lean_mkConst(v_name_2739_, v_us_2706_);
v___x_2741_ = lean_unsigned_to_nat(0u);
v___x_2742_ = l_Array_toSubarray___redArg(v___y_2731_, v___x_2741_, v_numParams_2721_);
v___x_2743_ = l_Subarray_copy___redArg(v___x_2742_);
v___x_2744_ = l_Lean_mkAppN(v___x_2740_, v___x_2743_);
lean_dec_ref(v___x_2743_);
lean_inc(v___y_2737_);
lean_inc_ref(v___y_2736_);
lean_inc(v___y_2735_);
lean_inc_ref(v___y_2734_);
v___x_2745_ = lean_infer_type(v___x_2744_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_);
if (lean_obj_tag(v___x_2745_) == 0)
{
lean_object* v_a_2746_; lean_object* v___x_2747_; lean_object* v___x_2749_; 
v_a_2746_ = lean_ctor_get(v___x_2745_, 0);
lean_inc(v_a_2746_);
lean_dec_ref_known(v___x_2745_, 1);
v___x_2747_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__4);
if (v_isShared_2726_ == 0)
{
lean_ctor_set_tag(v___x_2725_, 0);
lean_ctor_set(v___x_2725_, 1, v___x_2747_);
lean_ctor_set(v___x_2725_, 0, v_a_2746_);
v___x_2749_ = v___x_2725_;
goto v_reusejp_2748_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v_a_2746_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v___x_2747_);
v___x_2749_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2748_;
}
v_reusejp_2748_:
{
uint8_t v___x_2750_; lean_object* v___x_2751_; 
v___x_2750_ = lean_unbox(v_a_2703_);
lean_dec(v_a_2703_);
lean_inc_ref(v_struct_2668_);
lean_inc(v_idx_2667_);
v___x_2751_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(v_idx_2667_, v_struct_2668_, v_structName_2666_, v___x_2750_, v_idx_2667_, v_a_2701_, v___x_2741_, v___x_2749_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_);
lean_dec(v_idx_2667_);
if (lean_obj_tag(v___x_2751_) == 0)
{
lean_object* v_a_2752_; lean_object* v_snd_2753_; lean_object* v_snd_2754_; lean_object* v_snd_2755_; lean_object* v_expr_2756_; lean_object* v___x_2757_; 
v_a_2752_ = lean_ctor_get(v___x_2751_, 0);
lean_inc(v_a_2752_);
lean_dec_ref_known(v___x_2751_, 1);
v_snd_2753_ = lean_ctor_get(v_a_2752_, 1);
lean_inc(v_snd_2753_);
lean_dec(v_a_2752_);
v_snd_2754_ = lean_ctor_get(v_snd_2753_, 1);
lean_inc(v_snd_2754_);
lean_dec(v_snd_2753_);
v_snd_2755_ = lean_ctor_get(v_snd_2754_, 1);
lean_inc(v_snd_2755_);
lean_dec(v_snd_2754_);
v_expr_2756_ = lean_ctor_get(v_struct_2668_, 0);
lean_inc_ref(v_expr_2756_);
lean_dec_ref(v_struct_2668_);
v___x_2757_ = l_Lean_Expr_cleanupAnnotations(v_snd_2755_);
if (lean_obj_tag(v_e_2665_) == 11)
{
lean_object* v_typeName_2758_; lean_object* v_idx_2759_; lean_object* v_struct_2760_; size_t v___x_2761_; size_t v___x_2762_; uint8_t v___x_2763_; 
v_typeName_2758_ = lean_ctor_get(v_e_2665_, 0);
v_idx_2759_ = lean_ctor_get(v_e_2665_, 1);
v_struct_2760_ = lean_ctor_get(v_e_2665_, 2);
v___x_2761_ = lean_ptr_addr(v_struct_2760_);
v___x_2762_ = lean_ptr_addr(v_expr_2756_);
v___x_2763_ = lean_usize_dec_eq(v___x_2761_, v___x_2762_);
if (v___x_2763_ == 0)
{
lean_object* v___x_2764_; 
lean_inc(v_idx_2759_);
lean_inc(v_typeName_2758_);
lean_dec_ref_known(v_e_2665_, 3);
v___x_2764_ = l_Lean_Expr_proj___override(v_typeName_2758_, v_idx_2759_, v_expr_2756_);
v___y_2677_ = v___x_2757_;
v___y_2678_ = v___x_2764_;
goto v___jp_2676_;
}
else
{
lean_dec_ref(v_expr_2756_);
v___y_2677_ = v___x_2757_;
v___y_2678_ = v_e_2665_;
goto v___jp_2676_;
}
}
else
{
lean_object* v___x_2765_; lean_object* v___x_2766_; 
lean_dec_ref(v_expr_2756_);
lean_dec_ref(v_e_2665_);
v___x_2765_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__2);
v___x_2766_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_2765_);
v___y_2677_ = v___x_2757_;
v___y_2678_ = v___x_2766_;
goto v___jp_2676_;
}
}
else
{
lean_object* v_a_2767_; lean_object* v___x_2769_; uint8_t v_isShared_2770_; uint8_t v_isSharedCheck_2774_; 
lean_dec_ref(v_struct_2668_);
lean_dec_ref(v_e_2665_);
v_a_2767_ = lean_ctor_get(v___x_2751_, 0);
v_isSharedCheck_2774_ = !lean_is_exclusive(v___x_2751_);
if (v_isSharedCheck_2774_ == 0)
{
v___x_2769_ = v___x_2751_;
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
else
{
lean_inc(v_a_2767_);
lean_dec(v___x_2751_);
v___x_2769_ = lean_box(0);
v_isShared_2770_ = v_isSharedCheck_2774_;
goto v_resetjp_2768_;
}
v_resetjp_2768_:
{
lean_object* v___x_2772_; 
if (v_isShared_2770_ == 0)
{
v___x_2772_ = v___x_2769_;
goto v_reusejp_2771_;
}
else
{
lean_object* v_reuseFailAlloc_2773_; 
v_reuseFailAlloc_2773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2773_, 0, v_a_2767_);
v___x_2772_ = v_reuseFailAlloc_2773_;
goto v_reusejp_2771_;
}
v_reusejp_2771_:
{
return v___x_2772_;
}
}
}
}
}
else
{
lean_object* v_a_2776_; lean_object* v___x_2778_; uint8_t v_isShared_2779_; uint8_t v_isSharedCheck_2783_; 
lean_del_object(v___x_2725_);
lean_dec(v_a_2703_);
lean_dec(v_a_2701_);
lean_dec_ref(v_struct_2668_);
lean_dec(v_idx_2667_);
lean_dec(v_structName_2666_);
lean_dec_ref(v_e_2665_);
v_a_2776_ = lean_ctor_get(v___x_2745_, 0);
v_isSharedCheck_2783_ = !lean_is_exclusive(v___x_2745_);
if (v_isSharedCheck_2783_ == 0)
{
v___x_2778_ = v___x_2745_;
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
else
{
lean_inc(v_a_2776_);
lean_dec(v___x_2745_);
v___x_2778_ = lean_box(0);
v_isShared_2779_ = v_isSharedCheck_2783_;
goto v_resetjp_2777_;
}
v_resetjp_2777_:
{
lean_object* v___x_2781_; 
if (v_isShared_2779_ == 0)
{
v___x_2781_ = v___x_2778_;
goto v_reusejp_2780_;
}
else
{
lean_object* v_reuseFailAlloc_2782_; 
v_reuseFailAlloc_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2782_, 0, v_a_2776_);
v___x_2781_ = v_reuseFailAlloc_2782_;
goto v_reusejp_2780_;
}
v_reusejp_2780_:
{
return v___x_2781_;
}
}
}
}
v___jp_2784_:
{
lean_object* v_dummy_2791_; lean_object* v_nargs_2792_; lean_object* v___x_2793_; lean_object* v___x_2794_; lean_object* v___x_2795_; lean_object* v___x_2796_; lean_object* v___x_2797_; lean_object* v___x_2798_; uint8_t v___x_2799_; 
v_dummy_2791_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5);
v_nargs_2792_ = l_Lean_Expr_getAppNumArgs(v_a_2701_);
lean_inc(v_nargs_2792_);
v___x_2793_ = lean_mk_array(v_nargs_2792_, v_dummy_2791_);
v___x_2794_ = lean_unsigned_to_nat(1u);
v___x_2795_ = lean_nat_sub(v_nargs_2792_, v___x_2794_);
lean_dec(v_nargs_2792_);
lean_inc(v_a_2701_);
v___x_2796_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_2701_, v___x_2793_, v___x_2795_);
v___x_2797_ = lean_nat_add(v_numParams_2721_, v_numIndices_2722_);
lean_dec(v_numIndices_2722_);
v___x_2798_ = lean_array_get_size(v___x_2796_);
v___x_2799_ = lean_nat_dec_eq(v___x_2797_, v___x_2798_);
lean_dec(v___x_2797_);
if (v___x_2799_ == 0)
{
if (v___x_2687_ == 0)
{
v___y_2731_ = v___x_2796_;
v___y_2732_ = v___y_2785_;
v___y_2733_ = v___y_2786_;
v___y_2734_ = v___y_2787_;
v___y_2735_ = v___y_2788_;
v___y_2736_ = v___y_2789_;
v___y_2737_ = v___y_2790_;
goto v___jp_2730_;
}
else
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v_a_2802_; lean_object* v___x_2804_; uint8_t v_isShared_2805_; uint8_t v_isSharedCheck_2809_; 
lean_dec_ref(v___x_2796_);
lean_dec_ref(v_val_2729_);
lean_del_object(v___x_2725_);
lean_dec(v_numParams_2721_);
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
v___x_2800_ = lean_box(0);
v___x_2801_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2668_, v_structName_2666_, v_idx_2667_, v_a_2701_, lean_box(0), v___x_2800_, v___y_2785_, v___y_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2809_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2809_ == 0)
{
v___x_2804_ = v___x_2801_;
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
else
{
lean_inc(v_a_2802_);
lean_dec(v___x_2801_);
v___x_2804_ = lean_box(0);
v_isShared_2805_ = v_isSharedCheck_2809_;
goto v_resetjp_2803_;
}
v_resetjp_2803_:
{
lean_object* v___x_2807_; 
if (v_isShared_2805_ == 0)
{
v___x_2807_ = v___x_2804_;
goto v_reusejp_2806_;
}
else
{
lean_object* v_reuseFailAlloc_2808_; 
v_reuseFailAlloc_2808_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2808_, 0, v_a_2802_);
v___x_2807_ = v_reuseFailAlloc_2808_;
goto v_reusejp_2806_;
}
v_reusejp_2806_:
{
return v___x_2807_;
}
}
}
}
else
{
v___y_2731_ = v___x_2796_;
v___y_2732_ = v___y_2785_;
v___y_2733_ = v___y_2786_;
v___y_2734_ = v___y_2787_;
v___y_2735_ = v___y_2788_;
v___y_2736_ = v___y_2789_;
v___y_2737_ = v___y_2790_;
goto v___jp_2730_;
}
}
}
else
{
lean_object* v___x_2822_; lean_object* v___x_2823_; 
lean_dec(v_a_2728_);
lean_del_object(v___x_2725_);
lean_dec(v_numIndices_2722_);
lean_dec(v_numParams_2721_);
lean_dec_ref(v_toConstantVal_2720_);
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
v___x_2822_ = lean_box(0);
v___x_2823_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2668_, v_structName_2666_, v_idx_2667_, v_a_2701_, lean_box(0), v___x_2822_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
return v___x_2823_;
}
}
else
{
lean_object* v_a_2824_; lean_object* v___x_2826_; uint8_t v_isShared_2827_; uint8_t v_isSharedCheck_2831_; 
lean_del_object(v___x_2725_);
lean_dec(v_numIndices_2722_);
lean_dec(v_numParams_2721_);
lean_dec_ref(v_toConstantVal_2720_);
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec(v_a_2701_);
lean_dec_ref(v_struct_2668_);
lean_dec(v_idx_2667_);
lean_dec(v_structName_2666_);
lean_dec_ref(v_e_2665_);
v_a_2824_ = lean_ctor_get(v___x_2727_, 0);
v_isSharedCheck_2831_ = !lean_is_exclusive(v___x_2727_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2826_ = v___x_2727_;
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
else
{
lean_inc(v_a_2824_);
lean_dec(v___x_2727_);
v___x_2826_ = lean_box(0);
v_isShared_2827_ = v_isSharedCheck_2831_;
goto v_resetjp_2825_;
}
v_resetjp_2825_:
{
lean_object* v___x_2829_; 
if (v_isShared_2827_ == 0)
{
v___x_2829_ = v___x_2826_;
goto v_reusejp_2828_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v_a_2824_);
v___x_2829_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2828_;
}
v_reusejp_2828_:
{
return v___x_2829_;
}
}
}
}
}
else
{
lean_dec_ref_known(v_ctors_2718_, 2);
lean_dec_ref(v_val_2717_);
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
goto v___jp_2708_;
}
}
else
{
lean_dec(v_ctors_2718_);
lean_dec_ref(v_val_2717_);
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
goto v___jp_2708_;
}
}
else
{
lean_object* v___x_2834_; lean_object* v___x_2835_; 
lean_dec(v_val_2716_);
lean_dec(v_us_2706_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
v___x_2834_ = lean_box(0);
v___x_2835_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2668_, v_structName_2666_, v_idx_2667_, v_a_2701_, lean_box(0), v___x_2834_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
return v___x_2835_;
}
}
v___jp_2708_:
{
lean_object* v___x_2709_; lean_object* v___x_2710_; 
v___x_2709_ = lean_box(0);
v___x_2710_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2668_, v_structName_2666_, v_idx_2667_, v_a_2701_, lean_box(0), v___x_2709_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
return v___x_2710_;
}
}
else
{
lean_object* v___x_2836_; lean_object* v___x_2837_; 
lean_dec_ref(v___x_2704_);
lean_dec(v_a_2703_);
lean_dec_ref(v_e_2665_);
v___x_2836_ = lean_box(0);
v___x_2837_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___lam__0(v_struct_2668_, v_structName_2666_, v_idx_2667_, v_a_2701_, lean_box(0), v___x_2836_, v_a_2669_, v_a_2670_, v_a_2671_, v_a_2672_, v_a_2673_, v_a_2674_);
return v___x_2837_;
}
}
else
{
lean_object* v_a_2838_; lean_object* v___x_2840_; uint8_t v_isShared_2841_; uint8_t v_isSharedCheck_2845_; 
lean_dec(v_a_2701_);
lean_dec_ref(v_struct_2668_);
lean_dec(v_idx_2667_);
lean_dec(v_structName_2666_);
lean_dec_ref(v_e_2665_);
v_a_2838_ = lean_ctor_get(v___x_2702_, 0);
v_isSharedCheck_2845_ = !lean_is_exclusive(v___x_2702_);
if (v_isSharedCheck_2845_ == 0)
{
v___x_2840_ = v___x_2702_;
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
else
{
lean_inc(v_a_2838_);
lean_dec(v___x_2702_);
v___x_2840_ = lean_box(0);
v_isShared_2841_ = v_isSharedCheck_2845_;
goto v_resetjp_2839_;
}
v_resetjp_2839_:
{
lean_object* v___x_2843_; 
if (v_isShared_2841_ == 0)
{
v___x_2843_ = v___x_2840_;
goto v_reusejp_2842_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2838_);
v___x_2843_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2842_;
}
v_reusejp_2842_:
{
return v___x_2843_;
}
}
}
}
else
{
lean_object* v_a_2846_; lean_object* v___x_2848_; uint8_t v_isShared_2849_; uint8_t v_isSharedCheck_2853_; 
lean_dec_ref(v_struct_2668_);
lean_dec(v_idx_2667_);
lean_dec(v_structName_2666_);
lean_dec_ref(v_e_2665_);
v_a_2846_ = lean_ctor_get(v___x_2700_, 0);
v_isSharedCheck_2853_ = !lean_is_exclusive(v___x_2700_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2848_ = v___x_2700_;
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
else
{
lean_inc(v_a_2846_);
lean_dec(v___x_2700_);
v___x_2848_ = lean_box(0);
v_isShared_2849_ = v_isSharedCheck_2853_;
goto v_resetjp_2847_;
}
v_resetjp_2847_:
{
lean_object* v___x_2851_; 
if (v_isShared_2849_ == 0)
{
v___x_2851_ = v___x_2848_;
goto v_reusejp_2850_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_a_2846_);
v___x_2851_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2850_;
}
v_reusejp_2850_:
{
return v___x_2851_;
}
}
}
}
else
{
lean_object* v_a_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2861_; 
lean_dec_ref(v_struct_2668_);
lean_dec(v_idx_2667_);
lean_dec(v_structName_2666_);
lean_dec_ref(v_e_2665_);
v_a_2854_ = lean_ctor_get(v___x_2698_, 0);
v_isSharedCheck_2861_ = !lean_is_exclusive(v___x_2698_);
if (v_isSharedCheck_2861_ == 0)
{
v___x_2856_ = v___x_2698_;
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_a_2854_);
lean_dec(v___x_2698_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2861_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2859_; 
if (v_isShared_2857_ == 0)
{
v___x_2859_ = v___x_2856_;
goto v_reusejp_2858_;
}
else
{
lean_object* v_reuseFailAlloc_2860_; 
v_reuseFailAlloc_2860_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2860_, 0, v_a_2854_);
v___x_2859_ = v_reuseFailAlloc_2860_;
goto v_reusejp_2858_;
}
v_reusejp_2858_:
{
return v___x_2859_;
}
}
}
}
v___jp_2676_:
{
lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; 
v___x_2679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2679_, 0, v___y_2677_);
v___x_2680_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2680_, 0, v___y_2678_);
lean_ctor_set(v___x_2680_, 1, v___x_2679_);
v___x_2681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
return v___x_2681_;
}
v___jp_2682_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; 
v___x_2684_ = lean_box(0);
v___x_2685_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2685_, 0, v___y_2683_);
lean_ctor_set(v___x_2685_, 1, v___x_2684_);
v___x_2686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2685_);
return v___x_2686_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___boxed(lean_object* v_e_2862_, lean_object* v_structName_2863_, lean_object* v_idx_2864_, lean_object* v_struct_2865_, lean_object* v_a_2866_, lean_object* v_a_2867_, lean_object* v_a_2868_, lean_object* v_a_2869_, lean_object* v_a_2870_, lean_object* v_a_2871_, lean_object* v___y_2872_){
_start:
{
lean_object* v_res_2873_; 
v_res_2873_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(v_e_2862_, v_structName_2863_, v_idx_2864_, v_struct_2865_, v_a_2866_, v_a_2867_, v_a_2868_, v_a_2869_, v_a_2870_, v_a_2871_);
lean_dec(v_a_2871_);
lean_dec_ref(v_a_2870_);
lean_dec(v_a_2869_);
lean_dec_ref(v_a_2868_);
lean_dec(v_a_2867_);
lean_dec(v_a_2866_);
return v_res_2873_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1(lean_object* v_upperBound_2874_, lean_object* v_struct_2875_, lean_object* v_structName_2876_, uint8_t v_a_2877_, lean_object* v_idx_2878_, lean_object* v_a_2879_, lean_object* v_inst_2880_, lean_object* v_R_2881_, lean_object* v_a_2882_, lean_object* v_b_2883_, lean_object* v_c_2884_, lean_object* v___y_2885_, lean_object* v___y_2886_, lean_object* v___y_2887_, lean_object* v___y_2888_, lean_object* v___y_2889_, lean_object* v___y_2890_){
_start:
{
lean_object* v___x_2892_; 
v___x_2892_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___redArg(v_upperBound_2874_, v_struct_2875_, v_structName_2876_, v_a_2877_, v_idx_2878_, v_a_2879_, v_a_2882_, v_b_2883_, v___y_2885_, v___y_2886_, v___y_2887_, v___y_2888_, v___y_2889_, v___y_2890_);
return v___x_2892_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2893_ = _args[0];
lean_object* v_struct_2894_ = _args[1];
lean_object* v_structName_2895_ = _args[2];
lean_object* v_a_2896_ = _args[3];
lean_object* v_idx_2897_ = _args[4];
lean_object* v_a_2898_ = _args[5];
lean_object* v_inst_2899_ = _args[6];
lean_object* v_R_2900_ = _args[7];
lean_object* v_a_2901_ = _args[8];
lean_object* v_b_2902_ = _args[9];
lean_object* v_c_2903_ = _args[10];
lean_object* v___y_2904_ = _args[11];
lean_object* v___y_2905_ = _args[12];
lean_object* v___y_2906_ = _args[13];
lean_object* v___y_2907_ = _args[14];
lean_object* v___y_2908_ = _args[15];
lean_object* v___y_2909_ = _args[16];
lean_object* v___y_2910_ = _args[17];
_start:
{
uint8_t v_a_19714__boxed_2911_; lean_object* v_res_2912_; 
v_a_19714__boxed_2911_ = lean_unbox(v_a_2896_);
v_res_2912_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj_spec__1(v_upperBound_2893_, v_struct_2894_, v_structName_2895_, v_a_19714__boxed_2911_, v_idx_2897_, v_a_2898_, v_inst_2899_, v_R_2900_, v_a_2901_, v_b_2902_, v_c_2903_, v___y_2904_, v___y_2905_, v___y_2906_, v___y_2907_, v___y_2908_, v___y_2909_);
lean_dec(v___y_2909_);
lean_dec_ref(v___y_2908_);
lean_dec(v___y_2907_);
lean_dec_ref(v___y_2906_);
lean_dec(v___y_2905_);
lean_dec(v___y_2904_);
lean_dec(v_upperBound_2893_);
return v_res_2912_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(lean_object* v_as_2913_, size_t v_i_2914_, size_t v_stop_2915_, lean_object* v_b_2916_, lean_object* v___y_2917_, lean_object* v___y_2918_, lean_object* v___y_2919_, lean_object* v___y_2920_, lean_object* v___y_2921_){
_start:
{
uint8_t v___x_2923_; 
v___x_2923_ = lean_usize_dec_eq(v_i_2914_, v_stop_2915_);
if (v___x_2923_ == 0)
{
size_t v___x_2924_; size_t v___x_2925_; lean_object* v___x_2926_; lean_object* v___x_2927_; 
v___x_2924_ = ((size_t)1ULL);
v___x_2925_ = lean_usize_sub(v_i_2914_, v___x_2924_);
v___x_2926_ = lean_array_uget_borrowed(v_as_2913_, v___x_2925_);
lean_inc(v___x_2926_);
v___x_2927_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v___x_2926_, v___y_2917_, v___y_2918_, v___y_2919_, v___y_2920_, v___y_2921_);
if (lean_obj_tag(v___x_2927_) == 0)
{
lean_object* v_a_2928_; lean_object* v___x_2929_; lean_object* v___x_2930_; 
v_a_2928_ = lean_ctor_get(v___x_2927_, 0);
lean_inc(v_a_2928_);
lean_dec_ref_known(v___x_2927_, 1);
v___x_2929_ = l_Lean_Expr_sortLevel_x21(v_a_2928_);
lean_dec(v_a_2928_);
v___x_2930_ = l_Lean_mkLevelIMax_x27(v___x_2929_, v_b_2916_);
v_i_2914_ = v___x_2925_;
v_b_2916_ = v___x_2930_;
goto _start;
}
else
{
lean_object* v_a_2932_; lean_object* v___x_2934_; uint8_t v_isShared_2935_; uint8_t v_isSharedCheck_2939_; 
lean_dec(v_b_2916_);
v_a_2932_ = lean_ctor_get(v___x_2927_, 0);
v_isSharedCheck_2939_ = !lean_is_exclusive(v___x_2927_);
if (v_isSharedCheck_2939_ == 0)
{
v___x_2934_ = v___x_2927_;
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
else
{
lean_inc(v_a_2932_);
lean_dec(v___x_2927_);
v___x_2934_ = lean_box(0);
v_isShared_2935_ = v_isSharedCheck_2939_;
goto v_resetjp_2933_;
}
v_resetjp_2933_:
{
lean_object* v___x_2937_; 
if (v_isShared_2935_ == 0)
{
v___x_2937_ = v___x_2934_;
goto v_reusejp_2936_;
}
else
{
lean_object* v_reuseFailAlloc_2938_; 
v_reuseFailAlloc_2938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2938_, 0, v_a_2932_);
v___x_2937_ = v_reuseFailAlloc_2938_;
goto v_reusejp_2936_;
}
v_reusejp_2936_:
{
return v___x_2937_;
}
}
}
}
else
{
lean_object* v___x_2940_; 
v___x_2940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2940_, 0, v_b_2916_);
return v___x_2940_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg___boxed(lean_object* v_as_2941_, lean_object* v_i_2942_, lean_object* v_stop_2943_, lean_object* v_b_2944_, lean_object* v___y_2945_, lean_object* v___y_2946_, lean_object* v___y_2947_, lean_object* v___y_2948_, lean_object* v___y_2949_, lean_object* v___y_2950_){
_start:
{
size_t v_i_boxed_2951_; size_t v_stop_boxed_2952_; lean_object* v_res_2953_; 
v_i_boxed_2951_ = lean_unbox_usize(v_i_2942_);
lean_dec(v_i_2942_);
v_stop_boxed_2952_ = lean_unbox_usize(v_stop_2943_);
lean_dec(v_stop_2943_);
v_res_2953_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(v_as_2941_, v_i_boxed_2951_, v_stop_boxed_2952_, v_b_2944_, v___y_2945_, v___y_2946_, v___y_2947_, v___y_2948_, v___y_2949_);
lean_dec(v___y_2949_);
lean_dec_ref(v___y_2948_);
lean_dec(v___y_2947_);
lean_dec_ref(v___y_2946_);
lean_dec(v___y_2945_);
lean_dec_ref(v_as_2941_);
return v_res_2953_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3(void){
_start:
{
lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2957_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__2));
v___x_2958_ = lean_unsigned_to_nat(14u);
v___x_2959_ = lean_unsigned_to_nat(22u);
v___x_2960_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__1));
v___x_2961_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__0));
v___x_2962_ = l_mkPanicMessageWithDecl(v___x_2961_, v___x_2960_, v___x_2959_, v___x_2958_, v___x_2957_);
return v___x_2962_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(lean_object* v_fvars_2963_, lean_object* v_doms_2964_, lean_object* v_body_2965_, lean_object* v_a_2966_, lean_object* v_a_2967_, lean_object* v_a_2968_, lean_object* v_a_2969_, lean_object* v_a_2970_, lean_object* v_a_2971_){
_start:
{
lean_object* v_lctx_2973_; lean_object* v_expr_2974_; uint8_t v___x_2975_; uint8_t v___x_2976_; lean_object* v___x_2977_; lean_object* v_a_2979_; uint8_t v___x_2984_; 
v_lctx_2973_ = lean_ctor_get(v_a_2968_, 2);
v_expr_2974_ = lean_ctor_get(v_body_2965_, 0);
v___x_2975_ = 1;
v___x_2976_ = 0;
lean_inc_ref(v_lctx_2973_);
v___x_2977_ = l_Lean_LocalContext_mkForall(v_lctx_2973_, v_fvars_2963_, v_expr_2974_, v___x_2975_, v___x_2976_);
v___x_2984_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_2966_);
if (v___x_2984_ == 0)
{
lean_object* v___x_2986_; uint8_t v_isShared_2987_; uint8_t v_isSharedCheck_2993_; 
v_isSharedCheck_2993_ = !lean_is_exclusive(v_body_2965_);
if (v_isSharedCheck_2993_ == 0)
{
lean_object* v_unused_2994_; lean_object* v_unused_2995_; 
v_unused_2994_ = lean_ctor_get(v_body_2965_, 1);
lean_dec(v_unused_2994_);
v_unused_2995_ = lean_ctor_get(v_body_2965_, 0);
lean_dec(v_unused_2995_);
v___x_2986_ = v_body_2965_;
v_isShared_2987_ = v_isSharedCheck_2993_;
goto v_resetjp_2985_;
}
else
{
lean_dec(v_body_2965_);
v___x_2986_ = lean_box(0);
v_isShared_2987_ = v_isSharedCheck_2993_;
goto v_resetjp_2985_;
}
v_resetjp_2985_:
{
lean_object* v___x_2988_; lean_object* v___x_2990_; 
v___x_2988_ = lean_box(0);
if (v_isShared_2987_ == 0)
{
lean_ctor_set(v___x_2986_, 1, v___x_2988_);
lean_ctor_set(v___x_2986_, 0, v___x_2977_);
v___x_2990_ = v___x_2986_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v___x_2977_);
lean_ctor_set(v_reuseFailAlloc_2992_, 1, v___x_2988_);
v___x_2990_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
lean_object* v___x_2991_; 
v___x_2991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2991_, 0, v___x_2990_);
return v___x_2991_;
}
}
}
else
{
lean_object* v___x_2996_; 
v___x_2996_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(v_body_2965_, v_a_2966_, v_a_2967_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_);
if (lean_obj_tag(v___x_2996_) == 0)
{
lean_object* v_a_2997_; lean_object* v___y_2999_; lean_object* v_type_x3f_3016_; 
v_a_2997_ = lean_ctor_get(v___x_2996_, 0);
lean_inc(v_a_2997_);
lean_dec_ref_known(v___x_2996_, 1);
v_type_x3f_3016_ = lean_ctor_get(v_a_2997_, 1);
lean_inc(v_type_x3f_3016_);
lean_dec(v_a_2997_);
if (lean_obj_tag(v_type_x3f_3016_) == 0)
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3017_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___closed__3);
v___x_3018_ = l_panic___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp_spec__0(v___x_3017_);
v___y_2999_ = v___x_3018_;
goto v___jp_2998_;
}
else
{
lean_object* v_val_3019_; 
v_val_3019_ = lean_ctor_get(v_type_x3f_3016_, 0);
lean_inc(v_val_3019_);
lean_dec_ref_known(v_type_x3f_3016_, 1);
v___y_2999_ = v_val_3019_;
goto v___jp_2998_;
}
v___jp_2998_:
{
lean_object* v___x_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; uint8_t v___x_3003_; 
v___x_3000_ = l_Lean_Expr_sortLevel_x21(v___y_2999_);
lean_dec_ref(v___y_2999_);
v___x_3001_ = lean_array_get_size(v_doms_2964_);
v___x_3002_ = lean_unsigned_to_nat(0u);
v___x_3003_ = lean_nat_dec_lt(v___x_3002_, v___x_3001_);
if (v___x_3003_ == 0)
{
v_a_2979_ = v___x_3000_;
goto v___jp_2978_;
}
else
{
size_t v___x_3004_; size_t v___x_3005_; lean_object* v___x_3006_; 
v___x_3004_ = lean_usize_of_nat(v___x_3001_);
v___x_3005_ = ((size_t)0ULL);
v___x_3006_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(v_doms_2964_, v___x_3004_, v___x_3005_, v___x_3000_, v_a_2967_, v_a_2968_, v_a_2969_, v_a_2970_, v_a_2971_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v_a_3007_; 
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
lean_inc(v_a_3007_);
lean_dec_ref_known(v___x_3006_, 1);
v_a_2979_ = v_a_3007_;
goto v___jp_2978_;
}
else
{
lean_object* v_a_3008_; lean_object* v___x_3010_; uint8_t v_isShared_3011_; uint8_t v_isSharedCheck_3015_; 
lean_dec_ref(v___x_2977_);
v_a_3008_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3015_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3015_ == 0)
{
v___x_3010_ = v___x_3006_;
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
else
{
lean_inc(v_a_3008_);
lean_dec(v___x_3006_);
v___x_3010_ = lean_box(0);
v_isShared_3011_ = v_isSharedCheck_3015_;
goto v_resetjp_3009_;
}
v_resetjp_3009_:
{
lean_object* v___x_3013_; 
if (v_isShared_3011_ == 0)
{
v___x_3013_ = v___x_3010_;
goto v_reusejp_3012_;
}
else
{
lean_object* v_reuseFailAlloc_3014_; 
v_reuseFailAlloc_3014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3014_, 0, v_a_3008_);
v___x_3013_ = v_reuseFailAlloc_3014_;
goto v_reusejp_3012_;
}
v_reusejp_3012_:
{
return v___x_3013_;
}
}
}
}
}
}
else
{
lean_dec_ref(v___x_2977_);
return v___x_2996_;
}
}
v___jp_2978_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; 
v___x_2980_ = l_Lean_Expr_sort___override(v_a_2979_);
v___x_2981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
v___x_2982_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2977_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2983_, 0, v___x_2982_);
return v___x_2983_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___boxed(lean_object* v_fvars_3020_, lean_object* v_doms_3021_, lean_object* v_body_3022_, lean_object* v_a_3023_, lean_object* v_a_3024_, lean_object* v_a_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_, lean_object* v_a_3028_, lean_object* v___y_3029_){
_start:
{
lean_object* v_res_3030_; 
v_res_3030_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(v_fvars_3020_, v_doms_3021_, v_body_3022_, v_a_3023_, v_a_3024_, v_a_3025_, v_a_3026_, v_a_3027_, v_a_3028_);
lean_dec(v_a_3028_);
lean_dec_ref(v_a_3027_);
lean_dec(v_a_3026_);
lean_dec_ref(v_a_3025_);
lean_dec(v_a_3024_);
lean_dec(v_a_3023_);
lean_dec_ref(v_doms_3021_);
lean_dec_ref(v_fvars_3020_);
return v_res_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0(lean_object* v_as_3031_, size_t v_i_3032_, size_t v_stop_3033_, lean_object* v_b_3034_, lean_object* v___y_3035_, lean_object* v___y_3036_, lean_object* v___y_3037_, lean_object* v___y_3038_, lean_object* v___y_3039_, lean_object* v___y_3040_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___redArg(v_as_3031_, v_i_3032_, v_stop_3033_, v_b_3034_, v___y_3036_, v___y_3037_, v___y_3038_, v___y_3039_, v___y_3040_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0___boxed(lean_object* v_as_3043_, lean_object* v_i_3044_, lean_object* v_stop_3045_, lean_object* v_b_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_, lean_object* v___y_3050_, lean_object* v___y_3051_, lean_object* v___y_3052_, lean_object* v___y_3053_){
_start:
{
size_t v_i_boxed_3054_; size_t v_stop_boxed_3055_; lean_object* v_res_3056_; 
v_i_boxed_3054_ = lean_unbox_usize(v_i_3044_);
lean_dec(v_i_3044_);
v_stop_boxed_3055_ = lean_unbox_usize(v_stop_3045_);
lean_dec(v_stop_3045_);
v_res_3056_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize_spec__0(v_as_3043_, v_i_boxed_3054_, v_stop_boxed_3055_, v_b_3046_, v___y_3047_, v___y_3048_, v___y_3049_, v___y_3050_, v___y_3051_, v___y_3052_);
lean_dec(v___y_3052_);
lean_dec_ref(v___y_3051_);
lean_dec(v___y_3050_);
lean_dec_ref(v___y_3049_);
lean_dec(v___y_3048_);
lean_dec(v___y_3047_);
lean_dec_ref(v_as_3043_);
return v_res_3056_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(lean_object* v_opts_3057_, lean_object* v_opt_3058_){
_start:
{
lean_object* v_name_3059_; lean_object* v_defValue_3060_; lean_object* v_map_3061_; lean_object* v___x_3062_; 
v_name_3059_ = lean_ctor_get(v_opt_3058_, 0);
v_defValue_3060_ = lean_ctor_get(v_opt_3058_, 1);
v_map_3061_ = lean_ctor_get(v_opts_3057_, 0);
v___x_3062_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3061_, v_name_3059_);
if (lean_obj_tag(v___x_3062_) == 0)
{
uint8_t v___x_3063_; 
v___x_3063_ = lean_unbox(v_defValue_3060_);
return v___x_3063_;
}
else
{
lean_object* v_val_3064_; 
v_val_3064_ = lean_ctor_get(v___x_3062_, 0);
lean_inc(v_val_3064_);
lean_dec_ref_known(v___x_3062_, 1);
if (lean_obj_tag(v_val_3064_) == 1)
{
uint8_t v_v_3065_; 
v_v_3065_ = lean_ctor_get_uint8(v_val_3064_, 0);
lean_dec_ref_known(v_val_3064_, 0);
return v_v_3065_;
}
else
{
uint8_t v___x_3066_; 
lean_dec(v_val_3064_);
v___x_3066_ = lean_unbox(v_defValue_3060_);
return v___x_3066_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5___boxed(lean_object* v_opts_3067_, lean_object* v_opt_3068_){
_start:
{
uint8_t v_res_3069_; lean_object* v_r_3070_; 
v_res_3069_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_3067_, v_opt_3068_);
lean_dec_ref(v_opt_3068_);
lean_dec_ref(v_opts_3067_);
v_r_3070_ = lean_box(v_res_3069_);
return v_r_3070_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(lean_object* v_x_3071_){
_start:
{
if (lean_obj_tag(v_x_3071_) == 0)
{
lean_object* v_a_3073_; lean_object* v___x_3075_; uint8_t v_isShared_3076_; uint8_t v_isSharedCheck_3080_; 
v_a_3073_ = lean_ctor_get(v_x_3071_, 0);
v_isSharedCheck_3080_ = !lean_is_exclusive(v_x_3071_);
if (v_isSharedCheck_3080_ == 0)
{
v___x_3075_ = v_x_3071_;
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
else
{
lean_inc(v_a_3073_);
lean_dec(v_x_3071_);
v___x_3075_ = lean_box(0);
v_isShared_3076_ = v_isSharedCheck_3080_;
goto v_resetjp_3074_;
}
v_resetjp_3074_:
{
lean_object* v___x_3078_; 
if (v_isShared_3076_ == 0)
{
lean_ctor_set_tag(v___x_3075_, 1);
v___x_3078_ = v___x_3075_;
goto v_reusejp_3077_;
}
else
{
lean_object* v_reuseFailAlloc_3079_; 
v_reuseFailAlloc_3079_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3079_, 0, v_a_3073_);
v___x_3078_ = v_reuseFailAlloc_3079_;
goto v_reusejp_3077_;
}
v_reusejp_3077_:
{
return v___x_3078_;
}
}
}
else
{
lean_object* v_a_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3088_; 
v_a_3081_ = lean_ctor_get(v_x_3071_, 0);
v_isSharedCheck_3088_ = !lean_is_exclusive(v_x_3071_);
if (v_isSharedCheck_3088_ == 0)
{
v___x_3083_ = v_x_3071_;
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_a_3081_);
lean_dec(v_x_3071_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3088_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v___x_3086_; 
if (v_isShared_3084_ == 0)
{
lean_ctor_set_tag(v___x_3083_, 0);
v___x_3086_ = v___x_3083_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3087_; 
v_reuseFailAlloc_3087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3087_, 0, v_a_3081_);
v___x_3086_ = v_reuseFailAlloc_3087_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
return v___x_3086_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg___boxed(lean_object* v_x_3089_, lean_object* v___y_3090_){
_start:
{
lean_object* v_res_3091_; 
v_res_3091_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(v_x_3089_);
return v_res_3091_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15(lean_object* v_e_3092_){
_start:
{
if (lean_obj_tag(v_e_3092_) == 0)
{
uint8_t v___x_3093_; 
v___x_3093_ = 2;
return v___x_3093_;
}
else
{
uint8_t v___x_3094_; 
v___x_3094_ = 0;
return v___x_3094_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15___boxed(lean_object* v_e_3095_){
_start:
{
uint8_t v_res_3096_; lean_object* v_r_3097_; 
v_res_3096_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15(v_e_3095_);
lean_dec_ref(v_e_3095_);
v_r_3097_ = lean_box(v_res_3096_);
return v_r_3097_;
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(lean_object* v_opts_3098_, lean_object* v_opt_3099_){
_start:
{
lean_object* v_name_3100_; lean_object* v_defValue_3101_; lean_object* v_map_3102_; lean_object* v___x_3103_; 
v_name_3100_ = lean_ctor_get(v_opt_3099_, 0);
v_defValue_3101_ = lean_ctor_get(v_opt_3099_, 1);
v_map_3102_ = lean_ctor_get(v_opts_3098_, 0);
v___x_3103_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3102_, v_name_3100_);
if (lean_obj_tag(v___x_3103_) == 0)
{
lean_inc(v_defValue_3101_);
return v_defValue_3101_;
}
else
{
lean_object* v_val_3104_; 
v_val_3104_ = lean_ctor_get(v___x_3103_, 0);
lean_inc(v_val_3104_);
lean_dec_ref_known(v___x_3103_, 1);
if (lean_obj_tag(v_val_3104_) == 3)
{
lean_object* v_v_3105_; 
v_v_3105_ = lean_ctor_get(v_val_3104_, 0);
lean_inc(v_v_3105_);
lean_dec_ref_known(v_val_3104_, 1);
return v_v_3105_;
}
else
{
lean_dec(v_val_3104_);
lean_inc(v_defValue_3101_);
return v_defValue_3101_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16___boxed(lean_object* v_opts_3106_, lean_object* v_opt_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_3106_, v_opt_3107_);
lean_dec_ref(v_opt_3107_);
lean_dec_ref(v_opts_3106_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13_spec__15(size_t v_sz_3109_, size_t v_i_3110_, lean_object* v_bs_3111_){
_start:
{
uint8_t v___x_3112_; 
v___x_3112_ = lean_usize_dec_lt(v_i_3110_, v_sz_3109_);
if (v___x_3112_ == 0)
{
return v_bs_3111_;
}
else
{
lean_object* v_v_3113_; lean_object* v_msg_3114_; lean_object* v___x_3115_; lean_object* v_bs_x27_3116_; size_t v___x_3117_; size_t v___x_3118_; lean_object* v___x_3119_; 
v_v_3113_ = lean_array_uget_borrowed(v_bs_3111_, v_i_3110_);
v_msg_3114_ = lean_ctor_get(v_v_3113_, 1);
lean_inc_ref(v_msg_3114_);
v___x_3115_ = lean_unsigned_to_nat(0u);
v_bs_x27_3116_ = lean_array_uset(v_bs_3111_, v_i_3110_, v___x_3115_);
v___x_3117_ = ((size_t)1ULL);
v___x_3118_ = lean_usize_add(v_i_3110_, v___x_3117_);
v___x_3119_ = lean_array_uset(v_bs_x27_3116_, v_i_3110_, v_msg_3114_);
v_i_3110_ = v___x_3118_;
v_bs_3111_ = v___x_3119_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13_spec__15___boxed(lean_object* v_sz_3121_, lean_object* v_i_3122_, lean_object* v_bs_3123_){
_start:
{
size_t v_sz_boxed_3124_; size_t v_i_boxed_3125_; lean_object* v_res_3126_; 
v_sz_boxed_3124_ = lean_unbox_usize(v_sz_3121_);
lean_dec(v_sz_3121_);
v_i_boxed_3125_ = lean_unbox_usize(v_i_3122_);
lean_dec(v_i_3122_);
v_res_3126_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13_spec__15(v_sz_boxed_3124_, v_i_boxed_3125_, v_bs_3123_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___redArg(lean_object* v_oldTraces_3127_, lean_object* v_data_3128_, lean_object* v_ref_3129_, lean_object* v_msg_3130_, lean_object* v___y_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_){
_start:
{
lean_object* v_toCold_3136_; lean_object* v_currRecDepth_3137_; lean_object* v_ref_3138_; uint8_t v_diag_3139_; uint8_t v_suppressElabErrors_3140_; lean_object* v_ref_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v_traceState_3144_; lean_object* v_traces_3145_; lean_object* v___x_3146_; size_t v_sz_3147_; size_t v___x_3148_; lean_object* v___x_3149_; lean_object* v_msg_3150_; lean_object* v___x_3151_; lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3189_; 
v_toCold_3136_ = lean_ctor_get(v___y_3133_, 0);
v_currRecDepth_3137_ = lean_ctor_get(v___y_3133_, 1);
v_ref_3138_ = lean_ctor_get(v___y_3133_, 2);
v_diag_3139_ = lean_ctor_get_uint8(v___y_3133_, sizeof(void*)*3);
v_suppressElabErrors_3140_ = lean_ctor_get_uint8(v___y_3133_, sizeof(void*)*3 + 1);
v_ref_3141_ = l_Lean_replaceRef(v_ref_3129_, v_ref_3138_);
lean_inc(v_currRecDepth_3137_);
lean_inc_ref(v_toCold_3136_);
v___x_3142_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_3142_, 0, v_toCold_3136_);
lean_ctor_set(v___x_3142_, 1, v_currRecDepth_3137_);
lean_ctor_set(v___x_3142_, 2, v_ref_3141_);
lean_ctor_set_uint8(v___x_3142_, sizeof(void*)*3, v_diag_3139_);
lean_ctor_set_uint8(v___x_3142_, sizeof(void*)*3 + 1, v_suppressElabErrors_3140_);
v___x_3143_ = lean_st_ref_get(v___y_3134_);
v_traceState_3144_ = lean_ctor_get(v___x_3143_, 4);
lean_inc_ref(v_traceState_3144_);
lean_dec(v___x_3143_);
v_traces_3145_ = lean_ctor_get(v_traceState_3144_, 0);
lean_inc_ref(v_traces_3145_);
lean_dec_ref(v_traceState_3144_);
v___x_3146_ = l_Lean_PersistentArray_toArray___redArg(v_traces_3145_);
lean_dec_ref(v_traces_3145_);
v_sz_3147_ = lean_array_size(v___x_3146_);
v___x_3148_ = ((size_t)0ULL);
v___x_3149_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13_spec__15(v_sz_3147_, v___x_3148_, v___x_3146_);
v_msg_3150_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_3150_, 0, v_data_3128_);
lean_ctor_set(v_msg_3150_, 1, v_msg_3130_);
lean_ctor_set(v_msg_3150_, 2, v___x_3149_);
v___x_3151_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_3150_, v___y_3131_, v___y_3132_, v___x_3142_, v___y_3134_);
lean_dec_ref_known(v___x_3142_, 3);
v_a_3152_ = lean_ctor_get(v___x_3151_, 0);
v_isSharedCheck_3189_ = !lean_is_exclusive(v___x_3151_);
if (v_isSharedCheck_3189_ == 0)
{
v___x_3154_ = v___x_3151_;
v_isShared_3155_ = v_isSharedCheck_3189_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3151_);
v___x_3154_ = lean_box(0);
v_isShared_3155_ = v_isSharedCheck_3189_;
goto v_resetjp_3153_;
}
v_resetjp_3153_:
{
lean_object* v___x_3156_; lean_object* v_traceState_3157_; lean_object* v_env_3158_; lean_object* v_nextMacroScope_3159_; lean_object* v_ngen_3160_; lean_object* v_auxDeclNGen_3161_; lean_object* v_cache_3162_; lean_object* v_messages_3163_; lean_object* v_infoState_3164_; lean_object* v_snapshotTasks_3165_; lean_object* v___x_3167_; uint8_t v_isShared_3168_; uint8_t v_isSharedCheck_3188_; 
v___x_3156_ = lean_st_ref_take(v___y_3134_);
v_traceState_3157_ = lean_ctor_get(v___x_3156_, 4);
v_env_3158_ = lean_ctor_get(v___x_3156_, 0);
v_nextMacroScope_3159_ = lean_ctor_get(v___x_3156_, 1);
v_ngen_3160_ = lean_ctor_get(v___x_3156_, 2);
v_auxDeclNGen_3161_ = lean_ctor_get(v___x_3156_, 3);
v_cache_3162_ = lean_ctor_get(v___x_3156_, 5);
v_messages_3163_ = lean_ctor_get(v___x_3156_, 6);
v_infoState_3164_ = lean_ctor_get(v___x_3156_, 7);
v_snapshotTasks_3165_ = lean_ctor_get(v___x_3156_, 8);
v_isSharedCheck_3188_ = !lean_is_exclusive(v___x_3156_);
if (v_isSharedCheck_3188_ == 0)
{
v___x_3167_ = v___x_3156_;
v_isShared_3168_ = v_isSharedCheck_3188_;
goto v_resetjp_3166_;
}
else
{
lean_inc(v_snapshotTasks_3165_);
lean_inc(v_infoState_3164_);
lean_inc(v_messages_3163_);
lean_inc(v_cache_3162_);
lean_inc(v_traceState_3157_);
lean_inc(v_auxDeclNGen_3161_);
lean_inc(v_ngen_3160_);
lean_inc(v_nextMacroScope_3159_);
lean_inc(v_env_3158_);
lean_dec(v___x_3156_);
v___x_3167_ = lean_box(0);
v_isShared_3168_ = v_isSharedCheck_3188_;
goto v_resetjp_3166_;
}
v_resetjp_3166_:
{
uint64_t v_tid_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3186_; 
v_tid_3169_ = lean_ctor_get_uint64(v_traceState_3157_, sizeof(void*)*1);
v_isSharedCheck_3186_ = !lean_is_exclusive(v_traceState_3157_);
if (v_isSharedCheck_3186_ == 0)
{
lean_object* v_unused_3187_; 
v_unused_3187_ = lean_ctor_get(v_traceState_3157_, 0);
lean_dec(v_unused_3187_);
v___x_3171_ = v_traceState_3157_;
v_isShared_3172_ = v_isSharedCheck_3186_;
goto v_resetjp_3170_;
}
else
{
lean_dec(v_traceState_3157_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3186_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; lean_object* v___x_3175_; lean_object* v___x_3177_; 
v___x_3173_ = lean_box(0);
v___x_3174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3174_, 0, v_ref_3129_);
lean_ctor_set(v___x_3174_, 1, v_a_3152_);
v___x_3175_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_3127_, v___x_3174_);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3175_);
v___x_3177_ = v___x_3171_;
goto v_reusejp_3176_;
}
else
{
lean_object* v_reuseFailAlloc_3185_; 
v_reuseFailAlloc_3185_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3185_, 0, v___x_3175_);
lean_ctor_set_uint64(v_reuseFailAlloc_3185_, sizeof(void*)*1, v_tid_3169_);
v___x_3177_ = v_reuseFailAlloc_3185_;
goto v_reusejp_3176_;
}
v_reusejp_3176_:
{
lean_object* v___x_3179_; 
if (v_isShared_3168_ == 0)
{
lean_ctor_set(v___x_3167_, 4, v___x_3177_);
v___x_3179_ = v___x_3167_;
goto v_reusejp_3178_;
}
else
{
lean_object* v_reuseFailAlloc_3184_; 
v_reuseFailAlloc_3184_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3184_, 0, v_env_3158_);
lean_ctor_set(v_reuseFailAlloc_3184_, 1, v_nextMacroScope_3159_);
lean_ctor_set(v_reuseFailAlloc_3184_, 2, v_ngen_3160_);
lean_ctor_set(v_reuseFailAlloc_3184_, 3, v_auxDeclNGen_3161_);
lean_ctor_set(v_reuseFailAlloc_3184_, 4, v___x_3177_);
lean_ctor_set(v_reuseFailAlloc_3184_, 5, v_cache_3162_);
lean_ctor_set(v_reuseFailAlloc_3184_, 6, v_messages_3163_);
lean_ctor_set(v_reuseFailAlloc_3184_, 7, v_infoState_3164_);
lean_ctor_set(v_reuseFailAlloc_3184_, 8, v_snapshotTasks_3165_);
v___x_3179_ = v_reuseFailAlloc_3184_;
goto v_reusejp_3178_;
}
v_reusejp_3178_:
{
lean_object* v___x_3180_; lean_object* v___x_3182_; 
v___x_3180_ = lean_st_ref_put(v___y_3134_, v___x_3179_);
if (v_isShared_3155_ == 0)
{
lean_ctor_set(v___x_3154_, 0, v___x_3173_);
v___x_3182_ = v___x_3154_;
goto v_reusejp_3181_;
}
else
{
lean_object* v_reuseFailAlloc_3183_; 
v_reuseFailAlloc_3183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3183_, 0, v___x_3173_);
v___x_3182_ = v_reuseFailAlloc_3183_;
goto v_reusejp_3181_;
}
v_reusejp_3181_:
{
return v___x_3182_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___redArg___boxed(lean_object* v_oldTraces_3190_, lean_object* v_data_3191_, lean_object* v_ref_3192_, lean_object* v_msg_3193_, lean_object* v___y_3194_, lean_object* v___y_3195_, lean_object* v___y_3196_, lean_object* v___y_3197_, lean_object* v___y_3198_){
_start:
{
lean_object* v_res_3199_; 
v_res_3199_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___redArg(v_oldTraces_3190_, v_data_3191_, v_ref_3192_, v_msg_3193_, v___y_3194_, v___y_3195_, v___y_3196_, v___y_3197_);
lean_dec(v___y_3197_);
lean_dec_ref(v___y_3196_);
lean_dec(v___y_3195_);
lean_dec_ref(v___y_3194_);
return v_res_3199_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1(void){
_start:
{
lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3201_ = ((lean_object*)(l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__0));
v___x_3202_ = l_Lean_stringToMessageData(v___x_3201_);
return v___x_3202_;
}
}
static double _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2(void){
_start:
{
lean_object* v___x_3203_; double v___x_3204_; 
v___x_3203_ = lean_unsigned_to_nat(1000u);
v___x_3204_ = lean_float_of_nat(v___x_3203_);
return v___x_3204_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(lean_object* v_cls_3205_, uint8_t v_collapsed_3206_, lean_object* v_tag_3207_, lean_object* v_opts_3208_, uint8_t v_clsEnabled_3209_, lean_object* v_oldTraces_3210_, lean_object* v_msg_3211_, lean_object* v_resStartStop_3212_, lean_object* v___y_3213_, lean_object* v___y_3214_, lean_object* v___y_3215_, lean_object* v___y_3216_, lean_object* v___y_3217_, lean_object* v___y_3218_){
_start:
{
lean_object* v_fst_3220_; lean_object* v_snd_3221_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v_data_3225_; lean_object* v_fst_3236_; lean_object* v_snd_3237_; lean_object* v___x_3238_; uint8_t v___x_3239_; lean_object* v___y_3241_; lean_object* v_a_3242_; uint8_t v___y_3257_; double v___y_3288_; 
v_fst_3220_ = lean_ctor_get(v_resStartStop_3212_, 0);
lean_inc(v_fst_3220_);
v_snd_3221_ = lean_ctor_get(v_resStartStop_3212_, 1);
lean_inc(v_snd_3221_);
lean_dec_ref(v_resStartStop_3212_);
v_fst_3236_ = lean_ctor_get(v_snd_3221_, 0);
lean_inc(v_fst_3236_);
v_snd_3237_ = lean_ctor_get(v_snd_3221_, 1);
lean_inc(v_snd_3237_);
lean_dec(v_snd_3221_);
v___x_3238_ = l_Lean_trace_profiler;
v___x_3239_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_3208_, v___x_3238_);
if (v___x_3239_ == 0)
{
v___y_3257_ = v___x_3239_;
goto v___jp_3256_;
}
else
{
lean_object* v___x_3293_; uint8_t v___x_3294_; 
v___x_3293_ = l_Lean_trace_profiler_useHeartbeats;
v___x_3294_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_3208_, v___x_3293_);
if (v___x_3294_ == 0)
{
lean_object* v___x_3295_; lean_object* v___x_3296_; double v___x_3297_; double v___x_3298_; double v___x_3299_; 
v___x_3295_ = l_Lean_trace_profiler_threshold;
v___x_3296_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_3208_, v___x_3295_);
v___x_3297_ = lean_float_of_nat(v___x_3296_);
v___x_3298_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2);
v___x_3299_ = lean_float_div(v___x_3297_, v___x_3298_);
v___y_3288_ = v___x_3299_;
goto v___jp_3287_;
}
else
{
lean_object* v___x_3300_; lean_object* v___x_3301_; double v___x_3302_; 
v___x_3300_ = l_Lean_trace_profiler_threshold;
v___x_3301_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_3208_, v___x_3300_);
v___x_3302_ = lean_float_of_nat(v___x_3301_);
v___y_3288_ = v___x_3302_;
goto v___jp_3287_;
}
}
v___jp_3222_:
{
lean_object* v___x_3226_; 
lean_inc(v___y_3224_);
v___x_3226_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___redArg(v_oldTraces_3210_, v_data_3225_, v___y_3224_, v___y_3223_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_);
if (lean_obj_tag(v___x_3226_) == 0)
{
lean_object* v___x_3227_; 
lean_dec_ref_known(v___x_3226_, 1);
v___x_3227_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(v_fst_3220_);
return v___x_3227_;
}
else
{
lean_object* v_a_3228_; lean_object* v___x_3230_; uint8_t v_isShared_3231_; uint8_t v_isSharedCheck_3235_; 
lean_dec(v_fst_3220_);
v_a_3228_ = lean_ctor_get(v___x_3226_, 0);
v_isSharedCheck_3235_ = !lean_is_exclusive(v___x_3226_);
if (v_isSharedCheck_3235_ == 0)
{
v___x_3230_ = v___x_3226_;
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
else
{
lean_inc(v_a_3228_);
lean_dec(v___x_3226_);
v___x_3230_ = lean_box(0);
v_isShared_3231_ = v_isSharedCheck_3235_;
goto v_resetjp_3229_;
}
v_resetjp_3229_:
{
lean_object* v___x_3233_; 
if (v_isShared_3231_ == 0)
{
v___x_3233_ = v___x_3230_;
goto v_reusejp_3232_;
}
else
{
lean_object* v_reuseFailAlloc_3234_; 
v_reuseFailAlloc_3234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3234_, 0, v_a_3228_);
v___x_3233_ = v_reuseFailAlloc_3234_;
goto v_reusejp_3232_;
}
v_reusejp_3232_:
{
return v___x_3233_;
}
}
}
}
v___jp_3240_:
{
uint8_t v_result_3243_; lean_object* v___x_3244_; lean_object* v___x_3245_; double v___x_3246_; lean_object* v_data_3247_; 
v_result_3243_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__15(v_fst_3220_);
v___x_3244_ = lean_box(v_result_3243_);
v___x_3245_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3245_, 0, v___x_3244_);
v___x_3246_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
lean_inc_ref(v_tag_3207_);
lean_inc_ref(v___x_3245_);
lean_inc(v_cls_3205_);
v_data_3247_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3247_, 0, v_cls_3205_);
lean_ctor_set(v_data_3247_, 1, v___x_3245_);
lean_ctor_set(v_data_3247_, 2, v_tag_3207_);
lean_ctor_set_float(v_data_3247_, sizeof(void*)*3, v___x_3246_);
lean_ctor_set_float(v_data_3247_, sizeof(void*)*3 + 8, v___x_3246_);
lean_ctor_set_uint8(v_data_3247_, sizeof(void*)*3 + 16, v_collapsed_3206_);
if (v___x_3239_ == 0)
{
lean_dec_ref_known(v___x_3245_, 1);
lean_dec(v_snd_3237_);
lean_dec(v_fst_3236_);
lean_dec_ref(v_tag_3207_);
lean_dec(v_cls_3205_);
v___y_3223_ = v_a_3242_;
v___y_3224_ = v___y_3241_;
v_data_3225_ = v_data_3247_;
goto v___jp_3222_;
}
else
{
lean_object* v_data_3248_; double v___x_3249_; double v___x_3250_; 
lean_dec_ref_known(v_data_3247_, 3);
v_data_3248_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_3248_, 0, v_cls_3205_);
lean_ctor_set(v_data_3248_, 1, v___x_3245_);
lean_ctor_set(v_data_3248_, 2, v_tag_3207_);
v___x_3249_ = lean_unbox_float(v_fst_3236_);
lean_dec(v_fst_3236_);
lean_ctor_set_float(v_data_3248_, sizeof(void*)*3, v___x_3249_);
v___x_3250_ = lean_unbox_float(v_snd_3237_);
lean_dec(v_snd_3237_);
lean_ctor_set_float(v_data_3248_, sizeof(void*)*3 + 8, v___x_3250_);
lean_ctor_set_uint8(v_data_3248_, sizeof(void*)*3 + 16, v_collapsed_3206_);
v___y_3223_ = v_a_3242_;
v___y_3224_ = v___y_3241_;
v_data_3225_ = v_data_3248_;
goto v___jp_3222_;
}
}
v___jp_3251_:
{
lean_object* v_ref_3252_; lean_object* v___x_3253_; 
v_ref_3252_ = lean_ctor_get(v___y_3217_, 2);
lean_inc(v___y_3218_);
lean_inc_ref(v___y_3217_);
lean_inc(v___y_3216_);
lean_inc_ref(v___y_3215_);
lean_inc(v___y_3214_);
lean_inc(v___y_3213_);
lean_inc(v_fst_3220_);
v___x_3253_ = lean_apply_8(v_msg_3211_, v_fst_3220_, v___y_3213_, v___y_3214_, v___y_3215_, v___y_3216_, v___y_3217_, v___y_3218_, lean_box(0));
if (lean_obj_tag(v___x_3253_) == 0)
{
lean_object* v_a_3254_; 
v_a_3254_ = lean_ctor_get(v___x_3253_, 0);
lean_inc(v_a_3254_);
lean_dec_ref_known(v___x_3253_, 1);
v___y_3241_ = v_ref_3252_;
v_a_3242_ = v_a_3254_;
goto v___jp_3240_;
}
else
{
lean_object* v___x_3255_; 
lean_dec_ref_known(v___x_3253_, 1);
v___x_3255_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1);
v___y_3241_ = v_ref_3252_;
v_a_3242_ = v___x_3255_;
goto v___jp_3240_;
}
}
v___jp_3256_:
{
if (v_clsEnabled_3209_ == 0)
{
if (v___y_3257_ == 0)
{
lean_object* v___x_3258_; lean_object* v_traceState_3259_; lean_object* v_env_3260_; lean_object* v_nextMacroScope_3261_; lean_object* v_ngen_3262_; lean_object* v_auxDeclNGen_3263_; lean_object* v_cache_3264_; lean_object* v_messages_3265_; lean_object* v_infoState_3266_; lean_object* v_snapshotTasks_3267_; lean_object* v___x_3269_; uint8_t v_isShared_3270_; uint8_t v_isSharedCheck_3286_; 
lean_dec(v_snd_3237_);
lean_dec(v_fst_3236_);
lean_dec_ref(v_msg_3211_);
lean_dec_ref(v_tag_3207_);
lean_dec(v_cls_3205_);
v___x_3258_ = lean_st_ref_take(v___y_3218_);
v_traceState_3259_ = lean_ctor_get(v___x_3258_, 4);
v_env_3260_ = lean_ctor_get(v___x_3258_, 0);
v_nextMacroScope_3261_ = lean_ctor_get(v___x_3258_, 1);
v_ngen_3262_ = lean_ctor_get(v___x_3258_, 2);
v_auxDeclNGen_3263_ = lean_ctor_get(v___x_3258_, 3);
v_cache_3264_ = lean_ctor_get(v___x_3258_, 5);
v_messages_3265_ = lean_ctor_get(v___x_3258_, 6);
v_infoState_3266_ = lean_ctor_get(v___x_3258_, 7);
v_snapshotTasks_3267_ = lean_ctor_get(v___x_3258_, 8);
v_isSharedCheck_3286_ = !lean_is_exclusive(v___x_3258_);
if (v_isSharedCheck_3286_ == 0)
{
v___x_3269_ = v___x_3258_;
v_isShared_3270_ = v_isSharedCheck_3286_;
goto v_resetjp_3268_;
}
else
{
lean_inc(v_snapshotTasks_3267_);
lean_inc(v_infoState_3266_);
lean_inc(v_messages_3265_);
lean_inc(v_cache_3264_);
lean_inc(v_traceState_3259_);
lean_inc(v_auxDeclNGen_3263_);
lean_inc(v_ngen_3262_);
lean_inc(v_nextMacroScope_3261_);
lean_inc(v_env_3260_);
lean_dec(v___x_3258_);
v___x_3269_ = lean_box(0);
v_isShared_3270_ = v_isSharedCheck_3286_;
goto v_resetjp_3268_;
}
v_resetjp_3268_:
{
uint64_t v_tid_3271_; lean_object* v_traces_3272_; lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3285_; 
v_tid_3271_ = lean_ctor_get_uint64(v_traceState_3259_, sizeof(void*)*1);
v_traces_3272_ = lean_ctor_get(v_traceState_3259_, 0);
v_isSharedCheck_3285_ = !lean_is_exclusive(v_traceState_3259_);
if (v_isSharedCheck_3285_ == 0)
{
v___x_3274_ = v_traceState_3259_;
v_isShared_3275_ = v_isSharedCheck_3285_;
goto v_resetjp_3273_;
}
else
{
lean_inc(v_traces_3272_);
lean_dec(v_traceState_3259_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3285_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3276_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_3210_, v_traces_3272_);
lean_dec_ref(v_traces_3272_);
if (v_isShared_3275_ == 0)
{
lean_ctor_set(v___x_3274_, 0, v___x_3276_);
v___x_3278_ = v___x_3274_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3284_; 
v_reuseFailAlloc_3284_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3284_, 0, v___x_3276_);
lean_ctor_set_uint64(v_reuseFailAlloc_3284_, sizeof(void*)*1, v_tid_3271_);
v___x_3278_ = v_reuseFailAlloc_3284_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
lean_object* v___x_3280_; 
if (v_isShared_3270_ == 0)
{
lean_ctor_set(v___x_3269_, 4, v___x_3278_);
v___x_3280_ = v___x_3269_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3283_; 
v_reuseFailAlloc_3283_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3283_, 0, v_env_3260_);
lean_ctor_set(v_reuseFailAlloc_3283_, 1, v_nextMacroScope_3261_);
lean_ctor_set(v_reuseFailAlloc_3283_, 2, v_ngen_3262_);
lean_ctor_set(v_reuseFailAlloc_3283_, 3, v_auxDeclNGen_3263_);
lean_ctor_set(v_reuseFailAlloc_3283_, 4, v___x_3278_);
lean_ctor_set(v_reuseFailAlloc_3283_, 5, v_cache_3264_);
lean_ctor_set(v_reuseFailAlloc_3283_, 6, v_messages_3265_);
lean_ctor_set(v_reuseFailAlloc_3283_, 7, v_infoState_3266_);
lean_ctor_set(v_reuseFailAlloc_3283_, 8, v_snapshotTasks_3267_);
v___x_3280_ = v_reuseFailAlloc_3283_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; 
v___x_3281_ = lean_st_ref_put(v___y_3218_, v___x_3280_);
v___x_3282_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(v_fst_3220_);
return v___x_3282_;
}
}
}
}
}
else
{
goto v___jp_3251_;
}
}
else
{
goto v___jp_3251_;
}
}
v___jp_3287_:
{
double v___x_3289_; double v___x_3290_; double v___x_3291_; uint8_t v___x_3292_; 
v___x_3289_ = lean_unbox_float(v_snd_3237_);
v___x_3290_ = lean_unbox_float(v_fst_3236_);
v___x_3291_ = lean_float_sub(v___x_3289_, v___x_3290_);
v___x_3292_ = lean_float_decLt(v___y_3288_, v___x_3291_);
v___y_3257_ = v___x_3292_;
goto v___jp_3256_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___boxed(lean_object* v_cls_3303_, lean_object* v_collapsed_3304_, lean_object* v_tag_3305_, lean_object* v_opts_3306_, lean_object* v_clsEnabled_3307_, lean_object* v_oldTraces_3308_, lean_object* v_msg_3309_, lean_object* v_resStartStop_3310_, lean_object* v___y_3311_, lean_object* v___y_3312_, lean_object* v___y_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
uint8_t v_collapsed_boxed_3318_; uint8_t v_clsEnabled_boxed_3319_; lean_object* v_res_3320_; 
v_collapsed_boxed_3318_ = lean_unbox(v_collapsed_3304_);
v_clsEnabled_boxed_3319_ = lean_unbox(v_clsEnabled_3307_);
v_res_3320_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(v_cls_3303_, v_collapsed_boxed_3318_, v_tag_3305_, v_opts_3306_, v_clsEnabled_boxed_3319_, v_oldTraces_3308_, v_msg_3309_, v_resStartStop_3310_, v___y_3311_, v___y_3312_, v___y_3313_, v___y_3314_, v___y_3315_, v___y_3316_);
lean_dec(v___y_3316_);
lean_dec_ref(v___y_3315_);
lean_dec(v___y_3314_);
lean_dec_ref(v___y_3313_);
lean_dec(v___y_3312_);
lean_dec(v___y_3311_);
lean_dec_ref(v_opts_3306_);
return v_res_3320_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; 
v___x_3321_ = lean_unsigned_to_nat(32u);
v___x_3322_ = lean_mk_empty_array_with_capacity(v___x_3321_);
v___x_3323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3323_, 0, v___x_3322_);
return v___x_3323_;
}
}
static lean_object* _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1(void){
_start:
{
size_t v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; 
v___x_3324_ = ((size_t)5ULL);
v___x_3325_ = lean_unsigned_to_nat(0u);
v___x_3326_ = lean_unsigned_to_nat(32u);
v___x_3327_ = lean_mk_empty_array_with_capacity(v___x_3326_);
v___x_3328_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__0);
v___x_3329_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_3329_, 0, v___x_3328_);
lean_ctor_set(v___x_3329_, 1, v___x_3327_);
lean_ctor_set(v___x_3329_, 2, v___x_3325_);
lean_ctor_set(v___x_3329_, 3, v___x_3325_);
lean_ctor_set_usize(v___x_3329_, 4, v___x_3324_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(lean_object* v___y_3330_){
_start:
{
lean_object* v___x_3332_; lean_object* v_traceState_3333_; lean_object* v_traces_3334_; lean_object* v___x_3335_; lean_object* v_traceState_3336_; lean_object* v_env_3337_; lean_object* v_nextMacroScope_3338_; lean_object* v_ngen_3339_; lean_object* v_auxDeclNGen_3340_; lean_object* v_cache_3341_; lean_object* v_messages_3342_; lean_object* v_infoState_3343_; lean_object* v_snapshotTasks_3344_; lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3363_; 
v___x_3332_ = lean_st_ref_get(v___y_3330_);
v_traceState_3333_ = lean_ctor_get(v___x_3332_, 4);
lean_inc_ref(v_traceState_3333_);
lean_dec(v___x_3332_);
v_traces_3334_ = lean_ctor_get(v_traceState_3333_, 0);
lean_inc_ref(v_traces_3334_);
lean_dec_ref(v_traceState_3333_);
v___x_3335_ = lean_st_ref_take(v___y_3330_);
v_traceState_3336_ = lean_ctor_get(v___x_3335_, 4);
v_env_3337_ = lean_ctor_get(v___x_3335_, 0);
v_nextMacroScope_3338_ = lean_ctor_get(v___x_3335_, 1);
v_ngen_3339_ = lean_ctor_get(v___x_3335_, 2);
v_auxDeclNGen_3340_ = lean_ctor_get(v___x_3335_, 3);
v_cache_3341_ = lean_ctor_get(v___x_3335_, 5);
v_messages_3342_ = lean_ctor_get(v___x_3335_, 6);
v_infoState_3343_ = lean_ctor_get(v___x_3335_, 7);
v_snapshotTasks_3344_ = lean_ctor_get(v___x_3335_, 8);
v_isSharedCheck_3363_ = !lean_is_exclusive(v___x_3335_);
if (v_isSharedCheck_3363_ == 0)
{
v___x_3346_ = v___x_3335_;
v_isShared_3347_ = v_isSharedCheck_3363_;
goto v_resetjp_3345_;
}
else
{
lean_inc(v_snapshotTasks_3344_);
lean_inc(v_infoState_3343_);
lean_inc(v_messages_3342_);
lean_inc(v_cache_3341_);
lean_inc(v_traceState_3336_);
lean_inc(v_auxDeclNGen_3340_);
lean_inc(v_ngen_3339_);
lean_inc(v_nextMacroScope_3338_);
lean_inc(v_env_3337_);
lean_dec(v___x_3335_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3363_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
uint64_t v_tid_3348_; lean_object* v___x_3350_; uint8_t v_isShared_3351_; uint8_t v_isSharedCheck_3361_; 
v_tid_3348_ = lean_ctor_get_uint64(v_traceState_3336_, sizeof(void*)*1);
v_isSharedCheck_3361_ = !lean_is_exclusive(v_traceState_3336_);
if (v_isSharedCheck_3361_ == 0)
{
lean_object* v_unused_3362_; 
v_unused_3362_ = lean_ctor_get(v_traceState_3336_, 0);
lean_dec(v_unused_3362_);
v___x_3350_ = v_traceState_3336_;
v_isShared_3351_ = v_isSharedCheck_3361_;
goto v_resetjp_3349_;
}
else
{
lean_dec(v_traceState_3336_);
v___x_3350_ = lean_box(0);
v_isShared_3351_ = v_isSharedCheck_3361_;
goto v_resetjp_3349_;
}
v_resetjp_3349_:
{
lean_object* v___x_3352_; lean_object* v___x_3354_; 
v___x_3352_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1);
if (v_isShared_3351_ == 0)
{
lean_ctor_set(v___x_3350_, 0, v___x_3352_);
v___x_3354_ = v___x_3350_;
goto v_reusejp_3353_;
}
else
{
lean_object* v_reuseFailAlloc_3360_; 
v_reuseFailAlloc_3360_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3360_, 0, v___x_3352_);
lean_ctor_set_uint64(v_reuseFailAlloc_3360_, sizeof(void*)*1, v_tid_3348_);
v___x_3354_ = v_reuseFailAlloc_3360_;
goto v_reusejp_3353_;
}
v_reusejp_3353_:
{
lean_object* v___x_3356_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 4, v___x_3354_);
v___x_3356_ = v___x_3346_;
goto v_reusejp_3355_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_env_3337_);
lean_ctor_set(v_reuseFailAlloc_3359_, 1, v_nextMacroScope_3338_);
lean_ctor_set(v_reuseFailAlloc_3359_, 2, v_ngen_3339_);
lean_ctor_set(v_reuseFailAlloc_3359_, 3, v_auxDeclNGen_3340_);
lean_ctor_set(v_reuseFailAlloc_3359_, 4, v___x_3354_);
lean_ctor_set(v_reuseFailAlloc_3359_, 5, v_cache_3341_);
lean_ctor_set(v_reuseFailAlloc_3359_, 6, v_messages_3342_);
lean_ctor_set(v_reuseFailAlloc_3359_, 7, v_infoState_3343_);
lean_ctor_set(v_reuseFailAlloc_3359_, 8, v_snapshotTasks_3344_);
v___x_3356_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3355_;
}
v_reusejp_3355_:
{
lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3357_ = lean_st_ref_put(v___y_3330_, v___x_3356_);
v___x_3358_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3358_, 0, v_traces_3334_);
return v___x_3358_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___boxed(lean_object* v___y_3364_, lean_object* v___y_3365_){
_start:
{
lean_object* v_res_3366_; 
v_res_3366_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(v___y_3364_);
lean_dec(v___y_3364_);
return v_res_3366_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0(lean_object* v_x_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
lean_object* v___x_3375_; 
lean_inc(v___y_3369_);
lean_inc(v___y_3368_);
v___x_3375_ = lean_apply_7(v_x_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_, lean_box(0));
return v___x_3375_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0___boxed(lean_object* v_x_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
lean_object* v_res_3384_; 
v_res_3384_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0(v_x_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_);
lean_dec(v___y_3378_);
lean_dec(v___y_3377_);
return v_res_3384_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(lean_object* v_lctx_3385_, lean_object* v_localInsts_3386_, lean_object* v_x_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v___f_3395_; lean_object* v___x_3396_; 
lean_inc(v___y_3389_);
lean_inc(v___y_3388_);
v___f_3395_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_3395_, 0, v_x_3387_);
lean_closure_set(v___f_3395_, 1, v___y_3388_);
lean_closure_set(v___f_3395_, 2, v___y_3389_);
v___x_3396_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_3385_, v_localInsts_3386_, v___f_3395_, v___y_3390_, v___y_3391_, v___y_3392_, v___y_3393_);
if (lean_obj_tag(v___x_3396_) == 0)
{
return v___x_3396_;
}
else
{
lean_object* v_a_3397_; lean_object* v___x_3399_; uint8_t v_isShared_3400_; uint8_t v_isSharedCheck_3404_; 
v_a_3397_ = lean_ctor_get(v___x_3396_, 0);
v_isSharedCheck_3404_ = !lean_is_exclusive(v___x_3396_);
if (v_isSharedCheck_3404_ == 0)
{
v___x_3399_ = v___x_3396_;
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
else
{
lean_inc(v_a_3397_);
lean_dec(v___x_3396_);
v___x_3399_ = lean_box(0);
v_isShared_3400_ = v_isSharedCheck_3404_;
goto v_resetjp_3398_;
}
v_resetjp_3398_:
{
lean_object* v___x_3402_; 
if (v_isShared_3400_ == 0)
{
v___x_3402_ = v___x_3399_;
goto v_reusejp_3401_;
}
else
{
lean_object* v_reuseFailAlloc_3403_; 
v_reuseFailAlloc_3403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3403_, 0, v_a_3397_);
v___x_3402_ = v_reuseFailAlloc_3403_;
goto v_reusejp_3401_;
}
v_reusejp_3401_:
{
return v___x_3402_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg___boxed(lean_object* v_lctx_3405_, lean_object* v_localInsts_3406_, lean_object* v_x_3407_, lean_object* v___y_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_){
_start:
{
lean_object* v_res_3415_; 
v_res_3415_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3405_, v_localInsts_3406_, v_x_3407_, v___y_3408_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_);
lean_dec(v___y_3413_);
lean_dec_ref(v___y_3412_);
lean_dec(v___y_3411_);
lean_dec_ref(v___y_3410_);
lean_dec(v___y_3409_);
lean_dec(v___y_3408_);
return v_res_3415_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(lean_object* v___y_3416_){
_start:
{
lean_object* v___x_3418_; lean_object* v_ngen_3419_; lean_object* v_namePrefix_3420_; lean_object* v_idx_3421_; lean_object* v___x_3423_; uint8_t v_isShared_3424_; uint8_t v_isSharedCheck_3450_; 
v___x_3418_ = lean_st_ref_get(v___y_3416_);
v_ngen_3419_ = lean_ctor_get(v___x_3418_, 2);
lean_inc_ref(v_ngen_3419_);
lean_dec(v___x_3418_);
v_namePrefix_3420_ = lean_ctor_get(v_ngen_3419_, 0);
v_idx_3421_ = lean_ctor_get(v_ngen_3419_, 1);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_ngen_3419_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3423_ = v_ngen_3419_;
v_isShared_3424_ = v_isSharedCheck_3450_;
goto v_resetjp_3422_;
}
else
{
lean_inc(v_idx_3421_);
lean_inc(v_namePrefix_3420_);
lean_dec(v_ngen_3419_);
v___x_3423_ = lean_box(0);
v_isShared_3424_ = v_isSharedCheck_3450_;
goto v_resetjp_3422_;
}
v_resetjp_3422_:
{
lean_object* v_r_3425_; lean_object* v___x_3426_; lean_object* v___x_3427_; lean_object* v___x_3429_; 
lean_inc(v_idx_3421_);
lean_inc(v_namePrefix_3420_);
v_r_3425_ = l_Lean_Name_num___override(v_namePrefix_3420_, v_idx_3421_);
v___x_3426_ = lean_unsigned_to_nat(1u);
v___x_3427_ = lean_nat_add(v_idx_3421_, v___x_3426_);
lean_dec(v_idx_3421_);
if (v_isShared_3424_ == 0)
{
lean_ctor_set(v___x_3423_, 1, v___x_3427_);
v___x_3429_ = v___x_3423_;
goto v_reusejp_3428_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v_namePrefix_3420_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v___x_3427_);
v___x_3429_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3428_;
}
v_reusejp_3428_:
{
lean_object* v___x_3430_; lean_object* v_env_3431_; lean_object* v_nextMacroScope_3432_; lean_object* v_auxDeclNGen_3433_; lean_object* v_traceState_3434_; lean_object* v_cache_3435_; lean_object* v_messages_3436_; lean_object* v_infoState_3437_; lean_object* v_snapshotTasks_3438_; lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3447_; 
v___x_3430_ = lean_st_ref_take(v___y_3416_);
v_env_3431_ = lean_ctor_get(v___x_3430_, 0);
v_nextMacroScope_3432_ = lean_ctor_get(v___x_3430_, 1);
v_auxDeclNGen_3433_ = lean_ctor_get(v___x_3430_, 3);
v_traceState_3434_ = lean_ctor_get(v___x_3430_, 4);
v_cache_3435_ = lean_ctor_get(v___x_3430_, 5);
v_messages_3436_ = lean_ctor_get(v___x_3430_, 6);
v_infoState_3437_ = lean_ctor_get(v___x_3430_, 7);
v_snapshotTasks_3438_ = lean_ctor_get(v___x_3430_, 8);
v_isSharedCheck_3447_ = !lean_is_exclusive(v___x_3430_);
if (v_isSharedCheck_3447_ == 0)
{
lean_object* v_unused_3448_; 
v_unused_3448_ = lean_ctor_get(v___x_3430_, 2);
lean_dec(v_unused_3448_);
v___x_3440_ = v___x_3430_;
v_isShared_3441_ = v_isSharedCheck_3447_;
goto v_resetjp_3439_;
}
else
{
lean_inc(v_snapshotTasks_3438_);
lean_inc(v_infoState_3437_);
lean_inc(v_messages_3436_);
lean_inc(v_cache_3435_);
lean_inc(v_traceState_3434_);
lean_inc(v_auxDeclNGen_3433_);
lean_inc(v_nextMacroScope_3432_);
lean_inc(v_env_3431_);
lean_dec(v___x_3430_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3447_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3443_; 
if (v_isShared_3441_ == 0)
{
lean_ctor_set(v___x_3440_, 2, v___x_3429_);
v___x_3443_ = v___x_3440_;
goto v_reusejp_3442_;
}
else
{
lean_object* v_reuseFailAlloc_3446_; 
v_reuseFailAlloc_3446_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_3446_, 0, v_env_3431_);
lean_ctor_set(v_reuseFailAlloc_3446_, 1, v_nextMacroScope_3432_);
lean_ctor_set(v_reuseFailAlloc_3446_, 2, v___x_3429_);
lean_ctor_set(v_reuseFailAlloc_3446_, 3, v_auxDeclNGen_3433_);
lean_ctor_set(v_reuseFailAlloc_3446_, 4, v_traceState_3434_);
lean_ctor_set(v_reuseFailAlloc_3446_, 5, v_cache_3435_);
lean_ctor_set(v_reuseFailAlloc_3446_, 6, v_messages_3436_);
lean_ctor_set(v_reuseFailAlloc_3446_, 7, v_infoState_3437_);
lean_ctor_set(v_reuseFailAlloc_3446_, 8, v_snapshotTasks_3438_);
v___x_3443_ = v_reuseFailAlloc_3446_;
goto v_reusejp_3442_;
}
v_reusejp_3442_:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3444_ = lean_st_ref_put(v___y_3416_, v___x_3443_);
v___x_3445_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3445_, 0, v_r_3425_);
return v___x_3445_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg___boxed(lean_object* v___y_3451_, lean_object* v___y_3452_){
_start:
{
lean_object* v_res_3453_; 
v_res_3453_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(v___y_3451_);
lean_dec(v___y_3451_);
return v_res_3453_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(lean_object* v___y_3454_, lean_object* v___y_3455_, lean_object* v___y_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_){
_start:
{
lean_object* v___x_3461_; lean_object* v_a_3462_; lean_object* v___x_3464_; uint8_t v_isShared_3465_; uint8_t v_isSharedCheck_3469_; 
v___x_3461_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(v___y_3459_);
v_a_3462_ = lean_ctor_get(v___x_3461_, 0);
v_isSharedCheck_3469_ = !lean_is_exclusive(v___x_3461_);
if (v_isSharedCheck_3469_ == 0)
{
v___x_3464_ = v___x_3461_;
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
else
{
lean_inc(v_a_3462_);
lean_dec(v___x_3461_);
v___x_3464_ = lean_box(0);
v_isShared_3465_ = v_isSharedCheck_3469_;
goto v_resetjp_3463_;
}
v_resetjp_3463_:
{
lean_object* v___x_3467_; 
if (v_isShared_3465_ == 0)
{
v___x_3467_ = v___x_3464_;
goto v_reusejp_3466_;
}
else
{
lean_object* v_reuseFailAlloc_3468_; 
v_reuseFailAlloc_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3468_, 0, v_a_3462_);
v___x_3467_ = v_reuseFailAlloc_3468_;
goto v_reusejp_3466_;
}
v_reusejp_3466_:
{
return v___x_3467_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1___boxed(lean_object* v___y_3470_, lean_object* v___y_3471_, lean_object* v___y_3472_, lean_object* v___y_3473_, lean_object* v___y_3474_, lean_object* v___y_3475_, lean_object* v___y_3476_){
_start:
{
lean_object* v_res_3477_; 
v_res_3477_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v___y_3470_, v___y_3471_, v___y_3472_, v___y_3473_, v___y_3474_, v___y_3475_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3474_);
lean_dec(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec(v___y_3470_);
return v_res_3477_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1(void){
_start:
{
lean_object* v___x_3479_; lean_object* v___x_3480_; 
v___x_3479_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__0));
v___x_3480_ = l_Lean_stringToMessageData(v___x_3479_);
return v___x_3480_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3(void){
_start:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3482_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__2));
v___x_3483_ = l_Lean_stringToMessageData(v___x_3482_);
return v___x_3483_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2(lean_object* v_e_3486_, lean_object* v_x_3487_, lean_object* v___y_3488_, lean_object* v___y_3489_, lean_object* v___y_3490_, lean_object* v___y_3491_, lean_object* v___y_3492_, lean_object* v___y_3493_){
_start:
{
lean_object* v___x_3495_; lean_object* v___y_3497_; uint8_t v___x_3506_; 
v___x_3495_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__1);
v___x_3506_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v___y_3488_);
if (v___x_3506_ == 0)
{
lean_object* v___x_3507_; 
v___x_3507_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__4));
v___y_3497_ = v___x_3507_;
goto v___jp_3496_;
}
else
{
lean_object* v___x_3508_; 
v___x_3508_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__5));
v___y_3497_ = v___x_3508_;
goto v___jp_3496_;
}
v___jp_3496_:
{
lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; 
lean_inc_ref(v___y_3497_);
v___x_3498_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3498_, 0, v___y_3497_);
v___x_3499_ = l_Lean_MessageData_ofFormat(v___x_3498_);
v___x_3500_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3500_, 0, v___x_3495_);
lean_ctor_set(v___x_3500_, 1, v___x_3499_);
v___x_3501_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___closed__3);
v___x_3502_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3502_, 0, v___x_3500_);
lean_ctor_set(v___x_3502_, 1, v___x_3501_);
v___x_3503_ = l_Lean_indentExpr(v_e_3486_);
v___x_3504_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3502_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
v___x_3505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3505_, 0, v___x_3504_);
return v___x_3505_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___boxed(lean_object* v_e_3509_, lean_object* v_x_3510_, lean_object* v___y_3511_, lean_object* v___y_3512_, lean_object* v___y_3513_, lean_object* v___y_3514_, lean_object* v___y_3515_, lean_object* v___y_3516_, lean_object* v___y_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2(v_e_3509_, v_x_3510_, v___y_3511_, v___y_3512_, v___y_3513_, v___y_3514_, v___y_3515_, v___y_3516_);
lean_dec(v___y_3516_);
lean_dec_ref(v___y_3515_);
lean_dec(v___y_3514_);
lean_dec_ref(v___y_3513_);
lean_dec(v___y_3512_);
lean_dec(v___y_3511_);
lean_dec_ref(v_x_3510_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(lean_object* v_lctx_3519_, lean_object* v_x_3520_, lean_object* v___y_3521_, lean_object* v___y_3522_, lean_object* v___y_3523_, lean_object* v___y_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_){
_start:
{
lean_object* v_keyedConfig_3528_; uint8_t v_trackZetaDelta_3529_; lean_object* v_zetaDeltaSet_3530_; lean_object* v_localInstances_3531_; lean_object* v_defEqCtx_x3f_3532_; lean_object* v_synthPendingDepth_3533_; lean_object* v_customCanUnfoldPredicate_x3f_3534_; uint8_t v_univApprox_3535_; uint8_t v_inTypeClassResolution_3536_; uint8_t v_cacheInferType_3537_; lean_object* v___x_3538_; lean_object* v___x_3539_; 
v_keyedConfig_3528_ = lean_ctor_get(v___y_3523_, 0);
v_trackZetaDelta_3529_ = lean_ctor_get_uint8(v___y_3523_, sizeof(void*)*7);
v_zetaDeltaSet_3530_ = lean_ctor_get(v___y_3523_, 1);
v_localInstances_3531_ = lean_ctor_get(v___y_3523_, 3);
v_defEqCtx_x3f_3532_ = lean_ctor_get(v___y_3523_, 4);
v_synthPendingDepth_3533_ = lean_ctor_get(v___y_3523_, 5);
v_customCanUnfoldPredicate_x3f_3534_ = lean_ctor_get(v___y_3523_, 6);
v_univApprox_3535_ = lean_ctor_get_uint8(v___y_3523_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3536_ = lean_ctor_get_uint8(v___y_3523_, sizeof(void*)*7 + 2);
v_cacheInferType_3537_ = lean_ctor_get_uint8(v___y_3523_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_3534_);
lean_inc(v_synthPendingDepth_3533_);
lean_inc(v_defEqCtx_x3f_3532_);
lean_inc_ref(v_localInstances_3531_);
lean_inc(v_zetaDeltaSet_3530_);
lean_inc_ref(v_keyedConfig_3528_);
v___x_3538_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3538_, 0, v_keyedConfig_3528_);
lean_ctor_set(v___x_3538_, 1, v_zetaDeltaSet_3530_);
lean_ctor_set(v___x_3538_, 2, v_lctx_3519_);
lean_ctor_set(v___x_3538_, 3, v_localInstances_3531_);
lean_ctor_set(v___x_3538_, 4, v_defEqCtx_x3f_3532_);
lean_ctor_set(v___x_3538_, 5, v_synthPendingDepth_3533_);
lean_ctor_set(v___x_3538_, 6, v_customCanUnfoldPredicate_x3f_3534_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*7, v_trackZetaDelta_3529_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*7 + 1, v_univApprox_3535_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3536_);
lean_ctor_set_uint8(v___x_3538_, sizeof(void*)*7 + 3, v_cacheInferType_3537_);
lean_inc(v___y_3526_);
lean_inc_ref(v___y_3525_);
lean_inc(v___y_3524_);
lean_inc(v___y_3522_);
lean_inc(v___y_3521_);
v___x_3539_ = lean_apply_7(v_x_3520_, v___y_3521_, v___y_3522_, v___x_3538_, v___y_3524_, v___y_3525_, v___y_3526_, lean_box(0));
if (lean_obj_tag(v___x_3539_) == 0)
{
lean_object* v_a_3540_; lean_object* v___x_3542_; uint8_t v_isShared_3543_; uint8_t v_isSharedCheck_3547_; 
v_a_3540_ = lean_ctor_get(v___x_3539_, 0);
v_isSharedCheck_3547_ = !lean_is_exclusive(v___x_3539_);
if (v_isSharedCheck_3547_ == 0)
{
v___x_3542_ = v___x_3539_;
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
else
{
lean_inc(v_a_3540_);
lean_dec(v___x_3539_);
v___x_3542_ = lean_box(0);
v_isShared_3543_ = v_isSharedCheck_3547_;
goto v_resetjp_3541_;
}
v_resetjp_3541_:
{
lean_object* v___x_3545_; 
if (v_isShared_3543_ == 0)
{
v___x_3545_ = v___x_3542_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v_a_3540_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
else
{
return v___x_3539_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg___boxed(lean_object* v_lctx_3548_, lean_object* v_x_3549_, lean_object* v___y_3550_, lean_object* v___y_3551_, lean_object* v___y_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_){
_start:
{
lean_object* v_res_3557_; 
v_res_3557_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(v_lctx_3548_, v_x_3549_, v___y_3550_, v___y_3551_, v___y_3552_, v___y_3553_, v___y_3554_, v___y_3555_);
lean_dec(v___y_3555_);
lean_dec_ref(v___y_3554_);
lean_dec(v___y_3553_);
lean_dec_ref(v___y_3552_);
lean_dec(v___y_3551_);
lean_dec(v___y_3550_);
return v_res_3557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(lean_object* v_fvars_3560_, lean_object* v_letFVars_3561_, lean_object* v_lctx_3562_, lean_object* v_v_3563_, lean_object* v_e_3564_, lean_object* v___y_3565_, lean_object* v___y_3566_, lean_object* v___y_3567_, lean_object* v___y_3568_, lean_object* v___y_3569_, lean_object* v___y_3570_){
_start:
{
lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3574_; lean_object* v___x_3575_; lean_object* v___x_3576_; 
v___x_3572_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0));
v___x_3573_ = lean_expr_instantiate_rev(v_e_3564_, v_fvars_3560_);
v___x_3574_ = lean_apply_1(v_v_3563_, v___x_3573_);
v___x_3575_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_withLetFVars___boxed), 10, 3);
lean_closure_set(v___x_3575_, 0, lean_box(0));
lean_closure_set(v___x_3575_, 1, v_letFVars_3561_);
lean_closure_set(v___x_3575_, 2, v___x_3574_);
v___x_3576_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3562_, v___x_3572_, v___x_3575_, v___y_3565_, v___y_3566_, v___y_3567_, v___y_3568_, v___y_3569_, v___y_3570_);
return v___x_3576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___boxed(lean_object* v_fvars_3577_, lean_object* v_letFVars_3578_, lean_object* v_lctx_3579_, lean_object* v_v_3580_, lean_object* v_e_3581_, lean_object* v___y_3582_, lean_object* v___y_3583_, lean_object* v___y_3584_, lean_object* v___y_3585_, lean_object* v___y_3586_, lean_object* v___y_3587_, lean_object* v___y_3588_){
_start:
{
lean_object* v_res_3589_; 
v_res_3589_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_3577_, v_letFVars_3578_, v_lctx_3579_, v_v_3580_, v_e_3581_, v___y_3582_, v___y_3583_, v___y_3584_, v___y_3585_, v___y_3586_, v___y_3587_);
lean_dec(v___y_3587_);
lean_dec_ref(v___y_3586_);
lean_dec(v___y_3585_);
lean_dec_ref(v___y_3584_);
lean_dec(v___y_3583_);
lean_dec(v___y_3582_);
lean_dec_ref(v_e_3581_);
lean_dec_ref(v_fvars_3577_);
return v_res_3589_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__0));
v___x_3592_ = l_Lean_stringToMessageData(v___x_3591_);
return v___x_3592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1(lean_object* v_a_3593_, lean_object* v_a_3594_, lean_object* v___y_3595_, lean_object* v___y_3596_, lean_object* v___y_3597_, lean_object* v___y_3598_, lean_object* v___y_3599_, lean_object* v___y_3600_){
_start:
{
lean_object* v___x_3602_; 
lean_inc_ref(v_a_3593_);
v___x_3602_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Result_type___redArg(v_a_3593_, v___y_3596_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_);
if (lean_obj_tag(v___x_3602_) == 0)
{
lean_object* v_a_3603_; lean_object* v_expr_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3654_; 
v_a_3603_ = lean_ctor_get(v___x_3602_, 0);
lean_inc(v_a_3603_);
lean_dec_ref_known(v___x_3602_, 1);
v_expr_3604_ = lean_ctor_get(v_a_3594_, 0);
v_isSharedCheck_3654_ = !lean_is_exclusive(v_a_3594_);
if (v_isSharedCheck_3654_ == 0)
{
lean_object* v_unused_3655_; 
v_unused_3655_ = lean_ctor_get(v_a_3594_, 1);
lean_dec(v_unused_3655_);
v___x_3606_ = v_a_3594_;
v_isShared_3607_ = v_isSharedCheck_3654_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_expr_3604_);
lean_dec(v_a_3594_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3654_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3608_; 
lean_inc(v_a_3603_);
lean_inc_ref(v_expr_3604_);
v___x_3608_ = l_Lean_Meta_isExprDefEq(v_expr_3604_, v_a_3603_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_);
if (lean_obj_tag(v___x_3608_) == 0)
{
lean_object* v_a_3609_; lean_object* v___x_3611_; uint8_t v_isShared_3612_; uint8_t v_isSharedCheck_3645_; 
v_a_3609_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3645_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3645_ == 0)
{
v___x_3611_ = v___x_3608_;
v_isShared_3612_ = v_isSharedCheck_3645_;
goto v_resetjp_3610_;
}
else
{
lean_inc(v_a_3609_);
lean_dec(v___x_3608_);
v___x_3611_ = lean_box(0);
v_isShared_3612_ = v_isSharedCheck_3645_;
goto v_resetjp_3610_;
}
v_resetjp_3610_:
{
uint8_t v___x_3613_; 
v___x_3613_ = lean_unbox(v_a_3609_);
lean_dec(v_a_3609_);
if (v___x_3613_ == 0)
{
lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; 
lean_del_object(v___x_3611_);
v___x_3614_ = lean_box(0);
v___x_3615_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0));
v___x_3616_ = l_Lean_Meta_mkHasTypeButIsExpectedMsg___redArg(v_a_3603_, v_expr_3604_, v___x_3614_, v___x_3615_);
if (lean_obj_tag(v___x_3616_) == 0)
{
lean_object* v_a_3617_; lean_object* v_expr_3618_; lean_object* v___x_3620_; uint8_t v_isShared_3621_; uint8_t v_isSharedCheck_3631_; 
v_a_3617_ = lean_ctor_get(v___x_3616_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3616_, 1);
v_expr_3618_ = lean_ctor_get(v_a_3593_, 0);
v_isSharedCheck_3631_ = !lean_is_exclusive(v_a_3593_);
if (v_isSharedCheck_3631_ == 0)
{
lean_object* v_unused_3632_; 
v_unused_3632_ = lean_ctor_get(v_a_3593_, 1);
lean_dec(v_unused_3632_);
v___x_3620_ = v_a_3593_;
v_isShared_3621_ = v_isSharedCheck_3631_;
goto v_resetjp_3619_;
}
else
{
lean_inc(v_expr_3618_);
lean_dec(v_a_3593_);
v___x_3620_ = lean_box(0);
v_isShared_3621_ = v_isSharedCheck_3631_;
goto v_resetjp_3619_;
}
v_resetjp_3619_:
{
lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3625_; 
v___x_3622_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___closed__1);
v___x_3623_ = l_Lean_indentExpr(v_expr_3618_);
if (v_isShared_3621_ == 0)
{
lean_ctor_set_tag(v___x_3620_, 7);
lean_ctor_set(v___x_3620_, 1, v___x_3623_);
lean_ctor_set(v___x_3620_, 0, v___x_3622_);
v___x_3625_ = v___x_3620_;
goto v_reusejp_3624_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v___x_3622_);
lean_ctor_set(v_reuseFailAlloc_3630_, 1, v___x_3623_);
v___x_3625_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3624_;
}
v_reusejp_3624_:
{
lean_object* v___x_3627_; 
if (v_isShared_3607_ == 0)
{
lean_ctor_set_tag(v___x_3606_, 7);
lean_ctor_set(v___x_3606_, 1, v_a_3617_);
lean_ctor_set(v___x_3606_, 0, v___x_3625_);
v___x_3627_ = v___x_3606_;
goto v_reusejp_3626_;
}
else
{
lean_object* v_reuseFailAlloc_3629_; 
v_reuseFailAlloc_3629_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3629_, 0, v___x_3625_);
lean_ctor_set(v_reuseFailAlloc_3629_, 1, v_a_3617_);
v___x_3627_ = v_reuseFailAlloc_3629_;
goto v_reusejp_3626_;
}
v_reusejp_3626_:
{
lean_object* v___x_3628_; 
v___x_3628_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_3627_, v___y_3597_, v___y_3598_, v___y_3599_, v___y_3600_);
return v___x_3628_;
}
}
}
}
else
{
lean_object* v_a_3633_; lean_object* v___x_3635_; uint8_t v_isShared_3636_; uint8_t v_isSharedCheck_3640_; 
lean_del_object(v___x_3606_);
lean_dec_ref(v_a_3593_);
v_a_3633_ = lean_ctor_get(v___x_3616_, 0);
v_isSharedCheck_3640_ = !lean_is_exclusive(v___x_3616_);
if (v_isSharedCheck_3640_ == 0)
{
v___x_3635_ = v___x_3616_;
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
else
{
lean_inc(v_a_3633_);
lean_dec(v___x_3616_);
v___x_3635_ = lean_box(0);
v_isShared_3636_ = v_isSharedCheck_3640_;
goto v_resetjp_3634_;
}
v_resetjp_3634_:
{
lean_object* v___x_3638_; 
if (v_isShared_3636_ == 0)
{
v___x_3638_ = v___x_3635_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v_a_3633_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
}
}
else
{
lean_object* v___x_3641_; lean_object* v___x_3643_; 
lean_del_object(v___x_3606_);
lean_dec_ref(v_expr_3604_);
lean_dec(v_a_3603_);
lean_dec_ref(v_a_3593_);
v___x_3641_ = lean_box(0);
if (v_isShared_3612_ == 0)
{
lean_ctor_set(v___x_3611_, 0, v___x_3641_);
v___x_3643_ = v___x_3611_;
goto v_reusejp_3642_;
}
else
{
lean_object* v_reuseFailAlloc_3644_; 
v_reuseFailAlloc_3644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3644_, 0, v___x_3641_);
v___x_3643_ = v_reuseFailAlloc_3644_;
goto v_reusejp_3642_;
}
v_reusejp_3642_:
{
return v___x_3643_;
}
}
}
}
else
{
lean_object* v_a_3646_; lean_object* v___x_3648_; uint8_t v_isShared_3649_; uint8_t v_isSharedCheck_3653_; 
lean_del_object(v___x_3606_);
lean_dec_ref(v_expr_3604_);
lean_dec(v_a_3603_);
lean_dec_ref(v_a_3593_);
v_a_3646_ = lean_ctor_get(v___x_3608_, 0);
v_isSharedCheck_3653_ = !lean_is_exclusive(v___x_3608_);
if (v_isSharedCheck_3653_ == 0)
{
v___x_3648_ = v___x_3608_;
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
else
{
lean_inc(v_a_3646_);
lean_dec(v___x_3608_);
v___x_3648_ = lean_box(0);
v_isShared_3649_ = v_isSharedCheck_3653_;
goto v_resetjp_3647_;
}
v_resetjp_3647_:
{
lean_object* v___x_3651_; 
if (v_isShared_3649_ == 0)
{
v___x_3651_ = v___x_3648_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v_a_3646_);
v___x_3651_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
return v___x_3651_;
}
}
}
}
}
else
{
lean_object* v_a_3656_; lean_object* v___x_3658_; uint8_t v_isShared_3659_; uint8_t v_isSharedCheck_3663_; 
lean_dec_ref(v_a_3594_);
lean_dec_ref(v_a_3593_);
v_a_3656_ = lean_ctor_get(v___x_3602_, 0);
v_isSharedCheck_3663_ = !lean_is_exclusive(v___x_3602_);
if (v_isSharedCheck_3663_ == 0)
{
v___x_3658_ = v___x_3602_;
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
else
{
lean_inc(v_a_3656_);
lean_dec(v___x_3602_);
v___x_3658_ = lean_box(0);
v_isShared_3659_ = v_isSharedCheck_3663_;
goto v_resetjp_3657_;
}
v_resetjp_3657_:
{
lean_object* v___x_3661_; 
if (v_isShared_3659_ == 0)
{
v___x_3661_ = v___x_3658_;
goto v_reusejp_3660_;
}
else
{
lean_object* v_reuseFailAlloc_3662_; 
v_reuseFailAlloc_3662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3662_, 0, v_a_3656_);
v___x_3661_ = v_reuseFailAlloc_3662_;
goto v_reusejp_3660_;
}
v_reusejp_3660_:
{
return v___x_3661_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___boxed(lean_object* v_a_3664_, lean_object* v_a_3665_, lean_object* v___y_3666_, lean_object* v___y_3667_, lean_object* v___y_3668_, lean_object* v___y_3669_, lean_object* v___y_3670_, lean_object* v___y_3671_, lean_object* v___y_3672_){
_start:
{
lean_object* v_res_3673_; 
v_res_3673_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1(v_a_3664_, v_a_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_, v___y_3671_);
lean_dec(v___y_3671_);
lean_dec_ref(v___y_3670_);
lean_dec(v___y_3669_);
lean_dec_ref(v___y_3668_);
lean_dec(v___y_3667_);
lean_dec(v___y_3666_);
return v_res_3673_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3675_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__0));
v___x_3676_ = l_Lean_stringToMessageData(v___x_3675_);
return v___x_3676_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(lean_object* v_e_3677_, lean_object* v_a_3678_, lean_object* v_a_3679_, lean_object* v_a_3680_, lean_object* v_a_3681_, lean_object* v_a_3682_, lean_object* v_a_3683_){
_start:
{
if (lean_obj_tag(v_e_3677_) == 5)
{
lean_object* v_fn_3685_; lean_object* v_arg_3686_; lean_object* v___x_3687_; 
v_fn_3685_ = lean_ctor_get(v_e_3677_, 0);
v_arg_3686_ = lean_ctor_get(v_e_3677_, 1);
lean_inc_ref(v_fn_3685_);
v___x_3687_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(v_fn_3685_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_);
if (lean_obj_tag(v___x_3687_) == 0)
{
lean_object* v_a_3688_; lean_object* v___x_3689_; 
v_a_3688_ = lean_ctor_get(v___x_3687_, 0);
lean_inc(v_a_3688_);
lean_dec_ref_known(v___x_3687_, 1);
lean_inc_ref(v_arg_3686_);
v___x_3689_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_arg_3686_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_);
if (lean_obj_tag(v___x_3689_) == 0)
{
lean_object* v_a_3690_; lean_object* v___x_3692_; uint8_t v_isShared_3693_; uint8_t v_isSharedCheck_3712_; 
v_a_3690_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3692_ = v___x_3689_;
v_isShared_3693_ = v_isSharedCheck_3712_;
goto v_resetjp_3691_;
}
else
{
lean_inc(v_a_3690_);
lean_dec(v___x_3689_);
v___x_3692_ = lean_box(0);
v_isShared_3693_ = v_isSharedCheck_3712_;
goto v_resetjp_3691_;
}
v_resetjp_3691_:
{
lean_object* v_expr_3694_; size_t v___x_3695_; size_t v___x_3696_; uint8_t v___x_3697_; 
v_expr_3694_ = lean_ctor_get(v_a_3690_, 0);
lean_inc_ref(v_expr_3694_);
lean_dec(v_a_3690_);
v___x_3695_ = lean_ptr_addr(v_fn_3685_);
v___x_3696_ = lean_ptr_addr(v_a_3688_);
v___x_3697_ = lean_usize_dec_eq(v___x_3695_, v___x_3696_);
if (v___x_3697_ == 0)
{
lean_object* v___x_3698_; lean_object* v___x_3700_; 
lean_dec_ref_known(v_e_3677_, 2);
v___x_3698_ = l_Lean_Expr_app___override(v_a_3688_, v_expr_3694_);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v___x_3698_);
v___x_3700_ = v___x_3692_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3698_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
else
{
size_t v___x_3702_; size_t v___x_3703_; uint8_t v___x_3704_; 
v___x_3702_ = lean_ptr_addr(v_arg_3686_);
v___x_3703_ = lean_ptr_addr(v_expr_3694_);
v___x_3704_ = lean_usize_dec_eq(v___x_3702_, v___x_3703_);
if (v___x_3704_ == 0)
{
lean_object* v___x_3705_; lean_object* v___x_3707_; 
lean_dec_ref_known(v_e_3677_, 2);
v___x_3705_ = l_Lean_Expr_app___override(v_a_3688_, v_expr_3694_);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v___x_3705_);
v___x_3707_ = v___x_3692_;
goto v_reusejp_3706_;
}
else
{
lean_object* v_reuseFailAlloc_3708_; 
v_reuseFailAlloc_3708_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3708_, 0, v___x_3705_);
v___x_3707_ = v_reuseFailAlloc_3708_;
goto v_reusejp_3706_;
}
v_reusejp_3706_:
{
return v___x_3707_;
}
}
else
{
lean_object* v___x_3710_; 
lean_dec_ref(v_expr_3694_);
lean_dec(v_a_3688_);
if (v_isShared_3693_ == 0)
{
lean_ctor_set(v___x_3692_, 0, v_e_3677_);
v___x_3710_ = v___x_3692_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_e_3677_);
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
}
else
{
lean_object* v_a_3713_; lean_object* v___x_3715_; uint8_t v_isShared_3716_; uint8_t v_isSharedCheck_3720_; 
lean_dec(v_a_3688_);
lean_dec_ref_known(v_e_3677_, 2);
v_a_3713_ = lean_ctor_get(v___x_3689_, 0);
v_isSharedCheck_3720_ = !lean_is_exclusive(v___x_3689_);
if (v_isSharedCheck_3720_ == 0)
{
v___x_3715_ = v___x_3689_;
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
else
{
lean_inc(v_a_3713_);
lean_dec(v___x_3689_);
v___x_3715_ = lean_box(0);
v_isShared_3716_ = v_isSharedCheck_3720_;
goto v_resetjp_3714_;
}
v_resetjp_3714_:
{
lean_object* v___x_3718_; 
if (v_isShared_3716_ == 0)
{
v___x_3718_ = v___x_3715_;
goto v_reusejp_3717_;
}
else
{
lean_object* v_reuseFailAlloc_3719_; 
v_reuseFailAlloc_3719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3719_, 0, v_a_3713_);
v___x_3718_ = v_reuseFailAlloc_3719_;
goto v_reusejp_3717_;
}
v_reusejp_3717_:
{
return v___x_3718_;
}
}
}
}
else
{
lean_dec_ref_known(v_e_3677_, 2);
return v___x_3687_;
}
}
else
{
lean_object* v___x_3721_; 
v___x_3721_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_3677_, v_a_3678_, v_a_3679_, v_a_3680_, v_a_3681_, v_a_3682_, v_a_3683_);
if (lean_obj_tag(v___x_3721_) == 0)
{
lean_object* v_a_3722_; lean_object* v___x_3724_; uint8_t v_isShared_3725_; uint8_t v_isSharedCheck_3730_; 
v_a_3722_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3724_ = v___x_3721_;
v_isShared_3725_ = v_isSharedCheck_3730_;
goto v_resetjp_3723_;
}
else
{
lean_inc(v_a_3722_);
lean_dec(v___x_3721_);
v___x_3724_ = lean_box(0);
v_isShared_3725_ = v_isSharedCheck_3730_;
goto v_resetjp_3723_;
}
v_resetjp_3723_:
{
lean_object* v_expr_3726_; lean_object* v___x_3728_; 
v_expr_3726_ = lean_ctor_get(v_a_3722_, 0);
lean_inc_ref(v_expr_3726_);
lean_dec(v_a_3722_);
if (v_isShared_3725_ == 0)
{
lean_ctor_set(v___x_3724_, 0, v_expr_3726_);
v___x_3728_ = v___x_3724_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_expr_3726_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
v_a_3731_ = lean_ctor_get(v___x_3721_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3721_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3721_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3721_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v___x_3736_; 
if (v_isShared_3734_ == 0)
{
v___x_3736_ = v___x_3733_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_a_3731_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go___boxed(lean_object* v_e_3739_, lean_object* v_a_3740_, lean_object* v_a_3741_, lean_object* v_a_3742_, lean_object* v_a_3743_, lean_object* v_a_3744_, lean_object* v_a_3745_, lean_object* v___y_3746_){
_start:
{
lean_object* v_res_3747_; 
v_res_3747_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(v_e_3739_, v_a_3740_, v_a_3741_, v_a_3742_, v_a_3743_, v_a_3744_, v_a_3745_);
lean_dec(v_a_3745_);
lean_dec_ref(v_a_3744_);
lean_dec(v_a_3743_);
lean_dec_ref(v_a_3742_);
lean_dec(v_a_3741_);
lean_dec(v_a_3740_);
return v_res_3747_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(lean_object* v_e_3748_, lean_object* v_a_3749_, lean_object* v_a_3750_, lean_object* v_a_3751_, lean_object* v_a_3752_, lean_object* v_a_3753_, lean_object* v_a_3754_){
_start:
{
if (lean_obj_tag(v_e_3748_) == 5)
{
lean_object* v_fn_3756_; lean_object* v_arg_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; 
v_fn_3756_ = lean_ctor_get(v_e_3748_, 0);
v_arg_3757_ = lean_ctor_get(v_e_3748_, 1);
lean_inc_ref_n(v_fn_3756_, 2);
v___x_3758_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go___boxed), 8, 1);
lean_closure_set(v___x_3758_, 0, v_fn_3756_);
v___x_3759_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_fn_3756_, v___x_3758_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_);
if (lean_obj_tag(v___x_3759_) == 0)
{
lean_object* v_a_3760_; lean_object* v___x_3761_; 
v_a_3760_ = lean_ctor_get(v___x_3759_, 0);
lean_inc(v_a_3760_);
lean_dec_ref_known(v___x_3759_, 1);
lean_inc_ref(v_arg_3757_);
v___x_3761_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_arg_3757_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_);
if (lean_obj_tag(v___x_3761_) == 0)
{
lean_object* v_a_3762_; lean_object* v___x_3763_; 
v_a_3762_ = lean_ctor_get(v___x_3761_, 0);
lean_inc(v_a_3762_);
lean_dec_ref_known(v___x_3761_, 1);
v___x_3763_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitApp(v_e_3748_, v_a_3760_, v_a_3762_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_);
return v___x_3763_;
}
else
{
lean_dec(v_a_3760_);
lean_dec_ref_known(v_e_3748_, 2);
return v___x_3761_;
}
}
else
{
lean_dec_ref_known(v_e_3748_, 2);
return v___x_3759_;
}
}
else
{
lean_object* v___x_3764_; 
v___x_3764_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_3748_, v_a_3749_, v_a_3750_, v_a_3751_, v_a_3752_, v_a_3753_, v_a_3754_);
return v___x_3764_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs(lean_object* v_e_3765_, lean_object* v_a_3766_, lean_object* v_a_3767_, lean_object* v_a_3768_, lean_object* v_a_3769_, lean_object* v_a_3770_, lean_object* v_a_3771_){
_start:
{
uint8_t v___x_3773_; 
v___x_3773_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_Context_check(v_a_3766_);
if (v___x_3773_ == 0)
{
lean_object* v___x_3774_; 
v___x_3774_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(v_e_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v_a_3770_, v_a_3771_);
if (lean_obj_tag(v___x_3774_) == 0)
{
lean_object* v_a_3775_; lean_object* v___x_3777_; uint8_t v_isShared_3778_; uint8_t v_isSharedCheck_3784_; 
v_a_3775_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3784_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3784_ == 0)
{
v___x_3777_ = v___x_3774_;
v_isShared_3778_ = v_isSharedCheck_3784_;
goto v_resetjp_3776_;
}
else
{
lean_inc(v_a_3775_);
lean_dec(v___x_3774_);
v___x_3777_ = lean_box(0);
v_isShared_3778_ = v_isSharedCheck_3784_;
goto v_resetjp_3776_;
}
v_resetjp_3776_:
{
lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3782_; 
v___x_3779_ = lean_box(0);
v___x_3780_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3780_, 0, v_a_3775_);
lean_ctor_set(v___x_3780_, 1, v___x_3779_);
if (v_isShared_3778_ == 0)
{
lean_ctor_set(v___x_3777_, 0, v___x_3780_);
v___x_3782_ = v___x_3777_;
goto v_reusejp_3781_;
}
else
{
lean_object* v_reuseFailAlloc_3783_; 
v_reuseFailAlloc_3783_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3783_, 0, v___x_3780_);
v___x_3782_ = v_reuseFailAlloc_3783_;
goto v_reusejp_3781_;
}
v_reusejp_3781_:
{
return v___x_3782_;
}
}
}
else
{
lean_object* v_a_3785_; lean_object* v___x_3787_; uint8_t v_isShared_3788_; uint8_t v_isSharedCheck_3792_; 
v_a_3785_ = lean_ctor_get(v___x_3774_, 0);
v_isSharedCheck_3792_ = !lean_is_exclusive(v___x_3774_);
if (v_isSharedCheck_3792_ == 0)
{
v___x_3787_ = v___x_3774_;
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
else
{
lean_inc(v_a_3785_);
lean_dec(v___x_3774_);
v___x_3787_ = lean_box(0);
v_isShared_3788_ = v_isSharedCheck_3792_;
goto v_resetjp_3786_;
}
v_resetjp_3786_:
{
lean_object* v___x_3790_; 
if (v_isShared_3788_ == 0)
{
v___x_3790_ = v___x_3787_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3791_; 
v_reuseFailAlloc_3791_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3791_, 0, v_a_3785_);
v___x_3790_ = v_reuseFailAlloc_3791_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
return v___x_3790_;
}
}
}
}
else
{
lean_object* v___x_3793_; 
v___x_3793_ = l_Lean_Expr_getAppFn(v_e_3765_);
if (lean_obj_tag(v___x_3793_) == 2)
{
lean_object* v_mvarId_3794_; lean_object* v_dummy_3795_; lean_object* v_nargs_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; 
v_mvarId_3794_ = lean_ctor_get(v___x_3793_, 0);
lean_inc(v_mvarId_3794_);
lean_dec_ref_known(v___x_3793_, 1);
v_dummy_3795_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj___closed__5);
v_nargs_3796_ = l_Lean_Expr_getAppNumArgs(v_e_3765_);
lean_inc(v_nargs_3796_);
v___x_3797_ = lean_mk_array(v_nargs_3796_, v_dummy_3795_);
v___x_3798_ = lean_unsigned_to_nat(1u);
v___x_3799_ = lean_nat_sub(v_nargs_3796_, v___x_3798_);
lean_dec(v_nargs_3796_);
lean_inc_ref(v_e_3765_);
v___x_3800_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_e_3765_, v___x_3797_, v___x_3799_);
v___x_3801_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkMVar(v_mvarId_3794_, v___x_3800_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v_a_3770_, v_a_3771_);
lean_dec(v_mvarId_3794_);
if (lean_obj_tag(v___x_3801_) == 0)
{
lean_object* v___x_3802_; 
lean_dec_ref_known(v___x_3801_, 1);
v___x_3802_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(v_e_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v_a_3770_, v_a_3771_);
return v___x_3802_;
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
lean_dec_ref(v_e_3765_);
v_a_3803_ = lean_ctor_get(v___x_3801_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3801_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3805_ = v___x_3801_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3801_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
else
{
lean_object* v___x_3811_; 
lean_dec_ref(v___x_3793_);
v___x_3811_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go(v_e_3765_, v_a_3766_, v_a_3767_, v_a_3768_, v_a_3769_, v_a_3770_, v_a_3771_);
return v___x_3811_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs___boxed(lean_object* v_e_3812_, lean_object* v_a_3813_, lean_object* v_a_3814_, lean_object* v_a_3815_, lean_object* v_a_3816_, lean_object* v_a_3817_, lean_object* v_a_3818_, lean_object* v___y_3819_){
_start:
{
lean_object* v_res_3820_; 
v_res_3820_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs(v_e_3812_, v_a_3813_, v_a_3814_, v_a_3815_, v_a_3816_, v_a_3817_, v_a_3818_);
lean_dec(v_a_3818_);
lean_dec_ref(v_a_3817_);
lean_dec(v_a_3816_);
lean_dec_ref(v_a_3815_);
lean_dec(v_a_3814_);
lean_dec(v_a_3813_);
return v_res_3820_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType(lean_object* v_e_3821_, lean_object* v_a_3822_, lean_object* v_a_3823_, lean_object* v_a_3824_, lean_object* v_a_3825_, lean_object* v_a_3826_, lean_object* v_a_3827_){
_start:
{
lean_object* v___x_3829_; 
v___x_3829_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_3821_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_);
if (lean_obj_tag(v___x_3829_) == 0)
{
lean_object* v_a_3830_; lean_object* v___x_3831_; 
v_a_3830_ = lean_ctor_get(v___x_3829_, 0);
lean_inc(v_a_3830_);
lean_dec_ref_known(v___x_3829_, 1);
v___x_3831_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_ensureType(v_a_3830_, v_a_3822_, v_a_3823_, v_a_3824_, v_a_3825_, v_a_3826_, v_a_3827_);
return v___x_3831_;
}
else
{
return v___x_3829_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed(lean_object* v_e_3832_, lean_object* v_a_3833_, lean_object* v_a_3834_, lean_object* v_a_3835_, lean_object* v_a_3836_, lean_object* v_a_3837_, lean_object* v_a_3838_, lean_object* v___y_3839_){
_start:
{
lean_object* v_res_3840_; 
v_res_3840_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType(v_e_3832_, v_a_3833_, v_a_3834_, v_a_3835_, v_a_3836_, v_a_3837_, v_a_3838_);
lean_dec(v_a_3838_);
lean_dec_ref(v_a_3837_);
lean_dec(v_a_3836_);
lean_dec_ref(v_a_3835_);
lean_dec(v_a_3834_);
lean_dec(v_a_3833_);
return v_res_3840_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0(lean_object* v___x_3841_, lean_object* v_fvars_3842_, lean_object* v_doms_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_, lean_object* v___y_3847_, lean_object* v___y_3848_, lean_object* v___y_3849_){
_start:
{
lean_object* v___x_3851_; 
v___x_3851_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v___x_3841_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_);
if (lean_obj_tag(v___x_3851_) == 0)
{
lean_object* v_a_3852_; lean_object* v___x_3853_; 
v_a_3852_ = lean_ctor_get(v___x_3851_, 0);
lean_inc(v_a_3852_);
lean_dec_ref_known(v___x_3851_, 1);
v___x_3853_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize(v_fvars_3842_, v_doms_3843_, v_a_3852_, v___y_3844_, v___y_3845_, v___y_3846_, v___y_3847_, v___y_3848_, v___y_3849_);
return v___x_3853_;
}
else
{
return v___x_3851_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0___boxed(lean_object* v___x_3854_, lean_object* v_fvars_3855_, lean_object* v_doms_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_, lean_object* v___y_3860_, lean_object* v___y_3861_, lean_object* v___y_3862_, lean_object* v___y_3863_){
_start:
{
lean_object* v_res_3864_; 
v_res_3864_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0(v___x_3854_, v_fvars_3855_, v_doms_3856_, v___y_3857_, v___y_3858_, v___y_3859_, v___y_3860_, v___y_3861_, v___y_3862_);
lean_dec(v___y_3862_);
lean_dec_ref(v___y_3861_);
lean_dec(v___y_3860_);
lean_dec_ref(v___y_3859_);
lean_dec(v___y_3858_);
lean_dec(v___y_3857_);
lean_dec_ref(v_doms_3856_);
lean_dec_ref(v_fvars_3855_);
return v_res_3864_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(lean_object* v_lctx_3865_, lean_object* v_fvars_3866_, lean_object* v_doms_3867_, lean_object* v_e_3868_, lean_object* v_a_3869_, lean_object* v_a_3870_, lean_object* v_a_3871_, lean_object* v_a_3872_, lean_object* v_a_3873_, lean_object* v_a_3874_){
_start:
{
lean_object* v___x_3876_; 
v___x_3876_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_findCacheNoBVars_x3f___redArg(v_e_3868_, v_a_3870_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v_a_3877_; 
v_a_3877_ = lean_ctor_get(v___x_3876_, 0);
lean_inc(v_a_3877_);
lean_dec_ref_known(v___x_3876_, 1);
if (lean_obj_tag(v_a_3877_) == 1)
{
lean_object* v_val_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; 
lean_dec_ref(v_e_3868_);
v_val_3878_ = lean_ctor_get(v_a_3877_, 0);
lean_inc(v_val_3878_);
lean_dec_ref_known(v_a_3877_, 1);
v___x_3879_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0));
v___x_3880_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_finalize___boxed), 10, 3);
lean_closure_set(v___x_3880_, 0, v_fvars_3866_);
lean_closure_set(v___x_3880_, 1, v_doms_3867_);
lean_closure_set(v___x_3880_, 2, v_val_3878_);
v___x_3881_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3865_, v___x_3879_, v___x_3880_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_);
return v___x_3881_;
}
else
{
lean_dec(v_a_3877_);
if (lean_obj_tag(v_e_3868_) == 7)
{
lean_object* v_binderName_3882_; lean_object* v_binderType_3883_; lean_object* v_body_3884_; uint8_t v_binderInfo_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; 
v_binderName_3882_ = lean_ctor_get(v_e_3868_, 0);
lean_inc(v_binderName_3882_);
v_binderType_3883_ = lean_ctor_get(v_e_3868_, 1);
lean_inc_ref(v_binderType_3883_);
v_body_3884_ = lean_ctor_get(v_e_3868_, 2);
lean_inc_ref(v_body_3884_);
v_binderInfo_3885_ = lean_ctor_get_uint8(v_e_3868_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3868_, 3);
v___x_3886_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0));
v___x_3887_ = lean_expr_instantiate_rev(v_binderType_3883_, v_fvars_3866_);
lean_dec_ref(v_binderType_3883_);
v___x_3888_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed), 8, 1);
lean_closure_set(v___x_3888_, 0, v___x_3887_);
lean_inc_ref(v_lctx_3865_);
v___x_3889_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3865_, v___x_3886_, v___x_3888_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_);
if (lean_obj_tag(v___x_3889_) == 0)
{
lean_object* v_a_3890_; lean_object* v___x_3891_; 
v_a_3890_ = lean_ctor_get(v___x_3889_, 0);
lean_inc(v_a_3890_);
lean_dec_ref_known(v___x_3889_, 1);
v___x_3891_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_);
if (lean_obj_tag(v___x_3891_) == 0)
{
lean_object* v_a_3892_; lean_object* v_expr_3893_; uint8_t v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v_a_3892_ = lean_ctor_get(v___x_3891_, 0);
lean_inc_n(v_a_3892_, 2);
lean_dec_ref_known(v___x_3891_, 1);
v_expr_3893_ = lean_ctor_get(v_a_3890_, 0);
v___x_3894_ = 0;
lean_inc_ref(v_expr_3893_);
v___x_3895_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_3865_, v_a_3892_, v_binderName_3882_, v_expr_3893_, v_binderInfo_3885_, v___x_3894_);
v___x_3896_ = l_Lean_Expr_fvar___override(v_a_3892_);
v___x_3897_ = lean_array_push(v_fvars_3866_, v___x_3896_);
v___x_3898_ = lean_array_push(v_doms_3867_, v_a_3890_);
v_lctx_3865_ = v___x_3895_;
v_fvars_3866_ = v___x_3897_;
v_doms_3867_ = v___x_3898_;
v_e_3868_ = v_body_3884_;
goto _start;
}
else
{
lean_object* v_a_3900_; lean_object* v___x_3902_; uint8_t v_isShared_3903_; uint8_t v_isSharedCheck_3907_; 
lean_dec(v_a_3890_);
lean_dec_ref(v_body_3884_);
lean_dec(v_binderName_3882_);
lean_dec_ref(v_doms_3867_);
lean_dec_ref(v_fvars_3866_);
lean_dec_ref(v_lctx_3865_);
v_a_3900_ = lean_ctor_get(v___x_3891_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v___x_3891_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3902_ = v___x_3891_;
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
else
{
lean_inc(v_a_3900_);
lean_dec(v___x_3891_);
v___x_3902_ = lean_box(0);
v_isShared_3903_ = v_isSharedCheck_3907_;
goto v_resetjp_3901_;
}
v_resetjp_3901_:
{
lean_object* v___x_3905_; 
if (v_isShared_3903_ == 0)
{
v___x_3905_ = v___x_3902_;
goto v_reusejp_3904_;
}
else
{
lean_object* v_reuseFailAlloc_3906_; 
v_reuseFailAlloc_3906_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3906_, 0, v_a_3900_);
v___x_3905_ = v_reuseFailAlloc_3906_;
goto v_reusejp_3904_;
}
v_reusejp_3904_:
{
return v___x_3905_;
}
}
}
}
else
{
lean_dec_ref(v_body_3884_);
lean_dec(v_binderName_3882_);
lean_dec_ref(v_doms_3867_);
lean_dec_ref(v_fvars_3866_);
lean_dec_ref(v_lctx_3865_);
return v___x_3889_;
}
}
else
{
lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___f_3910_; lean_object* v___x_3911_; 
v___x_3908_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0___closed__0));
v___x_3909_ = lean_expr_instantiate_rev(v_e_3868_, v_fvars_3866_);
lean_dec_ref(v_e_3868_);
v___f_3910_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___lam__0___boxed), 10, 3);
lean_closure_set(v___f_3910_, 0, v___x_3909_);
lean_closure_set(v___f_3910_, 1, v_fvars_3866_);
lean_closure_set(v___f_3910_, 2, v_doms_3867_);
v___x_3911_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_3865_, v___x_3908_, v___f_3910_, v_a_3869_, v_a_3870_, v_a_3871_, v_a_3872_, v_a_3873_, v_a_3874_);
return v___x_3911_;
}
}
}
else
{
lean_object* v_a_3912_; lean_object* v___x_3914_; uint8_t v_isShared_3915_; uint8_t v_isSharedCheck_3919_; 
lean_dec_ref(v_e_3868_);
lean_dec_ref(v_doms_3867_);
lean_dec_ref(v_fvars_3866_);
lean_dec_ref(v_lctx_3865_);
v_a_3912_ = lean_ctor_get(v___x_3876_, 0);
v_isSharedCheck_3919_ = !lean_is_exclusive(v___x_3876_);
if (v_isSharedCheck_3919_ == 0)
{
v___x_3914_ = v___x_3876_;
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
else
{
lean_inc(v_a_3912_);
lean_dec(v___x_3876_);
v___x_3914_ = lean_box(0);
v_isShared_3915_ = v_isSharedCheck_3919_;
goto v_resetjp_3913_;
}
v_resetjp_3913_:
{
lean_object* v___x_3917_; 
if (v_isShared_3915_ == 0)
{
v___x_3917_ = v___x_3914_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3918_; 
v_reuseFailAlloc_3918_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3918_, 0, v_a_3912_);
v___x_3917_ = v_reuseFailAlloc_3918_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
return v___x_3917_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall(lean_object* v_e_3920_, lean_object* v_a_3921_, lean_object* v_a_3922_, lean_object* v_a_3923_, lean_object* v_a_3924_, lean_object* v_a_3925_, lean_object* v_a_3926_){
_start:
{
uint32_t v___x_3928_; uint8_t v___x_3929_; 
v___x_3928_ = 5;
v___x_3929_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_3920_, v___x_3928_);
if (v___x_3929_ == 0)
{
lean_object* v_lctx_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; 
v_lctx_3930_ = lean_ctor_get(v_a_3923_, 2);
v___x_3931_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0));
lean_inc_ref(v_lctx_3930_);
v___x_3932_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(v_lctx_3930_, v___x_3931_, v___x_3931_, v_e_3920_, v_a_3921_, v_a_3922_, v_a_3923_, v_a_3924_, v_a_3925_, v_a_3926_);
return v___x_3932_;
}
else
{
lean_object* v___x_3933_; lean_object* v___x_3934_; lean_object* v___x_3935_; 
v___x_3933_ = lean_box(0);
v___x_3934_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3934_, 0, v_e_3920_);
lean_ctor_set(v___x_3934_, 1, v___x_3933_);
v___x_3935_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3935_, 0, v___x_3934_);
return v___x_3935_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall___boxed(lean_object* v_e_3936_, lean_object* v_a_3937_, lean_object* v_a_3938_, lean_object* v_a_3939_, lean_object* v_a_3940_, lean_object* v_a_3941_, lean_object* v_a_3942_, lean_object* v___y_3943_){
_start:
{
lean_object* v_res_3944_; 
v_res_3944_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall(v_e_3936_, v_a_3937_, v_a_3938_, v_a_3939_, v_a_3940_, v_a_3941_, v_a_3942_);
lean_dec(v_a_3942_);
lean_dec_ref(v_a_3941_);
lean_dec(v_a_3940_);
lean_dec_ref(v_a_3939_);
lean_dec(v_a_3938_);
lean_dec(v_a_3937_);
return v_res_3944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0___boxed(lean_object* v_struct_3945_, lean_object* v_e_3946_, lean_object* v_typeName_3947_, lean_object* v_idx_3948_, lean_object* v___y_3949_, lean_object* v___y_3950_, lean_object* v___y_3951_, lean_object* v___y_3952_, lean_object* v___y_3953_, lean_object* v___y_3954_, lean_object* v___y_3955_){
_start:
{
lean_object* v_res_3956_; 
v_res_3956_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0(v_struct_3945_, v_e_3946_, v_typeName_3947_, v_idx_3948_, v___y_3949_, v___y_3950_, v___y_3951_, v___y_3952_, v___y_3953_, v___y_3954_);
lean_dec(v___y_3954_);
lean_dec_ref(v___y_3953_);
lean_dec(v___y_3952_);
lean_dec_ref(v___y_3951_);
lean_dec(v___y_3950_);
lean_dec(v___y_3949_);
return v_res_3956_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___boxed(lean_object* v_e_3957_, lean_object* v_a_3958_, lean_object* v_a_3959_, lean_object* v_a_3960_, lean_object* v_a_3961_, lean_object* v_a_3962_, lean_object* v_a_3963_, lean_object* v___y_3964_){
_start:
{
lean_object* v_res_3965_; 
v_res_3965_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_3957_, v_a_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_);
lean_dec(v_a_3963_);
lean_dec_ref(v_a_3962_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec(v_a_3958_);
return v_res_3965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2(lean_object* v_fvars_3966_, lean_object* v___y_3967_, lean_object* v___y_3968_, lean_object* v___y_3969_, lean_object* v___y_3970_, lean_object* v___y_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_){
_start:
{
lean_object* v___x_3975_; 
v___x_3975_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v___y_3967_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
if (lean_obj_tag(v___x_3975_) == 0)
{
lean_object* v_a_3976_; lean_object* v___x_3977_; 
v_a_3976_ = lean_ctor_get(v___x_3975_, 0);
lean_inc(v_a_3976_);
lean_dec_ref_known(v___x_3975_, 1);
v___x_3977_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize(v_fvars_3966_, v_a_3976_, v___y_3968_, v___y_3969_, v___y_3970_, v___y_3971_, v___y_3972_, v___y_3973_);
return v___x_3977_;
}
else
{
lean_dec_ref(v_fvars_3966_);
return v___x_3975_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2___boxed(lean_object* v_fvars_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_, lean_object* v___y_3982_, lean_object* v___y_3983_, lean_object* v___y_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_){
_start:
{
lean_object* v_res_3987_; 
v_res_3987_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2(v_fvars_3978_, v___y_3979_, v___y_3980_, v___y_3981_, v___y_3982_, v___y_3983_, v___y_3984_, v___y_3985_);
lean_dec(v___y_3985_);
lean_dec_ref(v___y_3984_);
lean_dec(v___y_3983_);
lean_dec_ref(v___y_3982_);
lean_dec(v___y_3981_);
lean_dec(v___y_3980_);
return v_res_3987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(lean_object* v_lctx_3988_, lean_object* v_fvars_3989_, lean_object* v_e_3990_, lean_object* v_letFVars_3991_, lean_object* v_a_3992_, lean_object* v_a_3993_, lean_object* v_a_3994_, lean_object* v_a_3995_, lean_object* v_a_3996_, lean_object* v_a_3997_){
_start:
{
switch(lean_obj_tag(v_e_3990_))
{
case 6:
{
lean_object* v_binderName_3999_; lean_object* v_binderType_4000_; lean_object* v_body_4001_; uint8_t v_binderInfo_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; 
v_binderName_3999_ = lean_ctor_get(v_e_3990_, 0);
lean_inc(v_binderName_3999_);
v_binderType_4000_ = lean_ctor_get(v_e_3990_, 1);
lean_inc_ref(v_binderType_4000_);
v_body_4001_ = lean_ctor_get(v_e_3990_, 2);
lean_inc_ref(v_body_4001_);
v_binderInfo_4002_ = lean_ctor_get_uint8(v_e_3990_, sizeof(void*)*3 + 8);
lean_dec_ref_known(v_e_3990_, 3);
v___x_4003_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed), 8, 0);
lean_inc_ref(v_lctx_3988_);
lean_inc(v_letFVars_3991_);
v___x_4004_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_3989_, v_letFVars_3991_, v_lctx_3988_, v___x_4003_, v_binderType_4000_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec_ref(v_binderType_4000_);
if (lean_obj_tag(v___x_4004_) == 0)
{
lean_object* v_a_4005_; lean_object* v___x_4006_; 
v_a_4005_ = lean_ctor_get(v___x_4004_, 0);
lean_inc(v_a_4005_);
lean_dec_ref_known(v___x_4004_, 1);
v___x_4006_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
if (lean_obj_tag(v___x_4006_) == 0)
{
lean_object* v_a_4007_; lean_object* v_expr_4008_; uint8_t v___x_4009_; lean_object* v___x_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; 
v_a_4007_ = lean_ctor_get(v___x_4006_, 0);
lean_inc_n(v_a_4007_, 2);
lean_dec_ref_known(v___x_4006_, 1);
v_expr_4008_ = lean_ctor_get(v_a_4005_, 0);
lean_inc_ref(v_expr_4008_);
lean_dec(v_a_4005_);
v___x_4009_ = 0;
v___x_4010_ = l_Lean_LocalContext_mkLocalDecl(v_lctx_3988_, v_a_4007_, v_binderName_3999_, v_expr_4008_, v_binderInfo_4002_, v___x_4009_);
v___x_4011_ = l_Lean_Expr_fvar___override(v_a_4007_);
v___x_4012_ = lean_array_push(v_fvars_3989_, v___x_4011_);
v_lctx_3988_ = v___x_4010_;
v_fvars_3989_ = v___x_4012_;
v_e_3990_ = v_body_4001_;
goto _start;
}
else
{
lean_object* v_a_4014_; lean_object* v___x_4016_; uint8_t v_isShared_4017_; uint8_t v_isSharedCheck_4021_; 
lean_dec(v_a_4005_);
lean_dec_ref(v_body_4001_);
lean_dec(v_binderName_3999_);
lean_dec(v_letFVars_3991_);
lean_dec_ref(v_fvars_3989_);
lean_dec_ref(v_lctx_3988_);
v_a_4014_ = lean_ctor_get(v___x_4006_, 0);
v_isSharedCheck_4021_ = !lean_is_exclusive(v___x_4006_);
if (v_isSharedCheck_4021_ == 0)
{
v___x_4016_ = v___x_4006_;
v_isShared_4017_ = v_isSharedCheck_4021_;
goto v_resetjp_4015_;
}
else
{
lean_inc(v_a_4014_);
lean_dec(v___x_4006_);
v___x_4016_ = lean_box(0);
v_isShared_4017_ = v_isSharedCheck_4021_;
goto v_resetjp_4015_;
}
v_resetjp_4015_:
{
lean_object* v___x_4019_; 
if (v_isShared_4017_ == 0)
{
v___x_4019_ = v___x_4016_;
goto v_reusejp_4018_;
}
else
{
lean_object* v_reuseFailAlloc_4020_; 
v_reuseFailAlloc_4020_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4020_, 0, v_a_4014_);
v___x_4019_ = v_reuseFailAlloc_4020_;
goto v_reusejp_4018_;
}
v_reusejp_4018_:
{
return v___x_4019_;
}
}
}
}
else
{
lean_dec_ref(v_body_4001_);
lean_dec(v_binderName_3999_);
lean_dec(v_letFVars_3991_);
lean_dec_ref(v_fvars_3989_);
lean_dec_ref(v_lctx_3988_);
return v___x_4004_;
}
}
case 8:
{
lean_object* v_declName_4022_; lean_object* v_type_4023_; lean_object* v_value_4024_; lean_object* v_body_4025_; uint8_t v_nondep_4026_; lean_object* v___y_4028_; lean_object* v___y_4029_; lean_object* v___y_4030_; lean_object* v___y_4031_; lean_object* v___y_4032_; lean_object* v___y_4033_; lean_object* v___y_4034_; lean_object* v___y_4035_; lean_object* v___y_4036_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v_declName_4022_ = lean_ctor_get(v_e_3990_, 0);
lean_inc(v_declName_4022_);
v_type_4023_ = lean_ctor_get(v_e_3990_, 1);
lean_inc_ref(v_type_4023_);
v_value_4024_ = lean_ctor_get(v_e_3990_, 2);
lean_inc_ref(v_value_4024_);
v_body_4025_ = lean_ctor_get(v_e_3990_, 3);
lean_inc_ref(v_body_4025_);
v_nondep_4026_ = lean_ctor_get_uint8(v_e_3990_, sizeof(void*)*4 + 8);
lean_dec_ref_known(v_e_3990_, 4);
v___x_4040_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitType___boxed), 8, 0);
lean_inc_ref(v_lctx_3988_);
lean_inc(v_letFVars_3991_);
v___x_4041_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_3989_, v_letFVars_3991_, v_lctx_3988_, v___x_4040_, v_type_4023_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec_ref(v_type_4023_);
if (lean_obj_tag(v___x_4041_) == 0)
{
lean_object* v_a_4042_; lean_object* v___x_4043_; lean_object* v___x_4044_; 
v_a_4042_ = lean_ctor_get(v___x_4041_, 0);
lean_inc(v_a_4042_);
lean_dec_ref_known(v___x_4041_, 1);
v___x_4043_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___boxed), 8, 0);
lean_inc_ref(v_lctx_3988_);
lean_inc(v_letFVars_3991_);
v___x_4044_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_3989_, v_letFVars_3991_, v_lctx_3988_, v___x_4043_, v_value_4024_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec_ref(v_value_4024_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; lean_object* v___y_4047_; lean_object* v___y_4048_; lean_object* v___y_4049_; lean_object* v___y_4050_; lean_object* v___y_4051_; lean_object* v___y_4052_; uint8_t v___x_4075_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
lean_inc(v_a_4045_);
lean_dec_ref_known(v___x_4044_, 1);
v___x_4075_ = l_List_isEmpty___redArg(v_letFVars_3991_);
if (v___x_4075_ == 0)
{
lean_object* v___f_4076_; lean_object* v___x_4077_; 
lean_inc(v_a_4042_);
lean_inc(v_a_4045_);
v___f_4076_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__1___boxed), 9, 2);
lean_closure_set(v___f_4076_, 0, v_a_4045_);
lean_closure_set(v___f_4076_, 1, v_a_4042_);
lean_inc_ref(v_lctx_3988_);
v___x_4077_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(v_lctx_3988_, v___f_4076_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
if (lean_obj_tag(v___x_4077_) == 0)
{
lean_dec_ref_known(v___x_4077_, 1);
v___y_4047_ = v_a_3992_;
v___y_4048_ = v_a_3993_;
v___y_4049_ = v_a_3994_;
v___y_4050_ = v_a_3995_;
v___y_4051_ = v_a_3996_;
v___y_4052_ = v_a_3997_;
goto v___jp_4046_;
}
else
{
lean_object* v_a_4078_; lean_object* v___x_4080_; uint8_t v_isShared_4081_; uint8_t v_isSharedCheck_4085_; 
lean_dec(v_a_4045_);
lean_dec(v_a_4042_);
lean_dec_ref(v_body_4025_);
lean_dec(v_declName_4022_);
lean_dec(v_letFVars_3991_);
lean_dec_ref(v_fvars_3989_);
lean_dec_ref(v_lctx_3988_);
v_a_4078_ = lean_ctor_get(v___x_4077_, 0);
v_isSharedCheck_4085_ = !lean_is_exclusive(v___x_4077_);
if (v_isSharedCheck_4085_ == 0)
{
v___x_4080_ = v___x_4077_;
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
else
{
lean_inc(v_a_4078_);
lean_dec(v___x_4077_);
v___x_4080_ = lean_box(0);
v_isShared_4081_ = v_isSharedCheck_4085_;
goto v_resetjp_4079_;
}
v_resetjp_4079_:
{
lean_object* v___x_4083_; 
if (v_isShared_4081_ == 0)
{
v___x_4083_ = v___x_4080_;
goto v_reusejp_4082_;
}
else
{
lean_object* v_reuseFailAlloc_4084_; 
v_reuseFailAlloc_4084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4084_, 0, v_a_4078_);
v___x_4083_ = v_reuseFailAlloc_4084_;
goto v_reusejp_4082_;
}
v_reusejp_4082_:
{
return v___x_4083_;
}
}
}
}
else
{
v___y_4047_ = v_a_3992_;
v___y_4048_ = v_a_3993_;
v___y_4049_ = v_a_3994_;
v___y_4050_ = v_a_3995_;
v___y_4051_ = v_a_3996_;
v___y_4052_ = v_a_3997_;
goto v___jp_4046_;
}
v___jp_4046_:
{
lean_object* v___x_4053_; 
v___x_4053_ = l_Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1(v___y_4047_, v___y_4048_, v___y_4049_, v___y_4050_, v___y_4051_, v___y_4052_);
if (lean_obj_tag(v___x_4053_) == 0)
{
lean_object* v_a_4054_; lean_object* v_expr_4055_; lean_object* v_expr_4056_; lean_object* v___x_4058_; uint8_t v_isShared_4059_; uint8_t v_isSharedCheck_4065_; 
v_a_4054_ = lean_ctor_get(v___x_4053_, 0);
lean_inc(v_a_4054_);
lean_dec_ref_known(v___x_4053_, 1);
v_expr_4055_ = lean_ctor_get(v_a_4042_, 0);
lean_inc_ref(v_expr_4055_);
lean_dec(v_a_4042_);
v_expr_4056_ = lean_ctor_get(v_a_4045_, 0);
v_isSharedCheck_4065_ = !lean_is_exclusive(v_a_4045_);
if (v_isSharedCheck_4065_ == 0)
{
lean_object* v_unused_4066_; 
v_unused_4066_ = lean_ctor_get(v_a_4045_, 1);
lean_dec(v_unused_4066_);
v___x_4058_ = v_a_4045_;
v_isShared_4059_ = v_isSharedCheck_4065_;
goto v_resetjp_4057_;
}
else
{
lean_inc(v_expr_4056_);
lean_dec(v_a_4045_);
v___x_4058_ = lean_box(0);
v_isShared_4059_ = v_isSharedCheck_4065_;
goto v_resetjp_4057_;
}
v_resetjp_4057_:
{
uint8_t v___x_4060_; lean_object* v___x_4061_; 
v___x_4060_ = 0;
lean_inc(v_a_4054_);
v___x_4061_ = l_Lean_LocalContext_mkLetDecl(v_lctx_3988_, v_a_4054_, v_declName_4022_, v_expr_4055_, v_expr_4056_, v_nondep_4026_, v___x_4060_);
if (v_nondep_4026_ == 0)
{
lean_object* v___x_4063_; 
lean_inc(v_a_4054_);
if (v_isShared_4059_ == 0)
{
lean_ctor_set_tag(v___x_4058_, 1);
lean_ctor_set(v___x_4058_, 1, v_letFVars_3991_);
lean_ctor_set(v___x_4058_, 0, v_a_4054_);
v___x_4063_ = v___x_4058_;
goto v_reusejp_4062_;
}
else
{
lean_object* v_reuseFailAlloc_4064_; 
v_reuseFailAlloc_4064_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4064_, 0, v_a_4054_);
lean_ctor_set(v_reuseFailAlloc_4064_, 1, v_letFVars_3991_);
v___x_4063_ = v_reuseFailAlloc_4064_;
goto v_reusejp_4062_;
}
v_reusejp_4062_:
{
v___y_4028_ = v___y_4052_;
v___y_4029_ = v___y_4051_;
v___y_4030_ = v___y_4050_;
v___y_4031_ = v___y_4049_;
v___y_4032_ = v___y_4047_;
v___y_4033_ = v___x_4061_;
v___y_4034_ = v_a_4054_;
v___y_4035_ = v___y_4048_;
v___y_4036_ = v___x_4063_;
goto v___jp_4027_;
}
}
else
{
lean_del_object(v___x_4058_);
v___y_4028_ = v___y_4052_;
v___y_4029_ = v___y_4051_;
v___y_4030_ = v___y_4050_;
v___y_4031_ = v___y_4049_;
v___y_4032_ = v___y_4047_;
v___y_4033_ = v___x_4061_;
v___y_4034_ = v_a_4054_;
v___y_4035_ = v___y_4048_;
v___y_4036_ = v_letFVars_3991_;
goto v___jp_4027_;
}
}
}
else
{
lean_object* v_a_4067_; lean_object* v___x_4069_; uint8_t v_isShared_4070_; uint8_t v_isSharedCheck_4074_; 
lean_dec(v_a_4045_);
lean_dec(v_a_4042_);
lean_dec_ref(v_body_4025_);
lean_dec(v_declName_4022_);
lean_dec(v_letFVars_3991_);
lean_dec_ref(v_fvars_3989_);
lean_dec_ref(v_lctx_3988_);
v_a_4067_ = lean_ctor_get(v___x_4053_, 0);
v_isSharedCheck_4074_ = !lean_is_exclusive(v___x_4053_);
if (v_isSharedCheck_4074_ == 0)
{
v___x_4069_ = v___x_4053_;
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
else
{
lean_inc(v_a_4067_);
lean_dec(v___x_4053_);
v___x_4069_ = lean_box(0);
v_isShared_4070_ = v_isSharedCheck_4074_;
goto v_resetjp_4068_;
}
v_resetjp_4068_:
{
lean_object* v___x_4072_; 
if (v_isShared_4070_ == 0)
{
v___x_4072_ = v___x_4069_;
goto v_reusejp_4071_;
}
else
{
lean_object* v_reuseFailAlloc_4073_; 
v_reuseFailAlloc_4073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4073_, 0, v_a_4067_);
v___x_4072_ = v_reuseFailAlloc_4073_;
goto v_reusejp_4071_;
}
v_reusejp_4071_:
{
return v___x_4072_;
}
}
}
}
}
else
{
lean_dec(v_a_4042_);
lean_dec_ref(v_body_4025_);
lean_dec(v_declName_4022_);
lean_dec(v_letFVars_3991_);
lean_dec_ref(v_fvars_3989_);
lean_dec_ref(v_lctx_3988_);
return v___x_4044_;
}
}
else
{
lean_dec_ref(v_body_4025_);
lean_dec_ref(v_value_4024_);
lean_dec(v_declName_4022_);
lean_dec(v_letFVars_3991_);
lean_dec_ref(v_fvars_3989_);
lean_dec_ref(v_lctx_3988_);
return v___x_4041_;
}
v___jp_4027_:
{
lean_object* v___x_4037_; lean_object* v___x_4038_; 
v___x_4037_ = l_Lean_Expr_fvar___override(v___y_4034_);
v___x_4038_ = lean_array_push(v_fvars_3989_, v___x_4037_);
v_lctx_3988_ = v___y_4033_;
v_fvars_3989_ = v___x_4038_;
v_e_3990_ = v_body_4025_;
v_letFVars_3991_ = v___y_4036_;
v_a_3992_ = v___y_4032_;
v_a_3993_ = v___y_4035_;
v_a_3994_ = v___y_4031_;
v_a_3995_ = v___y_4030_;
v_a_3996_ = v___y_4029_;
v_a_3997_ = v___y_4028_;
goto _start;
}
}
default: 
{
lean_object* v___f_4086_; lean_object* v___x_4087_; 
lean_inc_ref(v_fvars_3989_);
v___f_4086_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__2___boxed), 9, 1);
lean_closure_set(v___f_4086_, 0, v_fvars_3989_);
v___x_4087_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___lam__0(v_fvars_3989_, v_letFVars_3991_, v_lctx_3988_, v___f_4086_, v_e_3990_, v_a_3992_, v_a_3993_, v_a_3994_, v_a_3995_, v_a_3996_, v_a_3997_);
lean_dec_ref(v_e_3990_);
lean_dec_ref(v_fvars_3989_);
return v___x_4087_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet(lean_object* v_e_4088_, lean_object* v_a_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_, lean_object* v_a_4092_, lean_object* v_a_4093_, lean_object* v_a_4094_){
_start:
{
uint32_t v___x_4096_; uint8_t v___x_4097_; 
v___x_4096_ = 5;
v___x_4097_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_canSkip(v_e_4088_, v___x_4096_);
if (v___x_4097_ == 0)
{
lean_object* v_lctx_4098_; lean_object* v___x_4099_; lean_object* v___x_4100_; 
v_lctx_4098_ = lean_ctor_get(v_a_4091_, 2);
v___x_4099_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar___closed__0));
lean_inc(v_a_4089_);
lean_inc_ref(v_lctx_4098_);
v___x_4100_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(v_lctx_4098_, v___x_4099_, v_e_4088_, v_a_4089_, v_a_4089_, v_a_4090_, v_a_4091_, v_a_4092_, v_a_4093_, v_a_4094_);
return v___x_4100_;
}
else
{
lean_object* v___x_4101_; lean_object* v___x_4102_; lean_object* v___x_4103_; 
v___x_4101_ = lean_box(0);
v___x_4102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4102_, 0, v_e_4088_);
lean_ctor_set(v___x_4102_, 1, v___x_4101_);
v___x_4103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4103_, 0, v___x_4102_);
return v___x_4103_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet___boxed(lean_object* v_e_4104_, lean_object* v_a_4105_, lean_object* v_a_4106_, lean_object* v_a_4107_, lean_object* v_a_4108_, lean_object* v_a_4109_, lean_object* v_a_4110_, lean_object* v___y_4111_){
_start:
{
lean_object* v_res_4112_; 
v_res_4112_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet(v_e_4104_, v_a_4105_, v_a_4106_, v_a_4107_, v_a_4108_, v_a_4109_, v_a_4110_);
lean_dec(v_a_4110_);
lean_dec_ref(v_a_4109_);
lean_dec(v_a_4108_);
lean_dec_ref(v_a_4107_);
lean_dec(v_a_4106_);
lean_dec(v_a_4105_);
return v_res_4112_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(lean_object* v_e_4113_, lean_object* v___y_4114_, lean_object* v___y_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
switch(lean_obj_tag(v_e_4113_))
{
case 0:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; 
v___x_4121_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___closed__1);
v___x_4122_ = l_Lean_MessageData_ofExpr(v_e_4113_);
v___x_4123_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4121_);
lean_ctor_set(v___x_4123_, 1, v___x_4122_);
v___x_4124_ = l_Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7___redArg(v___x_4123_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4124_;
}
case 1:
{
lean_object* v___x_4125_; 
v___x_4125_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitFVar___redArg(v_e_4113_, v___y_4116_, v___y_4118_, v___y_4119_);
return v___x_4125_;
}
case 2:
{
lean_object* v___x_4126_; 
v___x_4126_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitMVar(v_e_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4126_;
}
case 3:
{
lean_object* v_u_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; 
v_u_4127_ = lean_ctor_get(v_e_4113_, 0);
lean_inc(v_u_4127_);
v___x_4128_ = l_Lean_Level_succ___override(v_u_4127_);
v___x_4129_ = l_Lean_Expr_sort___override(v___x_4128_);
v___x_4130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
v___x_4131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4131_, 0, v_e_4113_);
lean_ctor_set(v___x_4131_, 1, v___x_4130_);
v___x_4132_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4132_, 0, v___x_4131_);
return v___x_4132_;
}
case 4:
{
lean_object* v___x_4133_; 
v___x_4133_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst(v_e_4113_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4133_;
}
case 5:
{
lean_object* v___x_4134_; lean_object* v___x_4135_; 
lean_inc_ref(v_e_4113_);
v___x_4134_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs___boxed), 8, 1);
lean_closure_set(v___x_4134_, 0, v_e_4113_);
v___x_4135_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4113_, v___x_4134_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4135_;
}
case 7:
{
lean_object* v___x_4136_; lean_object* v___x_4137_; 
lean_inc_ref(v_e_4113_);
v___x_4136_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall___boxed), 8, 1);
lean_closure_set(v___x_4136_, 0, v_e_4113_);
v___x_4137_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4113_, v___x_4136_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4137_;
}
case 9:
{
lean_object* v_a_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; 
v_a_4138_ = lean_ctor_get(v_e_4113_, 0);
v___x_4139_ = l_Lean_Literal_type(v_a_4138_);
v___x_4140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4139_);
v___x_4141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4141_, 0, v_e_4113_);
lean_ctor_set(v___x_4141_, 1, v___x_4140_);
v___x_4142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4142_, 0, v___x_4141_);
return v___x_4142_;
}
case 10:
{
lean_object* v_data_4143_; lean_object* v_expr_4144_; lean_object* v___x_4145_; 
v_data_4143_ = lean_ctor_get(v_e_4113_, 0);
v_expr_4144_ = lean_ctor_get(v_e_4113_, 1);
lean_inc_ref(v_expr_4144_);
v___x_4145_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_expr_4144_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
if (lean_obj_tag(v___x_4145_) == 0)
{
lean_object* v_a_4146_; lean_object* v___x_4148_; uint8_t v_isShared_4149_; uint8_t v_isSharedCheck_4168_; 
v_a_4146_ = lean_ctor_get(v___x_4145_, 0);
v_isSharedCheck_4168_ = !lean_is_exclusive(v___x_4145_);
if (v_isSharedCheck_4168_ == 0)
{
v___x_4148_ = v___x_4145_;
v_isShared_4149_ = v_isSharedCheck_4168_;
goto v_resetjp_4147_;
}
else
{
lean_inc(v_a_4146_);
lean_dec(v___x_4145_);
v___x_4148_ = lean_box(0);
v_isShared_4149_ = v_isSharedCheck_4168_;
goto v_resetjp_4147_;
}
v_resetjp_4147_:
{
lean_object* v_expr_4150_; lean_object* v_type_x3f_4151_; lean_object* v___x_4153_; uint8_t v_isShared_4154_; uint8_t v_isSharedCheck_4167_; 
v_expr_4150_ = lean_ctor_get(v_a_4146_, 0);
v_type_x3f_4151_ = lean_ctor_get(v_a_4146_, 1);
v_isSharedCheck_4167_ = !lean_is_exclusive(v_a_4146_);
if (v_isSharedCheck_4167_ == 0)
{
v___x_4153_ = v_a_4146_;
v_isShared_4154_ = v_isSharedCheck_4167_;
goto v_resetjp_4152_;
}
else
{
lean_inc(v_type_x3f_4151_);
lean_inc(v_expr_4150_);
lean_dec(v_a_4146_);
v___x_4153_ = lean_box(0);
v_isShared_4154_ = v_isSharedCheck_4167_;
goto v_resetjp_4152_;
}
v_resetjp_4152_:
{
lean_object* v___y_4156_; size_t v___x_4163_; size_t v___x_4164_; uint8_t v___x_4165_; 
v___x_4163_ = lean_ptr_addr(v_expr_4144_);
v___x_4164_ = lean_ptr_addr(v_expr_4150_);
v___x_4165_ = lean_usize_dec_eq(v___x_4163_, v___x_4164_);
if (v___x_4165_ == 0)
{
lean_object* v___x_4166_; 
lean_inc(v_data_4143_);
lean_dec_ref_known(v_e_4113_, 2);
v___x_4166_ = l_Lean_Expr_mdata___override(v_data_4143_, v_expr_4150_);
v___y_4156_ = v___x_4166_;
goto v___jp_4155_;
}
else
{
lean_dec_ref(v_expr_4150_);
v___y_4156_ = v_e_4113_;
goto v___jp_4155_;
}
v___jp_4155_:
{
lean_object* v___x_4158_; 
if (v_isShared_4154_ == 0)
{
lean_ctor_set(v___x_4153_, 0, v___y_4156_);
v___x_4158_ = v___x_4153_;
goto v_reusejp_4157_;
}
else
{
lean_object* v_reuseFailAlloc_4162_; 
v_reuseFailAlloc_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4162_, 0, v___y_4156_);
lean_ctor_set(v_reuseFailAlloc_4162_, 1, v_type_x3f_4151_);
v___x_4158_ = v_reuseFailAlloc_4162_;
goto v_reusejp_4157_;
}
v_reusejp_4157_:
{
lean_object* v___x_4160_; 
if (v_isShared_4149_ == 0)
{
lean_ctor_set(v___x_4148_, 0, v___x_4158_);
v___x_4160_ = v___x_4148_;
goto v_reusejp_4159_;
}
else
{
lean_object* v_reuseFailAlloc_4161_; 
v_reuseFailAlloc_4161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4161_, 0, v___x_4158_);
v___x_4160_ = v_reuseFailAlloc_4161_;
goto v_reusejp_4159_;
}
v_reusejp_4159_:
{
return v___x_4160_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_e_4113_, 2);
return v___x_4145_;
}
}
case 11:
{
lean_object* v_typeName_4169_; lean_object* v_idx_4170_; lean_object* v_struct_4171_; lean_object* v___f_4172_; lean_object* v___x_4173_; 
v_typeName_4169_ = lean_ctor_get(v_e_4113_, 0);
v_idx_4170_ = lean_ctor_get(v_e_4113_, 1);
v_struct_4171_ = lean_ctor_get(v_e_4113_, 2);
lean_inc(v_idx_4170_);
lean_inc(v_typeName_4169_);
lean_inc_ref(v_e_4113_);
lean_inc_ref(v_struct_4171_);
v___f_4172_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0___boxed), 11, 4);
lean_closure_set(v___f_4172_, 0, v_struct_4171_);
lean_closure_set(v___f_4172_, 1, v_e_4113_);
lean_closure_set(v___f_4172_, 2, v_typeName_4169_);
lean_closure_set(v___f_4172_, 3, v_idx_4170_);
v___x_4173_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4113_, v___f_4172_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4173_;
}
default: 
{
lean_object* v___x_4174_; lean_object* v___x_4175_; 
lean_inc_ref(v_e_4113_);
v___x_4174_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet___boxed), 8, 1);
lean_closure_set(v___x_4174_, 0, v_e_4113_);
v___x_4175_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_checkCache(v_e_4113_, v___x_4174_, v___y_4114_, v___y_4115_, v___y_4116_, v___y_4117_, v___y_4118_, v___y_4119_);
return v___x_4175_;
}
}
}
}
static double _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0(void){
_start:
{
lean_object* v___x_4176_; double v___x_4177_; 
v___x_4176_ = lean_unsigned_to_nat(1000000000u);
v___x_4177_ = lean_float_of_nat(v___x_4176_);
return v___x_4177_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(lean_object* v_e_4178_, lean_object* v_a_4179_, lean_object* v_a_4180_, lean_object* v_a_4181_, lean_object* v_a_4182_, lean_object* v_a_4183_, lean_object* v_a_4184_){
_start:
{
lean_object* v_toCold_4186_; lean_object* v_options_4187_; uint8_t v_hasTrace_4188_; 
v_toCold_4186_ = lean_ctor_get(v_a_4183_, 0);
v_options_4187_ = lean_ctor_get(v_toCold_4186_, 2);
v_hasTrace_4188_ = lean_ctor_get_uint8(v_options_4187_, sizeof(void*)*1);
if (v_hasTrace_4188_ == 0)
{
lean_object* v___x_4189_; 
v___x_4189_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4178_, v_a_4179_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_);
return v___x_4189_;
}
else
{
lean_object* v_inheritedTraceOptions_4190_; lean_object* v___f_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; uint8_t v___x_4195_; lean_object* v___y_4197_; lean_object* v___y_4198_; lean_object* v_a_4199_; lean_object* v___y_4212_; lean_object* v___y_4213_; lean_object* v_a_4214_; 
v_inheritedTraceOptions_4190_ = lean_ctor_get(v_toCold_4186_, 11);
lean_inc_ref(v_e_4178_);
v___f_4191_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__2___boxed), 9, 1);
lean_closure_set(v___f_4191_, 0, v_e_4178_);
v___x_4192_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3));
v___x_4193_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1));
v___x_4194_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__6);
v___x_4195_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4190_, v_options_4187_, v___x_4194_);
if (v___x_4195_ == 0)
{
lean_object* v___x_4272_; uint8_t v___x_4273_; 
v___x_4272_ = l_Lean_trace_profiler;
v___x_4273_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_4187_, v___x_4272_);
if (v___x_4273_ == 0)
{
lean_object* v___x_4274_; 
lean_dec_ref(v___f_4191_);
v___x_4274_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4178_, v_a_4179_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_);
return v___x_4274_;
}
else
{
goto v___jp_4223_;
}
}
else
{
goto v___jp_4223_;
}
v___jp_4196_:
{
lean_object* v___x_4200_; double v___x_4201_; double v___x_4202_; double v___x_4203_; double v___x_4204_; double v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; 
v___x_4200_ = lean_io_mono_nanos_now();
v___x_4201_ = lean_float_of_nat(v___y_4198_);
v___x_4202_ = lean_float_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0);
v___x_4203_ = lean_float_div(v___x_4201_, v___x_4202_);
v___x_4204_ = lean_float_of_nat(v___x_4200_);
v___x_4205_ = lean_float_div(v___x_4204_, v___x_4202_);
v___x_4206_ = lean_box_float(v___x_4203_);
v___x_4207_ = lean_box_float(v___x_4205_);
v___x_4208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4206_);
lean_ctor_set(v___x_4208_, 1, v___x_4207_);
v___x_4209_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4209_, 0, v_a_4199_);
lean_ctor_set(v___x_4209_, 1, v___x_4208_);
v___x_4210_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(v___x_4192_, v_hasTrace_4188_, v___x_4193_, v_options_4187_, v___x_4195_, v___y_4197_, v___f_4191_, v___x_4209_, v_a_4179_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_);
return v___x_4210_;
}
v___jp_4211_:
{
lean_object* v___x_4215_; double v___x_4216_; double v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; 
v___x_4215_ = lean_io_get_num_heartbeats();
v___x_4216_ = lean_float_of_nat(v___y_4212_);
v___x_4217_ = lean_float_of_nat(v___x_4215_);
v___x_4218_ = lean_box_float(v___x_4216_);
v___x_4219_ = lean_box_float(v___x_4217_);
v___x_4220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4218_);
lean_ctor_set(v___x_4220_, 1, v___x_4219_);
v___x_4221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4221_, 0, v_a_4214_);
lean_ctor_set(v___x_4221_, 1, v___x_4220_);
v___x_4222_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6(v___x_4192_, v_hasTrace_4188_, v___x_4193_, v_options_4187_, v___x_4195_, v___y_4213_, v___f_4191_, v___x_4221_, v_a_4179_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_);
return v___x_4222_;
}
v___jp_4223_:
{
lean_object* v___x_4224_; 
v___x_4224_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(v_a_4184_);
if (lean_obj_tag(v___x_4224_) == 0)
{
lean_object* v_a_4225_; lean_object* v___x_4226_; uint8_t v___x_4227_; 
v_a_4225_ = lean_ctor_get(v___x_4224_, 0);
lean_inc(v_a_4225_);
lean_dec_ref_known(v___x_4224_, 1);
v___x_4226_ = l_Lean_trace_profiler_useHeartbeats;
v___x_4227_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_4187_, v___x_4226_);
if (v___x_4227_ == 0)
{
lean_object* v___x_4228_; lean_object* v___x_4229_; 
v___x_4228_ = lean_io_mono_nanos_now();
v___x_4229_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4178_, v_a_4179_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_);
if (lean_obj_tag(v___x_4229_) == 0)
{
lean_object* v_a_4230_; lean_object* v___x_4232_; uint8_t v_isShared_4233_; uint8_t v_isSharedCheck_4237_; 
v_a_4230_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4237_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4237_ == 0)
{
v___x_4232_ = v___x_4229_;
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
else
{
lean_inc(v_a_4230_);
lean_dec(v___x_4229_);
v___x_4232_ = lean_box(0);
v_isShared_4233_ = v_isSharedCheck_4237_;
goto v_resetjp_4231_;
}
v_resetjp_4231_:
{
lean_object* v___x_4235_; 
if (v_isShared_4233_ == 0)
{
lean_ctor_set_tag(v___x_4232_, 1);
v___x_4235_ = v___x_4232_;
goto v_reusejp_4234_;
}
else
{
lean_object* v_reuseFailAlloc_4236_; 
v_reuseFailAlloc_4236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4236_, 0, v_a_4230_);
v___x_4235_ = v_reuseFailAlloc_4236_;
goto v_reusejp_4234_;
}
v_reusejp_4234_:
{
v___y_4197_ = v_a_4225_;
v___y_4198_ = v___x_4228_;
v_a_4199_ = v___x_4235_;
goto v___jp_4196_;
}
}
}
else
{
lean_object* v_a_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4245_; 
v_a_4238_ = lean_ctor_get(v___x_4229_, 0);
v_isSharedCheck_4245_ = !lean_is_exclusive(v___x_4229_);
if (v_isSharedCheck_4245_ == 0)
{
v___x_4240_ = v___x_4229_;
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_a_4238_);
lean_dec(v___x_4229_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v___x_4243_; 
if (v_isShared_4241_ == 0)
{
lean_ctor_set_tag(v___x_4240_, 0);
v___x_4243_ = v___x_4240_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v_a_4238_);
v___x_4243_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
v___y_4197_ = v_a_4225_;
v___y_4198_ = v___x_4228_;
v_a_4199_ = v___x_4243_;
goto v___jp_4196_;
}
}
}
}
else
{
lean_object* v___x_4246_; lean_object* v___x_4247_; 
v___x_4246_ = lean_io_get_num_heartbeats();
v___x_4247_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4178_, v_a_4179_, v_a_4180_, v_a_4181_, v_a_4182_, v_a_4183_, v_a_4184_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4255_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4255_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4255_ == 0)
{
v___x_4250_ = v___x_4247_;
v_isShared_4251_ = v_isSharedCheck_4255_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_a_4248_);
lean_dec(v___x_4247_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4255_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v___x_4253_; 
if (v_isShared_4251_ == 0)
{
lean_ctor_set_tag(v___x_4250_, 1);
v___x_4253_ = v___x_4250_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4254_; 
v_reuseFailAlloc_4254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4254_, 0, v_a_4248_);
v___x_4253_ = v_reuseFailAlloc_4254_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
v___y_4212_ = v___x_4246_;
v___y_4213_ = v_a_4225_;
v_a_4214_ = v___x_4253_;
goto v___jp_4211_;
}
}
}
else
{
lean_object* v_a_4256_; lean_object* v___x_4258_; uint8_t v_isShared_4259_; uint8_t v_isSharedCheck_4263_; 
v_a_4256_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4263_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4263_ == 0)
{
v___x_4258_ = v___x_4247_;
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
else
{
lean_inc(v_a_4256_);
lean_dec(v___x_4247_);
v___x_4258_ = lean_box(0);
v_isShared_4259_ = v_isSharedCheck_4263_;
goto v_resetjp_4257_;
}
v_resetjp_4257_:
{
lean_object* v___x_4261_; 
if (v_isShared_4259_ == 0)
{
lean_ctor_set_tag(v___x_4258_, 0);
v___x_4261_ = v___x_4258_;
goto v_reusejp_4260_;
}
else
{
lean_object* v_reuseFailAlloc_4262_; 
v_reuseFailAlloc_4262_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4262_, 0, v_a_4256_);
v___x_4261_ = v_reuseFailAlloc_4262_;
goto v_reusejp_4260_;
}
v_reusejp_4260_:
{
v___y_4212_ = v___x_4246_;
v___y_4213_ = v_a_4225_;
v_a_4214_ = v___x_4261_;
goto v___jp_4211_;
}
}
}
}
}
else
{
lean_object* v_a_4264_; lean_object* v___x_4266_; uint8_t v_isShared_4267_; uint8_t v_isSharedCheck_4271_; 
lean_dec_ref(v___f_4191_);
lean_dec_ref(v_e_4178_);
v_a_4264_ = lean_ctor_get(v___x_4224_, 0);
v_isSharedCheck_4271_ = !lean_is_exclusive(v___x_4224_);
if (v_isSharedCheck_4271_ == 0)
{
v___x_4266_ = v___x_4224_;
v_isShared_4267_ = v_isSharedCheck_4271_;
goto v_resetjp_4265_;
}
else
{
lean_inc(v_a_4264_);
lean_dec(v___x_4224_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__0(lean_object* v_struct_4275_, lean_object* v_e_4276_, lean_object* v_typeName_4277_, lean_object* v_idx_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_, lean_object* v___y_4284_){
_start:
{
lean_object* v___x_4286_; 
v___x_4286_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_struct_4275_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_);
if (lean_obj_tag(v___x_4286_) == 0)
{
lean_object* v_a_4287_; lean_object* v___x_4288_; 
v_a_4287_ = lean_ctor_get(v___x_4286_, 0);
lean_inc(v_a_4287_);
lean_dec_ref_known(v___x_4286_, 1);
v___x_4288_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitProj(v_e_4276_, v_typeName_4277_, v_idx_4278_, v_a_4287_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_);
return v___x_4288_;
}
else
{
lean_dec(v_idx_4278_);
lean_dec(v_typeName_4277_);
lean_dec_ref(v_e_4276_);
return v___x_4286_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27___boxed(lean_object* v_e_4289_, lean_object* v_a_4290_, lean_object* v_a_4291_, lean_object* v_a_4292_, lean_object* v_a_4293_, lean_object* v_a_4294_, lean_object* v_a_4295_, lean_object* v___y_4296_){
_start:
{
lean_object* v_res_4297_; 
v_res_4297_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitAppArgs_go_x27(v_e_4289_, v_a_4290_, v_a_4291_, v_a_4292_, v_a_4293_, v_a_4294_, v_a_4295_);
lean_dec(v_a_4295_);
lean_dec_ref(v_a_4294_);
lean_dec(v_a_4293_);
lean_dec_ref(v_a_4292_);
lean_dec(v_a_4291_);
lean_dec(v_a_4290_);
return v_res_4297_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go___boxed(lean_object* v_lctx_4298_, lean_object* v_fvars_4299_, lean_object* v_doms_4300_, lean_object* v_e_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_, lean_object* v_a_4305_, lean_object* v_a_4306_, lean_object* v_a_4307_, lean_object* v___y_4308_){
_start:
{
lean_object* v_res_4309_; 
v_res_4309_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitForall_go(v_lctx_4298_, v_fvars_4299_, v_doms_4300_, v_e_4301_, v_a_4302_, v_a_4303_, v_a_4304_, v_a_4305_, v_a_4306_, v_a_4307_);
lean_dec(v_a_4307_);
lean_dec_ref(v_a_4306_);
lean_dec(v_a_4305_);
lean_dec_ref(v_a_4304_);
lean_dec(v_a_4303_);
lean_dec(v_a_4302_);
return v_res_4309_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1___boxed(lean_object* v_e_4310_, lean_object* v___y_4311_, lean_object* v___y_4312_, lean_object* v___y_4313_, lean_object* v___y_4314_, lean_object* v___y_4315_, lean_object* v___y_4316_, lean_object* v___y_4317_){
_start:
{
lean_object* v_res_4318_; 
v_res_4318_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___lam__1(v_e_4310_, v___y_4311_, v___y_4312_, v___y_4313_, v___y_4314_, v___y_4315_, v___y_4316_);
lean_dec(v___y_4316_);
lean_dec_ref(v___y_4315_);
lean_dec(v___y_4314_);
lean_dec_ref(v___y_4313_);
lean_dec(v___y_4312_);
lean_dec(v___y_4311_);
return v_res_4318_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go___boxed(lean_object* v_lctx_4319_, lean_object* v_fvars_4320_, lean_object* v_e_4321_, lean_object* v_letFVars_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_, lean_object* v_a_4328_, lean_object* v___y_4329_){
_start:
{
lean_object* v_res_4330_; 
v_res_4330_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go(v_lctx_4319_, v_fvars_4320_, v_e_4321_, v_letFVars_4322_, v_a_4323_, v_a_4324_, v_a_4325_, v_a_4326_, v_a_4327_, v_a_4328_);
lean_dec(v_a_4328_);
lean_dec_ref(v_a_4327_);
lean_dec(v_a_4326_);
lean_dec_ref(v_a_4325_);
lean_dec(v_a_4324_);
lean_dec(v_a_4323_);
return v_res_4330_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0(lean_object* v_00_u03b1_4331_, lean_object* v_lctx_4332_, lean_object* v_localInsts_4333_, lean_object* v_x_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_){
_start:
{
lean_object* v___x_4342_; 
v___x_4342_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___redArg(v_lctx_4332_, v_localInsts_4333_, v_x_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_);
return v___x_4342_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0___boxed(lean_object* v_00_u03b1_4343_, lean_object* v_lctx_4344_, lean_object* v_localInsts_4345_, lean_object* v_x_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_){
_start:
{
lean_object* v_res_4354_; 
v_res_4354_ = l_Lean_Meta_withLCtx___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__0(v_00_u03b1_4343_, v_lctx_4344_, v_localInsts_4345_, v_x_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_);
lean_dec(v___y_4352_);
lean_dec_ref(v___y_4351_);
lean_dec(v___y_4350_);
lean_dec_ref(v___y_4349_);
lean_dec(v___y_4348_);
lean_dec(v___y_4347_);
return v_res_4354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2(lean_object* v_00_u03b1_4355_, lean_object* v_lctx_4356_, lean_object* v_x_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_){
_start:
{
lean_object* v___x_4365_; 
v___x_4365_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___redArg(v_lctx_4356_, v_x_4357_, v___y_4358_, v___y_4359_, v___y_4360_, v___y_4361_, v___y_4362_, v___y_4363_);
return v___x_4365_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2___boxed(lean_object* v_00_u03b1_4366_, lean_object* v_lctx_4367_, lean_object* v_x_4368_, lean_object* v___y_4369_, lean_object* v___y_4370_, lean_object* v___y_4371_, lean_object* v___y_4372_, lean_object* v___y_4373_, lean_object* v___y_4374_, lean_object* v___y_4375_){
_start:
{
lean_object* v_res_4376_; 
v_res_4376_ = l_Lean_Meta_withLCtx_x27___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__2(v_00_u03b1_4366_, v_lctx_4367_, v_x_4368_, v___y_4369_, v___y_4370_, v___y_4371_, v___y_4372_, v___y_4373_, v___y_4374_);
lean_dec(v___y_4374_);
lean_dec_ref(v___y_4373_);
lean_dec(v___y_4372_);
lean_dec_ref(v___y_4371_);
lean_dec(v___y_4370_);
lean_dec(v___y_4369_);
return v_res_4376_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4(lean_object* v___y_4377_, lean_object* v___y_4378_, lean_object* v___y_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_){
_start:
{
lean_object* v___x_4384_; 
v___x_4384_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg(v___y_4382_);
return v___x_4384_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___boxed(lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_, lean_object* v___y_4390_, lean_object* v___y_4391_){
_start:
{
lean_object* v_res_4392_; 
v_res_4392_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4(v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_, v___y_4389_, v___y_4390_);
lean_dec(v___y_4390_);
lean_dec_ref(v___y_4389_);
lean_dec(v___y_4388_);
lean_dec_ref(v___y_4387_);
lean_dec(v___y_4386_);
lean_dec(v___y_4385_);
return v_res_4392_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7(lean_object* v___y_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_){
_start:
{
lean_object* v___x_4400_; 
v___x_4400_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___redArg(v___y_4398_);
return v___x_4400_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7___boxed(lean_object* v___y_4401_, lean_object* v___y_4402_, lean_object* v___y_4403_, lean_object* v___y_4404_, lean_object* v___y_4405_, lean_object* v___y_4406_, lean_object* v___y_4407_){
_start:
{
lean_object* v_res_4408_; 
v_res_4408_ = l_Lean_mkFreshId___at___00Lean_mkFreshFVarId___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_go_spec__1_spec__7(v___y_4401_, v___y_4402_, v___y_4403_, v___y_4404_, v___y_4405_, v___y_4406_);
lean_dec(v___y_4406_);
lean_dec_ref(v___y_4405_);
lean_dec(v___y_4404_);
lean_dec_ref(v___y_4403_);
lean_dec(v___y_4402_);
lean_dec(v___y_4401_);
return v_res_4408_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14(lean_object* v_00_u03b1_4409_, lean_object* v_x_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_){
_start:
{
lean_object* v___x_4418_; 
v___x_4418_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___redArg(v_x_4410_);
return v___x_4418_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14___boxed(lean_object* v_00_u03b1_4419_, lean_object* v_x_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_){
_start:
{
lean_object* v_res_4428_; 
v_res_4428_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__14(v_00_u03b1_4419_, v_x_4420_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_);
lean_dec(v___y_4426_);
lean_dec_ref(v___y_4425_);
lean_dec(v___y_4424_);
lean_dec_ref(v___y_4423_);
lean_dec(v___y_4422_);
lean_dec(v___y_4421_);
return v_res_4428_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13(lean_object* v_oldTraces_4429_, lean_object* v_data_4430_, lean_object* v_ref_4431_, lean_object* v_msg_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_, lean_object* v___y_4437_, lean_object* v___y_4438_){
_start:
{
lean_object* v___x_4440_; 
v___x_4440_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___redArg(v_oldTraces_4429_, v_data_4430_, v_ref_4431_, v_msg_4432_, v___y_4435_, v___y_4436_, v___y_4437_, v___y_4438_);
return v___x_4440_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13___boxed(lean_object* v_oldTraces_4441_, lean_object* v_data_4442_, lean_object* v_ref_4443_, lean_object* v_msg_4444_, lean_object* v___y_4445_, lean_object* v___y_4446_, lean_object* v___y_4447_, lean_object* v___y_4448_, lean_object* v___y_4449_, lean_object* v___y_4450_, lean_object* v___y_4451_){
_start:
{
lean_object* v_res_4452_; 
v_res_4452_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13(v_oldTraces_4441_, v_data_4442_, v_ref_4443_, v_msg_4444_, v___y_4445_, v___y_4446_, v___y_4447_, v___y_4448_, v___y_4449_, v___y_4450_);
lean_dec(v___y_4450_);
lean_dec_ref(v___y_4449_);
lean_dec(v___y_4448_);
lean_dec_ref(v___y_4447_);
lean_dec(v___y_4446_);
lean_dec(v___y_4445_);
return v_res_4452_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(lean_object* v___y_4453_){
_start:
{
lean_object* v___x_4455_; lean_object* v_traceState_4456_; lean_object* v_traces_4457_; lean_object* v___x_4458_; lean_object* v_traceState_4459_; lean_object* v_env_4460_; lean_object* v_nextMacroScope_4461_; lean_object* v_ngen_4462_; lean_object* v_auxDeclNGen_4463_; lean_object* v_cache_4464_; lean_object* v_messages_4465_; lean_object* v_infoState_4466_; lean_object* v_snapshotTasks_4467_; lean_object* v___x_4469_; uint8_t v_isShared_4470_; uint8_t v_isSharedCheck_4488_; 
v___x_4455_ = lean_st_ref_get(v___y_4453_);
v_traceState_4456_ = lean_ctor_get(v___x_4455_, 4);
lean_inc_ref(v_traceState_4456_);
lean_dec(v___x_4455_);
v_traces_4457_ = lean_ctor_get(v_traceState_4456_, 0);
lean_inc_ref(v_traces_4457_);
lean_dec_ref(v_traceState_4456_);
v___x_4458_ = lean_st_ref_take(v___y_4453_);
v_traceState_4459_ = lean_ctor_get(v___x_4458_, 4);
v_env_4460_ = lean_ctor_get(v___x_4458_, 0);
v_nextMacroScope_4461_ = lean_ctor_get(v___x_4458_, 1);
v_ngen_4462_ = lean_ctor_get(v___x_4458_, 2);
v_auxDeclNGen_4463_ = lean_ctor_get(v___x_4458_, 3);
v_cache_4464_ = lean_ctor_get(v___x_4458_, 5);
v_messages_4465_ = lean_ctor_get(v___x_4458_, 6);
v_infoState_4466_ = lean_ctor_get(v___x_4458_, 7);
v_snapshotTasks_4467_ = lean_ctor_get(v___x_4458_, 8);
v_isSharedCheck_4488_ = !lean_is_exclusive(v___x_4458_);
if (v_isSharedCheck_4488_ == 0)
{
v___x_4469_ = v___x_4458_;
v_isShared_4470_ = v_isSharedCheck_4488_;
goto v_resetjp_4468_;
}
else
{
lean_inc(v_snapshotTasks_4467_);
lean_inc(v_infoState_4466_);
lean_inc(v_messages_4465_);
lean_inc(v_cache_4464_);
lean_inc(v_traceState_4459_);
lean_inc(v_auxDeclNGen_4463_);
lean_inc(v_ngen_4462_);
lean_inc(v_nextMacroScope_4461_);
lean_inc(v_env_4460_);
lean_dec(v___x_4458_);
v___x_4469_ = lean_box(0);
v_isShared_4470_ = v_isSharedCheck_4488_;
goto v_resetjp_4468_;
}
v_resetjp_4468_:
{
uint64_t v_tid_4471_; lean_object* v___x_4473_; uint8_t v_isShared_4474_; uint8_t v_isSharedCheck_4486_; 
v_tid_4471_ = lean_ctor_get_uint64(v_traceState_4459_, sizeof(void*)*1);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_traceState_4459_);
if (v_isSharedCheck_4486_ == 0)
{
lean_object* v_unused_4487_; 
v_unused_4487_ = lean_ctor_get(v_traceState_4459_, 0);
lean_dec(v_unused_4487_);
v___x_4473_ = v_traceState_4459_;
v_isShared_4474_ = v_isSharedCheck_4486_;
goto v_resetjp_4472_;
}
else
{
lean_dec(v_traceState_4459_);
v___x_4473_ = lean_box(0);
v_isShared_4474_ = v_isSharedCheck_4486_;
goto v_resetjp_4472_;
}
v_resetjp_4472_:
{
lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; lean_object* v___x_4479_; 
v___x_4475_ = lean_unsigned_to_nat(32u);
v___x_4476_ = lean_mk_empty_array_with_capacity(v___x_4475_);
lean_dec_ref(v___x_4476_);
v___x_4477_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1, &l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__4___redArg___closed__1);
if (v_isShared_4474_ == 0)
{
lean_ctor_set(v___x_4473_, 0, v___x_4477_);
v___x_4479_ = v___x_4473_;
goto v_reusejp_4478_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v___x_4477_);
lean_ctor_set_uint64(v_reuseFailAlloc_4485_, sizeof(void*)*1, v_tid_4471_);
v___x_4479_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4478_;
}
v_reusejp_4478_:
{
lean_object* v___x_4481_; 
if (v_isShared_4470_ == 0)
{
lean_ctor_set(v___x_4469_, 4, v___x_4479_);
v___x_4481_ = v___x_4469_;
goto v_reusejp_4480_;
}
else
{
lean_object* v_reuseFailAlloc_4484_; 
v_reuseFailAlloc_4484_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4484_, 0, v_env_4460_);
lean_ctor_set(v_reuseFailAlloc_4484_, 1, v_nextMacroScope_4461_);
lean_ctor_set(v_reuseFailAlloc_4484_, 2, v_ngen_4462_);
lean_ctor_set(v_reuseFailAlloc_4484_, 3, v_auxDeclNGen_4463_);
lean_ctor_set(v_reuseFailAlloc_4484_, 4, v___x_4479_);
lean_ctor_set(v_reuseFailAlloc_4484_, 5, v_cache_4464_);
lean_ctor_set(v_reuseFailAlloc_4484_, 6, v_messages_4465_);
lean_ctor_set(v_reuseFailAlloc_4484_, 7, v_infoState_4466_);
lean_ctor_set(v_reuseFailAlloc_4484_, 8, v_snapshotTasks_4467_);
v___x_4481_ = v_reuseFailAlloc_4484_;
goto v_reusejp_4480_;
}
v_reusejp_4480_:
{
lean_object* v___x_4482_; lean_object* v___x_4483_; 
v___x_4482_ = lean_st_ref_put(v___y_4453_, v___x_4481_);
v___x_4483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4483_, 0, v_traces_4457_);
return v___x_4483_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg___boxed(lean_object* v___y_4489_, lean_object* v___y_4490_){
_start:
{
lean_object* v_res_4491_; 
v_res_4491_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(v___y_4489_);
lean_dec(v___y_4489_);
return v_res_4491_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1(lean_object* v___y_4492_, lean_object* v___y_4493_, lean_object* v___y_4494_, lean_object* v___y_4495_){
_start:
{
lean_object* v___x_4497_; 
v___x_4497_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(v___y_4495_);
return v___x_4497_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___boxed(lean_object* v___y_4498_, lean_object* v___y_4499_, lean_object* v___y_4500_, lean_object* v___y_4501_, lean_object* v___y_4502_){
_start:
{
lean_object* v_res_4503_; 
v_res_4503_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1(v___y_4498_, v___y_4499_, v___y_4500_, v___y_4501_);
lean_dec(v___y_4501_);
lean_dec_ref(v___y_4500_);
lean_dec(v___y_4499_);
lean_dec_ref(v___y_4498_);
return v_res_4503_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(lean_object* v_cls_4504_, lean_object* v_msg_4505_, lean_object* v___y_4506_, lean_object* v___y_4507_, lean_object* v___y_4508_, lean_object* v___y_4509_){
_start:
{
lean_object* v_ref_4511_; lean_object* v___x_4512_; lean_object* v_a_4513_; lean_object* v___x_4515_; uint8_t v_isShared_4516_; uint8_t v_isSharedCheck_4557_; 
v_ref_4511_ = lean_ctor_get(v___y_4508_, 2);
v___x_4512_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_4505_, v___y_4506_, v___y_4507_, v___y_4508_, v___y_4509_);
v_a_4513_ = lean_ctor_get(v___x_4512_, 0);
v_isSharedCheck_4557_ = !lean_is_exclusive(v___x_4512_);
if (v_isSharedCheck_4557_ == 0)
{
v___x_4515_ = v___x_4512_;
v_isShared_4516_ = v_isSharedCheck_4557_;
goto v_resetjp_4514_;
}
else
{
lean_inc(v_a_4513_);
lean_dec(v___x_4512_);
v___x_4515_ = lean_box(0);
v_isShared_4516_ = v_isSharedCheck_4557_;
goto v_resetjp_4514_;
}
v_resetjp_4514_:
{
lean_object* v___x_4517_; lean_object* v_traceState_4518_; lean_object* v_env_4519_; lean_object* v_nextMacroScope_4520_; lean_object* v_ngen_4521_; lean_object* v_auxDeclNGen_4522_; lean_object* v_cache_4523_; lean_object* v_messages_4524_; lean_object* v_infoState_4525_; lean_object* v_snapshotTasks_4526_; lean_object* v___x_4528_; uint8_t v_isShared_4529_; uint8_t v_isSharedCheck_4556_; 
v___x_4517_ = lean_st_ref_take(v___y_4509_);
v_traceState_4518_ = lean_ctor_get(v___x_4517_, 4);
v_env_4519_ = lean_ctor_get(v___x_4517_, 0);
v_nextMacroScope_4520_ = lean_ctor_get(v___x_4517_, 1);
v_ngen_4521_ = lean_ctor_get(v___x_4517_, 2);
v_auxDeclNGen_4522_ = lean_ctor_get(v___x_4517_, 3);
v_cache_4523_ = lean_ctor_get(v___x_4517_, 5);
v_messages_4524_ = lean_ctor_get(v___x_4517_, 6);
v_infoState_4525_ = lean_ctor_get(v___x_4517_, 7);
v_snapshotTasks_4526_ = lean_ctor_get(v___x_4517_, 8);
v_isSharedCheck_4556_ = !lean_is_exclusive(v___x_4517_);
if (v_isSharedCheck_4556_ == 0)
{
v___x_4528_ = v___x_4517_;
v_isShared_4529_ = v_isSharedCheck_4556_;
goto v_resetjp_4527_;
}
else
{
lean_inc(v_snapshotTasks_4526_);
lean_inc(v_infoState_4525_);
lean_inc(v_messages_4524_);
lean_inc(v_cache_4523_);
lean_inc(v_traceState_4518_);
lean_inc(v_auxDeclNGen_4522_);
lean_inc(v_ngen_4521_);
lean_inc(v_nextMacroScope_4520_);
lean_inc(v_env_4519_);
lean_dec(v___x_4517_);
v___x_4528_ = lean_box(0);
v_isShared_4529_ = v_isSharedCheck_4556_;
goto v_resetjp_4527_;
}
v_resetjp_4527_:
{
uint64_t v_tid_4530_; lean_object* v_traces_4531_; lean_object* v___x_4533_; uint8_t v_isShared_4534_; uint8_t v_isSharedCheck_4555_; 
v_tid_4530_ = lean_ctor_get_uint64(v_traceState_4518_, sizeof(void*)*1);
v_traces_4531_ = lean_ctor_get(v_traceState_4518_, 0);
v_isSharedCheck_4555_ = !lean_is_exclusive(v_traceState_4518_);
if (v_isSharedCheck_4555_ == 0)
{
v___x_4533_ = v_traceState_4518_;
v_isShared_4534_ = v_isSharedCheck_4555_;
goto v_resetjp_4532_;
}
else
{
lean_inc(v_traces_4531_);
lean_dec(v_traceState_4518_);
v___x_4533_ = lean_box(0);
v_isShared_4534_ = v_isSharedCheck_4555_;
goto v_resetjp_4532_;
}
v_resetjp_4532_:
{
lean_object* v___x_4535_; lean_object* v___x_4536_; double v___x_4537_; uint8_t v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4540_; lean_object* v___x_4541_; lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4546_; 
v___x_4535_ = lean_box(0);
v___x_4536_ = lean_box(0);
v___x_4537_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
v___x_4538_ = 0;
v___x_4539_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1));
v___x_4540_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_4540_, 0, v_cls_4504_);
lean_ctor_set(v___x_4540_, 1, v___x_4536_);
lean_ctor_set(v___x_4540_, 2, v___x_4539_);
lean_ctor_set_float(v___x_4540_, sizeof(void*)*3, v___x_4537_);
lean_ctor_set_float(v___x_4540_, sizeof(void*)*3 + 8, v___x_4537_);
lean_ctor_set_uint8(v___x_4540_, sizeof(void*)*3 + 16, v___x_4538_);
v___x_4541_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__2));
v___x_4542_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4540_);
lean_ctor_set(v___x_4542_, 1, v_a_4513_);
lean_ctor_set(v___x_4542_, 2, v___x_4541_);
lean_inc(v_ref_4511_);
v___x_4543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4543_, 0, v_ref_4511_);
lean_ctor_set(v___x_4543_, 1, v___x_4542_);
v___x_4544_ = l_Lean_PersistentArray_push___redArg(v_traces_4531_, v___x_4543_);
if (v_isShared_4534_ == 0)
{
lean_ctor_set(v___x_4533_, 0, v___x_4544_);
v___x_4546_ = v___x_4533_;
goto v_reusejp_4545_;
}
else
{
lean_object* v_reuseFailAlloc_4554_; 
v_reuseFailAlloc_4554_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_4554_, 0, v___x_4544_);
lean_ctor_set_uint64(v_reuseFailAlloc_4554_, sizeof(void*)*1, v_tid_4530_);
v___x_4546_ = v_reuseFailAlloc_4554_;
goto v_reusejp_4545_;
}
v_reusejp_4545_:
{
lean_object* v___x_4548_; 
if (v_isShared_4529_ == 0)
{
lean_ctor_set(v___x_4528_, 4, v___x_4546_);
v___x_4548_ = v___x_4528_;
goto v_reusejp_4547_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_env_4519_);
lean_ctor_set(v_reuseFailAlloc_4553_, 1, v_nextMacroScope_4520_);
lean_ctor_set(v_reuseFailAlloc_4553_, 2, v_ngen_4521_);
lean_ctor_set(v_reuseFailAlloc_4553_, 3, v_auxDeclNGen_4522_);
lean_ctor_set(v_reuseFailAlloc_4553_, 4, v___x_4546_);
lean_ctor_set(v_reuseFailAlloc_4553_, 5, v_cache_4523_);
lean_ctor_set(v_reuseFailAlloc_4553_, 6, v_messages_4524_);
lean_ctor_set(v_reuseFailAlloc_4553_, 7, v_infoState_4525_);
lean_ctor_set(v_reuseFailAlloc_4553_, 8, v_snapshotTasks_4526_);
v___x_4548_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4547_;
}
v_reusejp_4547_:
{
lean_object* v___x_4549_; lean_object* v___x_4551_; 
v___x_4549_ = lean_st_ref_put(v___y_4509_, v___x_4548_);
if (v_isShared_4516_ == 0)
{
lean_ctor_set(v___x_4515_, 0, v___x_4535_);
v___x_4551_ = v___x_4515_;
goto v_reusejp_4550_;
}
else
{
lean_object* v_reuseFailAlloc_4552_; 
v_reuseFailAlloc_4552_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4552_, 0, v___x_4535_);
v___x_4551_ = v_reuseFailAlloc_4552_;
goto v_reusejp_4550_;
}
v_reusejp_4550_:
{
return v___x_4551_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0___boxed(lean_object* v_cls_4558_, lean_object* v_msg_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_, lean_object* v___y_4564_){
_start:
{
lean_object* v_res_4565_; 
v_res_4565_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(v_cls_4558_, v_msg_4559_, v___y_4560_, v___y_4561_, v___y_4562_, v___y_4563_);
lean_dec(v___y_4563_);
lean_dec_ref(v___y_4562_);
lean_dec(v___y_4561_);
lean_dec_ref(v___y_4560_);
return v_res_4565_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__1(void){
_start:
{
lean_object* v___x_4567_; lean_object* v___x_4568_; 
v___x_4567_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__0));
v___x_4568_ = l_Lean_stringToMessageData(v___x_4567_);
return v___x_4568_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4570_; lean_object* v___x_4571_; 
v___x_4570_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__2));
v___x_4571_ = l_Lean_stringToMessageData(v___x_4570_);
return v___x_4571_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__5(void){
_start:
{
lean_object* v___x_4573_; lean_object* v___x_4574_; 
v___x_4573_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__4));
v___x_4574_ = l_Lean_stringToMessageData(v___x_4573_);
return v___x_4574_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4576_; lean_object* v___x_4577_; 
v___x_4576_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__6));
v___x_4577_ = l_Lean_stringToMessageData(v___x_4576_);
return v___x_4577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(lean_object* v___x_4578_, lean_object* v_e_4579_, lean_object* v___x_4580_, lean_object* v___x_4581_, lean_object* v_cls_4582_, lean_object* v___y_4583_, lean_object* v___y_4584_, lean_object* v___y_4585_, lean_object* v___y_4586_){
_start:
{
lean_object* v___x_4588_; lean_object* v___x_4589_; 
v___x_4588_ = lean_st_mk_ref(v___x_4578_);
v___x_4589_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit(v_e_4579_, v___x_4580_, v___x_4588_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
if (lean_obj_tag(v___x_4589_) == 0)
{
lean_object* v_a_4590_; lean_object* v___x_4592_; uint8_t v_isShared_4593_; uint8_t v_isSharedCheck_4661_; 
v_a_4590_ = lean_ctor_get(v___x_4589_, 0);
v_isSharedCheck_4661_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4661_ == 0)
{
v___x_4592_ = v___x_4589_;
v_isShared_4593_ = v_isSharedCheck_4661_;
goto v_resetjp_4591_;
}
else
{
lean_inc(v_a_4590_);
lean_dec(v___x_4589_);
v___x_4592_ = lean_box(0);
v_isShared_4593_ = v_isSharedCheck_4661_;
goto v_resetjp_4591_;
}
v_resetjp_4591_:
{
lean_object* v___x_4594_; lean_object* v_count_4595_; lean_object* v___x_4597_; uint8_t v_isShared_4598_; uint8_t v_isSharedCheck_4659_; 
v___x_4594_ = lean_st_ref_get(v___x_4588_);
lean_dec(v___x_4588_);
v_count_4595_ = lean_ctor_get(v___x_4594_, 0);
v_isSharedCheck_4659_ = !lean_is_exclusive(v___x_4594_);
if (v_isSharedCheck_4659_ == 0)
{
lean_object* v_unused_4660_; 
v_unused_4660_ = lean_ctor_get(v___x_4594_, 1);
lean_dec(v_unused_4660_);
v___x_4597_ = v___x_4594_;
v_isShared_4598_ = v_isSharedCheck_4659_;
goto v_resetjp_4596_;
}
else
{
lean_inc(v_count_4595_);
lean_dec(v___x_4594_);
v___x_4597_ = lean_box(0);
v_isShared_4598_ = v_isSharedCheck_4659_;
goto v_resetjp_4596_;
}
v_resetjp_4596_:
{
uint8_t v___x_4621_; 
v___x_4621_ = lean_nat_dec_eq(v_count_4595_, v___x_4581_);
if (v___x_4621_ == 0)
{
lean_object* v_toCold_4622_; lean_object* v_options_4623_; uint8_t v_hasTrace_4624_; 
v_toCold_4622_ = lean_ctor_get(v___y_4585_, 0);
v_options_4623_ = lean_ctor_get(v_toCold_4622_, 2);
v_hasTrace_4624_ = lean_ctor_get_uint8(v_options_4623_, sizeof(void*)*1);
if (v_hasTrace_4624_ == 0)
{
lean_dec(v_cls_4582_);
goto v___jp_4599_;
}
else
{
lean_object* v_inheritedTraceOptions_4625_; lean_object* v___x_4626_; lean_object* v___x_4627_; uint8_t v___x_4628_; 
v_inheritedTraceOptions_4625_ = lean_ctor_get(v_toCold_4622_, 11);
v___x_4626_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5));
lean_inc(v_cls_4582_);
v___x_4627_ = l_Lean_Name_append(v___x_4626_, v_cls_4582_);
v___x_4628_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4625_, v_options_4623_, v___x_4627_);
lean_dec(v___x_4627_);
if (v___x_4628_ == 0)
{
lean_dec(v_cls_4582_);
goto v___jp_4599_;
}
else
{
lean_object* v_expr_4629_; lean_object* v___x_4630_; lean_object* v___x_4631_; lean_object* v___x_4632_; lean_object* v___x_4633_; 
v_expr_4629_ = lean_ctor_get(v_a_4590_, 0);
v___x_4630_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__5);
lean_inc_ref(v_expr_4629_);
v___x_4631_ = l_Lean_indentExpr(v_expr_4629_);
v___x_4632_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4632_, 0, v___x_4630_);
lean_ctor_set(v___x_4632_, 1, v___x_4631_);
v___x_4633_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(v_cls_4582_, v___x_4632_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
if (lean_obj_tag(v___x_4633_) == 0)
{
lean_dec_ref_known(v___x_4633_, 1);
goto v___jp_4599_;
}
else
{
lean_object* v_a_4634_; lean_object* v___x_4636_; uint8_t v_isShared_4637_; uint8_t v_isSharedCheck_4641_; 
lean_del_object(v___x_4597_);
lean_dec(v_count_4595_);
lean_del_object(v___x_4592_);
lean_dec(v_a_4590_);
v_a_4634_ = lean_ctor_get(v___x_4633_, 0);
v_isSharedCheck_4641_ = !lean_is_exclusive(v___x_4633_);
if (v_isSharedCheck_4641_ == 0)
{
v___x_4636_ = v___x_4633_;
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
else
{
lean_inc(v_a_4634_);
lean_dec(v___x_4633_);
v___x_4636_ = lean_box(0);
v_isShared_4637_ = v_isSharedCheck_4641_;
goto v_resetjp_4635_;
}
v_resetjp_4635_:
{
lean_object* v___x_4639_; 
if (v_isShared_4637_ == 0)
{
v___x_4639_ = v___x_4636_;
goto v_reusejp_4638_;
}
else
{
lean_object* v_reuseFailAlloc_4640_; 
v_reuseFailAlloc_4640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4640_, 0, v_a_4634_);
v___x_4639_ = v_reuseFailAlloc_4640_;
goto v_reusejp_4638_;
}
v_reusejp_4638_:
{
return v___x_4639_;
}
}
}
}
}
}
else
{
lean_object* v_toCold_4642_; lean_object* v_options_4643_; uint8_t v_hasTrace_4644_; 
v_toCold_4642_ = lean_ctor_get(v___y_4585_, 0);
v_options_4643_ = lean_ctor_get(v_toCold_4642_, 2);
v_hasTrace_4644_ = lean_ctor_get_uint8(v_options_4643_, sizeof(void*)*1);
if (v_hasTrace_4644_ == 0)
{
lean_dec(v_cls_4582_);
goto v___jp_4599_;
}
else
{
lean_object* v_inheritedTraceOptions_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; uint8_t v___x_4648_; 
v_inheritedTraceOptions_4645_ = lean_ctor_get(v_toCold_4642_, 11);
v___x_4646_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5));
lean_inc(v_cls_4582_);
v___x_4647_ = l_Lean_Name_append(v___x_4646_, v_cls_4582_);
v___x_4648_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4645_, v_options_4643_, v___x_4647_);
lean_dec(v___x_4647_);
if (v___x_4648_ == 0)
{
lean_dec(v_cls_4582_);
goto v___jp_4599_;
}
else
{
lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4649_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__7, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__7_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__7);
v___x_4650_ = l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__0(v_cls_4582_, v___x_4649_, v___y_4583_, v___y_4584_, v___y_4585_, v___y_4586_);
if (lean_obj_tag(v___x_4650_) == 0)
{
lean_dec_ref_known(v___x_4650_, 1);
goto v___jp_4599_;
}
else
{
lean_object* v_a_4651_; lean_object* v___x_4653_; uint8_t v_isShared_4654_; uint8_t v_isSharedCheck_4658_; 
lean_del_object(v___x_4597_);
lean_dec(v_count_4595_);
lean_del_object(v___x_4592_);
lean_dec(v_a_4590_);
v_a_4651_ = lean_ctor_get(v___x_4650_, 0);
v_isSharedCheck_4658_ = !lean_is_exclusive(v___x_4650_);
if (v_isSharedCheck_4658_ == 0)
{
v___x_4653_ = v___x_4650_;
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
else
{
lean_inc(v_a_4651_);
lean_dec(v___x_4650_);
v___x_4653_ = lean_box(0);
v_isShared_4654_ = v_isSharedCheck_4658_;
goto v_resetjp_4652_;
}
v_resetjp_4652_:
{
lean_object* v___x_4656_; 
if (v_isShared_4654_ == 0)
{
v___x_4656_ = v___x_4653_;
goto v_reusejp_4655_;
}
else
{
lean_object* v_reuseFailAlloc_4657_; 
v_reuseFailAlloc_4657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4657_, 0, v_a_4651_);
v___x_4656_ = v_reuseFailAlloc_4657_;
goto v_reusejp_4655_;
}
v_reusejp_4655_:
{
return v___x_4656_;
}
}
}
}
}
}
v___jp_4599_:
{
lean_object* v_expr_4600_; lean_object* v___x_4602_; uint8_t v_isShared_4603_; uint8_t v_isSharedCheck_4619_; 
v_expr_4600_ = lean_ctor_get(v_a_4590_, 0);
v_isSharedCheck_4619_ = !lean_is_exclusive(v_a_4590_);
if (v_isSharedCheck_4619_ == 0)
{
lean_object* v_unused_4620_; 
v_unused_4620_ = lean_ctor_get(v_a_4590_, 1);
lean_dec(v_unused_4620_);
v___x_4602_ = v_a_4590_;
v_isShared_4603_ = v_isSharedCheck_4619_;
goto v_resetjp_4601_;
}
else
{
lean_inc(v_expr_4600_);
lean_dec(v_a_4590_);
v___x_4602_ = lean_box(0);
v_isShared_4603_ = v_isSharedCheck_4619_;
goto v_resetjp_4601_;
}
v_resetjp_4601_:
{
lean_object* v___x_4604_; lean_object* v___x_4605_; lean_object* v___x_4606_; lean_object* v___x_4607_; lean_object* v___x_4609_; 
v___x_4604_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__1, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__1_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__1);
v___x_4605_ = l_Nat_reprFast(v_count_4595_);
v___x_4606_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4606_, 0, v___x_4605_);
v___x_4607_ = l_Lean_MessageData_ofFormat(v___x_4606_);
if (v_isShared_4603_ == 0)
{
lean_ctor_set_tag(v___x_4602_, 7);
lean_ctor_set(v___x_4602_, 1, v___x_4607_);
lean_ctor_set(v___x_4602_, 0, v___x_4604_);
v___x_4609_ = v___x_4602_;
goto v_reusejp_4608_;
}
else
{
lean_object* v_reuseFailAlloc_4618_; 
v_reuseFailAlloc_4618_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4618_, 0, v___x_4604_);
lean_ctor_set(v_reuseFailAlloc_4618_, 1, v___x_4607_);
v___x_4609_ = v_reuseFailAlloc_4618_;
goto v_reusejp_4608_;
}
v_reusejp_4608_:
{
lean_object* v___x_4610_; lean_object* v___x_4612_; 
v___x_4610_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___closed__3);
if (v_isShared_4598_ == 0)
{
lean_ctor_set_tag(v___x_4597_, 7);
lean_ctor_set(v___x_4597_, 1, v___x_4610_);
lean_ctor_set(v___x_4597_, 0, v___x_4609_);
v___x_4612_ = v___x_4597_;
goto v_reusejp_4611_;
}
else
{
lean_object* v_reuseFailAlloc_4617_; 
v_reuseFailAlloc_4617_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4617_, 0, v___x_4609_);
lean_ctor_set(v_reuseFailAlloc_4617_, 1, v___x_4610_);
v___x_4612_ = v_reuseFailAlloc_4617_;
goto v_reusejp_4611_;
}
v_reusejp_4611_:
{
lean_object* v___x_4613_; lean_object* v___x_4615_; 
v___x_4613_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4613_, 0, v_expr_4600_);
lean_ctor_set(v___x_4613_, 1, v___x_4612_);
if (v_isShared_4593_ == 0)
{
lean_ctor_set(v___x_4592_, 0, v___x_4613_);
v___x_4615_ = v___x_4592_;
goto v_reusejp_4614_;
}
else
{
lean_object* v_reuseFailAlloc_4616_; 
v_reuseFailAlloc_4616_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4616_, 0, v___x_4613_);
v___x_4615_ = v_reuseFailAlloc_4616_;
goto v_reusejp_4614_;
}
v_reusejp_4614_:
{
return v___x_4615_;
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
lean_object* v_a_4662_; lean_object* v___x_4664_; uint8_t v_isShared_4665_; uint8_t v_isSharedCheck_4669_; 
lean_dec(v___x_4588_);
lean_dec(v_cls_4582_);
v_a_4662_ = lean_ctor_get(v___x_4589_, 0);
v_isSharedCheck_4669_ = !lean_is_exclusive(v___x_4589_);
if (v_isSharedCheck_4669_ == 0)
{
v___x_4664_ = v___x_4589_;
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
else
{
lean_inc(v_a_4662_);
lean_dec(v___x_4589_);
v___x_4664_ = lean_box(0);
v_isShared_4665_ = v_isSharedCheck_4669_;
goto v_resetjp_4663_;
}
v_resetjp_4663_:
{
lean_object* v___x_4667_; 
if (v_isShared_4665_ == 0)
{
v___x_4667_ = v___x_4664_;
goto v_reusejp_4666_;
}
else
{
lean_object* v_reuseFailAlloc_4668_; 
v_reuseFailAlloc_4668_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4668_, 0, v_a_4662_);
v___x_4667_ = v_reuseFailAlloc_4668_;
goto v_reusejp_4666_;
}
v_reusejp_4666_:
{
return v___x_4667_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___boxed(lean_object* v___x_4670_, lean_object* v_e_4671_, lean_object* v___x_4672_, lean_object* v___x_4673_, lean_object* v_cls_4674_, lean_object* v___y_4675_, lean_object* v___y_4676_, lean_object* v___y_4677_, lean_object* v___y_4678_, lean_object* v___y_4679_){
_start:
{
lean_object* v_res_4680_; 
v_res_4680_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0(v___x_4670_, v_e_4671_, v___x_4672_, v___x_4673_, v_cls_4674_, v___y_4675_, v___y_4676_, v___y_4677_, v___y_4678_);
lean_dec(v___y_4678_);
lean_dec_ref(v___y_4677_);
lean_dec(v___y_4676_);
lean_dec_ref(v___y_4675_);
lean_dec(v___x_4673_);
lean_dec(v___x_4672_);
return v_res_4680_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0(void){
_start:
{
uint8_t v___x_4681_; lean_object* v___x_4682_; 
v___x_4681_ = 2;
v___x_4682_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v___x_4681_);
return v___x_4682_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(uint8_t v___x_4683_, lean_object* v___f_4684_, lean_object* v___y_4685_, lean_object* v___y_4686_, lean_object* v___y_4687_, lean_object* v___y_4688_){
_start:
{
lean_object* v___x_4735_; uint8_t v_beta_4736_; 
v___x_4735_ = l_Lean_Meta_Context_config(v___y_4685_);
v_beta_4736_ = lean_ctor_get_uint8(v___x_4735_, 13);
if (v_beta_4736_ == 0)
{
lean_dec_ref(v___x_4735_);
goto v___jp_4690_;
}
else
{
uint8_t v_iota_4737_; 
v_iota_4737_ = lean_ctor_get_uint8(v___x_4735_, 12);
if (v_iota_4737_ == 0)
{
lean_dec_ref(v___x_4735_);
goto v___jp_4690_;
}
else
{
uint8_t v_zeta_4738_; 
v_zeta_4738_ = lean_ctor_get_uint8(v___x_4735_, 15);
if (v_zeta_4738_ == 0)
{
lean_dec_ref(v___x_4735_);
goto v___jp_4690_;
}
else
{
uint8_t v_zetaHave_4739_; 
v_zetaHave_4739_ = lean_ctor_get_uint8(v___x_4735_, 18);
if (v_zetaHave_4739_ == 0)
{
lean_dec_ref(v___x_4735_);
goto v___jp_4690_;
}
else
{
uint8_t v_zetaDelta_4740_; 
v_zetaDelta_4740_ = lean_ctor_get_uint8(v___x_4735_, 16);
if (v_zetaDelta_4740_ == 0)
{
lean_dec_ref(v___x_4735_);
goto v___jp_4690_;
}
else
{
uint8_t v_etaStruct_4741_; uint8_t v_proj_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; uint8_t v___x_4745_; 
v_etaStruct_4741_ = lean_ctor_get_uint8(v___x_4735_, 10);
v_proj_4742_ = lean_ctor_get_uint8(v___x_4735_, 14);
lean_dec_ref(v___x_4735_);
v___x_4743_ = l_Lean_Meta_ProjReductionKind_ctorIdx(v_proj_4742_);
v___x_4744_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___closed__0);
v___x_4745_ = lean_nat_dec_eq(v___x_4743_, v___x_4744_);
lean_dec(v___x_4743_);
if (v___x_4745_ == 0)
{
goto v___jp_4690_;
}
else
{
uint8_t v___x_4746_; uint8_t v___x_4747_; 
v___x_4746_ = 0;
v___x_4747_ = l_Lean_Meta_instBEqEtaStructMode_beq(v_etaStruct_4741_, v___x_4746_);
if (v___x_4747_ == 0)
{
goto v___jp_4690_;
}
else
{
lean_object* v___x_4748_; 
v___x_4748_ = lean_apply_5(v___f_4684_, v___y_4685_, v___y_4686_, v___y_4687_, v___y_4688_, lean_box(0));
return v___x_4748_;
}
}
}
}
}
}
}
v___jp_4690_:
{
lean_object* v___x_4691_; uint8_t v_foApprox_4692_; uint8_t v_ctxApprox_4693_; uint8_t v_quasiPatternApprox_4694_; uint8_t v_constApprox_4695_; uint8_t v_isDefEqStuckEx_4696_; uint8_t v_unificationHints_4697_; uint8_t v_proofIrrelevance_4698_; uint8_t v_assignSyntheticOpaque_4699_; uint8_t v_offsetCnstrs_4700_; uint8_t v_transparency_4701_; uint8_t v_univApprox_4702_; uint8_t v_zetaUnused_4703_; uint8_t v_canUnfoldPredicateConfig_4704_; lean_object* v___x_4706_; uint8_t v_isShared_4707_; uint8_t v_isSharedCheck_4734_; 
v___x_4691_ = l_Lean_Meta_Context_config(v___y_4685_);
v_foApprox_4692_ = lean_ctor_get_uint8(v___x_4691_, 0);
v_ctxApprox_4693_ = lean_ctor_get_uint8(v___x_4691_, 1);
v_quasiPatternApprox_4694_ = lean_ctor_get_uint8(v___x_4691_, 2);
v_constApprox_4695_ = lean_ctor_get_uint8(v___x_4691_, 3);
v_isDefEqStuckEx_4696_ = lean_ctor_get_uint8(v___x_4691_, 4);
v_unificationHints_4697_ = lean_ctor_get_uint8(v___x_4691_, 5);
v_proofIrrelevance_4698_ = lean_ctor_get_uint8(v___x_4691_, 6);
v_assignSyntheticOpaque_4699_ = lean_ctor_get_uint8(v___x_4691_, 7);
v_offsetCnstrs_4700_ = lean_ctor_get_uint8(v___x_4691_, 8);
v_transparency_4701_ = lean_ctor_get_uint8(v___x_4691_, 9);
v_univApprox_4702_ = lean_ctor_get_uint8(v___x_4691_, 11);
v_zetaUnused_4703_ = lean_ctor_get_uint8(v___x_4691_, 17);
v_canUnfoldPredicateConfig_4704_ = lean_ctor_get_uint8(v___x_4691_, 19);
v_isSharedCheck_4734_ = !lean_is_exclusive(v___x_4691_);
if (v_isSharedCheck_4734_ == 0)
{
v___x_4706_ = v___x_4691_;
v_isShared_4707_ = v_isSharedCheck_4734_;
goto v_resetjp_4705_;
}
else
{
lean_dec(v___x_4691_);
v___x_4706_ = lean_box(0);
v_isShared_4707_ = v_isSharedCheck_4734_;
goto v_resetjp_4705_;
}
v_resetjp_4705_:
{
uint8_t v___x_4708_; uint8_t v___x_4709_; lean_object* v___x_4711_; 
v___x_4708_ = 0;
v___x_4709_ = 2;
if (v_isShared_4707_ == 0)
{
v___x_4711_ = v___x_4706_;
goto v_reusejp_4710_;
}
else
{
lean_object* v_reuseFailAlloc_4733_; 
v_reuseFailAlloc_4733_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 0, v_foApprox_4692_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 1, v_ctxApprox_4693_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 2, v_quasiPatternApprox_4694_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 3, v_constApprox_4695_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 4, v_isDefEqStuckEx_4696_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 5, v_unificationHints_4697_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 6, v_proofIrrelevance_4698_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 7, v_assignSyntheticOpaque_4699_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 8, v_offsetCnstrs_4700_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 9, v_transparency_4701_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 11, v_univApprox_4702_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 17, v_zetaUnused_4703_);
lean_ctor_set_uint8(v_reuseFailAlloc_4733_, 19, v_canUnfoldPredicateConfig_4704_);
v___x_4711_ = v_reuseFailAlloc_4733_;
goto v_reusejp_4710_;
}
v_reusejp_4710_:
{
uint8_t v_trackZetaDelta_4712_; lean_object* v_zetaDeltaSet_4713_; lean_object* v_lctx_4714_; lean_object* v_localInstances_4715_; lean_object* v_defEqCtx_x3f_4716_; lean_object* v_synthPendingDepth_4717_; lean_object* v_customCanUnfoldPredicate_x3f_4718_; uint8_t v_univApprox_4719_; uint8_t v_inTypeClassResolution_4720_; uint8_t v_cacheInferType_4721_; lean_object* v___x_4723_; uint8_t v_isShared_4724_; uint8_t v_isSharedCheck_4731_; 
lean_ctor_set_uint8(v___x_4711_, 10, v___x_4708_);
lean_ctor_set_uint8(v___x_4711_, 12, v___x_4683_);
lean_ctor_set_uint8(v___x_4711_, 13, v___x_4683_);
lean_ctor_set_uint8(v___x_4711_, 14, v___x_4709_);
lean_ctor_set_uint8(v___x_4711_, 15, v___x_4683_);
lean_ctor_set_uint8(v___x_4711_, 16, v___x_4683_);
lean_ctor_set_uint8(v___x_4711_, 18, v___x_4683_);
v_trackZetaDelta_4712_ = lean_ctor_get_uint8(v___y_4685_, sizeof(void*)*7);
v_zetaDeltaSet_4713_ = lean_ctor_get(v___y_4685_, 1);
v_lctx_4714_ = lean_ctor_get(v___y_4685_, 2);
v_localInstances_4715_ = lean_ctor_get(v___y_4685_, 3);
v_defEqCtx_x3f_4716_ = lean_ctor_get(v___y_4685_, 4);
v_synthPendingDepth_4717_ = lean_ctor_get(v___y_4685_, 5);
v_customCanUnfoldPredicate_x3f_4718_ = lean_ctor_get(v___y_4685_, 6);
v_univApprox_4719_ = lean_ctor_get_uint8(v___y_4685_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4720_ = lean_ctor_get_uint8(v___y_4685_, sizeof(void*)*7 + 2);
v_cacheInferType_4721_ = lean_ctor_get_uint8(v___y_4685_, sizeof(void*)*7 + 3);
v_isSharedCheck_4731_ = !lean_is_exclusive(v___y_4685_);
if (v_isSharedCheck_4731_ == 0)
{
lean_object* v_unused_4732_; 
v_unused_4732_ = lean_ctor_get(v___y_4685_, 0);
lean_dec(v_unused_4732_);
v___x_4723_ = v___y_4685_;
v_isShared_4724_ = v_isSharedCheck_4731_;
goto v_resetjp_4722_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_4718_);
lean_inc(v_synthPendingDepth_4717_);
lean_inc(v_defEqCtx_x3f_4716_);
lean_inc(v_localInstances_4715_);
lean_inc(v_lctx_4714_);
lean_inc(v_zetaDeltaSet_4713_);
lean_dec(v___y_4685_);
v___x_4723_ = lean_box(0);
v_isShared_4724_ = v_isSharedCheck_4731_;
goto v_resetjp_4722_;
}
v_resetjp_4722_:
{
uint64_t v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4728_; 
v___x_4725_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_4711_);
v___x_4726_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_4726_, 0, v___x_4711_);
lean_ctor_set_uint64(v___x_4726_, sizeof(void*)*1, v___x_4725_);
if (v_isShared_4724_ == 0)
{
lean_ctor_set(v___x_4723_, 0, v___x_4726_);
v___x_4728_ = v___x_4723_;
goto v_reusejp_4727_;
}
else
{
lean_object* v_reuseFailAlloc_4730_; 
v_reuseFailAlloc_4730_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_4730_, 0, v___x_4726_);
lean_ctor_set(v_reuseFailAlloc_4730_, 1, v_zetaDeltaSet_4713_);
lean_ctor_set(v_reuseFailAlloc_4730_, 2, v_lctx_4714_);
lean_ctor_set(v_reuseFailAlloc_4730_, 3, v_localInstances_4715_);
lean_ctor_set(v_reuseFailAlloc_4730_, 4, v_defEqCtx_x3f_4716_);
lean_ctor_set(v_reuseFailAlloc_4730_, 5, v_synthPendingDepth_4717_);
lean_ctor_set(v_reuseFailAlloc_4730_, 6, v_customCanUnfoldPredicate_x3f_4718_);
lean_ctor_set_uint8(v_reuseFailAlloc_4730_, sizeof(void*)*7, v_trackZetaDelta_4712_);
lean_ctor_set_uint8(v_reuseFailAlloc_4730_, sizeof(void*)*7 + 1, v_univApprox_4719_);
lean_ctor_set_uint8(v_reuseFailAlloc_4730_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4720_);
lean_ctor_set_uint8(v_reuseFailAlloc_4730_, sizeof(void*)*7 + 3, v_cacheInferType_4721_);
v___x_4728_ = v_reuseFailAlloc_4730_;
goto v_reusejp_4727_;
}
v_reusejp_4727_:
{
lean_object* v___x_4729_; 
v___x_4729_ = lean_apply_5(v___f_4684_, v___x_4728_, v___y_4686_, v___y_4687_, v___y_4688_, lean_box(0));
return v___x_4729_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1___boxed(lean_object* v___x_4749_, lean_object* v___f_4750_, lean_object* v___y_4751_, lean_object* v___y_4752_, lean_object* v___y_4753_, lean_object* v___y_4754_, lean_object* v___y_4755_){
_start:
{
uint8_t v___x_13972__boxed_4756_; lean_object* v_res_4757_; 
v___x_13972__boxed_4756_ = lean_unbox(v___x_4749_);
v_res_4757_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_13972__boxed_4756_, v___f_4750_, v___y_4751_, v___y_4752_, v___y_4753_, v___y_4754_);
return v_res_4757_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(lean_object* v___y_4758_, lean_object* v_cache_4759_, lean_object* v_a_x3f_4760_){
_start:
{
lean_object* v___x_4762_; lean_object* v_mctx_4763_; lean_object* v_zetaDeltaFVarIds_4764_; lean_object* v_postponed_4765_; lean_object* v_diag_4766_; lean_object* v___x_4768_; uint8_t v_isShared_4769_; uint8_t v_isSharedCheck_4776_; 
v___x_4762_ = lean_st_ref_take(v___y_4758_);
v_mctx_4763_ = lean_ctor_get(v___x_4762_, 0);
v_zetaDeltaFVarIds_4764_ = lean_ctor_get(v___x_4762_, 2);
v_postponed_4765_ = lean_ctor_get(v___x_4762_, 3);
v_diag_4766_ = lean_ctor_get(v___x_4762_, 4);
v_isSharedCheck_4776_ = !lean_is_exclusive(v___x_4762_);
if (v_isSharedCheck_4776_ == 0)
{
lean_object* v_unused_4777_; 
v_unused_4777_ = lean_ctor_get(v___x_4762_, 1);
lean_dec(v_unused_4777_);
v___x_4768_ = v___x_4762_;
v_isShared_4769_ = v_isSharedCheck_4776_;
goto v_resetjp_4767_;
}
else
{
lean_inc(v_diag_4766_);
lean_inc(v_postponed_4765_);
lean_inc(v_zetaDeltaFVarIds_4764_);
lean_inc(v_mctx_4763_);
lean_dec(v___x_4762_);
v___x_4768_ = lean_box(0);
v_isShared_4769_ = v_isSharedCheck_4776_;
goto v_resetjp_4767_;
}
v_resetjp_4767_:
{
lean_object* v___x_4770_; lean_object* v___x_4772_; 
v___x_4770_ = lean_box(0);
if (v_isShared_4769_ == 0)
{
lean_ctor_set(v___x_4768_, 1, v_cache_4759_);
v___x_4772_ = v___x_4768_;
goto v_reusejp_4771_;
}
else
{
lean_object* v_reuseFailAlloc_4775_; 
v_reuseFailAlloc_4775_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4775_, 0, v_mctx_4763_);
lean_ctor_set(v_reuseFailAlloc_4775_, 1, v_cache_4759_);
lean_ctor_set(v_reuseFailAlloc_4775_, 2, v_zetaDeltaFVarIds_4764_);
lean_ctor_set(v_reuseFailAlloc_4775_, 3, v_postponed_4765_);
lean_ctor_set(v_reuseFailAlloc_4775_, 4, v_diag_4766_);
v___x_4772_ = v_reuseFailAlloc_4775_;
goto v_reusejp_4771_;
}
v_reusejp_4771_:
{
lean_object* v___x_4773_; lean_object* v___x_4774_; 
v___x_4773_ = lean_st_ref_put(v___y_4758_, v___x_4772_);
v___x_4774_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4774_, 0, v___x_4770_);
return v___x_4774_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2___boxed(lean_object* v___y_4778_, lean_object* v_cache_4779_, lean_object* v_a_x3f_4780_, lean_object* v___y_4781_){
_start:
{
lean_object* v_res_4782_; 
v_res_4782_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(v___y_4778_, v_cache_4779_, v_a_x3f_4780_);
lean_dec(v_a_x3f_4780_);
lean_dec(v___y_4778_);
return v_res_4782_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(lean_object* v___y_4783_, lean_object* v_zetaDeltaFVarIds_4784_, lean_object* v_a_x3f_4785_){
_start:
{
lean_object* v___x_4787_; lean_object* v_mctx_4788_; lean_object* v_cache_4789_; lean_object* v_postponed_4790_; lean_object* v_diag_4791_; lean_object* v___x_4793_; uint8_t v_isShared_4794_; uint8_t v_isSharedCheck_4801_; 
v___x_4787_ = lean_st_ref_take(v___y_4783_);
v_mctx_4788_ = lean_ctor_get(v___x_4787_, 0);
v_cache_4789_ = lean_ctor_get(v___x_4787_, 1);
v_postponed_4790_ = lean_ctor_get(v___x_4787_, 3);
v_diag_4791_ = lean_ctor_get(v___x_4787_, 4);
v_isSharedCheck_4801_ = !lean_is_exclusive(v___x_4787_);
if (v_isSharedCheck_4801_ == 0)
{
lean_object* v_unused_4802_; 
v_unused_4802_ = lean_ctor_get(v___x_4787_, 2);
lean_dec(v_unused_4802_);
v___x_4793_ = v___x_4787_;
v_isShared_4794_ = v_isSharedCheck_4801_;
goto v_resetjp_4792_;
}
else
{
lean_inc(v_diag_4791_);
lean_inc(v_postponed_4790_);
lean_inc(v_cache_4789_);
lean_inc(v_mctx_4788_);
lean_dec(v___x_4787_);
v___x_4793_ = lean_box(0);
v_isShared_4794_ = v_isSharedCheck_4801_;
goto v_resetjp_4792_;
}
v_resetjp_4792_:
{
lean_object* v___x_4795_; lean_object* v___x_4797_; 
v___x_4795_ = lean_box(0);
if (v_isShared_4794_ == 0)
{
lean_ctor_set(v___x_4793_, 2, v_zetaDeltaFVarIds_4784_);
v___x_4797_ = v___x_4793_;
goto v_reusejp_4796_;
}
else
{
lean_object* v_reuseFailAlloc_4800_; 
v_reuseFailAlloc_4800_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4800_, 0, v_mctx_4788_);
lean_ctor_set(v_reuseFailAlloc_4800_, 1, v_cache_4789_);
lean_ctor_set(v_reuseFailAlloc_4800_, 2, v_zetaDeltaFVarIds_4784_);
lean_ctor_set(v_reuseFailAlloc_4800_, 3, v_postponed_4790_);
lean_ctor_set(v_reuseFailAlloc_4800_, 4, v_diag_4791_);
v___x_4797_ = v_reuseFailAlloc_4800_;
goto v_reusejp_4796_;
}
v_reusejp_4796_:
{
lean_object* v___x_4798_; lean_object* v___x_4799_; 
v___x_4798_ = lean_st_ref_put(v___y_4783_, v___x_4797_);
v___x_4799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4795_);
return v___x_4799_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3___boxed(lean_object* v___y_4803_, lean_object* v_zetaDeltaFVarIds_4804_, lean_object* v_a_x3f_4805_, lean_object* v___y_4806_){
_start:
{
lean_object* v_res_4807_; 
v_res_4807_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___y_4803_, v_zetaDeltaFVarIds_4804_, v_a_x3f_4805_);
lean_dec(v_a_x3f_4805_);
lean_dec(v___y_4803_);
return v_res_4807_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__2(void){
_start:
{
lean_object* v___x_4811_; lean_object* v___x_4812_; 
v___x_4811_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__1));
v___x_4812_ = l_Lean_MessageData_ofFormat(v___x_4811_);
return v___x_4812_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__3(void){
_start:
{
lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; 
v___x_4813_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitDepExpr_spec__2___redArg___closed__1);
v___x_4814_ = lean_unsigned_to_nat(0u);
v___x_4815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4815_, 0, v___x_4814_);
lean_ctor_set(v___x_4815_, 1, v___x_4813_);
return v___x_4815_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__4(void){
_start:
{
lean_object* v___x_4816_; lean_object* v___x_4817_; 
v___x_4816_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0);
v___x_4817_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4817_, 0, v___x_4816_);
return v___x_4817_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__5(void){
_start:
{
lean_object* v___x_4818_; lean_object* v___x_4819_; 
v___x_4818_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__4, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__4_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__4);
v___x_4819_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_4819_, 0, v___x_4818_);
lean_ctor_set(v___x_4819_, 1, v___x_4818_);
lean_ctor_set(v___x_4819_, 2, v___x_4818_);
lean_ctor_set(v___x_4819_, 3, v___x_4818_);
lean_ctor_set(v___x_4819_, 4, v___x_4818_);
lean_ctor_set(v___x_4819_, 5, v___x_4818_);
return v___x_4819_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5(uint8_t v___x_4820_, lean_object* v_e_4821_, lean_object* v_cls_4822_, lean_object* v___y_4823_, lean_object* v___y_4824_, lean_object* v___y_4825_, lean_object* v___y_4826_){
_start:
{
if (v___x_4820_ == 0)
{
lean_object* v___x_4828_; lean_object* v___x_4829_; lean_object* v___x_4830_; 
lean_dec(v_cls_4822_);
v___x_4828_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__2);
v___x_4829_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4829_, 0, v_e_4821_);
lean_ctor_set(v___x_4829_, 1, v___x_4828_);
v___x_4830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4830_, 0, v___x_4829_);
return v___x_4830_;
}
else
{
uint8_t v___x_4831_; lean_object* v___x_4832_; lean_object* v___x_4833_; lean_object* v___x_4834_; lean_object* v___f_4835_; lean_object* v___x_4836_; lean_object* v_cache_4837_; lean_object* v_a_4839_; lean_object* v___x_4850_; lean_object* v_mctx_4851_; lean_object* v_zetaDeltaFVarIds_4852_; lean_object* v_postponed_4853_; lean_object* v_diag_4854_; lean_object* v___x_4856_; uint8_t v_isShared_4857_; uint8_t v_isSharedCheck_4933_; 
v___x_4831_ = 0;
v___x_4832_ = lean_box(0);
v___x_4833_ = lean_unsigned_to_nat(0u);
v___x_4834_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__3, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__3_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__3);
v___f_4835_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__0___boxed), 10, 5);
lean_closure_set(v___f_4835_, 0, v___x_4834_);
lean_closure_set(v___f_4835_, 1, v_e_4821_);
lean_closure_set(v___f_4835_, 2, v___x_4832_);
lean_closure_set(v___f_4835_, 3, v___x_4833_);
lean_closure_set(v___f_4835_, 4, v_cls_4822_);
v___x_4836_ = lean_st_ref_get(v___y_4824_);
v_cache_4837_ = lean_ctor_get(v___x_4836_, 1);
lean_inc_ref(v_cache_4837_);
lean_dec(v___x_4836_);
v___x_4850_ = lean_st_ref_take(v___y_4824_);
v_mctx_4851_ = lean_ctor_get(v___x_4850_, 0);
v_zetaDeltaFVarIds_4852_ = lean_ctor_get(v___x_4850_, 2);
v_postponed_4853_ = lean_ctor_get(v___x_4850_, 3);
v_diag_4854_ = lean_ctor_get(v___x_4850_, 4);
v_isSharedCheck_4933_ = !lean_is_exclusive(v___x_4850_);
if (v_isSharedCheck_4933_ == 0)
{
lean_object* v_unused_4934_; 
v_unused_4934_ = lean_ctor_get(v___x_4850_, 1);
lean_dec(v_unused_4934_);
v___x_4856_ = v___x_4850_;
v_isShared_4857_ = v_isSharedCheck_4933_;
goto v_resetjp_4855_;
}
else
{
lean_inc(v_diag_4854_);
lean_inc(v_postponed_4853_);
lean_inc(v_zetaDeltaFVarIds_4852_);
lean_inc(v_mctx_4851_);
lean_dec(v___x_4850_);
v___x_4856_ = lean_box(0);
v_isShared_4857_ = v_isSharedCheck_4933_;
goto v_resetjp_4855_;
}
v___jp_4838_:
{
lean_object* v___x_4840_; lean_object* v___x_4841_; lean_object* v___x_4843_; uint8_t v_isShared_4844_; uint8_t v_isSharedCheck_4848_; 
v___x_4840_ = lean_box(0);
v___x_4841_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(v___y_4824_, v_cache_4837_, v___x_4840_);
v_isSharedCheck_4848_ = !lean_is_exclusive(v___x_4841_);
if (v_isSharedCheck_4848_ == 0)
{
lean_object* v_unused_4849_; 
v_unused_4849_ = lean_ctor_get(v___x_4841_, 0);
lean_dec(v_unused_4849_);
v___x_4843_ = v___x_4841_;
v_isShared_4844_ = v_isSharedCheck_4848_;
goto v_resetjp_4842_;
}
else
{
lean_dec(v___x_4841_);
v___x_4843_ = lean_box(0);
v_isShared_4844_ = v_isSharedCheck_4848_;
goto v_resetjp_4842_;
}
v_resetjp_4842_:
{
lean_object* v___x_4846_; 
if (v_isShared_4844_ == 0)
{
lean_ctor_set_tag(v___x_4843_, 1);
lean_ctor_set(v___x_4843_, 0, v_a_4839_);
v___x_4846_ = v___x_4843_;
goto v_reusejp_4845_;
}
else
{
lean_object* v_reuseFailAlloc_4847_; 
v_reuseFailAlloc_4847_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4847_, 0, v_a_4839_);
v___x_4846_ = v_reuseFailAlloc_4847_;
goto v_reusejp_4845_;
}
v_reusejp_4845_:
{
return v___x_4846_;
}
}
}
v_resetjp_4855_:
{
lean_object* v___x_4858_; lean_object* v___x_4860_; 
v___x_4858_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__5, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__5_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___closed__5);
if (v_isShared_4857_ == 0)
{
lean_ctor_set(v___x_4856_, 1, v___x_4858_);
v___x_4860_ = v___x_4856_;
goto v_reusejp_4859_;
}
else
{
lean_object* v_reuseFailAlloc_4932_; 
v_reuseFailAlloc_4932_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4932_, 0, v_mctx_4851_);
lean_ctor_set(v_reuseFailAlloc_4932_, 1, v___x_4858_);
lean_ctor_set(v_reuseFailAlloc_4932_, 2, v_zetaDeltaFVarIds_4852_);
lean_ctor_set(v_reuseFailAlloc_4932_, 3, v_postponed_4853_);
lean_ctor_set(v_reuseFailAlloc_4932_, 4, v_diag_4854_);
v___x_4860_ = v_reuseFailAlloc_4932_;
goto v_reusejp_4859_;
}
v_reusejp_4859_:
{
lean_object* v___x_4861_; lean_object* v_keyedConfig_4862_; lean_object* v_zetaDeltaSet_4863_; lean_object* v_lctx_4864_; lean_object* v_localInstances_4865_; lean_object* v_defEqCtx_x3f_4866_; lean_object* v_synthPendingDepth_4867_; lean_object* v_customCanUnfoldPredicate_x3f_4868_; uint8_t v_univApprox_4869_; uint8_t v_inTypeClassResolution_4870_; uint8_t v_cacheInferType_4871_; lean_object* v___x_4872_; lean_object* v___x_4873_; lean_object* v_mctx_4874_; lean_object* v_cache_4875_; lean_object* v_zetaDeltaFVarIds_4876_; lean_object* v_postponed_4877_; lean_object* v_diag_4878_; lean_object* v___x_4880_; uint8_t v_isShared_4881_; uint8_t v_isSharedCheck_4931_; 
v___x_4861_ = lean_st_ref_put(v___y_4824_, v___x_4860_);
v_keyedConfig_4862_ = lean_ctor_get(v___y_4823_, 0);
v_zetaDeltaSet_4863_ = lean_ctor_get(v___y_4823_, 1);
v_lctx_4864_ = lean_ctor_get(v___y_4823_, 2);
v_localInstances_4865_ = lean_ctor_get(v___y_4823_, 3);
v_defEqCtx_x3f_4866_ = lean_ctor_get(v___y_4823_, 4);
v_synthPendingDepth_4867_ = lean_ctor_get(v___y_4823_, 5);
v_customCanUnfoldPredicate_x3f_4868_ = lean_ctor_get(v___y_4823_, 6);
v_univApprox_4869_ = lean_ctor_get_uint8(v___y_4823_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_4870_ = lean_ctor_get_uint8(v___y_4823_, sizeof(void*)*7 + 2);
v_cacheInferType_4871_ = lean_ctor_get_uint8(v___y_4823_, sizeof(void*)*7 + 3);
lean_inc(v_customCanUnfoldPredicate_x3f_4868_);
lean_inc(v_synthPendingDepth_4867_);
lean_inc(v_defEqCtx_x3f_4866_);
lean_inc_ref(v_localInstances_4865_);
lean_inc_ref(v_lctx_4864_);
lean_inc(v_zetaDeltaSet_4863_);
lean_inc_ref(v_keyedConfig_4862_);
v___x_4872_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4872_, 0, v_keyedConfig_4862_);
lean_ctor_set(v___x_4872_, 1, v_zetaDeltaSet_4863_);
lean_ctor_set(v___x_4872_, 2, v_lctx_4864_);
lean_ctor_set(v___x_4872_, 3, v_localInstances_4865_);
lean_ctor_set(v___x_4872_, 4, v_defEqCtx_x3f_4866_);
lean_ctor_set(v___x_4872_, 5, v_synthPendingDepth_4867_);
lean_ctor_set(v___x_4872_, 6, v_customCanUnfoldPredicate_x3f_4868_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*7, v___x_4820_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*7 + 1, v_univApprox_4869_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4870_);
lean_ctor_set_uint8(v___x_4872_, sizeof(void*)*7 + 3, v_cacheInferType_4871_);
v___x_4873_ = lean_st_ref_take(v___y_4824_);
v_mctx_4874_ = lean_ctor_get(v___x_4873_, 0);
v_cache_4875_ = lean_ctor_get(v___x_4873_, 1);
v_zetaDeltaFVarIds_4876_ = lean_ctor_get(v___x_4873_, 2);
v_postponed_4877_ = lean_ctor_get(v___x_4873_, 3);
v_diag_4878_ = lean_ctor_get(v___x_4873_, 4);
v_isSharedCheck_4931_ = !lean_is_exclusive(v___x_4873_);
if (v_isSharedCheck_4931_ == 0)
{
v___x_4880_ = v___x_4873_;
v_isShared_4881_ = v_isSharedCheck_4931_;
goto v_resetjp_4879_;
}
else
{
lean_inc(v_diag_4878_);
lean_inc(v_postponed_4877_);
lean_inc(v_zetaDeltaFVarIds_4876_);
lean_inc(v_cache_4875_);
lean_inc(v_mctx_4874_);
lean_dec(v___x_4873_);
v___x_4880_ = lean_box(0);
v_isShared_4881_ = v_isSharedCheck_4931_;
goto v_resetjp_4879_;
}
v_resetjp_4879_:
{
lean_object* v_a_4883_; lean_object* v_a_4887_; lean_object* v___y_4900_; lean_object* v___y_4904_; lean_object* v___x_4907_; lean_object* v___x_4909_; 
v___x_4907_ = lean_box(1);
if (v_isShared_4881_ == 0)
{
lean_ctor_set(v___x_4880_, 2, v___x_4907_);
v___x_4909_ = v___x_4880_;
goto v_reusejp_4908_;
}
else
{
lean_object* v_reuseFailAlloc_4930_; 
v_reuseFailAlloc_4930_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4930_, 0, v_mctx_4874_);
lean_ctor_set(v_reuseFailAlloc_4930_, 1, v_cache_4875_);
lean_ctor_set(v_reuseFailAlloc_4930_, 2, v___x_4907_);
lean_ctor_set(v_reuseFailAlloc_4930_, 3, v_postponed_4877_);
lean_ctor_set(v_reuseFailAlloc_4930_, 4, v_diag_4878_);
v___x_4909_ = v_reuseFailAlloc_4930_;
goto v_reusejp_4908_;
}
v___jp_4882_:
{
lean_object* v___x_4884_; lean_object* v___x_4885_; 
v___x_4884_ = lean_box(0);
v___x_4885_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___y_4824_, v_zetaDeltaFVarIds_4876_, v___x_4884_);
lean_dec_ref(v___x_4885_);
v_a_4839_ = v_a_4883_;
goto v___jp_4838_;
}
v___jp_4886_:
{
lean_object* v___x_4888_; lean_object* v___x_4889_; lean_object* v___x_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4897_; 
lean_inc(v_a_4887_);
v___x_4888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4888_, 0, v_a_4887_);
v___x_4889_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__3(v___y_4824_, v_zetaDeltaFVarIds_4876_, v___x_4888_);
lean_dec_ref(v___x_4889_);
v___x_4890_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__2(v___y_4824_, v_cache_4837_, v___x_4888_);
lean_dec_ref_known(v___x_4888_, 1);
v_isSharedCheck_4897_ = !lean_is_exclusive(v___x_4890_);
if (v_isSharedCheck_4897_ == 0)
{
lean_object* v_unused_4898_; 
v_unused_4898_ = lean_ctor_get(v___x_4890_, 0);
lean_dec(v_unused_4898_);
v___x_4892_ = v___x_4890_;
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
else
{
lean_dec(v___x_4890_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4895_; 
if (v_isShared_4893_ == 0)
{
lean_ctor_set(v___x_4892_, 0, v_a_4887_);
v___x_4895_ = v___x_4892_;
goto v_reusejp_4894_;
}
else
{
lean_object* v_reuseFailAlloc_4896_; 
v_reuseFailAlloc_4896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4896_, 0, v_a_4887_);
v___x_4895_ = v_reuseFailAlloc_4896_;
goto v_reusejp_4894_;
}
v_reusejp_4894_:
{
return v___x_4895_;
}
}
}
v___jp_4899_:
{
if (lean_obj_tag(v___y_4900_) == 0)
{
lean_object* v_a_4901_; 
v_a_4901_ = lean_ctor_get(v___y_4900_, 0);
lean_inc(v_a_4901_);
lean_dec_ref_known(v___y_4900_, 1);
v_a_4887_ = v_a_4901_;
goto v___jp_4886_;
}
else
{
lean_object* v_a_4902_; 
v_a_4902_ = lean_ctor_get(v___y_4900_, 0);
lean_inc(v_a_4902_);
lean_dec_ref_known(v___y_4900_, 1);
v_a_4883_ = v_a_4902_;
goto v___jp_4882_;
}
}
v___jp_4903_:
{
if (lean_obj_tag(v___y_4904_) == 0)
{
lean_object* v_a_4905_; 
v_a_4905_ = lean_ctor_get(v___y_4904_, 0);
lean_inc(v_a_4905_);
lean_dec_ref_known(v___y_4904_, 1);
v_a_4887_ = v_a_4905_;
goto v___jp_4886_;
}
else
{
lean_object* v_a_4906_; 
v_a_4906_ = lean_ctor_get(v___y_4904_, 0);
lean_inc(v_a_4906_);
lean_dec_ref_known(v___y_4904_, 1);
v_a_4883_ = v_a_4906_;
goto v___jp_4882_;
}
}
v_reusejp_4908_:
{
lean_object* v___x_4910_; lean_object* v___x_4911_; uint8_t v_transparency_4912_; uint8_t v___x_4913_; 
v___x_4910_ = lean_st_ref_put(v___y_4824_, v___x_4909_);
v___x_4911_ = l_Lean_Meta_Context_config(v___x_4872_);
v_transparency_4912_ = lean_ctor_get_uint8(v___x_4911_, 9);
lean_dec_ref(v___x_4911_);
v___x_4913_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_4912_, v___x_4831_);
if (v___x_4913_ == 0)
{
lean_object* v___x_4914_; lean_object* v___x_4915_; lean_object* v___x_4916_; uint8_t v_transparency_4917_; uint8_t v___x_4918_; uint8_t v___x_4919_; 
lean_dec_ref_known(v___x_4872_, 7);
lean_inc_ref(v_keyedConfig_4862_);
v___x_4914_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4831_, v_keyedConfig_4862_);
lean_inc(v_customCanUnfoldPredicate_x3f_4868_);
lean_inc(v_synthPendingDepth_4867_);
lean_inc(v_defEqCtx_x3f_4866_);
lean_inc_ref(v_localInstances_4865_);
lean_inc_ref(v_lctx_4864_);
lean_inc(v_zetaDeltaSet_4863_);
lean_inc_ref(v___x_4914_);
v___x_4915_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4915_, 0, v___x_4914_);
lean_ctor_set(v___x_4915_, 1, v_zetaDeltaSet_4863_);
lean_ctor_set(v___x_4915_, 2, v_lctx_4864_);
lean_ctor_set(v___x_4915_, 3, v_localInstances_4865_);
lean_ctor_set(v___x_4915_, 4, v_defEqCtx_x3f_4866_);
lean_ctor_set(v___x_4915_, 5, v_synthPendingDepth_4867_);
lean_ctor_set(v___x_4915_, 6, v_customCanUnfoldPredicate_x3f_4868_);
lean_ctor_set_uint8(v___x_4915_, sizeof(void*)*7, v___x_4820_);
lean_ctor_set_uint8(v___x_4915_, sizeof(void*)*7 + 1, v_univApprox_4869_);
lean_ctor_set_uint8(v___x_4915_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4870_);
lean_ctor_set_uint8(v___x_4915_, sizeof(void*)*7 + 3, v_cacheInferType_4871_);
v___x_4916_ = l_Lean_Meta_Context_config(v___x_4915_);
v_transparency_4917_ = lean_ctor_get_uint8(v___x_4916_, 9);
lean_dec_ref(v___x_4916_);
v___x_4918_ = 1;
v___x_4919_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_4917_, v___x_4918_);
if (v___x_4919_ == 0)
{
lean_object* v___x_4920_; 
lean_dec_ref(v___x_4914_);
lean_inc(v___y_4826_);
lean_inc_ref(v___y_4825_);
lean_inc(v___y_4824_);
v___x_4920_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_4820_, v___f_4835_, v___x_4915_, v___y_4824_, v___y_4825_, v___y_4826_);
v___y_4900_ = v___x_4920_;
goto v___jp_4899_;
}
else
{
lean_object* v___x_4921_; lean_object* v___x_4922_; lean_object* v___x_4923_; 
lean_dec_ref_known(v___x_4915_, 7);
v___x_4921_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4918_, v___x_4914_);
lean_inc(v_customCanUnfoldPredicate_x3f_4868_);
lean_inc(v_synthPendingDepth_4867_);
lean_inc(v_defEqCtx_x3f_4866_);
lean_inc_ref(v_localInstances_4865_);
lean_inc_ref(v_lctx_4864_);
lean_inc(v_zetaDeltaSet_4863_);
v___x_4922_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4922_, 0, v___x_4921_);
lean_ctor_set(v___x_4922_, 1, v_zetaDeltaSet_4863_);
lean_ctor_set(v___x_4922_, 2, v_lctx_4864_);
lean_ctor_set(v___x_4922_, 3, v_localInstances_4865_);
lean_ctor_set(v___x_4922_, 4, v_defEqCtx_x3f_4866_);
lean_ctor_set(v___x_4922_, 5, v_synthPendingDepth_4867_);
lean_ctor_set(v___x_4922_, 6, v_customCanUnfoldPredicate_x3f_4868_);
lean_ctor_set_uint8(v___x_4922_, sizeof(void*)*7, v___x_4820_);
lean_ctor_set_uint8(v___x_4922_, sizeof(void*)*7 + 1, v_univApprox_4869_);
lean_ctor_set_uint8(v___x_4922_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4870_);
lean_ctor_set_uint8(v___x_4922_, sizeof(void*)*7 + 3, v_cacheInferType_4871_);
lean_inc(v___y_4826_);
lean_inc_ref(v___y_4825_);
lean_inc(v___y_4824_);
v___x_4923_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_4820_, v___f_4835_, v___x_4922_, v___y_4824_, v___y_4825_, v___y_4826_);
v___y_4900_ = v___x_4923_;
goto v___jp_4899_;
}
}
else
{
uint8_t v___x_4924_; uint8_t v___x_4925_; 
v___x_4924_ = 1;
v___x_4925_ = l_Lean_Meta_TransparencyMode_lt(v_transparency_4912_, v___x_4924_);
if (v___x_4925_ == 0)
{
lean_object* v___x_4926_; 
lean_inc(v___y_4826_);
lean_inc_ref(v___y_4825_);
lean_inc(v___y_4824_);
v___x_4926_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_4913_, v___f_4835_, v___x_4872_, v___y_4824_, v___y_4825_, v___y_4826_);
v___y_4904_ = v___x_4926_;
goto v___jp_4903_;
}
else
{
lean_object* v___x_4927_; lean_object* v___x_4928_; lean_object* v___x_4929_; 
lean_dec_ref_known(v___x_4872_, 7);
lean_inc_ref(v_keyedConfig_4862_);
v___x_4927_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_4924_, v_keyedConfig_4862_);
lean_inc(v_customCanUnfoldPredicate_x3f_4868_);
lean_inc(v_synthPendingDepth_4867_);
lean_inc(v_defEqCtx_x3f_4866_);
lean_inc_ref(v_localInstances_4865_);
lean_inc_ref(v_lctx_4864_);
lean_inc(v_zetaDeltaSet_4863_);
v___x_4928_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_4928_, 0, v___x_4927_);
lean_ctor_set(v___x_4928_, 1, v_zetaDeltaSet_4863_);
lean_ctor_set(v___x_4928_, 2, v_lctx_4864_);
lean_ctor_set(v___x_4928_, 3, v_localInstances_4865_);
lean_ctor_set(v___x_4928_, 4, v_defEqCtx_x3f_4866_);
lean_ctor_set(v___x_4928_, 5, v_synthPendingDepth_4867_);
lean_ctor_set(v___x_4928_, 6, v_customCanUnfoldPredicate_x3f_4868_);
lean_ctor_set_uint8(v___x_4928_, sizeof(void*)*7, v___x_4820_);
lean_ctor_set_uint8(v___x_4928_, sizeof(void*)*7 + 1, v_univApprox_4869_);
lean_ctor_set_uint8(v___x_4928_, sizeof(void*)*7 + 2, v_inTypeClassResolution_4870_);
lean_ctor_set_uint8(v___x_4928_, sizeof(void*)*7 + 3, v_cacheInferType_4871_);
lean_inc(v___y_4826_);
lean_inc_ref(v___y_4825_);
lean_inc(v___y_4824_);
v___x_4929_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__1(v___x_4913_, v___f_4835_, v___x_4928_, v___y_4824_, v___y_4825_, v___y_4826_);
v___y_4904_ = v___x_4929_;
goto v___jp_4903_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5___boxed(lean_object* v___x_4935_, lean_object* v_e_4936_, lean_object* v_cls_4937_, lean_object* v___y_4938_, lean_object* v___y_4939_, lean_object* v___y_4940_, lean_object* v___y_4941_, lean_object* v___y_4942_){
_start:
{
uint8_t v___x_14154__boxed_4943_; lean_object* v_res_4944_; 
v___x_14154__boxed_4943_ = lean_unbox(v___x_4935_);
v_res_4944_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5(v___x_14154__boxed_4943_, v_e_4936_, v_cls_4937_, v___y_4938_, v___y_4939_, v___y_4940_, v___y_4941_);
lean_dec(v___y_4941_);
lean_dec_ref(v___y_4940_);
lean_dec(v___y_4939_);
lean_dec_ref(v___y_4938_);
return v_res_4944_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4(lean_object* v_x_4945_, lean_object* v___y_4946_, lean_object* v___y_4947_, lean_object* v___y_4948_, lean_object* v___y_4949_){
_start:
{
if (lean_obj_tag(v_x_4945_) == 0)
{
lean_object* v_a_4951_; lean_object* v___x_4953_; uint8_t v_isShared_4954_; uint8_t v_isSharedCheck_4959_; 
v_a_4951_ = lean_ctor_get(v_x_4945_, 0);
v_isSharedCheck_4959_ = !lean_is_exclusive(v_x_4945_);
if (v_isSharedCheck_4959_ == 0)
{
v___x_4953_ = v_x_4945_;
v_isShared_4954_ = v_isSharedCheck_4959_;
goto v_resetjp_4952_;
}
else
{
lean_inc(v_a_4951_);
lean_dec(v_x_4945_);
v___x_4953_ = lean_box(0);
v_isShared_4954_ = v_isSharedCheck_4959_;
goto v_resetjp_4952_;
}
v_resetjp_4952_:
{
lean_object* v___x_4955_; lean_object* v___x_4957_; 
v___x_4955_ = l_Lean_Exception_toMessageData(v_a_4951_);
if (v_isShared_4954_ == 0)
{
lean_ctor_set(v___x_4953_, 0, v___x_4955_);
v___x_4957_ = v___x_4953_;
goto v_reusejp_4956_;
}
else
{
lean_object* v_reuseFailAlloc_4958_; 
v_reuseFailAlloc_4958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4958_, 0, v___x_4955_);
v___x_4957_ = v_reuseFailAlloc_4958_;
goto v_reusejp_4956_;
}
v_reusejp_4956_:
{
return v___x_4957_;
}
}
}
else
{
lean_object* v_a_4960_; lean_object* v___x_4962_; uint8_t v_isShared_4963_; uint8_t v_isSharedCheck_4968_; 
v_a_4960_ = lean_ctor_get(v_x_4945_, 0);
v_isSharedCheck_4968_ = !lean_is_exclusive(v_x_4945_);
if (v_isSharedCheck_4968_ == 0)
{
v___x_4962_ = v_x_4945_;
v_isShared_4963_ = v_isSharedCheck_4968_;
goto v_resetjp_4961_;
}
else
{
lean_inc(v_a_4960_);
lean_dec(v_x_4945_);
v___x_4962_ = lean_box(0);
v_isShared_4963_ = v_isSharedCheck_4968_;
goto v_resetjp_4961_;
}
v_resetjp_4961_:
{
lean_object* v_snd_4964_; lean_object* v___x_4966_; 
v_snd_4964_ = lean_ctor_get(v_a_4960_, 1);
lean_inc(v_snd_4964_);
lean_dec(v_a_4960_);
if (v_isShared_4963_ == 0)
{
lean_ctor_set_tag(v___x_4962_, 0);
lean_ctor_set(v___x_4962_, 0, v_snd_4964_);
v___x_4966_ = v___x_4962_;
goto v_reusejp_4965_;
}
else
{
lean_object* v_reuseFailAlloc_4967_; 
v_reuseFailAlloc_4967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4967_, 0, v_snd_4964_);
v___x_4966_ = v_reuseFailAlloc_4967_;
goto v_reusejp_4965_;
}
v_reusejp_4965_:
{
return v___x_4966_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4___boxed(lean_object* v_x_4969_, lean_object* v___y_4970_, lean_object* v___y_4971_, lean_object* v___y_4972_, lean_object* v___y_4973_, lean_object* v___y_4974_){
_start:
{
lean_object* v_res_4975_; 
v_res_4975_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__4(v_x_4969_, v___y_4970_, v___y_4971_, v___y_4972_, v___y_4973_);
lean_dec(v___y_4973_);
lean_dec_ref(v___y_4972_);
lean_dec(v___y_4971_);
lean_dec_ref(v___y_4970_);
return v_res_4975_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg(lean_object* v_x_4976_){
_start:
{
if (lean_obj_tag(v_x_4976_) == 0)
{
lean_object* v_a_4978_; lean_object* v___x_4980_; uint8_t v_isShared_4981_; uint8_t v_isSharedCheck_4985_; 
v_a_4978_ = lean_ctor_get(v_x_4976_, 0);
v_isSharedCheck_4985_ = !lean_is_exclusive(v_x_4976_);
if (v_isSharedCheck_4985_ == 0)
{
v___x_4980_ = v_x_4976_;
v_isShared_4981_ = v_isSharedCheck_4985_;
goto v_resetjp_4979_;
}
else
{
lean_inc(v_a_4978_);
lean_dec(v_x_4976_);
v___x_4980_ = lean_box(0);
v_isShared_4981_ = v_isSharedCheck_4985_;
goto v_resetjp_4979_;
}
v_resetjp_4979_:
{
lean_object* v___x_4983_; 
if (v_isShared_4981_ == 0)
{
lean_ctor_set_tag(v___x_4980_, 1);
v___x_4983_ = v___x_4980_;
goto v_reusejp_4982_;
}
else
{
lean_object* v_reuseFailAlloc_4984_; 
v_reuseFailAlloc_4984_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4984_, 0, v_a_4978_);
v___x_4983_ = v_reuseFailAlloc_4984_;
goto v_reusejp_4982_;
}
v_reusejp_4982_:
{
return v___x_4983_;
}
}
}
else
{
lean_object* v_a_4986_; lean_object* v___x_4988_; uint8_t v_isShared_4989_; uint8_t v_isSharedCheck_4993_; 
v_a_4986_ = lean_ctor_get(v_x_4976_, 0);
v_isSharedCheck_4993_ = !lean_is_exclusive(v_x_4976_);
if (v_isSharedCheck_4993_ == 0)
{
v___x_4988_ = v_x_4976_;
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
else
{
lean_inc(v_a_4986_);
lean_dec(v_x_4976_);
v___x_4988_ = lean_box(0);
v_isShared_4989_ = v_isSharedCheck_4993_;
goto v_resetjp_4987_;
}
v_resetjp_4987_:
{
lean_object* v___x_4991_; 
if (v_isShared_4989_ == 0)
{
lean_ctor_set_tag(v___x_4988_, 0);
v___x_4991_ = v___x_4988_;
goto v_reusejp_4990_;
}
else
{
lean_object* v_reuseFailAlloc_4992_; 
v_reuseFailAlloc_4992_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4992_, 0, v_a_4986_);
v___x_4991_ = v_reuseFailAlloc_4992_;
goto v_reusejp_4990_;
}
v_reusejp_4990_:
{
return v___x_4991_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg___boxed(lean_object* v_x_4994_, lean_object* v___y_4995_){
_start:
{
lean_object* v_res_4996_; 
v_res_4996_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg(v_x_4994_);
return v_res_4996_;
}
}
LEAN_EXPORT uint8_t l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4(lean_object* v_e_4997_){
_start:
{
if (lean_obj_tag(v_e_4997_) == 0)
{
uint8_t v___x_4998_; 
v___x_4998_ = 2;
return v___x_4998_;
}
else
{
uint8_t v___x_4999_; 
v___x_4999_ = 0;
return v___x_4999_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4___boxed(lean_object* v_e_5000_){
_start:
{
uint8_t v_res_5001_; lean_object* v_r_5002_; 
v_res_5001_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4(v_e_5000_);
lean_dec_ref(v_e_5000_);
v_r_5002_ = lean_box(v_res_5001_);
return v_r_5002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(lean_object* v_oldTraces_5003_, lean_object* v_data_5004_, lean_object* v_ref_5005_, lean_object* v_msg_5006_, lean_object* v___y_5007_, lean_object* v___y_5008_, lean_object* v___y_5009_, lean_object* v___y_5010_){
_start:
{
lean_object* v_toCold_5012_; lean_object* v_currRecDepth_5013_; lean_object* v_ref_5014_; uint8_t v_diag_5015_; uint8_t v_suppressElabErrors_5016_; lean_object* v_ref_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v_traceState_5020_; lean_object* v_traces_5021_; lean_object* v___x_5022_; size_t v_sz_5023_; size_t v___x_5024_; lean_object* v___x_5025_; lean_object* v_msg_5026_; lean_object* v___x_5027_; lean_object* v_a_5028_; lean_object* v___x_5030_; uint8_t v_isShared_5031_; uint8_t v_isSharedCheck_5065_; 
v_toCold_5012_ = lean_ctor_get(v___y_5009_, 0);
v_currRecDepth_5013_ = lean_ctor_get(v___y_5009_, 1);
v_ref_5014_ = lean_ctor_get(v___y_5009_, 2);
v_diag_5015_ = lean_ctor_get_uint8(v___y_5009_, sizeof(void*)*3);
v_suppressElabErrors_5016_ = lean_ctor_get_uint8(v___y_5009_, sizeof(void*)*3 + 1);
v_ref_5017_ = l_Lean_replaceRef(v_ref_5005_, v_ref_5014_);
lean_inc(v_currRecDepth_5013_);
lean_inc_ref(v_toCold_5012_);
v___x_5018_ = lean_alloc_ctor(0, 3, 2);
lean_ctor_set(v___x_5018_, 0, v_toCold_5012_);
lean_ctor_set(v___x_5018_, 1, v_currRecDepth_5013_);
lean_ctor_set(v___x_5018_, 2, v_ref_5017_);
lean_ctor_set_uint8(v___x_5018_, sizeof(void*)*3, v_diag_5015_);
lean_ctor_set_uint8(v___x_5018_, sizeof(void*)*3 + 1, v_suppressElabErrors_5016_);
v___x_5019_ = lean_st_ref_get(v___y_5010_);
v_traceState_5020_ = lean_ctor_get(v___x_5019_, 4);
lean_inc_ref(v_traceState_5020_);
lean_dec(v___x_5019_);
v_traces_5021_ = lean_ctor_get(v_traceState_5020_, 0);
lean_inc_ref(v_traces_5021_);
lean_dec_ref(v_traceState_5020_);
v___x_5022_ = l_Lean_PersistentArray_toArray___redArg(v_traces_5021_);
lean_dec_ref(v_traces_5021_);
v_sz_5023_ = lean_array_size(v___x_5022_);
v___x_5024_ = ((size_t)0ULL);
v___x_5025_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__13_spec__15(v_sz_5023_, v___x_5024_, v___x_5022_);
v_msg_5026_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v_msg_5026_, 0, v_data_5004_);
lean_ctor_set(v_msg_5026_, 1, v_msg_5006_);
lean_ctor_set(v_msg_5026_, 2, v___x_5025_);
v___x_5027_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_throwErrorAt___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__5_spec__7_spec__8(v_msg_5026_, v___y_5007_, v___y_5008_, v___x_5018_, v___y_5010_);
lean_dec_ref_known(v___x_5018_, 3);
v_a_5028_ = lean_ctor_get(v___x_5027_, 0);
v_isSharedCheck_5065_ = !lean_is_exclusive(v___x_5027_);
if (v_isSharedCheck_5065_ == 0)
{
v___x_5030_ = v___x_5027_;
v_isShared_5031_ = v_isSharedCheck_5065_;
goto v_resetjp_5029_;
}
else
{
lean_inc(v_a_5028_);
lean_dec(v___x_5027_);
v___x_5030_ = lean_box(0);
v_isShared_5031_ = v_isSharedCheck_5065_;
goto v_resetjp_5029_;
}
v_resetjp_5029_:
{
lean_object* v___x_5032_; lean_object* v_traceState_5033_; lean_object* v_env_5034_; lean_object* v_nextMacroScope_5035_; lean_object* v_ngen_5036_; lean_object* v_auxDeclNGen_5037_; lean_object* v_cache_5038_; lean_object* v_messages_5039_; lean_object* v_infoState_5040_; lean_object* v_snapshotTasks_5041_; lean_object* v___x_5043_; uint8_t v_isShared_5044_; uint8_t v_isSharedCheck_5064_; 
v___x_5032_ = lean_st_ref_take(v___y_5010_);
v_traceState_5033_ = lean_ctor_get(v___x_5032_, 4);
v_env_5034_ = lean_ctor_get(v___x_5032_, 0);
v_nextMacroScope_5035_ = lean_ctor_get(v___x_5032_, 1);
v_ngen_5036_ = lean_ctor_get(v___x_5032_, 2);
v_auxDeclNGen_5037_ = lean_ctor_get(v___x_5032_, 3);
v_cache_5038_ = lean_ctor_get(v___x_5032_, 5);
v_messages_5039_ = lean_ctor_get(v___x_5032_, 6);
v_infoState_5040_ = lean_ctor_get(v___x_5032_, 7);
v_snapshotTasks_5041_ = lean_ctor_get(v___x_5032_, 8);
v_isSharedCheck_5064_ = !lean_is_exclusive(v___x_5032_);
if (v_isSharedCheck_5064_ == 0)
{
v___x_5043_ = v___x_5032_;
v_isShared_5044_ = v_isSharedCheck_5064_;
goto v_resetjp_5042_;
}
else
{
lean_inc(v_snapshotTasks_5041_);
lean_inc(v_infoState_5040_);
lean_inc(v_messages_5039_);
lean_inc(v_cache_5038_);
lean_inc(v_traceState_5033_);
lean_inc(v_auxDeclNGen_5037_);
lean_inc(v_ngen_5036_);
lean_inc(v_nextMacroScope_5035_);
lean_inc(v_env_5034_);
lean_dec(v___x_5032_);
v___x_5043_ = lean_box(0);
v_isShared_5044_ = v_isSharedCheck_5064_;
goto v_resetjp_5042_;
}
v_resetjp_5042_:
{
uint64_t v_tid_5045_; lean_object* v___x_5047_; uint8_t v_isShared_5048_; uint8_t v_isSharedCheck_5062_; 
v_tid_5045_ = lean_ctor_get_uint64(v_traceState_5033_, sizeof(void*)*1);
v_isSharedCheck_5062_ = !lean_is_exclusive(v_traceState_5033_);
if (v_isSharedCheck_5062_ == 0)
{
lean_object* v_unused_5063_; 
v_unused_5063_ = lean_ctor_get(v_traceState_5033_, 0);
lean_dec(v_unused_5063_);
v___x_5047_ = v_traceState_5033_;
v_isShared_5048_ = v_isSharedCheck_5062_;
goto v_resetjp_5046_;
}
else
{
lean_dec(v_traceState_5033_);
v___x_5047_ = lean_box(0);
v_isShared_5048_ = v_isSharedCheck_5062_;
goto v_resetjp_5046_;
}
v_resetjp_5046_:
{
lean_object* v___x_5049_; lean_object* v___x_5050_; lean_object* v___x_5051_; lean_object* v___x_5053_; 
v___x_5049_ = lean_box(0);
v___x_5050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5050_, 0, v_ref_5005_);
lean_ctor_set(v___x_5050_, 1, v_a_5028_);
v___x_5051_ = l_Lean_PersistentArray_push___redArg(v_oldTraces_5003_, v___x_5050_);
if (v_isShared_5048_ == 0)
{
lean_ctor_set(v___x_5047_, 0, v___x_5051_);
v___x_5053_ = v___x_5047_;
goto v_reusejp_5052_;
}
else
{
lean_object* v_reuseFailAlloc_5061_; 
v_reuseFailAlloc_5061_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5061_, 0, v___x_5051_);
lean_ctor_set_uint64(v_reuseFailAlloc_5061_, sizeof(void*)*1, v_tid_5045_);
v___x_5053_ = v_reuseFailAlloc_5061_;
goto v_reusejp_5052_;
}
v_reusejp_5052_:
{
lean_object* v___x_5055_; 
if (v_isShared_5044_ == 0)
{
lean_ctor_set(v___x_5043_, 4, v___x_5053_);
v___x_5055_ = v___x_5043_;
goto v_reusejp_5054_;
}
else
{
lean_object* v_reuseFailAlloc_5060_; 
v_reuseFailAlloc_5060_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5060_, 0, v_env_5034_);
lean_ctor_set(v_reuseFailAlloc_5060_, 1, v_nextMacroScope_5035_);
lean_ctor_set(v_reuseFailAlloc_5060_, 2, v_ngen_5036_);
lean_ctor_set(v_reuseFailAlloc_5060_, 3, v_auxDeclNGen_5037_);
lean_ctor_set(v_reuseFailAlloc_5060_, 4, v___x_5053_);
lean_ctor_set(v_reuseFailAlloc_5060_, 5, v_cache_5038_);
lean_ctor_set(v_reuseFailAlloc_5060_, 6, v_messages_5039_);
lean_ctor_set(v_reuseFailAlloc_5060_, 7, v_infoState_5040_);
lean_ctor_set(v_reuseFailAlloc_5060_, 8, v_snapshotTasks_5041_);
v___x_5055_ = v_reuseFailAlloc_5060_;
goto v_reusejp_5054_;
}
v_reusejp_5054_:
{
lean_object* v___x_5056_; lean_object* v___x_5058_; 
v___x_5056_ = lean_st_ref_put(v___y_5010_, v___x_5055_);
if (v_isShared_5031_ == 0)
{
lean_ctor_set(v___x_5030_, 0, v___x_5049_);
v___x_5058_ = v___x_5030_;
goto v_reusejp_5057_;
}
else
{
lean_object* v_reuseFailAlloc_5059_; 
v_reuseFailAlloc_5059_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5059_, 0, v___x_5049_);
v___x_5058_ = v_reuseFailAlloc_5059_;
goto v_reusejp_5057_;
}
v_reusejp_5057_:
{
return v___x_5058_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2___boxed(lean_object* v_oldTraces_5066_, lean_object* v_data_5067_, lean_object* v_ref_5068_, lean_object* v_msg_5069_, lean_object* v___y_5070_, lean_object* v___y_5071_, lean_object* v___y_5072_, lean_object* v___y_5073_, lean_object* v___y_5074_){
_start:
{
lean_object* v_res_5075_; 
v_res_5075_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(v_oldTraces_5066_, v_data_5067_, v_ref_5068_, v_msg_5069_, v___y_5070_, v___y_5071_, v___y_5072_, v___y_5073_);
lean_dec(v___y_5073_);
lean_dec_ref(v___y_5072_);
lean_dec(v___y_5071_);
lean_dec_ref(v___y_5070_);
return v_res_5075_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(lean_object* v_cls_5076_, uint8_t v_collapsed_5077_, lean_object* v_tag_5078_, lean_object* v_opts_5079_, uint8_t v_clsEnabled_5080_, lean_object* v_oldTraces_5081_, lean_object* v_msg_5082_, lean_object* v_resStartStop_5083_, lean_object* v___y_5084_, lean_object* v___y_5085_, lean_object* v___y_5086_, lean_object* v___y_5087_){
_start:
{
lean_object* v_fst_5089_; lean_object* v_snd_5090_; lean_object* v___y_5092_; lean_object* v___y_5093_; lean_object* v_data_5094_; lean_object* v_fst_5105_; lean_object* v_snd_5106_; lean_object* v___x_5107_; uint8_t v___x_5108_; lean_object* v___y_5110_; lean_object* v_a_5111_; uint8_t v___y_5126_; double v___y_5157_; 
v_fst_5089_ = lean_ctor_get(v_resStartStop_5083_, 0);
lean_inc(v_fst_5089_);
v_snd_5090_ = lean_ctor_get(v_resStartStop_5083_, 1);
lean_inc(v_snd_5090_);
lean_dec_ref(v_resStartStop_5083_);
v_fst_5105_ = lean_ctor_get(v_snd_5090_, 0);
lean_inc(v_fst_5105_);
v_snd_5106_ = lean_ctor_get(v_snd_5090_, 1);
lean_inc(v_snd_5106_);
lean_dec(v_snd_5090_);
v___x_5107_ = l_Lean_trace_profiler;
v___x_5108_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_5079_, v___x_5107_);
if (v___x_5108_ == 0)
{
v___y_5126_ = v___x_5108_;
goto v___jp_5125_;
}
else
{
lean_object* v___x_5162_; uint8_t v___x_5163_; 
v___x_5162_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5163_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_opts_5079_, v___x_5162_);
if (v___x_5163_ == 0)
{
lean_object* v___x_5164_; lean_object* v___x_5165_; double v___x_5166_; double v___x_5167_; double v___x_5168_; 
v___x_5164_ = l_Lean_trace_profiler_threshold;
v___x_5165_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_5079_, v___x_5164_);
v___x_5166_ = lean_float_of_nat(v___x_5165_);
v___x_5167_ = lean_float_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__2);
v___x_5168_ = lean_float_div(v___x_5166_, v___x_5167_);
v___y_5157_ = v___x_5168_;
goto v___jp_5156_;
}
else
{
lean_object* v___x_5169_; lean_object* v___x_5170_; double v___x_5171_; 
v___x_5169_ = l_Lean_trace_profiler_threshold;
v___x_5170_ = l_Lean_Option_get___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6_spec__16(v_opts_5079_, v___x_5169_);
v___x_5171_ = lean_float_of_nat(v___x_5170_);
v___y_5157_ = v___x_5171_;
goto v___jp_5156_;
}
}
v___jp_5091_:
{
lean_object* v___x_5095_; 
lean_inc(v___y_5093_);
v___x_5095_ = l___private_Lean_Util_Trace_0__Lean_addTraceNode___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__2(v_oldTraces_5081_, v_data_5094_, v___y_5093_, v___y_5092_, v___y_5084_, v___y_5085_, v___y_5086_, v___y_5087_);
if (lean_obj_tag(v___x_5095_) == 0)
{
lean_object* v___x_5096_; 
lean_dec_ref_known(v___x_5095_, 1);
v___x_5096_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg(v_fst_5089_);
return v___x_5096_;
}
else
{
lean_object* v_a_5097_; lean_object* v___x_5099_; uint8_t v_isShared_5100_; uint8_t v_isSharedCheck_5104_; 
lean_dec(v_fst_5089_);
v_a_5097_ = lean_ctor_get(v___x_5095_, 0);
v_isSharedCheck_5104_ = !lean_is_exclusive(v___x_5095_);
if (v_isSharedCheck_5104_ == 0)
{
v___x_5099_ = v___x_5095_;
v_isShared_5100_ = v_isSharedCheck_5104_;
goto v_resetjp_5098_;
}
else
{
lean_inc(v_a_5097_);
lean_dec(v___x_5095_);
v___x_5099_ = lean_box(0);
v_isShared_5100_ = v_isSharedCheck_5104_;
goto v_resetjp_5098_;
}
v_resetjp_5098_:
{
lean_object* v___x_5102_; 
if (v_isShared_5100_ == 0)
{
v___x_5102_ = v___x_5099_;
goto v_reusejp_5101_;
}
else
{
lean_object* v_reuseFailAlloc_5103_; 
v_reuseFailAlloc_5103_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5103_, 0, v_a_5097_);
v___x_5102_ = v_reuseFailAlloc_5103_;
goto v_reusejp_5101_;
}
v_reusejp_5101_:
{
return v___x_5102_;
}
}
}
}
v___jp_5109_:
{
uint8_t v_result_5112_; lean_object* v___x_5113_; lean_object* v___x_5114_; double v___x_5115_; lean_object* v_data_5116_; 
v_result_5112_ = l_Lean_Except_toTraceResult___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__4(v_fst_5089_);
v___x_5113_ = lean_box(v_result_5112_);
v___x_5114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_5114_, 0, v___x_5113_);
v___x_5115_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__0);
lean_inc_ref(v_tag_5078_);
lean_inc_ref(v___x_5114_);
lean_inc(v_cls_5076_);
v_data_5116_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_5116_, 0, v_cls_5076_);
lean_ctor_set(v_data_5116_, 1, v___x_5114_);
lean_ctor_set(v_data_5116_, 2, v_tag_5078_);
lean_ctor_set_float(v_data_5116_, sizeof(void*)*3, v___x_5115_);
lean_ctor_set_float(v_data_5116_, sizeof(void*)*3 + 8, v___x_5115_);
lean_ctor_set_uint8(v_data_5116_, sizeof(void*)*3 + 16, v_collapsed_5077_);
if (v___x_5108_ == 0)
{
lean_dec_ref_known(v___x_5114_, 1);
lean_dec(v_snd_5106_);
lean_dec(v_fst_5105_);
lean_dec_ref(v_tag_5078_);
lean_dec(v_cls_5076_);
v___y_5092_ = v_a_5111_;
v___y_5093_ = v___y_5110_;
v_data_5094_ = v_data_5116_;
goto v___jp_5091_;
}
else
{
lean_object* v_data_5117_; double v___x_5118_; double v___x_5119_; 
lean_dec_ref_known(v_data_5116_, 3);
v_data_5117_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v_data_5117_, 0, v_cls_5076_);
lean_ctor_set(v_data_5117_, 1, v___x_5114_);
lean_ctor_set(v_data_5117_, 2, v_tag_5078_);
v___x_5118_ = lean_unbox_float(v_fst_5105_);
lean_dec(v_fst_5105_);
lean_ctor_set_float(v_data_5117_, sizeof(void*)*3, v___x_5118_);
v___x_5119_ = lean_unbox_float(v_snd_5106_);
lean_dec(v_snd_5106_);
lean_ctor_set_float(v_data_5117_, sizeof(void*)*3 + 8, v___x_5119_);
lean_ctor_set_uint8(v_data_5117_, sizeof(void*)*3 + 16, v_collapsed_5077_);
v___y_5092_ = v_a_5111_;
v___y_5093_ = v___y_5110_;
v_data_5094_ = v_data_5117_;
goto v___jp_5091_;
}
}
v___jp_5120_:
{
lean_object* v_ref_5121_; lean_object* v___x_5122_; 
v_ref_5121_ = lean_ctor_get(v___y_5086_, 2);
lean_inc(v___y_5087_);
lean_inc_ref(v___y_5086_);
lean_inc(v___y_5085_);
lean_inc_ref(v___y_5084_);
lean_inc(v_fst_5089_);
v___x_5122_ = lean_apply_6(v_msg_5082_, v_fst_5089_, v___y_5084_, v___y_5085_, v___y_5086_, v___y_5087_, lean_box(0));
if (lean_obj_tag(v___x_5122_) == 0)
{
lean_object* v_a_5123_; 
v_a_5123_ = lean_ctor_get(v___x_5122_, 0);
lean_inc(v_a_5123_);
lean_dec_ref_known(v___x_5122_, 1);
v___y_5110_ = v_ref_5121_;
v_a_5111_ = v_a_5123_;
goto v___jp_5109_;
}
else
{
lean_object* v___x_5124_; 
lean_dec_ref_known(v___x_5122_, 1);
v___x_5124_ = lean_obj_once(&l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1, &l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1_once, _init_l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__6___closed__1);
v___y_5110_ = v_ref_5121_;
v_a_5111_ = v___x_5124_;
goto v___jp_5109_;
}
}
v___jp_5125_:
{
if (v_clsEnabled_5080_ == 0)
{
if (v___y_5126_ == 0)
{
lean_object* v___x_5127_; lean_object* v_traceState_5128_; lean_object* v_env_5129_; lean_object* v_nextMacroScope_5130_; lean_object* v_ngen_5131_; lean_object* v_auxDeclNGen_5132_; lean_object* v_cache_5133_; lean_object* v_messages_5134_; lean_object* v_infoState_5135_; lean_object* v_snapshotTasks_5136_; lean_object* v___x_5138_; uint8_t v_isShared_5139_; uint8_t v_isSharedCheck_5155_; 
lean_dec(v_snd_5106_);
lean_dec(v_fst_5105_);
lean_dec_ref(v_msg_5082_);
lean_dec_ref(v_tag_5078_);
lean_dec(v_cls_5076_);
v___x_5127_ = lean_st_ref_take(v___y_5087_);
v_traceState_5128_ = lean_ctor_get(v___x_5127_, 4);
v_env_5129_ = lean_ctor_get(v___x_5127_, 0);
v_nextMacroScope_5130_ = lean_ctor_get(v___x_5127_, 1);
v_ngen_5131_ = lean_ctor_get(v___x_5127_, 2);
v_auxDeclNGen_5132_ = lean_ctor_get(v___x_5127_, 3);
v_cache_5133_ = lean_ctor_get(v___x_5127_, 5);
v_messages_5134_ = lean_ctor_get(v___x_5127_, 6);
v_infoState_5135_ = lean_ctor_get(v___x_5127_, 7);
v_snapshotTasks_5136_ = lean_ctor_get(v___x_5127_, 8);
v_isSharedCheck_5155_ = !lean_is_exclusive(v___x_5127_);
if (v_isSharedCheck_5155_ == 0)
{
v___x_5138_ = v___x_5127_;
v_isShared_5139_ = v_isSharedCheck_5155_;
goto v_resetjp_5137_;
}
else
{
lean_inc(v_snapshotTasks_5136_);
lean_inc(v_infoState_5135_);
lean_inc(v_messages_5134_);
lean_inc(v_cache_5133_);
lean_inc(v_traceState_5128_);
lean_inc(v_auxDeclNGen_5132_);
lean_inc(v_ngen_5131_);
lean_inc(v_nextMacroScope_5130_);
lean_inc(v_env_5129_);
lean_dec(v___x_5127_);
v___x_5138_ = lean_box(0);
v_isShared_5139_ = v_isSharedCheck_5155_;
goto v_resetjp_5137_;
}
v_resetjp_5137_:
{
uint64_t v_tid_5140_; lean_object* v_traces_5141_; lean_object* v___x_5143_; uint8_t v_isShared_5144_; uint8_t v_isSharedCheck_5154_; 
v_tid_5140_ = lean_ctor_get_uint64(v_traceState_5128_, sizeof(void*)*1);
v_traces_5141_ = lean_ctor_get(v_traceState_5128_, 0);
v_isSharedCheck_5154_ = !lean_is_exclusive(v_traceState_5128_);
if (v_isSharedCheck_5154_ == 0)
{
v___x_5143_ = v_traceState_5128_;
v_isShared_5144_ = v_isSharedCheck_5154_;
goto v_resetjp_5142_;
}
else
{
lean_inc(v_traces_5141_);
lean_dec(v_traceState_5128_);
v___x_5143_ = lean_box(0);
v_isShared_5144_ = v_isSharedCheck_5154_;
goto v_resetjp_5142_;
}
v_resetjp_5142_:
{
lean_object* v___x_5145_; lean_object* v___x_5147_; 
v___x_5145_ = l_Lean_PersistentArray_append___redArg(v_oldTraces_5081_, v_traces_5141_);
lean_dec_ref(v_traces_5141_);
if (v_isShared_5144_ == 0)
{
lean_ctor_set(v___x_5143_, 0, v___x_5145_);
v___x_5147_ = v___x_5143_;
goto v_reusejp_5146_;
}
else
{
lean_object* v_reuseFailAlloc_5153_; 
v_reuseFailAlloc_5153_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_5153_, 0, v___x_5145_);
lean_ctor_set_uint64(v_reuseFailAlloc_5153_, sizeof(void*)*1, v_tid_5140_);
v___x_5147_ = v_reuseFailAlloc_5153_;
goto v_reusejp_5146_;
}
v_reusejp_5146_:
{
lean_object* v___x_5149_; 
if (v_isShared_5139_ == 0)
{
lean_ctor_set(v___x_5138_, 4, v___x_5147_);
v___x_5149_ = v___x_5138_;
goto v_reusejp_5148_;
}
else
{
lean_object* v_reuseFailAlloc_5152_; 
v_reuseFailAlloc_5152_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5152_, 0, v_env_5129_);
lean_ctor_set(v_reuseFailAlloc_5152_, 1, v_nextMacroScope_5130_);
lean_ctor_set(v_reuseFailAlloc_5152_, 2, v_ngen_5131_);
lean_ctor_set(v_reuseFailAlloc_5152_, 3, v_auxDeclNGen_5132_);
lean_ctor_set(v_reuseFailAlloc_5152_, 4, v___x_5147_);
lean_ctor_set(v_reuseFailAlloc_5152_, 5, v_cache_5133_);
lean_ctor_set(v_reuseFailAlloc_5152_, 6, v_messages_5134_);
lean_ctor_set(v_reuseFailAlloc_5152_, 7, v_infoState_5135_);
lean_ctor_set(v_reuseFailAlloc_5152_, 8, v_snapshotTasks_5136_);
v___x_5149_ = v_reuseFailAlloc_5152_;
goto v_reusejp_5148_;
}
v_reusejp_5148_:
{
lean_object* v___x_5150_; lean_object* v___x_5151_; 
v___x_5150_ = lean_st_ref_put(v___y_5087_, v___x_5149_);
v___x_5151_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg(v_fst_5089_);
return v___x_5151_;
}
}
}
}
}
else
{
goto v___jp_5120_;
}
}
else
{
goto v___jp_5120_;
}
}
v___jp_5156_:
{
double v___x_5158_; double v___x_5159_; double v___x_5160_; uint8_t v___x_5161_; 
v___x_5158_ = lean_unbox_float(v_snd_5106_);
v___x_5159_ = lean_unbox_float(v_fst_5105_);
v___x_5160_ = lean_float_sub(v___x_5158_, v___x_5159_);
v___x_5161_ = lean_float_decLt(v___y_5157_, v___x_5160_);
v___y_5126_ = v___x_5161_;
goto v___jp_5125_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2___boxed(lean_object* v_cls_5172_, lean_object* v_collapsed_5173_, lean_object* v_tag_5174_, lean_object* v_opts_5175_, lean_object* v_clsEnabled_5176_, lean_object* v_oldTraces_5177_, lean_object* v_msg_5178_, lean_object* v_resStartStop_5179_, lean_object* v___y_5180_, lean_object* v___y_5181_, lean_object* v___y_5182_, lean_object* v___y_5183_, lean_object* v___y_5184_){
_start:
{
uint8_t v_collapsed_boxed_5185_; uint8_t v_clsEnabled_boxed_5186_; lean_object* v_res_5187_; 
v_collapsed_boxed_5185_ = lean_unbox(v_collapsed_5173_);
v_clsEnabled_boxed_5186_ = lean_unbox(v_clsEnabled_5176_);
v_res_5187_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(v_cls_5172_, v_collapsed_boxed_5185_, v_tag_5174_, v_opts_5175_, v_clsEnabled_boxed_5186_, v_oldTraces_5177_, v_msg_5178_, v_resStartStop_5179_, v___y_5180_, v___y_5181_, v___y_5182_, v___y_5183_);
lean_dec(v___y_5183_);
lean_dec_ref(v___y_5182_);
lean_dec(v___y_5181_);
lean_dec_ref(v___y_5180_);
lean_dec_ref(v_opts_5175_);
return v_res_5187_;
}
}
static lean_object* _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2(void){
_start:
{
lean_object* v_cls_5192_; lean_object* v___x_5193_; lean_object* v___x_5194_; 
v_cls_5192_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0));
v___x_5193_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__5));
v___x_5194_ = l_Lean_Name_append(v___x_5193_, v_cls_5192_);
return v___x_5194_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main(lean_object* v_e_5195_, lean_object* v_a_5196_, lean_object* v_a_5197_, lean_object* v_a_5198_, lean_object* v_a_5199_){
_start:
{
lean_object* v___y_5202_; lean_object* v_toCold_5220_; lean_object* v_options_5221_; lean_object* v_inheritedTraceOptions_5222_; uint8_t v_hasTrace_5223_; lean_object* v_cls_5224_; uint8_t v___x_5225_; 
v_toCold_5220_ = lean_ctor_get(v_a_5198_, 0);
v_options_5221_ = lean_ctor_get(v_toCold_5220_, 2);
v_inheritedTraceOptions_5222_ = lean_ctor_get(v_toCold_5220_, 11);
v_hasTrace_5223_ = lean_ctor_get_uint8(v_options_5221_, sizeof(void*)*1);
v_cls_5224_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0));
v___x_5225_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_hasDepLet(v_e_5195_);
if (v_hasTrace_5223_ == 0)
{
lean_object* v___x_5226_; 
v___x_5226_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5(v___x_5225_, v_e_5195_, v_cls_5224_, v_a_5196_, v_a_5197_, v_a_5198_, v_a_5199_);
v___y_5202_ = v___x_5226_;
goto v___jp_5201_;
}
else
{
lean_object* v___f_5227_; lean_object* v___x_5228_; lean_object* v___x_5229_; uint8_t v___x_5230_; lean_object* v___y_5232_; lean_object* v___y_5233_; lean_object* v_a_5234_; lean_object* v___y_5247_; lean_object* v___y_5248_; lean_object* v_a_5249_; 
v___f_5227_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__1));
v___x_5228_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize_spec__2___redArg___closed__1));
v___x_5229_ = lean_obj_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__2);
v___x_5230_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5222_, v_options_5221_, v___x_5229_);
if (v___x_5230_ == 0)
{
lean_object* v___x_5299_; uint8_t v___x_5300_; 
v___x_5299_ = l_Lean_trace_profiler;
v___x_5300_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_5221_, v___x_5299_);
if (v___x_5300_ == 0)
{
lean_object* v___x_5301_; 
v___x_5301_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5(v___x_5225_, v_e_5195_, v_cls_5224_, v_a_5196_, v_a_5197_, v_a_5198_, v_a_5199_);
v___y_5202_ = v___x_5301_;
goto v___jp_5201_;
}
else
{
goto v___jp_5258_;
}
}
else
{
goto v___jp_5258_;
}
v___jp_5231_:
{
lean_object* v___x_5235_; double v___x_5236_; double v___x_5237_; double v___x_5238_; double v___x_5239_; double v___x_5240_; lean_object* v___x_5241_; lean_object* v___x_5242_; lean_object* v___x_5243_; lean_object* v___x_5244_; lean_object* v___x_5245_; 
v___x_5235_ = lean_io_mono_nanos_now();
v___x_5236_ = lean_float_of_nat(v___y_5233_);
v___x_5237_ = lean_float_once(&l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0, &l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0_once, _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit___closed__0);
v___x_5238_ = lean_float_div(v___x_5236_, v___x_5237_);
v___x_5239_ = lean_float_of_nat(v___x_5235_);
v___x_5240_ = lean_float_div(v___x_5239_, v___x_5237_);
v___x_5241_ = lean_box_float(v___x_5238_);
v___x_5242_ = lean_box_float(v___x_5240_);
v___x_5243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5243_, 0, v___x_5241_);
lean_ctor_set(v___x_5243_, 1, v___x_5242_);
v___x_5244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5244_, 0, v_a_5234_);
lean_ctor_set(v___x_5244_, 1, v___x_5243_);
v___x_5245_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(v_cls_5224_, v_hasTrace_5223_, v___x_5228_, v_options_5221_, v___x_5230_, v___y_5232_, v___f_5227_, v___x_5244_, v_a_5196_, v_a_5197_, v_a_5198_, v_a_5199_);
v___y_5202_ = v___x_5245_;
goto v___jp_5201_;
}
v___jp_5246_:
{
lean_object* v___x_5250_; double v___x_5251_; double v___x_5252_; lean_object* v___x_5253_; lean_object* v___x_5254_; lean_object* v___x_5255_; lean_object* v___x_5256_; lean_object* v___x_5257_; 
v___x_5250_ = lean_io_get_num_heartbeats();
v___x_5251_ = lean_float_of_nat(v___y_5248_);
v___x_5252_ = lean_float_of_nat(v___x_5250_);
v___x_5253_ = lean_box_float(v___x_5251_);
v___x_5254_ = lean_box_float(v___x_5252_);
v___x_5255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5255_, 0, v___x_5253_);
lean_ctor_set(v___x_5255_, 1, v___x_5254_);
v___x_5256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5256_, 0, v_a_5249_);
lean_ctor_set(v___x_5256_, 1, v___x_5255_);
v___x_5257_ = l___private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2(v_cls_5224_, v_hasTrace_5223_, v___x_5228_, v_options_5221_, v___x_5230_, v___y_5247_, v___f_5227_, v___x_5256_, v_a_5196_, v_a_5197_, v_a_5198_, v_a_5199_);
v___y_5202_ = v___x_5257_;
goto v___jp_5201_;
}
v___jp_5258_:
{
lean_object* v___x_5259_; lean_object* v_a_5260_; lean_object* v___x_5261_; uint8_t v___x_5262_; 
v___x_5259_ = l___private_Lean_Util_Trace_0__Lean_getResetTraces___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__1___redArg(v_a_5199_);
v_a_5260_ = lean_ctor_get(v___x_5259_, 0);
lean_inc(v_a_5260_);
lean_dec_ref(v___x_5259_);
v___x_5261_ = l_Lean_trace_profiler_useHeartbeats;
v___x_5262_ = l_Lean_Option_get___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visit_spec__5(v_options_5221_, v___x_5261_);
if (v___x_5262_ == 0)
{
lean_object* v___x_5263_; lean_object* v___x_5264_; 
v___x_5263_ = lean_io_mono_nanos_now();
v___x_5264_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5(v___x_5225_, v_e_5195_, v_cls_5224_, v_a_5196_, v_a_5197_, v_a_5198_, v_a_5199_);
if (lean_obj_tag(v___x_5264_) == 0)
{
lean_object* v_a_5265_; lean_object* v___x_5267_; uint8_t v_isShared_5268_; uint8_t v_isSharedCheck_5272_; 
v_a_5265_ = lean_ctor_get(v___x_5264_, 0);
v_isSharedCheck_5272_ = !lean_is_exclusive(v___x_5264_);
if (v_isSharedCheck_5272_ == 0)
{
v___x_5267_ = v___x_5264_;
v_isShared_5268_ = v_isSharedCheck_5272_;
goto v_resetjp_5266_;
}
else
{
lean_inc(v_a_5265_);
lean_dec(v___x_5264_);
v___x_5267_ = lean_box(0);
v_isShared_5268_ = v_isSharedCheck_5272_;
goto v_resetjp_5266_;
}
v_resetjp_5266_:
{
lean_object* v___x_5270_; 
if (v_isShared_5268_ == 0)
{
lean_ctor_set_tag(v___x_5267_, 1);
v___x_5270_ = v___x_5267_;
goto v_reusejp_5269_;
}
else
{
lean_object* v_reuseFailAlloc_5271_; 
v_reuseFailAlloc_5271_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5271_, 0, v_a_5265_);
v___x_5270_ = v_reuseFailAlloc_5271_;
goto v_reusejp_5269_;
}
v_reusejp_5269_:
{
v___y_5232_ = v_a_5260_;
v___y_5233_ = v___x_5263_;
v_a_5234_ = v___x_5270_;
goto v___jp_5231_;
}
}
}
else
{
lean_object* v_a_5273_; lean_object* v___x_5275_; uint8_t v_isShared_5276_; uint8_t v_isSharedCheck_5280_; 
v_a_5273_ = lean_ctor_get(v___x_5264_, 0);
v_isSharedCheck_5280_ = !lean_is_exclusive(v___x_5264_);
if (v_isSharedCheck_5280_ == 0)
{
v___x_5275_ = v___x_5264_;
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
else
{
lean_inc(v_a_5273_);
lean_dec(v___x_5264_);
v___x_5275_ = lean_box(0);
v_isShared_5276_ = v_isSharedCheck_5280_;
goto v_resetjp_5274_;
}
v_resetjp_5274_:
{
lean_object* v___x_5278_; 
if (v_isShared_5276_ == 0)
{
lean_ctor_set_tag(v___x_5275_, 0);
v___x_5278_ = v___x_5275_;
goto v_reusejp_5277_;
}
else
{
lean_object* v_reuseFailAlloc_5279_; 
v_reuseFailAlloc_5279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5279_, 0, v_a_5273_);
v___x_5278_ = v_reuseFailAlloc_5279_;
goto v_reusejp_5277_;
}
v_reusejp_5277_:
{
v___y_5232_ = v_a_5260_;
v___y_5233_ = v___x_5263_;
v_a_5234_ = v___x_5278_;
goto v___jp_5231_;
}
}
}
}
else
{
lean_object* v___x_5281_; lean_object* v___x_5282_; 
v___x_5281_ = lean_io_get_num_heartbeats();
v___x_5282_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___lam__5(v___x_5225_, v_e_5195_, v_cls_5224_, v_a_5196_, v_a_5197_, v_a_5198_, v_a_5199_);
if (lean_obj_tag(v___x_5282_) == 0)
{
lean_object* v_a_5283_; lean_object* v___x_5285_; uint8_t v_isShared_5286_; uint8_t v_isSharedCheck_5290_; 
v_a_5283_ = lean_ctor_get(v___x_5282_, 0);
v_isSharedCheck_5290_ = !lean_is_exclusive(v___x_5282_);
if (v_isSharedCheck_5290_ == 0)
{
v___x_5285_ = v___x_5282_;
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
else
{
lean_inc(v_a_5283_);
lean_dec(v___x_5282_);
v___x_5285_ = lean_box(0);
v_isShared_5286_ = v_isSharedCheck_5290_;
goto v_resetjp_5284_;
}
v_resetjp_5284_:
{
lean_object* v___x_5288_; 
if (v_isShared_5286_ == 0)
{
lean_ctor_set_tag(v___x_5285_, 1);
v___x_5288_ = v___x_5285_;
goto v_reusejp_5287_;
}
else
{
lean_object* v_reuseFailAlloc_5289_; 
v_reuseFailAlloc_5289_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5289_, 0, v_a_5283_);
v___x_5288_ = v_reuseFailAlloc_5289_;
goto v_reusejp_5287_;
}
v_reusejp_5287_:
{
v___y_5247_ = v_a_5260_;
v___y_5248_ = v___x_5281_;
v_a_5249_ = v___x_5288_;
goto v___jp_5246_;
}
}
}
else
{
lean_object* v_a_5291_; lean_object* v___x_5293_; uint8_t v_isShared_5294_; uint8_t v_isSharedCheck_5298_; 
v_a_5291_ = lean_ctor_get(v___x_5282_, 0);
v_isSharedCheck_5298_ = !lean_is_exclusive(v___x_5282_);
if (v_isSharedCheck_5298_ == 0)
{
v___x_5293_ = v___x_5282_;
v_isShared_5294_ = v_isSharedCheck_5298_;
goto v_resetjp_5292_;
}
else
{
lean_inc(v_a_5291_);
lean_dec(v___x_5282_);
v___x_5293_ = lean_box(0);
v_isShared_5294_ = v_isSharedCheck_5298_;
goto v_resetjp_5292_;
}
v_resetjp_5292_:
{
lean_object* v___x_5296_; 
if (v_isShared_5294_ == 0)
{
lean_ctor_set_tag(v___x_5293_, 0);
v___x_5296_ = v___x_5293_;
goto v_reusejp_5295_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v_a_5291_);
v___x_5296_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5295_;
}
v_reusejp_5295_:
{
v___y_5247_ = v_a_5260_;
v___y_5248_ = v___x_5281_;
v_a_5249_ = v___x_5296_;
goto v___jp_5246_;
}
}
}
}
}
}
v___jp_5201_:
{
if (lean_obj_tag(v___y_5202_) == 0)
{
lean_object* v_a_5203_; lean_object* v___x_5205_; uint8_t v_isShared_5206_; uint8_t v_isSharedCheck_5211_; 
v_a_5203_ = lean_ctor_get(v___y_5202_, 0);
v_isSharedCheck_5211_ = !lean_is_exclusive(v___y_5202_);
if (v_isSharedCheck_5211_ == 0)
{
v___x_5205_ = v___y_5202_;
v_isShared_5206_ = v_isSharedCheck_5211_;
goto v_resetjp_5204_;
}
else
{
lean_inc(v_a_5203_);
lean_dec(v___y_5202_);
v___x_5205_ = lean_box(0);
v_isShared_5206_ = v_isSharedCheck_5211_;
goto v_resetjp_5204_;
}
v_resetjp_5204_:
{
lean_object* v_fst_5207_; lean_object* v___x_5209_; 
v_fst_5207_ = lean_ctor_get(v_a_5203_, 0);
lean_inc(v_fst_5207_);
lean_dec(v_a_5203_);
if (v_isShared_5206_ == 0)
{
lean_ctor_set(v___x_5205_, 0, v_fst_5207_);
v___x_5209_ = v___x_5205_;
goto v_reusejp_5208_;
}
else
{
lean_object* v_reuseFailAlloc_5210_; 
v_reuseFailAlloc_5210_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5210_, 0, v_fst_5207_);
v___x_5209_ = v_reuseFailAlloc_5210_;
goto v_reusejp_5208_;
}
v_reusejp_5208_:
{
return v___x_5209_;
}
}
}
else
{
lean_object* v_a_5212_; lean_object* v___x_5214_; uint8_t v_isShared_5215_; uint8_t v_isSharedCheck_5219_; 
v_a_5212_ = lean_ctor_get(v___y_5202_, 0);
v_isSharedCheck_5219_ = !lean_is_exclusive(v___y_5202_);
if (v_isSharedCheck_5219_ == 0)
{
v___x_5214_ = v___y_5202_;
v_isShared_5215_ = v_isSharedCheck_5219_;
goto v_resetjp_5213_;
}
else
{
lean_inc(v_a_5212_);
lean_dec(v___y_5202_);
v___x_5214_ = lean_box(0);
v_isShared_5215_ = v_isSharedCheck_5219_;
goto v_resetjp_5213_;
}
v_resetjp_5213_:
{
lean_object* v___x_5217_; 
if (v_isShared_5215_ == 0)
{
v___x_5217_ = v___x_5214_;
goto v_reusejp_5216_;
}
else
{
lean_object* v_reuseFailAlloc_5218_; 
v_reuseFailAlloc_5218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5218_, 0, v_a_5212_);
v___x_5217_ = v_reuseFailAlloc_5218_;
goto v_reusejp_5216_;
}
v_reusejp_5216_:
{
return v___x_5217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___boxed(lean_object* v_e_5302_, lean_object* v_a_5303_, lean_object* v_a_5304_, lean_object* v_a_5305_, lean_object* v_a_5306_, lean_object* v___y_5307_){
_start:
{
lean_object* v_res_5308_; 
v_res_5308_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main(v_e_5302_, v_a_5303_, v_a_5304_, v_a_5305_, v_a_5306_);
lean_dec(v_a_5306_);
lean_dec_ref(v_a_5305_);
lean_dec(v_a_5304_);
lean_dec_ref(v_a_5303_);
return v_res_5308_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3(lean_object* v_00_u03b1_5309_, lean_object* v_x_5310_, lean_object* v___y_5311_, lean_object* v___y_5312_, lean_object* v___y_5313_, lean_object* v___y_5314_){
_start:
{
lean_object* v___x_5316_; 
v___x_5316_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___redArg(v_x_5310_);
return v___x_5316_;
}
}
LEAN_EXPORT lean_object* l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3___boxed(lean_object* v_00_u03b1_5317_, lean_object* v_x_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_){
_start:
{
lean_object* v_res_5324_; 
v_res_5324_ = l_MonadExcept_ofExcept___at___00__private_Lean_Util_Trace_0__Lean_withTraceNode_postCallback___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main_spec__2_spec__3(v_00_u03b1_5317_, v_x_5318_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_);
lean_dec(v___y_5322_);
lean_dec_ref(v___y_5321_);
lean_dec(v___y_5320_);
lean_dec_ref(v___y_5319_);
return v_res_5324_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(lean_object* v_e_5325_, lean_object* v___y_5326_){
_start:
{
uint8_t v___x_5328_; 
v___x_5328_ = l_Lean_Expr_hasMVar(v_e_5325_);
if (v___x_5328_ == 0)
{
lean_object* v___x_5329_; 
v___x_5329_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5329_, 0, v_e_5325_);
return v___x_5329_;
}
else
{
lean_object* v___x_5330_; lean_object* v_mctx_5331_; lean_object* v___x_5332_; lean_object* v_fst_5333_; lean_object* v_snd_5334_; lean_object* v___x_5335_; lean_object* v_cache_5336_; lean_object* v_zetaDeltaFVarIds_5337_; lean_object* v_postponed_5338_; lean_object* v_diag_5339_; lean_object* v___x_5341_; uint8_t v_isShared_5342_; uint8_t v_isSharedCheck_5348_; 
v___x_5330_ = lean_st_ref_get(v___y_5326_);
v_mctx_5331_ = lean_ctor_get(v___x_5330_, 0);
lean_inc_ref(v_mctx_5331_);
lean_dec(v___x_5330_);
v___x_5332_ = l_Lean_instantiateMVarsCore(v_mctx_5331_, v_e_5325_);
v_fst_5333_ = lean_ctor_get(v___x_5332_, 0);
lean_inc(v_fst_5333_);
v_snd_5334_ = lean_ctor_get(v___x_5332_, 1);
lean_inc(v_snd_5334_);
lean_dec_ref(v___x_5332_);
v___x_5335_ = lean_st_ref_take(v___y_5326_);
v_cache_5336_ = lean_ctor_get(v___x_5335_, 1);
v_zetaDeltaFVarIds_5337_ = lean_ctor_get(v___x_5335_, 2);
v_postponed_5338_ = lean_ctor_get(v___x_5335_, 3);
v_diag_5339_ = lean_ctor_get(v___x_5335_, 4);
v_isSharedCheck_5348_ = !lean_is_exclusive(v___x_5335_);
if (v_isSharedCheck_5348_ == 0)
{
lean_object* v_unused_5349_; 
v_unused_5349_ = lean_ctor_get(v___x_5335_, 0);
lean_dec(v_unused_5349_);
v___x_5341_ = v___x_5335_;
v_isShared_5342_ = v_isSharedCheck_5348_;
goto v_resetjp_5340_;
}
else
{
lean_inc(v_diag_5339_);
lean_inc(v_postponed_5338_);
lean_inc(v_zetaDeltaFVarIds_5337_);
lean_inc(v_cache_5336_);
lean_dec(v___x_5335_);
v___x_5341_ = lean_box(0);
v_isShared_5342_ = v_isSharedCheck_5348_;
goto v_resetjp_5340_;
}
v_resetjp_5340_:
{
lean_object* v___x_5344_; 
if (v_isShared_5342_ == 0)
{
lean_ctor_set(v___x_5341_, 0, v_snd_5334_);
v___x_5344_ = v___x_5341_;
goto v_reusejp_5343_;
}
else
{
lean_object* v_reuseFailAlloc_5347_; 
v_reuseFailAlloc_5347_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5347_, 0, v_snd_5334_);
lean_ctor_set(v_reuseFailAlloc_5347_, 1, v_cache_5336_);
lean_ctor_set(v_reuseFailAlloc_5347_, 2, v_zetaDeltaFVarIds_5337_);
lean_ctor_set(v_reuseFailAlloc_5347_, 3, v_postponed_5338_);
lean_ctor_set(v_reuseFailAlloc_5347_, 4, v_diag_5339_);
v___x_5344_ = v_reuseFailAlloc_5347_;
goto v_reusejp_5343_;
}
v_reusejp_5343_:
{
lean_object* v___x_5345_; lean_object* v___x_5346_; 
v___x_5345_ = lean_st_ref_put(v___y_5326_, v___x_5344_);
v___x_5346_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5346_, 0, v_fst_5333_);
return v___x_5346_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg___boxed(lean_object* v_e_5350_, lean_object* v___y_5351_, lean_object* v___y_5352_){
_start:
{
lean_object* v_res_5353_; 
v_res_5353_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(v_e_5350_, v___y_5351_);
lean_dec(v___y_5351_);
return v_res_5353_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0(lean_object* v_e_5354_, lean_object* v___y_5355_, lean_object* v___y_5356_, lean_object* v___y_5357_, lean_object* v___y_5358_){
_start:
{
lean_object* v___x_5360_; 
v___x_5360_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(v_e_5354_, v___y_5356_);
return v___x_5360_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___boxed(lean_object* v_e_5361_, lean_object* v___y_5362_, lean_object* v___y_5363_, lean_object* v___y_5364_, lean_object* v___y_5365_, lean_object* v___y_5366_){
_start:
{
lean_object* v_res_5367_; 
v_res_5367_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0(v_e_5361_, v___y_5362_, v___y_5363_, v___y_5364_, v___y_5365_);
lean_dec(v___y_5365_);
lean_dec_ref(v___y_5364_);
lean_dec(v___y_5363_);
lean_dec_ref(v___y_5362_);
return v_res_5367_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(lean_object* v_category_5368_, lean_object* v_opts_5369_, lean_object* v_act_5370_, lean_object* v_decl_5371_, lean_object* v___y_5372_, lean_object* v___y_5373_, lean_object* v___y_5374_, lean_object* v___y_5375_){
_start:
{
lean_object* v___x_5377_; lean_object* v___x_5378_; 
lean_inc(v___y_5375_);
lean_inc_ref(v___y_5374_);
lean_inc(v___y_5373_);
lean_inc_ref(v___y_5372_);
v___x_5377_ = lean_apply_4(v_act_5370_, v___y_5372_, v___y_5373_, v___y_5374_, v___y_5375_);
v___x_5378_ = l_Lean_profileitIOUnsafe___redArg(v_category_5368_, v_opts_5369_, v___x_5377_, v_decl_5371_);
return v___x_5378_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg___boxed(lean_object* v_category_5379_, lean_object* v_opts_5380_, lean_object* v_act_5381_, lean_object* v_decl_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_, lean_object* v___y_5386_, lean_object* v___y_5387_){
_start:
{
lean_object* v_res_5388_; 
v_res_5388_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(v_category_5379_, v_opts_5380_, v_act_5381_, v_decl_5382_, v___y_5383_, v___y_5384_, v___y_5385_, v___y_5386_);
lean_dec(v___y_5386_);
lean_dec_ref(v___y_5385_);
lean_dec(v___y_5384_);
lean_dec_ref(v___y_5383_);
lean_dec_ref(v_opts_5380_);
lean_dec_ref(v_category_5379_);
return v_res_5388_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2(lean_object* v_00_u03b1_5389_, lean_object* v_category_5390_, lean_object* v_opts_5391_, lean_object* v_act_5392_, lean_object* v_decl_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_){
_start:
{
lean_object* v___x_5399_; 
v___x_5399_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(v_category_5390_, v_opts_5391_, v_act_5392_, v_decl_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_);
return v___x_5399_;
}
}
LEAN_EXPORT lean_object* l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___boxed(lean_object* v_00_u03b1_5400_, lean_object* v_category_5401_, lean_object* v_opts_5402_, lean_object* v_act_5403_, lean_object* v_decl_5404_, lean_object* v___y_5405_, lean_object* v___y_5406_, lean_object* v___y_5407_, lean_object* v___y_5408_, lean_object* v___y_5409_){
_start:
{
lean_object* v_res_5410_; 
v_res_5410_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2(v_00_u03b1_5400_, v_category_5401_, v_opts_5402_, v_act_5403_, v_decl_5404_, v___y_5405_, v___y_5406_, v___y_5407_, v___y_5408_);
lean_dec(v___y_5408_);
lean_dec_ref(v___y_5407_);
lean_dec(v___y_5406_);
lean_dec_ref(v___y_5405_);
lean_dec_ref(v_opts_5402_);
lean_dec_ref(v_category_5401_);
return v_res_5410_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(lean_object* v___y_5411_, uint8_t v_isExporting_5412_, lean_object* v___x_5413_, lean_object* v___y_5414_, lean_object* v___x_5415_, lean_object* v_a_x3f_5416_){
_start:
{
lean_object* v___x_5418_; lean_object* v_env_5419_; lean_object* v_nextMacroScope_5420_; lean_object* v_ngen_5421_; lean_object* v_auxDeclNGen_5422_; lean_object* v_traceState_5423_; lean_object* v_messages_5424_; lean_object* v_infoState_5425_; lean_object* v_snapshotTasks_5426_; lean_object* v___x_5428_; uint8_t v_isShared_5429_; uint8_t v_isSharedCheck_5451_; 
v___x_5418_ = lean_st_ref_take(v___y_5411_);
v_env_5419_ = lean_ctor_get(v___x_5418_, 0);
v_nextMacroScope_5420_ = lean_ctor_get(v___x_5418_, 1);
v_ngen_5421_ = lean_ctor_get(v___x_5418_, 2);
v_auxDeclNGen_5422_ = lean_ctor_get(v___x_5418_, 3);
v_traceState_5423_ = lean_ctor_get(v___x_5418_, 4);
v_messages_5424_ = lean_ctor_get(v___x_5418_, 6);
v_infoState_5425_ = lean_ctor_get(v___x_5418_, 7);
v_snapshotTasks_5426_ = lean_ctor_get(v___x_5418_, 8);
v_isSharedCheck_5451_ = !lean_is_exclusive(v___x_5418_);
if (v_isSharedCheck_5451_ == 0)
{
lean_object* v_unused_5452_; 
v_unused_5452_ = lean_ctor_get(v___x_5418_, 5);
lean_dec(v_unused_5452_);
v___x_5428_ = v___x_5418_;
v_isShared_5429_ = v_isSharedCheck_5451_;
goto v_resetjp_5427_;
}
else
{
lean_inc(v_snapshotTasks_5426_);
lean_inc(v_infoState_5425_);
lean_inc(v_messages_5424_);
lean_inc(v_traceState_5423_);
lean_inc(v_auxDeclNGen_5422_);
lean_inc(v_ngen_5421_);
lean_inc(v_nextMacroScope_5420_);
lean_inc(v_env_5419_);
lean_dec(v___x_5418_);
v___x_5428_ = lean_box(0);
v_isShared_5429_ = v_isSharedCheck_5451_;
goto v_resetjp_5427_;
}
v_resetjp_5427_:
{
lean_object* v___x_5430_; lean_object* v___x_5432_; 
v___x_5430_ = l_Lean_Environment_setExporting(v_env_5419_, v_isExporting_5412_);
if (v_isShared_5429_ == 0)
{
lean_ctor_set(v___x_5428_, 5, v___x_5413_);
lean_ctor_set(v___x_5428_, 0, v___x_5430_);
v___x_5432_ = v___x_5428_;
goto v_reusejp_5431_;
}
else
{
lean_object* v_reuseFailAlloc_5450_; 
v_reuseFailAlloc_5450_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5450_, 0, v___x_5430_);
lean_ctor_set(v_reuseFailAlloc_5450_, 1, v_nextMacroScope_5420_);
lean_ctor_set(v_reuseFailAlloc_5450_, 2, v_ngen_5421_);
lean_ctor_set(v_reuseFailAlloc_5450_, 3, v_auxDeclNGen_5422_);
lean_ctor_set(v_reuseFailAlloc_5450_, 4, v_traceState_5423_);
lean_ctor_set(v_reuseFailAlloc_5450_, 5, v___x_5413_);
lean_ctor_set(v_reuseFailAlloc_5450_, 6, v_messages_5424_);
lean_ctor_set(v_reuseFailAlloc_5450_, 7, v_infoState_5425_);
lean_ctor_set(v_reuseFailAlloc_5450_, 8, v_snapshotTasks_5426_);
v___x_5432_ = v_reuseFailAlloc_5450_;
goto v_reusejp_5431_;
}
v_reusejp_5431_:
{
lean_object* v___x_5433_; lean_object* v___x_5434_; lean_object* v_mctx_5435_; lean_object* v_zetaDeltaFVarIds_5436_; lean_object* v_postponed_5437_; lean_object* v_diag_5438_; lean_object* v___x_5440_; uint8_t v_isShared_5441_; uint8_t v_isSharedCheck_5448_; 
v___x_5433_ = lean_st_ref_put(v___y_5411_, v___x_5432_);
v___x_5434_ = lean_st_ref_take(v___y_5414_);
v_mctx_5435_ = lean_ctor_get(v___x_5434_, 0);
v_zetaDeltaFVarIds_5436_ = lean_ctor_get(v___x_5434_, 2);
v_postponed_5437_ = lean_ctor_get(v___x_5434_, 3);
v_diag_5438_ = lean_ctor_get(v___x_5434_, 4);
v_isSharedCheck_5448_ = !lean_is_exclusive(v___x_5434_);
if (v_isSharedCheck_5448_ == 0)
{
lean_object* v_unused_5449_; 
v_unused_5449_ = lean_ctor_get(v___x_5434_, 1);
lean_dec(v_unused_5449_);
v___x_5440_ = v___x_5434_;
v_isShared_5441_ = v_isSharedCheck_5448_;
goto v_resetjp_5439_;
}
else
{
lean_inc(v_diag_5438_);
lean_inc(v_postponed_5437_);
lean_inc(v_zetaDeltaFVarIds_5436_);
lean_inc(v_mctx_5435_);
lean_dec(v___x_5434_);
v___x_5440_ = lean_box(0);
v_isShared_5441_ = v_isSharedCheck_5448_;
goto v_resetjp_5439_;
}
v_resetjp_5439_:
{
lean_object* v___x_5442_; lean_object* v___x_5444_; 
v___x_5442_ = lean_box(0);
if (v_isShared_5441_ == 0)
{
lean_ctor_set(v___x_5440_, 1, v___x_5415_);
v___x_5444_ = v___x_5440_;
goto v_reusejp_5443_;
}
else
{
lean_object* v_reuseFailAlloc_5447_; 
v_reuseFailAlloc_5447_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5447_, 0, v_mctx_5435_);
lean_ctor_set(v_reuseFailAlloc_5447_, 1, v___x_5415_);
lean_ctor_set(v_reuseFailAlloc_5447_, 2, v_zetaDeltaFVarIds_5436_);
lean_ctor_set(v_reuseFailAlloc_5447_, 3, v_postponed_5437_);
lean_ctor_set(v_reuseFailAlloc_5447_, 4, v_diag_5438_);
v___x_5444_ = v_reuseFailAlloc_5447_;
goto v_reusejp_5443_;
}
v_reusejp_5443_:
{
lean_object* v___x_5445_; lean_object* v___x_5446_; 
v___x_5445_ = lean_st_ref_put(v___y_5414_, v___x_5444_);
v___x_5446_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5446_, 0, v___x_5442_);
return v___x_5446_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0___boxed(lean_object* v___y_5453_, lean_object* v_isExporting_5454_, lean_object* v___x_5455_, lean_object* v___y_5456_, lean_object* v___x_5457_, lean_object* v_a_x3f_5458_, lean_object* v___y_5459_){
_start:
{
uint8_t v_isExporting_boxed_5460_; lean_object* v_res_5461_; 
v_isExporting_boxed_5460_ = lean_unbox(v_isExporting_5454_);
v_res_5461_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(v___y_5453_, v_isExporting_boxed_5460_, v___x_5455_, v___y_5456_, v___x_5457_, v_a_x3f_5458_);
lean_dec(v_a_x3f_5458_);
lean_dec(v___y_5456_);
lean_dec(v___y_5453_);
return v_res_5461_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_5462_; lean_object* v___x_5463_; 
v___x_5462_ = lean_obj_once(&l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0, &l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0_once, _init_l_Lean_mkUnknownIdentifierMessageCore___at___00Lean_mkUnknownIdentifierMessage___at___00Lean_throwUnknownIdentifierAt___at___00Lean_throwUnknownConstantAt___at___00Lean_throwUnknownConstant___at___00Lean_getConstVal___at___00__private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitConst_spec__0_spec__0_spec__2_spec__3_spec__4_spec__5___redArg___closed__0);
v___x_5463_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5463_, 0, v___x_5462_);
return v___x_5463_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1(void){
_start:
{
lean_object* v___x_5464_; lean_object* v___x_5465_; 
v___x_5464_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0);
v___x_5465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5465_, 0, v___x_5464_);
lean_ctor_set(v___x_5465_, 1, v___x_5464_);
return v___x_5465_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_5466_; lean_object* v___x_5467_; 
v___x_5466_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__0);
v___x_5467_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_5467_, 0, v___x_5466_);
lean_ctor_set(v___x_5467_, 1, v___x_5466_);
lean_ctor_set(v___x_5467_, 2, v___x_5466_);
lean_ctor_set(v___x_5467_, 3, v___x_5466_);
lean_ctor_set(v___x_5467_, 4, v___x_5466_);
lean_ctor_set(v___x_5467_, 5, v___x_5466_);
return v___x_5467_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(lean_object* v_x_5468_, uint8_t v_isExporting_5469_, lean_object* v___y_5470_, lean_object* v___y_5471_, lean_object* v___y_5472_, lean_object* v___y_5473_){
_start:
{
lean_object* v___x_5475_; lean_object* v_env_5476_; lean_object* v___x_5477_; uint8_t v_isModule_5478_; 
v___x_5475_ = lean_st_ref_get(v___y_5473_);
v_env_5476_ = lean_ctor_get(v___x_5475_, 0);
lean_inc_ref(v_env_5476_);
lean_dec(v___x_5475_);
v___x_5477_ = l_Lean_Environment_header(v_env_5476_);
v_isModule_5478_ = lean_ctor_get_uint8(v___x_5477_, sizeof(void*)*7 + 4);
lean_dec_ref(v___x_5477_);
if (v_isModule_5478_ == 0)
{
lean_object* v___x_5479_; 
lean_dec_ref(v_env_5476_);
lean_inc(v___y_5473_);
lean_inc_ref(v___y_5472_);
lean_inc(v___y_5471_);
lean_inc_ref(v___y_5470_);
v___x_5479_ = lean_apply_5(v_x_5468_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, lean_box(0));
return v___x_5479_;
}
else
{
uint8_t v_isExporting_5480_; 
v_isExporting_5480_ = lean_ctor_get_uint8(v_env_5476_, sizeof(void*)*8);
lean_dec_ref(v_env_5476_);
if (v_isExporting_5469_ == 0)
{
if (v_isExporting_5480_ == 0)
{
lean_object* v___x_5546_; 
lean_inc(v___y_5473_);
lean_inc_ref(v___y_5472_);
lean_inc(v___y_5471_);
lean_inc_ref(v___y_5470_);
v___x_5546_ = lean_apply_5(v_x_5468_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, lean_box(0));
return v___x_5546_;
}
else
{
goto v___jp_5481_;
}
}
else
{
if (v_isExporting_5480_ == 0)
{
goto v___jp_5481_;
}
else
{
lean_object* v___x_5547_; 
lean_inc(v___y_5473_);
lean_inc_ref(v___y_5472_);
lean_inc(v___y_5471_);
lean_inc_ref(v___y_5470_);
v___x_5547_ = lean_apply_5(v_x_5468_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, lean_box(0));
return v___x_5547_;
}
}
v___jp_5481_:
{
lean_object* v___x_5482_; lean_object* v_env_5483_; lean_object* v_nextMacroScope_5484_; lean_object* v_ngen_5485_; lean_object* v_auxDeclNGen_5486_; lean_object* v_traceState_5487_; lean_object* v_messages_5488_; lean_object* v_infoState_5489_; lean_object* v_snapshotTasks_5490_; lean_object* v___x_5492_; uint8_t v_isShared_5493_; uint8_t v_isSharedCheck_5544_; 
v___x_5482_ = lean_st_ref_take(v___y_5473_);
v_env_5483_ = lean_ctor_get(v___x_5482_, 0);
v_nextMacroScope_5484_ = lean_ctor_get(v___x_5482_, 1);
v_ngen_5485_ = lean_ctor_get(v___x_5482_, 2);
v_auxDeclNGen_5486_ = lean_ctor_get(v___x_5482_, 3);
v_traceState_5487_ = lean_ctor_get(v___x_5482_, 4);
v_messages_5488_ = lean_ctor_get(v___x_5482_, 6);
v_infoState_5489_ = lean_ctor_get(v___x_5482_, 7);
v_snapshotTasks_5490_ = lean_ctor_get(v___x_5482_, 8);
v_isSharedCheck_5544_ = !lean_is_exclusive(v___x_5482_);
if (v_isSharedCheck_5544_ == 0)
{
lean_object* v_unused_5545_; 
v_unused_5545_ = lean_ctor_get(v___x_5482_, 5);
lean_dec(v_unused_5545_);
v___x_5492_ = v___x_5482_;
v_isShared_5493_ = v_isSharedCheck_5544_;
goto v_resetjp_5491_;
}
else
{
lean_inc(v_snapshotTasks_5490_);
lean_inc(v_infoState_5489_);
lean_inc(v_messages_5488_);
lean_inc(v_traceState_5487_);
lean_inc(v_auxDeclNGen_5486_);
lean_inc(v_ngen_5485_);
lean_inc(v_nextMacroScope_5484_);
lean_inc(v_env_5483_);
lean_dec(v___x_5482_);
v___x_5492_ = lean_box(0);
v_isShared_5493_ = v_isSharedCheck_5544_;
goto v_resetjp_5491_;
}
v_resetjp_5491_:
{
lean_object* v___x_5494_; lean_object* v___x_5495_; lean_object* v___x_5497_; 
v___x_5494_ = l_Lean_Environment_setExporting(v_env_5483_, v_isExporting_5469_);
v___x_5495_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__1);
if (v_isShared_5493_ == 0)
{
lean_ctor_set(v___x_5492_, 5, v___x_5495_);
lean_ctor_set(v___x_5492_, 0, v___x_5494_);
v___x_5497_ = v___x_5492_;
goto v_reusejp_5496_;
}
else
{
lean_object* v_reuseFailAlloc_5543_; 
v_reuseFailAlloc_5543_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_reuseFailAlloc_5543_, 0, v___x_5494_);
lean_ctor_set(v_reuseFailAlloc_5543_, 1, v_nextMacroScope_5484_);
lean_ctor_set(v_reuseFailAlloc_5543_, 2, v_ngen_5485_);
lean_ctor_set(v_reuseFailAlloc_5543_, 3, v_auxDeclNGen_5486_);
lean_ctor_set(v_reuseFailAlloc_5543_, 4, v_traceState_5487_);
lean_ctor_set(v_reuseFailAlloc_5543_, 5, v___x_5495_);
lean_ctor_set(v_reuseFailAlloc_5543_, 6, v_messages_5488_);
lean_ctor_set(v_reuseFailAlloc_5543_, 7, v_infoState_5489_);
lean_ctor_set(v_reuseFailAlloc_5543_, 8, v_snapshotTasks_5490_);
v___x_5497_ = v_reuseFailAlloc_5543_;
goto v_reusejp_5496_;
}
v_reusejp_5496_:
{
lean_object* v___x_5498_; lean_object* v___x_5499_; lean_object* v_mctx_5500_; lean_object* v_zetaDeltaFVarIds_5501_; lean_object* v_postponed_5502_; lean_object* v_diag_5503_; lean_object* v___x_5505_; uint8_t v_isShared_5506_; uint8_t v_isSharedCheck_5541_; 
v___x_5498_ = lean_st_ref_put(v___y_5473_, v___x_5497_);
v___x_5499_ = lean_st_ref_take(v___y_5471_);
v_mctx_5500_ = lean_ctor_get(v___x_5499_, 0);
v_zetaDeltaFVarIds_5501_ = lean_ctor_get(v___x_5499_, 2);
v_postponed_5502_ = lean_ctor_get(v___x_5499_, 3);
v_diag_5503_ = lean_ctor_get(v___x_5499_, 4);
v_isSharedCheck_5541_ = !lean_is_exclusive(v___x_5499_);
if (v_isSharedCheck_5541_ == 0)
{
lean_object* v_unused_5542_; 
v_unused_5542_ = lean_ctor_get(v___x_5499_, 1);
lean_dec(v_unused_5542_);
v___x_5505_ = v___x_5499_;
v_isShared_5506_ = v_isSharedCheck_5541_;
goto v_resetjp_5504_;
}
else
{
lean_inc(v_diag_5503_);
lean_inc(v_postponed_5502_);
lean_inc(v_zetaDeltaFVarIds_5501_);
lean_inc(v_mctx_5500_);
lean_dec(v___x_5499_);
v___x_5505_ = lean_box(0);
v_isShared_5506_ = v_isSharedCheck_5541_;
goto v_resetjp_5504_;
}
v_resetjp_5504_:
{
lean_object* v___x_5507_; lean_object* v___x_5509_; 
v___x_5507_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___closed__2);
if (v_isShared_5506_ == 0)
{
lean_ctor_set(v___x_5505_, 1, v___x_5507_);
v___x_5509_ = v___x_5505_;
goto v_reusejp_5508_;
}
else
{
lean_object* v_reuseFailAlloc_5540_; 
v_reuseFailAlloc_5540_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_5540_, 0, v_mctx_5500_);
lean_ctor_set(v_reuseFailAlloc_5540_, 1, v___x_5507_);
lean_ctor_set(v_reuseFailAlloc_5540_, 2, v_zetaDeltaFVarIds_5501_);
lean_ctor_set(v_reuseFailAlloc_5540_, 3, v_postponed_5502_);
lean_ctor_set(v_reuseFailAlloc_5540_, 4, v_diag_5503_);
v___x_5509_ = v_reuseFailAlloc_5540_;
goto v_reusejp_5508_;
}
v_reusejp_5508_:
{
lean_object* v___x_5510_; lean_object* v_r_5511_; 
v___x_5510_ = lean_st_ref_put(v___y_5471_, v___x_5509_);
lean_inc(v___y_5473_);
lean_inc_ref(v___y_5472_);
lean_inc(v___y_5471_);
lean_inc_ref(v___y_5470_);
v_r_5511_ = lean_apply_5(v_x_5468_, v___y_5470_, v___y_5471_, v___y_5472_, v___y_5473_, lean_box(0));
if (lean_obj_tag(v_r_5511_) == 0)
{
lean_object* v_a_5512_; lean_object* v___x_5514_; uint8_t v_isShared_5515_; uint8_t v_isSharedCheck_5528_; 
v_a_5512_ = lean_ctor_get(v_r_5511_, 0);
v_isSharedCheck_5528_ = !lean_is_exclusive(v_r_5511_);
if (v_isSharedCheck_5528_ == 0)
{
v___x_5514_ = v_r_5511_;
v_isShared_5515_ = v_isSharedCheck_5528_;
goto v_resetjp_5513_;
}
else
{
lean_inc(v_a_5512_);
lean_dec(v_r_5511_);
v___x_5514_ = lean_box(0);
v_isShared_5515_ = v_isSharedCheck_5528_;
goto v_resetjp_5513_;
}
v_resetjp_5513_:
{
lean_object* v___x_5517_; 
lean_inc(v_a_5512_);
if (v_isShared_5515_ == 0)
{
lean_ctor_set_tag(v___x_5514_, 1);
v___x_5517_ = v___x_5514_;
goto v_reusejp_5516_;
}
else
{
lean_object* v_reuseFailAlloc_5527_; 
v_reuseFailAlloc_5527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5527_, 0, v_a_5512_);
v___x_5517_ = v_reuseFailAlloc_5527_;
goto v_reusejp_5516_;
}
v_reusejp_5516_:
{
lean_object* v___x_5518_; lean_object* v___x_5520_; uint8_t v_isShared_5521_; uint8_t v_isSharedCheck_5525_; 
v___x_5518_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(v___y_5473_, v_isExporting_5480_, v___x_5495_, v___y_5471_, v___x_5507_, v___x_5517_);
lean_dec_ref(v___x_5517_);
v_isSharedCheck_5525_ = !lean_is_exclusive(v___x_5518_);
if (v_isSharedCheck_5525_ == 0)
{
lean_object* v_unused_5526_; 
v_unused_5526_ = lean_ctor_get(v___x_5518_, 0);
lean_dec(v_unused_5526_);
v___x_5520_ = v___x_5518_;
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
else
{
lean_dec(v___x_5518_);
v___x_5520_ = lean_box(0);
v_isShared_5521_ = v_isSharedCheck_5525_;
goto v_resetjp_5519_;
}
v_resetjp_5519_:
{
lean_object* v___x_5523_; 
if (v_isShared_5521_ == 0)
{
lean_ctor_set(v___x_5520_, 0, v_a_5512_);
v___x_5523_ = v___x_5520_;
goto v_reusejp_5522_;
}
else
{
lean_object* v_reuseFailAlloc_5524_; 
v_reuseFailAlloc_5524_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5524_, 0, v_a_5512_);
v___x_5523_ = v_reuseFailAlloc_5524_;
goto v_reusejp_5522_;
}
v_reusejp_5522_:
{
return v___x_5523_;
}
}
}
}
}
else
{
lean_object* v_a_5529_; lean_object* v___x_5530_; lean_object* v___x_5531_; lean_object* v___x_5533_; uint8_t v_isShared_5534_; uint8_t v_isSharedCheck_5538_; 
v_a_5529_ = lean_ctor_get(v_r_5511_, 0);
lean_inc(v_a_5529_);
lean_dec_ref_known(v_r_5511_, 1);
v___x_5530_ = lean_box(0);
v___x_5531_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___lam__0(v___y_5473_, v_isExporting_5480_, v___x_5495_, v___y_5471_, v___x_5507_, v___x_5530_);
v_isSharedCheck_5538_ = !lean_is_exclusive(v___x_5531_);
if (v_isSharedCheck_5538_ == 0)
{
lean_object* v_unused_5539_; 
v_unused_5539_ = lean_ctor_get(v___x_5531_, 0);
lean_dec(v_unused_5539_);
v___x_5533_ = v___x_5531_;
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
else
{
lean_dec(v___x_5531_);
v___x_5533_ = lean_box(0);
v_isShared_5534_ = v_isSharedCheck_5538_;
goto v_resetjp_5532_;
}
v_resetjp_5532_:
{
lean_object* v___x_5536_; 
if (v_isShared_5534_ == 0)
{
lean_ctor_set_tag(v___x_5533_, 1);
lean_ctor_set(v___x_5533_, 0, v_a_5529_);
v___x_5536_ = v___x_5533_;
goto v_reusejp_5535_;
}
else
{
lean_object* v_reuseFailAlloc_5537_; 
v_reuseFailAlloc_5537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5537_, 0, v_a_5529_);
v___x_5536_ = v_reuseFailAlloc_5537_;
goto v_reusejp_5535_;
}
v_reusejp_5535_:
{
return v___x_5536_;
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
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg___boxed(lean_object* v_x_5548_, lean_object* v_isExporting_5549_, lean_object* v___y_5550_, lean_object* v___y_5551_, lean_object* v___y_5552_, lean_object* v___y_5553_, lean_object* v___y_5554_){
_start:
{
uint8_t v_isExporting_boxed_5555_; lean_object* v_res_5556_; 
v_isExporting_boxed_5555_ = lean_unbox(v_isExporting_5549_);
v_res_5556_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(v_x_5548_, v_isExporting_boxed_5555_, v___y_5550_, v___y_5551_, v___y_5552_, v___y_5553_);
lean_dec(v___y_5553_);
lean_dec_ref(v___y_5552_);
lean_dec(v___y_5551_);
lean_dec_ref(v___y_5550_);
return v_res_5556_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(lean_object* v_x_5557_, uint8_t v_when_5558_, lean_object* v___y_5559_, lean_object* v___y_5560_, lean_object* v___y_5561_, lean_object* v___y_5562_){
_start:
{
if (v_when_5558_ == 0)
{
lean_object* v___x_5564_; 
lean_inc(v___y_5562_);
lean_inc_ref(v___y_5561_);
lean_inc(v___y_5560_);
lean_inc_ref(v___y_5559_);
v___x_5564_ = lean_apply_5(v_x_5557_, v___y_5559_, v___y_5560_, v___y_5561_, v___y_5562_, lean_box(0));
return v___x_5564_;
}
else
{
uint8_t v___x_5565_; lean_object* v___x_5566_; 
v___x_5565_ = 0;
v___x_5566_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(v_x_5557_, v___x_5565_, v___y_5559_, v___y_5560_, v___y_5561_, v___y_5562_);
return v___x_5566_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg___boxed(lean_object* v_x_5567_, lean_object* v_when_5568_, lean_object* v___y_5569_, lean_object* v___y_5570_, lean_object* v___y_5571_, lean_object* v___y_5572_, lean_object* v___y_5573_){
_start:
{
uint8_t v_when_boxed_5574_; lean_object* v_res_5575_; 
v_when_boxed_5574_ = lean_unbox(v_when_5568_);
v_res_5575_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(v_x_5567_, v_when_boxed_5574_, v___y_5569_, v___y_5570_, v___y_5571_, v___y_5572_);
lean_dec(v___y_5572_);
lean_dec_ref(v___y_5571_);
lean_dec(v___y_5570_);
lean_dec_ref(v___y_5569_);
return v_res_5575_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0(lean_object* v_e_5576_, lean_object* v___y_5577_, lean_object* v___y_5578_, lean_object* v___y_5579_, lean_object* v___y_5580_){
_start:
{
lean_object* v___x_5582_; lean_object* v_a_5583_; lean_object* v___x_5584_; uint8_t v___x_5585_; lean_object* v___x_5586_; 
v___x_5582_ = l_Lean_instantiateMVars___at___00Lean_Meta_letToHave_spec__0___redArg(v_e_5576_, v___y_5578_);
v_a_5583_ = lean_ctor_get(v___x_5582_, 0);
lean_inc(v_a_5583_);
lean_dec_ref(v___x_5582_);
v___x_5584_ = lean_alloc_closure((void*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___boxed), 6, 1);
lean_closure_set(v___x_5584_, 0, v_a_5583_);
v___x_5585_ = 1;
v___x_5586_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(v___x_5584_, v___x_5585_, v___y_5577_, v___y_5578_, v___y_5579_, v___y_5580_);
return v___x_5586_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___lam__0___boxed(lean_object* v_e_5587_, lean_object* v___y_5588_, lean_object* v___y_5589_, lean_object* v___y_5590_, lean_object* v___y_5591_, lean_object* v___y_5592_){
_start:
{
lean_object* v_res_5593_; 
v_res_5593_ = l_Lean_Meta_letToHave___lam__0(v_e_5587_, v___y_5588_, v___y_5589_, v___y_5590_, v___y_5591_);
lean_dec(v___y_5591_);
lean_dec_ref(v___y_5590_);
lean_dec(v___y_5589_);
lean_dec_ref(v___y_5588_);
return v_res_5593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave(lean_object* v_e_5595_, lean_object* v_a_5596_, lean_object* v_a_5597_, lean_object* v_a_5598_, lean_object* v_a_5599_){
_start:
{
lean_object* v_toCold_5601_; lean_object* v_options_5602_; lean_object* v___f_5603_; lean_object* v___x_5604_; lean_object* v___x_5605_; lean_object* v___x_5606_; 
v_toCold_5601_ = lean_ctor_get(v_a_5598_, 0);
v_options_5602_ = lean_ctor_get(v_toCold_5601_, 2);
v___f_5603_ = lean_alloc_closure((void*)(l_Lean_Meta_letToHave___lam__0___boxed), 6, 1);
lean_closure_set(v___f_5603_, 0, v_e_5595_);
v___x_5604_ = ((lean_object*)(l_Lean_Meta_letToHave___closed__0));
v___x_5605_ = lean_box(0);
v___x_5606_ = l_Lean_profileitM___at___00Lean_Meta_letToHave_spec__2___redArg(v___x_5604_, v_options_5602_, v___f_5603_, v___x_5605_, v_a_5596_, v_a_5597_, v_a_5598_, v_a_5599_);
return v___x_5606_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_letToHave___boxed(lean_object* v_e_5607_, lean_object* v_a_5608_, lean_object* v_a_5609_, lean_object* v_a_5610_, lean_object* v_a_5611_, lean_object* v___y_5612_){
_start:
{
lean_object* v_res_5613_; 
v_res_5613_ = l_Lean_Meta_letToHave(v_e_5607_, v_a_5608_, v_a_5609_, v_a_5610_, v_a_5611_);
lean_dec(v_a_5611_);
lean_dec_ref(v_a_5610_);
lean_dec(v_a_5609_);
lean_dec_ref(v_a_5608_);
return v_res_5613_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1(lean_object* v_00_u03b1_5614_, lean_object* v_x_5615_, uint8_t v_isExporting_5616_, lean_object* v___y_5617_, lean_object* v___y_5618_, lean_object* v___y_5619_, lean_object* v___y_5620_){
_start:
{
lean_object* v___x_5622_; 
v___x_5622_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___redArg(v_x_5615_, v_isExporting_5616_, v___y_5617_, v___y_5618_, v___y_5619_, v___y_5620_);
return v___x_5622_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1___boxed(lean_object* v_00_u03b1_5623_, lean_object* v_x_5624_, lean_object* v_isExporting_5625_, lean_object* v___y_5626_, lean_object* v___y_5627_, lean_object* v___y_5628_, lean_object* v___y_5629_, lean_object* v___y_5630_){
_start:
{
uint8_t v_isExporting_boxed_5631_; lean_object* v_res_5632_; 
v_isExporting_boxed_5631_ = lean_unbox(v_isExporting_5625_);
v_res_5632_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1_spec__1(v_00_u03b1_5623_, v_x_5624_, v_isExporting_boxed_5631_, v___y_5626_, v___y_5627_, v___y_5628_, v___y_5629_);
lean_dec(v___y_5629_);
lean_dec_ref(v___y_5628_);
lean_dec(v___y_5627_);
lean_dec_ref(v___y_5626_);
return v_res_5632_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1(lean_object* v_00_u03b1_5633_, lean_object* v_x_5634_, uint8_t v_when_5635_, lean_object* v___y_5636_, lean_object* v___y_5637_, lean_object* v___y_5638_, lean_object* v___y_5639_){
_start:
{
lean_object* v___x_5641_; 
v___x_5641_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___redArg(v_x_5634_, v_when_5635_, v___y_5636_, v___y_5637_, v___y_5638_, v___y_5639_);
return v___x_5641_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1___boxed(lean_object* v_00_u03b1_5642_, lean_object* v_x_5643_, lean_object* v_when_5644_, lean_object* v___y_5645_, lean_object* v___y_5646_, lean_object* v___y_5647_, lean_object* v___y_5648_, lean_object* v___y_5649_){
_start:
{
uint8_t v_when_boxed_5650_; lean_object* v_res_5651_; 
v_when_boxed_5650_ = lean_unbox(v_when_5644_);
v_res_5651_ = l_Lean_withoutExporting___at___00Lean_Meta_letToHave_spec__1(v_00_u03b1_5642_, v_x_5643_, v_when_boxed_5650_, v___y_5645_, v___y_5646_, v___y_5647_, v___y_5648_);
lean_dec(v___y_5648_);
lean_dec_ref(v___y_5647_);
lean_dec(v___y_5646_);
lean_dec_ref(v___y_5645_);
return v_res_5651_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_5708_; uint8_t v___x_5709_; lean_object* v___x_5710_; lean_object* v___x_5711_; 
v___x_5708_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_main___closed__0));
v___x_5709_ = 0;
v___x_5710_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_));
v___x_5711_ = l_Lean_registerTraceClass(v___x_5708_, v___x_5709_, v___x_5710_);
if (lean_obj_tag(v___x_5711_) == 0)
{
lean_object* v___x_5712_; lean_object* v___x_5713_; 
lean_dec_ref_known(v___x_5711_, 1);
v___x_5712_ = ((lean_object*)(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_visitLambdaLet_finalize___closed__3));
v___x_5713_ = l_Lean_registerTraceClass(v___x_5712_, v___x_5709_, v___x_5710_);
return v___x_5713_;
}
else
{
return v___x_5711_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2____boxed(lean_object* v___y_5714_){
_start:
{
lean_object* v_res_5715_; 
v_res_5715_ = l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_();
return v_res_5715_;
}
}
lean_object* runtime_initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* runtime_initialize_Lean_AddDecl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Meta_LetToHave_instInhabitedResult_default = _init_l_Lean_Meta_LetToHave_instInhabitedResult_default();
lean_mark_persistent(l_Lean_Meta_LetToHave_instInhabitedResult_default);
l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult = _init_l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult();
lean_mark_persistent(l___private_Lean_Meta_LetToHave_0__Lean_Meta_LetToHave_instInhabitedResult);
res = l___private_Lean_Meta_LetToHave_0__Lean_Meta_initFn_00___x40_Lean_Meta_LetToHave_1606831773____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Check(uint8_t builtin);
lean_object* initialize_Lean_ReservedNameAction(uint8_t builtin);
lean_object* initialize_Lean_AddDecl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectMVars(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_LetToHave(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Check(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReservedNameAction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_AddDecl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectMVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_LetToHave(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_LetToHave(builtin);
}
#ifdef __cplusplus
}
#endif
